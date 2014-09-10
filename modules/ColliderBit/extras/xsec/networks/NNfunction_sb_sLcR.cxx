#include "NNfunction_sb_sLcR.h"
#include <cmath>

double NNfunction_sb_sLcR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.7379)/15.0227;
   input1 = (in1 - 38.3559)/837.442;
   input2 = (in2 - 407.229)/519.092;
   input3 = (in3 - 155.209)/645.36;
   input4 = (in4 - 737.87)/785.281;
   input5 = (in5 - 622.705)/751.568;
   input6 = (in6 - 627.108)/757.83;
   input7 = (in7 - 632.127)/754.563;
   input8 = (in8 - 619.294)/762.919;
   input9 = (in9 - 607.046)/743.447;
   input10 = (in10 - 645.38)/776.549;
   input11 = (in11 - 595.369)/630.387;
   input12 = (in12 - 376.206)/230.508;
   input13 = (in13 - 452.773)/381.82;
   input14 = (in14 - 602.149)/618.42;
   input15 = (in15 - 379.011)/229.782;
   input16 = (in16 - 430.302)/420.741;
   input17 = (in17 - 616.65)/662.318;
   input18 = (in18 - 607.985)/659.593;
   input19 = (in19 - 627.357)/658.312;
   input20 = (in20 - -133.132)/398.327;
   input21 = (in21 - -167.382)/899.938;
   input22 = (in22 - 9.65531)/920.877;
   input23 = (in23 - -59.787)/498.733;
   switch(index) {
     case 0:
         return neuron0x32c1090();
     default:
         return 0.;
   }
}

double NNfunction_sb_sLcR::Value(int index, double* input) {
   input0 = (input[0] - 22.7379)/15.0227;
   input1 = (input[1] - 38.3559)/837.442;
   input2 = (input[2] - 407.229)/519.092;
   input3 = (input[3] - 155.209)/645.36;
   input4 = (input[4] - 737.87)/785.281;
   input5 = (input[5] - 622.705)/751.568;
   input6 = (input[6] - 627.108)/757.83;
   input7 = (input[7] - 632.127)/754.563;
   input8 = (input[8] - 619.294)/762.919;
   input9 = (input[9] - 607.046)/743.447;
   input10 = (input[10] - 645.38)/776.549;
   input11 = (input[11] - 595.369)/630.387;
   input12 = (input[12] - 376.206)/230.508;
   input13 = (input[13] - 452.773)/381.82;
   input14 = (input[14] - 602.149)/618.42;
   input15 = (input[15] - 379.011)/229.782;
   input16 = (input[16] - 430.302)/420.741;
   input17 = (input[17] - 616.65)/662.318;
   input18 = (input[18] - 607.985)/659.593;
   input19 = (input[19] - 627.357)/658.312;
   input20 = (input[20] - -133.132)/398.327;
   input21 = (input[21] - -167.382)/899.938;
   input22 = (input[22] - 9.65531)/920.877;
   input23 = (input[23] - -59.787)/498.733;
   switch(index) {
     case 0:
         return neuron0x32c1090();
     default:
         return 0.;
   }
}

double NNfunction_sb_sLcR::neuron0x328d180() {
   return input0;
}

double NNfunction_sb_sLcR::neuron0x328d4c0() {
   return input1;
}

double NNfunction_sb_sLcR::neuron0x328d800() {
   return input2;
}

double NNfunction_sb_sLcR::neuron0x328db40() {
   return input3;
}

double NNfunction_sb_sLcR::neuron0x328de80() {
   return input4;
}

double NNfunction_sb_sLcR::neuron0x328e1c0() {
   return input5;
}

double NNfunction_sb_sLcR::neuron0x328e500() {
   return input6;
}

double NNfunction_sb_sLcR::neuron0x328e840() {
   return input7;
}

double NNfunction_sb_sLcR::neuron0x328eb80() {
   return input8;
}

double NNfunction_sb_sLcR::neuron0x328eec0() {
   return input9;
}

double NNfunction_sb_sLcR::neuron0x328f200() {
   return input10;
}

double NNfunction_sb_sLcR::neuron0x328f540() {
   return input11;
}

double NNfunction_sb_sLcR::neuron0x328f880() {
   return input12;
}

double NNfunction_sb_sLcR::neuron0x328fbc0() {
   return input13;
}

double NNfunction_sb_sLcR::neuron0x328ff00() {
   return input14;
}

double NNfunction_sb_sLcR::neuron0x3290240() {
   return input15;
}

double NNfunction_sb_sLcR::neuron0x3290580() {
   return input16;
}

double NNfunction_sb_sLcR::neuron0x3290ae0() {
   return input17;
}

double NNfunction_sb_sLcR::neuron0x3290d00() {
   return input18;
}

double NNfunction_sb_sLcR::neuron0x3291040() {
   return input19;
}

double NNfunction_sb_sLcR::neuron0x3291380() {
   return input20;
}

double NNfunction_sb_sLcR::neuron0x32916c0() {
   return input21;
}

double NNfunction_sb_sLcR::neuron0x3291a00() {
   return input22;
}

double NNfunction_sb_sLcR::neuron0x3291d40() {
   return input23;
}

double NNfunction_sb_sLcR::input0x32921b0() {
   double input = 0.119303;
   input += synapse0x328d040();
   input += synapse0x328d080();
   input += synapse0x3292460();
   input += synapse0x32924a0();
   input += synapse0x32924e0();
   input += synapse0x3292520();
   input += synapse0x3292560();
   input += synapse0x32925a0();
   input += synapse0x32925e0();
   input += synapse0x3292620();
   input += synapse0x3292660();
   input += synapse0x32926a0();
   input += synapse0x32926e0();
   input += synapse0x3292720();
   input += synapse0x3292760();
   input += synapse0x32927a0();
   input += synapse0x328cfb0();
   input += synapse0x328cff0();
   input += synapse0x3048370();
   input += synapse0x30483b0();
   input += synapse0x3292a00();
   input += synapse0x3292a40();
   input += synapse0x3292a80();
   input += synapse0x3292ac0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32921b0() {
   double input = input0x32921b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x3292b00() {
   double input = 0.052284;
   input += synapse0x3292e40();
   input += synapse0x3292e80();
   input += synapse0x3292ec0();
   input += synapse0x3292f00();
   input += synapse0x3292f40();
   input += synapse0x3292f80();
   input += synapse0x3292fc0();
   input += synapse0x3293000();
   input += synapse0x3293040();
   input += synapse0x32928f0();
   input += synapse0x3292930();
   input += synapse0x3292970();
   input += synapse0x32929b0();
   input += synapse0x3293290();
   input += synapse0x32932d0();
   input += synapse0x3293310();
   input += synapse0x3292c90();
   input += synapse0x3292cd0();
   input += synapse0x3293460();
   input += synapse0x32934a0();
   input += synapse0x32934e0();
   input += synapse0x3293520();
   input += synapse0x3293560();
   input += synapse0x32935a0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x3292b00() {
   double input = input0x3292b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32935e0() {
   double input = -0.0304964;
   input += synapse0x3293920();
   input += synapse0x3293960();
   input += synapse0x32939a0();
   input += synapse0x32939e0();
   input += synapse0x3293a20();
   input += synapse0x3293a60();
   input += synapse0x3293aa0();
   input += synapse0x3293ae0();
   input += synapse0x3293b20();
   input += synapse0x3293b60();
   input += synapse0x3293ba0();
   input += synapse0x3293be0();
   input += synapse0x3293c20();
   input += synapse0x3293c60();
   input += synapse0x3293ca0();
   input += synapse0x3293ce0();
   input += synapse0x3293770();
   input += synapse0x32937b0();
   input += synapse0x3048a10();
   input += synapse0x30562e0();
   input += synapse0x3056320();
   input += synapse0x327c210();
   input += synapse0x327c250();
   input += synapse0x327c290();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32935e0() {
   double input = input0x32935e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x3293080() {
   double input = -2.10052;
   input += synapse0x3056b60();
   input += synapse0x3293210();
   input += synapse0x3293250();
   input += synapse0x3293e30();
   input += synapse0x3293e70();
   input += synapse0x3293eb0();
   input += synapse0x3293ef0();
   input += synapse0x3293f30();
   input += synapse0x3293f70();
   input += synapse0x3293fb0();
   input += synapse0x3293ff0();
   input += synapse0x3294030();
   input += synapse0x3294070();
   input += synapse0x32940b0();
   input += synapse0x32940f0();
   input += synapse0x3294130();
   input += synapse0x328d0c0();
   input += synapse0x328d100();
   input += synapse0x328d140();
   input += synapse0x3294280();
   input += synapse0x32942c0();
   input += synapse0x3294300();
   input += synapse0x3294340();
   input += synapse0x3294380();
   return input;
}

double NNfunction_sb_sLcR::neuron0x3293080() {
   double input = input0x3293080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32943c0() {
   double input = -0.85075;
   input += synapse0x3294700();
   input += synapse0x3294740();
   input += synapse0x3294780();
   input += synapse0x32947c0();
   input += synapse0x3294800();
   input += synapse0x3294840();
   input += synapse0x3294880();
   input += synapse0x32948c0();
   input += synapse0x3294900();
   input += synapse0x3294940();
   input += synapse0x3294980();
   input += synapse0x32949c0();
   input += synapse0x3294a00();
   input += synapse0x3294a40();
   input += synapse0x3294a80();
   input += synapse0x3294ac0();
   input += synapse0x3294550();
   input += synapse0x3294590();
   input += synapse0x3294c10();
   input += synapse0x3294c50();
   input += synapse0x3294c90();
   input += synapse0x3294cd0();
   input += synapse0x3294d10();
   input += synapse0x3294d50();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32943c0() {
   double input = input0x32943c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x3294d90() {
   double input = -0.553178;
   input += synapse0x32950d0();
   input += synapse0x3295110();
   input += synapse0x3295150();
   input += synapse0x3295190();
   input += synapse0x32951d0();
   input += synapse0x3295210();
   input += synapse0x3295250();
   input += synapse0x3295290();
   input += synapse0x32952d0();
   input += synapse0x3056630();
   input += synapse0x3056670();
   input += synapse0x30566b0();
   input += synapse0x30566f0();
   input += synapse0x3056730();
   input += synapse0x3056770();
   input += synapse0x30567b0();
   input += synapse0x3294f20();
   input += synapse0x3294f60();
   input += synapse0x3056900();
   input += synapse0x3056940();
   input += synapse0x3056980();
   input += synapse0x30569c0();
   input += synapse0x3056a00();
   input += synapse0x3295b20();
   return input;
}

double NNfunction_sb_sLcR::neuron0x3294d90() {
   double input = input0x3294d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x3295b60() {
   double input = -0.0181171;
   input += synapse0x3295ea0();
   input += synapse0x3295ee0();
   input += synapse0x3295f20();
   input += synapse0x3295f60();
   input += synapse0x3295fa0();
   input += synapse0x3295fe0();
   input += synapse0x3296020();
   input += synapse0x3296060();
   input += synapse0x32960a0();
   input += synapse0x32960e0();
   input += synapse0x3296120();
   input += synapse0x3296160();
   input += synapse0x32961a0();
   input += synapse0x32961e0();
   input += synapse0x3296220();
   input += synapse0x3296260();
   input += synapse0x3295cf0();
   input += synapse0x3295d30();
   input += synapse0x32963b0();
   input += synapse0x32963f0();
   input += synapse0x3296430();
   input += synapse0x3296470();
   input += synapse0x32964b0();
   input += synapse0x32964f0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x3295b60() {
   double input = input0x3295b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x3296530() {
   double input = 3.12698;
   input += synapse0x3296870();
   input += synapse0x32968b0();
   input += synapse0x32968f0();
   input += synapse0x3296930();
   input += synapse0x3296970();
   input += synapse0x32969b0();
   input += synapse0x32969f0();
   input += synapse0x3296a30();
   input += synapse0x3296a70();
   input += synapse0x3296ab0();
   input += synapse0x3296af0();
   input += synapse0x3296b30();
   input += synapse0x3296b70();
   input += synapse0x3296bb0();
   input += synapse0x3296bf0();
   input += synapse0x3296c30();
   input += synapse0x32966c0();
   input += synapse0x3296700();
   input += synapse0x3296d80();
   input += synapse0x3296dc0();
   input += synapse0x3296e00();
   input += synapse0x3296e40();
   input += synapse0x3296e80();
   input += synapse0x3296ec0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x3296530() {
   double input = input0x3296530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x3296f00() {
   double input = 0.11273;
   input += synapse0x32909d0();
   input += synapse0x3290a10();
   input += synapse0x3290a50();
   input += synapse0x3290a90();
   input += synapse0x3297450();
   input += synapse0x3297490();
   input += synapse0x32974d0();
   input += synapse0x3297510();
   input += synapse0x3297550();
   input += synapse0x3297590();
   input += synapse0x32975d0();
   input += synapse0x3297610();
   input += synapse0x3297650();
   input += synapse0x3297690();
   input += synapse0x32976d0();
   input += synapse0x3297710();
   input += synapse0x3297090();
   input += synapse0x32970d0();
   input += synapse0x3297860();
   input += synapse0x32978a0();
   input += synapse0x32978e0();
   input += synapse0x3297920();
   input += synapse0x3297960();
   input += synapse0x32979a0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x3296f00() {
   double input = input0x3296f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32979e0() {
   double input = -0.0068468;
   input += synapse0x3297d20();
   input += synapse0x3297d60();
   input += synapse0x3297da0();
   input += synapse0x3297de0();
   input += synapse0x3297e20();
   input += synapse0x3297e60();
   input += synapse0x3297ea0();
   input += synapse0x3297ee0();
   input += synapse0x3297f20();
   input += synapse0x3297f60();
   input += synapse0x3297fa0();
   input += synapse0x3297fe0();
   input += synapse0x3298020();
   input += synapse0x3298060();
   input += synapse0x32980a0();
   input += synapse0x32980e0();
   input += synapse0x3297b70();
   input += synapse0x3297bb0();
   input += synapse0x3298230();
   input += synapse0x3298270();
   input += synapse0x32982b0();
   input += synapse0x32982f0();
   input += synapse0x3298330();
   input += synapse0x3298370();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32979e0() {
   double input = input0x32979e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32983b0() {
   double input = 0.589522;
   input += synapse0x32986f0();
   input += synapse0x3298730();
   input += synapse0x3298770();
   input += synapse0x32987b0();
   input += synapse0x32987f0();
   input += synapse0x3298830();
   input += synapse0x3298870();
   input += synapse0x32988b0();
   input += synapse0x32988f0();
   input += synapse0x3298930();
   input += synapse0x3298970();
   input += synapse0x32989b0();
   input += synapse0x32989f0();
   input += synapse0x3298a30();
   input += synapse0x3298a70();
   input += synapse0x3298ab0();
   input += synapse0x3298540();
   input += synapse0x3298580();
   input += synapse0x3295310();
   input += synapse0x3295350();
   input += synapse0x3295390();
   input += synapse0x32953d0();
   input += synapse0x3295410();
   input += synapse0x3295450();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32983b0() {
   double input = input0x32983b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x3295490() {
   double input = 0.959719;
   input += synapse0x32957d0();
   input += synapse0x3295810();
   input += synapse0x3295850();
   input += synapse0x3295890();
   input += synapse0x32958d0();
   input += synapse0x3295910();
   input += synapse0x3295950();
   input += synapse0x3295990();
   input += synapse0x32959d0();
   input += synapse0x3295a10();
   input += synapse0x3295a50();
   input += synapse0x3295a90();
   input += synapse0x3295ad0();
   input += synapse0x3299c10();
   input += synapse0x3299c50();
   input += synapse0x3299c90();
   input += synapse0x3295620();
   input += synapse0x3295660();
   input += synapse0x3299de0();
   input += synapse0x3299e20();
   input += synapse0x3299e60();
   input += synapse0x3299ea0();
   input += synapse0x3299ee0();
   input += synapse0x3299f20();
   return input;
}

double NNfunction_sb_sLcR::neuron0x3295490() {
   double input = input0x3295490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x3299f60() {
   double input = 1.80657;
   input += synapse0x329a2a0();
   input += synapse0x329a2e0();
   input += synapse0x329a320();
   input += synapse0x329a360();
   input += synapse0x329a3a0();
   input += synapse0x329a3e0();
   input += synapse0x329a420();
   input += synapse0x329a460();
   input += synapse0x329a4a0();
   input += synapse0x329a4e0();
   input += synapse0x329a520();
   input += synapse0x329a560();
   input += synapse0x329a5a0();
   input += synapse0x329a5e0();
   input += synapse0x329a620();
   input += synapse0x329a660();
   input += synapse0x329a0f0();
   input += synapse0x329a130();
   input += synapse0x329a7b0();
   input += synapse0x329a7f0();
   input += synapse0x329a830();
   input += synapse0x329a870();
   input += synapse0x329a8b0();
   input += synapse0x329a8f0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x3299f60() {
   double input = input0x3299f60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x329a930() {
   double input = -0.0307765;
   input += synapse0x329ac70();
   input += synapse0x329acb0();
   input += synapse0x329acf0();
   input += synapse0x329ad30();
   input += synapse0x329ad70();
   input += synapse0x329adb0();
   input += synapse0x329adf0();
   input += synapse0x329ae30();
   input += synapse0x329ae70();
   input += synapse0x329aeb0();
   input += synapse0x329aef0();
   input += synapse0x329af30();
   input += synapse0x329af70();
   input += synapse0x329afb0();
   input += synapse0x329aff0();
   input += synapse0x329b030();
   input += synapse0x329aac0();
   input += synapse0x329ab00();
   input += synapse0x329b180();
   input += synapse0x329b1c0();
   input += synapse0x329b200();
   input += synapse0x329b240();
   input += synapse0x329b280();
   input += synapse0x329b2c0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x329a930() {
   double input = input0x329a930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x329b300() {
   double input = -1.77132;
   input += synapse0x329b640();
   input += synapse0x329b680();
   input += synapse0x329b6c0();
   input += synapse0x329b700();
   input += synapse0x329b740();
   input += synapse0x329b780();
   input += synapse0x329b7c0();
   input += synapse0x329b800();
   input += synapse0x329b840();
   input += synapse0x329b880();
   input += synapse0x329b8c0();
   input += synapse0x329b900();
   input += synapse0x329b940();
   input += synapse0x329b980();
   input += synapse0x329b9c0();
   input += synapse0x329ba00();
   input += synapse0x329b490();
   input += synapse0x329b4d0();
   input += synapse0x329bb50();
   input += synapse0x329bb90();
   input += synapse0x329bbd0();
   input += synapse0x329bc10();
   input += synapse0x329bc50();
   input += synapse0x329bc90();
   return input;
}

double NNfunction_sb_sLcR::neuron0x329b300() {
   double input = input0x329b300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x329bcd0() {
   double input = 1.11405;
   input += synapse0x329c010();
   input += synapse0x328d3a0();
   input += synapse0x328d3e0();
   input += synapse0x328d6e0();
   input += synapse0x328d720();
   input += synapse0x328da20();
   input += synapse0x328da60();
   input += synapse0x328dd60();
   input += synapse0x328dda0();
   input += synapse0x328e0a0();
   input += synapse0x328e0e0();
   input += synapse0x328e3e0();
   input += synapse0x328e420();
   input += synapse0x328e720();
   input += synapse0x328e760();
   input += synapse0x328ea60();
   input += synapse0x328eaa0();
   input += synapse0x328eda0();
   input += synapse0x328ede0();
   input += synapse0x328f0e0();
   input += synapse0x328f120();
   input += synapse0x328f420();
   input += synapse0x328f460();
   input += synapse0x328f760();
   return input;
}

double NNfunction_sb_sLcR::neuron0x329bcd0() {
   double input = input0x329bcd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x329dae0() {
   double input = 5.41588;
   input += synapse0x328f7a0();
   input += synapse0x3290460();
   input += synapse0x32904a0();
   input += synapse0x329be60();
   input += synapse0x329bea0();
   input += synapse0x32907a0();
   input += synapse0x32907e0();
   input += synapse0x3048250();
   input += synapse0x3048290();
   input += synapse0x3290f20();
   input += synapse0x3290f60();
   input += synapse0x3291260();
   input += synapse0x32912a0();
   input += synapse0x32915a0();
   input += synapse0x32915e0();
   input += synapse0x32918e0();
   input += synapse0x3291920();
   input += synapse0x3291c20();
   input += synapse0x3291c60();
   input += synapse0x3291f60();
   input += synapse0x3291fa0();
   input += synapse0x328faa0();
   input += synapse0x328fae0();
   input += synapse0x329dd80();
   return input;
}

double NNfunction_sb_sLcR::neuron0x329dae0() {
   double input = input0x329dae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x329ddc0() {
   double input = -0.360455;
   input += synapse0x329e100();
   input += synapse0x329e140();
   input += synapse0x329e180();
   input += synapse0x329e1c0();
   input += synapse0x329e200();
   input += synapse0x329e240();
   input += synapse0x329e280();
   input += synapse0x329e2c0();
   input += synapse0x329e300();
   input += synapse0x329e340();
   input += synapse0x329e380();
   input += synapse0x329e3c0();
   input += synapse0x329e400();
   input += synapse0x329e440();
   input += synapse0x329e480();
   input += synapse0x329e4c0();
   input += synapse0x329df50();
   input += synapse0x329df90();
   input += synapse0x329e610();
   input += synapse0x329e650();
   input += synapse0x329e690();
   input += synapse0x329e6d0();
   input += synapse0x329e710();
   input += synapse0x329e750();
   return input;
}

double NNfunction_sb_sLcR::neuron0x329ddc0() {
   double input = input0x329ddc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x329e790() {
   double input = -0.501575;
   input += synapse0x329ead0();
   input += synapse0x329eb10();
   input += synapse0x329eb50();
   input += synapse0x329eb90();
   input += synapse0x329ebd0();
   input += synapse0x329ec10();
   input += synapse0x329ec50();
   input += synapse0x329ec90();
   input += synapse0x329ecd0();
   input += synapse0x329ed10();
   input += synapse0x329ed50();
   input += synapse0x329ed90();
   input += synapse0x329edd0();
   input += synapse0x329ee10();
   input += synapse0x329ee50();
   input += synapse0x329ee90();
   input += synapse0x329e920();
   input += synapse0x329e960();
   input += synapse0x329efe0();
   input += synapse0x329f020();
   input += synapse0x329f060();
   input += synapse0x329f0a0();
   input += synapse0x329f0e0();
   input += synapse0x329f120();
   return input;
}

double NNfunction_sb_sLcR::neuron0x329e790() {
   double input = input0x329e790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x329f160() {
   double input = -0.440877;
   input += synapse0x329f4a0();
   input += synapse0x329f4e0();
   input += synapse0x329f520();
   input += synapse0x329f560();
   input += synapse0x329f5a0();
   input += synapse0x329f5e0();
   input += synapse0x329f620();
   input += synapse0x329f660();
   input += synapse0x329f6a0();
   input += synapse0x329f6e0();
   input += synapse0x329f720();
   input += synapse0x329f760();
   input += synapse0x329f7a0();
   input += synapse0x329f7e0();
   input += synapse0x329f820();
   input += synapse0x329f860();
   input += synapse0x329f2f0();
   input += synapse0x329f330();
   input += synapse0x329f9b0();
   input += synapse0x329f9f0();
   input += synapse0x329fa30();
   input += synapse0x329fa70();
   input += synapse0x329fab0();
   input += synapse0x329faf0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x329f160() {
   double input = input0x329f160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x329fb30() {
   double input = 3.62525;
   input += synapse0x329fe70();
   input += synapse0x329feb0();
   input += synapse0x329fef0();
   input += synapse0x329ff30();
   input += synapse0x329ff70();
   input += synapse0x329ffb0();
   input += synapse0x329fff0();
   input += synapse0x32a0030();
   input += synapse0x32a0070();
   input += synapse0x32a00b0();
   input += synapse0x32a00f0();
   input += synapse0x32a0130();
   input += synapse0x32a0170();
   input += synapse0x32a01b0();
   input += synapse0x32a01f0();
   input += synapse0x32a0230();
   input += synapse0x329fcc0();
   input += synapse0x329fd00();
   input += synapse0x32a0380();
   input += synapse0x32a03c0();
   input += synapse0x32a0400();
   input += synapse0x32a0440();
   input += synapse0x32a0480();
   input += synapse0x32a04c0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x329fb30() {
   double input = input0x329fb30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32a0500() {
   double input = 0.461699;
   input += synapse0x32a0840();
   input += synapse0x32a0880();
   input += synapse0x32a08c0();
   input += synapse0x32a0900();
   input += synapse0x32a0940();
   input += synapse0x32a0980();
   input += synapse0x32a09c0();
   input += synapse0x32a0a00();
   input += synapse0x32a0a40();
   input += synapse0x3298c00();
   input += synapse0x3298c40();
   input += synapse0x3298c80();
   input += synapse0x3298cc0();
   input += synapse0x3298d00();
   input += synapse0x3298d40();
   input += synapse0x3298d80();
   input += synapse0x32a0690();
   input += synapse0x32a06d0();
   input += synapse0x3298ed0();
   input += synapse0x3298f10();
   input += synapse0x3298f50();
   input += synapse0x3298f90();
   input += synapse0x3298fd0();
   input += synapse0x3299010();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32a0500() {
   double input = input0x32a0500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x3299050() {
   double input = -1.57209;
   input += synapse0x3299390();
   input += synapse0x32993d0();
   input += synapse0x3299410();
   input += synapse0x3299450();
   input += synapse0x3299490();
   input += synapse0x32994d0();
   input += synapse0x3299510();
   input += synapse0x3299550();
   input += synapse0x3299590();
   input += synapse0x32995d0();
   input += synapse0x3299610();
   input += synapse0x3299650();
   input += synapse0x3299690();
   input += synapse0x32996d0();
   input += synapse0x3299710();
   input += synapse0x3299750();
   input += synapse0x32991e0();
   input += synapse0x3299220();
   input += synapse0x32998a0();
   input += synapse0x32998e0();
   input += synapse0x3299920();
   input += synapse0x3299960();
   input += synapse0x32999a0();
   input += synapse0x32999e0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x3299050() {
   double input = input0x3299050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x3299a20() {
   double input = -1.22595;
   input += synapse0x3299bb0();
   input += synapse0x32a2c40();
   input += synapse0x32a2c80();
   input += synapse0x32a2cc0();
   input += synapse0x32a2d00();
   input += synapse0x32a2d40();
   input += synapse0x32a2d80();
   input += synapse0x32a2dc0();
   input += synapse0x32a2e00();
   input += synapse0x32a2e40();
   input += synapse0x32a2e80();
   input += synapse0x32a2ec0();
   input += synapse0x32a2f00();
   input += synapse0x32a2f40();
   input += synapse0x32a2f80();
   input += synapse0x32a2fc0();
   input += synapse0x32a2a90();
   input += synapse0x32a2ad0();
   input += synapse0x32a3110();
   input += synapse0x32a3150();
   input += synapse0x32a3190();
   input += synapse0x32a31d0();
   input += synapse0x32a3210();
   input += synapse0x32a3250();
   return input;
}

double NNfunction_sb_sLcR::neuron0x3299a20() {
   double input = input0x3299a20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32a3290() {
   double input = -0.220826;
   input += synapse0x32a35d0();
   input += synapse0x32a3610();
   input += synapse0x32a3650();
   input += synapse0x32a3690();
   input += synapse0x32a36d0();
   input += synapse0x32a3710();
   input += synapse0x32a3750();
   input += synapse0x32a3790();
   input += synapse0x32a37d0();
   input += synapse0x32a3810();
   input += synapse0x32a3850();
   input += synapse0x32a3890();
   input += synapse0x32a38d0();
   input += synapse0x32a3910();
   input += synapse0x32a3950();
   input += synapse0x32a3990();
   input += synapse0x32a3420();
   input += synapse0x32a3460();
   input += synapse0x32a3ae0();
   input += synapse0x32a3b20();
   input += synapse0x32a3b60();
   input += synapse0x32a3ba0();
   input += synapse0x32a3be0();
   input += synapse0x32a3c20();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32a3290() {
   double input = input0x32a3290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32a3c60() {
   double input = 1.10713;
   input += synapse0x32a3fa0();
   input += synapse0x32a3fe0();
   input += synapse0x32a4020();
   input += synapse0x32a4060();
   input += synapse0x32a40a0();
   input += synapse0x32a40e0();
   input += synapse0x32a4120();
   input += synapse0x32a4160();
   input += synapse0x32a41a0();
   input += synapse0x32a41e0();
   input += synapse0x32a4220();
   input += synapse0x32a4260();
   input += synapse0x32a42a0();
   input += synapse0x32a42e0();
   input += synapse0x32a4320();
   input += synapse0x32a4360();
   input += synapse0x32a3df0();
   input += synapse0x32a3e30();
   input += synapse0x32a44b0();
   input += synapse0x32a44f0();
   input += synapse0x32a4530();
   input += synapse0x32a4570();
   input += synapse0x32a45b0();
   input += synapse0x32a45f0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32a3c60() {
   double input = input0x32a3c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32a4630() {
   double input = 0.150266;
   input += synapse0x32a4970();
   input += synapse0x32a49b0();
   input += synapse0x32a49f0();
   input += synapse0x32a4a30();
   input += synapse0x32a4a70();
   input += synapse0x32a4ab0();
   input += synapse0x32a4af0();
   input += synapse0x32a4b30();
   input += synapse0x32a4b70();
   input += synapse0x32a4bb0();
   input += synapse0x32a4bf0();
   input += synapse0x32a4c30();
   input += synapse0x32a4c70();
   input += synapse0x32a4cb0();
   input += synapse0x32a4cf0();
   input += synapse0x32a4d30();
   input += synapse0x32a47c0();
   input += synapse0x32a4800();
   input += synapse0x32a4e80();
   input += synapse0x32a4ec0();
   input += synapse0x32a4f00();
   input += synapse0x32a4f40();
   input += synapse0x32a4f80();
   input += synapse0x32a4fc0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32a4630() {
   double input = input0x32a4630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32a5000() {
   double input = 0.400849;
   input += synapse0x32a5340();
   input += synapse0x32a5380();
   input += synapse0x32a53c0();
   input += synapse0x32a5400();
   input += synapse0x32a5440();
   input += synapse0x32a5480();
   input += synapse0x32a54c0();
   input += synapse0x32a5500();
   input += synapse0x32a5540();
   input += synapse0x32a5580();
   input += synapse0x32a55c0();
   input += synapse0x32a5600();
   input += synapse0x32a5640();
   input += synapse0x32a5680();
   input += synapse0x32a56c0();
   input += synapse0x32a5700();
   input += synapse0x32a5190();
   input += synapse0x32a51d0();
   input += synapse0x32a5850();
   input += synapse0x32a5890();
   input += synapse0x32a58d0();
   input += synapse0x32a5910();
   input += synapse0x32a5950();
   input += synapse0x32a5990();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32a5000() {
   double input = input0x32a5000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32a59d0() {
   double input = -0.693895;
   input += synapse0x32a5d10();
   input += synapse0x32a5d50();
   input += synapse0x32a5d90();
   input += synapse0x32a5dd0();
   input += synapse0x32a5e10();
   input += synapse0x32a5e50();
   input += synapse0x32a5e90();
   input += synapse0x32a5ed0();
   input += synapse0x32a5f10();
   input += synapse0x32a5f50();
   input += synapse0x32a5f90();
   input += synapse0x32a5fd0();
   input += synapse0x32a6010();
   input += synapse0x32a6050();
   input += synapse0x32a6090();
   input += synapse0x32a60d0();
   input += synapse0x32a5b60();
   input += synapse0x32a5ba0();
   input += synapse0x32a6220();
   input += synapse0x32a6260();
   input += synapse0x32a62a0();
   input += synapse0x32a62e0();
   input += synapse0x32a6320();
   input += synapse0x32a6360();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32a59d0() {
   double input = input0x32a59d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32a63a0() {
   double input = -0.0119392;
   input += synapse0x32a66e0();
   input += synapse0x32a6720();
   input += synapse0x32a6760();
   input += synapse0x32a67a0();
   input += synapse0x32a67e0();
   input += synapse0x32a6820();
   input += synapse0x32a6860();
   input += synapse0x32a68a0();
   input += synapse0x32a68e0();
   input += synapse0x32a6920();
   input += synapse0x32a6960();
   input += synapse0x32a69a0();
   input += synapse0x32a69e0();
   input += synapse0x32a6a20();
   input += synapse0x32a6a60();
   input += synapse0x32a6aa0();
   input += synapse0x32a6530();
   input += synapse0x32a6570();
   input += synapse0x32a6bf0();
   input += synapse0x32a6c30();
   input += synapse0x32a6c70();
   input += synapse0x32a6cb0();
   input += synapse0x32a6cf0();
   input += synapse0x32a6d30();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32a63a0() {
   double input = input0x32a63a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32a6d70() {
   double input = -0.573684;
   input += synapse0x32a70b0();
   input += synapse0x32a70f0();
   input += synapse0x32a7130();
   input += synapse0x32a7170();
   input += synapse0x32a71b0();
   input += synapse0x32a71f0();
   input += synapse0x32a7230();
   input += synapse0x32a7270();
   input += synapse0x32a72b0();
   input += synapse0x32a72f0();
   input += synapse0x32a7330();
   input += synapse0x32a7370();
   input += synapse0x32a73b0();
   input += synapse0x32a73f0();
   input += synapse0x32a7430();
   input += synapse0x32a7470();
   input += synapse0x32a6f00();
   input += synapse0x32a6f40();
   input += synapse0x32a75c0();
   input += synapse0x32a7600();
   input += synapse0x32a7640();
   input += synapse0x32a7680();
   input += synapse0x32a76c0();
   input += synapse0x32a7700();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32a6d70() {
   double input = input0x32a6d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32a7740() {
   double input = 0.0502578;
   input += synapse0x32a7a80();
   input += synapse0x329c050();
   input += synapse0x329c090();
   input += synapse0x329c0d0();
   input += synapse0x329c320();
   input += synapse0x329c360();
   input += synapse0x329c3a0();
   input += synapse0x329c5f0();
   input += synapse0x329c630();
   input += synapse0x329c880();
   input += synapse0x329c8c0();
   input += synapse0x329c900();
   input += synapse0x329cb50();
   input += synapse0x329cb90();
   input += synapse0x329cde0();
   input += synapse0x329ce20();
   input += synapse0x32a78d0();
   input += synapse0x32a7910();
   input += synapse0x329cf70();
   input += synapse0x329d480();
   input += synapse0x329d4c0();
   input += synapse0x329d500();
   input += synapse0x329d750();
   input += synapse0x329d790();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32a7740() {
   double input = input0x32a7740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x329d7d0() {
   double input = -0.105916;
   input += synapse0x329d040();
   input += synapse0x329d080();
   input += synapse0x329d0c0();
   input += synapse0x329d100();
   input += synapse0x329da80();
   input += synapse0x32a9dd0();
   input += synapse0x32a9e10();
   input += synapse0x32a9e50();
   input += synapse0x32a9e90();
   input += synapse0x32a9ed0();
   input += synapse0x32a9f10();
   input += synapse0x32a9f50();
   input += synapse0x32a9f90();
   input += synapse0x32a9fd0();
   input += synapse0x32aa010();
   input += synapse0x32aa050();
   input += synapse0x329d960();
   input += synapse0x329d9a0();
   input += synapse0x32aa1a0();
   input += synapse0x32aa1e0();
   input += synapse0x32aa220();
   input += synapse0x32aa260();
   input += synapse0x32aa2a0();
   input += synapse0x32aa2e0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x329d7d0() {
   double input = input0x329d7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32aa320() {
   double input = -0.0296521;
   input += synapse0x32aa660();
   input += synapse0x32aa6a0();
   input += synapse0x32aa6e0();
   input += synapse0x32aa720();
   input += synapse0x32aa760();
   input += synapse0x32aa7a0();
   input += synapse0x32aa7e0();
   input += synapse0x32aa820();
   input += synapse0x32aa860();
   input += synapse0x32aa8a0();
   input += synapse0x32aa8e0();
   input += synapse0x32aa920();
   input += synapse0x32aa960();
   input += synapse0x32aa9a0();
   input += synapse0x32aa9e0();
   input += synapse0x32aaa20();
   input += synapse0x32aa4b0();
   input += synapse0x32aa4f0();
   input += synapse0x32aab70();
   input += synapse0x32aabb0();
   input += synapse0x32aabf0();
   input += synapse0x32aac30();
   input += synapse0x32aac70();
   input += synapse0x32aacb0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32aa320() {
   double input = input0x32aa320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32aacf0() {
   double input = 0.537741;
   input += synapse0x32ab030();
   input += synapse0x32ab070();
   input += synapse0x32ab0b0();
   input += synapse0x32ab0f0();
   input += synapse0x32ab130();
   input += synapse0x32ab170();
   input += synapse0x32ab1b0();
   input += synapse0x32ab1f0();
   input += synapse0x32ab230();
   input += synapse0x32ab270();
   input += synapse0x32ab2b0();
   input += synapse0x32ab2f0();
   input += synapse0x32ab330();
   input += synapse0x32ab370();
   input += synapse0x32ab3b0();
   input += synapse0x32ab3f0();
   input += synapse0x32aae80();
   input += synapse0x32aaec0();
   input += synapse0x32ab540();
   input += synapse0x32ab580();
   input += synapse0x32ab5c0();
   input += synapse0x32ab600();
   input += synapse0x32ab640();
   input += synapse0x32ab680();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32aacf0() {
   double input = input0x32aacf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32ab6c0() {
   double input = 0.545716;
   input += synapse0x32aba00();
   input += synapse0x32aba40();
   input += synapse0x32aba80();
   input += synapse0x32abac0();
   input += synapse0x32abb00();
   input += synapse0x32abb40();
   input += synapse0x32abb80();
   input += synapse0x32abbc0();
   input += synapse0x32abc00();
   input += synapse0x32abc40();
   input += synapse0x32abc80();
   input += synapse0x32abcc0();
   input += synapse0x32abd00();
   input += synapse0x32abd40();
   input += synapse0x32abd80();
   input += synapse0x32abdc0();
   input += synapse0x32ab850();
   input += synapse0x32ab890();
   input += synapse0x32abf10();
   input += synapse0x32abf50();
   input += synapse0x32abf90();
   input += synapse0x32abfd0();
   input += synapse0x32ac010();
   input += synapse0x32ac050();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32ab6c0() {
   double input = input0x32ab6c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32ac090() {
   double input = -1.13565;
   input += synapse0x32ac3d0();
   input += synapse0x32ac410();
   input += synapse0x32ac450();
   input += synapse0x32ac490();
   input += synapse0x32ac4d0();
   input += synapse0x32ac510();
   input += synapse0x32ac550();
   input += synapse0x32ac590();
   input += synapse0x32ac5d0();
   input += synapse0x32ac610();
   input += synapse0x32ac650();
   input += synapse0x32ac690();
   input += synapse0x32ac6d0();
   input += synapse0x32ac710();
   input += synapse0x32ac750();
   input += synapse0x32ac790();
   input += synapse0x32ac220();
   input += synapse0x32ac260();
   input += synapse0x32ac8e0();
   input += synapse0x32ac920();
   input += synapse0x32ac960();
   input += synapse0x32ac9a0();
   input += synapse0x32ac9e0();
   input += synapse0x32aca20();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32ac090() {
   double input = input0x32ac090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32aca60() {
   double input = -0.191661;
   input += synapse0x32acda0();
   input += synapse0x32acde0();
   input += synapse0x32ace20();
   input += synapse0x32ace60();
   input += synapse0x32acea0();
   input += synapse0x32acee0();
   input += synapse0x32acf20();
   input += synapse0x32acf60();
   input += synapse0x32acfa0();
   input += synapse0x32acfe0();
   input += synapse0x32ad020();
   input += synapse0x32ad060();
   input += synapse0x32ad0a0();
   input += synapse0x32ad0e0();
   input += synapse0x32ad120();
   input += synapse0x32ad160();
   input += synapse0x32acbf0();
   input += synapse0x32acc30();
   input += synapse0x32ad2b0();
   input += synapse0x32ad2f0();
   input += synapse0x32ad330();
   input += synapse0x32ad370();
   input += synapse0x32ad3b0();
   input += synapse0x32ad3f0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32aca60() {
   double input = input0x32aca60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32ad430() {
   double input = 0.572414;
   input += synapse0x32ad770();
   input += synapse0x32ad7b0();
   input += synapse0x32ad7f0();
   input += synapse0x32ad830();
   input += synapse0x32ad870();
   input += synapse0x32ad8b0();
   input += synapse0x32ad8f0();
   input += synapse0x32ad930();
   input += synapse0x32ad970();
   input += synapse0x32ad9b0();
   input += synapse0x32ad9f0();
   input += synapse0x32ada30();
   input += synapse0x32ada70();
   input += synapse0x32adab0();
   input += synapse0x32adaf0();
   input += synapse0x32adb30();
   input += synapse0x32ad5c0();
   input += synapse0x32ad600();
   input += synapse0x32adc80();
   input += synapse0x32adcc0();
   input += synapse0x32add00();
   input += synapse0x32add40();
   input += synapse0x32add80();
   input += synapse0x32addc0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32ad430() {
   double input = input0x32ad430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32ade00() {
   double input = -0.74198;
   input += synapse0x32ae140();
   input += synapse0x32ae180();
   input += synapse0x32ae1c0();
   input += synapse0x32ae200();
   input += synapse0x32ae240();
   input += synapse0x32ae280();
   input += synapse0x32ae2c0();
   input += synapse0x32ae300();
   input += synapse0x32ae340();
   input += synapse0x32ae380();
   input += synapse0x32ae3c0();
   input += synapse0x32ae400();
   input += synapse0x32ae440();
   input += synapse0x32ae480();
   input += synapse0x32ae4c0();
   input += synapse0x32ae500();
   input += synapse0x32adf90();
   input += synapse0x32adfd0();
   input += synapse0x32ae650();
   input += synapse0x32ae690();
   input += synapse0x32ae6d0();
   input += synapse0x32ae710();
   input += synapse0x32ae750();
   input += synapse0x32ae790();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32ade00() {
   double input = input0x32ade00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32ae7d0() {
   double input = -4.15908;
   input += synapse0x3297240();
   input += synapse0x3297280();
   input += synapse0x32972c0();
   input += synapse0x3297300();
   input += synapse0x3297340();
   input += synapse0x3297380();
   input += synapse0x32973c0();
   input += synapse0x3297400();
   input += synapse0x32aef20();
   input += synapse0x32aef60();
   input += synapse0x32aefa0();
   input += synapse0x32aefe0();
   input += synapse0x32af020();
   input += synapse0x32af060();
   input += synapse0x32af0a0();
   input += synapse0x32af0e0();
   input += synapse0x32ae960();
   input += synapse0x32ae9a0();
   input += synapse0x32af230();
   input += synapse0x32af270();
   input += synapse0x32af2b0();
   input += synapse0x32af2f0();
   input += synapse0x32af330();
   input += synapse0x32af370();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32ae7d0() {
   double input = input0x32ae7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32af3b0() {
   double input = -1.54904;
   input += synapse0x32af6f0();
   input += synapse0x32af730();
   input += synapse0x32af770();
   input += synapse0x32af7b0();
   input += synapse0x32af7f0();
   input += synapse0x32af830();
   input += synapse0x32af870();
   input += synapse0x32af8b0();
   input += synapse0x32af8f0();
   input += synapse0x32af930();
   input += synapse0x32af970();
   input += synapse0x32af9b0();
   input += synapse0x32af9f0();
   input += synapse0x32afa30();
   input += synapse0x32afa70();
   input += synapse0x32afab0();
   input += synapse0x32af540();
   input += synapse0x32af580();
   input += synapse0x32afc00();
   input += synapse0x32afc40();
   input += synapse0x32afc80();
   input += synapse0x32afcc0();
   input += synapse0x32afd00();
   input += synapse0x32afd40();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32af3b0() {
   double input = input0x32af3b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32afd80() {
   double input = -0.445165;
   input += synapse0x32b00c0();
   input += synapse0x32b0100();
   input += synapse0x32b0140();
   input += synapse0x32b0180();
   input += synapse0x32b01c0();
   input += synapse0x32b0200();
   input += synapse0x32b0240();
   input += synapse0x32b0280();
   input += synapse0x32b02c0();
   input += synapse0x32b0300();
   input += synapse0x32b0340();
   input += synapse0x32b0380();
   input += synapse0x32b03c0();
   input += synapse0x32b0400();
   input += synapse0x32b0440();
   input += synapse0x32b0480();
   input += synapse0x32aff10();
   input += synapse0x32aff50();
   input += synapse0x32a0a80();
   input += synapse0x32a0ac0();
   input += synapse0x32a0b00();
   input += synapse0x32a0b40();
   input += synapse0x32a0b80();
   input += synapse0x32a0bc0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32afd80() {
   double input = input0x32afd80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32a0c00() {
   double input = 2.03155;
   input += synapse0x32a0f40();
   input += synapse0x32a0f80();
   input += synapse0x32a0fc0();
   input += synapse0x32a1000();
   input += synapse0x32a1040();
   input += synapse0x32a1080();
   input += synapse0x32a10c0();
   input += synapse0x32a1100();
   input += synapse0x32a1140();
   input += synapse0x32a1180();
   input += synapse0x32a11c0();
   input += synapse0x32a1200();
   input += synapse0x32a1240();
   input += synapse0x32a1280();
   input += synapse0x32a12c0();
   input += synapse0x32a1300();
   input += synapse0x32a0d90();
   input += synapse0x32a0dd0();
   input += synapse0x32a1450();
   input += synapse0x32a1490();
   input += synapse0x32a14d0();
   input += synapse0x32a1510();
   input += synapse0x32a1550();
   input += synapse0x32a1590();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32a0c00() {
   double input = input0x32a0c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32a15d0() {
   double input = 1.87735;
   input += synapse0x32a1910();
   input += synapse0x32a1950();
   input += synapse0x32a1990();
   input += synapse0x32a19d0();
   input += synapse0x32a1a10();
   input += synapse0x32a1a50();
   input += synapse0x32a1a90();
   input += synapse0x32a1ad0();
   input += synapse0x32a1b10();
   input += synapse0x32a1b50();
   input += synapse0x32a1b90();
   input += synapse0x32a1bd0();
   input += synapse0x32a1c10();
   input += synapse0x32a1c50();
   input += synapse0x32a1c90();
   input += synapse0x32a1cd0();
   input += synapse0x32a1760();
   input += synapse0x32a17a0();
   input += synapse0x32a1e20();
   input += synapse0x32a1e60();
   input += synapse0x32a1ea0();
   input += synapse0x32a1ee0();
   input += synapse0x32a1f20();
   input += synapse0x32a1f60();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32a15d0() {
   double input = input0x32a15d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32a1fa0() {
   double input = 0.644905;
   input += synapse0x32a22e0();
   input += synapse0x32a2320();
   input += synapse0x32a2360();
   input += synapse0x32a23a0();
   input += synapse0x32a23e0();
   input += synapse0x32a2420();
   input += synapse0x32a2460();
   input += synapse0x32a24a0();
   input += synapse0x32a24e0();
   input += synapse0x32a2520();
   input += synapse0x32a2560();
   input += synapse0x32a25a0();
   input += synapse0x32a25e0();
   input += synapse0x32a2620();
   input += synapse0x32a2660();
   input += synapse0x32a26a0();
   input += synapse0x32a2130();
   input += synapse0x32a2170();
   input += synapse0x32a27f0();
   input += synapse0x32a2830();
   input += synapse0x32a2870();
   input += synapse0x32a28b0();
   input += synapse0x32a28f0();
   input += synapse0x32a2930();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32a1fa0() {
   double input = input0x32a1fa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32b45e0() {
   double input = -0.559044;
   input += synapse0x32b4800();
   input += synapse0x32b4840();
   input += synapse0x32b4880();
   input += synapse0x32b48c0();
   input += synapse0x32b4900();
   input += synapse0x32b4940();
   input += synapse0x32b4980();
   input += synapse0x32b49c0();
   input += synapse0x32b4a00();
   input += synapse0x32b4a40();
   input += synapse0x32b4a80();
   input += synapse0x32b4ac0();
   input += synapse0x32b4b00();
   input += synapse0x32b4b40();
   input += synapse0x32b4b80();
   input += synapse0x32b4bc0();
   input += synapse0x32a2970();
   input += synapse0x32a29b0();
   input += synapse0x32b4d10();
   input += synapse0x32b4d50();
   input += synapse0x32b4d90();
   input += synapse0x32b4dd0();
   input += synapse0x32b4e10();
   input += synapse0x32b4e50();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32b45e0() {
   double input = input0x32b45e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32b4e90() {
   double input = 0.0534972;
   input += synapse0x32b51d0();
   input += synapse0x32b5210();
   input += synapse0x32b5250();
   input += synapse0x32b5290();
   input += synapse0x32b52d0();
   input += synapse0x32b5310();
   input += synapse0x32b5350();
   input += synapse0x32b5390();
   input += synapse0x32b53d0();
   input += synapse0x32b5410();
   input += synapse0x32b5450();
   input += synapse0x32b5490();
   input += synapse0x32b54d0();
   input += synapse0x32b5510();
   input += synapse0x32b5550();
   input += synapse0x32b5590();
   input += synapse0x32b5020();
   input += synapse0x32b5060();
   input += synapse0x32b56e0();
   input += synapse0x32b5720();
   input += synapse0x32b5760();
   input += synapse0x32b57a0();
   input += synapse0x32b57e0();
   input += synapse0x32b5820();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32b4e90() {
   double input = input0x32b4e90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32b5860() {
   double input = -0.198564;
   input += synapse0x32b5ba0();
   input += synapse0x32b5be0();
   input += synapse0x32b5c20();
   input += synapse0x32b5c60();
   input += synapse0x32b5ca0();
   input += synapse0x32b5ce0();
   input += synapse0x32b5d20();
   input += synapse0x32b5d60();
   input += synapse0x32b5da0();
   input += synapse0x32b5de0();
   input += synapse0x32b5e20();
   input += synapse0x32b5e60();
   input += synapse0x32b5ea0();
   input += synapse0x32b5ee0();
   input += synapse0x32b5f20();
   input += synapse0x32b5f60();
   input += synapse0x32b59f0();
   input += synapse0x32b5a30();
   input += synapse0x32b60b0();
   input += synapse0x32b60f0();
   input += synapse0x32b6130();
   input += synapse0x32b6170();
   input += synapse0x32b61b0();
   input += synapse0x32b61f0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32b5860() {
   double input = input0x32b5860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32b6230() {
   double input = -1.21392;
   input += synapse0x32b6570();
   input += synapse0x32b65b0();
   input += synapse0x32b65f0();
   input += synapse0x32b6630();
   input += synapse0x32b6670();
   input += synapse0x32b66b0();
   input += synapse0x32b66f0();
   input += synapse0x32b6730();
   input += synapse0x32b6770();
   input += synapse0x32b67b0();
   input += synapse0x32b67f0();
   input += synapse0x32b6830();
   input += synapse0x32b6870();
   input += synapse0x32b68b0();
   input += synapse0x32b68f0();
   input += synapse0x32b6930();
   input += synapse0x32b63c0();
   input += synapse0x32b6400();
   input += synapse0x32b6a80();
   input += synapse0x32b6ac0();
   input += synapse0x32b6b00();
   input += synapse0x32b6b40();
   input += synapse0x32b6b80();
   input += synapse0x32b6bc0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32b6230() {
   double input = input0x32b6230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32bd430() {
   double input = 0.481373;
   input += synapse0x3056ad0();
   input += synapse0x3056b10();
   input += synapse0x3294670();
   input += synapse0x32946b0();
   input += synapse0x3295040();
   input += synapse0x3295080();
   input += synapse0x3295e10();
   input += synapse0x3295e50();
   input += synapse0x32967e0();
   input += synapse0x3296820();
   input += synapse0x32971b0();
   input += synapse0x32971f0();
   input += synapse0x3297c90();
   input += synapse0x3297cd0();
   input += synapse0x3298660();
   input += synapse0x32986a0();
   input += synapse0x3295740();
   input += synapse0x3295780();
   input += synapse0x329a210();
   input += synapse0x329a250();
   input += synapse0x329abe0();
   input += synapse0x329ac20();
   input += synapse0x329b5b0();
   input += synapse0x329b5f0();
   input += synapse0x329bf80();
   input += synapse0x329bfc0();
   input += synapse0x3290120();
   input += synapse0x3290160();
   input += synapse0x329e070();
   input += synapse0x329e0b0();
   input += synapse0x329ea40();
   input += synapse0x329ea80();
   input += synapse0x329f410();
   input += synapse0x329f450();
   input += synapse0x329fde0();
   input += synapse0x329fe20();
   input += synapse0x32a07b0();
   input += synapse0x32a07f0();
   input += synapse0x3299300();
   input += synapse0x3299340();
   input += synapse0x32a2bb0();
   input += synapse0x32a2bf0();
   input += synapse0x32a3540();
   input += synapse0x32a3580();
   input += synapse0x32a3f10();
   input += synapse0x32a3f50();
   input += synapse0x32a48e0();
   input += synapse0x32a4920();
   input += synapse0x32a52b0();
   input += synapse0x32a52f0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32bd430() {
   double input = input0x32bd430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32bd7d0() {
   double input = 0.57824;
   input += synapse0x32a79f0();
   input += synapse0x32a7a30();
   input += synapse0x329cfb0();
   input += synapse0x329cff0();
   input += synapse0x32aa5d0();
   input += synapse0x32aa610();
   input += synapse0x32aafa0();
   input += synapse0x32aafe0();
   input += synapse0x32ab970();
   input += synapse0x32ab9b0();
   input += synapse0x32ac340();
   input += synapse0x32ac380();
   input += synapse0x32acd10();
   input += synapse0x32acd50();
   input += synapse0x32ad6e0();
   input += synapse0x32ad720();
   input += synapse0x32ae0b0();
   input += synapse0x32ae0f0();
   input += synapse0x32aea80();
   input += synapse0x32aeac0();
   input += synapse0x32af660();
   input += synapse0x32af6a0();
   input += synapse0x32b0030();
   input += synapse0x32b0070();
   input += synapse0x32a0eb0();
   input += synapse0x32a0ef0();
   input += synapse0x32a1880();
   input += synapse0x32a18c0();
   input += synapse0x32a2250();
   input += synapse0x32a2290();
   input += synapse0x32b4770();
   input += synapse0x32b47b0();
   input += synapse0x32b5140();
   input += synapse0x32b5180();
   input += synapse0x32b5b10();
   input += synapse0x32b5b50();
   input += synapse0x32b64e0();
   input += synapse0x32b6520();
   input += synapse0x32923d0();
   input += synapse0x3292410();
   input += synapse0x32a5c80();
   input += synapse0x32a5cc0();
   input += synapse0x32b6c00();
   input += synapse0x32b6c40();
   input += synapse0x32b6c80();
   input += synapse0x32b6cc0();
   input += synapse0x32bdb70();
   input += synapse0x32bdbb0();
   input += synapse0x32bdbf0();
   input += synapse0x32bdc30();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32bd7d0() {
   double input = input0x32bd7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32bdc70() {
   double input = -1.12077;
   input += synapse0x32bdfb0();
   input += synapse0x32bdff0();
   input += synapse0x32be030();
   input += synapse0x32be070();
   input += synapse0x32be0b0();
   input += synapse0x32be0f0();
   input += synapse0x32be130();
   input += synapse0x32be170();
   input += synapse0x32be1b0();
   input += synapse0x32be1f0();
   input += synapse0x32be230();
   input += synapse0x32be270();
   input += synapse0x32be2b0();
   input += synapse0x32be2f0();
   input += synapse0x32be330();
   input += synapse0x32be370();
   input += synapse0x32bde00();
   input += synapse0x32bde40();
   input += synapse0x32be4c0();
   input += synapse0x32be500();
   input += synapse0x32be540();
   input += synapse0x32be580();
   input += synapse0x32be5c0();
   input += synapse0x32be600();
   input += synapse0x32be640();
   input += synapse0x32be680();
   input += synapse0x32be6c0();
   input += synapse0x32be700();
   input += synapse0x32be740();
   input += synapse0x32be780();
   input += synapse0x32be7c0();
   input += synapse0x32be800();
   input += synapse0x32be3b0();
   input += synapse0x32be3f0();
   input += synapse0x32be430();
   input += synapse0x32be470();
   input += synapse0x32bea50();
   input += synapse0x32bea90();
   input += synapse0x32bead0();
   input += synapse0x32beb10();
   input += synapse0x32beb50();
   input += synapse0x32beb90();
   input += synapse0x32bebd0();
   input += synapse0x32bec10();
   input += synapse0x32bec50();
   input += synapse0x32bec90();
   input += synapse0x32becd0();
   input += synapse0x32bed10();
   input += synapse0x32bed50();
   input += synapse0x32bed90();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32bdc70() {
   double input = input0x32bdc70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32bedd0() {
   double input = 1.91694;
   input += synapse0x32bf110();
   input += synapse0x32bf150();
   input += synapse0x32bf190();
   input += synapse0x32bf1d0();
   input += synapse0x32bf210();
   input += synapse0x32bf250();
   input += synapse0x32bf290();
   input += synapse0x32bf2d0();
   input += synapse0x32bf310();
   input += synapse0x32bf350();
   input += synapse0x32bf390();
   input += synapse0x32bf3d0();
   input += synapse0x32bf410();
   input += synapse0x32bf450();
   input += synapse0x32bf490();
   input += synapse0x32bf4d0();
   input += synapse0x32bef60();
   input += synapse0x32befa0();
   input += synapse0x32bf620();
   input += synapse0x32bf660();
   input += synapse0x32bf6a0();
   input += synapse0x32bf6e0();
   input += synapse0x32bf720();
   input += synapse0x32bf760();
   input += synapse0x32bf7a0();
   input += synapse0x32bf7e0();
   input += synapse0x32bf820();
   input += synapse0x32bf860();
   input += synapse0x32bf8a0();
   input += synapse0x32bf8e0();
   input += synapse0x32bf920();
   input += synapse0x32bf960();
   input += synapse0x32bf510();
   input += synapse0x32bf550();
   input += synapse0x32bf590();
   input += synapse0x32bf5d0();
   input += synapse0x32bfbb0();
   input += synapse0x32bfbf0();
   input += synapse0x32bfc30();
   input += synapse0x32bfc70();
   input += synapse0x32bfcb0();
   input += synapse0x32bfcf0();
   input += synapse0x32bfd30();
   input += synapse0x32bfd70();
   input += synapse0x32bfdb0();
   input += synapse0x32bfdf0();
   input += synapse0x32bfe30();
   input += synapse0x32bfe70();
   input += synapse0x32bfeb0();
   input += synapse0x32bfef0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32bedd0() {
   double input = input0x32bedd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32bff30() {
   double input = 0.864012;
   input += synapse0x32c0270();
   input += synapse0x32c02b0();
   input += synapse0x32c02f0();
   input += synapse0x32c0330();
   input += synapse0x32c0370();
   input += synapse0x32c03b0();
   input += synapse0x32c03f0();
   input += synapse0x32c0430();
   input += synapse0x32c0470();
   input += synapse0x32c04b0();
   input += synapse0x32c04f0();
   input += synapse0x32c0530();
   input += synapse0x32c0570();
   input += synapse0x32c05b0();
   input += synapse0x32c05f0();
   input += synapse0x32c0630();
   input += synapse0x32c00c0();
   input += synapse0x32c0100();
   input += synapse0x32c0780();
   input += synapse0x32c07c0();
   input += synapse0x32c0800();
   input += synapse0x32c0840();
   input += synapse0x32c0880();
   input += synapse0x32c08c0();
   input += synapse0x32c0900();
   input += synapse0x32c0940();
   input += synapse0x32c0980();
   input += synapse0x32c09c0();
   input += synapse0x32c0a00();
   input += synapse0x32c0a40();
   input += synapse0x32c0a80();
   input += synapse0x32c0ac0();
   input += synapse0x32c0670();
   input += synapse0x32c06b0();
   input += synapse0x32c06f0();
   input += synapse0x32c0730();
   input += synapse0x32c0d10();
   input += synapse0x32c0d50();
   input += synapse0x32c0d90();
   input += synapse0x32c0dd0();
   input += synapse0x32c0e10();
   input += synapse0x32c0e50();
   input += synapse0x32c0e90();
   input += synapse0x32c0ed0();
   input += synapse0x32c0f10();
   input += synapse0x32c0f50();
   input += synapse0x32c0f90();
   input += synapse0x32c0fd0();
   input += synapse0x32c1010();
   input += synapse0x32c1050();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32bff30() {
   double input = input0x32bff30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLcR::input0x32c1090() {
   double input = 2.06344;
   input += synapse0x32c12b0();
   input += synapse0x32c12f0();
   input += synapse0x32c1330();
   input += synapse0x32c1370();
   input += synapse0x32c13b0();
   return input;
}

double NNfunction_sb_sLcR::neuron0x32c1090() {
   double input = input0x32c1090();
   return (input * 1)+0;
}

double NNfunction_sb_sLcR::synapse0x328d040() {
   return (neuron0x328d180()*-0.10636);
}

double NNfunction_sb_sLcR::synapse0x328d080() {
   return (neuron0x328d4c0()*1.08879);
}

double NNfunction_sb_sLcR::synapse0x3292460() {
   return (neuron0x328d800()*-0.797217);
}

double NNfunction_sb_sLcR::synapse0x32924a0() {
   return (neuron0x328db40()*1.31025);
}

double NNfunction_sb_sLcR::synapse0x32924e0() {
   return (neuron0x328de80()*0.568561);
}

double NNfunction_sb_sLcR::synapse0x3292520() {
   return (neuron0x328e1c0()*-0.0981436);
}

double NNfunction_sb_sLcR::synapse0x3292560() {
   return (neuron0x328e500()*-0.1683);
}

double NNfunction_sb_sLcR::synapse0x32925a0() {
   return (neuron0x328e840()*-0.538491);
}

double NNfunction_sb_sLcR::synapse0x32925e0() {
   return (neuron0x328eb80()*0.265664);
}

double NNfunction_sb_sLcR::synapse0x3292620() {
   return (neuron0x328eec0()*0.502096);
}

double NNfunction_sb_sLcR::synapse0x3292660() {
   return (neuron0x328f200()*0.372371);
}

double NNfunction_sb_sLcR::synapse0x32926a0() {
   return (neuron0x328f540()*-0.161319);
}

double NNfunction_sb_sLcR::synapse0x32926e0() {
   return (neuron0x328f880()*0.103209);
}

double NNfunction_sb_sLcR::synapse0x3292720() {
   return (neuron0x328fbc0()*-0.609781);
}

double NNfunction_sb_sLcR::synapse0x3292760() {
   return (neuron0x328ff00()*0.301419);
}

double NNfunction_sb_sLcR::synapse0x32927a0() {
   return (neuron0x3290240()*0.342744);
}

double NNfunction_sb_sLcR::synapse0x328cfb0() {
   return (neuron0x3290580()*-0.347381);
}

double NNfunction_sb_sLcR::synapse0x328cff0() {
   return (neuron0x3290ae0()*-0.350099);
}

double NNfunction_sb_sLcR::synapse0x3048370() {
   return (neuron0x3290d00()*-0.19242);
}

double NNfunction_sb_sLcR::synapse0x30483b0() {
   return (neuron0x3291040()*0.677885);
}

double NNfunction_sb_sLcR::synapse0x3292a00() {
   return (neuron0x3291380()*0.471473);
}

double NNfunction_sb_sLcR::synapse0x3292a40() {
   return (neuron0x32916c0()*-0.5832);
}

double NNfunction_sb_sLcR::synapse0x3292a80() {
   return (neuron0x3291a00()*-0.706455);
}

double NNfunction_sb_sLcR::synapse0x3292ac0() {
   return (neuron0x3291d40()*0.433394);
}

double NNfunction_sb_sLcR::synapse0x3292e40() {
   return (neuron0x328d180()*0.820409);
}

double NNfunction_sb_sLcR::synapse0x3292e80() {
   return (neuron0x328d4c0()*0.393874);
}

double NNfunction_sb_sLcR::synapse0x3292ec0() {
   return (neuron0x328d800()*-0.351199);
}

double NNfunction_sb_sLcR::synapse0x3292f00() {
   return (neuron0x328db40()*-0.102845);
}

double NNfunction_sb_sLcR::synapse0x3292f40() {
   return (neuron0x328de80()*-0.168031);
}

double NNfunction_sb_sLcR::synapse0x3292f80() {
   return (neuron0x328e1c0()*-0.0531884);
}

double NNfunction_sb_sLcR::synapse0x3292fc0() {
   return (neuron0x328e500()*-0.787278);
}

double NNfunction_sb_sLcR::synapse0x3293000() {
   return (neuron0x328e840()*0.145221);
}

double NNfunction_sb_sLcR::synapse0x3293040() {
   return (neuron0x328eb80()*-0.200742);
}

double NNfunction_sb_sLcR::synapse0x32928f0() {
   return (neuron0x328eec0()*-0.118252);
}

double NNfunction_sb_sLcR::synapse0x3292930() {
   return (neuron0x328f200()*0.157676);
}

double NNfunction_sb_sLcR::synapse0x3292970() {
   return (neuron0x328f540()*0.629974);
}

double NNfunction_sb_sLcR::synapse0x32929b0() {
   return (neuron0x328f880()*-0.030128);
}

double NNfunction_sb_sLcR::synapse0x3293290() {
   return (neuron0x328fbc0()*0.654784);
}

double NNfunction_sb_sLcR::synapse0x32932d0() {
   return (neuron0x328ff00()*-0.31263);
}

double NNfunction_sb_sLcR::synapse0x3293310() {
   return (neuron0x3290240()*0.057834);
}

double NNfunction_sb_sLcR::synapse0x3292c90() {
   return (neuron0x3290580()*-0.224038);
}

double NNfunction_sb_sLcR::synapse0x3292cd0() {
   return (neuron0x3290ae0()*-0.098745);
}

double NNfunction_sb_sLcR::synapse0x3293460() {
   return (neuron0x3290d00()*0.242887);
}

double NNfunction_sb_sLcR::synapse0x32934a0() {
   return (neuron0x3291040()*0.0508424);
}

double NNfunction_sb_sLcR::synapse0x32934e0() {
   return (neuron0x3291380()*0.051949);
}

double NNfunction_sb_sLcR::synapse0x3293520() {
   return (neuron0x32916c0()*0.274111);
}

double NNfunction_sb_sLcR::synapse0x3293560() {
   return (neuron0x3291a00()*0.146962);
}

double NNfunction_sb_sLcR::synapse0x32935a0() {
   return (neuron0x3291d40()*-0.101991);
}

double NNfunction_sb_sLcR::synapse0x3293920() {
   return (neuron0x328d180()*0.0283205);
}

double NNfunction_sb_sLcR::synapse0x3293960() {
   return (neuron0x328d4c0()*0.263641);
}

double NNfunction_sb_sLcR::synapse0x32939a0() {
   return (neuron0x328d800()*-0.1389);
}

double NNfunction_sb_sLcR::synapse0x32939e0() {
   return (neuron0x328db40()*-1.20889);
}

double NNfunction_sb_sLcR::synapse0x3293a20() {
   return (neuron0x328de80()*0.432665);
}

double NNfunction_sb_sLcR::synapse0x3293a60() {
   return (neuron0x328e1c0()*0.347196);
}

double NNfunction_sb_sLcR::synapse0x3293aa0() {
   return (neuron0x328e500()*0.00603628);
}

double NNfunction_sb_sLcR::synapse0x3293ae0() {
   return (neuron0x328e840()*-0.476151);
}

double NNfunction_sb_sLcR::synapse0x3293b20() {
   return (neuron0x328eb80()*0.793464);
}

double NNfunction_sb_sLcR::synapse0x3293b60() {
   return (neuron0x328eec0()*0.827815);
}

double NNfunction_sb_sLcR::synapse0x3293ba0() {
   return (neuron0x328f200()*0.0641629);
}

double NNfunction_sb_sLcR::synapse0x3293be0() {
   return (neuron0x328f540()*0.408448);
}

double NNfunction_sb_sLcR::synapse0x3293c20() {
   return (neuron0x328f880()*0.692555);
}

double NNfunction_sb_sLcR::synapse0x3293c60() {
   return (neuron0x328fbc0()*0.11337);
}

double NNfunction_sb_sLcR::synapse0x3293ca0() {
   return (neuron0x328ff00()*0.0640201);
}

double NNfunction_sb_sLcR::synapse0x3293ce0() {
   return (neuron0x3290240()*0.06704);
}

double NNfunction_sb_sLcR::synapse0x3293770() {
   return (neuron0x3290580()*0.405338);
}

double NNfunction_sb_sLcR::synapse0x32937b0() {
   return (neuron0x3290ae0()*0.529207);
}

double NNfunction_sb_sLcR::synapse0x3048a10() {
   return (neuron0x3290d00()*-0.0827929);
}

double NNfunction_sb_sLcR::synapse0x30562e0() {
   return (neuron0x3291040()*-0.267148);
}

double NNfunction_sb_sLcR::synapse0x3056320() {
   return (neuron0x3291380()*-0.354383);
}

double NNfunction_sb_sLcR::synapse0x327c210() {
   return (neuron0x32916c0()*-0.41517);
}

double NNfunction_sb_sLcR::synapse0x327c250() {
   return (neuron0x3291a00()*0.0154614);
}

double NNfunction_sb_sLcR::synapse0x327c290() {
   return (neuron0x3291d40()*0.187729);
}

double NNfunction_sb_sLcR::synapse0x3056b60() {
   return (neuron0x328d180()*-0.00556714);
}

double NNfunction_sb_sLcR::synapse0x3293210() {
   return (neuron0x328d4c0()*0.00541651);
}

double NNfunction_sb_sLcR::synapse0x3293250() {
   return (neuron0x328d800()*0.000458866);
}

double NNfunction_sb_sLcR::synapse0x3293e30() {
   return (neuron0x328db40()*-0.182895);
}

double NNfunction_sb_sLcR::synapse0x3293e70() {
   return (neuron0x328de80()*-0.00250469);
}

double NNfunction_sb_sLcR::synapse0x3293eb0() {
   return (neuron0x328e1c0()*-0.0106828);
}

double NNfunction_sb_sLcR::synapse0x3293ef0() {
   return (neuron0x328e500()*0.0108122);
}

double NNfunction_sb_sLcR::synapse0x3293f30() {
   return (neuron0x328e840()*0.0169401);
}

double NNfunction_sb_sLcR::synapse0x3293f70() {
   return (neuron0x328eb80()*0.00768304);
}

double NNfunction_sb_sLcR::synapse0x3293fb0() {
   return (neuron0x328eec0()*0.014384);
}

double NNfunction_sb_sLcR::synapse0x3293ff0() {
   return (neuron0x328f200()*-0.00680425);
}

double NNfunction_sb_sLcR::synapse0x3294030() {
   return (neuron0x328f540()*-0.0270572);
}

double NNfunction_sb_sLcR::synapse0x3294070() {
   return (neuron0x328f880()*0.747097);
}

double NNfunction_sb_sLcR::synapse0x32940b0() {
   return (neuron0x328fbc0()*0.0124143);
}

double NNfunction_sb_sLcR::synapse0x32940f0() {
   return (neuron0x328ff00()*-0.0142038);
}

double NNfunction_sb_sLcR::synapse0x3294130() {
   return (neuron0x3290240()*0.80151);
}

double NNfunction_sb_sLcR::synapse0x328d0c0() {
   return (neuron0x3290580()*0.0157153);
}

double NNfunction_sb_sLcR::synapse0x328d100() {
   return (neuron0x3290ae0()*-0.0156336);
}

double NNfunction_sb_sLcR::synapse0x328d140() {
   return (neuron0x3290d00()*-0.00954476);
}

double NNfunction_sb_sLcR::synapse0x3294280() {
   return (neuron0x3291040()*0.0141037);
}

double NNfunction_sb_sLcR::synapse0x32942c0() {
   return (neuron0x3291380()*0.00473659);
}

double NNfunction_sb_sLcR::synapse0x3294300() {
   return (neuron0x32916c0()*-0.00365989);
}

double NNfunction_sb_sLcR::synapse0x3294340() {
   return (neuron0x3291a00()*-0.00371705);
}

double NNfunction_sb_sLcR::synapse0x3294380() {
   return (neuron0x3291d40()*-0.0117415);
}

double NNfunction_sb_sLcR::synapse0x3294700() {
   return (neuron0x328d180()*0.0992117);
}

double NNfunction_sb_sLcR::synapse0x3294740() {
   return (neuron0x328d4c0()*-0.00134659);
}

double NNfunction_sb_sLcR::synapse0x3294780() {
   return (neuron0x328d800()*-0.0501701);
}

double NNfunction_sb_sLcR::synapse0x32947c0() {
   return (neuron0x328db40()*0.560906);
}

double NNfunction_sb_sLcR::synapse0x3294800() {
   return (neuron0x328de80()*0.0751544);
}

double NNfunction_sb_sLcR::synapse0x3294840() {
   return (neuron0x328e1c0()*0.137829);
}

double NNfunction_sb_sLcR::synapse0x3294880() {
   return (neuron0x328e500()*0.145546);
}

double NNfunction_sb_sLcR::synapse0x32948c0() {
   return (neuron0x328e840()*-0.188831);
}

double NNfunction_sb_sLcR::synapse0x3294900() {
   return (neuron0x328eb80()*-0.581939);
}

double NNfunction_sb_sLcR::synapse0x3294940() {
   return (neuron0x328eec0()*-0.256906);
}

double NNfunction_sb_sLcR::synapse0x3294980() {
   return (neuron0x328f200()*0.2306);
}

double NNfunction_sb_sLcR::synapse0x32949c0() {
   return (neuron0x328f540()*0.000776574);
}

double NNfunction_sb_sLcR::synapse0x3294a00() {
   return (neuron0x328f880()*-0.10267);
}

double NNfunction_sb_sLcR::synapse0x3294a40() {
   return (neuron0x328fbc0()*-0.0555344);
}

double NNfunction_sb_sLcR::synapse0x3294a80() {
   return (neuron0x328ff00()*0.155143);
}

double NNfunction_sb_sLcR::synapse0x3294ac0() {
   return (neuron0x3290240()*0.378672);
}

double NNfunction_sb_sLcR::synapse0x3294550() {
   return (neuron0x3290580()*0.00253406);
}

double NNfunction_sb_sLcR::synapse0x3294590() {
   return (neuron0x3290ae0()*0.325071);
}

double NNfunction_sb_sLcR::synapse0x3294c10() {
   return (neuron0x3290d00()*-0.474633);
}

double NNfunction_sb_sLcR::synapse0x3294c50() {
   return (neuron0x3291040()*0.347659);
}

double NNfunction_sb_sLcR::synapse0x3294c90() {
   return (neuron0x3291380()*0.00558105);
}

double NNfunction_sb_sLcR::synapse0x3294cd0() {
   return (neuron0x32916c0()*-0.0824789);
}

double NNfunction_sb_sLcR::synapse0x3294d10() {
   return (neuron0x3291a00()*0.188759);
}

double NNfunction_sb_sLcR::synapse0x3294d50() {
   return (neuron0x3291d40()*0.387193);
}

double NNfunction_sb_sLcR::synapse0x32950d0() {
   return (neuron0x328d180()*0.0537697);
}

double NNfunction_sb_sLcR::synapse0x3295110() {
   return (neuron0x328d4c0()*0.368872);
}

double NNfunction_sb_sLcR::synapse0x3295150() {
   return (neuron0x328d800()*-0.243513);
}

double NNfunction_sb_sLcR::synapse0x3295190() {
   return (neuron0x328db40()*-0.45249);
}

double NNfunction_sb_sLcR::synapse0x32951d0() {
   return (neuron0x328de80()*-0.0967454);
}

double NNfunction_sb_sLcR::synapse0x3295210() {
   return (neuron0x328e1c0()*0.582637);
}

double NNfunction_sb_sLcR::synapse0x3295250() {
   return (neuron0x328e500()*-0.17008);
}

double NNfunction_sb_sLcR::synapse0x3295290() {
   return (neuron0x328e840()*0.0802138);
}

double NNfunction_sb_sLcR::synapse0x32952d0() {
   return (neuron0x328eb80()*-0.286557);
}

double NNfunction_sb_sLcR::synapse0x3056630() {
   return (neuron0x328eec0()*-0.125013);
}

double NNfunction_sb_sLcR::synapse0x3056670() {
   return (neuron0x328f200()*0.0148917);
}

double NNfunction_sb_sLcR::synapse0x30566b0() {
   return (neuron0x328f540()*-0.197223);
}

double NNfunction_sb_sLcR::synapse0x30566f0() {
   return (neuron0x328f880()*-0.605365);
}

double NNfunction_sb_sLcR::synapse0x3056730() {
   return (neuron0x328fbc0()*0.446763);
}

double NNfunction_sb_sLcR::synapse0x3056770() {
   return (neuron0x328ff00()*0.2707);
}

double NNfunction_sb_sLcR::synapse0x30567b0() {
   return (neuron0x3290240()*0.211264);
}

double NNfunction_sb_sLcR::synapse0x3294f20() {
   return (neuron0x3290580()*-0.648363);
}

double NNfunction_sb_sLcR::synapse0x3294f60() {
   return (neuron0x3290ae0()*-0.694786);
}

double NNfunction_sb_sLcR::synapse0x3056900() {
   return (neuron0x3290d00()*0.975336);
}

double NNfunction_sb_sLcR::synapse0x3056940() {
   return (neuron0x3291040()*-0.351604);
}

double NNfunction_sb_sLcR::synapse0x3056980() {
   return (neuron0x3291380()*0.400372);
}

double NNfunction_sb_sLcR::synapse0x30569c0() {
   return (neuron0x32916c0()*0.501573);
}

double NNfunction_sb_sLcR::synapse0x3056a00() {
   return (neuron0x3291a00()*0.270988);
}

double NNfunction_sb_sLcR::synapse0x3295b20() {
   return (neuron0x3291d40()*-0.0718008);
}

double NNfunction_sb_sLcR::synapse0x3295ea0() {
   return (neuron0x328d180()*0.0103271);
}

double NNfunction_sb_sLcR::synapse0x3295ee0() {
   return (neuron0x328d4c0()*-0.0423657);
}

double NNfunction_sb_sLcR::synapse0x3295f20() {
   return (neuron0x328d800()*0.0588695);
}

double NNfunction_sb_sLcR::synapse0x3295f60() {
   return (neuron0x328db40()*-0.00329199);
}

double NNfunction_sb_sLcR::synapse0x3295fa0() {
   return (neuron0x328de80()*0.0606082);
}

double NNfunction_sb_sLcR::synapse0x3295fe0() {
   return (neuron0x328e1c0()*0.0247727);
}

double NNfunction_sb_sLcR::synapse0x3296020() {
   return (neuron0x328e500()*0.015339);
}

double NNfunction_sb_sLcR::synapse0x3296060() {
   return (neuron0x328e840()*-0.032222);
}

double NNfunction_sb_sLcR::synapse0x32960a0() {
   return (neuron0x328eb80()*-0.0195034);
}

double NNfunction_sb_sLcR::synapse0x32960e0() {
   return (neuron0x328eec0()*-0.0307359);
}

double NNfunction_sb_sLcR::synapse0x3296120() {
   return (neuron0x328f200()*0.0324082);
}

double NNfunction_sb_sLcR::synapse0x3296160() {
   return (neuron0x328f540()*0.0211832);
}

double NNfunction_sb_sLcR::synapse0x32961a0() {
   return (neuron0x328f880()*-1.70286);
}

double NNfunction_sb_sLcR::synapse0x32961e0() {
   return (neuron0x328fbc0()*-0.0331793);
}

double NNfunction_sb_sLcR::synapse0x3296220() {
   return (neuron0x328ff00()*0.0677396);
}

double NNfunction_sb_sLcR::synapse0x3296260() {
   return (neuron0x3290240()*0.388154);
}

double NNfunction_sb_sLcR::synapse0x3295cf0() {
   return (neuron0x3290580()*-0.0096855);
}

double NNfunction_sb_sLcR::synapse0x3295d30() {
   return (neuron0x3290ae0()*0.0117476);
}

double NNfunction_sb_sLcR::synapse0x32963b0() {
   return (neuron0x3290d00()*-0.0458786);
}

double NNfunction_sb_sLcR::synapse0x32963f0() {
   return (neuron0x3291040()*-0.0635346);
}

double NNfunction_sb_sLcR::synapse0x3296430() {
   return (neuron0x3291380()*0.0335897);
}

double NNfunction_sb_sLcR::synapse0x3296470() {
   return (neuron0x32916c0()*0.00299121);
}

double NNfunction_sb_sLcR::synapse0x32964b0() {
   return (neuron0x3291a00()*0.0246141);
}

double NNfunction_sb_sLcR::synapse0x32964f0() {
   return (neuron0x3291d40()*0.00799339);
}

double NNfunction_sb_sLcR::synapse0x3296870() {
   return (neuron0x328d180()*0.00155348);
}

double NNfunction_sb_sLcR::synapse0x32968b0() {
   return (neuron0x328d4c0()*0.0297663);
}

double NNfunction_sb_sLcR::synapse0x32968f0() {
   return (neuron0x328d800()*0.116295);
}

double NNfunction_sb_sLcR::synapse0x3296930() {
   return (neuron0x328db40()*1.93922);
}

double NNfunction_sb_sLcR::synapse0x3296970() {
   return (neuron0x328de80()*-0.000551822);
}

double NNfunction_sb_sLcR::synapse0x32969b0() {
   return (neuron0x328e1c0()*-0.0339064);
}

double NNfunction_sb_sLcR::synapse0x32969f0() {
   return (neuron0x328e500()*-0.0103075);
}

double NNfunction_sb_sLcR::synapse0x3296a30() {
   return (neuron0x328e840()*-0.00954175);
}

double NNfunction_sb_sLcR::synapse0x3296a70() {
   return (neuron0x328eb80()*0.0288734);
}

double NNfunction_sb_sLcR::synapse0x3296ab0() {
   return (neuron0x328eec0()*0.0182299);
}

double NNfunction_sb_sLcR::synapse0x3296af0() {
   return (neuron0x328f200()*0.0057621);
}

double NNfunction_sb_sLcR::synapse0x3296b30() {
   return (neuron0x328f540()*0.00152378);
}

double NNfunction_sb_sLcR::synapse0x3296b70() {
   return (neuron0x328f880()*0.0699933);
}

double NNfunction_sb_sLcR::synapse0x3296bb0() {
   return (neuron0x328fbc0()*-0.0116082);
}

double NNfunction_sb_sLcR::synapse0x3296bf0() {
   return (neuron0x328ff00()*0.0215433);
}

double NNfunction_sb_sLcR::synapse0x3296c30() {
   return (neuron0x3290240()*0.0543576);
}

double NNfunction_sb_sLcR::synapse0x32966c0() {
   return (neuron0x3290580()*-0.0211302);
}

double NNfunction_sb_sLcR::synapse0x3296700() {
   return (neuron0x3290ae0()*0.0098872);
}

double NNfunction_sb_sLcR::synapse0x3296d80() {
   return (neuron0x3290d00()*-0.00528017);
}

double NNfunction_sb_sLcR::synapse0x3296dc0() {
   return (neuron0x3291040()*-0.0025039);
}

double NNfunction_sb_sLcR::synapse0x3296e00() {
   return (neuron0x3291380()*0.043903);
}

double NNfunction_sb_sLcR::synapse0x3296e40() {
   return (neuron0x32916c0()*0.0383198);
}

double NNfunction_sb_sLcR::synapse0x3296e80() {
   return (neuron0x3291a00()*-0.00556588);
}

double NNfunction_sb_sLcR::synapse0x3296ec0() {
   return (neuron0x3291d40()*0.0178867);
}

double NNfunction_sb_sLcR::synapse0x32909d0() {
   return (neuron0x328d180()*0.340648);
}

double NNfunction_sb_sLcR::synapse0x3290a10() {
   return (neuron0x328d4c0()*-0.155941);
}

double NNfunction_sb_sLcR::synapse0x3290a50() {
   return (neuron0x328d800()*-0.51495);
}

double NNfunction_sb_sLcR::synapse0x3290a90() {
   return (neuron0x328db40()*0.300982);
}

double NNfunction_sb_sLcR::synapse0x3297450() {
   return (neuron0x328de80()*0.260993);
}

double NNfunction_sb_sLcR::synapse0x3297490() {
   return (neuron0x328e1c0()*0.167941);
}

double NNfunction_sb_sLcR::synapse0x32974d0() {
   return (neuron0x328e500()*-0.215466);
}

double NNfunction_sb_sLcR::synapse0x3297510() {
   return (neuron0x328e840()*-0.0383365);
}

double NNfunction_sb_sLcR::synapse0x3297550() {
   return (neuron0x328eb80()*-0.458429);
}

double NNfunction_sb_sLcR::synapse0x3297590() {
   return (neuron0x328eec0()*0.178517);
}

double NNfunction_sb_sLcR::synapse0x32975d0() {
   return (neuron0x328f200()*-0.368019);
}

double NNfunction_sb_sLcR::synapse0x3297610() {
   return (neuron0x328f540()*0.535277);
}

double NNfunction_sb_sLcR::synapse0x3297650() {
   return (neuron0x328f880()*0.136571);
}

double NNfunction_sb_sLcR::synapse0x3297690() {
   return (neuron0x328fbc0()*0.590293);
}

double NNfunction_sb_sLcR::synapse0x32976d0() {
   return (neuron0x328ff00()*-0.359189);
}

double NNfunction_sb_sLcR::synapse0x3297710() {
   return (neuron0x3290240()*-0.0154455);
}

double NNfunction_sb_sLcR::synapse0x3297090() {
   return (neuron0x3290580()*-0.12158);
}

double NNfunction_sb_sLcR::synapse0x32970d0() {
   return (neuron0x3290ae0()*0.183495);
}

double NNfunction_sb_sLcR::synapse0x3297860() {
   return (neuron0x3290d00()*-0.065982);
}

double NNfunction_sb_sLcR::synapse0x32978a0() {
   return (neuron0x3291040()*-0.0917575);
}

double NNfunction_sb_sLcR::synapse0x32978e0() {
   return (neuron0x3291380()*-0.263512);
}

double NNfunction_sb_sLcR::synapse0x3297920() {
   return (neuron0x32916c0()*0.586508);
}

double NNfunction_sb_sLcR::synapse0x3297960() {
   return (neuron0x3291a00()*0.28805);
}

double NNfunction_sb_sLcR::synapse0x32979a0() {
   return (neuron0x3291d40()*0.471922);
}

double NNfunction_sb_sLcR::synapse0x3297d20() {
   return (neuron0x328d180()*-0.08911);
}

double NNfunction_sb_sLcR::synapse0x3297d60() {
   return (neuron0x328d4c0()*0.0115603);
}

double NNfunction_sb_sLcR::synapse0x3297da0() {
   return (neuron0x328d800()*-0.375596);
}

double NNfunction_sb_sLcR::synapse0x3297de0() {
   return (neuron0x328db40()*-0.146034);
}

double NNfunction_sb_sLcR::synapse0x3297e20() {
   return (neuron0x328de80()*0.234643);
}

double NNfunction_sb_sLcR::synapse0x3297e60() {
   return (neuron0x328e1c0()*0.16795);
}

double NNfunction_sb_sLcR::synapse0x3297ea0() {
   return (neuron0x328e500()*-0.248786);
}

double NNfunction_sb_sLcR::synapse0x3297ee0() {
   return (neuron0x328e840()*-0.186613);
}

double NNfunction_sb_sLcR::synapse0x3297f20() {
   return (neuron0x328eb80()*-0.0401621);
}

double NNfunction_sb_sLcR::synapse0x3297f60() {
   return (neuron0x328eec0()*-0.0979586);
}

double NNfunction_sb_sLcR::synapse0x3297fa0() {
   return (neuron0x328f200()*-0.0080044);
}

double NNfunction_sb_sLcR::synapse0x3297fe0() {
   return (neuron0x328f540()*-0.116668);
}

double NNfunction_sb_sLcR::synapse0x3298020() {
   return (neuron0x328f880()*-0.0445936);
}

double NNfunction_sb_sLcR::synapse0x3298060() {
   return (neuron0x328fbc0()*0.0430461);
}

double NNfunction_sb_sLcR::synapse0x32980a0() {
   return (neuron0x328ff00()*-0.130666);
}

double NNfunction_sb_sLcR::synapse0x32980e0() {
   return (neuron0x3290240()*0.555037);
}

double NNfunction_sb_sLcR::synapse0x3297b70() {
   return (neuron0x3290580()*-0.0354853);
}

double NNfunction_sb_sLcR::synapse0x3297bb0() {
   return (neuron0x3290ae0()*-0.0599393);
}

double NNfunction_sb_sLcR::synapse0x3298230() {
   return (neuron0x3290d00()*-0.0725773);
}

double NNfunction_sb_sLcR::synapse0x3298270() {
   return (neuron0x3291040()*-0.115193);
}

double NNfunction_sb_sLcR::synapse0x32982b0() {
   return (neuron0x3291380()*-0.188274);
}

double NNfunction_sb_sLcR::synapse0x32982f0() {
   return (neuron0x32916c0()*0.0635073);
}

double NNfunction_sb_sLcR::synapse0x3298330() {
   return (neuron0x3291a00()*0.117817);
}

double NNfunction_sb_sLcR::synapse0x3298370() {
   return (neuron0x3291d40()*0.111139);
}

double NNfunction_sb_sLcR::synapse0x32986f0() {
   return (neuron0x328d180()*0.231802);
}

double NNfunction_sb_sLcR::synapse0x3298730() {
   return (neuron0x328d4c0()*-0.278768);
}

double NNfunction_sb_sLcR::synapse0x3298770() {
   return (neuron0x328d800()*0.511114);
}

double NNfunction_sb_sLcR::synapse0x32987b0() {
   return (neuron0x328db40()*-0.363583);
}

double NNfunction_sb_sLcR::synapse0x32987f0() {
   return (neuron0x328de80()*0.317192);
}

double NNfunction_sb_sLcR::synapse0x3298830() {
   return (neuron0x328e1c0()*0.126445);
}

double NNfunction_sb_sLcR::synapse0x3298870() {
   return (neuron0x328e500()*-0.0428148);
}

double NNfunction_sb_sLcR::synapse0x32988b0() {
   return (neuron0x328e840()*0.394855);
}

double NNfunction_sb_sLcR::synapse0x32988f0() {
   return (neuron0x328eb80()*-0.405799);
}

double NNfunction_sb_sLcR::synapse0x3298930() {
   return (neuron0x328eec0()*0.26535);
}

double NNfunction_sb_sLcR::synapse0x3298970() {
   return (neuron0x328f200()*-0.280866);
}

double NNfunction_sb_sLcR::synapse0x32989b0() {
   return (neuron0x328f540()*-0.639393);
}

double NNfunction_sb_sLcR::synapse0x32989f0() {
   return (neuron0x328f880()*-0.242516);
}

double NNfunction_sb_sLcR::synapse0x3298a30() {
   return (neuron0x328fbc0()*0.285472);
}

double NNfunction_sb_sLcR::synapse0x3298a70() {
   return (neuron0x328ff00()*-0.00580158);
}

double NNfunction_sb_sLcR::synapse0x3298ab0() {
   return (neuron0x3290240()*-1.8124);
}

double NNfunction_sb_sLcR::synapse0x3298540() {
   return (neuron0x3290580()*0.866624);
}

double NNfunction_sb_sLcR::synapse0x3298580() {
   return (neuron0x3290ae0()*0.679301);
}

double NNfunction_sb_sLcR::synapse0x3295310() {
   return (neuron0x3290d00()*0.40773);
}

double NNfunction_sb_sLcR::synapse0x3295350() {
   return (neuron0x3291040()*-0.182007);
}

double NNfunction_sb_sLcR::synapse0x3295390() {
   return (neuron0x3291380()*0.55);
}

double NNfunction_sb_sLcR::synapse0x32953d0() {
   return (neuron0x32916c0()*-0.58666);
}

double NNfunction_sb_sLcR::synapse0x3295410() {
   return (neuron0x3291a00()*-0.305986);
}

double NNfunction_sb_sLcR::synapse0x3295450() {
   return (neuron0x3291d40()*-0.566917);
}

double NNfunction_sb_sLcR::synapse0x32957d0() {
   return (neuron0x328d180()*0.376108);
}

double NNfunction_sb_sLcR::synapse0x3295810() {
   return (neuron0x328d4c0()*0.407462);
}

double NNfunction_sb_sLcR::synapse0x3295850() {
   return (neuron0x328d800()*0.814623);
}

double NNfunction_sb_sLcR::synapse0x3295890() {
   return (neuron0x328db40()*-0.130047);
}

double NNfunction_sb_sLcR::synapse0x32958d0() {
   return (neuron0x328de80()*0.161802);
}

double NNfunction_sb_sLcR::synapse0x3295910() {
   return (neuron0x328e1c0()*-0.215361);
}

double NNfunction_sb_sLcR::synapse0x3295950() {
   return (neuron0x328e500()*-0.0725756);
}

double NNfunction_sb_sLcR::synapse0x3295990() {
   return (neuron0x328e840()*0.0933259);
}

double NNfunction_sb_sLcR::synapse0x32959d0() {
   return (neuron0x328eb80()*-0.383311);
}

double NNfunction_sb_sLcR::synapse0x3295a10() {
   return (neuron0x328eec0()*-0.412631);
}

double NNfunction_sb_sLcR::synapse0x3295a50() {
   return (neuron0x328f200()*-0.246213);
}

double NNfunction_sb_sLcR::synapse0x3295a90() {
   return (neuron0x328f540()*0.240449);
}

double NNfunction_sb_sLcR::synapse0x3295ad0() {
   return (neuron0x328f880()*0.12411);
}

double NNfunction_sb_sLcR::synapse0x3299c10() {
   return (neuron0x328fbc0()*-0.774581);
}

double NNfunction_sb_sLcR::synapse0x3299c50() {
   return (neuron0x328ff00()*-0.0571395);
}

double NNfunction_sb_sLcR::synapse0x3299c90() {
   return (neuron0x3290240()*-0.413409);
}

double NNfunction_sb_sLcR::synapse0x3295620() {
   return (neuron0x3290580()*-0.78027);
}

double NNfunction_sb_sLcR::synapse0x3295660() {
   return (neuron0x3290ae0()*-0.297486);
}

double NNfunction_sb_sLcR::synapse0x3299de0() {
   return (neuron0x3290d00()*0.993599);
}

double NNfunction_sb_sLcR::synapse0x3299e20() {
   return (neuron0x3291040()*0.272059);
}

double NNfunction_sb_sLcR::synapse0x3299e60() {
   return (neuron0x3291380()*0.410791);
}

double NNfunction_sb_sLcR::synapse0x3299ea0() {
   return (neuron0x32916c0()*0.206892);
}

double NNfunction_sb_sLcR::synapse0x3299ee0() {
   return (neuron0x3291a00()*-0.33952);
}

double NNfunction_sb_sLcR::synapse0x3299f20() {
   return (neuron0x3291d40()*0.302999);
}

double NNfunction_sb_sLcR::synapse0x329a2a0() {
   return (neuron0x328d180()*-0.0035864);
}

double NNfunction_sb_sLcR::synapse0x329a2e0() {
   return (neuron0x328d4c0()*-0.0213982);
}

double NNfunction_sb_sLcR::synapse0x329a320() {
   return (neuron0x328d800()*-0.033567);
}

double NNfunction_sb_sLcR::synapse0x329a360() {
   return (neuron0x328db40()*9.61617);
}

double NNfunction_sb_sLcR::synapse0x329a3a0() {
   return (neuron0x328de80()*0.0642728);
}

double NNfunction_sb_sLcR::synapse0x329a3e0() {
   return (neuron0x328e1c0()*0.0317464);
}

double NNfunction_sb_sLcR::synapse0x329a420() {
   return (neuron0x328e500()*-0.0821458);
}

double NNfunction_sb_sLcR::synapse0x329a460() {
   return (neuron0x328e840()*0.0183412);
}

double NNfunction_sb_sLcR::synapse0x329a4a0() {
   return (neuron0x328eb80()*0.0227916);
}

double NNfunction_sb_sLcR::synapse0x329a4e0() {
   return (neuron0x328eec0()*-0.0147819);
}

double NNfunction_sb_sLcR::synapse0x329a520() {
   return (neuron0x328f200()*0.0184114);
}

double NNfunction_sb_sLcR::synapse0x329a560() {
   return (neuron0x328f540()*-0.0558936);
}

double NNfunction_sb_sLcR::synapse0x329a5a0() {
   return (neuron0x328f880()*-0.175123);
}

double NNfunction_sb_sLcR::synapse0x329a5e0() {
   return (neuron0x328fbc0()*-0.0185564);
}

double NNfunction_sb_sLcR::synapse0x329a620() {
   return (neuron0x328ff00()*-0.0951178);
}

double NNfunction_sb_sLcR::synapse0x329a660() {
   return (neuron0x3290240()*-0.340944);
}

double NNfunction_sb_sLcR::synapse0x329a0f0() {
   return (neuron0x3290580()*0.051654);
}

double NNfunction_sb_sLcR::synapse0x329a130() {
   return (neuron0x3290ae0()*0.0667569);
}

double NNfunction_sb_sLcR::synapse0x329a7b0() {
   return (neuron0x3290d00()*0.0887028);
}

double NNfunction_sb_sLcR::synapse0x329a7f0() {
   return (neuron0x3291040()*0.0100916);
}

double NNfunction_sb_sLcR::synapse0x329a830() {
   return (neuron0x3291380()*0.016001);
}

double NNfunction_sb_sLcR::synapse0x329a870() {
   return (neuron0x32916c0()*0.0165514);
}

double NNfunction_sb_sLcR::synapse0x329a8b0() {
   return (neuron0x3291a00()*-0.00889713);
}

double NNfunction_sb_sLcR::synapse0x329a8f0() {
   return (neuron0x3291d40()*0.0233207);
}

double NNfunction_sb_sLcR::synapse0x329ac70() {
   return (neuron0x328d180()*0.284369);
}

double NNfunction_sb_sLcR::synapse0x329acb0() {
   return (neuron0x328d4c0()*-0.137912);
}

double NNfunction_sb_sLcR::synapse0x329acf0() {
   return (neuron0x328d800()*0.49703);
}

double NNfunction_sb_sLcR::synapse0x329ad30() {
   return (neuron0x328db40()*0.279853);
}

double NNfunction_sb_sLcR::synapse0x329ad70() {
   return (neuron0x328de80()*0.282316);
}

double NNfunction_sb_sLcR::synapse0x329adb0() {
   return (neuron0x328e1c0()*-0.553266);
}

double NNfunction_sb_sLcR::synapse0x329adf0() {
   return (neuron0x328e500()*-0.279281);
}

double NNfunction_sb_sLcR::synapse0x329ae30() {
   return (neuron0x328e840()*-0.120212);
}

double NNfunction_sb_sLcR::synapse0x329ae70() {
   return (neuron0x328eb80()*0.0230203);
}

double NNfunction_sb_sLcR::synapse0x329aeb0() {
   return (neuron0x328eec0()*-0.086278);
}

double NNfunction_sb_sLcR::synapse0x329aef0() {
   return (neuron0x328f200()*-1.18781);
}

double NNfunction_sb_sLcR::synapse0x329af30() {
   return (neuron0x328f540()*-1.14911);
}

double NNfunction_sb_sLcR::synapse0x329af70() {
   return (neuron0x328f880()*-0.145986);
}

double NNfunction_sb_sLcR::synapse0x329afb0() {
   return (neuron0x328fbc0()*-0.134211);
}

double NNfunction_sb_sLcR::synapse0x329aff0() {
   return (neuron0x328ff00()*-0.447277);
}

double NNfunction_sb_sLcR::synapse0x329b030() {
   return (neuron0x3290240()*-0.0872711);
}

double NNfunction_sb_sLcR::synapse0x329aac0() {
   return (neuron0x3290580()*0.057286);
}

double NNfunction_sb_sLcR::synapse0x329ab00() {
   return (neuron0x3290ae0()*-0.313341);
}

double NNfunction_sb_sLcR::synapse0x329b180() {
   return (neuron0x3290d00()*0.0845214);
}

double NNfunction_sb_sLcR::synapse0x329b1c0() {
   return (neuron0x3291040()*0.34159);
}

double NNfunction_sb_sLcR::synapse0x329b200() {
   return (neuron0x3291380()*-0.0162076);
}

double NNfunction_sb_sLcR::synapse0x329b240() {
   return (neuron0x32916c0()*-0.507835);
}

double NNfunction_sb_sLcR::synapse0x329b280() {
   return (neuron0x3291a00()*0.185128);
}

double NNfunction_sb_sLcR::synapse0x329b2c0() {
   return (neuron0x3291d40()*0.296749);
}

double NNfunction_sb_sLcR::synapse0x329b640() {
   return (neuron0x328d180()*0.0254077);
}

double NNfunction_sb_sLcR::synapse0x329b680() {
   return (neuron0x328d4c0()*0.31476);
}

double NNfunction_sb_sLcR::synapse0x329b6c0() {
   return (neuron0x328d800()*0.43492);
}

double NNfunction_sb_sLcR::synapse0x329b700() {
   return (neuron0x328db40()*0.639627);
}

double NNfunction_sb_sLcR::synapse0x329b740() {
   return (neuron0x328de80()*-0.0217696);
}

double NNfunction_sb_sLcR::synapse0x329b780() {
   return (neuron0x328e1c0()*-0.0119481);
}

double NNfunction_sb_sLcR::synapse0x329b7c0() {
   return (neuron0x328e500()*0.0588701);
}

double NNfunction_sb_sLcR::synapse0x329b800() {
   return (neuron0x328e840()*-0.0133073);
}

double NNfunction_sb_sLcR::synapse0x329b840() {
   return (neuron0x328eb80()*0.0315724);
}

double NNfunction_sb_sLcR::synapse0x329b880() {
   return (neuron0x328eec0()*0.0499748);
}

double NNfunction_sb_sLcR::synapse0x329b8c0() {
   return (neuron0x328f200()*0.0394231);
}

double NNfunction_sb_sLcR::synapse0x329b900() {
   return (neuron0x328f540()*-0.156799);
}

double NNfunction_sb_sLcR::synapse0x329b940() {
   return (neuron0x328f880()*0.192612);
}

double NNfunction_sb_sLcR::synapse0x329b980() {
   return (neuron0x328fbc0()*0.0376054);
}

double NNfunction_sb_sLcR::synapse0x329b9c0() {
   return (neuron0x328ff00()*-0.0139746);
}

double NNfunction_sb_sLcR::synapse0x329ba00() {
   return (neuron0x3290240()*-0.0252142);
}

double NNfunction_sb_sLcR::synapse0x329b490() {
   return (neuron0x3290580()*0.0359167);
}

double NNfunction_sb_sLcR::synapse0x329b4d0() {
   return (neuron0x3290ae0()*0.0372354);
}

double NNfunction_sb_sLcR::synapse0x329bb50() {
   return (neuron0x3290d00()*-0.0423323);
}

double NNfunction_sb_sLcR::synapse0x329bb90() {
   return (neuron0x3291040()*-0.0674753);
}

double NNfunction_sb_sLcR::synapse0x329bbd0() {
   return (neuron0x3291380()*0.0110672);
}

double NNfunction_sb_sLcR::synapse0x329bc10() {
   return (neuron0x32916c0()*0.0506353);
}

double NNfunction_sb_sLcR::synapse0x329bc50() {
   return (neuron0x3291a00()*0.0525603);
}

double NNfunction_sb_sLcR::synapse0x329bc90() {
   return (neuron0x3291d40()*0.0161917);
}

double NNfunction_sb_sLcR::synapse0x329c010() {
   return (neuron0x328d180()*-0.00175026);
}

double NNfunction_sb_sLcR::synapse0x328d3a0() {
   return (neuron0x328d4c0()*0.067678);
}

double NNfunction_sb_sLcR::synapse0x328d3e0() {
   return (neuron0x328d800()*0.154602);
}

double NNfunction_sb_sLcR::synapse0x328d6e0() {
   return (neuron0x328db40()*-0.213112);
}

double NNfunction_sb_sLcR::synapse0x328d720() {
   return (neuron0x328de80()*-0.0374007);
}

double NNfunction_sb_sLcR::synapse0x328da20() {
   return (neuron0x328e1c0()*0.463249);
}

double NNfunction_sb_sLcR::synapse0x328da60() {
   return (neuron0x328e500()*3.96048e-05);
}

double NNfunction_sb_sLcR::synapse0x328dd60() {
   return (neuron0x328e840()*0.00212555);
}

double NNfunction_sb_sLcR::synapse0x328dda0() {
   return (neuron0x328eb80()*-0.0938318);
}

double NNfunction_sb_sLcR::synapse0x328e0a0() {
   return (neuron0x328eec0()*-0.00815835);
}

double NNfunction_sb_sLcR::synapse0x328e0e0() {
   return (neuron0x328f200()*-0.00439354);
}

double NNfunction_sb_sLcR::synapse0x328e3e0() {
   return (neuron0x328f540()*0.0133205);
}

double NNfunction_sb_sLcR::synapse0x328e420() {
   return (neuron0x328f880()*0.38408);
}

double NNfunction_sb_sLcR::synapse0x328e720() {
   return (neuron0x328fbc0()*0.0186292);
}

double NNfunction_sb_sLcR::synapse0x328e760() {
   return (neuron0x328ff00()*-0.0719204);
}

double NNfunction_sb_sLcR::synapse0x328ea60() {
   return (neuron0x3290240()*-0.322916);
}

double NNfunction_sb_sLcR::synapse0x328eaa0() {
   return (neuron0x3290580()*0.0976969);
}

double NNfunction_sb_sLcR::synapse0x328eda0() {
   return (neuron0x3290ae0()*0.00253295);
}

double NNfunction_sb_sLcR::synapse0x328ede0() {
   return (neuron0x3290d00()*-0.0197653);
}

double NNfunction_sb_sLcR::synapse0x328f0e0() {
   return (neuron0x3291040()*-0.0276947);
}

double NNfunction_sb_sLcR::synapse0x328f120() {
   return (neuron0x3291380()*-0.0223196);
}

double NNfunction_sb_sLcR::synapse0x328f420() {
   return (neuron0x32916c0()*-0.0409318);
}

double NNfunction_sb_sLcR::synapse0x328f460() {
   return (neuron0x3291a00()*-0.0284481);
}

double NNfunction_sb_sLcR::synapse0x328f760() {
   return (neuron0x3291d40()*-0.0106921);
}

double NNfunction_sb_sLcR::synapse0x328f7a0() {
   return (neuron0x328d180()*-0.0273162);
}

double NNfunction_sb_sLcR::synapse0x3290460() {
   return (neuron0x328d4c0()*-0.0635865);
}

double NNfunction_sb_sLcR::synapse0x32904a0() {
   return (neuron0x328d800()*-0.0371754);
}

double NNfunction_sb_sLcR::synapse0x329be60() {
   return (neuron0x328db40()*1.92244);
}

double NNfunction_sb_sLcR::synapse0x329bea0() {
   return (neuron0x328de80()*-0.0127631);
}

double NNfunction_sb_sLcR::synapse0x32907a0() {
   return (neuron0x328e1c0()*0.0581235);
}

double NNfunction_sb_sLcR::synapse0x32907e0() {
   return (neuron0x328e500()*-0.00111718);
}

double NNfunction_sb_sLcR::synapse0x3048250() {
   return (neuron0x328e840()*0.0235756);
}

double NNfunction_sb_sLcR::synapse0x3048290() {
   return (neuron0x328eb80()*-0.0237449);
}

double NNfunction_sb_sLcR::synapse0x3290f20() {
   return (neuron0x328eec0()*-0.0400913);
}

double NNfunction_sb_sLcR::synapse0x3290f60() {
   return (neuron0x328f200()*0.00342566);
}

double NNfunction_sb_sLcR::synapse0x3291260() {
   return (neuron0x328f540()*-0.00188809);
}

double NNfunction_sb_sLcR::synapse0x32912a0() {
   return (neuron0x328f880()*-0.0276862);
}

double NNfunction_sb_sLcR::synapse0x32915a0() {
   return (neuron0x328fbc0()*0.0380735);
}

double NNfunction_sb_sLcR::synapse0x32915e0() {
   return (neuron0x328ff00()*-0.018476);
}

double NNfunction_sb_sLcR::synapse0x32918e0() {
   return (neuron0x3290240()*-0.0340234);
}

double NNfunction_sb_sLcR::synapse0x3291920() {
   return (neuron0x3290580()*0.0410017);
}

double NNfunction_sb_sLcR::synapse0x3291c20() {
   return (neuron0x3290ae0()*-0.0203434);
}

double NNfunction_sb_sLcR::synapse0x3291c60() {
   return (neuron0x3290d00()*0.0244119);
}

double NNfunction_sb_sLcR::synapse0x3291f60() {
   return (neuron0x3291040()*-0.02695);
}

double NNfunction_sb_sLcR::synapse0x3291fa0() {
   return (neuron0x3291380()*-0.0362912);
}

double NNfunction_sb_sLcR::synapse0x328faa0() {
   return (neuron0x32916c0()*-0.0167324);
}

double NNfunction_sb_sLcR::synapse0x328fae0() {
   return (neuron0x3291a00()*-0.00330818);
}

double NNfunction_sb_sLcR::synapse0x329dd80() {
   return (neuron0x3291d40()*0.00469884);
}

double NNfunction_sb_sLcR::synapse0x329e100() {
   return (neuron0x328d180()*-0.300583);
}

double NNfunction_sb_sLcR::synapse0x329e140() {
   return (neuron0x328d4c0()*0.0214641);
}

double NNfunction_sb_sLcR::synapse0x329e180() {
   return (neuron0x328d800()*0.124637);
}

double NNfunction_sb_sLcR::synapse0x329e1c0() {
   return (neuron0x328db40()*1.0775);
}

double NNfunction_sb_sLcR::synapse0x329e200() {
   return (neuron0x328de80()*-0.380332);
}

double NNfunction_sb_sLcR::synapse0x329e240() {
   return (neuron0x328e1c0()*-0.102845);
}

double NNfunction_sb_sLcR::synapse0x329e280() {
   return (neuron0x328e500()*0.00928792);
}

double NNfunction_sb_sLcR::synapse0x329e2c0() {
   return (neuron0x328e840()*-0.621354);
}

double NNfunction_sb_sLcR::synapse0x329e300() {
   return (neuron0x328eb80()*-0.126191);
}

double NNfunction_sb_sLcR::synapse0x329e340() {
   return (neuron0x328eec0()*0.187638);
}

double NNfunction_sb_sLcR::synapse0x329e380() {
   return (neuron0x328f200()*-0.097693);
}

double NNfunction_sb_sLcR::synapse0x329e3c0() {
   return (neuron0x328f540()*-0.0770351);
}

double NNfunction_sb_sLcR::synapse0x329e400() {
   return (neuron0x328f880()*-0.0671998);
}

double NNfunction_sb_sLcR::synapse0x329e440() {
   return (neuron0x328fbc0()*-0.170533);
}

double NNfunction_sb_sLcR::synapse0x329e480() {
   return (neuron0x328ff00()*-0.448749);
}

double NNfunction_sb_sLcR::synapse0x329e4c0() {
   return (neuron0x3290240()*-0.107482);
}

double NNfunction_sb_sLcR::synapse0x329df50() {
   return (neuron0x3290580()*-1.33193);
}

double NNfunction_sb_sLcR::synapse0x329df90() {
   return (neuron0x3290ae0()*-0.371429);
}

double NNfunction_sb_sLcR::synapse0x329e610() {
   return (neuron0x3290d00()*0.11434);
}

double NNfunction_sb_sLcR::synapse0x329e650() {
   return (neuron0x3291040()*-0.14748);
}

double NNfunction_sb_sLcR::synapse0x329e690() {
   return (neuron0x3291380()*-0.319266);
}

double NNfunction_sb_sLcR::synapse0x329e6d0() {
   return (neuron0x32916c0()*-0.186054);
}

double NNfunction_sb_sLcR::synapse0x329e710() {
   return (neuron0x3291a00()*0.0460776);
}

double NNfunction_sb_sLcR::synapse0x329e750() {
   return (neuron0x3291d40()*-0.259133);
}

double NNfunction_sb_sLcR::synapse0x329ead0() {
   return (neuron0x328d180()*0.0225693);
}

double NNfunction_sb_sLcR::synapse0x329eb10() {
   return (neuron0x328d4c0()*-0.0491172);
}

double NNfunction_sb_sLcR::synapse0x329eb50() {
   return (neuron0x328d800()*-0.10018);
}

double NNfunction_sb_sLcR::synapse0x329eb90() {
   return (neuron0x328db40()*1.14561);
}

double NNfunction_sb_sLcR::synapse0x329ebd0() {
   return (neuron0x328de80()*0.00228229);
}

double NNfunction_sb_sLcR::synapse0x329ec10() {
   return (neuron0x328e1c0()*0.0535002);
}

double NNfunction_sb_sLcR::synapse0x329ec50() {
   return (neuron0x328e500()*0.0170431);
}

double NNfunction_sb_sLcR::synapse0x329ec90() {
   return (neuron0x328e840()*0.00464834);
}

double NNfunction_sb_sLcR::synapse0x329ecd0() {
   return (neuron0x328eb80()*-0.0147003);
}

double NNfunction_sb_sLcR::synapse0x329ed10() {
   return (neuron0x328eec0()*-0.00698451);
}

double NNfunction_sb_sLcR::synapse0x329ed50() {
   return (neuron0x328f200()*-0.00748723);
}

double NNfunction_sb_sLcR::synapse0x329ed90() {
   return (neuron0x328f540()*-0.0251549);
}

double NNfunction_sb_sLcR::synapse0x329edd0() {
   return (neuron0x328f880()*0.12871);
}

double NNfunction_sb_sLcR::synapse0x329ee10() {
   return (neuron0x328fbc0()*0.00367426);
}

double NNfunction_sb_sLcR::synapse0x329ee50() {
   return (neuron0x328ff00()*-0.00432813);
}

double NNfunction_sb_sLcR::synapse0x329ee90() {
   return (neuron0x3290240()*0.135303);
}

double NNfunction_sb_sLcR::synapse0x329e920() {
   return (neuron0x3290580()*0.0258255);
}

double NNfunction_sb_sLcR::synapse0x329e960() {
   return (neuron0x3290ae0()*0.00228201);
}

double NNfunction_sb_sLcR::synapse0x329efe0() {
   return (neuron0x3290d00()*-0.02624);
}

double NNfunction_sb_sLcR::synapse0x329f020() {
   return (neuron0x3291040()*-0.025512);
}

double NNfunction_sb_sLcR::synapse0x329f060() {
   return (neuron0x3291380()*-0.012208);
}

double NNfunction_sb_sLcR::synapse0x329f0a0() {
   return (neuron0x32916c0()*-0.0147928);
}

double NNfunction_sb_sLcR::synapse0x329f0e0() {
   return (neuron0x3291a00()*0.021199);
}

double NNfunction_sb_sLcR::synapse0x329f120() {
   return (neuron0x3291d40()*-0.0087809);
}

double NNfunction_sb_sLcR::synapse0x329f4a0() {
   return (neuron0x328d180()*0.805417);
}

double NNfunction_sb_sLcR::synapse0x329f4e0() {
   return (neuron0x328d4c0()*0.019338);
}

double NNfunction_sb_sLcR::synapse0x329f520() {
   return (neuron0x328d800()*-0.40324);
}

double NNfunction_sb_sLcR::synapse0x329f560() {
   return (neuron0x328db40()*-0.18994);
}

double NNfunction_sb_sLcR::synapse0x329f5a0() {
   return (neuron0x328de80()*-0.24285);
}

double NNfunction_sb_sLcR::synapse0x329f5e0() {
   return (neuron0x328e1c0()*0.188363);
}

double NNfunction_sb_sLcR::synapse0x329f620() {
   return (neuron0x328e500()*0.291886);
}

double NNfunction_sb_sLcR::synapse0x329f660() {
   return (neuron0x328e840()*-0.140806);
}

double NNfunction_sb_sLcR::synapse0x329f6a0() {
   return (neuron0x328eb80()*-0.475086);
}

double NNfunction_sb_sLcR::synapse0x329f6e0() {
   return (neuron0x328eec0()*-0.544999);
}

double NNfunction_sb_sLcR::synapse0x329f720() {
   return (neuron0x328f200()*0.396335);
}

double NNfunction_sb_sLcR::synapse0x329f760() {
   return (neuron0x328f540()*-0.253757);
}

double NNfunction_sb_sLcR::synapse0x329f7a0() {
   return (neuron0x328f880()*-0.969997);
}

double NNfunction_sb_sLcR::synapse0x329f7e0() {
   return (neuron0x328fbc0()*-0.10847);
}

double NNfunction_sb_sLcR::synapse0x329f820() {
   return (neuron0x328ff00()*0.257497);
}

double NNfunction_sb_sLcR::synapse0x329f860() {
   return (neuron0x3290240()*0.0272223);
}

double NNfunction_sb_sLcR::synapse0x329f2f0() {
   return (neuron0x3290580()*0.338637);
}

double NNfunction_sb_sLcR::synapse0x329f330() {
   return (neuron0x3290ae0()*0.22169);
}

double NNfunction_sb_sLcR::synapse0x329f9b0() {
   return (neuron0x3290d00()*0.616549);
}

double NNfunction_sb_sLcR::synapse0x329f9f0() {
   return (neuron0x3291040()*0.11295);
}

double NNfunction_sb_sLcR::synapse0x329fa30() {
   return (neuron0x3291380()*0.350408);
}

double NNfunction_sb_sLcR::synapse0x329fa70() {
   return (neuron0x32916c0()*-0.18407);
}

double NNfunction_sb_sLcR::synapse0x329fab0() {
   return (neuron0x3291a00()*-0.13052);
}

double NNfunction_sb_sLcR::synapse0x329faf0() {
   return (neuron0x3291d40()*-0.00740404);
}

double NNfunction_sb_sLcR::synapse0x329fe70() {
   return (neuron0x328d180()*0.00114727);
}

double NNfunction_sb_sLcR::synapse0x329feb0() {
   return (neuron0x328d4c0()*0.000411683);
}

double NNfunction_sb_sLcR::synapse0x329fef0() {
   return (neuron0x328d800()*-0.0149538);
}

double NNfunction_sb_sLcR::synapse0x329ff30() {
   return (neuron0x328db40()*-0.072142);
}

double NNfunction_sb_sLcR::synapse0x329ff70() {
   return (neuron0x328de80()*-0.0411241);
}

double NNfunction_sb_sLcR::synapse0x329ffb0() {
   return (neuron0x328e1c0()*0.0361156);
}

double NNfunction_sb_sLcR::synapse0x329fff0() {
   return (neuron0x328e500()*0.00179588);
}

double NNfunction_sb_sLcR::synapse0x32a0030() {
   return (neuron0x328e840()*-0.0301923);
}

double NNfunction_sb_sLcR::synapse0x32a0070() {
   return (neuron0x328eb80()*0.00590408);
}

double NNfunction_sb_sLcR::synapse0x32a00b0() {
   return (neuron0x328eec0()*0.0341663);
}

double NNfunction_sb_sLcR::synapse0x32a00f0() {
   return (neuron0x328f200()*0.00295196);
}

double NNfunction_sb_sLcR::synapse0x32a0130() {
   return (neuron0x328f540()*0.0618076);
}

double NNfunction_sb_sLcR::synapse0x32a0170() {
   return (neuron0x328f880()*-0.47015);
}

double NNfunction_sb_sLcR::synapse0x32a01b0() {
   return (neuron0x328fbc0()*0.00635983);
}

double NNfunction_sb_sLcR::synapse0x32a01f0() {
   return (neuron0x328ff00()*-0.032928);
}

double NNfunction_sb_sLcR::synapse0x32a0230() {
   return (neuron0x3290240()*1.71306);
}

double NNfunction_sb_sLcR::synapse0x329fcc0() {
   return (neuron0x3290580()*0.0194482);
}

double NNfunction_sb_sLcR::synapse0x329fd00() {
   return (neuron0x3290ae0()*0.0122337);
}

double NNfunction_sb_sLcR::synapse0x32a0380() {
   return (neuron0x3290d00()*0.0227419);
}

double NNfunction_sb_sLcR::synapse0x32a03c0() {
   return (neuron0x3291040()*0.0309926);
}

double NNfunction_sb_sLcR::synapse0x32a0400() {
   return (neuron0x3291380()*-0.00377713);
}

double NNfunction_sb_sLcR::synapse0x32a0440() {
   return (neuron0x32916c0()*-0.0228659);
}

double NNfunction_sb_sLcR::synapse0x32a0480() {
   return (neuron0x3291a00()*-0.000833783);
}

double NNfunction_sb_sLcR::synapse0x32a04c0() {
   return (neuron0x3291d40()*0.0107398);
}

double NNfunction_sb_sLcR::synapse0x32a0840() {
   return (neuron0x328d180()*0.260943);
}

double NNfunction_sb_sLcR::synapse0x32a0880() {
   return (neuron0x328d4c0()*0.344249);
}

double NNfunction_sb_sLcR::synapse0x32a08c0() {
   return (neuron0x328d800()*0.334421);
}

double NNfunction_sb_sLcR::synapse0x32a0900() {
   return (neuron0x328db40()*0.431376);
}

double NNfunction_sb_sLcR::synapse0x32a0940() {
   return (neuron0x328de80()*0.0990971);
}

double NNfunction_sb_sLcR::synapse0x32a0980() {
   return (neuron0x328e1c0()*-0.144354);
}

double NNfunction_sb_sLcR::synapse0x32a09c0() {
   return (neuron0x328e500()*0.557536);
}

double NNfunction_sb_sLcR::synapse0x32a0a00() {
   return (neuron0x328e840()*0.608448);
}

double NNfunction_sb_sLcR::synapse0x32a0a40() {
   return (neuron0x328eb80()*-0.415618);
}

double NNfunction_sb_sLcR::synapse0x3298c00() {
   return (neuron0x328eec0()*-0.0200929);
}

double NNfunction_sb_sLcR::synapse0x3298c40() {
   return (neuron0x328f200()*0.0303916);
}

double NNfunction_sb_sLcR::synapse0x3298c80() {
   return (neuron0x328f540()*0.393403);
}

double NNfunction_sb_sLcR::synapse0x3298cc0() {
   return (neuron0x328f880()*-0.697009);
}

double NNfunction_sb_sLcR::synapse0x3298d00() {
   return (neuron0x328fbc0()*0.182378);
}

double NNfunction_sb_sLcR::synapse0x3298d40() {
   return (neuron0x328ff00()*-0.331172);
}

double NNfunction_sb_sLcR::synapse0x3298d80() {
   return (neuron0x3290240()*-0.12472);
}

double NNfunction_sb_sLcR::synapse0x32a0690() {
   return (neuron0x3290580()*-0.0034464);
}

double NNfunction_sb_sLcR::synapse0x32a06d0() {
   return (neuron0x3290ae0()*0.18942);
}

double NNfunction_sb_sLcR::synapse0x3298ed0() {
   return (neuron0x3290d00()*0.0518429);
}

double NNfunction_sb_sLcR::synapse0x3298f10() {
   return (neuron0x3291040()*-0.00786944);
}

double NNfunction_sb_sLcR::synapse0x3298f50() {
   return (neuron0x3291380()*0.0278877);
}

double NNfunction_sb_sLcR::synapse0x3298f90() {
   return (neuron0x32916c0()*0.228199);
}

double NNfunction_sb_sLcR::synapse0x3298fd0() {
   return (neuron0x3291a00()*0.34828);
}

double NNfunction_sb_sLcR::synapse0x3299010() {
   return (neuron0x3291d40()*0.519782);
}

double NNfunction_sb_sLcR::synapse0x3299390() {
   return (neuron0x328d180()*-0.165658);
}

double NNfunction_sb_sLcR::synapse0x32993d0() {
   return (neuron0x328d4c0()*0.232469);
}

double NNfunction_sb_sLcR::synapse0x3299410() {
   return (neuron0x328d800()*-0.203595);
}

double NNfunction_sb_sLcR::synapse0x3299450() {
   return (neuron0x328db40()*0.753355);
}

double NNfunction_sb_sLcR::synapse0x3299490() {
   return (neuron0x328de80()*0.0794656);
}

double NNfunction_sb_sLcR::synapse0x32994d0() {
   return (neuron0x328e1c0()*-0.0882989);
}

double NNfunction_sb_sLcR::synapse0x3299510() {
   return (neuron0x328e500()*0.0329251);
}

double NNfunction_sb_sLcR::synapse0x3299550() {
   return (neuron0x328e840()*0.0842286);
}

double NNfunction_sb_sLcR::synapse0x3299590() {
   return (neuron0x328eb80()*0.0257187);
}

double NNfunction_sb_sLcR::synapse0x32995d0() {
   return (neuron0x328eec0()*0.063817);
}

double NNfunction_sb_sLcR::synapse0x3299610() {
   return (neuron0x328f200()*0.232206);
}

double NNfunction_sb_sLcR::synapse0x3299650() {
   return (neuron0x328f540()*-0.00948786);
}

double NNfunction_sb_sLcR::synapse0x3299690() {
   return (neuron0x328f880()*-0.142825);
}

double NNfunction_sb_sLcR::synapse0x32996d0() {
   return (neuron0x328fbc0()*0.0453665);
}

double NNfunction_sb_sLcR::synapse0x3299710() {
   return (neuron0x328ff00()*-0.23278);
}

double NNfunction_sb_sLcR::synapse0x3299750() {
   return (neuron0x3290240()*0.142516);
}

double NNfunction_sb_sLcR::synapse0x32991e0() {
   return (neuron0x3290580()*-0.0178278);
}

double NNfunction_sb_sLcR::synapse0x3299220() {
   return (neuron0x3290ae0()*-0.0118648);
}

double NNfunction_sb_sLcR::synapse0x32998a0() {
   return (neuron0x3290d00()*0.29888);
}

double NNfunction_sb_sLcR::synapse0x32998e0() {
   return (neuron0x3291040()*-0.0137486);
}

double NNfunction_sb_sLcR::synapse0x3299920() {
   return (neuron0x3291380()*0.0407826);
}

double NNfunction_sb_sLcR::synapse0x3299960() {
   return (neuron0x32916c0()*-0.108931);
}

double NNfunction_sb_sLcR::synapse0x32999a0() {
   return (neuron0x3291a00()*-0.117658);
}

double NNfunction_sb_sLcR::synapse0x32999e0() {
   return (neuron0x3291d40()*0.0809111);
}

double NNfunction_sb_sLcR::synapse0x3299bb0() {
   return (neuron0x328d180()*-0.06628);
}

double NNfunction_sb_sLcR::synapse0x32a2c40() {
   return (neuron0x328d4c0()*-0.0385363);
}

double NNfunction_sb_sLcR::synapse0x32a2c80() {
   return (neuron0x328d800()*0.208019);
}

double NNfunction_sb_sLcR::synapse0x32a2cc0() {
   return (neuron0x328db40()*0.737408);
}

double NNfunction_sb_sLcR::synapse0x32a2d00() {
   return (neuron0x328de80()*-0.106732);
}

double NNfunction_sb_sLcR::synapse0x32a2d40() {
   return (neuron0x328e1c0()*0.100217);
}

double NNfunction_sb_sLcR::synapse0x32a2d80() {
   return (neuron0x328e500()*0.00657071);
}

double NNfunction_sb_sLcR::synapse0x32a2dc0() {
   return (neuron0x328e840()*0.159756);
}

double NNfunction_sb_sLcR::synapse0x32a2e00() {
   return (neuron0x328eb80()*0.0534075);
}

double NNfunction_sb_sLcR::synapse0x32a2e40() {
   return (neuron0x328eec0()*-0.134936);
}

double NNfunction_sb_sLcR::synapse0x32a2e80() {
   return (neuron0x328f200()*0.0793165);
}

double NNfunction_sb_sLcR::synapse0x32a2ec0() {
   return (neuron0x328f540()*-0.0050847);
}

double NNfunction_sb_sLcR::synapse0x32a2f00() {
   return (neuron0x328f880()*-1.37731);
}

double NNfunction_sb_sLcR::synapse0x32a2f40() {
   return (neuron0x328fbc0()*0.0235812);
}

double NNfunction_sb_sLcR::synapse0x32a2f80() {
   return (neuron0x328ff00()*-0.0254282);
}

double NNfunction_sb_sLcR::synapse0x32a2fc0() {
   return (neuron0x3290240()*0.283188);
}

double NNfunction_sb_sLcR::synapse0x32a2a90() {
   return (neuron0x3290580()*0.122971);
}

double NNfunction_sb_sLcR::synapse0x32a2ad0() {
   return (neuron0x3290ae0()*-0.32768);
}

double NNfunction_sb_sLcR::synapse0x32a3110() {
   return (neuron0x3290d00()*0.0444149);
}

double NNfunction_sb_sLcR::synapse0x32a3150() {
   return (neuron0x3291040()*0.0265982);
}

double NNfunction_sb_sLcR::synapse0x32a3190() {
   return (neuron0x3291380()*0.0218143);
}

double NNfunction_sb_sLcR::synapse0x32a31d0() {
   return (neuron0x32916c0()*-0.241629);
}

double NNfunction_sb_sLcR::synapse0x32a3210() {
   return (neuron0x3291a00()*-0.0619122);
}

double NNfunction_sb_sLcR::synapse0x32a3250() {
   return (neuron0x3291d40()*0.056895);
}

double NNfunction_sb_sLcR::synapse0x32a35d0() {
   return (neuron0x328d180()*-0.0110622);
}

double NNfunction_sb_sLcR::synapse0x32a3610() {
   return (neuron0x328d4c0()*-0.141119);
}

double NNfunction_sb_sLcR::synapse0x32a3650() {
   return (neuron0x328d800()*-0.15084);
}

double NNfunction_sb_sLcR::synapse0x32a3690() {
   return (neuron0x328db40()*0.441387);
}

double NNfunction_sb_sLcR::synapse0x32a36d0() {
   return (neuron0x328de80()*-1.02646);
}

double NNfunction_sb_sLcR::synapse0x32a3710() {
   return (neuron0x328e1c0()*-0.0608994);
}

double NNfunction_sb_sLcR::synapse0x32a3750() {
   return (neuron0x328e500()*-0.702773);
}

double NNfunction_sb_sLcR::synapse0x32a3790() {
   return (neuron0x328e840()*-0.186656);
}

double NNfunction_sb_sLcR::synapse0x32a37d0() {
   return (neuron0x328eb80()*0.00296398);
}

double NNfunction_sb_sLcR::synapse0x32a3810() {
   return (neuron0x328eec0()*-0.120398);
}

double NNfunction_sb_sLcR::synapse0x32a3850() {
   return (neuron0x328f200()*0.00037415);
}

double NNfunction_sb_sLcR::synapse0x32a3890() {
   return (neuron0x328f540()*-0.485987);
}

double NNfunction_sb_sLcR::synapse0x32a38d0() {
   return (neuron0x328f880()*-0.522319);
}

double NNfunction_sb_sLcR::synapse0x32a3910() {
   return (neuron0x328fbc0()*0.0651998);
}

double NNfunction_sb_sLcR::synapse0x32a3950() {
   return (neuron0x328ff00()*0.445974);
}

double NNfunction_sb_sLcR::synapse0x32a3990() {
   return (neuron0x3290240()*0.508772);
}

double NNfunction_sb_sLcR::synapse0x32a3420() {
   return (neuron0x3290580()*-0.156784);
}

double NNfunction_sb_sLcR::synapse0x32a3460() {
   return (neuron0x3290ae0()*-0.369238);
}

double NNfunction_sb_sLcR::synapse0x32a3ae0() {
   return (neuron0x3290d00()*-0.0924755);
}

double NNfunction_sb_sLcR::synapse0x32a3b20() {
   return (neuron0x3291040()*-0.0248424);
}

double NNfunction_sb_sLcR::synapse0x32a3b60() {
   return (neuron0x3291380()*-0.275241);
}

double NNfunction_sb_sLcR::synapse0x32a3ba0() {
   return (neuron0x32916c0()*0.312926);
}

double NNfunction_sb_sLcR::synapse0x32a3be0() {
   return (neuron0x3291a00()*0.182717);
}

double NNfunction_sb_sLcR::synapse0x32a3c20() {
   return (neuron0x3291d40()*-0.183172);
}

double NNfunction_sb_sLcR::synapse0x32a3fa0() {
   return (neuron0x328d180()*0.00475036);
}

double NNfunction_sb_sLcR::synapse0x32a3fe0() {
   return (neuron0x328d4c0()*0.00394808);
}

double NNfunction_sb_sLcR::synapse0x32a4020() {
   return (neuron0x328d800()*-0.00105462);
}

double NNfunction_sb_sLcR::synapse0x32a4060() {
   return (neuron0x328db40()*-0.192894);
}

double NNfunction_sb_sLcR::synapse0x32a40a0() {
   return (neuron0x328de80()*-0.0235745);
}

double NNfunction_sb_sLcR::synapse0x32a40e0() {
   return (neuron0x328e1c0()*-0.0354619);
}

double NNfunction_sb_sLcR::synapse0x32a4120() {
   return (neuron0x328e500()*0.0450826);
}

double NNfunction_sb_sLcR::synapse0x32a4160() {
   return (neuron0x328e840()*0.00329317);
}

double NNfunction_sb_sLcR::synapse0x32a41a0() {
   return (neuron0x328eb80()*-0.0105421);
}

double NNfunction_sb_sLcR::synapse0x32a41e0() {
   return (neuron0x328eec0()*0.0183998);
}

double NNfunction_sb_sLcR::synapse0x32a4220() {
   return (neuron0x328f200()*-0.0208299);
}

double NNfunction_sb_sLcR::synapse0x32a4260() {
   return (neuron0x328f540()*-0.024116);
}

double NNfunction_sb_sLcR::synapse0x32a42a0() {
   return (neuron0x328f880()*0.47449);
}

double NNfunction_sb_sLcR::synapse0x32a42e0() {
   return (neuron0x328fbc0()*0.013427);
}

double NNfunction_sb_sLcR::synapse0x32a4320() {
   return (neuron0x328ff00()*-0.00783809);
}

double NNfunction_sb_sLcR::synapse0x32a4360() {
   return (neuron0x3290240()*1.10146);
}

double NNfunction_sb_sLcR::synapse0x32a3df0() {
   return (neuron0x3290580()*0.0116006);
}

double NNfunction_sb_sLcR::synapse0x32a3e30() {
   return (neuron0x3290ae0()*-0.0307861);
}

double NNfunction_sb_sLcR::synapse0x32a44b0() {
   return (neuron0x3290d00()*-0.0152538);
}

double NNfunction_sb_sLcR::synapse0x32a44f0() {
   return (neuron0x3291040()*0.00466741);
}

double NNfunction_sb_sLcR::synapse0x32a4530() {
   return (neuron0x3291380()*0.0292867);
}

double NNfunction_sb_sLcR::synapse0x32a4570() {
   return (neuron0x32916c0()*-0.0220162);
}

double NNfunction_sb_sLcR::synapse0x32a45b0() {
   return (neuron0x3291a00()*0.00324852);
}

double NNfunction_sb_sLcR::synapse0x32a45f0() {
   return (neuron0x3291d40()*-0.0201135);
}

double NNfunction_sb_sLcR::synapse0x32a4970() {
   return (neuron0x328d180()*-0.290691);
}

double NNfunction_sb_sLcR::synapse0x32a49b0() {
   return (neuron0x328d4c0()*-0.759101);
}

double NNfunction_sb_sLcR::synapse0x32a49f0() {
   return (neuron0x328d800()*0.459128);
}

double NNfunction_sb_sLcR::synapse0x32a4a30() {
   return (neuron0x328db40()*0.446238);
}

double NNfunction_sb_sLcR::synapse0x32a4a70() {
   return (neuron0x328de80()*0.0052202);
}

double NNfunction_sb_sLcR::synapse0x32a4ab0() {
   return (neuron0x328e1c0()*-0.444314);
}

double NNfunction_sb_sLcR::synapse0x32a4af0() {
   return (neuron0x328e500()*0.74384);
}

double NNfunction_sb_sLcR::synapse0x32a4b30() {
   return (neuron0x328e840()*-0.188727);
}

double NNfunction_sb_sLcR::synapse0x32a4b70() {
   return (neuron0x328eb80()*0.40292);
}

double NNfunction_sb_sLcR::synapse0x32a4bb0() {
   return (neuron0x328eec0()*0.343814);
}

double NNfunction_sb_sLcR::synapse0x32a4bf0() {
   return (neuron0x328f200()*0.384983);
}

double NNfunction_sb_sLcR::synapse0x32a4c30() {
   return (neuron0x328f540()*-0.749114);
}

double NNfunction_sb_sLcR::synapse0x32a4c70() {
   return (neuron0x328f880()*-0.330864);
}

double NNfunction_sb_sLcR::synapse0x32a4cb0() {
   return (neuron0x328fbc0()*-0.436265);
}

double NNfunction_sb_sLcR::synapse0x32a4cf0() {
   return (neuron0x328ff00()*-0.0700273);
}

double NNfunction_sb_sLcR::synapse0x32a4d30() {
   return (neuron0x3290240()*-0.842006);
}

double NNfunction_sb_sLcR::synapse0x32a47c0() {
   return (neuron0x3290580()*-0.163708);
}

double NNfunction_sb_sLcR::synapse0x32a4800() {
   return (neuron0x3290ae0()*1.18839);
}

double NNfunction_sb_sLcR::synapse0x32a4e80() {
   return (neuron0x3290d00()*-0.406696);
}

double NNfunction_sb_sLcR::synapse0x32a4ec0() {
   return (neuron0x3291040()*0.489827);
}

double NNfunction_sb_sLcR::synapse0x32a4f00() {
   return (neuron0x3291380()*0.588913);
}

double NNfunction_sb_sLcR::synapse0x32a4f40() {
   return (neuron0x32916c0()*-0.0128032);
}

double NNfunction_sb_sLcR::synapse0x32a4f80() {
   return (neuron0x3291a00()*-0.629147);
}

double NNfunction_sb_sLcR::synapse0x32a4fc0() {
   return (neuron0x3291d40()*0.0601764);
}

double NNfunction_sb_sLcR::synapse0x32a5340() {
   return (neuron0x328d180()*-0.256044);
}

double NNfunction_sb_sLcR::synapse0x32a5380() {
   return (neuron0x328d4c0()*-0.586276);
}

double NNfunction_sb_sLcR::synapse0x32a53c0() {
   return (neuron0x328d800()*0.269507);
}

double NNfunction_sb_sLcR::synapse0x32a5400() {
   return (neuron0x328db40()*0.832962);
}

double NNfunction_sb_sLcR::synapse0x32a5440() {
   return (neuron0x328de80()*-0.115349);
}

double NNfunction_sb_sLcR::synapse0x32a5480() {
   return (neuron0x328e1c0()*-0.193485);
}

double NNfunction_sb_sLcR::synapse0x32a54c0() {
   return (neuron0x328e500()*0.216389);
}

double NNfunction_sb_sLcR::synapse0x32a5500() {
   return (neuron0x328e840()*0.139297);
}

double NNfunction_sb_sLcR::synapse0x32a5540() {
   return (neuron0x328eb80()*0.249688);
}

double NNfunction_sb_sLcR::synapse0x32a5580() {
   return (neuron0x328eec0()*-0.58637);
}

double NNfunction_sb_sLcR::synapse0x32a55c0() {
   return (neuron0x328f200()*0.348345);
}

double NNfunction_sb_sLcR::synapse0x32a5600() {
   return (neuron0x328f540()*0.238236);
}

double NNfunction_sb_sLcR::synapse0x32a5640() {
   return (neuron0x328f880()*1.6868);
}

double NNfunction_sb_sLcR::synapse0x32a5680() {
   return (neuron0x328fbc0()*0.221564);
}

double NNfunction_sb_sLcR::synapse0x32a56c0() {
   return (neuron0x328ff00()*-0.699784);
}

double NNfunction_sb_sLcR::synapse0x32a5700() {
   return (neuron0x3290240()*-0.594367);
}

double NNfunction_sb_sLcR::synapse0x32a5190() {
   return (neuron0x3290580()*0.166456);
}

double NNfunction_sb_sLcR::synapse0x32a51d0() {
   return (neuron0x3290ae0()*0.215898);
}

double NNfunction_sb_sLcR::synapse0x32a5850() {
   return (neuron0x3290d00()*-0.0537569);
}

double NNfunction_sb_sLcR::synapse0x32a5890() {
   return (neuron0x3291040()*0.43667);
}

double NNfunction_sb_sLcR::synapse0x32a58d0() {
   return (neuron0x3291380()*-0.0810844);
}

double NNfunction_sb_sLcR::synapse0x32a5910() {
   return (neuron0x32916c0()*-0.255154);
}

double NNfunction_sb_sLcR::synapse0x32a5950() {
   return (neuron0x3291a00()*-0.103839);
}

double NNfunction_sb_sLcR::synapse0x32a5990() {
   return (neuron0x3291d40()*0.196324);
}

double NNfunction_sb_sLcR::synapse0x32a5d10() {
   return (neuron0x328d180()*-0.423013);
}

double NNfunction_sb_sLcR::synapse0x32a5d50() {
   return (neuron0x328d4c0()*0.0861675);
}

double NNfunction_sb_sLcR::synapse0x32a5d90() {
   return (neuron0x328d800()*0.00216158);
}

double NNfunction_sb_sLcR::synapse0x32a5dd0() {
   return (neuron0x328db40()*0.618158);
}

double NNfunction_sb_sLcR::synapse0x32a5e10() {
   return (neuron0x328de80()*0.121434);
}

double NNfunction_sb_sLcR::synapse0x32a5e50() {
   return (neuron0x328e1c0()*-0.0870938);
}

double NNfunction_sb_sLcR::synapse0x32a5e90() {
   return (neuron0x328e500()*-0.345833);
}

double NNfunction_sb_sLcR::synapse0x32a5ed0() {
   return (neuron0x328e840()*-0.333779);
}

double NNfunction_sb_sLcR::synapse0x32a5f10() {
   return (neuron0x328eb80()*0.296604);
}

double NNfunction_sb_sLcR::synapse0x32a5f50() {
   return (neuron0x328eec0()*-0.197007);
}

double NNfunction_sb_sLcR::synapse0x32a5f90() {
   return (neuron0x328f200()*0.223517);
}

double NNfunction_sb_sLcR::synapse0x32a5fd0() {
   return (neuron0x328f540()*-0.0854371);
}

double NNfunction_sb_sLcR::synapse0x32a6010() {
   return (neuron0x328f880()*0.0950212);
}

double NNfunction_sb_sLcR::synapse0x32a6050() {
   return (neuron0x328fbc0()*-0.363339);
}

double NNfunction_sb_sLcR::synapse0x32a6090() {
   return (neuron0x328ff00()*0.373692);
}

double NNfunction_sb_sLcR::synapse0x32a60d0() {
   return (neuron0x3290240()*-0.141824);
}

double NNfunction_sb_sLcR::synapse0x32a5b60() {
   return (neuron0x3290580()*-0.158763);
}

double NNfunction_sb_sLcR::synapse0x32a5ba0() {
   return (neuron0x3290ae0()*-0.058872);
}

double NNfunction_sb_sLcR::synapse0x32a6220() {
   return (neuron0x3290d00()*0.00992243);
}

double NNfunction_sb_sLcR::synapse0x32a6260() {
   return (neuron0x3291040()*0.335911);
}

double NNfunction_sb_sLcR::synapse0x32a62a0() {
   return (neuron0x3291380()*0.111808);
}

double NNfunction_sb_sLcR::synapse0x32a62e0() {
   return (neuron0x32916c0()*0.0431741);
}

double NNfunction_sb_sLcR::synapse0x32a6320() {
   return (neuron0x3291a00()*-0.177037);
}

double NNfunction_sb_sLcR::synapse0x32a6360() {
   return (neuron0x3291d40()*0.0389461);
}

double NNfunction_sb_sLcR::synapse0x32a66e0() {
   return (neuron0x328d180()*-0.0115885);
}

double NNfunction_sb_sLcR::synapse0x32a6720() {
   return (neuron0x328d4c0()*-0.253603);
}

double NNfunction_sb_sLcR::synapse0x32a6760() {
   return (neuron0x328d800()*-0.743102);
}

double NNfunction_sb_sLcR::synapse0x32a67a0() {
   return (neuron0x328db40()*-0.0928513);
}

double NNfunction_sb_sLcR::synapse0x32a67e0() {
   return (neuron0x328de80()*0.00298919);
}

double NNfunction_sb_sLcR::synapse0x32a6820() {
   return (neuron0x328e1c0()*-0.232575);
}

double NNfunction_sb_sLcR::synapse0x32a6860() {
   return (neuron0x328e500()*-0.0190869);
}

double NNfunction_sb_sLcR::synapse0x32a68a0() {
   return (neuron0x328e840()*0.16573);
}

double NNfunction_sb_sLcR::synapse0x32a68e0() {
   return (neuron0x328eb80()*-0.0548922);
}

double NNfunction_sb_sLcR::synapse0x32a6920() {
   return (neuron0x328eec0()*-0.724531);
}

double NNfunction_sb_sLcR::synapse0x32a6960() {
   return (neuron0x328f200()*0.130808);
}

double NNfunction_sb_sLcR::synapse0x32a69a0() {
   return (neuron0x328f540()*-1.06941);
}

double NNfunction_sb_sLcR::synapse0x32a69e0() {
   return (neuron0x328f880()*0.238359);
}

double NNfunction_sb_sLcR::synapse0x32a6a20() {
   return (neuron0x328fbc0()*-0.0999347);
}

double NNfunction_sb_sLcR::synapse0x32a6a60() {
   return (neuron0x328ff00()*-0.200208);
}

double NNfunction_sb_sLcR::synapse0x32a6aa0() {
   return (neuron0x3290240()*0.193539);
}

double NNfunction_sb_sLcR::synapse0x32a6530() {
   return (neuron0x3290580()*0.0523066);
}

double NNfunction_sb_sLcR::synapse0x32a6570() {
   return (neuron0x3290ae0()*-0.321292);
}

double NNfunction_sb_sLcR::synapse0x32a6bf0() {
   return (neuron0x3290d00()*-0.0721708);
}

double NNfunction_sb_sLcR::synapse0x32a6c30() {
   return (neuron0x3291040()*-0.0783473);
}

double NNfunction_sb_sLcR::synapse0x32a6c70() {
   return (neuron0x3291380()*0.134696);
}

double NNfunction_sb_sLcR::synapse0x32a6cb0() {
   return (neuron0x32916c0()*0.450202);
}

double NNfunction_sb_sLcR::synapse0x32a6cf0() {
   return (neuron0x3291a00()*-0.136027);
}

double NNfunction_sb_sLcR::synapse0x32a6d30() {
   return (neuron0x3291d40()*0.232068);
}

double NNfunction_sb_sLcR::synapse0x32a70b0() {
   return (neuron0x328d180()*0.0116913);
}

double NNfunction_sb_sLcR::synapse0x32a70f0() {
   return (neuron0x328d4c0()*0.00776717);
}

double NNfunction_sb_sLcR::synapse0x32a7130() {
   return (neuron0x328d800()*0.00525926);
}

double NNfunction_sb_sLcR::synapse0x32a7170() {
   return (neuron0x328db40()*-5.95226);
}

double NNfunction_sb_sLcR::synapse0x32a71b0() {
   return (neuron0x328de80()*-0.0110418);
}

double NNfunction_sb_sLcR::synapse0x32a71f0() {
   return (neuron0x328e1c0()*-0.0257261);
}

double NNfunction_sb_sLcR::synapse0x32a7230() {
   return (neuron0x328e500()*0.0482852);
}

double NNfunction_sb_sLcR::synapse0x32a7270() {
   return (neuron0x328e840()*-0.00777257);
}

double NNfunction_sb_sLcR::synapse0x32a72b0() {
   return (neuron0x328eb80()*-0.0589802);
}

double NNfunction_sb_sLcR::synapse0x32a72f0() {
   return (neuron0x328eec0()*-0.0119769);
}

double NNfunction_sb_sLcR::synapse0x32a7330() {
   return (neuron0x328f200()*0.0282031);
}

double NNfunction_sb_sLcR::synapse0x32a7370() {
   return (neuron0x328f540()*0.0312067);
}

double NNfunction_sb_sLcR::synapse0x32a73b0() {
   return (neuron0x328f880()*0.230131);
}

double NNfunction_sb_sLcR::synapse0x32a73f0() {
   return (neuron0x328fbc0()*0.0187571);
}

double NNfunction_sb_sLcR::synapse0x32a7430() {
   return (neuron0x328ff00()*0.0633381);
}

double NNfunction_sb_sLcR::synapse0x32a7470() {
   return (neuron0x3290240()*-0.243628);
}

double NNfunction_sb_sLcR::synapse0x32a6f00() {
   return (neuron0x3290580()*-0.00778156);
}

double NNfunction_sb_sLcR::synapse0x32a6f40() {
   return (neuron0x3290ae0()*-0.0522071);
}

double NNfunction_sb_sLcR::synapse0x32a75c0() {
   return (neuron0x3290d00()*0.0129555);
}

double NNfunction_sb_sLcR::synapse0x32a7600() {
   return (neuron0x3291040()*-0.0306288);
}

double NNfunction_sb_sLcR::synapse0x32a7640() {
   return (neuron0x3291380()*-0.0191926);
}

double NNfunction_sb_sLcR::synapse0x32a7680() {
   return (neuron0x32916c0()*0.0128975);
}

double NNfunction_sb_sLcR::synapse0x32a76c0() {
   return (neuron0x3291a00()*0.000821596);
}

double NNfunction_sb_sLcR::synapse0x32a7700() {
   return (neuron0x3291d40()*0.000441007);
}

double NNfunction_sb_sLcR::synapse0x32a7a80() {
   return (neuron0x328d180()*0.36224);
}

double NNfunction_sb_sLcR::synapse0x329c050() {
   return (neuron0x328d4c0()*0.33762);
}

double NNfunction_sb_sLcR::synapse0x329c090() {
   return (neuron0x328d800()*-0.126386);
}

double NNfunction_sb_sLcR::synapse0x329c0d0() {
   return (neuron0x328db40()*-0.0934718);
}

double NNfunction_sb_sLcR::synapse0x329c320() {
   return (neuron0x328de80()*0.120799);
}

double NNfunction_sb_sLcR::synapse0x329c360() {
   return (neuron0x328e1c0()*0.334402);
}

double NNfunction_sb_sLcR::synapse0x329c3a0() {
   return (neuron0x328e500()*-0.38143);
}

double NNfunction_sb_sLcR::synapse0x329c5f0() {
   return (neuron0x328e840()*-0.0224772);
}

double NNfunction_sb_sLcR::synapse0x329c630() {
   return (neuron0x328eb80()*0.760773);
}

double NNfunction_sb_sLcR::synapse0x329c880() {
   return (neuron0x328eec0()*-0.800204);
}

double NNfunction_sb_sLcR::synapse0x329c8c0() {
   return (neuron0x328f200()*0.217742);
}

double NNfunction_sb_sLcR::synapse0x329c900() {
   return (neuron0x328f540()*-0.250524);
}

double NNfunction_sb_sLcR::synapse0x329cb50() {
   return (neuron0x328f880()*-0.397656);
}

double NNfunction_sb_sLcR::synapse0x329cb90() {
   return (neuron0x328fbc0()*0.445796);
}

double NNfunction_sb_sLcR::synapse0x329cde0() {
   return (neuron0x328ff00()*-0.47156);
}

double NNfunction_sb_sLcR::synapse0x329ce20() {
   return (neuron0x3290240()*-1.40237);
}

double NNfunction_sb_sLcR::synapse0x32a78d0() {
   return (neuron0x3290580()*-0.0906923);
}

double NNfunction_sb_sLcR::synapse0x32a7910() {
   return (neuron0x3290ae0()*-0.20145);
}

double NNfunction_sb_sLcR::synapse0x329cf70() {
   return (neuron0x3290d00()*0.0378554);
}

double NNfunction_sb_sLcR::synapse0x329d480() {
   return (neuron0x3291040()*0.0209007);
}

double NNfunction_sb_sLcR::synapse0x329d4c0() {
   return (neuron0x3291380()*-0.467083);
}

double NNfunction_sb_sLcR::synapse0x329d500() {
   return (neuron0x32916c0()*0.195418);
}

double NNfunction_sb_sLcR::synapse0x329d750() {
   return (neuron0x3291a00()*-0.0954621);
}

double NNfunction_sb_sLcR::synapse0x329d790() {
   return (neuron0x3291d40()*-0.158881);
}

double NNfunction_sb_sLcR::synapse0x329d040() {
   return (neuron0x328d180()*0.309898);
}

double NNfunction_sb_sLcR::synapse0x329d080() {
   return (neuron0x328d4c0()*0.177033);
}

double NNfunction_sb_sLcR::synapse0x329d0c0() {
   return (neuron0x328d800()*0.0137458);
}

double NNfunction_sb_sLcR::synapse0x329d100() {
   return (neuron0x328db40()*0.612063);
}

double NNfunction_sb_sLcR::synapse0x329da80() {
   return (neuron0x328de80()*0.00694575);
}

double NNfunction_sb_sLcR::synapse0x32a9dd0() {
   return (neuron0x328e1c0()*0.20923);
}

double NNfunction_sb_sLcR::synapse0x32a9e10() {
   return (neuron0x328e500()*-0.053271);
}

double NNfunction_sb_sLcR::synapse0x32a9e50() {
   return (neuron0x328e840()*-0.321523);
}

double NNfunction_sb_sLcR::synapse0x32a9e90() {
   return (neuron0x328eb80()*0.0912072);
}

double NNfunction_sb_sLcR::synapse0x32a9ed0() {
   return (neuron0x328eec0()*-0.0720397);
}

double NNfunction_sb_sLcR::synapse0x32a9f10() {
   return (neuron0x328f200()*-0.189501);
}

double NNfunction_sb_sLcR::synapse0x32a9f50() {
   return (neuron0x328f540()*0.366117);
}

double NNfunction_sb_sLcR::synapse0x32a9f90() {
   return (neuron0x328f880()*-0.0183928);
}

double NNfunction_sb_sLcR::synapse0x32a9fd0() {
   return (neuron0x328fbc0()*0.0557629);
}

double NNfunction_sb_sLcR::synapse0x32aa010() {
   return (neuron0x328ff00()*0.226992);
}

double NNfunction_sb_sLcR::synapse0x32aa050() {
   return (neuron0x3290240()*0.263376);
}

double NNfunction_sb_sLcR::synapse0x329d960() {
   return (neuron0x3290580()*0.0426997);
}

double NNfunction_sb_sLcR::synapse0x329d9a0() {
   return (neuron0x3290ae0()*0.254366);
}

double NNfunction_sb_sLcR::synapse0x32aa1a0() {
   return (neuron0x3290d00()*-0.0284898);
}

double NNfunction_sb_sLcR::synapse0x32aa1e0() {
   return (neuron0x3291040()*0.0684269);
}

double NNfunction_sb_sLcR::synapse0x32aa220() {
   return (neuron0x3291380()*0.0872156);
}

double NNfunction_sb_sLcR::synapse0x32aa260() {
   return (neuron0x32916c0()*0.255752);
}

double NNfunction_sb_sLcR::synapse0x32aa2a0() {
   return (neuron0x3291a00()*-0.0303248);
}

double NNfunction_sb_sLcR::synapse0x32aa2e0() {
   return (neuron0x3291d40()*0.105334);
}

double NNfunction_sb_sLcR::synapse0x32aa660() {
   return (neuron0x328d180()*0.554946);
}

double NNfunction_sb_sLcR::synapse0x32aa6a0() {
   return (neuron0x328d4c0()*0.0472807);
}

double NNfunction_sb_sLcR::synapse0x32aa6e0() {
   return (neuron0x328d800()*-0.334963);
}

double NNfunction_sb_sLcR::synapse0x32aa720() {
   return (neuron0x328db40()*0.816962);
}

double NNfunction_sb_sLcR::synapse0x32aa760() {
   return (neuron0x328de80()*-0.276656);
}

double NNfunction_sb_sLcR::synapse0x32aa7a0() {
   return (neuron0x328e1c0()*0.818139);
}

double NNfunction_sb_sLcR::synapse0x32aa7e0() {
   return (neuron0x328e500()*0.116841);
}

double NNfunction_sb_sLcR::synapse0x32aa820() {
   return (neuron0x328e840()*0.324155);
}

double NNfunction_sb_sLcR::synapse0x32aa860() {
   return (neuron0x328eb80()*-0.248733);
}

double NNfunction_sb_sLcR::synapse0x32aa8a0() {
   return (neuron0x328eec0()*-0.913295);
}

double NNfunction_sb_sLcR::synapse0x32aa8e0() {
   return (neuron0x328f200()*-0.270133);
}

double NNfunction_sb_sLcR::synapse0x32aa920() {
   return (neuron0x328f540()*0.4302);
}

double NNfunction_sb_sLcR::synapse0x32aa960() {
   return (neuron0x328f880()*0.000661542);
}

double NNfunction_sb_sLcR::synapse0x32aa9a0() {
   return (neuron0x328fbc0()*0.180909);
}

double NNfunction_sb_sLcR::synapse0x32aa9e0() {
   return (neuron0x328ff00()*0.797573);
}

double NNfunction_sb_sLcR::synapse0x32aaa20() {
   return (neuron0x3290240()*0.0130463);
}

double NNfunction_sb_sLcR::synapse0x32aa4b0() {
   return (neuron0x3290580()*0.259241);
}

double NNfunction_sb_sLcR::synapse0x32aa4f0() {
   return (neuron0x3290ae0()*-0.0646205);
}

double NNfunction_sb_sLcR::synapse0x32aab70() {
   return (neuron0x3290d00()*-0.500502);
}

double NNfunction_sb_sLcR::synapse0x32aabb0() {
   return (neuron0x3291040()*-0.51179);
}

double NNfunction_sb_sLcR::synapse0x32aabf0() {
   return (neuron0x3291380()*-0.10223);
}

double NNfunction_sb_sLcR::synapse0x32aac30() {
   return (neuron0x32916c0()*0.161924);
}

double NNfunction_sb_sLcR::synapse0x32aac70() {
   return (neuron0x3291a00()*-0.193693);
}

double NNfunction_sb_sLcR::synapse0x32aacb0() {
   return (neuron0x3291d40()*0.0165002);
}

double NNfunction_sb_sLcR::synapse0x32ab030() {
   return (neuron0x328d180()*-0.297942);
}

double NNfunction_sb_sLcR::synapse0x32ab070() {
   return (neuron0x328d4c0()*0.312033);
}

double NNfunction_sb_sLcR::synapse0x32ab0b0() {
   return (neuron0x328d800()*0.12782);
}

double NNfunction_sb_sLcR::synapse0x32ab0f0() {
   return (neuron0x328db40()*0.196753);
}

double NNfunction_sb_sLcR::synapse0x32ab130() {
   return (neuron0x328de80()*-0.421183);
}

double NNfunction_sb_sLcR::synapse0x32ab170() {
   return (neuron0x328e1c0()*0.133821);
}

double NNfunction_sb_sLcR::synapse0x32ab1b0() {
   return (neuron0x328e500()*0.0436823);
}

double NNfunction_sb_sLcR::synapse0x32ab1f0() {
   return (neuron0x328e840()*0.230762);
}

double NNfunction_sb_sLcR::synapse0x32ab230() {
   return (neuron0x328eb80()*-0.223184);
}

double NNfunction_sb_sLcR::synapse0x32ab270() {
   return (neuron0x328eec0()*0.283502);
}

double NNfunction_sb_sLcR::synapse0x32ab2b0() {
   return (neuron0x328f200()*-0.0211872);
}

double NNfunction_sb_sLcR::synapse0x32ab2f0() {
   return (neuron0x328f540()*-0.563765);
}

double NNfunction_sb_sLcR::synapse0x32ab330() {
   return (neuron0x328f880()*-0.210557);
}

double NNfunction_sb_sLcR::synapse0x32ab370() {
   return (neuron0x328fbc0()*0.242436);
}

double NNfunction_sb_sLcR::synapse0x32ab3b0() {
   return (neuron0x328ff00()*-0.0663231);
}

double NNfunction_sb_sLcR::synapse0x32ab3f0() {
   return (neuron0x3290240()*-0.161911);
}

double NNfunction_sb_sLcR::synapse0x32aae80() {
   return (neuron0x3290580()*0.0493275);
}

double NNfunction_sb_sLcR::synapse0x32aaec0() {
   return (neuron0x3290ae0()*-0.355193);
}

double NNfunction_sb_sLcR::synapse0x32ab540() {
   return (neuron0x3290d00()*0.157612);
}

double NNfunction_sb_sLcR::synapse0x32ab580() {
   return (neuron0x3291040()*1.02982);
}

double NNfunction_sb_sLcR::synapse0x32ab5c0() {
   return (neuron0x3291380()*-0.628568);
}

double NNfunction_sb_sLcR::synapse0x32ab600() {
   return (neuron0x32916c0()*-0.00386768);
}

double NNfunction_sb_sLcR::synapse0x32ab640() {
   return (neuron0x3291a00()*-0.181595);
}

double NNfunction_sb_sLcR::synapse0x32ab680() {
   return (neuron0x3291d40()*-0.0383217);
}

double NNfunction_sb_sLcR::synapse0x32aba00() {
   return (neuron0x328d180()*-0.000184892);
}

double NNfunction_sb_sLcR::synapse0x32aba40() {
   return (neuron0x328d4c0()*-0.268332);
}

double NNfunction_sb_sLcR::synapse0x32aba80() {
   return (neuron0x328d800()*-0.699233);
}

double NNfunction_sb_sLcR::synapse0x32abac0() {
   return (neuron0x328db40()*-0.0951789);
}

double NNfunction_sb_sLcR::synapse0x32abb00() {
   return (neuron0x328de80()*-0.435811);
}

double NNfunction_sb_sLcR::synapse0x32abb40() {
   return (neuron0x328e1c0()*0.434458);
}

double NNfunction_sb_sLcR::synapse0x32abb80() {
   return (neuron0x328e500()*-0.645891);
}

double NNfunction_sb_sLcR::synapse0x32abbc0() {
   return (neuron0x328e840()*-0.311134);
}

double NNfunction_sb_sLcR::synapse0x32abc00() {
   return (neuron0x328eb80()*0.254658);
}

double NNfunction_sb_sLcR::synapse0x32abc40() {
   return (neuron0x328eec0()*0.031457);
}

double NNfunction_sb_sLcR::synapse0x32abc80() {
   return (neuron0x328f200()*0.0333187);
}

double NNfunction_sb_sLcR::synapse0x32abcc0() {
   return (neuron0x328f540()*-1.13677);
}

double NNfunction_sb_sLcR::synapse0x32abd00() {
   return (neuron0x328f880()*0.547686);
}

double NNfunction_sb_sLcR::synapse0x32abd40() {
   return (neuron0x328fbc0()*0.20542);
}

double NNfunction_sb_sLcR::synapse0x32abd80() {
   return (neuron0x328ff00()*0.555471);
}

double NNfunction_sb_sLcR::synapse0x32abdc0() {
   return (neuron0x3290240()*0.744953);
}

double NNfunction_sb_sLcR::synapse0x32ab850() {
   return (neuron0x3290580()*0.181114);
}

double NNfunction_sb_sLcR::synapse0x32ab890() {
   return (neuron0x3290ae0()*-0.231466);
}

double NNfunction_sb_sLcR::synapse0x32abf10() {
   return (neuron0x3290d00()*0.035452);
}

double NNfunction_sb_sLcR::synapse0x32abf50() {
   return (neuron0x3291040()*-0.38019);
}

double NNfunction_sb_sLcR::synapse0x32abf90() {
   return (neuron0x3291380()*0.257297);
}

double NNfunction_sb_sLcR::synapse0x32abfd0() {
   return (neuron0x32916c0()*0.148181);
}

double NNfunction_sb_sLcR::synapse0x32ac010() {
   return (neuron0x3291a00()*-0.126496);
}

double NNfunction_sb_sLcR::synapse0x32ac050() {
   return (neuron0x3291d40()*-0.767071);
}

double NNfunction_sb_sLcR::synapse0x32ac3d0() {
   return (neuron0x328d180()*-0.00917801);
}

double NNfunction_sb_sLcR::synapse0x32ac410() {
   return (neuron0x328d4c0()*-0.0993985);
}

double NNfunction_sb_sLcR::synapse0x32ac450() {
   return (neuron0x328d800()*0.0986859);
}

double NNfunction_sb_sLcR::synapse0x32ac490() {
   return (neuron0x328db40()*-0.00551405);
}

double NNfunction_sb_sLcR::synapse0x32ac4d0() {
   return (neuron0x328de80()*-0.0057096);
}

double NNfunction_sb_sLcR::synapse0x32ac510() {
   return (neuron0x328e1c0()*-0.0127992);
}

double NNfunction_sb_sLcR::synapse0x32ac550() {
   return (neuron0x328e500()*-0.01326);
}

double NNfunction_sb_sLcR::synapse0x32ac590() {
   return (neuron0x328e840()*0.0499397);
}

double NNfunction_sb_sLcR::synapse0x32ac5d0() {
   return (neuron0x328eb80()*0.00326284);
}

double NNfunction_sb_sLcR::synapse0x32ac610() {
   return (neuron0x328eec0()*0.0648431);
}

double NNfunction_sb_sLcR::synapse0x32ac650() {
   return (neuron0x328f200()*0.0445502);
}

double NNfunction_sb_sLcR::synapse0x32ac690() {
   return (neuron0x328f540()*-0.476249);
}

double NNfunction_sb_sLcR::synapse0x32ac6d0() {
   return (neuron0x328f880()*0.161116);
}

double NNfunction_sb_sLcR::synapse0x32ac710() {
   return (neuron0x328fbc0()*0.0906128);
}

double NNfunction_sb_sLcR::synapse0x32ac750() {
   return (neuron0x328ff00()*-0.185462);
}

double NNfunction_sb_sLcR::synapse0x32ac790() {
   return (neuron0x3290240()*0.0331666);
}

double NNfunction_sb_sLcR::synapse0x32ac220() {
   return (neuron0x3290580()*0.0728926);
}

double NNfunction_sb_sLcR::synapse0x32ac260() {
   return (neuron0x3290ae0()*-0.383173);
}

double NNfunction_sb_sLcR::synapse0x32ac8e0() {
   return (neuron0x3290d00()*-0.248702);
}

double NNfunction_sb_sLcR::synapse0x32ac920() {
   return (neuron0x3291040()*-0.0295345);
}

double NNfunction_sb_sLcR::synapse0x32ac960() {
   return (neuron0x3291380()*-0.00265774);
}

double NNfunction_sb_sLcR::synapse0x32ac9a0() {
   return (neuron0x32916c0()*-0.01338);
}

double NNfunction_sb_sLcR::synapse0x32ac9e0() {
   return (neuron0x3291a00()*-0.00852992);
}

double NNfunction_sb_sLcR::synapse0x32aca20() {
   return (neuron0x3291d40()*-0.0608928);
}

double NNfunction_sb_sLcR::synapse0x32acda0() {
   return (neuron0x328d180()*0.806645);
}

double NNfunction_sb_sLcR::synapse0x32acde0() {
   return (neuron0x328d4c0()*0.606603);
}

double NNfunction_sb_sLcR::synapse0x32ace20() {
   return (neuron0x328d800()*0.00492381);
}

double NNfunction_sb_sLcR::synapse0x32ace60() {
   return (neuron0x328db40()*-0.248526);
}

double NNfunction_sb_sLcR::synapse0x32acea0() {
   return (neuron0x328de80()*-0.382849);
}

double NNfunction_sb_sLcR::synapse0x32acee0() {
   return (neuron0x328e1c0()*-0.291446);
}

double NNfunction_sb_sLcR::synapse0x32acf20() {
   return (neuron0x328e500()*0.813631);
}

double NNfunction_sb_sLcR::synapse0x32acf60() {
   return (neuron0x328e840()*-0.116915);
}

double NNfunction_sb_sLcR::synapse0x32acfa0() {
   return (neuron0x328eb80()*0.372292);
}

double NNfunction_sb_sLcR::synapse0x32acfe0() {
   return (neuron0x328eec0()*0.346685);
}

double NNfunction_sb_sLcR::synapse0x32ad020() {
   return (neuron0x328f200()*0.993827);
}

double NNfunction_sb_sLcR::synapse0x32ad060() {
   return (neuron0x328f540()*0.682412);
}

double NNfunction_sb_sLcR::synapse0x32ad0a0() {
   return (neuron0x328f880()*-0.294194);
}

double NNfunction_sb_sLcR::synapse0x32ad0e0() {
   return (neuron0x328fbc0()*-0.100997);
}

double NNfunction_sb_sLcR::synapse0x32ad120() {
   return (neuron0x328ff00()*0.166085);
}

double NNfunction_sb_sLcR::synapse0x32ad160() {
   return (neuron0x3290240()*0.0416457);
}

double NNfunction_sb_sLcR::synapse0x32acbf0() {
   return (neuron0x3290580()*0.466945);
}

double NNfunction_sb_sLcR::synapse0x32acc30() {
   return (neuron0x3290ae0()*-0.437205);
}

double NNfunction_sb_sLcR::synapse0x32ad2b0() {
   return (neuron0x3290d00()*0.0861141);
}

double NNfunction_sb_sLcR::synapse0x32ad2f0() {
   return (neuron0x3291040()*-0.294366);
}

double NNfunction_sb_sLcR::synapse0x32ad330() {
   return (neuron0x3291380()*0.828958);
}

double NNfunction_sb_sLcR::synapse0x32ad370() {
   return (neuron0x32916c0()*0.250933);
}

double NNfunction_sb_sLcR::synapse0x32ad3b0() {
   return (neuron0x3291a00()*-0.393739);
}

double NNfunction_sb_sLcR::synapse0x32ad3f0() {
   return (neuron0x3291d40()*-0.458636);
}

double NNfunction_sb_sLcR::synapse0x32ad770() {
   return (neuron0x328d180()*-0.03276);
}

double NNfunction_sb_sLcR::synapse0x32ad7b0() {
   return (neuron0x328d4c0()*0.00255298);
}

double NNfunction_sb_sLcR::synapse0x32ad7f0() {
   return (neuron0x328d800()*-0.956995);
}

double NNfunction_sb_sLcR::synapse0x32ad830() {
   return (neuron0x328db40()*0.0126211);
}

double NNfunction_sb_sLcR::synapse0x32ad870() {
   return (neuron0x328de80()*-0.000412979);
}

double NNfunction_sb_sLcR::synapse0x32ad8b0() {
   return (neuron0x328e1c0()*-0.110044);
}

double NNfunction_sb_sLcR::synapse0x32ad8f0() {
   return (neuron0x328e500()*-0.0213778);
}

double NNfunction_sb_sLcR::synapse0x32ad930() {
   return (neuron0x328e840()*-0.0617339);
}

double NNfunction_sb_sLcR::synapse0x32ad970() {
   return (neuron0x328eb80()*0.0297443);
}

double NNfunction_sb_sLcR::synapse0x32ad9b0() {
   return (neuron0x328eec0()*0.0604391);
}

double NNfunction_sb_sLcR::synapse0x32ad9f0() {
   return (neuron0x328f200()*-0.0259789);
}

double NNfunction_sb_sLcR::synapse0x32ada30() {
   return (neuron0x328f540()*-0.0252852);
}

double NNfunction_sb_sLcR::synapse0x32ada70() {
   return (neuron0x328f880()*0.365027);
}

double NNfunction_sb_sLcR::synapse0x32adab0() {
   return (neuron0x328fbc0()*-0.0308195);
}

double NNfunction_sb_sLcR::synapse0x32adaf0() {
   return (neuron0x328ff00()*-0.00686679);
}

double NNfunction_sb_sLcR::synapse0x32adb30() {
   return (neuron0x3290240()*-0.10997);
}

double NNfunction_sb_sLcR::synapse0x32ad5c0() {
   return (neuron0x3290580()*-0.0498193);
}

double NNfunction_sb_sLcR::synapse0x32ad600() {
   return (neuron0x3290ae0()*0.0235995);
}

double NNfunction_sb_sLcR::synapse0x32adc80() {
   return (neuron0x3290d00()*0.065274);
}

double NNfunction_sb_sLcR::synapse0x32adcc0() {
   return (neuron0x3291040()*0.0249213);
}

double NNfunction_sb_sLcR::synapse0x32add00() {
   return (neuron0x3291380()*-0.0401019);
}

double NNfunction_sb_sLcR::synapse0x32add40() {
   return (neuron0x32916c0()*-0.00371583);
}

double NNfunction_sb_sLcR::synapse0x32add80() {
   return (neuron0x3291a00()*0.0534683);
}

double NNfunction_sb_sLcR::synapse0x32addc0() {
   return (neuron0x3291d40()*-0.0207536);
}

double NNfunction_sb_sLcR::synapse0x32ae140() {
   return (neuron0x328d180()*-0.208095);
}

double NNfunction_sb_sLcR::synapse0x32ae180() {
   return (neuron0x328d4c0()*0.347175);
}

double NNfunction_sb_sLcR::synapse0x32ae1c0() {
   return (neuron0x328d800()*0.286852);
}

double NNfunction_sb_sLcR::synapse0x32ae200() {
   return (neuron0x328db40()*-0.520775);
}

double NNfunction_sb_sLcR::synapse0x32ae240() {
   return (neuron0x328de80()*-0.235872);
}

double NNfunction_sb_sLcR::synapse0x32ae280() {
   return (neuron0x328e1c0()*0.453991);
}

double NNfunction_sb_sLcR::synapse0x32ae2c0() {
   return (neuron0x328e500()*-0.0733397);
}

double NNfunction_sb_sLcR::synapse0x32ae300() {
   return (neuron0x328e840()*0.156937);
}

double NNfunction_sb_sLcR::synapse0x32ae340() {
   return (neuron0x328eb80()*-0.228083);
}

double NNfunction_sb_sLcR::synapse0x32ae380() {
   return (neuron0x328eec0()*-0.286958);
}

double NNfunction_sb_sLcR::synapse0x32ae3c0() {
   return (neuron0x328f200()*-0.45133);
}

double NNfunction_sb_sLcR::synapse0x32ae400() {
   return (neuron0x328f540()*0.311989);
}

double NNfunction_sb_sLcR::synapse0x32ae440() {
   return (neuron0x328f880()*0.139107);
}

double NNfunction_sb_sLcR::synapse0x32ae480() {
   return (neuron0x328fbc0()*0.276041);
}

double NNfunction_sb_sLcR::synapse0x32ae4c0() {
   return (neuron0x328ff00()*0.0330884);
}

double NNfunction_sb_sLcR::synapse0x32ae500() {
   return (neuron0x3290240()*0.20204);
}

double NNfunction_sb_sLcR::synapse0x32adf90() {
   return (neuron0x3290580()*0.310252);
}

double NNfunction_sb_sLcR::synapse0x32adfd0() {
   return (neuron0x3290ae0()*0.508383);
}

double NNfunction_sb_sLcR::synapse0x32ae650() {
   return (neuron0x3290d00()*-0.590653);
}

double NNfunction_sb_sLcR::synapse0x32ae690() {
   return (neuron0x3291040()*0.0761717);
}

double NNfunction_sb_sLcR::synapse0x32ae6d0() {
   return (neuron0x3291380()*-0.23311);
}

double NNfunction_sb_sLcR::synapse0x32ae710() {
   return (neuron0x32916c0()*0.0460447);
}

double NNfunction_sb_sLcR::synapse0x32ae750() {
   return (neuron0x3291a00()*0.0418243);
}

double NNfunction_sb_sLcR::synapse0x32ae790() {
   return (neuron0x3291d40()*0.121049);
}

double NNfunction_sb_sLcR::synapse0x3297240() {
   return (neuron0x328d180()*0.0313464);
}

double NNfunction_sb_sLcR::synapse0x3297280() {
   return (neuron0x328d4c0()*0.0324635);
}

double NNfunction_sb_sLcR::synapse0x32972c0() {
   return (neuron0x328d800()*0.0188601);
}

double NNfunction_sb_sLcR::synapse0x3297300() {
   return (neuron0x328db40()*-13.3231);
}

double NNfunction_sb_sLcR::synapse0x3297340() {
   return (neuron0x328de80()*-0.00415692);
}

double NNfunction_sb_sLcR::synapse0x3297380() {
   return (neuron0x328e1c0()*-0.0021504);
}

double NNfunction_sb_sLcR::synapse0x32973c0() {
   return (neuron0x328e500()*0.0427933);
}

double NNfunction_sb_sLcR::synapse0x3297400() {
   return (neuron0x328e840()*0.0108752);
}

double NNfunction_sb_sLcR::synapse0x32aef20() {
   return (neuron0x328eb80()*0.0143622);
}

double NNfunction_sb_sLcR::synapse0x32aef60() {
   return (neuron0x328eec0()*-0.00924063);
}

double NNfunction_sb_sLcR::synapse0x32aefa0() {
   return (neuron0x328f200()*0.000612449);
}

double NNfunction_sb_sLcR::synapse0x32aefe0() {
   return (neuron0x328f540()*0.0255683);
}

double NNfunction_sb_sLcR::synapse0x32af020() {
   return (neuron0x328f880()*-0.078339);
}

double NNfunction_sb_sLcR::synapse0x32af060() {
   return (neuron0x328fbc0()*-0.0258248);
}

double NNfunction_sb_sLcR::synapse0x32af0a0() {
   return (neuron0x328ff00()*0.0463545);
}

double NNfunction_sb_sLcR::synapse0x32af0e0() {
   return (neuron0x3290240()*-0.155579);
}

double NNfunction_sb_sLcR::synapse0x32ae960() {
   return (neuron0x3290580()*-0.0144671);
}

double NNfunction_sb_sLcR::synapse0x32ae9a0() {
   return (neuron0x3290ae0()*-0.039297);
}

double NNfunction_sb_sLcR::synapse0x32af230() {
   return (neuron0x3290d00()*-0.0205942);
}

double NNfunction_sb_sLcR::synapse0x32af270() {
   return (neuron0x3291040()*-0.00899179);
}

double NNfunction_sb_sLcR::synapse0x32af2b0() {
   return (neuron0x3291380()*-0.0450509);
}

double NNfunction_sb_sLcR::synapse0x32af2f0() {
   return (neuron0x32916c0()*0.0118481);
}

double NNfunction_sb_sLcR::synapse0x32af330() {
   return (neuron0x3291a00()*0.0175552);
}

double NNfunction_sb_sLcR::synapse0x32af370() {
   return (neuron0x3291d40()*-0.0233866);
}

double NNfunction_sb_sLcR::synapse0x32af6f0() {
   return (neuron0x328d180()*0.00713139);
}

double NNfunction_sb_sLcR::synapse0x32af730() {
   return (neuron0x328d4c0()*-0.0197405);
}

double NNfunction_sb_sLcR::synapse0x32af770() {
   return (neuron0x328d800()*-0.0305015);
}

double NNfunction_sb_sLcR::synapse0x32af7b0() {
   return (neuron0x328db40()*3.55369);
}

double NNfunction_sb_sLcR::synapse0x32af7f0() {
   return (neuron0x328de80()*-0.00888842);
}

double NNfunction_sb_sLcR::synapse0x32af830() {
   return (neuron0x328e1c0()*-0.0184982);
}

double NNfunction_sb_sLcR::synapse0x32af870() {
   return (neuron0x328e500()*-0.0286988);
}

double NNfunction_sb_sLcR::synapse0x32af8b0() {
   return (neuron0x328e840()*0.0282812);
}

double NNfunction_sb_sLcR::synapse0x32af8f0() {
   return (neuron0x328eb80()*0.0130253);
}

double NNfunction_sb_sLcR::synapse0x32af930() {
   return (neuron0x328eec0()*0.00515823);
}

double NNfunction_sb_sLcR::synapse0x32af970() {
   return (neuron0x328f200()*0.0058523);
}

double NNfunction_sb_sLcR::synapse0x32af9b0() {
   return (neuron0x328f540()*-0.0438094);
}

double NNfunction_sb_sLcR::synapse0x32af9f0() {
   return (neuron0x328f880()*-0.131261);
}

double NNfunction_sb_sLcR::synapse0x32afa30() {
   return (neuron0x328fbc0()*0.00599174);
}

double NNfunction_sb_sLcR::synapse0x32afa70() {
   return (neuron0x328ff00()*-0.0304725);
}

double NNfunction_sb_sLcR::synapse0x32afab0() {
   return (neuron0x3290240()*0.248314);
}

double NNfunction_sb_sLcR::synapse0x32af540() {
   return (neuron0x3290580()*0.056685);
}

double NNfunction_sb_sLcR::synapse0x32af580() {
   return (neuron0x3290ae0()*0.000465873);
}

double NNfunction_sb_sLcR::synapse0x32afc00() {
   return (neuron0x3290d00()*-0.00225416);
}

double NNfunction_sb_sLcR::synapse0x32afc40() {
   return (neuron0x3291040()*0.0103508);
}

double NNfunction_sb_sLcR::synapse0x32afc80() {
   return (neuron0x3291380()*-0.0461834);
}

double NNfunction_sb_sLcR::synapse0x32afcc0() {
   return (neuron0x32916c0()*0.0270026);
}

double NNfunction_sb_sLcR::synapse0x32afd00() {
   return (neuron0x3291a00()*0.0101219);
}

double NNfunction_sb_sLcR::synapse0x32afd40() {
   return (neuron0x3291d40()*0.0363569);
}

double NNfunction_sb_sLcR::synapse0x32b00c0() {
   return (neuron0x328d180()*-0.0356928);
}

double NNfunction_sb_sLcR::synapse0x32b0100() {
   return (neuron0x328d4c0()*0.00314141);
}

double NNfunction_sb_sLcR::synapse0x32b0140() {
   return (neuron0x328d800()*-0.0168739);
}

double NNfunction_sb_sLcR::synapse0x32b0180() {
   return (neuron0x328db40()*7.00746);
}

double NNfunction_sb_sLcR::synapse0x32b01c0() {
   return (neuron0x328de80()*0.043351);
}

double NNfunction_sb_sLcR::synapse0x32b0200() {
   return (neuron0x328e1c0()*0.0522387);
}

double NNfunction_sb_sLcR::synapse0x32b0240() {
   return (neuron0x328e500()*-0.0178318);
}

double NNfunction_sb_sLcR::synapse0x32b0280() {
   return (neuron0x328e840()*-0.0289223);
}

double NNfunction_sb_sLcR::synapse0x32b02c0() {
   return (neuron0x328eb80()*-0.00828216);
}

double NNfunction_sb_sLcR::synapse0x32b0300() {
   return (neuron0x328eec0()*-0.0171494);
}

double NNfunction_sb_sLcR::synapse0x32b0340() {
   return (neuron0x328f200()*-0.0168451);
}

double NNfunction_sb_sLcR::synapse0x32b0380() {
   return (neuron0x328f540()*-0.0084982);
}

double NNfunction_sb_sLcR::synapse0x32b03c0() {
   return (neuron0x328f880()*-0.0980028);
}

double NNfunction_sb_sLcR::synapse0x32b0400() {
   return (neuron0x328fbc0()*-0.0267138);
}

double NNfunction_sb_sLcR::synapse0x32b0440() {
   return (neuron0x328ff00()*-0.0329009);
}

double NNfunction_sb_sLcR::synapse0x32b0480() {
   return (neuron0x3290240()*-0.209818);
}

double NNfunction_sb_sLcR::synapse0x32aff10() {
   return (neuron0x3290580()*-0.0234127);
}

double NNfunction_sb_sLcR::synapse0x32aff50() {
   return (neuron0x3290ae0()*0.0466822);
}

double NNfunction_sb_sLcR::synapse0x32a0a80() {
   return (neuron0x3290d00()*0.0361699);
}

double NNfunction_sb_sLcR::synapse0x32a0ac0() {
   return (neuron0x3291040()*-0.0115855);
}

double NNfunction_sb_sLcR::synapse0x32a0b00() {
   return (neuron0x3291380()*0.043197);
}

double NNfunction_sb_sLcR::synapse0x32a0b40() {
   return (neuron0x32916c0()*-0.0396283);
}

double NNfunction_sb_sLcR::synapse0x32a0b80() {
   return (neuron0x3291a00()*-0.0116494);
}

double NNfunction_sb_sLcR::synapse0x32a0bc0() {
   return (neuron0x3291d40()*-0.0107405);
}

double NNfunction_sb_sLcR::synapse0x32a0f40() {
   return (neuron0x328d180()*-0.0761771);
}

double NNfunction_sb_sLcR::synapse0x32a0f80() {
   return (neuron0x328d4c0()*0.245453);
}

double NNfunction_sb_sLcR::synapse0x32a0fc0() {
   return (neuron0x328d800()*-0.13851);
}

double NNfunction_sb_sLcR::synapse0x32a1000() {
   return (neuron0x328db40()*-0.932023);
}

double NNfunction_sb_sLcR::synapse0x32a1040() {
   return (neuron0x328de80()*0.0267448);
}

double NNfunction_sb_sLcR::synapse0x32a1080() {
   return (neuron0x328e1c0()*0.1563);
}

double NNfunction_sb_sLcR::synapse0x32a10c0() {
   return (neuron0x328e500()*0.0418148);
}

double NNfunction_sb_sLcR::synapse0x32a1100() {
   return (neuron0x328e840()*0.0633006);
}

double NNfunction_sb_sLcR::synapse0x32a1140() {
   return (neuron0x328eb80()*-0.088442);
}

double NNfunction_sb_sLcR::synapse0x32a1180() {
   return (neuron0x328eec0()*0.0359072);
}

double NNfunction_sb_sLcR::synapse0x32a11c0() {
   return (neuron0x328f200()*0.0171941);
}

double NNfunction_sb_sLcR::synapse0x32a1200() {
   return (neuron0x328f540()*-0.152172);
}

double NNfunction_sb_sLcR::synapse0x32a1240() {
   return (neuron0x328f880()*0.132135);
}

double NNfunction_sb_sLcR::synapse0x32a1280() {
   return (neuron0x328fbc0()*0.00695129);
}

double NNfunction_sb_sLcR::synapse0x32a12c0() {
   return (neuron0x328ff00()*-0.0176923);
}

double NNfunction_sb_sLcR::synapse0x32a1300() {
   return (neuron0x3290240()*0.0381347);
}

double NNfunction_sb_sLcR::synapse0x32a0d90() {
   return (neuron0x3290580()*0.054311);
}

double NNfunction_sb_sLcR::synapse0x32a0dd0() {
   return (neuron0x3290ae0()*-0.047163);
}

double NNfunction_sb_sLcR::synapse0x32a1450() {
   return (neuron0x3290d00()*-0.0580359);
}

double NNfunction_sb_sLcR::synapse0x32a1490() {
   return (neuron0x3291040()*-0.121115);
}

double NNfunction_sb_sLcR::synapse0x32a14d0() {
   return (neuron0x3291380()*-0.0087879);
}

double NNfunction_sb_sLcR::synapse0x32a1510() {
   return (neuron0x32916c0()*-0.0347008);
}

double NNfunction_sb_sLcR::synapse0x32a1550() {
   return (neuron0x3291a00()*-0.0290446);
}

double NNfunction_sb_sLcR::synapse0x32a1590() {
   return (neuron0x3291d40()*-0.0161904);
}

double NNfunction_sb_sLcR::synapse0x32a1910() {
   return (neuron0x328d180()*0.0265771);
}

double NNfunction_sb_sLcR::synapse0x32a1950() {
   return (neuron0x328d4c0()*0.0961222);
}

double NNfunction_sb_sLcR::synapse0x32a1990() {
   return (neuron0x328d800()*-0.0660983);
}

double NNfunction_sb_sLcR::synapse0x32a19d0() {
   return (neuron0x328db40()*0.984812);
}

double NNfunction_sb_sLcR::synapse0x32a1a10() {
   return (neuron0x328de80()*0.0235867);
}

double NNfunction_sb_sLcR::synapse0x32a1a50() {
   return (neuron0x328e1c0()*-0.0564735);
}

double NNfunction_sb_sLcR::synapse0x32a1a90() {
   return (neuron0x328e500()*-0.0430232);
}

double NNfunction_sb_sLcR::synapse0x32a1ad0() {
   return (neuron0x328e840()*0.000508769);
}

double NNfunction_sb_sLcR::synapse0x32a1b10() {
   return (neuron0x328eb80()*0.0303052);
}

double NNfunction_sb_sLcR::synapse0x32a1b50() {
   return (neuron0x328eec0()*0.0828697);
}

double NNfunction_sb_sLcR::synapse0x32a1b90() {
   return (neuron0x328f200()*0.0122126);
}

double NNfunction_sb_sLcR::synapse0x32a1bd0() {
   return (neuron0x328f540()*-0.0728503);
}

double NNfunction_sb_sLcR::synapse0x32a1c10() {
   return (neuron0x328f880()*-0.39437);
}

double NNfunction_sb_sLcR::synapse0x32a1c50() {
   return (neuron0x328fbc0()*-0.0810386);
}

double NNfunction_sb_sLcR::synapse0x32a1c90() {
   return (neuron0x328ff00()*0.0464404);
}

double NNfunction_sb_sLcR::synapse0x32a1cd0() {
   return (neuron0x3290240()*-0.255805);
}

double NNfunction_sb_sLcR::synapse0x32a1760() {
   return (neuron0x3290580()*-0.036541);
}

double NNfunction_sb_sLcR::synapse0x32a17a0() {
   return (neuron0x3290ae0()*0.039762);
}

double NNfunction_sb_sLcR::synapse0x32a1e20() {
   return (neuron0x3290d00()*-0.0863129);
}

double NNfunction_sb_sLcR::synapse0x32a1e60() {
   return (neuron0x3291040()*-0.0662713);
}

double NNfunction_sb_sLcR::synapse0x32a1ea0() {
   return (neuron0x3291380()*0.0538208);
}

double NNfunction_sb_sLcR::synapse0x32a1ee0() {
   return (neuron0x32916c0()*0.112139);
}

double NNfunction_sb_sLcR::synapse0x32a1f20() {
   return (neuron0x3291a00()*0.0377472);
}

double NNfunction_sb_sLcR::synapse0x32a1f60() {
   return (neuron0x3291d40()*0.0918544);
}

double NNfunction_sb_sLcR::synapse0x32a22e0() {
   return (neuron0x328d180()*0.0755157);
}

double NNfunction_sb_sLcR::synapse0x32a2320() {
   return (neuron0x328d4c0()*0.537579);
}

double NNfunction_sb_sLcR::synapse0x32a2360() {
   return (neuron0x328d800()*-0.311462);
}

double NNfunction_sb_sLcR::synapse0x32a23a0() {
   return (neuron0x328db40()*-0.509905);
}

double NNfunction_sb_sLcR::synapse0x32a23e0() {
   return (neuron0x328de80()*0.464327);
}

double NNfunction_sb_sLcR::synapse0x32a2420() {
   return (neuron0x328e1c0()*0.978001);
}

double NNfunction_sb_sLcR::synapse0x32a2460() {
   return (neuron0x328e500()*-0.216349);
}

double NNfunction_sb_sLcR::synapse0x32a24a0() {
   return (neuron0x328e840()*-0.869588);
}

double NNfunction_sb_sLcR::synapse0x32a24e0() {
   return (neuron0x328eb80()*-0.814659);
}

double NNfunction_sb_sLcR::synapse0x32a2520() {
   return (neuron0x328eec0()*-0.268205);
}

double NNfunction_sb_sLcR::synapse0x32a2560() {
   return (neuron0x328f200()*-0.613759);
}

double NNfunction_sb_sLcR::synapse0x32a25a0() {
   return (neuron0x328f540()*-0.568826);
}

double NNfunction_sb_sLcR::synapse0x32a25e0() {
   return (neuron0x328f880()*-0.363472);
}

double NNfunction_sb_sLcR::synapse0x32a2620() {
   return (neuron0x328fbc0()*0.251903);
}

double NNfunction_sb_sLcR::synapse0x32a2660() {
   return (neuron0x328ff00()*0.090124);
}

double NNfunction_sb_sLcR::synapse0x32a26a0() {
   return (neuron0x3290240()*-0.0605944);
}

double NNfunction_sb_sLcR::synapse0x32a2130() {
   return (neuron0x3290580()*0.00650084);
}

double NNfunction_sb_sLcR::synapse0x32a2170() {
   return (neuron0x3290ae0()*0.351177);
}

double NNfunction_sb_sLcR::synapse0x32a27f0() {
   return (neuron0x3290d00()*-0.176953);
}

double NNfunction_sb_sLcR::synapse0x32a2830() {
   return (neuron0x3291040()*0.133429);
}

double NNfunction_sb_sLcR::synapse0x32a2870() {
   return (neuron0x3291380()*0.639965);
}

double NNfunction_sb_sLcR::synapse0x32a28b0() {
   return (neuron0x32916c0()*0.168261);
}

double NNfunction_sb_sLcR::synapse0x32a28f0() {
   return (neuron0x3291a00()*-0.2315);
}

double NNfunction_sb_sLcR::synapse0x32a2930() {
   return (neuron0x3291d40()*-0.342616);
}

double NNfunction_sb_sLcR::synapse0x32b4800() {
   return (neuron0x328d180()*0.00503241);
}

double NNfunction_sb_sLcR::synapse0x32b4840() {
   return (neuron0x328d4c0()*-0.0008659);
}

double NNfunction_sb_sLcR::synapse0x32b4880() {
   return (neuron0x328d800()*0.124016);
}

double NNfunction_sb_sLcR::synapse0x32b48c0() {
   return (neuron0x328db40()*0.79658);
}

double NNfunction_sb_sLcR::synapse0x32b4900() {
   return (neuron0x328de80()*-0.307313);
}

double NNfunction_sb_sLcR::synapse0x32b4940() {
   return (neuron0x328e1c0()*-0.220279);
}

double NNfunction_sb_sLcR::synapse0x32b4980() {
   return (neuron0x328e500()*0.555031);
}

double NNfunction_sb_sLcR::synapse0x32b49c0() {
   return (neuron0x328e840()*-0.804279);
}

double NNfunction_sb_sLcR::synapse0x32b4a00() {
   return (neuron0x328eb80()*-0.630931);
}

double NNfunction_sb_sLcR::synapse0x32b4a40() {
   return (neuron0x328eec0()*-0.224104);
}

double NNfunction_sb_sLcR::synapse0x32b4a80() {
   return (neuron0x328f200()*-0.0635807);
}

double NNfunction_sb_sLcR::synapse0x32b4ac0() {
   return (neuron0x328f540()*0.337691);
}

double NNfunction_sb_sLcR::synapse0x32b4b00() {
   return (neuron0x328f880()*0.58461);
}

double NNfunction_sb_sLcR::synapse0x32b4b40() {
   return (neuron0x328fbc0()*-0.0657555);
}

double NNfunction_sb_sLcR::synapse0x32b4b80() {
   return (neuron0x328ff00()*0.728019);
}

double NNfunction_sb_sLcR::synapse0x32b4bc0() {
   return (neuron0x3290240()*0.967182);
}

double NNfunction_sb_sLcR::synapse0x32a2970() {
   return (neuron0x3290580()*-0.1282);
}

double NNfunction_sb_sLcR::synapse0x32a29b0() {
   return (neuron0x3290ae0()*0.372787);
}

double NNfunction_sb_sLcR::synapse0x32b4d10() {
   return (neuron0x3290d00()*-0.355054);
}

double NNfunction_sb_sLcR::synapse0x32b4d50() {
   return (neuron0x3291040()*0.19529);
}

double NNfunction_sb_sLcR::synapse0x32b4d90() {
   return (neuron0x3291380()*0.404263);
}

double NNfunction_sb_sLcR::synapse0x32b4dd0() {
   return (neuron0x32916c0()*0.284585);
}

double NNfunction_sb_sLcR::synapse0x32b4e10() {
   return (neuron0x3291a00()*0.459526);
}

double NNfunction_sb_sLcR::synapse0x32b4e50() {
   return (neuron0x3291d40()*0.719572);
}

double NNfunction_sb_sLcR::synapse0x32b51d0() {
   return (neuron0x328d180()*-0.24149);
}

double NNfunction_sb_sLcR::synapse0x32b5210() {
   return (neuron0x328d4c0()*-0.458742);
}

double NNfunction_sb_sLcR::synapse0x32b5250() {
   return (neuron0x328d800()*0.373709);
}

double NNfunction_sb_sLcR::synapse0x32b5290() {
   return (neuron0x328db40()*-0.707248);
}

double NNfunction_sb_sLcR::synapse0x32b52d0() {
   return (neuron0x328de80()*0.243309);
}

double NNfunction_sb_sLcR::synapse0x32b5310() {
   return (neuron0x328e1c0()*-0.0956761);
}

double NNfunction_sb_sLcR::synapse0x32b5350() {
   return (neuron0x328e500()*0.24067);
}

double NNfunction_sb_sLcR::synapse0x32b5390() {
   return (neuron0x328e840()*0.378138);
}

double NNfunction_sb_sLcR::synapse0x32b53d0() {
   return (neuron0x328eb80()*0.14068);
}

double NNfunction_sb_sLcR::synapse0x32b5410() {
   return (neuron0x328eec0()*-0.238265);
}

double NNfunction_sb_sLcR::synapse0x32b5450() {
   return (neuron0x328f200()*0.474548);
}

double NNfunction_sb_sLcR::synapse0x32b5490() {
   return (neuron0x328f540()*0.554571);
}

double NNfunction_sb_sLcR::synapse0x32b54d0() {
   return (neuron0x328f880()*-0.0328211);
}

double NNfunction_sb_sLcR::synapse0x32b5510() {
   return (neuron0x328fbc0()*0.129283);
}

double NNfunction_sb_sLcR::synapse0x32b5550() {
   return (neuron0x328ff00()*-0.274269);
}

double NNfunction_sb_sLcR::synapse0x32b5590() {
   return (neuron0x3290240()*-0.047059);
}

double NNfunction_sb_sLcR::synapse0x32b5020() {
   return (neuron0x3290580()*0.0198303);
}

double NNfunction_sb_sLcR::synapse0x32b5060() {
   return (neuron0x3290ae0()*0.385512);
}

double NNfunction_sb_sLcR::synapse0x32b56e0() {
   return (neuron0x3290d00()*-0.217238);
}

double NNfunction_sb_sLcR::synapse0x32b5720() {
   return (neuron0x3291040()*0.0103212);
}

double NNfunction_sb_sLcR::synapse0x32b5760() {
   return (neuron0x3291380()*-0.137598);
}

double NNfunction_sb_sLcR::synapse0x32b57a0() {
   return (neuron0x32916c0()*-0.106195);
}

double NNfunction_sb_sLcR::synapse0x32b57e0() {
   return (neuron0x3291a00()*0.106183);
}

double NNfunction_sb_sLcR::synapse0x32b5820() {
   return (neuron0x3291d40()*0.000112451);
}

double NNfunction_sb_sLcR::synapse0x32b5ba0() {
   return (neuron0x328d180()*0.388685);
}

double NNfunction_sb_sLcR::synapse0x32b5be0() {
   return (neuron0x328d4c0()*0.0833896);
}

double NNfunction_sb_sLcR::synapse0x32b5c20() {
   return (neuron0x328d800()*-0.156533);
}

double NNfunction_sb_sLcR::synapse0x32b5c60() {
   return (neuron0x328db40()*0.41675);
}

double NNfunction_sb_sLcR::synapse0x32b5ca0() {
   return (neuron0x328de80()*-0.567005);
}

double NNfunction_sb_sLcR::synapse0x32b5ce0() {
   return (neuron0x328e1c0()*0.0904868);
}

double NNfunction_sb_sLcR::synapse0x32b5d20() {
   return (neuron0x328e500()*-0.388048);
}

double NNfunction_sb_sLcR::synapse0x32b5d60() {
   return (neuron0x328e840()*-0.131031);
}

double NNfunction_sb_sLcR::synapse0x32b5da0() {
   return (neuron0x328eb80()*0.367728);
}

double NNfunction_sb_sLcR::synapse0x32b5de0() {
   return (neuron0x328eec0()*-0.157621);
}

double NNfunction_sb_sLcR::synapse0x32b5e20() {
   return (neuron0x328f200()*0.342285);
}

double NNfunction_sb_sLcR::synapse0x32b5e60() {
   return (neuron0x328f540()*-0.119632);
}

double NNfunction_sb_sLcR::synapse0x32b5ea0() {
   return (neuron0x328f880()*-0.613521);
}

double NNfunction_sb_sLcR::synapse0x32b5ee0() {
   return (neuron0x328fbc0()*0.0867425);
}

double NNfunction_sb_sLcR::synapse0x32b5f20() {
   return (neuron0x328ff00()*-0.10871);
}

double NNfunction_sb_sLcR::synapse0x32b5f60() {
   return (neuron0x3290240()*-0.0941569);
}

double NNfunction_sb_sLcR::synapse0x32b59f0() {
   return (neuron0x3290580()*-0.244587);
}

double NNfunction_sb_sLcR::synapse0x32b5a30() {
   return (neuron0x3290ae0()*-0.0764873);
}

double NNfunction_sb_sLcR::synapse0x32b60b0() {
   return (neuron0x3290d00()*0.378712);
}

double NNfunction_sb_sLcR::synapse0x32b60f0() {
   return (neuron0x3291040()*-0.0810873);
}

double NNfunction_sb_sLcR::synapse0x32b6130() {
   return (neuron0x3291380()*-0.536649);
}

double NNfunction_sb_sLcR::synapse0x32b6170() {
   return (neuron0x32916c0()*0.0115806);
}

double NNfunction_sb_sLcR::synapse0x32b61b0() {
   return (neuron0x3291a00()*-0.184142);
}

double NNfunction_sb_sLcR::synapse0x32b61f0() {
   return (neuron0x3291d40()*-0.349529);
}

double NNfunction_sb_sLcR::synapse0x32b6570() {
   return (neuron0x328d180()*0.22854);
}

double NNfunction_sb_sLcR::synapse0x32b65b0() {
   return (neuron0x328d4c0()*0.241214);
}

double NNfunction_sb_sLcR::synapse0x32b65f0() {
   return (neuron0x328d800()*-0.222457);
}

double NNfunction_sb_sLcR::synapse0x32b6630() {
   return (neuron0x328db40()*-1.5015);
}

double NNfunction_sb_sLcR::synapse0x32b6670() {
   return (neuron0x328de80()*-0.0268144);
}

double NNfunction_sb_sLcR::synapse0x32b66b0() {
   return (neuron0x328e1c0()*0.270421);
}

double NNfunction_sb_sLcR::synapse0x32b66f0() {
   return (neuron0x328e500()*0.0610145);
}

double NNfunction_sb_sLcR::synapse0x32b6730() {
   return (neuron0x328e840()*0.355523);
}

double NNfunction_sb_sLcR::synapse0x32b6770() {
   return (neuron0x328eb80()*0.0251098);
}

double NNfunction_sb_sLcR::synapse0x32b67b0() {
   return (neuron0x328eec0()*-0.169069);
}

double NNfunction_sb_sLcR::synapse0x32b67f0() {
   return (neuron0x328f200()*0.0824488);
}

double NNfunction_sb_sLcR::synapse0x32b6830() {
   return (neuron0x328f540()*-0.469711);
}

double NNfunction_sb_sLcR::synapse0x32b6870() {
   return (neuron0x328f880()*0.507378);
}

double NNfunction_sb_sLcR::synapse0x32b68b0() {
   return (neuron0x328fbc0()*-0.177714);
}

double NNfunction_sb_sLcR::synapse0x32b68f0() {
   return (neuron0x328ff00()*-0.00386555);
}

double NNfunction_sb_sLcR::synapse0x32b6930() {
   return (neuron0x3290240()*0.279728);
}

double NNfunction_sb_sLcR::synapse0x32b63c0() {
   return (neuron0x3290580()*0.206862);
}

double NNfunction_sb_sLcR::synapse0x32b6400() {
   return (neuron0x3290ae0()*-0.196295);
}

double NNfunction_sb_sLcR::synapse0x32b6a80() {
   return (neuron0x3290d00()*0.0444827);
}

double NNfunction_sb_sLcR::synapse0x32b6ac0() {
   return (neuron0x3291040()*-0.33591);
}

double NNfunction_sb_sLcR::synapse0x32b6b00() {
   return (neuron0x3291380()*0.451087);
}

double NNfunction_sb_sLcR::synapse0x32b6b40() {
   return (neuron0x32916c0()*0.343343);
}

double NNfunction_sb_sLcR::synapse0x32b6b80() {
   return (neuron0x3291a00()*-0.0995744);
}

double NNfunction_sb_sLcR::synapse0x32b6bc0() {
   return (neuron0x3291d40()*-0.0548809);
}

double NNfunction_sb_sLcR::synapse0x3056ad0() {
   return (neuron0x32921b0()*0.586822);
}

double NNfunction_sb_sLcR::synapse0x3056b10() {
   return (neuron0x3292b00()*0.0246979);
}

double NNfunction_sb_sLcR::synapse0x3294670() {
   return (neuron0x32935e0()*0.395552);
}

double NNfunction_sb_sLcR::synapse0x32946b0() {
   return (neuron0x3293080()*-0.0359776);
}

double NNfunction_sb_sLcR::synapse0x3295040() {
   return (neuron0x32943c0()*0.231758);
}

double NNfunction_sb_sLcR::synapse0x3295080() {
   return (neuron0x3294d90()*-0.242039);
}

double NNfunction_sb_sLcR::synapse0x3295e10() {
   return (neuron0x3295b60()*0.417909);
}

double NNfunction_sb_sLcR::synapse0x3295e50() {
   return (neuron0x3296530()*-0.619284);
}

double NNfunction_sb_sLcR::synapse0x32967e0() {
   return (neuron0x3296f00()*0.526282);
}

double NNfunction_sb_sLcR::synapse0x3296820() {
   return (neuron0x32979e0()*0.0557858);
}

double NNfunction_sb_sLcR::synapse0x32971b0() {
   return (neuron0x32983b0()*0.344537);
}

double NNfunction_sb_sLcR::synapse0x32971f0() {
   return (neuron0x3295490()*-0.15583);
}

double NNfunction_sb_sLcR::synapse0x3297c90() {
   return (neuron0x3299f60()*0.781886);
}

double NNfunction_sb_sLcR::synapse0x3297cd0() {
   return (neuron0x329a930()*-0.0867756);
}

double NNfunction_sb_sLcR::synapse0x3298660() {
   return (neuron0x329b300()*0.451924);
}

double NNfunction_sb_sLcR::synapse0x32986a0() {
   return (neuron0x329bcd0()*0.20567);
}

double NNfunction_sb_sLcR::synapse0x3295740() {
   return (neuron0x329dae0()*1.11291);
}

double NNfunction_sb_sLcR::synapse0x3295780() {
   return (neuron0x329ddc0()*0.175004);
}

double NNfunction_sb_sLcR::synapse0x329a210() {
   return (neuron0x329e790()*0.496998);
}

double NNfunction_sb_sLcR::synapse0x329a250() {
   return (neuron0x329f160()*0.327536);
}

double NNfunction_sb_sLcR::synapse0x329abe0() {
   return (neuron0x329fb30()*0.425849);
}

double NNfunction_sb_sLcR::synapse0x329ac20() {
   return (neuron0x32a0500()*-0.292201);
}

double NNfunction_sb_sLcR::synapse0x329b5b0() {
   return (neuron0x3299050()*0.552039);
}

double NNfunction_sb_sLcR::synapse0x329b5f0() {
   return (neuron0x3299a20()*-0.747978);
}

double NNfunction_sb_sLcR::synapse0x329bf80() {
   return (neuron0x32a3290()*0.484454);
}

double NNfunction_sb_sLcR::synapse0x329bfc0() {
   return (neuron0x32a3c60()*0.912768);
}

double NNfunction_sb_sLcR::synapse0x3290120() {
   return (neuron0x32a4630()*0.348326);
}

double NNfunction_sb_sLcR::synapse0x3290160() {
   return (neuron0x32a5000()*0.168764);
}

double NNfunction_sb_sLcR::synapse0x329e070() {
   return (neuron0x32a59d0()*0.47999);
}

double NNfunction_sb_sLcR::synapse0x329e0b0() {
   return (neuron0x32a63a0()*0.321046);
}

double NNfunction_sb_sLcR::synapse0x329ea40() {
   return (neuron0x32a6d70()*0.710969);
}

double NNfunction_sb_sLcR::synapse0x329ea80() {
   return (neuron0x32a7740()*0.0645708);
}

double NNfunction_sb_sLcR::synapse0x329f410() {
   return (neuron0x329d7d0()*0.402702);
}

double NNfunction_sb_sLcR::synapse0x329f450() {
   return (neuron0x32aa320()*0.55715);
}

double NNfunction_sb_sLcR::synapse0x329fde0() {
   return (neuron0x32aacf0()*0.443538);
}

double NNfunction_sb_sLcR::synapse0x329fe20() {
   return (neuron0x32ab6c0()*-0.0593818);
}

double NNfunction_sb_sLcR::synapse0x32a07b0() {
   return (neuron0x32ac090()*-0.443289);
}

double NNfunction_sb_sLcR::synapse0x32a07f0() {
   return (neuron0x32aca60()*0.52976);
}

double NNfunction_sb_sLcR::synapse0x3299300() {
   return (neuron0x32ad430()*0.241473);
}

double NNfunction_sb_sLcR::synapse0x3299340() {
   return (neuron0x32ade00()*0.15765);
}

double NNfunction_sb_sLcR::synapse0x32a2bb0() {
   return (neuron0x32ae7d0()*0.305821);
}

double NNfunction_sb_sLcR::synapse0x32a2bf0() {
   return (neuron0x32af3b0()*0.452398);
}

double NNfunction_sb_sLcR::synapse0x32a3540() {
   return (neuron0x32afd80()*0.350862);
}

double NNfunction_sb_sLcR::synapse0x32a3580() {
   return (neuron0x32a0c00()*0.0249742);
}

double NNfunction_sb_sLcR::synapse0x32a3f10() {
   return (neuron0x32a15d0()*-0.133096);
}

double NNfunction_sb_sLcR::synapse0x32a3f50() {
   return (neuron0x32a1fa0()*0.547509);
}

double NNfunction_sb_sLcR::synapse0x32a48e0() {
   return (neuron0x32b45e0()*0.124345);
}

double NNfunction_sb_sLcR::synapse0x32a4920() {
   return (neuron0x32b4e90()*0.185803);
}

double NNfunction_sb_sLcR::synapse0x32a52b0() {
   return (neuron0x32b5860()*0.272647);
}

double NNfunction_sb_sLcR::synapse0x32a52f0() {
   return (neuron0x32b6230()*0.595332);
}

double NNfunction_sb_sLcR::synapse0x32a79f0() {
   return (neuron0x32921b0()*0.562434);
}

double NNfunction_sb_sLcR::synapse0x32a7a30() {
   return (neuron0x3292b00()*-0.00658921);
}

double NNfunction_sb_sLcR::synapse0x329cfb0() {
   return (neuron0x32935e0()*0.808671);
}

double NNfunction_sb_sLcR::synapse0x329cff0() {
   return (neuron0x3293080()*1.44244);
}

double NNfunction_sb_sLcR::synapse0x32aa5d0() {
   return (neuron0x32943c0()*-1.16028);
}

double NNfunction_sb_sLcR::synapse0x32aa610() {
   return (neuron0x3294d90()*0.824584);
}

double NNfunction_sb_sLcR::synapse0x32aafa0() {
   return (neuron0x3295b60()*0.907275);
}

double NNfunction_sb_sLcR::synapse0x32aafe0() {
   return (neuron0x3296530()*-3.42506);
}

double NNfunction_sb_sLcR::synapse0x32ab970() {
   return (neuron0x3296f00()*0.312192);
}

double NNfunction_sb_sLcR::synapse0x32ab9b0() {
   return (neuron0x32979e0()*1.94576);
}

double NNfunction_sb_sLcR::synapse0x32ac340() {
   return (neuron0x32983b0()*0.524757);
}

double NNfunction_sb_sLcR::synapse0x32ac380() {
   return (neuron0x3295490()*0.491073);
}

double NNfunction_sb_sLcR::synapse0x32acd10() {
   return (neuron0x3299f60()*-2.56209);
}

double NNfunction_sb_sLcR::synapse0x32acd50() {
   return (neuron0x329a930()*0.437889);
}

double NNfunction_sb_sLcR::synapse0x32ad6e0() {
   return (neuron0x329b300()*-2.4395);
}

double NNfunction_sb_sLcR::synapse0x32ad720() {
   return (neuron0x329bcd0()*-0.450769);
}

double NNfunction_sb_sLcR::synapse0x32ae0b0() {
   return (neuron0x329dae0()*0.283974);
}

double NNfunction_sb_sLcR::synapse0x32ae0f0() {
   return (neuron0x329ddc0()*-0.68082);
}

double NNfunction_sb_sLcR::synapse0x32aea80() {
   return (neuron0x329e790()*-1.2022);
}

double NNfunction_sb_sLcR::synapse0x32aeac0() {
   return (neuron0x329f160()*0.908351);
}

double NNfunction_sb_sLcR::synapse0x32af660() {
   return (neuron0x329fb30()*1.89269);
}

double NNfunction_sb_sLcR::synapse0x32af6a0() {
   return (neuron0x32a0500()*-0.81305);
}

double NNfunction_sb_sLcR::synapse0x32b0030() {
   return (neuron0x3299050()*-2.69603);
}

double NNfunction_sb_sLcR::synapse0x32b0070() {
   return (neuron0x3299a20()*-2.26575);
}

double NNfunction_sb_sLcR::synapse0x32a0eb0() {
   return (neuron0x32a3290()*0.901582);
}

double NNfunction_sb_sLcR::synapse0x32a0ef0() {
   return (neuron0x32a3c60()*0.929324);
}

double NNfunction_sb_sLcR::synapse0x32a1880() {
   return (neuron0x32a4630()*0.281388);
}

double NNfunction_sb_sLcR::synapse0x32a18c0() {
   return (neuron0x32a5000()*0.472947);
}

double NNfunction_sb_sLcR::synapse0x32a2250() {
   return (neuron0x32a59d0()*-0.0212346);
}

double NNfunction_sb_sLcR::synapse0x32a2290() {
   return (neuron0x32a63a0()*-0.178843);
}

double NNfunction_sb_sLcR::synapse0x32b4770() {
   return (neuron0x32a6d70()*-0.160314);
}

double NNfunction_sb_sLcR::synapse0x32b47b0() {
   return (neuron0x32a7740()*0.486403);
}

double NNfunction_sb_sLcR::synapse0x32b5140() {
   return (neuron0x329d7d0()*-1.44883);
}

double NNfunction_sb_sLcR::synapse0x32b5180() {
   return (neuron0x32aa320()*-0.86097);
}

double NNfunction_sb_sLcR::synapse0x32b5b10() {
   return (neuron0x32aacf0()*0.164552);
}

double NNfunction_sb_sLcR::synapse0x32b5b50() {
   return (neuron0x32ab6c0()*-0.943763);
}

double NNfunction_sb_sLcR::synapse0x32b64e0() {
   return (neuron0x32ac090()*0.389709);
}

double NNfunction_sb_sLcR::synapse0x32b6520() {
   return (neuron0x32aca60()*0.579545);
}

double NNfunction_sb_sLcR::synapse0x32923d0() {
   return (neuron0x32ad430()*-1.00194);
}

double NNfunction_sb_sLcR::synapse0x3292410() {
   return (neuron0x32ade00()*1.32792);
}

double NNfunction_sb_sLcR::synapse0x32a5c80() {
   return (neuron0x32ae7d0()*-0.125386);
}

double NNfunction_sb_sLcR::synapse0x32a5cc0() {
   return (neuron0x32af3b0()*4.6032);
}

double NNfunction_sb_sLcR::synapse0x32b6c00() {
   return (neuron0x32afd80()*5.43151);
}

double NNfunction_sb_sLcR::synapse0x32b6c40() {
   return (neuron0x32a0c00()*3.29387);
}

double NNfunction_sb_sLcR::synapse0x32b6c80() {
   return (neuron0x32a15d0()*-2.3651);
}

double NNfunction_sb_sLcR::synapse0x32b6cc0() {
   return (neuron0x32a1fa0()*-0.649458);
}

double NNfunction_sb_sLcR::synapse0x32bdb70() {
   return (neuron0x32b45e0()*0.798443);
}

double NNfunction_sb_sLcR::synapse0x32bdbb0() {
   return (neuron0x32b4e90()*0.647391);
}

double NNfunction_sb_sLcR::synapse0x32bdbf0() {
   return (neuron0x32b5860()*0.0524684);
}

double NNfunction_sb_sLcR::synapse0x32bdc30() {
   return (neuron0x32b6230()*1.36354);
}

double NNfunction_sb_sLcR::synapse0x32bdfb0() {
   return (neuron0x32921b0()*0.166853);
}

double NNfunction_sb_sLcR::synapse0x32bdff0() {
   return (neuron0x3292b00()*-0.406167);
}

double NNfunction_sb_sLcR::synapse0x32be030() {
   return (neuron0x32935e0()*-0.0705437);
}

double NNfunction_sb_sLcR::synapse0x32be070() {
   return (neuron0x3293080()*-1.92209);
}

double NNfunction_sb_sLcR::synapse0x32be0b0() {
   return (neuron0x32943c0()*0.288007);
}

double NNfunction_sb_sLcR::synapse0x32be0f0() {
   return (neuron0x3294d90()*0.228013);
}

double NNfunction_sb_sLcR::synapse0x32be130() {
   return (neuron0x3295b60()*1.03669);
}

double NNfunction_sb_sLcR::synapse0x32be170() {
   return (neuron0x3296530()*2.9968);
}

double NNfunction_sb_sLcR::synapse0x32be1b0() {
   return (neuron0x3296f00()*0.592224);
}

double NNfunction_sb_sLcR::synapse0x32be1f0() {
   return (neuron0x32979e0()*-0.828112);
}

double NNfunction_sb_sLcR::synapse0x32be230() {
   return (neuron0x32983b0()*-0.279135);
}

double NNfunction_sb_sLcR::synapse0x32be270() {
   return (neuron0x3295490()*-0.0966065);
}

double NNfunction_sb_sLcR::synapse0x32be2b0() {
   return (neuron0x3299f60()*4.8611);
}

double NNfunction_sb_sLcR::synapse0x32be2f0() {
   return (neuron0x329a930()*0.216681);
}

double NNfunction_sb_sLcR::synapse0x32be330() {
   return (neuron0x329b300()*1.04005);
}

double NNfunction_sb_sLcR::synapse0x32be370() {
   return (neuron0x329bcd0()*0.88262);
}

double NNfunction_sb_sLcR::synapse0x32bde00() {
   return (neuron0x329dae0()*-4.95154);
}

double NNfunction_sb_sLcR::synapse0x32bde40() {
   return (neuron0x329ddc0()*-0.465189);
}

double NNfunction_sb_sLcR::synapse0x32be4c0() {
   return (neuron0x329e790()*1.05379);
}

double NNfunction_sb_sLcR::synapse0x32be500() {
   return (neuron0x329f160()*0.0214442);
}

double NNfunction_sb_sLcR::synapse0x32be540() {
   return (neuron0x329fb30()*0.431535);
}

double NNfunction_sb_sLcR::synapse0x32be580() {
   return (neuron0x32a0500()*0.206614);
}

double NNfunction_sb_sLcR::synapse0x32be5c0() {
   return (neuron0x3299050()*0.172816);
}

double NNfunction_sb_sLcR::synapse0x32be600() {
   return (neuron0x3299a20()*-0.506572);
}

double NNfunction_sb_sLcR::synapse0x32be640() {
   return (neuron0x32a3290()*-0.249314);
}

double NNfunction_sb_sLcR::synapse0x32be680() {
   return (neuron0x32a3c60()*-1.7046);
}

double NNfunction_sb_sLcR::synapse0x32be6c0() {
   return (neuron0x32a4630()*-0.183552);
}

double NNfunction_sb_sLcR::synapse0x32be700() {
   return (neuron0x32a5000()*-0.0855389);
}

double NNfunction_sb_sLcR::synapse0x32be740() {
   return (neuron0x32a59d0()*0.558247);
}

double NNfunction_sb_sLcR::synapse0x32be780() {
   return (neuron0x32a63a0()*0.107906);
}

double NNfunction_sb_sLcR::synapse0x32be7c0() {
   return (neuron0x32a6d70()*1.41796);
}

double NNfunction_sb_sLcR::synapse0x32be800() {
   return (neuron0x32a7740()*-0.112609);
}

double NNfunction_sb_sLcR::synapse0x32be3b0() {
   return (neuron0x329d7d0()*-1.11341);
}

double NNfunction_sb_sLcR::synapse0x32be3f0() {
   return (neuron0x32aa320()*-0.187192);
}

double NNfunction_sb_sLcR::synapse0x32be430() {
   return (neuron0x32aacf0()*-0.477075);
}

double NNfunction_sb_sLcR::synapse0x32be470() {
   return (neuron0x32ab6c0()*0.0306721);
}

double NNfunction_sb_sLcR::synapse0x32bea50() {
   return (neuron0x32ac090()*0.520002);
}

double NNfunction_sb_sLcR::synapse0x32bea90() {
   return (neuron0x32aca60()*0.142843);
}

double NNfunction_sb_sLcR::synapse0x32bead0() {
   return (neuron0x32ad430()*0.558983);
}

double NNfunction_sb_sLcR::synapse0x32beb10() {
   return (neuron0x32ade00()*0.580377);
}

double NNfunction_sb_sLcR::synapse0x32beb50() {
   return (neuron0x32ae7d0()*2.98706);
}

double NNfunction_sb_sLcR::synapse0x32beb90() {
   return (neuron0x32af3b0()*-2.55659);
}

double NNfunction_sb_sLcR::synapse0x32bebd0() {
   return (neuron0x32afd80()*-0.33864);
}

double NNfunction_sb_sLcR::synapse0x32bec10() {
   return (neuron0x32a0c00()*-2.04411);
}

double NNfunction_sb_sLcR::synapse0x32bec50() {
   return (neuron0x32a15d0()*-2.28731);
}

double NNfunction_sb_sLcR::synapse0x32bec90() {
   return (neuron0x32a1fa0()*-0.0457158);
}

double NNfunction_sb_sLcR::synapse0x32becd0() {
   return (neuron0x32b45e0()*-0.122889);
}

double NNfunction_sb_sLcR::synapse0x32bed10() {
   return (neuron0x32b4e90()*-0.343171);
}

double NNfunction_sb_sLcR::synapse0x32bed50() {
   return (neuron0x32b5860()*0.797254);
}

double NNfunction_sb_sLcR::synapse0x32bed90() {
   return (neuron0x32b6230()*-0.10836);
}

double NNfunction_sb_sLcR::synapse0x32bf110() {
   return (neuron0x32921b0()*0.0358271);
}

double NNfunction_sb_sLcR::synapse0x32bf150() {
   return (neuron0x3292b00()*-0.0958299);
}

double NNfunction_sb_sLcR::synapse0x32bf190() {
   return (neuron0x32935e0()*-0.0391961);
}

double NNfunction_sb_sLcR::synapse0x32bf1d0() {
   return (neuron0x3293080()*2.65346);
}

double NNfunction_sb_sLcR::synapse0x32bf210() {
   return (neuron0x32943c0()*0.0808093);
}

double NNfunction_sb_sLcR::synapse0x32bf250() {
   return (neuron0x3294d90()*0.0476914);
}

double NNfunction_sb_sLcR::synapse0x32bf290() {
   return (neuron0x3295b60()*-0.247729);
}

double NNfunction_sb_sLcR::synapse0x32bf2d0() {
   return (neuron0x3296530()*-0.56247);
}

double NNfunction_sb_sLcR::synapse0x32bf310() {
   return (neuron0x3296f00()*0.16838);
}

double NNfunction_sb_sLcR::synapse0x32bf350() {
   return (neuron0x32979e0()*-0.110843);
}

double NNfunction_sb_sLcR::synapse0x32bf390() {
   return (neuron0x32983b0()*-0.0721526);
}

double NNfunction_sb_sLcR::synapse0x32bf3d0() {
   return (neuron0x3295490()*-0.0219072);
}

double NNfunction_sb_sLcR::synapse0x32bf410() {
   return (neuron0x3299f60()*-0.667545);
}

double NNfunction_sb_sLcR::synapse0x32bf450() {
   return (neuron0x329a930()*0.0112611);
}

double NNfunction_sb_sLcR::synapse0x32bf490() {
   return (neuron0x329b300()*0.0164957);
}

double NNfunction_sb_sLcR::synapse0x32bf4d0() {
   return (neuron0x329bcd0()*-0.121333);
}

double NNfunction_sb_sLcR::synapse0x32bef60() {
   return (neuron0x329dae0()*-0.395204);
}

double NNfunction_sb_sLcR::synapse0x32befa0() {
   return (neuron0x329ddc0()*-0.0864903);
}

double NNfunction_sb_sLcR::synapse0x32bf620() {
   return (neuron0x329e790()*1.80967);
}

double NNfunction_sb_sLcR::synapse0x32bf660() {
   return (neuron0x329f160()*-0.0293013);
}

double NNfunction_sb_sLcR::synapse0x32bf6a0() {
   return (neuron0x329fb30()*-1.0681);
}

double NNfunction_sb_sLcR::synapse0x32bf6e0() {
   return (neuron0x32a0500()*0.0612268);
}

double NNfunction_sb_sLcR::synapse0x32bf720() {
   return (neuron0x3299050()*0.149897);
}

double NNfunction_sb_sLcR::synapse0x32bf760() {
   return (neuron0x3299a20()*-0.0577531);
}

double NNfunction_sb_sLcR::synapse0x32bf7a0() {
   return (neuron0x32a3290()*-0.0635262);
}

double NNfunction_sb_sLcR::synapse0x32bf7e0() {
   return (neuron0x32a3c60()*0.913339);
}

double NNfunction_sb_sLcR::synapse0x32bf820() {
   return (neuron0x32a4630()*-0.0420663);
}

double NNfunction_sb_sLcR::synapse0x32bf860() {
   return (neuron0x32a5000()*-0.0208675);
}

double NNfunction_sb_sLcR::synapse0x32bf8a0() {
   return (neuron0x32a59d0()*0.225649);
}

double NNfunction_sb_sLcR::synapse0x32bf8e0() {
   return (neuron0x32a63a0()*-0.0402172);
}

double NNfunction_sb_sLcR::synapse0x32bf920() {
   return (neuron0x32a6d70()*2.55872);
}

double NNfunction_sb_sLcR::synapse0x32bf960() {
   return (neuron0x32a7740()*-0.0245972);
}

double NNfunction_sb_sLcR::synapse0x32bf510() {
   return (neuron0x329d7d0()*-0.212693);
}

double NNfunction_sb_sLcR::synapse0x32bf550() {
   return (neuron0x32aa320()*-0.0444118);
}

double NNfunction_sb_sLcR::synapse0x32bf590() {
   return (neuron0x32aacf0()*-0.118555);
}

double NNfunction_sb_sLcR::synapse0x32bf5d0() {
   return (neuron0x32ab6c0()*0.0303611);
}

double NNfunction_sb_sLcR::synapse0x32bfbb0() {
   return (neuron0x32ac090()*-0.450662);
}

double NNfunction_sb_sLcR::synapse0x32bfbf0() {
   return (neuron0x32aca60()*0.030702);
}

double NNfunction_sb_sLcR::synapse0x32bfc30() {
   return (neuron0x32ad430()*-0.388245);
}

double NNfunction_sb_sLcR::synapse0x32bfc70() {
   return (neuron0x32ade00()*0.0773263);
}

double NNfunction_sb_sLcR::synapse0x32bfcb0() {
   return (neuron0x32ae7d0()*-2.32115);
}

double NNfunction_sb_sLcR::synapse0x32bfcf0() {
   return (neuron0x32af3b0()*-0.269488);
}

double NNfunction_sb_sLcR::synapse0x32bfd30() {
   return (neuron0x32afd80()*0.360149);
}

double NNfunction_sb_sLcR::synapse0x32bfd70() {
   return (neuron0x32a0c00()*-0.2451);
}

double NNfunction_sb_sLcR::synapse0x32bfdb0() {
   return (neuron0x32a15d0()*-0.0856829);
}

double NNfunction_sb_sLcR::synapse0x32bfdf0() {
   return (neuron0x32a1fa0()*0.018179);
}

double NNfunction_sb_sLcR::synapse0x32bfe30() {
   return (neuron0x32b45e0()*-0.0323075);
}

double NNfunction_sb_sLcR::synapse0x32bfe70() {
   return (neuron0x32b4e90()*-0.0966349);
}

double NNfunction_sb_sLcR::synapse0x32bfeb0() {
   return (neuron0x32b5860()*0.229615);
}

double NNfunction_sb_sLcR::synapse0x32bfef0() {
   return (neuron0x32b6230()*-0.0253506);
}

double NNfunction_sb_sLcR::synapse0x32c0270() {
   return (neuron0x32921b0()*0.714331);
}

double NNfunction_sb_sLcR::synapse0x32c02b0() {
   return (neuron0x3292b00()*0.238753);
}

double NNfunction_sb_sLcR::synapse0x32c02f0() {
   return (neuron0x32935e0()*0.181363);
}

double NNfunction_sb_sLcR::synapse0x32c0330() {
   return (neuron0x3293080()*0.253835);
}

double NNfunction_sb_sLcR::synapse0x32c0370() {
   return (neuron0x32943c0()*0.799543);
}

double NNfunction_sb_sLcR::synapse0x32c03b0() {
   return (neuron0x3294d90()*0.153405);
}

double NNfunction_sb_sLcR::synapse0x32c03f0() {
   return (neuron0x3295b60()*0.895009);
}

double NNfunction_sb_sLcR::synapse0x32c0430() {
   return (neuron0x3296530()*0.494419);
}

double NNfunction_sb_sLcR::synapse0x32c0470() {
   return (neuron0x3296f00()*0.655723);
}

double NNfunction_sb_sLcR::synapse0x32c04b0() {
   return (neuron0x32979e0()*0.461148);
}

double NNfunction_sb_sLcR::synapse0x32c04f0() {
   return (neuron0x32983b0()*0.368643);
}

double NNfunction_sb_sLcR::synapse0x32c0530() {
   return (neuron0x3295490()*0.716811);
}

double NNfunction_sb_sLcR::synapse0x32c0570() {
   return (neuron0x3299f60()*0.760182);
}

double NNfunction_sb_sLcR::synapse0x32c05b0() {
   return (neuron0x329a930()*0.717161);
}

double NNfunction_sb_sLcR::synapse0x32c05f0() {
   return (neuron0x329b300()*0.883777);
}

double NNfunction_sb_sLcR::synapse0x32c0630() {
   return (neuron0x329bcd0()*0.33798);
}

double NNfunction_sb_sLcR::synapse0x32c00c0() {
   return (neuron0x329dae0()*1.09081);
}

double NNfunction_sb_sLcR::synapse0x32c0100() {
   return (neuron0x329ddc0()*0.491118);
}

double NNfunction_sb_sLcR::synapse0x32c0780() {
   return (neuron0x329e790()*0.108193);
}

double NNfunction_sb_sLcR::synapse0x32c07c0() {
   return (neuron0x329f160()*0.0437527);
}

double NNfunction_sb_sLcR::synapse0x32c0800() {
   return (neuron0x329fb30()*0.337762);
}

double NNfunction_sb_sLcR::synapse0x32c0840() {
   return (neuron0x32a0500()*0.694522);
}

double NNfunction_sb_sLcR::synapse0x32c0880() {
   return (neuron0x3299050()*0.285795);
}

double NNfunction_sb_sLcR::synapse0x32c08c0() {
   return (neuron0x3299a20()*0.226372);
}

double NNfunction_sb_sLcR::synapse0x32c0900() {
   return (neuron0x32a3290()*0.579462);
}

double NNfunction_sb_sLcR::synapse0x32c0940() {
   return (neuron0x32a3c60()*0.781906);
}

double NNfunction_sb_sLcR::synapse0x32c0980() {
   return (neuron0x32a4630()*0.519171);
}

double NNfunction_sb_sLcR::synapse0x32c09c0() {
   return (neuron0x32a5000()*0.169435);
}

double NNfunction_sb_sLcR::synapse0x32c0a00() {
   return (neuron0x32a59d0()*-0.14292);
}

double NNfunction_sb_sLcR::synapse0x32c0a40() {
   return (neuron0x32a63a0()*0.399908);
}

double NNfunction_sb_sLcR::synapse0x32c0a80() {
   return (neuron0x32a6d70()*0.0336569);
}

double NNfunction_sb_sLcR::synapse0x32c0ac0() {
   return (neuron0x32a7740()*0.278541);
}

double NNfunction_sb_sLcR::synapse0x32c0670() {
   return (neuron0x329d7d0()*0.683163);
}

double NNfunction_sb_sLcR::synapse0x32c06b0() {
   return (neuron0x32aa320()*0.754139);
}

double NNfunction_sb_sLcR::synapse0x32c06f0() {
   return (neuron0x32aacf0()*0.461525);
}

double NNfunction_sb_sLcR::synapse0x32c0730() {
   return (neuron0x32ab6c0()*0.253098);
}

double NNfunction_sb_sLcR::synapse0x32c0d10() {
   return (neuron0x32ac090()*0.23389);
}

double NNfunction_sb_sLcR::synapse0x32c0d50() {
   return (neuron0x32aca60()*0.309686);
}

double NNfunction_sb_sLcR::synapse0x32c0d90() {
   return (neuron0x32ad430()*0.596235);
}

double NNfunction_sb_sLcR::synapse0x32c0dd0() {
   return (neuron0x32ade00()*0.413036);
}

double NNfunction_sb_sLcR::synapse0x32c0e10() {
   return (neuron0x32ae7d0()*0.168721);
}

double NNfunction_sb_sLcR::synapse0x32c0e50() {
   return (neuron0x32af3b0()*0.201462);
}

double NNfunction_sb_sLcR::synapse0x32c0e90() {
   return (neuron0x32afd80()*0.704601);
}

double NNfunction_sb_sLcR::synapse0x32c0ed0() {
   return (neuron0x32a0c00()*0.690912);
}

double NNfunction_sb_sLcR::synapse0x32c0f10() {
   return (neuron0x32a15d0()*-0.126435);
}

double NNfunction_sb_sLcR::synapse0x32c0f50() {
   return (neuron0x32a1fa0()*0.664083);
}

double NNfunction_sb_sLcR::synapse0x32c0f90() {
   return (neuron0x32b45e0()*0.404088);
}

double NNfunction_sb_sLcR::synapse0x32c0fd0() {
   return (neuron0x32b4e90()*0.583595);
}

double NNfunction_sb_sLcR::synapse0x32c1010() {
   return (neuron0x32b5860()*-0.154808);
}

double NNfunction_sb_sLcR::synapse0x32c1050() {
   return (neuron0x32b6230()*0.145465);
}

double NNfunction_sb_sLcR::synapse0x32c12b0() {
   return (neuron0x32bd430()*2.81389);
}

double NNfunction_sb_sLcR::synapse0x32c12f0() {
   return (neuron0x32bd7d0()*-6.38151);
}

double NNfunction_sb_sLcR::synapse0x32c1330() {
   return (neuron0x32bdc70()*8.46888);
}

double NNfunction_sb_sLcR::synapse0x32c1370() {
   return (neuron0x32bedd0()*-6.02689);
}

double NNfunction_sb_sLcR::synapse0x32c13b0() {
   return (neuron0x32bff30()*2.49068);
}

