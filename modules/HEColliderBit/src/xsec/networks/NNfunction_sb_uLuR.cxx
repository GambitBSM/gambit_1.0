#include "NNfunction_sb_uLuR.h"
#include <cmath>

double NNfunction_sb_uLuR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4482)/15.3162;
   input1 = (in1 - -3.14837)/1151.42;
   input2 = (in2 - 652.688)/622.38;
   input3 = (in3 - -54.611)/831.208;
   input4 = (in4 - 1074.39)/961.893;
   input5 = (in5 - 898.259)/950.407;
   input6 = (in6 - 913.553)/953.743;
   input7 = (in7 - 926.561)/938.153;
   input8 = (in8 - 913.308)/960.631;
   input9 = (in9 - 889.551)/941.313;
   input10 = (in10 - 982.48)/947.484;
   input11 = (in11 - 475.038)/529.18;
   input12 = (in12 - 720.656)/868.496;
   input13 = (in13 - 504.093)/521.439;
   input14 = (in14 - 521.683)/563.541;
   input15 = (in15 - 726.829)/827.116;
   input16 = (in16 - 534.176)/564.801;
   input17 = (in17 - 752.139)/887.084;
   input18 = (in18 - 743.954)/891.49;
   input19 = (in19 - 795.503)/874.553;
   input20 = (in20 - -3.31764)/487.289;
   input21 = (in21 - 3.3476)/1164.26;
   input22 = (in22 - 3.66278)/1207.09;
   input23 = (in23 - -191.402)/599.584;
   switch(index) {
     case 0:
         return neuron0x28bf4a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_uLuR::Value(int index, double* input) {
   input0 = (input[0] - 23.4482)/15.3162;
   input1 = (input[1] - -3.14837)/1151.42;
   input2 = (input[2] - 652.688)/622.38;
   input3 = (input[3] - -54.611)/831.208;
   input4 = (input[4] - 1074.39)/961.893;
   input5 = (input[5] - 898.259)/950.407;
   input6 = (input[6] - 913.553)/953.743;
   input7 = (input[7] - 926.561)/938.153;
   input8 = (input[8] - 913.308)/960.631;
   input9 = (input[9] - 889.551)/941.313;
   input10 = (input[10] - 982.48)/947.484;
   input11 = (input[11] - 475.038)/529.18;
   input12 = (input[12] - 720.656)/868.496;
   input13 = (input[13] - 504.093)/521.439;
   input14 = (input[14] - 521.683)/563.541;
   input15 = (input[15] - 726.829)/827.116;
   input16 = (input[16] - 534.176)/564.801;
   input17 = (input[17] - 752.139)/887.084;
   input18 = (input[18] - 743.954)/891.49;
   input19 = (input[19] - 795.503)/874.553;
   input20 = (input[20] - -3.31764)/487.289;
   input21 = (input[21] - 3.3476)/1164.26;
   input22 = (input[22] - 3.66278)/1207.09;
   input23 = (input[23] - -191.402)/599.584;
   switch(index) {
     case 0:
         return neuron0x28bf4a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_uLuR::neuron0x288b560() {
   return input0;
}

double NNfunction_sb_uLuR::neuron0x288b8a0() {
   return input1;
}

double NNfunction_sb_uLuR::neuron0x288bbe0() {
   return input2;
}

double NNfunction_sb_uLuR::neuron0x288bf20() {
   return input3;
}

double NNfunction_sb_uLuR::neuron0x288c260() {
   return input4;
}

double NNfunction_sb_uLuR::neuron0x288c5a0() {
   return input5;
}

double NNfunction_sb_uLuR::neuron0x288c8e0() {
   return input6;
}

double NNfunction_sb_uLuR::neuron0x288cc20() {
   return input7;
}

double NNfunction_sb_uLuR::neuron0x288cf60() {
   return input8;
}

double NNfunction_sb_uLuR::neuron0x288d2a0() {
   return input9;
}

double NNfunction_sb_uLuR::neuron0x288d5e0() {
   return input10;
}

double NNfunction_sb_uLuR::neuron0x288d920() {
   return input11;
}

double NNfunction_sb_uLuR::neuron0x288dc60() {
   return input12;
}

double NNfunction_sb_uLuR::neuron0x288dfa0() {
   return input13;
}

double NNfunction_sb_uLuR::neuron0x288e2e0() {
   return input14;
}

double NNfunction_sb_uLuR::neuron0x288e620() {
   return input15;
}

double NNfunction_sb_uLuR::neuron0x288e960() {
   return input16;
}

double NNfunction_sb_uLuR::neuron0x288eec0() {
   return input17;
}

double NNfunction_sb_uLuR::neuron0x288f0e0() {
   return input18;
}

double NNfunction_sb_uLuR::neuron0x288f420() {
   return input19;
}

double NNfunction_sb_uLuR::neuron0x288f760() {
   return input20;
}

double NNfunction_sb_uLuR::neuron0x288faa0() {
   return input21;
}

double NNfunction_sb_uLuR::neuron0x288fde0() {
   return input22;
}

double NNfunction_sb_uLuR::neuron0x2890120() {
   return input23;
}

double NNfunction_sb_uLuR::input0x28905c0() {
   double input = 0.85994;
   input += synapse0x264b3d0();
   input += synapse0x288b420();
   input += synapse0x288b460();
   input += synapse0x2890870();
   input += synapse0x28908b0();
   input += synapse0x28908f0();
   input += synapse0x2890930();
   input += synapse0x2890970();
   input += synapse0x28909b0();
   input += synapse0x28909f0();
   input += synapse0x2890a30();
   input += synapse0x2890a70();
   input += synapse0x2890ab0();
   input += synapse0x2890af0();
   input += synapse0x2890b30();
   input += synapse0x2890b70();
   input += synapse0x288b390();
   input += synapse0x288b3d0();
   input += synapse0x263cc70();
   input += synapse0x263ccb0();
   input += synapse0x2890dd0();
   input += synapse0x2890e10();
   input += synapse0x2890e50();
   input += synapse0x2890e90();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28905c0() {
   double input = input0x28905c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x2890ed0() {
   double input = -1.04532;
   input += synapse0x2891210();
   input += synapse0x2891250();
   input += synapse0x2891290();
   input += synapse0x28912d0();
   input += synapse0x2891310();
   input += synapse0x2891350();
   input += synapse0x2891390();
   input += synapse0x28913d0();
   input += synapse0x2891410();
   input += synapse0x2890cc0();
   input += synapse0x2890d00();
   input += synapse0x2890d40();
   input += synapse0x2890d80();
   input += synapse0x2891660();
   input += synapse0x28916a0();
   input += synapse0x28916e0();
   input += synapse0x2891060();
   input += synapse0x28910a0();
   input += synapse0x2891830();
   input += synapse0x2891870();
   input += synapse0x28918b0();
   input += synapse0x28918f0();
   input += synapse0x2891930();
   input += synapse0x2891970();
   return input;
}

double NNfunction_sb_uLuR::neuron0x2890ed0() {
   double input = input0x2890ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x28919b0() {
   double input = -0.0835192;
   input += synapse0x2891cf0();
   input += synapse0x2891d30();
   input += synapse0x2891d70();
   input += synapse0x2891db0();
   input += synapse0x2891df0();
   input += synapse0x2891e30();
   input += synapse0x2891e70();
   input += synapse0x2891eb0();
   input += synapse0x2891ef0();
   input += synapse0x2891f30();
   input += synapse0x2891f70();
   input += synapse0x2891fb0();
   input += synapse0x2891ff0();
   input += synapse0x2892030();
   input += synapse0x2892070();
   input += synapse0x28920b0();
   input += synapse0x2891b40();
   input += synapse0x2891b80();
   input += synapse0x264aac0();
   input += synapse0x264ab00();
   input += synapse0x287a5f0();
   input += synapse0x287a630();
   input += synapse0x287a670();
   input += synapse0x288b4a0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28919b0() {
   double input = input0x28919b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x264b240() {
   double input = 0.559072;
   input += synapse0x2891600();
   input += synapse0x288b4e0();
   input += synapse0x288b520();
   input += synapse0x2892200();
   input += synapse0x2892240();
   input += synapse0x2892280();
   input += synapse0x28922c0();
   input += synapse0x2892300();
   input += synapse0x2892340();
   input += synapse0x2892380();
   input += synapse0x28923c0();
   input += synapse0x2892400();
   input += synapse0x2892440();
   input += synapse0x2892480();
   input += synapse0x28924c0();
   input += synapse0x2892500();
   input += synapse0x2891450();
   input += synapse0x2891490();
   input += synapse0x2892650();
   input += synapse0x2892690();
   input += synapse0x28926d0();
   input += synapse0x2892710();
   input += synapse0x2892750();
   input += synapse0x2892790();
   return input;
}

double NNfunction_sb_uLuR::neuron0x264b240() {
   double input = input0x264b240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x28927d0() {
   double input = -0.362399;
   input += synapse0x2892b10();
   input += synapse0x2892b50();
   input += synapse0x2892b90();
   input += synapse0x2892bd0();
   input += synapse0x2892c10();
   input += synapse0x2892c50();
   input += synapse0x2892c90();
   input += synapse0x2892cd0();
   input += synapse0x2892d10();
   input += synapse0x2892d50();
   input += synapse0x2892d90();
   input += synapse0x2892dd0();
   input += synapse0x2892e10();
   input += synapse0x2892e50();
   input += synapse0x2892e90();
   input += synapse0x2892ed0();
   input += synapse0x2892960();
   input += synapse0x28929a0();
   input += synapse0x2893020();
   input += synapse0x2893060();
   input += synapse0x28930a0();
   input += synapse0x28930e0();
   input += synapse0x2893120();
   input += synapse0x2893160();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28927d0() {
   double input = input0x28927d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x28931a0() {
   double input = -0.263602;
   input += synapse0x28934e0();
   input += synapse0x2893520();
   input += synapse0x2893560();
   input += synapse0x28935a0();
   input += synapse0x28935e0();
   input += synapse0x2893620();
   input += synapse0x2893660();
   input += synapse0x28936a0();
   input += synapse0x28936e0();
   input += synapse0x264ae30();
   input += synapse0x264ae70();
   input += synapse0x264aeb0();
   input += synapse0x264aef0();
   input += synapse0x264af30();
   input += synapse0x264af70();
   input += synapse0x264afb0();
   input += synapse0x2893330();
   input += synapse0x2893370();
   input += synapse0x264b100();
   input += synapse0x264b140();
   input += synapse0x264b180();
   input += synapse0x264b1c0();
   input += synapse0x264b200();
   input += synapse0x2893f30();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28931a0() {
   double input = input0x28931a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x2893f70() {
   double input = 0.0709623;
   input += synapse0x28942b0();
   input += synapse0x28942f0();
   input += synapse0x2894330();
   input += synapse0x2894370();
   input += synapse0x28943b0();
   input += synapse0x28943f0();
   input += synapse0x2894430();
   input += synapse0x2894470();
   input += synapse0x28944b0();
   input += synapse0x28944f0();
   input += synapse0x2894530();
   input += synapse0x2894570();
   input += synapse0x28945b0();
   input += synapse0x28945f0();
   input += synapse0x2894630();
   input += synapse0x2894670();
   input += synapse0x2894100();
   input += synapse0x2894140();
   input += synapse0x28947c0();
   input += synapse0x2894800();
   input += synapse0x2894840();
   input += synapse0x2894880();
   input += synapse0x28948c0();
   input += synapse0x2894900();
   return input;
}

double NNfunction_sb_uLuR::neuron0x2893f70() {
   double input = input0x2893f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x2894940() {
   double input = 0.878624;
   input += synapse0x2894c80();
   input += synapse0x2894cc0();
   input += synapse0x2894d00();
   input += synapse0x2894d40();
   input += synapse0x2894d80();
   input += synapse0x2894dc0();
   input += synapse0x2894e00();
   input += synapse0x2894e40();
   input += synapse0x2894e80();
   input += synapse0x2894ec0();
   input += synapse0x2894f00();
   input += synapse0x2894f40();
   input += synapse0x2894f80();
   input += synapse0x2894fc0();
   input += synapse0x2895000();
   input += synapse0x2895040();
   input += synapse0x2894ad0();
   input += synapse0x2894b10();
   input += synapse0x2895190();
   input += synapse0x28951d0();
   input += synapse0x2895210();
   input += synapse0x2895250();
   input += synapse0x2895290();
   input += synapse0x28952d0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x2894940() {
   double input = input0x2894940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x2895310() {
   double input = -0.759531;
   input += synapse0x288edb0();
   input += synapse0x288edf0();
   input += synapse0x288ee30();
   input += synapse0x288ee70();
   input += synapse0x2895860();
   input += synapse0x28958a0();
   input += synapse0x28958e0();
   input += synapse0x2895920();
   input += synapse0x2895960();
   input += synapse0x28959a0();
   input += synapse0x28959e0();
   input += synapse0x2895a20();
   input += synapse0x2895a60();
   input += synapse0x2895aa0();
   input += synapse0x2895ae0();
   input += synapse0x2895b20();
   input += synapse0x28954a0();
   input += synapse0x28954e0();
   input += synapse0x2895c70();
   input += synapse0x2895cb0();
   input += synapse0x2895cf0();
   input += synapse0x2895d30();
   input += synapse0x2895d70();
   input += synapse0x2895db0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x2895310() {
   double input = input0x2895310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x2895df0() {
   double input = 1.31154;
   input += synapse0x2896130();
   input += synapse0x2896170();
   input += synapse0x28961b0();
   input += synapse0x28961f0();
   input += synapse0x2896230();
   input += synapse0x2896270();
   input += synapse0x28962b0();
   input += synapse0x28962f0();
   input += synapse0x2896330();
   input += synapse0x2896370();
   input += synapse0x28963b0();
   input += synapse0x28963f0();
   input += synapse0x2896430();
   input += synapse0x2896470();
   input += synapse0x28964b0();
   input += synapse0x28964f0();
   input += synapse0x2895f80();
   input += synapse0x2895fc0();
   input += synapse0x2896640();
   input += synapse0x2896680();
   input += synapse0x28966c0();
   input += synapse0x2896700();
   input += synapse0x2896740();
   input += synapse0x2896780();
   return input;
}

double NNfunction_sb_uLuR::neuron0x2895df0() {
   double input = input0x2895df0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x28967c0() {
   double input = 0.388923;
   input += synapse0x2896b00();
   input += synapse0x2896b40();
   input += synapse0x2896b80();
   input += synapse0x2896bc0();
   input += synapse0x2896c00();
   input += synapse0x2896c40();
   input += synapse0x2896c80();
   input += synapse0x2896cc0();
   input += synapse0x2896d00();
   input += synapse0x2896d40();
   input += synapse0x2896d80();
   input += synapse0x2896dc0();
   input += synapse0x2896e00();
   input += synapse0x2896e40();
   input += synapse0x2896e80();
   input += synapse0x2896ec0();
   input += synapse0x2896950();
   input += synapse0x2896990();
   input += synapse0x2893720();
   input += synapse0x2893760();
   input += synapse0x28937a0();
   input += synapse0x28937e0();
   input += synapse0x2893820();
   input += synapse0x2893860();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28967c0() {
   double input = input0x28967c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x28938a0() {
   double input = 2.06916;
   input += synapse0x2893be0();
   input += synapse0x2893c20();
   input += synapse0x2893c60();
   input += synapse0x2893ca0();
   input += synapse0x2893ce0();
   input += synapse0x2893d20();
   input += synapse0x2893d60();
   input += synapse0x2893da0();
   input += synapse0x2893de0();
   input += synapse0x2893e20();
   input += synapse0x2893e60();
   input += synapse0x2893ea0();
   input += synapse0x2893ee0();
   input += synapse0x2898020();
   input += synapse0x2898060();
   input += synapse0x28980a0();
   input += synapse0x2893a30();
   input += synapse0x2893a70();
   input += synapse0x28981f0();
   input += synapse0x2898230();
   input += synapse0x2898270();
   input += synapse0x28982b0();
   input += synapse0x28982f0();
   input += synapse0x2898330();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28938a0() {
   double input = input0x28938a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x2898370() {
   double input = -0.0835783;
   input += synapse0x28986b0();
   input += synapse0x28986f0();
   input += synapse0x2898730();
   input += synapse0x2898770();
   input += synapse0x28987b0();
   input += synapse0x28987f0();
   input += synapse0x2898830();
   input += synapse0x2898870();
   input += synapse0x28988b0();
   input += synapse0x28988f0();
   input += synapse0x2898930();
   input += synapse0x2898970();
   input += synapse0x28989b0();
   input += synapse0x28989f0();
   input += synapse0x2898a30();
   input += synapse0x2898a70();
   input += synapse0x2898500();
   input += synapse0x2898540();
   input += synapse0x2898bc0();
   input += synapse0x2898c00();
   input += synapse0x2898c40();
   input += synapse0x2898c80();
   input += synapse0x2898cc0();
   input += synapse0x2898d00();
   return input;
}

double NNfunction_sb_uLuR::neuron0x2898370() {
   double input = input0x2898370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x2898d40() {
   double input = 0.420907;
   input += synapse0x2899080();
   input += synapse0x28990c0();
   input += synapse0x2899100();
   input += synapse0x2899140();
   input += synapse0x2899180();
   input += synapse0x28991c0();
   input += synapse0x2899200();
   input += synapse0x2899240();
   input += synapse0x2899280();
   input += synapse0x28992c0();
   input += synapse0x2899300();
   input += synapse0x2899340();
   input += synapse0x2899380();
   input += synapse0x28993c0();
   input += synapse0x2899400();
   input += synapse0x2899440();
   input += synapse0x2898ed0();
   input += synapse0x2898f10();
   input += synapse0x2899590();
   input += synapse0x28995d0();
   input += synapse0x2899610();
   input += synapse0x2899650();
   input += synapse0x2899690();
   input += synapse0x28996d0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x2898d40() {
   double input = input0x2898d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x2899710() {
   double input = 0.35957;
   input += synapse0x2899a50();
   input += synapse0x2899a90();
   input += synapse0x2899ad0();
   input += synapse0x2899b10();
   input += synapse0x2899b50();
   input += synapse0x2899b90();
   input += synapse0x2899bd0();
   input += synapse0x2899c10();
   input += synapse0x2899c50();
   input += synapse0x2899c90();
   input += synapse0x2899cd0();
   input += synapse0x2899d10();
   input += synapse0x2899d50();
   input += synapse0x2899d90();
   input += synapse0x2899dd0();
   input += synapse0x2899e10();
   input += synapse0x28998a0();
   input += synapse0x28998e0();
   input += synapse0x2899f60();
   input += synapse0x2899fa0();
   input += synapse0x2899fe0();
   input += synapse0x289a020();
   input += synapse0x289a060();
   input += synapse0x289a0a0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x2899710() {
   double input = input0x2899710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x289a0e0() {
   double input = -0.835223;
   input += synapse0x289a420();
   input += synapse0x288b780();
   input += synapse0x288b7c0();
   input += synapse0x288bac0();
   input += synapse0x288bb00();
   input += synapse0x288be00();
   input += synapse0x288be40();
   input += synapse0x288c140();
   input += synapse0x288c180();
   input += synapse0x288c480();
   input += synapse0x288c4c0();
   input += synapse0x288c7c0();
   input += synapse0x288c800();
   input += synapse0x288cb00();
   input += synapse0x288cb40();
   input += synapse0x288ce40();
   input += synapse0x288ce80();
   input += synapse0x288d180();
   input += synapse0x288d1c0();
   input += synapse0x288d4c0();
   input += synapse0x288d500();
   input += synapse0x288d800();
   input += synapse0x288d840();
   input += synapse0x288db40();
   return input;
}

double NNfunction_sb_uLuR::neuron0x289a0e0() {
   double input = input0x289a0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x289bef0() {
   double input = 1.28896;
   input += synapse0x288db80();
   input += synapse0x288e840();
   input += synapse0x288e880();
   input += synapse0x289a270();
   input += synapse0x289a2b0();
   input += synapse0x288eb80();
   input += synapse0x288ebc0();
   input += synapse0x263cb50();
   input += synapse0x263cb90();
   input += synapse0x288f300();
   input += synapse0x288f340();
   input += synapse0x288f640();
   input += synapse0x288f680();
   input += synapse0x288f980();
   input += synapse0x288f9c0();
   input += synapse0x288fcc0();
   input += synapse0x288fd00();
   input += synapse0x2890000();
   input += synapse0x2890040();
   input += synapse0x2890340();
   input += synapse0x2890380();
   input += synapse0x288de80();
   input += synapse0x288dec0();
   input += synapse0x289c190();
   return input;
}

double NNfunction_sb_uLuR::neuron0x289bef0() {
   double input = input0x289bef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x289c1d0() {
   double input = -0.0639789;
   input += synapse0x289c510();
   input += synapse0x289c550();
   input += synapse0x289c590();
   input += synapse0x289c5d0();
   input += synapse0x289c610();
   input += synapse0x289c650();
   input += synapse0x289c690();
   input += synapse0x289c6d0();
   input += synapse0x289c710();
   input += synapse0x289c750();
   input += synapse0x289c790();
   input += synapse0x289c7d0();
   input += synapse0x289c810();
   input += synapse0x289c850();
   input += synapse0x289c890();
   input += synapse0x289c8d0();
   input += synapse0x289c360();
   input += synapse0x289c3a0();
   input += synapse0x289ca20();
   input += synapse0x289ca60();
   input += synapse0x289caa0();
   input += synapse0x289cae0();
   input += synapse0x289cb20();
   input += synapse0x289cb60();
   return input;
}

double NNfunction_sb_uLuR::neuron0x289c1d0() {
   double input = input0x289c1d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x289cba0() {
   double input = 0.0797149;
   input += synapse0x289cee0();
   input += synapse0x289cf20();
   input += synapse0x289cf60();
   input += synapse0x289cfa0();
   input += synapse0x289cfe0();
   input += synapse0x289d020();
   input += synapse0x289d060();
   input += synapse0x289d0a0();
   input += synapse0x289d0e0();
   input += synapse0x289d120();
   input += synapse0x289d160();
   input += synapse0x289d1a0();
   input += synapse0x289d1e0();
   input += synapse0x289d220();
   input += synapse0x289d260();
   input += synapse0x289d2a0();
   input += synapse0x289cd30();
   input += synapse0x289cd70();
   input += synapse0x289d3f0();
   input += synapse0x289d430();
   input += synapse0x289d470();
   input += synapse0x289d4b0();
   input += synapse0x289d4f0();
   input += synapse0x289d530();
   return input;
}

double NNfunction_sb_uLuR::neuron0x289cba0() {
   double input = input0x289cba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x289d570() {
   double input = 0.0687876;
   input += synapse0x289d8b0();
   input += synapse0x289d8f0();
   input += synapse0x289d930();
   input += synapse0x289d970();
   input += synapse0x289d9b0();
   input += synapse0x289d9f0();
   input += synapse0x289da30();
   input += synapse0x289da70();
   input += synapse0x289dab0();
   input += synapse0x289daf0();
   input += synapse0x289db30();
   input += synapse0x289db70();
   input += synapse0x289dbb0();
   input += synapse0x289dbf0();
   input += synapse0x289dc30();
   input += synapse0x289dc70();
   input += synapse0x289d700();
   input += synapse0x289d740();
   input += synapse0x289ddc0();
   input += synapse0x289de00();
   input += synapse0x289de40();
   input += synapse0x289de80();
   input += synapse0x289dec0();
   input += synapse0x289df00();
   return input;
}

double NNfunction_sb_uLuR::neuron0x289d570() {
   double input = input0x289d570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x289df40() {
   double input = -0.448408;
   input += synapse0x289e280();
   input += synapse0x289e2c0();
   input += synapse0x289e300();
   input += synapse0x289e340();
   input += synapse0x289e380();
   input += synapse0x289e3c0();
   input += synapse0x289e400();
   input += synapse0x289e440();
   input += synapse0x289e480();
   input += synapse0x289e4c0();
   input += synapse0x289e500();
   input += synapse0x289e540();
   input += synapse0x289e580();
   input += synapse0x289e5c0();
   input += synapse0x289e600();
   input += synapse0x289e640();
   input += synapse0x289e0d0();
   input += synapse0x289e110();
   input += synapse0x289e790();
   input += synapse0x289e7d0();
   input += synapse0x289e810();
   input += synapse0x289e850();
   input += synapse0x289e890();
   input += synapse0x289e8d0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x289df40() {
   double input = input0x289df40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x289e910() {
   double input = 0.489152;
   input += synapse0x289ec50();
   input += synapse0x289ec90();
   input += synapse0x289ecd0();
   input += synapse0x289ed10();
   input += synapse0x289ed50();
   input += synapse0x289ed90();
   input += synapse0x289edd0();
   input += synapse0x289ee10();
   input += synapse0x289ee50();
   input += synapse0x2897010();
   input += synapse0x2897050();
   input += synapse0x2897090();
   input += synapse0x28970d0();
   input += synapse0x2897110();
   input += synapse0x2897150();
   input += synapse0x2897190();
   input += synapse0x289eaa0();
   input += synapse0x289eae0();
   input += synapse0x28972e0();
   input += synapse0x2897320();
   input += synapse0x2897360();
   input += synapse0x28973a0();
   input += synapse0x28973e0();
   input += synapse0x2897420();
   return input;
}

double NNfunction_sb_uLuR::neuron0x289e910() {
   double input = input0x289e910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x2897460() {
   double input = 0.839066;
   input += synapse0x28977a0();
   input += synapse0x28977e0();
   input += synapse0x2897820();
   input += synapse0x2897860();
   input += synapse0x28978a0();
   input += synapse0x28978e0();
   input += synapse0x2897920();
   input += synapse0x2897960();
   input += synapse0x28979a0();
   input += synapse0x28979e0();
   input += synapse0x2897a20();
   input += synapse0x2897a60();
   input += synapse0x2897aa0();
   input += synapse0x2897ae0();
   input += synapse0x2897b20();
   input += synapse0x2897b60();
   input += synapse0x28975f0();
   input += synapse0x2897630();
   input += synapse0x2897cb0();
   input += synapse0x2897cf0();
   input += synapse0x2897d30();
   input += synapse0x2897d70();
   input += synapse0x2897db0();
   input += synapse0x2897df0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x2897460() {
   double input = input0x2897460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x2897e30() {
   double input = -0.503986;
   input += synapse0x2897fc0();
   input += synapse0x28a1050();
   input += synapse0x28a1090();
   input += synapse0x28a10d0();
   input += synapse0x28a1110();
   input += synapse0x28a1150();
   input += synapse0x28a1190();
   input += synapse0x28a11d0();
   input += synapse0x28a1210();
   input += synapse0x28a1250();
   input += synapse0x28a1290();
   input += synapse0x28a12d0();
   input += synapse0x28a1310();
   input += synapse0x28a1350();
   input += synapse0x28a1390();
   input += synapse0x28a13d0();
   input += synapse0x28a0ea0();
   input += synapse0x28a0ee0();
   input += synapse0x28a1520();
   input += synapse0x28a1560();
   input += synapse0x28a15a0();
   input += synapse0x28a15e0();
   input += synapse0x28a1620();
   input += synapse0x28a1660();
   return input;
}

double NNfunction_sb_uLuR::neuron0x2897e30() {
   double input = input0x2897e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x28a16a0() {
   double input = 0.943405;
   input += synapse0x28a19e0();
   input += synapse0x28a1a20();
   input += synapse0x28a1a60();
   input += synapse0x28a1aa0();
   input += synapse0x28a1ae0();
   input += synapse0x28a1b20();
   input += synapse0x28a1b60();
   input += synapse0x28a1ba0();
   input += synapse0x28a1be0();
   input += synapse0x28a1c20();
   input += synapse0x28a1c60();
   input += synapse0x28a1ca0();
   input += synapse0x28a1ce0();
   input += synapse0x28a1d20();
   input += synapse0x28a1d60();
   input += synapse0x28a1da0();
   input += synapse0x28a1830();
   input += synapse0x28a1870();
   input += synapse0x28a1ef0();
   input += synapse0x28a1f30();
   input += synapse0x28a1f70();
   input += synapse0x28a1fb0();
   input += synapse0x28a1ff0();
   input += synapse0x28a2030();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28a16a0() {
   double input = input0x28a16a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x28a2070() {
   double input = -0.0377379;
   input += synapse0x28a23b0();
   input += synapse0x28a23f0();
   input += synapse0x28a2430();
   input += synapse0x28a2470();
   input += synapse0x28a24b0();
   input += synapse0x28a24f0();
   input += synapse0x28a2530();
   input += synapse0x28a2570();
   input += synapse0x28a25b0();
   input += synapse0x28a25f0();
   input += synapse0x28a2630();
   input += synapse0x28a2670();
   input += synapse0x28a26b0();
   input += synapse0x28a26f0();
   input += synapse0x28a2730();
   input += synapse0x28a2770();
   input += synapse0x28a2200();
   input += synapse0x28a2240();
   input += synapse0x28a28c0();
   input += synapse0x28a2900();
   input += synapse0x28a2940();
   input += synapse0x28a2980();
   input += synapse0x28a29c0();
   input += synapse0x28a2a00();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28a2070() {
   double input = input0x28a2070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x28a2a40() {
   double input = 0.383839;
   input += synapse0x28a2d80();
   input += synapse0x28a2dc0();
   input += synapse0x28a2e00();
   input += synapse0x28a2e40();
   input += synapse0x28a2e80();
   input += synapse0x28a2ec0();
   input += synapse0x28a2f00();
   input += synapse0x28a2f40();
   input += synapse0x28a2f80();
   input += synapse0x28a2fc0();
   input += synapse0x28a3000();
   input += synapse0x28a3040();
   input += synapse0x28a3080();
   input += synapse0x28a30c0();
   input += synapse0x28a3100();
   input += synapse0x28a3140();
   input += synapse0x28a2bd0();
   input += synapse0x28a2c10();
   input += synapse0x28a3290();
   input += synapse0x28a32d0();
   input += synapse0x28a3310();
   input += synapse0x28a3350();
   input += synapse0x28a3390();
   input += synapse0x28a33d0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28a2a40() {
   double input = input0x28a2a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x28a3410() {
   double input = 0.645713;
   input += synapse0x28a3750();
   input += synapse0x28a3790();
   input += synapse0x28a37d0();
   input += synapse0x28a3810();
   input += synapse0x28a3850();
   input += synapse0x28a3890();
   input += synapse0x28a38d0();
   input += synapse0x28a3910();
   input += synapse0x28a3950();
   input += synapse0x28a3990();
   input += synapse0x28a39d0();
   input += synapse0x28a3a10();
   input += synapse0x28a3a50();
   input += synapse0x28a3a90();
   input += synapse0x28a3ad0();
   input += synapse0x28a3b10();
   input += synapse0x28a35a0();
   input += synapse0x28a35e0();
   input += synapse0x28a3c60();
   input += synapse0x28a3ca0();
   input += synapse0x28a3ce0();
   input += synapse0x28a3d20();
   input += synapse0x28a3d60();
   input += synapse0x28a3da0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28a3410() {
   double input = input0x28a3410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x28a3de0() {
   double input = 0.275982;
   input += synapse0x28a4120();
   input += synapse0x28a4160();
   input += synapse0x28a41a0();
   input += synapse0x28a41e0();
   input += synapse0x28a4220();
   input += synapse0x28a4260();
   input += synapse0x28a42a0();
   input += synapse0x28a42e0();
   input += synapse0x28a4320();
   input += synapse0x28a4360();
   input += synapse0x28a43a0();
   input += synapse0x28a43e0();
   input += synapse0x28a4420();
   input += synapse0x28a4460();
   input += synapse0x28a44a0();
   input += synapse0x28a44e0();
   input += synapse0x28a3f70();
   input += synapse0x28a3fb0();
   input += synapse0x28a4630();
   input += synapse0x28a4670();
   input += synapse0x28a46b0();
   input += synapse0x28a46f0();
   input += synapse0x28a4730();
   input += synapse0x28a4770();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28a3de0() {
   double input = input0x28a3de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x28a47b0() {
   double input = 0.0641467;
   input += synapse0x28a4af0();
   input += synapse0x28a4b30();
   input += synapse0x28a4b70();
   input += synapse0x28a4bb0();
   input += synapse0x28a4bf0();
   input += synapse0x28a4c30();
   input += synapse0x28a4c70();
   input += synapse0x28a4cb0();
   input += synapse0x28a4cf0();
   input += synapse0x28a4d30();
   input += synapse0x28a4d70();
   input += synapse0x28a4db0();
   input += synapse0x28a4df0();
   input += synapse0x28a4e30();
   input += synapse0x28a4e70();
   input += synapse0x28a4eb0();
   input += synapse0x28a4940();
   input += synapse0x28a4980();
   input += synapse0x28a5000();
   input += synapse0x28a5040();
   input += synapse0x28a5080();
   input += synapse0x28a50c0();
   input += synapse0x28a5100();
   input += synapse0x28a5140();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28a47b0() {
   double input = input0x28a47b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x28a5180() {
   double input = 0.197707;
   input += synapse0x28a54c0();
   input += synapse0x28a5500();
   input += synapse0x28a5540();
   input += synapse0x28a5580();
   input += synapse0x28a55c0();
   input += synapse0x28a5600();
   input += synapse0x28a5640();
   input += synapse0x28a5680();
   input += synapse0x28a56c0();
   input += synapse0x28a5700();
   input += synapse0x28a5740();
   input += synapse0x28a5780();
   input += synapse0x28a57c0();
   input += synapse0x28a5800();
   input += synapse0x28a5840();
   input += synapse0x28a5880();
   input += synapse0x28a5310();
   input += synapse0x28a5350();
   input += synapse0x28a59d0();
   input += synapse0x28a5a10();
   input += synapse0x28a5a50();
   input += synapse0x28a5a90();
   input += synapse0x28a5ad0();
   input += synapse0x28a5b10();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28a5180() {
   double input = input0x28a5180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x28a5b50() {
   double input = 0.795305;
   input += synapse0x28a5e90();
   input += synapse0x289a460();
   input += synapse0x289a4a0();
   input += synapse0x289a4e0();
   input += synapse0x289a730();
   input += synapse0x289a770();
   input += synapse0x289a7b0();
   input += synapse0x289aa00();
   input += synapse0x289aa40();
   input += synapse0x289ac90();
   input += synapse0x289acd0();
   input += synapse0x289ad10();
   input += synapse0x289af60();
   input += synapse0x289afa0();
   input += synapse0x289b1f0();
   input += synapse0x289b230();
   input += synapse0x28a5ce0();
   input += synapse0x28a5d20();
   input += synapse0x289b380();
   input += synapse0x289b890();
   input += synapse0x289b8d0();
   input += synapse0x289b910();
   input += synapse0x289bb60();
   input += synapse0x289bba0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28a5b50() {
   double input = input0x28a5b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x289bbe0() {
   double input = 0.132768;
   input += synapse0x289b450();
   input += synapse0x289b490();
   input += synapse0x289b4d0();
   input += synapse0x289b510();
   input += synapse0x289be90();
   input += synapse0x28a81e0();
   input += synapse0x28a8220();
   input += synapse0x28a8260();
   input += synapse0x28a82a0();
   input += synapse0x28a82e0();
   input += synapse0x28a8320();
   input += synapse0x28a8360();
   input += synapse0x28a83a0();
   input += synapse0x28a83e0();
   input += synapse0x28a8420();
   input += synapse0x28a8460();
   input += synapse0x289bd70();
   input += synapse0x289bdb0();
   input += synapse0x28a85b0();
   input += synapse0x28a85f0();
   input += synapse0x28a8630();
   input += synapse0x28a8670();
   input += synapse0x28a86b0();
   input += synapse0x28a86f0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x289bbe0() {
   double input = input0x289bbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x28a8730() {
   double input = 0.917914;
   input += synapse0x28a8a70();
   input += synapse0x28a8ab0();
   input += synapse0x28a8af0();
   input += synapse0x28a8b30();
   input += synapse0x28a8b70();
   input += synapse0x28a8bb0();
   input += synapse0x28a8bf0();
   input += synapse0x28a8c30();
   input += synapse0x28a8c70();
   input += synapse0x28a8cb0();
   input += synapse0x28a8cf0();
   input += synapse0x28a8d30();
   input += synapse0x28a8d70();
   input += synapse0x28a8db0();
   input += synapse0x28a8df0();
   input += synapse0x28a8e30();
   input += synapse0x28a88c0();
   input += synapse0x28a8900();
   input += synapse0x28a8f80();
   input += synapse0x28a8fc0();
   input += synapse0x28a9000();
   input += synapse0x28a9040();
   input += synapse0x28a9080();
   input += synapse0x28a90c0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28a8730() {
   double input = input0x28a8730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x28a9100() {
   double input = 0.0659291;
   input += synapse0x28a9440();
   input += synapse0x28a9480();
   input += synapse0x28a94c0();
   input += synapse0x28a9500();
   input += synapse0x28a9540();
   input += synapse0x28a9580();
   input += synapse0x28a95c0();
   input += synapse0x28a9600();
   input += synapse0x28a9640();
   input += synapse0x28a9680();
   input += synapse0x28a96c0();
   input += synapse0x28a9700();
   input += synapse0x28a9740();
   input += synapse0x28a9780();
   input += synapse0x28a97c0();
   input += synapse0x28a9800();
   input += synapse0x28a9290();
   input += synapse0x28a92d0();
   input += synapse0x28a9950();
   input += synapse0x28a9990();
   input += synapse0x28a99d0();
   input += synapse0x28a9a10();
   input += synapse0x28a9a50();
   input += synapse0x28a9a90();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28a9100() {
   double input = input0x28a9100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x28a9ad0() {
   double input = 1.31683;
   input += synapse0x28a9e10();
   input += synapse0x28a9e50();
   input += synapse0x28a9e90();
   input += synapse0x28a9ed0();
   input += synapse0x28a9f10();
   input += synapse0x28a9f50();
   input += synapse0x28a9f90();
   input += synapse0x28a9fd0();
   input += synapse0x28aa010();
   input += synapse0x28aa050();
   input += synapse0x28aa090();
   input += synapse0x28aa0d0();
   input += synapse0x28aa110();
   input += synapse0x28aa150();
   input += synapse0x28aa190();
   input += synapse0x28aa1d0();
   input += synapse0x28a9c60();
   input += synapse0x28a9ca0();
   input += synapse0x28aa320();
   input += synapse0x28aa360();
   input += synapse0x28aa3a0();
   input += synapse0x28aa3e0();
   input += synapse0x28aa420();
   input += synapse0x28aa460();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28a9ad0() {
   double input = input0x28a9ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x28aa4a0() {
   double input = 0.503915;
   input += synapse0x28aa7e0();
   input += synapse0x28aa820();
   input += synapse0x28aa860();
   input += synapse0x28aa8a0();
   input += synapse0x28aa8e0();
   input += synapse0x28aa920();
   input += synapse0x28aa960();
   input += synapse0x28aa9a0();
   input += synapse0x28aa9e0();
   input += synapse0x28aaa20();
   input += synapse0x28aaa60();
   input += synapse0x28aaaa0();
   input += synapse0x28aaae0();
   input += synapse0x28aab20();
   input += synapse0x28aab60();
   input += synapse0x28aaba0();
   input += synapse0x28aa630();
   input += synapse0x28aa670();
   input += synapse0x28aacf0();
   input += synapse0x28aad30();
   input += synapse0x28aad70();
   input += synapse0x28aadb0();
   input += synapse0x28aadf0();
   input += synapse0x28aae30();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28aa4a0() {
   double input = input0x28aa4a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x28aae70() {
   double input = 0.624488;
   input += synapse0x28ab1b0();
   input += synapse0x28ab1f0();
   input += synapse0x28ab230();
   input += synapse0x28ab270();
   input += synapse0x28ab2b0();
   input += synapse0x28ab2f0();
   input += synapse0x28ab330();
   input += synapse0x28ab370();
   input += synapse0x28ab3b0();
   input += synapse0x28ab3f0();
   input += synapse0x28ab430();
   input += synapse0x28ab470();
   input += synapse0x28ab4b0();
   input += synapse0x28ab4f0();
   input += synapse0x28ab530();
   input += synapse0x28ab570();
   input += synapse0x28ab000();
   input += synapse0x28ab040();
   input += synapse0x28ab6c0();
   input += synapse0x28ab700();
   input += synapse0x28ab740();
   input += synapse0x28ab780();
   input += synapse0x28ab7c0();
   input += synapse0x28ab800();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28aae70() {
   double input = input0x28aae70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x28ab840() {
   double input = 0.255344;
   input += synapse0x28abb80();
   input += synapse0x28abbc0();
   input += synapse0x28abc00();
   input += synapse0x28abc40();
   input += synapse0x28abc80();
   input += synapse0x28abcc0();
   input += synapse0x28abd00();
   input += synapse0x28abd40();
   input += synapse0x28abd80();
   input += synapse0x28abdc0();
   input += synapse0x28abe00();
   input += synapse0x28abe40();
   input += synapse0x28abe80();
   input += synapse0x28abec0();
   input += synapse0x28abf00();
   input += synapse0x28abf40();
   input += synapse0x28ab9d0();
   input += synapse0x28aba10();
   input += synapse0x28ac090();
   input += synapse0x28ac0d0();
   input += synapse0x28ac110();
   input += synapse0x28ac150();
   input += synapse0x28ac190();
   input += synapse0x28ac1d0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28ab840() {
   double input = input0x28ab840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x28ac210() {
   double input = 0.462421;
   input += synapse0x28ac550();
   input += synapse0x28ac590();
   input += synapse0x28ac5d0();
   input += synapse0x28ac610();
   input += synapse0x28ac650();
   input += synapse0x28ac690();
   input += synapse0x28ac6d0();
   input += synapse0x28ac710();
   input += synapse0x28ac750();
   input += synapse0x28ac790();
   input += synapse0x28ac7d0();
   input += synapse0x28ac810();
   input += synapse0x28ac850();
   input += synapse0x28ac890();
   input += synapse0x28ac8d0();
   input += synapse0x28ac910();
   input += synapse0x28ac3a0();
   input += synapse0x28ac3e0();
   input += synapse0x28aca60();
   input += synapse0x28acaa0();
   input += synapse0x28acae0();
   input += synapse0x28acb20();
   input += synapse0x28acb60();
   input += synapse0x28acba0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28ac210() {
   double input = input0x28ac210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x28acbe0() {
   double input = -0.779634;
   input += synapse0x2895650();
   input += synapse0x2895690();
   input += synapse0x28956d0();
   input += synapse0x2895710();
   input += synapse0x2895750();
   input += synapse0x2895790();
   input += synapse0x28957d0();
   input += synapse0x2895810();
   input += synapse0x28ad330();
   input += synapse0x28ad370();
   input += synapse0x28ad3b0();
   input += synapse0x28ad3f0();
   input += synapse0x28ad430();
   input += synapse0x28ad470();
   input += synapse0x28ad4b0();
   input += synapse0x28ad4f0();
   input += synapse0x28acd70();
   input += synapse0x28acdb0();
   input += synapse0x28ad640();
   input += synapse0x28ad680();
   input += synapse0x28ad6c0();
   input += synapse0x28ad700();
   input += synapse0x28ad740();
   input += synapse0x28ad780();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28acbe0() {
   double input = input0x28acbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x28ad7c0() {
   double input = -0.125673;
   input += synapse0x28adb00();
   input += synapse0x28adb40();
   input += synapse0x28adb80();
   input += synapse0x28adbc0();
   input += synapse0x28adc00();
   input += synapse0x28adc40();
   input += synapse0x28adc80();
   input += synapse0x28adcc0();
   input += synapse0x28add00();
   input += synapse0x28add40();
   input += synapse0x28add80();
   input += synapse0x28addc0();
   input += synapse0x28ade00();
   input += synapse0x28ade40();
   input += synapse0x28ade80();
   input += synapse0x28adec0();
   input += synapse0x28ad950();
   input += synapse0x28ad990();
   input += synapse0x28ae010();
   input += synapse0x28ae050();
   input += synapse0x28ae090();
   input += synapse0x28ae0d0();
   input += synapse0x28ae110();
   input += synapse0x28ae150();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28ad7c0() {
   double input = input0x28ad7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x28ae190() {
   double input = 0.0705068;
   input += synapse0x28ae4d0();
   input += synapse0x28ae510();
   input += synapse0x28ae550();
   input += synapse0x28ae590();
   input += synapse0x28ae5d0();
   input += synapse0x28ae610();
   input += synapse0x28ae650();
   input += synapse0x28ae690();
   input += synapse0x28ae6d0();
   input += synapse0x28ae710();
   input += synapse0x28ae750();
   input += synapse0x28ae790();
   input += synapse0x28ae7d0();
   input += synapse0x28ae810();
   input += synapse0x28ae850();
   input += synapse0x28ae890();
   input += synapse0x28ae320();
   input += synapse0x28ae360();
   input += synapse0x289ee90();
   input += synapse0x289eed0();
   input += synapse0x289ef10();
   input += synapse0x289ef50();
   input += synapse0x289ef90();
   input += synapse0x289efd0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28ae190() {
   double input = input0x28ae190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x289f010() {
   double input = 2.56202;
   input += synapse0x289f350();
   input += synapse0x289f390();
   input += synapse0x289f3d0();
   input += synapse0x289f410();
   input += synapse0x289f450();
   input += synapse0x289f490();
   input += synapse0x289f4d0();
   input += synapse0x289f510();
   input += synapse0x289f550();
   input += synapse0x289f590();
   input += synapse0x289f5d0();
   input += synapse0x289f610();
   input += synapse0x289f650();
   input += synapse0x289f690();
   input += synapse0x289f6d0();
   input += synapse0x289f710();
   input += synapse0x289f1a0();
   input += synapse0x289f1e0();
   input += synapse0x289f860();
   input += synapse0x289f8a0();
   input += synapse0x289f8e0();
   input += synapse0x289f920();
   input += synapse0x289f960();
   input += synapse0x289f9a0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x289f010() {
   double input = input0x289f010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x289f9e0() {
   double input = -0.249067;
   input += synapse0x289fd20();
   input += synapse0x289fd60();
   input += synapse0x289fda0();
   input += synapse0x289fde0();
   input += synapse0x289fe20();
   input += synapse0x289fe60();
   input += synapse0x289fea0();
   input += synapse0x289fee0();
   input += synapse0x289ff20();
   input += synapse0x289ff60();
   input += synapse0x289ffa0();
   input += synapse0x289ffe0();
   input += synapse0x28a0020();
   input += synapse0x28a0060();
   input += synapse0x28a00a0();
   input += synapse0x28a00e0();
   input += synapse0x289fb70();
   input += synapse0x289fbb0();
   input += synapse0x28a0230();
   input += synapse0x28a0270();
   input += synapse0x28a02b0();
   input += synapse0x28a02f0();
   input += synapse0x28a0330();
   input += synapse0x28a0370();
   return input;
}

double NNfunction_sb_uLuR::neuron0x289f9e0() {
   double input = input0x289f9e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x28a03b0() {
   double input = 2.19644;
   input += synapse0x28a06f0();
   input += synapse0x28a0730();
   input += synapse0x28a0770();
   input += synapse0x28a07b0();
   input += synapse0x28a07f0();
   input += synapse0x28a0830();
   input += synapse0x28a0870();
   input += synapse0x28a08b0();
   input += synapse0x28a08f0();
   input += synapse0x28a0930();
   input += synapse0x28a0970();
   input += synapse0x28a09b0();
   input += synapse0x28a09f0();
   input += synapse0x28a0a30();
   input += synapse0x28a0a70();
   input += synapse0x28a0ab0();
   input += synapse0x28a0540();
   input += synapse0x28a0580();
   input += synapse0x28a0c00();
   input += synapse0x28a0c40();
   input += synapse0x28a0c80();
   input += synapse0x28a0cc0();
   input += synapse0x28a0d00();
   input += synapse0x28a0d40();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28a03b0() {
   double input = input0x28a03b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x28b29f0() {
   double input = 0.728513;
   input += synapse0x28b2c10();
   input += synapse0x28b2c50();
   input += synapse0x28b2c90();
   input += synapse0x28b2cd0();
   input += synapse0x28b2d10();
   input += synapse0x28b2d50();
   input += synapse0x28b2d90();
   input += synapse0x28b2dd0();
   input += synapse0x28b2e10();
   input += synapse0x28b2e50();
   input += synapse0x28b2e90();
   input += synapse0x28b2ed0();
   input += synapse0x28b2f10();
   input += synapse0x28b2f50();
   input += synapse0x28b2f90();
   input += synapse0x28b2fd0();
   input += synapse0x28a0d80();
   input += synapse0x28a0dc0();
   input += synapse0x28b3120();
   input += synapse0x28b3160();
   input += synapse0x28b31a0();
   input += synapse0x28b31e0();
   input += synapse0x28b3220();
   input += synapse0x28b3260();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28b29f0() {
   double input = input0x28b29f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x28b32a0() {
   double input = -1.57116;
   input += synapse0x28b35e0();
   input += synapse0x28b3620();
   input += synapse0x28b3660();
   input += synapse0x28b36a0();
   input += synapse0x28b36e0();
   input += synapse0x28b3720();
   input += synapse0x28b3760();
   input += synapse0x28b37a0();
   input += synapse0x28b37e0();
   input += synapse0x28b3820();
   input += synapse0x28b3860();
   input += synapse0x28b38a0();
   input += synapse0x28b38e0();
   input += synapse0x28b3920();
   input += synapse0x28b3960();
   input += synapse0x28b39a0();
   input += synapse0x28b3430();
   input += synapse0x28b3470();
   input += synapse0x28b3af0();
   input += synapse0x28b3b30();
   input += synapse0x28b3b70();
   input += synapse0x28b3bb0();
   input += synapse0x28b3bf0();
   input += synapse0x28b3c30();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28b32a0() {
   double input = input0x28b32a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x28b3c70() {
   double input = -0.185826;
   input += synapse0x28b3fb0();
   input += synapse0x28b3ff0();
   input += synapse0x28b4030();
   input += synapse0x28b4070();
   input += synapse0x28b40b0();
   input += synapse0x28b40f0();
   input += synapse0x28b4130();
   input += synapse0x28b4170();
   input += synapse0x28b41b0();
   input += synapse0x28b41f0();
   input += synapse0x28b4230();
   input += synapse0x28b4270();
   input += synapse0x28b42b0();
   input += synapse0x28b42f0();
   input += synapse0x28b4330();
   input += synapse0x28b4370();
   input += synapse0x28b3e00();
   input += synapse0x28b3e40();
   input += synapse0x28b44c0();
   input += synapse0x28b4500();
   input += synapse0x28b4540();
   input += synapse0x28b4580();
   input += synapse0x28b45c0();
   input += synapse0x28b4600();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28b3c70() {
   double input = input0x28b3c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x28b4640() {
   double input = -0.363512;
   input += synapse0x28b4980();
   input += synapse0x28b49c0();
   input += synapse0x28b4a00();
   input += synapse0x28b4a40();
   input += synapse0x28b4a80();
   input += synapse0x28b4ac0();
   input += synapse0x28b4b00();
   input += synapse0x28b4b40();
   input += synapse0x28b4b80();
   input += synapse0x28b4bc0();
   input += synapse0x28b4c00();
   input += synapse0x28b4c40();
   input += synapse0x28b4c80();
   input += synapse0x28b4cc0();
   input += synapse0x28b4d00();
   input += synapse0x28b4d40();
   input += synapse0x28b47d0();
   input += synapse0x28b4810();
   input += synapse0x28b4e90();
   input += synapse0x28b4ed0();
   input += synapse0x28b4f10();
   input += synapse0x28b4f50();
   input += synapse0x28b4f90();
   input += synapse0x28b4fd0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28b4640() {
   double input = input0x28b4640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x28bb840() {
   double input = -0.705415;
   input += synapse0x2891570();
   input += synapse0x28915b0();
   input += synapse0x2892a80();
   input += synapse0x2892ac0();
   input += synapse0x2893450();
   input += synapse0x2893490();
   input += synapse0x2894220();
   input += synapse0x2894260();
   input += synapse0x2894bf0();
   input += synapse0x2894c30();
   input += synapse0x28955c0();
   input += synapse0x2895600();
   input += synapse0x28960a0();
   input += synapse0x28960e0();
   input += synapse0x2896a70();
   input += synapse0x2896ab0();
   input += synapse0x2893b50();
   input += synapse0x2893b90();
   input += synapse0x2898620();
   input += synapse0x2898660();
   input += synapse0x2898ff0();
   input += synapse0x2899030();
   input += synapse0x28999c0();
   input += synapse0x2899a00();
   input += synapse0x289a390();
   input += synapse0x289a3d0();
   input += synapse0x288e500();
   input += synapse0x288e540();
   input += synapse0x289c480();
   input += synapse0x289c4c0();
   input += synapse0x289ce50();
   input += synapse0x289ce90();
   input += synapse0x289d820();
   input += synapse0x289d860();
   input += synapse0x289e1f0();
   input += synapse0x289e230();
   input += synapse0x289ebc0();
   input += synapse0x289ec00();
   input += synapse0x2897710();
   input += synapse0x2897750();
   input += synapse0x28a0fc0();
   input += synapse0x28a1000();
   input += synapse0x28a1950();
   input += synapse0x28a1990();
   input += synapse0x28a2320();
   input += synapse0x28a2360();
   input += synapse0x28a2cf0();
   input += synapse0x28a2d30();
   input += synapse0x28a36c0();
   input += synapse0x28a3700();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28bb840() {
   double input = input0x28bb840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x28bbbe0() {
   double input = -0.184239;
   input += synapse0x28a5e00();
   input += synapse0x28a5e40();
   input += synapse0x289b3c0();
   input += synapse0x289b400();
   input += synapse0x28a89e0();
   input += synapse0x28a8a20();
   input += synapse0x28a93b0();
   input += synapse0x28a93f0();
   input += synapse0x28a9d80();
   input += synapse0x28a9dc0();
   input += synapse0x28aa750();
   input += synapse0x28aa790();
   input += synapse0x28ab120();
   input += synapse0x28ab160();
   input += synapse0x28abaf0();
   input += synapse0x28abb30();
   input += synapse0x28ac4c0();
   input += synapse0x28ac500();
   input += synapse0x28ace90();
   input += synapse0x28aced0();
   input += synapse0x28ada70();
   input += synapse0x28adab0();
   input += synapse0x28ae440();
   input += synapse0x28ae480();
   input += synapse0x289f2c0();
   input += synapse0x289f300();
   input += synapse0x289fc90();
   input += synapse0x289fcd0();
   input += synapse0x28a0660();
   input += synapse0x28a06a0();
   input += synapse0x28b2b80();
   input += synapse0x28b2bc0();
   input += synapse0x28b3550();
   input += synapse0x28b3590();
   input += synapse0x28b3f20();
   input += synapse0x28b3f60();
   input += synapse0x28b48f0();
   input += synapse0x28b4930();
   input += synapse0x28907e0();
   input += synapse0x2890820();
   input += synapse0x28a4090();
   input += synapse0x28a40d0();
   input += synapse0x28b5010();
   input += synapse0x28b5050();
   input += synapse0x28b5090();
   input += synapse0x28b50d0();
   input += synapse0x28bbf80();
   input += synapse0x28bbfc0();
   input += synapse0x28bc000();
   input += synapse0x28bc040();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28bbbe0() {
   double input = input0x28bbbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x28bc080() {
   double input = 0.694614;
   input += synapse0x28bc3c0();
   input += synapse0x28bc400();
   input += synapse0x28bc440();
   input += synapse0x28bc480();
   input += synapse0x28bc4c0();
   input += synapse0x28bc500();
   input += synapse0x28bc540();
   input += synapse0x28bc580();
   input += synapse0x28bc5c0();
   input += synapse0x28bc600();
   input += synapse0x28bc640();
   input += synapse0x28bc680();
   input += synapse0x28bc6c0();
   input += synapse0x28bc700();
   input += synapse0x28bc740();
   input += synapse0x28bc780();
   input += synapse0x28bc210();
   input += synapse0x28bc250();
   input += synapse0x28bc8d0();
   input += synapse0x28bc910();
   input += synapse0x28bc950();
   input += synapse0x28bc990();
   input += synapse0x28bc9d0();
   input += synapse0x28bca10();
   input += synapse0x28bca50();
   input += synapse0x28bca90();
   input += synapse0x28bcad0();
   input += synapse0x28bcb10();
   input += synapse0x28bcb50();
   input += synapse0x28bcb90();
   input += synapse0x28bcbd0();
   input += synapse0x28bcc10();
   input += synapse0x28bc7c0();
   input += synapse0x28bc800();
   input += synapse0x28bc840();
   input += synapse0x28bc880();
   input += synapse0x28bce60();
   input += synapse0x28bcea0();
   input += synapse0x28bcee0();
   input += synapse0x28bcf20();
   input += synapse0x28bcf60();
   input += synapse0x28bcfa0();
   input += synapse0x28bcfe0();
   input += synapse0x28bd020();
   input += synapse0x28bd060();
   input += synapse0x28bd0a0();
   input += synapse0x28bd0e0();
   input += synapse0x28bd120();
   input += synapse0x28bd160();
   input += synapse0x28bd1a0();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28bc080() {
   double input = input0x28bc080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x28bd1e0() {
   double input = -0.367168;
   input += synapse0x28bd520();
   input += synapse0x28bd560();
   input += synapse0x28bd5a0();
   input += synapse0x28bd5e0();
   input += synapse0x28bd620();
   input += synapse0x28bd660();
   input += synapse0x28bd6a0();
   input += synapse0x28bd6e0();
   input += synapse0x28bd720();
   input += synapse0x28bd760();
   input += synapse0x28bd7a0();
   input += synapse0x28bd7e0();
   input += synapse0x28bd820();
   input += synapse0x28bd860();
   input += synapse0x28bd8a0();
   input += synapse0x28bd8e0();
   input += synapse0x28bd370();
   input += synapse0x28bd3b0();
   input += synapse0x28bda30();
   input += synapse0x28bda70();
   input += synapse0x28bdab0();
   input += synapse0x28bdaf0();
   input += synapse0x28bdb30();
   input += synapse0x28bdb70();
   input += synapse0x28bdbb0();
   input += synapse0x28bdbf0();
   input += synapse0x28bdc30();
   input += synapse0x28bdc70();
   input += synapse0x28bdcb0();
   input += synapse0x28bdcf0();
   input += synapse0x28bdd30();
   input += synapse0x28bdd70();
   input += synapse0x28bd920();
   input += synapse0x28bd960();
   input += synapse0x28bd9a0();
   input += synapse0x28bd9e0();
   input += synapse0x28bdfc0();
   input += synapse0x28be000();
   input += synapse0x28be040();
   input += synapse0x28be080();
   input += synapse0x28be0c0();
   input += synapse0x28be100();
   input += synapse0x28be140();
   input += synapse0x28be180();
   input += synapse0x28be1c0();
   input += synapse0x28be200();
   input += synapse0x28be240();
   input += synapse0x28be280();
   input += synapse0x28be2c0();
   input += synapse0x28be300();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28bd1e0() {
   double input = input0x28bd1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x28be340() {
   double input = 0.0499453;
   input += synapse0x28be680();
   input += synapse0x28be6c0();
   input += synapse0x28be700();
   input += synapse0x28be740();
   input += synapse0x28be780();
   input += synapse0x28be7c0();
   input += synapse0x28be800();
   input += synapse0x28be840();
   input += synapse0x28be880();
   input += synapse0x28be8c0();
   input += synapse0x28be900();
   input += synapse0x28be940();
   input += synapse0x28be980();
   input += synapse0x28be9c0();
   input += synapse0x28bea00();
   input += synapse0x28bea40();
   input += synapse0x28be4d0();
   input += synapse0x28be510();
   input += synapse0x28beb90();
   input += synapse0x28bebd0();
   input += synapse0x28bec10();
   input += synapse0x28bec50();
   input += synapse0x28bec90();
   input += synapse0x28becd0();
   input += synapse0x28bed10();
   input += synapse0x28bed50();
   input += synapse0x28bed90();
   input += synapse0x28bedd0();
   input += synapse0x28bee10();
   input += synapse0x28bee50();
   input += synapse0x28bee90();
   input += synapse0x28beed0();
   input += synapse0x28bea80();
   input += synapse0x28beac0();
   input += synapse0x28beb00();
   input += synapse0x28beb40();
   input += synapse0x28bf120();
   input += synapse0x28bf160();
   input += synapse0x28bf1a0();
   input += synapse0x28bf1e0();
   input += synapse0x28bf220();
   input += synapse0x28bf260();
   input += synapse0x28bf2a0();
   input += synapse0x28bf2e0();
   input += synapse0x28bf320();
   input += synapse0x28bf360();
   input += synapse0x28bf3a0();
   input += synapse0x28bf3e0();
   input += synapse0x28bf420();
   input += synapse0x28bf460();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28be340() {
   double input = input0x28be340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLuR::input0x28bf4a0() {
   double input = 6.1664;
   input += synapse0x2890580();
   input += synapse0x28bf6c0();
   input += synapse0x28bf700();
   input += synapse0x28bf740();
   input += synapse0x28bf780();
   return input;
}

double NNfunction_sb_uLuR::neuron0x28bf4a0() {
   double input = input0x28bf4a0();
   return (input * 1)+0;
}

double NNfunction_sb_uLuR::synapse0x264b3d0() {
   return (neuron0x288b560()*0.0607667);
}

double NNfunction_sb_uLuR::synapse0x288b420() {
   return (neuron0x288b8a0()*0.210917);
}

double NNfunction_sb_uLuR::synapse0x288b460() {
   return (neuron0x288bbe0()*0.629221);
}

double NNfunction_sb_uLuR::synapse0x2890870() {
   return (neuron0x288bf20()*-0.633099);
}

double NNfunction_sb_uLuR::synapse0x28908b0() {
   return (neuron0x288c260()*-0.0614531);
}

double NNfunction_sb_uLuR::synapse0x28908f0() {
   return (neuron0x288c5a0()*0.0308721);
}

double NNfunction_sb_uLuR::synapse0x2890930() {
   return (neuron0x288c8e0()*0.00954912);
}

double NNfunction_sb_uLuR::synapse0x2890970() {
   return (neuron0x288cc20()*0.124307);
}

double NNfunction_sb_uLuR::synapse0x28909b0() {
   return (neuron0x288cf60()*-0.206756);
}

double NNfunction_sb_uLuR::synapse0x28909f0() {
   return (neuron0x288d2a0()*0.115011);
}

double NNfunction_sb_uLuR::synapse0x2890a30() {
   return (neuron0x288d5e0()*0.186993);
}

double NNfunction_sb_uLuR::synapse0x2890a70() {
   return (neuron0x288d920()*-0.494829);
}

double NNfunction_sb_uLuR::synapse0x2890ab0() {
   return (neuron0x288dc60()*0.0909682);
}

double NNfunction_sb_uLuR::synapse0x2890af0() {
   return (neuron0x288dfa0()*-0.425782);
}

double NNfunction_sb_uLuR::synapse0x2890b30() {
   return (neuron0x288e2e0()*-0.34252);
}

double NNfunction_sb_uLuR::synapse0x2890b70() {
   return (neuron0x288e620()*0.0116703);
}

double NNfunction_sb_uLuR::synapse0x288b390() {
   return (neuron0x288e960()*-0.577915);
}

double NNfunction_sb_uLuR::synapse0x288b3d0() {
   return (neuron0x288eec0()*0.649872);
}

double NNfunction_sb_uLuR::synapse0x263cc70() {
   return (neuron0x288f0e0()*0.84495);
}

double NNfunction_sb_uLuR::synapse0x263ccb0() {
   return (neuron0x288f420()*-0.526549);
}

double NNfunction_sb_uLuR::synapse0x2890dd0() {
   return (neuron0x288f760()*0.530234);
}

double NNfunction_sb_uLuR::synapse0x2890e10() {
   return (neuron0x288faa0()*-0.182876);
}

double NNfunction_sb_uLuR::synapse0x2890e50() {
   return (neuron0x288fde0()*0.64329);
}

double NNfunction_sb_uLuR::synapse0x2890e90() {
   return (neuron0x2890120()*0.114532);
}

double NNfunction_sb_uLuR::synapse0x2891210() {
   return (neuron0x288b560()*0.00351782);
}

double NNfunction_sb_uLuR::synapse0x2891250() {
   return (neuron0x288b8a0()*-0.0160329);
}

double NNfunction_sb_uLuR::synapse0x2891290() {
   return (neuron0x288bbe0()*0.0189818);
}

double NNfunction_sb_uLuR::synapse0x28912d0() {
   return (neuron0x288bf20()*17.3856);
}

double NNfunction_sb_uLuR::synapse0x2891310() {
   return (neuron0x288c260()*0.0130642);
}

double NNfunction_sb_uLuR::synapse0x2891350() {
   return (neuron0x288c5a0()*-0.00410073);
}

double NNfunction_sb_uLuR::synapse0x2891390() {
   return (neuron0x288c8e0()*0.0264194);
}

double NNfunction_sb_uLuR::synapse0x28913d0() {
   return (neuron0x288cc20()*0.00508217);
}

double NNfunction_sb_uLuR::synapse0x2891410() {
   return (neuron0x288cf60()*-0.00741502);
}

double NNfunction_sb_uLuR::synapse0x2890cc0() {
   return (neuron0x288d2a0()*0.0223173);
}

double NNfunction_sb_uLuR::synapse0x2890d00() {
   return (neuron0x288d5e0()*0.0241802);
}

double NNfunction_sb_uLuR::synapse0x2890d40() {
   return (neuron0x288d920()*-0.323846);
}

double NNfunction_sb_uLuR::synapse0x2890d80() {
   return (neuron0x288dc60()*-0.00637786);
}

double NNfunction_sb_uLuR::synapse0x2891660() {
   return (neuron0x288dfa0()*0.00386098);
}

double NNfunction_sb_uLuR::synapse0x28916a0() {
   return (neuron0x288e2e0()*-0.0153893);
}

double NNfunction_sb_uLuR::synapse0x28916e0() {
   return (neuron0x288e620()*-0.0257506);
}

double NNfunction_sb_uLuR::synapse0x2891060() {
   return (neuron0x288e960()*-0.0066299);
}

double NNfunction_sb_uLuR::synapse0x28910a0() {
   return (neuron0x288eec0()*-0.0285025);
}

double NNfunction_sb_uLuR::synapse0x2891830() {
   return (neuron0x288f0e0()*-0.0437437);
}

double NNfunction_sb_uLuR::synapse0x2891870() {
   return (neuron0x288f420()*0.000810403);
}

double NNfunction_sb_uLuR::synapse0x28918b0() {
   return (neuron0x288f760()*0.00786266);
}

double NNfunction_sb_uLuR::synapse0x28918f0() {
   return (neuron0x288faa0()*-0.00467456);
}

double NNfunction_sb_uLuR::synapse0x2891930() {
   return (neuron0x288fde0()*0.0182203);
}

double NNfunction_sb_uLuR::synapse0x2891970() {
   return (neuron0x2890120()*0.0376193);
}

double NNfunction_sb_uLuR::synapse0x2891cf0() {
   return (neuron0x288b560()*0.0465242);
}

double NNfunction_sb_uLuR::synapse0x2891d30() {
   return (neuron0x288b8a0()*0.125303);
}

double NNfunction_sb_uLuR::synapse0x2891d70() {
   return (neuron0x288bbe0()*-0.0864933);
}

double NNfunction_sb_uLuR::synapse0x2891db0() {
   return (neuron0x288bf20()*0.464024);
}

double NNfunction_sb_uLuR::synapse0x2891df0() {
   return (neuron0x288c260()*-0.160998);
}

double NNfunction_sb_uLuR::synapse0x2891e30() {
   return (neuron0x288c5a0()*-0.108822);
}

double NNfunction_sb_uLuR::synapse0x2891e70() {
   return (neuron0x288c8e0()*0.225154);
}

double NNfunction_sb_uLuR::synapse0x2891eb0() {
   return (neuron0x288cc20()*-0.0385525);
}

double NNfunction_sb_uLuR::synapse0x2891ef0() {
   return (neuron0x288cf60()*-0.0892759);
}

double NNfunction_sb_uLuR::synapse0x2891f30() {
   return (neuron0x288d2a0()*0.0270627);
}

double NNfunction_sb_uLuR::synapse0x2891f70() {
   return (neuron0x288d5e0()*-0.0990577);
}

double NNfunction_sb_uLuR::synapse0x2891fb0() {
   return (neuron0x288d920()*0.359707);
}

double NNfunction_sb_uLuR::synapse0x2891ff0() {
   return (neuron0x288dc60()*0.0261502);
}

double NNfunction_sb_uLuR::synapse0x2892030() {
   return (neuron0x288dfa0()*-0.0194117);
}

double NNfunction_sb_uLuR::synapse0x2892070() {
   return (neuron0x288e2e0()*0.15894);
}

double NNfunction_sb_uLuR::synapse0x28920b0() {
   return (neuron0x288e620()*-0.211666);
}

double NNfunction_sb_uLuR::synapse0x2891b40() {
   return (neuron0x288e960()*-0.0656079);
}

double NNfunction_sb_uLuR::synapse0x2891b80() {
   return (neuron0x288eec0()*-0.0865788);
}

double NNfunction_sb_uLuR::synapse0x264aac0() {
   return (neuron0x288f0e0()*-0.0566941);
}

double NNfunction_sb_uLuR::synapse0x264ab00() {
   return (neuron0x288f420()*-0.144533);
}

double NNfunction_sb_uLuR::synapse0x287a5f0() {
   return (neuron0x288f760()*0.00946773);
}

double NNfunction_sb_uLuR::synapse0x287a630() {
   return (neuron0x288faa0()*-0.0436839);
}

double NNfunction_sb_uLuR::synapse0x287a670() {
   return (neuron0x288fde0()*0.179828);
}

double NNfunction_sb_uLuR::synapse0x288b4a0() {
   return (neuron0x2890120()*-0.0296172);
}

double NNfunction_sb_uLuR::synapse0x2891600() {
   return (neuron0x288b560()*0.539712);
}

double NNfunction_sb_uLuR::synapse0x288b4e0() {
   return (neuron0x288b8a0()*-0.316664);
}

double NNfunction_sb_uLuR::synapse0x288b520() {
   return (neuron0x288bbe0()*0.70623);
}

double NNfunction_sb_uLuR::synapse0x2892200() {
   return (neuron0x288bf20()*-0.477577);
}

double NNfunction_sb_uLuR::synapse0x2892240() {
   return (neuron0x288c260()*-0.122212);
}

double NNfunction_sb_uLuR::synapse0x2892280() {
   return (neuron0x288c5a0()*-0.434382);
}

double NNfunction_sb_uLuR::synapse0x28922c0() {
   return (neuron0x288c8e0()*-0.261787);
}

double NNfunction_sb_uLuR::synapse0x2892300() {
   return (neuron0x288cc20()*0.116575);
}

double NNfunction_sb_uLuR::synapse0x2892340() {
   return (neuron0x288cf60()*-0.329434);
}

double NNfunction_sb_uLuR::synapse0x2892380() {
   return (neuron0x288d2a0()*-0.151603);
}

double NNfunction_sb_uLuR::synapse0x28923c0() {
   return (neuron0x288d5e0()*0.110358);
}

double NNfunction_sb_uLuR::synapse0x2892400() {
   return (neuron0x288d920()*0.114453);
}

double NNfunction_sb_uLuR::synapse0x2892440() {
   return (neuron0x288dc60()*-0.726102);
}

double NNfunction_sb_uLuR::synapse0x2892480() {
   return (neuron0x288dfa0()*0.366342);
}

double NNfunction_sb_uLuR::synapse0x28924c0() {
   return (neuron0x288e2e0()*-0.289079);
}

double NNfunction_sb_uLuR::synapse0x2892500() {
   return (neuron0x288e620()*-0.0531918);
}

double NNfunction_sb_uLuR::synapse0x2891450() {
   return (neuron0x288e960()*0.385724);
}

double NNfunction_sb_uLuR::synapse0x2891490() {
   return (neuron0x288eec0()*-0.247314);
}

double NNfunction_sb_uLuR::synapse0x2892650() {
   return (neuron0x288f0e0()*0.0123663);
}

double NNfunction_sb_uLuR::synapse0x2892690() {
   return (neuron0x288f420()*-0.0299315);
}

double NNfunction_sb_uLuR::synapse0x28926d0() {
   return (neuron0x288f760()*0.568811);
}

double NNfunction_sb_uLuR::synapse0x2892710() {
   return (neuron0x288faa0()*-0.142928);
}

double NNfunction_sb_uLuR::synapse0x2892750() {
   return (neuron0x288fde0()*0.0783632);
}

double NNfunction_sb_uLuR::synapse0x2892790() {
   return (neuron0x2890120()*0.0763632);
}

double NNfunction_sb_uLuR::synapse0x2892b10() {
   return (neuron0x288b560()*0.201823);
}

double NNfunction_sb_uLuR::synapse0x2892b50() {
   return (neuron0x288b8a0()*-0.243641);
}

double NNfunction_sb_uLuR::synapse0x2892b90() {
   return (neuron0x288bbe0()*0.0191189);
}

double NNfunction_sb_uLuR::synapse0x2892bd0() {
   return (neuron0x288bf20()*0.0599292);
}

double NNfunction_sb_uLuR::synapse0x2892c10() {
   return (neuron0x288c260()*-0.0187481);
}

double NNfunction_sb_uLuR::synapse0x2892c50() {
   return (neuron0x288c5a0()*-0.00248707);
}

double NNfunction_sb_uLuR::synapse0x2892c90() {
   return (neuron0x288c8e0()*0.102146);
}

double NNfunction_sb_uLuR::synapse0x2892cd0() {
   return (neuron0x288cc20()*0.141695);
}

double NNfunction_sb_uLuR::synapse0x2892d10() {
   return (neuron0x288cf60()*0.220276);
}

double NNfunction_sb_uLuR::synapse0x2892d50() {
   return (neuron0x288d2a0()*0.316987);
}

double NNfunction_sb_uLuR::synapse0x2892d90() {
   return (neuron0x288d5e0()*0.272181);
}

double NNfunction_sb_uLuR::synapse0x2892dd0() {
   return (neuron0x288d920()*-0.165494);
}

double NNfunction_sb_uLuR::synapse0x2892e10() {
   return (neuron0x288dc60()*-0.0971658);
}

double NNfunction_sb_uLuR::synapse0x2892e50() {
   return (neuron0x288dfa0()*0.243299);
}

double NNfunction_sb_uLuR::synapse0x2892e90() {
   return (neuron0x288e2e0()*0.211331);
}

double NNfunction_sb_uLuR::synapse0x2892ed0() {
   return (neuron0x288e620()*-0.10432);
}

double NNfunction_sb_uLuR::synapse0x2892960() {
   return (neuron0x288e960()*0.275614);
}

double NNfunction_sb_uLuR::synapse0x28929a0() {
   return (neuron0x288eec0()*-0.180667);
}

double NNfunction_sb_uLuR::synapse0x2893020() {
   return (neuron0x288f0e0()*-0.137813);
}

double NNfunction_sb_uLuR::synapse0x2893060() {
   return (neuron0x288f420()*-0.215144);
}

double NNfunction_sb_uLuR::synapse0x28930a0() {
   return (neuron0x288f760()*-0.0835369);
}

double NNfunction_sb_uLuR::synapse0x28930e0() {
   return (neuron0x288faa0()*0.0219427);
}

double NNfunction_sb_uLuR::synapse0x2893120() {
   return (neuron0x288fde0()*0.0590595);
}

double NNfunction_sb_uLuR::synapse0x2893160() {
   return (neuron0x2890120()*-0.0605274);
}

double NNfunction_sb_uLuR::synapse0x28934e0() {
   return (neuron0x288b560()*0.0162193);
}

double NNfunction_sb_uLuR::synapse0x2893520() {
   return (neuron0x288b8a0()*-0.0019248);
}

double NNfunction_sb_uLuR::synapse0x2893560() {
   return (neuron0x288bbe0()*-0.0356051);
}

double NNfunction_sb_uLuR::synapse0x28935a0() {
   return (neuron0x288bf20()*-12.0787);
}

double NNfunction_sb_uLuR::synapse0x28935e0() {
   return (neuron0x288c260()*-0.0289766);
}

double NNfunction_sb_uLuR::synapse0x2893620() {
   return (neuron0x288c5a0()*-0.01204);
}

double NNfunction_sb_uLuR::synapse0x2893660() {
   return (neuron0x288c8e0()*-0.0134529);
}

double NNfunction_sb_uLuR::synapse0x28936a0() {
   return (neuron0x288cc20()*-0.00512768);
}

double NNfunction_sb_uLuR::synapse0x28936e0() {
   return (neuron0x288cf60()*0.0149995);
}

double NNfunction_sb_uLuR::synapse0x264ae30() {
   return (neuron0x288d2a0()*-0.017454);
}

double NNfunction_sb_uLuR::synapse0x264ae70() {
   return (neuron0x288d5e0()*-0.0448433);
}

double NNfunction_sb_uLuR::synapse0x264aeb0() {
   return (neuron0x288d920()*-1.66508);
}

double NNfunction_sb_uLuR::synapse0x264aef0() {
   return (neuron0x288dc60()*0.02407);
}

double NNfunction_sb_uLuR::synapse0x264af30() {
   return (neuron0x288dfa0()*-0.00697205);
}

double NNfunction_sb_uLuR::synapse0x264af70() {
   return (neuron0x288e2e0()*0.0164493);
}

double NNfunction_sb_uLuR::synapse0x264afb0() {
   return (neuron0x288e620()*0.0340932);
}

double NNfunction_sb_uLuR::synapse0x2893330() {
   return (neuron0x288e960()*-0.0638924);
}

double NNfunction_sb_uLuR::synapse0x2893370() {
   return (neuron0x288eec0()*-0.0166986);
}

double NNfunction_sb_uLuR::synapse0x264b100() {
   return (neuron0x288f0e0()*0.0558678);
}

double NNfunction_sb_uLuR::synapse0x264b140() {
   return (neuron0x288f420()*0.0458681);
}

double NNfunction_sb_uLuR::synapse0x264b180() {
   return (neuron0x288f760()*0.0238836);
}

double NNfunction_sb_uLuR::synapse0x264b1c0() {
   return (neuron0x288faa0()*0.0251545);
}

double NNfunction_sb_uLuR::synapse0x264b200() {
   return (neuron0x288fde0()*-0.0241858);
}

double NNfunction_sb_uLuR::synapse0x2893f30() {
   return (neuron0x2890120()*-0.0411499);
}

double NNfunction_sb_uLuR::synapse0x28942b0() {
   return (neuron0x288b560()*-0.185848);
}

double NNfunction_sb_uLuR::synapse0x28942f0() {
   return (neuron0x288b8a0()*-0.279741);
}

double NNfunction_sb_uLuR::synapse0x2894330() {
   return (neuron0x288bbe0()*-0.0492771);
}

double NNfunction_sb_uLuR::synapse0x2894370() {
   return (neuron0x288bf20()*0.0624409);
}

double NNfunction_sb_uLuR::synapse0x28943b0() {
   return (neuron0x288c260()*0.0298075);
}

double NNfunction_sb_uLuR::synapse0x28943f0() {
   return (neuron0x288c5a0()*-0.218921);
}

double NNfunction_sb_uLuR::synapse0x2894430() {
   return (neuron0x288c8e0()*-0.300193);
}

double NNfunction_sb_uLuR::synapse0x2894470() {
   return (neuron0x288cc20()*0.0822936);
}

double NNfunction_sb_uLuR::synapse0x28944b0() {
   return (neuron0x288cf60()*0.581344);
}

double NNfunction_sb_uLuR::synapse0x28944f0() {
   return (neuron0x288d2a0()*0.154825);
}

double NNfunction_sb_uLuR::synapse0x2894530() {
   return (neuron0x288d5e0()*-0.590743);
}

double NNfunction_sb_uLuR::synapse0x2894570() {
   return (neuron0x288d920()*0.58368);
}

double NNfunction_sb_uLuR::synapse0x28945b0() {
   return (neuron0x288dc60()*0.647523);
}

double NNfunction_sb_uLuR::synapse0x28945f0() {
   return (neuron0x288dfa0()*-0.391823);
}

double NNfunction_sb_uLuR::synapse0x2894630() {
   return (neuron0x288e2e0()*0.201903);
}

double NNfunction_sb_uLuR::synapse0x2894670() {
   return (neuron0x288e620()*0.178195);
}

double NNfunction_sb_uLuR::synapse0x2894100() {
   return (neuron0x288e960()*-0.0630459);
}

double NNfunction_sb_uLuR::synapse0x2894140() {
   return (neuron0x288eec0()*0.442334);
}

double NNfunction_sb_uLuR::synapse0x28947c0() {
   return (neuron0x288f0e0()*0.203464);
}

double NNfunction_sb_uLuR::synapse0x2894800() {
   return (neuron0x288f420()*-0.321665);
}

double NNfunction_sb_uLuR::synapse0x2894840() {
   return (neuron0x288f760()*0.0451815);
}

double NNfunction_sb_uLuR::synapse0x2894880() {
   return (neuron0x288faa0()*-0.357886);
}

double NNfunction_sb_uLuR::synapse0x28948c0() {
   return (neuron0x288fde0()*-0.0275749);
}

double NNfunction_sb_uLuR::synapse0x2894900() {
   return (neuron0x2890120()*-0.256066);
}

double NNfunction_sb_uLuR::synapse0x2894c80() {
   return (neuron0x288b560()*-0.00757729);
}

double NNfunction_sb_uLuR::synapse0x2894cc0() {
   return (neuron0x288b8a0()*-0.0016673);
}

double NNfunction_sb_uLuR::synapse0x2894d00() {
   return (neuron0x288bbe0()*-0.0753309);
}

double NNfunction_sb_uLuR::synapse0x2894d40() {
   return (neuron0x288bf20()*-0.126111);
}

double NNfunction_sb_uLuR::synapse0x2894d80() {
   return (neuron0x288c260()*0.0380324);
}

double NNfunction_sb_uLuR::synapse0x2894dc0() {
   return (neuron0x288c5a0()*0.0330892);
}

double NNfunction_sb_uLuR::synapse0x2894e00() {
   return (neuron0x288c8e0()*-0.0177288);
}

double NNfunction_sb_uLuR::synapse0x2894e40() {
   return (neuron0x288cc20()*-0.00575141);
}

double NNfunction_sb_uLuR::synapse0x2894e80() {
   return (neuron0x288cf60()*-0.0482837);
}

double NNfunction_sb_uLuR::synapse0x2894ec0() {
   return (neuron0x288d2a0()*-0.0301322);
}

double NNfunction_sb_uLuR::synapse0x2894f00() {
   return (neuron0x288d5e0()*-0.0459032);
}

double NNfunction_sb_uLuR::synapse0x2894f40() {
   return (neuron0x288d920()*-0.604968);
}

double NNfunction_sb_uLuR::synapse0x2894f80() {
   return (neuron0x288dc60()*-0.0124235);
}

double NNfunction_sb_uLuR::synapse0x2894fc0() {
   return (neuron0x288dfa0()*0.0189958);
}

double NNfunction_sb_uLuR::synapse0x2895000() {
   return (neuron0x288e2e0()*2.12037);
}

double NNfunction_sb_uLuR::synapse0x2895040() {
   return (neuron0x288e620()*0.0276951);
}

double NNfunction_sb_uLuR::synapse0x2894ad0() {
   return (neuron0x288e960()*0.071622);
}

double NNfunction_sb_uLuR::synapse0x2894b10() {
   return (neuron0x288eec0()*-0.0500373);
}

double NNfunction_sb_uLuR::synapse0x2895190() {
   return (neuron0x288f0e0()*0.000772264);
}

double NNfunction_sb_uLuR::synapse0x28951d0() {
   return (neuron0x288f420()*-0.0537361);
}

double NNfunction_sb_uLuR::synapse0x2895210() {
   return (neuron0x288f760()*0.00638004);
}

double NNfunction_sb_uLuR::synapse0x2895250() {
   return (neuron0x288faa0()*-0.0249828);
}

double NNfunction_sb_uLuR::synapse0x2895290() {
   return (neuron0x288fde0()*-0.0235248);
}

double NNfunction_sb_uLuR::synapse0x28952d0() {
   return (neuron0x2890120()*0.000306095);
}

double NNfunction_sb_uLuR::synapse0x288edb0() {
   return (neuron0x288b560()*-0.146008);
}

double NNfunction_sb_uLuR::synapse0x288edf0() {
   return (neuron0x288b8a0()*-0.382111);
}

double NNfunction_sb_uLuR::synapse0x288ee30() {
   return (neuron0x288bbe0()*0.729777);
}

double NNfunction_sb_uLuR::synapse0x288ee70() {
   return (neuron0x288bf20()*-0.24961);
}

double NNfunction_sb_uLuR::synapse0x2895860() {
   return (neuron0x288c260()*0.503703);
}

double NNfunction_sb_uLuR::synapse0x28958a0() {
   return (neuron0x288c5a0()*0.129307);
}

double NNfunction_sb_uLuR::synapse0x28958e0() {
   return (neuron0x288c8e0()*-0.506981);
}

double NNfunction_sb_uLuR::synapse0x2895920() {
   return (neuron0x288cc20()*0.393328);
}

double NNfunction_sb_uLuR::synapse0x2895960() {
   return (neuron0x288cf60()*0.512796);
}

double NNfunction_sb_uLuR::synapse0x28959a0() {
   return (neuron0x288d2a0()*0.485776);
}

double NNfunction_sb_uLuR::synapse0x28959e0() {
   return (neuron0x288d5e0()*0.600065);
}

double NNfunction_sb_uLuR::synapse0x2895a20() {
   return (neuron0x288d920()*0.562286);
}

double NNfunction_sb_uLuR::synapse0x2895a60() {
   return (neuron0x288dc60()*0.132793);
}

double NNfunction_sb_uLuR::synapse0x2895aa0() {
   return (neuron0x288dfa0()*-0.785412);
}

double NNfunction_sb_uLuR::synapse0x2895ae0() {
   return (neuron0x288e2e0()*0.0117824);
}

double NNfunction_sb_uLuR::synapse0x2895b20() {
   return (neuron0x288e620()*0.0802019);
}

double NNfunction_sb_uLuR::synapse0x28954a0() {
   return (neuron0x288e960()*-0.290761);
}

double NNfunction_sb_uLuR::synapse0x28954e0() {
   return (neuron0x288eec0()*0.14544);
}

double NNfunction_sb_uLuR::synapse0x2895c70() {
   return (neuron0x288f0e0()*-0.3904);
}

double NNfunction_sb_uLuR::synapse0x2895cb0() {
   return (neuron0x288f420()*0.423623);
}

double NNfunction_sb_uLuR::synapse0x2895cf0() {
   return (neuron0x288f760()*-0.528566);
}

double NNfunction_sb_uLuR::synapse0x2895d30() {
   return (neuron0x288faa0()*0.0241993);
}

double NNfunction_sb_uLuR::synapse0x2895d70() {
   return (neuron0x288fde0()*-0.326902);
}

double NNfunction_sb_uLuR::synapse0x2895db0() {
   return (neuron0x2890120()*0.0548126);
}

double NNfunction_sb_uLuR::synapse0x2896130() {
   return (neuron0x288b560()*0.0252047);
}

double NNfunction_sb_uLuR::synapse0x2896170() {
   return (neuron0x288b8a0()*0.0330319);
}

double NNfunction_sb_uLuR::synapse0x28961b0() {
   return (neuron0x288bbe0()*0.0108966);
}

double NNfunction_sb_uLuR::synapse0x28961f0() {
   return (neuron0x288bf20()*-0.271582);
}

double NNfunction_sb_uLuR::synapse0x2896230() {
   return (neuron0x288c260()*-0.0168021);
}

double NNfunction_sb_uLuR::synapse0x2896270() {
   return (neuron0x288c5a0()*-0.0210084);
}

double NNfunction_sb_uLuR::synapse0x28962b0() {
   return (neuron0x288c8e0()*0.0328029);
}

double NNfunction_sb_uLuR::synapse0x28962f0() {
   return (neuron0x288cc20()*0.0458534);
}

double NNfunction_sb_uLuR::synapse0x2896330() {
   return (neuron0x288cf60()*-0.0061327);
}

double NNfunction_sb_uLuR::synapse0x2896370() {
   return (neuron0x288d2a0()*0.0166148);
}

double NNfunction_sb_uLuR::synapse0x28963b0() {
   return (neuron0x288d5e0()*0.00607789);
}

double NNfunction_sb_uLuR::synapse0x28963f0() {
   return (neuron0x288d920()*-0.569215);
}

double NNfunction_sb_uLuR::synapse0x2896430() {
   return (neuron0x288dc60()*0.0727766);
}

double NNfunction_sb_uLuR::synapse0x2896470() {
   return (neuron0x288dfa0()*0.031306);
}

double NNfunction_sb_uLuR::synapse0x28964b0() {
   return (neuron0x288e2e0()*-0.195597);
}

double NNfunction_sb_uLuR::synapse0x28964f0() {
   return (neuron0x288e620()*-0.00191881);
}

double NNfunction_sb_uLuR::synapse0x2895f80() {
   return (neuron0x288e960()*0.0220534);
}

double NNfunction_sb_uLuR::synapse0x2895fc0() {
   return (neuron0x288eec0()*0.0315727);
}

double NNfunction_sb_uLuR::synapse0x2896640() {
   return (neuron0x288f0e0()*0.028982);
}

double NNfunction_sb_uLuR::synapse0x2896680() {
   return (neuron0x288f420()*-0.00201109);
}

double NNfunction_sb_uLuR::synapse0x28966c0() {
   return (neuron0x288f760()*-0.0436002);
}

double NNfunction_sb_uLuR::synapse0x2896700() {
   return (neuron0x288faa0()*-0.0172554);
}

double NNfunction_sb_uLuR::synapse0x2896740() {
   return (neuron0x288fde0()*0.0325837);
}

double NNfunction_sb_uLuR::synapse0x2896780() {
   return (neuron0x2890120()*0.0190297);
}

double NNfunction_sb_uLuR::synapse0x2896b00() {
   return (neuron0x288b560()*-0.0178521);
}

double NNfunction_sb_uLuR::synapse0x2896b40() {
   return (neuron0x288b8a0()*0.0297195);
}

double NNfunction_sb_uLuR::synapse0x2896b80() {
   return (neuron0x288bbe0()*-0.0132459);
}

double NNfunction_sb_uLuR::synapse0x2896bc0() {
   return (neuron0x288bf20()*0.12531);
}

double NNfunction_sb_uLuR::synapse0x2896c00() {
   return (neuron0x288c260()*-0.00194708);
}

double NNfunction_sb_uLuR::synapse0x2896c40() {
   return (neuron0x288c5a0()*0.0121927);
}

double NNfunction_sb_uLuR::synapse0x2896c80() {
   return (neuron0x288c8e0()*0.039201);
}

double NNfunction_sb_uLuR::synapse0x2896cc0() {
   return (neuron0x288cc20()*-0.0316361);
}

double NNfunction_sb_uLuR::synapse0x2896d00() {
   return (neuron0x288cf60()*-0.00221297);
}

double NNfunction_sb_uLuR::synapse0x2896d40() {
   return (neuron0x288d2a0()*-0.0153699);
}

double NNfunction_sb_uLuR::synapse0x2896d80() {
   return (neuron0x288d5e0()*-0.0162999);
}

double NNfunction_sb_uLuR::synapse0x2896dc0() {
   return (neuron0x288d920()*2.66652);
}

double NNfunction_sb_uLuR::synapse0x2896e00() {
   return (neuron0x288dc60()*-0.0258489);
}

double NNfunction_sb_uLuR::synapse0x2896e40() {
   return (neuron0x288dfa0()*-0.0049051);
}

double NNfunction_sb_uLuR::synapse0x2896e80() {
   return (neuron0x288e2e0()*-0.27242);
}

double NNfunction_sb_uLuR::synapse0x2896ec0() {
   return (neuron0x288e620()*-0.0172573);
}

double NNfunction_sb_uLuR::synapse0x2896950() {
   return (neuron0x288e960()*-0.00147786);
}

double NNfunction_sb_uLuR::synapse0x2896990() {
   return (neuron0x288eec0()*0.00268572);
}

double NNfunction_sb_uLuR::synapse0x2893720() {
   return (neuron0x288f0e0()*-0.0227712);
}

double NNfunction_sb_uLuR::synapse0x2893760() {
   return (neuron0x288f420()*0.00366866);
}

double NNfunction_sb_uLuR::synapse0x28937a0() {
   return (neuron0x288f760()*0.0258679);
}

double NNfunction_sb_uLuR::synapse0x28937e0() {
   return (neuron0x288faa0()*-0.00629639);
}

double NNfunction_sb_uLuR::synapse0x2893820() {
   return (neuron0x288fde0()*-0.0290979);
}

double NNfunction_sb_uLuR::synapse0x2893860() {
   return (neuron0x2890120()*0.0129139);
}

double NNfunction_sb_uLuR::synapse0x2893be0() {
   return (neuron0x288b560()*-0.0016685);
}

double NNfunction_sb_uLuR::synapse0x2893c20() {
   return (neuron0x288b8a0()*0.0480786);
}

double NNfunction_sb_uLuR::synapse0x2893c60() {
   return (neuron0x288bbe0()*-0.00725867);
}

double NNfunction_sb_uLuR::synapse0x2893ca0() {
   return (neuron0x288bf20()*-0.0460023);
}

double NNfunction_sb_uLuR::synapse0x2893ce0() {
   return (neuron0x288c260()*0.0162786);
}

double NNfunction_sb_uLuR::synapse0x2893d20() {
   return (neuron0x288c5a0()*0.029217);
}

double NNfunction_sb_uLuR::synapse0x2893d60() {
   return (neuron0x288c8e0()*0.0244331);
}

double NNfunction_sb_uLuR::synapse0x2893da0() {
   return (neuron0x288cc20()*-0.0931058);
}

double NNfunction_sb_uLuR::synapse0x2893de0() {
   return (neuron0x288cf60()*-0.0290242);
}

double NNfunction_sb_uLuR::synapse0x2893e20() {
   return (neuron0x288d2a0()*-0.0139376);
}

double NNfunction_sb_uLuR::synapse0x2893e60() {
   return (neuron0x288d5e0()*-0.0453536);
}

double NNfunction_sb_uLuR::synapse0x2893ea0() {
   return (neuron0x288d920()*0.0353912);
}

double NNfunction_sb_uLuR::synapse0x2893ee0() {
   return (neuron0x288dc60()*-0.0234826);
}

double NNfunction_sb_uLuR::synapse0x2898020() {
   return (neuron0x288dfa0()*-0.00839433);
}

double NNfunction_sb_uLuR::synapse0x2898060() {
   return (neuron0x288e2e0()*-0.828284);
}

double NNfunction_sb_uLuR::synapse0x28980a0() {
   return (neuron0x288e620()*0.00860071);
}

double NNfunction_sb_uLuR::synapse0x2893a30() {
   return (neuron0x288e960()*-0.0455918);
}

double NNfunction_sb_uLuR::synapse0x2893a70() {
   return (neuron0x288eec0()*-0.0622448);
}

double NNfunction_sb_uLuR::synapse0x28981f0() {
   return (neuron0x288f0e0()*-0.0310902);
}

double NNfunction_sb_uLuR::synapse0x2898230() {
   return (neuron0x288f420()*-0.0347562);
}

double NNfunction_sb_uLuR::synapse0x2898270() {
   return (neuron0x288f760()*0.0250852);
}

double NNfunction_sb_uLuR::synapse0x28982b0() {
   return (neuron0x288faa0()*0.0429059);
}

double NNfunction_sb_uLuR::synapse0x28982f0() {
   return (neuron0x288fde0()*0.0019409);
}

double NNfunction_sb_uLuR::synapse0x2898330() {
   return (neuron0x2890120()*-0.0132197);
}

double NNfunction_sb_uLuR::synapse0x28986b0() {
   return (neuron0x288b560()*-0.306339);
}

double NNfunction_sb_uLuR::synapse0x28986f0() {
   return (neuron0x288b8a0()*0.149962);
}

double NNfunction_sb_uLuR::synapse0x2898730() {
   return (neuron0x288bbe0()*-0.114526);
}

double NNfunction_sb_uLuR::synapse0x2898770() {
   return (neuron0x288bf20()*0.0553523);
}

double NNfunction_sb_uLuR::synapse0x28987b0() {
   return (neuron0x288c260()*0.741256);
}

double NNfunction_sb_uLuR::synapse0x28987f0() {
   return (neuron0x288c5a0()*-0.127614);
}

double NNfunction_sb_uLuR::synapse0x2898830() {
   return (neuron0x288c8e0()*0.37207);
}

double NNfunction_sb_uLuR::synapse0x2898870() {
   return (neuron0x288cc20()*-0.16683);
}

double NNfunction_sb_uLuR::synapse0x28988b0() {
   return (neuron0x288cf60()*0.023884);
}

double NNfunction_sb_uLuR::synapse0x28988f0() {
   return (neuron0x288d2a0()*-0.602937);
}

double NNfunction_sb_uLuR::synapse0x2898930() {
   return (neuron0x288d5e0()*0.244184);
}

double NNfunction_sb_uLuR::synapse0x2898970() {
   return (neuron0x288d920()*0.412522);
}

double NNfunction_sb_uLuR::synapse0x28989b0() {
   return (neuron0x288dc60()*-0.0201561);
}

double NNfunction_sb_uLuR::synapse0x28989f0() {
   return (neuron0x288dfa0()*0.0969762);
}

double NNfunction_sb_uLuR::synapse0x2898a30() {
   return (neuron0x288e2e0()*0.258827);
}

double NNfunction_sb_uLuR::synapse0x2898a70() {
   return (neuron0x288e620()*0.620524);
}

double NNfunction_sb_uLuR::synapse0x2898500() {
   return (neuron0x288e960()*-0.294613);
}

double NNfunction_sb_uLuR::synapse0x2898540() {
   return (neuron0x288eec0()*-0.701383);
}

double NNfunction_sb_uLuR::synapse0x2898bc0() {
   return (neuron0x288f0e0()*0.080529);
}

double NNfunction_sb_uLuR::synapse0x2898c00() {
   return (neuron0x288f420()*-0.0293977);
}

double NNfunction_sb_uLuR::synapse0x2898c40() {
   return (neuron0x288f760()*-0.152302);
}

double NNfunction_sb_uLuR::synapse0x2898c80() {
   return (neuron0x288faa0()*-0.587465);
}

double NNfunction_sb_uLuR::synapse0x2898cc0() {
   return (neuron0x288fde0()*0.723614);
}

double NNfunction_sb_uLuR::synapse0x2898d00() {
   return (neuron0x2890120()*0.087413);
}

double NNfunction_sb_uLuR::synapse0x2899080() {
   return (neuron0x288b560()*0.00522518);
}

double NNfunction_sb_uLuR::synapse0x28990c0() {
   return (neuron0x288b8a0()*-0.058636);
}

double NNfunction_sb_uLuR::synapse0x2899100() {
   return (neuron0x288bbe0()*-0.0650058);
}

double NNfunction_sb_uLuR::synapse0x2899140() {
   return (neuron0x288bf20()*-0.587944);
}

double NNfunction_sb_uLuR::synapse0x2899180() {
   return (neuron0x288c260()*0.00454177);
}

double NNfunction_sb_uLuR::synapse0x28991c0() {
   return (neuron0x288c5a0()*0.0636733);
}

double NNfunction_sb_uLuR::synapse0x2899200() {
   return (neuron0x288c8e0()*0.0675676);
}

double NNfunction_sb_uLuR::synapse0x2899240() {
   return (neuron0x288cc20()*-0.116139);
}

double NNfunction_sb_uLuR::synapse0x2899280() {
   return (neuron0x288cf60()*-0.0547405);
}

double NNfunction_sb_uLuR::synapse0x28992c0() {
   return (neuron0x288d2a0()*-0.0321062);
}

double NNfunction_sb_uLuR::synapse0x2899300() {
   return (neuron0x288d5e0()*0.0909413);
}

double NNfunction_sb_uLuR::synapse0x2899340() {
   return (neuron0x288d920()*-0.492644);
}

double NNfunction_sb_uLuR::synapse0x2899380() {
   return (neuron0x288dc60()*0.00596299);
}

double NNfunction_sb_uLuR::synapse0x28993c0() {
   return (neuron0x288dfa0()*-0.00572032);
}

double NNfunction_sb_uLuR::synapse0x2899400() {
   return (neuron0x288e2e0()*-0.319449);
}

double NNfunction_sb_uLuR::synapse0x2899440() {
   return (neuron0x288e620()*-0.0700633);
}

double NNfunction_sb_uLuR::synapse0x2898ed0() {
   return (neuron0x288e960()*0.0306246);
}

double NNfunction_sb_uLuR::synapse0x2898f10() {
   return (neuron0x288eec0()*-0.0659119);
}

double NNfunction_sb_uLuR::synapse0x2899590() {
   return (neuron0x288f0e0()*0.0733103);
}

double NNfunction_sb_uLuR::synapse0x28995d0() {
   return (neuron0x288f420()*-0.078095);
}

double NNfunction_sb_uLuR::synapse0x2899610() {
   return (neuron0x288f760()*-0.00529037);
}

double NNfunction_sb_uLuR::synapse0x2899650() {
   return (neuron0x288faa0()*-0.0795359);
}

double NNfunction_sb_uLuR::synapse0x2899690() {
   return (neuron0x288fde0()*-0.0155062);
}

double NNfunction_sb_uLuR::synapse0x28996d0() {
   return (neuron0x2890120()*-0.0339193);
}

double NNfunction_sb_uLuR::synapse0x2899a50() {
   return (neuron0x288b560()*-0.0182957);
}

double NNfunction_sb_uLuR::synapse0x2899a90() {
   return (neuron0x288b8a0()*-0.0387272);
}

double NNfunction_sb_uLuR::synapse0x2899ad0() {
   return (neuron0x288bbe0()*-0.0775747);
}

double NNfunction_sb_uLuR::synapse0x2899b10() {
   return (neuron0x288bf20()*-0.367779);
}

double NNfunction_sb_uLuR::synapse0x2899b50() {
   return (neuron0x288c260()*0.00773642);
}

double NNfunction_sb_uLuR::synapse0x2899b90() {
   return (neuron0x288c5a0()*0.0234611);
}

double NNfunction_sb_uLuR::synapse0x2899bd0() {
   return (neuron0x288c8e0()*0.0234599);
}

double NNfunction_sb_uLuR::synapse0x2899c10() {
   return (neuron0x288cc20()*0.0318385);
}

double NNfunction_sb_uLuR::synapse0x2899c50() {
   return (neuron0x288cf60()*0.0326501);
}

double NNfunction_sb_uLuR::synapse0x2899c90() {
   return (neuron0x288d2a0()*-0.0563309);
}

double NNfunction_sb_uLuR::synapse0x2899cd0() {
   return (neuron0x288d5e0()*0.00603106);
}

double NNfunction_sb_uLuR::synapse0x2899d10() {
   return (neuron0x288d920()*0.14921);
}

double NNfunction_sb_uLuR::synapse0x2899d50() {
   return (neuron0x288dc60()*-0.126593);
}

double NNfunction_sb_uLuR::synapse0x2899d90() {
   return (neuron0x288dfa0()*-0.00500321);
}

double NNfunction_sb_uLuR::synapse0x2899dd0() {
   return (neuron0x288e2e0()*0.213661);
}

double NNfunction_sb_uLuR::synapse0x2899e10() {
   return (neuron0x288e620()*-0.0366511);
}

double NNfunction_sb_uLuR::synapse0x28998a0() {
   return (neuron0x288e960()*0.0224776);
}

double NNfunction_sb_uLuR::synapse0x28998e0() {
   return (neuron0x288eec0()*-0.0261422);
}

double NNfunction_sb_uLuR::synapse0x2899f60() {
   return (neuron0x288f0e0()*-0.0719257);
}

double NNfunction_sb_uLuR::synapse0x2899fa0() {
   return (neuron0x288f420()*0.0171914);
}

double NNfunction_sb_uLuR::synapse0x2899fe0() {
   return (neuron0x288f760()*-0.000481335);
}

double NNfunction_sb_uLuR::synapse0x289a020() {
   return (neuron0x288faa0()*-0.022285);
}

double NNfunction_sb_uLuR::synapse0x289a060() {
   return (neuron0x288fde0()*-0.0275836);
}

double NNfunction_sb_uLuR::synapse0x289a0a0() {
   return (neuron0x2890120()*0.00726263);
}

double NNfunction_sb_uLuR::synapse0x289a420() {
   return (neuron0x288b560()*0.0273442);
}

double NNfunction_sb_uLuR::synapse0x288b780() {
   return (neuron0x288b8a0()*-0.0259886);
}

double NNfunction_sb_uLuR::synapse0x288b7c0() {
   return (neuron0x288bbe0()*-0.0401004);
}

double NNfunction_sb_uLuR::synapse0x288bac0() {
   return (neuron0x288bf20()*0.276959);
}

double NNfunction_sb_uLuR::synapse0x288bb00() {
   return (neuron0x288c260()*0.0147584);
}

double NNfunction_sb_uLuR::synapse0x288be00() {
   return (neuron0x288c5a0()*0.0124284);
}

double NNfunction_sb_uLuR::synapse0x288be40() {
   return (neuron0x288c8e0()*0.00286984);
}

double NNfunction_sb_uLuR::synapse0x288c140() {
   return (neuron0x288cc20()*-0.0725831);
}

double NNfunction_sb_uLuR::synapse0x288c180() {
   return (neuron0x288cf60()*0.0428097);
}

double NNfunction_sb_uLuR::synapse0x288c480() {
   return (neuron0x288d2a0()*0.0546751);
}

double NNfunction_sb_uLuR::synapse0x288c4c0() {
   return (neuron0x288d5e0()*-0.00335972);
}

double NNfunction_sb_uLuR::synapse0x288c7c0() {
   return (neuron0x288d920()*-0.0632673);
}

double NNfunction_sb_uLuR::synapse0x288c800() {
   return (neuron0x288dc60()*-0.27339);
}

double NNfunction_sb_uLuR::synapse0x288cb00() {
   return (neuron0x288dfa0()*-0.024676);
}

double NNfunction_sb_uLuR::synapse0x288cb40() {
   return (neuron0x288e2e0()*-0.105532);
}

double NNfunction_sb_uLuR::synapse0x288ce40() {
   return (neuron0x288e620()*-0.0786946);
}

double NNfunction_sb_uLuR::synapse0x288ce80() {
   return (neuron0x288e960()*0.00108614);
}

double NNfunction_sb_uLuR::synapse0x288d180() {
   return (neuron0x288eec0()*-0.24893);
}

double NNfunction_sb_uLuR::synapse0x288d1c0() {
   return (neuron0x288f0e0()*-0.0249756);
}

double NNfunction_sb_uLuR::synapse0x288d4c0() {
   return (neuron0x288f420()*0.0588871);
}

double NNfunction_sb_uLuR::synapse0x288d500() {
   return (neuron0x288f760()*0.0436333);
}

double NNfunction_sb_uLuR::synapse0x288d800() {
   return (neuron0x288faa0()*0.00979366);
}

double NNfunction_sb_uLuR::synapse0x288d840() {
   return (neuron0x288fde0()*0.0107657);
}

double NNfunction_sb_uLuR::synapse0x288db40() {
   return (neuron0x2890120()*0.0208454);
}

double NNfunction_sb_uLuR::synapse0x288db80() {
   return (neuron0x288b560()*-0.00353164);
}

double NNfunction_sb_uLuR::synapse0x288e840() {
   return (neuron0x288b8a0()*-0.00241549);
}

double NNfunction_sb_uLuR::synapse0x288e880() {
   return (neuron0x288bbe0()*0.012685);
}

double NNfunction_sb_uLuR::synapse0x289a270() {
   return (neuron0x288bf20()*6.3395);
}

double NNfunction_sb_uLuR::synapse0x289a2b0() {
   return (neuron0x288c260()*-0.00470486);
}

double NNfunction_sb_uLuR::synapse0x288eb80() {
   return (neuron0x288c5a0()*-0.000305604);
}

double NNfunction_sb_uLuR::synapse0x288ebc0() {
   return (neuron0x288c8e0()*0.00837137);
}

double NNfunction_sb_uLuR::synapse0x263cb50() {
   return (neuron0x288cc20()*0.0172179);
}

double NNfunction_sb_uLuR::synapse0x263cb90() {
   return (neuron0x288cf60()*0.00561856);
}

double NNfunction_sb_uLuR::synapse0x288f300() {
   return (neuron0x288d2a0()*0.00624357);
}

double NNfunction_sb_uLuR::synapse0x288f340() {
   return (neuron0x288d5e0()*0.00385132);
}

double NNfunction_sb_uLuR::synapse0x288f640() {
   return (neuron0x288d920()*-0.127057);
}

double NNfunction_sb_uLuR::synapse0x288f680() {
   return (neuron0x288dc60()*0.0198763);
}

double NNfunction_sb_uLuR::synapse0x288f980() {
   return (neuron0x288dfa0()*0.025162);
}

double NNfunction_sb_uLuR::synapse0x288f9c0() {
   return (neuron0x288e2e0()*1.11691);
}

double NNfunction_sb_uLuR::synapse0x288fcc0() {
   return (neuron0x288e620()*-0.0121416);
}

double NNfunction_sb_uLuR::synapse0x288fd00() {
   return (neuron0x288e960()*0.0154972);
}

double NNfunction_sb_uLuR::synapse0x2890000() {
   return (neuron0x288eec0()*-0.010134);
}

double NNfunction_sb_uLuR::synapse0x2890040() {
   return (neuron0x288f0e0()*-0.0102214);
}

double NNfunction_sb_uLuR::synapse0x2890340() {
   return (neuron0x288f420()*-0.021679);
}

double NNfunction_sb_uLuR::synapse0x2890380() {
   return (neuron0x288f760()*-0.00499463);
}

double NNfunction_sb_uLuR::synapse0x288de80() {
   return (neuron0x288faa0()*-0.00315174);
}

double NNfunction_sb_uLuR::synapse0x288dec0() {
   return (neuron0x288fde0()*0.00166814);
}

double NNfunction_sb_uLuR::synapse0x289c190() {
   return (neuron0x2890120()*-0.000544169);
}

double NNfunction_sb_uLuR::synapse0x289c510() {
   return (neuron0x288b560()*-0.0986529);
}

double NNfunction_sb_uLuR::synapse0x289c550() {
   return (neuron0x288b8a0()*0.163478);
}

double NNfunction_sb_uLuR::synapse0x289c590() {
   return (neuron0x288bbe0()*-0.0925944);
}

double NNfunction_sb_uLuR::synapse0x289c5d0() {
   return (neuron0x288bf20()*0.57115);
}

double NNfunction_sb_uLuR::synapse0x289c610() {
   return (neuron0x288c260()*0.182653);
}

double NNfunction_sb_uLuR::synapse0x289c650() {
   return (neuron0x288c5a0()*-0.124792);
}

double NNfunction_sb_uLuR::synapse0x289c690() {
   return (neuron0x288c8e0()*-0.00660078);
}

double NNfunction_sb_uLuR::synapse0x289c6d0() {
   return (neuron0x288cc20()*-0.189726);
}

double NNfunction_sb_uLuR::synapse0x289c710() {
   return (neuron0x288cf60()*-0.0929199);
}

double NNfunction_sb_uLuR::synapse0x289c750() {
   return (neuron0x288d2a0()*-0.0195117);
}

double NNfunction_sb_uLuR::synapse0x289c790() {
   return (neuron0x288d5e0()*0.192292);
}

double NNfunction_sb_uLuR::synapse0x289c7d0() {
   return (neuron0x288d920()*-0.132493);
}

double NNfunction_sb_uLuR::synapse0x289c810() {
   return (neuron0x288dc60()*0.0383816);
}

double NNfunction_sb_uLuR::synapse0x289c850() {
   return (neuron0x288dfa0()*0.03971);
}

double NNfunction_sb_uLuR::synapse0x289c890() {
   return (neuron0x288e2e0()*-0.113036);
}

double NNfunction_sb_uLuR::synapse0x289c8d0() {
   return (neuron0x288e620()*0.264106);
}

double NNfunction_sb_uLuR::synapse0x289c360() {
   return (neuron0x288e960()*-0.0941932);
}

double NNfunction_sb_uLuR::synapse0x289c3a0() {
   return (neuron0x288eec0()*-0.125834);
}

double NNfunction_sb_uLuR::synapse0x289ca20() {
   return (neuron0x288f0e0()*-0.320945);
}

double NNfunction_sb_uLuR::synapse0x289ca60() {
   return (neuron0x288f420()*-0.0192614);
}

double NNfunction_sb_uLuR::synapse0x289caa0() {
   return (neuron0x288f760()*0.108);
}

double NNfunction_sb_uLuR::synapse0x289cae0() {
   return (neuron0x288faa0()*-0.0918888);
}

double NNfunction_sb_uLuR::synapse0x289cb20() {
   return (neuron0x288fde0()*-0.280159);
}

double NNfunction_sb_uLuR::synapse0x289cb60() {
   return (neuron0x2890120()*-0.0326919);
}

double NNfunction_sb_uLuR::synapse0x289cee0() {
   return (neuron0x288b560()*0.0920525);
}

double NNfunction_sb_uLuR::synapse0x289cf20() {
   return (neuron0x288b8a0()*-0.091725);
}

double NNfunction_sb_uLuR::synapse0x289cf60() {
   return (neuron0x288bbe0()*-0.0654449);
}

double NNfunction_sb_uLuR::synapse0x289cfa0() {
   return (neuron0x288bf20()*0.512753);
}

double NNfunction_sb_uLuR::synapse0x289cfe0() {
   return (neuron0x288c260()*0.111542);
}

double NNfunction_sb_uLuR::synapse0x289d020() {
   return (neuron0x288c5a0()*0.279701);
}

double NNfunction_sb_uLuR::synapse0x289d060() {
   return (neuron0x288c8e0()*0.327478);
}

double NNfunction_sb_uLuR::synapse0x289d0a0() {
   return (neuron0x288cc20()*0.00642396);
}

double NNfunction_sb_uLuR::synapse0x289d0e0() {
   return (neuron0x288cf60()*-0.0782642);
}

double NNfunction_sb_uLuR::synapse0x289d120() {
   return (neuron0x288d2a0()*-0.220517);
}

double NNfunction_sb_uLuR::synapse0x289d160() {
   return (neuron0x288d5e0()*-0.104299);
}

double NNfunction_sb_uLuR::synapse0x289d1a0() {
   return (neuron0x288d920()*0.944864);
}

double NNfunction_sb_uLuR::synapse0x289d1e0() {
   return (neuron0x288dc60()*0.122765);
}

double NNfunction_sb_uLuR::synapse0x289d220() {
   return (neuron0x288dfa0()*0.120837);
}

double NNfunction_sb_uLuR::synapse0x289d260() {
   return (neuron0x288e2e0()*-0.129309);
}

double NNfunction_sb_uLuR::synapse0x289d2a0() {
   return (neuron0x288e620()*-0.0387084);
}

double NNfunction_sb_uLuR::synapse0x289cd30() {
   return (neuron0x288e960()*-0.00946376);
}

double NNfunction_sb_uLuR::synapse0x289cd70() {
   return (neuron0x288eec0()*0.0956231);
}

double NNfunction_sb_uLuR::synapse0x289d3f0() {
   return (neuron0x288f0e0()*-0.108665);
}

double NNfunction_sb_uLuR::synapse0x289d430() {
   return (neuron0x288f420()*-0.0454355);
}

double NNfunction_sb_uLuR::synapse0x289d470() {
   return (neuron0x288f760()*0.0539517);
}

double NNfunction_sb_uLuR::synapse0x289d4b0() {
   return (neuron0x288faa0()*-0.0022106);
}

double NNfunction_sb_uLuR::synapse0x289d4f0() {
   return (neuron0x288fde0()*-0.0295398);
}

double NNfunction_sb_uLuR::synapse0x289d530() {
   return (neuron0x2890120()*0.074787);
}

double NNfunction_sb_uLuR::synapse0x289d8b0() {
   return (neuron0x288b560()*-0.430989);
}

double NNfunction_sb_uLuR::synapse0x289d8f0() {
   return (neuron0x288b8a0()*0.194332);
}

double NNfunction_sb_uLuR::synapse0x289d930() {
   return (neuron0x288bbe0()*-0.63502);
}

double NNfunction_sb_uLuR::synapse0x289d970() {
   return (neuron0x288bf20()*-0.207734);
}

double NNfunction_sb_uLuR::synapse0x289d9b0() {
   return (neuron0x288c260()*0.589054);
}

double NNfunction_sb_uLuR::synapse0x289d9f0() {
   return (neuron0x288c5a0()*-0.545337);
}

double NNfunction_sb_uLuR::synapse0x289da30() {
   return (neuron0x288c8e0()*0.0863712);
}

double NNfunction_sb_uLuR::synapse0x289da70() {
   return (neuron0x288cc20()*-0.609422);
}

double NNfunction_sb_uLuR::synapse0x289dab0() {
   return (neuron0x288cf60()*0.629209);
}

double NNfunction_sb_uLuR::synapse0x289daf0() {
   return (neuron0x288d2a0()*0.183183);
}

double NNfunction_sb_uLuR::synapse0x289db30() {
   return (neuron0x288d5e0()*-0.280191);
}

double NNfunction_sb_uLuR::synapse0x289db70() {
   return (neuron0x288d920()*-0.327182);
}

double NNfunction_sb_uLuR::synapse0x289dbb0() {
   return (neuron0x288dc60()*-0.52907);
}

double NNfunction_sb_uLuR::synapse0x289dbf0() {
   return (neuron0x288dfa0()*-0.234536);
}

double NNfunction_sb_uLuR::synapse0x289dc30() {
   return (neuron0x288e2e0()*0.0712384);
}

double NNfunction_sb_uLuR::synapse0x289dc70() {
   return (neuron0x288e620()*0.604443);
}

double NNfunction_sb_uLuR::synapse0x289d700() {
   return (neuron0x288e960()*0.43262);
}

double NNfunction_sb_uLuR::synapse0x289d740() {
   return (neuron0x288eec0()*-0.390889);
}

double NNfunction_sb_uLuR::synapse0x289ddc0() {
   return (neuron0x288f0e0()*-0.03779);
}

double NNfunction_sb_uLuR::synapse0x289de00() {
   return (neuron0x288f420()*0.124674);
}

double NNfunction_sb_uLuR::synapse0x289de40() {
   return (neuron0x288f760()*-0.0684166);
}

double NNfunction_sb_uLuR::synapse0x289de80() {
   return (neuron0x288faa0()*0.206258);
}

double NNfunction_sb_uLuR::synapse0x289dec0() {
   return (neuron0x288fde0()*-0.283152);
}

double NNfunction_sb_uLuR::synapse0x289df00() {
   return (neuron0x2890120()*-0.497919);
}

double NNfunction_sb_uLuR::synapse0x289e280() {
   return (neuron0x288b560()*0.0624281);
}

double NNfunction_sb_uLuR::synapse0x289e2c0() {
   return (neuron0x288b8a0()*-0.0102965);
}

double NNfunction_sb_uLuR::synapse0x289e300() {
   return (neuron0x288bbe0()*-0.0635683);
}

double NNfunction_sb_uLuR::synapse0x289e340() {
   return (neuron0x288bf20()*0.0937732);
}

double NNfunction_sb_uLuR::synapse0x289e380() {
   return (neuron0x288c260()*0.0512679);
}

double NNfunction_sb_uLuR::synapse0x289e3c0() {
   return (neuron0x288c5a0()*-0.0248191);
}

double NNfunction_sb_uLuR::synapse0x289e400() {
   return (neuron0x288c8e0()*-0.0940918);
}

double NNfunction_sb_uLuR::synapse0x289e440() {
   return (neuron0x288cc20()*0.00620148);
}

double NNfunction_sb_uLuR::synapse0x289e480() {
   return (neuron0x288cf60()*-0.0269501);
}

double NNfunction_sb_uLuR::synapse0x289e4c0() {
   return (neuron0x288d2a0()*0.00688161);
}

double NNfunction_sb_uLuR::synapse0x289e500() {
   return (neuron0x288d5e0()*-0.0535448);
}

double NNfunction_sb_uLuR::synapse0x289e540() {
   return (neuron0x288d920()*0.836753);
}

double NNfunction_sb_uLuR::synapse0x289e580() {
   return (neuron0x288dc60()*0.0788986);
}

double NNfunction_sb_uLuR::synapse0x289e5c0() {
   return (neuron0x288dfa0()*0.0552597);
}

double NNfunction_sb_uLuR::synapse0x289e600() {
   return (neuron0x288e2e0()*0.149287);
}

double NNfunction_sb_uLuR::synapse0x289e640() {
   return (neuron0x288e620()*0.0583786);
}

double NNfunction_sb_uLuR::synapse0x289e0d0() {
   return (neuron0x288e960()*-0.000416754);
}

double NNfunction_sb_uLuR::synapse0x289e110() {
   return (neuron0x288eec0()*0.0487044);
}

double NNfunction_sb_uLuR::synapse0x289e790() {
   return (neuron0x288f0e0()*0.0204603);
}

double NNfunction_sb_uLuR::synapse0x289e7d0() {
   return (neuron0x288f420()*0.0401409);
}

double NNfunction_sb_uLuR::synapse0x289e810() {
   return (neuron0x288f760()*-0.0103265);
}

double NNfunction_sb_uLuR::synapse0x289e850() {
   return (neuron0x288faa0()*0.0361066);
}

double NNfunction_sb_uLuR::synapse0x289e890() {
   return (neuron0x288fde0()*-0.0167484);
}

double NNfunction_sb_uLuR::synapse0x289e8d0() {
   return (neuron0x2890120()*-0.00763562);
}

double NNfunction_sb_uLuR::synapse0x289ec50() {
   return (neuron0x288b560()*-0.0314806);
}

double NNfunction_sb_uLuR::synapse0x289ec90() {
   return (neuron0x288b8a0()*0.116301);
}

double NNfunction_sb_uLuR::synapse0x289ecd0() {
   return (neuron0x288bbe0()*-0.130082);
}

double NNfunction_sb_uLuR::synapse0x289ed10() {
   return (neuron0x288bf20()*1.86074);
}

double NNfunction_sb_uLuR::synapse0x289ed50() {
   return (neuron0x288c260()*0.0452489);
}

double NNfunction_sb_uLuR::synapse0x289ed90() {
   return (neuron0x288c5a0()*-0.00763396);
}

double NNfunction_sb_uLuR::synapse0x289edd0() {
   return (neuron0x288c8e0()*-0.0431132);
}

double NNfunction_sb_uLuR::synapse0x289ee10() {
   return (neuron0x288cc20()*0.100106);
}

double NNfunction_sb_uLuR::synapse0x289ee50() {
   return (neuron0x288cf60()*-0.110919);
}

double NNfunction_sb_uLuR::synapse0x2897010() {
   return (neuron0x288d2a0()*-0.0244368);
}

double NNfunction_sb_uLuR::synapse0x2897050() {
   return (neuron0x288d5e0()*0.0824983);
}

double NNfunction_sb_uLuR::synapse0x2897090() {
   return (neuron0x288d920()*-0.152095);
}

double NNfunction_sb_uLuR::synapse0x28970d0() {
   return (neuron0x288dc60()*0.00277897);
}

double NNfunction_sb_uLuR::synapse0x2897110() {
   return (neuron0x288dfa0()*-0.0964347);
}

double NNfunction_sb_uLuR::synapse0x2897150() {
   return (neuron0x288e2e0()*-3.04458);
}

double NNfunction_sb_uLuR::synapse0x2897190() {
   return (neuron0x288e620()*-0.0780156);
}

double NNfunction_sb_uLuR::synapse0x289eaa0() {
   return (neuron0x288e960()*-0.192978);
}

double NNfunction_sb_uLuR::synapse0x289eae0() {
   return (neuron0x288eec0()*0.0791879);
}

double NNfunction_sb_uLuR::synapse0x28972e0() {
   return (neuron0x288f0e0()*0.0169062);
}

double NNfunction_sb_uLuR::synapse0x2897320() {
   return (neuron0x288f420()*0.121844);
}

double NNfunction_sb_uLuR::synapse0x2897360() {
   return (neuron0x288f760()*0.0874551);
}

double NNfunction_sb_uLuR::synapse0x28973a0() {
   return (neuron0x288faa0()*-0.0504453);
}

double NNfunction_sb_uLuR::synapse0x28973e0() {
   return (neuron0x288fde0()*-0.053855);
}

double NNfunction_sb_uLuR::synapse0x2897420() {
   return (neuron0x2890120()*-0.0314126);
}

double NNfunction_sb_uLuR::synapse0x28977a0() {
   return (neuron0x288b560()*-0.276626);
}

double NNfunction_sb_uLuR::synapse0x28977e0() {
   return (neuron0x288b8a0()*0.45572);
}

double NNfunction_sb_uLuR::synapse0x2897820() {
   return (neuron0x288bbe0()*-0.747682);
}

double NNfunction_sb_uLuR::synapse0x2897860() {
   return (neuron0x288bf20()*0.366354);
}

double NNfunction_sb_uLuR::synapse0x28978a0() {
   return (neuron0x288c260()*-0.2992);
}

double NNfunction_sb_uLuR::synapse0x28978e0() {
   return (neuron0x288c5a0()*-0.0963995);
}

double NNfunction_sb_uLuR::synapse0x2897920() {
   return (neuron0x288c8e0()*0.173982);
}

double NNfunction_sb_uLuR::synapse0x2897960() {
   return (neuron0x288cc20()*-0.164893);
}

double NNfunction_sb_uLuR::synapse0x28979a0() {
   return (neuron0x288cf60()*0.311026);
}

double NNfunction_sb_uLuR::synapse0x28979e0() {
   return (neuron0x288d2a0()*-0.0966791);
}

double NNfunction_sb_uLuR::synapse0x2897a20() {
   return (neuron0x288d5e0()*-0.379939);
}

double NNfunction_sb_uLuR::synapse0x2897a60() {
   return (neuron0x288d920()*-0.249999);
}

double NNfunction_sb_uLuR::synapse0x2897aa0() {
   return (neuron0x288dc60()*0.558223);
}

double NNfunction_sb_uLuR::synapse0x2897ae0() {
   return (neuron0x288dfa0()*0.110505);
}

double NNfunction_sb_uLuR::synapse0x2897b20() {
   return (neuron0x288e2e0()*-0.0163168);
}

double NNfunction_sb_uLuR::synapse0x2897b60() {
   return (neuron0x288e620()*-0.301567);
}

double NNfunction_sb_uLuR::synapse0x28975f0() {
   return (neuron0x288e960()*0.101641);
}

double NNfunction_sb_uLuR::synapse0x2897630() {
   return (neuron0x288eec0()*0.470451);
}

double NNfunction_sb_uLuR::synapse0x2897cb0() {
   return (neuron0x288f0e0()*-0.236658);
}

double NNfunction_sb_uLuR::synapse0x2897cf0() {
   return (neuron0x288f420()*-0.0992865);
}

double NNfunction_sb_uLuR::synapse0x2897d30() {
   return (neuron0x288f760()*-0.0571418);
}

double NNfunction_sb_uLuR::synapse0x2897d70() {
   return (neuron0x288faa0()*0.0575319);
}

double NNfunction_sb_uLuR::synapse0x2897db0() {
   return (neuron0x288fde0()*-0.175706);
}

double NNfunction_sb_uLuR::synapse0x2897df0() {
   return (neuron0x2890120()*-0.208601);
}

double NNfunction_sb_uLuR::synapse0x2897fc0() {
   return (neuron0x288b560()*0.0376258);
}

double NNfunction_sb_uLuR::synapse0x28a1050() {
   return (neuron0x288b8a0()*-0.26776);
}

double NNfunction_sb_uLuR::synapse0x28a1090() {
   return (neuron0x288bbe0()*-0.413257);
}

double NNfunction_sb_uLuR::synapse0x28a10d0() {
   return (neuron0x288bf20()*0.135815);
}

double NNfunction_sb_uLuR::synapse0x28a1110() {
   return (neuron0x288c260()*-0.00657262);
}

double NNfunction_sb_uLuR::synapse0x28a1150() {
   return (neuron0x288c5a0()*0.354559);
}

double NNfunction_sb_uLuR::synapse0x28a1190() {
   return (neuron0x288c8e0()*-0.333442);
}

double NNfunction_sb_uLuR::synapse0x28a11d0() {
   return (neuron0x288cc20()*-0.0817221);
}

double NNfunction_sb_uLuR::synapse0x28a1210() {
   return (neuron0x288cf60()*0.334741);
}

double NNfunction_sb_uLuR::synapse0x28a1250() {
   return (neuron0x288d2a0()*-0.196504);
}

double NNfunction_sb_uLuR::synapse0x28a1290() {
   return (neuron0x288d5e0()*-0.0137518);
}

double NNfunction_sb_uLuR::synapse0x28a12d0() {
   return (neuron0x288d920()*0.314147);
}

double NNfunction_sb_uLuR::synapse0x28a1310() {
   return (neuron0x288dc60()*-0.0925453);
}

double NNfunction_sb_uLuR::synapse0x28a1350() {
   return (neuron0x288dfa0()*-0.0700164);
}

double NNfunction_sb_uLuR::synapse0x28a1390() {
   return (neuron0x288e2e0()*0.178197);
}

double NNfunction_sb_uLuR::synapse0x28a13d0() {
   return (neuron0x288e620()*0.0527969);
}

double NNfunction_sb_uLuR::synapse0x28a0ea0() {
   return (neuron0x288e960()*0.441538);
}

double NNfunction_sb_uLuR::synapse0x28a0ee0() {
   return (neuron0x288eec0()*-0.0989236);
}

double NNfunction_sb_uLuR::synapse0x28a1520() {
   return (neuron0x288f0e0()*-0.273058);
}

double NNfunction_sb_uLuR::synapse0x28a1560() {
   return (neuron0x288f420()*-0.118794);
}

double NNfunction_sb_uLuR::synapse0x28a15a0() {
   return (neuron0x288f760()*-0.150175);
}

double NNfunction_sb_uLuR::synapse0x28a15e0() {
   return (neuron0x288faa0()*-0.292356);
}

double NNfunction_sb_uLuR::synapse0x28a1620() {
   return (neuron0x288fde0()*-0.381059);
}

double NNfunction_sb_uLuR::synapse0x28a1660() {
   return (neuron0x2890120()*-0.445696);
}

double NNfunction_sb_uLuR::synapse0x28a19e0() {
   return (neuron0x288b560()*0.0464333);
}

double NNfunction_sb_uLuR::synapse0x28a1a20() {
   return (neuron0x288b8a0()*-0.207103);
}

double NNfunction_sb_uLuR::synapse0x28a1a60() {
   return (neuron0x288bbe0()*-0.103428);
}

double NNfunction_sb_uLuR::synapse0x28a1aa0() {
   return (neuron0x288bf20()*1.03468);
}

double NNfunction_sb_uLuR::synapse0x28a1ae0() {
   return (neuron0x288c260()*-0.00263354);
}

double NNfunction_sb_uLuR::synapse0x28a1b20() {
   return (neuron0x288c5a0()*-0.00414864);
}

double NNfunction_sb_uLuR::synapse0x28a1b60() {
   return (neuron0x288c8e0()*0.107575);
}

double NNfunction_sb_uLuR::synapse0x28a1ba0() {
   return (neuron0x288cc20()*-0.0902166);
}

double NNfunction_sb_uLuR::synapse0x28a1be0() {
   return (neuron0x288cf60()*-0.147677);
}

double NNfunction_sb_uLuR::synapse0x28a1c20() {
   return (neuron0x288d2a0()*0.122299);
}

double NNfunction_sb_uLuR::synapse0x28a1c60() {
   return (neuron0x288d5e0()*-0.318);
}

double NNfunction_sb_uLuR::synapse0x28a1ca0() {
   return (neuron0x288d920()*-0.571623);
}

double NNfunction_sb_uLuR::synapse0x28a1ce0() {
   return (neuron0x288dc60()*0.091476);
}

double NNfunction_sb_uLuR::synapse0x28a1d20() {
   return (neuron0x288dfa0()*0.0839686);
}

double NNfunction_sb_uLuR::synapse0x28a1d60() {
   return (neuron0x288e2e0()*-0.396989);
}

double NNfunction_sb_uLuR::synapse0x28a1da0() {
   return (neuron0x288e620()*0.00334415);
}

double NNfunction_sb_uLuR::synapse0x28a1830() {
   return (neuron0x288e960()*0.148413);
}

double NNfunction_sb_uLuR::synapse0x28a1870() {
   return (neuron0x288eec0()*-0.273416);
}

double NNfunction_sb_uLuR::synapse0x28a1ef0() {
   return (neuron0x288f0e0()*-0.0743267);
}

double NNfunction_sb_uLuR::synapse0x28a1f30() {
   return (neuron0x288f420()*-0.196058);
}

double NNfunction_sb_uLuR::synapse0x28a1f70() {
   return (neuron0x288f760()*0.0570671);
}

double NNfunction_sb_uLuR::synapse0x28a1fb0() {
   return (neuron0x288faa0()*0.0817038);
}

double NNfunction_sb_uLuR::synapse0x28a1ff0() {
   return (neuron0x288fde0()*0.00206705);
}

double NNfunction_sb_uLuR::synapse0x28a2030() {
   return (neuron0x2890120()*0.0387827);
}

double NNfunction_sb_uLuR::synapse0x28a23b0() {
   return (neuron0x288b560()*-0.0835386);
}

double NNfunction_sb_uLuR::synapse0x28a23f0() {
   return (neuron0x288b8a0()*0.0480149);
}

double NNfunction_sb_uLuR::synapse0x28a2430() {
   return (neuron0x288bbe0()*-0.352015);
}

double NNfunction_sb_uLuR::synapse0x28a2470() {
   return (neuron0x288bf20()*0.0107187);
}

double NNfunction_sb_uLuR::synapse0x28a24b0() {
   return (neuron0x288c260()*-0.0622357);
}

double NNfunction_sb_uLuR::synapse0x28a24f0() {
   return (neuron0x288c5a0()*-0.0337552);
}

double NNfunction_sb_uLuR::synapse0x28a2530() {
   return (neuron0x288c8e0()*-0.105781);
}

double NNfunction_sb_uLuR::synapse0x28a2570() {
   return (neuron0x288cc20()*-0.089447);
}

double NNfunction_sb_uLuR::synapse0x28a25b0() {
   return (neuron0x288cf60()*0.102563);
}

double NNfunction_sb_uLuR::synapse0x28a25f0() {
   return (neuron0x288d2a0()*-0.0883691);
}

double NNfunction_sb_uLuR::synapse0x28a2630() {
   return (neuron0x288d5e0()*-0.071502);
}

double NNfunction_sb_uLuR::synapse0x28a2670() {
   return (neuron0x288d920()*-0.0576805);
}

double NNfunction_sb_uLuR::synapse0x28a26b0() {
   return (neuron0x288dc60()*0.00893364);
}

double NNfunction_sb_uLuR::synapse0x28a26f0() {
   return (neuron0x288dfa0()*-0.0547643);
}

double NNfunction_sb_uLuR::synapse0x28a2730() {
   return (neuron0x288e2e0()*-0.0784513);
}

double NNfunction_sb_uLuR::synapse0x28a2770() {
   return (neuron0x288e620()*-0.045865);
}

double NNfunction_sb_uLuR::synapse0x28a2200() {
   return (neuron0x288e960()*-0.0636724);
}

double NNfunction_sb_uLuR::synapse0x28a2240() {
   return (neuron0x288eec0()*0.202328);
}

double NNfunction_sb_uLuR::synapse0x28a28c0() {
   return (neuron0x288f0e0()*-0.018233);
}

double NNfunction_sb_uLuR::synapse0x28a2900() {
   return (neuron0x288f420()*0.0353306);
}

double NNfunction_sb_uLuR::synapse0x28a2940() {
   return (neuron0x288f760()*0.026643);
}

double NNfunction_sb_uLuR::synapse0x28a2980() {
   return (neuron0x288faa0()*0.0710999);
}

double NNfunction_sb_uLuR::synapse0x28a29c0() {
   return (neuron0x288fde0()*0.00815881);
}

double NNfunction_sb_uLuR::synapse0x28a2a00() {
   return (neuron0x2890120()*-0.0258232);
}

double NNfunction_sb_uLuR::synapse0x28a2d80() {
   return (neuron0x288b560()*-0.0117372);
}

double NNfunction_sb_uLuR::synapse0x28a2dc0() {
   return (neuron0x288b8a0()*-0.197852);
}

double NNfunction_sb_uLuR::synapse0x28a2e00() {
   return (neuron0x288bbe0()*-0.36941);
}

double NNfunction_sb_uLuR::synapse0x28a2e40() {
   return (neuron0x288bf20()*0.656198);
}

double NNfunction_sb_uLuR::synapse0x28a2e80() {
   return (neuron0x288c260()*-0.0215363);
}

double NNfunction_sb_uLuR::synapse0x28a2ec0() {
   return (neuron0x288c5a0()*0.0515311);
}

double NNfunction_sb_uLuR::synapse0x28a2f00() {
   return (neuron0x288c8e0()*-0.122814);
}

double NNfunction_sb_uLuR::synapse0x28a2f40() {
   return (neuron0x288cc20()*0.195906);
}

double NNfunction_sb_uLuR::synapse0x28a2f80() {
   return (neuron0x288cf60()*0.105524);
}

double NNfunction_sb_uLuR::synapse0x28a2fc0() {
   return (neuron0x288d2a0()*0.0304159);
}

double NNfunction_sb_uLuR::synapse0x28a3000() {
   return (neuron0x288d5e0()*-0.0265317);
}

double NNfunction_sb_uLuR::synapse0x28a3040() {
   return (neuron0x288d920()*-1.07783);
}

double NNfunction_sb_uLuR::synapse0x28a3080() {
   return (neuron0x288dc60()*-0.0288478);
}

double NNfunction_sb_uLuR::synapse0x28a30c0() {
   return (neuron0x288dfa0()*-0.0647725);
}

double NNfunction_sb_uLuR::synapse0x28a3100() {
   return (neuron0x288e2e0()*0.0338083);
}

double NNfunction_sb_uLuR::synapse0x28a3140() {
   return (neuron0x288e620()*0.0482457);
}

double NNfunction_sb_uLuR::synapse0x28a2bd0() {
   return (neuron0x288e960()*-0.195401);
}

double NNfunction_sb_uLuR::synapse0x28a2c10() {
   return (neuron0x288eec0()*0.100384);
}

double NNfunction_sb_uLuR::synapse0x28a3290() {
   return (neuron0x288f0e0()*-0.0357874);
}

double NNfunction_sb_uLuR::synapse0x28a32d0() {
   return (neuron0x288f420()*0.0302409);
}

double NNfunction_sb_uLuR::synapse0x28a3310() {
   return (neuron0x288f760()*0.0553363);
}

double NNfunction_sb_uLuR::synapse0x28a3350() {
   return (neuron0x288faa0()*0.001847);
}

double NNfunction_sb_uLuR::synapse0x28a3390() {
   return (neuron0x288fde0()*0.159344);
}

double NNfunction_sb_uLuR::synapse0x28a33d0() {
   return (neuron0x2890120()*-0.0173821);
}

double NNfunction_sb_uLuR::synapse0x28a3750() {
   return (neuron0x288b560()*-0.0107169);
}

double NNfunction_sb_uLuR::synapse0x28a3790() {
   return (neuron0x288b8a0()*0.0413371);
}

double NNfunction_sb_uLuR::synapse0x28a37d0() {
   return (neuron0x288bbe0()*-0.058759);
}

double NNfunction_sb_uLuR::synapse0x28a3810() {
   return (neuron0x288bf20()*-0.648772);
}

double NNfunction_sb_uLuR::synapse0x28a3850() {
   return (neuron0x288c260()*0.0322144);
}

double NNfunction_sb_uLuR::synapse0x28a3890() {
   return (neuron0x288c5a0()*-0.00024521);
}

double NNfunction_sb_uLuR::synapse0x28a38d0() {
   return (neuron0x288c8e0()*-0.00394373);
}

double NNfunction_sb_uLuR::synapse0x28a3910() {
   return (neuron0x288cc20()*-0.0276594);
}

double NNfunction_sb_uLuR::synapse0x28a3950() {
   return (neuron0x288cf60()*-0.0442177);
}

double NNfunction_sb_uLuR::synapse0x28a3990() {
   return (neuron0x288d2a0()*0.00675735);
}

double NNfunction_sb_uLuR::synapse0x28a39d0() {
   return (neuron0x288d5e0()*-0.0556758);
}

double NNfunction_sb_uLuR::synapse0x28a3a10() {
   return (neuron0x288d920()*0.108667);
}

double NNfunction_sb_uLuR::synapse0x28a3a50() {
   return (neuron0x288dc60()*-0.0937922);
}

double NNfunction_sb_uLuR::synapse0x28a3a90() {
   return (neuron0x288dfa0()*0.00151523);
}

double NNfunction_sb_uLuR::synapse0x28a3ad0() {
   return (neuron0x288e2e0()*-0.186489);
}

double NNfunction_sb_uLuR::synapse0x28a3b10() {
   return (neuron0x288e620()*0.0107674);
}

double NNfunction_sb_uLuR::synapse0x28a35a0() {
   return (neuron0x288e960()*0.000435851);
}

double NNfunction_sb_uLuR::synapse0x28a35e0() {
   return (neuron0x288eec0()*-0.0754263);
}

double NNfunction_sb_uLuR::synapse0x28a3c60() {
   return (neuron0x288f0e0()*-0.0488346);
}

double NNfunction_sb_uLuR::synapse0x28a3ca0() {
   return (neuron0x288f420()*-0.07178);
}

double NNfunction_sb_uLuR::synapse0x28a3ce0() {
   return (neuron0x288f760()*0.000936566);
}

double NNfunction_sb_uLuR::synapse0x28a3d20() {
   return (neuron0x288faa0()*0.0621989);
}

double NNfunction_sb_uLuR::synapse0x28a3d60() {
   return (neuron0x288fde0()*0.0407039);
}

double NNfunction_sb_uLuR::synapse0x28a3da0() {
   return (neuron0x2890120()*0.0084811);
}

double NNfunction_sb_uLuR::synapse0x28a4120() {
   return (neuron0x288b560()*-0.0824045);
}

double NNfunction_sb_uLuR::synapse0x28a4160() {
   return (neuron0x288b8a0()*0.632647);
}

double NNfunction_sb_uLuR::synapse0x28a41a0() {
   return (neuron0x288bbe0()*-0.0699498);
}

double NNfunction_sb_uLuR::synapse0x28a41e0() {
   return (neuron0x288bf20()*0.0345333);
}

double NNfunction_sb_uLuR::synapse0x28a4220() {
   return (neuron0x288c260()*-0.0836429);
}

double NNfunction_sb_uLuR::synapse0x28a4260() {
   return (neuron0x288c5a0()*0.0607075);
}

double NNfunction_sb_uLuR::synapse0x28a42a0() {
   return (neuron0x288c8e0()*0.0512358);
}

double NNfunction_sb_uLuR::synapse0x28a42e0() {
   return (neuron0x288cc20()*0.177567);
}

double NNfunction_sb_uLuR::synapse0x28a4320() {
   return (neuron0x288cf60()*-0.0326493);
}

double NNfunction_sb_uLuR::synapse0x28a4360() {
   return (neuron0x288d2a0()*-0.521256);
}

double NNfunction_sb_uLuR::synapse0x28a43a0() {
   return (neuron0x288d5e0()*0.0496495);
}

double NNfunction_sb_uLuR::synapse0x28a43e0() {
   return (neuron0x288d920()*-0.187489);
}

double NNfunction_sb_uLuR::synapse0x28a4420() {
   return (neuron0x288dc60()*-0.739667);
}

double NNfunction_sb_uLuR::synapse0x28a4460() {
   return (neuron0x288dfa0()*-0.00934945);
}

double NNfunction_sb_uLuR::synapse0x28a44a0() {
   return (neuron0x288e2e0()*1.11426);
}

double NNfunction_sb_uLuR::synapse0x28a44e0() {
   return (neuron0x288e620()*-0.0992333);
}

double NNfunction_sb_uLuR::synapse0x28a3f70() {
   return (neuron0x288e960()*0.192267);
}

double NNfunction_sb_uLuR::synapse0x28a3fb0() {
   return (neuron0x288eec0()*0.148205);
}

double NNfunction_sb_uLuR::synapse0x28a4630() {
   return (neuron0x288f0e0()*-0.0846326);
}

double NNfunction_sb_uLuR::synapse0x28a4670() {
   return (neuron0x288f420()*-0.00295255);
}

double NNfunction_sb_uLuR::synapse0x28a46b0() {
   return (neuron0x288f760()*0.182842);
}

double NNfunction_sb_uLuR::synapse0x28a46f0() {
   return (neuron0x288faa0()*-0.159984);
}

double NNfunction_sb_uLuR::synapse0x28a4730() {
   return (neuron0x288fde0()*-0.124878);
}

double NNfunction_sb_uLuR::synapse0x28a4770() {
   return (neuron0x2890120()*-0.0225244);
}

double NNfunction_sb_uLuR::synapse0x28a4af0() {
   return (neuron0x288b560()*-0.543746);
}

double NNfunction_sb_uLuR::synapse0x28a4b30() {
   return (neuron0x288b8a0()*0.521482);
}

double NNfunction_sb_uLuR::synapse0x28a4b70() {
   return (neuron0x288bbe0()*-0.390253);
}

double NNfunction_sb_uLuR::synapse0x28a4bb0() {
   return (neuron0x288bf20()*-0.357228);
}

double NNfunction_sb_uLuR::synapse0x28a4bf0() {
   return (neuron0x288c260()*-0.156925);
}

double NNfunction_sb_uLuR::synapse0x28a4c30() {
   return (neuron0x288c5a0()*0.0418556);
}

double NNfunction_sb_uLuR::synapse0x28a4c70() {
   return (neuron0x288c8e0()*-0.427703);
}

double NNfunction_sb_uLuR::synapse0x28a4cb0() {
   return (neuron0x288cc20()*-0.648763);
}

double NNfunction_sb_uLuR::synapse0x28a4cf0() {
   return (neuron0x288cf60()*0.122769);
}

double NNfunction_sb_uLuR::synapse0x28a4d30() {
   return (neuron0x288d2a0()*-0.62359);
}

double NNfunction_sb_uLuR::synapse0x28a4d70() {
   return (neuron0x288d5e0()*-0.0836523);
}

double NNfunction_sb_uLuR::synapse0x28a4db0() {
   return (neuron0x288d920()*-0.704842);
}

double NNfunction_sb_uLuR::synapse0x28a4df0() {
   return (neuron0x288dc60()*0.247336);
}

double NNfunction_sb_uLuR::synapse0x28a4e30() {
   return (neuron0x288dfa0()*0.0785969);
}

double NNfunction_sb_uLuR::synapse0x28a4e70() {
   return (neuron0x288e2e0()*0.375838);
}

double NNfunction_sb_uLuR::synapse0x28a4eb0() {
   return (neuron0x288e620()*-0.207541);
}

double NNfunction_sb_uLuR::synapse0x28a4940() {
   return (neuron0x288e960()*0.199581);
}

double NNfunction_sb_uLuR::synapse0x28a4980() {
   return (neuron0x288eec0()*-0.600301);
}

double NNfunction_sb_uLuR::synapse0x28a5000() {
   return (neuron0x288f0e0()*-0.994036);
}

double NNfunction_sb_uLuR::synapse0x28a5040() {
   return (neuron0x288f420()*-0.796557);
}

double NNfunction_sb_uLuR::synapse0x28a5080() {
   return (neuron0x288f760()*0.219865);
}

double NNfunction_sb_uLuR::synapse0x28a50c0() {
   return (neuron0x288faa0()*0.48338);
}

double NNfunction_sb_uLuR::synapse0x28a5100() {
   return (neuron0x288fde0()*-0.541614);
}

double NNfunction_sb_uLuR::synapse0x28a5140() {
   return (neuron0x2890120()*-0.495788);
}

double NNfunction_sb_uLuR::synapse0x28a54c0() {
   return (neuron0x288b560()*0.0267391);
}

double NNfunction_sb_uLuR::synapse0x28a5500() {
   return (neuron0x288b8a0()*-0.62386);
}

double NNfunction_sb_uLuR::synapse0x28a5540() {
   return (neuron0x288bbe0()*-0.0851764);
}

double NNfunction_sb_uLuR::synapse0x28a5580() {
   return (neuron0x288bf20()*0.412875);
}

double NNfunction_sb_uLuR::synapse0x28a55c0() {
   return (neuron0x288c260()*-0.124983);
}

double NNfunction_sb_uLuR::synapse0x28a5600() {
   return (neuron0x288c5a0()*-0.240851);
}

double NNfunction_sb_uLuR::synapse0x28a5640() {
   return (neuron0x288c8e0()*-0.00648952);
}

double NNfunction_sb_uLuR::synapse0x28a5680() {
   return (neuron0x288cc20()*0.185531);
}

double NNfunction_sb_uLuR::synapse0x28a56c0() {
   return (neuron0x288cf60()*0.344022);
}

double NNfunction_sb_uLuR::synapse0x28a5700() {
   return (neuron0x288d2a0()*0.208492);
}

double NNfunction_sb_uLuR::synapse0x28a5740() {
   return (neuron0x288d5e0()*0.584858);
}

double NNfunction_sb_uLuR::synapse0x28a5780() {
   return (neuron0x288d920()*-0.29811);
}

double NNfunction_sb_uLuR::synapse0x28a57c0() {
   return (neuron0x288dc60()*0.112207);
}

double NNfunction_sb_uLuR::synapse0x28a5800() {
   return (neuron0x288dfa0()*-0.167977);
}

double NNfunction_sb_uLuR::synapse0x28a5840() {
   return (neuron0x288e2e0()*-0.312223);
}

double NNfunction_sb_uLuR::synapse0x28a5880() {
   return (neuron0x288e620()*-0.193246);
}

double NNfunction_sb_uLuR::synapse0x28a5310() {
   return (neuron0x288e960()*0.200171);
}

double NNfunction_sb_uLuR::synapse0x28a5350() {
   return (neuron0x288eec0()*0.10011);
}

double NNfunction_sb_uLuR::synapse0x28a59d0() {
   return (neuron0x288f0e0()*-0.100659);
}

double NNfunction_sb_uLuR::synapse0x28a5a10() {
   return (neuron0x288f420()*-0.187069);
}

double NNfunction_sb_uLuR::synapse0x28a5a50() {
   return (neuron0x288f760()*0.112715);
}

double NNfunction_sb_uLuR::synapse0x28a5a90() {
   return (neuron0x288faa0()*-0.187533);
}

double NNfunction_sb_uLuR::synapse0x28a5ad0() {
   return (neuron0x288fde0()*0.111422);
}

double NNfunction_sb_uLuR::synapse0x28a5b10() {
   return (neuron0x2890120()*-0.0429985);
}

double NNfunction_sb_uLuR::synapse0x28a5e90() {
   return (neuron0x288b560()*0.0722274);
}

double NNfunction_sb_uLuR::synapse0x289a460() {
   return (neuron0x288b8a0()*0.179695);
}

double NNfunction_sb_uLuR::synapse0x289a4a0() {
   return (neuron0x288bbe0()*-0.281246);
}

double NNfunction_sb_uLuR::synapse0x289a4e0() {
   return (neuron0x288bf20()*0.0510299);
}

double NNfunction_sb_uLuR::synapse0x289a730() {
   return (neuron0x288c260()*0.0567241);
}

double NNfunction_sb_uLuR::synapse0x289a770() {
   return (neuron0x288c5a0()*0.0340299);
}

double NNfunction_sb_uLuR::synapse0x289a7b0() {
   return (neuron0x288c8e0()*-0.0919719);
}

double NNfunction_sb_uLuR::synapse0x289aa00() {
   return (neuron0x288cc20()*0.0815811);
}

double NNfunction_sb_uLuR::synapse0x289aa40() {
   return (neuron0x288cf60()*-0.091378);
}

double NNfunction_sb_uLuR::synapse0x289ac90() {
   return (neuron0x288d2a0()*-0.226826);
}

double NNfunction_sb_uLuR::synapse0x289acd0() {
   return (neuron0x288d5e0()*0.191263);
}

double NNfunction_sb_uLuR::synapse0x289ad10() {
   return (neuron0x288d920()*-0.138633);
}

double NNfunction_sb_uLuR::synapse0x289af60() {
   return (neuron0x288dc60()*0.64602);
}

double NNfunction_sb_uLuR::synapse0x289afa0() {
   return (neuron0x288dfa0()*-0.0858643);
}

double NNfunction_sb_uLuR::synapse0x289b1f0() {
   return (neuron0x288e2e0()*-0.241148);
}

double NNfunction_sb_uLuR::synapse0x289b230() {
   return (neuron0x288e620()*0.188038);
}

double NNfunction_sb_uLuR::synapse0x28a5ce0() {
   return (neuron0x288e960()*-0.285679);
}

double NNfunction_sb_uLuR::synapse0x28a5d20() {
   return (neuron0x288eec0()*-0.266146);
}

double NNfunction_sb_uLuR::synapse0x289b380() {
   return (neuron0x288f0e0()*0.0495736);
}

double NNfunction_sb_uLuR::synapse0x289b890() {
   return (neuron0x288f420()*0.0558296);
}

double NNfunction_sb_uLuR::synapse0x289b8d0() {
   return (neuron0x288f760()*0.00382915);
}

double NNfunction_sb_uLuR::synapse0x289b910() {
   return (neuron0x288faa0()*0.0371869);
}

double NNfunction_sb_uLuR::synapse0x289bb60() {
   return (neuron0x288fde0()*-0.0369066);
}

double NNfunction_sb_uLuR::synapse0x289bba0() {
   return (neuron0x2890120()*-0.112706);
}

double NNfunction_sb_uLuR::synapse0x289b450() {
   return (neuron0x288b560()*-0.0638641);
}

double NNfunction_sb_uLuR::synapse0x289b490() {
   return (neuron0x288b8a0()*-0.0771893);
}

double NNfunction_sb_uLuR::synapse0x289b4d0() {
   return (neuron0x288bbe0()*0.311096);
}

double NNfunction_sb_uLuR::synapse0x289b510() {
   return (neuron0x288bf20()*-0.282127);
}

double NNfunction_sb_uLuR::synapse0x289be90() {
   return (neuron0x288c260()*-0.0603718);
}

double NNfunction_sb_uLuR::synapse0x28a81e0() {
   return (neuron0x288c5a0()*-0.0074351);
}

double NNfunction_sb_uLuR::synapse0x28a8220() {
   return (neuron0x288c8e0()*0.124072);
}

double NNfunction_sb_uLuR::synapse0x28a8260() {
   return (neuron0x288cc20()*0.0294959);
}

double NNfunction_sb_uLuR::synapse0x28a82a0() {
   return (neuron0x288cf60()*0.197272);
}

double NNfunction_sb_uLuR::synapse0x28a82e0() {
   return (neuron0x288d2a0()*0.0519199);
}

double NNfunction_sb_uLuR::synapse0x28a8320() {
   return (neuron0x288d5e0()*-0.0460433);
}

double NNfunction_sb_uLuR::synapse0x28a8360() {
   return (neuron0x288d920()*-0.480437);
}

double NNfunction_sb_uLuR::synapse0x28a83a0() {
   return (neuron0x288dc60()*-0.370226);
}

double NNfunction_sb_uLuR::synapse0x28a83e0() {
   return (neuron0x288dfa0()*-0.0071454);
}

double NNfunction_sb_uLuR::synapse0x28a8420() {
   return (neuron0x288e2e0()*-0.526977);
}

double NNfunction_sb_uLuR::synapse0x28a8460() {
   return (neuron0x288e620()*-0.0918415);
}

double NNfunction_sb_uLuR::synapse0x289bd70() {
   return (neuron0x288e960()*-0.0253159);
}

double NNfunction_sb_uLuR::synapse0x289bdb0() {
   return (neuron0x288eec0()*-0.170584);
}

double NNfunction_sb_uLuR::synapse0x28a85b0() {
   return (neuron0x288f0e0()*-0.190067);
}

double NNfunction_sb_uLuR::synapse0x28a85f0() {
   return (neuron0x288f420()*0.0809617);
}

double NNfunction_sb_uLuR::synapse0x28a8630() {
   return (neuron0x288f760()*0.0439799);
}

double NNfunction_sb_uLuR::synapse0x28a8670() {
   return (neuron0x288faa0()*-0.0565095);
}

double NNfunction_sb_uLuR::synapse0x28a86b0() {
   return (neuron0x288fde0()*-0.0232375);
}

double NNfunction_sb_uLuR::synapse0x28a86f0() {
   return (neuron0x2890120()*0.0550531);
}

double NNfunction_sb_uLuR::synapse0x28a8a70() {
   return (neuron0x288b560()*0.383531);
}

double NNfunction_sb_uLuR::synapse0x28a8ab0() {
   return (neuron0x288b8a0()*-0.390927);
}

double NNfunction_sb_uLuR::synapse0x28a8af0() {
   return (neuron0x288bbe0()*1.20828);
}

double NNfunction_sb_uLuR::synapse0x28a8b30() {
   return (neuron0x288bf20()*0.919232);
}

double NNfunction_sb_uLuR::synapse0x28a8b70() {
   return (neuron0x288c260()*-0.111655);
}

double NNfunction_sb_uLuR::synapse0x28a8bb0() {
   return (neuron0x288c5a0()*-0.117511);
}

double NNfunction_sb_uLuR::synapse0x28a8bf0() {
   return (neuron0x288c8e0()*-0.0787107);
}

double NNfunction_sb_uLuR::synapse0x28a8c30() {
   return (neuron0x288cc20()*-0.216629);
}

double NNfunction_sb_uLuR::synapse0x28a8c70() {
   return (neuron0x288cf60()*0.623337);
}

double NNfunction_sb_uLuR::synapse0x28a8cb0() {
   return (neuron0x288d2a0()*0.0208695);
}

double NNfunction_sb_uLuR::synapse0x28a8cf0() {
   return (neuron0x288d5e0()*-0.143676);
}

double NNfunction_sb_uLuR::synapse0x28a8d30() {
   return (neuron0x288d920()*-0.122991);
}

double NNfunction_sb_uLuR::synapse0x28a8d70() {
   return (neuron0x288dc60()*1.2253);
}

double NNfunction_sb_uLuR::synapse0x28a8db0() {
   return (neuron0x288dfa0()*-0.0312974);
}

double NNfunction_sb_uLuR::synapse0x28a8df0() {
   return (neuron0x288e2e0()*-0.264323);
}

double NNfunction_sb_uLuR::synapse0x28a8e30() {
   return (neuron0x288e620()*-0.425694);
}

double NNfunction_sb_uLuR::synapse0x28a88c0() {
   return (neuron0x288e960()*-0.497663);
}

double NNfunction_sb_uLuR::synapse0x28a8900() {
   return (neuron0x288eec0()*0.124034);
}

double NNfunction_sb_uLuR::synapse0x28a8f80() {
   return (neuron0x288f0e0()*0.340355);
}

double NNfunction_sb_uLuR::synapse0x28a8fc0() {
   return (neuron0x288f420()*0.390332);
}

double NNfunction_sb_uLuR::synapse0x28a9000() {
   return (neuron0x288f760()*0.164602);
}

double NNfunction_sb_uLuR::synapse0x28a9040() {
   return (neuron0x288faa0()*0.404038);
}

double NNfunction_sb_uLuR::synapse0x28a9080() {
   return (neuron0x288fde0()*-0.0153047);
}

double NNfunction_sb_uLuR::synapse0x28a90c0() {
   return (neuron0x2890120()*0.291489);
}

double NNfunction_sb_uLuR::synapse0x28a9440() {
   return (neuron0x288b560()*-0.0123386);
}

double NNfunction_sb_uLuR::synapse0x28a9480() {
   return (neuron0x288b8a0()*0.000975458);
}

double NNfunction_sb_uLuR::synapse0x28a94c0() {
   return (neuron0x288bbe0()*0.00233891);
}

double NNfunction_sb_uLuR::synapse0x28a9500() {
   return (neuron0x288bf20()*-0.0886134);
}

double NNfunction_sb_uLuR::synapse0x28a9540() {
   return (neuron0x288c260()*0.0194969);
}

double NNfunction_sb_uLuR::synapse0x28a9580() {
   return (neuron0x288c5a0()*0.0427652);
}

double NNfunction_sb_uLuR::synapse0x28a95c0() {
   return (neuron0x288c8e0()*0.0383558);
}

double NNfunction_sb_uLuR::synapse0x28a9600() {
   return (neuron0x288cc20()*-0.0496214);
}

double NNfunction_sb_uLuR::synapse0x28a9640() {
   return (neuron0x288cf60()*-0.0305254);
}

double NNfunction_sb_uLuR::synapse0x28a9680() {
   return (neuron0x288d2a0()*-0.0157918);
}

double NNfunction_sb_uLuR::synapse0x28a96c0() {
   return (neuron0x288d5e0()*-0.0196018);
}

double NNfunction_sb_uLuR::synapse0x28a9700() {
   return (neuron0x288d920()*-0.0915406);
}

double NNfunction_sb_uLuR::synapse0x28a9740() {
   return (neuron0x288dc60()*-0.045706);
}

double NNfunction_sb_uLuR::synapse0x28a9780() {
   return (neuron0x288dfa0()*-0.0167275);
}

double NNfunction_sb_uLuR::synapse0x28a97c0() {
   return (neuron0x288e2e0()*-1.48171);
}

double NNfunction_sb_uLuR::synapse0x28a9800() {
   return (neuron0x288e620()*-0.0285712);
}

double NNfunction_sb_uLuR::synapse0x28a9290() {
   return (neuron0x288e960()*-0.0704744);
}

double NNfunction_sb_uLuR::synapse0x28a92d0() {
   return (neuron0x288eec0()*-0.082755);
}

double NNfunction_sb_uLuR::synapse0x28a9950() {
   return (neuron0x288f0e0()*-0.0368193);
}

double NNfunction_sb_uLuR::synapse0x28a9990() {
   return (neuron0x288f420()*-0.065932);
}

double NNfunction_sb_uLuR::synapse0x28a99d0() {
   return (neuron0x288f760()*0.0143858);
}

double NNfunction_sb_uLuR::synapse0x28a9a10() {
   return (neuron0x288faa0()*0.00986555);
}

double NNfunction_sb_uLuR::synapse0x28a9a50() {
   return (neuron0x288fde0()*0.00291203);
}

double NNfunction_sb_uLuR::synapse0x28a9a90() {
   return (neuron0x2890120()*-0.00897911);
}

double NNfunction_sb_uLuR::synapse0x28a9e10() {
   return (neuron0x288b560()*0.0646335);
}

double NNfunction_sb_uLuR::synapse0x28a9e50() {
   return (neuron0x288b8a0()*0.568603);
}

double NNfunction_sb_uLuR::synapse0x28a9e90() {
   return (neuron0x288bbe0()*0.260447);
}

double NNfunction_sb_uLuR::synapse0x28a9ed0() {
   return (neuron0x288bf20()*1.00159);
}

double NNfunction_sb_uLuR::synapse0x28a9f10() {
   return (neuron0x288c260()*-0.0233379);
}

double NNfunction_sb_uLuR::synapse0x28a9f50() {
   return (neuron0x288c5a0()*-0.132124);
}

double NNfunction_sb_uLuR::synapse0x28a9f90() {
   return (neuron0x288c8e0()*-0.0206311);
}

double NNfunction_sb_uLuR::synapse0x28a9fd0() {
   return (neuron0x288cc20()*0.00743517);
}

double NNfunction_sb_uLuR::synapse0x28aa010() {
   return (neuron0x288cf60()*0.0454686);
}

double NNfunction_sb_uLuR::synapse0x28aa050() {
   return (neuron0x288d2a0()*-0.0354182);
}

double NNfunction_sb_uLuR::synapse0x28aa090() {
   return (neuron0x288d5e0()*0.0948434);
}

double NNfunction_sb_uLuR::synapse0x28aa0d0() {
   return (neuron0x288d920()*-0.659895);
}

double NNfunction_sb_uLuR::synapse0x28aa110() {
   return (neuron0x288dc60()*0.117894);
}

double NNfunction_sb_uLuR::synapse0x28aa150() {
   return (neuron0x288dfa0()*-0.142165);
}

double NNfunction_sb_uLuR::synapse0x28aa190() {
   return (neuron0x288e2e0()*0.160017);
}

double NNfunction_sb_uLuR::synapse0x28aa1d0() {
   return (neuron0x288e620()*0.158718);
}

double NNfunction_sb_uLuR::synapse0x28a9c60() {
   return (neuron0x288e960()*-0.079066);
}

double NNfunction_sb_uLuR::synapse0x28a9ca0() {
   return (neuron0x288eec0()*0.221668);
}

double NNfunction_sb_uLuR::synapse0x28aa320() {
   return (neuron0x288f0e0()*0.0817554);
}

double NNfunction_sb_uLuR::synapse0x28aa360() {
   return (neuron0x288f420()*-0.085748);
}

double NNfunction_sb_uLuR::synapse0x28aa3a0() {
   return (neuron0x288f760()*-0.230098);
}

double NNfunction_sb_uLuR::synapse0x28aa3e0() {
   return (neuron0x288faa0()*0.0340797);
}

double NNfunction_sb_uLuR::synapse0x28aa420() {
   return (neuron0x288fde0()*0.0678875);
}

double NNfunction_sb_uLuR::synapse0x28aa460() {
   return (neuron0x2890120()*0.19029);
}

double NNfunction_sb_uLuR::synapse0x28aa7e0() {
   return (neuron0x288b560()*-0.135408);
}

double NNfunction_sb_uLuR::synapse0x28aa820() {
   return (neuron0x288b8a0()*0.157908);
}

double NNfunction_sb_uLuR::synapse0x28aa860() {
   return (neuron0x288bbe0()*0.17442);
}

double NNfunction_sb_uLuR::synapse0x28aa8a0() {
   return (neuron0x288bf20()*-0.568152);
}

double NNfunction_sb_uLuR::synapse0x28aa8e0() {
   return (neuron0x288c260()*0.352154);
}

double NNfunction_sb_uLuR::synapse0x28aa920() {
   return (neuron0x288c5a0()*0.0525938);
}

double NNfunction_sb_uLuR::synapse0x28aa960() {
   return (neuron0x288c8e0()*-0.621634);
}

double NNfunction_sb_uLuR::synapse0x28aa9a0() {
   return (neuron0x288cc20()*0.371196);
}

double NNfunction_sb_uLuR::synapse0x28aa9e0() {
   return (neuron0x288cf60()*0.0451048);
}

double NNfunction_sb_uLuR::synapse0x28aaa20() {
   return (neuron0x288d2a0()*-0.237549);
}

double NNfunction_sb_uLuR::synapse0x28aaa60() {
   return (neuron0x288d5e0()*0.134112);
}

double NNfunction_sb_uLuR::synapse0x28aaaa0() {
   return (neuron0x288d920()*0.146137);
}

double NNfunction_sb_uLuR::synapse0x28aaae0() {
   return (neuron0x288dc60()*0.191163);
}

double NNfunction_sb_uLuR::synapse0x28aab20() {
   return (neuron0x288dfa0()*-0.490308);
}

double NNfunction_sb_uLuR::synapse0x28aab60() {
   return (neuron0x288e2e0()*-0.0971468);
}

double NNfunction_sb_uLuR::synapse0x28aaba0() {
   return (neuron0x288e620()*0.143924);
}

double NNfunction_sb_uLuR::synapse0x28aa630() {
   return (neuron0x288e960()*-0.356449);
}

double NNfunction_sb_uLuR::synapse0x28aa670() {
   return (neuron0x288eec0()*0.269646);
}

double NNfunction_sb_uLuR::synapse0x28aacf0() {
   return (neuron0x288f0e0()*-0.116221);
}

double NNfunction_sb_uLuR::synapse0x28aad30() {
   return (neuron0x288f420()*0.393068);
}

double NNfunction_sb_uLuR::synapse0x28aad70() {
   return (neuron0x288f760()*-0.432795);
}

double NNfunction_sb_uLuR::synapse0x28aadb0() {
   return (neuron0x288faa0()*-0.14704);
}

double NNfunction_sb_uLuR::synapse0x28aadf0() {
   return (neuron0x288fde0()*-0.000275317);
}

double NNfunction_sb_uLuR::synapse0x28aae30() {
   return (neuron0x2890120()*-0.294053);
}

double NNfunction_sb_uLuR::synapse0x28ab1b0() {
   return (neuron0x288b560()*0.0462945);
}

double NNfunction_sb_uLuR::synapse0x28ab1f0() {
   return (neuron0x288b8a0()*-0.271371);
}

double NNfunction_sb_uLuR::synapse0x28ab230() {
   return (neuron0x288bbe0()*-0.114237);
}

double NNfunction_sb_uLuR::synapse0x28ab270() {
   return (neuron0x288bf20()*-0.400061);
}

double NNfunction_sb_uLuR::synapse0x28ab2b0() {
   return (neuron0x288c260()*0.0289297);
}

double NNfunction_sb_uLuR::synapse0x28ab2f0() {
   return (neuron0x288c5a0()*-0.107133);
}

double NNfunction_sb_uLuR::synapse0x28ab330() {
   return (neuron0x288c8e0()*-0.00937352);
}

double NNfunction_sb_uLuR::synapse0x28ab370() {
   return (neuron0x288cc20()*0.235604);
}

double NNfunction_sb_uLuR::synapse0x28ab3b0() {
   return (neuron0x288cf60()*-0.0928209);
}

double NNfunction_sb_uLuR::synapse0x28ab3f0() {
   return (neuron0x288d2a0()*0.0444348);
}

double NNfunction_sb_uLuR::synapse0x28ab430() {
   return (neuron0x288d5e0()*0.0209013);
}

double NNfunction_sb_uLuR::synapse0x28ab470() {
   return (neuron0x288d920()*0.110039);
}

double NNfunction_sb_uLuR::synapse0x28ab4b0() {
   return (neuron0x288dc60()*0.0285476);
}

double NNfunction_sb_uLuR::synapse0x28ab4f0() {
   return (neuron0x288dfa0()*0.0781307);
}

double NNfunction_sb_uLuR::synapse0x28ab530() {
   return (neuron0x288e2e0()*-0.300699);
}

double NNfunction_sb_uLuR::synapse0x28ab570() {
   return (neuron0x288e620()*0.048787);
}

double NNfunction_sb_uLuR::synapse0x28ab000() {
   return (neuron0x288e960()*-0.0131798);
}

double NNfunction_sb_uLuR::synapse0x28ab040() {
   return (neuron0x288eec0()*0.244657);
}

double NNfunction_sb_uLuR::synapse0x28ab6c0() {
   return (neuron0x288f0e0()*0.0394643);
}

double NNfunction_sb_uLuR::synapse0x28ab700() {
   return (neuron0x288f420()*0.297163);
}

double NNfunction_sb_uLuR::synapse0x28ab740() {
   return (neuron0x288f760()*0.0601278);
}

double NNfunction_sb_uLuR::synapse0x28ab780() {
   return (neuron0x288faa0()*0.0506969);
}

double NNfunction_sb_uLuR::synapse0x28ab7c0() {
   return (neuron0x288fde0()*-0.00538449);
}

double NNfunction_sb_uLuR::synapse0x28ab800() {
   return (neuron0x2890120()*-0.0135314);
}

double NNfunction_sb_uLuR::synapse0x28abb80() {
   return (neuron0x288b560()*-0.448156);
}

double NNfunction_sb_uLuR::synapse0x28abbc0() {
   return (neuron0x288b8a0()*0.00879743);
}

double NNfunction_sb_uLuR::synapse0x28abc00() {
   return (neuron0x288bbe0()*-0.187073);
}

double NNfunction_sb_uLuR::synapse0x28abc40() {
   return (neuron0x288bf20()*0.264871);
}

double NNfunction_sb_uLuR::synapse0x28abc80() {
   return (neuron0x288c260()*-0.00210137);
}

double NNfunction_sb_uLuR::synapse0x28abcc0() {
   return (neuron0x288c5a0()*-0.360048);
}

double NNfunction_sb_uLuR::synapse0x28abd00() {
   return (neuron0x288c8e0()*-0.534536);
}

double NNfunction_sb_uLuR::synapse0x28abd40() {
   return (neuron0x288cc20()*0.0793629);
}

double NNfunction_sb_uLuR::synapse0x28abd80() {
   return (neuron0x288cf60()*-0.556721);
}

double NNfunction_sb_uLuR::synapse0x28abdc0() {
   return (neuron0x288d2a0()*0.0481001);
}

double NNfunction_sb_uLuR::synapse0x28abe00() {
   return (neuron0x288d5e0()*-0.424593);
}

double NNfunction_sb_uLuR::synapse0x28abe40() {
   return (neuron0x288d920()*0.224961);
}

double NNfunction_sb_uLuR::synapse0x28abe80() {
   return (neuron0x288dc60()*-0.687153);
}

double NNfunction_sb_uLuR::synapse0x28abec0() {
   return (neuron0x288dfa0()*-0.43765);
}

double NNfunction_sb_uLuR::synapse0x28abf00() {
   return (neuron0x288e2e0()*-0.0807842);
}

double NNfunction_sb_uLuR::synapse0x28abf40() {
   return (neuron0x288e620()*0.410854);
}

double NNfunction_sb_uLuR::synapse0x28ab9d0() {
   return (neuron0x288e960()*0.186552);
}

double NNfunction_sb_uLuR::synapse0x28aba10() {
   return (neuron0x288eec0()*0.288414);
}

double NNfunction_sb_uLuR::synapse0x28ac090() {
   return (neuron0x288f0e0()*0.936168);
}

double NNfunction_sb_uLuR::synapse0x28ac0d0() {
   return (neuron0x288f420()*0.1651);
}

double NNfunction_sb_uLuR::synapse0x28ac110() {
   return (neuron0x288f760()*0.184963);
}

double NNfunction_sb_uLuR::synapse0x28ac150() {
   return (neuron0x288faa0()*0.0995571);
}

double NNfunction_sb_uLuR::synapse0x28ac190() {
   return (neuron0x288fde0()*0.0158648);
}

double NNfunction_sb_uLuR::synapse0x28ac1d0() {
   return (neuron0x2890120()*0.548365);
}

double NNfunction_sb_uLuR::synapse0x28ac550() {
   return (neuron0x288b560()*-0.321661);
}

double NNfunction_sb_uLuR::synapse0x28ac590() {
   return (neuron0x288b8a0()*-0.156608);
}

double NNfunction_sb_uLuR::synapse0x28ac5d0() {
   return (neuron0x288bbe0()*-0.153788);
}

double NNfunction_sb_uLuR::synapse0x28ac610() {
   return (neuron0x288bf20()*0.399157);
}

double NNfunction_sb_uLuR::synapse0x28ac650() {
   return (neuron0x288c260()*-0.116082);
}

double NNfunction_sb_uLuR::synapse0x28ac690() {
   return (neuron0x288c5a0()*-0.203949);
}

double NNfunction_sb_uLuR::synapse0x28ac6d0() {
   return (neuron0x288c8e0()*0.0882211);
}

double NNfunction_sb_uLuR::synapse0x28ac710() {
   return (neuron0x288cc20()*-0.166656);
}

double NNfunction_sb_uLuR::synapse0x28ac750() {
   return (neuron0x288cf60()*0.286982);
}

double NNfunction_sb_uLuR::synapse0x28ac790() {
   return (neuron0x288d2a0()*0.175653);
}

double NNfunction_sb_uLuR::synapse0x28ac7d0() {
   return (neuron0x288d5e0()*0.0855416);
}

double NNfunction_sb_uLuR::synapse0x28ac810() {
   return (neuron0x288d920()*0.658131);
}

double NNfunction_sb_uLuR::synapse0x28ac850() {
   return (neuron0x288dc60()*-0.121058);
}

double NNfunction_sb_uLuR::synapse0x28ac890() {
   return (neuron0x288dfa0()*0.170309);
}

double NNfunction_sb_uLuR::synapse0x28ac8d0() {
   return (neuron0x288e2e0()*-0.36791);
}

double NNfunction_sb_uLuR::synapse0x28ac910() {
   return (neuron0x288e620()*0.0317235);
}

double NNfunction_sb_uLuR::synapse0x28ac3a0() {
   return (neuron0x288e960()*-0.0842038);
}

double NNfunction_sb_uLuR::synapse0x28ac3e0() {
   return (neuron0x288eec0()*-0.21255);
}

double NNfunction_sb_uLuR::synapse0x28aca60() {
   return (neuron0x288f0e0()*0.639277);
}

double NNfunction_sb_uLuR::synapse0x28acaa0() {
   return (neuron0x288f420()*-0.0860633);
}

double NNfunction_sb_uLuR::synapse0x28acae0() {
   return (neuron0x288f760()*-0.153148);
}

double NNfunction_sb_uLuR::synapse0x28acb20() {
   return (neuron0x288faa0()*0.158401);
}

double NNfunction_sb_uLuR::synapse0x28acb60() {
   return (neuron0x288fde0()*-0.0778278);
}

double NNfunction_sb_uLuR::synapse0x28acba0() {
   return (neuron0x2890120()*0.0324437);
}

double NNfunction_sb_uLuR::synapse0x2895650() {
   return (neuron0x288b560()*-0.0131903);
}

double NNfunction_sb_uLuR::synapse0x2895690() {
   return (neuron0x288b8a0()*0.0396695);
}

double NNfunction_sb_uLuR::synapse0x28956d0() {
   return (neuron0x288bbe0()*0.00671136);
}

double NNfunction_sb_uLuR::synapse0x2895710() {
   return (neuron0x288bf20()*0.0562707);
}

double NNfunction_sb_uLuR::synapse0x2895750() {
   return (neuron0x288c260()*-0.0404311);
}

double NNfunction_sb_uLuR::synapse0x2895790() {
   return (neuron0x288c5a0()*0.0425947);
}

double NNfunction_sb_uLuR::synapse0x28957d0() {
   return (neuron0x288c8e0()*0.0290552);
}

double NNfunction_sb_uLuR::synapse0x2895810() {
   return (neuron0x288cc20()*-0.218933);
}

double NNfunction_sb_uLuR::synapse0x28ad330() {
   return (neuron0x288cf60()*0.0341553);
}

double NNfunction_sb_uLuR::synapse0x28ad370() {
   return (neuron0x288d2a0()*-0.0225111);
}

double NNfunction_sb_uLuR::synapse0x28ad3b0() {
   return (neuron0x288d5e0()*-0.00916844);
}

double NNfunction_sb_uLuR::synapse0x28ad3f0() {
   return (neuron0x288d920()*-0.129588);
}

double NNfunction_sb_uLuR::synapse0x28ad430() {
   return (neuron0x288dc60()*-0.034382);
}

double NNfunction_sb_uLuR::synapse0x28ad470() {
   return (neuron0x288dfa0()*-0.0259667);
}

double NNfunction_sb_uLuR::synapse0x28ad4b0() {
   return (neuron0x288e2e0()*0.499345);
}

double NNfunction_sb_uLuR::synapse0x28ad4f0() {
   return (neuron0x288e620()*-0.0378704);
}

double NNfunction_sb_uLuR::synapse0x28acd70() {
   return (neuron0x288e960()*-0.00192192);
}

double NNfunction_sb_uLuR::synapse0x28acdb0() {
   return (neuron0x288eec0()*-0.082553);
}

double NNfunction_sb_uLuR::synapse0x28ad640() {
   return (neuron0x288f0e0()*-0.0161373);
}

double NNfunction_sb_uLuR::synapse0x28ad680() {
   return (neuron0x288f420()*-0.0818637);
}

double NNfunction_sb_uLuR::synapse0x28ad6c0() {
   return (neuron0x288f760()*-0.0284441);
}

double NNfunction_sb_uLuR::synapse0x28ad700() {
   return (neuron0x288faa0()*0.00684416);
}

double NNfunction_sb_uLuR::synapse0x28ad740() {
   return (neuron0x288fde0()*-0.00625741);
}

double NNfunction_sb_uLuR::synapse0x28ad780() {
   return (neuron0x2890120()*0.0268119);
}

double NNfunction_sb_uLuR::synapse0x28adb00() {
   return (neuron0x288b560()*0.639253);
}

double NNfunction_sb_uLuR::synapse0x28adb40() {
   return (neuron0x288b8a0()*-0.437876);
}

double NNfunction_sb_uLuR::synapse0x28adb80() {
   return (neuron0x288bbe0()*0.725033);
}

double NNfunction_sb_uLuR::synapse0x28adbc0() {
   return (neuron0x288bf20()*-0.0877073);
}

double NNfunction_sb_uLuR::synapse0x28adc00() {
   return (neuron0x288c260()*-0.320291);
}

double NNfunction_sb_uLuR::synapse0x28adc40() {
   return (neuron0x288c5a0()*-0.305798);
}

double NNfunction_sb_uLuR::synapse0x28adc80() {
   return (neuron0x288c8e0()*0.201973);
}

double NNfunction_sb_uLuR::synapse0x28adcc0() {
   return (neuron0x288cc20()*0.024397);
}

double NNfunction_sb_uLuR::synapse0x28add00() {
   return (neuron0x288cf60()*-0.174239);
}

double NNfunction_sb_uLuR::synapse0x28add40() {
   return (neuron0x288d2a0()*0.362188);
}

double NNfunction_sb_uLuR::synapse0x28add80() {
   return (neuron0x288d5e0()*0.375309);
}

double NNfunction_sb_uLuR::synapse0x28addc0() {
   return (neuron0x288d920()*-0.954502);
}

double NNfunction_sb_uLuR::synapse0x28ade00() {
   return (neuron0x288dc60()*-0.0291675);
}

double NNfunction_sb_uLuR::synapse0x28ade40() {
   return (neuron0x288dfa0()*-0.378331);
}

double NNfunction_sb_uLuR::synapse0x28ade80() {
   return (neuron0x288e2e0()*-0.281791);
}

double NNfunction_sb_uLuR::synapse0x28adec0() {
   return (neuron0x288e620()*-0.000976426);
}

double NNfunction_sb_uLuR::synapse0x28ad950() {
   return (neuron0x288e960()*0.0202514);
}

double NNfunction_sb_uLuR::synapse0x28ad990() {
   return (neuron0x288eec0()*0.144459);
}

double NNfunction_sb_uLuR::synapse0x28ae010() {
   return (neuron0x288f0e0()*0.275453);
}

double NNfunction_sb_uLuR::synapse0x28ae050() {
   return (neuron0x288f420()*-0.260018);
}

double NNfunction_sb_uLuR::synapse0x28ae090() {
   return (neuron0x288f760()*0.390351);
}

double NNfunction_sb_uLuR::synapse0x28ae0d0() {
   return (neuron0x288faa0()*0.597187);
}

double NNfunction_sb_uLuR::synapse0x28ae110() {
   return (neuron0x288fde0()*-0.201537);
}

double NNfunction_sb_uLuR::synapse0x28ae150() {
   return (neuron0x2890120()*0.0333164);
}

double NNfunction_sb_uLuR::synapse0x28ae4d0() {
   return (neuron0x288b560()*-0.00132003);
}

double NNfunction_sb_uLuR::synapse0x28ae510() {
   return (neuron0x288b8a0()*0.0605191);
}

double NNfunction_sb_uLuR::synapse0x28ae550() {
   return (neuron0x288bbe0()*0.0461481);
}

double NNfunction_sb_uLuR::synapse0x28ae590() {
   return (neuron0x288bf20()*-1.56242);
}

double NNfunction_sb_uLuR::synapse0x28ae5d0() {
   return (neuron0x288c260()*-0.00757632);
}

double NNfunction_sb_uLuR::synapse0x28ae610() {
   return (neuron0x288c5a0()*-0.0118042);
}

double NNfunction_sb_uLuR::synapse0x28ae650() {
   return (neuron0x288c8e0()*0.0109783);
}

double NNfunction_sb_uLuR::synapse0x28ae690() {
   return (neuron0x288cc20()*-0.0122678);
}

double NNfunction_sb_uLuR::synapse0x28ae6d0() {
   return (neuron0x288cf60()*0.0070443);
}

double NNfunction_sb_uLuR::synapse0x28ae710() {
   return (neuron0x288d2a0()*0.00453236);
}

double NNfunction_sb_uLuR::synapse0x28ae750() {
   return (neuron0x288d5e0()*0.0624477);
}

double NNfunction_sb_uLuR::synapse0x28ae790() {
   return (neuron0x288d920()*0.733735);
}

double NNfunction_sb_uLuR::synapse0x28ae7d0() {
   return (neuron0x288dc60()*0.00351486);
}

double NNfunction_sb_uLuR::synapse0x28ae810() {
   return (neuron0x288dfa0()*-0.0224852);
}

double NNfunction_sb_uLuR::synapse0x28ae850() {
   return (neuron0x288e2e0()*-0.184091);
}

double NNfunction_sb_uLuR::synapse0x28ae890() {
   return (neuron0x288e620()*-0.0223617);
}

double NNfunction_sb_uLuR::synapse0x28ae320() {
   return (neuron0x288e960()*-0.0310035);
}

double NNfunction_sb_uLuR::synapse0x28ae360() {
   return (neuron0x288eec0()*0.0197682);
}

double NNfunction_sb_uLuR::synapse0x289ee90() {
   return (neuron0x288f0e0()*0.0203749);
}

double NNfunction_sb_uLuR::synapse0x289eed0() {
   return (neuron0x288f420()*0.0335016);
}

double NNfunction_sb_uLuR::synapse0x289ef10() {
   return (neuron0x288f760()*0.00287721);
}

double NNfunction_sb_uLuR::synapse0x289ef50() {
   return (neuron0x288faa0()*-0.00486877);
}

double NNfunction_sb_uLuR::synapse0x289ef90() {
   return (neuron0x288fde0()*-0.016499);
}

double NNfunction_sb_uLuR::synapse0x289efd0() {
   return (neuron0x2890120()*-0.0226518);
}

double NNfunction_sb_uLuR::synapse0x289f350() {
   return (neuron0x288b560()*-0.00490393);
}

double NNfunction_sb_uLuR::synapse0x289f390() {
   return (neuron0x288b8a0()*0.0235626);
}

double NNfunction_sb_uLuR::synapse0x289f3d0() {
   return (neuron0x288bbe0()*0.0195071);
}

double NNfunction_sb_uLuR::synapse0x289f410() {
   return (neuron0x288bf20()*8.43418);
}

double NNfunction_sb_uLuR::synapse0x289f450() {
   return (neuron0x288c260()*-0.00318846);
}

double NNfunction_sb_uLuR::synapse0x289f490() {
   return (neuron0x288c5a0()*-0.00822587);
}

double NNfunction_sb_uLuR::synapse0x289f4d0() {
   return (neuron0x288c8e0()*0.0254287);
}

double NNfunction_sb_uLuR::synapse0x289f510() {
   return (neuron0x288cc20()*0.0195752);
}

double NNfunction_sb_uLuR::synapse0x289f550() {
   return (neuron0x288cf60()*-0.00624575);
}

double NNfunction_sb_uLuR::synapse0x289f590() {
   return (neuron0x288d2a0()*0.0111285);
}

double NNfunction_sb_uLuR::synapse0x289f5d0() {
   return (neuron0x288d5e0()*0.0070585);
}

double NNfunction_sb_uLuR::synapse0x289f610() {
   return (neuron0x288d920()*-0.152988);
}

double NNfunction_sb_uLuR::synapse0x289f650() {
   return (neuron0x288dc60()*0.0381868);
}

double NNfunction_sb_uLuR::synapse0x289f690() {
   return (neuron0x288dfa0()*0.0135348);
}

double NNfunction_sb_uLuR::synapse0x289f6d0() {
   return (neuron0x288e2e0()*0.808475);
}

double NNfunction_sb_uLuR::synapse0x289f710() {
   return (neuron0x288e620()*0.00187031);
}

double NNfunction_sb_uLuR::synapse0x289f1a0() {
   return (neuron0x288e960()*0.00900757);
}

double NNfunction_sb_uLuR::synapse0x289f1e0() {
   return (neuron0x288eec0()*0.00674041);
}

double NNfunction_sb_uLuR::synapse0x289f860() {
   return (neuron0x288f0e0()*0.0128656);
}

double NNfunction_sb_uLuR::synapse0x289f8a0() {
   return (neuron0x288f420()*-0.0191122);
}

double NNfunction_sb_uLuR::synapse0x289f8e0() {
   return (neuron0x288f760()*-0.0157339);
}

double NNfunction_sb_uLuR::synapse0x289f920() {
   return (neuron0x288faa0()*-0.0128998);
}

double NNfunction_sb_uLuR::synapse0x289f960() {
   return (neuron0x288fde0()*-0.00621037);
}

double NNfunction_sb_uLuR::synapse0x289f9a0() {
   return (neuron0x2890120()*-0.00343651);
}

double NNfunction_sb_uLuR::synapse0x289fd20() {
   return (neuron0x288b560()*-0.0362794);
}

double NNfunction_sb_uLuR::synapse0x289fd60() {
   return (neuron0x288b8a0()*0.029016);
}

double NNfunction_sb_uLuR::synapse0x289fda0() {
   return (neuron0x288bbe0()*1.38929);
}

double NNfunction_sb_uLuR::synapse0x289fde0() {
   return (neuron0x288bf20()*0.146726);
}

double NNfunction_sb_uLuR::synapse0x289fe20() {
   return (neuron0x288c260()*-0.0134014);
}

double NNfunction_sb_uLuR::synapse0x289fe60() {
   return (neuron0x288c5a0()*0.00315765);
}

double NNfunction_sb_uLuR::synapse0x289fea0() {
   return (neuron0x288c8e0()*-0.000729846);
}

double NNfunction_sb_uLuR::synapse0x289fee0() {
   return (neuron0x288cc20()*0.0399528);
}

double NNfunction_sb_uLuR::synapse0x289ff20() {
   return (neuron0x288cf60()*-0.0627506);
}

double NNfunction_sb_uLuR::synapse0x289ff60() {
   return (neuron0x288d2a0()*0.0419738);
}

double NNfunction_sb_uLuR::synapse0x289ffa0() {
   return (neuron0x288d5e0()*0.0303312);
}

double NNfunction_sb_uLuR::synapse0x289ffe0() {
   return (neuron0x288d920()*-0.862306);
}

double NNfunction_sb_uLuR::synapse0x28a0020() {
   return (neuron0x288dc60()*0.0182191);
}

double NNfunction_sb_uLuR::synapse0x28a0060() {
   return (neuron0x288dfa0()*-0.0247228);
}

double NNfunction_sb_uLuR::synapse0x28a00a0() {
   return (neuron0x288e2e0()*0.103074);
}

double NNfunction_sb_uLuR::synapse0x28a00e0() {
   return (neuron0x288e620()*0.0829345);
}

double NNfunction_sb_uLuR::synapse0x289fb70() {
   return (neuron0x288e960()*0.0327632);
}

double NNfunction_sb_uLuR::synapse0x289fbb0() {
   return (neuron0x288eec0()*-0.00144408);
}

double NNfunction_sb_uLuR::synapse0x28a0230() {
   return (neuron0x288f0e0()*-0.0381702);
}

double NNfunction_sb_uLuR::synapse0x28a0270() {
   return (neuron0x288f420()*-0.023696);
}

double NNfunction_sb_uLuR::synapse0x28a02b0() {
   return (neuron0x288f760()*0.0202527);
}

double NNfunction_sb_uLuR::synapse0x28a02f0() {
   return (neuron0x288faa0()*0.0176468);
}

double NNfunction_sb_uLuR::synapse0x28a0330() {
   return (neuron0x288fde0()*0.0614349);
}

double NNfunction_sb_uLuR::synapse0x28a0370() {
   return (neuron0x2890120()*-0.0273058);
}

double NNfunction_sb_uLuR::synapse0x28a06f0() {
   return (neuron0x288b560()*-0.00621028);
}

double NNfunction_sb_uLuR::synapse0x28a0730() {
   return (neuron0x288b8a0()*0.0100067);
}

double NNfunction_sb_uLuR::synapse0x28a0770() {
   return (neuron0x288bbe0()*-0.00223411);
}

double NNfunction_sb_uLuR::synapse0x28a07b0() {
   return (neuron0x288bf20()*-2.20601);
}

double NNfunction_sb_uLuR::synapse0x28a07f0() {
   return (neuron0x288c260()*0.00760514);
}

double NNfunction_sb_uLuR::synapse0x28a0830() {
   return (neuron0x288c5a0()*-0.00696068);
}

double NNfunction_sb_uLuR::synapse0x28a0870() {
   return (neuron0x288c8e0()*-0.00168398);
}

double NNfunction_sb_uLuR::synapse0x28a08b0() {
   return (neuron0x288cc20()*0.00440646);
}

double NNfunction_sb_uLuR::synapse0x28a08f0() {
   return (neuron0x288cf60()*-0.0168494);
}

double NNfunction_sb_uLuR::synapse0x28a0930() {
   return (neuron0x288d2a0()*-0.0023852);
}

double NNfunction_sb_uLuR::synapse0x28a0970() {
   return (neuron0x288d5e0()*0.0055292);
}

double NNfunction_sb_uLuR::synapse0x28a09b0() {
   return (neuron0x288d920()*0.295115);
}

double NNfunction_sb_uLuR::synapse0x28a09f0() {
   return (neuron0x288dc60()*-0.0327997);
}

double NNfunction_sb_uLuR::synapse0x28a0a30() {
   return (neuron0x288dfa0()*-0.000466413);
}

double NNfunction_sb_uLuR::synapse0x28a0a70() {
   return (neuron0x288e2e0()*0.121597);
}

double NNfunction_sb_uLuR::synapse0x28a0ab0() {
   return (neuron0x288e620()*0.00380871);
}

double NNfunction_sb_uLuR::synapse0x28a0540() {
   return (neuron0x288e960()*0.0153895);
}

double NNfunction_sb_uLuR::synapse0x28a0580() {
   return (neuron0x288eec0()*-0.00369727);
}

double NNfunction_sb_uLuR::synapse0x28a0c00() {
   return (neuron0x288f0e0()*-0.00205327);
}

double NNfunction_sb_uLuR::synapse0x28a0c40() {
   return (neuron0x288f420()*-0.0114474);
}

double NNfunction_sb_uLuR::synapse0x28a0c80() {
   return (neuron0x288f760()*-0.0126256);
}

double NNfunction_sb_uLuR::synapse0x28a0cc0() {
   return (neuron0x288faa0()*-0.00472329);
}

double NNfunction_sb_uLuR::synapse0x28a0d00() {
   return (neuron0x288fde0()*0.0122406);
}

double NNfunction_sb_uLuR::synapse0x28a0d40() {
   return (neuron0x2890120()*0.000792451);
}

double NNfunction_sb_uLuR::synapse0x28b2c10() {
   return (neuron0x288b560()*0.0350927);
}

double NNfunction_sb_uLuR::synapse0x28b2c50() {
   return (neuron0x288b8a0()*0.341995);
}

double NNfunction_sb_uLuR::synapse0x28b2c90() {
   return (neuron0x288bbe0()*0.00232812);
}

double NNfunction_sb_uLuR::synapse0x28b2cd0() {
   return (neuron0x288bf20()*-0.250158);
}

double NNfunction_sb_uLuR::synapse0x28b2d10() {
   return (neuron0x288c260()*-0.0103809);
}

double NNfunction_sb_uLuR::synapse0x28b2d50() {
   return (neuron0x288c5a0()*0.00391369);
}

double NNfunction_sb_uLuR::synapse0x28b2d90() {
   return (neuron0x288c8e0()*0.00645581);
}

double NNfunction_sb_uLuR::synapse0x28b2dd0() {
   return (neuron0x288cc20()*0.0314602);
}

double NNfunction_sb_uLuR::synapse0x28b2e10() {
   return (neuron0x288cf60()*0.0271099);
}

double NNfunction_sb_uLuR::synapse0x28b2e50() {
   return (neuron0x288d2a0()*0.161763);
}

double NNfunction_sb_uLuR::synapse0x28b2e90() {
   return (neuron0x288d5e0()*0.0083951);
}

double NNfunction_sb_uLuR::synapse0x28b2ed0() {
   return (neuron0x288d920()*0.0151027);
}

double NNfunction_sb_uLuR::synapse0x28b2f10() {
   return (neuron0x288dc60()*0.0864315);
}

double NNfunction_sb_uLuR::synapse0x28b2f50() {
   return (neuron0x288dfa0()*0.0928292);
}

double NNfunction_sb_uLuR::synapse0x28b2f90() {
   return (neuron0x288e2e0()*-0.186443);
}

double NNfunction_sb_uLuR::synapse0x28b2fd0() {
   return (neuron0x288e620()*-0.00457325);
}

double NNfunction_sb_uLuR::synapse0x28a0d80() {
   return (neuron0x288e960()*0.00636704);
}

double NNfunction_sb_uLuR::synapse0x28a0dc0() {
   return (neuron0x288eec0()*0.0355039);
}

double NNfunction_sb_uLuR::synapse0x28b3120() {
   return (neuron0x288f0e0()*0.0763453);
}

double NNfunction_sb_uLuR::synapse0x28b3160() {
   return (neuron0x288f420()*0.0575241);
}

double NNfunction_sb_uLuR::synapse0x28b31a0() {
   return (neuron0x288f760()*0.0509555);
}

double NNfunction_sb_uLuR::synapse0x28b31e0() {
   return (neuron0x288faa0()*-0.047005);
}

double NNfunction_sb_uLuR::synapse0x28b3220() {
   return (neuron0x288fde0()*0.0172062);
}

double NNfunction_sb_uLuR::synapse0x28b3260() {
   return (neuron0x2890120()*-0.018175);
}

double NNfunction_sb_uLuR::synapse0x28b35e0() {
   return (neuron0x288b560()*-0.0388028);
}

double NNfunction_sb_uLuR::synapse0x28b3620() {
   return (neuron0x288b8a0()*0.102454);
}

double NNfunction_sb_uLuR::synapse0x28b3660() {
   return (neuron0x288bbe0()*0.084465);
}

double NNfunction_sb_uLuR::synapse0x28b36a0() {
   return (neuron0x288bf20()*0.112079);
}

double NNfunction_sb_uLuR::synapse0x28b36e0() {
   return (neuron0x288c260()*-0.00810517);
}

double NNfunction_sb_uLuR::synapse0x28b3720() {
   return (neuron0x288c5a0()*0.00922228);
}

double NNfunction_sb_uLuR::synapse0x28b3760() {
   return (neuron0x288c8e0()*0.00896591);
}

double NNfunction_sb_uLuR::synapse0x28b37a0() {
   return (neuron0x288cc20()*0.0328598);
}

double NNfunction_sb_uLuR::synapse0x28b37e0() {
   return (neuron0x288cf60()*-0.0238333);
}

double NNfunction_sb_uLuR::synapse0x28b3820() {
   return (neuron0x288d2a0()*-0.0210669);
}

double NNfunction_sb_uLuR::synapse0x28b3860() {
   return (neuron0x288d5e0()*0.014751);
}

double NNfunction_sb_uLuR::synapse0x28b38a0() {
   return (neuron0x288d920()*-0.43358);
}

double NNfunction_sb_uLuR::synapse0x28b38e0() {
   return (neuron0x288dc60()*-0.590787);
}

double NNfunction_sb_uLuR::synapse0x28b3920() {
   return (neuron0x288dfa0()*0.148187);
}

double NNfunction_sb_uLuR::synapse0x28b3960() {
   return (neuron0x288e2e0()*-0.172497);
}

double NNfunction_sb_uLuR::synapse0x28b39a0() {
   return (neuron0x288e620()*-0.308134);
}

double NNfunction_sb_uLuR::synapse0x28b3430() {
   return (neuron0x288e960()*0.00498849);
}

double NNfunction_sb_uLuR::synapse0x28b3470() {
   return (neuron0x288eec0()*-0.363592);
}

double NNfunction_sb_uLuR::synapse0x28b3af0() {
   return (neuron0x288f0e0()*-0.591804);
}

double NNfunction_sb_uLuR::synapse0x28b3b30() {
   return (neuron0x288f420()*0.0242097);
}

double NNfunction_sb_uLuR::synapse0x28b3b70() {
   return (neuron0x288f760()*-0.0135339);
}

double NNfunction_sb_uLuR::synapse0x28b3bb0() {
   return (neuron0x288faa0()*-0.0421362);
}

double NNfunction_sb_uLuR::synapse0x28b3bf0() {
   return (neuron0x288fde0()*0.0103549);
}

double NNfunction_sb_uLuR::synapse0x28b3c30() {
   return (neuron0x2890120()*-0.086656);
}

double NNfunction_sb_uLuR::synapse0x28b3fb0() {
   return (neuron0x288b560()*0.331108);
}

double NNfunction_sb_uLuR::synapse0x28b3ff0() {
   return (neuron0x288b8a0()*0.500121);
}

double NNfunction_sb_uLuR::synapse0x28b4030() {
   return (neuron0x288bbe0()*0.471994);
}

double NNfunction_sb_uLuR::synapse0x28b4070() {
   return (neuron0x288bf20()*-0.283718);
}

double NNfunction_sb_uLuR::synapse0x28b40b0() {
   return (neuron0x288c260()*0.249295);
}

double NNfunction_sb_uLuR::synapse0x28b40f0() {
   return (neuron0x288c5a0()*0.419504);
}

double NNfunction_sb_uLuR::synapse0x28b4130() {
   return (neuron0x288c8e0()*0.071551);
}

double NNfunction_sb_uLuR::synapse0x28b4170() {
   return (neuron0x288cc20()*-0.509498);
}

double NNfunction_sb_uLuR::synapse0x28b41b0() {
   return (neuron0x288cf60()*-0.471921);
}

double NNfunction_sb_uLuR::synapse0x28b41f0() {
   return (neuron0x288d2a0()*0.387799);
}

double NNfunction_sb_uLuR::synapse0x28b4230() {
   return (neuron0x288d5e0()*0.535685);
}

double NNfunction_sb_uLuR::synapse0x28b4270() {
   return (neuron0x288d920()*-0.438582);
}

double NNfunction_sb_uLuR::synapse0x28b42b0() {
   return (neuron0x288dc60()*0.211463);
}

double NNfunction_sb_uLuR::synapse0x28b42f0() {
   return (neuron0x288dfa0()*-0.44999);
}

double NNfunction_sb_uLuR::synapse0x28b4330() {
   return (neuron0x288e2e0()*-0.135498);
}

double NNfunction_sb_uLuR::synapse0x28b4370() {
   return (neuron0x288e620()*0.144392);
}

double NNfunction_sb_uLuR::synapse0x28b3e00() {
   return (neuron0x288e960()*-0.0645029);
}

double NNfunction_sb_uLuR::synapse0x28b3e40() {
   return (neuron0x288eec0()*0.169577);
}

double NNfunction_sb_uLuR::synapse0x28b44c0() {
   return (neuron0x288f0e0()*0.765044);
}

double NNfunction_sb_uLuR::synapse0x28b4500() {
   return (neuron0x288f420()*-0.26608);
}

double NNfunction_sb_uLuR::synapse0x28b4540() {
   return (neuron0x288f760()*0.115406);
}

double NNfunction_sb_uLuR::synapse0x28b4580() {
   return (neuron0x288faa0()*0.101271);
}

double NNfunction_sb_uLuR::synapse0x28b45c0() {
   return (neuron0x288fde0()*0.149356);
}

double NNfunction_sb_uLuR::synapse0x28b4600() {
   return (neuron0x2890120()*-0.04295);
}

double NNfunction_sb_uLuR::synapse0x28b4980() {
   return (neuron0x288b560()*-0.0097475);
}

double NNfunction_sb_uLuR::synapse0x28b49c0() {
   return (neuron0x288b8a0()*-0.0213226);
}

double NNfunction_sb_uLuR::synapse0x28b4a00() {
   return (neuron0x288bbe0()*-0.00395313);
}

double NNfunction_sb_uLuR::synapse0x28b4a40() {
   return (neuron0x288bf20()*0.611064);
}

double NNfunction_sb_uLuR::synapse0x28b4a80() {
   return (neuron0x288c260()*0.0196514);
}

double NNfunction_sb_uLuR::synapse0x28b4ac0() {
   return (neuron0x288c5a0()*0.0223754);
}

double NNfunction_sb_uLuR::synapse0x28b4b00() {
   return (neuron0x288c8e0()*0.00052838);
}

double NNfunction_sb_uLuR::synapse0x28b4b40() {
   return (neuron0x288cc20()*-0.122616);
}

double NNfunction_sb_uLuR::synapse0x28b4b80() {
   return (neuron0x288cf60()*-0.0430111);
}

double NNfunction_sb_uLuR::synapse0x28b4bc0() {
   return (neuron0x288d2a0()*0.0217534);
}

double NNfunction_sb_uLuR::synapse0x28b4c00() {
   return (neuron0x288d5e0()*-0.0685862);
}

double NNfunction_sb_uLuR::synapse0x28b4c40() {
   return (neuron0x288d920()*-0.922618);
}

double NNfunction_sb_uLuR::synapse0x28b4c80() {
   return (neuron0x288dc60()*-0.0500517);
}

double NNfunction_sb_uLuR::synapse0x28b4cc0() {
   return (neuron0x288dfa0()*0.00437671);
}

double NNfunction_sb_uLuR::synapse0x28b4d00() {
   return (neuron0x288e2e0()*0.219116);
}

double NNfunction_sb_uLuR::synapse0x28b4d40() {
   return (neuron0x288e620()*0.00431695);
}

double NNfunction_sb_uLuR::synapse0x28b47d0() {
   return (neuron0x288e960()*0.0357603);
}

double NNfunction_sb_uLuR::synapse0x28b4810() {
   return (neuron0x288eec0()*-0.0730471);
}

double NNfunction_sb_uLuR::synapse0x28b4e90() {
   return (neuron0x288f0e0()*-0.0243017);
}

double NNfunction_sb_uLuR::synapse0x28b4ed0() {
   return (neuron0x288f420()*0.00355778);
}

double NNfunction_sb_uLuR::synapse0x28b4f10() {
   return (neuron0x288f760()*0.00746651);
}

double NNfunction_sb_uLuR::synapse0x28b4f50() {
   return (neuron0x288faa0()*0.0402435);
}

double NNfunction_sb_uLuR::synapse0x28b4f90() {
   return (neuron0x288fde0()*-0.0764379);
}

double NNfunction_sb_uLuR::synapse0x28b4fd0() {
   return (neuron0x2890120()*-0.0199968);
}

double NNfunction_sb_uLuR::synapse0x2891570() {
   return (neuron0x28905c0()*0.598056);
}

double NNfunction_sb_uLuR::synapse0x28915b0() {
   return (neuron0x2890ed0()*3.97546);
}

double NNfunction_sb_uLuR::synapse0x2892a80() {
   return (neuron0x28919b0()*-0.35708);
}

double NNfunction_sb_uLuR::synapse0x2892ac0() {
   return (neuron0x264b240()*-0.342401);
}

double NNfunction_sb_uLuR::synapse0x2893450() {
   return (neuron0x28927d0()*-0.222171);
}

double NNfunction_sb_uLuR::synapse0x2893490() {
   return (neuron0x28931a0()*-6.46269);
}

double NNfunction_sb_uLuR::synapse0x2894220() {
   return (neuron0x2893f70()*-0.343257);
}

double NNfunction_sb_uLuR::synapse0x2894260() {
   return (neuron0x2894940()*0.00101939);
}

double NNfunction_sb_uLuR::synapse0x2894bf0() {
   return (neuron0x2895310()*-1.3145);
}

double NNfunction_sb_uLuR::synapse0x2894c30() {
   return (neuron0x2895df0()*-0.408009);
}

double NNfunction_sb_uLuR::synapse0x28955c0() {
   return (neuron0x28967c0()*-1.72178);
}

double NNfunction_sb_uLuR::synapse0x2895600() {
   return (neuron0x28938a0()*0.00818224);
}

double NNfunction_sb_uLuR::synapse0x28960a0() {
   return (neuron0x2898370()*-0.853384);
}

double NNfunction_sb_uLuR::synapse0x28960e0() {
   return (neuron0x2898d40()*0.216753);
}

double NNfunction_sb_uLuR::synapse0x2896a70() {
   return (neuron0x2899710()*-0.609103);
}

double NNfunction_sb_uLuR::synapse0x2896ab0() {
   return (neuron0x289a0e0()*0.146258);
}

double NNfunction_sb_uLuR::synapse0x2893b50() {
   return (neuron0x289bef0()*3.83171);
}

double NNfunction_sb_uLuR::synapse0x2893b90() {
   return (neuron0x289c1d0()*0.441619);
}

double NNfunction_sb_uLuR::synapse0x2898620() {
   return (neuron0x289cba0()*-0.302489);
}

double NNfunction_sb_uLuR::synapse0x2898660() {
   return (neuron0x289d570()*1.06978);
}

double NNfunction_sb_uLuR::synapse0x2898ff0() {
   return (neuron0x289df40()*-0.906662);
}

double NNfunction_sb_uLuR::synapse0x2899030() {
   return (neuron0x289e910()*1.26481);
}

double NNfunction_sb_uLuR::synapse0x28999c0() {
   return (neuron0x2897460()*-0.92975);
}

double NNfunction_sb_uLuR::synapse0x2899a00() {
   return (neuron0x2897e30()*0.106076);
}

double NNfunction_sb_uLuR::synapse0x289a390() {
   return (neuron0x28a16a0()*0.473823);
}

double NNfunction_sb_uLuR::synapse0x289a3d0() {
   return (neuron0x28a2070()*-0.749153);
}

double NNfunction_sb_uLuR::synapse0x288e500() {
   return (neuron0x28a2a40()*0.74377);
}

double NNfunction_sb_uLuR::synapse0x288e540() {
   return (neuron0x28a3410()*-0.331258);
}

double NNfunction_sb_uLuR::synapse0x289c480() {
   return (neuron0x28a3de0()*0.230746);
}

double NNfunction_sb_uLuR::synapse0x289c4c0() {
   return (neuron0x28a47b0()*-0.636709);
}

double NNfunction_sb_uLuR::synapse0x289ce50() {
   return (neuron0x28a5180()*-0.0596802);
}

double NNfunction_sb_uLuR::synapse0x289ce90() {
   return (neuron0x28a5b50()*0.390661);
}

double NNfunction_sb_uLuR::synapse0x289d820() {
   return (neuron0x289bbe0()*0.0594967);
}

double NNfunction_sb_uLuR::synapse0x289d860() {
   return (neuron0x28a8730()*0.729069);
}

double NNfunction_sb_uLuR::synapse0x289e1f0() {
   return (neuron0x28a9100()*-0.586602);
}

double NNfunction_sb_uLuR::synapse0x289e230() {
   return (neuron0x28a9ad0()*-0.0147888);
}

double NNfunction_sb_uLuR::synapse0x289ebc0() {
   return (neuron0x28aa4a0()*0.589775);
}

double NNfunction_sb_uLuR::synapse0x289ec00() {
   return (neuron0x28aae70()*-0.651644);
}

double NNfunction_sb_uLuR::synapse0x2897710() {
   return (neuron0x28ab840()*-0.355386);
}

double NNfunction_sb_uLuR::synapse0x2897750() {
   return (neuron0x28ac210()*-0.0998621);
}

double NNfunction_sb_uLuR::synapse0x28a0fc0() {
   return (neuron0x28acbe0()*0.426846);
}

double NNfunction_sb_uLuR::synapse0x28a1000() {
   return (neuron0x28ad7c0()*-0.262138);
}

double NNfunction_sb_uLuR::synapse0x28a1950() {
   return (neuron0x28ae190()*-1.00687);
}

double NNfunction_sb_uLuR::synapse0x28a1990() {
   return (neuron0x289f010()*2.85467);
}

double NNfunction_sb_uLuR::synapse0x28a2320() {
   return (neuron0x289f9e0()*-0.174043);
}

double NNfunction_sb_uLuR::synapse0x28a2360() {
   return (neuron0x28a03b0()*-0.59468);
}

double NNfunction_sb_uLuR::synapse0x28a2cf0() {
   return (neuron0x28b29f0()*-0.267648);
}

double NNfunction_sb_uLuR::synapse0x28a2d30() {
   return (neuron0x28b32a0()*-0.341738);
}

double NNfunction_sb_uLuR::synapse0x28a36c0() {
   return (neuron0x28b3c70()*-0.801199);
}

double NNfunction_sb_uLuR::synapse0x28a3700() {
   return (neuron0x28b4640()*0.23744);
}

double NNfunction_sb_uLuR::synapse0x28a5e00() {
   return (neuron0x28905c0()*-0.00847704);
}

double NNfunction_sb_uLuR::synapse0x28a5e40() {
   return (neuron0x2890ed0()*-0.55546);
}

double NNfunction_sb_uLuR::synapse0x289b3c0() {
   return (neuron0x28919b0()*0.353721);
}

double NNfunction_sb_uLuR::synapse0x289b400() {
   return (neuron0x264b240()*0.111132);
}

double NNfunction_sb_uLuR::synapse0x28a89e0() {
   return (neuron0x28927d0()*-0.0457806);
}

double NNfunction_sb_uLuR::synapse0x28a8a20() {
   return (neuron0x28931a0()*1.1341);
}

double NNfunction_sb_uLuR::synapse0x28a93b0() {
   return (neuron0x2893f70()*0.0120228);
}

double NNfunction_sb_uLuR::synapse0x28a93f0() {
   return (neuron0x2894940()*-0.508594);
}

double NNfunction_sb_uLuR::synapse0x28a9d80() {
   return (neuron0x2895310()*0.0336272);
}

double NNfunction_sb_uLuR::synapse0x28a9dc0() {
   return (neuron0x2895df0()*-1.58522);
}

double NNfunction_sb_uLuR::synapse0x28aa750() {
   return (neuron0x28967c0()*0.737131);
}

double NNfunction_sb_uLuR::synapse0x28aa790() {
   return (neuron0x28938a0()*-1.40974);
}

double NNfunction_sb_uLuR::synapse0x28ab120() {
   return (neuron0x2898370()*-0.0132168);
}

double NNfunction_sb_uLuR::synapse0x28ab160() {
   return (neuron0x2898d40()*-0.876611);
}

double NNfunction_sb_uLuR::synapse0x28abaf0() {
   return (neuron0x2899710()*0.54107);
}

double NNfunction_sb_uLuR::synapse0x28abb30() {
   return (neuron0x289a0e0()*-0.53808);
}

double NNfunction_sb_uLuR::synapse0x28ac4c0() {
   return (neuron0x289bef0()*-0.354321);
}

double NNfunction_sb_uLuR::synapse0x28ac500() {
   return (neuron0x289c1d0()*-0.124152);
}

double NNfunction_sb_uLuR::synapse0x28ace90() {
   return (neuron0x289cba0()*0.360764);
}

double NNfunction_sb_uLuR::synapse0x28aced0() {
   return (neuron0x289d570()*-0.0127674);
}

double NNfunction_sb_uLuR::synapse0x28ada70() {
   return (neuron0x289df40()*0.143787);
}

double NNfunction_sb_uLuR::synapse0x28adab0() {
   return (neuron0x289e910()*0.0506387);
}

double NNfunction_sb_uLuR::synapse0x28ae440() {
   return (neuron0x2897460()*0.0815214);
}

double NNfunction_sb_uLuR::synapse0x28ae480() {
   return (neuron0x2897e30()*0.0708945);
}

double NNfunction_sb_uLuR::synapse0x289f2c0() {
   return (neuron0x28a16a0()*-0.429136);
}

double NNfunction_sb_uLuR::synapse0x289f300() {
   return (neuron0x28a2070()*-0.708258);
}

double NNfunction_sb_uLuR::synapse0x289fc90() {
   return (neuron0x28a2a40()*-0.3237);
}

double NNfunction_sb_uLuR::synapse0x289fcd0() {
   return (neuron0x28a3410()*0.502377);
}

double NNfunction_sb_uLuR::synapse0x28a0660() {
   return (neuron0x28a3de0()*-0.196813);
}

double NNfunction_sb_uLuR::synapse0x28a06a0() {
   return (neuron0x28a47b0()*-0.0323475);
}

double NNfunction_sb_uLuR::synapse0x28b2b80() {
   return (neuron0x28a5180()*0.210646);
}

double NNfunction_sb_uLuR::synapse0x28b2bc0() {
   return (neuron0x28a5b50()*0.0484429);
}

double NNfunction_sb_uLuR::synapse0x28b3550() {
   return (neuron0x289bbe0()*-0.172972);
}

double NNfunction_sb_uLuR::synapse0x28b3590() {
   return (neuron0x28a8730()*-0.0373544);
}

double NNfunction_sb_uLuR::synapse0x28b3f20() {
   return (neuron0x28a9100()*-0.305069);
}

double NNfunction_sb_uLuR::synapse0x28b3f60() {
   return (neuron0x28a9ad0()*0.0989828);
}

double NNfunction_sb_uLuR::synapse0x28b48f0() {
   return (neuron0x28aa4a0()*-0.0327704);
}

double NNfunction_sb_uLuR::synapse0x28b4930() {
   return (neuron0x28aae70()*-0.192093);
}

double NNfunction_sb_uLuR::synapse0x28907e0() {
   return (neuron0x28ab840()*0.13627);
}

double NNfunction_sb_uLuR::synapse0x2890820() {
   return (neuron0x28ac210()*0.145505);
}

double NNfunction_sb_uLuR::synapse0x28a4090() {
   return (neuron0x28acbe0()*0.749202);
}

double NNfunction_sb_uLuR::synapse0x28a40d0() {
   return (neuron0x28ad7c0()*-0.10346);
}

double NNfunction_sb_uLuR::synapse0x28b5010() {
   return (neuron0x28ae190()*0.0498586);
}

double NNfunction_sb_uLuR::synapse0x28b5050() {
   return (neuron0x289f010()*0.621654);
}

double NNfunction_sb_uLuR::synapse0x28b5090() {
   return (neuron0x289f9e0()*-0.205076);
}

double NNfunction_sb_uLuR::synapse0x28b50d0() {
   return (neuron0x28a03b0()*0.350764);
}

double NNfunction_sb_uLuR::synapse0x28bbf80() {
   return (neuron0x28b29f0()*0.116706);
}

double NNfunction_sb_uLuR::synapse0x28bbfc0() {
   return (neuron0x28b32a0()*-0.0429594);
}

double NNfunction_sb_uLuR::synapse0x28bc000() {
   return (neuron0x28b3c70()*0.0326232);
}

double NNfunction_sb_uLuR::synapse0x28bc040() {
   return (neuron0x28b4640()*0.38021);
}

double NNfunction_sb_uLuR::synapse0x28bc3c0() {
   return (neuron0x28905c0()*0.432746);
}

double NNfunction_sb_uLuR::synapse0x28bc400() {
   return (neuron0x2890ed0()*-5.06047);
}

double NNfunction_sb_uLuR::synapse0x28bc440() {
   return (neuron0x28919b0()*1.70195);
}

double NNfunction_sb_uLuR::synapse0x28bc480() {
   return (neuron0x264b240()*0.756764);
}

double NNfunction_sb_uLuR::synapse0x28bc4c0() {
   return (neuron0x28927d0()*0.54735);
}

double NNfunction_sb_uLuR::synapse0x28bc500() {
   return (neuron0x28931a0()*-5.04835);
}

double NNfunction_sb_uLuR::synapse0x28bc540() {
   return (neuron0x2893f70()*-0.862068);
}

double NNfunction_sb_uLuR::synapse0x28bc580() {
   return (neuron0x2894940()*2.27887);
}

double NNfunction_sb_uLuR::synapse0x28bc5c0() {
   return (neuron0x2895310()*0.0943479);
}

double NNfunction_sb_uLuR::synapse0x28bc600() {
   return (neuron0x2895df0()*-0.339687);
}

double NNfunction_sb_uLuR::synapse0x28bc640() {
   return (neuron0x28967c0()*2.38621);
}

double NNfunction_sb_uLuR::synapse0x28bc680() {
   return (neuron0x28938a0()*-0.830124);
}

double NNfunction_sb_uLuR::synapse0x28bc6c0() {
   return (neuron0x2898370()*-0.481);
}

double NNfunction_sb_uLuR::synapse0x28bc700() {
   return (neuron0x2898d40()*-1.81509);
}

double NNfunction_sb_uLuR::synapse0x28bc740() {
   return (neuron0x2899710()*0.944151);
}

double NNfunction_sb_uLuR::synapse0x28bc780() {
   return (neuron0x289a0e0()*0.894347);
}

double NNfunction_sb_uLuR::synapse0x28bc210() {
   return (neuron0x289bef0()*1.32262);
}

double NNfunction_sb_uLuR::synapse0x28bc250() {
   return (neuron0x289c1d0()*0.994952);
}

double NNfunction_sb_uLuR::synapse0x28bc8d0() {
   return (neuron0x289cba0()*2.35967);
}

double NNfunction_sb_uLuR::synapse0x28bc910() {
   return (neuron0x289d570()*0.253654);
}

double NNfunction_sb_uLuR::synapse0x28bc950() {
   return (neuron0x289df40()*1.00122);
}

double NNfunction_sb_uLuR::synapse0x28bc990() {
   return (neuron0x289e910()*1.65882);
}

double NNfunction_sb_uLuR::synapse0x28bc9d0() {
   return (neuron0x2897460()*0.790296);
}

double NNfunction_sb_uLuR::synapse0x28bca10() {
   return (neuron0x2897e30()*1.27989);
}

double NNfunction_sb_uLuR::synapse0x28bca50() {
   return (neuron0x28a16a0()*1.1014);
}

double NNfunction_sb_uLuR::synapse0x28bca90() {
   return (neuron0x28a2070()*0.272007);
}

double NNfunction_sb_uLuR::synapse0x28bcad0() {
   return (neuron0x28a2a40()*1.42184);
}

double NNfunction_sb_uLuR::synapse0x28bcb10() {
   return (neuron0x28a3410()*0.959438);
}

double NNfunction_sb_uLuR::synapse0x28bcb50() {
   return (neuron0x28a3de0()*-0.440173);
}

double NNfunction_sb_uLuR::synapse0x28bcb90() {
   return (neuron0x28a47b0()*-0.509029);
}

double NNfunction_sb_uLuR::synapse0x28bcbd0() {
   return (neuron0x28a5180()*0.870003);
}

double NNfunction_sb_uLuR::synapse0x28bcc10() {
   return (neuron0x28a5b50()*0.795499);
}

double NNfunction_sb_uLuR::synapse0x28bc7c0() {
   return (neuron0x289bbe0()*-0.408962);
}

double NNfunction_sb_uLuR::synapse0x28bc800() {
   return (neuron0x28a8730()*0.385291);
}

double NNfunction_sb_uLuR::synapse0x28bc840() {
   return (neuron0x28a9100()*-1.58873);
}

double NNfunction_sb_uLuR::synapse0x28bc880() {
   return (neuron0x28a9ad0()*1.46187);
}

double NNfunction_sb_uLuR::synapse0x28bce60() {
   return (neuron0x28aa4a0()*0.467158);
}

double NNfunction_sb_uLuR::synapse0x28bcea0() {
   return (neuron0x28aae70()*0.104735);
}

double NNfunction_sb_uLuR::synapse0x28bcee0() {
   return (neuron0x28ab840()*0.783433);
}

double NNfunction_sb_uLuR::synapse0x28bcf20() {
   return (neuron0x28ac210()*1.13555);
}

double NNfunction_sb_uLuR::synapse0x28bcf60() {
   return (neuron0x28acbe0()*1.20642);
}

double NNfunction_sb_uLuR::synapse0x28bcfa0() {
   return (neuron0x28ad7c0()*-0.801861);
}

double NNfunction_sb_uLuR::synapse0x28bcfe0() {
   return (neuron0x28ae190()*1.56747);
}

double NNfunction_sb_uLuR::synapse0x28bd020() {
   return (neuron0x289f010()*-4.62483);
}

double NNfunction_sb_uLuR::synapse0x28bd060() {
   return (neuron0x289f9e0()*1.54424);
}

double NNfunction_sb_uLuR::synapse0x28bd0a0() {
   return (neuron0x28a03b0()*-3.00029);
}

double NNfunction_sb_uLuR::synapse0x28bd0e0() {
   return (neuron0x28b29f0()*-0.182349);
}

double NNfunction_sb_uLuR::synapse0x28bd120() {
   return (neuron0x28b32a0()*0.487367);
}

double NNfunction_sb_uLuR::synapse0x28bd160() {
   return (neuron0x28b3c70()*0.212916);
}

double NNfunction_sb_uLuR::synapse0x28bd1a0() {
   return (neuron0x28b4640()*0.72877);
}

double NNfunction_sb_uLuR::synapse0x28bd520() {
   return (neuron0x28905c0()*-0.0502314);
}

double NNfunction_sb_uLuR::synapse0x28bd560() {
   return (neuron0x2890ed0()*1.72972);
}

double NNfunction_sb_uLuR::synapse0x28bd5a0() {
   return (neuron0x28919b0()*0.0828704);
}

double NNfunction_sb_uLuR::synapse0x28bd5e0() {
   return (neuron0x264b240()*0.0193108);
}

double NNfunction_sb_uLuR::synapse0x28bd620() {
   return (neuron0x28927d0()*0.255072);
}

double NNfunction_sb_uLuR::synapse0x28bd660() {
   return (neuron0x28931a0()*-0.679033);
}

double NNfunction_sb_uLuR::synapse0x28bd6a0() {
   return (neuron0x2893f70()*0.00718052);
}

double NNfunction_sb_uLuR::synapse0x28bd6e0() {
   return (neuron0x2894940()*-0.310347);
}

double NNfunction_sb_uLuR::synapse0x28bd720() {
   return (neuron0x2895310()*0.0259111);
}

double NNfunction_sb_uLuR::synapse0x28bd760() {
   return (neuron0x2895df0()*0.662907);
}

double NNfunction_sb_uLuR::synapse0x28bd7a0() {
   return (neuron0x28967c0()*-0.368776);
}

double NNfunction_sb_uLuR::synapse0x28bd7e0() {
   return (neuron0x28938a0()*1.63205);
}

double NNfunction_sb_uLuR::synapse0x28bd820() {
   return (neuron0x2898370()*0.0163239);
}

double NNfunction_sb_uLuR::synapse0x28bd860() {
   return (neuron0x2898d40()*-1.14271);
}

double NNfunction_sb_uLuR::synapse0x28bd8a0() {
   return (neuron0x2899710()*-2.18606);
}

double NNfunction_sb_uLuR::synapse0x28bd8e0() {
   return (neuron0x289a0e0()*1.12388);
}

double NNfunction_sb_uLuR::synapse0x28bd370() {
   return (neuron0x289bef0()*-3.74714);
}

double NNfunction_sb_uLuR::synapse0x28bd3b0() {
   return (neuron0x289c1d0()*0.15993);
}

double NNfunction_sb_uLuR::synapse0x28bda30() {
   return (neuron0x289cba0()*0.24033);
}

double NNfunction_sb_uLuR::synapse0x28bda70() {
   return (neuron0x289d570()*-0.0232717);
}

double NNfunction_sb_uLuR::synapse0x28bdab0() {
   return (neuron0x289df40()*-0.870842);
}

double NNfunction_sb_uLuR::synapse0x28bdaf0() {
   return (neuron0x289e910()*-0.0164698);
}

double NNfunction_sb_uLuR::synapse0x28bdb30() {
   return (neuron0x2897460()*0.0131155);
}

double NNfunction_sb_uLuR::synapse0x28bdb70() {
   return (neuron0x2897e30()*-0.030461);
}

double NNfunction_sb_uLuR::synapse0x28bdbb0() {
   return (neuron0x28a16a0()*-0.238091);
}

double NNfunction_sb_uLuR::synapse0x28bdbf0() {
   return (neuron0x28a2070()*0.510936);
}

double NNfunction_sb_uLuR::synapse0x28bdc30() {
   return (neuron0x28a2a40()*0.00787938);
}

double NNfunction_sb_uLuR::synapse0x28bdc70() {
   return (neuron0x28a3410()*-2.71138);
}

double NNfunction_sb_uLuR::synapse0x28bdcb0() {
   return (neuron0x28a3de0()*0.143303);
}

double NNfunction_sb_uLuR::synapse0x28bdcf0() {
   return (neuron0x28a47b0()*-0.00746861);
}

double NNfunction_sb_uLuR::synapse0x28bdd30() {
   return (neuron0x28a5180()*-0.0669342);
}

double NNfunction_sb_uLuR::synapse0x28bdd70() {
   return (neuron0x28a5b50()*-0.1569);
}

double NNfunction_sb_uLuR::synapse0x28bd920() {
   return (neuron0x289bbe0()*-0.466136);
}

double NNfunction_sb_uLuR::synapse0x28bd960() {
   return (neuron0x28a8730()*-0.00618739);
}

double NNfunction_sb_uLuR::synapse0x28bd9a0() {
   return (neuron0x28a9100()*0.920211);
}

double NNfunction_sb_uLuR::synapse0x28bd9e0() {
   return (neuron0x28a9ad0()*-0.0133656);
}

double NNfunction_sb_uLuR::synapse0x28bdfc0() {
   return (neuron0x28aa4a0()*-0.0758648);
}

double NNfunction_sb_uLuR::synapse0x28be000() {
   return (neuron0x28aae70()*-0.663471);
}

double NNfunction_sb_uLuR::synapse0x28be040() {
   return (neuron0x28ab840()*0.0156197);
}

double NNfunction_sb_uLuR::synapse0x28be080() {
   return (neuron0x28ac210()*-0.00980767);
}

double NNfunction_sb_uLuR::synapse0x28be0c0() {
   return (neuron0x28acbe0()*-1.82403);
}

double NNfunction_sb_uLuR::synapse0x28be100() {
   return (neuron0x28ad7c0()*-0.0563933);
}

double NNfunction_sb_uLuR::synapse0x28be140() {
   return (neuron0x28ae190()*-1.04977);
}

double NNfunction_sb_uLuR::synapse0x28be180() {
   return (neuron0x289f010()*1.95989);
}

double NNfunction_sb_uLuR::synapse0x28be1c0() {
   return (neuron0x289f9e0()*-0.163727);
}

double NNfunction_sb_uLuR::synapse0x28be200() {
   return (neuron0x28a03b0()*3.19907);
}

double NNfunction_sb_uLuR::synapse0x28be240() {
   return (neuron0x28b29f0()*-0.860384);
}

double NNfunction_sb_uLuR::synapse0x28be280() {
   return (neuron0x28b32a0()*0.188826);
}

double NNfunction_sb_uLuR::synapse0x28be2c0() {
   return (neuron0x28b3c70()*0.072007);
}

double NNfunction_sb_uLuR::synapse0x28be300() {
   return (neuron0x28b4640()*0.939113);
}

double NNfunction_sb_uLuR::synapse0x28be680() {
   return (neuron0x28905c0()*-0.111751);
}

double NNfunction_sb_uLuR::synapse0x28be6c0() {
   return (neuron0x2890ed0()*-2.39927);
}

double NNfunction_sb_uLuR::synapse0x28be700() {
   return (neuron0x28919b0()*0.0595366);
}

double NNfunction_sb_uLuR::synapse0x28be740() {
   return (neuron0x264b240()*-0.19663);
}

double NNfunction_sb_uLuR::synapse0x28be780() {
   return (neuron0x28927d0()*-0.0158343);
}

double NNfunction_sb_uLuR::synapse0x28be7c0() {
   return (neuron0x28931a0()*-2.13064);
}

double NNfunction_sb_uLuR::synapse0x28be800() {
   return (neuron0x2893f70()*0.152585);
}

double NNfunction_sb_uLuR::synapse0x28be840() {
   return (neuron0x2894940()*0.247358);
}

double NNfunction_sb_uLuR::synapse0x28be880() {
   return (neuron0x2895310()*-0.0325568);
}

double NNfunction_sb_uLuR::synapse0x28be8c0() {
   return (neuron0x2895df0()*-0.861131);
}

double NNfunction_sb_uLuR::synapse0x28be900() {
   return (neuron0x28967c0()*-0.358032);
}

double NNfunction_sb_uLuR::synapse0x28be940() {
   return (neuron0x28938a0()*-0.531535);
}

double NNfunction_sb_uLuR::synapse0x28be980() {
   return (neuron0x2898370()*0.0911309);
}

double NNfunction_sb_uLuR::synapse0x28be9c0() {
   return (neuron0x2898d40()*0.10537);
}

double NNfunction_sb_uLuR::synapse0x28bea00() {
   return (neuron0x2899710()*1.05489);
}

double NNfunction_sb_uLuR::synapse0x28bea40() {
   return (neuron0x289a0e0()*-0.0204613);
}

double NNfunction_sb_uLuR::synapse0x28be4d0() {
   return (neuron0x289bef0()*-0.770624);
}

double NNfunction_sb_uLuR::synapse0x28be510() {
   return (neuron0x289c1d0()*0.055327);
}

double NNfunction_sb_uLuR::synapse0x28beb90() {
   return (neuron0x289cba0()*-0.398415);
}

double NNfunction_sb_uLuR::synapse0x28bebd0() {
   return (neuron0x289d570()*-0.0488336);
}

double NNfunction_sb_uLuR::synapse0x28bec10() {
   return (neuron0x289df40()*0.480024);
}

double NNfunction_sb_uLuR::synapse0x28bec50() {
   return (neuron0x289e910()*-0.211033);
}

double NNfunction_sb_uLuR::synapse0x28bec90() {
   return (neuron0x2897460()*-0.139747);
}

double NNfunction_sb_uLuR::synapse0x28becd0() {
   return (neuron0x2897e30()*-0.262814);
}

double NNfunction_sb_uLuR::synapse0x28bed10() {
   return (neuron0x28a16a0()*-0.0375564);
}

double NNfunction_sb_uLuR::synapse0x28bed50() {
   return (neuron0x28a2070()*0.0762969);
}

double NNfunction_sb_uLuR::synapse0x28bed90() {
   return (neuron0x28a2a40()*0.603532);
}

double NNfunction_sb_uLuR::synapse0x28bedd0() {
   return (neuron0x28a3410()*0.109356);
}

double NNfunction_sb_uLuR::synapse0x28bee10() {
   return (neuron0x28a3de0()*0.2857);
}

double NNfunction_sb_uLuR::synapse0x28bee50() {
   return (neuron0x28a47b0()*0.0829994);
}

double NNfunction_sb_uLuR::synapse0x28bee90() {
   return (neuron0x28a5180()*-0.266038);
}

double NNfunction_sb_uLuR::synapse0x28beed0() {
   return (neuron0x28a5b50()*-0.0632643);
}

double NNfunction_sb_uLuR::synapse0x28bea80() {
   return (neuron0x289bbe0()*-0.316284);
}

double NNfunction_sb_uLuR::synapse0x28beac0() {
   return (neuron0x28a8730()*7.58601e-06);
}

double NNfunction_sb_uLuR::synapse0x28beb00() {
   return (neuron0x28a9100()*-0.153722);
}

double NNfunction_sb_uLuR::synapse0x28beb40() {
   return (neuron0x28a9ad0()*-0.397773);
}

double NNfunction_sb_uLuR::synapse0x28bf120() {
   return (neuron0x28aa4a0()*-0.0542684);
}

double NNfunction_sb_uLuR::synapse0x28bf160() {
   return (neuron0x28aae70()*0.231509);
}

double NNfunction_sb_uLuR::synapse0x28bf1a0() {
   return (neuron0x28ab840()*-0.252926);
}

double NNfunction_sb_uLuR::synapse0x28bf1e0() {
   return (neuron0x28ac210()*-0.120587);
}

double NNfunction_sb_uLuR::synapse0x28bf220() {
   return (neuron0x28acbe0()*0.14944);
}

double NNfunction_sb_uLuR::synapse0x28bf260() {
   return (neuron0x28ad7c0()*0.163174);
}

double NNfunction_sb_uLuR::synapse0x28bf2a0() {
   return (neuron0x28ae190()*0.395772);
}

double NNfunction_sb_uLuR::synapse0x28bf2e0() {
   return (neuron0x289f010()*0.630274);
}

double NNfunction_sb_uLuR::synapse0x28bf320() {
   return (neuron0x289f9e0()*0.29828);
}

double NNfunction_sb_uLuR::synapse0x28bf360() {
   return (neuron0x28a03b0()*1.5918);
}

double NNfunction_sb_uLuR::synapse0x28bf3a0() {
   return (neuron0x28b29f0()*0.244681);
}

double NNfunction_sb_uLuR::synapse0x28bf3e0() {
   return (neuron0x28b32a0()*-0.519274);
}

double NNfunction_sb_uLuR::synapse0x28bf420() {
   return (neuron0x28b3c70()*0.0174467);
}

double NNfunction_sb_uLuR::synapse0x28bf460() {
   return (neuron0x28b4640()*0.727482);
}

double NNfunction_sb_uLuR::synapse0x2890580() {
   return (neuron0x28bb840()*-3.45301);
}

double NNfunction_sb_uLuR::synapse0x28bf6c0() {
   return (neuron0x28bbbe0()*-4.73391);
}

double NNfunction_sb_uLuR::synapse0x28bf700() {
   return (neuron0x28bc080()*-5.90525);
}

double NNfunction_sb_uLuR::synapse0x28bf740() {
   return (neuron0x28bd1e0()*9.07373);
}

double NNfunction_sb_uLuR::synapse0x28bf780() {
   return (neuron0x28be340()*-3.54749);
}

