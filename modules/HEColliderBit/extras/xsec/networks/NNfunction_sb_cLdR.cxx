#include "NNfunction_sb_cLdR.h"
#include <cmath>

double NNfunction_sb_cLdR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.8582)/15.0425;
   input1 = (in1 - 47.6369)/769.63;
   input2 = (in2 - 385.953)/488.841;
   input3 = (in3 - 241.508)/626.357;
   input4 = (in4 - 723.316)/707.187;
   input5 = (in5 - 621.921)/676.518;
   input6 = (in6 - 626.452)/680.155;
   input7 = (in7 - 629.529)/683.24;
   input8 = (in8 - 628.966)/720.973;
   input9 = (in9 - 616.484)/701.757;
   input10 = (in10 - 634.927)/729.167;
   input11 = (in11 - 660.218)/608.154;
   input12 = (in12 - 497.462)/305.474;
   input13 = (in13 - 502.235)/364.016;
   input14 = (in14 - 641.529)/554.645;
   input15 = (in15 - 640.771)/553.235;
   input16 = (in16 - 458.275)/388.169;
   input17 = (in17 - 493.27)/305.138;
   input18 = (in18 - 665.707)/630.212;
   input19 = (in19 - 670.696)/617.333;
   input20 = (in20 - -190.832)/400.735;
   input21 = (in21 - -246.816)/879.129;
   input22 = (in22 - -0.353434)/891.102;
   input23 = (in23 - -27.7653)/500.557;
   switch(index) {
     case 0:
         return neuron0x26bf200();
     default:
         return 0.;
   }
}

double NNfunction_sb_cLdR::Value(int index, double* input) {
   input0 = (input[0] - 22.8582)/15.0425;
   input1 = (input[1] - 47.6369)/769.63;
   input2 = (input[2] - 385.953)/488.841;
   input3 = (input[3] - 241.508)/626.357;
   input4 = (input[4] - 723.316)/707.187;
   input5 = (input[5] - 621.921)/676.518;
   input6 = (input[6] - 626.452)/680.155;
   input7 = (input[7] - 629.529)/683.24;
   input8 = (input[8] - 628.966)/720.973;
   input9 = (input[9] - 616.484)/701.757;
   input10 = (input[10] - 634.927)/729.167;
   input11 = (input[11] - 660.218)/608.154;
   input12 = (input[12] - 497.462)/305.474;
   input13 = (input[13] - 502.235)/364.016;
   input14 = (input[14] - 641.529)/554.645;
   input15 = (input[15] - 640.771)/553.235;
   input16 = (input[16] - 458.275)/388.169;
   input17 = (input[17] - 493.27)/305.138;
   input18 = (input[18] - 665.707)/630.212;
   input19 = (input[19] - 670.696)/617.333;
   input20 = (input[20] - -190.832)/400.735;
   input21 = (input[21] - -246.816)/879.129;
   input22 = (input[22] - -0.353434)/891.102;
   input23 = (input[23] - -27.7653)/500.557;
   switch(index) {
     case 0:
         return neuron0x26bf200();
     default:
         return 0.;
   }
}

double NNfunction_sb_cLdR::neuron0x268b2f0() {
   return input0;
}

double NNfunction_sb_cLdR::neuron0x268b630() {
   return input1;
}

double NNfunction_sb_cLdR::neuron0x268b970() {
   return input2;
}

double NNfunction_sb_cLdR::neuron0x268bcb0() {
   return input3;
}

double NNfunction_sb_cLdR::neuron0x268bff0() {
   return input4;
}

double NNfunction_sb_cLdR::neuron0x268c330() {
   return input5;
}

double NNfunction_sb_cLdR::neuron0x268c670() {
   return input6;
}

double NNfunction_sb_cLdR::neuron0x268c9b0() {
   return input7;
}

double NNfunction_sb_cLdR::neuron0x268ccf0() {
   return input8;
}

double NNfunction_sb_cLdR::neuron0x268d030() {
   return input9;
}

double NNfunction_sb_cLdR::neuron0x268d370() {
   return input10;
}

double NNfunction_sb_cLdR::neuron0x268d6b0() {
   return input11;
}

double NNfunction_sb_cLdR::neuron0x268d9f0() {
   return input12;
}

double NNfunction_sb_cLdR::neuron0x268dd30() {
   return input13;
}

double NNfunction_sb_cLdR::neuron0x268e070() {
   return input14;
}

double NNfunction_sb_cLdR::neuron0x268e3b0() {
   return input15;
}

double NNfunction_sb_cLdR::neuron0x268e6f0() {
   return input16;
}

double NNfunction_sb_cLdR::neuron0x268ec50() {
   return input17;
}

double NNfunction_sb_cLdR::neuron0x268ee70() {
   return input18;
}

double NNfunction_sb_cLdR::neuron0x268f1b0() {
   return input19;
}

double NNfunction_sb_cLdR::neuron0x268f4f0() {
   return input20;
}

double NNfunction_sb_cLdR::neuron0x268f830() {
   return input21;
}

double NNfunction_sb_cLdR::neuron0x268fb70() {
   return input22;
}

double NNfunction_sb_cLdR::neuron0x268feb0() {
   return input23;
}

double NNfunction_sb_cLdR::input0x2690320() {
   double input = -0.875087;
   input += synapse0x268b1b0();
   input += synapse0x268b1f0();
   input += synapse0x26905d0();
   input += synapse0x2690610();
   input += synapse0x2690650();
   input += synapse0x2690690();
   input += synapse0x26906d0();
   input += synapse0x2690710();
   input += synapse0x2690750();
   input += synapse0x2690790();
   input += synapse0x26907d0();
   input += synapse0x2690810();
   input += synapse0x2690850();
   input += synapse0x2690890();
   input += synapse0x26908d0();
   input += synapse0x2690910();
   input += synapse0x268b120();
   input += synapse0x268b160();
   input += synapse0x24464e0();
   input += synapse0x2446520();
   input += synapse0x2690b70();
   input += synapse0x2690bb0();
   input += synapse0x2690bf0();
   input += synapse0x2690c30();
   return input;
}

double NNfunction_sb_cLdR::neuron0x2690320() {
   double input = input0x2690320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x2690c70() {
   double input = -1.8861;
   input += synapse0x2690fb0();
   input += synapse0x2690ff0();
   input += synapse0x2691030();
   input += synapse0x2691070();
   input += synapse0x26910b0();
   input += synapse0x26910f0();
   input += synapse0x2691130();
   input += synapse0x2691170();
   input += synapse0x26911b0();
   input += synapse0x2690a60();
   input += synapse0x2690aa0();
   input += synapse0x2690ae0();
   input += synapse0x2690b20();
   input += synapse0x2691400();
   input += synapse0x2691440();
   input += synapse0x2691480();
   input += synapse0x2690e00();
   input += synapse0x2690e40();
   input += synapse0x26915d0();
   input += synapse0x2691610();
   input += synapse0x2691650();
   input += synapse0x2691690();
   input += synapse0x26916d0();
   input += synapse0x2691710();
   return input;
}

double NNfunction_sb_cLdR::neuron0x2690c70() {
   double input = input0x2690c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x2691750() {
   double input = 0.443641;
   input += synapse0x2691a90();
   input += synapse0x2691ad0();
   input += synapse0x2691b10();
   input += synapse0x2691b50();
   input += synapse0x2691b90();
   input += synapse0x2691bd0();
   input += synapse0x2691c10();
   input += synapse0x2691c50();
   input += synapse0x2691c90();
   input += synapse0x2691cd0();
   input += synapse0x2691d10();
   input += synapse0x2691d50();
   input += synapse0x2691d90();
   input += synapse0x2691dd0();
   input += synapse0x2691e10();
   input += synapse0x2691e50();
   input += synapse0x26918e0();
   input += synapse0x2691920();
   input += synapse0x2446b80();
   input += synapse0x2454450();
   input += synapse0x2454490();
   input += synapse0x267a380();
   input += synapse0x267a3c0();
   input += synapse0x267a400();
   return input;
}

double NNfunction_sb_cLdR::neuron0x2691750() {
   double input = input0x2691750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x26911f0() {
   double input = -0.655131;
   input += synapse0x2454cd0();
   input += synapse0x2691380();
   input += synapse0x26913c0();
   input += synapse0x2691fa0();
   input += synapse0x2691fe0();
   input += synapse0x2692020();
   input += synapse0x2692060();
   input += synapse0x26920a0();
   input += synapse0x26920e0();
   input += synapse0x2692120();
   input += synapse0x2692160();
   input += synapse0x26921a0();
   input += synapse0x26921e0();
   input += synapse0x2692220();
   input += synapse0x2692260();
   input += synapse0x26922a0();
   input += synapse0x268b230();
   input += synapse0x268b270();
   input += synapse0x268b2b0();
   input += synapse0x26923f0();
   input += synapse0x2692430();
   input += synapse0x2692470();
   input += synapse0x26924b0();
   input += synapse0x26924f0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x26911f0() {
   double input = input0x26911f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x2692530() {
   double input = 0.297833;
   input += synapse0x2692870();
   input += synapse0x26928b0();
   input += synapse0x26928f0();
   input += synapse0x2692930();
   input += synapse0x2692970();
   input += synapse0x26929b0();
   input += synapse0x26929f0();
   input += synapse0x2692a30();
   input += synapse0x2692a70();
   input += synapse0x2692ab0();
   input += synapse0x2692af0();
   input += synapse0x2692b30();
   input += synapse0x2692b70();
   input += synapse0x2692bb0();
   input += synapse0x2692bf0();
   input += synapse0x2692c30();
   input += synapse0x26926c0();
   input += synapse0x2692700();
   input += synapse0x2692d80();
   input += synapse0x2692dc0();
   input += synapse0x2692e00();
   input += synapse0x2692e40();
   input += synapse0x2692e80();
   input += synapse0x2692ec0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x2692530() {
   double input = input0x2692530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x2692f00() {
   double input = 0.979016;
   input += synapse0x2693240();
   input += synapse0x2693280();
   input += synapse0x26932c0();
   input += synapse0x2693300();
   input += synapse0x2693340();
   input += synapse0x2693380();
   input += synapse0x26933c0();
   input += synapse0x2693400();
   input += synapse0x2693440();
   input += synapse0x24547a0();
   input += synapse0x24547e0();
   input += synapse0x2454820();
   input += synapse0x2454860();
   input += synapse0x24548a0();
   input += synapse0x24548e0();
   input += synapse0x2454920();
   input += synapse0x2693090();
   input += synapse0x26930d0();
   input += synapse0x2454a70();
   input += synapse0x2454ab0();
   input += synapse0x2454af0();
   input += synapse0x2454b30();
   input += synapse0x2454b70();
   input += synapse0x2693c90();
   return input;
}

double NNfunction_sb_cLdR::neuron0x2692f00() {
   double input = input0x2692f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x2693cd0() {
   double input = 3.0892;
   input += synapse0x2694010();
   input += synapse0x2694050();
   input += synapse0x2694090();
   input += synapse0x26940d0();
   input += synapse0x2694110();
   input += synapse0x2694150();
   input += synapse0x2694190();
   input += synapse0x26941d0();
   input += synapse0x2694210();
   input += synapse0x2694250();
   input += synapse0x2694290();
   input += synapse0x26942d0();
   input += synapse0x2694310();
   input += synapse0x2694350();
   input += synapse0x2694390();
   input += synapse0x26943d0();
   input += synapse0x2693e60();
   input += synapse0x2693ea0();
   input += synapse0x2694520();
   input += synapse0x2694560();
   input += synapse0x26945a0();
   input += synapse0x26945e0();
   input += synapse0x2694620();
   input += synapse0x2694660();
   return input;
}

double NNfunction_sb_cLdR::neuron0x2693cd0() {
   double input = input0x2693cd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x26946a0() {
   double input = -0.650661;
   input += synapse0x26949e0();
   input += synapse0x2694a20();
   input += synapse0x2694a60();
   input += synapse0x2694aa0();
   input += synapse0x2694ae0();
   input += synapse0x2694b20();
   input += synapse0x2694b60();
   input += synapse0x2694ba0();
   input += synapse0x2694be0();
   input += synapse0x2694c20();
   input += synapse0x2694c60();
   input += synapse0x2694ca0();
   input += synapse0x2694ce0();
   input += synapse0x2694d20();
   input += synapse0x2694d60();
   input += synapse0x2694da0();
   input += synapse0x2694830();
   input += synapse0x2694870();
   input += synapse0x2694ef0();
   input += synapse0x2694f30();
   input += synapse0x2694f70();
   input += synapse0x2694fb0();
   input += synapse0x2694ff0();
   input += synapse0x2695030();
   return input;
}

double NNfunction_sb_cLdR::neuron0x26946a0() {
   double input = input0x26946a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x2695070() {
   double input = 2.41386;
   input += synapse0x268eb40();
   input += synapse0x268eb80();
   input += synapse0x268ebc0();
   input += synapse0x268ec00();
   input += synapse0x26955c0();
   input += synapse0x2695600();
   input += synapse0x2695640();
   input += synapse0x2695680();
   input += synapse0x26956c0();
   input += synapse0x2695700();
   input += synapse0x2695740();
   input += synapse0x2695780();
   input += synapse0x26957c0();
   input += synapse0x2695800();
   input += synapse0x2695840();
   input += synapse0x2695880();
   input += synapse0x2695200();
   input += synapse0x2695240();
   input += synapse0x26959d0();
   input += synapse0x2695a10();
   input += synapse0x2695a50();
   input += synapse0x2695a90();
   input += synapse0x2695ad0();
   input += synapse0x2695b10();
   return input;
}

double NNfunction_sb_cLdR::neuron0x2695070() {
   double input = input0x2695070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x2695b50() {
   double input = -0.955035;
   input += synapse0x2695e90();
   input += synapse0x2695ed0();
   input += synapse0x2695f10();
   input += synapse0x2695f50();
   input += synapse0x2695f90();
   input += synapse0x2695fd0();
   input += synapse0x2696010();
   input += synapse0x2696050();
   input += synapse0x2696090();
   input += synapse0x26960d0();
   input += synapse0x2696110();
   input += synapse0x2696150();
   input += synapse0x2696190();
   input += synapse0x26961d0();
   input += synapse0x2696210();
   input += synapse0x2696250();
   input += synapse0x2695ce0();
   input += synapse0x2695d20();
   input += synapse0x26963a0();
   input += synapse0x26963e0();
   input += synapse0x2696420();
   input += synapse0x2696460();
   input += synapse0x26964a0();
   input += synapse0x26964e0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x2695b50() {
   double input = input0x2695b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x2696520() {
   double input = 3.68883;
   input += synapse0x2696860();
   input += synapse0x26968a0();
   input += synapse0x26968e0();
   input += synapse0x2696920();
   input += synapse0x2696960();
   input += synapse0x26969a0();
   input += synapse0x26969e0();
   input += synapse0x2696a20();
   input += synapse0x2696a60();
   input += synapse0x2696aa0();
   input += synapse0x2696ae0();
   input += synapse0x2696b20();
   input += synapse0x2696b60();
   input += synapse0x2696ba0();
   input += synapse0x2696be0();
   input += synapse0x2696c20();
   input += synapse0x26966b0();
   input += synapse0x26966f0();
   input += synapse0x2693480();
   input += synapse0x26934c0();
   input += synapse0x2693500();
   input += synapse0x2693540();
   input += synapse0x2693580();
   input += synapse0x26935c0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x2696520() {
   double input = input0x2696520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x2693600() {
   double input = 0.968251;
   input += synapse0x2693940();
   input += synapse0x2693980();
   input += synapse0x26939c0();
   input += synapse0x2693a00();
   input += synapse0x2693a40();
   input += synapse0x2693a80();
   input += synapse0x2693ac0();
   input += synapse0x2693b00();
   input += synapse0x2693b40();
   input += synapse0x2693b80();
   input += synapse0x2693bc0();
   input += synapse0x2693c00();
   input += synapse0x2693c40();
   input += synapse0x2697d80();
   input += synapse0x2697dc0();
   input += synapse0x2697e00();
   input += synapse0x2693790();
   input += synapse0x26937d0();
   input += synapse0x2697f50();
   input += synapse0x2697f90();
   input += synapse0x2697fd0();
   input += synapse0x2698010();
   input += synapse0x2698050();
   input += synapse0x2698090();
   return input;
}

double NNfunction_sb_cLdR::neuron0x2693600() {
   double input = input0x2693600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x26980d0() {
   double input = -1.03446;
   input += synapse0x2698410();
   input += synapse0x2698450();
   input += synapse0x2698490();
   input += synapse0x26984d0();
   input += synapse0x2698510();
   input += synapse0x2698550();
   input += synapse0x2698590();
   input += synapse0x26985d0();
   input += synapse0x2698610();
   input += synapse0x2698650();
   input += synapse0x2698690();
   input += synapse0x26986d0();
   input += synapse0x2698710();
   input += synapse0x2698750();
   input += synapse0x2698790();
   input += synapse0x26987d0();
   input += synapse0x2698260();
   input += synapse0x26982a0();
   input += synapse0x2698920();
   input += synapse0x2698960();
   input += synapse0x26989a0();
   input += synapse0x26989e0();
   input += synapse0x2698a20();
   input += synapse0x2698a60();
   return input;
}

double NNfunction_sb_cLdR::neuron0x26980d0() {
   double input = input0x26980d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x2698aa0() {
   double input = -1.14173;
   input += synapse0x2698de0();
   input += synapse0x2698e20();
   input += synapse0x2698e60();
   input += synapse0x2698ea0();
   input += synapse0x2698ee0();
   input += synapse0x2698f20();
   input += synapse0x2698f60();
   input += synapse0x2698fa0();
   input += synapse0x2698fe0();
   input += synapse0x2699020();
   input += synapse0x2699060();
   input += synapse0x26990a0();
   input += synapse0x26990e0();
   input += synapse0x2699120();
   input += synapse0x2699160();
   input += synapse0x26991a0();
   input += synapse0x2698c30();
   input += synapse0x2698c70();
   input += synapse0x26992f0();
   input += synapse0x2699330();
   input += synapse0x2699370();
   input += synapse0x26993b0();
   input += synapse0x26993f0();
   input += synapse0x2699430();
   return input;
}

double NNfunction_sb_cLdR::neuron0x2698aa0() {
   double input = input0x2698aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x2699470() {
   double input = 0.132243;
   input += synapse0x26997b0();
   input += synapse0x26997f0();
   input += synapse0x2699830();
   input += synapse0x2699870();
   input += synapse0x26998b0();
   input += synapse0x26998f0();
   input += synapse0x2699930();
   input += synapse0x2699970();
   input += synapse0x26999b0();
   input += synapse0x26999f0();
   input += synapse0x2699a30();
   input += synapse0x2699a70();
   input += synapse0x2699ab0();
   input += synapse0x2699af0();
   input += synapse0x2699b30();
   input += synapse0x2699b70();
   input += synapse0x2699600();
   input += synapse0x2699640();
   input += synapse0x2699cc0();
   input += synapse0x2699d00();
   input += synapse0x2699d40();
   input += synapse0x2699d80();
   input += synapse0x2699dc0();
   input += synapse0x2699e00();
   return input;
}

double NNfunction_sb_cLdR::neuron0x2699470() {
   double input = input0x2699470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x2699e40() {
   double input = 0.634792;
   input += synapse0x269a180();
   input += synapse0x268b510();
   input += synapse0x268b550();
   input += synapse0x268b850();
   input += synapse0x268b890();
   input += synapse0x268bb90();
   input += synapse0x268bbd0();
   input += synapse0x268bed0();
   input += synapse0x268bf10();
   input += synapse0x268c210();
   input += synapse0x268c250();
   input += synapse0x268c550();
   input += synapse0x268c590();
   input += synapse0x268c890();
   input += synapse0x268c8d0();
   input += synapse0x268cbd0();
   input += synapse0x268cc10();
   input += synapse0x268cf10();
   input += synapse0x268cf50();
   input += synapse0x268d250();
   input += synapse0x268d290();
   input += synapse0x268d590();
   input += synapse0x268d5d0();
   input += synapse0x268d8d0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x2699e40() {
   double input = input0x2699e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x269bc50() {
   double input = 2.39432;
   input += synapse0x268d910();
   input += synapse0x268e5d0();
   input += synapse0x268e610();
   input += synapse0x2699fd0();
   input += synapse0x269a010();
   input += synapse0x268e910();
   input += synapse0x268e950();
   input += synapse0x24463c0();
   input += synapse0x2446400();
   input += synapse0x268f090();
   input += synapse0x268f0d0();
   input += synapse0x268f3d0();
   input += synapse0x268f410();
   input += synapse0x268f710();
   input += synapse0x268f750();
   input += synapse0x268fa50();
   input += synapse0x268fa90();
   input += synapse0x268fd90();
   input += synapse0x268fdd0();
   input += synapse0x26900d0();
   input += synapse0x2690110();
   input += synapse0x268dc10();
   input += synapse0x268dc50();
   input += synapse0x269bef0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x269bc50() {
   double input = input0x269bc50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x269bf30() {
   double input = -0.792241;
   input += synapse0x269c270();
   input += synapse0x269c2b0();
   input += synapse0x269c2f0();
   input += synapse0x269c330();
   input += synapse0x269c370();
   input += synapse0x269c3b0();
   input += synapse0x269c3f0();
   input += synapse0x269c430();
   input += synapse0x269c470();
   input += synapse0x269c4b0();
   input += synapse0x269c4f0();
   input += synapse0x269c530();
   input += synapse0x269c570();
   input += synapse0x269c5b0();
   input += synapse0x269c5f0();
   input += synapse0x269c630();
   input += synapse0x269c0c0();
   input += synapse0x269c100();
   input += synapse0x269c780();
   input += synapse0x269c7c0();
   input += synapse0x269c800();
   input += synapse0x269c840();
   input += synapse0x269c880();
   input += synapse0x269c8c0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x269bf30() {
   double input = input0x269bf30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x269c900() {
   double input = 0.0924899;
   input += synapse0x269cc40();
   input += synapse0x269cc80();
   input += synapse0x269ccc0();
   input += synapse0x269cd00();
   input += synapse0x269cd40();
   input += synapse0x269cd80();
   input += synapse0x269cdc0();
   input += synapse0x269ce00();
   input += synapse0x269ce40();
   input += synapse0x269ce80();
   input += synapse0x269cec0();
   input += synapse0x269cf00();
   input += synapse0x269cf40();
   input += synapse0x269cf80();
   input += synapse0x269cfc0();
   input += synapse0x269d000();
   input += synapse0x269ca90();
   input += synapse0x269cad0();
   input += synapse0x269d150();
   input += synapse0x269d190();
   input += synapse0x269d1d0();
   input += synapse0x269d210();
   input += synapse0x269d250();
   input += synapse0x269d290();
   return input;
}

double NNfunction_sb_cLdR::neuron0x269c900() {
   double input = input0x269c900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x269d2d0() {
   double input = -0.815364;
   input += synapse0x269d610();
   input += synapse0x269d650();
   input += synapse0x269d690();
   input += synapse0x269d6d0();
   input += synapse0x269d710();
   input += synapse0x269d750();
   input += synapse0x269d790();
   input += synapse0x269d7d0();
   input += synapse0x269d810();
   input += synapse0x269d850();
   input += synapse0x269d890();
   input += synapse0x269d8d0();
   input += synapse0x269d910();
   input += synapse0x269d950();
   input += synapse0x269d990();
   input += synapse0x269d9d0();
   input += synapse0x269d460();
   input += synapse0x269d4a0();
   input += synapse0x269db20();
   input += synapse0x269db60();
   input += synapse0x269dba0();
   input += synapse0x269dbe0();
   input += synapse0x269dc20();
   input += synapse0x269dc60();
   return input;
}

double NNfunction_sb_cLdR::neuron0x269d2d0() {
   double input = input0x269d2d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x269dca0() {
   double input = -0.520833;
   input += synapse0x269dfe0();
   input += synapse0x269e020();
   input += synapse0x269e060();
   input += synapse0x269e0a0();
   input += synapse0x269e0e0();
   input += synapse0x269e120();
   input += synapse0x269e160();
   input += synapse0x269e1a0();
   input += synapse0x269e1e0();
   input += synapse0x269e220();
   input += synapse0x269e260();
   input += synapse0x269e2a0();
   input += synapse0x269e2e0();
   input += synapse0x269e320();
   input += synapse0x269e360();
   input += synapse0x269e3a0();
   input += synapse0x269de30();
   input += synapse0x269de70();
   input += synapse0x269e4f0();
   input += synapse0x269e530();
   input += synapse0x269e570();
   input += synapse0x269e5b0();
   input += synapse0x269e5f0();
   input += synapse0x269e630();
   return input;
}

double NNfunction_sb_cLdR::neuron0x269dca0() {
   double input = input0x269dca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x269e670() {
   double input = -0.31085;
   input += synapse0x269e9b0();
   input += synapse0x269e9f0();
   input += synapse0x269ea30();
   input += synapse0x269ea70();
   input += synapse0x269eab0();
   input += synapse0x269eaf0();
   input += synapse0x269eb30();
   input += synapse0x269eb70();
   input += synapse0x269ebb0();
   input += synapse0x2696d70();
   input += synapse0x2696db0();
   input += synapse0x2696df0();
   input += synapse0x2696e30();
   input += synapse0x2696e70();
   input += synapse0x2696eb0();
   input += synapse0x2696ef0();
   input += synapse0x269e800();
   input += synapse0x269e840();
   input += synapse0x2697040();
   input += synapse0x2697080();
   input += synapse0x26970c0();
   input += synapse0x2697100();
   input += synapse0x2697140();
   input += synapse0x2697180();
   return input;
}

double NNfunction_sb_cLdR::neuron0x269e670() {
   double input = input0x269e670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x26971c0() {
   double input = 4.48829;
   input += synapse0x2697500();
   input += synapse0x2697540();
   input += synapse0x2697580();
   input += synapse0x26975c0();
   input += synapse0x2697600();
   input += synapse0x2697640();
   input += synapse0x2697680();
   input += synapse0x26976c0();
   input += synapse0x2697700();
   input += synapse0x2697740();
   input += synapse0x2697780();
   input += synapse0x26977c0();
   input += synapse0x2697800();
   input += synapse0x2697840();
   input += synapse0x2697880();
   input += synapse0x26978c0();
   input += synapse0x2697350();
   input += synapse0x2697390();
   input += synapse0x2697a10();
   input += synapse0x2697a50();
   input += synapse0x2697a90();
   input += synapse0x2697ad0();
   input += synapse0x2697b10();
   input += synapse0x2697b50();
   return input;
}

double NNfunction_sb_cLdR::neuron0x26971c0() {
   double input = input0x26971c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x2697b90() {
   double input = -0.532163;
   input += synapse0x2697d20();
   input += synapse0x26a0db0();
   input += synapse0x26a0df0();
   input += synapse0x26a0e30();
   input += synapse0x26a0e70();
   input += synapse0x26a0eb0();
   input += synapse0x26a0ef0();
   input += synapse0x26a0f30();
   input += synapse0x26a0f70();
   input += synapse0x26a0fb0();
   input += synapse0x26a0ff0();
   input += synapse0x26a1030();
   input += synapse0x26a1070();
   input += synapse0x26a10b0();
   input += synapse0x26a10f0();
   input += synapse0x26a1130();
   input += synapse0x26a0c00();
   input += synapse0x26a0c40();
   input += synapse0x26a1280();
   input += synapse0x26a12c0();
   input += synapse0x26a1300();
   input += synapse0x26a1340();
   input += synapse0x26a1380();
   input += synapse0x26a13c0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x2697b90() {
   double input = input0x2697b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x26a1400() {
   double input = -0.446054;
   input += synapse0x26a1740();
   input += synapse0x26a1780();
   input += synapse0x26a17c0();
   input += synapse0x26a1800();
   input += synapse0x26a1840();
   input += synapse0x26a1880();
   input += synapse0x26a18c0();
   input += synapse0x26a1900();
   input += synapse0x26a1940();
   input += synapse0x26a1980();
   input += synapse0x26a19c0();
   input += synapse0x26a1a00();
   input += synapse0x26a1a40();
   input += synapse0x26a1a80();
   input += synapse0x26a1ac0();
   input += synapse0x26a1b00();
   input += synapse0x26a1590();
   input += synapse0x26a15d0();
   input += synapse0x26a1c50();
   input += synapse0x26a1c90();
   input += synapse0x26a1cd0();
   input += synapse0x26a1d10();
   input += synapse0x26a1d50();
   input += synapse0x26a1d90();
   return input;
}

double NNfunction_sb_cLdR::neuron0x26a1400() {
   double input = input0x26a1400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x26a1dd0() {
   double input = -1.25383;
   input += synapse0x26a2110();
   input += synapse0x26a2150();
   input += synapse0x26a2190();
   input += synapse0x26a21d0();
   input += synapse0x26a2210();
   input += synapse0x26a2250();
   input += synapse0x26a2290();
   input += synapse0x26a22d0();
   input += synapse0x26a2310();
   input += synapse0x26a2350();
   input += synapse0x26a2390();
   input += synapse0x26a23d0();
   input += synapse0x26a2410();
   input += synapse0x26a2450();
   input += synapse0x26a2490();
   input += synapse0x26a24d0();
   input += synapse0x26a1f60();
   input += synapse0x26a1fa0();
   input += synapse0x26a2620();
   input += synapse0x26a2660();
   input += synapse0x26a26a0();
   input += synapse0x26a26e0();
   input += synapse0x26a2720();
   input += synapse0x26a2760();
   return input;
}

double NNfunction_sb_cLdR::neuron0x26a1dd0() {
   double input = input0x26a1dd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x26a27a0() {
   double input = 0.607412;
   input += synapse0x26a2ae0();
   input += synapse0x26a2b20();
   input += synapse0x26a2b60();
   input += synapse0x26a2ba0();
   input += synapse0x26a2be0();
   input += synapse0x26a2c20();
   input += synapse0x26a2c60();
   input += synapse0x26a2ca0();
   input += synapse0x26a2ce0();
   input += synapse0x26a2d20();
   input += synapse0x26a2d60();
   input += synapse0x26a2da0();
   input += synapse0x26a2de0();
   input += synapse0x26a2e20();
   input += synapse0x26a2e60();
   input += synapse0x26a2ea0();
   input += synapse0x26a2930();
   input += synapse0x26a2970();
   input += synapse0x26a2ff0();
   input += synapse0x26a3030();
   input += synapse0x26a3070();
   input += synapse0x26a30b0();
   input += synapse0x26a30f0();
   input += synapse0x26a3130();
   return input;
}

double NNfunction_sb_cLdR::neuron0x26a27a0() {
   double input = input0x26a27a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x26a3170() {
   double input = 1.11015;
   input += synapse0x26a34b0();
   input += synapse0x26a34f0();
   input += synapse0x26a3530();
   input += synapse0x26a3570();
   input += synapse0x26a35b0();
   input += synapse0x26a35f0();
   input += synapse0x26a3630();
   input += synapse0x26a3670();
   input += synapse0x26a36b0();
   input += synapse0x26a36f0();
   input += synapse0x26a3730();
   input += synapse0x26a3770();
   input += synapse0x26a37b0();
   input += synapse0x26a37f0();
   input += synapse0x26a3830();
   input += synapse0x26a3870();
   input += synapse0x26a3300();
   input += synapse0x26a3340();
   input += synapse0x26a39c0();
   input += synapse0x26a3a00();
   input += synapse0x26a3a40();
   input += synapse0x26a3a80();
   input += synapse0x26a3ac0();
   input += synapse0x26a3b00();
   return input;
}

double NNfunction_sb_cLdR::neuron0x26a3170() {
   double input = input0x26a3170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x26a3b40() {
   double input = -0.205156;
   input += synapse0x26a3e80();
   input += synapse0x26a3ec0();
   input += synapse0x26a3f00();
   input += synapse0x26a3f40();
   input += synapse0x26a3f80();
   input += synapse0x26a3fc0();
   input += synapse0x26a4000();
   input += synapse0x26a4040();
   input += synapse0x26a4080();
   input += synapse0x26a40c0();
   input += synapse0x26a4100();
   input += synapse0x26a4140();
   input += synapse0x26a4180();
   input += synapse0x26a41c0();
   input += synapse0x26a4200();
   input += synapse0x26a4240();
   input += synapse0x26a3cd0();
   input += synapse0x26a3d10();
   input += synapse0x26a4390();
   input += synapse0x26a43d0();
   input += synapse0x26a4410();
   input += synapse0x26a4450();
   input += synapse0x26a4490();
   input += synapse0x26a44d0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x26a3b40() {
   double input = input0x26a3b40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x26a4510() {
   double input = -0.35563;
   input += synapse0x26a4850();
   input += synapse0x26a4890();
   input += synapse0x26a48d0();
   input += synapse0x26a4910();
   input += synapse0x26a4950();
   input += synapse0x26a4990();
   input += synapse0x26a49d0();
   input += synapse0x26a4a10();
   input += synapse0x26a4a50();
   input += synapse0x26a4a90();
   input += synapse0x26a4ad0();
   input += synapse0x26a4b10();
   input += synapse0x26a4b50();
   input += synapse0x26a4b90();
   input += synapse0x26a4bd0();
   input += synapse0x26a4c10();
   input += synapse0x26a46a0();
   input += synapse0x26a46e0();
   input += synapse0x26a4d60();
   input += synapse0x26a4da0();
   input += synapse0x26a4de0();
   input += synapse0x26a4e20();
   input += synapse0x26a4e60();
   input += synapse0x26a4ea0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x26a4510() {
   double input = input0x26a4510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x26a4ee0() {
   double input = 1.83865;
   input += synapse0x26a5220();
   input += synapse0x26a5260();
   input += synapse0x26a52a0();
   input += synapse0x26a52e0();
   input += synapse0x26a5320();
   input += synapse0x26a5360();
   input += synapse0x26a53a0();
   input += synapse0x26a53e0();
   input += synapse0x26a5420();
   input += synapse0x26a5460();
   input += synapse0x26a54a0();
   input += synapse0x26a54e0();
   input += synapse0x26a5520();
   input += synapse0x26a5560();
   input += synapse0x26a55a0();
   input += synapse0x26a55e0();
   input += synapse0x26a5070();
   input += synapse0x26a50b0();
   input += synapse0x26a5730();
   input += synapse0x26a5770();
   input += synapse0x26a57b0();
   input += synapse0x26a57f0();
   input += synapse0x26a5830();
   input += synapse0x26a5870();
   return input;
}

double NNfunction_sb_cLdR::neuron0x26a4ee0() {
   double input = input0x26a4ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x26a58b0() {
   double input = 0.967226;
   input += synapse0x26a5bf0();
   input += synapse0x269a1c0();
   input += synapse0x269a200();
   input += synapse0x269a240();
   input += synapse0x269a490();
   input += synapse0x269a4d0();
   input += synapse0x269a510();
   input += synapse0x269a760();
   input += synapse0x269a7a0();
   input += synapse0x269a9f0();
   input += synapse0x269aa30();
   input += synapse0x269aa70();
   input += synapse0x269acc0();
   input += synapse0x269ad00();
   input += synapse0x269af50();
   input += synapse0x269af90();
   input += synapse0x26a5a40();
   input += synapse0x26a5a80();
   input += synapse0x269b0e0();
   input += synapse0x269b5f0();
   input += synapse0x269b630();
   input += synapse0x269b670();
   input += synapse0x269b8c0();
   input += synapse0x269b900();
   return input;
}

double NNfunction_sb_cLdR::neuron0x26a58b0() {
   double input = input0x26a58b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x269b940() {
   double input = 0.499118;
   input += synapse0x269b1b0();
   input += synapse0x269b1f0();
   input += synapse0x269b230();
   input += synapse0x269b270();
   input += synapse0x269bbf0();
   input += synapse0x26a7f40();
   input += synapse0x26a7f80();
   input += synapse0x26a7fc0();
   input += synapse0x26a8000();
   input += synapse0x26a8040();
   input += synapse0x26a8080();
   input += synapse0x26a80c0();
   input += synapse0x26a8100();
   input += synapse0x26a8140();
   input += synapse0x26a8180();
   input += synapse0x26a81c0();
   input += synapse0x269bad0();
   input += synapse0x269bb10();
   input += synapse0x26a8310();
   input += synapse0x26a8350();
   input += synapse0x26a8390();
   input += synapse0x26a83d0();
   input += synapse0x26a8410();
   input += synapse0x26a8450();
   return input;
}

double NNfunction_sb_cLdR::neuron0x269b940() {
   double input = input0x269b940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x26a8490() {
   double input = 0.802942;
   input += synapse0x26a87d0();
   input += synapse0x26a8810();
   input += synapse0x26a8850();
   input += synapse0x26a8890();
   input += synapse0x26a88d0();
   input += synapse0x26a8910();
   input += synapse0x26a8950();
   input += synapse0x26a8990();
   input += synapse0x26a89d0();
   input += synapse0x26a8a10();
   input += synapse0x26a8a50();
   input += synapse0x26a8a90();
   input += synapse0x26a8ad0();
   input += synapse0x26a8b10();
   input += synapse0x26a8b50();
   input += synapse0x26a8b90();
   input += synapse0x26a8620();
   input += synapse0x26a8660();
   input += synapse0x26a8ce0();
   input += synapse0x26a8d20();
   input += synapse0x26a8d60();
   input += synapse0x26a8da0();
   input += synapse0x26a8de0();
   input += synapse0x26a8e20();
   return input;
}

double NNfunction_sb_cLdR::neuron0x26a8490() {
   double input = input0x26a8490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x26a8e60() {
   double input = -1.34475;
   input += synapse0x26a91a0();
   input += synapse0x26a91e0();
   input += synapse0x26a9220();
   input += synapse0x26a9260();
   input += synapse0x26a92a0();
   input += synapse0x26a92e0();
   input += synapse0x26a9320();
   input += synapse0x26a9360();
   input += synapse0x26a93a0();
   input += synapse0x26a93e0();
   input += synapse0x26a9420();
   input += synapse0x26a9460();
   input += synapse0x26a94a0();
   input += synapse0x26a94e0();
   input += synapse0x26a9520();
   input += synapse0x26a9560();
   input += synapse0x26a8ff0();
   input += synapse0x26a9030();
   input += synapse0x26a96b0();
   input += synapse0x26a96f0();
   input += synapse0x26a9730();
   input += synapse0x26a9770();
   input += synapse0x26a97b0();
   input += synapse0x26a97f0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x26a8e60() {
   double input = input0x26a8e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x26a9830() {
   double input = 0.325737;
   input += synapse0x26a9b70();
   input += synapse0x26a9bb0();
   input += synapse0x26a9bf0();
   input += synapse0x26a9c30();
   input += synapse0x26a9c70();
   input += synapse0x26a9cb0();
   input += synapse0x26a9cf0();
   input += synapse0x26a9d30();
   input += synapse0x26a9d70();
   input += synapse0x26a9db0();
   input += synapse0x26a9df0();
   input += synapse0x26a9e30();
   input += synapse0x26a9e70();
   input += synapse0x26a9eb0();
   input += synapse0x26a9ef0();
   input += synapse0x26a9f30();
   input += synapse0x26a99c0();
   input += synapse0x26a9a00();
   input += synapse0x26aa080();
   input += synapse0x26aa0c0();
   input += synapse0x26aa100();
   input += synapse0x26aa140();
   input += synapse0x26aa180();
   input += synapse0x26aa1c0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x26a9830() {
   double input = input0x26a9830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x26aa200() {
   double input = -0.797239;
   input += synapse0x26aa540();
   input += synapse0x26aa580();
   input += synapse0x26aa5c0();
   input += synapse0x26aa600();
   input += synapse0x26aa640();
   input += synapse0x26aa680();
   input += synapse0x26aa6c0();
   input += synapse0x26aa700();
   input += synapse0x26aa740();
   input += synapse0x26aa780();
   input += synapse0x26aa7c0();
   input += synapse0x26aa800();
   input += synapse0x26aa840();
   input += synapse0x26aa880();
   input += synapse0x26aa8c0();
   input += synapse0x26aa900();
   input += synapse0x26aa390();
   input += synapse0x26aa3d0();
   input += synapse0x26aaa50();
   input += synapse0x26aaa90();
   input += synapse0x26aaad0();
   input += synapse0x26aab10();
   input += synapse0x26aab50();
   input += synapse0x26aab90();
   return input;
}

double NNfunction_sb_cLdR::neuron0x26aa200() {
   double input = input0x26aa200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x26aabd0() {
   double input = 3.66839;
   input += synapse0x26aaf10();
   input += synapse0x26aaf50();
   input += synapse0x26aaf90();
   input += synapse0x26aafd0();
   input += synapse0x26ab010();
   input += synapse0x26ab050();
   input += synapse0x26ab090();
   input += synapse0x26ab0d0();
   input += synapse0x26ab110();
   input += synapse0x26ab150();
   input += synapse0x26ab190();
   input += synapse0x26ab1d0();
   input += synapse0x26ab210();
   input += synapse0x26ab250();
   input += synapse0x26ab290();
   input += synapse0x26ab2d0();
   input += synapse0x26aad60();
   input += synapse0x26aada0();
   input += synapse0x26ab420();
   input += synapse0x26ab460();
   input += synapse0x26ab4a0();
   input += synapse0x26ab4e0();
   input += synapse0x26ab520();
   input += synapse0x26ab560();
   return input;
}

double NNfunction_sb_cLdR::neuron0x26aabd0() {
   double input = input0x26aabd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x26ab5a0() {
   double input = 0.127034;
   input += synapse0x26ab8e0();
   input += synapse0x26ab920();
   input += synapse0x26ab960();
   input += synapse0x26ab9a0();
   input += synapse0x26ab9e0();
   input += synapse0x26aba20();
   input += synapse0x26aba60();
   input += synapse0x26abaa0();
   input += synapse0x26abae0();
   input += synapse0x26abb20();
   input += synapse0x26abb60();
   input += synapse0x26abba0();
   input += synapse0x26abbe0();
   input += synapse0x26abc20();
   input += synapse0x26abc60();
   input += synapse0x26abca0();
   input += synapse0x26ab730();
   input += synapse0x26ab770();
   input += synapse0x26abdf0();
   input += synapse0x26abe30();
   input += synapse0x26abe70();
   input += synapse0x26abeb0();
   input += synapse0x26abef0();
   input += synapse0x26abf30();
   return input;
}

double NNfunction_sb_cLdR::neuron0x26ab5a0() {
   double input = input0x26ab5a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x26abf70() {
   double input = 2.82699;
   input += synapse0x26ac2b0();
   input += synapse0x26ac2f0();
   input += synapse0x26ac330();
   input += synapse0x26ac370();
   input += synapse0x26ac3b0();
   input += synapse0x26ac3f0();
   input += synapse0x26ac430();
   input += synapse0x26ac470();
   input += synapse0x26ac4b0();
   input += synapse0x26ac4f0();
   input += synapse0x26ac530();
   input += synapse0x26ac570();
   input += synapse0x26ac5b0();
   input += synapse0x26ac5f0();
   input += synapse0x26ac630();
   input += synapse0x26ac670();
   input += synapse0x26ac100();
   input += synapse0x26ac140();
   input += synapse0x26ac7c0();
   input += synapse0x26ac800();
   input += synapse0x26ac840();
   input += synapse0x26ac880();
   input += synapse0x26ac8c0();
   input += synapse0x26ac900();
   return input;
}

double NNfunction_sb_cLdR::neuron0x26abf70() {
   double input = input0x26abf70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x26ac940() {
   double input = 1.63841;
   input += synapse0x26953b0();
   input += synapse0x26953f0();
   input += synapse0x2695430();
   input += synapse0x2695470();
   input += synapse0x26954b0();
   input += synapse0x26954f0();
   input += synapse0x2695530();
   input += synapse0x2695570();
   input += synapse0x26ad090();
   input += synapse0x26ad0d0();
   input += synapse0x26ad110();
   input += synapse0x26ad150();
   input += synapse0x26ad190();
   input += synapse0x26ad1d0();
   input += synapse0x26ad210();
   input += synapse0x26ad250();
   input += synapse0x26acad0();
   input += synapse0x26acb10();
   input += synapse0x26ad3a0();
   input += synapse0x26ad3e0();
   input += synapse0x26ad420();
   input += synapse0x26ad460();
   input += synapse0x26ad4a0();
   input += synapse0x26ad4e0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x26ac940() {
   double input = input0x26ac940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x26ad520() {
   double input = -0.500747;
   input += synapse0x26ad860();
   input += synapse0x26ad8a0();
   input += synapse0x26ad8e0();
   input += synapse0x26ad920();
   input += synapse0x26ad960();
   input += synapse0x26ad9a0();
   input += synapse0x26ad9e0();
   input += synapse0x26ada20();
   input += synapse0x26ada60();
   input += synapse0x26adaa0();
   input += synapse0x26adae0();
   input += synapse0x26adb20();
   input += synapse0x26adb60();
   input += synapse0x26adba0();
   input += synapse0x26adbe0();
   input += synapse0x26adc20();
   input += synapse0x26ad6b0();
   input += synapse0x26ad6f0();
   input += synapse0x26add70();
   input += synapse0x26addb0();
   input += synapse0x26addf0();
   input += synapse0x26ade30();
   input += synapse0x26ade70();
   input += synapse0x26adeb0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x26ad520() {
   double input = input0x26ad520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x26adef0() {
   double input = -0.705336;
   input += synapse0x26ae230();
   input += synapse0x26ae270();
   input += synapse0x26ae2b0();
   input += synapse0x26ae2f0();
   input += synapse0x26ae330();
   input += synapse0x26ae370();
   input += synapse0x26ae3b0();
   input += synapse0x26ae3f0();
   input += synapse0x26ae430();
   input += synapse0x26ae470();
   input += synapse0x26ae4b0();
   input += synapse0x26ae4f0();
   input += synapse0x26ae530();
   input += synapse0x26ae570();
   input += synapse0x26ae5b0();
   input += synapse0x26ae5f0();
   input += synapse0x26ae080();
   input += synapse0x26ae0c0();
   input += synapse0x269ebf0();
   input += synapse0x269ec30();
   input += synapse0x269ec70();
   input += synapse0x269ecb0();
   input += synapse0x269ecf0();
   input += synapse0x269ed30();
   return input;
}

double NNfunction_sb_cLdR::neuron0x26adef0() {
   double input = input0x26adef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x269ed70() {
   double input = -0.0935868;
   input += synapse0x269f0b0();
   input += synapse0x269f0f0();
   input += synapse0x269f130();
   input += synapse0x269f170();
   input += synapse0x269f1b0();
   input += synapse0x269f1f0();
   input += synapse0x269f230();
   input += synapse0x269f270();
   input += synapse0x269f2b0();
   input += synapse0x269f2f0();
   input += synapse0x269f330();
   input += synapse0x269f370();
   input += synapse0x269f3b0();
   input += synapse0x269f3f0();
   input += synapse0x269f430();
   input += synapse0x269f470();
   input += synapse0x269ef00();
   input += synapse0x269ef40();
   input += synapse0x269f5c0();
   input += synapse0x269f600();
   input += synapse0x269f640();
   input += synapse0x269f680();
   input += synapse0x269f6c0();
   input += synapse0x269f700();
   return input;
}

double NNfunction_sb_cLdR::neuron0x269ed70() {
   double input = input0x269ed70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x269f740() {
   double input = -0.0389173;
   input += synapse0x269fa80();
   input += synapse0x269fac0();
   input += synapse0x269fb00();
   input += synapse0x269fb40();
   input += synapse0x269fb80();
   input += synapse0x269fbc0();
   input += synapse0x269fc00();
   input += synapse0x269fc40();
   input += synapse0x269fc80();
   input += synapse0x269fcc0();
   input += synapse0x269fd00();
   input += synapse0x269fd40();
   input += synapse0x269fd80();
   input += synapse0x269fdc0();
   input += synapse0x269fe00();
   input += synapse0x269fe40();
   input += synapse0x269f8d0();
   input += synapse0x269f910();
   input += synapse0x269ff90();
   input += synapse0x269ffd0();
   input += synapse0x26a0010();
   input += synapse0x26a0050();
   input += synapse0x26a0090();
   input += synapse0x26a00d0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x269f740() {
   double input = input0x269f740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x26a0110() {
   double input = -0.975234;
   input += synapse0x26a0450();
   input += synapse0x26a0490();
   input += synapse0x26a04d0();
   input += synapse0x26a0510();
   input += synapse0x26a0550();
   input += synapse0x26a0590();
   input += synapse0x26a05d0();
   input += synapse0x26a0610();
   input += synapse0x26a0650();
   input += synapse0x26a0690();
   input += synapse0x26a06d0();
   input += synapse0x26a0710();
   input += synapse0x26a0750();
   input += synapse0x26a0790();
   input += synapse0x26a07d0();
   input += synapse0x26a0810();
   input += synapse0x26a02a0();
   input += synapse0x26a02e0();
   input += synapse0x26a0960();
   input += synapse0x26a09a0();
   input += synapse0x26a09e0();
   input += synapse0x26a0a20();
   input += synapse0x26a0a60();
   input += synapse0x26a0aa0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x26a0110() {
   double input = input0x26a0110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x26b2750() {
   double input = 1.06793;
   input += synapse0x26b2970();
   input += synapse0x26b29b0();
   input += synapse0x26b29f0();
   input += synapse0x26b2a30();
   input += synapse0x26b2a70();
   input += synapse0x26b2ab0();
   input += synapse0x26b2af0();
   input += synapse0x26b2b30();
   input += synapse0x26b2b70();
   input += synapse0x26b2bb0();
   input += synapse0x26b2bf0();
   input += synapse0x26b2c30();
   input += synapse0x26b2c70();
   input += synapse0x26b2cb0();
   input += synapse0x26b2cf0();
   input += synapse0x26b2d30();
   input += synapse0x26a0ae0();
   input += synapse0x26a0b20();
   input += synapse0x26b2e80();
   input += synapse0x26b2ec0();
   input += synapse0x26b2f00();
   input += synapse0x26b2f40();
   input += synapse0x26b2f80();
   input += synapse0x26b2fc0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x26b2750() {
   double input = input0x26b2750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x26b3000() {
   double input = 0.079879;
   input += synapse0x26b3340();
   input += synapse0x26b3380();
   input += synapse0x26b33c0();
   input += synapse0x26b3400();
   input += synapse0x26b3440();
   input += synapse0x26b3480();
   input += synapse0x26b34c0();
   input += synapse0x26b3500();
   input += synapse0x26b3540();
   input += synapse0x26b3580();
   input += synapse0x26b35c0();
   input += synapse0x26b3600();
   input += synapse0x26b3640();
   input += synapse0x26b3680();
   input += synapse0x26b36c0();
   input += synapse0x26b3700();
   input += synapse0x26b3190();
   input += synapse0x26b31d0();
   input += synapse0x26b3850();
   input += synapse0x26b3890();
   input += synapse0x26b38d0();
   input += synapse0x26b3910();
   input += synapse0x26b3950();
   input += synapse0x26b3990();
   return input;
}

double NNfunction_sb_cLdR::neuron0x26b3000() {
   double input = input0x26b3000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x26b39d0() {
   double input = -0.34238;
   input += synapse0x26b3d10();
   input += synapse0x26b3d50();
   input += synapse0x26b3d90();
   input += synapse0x26b3dd0();
   input += synapse0x26b3e10();
   input += synapse0x26b3e50();
   input += synapse0x26b3e90();
   input += synapse0x26b3ed0();
   input += synapse0x26b3f10();
   input += synapse0x26b3f50();
   input += synapse0x26b3f90();
   input += synapse0x26b3fd0();
   input += synapse0x26b4010();
   input += synapse0x26b4050();
   input += synapse0x26b4090();
   input += synapse0x26b40d0();
   input += synapse0x26b3b60();
   input += synapse0x26b3ba0();
   input += synapse0x26b4220();
   input += synapse0x26b4260();
   input += synapse0x26b42a0();
   input += synapse0x26b42e0();
   input += synapse0x26b4320();
   input += synapse0x26b4360();
   return input;
}

double NNfunction_sb_cLdR::neuron0x26b39d0() {
   double input = input0x26b39d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x26b43a0() {
   double input = 0.326359;
   input += synapse0x26b46e0();
   input += synapse0x26b4720();
   input += synapse0x26b4760();
   input += synapse0x26b47a0();
   input += synapse0x26b47e0();
   input += synapse0x26b4820();
   input += synapse0x26b4860();
   input += synapse0x26b48a0();
   input += synapse0x26b48e0();
   input += synapse0x26b4920();
   input += synapse0x26b4960();
   input += synapse0x26b49a0();
   input += synapse0x26b49e0();
   input += synapse0x26b4a20();
   input += synapse0x26b4a60();
   input += synapse0x26b4aa0();
   input += synapse0x26b4530();
   input += synapse0x26b4570();
   input += synapse0x26b4bf0();
   input += synapse0x26b4c30();
   input += synapse0x26b4c70();
   input += synapse0x26b4cb0();
   input += synapse0x26b4cf0();
   input += synapse0x26b4d30();
   return input;
}

double NNfunction_sb_cLdR::neuron0x26b43a0() {
   double input = input0x26b43a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x26bb5a0() {
   double input = -1.01092;
   input += synapse0x2454c40();
   input += synapse0x2454c80();
   input += synapse0x26927e0();
   input += synapse0x2692820();
   input += synapse0x26931b0();
   input += synapse0x26931f0();
   input += synapse0x2693f80();
   input += synapse0x2693fc0();
   input += synapse0x2694950();
   input += synapse0x2694990();
   input += synapse0x2695320();
   input += synapse0x2695360();
   input += synapse0x2695e00();
   input += synapse0x2695e40();
   input += synapse0x26967d0();
   input += synapse0x2696810();
   input += synapse0x26938b0();
   input += synapse0x26938f0();
   input += synapse0x2698380();
   input += synapse0x26983c0();
   input += synapse0x2698d50();
   input += synapse0x2698d90();
   input += synapse0x2699720();
   input += synapse0x2699760();
   input += synapse0x269a0f0();
   input += synapse0x269a130();
   input += synapse0x268e290();
   input += synapse0x268e2d0();
   input += synapse0x269c1e0();
   input += synapse0x269c220();
   input += synapse0x269cbb0();
   input += synapse0x269cbf0();
   input += synapse0x269d580();
   input += synapse0x269d5c0();
   input += synapse0x269df50();
   input += synapse0x269df90();
   input += synapse0x269e920();
   input += synapse0x269e960();
   input += synapse0x2697470();
   input += synapse0x26974b0();
   input += synapse0x26a0d20();
   input += synapse0x26a0d60();
   input += synapse0x26a16b0();
   input += synapse0x26a16f0();
   input += synapse0x26a2080();
   input += synapse0x26a20c0();
   input += synapse0x26a2a50();
   input += synapse0x26a2a90();
   input += synapse0x26a3420();
   input += synapse0x26a3460();
   return input;
}

double NNfunction_sb_cLdR::neuron0x26bb5a0() {
   double input = input0x26bb5a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x26bb940() {
   double input = -1.29324;
   input += synapse0x26a5b60();
   input += synapse0x26a5ba0();
   input += synapse0x269b120();
   input += synapse0x269b160();
   input += synapse0x26a8740();
   input += synapse0x26a8780();
   input += synapse0x26a9110();
   input += synapse0x26a9150();
   input += synapse0x26a9ae0();
   input += synapse0x26a9b20();
   input += synapse0x26aa4b0();
   input += synapse0x26aa4f0();
   input += synapse0x26aae80();
   input += synapse0x26aaec0();
   input += synapse0x26ab850();
   input += synapse0x26ab890();
   input += synapse0x26ac220();
   input += synapse0x26ac260();
   input += synapse0x26acbf0();
   input += synapse0x26acc30();
   input += synapse0x26ad7d0();
   input += synapse0x26ad810();
   input += synapse0x26ae1a0();
   input += synapse0x26ae1e0();
   input += synapse0x269f020();
   input += synapse0x269f060();
   input += synapse0x269f9f0();
   input += synapse0x269fa30();
   input += synapse0x26a03c0();
   input += synapse0x26a0400();
   input += synapse0x26b28e0();
   input += synapse0x26b2920();
   input += synapse0x26b32b0();
   input += synapse0x26b32f0();
   input += synapse0x26b3c80();
   input += synapse0x26b3cc0();
   input += synapse0x26b4650();
   input += synapse0x26b4690();
   input += synapse0x2690540();
   input += synapse0x2690580();
   input += synapse0x26a3df0();
   input += synapse0x26a3e30();
   input += synapse0x26b4d70();
   input += synapse0x26b4db0();
   input += synapse0x26b4df0();
   input += synapse0x26b4e30();
   input += synapse0x26bbce0();
   input += synapse0x26bbd20();
   input += synapse0x26bbd60();
   input += synapse0x26bbda0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x26bb940() {
   double input = input0x26bb940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x26bbde0() {
   double input = 0.340046;
   input += synapse0x26bc120();
   input += synapse0x26bc160();
   input += synapse0x26bc1a0();
   input += synapse0x26bc1e0();
   input += synapse0x26bc220();
   input += synapse0x26bc260();
   input += synapse0x26bc2a0();
   input += synapse0x26bc2e0();
   input += synapse0x26bc320();
   input += synapse0x26bc360();
   input += synapse0x26bc3a0();
   input += synapse0x26bc3e0();
   input += synapse0x26bc420();
   input += synapse0x26bc460();
   input += synapse0x26bc4a0();
   input += synapse0x26bc4e0();
   input += synapse0x26bbf70();
   input += synapse0x26bbfb0();
   input += synapse0x26bc630();
   input += synapse0x26bc670();
   input += synapse0x26bc6b0();
   input += synapse0x26bc6f0();
   input += synapse0x26bc730();
   input += synapse0x26bc770();
   input += synapse0x26bc7b0();
   input += synapse0x26bc7f0();
   input += synapse0x26bc830();
   input += synapse0x26bc870();
   input += synapse0x26bc8b0();
   input += synapse0x26bc8f0();
   input += synapse0x26bc930();
   input += synapse0x26bc970();
   input += synapse0x26bc520();
   input += synapse0x26bc560();
   input += synapse0x26bc5a0();
   input += synapse0x26bc5e0();
   input += synapse0x26bcbc0();
   input += synapse0x26bcc00();
   input += synapse0x26bcc40();
   input += synapse0x26bcc80();
   input += synapse0x26bccc0();
   input += synapse0x26bcd00();
   input += synapse0x26bcd40();
   input += synapse0x26bcd80();
   input += synapse0x26bcdc0();
   input += synapse0x26bce00();
   input += synapse0x26bce40();
   input += synapse0x26bce80();
   input += synapse0x26bcec0();
   input += synapse0x26bcf00();
   return input;
}

double NNfunction_sb_cLdR::neuron0x26bbde0() {
   double input = input0x26bbde0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x26bcf40() {
   double input = 1.1009;
   input += synapse0x26bd280();
   input += synapse0x26bd2c0();
   input += synapse0x26bd300();
   input += synapse0x26bd340();
   input += synapse0x26bd380();
   input += synapse0x26bd3c0();
   input += synapse0x26bd400();
   input += synapse0x26bd440();
   input += synapse0x26bd480();
   input += synapse0x26bd4c0();
   input += synapse0x26bd500();
   input += synapse0x26bd540();
   input += synapse0x26bd580();
   input += synapse0x26bd5c0();
   input += synapse0x26bd600();
   input += synapse0x26bd640();
   input += synapse0x26bd0d0();
   input += synapse0x26bd110();
   input += synapse0x26bd790();
   input += synapse0x26bd7d0();
   input += synapse0x26bd810();
   input += synapse0x26bd850();
   input += synapse0x26bd890();
   input += synapse0x26bd8d0();
   input += synapse0x26bd910();
   input += synapse0x26bd950();
   input += synapse0x26bd990();
   input += synapse0x26bd9d0();
   input += synapse0x26bda10();
   input += synapse0x26bda50();
   input += synapse0x26bda90();
   input += synapse0x26bdad0();
   input += synapse0x26bd680();
   input += synapse0x26bd6c0();
   input += synapse0x26bd700();
   input += synapse0x26bd740();
   input += synapse0x26bdd20();
   input += synapse0x26bdd60();
   input += synapse0x26bdda0();
   input += synapse0x26bdde0();
   input += synapse0x26bde20();
   input += synapse0x26bde60();
   input += synapse0x26bdea0();
   input += synapse0x26bdee0();
   input += synapse0x26bdf20();
   input += synapse0x26bdf60();
   input += synapse0x26bdfa0();
   input += synapse0x26bdfe0();
   input += synapse0x26be020();
   input += synapse0x26be060();
   return input;
}

double NNfunction_sb_cLdR::neuron0x26bcf40() {
   double input = input0x26bcf40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x26be0a0() {
   double input = 0.655514;
   input += synapse0x26be3e0();
   input += synapse0x26be420();
   input += synapse0x26be460();
   input += synapse0x26be4a0();
   input += synapse0x26be4e0();
   input += synapse0x26be520();
   input += synapse0x26be560();
   input += synapse0x26be5a0();
   input += synapse0x26be5e0();
   input += synapse0x26be620();
   input += synapse0x26be660();
   input += synapse0x26be6a0();
   input += synapse0x26be6e0();
   input += synapse0x26be720();
   input += synapse0x26be760();
   input += synapse0x26be7a0();
   input += synapse0x26be230();
   input += synapse0x26be270();
   input += synapse0x26be8f0();
   input += synapse0x26be930();
   input += synapse0x26be970();
   input += synapse0x26be9b0();
   input += synapse0x26be9f0();
   input += synapse0x26bea30();
   input += synapse0x26bea70();
   input += synapse0x26beab0();
   input += synapse0x26beaf0();
   input += synapse0x26beb30();
   input += synapse0x26beb70();
   input += synapse0x26bebb0();
   input += synapse0x26bebf0();
   input += synapse0x26bec30();
   input += synapse0x26be7e0();
   input += synapse0x26be820();
   input += synapse0x26be860();
   input += synapse0x26be8a0();
   input += synapse0x26bee80();
   input += synapse0x26beec0();
   input += synapse0x26bef00();
   input += synapse0x26bef40();
   input += synapse0x26bef80();
   input += synapse0x26befc0();
   input += synapse0x26bf000();
   input += synapse0x26bf040();
   input += synapse0x26bf080();
   input += synapse0x26bf0c0();
   input += synapse0x26bf100();
   input += synapse0x26bf140();
   input += synapse0x26bf180();
   input += synapse0x26bf1c0();
   return input;
}

double NNfunction_sb_cLdR::neuron0x26be0a0() {
   double input = input0x26be0a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLdR::input0x26bf200() {
   double input = 10.7264;
   input += synapse0x26bf420();
   input += synapse0x26bf460();
   input += synapse0x26bf4a0();
   input += synapse0x26bf4e0();
   input += synapse0x26bf520();
   return input;
}

double NNfunction_sb_cLdR::neuron0x26bf200() {
   double input = input0x26bf200();
   return (input * 1)+0;
}

double NNfunction_sb_cLdR::synapse0x268b1b0() {
   return (neuron0x268b2f0()*0.0360724);
}

double NNfunction_sb_cLdR::synapse0x268b1f0() {
   return (neuron0x268b630()*-0.0077789);
}

double NNfunction_sb_cLdR::synapse0x26905d0() {
   return (neuron0x268b970()*1.03447);
}

double NNfunction_sb_cLdR::synapse0x2690610() {
   return (neuron0x268bcb0()*-0.0586352);
}

double NNfunction_sb_cLdR::synapse0x2690650() {
   return (neuron0x268bff0()*0.002623);
}

double NNfunction_sb_cLdR::synapse0x2690690() {
   return (neuron0x268c330()*0.0172679);
}

double NNfunction_sb_cLdR::synapse0x26906d0() {
   return (neuron0x268c670()*0.0150353);
}

double NNfunction_sb_cLdR::synapse0x2690710() {
   return (neuron0x268c9b0()*0.0274363);
}

double NNfunction_sb_cLdR::synapse0x2690750() {
   return (neuron0x268ccf0()*0.0201059);
}

double NNfunction_sb_cLdR::synapse0x2690790() {
   return (neuron0x268d030()*-0.0157565);
}

double NNfunction_sb_cLdR::synapse0x26907d0() {
   return (neuron0x268d370()*-0.00928364);
}

double NNfunction_sb_cLdR::synapse0x2690810() {
   return (neuron0x268d6b0()*0.013309);
}

double NNfunction_sb_cLdR::synapse0x2690850() {
   return (neuron0x268d9f0()*-0.372891);
}

double NNfunction_sb_cLdR::synapse0x2690890() {
   return (neuron0x268dd30()*0.0358096);
}

double NNfunction_sb_cLdR::synapse0x26908d0() {
   return (neuron0x268e070()*0.00566213);
}

double NNfunction_sb_cLdR::synapse0x2690910() {
   return (neuron0x268e3b0()*0.00441287);
}

double NNfunction_sb_cLdR::synapse0x268b120() {
   return (neuron0x268e6f0()*0.00508621);
}

double NNfunction_sb_cLdR::synapse0x268b160() {
   return (neuron0x268ec50()*-0.0269696);
}

double NNfunction_sb_cLdR::synapse0x24464e0() {
   return (neuron0x268ee70()*-0.0312159);
}

double NNfunction_sb_cLdR::synapse0x2446520() {
   return (neuron0x268f1b0()*0.00854968);
}

double NNfunction_sb_cLdR::synapse0x2690b70() {
   return (neuron0x268f4f0()*0.00973604);
}

double NNfunction_sb_cLdR::synapse0x2690bb0() {
   return (neuron0x268f830()*-0.0144738);
}

double NNfunction_sb_cLdR::synapse0x2690bf0() {
   return (neuron0x268fb70()*0.0269056);
}

double NNfunction_sb_cLdR::synapse0x2690c30() {
   return (neuron0x268feb0()*-0.0286005);
}

double NNfunction_sb_cLdR::synapse0x2690fb0() {
   return (neuron0x268b2f0()*0.0376981);
}

double NNfunction_sb_cLdR::synapse0x2690ff0() {
   return (neuron0x268b630()*-0.0246001);
}

double NNfunction_sb_cLdR::synapse0x2691030() {
   return (neuron0x268b970()*-0.0539311);
}

double NNfunction_sb_cLdR::synapse0x2691070() {
   return (neuron0x268bcb0()*-0.0483618);
}

double NNfunction_sb_cLdR::synapse0x26910b0() {
   return (neuron0x268bff0()*-0.000501299);
}

double NNfunction_sb_cLdR::synapse0x26910f0() {
   return (neuron0x268c330()*-0.000337181);
}

double NNfunction_sb_cLdR::synapse0x2691130() {
   return (neuron0x268c670()*-0.0088493);
}

double NNfunction_sb_cLdR::synapse0x2691170() {
   return (neuron0x268c9b0()*0.0291947);
}

double NNfunction_sb_cLdR::synapse0x26911b0() {
   return (neuron0x268ccf0()*0.0202999);
}

double NNfunction_sb_cLdR::synapse0x2690a60() {
   return (neuron0x268d030()*-0.0295095);
}

double NNfunction_sb_cLdR::synapse0x2690aa0() {
   return (neuron0x268d370()*-0.00864645);
}

double NNfunction_sb_cLdR::synapse0x2690ae0() {
   return (neuron0x268d6b0()*-0.0367132);
}

double NNfunction_sb_cLdR::synapse0x2690b20() {
   return (neuron0x268d9f0()*0.589182);
}

double NNfunction_sb_cLdR::synapse0x2691400() {
   return (neuron0x268dd30()*0.00997206);
}

double NNfunction_sb_cLdR::synapse0x2691440() {
   return (neuron0x268e070()*-0.0327851);
}

double NNfunction_sb_cLdR::synapse0x2691480() {
   return (neuron0x268e3b0()*0.0246429);
}

double NNfunction_sb_cLdR::synapse0x2690e00() {
   return (neuron0x268e6f0()*0.0241216);
}

double NNfunction_sb_cLdR::synapse0x2690e40() {
   return (neuron0x268ec50()*0.534121);
}

double NNfunction_sb_cLdR::synapse0x26915d0() {
   return (neuron0x268ee70()*-0.0150306);
}

double NNfunction_sb_cLdR::synapse0x2691610() {
   return (neuron0x268f1b0()*-0.0217256);
}

double NNfunction_sb_cLdR::synapse0x2691650() {
   return (neuron0x268f4f0()*-0.00427907);
}

double NNfunction_sb_cLdR::synapse0x2691690() {
   return (neuron0x268f830()*0.00844395);
}

double NNfunction_sb_cLdR::synapse0x26916d0() {
   return (neuron0x268fb70()*-0.0129961);
}

double NNfunction_sb_cLdR::synapse0x2691710() {
   return (neuron0x268feb0()*0.0153288);
}

double NNfunction_sb_cLdR::synapse0x2691a90() {
   return (neuron0x268b2f0()*0.611596);
}

double NNfunction_sb_cLdR::synapse0x2691ad0() {
   return (neuron0x268b630()*-0.0250305);
}

double NNfunction_sb_cLdR::synapse0x2691b10() {
   return (neuron0x268b970()*-0.362345);
}

double NNfunction_sb_cLdR::synapse0x2691b50() {
   return (neuron0x268bcb0()*0.545373);
}

double NNfunction_sb_cLdR::synapse0x2691b90() {
   return (neuron0x268bff0()*-0.505098);
}

double NNfunction_sb_cLdR::synapse0x2691bd0() {
   return (neuron0x268c330()*0.730223);
}

double NNfunction_sb_cLdR::synapse0x2691c10() {
   return (neuron0x268c670()*-0.328061);
}

double NNfunction_sb_cLdR::synapse0x2691c50() {
   return (neuron0x268c9b0()*-0.417487);
}

double NNfunction_sb_cLdR::synapse0x2691c90() {
   return (neuron0x268ccf0()*0.406849);
}

double NNfunction_sb_cLdR::synapse0x2691cd0() {
   return (neuron0x268d030()*0.832799);
}

double NNfunction_sb_cLdR::synapse0x2691d10() {
   return (neuron0x268d370()*0.295255);
}

double NNfunction_sb_cLdR::synapse0x2691d50() {
   return (neuron0x268d6b0()*-0.389787);
}

double NNfunction_sb_cLdR::synapse0x2691d90() {
   return (neuron0x268d9f0()*-0.364534);
}

double NNfunction_sb_cLdR::synapse0x2691dd0() {
   return (neuron0x268dd30()*-0.630714);
}

double NNfunction_sb_cLdR::synapse0x2691e10() {
   return (neuron0x268e070()*0.800139);
}

double NNfunction_sb_cLdR::synapse0x2691e50() {
   return (neuron0x268e3b0()*0.069708);
}

double NNfunction_sb_cLdR::synapse0x26918e0() {
   return (neuron0x268e6f0()*-0.67714);
}

double NNfunction_sb_cLdR::synapse0x2691920() {
   return (neuron0x268ec50()*-0.16936);
}

double NNfunction_sb_cLdR::synapse0x2446b80() {
   return (neuron0x268ee70()*-0.763264);
}

double NNfunction_sb_cLdR::synapse0x2454450() {
   return (neuron0x268f1b0()*0.264099);
}

double NNfunction_sb_cLdR::synapse0x2454490() {
   return (neuron0x268f4f0()*-0.260612);
}

double NNfunction_sb_cLdR::synapse0x267a380() {
   return (neuron0x268f830()*-0.023263);
}

double NNfunction_sb_cLdR::synapse0x267a3c0() {
   return (neuron0x268fb70()*0.0934582);
}

double NNfunction_sb_cLdR::synapse0x267a400() {
   return (neuron0x268feb0()*-0.0380037);
}

double NNfunction_sb_cLdR::synapse0x2454cd0() {
   return (neuron0x268b2f0()*-0.0422603);
}

double NNfunction_sb_cLdR::synapse0x2691380() {
   return (neuron0x268b630()*0.0773178);
}

double NNfunction_sb_cLdR::synapse0x26913c0() {
   return (neuron0x268b970()*0.343205);
}

double NNfunction_sb_cLdR::synapse0x2691fa0() {
   return (neuron0x268bcb0()*-0.943777);
}

double NNfunction_sb_cLdR::synapse0x2691fe0() {
   return (neuron0x268bff0()*0.0832238);
}

double NNfunction_sb_cLdR::synapse0x2692020() {
   return (neuron0x268c330()*0.0780689);
}

double NNfunction_sb_cLdR::synapse0x2692060() {
   return (neuron0x268c670()*0.221951);
}

double NNfunction_sb_cLdR::synapse0x26920a0() {
   return (neuron0x268c9b0()*-0.164178);
}

double NNfunction_sb_cLdR::synapse0x26920e0() {
   return (neuron0x268ccf0()*-0.0497162);
}

double NNfunction_sb_cLdR::synapse0x2692120() {
   return (neuron0x268d030()*-0.331902);
}

double NNfunction_sb_cLdR::synapse0x2692160() {
   return (neuron0x268d370()*0.464494);
}

double NNfunction_sb_cLdR::synapse0x26921a0() {
   return (neuron0x268d6b0()*-0.0482649);
}

double NNfunction_sb_cLdR::synapse0x26921e0() {
   return (neuron0x268d9f0()*0.597464);
}

double NNfunction_sb_cLdR::synapse0x2692220() {
   return (neuron0x268dd30()*-0.0125881);
}

double NNfunction_sb_cLdR::synapse0x2692260() {
   return (neuron0x268e070()*0.103858);
}

double NNfunction_sb_cLdR::synapse0x26922a0() {
   return (neuron0x268e3b0()*0.209655);
}

double NNfunction_sb_cLdR::synapse0x268b230() {
   return (neuron0x268e6f0()*0.11646);
}

double NNfunction_sb_cLdR::synapse0x268b270() {
   return (neuron0x268ec50()*0.526697);
}

double NNfunction_sb_cLdR::synapse0x268b2b0() {
   return (neuron0x268ee70()*-0.177123);
}

double NNfunction_sb_cLdR::synapse0x26923f0() {
   return (neuron0x268f1b0()*0.16091);
}

double NNfunction_sb_cLdR::synapse0x2692430() {
   return (neuron0x268f4f0()*0.0464278);
}

double NNfunction_sb_cLdR::synapse0x2692470() {
   return (neuron0x268f830()*-0.0493892);
}

double NNfunction_sb_cLdR::synapse0x26924b0() {
   return (neuron0x268fb70()*-0.164721);
}

double NNfunction_sb_cLdR::synapse0x26924f0() {
   return (neuron0x268feb0()*0.257812);
}

double NNfunction_sb_cLdR::synapse0x2692870() {
   return (neuron0x268b2f0()*-0.186203);
}

double NNfunction_sb_cLdR::synapse0x26928b0() {
   return (neuron0x268b630()*0.107567);
}

double NNfunction_sb_cLdR::synapse0x26928f0() {
   return (neuron0x268b970()*0.60231);
}

double NNfunction_sb_cLdR::synapse0x2692930() {
   return (neuron0x268bcb0()*-0.160209);
}

double NNfunction_sb_cLdR::synapse0x2692970() {
   return (neuron0x268bff0()*-0.490384);
}

double NNfunction_sb_cLdR::synapse0x26929b0() {
   return (neuron0x268c330()*0.268664);
}

double NNfunction_sb_cLdR::synapse0x26929f0() {
   return (neuron0x268c670()*-0.111259);
}

double NNfunction_sb_cLdR::synapse0x2692a30() {
   return (neuron0x268c9b0()*-0.173177);
}

double NNfunction_sb_cLdR::synapse0x2692a70() {
   return (neuron0x268ccf0()*-0.0595754);
}

double NNfunction_sb_cLdR::synapse0x2692ab0() {
   return (neuron0x268d030()*0.392286);
}

double NNfunction_sb_cLdR::synapse0x2692af0() {
   return (neuron0x268d370()*0.162551);
}

double NNfunction_sb_cLdR::synapse0x2692b30() {
   return (neuron0x268d6b0()*0.0247799);
}

double NNfunction_sb_cLdR::synapse0x2692b70() {
   return (neuron0x268d9f0()*0.027922);
}

double NNfunction_sb_cLdR::synapse0x2692bb0() {
   return (neuron0x268dd30()*0.0576533);
}

double NNfunction_sb_cLdR::synapse0x2692bf0() {
   return (neuron0x268e070()*-0.204749);
}

double NNfunction_sb_cLdR::synapse0x2692c30() {
   return (neuron0x268e3b0()*-0.249061);
}

double NNfunction_sb_cLdR::synapse0x26926c0() {
   return (neuron0x268e6f0()*0.001038);
}

double NNfunction_sb_cLdR::synapse0x2692700() {
   return (neuron0x268ec50()*-0.265138);
}

double NNfunction_sb_cLdR::synapse0x2692d80() {
   return (neuron0x268ee70()*-0.232147);
}

double NNfunction_sb_cLdR::synapse0x2692dc0() {
   return (neuron0x268f1b0()*-0.153425);
}

double NNfunction_sb_cLdR::synapse0x2692e00() {
   return (neuron0x268f4f0()*-0.484865);
}

double NNfunction_sb_cLdR::synapse0x2692e40() {
   return (neuron0x268f830()*0.225279);
}

double NNfunction_sb_cLdR::synapse0x2692e80() {
   return (neuron0x268fb70()*0.0175296);
}

double NNfunction_sb_cLdR::synapse0x2692ec0() {
   return (neuron0x268feb0()*-0.536966);
}

double NNfunction_sb_cLdR::synapse0x2693240() {
   return (neuron0x268b2f0()*-0.325713);
}

double NNfunction_sb_cLdR::synapse0x2693280() {
   return (neuron0x268b630()*-0.0767316);
}

double NNfunction_sb_cLdR::synapse0x26932c0() {
   return (neuron0x268b970()*0.37234);
}

double NNfunction_sb_cLdR::synapse0x2693300() {
   return (neuron0x268bcb0()*-0.431064);
}

double NNfunction_sb_cLdR::synapse0x2693340() {
   return (neuron0x268bff0()*0.194552);
}

double NNfunction_sb_cLdR::synapse0x2693380() {
   return (neuron0x268c330()*-0.246526);
}

double NNfunction_sb_cLdR::synapse0x26933c0() {
   return (neuron0x268c670()*0.213114);
}

double NNfunction_sb_cLdR::synapse0x2693400() {
   return (neuron0x268c9b0()*0.0719058);
}

double NNfunction_sb_cLdR::synapse0x2693440() {
   return (neuron0x268ccf0()*-0.261747);
}

double NNfunction_sb_cLdR::synapse0x24547a0() {
   return (neuron0x268d030()*0.148981);
}

double NNfunction_sb_cLdR::synapse0x24547e0() {
   return (neuron0x268d370()*0.0419736);
}

double NNfunction_sb_cLdR::synapse0x2454820() {
   return (neuron0x268d6b0()*0.424659);
}

double NNfunction_sb_cLdR::synapse0x2454860() {
   return (neuron0x268d9f0()*-0.191186);
}

double NNfunction_sb_cLdR::synapse0x24548a0() {
   return (neuron0x268dd30()*-0.250328);
}

double NNfunction_sb_cLdR::synapse0x24548e0() {
   return (neuron0x268e070()*0.806089);
}

double NNfunction_sb_cLdR::synapse0x2454920() {
   return (neuron0x268e3b0()*0.912309);
}

double NNfunction_sb_cLdR::synapse0x2693090() {
   return (neuron0x268e6f0()*-0.490683);
}

double NNfunction_sb_cLdR::synapse0x26930d0() {
   return (neuron0x268ec50()*-0.299557);
}

double NNfunction_sb_cLdR::synapse0x2454a70() {
   return (neuron0x268ee70()*-0.04965);
}

double NNfunction_sb_cLdR::synapse0x2454ab0() {
   return (neuron0x268f1b0()*0.387233);
}

double NNfunction_sb_cLdR::synapse0x2454af0() {
   return (neuron0x268f4f0()*-0.0241101);
}

double NNfunction_sb_cLdR::synapse0x2454b30() {
   return (neuron0x268f830()*0.246615);
}

double NNfunction_sb_cLdR::synapse0x2454b70() {
   return (neuron0x268fb70()*0.228623);
}

double NNfunction_sb_cLdR::synapse0x2693c90() {
   return (neuron0x268feb0()*0.0696666);
}

double NNfunction_sb_cLdR::synapse0x2694010() {
   return (neuron0x268b2f0()*0.00593254);
}

double NNfunction_sb_cLdR::synapse0x2694050() {
   return (neuron0x268b630()*-0.00630518);
}

double NNfunction_sb_cLdR::synapse0x2694090() {
   return (neuron0x268b970()*-0.0253574);
}

double NNfunction_sb_cLdR::synapse0x26940d0() {
   return (neuron0x268bcb0()*-0.041312);
}

double NNfunction_sb_cLdR::synapse0x2694110() {
   return (neuron0x268bff0()*-0.0311605);
}

double NNfunction_sb_cLdR::synapse0x2694150() {
   return (neuron0x268c330()*0.00218281);
}

double NNfunction_sb_cLdR::synapse0x2694190() {
   return (neuron0x268c670()*0.0104755);
}

double NNfunction_sb_cLdR::synapse0x26941d0() {
   return (neuron0x268c9b0()*0.000140362);
}

double NNfunction_sb_cLdR::synapse0x2694210() {
   return (neuron0x268ccf0()*-0.000991687);
}

double NNfunction_sb_cLdR::synapse0x2694250() {
   return (neuron0x268d030()*-0.0221606);
}

double NNfunction_sb_cLdR::synapse0x2694290() {
   return (neuron0x268d370()*-0.0211235);
}

double NNfunction_sb_cLdR::synapse0x26942d0() {
   return (neuron0x268d6b0()*0.0123952);
}

double NNfunction_sb_cLdR::synapse0x2694310() {
   return (neuron0x268d9f0()*1.66199);
}

double NNfunction_sb_cLdR::synapse0x2694350() {
   return (neuron0x268dd30()*0.00475396);
}

double NNfunction_sb_cLdR::synapse0x2694390() {
   return (neuron0x268e070()*-0.00937913);
}

double NNfunction_sb_cLdR::synapse0x26943d0() {
   return (neuron0x268e3b0()*0.0137906);
}

double NNfunction_sb_cLdR::synapse0x2693e60() {
   return (neuron0x268e6f0()*0.00536269);
}

double NNfunction_sb_cLdR::synapse0x2693ea0() {
   return (neuron0x268ec50()*-0.106026);
}

double NNfunction_sb_cLdR::synapse0x2694520() {
   return (neuron0x268ee70()*-0.0081574);
}

double NNfunction_sb_cLdR::synapse0x2694560() {
   return (neuron0x268f1b0()*0.0241156);
}

double NNfunction_sb_cLdR::synapse0x26945a0() {
   return (neuron0x268f4f0()*-0.020036);
}

double NNfunction_sb_cLdR::synapse0x26945e0() {
   return (neuron0x268f830()*0.0115714);
}

double NNfunction_sb_cLdR::synapse0x2694620() {
   return (neuron0x268fb70()*0.00805245);
}

double NNfunction_sb_cLdR::synapse0x2694660() {
   return (neuron0x268feb0()*0.0076419);
}

double NNfunction_sb_cLdR::synapse0x26949e0() {
   return (neuron0x268b2f0()*0.146255);
}

double NNfunction_sb_cLdR::synapse0x2694a20() {
   return (neuron0x268b630()*0.0402116);
}

double NNfunction_sb_cLdR::synapse0x2694a60() {
   return (neuron0x268b970()*-1.60986);
}

double NNfunction_sb_cLdR::synapse0x2694aa0() {
   return (neuron0x268bcb0()*-0.370923);
}

double NNfunction_sb_cLdR::synapse0x2694ae0() {
   return (neuron0x268bff0()*0.178713);
}

double NNfunction_sb_cLdR::synapse0x2694b20() {
   return (neuron0x268c330()*-0.200597);
}

double NNfunction_sb_cLdR::synapse0x2694b60() {
   return (neuron0x268c670()*0.114714);
}

double NNfunction_sb_cLdR::synapse0x2694ba0() {
   return (neuron0x268c9b0()*-0.0428732);
}

double NNfunction_sb_cLdR::synapse0x2694be0() {
   return (neuron0x268ccf0()*-0.115083);
}

double NNfunction_sb_cLdR::synapse0x2694c20() {
   return (neuron0x268d030()*-0.386269);
}

double NNfunction_sb_cLdR::synapse0x2694c60() {
   return (neuron0x268d370()*-0.154146);
}

double NNfunction_sb_cLdR::synapse0x2694ca0() {
   return (neuron0x268d6b0()*0.297544);
}

double NNfunction_sb_cLdR::synapse0x2694ce0() {
   return (neuron0x268d9f0()*-0.908699);
}

double NNfunction_sb_cLdR::synapse0x2694d20() {
   return (neuron0x268dd30()*-0.162441);
}

double NNfunction_sb_cLdR::synapse0x2694d60() {
   return (neuron0x268e070()*-0.133057);
}

double NNfunction_sb_cLdR::synapse0x2694da0() {
   return (neuron0x268e3b0()*0.596447);
}

double NNfunction_sb_cLdR::synapse0x2694830() {
   return (neuron0x268e6f0()*-0.0876187);
}

double NNfunction_sb_cLdR::synapse0x2694870() {
   return (neuron0x268ec50()*0.253079);
}

double NNfunction_sb_cLdR::synapse0x2694ef0() {
   return (neuron0x268ee70()*0.0818499);
}

double NNfunction_sb_cLdR::synapse0x2694f30() {
   return (neuron0x268f1b0()*0.0220032);
}

double NNfunction_sb_cLdR::synapse0x2694f70() {
   return (neuron0x268f4f0()*0.0580428);
}

double NNfunction_sb_cLdR::synapse0x2694fb0() {
   return (neuron0x268f830()*-0.163703);
}

double NNfunction_sb_cLdR::synapse0x2694ff0() {
   return (neuron0x268fb70()*0.220061);
}

double NNfunction_sb_cLdR::synapse0x2695030() {
   return (neuron0x268feb0()*0.165002);
}

double NNfunction_sb_cLdR::synapse0x268eb40() {
   return (neuron0x268b2f0()*0.0431382);
}

double NNfunction_sb_cLdR::synapse0x268eb80() {
   return (neuron0x268b630()*-0.0160603);
}

double NNfunction_sb_cLdR::synapse0x268ebc0() {
   return (neuron0x268b970()*-0.000505242);
}

double NNfunction_sb_cLdR::synapse0x268ec00() {
   return (neuron0x268bcb0()*4.31546);
}

double NNfunction_sb_cLdR::synapse0x26955c0() {
   return (neuron0x268bff0()*0.00469294);
}

double NNfunction_sb_cLdR::synapse0x2695600() {
   return (neuron0x268c330()*0.0376864);
}

double NNfunction_sb_cLdR::synapse0x2695640() {
   return (neuron0x268c670()*-0.0187692);
}

double NNfunction_sb_cLdR::synapse0x2695680() {
   return (neuron0x268c9b0()*-0.00953221);
}

double NNfunction_sb_cLdR::synapse0x26956c0() {
   return (neuron0x268ccf0()*0.0299447);
}

double NNfunction_sb_cLdR::synapse0x2695700() {
   return (neuron0x268d030()*0.0198126);
}

double NNfunction_sb_cLdR::synapse0x2695740() {
   return (neuron0x268d370()*-0.0192614);
}

double NNfunction_sb_cLdR::synapse0x2695780() {
   return (neuron0x268d6b0()*-0.0458331);
}

double NNfunction_sb_cLdR::synapse0x26957c0() {
   return (neuron0x268d9f0()*0.857442);
}

double NNfunction_sb_cLdR::synapse0x2695800() {
   return (neuron0x268dd30()*0.00654491);
}

double NNfunction_sb_cLdR::synapse0x2695840() {
   return (neuron0x268e070()*-0.0181123);
}

double NNfunction_sb_cLdR::synapse0x2695880() {
   return (neuron0x268e3b0()*-0.039442);
}

double NNfunction_sb_cLdR::synapse0x2695200() {
   return (neuron0x268e6f0()*0.0181635);
}

double NNfunction_sb_cLdR::synapse0x2695240() {
   return (neuron0x268ec50()*0.638508);
}

double NNfunction_sb_cLdR::synapse0x26959d0() {
   return (neuron0x268ee70()*-0.0100352);
}

double NNfunction_sb_cLdR::synapse0x2695a10() {
   return (neuron0x268f1b0()*-0.0291941);
}

double NNfunction_sb_cLdR::synapse0x2695a50() {
   return (neuron0x268f4f0()*0.0100218);
}

double NNfunction_sb_cLdR::synapse0x2695a90() {
   return (neuron0x268f830()*-0.00228327);
}

double NNfunction_sb_cLdR::synapse0x2695ad0() {
   return (neuron0x268fb70()*0.0252053);
}

double NNfunction_sb_cLdR::synapse0x2695b10() {
   return (neuron0x268feb0()*-0.0182585);
}

double NNfunction_sb_cLdR::synapse0x2695e90() {
   return (neuron0x268b2f0()*0.0518585);
}

double NNfunction_sb_cLdR::synapse0x2695ed0() {
   return (neuron0x268b630()*-0.0582472);
}

double NNfunction_sb_cLdR::synapse0x2695f10() {
   return (neuron0x268b970()*0.0527253);
}

double NNfunction_sb_cLdR::synapse0x2695f50() {
   return (neuron0x268bcb0()*-0.0595046);
}

double NNfunction_sb_cLdR::synapse0x2695f90() {
   return (neuron0x268bff0()*-0.038129);
}

double NNfunction_sb_cLdR::synapse0x2695fd0() {
   return (neuron0x268c330()*-0.0268094);
}

double NNfunction_sb_cLdR::synapse0x2696010() {
   return (neuron0x268c670()*-0.0449492);
}

double NNfunction_sb_cLdR::synapse0x2696050() {
   return (neuron0x268c9b0()*0.0463612);
}

double NNfunction_sb_cLdR::synapse0x2696090() {
   return (neuron0x268ccf0()*-0.0129697);
}

double NNfunction_sb_cLdR::synapse0x26960d0() {
   return (neuron0x268d030()*-0.0241734);
}

double NNfunction_sb_cLdR::synapse0x2696110() {
   return (neuron0x268d370()*-0.00064796);
}

double NNfunction_sb_cLdR::synapse0x2696150() {
   return (neuron0x268d6b0()*-0.403982);
}

double NNfunction_sb_cLdR::synapse0x2696190() {
   return (neuron0x268d9f0()*0.0960954);
}

double NNfunction_sb_cLdR::synapse0x26961d0() {
   return (neuron0x268dd30()*0.0737295);
}

double NNfunction_sb_cLdR::synapse0x2696210() {
   return (neuron0x268e070()*-0.241518);
}

double NNfunction_sb_cLdR::synapse0x2696250() {
   return (neuron0x268e3b0()*-0.218287);
}

double NNfunction_sb_cLdR::synapse0x2695ce0() {
   return (neuron0x268e6f0()*0.11971);
}

double NNfunction_sb_cLdR::synapse0x2695d20() {
   return (neuron0x268ec50()*0.0747373);
}

double NNfunction_sb_cLdR::synapse0x26963a0() {
   return (neuron0x268ee70()*-0.207217);
}

double NNfunction_sb_cLdR::synapse0x26963e0() {
   return (neuron0x268f1b0()*-0.0151385);
}

double NNfunction_sb_cLdR::synapse0x2696420() {
   return (neuron0x268f4f0()*-0.028015);
}

double NNfunction_sb_cLdR::synapse0x2696460() {
   return (neuron0x268f830()*0.0274611);
}

double NNfunction_sb_cLdR::synapse0x26964a0() {
   return (neuron0x268fb70()*-0.0163214);
}

double NNfunction_sb_cLdR::synapse0x26964e0() {
   return (neuron0x268feb0()*-0.00398026);
}

double NNfunction_sb_cLdR::synapse0x2696860() {
   return (neuron0x268b2f0()*-0.0474179);
}

double NNfunction_sb_cLdR::synapse0x26968a0() {
   return (neuron0x268b630()*0.042929);
}

double NNfunction_sb_cLdR::synapse0x26968e0() {
   return (neuron0x268b970()*-0.0531959);
}

double NNfunction_sb_cLdR::synapse0x2696920() {
   return (neuron0x268bcb0()*-2.23137);
}

double NNfunction_sb_cLdR::synapse0x2696960() {
   return (neuron0x268bff0()*0.0302559);
}

double NNfunction_sb_cLdR::synapse0x26969a0() {
   return (neuron0x268c330()*0.0475486);
}

double NNfunction_sb_cLdR::synapse0x26969e0() {
   return (neuron0x268c670()*0.0248151);
}

double NNfunction_sb_cLdR::synapse0x2696a20() {
   return (neuron0x268c9b0()*-0.0595701);
}

double NNfunction_sb_cLdR::synapse0x2696a60() {
   return (neuron0x268ccf0()*0.0641929);
}

double NNfunction_sb_cLdR::synapse0x2696aa0() {
   return (neuron0x268d030()*0.0503989);
}

double NNfunction_sb_cLdR::synapse0x2696ae0() {
   return (neuron0x268d370()*0.0714981);
}

double NNfunction_sb_cLdR::synapse0x2696b20() {
   return (neuron0x268d6b0()*-0.0601003);
}

double NNfunction_sb_cLdR::synapse0x2696b60() {
   return (neuron0x268d9f0()*-0.341715);
}

double NNfunction_sb_cLdR::synapse0x2696ba0() {
   return (neuron0x268dd30()*0.0173152);
}

double NNfunction_sb_cLdR::synapse0x2696be0() {
   return (neuron0x268e070()*-0.124655);
}

double NNfunction_sb_cLdR::synapse0x2696c20() {
   return (neuron0x268e3b0()*-0.0768011);
}

double NNfunction_sb_cLdR::synapse0x26966b0() {
   return (neuron0x268e6f0()*0.0586021);
}

double NNfunction_sb_cLdR::synapse0x26966f0() {
   return (neuron0x268ec50()*-0.47402);
}

double NNfunction_sb_cLdR::synapse0x2693480() {
   return (neuron0x268ee70()*-0.0868659);
}

double NNfunction_sb_cLdR::synapse0x26934c0() {
   return (neuron0x268f1b0()*0.029016);
}

double NNfunction_sb_cLdR::synapse0x2693500() {
   return (neuron0x268f4f0()*-0.116242);
}

double NNfunction_sb_cLdR::synapse0x2693540() {
   return (neuron0x268f830()*0.0215882);
}

double NNfunction_sb_cLdR::synapse0x2693580() {
   return (neuron0x268fb70()*-0.0084851);
}

double NNfunction_sb_cLdR::synapse0x26935c0() {
   return (neuron0x268feb0()*0.0160632);
}

double NNfunction_sb_cLdR::synapse0x2693940() {
   return (neuron0x268b2f0()*0.553976);
}

double NNfunction_sb_cLdR::synapse0x2693980() {
   return (neuron0x268b630()*-0.249263);
}

double NNfunction_sb_cLdR::synapse0x26939c0() {
   return (neuron0x268b970()*-0.62988);
}

double NNfunction_sb_cLdR::synapse0x2693a00() {
   return (neuron0x268bcb0()*0.284158);
}

double NNfunction_sb_cLdR::synapse0x2693a40() {
   return (neuron0x268bff0()*0.0296279);
}

double NNfunction_sb_cLdR::synapse0x2693a80() {
   return (neuron0x268c330()*-0.0686071);
}

double NNfunction_sb_cLdR::synapse0x2693ac0() {
   return (neuron0x268c670()*0.106404);
}

double NNfunction_sb_cLdR::synapse0x2693b00() {
   return (neuron0x268c9b0()*0.446287);
}

double NNfunction_sb_cLdR::synapse0x2693b40() {
   return (neuron0x268ccf0()*0.691241);
}

double NNfunction_sb_cLdR::synapse0x2693b80() {
   return (neuron0x268d030()*0.0825525);
}

double NNfunction_sb_cLdR::synapse0x2693bc0() {
   return (neuron0x268d370()*-0.281129);
}

double NNfunction_sb_cLdR::synapse0x2693c00() {
   return (neuron0x268d6b0()*0.434199);
}

double NNfunction_sb_cLdR::synapse0x2693c40() {
   return (neuron0x268d9f0()*0.259531);
}

double NNfunction_sb_cLdR::synapse0x2697d80() {
   return (neuron0x268dd30()*-0.0957893);
}

double NNfunction_sb_cLdR::synapse0x2697dc0() {
   return (neuron0x268e070()*-0.379782);
}

double NNfunction_sb_cLdR::synapse0x2697e00() {
   return (neuron0x268e3b0()*0.203186);
}

double NNfunction_sb_cLdR::synapse0x2693790() {
   return (neuron0x268e6f0()*-0.0375305);
}

double NNfunction_sb_cLdR::synapse0x26937d0() {
   return (neuron0x268ec50()*-0.674208);
}

double NNfunction_sb_cLdR::synapse0x2697f50() {
   return (neuron0x268ee70()*-0.042381);
}

double NNfunction_sb_cLdR::synapse0x2697f90() {
   return (neuron0x268f1b0()*-0.0761353);
}

double NNfunction_sb_cLdR::synapse0x2697fd0() {
   return (neuron0x268f4f0()*0.308526);
}

double NNfunction_sb_cLdR::synapse0x2698010() {
   return (neuron0x268f830()*0.358754);
}

double NNfunction_sb_cLdR::synapse0x2698050() {
   return (neuron0x268fb70()*-0.370525);
}

double NNfunction_sb_cLdR::synapse0x2698090() {
   return (neuron0x268feb0()*0.0240326);
}

double NNfunction_sb_cLdR::synapse0x2698410() {
   return (neuron0x268b2f0()*-0.017304);
}

double NNfunction_sb_cLdR::synapse0x2698450() {
   return (neuron0x268b630()*0.1937);
}

double NNfunction_sb_cLdR::synapse0x2698490() {
   return (neuron0x268b970()*-0.125689);
}

double NNfunction_sb_cLdR::synapse0x26984d0() {
   return (neuron0x268bcb0()*-0.231895);
}

double NNfunction_sb_cLdR::synapse0x2698510() {
   return (neuron0x268bff0()*-0.167038);
}

double NNfunction_sb_cLdR::synapse0x2698550() {
   return (neuron0x268c330()*-0.0445962);
}

double NNfunction_sb_cLdR::synapse0x2698590() {
   return (neuron0x268c670()*0.284445);
}

double NNfunction_sb_cLdR::synapse0x26985d0() {
   return (neuron0x268c9b0()*-0.277152);
}

double NNfunction_sb_cLdR::synapse0x2698610() {
   return (neuron0x268ccf0()*0.0393236);
}

double NNfunction_sb_cLdR::synapse0x2698650() {
   return (neuron0x268d030()*-0.279957);
}

double NNfunction_sb_cLdR::synapse0x2698690() {
   return (neuron0x268d370()*-0.613577);
}

double NNfunction_sb_cLdR::synapse0x26986d0() {
   return (neuron0x268d6b0()*0.000111245);
}

double NNfunction_sb_cLdR::synapse0x2698710() {
   return (neuron0x268d9f0()*0.695465);
}

double NNfunction_sb_cLdR::synapse0x2698750() {
   return (neuron0x268dd30()*0.183314);
}

double NNfunction_sb_cLdR::synapse0x2698790() {
   return (neuron0x268e070()*0.0337285);
}

double NNfunction_sb_cLdR::synapse0x26987d0() {
   return (neuron0x268e3b0()*-0.0693757);
}

double NNfunction_sb_cLdR::synapse0x2698260() {
   return (neuron0x268e6f0()*0.016989);
}

double NNfunction_sb_cLdR::synapse0x26982a0() {
   return (neuron0x268ec50()*0.635627);
}

double NNfunction_sb_cLdR::synapse0x2698920() {
   return (neuron0x268ee70()*-0.137607);
}

double NNfunction_sb_cLdR::synapse0x2698960() {
   return (neuron0x268f1b0()*0.18421);
}

double NNfunction_sb_cLdR::synapse0x26989a0() {
   return (neuron0x268f4f0()*0.0751977);
}

double NNfunction_sb_cLdR::synapse0x26989e0() {
   return (neuron0x268f830()*0.0896012);
}

double NNfunction_sb_cLdR::synapse0x2698a20() {
   return (neuron0x268fb70()*-0.212201);
}

double NNfunction_sb_cLdR::synapse0x2698a60() {
   return (neuron0x268feb0()*-0.0724055);
}

double NNfunction_sb_cLdR::synapse0x2698de0() {
   return (neuron0x268b2f0()*0.0411159);
}

double NNfunction_sb_cLdR::synapse0x2698e20() {
   return (neuron0x268b630()*-0.0698471);
}

double NNfunction_sb_cLdR::synapse0x2698e60() {
   return (neuron0x268b970()*0.0877588);
}

double NNfunction_sb_cLdR::synapse0x2698ea0() {
   return (neuron0x268bcb0()*-0.579207);
}

double NNfunction_sb_cLdR::synapse0x2698ee0() {
   return (neuron0x268bff0()*-0.000311467);
}

double NNfunction_sb_cLdR::synapse0x2698f20() {
   return (neuron0x268c330()*-0.00484806);
}

double NNfunction_sb_cLdR::synapse0x2698f60() {
   return (neuron0x268c670()*-0.023062);
}

double NNfunction_sb_cLdR::synapse0x2698fa0() {
   return (neuron0x268c9b0()*0.047676);
}

double NNfunction_sb_cLdR::synapse0x2698fe0() {
   return (neuron0x268ccf0()*0.00229996);
}

double NNfunction_sb_cLdR::synapse0x2699020() {
   return (neuron0x268d030()*-0.0249125);
}

double NNfunction_sb_cLdR::synapse0x2699060() {
   return (neuron0x268d370()*-0.00456838);
}

double NNfunction_sb_cLdR::synapse0x26990a0() {
   return (neuron0x268d6b0()*0.0359362);
}

double NNfunction_sb_cLdR::synapse0x26990e0() {
   return (neuron0x268d9f0()*0.166292);
}

double NNfunction_sb_cLdR::synapse0x2699120() {
   return (neuron0x268dd30()*0.00573265);
}

double NNfunction_sb_cLdR::synapse0x2699160() {
   return (neuron0x268e070()*-0.012358);
}

double NNfunction_sb_cLdR::synapse0x26991a0() {
   return (neuron0x268e3b0()*0.133945);
}

double NNfunction_sb_cLdR::synapse0x2698c30() {
   return (neuron0x268e6f0()*0.0207242);
}

double NNfunction_sb_cLdR::synapse0x2698c70() {
   return (neuron0x268ec50()*0.0488082);
}

double NNfunction_sb_cLdR::synapse0x26992f0() {
   return (neuron0x268ee70()*0.0334545);
}

double NNfunction_sb_cLdR::synapse0x2699330() {
   return (neuron0x268f1b0()*-0.0527992);
}

double NNfunction_sb_cLdR::synapse0x2699370() {
   return (neuron0x268f4f0()*0.0110757);
}

double NNfunction_sb_cLdR::synapse0x26993b0() {
   return (neuron0x268f830()*-0.0078104);
}

double NNfunction_sb_cLdR::synapse0x26993f0() {
   return (neuron0x268fb70()*-0.00656564);
}

double NNfunction_sb_cLdR::synapse0x2699430() {
   return (neuron0x268feb0()*0.0298551);
}

double NNfunction_sb_cLdR::synapse0x26997b0() {
   return (neuron0x268b2f0()*0.0698114);
}

double NNfunction_sb_cLdR::synapse0x26997f0() {
   return (neuron0x268b630()*0.235067);
}

double NNfunction_sb_cLdR::synapse0x2699830() {
   return (neuron0x268b970()*-0.589839);
}

double NNfunction_sb_cLdR::synapse0x2699870() {
   return (neuron0x268bcb0()*-0.592573);
}

double NNfunction_sb_cLdR::synapse0x26998b0() {
   return (neuron0x268bff0()*-0.468286);
}

double NNfunction_sb_cLdR::synapse0x26998f0() {
   return (neuron0x268c330()*0.103483);
}

double NNfunction_sb_cLdR::synapse0x2699930() {
   return (neuron0x268c670()*0.516465);
}

double NNfunction_sb_cLdR::synapse0x2699970() {
   return (neuron0x268c9b0()*0.31621);
}

double NNfunction_sb_cLdR::synapse0x26999b0() {
   return (neuron0x268ccf0()*-0.0599568);
}

double NNfunction_sb_cLdR::synapse0x26999f0() {
   return (neuron0x268d030()*-0.441673);
}

double NNfunction_sb_cLdR::synapse0x2699a30() {
   return (neuron0x268d370()*0.507901);
}

double NNfunction_sb_cLdR::synapse0x2699a70() {
   return (neuron0x268d6b0()*-0.394985);
}

double NNfunction_sb_cLdR::synapse0x2699ab0() {
   return (neuron0x268d9f0()*-0.482421);
}

double NNfunction_sb_cLdR::synapse0x2699af0() {
   return (neuron0x268dd30()*0.627705);
}

double NNfunction_sb_cLdR::synapse0x2699b30() {
   return (neuron0x268e070()*0.14476);
}

double NNfunction_sb_cLdR::synapse0x2699b70() {
   return (neuron0x268e3b0()*0.040344);
}

double NNfunction_sb_cLdR::synapse0x2699600() {
   return (neuron0x268e6f0()*0.157982);
}

double NNfunction_sb_cLdR::synapse0x2699640() {
   return (neuron0x268ec50()*-0.351335);
}

double NNfunction_sb_cLdR::synapse0x2699cc0() {
   return (neuron0x268ee70()*-0.482595);
}

double NNfunction_sb_cLdR::synapse0x2699d00() {
   return (neuron0x268f1b0()*-0.602021);
}

double NNfunction_sb_cLdR::synapse0x2699d40() {
   return (neuron0x268f4f0()*0.285443);
}

double NNfunction_sb_cLdR::synapse0x2699d80() {
   return (neuron0x268f830()*-0.282617);
}

double NNfunction_sb_cLdR::synapse0x2699dc0() {
   return (neuron0x268fb70()*-0.0407309);
}

double NNfunction_sb_cLdR::synapse0x2699e00() {
   return (neuron0x268feb0()*-0.177634);
}

double NNfunction_sb_cLdR::synapse0x269a180() {
   return (neuron0x268b2f0()*0.292358);
}

double NNfunction_sb_cLdR::synapse0x268b510() {
   return (neuron0x268b630()*0.083959);
}

double NNfunction_sb_cLdR::synapse0x268b550() {
   return (neuron0x268b970()*-0.344809);
}

double NNfunction_sb_cLdR::synapse0x268b850() {
   return (neuron0x268bcb0()*-0.414103);
}

double NNfunction_sb_cLdR::synapse0x268b890() {
   return (neuron0x268bff0()*-0.0547401);
}

double NNfunction_sb_cLdR::synapse0x268bb90() {
   return (neuron0x268c330()*-0.167261);
}

double NNfunction_sb_cLdR::synapse0x268bbd0() {
   return (neuron0x268c670()*-0.328216);
}

double NNfunction_sb_cLdR::synapse0x268bed0() {
   return (neuron0x268c9b0()*-0.0810648);
}

double NNfunction_sb_cLdR::synapse0x268bf10() {
   return (neuron0x268ccf0()*-0.0774661);
}

double NNfunction_sb_cLdR::synapse0x268c210() {
   return (neuron0x268d030()*0.0774964);
}

double NNfunction_sb_cLdR::synapse0x268c250() {
   return (neuron0x268d370()*-0.193989);
}

double NNfunction_sb_cLdR::synapse0x268c550() {
   return (neuron0x268d6b0()*-0.311819);
}

double NNfunction_sb_cLdR::synapse0x268c590() {
   return (neuron0x268d9f0()*-0.333996);
}

double NNfunction_sb_cLdR::synapse0x268c890() {
   return (neuron0x268dd30()*-0.0998943);
}

double NNfunction_sb_cLdR::synapse0x268c8d0() {
   return (neuron0x268e070()*0.564521);
}

double NNfunction_sb_cLdR::synapse0x268cbd0() {
   return (neuron0x268e3b0()*-0.0164343);
}

double NNfunction_sb_cLdR::synapse0x268cc10() {
   return (neuron0x268e6f0()*-0.0826736);
}

double NNfunction_sb_cLdR::synapse0x268cf10() {
   return (neuron0x268ec50()*-0.193333);
}

double NNfunction_sb_cLdR::synapse0x268cf50() {
   return (neuron0x268ee70()*0.0243496);
}

double NNfunction_sb_cLdR::synapse0x268d250() {
   return (neuron0x268f1b0()*0.0207175);
}

double NNfunction_sb_cLdR::synapse0x268d290() {
   return (neuron0x268f4f0()*0.13927);
}

double NNfunction_sb_cLdR::synapse0x268d590() {
   return (neuron0x268f830()*-0.064911);
}

double NNfunction_sb_cLdR::synapse0x268d5d0() {
   return (neuron0x268fb70()*-0.0308951);
}

double NNfunction_sb_cLdR::synapse0x268d8d0() {
   return (neuron0x268feb0()*-0.0224287);
}

double NNfunction_sb_cLdR::synapse0x268d910() {
   return (neuron0x268b2f0()*-0.0207376);
}

double NNfunction_sb_cLdR::synapse0x268e5d0() {
   return (neuron0x268b630()*-0.000603989);
}

double NNfunction_sb_cLdR::synapse0x268e610() {
   return (neuron0x268b970()*-0.087068);
}

double NNfunction_sb_cLdR::synapse0x2699fd0() {
   return (neuron0x268bcb0()*0.138233);
}

double NNfunction_sb_cLdR::synapse0x269a010() {
   return (neuron0x268bff0()*-0.0562565);
}

double NNfunction_sb_cLdR::synapse0x268e910() {
   return (neuron0x268c330()*0.00452644);
}

double NNfunction_sb_cLdR::synapse0x268e950() {
   return (neuron0x268c670()*0.0249442);
}

double NNfunction_sb_cLdR::synapse0x24463c0() {
   return (neuron0x268c9b0()*-0.0446085);
}

double NNfunction_sb_cLdR::synapse0x2446400() {
   return (neuron0x268ccf0()*-0.0208525);
}

double NNfunction_sb_cLdR::synapse0x268f090() {
   return (neuron0x268d030()*-0.0370238);
}

double NNfunction_sb_cLdR::synapse0x268f0d0() {
   return (neuron0x268d370()*-0.0182037);
}

double NNfunction_sb_cLdR::synapse0x268f3d0() {
   return (neuron0x268d6b0()*0.026381);
}

double NNfunction_sb_cLdR::synapse0x268f410() {
   return (neuron0x268d9f0()*1.86106);
}

double NNfunction_sb_cLdR::synapse0x268f710() {
   return (neuron0x268dd30()*0.00253679);
}

double NNfunction_sb_cLdR::synapse0x268f750() {
   return (neuron0x268e070()*-0.0365253);
}

double NNfunction_sb_cLdR::synapse0x268fa50() {
   return (neuron0x268e3b0()*0.0124578);
}

double NNfunction_sb_cLdR::synapse0x268fa90() {
   return (neuron0x268e6f0()*-0.003424);
}

double NNfunction_sb_cLdR::synapse0x268fd90() {
   return (neuron0x268ec50()*-0.0148271);
}

double NNfunction_sb_cLdR::synapse0x268fdd0() {
   return (neuron0x268ee70()*-0.0188988);
}

double NNfunction_sb_cLdR::synapse0x26900d0() {
   return (neuron0x268f1b0()*0.0602779);
}

double NNfunction_sb_cLdR::synapse0x2690110() {
   return (neuron0x268f4f0()*-0.0272309);
}

double NNfunction_sb_cLdR::synapse0x268dc10() {
   return (neuron0x268f830()*0.0108398);
}

double NNfunction_sb_cLdR::synapse0x268dc50() {
   return (neuron0x268fb70()*0.00855548);
}

double NNfunction_sb_cLdR::synapse0x269bef0() {
   return (neuron0x268feb0()*0.0261878);
}

double NNfunction_sb_cLdR::synapse0x269c270() {
   return (neuron0x268b2f0()*-0.14678);
}

double NNfunction_sb_cLdR::synapse0x269c2b0() {
   return (neuron0x268b630()*0.234962);
}

double NNfunction_sb_cLdR::synapse0x269c2f0() {
   return (neuron0x268b970()*-0.303397);
}

double NNfunction_sb_cLdR::synapse0x269c330() {
   return (neuron0x268bcb0()*1.51149);
}

double NNfunction_sb_cLdR::synapse0x269c370() {
   return (neuron0x268bff0()*-0.124731);
}

double NNfunction_sb_cLdR::synapse0x269c3b0() {
   return (neuron0x268c330()*-0.253946);
}

double NNfunction_sb_cLdR::synapse0x269c3f0() {
   return (neuron0x268c670()*-0.221889);
}

double NNfunction_sb_cLdR::synapse0x269c430() {
   return (neuron0x268c9b0()*0.281201);
}

double NNfunction_sb_cLdR::synapse0x269c470() {
   return (neuron0x268ccf0()*0.00468089);
}

double NNfunction_sb_cLdR::synapse0x269c4b0() {
   return (neuron0x268d030()*0.115635);
}

double NNfunction_sb_cLdR::synapse0x269c4f0() {
   return (neuron0x268d370()*-0.0331502);
}

double NNfunction_sb_cLdR::synapse0x269c530() {
   return (neuron0x268d6b0()*0.175313);
}

double NNfunction_sb_cLdR::synapse0x269c570() {
   return (neuron0x268d9f0()*0.178477);
}

double NNfunction_sb_cLdR::synapse0x269c5b0() {
   return (neuron0x268dd30()*0.142186);
}

double NNfunction_sb_cLdR::synapse0x269c5f0() {
   return (neuron0x268e070()*-0.0861289);
}

double NNfunction_sb_cLdR::synapse0x269c630() {
   return (neuron0x268e3b0()*-0.193725);
}

double NNfunction_sb_cLdR::synapse0x269c0c0() {
   return (neuron0x268e6f0()*0.0302979);
}

double NNfunction_sb_cLdR::synapse0x269c100() {
   return (neuron0x268ec50()*0.0940565);
}

double NNfunction_sb_cLdR::synapse0x269c780() {
   return (neuron0x268ee70()*0.235262);
}

double NNfunction_sb_cLdR::synapse0x269c7c0() {
   return (neuron0x268f1b0()*-0.0203812);
}

double NNfunction_sb_cLdR::synapse0x269c800() {
   return (neuron0x268f4f0()*-0.11608);
}

double NNfunction_sb_cLdR::synapse0x269c840() {
   return (neuron0x268f830()*0.198422);
}

double NNfunction_sb_cLdR::synapse0x269c880() {
   return (neuron0x268fb70()*0.121359);
}

double NNfunction_sb_cLdR::synapse0x269c8c0() {
   return (neuron0x268feb0()*0.0151172);
}

double NNfunction_sb_cLdR::synapse0x269cc40() {
   return (neuron0x268b2f0()*-0.170994);
}

double NNfunction_sb_cLdR::synapse0x269cc80() {
   return (neuron0x268b630()*-0.0149987);
}

double NNfunction_sb_cLdR::synapse0x269ccc0() {
   return (neuron0x268b970()*0.263589);
}

double NNfunction_sb_cLdR::synapse0x269cd00() {
   return (neuron0x268bcb0()*-0.334896);
}

double NNfunction_sb_cLdR::synapse0x269cd40() {
   return (neuron0x268bff0()*-0.632255);
}

double NNfunction_sb_cLdR::synapse0x269cd80() {
   return (neuron0x268c330()*-0.219968);
}

double NNfunction_sb_cLdR::synapse0x269cdc0() {
   return (neuron0x268c670()*-0.182498);
}

double NNfunction_sb_cLdR::synapse0x269ce00() {
   return (neuron0x268c9b0()*-0.573046);
}

double NNfunction_sb_cLdR::synapse0x269ce40() {
   return (neuron0x268ccf0()*0.392236);
}

double NNfunction_sb_cLdR::synapse0x269ce80() {
   return (neuron0x268d030()*-0.224703);
}

double NNfunction_sb_cLdR::synapse0x269cec0() {
   return (neuron0x268d370()*0.168921);
}

double NNfunction_sb_cLdR::synapse0x269cf00() {
   return (neuron0x268d6b0()*-0.0011845);
}

double NNfunction_sb_cLdR::synapse0x269cf40() {
   return (neuron0x268d9f0()*0.126296);
}

double NNfunction_sb_cLdR::synapse0x269cf80() {
   return (neuron0x268dd30()*-0.13235);
}

double NNfunction_sb_cLdR::synapse0x269cfc0() {
   return (neuron0x268e070()*0.323237);
}

double NNfunction_sb_cLdR::synapse0x269d000() {
   return (neuron0x268e3b0()*0.419446);
}

double NNfunction_sb_cLdR::synapse0x269ca90() {
   return (neuron0x268e6f0()*-0.14156);
}

double NNfunction_sb_cLdR::synapse0x269cad0() {
   return (neuron0x268ec50()*0.0879395);
}

double NNfunction_sb_cLdR::synapse0x269d150() {
   return (neuron0x268ee70()*0.146853);
}

double NNfunction_sb_cLdR::synapse0x269d190() {
   return (neuron0x268f1b0()*0.35377);
}

double NNfunction_sb_cLdR::synapse0x269d1d0() {
   return (neuron0x268f4f0()*-0.0861887);
}

double NNfunction_sb_cLdR::synapse0x269d210() {
   return (neuron0x268f830()*-0.126571);
}

double NNfunction_sb_cLdR::synapse0x269d250() {
   return (neuron0x268fb70()*0.450045);
}

double NNfunction_sb_cLdR::synapse0x269d290() {
   return (neuron0x268feb0()*-0.39392);
}

double NNfunction_sb_cLdR::synapse0x269d610() {
   return (neuron0x268b2f0()*0.238696);
}

double NNfunction_sb_cLdR::synapse0x269d650() {
   return (neuron0x268b630()*0.0569059);
}

double NNfunction_sb_cLdR::synapse0x269d690() {
   return (neuron0x268b970()*0.16304);
}

double NNfunction_sb_cLdR::synapse0x269d6d0() {
   return (neuron0x268bcb0()*-0.0372305);
}

double NNfunction_sb_cLdR::synapse0x269d710() {
   return (neuron0x268bff0()*-0.310863);
}

double NNfunction_sb_cLdR::synapse0x269d750() {
   return (neuron0x268c330()*-0.49619);
}

double NNfunction_sb_cLdR::synapse0x269d790() {
   return (neuron0x268c670()*-0.235188);
}

double NNfunction_sb_cLdR::synapse0x269d7d0() {
   return (neuron0x268c9b0()*-0.385141);
}

double NNfunction_sb_cLdR::synapse0x269d810() {
   return (neuron0x268ccf0()*0.594555);
}

double NNfunction_sb_cLdR::synapse0x269d850() {
   return (neuron0x268d030()*0.622183);
}

double NNfunction_sb_cLdR::synapse0x269d890() {
   return (neuron0x268d370()*0.213778);
}

double NNfunction_sb_cLdR::synapse0x269d8d0() {
   return (neuron0x268d6b0()*0.0527687);
}

double NNfunction_sb_cLdR::synapse0x269d910() {
   return (neuron0x268d9f0()*0.236364);
}

double NNfunction_sb_cLdR::synapse0x269d950() {
   return (neuron0x268dd30()*-0.202703);
}

double NNfunction_sb_cLdR::synapse0x269d990() {
   return (neuron0x268e070()*-0.106067);
}

double NNfunction_sb_cLdR::synapse0x269d9d0() {
   return (neuron0x268e3b0()*-0.320233);
}

double NNfunction_sb_cLdR::synapse0x269d460() {
   return (neuron0x268e6f0()*-0.314699);
}

double NNfunction_sb_cLdR::synapse0x269d4a0() {
   return (neuron0x268ec50()*0.479073);
}

double NNfunction_sb_cLdR::synapse0x269db20() {
   return (neuron0x268ee70()*0.666679);
}

double NNfunction_sb_cLdR::synapse0x269db60() {
   return (neuron0x268f1b0()*-0.0464844);
}

double NNfunction_sb_cLdR::synapse0x269dba0() {
   return (neuron0x268f4f0()*0.492766);
}

double NNfunction_sb_cLdR::synapse0x269dbe0() {
   return (neuron0x268f830()*0.294536);
}

double NNfunction_sb_cLdR::synapse0x269dc20() {
   return (neuron0x268fb70()*-0.809915);
}

double NNfunction_sb_cLdR::synapse0x269dc60() {
   return (neuron0x268feb0()*0.0827031);
}

double NNfunction_sb_cLdR::synapse0x269dfe0() {
   return (neuron0x268b2f0()*0.315758);
}

double NNfunction_sb_cLdR::synapse0x269e020() {
   return (neuron0x268b630()*-0.215502);
}

double NNfunction_sb_cLdR::synapse0x269e060() {
   return (neuron0x268b970()*0.150561);
}

double NNfunction_sb_cLdR::synapse0x269e0a0() {
   return (neuron0x268bcb0()*0.333632);
}

double NNfunction_sb_cLdR::synapse0x269e0e0() {
   return (neuron0x268bff0()*0.0445589);
}

double NNfunction_sb_cLdR::synapse0x269e120() {
   return (neuron0x268c330()*0.345664);
}

double NNfunction_sb_cLdR::synapse0x269e160() {
   return (neuron0x268c670()*-0.155297);
}

double NNfunction_sb_cLdR::synapse0x269e1a0() {
   return (neuron0x268c9b0()*0.175697);
}

double NNfunction_sb_cLdR::synapse0x269e1e0() {
   return (neuron0x268ccf0()*-0.50128);
}

double NNfunction_sb_cLdR::synapse0x269e220() {
   return (neuron0x268d030()*-0.417385);
}

double NNfunction_sb_cLdR::synapse0x269e260() {
   return (neuron0x268d370()*0.3664);
}

double NNfunction_sb_cLdR::synapse0x269e2a0() {
   return (neuron0x268d6b0()*0.160922);
}

double NNfunction_sb_cLdR::synapse0x269e2e0() {
   return (neuron0x268d9f0()*-0.0904856);
}

double NNfunction_sb_cLdR::synapse0x269e320() {
   return (neuron0x268dd30()*0.107552);
}

double NNfunction_sb_cLdR::synapse0x269e360() {
   return (neuron0x268e070()*0.305968);
}

double NNfunction_sb_cLdR::synapse0x269e3a0() {
   return (neuron0x268e3b0()*-0.239144);
}

double NNfunction_sb_cLdR::synapse0x269de30() {
   return (neuron0x268e6f0()*0.251905);
}

double NNfunction_sb_cLdR::synapse0x269de70() {
   return (neuron0x268ec50()*-0.442327);
}

double NNfunction_sb_cLdR::synapse0x269e4f0() {
   return (neuron0x268ee70()*-0.0944145);
}

double NNfunction_sb_cLdR::synapse0x269e530() {
   return (neuron0x268f1b0()*0.368489);
}

double NNfunction_sb_cLdR::synapse0x269e570() {
   return (neuron0x268f4f0()*-0.104991);
}

double NNfunction_sb_cLdR::synapse0x269e5b0() {
   return (neuron0x268f830()*0.0492393);
}

double NNfunction_sb_cLdR::synapse0x269e5f0() {
   return (neuron0x268fb70()*0.473184);
}

double NNfunction_sb_cLdR::synapse0x269e630() {
   return (neuron0x268feb0()*0.124875);
}

double NNfunction_sb_cLdR::synapse0x269e9b0() {
   return (neuron0x268b2f0()*-0.0476281);
}

double NNfunction_sb_cLdR::synapse0x269e9f0() {
   return (neuron0x268b630()*-0.0288362);
}

double NNfunction_sb_cLdR::synapse0x269ea30() {
   return (neuron0x268b970()*0.586486);
}

double NNfunction_sb_cLdR::synapse0x269ea70() {
   return (neuron0x268bcb0()*0.477764);
}

double NNfunction_sb_cLdR::synapse0x269eab0() {
   return (neuron0x268bff0()*0.0812018);
}

double NNfunction_sb_cLdR::synapse0x269eaf0() {
   return (neuron0x268c330()*0.0332541);
}

double NNfunction_sb_cLdR::synapse0x269eb30() {
   return (neuron0x268c670()*-0.0815595);
}

double NNfunction_sb_cLdR::synapse0x269eb70() {
   return (neuron0x268c9b0()*-0.0905752);
}

double NNfunction_sb_cLdR::synapse0x269ebb0() {
   return (neuron0x268ccf0()*-0.0393084);
}

double NNfunction_sb_cLdR::synapse0x2696d70() {
   return (neuron0x268d030()*0.0990092);
}

double NNfunction_sb_cLdR::synapse0x2696db0() {
   return (neuron0x268d370()*-0.21388);
}

double NNfunction_sb_cLdR::synapse0x2696df0() {
   return (neuron0x268d6b0()*-0.0995146);
}

double NNfunction_sb_cLdR::synapse0x2696e30() {
   return (neuron0x268d9f0()*-1.06379);
}

double NNfunction_sb_cLdR::synapse0x2696e70() {
   return (neuron0x268dd30()*0.0329063);
}

double NNfunction_sb_cLdR::synapse0x2696eb0() {
   return (neuron0x268e070()*0.108926);
}

double NNfunction_sb_cLdR::synapse0x2696ef0() {
   return (neuron0x268e3b0()*-0.0816734);
}

double NNfunction_sb_cLdR::synapse0x269e800() {
   return (neuron0x268e6f0()*0.0862534);
}

double NNfunction_sb_cLdR::synapse0x269e840() {
   return (neuron0x268ec50()*0.105135);
}

double NNfunction_sb_cLdR::synapse0x2697040() {
   return (neuron0x268ee70()*-0.029067);
}

double NNfunction_sb_cLdR::synapse0x2697080() {
   return (neuron0x268f1b0()*-0.163282);
}

double NNfunction_sb_cLdR::synapse0x26970c0() {
   return (neuron0x268f4f0()*-0.110654);
}

double NNfunction_sb_cLdR::synapse0x2697100() {
   return (neuron0x268f830()*-0.0380936);
}

double NNfunction_sb_cLdR::synapse0x2697140() {
   return (neuron0x268fb70()*0.135206);
}

double NNfunction_sb_cLdR::synapse0x2697180() {
   return (neuron0x268feb0()*-0.0598934);
}

double NNfunction_sb_cLdR::synapse0x2697500() {
   return (neuron0x268b2f0()*-0.0167404);
}

double NNfunction_sb_cLdR::synapse0x2697540() {
   return (neuron0x268b630()*-0.0414651);
}

double NNfunction_sb_cLdR::synapse0x2697580() {
   return (neuron0x268b970()*-0.00490623);
}

double NNfunction_sb_cLdR::synapse0x26975c0() {
   return (neuron0x268bcb0()*11.8379);
}

double NNfunction_sb_cLdR::synapse0x2697600() {
   return (neuron0x268bff0()*-0.0350697);
}

double NNfunction_sb_cLdR::synapse0x2697640() {
   return (neuron0x268c330()*-0.0214374);
}

double NNfunction_sb_cLdR::synapse0x2697680() {
   return (neuron0x268c670()*-0.00309433);
}

double NNfunction_sb_cLdR::synapse0x26976c0() {
   return (neuron0x268c9b0()*-0.0376346);
}

double NNfunction_sb_cLdR::synapse0x2697700() {
   return (neuron0x268ccf0()*-0.010944);
}

double NNfunction_sb_cLdR::synapse0x2697740() {
   return (neuron0x268d030()*0.000297757);
}

double NNfunction_sb_cLdR::synapse0x2697780() {
   return (neuron0x268d370()*0.00857932);
}

double NNfunction_sb_cLdR::synapse0x26977c0() {
   return (neuron0x268d6b0()*0.0409093);
}

double NNfunction_sb_cLdR::synapse0x2697800() {
   return (neuron0x268d9f0()*0.128849);
}

double NNfunction_sb_cLdR::synapse0x2697840() {
   return (neuron0x268dd30()*0.0312813);
}

double NNfunction_sb_cLdR::synapse0x2697880() {
   return (neuron0x268e070()*-0.0309154);
}

double NNfunction_sb_cLdR::synapse0x26978c0() {
   return (neuron0x268e3b0()*0.00589767);
}

double NNfunction_sb_cLdR::synapse0x2697350() {
   return (neuron0x268e6f0()*0.032604);
}

double NNfunction_sb_cLdR::synapse0x2697390() {
   return (neuron0x268ec50()*0.0906852);
}

double NNfunction_sb_cLdR::synapse0x2697a10() {
   return (neuron0x268ee70()*0.0036053);
}

double NNfunction_sb_cLdR::synapse0x2697a50() {
   return (neuron0x268f1b0()*0.0530109);
}

double NNfunction_sb_cLdR::synapse0x2697a90() {
   return (neuron0x268f4f0()*0.0491329);
}

double NNfunction_sb_cLdR::synapse0x2697ad0() {
   return (neuron0x268f830()*-0.0111414);
}

double NNfunction_sb_cLdR::synapse0x2697b10() {
   return (neuron0x268fb70()*-0.0364756);
}

double NNfunction_sb_cLdR::synapse0x2697b50() {
   return (neuron0x268feb0()*-0.00418403);
}

double NNfunction_sb_cLdR::synapse0x2697d20() {
   return (neuron0x268b2f0()*-0.74654);
}

double NNfunction_sb_cLdR::synapse0x26a0db0() {
   return (neuron0x268b630()*-0.234845);
}

double NNfunction_sb_cLdR::synapse0x26a0df0() {
   return (neuron0x268b970()*-0.514251);
}

double NNfunction_sb_cLdR::synapse0x26a0e30() {
   return (neuron0x268bcb0()*0.303626);
}

double NNfunction_sb_cLdR::synapse0x26a0e70() {
   return (neuron0x268bff0()*0.383752);
}

double NNfunction_sb_cLdR::synapse0x26a0eb0() {
   return (neuron0x268c330()*0.0836045);
}

double NNfunction_sb_cLdR::synapse0x26a0ef0() {
   return (neuron0x268c670()*0.366156);
}

double NNfunction_sb_cLdR::synapse0x26a0f30() {
   return (neuron0x268c9b0()*0.172658);
}

double NNfunction_sb_cLdR::synapse0x26a0f70() {
   return (neuron0x268ccf0()*0.0491195);
}

double NNfunction_sb_cLdR::synapse0x26a0fb0() {
   return (neuron0x268d030()*-0.0820151);
}

double NNfunction_sb_cLdR::synapse0x26a0ff0() {
   return (neuron0x268d370()*-0.690252);
}

double NNfunction_sb_cLdR::synapse0x26a1030() {
   return (neuron0x268d6b0()*-1.19643);
}

double NNfunction_sb_cLdR::synapse0x26a1070() {
   return (neuron0x268d9f0()*-0.335113);
}

double NNfunction_sb_cLdR::synapse0x26a10b0() {
   return (neuron0x268dd30()*-0.746513);
}

double NNfunction_sb_cLdR::synapse0x26a10f0() {
   return (neuron0x268e070()*-0.461791);
}

double NNfunction_sb_cLdR::synapse0x26a1130() {
   return (neuron0x268e3b0()*0.152249);
}

double NNfunction_sb_cLdR::synapse0x26a0c00() {
   return (neuron0x268e6f0()*-0.718302);
}

double NNfunction_sb_cLdR::synapse0x26a0c40() {
   return (neuron0x268ec50()*-0.655265);
}

double NNfunction_sb_cLdR::synapse0x26a1280() {
   return (neuron0x268ee70()*0.450978);
}

double NNfunction_sb_cLdR::synapse0x26a12c0() {
   return (neuron0x268f1b0()*0.157778);
}

double NNfunction_sb_cLdR::synapse0x26a1300() {
   return (neuron0x268f4f0()*0.101686);
}

double NNfunction_sb_cLdR::synapse0x26a1340() {
   return (neuron0x268f830()*0.309709);
}

double NNfunction_sb_cLdR::synapse0x26a1380() {
   return (neuron0x268fb70()*-0.85161);
}

double NNfunction_sb_cLdR::synapse0x26a13c0() {
   return (neuron0x268feb0()*-0.176877);
}

double NNfunction_sb_cLdR::synapse0x26a1740() {
   return (neuron0x268b2f0()*-0.29013);
}

double NNfunction_sb_cLdR::synapse0x26a1780() {
   return (neuron0x268b630()*-0.277812);
}

double NNfunction_sb_cLdR::synapse0x26a17c0() {
   return (neuron0x268b970()*0.109321);
}

double NNfunction_sb_cLdR::synapse0x26a1800() {
   return (neuron0x268bcb0()*-0.118988);
}

double NNfunction_sb_cLdR::synapse0x26a1840() {
   return (neuron0x268bff0()*0.26688);
}

double NNfunction_sb_cLdR::synapse0x26a1880() {
   return (neuron0x268c330()*-0.295406);
}

double NNfunction_sb_cLdR::synapse0x26a18c0() {
   return (neuron0x268c670()*-0.478255);
}

double NNfunction_sb_cLdR::synapse0x26a1900() {
   return (neuron0x268c9b0()*-0.109817);
}

double NNfunction_sb_cLdR::synapse0x26a1940() {
   return (neuron0x268ccf0()*0.12374);
}

double NNfunction_sb_cLdR::synapse0x26a1980() {
   return (neuron0x268d030()*0.299308);
}

double NNfunction_sb_cLdR::synapse0x26a19c0() {
   return (neuron0x268d370()*-0.483689);
}

double NNfunction_sb_cLdR::synapse0x26a1a00() {
   return (neuron0x268d6b0()*0.470654);
}

double NNfunction_sb_cLdR::synapse0x26a1a40() {
   return (neuron0x268d9f0()*0.338806);
}

double NNfunction_sb_cLdR::synapse0x26a1a80() {
   return (neuron0x268dd30()*-0.539527);
}

double NNfunction_sb_cLdR::synapse0x26a1ac0() {
   return (neuron0x268e070()*-0.358645);
}

double NNfunction_sb_cLdR::synapse0x26a1b00() {
   return (neuron0x268e3b0()*-0.185798);
}

double NNfunction_sb_cLdR::synapse0x26a1590() {
   return (neuron0x268e6f0()*0.0297446);
}

double NNfunction_sb_cLdR::synapse0x26a15d0() {
   return (neuron0x268ec50()*0.134739);
}

double NNfunction_sb_cLdR::synapse0x26a1c50() {
   return (neuron0x268ee70()*0.26999);
}

double NNfunction_sb_cLdR::synapse0x26a1c90() {
   return (neuron0x268f1b0()*0.775502);
}

double NNfunction_sb_cLdR::synapse0x26a1cd0() {
   return (neuron0x268f4f0()*-0.119945);
}

double NNfunction_sb_cLdR::synapse0x26a1d10() {
   return (neuron0x268f830()*0.0723105);
}

double NNfunction_sb_cLdR::synapse0x26a1d50() {
   return (neuron0x268fb70()*-0.195093);
}

double NNfunction_sb_cLdR::synapse0x26a1d90() {
   return (neuron0x268feb0()*0.0821002);
}

double NNfunction_sb_cLdR::synapse0x26a2110() {
   return (neuron0x268b2f0()*-0.0151912);
}

double NNfunction_sb_cLdR::synapse0x26a2150() {
   return (neuron0x268b630()*0.030303);
}

double NNfunction_sb_cLdR::synapse0x26a2190() {
   return (neuron0x268b970()*0.0826374);
}

double NNfunction_sb_cLdR::synapse0x26a21d0() {
   return (neuron0x268bcb0()*-0.118797);
}

double NNfunction_sb_cLdR::synapse0x26a2210() {
   return (neuron0x268bff0()*-0.00301192);
}

double NNfunction_sb_cLdR::synapse0x26a2250() {
   return (neuron0x268c330()*-0.00814022);
}

double NNfunction_sb_cLdR::synapse0x26a2290() {
   return (neuron0x268c670()*0.0119796);
}

double NNfunction_sb_cLdR::synapse0x26a22d0() {
   return (neuron0x268c9b0()*-0.0182384);
}

double NNfunction_sb_cLdR::synapse0x26a2310() {
   return (neuron0x268ccf0()*-0.0193808);
}

double NNfunction_sb_cLdR::synapse0x26a2350() {
   return (neuron0x268d030()*-0.0101073);
}

double NNfunction_sb_cLdR::synapse0x26a2390() {
   return (neuron0x268d370()*-0.00109062);
}

double NNfunction_sb_cLdR::synapse0x26a23d0() {
   return (neuron0x268d6b0()*0.00611412);
}

double NNfunction_sb_cLdR::synapse0x26a2410() {
   return (neuron0x268d9f0()*-0.622754);
}

double NNfunction_sb_cLdR::synapse0x26a2450() {
   return (neuron0x268dd30()*-0.0111466);
}

double NNfunction_sb_cLdR::synapse0x26a2490() {
   return (neuron0x268e070()*0.0267348);
}

double NNfunction_sb_cLdR::synapse0x26a24d0() {
   return (neuron0x268e3b0()*0.000485692);
}

double NNfunction_sb_cLdR::synapse0x26a1f60() {
   return (neuron0x268e6f0()*-0.0256295);
}

double NNfunction_sb_cLdR::synapse0x26a1fa0() {
   return (neuron0x268ec50()*-0.482462);
}

double NNfunction_sb_cLdR::synapse0x26a2620() {
   return (neuron0x268ee70()*-0.00360502);
}

double NNfunction_sb_cLdR::synapse0x26a2660() {
   return (neuron0x268f1b0()*0.00720429);
}

double NNfunction_sb_cLdR::synapse0x26a26a0() {
   return (neuron0x268f4f0()*-0.000951656);
}

double NNfunction_sb_cLdR::synapse0x26a26e0() {
   return (neuron0x268f830()*0.00455018);
}

double NNfunction_sb_cLdR::synapse0x26a2720() {
   return (neuron0x268fb70()*0.0031342);
}

double NNfunction_sb_cLdR::synapse0x26a2760() {
   return (neuron0x268feb0()*0.00149738);
}

double NNfunction_sb_cLdR::synapse0x26a2ae0() {
   return (neuron0x268b2f0()*0.141947);
}

double NNfunction_sb_cLdR::synapse0x26a2b20() {
   return (neuron0x268b630()*-0.427631);
}

double NNfunction_sb_cLdR::synapse0x26a2b60() {
   return (neuron0x268b970()*0.0531496);
}

double NNfunction_sb_cLdR::synapse0x26a2ba0() {
   return (neuron0x268bcb0()*-0.436314);
}

double NNfunction_sb_cLdR::synapse0x26a2be0() {
   return (neuron0x268bff0()*0.220182);
}

double NNfunction_sb_cLdR::synapse0x26a2c20() {
   return (neuron0x268c330()*-0.21614);
}

double NNfunction_sb_cLdR::synapse0x26a2c60() {
   return (neuron0x268c670()*-0.424887);
}

double NNfunction_sb_cLdR::synapse0x26a2ca0() {
   return (neuron0x268c9b0()*-0.132929);
}

double NNfunction_sb_cLdR::synapse0x26a2ce0() {
   return (neuron0x268ccf0()*0.244823);
}

double NNfunction_sb_cLdR::synapse0x26a2d20() {
   return (neuron0x268d030()*-0.772537);
}

double NNfunction_sb_cLdR::synapse0x26a2d60() {
   return (neuron0x268d370()*-0.153573);
}

double NNfunction_sb_cLdR::synapse0x26a2da0() {
   return (neuron0x268d6b0()*-0.437121);
}

double NNfunction_sb_cLdR::synapse0x26a2de0() {
   return (neuron0x268d9f0()*-0.144504);
}

double NNfunction_sb_cLdR::synapse0x26a2e20() {
   return (neuron0x268dd30()*0.680836);
}

double NNfunction_sb_cLdR::synapse0x26a2e60() {
   return (neuron0x268e070()*-0.301092);
}

double NNfunction_sb_cLdR::synapse0x26a2ea0() {
   return (neuron0x268e3b0()*-0.351945);
}

double NNfunction_sb_cLdR::synapse0x26a2930() {
   return (neuron0x268e6f0()*0.0271002);
}

double NNfunction_sb_cLdR::synapse0x26a2970() {
   return (neuron0x268ec50()*-0.568689);
}

double NNfunction_sb_cLdR::synapse0x26a2ff0() {
   return (neuron0x268ee70()*0.344596);
}

double NNfunction_sb_cLdR::synapse0x26a3030() {
   return (neuron0x268f1b0()*-0.639886);
}

double NNfunction_sb_cLdR::synapse0x26a3070() {
   return (neuron0x268f4f0()*0.618006);
}

double NNfunction_sb_cLdR::synapse0x26a30b0() {
   return (neuron0x268f830()*0.391497);
}

double NNfunction_sb_cLdR::synapse0x26a30f0() {
   return (neuron0x268fb70()*-0.328875);
}

double NNfunction_sb_cLdR::synapse0x26a3130() {
   return (neuron0x268feb0()*0.508065);
}

double NNfunction_sb_cLdR::synapse0x26a34b0() {
   return (neuron0x268b2f0()*-0.392925);
}

double NNfunction_sb_cLdR::synapse0x26a34f0() {
   return (neuron0x268b630()*0.477208);
}

double NNfunction_sb_cLdR::synapse0x26a3530() {
   return (neuron0x268b970()*-0.328565);
}

double NNfunction_sb_cLdR::synapse0x26a3570() {
   return (neuron0x268bcb0()*1.57408);
}

double NNfunction_sb_cLdR::synapse0x26a35b0() {
   return (neuron0x268bff0()*-0.33549);
}

double NNfunction_sb_cLdR::synapse0x26a35f0() {
   return (neuron0x268c330()*-0.4895);
}

double NNfunction_sb_cLdR::synapse0x26a3630() {
   return (neuron0x268c670()*0.0921599);
}

double NNfunction_sb_cLdR::synapse0x26a3670() {
   return (neuron0x268c9b0()*-0.663251);
}

double NNfunction_sb_cLdR::synapse0x26a36b0() {
   return (neuron0x268ccf0()*-0.365229);
}

double NNfunction_sb_cLdR::synapse0x26a36f0() {
   return (neuron0x268d030()*-0.51582);
}

double NNfunction_sb_cLdR::synapse0x26a3730() {
   return (neuron0x268d370()*-0.491553);
}

double NNfunction_sb_cLdR::synapse0x26a3770() {
   return (neuron0x268d6b0()*-0.0707053);
}

double NNfunction_sb_cLdR::synapse0x26a37b0() {
   return (neuron0x268d9f0()*0.319803);
}

double NNfunction_sb_cLdR::synapse0x26a37f0() {
   return (neuron0x268dd30()*0.574759);
}

double NNfunction_sb_cLdR::synapse0x26a3830() {
   return (neuron0x268e070()*0.176044);
}

double NNfunction_sb_cLdR::synapse0x26a3870() {
   return (neuron0x268e3b0()*-0.302315);
}

double NNfunction_sb_cLdR::synapse0x26a3300() {
   return (neuron0x268e6f0()*0.308914);
}

double NNfunction_sb_cLdR::synapse0x26a3340() {
   return (neuron0x268ec50()*0.466723);
}

double NNfunction_sb_cLdR::synapse0x26a39c0() {
   return (neuron0x268ee70()*-0.0933014);
}

double NNfunction_sb_cLdR::synapse0x26a3a00() {
   return (neuron0x268f1b0()*-0.262809);
}

double NNfunction_sb_cLdR::synapse0x26a3a40() {
   return (neuron0x268f4f0()*0.492951);
}

double NNfunction_sb_cLdR::synapse0x26a3a80() {
   return (neuron0x268f830()*0.518419);
}

double NNfunction_sb_cLdR::synapse0x26a3ac0() {
   return (neuron0x268fb70()*-0.409752);
}

double NNfunction_sb_cLdR::synapse0x26a3b00() {
   return (neuron0x268feb0()*0.0656106);
}

double NNfunction_sb_cLdR::synapse0x26a3e80() {
   return (neuron0x268b2f0()*0.627424);
}

double NNfunction_sb_cLdR::synapse0x26a3ec0() {
   return (neuron0x268b630()*0.209601);
}

double NNfunction_sb_cLdR::synapse0x26a3f00() {
   return (neuron0x268b970()*-1.29095);
}

double NNfunction_sb_cLdR::synapse0x26a3f40() {
   return (neuron0x268bcb0()*-0.242282);
}

double NNfunction_sb_cLdR::synapse0x26a3f80() {
   return (neuron0x268bff0()*-0.859366);
}

double NNfunction_sb_cLdR::synapse0x26a3fc0() {
   return (neuron0x268c330()*0.151268);
}

double NNfunction_sb_cLdR::synapse0x26a4000() {
   return (neuron0x268c670()*-0.654567);
}

double NNfunction_sb_cLdR::synapse0x26a4040() {
   return (neuron0x268c9b0()*0.436062);
}

double NNfunction_sb_cLdR::synapse0x26a4080() {
   return (neuron0x268ccf0()*-0.496558);
}

double NNfunction_sb_cLdR::synapse0x26a40c0() {
   return (neuron0x268d030()*-0.126021);
}

double NNfunction_sb_cLdR::synapse0x26a4100() {
   return (neuron0x268d370()*-0.10343);
}

double NNfunction_sb_cLdR::synapse0x26a4140() {
   return (neuron0x268d6b0()*0.985133);
}

double NNfunction_sb_cLdR::synapse0x26a4180() {
   return (neuron0x268d9f0()*-0.664414);
}

double NNfunction_sb_cLdR::synapse0x26a41c0() {
   return (neuron0x268dd30()*0.591509);
}

double NNfunction_sb_cLdR::synapse0x26a4200() {
   return (neuron0x268e070()*-0.454231);
}

double NNfunction_sb_cLdR::synapse0x26a4240() {
   return (neuron0x268e3b0()*-0.00617392);
}

double NNfunction_sb_cLdR::synapse0x26a3cd0() {
   return (neuron0x268e6f0()*-0.245511);
}

double NNfunction_sb_cLdR::synapse0x26a3d10() {
   return (neuron0x268ec50()*-0.910714);
}

double NNfunction_sb_cLdR::synapse0x26a4390() {
   return (neuron0x268ee70()*0.392575);
}

double NNfunction_sb_cLdR::synapse0x26a43d0() {
   return (neuron0x268f1b0()*0.177736);
}

double NNfunction_sb_cLdR::synapse0x26a4410() {
   return (neuron0x268f4f0()*-0.0253981);
}

double NNfunction_sb_cLdR::synapse0x26a4450() {
   return (neuron0x268f830()*0.0599423);
}

double NNfunction_sb_cLdR::synapse0x26a4490() {
   return (neuron0x268fb70()*-0.475279);
}

double NNfunction_sb_cLdR::synapse0x26a44d0() {
   return (neuron0x268feb0()*-0.032807);
}

double NNfunction_sb_cLdR::synapse0x26a4850() {
   return (neuron0x268b2f0()*0.0918966);
}

double NNfunction_sb_cLdR::synapse0x26a4890() {
   return (neuron0x268b630()*0.106513);
}

double NNfunction_sb_cLdR::synapse0x26a48d0() {
   return (neuron0x268b970()*-0.0895059);
}

double NNfunction_sb_cLdR::synapse0x26a4910() {
   return (neuron0x268bcb0()*0.214954);
}

double NNfunction_sb_cLdR::synapse0x26a4950() {
   return (neuron0x268bff0()*-0.384142);
}

double NNfunction_sb_cLdR::synapse0x26a4990() {
   return (neuron0x268c330()*-0.482936);
}

double NNfunction_sb_cLdR::synapse0x26a49d0() {
   return (neuron0x268c670()*-0.391995);
}

double NNfunction_sb_cLdR::synapse0x26a4a10() {
   return (neuron0x268c9b0()*-0.163845);
}

double NNfunction_sb_cLdR::synapse0x26a4a50() {
   return (neuron0x268ccf0()*-0.14873);
}

double NNfunction_sb_cLdR::synapse0x26a4a90() {
   return (neuron0x268d030()*-0.264213);
}

double NNfunction_sb_cLdR::synapse0x26a4ad0() {
   return (neuron0x268d370()*-0.403757);
}

double NNfunction_sb_cLdR::synapse0x26a4b10() {
   return (neuron0x268d6b0()*0.188694);
}

double NNfunction_sb_cLdR::synapse0x26a4b50() {
   return (neuron0x268d9f0()*0.491661);
}

double NNfunction_sb_cLdR::synapse0x26a4b90() {
   return (neuron0x268dd30()*0.137207);
}

double NNfunction_sb_cLdR::synapse0x26a4bd0() {
   return (neuron0x268e070()*0.129584);
}

double NNfunction_sb_cLdR::synapse0x26a4c10() {
   return (neuron0x268e3b0()*-0.121741);
}

double NNfunction_sb_cLdR::synapse0x26a46a0() {
   return (neuron0x268e6f0()*-0.0360659);
}

double NNfunction_sb_cLdR::synapse0x26a46e0() {
   return (neuron0x268ec50()*0.538221);
}

double NNfunction_sb_cLdR::synapse0x26a4d60() {
   return (neuron0x268ee70()*0.297717);
}

double NNfunction_sb_cLdR::synapse0x26a4da0() {
   return (neuron0x268f1b0()*-0.394315);
}

double NNfunction_sb_cLdR::synapse0x26a4de0() {
   return (neuron0x268f4f0()*0.21221);
}

double NNfunction_sb_cLdR::synapse0x26a4e20() {
   return (neuron0x268f830()*0.251305);
}

double NNfunction_sb_cLdR::synapse0x26a4e60() {
   return (neuron0x268fb70()*-0.199105);
}

double NNfunction_sb_cLdR::synapse0x26a4ea0() {
   return (neuron0x268feb0()*0.0637501);
}

double NNfunction_sb_cLdR::synapse0x26a5220() {
   return (neuron0x268b2f0()*-0.243936);
}

double NNfunction_sb_cLdR::synapse0x26a5260() {
   return (neuron0x268b630()*-0.221728);
}

double NNfunction_sb_cLdR::synapse0x26a52a0() {
   return (neuron0x268b970()*0.0764909);
}

double NNfunction_sb_cLdR::synapse0x26a52e0() {
   return (neuron0x268bcb0()*1.4035);
}

double NNfunction_sb_cLdR::synapse0x26a5320() {
   return (neuron0x268bff0()*0.257464);
}

double NNfunction_sb_cLdR::synapse0x26a5360() {
   return (neuron0x268c330()*0.159649);
}

double NNfunction_sb_cLdR::synapse0x26a53a0() {
   return (neuron0x268c670()*-0.275421);
}

double NNfunction_sb_cLdR::synapse0x26a53e0() {
   return (neuron0x268c9b0()*0.206458);
}

double NNfunction_sb_cLdR::synapse0x26a5420() {
   return (neuron0x268ccf0()*-0.0647778);
}

double NNfunction_sb_cLdR::synapse0x26a5460() {
   return (neuron0x268d030()*0.0696433);
}

double NNfunction_sb_cLdR::synapse0x26a54a0() {
   return (neuron0x268d370()*0.26036);
}

double NNfunction_sb_cLdR::synapse0x26a54e0() {
   return (neuron0x268d6b0()*-0.116957);
}

double NNfunction_sb_cLdR::synapse0x26a5520() {
   return (neuron0x268d9f0()*-0.583134);
}

double NNfunction_sb_cLdR::synapse0x26a5560() {
   return (neuron0x268dd30()*-0.180251);
}

double NNfunction_sb_cLdR::synapse0x26a55a0() {
   return (neuron0x268e070()*0.12773);
}

double NNfunction_sb_cLdR::synapse0x26a55e0() {
   return (neuron0x268e3b0()*0.0165028);
}

double NNfunction_sb_cLdR::synapse0x26a5070() {
   return (neuron0x268e6f0()*0.238783);
}

double NNfunction_sb_cLdR::synapse0x26a50b0() {
   return (neuron0x268ec50()*-0.46743);
}

double NNfunction_sb_cLdR::synapse0x26a5730() {
   return (neuron0x268ee70()*-0.0782688);
}

double NNfunction_sb_cLdR::synapse0x26a5770() {
   return (neuron0x268f1b0()*0.0570808);
}

double NNfunction_sb_cLdR::synapse0x26a57b0() {
   return (neuron0x268f4f0()*-0.0693875);
}

double NNfunction_sb_cLdR::synapse0x26a57f0() {
   return (neuron0x268f830()*-0.128621);
}

double NNfunction_sb_cLdR::synapse0x26a5830() {
   return (neuron0x268fb70()*0.0457639);
}

double NNfunction_sb_cLdR::synapse0x26a5870() {
   return (neuron0x268feb0()*0.326374);
}

double NNfunction_sb_cLdR::synapse0x26a5bf0() {
   return (neuron0x268b2f0()*-0.879273);
}

double NNfunction_sb_cLdR::synapse0x269a1c0() {
   return (neuron0x268b630()*0.184198);
}

double NNfunction_sb_cLdR::synapse0x269a200() {
   return (neuron0x268b970()*-0.125579);
}

double NNfunction_sb_cLdR::synapse0x269a240() {
   return (neuron0x268bcb0()*0.128818);
}

double NNfunction_sb_cLdR::synapse0x269a490() {
   return (neuron0x268bff0()*0.407341);
}

double NNfunction_sb_cLdR::synapse0x269a4d0() {
   return (neuron0x268c330()*-0.159657);
}

double NNfunction_sb_cLdR::synapse0x269a510() {
   return (neuron0x268c670()*-0.455048);
}

double NNfunction_sb_cLdR::synapse0x269a760() {
   return (neuron0x268c9b0()*0.238708);
}

double NNfunction_sb_cLdR::synapse0x269a7a0() {
   return (neuron0x268ccf0()*-0.393003);
}

double NNfunction_sb_cLdR::synapse0x269a9f0() {
   return (neuron0x268d030()*0.193521);
}

double NNfunction_sb_cLdR::synapse0x269aa30() {
   return (neuron0x268d370()*-0.375216);
}

double NNfunction_sb_cLdR::synapse0x269aa70() {
   return (neuron0x268d6b0()*0.144306);
}

double NNfunction_sb_cLdR::synapse0x269acc0() {
   return (neuron0x268d9f0()*0.0271702);
}

double NNfunction_sb_cLdR::synapse0x269ad00() {
   return (neuron0x268dd30()*0.386948);
}

double NNfunction_sb_cLdR::synapse0x269af50() {
   return (neuron0x268e070()*0.355188);
}

double NNfunction_sb_cLdR::synapse0x269af90() {
   return (neuron0x268e3b0()*0.201274);
}

double NNfunction_sb_cLdR::synapse0x26a5a40() {
   return (neuron0x268e6f0()*-0.485234);
}

double NNfunction_sb_cLdR::synapse0x26a5a80() {
   return (neuron0x268ec50()*0.0426075);
}

double NNfunction_sb_cLdR::synapse0x269b0e0() {
   return (neuron0x268ee70()*0.118636);
}

double NNfunction_sb_cLdR::synapse0x269b5f0() {
   return (neuron0x268f1b0()*0.551626);
}

double NNfunction_sb_cLdR::synapse0x269b630() {
   return (neuron0x268f4f0()*0.517489);
}

double NNfunction_sb_cLdR::synapse0x269b670() {
   return (neuron0x268f830()*0.0162975);
}

double NNfunction_sb_cLdR::synapse0x269b8c0() {
   return (neuron0x268fb70()*0.0146967);
}

double NNfunction_sb_cLdR::synapse0x269b900() {
   return (neuron0x268feb0()*0.646164);
}

double NNfunction_sb_cLdR::synapse0x269b1b0() {
   return (neuron0x268b2f0()*-0.376402);
}

double NNfunction_sb_cLdR::synapse0x269b1f0() {
   return (neuron0x268b630()*-0.143177);
}

double NNfunction_sb_cLdR::synapse0x269b230() {
   return (neuron0x268b970()*-0.013312);
}

double NNfunction_sb_cLdR::synapse0x269b270() {
   return (neuron0x268bcb0()*0.81239);
}

double NNfunction_sb_cLdR::synapse0x269bbf0() {
   return (neuron0x268bff0()*0.277308);
}

double NNfunction_sb_cLdR::synapse0x26a7f40() {
   return (neuron0x268c330()*0.0783695);
}

double NNfunction_sb_cLdR::synapse0x26a7f80() {
   return (neuron0x268c670()*0.186015);
}

double NNfunction_sb_cLdR::synapse0x26a7fc0() {
   return (neuron0x268c9b0()*0.496289);
}

double NNfunction_sb_cLdR::synapse0x26a8000() {
   return (neuron0x268ccf0()*-0.327527);
}

double NNfunction_sb_cLdR::synapse0x26a8040() {
   return (neuron0x268d030()*-0.425697);
}

double NNfunction_sb_cLdR::synapse0x26a8080() {
   return (neuron0x268d370()*-0.948321);
}

double NNfunction_sb_cLdR::synapse0x26a80c0() {
   return (neuron0x268d6b0()*-0.070323);
}

double NNfunction_sb_cLdR::synapse0x26a8100() {
   return (neuron0x268d9f0()*-0.356826);
}

double NNfunction_sb_cLdR::synapse0x26a8140() {
   return (neuron0x268dd30()*-0.224609);
}

double NNfunction_sb_cLdR::synapse0x26a8180() {
   return (neuron0x268e070()*0.242276);
}

double NNfunction_sb_cLdR::synapse0x26a81c0() {
   return (neuron0x268e3b0()*0.170417);
}

double NNfunction_sb_cLdR::synapse0x269bad0() {
   return (neuron0x268e6f0()*0.0845769);
}

double NNfunction_sb_cLdR::synapse0x269bb10() {
   return (neuron0x268ec50()*-0.571099);
}

double NNfunction_sb_cLdR::synapse0x26a8310() {
   return (neuron0x268ee70()*-0.169989);
}

double NNfunction_sb_cLdR::synapse0x26a8350() {
   return (neuron0x268f1b0()*0.426113);
}

double NNfunction_sb_cLdR::synapse0x26a8390() {
   return (neuron0x268f4f0()*0.0990905);
}

double NNfunction_sb_cLdR::synapse0x26a83d0() {
   return (neuron0x268f830()*-0.215927);
}

double NNfunction_sb_cLdR::synapse0x26a8410() {
   return (neuron0x268fb70()*0.0111585);
}

double NNfunction_sb_cLdR::synapse0x26a8450() {
   return (neuron0x268feb0()*0.00501244);
}

double NNfunction_sb_cLdR::synapse0x26a87d0() {
   return (neuron0x268b2f0()*-0.0512929);
}

double NNfunction_sb_cLdR::synapse0x26a8810() {
   return (neuron0x268b630()*0.444942);
}

double NNfunction_sb_cLdR::synapse0x26a8850() {
   return (neuron0x268b970()*0.664554);
}

double NNfunction_sb_cLdR::synapse0x26a8890() {
   return (neuron0x268bcb0()*-0.882534);
}

double NNfunction_sb_cLdR::synapse0x26a88d0() {
   return (neuron0x268bff0()*0.378579);
}

double NNfunction_sb_cLdR::synapse0x26a8910() {
   return (neuron0x268c330()*-0.572804);
}

double NNfunction_sb_cLdR::synapse0x26a8950() {
   return (neuron0x268c670()*0.0626997);
}

double NNfunction_sb_cLdR::synapse0x26a8990() {
   return (neuron0x268c9b0()*0.434955);
}

double NNfunction_sb_cLdR::synapse0x26a89d0() {
   return (neuron0x268ccf0()*-0.0176106);
}

double NNfunction_sb_cLdR::synapse0x26a8a10() {
   return (neuron0x268d030()*-0.0304636);
}

double NNfunction_sb_cLdR::synapse0x26a8a50() {
   return (neuron0x268d370()*0.178131);
}

double NNfunction_sb_cLdR::synapse0x26a8a90() {
   return (neuron0x268d6b0()*-0.516589);
}

double NNfunction_sb_cLdR::synapse0x26a8ad0() {
   return (neuron0x268d9f0()*-0.0638318);
}

double NNfunction_sb_cLdR::synapse0x26a8b10() {
   return (neuron0x268dd30()*-0.157873);
}

double NNfunction_sb_cLdR::synapse0x26a8b50() {
   return (neuron0x268e070()*-0.42231);
}

double NNfunction_sb_cLdR::synapse0x26a8b90() {
   return (neuron0x268e3b0()*-0.0268562);
}

double NNfunction_sb_cLdR::synapse0x26a8620() {
   return (neuron0x268e6f0()*0.3385);
}

double NNfunction_sb_cLdR::synapse0x26a8660() {
   return (neuron0x268ec50()*-0.00842329);
}

double NNfunction_sb_cLdR::synapse0x26a8ce0() {
   return (neuron0x268ee70()*-0.0363162);
}

double NNfunction_sb_cLdR::synapse0x26a8d20() {
   return (neuron0x268f1b0()*-0.0765664);
}

double NNfunction_sb_cLdR::synapse0x26a8d60() {
   return (neuron0x268f4f0()*0.635654);
}

double NNfunction_sb_cLdR::synapse0x26a8da0() {
   return (neuron0x268f830()*-0.163139);
}

double NNfunction_sb_cLdR::synapse0x26a8de0() {
   return (neuron0x268fb70()*-0.365638);
}

double NNfunction_sb_cLdR::synapse0x26a8e20() {
   return (neuron0x268feb0()*-0.171038);
}

double NNfunction_sb_cLdR::synapse0x26a91a0() {
   return (neuron0x268b2f0()*0.238779);
}

double NNfunction_sb_cLdR::synapse0x26a91e0() {
   return (neuron0x268b630()*-0.00667272);
}

double NNfunction_sb_cLdR::synapse0x26a9220() {
   return (neuron0x268b970()*-0.142557);
}

double NNfunction_sb_cLdR::synapse0x26a9260() {
   return (neuron0x268bcb0()*0.394556);
}

double NNfunction_sb_cLdR::synapse0x26a92a0() {
   return (neuron0x268bff0()*-0.0535312);
}

double NNfunction_sb_cLdR::synapse0x26a92e0() {
   return (neuron0x268c330()*-0.00804908);
}

double NNfunction_sb_cLdR::synapse0x26a9320() {
   return (neuron0x268c670()*0.0454184);
}

double NNfunction_sb_cLdR::synapse0x26a9360() {
   return (neuron0x268c9b0()*-0.111588);
}

double NNfunction_sb_cLdR::synapse0x26a93a0() {
   return (neuron0x268ccf0()*-0.148238);
}

double NNfunction_sb_cLdR::synapse0x26a93e0() {
   return (neuron0x268d030()*-0.00335199);
}

double NNfunction_sb_cLdR::synapse0x26a9420() {
   return (neuron0x268d370()*0.124821);
}

double NNfunction_sb_cLdR::synapse0x26a9460() {
   return (neuron0x268d6b0()*-0.364563);
}

double NNfunction_sb_cLdR::synapse0x26a94a0() {
   return (neuron0x268d9f0()*-0.595529);
}

double NNfunction_sb_cLdR::synapse0x26a94e0() {
   return (neuron0x268dd30()*0.145255);
}

double NNfunction_sb_cLdR::synapse0x26a9520() {
   return (neuron0x268e070()*-0.458701);
}

double NNfunction_sb_cLdR::synapse0x26a9560() {
   return (neuron0x268e3b0()*0.125228);
}

double NNfunction_sb_cLdR::synapse0x26a8ff0() {
   return (neuron0x268e6f0()*-0.489848);
}

double NNfunction_sb_cLdR::synapse0x26a9030() {
   return (neuron0x268ec50()*-0.317117);
}

double NNfunction_sb_cLdR::synapse0x26a96b0() {
   return (neuron0x268ee70()*-0.0874724);
}

double NNfunction_sb_cLdR::synapse0x26a96f0() {
   return (neuron0x268f1b0()*0.0410822);
}

double NNfunction_sb_cLdR::synapse0x26a9730() {
   return (neuron0x268f4f0()*0.0651648);
}

double NNfunction_sb_cLdR::synapse0x26a9770() {
   return (neuron0x268f830()*-0.090055);
}

double NNfunction_sb_cLdR::synapse0x26a97b0() {
   return (neuron0x268fb70()*-0.0318615);
}

double NNfunction_sb_cLdR::synapse0x26a97f0() {
   return (neuron0x268feb0()*-0.0294714);
}

double NNfunction_sb_cLdR::synapse0x26a9b70() {
   return (neuron0x268b2f0()*0.0872756);
}

double NNfunction_sb_cLdR::synapse0x26a9bb0() {
   return (neuron0x268b630()*0.0592718);
}

double NNfunction_sb_cLdR::synapse0x26a9bf0() {
   return (neuron0x268b970()*-0.432677);
}

double NNfunction_sb_cLdR::synapse0x26a9c30() {
   return (neuron0x268bcb0()*0.597769);
}

double NNfunction_sb_cLdR::synapse0x26a9c70() {
   return (neuron0x268bff0()*0.00867662);
}

double NNfunction_sb_cLdR::synapse0x26a9cb0() {
   return (neuron0x268c330()*-0.150402);
}

double NNfunction_sb_cLdR::synapse0x26a9cf0() {
   return (neuron0x268c670()*0.0836697);
}

double NNfunction_sb_cLdR::synapse0x26a9d30() {
   return (neuron0x268c9b0()*0.0251703);
}

double NNfunction_sb_cLdR::synapse0x26a9d70() {
   return (neuron0x268ccf0()*-0.0592195);
}

double NNfunction_sb_cLdR::synapse0x26a9db0() {
   return (neuron0x268d030()*-0.11429);
}

double NNfunction_sb_cLdR::synapse0x26a9df0() {
   return (neuron0x268d370()*0.0518914);
}

double NNfunction_sb_cLdR::synapse0x26a9e30() {
   return (neuron0x268d6b0()*0.0399102);
}

double NNfunction_sb_cLdR::synapse0x26a9e70() {
   return (neuron0x268d9f0()*-0.553101);
}

double NNfunction_sb_cLdR::synapse0x26a9eb0() {
   return (neuron0x268dd30()*-0.050406);
}

double NNfunction_sb_cLdR::synapse0x26a9ef0() {
   return (neuron0x268e070()*-0.0742519);
}

double NNfunction_sb_cLdR::synapse0x26a9f30() {
   return (neuron0x268e3b0()*0.303819);
}

double NNfunction_sb_cLdR::synapse0x26a99c0() {
   return (neuron0x268e6f0()*-0.09758);
}

double NNfunction_sb_cLdR::synapse0x26a9a00() {
   return (neuron0x268ec50()*-0.164706);
}

double NNfunction_sb_cLdR::synapse0x26aa080() {
   return (neuron0x268ee70()*0.130247);
}

double NNfunction_sb_cLdR::synapse0x26aa0c0() {
   return (neuron0x268f1b0()*0.0301229);
}

double NNfunction_sb_cLdR::synapse0x26aa100() {
   return (neuron0x268f4f0()*-0.0105842);
}

double NNfunction_sb_cLdR::synapse0x26aa140() {
   return (neuron0x268f830()*0.048252);
}

double NNfunction_sb_cLdR::synapse0x26aa180() {
   return (neuron0x268fb70()*-0.011591);
}

double NNfunction_sb_cLdR::synapse0x26aa1c0() {
   return (neuron0x268feb0()*0.0521258);
}

double NNfunction_sb_cLdR::synapse0x26aa540() {
   return (neuron0x268b2f0()*-0.301296);
}

double NNfunction_sb_cLdR::synapse0x26aa580() {
   return (neuron0x268b630()*-0.0193885);
}

double NNfunction_sb_cLdR::synapse0x26aa5c0() {
   return (neuron0x268b970()*0.301881);
}

double NNfunction_sb_cLdR::synapse0x26aa600() {
   return (neuron0x268bcb0()*0.416054);
}

double NNfunction_sb_cLdR::synapse0x26aa640() {
   return (neuron0x268bff0()*0.0954151);
}

double NNfunction_sb_cLdR::synapse0x26aa680() {
   return (neuron0x268c330()*-0.255254);
}

double NNfunction_sb_cLdR::synapse0x26aa6c0() {
   return (neuron0x268c670()*0.0360215);
}

double NNfunction_sb_cLdR::synapse0x26aa700() {
   return (neuron0x268c9b0()*-0.137881);
}

double NNfunction_sb_cLdR::synapse0x26aa740() {
   return (neuron0x268ccf0()*0.40804);
}

double NNfunction_sb_cLdR::synapse0x26aa780() {
   return (neuron0x268d030()*-0.102424);
}

double NNfunction_sb_cLdR::synapse0x26aa7c0() {
   return (neuron0x268d370()*0.175411);
}

double NNfunction_sb_cLdR::synapse0x26aa800() {
   return (neuron0x268d6b0()*-0.2382);
}

double NNfunction_sb_cLdR::synapse0x26aa840() {
   return (neuron0x268d9f0()*0.336211);
}

double NNfunction_sb_cLdR::synapse0x26aa880() {
   return (neuron0x268dd30()*0.0683107);
}

double NNfunction_sb_cLdR::synapse0x26aa8c0() {
   return (neuron0x268e070()*0.0863735);
}

double NNfunction_sb_cLdR::synapse0x26aa900() {
   return (neuron0x268e3b0()*0.169094);
}

double NNfunction_sb_cLdR::synapse0x26aa390() {
   return (neuron0x268e6f0()*-0.134351);
}

double NNfunction_sb_cLdR::synapse0x26aa3d0() {
   return (neuron0x268ec50()*-0.79051);
}

double NNfunction_sb_cLdR::synapse0x26aaa50() {
   return (neuron0x268ee70()*-0.0148231);
}

double NNfunction_sb_cLdR::synapse0x26aaa90() {
   return (neuron0x268f1b0()*0.15972);
}

double NNfunction_sb_cLdR::synapse0x26aaad0() {
   return (neuron0x268f4f0()*0.242254);
}

double NNfunction_sb_cLdR::synapse0x26aab10() {
   return (neuron0x268f830()*-0.0573054);
}

double NNfunction_sb_cLdR::synapse0x26aab50() {
   return (neuron0x268fb70()*-0.0325742);
}

double NNfunction_sb_cLdR::synapse0x26aab90() {
   return (neuron0x268feb0()*-0.0634717);
}

double NNfunction_sb_cLdR::synapse0x26aaf10() {
   return (neuron0x268b2f0()*-0.0219644);
}

double NNfunction_sb_cLdR::synapse0x26aaf50() {
   return (neuron0x268b630()*0.00348472);
}

double NNfunction_sb_cLdR::synapse0x26aaf90() {
   return (neuron0x268b970()*0.0149365);
}

double NNfunction_sb_cLdR::synapse0x26aafd0() {
   return (neuron0x268bcb0()*0.208878);
}

double NNfunction_sb_cLdR::synapse0x26ab010() {
   return (neuron0x268bff0()*-0.0518314);
}

double NNfunction_sb_cLdR::synapse0x26ab050() {
   return (neuron0x268c330()*0.019396);
}

double NNfunction_sb_cLdR::synapse0x26ab090() {
   return (neuron0x268c670()*0.00405364);
}

double NNfunction_sb_cLdR::synapse0x26ab0d0() {
   return (neuron0x268c9b0()*-0.000559907);
}

double NNfunction_sb_cLdR::synapse0x26ab110() {
   return (neuron0x268ccf0()*-0.011719);
}

double NNfunction_sb_cLdR::synapse0x26ab150() {
   return (neuron0x268d030()*-0.0150549);
}

double NNfunction_sb_cLdR::synapse0x26ab190() {
   return (neuron0x268d370()*-0.0247873);
}

double NNfunction_sb_cLdR::synapse0x26ab1d0() {
   return (neuron0x268d6b0()*-0.0128918);
}

double NNfunction_sb_cLdR::synapse0x26ab210() {
   return (neuron0x268d9f0()*-0.155968);
}

double NNfunction_sb_cLdR::synapse0x26ab250() {
   return (neuron0x268dd30()*0.00693135);
}

double NNfunction_sb_cLdR::synapse0x26ab290() {
   return (neuron0x268e070()*0.0078673);
}

double NNfunction_sb_cLdR::synapse0x26ab2d0() {
   return (neuron0x268e3b0()*0.0211294);
}

double NNfunction_sb_cLdR::synapse0x26aad60() {
   return (neuron0x268e6f0()*0.0109642);
}

double NNfunction_sb_cLdR::synapse0x26aada0() {
   return (neuron0x268ec50()*2.04989);
}

double NNfunction_sb_cLdR::synapse0x26ab420() {
   return (neuron0x268ee70()*0.00551777);
}

double NNfunction_sb_cLdR::synapse0x26ab460() {
   return (neuron0x268f1b0()*0.00922727);
}

double NNfunction_sb_cLdR::synapse0x26ab4a0() {
   return (neuron0x268f4f0()*0.00724485);
}

double NNfunction_sb_cLdR::synapse0x26ab4e0() {
   return (neuron0x268f830()*0.0490001);
}

double NNfunction_sb_cLdR::synapse0x26ab520() {
   return (neuron0x268fb70()*0.00702165);
}

double NNfunction_sb_cLdR::synapse0x26ab560() {
   return (neuron0x268feb0()*-0.0128488);
}

double NNfunction_sb_cLdR::synapse0x26ab8e0() {
   return (neuron0x268b2f0()*0.0687386);
}

double NNfunction_sb_cLdR::synapse0x26ab920() {
   return (neuron0x268b630()*-0.281061);
}

double NNfunction_sb_cLdR::synapse0x26ab960() {
   return (neuron0x268b970()*-0.528422);
}

double NNfunction_sb_cLdR::synapse0x26ab9a0() {
   return (neuron0x268bcb0()*-0.394862);
}

double NNfunction_sb_cLdR::synapse0x26ab9e0() {
   return (neuron0x268bff0()*-0.0327933);
}

double NNfunction_sb_cLdR::synapse0x26aba20() {
   return (neuron0x268c330()*-0.373468);
}

double NNfunction_sb_cLdR::synapse0x26aba60() {
   return (neuron0x268c670()*0.0712953);
}

double NNfunction_sb_cLdR::synapse0x26abaa0() {
   return (neuron0x268c9b0()*0.269192);
}

double NNfunction_sb_cLdR::synapse0x26abae0() {
   return (neuron0x268ccf0()*0.455767);
}

double NNfunction_sb_cLdR::synapse0x26abb20() {
   return (neuron0x268d030()*-0.175834);
}

double NNfunction_sb_cLdR::synapse0x26abb60() {
   return (neuron0x268d370()*-0.397671);
}

double NNfunction_sb_cLdR::synapse0x26abba0() {
   return (neuron0x268d6b0()*-0.654721);
}

double NNfunction_sb_cLdR::synapse0x26abbe0() {
   return (neuron0x268d9f0()*0.0416503);
}

double NNfunction_sb_cLdR::synapse0x26abc20() {
   return (neuron0x268dd30()*-0.298912);
}

double NNfunction_sb_cLdR::synapse0x26abc60() {
   return (neuron0x268e070()*-0.655263);
}

double NNfunction_sb_cLdR::synapse0x26abca0() {
   return (neuron0x268e3b0()*0.254179);
}

double NNfunction_sb_cLdR::synapse0x26ab730() {
   return (neuron0x268e6f0()*-0.188156);
}

double NNfunction_sb_cLdR::synapse0x26ab770() {
   return (neuron0x268ec50()*0.692349);
}

double NNfunction_sb_cLdR::synapse0x26abdf0() {
   return (neuron0x268ee70()*0.659505);
}

double NNfunction_sb_cLdR::synapse0x26abe30() {
   return (neuron0x268f1b0()*0.360096);
}

double NNfunction_sb_cLdR::synapse0x26abe70() {
   return (neuron0x268f4f0()*0.407188);
}

double NNfunction_sb_cLdR::synapse0x26abeb0() {
   return (neuron0x268f830()*0.403855);
}

double NNfunction_sb_cLdR::synapse0x26abef0() {
   return (neuron0x268fb70()*0.419408);
}

double NNfunction_sb_cLdR::synapse0x26abf30() {
   return (neuron0x268feb0()*-0.628608);
}

double NNfunction_sb_cLdR::synapse0x26ac2b0() {
   return (neuron0x268b2f0()*-0.0476677);
}

double NNfunction_sb_cLdR::synapse0x26ac2f0() {
   return (neuron0x268b630()*-0.00240237);
}

double NNfunction_sb_cLdR::synapse0x26ac330() {
   return (neuron0x268b970()*-0.00561928);
}

double NNfunction_sb_cLdR::synapse0x26ac370() {
   return (neuron0x268bcb0()*0.283591);
}

double NNfunction_sb_cLdR::synapse0x26ac3b0() {
   return (neuron0x268bff0()*-0.0685517);
}

double NNfunction_sb_cLdR::synapse0x26ac3f0() {
   return (neuron0x268c330()*0.0303411);
}

double NNfunction_sb_cLdR::synapse0x26ac430() {
   return (neuron0x268c670()*0.00845353);
}

double NNfunction_sb_cLdR::synapse0x26ac470() {
   return (neuron0x268c9b0()*-0.0153254);
}

double NNfunction_sb_cLdR::synapse0x26ac4b0() {
   return (neuron0x268ccf0()*-0.020878);
}

double NNfunction_sb_cLdR::synapse0x26ac4f0() {
   return (neuron0x268d030()*-0.00725472);
}

double NNfunction_sb_cLdR::synapse0x26ac530() {
   return (neuron0x268d370()*-0.0204452);
}

double NNfunction_sb_cLdR::synapse0x26ac570() {
   return (neuron0x268d6b0()*-0.021576);
}

double NNfunction_sb_cLdR::synapse0x26ac5b0() {
   return (neuron0x268d9f0()*-0.0563902);
}

double NNfunction_sb_cLdR::synapse0x26ac5f0() {
   return (neuron0x268dd30()*0.00744306);
}

double NNfunction_sb_cLdR::synapse0x26ac630() {
   return (neuron0x268e070()*-0.015387);
}

double NNfunction_sb_cLdR::synapse0x26ac670() {
   return (neuron0x268e3b0()*0.00727489);
}

double NNfunction_sb_cLdR::synapse0x26ac100() {
   return (neuron0x268e6f0()*0.00837918);
}

double NNfunction_sb_cLdR::synapse0x26ac140() {
   return (neuron0x268ec50()*1.8042);
}

double NNfunction_sb_cLdR::synapse0x26ac7c0() {
   return (neuron0x268ee70()*-0.00120341);
}

double NNfunction_sb_cLdR::synapse0x26ac800() {
   return (neuron0x268f1b0()*0.0111552);
}

double NNfunction_sb_cLdR::synapse0x26ac840() {
   return (neuron0x268f4f0()*0.00642556);
}

double NNfunction_sb_cLdR::synapse0x26ac880() {
   return (neuron0x268f830()*0.0571583);
}

double NNfunction_sb_cLdR::synapse0x26ac8c0() {
   return (neuron0x268fb70()*0.0015884);
}

double NNfunction_sb_cLdR::synapse0x26ac900() {
   return (neuron0x268feb0()*-0.00270647);
}

double NNfunction_sb_cLdR::synapse0x26953b0() {
   return (neuron0x268b2f0()*0.0146003);
}

double NNfunction_sb_cLdR::synapse0x26953f0() {
   return (neuron0x268b630()*-0.0308922);
}

double NNfunction_sb_cLdR::synapse0x2695430() {
   return (neuron0x268b970()*-0.0133498);
}

double NNfunction_sb_cLdR::synapse0x2695470() {
   return (neuron0x268bcb0()*7.61614);
}

double NNfunction_sb_cLdR::synapse0x26954b0() {
   return (neuron0x268bff0()*0.00701324);
}

double NNfunction_sb_cLdR::synapse0x26954f0() {
   return (neuron0x268c330()*0.0430522);
}

double NNfunction_sb_cLdR::synapse0x2695530() {
   return (neuron0x268c670()*0.0480252);
}

double NNfunction_sb_cLdR::synapse0x2695570() {
   return (neuron0x268c9b0()*-0.0217481);
}

double NNfunction_sb_cLdR::synapse0x26ad090() {
   return (neuron0x268ccf0()*0.0222058);
}

double NNfunction_sb_cLdR::synapse0x26ad0d0() {
   return (neuron0x268d030()*0.0125352);
}

double NNfunction_sb_cLdR::synapse0x26ad110() {
   return (neuron0x268d370()*0.0252009);
}

double NNfunction_sb_cLdR::synapse0x26ad150() {
   return (neuron0x268d6b0()*0.00636678);
}

double NNfunction_sb_cLdR::synapse0x26ad190() {
   return (neuron0x268d9f0()*-0.233401);
}

double NNfunction_sb_cLdR::synapse0x26ad1d0() {
   return (neuron0x268dd30()*0.0134747);
}

double NNfunction_sb_cLdR::synapse0x26ad210() {
   return (neuron0x268e070()*-0.0376522);
}

double NNfunction_sb_cLdR::synapse0x26ad250() {
   return (neuron0x268e3b0()*0.00272386);
}

double NNfunction_sb_cLdR::synapse0x26acad0() {
   return (neuron0x268e6f0()*-0.0179341);
}

double NNfunction_sb_cLdR::synapse0x26acb10() {
   return (neuron0x268ec50()*-0.339311);
}

double NNfunction_sb_cLdR::synapse0x26ad3a0() {
   return (neuron0x268ee70()*-0.0340936);
}

double NNfunction_sb_cLdR::synapse0x26ad3e0() {
   return (neuron0x268f1b0()*0.0647218);
}

double NNfunction_sb_cLdR::synapse0x26ad420() {
   return (neuron0x268f4f0()*0.0343913);
}

double NNfunction_sb_cLdR::synapse0x26ad460() {
   return (neuron0x268f830()*-0.024859);
}

double NNfunction_sb_cLdR::synapse0x26ad4a0() {
   return (neuron0x268fb70()*0.00143004);
}

double NNfunction_sb_cLdR::synapse0x26ad4e0() {
   return (neuron0x268feb0()*-0.0466549);
}

double NNfunction_sb_cLdR::synapse0x26ad860() {
   return (neuron0x268b2f0()*-0.344169);
}

double NNfunction_sb_cLdR::synapse0x26ad8a0() {
   return (neuron0x268b630()*-0.155168);
}

double NNfunction_sb_cLdR::synapse0x26ad8e0() {
   return (neuron0x268b970()*-0.770158);
}

double NNfunction_sb_cLdR::synapse0x26ad920() {
   return (neuron0x268bcb0()*-0.192869);
}

double NNfunction_sb_cLdR::synapse0x26ad960() {
   return (neuron0x268bff0()*0.0722035);
}

double NNfunction_sb_cLdR::synapse0x26ad9a0() {
   return (neuron0x268c330()*0.273425);
}

double NNfunction_sb_cLdR::synapse0x26ad9e0() {
   return (neuron0x268c670()*0.240524);
}

double NNfunction_sb_cLdR::synapse0x26ada20() {
   return (neuron0x268c9b0()*0.987106);
}

double NNfunction_sb_cLdR::synapse0x26ada60() {
   return (neuron0x268ccf0()*-0.225083);
}

double NNfunction_sb_cLdR::synapse0x26adaa0() {
   return (neuron0x268d030()*-0.583681);
}

double NNfunction_sb_cLdR::synapse0x26adae0() {
   return (neuron0x268d370()*0.173371);
}

double NNfunction_sb_cLdR::synapse0x26adb20() {
   return (neuron0x268d6b0()*-0.14401);
}

double NNfunction_sb_cLdR::synapse0x26adb60() {
   return (neuron0x268d9f0()*-0.187644);
}

double NNfunction_sb_cLdR::synapse0x26adba0() {
   return (neuron0x268dd30()*0.880994);
}

double NNfunction_sb_cLdR::synapse0x26adbe0() {
   return (neuron0x268e070()*0.139491);
}

double NNfunction_sb_cLdR::synapse0x26adc20() {
   return (neuron0x268e3b0()*0.0484401);
}

double NNfunction_sb_cLdR::synapse0x26ad6b0() {
   return (neuron0x268e6f0()*0.462209);
}

double NNfunction_sb_cLdR::synapse0x26ad6f0() {
   return (neuron0x268ec50()*-0.364835);
}

double NNfunction_sb_cLdR::synapse0x26add70() {
   return (neuron0x268ee70()*-0.127056);
}

double NNfunction_sb_cLdR::synapse0x26addb0() {
   return (neuron0x268f1b0()*-0.434484);
}

double NNfunction_sb_cLdR::synapse0x26addf0() {
   return (neuron0x268f4f0()*0.691805);
}

double NNfunction_sb_cLdR::synapse0x26ade30() {
   return (neuron0x268f830()*-0.403998);
}

double NNfunction_sb_cLdR::synapse0x26ade70() {
   return (neuron0x268fb70()*0.276504);
}

double NNfunction_sb_cLdR::synapse0x26adeb0() {
   return (neuron0x268feb0()*-0.491073);
}

double NNfunction_sb_cLdR::synapse0x26ae230() {
   return (neuron0x268b2f0()*-0.221292);
}

double NNfunction_sb_cLdR::synapse0x26ae270() {
   return (neuron0x268b630()*0.0571142);
}

double NNfunction_sb_cLdR::synapse0x26ae2b0() {
   return (neuron0x268b970()*-0.147722);
}

double NNfunction_sb_cLdR::synapse0x26ae2f0() {
   return (neuron0x268bcb0()*-2.21282);
}

double NNfunction_sb_cLdR::synapse0x26ae330() {
   return (neuron0x268bff0()*0.302241);
}

double NNfunction_sb_cLdR::synapse0x26ae370() {
   return (neuron0x268c330()*0.221067);
}

double NNfunction_sb_cLdR::synapse0x26ae3b0() {
   return (neuron0x268c670()*0.251473);
}

double NNfunction_sb_cLdR::synapse0x26ae3f0() {
   return (neuron0x268c9b0()*0.0269348);
}

double NNfunction_sb_cLdR::synapse0x26ae430() {
   return (neuron0x268ccf0()*0.0663845);
}

double NNfunction_sb_cLdR::synapse0x26ae470() {
   return (neuron0x268d030()*0.0761528);
}

double NNfunction_sb_cLdR::synapse0x26ae4b0() {
   return (neuron0x268d370()*0.0190365);
}

double NNfunction_sb_cLdR::synapse0x26ae4f0() {
   return (neuron0x268d6b0()*-0.188817);
}

double NNfunction_sb_cLdR::synapse0x26ae530() {
   return (neuron0x268d9f0()*0.33886);
}

double NNfunction_sb_cLdR::synapse0x26ae570() {
   return (neuron0x268dd30()*0.0198564);
}

double NNfunction_sb_cLdR::synapse0x26ae5b0() {
   return (neuron0x268e070()*0.00282002);
}

double NNfunction_sb_cLdR::synapse0x26ae5f0() {
   return (neuron0x268e3b0()*-0.0545807);
}

double NNfunction_sb_cLdR::synapse0x26ae080() {
   return (neuron0x268e6f0()*0.046752);
}

double NNfunction_sb_cLdR::synapse0x26ae0c0() {
   return (neuron0x268ec50()*0.372386);
}

double NNfunction_sb_cLdR::synapse0x269ebf0() {
   return (neuron0x268ee70()*-0.32864);
}

double NNfunction_sb_cLdR::synapse0x269ec30() {
   return (neuron0x268f1b0()*0.194182);
}

double NNfunction_sb_cLdR::synapse0x269ec70() {
   return (neuron0x268f4f0()*-0.0552751);
}

double NNfunction_sb_cLdR::synapse0x269ecb0() {
   return (neuron0x268f830()*-0.0624887);
}

double NNfunction_sb_cLdR::synapse0x269ecf0() {
   return (neuron0x268fb70()*0.117151);
}

double NNfunction_sb_cLdR::synapse0x269ed30() {
   return (neuron0x268feb0()*0.0637675);
}

double NNfunction_sb_cLdR::synapse0x269f0b0() {
   return (neuron0x268b2f0()*0.268384);
}

double NNfunction_sb_cLdR::synapse0x269f0f0() {
   return (neuron0x268b630()*-0.277557);
}

double NNfunction_sb_cLdR::synapse0x269f130() {
   return (neuron0x268b970()*-0.286278);
}

double NNfunction_sb_cLdR::synapse0x269f170() {
   return (neuron0x268bcb0()*1.4195);
}

double NNfunction_sb_cLdR::synapse0x269f1b0() {
   return (neuron0x268bff0()*-0.0624211);
}

double NNfunction_sb_cLdR::synapse0x269f1f0() {
   return (neuron0x268c330()*0.899032);
}

double NNfunction_sb_cLdR::synapse0x269f230() {
   return (neuron0x268c670()*-0.178617);
}

double NNfunction_sb_cLdR::synapse0x269f270() {
   return (neuron0x268c9b0()*-0.104566);
}

double NNfunction_sb_cLdR::synapse0x269f2b0() {
   return (neuron0x268ccf0()*0.140996);
}

double NNfunction_sb_cLdR::synapse0x269f2f0() {
   return (neuron0x268d030()*1.66679);
}

double NNfunction_sb_cLdR::synapse0x269f330() {
   return (neuron0x268d370()*-0.333701);
}

double NNfunction_sb_cLdR::synapse0x269f370() {
   return (neuron0x268d6b0()*-0.575462);
}

double NNfunction_sb_cLdR::synapse0x269f3b0() {
   return (neuron0x268d9f0()*-0.296836);
}

double NNfunction_sb_cLdR::synapse0x269f3f0() {
   return (neuron0x268dd30()*-0.454169);
}

double NNfunction_sb_cLdR::synapse0x269f430() {
   return (neuron0x268e070()*0.904146);
}

double NNfunction_sb_cLdR::synapse0x269f470() {
   return (neuron0x268e3b0()*0.498661);
}

double NNfunction_sb_cLdR::synapse0x269ef00() {
   return (neuron0x268e6f0()*-0.0388392);
}

double NNfunction_sb_cLdR::synapse0x269ef40() {
   return (neuron0x268ec50()*-0.398555);
}

double NNfunction_sb_cLdR::synapse0x269f5c0() {
   return (neuron0x268ee70()*-0.214162);
}

double NNfunction_sb_cLdR::synapse0x269f600() {
   return (neuron0x268f1b0()*-0.140769);
}

double NNfunction_sb_cLdR::synapse0x269f640() {
   return (neuron0x268f4f0()*0.1919);
}

double NNfunction_sb_cLdR::synapse0x269f680() {
   return (neuron0x268f830()*-0.274691);
}

double NNfunction_sb_cLdR::synapse0x269f6c0() {
   return (neuron0x268fb70()*0.461927);
}

double NNfunction_sb_cLdR::synapse0x269f700() {
   return (neuron0x268feb0()*-0.0157546);
}

double NNfunction_sb_cLdR::synapse0x269fa80() {
   return (neuron0x268b2f0()*-0.637724);
}

double NNfunction_sb_cLdR::synapse0x269fac0() {
   return (neuron0x268b630()*0.412393);
}

double NNfunction_sb_cLdR::synapse0x269fb00() {
   return (neuron0x268b970()*-0.969488);
}

double NNfunction_sb_cLdR::synapse0x269fb40() {
   return (neuron0x268bcb0()*0.171316);
}

double NNfunction_sb_cLdR::synapse0x269fb80() {
   return (neuron0x268bff0()*0.471739);
}

double NNfunction_sb_cLdR::synapse0x269fbc0() {
   return (neuron0x268c330()*0.270167);
}

double NNfunction_sb_cLdR::synapse0x269fc00() {
   return (neuron0x268c670()*0.306723);
}

double NNfunction_sb_cLdR::synapse0x269fc40() {
   return (neuron0x268c9b0()*-0.467074);
}

double NNfunction_sb_cLdR::synapse0x269fc80() {
   return (neuron0x268ccf0()*-0.0199065);
}

double NNfunction_sb_cLdR::synapse0x269fcc0() {
   return (neuron0x268d030()*-0.81657);
}

double NNfunction_sb_cLdR::synapse0x269fd00() {
   return (neuron0x268d370()*-0.257156);
}

double NNfunction_sb_cLdR::synapse0x269fd40() {
   return (neuron0x268d6b0()*0.143582);
}

double NNfunction_sb_cLdR::synapse0x269fd80() {
   return (neuron0x268d9f0()*0.0124941);
}

double NNfunction_sb_cLdR::synapse0x269fdc0() {
   return (neuron0x268dd30()*0.35042);
}

double NNfunction_sb_cLdR::synapse0x269fe00() {
   return (neuron0x268e070()*0.299555);
}

double NNfunction_sb_cLdR::synapse0x269fe40() {
   return (neuron0x268e3b0()*0.33358);
}

double NNfunction_sb_cLdR::synapse0x269f8d0() {
   return (neuron0x268e6f0()*0.217981);
}

double NNfunction_sb_cLdR::synapse0x269f910() {
   return (neuron0x268ec50()*0.736031);
}

double NNfunction_sb_cLdR::synapse0x269ff90() {
   return (neuron0x268ee70()*-0.298557);
}

double NNfunction_sb_cLdR::synapse0x269ffd0() {
   return (neuron0x268f1b0()*-0.118463);
}

double NNfunction_sb_cLdR::synapse0x26a0010() {
   return (neuron0x268f4f0()*0.795123);
}

double NNfunction_sb_cLdR::synapse0x26a0050() {
   return (neuron0x268f830()*-0.200368);
}

double NNfunction_sb_cLdR::synapse0x26a0090() {
   return (neuron0x268fb70()*0.730455);
}

double NNfunction_sb_cLdR::synapse0x26a00d0() {
   return (neuron0x268feb0()*0.344286);
}

double NNfunction_sb_cLdR::synapse0x26a0450() {
   return (neuron0x268b2f0()*0.0251288);
}

double NNfunction_sb_cLdR::synapse0x26a0490() {
   return (neuron0x268b630()*0.0394763);
}

double NNfunction_sb_cLdR::synapse0x26a04d0() {
   return (neuron0x268b970()*-0.0679648);
}

double NNfunction_sb_cLdR::synapse0x26a0510() {
   return (neuron0x268bcb0()*-1.86812);
}

double NNfunction_sb_cLdR::synapse0x26a0550() {
   return (neuron0x268bff0()*-0.00367738);
}

double NNfunction_sb_cLdR::synapse0x26a0590() {
   return (neuron0x268c330()*0.0242646);
}

double NNfunction_sb_cLdR::synapse0x26a05d0() {
   return (neuron0x268c670()*0.020695);
}

double NNfunction_sb_cLdR::synapse0x26a0610() {
   return (neuron0x268c9b0()*-0.0153056);
}

double NNfunction_sb_cLdR::synapse0x26a0650() {
   return (neuron0x268ccf0()*-0.000138362);
}

double NNfunction_sb_cLdR::synapse0x26a0690() {
   return (neuron0x268d030()*0.0475995);
}

double NNfunction_sb_cLdR::synapse0x26a06d0() {
   return (neuron0x268d370()*-0.00441801);
}

double NNfunction_sb_cLdR::synapse0x26a0710() {
   return (neuron0x268d6b0()*-0.00389278);
}

double NNfunction_sb_cLdR::synapse0x26a0750() {
   return (neuron0x268d9f0()*-0.023847);
}

double NNfunction_sb_cLdR::synapse0x26a0790() {
   return (neuron0x268dd30()*-0.00574001);
}

double NNfunction_sb_cLdR::synapse0x26a07d0() {
   return (neuron0x268e070()*0.00410129);
}

double NNfunction_sb_cLdR::synapse0x26a0810() {
   return (neuron0x268e3b0()*-0.136093);
}

double NNfunction_sb_cLdR::synapse0x26a02a0() {
   return (neuron0x268e6f0()*-0.0419038);
}

double NNfunction_sb_cLdR::synapse0x26a02e0() {
   return (neuron0x268ec50()*-0.295642);
}

double NNfunction_sb_cLdR::synapse0x26a0960() {
   return (neuron0x268ee70()*0.0142867);
}

double NNfunction_sb_cLdR::synapse0x26a09a0() {
   return (neuron0x268f1b0()*-0.0201567);
}

double NNfunction_sb_cLdR::synapse0x26a09e0() {
   return (neuron0x268f4f0()*-0.00462917);
}

double NNfunction_sb_cLdR::synapse0x26a0a20() {
   return (neuron0x268f830()*0.0114568);
}

double NNfunction_sb_cLdR::synapse0x26a0a60() {
   return (neuron0x268fb70()*0.00942011);
}

double NNfunction_sb_cLdR::synapse0x26a0aa0() {
   return (neuron0x268feb0()*-0.0203485);
}

double NNfunction_sb_cLdR::synapse0x26b2970() {
   return (neuron0x268b2f0()*-0.0117662);
}

double NNfunction_sb_cLdR::synapse0x26b29b0() {
   return (neuron0x268b630()*0.00981808);
}

double NNfunction_sb_cLdR::synapse0x26b29f0() {
   return (neuron0x268b970()*-0.0310911);
}

double NNfunction_sb_cLdR::synapse0x26b2a30() {
   return (neuron0x268bcb0()*1.44085);
}

double NNfunction_sb_cLdR::synapse0x26b2a70() {
   return (neuron0x268bff0()*0.0196355);
}

double NNfunction_sb_cLdR::synapse0x26b2ab0() {
   return (neuron0x268c330()*0.0194581);
}

double NNfunction_sb_cLdR::synapse0x26b2af0() {
   return (neuron0x268c670()*0.0201005);
}

double NNfunction_sb_cLdR::synapse0x26b2b30() {
   return (neuron0x268c9b0()*-0.00901155);
}

double NNfunction_sb_cLdR::synapse0x26b2b70() {
   return (neuron0x268ccf0()*-0.00265728);
}

double NNfunction_sb_cLdR::synapse0x26b2bb0() {
   return (neuron0x268d030()*-0.00447753);
}

double NNfunction_sb_cLdR::synapse0x26b2bf0() {
   return (neuron0x268d370()*-0.0128926);
}

double NNfunction_sb_cLdR::synapse0x26b2c30() {
   return (neuron0x268d6b0()*-0.0164326);
}

double NNfunction_sb_cLdR::synapse0x26b2c70() {
   return (neuron0x268d9f0()*-0.132805);
}

double NNfunction_sb_cLdR::synapse0x26b2cb0() {
   return (neuron0x268dd30()*-0.008053);
}

double NNfunction_sb_cLdR::synapse0x26b2cf0() {
   return (neuron0x268e070()*-0.000995167);
}

double NNfunction_sb_cLdR::synapse0x26b2d30() {
   return (neuron0x268e3b0()*-0.0138204);
}

double NNfunction_sb_cLdR::synapse0x26a0ae0() {
   return (neuron0x268e6f0()*0.00545793);
}

double NNfunction_sb_cLdR::synapse0x26a0b20() {
   return (neuron0x268ec50()*-0.147588);
}

double NNfunction_sb_cLdR::synapse0x26b2e80() {
   return (neuron0x268ee70()*-0.00955235);
}

double NNfunction_sb_cLdR::synapse0x26b2ec0() {
   return (neuron0x268f1b0()*0.0108679);
}

double NNfunction_sb_cLdR::synapse0x26b2f00() {
   return (neuron0x268f4f0()*0.0030951);
}

double NNfunction_sb_cLdR::synapse0x26b2f40() {
   return (neuron0x268f830()*0.00225954);
}

double NNfunction_sb_cLdR::synapse0x26b2f80() {
   return (neuron0x268fb70()*0.00938166);
}

double NNfunction_sb_cLdR::synapse0x26b2fc0() {
   return (neuron0x268feb0()*-0.000844724);
}

double NNfunction_sb_cLdR::synapse0x26b3340() {
   return (neuron0x268b2f0()*0.0205618);
}

double NNfunction_sb_cLdR::synapse0x26b3380() {
   return (neuron0x268b630()*-0.0194913);
}

double NNfunction_sb_cLdR::synapse0x26b33c0() {
   return (neuron0x268b970()*-0.00410354);
}

double NNfunction_sb_cLdR::synapse0x26b3400() {
   return (neuron0x268bcb0()*-0.0695367);
}

double NNfunction_sb_cLdR::synapse0x26b3440() {
   return (neuron0x268bff0()*-0.0206627);
}

double NNfunction_sb_cLdR::synapse0x26b3480() {
   return (neuron0x268c330()*-0.0100094);
}

double NNfunction_sb_cLdR::synapse0x26b34c0() {
   return (neuron0x268c670()*-0.0409515);
}

double NNfunction_sb_cLdR::synapse0x26b3500() {
   return (neuron0x268c9b0()*0.0841004);
}

double NNfunction_sb_cLdR::synapse0x26b3540() {
   return (neuron0x268ccf0()*0.528085);
}

double NNfunction_sb_cLdR::synapse0x26b3580() {
   return (neuron0x268d030()*0.117913);
}

double NNfunction_sb_cLdR::synapse0x26b35c0() {
   return (neuron0x268d370()*-0.129208);
}

double NNfunction_sb_cLdR::synapse0x26b3600() {
   return (neuron0x268d6b0()*0.138218);
}

double NNfunction_sb_cLdR::synapse0x26b3640() {
   return (neuron0x268d9f0()*-0.466991);
}

double NNfunction_sb_cLdR::synapse0x26b3680() {
   return (neuron0x268dd30()*-0.0699651);
}

double NNfunction_sb_cLdR::synapse0x26b36c0() {
   return (neuron0x268e070()*0.035459);
}

double NNfunction_sb_cLdR::synapse0x26b3700() {
   return (neuron0x268e3b0()*0.0281486);
}

double NNfunction_sb_cLdR::synapse0x26b3190() {
   return (neuron0x268e6f0()*0.0549899);
}

double NNfunction_sb_cLdR::synapse0x26b31d0() {
   return (neuron0x268ec50()*-0.438717);
}

double NNfunction_sb_cLdR::synapse0x26b3850() {
   return (neuron0x268ee70()*0.0786654);
}

double NNfunction_sb_cLdR::synapse0x26b3890() {
   return (neuron0x268f1b0()*0.0396854);
}

double NNfunction_sb_cLdR::synapse0x26b38d0() {
   return (neuron0x268f4f0()*0.0902143);
}

double NNfunction_sb_cLdR::synapse0x26b3910() {
   return (neuron0x268f830()*0.0580665);
}

double NNfunction_sb_cLdR::synapse0x26b3950() {
   return (neuron0x268fb70()*-0.159115);
}

double NNfunction_sb_cLdR::synapse0x26b3990() {
   return (neuron0x268feb0()*-0.00946626);
}

double NNfunction_sb_cLdR::synapse0x26b3d10() {
   return (neuron0x268b2f0()*0.10889);
}

double NNfunction_sb_cLdR::synapse0x26b3d50() {
   return (neuron0x268b630()*-0.190677);
}

double NNfunction_sb_cLdR::synapse0x26b3d90() {
   return (neuron0x268b970()*0.0545351);
}

double NNfunction_sb_cLdR::synapse0x26b3dd0() {
   return (neuron0x268bcb0()*-0.22944);
}

double NNfunction_sb_cLdR::synapse0x26b3e10() {
   return (neuron0x268bff0()*0.151793);
}

double NNfunction_sb_cLdR::synapse0x26b3e50() {
   return (neuron0x268c330()*0.775817);
}

double NNfunction_sb_cLdR::synapse0x26b3e90() {
   return (neuron0x268c670()*0.117451);
}

double NNfunction_sb_cLdR::synapse0x26b3ed0() {
   return (neuron0x268c9b0()*-0.115843);
}

double NNfunction_sb_cLdR::synapse0x26b3f10() {
   return (neuron0x268ccf0()*0.29072);
}

double NNfunction_sb_cLdR::synapse0x26b3f50() {
   return (neuron0x268d030()*0.322387);
}

double NNfunction_sb_cLdR::synapse0x26b3f90() {
   return (neuron0x268d370()*0.322941);
}

double NNfunction_sb_cLdR::synapse0x26b3fd0() {
   return (neuron0x268d6b0()*-0.50797);
}

double NNfunction_sb_cLdR::synapse0x26b4010() {
   return (neuron0x268d9f0()*-0.392436);
}

double NNfunction_sb_cLdR::synapse0x26b4050() {
   return (neuron0x268dd30()*-0.768691);
}

double NNfunction_sb_cLdR::synapse0x26b4090() {
   return (neuron0x268e070()*0.33312);
}

double NNfunction_sb_cLdR::synapse0x26b40d0() {
   return (neuron0x268e3b0()*0.385191);
}

double NNfunction_sb_cLdR::synapse0x26b3b60() {
   return (neuron0x268e6f0()*-0.78092);
}

double NNfunction_sb_cLdR::synapse0x26b3ba0() {
   return (neuron0x268ec50()*-0.1718);
}

double NNfunction_sb_cLdR::synapse0x26b4220() {
   return (neuron0x268ee70()*-0.458102);
}

double NNfunction_sb_cLdR::synapse0x26b4260() {
   return (neuron0x268f1b0()*0.558087);
}

double NNfunction_sb_cLdR::synapse0x26b42a0() {
   return (neuron0x268f4f0()*-0.504978);
}

double NNfunction_sb_cLdR::synapse0x26b42e0() {
   return (neuron0x268f830()*-0.496847);
}

double NNfunction_sb_cLdR::synapse0x26b4320() {
   return (neuron0x268fb70()*0.10268);
}

double NNfunction_sb_cLdR::synapse0x26b4360() {
   return (neuron0x268feb0()*-0.251298);
}

double NNfunction_sb_cLdR::synapse0x26b46e0() {
   return (neuron0x268b2f0()*-0.104299);
}

double NNfunction_sb_cLdR::synapse0x26b4720() {
   return (neuron0x268b630()*-0.169037);
}

double NNfunction_sb_cLdR::synapse0x26b4760() {
   return (neuron0x268b970()*0.00608787);
}

double NNfunction_sb_cLdR::synapse0x26b47a0() {
   return (neuron0x268bcb0()*-0.337426);
}

double NNfunction_sb_cLdR::synapse0x26b47e0() {
   return (neuron0x268bff0()*0.163086);
}

double NNfunction_sb_cLdR::synapse0x26b4820() {
   return (neuron0x268c330()*-0.0886903);
}

double NNfunction_sb_cLdR::synapse0x26b4860() {
   return (neuron0x268c670()*0.106351);
}

double NNfunction_sb_cLdR::synapse0x26b48a0() {
   return (neuron0x268c9b0()*-0.277026);
}

double NNfunction_sb_cLdR::synapse0x26b48e0() {
   return (neuron0x268ccf0()*-0.0627486);
}

double NNfunction_sb_cLdR::synapse0x26b4920() {
   return (neuron0x268d030()*-0.219802);
}

double NNfunction_sb_cLdR::synapse0x26b4960() {
   return (neuron0x268d370()*0.133075);
}

double NNfunction_sb_cLdR::synapse0x26b49a0() {
   return (neuron0x268d6b0()*-0.265493);
}

double NNfunction_sb_cLdR::synapse0x26b49e0() {
   return (neuron0x268d9f0()*-0.699689);
}

double NNfunction_sb_cLdR::synapse0x26b4a20() {
   return (neuron0x268dd30()*-0.574611);
}

double NNfunction_sb_cLdR::synapse0x26b4a60() {
   return (neuron0x268e070()*0.201793);
}

double NNfunction_sb_cLdR::synapse0x26b4aa0() {
   return (neuron0x268e3b0()*-0.0105323);
}

double NNfunction_sb_cLdR::synapse0x26b4530() {
   return (neuron0x268e6f0()*0.069419);
}

double NNfunction_sb_cLdR::synapse0x26b4570() {
   return (neuron0x268ec50()*-0.234087);
}

double NNfunction_sb_cLdR::synapse0x26b4bf0() {
   return (neuron0x268ee70()*-0.27034);
}

double NNfunction_sb_cLdR::synapse0x26b4c30() {
   return (neuron0x268f1b0()*0.29249);
}

double NNfunction_sb_cLdR::synapse0x26b4c70() {
   return (neuron0x268f4f0()*-0.0209201);
}

double NNfunction_sb_cLdR::synapse0x26b4cb0() {
   return (neuron0x268f830()*-0.129485);
}

double NNfunction_sb_cLdR::synapse0x26b4cf0() {
   return (neuron0x268fb70()*-0.0843356);
}

double NNfunction_sb_cLdR::synapse0x26b4d30() {
   return (neuron0x268feb0()*0.269528);
}

double NNfunction_sb_cLdR::synapse0x2454c40() {
   return (neuron0x2690320()*0.404176);
}

double NNfunction_sb_cLdR::synapse0x2454c80() {
   return (neuron0x2690c70()*1.67561);
}

double NNfunction_sb_cLdR::synapse0x26927e0() {
   return (neuron0x2691750()*0.976487);
}

double NNfunction_sb_cLdR::synapse0x2692820() {
   return (neuron0x26911f0()*-1.59234);
}

double NNfunction_sb_cLdR::synapse0x26931b0() {
   return (neuron0x2692530()*-0.451667);
}

double NNfunction_sb_cLdR::synapse0x26931f0() {
   return (neuron0x2692f00()*0.49475);
}

double NNfunction_sb_cLdR::synapse0x2693f80() {
   return (neuron0x2693cd0()*1.07274);
}

double NNfunction_sb_cLdR::synapse0x2693fc0() {
   return (neuron0x26946a0()*-1.05096);
}

double NNfunction_sb_cLdR::synapse0x2694950() {
   return (neuron0x2695070()*-3.73819);
}

double NNfunction_sb_cLdR::synapse0x2694990() {
   return (neuron0x2695b50()*-0.0669402);
}

double NNfunction_sb_cLdR::synapse0x2695320() {
   return (neuron0x2696520()*-0.374036);
}

double NNfunction_sb_cLdR::synapse0x2695360() {
   return (neuron0x2693600()*0.229522);
}

double NNfunction_sb_cLdR::synapse0x2695e00() {
   return (neuron0x26980d0()*1.70337);
}

double NNfunction_sb_cLdR::synapse0x2695e40() {
   return (neuron0x2698aa0()*-2.62796);
}

double NNfunction_sb_cLdR::synapse0x26967d0() {
   return (neuron0x2699470()*-1.17193);
}

double NNfunction_sb_cLdR::synapse0x2696810() {
   return (neuron0x2699e40()*-0.492028);
}

double NNfunction_sb_cLdR::synapse0x26938b0() {
   return (neuron0x269bc50()*1.52798);
}

double NNfunction_sb_cLdR::synapse0x26938f0() {
   return (neuron0x269bf30()*-2.0308);
}

double NNfunction_sb_cLdR::synapse0x2698380() {
   return (neuron0x269c900()*0.564982);
}

double NNfunction_sb_cLdR::synapse0x26983c0() {
   return (neuron0x269d2d0()*0.639197);
}

double NNfunction_sb_cLdR::synapse0x2698d50() {
   return (neuron0x269dca0()*0.209113);
}

double NNfunction_sb_cLdR::synapse0x2698d90() {
   return (neuron0x269e670()*0.727145);
}

double NNfunction_sb_cLdR::synapse0x2699720() {
   return (neuron0x26971c0()*-0.841961);
}

double NNfunction_sb_cLdR::synapse0x2699760() {
   return (neuron0x2697b90()*0.552502);
}

double NNfunction_sb_cLdR::synapse0x269a0f0() {
   return (neuron0x26a1400()*-0.88918);
}

double NNfunction_sb_cLdR::synapse0x269a130() {
   return (neuron0x26a1dd0()*-1.84872);
}

double NNfunction_sb_cLdR::synapse0x268e290() {
   return (neuron0x26a27a0()*-0.449514);
}

double NNfunction_sb_cLdR::synapse0x268e2d0() {
   return (neuron0x26a3170()*-1.44578);
}

double NNfunction_sb_cLdR::synapse0x269c1e0() {
   return (neuron0x26a3b40()*0.579296);
}

double NNfunction_sb_cLdR::synapse0x269c220() {
   return (neuron0x26a4510()*1.19247);
}

double NNfunction_sb_cLdR::synapse0x269cbb0() {
   return (neuron0x26a4ee0()*2.91819);
}

double NNfunction_sb_cLdR::synapse0x269cbf0() {
   return (neuron0x26a58b0()*-1.0676);
}

double NNfunction_sb_cLdR::synapse0x269d580() {
   return (neuron0x269b940()*0.0391686);
}

double NNfunction_sb_cLdR::synapse0x269d5c0() {
   return (neuron0x26a8490()*0.946592);
}

double NNfunction_sb_cLdR::synapse0x269df50() {
   return (neuron0x26a8e60()*0.475859);
}

double NNfunction_sb_cLdR::synapse0x269df90() {
   return (neuron0x26a9830()*2.01309);
}

double NNfunction_sb_cLdR::synapse0x269e920() {
   return (neuron0x26aa200()*0.854481);
}

double NNfunction_sb_cLdR::synapse0x269e960() {
   return (neuron0x26aabd0()*1.90463);
}

double NNfunction_sb_cLdR::synapse0x2697470() {
   return (neuron0x26ab5a0()*-0.698561);
}

double NNfunction_sb_cLdR::synapse0x26974b0() {
   return (neuron0x26abf70()*1.11744);
}

double NNfunction_sb_cLdR::synapse0x26a0d20() {
   return (neuron0x26ac940()*-4.19585);
}

double NNfunction_sb_cLdR::synapse0x26a0d60() {
   return (neuron0x26ad520()*0.550542);
}

double NNfunction_sb_cLdR::synapse0x26a16b0() {
   return (neuron0x26adef0()*1.99219);
}

double NNfunction_sb_cLdR::synapse0x26a16f0() {
   return (neuron0x269ed70()*-0.5963);
}

double NNfunction_sb_cLdR::synapse0x26a2080() {
   return (neuron0x269f740()*0.671852);
}

double NNfunction_sb_cLdR::synapse0x26a20c0() {
   return (neuron0x26a0110()*2.30283);
}

double NNfunction_sb_cLdR::synapse0x26a2a50() {
   return (neuron0x26b2750()*-2.3953);
}

double NNfunction_sb_cLdR::synapse0x26a2a90() {
   return (neuron0x26b3000()*-1.06991);
}

double NNfunction_sb_cLdR::synapse0x26a3420() {
   return (neuron0x26b39d0()*-1.16239);
}

double NNfunction_sb_cLdR::synapse0x26a3460() {
   return (neuron0x26b43a0()*-0.954278);
}

double NNfunction_sb_cLdR::synapse0x26a5b60() {
   return (neuron0x2690320()*0.338589);
}

double NNfunction_sb_cLdR::synapse0x26a5ba0() {
   return (neuron0x2690c70()*1.84056);
}

double NNfunction_sb_cLdR::synapse0x269b120() {
   return (neuron0x2691750()*0.040817);
}

double NNfunction_sb_cLdR::synapse0x269b160() {
   return (neuron0x26911f0()*-0.0586748);
}

double NNfunction_sb_cLdR::synapse0x26a8740() {
   return (neuron0x2692530()*-0.0155912);
}

double NNfunction_sb_cLdR::synapse0x26a8780() {
   return (neuron0x2692f00()*0.03668);
}

double NNfunction_sb_cLdR::synapse0x26a9110() {
   return (neuron0x2693cd0()*-1.04994);
}

double NNfunction_sb_cLdR::synapse0x26a9150() {
   return (neuron0x26946a0()*0.0282549);
}

double NNfunction_sb_cLdR::synapse0x26a9ae0() {
   return (neuron0x2695070()*1.10002);
}

double NNfunction_sb_cLdR::synapse0x26a9b20() {
   return (neuron0x2695b50()*-0.295913);
}

double NNfunction_sb_cLdR::synapse0x26aa4b0() {
   return (neuron0x2696520()*-0.648621);
}

double NNfunction_sb_cLdR::synapse0x26aa4f0() {
   return (neuron0x2693600()*0.0301619);
}

double NNfunction_sb_cLdR::synapse0x26aae80() {
   return (neuron0x26980d0()*0.053704);
}

double NNfunction_sb_cLdR::synapse0x26aaec0() {
   return (neuron0x2698aa0()*-1.08091);
}

double NNfunction_sb_cLdR::synapse0x26ab850() {
   return (neuron0x2699470()*-0.0612186);
}

double NNfunction_sb_cLdR::synapse0x26ab890() {
   return (neuron0x2699e40()*0.0952109);
}

double NNfunction_sb_cLdR::synapse0x26ac220() {
   return (neuron0x269bc50()*0.662735);
}

double NNfunction_sb_cLdR::synapse0x26ac260() {
   return (neuron0x269bf30()*0.132562);
}

double NNfunction_sb_cLdR::synapse0x26acbf0() {
   return (neuron0x269c900()*-0.0363063);
}

double NNfunction_sb_cLdR::synapse0x26acc30() {
   return (neuron0x269d2d0()*-0.0365205);
}

double NNfunction_sb_cLdR::synapse0x26ad7d0() {
   return (neuron0x269dca0()*-0.0741203);
}

double NNfunction_sb_cLdR::synapse0x26ad810() {
   return (neuron0x269e670()*-0.116533);
}

double NNfunction_sb_cLdR::synapse0x26ae1a0() {
   return (neuron0x26971c0()*0.924324);
}

double NNfunction_sb_cLdR::synapse0x26ae1e0() {
   return (neuron0x2697b90()*0.00331197);
}

double NNfunction_sb_cLdR::synapse0x269f020() {
   return (neuron0x26a1400()*-0.0773814);
}

double NNfunction_sb_cLdR::synapse0x269f060() {
   return (neuron0x26a1dd0()*-0.907254);
}

double NNfunction_sb_cLdR::synapse0x269f9f0() {
   return (neuron0x26a27a0()*0.034614);
}

double NNfunction_sb_cLdR::synapse0x269fa30() {
   return (neuron0x26a3170()*0.00183308);
}

double NNfunction_sb_cLdR::synapse0x26a03c0() {
   return (neuron0x26a3b40()*0.0282549);
}

double NNfunction_sb_cLdR::synapse0x26a0400() {
   return (neuron0x26a4510()*-0.112795);
}

double NNfunction_sb_cLdR::synapse0x26b28e0() {
   return (neuron0x26a4ee0()*-0.0837358);
}

double NNfunction_sb_cLdR::synapse0x26b2920() {
   return (neuron0x26a58b0()*-0.0364705);
}

double NNfunction_sb_cLdR::synapse0x26b32b0() {
   return (neuron0x269b940()*-0.065462);
}

double NNfunction_sb_cLdR::synapse0x26b32f0() {
   return (neuron0x26a8490()*-0.00102247);
}

double NNfunction_sb_cLdR::synapse0x26b3c80() {
   return (neuron0x26a8e60()*-0.00234936);
}

double NNfunction_sb_cLdR::synapse0x26b3cc0() {
   return (neuron0x26a9830()*-0.0325209);
}

double NNfunction_sb_cLdR::synapse0x26b4650() {
   return (neuron0x26aa200()*0.0525203);
}

double NNfunction_sb_cLdR::synapse0x26b4690() {
   return (neuron0x26aabd0()*-0.83044);
}

double NNfunction_sb_cLdR::synapse0x2690540() {
   return (neuron0x26ab5a0()*-0.00937135);
}

double NNfunction_sb_cLdR::synapse0x2690580() {
   return (neuron0x26abf70()*0.525841);
}

double NNfunction_sb_cLdR::synapse0x26a3df0() {
   return (neuron0x26ac940()*1.23351);
}

double NNfunction_sb_cLdR::synapse0x26a3e30() {
   return (neuron0x26ad520()*0.0249105);
}

double NNfunction_sb_cLdR::synapse0x26b4d70() {
   return (neuron0x26adef0()*-0.211091);
}

double NNfunction_sb_cLdR::synapse0x26b4db0() {
   return (neuron0x269ed70()*-0.0341275);
}

double NNfunction_sb_cLdR::synapse0x26b4df0() {
   return (neuron0x269f740()*-0.0296964);
}

double NNfunction_sb_cLdR::synapse0x26b4e30() {
   return (neuron0x26a0110()*-1.23172);
}

double NNfunction_sb_cLdR::synapse0x26bbce0() {
   return (neuron0x26b2750()*0.881361);
}

double NNfunction_sb_cLdR::synapse0x26bbd20() {
   return (neuron0x26b3000()*-0.196409);
}

double NNfunction_sb_cLdR::synapse0x26bbd60() {
   return (neuron0x26b39d0()*0.00423894);
}

double NNfunction_sb_cLdR::synapse0x26bbda0() {
   return (neuron0x26b43a0()*0.0294228);
}

double NNfunction_sb_cLdR::synapse0x26bc120() {
   return (neuron0x2690320()*-0.391257);
}

double NNfunction_sb_cLdR::synapse0x26bc160() {
   return (neuron0x2690c70()*1.0154);
}

double NNfunction_sb_cLdR::synapse0x26bc1a0() {
   return (neuron0x2691750()*-0.0941585);
}

double NNfunction_sb_cLdR::synapse0x26bc1e0() {
   return (neuron0x26911f0()*-0.0611848);
}

double NNfunction_sb_cLdR::synapse0x26bc220() {
   return (neuron0x2692530()*-0.185043);
}

double NNfunction_sb_cLdR::synapse0x26bc260() {
   return (neuron0x2692f00()*0.126716);
}

double NNfunction_sb_cLdR::synapse0x26bc2a0() {
   return (neuron0x2693cd0()*0.0193207);
}

double NNfunction_sb_cLdR::synapse0x26bc2e0() {
   return (neuron0x26946a0()*0.0350736);
}

double NNfunction_sb_cLdR::synapse0x26bc320() {
   return (neuron0x2695070()*-0.959667);
}

double NNfunction_sb_cLdR::synapse0x26bc360() {
   return (neuron0x2695b50()*0.0178898);
}

double NNfunction_sb_cLdR::synapse0x26bc3a0() {
   return (neuron0x2696520()*-0.345794);
}

double NNfunction_sb_cLdR::synapse0x26bc3e0() {
   return (neuron0x2693600()*-0.256578);
}

double NNfunction_sb_cLdR::synapse0x26bc420() {
   return (neuron0x26980d0()*-0.148206);
}

double NNfunction_sb_cLdR::synapse0x26bc460() {
   return (neuron0x2698aa0()*-0.251821);
}

double NNfunction_sb_cLdR::synapse0x26bc4a0() {
   return (neuron0x2699470()*0.117133);
}

double NNfunction_sb_cLdR::synapse0x26bc4e0() {
   return (neuron0x2699e40()*-0.247905);
}

double NNfunction_sb_cLdR::synapse0x26bbf70() {
   return (neuron0x269bc50()*0.0216879);
}

double NNfunction_sb_cLdR::synapse0x26bbfb0() {
   return (neuron0x269bf30()*-0.243884);
}

double NNfunction_sb_cLdR::synapse0x26bc630() {
   return (neuron0x269c900()*0.172272);
}

double NNfunction_sb_cLdR::synapse0x26bc670() {
   return (neuron0x269d2d0()*-0.0281439);
}

double NNfunction_sb_cLdR::synapse0x26bc6b0() {
   return (neuron0x269dca0()*-0.130333);
}

double NNfunction_sb_cLdR::synapse0x26bc6f0() {
   return (neuron0x269e670()*-0.657875);
}

double NNfunction_sb_cLdR::synapse0x26bc730() {
   return (neuron0x26971c0()*1.4269);
}

double NNfunction_sb_cLdR::synapse0x26bc770() {
   return (neuron0x2697b90()*-0.0469357);
}

double NNfunction_sb_cLdR::synapse0x26bc7b0() {
   return (neuron0x26a1400()*0.227231);
}

double NNfunction_sb_cLdR::synapse0x26bc7f0() {
   return (neuron0x26a1dd0()*-1.24283);
}

double NNfunction_sb_cLdR::synapse0x26bc830() {
   return (neuron0x26a27a0()*-0.006199);
}

double NNfunction_sb_cLdR::synapse0x26bc870() {
   return (neuron0x26a3170()*0.112506);
}

double NNfunction_sb_cLdR::synapse0x26bc8b0() {
   return (neuron0x26a3b40()*-0.0983177);
}

double NNfunction_sb_cLdR::synapse0x26bc8f0() {
   return (neuron0x26a4510()*-0.0679577);
}

double NNfunction_sb_cLdR::synapse0x26bc930() {
   return (neuron0x26a4ee0()*-0.0116301);
}

double NNfunction_sb_cLdR::synapse0x26bc970() {
   return (neuron0x26a58b0()*0.0879187);
}

double NNfunction_sb_cLdR::synapse0x26bc520() {
   return (neuron0x269b940()*-0.161681);
}

double NNfunction_sb_cLdR::synapse0x26bc560() {
   return (neuron0x26a8490()*0.00661881);
}

double NNfunction_sb_cLdR::synapse0x26bc5a0() {
   return (neuron0x26a8e60()*-0.0864402);
}

double NNfunction_sb_cLdR::synapse0x26bc5e0() {
   return (neuron0x26a9830()*-1.09624);
}

double NNfunction_sb_cLdR::synapse0x26bcbc0() {
   return (neuron0x26aa200()*-0.305419);
}

double NNfunction_sb_cLdR::synapse0x26bcc00() {
   return (neuron0x26aabd0()*0.329659);
}

double NNfunction_sb_cLdR::synapse0x26bcc40() {
   return (neuron0x26ab5a0()*0.0483701);
}

double NNfunction_sb_cLdR::synapse0x26bcc80() {
   return (neuron0x26abf70()*0.267288);
}

double NNfunction_sb_cLdR::synapse0x26bccc0() {
   return (neuron0x26ac940()*-0.963271);
}

double NNfunction_sb_cLdR::synapse0x26bcd00() {
   return (neuron0x26ad520()*-0.0866683);
}

double NNfunction_sb_cLdR::synapse0x26bcd40() {
   return (neuron0x26adef0()*0.105809);
}

double NNfunction_sb_cLdR::synapse0x26bcd80() {
   return (neuron0x269ed70()*0.0756271);
}

double NNfunction_sb_cLdR::synapse0x26bcdc0() {
   return (neuron0x269f740()*-0.0774936);
}

double NNfunction_sb_cLdR::synapse0x26bce00() {
   return (neuron0x26a0110()*-0.54455);
}

double NNfunction_sb_cLdR::synapse0x26bce40() {
   return (neuron0x26b2750()*1.27606);
}

double NNfunction_sb_cLdR::synapse0x26bce80() {
   return (neuron0x26b3000()*0.121951);
}

double NNfunction_sb_cLdR::synapse0x26bcec0() {
   return (neuron0x26b39d0()*-0.0117135);
}

double NNfunction_sb_cLdR::synapse0x26bcf00() {
   return (neuron0x26b43a0()*-0.224086);
}

double NNfunction_sb_cLdR::synapse0x26bd280() {
   return (neuron0x2690320()*0.435793);
}

double NNfunction_sb_cLdR::synapse0x26bd2c0() {
   return (neuron0x2690c70()*1.15809);
}

double NNfunction_sb_cLdR::synapse0x26bd300() {
   return (neuron0x2691750()*-0.00446718);
}

double NNfunction_sb_cLdR::synapse0x26bd340() {
   return (neuron0x26911f0()*0.0796353);
}

double NNfunction_sb_cLdR::synapse0x26bd380() {
   return (neuron0x2692530()*0.109074);
}

double NNfunction_sb_cLdR::synapse0x26bd3c0() {
   return (neuron0x2692f00()*-0.078627);
}

double NNfunction_sb_cLdR::synapse0x26bd400() {
   return (neuron0x2693cd0()*-1.4119);
}

double NNfunction_sb_cLdR::synapse0x26bd440() {
   return (neuron0x26946a0()*-0.0235995);
}

double NNfunction_sb_cLdR::synapse0x26bd480() {
   return (neuron0x2695070()*0.958046);
}

double NNfunction_sb_cLdR::synapse0x26bd4c0() {
   return (neuron0x2695b50()*-0.47848);
}

double NNfunction_sb_cLdR::synapse0x26bd500() {
   return (neuron0x2696520()*0.461501);
}

double NNfunction_sb_cLdR::synapse0x26bd540() {
   return (neuron0x2693600()*0.100749);
}

double NNfunction_sb_cLdR::synapse0x26bd580() {
   return (neuron0x26980d0()*0.0031837);
}

double NNfunction_sb_cLdR::synapse0x26bd5c0() {
   return (neuron0x2698aa0()*-0.538804);
}

double NNfunction_sb_cLdR::synapse0x26bd600() {
   return (neuron0x2699470()*0.00583084);
}

double NNfunction_sb_cLdR::synapse0x26bd640() {
   return (neuron0x2699e40()*0.12936);
}

double NNfunction_sb_cLdR::synapse0x26bd0d0() {
   return (neuron0x269bc50()*0.722271);
}

double NNfunction_sb_cLdR::synapse0x26bd110() {
   return (neuron0x269bf30()*0.119354);
}

double NNfunction_sb_cLdR::synapse0x26bd790() {
   return (neuron0x269c900()*-0.092378);
}

double NNfunction_sb_cLdR::synapse0x26bd7d0() {
   return (neuron0x269d2d0()*0.028291);
}

double NNfunction_sb_cLdR::synapse0x26bd810() {
   return (neuron0x269dca0()*0.0719069);
}

double NNfunction_sb_cLdR::synapse0x26bd850() {
   return (neuron0x269e670()*0.342334);
}

double NNfunction_sb_cLdR::synapse0x26bd890() {
   return (neuron0x26971c0()*4.80308);
}

double NNfunction_sb_cLdR::synapse0x26bd8d0() {
   return (neuron0x2697b90()*-0.00118791);
}

double NNfunction_sb_cLdR::synapse0x26bd910() {
   return (neuron0x26a1400()*-0.068798);
}

double NNfunction_sb_cLdR::synapse0x26bd950() {
   return (neuron0x26a1dd0()*-1.9403);
}

double NNfunction_sb_cLdR::synapse0x26bd990() {
   return (neuron0x26a27a0()*-0.00284215);
}

double NNfunction_sb_cLdR::synapse0x26bd9d0() {
   return (neuron0x26a3170()*-0.00672478);
}

double NNfunction_sb_cLdR::synapse0x26bda10() {
   return (neuron0x26a3b40()*0.00887159);
}

double NNfunction_sb_cLdR::synapse0x26bda50() {
   return (neuron0x26a4510()*0.055172);
}

double NNfunction_sb_cLdR::synapse0x26bda90() {
   return (neuron0x26a4ee0()*-0.0575572);
}

double NNfunction_sb_cLdR::synapse0x26bdad0() {
   return (neuron0x26a58b0()*0.0123671);
}

double NNfunction_sb_cLdR::synapse0x26bd680() {
   return (neuron0x269b940()*0.105324);
}

double NNfunction_sb_cLdR::synapse0x26bd6c0() {
   return (neuron0x26a8490()*-0.00592769);
}

double NNfunction_sb_cLdR::synapse0x26bd700() {
   return (neuron0x26a8e60()*-0.0676906);
}

double NNfunction_sb_cLdR::synapse0x26bd740() {
   return (neuron0x26a9830()*0.541235);
}

double NNfunction_sb_cLdR::synapse0x26bdd20() {
   return (neuron0x26aa200()*0.118587);
}

double NNfunction_sb_cLdR::synapse0x26bdd60() {
   return (neuron0x26aabd0()*-1.43907);
}

double NNfunction_sb_cLdR::synapse0x26bdda0() {
   return (neuron0x26ab5a0()*0.00589375);
}

double NNfunction_sb_cLdR::synapse0x26bdde0() {
   return (neuron0x26abf70()*0.924793);
}

double NNfunction_sb_cLdR::synapse0x26bde20() {
   return (neuron0x26ac940()*-3.4034);
}

double NNfunction_sb_cLdR::synapse0x26bde60() {
   return (neuron0x26ad520()*-0.00311971);
}

double NNfunction_sb_cLdR::synapse0x26bdea0() {
   return (neuron0x26adef0()*0.0594139);
}

double NNfunction_sb_cLdR::synapse0x26bdee0() {
   return (neuron0x269ed70()*-0.00672084);
}

double NNfunction_sb_cLdR::synapse0x26bdf20() {
   return (neuron0x269f740()*0.030572);
}

double NNfunction_sb_cLdR::synapse0x26bdf60() {
   return (neuron0x26a0110()*0.359803);
}

double NNfunction_sb_cLdR::synapse0x26bdfa0() {
   return (neuron0x26b2750()*-2.23498);
}

double NNfunction_sb_cLdR::synapse0x26bdfe0() {
   return (neuron0x26b3000()*-0.0936942);
}

double NNfunction_sb_cLdR::synapse0x26be020() {
   return (neuron0x26b39d0()*0.0517687);
}

double NNfunction_sb_cLdR::synapse0x26be060() {
   return (neuron0x26b43a0()*0.114088);
}

double NNfunction_sb_cLdR::synapse0x26be3e0() {
   return (neuron0x2690320()*1.1087);
}

double NNfunction_sb_cLdR::synapse0x26be420() {
   return (neuron0x2690c70()*0.278148);
}

double NNfunction_sb_cLdR::synapse0x26be460() {
   return (neuron0x2691750()*-0.475366);
}

double NNfunction_sb_cLdR::synapse0x26be4a0() {
   return (neuron0x26911f0()*0.839001);
}

double NNfunction_sb_cLdR::synapse0x26be4e0() {
   return (neuron0x2692530()*-0.64575);
}

double NNfunction_sb_cLdR::synapse0x26be520() {
   return (neuron0x2692f00()*0.837235);
}

double NNfunction_sb_cLdR::synapse0x26be560() {
   return (neuron0x2693cd0()*-1.29542);
}

double NNfunction_sb_cLdR::synapse0x26be5a0() {
   return (neuron0x26946a0()*-0.21787);
}

double NNfunction_sb_cLdR::synapse0x26be5e0() {
   return (neuron0x2695070()*4.62671);
}

double NNfunction_sb_cLdR::synapse0x26be620() {
   return (neuron0x2695b50()*-0.0733494);
}

double NNfunction_sb_cLdR::synapse0x26be660() {
   return (neuron0x2696520()*4.10535);
}

double NNfunction_sb_cLdR::synapse0x26be6a0() {
   return (neuron0x2693600()*0.15222);
}

double NNfunction_sb_cLdR::synapse0x26be6e0() {
   return (neuron0x26980d0()*0.226173);
}

double NNfunction_sb_cLdR::synapse0x26be720() {
   return (neuron0x2698aa0()*0.30521);
}

double NNfunction_sb_cLdR::synapse0x26be760() {
   return (neuron0x2699470()*1.04687);
}

double NNfunction_sb_cLdR::synapse0x26be7a0() {
   return (neuron0x2699e40()*1.21686);
}

double NNfunction_sb_cLdR::synapse0x26be230() {
   return (neuron0x269bc50()*1.55895);
}

double NNfunction_sb_cLdR::synapse0x26be270() {
   return (neuron0x269bf30()*-0.836622);
}

double NNfunction_sb_cLdR::synapse0x26be8f0() {
   return (neuron0x269c900()*1.01167);
}

double NNfunction_sb_cLdR::synapse0x26be930() {
   return (neuron0x269d2d0()*-0.740481);
}

double NNfunction_sb_cLdR::synapse0x26be970() {
   return (neuron0x269dca0()*-1.31393);
}

double NNfunction_sb_cLdR::synapse0x26be9b0() {
   return (neuron0x269e670()*-1.21747);
}

double NNfunction_sb_cLdR::synapse0x26be9f0() {
   return (neuron0x26971c0()*4.80738);
}

double NNfunction_sb_cLdR::synapse0x26bea30() {
   return (neuron0x2697b90()*-0.0409407);
}

double NNfunction_sb_cLdR::synapse0x26bea70() {
   return (neuron0x26a1400()*1.40489);
}

double NNfunction_sb_cLdR::synapse0x26beab0() {
   return (neuron0x26a1dd0()*-1.04755);
}

double NNfunction_sb_cLdR::synapse0x26beaf0() {
   return (neuron0x26a27a0()*0.873059);
}

double NNfunction_sb_cLdR::synapse0x26beb30() {
   return (neuron0x26a3170()*-0.0177954);
}

double NNfunction_sb_cLdR::synapse0x26beb70() {
   return (neuron0x26a3b40()*-0.251623);
}

double NNfunction_sb_cLdR::synapse0x26bebb0() {
   return (neuron0x26a4510()*0.733195);
}

double NNfunction_sb_cLdR::synapse0x26bebf0() {
   return (neuron0x26a4ee0()*-0.225196);
}

double NNfunction_sb_cLdR::synapse0x26bec30() {
   return (neuron0x26a58b0()*0.109516);
}

double NNfunction_sb_cLdR::synapse0x26be7e0() {
   return (neuron0x269b940()*-1.3359);
}

double NNfunction_sb_cLdR::synapse0x26be820() {
   return (neuron0x26a8490()*0.254926);
}

double NNfunction_sb_cLdR::synapse0x26be860() {
   return (neuron0x26a8e60()*-1.2163);
}

double NNfunction_sb_cLdR::synapse0x26be8a0() {
   return (neuron0x26a9830()*-0.869966);
}

double NNfunction_sb_cLdR::synapse0x26bee80() {
   return (neuron0x26aa200()*-2.48628);
}

double NNfunction_sb_cLdR::synapse0x26beec0() {
   return (neuron0x26aabd0()*-0.817837);
}

double NNfunction_sb_cLdR::synapse0x26bef00() {
   return (neuron0x26ab5a0()*0.510766);
}

double NNfunction_sb_cLdR::synapse0x26bef40() {
   return (neuron0x26abf70()*0.662284);
}

double NNfunction_sb_cLdR::synapse0x26bef80() {
   return (neuron0x26ac940()*-2.83056);
}

double NNfunction_sb_cLdR::synapse0x26befc0() {
   return (neuron0x26ad520()*0.121978);
}

double NNfunction_sb_cLdR::synapse0x26bf000() {
   return (neuron0x26adef0()*1.42332);
}

double NNfunction_sb_cLdR::synapse0x26bf040() {
   return (neuron0x269ed70()*0.081271);
}

double NNfunction_sb_cLdR::synapse0x26bf080() {
   return (neuron0x269f740()*-0.328975);
}

double NNfunction_sb_cLdR::synapse0x26bf0c0() {
   return (neuron0x26a0110()*-0.108722);
}

double NNfunction_sb_cLdR::synapse0x26bf100() {
   return (neuron0x26b2750()*-1.37949);
}

double NNfunction_sb_cLdR::synapse0x26bf140() {
   return (neuron0x26b3000()*-1.48845);
}

double NNfunction_sb_cLdR::synapse0x26bf180() {
   return (neuron0x26b39d0()*0.552482);
}

double NNfunction_sb_cLdR::synapse0x26bf1c0() {
   return (neuron0x26b43a0()*-1.01536);
}

double NNfunction_sb_cLdR::synapse0x26bf420() {
   return (neuron0x26bb5a0()*-5.26245);
}

double NNfunction_sb_cLdR::synapse0x26bf460() {
   return (neuron0x26bb940()*-4.99924);
}

double NNfunction_sb_cLdR::synapse0x26bf4a0() {
   return (neuron0x26bbde0()*-2.97961);
}

double NNfunction_sb_cLdR::synapse0x26bf4e0() {
   return (neuron0x26bcf40()*-6.50982);
}

double NNfunction_sb_cLdR::synapse0x26bf520() {
   return (neuron0x26be0a0()*-3.43183);
}

