#include "NNfunction_sb_uRsR.h"
#include <cmath>

double NNfunction_sb_uRsR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.9301)/15.024;
   input1 = (in1 - 50.0644)/748.054;
   input2 = (in2 - 371.002)/474.567;
   input3 = (in3 - 261.562)/604.553;
   input4 = (in4 - 747.409)/698.436;
   input5 = (in5 - 652.829)/670.979;
   input6 = (in6 - 661.071)/679.391;
   input7 = (in7 - 650.682)/666.875;
   input8 = (in8 - 646.039)/687.527;
   input9 = (in9 - 638.625)/675.637;
   input10 = (in10 - 646.471)/694.502;
   input11 = (in11 - 679.201)/570.574;
   input12 = (in12 - 683.049)/578.019;
   input13 = (in13 - 528.992)/356.955;
   input14 = (in14 - 559.576)/342.211;
   input15 = (in15 - 681.498)/556.64;
   input16 = (in16 - 478.345)/388.779;
   input17 = (in17 - 689.545)/591.751;
   input18 = (in18 - 546.943)/340.253;
   input19 = (in19 - 689.631)/588.816;
   input20 = (in20 - -205.941)/400.994;
   input21 = (in21 - -261.944)/883.412;
   input22 = (in22 - 1.15237)/882.411;
   input23 = (in23 - -15.1482)/498.343;
   switch(index) {
     case 0:
         return neuron0x346ee10();
     default:
         return 0.;
   }
}

double NNfunction_sb_uRsR::Value(int index, double* input) {
   input0 = (input[0] - 22.9301)/15.024;
   input1 = (input[1] - 50.0644)/748.054;
   input2 = (input[2] - 371.002)/474.567;
   input3 = (input[3] - 261.562)/604.553;
   input4 = (input[4] - 747.409)/698.436;
   input5 = (input[5] - 652.829)/670.979;
   input6 = (input[6] - 661.071)/679.391;
   input7 = (input[7] - 650.682)/666.875;
   input8 = (input[8] - 646.039)/687.527;
   input9 = (input[9] - 638.625)/675.637;
   input10 = (input[10] - 646.471)/694.502;
   input11 = (input[11] - 679.201)/570.574;
   input12 = (input[12] - 683.049)/578.019;
   input13 = (input[13] - 528.992)/356.955;
   input14 = (input[14] - 559.576)/342.211;
   input15 = (input[15] - 681.498)/556.64;
   input16 = (input[16] - 478.345)/388.779;
   input17 = (input[17] - 689.545)/591.751;
   input18 = (input[18] - 546.943)/340.253;
   input19 = (input[19] - 689.631)/588.816;
   input20 = (input[20] - -205.941)/400.994;
   input21 = (input[21] - -261.944)/883.412;
   input22 = (input[22] - 1.15237)/882.411;
   input23 = (input[23] - -15.1482)/498.343;
   switch(index) {
     case 0:
         return neuron0x346ee10();
     default:
         return 0.;
   }
}

double NNfunction_sb_uRsR::neuron0x3439e80() {
   return input0;
}

double NNfunction_sb_uRsR::neuron0x343a130() {
   return input1;
}

double NNfunction_sb_uRsR::neuron0x343a470() {
   return input2;
}

double NNfunction_sb_uRsR::neuron0x343a7b0() {
   return input3;
}

double NNfunction_sb_uRsR::neuron0x343aaf0() {
   return input4;
}

double NNfunction_sb_uRsR::neuron0x343ae30() {
   return input5;
}

double NNfunction_sb_uRsR::neuron0x343b170() {
   return input6;
}

double NNfunction_sb_uRsR::neuron0x343b4b0() {
   return input7;
}

double NNfunction_sb_uRsR::neuron0x343b7f0() {
   return input8;
}

double NNfunction_sb_uRsR::neuron0x343bb30() {
   return input9;
}

double NNfunction_sb_uRsR::neuron0x343be70() {
   return input10;
}

double NNfunction_sb_uRsR::neuron0x343c1b0() {
   return input11;
}

double NNfunction_sb_uRsR::neuron0x343c4f0() {
   return input12;
}

double NNfunction_sb_uRsR::neuron0x343c830() {
   return input13;
}

double NNfunction_sb_uRsR::neuron0x343cb70() {
   return input14;
}

double NNfunction_sb_uRsR::neuron0x343ceb0() {
   return input15;
}

double NNfunction_sb_uRsR::neuron0x343d1f0() {
   return input16;
}

double NNfunction_sb_uRsR::neuron0x343d750() {
   return input17;
}

double NNfunction_sb_uRsR::neuron0x343da90() {
   return input18;
}

double NNfunction_sb_uRsR::neuron0x343ddd0() {
   return input19;
}

double NNfunction_sb_uRsR::neuron0x343e110() {
   return input20;
}

double NNfunction_sb_uRsR::neuron0x343e450() {
   return input21;
}

double NNfunction_sb_uRsR::neuron0x343e790() {
   return input22;
}

double NNfunction_sb_uRsR::neuron0x343ead0() {
   return input23;
}

double NNfunction_sb_uRsR::input0x343ef40() {
   double input = -0.207815;
   input += synapse0x343f280();
   input += synapse0x343f2c0();
   input += synapse0x343f300();
   input += synapse0x343f340();
   input += synapse0x343f380();
   input += synapse0x343f3c0();
   input += synapse0x343f400();
   input += synapse0x343f440();
   input += synapse0x343f480();
   input += synapse0x343f4c0();
   input += synapse0x343f500();
   input += synapse0x343f540();
   input += synapse0x343f580();
   input += synapse0x343f5c0();
   input += synapse0x343f600();
   input += synapse0x343f640();
   input += synapse0x343f0d0();
   input += synapse0x343f110();
   input += synapse0x31f6050();
   input += synapse0x31f6090();
   input += synapse0x343f680();
   input += synapse0x343f6c0();
   input += synapse0x343f700();
   input += synapse0x343f740();
   return input;
}

double NNfunction_sb_uRsR::neuron0x343ef40() {
   double input = input0x343ef40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x343f780() {
   double input = 0.290242;
   input += synapse0x343fac0();
   input += synapse0x343fb00();
   input += synapse0x343fb40();
   input += synapse0x343fb80();
   input += synapse0x343fbc0();
   input += synapse0x343fc00();
   input += synapse0x343fc40();
   input += synapse0x343fc80();
   input += synapse0x343fcc0();
   input += synapse0x31f5ea0();
   input += synapse0x31f5ee0();
   input += synapse0x31f5f20();
   input += synapse0x31f5f60();
   input += synapse0x343ff10();
   input += synapse0x343ff50();
   input += synapse0x343ff90();
   input += synapse0x343f910();
   input += synapse0x343f950();
   input += synapse0x34400e0();
   input += synapse0x3440120();
   input += synapse0x3440160();
   input += synapse0x34401a0();
   input += synapse0x34401e0();
   input += synapse0x3440220();
   return input;
}

double NNfunction_sb_uRsR::neuron0x343f780() {
   double input = input0x343f780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x3440260() {
   double input = 0.895174;
   input += synapse0x34405a0();
   input += synapse0x34405e0();
   input += synapse0x3440620();
   input += synapse0x3440660();
   input += synapse0x34406a0();
   input += synapse0x34406e0();
   input += synapse0x3440720();
   input += synapse0x3440760();
   input += synapse0x34407a0();
   input += synapse0x34407e0();
   input += synapse0x3440820();
   input += synapse0x3440860();
   input += synapse0x34408a0();
   input += synapse0x34408e0();
   input += synapse0x3440920();
   input += synapse0x3440960();
   input += synapse0x34403f0();
   input += synapse0x3440430();
   input += synapse0x31f66f0();
   input += synapse0x3203fc0();
   input += synapse0x3204000();
   input += synapse0x3442890();
   input += synapse0x34428d0();
   input += synapse0x3439bc0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x3440260() {
   double input = input0x3440260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x343fd00() {
   double input = 0.0128113;
   input += synapse0x3439c90();
   input += synapse0x3204840();
   input += synapse0x343fe90();
   input += synapse0x343fed0();
   input += synapse0x3440ab0();
   input += synapse0x3440af0();
   input += synapse0x3440b30();
   input += synapse0x3440b70();
   input += synapse0x3440bb0();
   input += synapse0x3440bf0();
   input += synapse0x3440c30();
   input += synapse0x3440c70();
   input += synapse0x3440cb0();
   input += synapse0x3440cf0();
   input += synapse0x3440d30();
   input += synapse0x3440d70();
   input += synapse0x3439c00();
   input += synapse0x3439c40();
   input += synapse0x3440ec0();
   input += synapse0x3440f00();
   input += synapse0x3440f40();
   input += synapse0x3440f80();
   input += synapse0x3440fc0();
   input += synapse0x3441000();
   return input;
}

double NNfunction_sb_uRsR::neuron0x343fd00() {
   double input = input0x343fd00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x3441040() {
   double input = -5.2536;
   input += synapse0x3441380();
   input += synapse0x34413c0();
   input += synapse0x3441400();
   input += synapse0x3441440();
   input += synapse0x3441480();
   input += synapse0x34414c0();
   input += synapse0x3441500();
   input += synapse0x3441540();
   input += synapse0x3441580();
   input += synapse0x34415c0();
   input += synapse0x3441600();
   input += synapse0x3441640();
   input += synapse0x3441680();
   input += synapse0x34416c0();
   input += synapse0x3441700();
   input += synapse0x3441740();
   input += synapse0x3441890();
   input += synapse0x34411d0();
   input += synapse0x3441210();
   input += synapse0x34429d0();
   input += synapse0x3442a10();
   input += synapse0x3442a50();
   input += synapse0x3442a90();
   input += synapse0x3442ad0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x3441040() {
   double input = input0x3441040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x3442b10() {
   double input = 1.10427;
   input += synapse0x3442e50();
   input += synapse0x3442e90();
   input += synapse0x3442ed0();
   input += synapse0x3442f10();
   input += synapse0x3442f50();
   input += synapse0x3442f90();
   input += synapse0x3442fd0();
   input += synapse0x3443010();
   input += synapse0x3443050();
   input += synapse0x3204310();
   input += synapse0x3204350();
   input += synapse0x3204390();
   input += synapse0x32043d0();
   input += synapse0x3204410();
   input += synapse0x3204450();
   input += synapse0x3204490();
   input += synapse0x3442ca0();
   input += synapse0x3442ce0();
   input += synapse0x32045e0();
   input += synapse0x3204620();
   input += synapse0x3204660();
   input += synapse0x32046a0();
   input += synapse0x32046e0();
   input += synapse0x34438a0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x3442b10() {
   double input = input0x3442b10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x34438e0() {
   double input = -0.112231;
   input += synapse0x3443c20();
   input += synapse0x3443c60();
   input += synapse0x3443ca0();
   input += synapse0x3443ce0();
   input += synapse0x3443d20();
   input += synapse0x3443d60();
   input += synapse0x3443da0();
   input += synapse0x3443de0();
   input += synapse0x3443e20();
   input += synapse0x3443e60();
   input += synapse0x3443ea0();
   input += synapse0x3443ee0();
   input += synapse0x3443f20();
   input += synapse0x3443f60();
   input += synapse0x3443fa0();
   input += synapse0x3443fe0();
   input += synapse0x3443a70();
   input += synapse0x3443ab0();
   input += synapse0x3444130();
   input += synapse0x3444170();
   input += synapse0x34441b0();
   input += synapse0x34441f0();
   input += synapse0x3444230();
   input += synapse0x3444270();
   return input;
}

double NNfunction_sb_uRsR::neuron0x34438e0() {
   double input = input0x34438e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x34442b0() {
   double input = -0.315377;
   input += synapse0x34445f0();
   input += synapse0x3444630();
   input += synapse0x3444670();
   input += synapse0x34446b0();
   input += synapse0x34446f0();
   input += synapse0x3444730();
   input += synapse0x3444770();
   input += synapse0x34447b0();
   input += synapse0x34447f0();
   input += synapse0x3444830();
   input += synapse0x3444870();
   input += synapse0x34448b0();
   input += synapse0x34448f0();
   input += synapse0x3444930();
   input += synapse0x3444970();
   input += synapse0x34449b0();
   input += synapse0x3444440();
   input += synapse0x3444480();
   input += synapse0x3444b00();
   input += synapse0x3444b40();
   input += synapse0x3444b80();
   input += synapse0x3444bc0();
   input += synapse0x3444c00();
   input += synapse0x3444c40();
   return input;
}

double NNfunction_sb_uRsR::neuron0x34442b0() {
   double input = input0x34442b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x3444c80() {
   double input = -0.758734;
   input += synapse0x343d640();
   input += synapse0x343d680();
   input += synapse0x343d6c0();
   input += synapse0x343d700();
   input += synapse0x34451d0();
   input += synapse0x3445210();
   input += synapse0x3445250();
   input += synapse0x3445290();
   input += synapse0x34452d0();
   input += synapse0x3445310();
   input += synapse0x3445350();
   input += synapse0x3445390();
   input += synapse0x34453d0();
   input += synapse0x3445410();
   input += synapse0x3445450();
   input += synapse0x3445490();
   input += synapse0x3444e10();
   input += synapse0x3444e50();
   input += synapse0x34455e0();
   input += synapse0x3445620();
   input += synapse0x3445660();
   input += synapse0x34456a0();
   input += synapse0x34456e0();
   input += synapse0x3445720();
   return input;
}

double NNfunction_sb_uRsR::neuron0x3444c80() {
   double input = input0x3444c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x3445760() {
   double input = 1.16693;
   input += synapse0x3445aa0();
   input += synapse0x3445ae0();
   input += synapse0x3445b20();
   input += synapse0x3445b60();
   input += synapse0x3445ba0();
   input += synapse0x3445be0();
   input += synapse0x3445c20();
   input += synapse0x3445c60();
   input += synapse0x3445ca0();
   input += synapse0x3445ce0();
   input += synapse0x3445d20();
   input += synapse0x3445d60();
   input += synapse0x3445da0();
   input += synapse0x3445de0();
   input += synapse0x3445e20();
   input += synapse0x3445e60();
   input += synapse0x34458f0();
   input += synapse0x3445930();
   input += synapse0x3445fb0();
   input += synapse0x3445ff0();
   input += synapse0x3446030();
   input += synapse0x3446070();
   input += synapse0x34460b0();
   input += synapse0x34460f0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x3445760() {
   double input = input0x3445760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x3446130() {
   double input = 0.141927;
   input += synapse0x3446470();
   input += synapse0x34464b0();
   input += synapse0x34464f0();
   input += synapse0x3446530();
   input += synapse0x3446570();
   input += synapse0x34465b0();
   input += synapse0x34465f0();
   input += synapse0x3446630();
   input += synapse0x3446670();
   input += synapse0x34466b0();
   input += synapse0x34466f0();
   input += synapse0x3446730();
   input += synapse0x3446770();
   input += synapse0x34467b0();
   input += synapse0x34467f0();
   input += synapse0x3446830();
   input += synapse0x34462c0();
   input += synapse0x3446300();
   input += synapse0x3443090();
   input += synapse0x34430d0();
   input += synapse0x3443110();
   input += synapse0x3443150();
   input += synapse0x3443190();
   input += synapse0x34431d0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x3446130() {
   double input = input0x3446130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x3443210() {
   double input = 1.01485;
   input += synapse0x3443550();
   input += synapse0x3443590();
   input += synapse0x34435d0();
   input += synapse0x3443610();
   input += synapse0x3443650();
   input += synapse0x3443690();
   input += synapse0x34436d0();
   input += synapse0x3443710();
   input += synapse0x3443750();
   input += synapse0x3443790();
   input += synapse0x34437d0();
   input += synapse0x3443810();
   input += synapse0x3443850();
   input += synapse0x3447990();
   input += synapse0x34479d0();
   input += synapse0x3447a10();
   input += synapse0x34433a0();
   input += synapse0x34433e0();
   input += synapse0x3447b60();
   input += synapse0x3447ba0();
   input += synapse0x3447be0();
   input += synapse0x3447c20();
   input += synapse0x3447c60();
   input += synapse0x3447ca0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x3443210() {
   double input = input0x3443210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x3447ce0() {
   double input = -0.64463;
   input += synapse0x3448020();
   input += synapse0x3448060();
   input += synapse0x34480a0();
   input += synapse0x34480e0();
   input += synapse0x3448120();
   input += synapse0x3448160();
   input += synapse0x34481a0();
   input += synapse0x34481e0();
   input += synapse0x3448220();
   input += synapse0x3448260();
   input += synapse0x34482a0();
   input += synapse0x34482e0();
   input += synapse0x3448320();
   input += synapse0x3448360();
   input += synapse0x34483a0();
   input += synapse0x34483e0();
   input += synapse0x3447e70();
   input += synapse0x3447eb0();
   input += synapse0x3448530();
   input += synapse0x3448570();
   input += synapse0x34485b0();
   input += synapse0x34485f0();
   input += synapse0x3448630();
   input += synapse0x3448670();
   return input;
}

double NNfunction_sb_uRsR::neuron0x3447ce0() {
   double input = input0x3447ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x34486b0() {
   double input = -0.341434;
   input += synapse0x34489f0();
   input += synapse0x3448a30();
   input += synapse0x3448a70();
   input += synapse0x3448ab0();
   input += synapse0x3448af0();
   input += synapse0x3448b30();
   input += synapse0x3448b70();
   input += synapse0x3448bb0();
   input += synapse0x3448bf0();
   input += synapse0x3448c30();
   input += synapse0x3448c70();
   input += synapse0x3448cb0();
   input += synapse0x3448cf0();
   input += synapse0x3448d30();
   input += synapse0x3448d70();
   input += synapse0x3448db0();
   input += synapse0x3448840();
   input += synapse0x3448880();
   input += synapse0x3448f00();
   input += synapse0x3448f40();
   input += synapse0x3448f80();
   input += synapse0x3448fc0();
   input += synapse0x3449000();
   input += synapse0x3449040();
   return input;
}

double NNfunction_sb_uRsR::neuron0x34486b0() {
   double input = input0x34486b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x3449080() {
   double input = -0.182057;
   input += synapse0x34493c0();
   input += synapse0x3449400();
   input += synapse0x3449440();
   input += synapse0x3449480();
   input += synapse0x34494c0();
   input += synapse0x3449500();
   input += synapse0x3449540();
   input += synapse0x3449580();
   input += synapse0x34495c0();
   input += synapse0x3449600();
   input += synapse0x3449640();
   input += synapse0x3449680();
   input += synapse0x34496c0();
   input += synapse0x3449700();
   input += synapse0x3449740();
   input += synapse0x3449780();
   input += synapse0x3449210();
   input += synapse0x3449250();
   input += synapse0x34498d0();
   input += synapse0x3449910();
   input += synapse0x3449950();
   input += synapse0x3449990();
   input += synapse0x34499d0();
   input += synapse0x3449a10();
   return input;
}

double NNfunction_sb_uRsR::neuron0x3449080() {
   double input = input0x3449080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x3449a50() {
   double input = 0.796881;
   input += synapse0x3449d90();
   input += synapse0x343a010();
   input += synapse0x343a050();
   input += synapse0x343a350();
   input += synapse0x343a390();
   input += synapse0x343a690();
   input += synapse0x343a6d0();
   input += synapse0x343a9d0();
   input += synapse0x343aa10();
   input += synapse0x343ad10();
   input += synapse0x343ad50();
   input += synapse0x343b050();
   input += synapse0x343b090();
   input += synapse0x343b390();
   input += synapse0x343b3d0();
   input += synapse0x343b6d0();
   input += synapse0x343b710();
   input += synapse0x343ba10();
   input += synapse0x343ba50();
   input += synapse0x343bd50();
   input += synapse0x343bd90();
   input += synapse0x343c090();
   input += synapse0x343c0d0();
   input += synapse0x343c3d0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x3449a50() {
   double input = input0x3449a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x344b860() {
   double input = 1.45803;
   input += synapse0x343c410();
   input += synapse0x343d0d0();
   input += synapse0x343d110();
   input += synapse0x3449be0();
   input += synapse0x3449c20();
   input += synapse0x343d410();
   input += synapse0x343d450();
   input += synapse0x343d970();
   input += synapse0x343d9b0();
   input += synapse0x343dcb0();
   input += synapse0x343dcf0();
   input += synapse0x343dff0();
   input += synapse0x343e030();
   input += synapse0x343e330();
   input += synapse0x343e370();
   input += synapse0x343e670();
   input += synapse0x343e6b0();
   input += synapse0x343e9b0();
   input += synapse0x343e9f0();
   input += synapse0x343ecf0();
   input += synapse0x343ed30();
   input += synapse0x343c710();
   input += synapse0x343c750();
   input += synapse0x344bb00();
   return input;
}

double NNfunction_sb_uRsR::neuron0x344b860() {
   double input = input0x344b860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x344bb40() {
   double input = 0.271642;
   input += synapse0x344be80();
   input += synapse0x344bec0();
   input += synapse0x344bf00();
   input += synapse0x344bf40();
   input += synapse0x344bf80();
   input += synapse0x344bfc0();
   input += synapse0x344c000();
   input += synapse0x344c040();
   input += synapse0x344c080();
   input += synapse0x344c0c0();
   input += synapse0x344c100();
   input += synapse0x344c140();
   input += synapse0x344c180();
   input += synapse0x344c1c0();
   input += synapse0x344c200();
   input += synapse0x344c240();
   input += synapse0x344bcd0();
   input += synapse0x344bd10();
   input += synapse0x344c390();
   input += synapse0x344c3d0();
   input += synapse0x344c410();
   input += synapse0x344c450();
   input += synapse0x344c490();
   input += synapse0x344c4d0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x344bb40() {
   double input = input0x344bb40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x344c510() {
   double input = 0.0438889;
   input += synapse0x344c850();
   input += synapse0x344c890();
   input += synapse0x344c8d0();
   input += synapse0x344c910();
   input += synapse0x344c950();
   input += synapse0x344c990();
   input += synapse0x344c9d0();
   input += synapse0x344ca10();
   input += synapse0x344ca50();
   input += synapse0x344ca90();
   input += synapse0x344cad0();
   input += synapse0x344cb10();
   input += synapse0x344cb50();
   input += synapse0x344cb90();
   input += synapse0x344cbd0();
   input += synapse0x344cc10();
   input += synapse0x344c6a0();
   input += synapse0x344c6e0();
   input += synapse0x344cd60();
   input += synapse0x344cda0();
   input += synapse0x344cde0();
   input += synapse0x344ce20();
   input += synapse0x344ce60();
   input += synapse0x344cea0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x344c510() {
   double input = input0x344c510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x344cee0() {
   double input = -0.977993;
   input += synapse0x344d220();
   input += synapse0x344d260();
   input += synapse0x344d2a0();
   input += synapse0x344d2e0();
   input += synapse0x344d320();
   input += synapse0x344d360();
   input += synapse0x344d3a0();
   input += synapse0x344d3e0();
   input += synapse0x344d420();
   input += synapse0x344d460();
   input += synapse0x344d4a0();
   input += synapse0x344d4e0();
   input += synapse0x344d520();
   input += synapse0x344d560();
   input += synapse0x344d5a0();
   input += synapse0x344d5e0();
   input += synapse0x344d070();
   input += synapse0x344d0b0();
   input += synapse0x344d730();
   input += synapse0x344d770();
   input += synapse0x344d7b0();
   input += synapse0x344d7f0();
   input += synapse0x344d830();
   input += synapse0x344d870();
   return input;
}

double NNfunction_sb_uRsR::neuron0x344cee0() {
   double input = input0x344cee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x344d8b0() {
   double input = 0.0163094;
   input += synapse0x344dbf0();
   input += synapse0x344dc30();
   input += synapse0x344dc70();
   input += synapse0x344dcb0();
   input += synapse0x344dcf0();
   input += synapse0x344dd30();
   input += synapse0x344dd70();
   input += synapse0x344ddb0();
   input += synapse0x344ddf0();
   input += synapse0x344de30();
   input += synapse0x344de70();
   input += synapse0x344deb0();
   input += synapse0x344def0();
   input += synapse0x344df30();
   input += synapse0x344df70();
   input += synapse0x344dfb0();
   input += synapse0x344da40();
   input += synapse0x344da80();
   input += synapse0x344e100();
   input += synapse0x344e140();
   input += synapse0x344e180();
   input += synapse0x344e1c0();
   input += synapse0x344e200();
   input += synapse0x344e240();
   return input;
}

double NNfunction_sb_uRsR::neuron0x344d8b0() {
   double input = input0x344d8b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x344e280() {
   double input = 3.19151;
   input += synapse0x344e5c0();
   input += synapse0x344e600();
   input += synapse0x344e640();
   input += synapse0x344e680();
   input += synapse0x344e6c0();
   input += synapse0x344e700();
   input += synapse0x344e740();
   input += synapse0x344e780();
   input += synapse0x344e7c0();
   input += synapse0x3446980();
   input += synapse0x34469c0();
   input += synapse0x3446a00();
   input += synapse0x3446a40();
   input += synapse0x3446a80();
   input += synapse0x3446ac0();
   input += synapse0x3446b00();
   input += synapse0x344e410();
   input += synapse0x344e450();
   input += synapse0x3446c50();
   input += synapse0x3446c90();
   input += synapse0x3446cd0();
   input += synapse0x3446d10();
   input += synapse0x3446d50();
   input += synapse0x3446d90();
   return input;
}

double NNfunction_sb_uRsR::neuron0x344e280() {
   double input = input0x344e280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x3446dd0() {
   double input = -1.03299;
   input += synapse0x3447110();
   input += synapse0x3447150();
   input += synapse0x3447190();
   input += synapse0x34471d0();
   input += synapse0x3447210();
   input += synapse0x3447250();
   input += synapse0x3447290();
   input += synapse0x34472d0();
   input += synapse0x3447310();
   input += synapse0x3447350();
   input += synapse0x3447390();
   input += synapse0x34473d0();
   input += synapse0x3447410();
   input += synapse0x3447450();
   input += synapse0x3447490();
   input += synapse0x34474d0();
   input += synapse0x3446f60();
   input += synapse0x3446fa0();
   input += synapse0x3447620();
   input += synapse0x3447660();
   input += synapse0x34476a0();
   input += synapse0x34476e0();
   input += synapse0x3447720();
   input += synapse0x3447760();
   return input;
}

double NNfunction_sb_uRsR::neuron0x3446dd0() {
   double input = input0x3446dd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x34477a0() {
   double input = 0.697486;
   input += synapse0x3447930();
   input += synapse0x34509c0();
   input += synapse0x3450a00();
   input += synapse0x3450a40();
   input += synapse0x3450a80();
   input += synapse0x3450ac0();
   input += synapse0x3450b00();
   input += synapse0x3450b40();
   input += synapse0x3450b80();
   input += synapse0x3450bc0();
   input += synapse0x3450c00();
   input += synapse0x3450c40();
   input += synapse0x3450c80();
   input += synapse0x3450cc0();
   input += synapse0x3450d00();
   input += synapse0x3450d40();
   input += synapse0x3450810();
   input += synapse0x3450850();
   input += synapse0x3450e90();
   input += synapse0x3450ed0();
   input += synapse0x3450f10();
   input += synapse0x3450f50();
   input += synapse0x3450f90();
   input += synapse0x3450fd0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x34477a0() {
   double input = input0x34477a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x3451010() {
   double input = 0.0709596;
   input += synapse0x3451350();
   input += synapse0x3451390();
   input += synapse0x34513d0();
   input += synapse0x3451410();
   input += synapse0x3451450();
   input += synapse0x3451490();
   input += synapse0x34514d0();
   input += synapse0x3451510();
   input += synapse0x3451550();
   input += synapse0x3451590();
   input += synapse0x34515d0();
   input += synapse0x3451610();
   input += synapse0x3451650();
   input += synapse0x3451690();
   input += synapse0x34516d0();
   input += synapse0x3451710();
   input += synapse0x34511a0();
   input += synapse0x34511e0();
   input += synapse0x3451860();
   input += synapse0x34518a0();
   input += synapse0x34518e0();
   input += synapse0x3451920();
   input += synapse0x3451960();
   input += synapse0x34519a0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x3451010() {
   double input = input0x3451010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x34519e0() {
   double input = 1.97734;
   input += synapse0x3451d20();
   input += synapse0x3451d60();
   input += synapse0x3451da0();
   input += synapse0x3451de0();
   input += synapse0x3451e20();
   input += synapse0x3451e60();
   input += synapse0x3451ea0();
   input += synapse0x3451ee0();
   input += synapse0x3451f20();
   input += synapse0x3451f60();
   input += synapse0x3451fa0();
   input += synapse0x3451fe0();
   input += synapse0x3452020();
   input += synapse0x3452060();
   input += synapse0x34520a0();
   input += synapse0x34520e0();
   input += synapse0x3451b70();
   input += synapse0x3451bb0();
   input += synapse0x3452230();
   input += synapse0x3452270();
   input += synapse0x34522b0();
   input += synapse0x34522f0();
   input += synapse0x3452330();
   input += synapse0x3452370();
   return input;
}

double NNfunction_sb_uRsR::neuron0x34519e0() {
   double input = input0x34519e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x34523b0() {
   double input = 0.903367;
   input += synapse0x34526f0();
   input += synapse0x3452730();
   input += synapse0x3452770();
   input += synapse0x34527b0();
   input += synapse0x34527f0();
   input += synapse0x3452830();
   input += synapse0x3452870();
   input += synapse0x34528b0();
   input += synapse0x34528f0();
   input += synapse0x3452930();
   input += synapse0x3452970();
   input += synapse0x34529b0();
   input += synapse0x34529f0();
   input += synapse0x3452a30();
   input += synapse0x3452a70();
   input += synapse0x3452ab0();
   input += synapse0x3452540();
   input += synapse0x3452580();
   input += synapse0x3452c00();
   input += synapse0x3452c40();
   input += synapse0x3452c80();
   input += synapse0x3452cc0();
   input += synapse0x3452d00();
   input += synapse0x3452d40();
   return input;
}

double NNfunction_sb_uRsR::neuron0x34523b0() {
   double input = input0x34523b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x3452d80() {
   double input = -0.622276;
   input += synapse0x34530c0();
   input += synapse0x3453100();
   input += synapse0x3453140();
   input += synapse0x3453180();
   input += synapse0x34531c0();
   input += synapse0x3453200();
   input += synapse0x3453240();
   input += synapse0x3453280();
   input += synapse0x34532c0();
   input += synapse0x3453300();
   input += synapse0x3453340();
   input += synapse0x3453380();
   input += synapse0x34533c0();
   input += synapse0x3453400();
   input += synapse0x3453440();
   input += synapse0x3453480();
   input += synapse0x3452f10();
   input += synapse0x3452f50();
   input += synapse0x34535d0();
   input += synapse0x3453610();
   input += synapse0x3453650();
   input += synapse0x3453690();
   input += synapse0x34536d0();
   input += synapse0x3453710();
   return input;
}

double NNfunction_sb_uRsR::neuron0x3452d80() {
   double input = input0x3452d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x3453750() {
   double input = -2.34282;
   input += synapse0x3453a90();
   input += synapse0x3453ad0();
   input += synapse0x3453b10();
   input += synapse0x3453b50();
   input += synapse0x3453b90();
   input += synapse0x3453bd0();
   input += synapse0x3453c10();
   input += synapse0x3453c50();
   input += synapse0x3453c90();
   input += synapse0x3453cd0();
   input += synapse0x3453d10();
   input += synapse0x3453d50();
   input += synapse0x3453d90();
   input += synapse0x3453dd0();
   input += synapse0x3453e10();
   input += synapse0x3453e50();
   input += synapse0x34538e0();
   input += synapse0x3453920();
   input += synapse0x3453fa0();
   input += synapse0x3453fe0();
   input += synapse0x3454020();
   input += synapse0x3454060();
   input += synapse0x34540a0();
   input += synapse0x34540e0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x3453750() {
   double input = input0x3453750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x3454120() {
   double input = -2.06116;
   input += synapse0x3454460();
   input += synapse0x34544a0();
   input += synapse0x34544e0();
   input += synapse0x3454520();
   input += synapse0x3454560();
   input += synapse0x34545a0();
   input += synapse0x34545e0();
   input += synapse0x3454620();
   input += synapse0x3454660();
   input += synapse0x34546a0();
   input += synapse0x34546e0();
   input += synapse0x3454720();
   input += synapse0x3454760();
   input += synapse0x34547a0();
   input += synapse0x34547e0();
   input += synapse0x3454820();
   input += synapse0x34542b0();
   input += synapse0x34542f0();
   input += synapse0x3454970();
   input += synapse0x34549b0();
   input += synapse0x34549f0();
   input += synapse0x3454a30();
   input += synapse0x3454a70();
   input += synapse0x3454ab0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x3454120() {
   double input = input0x3454120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x3454af0() {
   double input = 1.25311;
   input += synapse0x3454e30();
   input += synapse0x3454e70();
   input += synapse0x3454eb0();
   input += synapse0x3454ef0();
   input += synapse0x3454f30();
   input += synapse0x3454f70();
   input += synapse0x3454fb0();
   input += synapse0x3454ff0();
   input += synapse0x3455030();
   input += synapse0x3455070();
   input += synapse0x34550b0();
   input += synapse0x34550f0();
   input += synapse0x3455130();
   input += synapse0x3455170();
   input += synapse0x34551b0();
   input += synapse0x34551f0();
   input += synapse0x3454c80();
   input += synapse0x3454cc0();
   input += synapse0x3455340();
   input += synapse0x3455380();
   input += synapse0x34553c0();
   input += synapse0x3455400();
   input += synapse0x3455440();
   input += synapse0x3455480();
   return input;
}

double NNfunction_sb_uRsR::neuron0x3454af0() {
   double input = input0x3454af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x34554c0() {
   double input = -0.255148;
   input += synapse0x3455800();
   input += synapse0x3449dd0();
   input += synapse0x3449e10();
   input += synapse0x3449e50();
   input += synapse0x344a0a0();
   input += synapse0x344a0e0();
   input += synapse0x344a120();
   input += synapse0x344a370();
   input += synapse0x344a3b0();
   input += synapse0x344a600();
   input += synapse0x344a640();
   input += synapse0x344a680();
   input += synapse0x344a8d0();
   input += synapse0x344a910();
   input += synapse0x344ab60();
   input += synapse0x344aba0();
   input += synapse0x3455650();
   input += synapse0x3455690();
   input += synapse0x344acf0();
   input += synapse0x344b200();
   input += synapse0x344b240();
   input += synapse0x344b280();
   input += synapse0x344b4d0();
   input += synapse0x344b510();
   return input;
}

double NNfunction_sb_uRsR::neuron0x34554c0() {
   double input = input0x34554c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x344b550() {
   double input = -0.167989;
   input += synapse0x344adc0();
   input += synapse0x344ae00();
   input += synapse0x344ae40();
   input += synapse0x344ae80();
   input += synapse0x344b800();
   input += synapse0x3457b50();
   input += synapse0x3457b90();
   input += synapse0x3457bd0();
   input += synapse0x3457c10();
   input += synapse0x3457c50();
   input += synapse0x3457c90();
   input += synapse0x3457cd0();
   input += synapse0x3457d10();
   input += synapse0x3457d50();
   input += synapse0x3457d90();
   input += synapse0x3457dd0();
   input += synapse0x344b6e0();
   input += synapse0x344b720();
   input += synapse0x3457f20();
   input += synapse0x3457f60();
   input += synapse0x3457fa0();
   input += synapse0x3457fe0();
   input += synapse0x3458020();
   input += synapse0x3458060();
   return input;
}

double NNfunction_sb_uRsR::neuron0x344b550() {
   double input = input0x344b550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x34580a0() {
   double input = -0.988502;
   input += synapse0x34583e0();
   input += synapse0x3458420();
   input += synapse0x3458460();
   input += synapse0x34584a0();
   input += synapse0x34584e0();
   input += synapse0x3458520();
   input += synapse0x3458560();
   input += synapse0x34585a0();
   input += synapse0x34585e0();
   input += synapse0x3458620();
   input += synapse0x3458660();
   input += synapse0x34586a0();
   input += synapse0x34586e0();
   input += synapse0x3458720();
   input += synapse0x3458760();
   input += synapse0x34587a0();
   input += synapse0x3458230();
   input += synapse0x3458270();
   input += synapse0x34588f0();
   input += synapse0x3458930();
   input += synapse0x3458970();
   input += synapse0x34589b0();
   input += synapse0x34589f0();
   input += synapse0x3458a30();
   return input;
}

double NNfunction_sb_uRsR::neuron0x34580a0() {
   double input = input0x34580a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x3458a70() {
   double input = 0.0391323;
   input += synapse0x3458db0();
   input += synapse0x3458df0();
   input += synapse0x3458e30();
   input += synapse0x3458e70();
   input += synapse0x3458eb0();
   input += synapse0x3458ef0();
   input += synapse0x3458f30();
   input += synapse0x3458f70();
   input += synapse0x3458fb0();
   input += synapse0x3458ff0();
   input += synapse0x3459030();
   input += synapse0x3459070();
   input += synapse0x34590b0();
   input += synapse0x34590f0();
   input += synapse0x3459130();
   input += synapse0x3459170();
   input += synapse0x3458c00();
   input += synapse0x3458c40();
   input += synapse0x34592c0();
   input += synapse0x3459300();
   input += synapse0x3459340();
   input += synapse0x3459380();
   input += synapse0x34593c0();
   input += synapse0x3459400();
   return input;
}

double NNfunction_sb_uRsR::neuron0x3458a70() {
   double input = input0x3458a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x3459440() {
   double input = 1.86121;
   input += synapse0x3459780();
   input += synapse0x34597c0();
   input += synapse0x3459800();
   input += synapse0x3459840();
   input += synapse0x3459880();
   input += synapse0x34598c0();
   input += synapse0x3459900();
   input += synapse0x3459940();
   input += synapse0x3459980();
   input += synapse0x34599c0();
   input += synapse0x3459a00();
   input += synapse0x3459a40();
   input += synapse0x3459a80();
   input += synapse0x3459ac0();
   input += synapse0x3459b00();
   input += synapse0x3459b40();
   input += synapse0x34595d0();
   input += synapse0x3459610();
   input += synapse0x3459c90();
   input += synapse0x3459cd0();
   input += synapse0x3459d10();
   input += synapse0x3459d50();
   input += synapse0x3459d90();
   input += synapse0x3459dd0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x3459440() {
   double input = input0x3459440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x3459e10() {
   double input = 0.340856;
   input += synapse0x345a150();
   input += synapse0x345a190();
   input += synapse0x345a1d0();
   input += synapse0x345a210();
   input += synapse0x345a250();
   input += synapse0x345a290();
   input += synapse0x345a2d0();
   input += synapse0x345a310();
   input += synapse0x345a350();
   input += synapse0x345a390();
   input += synapse0x345a3d0();
   input += synapse0x345a410();
   input += synapse0x345a450();
   input += synapse0x345a490();
   input += synapse0x345a4d0();
   input += synapse0x345a510();
   input += synapse0x3459fa0();
   input += synapse0x3459fe0();
   input += synapse0x345a660();
   input += synapse0x345a6a0();
   input += synapse0x345a6e0();
   input += synapse0x345a720();
   input += synapse0x345a760();
   input += synapse0x345a7a0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x3459e10() {
   double input = input0x3459e10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x345a7e0() {
   double input = -0.229176;
   input += synapse0x345ab20();
   input += synapse0x345ab60();
   input += synapse0x345aba0();
   input += synapse0x345abe0();
   input += synapse0x345ac20();
   input += synapse0x345ac60();
   input += synapse0x345aca0();
   input += synapse0x345ace0();
   input += synapse0x345ad20();
   input += synapse0x345ad60();
   input += synapse0x345ada0();
   input += synapse0x345ade0();
   input += synapse0x345ae20();
   input += synapse0x345ae60();
   input += synapse0x345aea0();
   input += synapse0x345aee0();
   input += synapse0x345a970();
   input += synapse0x345a9b0();
   input += synapse0x345b030();
   input += synapse0x345b070();
   input += synapse0x345b0b0();
   input += synapse0x345b0f0();
   input += synapse0x345b130();
   input += synapse0x345b170();
   return input;
}

double NNfunction_sb_uRsR::neuron0x345a7e0() {
   double input = input0x345a7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x345b1b0() {
   double input = 1.40585;
   input += synapse0x345b4f0();
   input += synapse0x345b530();
   input += synapse0x345b570();
   input += synapse0x345b5b0();
   input += synapse0x345b5f0();
   input += synapse0x345b630();
   input += synapse0x345b670();
   input += synapse0x345b6b0();
   input += synapse0x345b6f0();
   input += synapse0x345b730();
   input += synapse0x345b770();
   input += synapse0x345b7b0();
   input += synapse0x345b7f0();
   input += synapse0x345b830();
   input += synapse0x345b870();
   input += synapse0x345b8b0();
   input += synapse0x345b340();
   input += synapse0x345b380();
   input += synapse0x345ba00();
   input += synapse0x345ba40();
   input += synapse0x345ba80();
   input += synapse0x345bac0();
   input += synapse0x345bb00();
   input += synapse0x345bb40();
   return input;
}

double NNfunction_sb_uRsR::neuron0x345b1b0() {
   double input = input0x345b1b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x345bb80() {
   double input = 1.7485;
   input += synapse0x345bec0();
   input += synapse0x345bf00();
   input += synapse0x345bf40();
   input += synapse0x345bf80();
   input += synapse0x345bfc0();
   input += synapse0x345c000();
   input += synapse0x345c040();
   input += synapse0x345c080();
   input += synapse0x345c0c0();
   input += synapse0x345c100();
   input += synapse0x345c140();
   input += synapse0x345c180();
   input += synapse0x345c1c0();
   input += synapse0x345c200();
   input += synapse0x345c240();
   input += synapse0x345c280();
   input += synapse0x345bd10();
   input += synapse0x345bd50();
   input += synapse0x345c3d0();
   input += synapse0x345c410();
   input += synapse0x345c450();
   input += synapse0x345c490();
   input += synapse0x345c4d0();
   input += synapse0x345c510();
   return input;
}

double NNfunction_sb_uRsR::neuron0x345bb80() {
   double input = input0x345bb80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x345c550() {
   double input = -0.463458;
   input += synapse0x3444fc0();
   input += synapse0x3445000();
   input += synapse0x3445040();
   input += synapse0x3445080();
   input += synapse0x34450c0();
   input += synapse0x3445100();
   input += synapse0x3445140();
   input += synapse0x3445180();
   input += synapse0x345cca0();
   input += synapse0x345cce0();
   input += synapse0x345cd20();
   input += synapse0x345cd60();
   input += synapse0x345cda0();
   input += synapse0x345cde0();
   input += synapse0x345ce20();
   input += synapse0x345ce60();
   input += synapse0x345c6e0();
   input += synapse0x345c720();
   input += synapse0x345cfb0();
   input += synapse0x345cff0();
   input += synapse0x345d030();
   input += synapse0x345d070();
   input += synapse0x345d0b0();
   input += synapse0x345d0f0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x345c550() {
   double input = input0x345c550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x345d130() {
   double input = 0.0923886;
   input += synapse0x345d470();
   input += synapse0x345d4b0();
   input += synapse0x345d4f0();
   input += synapse0x345d530();
   input += synapse0x345d570();
   input += synapse0x345d5b0();
   input += synapse0x345d5f0();
   input += synapse0x345d630();
   input += synapse0x345d670();
   input += synapse0x345d6b0();
   input += synapse0x345d6f0();
   input += synapse0x345d730();
   input += synapse0x345d770();
   input += synapse0x345d7b0();
   input += synapse0x345d7f0();
   input += synapse0x345d830();
   input += synapse0x345d2c0();
   input += synapse0x345d300();
   input += synapse0x345d980();
   input += synapse0x345d9c0();
   input += synapse0x345da00();
   input += synapse0x345da40();
   input += synapse0x345da80();
   input += synapse0x345dac0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x345d130() {
   double input = input0x345d130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x345db00() {
   double input = 2.0923;
   input += synapse0x345de40();
   input += synapse0x345de80();
   input += synapse0x345dec0();
   input += synapse0x345df00();
   input += synapse0x345df40();
   input += synapse0x345df80();
   input += synapse0x345dfc0();
   input += synapse0x345e000();
   input += synapse0x345e040();
   input += synapse0x345e080();
   input += synapse0x345e0c0();
   input += synapse0x345e100();
   input += synapse0x345e140();
   input += synapse0x345e180();
   input += synapse0x345e1c0();
   input += synapse0x345e200();
   input += synapse0x345dc90();
   input += synapse0x345dcd0();
   input += synapse0x344e800();
   input += synapse0x344e840();
   input += synapse0x344e880();
   input += synapse0x344e8c0();
   input += synapse0x344e900();
   input += synapse0x344e940();
   return input;
}

double NNfunction_sb_uRsR::neuron0x345db00() {
   double input = input0x345db00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x344e980() {
   double input = 0.250367;
   input += synapse0x344ecc0();
   input += synapse0x344ed00();
   input += synapse0x344ed40();
   input += synapse0x344ed80();
   input += synapse0x344edc0();
   input += synapse0x344ee00();
   input += synapse0x344ee40();
   input += synapse0x344ee80();
   input += synapse0x344eec0();
   input += synapse0x344ef00();
   input += synapse0x344ef40();
   input += synapse0x344ef80();
   input += synapse0x344efc0();
   input += synapse0x344f000();
   input += synapse0x344f040();
   input += synapse0x344f080();
   input += synapse0x344eb10();
   input += synapse0x344eb50();
   input += synapse0x344f1d0();
   input += synapse0x344f210();
   input += synapse0x344f250();
   input += synapse0x344f290();
   input += synapse0x344f2d0();
   input += synapse0x344f310();
   return input;
}

double NNfunction_sb_uRsR::neuron0x344e980() {
   double input = input0x344e980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x344f350() {
   double input = 0.221028;
   input += synapse0x344f690();
   input += synapse0x344f6d0();
   input += synapse0x344f710();
   input += synapse0x344f750();
   input += synapse0x344f790();
   input += synapse0x344f7d0();
   input += synapse0x344f810();
   input += synapse0x344f850();
   input += synapse0x344f890();
   input += synapse0x344f8d0();
   input += synapse0x344f910();
   input += synapse0x344f950();
   input += synapse0x344f990();
   input += synapse0x344f9d0();
   input += synapse0x344fa10();
   input += synapse0x344fa50();
   input += synapse0x344f4e0();
   input += synapse0x344f520();
   input += synapse0x344fba0();
   input += synapse0x344fbe0();
   input += synapse0x344fc20();
   input += synapse0x344fc60();
   input += synapse0x344fca0();
   input += synapse0x344fce0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x344f350() {
   double input = input0x344f350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x344fd20() {
   double input = 1.42321;
   input += synapse0x3450060();
   input += synapse0x34500a0();
   input += synapse0x34500e0();
   input += synapse0x3450120();
   input += synapse0x3450160();
   input += synapse0x34501a0();
   input += synapse0x34501e0();
   input += synapse0x3450220();
   input += synapse0x3450260();
   input += synapse0x34502a0();
   input += synapse0x34502e0();
   input += synapse0x3450320();
   input += synapse0x3450360();
   input += synapse0x34503a0();
   input += synapse0x34503e0();
   input += synapse0x3450420();
   input += synapse0x344feb0();
   input += synapse0x344fef0();
   input += synapse0x3450570();
   input += synapse0x34505b0();
   input += synapse0x34505f0();
   input += synapse0x3450630();
   input += synapse0x3450670();
   input += synapse0x34506b0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x344fd20() {
   double input = input0x344fd20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x3462360() {
   double input = 1.56156;
   input += synapse0x3462580();
   input += synapse0x34625c0();
   input += synapse0x3462600();
   input += synapse0x3462640();
   input += synapse0x3462680();
   input += synapse0x34626c0();
   input += synapse0x3462700();
   input += synapse0x3462740();
   input += synapse0x3462780();
   input += synapse0x34627c0();
   input += synapse0x3462800();
   input += synapse0x3462840();
   input += synapse0x3462880();
   input += synapse0x34628c0();
   input += synapse0x3462900();
   input += synapse0x3462940();
   input += synapse0x34506f0();
   input += synapse0x3450730();
   input += synapse0x3462a90();
   input += synapse0x3462ad0();
   input += synapse0x3462b10();
   input += synapse0x3462b50();
   input += synapse0x3462b90();
   input += synapse0x3462bd0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x3462360() {
   double input = input0x3462360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x3462c10() {
   double input = -0.417233;
   input += synapse0x3462f50();
   input += synapse0x3462f90();
   input += synapse0x3462fd0();
   input += synapse0x3463010();
   input += synapse0x3463050();
   input += synapse0x3463090();
   input += synapse0x34630d0();
   input += synapse0x3463110();
   input += synapse0x3463150();
   input += synapse0x3463190();
   input += synapse0x34631d0();
   input += synapse0x3463210();
   input += synapse0x3463250();
   input += synapse0x3463290();
   input += synapse0x34632d0();
   input += synapse0x3463310();
   input += synapse0x3462da0();
   input += synapse0x3462de0();
   input += synapse0x3463460();
   input += synapse0x34634a0();
   input += synapse0x34634e0();
   input += synapse0x3463520();
   input += synapse0x3463560();
   input += synapse0x34635a0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x3462c10() {
   double input = input0x3462c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x34635e0() {
   double input = 0.180659;
   input += synapse0x3463920();
   input += synapse0x3463960();
   input += synapse0x34639a0();
   input += synapse0x34639e0();
   input += synapse0x3463a20();
   input += synapse0x3463a60();
   input += synapse0x3463aa0();
   input += synapse0x3463ae0();
   input += synapse0x3463b20();
   input += synapse0x3463b60();
   input += synapse0x3463ba0();
   input += synapse0x3463be0();
   input += synapse0x3463c20();
   input += synapse0x3463c60();
   input += synapse0x3463ca0();
   input += synapse0x3463ce0();
   input += synapse0x3463770();
   input += synapse0x34637b0();
   input += synapse0x3463e30();
   input += synapse0x3463e70();
   input += synapse0x3463eb0();
   input += synapse0x3463ef0();
   input += synapse0x3463f30();
   input += synapse0x3463f70();
   return input;
}

double NNfunction_sb_uRsR::neuron0x34635e0() {
   double input = input0x34635e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x3463fb0() {
   double input = 0.0131493;
   input += synapse0x34642f0();
   input += synapse0x3464330();
   input += synapse0x3464370();
   input += synapse0x34643b0();
   input += synapse0x34643f0();
   input += synapse0x3464430();
   input += synapse0x3464470();
   input += synapse0x34644b0();
   input += synapse0x34644f0();
   input += synapse0x3464530();
   input += synapse0x3464570();
   input += synapse0x34645b0();
   input += synapse0x34645f0();
   input += synapse0x3464630();
   input += synapse0x3464670();
   input += synapse0x34646b0();
   input += synapse0x3464140();
   input += synapse0x3464180();
   input += synapse0x3464800();
   input += synapse0x3464840();
   input += synapse0x3464880();
   input += synapse0x34648c0();
   input += synapse0x3464900();
   input += synapse0x3464940();
   return input;
}

double NNfunction_sb_uRsR::neuron0x3463fb0() {
   double input = input0x3463fb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x346b1b0() {
   double input = -0.684561;
   input += synapse0x32047b0();
   input += synapse0x32047f0();
   input += synapse0x34412f0();
   input += synapse0x3441330();
   input += synapse0x3442dc0();
   input += synapse0x3442e00();
   input += synapse0x3443b90();
   input += synapse0x3443bd0();
   input += synapse0x3444560();
   input += synapse0x34445a0();
   input += synapse0x3444f30();
   input += synapse0x3444f70();
   input += synapse0x3445a10();
   input += synapse0x3445a50();
   input += synapse0x34463e0();
   input += synapse0x3446420();
   input += synapse0x34434c0();
   input += synapse0x3443500();
   input += synapse0x3447f90();
   input += synapse0x3447fd0();
   input += synapse0x3448960();
   input += synapse0x34489a0();
   input += synapse0x3449330();
   input += synapse0x3449370();
   input += synapse0x3449d00();
   input += synapse0x3449d40();
   input += synapse0x343cd90();
   input += synapse0x343cdd0();
   input += synapse0x344bdf0();
   input += synapse0x344be30();
   input += synapse0x344c7c0();
   input += synapse0x344c800();
   input += synapse0x344d190();
   input += synapse0x344d1d0();
   input += synapse0x344db60();
   input += synapse0x344dba0();
   input += synapse0x344e530();
   input += synapse0x344e570();
   input += synapse0x3447080();
   input += synapse0x34470c0();
   input += synapse0x3450930();
   input += synapse0x3450970();
   input += synapse0x34512c0();
   input += synapse0x3451300();
   input += synapse0x3451c90();
   input += synapse0x3451cd0();
   input += synapse0x3452660();
   input += synapse0x34526a0();
   input += synapse0x3453030();
   input += synapse0x3453070();
   return input;
}

double NNfunction_sb_uRsR::neuron0x346b1b0() {
   double input = input0x346b1b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x346b550() {
   double input = -0.437363;
   input += synapse0x3455770();
   input += synapse0x34557b0();
   input += synapse0x344ad30();
   input += synapse0x344ad70();
   input += synapse0x3458350();
   input += synapse0x3458390();
   input += synapse0x3458d20();
   input += synapse0x3458d60();
   input += synapse0x34596f0();
   input += synapse0x3459730();
   input += synapse0x345a0c0();
   input += synapse0x345a100();
   input += synapse0x345aa90();
   input += synapse0x345aad0();
   input += synapse0x345b460();
   input += synapse0x345b4a0();
   input += synapse0x345be30();
   input += synapse0x345be70();
   input += synapse0x345c800();
   input += synapse0x345c840();
   input += synapse0x345d3e0();
   input += synapse0x345d420();
   input += synapse0x345ddb0();
   input += synapse0x345ddf0();
   input += synapse0x344ec30();
   input += synapse0x344ec70();
   input += synapse0x344f600();
   input += synapse0x344f640();
   input += synapse0x344ffd0();
   input += synapse0x3450010();
   input += synapse0x34624f0();
   input += synapse0x3462530();
   input += synapse0x3462ec0();
   input += synapse0x3462f00();
   input += synapse0x3463890();
   input += synapse0x34638d0();
   input += synapse0x3464260();
   input += synapse0x34642a0();
   input += synapse0x343f1f0();
   input += synapse0x343f230();
   input += synapse0x3453a00();
   input += synapse0x3453a40();
   input += synapse0x3464980();
   input += synapse0x34649c0();
   input += synapse0x3464a00();
   input += synapse0x3464a40();
   input += synapse0x346b8f0();
   input += synapse0x346b930();
   input += synapse0x346b970();
   input += synapse0x346b9b0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x346b550() {
   double input = input0x346b550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x346b9f0() {
   double input = 0.448246;
   input += synapse0x346bd30();
   input += synapse0x346bd70();
   input += synapse0x346bdb0();
   input += synapse0x346bdf0();
   input += synapse0x346be30();
   input += synapse0x346be70();
   input += synapse0x346beb0();
   input += synapse0x346bef0();
   input += synapse0x346bf30();
   input += synapse0x346bf70();
   input += synapse0x346bfb0();
   input += synapse0x346bff0();
   input += synapse0x346c030();
   input += synapse0x346c070();
   input += synapse0x346c0b0();
   input += synapse0x346c0f0();
   input += synapse0x346bb80();
   input += synapse0x346bbc0();
   input += synapse0x346c240();
   input += synapse0x346c280();
   input += synapse0x346c2c0();
   input += synapse0x346c300();
   input += synapse0x346c340();
   input += synapse0x346c380();
   input += synapse0x346c3c0();
   input += synapse0x346c400();
   input += synapse0x346c440();
   input += synapse0x346c480();
   input += synapse0x346c4c0();
   input += synapse0x346c500();
   input += synapse0x346c540();
   input += synapse0x346c580();
   input += synapse0x346c130();
   input += synapse0x346c170();
   input += synapse0x346c1b0();
   input += synapse0x346c1f0();
   input += synapse0x346c7d0();
   input += synapse0x346c810();
   input += synapse0x346c850();
   input += synapse0x346c890();
   input += synapse0x346c8d0();
   input += synapse0x346c910();
   input += synapse0x346c950();
   input += synapse0x346c990();
   input += synapse0x346c9d0();
   input += synapse0x346ca10();
   input += synapse0x346ca50();
   input += synapse0x346ca90();
   input += synapse0x346cad0();
   input += synapse0x346cb10();
   return input;
}

double NNfunction_sb_uRsR::neuron0x346b9f0() {
   double input = input0x346b9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x346cb50() {
   double input = 1.39077;
   input += synapse0x346ce90();
   input += synapse0x346ced0();
   input += synapse0x346cf10();
   input += synapse0x346cf50();
   input += synapse0x346cf90();
   input += synapse0x346cfd0();
   input += synapse0x346d010();
   input += synapse0x346d050();
   input += synapse0x346d090();
   input += synapse0x346d0d0();
   input += synapse0x346d110();
   input += synapse0x346d150();
   input += synapse0x346d190();
   input += synapse0x346d1d0();
   input += synapse0x346d210();
   input += synapse0x346d250();
   input += synapse0x346cce0();
   input += synapse0x346cd20();
   input += synapse0x346d3a0();
   input += synapse0x346d3e0();
   input += synapse0x346d420();
   input += synapse0x346d460();
   input += synapse0x346d4a0();
   input += synapse0x346d4e0();
   input += synapse0x346d520();
   input += synapse0x346d560();
   input += synapse0x346d5a0();
   input += synapse0x346d5e0();
   input += synapse0x346d620();
   input += synapse0x346d660();
   input += synapse0x346d6a0();
   input += synapse0x346d6e0();
   input += synapse0x346d290();
   input += synapse0x346d2d0();
   input += synapse0x346d310();
   input += synapse0x346d350();
   input += synapse0x346d930();
   input += synapse0x346d970();
   input += synapse0x346d9b0();
   input += synapse0x346d9f0();
   input += synapse0x346da30();
   input += synapse0x346da70();
   input += synapse0x346dab0();
   input += synapse0x346daf0();
   input += synapse0x346db30();
   input += synapse0x346db70();
   input += synapse0x346dbb0();
   input += synapse0x346dbf0();
   input += synapse0x346dc30();
   input += synapse0x346dc70();
   return input;
}

double NNfunction_sb_uRsR::neuron0x346cb50() {
   double input = input0x346cb50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x346dcb0() {
   double input = -0.381457;
   input += synapse0x346dff0();
   input += synapse0x346e030();
   input += synapse0x346e070();
   input += synapse0x346e0b0();
   input += synapse0x346e0f0();
   input += synapse0x346e130();
   input += synapse0x346e170();
   input += synapse0x346e1b0();
   input += synapse0x346e1f0();
   input += synapse0x346e230();
   input += synapse0x346e270();
   input += synapse0x346e2b0();
   input += synapse0x346e2f0();
   input += synapse0x346e330();
   input += synapse0x346e370();
   input += synapse0x346e3b0();
   input += synapse0x346de40();
   input += synapse0x346de80();
   input += synapse0x346e500();
   input += synapse0x346e540();
   input += synapse0x346e580();
   input += synapse0x346e5c0();
   input += synapse0x346e600();
   input += synapse0x346e640();
   input += synapse0x346e680();
   input += synapse0x346e6c0();
   input += synapse0x346e700();
   input += synapse0x346e740();
   input += synapse0x346e780();
   input += synapse0x346e7c0();
   input += synapse0x346e800();
   input += synapse0x346e840();
   input += synapse0x346e3f0();
   input += synapse0x346e430();
   input += synapse0x346e470();
   input += synapse0x346e4b0();
   input += synapse0x346ea90();
   input += synapse0x346ead0();
   input += synapse0x346eb10();
   input += synapse0x346eb50();
   input += synapse0x346eb90();
   input += synapse0x346ebd0();
   input += synapse0x346ec10();
   input += synapse0x346ec50();
   input += synapse0x346ec90();
   input += synapse0x346ecd0();
   input += synapse0x346ed10();
   input += synapse0x346ed50();
   input += synapse0x346ed90();
   input += synapse0x346edd0();
   return input;
}

double NNfunction_sb_uRsR::neuron0x346dcb0() {
   double input = input0x346dcb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uRsR::input0x346ee10() {
   double input = 9.31429;
   input += synapse0x346f030();
   input += synapse0x346f070();
   input += synapse0x346f0b0();
   input += synapse0x346f0f0();
   input += synapse0x346f130();
   return input;
}

double NNfunction_sb_uRsR::neuron0x346ee10() {
   double input = input0x346ee10();
   return (input * 1)+0;
}

double NNfunction_sb_uRsR::synapse0x343f280() {
   return (neuron0x3439e80()*-0.144999);
}

double NNfunction_sb_uRsR::synapse0x343f2c0() {
   return (neuron0x343a130()*-0.496857);
}

double NNfunction_sb_uRsR::synapse0x343f300() {
   return (neuron0x343a470()*0.224427);
}

double NNfunction_sb_uRsR::synapse0x343f340() {
   return (neuron0x343a7b0()*-0.106998);
}

double NNfunction_sb_uRsR::synapse0x343f380() {
   return (neuron0x343aaf0()*-0.0106042);
}

double NNfunction_sb_uRsR::synapse0x343f3c0() {
   return (neuron0x343ae30()*-0.243559);
}

double NNfunction_sb_uRsR::synapse0x343f400() {
   return (neuron0x343b170()*0.240354);
}

double NNfunction_sb_uRsR::synapse0x343f440() {
   return (neuron0x343b4b0()*0.788455);
}

double NNfunction_sb_uRsR::synapse0x343f480() {
   return (neuron0x343b7f0()*-0.249264);
}

double NNfunction_sb_uRsR::synapse0x343f4c0() {
   return (neuron0x343bb30()*0.225879);
}

double NNfunction_sb_uRsR::synapse0x343f500() {
   return (neuron0x343be70()*0.947533);
}

double NNfunction_sb_uRsR::synapse0x343f540() {
   return (neuron0x343c1b0()*0.515069);
}

double NNfunction_sb_uRsR::synapse0x343f580() {
   return (neuron0x343c4f0()*1.0095);
}

double NNfunction_sb_uRsR::synapse0x343f5c0() {
   return (neuron0x343c830()*-0.618834);
}

double NNfunction_sb_uRsR::synapse0x343f600() {
   return (neuron0x343cb70()*0.586157);
}

double NNfunction_sb_uRsR::synapse0x343f640() {
   return (neuron0x343ceb0()*-0.0840776);
}

double NNfunction_sb_uRsR::synapse0x343f0d0() {
   return (neuron0x343d1f0()*0.908989);
}

double NNfunction_sb_uRsR::synapse0x343f110() {
   return (neuron0x343d750()*-0.2246);
}

double NNfunction_sb_uRsR::synapse0x31f6050() {
   return (neuron0x343da90()*0.649965);
}

double NNfunction_sb_uRsR::synapse0x31f6090() {
   return (neuron0x343ddd0()*-0.884417);
}

double NNfunction_sb_uRsR::synapse0x343f680() {
   return (neuron0x343e110()*0.437763);
}

double NNfunction_sb_uRsR::synapse0x343f6c0() {
   return (neuron0x343e450()*0.235501);
}

double NNfunction_sb_uRsR::synapse0x343f700() {
   return (neuron0x343e790()*-0.631339);
}

double NNfunction_sb_uRsR::synapse0x343f740() {
   return (neuron0x343ead0()*0.619305);
}

double NNfunction_sb_uRsR::synapse0x343fac0() {
   return (neuron0x3439e80()*0.160856);
}

double NNfunction_sb_uRsR::synapse0x343fb00() {
   return (neuron0x343a130()*-0.15789);
}

double NNfunction_sb_uRsR::synapse0x343fb40() {
   return (neuron0x343a470()*0.0790489);
}

double NNfunction_sb_uRsR::synapse0x343fb80() {
   return (neuron0x343a7b0()*-0.0134072);
}

double NNfunction_sb_uRsR::synapse0x343fbc0() {
   return (neuron0x343aaf0()*0.106724);
}

double NNfunction_sb_uRsR::synapse0x343fc00() {
   return (neuron0x343ae30()*0.0273956);
}

double NNfunction_sb_uRsR::synapse0x343fc40() {
   return (neuron0x343b170()*0.26664);
}

double NNfunction_sb_uRsR::synapse0x343fc80() {
   return (neuron0x343b4b0()*0.491301);
}

double NNfunction_sb_uRsR::synapse0x343fcc0() {
   return (neuron0x343b7f0()*0.0697645);
}

double NNfunction_sb_uRsR::synapse0x31f5ea0() {
   return (neuron0x343bb30()*-0.158411);
}

double NNfunction_sb_uRsR::synapse0x31f5ee0() {
   return (neuron0x343be70()*0.341143);
}

double NNfunction_sb_uRsR::synapse0x31f5f20() {
   return (neuron0x343c1b0()*-0.0509153);
}

double NNfunction_sb_uRsR::synapse0x31f5f60() {
   return (neuron0x343c4f0()*0.0815514);
}

double NNfunction_sb_uRsR::synapse0x343ff10() {
   return (neuron0x343c830()*-0.112901);
}

double NNfunction_sb_uRsR::synapse0x343ff50() {
   return (neuron0x343cb70()*0.641142);
}

double NNfunction_sb_uRsR::synapse0x343ff90() {
   return (neuron0x343ceb0()*0.301148);
}

double NNfunction_sb_uRsR::synapse0x343f910() {
   return (neuron0x343d1f0()*-0.103994);
}

double NNfunction_sb_uRsR::synapse0x343f950() {
   return (neuron0x343d750()*-0.370034);
}

double NNfunction_sb_uRsR::synapse0x34400e0() {
   return (neuron0x343da90()*0.370615);
}

double NNfunction_sb_uRsR::synapse0x3440120() {
   return (neuron0x343ddd0()*-0.034706);
}

double NNfunction_sb_uRsR::synapse0x3440160() {
   return (neuron0x343e110()*-0.0979158);
}

double NNfunction_sb_uRsR::synapse0x34401a0() {
   return (neuron0x343e450()*1.42031e-05);
}

double NNfunction_sb_uRsR::synapse0x34401e0() {
   return (neuron0x343e790()*0.184508);
}

double NNfunction_sb_uRsR::synapse0x3440220() {
   return (neuron0x343ead0()*-0.253355);
}

double NNfunction_sb_uRsR::synapse0x34405a0() {
   return (neuron0x3439e80()*0.182798);
}

double NNfunction_sb_uRsR::synapse0x34405e0() {
   return (neuron0x343a130()*-0.296097);
}

double NNfunction_sb_uRsR::synapse0x3440620() {
   return (neuron0x343a470()*0.331488);
}

double NNfunction_sb_uRsR::synapse0x3440660() {
   return (neuron0x343a7b0()*0.00308807);
}

double NNfunction_sb_uRsR::synapse0x34406a0() {
   return (neuron0x343aaf0()*0.623621);
}

double NNfunction_sb_uRsR::synapse0x34406e0() {
   return (neuron0x343ae30()*-1.38152);
}

double NNfunction_sb_uRsR::synapse0x3440720() {
   return (neuron0x343b170()*0.162218);
}

double NNfunction_sb_uRsR::synapse0x3440760() {
   return (neuron0x343b4b0()*0.217925);
}

double NNfunction_sb_uRsR::synapse0x34407a0() {
   return (neuron0x343b7f0()*-0.124714);
}

double NNfunction_sb_uRsR::synapse0x34407e0() {
   return (neuron0x343bb30()*0.128888);
}

double NNfunction_sb_uRsR::synapse0x3440820() {
   return (neuron0x343be70()*0.267132);
}

double NNfunction_sb_uRsR::synapse0x3440860() {
   return (neuron0x343c1b0()*-0.323366);
}

double NNfunction_sb_uRsR::synapse0x34408a0() {
   return (neuron0x343c4f0()*0.261522);
}

double NNfunction_sb_uRsR::synapse0x34408e0() {
   return (neuron0x343c830()*-0.225689);
}

double NNfunction_sb_uRsR::synapse0x3440920() {
   return (neuron0x343cb70()*-0.288973);
}

double NNfunction_sb_uRsR::synapse0x3440960() {
   return (neuron0x343ceb0()*-0.0299998);
}

double NNfunction_sb_uRsR::synapse0x34403f0() {
   return (neuron0x343d1f0()*0.144458);
}

double NNfunction_sb_uRsR::synapse0x3440430() {
   return (neuron0x343d750()*0.130588);
}

double NNfunction_sb_uRsR::synapse0x31f66f0() {
   return (neuron0x343da90()*-0.0309148);
}

double NNfunction_sb_uRsR::synapse0x3203fc0() {
   return (neuron0x343ddd0()*-0.411617);
}

double NNfunction_sb_uRsR::synapse0x3204000() {
   return (neuron0x343e110()*0.101994);
}

double NNfunction_sb_uRsR::synapse0x3442890() {
   return (neuron0x343e450()*0.134947);
}

double NNfunction_sb_uRsR::synapse0x34428d0() {
   return (neuron0x343e790()*0.0936456);
}

double NNfunction_sb_uRsR::synapse0x3439bc0() {
   return (neuron0x343ead0()*0.136195);
}

double NNfunction_sb_uRsR::synapse0x3439c90() {
   return (neuron0x3439e80()*-0.0172221);
}

double NNfunction_sb_uRsR::synapse0x3204840() {
   return (neuron0x343a130()*0.407206);
}

double NNfunction_sb_uRsR::synapse0x343fe90() {
   return (neuron0x343a470()*-0.564176);
}

double NNfunction_sb_uRsR::synapse0x343fed0() {
   return (neuron0x343a7b0()*0.419611);
}

double NNfunction_sb_uRsR::synapse0x3440ab0() {
   return (neuron0x343aaf0()*-0.129113);
}

double NNfunction_sb_uRsR::synapse0x3440af0() {
   return (neuron0x343ae30()*0.0526085);
}

double NNfunction_sb_uRsR::synapse0x3440b30() {
   return (neuron0x343b170()*0.62704);
}

double NNfunction_sb_uRsR::synapse0x3440b70() {
   return (neuron0x343b4b0()*0.352108);
}

double NNfunction_sb_uRsR::synapse0x3440bb0() {
   return (neuron0x343b7f0()*0.17646);
}

double NNfunction_sb_uRsR::synapse0x3440bf0() {
   return (neuron0x343bb30()*0.501977);
}

double NNfunction_sb_uRsR::synapse0x3440c30() {
   return (neuron0x343be70()*-0.461888);
}

double NNfunction_sb_uRsR::synapse0x3440c70() {
   return (neuron0x343c1b0()*-0.804407);
}

double NNfunction_sb_uRsR::synapse0x3440cb0() {
   return (neuron0x343c4f0()*0.108927);
}

double NNfunction_sb_uRsR::synapse0x3440cf0() {
   return (neuron0x343c830()*-0.469119);
}

double NNfunction_sb_uRsR::synapse0x3440d30() {
   return (neuron0x343cb70()*-0.38946);
}

double NNfunction_sb_uRsR::synapse0x3440d70() {
   return (neuron0x343ceb0()*-0.0444291);
}

double NNfunction_sb_uRsR::synapse0x3439c00() {
   return (neuron0x343d1f0()*-0.130399);
}

double NNfunction_sb_uRsR::synapse0x3439c40() {
   return (neuron0x343d750()*-0.184098);
}

double NNfunction_sb_uRsR::synapse0x3440ec0() {
   return (neuron0x343da90()*-0.657248);
}

double NNfunction_sb_uRsR::synapse0x3440f00() {
   return (neuron0x343ddd0()*0.32357);
}

double NNfunction_sb_uRsR::synapse0x3440f40() {
   return (neuron0x343e110()*0.229818);
}

double NNfunction_sb_uRsR::synapse0x3440f80() {
   return (neuron0x343e450()*0.397451);
}

double NNfunction_sb_uRsR::synapse0x3440fc0() {
   return (neuron0x343e790()*-0.315495);
}

double NNfunction_sb_uRsR::synapse0x3441000() {
   return (neuron0x343ead0()*-0.405741);
}

double NNfunction_sb_uRsR::synapse0x3441380() {
   return (neuron0x3439e80()*0.0087926);
}

double NNfunction_sb_uRsR::synapse0x34413c0() {
   return (neuron0x343a130()*0.0208408);
}

double NNfunction_sb_uRsR::synapse0x3441400() {
   return (neuron0x343a470()*0.0132907);
}

double NNfunction_sb_uRsR::synapse0x3441440() {
   return (neuron0x343a7b0()*-1.72347);
}

double NNfunction_sb_uRsR::synapse0x3441480() {
   return (neuron0x343aaf0()*0.0122587);
}

double NNfunction_sb_uRsR::synapse0x34414c0() {
   return (neuron0x343ae30()*0.0182013);
}

double NNfunction_sb_uRsR::synapse0x3441500() {
   return (neuron0x343b170()*0.0213222);
}

double NNfunction_sb_uRsR::synapse0x3441540() {
   return (neuron0x343b4b0()*-0.0115626);
}

double NNfunction_sb_uRsR::synapse0x3441580() {
   return (neuron0x343b7f0()*-0.000252454);
}

double NNfunction_sb_uRsR::synapse0x34415c0() {
   return (neuron0x343bb30()*-0.00362069);
}

double NNfunction_sb_uRsR::synapse0x3441600() {
   return (neuron0x343be70()*-0.0161293);
}

double NNfunction_sb_uRsR::synapse0x3441640() {
   return (neuron0x343c1b0()*-0.0160045);
}

double NNfunction_sb_uRsR::synapse0x3441680() {
   return (neuron0x343c4f0()*-0.000615455);
}

double NNfunction_sb_uRsR::synapse0x34416c0() {
   return (neuron0x343c830()*-0.0151361);
}

double NNfunction_sb_uRsR::synapse0x3441700() {
   return (neuron0x343cb70()*0.0584534);
}

double NNfunction_sb_uRsR::synapse0x3441740() {
   return (neuron0x343ceb0()*0.0173294);
}

double NNfunction_sb_uRsR::synapse0x3441890() {
   return (neuron0x343d1f0()*-0.00452274);
}

double NNfunction_sb_uRsR::synapse0x34411d0() {
   return (neuron0x343d750()*-0.00521819);
}

double NNfunction_sb_uRsR::synapse0x3441210() {
   return (neuron0x343da90()*0.000190794);
}

double NNfunction_sb_uRsR::synapse0x34429d0() {
   return (neuron0x343ddd0()*-0.0147348);
}

double NNfunction_sb_uRsR::synapse0x3442a10() {
   return (neuron0x343e110()*0.0158373);
}

double NNfunction_sb_uRsR::synapse0x3442a50() {
   return (neuron0x343e450()*-0.00708708);
}

double NNfunction_sb_uRsR::synapse0x3442a90() {
   return (neuron0x343e790()*-0.0143414);
}

double NNfunction_sb_uRsR::synapse0x3442ad0() {
   return (neuron0x343ead0()*-0.011481);
}

double NNfunction_sb_uRsR::synapse0x3442e50() {
   return (neuron0x3439e80()*-0.0695836);
}

double NNfunction_sb_uRsR::synapse0x3442e90() {
   return (neuron0x343a130()*0.00786514);
}

double NNfunction_sb_uRsR::synapse0x3442ed0() {
   return (neuron0x343a470()*0.301947);
}

double NNfunction_sb_uRsR::synapse0x3442f10() {
   return (neuron0x343a7b0()*-0.203932);
}

double NNfunction_sb_uRsR::synapse0x3442f50() {
   return (neuron0x343aaf0()*-0.293147);
}

double NNfunction_sb_uRsR::synapse0x3442f90() {
   return (neuron0x343ae30()*0.149494);
}

double NNfunction_sb_uRsR::synapse0x3442fd0() {
   return (neuron0x343b170()*0.0385694);
}

double NNfunction_sb_uRsR::synapse0x3443010() {
   return (neuron0x343b4b0()*0.20478);
}

double NNfunction_sb_uRsR::synapse0x3443050() {
   return (neuron0x343b7f0()*0.437009);
}

double NNfunction_sb_uRsR::synapse0x3204310() {
   return (neuron0x343bb30()*0.148653);
}

double NNfunction_sb_uRsR::synapse0x3204350() {
   return (neuron0x343be70()*-0.0617725);
}

double NNfunction_sb_uRsR::synapse0x3204390() {
   return (neuron0x343c1b0()*-0.143857);
}

double NNfunction_sb_uRsR::synapse0x32043d0() {
   return (neuron0x343c4f0()*-0.583725);
}

double NNfunction_sb_uRsR::synapse0x3204410() {
   return (neuron0x343c830()*0.0162973);
}

double NNfunction_sb_uRsR::synapse0x3204450() {
   return (neuron0x343cb70()*-0.659366);
}

double NNfunction_sb_uRsR::synapse0x3204490() {
   return (neuron0x343ceb0()*0.0229219);
}

double NNfunction_sb_uRsR::synapse0x3442ca0() {
   return (neuron0x343d1f0()*-0.00714279);
}

double NNfunction_sb_uRsR::synapse0x3442ce0() {
   return (neuron0x343d750()*-0.464347);
}

double NNfunction_sb_uRsR::synapse0x32045e0() {
   return (neuron0x343da90()*-0.203402);
}

double NNfunction_sb_uRsR::synapse0x3204620() {
   return (neuron0x343ddd0()*-0.405005);
}

double NNfunction_sb_uRsR::synapse0x3204660() {
   return (neuron0x343e110()*-0.0928004);
}

double NNfunction_sb_uRsR::synapse0x32046a0() {
   return (neuron0x343e450()*-0.00310319);
}

double NNfunction_sb_uRsR::synapse0x32046e0() {
   return (neuron0x343e790()*-0.539674);
}

double NNfunction_sb_uRsR::synapse0x34438a0() {
   return (neuron0x343ead0()*0.125777);
}

double NNfunction_sb_uRsR::synapse0x3443c20() {
   return (neuron0x3439e80()*0.00529429);
}

double NNfunction_sb_uRsR::synapse0x3443c60() {
   return (neuron0x343a130()*-0.261574);
}

double NNfunction_sb_uRsR::synapse0x3443ca0() {
   return (neuron0x343a470()*-0.115295);
}

double NNfunction_sb_uRsR::synapse0x3443ce0() {
   return (neuron0x343a7b0()*0.110397);
}

double NNfunction_sb_uRsR::synapse0x3443d20() {
   return (neuron0x343aaf0()*0.0627152);
}

double NNfunction_sb_uRsR::synapse0x3443d60() {
   return (neuron0x343ae30()*-0.36619);
}

double NNfunction_sb_uRsR::synapse0x3443da0() {
   return (neuron0x343b170()*0.0391477);
}

double NNfunction_sb_uRsR::synapse0x3443de0() {
   return (neuron0x343b4b0()*-0.342154);
}

double NNfunction_sb_uRsR::synapse0x3443e20() {
   return (neuron0x343b7f0()*0.119435);
}

double NNfunction_sb_uRsR::synapse0x3443e60() {
   return (neuron0x343bb30()*0.112529);
}

double NNfunction_sb_uRsR::synapse0x3443ea0() {
   return (neuron0x343be70()*-0.0311543);
}

double NNfunction_sb_uRsR::synapse0x3443ee0() {
   return (neuron0x343c1b0()*0.0176595);
}

double NNfunction_sb_uRsR::synapse0x3443f20() {
   return (neuron0x343c4f0()*-0.125715);
}

double NNfunction_sb_uRsR::synapse0x3443f60() {
   return (neuron0x343c830()*-0.383121);
}

double NNfunction_sb_uRsR::synapse0x3443fa0() {
   return (neuron0x343cb70()*-0.432699);
}

double NNfunction_sb_uRsR::synapse0x3443fe0() {
   return (neuron0x343ceb0()*-0.420415);
}

double NNfunction_sb_uRsR::synapse0x3443a70() {
   return (neuron0x343d1f0()*-0.0122177);
}

double NNfunction_sb_uRsR::synapse0x3443ab0() {
   return (neuron0x343d750()*-0.375622);
}

double NNfunction_sb_uRsR::synapse0x3444130() {
   return (neuron0x343da90()*-1.67643);
}

double NNfunction_sb_uRsR::synapse0x3444170() {
   return (neuron0x343ddd0()*0.0634468);
}

double NNfunction_sb_uRsR::synapse0x34441b0() {
   return (neuron0x343e110()*0.376737);
}

double NNfunction_sb_uRsR::synapse0x34441f0() {
   return (neuron0x343e450()*-0.140796);
}

double NNfunction_sb_uRsR::synapse0x3444230() {
   return (neuron0x343e790()*0.426849);
}

double NNfunction_sb_uRsR::synapse0x3444270() {
   return (neuron0x343ead0()*0.193274);
}

double NNfunction_sb_uRsR::synapse0x34445f0() {
   return (neuron0x3439e80()*-0.651833);
}

double NNfunction_sb_uRsR::synapse0x3444630() {
   return (neuron0x343a130()*-0.40012);
}

double NNfunction_sb_uRsR::synapse0x3444670() {
   return (neuron0x343a470()*0.163121);
}

double NNfunction_sb_uRsR::synapse0x34446b0() {
   return (neuron0x343a7b0()*0.268632);
}

double NNfunction_sb_uRsR::synapse0x34446f0() {
   return (neuron0x343aaf0()*0.3475);
}

double NNfunction_sb_uRsR::synapse0x3444730() {
   return (neuron0x343ae30()*0.31117);
}

double NNfunction_sb_uRsR::synapse0x3444770() {
   return (neuron0x343b170()*-0.196646);
}

double NNfunction_sb_uRsR::synapse0x34447b0() {
   return (neuron0x343b4b0()*-0.130816);
}

double NNfunction_sb_uRsR::synapse0x34447f0() {
   return (neuron0x343b7f0()*-0.203566);
}

double NNfunction_sb_uRsR::synapse0x3444830() {
   return (neuron0x343bb30()*-0.256277);
}

double NNfunction_sb_uRsR::synapse0x3444870() {
   return (neuron0x343be70()*0.281436);
}

double NNfunction_sb_uRsR::synapse0x34448b0() {
   return (neuron0x343c1b0()*-0.170662);
}

double NNfunction_sb_uRsR::synapse0x34448f0() {
   return (neuron0x343c4f0()*0.602259);
}

double NNfunction_sb_uRsR::synapse0x3444930() {
   return (neuron0x343c830()*-0.182978);
}

double NNfunction_sb_uRsR::synapse0x3444970() {
   return (neuron0x343cb70()*1.34757);
}

double NNfunction_sb_uRsR::synapse0x34449b0() {
   return (neuron0x343ceb0()*-0.0919542);
}

double NNfunction_sb_uRsR::synapse0x3444440() {
   return (neuron0x343d1f0()*-0.138404);
}

double NNfunction_sb_uRsR::synapse0x3444480() {
   return (neuron0x343d750()*0.420472);
}

double NNfunction_sb_uRsR::synapse0x3444b00() {
   return (neuron0x343da90()*-0.0110032);
}

double NNfunction_sb_uRsR::synapse0x3444b40() {
   return (neuron0x343ddd0()*0.246042);
}

double NNfunction_sb_uRsR::synapse0x3444b80() {
   return (neuron0x343e110()*0.764348);
}

double NNfunction_sb_uRsR::synapse0x3444bc0() {
   return (neuron0x343e450()*0.024695);
}

double NNfunction_sb_uRsR::synapse0x3444c00() {
   return (neuron0x343e790()*-0.464409);
}

double NNfunction_sb_uRsR::synapse0x3444c40() {
   return (neuron0x343ead0()*-0.471023);
}

double NNfunction_sb_uRsR::synapse0x343d640() {
   return (neuron0x3439e80()*-0.572361);
}

double NNfunction_sb_uRsR::synapse0x343d680() {
   return (neuron0x343a130()*0.722871);
}

double NNfunction_sb_uRsR::synapse0x343d6c0() {
   return (neuron0x343a470()*-0.0957928);
}

double NNfunction_sb_uRsR::synapse0x343d700() {
   return (neuron0x343a7b0()*-0.521473);
}

double NNfunction_sb_uRsR::synapse0x34451d0() {
   return (neuron0x343aaf0()*-0.149593);
}

double NNfunction_sb_uRsR::synapse0x3445210() {
   return (neuron0x343ae30()*-0.822755);
}

double NNfunction_sb_uRsR::synapse0x3445250() {
   return (neuron0x343b170()*-0.050505);
}

double NNfunction_sb_uRsR::synapse0x3445290() {
   return (neuron0x343b4b0()*-0.0746703);
}

double NNfunction_sb_uRsR::synapse0x34452d0() {
   return (neuron0x343b7f0()*0.43952);
}

double NNfunction_sb_uRsR::synapse0x3445310() {
   return (neuron0x343bb30()*-0.435145);
}

double NNfunction_sb_uRsR::synapse0x3445350() {
   return (neuron0x343be70()*-0.407429);
}

double NNfunction_sb_uRsR::synapse0x3445390() {
   return (neuron0x343c1b0()*-0.833586);
}

double NNfunction_sb_uRsR::synapse0x34453d0() {
   return (neuron0x343c4f0()*0.364828);
}

double NNfunction_sb_uRsR::synapse0x3445410() {
   return (neuron0x343c830()*0.861869);
}

double NNfunction_sb_uRsR::synapse0x3445450() {
   return (neuron0x343cb70()*-0.737936);
}

double NNfunction_sb_uRsR::synapse0x3445490() {
   return (neuron0x343ceb0()*-0.429716);
}

double NNfunction_sb_uRsR::synapse0x3444e10() {
   return (neuron0x343d1f0()*-0.60258);
}

double NNfunction_sb_uRsR::synapse0x3444e50() {
   return (neuron0x343d750()*-0.172007);
}

double NNfunction_sb_uRsR::synapse0x34455e0() {
   return (neuron0x343da90()*0.583532);
}

double NNfunction_sb_uRsR::synapse0x3445620() {
   return (neuron0x343ddd0()*0.0781249);
}

double NNfunction_sb_uRsR::synapse0x3445660() {
   return (neuron0x343e110()*0.199199);
}

double NNfunction_sb_uRsR::synapse0x34456a0() {
   return (neuron0x343e450()*0.134168);
}

double NNfunction_sb_uRsR::synapse0x34456e0() {
   return (neuron0x343e790()*-0.223658);
}

double NNfunction_sb_uRsR::synapse0x3445720() {
   return (neuron0x343ead0()*0.397205);
}

double NNfunction_sb_uRsR::synapse0x3445aa0() {
   return (neuron0x3439e80()*-0.013689);
}

double NNfunction_sb_uRsR::synapse0x3445ae0() {
   return (neuron0x343a130()*-0.0491737);
}

double NNfunction_sb_uRsR::synapse0x3445b20() {
   return (neuron0x343a470()*-0.00332517);
}

double NNfunction_sb_uRsR::synapse0x3445b60() {
   return (neuron0x343a7b0()*-0.339225);
}

double NNfunction_sb_uRsR::synapse0x3445ba0() {
   return (neuron0x343aaf0()*0.00277687);
}

double NNfunction_sb_uRsR::synapse0x3445be0() {
   return (neuron0x343ae30()*-0.00329986);
}

double NNfunction_sb_uRsR::synapse0x3445c20() {
   return (neuron0x343b170()*0.0236589);
}

double NNfunction_sb_uRsR::synapse0x3445c60() {
   return (neuron0x343b4b0()*-0.000405834);
}

double NNfunction_sb_uRsR::synapse0x3445ca0() {
   return (neuron0x343b7f0()*-0.0107433);
}

double NNfunction_sb_uRsR::synapse0x3445ce0() {
   return (neuron0x343bb30()*-2.31512e-07);
}

double NNfunction_sb_uRsR::synapse0x3445d20() {
   return (neuron0x343be70()*0.0181163);
}

double NNfunction_sb_uRsR::synapse0x3445d60() {
   return (neuron0x343c1b0()*0.325907);
}

double NNfunction_sb_uRsR::synapse0x3445da0() {
   return (neuron0x343c4f0()*0.314699);
}

double NNfunction_sb_uRsR::synapse0x3445de0() {
   return (neuron0x343c830()*-0.0328159);
}

double NNfunction_sb_uRsR::synapse0x3445e20() {
   return (neuron0x343cb70()*-0.0908251);
}

double NNfunction_sb_uRsR::synapse0x3445e60() {
   return (neuron0x343ceb0()*0.154991);
}

double NNfunction_sb_uRsR::synapse0x34458f0() {
   return (neuron0x343d1f0()*-0.016133);
}

double NNfunction_sb_uRsR::synapse0x3445930() {
   return (neuron0x343d750()*0.183759);
}

double NNfunction_sb_uRsR::synapse0x3445fb0() {
   return (neuron0x343da90()*-0.0656477);
}

double NNfunction_sb_uRsR::synapse0x3445ff0() {
   return (neuron0x343ddd0()*0.00753338);
}

double NNfunction_sb_uRsR::synapse0x3446030() {
   return (neuron0x343e110()*0.00291961);
}

double NNfunction_sb_uRsR::synapse0x3446070() {
   return (neuron0x343e450()*-0.00162646);
}

double NNfunction_sb_uRsR::synapse0x34460b0() {
   return (neuron0x343e790()*-0.0387618);
}

double NNfunction_sb_uRsR::synapse0x34460f0() {
   return (neuron0x343ead0()*0.0121325);
}

double NNfunction_sb_uRsR::synapse0x3446470() {
   return (neuron0x3439e80()*-0.0361696);
}

double NNfunction_sb_uRsR::synapse0x34464b0() {
   return (neuron0x343a130()*-1.1283);
}

double NNfunction_sb_uRsR::synapse0x34464f0() {
   return (neuron0x343a470()*0.153057);
}

double NNfunction_sb_uRsR::synapse0x3446530() {
   return (neuron0x343a7b0()*-0.463297);
}

double NNfunction_sb_uRsR::synapse0x3446570() {
   return (neuron0x343aaf0()*-0.0741536);
}

double NNfunction_sb_uRsR::synapse0x34465b0() {
   return (neuron0x343ae30()*0.360078);
}

double NNfunction_sb_uRsR::synapse0x34465f0() {
   return (neuron0x343b170()*0.680098);
}

double NNfunction_sb_uRsR::synapse0x3446630() {
   return (neuron0x343b4b0()*0.541125);
}

double NNfunction_sb_uRsR::synapse0x3446670() {
   return (neuron0x343b7f0()*0.364162);
}

double NNfunction_sb_uRsR::synapse0x34466b0() {
   return (neuron0x343bb30()*-0.253065);
}

double NNfunction_sb_uRsR::synapse0x34466f0() {
   return (neuron0x343be70()*-0.063463);
}

double NNfunction_sb_uRsR::synapse0x3446730() {
   return (neuron0x343c1b0()*-0.109495);
}

double NNfunction_sb_uRsR::synapse0x3446770() {
   return (neuron0x343c4f0()*0.0162109);
}

double NNfunction_sb_uRsR::synapse0x34467b0() {
   return (neuron0x343c830()*0.0407509);
}

double NNfunction_sb_uRsR::synapse0x34467f0() {
   return (neuron0x343cb70()*0.64314);
}

double NNfunction_sb_uRsR::synapse0x3446830() {
   return (neuron0x343ceb0()*-0.109061);
}

double NNfunction_sb_uRsR::synapse0x34462c0() {
   return (neuron0x343d1f0()*-0.386168);
}

double NNfunction_sb_uRsR::synapse0x3446300() {
   return (neuron0x343d750()*0.711966);
}

double NNfunction_sb_uRsR::synapse0x3443090() {
   return (neuron0x343da90()*-0.140259);
}

double NNfunction_sb_uRsR::synapse0x34430d0() {
   return (neuron0x343ddd0()*1.11754);
}

double NNfunction_sb_uRsR::synapse0x3443110() {
   return (neuron0x343e110()*-0.770335);
}

double NNfunction_sb_uRsR::synapse0x3443150() {
   return (neuron0x343e450()*-0.146202);
}

double NNfunction_sb_uRsR::synapse0x3443190() {
   return (neuron0x343e790()*0.657127);
}

double NNfunction_sb_uRsR::synapse0x34431d0() {
   return (neuron0x343ead0()*0.681259);
}

double NNfunction_sb_uRsR::synapse0x3443550() {
   return (neuron0x3439e80()*0.382942);
}

double NNfunction_sb_uRsR::synapse0x3443590() {
   return (neuron0x343a130()*0.519288);
}

double NNfunction_sb_uRsR::synapse0x34435d0() {
   return (neuron0x343a470()*-0.0306013);
}

double NNfunction_sb_uRsR::synapse0x3443610() {
   return (neuron0x343a7b0()*-0.217159);
}

double NNfunction_sb_uRsR::synapse0x3443650() {
   return (neuron0x343aaf0()*-0.153257);
}

double NNfunction_sb_uRsR::synapse0x3443690() {
   return (neuron0x343ae30()*-0.759076);
}

double NNfunction_sb_uRsR::synapse0x34436d0() {
   return (neuron0x343b170()*0.281307);
}

double NNfunction_sb_uRsR::synapse0x3443710() {
   return (neuron0x343b4b0()*0.623327);
}

double NNfunction_sb_uRsR::synapse0x3443750() {
   return (neuron0x343b7f0()*-0.408106);
}

double NNfunction_sb_uRsR::synapse0x3443790() {
   return (neuron0x343bb30()*0.156935);
}

double NNfunction_sb_uRsR::synapse0x34437d0() {
   return (neuron0x343be70()*-0.236216);
}

double NNfunction_sb_uRsR::synapse0x3443810() {
   return (neuron0x343c1b0()*-0.101652);
}

double NNfunction_sb_uRsR::synapse0x3443850() {
   return (neuron0x343c4f0()*0.528248);
}

double NNfunction_sb_uRsR::synapse0x3447990() {
   return (neuron0x343c830()*0.412714);
}

double NNfunction_sb_uRsR::synapse0x34479d0() {
   return (neuron0x343cb70()*-0.498351);
}

double NNfunction_sb_uRsR::synapse0x3447a10() {
   return (neuron0x343ceb0()*-0.15363);
}

double NNfunction_sb_uRsR::synapse0x34433a0() {
   return (neuron0x343d1f0()*0.275987);
}

double NNfunction_sb_uRsR::synapse0x34433e0() {
   return (neuron0x343d750()*-0.299741);
}

double NNfunction_sb_uRsR::synapse0x3447b60() {
   return (neuron0x343da90()*0.12583);
}

double NNfunction_sb_uRsR::synapse0x3447ba0() {
   return (neuron0x343ddd0()*0.676222);
}

double NNfunction_sb_uRsR::synapse0x3447be0() {
   return (neuron0x343e110()*0.680032);
}

double NNfunction_sb_uRsR::synapse0x3447c20() {
   return (neuron0x343e450()*-0.153969);
}

double NNfunction_sb_uRsR::synapse0x3447c60() {
   return (neuron0x343e790()*0.39171);
}

double NNfunction_sb_uRsR::synapse0x3447ca0() {
   return (neuron0x343ead0()*-0.570237);
}

double NNfunction_sb_uRsR::synapse0x3448020() {
   return (neuron0x3439e80()*0.12587);
}

double NNfunction_sb_uRsR::synapse0x3448060() {
   return (neuron0x343a130()*0.385794);
}

double NNfunction_sb_uRsR::synapse0x34480a0() {
   return (neuron0x343a470()*-0.344836);
}

double NNfunction_sb_uRsR::synapse0x34480e0() {
   return (neuron0x343a7b0()*0.820641);
}

double NNfunction_sb_uRsR::synapse0x3448120() {
   return (neuron0x343aaf0()*-0.416359);
}

double NNfunction_sb_uRsR::synapse0x3448160() {
   return (neuron0x343ae30()*1.27157);
}

double NNfunction_sb_uRsR::synapse0x34481a0() {
   return (neuron0x343b170()*-0.376585);
}

double NNfunction_sb_uRsR::synapse0x34481e0() {
   return (neuron0x343b4b0()*-0.272779);
}

double NNfunction_sb_uRsR::synapse0x3448220() {
   return (neuron0x343b7f0()*-0.154635);
}

double NNfunction_sb_uRsR::synapse0x3448260() {
   return (neuron0x343bb30()*0.125058);
}

double NNfunction_sb_uRsR::synapse0x34482a0() {
   return (neuron0x343be70()*0.14385);
}

double NNfunction_sb_uRsR::synapse0x34482e0() {
   return (neuron0x343c1b0()*0.757526);
}

double NNfunction_sb_uRsR::synapse0x3448320() {
   return (neuron0x343c4f0()*-0.148877);
}

double NNfunction_sb_uRsR::synapse0x3448360() {
   return (neuron0x343c830()*-0.118684);
}

double NNfunction_sb_uRsR::synapse0x34483a0() {
   return (neuron0x343cb70()*0.315628);
}

double NNfunction_sb_uRsR::synapse0x34483e0() {
   return (neuron0x343ceb0()*-0.442567);
}

double NNfunction_sb_uRsR::synapse0x3447e70() {
   return (neuron0x343d1f0()*-0.703812);
}

double NNfunction_sb_uRsR::synapse0x3447eb0() {
   return (neuron0x343d750()*-0.335085);
}

double NNfunction_sb_uRsR::synapse0x3448530() {
   return (neuron0x343da90()*0.0835349);
}

double NNfunction_sb_uRsR::synapse0x3448570() {
   return (neuron0x343ddd0()*0.66609);
}

double NNfunction_sb_uRsR::synapse0x34485b0() {
   return (neuron0x343e110()*-0.444263);
}

double NNfunction_sb_uRsR::synapse0x34485f0() {
   return (neuron0x343e450()*0.143589);
}

double NNfunction_sb_uRsR::synapse0x3448630() {
   return (neuron0x343e790()*-0.315366);
}

double NNfunction_sb_uRsR::synapse0x3448670() {
   return (neuron0x343ead0()*-0.616782);
}

double NNfunction_sb_uRsR::synapse0x34489f0() {
   return (neuron0x3439e80()*0.334894);
}

double NNfunction_sb_uRsR::synapse0x3448a30() {
   return (neuron0x343a130()*0.0739674);
}

double NNfunction_sb_uRsR::synapse0x3448a70() {
   return (neuron0x343a470()*0.135202);
}

double NNfunction_sb_uRsR::synapse0x3448ab0() {
   return (neuron0x343a7b0()*0.349024);
}

double NNfunction_sb_uRsR::synapse0x3448af0() {
   return (neuron0x343aaf0()*-0.61161);
}

double NNfunction_sb_uRsR::synapse0x3448b30() {
   return (neuron0x343ae30()*-0.272772);
}

double NNfunction_sb_uRsR::synapse0x3448b70() {
   return (neuron0x343b170()*-0.414612);
}

double NNfunction_sb_uRsR::synapse0x3448bb0() {
   return (neuron0x343b4b0()*-0.0642078);
}

double NNfunction_sb_uRsR::synapse0x3448bf0() {
   return (neuron0x343b7f0()*0.294678);
}

double NNfunction_sb_uRsR::synapse0x3448c30() {
   return (neuron0x343bb30()*-0.0745937);
}

double NNfunction_sb_uRsR::synapse0x3448c70() {
   return (neuron0x343be70()*-0.398762);
}

double NNfunction_sb_uRsR::synapse0x3448cb0() {
   return (neuron0x343c1b0()*-0.383378);
}

double NNfunction_sb_uRsR::synapse0x3448cf0() {
   return (neuron0x343c4f0()*0.65471);
}

double NNfunction_sb_uRsR::synapse0x3448d30() {
   return (neuron0x343c830()*-0.125753);
}

double NNfunction_sb_uRsR::synapse0x3448d70() {
   return (neuron0x343cb70()*-0.769716);
}

double NNfunction_sb_uRsR::synapse0x3448db0() {
   return (neuron0x343ceb0()*-0.066839);
}

double NNfunction_sb_uRsR::synapse0x3448840() {
   return (neuron0x343d1f0()*-0.144978);
}

double NNfunction_sb_uRsR::synapse0x3448880() {
   return (neuron0x343d750()*0.597287);
}

double NNfunction_sb_uRsR::synapse0x3448f00() {
   return (neuron0x343da90()*-0.225287);
}

double NNfunction_sb_uRsR::synapse0x3448f40() {
   return (neuron0x343ddd0()*0.221401);
}

double NNfunction_sb_uRsR::synapse0x3448f80() {
   return (neuron0x343e110()*-0.058828);
}

double NNfunction_sb_uRsR::synapse0x3448fc0() {
   return (neuron0x343e450()*-0.312903);
}

double NNfunction_sb_uRsR::synapse0x3449000() {
   return (neuron0x343e790()*-0.132168);
}

double NNfunction_sb_uRsR::synapse0x3449040() {
   return (neuron0x343ead0()*-0.157026);
}

double NNfunction_sb_uRsR::synapse0x34493c0() {
   return (neuron0x3439e80()*0.751239);
}

double NNfunction_sb_uRsR::synapse0x3449400() {
   return (neuron0x343a130()*-0.184023);
}

double NNfunction_sb_uRsR::synapse0x3449440() {
   return (neuron0x343a470()*-0.112078);
}

double NNfunction_sb_uRsR::synapse0x3449480() {
   return (neuron0x343a7b0()*0.0655481);
}

double NNfunction_sb_uRsR::synapse0x34494c0() {
   return (neuron0x343aaf0()*0.0208519);
}

double NNfunction_sb_uRsR::synapse0x3449500() {
   return (neuron0x343ae30()*0.26131);
}

double NNfunction_sb_uRsR::synapse0x3449540() {
   return (neuron0x343b170()*0.0701141);
}

double NNfunction_sb_uRsR::synapse0x3449580() {
   return (neuron0x343b4b0()*0.443596);
}

double NNfunction_sb_uRsR::synapse0x34495c0() {
   return (neuron0x343b7f0()*-0.734692);
}

double NNfunction_sb_uRsR::synapse0x3449600() {
   return (neuron0x343bb30()*-0.925043);
}

double NNfunction_sb_uRsR::synapse0x3449640() {
   return (neuron0x343be70()*0.394918);
}

double NNfunction_sb_uRsR::synapse0x3449680() {
   return (neuron0x343c1b0()*-0.0772883);
}

double NNfunction_sb_uRsR::synapse0x34496c0() {
   return (neuron0x343c4f0()*-0.762499);
}

double NNfunction_sb_uRsR::synapse0x3449700() {
   return (neuron0x343c830()*-0.128983);
}

double NNfunction_sb_uRsR::synapse0x3449740() {
   return (neuron0x343cb70()*-0.0298493);
}

double NNfunction_sb_uRsR::synapse0x3449780() {
   return (neuron0x343ceb0()*0.227947);
}

double NNfunction_sb_uRsR::synapse0x3449210() {
   return (neuron0x343d1f0()*-0.276385);
}

double NNfunction_sb_uRsR::synapse0x3449250() {
   return (neuron0x343d750()*0.293698);
}

double NNfunction_sb_uRsR::synapse0x34498d0() {
   return (neuron0x343da90()*-0.75022);
}

double NNfunction_sb_uRsR::synapse0x3449910() {
   return (neuron0x343ddd0()*0.505079);
}

double NNfunction_sb_uRsR::synapse0x3449950() {
   return (neuron0x343e110()*0.335922);
}

double NNfunction_sb_uRsR::synapse0x3449990() {
   return (neuron0x343e450()*-0.109299);
}

double NNfunction_sb_uRsR::synapse0x34499d0() {
   return (neuron0x343e790()*-0.0667548);
}

double NNfunction_sb_uRsR::synapse0x3449a10() {
   return (neuron0x343ead0()*0.172693);
}

double NNfunction_sb_uRsR::synapse0x3449d90() {
   return (neuron0x3439e80()*-0.522999);
}

double NNfunction_sb_uRsR::synapse0x343a010() {
   return (neuron0x343a130()*0.840964);
}

double NNfunction_sb_uRsR::synapse0x343a050() {
   return (neuron0x343a470()*0.533917);
}

double NNfunction_sb_uRsR::synapse0x343a350() {
   return (neuron0x343a7b0()*-0.940713);
}

double NNfunction_sb_uRsR::synapse0x343a390() {
   return (neuron0x343aaf0()*-0.551069);
}

double NNfunction_sb_uRsR::synapse0x343a690() {
   return (neuron0x343ae30()*-0.0151858);
}

double NNfunction_sb_uRsR::synapse0x343a6d0() {
   return (neuron0x343b170()*0.24392);
}

double NNfunction_sb_uRsR::synapse0x343a9d0() {
   return (neuron0x343b4b0()*0.782252);
}

double NNfunction_sb_uRsR::synapse0x343aa10() {
   return (neuron0x343b7f0()*-0.117118);
}

double NNfunction_sb_uRsR::synapse0x343ad10() {
   return (neuron0x343bb30()*-0.131589);
}

double NNfunction_sb_uRsR::synapse0x343ad50() {
   return (neuron0x343be70()*0.57954);
}

double NNfunction_sb_uRsR::synapse0x343b050() {
   return (neuron0x343c1b0()*-0.519053);
}

double NNfunction_sb_uRsR::synapse0x343b090() {
   return (neuron0x343c4f0()*-0.640469);
}

double NNfunction_sb_uRsR::synapse0x343b390() {
   return (neuron0x343c830()*0.43865);
}

double NNfunction_sb_uRsR::synapse0x343b3d0() {
   return (neuron0x343cb70()*-0.874977);
}

double NNfunction_sb_uRsR::synapse0x343b6d0() {
   return (neuron0x343ceb0()*-0.0671517);
}

double NNfunction_sb_uRsR::synapse0x343b710() {
   return (neuron0x343d1f0()*0.396945);
}

double NNfunction_sb_uRsR::synapse0x343ba10() {
   return (neuron0x343d750()*-0.749545);
}

double NNfunction_sb_uRsR::synapse0x343ba50() {
   return (neuron0x343da90()*-0.149854);
}

double NNfunction_sb_uRsR::synapse0x343bd50() {
   return (neuron0x343ddd0()*0.497809);
}

double NNfunction_sb_uRsR::synapse0x343bd90() {
   return (neuron0x343e110()*-0.0900508);
}

double NNfunction_sb_uRsR::synapse0x343c090() {
   return (neuron0x343e450()*-0.29188);
}

double NNfunction_sb_uRsR::synapse0x343c0d0() {
   return (neuron0x343e790()*-0.654728);
}

double NNfunction_sb_uRsR::synapse0x343c3d0() {
   return (neuron0x343ead0()*0.124305);
}

double NNfunction_sb_uRsR::synapse0x343c410() {
   return (neuron0x3439e80()*0.0243281);
}

double NNfunction_sb_uRsR::synapse0x343d0d0() {
   return (neuron0x343a130()*0.0180629);
}

double NNfunction_sb_uRsR::synapse0x343d110() {
   return (neuron0x343a470()*0.00910298);
}

double NNfunction_sb_uRsR::synapse0x3449be0() {
   return (neuron0x343a7b0()*6.22136);
}

double NNfunction_sb_uRsR::synapse0x3449c20() {
   return (neuron0x343aaf0()*-0.0271488);
}

double NNfunction_sb_uRsR::synapse0x343d410() {
   return (neuron0x343ae30()*-0.00567254);
}

double NNfunction_sb_uRsR::synapse0x343d450() {
   return (neuron0x343b170()*-0.00285077);
}

double NNfunction_sb_uRsR::synapse0x343d970() {
   return (neuron0x343b4b0()*0.0126589);
}

double NNfunction_sb_uRsR::synapse0x343d9b0() {
   return (neuron0x343b7f0()*0.00335764);
}

double NNfunction_sb_uRsR::synapse0x343dcb0() {
   return (neuron0x343bb30()*0.0157259);
}

double NNfunction_sb_uRsR::synapse0x343dcf0() {
   return (neuron0x343be70()*-0.013807);
}

double NNfunction_sb_uRsR::synapse0x343dff0() {
   return (neuron0x343c1b0()*-0.0196546);
}

double NNfunction_sb_uRsR::synapse0x343e030() {
   return (neuron0x343c4f0()*-0.0316062);
}

double NNfunction_sb_uRsR::synapse0x343e330() {
   return (neuron0x343c830()*-0.0102531);
}

double NNfunction_sb_uRsR::synapse0x343e370() {
   return (neuron0x343cb70()*0.17522);
}

double NNfunction_sb_uRsR::synapse0x343e670() {
   return (neuron0x343ceb0()*-0.0103176);
}

double NNfunction_sb_uRsR::synapse0x343e6b0() {
   return (neuron0x343d1f0()*-0.0216808);
}

double NNfunction_sb_uRsR::synapse0x343e9b0() {
   return (neuron0x343d750()*-0.019634);
}

double NNfunction_sb_uRsR::synapse0x343e9f0() {
   return (neuron0x343da90()*0.215596);
}

double NNfunction_sb_uRsR::synapse0x343ecf0() {
   return (neuron0x343ddd0()*0.0180682);
}

double NNfunction_sb_uRsR::synapse0x343ed30() {
   return (neuron0x343e110()*0.00271577);
}

double NNfunction_sb_uRsR::synapse0x343c710() {
   return (neuron0x343e450()*-0.00975248);
}

double NNfunction_sb_uRsR::synapse0x343c750() {
   return (neuron0x343e790()*0.0037469);
}

double NNfunction_sb_uRsR::synapse0x344bb00() {
   return (neuron0x343ead0()*0.0347654);
}

double NNfunction_sb_uRsR::synapse0x344be80() {
   return (neuron0x3439e80()*0.944282);
}

double NNfunction_sb_uRsR::synapse0x344bec0() {
   return (neuron0x343a130()*-0.349621);
}

double NNfunction_sb_uRsR::synapse0x344bf00() {
   return (neuron0x343a470()*-0.415986);
}

double NNfunction_sb_uRsR::synapse0x344bf40() {
   return (neuron0x343a7b0()*-0.213898);
}

double NNfunction_sb_uRsR::synapse0x344bf80() {
   return (neuron0x343aaf0()*0.320932);
}

double NNfunction_sb_uRsR::synapse0x344bfc0() {
   return (neuron0x343ae30()*0.167665);
}

double NNfunction_sb_uRsR::synapse0x344c000() {
   return (neuron0x343b170()*0.341338);
}

double NNfunction_sb_uRsR::synapse0x344c040() {
   return (neuron0x343b4b0()*-0.148228);
}

double NNfunction_sb_uRsR::synapse0x344c080() {
   return (neuron0x343b7f0()*0.326697);
}

double NNfunction_sb_uRsR::synapse0x344c0c0() {
   return (neuron0x343bb30()*-0.316643);
}

double NNfunction_sb_uRsR::synapse0x344c100() {
   return (neuron0x343be70()*-0.225451);
}

double NNfunction_sb_uRsR::synapse0x344c140() {
   return (neuron0x343c1b0()*0.228134);
}

double NNfunction_sb_uRsR::synapse0x344c180() {
   return (neuron0x343c4f0()*0.0610009);
}

double NNfunction_sb_uRsR::synapse0x344c1c0() {
   return (neuron0x343c830()*0.121806);
}

double NNfunction_sb_uRsR::synapse0x344c200() {
   return (neuron0x343cb70()*0.501232);
}

double NNfunction_sb_uRsR::synapse0x344c240() {
   return (neuron0x343ceb0()*-0.116155);
}

double NNfunction_sb_uRsR::synapse0x344bcd0() {
   return (neuron0x343d1f0()*0.611631);
}

double NNfunction_sb_uRsR::synapse0x344bd10() {
   return (neuron0x343d750()*0.104261);
}

double NNfunction_sb_uRsR::synapse0x344c390() {
   return (neuron0x343da90()*-0.985543);
}

double NNfunction_sb_uRsR::synapse0x344c3d0() {
   return (neuron0x343ddd0()*0.345233);
}

double NNfunction_sb_uRsR::synapse0x344c410() {
   return (neuron0x343e110()*0.44815);
}

double NNfunction_sb_uRsR::synapse0x344c450() {
   return (neuron0x343e450()*-0.152614);
}

double NNfunction_sb_uRsR::synapse0x344c490() {
   return (neuron0x343e790()*0.190098);
}

double NNfunction_sb_uRsR::synapse0x344c4d0() {
   return (neuron0x343ead0()*0.371281);
}

double NNfunction_sb_uRsR::synapse0x344c850() {
   return (neuron0x3439e80()*-0.574032);
}

double NNfunction_sb_uRsR::synapse0x344c890() {
   return (neuron0x343a130()*0.131899);
}

double NNfunction_sb_uRsR::synapse0x344c8d0() {
   return (neuron0x343a470()*1.00175);
}

double NNfunction_sb_uRsR::synapse0x344c910() {
   return (neuron0x343a7b0()*-0.195639);
}

double NNfunction_sb_uRsR::synapse0x344c950() {
   return (neuron0x343aaf0()*-0.0651814);
}

double NNfunction_sb_uRsR::synapse0x344c990() {
   return (neuron0x343ae30()*-0.337413);
}

double NNfunction_sb_uRsR::synapse0x344c9d0() {
   return (neuron0x343b170()*-0.0299015);
}

double NNfunction_sb_uRsR::synapse0x344ca10() {
   return (neuron0x343b4b0()*-0.0120692);
}

double NNfunction_sb_uRsR::synapse0x344ca50() {
   return (neuron0x343b7f0()*-0.263399);
}

double NNfunction_sb_uRsR::synapse0x344ca90() {
   return (neuron0x343bb30()*0.293902);
}

double NNfunction_sb_uRsR::synapse0x344cad0() {
   return (neuron0x343be70()*0.0783325);
}

double NNfunction_sb_uRsR::synapse0x344cb10() {
   return (neuron0x343c1b0()*-0.289616);
}

double NNfunction_sb_uRsR::synapse0x344cb50() {
   return (neuron0x343c4f0()*-0.0203858);
}

double NNfunction_sb_uRsR::synapse0x344cb90() {
   return (neuron0x343c830()*0.345035);
}

double NNfunction_sb_uRsR::synapse0x344cbd0() {
   return (neuron0x343cb70()*0.526208);
}

double NNfunction_sb_uRsR::synapse0x344cc10() {
   return (neuron0x343ceb0()*-0.0267083);
}

double NNfunction_sb_uRsR::synapse0x344c6a0() {
   return (neuron0x343d1f0()*-0.457513);
}

double NNfunction_sb_uRsR::synapse0x344c6e0() {
   return (neuron0x343d750()*0.263166);
}

double NNfunction_sb_uRsR::synapse0x344cd60() {
   return (neuron0x343da90()*-0.258352);
}

double NNfunction_sb_uRsR::synapse0x344cda0() {
   return (neuron0x343ddd0()*0.447363);
}

double NNfunction_sb_uRsR::synapse0x344cde0() {
   return (neuron0x343e110()*-0.215698);
}

double NNfunction_sb_uRsR::synapse0x344ce20() {
   return (neuron0x343e450()*0.249361);
}

double NNfunction_sb_uRsR::synapse0x344ce60() {
   return (neuron0x343e790()*0.299343);
}

double NNfunction_sb_uRsR::synapse0x344cea0() {
   return (neuron0x343ead0()*0.5536);
}

double NNfunction_sb_uRsR::synapse0x344d220() {
   return (neuron0x3439e80()*0.0849574);
}

double NNfunction_sb_uRsR::synapse0x344d260() {
   return (neuron0x343a130()*-0.167387);
}

double NNfunction_sb_uRsR::synapse0x344d2a0() {
   return (neuron0x343a470()*0.470872);
}

double NNfunction_sb_uRsR::synapse0x344d2e0() {
   return (neuron0x343a7b0()*0.58939);
}

double NNfunction_sb_uRsR::synapse0x344d320() {
   return (neuron0x343aaf0()*-0.0732164);
}

double NNfunction_sb_uRsR::synapse0x344d360() {
   return (neuron0x343ae30()*-0.0324625);
}

double NNfunction_sb_uRsR::synapse0x344d3a0() {
   return (neuron0x343b170()*0.0368801);
}

double NNfunction_sb_uRsR::synapse0x344d3e0() {
   return (neuron0x343b4b0()*0.132954);
}

double NNfunction_sb_uRsR::synapse0x344d420() {
   return (neuron0x343b7f0()*0.0491138);
}

double NNfunction_sb_uRsR::synapse0x344d460() {
   return (neuron0x343bb30()*-0.020621);
}

double NNfunction_sb_uRsR::synapse0x344d4a0() {
   return (neuron0x343be70()*-0.246283);
}

double NNfunction_sb_uRsR::synapse0x344d4e0() {
   return (neuron0x343c1b0()*-0.111125);
}

double NNfunction_sb_uRsR::synapse0x344d520() {
   return (neuron0x343c4f0()*0.212938);
}

double NNfunction_sb_uRsR::synapse0x344d560() {
   return (neuron0x343c830()*-0.311693);
}

double NNfunction_sb_uRsR::synapse0x344d5a0() {
   return (neuron0x343cb70()*0.469381);
}

double NNfunction_sb_uRsR::synapse0x344d5e0() {
   return (neuron0x343ceb0()*-0.0625596);
}

double NNfunction_sb_uRsR::synapse0x344d070() {
   return (neuron0x343d1f0()*-0.273922);
}

double NNfunction_sb_uRsR::synapse0x344d0b0() {
   return (neuron0x343d750()*0.00707204);
}

double NNfunction_sb_uRsR::synapse0x344d730() {
   return (neuron0x343da90()*0.139285);
}

double NNfunction_sb_uRsR::synapse0x344d770() {
   return (neuron0x343ddd0()*-0.0852554);
}

double NNfunction_sb_uRsR::synapse0x344d7b0() {
   return (neuron0x343e110()*0.139725);
}

double NNfunction_sb_uRsR::synapse0x344d7f0() {
   return (neuron0x343e450()*0.233089);
}

double NNfunction_sb_uRsR::synapse0x344d830() {
   return (neuron0x343e790()*0.0248134);
}

double NNfunction_sb_uRsR::synapse0x344d870() {
   return (neuron0x343ead0()*-0.0895217);
}

double NNfunction_sb_uRsR::synapse0x344dbf0() {
   return (neuron0x3439e80()*-0.061571);
}

double NNfunction_sb_uRsR::synapse0x344dc30() {
   return (neuron0x343a130()*0.128332);
}

double NNfunction_sb_uRsR::synapse0x344dc70() {
   return (neuron0x343a470()*-0.0112183);
}

double NNfunction_sb_uRsR::synapse0x344dcb0() {
   return (neuron0x343a7b0()*-0.160664);
}

double NNfunction_sb_uRsR::synapse0x344dcf0() {
   return (neuron0x343aaf0()*0.107876);
}

double NNfunction_sb_uRsR::synapse0x344dd30() {
   return (neuron0x343ae30()*0.060761);
}

double NNfunction_sb_uRsR::synapse0x344dd70() {
   return (neuron0x343b170()*-0.130689);
}

double NNfunction_sb_uRsR::synapse0x344ddb0() {
   return (neuron0x343b4b0()*-0.0664898);
}

double NNfunction_sb_uRsR::synapse0x344ddf0() {
   return (neuron0x343b7f0()*0.19493);
}

double NNfunction_sb_uRsR::synapse0x344de30() {
   return (neuron0x343bb30()*-0.0781412);
}

double NNfunction_sb_uRsR::synapse0x344de70() {
   return (neuron0x343be70()*-0.0419383);
}

double NNfunction_sb_uRsR::synapse0x344deb0() {
   return (neuron0x343c1b0()*0.382239);
}

double NNfunction_sb_uRsR::synapse0x344def0() {
   return (neuron0x343c4f0()*0.284577);
}

double NNfunction_sb_uRsR::synapse0x344df30() {
   return (neuron0x343c830()*0.111745);
}

double NNfunction_sb_uRsR::synapse0x344df70() {
   return (neuron0x343cb70()*-0.18506);
}

double NNfunction_sb_uRsR::synapse0x344dfb0() {
   return (neuron0x343ceb0()*0.00168818);
}

double NNfunction_sb_uRsR::synapse0x344da40() {
   return (neuron0x343d1f0()*-0.0271969);
}

double NNfunction_sb_uRsR::synapse0x344da80() {
   return (neuron0x343d750()*0.111252);
}

double NNfunction_sb_uRsR::synapse0x344e100() {
   return (neuron0x343da90()*0.488334);
}

double NNfunction_sb_uRsR::synapse0x344e140() {
   return (neuron0x343ddd0()*-0.107249);
}

double NNfunction_sb_uRsR::synapse0x344e180() {
   return (neuron0x343e110()*0.0947836);
}

double NNfunction_sb_uRsR::synapse0x344e1c0() {
   return (neuron0x343e450()*0.0235948);
}

double NNfunction_sb_uRsR::synapse0x344e200() {
   return (neuron0x343e790()*0.00829591);
}

double NNfunction_sb_uRsR::synapse0x344e240() {
   return (neuron0x343ead0()*-0.081978);
}

double NNfunction_sb_uRsR::synapse0x344e5c0() {
   return (neuron0x3439e80()*0.00487496);
}

double NNfunction_sb_uRsR::synapse0x344e600() {
   return (neuron0x343a130()*0.0019014);
}

double NNfunction_sb_uRsR::synapse0x344e640() {
   return (neuron0x343a470()*0.0117453);
}

double NNfunction_sb_uRsR::synapse0x344e680() {
   return (neuron0x343a7b0()*1.39657);
}

double NNfunction_sb_uRsR::synapse0x344e6c0() {
   return (neuron0x343aaf0()*-0.00941331);
}

double NNfunction_sb_uRsR::synapse0x344e700() {
   return (neuron0x343ae30()*-0.0122537);
}

double NNfunction_sb_uRsR::synapse0x344e740() {
   return (neuron0x343b170()*-0.00801517);
}

double NNfunction_sb_uRsR::synapse0x344e780() {
   return (neuron0x343b4b0()*-0.0115943);
}

double NNfunction_sb_uRsR::synapse0x344e7c0() {
   return (neuron0x343b7f0()*0.000815137);
}

double NNfunction_sb_uRsR::synapse0x3446980() {
   return (neuron0x343bb30()*0.00115184);
}

double NNfunction_sb_uRsR::synapse0x34469c0() {
   return (neuron0x343be70()*-0.00271343);
}

double NNfunction_sb_uRsR::synapse0x3446a00() {
   return (neuron0x343c1b0()*-0.000453427);
}

double NNfunction_sb_uRsR::synapse0x3446a40() {
   return (neuron0x343c4f0()*-0.00963941);
}

double NNfunction_sb_uRsR::synapse0x3446a80() {
   return (neuron0x343c830()*0.0013099);
}

double NNfunction_sb_uRsR::synapse0x3446ac0() {
   return (neuron0x343cb70()*-0.0208157);
}

double NNfunction_sb_uRsR::synapse0x3446b00() {
   return (neuron0x343ceb0()*-0.0158994);
}

double NNfunction_sb_uRsR::synapse0x344e410() {
   return (neuron0x343d1f0()*-0.00847248);
}

double NNfunction_sb_uRsR::synapse0x344e450() {
   return (neuron0x343d750()*-0.00655026);
}

double NNfunction_sb_uRsR::synapse0x3446c50() {
   return (neuron0x343da90()*0.0126089);
}

double NNfunction_sb_uRsR::synapse0x3446c90() {
   return (neuron0x343ddd0()*0.00128322);
}

double NNfunction_sb_uRsR::synapse0x3446cd0() {
   return (neuron0x343e110()*-0.00456263);
}

double NNfunction_sb_uRsR::synapse0x3446d10() {
   return (neuron0x343e450()*0.00641018);
}

double NNfunction_sb_uRsR::synapse0x3446d50() {
   return (neuron0x343e790()*0.0199445);
}

double NNfunction_sb_uRsR::synapse0x3446d90() {
   return (neuron0x343ead0()*-0.000457151);
}

double NNfunction_sb_uRsR::synapse0x3447110() {
   return (neuron0x3439e80()*0.365731);
}

double NNfunction_sb_uRsR::synapse0x3447150() {
   return (neuron0x343a130()*-0.0548731);
}

double NNfunction_sb_uRsR::synapse0x3447190() {
   return (neuron0x343a470()*0.126909);
}

double NNfunction_sb_uRsR::synapse0x34471d0() {
   return (neuron0x343a7b0()*-0.00100456);
}

double NNfunction_sb_uRsR::synapse0x3447210() {
   return (neuron0x343aaf0()*-0.300473);
}

double NNfunction_sb_uRsR::synapse0x3447250() {
   return (neuron0x343ae30()*0.359655);
}

double NNfunction_sb_uRsR::synapse0x3447290() {
   return (neuron0x343b170()*0.399914);
}

double NNfunction_sb_uRsR::synapse0x34472d0() {
   return (neuron0x343b4b0()*0.168628);
}

double NNfunction_sb_uRsR::synapse0x3447310() {
   return (neuron0x343b7f0()*0.753519);
}

double NNfunction_sb_uRsR::synapse0x3447350() {
   return (neuron0x343bb30()*0.57969);
}

double NNfunction_sb_uRsR::synapse0x3447390() {
   return (neuron0x343be70()*-0.147136);
}

double NNfunction_sb_uRsR::synapse0x34473d0() {
   return (neuron0x343c1b0()*-0.31394);
}

double NNfunction_sb_uRsR::synapse0x3447410() {
   return (neuron0x343c4f0()*0.368062);
}

double NNfunction_sb_uRsR::synapse0x3447450() {
   return (neuron0x343c830()*-0.661043);
}

double NNfunction_sb_uRsR::synapse0x3447490() {
   return (neuron0x343cb70()*-0.177011);
}

double NNfunction_sb_uRsR::synapse0x34474d0() {
   return (neuron0x343ceb0()*0.298048);
}

double NNfunction_sb_uRsR::synapse0x3446f60() {
   return (neuron0x343d1f0()*-0.00119748);
}

double NNfunction_sb_uRsR::synapse0x3446fa0() {
   return (neuron0x343d750()*-0.35581);
}

double NNfunction_sb_uRsR::synapse0x3447620() {
   return (neuron0x343da90()*0.0441686);
}

double NNfunction_sb_uRsR::synapse0x3447660() {
   return (neuron0x343ddd0()*-0.354162);
}

double NNfunction_sb_uRsR::synapse0x34476a0() {
   return (neuron0x343e110()*0.143994);
}

double NNfunction_sb_uRsR::synapse0x34476e0() {
   return (neuron0x343e450()*0.167925);
}

double NNfunction_sb_uRsR::synapse0x3447720() {
   return (neuron0x343e790()*-0.373339);
}

double NNfunction_sb_uRsR::synapse0x3447760() {
   return (neuron0x343ead0()*-0.404731);
}

double NNfunction_sb_uRsR::synapse0x3447930() {
   return (neuron0x3439e80()*0.0196027);
}

double NNfunction_sb_uRsR::synapse0x34509c0() {
   return (neuron0x343a130()*0.0131201);
}

double NNfunction_sb_uRsR::synapse0x3450a00() {
   return (neuron0x343a470()*0.0178503);
}

double NNfunction_sb_uRsR::synapse0x3450a40() {
   return (neuron0x343a7b0()*-0.0308274);
}

double NNfunction_sb_uRsR::synapse0x3450a80() {
   return (neuron0x343aaf0()*-0.00426156);
}

double NNfunction_sb_uRsR::synapse0x3450ac0() {
   return (neuron0x343ae30()*-0.00426679);
}

double NNfunction_sb_uRsR::synapse0x3450b00() {
   return (neuron0x343b170()*0.00352212);
}

double NNfunction_sb_uRsR::synapse0x3450b40() {
   return (neuron0x343b4b0()*0.00473577);
}

double NNfunction_sb_uRsR::synapse0x3450b80() {
   return (neuron0x343b7f0()*-0.00188038);
}

double NNfunction_sb_uRsR::synapse0x3450bc0() {
   return (neuron0x343bb30()*0.0122531);
}

double NNfunction_sb_uRsR::synapse0x3450c00() {
   return (neuron0x343be70()*-0.00462048);
}

double NNfunction_sb_uRsR::synapse0x3450c40() {
   return (neuron0x343c1b0()*-0.0411195);
}

double NNfunction_sb_uRsR::synapse0x3450c80() {
   return (neuron0x343c4f0()*-0.0341294);
}

double NNfunction_sb_uRsR::synapse0x3450cc0() {
   return (neuron0x343c830()*0.00759364);
}

double NNfunction_sb_uRsR::synapse0x3450d00() {
   return (neuron0x343cb70()*-0.0979096);
}

double NNfunction_sb_uRsR::synapse0x3450d40() {
   return (neuron0x343ceb0()*-0.0210819);
}

double NNfunction_sb_uRsR::synapse0x3450810() {
   return (neuron0x343d1f0()*-0.00861396);
}

double NNfunction_sb_uRsR::synapse0x3450850() {
   return (neuron0x343d750()*0.000270514);
}

double NNfunction_sb_uRsR::synapse0x3450e90() {
   return (neuron0x343da90()*0.91488);
}

double NNfunction_sb_uRsR::synapse0x3450ed0() {
   return (neuron0x343ddd0()*-0.00639693);
}

double NNfunction_sb_uRsR::synapse0x3450f10() {
   return (neuron0x343e110()*0.00152148);
}

double NNfunction_sb_uRsR::synapse0x3450f50() {
   return (neuron0x343e450()*0.00682766);
}

double NNfunction_sb_uRsR::synapse0x3450f90() {
   return (neuron0x343e790()*-0.00269107);
}

double NNfunction_sb_uRsR::synapse0x3450fd0() {
   return (neuron0x343ead0()*-0.00268609);
}

double NNfunction_sb_uRsR::synapse0x3451350() {
   return (neuron0x3439e80()*-0.519128);
}

double NNfunction_sb_uRsR::synapse0x3451390() {
   return (neuron0x343a130()*-0.036822);
}

double NNfunction_sb_uRsR::synapse0x34513d0() {
   return (neuron0x343a470()*-0.867096);
}

double NNfunction_sb_uRsR::synapse0x3451410() {
   return (neuron0x343a7b0()*-0.30387);
}

double NNfunction_sb_uRsR::synapse0x3451450() {
   return (neuron0x343aaf0()*-0.0195742);
}

double NNfunction_sb_uRsR::synapse0x3451490() {
   return (neuron0x343ae30()*-0.0996087);
}

double NNfunction_sb_uRsR::synapse0x34514d0() {
   return (neuron0x343b170()*-0.118543);
}

double NNfunction_sb_uRsR::synapse0x3451510() {
   return (neuron0x343b4b0()*0.0768509);
}

double NNfunction_sb_uRsR::synapse0x3451550() {
   return (neuron0x343b7f0()*-0.0439591);
}

double NNfunction_sb_uRsR::synapse0x3451590() {
   return (neuron0x343bb30()*0.017296);
}

double NNfunction_sb_uRsR::synapse0x34515d0() {
   return (neuron0x343be70()*0.57638);
}

double NNfunction_sb_uRsR::synapse0x3451610() {
   return (neuron0x343c1b0()*0.332247);
}

double NNfunction_sb_uRsR::synapse0x3451650() {
   return (neuron0x343c4f0()*0.288643);
}

double NNfunction_sb_uRsR::synapse0x3451690() {
   return (neuron0x343c830()*-0.558248);
}

double NNfunction_sb_uRsR::synapse0x34516d0() {
   return (neuron0x343cb70()*-0.215509);
}

double NNfunction_sb_uRsR::synapse0x3451710() {
   return (neuron0x343ceb0()*-0.0547349);
}

double NNfunction_sb_uRsR::synapse0x34511a0() {
   return (neuron0x343d1f0()*0.146644);
}

double NNfunction_sb_uRsR::synapse0x34511e0() {
   return (neuron0x343d750()*-0.41308);
}

double NNfunction_sb_uRsR::synapse0x3451860() {
   return (neuron0x343da90()*-0.417321);
}

double NNfunction_sb_uRsR::synapse0x34518a0() {
   return (neuron0x343ddd0()*0.326611);
}

double NNfunction_sb_uRsR::synapse0x34518e0() {
   return (neuron0x343e110()*-0.401969);
}

double NNfunction_sb_uRsR::synapse0x3451920() {
   return (neuron0x343e450()*-0.266253);
}

double NNfunction_sb_uRsR::synapse0x3451960() {
   return (neuron0x343e790()*-0.0558049);
}

double NNfunction_sb_uRsR::synapse0x34519a0() {
   return (neuron0x343ead0()*0.702197);
}

double NNfunction_sb_uRsR::synapse0x3451d20() {
   return (neuron0x3439e80()*-0.241619);
}

double NNfunction_sb_uRsR::synapse0x3451d60() {
   return (neuron0x343a130()*-0.0623204);
}

double NNfunction_sb_uRsR::synapse0x3451da0() {
   return (neuron0x343a470()*0.127353);
}

double NNfunction_sb_uRsR::synapse0x3451de0() {
   return (neuron0x343a7b0()*-1.88114);
}

double NNfunction_sb_uRsR::synapse0x3451e20() {
   return (neuron0x343aaf0()*0.268711);
}

double NNfunction_sb_uRsR::synapse0x3451e60() {
   return (neuron0x343ae30()*0.0293137);
}

double NNfunction_sb_uRsR::synapse0x3451ea0() {
   return (neuron0x343b170()*0.149893);
}

double NNfunction_sb_uRsR::synapse0x3451ee0() {
   return (neuron0x343b4b0()*0.11852);
}

double NNfunction_sb_uRsR::synapse0x3451f20() {
   return (neuron0x343b7f0()*0.30578);
}

double NNfunction_sb_uRsR::synapse0x3451f60() {
   return (neuron0x343bb30()*-0.186874);
}

double NNfunction_sb_uRsR::synapse0x3451fa0() {
   return (neuron0x343be70()*-0.140439);
}

double NNfunction_sb_uRsR::synapse0x3451fe0() {
   return (neuron0x343c1b0()*0.245775);
}

double NNfunction_sb_uRsR::synapse0x3452020() {
   return (neuron0x343c4f0()*-0.182217);
}

double NNfunction_sb_uRsR::synapse0x3452060() {
   return (neuron0x343c830()*0.34667);
}

double NNfunction_sb_uRsR::synapse0x34520a0() {
   return (neuron0x343cb70()*-0.549292);
}

double NNfunction_sb_uRsR::synapse0x34520e0() {
   return (neuron0x343ceb0()*-0.0778082);
}

double NNfunction_sb_uRsR::synapse0x3451b70() {
   return (neuron0x343d1f0()*-0.0144556);
}

double NNfunction_sb_uRsR::synapse0x3451bb0() {
   return (neuron0x343d750()*-0.535076);
}

double NNfunction_sb_uRsR::synapse0x3452230() {
   return (neuron0x343da90()*-0.289037);
}

double NNfunction_sb_uRsR::synapse0x3452270() {
   return (neuron0x343ddd0()*-0.540382);
}

double NNfunction_sb_uRsR::synapse0x34522b0() {
   return (neuron0x343e110()*-0.0131412);
}

double NNfunction_sb_uRsR::synapse0x34522f0() {
   return (neuron0x343e450()*-0.0616384);
}

double NNfunction_sb_uRsR::synapse0x3452330() {
   return (neuron0x343e790()*-0.0984556);
}

double NNfunction_sb_uRsR::synapse0x3452370() {
   return (neuron0x343ead0()*-0.218265);
}

double NNfunction_sb_uRsR::synapse0x34526f0() {
   return (neuron0x3439e80()*0.00414096);
}

double NNfunction_sb_uRsR::synapse0x3452730() {
   return (neuron0x343a130()*0.702979);
}

double NNfunction_sb_uRsR::synapse0x3452770() {
   return (neuron0x343a470()*0.563503);
}

double NNfunction_sb_uRsR::synapse0x34527b0() {
   return (neuron0x343a7b0()*-0.245411);
}

double NNfunction_sb_uRsR::synapse0x34527f0() {
   return (neuron0x343aaf0()*0.188259);
}

double NNfunction_sb_uRsR::synapse0x3452830() {
   return (neuron0x343ae30()*-0.57769);
}

double NNfunction_sb_uRsR::synapse0x3452870() {
   return (neuron0x343b170()*-0.792779);
}

double NNfunction_sb_uRsR::synapse0x34528b0() {
   return (neuron0x343b4b0()*0.133719);
}

double NNfunction_sb_uRsR::synapse0x34528f0() {
   return (neuron0x343b7f0()*-0.574709);
}

double NNfunction_sb_uRsR::synapse0x3452930() {
   return (neuron0x343bb30()*0.160123);
}

double NNfunction_sb_uRsR::synapse0x3452970() {
   return (neuron0x343be70()*-0.0382635);
}

double NNfunction_sb_uRsR::synapse0x34529b0() {
   return (neuron0x343c1b0()*0.0207175);
}

double NNfunction_sb_uRsR::synapse0x34529f0() {
   return (neuron0x343c4f0()*-0.105613);
}

double NNfunction_sb_uRsR::synapse0x3452a30() {
   return (neuron0x343c830()*0.124971);
}

double NNfunction_sb_uRsR::synapse0x3452a70() {
   return (neuron0x343cb70()*-0.11293);
}

double NNfunction_sb_uRsR::synapse0x3452ab0() {
   return (neuron0x343ceb0()*-0.141622);
}

double NNfunction_sb_uRsR::synapse0x3452540() {
   return (neuron0x343d1f0()*-0.573401);
}

double NNfunction_sb_uRsR::synapse0x3452580() {
   return (neuron0x343d750()*-0.140548);
}

double NNfunction_sb_uRsR::synapse0x3452c00() {
   return (neuron0x343da90()*0.355114);
}

double NNfunction_sb_uRsR::synapse0x3452c40() {
   return (neuron0x343ddd0()*-0.207221);
}

double NNfunction_sb_uRsR::synapse0x3452c80() {
   return (neuron0x343e110()*-0.745251);
}

double NNfunction_sb_uRsR::synapse0x3452cc0() {
   return (neuron0x343e450()*0.0627492);
}

double NNfunction_sb_uRsR::synapse0x3452d00() {
   return (neuron0x343e790()*0.376746);
}

double NNfunction_sb_uRsR::synapse0x3452d40() {
   return (neuron0x343ead0()*0.119134);
}

double NNfunction_sb_uRsR::synapse0x34530c0() {
   return (neuron0x3439e80()*-0.318717);
}

double NNfunction_sb_uRsR::synapse0x3453100() {
   return (neuron0x343a130()*-0.822912);
}

double NNfunction_sb_uRsR::synapse0x3453140() {
   return (neuron0x343a470()*-0.344887);
}

double NNfunction_sb_uRsR::synapse0x3453180() {
   return (neuron0x343a7b0()*-0.149849);
}

double NNfunction_sb_uRsR::synapse0x34531c0() {
   return (neuron0x343aaf0()*-0.257844);
}

double NNfunction_sb_uRsR::synapse0x3453200() {
   return (neuron0x343ae30()*0.455882);
}

double NNfunction_sb_uRsR::synapse0x3453240() {
   return (neuron0x343b170()*1.37422);
}

double NNfunction_sb_uRsR::synapse0x3453280() {
   return (neuron0x343b4b0()*-0.0857075);
}

double NNfunction_sb_uRsR::synapse0x34532c0() {
   return (neuron0x343b7f0()*0.493396);
}

double NNfunction_sb_uRsR::synapse0x3453300() {
   return (neuron0x343bb30()*-0.0996198);
}

double NNfunction_sb_uRsR::synapse0x3453340() {
   return (neuron0x343be70()*0.208325);
}

double NNfunction_sb_uRsR::synapse0x3453380() {
   return (neuron0x343c1b0()*0.0594461);
}

double NNfunction_sb_uRsR::synapse0x34533c0() {
   return (neuron0x343c4f0()*0.474909);
}

double NNfunction_sb_uRsR::synapse0x3453400() {
   return (neuron0x343c830()*0.11123);
}

double NNfunction_sb_uRsR::synapse0x3453440() {
   return (neuron0x343cb70()*0.0990564);
}

double NNfunction_sb_uRsR::synapse0x3453480() {
   return (neuron0x343ceb0()*0.162217);
}

double NNfunction_sb_uRsR::synapse0x3452f10() {
   return (neuron0x343d1f0()*-0.166069);
}

double NNfunction_sb_uRsR::synapse0x3452f50() {
   return (neuron0x343d750()*-0.0845877);
}

double NNfunction_sb_uRsR::synapse0x34535d0() {
   return (neuron0x343da90()*0.121533);
}

double NNfunction_sb_uRsR::synapse0x3453610() {
   return (neuron0x343ddd0()*0.233471);
}

double NNfunction_sb_uRsR::synapse0x3453650() {
   return (neuron0x343e110()*-0.970603);
}

double NNfunction_sb_uRsR::synapse0x3453690() {
   return (neuron0x343e450()*0.0550657);
}

double NNfunction_sb_uRsR::synapse0x34536d0() {
   return (neuron0x343e790()*0.118586);
}

double NNfunction_sb_uRsR::synapse0x3453710() {
   return (neuron0x343ead0()*-0.0572561);
}

double NNfunction_sb_uRsR::synapse0x3453a90() {
   return (neuron0x3439e80()*-0.0154374);
}

double NNfunction_sb_uRsR::synapse0x3453ad0() {
   return (neuron0x343a130()*0.000625863);
}

double NNfunction_sb_uRsR::synapse0x3453b10() {
   return (neuron0x343a470()*0.00512604);
}

double NNfunction_sb_uRsR::synapse0x3453b50() {
   return (neuron0x343a7b0()*-4.35659);
}

double NNfunction_sb_uRsR::synapse0x3453b90() {
   return (neuron0x343aaf0()*0.00125991);
}

double NNfunction_sb_uRsR::synapse0x3453bd0() {
   return (neuron0x343ae30()*-0.0031024);
}

double NNfunction_sb_uRsR::synapse0x3453c10() {
   return (neuron0x343b170()*0.00119018);
}

double NNfunction_sb_uRsR::synapse0x3453c50() {
   return (neuron0x343b4b0()*-0.0088473);
}

double NNfunction_sb_uRsR::synapse0x3453c90() {
   return (neuron0x343b7f0()*0.00696814);
}

double NNfunction_sb_uRsR::synapse0x3453cd0() {
   return (neuron0x343bb30()*-0.0121527);
}

double NNfunction_sb_uRsR::synapse0x3453d10() {
   return (neuron0x343be70()*0.000250062);
}

double NNfunction_sb_uRsR::synapse0x3453d50() {
   return (neuron0x343c1b0()*0.00391896);
}

double NNfunction_sb_uRsR::synapse0x3453d90() {
   return (neuron0x343c4f0()*0.00194968);
}

double NNfunction_sb_uRsR::synapse0x3453dd0() {
   return (neuron0x343c830()*0.00245629);
}

double NNfunction_sb_uRsR::synapse0x3453e10() {
   return (neuron0x343cb70()*0.243642);
}

double NNfunction_sb_uRsR::synapse0x3453e50() {
   return (neuron0x343ceb0()*0.000543494);
}

double NNfunction_sb_uRsR::synapse0x34538e0() {
   return (neuron0x343d1f0()*0.00225728);
}

double NNfunction_sb_uRsR::synapse0x3453920() {
   return (neuron0x343d750()*0.00349808);
}

double NNfunction_sb_uRsR::synapse0x3453fa0() {
   return (neuron0x343da90()*0.20922);
}

double NNfunction_sb_uRsR::synapse0x3453fe0() {
   return (neuron0x343ddd0()*0.00566854);
}

double NNfunction_sb_uRsR::synapse0x3454020() {
   return (neuron0x343e110()*0.0152637);
}

double NNfunction_sb_uRsR::synapse0x3454060() {
   return (neuron0x343e450()*0.00959727);
}

double NNfunction_sb_uRsR::synapse0x34540a0() {
   return (neuron0x343e790()*0.00245316);
}

double NNfunction_sb_uRsR::synapse0x34540e0() {
   return (neuron0x343ead0()*-0.0031859);
}

double NNfunction_sb_uRsR::synapse0x3454460() {
   return (neuron0x3439e80()*0.0479308);
}

double NNfunction_sb_uRsR::synapse0x34544a0() {
   return (neuron0x343a130()*-0.022929);
}

double NNfunction_sb_uRsR::synapse0x34544e0() {
   return (neuron0x343a470()*-0.0869432);
}

double NNfunction_sb_uRsR::synapse0x3454520() {
   return (neuron0x343a7b0()*1.20286);
}

double NNfunction_sb_uRsR::synapse0x3454560() {
   return (neuron0x343aaf0()*-0.149134);
}

double NNfunction_sb_uRsR::synapse0x34545a0() {
   return (neuron0x343ae30()*0.0427231);
}

double NNfunction_sb_uRsR::synapse0x34545e0() {
   return (neuron0x343b170()*-0.102385);
}

double NNfunction_sb_uRsR::synapse0x3454620() {
   return (neuron0x343b4b0()*0.104765);
}

double NNfunction_sb_uRsR::synapse0x3454660() {
   return (neuron0x343b7f0()*-0.0248762);
}

double NNfunction_sb_uRsR::synapse0x34546a0() {
   return (neuron0x343bb30()*0.0897974);
}

double NNfunction_sb_uRsR::synapse0x34546e0() {
   return (neuron0x343be70()*0.0444639);
}

double NNfunction_sb_uRsR::synapse0x3454720() {
   return (neuron0x343c1b0()*-0.266264);
}

double NNfunction_sb_uRsR::synapse0x3454760() {
   return (neuron0x343c4f0()*-0.234445);
}

double NNfunction_sb_uRsR::synapse0x34547a0() {
   return (neuron0x343c830()*0.0759521);
}

double NNfunction_sb_uRsR::synapse0x34547e0() {
   return (neuron0x343cb70()*-1.24578);
}

double NNfunction_sb_uRsR::synapse0x3454820() {
   return (neuron0x343ceb0()*-0.0465926);
}

double NNfunction_sb_uRsR::synapse0x34542b0() {
   return (neuron0x343d1f0()*0.0717853);
}

double NNfunction_sb_uRsR::synapse0x34542f0() {
   return (neuron0x343d750()*-0.0466918);
}

double NNfunction_sb_uRsR::synapse0x3454970() {
   return (neuron0x343da90()*-0.684386);
}

double NNfunction_sb_uRsR::synapse0x34549b0() {
   return (neuron0x343ddd0()*-0.0446442);
}

double NNfunction_sb_uRsR::synapse0x34549f0() {
   return (neuron0x343e110()*-0.0762814);
}

double NNfunction_sb_uRsR::synapse0x3454a30() {
   return (neuron0x343e450()*-0.0915553);
}

double NNfunction_sb_uRsR::synapse0x3454a70() {
   return (neuron0x343e790()*-0.0595914);
}

double NNfunction_sb_uRsR::synapse0x3454ab0() {
   return (neuron0x343ead0()*0.0881853);
}

double NNfunction_sb_uRsR::synapse0x3454e30() {
   return (neuron0x3439e80()*0.251515);
}

double NNfunction_sb_uRsR::synapse0x3454e70() {
   return (neuron0x343a130()*0.069027);
}

double NNfunction_sb_uRsR::synapse0x3454eb0() {
   return (neuron0x343a470()*-0.385375);
}

double NNfunction_sb_uRsR::synapse0x3454ef0() {
   return (neuron0x343a7b0()*-1.89817);
}

double NNfunction_sb_uRsR::synapse0x3454f30() {
   return (neuron0x343aaf0()*-0.0950983);
}

double NNfunction_sb_uRsR::synapse0x3454f70() {
   return (neuron0x343ae30()*0.017466);
}

double NNfunction_sb_uRsR::synapse0x3454fb0() {
   return (neuron0x343b170()*0.31477);
}

double NNfunction_sb_uRsR::synapse0x3454ff0() {
   return (neuron0x343b4b0()*0.126472);
}

double NNfunction_sb_uRsR::synapse0x3455030() {
   return (neuron0x343b7f0()*-0.163711);
}

double NNfunction_sb_uRsR::synapse0x3455070() {
   return (neuron0x343bb30()*-0.431382);
}

double NNfunction_sb_uRsR::synapse0x34550b0() {
   return (neuron0x343be70()*0.39626);
}

double NNfunction_sb_uRsR::synapse0x34550f0() {
   return (neuron0x343c1b0()*-0.0401781);
}

double NNfunction_sb_uRsR::synapse0x3455130() {
   return (neuron0x343c4f0()*0.372307);
}

double NNfunction_sb_uRsR::synapse0x3455170() {
   return (neuron0x343c830()*0.125049);
}

double NNfunction_sb_uRsR::synapse0x34551b0() {
   return (neuron0x343cb70()*-0.593318);
}

double NNfunction_sb_uRsR::synapse0x34551f0() {
   return (neuron0x343ceb0()*-0.0647957);
}

double NNfunction_sb_uRsR::synapse0x3454c80() {
   return (neuron0x343d1f0()*-0.0522445);
}

double NNfunction_sb_uRsR::synapse0x3454cc0() {
   return (neuron0x343d750()*0.259424);
}

double NNfunction_sb_uRsR::synapse0x3455340() {
   return (neuron0x343da90()*-0.85252);
}

double NNfunction_sb_uRsR::synapse0x3455380() {
   return (neuron0x343ddd0()*0.879387);
}

double NNfunction_sb_uRsR::synapse0x34553c0() {
   return (neuron0x343e110()*-0.00571782);
}

double NNfunction_sb_uRsR::synapse0x3455400() {
   return (neuron0x343e450()*0.118817);
}

double NNfunction_sb_uRsR::synapse0x3455440() {
   return (neuron0x343e790()*0.0688898);
}

double NNfunction_sb_uRsR::synapse0x3455480() {
   return (neuron0x343ead0()*-0.270125);
}

double NNfunction_sb_uRsR::synapse0x3455800() {
   return (neuron0x3439e80()*-0.338028);
}

double NNfunction_sb_uRsR::synapse0x3449dd0() {
   return (neuron0x343a130()*-0.737134);
}

double NNfunction_sb_uRsR::synapse0x3449e10() {
   return (neuron0x343a470()*0.304055);
}

double NNfunction_sb_uRsR::synapse0x3449e50() {
   return (neuron0x343a7b0()*0.108009);
}

double NNfunction_sb_uRsR::synapse0x344a0a0() {
   return (neuron0x343aaf0()*0.695009);
}

double NNfunction_sb_uRsR::synapse0x344a0e0() {
   return (neuron0x343ae30()*-0.793962);
}

double NNfunction_sb_uRsR::synapse0x344a120() {
   return (neuron0x343b170()*0.159965);
}

double NNfunction_sb_uRsR::synapse0x344a370() {
   return (neuron0x343b4b0()*0.103881);
}

double NNfunction_sb_uRsR::synapse0x344a3b0() {
   return (neuron0x343b7f0()*-0.267805);
}

double NNfunction_sb_uRsR::synapse0x344a600() {
   return (neuron0x343bb30()*-0.519189);
}

double NNfunction_sb_uRsR::synapse0x344a640() {
   return (neuron0x343be70()*-0.425208);
}

double NNfunction_sb_uRsR::synapse0x344a680() {
   return (neuron0x343c1b0()*0.0871877);
}

double NNfunction_sb_uRsR::synapse0x344a8d0() {
   return (neuron0x343c4f0()*-0.613087);
}

double NNfunction_sb_uRsR::synapse0x344a910() {
   return (neuron0x343c830()*0.551602);
}

double NNfunction_sb_uRsR::synapse0x344ab60() {
   return (neuron0x343cb70()*-0.539662);
}

double NNfunction_sb_uRsR::synapse0x344aba0() {
   return (neuron0x343ceb0()*-0.13821);
}

double NNfunction_sb_uRsR::synapse0x3455650() {
   return (neuron0x343d1f0()*-0.355665);
}

double NNfunction_sb_uRsR::synapse0x3455690() {
   return (neuron0x343d750()*0.656203);
}

double NNfunction_sb_uRsR::synapse0x344acf0() {
   return (neuron0x343da90()*0.278856);
}

double NNfunction_sb_uRsR::synapse0x344b200() {
   return (neuron0x343ddd0()*-0.227778);
}

double NNfunction_sb_uRsR::synapse0x344b240() {
   return (neuron0x343e110()*0.22748);
}

double NNfunction_sb_uRsR::synapse0x344b280() {
   return (neuron0x343e450()*-0.0440196);
}

double NNfunction_sb_uRsR::synapse0x344b4d0() {
   return (neuron0x343e790()*0.409299);
}

double NNfunction_sb_uRsR::synapse0x344b510() {
   return (neuron0x343ead0()*-0.287286);
}

double NNfunction_sb_uRsR::synapse0x344adc0() {
   return (neuron0x3439e80()*-0.212485);
}

double NNfunction_sb_uRsR::synapse0x344ae00() {
   return (neuron0x343a130()*-0.0937114);
}

double NNfunction_sb_uRsR::synapse0x344ae40() {
   return (neuron0x343a470()*0.448415);
}

double NNfunction_sb_uRsR::synapse0x344ae80() {
   return (neuron0x343a7b0()*-0.453737);
}

double NNfunction_sb_uRsR::synapse0x344b800() {
   return (neuron0x343aaf0()*-0.346382);
}

double NNfunction_sb_uRsR::synapse0x3457b50() {
   return (neuron0x343ae30()*-0.251033);
}

double NNfunction_sb_uRsR::synapse0x3457b90() {
   return (neuron0x343b170()*0.0380327);
}

double NNfunction_sb_uRsR::synapse0x3457bd0() {
   return (neuron0x343b4b0()*-0.28431);
}

double NNfunction_sb_uRsR::synapse0x3457c10() {
   return (neuron0x343b7f0()*0.408535);
}

double NNfunction_sb_uRsR::synapse0x3457c50() {
   return (neuron0x343bb30()*0.155037);
}

double NNfunction_sb_uRsR::synapse0x3457c90() {
   return (neuron0x343be70()*-0.0164952);
}

double NNfunction_sb_uRsR::synapse0x3457cd0() {
   return (neuron0x343c1b0()*0.434227);
}

double NNfunction_sb_uRsR::synapse0x3457d10() {
   return (neuron0x343c4f0()*0.569311);
}

double NNfunction_sb_uRsR::synapse0x3457d50() {
   return (neuron0x343c830()*-0.317476);
}

double NNfunction_sb_uRsR::synapse0x3457d90() {
   return (neuron0x343cb70()*0.473405);
}

double NNfunction_sb_uRsR::synapse0x3457dd0() {
   return (neuron0x343ceb0()*-0.496515);
}

double NNfunction_sb_uRsR::synapse0x344b6e0() {
   return (neuron0x343d1f0()*0.202946);
}

double NNfunction_sb_uRsR::synapse0x344b720() {
   return (neuron0x343d750()*-0.149607);
}

double NNfunction_sb_uRsR::synapse0x3457f20() {
   return (neuron0x343da90()*0.556467);
}

double NNfunction_sb_uRsR::synapse0x3457f60() {
   return (neuron0x343ddd0()*-0.191603);
}

double NNfunction_sb_uRsR::synapse0x3457fa0() {
   return (neuron0x343e110()*-0.534943);
}

double NNfunction_sb_uRsR::synapse0x3457fe0() {
   return (neuron0x343e450()*0.0833643);
}

double NNfunction_sb_uRsR::synapse0x3458020() {
   return (neuron0x343e790()*0.00680345);
}

double NNfunction_sb_uRsR::synapse0x3458060() {
   return (neuron0x343ead0()*-0.0128759);
}

double NNfunction_sb_uRsR::synapse0x34583e0() {
   return (neuron0x3439e80()*0.591222);
}

double NNfunction_sb_uRsR::synapse0x3458420() {
   return (neuron0x343a130()*0.122417);
}

double NNfunction_sb_uRsR::synapse0x3458460() {
   return (neuron0x343a470()*-0.841302);
}

double NNfunction_sb_uRsR::synapse0x34584a0() {
   return (neuron0x343a7b0()*-0.615396);
}

double NNfunction_sb_uRsR::synapse0x34584e0() {
   return (neuron0x343aaf0()*0.206439);
}

double NNfunction_sb_uRsR::synapse0x3458520() {
   return (neuron0x343ae30()*-0.108611);
}

double NNfunction_sb_uRsR::synapse0x3458560() {
   return (neuron0x343b170()*0.173155);
}

double NNfunction_sb_uRsR::synapse0x34585a0() {
   return (neuron0x343b4b0()*0.00626121);
}

double NNfunction_sb_uRsR::synapse0x34585e0() {
   return (neuron0x343b7f0()*-0.171951);
}

double NNfunction_sb_uRsR::synapse0x3458620() {
   return (neuron0x343bb30()*0.302009);
}

double NNfunction_sb_uRsR::synapse0x3458660() {
   return (neuron0x343be70()*-0.330135);
}

double NNfunction_sb_uRsR::synapse0x34586a0() {
   return (neuron0x343c1b0()*0.486655);
}

double NNfunction_sb_uRsR::synapse0x34586e0() {
   return (neuron0x343c4f0()*0.849474);
}

double NNfunction_sb_uRsR::synapse0x3458720() {
   return (neuron0x343c830()*-0.221579);
}

double NNfunction_sb_uRsR::synapse0x3458760() {
   return (neuron0x343cb70()*-0.0740181);
}

double NNfunction_sb_uRsR::synapse0x34587a0() {
   return (neuron0x343ceb0()*-0.518946);
}

double NNfunction_sb_uRsR::synapse0x3458230() {
   return (neuron0x343d1f0()*0.00260356);
}

double NNfunction_sb_uRsR::synapse0x3458270() {
   return (neuron0x343d750()*0.058136);
}

double NNfunction_sb_uRsR::synapse0x34588f0() {
   return (neuron0x343da90()*0.00978417);
}

double NNfunction_sb_uRsR::synapse0x3458930() {
   return (neuron0x343ddd0()*0.224643);
}

double NNfunction_sb_uRsR::synapse0x3458970() {
   return (neuron0x343e110()*0.494276);
}

double NNfunction_sb_uRsR::synapse0x34589b0() {
   return (neuron0x343e450()*-0.00583731);
}

double NNfunction_sb_uRsR::synapse0x34589f0() {
   return (neuron0x343e790()*-0.261069);
}

double NNfunction_sb_uRsR::synapse0x3458a30() {
   return (neuron0x343ead0()*0.0109604);
}

double NNfunction_sb_uRsR::synapse0x3458db0() {
   return (neuron0x3439e80()*0.732976);
}

double NNfunction_sb_uRsR::synapse0x3458df0() {
   return (neuron0x343a130()*-0.176486);
}

double NNfunction_sb_uRsR::synapse0x3458e30() {
   return (neuron0x343a470()*-1.30445);
}

double NNfunction_sb_uRsR::synapse0x3458e70() {
   return (neuron0x343a7b0()*0.517815);
}

double NNfunction_sb_uRsR::synapse0x3458eb0() {
   return (neuron0x343aaf0()*0.0530447);
}

double NNfunction_sb_uRsR::synapse0x3458ef0() {
   return (neuron0x343ae30()*0.374186);
}

double NNfunction_sb_uRsR::synapse0x3458f30() {
   return (neuron0x343b170()*0.563288);
}

double NNfunction_sb_uRsR::synapse0x3458f70() {
   return (neuron0x343b4b0()*1.33153);
}

double NNfunction_sb_uRsR::synapse0x3458fb0() {
   return (neuron0x343b7f0()*0.0411921);
}

double NNfunction_sb_uRsR::synapse0x3458ff0() {
   return (neuron0x343bb30()*0.508552);
}

double NNfunction_sb_uRsR::synapse0x3459030() {
   return (neuron0x343be70()*0.350613);
}

double NNfunction_sb_uRsR::synapse0x3459070() {
   return (neuron0x343c1b0()*0.665588);
}

double NNfunction_sb_uRsR::synapse0x34590b0() {
   return (neuron0x343c4f0()*0.374755);
}

double NNfunction_sb_uRsR::synapse0x34590f0() {
   return (neuron0x343c830()*0.268355);
}

double NNfunction_sb_uRsR::synapse0x3459130() {
   return (neuron0x343cb70()*0.250976);
}

double NNfunction_sb_uRsR::synapse0x3459170() {
   return (neuron0x343ceb0()*-0.463388);
}

double NNfunction_sb_uRsR::synapse0x3458c00() {
   return (neuron0x343d1f0()*0.743209);
}

double NNfunction_sb_uRsR::synapse0x3458c40() {
   return (neuron0x343d750()*-0.0422968);
}

double NNfunction_sb_uRsR::synapse0x34592c0() {
   return (neuron0x343da90()*-0.0120861);
}

double NNfunction_sb_uRsR::synapse0x3459300() {
   return (neuron0x343ddd0()*-0.117361);
}

double NNfunction_sb_uRsR::synapse0x3459340() {
   return (neuron0x343e110()*0.558081);
}

double NNfunction_sb_uRsR::synapse0x3459380() {
   return (neuron0x343e450()*-0.228653);
}

double NNfunction_sb_uRsR::synapse0x34593c0() {
   return (neuron0x343e790()*-0.396388);
}

double NNfunction_sb_uRsR::synapse0x3459400() {
   return (neuron0x343ead0()*-0.126);
}

double NNfunction_sb_uRsR::synapse0x3459780() {
   return (neuron0x3439e80()*0.00800716);
}

double NNfunction_sb_uRsR::synapse0x34597c0() {
   return (neuron0x343a130()*0.00483334);
}

double NNfunction_sb_uRsR::synapse0x3459800() {
   return (neuron0x343a470()*0.00464618);
}

double NNfunction_sb_uRsR::synapse0x3459840() {
   return (neuron0x343a7b0()*-0.151153);
}

double NNfunction_sb_uRsR::synapse0x3459880() {
   return (neuron0x343aaf0()*0.00457451);
}

double NNfunction_sb_uRsR::synapse0x34598c0() {
   return (neuron0x343ae30()*-0.00588966);
}

double NNfunction_sb_uRsR::synapse0x3459900() {
   return (neuron0x343b170()*0.00871041);
}

double NNfunction_sb_uRsR::synapse0x3459940() {
   return (neuron0x343b4b0()*0.00254281);
}

double NNfunction_sb_uRsR::synapse0x3459980() {
   return (neuron0x343b7f0()*-0.00381129);
}

double NNfunction_sb_uRsR::synapse0x34599c0() {
   return (neuron0x343bb30()*-0.00177779);
}

double NNfunction_sb_uRsR::synapse0x3459a00() {
   return (neuron0x343be70()*-0.00477194);
}

double NNfunction_sb_uRsR::synapse0x3459a40() {
   return (neuron0x343c1b0()*0.00939345);
}

double NNfunction_sb_uRsR::synapse0x3459a80() {
   return (neuron0x343c4f0()*0.013028);
}

double NNfunction_sb_uRsR::synapse0x3459ac0() {
   return (neuron0x343c830()*0.00909502);
}

double NNfunction_sb_uRsR::synapse0x3459b00() {
   return (neuron0x343cb70()*-0.581236);
}

double NNfunction_sb_uRsR::synapse0x3459b40() {
   return (neuron0x343ceb0()*0.00832609);
}

double NNfunction_sb_uRsR::synapse0x34595d0() {
   return (neuron0x343d1f0()*-0.0043782);
}

double NNfunction_sb_uRsR::synapse0x3459610() {
   return (neuron0x343d750()*0.0278953);
}

double NNfunction_sb_uRsR::synapse0x3459c90() {
   return (neuron0x343da90()*0.746644);
}

double NNfunction_sb_uRsR::synapse0x3459cd0() {
   return (neuron0x343ddd0()*-0.010074);
}

double NNfunction_sb_uRsR::synapse0x3459d10() {
   return (neuron0x343e110()*0.01448);
}

double NNfunction_sb_uRsR::synapse0x3459d50() {
   return (neuron0x343e450()*0.0047406);
}

double NNfunction_sb_uRsR::synapse0x3459d90() {
   return (neuron0x343e790()*-0.0170178);
}

double NNfunction_sb_uRsR::synapse0x3459dd0() {
   return (neuron0x343ead0()*-0.00954271);
}

double NNfunction_sb_uRsR::synapse0x345a150() {
   return (neuron0x3439e80()*0.116693);
}

double NNfunction_sb_uRsR::synapse0x345a190() {
   return (neuron0x343a130()*0.426313);
}

double NNfunction_sb_uRsR::synapse0x345a1d0() {
   return (neuron0x343a470()*-0.556317);
}

double NNfunction_sb_uRsR::synapse0x345a210() {
   return (neuron0x343a7b0()*0.427814);
}

double NNfunction_sb_uRsR::synapse0x345a250() {
   return (neuron0x343aaf0()*0.120115);
}

double NNfunction_sb_uRsR::synapse0x345a290() {
   return (neuron0x343ae30()*-1.19279);
}

double NNfunction_sb_uRsR::synapse0x345a2d0() {
   return (neuron0x343b170()*0.154702);
}

double NNfunction_sb_uRsR::synapse0x345a310() {
   return (neuron0x343b4b0()*-0.108437);
}

double NNfunction_sb_uRsR::synapse0x345a350() {
   return (neuron0x343b7f0()*0.347843);
}

double NNfunction_sb_uRsR::synapse0x345a390() {
   return (neuron0x343bb30()*-0.33004);
}

double NNfunction_sb_uRsR::synapse0x345a3d0() {
   return (neuron0x343be70()*-1.04276);
}

double NNfunction_sb_uRsR::synapse0x345a410() {
   return (neuron0x343c1b0()*-0.139376);
}

double NNfunction_sb_uRsR::synapse0x345a450() {
   return (neuron0x343c4f0()*-0.360949);
}

double NNfunction_sb_uRsR::synapse0x345a490() {
   return (neuron0x343c830()*-0.0649803);
}

double NNfunction_sb_uRsR::synapse0x345a4d0() {
   return (neuron0x343cb70()*0.441724);
}

double NNfunction_sb_uRsR::synapse0x345a510() {
   return (neuron0x343ceb0()*0.147216);
}

double NNfunction_sb_uRsR::synapse0x3459fa0() {
   return (neuron0x343d1f0()*-0.353256);
}

double NNfunction_sb_uRsR::synapse0x3459fe0() {
   return (neuron0x343d750()*-0.283576);
}

double NNfunction_sb_uRsR::synapse0x345a660() {
   return (neuron0x343da90()*-0.650367);
}

double NNfunction_sb_uRsR::synapse0x345a6a0() {
   return (neuron0x343ddd0()*-0.59379);
}

double NNfunction_sb_uRsR::synapse0x345a6e0() {
   return (neuron0x343e110()*0.507592);
}

double NNfunction_sb_uRsR::synapse0x345a720() {
   return (neuron0x343e450()*0.00160122);
}

double NNfunction_sb_uRsR::synapse0x345a760() {
   return (neuron0x343e790()*-0.0363851);
}

double NNfunction_sb_uRsR::synapse0x345a7a0() {
   return (neuron0x343ead0()*-1.12229);
}

double NNfunction_sb_uRsR::synapse0x345ab20() {
   return (neuron0x3439e80()*0.0727073);
}

double NNfunction_sb_uRsR::synapse0x345ab60() {
   return (neuron0x343a130()*0.224828);
}

double NNfunction_sb_uRsR::synapse0x345aba0() {
   return (neuron0x343a470()*0.102477);
}

double NNfunction_sb_uRsR::synapse0x345abe0() {
   return (neuron0x343a7b0()*-1.01739);
}

double NNfunction_sb_uRsR::synapse0x345ac20() {
   return (neuron0x343aaf0()*-0.180832);
}

double NNfunction_sb_uRsR::synapse0x345ac60() {
   return (neuron0x343ae30()*0.163895);
}

double NNfunction_sb_uRsR::synapse0x345aca0() {
   return (neuron0x343b170()*-0.0784683);
}

double NNfunction_sb_uRsR::synapse0x345ace0() {
   return (neuron0x343b4b0()*0.122183);
}

double NNfunction_sb_uRsR::synapse0x345ad20() {
   return (neuron0x343b7f0()*0.763624);
}

double NNfunction_sb_uRsR::synapse0x345ad60() {
   return (neuron0x343bb30()*0.0586018);
}

double NNfunction_sb_uRsR::synapse0x345ada0() {
   return (neuron0x343be70()*-0.367782);
}

double NNfunction_sb_uRsR::synapse0x345ade0() {
   return (neuron0x343c1b0()*0.0260731);
}

double NNfunction_sb_uRsR::synapse0x345ae20() {
   return (neuron0x343c4f0()*0.340857);
}

double NNfunction_sb_uRsR::synapse0x345ae60() {
   return (neuron0x343c830()*0.218028);
}

double NNfunction_sb_uRsR::synapse0x345aea0() {
   return (neuron0x343cb70()*-0.117179);
}

double NNfunction_sb_uRsR::synapse0x345aee0() {
   return (neuron0x343ceb0()*-1.08955);
}

double NNfunction_sb_uRsR::synapse0x345a970() {
   return (neuron0x343d1f0()*0.233751);
}

double NNfunction_sb_uRsR::synapse0x345a9b0() {
   return (neuron0x343d750()*0.618525);
}

double NNfunction_sb_uRsR::synapse0x345b030() {
   return (neuron0x343da90()*-0.0187861);
}

double NNfunction_sb_uRsR::synapse0x345b070() {
   return (neuron0x343ddd0()*0.455291);
}

double NNfunction_sb_uRsR::synapse0x345b0b0() {
   return (neuron0x343e110()*-0.436113);
}

double NNfunction_sb_uRsR::synapse0x345b0f0() {
   return (neuron0x343e450()*-0.250452);
}

double NNfunction_sb_uRsR::synapse0x345b130() {
   return (neuron0x343e790()*-0.290004);
}

double NNfunction_sb_uRsR::synapse0x345b170() {
   return (neuron0x343ead0()*1.12662);
}

double NNfunction_sb_uRsR::synapse0x345b4f0() {
   return (neuron0x3439e80()*0.0584753);
}

double NNfunction_sb_uRsR::synapse0x345b530() {
   return (neuron0x343a130()*0.034953);
}

double NNfunction_sb_uRsR::synapse0x345b570() {
   return (neuron0x343a470()*-0.0618297);
}

double NNfunction_sb_uRsR::synapse0x345b5b0() {
   return (neuron0x343a7b0()*-0.408309);
}

double NNfunction_sb_uRsR::synapse0x345b5f0() {
   return (neuron0x343aaf0()*-0.0470165);
}

double NNfunction_sb_uRsR::synapse0x345b630() {
   return (neuron0x343ae30()*-0.0381502);
}

double NNfunction_sb_uRsR::synapse0x345b670() {
   return (neuron0x343b170()*0.002333);
}

double NNfunction_sb_uRsR::synapse0x345b6b0() {
   return (neuron0x343b4b0()*-0.0363036);
}

double NNfunction_sb_uRsR::synapse0x345b6f0() {
   return (neuron0x343b7f0()*-0.00259587);
}

double NNfunction_sb_uRsR::synapse0x345b730() {
   return (neuron0x343bb30()*0.0337758);
}

double NNfunction_sb_uRsR::synapse0x345b770() {
   return (neuron0x343be70()*-0.0336356);
}

double NNfunction_sb_uRsR::synapse0x345b7b0() {
   return (neuron0x343c1b0()*-0.0381929);
}

double NNfunction_sb_uRsR::synapse0x345b7f0() {
   return (neuron0x343c4f0()*-0.0252502);
}

double NNfunction_sb_uRsR::synapse0x345b830() {
   return (neuron0x343c830()*0.0565157);
}

double NNfunction_sb_uRsR::synapse0x345b870() {
   return (neuron0x343cb70()*1.07792);
}

double NNfunction_sb_uRsR::synapse0x345b8b0() {
   return (neuron0x343ceb0()*-0.0384376);
}

double NNfunction_sb_uRsR::synapse0x345b340() {
   return (neuron0x343d1f0()*0.0519854);
}

double NNfunction_sb_uRsR::synapse0x345b380() {
   return (neuron0x343d750()*0.0642022);
}

double NNfunction_sb_uRsR::synapse0x345ba00() {
   return (neuron0x343da90()*-0.655797);
}

double NNfunction_sb_uRsR::synapse0x345ba40() {
   return (neuron0x343ddd0()*0.00519211);
}

double NNfunction_sb_uRsR::synapse0x345ba80() {
   return (neuron0x343e110()*0.0297288);
}

double NNfunction_sb_uRsR::synapse0x345bac0() {
   return (neuron0x343e450()*0.0136573);
}

double NNfunction_sb_uRsR::synapse0x345bb00() {
   return (neuron0x343e790()*-0.0785601);
}

double NNfunction_sb_uRsR::synapse0x345bb40() {
   return (neuron0x343ead0()*-0.100048);
}

double NNfunction_sb_uRsR::synapse0x345bec0() {
   return (neuron0x3439e80()*0.00886746);
}

double NNfunction_sb_uRsR::synapse0x345bf00() {
   return (neuron0x343a130()*-0.463929);
}

double NNfunction_sb_uRsR::synapse0x345bf40() {
   return (neuron0x343a470()*-0.163821);
}

double NNfunction_sb_uRsR::synapse0x345bf80() {
   return (neuron0x343a7b0()*-1.03365);
}

double NNfunction_sb_uRsR::synapse0x345bfc0() {
   return (neuron0x343aaf0()*0.0299697);
}

double NNfunction_sb_uRsR::synapse0x345c000() {
   return (neuron0x343ae30()*-0.137527);
}

double NNfunction_sb_uRsR::synapse0x345c040() {
   return (neuron0x343b170()*-0.110334);
}

double NNfunction_sb_uRsR::synapse0x345c080() {
   return (neuron0x343b4b0()*-0.188651);
}

double NNfunction_sb_uRsR::synapse0x345c0c0() {
   return (neuron0x343b7f0()*-0.0139742);
}

double NNfunction_sb_uRsR::synapse0x345c100() {
   return (neuron0x343bb30()*0.121002);
}

double NNfunction_sb_uRsR::synapse0x345c140() {
   return (neuron0x343be70()*-0.0852247);
}

double NNfunction_sb_uRsR::synapse0x345c180() {
   return (neuron0x343c1b0()*-0.418555);
}

double NNfunction_sb_uRsR::synapse0x345c1c0() {
   return (neuron0x343c4f0()*-0.413788);
}

double NNfunction_sb_uRsR::synapse0x345c200() {
   return (neuron0x343c830()*-0.122744);
}

double NNfunction_sb_uRsR::synapse0x345c240() {
   return (neuron0x343cb70()*-0.17672);
}

double NNfunction_sb_uRsR::synapse0x345c280() {
   return (neuron0x343ceb0()*-0.323136);
}

double NNfunction_sb_uRsR::synapse0x345bd10() {
   return (neuron0x343d1f0()*0.155092);
}

double NNfunction_sb_uRsR::synapse0x345bd50() {
   return (neuron0x343d750()*-0.225042);
}

double NNfunction_sb_uRsR::synapse0x345c3d0() {
   return (neuron0x343da90()*-0.662198);
}

double NNfunction_sb_uRsR::synapse0x345c410() {
   return (neuron0x343ddd0()*-0.0805352);
}

double NNfunction_sb_uRsR::synapse0x345c450() {
   return (neuron0x343e110()*0.169015);
}

double NNfunction_sb_uRsR::synapse0x345c490() {
   return (neuron0x343e450()*0.0808299);
}

double NNfunction_sb_uRsR::synapse0x345c4d0() {
   return (neuron0x343e790()*-0.221571);
}

double NNfunction_sb_uRsR::synapse0x345c510() {
   return (neuron0x343ead0()*0.0754645);
}

double NNfunction_sb_uRsR::synapse0x3444fc0() {
   return (neuron0x3439e80()*-0.0203592);
}

double NNfunction_sb_uRsR::synapse0x3445000() {
   return (neuron0x343a130()*0.000271734);
}

double NNfunction_sb_uRsR::synapse0x3445040() {
   return (neuron0x343a470()*0.00734984);
}

double NNfunction_sb_uRsR::synapse0x3445080() {
   return (neuron0x343a7b0()*-0.0298065);
}

double NNfunction_sb_uRsR::synapse0x34450c0() {
   return (neuron0x343aaf0()*0.0134791);
}

double NNfunction_sb_uRsR::synapse0x3445100() {
   return (neuron0x343ae30()*-0.00397742);
}

double NNfunction_sb_uRsR::synapse0x3445140() {
   return (neuron0x343b170()*-0.00296414);
}

double NNfunction_sb_uRsR::synapse0x3445180() {
   return (neuron0x343b4b0()*-0.000324954);
}

double NNfunction_sb_uRsR::synapse0x345cca0() {
   return (neuron0x343b7f0()*0.0026576);
}

double NNfunction_sb_uRsR::synapse0x345cce0() {
   return (neuron0x343bb30()*0.00659261);
}

double NNfunction_sb_uRsR::synapse0x345cd20() {
   return (neuron0x343be70()*-0.0135595);
}

double NNfunction_sb_uRsR::synapse0x345cd60() {
   return (neuron0x343c1b0()*-0.0135518);
}

double NNfunction_sb_uRsR::synapse0x345cda0() {
   return (neuron0x343c4f0()*0.00203011);
}

double NNfunction_sb_uRsR::synapse0x345cde0() {
   return (neuron0x343c830()*-0.00174698);
}

double NNfunction_sb_uRsR::synapse0x345ce20() {
   return (neuron0x343cb70()*-1.05231);
}

double NNfunction_sb_uRsR::synapse0x345ce60() {
   return (neuron0x343ceb0()*-0.0088365);
}

double NNfunction_sb_uRsR::synapse0x345c6e0() {
   return (neuron0x343d1f0()*-0.022905);
}

double NNfunction_sb_uRsR::synapse0x345c720() {
   return (neuron0x343d750()*0.0164167);
}

double NNfunction_sb_uRsR::synapse0x345cfb0() {
   return (neuron0x343da90()*0.265246);
}

double NNfunction_sb_uRsR::synapse0x345cff0() {
   return (neuron0x343ddd0()*-0.00440074);
}

double NNfunction_sb_uRsR::synapse0x345d030() {
   return (neuron0x343e110()*-0.0114856);
}

double NNfunction_sb_uRsR::synapse0x345d070() {
   return (neuron0x343e450()*0.00504343);
}

double NNfunction_sb_uRsR::synapse0x345d0b0() {
   return (neuron0x343e790()*0.000670408);
}

double NNfunction_sb_uRsR::synapse0x345d0f0() {
   return (neuron0x343ead0()*0.0177259);
}

double NNfunction_sb_uRsR::synapse0x345d470() {
   return (neuron0x3439e80()*0.0319634);
}

double NNfunction_sb_uRsR::synapse0x345d4b0() {
   return (neuron0x343a130()*-0.0963283);
}

double NNfunction_sb_uRsR::synapse0x345d4f0() {
   return (neuron0x343a470()*-0.0171196);
}

double NNfunction_sb_uRsR::synapse0x345d530() {
   return (neuron0x343a7b0()*-3.63124);
}

double NNfunction_sb_uRsR::synapse0x345d570() {
   return (neuron0x343aaf0()*0.041032);
}

double NNfunction_sb_uRsR::synapse0x345d5b0() {
   return (neuron0x343ae30()*-0.0224753);
}

double NNfunction_sb_uRsR::synapse0x345d5f0() {
   return (neuron0x343b170()*0.00756628);
}

double NNfunction_sb_uRsR::synapse0x345d630() {
   return (neuron0x343b4b0()*0.0353969);
}

double NNfunction_sb_uRsR::synapse0x345d670() {
   return (neuron0x343b7f0()*-0.0432783);
}

double NNfunction_sb_uRsR::synapse0x345d6b0() {
   return (neuron0x343bb30()*-0.0641901);
}

double NNfunction_sb_uRsR::synapse0x345d6f0() {
   return (neuron0x343be70()*-0.057429);
}

double NNfunction_sb_uRsR::synapse0x345d730() {
   return (neuron0x343c1b0()*0.0769103);
}

double NNfunction_sb_uRsR::synapse0x345d770() {
   return (neuron0x343c4f0()*0.00144871);
}

double NNfunction_sb_uRsR::synapse0x345d7b0() {
   return (neuron0x343c830()*-0.0575533);
}

double NNfunction_sb_uRsR::synapse0x345d7f0() {
   return (neuron0x343cb70()*1.08888);
}

double NNfunction_sb_uRsR::synapse0x345d830() {
   return (neuron0x343ceb0()*-0.0283381);
}

double NNfunction_sb_uRsR::synapse0x345d2c0() {
   return (neuron0x343d1f0()*-0.117785);
}

double NNfunction_sb_uRsR::synapse0x345d300() {
   return (neuron0x343d750()*-0.0552655);
}

double NNfunction_sb_uRsR::synapse0x345d980() {
   return (neuron0x343da90()*1.15842);
}

double NNfunction_sb_uRsR::synapse0x345d9c0() {
   return (neuron0x343ddd0()*-0.02634);
}

double NNfunction_sb_uRsR::synapse0x345da00() {
   return (neuron0x343e110()*-0.0247057);
}

double NNfunction_sb_uRsR::synapse0x345da40() {
   return (neuron0x343e450()*0.0640354);
}

double NNfunction_sb_uRsR::synapse0x345da80() {
   return (neuron0x343e790()*0.0617684);
}

double NNfunction_sb_uRsR::synapse0x345dac0() {
   return (neuron0x343ead0()*0.005504);
}

double NNfunction_sb_uRsR::synapse0x345de40() {
   return (neuron0x3439e80()*0.117354);
}

double NNfunction_sb_uRsR::synapse0x345de80() {
   return (neuron0x343a130()*-0.155855);
}

double NNfunction_sb_uRsR::synapse0x345dec0() {
   return (neuron0x343a470()*-0.0938962);
}

double NNfunction_sb_uRsR::synapse0x345df00() {
   return (neuron0x343a7b0()*1.14347);
}

double NNfunction_sb_uRsR::synapse0x345df40() {
   return (neuron0x343aaf0()*0.117511);
}

double NNfunction_sb_uRsR::synapse0x345df80() {
   return (neuron0x343ae30()*0.0475446);
}

double NNfunction_sb_uRsR::synapse0x345dfc0() {
   return (neuron0x343b170()*-0.0211459);
}

double NNfunction_sb_uRsR::synapse0x345e000() {
   return (neuron0x343b4b0()*0.397447);
}

double NNfunction_sb_uRsR::synapse0x345e040() {
   return (neuron0x343b7f0()*0.106143);
}

double NNfunction_sb_uRsR::synapse0x345e080() {
   return (neuron0x343bb30()*0.0402092);
}

double NNfunction_sb_uRsR::synapse0x345e0c0() {
   return (neuron0x343be70()*0.260014);
}

double NNfunction_sb_uRsR::synapse0x345e100() {
   return (neuron0x343c1b0()*-0.0164033);
}

double NNfunction_sb_uRsR::synapse0x345e140() {
   return (neuron0x343c4f0()*-0.141778);
}

double NNfunction_sb_uRsR::synapse0x345e180() {
   return (neuron0x343c830()*-0.0174848);
}

double NNfunction_sb_uRsR::synapse0x345e1c0() {
   return (neuron0x343cb70()*0.75369);
}

double NNfunction_sb_uRsR::synapse0x345e200() {
   return (neuron0x343ceb0()*-0.230814);
}

double NNfunction_sb_uRsR::synapse0x345dc90() {
   return (neuron0x343d1f0()*-0.0224107);
}

double NNfunction_sb_uRsR::synapse0x345dcd0() {
   return (neuron0x343d750()*-0.156536);
}

double NNfunction_sb_uRsR::synapse0x344e800() {
   return (neuron0x343da90()*0.606693);
}

double NNfunction_sb_uRsR::synapse0x344e840() {
   return (neuron0x343ddd0()*0.0506484);
}

double NNfunction_sb_uRsR::synapse0x344e880() {
   return (neuron0x343e110()*0.0517851);
}

double NNfunction_sb_uRsR::synapse0x344e8c0() {
   return (neuron0x343e450()*-0.0710852);
}

double NNfunction_sb_uRsR::synapse0x344e900() {
   return (neuron0x343e790()*-0.00183867);
}

double NNfunction_sb_uRsR::synapse0x344e940() {
   return (neuron0x343ead0()*0.0464245);
}

double NNfunction_sb_uRsR::synapse0x344ecc0() {
   return (neuron0x3439e80()*-0.0950014);
}

double NNfunction_sb_uRsR::synapse0x344ed00() {
   return (neuron0x343a130()*-0.671671);
}

double NNfunction_sb_uRsR::synapse0x344ed40() {
   return (neuron0x343a470()*0.0461129);
}

double NNfunction_sb_uRsR::synapse0x344ed80() {
   return (neuron0x343a7b0()*0.119448);
}

double NNfunction_sb_uRsR::synapse0x344edc0() {
   return (neuron0x343aaf0()*0.240948);
}

double NNfunction_sb_uRsR::synapse0x344ee00() {
   return (neuron0x343ae30()*-0.209075);
}

double NNfunction_sb_uRsR::synapse0x344ee40() {
   return (neuron0x343b170()*0.180964);
}

double NNfunction_sb_uRsR::synapse0x344ee80() {
   return (neuron0x343b4b0()*-0.61073);
}

double NNfunction_sb_uRsR::synapse0x344eec0() {
   return (neuron0x343b7f0()*-0.964823);
}

double NNfunction_sb_uRsR::synapse0x344ef00() {
   return (neuron0x343bb30()*0.241976);
}

double NNfunction_sb_uRsR::synapse0x344ef40() {
   return (neuron0x343be70()*0.248863);
}

double NNfunction_sb_uRsR::synapse0x344ef80() {
   return (neuron0x343c1b0()*-0.129438);
}

double NNfunction_sb_uRsR::synapse0x344efc0() {
   return (neuron0x343c4f0()*0.090627);
}

double NNfunction_sb_uRsR::synapse0x344f000() {
   return (neuron0x343c830()*-0.364207);
}

double NNfunction_sb_uRsR::synapse0x344f040() {
   return (neuron0x343cb70()*-0.228592);
}

double NNfunction_sb_uRsR::synapse0x344f080() {
   return (neuron0x343ceb0()*0.820233);
}

double NNfunction_sb_uRsR::synapse0x344eb10() {
   return (neuron0x343d1f0()*-0.253982);
}

double NNfunction_sb_uRsR::synapse0x344eb50() {
   return (neuron0x343d750()*0.0466698);
}

double NNfunction_sb_uRsR::synapse0x344f1d0() {
   return (neuron0x343da90()*0.643106);
}

double NNfunction_sb_uRsR::synapse0x344f210() {
   return (neuron0x343ddd0()*-0.751336);
}

double NNfunction_sb_uRsR::synapse0x344f250() {
   return (neuron0x343e110()*0.385181);
}

double NNfunction_sb_uRsR::synapse0x344f290() {
   return (neuron0x343e450()*0.344957);
}

double NNfunction_sb_uRsR::synapse0x344f2d0() {
   return (neuron0x343e790()*0.632331);
}

double NNfunction_sb_uRsR::synapse0x344f310() {
   return (neuron0x343ead0()*-1.1997);
}

double NNfunction_sb_uRsR::synapse0x344f690() {
   return (neuron0x3439e80()*0.476213);
}

double NNfunction_sb_uRsR::synapse0x344f6d0() {
   return (neuron0x343a130()*-0.16294);
}

double NNfunction_sb_uRsR::synapse0x344f710() {
   return (neuron0x343a470()*1.05193);
}

double NNfunction_sb_uRsR::synapse0x344f750() {
   return (neuron0x343a7b0()*-0.424992);
}

double NNfunction_sb_uRsR::synapse0x344f790() {
   return (neuron0x343aaf0()*-0.247082);
}

double NNfunction_sb_uRsR::synapse0x344f7d0() {
   return (neuron0x343ae30()*0.13294);
}

double NNfunction_sb_uRsR::synapse0x344f810() {
   return (neuron0x343b170()*-0.0262544);
}

double NNfunction_sb_uRsR::synapse0x344f850() {
   return (neuron0x343b4b0()*-0.0774928);
}

double NNfunction_sb_uRsR::synapse0x344f890() {
   return (neuron0x343b7f0()*0.350508);
}

double NNfunction_sb_uRsR::synapse0x344f8d0() {
   return (neuron0x343bb30()*-0.48506);
}

double NNfunction_sb_uRsR::synapse0x344f910() {
   return (neuron0x343be70()*0.0461292);
}

double NNfunction_sb_uRsR::synapse0x344f950() {
   return (neuron0x343c1b0()*0.090509);
}

double NNfunction_sb_uRsR::synapse0x344f990() {
   return (neuron0x343c4f0()*-0.00698676);
}

double NNfunction_sb_uRsR::synapse0x344f9d0() {
   return (neuron0x343c830()*0.752743);
}

double NNfunction_sb_uRsR::synapse0x344fa10() {
   return (neuron0x343cb70()*0.376819);
}

double NNfunction_sb_uRsR::synapse0x344fa50() {
   return (neuron0x343ceb0()*0.621972);
}

double NNfunction_sb_uRsR::synapse0x344f4e0() {
   return (neuron0x343d1f0()*-0.529831);
}

double NNfunction_sb_uRsR::synapse0x344f520() {
   return (neuron0x343d750()*-0.686104);
}

double NNfunction_sb_uRsR::synapse0x344fba0() {
   return (neuron0x343da90()*-0.279714);
}

double NNfunction_sb_uRsR::synapse0x344fbe0() {
   return (neuron0x343ddd0()*-0.0930072);
}

double NNfunction_sb_uRsR::synapse0x344fc20() {
   return (neuron0x343e110()*0.0232229);
}

double NNfunction_sb_uRsR::synapse0x344fc60() {
   return (neuron0x343e450()*-0.0293298);
}

double NNfunction_sb_uRsR::synapse0x344fca0() {
   return (neuron0x343e790()*-1.20997);
}

double NNfunction_sb_uRsR::synapse0x344fce0() {
   return (neuron0x343ead0()*1.01922);
}

double NNfunction_sb_uRsR::synapse0x3450060() {
   return (neuron0x3439e80()*-0.488888);
}

double NNfunction_sb_uRsR::synapse0x34500a0() {
   return (neuron0x343a130()*0.753354);
}

double NNfunction_sb_uRsR::synapse0x34500e0() {
   return (neuron0x343a470()*0.189514);
}

double NNfunction_sb_uRsR::synapse0x3450120() {
   return (neuron0x343a7b0()*-1.07487);
}

double NNfunction_sb_uRsR::synapse0x3450160() {
   return (neuron0x343aaf0()*0.519471);
}

double NNfunction_sb_uRsR::synapse0x34501a0() {
   return (neuron0x343ae30()*-0.605955);
}

double NNfunction_sb_uRsR::synapse0x34501e0() {
   return (neuron0x343b170()*-0.252205);
}

double NNfunction_sb_uRsR::synapse0x3450220() {
   return (neuron0x343b4b0()*0.203617);
}

double NNfunction_sb_uRsR::synapse0x3450260() {
   return (neuron0x343b7f0()*-0.729917);
}

double NNfunction_sb_uRsR::synapse0x34502a0() {
   return (neuron0x343bb30()*0.631311);
}

double NNfunction_sb_uRsR::synapse0x34502e0() {
   return (neuron0x343be70()*0.114986);
}

double NNfunction_sb_uRsR::synapse0x3450320() {
   return (neuron0x343c1b0()*-0.266285);
}

double NNfunction_sb_uRsR::synapse0x3450360() {
   return (neuron0x343c4f0()*0.309151);
}

double NNfunction_sb_uRsR::synapse0x34503a0() {
   return (neuron0x343c830()*-0.0686668);
}

double NNfunction_sb_uRsR::synapse0x34503e0() {
   return (neuron0x343cb70()*-0.200487);
}

double NNfunction_sb_uRsR::synapse0x3450420() {
   return (neuron0x343ceb0()*-0.213107);
}

double NNfunction_sb_uRsR::synapse0x344feb0() {
   return (neuron0x343d1f0()*0.076625);
}

double NNfunction_sb_uRsR::synapse0x344fef0() {
   return (neuron0x343d750()*0.00214402);
}

double NNfunction_sb_uRsR::synapse0x3450570() {
   return (neuron0x343da90()*0.601606);
}

double NNfunction_sb_uRsR::synapse0x34505b0() {
   return (neuron0x343ddd0()*0.171972);
}

double NNfunction_sb_uRsR::synapse0x34505f0() {
   return (neuron0x343e110()*0.125075);
}

double NNfunction_sb_uRsR::synapse0x3450630() {
   return (neuron0x343e450()*0.337891);
}

double NNfunction_sb_uRsR::synapse0x3450670() {
   return (neuron0x343e790()*0.778905);
}

double NNfunction_sb_uRsR::synapse0x34506b0() {
   return (neuron0x343ead0()*-0.174392);
}

double NNfunction_sb_uRsR::synapse0x3462580() {
   return (neuron0x3439e80()*-0.0148719);
}

double NNfunction_sb_uRsR::synapse0x34625c0() {
   return (neuron0x343a130()*-0.027921);
}

double NNfunction_sb_uRsR::synapse0x3462600() {
   return (neuron0x343a470()*-0.00247402);
}

double NNfunction_sb_uRsR::synapse0x3462640() {
   return (neuron0x343a7b0()*-0.13825);
}

double NNfunction_sb_uRsR::synapse0x3462680() {
   return (neuron0x343aaf0()*0.00552258);
}

double NNfunction_sb_uRsR::synapse0x34626c0() {
   return (neuron0x343ae30()*-0.00739716);
}

double NNfunction_sb_uRsR::synapse0x3462700() {
   return (neuron0x343b170()*-0.00378062);
}

double NNfunction_sb_uRsR::synapse0x3462740() {
   return (neuron0x343b4b0()*0.00301187);
}

double NNfunction_sb_uRsR::synapse0x3462780() {
   return (neuron0x343b7f0()*-3.81273e-05);
}

double NNfunction_sb_uRsR::synapse0x34627c0() {
   return (neuron0x343bb30()*0.00674213);
}

double NNfunction_sb_uRsR::synapse0x3462800() {
   return (neuron0x343be70()*0.0255729);
}

double NNfunction_sb_uRsR::synapse0x3462840() {
   return (neuron0x343c1b0()*0.0649347);
}

double NNfunction_sb_uRsR::synapse0x3462880() {
   return (neuron0x343c4f0()*0.0623689);
}

double NNfunction_sb_uRsR::synapse0x34628c0() {
   return (neuron0x343c830()*-0.00469738);
}

double NNfunction_sb_uRsR::synapse0x3462900() {
   return (neuron0x343cb70()*-0.300444);
}

double NNfunction_sb_uRsR::synapse0x3462940() {
   return (neuron0x343ceb0()*0.0355349);
}

double NNfunction_sb_uRsR::synapse0x34506f0() {
   return (neuron0x343d1f0()*-0.000405696);
}

double NNfunction_sb_uRsR::synapse0x3450730() {
   return (neuron0x343d750()*0.0317333);
}

double NNfunction_sb_uRsR::synapse0x3462a90() {
   return (neuron0x343da90()*-0.652262);
}

double NNfunction_sb_uRsR::synapse0x3462ad0() {
   return (neuron0x343ddd0()*0.00151993);
}

double NNfunction_sb_uRsR::synapse0x3462b10() {
   return (neuron0x343e110()*0.0118217);
}

double NNfunction_sb_uRsR::synapse0x3462b50() {
   return (neuron0x343e450()*0.000181127);
}

double NNfunction_sb_uRsR::synapse0x3462b90() {
   return (neuron0x343e790()*-0.0215899);
}

double NNfunction_sb_uRsR::synapse0x3462bd0() {
   return (neuron0x343ead0()*0.019575);
}

double NNfunction_sb_uRsR::synapse0x3462f50() {
   return (neuron0x3439e80()*-0.0175314);
}

double NNfunction_sb_uRsR::synapse0x3462f90() {
   return (neuron0x343a130()*-0.000652249);
}

double NNfunction_sb_uRsR::synapse0x3462fd0() {
   return (neuron0x343a470()*-0.00857024);
}

double NNfunction_sb_uRsR::synapse0x3463010() {
   return (neuron0x343a7b0()*1.97756);
}

double NNfunction_sb_uRsR::synapse0x3463050() {
   return (neuron0x343aaf0()*0.00660309);
}

double NNfunction_sb_uRsR::synapse0x3463090() {
   return (neuron0x343ae30()*0.00516171);
}

double NNfunction_sb_uRsR::synapse0x34630d0() {
   return (neuron0x343b170()*0.00641139);
}

double NNfunction_sb_uRsR::synapse0x3463110() {
   return (neuron0x343b4b0()*0.00491196);
}

double NNfunction_sb_uRsR::synapse0x3463150() {
   return (neuron0x343b7f0()*-0.0080142);
}

double NNfunction_sb_uRsR::synapse0x3463190() {
   return (neuron0x343bb30()*-0.0077069);
}

double NNfunction_sb_uRsR::synapse0x34631d0() {
   return (neuron0x343be70()*0.0116415);
}

double NNfunction_sb_uRsR::synapse0x3463210() {
   return (neuron0x343c1b0()*-0.027354);
}

double NNfunction_sb_uRsR::synapse0x3463250() {
   return (neuron0x343c4f0()*0.000341593);
}

double NNfunction_sb_uRsR::synapse0x3463290() {
   return (neuron0x343c830()*0.0321003);
}

double NNfunction_sb_uRsR::synapse0x34632d0() {
   return (neuron0x343cb70()*0.0895748);
}

double NNfunction_sb_uRsR::synapse0x3463310() {
   return (neuron0x343ceb0()*0.0157171);
}

double NNfunction_sb_uRsR::synapse0x3462da0() {
   return (neuron0x343d1f0()*0.0237168);
}

double NNfunction_sb_uRsR::synapse0x3462de0() {
   return (neuron0x343d750()*0.00815424);
}

double NNfunction_sb_uRsR::synapse0x3463460() {
   return (neuron0x343da90()*0.089195);
}

double NNfunction_sb_uRsR::synapse0x34634a0() {
   return (neuron0x343ddd0()*0.00190125);
}

double NNfunction_sb_uRsR::synapse0x34634e0() {
   return (neuron0x343e110()*-0.00643888);
}

double NNfunction_sb_uRsR::synapse0x3463520() {
   return (neuron0x343e450()*-0.00492266);
}

double NNfunction_sb_uRsR::synapse0x3463560() {
   return (neuron0x343e790()*-0.0148577);
}

double NNfunction_sb_uRsR::synapse0x34635a0() {
   return (neuron0x343ead0()*-0.0154669);
}

double NNfunction_sb_uRsR::synapse0x3463920() {
   return (neuron0x3439e80()*0.0781153);
}

double NNfunction_sb_uRsR::synapse0x3463960() {
   return (neuron0x343a130()*0.364125);
}

double NNfunction_sb_uRsR::synapse0x34639a0() {
   return (neuron0x343a470()*-0.478339);
}

double NNfunction_sb_uRsR::synapse0x34639e0() {
   return (neuron0x343a7b0()*0.494343);
}

double NNfunction_sb_uRsR::synapse0x3463a20() {
   return (neuron0x343aaf0()*0.335207);
}

double NNfunction_sb_uRsR::synapse0x3463a60() {
   return (neuron0x343ae30()*0.0154644);
}

double NNfunction_sb_uRsR::synapse0x3463aa0() {
   return (neuron0x343b170()*0.20136);
}

double NNfunction_sb_uRsR::synapse0x3463ae0() {
   return (neuron0x343b4b0()*-0.410815);
}

double NNfunction_sb_uRsR::synapse0x3463b20() {
   return (neuron0x343b7f0()*0.156714);
}

double NNfunction_sb_uRsR::synapse0x3463b60() {
   return (neuron0x343bb30()*0.0641892);
}

double NNfunction_sb_uRsR::synapse0x3463ba0() {
   return (neuron0x343be70()*0.323637);
}

double NNfunction_sb_uRsR::synapse0x3463be0() {
   return (neuron0x343c1b0()*0.511812);
}

double NNfunction_sb_uRsR::synapse0x3463c20() {
   return (neuron0x343c4f0()*0.143256);
}

double NNfunction_sb_uRsR::synapse0x3463c60() {
   return (neuron0x343c830()*0.468411);
}

double NNfunction_sb_uRsR::synapse0x3463ca0() {
   return (neuron0x343cb70()*-0.15778);
}

double NNfunction_sb_uRsR::synapse0x3463ce0() {
   return (neuron0x343ceb0()*-0.285463);
}

double NNfunction_sb_uRsR::synapse0x3463770() {
   return (neuron0x343d1f0()*0.0679849);
}

double NNfunction_sb_uRsR::synapse0x34637b0() {
   return (neuron0x343d750()*0.365247);
}

double NNfunction_sb_uRsR::synapse0x3463e30() {
   return (neuron0x343da90()*-0.470064);
}

double NNfunction_sb_uRsR::synapse0x3463e70() {
   return (neuron0x343ddd0()*0.436048);
}

double NNfunction_sb_uRsR::synapse0x3463eb0() {
   return (neuron0x343e110()*0.378356);
}

double NNfunction_sb_uRsR::synapse0x3463ef0() {
   return (neuron0x343e450()*0.328096);
}

double NNfunction_sb_uRsR::synapse0x3463f30() {
   return (neuron0x343e790()*0.388823);
}

double NNfunction_sb_uRsR::synapse0x3463f70() {
   return (neuron0x343ead0()*-0.623982);
}

double NNfunction_sb_uRsR::synapse0x34642f0() {
   return (neuron0x3439e80()*0.0760092);
}

double NNfunction_sb_uRsR::synapse0x3464330() {
   return (neuron0x343a130()*0.290182);
}

double NNfunction_sb_uRsR::synapse0x3464370() {
   return (neuron0x343a470()*0.0765406);
}

double NNfunction_sb_uRsR::synapse0x34643b0() {
   return (neuron0x343a7b0()*-0.974721);
}

double NNfunction_sb_uRsR::synapse0x34643f0() {
   return (neuron0x343aaf0()*-0.134939);
}

double NNfunction_sb_uRsR::synapse0x3464430() {
   return (neuron0x343ae30()*0.209822);
}

double NNfunction_sb_uRsR::synapse0x3464470() {
   return (neuron0x343b170()*-0.307598);
}

double NNfunction_sb_uRsR::synapse0x34644b0() {
   return (neuron0x343b4b0()*0.214872);
}

double NNfunction_sb_uRsR::synapse0x34644f0() {
   return (neuron0x343b7f0()*0.120341);
}

double NNfunction_sb_uRsR::synapse0x3464530() {
   return (neuron0x343bb30()*-0.000686093);
}

double NNfunction_sb_uRsR::synapse0x3464570() {
   return (neuron0x343be70()*0.149204);
}

double NNfunction_sb_uRsR::synapse0x34645b0() {
   return (neuron0x343c1b0()*0.171112);
}

double NNfunction_sb_uRsR::synapse0x34645f0() {
   return (neuron0x343c4f0()*0.133114);
}

double NNfunction_sb_uRsR::synapse0x3464630() {
   return (neuron0x343c830()*-0.0436836);
}

double NNfunction_sb_uRsR::synapse0x3464670() {
   return (neuron0x343cb70()*1.03162);
}

double NNfunction_sb_uRsR::synapse0x34646b0() {
   return (neuron0x343ceb0()*0.372149);
}

double NNfunction_sb_uRsR::synapse0x3464140() {
   return (neuron0x343d1f0()*0.232686);
}

double NNfunction_sb_uRsR::synapse0x3464180() {
   return (neuron0x343d750()*0.260136);
}

double NNfunction_sb_uRsR::synapse0x3464800() {
   return (neuron0x343da90()*0.880636);
}

double NNfunction_sb_uRsR::synapse0x3464840() {
   return (neuron0x343ddd0()*-0.260593);
}

double NNfunction_sb_uRsR::synapse0x3464880() {
   return (neuron0x343e110()*-0.216247);
}

double NNfunction_sb_uRsR::synapse0x34648c0() {
   return (neuron0x343e450()*0.284714);
}

double NNfunction_sb_uRsR::synapse0x3464900() {
   return (neuron0x343e790()*-0.119414);
}

double NNfunction_sb_uRsR::synapse0x3464940() {
   return (neuron0x343ead0()*-0.227031);
}

double NNfunction_sb_uRsR::synapse0x32047b0() {
   return (neuron0x343ef40()*-0.0723464);
}

double NNfunction_sb_uRsR::synapse0x32047f0() {
   return (neuron0x343f780()*-0.22134);
}

double NNfunction_sb_uRsR::synapse0x34412f0() {
   return (neuron0x3440260()*-0.134042);
}

double NNfunction_sb_uRsR::synapse0x3441330() {
   return (neuron0x343fd00()*0.067233);
}

double NNfunction_sb_uRsR::synapse0x3442dc0() {
   return (neuron0x3441040()*-0.122105);
}

double NNfunction_sb_uRsR::synapse0x3442e00() {
   return (neuron0x3442b10()*0.0120371);
}

double NNfunction_sb_uRsR::synapse0x3443b90() {
   return (neuron0x34438e0()*0.111115);
}

double NNfunction_sb_uRsR::synapse0x3443bd0() {
   return (neuron0x34442b0()*-0.456186);
}

double NNfunction_sb_uRsR::synapse0x3444560() {
   return (neuron0x3444c80()*-0.508146);
}

double NNfunction_sb_uRsR::synapse0x34445a0() {
   return (neuron0x3445760()*-0.394037);
}

double NNfunction_sb_uRsR::synapse0x3444f30() {
   return (neuron0x3446130()*-0.0693931);
}

double NNfunction_sb_uRsR::synapse0x3444f70() {
   return (neuron0x3443210()*0.0626627);
}

double NNfunction_sb_uRsR::synapse0x3445a10() {
   return (neuron0x3447ce0()*-0.58273);
}

double NNfunction_sb_uRsR::synapse0x3445a50() {
   return (neuron0x34486b0()*0.0981611);
}

double NNfunction_sb_uRsR::synapse0x34463e0() {
   return (neuron0x3449080()*-0.479508);
}

double NNfunction_sb_uRsR::synapse0x3446420() {
   return (neuron0x3449a50()*0.405603);
}

double NNfunction_sb_uRsR::synapse0x34434c0() {
   return (neuron0x344b860()*0.129846);
}

double NNfunction_sb_uRsR::synapse0x3443500() {
   return (neuron0x344bb40()*0.404751);
}

double NNfunction_sb_uRsR::synapse0x3447f90() {
   return (neuron0x344c510()*0.203207);
}

double NNfunction_sb_uRsR::synapse0x3447fd0() {
   return (neuron0x344cee0()*-0.254899);
}

double NNfunction_sb_uRsR::synapse0x3448960() {
   return (neuron0x344d8b0()*-0.126427);
}

double NNfunction_sb_uRsR::synapse0x34489a0() {
   return (neuron0x344e280()*-0.582937);
}

double NNfunction_sb_uRsR::synapse0x3449330() {
   return (neuron0x3446dd0()*-0.00258424);
}

double NNfunction_sb_uRsR::synapse0x3449370() {
   return (neuron0x34477a0()*0.0780456);
}

double NNfunction_sb_uRsR::synapse0x3449d00() {
   return (neuron0x3451010()*0.0765637);
}

double NNfunction_sb_uRsR::synapse0x3449d40() {
   return (neuron0x34519e0()*0.177615);
}

double NNfunction_sb_uRsR::synapse0x343cd90() {
   return (neuron0x34523b0()*-0.610684);
}

double NNfunction_sb_uRsR::synapse0x343cdd0() {
   return (neuron0x3452d80()*-0.160113);
}

double NNfunction_sb_uRsR::synapse0x344bdf0() {
   return (neuron0x3453750()*-0.5305);
}

double NNfunction_sb_uRsR::synapse0x344be30() {
   return (neuron0x3454120()*-0.0844602);
}

double NNfunction_sb_uRsR::synapse0x344c7c0() {
   return (neuron0x3454af0()*0.0719217);
}

double NNfunction_sb_uRsR::synapse0x344c800() {
   return (neuron0x34554c0()*-0.295315);
}

double NNfunction_sb_uRsR::synapse0x344d190() {
   return (neuron0x344b550()*0.295333);
}

double NNfunction_sb_uRsR::synapse0x344d1d0() {
   return (neuron0x34580a0()*-0.0682113);
}

double NNfunction_sb_uRsR::synapse0x344db60() {
   return (neuron0x3458a70()*-0.229991);
}

double NNfunction_sb_uRsR::synapse0x344dba0() {
   return (neuron0x3459440()*-0.292736);
}

double NNfunction_sb_uRsR::synapse0x344e530() {
   return (neuron0x3459e10()*-0.248785);
}

double NNfunction_sb_uRsR::synapse0x344e570() {
   return (neuron0x345a7e0()*-0.261967);
}

double NNfunction_sb_uRsR::synapse0x3447080() {
   return (neuron0x345b1b0()*-0.7644);
}

double NNfunction_sb_uRsR::synapse0x34470c0() {
   return (neuron0x345bb80()*-0.0851028);
}

double NNfunction_sb_uRsR::synapse0x3450930() {
   return (neuron0x345c550()*-0.808801);
}

double NNfunction_sb_uRsR::synapse0x3450970() {
   return (neuron0x345d130()*0.116138);
}

double NNfunction_sb_uRsR::synapse0x34512c0() {
   return (neuron0x345db00()*0.0477874);
}

double NNfunction_sb_uRsR::synapse0x3451300() {
   return (neuron0x344e980()*-0.407792);
}

double NNfunction_sb_uRsR::synapse0x3451c90() {
   return (neuron0x344f350()*-0.0269447);
}

double NNfunction_sb_uRsR::synapse0x3451cd0() {
   return (neuron0x344fd20()*-0.252377);
}

double NNfunction_sb_uRsR::synapse0x3452660() {
   return (neuron0x3462360()*-0.0383325);
}

double NNfunction_sb_uRsR::synapse0x34526a0() {
   return (neuron0x3462c10()*-0.0906895);
}

double NNfunction_sb_uRsR::synapse0x3453030() {
   return (neuron0x34635e0()*-0.0251878);
}

double NNfunction_sb_uRsR::synapse0x3453070() {
   return (neuron0x3463fb0()*0.62821);
}

double NNfunction_sb_uRsR::synapse0x3455770() {
   return (neuron0x343ef40()*0.0177371);
}

double NNfunction_sb_uRsR::synapse0x34557b0() {
   return (neuron0x343f780()*-0.588826);
}

double NNfunction_sb_uRsR::synapse0x344ad30() {
   return (neuron0x3440260()*-0.0848475);
}

double NNfunction_sb_uRsR::synapse0x344ad70() {
   return (neuron0x343fd00()*-0.0968436);
}

double NNfunction_sb_uRsR::synapse0x3458350() {
   return (neuron0x3441040()*-1.02925);
}

double NNfunction_sb_uRsR::synapse0x3458390() {
   return (neuron0x3442b10()*-0.262053);
}

double NNfunction_sb_uRsR::synapse0x3458d20() {
   return (neuron0x34438e0()*-0.122379);
}

double NNfunction_sb_uRsR::synapse0x3458d60() {
   return (neuron0x34442b0()*-0.103864);
}

double NNfunction_sb_uRsR::synapse0x34596f0() {
   return (neuron0x3444c80()*0.00666912);
}

double NNfunction_sb_uRsR::synapse0x3459730() {
   return (neuron0x3445760()*0.511653);
}

double NNfunction_sb_uRsR::synapse0x345a0c0() {
   return (neuron0x3446130()*-0.0793651);
}

double NNfunction_sb_uRsR::synapse0x345a100() {
   return (neuron0x3443210()*-0.00999479);
}

double NNfunction_sb_uRsR::synapse0x345aa90() {
   return (neuron0x3447ce0()*0.0310377);
}

double NNfunction_sb_uRsR::synapse0x345aad0() {
   return (neuron0x34486b0()*0.136041);
}

double NNfunction_sb_uRsR::synapse0x345b460() {
   return (neuron0x3449080()*-0.228244);
}

double NNfunction_sb_uRsR::synapse0x345b4a0() {
   return (neuron0x3449a50()*0.0554434);
}

double NNfunction_sb_uRsR::synapse0x345be30() {
   return (neuron0x344b860()*0.696156);
}

double NNfunction_sb_uRsR::synapse0x345be70() {
   return (neuron0x344bb40()*0.0711186);
}

double NNfunction_sb_uRsR::synapse0x345c800() {
   return (neuron0x344c510()*-0.177294);
}

double NNfunction_sb_uRsR::synapse0x345c840() {
   return (neuron0x344cee0()*0.441606);
}

double NNfunction_sb_uRsR::synapse0x345d3e0() {
   return (neuron0x344d8b0()*-0.51331);
}

double NNfunction_sb_uRsR::synapse0x345d420() {
   return (neuron0x344e280()*1.183);
}

double NNfunction_sb_uRsR::synapse0x345ddb0() {
   return (neuron0x3446dd0()*0.0763801);
}

double NNfunction_sb_uRsR::synapse0x345ddf0() {
   return (neuron0x34477a0()*1.35374);
}

double NNfunction_sb_uRsR::synapse0x344ec30() {
   return (neuron0x3451010()*0.182686);
}

double NNfunction_sb_uRsR::synapse0x344ec70() {
   return (neuron0x34519e0()*0.0831145);
}

double NNfunction_sb_uRsR::synapse0x344f600() {
   return (neuron0x34523b0()*0.100736);
}

double NNfunction_sb_uRsR::synapse0x344f640() {
   return (neuron0x3452d80()*0.0793611);
}

double NNfunction_sb_uRsR::synapse0x344ffd0() {
   return (neuron0x3453750()*-0.1607);
}

double NNfunction_sb_uRsR::synapse0x3450010() {
   return (neuron0x3454120()*-1.20557);
}

double NNfunction_sb_uRsR::synapse0x34624f0() {
   return (neuron0x3454af0()*0.0474687);
}

double NNfunction_sb_uRsR::synapse0x3462530() {
   return (neuron0x34554c0()*0.0879759);
}

double NNfunction_sb_uRsR::synapse0x3462ec0() {
   return (neuron0x344b550()*-0.246439);
}

double NNfunction_sb_uRsR::synapse0x3462f00() {
   return (neuron0x34580a0()*-0.262236);
}

double NNfunction_sb_uRsR::synapse0x3463890() {
   return (neuron0x3458a70()*0.111759);
}

double NNfunction_sb_uRsR::synapse0x34638d0() {
   return (neuron0x3459440()*-0.490358);
}

double NNfunction_sb_uRsR::synapse0x3464260() {
   return (neuron0x3459e10()*0.0150325);
}

double NNfunction_sb_uRsR::synapse0x34642a0() {
   return (neuron0x345a7e0()*-0.104563);
}

double NNfunction_sb_uRsR::synapse0x343f1f0() {
   return (neuron0x345b1b0()*-0.238157);
}

double NNfunction_sb_uRsR::synapse0x343f230() {
   return (neuron0x345bb80()*-0.00716437);
}

double NNfunction_sb_uRsR::synapse0x3453a00() {
   return (neuron0x345c550()*-0.83624);
}

double NNfunction_sb_uRsR::synapse0x3453a40() {
   return (neuron0x345d130()*0.45043);
}

double NNfunction_sb_uRsR::synapse0x3464980() {
   return (neuron0x345db00()*0.838155);
}

double NNfunction_sb_uRsR::synapse0x34649c0() {
   return (neuron0x344e980()*-0.0318673);
}

double NNfunction_sb_uRsR::synapse0x3464a00() {
   return (neuron0x344f350()*0.0701471);
}

double NNfunction_sb_uRsR::synapse0x3464a40() {
   return (neuron0x344fd20()*0.013118);
}

double NNfunction_sb_uRsR::synapse0x346b8f0() {
   return (neuron0x3462360()*-0.98877);
}

double NNfunction_sb_uRsR::synapse0x346b930() {
   return (neuron0x3462c10()*0.278081);
}

double NNfunction_sb_uRsR::synapse0x346b970() {
   return (neuron0x34635e0()*0.0848957);
}

double NNfunction_sb_uRsR::synapse0x346b9b0() {
   return (neuron0x3463fb0()*0.0454844);
}

double NNfunction_sb_uRsR::synapse0x346bd30() {
   return (neuron0x343ef40()*0.0149022);
}

double NNfunction_sb_uRsR::synapse0x346bd70() {
   return (neuron0x343f780()*0.394525);
}

double NNfunction_sb_uRsR::synapse0x346bdb0() {
   return (neuron0x3440260()*0.0515796);
}

double NNfunction_sb_uRsR::synapse0x346bdf0() {
   return (neuron0x343fd00()*-0.0440769);
}

double NNfunction_sb_uRsR::synapse0x346be30() {
   return (neuron0x3441040()*-1.59192);
}

double NNfunction_sb_uRsR::synapse0x346be70() {
   return (neuron0x3442b10()*-0.171766);
}

double NNfunction_sb_uRsR::synapse0x346beb0() {
   return (neuron0x34438e0()*-0.170944);
}

double NNfunction_sb_uRsR::synapse0x346bef0() {
   return (neuron0x34442b0()*0.0585492);
}

double NNfunction_sb_uRsR::synapse0x346bf30() {
   return (neuron0x3444c80()*-0.0859409);
}

double NNfunction_sb_uRsR::synapse0x346bf70() {
   return (neuron0x3445760()*0.251744);
}

double NNfunction_sb_uRsR::synapse0x346bfb0() {
   return (neuron0x3446130()*0.0968592);
}

double NNfunction_sb_uRsR::synapse0x346bff0() {
   return (neuron0x3443210()*-0.0133457);
}

double NNfunction_sb_uRsR::synapse0x346c030() {
   return (neuron0x3447ce0()*-0.147173);
}

double NNfunction_sb_uRsR::synapse0x346c070() {
   return (neuron0x34486b0()*-0.108155);
}

double NNfunction_sb_uRsR::synapse0x346c0b0() {
   return (neuron0x3449080()*0.147593);
}

double NNfunction_sb_uRsR::synapse0x346c0f0() {
   return (neuron0x3449a50()*-0.0724254);
}

double NNfunction_sb_uRsR::synapse0x346bb80() {
   return (neuron0x344b860()*-0.154055);
}

double NNfunction_sb_uRsR::synapse0x346bbc0() {
   return (neuron0x344bb40()*-0.181566);
}

double NNfunction_sb_uRsR::synapse0x346c240() {
   return (neuron0x344c510()*0.187659);
}

double NNfunction_sb_uRsR::synapse0x346c280() {
   return (neuron0x344cee0()*-0.590224);
}

double NNfunction_sb_uRsR::synapse0x346c2c0() {
   return (neuron0x344d8b0()*0.606867);
}

double NNfunction_sb_uRsR::synapse0x346c300() {
   return (neuron0x344e280()*-1.47393);
}

double NNfunction_sb_uRsR::synapse0x346c340() {
   return (neuron0x3446dd0()*-0.104007);
}

double NNfunction_sb_uRsR::synapse0x346c380() {
   return (neuron0x34477a0()*1.91476);
}

double NNfunction_sb_uRsR::synapse0x346c3c0() {
   return (neuron0x3451010()*-0.161067);
}

double NNfunction_sb_uRsR::synapse0x346c400() {
   return (neuron0x34519e0()*0.151387);
}

double NNfunction_sb_uRsR::synapse0x346c440() {
   return (neuron0x34523b0()*-0.266669);
}

double NNfunction_sb_uRsR::synapse0x346c480() {
   return (neuron0x3452d80()*-0.036823);
}

double NNfunction_sb_uRsR::synapse0x346c4c0() {
   return (neuron0x3453750()*0.620083);
}

double NNfunction_sb_uRsR::synapse0x346c500() {
   return (neuron0x3454120()*0.383164);
}

double NNfunction_sb_uRsR::synapse0x346c540() {
   return (neuron0x3454af0()*-0.0486374);
}

double NNfunction_sb_uRsR::synapse0x346c580() {
   return (neuron0x34554c0()*-0.251758);
}

double NNfunction_sb_uRsR::synapse0x346c130() {
   return (neuron0x344b550()*0.265925);
}

double NNfunction_sb_uRsR::synapse0x346c170() {
   return (neuron0x34580a0()*0.294141);
}

double NNfunction_sb_uRsR::synapse0x346c1b0() {
   return (neuron0x3458a70()*-0.251646);
}

double NNfunction_sb_uRsR::synapse0x346c1f0() {
   return (neuron0x3459440()*-0.0387712);
}

double NNfunction_sb_uRsR::synapse0x346c7d0() {
   return (neuron0x3459e10()*0.0276035);
}

double NNfunction_sb_uRsR::synapse0x346c810() {
   return (neuron0x345a7e0()*0.0191229);
}

double NNfunction_sb_uRsR::synapse0x346c850() {
   return (neuron0x345b1b0()*0.827683);
}

double NNfunction_sb_uRsR::synapse0x346c890() {
   return (neuron0x345bb80()*0.0512657);
}

double NNfunction_sb_uRsR::synapse0x346c8d0() {
   return (neuron0x345c550()*-1.28213);
}

double NNfunction_sb_uRsR::synapse0x346c910() {
   return (neuron0x345d130()*-0.499775);
}

double NNfunction_sb_uRsR::synapse0x346c950() {
   return (neuron0x345db00()*-0.0619577);
}

double NNfunction_sb_uRsR::synapse0x346c990() {
   return (neuron0x344e980()*0.0338533);
}

double NNfunction_sb_uRsR::synapse0x346c9d0() {
   return (neuron0x344f350()*-0.0403739);
}

double NNfunction_sb_uRsR::synapse0x346ca10() {
   return (neuron0x344fd20()*0.0305371);
}

double NNfunction_sb_uRsR::synapse0x346ca50() {
   return (neuron0x3462360()*-0.931449);
}

double NNfunction_sb_uRsR::synapse0x346ca90() {
   return (neuron0x3462c10()*0.0405577);
}

double NNfunction_sb_uRsR::synapse0x346cad0() {
   return (neuron0x34635e0()*-0.295437);
}

double NNfunction_sb_uRsR::synapse0x346cb10() {
   return (neuron0x3463fb0()*-0.093255);
}

double NNfunction_sb_uRsR::synapse0x346ce90() {
   return (neuron0x343ef40()*-0.0474251);
}

double NNfunction_sb_uRsR::synapse0x346ced0() {
   return (neuron0x343f780()*0.173522);
}

double NNfunction_sb_uRsR::synapse0x346cf10() {
   return (neuron0x3440260()*0.0758823);
}

double NNfunction_sb_uRsR::synapse0x346cf50() {
   return (neuron0x343fd00()*0.0788799);
}

double NNfunction_sb_uRsR::synapse0x346cf90() {
   return (neuron0x3441040()*-1.07718);
}

double NNfunction_sb_uRsR::synapse0x346cfd0() {
   return (neuron0x3442b10()*0.344142);
}

double NNfunction_sb_uRsR::synapse0x346d010() {
   return (neuron0x34438e0()*0.27077);
}

double NNfunction_sb_uRsR::synapse0x346d050() {
   return (neuron0x34442b0()*0.0689);
}

double NNfunction_sb_uRsR::synapse0x346d090() {
   return (neuron0x3444c80()*0.0853819);
}

double NNfunction_sb_uRsR::synapse0x346d0d0() {
   return (neuron0x3445760()*0.743598);
}

double NNfunction_sb_uRsR::synapse0x346d110() {
   return (neuron0x3446130()*-0.0285931);
}

double NNfunction_sb_uRsR::synapse0x346d150() {
   return (neuron0x3443210()*0.0549625);
}

double NNfunction_sb_uRsR::synapse0x346d190() {
   return (neuron0x3447ce0()*0.102196);
}

double NNfunction_sb_uRsR::synapse0x346d1d0() {
   return (neuron0x34486b0()*-0.0624714);
}

double NNfunction_sb_uRsR::synapse0x346d210() {
   return (neuron0x3449080()*0.115196);
}

double NNfunction_sb_uRsR::synapse0x346d250() {
   return (neuron0x3449a50()*-0.0189151);
}

double NNfunction_sb_uRsR::synapse0x346cce0() {
   return (neuron0x344b860()*1.30086);
}

double NNfunction_sb_uRsR::synapse0x346cd20() {
   return (neuron0x344bb40()*0.0944177);
}

double NNfunction_sb_uRsR::synapse0x346d3a0() {
   return (neuron0x344c510()*0.0633942);
}

double NNfunction_sb_uRsR::synapse0x346d3e0() {
   return (neuron0x344cee0()*0.0214835);
}

double NNfunction_sb_uRsR::synapse0x346d420() {
   return (neuron0x344d8b0()*0.201315);
}

double NNfunction_sb_uRsR::synapse0x346d460() {
   return (neuron0x344e280()*-3.23658);
}

double NNfunction_sb_uRsR::synapse0x346d4a0() {
   return (neuron0x3446dd0()*0.0615545);
}

double NNfunction_sb_uRsR::synapse0x346d4e0() {
   return (neuron0x34477a0()*0.271447);
}

double NNfunction_sb_uRsR::synapse0x346d520() {
   return (neuron0x3451010()*-0.0231369);
}

double NNfunction_sb_uRsR::synapse0x346d560() {
   return (neuron0x34519e0()*-0.222037);
}

double NNfunction_sb_uRsR::synapse0x346d5a0() {
   return (neuron0x34523b0()*0.126273);
}

double NNfunction_sb_uRsR::synapse0x346d5e0() {
   return (neuron0x3452d80()*-0.00695307);
}

double NNfunction_sb_uRsR::synapse0x346d620() {
   return (neuron0x3453750()*2.13808);
}

double NNfunction_sb_uRsR::synapse0x346d660() {
   return (neuron0x3454120()*0.825675);
}

double NNfunction_sb_uRsR::synapse0x346d6a0() {
   return (neuron0x3454af0()*-0.0519545);
}

double NNfunction_sb_uRsR::synapse0x346d6e0() {
   return (neuron0x34554c0()*0.122485);
}

double NNfunction_sb_uRsR::synapse0x346d290() {
   return (neuron0x344b550()*0.0108283);
}

double NNfunction_sb_uRsR::synapse0x346d2d0() {
   return (neuron0x34580a0()*0.0110157);
}

double NNfunction_sb_uRsR::synapse0x346d310() {
   return (neuron0x3458a70()*0.0872489);
}

double NNfunction_sb_uRsR::synapse0x346d350() {
   return (neuron0x3459440()*-2.06056);
}

double NNfunction_sb_uRsR::synapse0x346d930() {
   return (neuron0x3459e10()*-0.0530931);
}

double NNfunction_sb_uRsR::synapse0x346d970() {
   return (neuron0x345a7e0()*0.0408105);
}

double NNfunction_sb_uRsR::synapse0x346d9b0() {
   return (neuron0x345b1b0()*-0.73929);
}

double NNfunction_sb_uRsR::synapse0x346d9f0() {
   return (neuron0x345bb80()*0.0417956);
}

double NNfunction_sb_uRsR::synapse0x346da30() {
   return (neuron0x345c550()*0.0683854);
}

double NNfunction_sb_uRsR::synapse0x346da70() {
   return (neuron0x345d130()*0.30086);
}

double NNfunction_sb_uRsR::synapse0x346dab0() {
   return (neuron0x345db00()*-0.715544);
}

double NNfunction_sb_uRsR::synapse0x346daf0() {
   return (neuron0x344e980()*-0.016441);
}

double NNfunction_sb_uRsR::synapse0x346db30() {
   return (neuron0x344f350()*-0.0589084);
}

double NNfunction_sb_uRsR::synapse0x346db70() {
   return (neuron0x344fd20()*-0.0606489);
}

double NNfunction_sb_uRsR::synapse0x346dbb0() {
   return (neuron0x3462360()*-1.17119);
}

double NNfunction_sb_uRsR::synapse0x346dbf0() {
   return (neuron0x3462c10()*1.93812);
}

double NNfunction_sb_uRsR::synapse0x346dc30() {
   return (neuron0x34635e0()*0.0987565);
}

double NNfunction_sb_uRsR::synapse0x346dc70() {
   return (neuron0x3463fb0()*0.0623801);
}

double NNfunction_sb_uRsR::synapse0x346dff0() {
   return (neuron0x343ef40()*1.12817);
}

double NNfunction_sb_uRsR::synapse0x346e030() {
   return (neuron0x343f780()*0.504042);
}

double NNfunction_sb_uRsR::synapse0x346e070() {
   return (neuron0x3440260()*-1.74552);
}

double NNfunction_sb_uRsR::synapse0x346e0b0() {
   return (neuron0x343fd00()*1.0145);
}

double NNfunction_sb_uRsR::synapse0x346e0f0() {
   return (neuron0x3441040()*-5.14503);
}

double NNfunction_sb_uRsR::synapse0x346e130() {
   return (neuron0x3442b10()*-1.8404);
}

double NNfunction_sb_uRsR::synapse0x346e170() {
   return (neuron0x34438e0()*-2.20398);
}

double NNfunction_sb_uRsR::synapse0x346e1b0() {
   return (neuron0x34442b0()*-1.60317);
}

double NNfunction_sb_uRsR::synapse0x346e1f0() {
   return (neuron0x3444c80()*-1.26306);
}

double NNfunction_sb_uRsR::synapse0x346e230() {
   return (neuron0x3445760()*1.60361);
}

double NNfunction_sb_uRsR::synapse0x346e270() {
   return (neuron0x3446130()*1.26868);
}

double NNfunction_sb_uRsR::synapse0x346e2b0() {
   return (neuron0x3443210()*-1.40651);
}

double NNfunction_sb_uRsR::synapse0x346e2f0() {
   return (neuron0x3447ce0()*-1.66976);
}

double NNfunction_sb_uRsR::synapse0x346e330() {
   return (neuron0x34486b0()*0.831895);
}

double NNfunction_sb_uRsR::synapse0x346e370() {
   return (neuron0x3449080()*-1.25523);
}

double NNfunction_sb_uRsR::synapse0x346e3b0() {
   return (neuron0x3449a50()*1.3583);
}

double NNfunction_sb_uRsR::synapse0x346de40() {
   return (neuron0x344b860()*5.99079);
}

double NNfunction_sb_uRsR::synapse0x346de80() {
   return (neuron0x344bb40()*-1.4503);
}

double NNfunction_sb_uRsR::synapse0x346e500() {
   return (neuron0x344c510()*-1.09714);
}

double NNfunction_sb_uRsR::synapse0x346e540() {
   return (neuron0x344cee0()*-1.30227);
}

double NNfunction_sb_uRsR::synapse0x346e580() {
   return (neuron0x344d8b0()*-0.365982);
}

double NNfunction_sb_uRsR::synapse0x346e5c0() {
   return (neuron0x344e280()*1.25195);
}

double NNfunction_sb_uRsR::synapse0x346e600() {
   return (neuron0x3446dd0()*-1.94585);
}

double NNfunction_sb_uRsR::synapse0x346e640() {
   return (neuron0x34477a0()*0.151915);
}

double NNfunction_sb_uRsR::synapse0x346e680() {
   return (neuron0x3451010()*-1.1763);
}

double NNfunction_sb_uRsR::synapse0x346e6c0() {
   return (neuron0x34519e0()*2.57963);
}

double NNfunction_sb_uRsR::synapse0x346e700() {
   return (neuron0x34523b0()*-1.13783);
}

double NNfunction_sb_uRsR::synapse0x346e740() {
   return (neuron0x3452d80()*-1.46505);
}

double NNfunction_sb_uRsR::synapse0x346e780() {
   return (neuron0x3453750()*4.00319);
}

double NNfunction_sb_uRsR::synapse0x346e7c0() {
   return (neuron0x3454120()*-2.13755);
}

double NNfunction_sb_uRsR::synapse0x346e800() {
   return (neuron0x3454af0()*2.1289);
}

double NNfunction_sb_uRsR::synapse0x346e840() {
   return (neuron0x34554c0()*-1.49986);
}

double NNfunction_sb_uRsR::synapse0x346e3f0() {
   return (neuron0x344b550()*-0.093858);
}

double NNfunction_sb_uRsR::synapse0x346e430() {
   return (neuron0x34580a0()*0.119344);
}

double NNfunction_sb_uRsR::synapse0x346e470() {
   return (neuron0x3458a70()*-0.9664);
}

double NNfunction_sb_uRsR::synapse0x346e4b0() {
   return (neuron0x3459440()*-0.748897);
}

double NNfunction_sb_uRsR::synapse0x346ea90() {
   return (neuron0x3459e10()*1.35054);
}

double NNfunction_sb_uRsR::synapse0x346ead0() {
   return (neuron0x345a7e0()*1.53471);
}

double NNfunction_sb_uRsR::synapse0x346eb10() {
   return (neuron0x345b1b0()*-0.451901);
}

double NNfunction_sb_uRsR::synapse0x346eb50() {
   return (neuron0x345bb80()*2.30502);
}

double NNfunction_sb_uRsR::synapse0x346eb90() {
   return (neuron0x345c550()*-1.81508);
}

double NNfunction_sb_uRsR::synapse0x346ebd0() {
   return (neuron0x345d130()*2.92199);
}

double NNfunction_sb_uRsR::synapse0x346ec10() {
   return (neuron0x345db00()*2.58713);
}

double NNfunction_sb_uRsR::synapse0x346ec50() {
   return (neuron0x344e980()*1.45361);
}

double NNfunction_sb_uRsR::synapse0x346ec90() {
   return (neuron0x344f350()*1.05767);
}

double NNfunction_sb_uRsR::synapse0x346ecd0() {
   return (neuron0x344fd20()*1.26676);
}

double NNfunction_sb_uRsR::synapse0x346ed10() {
   return (neuron0x3462360()*-1.42795);
}

double NNfunction_sb_uRsR::synapse0x346ed50() {
   return (neuron0x3462c10()*2.0723);
}

double NNfunction_sb_uRsR::synapse0x346ed90() {
   return (neuron0x34635e0()*0.85241);
}

double NNfunction_sb_uRsR::synapse0x346edd0() {
   return (neuron0x3463fb0()*-2.20486);
}

double NNfunction_sb_uRsR::synapse0x346f030() {
   return (neuron0x346b1b0()*-0.305198);
}

double NNfunction_sb_uRsR::synapse0x346f070() {
   return (neuron0x346b550()*-4.02611);
}

double NNfunction_sb_uRsR::synapse0x346f0b0() {
   return (neuron0x346b9f0()*-3.3776);
}

double NNfunction_sb_uRsR::synapse0x346f0f0() {
   return (neuron0x346cb50()*-5.63186);
}

double NNfunction_sb_uRsR::synapse0x346f130() {
   return (neuron0x346dcb0()*-6.30067);
}

