#include "NNfunction_ss_sRcR.h"
#include <cmath>

double NNfunction_ss_sRcR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4968)/15.3229;
   input1 = (in1 - 0.896515)/1142.64;
   input2 = (in2 - 650.382)/622.472;
   input3 = (in3 - -60.7196)/824.916;
   input4 = (in4 - 1069.86)/959.355;
   input5 = (in5 - 891.929)/942.901;
   input6 = (in6 - 911.425)/955.692;
   input7 = (in7 - 914.146)/929.085;
   input8 = (in8 - 897.083)/954.804;
   input9 = (in9 - 885.023)/941.093;
   input10 = (in10 - 980.28)/946.78;
   input11 = (in11 - 706.456)/849.425;
   input12 = (in12 - 706.183)/854.618;
   input13 = (in13 - 499.106)/512.565;
   input14 = (in14 - 717.235)/818.896;
   input15 = (in15 - 318.945)/298.177;
   input16 = (in16 - 533.61)/561.671;
   input17 = (in17 - 743.107)/874.991;
   input18 = (in18 - 298.887)/290.573;
   input19 = (in19 - 789.315)/871.58;
   input20 = (in20 - -8.64365)/491.806;
   input21 = (in21 - 4.38104)/1165.68;
   input22 = (in22 - -4.29077)/1191.77;
   input23 = (in23 - -190.341)/595.361;
   switch(index) {
     case 0:
         return neuron0x306d4b0();
     default:
         return 0.;
   }
}

double NNfunction_ss_sRcR::Value(int index, double* input) {
   input0 = (input[0] - 23.4968)/15.3229;
   input1 = (input[1] - 0.896515)/1142.64;
   input2 = (input[2] - 650.382)/622.472;
   input3 = (input[3] - -60.7196)/824.916;
   input4 = (input[4] - 1069.86)/959.355;
   input5 = (input[5] - 891.929)/942.901;
   input6 = (input[6] - 911.425)/955.692;
   input7 = (input[7] - 914.146)/929.085;
   input8 = (input[8] - 897.083)/954.804;
   input9 = (input[9] - 885.023)/941.093;
   input10 = (input[10] - 980.28)/946.78;
   input11 = (input[11] - 706.456)/849.425;
   input12 = (input[12] - 706.183)/854.618;
   input13 = (input[13] - 499.106)/512.565;
   input14 = (input[14] - 717.235)/818.896;
   input15 = (input[15] - 318.945)/298.177;
   input16 = (input[16] - 533.61)/561.671;
   input17 = (input[17] - 743.107)/874.991;
   input18 = (input[18] - 298.887)/290.573;
   input19 = (input[19] - 789.315)/871.58;
   input20 = (input[20] - -8.64365)/491.806;
   input21 = (input[21] - 4.38104)/1165.68;
   input22 = (input[22] - -4.29077)/1191.77;
   input23 = (input[23] - -190.341)/595.361;
   switch(index) {
     case 0:
         return neuron0x306d4b0();
     default:
         return 0.;
   }
}

double NNfunction_ss_sRcR::neuron0x3039570() {
   return input0;
}

double NNfunction_ss_sRcR::neuron0x30398b0() {
   return input1;
}

double NNfunction_ss_sRcR::neuron0x3039bf0() {
   return input2;
}

double NNfunction_ss_sRcR::neuron0x3039f30() {
   return input3;
}

double NNfunction_ss_sRcR::neuron0x303a270() {
   return input4;
}

double NNfunction_ss_sRcR::neuron0x303a5b0() {
   return input5;
}

double NNfunction_ss_sRcR::neuron0x303a8f0() {
   return input6;
}

double NNfunction_ss_sRcR::neuron0x303ac30() {
   return input7;
}

double NNfunction_ss_sRcR::neuron0x303af70() {
   return input8;
}

double NNfunction_ss_sRcR::neuron0x303b2b0() {
   return input9;
}

double NNfunction_ss_sRcR::neuron0x303b5f0() {
   return input10;
}

double NNfunction_ss_sRcR::neuron0x303b930() {
   return input11;
}

double NNfunction_ss_sRcR::neuron0x303bc70() {
   return input12;
}

double NNfunction_ss_sRcR::neuron0x303bfb0() {
   return input13;
}

double NNfunction_ss_sRcR::neuron0x303c2f0() {
   return input14;
}

double NNfunction_ss_sRcR::neuron0x303c630() {
   return input15;
}

double NNfunction_ss_sRcR::neuron0x303c970() {
   return input16;
}

double NNfunction_ss_sRcR::neuron0x303ced0() {
   return input17;
}

double NNfunction_ss_sRcR::neuron0x303d0f0() {
   return input18;
}

double NNfunction_ss_sRcR::neuron0x303d430() {
   return input19;
}

double NNfunction_ss_sRcR::neuron0x303d770() {
   return input20;
}

double NNfunction_ss_sRcR::neuron0x303dab0() {
   return input21;
}

double NNfunction_ss_sRcR::neuron0x303ddf0() {
   return input22;
}

double NNfunction_ss_sRcR::neuron0x303e130() {
   return input23;
}

double NNfunction_ss_sRcR::input0x303e5d0() {
   double input = -1.35203;
   input += synapse0x2df93e0();
   input += synapse0x3039430();
   input += synapse0x3039470();
   input += synapse0x303e880();
   input += synapse0x303e8c0();
   input += synapse0x303e900();
   input += synapse0x303e940();
   input += synapse0x303e980();
   input += synapse0x303e9c0();
   input += synapse0x303ea00();
   input += synapse0x303ea40();
   input += synapse0x303ea80();
   input += synapse0x303eac0();
   input += synapse0x303eb00();
   input += synapse0x303eb40();
   input += synapse0x303eb80();
   input += synapse0x30393a0();
   input += synapse0x30393e0();
   input += synapse0x2deac80();
   input += synapse0x2deacc0();
   input += synapse0x303ede0();
   input += synapse0x303ee20();
   input += synapse0x303ee60();
   input += synapse0x303eea0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x303e5d0() {
   double input = input0x303e5d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x303eee0() {
   double input = 0.488483;
   input += synapse0x303f220();
   input += synapse0x303f260();
   input += synapse0x303f2a0();
   input += synapse0x303f2e0();
   input += synapse0x303f320();
   input += synapse0x303f360();
   input += synapse0x303f3a0();
   input += synapse0x303f3e0();
   input += synapse0x303f420();
   input += synapse0x303ecd0();
   input += synapse0x303ed10();
   input += synapse0x303ed50();
   input += synapse0x303ed90();
   input += synapse0x303f670();
   input += synapse0x303f6b0();
   input += synapse0x303f6f0();
   input += synapse0x303f070();
   input += synapse0x303f0b0();
   input += synapse0x303f840();
   input += synapse0x303f880();
   input += synapse0x303f8c0();
   input += synapse0x303f900();
   input += synapse0x303f940();
   input += synapse0x303f980();
   return input;
}

double NNfunction_ss_sRcR::neuron0x303eee0() {
   double input = input0x303eee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x303f9c0() {
   double input = -1.28835;
   input += synapse0x303fd00();
   input += synapse0x303fd40();
   input += synapse0x303fd80();
   input += synapse0x303fdc0();
   input += synapse0x303fe00();
   input += synapse0x303fe40();
   input += synapse0x303fe80();
   input += synapse0x303fec0();
   input += synapse0x303ff00();
   input += synapse0x303ff40();
   input += synapse0x303ff80();
   input += synapse0x303ffc0();
   input += synapse0x3040000();
   input += synapse0x3040040();
   input += synapse0x3040080();
   input += synapse0x30400c0();
   input += synapse0x303fb50();
   input += synapse0x303fb90();
   input += synapse0x2df8ad0();
   input += synapse0x2df8b10();
   input += synapse0x3028600();
   input += synapse0x3028640();
   input += synapse0x3028680();
   input += synapse0x30394b0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x303f9c0() {
   double input = input0x303f9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x2df9250() {
   double input = 1.69276;
   input += synapse0x303f610();
   input += synapse0x30394f0();
   input += synapse0x3039530();
   input += synapse0x3040210();
   input += synapse0x3040250();
   input += synapse0x3040290();
   input += synapse0x30402d0();
   input += synapse0x3040310();
   input += synapse0x3040350();
   input += synapse0x3040390();
   input += synapse0x30403d0();
   input += synapse0x3040410();
   input += synapse0x3040450();
   input += synapse0x3040490();
   input += synapse0x30404d0();
   input += synapse0x3040510();
   input += synapse0x303f460();
   input += synapse0x303f4a0();
   input += synapse0x3040660();
   input += synapse0x30406a0();
   input += synapse0x30406e0();
   input += synapse0x3040720();
   input += synapse0x3040760();
   input += synapse0x30407a0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x2df9250() {
   double input = input0x2df9250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x30407e0() {
   double input = -2.94205;
   input += synapse0x3040b20();
   input += synapse0x3040b60();
   input += synapse0x3040ba0();
   input += synapse0x3040be0();
   input += synapse0x3040c20();
   input += synapse0x3040c60();
   input += synapse0x3040ca0();
   input += synapse0x3040ce0();
   input += synapse0x3040d20();
   input += synapse0x3040d60();
   input += synapse0x3040da0();
   input += synapse0x3040de0();
   input += synapse0x3040e20();
   input += synapse0x3040e60();
   input += synapse0x3040ea0();
   input += synapse0x3040ee0();
   input += synapse0x3040970();
   input += synapse0x30409b0();
   input += synapse0x3041030();
   input += synapse0x3041070();
   input += synapse0x30410b0();
   input += synapse0x30410f0();
   input += synapse0x3041130();
   input += synapse0x3041170();
   return input;
}

double NNfunction_ss_sRcR::neuron0x30407e0() {
   double input = input0x30407e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x30411b0() {
   double input = 2.10041;
   input += synapse0x30414f0();
   input += synapse0x3041530();
   input += synapse0x3041570();
   input += synapse0x30415b0();
   input += synapse0x30415f0();
   input += synapse0x3041630();
   input += synapse0x3041670();
   input += synapse0x30416b0();
   input += synapse0x30416f0();
   input += synapse0x2df8e40();
   input += synapse0x2df8e80();
   input += synapse0x2df8ec0();
   input += synapse0x2df8f00();
   input += synapse0x2df8f40();
   input += synapse0x2df8f80();
   input += synapse0x2df8fc0();
   input += synapse0x3041340();
   input += synapse0x3041380();
   input += synapse0x2df9110();
   input += synapse0x2df9150();
   input += synapse0x2df9190();
   input += synapse0x2df91d0();
   input += synapse0x2df9210();
   input += synapse0x3041f40();
   return input;
}

double NNfunction_ss_sRcR::neuron0x30411b0() {
   double input = input0x30411b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x3041f80() {
   double input = -0.232048;
   input += synapse0x30422c0();
   input += synapse0x3042300();
   input += synapse0x3042340();
   input += synapse0x3042380();
   input += synapse0x30423c0();
   input += synapse0x3042400();
   input += synapse0x3042440();
   input += synapse0x3042480();
   input += synapse0x30424c0();
   input += synapse0x3042500();
   input += synapse0x3042540();
   input += synapse0x3042580();
   input += synapse0x30425c0();
   input += synapse0x3042600();
   input += synapse0x3042640();
   input += synapse0x3042680();
   input += synapse0x3042110();
   input += synapse0x3042150();
   input += synapse0x30427d0();
   input += synapse0x3042810();
   input += synapse0x3042850();
   input += synapse0x3042890();
   input += synapse0x30428d0();
   input += synapse0x3042910();
   return input;
}

double NNfunction_ss_sRcR::neuron0x3041f80() {
   double input = input0x3041f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x3042950() {
   double input = -0.494141;
   input += synapse0x3042c90();
   input += synapse0x3042cd0();
   input += synapse0x3042d10();
   input += synapse0x3042d50();
   input += synapse0x3042d90();
   input += synapse0x3042dd0();
   input += synapse0x3042e10();
   input += synapse0x3042e50();
   input += synapse0x3042e90();
   input += synapse0x3042ed0();
   input += synapse0x3042f10();
   input += synapse0x3042f50();
   input += synapse0x3042f90();
   input += synapse0x3042fd0();
   input += synapse0x3043010();
   input += synapse0x3043050();
   input += synapse0x3042ae0();
   input += synapse0x3042b20();
   input += synapse0x30431a0();
   input += synapse0x30431e0();
   input += synapse0x3043220();
   input += synapse0x3043260();
   input += synapse0x30432a0();
   input += synapse0x30432e0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x3042950() {
   double input = input0x3042950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x3043320() {
   double input = -0.695223;
   input += synapse0x303cdc0();
   input += synapse0x303ce00();
   input += synapse0x303ce40();
   input += synapse0x303ce80();
   input += synapse0x3043870();
   input += synapse0x30438b0();
   input += synapse0x30438f0();
   input += synapse0x3043930();
   input += synapse0x3043970();
   input += synapse0x30439b0();
   input += synapse0x30439f0();
   input += synapse0x3043a30();
   input += synapse0x3043a70();
   input += synapse0x3043ab0();
   input += synapse0x3043af0();
   input += synapse0x3043b30();
   input += synapse0x30434b0();
   input += synapse0x30434f0();
   input += synapse0x3043c80();
   input += synapse0x3043cc0();
   input += synapse0x3043d00();
   input += synapse0x3043d40();
   input += synapse0x3043d80();
   input += synapse0x3043dc0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x3043320() {
   double input = input0x3043320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x3043e00() {
   double input = 1.48061;
   input += synapse0x3044140();
   input += synapse0x3044180();
   input += synapse0x30441c0();
   input += synapse0x3044200();
   input += synapse0x3044240();
   input += synapse0x3044280();
   input += synapse0x30442c0();
   input += synapse0x3044300();
   input += synapse0x3044340();
   input += synapse0x3044380();
   input += synapse0x30443c0();
   input += synapse0x3044400();
   input += synapse0x3044440();
   input += synapse0x3044480();
   input += synapse0x30444c0();
   input += synapse0x3044500();
   input += synapse0x3043f90();
   input += synapse0x3043fd0();
   input += synapse0x3044650();
   input += synapse0x3044690();
   input += synapse0x30446d0();
   input += synapse0x3044710();
   input += synapse0x3044750();
   input += synapse0x3044790();
   return input;
}

double NNfunction_ss_sRcR::neuron0x3043e00() {
   double input = input0x3043e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x30447d0() {
   double input = 1.22627;
   input += synapse0x3044b10();
   input += synapse0x3044b50();
   input += synapse0x3044b90();
   input += synapse0x3044bd0();
   input += synapse0x3044c10();
   input += synapse0x3044c50();
   input += synapse0x3044c90();
   input += synapse0x3044cd0();
   input += synapse0x3044d10();
   input += synapse0x3044d50();
   input += synapse0x3044d90();
   input += synapse0x3044dd0();
   input += synapse0x3044e10();
   input += synapse0x3044e50();
   input += synapse0x3044e90();
   input += synapse0x3044ed0();
   input += synapse0x3044960();
   input += synapse0x30449a0();
   input += synapse0x3041730();
   input += synapse0x3041770();
   input += synapse0x30417b0();
   input += synapse0x30417f0();
   input += synapse0x3041830();
   input += synapse0x3041870();
   return input;
}

double NNfunction_ss_sRcR::neuron0x30447d0() {
   double input = input0x30447d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x30418b0() {
   double input = -0.469867;
   input += synapse0x3041bf0();
   input += synapse0x3041c30();
   input += synapse0x3041c70();
   input += synapse0x3041cb0();
   input += synapse0x3041cf0();
   input += synapse0x3041d30();
   input += synapse0x3041d70();
   input += synapse0x3041db0();
   input += synapse0x3041df0();
   input += synapse0x3041e30();
   input += synapse0x3041e70();
   input += synapse0x3041eb0();
   input += synapse0x3041ef0();
   input += synapse0x3046030();
   input += synapse0x3046070();
   input += synapse0x30460b0();
   input += synapse0x3041a40();
   input += synapse0x3041a80();
   input += synapse0x3046200();
   input += synapse0x3046240();
   input += synapse0x3046280();
   input += synapse0x30462c0();
   input += synapse0x3046300();
   input += synapse0x3046340();
   return input;
}

double NNfunction_ss_sRcR::neuron0x30418b0() {
   double input = input0x30418b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x3046380() {
   double input = 0.970315;
   input += synapse0x30466c0();
   input += synapse0x3046700();
   input += synapse0x3046740();
   input += synapse0x3046780();
   input += synapse0x30467c0();
   input += synapse0x3046800();
   input += synapse0x3046840();
   input += synapse0x3046880();
   input += synapse0x30468c0();
   input += synapse0x3046900();
   input += synapse0x3046940();
   input += synapse0x3046980();
   input += synapse0x30469c0();
   input += synapse0x3046a00();
   input += synapse0x3046a40();
   input += synapse0x3046a80();
   input += synapse0x3046510();
   input += synapse0x3046550();
   input += synapse0x3046bd0();
   input += synapse0x3046c10();
   input += synapse0x3046c50();
   input += synapse0x3046c90();
   input += synapse0x3046cd0();
   input += synapse0x3046d10();
   return input;
}

double NNfunction_ss_sRcR::neuron0x3046380() {
   double input = input0x3046380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x3046d50() {
   double input = 0.0466193;
   input += synapse0x3047090();
   input += synapse0x30470d0();
   input += synapse0x3047110();
   input += synapse0x3047150();
   input += synapse0x3047190();
   input += synapse0x30471d0();
   input += synapse0x3047210();
   input += synapse0x3047250();
   input += synapse0x3047290();
   input += synapse0x30472d0();
   input += synapse0x3047310();
   input += synapse0x3047350();
   input += synapse0x3047390();
   input += synapse0x30473d0();
   input += synapse0x3047410();
   input += synapse0x3047450();
   input += synapse0x3046ee0();
   input += synapse0x3046f20();
   input += synapse0x30475a0();
   input += synapse0x30475e0();
   input += synapse0x3047620();
   input += synapse0x3047660();
   input += synapse0x30476a0();
   input += synapse0x30476e0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x3046d50() {
   double input = input0x3046d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x3047720() {
   double input = 0.0339635;
   input += synapse0x3047a60();
   input += synapse0x3047aa0();
   input += synapse0x3047ae0();
   input += synapse0x3047b20();
   input += synapse0x3047b60();
   input += synapse0x3047ba0();
   input += synapse0x3047be0();
   input += synapse0x3047c20();
   input += synapse0x3047c60();
   input += synapse0x3047ca0();
   input += synapse0x3047ce0();
   input += synapse0x3047d20();
   input += synapse0x3047d60();
   input += synapse0x3047da0();
   input += synapse0x3047de0();
   input += synapse0x3047e20();
   input += synapse0x30478b0();
   input += synapse0x30478f0();
   input += synapse0x3047f70();
   input += synapse0x3047fb0();
   input += synapse0x3047ff0();
   input += synapse0x3048030();
   input += synapse0x3048070();
   input += synapse0x30480b0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x3047720() {
   double input = input0x3047720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x30480f0() {
   double input = 4.65311;
   input += synapse0x3048430();
   input += synapse0x3039790();
   input += synapse0x30397d0();
   input += synapse0x3039ad0();
   input += synapse0x3039b10();
   input += synapse0x3039e10();
   input += synapse0x3039e50();
   input += synapse0x303a150();
   input += synapse0x303a190();
   input += synapse0x303a490();
   input += synapse0x303a4d0();
   input += synapse0x303a7d0();
   input += synapse0x303a810();
   input += synapse0x303ab10();
   input += synapse0x303ab50();
   input += synapse0x303ae50();
   input += synapse0x303ae90();
   input += synapse0x303b190();
   input += synapse0x303b1d0();
   input += synapse0x303b4d0();
   input += synapse0x303b510();
   input += synapse0x303b810();
   input += synapse0x303b850();
   input += synapse0x303bb50();
   return input;
}

double NNfunction_ss_sRcR::neuron0x30480f0() {
   double input = input0x30480f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x3049f00() {
   double input = -0.509955;
   input += synapse0x303bb90();
   input += synapse0x303c850();
   input += synapse0x303c890();
   input += synapse0x3048280();
   input += synapse0x30482c0();
   input += synapse0x303cb90();
   input += synapse0x303cbd0();
   input += synapse0x2deab60();
   input += synapse0x2deaba0();
   input += synapse0x303d310();
   input += synapse0x303d350();
   input += synapse0x303d650();
   input += synapse0x303d690();
   input += synapse0x303d990();
   input += synapse0x303d9d0();
   input += synapse0x303dcd0();
   input += synapse0x303dd10();
   input += synapse0x303e010();
   input += synapse0x303e050();
   input += synapse0x303e350();
   input += synapse0x303e390();
   input += synapse0x303be90();
   input += synapse0x303bed0();
   input += synapse0x304a1a0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x3049f00() {
   double input = input0x3049f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x304a1e0() {
   double input = -3.75323;
   input += synapse0x304a520();
   input += synapse0x304a560();
   input += synapse0x304a5a0();
   input += synapse0x304a5e0();
   input += synapse0x304a620();
   input += synapse0x304a660();
   input += synapse0x304a6a0();
   input += synapse0x304a6e0();
   input += synapse0x304a720();
   input += synapse0x304a760();
   input += synapse0x304a7a0();
   input += synapse0x304a7e0();
   input += synapse0x304a820();
   input += synapse0x304a860();
   input += synapse0x304a8a0();
   input += synapse0x304a8e0();
   input += synapse0x304a370();
   input += synapse0x304a3b0();
   input += synapse0x304aa30();
   input += synapse0x304aa70();
   input += synapse0x304aab0();
   input += synapse0x304aaf0();
   input += synapse0x304ab30();
   input += synapse0x304ab70();
   return input;
}

double NNfunction_ss_sRcR::neuron0x304a1e0() {
   double input = input0x304a1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x304abb0() {
   double input = -0.448404;
   input += synapse0x304aef0();
   input += synapse0x304af30();
   input += synapse0x304af70();
   input += synapse0x304afb0();
   input += synapse0x304aff0();
   input += synapse0x304b030();
   input += synapse0x304b070();
   input += synapse0x304b0b0();
   input += synapse0x304b0f0();
   input += synapse0x304b130();
   input += synapse0x304b170();
   input += synapse0x304b1b0();
   input += synapse0x304b1f0();
   input += synapse0x304b230();
   input += synapse0x304b270();
   input += synapse0x304b2b0();
   input += synapse0x304ad40();
   input += synapse0x304ad80();
   input += synapse0x304b400();
   input += synapse0x304b440();
   input += synapse0x304b480();
   input += synapse0x304b4c0();
   input += synapse0x304b500();
   input += synapse0x304b540();
   return input;
}

double NNfunction_ss_sRcR::neuron0x304abb0() {
   double input = input0x304abb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x304b580() {
   double input = 0.265056;
   input += synapse0x304b8c0();
   input += synapse0x304b900();
   input += synapse0x304b940();
   input += synapse0x304b980();
   input += synapse0x304b9c0();
   input += synapse0x304ba00();
   input += synapse0x304ba40();
   input += synapse0x304ba80();
   input += synapse0x304bac0();
   input += synapse0x304bb00();
   input += synapse0x304bb40();
   input += synapse0x304bb80();
   input += synapse0x304bbc0();
   input += synapse0x304bc00();
   input += synapse0x304bc40();
   input += synapse0x304bc80();
   input += synapse0x304b710();
   input += synapse0x304b750();
   input += synapse0x304bdd0();
   input += synapse0x304be10();
   input += synapse0x304be50();
   input += synapse0x304be90();
   input += synapse0x304bed0();
   input += synapse0x304bf10();
   return input;
}

double NNfunction_ss_sRcR::neuron0x304b580() {
   double input = input0x304b580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x304bf50() {
   double input = -0.451123;
   input += synapse0x304c290();
   input += synapse0x304c2d0();
   input += synapse0x304c310();
   input += synapse0x304c350();
   input += synapse0x304c390();
   input += synapse0x304c3d0();
   input += synapse0x304c410();
   input += synapse0x304c450();
   input += synapse0x304c490();
   input += synapse0x304c4d0();
   input += synapse0x304c510();
   input += synapse0x304c550();
   input += synapse0x304c590();
   input += synapse0x304c5d0();
   input += synapse0x304c610();
   input += synapse0x304c650();
   input += synapse0x304c0e0();
   input += synapse0x304c120();
   input += synapse0x304c7a0();
   input += synapse0x304c7e0();
   input += synapse0x304c820();
   input += synapse0x304c860();
   input += synapse0x304c8a0();
   input += synapse0x304c8e0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x304bf50() {
   double input = input0x304bf50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x304c920() {
   double input = -2.43755;
   input += synapse0x304cc60();
   input += synapse0x304cca0();
   input += synapse0x304cce0();
   input += synapse0x304cd20();
   input += synapse0x304cd60();
   input += synapse0x304cda0();
   input += synapse0x304cde0();
   input += synapse0x304ce20();
   input += synapse0x304ce60();
   input += synapse0x3045020();
   input += synapse0x3045060();
   input += synapse0x30450a0();
   input += synapse0x30450e0();
   input += synapse0x3045120();
   input += synapse0x3045160();
   input += synapse0x30451a0();
   input += synapse0x304cab0();
   input += synapse0x304caf0();
   input += synapse0x30452f0();
   input += synapse0x3045330();
   input += synapse0x3045370();
   input += synapse0x30453b0();
   input += synapse0x30453f0();
   input += synapse0x3045430();
   return input;
}

double NNfunction_ss_sRcR::neuron0x304c920() {
   double input = input0x304c920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x3045470() {
   double input = 1.79004;
   input += synapse0x30457b0();
   input += synapse0x30457f0();
   input += synapse0x3045830();
   input += synapse0x3045870();
   input += synapse0x30458b0();
   input += synapse0x30458f0();
   input += synapse0x3045930();
   input += synapse0x3045970();
   input += synapse0x30459b0();
   input += synapse0x30459f0();
   input += synapse0x3045a30();
   input += synapse0x3045a70();
   input += synapse0x3045ab0();
   input += synapse0x3045af0();
   input += synapse0x3045b30();
   input += synapse0x3045b70();
   input += synapse0x3045600();
   input += synapse0x3045640();
   input += synapse0x3045cc0();
   input += synapse0x3045d00();
   input += synapse0x3045d40();
   input += synapse0x3045d80();
   input += synapse0x3045dc0();
   input += synapse0x3045e00();
   return input;
}

double NNfunction_ss_sRcR::neuron0x3045470() {
   double input = input0x3045470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x3045e40() {
   double input = -0.177838;
   input += synapse0x3045fd0();
   input += synapse0x304f060();
   input += synapse0x304f0a0();
   input += synapse0x304f0e0();
   input += synapse0x304f120();
   input += synapse0x304f160();
   input += synapse0x304f1a0();
   input += synapse0x304f1e0();
   input += synapse0x304f220();
   input += synapse0x304f260();
   input += synapse0x304f2a0();
   input += synapse0x304f2e0();
   input += synapse0x304f320();
   input += synapse0x304f360();
   input += synapse0x304f3a0();
   input += synapse0x304f3e0();
   input += synapse0x304eeb0();
   input += synapse0x304eef0();
   input += synapse0x304f530();
   input += synapse0x304f570();
   input += synapse0x304f5b0();
   input += synapse0x304f5f0();
   input += synapse0x304f630();
   input += synapse0x304f670();
   return input;
}

double NNfunction_ss_sRcR::neuron0x3045e40() {
   double input = input0x3045e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x304f6b0() {
   double input = 1.6391;
   input += synapse0x304f9f0();
   input += synapse0x304fa30();
   input += synapse0x304fa70();
   input += synapse0x304fab0();
   input += synapse0x304faf0();
   input += synapse0x304fb30();
   input += synapse0x304fb70();
   input += synapse0x304fbb0();
   input += synapse0x304fbf0();
   input += synapse0x304fc30();
   input += synapse0x304fc70();
   input += synapse0x304fcb0();
   input += synapse0x304fcf0();
   input += synapse0x304fd30();
   input += synapse0x304fd70();
   input += synapse0x304fdb0();
   input += synapse0x304f840();
   input += synapse0x304f880();
   input += synapse0x304ff00();
   input += synapse0x304ff40();
   input += synapse0x304ff80();
   input += synapse0x304ffc0();
   input += synapse0x3050000();
   input += synapse0x3050040();
   return input;
}

double NNfunction_ss_sRcR::neuron0x304f6b0() {
   double input = input0x304f6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x3050080() {
   double input = -0.333591;
   input += synapse0x30503c0();
   input += synapse0x3050400();
   input += synapse0x3050440();
   input += synapse0x3050480();
   input += synapse0x30504c0();
   input += synapse0x3050500();
   input += synapse0x3050540();
   input += synapse0x3050580();
   input += synapse0x30505c0();
   input += synapse0x3050600();
   input += synapse0x3050640();
   input += synapse0x3050680();
   input += synapse0x30506c0();
   input += synapse0x3050700();
   input += synapse0x3050740();
   input += synapse0x3050780();
   input += synapse0x3050210();
   input += synapse0x3050250();
   input += synapse0x30508d0();
   input += synapse0x3050910();
   input += synapse0x3050950();
   input += synapse0x3050990();
   input += synapse0x30509d0();
   input += synapse0x3050a10();
   return input;
}

double NNfunction_ss_sRcR::neuron0x3050080() {
   double input = input0x3050080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x3050a50() {
   double input = -2.06003;
   input += synapse0x3050d90();
   input += synapse0x3050dd0();
   input += synapse0x3050e10();
   input += synapse0x3050e50();
   input += synapse0x3050e90();
   input += synapse0x3050ed0();
   input += synapse0x3050f10();
   input += synapse0x3050f50();
   input += synapse0x3050f90();
   input += synapse0x3050fd0();
   input += synapse0x3051010();
   input += synapse0x3051050();
   input += synapse0x3051090();
   input += synapse0x30510d0();
   input += synapse0x3051110();
   input += synapse0x3051150();
   input += synapse0x3050be0();
   input += synapse0x3050c20();
   input += synapse0x30512a0();
   input += synapse0x30512e0();
   input += synapse0x3051320();
   input += synapse0x3051360();
   input += synapse0x30513a0();
   input += synapse0x30513e0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x3050a50() {
   double input = input0x3050a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x3051420() {
   double input = -1.6514;
   input += synapse0x3051760();
   input += synapse0x30517a0();
   input += synapse0x30517e0();
   input += synapse0x3051820();
   input += synapse0x3051860();
   input += synapse0x30518a0();
   input += synapse0x30518e0();
   input += synapse0x3051920();
   input += synapse0x3051960();
   input += synapse0x30519a0();
   input += synapse0x30519e0();
   input += synapse0x3051a20();
   input += synapse0x3051a60();
   input += synapse0x3051aa0();
   input += synapse0x3051ae0();
   input += synapse0x3051b20();
   input += synapse0x30515b0();
   input += synapse0x30515f0();
   input += synapse0x3051c70();
   input += synapse0x3051cb0();
   input += synapse0x3051cf0();
   input += synapse0x3051d30();
   input += synapse0x3051d70();
   input += synapse0x3051db0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x3051420() {
   double input = input0x3051420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x3051df0() {
   double input = -0.271515;
   input += synapse0x3052130();
   input += synapse0x3052170();
   input += synapse0x30521b0();
   input += synapse0x30521f0();
   input += synapse0x3052230();
   input += synapse0x3052270();
   input += synapse0x30522b0();
   input += synapse0x30522f0();
   input += synapse0x3052330();
   input += synapse0x3052370();
   input += synapse0x30523b0();
   input += synapse0x30523f0();
   input += synapse0x3052430();
   input += synapse0x3052470();
   input += synapse0x30524b0();
   input += synapse0x30524f0();
   input += synapse0x3051f80();
   input += synapse0x3051fc0();
   input += synapse0x3052640();
   input += synapse0x3052680();
   input += synapse0x30526c0();
   input += synapse0x3052700();
   input += synapse0x3052740();
   input += synapse0x3052780();
   return input;
}

double NNfunction_ss_sRcR::neuron0x3051df0() {
   double input = input0x3051df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x30527c0() {
   double input = -1.09403;
   input += synapse0x3052b00();
   input += synapse0x3052b40();
   input += synapse0x3052b80();
   input += synapse0x3052bc0();
   input += synapse0x3052c00();
   input += synapse0x3052c40();
   input += synapse0x3052c80();
   input += synapse0x3052cc0();
   input += synapse0x3052d00();
   input += synapse0x3052d40();
   input += synapse0x3052d80();
   input += synapse0x3052dc0();
   input += synapse0x3052e00();
   input += synapse0x3052e40();
   input += synapse0x3052e80();
   input += synapse0x3052ec0();
   input += synapse0x3052950();
   input += synapse0x3052990();
   input += synapse0x3053010();
   input += synapse0x3053050();
   input += synapse0x3053090();
   input += synapse0x30530d0();
   input += synapse0x3053110();
   input += synapse0x3053150();
   return input;
}

double NNfunction_ss_sRcR::neuron0x30527c0() {
   double input = input0x30527c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x3053190() {
   double input = -0.676515;
   input += synapse0x30534d0();
   input += synapse0x3053510();
   input += synapse0x3053550();
   input += synapse0x3053590();
   input += synapse0x30535d0();
   input += synapse0x3053610();
   input += synapse0x3053650();
   input += synapse0x3053690();
   input += synapse0x30536d0();
   input += synapse0x3053710();
   input += synapse0x3053750();
   input += synapse0x3053790();
   input += synapse0x30537d0();
   input += synapse0x3053810();
   input += synapse0x3053850();
   input += synapse0x3053890();
   input += synapse0x3053320();
   input += synapse0x3053360();
   input += synapse0x30539e0();
   input += synapse0x3053a20();
   input += synapse0x3053a60();
   input += synapse0x3053aa0();
   input += synapse0x3053ae0();
   input += synapse0x3053b20();
   return input;
}

double NNfunction_ss_sRcR::neuron0x3053190() {
   double input = input0x3053190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x3053b60() {
   double input = 0.374478;
   input += synapse0x3053ea0();
   input += synapse0x3048470();
   input += synapse0x30484b0();
   input += synapse0x30484f0();
   input += synapse0x3048740();
   input += synapse0x3048780();
   input += synapse0x30487c0();
   input += synapse0x3048a10();
   input += synapse0x3048a50();
   input += synapse0x3048ca0();
   input += synapse0x3048ce0();
   input += synapse0x3048d20();
   input += synapse0x3048f70();
   input += synapse0x3048fb0();
   input += synapse0x3049200();
   input += synapse0x3049240();
   input += synapse0x3053cf0();
   input += synapse0x3053d30();
   input += synapse0x3049390();
   input += synapse0x30498a0();
   input += synapse0x30498e0();
   input += synapse0x3049920();
   input += synapse0x3049b70();
   input += synapse0x3049bb0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x3053b60() {
   double input = input0x3053b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x3049bf0() {
   double input = -1.3217;
   input += synapse0x3049460();
   input += synapse0x30494a0();
   input += synapse0x30494e0();
   input += synapse0x3049520();
   input += synapse0x3049ea0();
   input += synapse0x30561f0();
   input += synapse0x3056230();
   input += synapse0x3056270();
   input += synapse0x30562b0();
   input += synapse0x30562f0();
   input += synapse0x3056330();
   input += synapse0x3056370();
   input += synapse0x30563b0();
   input += synapse0x30563f0();
   input += synapse0x3056430();
   input += synapse0x3056470();
   input += synapse0x3049d80();
   input += synapse0x3049dc0();
   input += synapse0x30565c0();
   input += synapse0x3056600();
   input += synapse0x3056640();
   input += synapse0x3056680();
   input += synapse0x30566c0();
   input += synapse0x3056700();
   return input;
}

double NNfunction_ss_sRcR::neuron0x3049bf0() {
   double input = input0x3049bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x3056740() {
   double input = 2.76351;
   input += synapse0x3056a80();
   input += synapse0x3056ac0();
   input += synapse0x3056b00();
   input += synapse0x3056b40();
   input += synapse0x3056b80();
   input += synapse0x3056bc0();
   input += synapse0x3056c00();
   input += synapse0x3056c40();
   input += synapse0x3056c80();
   input += synapse0x3056cc0();
   input += synapse0x3056d00();
   input += synapse0x3056d40();
   input += synapse0x3056d80();
   input += synapse0x3056dc0();
   input += synapse0x3056e00();
   input += synapse0x3056e40();
   input += synapse0x30568d0();
   input += synapse0x3056910();
   input += synapse0x3056f90();
   input += synapse0x3056fd0();
   input += synapse0x3057010();
   input += synapse0x3057050();
   input += synapse0x3057090();
   input += synapse0x30570d0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x3056740() {
   double input = input0x3056740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x3057110() {
   double input = -0.363489;
   input += synapse0x3057450();
   input += synapse0x3057490();
   input += synapse0x30574d0();
   input += synapse0x3057510();
   input += synapse0x3057550();
   input += synapse0x3057590();
   input += synapse0x30575d0();
   input += synapse0x3057610();
   input += synapse0x3057650();
   input += synapse0x3057690();
   input += synapse0x30576d0();
   input += synapse0x3057710();
   input += synapse0x3057750();
   input += synapse0x3057790();
   input += synapse0x30577d0();
   input += synapse0x3057810();
   input += synapse0x30572a0();
   input += synapse0x30572e0();
   input += synapse0x3057960();
   input += synapse0x30579a0();
   input += synapse0x30579e0();
   input += synapse0x3057a20();
   input += synapse0x3057a60();
   input += synapse0x3057aa0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x3057110() {
   double input = input0x3057110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x3057ae0() {
   double input = 0.154037;
   input += synapse0x3057e20();
   input += synapse0x3057e60();
   input += synapse0x3057ea0();
   input += synapse0x3057ee0();
   input += synapse0x3057f20();
   input += synapse0x3057f60();
   input += synapse0x3057fa0();
   input += synapse0x3057fe0();
   input += synapse0x3058020();
   input += synapse0x3058060();
   input += synapse0x30580a0();
   input += synapse0x30580e0();
   input += synapse0x3058120();
   input += synapse0x3058160();
   input += synapse0x30581a0();
   input += synapse0x30581e0();
   input += synapse0x3057c70();
   input += synapse0x3057cb0();
   input += synapse0x3058330();
   input += synapse0x3058370();
   input += synapse0x30583b0();
   input += synapse0x30583f0();
   input += synapse0x3058430();
   input += synapse0x3058470();
   return input;
}

double NNfunction_ss_sRcR::neuron0x3057ae0() {
   double input = input0x3057ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x30584b0() {
   double input = 2.57585;
   input += synapse0x30587f0();
   input += synapse0x3058830();
   input += synapse0x3058870();
   input += synapse0x30588b0();
   input += synapse0x30588f0();
   input += synapse0x3058930();
   input += synapse0x3058970();
   input += synapse0x30589b0();
   input += synapse0x30589f0();
   input += synapse0x3058a30();
   input += synapse0x3058a70();
   input += synapse0x3058ab0();
   input += synapse0x3058af0();
   input += synapse0x3058b30();
   input += synapse0x3058b70();
   input += synapse0x3058bb0();
   input += synapse0x3058640();
   input += synapse0x3058680();
   input += synapse0x3058d00();
   input += synapse0x3058d40();
   input += synapse0x3058d80();
   input += synapse0x3058dc0();
   input += synapse0x3058e00();
   input += synapse0x3058e40();
   return input;
}

double NNfunction_ss_sRcR::neuron0x30584b0() {
   double input = input0x30584b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x3058e80() {
   double input = -0.173744;
   input += synapse0x30591c0();
   input += synapse0x3059200();
   input += synapse0x3059240();
   input += synapse0x3059280();
   input += synapse0x30592c0();
   input += synapse0x3059300();
   input += synapse0x3059340();
   input += synapse0x3059380();
   input += synapse0x30593c0();
   input += synapse0x3059400();
   input += synapse0x3059440();
   input += synapse0x3059480();
   input += synapse0x30594c0();
   input += synapse0x3059500();
   input += synapse0x3059540();
   input += synapse0x3059580();
   input += synapse0x3059010();
   input += synapse0x3059050();
   input += synapse0x30596d0();
   input += synapse0x3059710();
   input += synapse0x3059750();
   input += synapse0x3059790();
   input += synapse0x30597d0();
   input += synapse0x3059810();
   return input;
}

double NNfunction_ss_sRcR::neuron0x3058e80() {
   double input = input0x3058e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x3059850() {
   double input = 1.94877;
   input += synapse0x3059b90();
   input += synapse0x3059bd0();
   input += synapse0x3059c10();
   input += synapse0x3059c50();
   input += synapse0x3059c90();
   input += synapse0x3059cd0();
   input += synapse0x3059d10();
   input += synapse0x3059d50();
   input += synapse0x3059d90();
   input += synapse0x3059dd0();
   input += synapse0x3059e10();
   input += synapse0x3059e50();
   input += synapse0x3059e90();
   input += synapse0x3059ed0();
   input += synapse0x3059f10();
   input += synapse0x3059f50();
   input += synapse0x30599e0();
   input += synapse0x3059a20();
   input += synapse0x305a0a0();
   input += synapse0x305a0e0();
   input += synapse0x305a120();
   input += synapse0x305a160();
   input += synapse0x305a1a0();
   input += synapse0x305a1e0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x3059850() {
   double input = input0x3059850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x305a220() {
   double input = -0.500769;
   input += synapse0x305a560();
   input += synapse0x305a5a0();
   input += synapse0x305a5e0();
   input += synapse0x305a620();
   input += synapse0x305a660();
   input += synapse0x305a6a0();
   input += synapse0x305a6e0();
   input += synapse0x305a720();
   input += synapse0x305a760();
   input += synapse0x305a7a0();
   input += synapse0x305a7e0();
   input += synapse0x305a820();
   input += synapse0x305a860();
   input += synapse0x305a8a0();
   input += synapse0x305a8e0();
   input += synapse0x305a920();
   input += synapse0x305a3b0();
   input += synapse0x305a3f0();
   input += synapse0x305aa70();
   input += synapse0x305aab0();
   input += synapse0x305aaf0();
   input += synapse0x305ab30();
   input += synapse0x305ab70();
   input += synapse0x305abb0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x305a220() {
   double input = input0x305a220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x305abf0() {
   double input = 0.0399845;
   input += synapse0x3043660();
   input += synapse0x30436a0();
   input += synapse0x30436e0();
   input += synapse0x3043720();
   input += synapse0x3043760();
   input += synapse0x30437a0();
   input += synapse0x30437e0();
   input += synapse0x3043820();
   input += synapse0x305b340();
   input += synapse0x305b380();
   input += synapse0x305b3c0();
   input += synapse0x305b400();
   input += synapse0x305b440();
   input += synapse0x305b480();
   input += synapse0x305b4c0();
   input += synapse0x305b500();
   input += synapse0x305ad80();
   input += synapse0x305adc0();
   input += synapse0x305b650();
   input += synapse0x305b690();
   input += synapse0x305b6d0();
   input += synapse0x305b710();
   input += synapse0x305b750();
   input += synapse0x305b790();
   return input;
}

double NNfunction_ss_sRcR::neuron0x305abf0() {
   double input = input0x305abf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x305b7d0() {
   double input = -2.17752;
   input += synapse0x305bb10();
   input += synapse0x305bb50();
   input += synapse0x305bb90();
   input += synapse0x305bbd0();
   input += synapse0x305bc10();
   input += synapse0x305bc50();
   input += synapse0x305bc90();
   input += synapse0x305bcd0();
   input += synapse0x305bd10();
   input += synapse0x305bd50();
   input += synapse0x305bd90();
   input += synapse0x305bdd0();
   input += synapse0x305be10();
   input += synapse0x305be50();
   input += synapse0x305be90();
   input += synapse0x305bed0();
   input += synapse0x305b960();
   input += synapse0x305b9a0();
   input += synapse0x305c020();
   input += synapse0x305c060();
   input += synapse0x305c0a0();
   input += synapse0x305c0e0();
   input += synapse0x305c120();
   input += synapse0x305c160();
   return input;
}

double NNfunction_ss_sRcR::neuron0x305b7d0() {
   double input = input0x305b7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x305c1a0() {
   double input = -0.00771592;
   input += synapse0x305c4e0();
   input += synapse0x305c520();
   input += synapse0x305c560();
   input += synapse0x305c5a0();
   input += synapse0x305c5e0();
   input += synapse0x305c620();
   input += synapse0x305c660();
   input += synapse0x305c6a0();
   input += synapse0x305c6e0();
   input += synapse0x305c720();
   input += synapse0x305c760();
   input += synapse0x305c7a0();
   input += synapse0x305c7e0();
   input += synapse0x305c820();
   input += synapse0x305c860();
   input += synapse0x305c8a0();
   input += synapse0x305c330();
   input += synapse0x305c370();
   input += synapse0x304cea0();
   input += synapse0x304cee0();
   input += synapse0x304cf20();
   input += synapse0x304cf60();
   input += synapse0x304cfa0();
   input += synapse0x304cfe0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x305c1a0() {
   double input = input0x305c1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x304d020() {
   double input = 0.151557;
   input += synapse0x304d360();
   input += synapse0x304d3a0();
   input += synapse0x304d3e0();
   input += synapse0x304d420();
   input += synapse0x304d460();
   input += synapse0x304d4a0();
   input += synapse0x304d4e0();
   input += synapse0x304d520();
   input += synapse0x304d560();
   input += synapse0x304d5a0();
   input += synapse0x304d5e0();
   input += synapse0x304d620();
   input += synapse0x304d660();
   input += synapse0x304d6a0();
   input += synapse0x304d6e0();
   input += synapse0x304d720();
   input += synapse0x304d1b0();
   input += synapse0x304d1f0();
   input += synapse0x304d870();
   input += synapse0x304d8b0();
   input += synapse0x304d8f0();
   input += synapse0x304d930();
   input += synapse0x304d970();
   input += synapse0x304d9b0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x304d020() {
   double input = input0x304d020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x304d9f0() {
   double input = -0.303559;
   input += synapse0x304dd30();
   input += synapse0x304dd70();
   input += synapse0x304ddb0();
   input += synapse0x304ddf0();
   input += synapse0x304de30();
   input += synapse0x304de70();
   input += synapse0x304deb0();
   input += synapse0x304def0();
   input += synapse0x304df30();
   input += synapse0x304df70();
   input += synapse0x304dfb0();
   input += synapse0x304dff0();
   input += synapse0x304e030();
   input += synapse0x304e070();
   input += synapse0x304e0b0();
   input += synapse0x304e0f0();
   input += synapse0x304db80();
   input += synapse0x304dbc0();
   input += synapse0x304e240();
   input += synapse0x304e280();
   input += synapse0x304e2c0();
   input += synapse0x304e300();
   input += synapse0x304e340();
   input += synapse0x304e380();
   return input;
}

double NNfunction_ss_sRcR::neuron0x304d9f0() {
   double input = input0x304d9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x304e3c0() {
   double input = 1.64059;
   input += synapse0x304e700();
   input += synapse0x304e740();
   input += synapse0x304e780();
   input += synapse0x304e7c0();
   input += synapse0x304e800();
   input += synapse0x304e840();
   input += synapse0x304e880();
   input += synapse0x304e8c0();
   input += synapse0x304e900();
   input += synapse0x304e940();
   input += synapse0x304e980();
   input += synapse0x304e9c0();
   input += synapse0x304ea00();
   input += synapse0x304ea40();
   input += synapse0x304ea80();
   input += synapse0x304eac0();
   input += synapse0x304e550();
   input += synapse0x304e590();
   input += synapse0x304ec10();
   input += synapse0x304ec50();
   input += synapse0x304ec90();
   input += synapse0x304ecd0();
   input += synapse0x304ed10();
   input += synapse0x304ed50();
   return input;
}

double NNfunction_ss_sRcR::neuron0x304e3c0() {
   double input = input0x304e3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x3060a00() {
   double input = 1.08131;
   input += synapse0x3060c20();
   input += synapse0x3060c60();
   input += synapse0x3060ca0();
   input += synapse0x3060ce0();
   input += synapse0x3060d20();
   input += synapse0x3060d60();
   input += synapse0x3060da0();
   input += synapse0x3060de0();
   input += synapse0x3060e20();
   input += synapse0x3060e60();
   input += synapse0x3060ea0();
   input += synapse0x3060ee0();
   input += synapse0x3060f20();
   input += synapse0x3060f60();
   input += synapse0x3060fa0();
   input += synapse0x3060fe0();
   input += synapse0x304ed90();
   input += synapse0x304edd0();
   input += synapse0x3061130();
   input += synapse0x3061170();
   input += synapse0x30611b0();
   input += synapse0x30611f0();
   input += synapse0x3061230();
   input += synapse0x3061270();
   return input;
}

double NNfunction_ss_sRcR::neuron0x3060a00() {
   double input = input0x3060a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x30612b0() {
   double input = 1.01076;
   input += synapse0x30615f0();
   input += synapse0x3061630();
   input += synapse0x3061670();
   input += synapse0x30616b0();
   input += synapse0x30616f0();
   input += synapse0x3061730();
   input += synapse0x3061770();
   input += synapse0x30617b0();
   input += synapse0x30617f0();
   input += synapse0x3061830();
   input += synapse0x3061870();
   input += synapse0x30618b0();
   input += synapse0x30618f0();
   input += synapse0x3061930();
   input += synapse0x3061970();
   input += synapse0x30619b0();
   input += synapse0x3061440();
   input += synapse0x3061480();
   input += synapse0x3061b00();
   input += synapse0x3061b40();
   input += synapse0x3061b80();
   input += synapse0x3061bc0();
   input += synapse0x3061c00();
   input += synapse0x3061c40();
   return input;
}

double NNfunction_ss_sRcR::neuron0x30612b0() {
   double input = input0x30612b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x3061c80() {
   double input = 0.361042;
   input += synapse0x3061fc0();
   input += synapse0x3062000();
   input += synapse0x3062040();
   input += synapse0x3062080();
   input += synapse0x30620c0();
   input += synapse0x3062100();
   input += synapse0x3062140();
   input += synapse0x3062180();
   input += synapse0x30621c0();
   input += synapse0x3062200();
   input += synapse0x3062240();
   input += synapse0x3062280();
   input += synapse0x30622c0();
   input += synapse0x3062300();
   input += synapse0x3062340();
   input += synapse0x3062380();
   input += synapse0x3061e10();
   input += synapse0x3061e50();
   input += synapse0x30624d0();
   input += synapse0x3062510();
   input += synapse0x3062550();
   input += synapse0x3062590();
   input += synapse0x30625d0();
   input += synapse0x3062610();
   return input;
}

double NNfunction_ss_sRcR::neuron0x3061c80() {
   double input = input0x3061c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x3062650() {
   double input = 0.242127;
   input += synapse0x3062990();
   input += synapse0x30629d0();
   input += synapse0x3062a10();
   input += synapse0x3062a50();
   input += synapse0x3062a90();
   input += synapse0x3062ad0();
   input += synapse0x3062b10();
   input += synapse0x3062b50();
   input += synapse0x3062b90();
   input += synapse0x3062bd0();
   input += synapse0x3062c10();
   input += synapse0x3062c50();
   input += synapse0x3062c90();
   input += synapse0x3062cd0();
   input += synapse0x3062d10();
   input += synapse0x3062d50();
   input += synapse0x30627e0();
   input += synapse0x3062820();
   input += synapse0x3062ea0();
   input += synapse0x3062ee0();
   input += synapse0x3062f20();
   input += synapse0x3062f60();
   input += synapse0x3062fa0();
   input += synapse0x3062fe0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x3062650() {
   double input = input0x3062650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x3069850() {
   double input = 0.109006;
   input += synapse0x303f580();
   input += synapse0x303f5c0();
   input += synapse0x3040a90();
   input += synapse0x3040ad0();
   input += synapse0x3041460();
   input += synapse0x30414a0();
   input += synapse0x3042230();
   input += synapse0x3042270();
   input += synapse0x3042c00();
   input += synapse0x3042c40();
   input += synapse0x30435d0();
   input += synapse0x3043610();
   input += synapse0x30440b0();
   input += synapse0x30440f0();
   input += synapse0x3044a80();
   input += synapse0x3044ac0();
   input += synapse0x3041b60();
   input += synapse0x3041ba0();
   input += synapse0x3046630();
   input += synapse0x3046670();
   input += synapse0x3047000();
   input += synapse0x3047040();
   input += synapse0x30479d0();
   input += synapse0x3047a10();
   input += synapse0x30483a0();
   input += synapse0x30483e0();
   input += synapse0x303c510();
   input += synapse0x303c550();
   input += synapse0x304a490();
   input += synapse0x304a4d0();
   input += synapse0x304ae60();
   input += synapse0x304aea0();
   input += synapse0x304b830();
   input += synapse0x304b870();
   input += synapse0x304c200();
   input += synapse0x304c240();
   input += synapse0x304cbd0();
   input += synapse0x304cc10();
   input += synapse0x3045720();
   input += synapse0x3045760();
   input += synapse0x304efd0();
   input += synapse0x304f010();
   input += synapse0x304f960();
   input += synapse0x304f9a0();
   input += synapse0x3050330();
   input += synapse0x3050370();
   input += synapse0x3050d00();
   input += synapse0x3050d40();
   input += synapse0x30516d0();
   input += synapse0x3051710();
   return input;
}

double NNfunction_ss_sRcR::neuron0x3069850() {
   double input = input0x3069850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x3069bf0() {
   double input = 0.229449;
   input += synapse0x3053e10();
   input += synapse0x3053e50();
   input += synapse0x30493d0();
   input += synapse0x3049410();
   input += synapse0x30569f0();
   input += synapse0x3056a30();
   input += synapse0x30573c0();
   input += synapse0x3057400();
   input += synapse0x3057d90();
   input += synapse0x3057dd0();
   input += synapse0x3058760();
   input += synapse0x30587a0();
   input += synapse0x3059130();
   input += synapse0x3059170();
   input += synapse0x3059b00();
   input += synapse0x3059b40();
   input += synapse0x305a4d0();
   input += synapse0x305a510();
   input += synapse0x305aea0();
   input += synapse0x305aee0();
   input += synapse0x305ba80();
   input += synapse0x305bac0();
   input += synapse0x305c450();
   input += synapse0x305c490();
   input += synapse0x304d2d0();
   input += synapse0x304d310();
   input += synapse0x304dca0();
   input += synapse0x304dce0();
   input += synapse0x304e670();
   input += synapse0x304e6b0();
   input += synapse0x3060b90();
   input += synapse0x3060bd0();
   input += synapse0x3061560();
   input += synapse0x30615a0();
   input += synapse0x3061f30();
   input += synapse0x3061f70();
   input += synapse0x3062900();
   input += synapse0x3062940();
   input += synapse0x303e7f0();
   input += synapse0x303e830();
   input += synapse0x30520a0();
   input += synapse0x30520e0();
   input += synapse0x3063020();
   input += synapse0x3063060();
   input += synapse0x30630a0();
   input += synapse0x30630e0();
   input += synapse0x3069f90();
   input += synapse0x3069fd0();
   input += synapse0x306a010();
   input += synapse0x306a050();
   return input;
}

double NNfunction_ss_sRcR::neuron0x3069bf0() {
   double input = input0x3069bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x306a090() {
   double input = 0.557827;
   input += synapse0x306a3d0();
   input += synapse0x306a410();
   input += synapse0x306a450();
   input += synapse0x306a490();
   input += synapse0x306a4d0();
   input += synapse0x306a510();
   input += synapse0x306a550();
   input += synapse0x306a590();
   input += synapse0x306a5d0();
   input += synapse0x306a610();
   input += synapse0x306a650();
   input += synapse0x306a690();
   input += synapse0x306a6d0();
   input += synapse0x306a710();
   input += synapse0x306a750();
   input += synapse0x306a790();
   input += synapse0x306a220();
   input += synapse0x306a260();
   input += synapse0x306a8e0();
   input += synapse0x306a920();
   input += synapse0x306a960();
   input += synapse0x306a9a0();
   input += synapse0x306a9e0();
   input += synapse0x306aa20();
   input += synapse0x306aa60();
   input += synapse0x306aaa0();
   input += synapse0x306aae0();
   input += synapse0x306ab20();
   input += synapse0x306ab60();
   input += synapse0x306aba0();
   input += synapse0x306abe0();
   input += synapse0x306ac20();
   input += synapse0x306a7d0();
   input += synapse0x306a810();
   input += synapse0x306a850();
   input += synapse0x306a890();
   input += synapse0x306ae70();
   input += synapse0x306aeb0();
   input += synapse0x306aef0();
   input += synapse0x306af30();
   input += synapse0x306af70();
   input += synapse0x306afb0();
   input += synapse0x306aff0();
   input += synapse0x306b030();
   input += synapse0x306b070();
   input += synapse0x306b0b0();
   input += synapse0x306b0f0();
   input += synapse0x306b130();
   input += synapse0x306b170();
   input += synapse0x306b1b0();
   return input;
}

double NNfunction_ss_sRcR::neuron0x306a090() {
   double input = input0x306a090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x306b1f0() {
   double input = -0.305162;
   input += synapse0x306b530();
   input += synapse0x306b570();
   input += synapse0x306b5b0();
   input += synapse0x306b5f0();
   input += synapse0x306b630();
   input += synapse0x306b670();
   input += synapse0x306b6b0();
   input += synapse0x306b6f0();
   input += synapse0x306b730();
   input += synapse0x306b770();
   input += synapse0x306b7b0();
   input += synapse0x306b7f0();
   input += synapse0x306b830();
   input += synapse0x306b870();
   input += synapse0x306b8b0();
   input += synapse0x306b8f0();
   input += synapse0x306b380();
   input += synapse0x306b3c0();
   input += synapse0x306ba40();
   input += synapse0x306ba80();
   input += synapse0x306bac0();
   input += synapse0x306bb00();
   input += synapse0x306bb40();
   input += synapse0x306bb80();
   input += synapse0x306bbc0();
   input += synapse0x306bc00();
   input += synapse0x306bc40();
   input += synapse0x306bc80();
   input += synapse0x306bcc0();
   input += synapse0x306bd00();
   input += synapse0x306bd40();
   input += synapse0x306bd80();
   input += synapse0x306b930();
   input += synapse0x306b970();
   input += synapse0x306b9b0();
   input += synapse0x306b9f0();
   input += synapse0x306bfd0();
   input += synapse0x306c010();
   input += synapse0x306c050();
   input += synapse0x306c090();
   input += synapse0x306c0d0();
   input += synapse0x306c110();
   input += synapse0x306c150();
   input += synapse0x306c190();
   input += synapse0x306c1d0();
   input += synapse0x306c210();
   input += synapse0x306c250();
   input += synapse0x306c290();
   input += synapse0x306c2d0();
   input += synapse0x306c310();
   return input;
}

double NNfunction_ss_sRcR::neuron0x306b1f0() {
   double input = input0x306b1f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x306c350() {
   double input = 0.506727;
   input += synapse0x306c690();
   input += synapse0x306c6d0();
   input += synapse0x306c710();
   input += synapse0x306c750();
   input += synapse0x306c790();
   input += synapse0x306c7d0();
   input += synapse0x306c810();
   input += synapse0x306c850();
   input += synapse0x306c890();
   input += synapse0x306c8d0();
   input += synapse0x306c910();
   input += synapse0x306c950();
   input += synapse0x306c990();
   input += synapse0x306c9d0();
   input += synapse0x306ca10();
   input += synapse0x306ca50();
   input += synapse0x306c4e0();
   input += synapse0x306c520();
   input += synapse0x306cba0();
   input += synapse0x306cbe0();
   input += synapse0x306cc20();
   input += synapse0x306cc60();
   input += synapse0x306cca0();
   input += synapse0x306cce0();
   input += synapse0x306cd20();
   input += synapse0x306cd60();
   input += synapse0x306cda0();
   input += synapse0x306cde0();
   input += synapse0x306ce20();
   input += synapse0x306ce60();
   input += synapse0x306cea0();
   input += synapse0x306cee0();
   input += synapse0x306ca90();
   input += synapse0x306cad0();
   input += synapse0x306cb10();
   input += synapse0x306cb50();
   input += synapse0x306d130();
   input += synapse0x306d170();
   input += synapse0x306d1b0();
   input += synapse0x306d1f0();
   input += synapse0x306d230();
   input += synapse0x306d270();
   input += synapse0x306d2b0();
   input += synapse0x306d2f0();
   input += synapse0x306d330();
   input += synapse0x306d370();
   input += synapse0x306d3b0();
   input += synapse0x306d3f0();
   input += synapse0x306d430();
   input += synapse0x306d470();
   return input;
}

double NNfunction_ss_sRcR::neuron0x306c350() {
   double input = input0x306c350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_sRcR::input0x306d4b0() {
   double input = 10.1412;
   input += synapse0x303e590();
   input += synapse0x306d6d0();
   input += synapse0x306d710();
   input += synapse0x306d750();
   input += synapse0x306d790();
   return input;
}

double NNfunction_ss_sRcR::neuron0x306d4b0() {
   double input = input0x306d4b0();
   return (input * 1)+0;
}

double NNfunction_ss_sRcR::synapse0x2df93e0() {
   return (neuron0x3039570()*0.170917);
}

double NNfunction_ss_sRcR::synapse0x3039430() {
   return (neuron0x30398b0()*0.446713);
}

double NNfunction_ss_sRcR::synapse0x3039470() {
   return (neuron0x3039bf0()*-0.101487);
}

double NNfunction_ss_sRcR::synapse0x303e880() {
   return (neuron0x3039f30()*0.291552);
}

double NNfunction_ss_sRcR::synapse0x303e8c0() {
   return (neuron0x303a270()*-0.0799932);
}

double NNfunction_ss_sRcR::synapse0x303e900() {
   return (neuron0x303a5b0()*-0.0150018);
}

double NNfunction_ss_sRcR::synapse0x303e940() {
   return (neuron0x303a8f0()*0.22154);
}

double NNfunction_ss_sRcR::synapse0x303e980() {
   return (neuron0x303ac30()*-0.24755);
}

double NNfunction_ss_sRcR::synapse0x303e9c0() {
   return (neuron0x303af70()*0.0374125);
}

double NNfunction_ss_sRcR::synapse0x303ea00() {
   return (neuron0x303b2b0()*0.174959);
}

double NNfunction_ss_sRcR::synapse0x303ea40() {
   return (neuron0x303b5f0()*0.212633);
}

double NNfunction_ss_sRcR::synapse0x303ea80() {
   return (neuron0x303b930()*-0.354523);
}

double NNfunction_ss_sRcR::synapse0x303eac0() {
   return (neuron0x303bc70()*0.634035);
}

double NNfunction_ss_sRcR::synapse0x303eb00() {
   return (neuron0x303bfb0()*-0.112547);
}

double NNfunction_ss_sRcR::synapse0x303eb40() {
   return (neuron0x303c2f0()*-0.0579514);
}

double NNfunction_ss_sRcR::synapse0x303eb80() {
   return (neuron0x303c630()*-0.194516);
}

double NNfunction_ss_sRcR::synapse0x30393a0() {
   return (neuron0x303c970()*-0.0724421);
}

double NNfunction_ss_sRcR::synapse0x30393e0() {
   return (neuron0x303ced0()*0.335231);
}

double NNfunction_ss_sRcR::synapse0x2deac80() {
   return (neuron0x303d0f0()*0.186746);
}

double NNfunction_ss_sRcR::synapse0x2deacc0() {
   return (neuron0x303d430()*-0.484417);
}

double NNfunction_ss_sRcR::synapse0x303ede0() {
   return (neuron0x303d770()*-0.191494);
}

double NNfunction_ss_sRcR::synapse0x303ee20() {
   return (neuron0x303dab0()*-0.213659);
}

double NNfunction_ss_sRcR::synapse0x303ee60() {
   return (neuron0x303ddf0()*0.156173);
}

double NNfunction_ss_sRcR::synapse0x303eea0() {
   return (neuron0x303e130()*0.142897);
}

double NNfunction_ss_sRcR::synapse0x303f220() {
   return (neuron0x3039570()*-0.458152);
}

double NNfunction_ss_sRcR::synapse0x303f260() {
   return (neuron0x30398b0()*-0.151492);
}

double NNfunction_ss_sRcR::synapse0x303f2a0() {
   return (neuron0x3039bf0()*-0.392875);
}

double NNfunction_ss_sRcR::synapse0x303f2e0() {
   return (neuron0x3039f30()*0.897624);
}

double NNfunction_ss_sRcR::synapse0x303f320() {
   return (neuron0x303a270()*-0.237825);
}

double NNfunction_ss_sRcR::synapse0x303f360() {
   return (neuron0x303a5b0()*-0.62826);
}

double NNfunction_ss_sRcR::synapse0x303f3a0() {
   return (neuron0x303a8f0()*-0.981308);
}

double NNfunction_ss_sRcR::synapse0x303f3e0() {
   return (neuron0x303ac30()*0.327628);
}

double NNfunction_ss_sRcR::synapse0x303f420() {
   return (neuron0x303af70()*0.430768);
}

double NNfunction_ss_sRcR::synapse0x303ecd0() {
   return (neuron0x303b2b0()*-0.396576);
}

double NNfunction_ss_sRcR::synapse0x303ed10() {
   return (neuron0x303b5f0()*0.433565);
}

double NNfunction_ss_sRcR::synapse0x303ed50() {
   return (neuron0x303b930()*-0.266601);
}

double NNfunction_ss_sRcR::synapse0x303ed90() {
   return (neuron0x303bc70()*-0.606436);
}

double NNfunction_ss_sRcR::synapse0x303f670() {
   return (neuron0x303bfb0()*-0.113359);
}

double NNfunction_ss_sRcR::synapse0x303f6b0() {
   return (neuron0x303c2f0()*-0.134866);
}

double NNfunction_ss_sRcR::synapse0x303f6f0() {
   return (neuron0x303c630()*-0.123683);
}

double NNfunction_ss_sRcR::synapse0x303f070() {
   return (neuron0x303c970()*-0.189923);
}

double NNfunction_ss_sRcR::synapse0x303f0b0() {
   return (neuron0x303ced0()*-0.484005);
}

double NNfunction_ss_sRcR::synapse0x303f840() {
   return (neuron0x303d0f0()*0.360161);
}

double NNfunction_ss_sRcR::synapse0x303f880() {
   return (neuron0x303d430()*-0.338673);
}

double NNfunction_ss_sRcR::synapse0x303f8c0() {
   return (neuron0x303d770()*0.414691);
}

double NNfunction_ss_sRcR::synapse0x303f900() {
   return (neuron0x303dab0()*0.616863);
}

double NNfunction_ss_sRcR::synapse0x303f940() {
   return (neuron0x303ddf0()*-0.557866);
}

double NNfunction_ss_sRcR::synapse0x303f980() {
   return (neuron0x303e130()*0.261921);
}

double NNfunction_ss_sRcR::synapse0x303fd00() {
   return (neuron0x3039570()*-0.0278061);
}

double NNfunction_ss_sRcR::synapse0x303fd40() {
   return (neuron0x30398b0()*-0.190753);
}

double NNfunction_ss_sRcR::synapse0x303fd80() {
   return (neuron0x3039bf0()*0.136627);
}

double NNfunction_ss_sRcR::synapse0x303fdc0() {
   return (neuron0x3039f30()*-0.100295);
}

double NNfunction_ss_sRcR::synapse0x303fe00() {
   return (neuron0x303a270()*0.0276496);
}

double NNfunction_ss_sRcR::synapse0x303fe40() {
   return (neuron0x303a5b0()*-0.0511996);
}

double NNfunction_ss_sRcR::synapse0x303fe80() {
   return (neuron0x303a8f0()*-0.0522334);
}

double NNfunction_ss_sRcR::synapse0x303fec0() {
   return (neuron0x303ac30()*-0.000182479);
}

double NNfunction_ss_sRcR::synapse0x303ff00() {
   return (neuron0x303af70()*-0.0812501);
}

double NNfunction_ss_sRcR::synapse0x303ff40() {
   return (neuron0x303b2b0()*-0.0423274);
}

double NNfunction_ss_sRcR::synapse0x303ff80() {
   return (neuron0x303b5f0()*-0.118177);
}

double NNfunction_ss_sRcR::synapse0x303ffc0() {
   return (neuron0x303b930()*-1.11591);
}

double NNfunction_ss_sRcR::synapse0x3040000() {
   return (neuron0x303bc70()*-0.403625);
}

double NNfunction_ss_sRcR::synapse0x3040040() {
   return (neuron0x303bfb0()*0.308002);
}

double NNfunction_ss_sRcR::synapse0x3040080() {
   return (neuron0x303c2f0()*-0.281609);
}

double NNfunction_ss_sRcR::synapse0x30400c0() {
   return (neuron0x303c630()*-0.224601);
}

double NNfunction_ss_sRcR::synapse0x303fb50() {
   return (neuron0x303c970()*0.235504);
}

double NNfunction_ss_sRcR::synapse0x303fb90() {
   return (neuron0x303ced0()*-0.167221);
}

double NNfunction_ss_sRcR::synapse0x2df8ad0() {
   return (neuron0x303d0f0()*-0.0624689);
}

double NNfunction_ss_sRcR::synapse0x2df8b10() {
   return (neuron0x303d430()*0.234907);
}

double NNfunction_ss_sRcR::synapse0x3028600() {
   return (neuron0x303d770()*0.121397);
}

double NNfunction_ss_sRcR::synapse0x3028640() {
   return (neuron0x303dab0()*-0.0978991);
}

double NNfunction_ss_sRcR::synapse0x3028680() {
   return (neuron0x303ddf0()*-0.0686957);
}

double NNfunction_ss_sRcR::synapse0x30394b0() {
   return (neuron0x303e130()*-0.0265378);
}

double NNfunction_ss_sRcR::synapse0x303f610() {
   return (neuron0x3039570()*0.0440565);
}

double NNfunction_ss_sRcR::synapse0x30394f0() {
   return (neuron0x30398b0()*-0.457626);
}

double NNfunction_ss_sRcR::synapse0x3039530() {
   return (neuron0x3039bf0()*-0.0182388);
}

double NNfunction_ss_sRcR::synapse0x3040210() {
   return (neuron0x3039f30()*0.445828);
}

double NNfunction_ss_sRcR::synapse0x3040250() {
   return (neuron0x303a270()*0.005916);
}

double NNfunction_ss_sRcR::synapse0x3040290() {
   return (neuron0x303a5b0()*-0.000360155);
}

double NNfunction_ss_sRcR::synapse0x30402d0() {
   return (neuron0x303a8f0()*0.0360416);
}

double NNfunction_ss_sRcR::synapse0x3040310() {
   return (neuron0x303ac30()*0.0443863);
}

double NNfunction_ss_sRcR::synapse0x3040350() {
   return (neuron0x303af70()*0.0776719);
}

double NNfunction_ss_sRcR::synapse0x3040390() {
   return (neuron0x303b2b0()*0.0112691);
}

double NNfunction_ss_sRcR::synapse0x30403d0() {
   return (neuron0x303b5f0()*0.0480106);
}

double NNfunction_ss_sRcR::synapse0x3040410() {
   return (neuron0x303b930()*0.0284813);
}

double NNfunction_ss_sRcR::synapse0x3040450() {
   return (neuron0x303bc70()*0.0985114);
}

double NNfunction_ss_sRcR::synapse0x3040490() {
   return (neuron0x303bfb0()*-0.0282821);
}

double NNfunction_ss_sRcR::synapse0x30404d0() {
   return (neuron0x303c2f0()*-0.0349992);
}

double NNfunction_ss_sRcR::synapse0x3040510() {
   return (neuron0x303c630()*0.113527);
}

double NNfunction_ss_sRcR::synapse0x303f460() {
   return (neuron0x303c970()*-0.0239201);
}

double NNfunction_ss_sRcR::synapse0x303f4a0() {
   return (neuron0x303ced0()*-0.0536945);
}

double NNfunction_ss_sRcR::synapse0x3040660() {
   return (neuron0x303d0f0()*0.0722441);
}

double NNfunction_ss_sRcR::synapse0x30406a0() {
   return (neuron0x303d430()*0.0424175);
}

double NNfunction_ss_sRcR::synapse0x30406e0() {
   return (neuron0x303d770()*0.0417215);
}

double NNfunction_ss_sRcR::synapse0x3040720() {
   return (neuron0x303dab0()*0.00193915);
}

double NNfunction_ss_sRcR::synapse0x3040760() {
   return (neuron0x303ddf0()*0.0800526);
}

double NNfunction_ss_sRcR::synapse0x30407a0() {
   return (neuron0x303e130()*0.0299442);
}

double NNfunction_ss_sRcR::synapse0x3040b20() {
   return (neuron0x3039570()*-0.00878957);
}

double NNfunction_ss_sRcR::synapse0x3040b60() {
   return (neuron0x30398b0()*0.0275095);
}

double NNfunction_ss_sRcR::synapse0x3040ba0() {
   return (neuron0x3039bf0()*-0.0161392);
}

double NNfunction_ss_sRcR::synapse0x3040be0() {
   return (neuron0x3039f30()*9.75357);
}

double NNfunction_ss_sRcR::synapse0x3040c20() {
   return (neuron0x303a270()*-0.0125018);
}

double NNfunction_ss_sRcR::synapse0x3040c60() {
   return (neuron0x303a5b0()*0.0108424);
}

double NNfunction_ss_sRcR::synapse0x3040ca0() {
   return (neuron0x303a8f0()*0.0167327);
}

double NNfunction_ss_sRcR::synapse0x3040ce0() {
   return (neuron0x303ac30()*-0.00295867);
}

double NNfunction_ss_sRcR::synapse0x3040d20() {
   return (neuron0x303af70()*-0.0131649);
}

double NNfunction_ss_sRcR::synapse0x3040d60() {
   return (neuron0x303b2b0()*-0.00939923);
}

double NNfunction_ss_sRcR::synapse0x3040da0() {
   return (neuron0x303b5f0()*-0.0131496);
}

double NNfunction_ss_sRcR::synapse0x3040de0() {
   return (neuron0x303b930()*-0.000323);
}

double NNfunction_ss_sRcR::synapse0x3040e20() {
   return (neuron0x303bc70()*0.0189319);
}

double NNfunction_ss_sRcR::synapse0x3040e60() {
   return (neuron0x303bfb0()*0.0424532);
}

double NNfunction_ss_sRcR::synapse0x3040ea0() {
   return (neuron0x303c2f0()*0.000716287);
}

double NNfunction_ss_sRcR::synapse0x3040ee0() {
   return (neuron0x303c630()*-0.13062);
}

double NNfunction_ss_sRcR::synapse0x3040970() {
   return (neuron0x303c970()*-0.0243818);
}

double NNfunction_ss_sRcR::synapse0x30409b0() {
   return (neuron0x303ced0()*-0.000713591);
}

double NNfunction_ss_sRcR::synapse0x3041030() {
   return (neuron0x303d0f0()*-0.234382);
}

double NNfunction_ss_sRcR::synapse0x3041070() {
   return (neuron0x303d430()*0.00503638);
}

double NNfunction_ss_sRcR::synapse0x30410b0() {
   return (neuron0x303d770()*0.0222078);
}

double NNfunction_ss_sRcR::synapse0x30410f0() {
   return (neuron0x303dab0()*-0.0166441);
}

double NNfunction_ss_sRcR::synapse0x3041130() {
   return (neuron0x303ddf0()*0.0207477);
}

double NNfunction_ss_sRcR::synapse0x3041170() {
   return (neuron0x303e130()*0.00688407);
}

double NNfunction_ss_sRcR::synapse0x30414f0() {
   return (neuron0x3039570()*0.182706);
}

double NNfunction_ss_sRcR::synapse0x3041530() {
   return (neuron0x30398b0()*0.223446);
}

double NNfunction_ss_sRcR::synapse0x3041570() {
   return (neuron0x3039bf0()*-0.0874041);
}

double NNfunction_ss_sRcR::synapse0x30415b0() {
   return (neuron0x3039f30()*0.727789);
}

double NNfunction_ss_sRcR::synapse0x30415f0() {
   return (neuron0x303a270()*0.0328481);
}

double NNfunction_ss_sRcR::synapse0x3041630() {
   return (neuron0x303a5b0()*-0.0559135);
}

double NNfunction_ss_sRcR::synapse0x3041670() {
   return (neuron0x303a8f0()*0.108239);
}

double NNfunction_ss_sRcR::synapse0x30416b0() {
   return (neuron0x303ac30()*0.175406);
}

double NNfunction_ss_sRcR::synapse0x30416f0() {
   return (neuron0x303af70()*0.193878);
}

double NNfunction_ss_sRcR::synapse0x2df8e40() {
   return (neuron0x303b2b0()*-0.0813611);
}

double NNfunction_ss_sRcR::synapse0x2df8e80() {
   return (neuron0x303b5f0()*-0.0369137);
}

double NNfunction_ss_sRcR::synapse0x2df8ec0() {
   return (neuron0x303b930()*-0.290739);
}

double NNfunction_ss_sRcR::synapse0x2df8f00() {
   return (neuron0x303bc70()*-0.397466);
}

double NNfunction_ss_sRcR::synapse0x2df8f40() {
   return (neuron0x303bfb0()*0.27923);
}

double NNfunction_ss_sRcR::synapse0x2df8f80() {
   return (neuron0x303c2f0()*-0.258845);
}

double NNfunction_ss_sRcR::synapse0x2df8fc0() {
   return (neuron0x303c630()*0.0431089);
}

double NNfunction_ss_sRcR::synapse0x3041340() {
   return (neuron0x303c970()*0.399636);
}

double NNfunction_ss_sRcR::synapse0x3041380() {
   return (neuron0x303ced0()*-0.660143);
}

double NNfunction_ss_sRcR::synapse0x2df9110() {
   return (neuron0x303d0f0()*0.248351);
}

double NNfunction_ss_sRcR::synapse0x2df9150() {
   return (neuron0x303d430()*-0.047493);
}

double NNfunction_ss_sRcR::synapse0x2df9190() {
   return (neuron0x303d770()*-0.0194026);
}

double NNfunction_ss_sRcR::synapse0x2df91d0() {
   return (neuron0x303dab0()*0.0706459);
}

double NNfunction_ss_sRcR::synapse0x2df9210() {
   return (neuron0x303ddf0()*0.097086);
}

double NNfunction_ss_sRcR::synapse0x3041f40() {
   return (neuron0x303e130()*-0.00318807);
}

double NNfunction_ss_sRcR::synapse0x30422c0() {
   return (neuron0x3039570()*-0.00678849);
}

double NNfunction_ss_sRcR::synapse0x3042300() {
   return (neuron0x30398b0()*0.0216699);
}

double NNfunction_ss_sRcR::synapse0x3042340() {
   return (neuron0x3039bf0()*0.0114065);
}

double NNfunction_ss_sRcR::synapse0x3042380() {
   return (neuron0x3039f30()*-2.46589);
}

double NNfunction_ss_sRcR::synapse0x30423c0() {
   return (neuron0x303a270()*-0.0167639);
}

double NNfunction_ss_sRcR::synapse0x3042400() {
   return (neuron0x303a5b0()*0.039019);
}

double NNfunction_ss_sRcR::synapse0x3042440() {
   return (neuron0x303a8f0()*0.0202495);
}

double NNfunction_ss_sRcR::synapse0x3042480() {
   return (neuron0x303ac30()*-0.00900289);
}

double NNfunction_ss_sRcR::synapse0x30424c0() {
   return (neuron0x303af70()*0.0448227);
}

double NNfunction_ss_sRcR::synapse0x3042500() {
   return (neuron0x303b2b0()*0.00867876);
}

double NNfunction_ss_sRcR::synapse0x3042540() {
   return (neuron0x303b5f0()*-0.0114029);
}

double NNfunction_ss_sRcR::synapse0x3042580() {
   return (neuron0x303b930()*0.0828698);
}

double NNfunction_ss_sRcR::synapse0x30425c0() {
   return (neuron0x303bc70()*0.0998361);
}

double NNfunction_ss_sRcR::synapse0x3042600() {
   return (neuron0x303bfb0()*-0.0630697);
}

double NNfunction_ss_sRcR::synapse0x3042640() {
   return (neuron0x303c2f0()*0.0107097);
}

double NNfunction_ss_sRcR::synapse0x3042680() {
   return (neuron0x303c630()*0.103167);
}

double NNfunction_ss_sRcR::synapse0x3042110() {
   return (neuron0x303c970()*-0.0573571);
}

double NNfunction_ss_sRcR::synapse0x3042150() {
   return (neuron0x303ced0()*0.0368896);
}

double NNfunction_ss_sRcR::synapse0x30427d0() {
   return (neuron0x303d0f0()*-1.03123);
}

double NNfunction_ss_sRcR::synapse0x3042810() {
   return (neuron0x303d430()*0.0774007);
}

double NNfunction_ss_sRcR::synapse0x3042850() {
   return (neuron0x303d770()*0.0211601);
}

double NNfunction_ss_sRcR::synapse0x3042890() {
   return (neuron0x303dab0()*-0.0188061);
}

double NNfunction_ss_sRcR::synapse0x30428d0() {
   return (neuron0x303ddf0()*0.0403687);
}

double NNfunction_ss_sRcR::synapse0x3042910() {
   return (neuron0x303e130()*0.0360675);
}

double NNfunction_ss_sRcR::synapse0x3042c90() {
   return (neuron0x3039570()*0.0148896);
}

double NNfunction_ss_sRcR::synapse0x3042cd0() {
   return (neuron0x30398b0()*-0.0606356);
}

double NNfunction_ss_sRcR::synapse0x3042d10() {
   return (neuron0x3039bf0()*-0.0042624);
}

double NNfunction_ss_sRcR::synapse0x3042d50() {
   return (neuron0x3039f30()*0.174683);
}

double NNfunction_ss_sRcR::synapse0x3042d90() {
   return (neuron0x303a270()*0.0282247);
}

double NNfunction_ss_sRcR::synapse0x3042dd0() {
   return (neuron0x303a5b0()*0.0074846);
}

double NNfunction_ss_sRcR::synapse0x3042e10() {
   return (neuron0x303a8f0()*-0.00809581);
}

double NNfunction_ss_sRcR::synapse0x3042e50() {
   return (neuron0x303ac30()*0.0218071);
}

double NNfunction_ss_sRcR::synapse0x3042e90() {
   return (neuron0x303af70()*0.0140842);
}

double NNfunction_ss_sRcR::synapse0x3042ed0() {
   return (neuron0x303b2b0()*0.0131104);
}

double NNfunction_ss_sRcR::synapse0x3042f10() {
   return (neuron0x303b5f0()*0.0186619);
}

double NNfunction_ss_sRcR::synapse0x3042f50() {
   return (neuron0x303b930()*0.00800192);
}

double NNfunction_ss_sRcR::synapse0x3042f90() {
   return (neuron0x303bc70()*0.000724639);
}

double NNfunction_ss_sRcR::synapse0x3042fd0() {
   return (neuron0x303bfb0()*-0.0149966);
}

double NNfunction_ss_sRcR::synapse0x3043010() {
   return (neuron0x303c2f0()*-0.0214966);
}

double NNfunction_ss_sRcR::synapse0x3043050() {
   return (neuron0x303c630()*-0.0982463);
}

double NNfunction_ss_sRcR::synapse0x3042ae0() {
   return (neuron0x303c970()*-0.000796052);
}

double NNfunction_ss_sRcR::synapse0x3042b20() {
   return (neuron0x303ced0()*-0.0356688);
}

double NNfunction_ss_sRcR::synapse0x30431a0() {
   return (neuron0x303d0f0()*-1.4984);
}

double NNfunction_ss_sRcR::synapse0x30431e0() {
   return (neuron0x303d430()*-0.00583936);
}

double NNfunction_ss_sRcR::synapse0x3043220() {
   return (neuron0x303d770()*-0.000661217);
}

double NNfunction_ss_sRcR::synapse0x3043260() {
   return (neuron0x303dab0()*0.00627183);
}

double NNfunction_ss_sRcR::synapse0x30432a0() {
   return (neuron0x303ddf0()*0.0216683);
}

double NNfunction_ss_sRcR::synapse0x30432e0() {
   return (neuron0x303e130()*0.0127177);
}

double NNfunction_ss_sRcR::synapse0x303cdc0() {
   return (neuron0x3039570()*0.299421);
}

double NNfunction_ss_sRcR::synapse0x303ce00() {
   return (neuron0x30398b0()*0.981246);
}

double NNfunction_ss_sRcR::synapse0x303ce40() {
   return (neuron0x3039bf0()*-0.148282);
}

double NNfunction_ss_sRcR::synapse0x303ce80() {
   return (neuron0x3039f30()*-0.560037);
}

double NNfunction_ss_sRcR::synapse0x3043870() {
   return (neuron0x303a270()*0.946637);
}

double NNfunction_ss_sRcR::synapse0x30438b0() {
   return (neuron0x303a5b0()*-1.54639);
}

double NNfunction_ss_sRcR::synapse0x30438f0() {
   return (neuron0x303a8f0()*-0.398648);
}

double NNfunction_ss_sRcR::synapse0x3043930() {
   return (neuron0x303ac30()*-0.365643);
}

double NNfunction_ss_sRcR::synapse0x3043970() {
   return (neuron0x303af70()*0.821264);
}

double NNfunction_ss_sRcR::synapse0x30439b0() {
   return (neuron0x303b2b0()*0.131043);
}

double NNfunction_ss_sRcR::synapse0x30439f0() {
   return (neuron0x303b5f0()*0.658638);
}

double NNfunction_ss_sRcR::synapse0x3043a30() {
   return (neuron0x303b930()*-0.0602978);
}

double NNfunction_ss_sRcR::synapse0x3043a70() {
   return (neuron0x303bc70()*0.759106);
}

double NNfunction_ss_sRcR::synapse0x3043ab0() {
   return (neuron0x303bfb0()*0.307384);
}

double NNfunction_ss_sRcR::synapse0x3043af0() {
   return (neuron0x303c2f0()*1.29959);
}

double NNfunction_ss_sRcR::synapse0x3043b30() {
   return (neuron0x303c630()*0.287586);
}

double NNfunction_ss_sRcR::synapse0x30434b0() {
   return (neuron0x303c970()*-0.288667);
}

double NNfunction_ss_sRcR::synapse0x30434f0() {
   return (neuron0x303ced0()*0.808064);
}

double NNfunction_ss_sRcR::synapse0x3043c80() {
   return (neuron0x303d0f0()*-1.19805);
}

double NNfunction_ss_sRcR::synapse0x3043cc0() {
   return (neuron0x303d430()*-0.162559);
}

double NNfunction_ss_sRcR::synapse0x3043d00() {
   return (neuron0x303d770()*0.335653);
}

double NNfunction_ss_sRcR::synapse0x3043d40() {
   return (neuron0x303dab0()*-0.437424);
}

double NNfunction_ss_sRcR::synapse0x3043d80() {
   return (neuron0x303ddf0()*0.0894307);
}

double NNfunction_ss_sRcR::synapse0x3043dc0() {
   return (neuron0x303e130()*-0.0198512);
}

double NNfunction_ss_sRcR::synapse0x3044140() {
   return (neuron0x3039570()*-0.0151454);
}

double NNfunction_ss_sRcR::synapse0x3044180() {
   return (neuron0x30398b0()*-0.0205447);
}

double NNfunction_ss_sRcR::synapse0x30441c0() {
   return (neuron0x3039bf0()*0.00914319);
}

double NNfunction_ss_sRcR::synapse0x3044200() {
   return (neuron0x3039f30()*-0.0379486);
}

double NNfunction_ss_sRcR::synapse0x3044240() {
   return (neuron0x303a270()*-0.0301054);
}

double NNfunction_ss_sRcR::synapse0x3044280() {
   return (neuron0x303a5b0()*-0.0409382);
}

double NNfunction_ss_sRcR::synapse0x30442c0() {
   return (neuron0x303a8f0()*0.0364646);
}

double NNfunction_ss_sRcR::synapse0x3044300() {
   return (neuron0x303ac30()*-0.000123469);
}

double NNfunction_ss_sRcR::synapse0x3044340() {
   return (neuron0x303af70()*-0.0299963);
}

double NNfunction_ss_sRcR::synapse0x3044380() {
   return (neuron0x303b2b0()*-0.00445448);
}

double NNfunction_ss_sRcR::synapse0x30443c0() {
   return (neuron0x303b5f0()*-0.0375899);
}

double NNfunction_ss_sRcR::synapse0x3044400() {
   return (neuron0x303b930()*-0.020974);
}

double NNfunction_ss_sRcR::synapse0x3044440() {
   return (neuron0x303bc70()*-0.0386731);
}

double NNfunction_ss_sRcR::synapse0x3044480() {
   return (neuron0x303bfb0()*-0.00780744);
}

double NNfunction_ss_sRcR::synapse0x30444c0() {
   return (neuron0x303c2f0()*0.012664);
}

double NNfunction_ss_sRcR::synapse0x3044500() {
   return (neuron0x303c630()*2.58816);
}

double NNfunction_ss_sRcR::synapse0x3043f90() {
   return (neuron0x303c970()*0.0136509);
}

double NNfunction_ss_sRcR::synapse0x3043fd0() {
   return (neuron0x303ced0()*0.0167064);
}

double NNfunction_ss_sRcR::synapse0x3044650() {
   return (neuron0x303d0f0()*-0.0537115);
}

double NNfunction_ss_sRcR::synapse0x3044690() {
   return (neuron0x303d430()*-0.00580461);
}

double NNfunction_ss_sRcR::synapse0x30446d0() {
   return (neuron0x303d770()*-0.0231697);
}

double NNfunction_ss_sRcR::synapse0x3044710() {
   return (neuron0x303dab0()*0.00050232);
}

double NNfunction_ss_sRcR::synapse0x3044750() {
   return (neuron0x303ddf0()*-0.0279003);
}

double NNfunction_ss_sRcR::synapse0x3044790() {
   return (neuron0x303e130()*0.0136671);
}

double NNfunction_ss_sRcR::synapse0x3044b10() {
   return (neuron0x3039570()*-0.00389835);
}

double NNfunction_ss_sRcR::synapse0x3044b50() {
   return (neuron0x30398b0()*0.749016);
}

double NNfunction_ss_sRcR::synapse0x3044b90() {
   return (neuron0x3039bf0()*-0.0334456);
}

double NNfunction_ss_sRcR::synapse0x3044bd0() {
   return (neuron0x3039f30()*0.394721);
}

double NNfunction_ss_sRcR::synapse0x3044c10() {
   return (neuron0x303a270()*0.302587);
}

double NNfunction_ss_sRcR::synapse0x3044c50() {
   return (neuron0x303a5b0()*0.14455);
}

double NNfunction_ss_sRcR::synapse0x3044c90() {
   return (neuron0x303a8f0()*-0.173842);
}

double NNfunction_ss_sRcR::synapse0x3044cd0() {
   return (neuron0x303ac30()*-0.0875049);
}

double NNfunction_ss_sRcR::synapse0x3044d10() {
   return (neuron0x303af70()*0.218217);
}

double NNfunction_ss_sRcR::synapse0x3044d50() {
   return (neuron0x303b2b0()*0.24364);
}

double NNfunction_ss_sRcR::synapse0x3044d90() {
   return (neuron0x303b5f0()*-0.0256039);
}

double NNfunction_ss_sRcR::synapse0x3044dd0() {
   return (neuron0x303b930()*0.0185837);
}

double NNfunction_ss_sRcR::synapse0x3044e10() {
   return (neuron0x303bc70()*0.622226);
}

double NNfunction_ss_sRcR::synapse0x3044e50() {
   return (neuron0x303bfb0()*-0.116263);
}

double NNfunction_ss_sRcR::synapse0x3044e90() {
   return (neuron0x303c2f0()*0.175599);
}

double NNfunction_ss_sRcR::synapse0x3044ed0() {
   return (neuron0x303c630()*-0.0547577);
}

double NNfunction_ss_sRcR::synapse0x3044960() {
   return (neuron0x303c970()*-0.546747);
}

double NNfunction_ss_sRcR::synapse0x30449a0() {
   return (neuron0x303ced0()*-0.12213);
}

double NNfunction_ss_sRcR::synapse0x3041730() {
   return (neuron0x303d0f0()*0.0893254);
}

double NNfunction_ss_sRcR::synapse0x3041770() {
   return (neuron0x303d430()*0.750668);
}

double NNfunction_ss_sRcR::synapse0x30417b0() {
   return (neuron0x303d770()*0.271961);
}

double NNfunction_ss_sRcR::synapse0x30417f0() {
   return (neuron0x303dab0()*0.310332);
}

double NNfunction_ss_sRcR::synapse0x3041830() {
   return (neuron0x303ddf0()*-0.0134399);
}

double NNfunction_ss_sRcR::synapse0x3041870() {
   return (neuron0x303e130()*0.205494);
}

double NNfunction_ss_sRcR::synapse0x3041bf0() {
   return (neuron0x3039570()*0.207337);
}

double NNfunction_ss_sRcR::synapse0x3041c30() {
   return (neuron0x30398b0()*0.0569246);
}

double NNfunction_ss_sRcR::synapse0x3041c70() {
   return (neuron0x3039bf0()*0.133999);
}

double NNfunction_ss_sRcR::synapse0x3041cb0() {
   return (neuron0x3039f30()*-1.25618);
}

double NNfunction_ss_sRcR::synapse0x3041cf0() {
   return (neuron0x303a270()*-0.437378);
}

double NNfunction_ss_sRcR::synapse0x3041d30() {
   return (neuron0x303a5b0()*-0.399783);
}

double NNfunction_ss_sRcR::synapse0x3041d70() {
   return (neuron0x303a8f0()*0.12425);
}

double NNfunction_ss_sRcR::synapse0x3041db0() {
   return (neuron0x303ac30()*0.178212);
}

double NNfunction_ss_sRcR::synapse0x3041df0() {
   return (neuron0x303af70()*0.212697);
}

double NNfunction_ss_sRcR::synapse0x3041e30() {
   return (neuron0x303b2b0()*0.224815);
}

double NNfunction_ss_sRcR::synapse0x3041e70() {
   return (neuron0x303b5f0()*-0.0778645);
}

double NNfunction_ss_sRcR::synapse0x3041eb0() {
   return (neuron0x303b930()*0.106736);
}

double NNfunction_ss_sRcR::synapse0x3041ef0() {
   return (neuron0x303bc70()*0.00157526);
}

double NNfunction_ss_sRcR::synapse0x3046030() {
   return (neuron0x303bfb0()*-0.190665);
}

double NNfunction_ss_sRcR::synapse0x3046070() {
   return (neuron0x303c2f0()*0.0916692);
}

double NNfunction_ss_sRcR::synapse0x30460b0() {
   return (neuron0x303c630()*-0.73859);
}

double NNfunction_ss_sRcR::synapse0x3041a40() {
   return (neuron0x303c970()*-0.167397);
}

double NNfunction_ss_sRcR::synapse0x3041a80() {
   return (neuron0x303ced0()*-0.123891);
}

double NNfunction_ss_sRcR::synapse0x3046200() {
   return (neuron0x303d0f0()*0.204642);
}

double NNfunction_ss_sRcR::synapse0x3046240() {
   return (neuron0x303d430()*0.0146944);
}

double NNfunction_ss_sRcR::synapse0x3046280() {
   return (neuron0x303d770()*0.0365145);
}

double NNfunction_ss_sRcR::synapse0x30462c0() {
   return (neuron0x303dab0()*0.0781103);
}

double NNfunction_ss_sRcR::synapse0x3046300() {
   return (neuron0x303ddf0()*-0.000220737);
}

double NNfunction_ss_sRcR::synapse0x3046340() {
   return (neuron0x303e130()*-0.0272);
}

double NNfunction_ss_sRcR::synapse0x30466c0() {
   return (neuron0x3039570()*-0.140459);
}

double NNfunction_ss_sRcR::synapse0x3046700() {
   return (neuron0x30398b0()*-0.596695);
}

double NNfunction_ss_sRcR::synapse0x3046740() {
   return (neuron0x3039bf0()*-0.00808794);
}

double NNfunction_ss_sRcR::synapse0x3046780() {
   return (neuron0x3039f30()*0.978604);
}

double NNfunction_ss_sRcR::synapse0x30467c0() {
   return (neuron0x303a270()*-0.550534);
}

double NNfunction_ss_sRcR::synapse0x3046800() {
   return (neuron0x303a5b0()*-0.193806);
}

double NNfunction_ss_sRcR::synapse0x3046840() {
   return (neuron0x303a8f0()*0.136279);
}

double NNfunction_ss_sRcR::synapse0x3046880() {
   return (neuron0x303ac30()*-0.949449);
}

double NNfunction_ss_sRcR::synapse0x30468c0() {
   return (neuron0x303af70()*-0.466926);
}

double NNfunction_ss_sRcR::synapse0x3046900() {
   return (neuron0x303b2b0()*-0.503078);
}

double NNfunction_ss_sRcR::synapse0x3046940() {
   return (neuron0x303b5f0()*-0.666123);
}

double NNfunction_ss_sRcR::synapse0x3046980() {
   return (neuron0x303b930()*-0.249854);
}

double NNfunction_ss_sRcR::synapse0x30469c0() {
   return (neuron0x303bc70()*-0.371731);
}

double NNfunction_ss_sRcR::synapse0x3046a00() {
   return (neuron0x303bfb0()*-0.116338);
}

double NNfunction_ss_sRcR::synapse0x3046a40() {
   return (neuron0x303c2f0()*-0.432593);
}

double NNfunction_ss_sRcR::synapse0x3046a80() {
   return (neuron0x303c630()*-0.156504);
}

double NNfunction_ss_sRcR::synapse0x3046510() {
   return (neuron0x303c970()*0.390012);
}

double NNfunction_ss_sRcR::synapse0x3046550() {
   return (neuron0x303ced0()*-0.619131);
}

double NNfunction_ss_sRcR::synapse0x3046bd0() {
   return (neuron0x303d0f0()*0.278839);
}

double NNfunction_ss_sRcR::synapse0x3046c10() {
   return (neuron0x303d430()*0.314048);
}

double NNfunction_ss_sRcR::synapse0x3046c50() {
   return (neuron0x303d770()*0.0309884);
}

double NNfunction_ss_sRcR::synapse0x3046c90() {
   return (neuron0x303dab0()*0.324273);
}

double NNfunction_ss_sRcR::synapse0x3046cd0() {
   return (neuron0x303ddf0()*-0.341087);
}

double NNfunction_ss_sRcR::synapse0x3046d10() {
   return (neuron0x303e130()*-0.413816);
}

double NNfunction_ss_sRcR::synapse0x3047090() {
   return (neuron0x3039570()*0.638842);
}

double NNfunction_ss_sRcR::synapse0x30470d0() {
   return (neuron0x30398b0()*-0.192252);
}

double NNfunction_ss_sRcR::synapse0x3047110() {
   return (neuron0x3039bf0()*-0.0244447);
}

double NNfunction_ss_sRcR::synapse0x3047150() {
   return (neuron0x3039f30()*-0.0608594);
}

double NNfunction_ss_sRcR::synapse0x3047190() {
   return (neuron0x303a270()*0.530878);
}

double NNfunction_ss_sRcR::synapse0x30471d0() {
   return (neuron0x303a5b0()*-0.540343);
}

double NNfunction_ss_sRcR::synapse0x3047210() {
   return (neuron0x303a8f0()*0.0274163);
}

double NNfunction_ss_sRcR::synapse0x3047250() {
   return (neuron0x303ac30()*-0.0275066);
}

double NNfunction_ss_sRcR::synapse0x3047290() {
   return (neuron0x303af70()*-0.0446539);
}

double NNfunction_ss_sRcR::synapse0x30472d0() {
   return (neuron0x303b2b0()*0.169004);
}

double NNfunction_ss_sRcR::synapse0x3047310() {
   return (neuron0x303b5f0()*0.0524311);
}

double NNfunction_ss_sRcR::synapse0x3047350() {
   return (neuron0x303b930()*0.183648);
}

double NNfunction_ss_sRcR::synapse0x3047390() {
   return (neuron0x303bc70()*0.22877);
}

double NNfunction_ss_sRcR::synapse0x30473d0() {
   return (neuron0x303bfb0()*0.0332743);
}

double NNfunction_ss_sRcR::synapse0x3047410() {
   return (neuron0x303c2f0()*-0.327817);
}

double NNfunction_ss_sRcR::synapse0x3047450() {
   return (neuron0x303c630()*-0.718644);
}

double NNfunction_ss_sRcR::synapse0x3046ee0() {
   return (neuron0x303c970()*0.229132);
}

double NNfunction_ss_sRcR::synapse0x3046f20() {
   return (neuron0x303ced0()*0.121969);
}

double NNfunction_ss_sRcR::synapse0x30475a0() {
   return (neuron0x303d0f0()*0.18827);
}

double NNfunction_ss_sRcR::synapse0x30475e0() {
   return (neuron0x303d430()*-0.032972);
}

double NNfunction_ss_sRcR::synapse0x3047620() {
   return (neuron0x303d770()*-0.0225928);
}

double NNfunction_ss_sRcR::synapse0x3047660() {
   return (neuron0x303dab0()*0.358667);
}

double NNfunction_ss_sRcR::synapse0x30476a0() {
   return (neuron0x303ddf0()*0.208752);
}

double NNfunction_ss_sRcR::synapse0x30476e0() {
   return (neuron0x303e130()*0.179563);
}

double NNfunction_ss_sRcR::synapse0x3047a60() {
   return (neuron0x3039570()*-0.840986);
}

double NNfunction_ss_sRcR::synapse0x3047aa0() {
   return (neuron0x30398b0()*-0.0543333);
}

double NNfunction_ss_sRcR::synapse0x3047ae0() {
   return (neuron0x3039bf0()*0.816503);
}

double NNfunction_ss_sRcR::synapse0x3047b20() {
   return (neuron0x3039f30()*0.00767867);
}

double NNfunction_ss_sRcR::synapse0x3047b60() {
   return (neuron0x303a270()*0.213249);
}

double NNfunction_ss_sRcR::synapse0x3047ba0() {
   return (neuron0x303a5b0()*0.252532);
}

double NNfunction_ss_sRcR::synapse0x3047be0() {
   return (neuron0x303a8f0()*0.272325);
}

double NNfunction_ss_sRcR::synapse0x3047c20() {
   return (neuron0x303ac30()*0.227536);
}

double NNfunction_ss_sRcR::synapse0x3047c60() {
   return (neuron0x303af70()*0.479814);
}

double NNfunction_ss_sRcR::synapse0x3047ca0() {
   return (neuron0x303b2b0()*-0.205223);
}

double NNfunction_ss_sRcR::synapse0x3047ce0() {
   return (neuron0x303b5f0()*-0.145568);
}

double NNfunction_ss_sRcR::synapse0x3047d20() {
   return (neuron0x303b930()*0.134294);
}

double NNfunction_ss_sRcR::synapse0x3047d60() {
   return (neuron0x303bc70()*-0.0855071);
}

double NNfunction_ss_sRcR::synapse0x3047da0() {
   return (neuron0x303bfb0()*0.207889);
}

double NNfunction_ss_sRcR::synapse0x3047de0() {
   return (neuron0x303c2f0()*0.0424988);
}

double NNfunction_ss_sRcR::synapse0x3047e20() {
   return (neuron0x303c630()*-0.338543);
}

double NNfunction_ss_sRcR::synapse0x30478b0() {
   return (neuron0x303c970()*0.248074);
}

double NNfunction_ss_sRcR::synapse0x30478f0() {
   return (neuron0x303ced0()*0.496502);
}

double NNfunction_ss_sRcR::synapse0x3047f70() {
   return (neuron0x303d0f0()*-0.583479);
}

double NNfunction_ss_sRcR::synapse0x3047fb0() {
   return (neuron0x303d430()*0.129589);
}

double NNfunction_ss_sRcR::synapse0x3047ff0() {
   return (neuron0x303d770()*0.470957);
}

double NNfunction_ss_sRcR::synapse0x3048030() {
   return (neuron0x303dab0()*0.315919);
}

double NNfunction_ss_sRcR::synapse0x3048070() {
   return (neuron0x303ddf0()*-8.15036e-05);
}

double NNfunction_ss_sRcR::synapse0x30480b0() {
   return (neuron0x303e130()*0.0152914);
}

double NNfunction_ss_sRcR::synapse0x3048430() {
   return (neuron0x3039570()*-0.0415741);
}

double NNfunction_ss_sRcR::synapse0x3039790() {
   return (neuron0x30398b0()*0.189517);
}

double NNfunction_ss_sRcR::synapse0x30397d0() {
   return (neuron0x3039bf0()*0.0346387);
}

double NNfunction_ss_sRcR::synapse0x3039ad0() {
   return (neuron0x3039f30()*-2.48116);
}

double NNfunction_ss_sRcR::synapse0x3039b10() {
   return (neuron0x303a270()*0.0632149);
}

double NNfunction_ss_sRcR::synapse0x3039e10() {
   return (neuron0x303a5b0()*-0.0153034);
}

double NNfunction_ss_sRcR::synapse0x3039e50() {
   return (neuron0x303a8f0()*-0.00176061);
}

double NNfunction_ss_sRcR::synapse0x303a150() {
   return (neuron0x303ac30()*-0.0699836);
}

double NNfunction_ss_sRcR::synapse0x303a190() {
   return (neuron0x303af70()*-0.103608);
}

double NNfunction_ss_sRcR::synapse0x303a490() {
   return (neuron0x303b2b0()*0.00581545);
}

double NNfunction_ss_sRcR::synapse0x303a4d0() {
   return (neuron0x303b5f0()*-0.00576464);
}

double NNfunction_ss_sRcR::synapse0x303a7d0() {
   return (neuron0x303b930()*-0.0681316);
}

double NNfunction_ss_sRcR::synapse0x303a810() {
   return (neuron0x303bc70()*-0.0615836);
}

double NNfunction_ss_sRcR::synapse0x303ab10() {
   return (neuron0x303bfb0()*-0.0573027);
}

double NNfunction_ss_sRcR::synapse0x303ab50() {
   return (neuron0x303c2f0()*0.0655735);
}

double NNfunction_ss_sRcR::synapse0x303ae50() {
   return (neuron0x303c630()*-0.499594);
}

double NNfunction_ss_sRcR::synapse0x303ae90() {
   return (neuron0x303c970()*-0.0292047);
}

double NNfunction_ss_sRcR::synapse0x303b190() {
   return (neuron0x303ced0()*0.0130873);
}

double NNfunction_ss_sRcR::synapse0x303b1d0() {
   return (neuron0x303d0f0()*-0.0489985);
}

double NNfunction_ss_sRcR::synapse0x303b4d0() {
   return (neuron0x303d430()*-0.0541113);
}

double NNfunction_ss_sRcR::synapse0x303b510() {
   return (neuron0x303d770()*-0.0586017);
}

double NNfunction_ss_sRcR::synapse0x303b810() {
   return (neuron0x303dab0()*-0.0261902);
}

double NNfunction_ss_sRcR::synapse0x303b850() {
   return (neuron0x303ddf0()*-0.0887125);
}

double NNfunction_ss_sRcR::synapse0x303bb50() {
   return (neuron0x303e130()*-0.00244896);
}

double NNfunction_ss_sRcR::synapse0x303bb90() {
   return (neuron0x3039570()*0.610415);
}

double NNfunction_ss_sRcR::synapse0x303c850() {
   return (neuron0x30398b0()*-0.242377);
}

double NNfunction_ss_sRcR::synapse0x303c890() {
   return (neuron0x3039bf0()*0.117434);
}

double NNfunction_ss_sRcR::synapse0x3048280() {
   return (neuron0x3039f30()*0.525045);
}

double NNfunction_ss_sRcR::synapse0x30482c0() {
   return (neuron0x303a270()*0.0304285);
}

double NNfunction_ss_sRcR::synapse0x303cb90() {
   return (neuron0x303a5b0()*-1.01507);
}

double NNfunction_ss_sRcR::synapse0x303cbd0() {
   return (neuron0x303a8f0()*0.204874);
}

double NNfunction_ss_sRcR::synapse0x2deab60() {
   return (neuron0x303ac30()*0.189681);
}

double NNfunction_ss_sRcR::synapse0x2deaba0() {
   return (neuron0x303af70()*0.0389846);
}

double NNfunction_ss_sRcR::synapse0x303d310() {
   return (neuron0x303b2b0()*0.033988);
}

double NNfunction_ss_sRcR::synapse0x303d350() {
   return (neuron0x303b5f0()*0.158525);
}

double NNfunction_ss_sRcR::synapse0x303d650() {
   return (neuron0x303b930()*0.021525);
}

double NNfunction_ss_sRcR::synapse0x303d690() {
   return (neuron0x303bc70()*-0.296738);
}

double NNfunction_ss_sRcR::synapse0x303d990() {
   return (neuron0x303bfb0()*-0.0188857);
}

double NNfunction_ss_sRcR::synapse0x303d9d0() {
   return (neuron0x303c2f0()*-0.272975);
}

double NNfunction_ss_sRcR::synapse0x303dcd0() {
   return (neuron0x303c630()*0.188144);
}

double NNfunction_ss_sRcR::synapse0x303dd10() {
   return (neuron0x303c970()*0.026319);
}

double NNfunction_ss_sRcR::synapse0x303e010() {
   return (neuron0x303ced0()*-0.558404);
}

double NNfunction_ss_sRcR::synapse0x303e050() {
   return (neuron0x303d0f0()*-0.0349728);
}

double NNfunction_ss_sRcR::synapse0x303e350() {
   return (neuron0x303d430()*0.161422);
}

double NNfunction_ss_sRcR::synapse0x303e390() {
   return (neuron0x303d770()*-0.394538);
}

double NNfunction_ss_sRcR::synapse0x303be90() {
   return (neuron0x303dab0()*0.412883);
}

double NNfunction_ss_sRcR::synapse0x303bed0() {
   return (neuron0x303ddf0()*-0.110688);
}

double NNfunction_ss_sRcR::synapse0x304a1a0() {
   return (neuron0x303e130()*0.204959);
}

double NNfunction_ss_sRcR::synapse0x304a520() {
   return (neuron0x3039570()*0.130676);
}

double NNfunction_ss_sRcR::synapse0x304a560() {
   return (neuron0x30398b0()*0.0352557);
}

double NNfunction_ss_sRcR::synapse0x304a5a0() {
   return (neuron0x3039bf0()*-0.112373);
}

double NNfunction_ss_sRcR::synapse0x304a5e0() {
   return (neuron0x3039f30()*-2.64178);
}

double NNfunction_ss_sRcR::synapse0x304a620() {
   return (neuron0x303a270()*-0.212707);
}

double NNfunction_ss_sRcR::synapse0x304a660() {
   return (neuron0x303a5b0()*0.179737);
}

double NNfunction_ss_sRcR::synapse0x304a6a0() {
   return (neuron0x303a8f0()*0.308521);
}

double NNfunction_ss_sRcR::synapse0x304a6e0() {
   return (neuron0x303ac30()*0.124266);
}

double NNfunction_ss_sRcR::synapse0x304a720() {
   return (neuron0x303af70()*-0.0225538);
}

double NNfunction_ss_sRcR::synapse0x304a760() {
   return (neuron0x303b2b0()*-0.0438552);
}

double NNfunction_ss_sRcR::synapse0x304a7a0() {
   return (neuron0x303b5f0()*-0.118776);
}

double NNfunction_ss_sRcR::synapse0x304a7e0() {
   return (neuron0x303b930()*0.183952);
}

double NNfunction_ss_sRcR::synapse0x304a820() {
   return (neuron0x303bc70()*0.125016);
}

double NNfunction_ss_sRcR::synapse0x304a860() {
   return (neuron0x303bfb0()*0.235949);
}

double NNfunction_ss_sRcR::synapse0x304a8a0() {
   return (neuron0x303c2f0()*-0.114873);
}

double NNfunction_ss_sRcR::synapse0x304a8e0() {
   return (neuron0x303c630()*0.513404);
}

double NNfunction_ss_sRcR::synapse0x304a370() {
   return (neuron0x303c970()*0.315596);
}

double NNfunction_ss_sRcR::synapse0x304a3b0() {
   return (neuron0x303ced0()*0.00428865);
}

double NNfunction_ss_sRcR::synapse0x304aa30() {
   return (neuron0x303d0f0()*0.906894);
}

double NNfunction_ss_sRcR::synapse0x304aa70() {
   return (neuron0x303d430()*-0.00337834);
}

double NNfunction_ss_sRcR::synapse0x304aab0() {
   return (neuron0x303d770()*0.106085);
}

double NNfunction_ss_sRcR::synapse0x304aaf0() {
   return (neuron0x303dab0()*0.168463);
}

double NNfunction_ss_sRcR::synapse0x304ab30() {
   return (neuron0x303ddf0()*0.00280277);
}

double NNfunction_ss_sRcR::synapse0x304ab70() {
   return (neuron0x303e130()*-0.064904);
}

double NNfunction_ss_sRcR::synapse0x304aef0() {
   return (neuron0x3039570()*0.112835);
}

double NNfunction_ss_sRcR::synapse0x304af30() {
   return (neuron0x30398b0()*0.223905);
}

double NNfunction_ss_sRcR::synapse0x304af70() {
   return (neuron0x3039bf0()*0.294604);
}

double NNfunction_ss_sRcR::synapse0x304afb0() {
   return (neuron0x3039f30()*0.0907355);
}

double NNfunction_ss_sRcR::synapse0x304aff0() {
   return (neuron0x303a270()*0.226917);
}

double NNfunction_ss_sRcR::synapse0x304b030() {
   return (neuron0x303a5b0()*0.418059);
}

double NNfunction_ss_sRcR::synapse0x304b070() {
   return (neuron0x303a8f0()*0.434322);
}

double NNfunction_ss_sRcR::synapse0x304b0b0() {
   return (neuron0x303ac30()*-0.401212);
}

double NNfunction_ss_sRcR::synapse0x304b0f0() {
   return (neuron0x303af70()*-0.453494);
}

double NNfunction_ss_sRcR::synapse0x304b130() {
   return (neuron0x303b2b0()*0.752618);
}

double NNfunction_ss_sRcR::synapse0x304b170() {
   return (neuron0x303b5f0()*-0.319134);
}

double NNfunction_ss_sRcR::synapse0x304b1b0() {
   return (neuron0x303b930()*0.310539);
}

double NNfunction_ss_sRcR::synapse0x304b1f0() {
   return (neuron0x303bc70()*0.133905);
}

double NNfunction_ss_sRcR::synapse0x304b230() {
   return (neuron0x303bfb0()*1.23426);
}

double NNfunction_ss_sRcR::synapse0x304b270() {
   return (neuron0x303c2f0()*0.309551);
}

double NNfunction_ss_sRcR::synapse0x304b2b0() {
   return (neuron0x303c630()*0.298489);
}

double NNfunction_ss_sRcR::synapse0x304ad40() {
   return (neuron0x303c970()*-0.233409);
}

double NNfunction_ss_sRcR::synapse0x304ad80() {
   return (neuron0x303ced0()*0.532058);
}

double NNfunction_ss_sRcR::synapse0x304b400() {
   return (neuron0x303d0f0()*0.525887);
}

double NNfunction_ss_sRcR::synapse0x304b440() {
   return (neuron0x303d430()*-0.154055);
}

double NNfunction_ss_sRcR::synapse0x304b480() {
   return (neuron0x303d770()*0.263302);
}

double NNfunction_ss_sRcR::synapse0x304b4c0() {
   return (neuron0x303dab0()*-0.468942);
}

double NNfunction_ss_sRcR::synapse0x304b500() {
   return (neuron0x303ddf0()*-0.146937);
}

double NNfunction_ss_sRcR::synapse0x304b540() {
   return (neuron0x303e130()*-0.396902);
}

double NNfunction_ss_sRcR::synapse0x304b8c0() {
   return (neuron0x3039570()*0.0112911);
}

double NNfunction_ss_sRcR::synapse0x304b900() {
   return (neuron0x30398b0()*0.0196272);
}

double NNfunction_ss_sRcR::synapse0x304b940() {
   return (neuron0x3039bf0()*0.00731043);
}

double NNfunction_ss_sRcR::synapse0x304b980() {
   return (neuron0x3039f30()*-0.050883);
}

double NNfunction_ss_sRcR::synapse0x304b9c0() {
   return (neuron0x303a270()*-0.00714425);
}

double NNfunction_ss_sRcR::synapse0x304ba00() {
   return (neuron0x303a5b0()*0.0145704);
}

double NNfunction_ss_sRcR::synapse0x304ba40() {
   return (neuron0x303a8f0()*-0.0186848);
}

double NNfunction_ss_sRcR::synapse0x304ba80() {
   return (neuron0x303ac30()*-0.00474223);
}

double NNfunction_ss_sRcR::synapse0x304bac0() {
   return (neuron0x303af70()*0.00178025);
}

double NNfunction_ss_sRcR::synapse0x304bb00() {
   return (neuron0x303b2b0()*-0.010513);
}

double NNfunction_ss_sRcR::synapse0x304bb40() {
   return (neuron0x303b5f0()*0.0120768);
}

double NNfunction_ss_sRcR::synapse0x304bb80() {
   return (neuron0x303b930()*0.0162273);
}

double NNfunction_ss_sRcR::synapse0x304bbc0() {
   return (neuron0x303bc70()*0.00748909);
}

double NNfunction_ss_sRcR::synapse0x304bc00() {
   return (neuron0x303bfb0()*0.0127393);
}

double NNfunction_ss_sRcR::synapse0x304bc40() {
   return (neuron0x303c2f0()*-0.00641391);
}

double NNfunction_ss_sRcR::synapse0x304bc80() {
   return (neuron0x303c630()*1.05688);
}

double NNfunction_ss_sRcR::synapse0x304b710() {
   return (neuron0x303c970()*0.00383789);
}

double NNfunction_ss_sRcR::synapse0x304b750() {
   return (neuron0x303ced0()*0.0114135);
}

double NNfunction_ss_sRcR::synapse0x304bdd0() {
   return (neuron0x303d0f0()*0.214847);
}

double NNfunction_ss_sRcR::synapse0x304be10() {
   return (neuron0x303d430()*0.0189188);
}

double NNfunction_ss_sRcR::synapse0x304be50() {
   return (neuron0x303d770()*0.00792267);
}

double NNfunction_ss_sRcR::synapse0x304be90() {
   return (neuron0x303dab0()*0.00413652);
}

double NNfunction_ss_sRcR::synapse0x304bed0() {
   return (neuron0x303ddf0()*0.0015082);
}

double NNfunction_ss_sRcR::synapse0x304bf10() {
   return (neuron0x303e130()*-0.000466112);
}

double NNfunction_ss_sRcR::synapse0x304c290() {
   return (neuron0x3039570()*-0.354265);
}

double NNfunction_ss_sRcR::synapse0x304c2d0() {
   return (neuron0x30398b0()*-0.0206986);
}

double NNfunction_ss_sRcR::synapse0x304c310() {
   return (neuron0x3039bf0()*0.103772);
}

double NNfunction_ss_sRcR::synapse0x304c350() {
   return (neuron0x3039f30()*-0.106726);
}

double NNfunction_ss_sRcR::synapse0x304c390() {
   return (neuron0x303a270()*0.0212384);
}

double NNfunction_ss_sRcR::synapse0x304c3d0() {
   return (neuron0x303a5b0()*-0.0989158);
}

double NNfunction_ss_sRcR::synapse0x304c410() {
   return (neuron0x303a8f0()*0.566462);
}

double NNfunction_ss_sRcR::synapse0x304c450() {
   return (neuron0x303ac30()*-0.165425);
}

double NNfunction_ss_sRcR::synapse0x304c490() {
   return (neuron0x303af70()*0.0986386);
}

double NNfunction_ss_sRcR::synapse0x304c4d0() {
   return (neuron0x303b2b0()*0.364856);
}

double NNfunction_ss_sRcR::synapse0x304c510() {
   return (neuron0x303b5f0()*0.109767);
}

double NNfunction_ss_sRcR::synapse0x304c550() {
   return (neuron0x303b930()*-0.20307);
}

double NNfunction_ss_sRcR::synapse0x304c590() {
   return (neuron0x303bc70()*-0.987386);
}

double NNfunction_ss_sRcR::synapse0x304c5d0() {
   return (neuron0x303bfb0()*0.619554);
}

double NNfunction_ss_sRcR::synapse0x304c610() {
   return (neuron0x303c2f0()*0.484185);
}

double NNfunction_ss_sRcR::synapse0x304c650() {
   return (neuron0x303c630()*-0.130368);
}

double NNfunction_ss_sRcR::synapse0x304c0e0() {
   return (neuron0x303c970()*0.453216);
}

double NNfunction_ss_sRcR::synapse0x304c120() {
   return (neuron0x303ced0()*0.0666503);
}

double NNfunction_ss_sRcR::synapse0x304c7a0() {
   return (neuron0x303d0f0()*0.00333153);
}

double NNfunction_ss_sRcR::synapse0x304c7e0() {
   return (neuron0x303d430()*0.280249);
}

double NNfunction_ss_sRcR::synapse0x304c820() {
   return (neuron0x303d770()*0.16722);
}

double NNfunction_ss_sRcR::synapse0x304c860() {
   return (neuron0x303dab0()*-0.202744);
}

double NNfunction_ss_sRcR::synapse0x304c8a0() {
   return (neuron0x303ddf0()*-0.146581);
}

double NNfunction_ss_sRcR::synapse0x304c8e0() {
   return (neuron0x303e130()*0.0433066);
}

double NNfunction_ss_sRcR::synapse0x304cc60() {
   return (neuron0x3039570()*-0.0438222);
}

double NNfunction_ss_sRcR::synapse0x304cca0() {
   return (neuron0x30398b0()*-0.437528);
}

double NNfunction_ss_sRcR::synapse0x304cce0() {
   return (neuron0x3039bf0()*-0.0765842);
}

double NNfunction_ss_sRcR::synapse0x304cd20() {
   return (neuron0x3039f30()*-1.47766);
}

double NNfunction_ss_sRcR::synapse0x304cd60() {
   return (neuron0x303a270()*0.361457);
}

double NNfunction_ss_sRcR::synapse0x304cda0() {
   return (neuron0x303a5b0()*0.119409);
}

double NNfunction_ss_sRcR::synapse0x304cde0() {
   return (neuron0x303a8f0()*0.271354);
}

double NNfunction_ss_sRcR::synapse0x304ce20() {
   return (neuron0x303ac30()*-0.293248);
}

double NNfunction_ss_sRcR::synapse0x304ce60() {
   return (neuron0x303af70()*0.0117468);
}

double NNfunction_ss_sRcR::synapse0x3045020() {
   return (neuron0x303b2b0()*-0.335245);
}

double NNfunction_ss_sRcR::synapse0x3045060() {
   return (neuron0x303b5f0()*-0.102721);
}

double NNfunction_ss_sRcR::synapse0x30450a0() {
   return (neuron0x303b930()*-0.480233);
}

double NNfunction_ss_sRcR::synapse0x30450e0() {
   return (neuron0x303bc70()*-0.0964108);
}

double NNfunction_ss_sRcR::synapse0x3045120() {
   return (neuron0x303bfb0()*-0.202644);
}

double NNfunction_ss_sRcR::synapse0x3045160() {
   return (neuron0x303c2f0()*-0.0764827);
}

double NNfunction_ss_sRcR::synapse0x30451a0() {
   return (neuron0x303c630()*0.259954);
}

double NNfunction_ss_sRcR::synapse0x304cab0() {
   return (neuron0x303c970()*0.223695);
}

double NNfunction_ss_sRcR::synapse0x304caf0() {
   return (neuron0x303ced0()*-0.493195);
}

double NNfunction_ss_sRcR::synapse0x30452f0() {
   return (neuron0x303d0f0()*-0.519617);
}

double NNfunction_ss_sRcR::synapse0x3045330() {
   return (neuron0x303d430()*0.208148);
}

double NNfunction_ss_sRcR::synapse0x3045370() {
   return (neuron0x303d770()*-0.100749);
}

double NNfunction_ss_sRcR::synapse0x30453b0() {
   return (neuron0x303dab0()*-0.152221);
}

double NNfunction_ss_sRcR::synapse0x30453f0() {
   return (neuron0x303ddf0()*-0.2567);
}

double NNfunction_ss_sRcR::synapse0x3045430() {
   return (neuron0x303e130()*0.137836);
}

double NNfunction_ss_sRcR::synapse0x30457b0() {
   return (neuron0x3039570()*-0.0186095);
}

double NNfunction_ss_sRcR::synapse0x30457f0() {
   return (neuron0x30398b0()*-0.304982);
}

double NNfunction_ss_sRcR::synapse0x3045830() {
   return (neuron0x3039bf0()*-0.452668);
}

double NNfunction_ss_sRcR::synapse0x3045870() {
   return (neuron0x3039f30()*0.781829);
}

double NNfunction_ss_sRcR::synapse0x30458b0() {
   return (neuron0x303a270()*0.0833605);
}

double NNfunction_ss_sRcR::synapse0x30458f0() {
   return (neuron0x303a5b0()*0.399744);
}

double NNfunction_ss_sRcR::synapse0x3045930() {
   return (neuron0x303a8f0()*0.0821599);
}

double NNfunction_ss_sRcR::synapse0x3045970() {
   return (neuron0x303ac30()*0.158259);
}

double NNfunction_ss_sRcR::synapse0x30459b0() {
   return (neuron0x303af70()*-0.659496);
}

double NNfunction_ss_sRcR::synapse0x30459f0() {
   return (neuron0x303b2b0()*0.139571);
}

double NNfunction_ss_sRcR::synapse0x3045a30() {
   return (neuron0x303b5f0()*-0.641381);
}

double NNfunction_ss_sRcR::synapse0x3045a70() {
   return (neuron0x303b930()*-0.523196);
}

double NNfunction_ss_sRcR::synapse0x3045ab0() {
   return (neuron0x303bc70()*0.509433);
}

double NNfunction_ss_sRcR::synapse0x3045af0() {
   return (neuron0x303bfb0()*0.0396045);
}

double NNfunction_ss_sRcR::synapse0x3045b30() {
   return (neuron0x303c2f0()*0.284157);
}

double NNfunction_ss_sRcR::synapse0x3045b70() {
   return (neuron0x303c630()*-0.398945);
}

double NNfunction_ss_sRcR::synapse0x3045600() {
   return (neuron0x303c970()*0.264468);
}

double NNfunction_ss_sRcR::synapse0x3045640() {
   return (neuron0x303ced0()*0.209581);
}

double NNfunction_ss_sRcR::synapse0x3045cc0() {
   return (neuron0x303d0f0()*-0.27203);
}

double NNfunction_ss_sRcR::synapse0x3045d00() {
   return (neuron0x303d430()*0.0659393);
}

double NNfunction_ss_sRcR::synapse0x3045d40() {
   return (neuron0x303d770()*-0.129709);
}

double NNfunction_ss_sRcR::synapse0x3045d80() {
   return (neuron0x303dab0()*-0.445055);
}

double NNfunction_ss_sRcR::synapse0x3045dc0() {
   return (neuron0x303ddf0()*-0.337952);
}

double NNfunction_ss_sRcR::synapse0x3045e00() {
   return (neuron0x303e130()*-0.275969);
}

double NNfunction_ss_sRcR::synapse0x3045fd0() {
   return (neuron0x3039570()*0.0625192);
}

double NNfunction_ss_sRcR::synapse0x304f060() {
   return (neuron0x30398b0()*-0.368369);
}

double NNfunction_ss_sRcR::synapse0x304f0a0() {
   return (neuron0x3039bf0()*-0.145643);
}

double NNfunction_ss_sRcR::synapse0x304f0e0() {
   return (neuron0x3039f30()*0.143672);
}

double NNfunction_ss_sRcR::synapse0x304f120() {
   return (neuron0x303a270()*0.175429);
}

double NNfunction_ss_sRcR::synapse0x304f160() {
   return (neuron0x303a5b0()*0.812506);
}

double NNfunction_ss_sRcR::synapse0x304f1a0() {
   return (neuron0x303a8f0()*-0.215892);
}

double NNfunction_ss_sRcR::synapse0x304f1e0() {
   return (neuron0x303ac30()*-0.0331071);
}

double NNfunction_ss_sRcR::synapse0x304f220() {
   return (neuron0x303af70()*0.0629877);
}

double NNfunction_ss_sRcR::synapse0x304f260() {
   return (neuron0x303b2b0()*-0.167327);
}

double NNfunction_ss_sRcR::synapse0x304f2a0() {
   return (neuron0x303b5f0()*0.00880942);
}

double NNfunction_ss_sRcR::synapse0x304f2e0() {
   return (neuron0x303b930()*0.225427);
}

double NNfunction_ss_sRcR::synapse0x304f320() {
   return (neuron0x303bc70()*0.192271);
}

double NNfunction_ss_sRcR::synapse0x304f360() {
   return (neuron0x303bfb0()*-0.0103294);
}

double NNfunction_ss_sRcR::synapse0x304f3a0() {
   return (neuron0x303c2f0()*-0.0732097);
}

double NNfunction_ss_sRcR::synapse0x304f3e0() {
   return (neuron0x303c630()*-0.649542);
}

double NNfunction_ss_sRcR::synapse0x304eeb0() {
   return (neuron0x303c970()*-0.326433);
}

double NNfunction_ss_sRcR::synapse0x304eef0() {
   return (neuron0x303ced0()*0.239333);
}

double NNfunction_ss_sRcR::synapse0x304f530() {
   return (neuron0x303d0f0()*0.110402);
}

double NNfunction_ss_sRcR::synapse0x304f570() {
   return (neuron0x303d430()*0.163108);
}

double NNfunction_ss_sRcR::synapse0x304f5b0() {
   return (neuron0x303d770()*0.520054);
}

double NNfunction_ss_sRcR::synapse0x304f5f0() {
   return (neuron0x303dab0()*0.0534836);
}

double NNfunction_ss_sRcR::synapse0x304f630() {
   return (neuron0x303ddf0()*0.273172);
}

double NNfunction_ss_sRcR::synapse0x304f670() {
   return (neuron0x303e130()*-0.509141);
}

double NNfunction_ss_sRcR::synapse0x304f9f0() {
   return (neuron0x3039570()*-0.0484599);
}

double NNfunction_ss_sRcR::synapse0x304fa30() {
   return (neuron0x30398b0()*-0.305397);
}

double NNfunction_ss_sRcR::synapse0x304fa70() {
   return (neuron0x3039bf0()*-0.0136361);
}

double NNfunction_ss_sRcR::synapse0x304fab0() {
   return (neuron0x3039f30()*-1.17209);
}

double NNfunction_ss_sRcR::synapse0x304faf0() {
   return (neuron0x303a270()*0.2655);
}

double NNfunction_ss_sRcR::synapse0x304fb30() {
   return (neuron0x303a5b0()*0.209648);
}

double NNfunction_ss_sRcR::synapse0x304fb70() {
   return (neuron0x303a8f0()*0.163964);
}

double NNfunction_ss_sRcR::synapse0x304fbb0() {
   return (neuron0x303ac30()*0.159275);
}

double NNfunction_ss_sRcR::synapse0x304fbf0() {
   return (neuron0x303af70()*-0.285783);
}

double NNfunction_ss_sRcR::synapse0x304fc30() {
   return (neuron0x303b2b0()*-0.11823);
}

double NNfunction_ss_sRcR::synapse0x304fc70() {
   return (neuron0x303b5f0()*-0.149824);
}

double NNfunction_ss_sRcR::synapse0x304fcb0() {
   return (neuron0x303b930()*0.043798);
}

double NNfunction_ss_sRcR::synapse0x304fcf0() {
   return (neuron0x303bc70()*0.00443762);
}

double NNfunction_ss_sRcR::synapse0x304fd30() {
   return (neuron0x303bfb0()*-0.0271574);
}

double NNfunction_ss_sRcR::synapse0x304fd70() {
   return (neuron0x303c2f0()*0.0322238);
}

double NNfunction_ss_sRcR::synapse0x304fdb0() {
   return (neuron0x303c630()*-0.0074809);
}

double NNfunction_ss_sRcR::synapse0x304f840() {
   return (neuron0x303c970()*0.271918);
}

double NNfunction_ss_sRcR::synapse0x304f880() {
   return (neuron0x303ced0()*-0.285054);
}

double NNfunction_ss_sRcR::synapse0x304ff00() {
   return (neuron0x303d0f0()*0.373923);
}

double NNfunction_ss_sRcR::synapse0x304ff40() {
   return (neuron0x303d430()*-0.114676);
}

double NNfunction_ss_sRcR::synapse0x304ff80() {
   return (neuron0x303d770()*-0.125865);
}

double NNfunction_ss_sRcR::synapse0x304ffc0() {
   return (neuron0x303dab0()*0.283212);
}

double NNfunction_ss_sRcR::synapse0x3050000() {
   return (neuron0x303ddf0()*-0.125973);
}

double NNfunction_ss_sRcR::synapse0x3050040() {
   return (neuron0x303e130()*-0.0762688);
}

double NNfunction_ss_sRcR::synapse0x30503c0() {
   return (neuron0x3039570()*-0.00751859);
}

double NNfunction_ss_sRcR::synapse0x3050400() {
   return (neuron0x30398b0()*-0.00270217);
}

double NNfunction_ss_sRcR::synapse0x3050440() {
   return (neuron0x3039bf0()*-0.0214246);
}

double NNfunction_ss_sRcR::synapse0x3050480() {
   return (neuron0x3039f30()*16.0938);
}

double NNfunction_ss_sRcR::synapse0x30504c0() {
   return (neuron0x303a270()*0.00689616);
}

double NNfunction_ss_sRcR::synapse0x3050500() {
   return (neuron0x303a5b0()*-0.000477672);
}

double NNfunction_ss_sRcR::synapse0x3050540() {
   return (neuron0x303a8f0()*0.0440753);
}

double NNfunction_ss_sRcR::synapse0x3050580() {
   return (neuron0x303ac30()*-0.0411297);
}

double NNfunction_ss_sRcR::synapse0x30505c0() {
   return (neuron0x303af70()*-0.023273);
}

double NNfunction_ss_sRcR::synapse0x3050600() {
   return (neuron0x303b2b0()*0.0266324);
}

double NNfunction_ss_sRcR::synapse0x3050640() {
   return (neuron0x303b5f0()*0.0128923);
}

double NNfunction_ss_sRcR::synapse0x3050680() {
   return (neuron0x303b930()*-0.0337223);
}

double NNfunction_ss_sRcR::synapse0x30506c0() {
   return (neuron0x303bc70()*0.0209996);
}

double NNfunction_ss_sRcR::synapse0x3050700() {
   return (neuron0x303bfb0()*0.0323987);
}

double NNfunction_ss_sRcR::synapse0x3050740() {
   return (neuron0x303c2f0()*-0.0290332);
}

double NNfunction_ss_sRcR::synapse0x3050780() {
   return (neuron0x303c630()*0.140691);
}

double NNfunction_ss_sRcR::synapse0x3050210() {
   return (neuron0x303c970()*-0.0293052);
}

double NNfunction_ss_sRcR::synapse0x3050250() {
   return (neuron0x303ced0()*-0.0191966);
}

double NNfunction_ss_sRcR::synapse0x30508d0() {
   return (neuron0x303d0f0()*0.125299);
}

double NNfunction_ss_sRcR::synapse0x3050910() {
   return (neuron0x303d430()*0.00274379);
}

double NNfunction_ss_sRcR::synapse0x3050950() {
   return (neuron0x303d770()*0.04184);
}

double NNfunction_ss_sRcR::synapse0x3050990() {
   return (neuron0x303dab0()*-0.00456072);
}

double NNfunction_ss_sRcR::synapse0x30509d0() {
   return (neuron0x303ddf0()*0.0238097);
}

double NNfunction_ss_sRcR::synapse0x3050a10() {
   return (neuron0x303e130()*0.0111549);
}

double NNfunction_ss_sRcR::synapse0x3050d90() {
   return (neuron0x3039570()*-0.00748011);
}

double NNfunction_ss_sRcR::synapse0x3050dd0() {
   return (neuron0x30398b0()*0.0444365);
}

double NNfunction_ss_sRcR::synapse0x3050e10() {
   return (neuron0x3039bf0()*0.000438217);
}

double NNfunction_ss_sRcR::synapse0x3050e50() {
   return (neuron0x3039f30()*0.0169168);
}

double NNfunction_ss_sRcR::synapse0x3050e90() {
   return (neuron0x303a270()*0.0266002);
}

double NNfunction_ss_sRcR::synapse0x3050ed0() {
   return (neuron0x303a5b0()*0.00902831);
}

double NNfunction_ss_sRcR::synapse0x3050f10() {
   return (neuron0x303a8f0()*0.0035614);
}

double NNfunction_ss_sRcR::synapse0x3050f50() {
   return (neuron0x303ac30()*0.00494853);
}

double NNfunction_ss_sRcR::synapse0x3050f90() {
   return (neuron0x303af70()*-0.0136685);
}

double NNfunction_ss_sRcR::synapse0x3050fd0() {
   return (neuron0x303b2b0()*0.00367865);
}

double NNfunction_ss_sRcR::synapse0x3051010() {
   return (neuron0x303b5f0()*-0.00532421);
}

double NNfunction_ss_sRcR::synapse0x3051050() {
   return (neuron0x303b930()*-0.0347391);
}

double NNfunction_ss_sRcR::synapse0x3051090() {
   return (neuron0x303bc70()*-0.0167485);
}

double NNfunction_ss_sRcR::synapse0x30510d0() {
   return (neuron0x303bfb0()*-0.00388191);
}

double NNfunction_ss_sRcR::synapse0x3051110() {
   return (neuron0x303c2f0()*0.0144029);
}

double NNfunction_ss_sRcR::synapse0x3051150() {
   return (neuron0x303c630()*-1.43438);
}

double NNfunction_ss_sRcR::synapse0x3050be0() {
   return (neuron0x303c970()*-0.00318331);
}

double NNfunction_ss_sRcR::synapse0x3050c20() {
   return (neuron0x303ced0()*-0.00334784);
}

double NNfunction_ss_sRcR::synapse0x30512a0() {
   return (neuron0x303d0f0()*0.0569071);
}

double NNfunction_ss_sRcR::synapse0x30512e0() {
   return (neuron0x303d430()*-0.0316781);
}

double NNfunction_ss_sRcR::synapse0x3051320() {
   return (neuron0x303d770()*-0.00494825);
}

double NNfunction_ss_sRcR::synapse0x3051360() {
   return (neuron0x303dab0()*-0.0161834);
}

double NNfunction_ss_sRcR::synapse0x30513a0() {
   return (neuron0x303ddf0()*0.00437368);
}

double NNfunction_ss_sRcR::synapse0x30513e0() {
   return (neuron0x303e130()*-0.00962668);
}

double NNfunction_ss_sRcR::synapse0x3051760() {
   return (neuron0x3039570()*0.024708);
}

double NNfunction_ss_sRcR::synapse0x30517a0() {
   return (neuron0x30398b0()*-0.304684);
}

double NNfunction_ss_sRcR::synapse0x30517e0() {
   return (neuron0x3039bf0()*-0.232147);
}

double NNfunction_ss_sRcR::synapse0x3051820() {
   return (neuron0x3039f30()*-2.57488);
}

double NNfunction_ss_sRcR::synapse0x3051860() {
   return (neuron0x303a270()*-0.259967);
}

double NNfunction_ss_sRcR::synapse0x30518a0() {
   return (neuron0x303a5b0()*-0.125355);
}

double NNfunction_ss_sRcR::synapse0x30518e0() {
   return (neuron0x303a8f0()*0.0452416);
}

double NNfunction_ss_sRcR::synapse0x3051920() {
   return (neuron0x303ac30()*-0.0802739);
}

double NNfunction_ss_sRcR::synapse0x3051960() {
   return (neuron0x303af70()*-0.0292254);
}

double NNfunction_ss_sRcR::synapse0x30519a0() {
   return (neuron0x303b2b0()*0.147698);
}

double NNfunction_ss_sRcR::synapse0x30519e0() {
   return (neuron0x303b5f0()*0.0282451);
}

double NNfunction_ss_sRcR::synapse0x3051a20() {
   return (neuron0x303b930()*0.546587);
}

double NNfunction_ss_sRcR::synapse0x3051a60() {
   return (neuron0x303bc70()*0.789324);
}

double NNfunction_ss_sRcR::synapse0x3051aa0() {
   return (neuron0x303bfb0()*0.166254);
}

double NNfunction_ss_sRcR::synapse0x3051ae0() {
   return (neuron0x303c2f0()*0.275442);
}

double NNfunction_ss_sRcR::synapse0x3051b20() {
   return (neuron0x303c630()*0.265171);
}

double NNfunction_ss_sRcR::synapse0x30515b0() {
   return (neuron0x303c970()*0.32866);
}

double NNfunction_ss_sRcR::synapse0x30515f0() {
   return (neuron0x303ced0()*0.383685);
}

double NNfunction_ss_sRcR::synapse0x3051c70() {
   return (neuron0x303d0f0()*0.0763727);
}

double NNfunction_ss_sRcR::synapse0x3051cb0() {
   return (neuron0x303d430()*0.135814);
}

double NNfunction_ss_sRcR::synapse0x3051cf0() {
   return (neuron0x303d770()*0.197898);
}

double NNfunction_ss_sRcR::synapse0x3051d30() {
   return (neuron0x303dab0()*-0.394948);
}

double NNfunction_ss_sRcR::synapse0x3051d70() {
   return (neuron0x303ddf0()*-0.382193);
}

double NNfunction_ss_sRcR::synapse0x3051db0() {
   return (neuron0x303e130()*0.293061);
}

double NNfunction_ss_sRcR::synapse0x3052130() {
   return (neuron0x3039570()*0.468589);
}

double NNfunction_ss_sRcR::synapse0x3052170() {
   return (neuron0x30398b0()*-0.206545);
}

double NNfunction_ss_sRcR::synapse0x30521b0() {
   return (neuron0x3039bf0()*-0.618594);
}

double NNfunction_ss_sRcR::synapse0x30521f0() {
   return (neuron0x3039f30()*0.245249);
}

double NNfunction_ss_sRcR::synapse0x3052230() {
   return (neuron0x303a270()*0.259539);
}

double NNfunction_ss_sRcR::synapse0x3052270() {
   return (neuron0x303a5b0()*0.295579);
}

double NNfunction_ss_sRcR::synapse0x30522b0() {
   return (neuron0x303a8f0()*-0.234213);
}

double NNfunction_ss_sRcR::synapse0x30522f0() {
   return (neuron0x303ac30()*0.31121);
}

double NNfunction_ss_sRcR::synapse0x3052330() {
   return (neuron0x303af70()*-0.215654);
}

double NNfunction_ss_sRcR::synapse0x3052370() {
   return (neuron0x303b2b0()*0.00501651);
}

double NNfunction_ss_sRcR::synapse0x30523b0() {
   return (neuron0x303b5f0()*0.0232331);
}

double NNfunction_ss_sRcR::synapse0x30523f0() {
   return (neuron0x303b930()*0.658959);
}

double NNfunction_ss_sRcR::synapse0x3052430() {
   return (neuron0x303bc70()*-0.302937);
}

double NNfunction_ss_sRcR::synapse0x3052470() {
   return (neuron0x303bfb0()*-0.22757);
}

double NNfunction_ss_sRcR::synapse0x30524b0() {
   return (neuron0x303c2f0()*-0.403354);
}

double NNfunction_ss_sRcR::synapse0x30524f0() {
   return (neuron0x303c630()*-0.874401);
}

double NNfunction_ss_sRcR::synapse0x3051f80() {
   return (neuron0x303c970()*-0.347119);
}

double NNfunction_ss_sRcR::synapse0x3051fc0() {
   return (neuron0x303ced0()*0.975973);
}

double NNfunction_ss_sRcR::synapse0x3052640() {
   return (neuron0x303d0f0()*0.427445);
}

double NNfunction_ss_sRcR::synapse0x3052680() {
   return (neuron0x303d430()*-0.406051);
}

double NNfunction_ss_sRcR::synapse0x30526c0() {
   return (neuron0x303d770()*1.18957);
}

double NNfunction_ss_sRcR::synapse0x3052700() {
   return (neuron0x303dab0()*0.244344);
}

double NNfunction_ss_sRcR::synapse0x3052740() {
   return (neuron0x303ddf0()*-0.110665);
}

double NNfunction_ss_sRcR::synapse0x3052780() {
   return (neuron0x303e130()*-0.533585);
}

double NNfunction_ss_sRcR::synapse0x3052b00() {
   return (neuron0x3039570()*-0.386902);
}

double NNfunction_ss_sRcR::synapse0x3052b40() {
   return (neuron0x30398b0()*-0.475437);
}

double NNfunction_ss_sRcR::synapse0x3052b80() {
   return (neuron0x3039bf0()*0.120858);
}

double NNfunction_ss_sRcR::synapse0x3052bc0() {
   return (neuron0x3039f30()*0.628271);
}

double NNfunction_ss_sRcR::synapse0x3052c00() {
   return (neuron0x303a270()*0.637039);
}

double NNfunction_ss_sRcR::synapse0x3052c40() {
   return (neuron0x303a5b0()*-0.188058);
}

double NNfunction_ss_sRcR::synapse0x3052c80() {
   return (neuron0x303a8f0()*0.0049372);
}

double NNfunction_ss_sRcR::synapse0x3052cc0() {
   return (neuron0x303ac30()*0.190069);
}

double NNfunction_ss_sRcR::synapse0x3052d00() {
   return (neuron0x303af70()*0.0761581);
}

double NNfunction_ss_sRcR::synapse0x3052d40() {
   return (neuron0x303b2b0()*0.334237);
}

double NNfunction_ss_sRcR::synapse0x3052d80() {
   return (neuron0x303b5f0()*-0.687604);
}

double NNfunction_ss_sRcR::synapse0x3052dc0() {
   return (neuron0x303b930()*0.0357419);
}

double NNfunction_ss_sRcR::synapse0x3052e00() {
   return (neuron0x303bc70()*0.0803544);
}

double NNfunction_ss_sRcR::synapse0x3052e40() {
   return (neuron0x303bfb0()*-0.284216);
}

double NNfunction_ss_sRcR::synapse0x3052e80() {
   return (neuron0x303c2f0()*-0.502079);
}

double NNfunction_ss_sRcR::synapse0x3052ec0() {
   return (neuron0x303c630()*0.638546);
}

double NNfunction_ss_sRcR::synapse0x3052950() {
   return (neuron0x303c970()*0.688961);
}

double NNfunction_ss_sRcR::synapse0x3052990() {
   return (neuron0x303ced0()*0.143365);
}

double NNfunction_ss_sRcR::synapse0x3053010() {
   return (neuron0x303d0f0()*-0.673627);
}

double NNfunction_ss_sRcR::synapse0x3053050() {
   return (neuron0x303d430()*0.569494);
}

double NNfunction_ss_sRcR::synapse0x3053090() {
   return (neuron0x303d770()*-0.361608);
}

double NNfunction_ss_sRcR::synapse0x30530d0() {
   return (neuron0x303dab0()*-0.379441);
}

double NNfunction_ss_sRcR::synapse0x3053110() {
   return (neuron0x303ddf0()*0.41352);
}

double NNfunction_ss_sRcR::synapse0x3053150() {
   return (neuron0x303e130()*-0.288088);
}

double NNfunction_ss_sRcR::synapse0x30534d0() {
   return (neuron0x3039570()*-0.0523731);
}

double NNfunction_ss_sRcR::synapse0x3053510() {
   return (neuron0x30398b0()*-0.787381);
}

double NNfunction_ss_sRcR::synapse0x3053550() {
   return (neuron0x3039bf0()*0.219424);
}

double NNfunction_ss_sRcR::synapse0x3053590() {
   return (neuron0x3039f30()*-0.657847);
}

double NNfunction_ss_sRcR::synapse0x30535d0() {
   return (neuron0x303a270()*0.34219);
}

double NNfunction_ss_sRcR::synapse0x3053610() {
   return (neuron0x303a5b0()*-0.951683);
}

double NNfunction_ss_sRcR::synapse0x3053650() {
   return (neuron0x303a8f0()*0.690188);
}

double NNfunction_ss_sRcR::synapse0x3053690() {
   return (neuron0x303ac30()*0.244217);
}

double NNfunction_ss_sRcR::synapse0x30536d0() {
   return (neuron0x303af70()*-0.345179);
}

double NNfunction_ss_sRcR::synapse0x3053710() {
   return (neuron0x303b2b0()*-0.393723);
}

double NNfunction_ss_sRcR::synapse0x3053750() {
   return (neuron0x303b5f0()*0.635762);
}

double NNfunction_ss_sRcR::synapse0x3053790() {
   return (neuron0x303b930()*-0.400194);
}

double NNfunction_ss_sRcR::synapse0x30537d0() {
   return (neuron0x303bc70()*-0.133067);
}

double NNfunction_ss_sRcR::synapse0x3053810() {
   return (neuron0x303bfb0()*-0.0146517);
}

double NNfunction_ss_sRcR::synapse0x3053850() {
   return (neuron0x303c2f0()*0.389318);
}

double NNfunction_ss_sRcR::synapse0x3053890() {
   return (neuron0x303c630()*0.238386);
}

double NNfunction_ss_sRcR::synapse0x3053320() {
   return (neuron0x303c970()*-0.979536);
}

double NNfunction_ss_sRcR::synapse0x3053360() {
   return (neuron0x303ced0()*-0.211644);
}

double NNfunction_ss_sRcR::synapse0x30539e0() {
   return (neuron0x303d0f0()*0.00348311);
}

double NNfunction_ss_sRcR::synapse0x3053a20() {
   return (neuron0x303d430()*0.261203);
}

double NNfunction_ss_sRcR::synapse0x3053a60() {
   return (neuron0x303d770()*0.0046713);
}

double NNfunction_ss_sRcR::synapse0x3053aa0() {
   return (neuron0x303dab0()*-0.234557);
}

double NNfunction_ss_sRcR::synapse0x3053ae0() {
   return (neuron0x303ddf0()*0.322231);
}

double NNfunction_ss_sRcR::synapse0x3053b20() {
   return (neuron0x303e130()*0.215247);
}

double NNfunction_ss_sRcR::synapse0x3053ea0() {
   return (neuron0x3039570()*0.184766);
}

double NNfunction_ss_sRcR::synapse0x3048470() {
   return (neuron0x30398b0()*-0.0025338);
}

double NNfunction_ss_sRcR::synapse0x30484b0() {
   return (neuron0x3039bf0()*-0.626694);
}

double NNfunction_ss_sRcR::synapse0x30484f0() {
   return (neuron0x3039f30()*-0.0162039);
}

double NNfunction_ss_sRcR::synapse0x3048740() {
   return (neuron0x303a270()*-0.359809);
}

double NNfunction_ss_sRcR::synapse0x3048780() {
   return (neuron0x303a5b0()*0.366069);
}

double NNfunction_ss_sRcR::synapse0x30487c0() {
   return (neuron0x303a8f0()*0.840543);
}

double NNfunction_ss_sRcR::synapse0x3048a10() {
   return (neuron0x303ac30()*-0.174715);
}

double NNfunction_ss_sRcR::synapse0x3048a50() {
   return (neuron0x303af70()*0.33881);
}

double NNfunction_ss_sRcR::synapse0x3048ca0() {
   return (neuron0x303b2b0()*0.306862);
}

double NNfunction_ss_sRcR::synapse0x3048ce0() {
   return (neuron0x303b5f0()*0.276479);
}

double NNfunction_ss_sRcR::synapse0x3048d20() {
   return (neuron0x303b930()*-0.558633);
}

double NNfunction_ss_sRcR::synapse0x3048f70() {
   return (neuron0x303bc70()*-0.45844);
}

double NNfunction_ss_sRcR::synapse0x3048fb0() {
   return (neuron0x303bfb0()*0.114243);
}

double NNfunction_ss_sRcR::synapse0x3049200() {
   return (neuron0x303c2f0()*0.253532);
}

double NNfunction_ss_sRcR::synapse0x3049240() {
   return (neuron0x303c630()*0.324456);
}

double NNfunction_ss_sRcR::synapse0x3053cf0() {
   return (neuron0x303c970()*-0.606912);
}

double NNfunction_ss_sRcR::synapse0x3053d30() {
   return (neuron0x303ced0()*0.495696);
}

double NNfunction_ss_sRcR::synapse0x3049390() {
   return (neuron0x303d0f0()*0.131116);
}

double NNfunction_ss_sRcR::synapse0x30498a0() {
   return (neuron0x303d430()*-0.572805);
}

double NNfunction_ss_sRcR::synapse0x30498e0() {
   return (neuron0x303d770()*-0.495365);
}

double NNfunction_ss_sRcR::synapse0x3049920() {
   return (neuron0x303dab0()*-0.379175);
}

double NNfunction_ss_sRcR::synapse0x3049b70() {
   return (neuron0x303ddf0()*0.162069);
}

double NNfunction_ss_sRcR::synapse0x3049bb0() {
   return (neuron0x303e130()*0.537743);
}

double NNfunction_ss_sRcR::synapse0x3049460() {
   return (neuron0x3039570()*0.0557845);
}

double NNfunction_ss_sRcR::synapse0x30494a0() {
   return (neuron0x30398b0()*0.242716);
}

double NNfunction_ss_sRcR::synapse0x30494e0() {
   return (neuron0x3039bf0()*-0.175863);
}

double NNfunction_ss_sRcR::synapse0x3049520() {
   return (neuron0x3039f30()*-0.616758);
}

double NNfunction_ss_sRcR::synapse0x3049ea0() {
   return (neuron0x303a270()*0.860907);
}

double NNfunction_ss_sRcR::synapse0x30561f0() {
   return (neuron0x303a5b0()*-0.355713);
}

double NNfunction_ss_sRcR::synapse0x3056230() {
   return (neuron0x303a8f0()*0.343075);
}

double NNfunction_ss_sRcR::synapse0x3056270() {
   return (neuron0x303ac30()*-0.147428);
}

double NNfunction_ss_sRcR::synapse0x30562b0() {
   return (neuron0x303af70()*0.211545);
}

double NNfunction_ss_sRcR::synapse0x30562f0() {
   return (neuron0x303b2b0()*0.0640886);
}

double NNfunction_ss_sRcR::synapse0x3056330() {
   return (neuron0x303b5f0()*-0.0688042);
}

double NNfunction_ss_sRcR::synapse0x3056370() {
   return (neuron0x303b930()*-0.106279);
}

double NNfunction_ss_sRcR::synapse0x30563b0() {
   return (neuron0x303bc70()*-0.354359);
}

double NNfunction_ss_sRcR::synapse0x30563f0() {
   return (neuron0x303bfb0()*-0.298298);
}

double NNfunction_ss_sRcR::synapse0x3056430() {
   return (neuron0x303c2f0()*-0.00211917);
}

double NNfunction_ss_sRcR::synapse0x3056470() {
   return (neuron0x303c630()*0.689832);
}

double NNfunction_ss_sRcR::synapse0x3049d80() {
   return (neuron0x303c970()*-0.0922449);
}

double NNfunction_ss_sRcR::synapse0x3049dc0() {
   return (neuron0x303ced0()*0.249607);
}

double NNfunction_ss_sRcR::synapse0x30565c0() {
   return (neuron0x303d0f0()*-2.5698);
}

double NNfunction_ss_sRcR::synapse0x3056600() {
   return (neuron0x303d430()*-0.271176);
}

double NNfunction_ss_sRcR::synapse0x3056640() {
   return (neuron0x303d770()*-0.176093);
}

double NNfunction_ss_sRcR::synapse0x3056680() {
   return (neuron0x303dab0()*-0.0277136);
}

double NNfunction_ss_sRcR::synapse0x30566c0() {
   return (neuron0x303ddf0()*-0.0352005);
}

double NNfunction_ss_sRcR::synapse0x3056700() {
   return (neuron0x303e130()*-0.0892939);
}

double NNfunction_ss_sRcR::synapse0x3056a80() {
   return (neuron0x3039570()*-0.043324);
}

double NNfunction_ss_sRcR::synapse0x3056ac0() {
   return (neuron0x30398b0()*-0.50142);
}

double NNfunction_ss_sRcR::synapse0x3056b00() {
   return (neuron0x3039bf0()*-0.232095);
}

double NNfunction_ss_sRcR::synapse0x3056b40() {
   return (neuron0x3039f30()*-1.42888);
}

double NNfunction_ss_sRcR::synapse0x3056b80() {
   return (neuron0x303a270()*-0.00738234);
}

double NNfunction_ss_sRcR::synapse0x3056bc0() {
   return (neuron0x303a5b0()*-0.0371241);
}

double NNfunction_ss_sRcR::synapse0x3056c00() {
   return (neuron0x303a8f0()*-0.209502);
}

double NNfunction_ss_sRcR::synapse0x3056c40() {
   return (neuron0x303ac30()*0.0765319);
}

double NNfunction_ss_sRcR::synapse0x3056c80() {
   return (neuron0x303af70()*0.33192);
}

double NNfunction_ss_sRcR::synapse0x3056cc0() {
   return (neuron0x303b2b0()*-0.330668);
}

double NNfunction_ss_sRcR::synapse0x3056d00() {
   return (neuron0x303b5f0()*0.0959309);
}

double NNfunction_ss_sRcR::synapse0x3056d40() {
   return (neuron0x303b930()*-0.0231636);
}

double NNfunction_ss_sRcR::synapse0x3056d80() {
   return (neuron0x303bc70()*0.180639);
}

double NNfunction_ss_sRcR::synapse0x3056dc0() {
   return (neuron0x303bfb0()*0.13331);
}

double NNfunction_ss_sRcR::synapse0x3056e00() {
   return (neuron0x303c2f0()*-0.020905);
}

double NNfunction_ss_sRcR::synapse0x3056e40() {
   return (neuron0x303c630()*0.0713824);
}

double NNfunction_ss_sRcR::synapse0x30568d0() {
   return (neuron0x303c970()*0.155109);
}

double NNfunction_ss_sRcR::synapse0x3056910() {
   return (neuron0x303ced0()*0.124741);
}

double NNfunction_ss_sRcR::synapse0x3056f90() {
   return (neuron0x303d0f0()*-0.104995);
}

double NNfunction_ss_sRcR::synapse0x3056fd0() {
   return (neuron0x303d430()*0.201663);
}

double NNfunction_ss_sRcR::synapse0x3057010() {
   return (neuron0x303d770()*0.0800936);
}

double NNfunction_ss_sRcR::synapse0x3057050() {
   return (neuron0x303dab0()*0.166143);
}

double NNfunction_ss_sRcR::synapse0x3057090() {
   return (neuron0x303ddf0()*0.116594);
}

double NNfunction_ss_sRcR::synapse0x30570d0() {
   return (neuron0x303e130()*0.339583);
}

double NNfunction_ss_sRcR::synapse0x3057450() {
   return (neuron0x3039570()*0.513099);
}

double NNfunction_ss_sRcR::synapse0x3057490() {
   return (neuron0x30398b0()*0.183508);
}

double NNfunction_ss_sRcR::synapse0x30574d0() {
   return (neuron0x3039bf0()*0.234064);
}

double NNfunction_ss_sRcR::synapse0x3057510() {
   return (neuron0x3039f30()*-0.167124);
}

double NNfunction_ss_sRcR::synapse0x3057550() {
   return (neuron0x303a270()*-0.413812);
}

double NNfunction_ss_sRcR::synapse0x3057590() {
   return (neuron0x303a5b0()*0.338746);
}

double NNfunction_ss_sRcR::synapse0x30575d0() {
   return (neuron0x303a8f0()*1.06563);
}

double NNfunction_ss_sRcR::synapse0x3057610() {
   return (neuron0x303ac30()*0.512443);
}

double NNfunction_ss_sRcR::synapse0x3057650() {
   return (neuron0x303af70()*0.0715597);
}

double NNfunction_ss_sRcR::synapse0x3057690() {
   return (neuron0x303b2b0()*0.122964);
}

double NNfunction_ss_sRcR::synapse0x30576d0() {
   return (neuron0x303b5f0()*0.311661);
}

double NNfunction_ss_sRcR::synapse0x3057710() {
   return (neuron0x303b930()*-0.535064);
}

double NNfunction_ss_sRcR::synapse0x3057750() {
   return (neuron0x303bc70()*-0.136718);
}

double NNfunction_ss_sRcR::synapse0x3057790() {
   return (neuron0x303bfb0()*0.158235);
}

double NNfunction_ss_sRcR::synapse0x30577d0() {
   return (neuron0x303c2f0()*0.13997);
}

double NNfunction_ss_sRcR::synapse0x3057810() {
   return (neuron0x303c630()*1.06422);
}

double NNfunction_ss_sRcR::synapse0x30572a0() {
   return (neuron0x303c970()*0.179423);
}

double NNfunction_ss_sRcR::synapse0x30572e0() {
   return (neuron0x303ced0()*-0.132743);
}

double NNfunction_ss_sRcR::synapse0x3057960() {
   return (neuron0x303d0f0()*1.08697);
}

double NNfunction_ss_sRcR::synapse0x30579a0() {
   return (neuron0x303d430()*-0.38943);
}

double NNfunction_ss_sRcR::synapse0x30579e0() {
   return (neuron0x303d770()*-0.392181);
}

double NNfunction_ss_sRcR::synapse0x3057a20() {
   return (neuron0x303dab0()*-0.0265047);
}

double NNfunction_ss_sRcR::synapse0x3057a60() {
   return (neuron0x303ddf0()*0.375492);
}

double NNfunction_ss_sRcR::synapse0x3057aa0() {
   return (neuron0x303e130()*0.150427);
}

double NNfunction_ss_sRcR::synapse0x3057e20() {
   return (neuron0x3039570()*0.598806);
}

double NNfunction_ss_sRcR::synapse0x3057e60() {
   return (neuron0x30398b0()*0.314058);
}

double NNfunction_ss_sRcR::synapse0x3057ea0() {
   return (neuron0x3039bf0()*0.252675);
}

double NNfunction_ss_sRcR::synapse0x3057ee0() {
   return (neuron0x3039f30()*0.2064);
}

double NNfunction_ss_sRcR::synapse0x3057f20() {
   return (neuron0x303a270()*-0.300092);
}

double NNfunction_ss_sRcR::synapse0x3057f60() {
   return (neuron0x303a5b0()*-0.162767);
}

double NNfunction_ss_sRcR::synapse0x3057fa0() {
   return (neuron0x303a8f0()*0.643166);
}

double NNfunction_ss_sRcR::synapse0x3057fe0() {
   return (neuron0x303ac30()*-0.192098);
}

double NNfunction_ss_sRcR::synapse0x3058020() {
   return (neuron0x303af70()*-0.611769);
}

double NNfunction_ss_sRcR::synapse0x3058060() {
   return (neuron0x303b2b0()*-0.481489);
}

double NNfunction_ss_sRcR::synapse0x30580a0() {
   return (neuron0x303b5f0()*0.815463);
}

double NNfunction_ss_sRcR::synapse0x30580e0() {
   return (neuron0x303b930()*-0.192406);
}

double NNfunction_ss_sRcR::synapse0x3058120() {
   return (neuron0x303bc70()*-0.0801258);
}

double NNfunction_ss_sRcR::synapse0x3058160() {
   return (neuron0x303bfb0()*0.363285);
}

double NNfunction_ss_sRcR::synapse0x30581a0() {
   return (neuron0x303c2f0()*0.586344);
}

double NNfunction_ss_sRcR::synapse0x30581e0() {
   return (neuron0x303c630()*0.284506);
}

double NNfunction_ss_sRcR::synapse0x3057c70() {
   return (neuron0x303c970()*-0.0670201);
}

double NNfunction_ss_sRcR::synapse0x3057cb0() {
   return (neuron0x303ced0()*0.0193695);
}

double NNfunction_ss_sRcR::synapse0x3058330() {
   return (neuron0x303d0f0()*-1.4231);
}

double NNfunction_ss_sRcR::synapse0x3058370() {
   return (neuron0x303d430()*0.734205);
}

double NNfunction_ss_sRcR::synapse0x30583b0() {
   return (neuron0x303d770()*-0.324416);
}

double NNfunction_ss_sRcR::synapse0x30583f0() {
   return (neuron0x303dab0()*-0.104985);
}

double NNfunction_ss_sRcR::synapse0x3058430() {
   return (neuron0x303ddf0()*-0.0257041);
}

double NNfunction_ss_sRcR::synapse0x3058470() {
   return (neuron0x303e130()*0.292059);
}

double NNfunction_ss_sRcR::synapse0x30587f0() {
   return (neuron0x3039570()*0.00976686);
}

double NNfunction_ss_sRcR::synapse0x3058830() {
   return (neuron0x30398b0()*-0.032624);
}

double NNfunction_ss_sRcR::synapse0x3058870() {
   return (neuron0x3039bf0()*-0.00875777);
}

double NNfunction_ss_sRcR::synapse0x30588b0() {
   return (neuron0x3039f30()*0.131618);
}

double NNfunction_ss_sRcR::synapse0x30588f0() {
   return (neuron0x303a270()*-0.0267714);
}

double NNfunction_ss_sRcR::synapse0x3058930() {
   return (neuron0x303a5b0()*0.0125959);
}

double NNfunction_ss_sRcR::synapse0x3058970() {
   return (neuron0x303a8f0()*0.0108459);
}

double NNfunction_ss_sRcR::synapse0x30589b0() {
   return (neuron0x303ac30()*0.0180882);
}

double NNfunction_ss_sRcR::synapse0x30589f0() {
   return (neuron0x303af70()*0.0286068);
}

double NNfunction_ss_sRcR::synapse0x3058a30() {
   return (neuron0x303b2b0()*-0.0106525);
}

double NNfunction_ss_sRcR::synapse0x3058a70() {
   return (neuron0x303b5f0()*-0.000399762);
}

double NNfunction_ss_sRcR::synapse0x3058ab0() {
   return (neuron0x303b930()*0.017166);
}

double NNfunction_ss_sRcR::synapse0x3058af0() {
   return (neuron0x303bc70()*0.0230608);
}

double NNfunction_ss_sRcR::synapse0x3058b30() {
   return (neuron0x303bfb0()*0.0128274);
}

double NNfunction_ss_sRcR::synapse0x3058b70() {
   return (neuron0x303c2f0()*0.00117979);
}

double NNfunction_ss_sRcR::synapse0x3058bb0() {
   return (neuron0x303c630()*-0.180702);
}

double NNfunction_ss_sRcR::synapse0x3058640() {
   return (neuron0x303c970()*0.0070934);
}

double NNfunction_ss_sRcR::synapse0x3058680() {
   return (neuron0x303ced0()*-0.00646958);
}

double NNfunction_ss_sRcR::synapse0x3058d00() {
   return (neuron0x303d0f0()*1.46694);
}

double NNfunction_ss_sRcR::synapse0x3058d40() {
   return (neuron0x303d430()*0.0215937);
}

double NNfunction_ss_sRcR::synapse0x3058d80() {
   return (neuron0x303d770()*0.0167397);
}

double NNfunction_ss_sRcR::synapse0x3058dc0() {
   return (neuron0x303dab0()*0.0191971);
}

double NNfunction_ss_sRcR::synapse0x3058e00() {
   return (neuron0x303ddf0()*0.0123592);
}

double NNfunction_ss_sRcR::synapse0x3058e40() {
   return (neuron0x303e130()*0.00545418);
}

double NNfunction_ss_sRcR::synapse0x30591c0() {
   return (neuron0x3039570()*-0.644594);
}

double NNfunction_ss_sRcR::synapse0x3059200() {
   return (neuron0x30398b0()*-0.270477);
}

double NNfunction_ss_sRcR::synapse0x3059240() {
   return (neuron0x3039bf0()*0.521167);
}

double NNfunction_ss_sRcR::synapse0x3059280() {
   return (neuron0x3039f30()*-0.28438);
}

double NNfunction_ss_sRcR::synapse0x30592c0() {
   return (neuron0x303a270()*-0.746652);
}

double NNfunction_ss_sRcR::synapse0x3059300() {
   return (neuron0x303a5b0()*0.248623);
}

double NNfunction_ss_sRcR::synapse0x3059340() {
   return (neuron0x303a8f0()*-0.718726);
}

double NNfunction_ss_sRcR::synapse0x3059380() {
   return (neuron0x303ac30()*1.00525);
}

double NNfunction_ss_sRcR::synapse0x30593c0() {
   return (neuron0x303af70()*-0.0360636);
}

double NNfunction_ss_sRcR::synapse0x3059400() {
   return (neuron0x303b2b0()*0.161882);
}

double NNfunction_ss_sRcR::synapse0x3059440() {
   return (neuron0x303b5f0()*0.218168);
}

double NNfunction_ss_sRcR::synapse0x3059480() {
   return (neuron0x303b930()*-0.310486);
}

double NNfunction_ss_sRcR::synapse0x30594c0() {
   return (neuron0x303bc70()*0.109295);
}

double NNfunction_ss_sRcR::synapse0x3059500() {
   return (neuron0x303bfb0()*0.115957);
}

double NNfunction_ss_sRcR::synapse0x3059540() {
   return (neuron0x303c2f0()*-0.177404);
}

double NNfunction_ss_sRcR::synapse0x3059580() {
   return (neuron0x303c630()*-0.671178);
}

double NNfunction_ss_sRcR::synapse0x3059010() {
   return (neuron0x303c970()*-0.398483);
}

double NNfunction_ss_sRcR::synapse0x3059050() {
   return (neuron0x303ced0()*0.23815);
}

double NNfunction_ss_sRcR::synapse0x30596d0() {
   return (neuron0x303d0f0()*-0.65455);
}

double NNfunction_ss_sRcR::synapse0x3059710() {
   return (neuron0x303d430()*0.219738);
}

double NNfunction_ss_sRcR::synapse0x3059750() {
   return (neuron0x303d770()*-0.300934);
}

double NNfunction_ss_sRcR::synapse0x3059790() {
   return (neuron0x303dab0()*-0.47298);
}

double NNfunction_ss_sRcR::synapse0x30597d0() {
   return (neuron0x303ddf0()*-0.379416);
}

double NNfunction_ss_sRcR::synapse0x3059810() {
   return (neuron0x303e130()*-0.575646);
}

double NNfunction_ss_sRcR::synapse0x3059b90() {
   return (neuron0x3039570()*0.0151226);
}

double NNfunction_ss_sRcR::synapse0x3059bd0() {
   return (neuron0x30398b0()*-0.0189693);
}

double NNfunction_ss_sRcR::synapse0x3059c10() {
   return (neuron0x3039bf0()*-0.00795123);
}

double NNfunction_ss_sRcR::synapse0x3059c50() {
   return (neuron0x3039f30()*3.33282);
}

double NNfunction_ss_sRcR::synapse0x3059c90() {
   return (neuron0x303a270()*-0.00447129);
}

double NNfunction_ss_sRcR::synapse0x3059cd0() {
   return (neuron0x303a5b0()*0.0133811);
}

double NNfunction_ss_sRcR::synapse0x3059d10() {
   return (neuron0x303a8f0()*0.0111432);
}

double NNfunction_ss_sRcR::synapse0x3059d50() {
   return (neuron0x303ac30()*0.00557288);
}

double NNfunction_ss_sRcR::synapse0x3059d90() {
   return (neuron0x303af70()*0.00191237);
}

double NNfunction_ss_sRcR::synapse0x3059dd0() {
   return (neuron0x303b2b0()*-0.00532079);
}

double NNfunction_ss_sRcR::synapse0x3059e10() {
   return (neuron0x303b5f0()*0.0155236);
}

double NNfunction_ss_sRcR::synapse0x3059e50() {
   return (neuron0x303b930()*0.00614242);
}

double NNfunction_ss_sRcR::synapse0x3059e90() {
   return (neuron0x303bc70()*0.0208564);
}

double NNfunction_ss_sRcR::synapse0x3059ed0() {
   return (neuron0x303bfb0()*0.0133044);
}

double NNfunction_ss_sRcR::synapse0x3059f10() {
   return (neuron0x303c2f0()*0.000931206);
}

double NNfunction_ss_sRcR::synapse0x3059f50() {
   return (neuron0x303c630()*0.201042);
}

double NNfunction_ss_sRcR::synapse0x30599e0() {
   return (neuron0x303c970()*0.0190548);
}

double NNfunction_ss_sRcR::synapse0x3059a20() {
   return (neuron0x303ced0()*-0.0163856);
}

double NNfunction_ss_sRcR::synapse0x305a0a0() {
   return (neuron0x303d0f0()*0.232361);
}

double NNfunction_ss_sRcR::synapse0x305a0e0() {
   return (neuron0x303d430()*-2.11254e-05);
}

double NNfunction_ss_sRcR::synapse0x305a120() {
   return (neuron0x303d770()*0.0116997);
}

double NNfunction_ss_sRcR::synapse0x305a160() {
   return (neuron0x303dab0()*0.00421512);
}

double NNfunction_ss_sRcR::synapse0x305a1a0() {
   return (neuron0x303ddf0()*-0.000801811);
}

double NNfunction_ss_sRcR::synapse0x305a1e0() {
   return (neuron0x303e130()*0.0121417);
}

double NNfunction_ss_sRcR::synapse0x305a560() {
   return (neuron0x3039570()*0.0119791);
}

double NNfunction_ss_sRcR::synapse0x305a5a0() {
   return (neuron0x30398b0()*0.01164);
}

double NNfunction_ss_sRcR::synapse0x305a5e0() {
   return (neuron0x3039bf0()*-0.0047899);
}

double NNfunction_ss_sRcR::synapse0x305a620() {
   return (neuron0x3039f30()*9.7296);
}

double NNfunction_ss_sRcR::synapse0x305a660() {
   return (neuron0x303a270()*-0.000247249);
}

double NNfunction_ss_sRcR::synapse0x305a6a0() {
   return (neuron0x303a5b0()*0.00441732);
}

double NNfunction_ss_sRcR::synapse0x305a6e0() {
   return (neuron0x303a8f0()*0.0244807);
}

double NNfunction_ss_sRcR::synapse0x305a720() {
   return (neuron0x303ac30()*-0.0283222);
}

double NNfunction_ss_sRcR::synapse0x305a760() {
   return (neuron0x303af70()*0.0050118);
}

double NNfunction_ss_sRcR::synapse0x305a7a0() {
   return (neuron0x303b2b0()*0.0340943);
}

double NNfunction_ss_sRcR::synapse0x305a7e0() {
   return (neuron0x303b5f0()*0.0284169);
}

double NNfunction_ss_sRcR::synapse0x305a820() {
   return (neuron0x303b930()*-0.055667);
}

double NNfunction_ss_sRcR::synapse0x305a860() {
   return (neuron0x303bc70()*-0.00264671);
}

double NNfunction_ss_sRcR::synapse0x305a8a0() {
   return (neuron0x303bfb0()*0.00439463);
}

double NNfunction_ss_sRcR::synapse0x305a8e0() {
   return (neuron0x303c2f0()*-0.0680809);
}

double NNfunction_ss_sRcR::synapse0x305a920() {
   return (neuron0x303c630()*-0.225799);
}

double NNfunction_ss_sRcR::synapse0x305a3b0() {
   return (neuron0x303c970()*-0.0576686);
}

double NNfunction_ss_sRcR::synapse0x305a3f0() {
   return (neuron0x303ced0()*-0.0338576);
}

double NNfunction_ss_sRcR::synapse0x305aa70() {
   return (neuron0x303d0f0()*0.0983409);
}

double NNfunction_ss_sRcR::synapse0x305aab0() {
   return (neuron0x303d430()*-0.00789167);
}

double NNfunction_ss_sRcR::synapse0x305aaf0() {
   return (neuron0x303d770()*0.0227269);
}

double NNfunction_ss_sRcR::synapse0x305ab30() {
   return (neuron0x303dab0()*-0.00783282);
}

double NNfunction_ss_sRcR::synapse0x305ab70() {
   return (neuron0x303ddf0()*0.00900734);
}

double NNfunction_ss_sRcR::synapse0x305abb0() {
   return (neuron0x303e130()*0.0105954);
}

double NNfunction_ss_sRcR::synapse0x3043660() {
   return (neuron0x3039570()*0.539937);
}

double NNfunction_ss_sRcR::synapse0x30436a0() {
   return (neuron0x30398b0()*-0.251367);
}

double NNfunction_ss_sRcR::synapse0x30436e0() {
   return (neuron0x3039bf0()*0.070704);
}

double NNfunction_ss_sRcR::synapse0x3043720() {
   return (neuron0x3039f30()*-0.902916);
}

double NNfunction_ss_sRcR::synapse0x3043760() {
   return (neuron0x303a270()*0.312916);
}

double NNfunction_ss_sRcR::synapse0x30437a0() {
   return (neuron0x303a5b0()*0.0751048);
}

double NNfunction_ss_sRcR::synapse0x30437e0() {
   return (neuron0x303a8f0()*0.421731);
}

double NNfunction_ss_sRcR::synapse0x3043820() {
   return (neuron0x303ac30()*-0.388945);
}

double NNfunction_ss_sRcR::synapse0x305b340() {
   return (neuron0x303af70()*-0.0243148);
}

double NNfunction_ss_sRcR::synapse0x305b380() {
   return (neuron0x303b2b0()*-0.475697);
}

double NNfunction_ss_sRcR::synapse0x305b3c0() {
   return (neuron0x303b5f0()*0.241079);
}

double NNfunction_ss_sRcR::synapse0x305b400() {
   return (neuron0x303b930()*-0.0286496);
}

double NNfunction_ss_sRcR::synapse0x305b440() {
   return (neuron0x303bc70()*-0.00809135);
}

double NNfunction_ss_sRcR::synapse0x305b480() {
   return (neuron0x303bfb0()*-0.0600959);
}

double NNfunction_ss_sRcR::synapse0x305b4c0() {
   return (neuron0x303c2f0()*-0.256584);
}

double NNfunction_ss_sRcR::synapse0x305b500() {
   return (neuron0x303c630()*-0.414504);
}

double NNfunction_ss_sRcR::synapse0x305ad80() {
   return (neuron0x303c970()*-0.143172);
}

double NNfunction_ss_sRcR::synapse0x305adc0() {
   return (neuron0x303ced0()*0.0220809);
}

double NNfunction_ss_sRcR::synapse0x305b650() {
   return (neuron0x303d0f0()*-0.142575);
}

double NNfunction_ss_sRcR::synapse0x305b690() {
   return (neuron0x303d430()*-0.181751);
}

double NNfunction_ss_sRcR::synapse0x305b6d0() {
   return (neuron0x303d770()*0.0686515);
}

double NNfunction_ss_sRcR::synapse0x305b710() {
   return (neuron0x303dab0()*-0.0742408);
}

double NNfunction_ss_sRcR::synapse0x305b750() {
   return (neuron0x303ddf0()*0.338721);
}

double NNfunction_ss_sRcR::synapse0x305b790() {
   return (neuron0x303e130()*0.047947);
}

double NNfunction_ss_sRcR::synapse0x305bb10() {
   return (neuron0x3039570()*0.00229749);
}

double NNfunction_ss_sRcR::synapse0x305bb50() {
   return (neuron0x30398b0()*0.0217475);
}

double NNfunction_ss_sRcR::synapse0x305bb90() {
   return (neuron0x3039bf0()*0.0115704);
}

double NNfunction_ss_sRcR::synapse0x305bbd0() {
   return (neuron0x3039f30()*-0.166751);
}

double NNfunction_ss_sRcR::synapse0x305bc10() {
   return (neuron0x303a270()*-0.0123956);
}

double NNfunction_ss_sRcR::synapse0x305bc50() {
   return (neuron0x303a5b0()*-0.00338799);
}

double NNfunction_ss_sRcR::synapse0x305bc90() {
   return (neuron0x303a8f0()*-0.00789331);
}

double NNfunction_ss_sRcR::synapse0x305bcd0() {
   return (neuron0x303ac30()*-0.00485477);
}

double NNfunction_ss_sRcR::synapse0x305bd10() {
   return (neuron0x303af70()*-0.0139179);
}

double NNfunction_ss_sRcR::synapse0x305bd50() {
   return (neuron0x303b2b0()*-0.0132701);
}

double NNfunction_ss_sRcR::synapse0x305bd90() {
   return (neuron0x303b5f0()*0.0132333);
}

double NNfunction_ss_sRcR::synapse0x305bdd0() {
   return (neuron0x303b930()*0.0101878);
}

double NNfunction_ss_sRcR::synapse0x305be10() {
   return (neuron0x303bc70()*0.00410835);
}

double NNfunction_ss_sRcR::synapse0x305be50() {
   return (neuron0x303bfb0()*0.00778393);
}

double NNfunction_ss_sRcR::synapse0x305be90() {
   return (neuron0x303c2f0()*0.0144461);
}

double NNfunction_ss_sRcR::synapse0x305bed0() {
   return (neuron0x303c630()*0.702778);
}

double NNfunction_ss_sRcR::synapse0x305b960() {
   return (neuron0x303c970()*0.000389976);
}

double NNfunction_ss_sRcR::synapse0x305b9a0() {
   return (neuron0x303ced0()*0.0274642);
}

double NNfunction_ss_sRcR::synapse0x305c020() {
   return (neuron0x303d0f0()*0.859739);
}

double NNfunction_ss_sRcR::synapse0x305c060() {
   return (neuron0x303d430()*-0.00418027);
}

double NNfunction_ss_sRcR::synapse0x305c0a0() {
   return (neuron0x303d770()*-0.00135253);
}

double NNfunction_ss_sRcR::synapse0x305c0e0() {
   return (neuron0x303dab0()*-0.00129055);
}

double NNfunction_ss_sRcR::synapse0x305c120() {
   return (neuron0x303ddf0()*-0.00190316);
}

double NNfunction_ss_sRcR::synapse0x305c160() {
   return (neuron0x303e130()*0.00257145);
}

double NNfunction_ss_sRcR::synapse0x305c4e0() {
   return (neuron0x3039570()*0.739202);
}

double NNfunction_ss_sRcR::synapse0x305c520() {
   return (neuron0x30398b0()*-0.00601841);
}

double NNfunction_ss_sRcR::synapse0x305c560() {
   return (neuron0x3039bf0()*-0.536731);
}

double NNfunction_ss_sRcR::synapse0x305c5a0() {
   return (neuron0x3039f30()*-0.0358772);
}

double NNfunction_ss_sRcR::synapse0x305c5e0() {
   return (neuron0x303a270()*-0.424301);
}

double NNfunction_ss_sRcR::synapse0x305c620() {
   return (neuron0x303a5b0()*0.717349);
}

double NNfunction_ss_sRcR::synapse0x305c660() {
   return (neuron0x303a8f0()*-0.142134);
}

double NNfunction_ss_sRcR::synapse0x305c6a0() {
   return (neuron0x303ac30()*0.904248);
}

double NNfunction_ss_sRcR::synapse0x305c6e0() {
   return (neuron0x303af70()*0.0129742);
}

double NNfunction_ss_sRcR::synapse0x305c720() {
   return (neuron0x303b2b0()*-0.213352);
}

double NNfunction_ss_sRcR::synapse0x305c760() {
   return (neuron0x303b5f0()*-0.0867927);
}

double NNfunction_ss_sRcR::synapse0x305c7a0() {
   return (neuron0x303b930()*0.299066);
}

double NNfunction_ss_sRcR::synapse0x305c7e0() {
   return (neuron0x303bc70()*-0.0318389);
}

double NNfunction_ss_sRcR::synapse0x305c820() {
   return (neuron0x303bfb0()*0.268168);
}

double NNfunction_ss_sRcR::synapse0x305c860() {
   return (neuron0x303c2f0()*0.420763);
}

double NNfunction_ss_sRcR::synapse0x305c8a0() {
   return (neuron0x303c630()*-1.47439);
}

double NNfunction_ss_sRcR::synapse0x305c330() {
   return (neuron0x303c970()*0.315464);
}

double NNfunction_ss_sRcR::synapse0x305c370() {
   return (neuron0x303ced0()*-0.142365);
}

double NNfunction_ss_sRcR::synapse0x304cea0() {
   return (neuron0x303d0f0()*-0.0677719);
}

double NNfunction_ss_sRcR::synapse0x304cee0() {
   return (neuron0x303d430()*0.0767554);
}

double NNfunction_ss_sRcR::synapse0x304cf20() {
   return (neuron0x303d770()*-0.368608);
}

double NNfunction_ss_sRcR::synapse0x304cf60() {
   return (neuron0x303dab0()*0.338209);
}

double NNfunction_ss_sRcR::synapse0x304cfa0() {
   return (neuron0x303ddf0()*-0.0419787);
}

double NNfunction_ss_sRcR::synapse0x304cfe0() {
   return (neuron0x303e130()*0.0306905);
}

double NNfunction_ss_sRcR::synapse0x304d360() {
   return (neuron0x3039570()*0.399327);
}

double NNfunction_ss_sRcR::synapse0x304d3a0() {
   return (neuron0x30398b0()*-0.349725);
}

double NNfunction_ss_sRcR::synapse0x304d3e0() {
   return (neuron0x3039bf0()*-0.0173856);
}

double NNfunction_ss_sRcR::synapse0x304d420() {
   return (neuron0x3039f30()*0.281928);
}

double NNfunction_ss_sRcR::synapse0x304d460() {
   return (neuron0x303a270()*0.201074);
}

double NNfunction_ss_sRcR::synapse0x304d4a0() {
   return (neuron0x303a5b0()*0.501652);
}

double NNfunction_ss_sRcR::synapse0x304d4e0() {
   return (neuron0x303a8f0()*-0.39372);
}

double NNfunction_ss_sRcR::synapse0x304d520() {
   return (neuron0x303ac30()*0.352542);
}

double NNfunction_ss_sRcR::synapse0x304d560() {
   return (neuron0x303af70()*-0.828574);
}

double NNfunction_ss_sRcR::synapse0x304d5a0() {
   return (neuron0x303b2b0()*-0.437402);
}

double NNfunction_ss_sRcR::synapse0x304d5e0() {
   return (neuron0x303b5f0()*-0.2719);
}

double NNfunction_ss_sRcR::synapse0x304d620() {
   return (neuron0x303b930()*0.572825);
}

double NNfunction_ss_sRcR::synapse0x304d660() {
   return (neuron0x303bc70()*-0.361256);
}

double NNfunction_ss_sRcR::synapse0x304d6a0() {
   return (neuron0x303bfb0()*-0.475295);
}

double NNfunction_ss_sRcR::synapse0x304d6e0() {
   return (neuron0x303c2f0()*0.300396);
}

double NNfunction_ss_sRcR::synapse0x304d720() {
   return (neuron0x303c630()*0.407886);
}

double NNfunction_ss_sRcR::synapse0x304d1b0() {
   return (neuron0x303c970()*0.327549);
}

double NNfunction_ss_sRcR::synapse0x304d1f0() {
   return (neuron0x303ced0()*0.435524);
}

double NNfunction_ss_sRcR::synapse0x304d870() {
   return (neuron0x303d0f0()*0.509863);
}

double NNfunction_ss_sRcR::synapse0x304d8b0() {
   return (neuron0x303d430()*-0.101997);
}

double NNfunction_ss_sRcR::synapse0x304d8f0() {
   return (neuron0x303d770()*-0.142497);
}

double NNfunction_ss_sRcR::synapse0x304d930() {
   return (neuron0x303dab0()*0.308558);
}

double NNfunction_ss_sRcR::synapse0x304d970() {
   return (neuron0x303ddf0()*-0.224953);
}

double NNfunction_ss_sRcR::synapse0x304d9b0() {
   return (neuron0x303e130()*0.67287);
}

double NNfunction_ss_sRcR::synapse0x304dd30() {
   return (neuron0x3039570()*-0.484568);
}

double NNfunction_ss_sRcR::synapse0x304dd70() {
   return (neuron0x30398b0()*0.317719);
}

double NNfunction_ss_sRcR::synapse0x304ddb0() {
   return (neuron0x3039bf0()*0.376389);
}

double NNfunction_ss_sRcR::synapse0x304ddf0() {
   return (neuron0x3039f30()*-0.834256);
}

double NNfunction_ss_sRcR::synapse0x304de30() {
   return (neuron0x303a270()*-1.24307);
}

double NNfunction_ss_sRcR::synapse0x304de70() {
   return (neuron0x303a5b0()*0.318669);
}

double NNfunction_ss_sRcR::synapse0x304deb0() {
   return (neuron0x303a8f0()*-0.755707);
}

double NNfunction_ss_sRcR::synapse0x304def0() {
   return (neuron0x303ac30()*0.975975);
}

double NNfunction_ss_sRcR::synapse0x304df30() {
   return (neuron0x303af70()*-0.0163861);
}

double NNfunction_ss_sRcR::synapse0x304df70() {
   return (neuron0x303b2b0()*0.0531575);
}

double NNfunction_ss_sRcR::synapse0x304dfb0() {
   return (neuron0x303b5f0()*-0.101853);
}

double NNfunction_ss_sRcR::synapse0x304dff0() {
   return (neuron0x303b930()*-0.45835);
}

double NNfunction_ss_sRcR::synapse0x304e030() {
   return (neuron0x303bc70()*-0.0295385);
}

double NNfunction_ss_sRcR::synapse0x304e070() {
   return (neuron0x303bfb0()*-0.0756861);
}

double NNfunction_ss_sRcR::synapse0x304e0b0() {
   return (neuron0x303c2f0()*-0.674897);
}

double NNfunction_ss_sRcR::synapse0x304e0f0() {
   return (neuron0x303c630()*-0.679214);
}

double NNfunction_ss_sRcR::synapse0x304db80() {
   return (neuron0x303c970()*0.0426714);
}

double NNfunction_ss_sRcR::synapse0x304dbc0() {
   return (neuron0x303ced0()*0.735903);
}

double NNfunction_ss_sRcR::synapse0x304e240() {
   return (neuron0x303d0f0()*-0.363808);
}

double NNfunction_ss_sRcR::synapse0x304e280() {
   return (neuron0x303d430()*-0.985703);
}

double NNfunction_ss_sRcR::synapse0x304e2c0() {
   return (neuron0x303d770()*-0.0556476);
}

double NNfunction_ss_sRcR::synapse0x304e300() {
   return (neuron0x303dab0()*0.113926);
}

double NNfunction_ss_sRcR::synapse0x304e340() {
   return (neuron0x303ddf0()*-0.00604767);
}

double NNfunction_ss_sRcR::synapse0x304e380() {
   return (neuron0x303e130()*-0.419574);
}

double NNfunction_ss_sRcR::synapse0x304e700() {
   return (neuron0x3039570()*0.200022);
}

double NNfunction_ss_sRcR::synapse0x304e740() {
   return (neuron0x30398b0()*0.249874);
}

double NNfunction_ss_sRcR::synapse0x304e780() {
   return (neuron0x3039bf0()*-0.0437747);
}

double NNfunction_ss_sRcR::synapse0x304e7c0() {
   return (neuron0x3039f30()*1.30191);
}

double NNfunction_ss_sRcR::synapse0x304e800() {
   return (neuron0x303a270()*-0.0651413);
}

double NNfunction_ss_sRcR::synapse0x304e840() {
   return (neuron0x303a5b0()*0.39708);
}

double NNfunction_ss_sRcR::synapse0x304e880() {
   return (neuron0x303a8f0()*1.0985);
}

double NNfunction_ss_sRcR::synapse0x304e8c0() {
   return (neuron0x303ac30()*-0.453879);
}

double NNfunction_ss_sRcR::synapse0x304e900() {
   return (neuron0x303af70()*0.176803);
}

double NNfunction_ss_sRcR::synapse0x304e940() {
   return (neuron0x303b2b0()*0.0871548);
}

double NNfunction_ss_sRcR::synapse0x304e980() {
   return (neuron0x303b5f0()*-0.101506);
}

double NNfunction_ss_sRcR::synapse0x304e9c0() {
   return (neuron0x303b930()*0.0481448);
}

double NNfunction_ss_sRcR::synapse0x304ea00() {
   return (neuron0x303bc70()*0.253673);
}

double NNfunction_ss_sRcR::synapse0x304ea40() {
   return (neuron0x303bfb0()*-0.0349299);
}

double NNfunction_ss_sRcR::synapse0x304ea80() {
   return (neuron0x303c2f0()*-0.406158);
}

double NNfunction_ss_sRcR::synapse0x304eac0() {
   return (neuron0x303c630()*-0.203288);
}

double NNfunction_ss_sRcR::synapse0x304e550() {
   return (neuron0x303c970()*-0.0943515);
}

double NNfunction_ss_sRcR::synapse0x304e590() {
   return (neuron0x303ced0()*0.278365);
}

double NNfunction_ss_sRcR::synapse0x304ec10() {
   return (neuron0x303d0f0()*-0.506292);
}

double NNfunction_ss_sRcR::synapse0x304ec50() {
   return (neuron0x303d430()*-0.610807);
}

double NNfunction_ss_sRcR::synapse0x304ec90() {
   return (neuron0x303d770()*0.215931);
}

double NNfunction_ss_sRcR::synapse0x304ecd0() {
   return (neuron0x303dab0()*-0.302025);
}

double NNfunction_ss_sRcR::synapse0x304ed10() {
   return (neuron0x303ddf0()*0.618113);
}

double NNfunction_ss_sRcR::synapse0x304ed50() {
   return (neuron0x303e130()*-0.439341);
}

double NNfunction_ss_sRcR::synapse0x3060c20() {
   return (neuron0x3039570()*-0.0224204);
}

double NNfunction_ss_sRcR::synapse0x3060c60() {
   return (neuron0x30398b0()*0.00996855);
}

double NNfunction_ss_sRcR::synapse0x3060ca0() {
   return (neuron0x3039bf0()*0.0118907);
}

double NNfunction_ss_sRcR::synapse0x3060ce0() {
   return (neuron0x3039f30()*-11.028);
}

double NNfunction_ss_sRcR::synapse0x3060d20() {
   return (neuron0x303a270()*0.0311171);
}

double NNfunction_ss_sRcR::synapse0x3060d60() {
   return (neuron0x303a5b0()*-0.0106228);
}

double NNfunction_ss_sRcR::synapse0x3060da0() {
   return (neuron0x303a8f0()*-0.0295881);
}

double NNfunction_ss_sRcR::synapse0x3060de0() {
   return (neuron0x303ac30()*-0.00352461);
}

double NNfunction_ss_sRcR::synapse0x3060e20() {
   return (neuron0x303af70()*0.0335126);
}

double NNfunction_ss_sRcR::synapse0x3060e60() {
   return (neuron0x303b2b0()*0.0115483);
}

double NNfunction_ss_sRcR::synapse0x3060ea0() {
   return (neuron0x303b5f0()*0.0125527);
}

double NNfunction_ss_sRcR::synapse0x3060ee0() {
   return (neuron0x303b930()*0.0130818);
}

double NNfunction_ss_sRcR::synapse0x3060f20() {
   return (neuron0x303bc70()*-0.0344891);
}

double NNfunction_ss_sRcR::synapse0x3060f60() {
   return (neuron0x303bfb0()*-0.0455102);
}

double NNfunction_ss_sRcR::synapse0x3060fa0() {
   return (neuron0x303c2f0()*0.00326931);
}

double NNfunction_ss_sRcR::synapse0x3060fe0() {
   return (neuron0x303c630()*-0.199888);
}

double NNfunction_ss_sRcR::synapse0x304ed90() {
   return (neuron0x303c970()*0.0227666);
}

double NNfunction_ss_sRcR::synapse0x304edd0() {
   return (neuron0x303ced0()*0.0175785);
}

double NNfunction_ss_sRcR::synapse0x3061130() {
   return (neuron0x303d0f0()*0.372036);
}

double NNfunction_ss_sRcR::synapse0x3061170() {
   return (neuron0x303d430()*-0.0185697);
}

double NNfunction_ss_sRcR::synapse0x30611b0() {
   return (neuron0x303d770()*-0.0416415);
}

double NNfunction_ss_sRcR::synapse0x30611f0() {
   return (neuron0x303dab0()*-0.0193109);
}

double NNfunction_ss_sRcR::synapse0x3061230() {
   return (neuron0x303ddf0()*-0.0222472);
}

double NNfunction_ss_sRcR::synapse0x3061270() {
   return (neuron0x303e130()*-0.00459229);
}

double NNfunction_ss_sRcR::synapse0x30615f0() {
   return (neuron0x3039570()*0.312618);
}

double NNfunction_ss_sRcR::synapse0x3061630() {
   return (neuron0x30398b0()*-0.507988);
}

double NNfunction_ss_sRcR::synapse0x3061670() {
   return (neuron0x3039bf0()*-0.132951);
}

double NNfunction_ss_sRcR::synapse0x30616b0() {
   return (neuron0x3039f30()*-0.810572);
}

double NNfunction_ss_sRcR::synapse0x30616f0() {
   return (neuron0x303a270()*0.0210908);
}

double NNfunction_ss_sRcR::synapse0x3061730() {
   return (neuron0x303a5b0()*0.392152);
}

double NNfunction_ss_sRcR::synapse0x3061770() {
   return (neuron0x303a8f0()*0.0714478);
}

double NNfunction_ss_sRcR::synapse0x30617b0() {
   return (neuron0x303ac30()*0.247085);
}

double NNfunction_ss_sRcR::synapse0x30617f0() {
   return (neuron0x303af70()*0.135852);
}

double NNfunction_ss_sRcR::synapse0x3061830() {
   return (neuron0x303b2b0()*0.733069);
}

double NNfunction_ss_sRcR::synapse0x3061870() {
   return (neuron0x303b5f0()*-0.273075);
}

double NNfunction_ss_sRcR::synapse0x30618b0() {
   return (neuron0x303b930()*-0.211586);
}

double NNfunction_ss_sRcR::synapse0x30618f0() {
   return (neuron0x303bc70()*-0.484279);
}

double NNfunction_ss_sRcR::synapse0x3061930() {
   return (neuron0x303bfb0()*0.119326);
}

double NNfunction_ss_sRcR::synapse0x3061970() {
   return (neuron0x303c2f0()*0.252305);
}

double NNfunction_ss_sRcR::synapse0x30619b0() {
   return (neuron0x303c630()*-0.218787);
}

double NNfunction_ss_sRcR::synapse0x3061440() {
   return (neuron0x303c970()*0.114878);
}

double NNfunction_ss_sRcR::synapse0x3061480() {
   return (neuron0x303ced0()*0.722763);
}

double NNfunction_ss_sRcR::synapse0x3061b00() {
   return (neuron0x303d0f0()*0.015388);
}

double NNfunction_ss_sRcR::synapse0x3061b40() {
   return (neuron0x303d430()*-0.000330976);
}

double NNfunction_ss_sRcR::synapse0x3061b80() {
   return (neuron0x303d770()*0.156745);
}

double NNfunction_ss_sRcR::synapse0x3061bc0() {
   return (neuron0x303dab0()*-0.116165);
}

double NNfunction_ss_sRcR::synapse0x3061c00() {
   return (neuron0x303ddf0()*0.0650547);
}

double NNfunction_ss_sRcR::synapse0x3061c40() {
   return (neuron0x303e130()*-0.0454095);
}

double NNfunction_ss_sRcR::synapse0x3061fc0() {
   return (neuron0x3039570()*-0.13483);
}

double NNfunction_ss_sRcR::synapse0x3062000() {
   return (neuron0x30398b0()*-0.0535632);
}

double NNfunction_ss_sRcR::synapse0x3062040() {
   return (neuron0x3039bf0()*0.0364622);
}

double NNfunction_ss_sRcR::synapse0x3062080() {
   return (neuron0x3039f30()*-0.174727);
}

double NNfunction_ss_sRcR::synapse0x30620c0() {
   return (neuron0x303a270()*0.799651);
}

double NNfunction_ss_sRcR::synapse0x3062100() {
   return (neuron0x303a5b0()*-0.12958);
}

double NNfunction_ss_sRcR::synapse0x3062140() {
   return (neuron0x303a8f0()*-0.377037);
}

double NNfunction_ss_sRcR::synapse0x3062180() {
   return (neuron0x303ac30()*0.482768);
}

double NNfunction_ss_sRcR::synapse0x30621c0() {
   return (neuron0x303af70()*-0.635214);
}

double NNfunction_ss_sRcR::synapse0x3062200() {
   return (neuron0x303b2b0()*-0.175272);
}

double NNfunction_ss_sRcR::synapse0x3062240() {
   return (neuron0x303b5f0()*-0.64864);
}

double NNfunction_ss_sRcR::synapse0x3062280() {
   return (neuron0x303b930()*0.379853);
}

double NNfunction_ss_sRcR::synapse0x30622c0() {
   return (neuron0x303bc70()*-0.202713);
}

double NNfunction_ss_sRcR::synapse0x3062300() {
   return (neuron0x303bfb0()*0.243268);
}

double NNfunction_ss_sRcR::synapse0x3062340() {
   return (neuron0x303c2f0()*0.0915637);
}

double NNfunction_ss_sRcR::synapse0x3062380() {
   return (neuron0x303c630()*0.082756);
}

double NNfunction_ss_sRcR::synapse0x3061e10() {
   return (neuron0x303c970()*0.34682);
}

double NNfunction_ss_sRcR::synapse0x3061e50() {
   return (neuron0x303ced0()*-0.85262);
}

double NNfunction_ss_sRcR::synapse0x30624d0() {
   return (neuron0x303d0f0()*-0.000820432);
}

double NNfunction_ss_sRcR::synapse0x3062510() {
   return (neuron0x303d430()*0.338326);
}

double NNfunction_ss_sRcR::synapse0x3062550() {
   return (neuron0x303d770()*0.255052);
}

double NNfunction_ss_sRcR::synapse0x3062590() {
   return (neuron0x303dab0()*0.208183);
}

double NNfunction_ss_sRcR::synapse0x30625d0() {
   return (neuron0x303ddf0()*-0.327947);
}

double NNfunction_ss_sRcR::synapse0x3062610() {
   return (neuron0x303e130()*-0.353946);
}

double NNfunction_ss_sRcR::synapse0x3062990() {
   return (neuron0x3039570()*-0.00859589);
}

double NNfunction_ss_sRcR::synapse0x30629d0() {
   return (neuron0x30398b0()*0.0171425);
}

double NNfunction_ss_sRcR::synapse0x3062a10() {
   return (neuron0x3039bf0()*0.00573932);
}

double NNfunction_ss_sRcR::synapse0x3062a50() {
   return (neuron0x3039f30()*-2.17748);
}

double NNfunction_ss_sRcR::synapse0x3062a90() {
   return (neuron0x303a270()*0.00844852);
}

double NNfunction_ss_sRcR::synapse0x3062ad0() {
   return (neuron0x303a5b0()*-0.0128267);
}

double NNfunction_ss_sRcR::synapse0x3062b10() {
   return (neuron0x303a8f0()*-0.0148934);
}

double NNfunction_ss_sRcR::synapse0x3062b50() {
   return (neuron0x303ac30()*-0.0110273);
}

double NNfunction_ss_sRcR::synapse0x3062b90() {
   return (neuron0x303af70()*-0.0116715);
}

double NNfunction_ss_sRcR::synapse0x3062bd0() {
   return (neuron0x303b2b0()*-0.0156841);
}

double NNfunction_ss_sRcR::synapse0x3062c10() {
   return (neuron0x303b5f0()*0.0122696);
}

double NNfunction_ss_sRcR::synapse0x3062c50() {
   return (neuron0x303b930()*0.00803811);
}

double NNfunction_ss_sRcR::synapse0x3062c90() {
   return (neuron0x303bc70()*-0.0293804);
}

double NNfunction_ss_sRcR::synapse0x3062cd0() {
   return (neuron0x303bfb0()*-0.0121496);
}

double NNfunction_ss_sRcR::synapse0x3062d10() {
   return (neuron0x303c2f0()*0.0145451);
}

double NNfunction_ss_sRcR::synapse0x3062d50() {
   return (neuron0x303c630()*-0.267368);
}

double NNfunction_ss_sRcR::synapse0x30627e0() {
   return (neuron0x303c970()*-0.0305568);
}

double NNfunction_ss_sRcR::synapse0x3062820() {
   return (neuron0x303ced0()*0.0182246);
}

double NNfunction_ss_sRcR::synapse0x3062ea0() {
   return (neuron0x303d0f0()*-0.0579383);
}

double NNfunction_ss_sRcR::synapse0x3062ee0() {
   return (neuron0x303d430()*0.009457);
}

double NNfunction_ss_sRcR::synapse0x3062f20() {
   return (neuron0x303d770()*-0.00447152);
}

double NNfunction_ss_sRcR::synapse0x3062f60() {
   return (neuron0x303dab0()*0.003251);
}

double NNfunction_ss_sRcR::synapse0x3062fa0() {
   return (neuron0x303ddf0()*-0.00708119);
}

double NNfunction_ss_sRcR::synapse0x3062fe0() {
   return (neuron0x303e130()*-0.00578804);
}

double NNfunction_ss_sRcR::synapse0x303f580() {
   return (neuron0x303e5d0()*-0.00565388);
}

double NNfunction_ss_sRcR::synapse0x303f5c0() {
   return (neuron0x303eee0()*0.000530763);
}

double NNfunction_ss_sRcR::synapse0x3040a90() {
   return (neuron0x303f9c0()*-0.114744);
}

double NNfunction_ss_sRcR::synapse0x3040ad0() {
   return (neuron0x2df9250()*0.37916);
}

double NNfunction_ss_sRcR::synapse0x3041460() {
   return (neuron0x30407e0()*-0.000983283);
}

double NNfunction_ss_sRcR::synapse0x30414a0() {
   return (neuron0x30411b0()*-0.0262012);
}

double NNfunction_ss_sRcR::synapse0x3042230() {
   return (neuron0x3041f80()*0.0893628);
}

double NNfunction_ss_sRcR::synapse0x3042270() {
   return (neuron0x3042950()*-0.82189);
}

double NNfunction_ss_sRcR::synapse0x3042c00() {
   return (neuron0x3043320()*-0.0032192);
}

double NNfunction_ss_sRcR::synapse0x3042c40() {
   return (neuron0x3043e00()*0.263309);
}

double NNfunction_ss_sRcR::synapse0x30435d0() {
   return (neuron0x30447d0()*0.0131905);
}

double NNfunction_ss_sRcR::synapse0x3043610() {
   return (neuron0x30418b0()*0.0642983);
}

double NNfunction_ss_sRcR::synapse0x30440b0() {
   return (neuron0x3046380()*-0.0239837);
}

double NNfunction_ss_sRcR::synapse0x30440f0() {
   return (neuron0x3046d50()*0.0162784);
}

double NNfunction_ss_sRcR::synapse0x3044a80() {
   return (neuron0x3047720()*-0.026815);
}

double NNfunction_ss_sRcR::synapse0x3044ac0() {
   return (neuron0x30480f0()*-0.46159);
}

double NNfunction_ss_sRcR::synapse0x3041b60() {
   return (neuron0x3049f00()*-0.074954);
}

double NNfunction_ss_sRcR::synapse0x3041ba0() {
   return (neuron0x304a1e0()*0.120789);
}

double NNfunction_ss_sRcR::synapse0x3046630() {
   return (neuron0x304abb0()*-0.00286555);
}

double NNfunction_ss_sRcR::synapse0x3046670() {
   return (neuron0x304b580()*1.70357);
}

double NNfunction_ss_sRcR::synapse0x3047000() {
   return (neuron0x304bf50()*0.0189992);
}

double NNfunction_ss_sRcR::synapse0x3047040() {
   return (neuron0x304c920()*0.0505229);
}

double NNfunction_ss_sRcR::synapse0x30479d0() {
   return (neuron0x3045470()*0.00523013);
}

double NNfunction_ss_sRcR::synapse0x3047a10() {
   return (neuron0x3045e40()*-0.075782);
}

double NNfunction_ss_sRcR::synapse0x30483a0() {
   return (neuron0x304f6b0()*0.099471);
}

double NNfunction_ss_sRcR::synapse0x30483e0() {
   return (neuron0x3050080()*3.21786);
}

double NNfunction_ss_sRcR::synapse0x303c510() {
   return (neuron0x3050a50()*2.60286);
}

double NNfunction_ss_sRcR::synapse0x303c550() {
   return (neuron0x3051420()*-0.0543315);
}

double NNfunction_ss_sRcR::synapse0x304a490() {
   return (neuron0x3051df0()*-0.010637);
}

double NNfunction_ss_sRcR::synapse0x304a4d0() {
   return (neuron0x30527c0()*-0.00432014);
}

double NNfunction_ss_sRcR::synapse0x304ae60() {
   return (neuron0x3053190()*0.00952671);
}

double NNfunction_ss_sRcR::synapse0x304aea0() {
   return (neuron0x3053b60()*-0.00916143);
}

double NNfunction_ss_sRcR::synapse0x304b830() {
   return (neuron0x3049bf0()*0.0424023);
}

double NNfunction_ss_sRcR::synapse0x304b870() {
   return (neuron0x3056740()*-0.0177146);
}

double NNfunction_ss_sRcR::synapse0x304c200() {
   return (neuron0x3057110()*-0.0299653);
}

double NNfunction_ss_sRcR::synapse0x304c240() {
   return (neuron0x3057ae0()*-0.0358176);
}

double NNfunction_ss_sRcR::synapse0x304cbd0() {
   return (neuron0x30584b0()*-1.71222);
}

double NNfunction_ss_sRcR::synapse0x304cc10() {
   return (neuron0x3058e80()*0.0171398);
}

double NNfunction_ss_sRcR::synapse0x3045720() {
   return (neuron0x3059850()*-0.553286);
}

double NNfunction_ss_sRcR::synapse0x3045760() {
   return (neuron0x305a220()*-2.05476);
}

double NNfunction_ss_sRcR::synapse0x304efd0() {
   return (neuron0x305abf0()*0.0398701);
}

double NNfunction_ss_sRcR::synapse0x304f010() {
   return (neuron0x305b7d0()*1.88066);
}

double NNfunction_ss_sRcR::synapse0x304f960() {
   return (neuron0x305c1a0()*0.0157421);
}

double NNfunction_ss_sRcR::synapse0x304f9a0() {
   return (neuron0x304d020()*-0.0301881);
}

double NNfunction_ss_sRcR::synapse0x3050330() {
   return (neuron0x304d9f0()*-0.0189654);
}

double NNfunction_ss_sRcR::synapse0x3050370() {
   return (neuron0x304e3c0()*-0.0330745);
}

double NNfunction_ss_sRcR::synapse0x3050d00() {
   return (neuron0x3060a00()*1.72768);
}

double NNfunction_ss_sRcR::synapse0x3050d40() {
   return (neuron0x30612b0()*0.00650382);
}

double NNfunction_ss_sRcR::synapse0x30516d0() {
   return (neuron0x3061c80()*0.00626162);
}

double NNfunction_ss_sRcR::synapse0x3051710() {
   return (neuron0x3062650()*-1.55449);
}

double NNfunction_ss_sRcR::synapse0x3053e10() {
   return (neuron0x303e5d0()*0.0418824);
}

double NNfunction_ss_sRcR::synapse0x3053e50() {
   return (neuron0x303eee0()*0.0404393);
}

double NNfunction_ss_sRcR::synapse0x30493d0() {
   return (neuron0x303f9c0()*-0.333797);
}

double NNfunction_ss_sRcR::synapse0x3049410() {
   return (neuron0x2df9250()*0.673171);
}

double NNfunction_ss_sRcR::synapse0x30569f0() {
   return (neuron0x30407e0()*3.12828);
}

double NNfunction_ss_sRcR::synapse0x3056a30() {
   return (neuron0x30411b0()*0.00388771);
}

double NNfunction_ss_sRcR::synapse0x30573c0() {
   return (neuron0x3041f80()*1.06404);
}

double NNfunction_ss_sRcR::synapse0x3057400() {
   return (neuron0x3042950()*0.188988);
}

double NNfunction_ss_sRcR::synapse0x3057d90() {
   return (neuron0x3043320()*-0.089631);
}

double NNfunction_ss_sRcR::synapse0x3057dd0() {
   return (neuron0x3043e00()*1.55102);
}

double NNfunction_ss_sRcR::synapse0x3058760() {
   return (neuron0x30447d0()*0.222963);
}

double NNfunction_ss_sRcR::synapse0x30587a0() {
   return (neuron0x30418b0()*-0.340064);
}

double NNfunction_ss_sRcR::synapse0x3059130() {
   return (neuron0x3046380()*0.951135);
}

double NNfunction_ss_sRcR::synapse0x3059170() {
   return (neuron0x3046d50()*-0.206185);
}

double NNfunction_ss_sRcR::synapse0x3059b00() {
   return (neuron0x3047720()*0.554509);
}

double NNfunction_ss_sRcR::synapse0x3059b40() {
   return (neuron0x30480f0()*-0.312796);
}

double NNfunction_ss_sRcR::synapse0x305a4d0() {
   return (neuron0x3049f00()*1.05592);
}

double NNfunction_ss_sRcR::synapse0x305a510() {
   return (neuron0x304a1e0()*0.356863);
}

double NNfunction_ss_sRcR::synapse0x305aea0() {
   return (neuron0x304abb0()*0.0552021);
}

double NNfunction_ss_sRcR::synapse0x305aee0() {
   return (neuron0x304b580()*1.20908);
}

double NNfunction_ss_sRcR::synapse0x305ba80() {
   return (neuron0x304bf50()*-0.600295);
}

double NNfunction_ss_sRcR::synapse0x305bac0() {
   return (neuron0x304c920()*0.563034);
}

double NNfunction_ss_sRcR::synapse0x305c450() {
   return (neuron0x3045470()*0.171415);
}

double NNfunction_ss_sRcR::synapse0x305c490() {
   return (neuron0x3045e40()*0.335949);
}

double NNfunction_ss_sRcR::synapse0x304d2d0() {
   return (neuron0x304f6b0()*-0.0410572);
}

double NNfunction_ss_sRcR::synapse0x304d310() {
   return (neuron0x3050080()*1.09237);
}

double NNfunction_ss_sRcR::synapse0x304dca0() {
   return (neuron0x3050a50()*0.0377887);
}

double NNfunction_ss_sRcR::synapse0x304dce0() {
   return (neuron0x3051420()*0.877339);
}

double NNfunction_ss_sRcR::synapse0x304e670() {
   return (neuron0x3051df0()*0.302334);
}

double NNfunction_ss_sRcR::synapse0x304e6b0() {
   return (neuron0x30527c0()*0.394319);
}

double NNfunction_ss_sRcR::synapse0x3060b90() {
   return (neuron0x3053190()*0.283678);
}

double NNfunction_ss_sRcR::synapse0x3060bd0() {
   return (neuron0x3053b60()*0.55785);
}

double NNfunction_ss_sRcR::synapse0x3061560() {
   return (neuron0x3049bf0()*0.43418);
}

double NNfunction_ss_sRcR::synapse0x30615a0() {
   return (neuron0x3056740()*-0.0546066);
}

double NNfunction_ss_sRcR::synapse0x3061f30() {
   return (neuron0x3057110()*-0.137728);
}

double NNfunction_ss_sRcR::synapse0x3061f70() {
   return (neuron0x3057ae0()*0.222171);
}

double NNfunction_ss_sRcR::synapse0x3062900() {
   return (neuron0x30584b0()*-0.446917);
}

double NNfunction_ss_sRcR::synapse0x3062940() {
   return (neuron0x3058e80()*0.412406);
}

double NNfunction_ss_sRcR::synapse0x303e7f0() {
   return (neuron0x3059850()*-1.40241);
}

double NNfunction_ss_sRcR::synapse0x303e830() {
   return (neuron0x305a220()*-3.99105);
}

double NNfunction_ss_sRcR::synapse0x30520a0() {
   return (neuron0x305abf0()*-0.358631);
}

double NNfunction_ss_sRcR::synapse0x30520e0() {
   return (neuron0x305b7d0()*0.94591);
}

double NNfunction_ss_sRcR::synapse0x3063020() {
   return (neuron0x305c1a0()*-0.397297);
}

double NNfunction_ss_sRcR::synapse0x3063060() {
   return (neuron0x304d020()*0.355917);
}

double NNfunction_ss_sRcR::synapse0x30630a0() {
   return (neuron0x304d9f0()*-0.250767);
}

double NNfunction_ss_sRcR::synapse0x30630e0() {
   return (neuron0x304e3c0()*0.219751);
}

double NNfunction_ss_sRcR::synapse0x3069f90() {
   return (neuron0x3060a00()*-0.343464);
}

double NNfunction_ss_sRcR::synapse0x3069fd0() {
   return (neuron0x30612b0()*0.21233);
}

double NNfunction_ss_sRcR::synapse0x306a010() {
   return (neuron0x3061c80()*0.451887);
}

double NNfunction_ss_sRcR::synapse0x306a050() {
   return (neuron0x3062650()*-0.367304);
}

double NNfunction_ss_sRcR::synapse0x306a3d0() {
   return (neuron0x303e5d0()*2.11954);
}

double NNfunction_ss_sRcR::synapse0x306a410() {
   return (neuron0x303eee0()*-0.159136);
}

double NNfunction_ss_sRcR::synapse0x306a450() {
   return (neuron0x303f9c0()*0.811904);
}

double NNfunction_ss_sRcR::synapse0x306a490() {
   return (neuron0x2df9250()*0.000158511);
}

double NNfunction_ss_sRcR::synapse0x306a4d0() {
   return (neuron0x30407e0()*-9.56388);
}

double NNfunction_ss_sRcR::synapse0x306a510() {
   return (neuron0x30411b0()*-1.38206);
}

double NNfunction_ss_sRcR::synapse0x306a550() {
   return (neuron0x3041f80()*0.540201);
}

double NNfunction_ss_sRcR::synapse0x306a590() {
   return (neuron0x3042950()*1.09378);
}

double NNfunction_ss_sRcR::synapse0x306a5d0() {
   return (neuron0x3043320()*-0.302267);
}

double NNfunction_ss_sRcR::synapse0x306a610() {
   return (neuron0x3043e00()*-0.866618);
}

double NNfunction_ss_sRcR::synapse0x306a650() {
   return (neuron0x30447d0()*-0.999829);
}

double NNfunction_ss_sRcR::synapse0x306a690() {
   return (neuron0x30418b0()*0.432256);
}

double NNfunction_ss_sRcR::synapse0x306a6d0() {
   return (neuron0x3046380()*0.82348);
}

double NNfunction_ss_sRcR::synapse0x306a710() {
   return (neuron0x3046d50()*2.0864);
}

double NNfunction_ss_sRcR::synapse0x306a750() {
   return (neuron0x3047720()*0.864116);
}

double NNfunction_ss_sRcR::synapse0x306a790() {
   return (neuron0x30480f0()*-4.69825);
}

double NNfunction_ss_sRcR::synapse0x306a220() {
   return (neuron0x3049f00()*-0.0710496);
}

double NNfunction_ss_sRcR::synapse0x306a260() {
   return (neuron0x304a1e0()*-0.945948);
}

double NNfunction_ss_sRcR::synapse0x306a8e0() {
   return (neuron0x304abb0()*-1.30177);
}

double NNfunction_ss_sRcR::synapse0x306a920() {
   return (neuron0x304b580()*-0.536645);
}

double NNfunction_ss_sRcR::synapse0x306a960() {
   return (neuron0x304bf50()*1.39025);
}

double NNfunction_ss_sRcR::synapse0x306a9a0() {
   return (neuron0x304c920()*-1.04065);
}

double NNfunction_ss_sRcR::synapse0x306a9e0() {
   return (neuron0x3045470()*-0.146847);
}

double NNfunction_ss_sRcR::synapse0x306aa20() {
   return (neuron0x3045e40()*2.0139);
}

double NNfunction_ss_sRcR::synapse0x306aa60() {
   return (neuron0x304f6b0()*-2.65345);
}

double NNfunction_ss_sRcR::synapse0x306aaa0() {
   return (neuron0x3050080()*-2.26359);
}

double NNfunction_ss_sRcR::synapse0x306aae0() {
   return (neuron0x3050a50()*-0.383295);
}

double NNfunction_ss_sRcR::synapse0x306ab20() {
   return (neuron0x3051420()*0.940332);
}

double NNfunction_ss_sRcR::synapse0x306ab60() {
   return (neuron0x3051df0()*-0.885923);
}

double NNfunction_ss_sRcR::synapse0x306aba0() {
   return (neuron0x30527c0()*-0.882284);
}

double NNfunction_ss_sRcR::synapse0x306abe0() {
   return (neuron0x3053190()*0.033319);
}

double NNfunction_ss_sRcR::synapse0x306ac20() {
   return (neuron0x3053b60()*1.28337);
}

double NNfunction_ss_sRcR::synapse0x306a7d0() {
   return (neuron0x3049bf0()*1.15997);
}

double NNfunction_ss_sRcR::synapse0x306a810() {
   return (neuron0x3056740()*-2.71896);
}

double NNfunction_ss_sRcR::synapse0x306a850() {
   return (neuron0x3057110()*-0.692131);
}

double NNfunction_ss_sRcR::synapse0x306a890() {
   return (neuron0x3057ae0()*-0.543932);
}

double NNfunction_ss_sRcR::synapse0x306ae70() {
   return (neuron0x30584b0()*1.41842);
}

double NNfunction_ss_sRcR::synapse0x306aeb0() {
   return (neuron0x3058e80()*1.15695);
}

double NNfunction_ss_sRcR::synapse0x306aef0() {
   return (neuron0x3059850()*3.61374);
}

double NNfunction_ss_sRcR::synapse0x306af30() {
   return (neuron0x305a220()*5.45973);
}

double NNfunction_ss_sRcR::synapse0x306af70() {
   return (neuron0x305abf0()*-1.13349);
}

double NNfunction_ss_sRcR::synapse0x306afb0() {
   return (neuron0x305b7d0()*-0.69035);
}

double NNfunction_ss_sRcR::synapse0x306aff0() {
   return (neuron0x305c1a0()*0.732151);
}

double NNfunction_ss_sRcR::synapse0x306b030() {
   return (neuron0x304d020()*1.04793);
}

double NNfunction_ss_sRcR::synapse0x306b070() {
   return (neuron0x304d9f0()*-0.793);
}

double NNfunction_ss_sRcR::synapse0x306b0b0() {
   return (neuron0x304e3c0()*0.547589);
}

double NNfunction_ss_sRcR::synapse0x306b0f0() {
   return (neuron0x3060a00()*-2.0219);
}

double NNfunction_ss_sRcR::synapse0x306b130() {
   return (neuron0x30612b0()*-1.26811);
}

double NNfunction_ss_sRcR::synapse0x306b170() {
   return (neuron0x3061c80()*1.50196);
}

double NNfunction_ss_sRcR::synapse0x306b1b0() {
   return (neuron0x3062650()*-0.326751);
}

double NNfunction_ss_sRcR::synapse0x306b530() {
   return (neuron0x303e5d0()*-0.170526);
}

double NNfunction_ss_sRcR::synapse0x306b570() {
   return (neuron0x303eee0()*-0.0286335);
}

double NNfunction_ss_sRcR::synapse0x306b5b0() {
   return (neuron0x303f9c0()*-0.114883);
}

double NNfunction_ss_sRcR::synapse0x306b5f0() {
   return (neuron0x2df9250()*1.72369);
}

double NNfunction_ss_sRcR::synapse0x306b630() {
   return (neuron0x30407e0()*1.25344);
}

double NNfunction_ss_sRcR::synapse0x306b670() {
   return (neuron0x30411b0()*0.548116);
}

double NNfunction_ss_sRcR::synapse0x306b6b0() {
   return (neuron0x3041f80()*-1.89805);
}

double NNfunction_ss_sRcR::synapse0x306b6f0() {
   return (neuron0x3042950()*-1.71885);
}

double NNfunction_ss_sRcR::synapse0x306b730() {
   return (neuron0x3043320()*-0.0120907);
}

double NNfunction_ss_sRcR::synapse0x306b770() {
   return (neuron0x3043e00()*1.80951);
}

double NNfunction_ss_sRcR::synapse0x306b7b0() {
   return (neuron0x30447d0()*0.162739);
}

double NNfunction_ss_sRcR::synapse0x306b7f0() {
   return (neuron0x30418b0()*-0.452227);
}

double NNfunction_ss_sRcR::synapse0x306b830() {
   return (neuron0x3046380()*0.0504151);
}

double NNfunction_ss_sRcR::synapse0x306b870() {
   return (neuron0x3046d50()*0.0202394);
}

double NNfunction_ss_sRcR::synapse0x306b8b0() {
   return (neuron0x3047720()*0.162466);
}

double NNfunction_ss_sRcR::synapse0x306b8f0() {
   return (neuron0x30480f0()*-0.840426);
}

double NNfunction_ss_sRcR::synapse0x306b380() {
   return (neuron0x3049f00()*0.295066);
}

double NNfunction_ss_sRcR::synapse0x306b3c0() {
   return (neuron0x304a1e0()*0.0159896);
}

double NNfunction_ss_sRcR::synapse0x306ba40() {
   return (neuron0x304abb0()*-0.101354);
}

double NNfunction_ss_sRcR::synapse0x306ba80() {
   return (neuron0x304b580()*0.0462854);
}

double NNfunction_ss_sRcR::synapse0x306bac0() {
   return (neuron0x304bf50()*-0.0765448);
}

double NNfunction_ss_sRcR::synapse0x306bb00() {
   return (neuron0x304c920()*-0.311246);
}

double NNfunction_ss_sRcR::synapse0x306bb40() {
   return (neuron0x3045470()*0.0117669);
}

double NNfunction_ss_sRcR::synapse0x306bb80() {
   return (neuron0x3045e40()*0.341888);
}

double NNfunction_ss_sRcR::synapse0x306bbc0() {
   return (neuron0x304f6b0()*-0.522987);
}

double NNfunction_ss_sRcR::synapse0x306bc00() {
   return (neuron0x3050080()*2.27819);
}

double NNfunction_ss_sRcR::synapse0x306bc40() {
   return (neuron0x3050a50()*1.50894);
}

double NNfunction_ss_sRcR::synapse0x306bc80() {
   return (neuron0x3051420()*0.335654);
}

double NNfunction_ss_sRcR::synapse0x306bcc0() {
   return (neuron0x3051df0()*-0.0122356);
}

double NNfunction_ss_sRcR::synapse0x306bd00() {
   return (neuron0x30527c0()*-0.0913688);
}

double NNfunction_ss_sRcR::synapse0x306bd40() {
   return (neuron0x3053190()*-0.0593298);
}

double NNfunction_ss_sRcR::synapse0x306bd80() {
   return (neuron0x3053b60()*0.0572764);
}

double NNfunction_ss_sRcR::synapse0x306b930() {
   return (neuron0x3049bf0()*-0.0594107);
}

double NNfunction_ss_sRcR::synapse0x306b970() {
   return (neuron0x3056740()*-0.172282);
}

double NNfunction_ss_sRcR::synapse0x306b9b0() {
   return (neuron0x3057110()*0.0663085);
}

double NNfunction_ss_sRcR::synapse0x306b9f0() {
   return (neuron0x3057ae0()*0.106373);
}

double NNfunction_ss_sRcR::synapse0x306bfd0() {
   return (neuron0x30584b0()*-0.562797);
}

double NNfunction_ss_sRcR::synapse0x306c010() {
   return (neuron0x3058e80()*-0.0510993);
}

double NNfunction_ss_sRcR::synapse0x306c050() {
   return (neuron0x3059850()*-3.75081);
}

double NNfunction_ss_sRcR::synapse0x306c090() {
   return (neuron0x305a220()*2.16688);
}

double NNfunction_ss_sRcR::synapse0x306c0d0() {
   return (neuron0x305abf0()*-0.210156);
}

double NNfunction_ss_sRcR::synapse0x306c110() {
   return (neuron0x305b7d0()*2.22181);
}

double NNfunction_ss_sRcR::synapse0x306c150() {
   return (neuron0x305c1a0()*-0.0449977);
}

double NNfunction_ss_sRcR::synapse0x306c190() {
   return (neuron0x304d020()*0.126988);
}

double NNfunction_ss_sRcR::synapse0x306c1d0() {
   return (neuron0x304d9f0()*0.0392243);
}

double NNfunction_ss_sRcR::synapse0x306c210() {
   return (neuron0x304e3c0()*0.0634302);
}

double NNfunction_ss_sRcR::synapse0x306c250() {
   return (neuron0x3060a00()*6.10365);
}

double NNfunction_ss_sRcR::synapse0x306c290() {
   return (neuron0x30612b0()*-0.0667977);
}

double NNfunction_ss_sRcR::synapse0x306c2d0() {
   return (neuron0x3061c80()*-0.0664514);
}

double NNfunction_ss_sRcR::synapse0x306c310() {
   return (neuron0x3062650()*-1.67687);
}

double NNfunction_ss_sRcR::synapse0x306c690() {
   return (neuron0x303e5d0()*-1.14804);
}

double NNfunction_ss_sRcR::synapse0x306c6d0() {
   return (neuron0x303eee0()*2.08691);
}

double NNfunction_ss_sRcR::synapse0x306c710() {
   return (neuron0x303f9c0()*-1.5523);
}

double NNfunction_ss_sRcR::synapse0x306c750() {
   return (neuron0x2df9250()*2.32611);
}

double NNfunction_ss_sRcR::synapse0x306c790() {
   return (neuron0x30407e0()*1.18563);
}

double NNfunction_ss_sRcR::synapse0x306c7d0() {
   return (neuron0x30411b0()*3.13256);
}

double NNfunction_ss_sRcR::synapse0x306c810() {
   return (neuron0x3041f80()*-0.974716);
}

double NNfunction_ss_sRcR::synapse0x306c850() {
   return (neuron0x3042950()*-1.46441);
}

double NNfunction_ss_sRcR::synapse0x306c890() {
   return (neuron0x3043320()*1.1992);
}

double NNfunction_ss_sRcR::synapse0x306c8d0() {
   return (neuron0x3043e00()*1.05216);
}

double NNfunction_ss_sRcR::synapse0x306c910() {
   return (neuron0x30447d0()*0.603669);
}

double NNfunction_ss_sRcR::synapse0x306c950() {
   return (neuron0x30418b0()*-2.32456);
}

double NNfunction_ss_sRcR::synapse0x306c990() {
   return (neuron0x3046380()*1.76);
}

double NNfunction_ss_sRcR::synapse0x306c9d0() {
   return (neuron0x3046d50()*-0.196797);
}

double NNfunction_ss_sRcR::synapse0x306ca10() {
   return (neuron0x3047720()*1.68816);
}

double NNfunction_ss_sRcR::synapse0x306ca50() {
   return (neuron0x30480f0()*0.139877);
}

double NNfunction_ss_sRcR::synapse0x306c4e0() {
   return (neuron0x3049f00()*1.96446);
}

double NNfunction_ss_sRcR::synapse0x306c520() {
   return (neuron0x304a1e0()*-5.34913);
}

double NNfunction_ss_sRcR::synapse0x306cba0() {
   return (neuron0x304abb0()*0.351301);
}

double NNfunction_ss_sRcR::synapse0x306cbe0() {
   return (neuron0x304b580()*0.901732);
}

double NNfunction_ss_sRcR::synapse0x306cc20() {
   return (neuron0x304bf50()*-1.15292);
}

double NNfunction_ss_sRcR::synapse0x306cc60() {
   return (neuron0x304c920()*-2.92485);
}

double NNfunction_ss_sRcR::synapse0x306cca0() {
   return (neuron0x3045470()*2.96663);
}

double NNfunction_ss_sRcR::synapse0x306cce0() {
   return (neuron0x3045e40()*-0.0441691);
}

double NNfunction_ss_sRcR::synapse0x306cd20() {
   return (neuron0x304f6b0()*0.206976);
}

double NNfunction_ss_sRcR::synapse0x306cd60() {
   return (neuron0x3050080()*0.768363);
}

double NNfunction_ss_sRcR::synapse0x306cda0() {
   return (neuron0x3050a50()*0.298852);
}

double NNfunction_ss_sRcR::synapse0x306cde0() {
   return (neuron0x3051420()*0.915391);
}

double NNfunction_ss_sRcR::synapse0x306ce20() {
   return (neuron0x3051df0()*0.0700093);
}

double NNfunction_ss_sRcR::synapse0x306ce60() {
   return (neuron0x30527c0()*0.687774);
}

double NNfunction_ss_sRcR::synapse0x306cea0() {
   return (neuron0x3053190()*-1.80177);
}

double NNfunction_ss_sRcR::synapse0x306cee0() {
   return (neuron0x3053b60()*0.820009);
}

double NNfunction_ss_sRcR::synapse0x306ca90() {
   return (neuron0x3049bf0()*-2.05429);
}

double NNfunction_ss_sRcR::synapse0x306cad0() {
   return (neuron0x3056740()*0.954572);
}

double NNfunction_ss_sRcR::synapse0x306cb10() {
   return (neuron0x3057110()*1.11033);
}

double NNfunction_ss_sRcR::synapse0x306cb50() {
   return (neuron0x3057ae0()*1.30397);
}

double NNfunction_ss_sRcR::synapse0x306d130() {
   return (neuron0x30584b0()*1.43903);
}

double NNfunction_ss_sRcR::synapse0x306d170() {
   return (neuron0x3058e80()*0.598073);
}

double NNfunction_ss_sRcR::synapse0x306d1b0() {
   return (neuron0x3059850()*1.16174);
}

double NNfunction_ss_sRcR::synapse0x306d1f0() {
   return (neuron0x305a220()*-0.0139869);
}

double NNfunction_ss_sRcR::synapse0x306d230() {
   return (neuron0x305abf0()*-1.34577);
}

double NNfunction_ss_sRcR::synapse0x306d270() {
   return (neuron0x305b7d0()*0.75947);
}

double NNfunction_ss_sRcR::synapse0x306d2b0() {
   return (neuron0x305c1a0()*-1.38299);
}

double NNfunction_ss_sRcR::synapse0x306d2f0() {
   return (neuron0x304d020()*1.10833);
}

double NNfunction_ss_sRcR::synapse0x306d330() {
   return (neuron0x304d9f0()*-1.23457);
}

double NNfunction_ss_sRcR::synapse0x306d370() {
   return (neuron0x304e3c0()*2.49076);
}

double NNfunction_ss_sRcR::synapse0x306d3b0() {
   return (neuron0x3060a00()*0.702084);
}

double NNfunction_ss_sRcR::synapse0x306d3f0() {
   return (neuron0x30612b0()*0.0809555);
}

double NNfunction_ss_sRcR::synapse0x306d430() {
   return (neuron0x3061c80()*-0.287762);
}

double NNfunction_ss_sRcR::synapse0x306d470() {
   return (neuron0x3062650()*-1.41937);
}

double NNfunction_ss_sRcR::synapse0x303e590() {
   return (neuron0x3069850()*-6.33214);
}

double NNfunction_ss_sRcR::synapse0x306d6d0() {
   return (neuron0x3069bf0()*-1.24719);
}

double NNfunction_ss_sRcR::synapse0x306d710() {
   return (neuron0x306a090()*8.91213);
}

double NNfunction_ss_sRcR::synapse0x306d750() {
   return (neuron0x306b1f0()*-4.31326);
}

double NNfunction_ss_sRcR::synapse0x306d790() {
   return (neuron0x306c350()*-3.69451);
}

