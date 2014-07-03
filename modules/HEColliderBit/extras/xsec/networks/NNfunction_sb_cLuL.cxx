#include "NNfunction_sb_cLuL.h"
#include <cmath>

double NNfunction_sb_cLuL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.9197)/15.0143;
   input1 = (in1 - 46.7956)/762.121;
   input2 = (in2 - 380.769)/487.763;
   input3 = (in3 - 229.69)/597.756;
   input4 = (in4 - 724.529)/699.292;
   input5 = (in5 - 634.931)/676.929;
   input6 = (in6 - 638.964)/678.527;
   input7 = (in7 - 640.222)/680.371;
   input8 = (in8 - 644.749)/716.372;
   input9 = (in9 - 631.666)/698.219;
   input10 = (in10 - 648.01)/724.668;
   input11 = (in11 - 504.132)/308.241;
   input12 = (in12 - 502.941)/307.067;
   input13 = (in13 - 503.334)/359.481;
   input14 = (in14 - 643.501)/547.896;
   input15 = (in15 - 644.624)/550.028;
   input16 = (in16 - 457.593)/384.695;
   input17 = (in17 - 674.319)/624.814;
   input18 = (in18 - 667.381)/621.081;
   input19 = (in19 - 673.47)/612.998;
   input20 = (in20 - -181.523)/395.806;
   input21 = (in21 - -231.916)/878.058;
   input22 = (in22 - 4.86544)/887.111;
   input23 = (in23 - -29.035)/490.247;
   switch(index) {
     case 0:
         return neuron0x3085d70();
     default:
         return 0.;
   }
}

double NNfunction_sb_cLuL::Value(int index, double* input) {
   input0 = (input[0] - 22.9197)/15.0143;
   input1 = (input[1] - 46.7956)/762.121;
   input2 = (input[2] - 380.769)/487.763;
   input3 = (input[3] - 229.69)/597.756;
   input4 = (input[4] - 724.529)/699.292;
   input5 = (input[5] - 634.931)/676.929;
   input6 = (input[6] - 638.964)/678.527;
   input7 = (input[7] - 640.222)/680.371;
   input8 = (input[8] - 644.749)/716.372;
   input9 = (input[9] - 631.666)/698.219;
   input10 = (input[10] - 648.01)/724.668;
   input11 = (input[11] - 504.132)/308.241;
   input12 = (input[12] - 502.941)/307.067;
   input13 = (input[13] - 503.334)/359.481;
   input14 = (input[14] - 643.501)/547.896;
   input15 = (input[15] - 644.624)/550.028;
   input16 = (input[16] - 457.593)/384.695;
   input17 = (input[17] - 674.319)/624.814;
   input18 = (input[18] - 667.381)/621.081;
   input19 = (input[19] - 673.47)/612.998;
   input20 = (input[20] - -181.523)/395.806;
   input21 = (input[21] - -231.916)/878.058;
   input22 = (input[22] - 4.86544)/887.111;
   input23 = (input[23] - -29.035)/490.247;
   switch(index) {
     case 0:
         return neuron0x3085d70();
     default:
         return 0.;
   }
}

double NNfunction_sb_cLuL::neuron0x3050de0() {
   return input0;
}

double NNfunction_sb_cLuL::neuron0x3051090() {
   return input1;
}

double NNfunction_sb_cLuL::neuron0x30513d0() {
   return input2;
}

double NNfunction_sb_cLuL::neuron0x3051710() {
   return input3;
}

double NNfunction_sb_cLuL::neuron0x3051a50() {
   return input4;
}

double NNfunction_sb_cLuL::neuron0x3051d90() {
   return input5;
}

double NNfunction_sb_cLuL::neuron0x30520d0() {
   return input6;
}

double NNfunction_sb_cLuL::neuron0x3052410() {
   return input7;
}

double NNfunction_sb_cLuL::neuron0x3052750() {
   return input8;
}

double NNfunction_sb_cLuL::neuron0x3052a90() {
   return input9;
}

double NNfunction_sb_cLuL::neuron0x3052dd0() {
   return input10;
}

double NNfunction_sb_cLuL::neuron0x3053110() {
   return input11;
}

double NNfunction_sb_cLuL::neuron0x3053450() {
   return input12;
}

double NNfunction_sb_cLuL::neuron0x3053790() {
   return input13;
}

double NNfunction_sb_cLuL::neuron0x3053ad0() {
   return input14;
}

double NNfunction_sb_cLuL::neuron0x3053e10() {
   return input15;
}

double NNfunction_sb_cLuL::neuron0x3054150() {
   return input16;
}

double NNfunction_sb_cLuL::neuron0x30546b0() {
   return input17;
}

double NNfunction_sb_cLuL::neuron0x30549f0() {
   return input18;
}

double NNfunction_sb_cLuL::neuron0x3054d30() {
   return input19;
}

double NNfunction_sb_cLuL::neuron0x3055070() {
   return input20;
}

double NNfunction_sb_cLuL::neuron0x30553b0() {
   return input21;
}

double NNfunction_sb_cLuL::neuron0x30556f0() {
   return input22;
}

double NNfunction_sb_cLuL::neuron0x3055a30() {
   return input23;
}

double NNfunction_sb_cLuL::input0x3055ea0() {
   double input = -1.47653;
   input += synapse0x30561e0();
   input += synapse0x3056220();
   input += synapse0x3056260();
   input += synapse0x30562a0();
   input += synapse0x30562e0();
   input += synapse0x3056320();
   input += synapse0x3056360();
   input += synapse0x30563a0();
   input += synapse0x30563e0();
   input += synapse0x3056420();
   input += synapse0x3056460();
   input += synapse0x30564a0();
   input += synapse0x30564e0();
   input += synapse0x3056520();
   input += synapse0x3056560();
   input += synapse0x30565a0();
   input += synapse0x3056030();
   input += synapse0x3056070();
   input += synapse0x2e0cfc0();
   input += synapse0x2e0d000();
   input += synapse0x30565e0();
   input += synapse0x3056620();
   input += synapse0x3056660();
   input += synapse0x30566a0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x3055ea0() {
   double input = input0x3055ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x30566e0() {
   double input = 0.380829;
   input += synapse0x3056a20();
   input += synapse0x3056a60();
   input += synapse0x3056aa0();
   input += synapse0x3056ae0();
   input += synapse0x3056b20();
   input += synapse0x3056b60();
   input += synapse0x3056ba0();
   input += synapse0x3056be0();
   input += synapse0x3056c20();
   input += synapse0x2e0ce10();
   input += synapse0x2e0ce50();
   input += synapse0x2e0ce90();
   input += synapse0x2e0ced0();
   input += synapse0x3056e70();
   input += synapse0x3056eb0();
   input += synapse0x3056ef0();
   input += synapse0x3056870();
   input += synapse0x30568b0();
   input += synapse0x3057040();
   input += synapse0x3057080();
   input += synapse0x30570c0();
   input += synapse0x3057100();
   input += synapse0x3057140();
   input += synapse0x3057180();
   return input;
}

double NNfunction_sb_cLuL::neuron0x30566e0() {
   double input = input0x30566e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x30571c0() {
   double input = 3.03566;
   input += synapse0x3057500();
   input += synapse0x3057540();
   input += synapse0x3057580();
   input += synapse0x30575c0();
   input += synapse0x3057600();
   input += synapse0x3057640();
   input += synapse0x3057680();
   input += synapse0x30576c0();
   input += synapse0x3057700();
   input += synapse0x3057740();
   input += synapse0x3057780();
   input += synapse0x30577c0();
   input += synapse0x3057800();
   input += synapse0x3057840();
   input += synapse0x3057880();
   input += synapse0x30578c0();
   input += synapse0x3057350();
   input += synapse0x3057390();
   input += synapse0x2e0d650();
   input += synapse0x2e1af20();
   input += synapse0x2e1af60();
   input += synapse0x30597f0();
   input += synapse0x3059830();
   input += synapse0x3050b20();
   return input;
}

double NNfunction_sb_cLuL::neuron0x30571c0() {
   double input = input0x30571c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x3056c60() {
   double input = 0.522129;
   input += synapse0x3050bf0();
   input += synapse0x2e1b7a0();
   input += synapse0x3056df0();
   input += synapse0x3056e30();
   input += synapse0x3057a10();
   input += synapse0x3057a50();
   input += synapse0x3057a90();
   input += synapse0x3057ad0();
   input += synapse0x3057b10();
   input += synapse0x3057b50();
   input += synapse0x3057b90();
   input += synapse0x3057bd0();
   input += synapse0x3057c10();
   input += synapse0x3057c50();
   input += synapse0x3057c90();
   input += synapse0x3057cd0();
   input += synapse0x3050b60();
   input += synapse0x3050ba0();
   input += synapse0x3057e20();
   input += synapse0x3057e60();
   input += synapse0x3057ea0();
   input += synapse0x3057ee0();
   input += synapse0x3057f20();
   input += synapse0x3057f60();
   return input;
}

double NNfunction_sb_cLuL::neuron0x3056c60() {
   double input = input0x3056c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x3057fa0() {
   double input = -1.37374;
   input += synapse0x30582e0();
   input += synapse0x3058320();
   input += synapse0x3058360();
   input += synapse0x30583a0();
   input += synapse0x30583e0();
   input += synapse0x3058420();
   input += synapse0x3058460();
   input += synapse0x30584a0();
   input += synapse0x30584e0();
   input += synapse0x3058520();
   input += synapse0x3058560();
   input += synapse0x30585a0();
   input += synapse0x30585e0();
   input += synapse0x3058620();
   input += synapse0x3058660();
   input += synapse0x30586a0();
   input += synapse0x30587f0();
   input += synapse0x3058130();
   input += synapse0x3058170();
   input += synapse0x3059930();
   input += synapse0x3059970();
   input += synapse0x30599b0();
   input += synapse0x30599f0();
   input += synapse0x3059a30();
   return input;
}

double NNfunction_sb_cLuL::neuron0x3057fa0() {
   double input = input0x3057fa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x3059a70() {
   double input = -4.31111;
   input += synapse0x3059db0();
   input += synapse0x3059df0();
   input += synapse0x3059e30();
   input += synapse0x3059e70();
   input += synapse0x3059eb0();
   input += synapse0x3059ef0();
   input += synapse0x3059f30();
   input += synapse0x3059f70();
   input += synapse0x3059fb0();
   input += synapse0x2e1b270();
   input += synapse0x2e1b2b0();
   input += synapse0x2e1b2f0();
   input += synapse0x2e1b330();
   input += synapse0x2e1b370();
   input += synapse0x2e1b3b0();
   input += synapse0x2e1b3f0();
   input += synapse0x3059c00();
   input += synapse0x3059c40();
   input += synapse0x2e1b540();
   input += synapse0x2e1b580();
   input += synapse0x2e1b5c0();
   input += synapse0x2e1b600();
   input += synapse0x2e1b640();
   input += synapse0x305a800();
   return input;
}

double NNfunction_sb_cLuL::neuron0x3059a70() {
   double input = input0x3059a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x305a840() {
   double input = -0.355023;
   input += synapse0x305ab80();
   input += synapse0x305abc0();
   input += synapse0x305ac00();
   input += synapse0x305ac40();
   input += synapse0x305ac80();
   input += synapse0x305acc0();
   input += synapse0x305ad00();
   input += synapse0x305ad40();
   input += synapse0x305ad80();
   input += synapse0x305adc0();
   input += synapse0x305ae00();
   input += synapse0x305ae40();
   input += synapse0x305ae80();
   input += synapse0x305aec0();
   input += synapse0x305af00();
   input += synapse0x305af40();
   input += synapse0x305a9d0();
   input += synapse0x305aa10();
   input += synapse0x305b090();
   input += synapse0x305b0d0();
   input += synapse0x305b110();
   input += synapse0x305b150();
   input += synapse0x305b190();
   input += synapse0x305b1d0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x305a840() {
   double input = input0x305a840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x305b210() {
   double input = 0.413425;
   input += synapse0x305b550();
   input += synapse0x305b590();
   input += synapse0x305b5d0();
   input += synapse0x305b610();
   input += synapse0x305b650();
   input += synapse0x305b690();
   input += synapse0x305b6d0();
   input += synapse0x305b710();
   input += synapse0x305b750();
   input += synapse0x305b790();
   input += synapse0x305b7d0();
   input += synapse0x305b810();
   input += synapse0x305b850();
   input += synapse0x305b890();
   input += synapse0x305b8d0();
   input += synapse0x305b910();
   input += synapse0x305b3a0();
   input += synapse0x305b3e0();
   input += synapse0x305ba60();
   input += synapse0x305baa0();
   input += synapse0x305bae0();
   input += synapse0x305bb20();
   input += synapse0x305bb60();
   input += synapse0x305bba0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x305b210() {
   double input = input0x305b210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x305bbe0() {
   double input = -1.99828;
   input += synapse0x30545a0();
   input += synapse0x30545e0();
   input += synapse0x3054620();
   input += synapse0x3054660();
   input += synapse0x305c130();
   input += synapse0x305c170();
   input += synapse0x305c1b0();
   input += synapse0x305c1f0();
   input += synapse0x305c230();
   input += synapse0x305c270();
   input += synapse0x305c2b0();
   input += synapse0x305c2f0();
   input += synapse0x305c330();
   input += synapse0x305c370();
   input += synapse0x305c3b0();
   input += synapse0x305c3f0();
   input += synapse0x305bd70();
   input += synapse0x305bdb0();
   input += synapse0x305c540();
   input += synapse0x305c580();
   input += synapse0x305c5c0();
   input += synapse0x305c600();
   input += synapse0x305c640();
   input += synapse0x305c680();
   return input;
}

double NNfunction_sb_cLuL::neuron0x305bbe0() {
   double input = input0x305bbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x305c6c0() {
   double input = 0.385869;
   input += synapse0x305ca00();
   input += synapse0x305ca40();
   input += synapse0x305ca80();
   input += synapse0x305cac0();
   input += synapse0x305cb00();
   input += synapse0x305cb40();
   input += synapse0x305cb80();
   input += synapse0x305cbc0();
   input += synapse0x305cc00();
   input += synapse0x305cc40();
   input += synapse0x305cc80();
   input += synapse0x305ccc0();
   input += synapse0x305cd00();
   input += synapse0x305cd40();
   input += synapse0x305cd80();
   input += synapse0x305cdc0();
   input += synapse0x305c850();
   input += synapse0x305c890();
   input += synapse0x305cf10();
   input += synapse0x305cf50();
   input += synapse0x305cf90();
   input += synapse0x305cfd0();
   input += synapse0x305d010();
   input += synapse0x305d050();
   return input;
}

double NNfunction_sb_cLuL::neuron0x305c6c0() {
   double input = input0x305c6c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x305d090() {
   double input = -0.919111;
   input += synapse0x305d3d0();
   input += synapse0x305d410();
   input += synapse0x305d450();
   input += synapse0x305d490();
   input += synapse0x305d4d0();
   input += synapse0x305d510();
   input += synapse0x305d550();
   input += synapse0x305d590();
   input += synapse0x305d5d0();
   input += synapse0x305d610();
   input += synapse0x305d650();
   input += synapse0x305d690();
   input += synapse0x305d6d0();
   input += synapse0x305d710();
   input += synapse0x305d750();
   input += synapse0x305d790();
   input += synapse0x305d220();
   input += synapse0x305d260();
   input += synapse0x3059ff0();
   input += synapse0x305a030();
   input += synapse0x305a070();
   input += synapse0x305a0b0();
   input += synapse0x305a0f0();
   input += synapse0x305a130();
   return input;
}

double NNfunction_sb_cLuL::neuron0x305d090() {
   double input = input0x305d090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x305a170() {
   double input = -0.229887;
   input += synapse0x305a4b0();
   input += synapse0x305a4f0();
   input += synapse0x305a530();
   input += synapse0x305a570();
   input += synapse0x305a5b0();
   input += synapse0x305a5f0();
   input += synapse0x305a630();
   input += synapse0x305a670();
   input += synapse0x305a6b0();
   input += synapse0x305a6f0();
   input += synapse0x305a730();
   input += synapse0x305a770();
   input += synapse0x305a7b0();
   input += synapse0x305e8f0();
   input += synapse0x305e930();
   input += synapse0x305e970();
   input += synapse0x305a300();
   input += synapse0x305a340();
   input += synapse0x305eac0();
   input += synapse0x305eb00();
   input += synapse0x305eb40();
   input += synapse0x305eb80();
   input += synapse0x305ebc0();
   input += synapse0x305ec00();
   return input;
}

double NNfunction_sb_cLuL::neuron0x305a170() {
   double input = input0x305a170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x305ec40() {
   double input = 0.30171;
   input += synapse0x305ef80();
   input += synapse0x305efc0();
   input += synapse0x305f000();
   input += synapse0x305f040();
   input += synapse0x305f080();
   input += synapse0x305f0c0();
   input += synapse0x305f100();
   input += synapse0x305f140();
   input += synapse0x305f180();
   input += synapse0x305f1c0();
   input += synapse0x305f200();
   input += synapse0x305f240();
   input += synapse0x305f280();
   input += synapse0x305f2c0();
   input += synapse0x305f300();
   input += synapse0x305f340();
   input += synapse0x305edd0();
   input += synapse0x305ee10();
   input += synapse0x305f490();
   input += synapse0x305f4d0();
   input += synapse0x305f510();
   input += synapse0x305f550();
   input += synapse0x305f590();
   input += synapse0x305f5d0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x305ec40() {
   double input = input0x305ec40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x305f610() {
   double input = -0.963169;
   input += synapse0x305f950();
   input += synapse0x305f990();
   input += synapse0x305f9d0();
   input += synapse0x305fa10();
   input += synapse0x305fa50();
   input += synapse0x305fa90();
   input += synapse0x305fad0();
   input += synapse0x305fb10();
   input += synapse0x305fb50();
   input += synapse0x305fb90();
   input += synapse0x305fbd0();
   input += synapse0x305fc10();
   input += synapse0x305fc50();
   input += synapse0x305fc90();
   input += synapse0x305fcd0();
   input += synapse0x305fd10();
   input += synapse0x305f7a0();
   input += synapse0x305f7e0();
   input += synapse0x305fe60();
   input += synapse0x305fea0();
   input += synapse0x305fee0();
   input += synapse0x305ff20();
   input += synapse0x305ff60();
   input += synapse0x305ffa0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x305f610() {
   double input = input0x305f610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x305ffe0() {
   double input = 0.11737;
   input += synapse0x3060320();
   input += synapse0x3060360();
   input += synapse0x30603a0();
   input += synapse0x30603e0();
   input += synapse0x3060420();
   input += synapse0x3060460();
   input += synapse0x30604a0();
   input += synapse0x30604e0();
   input += synapse0x3060520();
   input += synapse0x3060560();
   input += synapse0x30605a0();
   input += synapse0x30605e0();
   input += synapse0x3060620();
   input += synapse0x3060660();
   input += synapse0x30606a0();
   input += synapse0x30606e0();
   input += synapse0x3060170();
   input += synapse0x30601b0();
   input += synapse0x3060830();
   input += synapse0x3060870();
   input += synapse0x30608b0();
   input += synapse0x30608f0();
   input += synapse0x3060930();
   input += synapse0x3060970();
   return input;
}

double NNfunction_sb_cLuL::neuron0x305ffe0() {
   double input = input0x305ffe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x30609b0() {
   double input = 0.296819;
   input += synapse0x3060cf0();
   input += synapse0x3050f70();
   input += synapse0x3050fb0();
   input += synapse0x30512b0();
   input += synapse0x30512f0();
   input += synapse0x30515f0();
   input += synapse0x3051630();
   input += synapse0x3051930();
   input += synapse0x3051970();
   input += synapse0x3051c70();
   input += synapse0x3051cb0();
   input += synapse0x3051fb0();
   input += synapse0x3051ff0();
   input += synapse0x30522f0();
   input += synapse0x3052330();
   input += synapse0x3052630();
   input += synapse0x3052670();
   input += synapse0x3052970();
   input += synapse0x30529b0();
   input += synapse0x3052cb0();
   input += synapse0x3052cf0();
   input += synapse0x3052ff0();
   input += synapse0x3053030();
   input += synapse0x3053330();
   return input;
}

double NNfunction_sb_cLuL::neuron0x30609b0() {
   double input = input0x30609b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x30627c0() {
   double input = 3.02524;
   input += synapse0x3053370();
   input += synapse0x3054030();
   input += synapse0x3054070();
   input += synapse0x3060b40();
   input += synapse0x3060b80();
   input += synapse0x3054370();
   input += synapse0x30543b0();
   input += synapse0x30548d0();
   input += synapse0x3054910();
   input += synapse0x3054c10();
   input += synapse0x3054c50();
   input += synapse0x3054f50();
   input += synapse0x3054f90();
   input += synapse0x3055290();
   input += synapse0x30552d0();
   input += synapse0x30555d0();
   input += synapse0x3055610();
   input += synapse0x3055910();
   input += synapse0x3055950();
   input += synapse0x3055c50();
   input += synapse0x3055c90();
   input += synapse0x3053670();
   input += synapse0x30536b0();
   input += synapse0x3062a60();
   return input;
}

double NNfunction_sb_cLuL::neuron0x30627c0() {
   double input = input0x30627c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x3062aa0() {
   double input = -0.0240858;
   input += synapse0x3062de0();
   input += synapse0x3062e20();
   input += synapse0x3062e60();
   input += synapse0x3062ea0();
   input += synapse0x3062ee0();
   input += synapse0x3062f20();
   input += synapse0x3062f60();
   input += synapse0x3062fa0();
   input += synapse0x3062fe0();
   input += synapse0x3063020();
   input += synapse0x3063060();
   input += synapse0x30630a0();
   input += synapse0x30630e0();
   input += synapse0x3063120();
   input += synapse0x3063160();
   input += synapse0x30631a0();
   input += synapse0x3062c30();
   input += synapse0x3062c70();
   input += synapse0x30632f0();
   input += synapse0x3063330();
   input += synapse0x3063370();
   input += synapse0x30633b0();
   input += synapse0x30633f0();
   input += synapse0x3063430();
   return input;
}

double NNfunction_sb_cLuL::neuron0x3062aa0() {
   double input = input0x3062aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x3063470() {
   double input = 0.255776;
   input += synapse0x30637b0();
   input += synapse0x30637f0();
   input += synapse0x3063830();
   input += synapse0x3063870();
   input += synapse0x30638b0();
   input += synapse0x30638f0();
   input += synapse0x3063930();
   input += synapse0x3063970();
   input += synapse0x30639b0();
   input += synapse0x30639f0();
   input += synapse0x3063a30();
   input += synapse0x3063a70();
   input += synapse0x3063ab0();
   input += synapse0x3063af0();
   input += synapse0x3063b30();
   input += synapse0x3063b70();
   input += synapse0x3063600();
   input += synapse0x3063640();
   input += synapse0x3063cc0();
   input += synapse0x3063d00();
   input += synapse0x3063d40();
   input += synapse0x3063d80();
   input += synapse0x3063dc0();
   input += synapse0x3063e00();
   return input;
}

double NNfunction_sb_cLuL::neuron0x3063470() {
   double input = input0x3063470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x3063e40() {
   double input = -0.483784;
   input += synapse0x3064180();
   input += synapse0x30641c0();
   input += synapse0x3064200();
   input += synapse0x3064240();
   input += synapse0x3064280();
   input += synapse0x30642c0();
   input += synapse0x3064300();
   input += synapse0x3064340();
   input += synapse0x3064380();
   input += synapse0x30643c0();
   input += synapse0x3064400();
   input += synapse0x3064440();
   input += synapse0x3064480();
   input += synapse0x30644c0();
   input += synapse0x3064500();
   input += synapse0x3064540();
   input += synapse0x3063fd0();
   input += synapse0x3064010();
   input += synapse0x3064690();
   input += synapse0x30646d0();
   input += synapse0x3064710();
   input += synapse0x3064750();
   input += synapse0x3064790();
   input += synapse0x30647d0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x3063e40() {
   double input = input0x3063e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x3064810() {
   double input = -1.19296;
   input += synapse0x3064b50();
   input += synapse0x3064b90();
   input += synapse0x3064bd0();
   input += synapse0x3064c10();
   input += synapse0x3064c50();
   input += synapse0x3064c90();
   input += synapse0x3064cd0();
   input += synapse0x3064d10();
   input += synapse0x3064d50();
   input += synapse0x3064d90();
   input += synapse0x3064dd0();
   input += synapse0x3064e10();
   input += synapse0x3064e50();
   input += synapse0x3064e90();
   input += synapse0x3064ed0();
   input += synapse0x3064f10();
   input += synapse0x30649a0();
   input += synapse0x30649e0();
   input += synapse0x3065060();
   input += synapse0x30650a0();
   input += synapse0x30650e0();
   input += synapse0x3065120();
   input += synapse0x3065160();
   input += synapse0x30651a0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x3064810() {
   double input = input0x3064810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x30651e0() {
   double input = 1.44332;
   input += synapse0x3065520();
   input += synapse0x3065560();
   input += synapse0x30655a0();
   input += synapse0x30655e0();
   input += synapse0x3065620();
   input += synapse0x3065660();
   input += synapse0x30656a0();
   input += synapse0x30656e0();
   input += synapse0x3065720();
   input += synapse0x305d8e0();
   input += synapse0x305d920();
   input += synapse0x305d960();
   input += synapse0x305d9a0();
   input += synapse0x305d9e0();
   input += synapse0x305da20();
   input += synapse0x305da60();
   input += synapse0x3065370();
   input += synapse0x30653b0();
   input += synapse0x305dbb0();
   input += synapse0x305dbf0();
   input += synapse0x305dc30();
   input += synapse0x305dc70();
   input += synapse0x305dcb0();
   input += synapse0x305dcf0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x30651e0() {
   double input = input0x30651e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x305dd30() {
   double input = 0.404169;
   input += synapse0x305e070();
   input += synapse0x305e0b0();
   input += synapse0x305e0f0();
   input += synapse0x305e130();
   input += synapse0x305e170();
   input += synapse0x305e1b0();
   input += synapse0x305e1f0();
   input += synapse0x305e230();
   input += synapse0x305e270();
   input += synapse0x305e2b0();
   input += synapse0x305e2f0();
   input += synapse0x305e330();
   input += synapse0x305e370();
   input += synapse0x305e3b0();
   input += synapse0x305e3f0();
   input += synapse0x305e430();
   input += synapse0x305dec0();
   input += synapse0x305df00();
   input += synapse0x305e580();
   input += synapse0x305e5c0();
   input += synapse0x305e600();
   input += synapse0x305e640();
   input += synapse0x305e680();
   input += synapse0x305e6c0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x305dd30() {
   double input = input0x305dd30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x305e700() {
   double input = 1.22142;
   input += synapse0x305e890();
   input += synapse0x3067920();
   input += synapse0x3067960();
   input += synapse0x30679a0();
   input += synapse0x30679e0();
   input += synapse0x3067a20();
   input += synapse0x3067a60();
   input += synapse0x3067aa0();
   input += synapse0x3067ae0();
   input += synapse0x3067b20();
   input += synapse0x3067b60();
   input += synapse0x3067ba0();
   input += synapse0x3067be0();
   input += synapse0x3067c20();
   input += synapse0x3067c60();
   input += synapse0x3067ca0();
   input += synapse0x3067770();
   input += synapse0x30677b0();
   input += synapse0x3067df0();
   input += synapse0x3067e30();
   input += synapse0x3067e70();
   input += synapse0x3067eb0();
   input += synapse0x3067ef0();
   input += synapse0x3067f30();
   return input;
}

double NNfunction_sb_cLuL::neuron0x305e700() {
   double input = input0x305e700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x3067f70() {
   double input = 0.748412;
   input += synapse0x30682b0();
   input += synapse0x30682f0();
   input += synapse0x3068330();
   input += synapse0x3068370();
   input += synapse0x30683b0();
   input += synapse0x30683f0();
   input += synapse0x3068430();
   input += synapse0x3068470();
   input += synapse0x30684b0();
   input += synapse0x30684f0();
   input += synapse0x3068530();
   input += synapse0x3068570();
   input += synapse0x30685b0();
   input += synapse0x30685f0();
   input += synapse0x3068630();
   input += synapse0x3068670();
   input += synapse0x3068100();
   input += synapse0x3068140();
   input += synapse0x30687c0();
   input += synapse0x3068800();
   input += synapse0x3068840();
   input += synapse0x3068880();
   input += synapse0x30688c0();
   input += synapse0x3068900();
   return input;
}

double NNfunction_sb_cLuL::neuron0x3067f70() {
   double input = input0x3067f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x3068940() {
   double input = -0.197838;
   input += synapse0x3068c80();
   input += synapse0x3068cc0();
   input += synapse0x3068d00();
   input += synapse0x3068d40();
   input += synapse0x3068d80();
   input += synapse0x3068dc0();
   input += synapse0x3068e00();
   input += synapse0x3068e40();
   input += synapse0x3068e80();
   input += synapse0x3068ec0();
   input += synapse0x3068f00();
   input += synapse0x3068f40();
   input += synapse0x3068f80();
   input += synapse0x3068fc0();
   input += synapse0x3069000();
   input += synapse0x3069040();
   input += synapse0x3068ad0();
   input += synapse0x3068b10();
   input += synapse0x3069190();
   input += synapse0x30691d0();
   input += synapse0x3069210();
   input += synapse0x3069250();
   input += synapse0x3069290();
   input += synapse0x30692d0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x3068940() {
   double input = input0x3068940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x3069310() {
   double input = 0.870671;
   input += synapse0x3069650();
   input += synapse0x3069690();
   input += synapse0x30696d0();
   input += synapse0x3069710();
   input += synapse0x3069750();
   input += synapse0x3069790();
   input += synapse0x30697d0();
   input += synapse0x3069810();
   input += synapse0x3069850();
   input += synapse0x3069890();
   input += synapse0x30698d0();
   input += synapse0x3069910();
   input += synapse0x3069950();
   input += synapse0x3069990();
   input += synapse0x30699d0();
   input += synapse0x3069a10();
   input += synapse0x30694a0();
   input += synapse0x30694e0();
   input += synapse0x3069b60();
   input += synapse0x3069ba0();
   input += synapse0x3069be0();
   input += synapse0x3069c20();
   input += synapse0x3069c60();
   input += synapse0x3069ca0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x3069310() {
   double input = input0x3069310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x3069ce0() {
   double input = -0.559815;
   input += synapse0x306a020();
   input += synapse0x306a060();
   input += synapse0x306a0a0();
   input += synapse0x306a0e0();
   input += synapse0x306a120();
   input += synapse0x306a160();
   input += synapse0x306a1a0();
   input += synapse0x306a1e0();
   input += synapse0x306a220();
   input += synapse0x306a260();
   input += synapse0x306a2a0();
   input += synapse0x306a2e0();
   input += synapse0x306a320();
   input += synapse0x306a360();
   input += synapse0x306a3a0();
   input += synapse0x306a3e0();
   input += synapse0x3069e70();
   input += synapse0x3069eb0();
   input += synapse0x306a530();
   input += synapse0x306a570();
   input += synapse0x306a5b0();
   input += synapse0x306a5f0();
   input += synapse0x306a630();
   input += synapse0x306a670();
   return input;
}

double NNfunction_sb_cLuL::neuron0x3069ce0() {
   double input = input0x3069ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x306a6b0() {
   double input = 0.662176;
   input += synapse0x306a9f0();
   input += synapse0x306aa30();
   input += synapse0x306aa70();
   input += synapse0x306aab0();
   input += synapse0x306aaf0();
   input += synapse0x306ab30();
   input += synapse0x306ab70();
   input += synapse0x306abb0();
   input += synapse0x306abf0();
   input += synapse0x306ac30();
   input += synapse0x306ac70();
   input += synapse0x306acb0();
   input += synapse0x306acf0();
   input += synapse0x306ad30();
   input += synapse0x306ad70();
   input += synapse0x306adb0();
   input += synapse0x306a840();
   input += synapse0x306a880();
   input += synapse0x306af00();
   input += synapse0x306af40();
   input += synapse0x306af80();
   input += synapse0x306afc0();
   input += synapse0x306b000();
   input += synapse0x306b040();
   return input;
}

double NNfunction_sb_cLuL::neuron0x306a6b0() {
   double input = input0x306a6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x306b080() {
   double input = 1.0313;
   input += synapse0x306b3c0();
   input += synapse0x306b400();
   input += synapse0x306b440();
   input += synapse0x306b480();
   input += synapse0x306b4c0();
   input += synapse0x306b500();
   input += synapse0x306b540();
   input += synapse0x306b580();
   input += synapse0x306b5c0();
   input += synapse0x306b600();
   input += synapse0x306b640();
   input += synapse0x306b680();
   input += synapse0x306b6c0();
   input += synapse0x306b700();
   input += synapse0x306b740();
   input += synapse0x306b780();
   input += synapse0x306b210();
   input += synapse0x306b250();
   input += synapse0x306b8d0();
   input += synapse0x306b910();
   input += synapse0x306b950();
   input += synapse0x306b990();
   input += synapse0x306b9d0();
   input += synapse0x306ba10();
   return input;
}

double NNfunction_sb_cLuL::neuron0x306b080() {
   double input = input0x306b080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x306ba50() {
   double input = 1.21436;
   input += synapse0x306bd90();
   input += synapse0x306bdd0();
   input += synapse0x306be10();
   input += synapse0x306be50();
   input += synapse0x306be90();
   input += synapse0x306bed0();
   input += synapse0x306bf10();
   input += synapse0x306bf50();
   input += synapse0x306bf90();
   input += synapse0x306bfd0();
   input += synapse0x306c010();
   input += synapse0x306c050();
   input += synapse0x306c090();
   input += synapse0x306c0d0();
   input += synapse0x306c110();
   input += synapse0x306c150();
   input += synapse0x306bbe0();
   input += synapse0x306bc20();
   input += synapse0x306c2a0();
   input += synapse0x306c2e0();
   input += synapse0x306c320();
   input += synapse0x306c360();
   input += synapse0x306c3a0();
   input += synapse0x306c3e0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x306ba50() {
   double input = input0x306ba50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x306c420() {
   double input = 1.05388;
   input += synapse0x306c760();
   input += synapse0x3060d30();
   input += synapse0x3060d70();
   input += synapse0x3060db0();
   input += synapse0x3061000();
   input += synapse0x3061040();
   input += synapse0x3061080();
   input += synapse0x30612d0();
   input += synapse0x3061310();
   input += synapse0x3061560();
   input += synapse0x30615a0();
   input += synapse0x30615e0();
   input += synapse0x3061830();
   input += synapse0x3061870();
   input += synapse0x3061ac0();
   input += synapse0x3061b00();
   input += synapse0x306c5b0();
   input += synapse0x306c5f0();
   input += synapse0x3061c50();
   input += synapse0x3062160();
   input += synapse0x30621a0();
   input += synapse0x30621e0();
   input += synapse0x3062430();
   input += synapse0x3062470();
   return input;
}

double NNfunction_sb_cLuL::neuron0x306c420() {
   double input = input0x306c420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x30624b0() {
   double input = 3.80723;
   input += synapse0x3061d20();
   input += synapse0x3061d60();
   input += synapse0x3061da0();
   input += synapse0x3061de0();
   input += synapse0x3062760();
   input += synapse0x306eab0();
   input += synapse0x306eaf0();
   input += synapse0x306eb30();
   input += synapse0x306eb70();
   input += synapse0x306ebb0();
   input += synapse0x306ebf0();
   input += synapse0x306ec30();
   input += synapse0x306ec70();
   input += synapse0x306ecb0();
   input += synapse0x306ecf0();
   input += synapse0x306ed30();
   input += synapse0x3062640();
   input += synapse0x3062680();
   input += synapse0x306ee80();
   input += synapse0x306eec0();
   input += synapse0x306ef00();
   input += synapse0x306ef40();
   input += synapse0x306ef80();
   input += synapse0x306efc0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x30624b0() {
   double input = input0x30624b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x306f000() {
   double input = 0.955349;
   input += synapse0x306f340();
   input += synapse0x306f380();
   input += synapse0x306f3c0();
   input += synapse0x306f400();
   input += synapse0x306f440();
   input += synapse0x306f480();
   input += synapse0x306f4c0();
   input += synapse0x306f500();
   input += synapse0x306f540();
   input += synapse0x306f580();
   input += synapse0x306f5c0();
   input += synapse0x306f600();
   input += synapse0x306f640();
   input += synapse0x306f680();
   input += synapse0x306f6c0();
   input += synapse0x306f700();
   input += synapse0x306f190();
   input += synapse0x306f1d0();
   input += synapse0x306f850();
   input += synapse0x306f890();
   input += synapse0x306f8d0();
   input += synapse0x306f910();
   input += synapse0x306f950();
   input += synapse0x306f990();
   return input;
}

double NNfunction_sb_cLuL::neuron0x306f000() {
   double input = input0x306f000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x306f9d0() {
   double input = -2.22015;
   input += synapse0x306fd10();
   input += synapse0x306fd50();
   input += synapse0x306fd90();
   input += synapse0x306fdd0();
   input += synapse0x306fe10();
   input += synapse0x306fe50();
   input += synapse0x306fe90();
   input += synapse0x306fed0();
   input += synapse0x306ff10();
   input += synapse0x306ff50();
   input += synapse0x306ff90();
   input += synapse0x306ffd0();
   input += synapse0x3070010();
   input += synapse0x3070050();
   input += synapse0x3070090();
   input += synapse0x30700d0();
   input += synapse0x306fb60();
   input += synapse0x306fba0();
   input += synapse0x3070220();
   input += synapse0x3070260();
   input += synapse0x30702a0();
   input += synapse0x30702e0();
   input += synapse0x3070320();
   input += synapse0x3070360();
   return input;
}

double NNfunction_sb_cLuL::neuron0x306f9d0() {
   double input = input0x306f9d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x30703a0() {
   double input = 0.116386;
   input += synapse0x30706e0();
   input += synapse0x3070720();
   input += synapse0x3070760();
   input += synapse0x30707a0();
   input += synapse0x30707e0();
   input += synapse0x3070820();
   input += synapse0x3070860();
   input += synapse0x30708a0();
   input += synapse0x30708e0();
   input += synapse0x3070920();
   input += synapse0x3070960();
   input += synapse0x30709a0();
   input += synapse0x30709e0();
   input += synapse0x3070a20();
   input += synapse0x3070a60();
   input += synapse0x3070aa0();
   input += synapse0x3070530();
   input += synapse0x3070570();
   input += synapse0x3070bf0();
   input += synapse0x3070c30();
   input += synapse0x3070c70();
   input += synapse0x3070cb0();
   input += synapse0x3070cf0();
   input += synapse0x3070d30();
   return input;
}

double NNfunction_sb_cLuL::neuron0x30703a0() {
   double input = input0x30703a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x3070d70() {
   double input = 1.08438;
   input += synapse0x30710b0();
   input += synapse0x30710f0();
   input += synapse0x3071130();
   input += synapse0x3071170();
   input += synapse0x30711b0();
   input += synapse0x30711f0();
   input += synapse0x3071230();
   input += synapse0x3071270();
   input += synapse0x30712b0();
   input += synapse0x30712f0();
   input += synapse0x3071330();
   input += synapse0x3071370();
   input += synapse0x30713b0();
   input += synapse0x30713f0();
   input += synapse0x3071430();
   input += synapse0x3071470();
   input += synapse0x3070f00();
   input += synapse0x3070f40();
   input += synapse0x30715c0();
   input += synapse0x3071600();
   input += synapse0x3071640();
   input += synapse0x3071680();
   input += synapse0x30716c0();
   input += synapse0x3071700();
   return input;
}

double NNfunction_sb_cLuL::neuron0x3070d70() {
   double input = input0x3070d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x3071740() {
   double input = 1.09364;
   input += synapse0x3071a80();
   input += synapse0x3071ac0();
   input += synapse0x3071b00();
   input += synapse0x3071b40();
   input += synapse0x3071b80();
   input += synapse0x3071bc0();
   input += synapse0x3071c00();
   input += synapse0x3071c40();
   input += synapse0x3071c80();
   input += synapse0x3071cc0();
   input += synapse0x3071d00();
   input += synapse0x3071d40();
   input += synapse0x3071d80();
   input += synapse0x3071dc0();
   input += synapse0x3071e00();
   input += synapse0x3071e40();
   input += synapse0x30718d0();
   input += synapse0x3071910();
   input += synapse0x3071f90();
   input += synapse0x3071fd0();
   input += synapse0x3072010();
   input += synapse0x3072050();
   input += synapse0x3072090();
   input += synapse0x30720d0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x3071740() {
   double input = input0x3071740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x3072110() {
   double input = 1.47527;
   input += synapse0x3072450();
   input += synapse0x3072490();
   input += synapse0x30724d0();
   input += synapse0x3072510();
   input += synapse0x3072550();
   input += synapse0x3072590();
   input += synapse0x30725d0();
   input += synapse0x3072610();
   input += synapse0x3072650();
   input += synapse0x3072690();
   input += synapse0x30726d0();
   input += synapse0x3072710();
   input += synapse0x3072750();
   input += synapse0x3072790();
   input += synapse0x30727d0();
   input += synapse0x3072810();
   input += synapse0x30722a0();
   input += synapse0x30722e0();
   input += synapse0x3072960();
   input += synapse0x30729a0();
   input += synapse0x30729e0();
   input += synapse0x3072a20();
   input += synapse0x3072a60();
   input += synapse0x3072aa0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x3072110() {
   double input = input0x3072110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x3072ae0() {
   double input = -2.30213;
   input += synapse0x3072e20();
   input += synapse0x3072e60();
   input += synapse0x3072ea0();
   input += synapse0x3072ee0();
   input += synapse0x3072f20();
   input += synapse0x3072f60();
   input += synapse0x3072fa0();
   input += synapse0x3072fe0();
   input += synapse0x3073020();
   input += synapse0x3073060();
   input += synapse0x30730a0();
   input += synapse0x30730e0();
   input += synapse0x3073120();
   input += synapse0x3073160();
   input += synapse0x30731a0();
   input += synapse0x30731e0();
   input += synapse0x3072c70();
   input += synapse0x3072cb0();
   input += synapse0x3073330();
   input += synapse0x3073370();
   input += synapse0x30733b0();
   input += synapse0x30733f0();
   input += synapse0x3073430();
   input += synapse0x3073470();
   return input;
}

double NNfunction_sb_cLuL::neuron0x3072ae0() {
   double input = input0x3072ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x30734b0() {
   double input = 0.607179;
   input += synapse0x305bf20();
   input += synapse0x305bf60();
   input += synapse0x305bfa0();
   input += synapse0x305bfe0();
   input += synapse0x305c020();
   input += synapse0x305c060();
   input += synapse0x305c0a0();
   input += synapse0x305c0e0();
   input += synapse0x3073c00();
   input += synapse0x3073c40();
   input += synapse0x3073c80();
   input += synapse0x3073cc0();
   input += synapse0x3073d00();
   input += synapse0x3073d40();
   input += synapse0x3073d80();
   input += synapse0x3073dc0();
   input += synapse0x3073640();
   input += synapse0x3073680();
   input += synapse0x3073f10();
   input += synapse0x3073f50();
   input += synapse0x3073f90();
   input += synapse0x3073fd0();
   input += synapse0x3074010();
   input += synapse0x3074050();
   return input;
}

double NNfunction_sb_cLuL::neuron0x30734b0() {
   double input = input0x30734b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x3074090() {
   double input = 0.68329;
   input += synapse0x30743d0();
   input += synapse0x3074410();
   input += synapse0x3074450();
   input += synapse0x3074490();
   input += synapse0x30744d0();
   input += synapse0x3074510();
   input += synapse0x3074550();
   input += synapse0x3074590();
   input += synapse0x30745d0();
   input += synapse0x3074610();
   input += synapse0x3074650();
   input += synapse0x3074690();
   input += synapse0x30746d0();
   input += synapse0x3074710();
   input += synapse0x3074750();
   input += synapse0x3074790();
   input += synapse0x3074220();
   input += synapse0x3074260();
   input += synapse0x30748e0();
   input += synapse0x3074920();
   input += synapse0x3074960();
   input += synapse0x30749a0();
   input += synapse0x30749e0();
   input += synapse0x3074a20();
   return input;
}

double NNfunction_sb_cLuL::neuron0x3074090() {
   double input = input0x3074090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x3074a60() {
   double input = -0.149472;
   input += synapse0x3074da0();
   input += synapse0x3074de0();
   input += synapse0x3074e20();
   input += synapse0x3074e60();
   input += synapse0x3074ea0();
   input += synapse0x3074ee0();
   input += synapse0x3074f20();
   input += synapse0x3074f60();
   input += synapse0x3074fa0();
   input += synapse0x3074fe0();
   input += synapse0x3075020();
   input += synapse0x3075060();
   input += synapse0x30750a0();
   input += synapse0x30750e0();
   input += synapse0x3075120();
   input += synapse0x3075160();
   input += synapse0x3074bf0();
   input += synapse0x3074c30();
   input += synapse0x3065760();
   input += synapse0x30657a0();
   input += synapse0x30657e0();
   input += synapse0x3065820();
   input += synapse0x3065860();
   input += synapse0x30658a0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x3074a60() {
   double input = input0x3074a60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x30658e0() {
   double input = 0.0315299;
   input += synapse0x3065c20();
   input += synapse0x3065c60();
   input += synapse0x3065ca0();
   input += synapse0x3065ce0();
   input += synapse0x3065d20();
   input += synapse0x3065d60();
   input += synapse0x3065da0();
   input += synapse0x3065de0();
   input += synapse0x3065e20();
   input += synapse0x3065e60();
   input += synapse0x3065ea0();
   input += synapse0x3065ee0();
   input += synapse0x3065f20();
   input += synapse0x3065f60();
   input += synapse0x3065fa0();
   input += synapse0x3065fe0();
   input += synapse0x3065a70();
   input += synapse0x3065ab0();
   input += synapse0x3066130();
   input += synapse0x3066170();
   input += synapse0x30661b0();
   input += synapse0x30661f0();
   input += synapse0x3066230();
   input += synapse0x3066270();
   return input;
}

double NNfunction_sb_cLuL::neuron0x30658e0() {
   double input = input0x30658e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x30662b0() {
   double input = -0.47032;
   input += synapse0x30665f0();
   input += synapse0x3066630();
   input += synapse0x3066670();
   input += synapse0x30666b0();
   input += synapse0x30666f0();
   input += synapse0x3066730();
   input += synapse0x3066770();
   input += synapse0x30667b0();
   input += synapse0x30667f0();
   input += synapse0x3066830();
   input += synapse0x3066870();
   input += synapse0x30668b0();
   input += synapse0x30668f0();
   input += synapse0x3066930();
   input += synapse0x3066970();
   input += synapse0x30669b0();
   input += synapse0x3066440();
   input += synapse0x3066480();
   input += synapse0x3066b00();
   input += synapse0x3066b40();
   input += synapse0x3066b80();
   input += synapse0x3066bc0();
   input += synapse0x3066c00();
   input += synapse0x3066c40();
   return input;
}

double NNfunction_sb_cLuL::neuron0x30662b0() {
   double input = input0x30662b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x3066c80() {
   double input = 0.283469;
   input += synapse0x3066fc0();
   input += synapse0x3067000();
   input += synapse0x3067040();
   input += synapse0x3067080();
   input += synapse0x30670c0();
   input += synapse0x3067100();
   input += synapse0x3067140();
   input += synapse0x3067180();
   input += synapse0x30671c0();
   input += synapse0x3067200();
   input += synapse0x3067240();
   input += synapse0x3067280();
   input += synapse0x30672c0();
   input += synapse0x3067300();
   input += synapse0x3067340();
   input += synapse0x3067380();
   input += synapse0x3066e10();
   input += synapse0x3066e50();
   input += synapse0x30674d0();
   input += synapse0x3067510();
   input += synapse0x3067550();
   input += synapse0x3067590();
   input += synapse0x30675d0();
   input += synapse0x3067610();
   return input;
}

double NNfunction_sb_cLuL::neuron0x3066c80() {
   double input = input0x3066c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x30792c0() {
   double input = -1.02377;
   input += synapse0x30794e0();
   input += synapse0x3079520();
   input += synapse0x3079560();
   input += synapse0x30795a0();
   input += synapse0x30795e0();
   input += synapse0x3079620();
   input += synapse0x3079660();
   input += synapse0x30796a0();
   input += synapse0x30796e0();
   input += synapse0x3079720();
   input += synapse0x3079760();
   input += synapse0x30797a0();
   input += synapse0x30797e0();
   input += synapse0x3079820();
   input += synapse0x3079860();
   input += synapse0x30798a0();
   input += synapse0x3067650();
   input += synapse0x3067690();
   input += synapse0x30799f0();
   input += synapse0x3079a30();
   input += synapse0x3079a70();
   input += synapse0x3079ab0();
   input += synapse0x3079af0();
   input += synapse0x3079b30();
   return input;
}

double NNfunction_sb_cLuL::neuron0x30792c0() {
   double input = input0x30792c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x3079b70() {
   double input = -0.293669;
   input += synapse0x3079eb0();
   input += synapse0x3079ef0();
   input += synapse0x3079f30();
   input += synapse0x3079f70();
   input += synapse0x3079fb0();
   input += synapse0x3079ff0();
   input += synapse0x307a030();
   input += synapse0x307a070();
   input += synapse0x307a0b0();
   input += synapse0x307a0f0();
   input += synapse0x307a130();
   input += synapse0x307a170();
   input += synapse0x307a1b0();
   input += synapse0x307a1f0();
   input += synapse0x307a230();
   input += synapse0x307a270();
   input += synapse0x3079d00();
   input += synapse0x3079d40();
   input += synapse0x307a3c0();
   input += synapse0x307a400();
   input += synapse0x307a440();
   input += synapse0x307a480();
   input += synapse0x307a4c0();
   input += synapse0x307a500();
   return input;
}

double NNfunction_sb_cLuL::neuron0x3079b70() {
   double input = input0x3079b70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x307a540() {
   double input = 1.77479;
   input += synapse0x307a880();
   input += synapse0x307a8c0();
   input += synapse0x307a900();
   input += synapse0x307a940();
   input += synapse0x307a980();
   input += synapse0x307a9c0();
   input += synapse0x307aa00();
   input += synapse0x307aa40();
   input += synapse0x307aa80();
   input += synapse0x307aac0();
   input += synapse0x307ab00();
   input += synapse0x307ab40();
   input += synapse0x307ab80();
   input += synapse0x307abc0();
   input += synapse0x307ac00();
   input += synapse0x307ac40();
   input += synapse0x307a6d0();
   input += synapse0x307a710();
   input += synapse0x307ad90();
   input += synapse0x307add0();
   input += synapse0x307ae10();
   input += synapse0x307ae50();
   input += synapse0x307ae90();
   input += synapse0x307aed0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x307a540() {
   double input = input0x307a540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x307af10() {
   double input = 0.380908;
   input += synapse0x307b250();
   input += synapse0x307b290();
   input += synapse0x307b2d0();
   input += synapse0x307b310();
   input += synapse0x307b350();
   input += synapse0x307b390();
   input += synapse0x307b3d0();
   input += synapse0x307b410();
   input += synapse0x307b450();
   input += synapse0x307b490();
   input += synapse0x307b4d0();
   input += synapse0x307b510();
   input += synapse0x307b550();
   input += synapse0x307b590();
   input += synapse0x307b5d0();
   input += synapse0x307b610();
   input += synapse0x307b0a0();
   input += synapse0x307b0e0();
   input += synapse0x307b760();
   input += synapse0x307b7a0();
   input += synapse0x307b7e0();
   input += synapse0x307b820();
   input += synapse0x307b860();
   input += synapse0x307b8a0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x307af10() {
   double input = input0x307af10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x3082110() {
   double input = -0.237858;
   input += synapse0x2e1b710();
   input += synapse0x2e1b750();
   input += synapse0x3058250();
   input += synapse0x3058290();
   input += synapse0x3059d20();
   input += synapse0x3059d60();
   input += synapse0x305aaf0();
   input += synapse0x305ab30();
   input += synapse0x305b4c0();
   input += synapse0x305b500();
   input += synapse0x305be90();
   input += synapse0x305bed0();
   input += synapse0x305c970();
   input += synapse0x305c9b0();
   input += synapse0x305d340();
   input += synapse0x305d380();
   input += synapse0x305a420();
   input += synapse0x305a460();
   input += synapse0x305eef0();
   input += synapse0x305ef30();
   input += synapse0x305f8c0();
   input += synapse0x305f900();
   input += synapse0x3060290();
   input += synapse0x30602d0();
   input += synapse0x3060c60();
   input += synapse0x3060ca0();
   input += synapse0x3053cf0();
   input += synapse0x3053d30();
   input += synapse0x3062d50();
   input += synapse0x3062d90();
   input += synapse0x3063720();
   input += synapse0x3063760();
   input += synapse0x30640f0();
   input += synapse0x3064130();
   input += synapse0x3064ac0();
   input += synapse0x3064b00();
   input += synapse0x3065490();
   input += synapse0x30654d0();
   input += synapse0x305dfe0();
   input += synapse0x305e020();
   input += synapse0x3067890();
   input += synapse0x30678d0();
   input += synapse0x3068220();
   input += synapse0x3068260();
   input += synapse0x3068bf0();
   input += synapse0x3068c30();
   input += synapse0x30695c0();
   input += synapse0x3069600();
   input += synapse0x3069f90();
   input += synapse0x3069fd0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x3082110() {
   double input = input0x3082110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x30824b0() {
   double input = -0.775176;
   input += synapse0x306c6d0();
   input += synapse0x306c710();
   input += synapse0x3061c90();
   input += synapse0x3061cd0();
   input += synapse0x306f2b0();
   input += synapse0x306f2f0();
   input += synapse0x306fc80();
   input += synapse0x306fcc0();
   input += synapse0x3070650();
   input += synapse0x3070690();
   input += synapse0x3071020();
   input += synapse0x3071060();
   input += synapse0x30719f0();
   input += synapse0x3071a30();
   input += synapse0x30723c0();
   input += synapse0x3072400();
   input += synapse0x3072d90();
   input += synapse0x3072dd0();
   input += synapse0x3073760();
   input += synapse0x30737a0();
   input += synapse0x3074340();
   input += synapse0x3074380();
   input += synapse0x3074d10();
   input += synapse0x3074d50();
   input += synapse0x3065b90();
   input += synapse0x3065bd0();
   input += synapse0x3066560();
   input += synapse0x30665a0();
   input += synapse0x3066f30();
   input += synapse0x3066f70();
   input += synapse0x3079450();
   input += synapse0x3079490();
   input += synapse0x3079e20();
   input += synapse0x3079e60();
   input += synapse0x307a7f0();
   input += synapse0x307a830();
   input += synapse0x307b1c0();
   input += synapse0x307b200();
   input += synapse0x3056150();
   input += synapse0x3056190();
   input += synapse0x306a960();
   input += synapse0x306a9a0();
   input += synapse0x307b8e0();
   input += synapse0x307b920();
   input += synapse0x307b960();
   input += synapse0x307b9a0();
   input += synapse0x3082850();
   input += synapse0x3082890();
   input += synapse0x30828d0();
   input += synapse0x3082910();
   return input;
}

double NNfunction_sb_cLuL::neuron0x30824b0() {
   double input = input0x30824b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x3082950() {
   double input = -1.18037;
   input += synapse0x3082c90();
   input += synapse0x3082cd0();
   input += synapse0x3082d10();
   input += synapse0x3082d50();
   input += synapse0x3082d90();
   input += synapse0x3082dd0();
   input += synapse0x3082e10();
   input += synapse0x3082e50();
   input += synapse0x3082e90();
   input += synapse0x3082ed0();
   input += synapse0x3082f10();
   input += synapse0x3082f50();
   input += synapse0x3082f90();
   input += synapse0x3082fd0();
   input += synapse0x3083010();
   input += synapse0x3083050();
   input += synapse0x3082ae0();
   input += synapse0x3082b20();
   input += synapse0x30831a0();
   input += synapse0x30831e0();
   input += synapse0x3083220();
   input += synapse0x3083260();
   input += synapse0x30832a0();
   input += synapse0x30832e0();
   input += synapse0x3083320();
   input += synapse0x3083360();
   input += synapse0x30833a0();
   input += synapse0x30833e0();
   input += synapse0x3083420();
   input += synapse0x3083460();
   input += synapse0x30834a0();
   input += synapse0x30834e0();
   input += synapse0x3083090();
   input += synapse0x30830d0();
   input += synapse0x3083110();
   input += synapse0x3083150();
   input += synapse0x3083730();
   input += synapse0x3083770();
   input += synapse0x30837b0();
   input += synapse0x30837f0();
   input += synapse0x3083830();
   input += synapse0x3083870();
   input += synapse0x30838b0();
   input += synapse0x30838f0();
   input += synapse0x3083930();
   input += synapse0x3083970();
   input += synapse0x30839b0();
   input += synapse0x30839f0();
   input += synapse0x3083a30();
   input += synapse0x3083a70();
   return input;
}

double NNfunction_sb_cLuL::neuron0x3082950() {
   double input = input0x3082950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x3083ab0() {
   double input = 0.858341;
   input += synapse0x3083df0();
   input += synapse0x3083e30();
   input += synapse0x3083e70();
   input += synapse0x3083eb0();
   input += synapse0x3083ef0();
   input += synapse0x3083f30();
   input += synapse0x3083f70();
   input += synapse0x3083fb0();
   input += synapse0x3083ff0();
   input += synapse0x3084030();
   input += synapse0x3084070();
   input += synapse0x30840b0();
   input += synapse0x30840f0();
   input += synapse0x3084130();
   input += synapse0x3084170();
   input += synapse0x30841b0();
   input += synapse0x3083c40();
   input += synapse0x3083c80();
   input += synapse0x3084300();
   input += synapse0x3084340();
   input += synapse0x3084380();
   input += synapse0x30843c0();
   input += synapse0x3084400();
   input += synapse0x3084440();
   input += synapse0x3084480();
   input += synapse0x30844c0();
   input += synapse0x3084500();
   input += synapse0x3084540();
   input += synapse0x3084580();
   input += synapse0x30845c0();
   input += synapse0x3084600();
   input += synapse0x3084640();
   input += synapse0x30841f0();
   input += synapse0x3084230();
   input += synapse0x3084270();
   input += synapse0x30842b0();
   input += synapse0x3084890();
   input += synapse0x30848d0();
   input += synapse0x3084910();
   input += synapse0x3084950();
   input += synapse0x3084990();
   input += synapse0x30849d0();
   input += synapse0x3084a10();
   input += synapse0x3084a50();
   input += synapse0x3084a90();
   input += synapse0x3084ad0();
   input += synapse0x3084b10();
   input += synapse0x3084b50();
   input += synapse0x3084b90();
   input += synapse0x3084bd0();
   return input;
}

double NNfunction_sb_cLuL::neuron0x3083ab0() {
   double input = input0x3083ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x3084c10() {
   double input = -0.214513;
   input += synapse0x3084f50();
   input += synapse0x3084f90();
   input += synapse0x3084fd0();
   input += synapse0x3085010();
   input += synapse0x3085050();
   input += synapse0x3085090();
   input += synapse0x30850d0();
   input += synapse0x3085110();
   input += synapse0x3085150();
   input += synapse0x3085190();
   input += synapse0x30851d0();
   input += synapse0x3085210();
   input += synapse0x3085250();
   input += synapse0x3085290();
   input += synapse0x30852d0();
   input += synapse0x3085310();
   input += synapse0x3084da0();
   input += synapse0x3084de0();
   input += synapse0x3085460();
   input += synapse0x30854a0();
   input += synapse0x30854e0();
   input += synapse0x3085520();
   input += synapse0x3085560();
   input += synapse0x30855a0();
   input += synapse0x30855e0();
   input += synapse0x3085620();
   input += synapse0x3085660();
   input += synapse0x30856a0();
   input += synapse0x30856e0();
   input += synapse0x3085720();
   input += synapse0x3085760();
   input += synapse0x30857a0();
   input += synapse0x3085350();
   input += synapse0x3085390();
   input += synapse0x30853d0();
   input += synapse0x3085410();
   input += synapse0x30859f0();
   input += synapse0x3085a30();
   input += synapse0x3085a70();
   input += synapse0x3085ab0();
   input += synapse0x3085af0();
   input += synapse0x3085b30();
   input += synapse0x3085b70();
   input += synapse0x3085bb0();
   input += synapse0x3085bf0();
   input += synapse0x3085c30();
   input += synapse0x3085c70();
   input += synapse0x3085cb0();
   input += synapse0x3085cf0();
   input += synapse0x3085d30();
   return input;
}

double NNfunction_sb_cLuL::neuron0x3084c10() {
   double input = input0x3084c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_cLuL::input0x3085d70() {
   double input = 8.22524;
   input += synapse0x3085f90();
   input += synapse0x3085fd0();
   input += synapse0x3086010();
   input += synapse0x3086050();
   input += synapse0x3086090();
   return input;
}

double NNfunction_sb_cLuL::neuron0x3085d70() {
   double input = input0x3085d70();
   return (input * 1)+0;
}

double NNfunction_sb_cLuL::synapse0x30561e0() {
   return (neuron0x3050de0()*0.0127568);
}

double NNfunction_sb_cLuL::synapse0x3056220() {
   return (neuron0x3051090()*-0.0317673);
}

double NNfunction_sb_cLuL::synapse0x3056260() {
   return (neuron0x30513d0()*0.280464);
}

double NNfunction_sb_cLuL::synapse0x30562a0() {
   return (neuron0x3051710()*-0.25999);
}

double NNfunction_sb_cLuL::synapse0x30562e0() {
   return (neuron0x3051a50()*0.0784461);
}

double NNfunction_sb_cLuL::synapse0x3056320() {
   return (neuron0x3051d90()*0.0825881);
}

double NNfunction_sb_cLuL::synapse0x3056360() {
   return (neuron0x30520d0()*0.00404514);
}

double NNfunction_sb_cLuL::synapse0x30563a0() {
   return (neuron0x3052410()*0.00891539);
}

double NNfunction_sb_cLuL::synapse0x30563e0() {
   return (neuron0x3052750()*-0.00620351);
}

double NNfunction_sb_cLuL::synapse0x3056420() {
   return (neuron0x3052a90()*-0.00177506);
}

double NNfunction_sb_cLuL::synapse0x3056460() {
   return (neuron0x3052dd0()*-0.0361732);
}

double NNfunction_sb_cLuL::synapse0x30564a0() {
   return (neuron0x3053110()*-0.0839832);
}

double NNfunction_sb_cLuL::synapse0x30564e0() {
   return (neuron0x3053450()*0.00884962);
}

double NNfunction_sb_cLuL::synapse0x3056520() {
   return (neuron0x3053790()*0.0571988);
}

double NNfunction_sb_cLuL::synapse0x3056560() {
   return (neuron0x3053ad0()*-0.19354);
}

double NNfunction_sb_cLuL::synapse0x30565a0() {
   return (neuron0x3053e10()*-0.0676853);
}

double NNfunction_sb_cLuL::synapse0x3056030() {
   return (neuron0x3054150()*0.0958271);
}

double NNfunction_sb_cLuL::synapse0x3056070() {
   return (neuron0x30546b0()*-0.192229);
}

double NNfunction_sb_cLuL::synapse0x2e0cfc0() {
   return (neuron0x30549f0()*-0.132939);
}

double NNfunction_sb_cLuL::synapse0x2e0d000() {
   return (neuron0x3054d30()*0.0323791);
}

double NNfunction_sb_cLuL::synapse0x30565e0() {
   return (neuron0x3055070()*-0.0488519);
}

double NNfunction_sb_cLuL::synapse0x3056620() {
   return (neuron0x30553b0()*-0.0147596);
}

double NNfunction_sb_cLuL::synapse0x3056660() {
   return (neuron0x30556f0()*0.0152662);
}

double NNfunction_sb_cLuL::synapse0x30566a0() {
   return (neuron0x3055a30()*-0.00383945);
}

double NNfunction_sb_cLuL::synapse0x3056a20() {
   return (neuron0x3050de0()*-0.232862);
}

double NNfunction_sb_cLuL::synapse0x3056a60() {
   return (neuron0x3051090()*-0.165102);
}

double NNfunction_sb_cLuL::synapse0x3056aa0() {
   return (neuron0x30513d0()*0.185244);
}

double NNfunction_sb_cLuL::synapse0x3056ae0() {
   return (neuron0x3051710()*0.347997);
}

double NNfunction_sb_cLuL::synapse0x3056b20() {
   return (neuron0x3051a50()*-0.965794);
}

double NNfunction_sb_cLuL::synapse0x3056b60() {
   return (neuron0x3051d90()*0.445142);
}

double NNfunction_sb_cLuL::synapse0x3056ba0() {
   return (neuron0x30520d0()*0.606902);
}

double NNfunction_sb_cLuL::synapse0x3056be0() {
   return (neuron0x3052410()*0.193956);
}

double NNfunction_sb_cLuL::synapse0x3056c20() {
   return (neuron0x3052750()*-0.380888);
}

double NNfunction_sb_cLuL::synapse0x2e0ce10() {
   return (neuron0x3052a90()*-0.0213566);
}

double NNfunction_sb_cLuL::synapse0x2e0ce50() {
   return (neuron0x3052dd0()*-0.608356);
}

double NNfunction_sb_cLuL::synapse0x2e0ce90() {
   return (neuron0x3053110()*0.00250049);
}

double NNfunction_sb_cLuL::synapse0x2e0ced0() {
   return (neuron0x3053450()*-1.12895);
}

double NNfunction_sb_cLuL::synapse0x3056e70() {
   return (neuron0x3053790()*-0.0741885);
}

double NNfunction_sb_cLuL::synapse0x3056eb0() {
   return (neuron0x3053ad0()*0.482987);
}

double NNfunction_sb_cLuL::synapse0x3056ef0() {
   return (neuron0x3053e10()*0.174791);
}

double NNfunction_sb_cLuL::synapse0x3056870() {
   return (neuron0x3054150()*0.0554265);
}

double NNfunction_sb_cLuL::synapse0x30568b0() {
   return (neuron0x30546b0()*-0.540701);
}

double NNfunction_sb_cLuL::synapse0x3057040() {
   return (neuron0x30549f0()*0.220361);
}

double NNfunction_sb_cLuL::synapse0x3057080() {
   return (neuron0x3054d30()*-0.183579);
}

double NNfunction_sb_cLuL::synapse0x30570c0() {
   return (neuron0x3055070()*-0.976603);
}

double NNfunction_sb_cLuL::synapse0x3057100() {
   return (neuron0x30553b0()*-0.0161241);
}

double NNfunction_sb_cLuL::synapse0x3057140() {
   return (neuron0x30556f0()*0.58454);
}

double NNfunction_sb_cLuL::synapse0x3057180() {
   return (neuron0x3055a30()*-0.348551);
}

double NNfunction_sb_cLuL::synapse0x3057500() {
   return (neuron0x3050de0()*0.184253);
}

double NNfunction_sb_cLuL::synapse0x3057540() {
   return (neuron0x3051090()*0.0630571);
}

double NNfunction_sb_cLuL::synapse0x3057580() {
   return (neuron0x30513d0()*-0.349952);
}

double NNfunction_sb_cLuL::synapse0x30575c0() {
   return (neuron0x3051710()*1.01364);
}

double NNfunction_sb_cLuL::synapse0x3057600() {
   return (neuron0x3051a50()*0.181457);
}

double NNfunction_sb_cLuL::synapse0x3057640() {
   return (neuron0x3051d90()*-0.00901159);
}

double NNfunction_sb_cLuL::synapse0x3057680() {
   return (neuron0x30520d0()*-0.12952);
}

double NNfunction_sb_cLuL::synapse0x30576c0() {
   return (neuron0x3052410()*-0.0874558);
}

double NNfunction_sb_cLuL::synapse0x3057700() {
   return (neuron0x3052750()*-0.0991525);
}

double NNfunction_sb_cLuL::synapse0x3057740() {
   return (neuron0x3052a90()*0.109918);
}

double NNfunction_sb_cLuL::synapse0x3057780() {
   return (neuron0x3052dd0()*-0.106814);
}

double NNfunction_sb_cLuL::synapse0x30577c0() {
   return (neuron0x3053110()*-0.0489334);
}

double NNfunction_sb_cLuL::synapse0x3057800() {
   return (neuron0x3053450()*-0.0513601);
}

double NNfunction_sb_cLuL::synapse0x3057840() {
   return (neuron0x3053790()*-0.225233);
}

double NNfunction_sb_cLuL::synapse0x3057880() {
   return (neuron0x3053ad0()*0.237406);
}

double NNfunction_sb_cLuL::synapse0x30578c0() {
   return (neuron0x3053e10()*0.20688);
}

double NNfunction_sb_cLuL::synapse0x3057350() {
   return (neuron0x3054150()*-0.0749946);
}

double NNfunction_sb_cLuL::synapse0x3057390() {
   return (neuron0x30546b0()*0.198218);
}

double NNfunction_sb_cLuL::synapse0x2e0d650() {
   return (neuron0x30549f0()*0.0279623);
}

double NNfunction_sb_cLuL::synapse0x2e1af20() {
   return (neuron0x3054d30()*0.00463397);
}

double NNfunction_sb_cLuL::synapse0x2e1af60() {
   return (neuron0x3055070()*0.155093);
}

double NNfunction_sb_cLuL::synapse0x30597f0() {
   return (neuron0x30553b0()*-0.0313558);
}

double NNfunction_sb_cLuL::synapse0x3059830() {
   return (neuron0x30556f0()*0.0981832);
}

double NNfunction_sb_cLuL::synapse0x3050b20() {
   return (neuron0x3055a30()*-0.191106);
}

double NNfunction_sb_cLuL::synapse0x3050bf0() {
   return (neuron0x3050de0()*-0.257403);
}

double NNfunction_sb_cLuL::synapse0x2e1b7a0() {
   return (neuron0x3051090()*-0.0709251);
}

double NNfunction_sb_cLuL::synapse0x3056df0() {
   return (neuron0x30513d0()*0.151314);
}

double NNfunction_sb_cLuL::synapse0x3056e30() {
   return (neuron0x3051710()*-0.694371);
}

double NNfunction_sb_cLuL::synapse0x3057a10() {
   return (neuron0x3051a50()*-0.287147);
}

double NNfunction_sb_cLuL::synapse0x3057a50() {
   return (neuron0x3051d90()*-0.276727);
}

double NNfunction_sb_cLuL::synapse0x3057a90() {
   return (neuron0x30520d0()*0.110724);
}

double NNfunction_sb_cLuL::synapse0x3057ad0() {
   return (neuron0x3052410()*0.356814);
}

double NNfunction_sb_cLuL::synapse0x3057b10() {
   return (neuron0x3052750()*0.287574);
}

double NNfunction_sb_cLuL::synapse0x3057b50() {
   return (neuron0x3052a90()*-0.00580014);
}

double NNfunction_sb_cLuL::synapse0x3057b90() {
   return (neuron0x3052dd0()*0.128222);
}

double NNfunction_sb_cLuL::synapse0x3057bd0() {
   return (neuron0x3053110()*0.357855);
}

double NNfunction_sb_cLuL::synapse0x3057c10() {
   return (neuron0x3053450()*0.709217);
}

double NNfunction_sb_cLuL::synapse0x3057c50() {
   return (neuron0x3053790()*-0.407709);
}

double NNfunction_sb_cLuL::synapse0x3057c90() {
   return (neuron0x3053ad0()*-0.423493);
}

double NNfunction_sb_cLuL::synapse0x3057cd0() {
   return (neuron0x3053e10()*0.369497);
}

double NNfunction_sb_cLuL::synapse0x3050b60() {
   return (neuron0x3054150()*-0.547895);
}

double NNfunction_sb_cLuL::synapse0x3050ba0() {
   return (neuron0x30546b0()*0.240489);
}

double NNfunction_sb_cLuL::synapse0x3057e20() {
   return (neuron0x30549f0()*-0.318318);
}

double NNfunction_sb_cLuL::synapse0x3057e60() {
   return (neuron0x3054d30()*-0.506601);
}

double NNfunction_sb_cLuL::synapse0x3057ea0() {
   return (neuron0x3055070()*-0.382364);
}

double NNfunction_sb_cLuL::synapse0x3057ee0() {
   return (neuron0x30553b0()*0.798798);
}

double NNfunction_sb_cLuL::synapse0x3057f20() {
   return (neuron0x30556f0()*0.290711);
}

double NNfunction_sb_cLuL::synapse0x3057f60() {
   return (neuron0x3055a30()*0.523659);
}

double NNfunction_sb_cLuL::synapse0x30582e0() {
   return (neuron0x3050de0()*0.180711);
}

double NNfunction_sb_cLuL::synapse0x3058320() {
   return (neuron0x3051090()*0.129031);
}

double NNfunction_sb_cLuL::synapse0x3058360() {
   return (neuron0x30513d0()*0.63145);
}

double NNfunction_sb_cLuL::synapse0x30583a0() {
   return (neuron0x3051710()*1.27194);
}

double NNfunction_sb_cLuL::synapse0x30583e0() {
   return (neuron0x3051a50()*-0.28524);
}

double NNfunction_sb_cLuL::synapse0x3058420() {
   return (neuron0x3051d90()*0.29135);
}

double NNfunction_sb_cLuL::synapse0x3058460() {
   return (neuron0x30520d0()*-0.000639176);
}

double NNfunction_sb_cLuL::synapse0x30584a0() {
   return (neuron0x3052410()*-0.00581224);
}

double NNfunction_sb_cLuL::synapse0x30584e0() {
   return (neuron0x3052750()*0.541782);
}

double NNfunction_sb_cLuL::synapse0x3058520() {
   return (neuron0x3052a90()*-0.0959609);
}

double NNfunction_sb_cLuL::synapse0x3058560() {
   return (neuron0x3052dd0()*0.0475446);
}

double NNfunction_sb_cLuL::synapse0x30585a0() {
   return (neuron0x3053110()*0.0782677);
}

double NNfunction_sb_cLuL::synapse0x30585e0() {
   return (neuron0x3053450()*1.01283);
}

double NNfunction_sb_cLuL::synapse0x3058620() {
   return (neuron0x3053790()*-0.0963217);
}

double NNfunction_sb_cLuL::synapse0x3058660() {
   return (neuron0x3053ad0()*0.116809);
}

double NNfunction_sb_cLuL::synapse0x30586a0() {
   return (neuron0x3053e10()*-0.0833327);
}

double NNfunction_sb_cLuL::synapse0x30587f0() {
   return (neuron0x3054150()*0.127519);
}

double NNfunction_sb_cLuL::synapse0x3058130() {
   return (neuron0x30546b0()*-0.0755846);
}

double NNfunction_sb_cLuL::synapse0x3058170() {
   return (neuron0x30549f0()*0.484479);
}

double NNfunction_sb_cLuL::synapse0x3059930() {
   return (neuron0x3054d30()*-0.448736);
}

double NNfunction_sb_cLuL::synapse0x3059970() {
   return (neuron0x3055070()*-0.308025);
}

double NNfunction_sb_cLuL::synapse0x30599b0() {
   return (neuron0x30553b0()*0.0324068);
}

double NNfunction_sb_cLuL::synapse0x30599f0() {
   return (neuron0x30556f0()*-0.07104);
}

double NNfunction_sb_cLuL::synapse0x3059a30() {
   return (neuron0x3055a30()*0.0429338);
}

double NNfunction_sb_cLuL::synapse0x3059db0() {
   return (neuron0x3050de0()*-0.115851);
}

double NNfunction_sb_cLuL::synapse0x3059df0() {
   return (neuron0x3051090()*0.0873193);
}

double NNfunction_sb_cLuL::synapse0x3059e30() {
   return (neuron0x30513d0()*0.109139);
}

double NNfunction_sb_cLuL::synapse0x3059e70() {
   return (neuron0x3051710()*2.15031);
}

double NNfunction_sb_cLuL::synapse0x3059eb0() {
   return (neuron0x3051a50()*-0.0315818);
}

double NNfunction_sb_cLuL::synapse0x3059ef0() {
   return (neuron0x3051d90()*-0.00280444);
}

double NNfunction_sb_cLuL::synapse0x3059f30() {
   return (neuron0x30520d0()*0.0687687);
}

double NNfunction_sb_cLuL::synapse0x3059f70() {
   return (neuron0x3052410()*0.0643913);
}

double NNfunction_sb_cLuL::synapse0x3059fb0() {
   return (neuron0x3052750()*-0.0248483);
}

double NNfunction_sb_cLuL::synapse0x2e1b270() {
   return (neuron0x3052a90()*-0.0592643);
}

double NNfunction_sb_cLuL::synapse0x2e1b2b0() {
   return (neuron0x3052dd0()*-0.0100242);
}

double NNfunction_sb_cLuL::synapse0x2e1b2f0() {
   return (neuron0x3053110()*0.0942923);
}

double NNfunction_sb_cLuL::synapse0x2e1b330() {
   return (neuron0x3053450()*0.303246);
}

double NNfunction_sb_cLuL::synapse0x2e1b370() {
   return (neuron0x3053790()*0.00470201);
}

double NNfunction_sb_cLuL::synapse0x2e1b3b0() {
   return (neuron0x3053ad0()*0.00900219);
}

double NNfunction_sb_cLuL::synapse0x2e1b3f0() {
   return (neuron0x3053e10()*0.057042);
}

double NNfunction_sb_cLuL::synapse0x3059c00() {
   return (neuron0x3054150()*-0.0761711);
}

double NNfunction_sb_cLuL::synapse0x3059c40() {
   return (neuron0x30546b0()*0.000880556);
}

double NNfunction_sb_cLuL::synapse0x2e1b540() {
   return (neuron0x30549f0()*-0.0886863);
}

double NNfunction_sb_cLuL::synapse0x2e1b580() {
   return (neuron0x3054d30()*0.00848973);
}

double NNfunction_sb_cLuL::synapse0x2e1b5c0() {
   return (neuron0x3055070()*0.0398007);
}

double NNfunction_sb_cLuL::synapse0x2e1b600() {
   return (neuron0x30553b0()*-0.000695815);
}

double NNfunction_sb_cLuL::synapse0x2e1b640() {
   return (neuron0x30556f0()*0.0301287);
}

double NNfunction_sb_cLuL::synapse0x305a800() {
   return (neuron0x3055a30()*0.0702363);
}

double NNfunction_sb_cLuL::synapse0x305ab80() {
   return (neuron0x3050de0()*-0.262705);
}

double NNfunction_sb_cLuL::synapse0x305abc0() {
   return (neuron0x3051090()*0.234732);
}

double NNfunction_sb_cLuL::synapse0x305ac00() {
   return (neuron0x30513d0()*0.438583);
}

double NNfunction_sb_cLuL::synapse0x305ac40() {
   return (neuron0x3051710()*-1.12523);
}

double NNfunction_sb_cLuL::synapse0x305ac80() {
   return (neuron0x3051a50()*0.0499076);
}

double NNfunction_sb_cLuL::synapse0x305acc0() {
   return (neuron0x3051d90()*-0.278402);
}

double NNfunction_sb_cLuL::synapse0x305ad00() {
   return (neuron0x30520d0()*-0.102406);
}

double NNfunction_sb_cLuL::synapse0x305ad40() {
   return (neuron0x3052410()*0.0438603);
}

double NNfunction_sb_cLuL::synapse0x305ad80() {
   return (neuron0x3052750()*0.0687964);
}

double NNfunction_sb_cLuL::synapse0x305adc0() {
   return (neuron0x3052a90()*-0.137221);
}

double NNfunction_sb_cLuL::synapse0x305ae00() {
   return (neuron0x3052dd0()*0.278973);
}

double NNfunction_sb_cLuL::synapse0x305ae40() {
   return (neuron0x3053110()*0.046792);
}

double NNfunction_sb_cLuL::synapse0x305ae80() {
   return (neuron0x3053450()*0.68732);
}

double NNfunction_sb_cLuL::synapse0x305aec0() {
   return (neuron0x3053790()*-0.0706845);
}

double NNfunction_sb_cLuL::synapse0x305af00() {
   return (neuron0x3053ad0()*0.862943);
}

double NNfunction_sb_cLuL::synapse0x305af40() {
   return (neuron0x3053e10()*-0.678798);
}

double NNfunction_sb_cLuL::synapse0x305a9d0() {
   return (neuron0x3054150()*0.400418);
}

double NNfunction_sb_cLuL::synapse0x305aa10() {
   return (neuron0x30546b0()*0.893668);
}

double NNfunction_sb_cLuL::synapse0x305b090() {
   return (neuron0x30549f0()*-0.850851);
}

double NNfunction_sb_cLuL::synapse0x305b0d0() {
   return (neuron0x3054d30()*-0.282497);
}

double NNfunction_sb_cLuL::synapse0x305b110() {
   return (neuron0x3055070()*1.12505);
}

double NNfunction_sb_cLuL::synapse0x305b150() {
   return (neuron0x30553b0()*0.0386584);
}

double NNfunction_sb_cLuL::synapse0x305b190() {
   return (neuron0x30556f0()*-0.860566);
}

double NNfunction_sb_cLuL::synapse0x305b1d0() {
   return (neuron0x3055a30()*1.01012);
}

double NNfunction_sb_cLuL::synapse0x305b550() {
   return (neuron0x3050de0()*-0.356772);
}

double NNfunction_sb_cLuL::synapse0x305b590() {
   return (neuron0x3051090()*-0.280568);
}

double NNfunction_sb_cLuL::synapse0x305b5d0() {
   return (neuron0x30513d0()*0.178922);
}

double NNfunction_sb_cLuL::synapse0x305b610() {
   return (neuron0x3051710()*0.223327);
}

double NNfunction_sb_cLuL::synapse0x305b650() {
   return (neuron0x3051a50()*-0.482482);
}

double NNfunction_sb_cLuL::synapse0x305b690() {
   return (neuron0x3051d90()*0.443403);
}

double NNfunction_sb_cLuL::synapse0x305b6d0() {
   return (neuron0x30520d0()*0.241353);
}

double NNfunction_sb_cLuL::synapse0x305b710() {
   return (neuron0x3052410()*0.292842);
}

double NNfunction_sb_cLuL::synapse0x305b750() {
   return (neuron0x3052750()*0.44036);
}

double NNfunction_sb_cLuL::synapse0x305b790() {
   return (neuron0x3052a90()*0.453392);
}

double NNfunction_sb_cLuL::synapse0x305b7d0() {
   return (neuron0x3052dd0()*-0.294462);
}

double NNfunction_sb_cLuL::synapse0x305b810() {
   return (neuron0x3053110()*-0.0298775);
}

double NNfunction_sb_cLuL::synapse0x305b850() {
   return (neuron0x3053450()*-0.457493);
}

double NNfunction_sb_cLuL::synapse0x305b890() {
   return (neuron0x3053790()*-0.558823);
}

double NNfunction_sb_cLuL::synapse0x305b8d0() {
   return (neuron0x3053ad0()*-0.0396094);
}

double NNfunction_sb_cLuL::synapse0x305b910() {
   return (neuron0x3053e10()*-0.0962832);
}

double NNfunction_sb_cLuL::synapse0x305b3a0() {
   return (neuron0x3054150()*0.318409);
}

double NNfunction_sb_cLuL::synapse0x305b3e0() {
   return (neuron0x30546b0()*-0.151781);
}

double NNfunction_sb_cLuL::synapse0x305ba60() {
   return (neuron0x30549f0()*0.140103);
}

double NNfunction_sb_cLuL::synapse0x305baa0() {
   return (neuron0x3054d30()*-0.864596);
}

double NNfunction_sb_cLuL::synapse0x305bae0() {
   return (neuron0x3055070()*-0.975147);
}

double NNfunction_sb_cLuL::synapse0x305bb20() {
   return (neuron0x30553b0()*-0.460529);
}

double NNfunction_sb_cLuL::synapse0x305bb60() {
   return (neuron0x30556f0()*-0.262393);
}

double NNfunction_sb_cLuL::synapse0x305bba0() {
   return (neuron0x3055a30()*0.239885);
}

double NNfunction_sb_cLuL::synapse0x30545a0() {
   return (neuron0x3050de0()*-0.00144768);
}

double NNfunction_sb_cLuL::synapse0x30545e0() {
   return (neuron0x3051090()*-0.00212022);
}

double NNfunction_sb_cLuL::synapse0x3054620() {
   return (neuron0x30513d0()*0.0368184);
}

double NNfunction_sb_cLuL::synapse0x3054660() {
   return (neuron0x3051710()*0.787445);
}

double NNfunction_sb_cLuL::synapse0x305c130() {
   return (neuron0x3051a50()*-0.0172799);
}

double NNfunction_sb_cLuL::synapse0x305c170() {
   return (neuron0x3051d90()*-0.00856357);
}

double NNfunction_sb_cLuL::synapse0x305c1b0() {
   return (neuron0x30520d0()*-0.00638823);
}

double NNfunction_sb_cLuL::synapse0x305c1f0() {
   return (neuron0x3052410()*0.0717851);
}

double NNfunction_sb_cLuL::synapse0x305c230() {
   return (neuron0x3052750()*-0.0199599);
}

double NNfunction_sb_cLuL::synapse0x305c270() {
   return (neuron0x3052a90()*0.0238715);
}

double NNfunction_sb_cLuL::synapse0x305c2b0() {
   return (neuron0x3052dd0()*0.0771961);
}

double NNfunction_sb_cLuL::synapse0x305c2f0() {
   return (neuron0x3053110()*1.09979);
}

double NNfunction_sb_cLuL::synapse0x305c330() {
   return (neuron0x3053450()*1.15404);
}

double NNfunction_sb_cLuL::synapse0x305c370() {
   return (neuron0x3053790()*0.0019684);
}

double NNfunction_sb_cLuL::synapse0x305c3b0() {
   return (neuron0x3053ad0()*0.0297811);
}

double NNfunction_sb_cLuL::synapse0x305c3f0() {
   return (neuron0x3053e10()*0.0292541);
}

double NNfunction_sb_cLuL::synapse0x305bd70() {
   return (neuron0x3054150()*0.0078884);
}

double NNfunction_sb_cLuL::synapse0x305bdb0() {
   return (neuron0x30546b0()*0.0531243);
}

double NNfunction_sb_cLuL::synapse0x305c540() {
   return (neuron0x30549f0()*-0.00355224);
}

double NNfunction_sb_cLuL::synapse0x305c580() {
   return (neuron0x3054d30()*0.0236927);
}

double NNfunction_sb_cLuL::synapse0x305c5c0() {
   return (neuron0x3055070()*-0.0047006);
}

double NNfunction_sb_cLuL::synapse0x305c600() {
   return (neuron0x30553b0()*0.0393093);
}

double NNfunction_sb_cLuL::synapse0x305c640() {
   return (neuron0x30556f0()*-0.00705204);
}

double NNfunction_sb_cLuL::synapse0x305c680() {
   return (neuron0x3055a30()*-0.0116934);
}

double NNfunction_sb_cLuL::synapse0x305ca00() {
   return (neuron0x3050de0()*0.584831);
}

double NNfunction_sb_cLuL::synapse0x305ca40() {
   return (neuron0x3051090()*-0.318521);
}

double NNfunction_sb_cLuL::synapse0x305ca80() {
   return (neuron0x30513d0()*-0.0133272);
}

double NNfunction_sb_cLuL::synapse0x305cac0() {
   return (neuron0x3051710()*0.144851);
}

double NNfunction_sb_cLuL::synapse0x305cb00() {
   return (neuron0x3051a50()*0.616719);
}

double NNfunction_sb_cLuL::synapse0x305cb40() {
   return (neuron0x3051d90()*0.0418874);
}

double NNfunction_sb_cLuL::synapse0x305cb80() {
   return (neuron0x30520d0()*-0.365719);
}

double NNfunction_sb_cLuL::synapse0x305cbc0() {
   return (neuron0x3052410()*-0.310938);
}

double NNfunction_sb_cLuL::synapse0x305cc00() {
   return (neuron0x3052750()*0.0410342);
}

double NNfunction_sb_cLuL::synapse0x305cc40() {
   return (neuron0x3052a90()*-0.111825);
}

double NNfunction_sb_cLuL::synapse0x305cc80() {
   return (neuron0x3052dd0()*-0.471395);
}

double NNfunction_sb_cLuL::synapse0x305ccc0() {
   return (neuron0x3053110()*-0.885713);
}

double NNfunction_sb_cLuL::synapse0x305cd00() {
   return (neuron0x3053450()*-1.20426);
}

double NNfunction_sb_cLuL::synapse0x305cd40() {
   return (neuron0x3053790()*-0.301554);
}

double NNfunction_sb_cLuL::synapse0x305cd80() {
   return (neuron0x3053ad0()*0.531853);
}

double NNfunction_sb_cLuL::synapse0x305cdc0() {
   return (neuron0x3053e10()*0.868332);
}

double NNfunction_sb_cLuL::synapse0x305c850() {
   return (neuron0x3054150()*-0.270967);
}

double NNfunction_sb_cLuL::synapse0x305c890() {
   return (neuron0x30546b0()*0.285618);
}

double NNfunction_sb_cLuL::synapse0x305cf10() {
   return (neuron0x30549f0()*0.146308);
}

double NNfunction_sb_cLuL::synapse0x305cf50() {
   return (neuron0x3054d30()*0.298471);
}

double NNfunction_sb_cLuL::synapse0x305cf90() {
   return (neuron0x3055070()*0.080199);
}

double NNfunction_sb_cLuL::synapse0x305cfd0() {
   return (neuron0x30553b0()*0.0445633);
}

double NNfunction_sb_cLuL::synapse0x305d010() {
   return (neuron0x30556f0()*-0.286334);
}

double NNfunction_sb_cLuL::synapse0x305d050() {
   return (neuron0x3055a30()*-0.294429);
}

double NNfunction_sb_cLuL::synapse0x305d3d0() {
   return (neuron0x3050de0()*0.0262246);
}

double NNfunction_sb_cLuL::synapse0x305d410() {
   return (neuron0x3051090()*0.0139968);
}

double NNfunction_sb_cLuL::synapse0x305d450() {
   return (neuron0x30513d0()*0.258796);
}

double NNfunction_sb_cLuL::synapse0x305d490() {
   return (neuron0x3051710()*-0.492173);
}

double NNfunction_sb_cLuL::synapse0x305d4d0() {
   return (neuron0x3051a50()*0.158756);
}

double NNfunction_sb_cLuL::synapse0x305d510() {
   return (neuron0x3051d90()*0.180242);
}

double NNfunction_sb_cLuL::synapse0x305d550() {
   return (neuron0x30520d0()*-0.144585);
}

double NNfunction_sb_cLuL::synapse0x305d590() {
   return (neuron0x3052410()*0.0236919);
}

double NNfunction_sb_cLuL::synapse0x305d5d0() {
   return (neuron0x3052750()*-0.0268252);
}

double NNfunction_sb_cLuL::synapse0x305d610() {
   return (neuron0x3052a90()*-0.348147);
}

double NNfunction_sb_cLuL::synapse0x305d650() {
   return (neuron0x3052dd0()*0.0872851);
}

double NNfunction_sb_cLuL::synapse0x305d690() {
   return (neuron0x3053110()*0.576565);
}

double NNfunction_sb_cLuL::synapse0x305d6d0() {
   return (neuron0x3053450()*0.29364);
}

double NNfunction_sb_cLuL::synapse0x305d710() {
   return (neuron0x3053790()*-0.808674);
}

double NNfunction_sb_cLuL::synapse0x305d750() {
   return (neuron0x3053ad0()*0.115865);
}

double NNfunction_sb_cLuL::synapse0x305d790() {
   return (neuron0x3053e10()*-0.259217);
}

double NNfunction_sb_cLuL::synapse0x305d220() {
   return (neuron0x3054150()*-0.944163);
}

double NNfunction_sb_cLuL::synapse0x305d260() {
   return (neuron0x30546b0()*0.322849);
}

double NNfunction_sb_cLuL::synapse0x3059ff0() {
   return (neuron0x30549f0()*0.248388);
}

double NNfunction_sb_cLuL::synapse0x305a030() {
   return (neuron0x3054d30()*0.0406023);
}

double NNfunction_sb_cLuL::synapse0x305a070() {
   return (neuron0x3055070()*-0.334037);
}

double NNfunction_sb_cLuL::synapse0x305a0b0() {
   return (neuron0x30553b0()*0.0152892);
}

double NNfunction_sb_cLuL::synapse0x305a0f0() {
   return (neuron0x30556f0()*0.230711);
}

double NNfunction_sb_cLuL::synapse0x305a130() {
   return (neuron0x3055a30()*0.0965986);
}

double NNfunction_sb_cLuL::synapse0x305a4b0() {
   return (neuron0x3050de0()*0.0272278);
}

double NNfunction_sb_cLuL::synapse0x305a4f0() {
   return (neuron0x3051090()*-0.0197391);
}

double NNfunction_sb_cLuL::synapse0x305a530() {
   return (neuron0x30513d0()*-0.0847092);
}

double NNfunction_sb_cLuL::synapse0x305a570() {
   return (neuron0x3051710()*-1.90949);
}

double NNfunction_sb_cLuL::synapse0x305a5b0() {
   return (neuron0x3051a50()*0.0200846);
}

double NNfunction_sb_cLuL::synapse0x305a5f0() {
   return (neuron0x3051d90()*0.00229701);
}

double NNfunction_sb_cLuL::synapse0x305a630() {
   return (neuron0x30520d0()*-0.0274621);
}

double NNfunction_sb_cLuL::synapse0x305a670() {
   return (neuron0x3052410()*-0.0442499);
}

double NNfunction_sb_cLuL::synapse0x305a6b0() {
   return (neuron0x3052750()*-0.0141387);
}

double NNfunction_sb_cLuL::synapse0x305a6f0() {
   return (neuron0x3052a90()*-0.00846961);
}

double NNfunction_sb_cLuL::synapse0x305a730() {
   return (neuron0x3052dd0()*-0.0291676);
}

double NNfunction_sb_cLuL::synapse0x305a770() {
   return (neuron0x3053110()*0.266559);
}

double NNfunction_sb_cLuL::synapse0x305a7b0() {
   return (neuron0x3053450()*0.389268);
}

double NNfunction_sb_cLuL::synapse0x305e8f0() {
   return (neuron0x3053790()*-0.0121109);
}

double NNfunction_sb_cLuL::synapse0x305e930() {
   return (neuron0x3053ad0()*-0.01486);
}

double NNfunction_sb_cLuL::synapse0x305e970() {
   return (neuron0x3053e10()*-0.0113981);
}

double NNfunction_sb_cLuL::synapse0x305a300() {
   return (neuron0x3054150()*0.0263218);
}

double NNfunction_sb_cLuL::synapse0x305a340() {
   return (neuron0x30546b0()*-0.0307855);
}

double NNfunction_sb_cLuL::synapse0x305eac0() {
   return (neuron0x30549f0()*0.0218759);
}

double NNfunction_sb_cLuL::synapse0x305eb00() {
   return (neuron0x3054d30()*-0.0364107);
}

double NNfunction_sb_cLuL::synapse0x305eb40() {
   return (neuron0x3055070()*-0.00229268);
}

double NNfunction_sb_cLuL::synapse0x305eb80() {
   return (neuron0x30553b0()*-0.0439774);
}

double NNfunction_sb_cLuL::synapse0x305ebc0() {
   return (neuron0x30556f0()*-0.00756037);
}

double NNfunction_sb_cLuL::synapse0x305ec00() {
   return (neuron0x3055a30()*-0.055645);
}

double NNfunction_sb_cLuL::synapse0x305ef80() {
   return (neuron0x3050de0()*-0.0887603);
}

double NNfunction_sb_cLuL::synapse0x305efc0() {
   return (neuron0x3051090()*0.860427);
}

double NNfunction_sb_cLuL::synapse0x305f000() {
   return (neuron0x30513d0()*-0.659776);
}

double NNfunction_sb_cLuL::synapse0x305f040() {
   return (neuron0x3051710()*0.200318);
}

double NNfunction_sb_cLuL::synapse0x305f080() {
   return (neuron0x3051a50()*-0.128134);
}

double NNfunction_sb_cLuL::synapse0x305f0c0() {
   return (neuron0x3051d90()*0.168839);
}

double NNfunction_sb_cLuL::synapse0x305f100() {
   return (neuron0x30520d0()*-0.218866);
}

double NNfunction_sb_cLuL::synapse0x305f140() {
   return (neuron0x3052410()*0.937203);
}

double NNfunction_sb_cLuL::synapse0x305f180() {
   return (neuron0x3052750()*-0.195248);
}

double NNfunction_sb_cLuL::synapse0x305f1c0() {
   return (neuron0x3052a90()*0.0600956);
}

double NNfunction_sb_cLuL::synapse0x305f200() {
   return (neuron0x3052dd0()*-0.0122398);
}

double NNfunction_sb_cLuL::synapse0x305f240() {
   return (neuron0x3053110()*-0.698788);
}

double NNfunction_sb_cLuL::synapse0x305f280() {
   return (neuron0x3053450()*-0.412477);
}

double NNfunction_sb_cLuL::synapse0x305f2c0() {
   return (neuron0x3053790()*-0.441759);
}

double NNfunction_sb_cLuL::synapse0x305f300() {
   return (neuron0x3053ad0()*-0.739397);
}

double NNfunction_sb_cLuL::synapse0x305f340() {
   return (neuron0x3053e10()*0.885945);
}

double NNfunction_sb_cLuL::synapse0x305edd0() {
   return (neuron0x3054150()*0.499146);
}

double NNfunction_sb_cLuL::synapse0x305ee10() {
   return (neuron0x30546b0()*0.720344);
}

double NNfunction_sb_cLuL::synapse0x305f490() {
   return (neuron0x30549f0()*-0.286301);
}

double NNfunction_sb_cLuL::synapse0x305f4d0() {
   return (neuron0x3054d30()*-0.060765);
}

double NNfunction_sb_cLuL::synapse0x305f510() {
   return (neuron0x3055070()*0.561826);
}

double NNfunction_sb_cLuL::synapse0x305f550() {
   return (neuron0x30553b0()*0.0777297);
}

double NNfunction_sb_cLuL::synapse0x305f590() {
   return (neuron0x30556f0()*-0.217812);
}

double NNfunction_sb_cLuL::synapse0x305f5d0() {
   return (neuron0x3055a30()*0.293291);
}

double NNfunction_sb_cLuL::synapse0x305f950() {
   return (neuron0x3050de0()*0.412685);
}

double NNfunction_sb_cLuL::synapse0x305f990() {
   return (neuron0x3051090()*-0.204325);
}

double NNfunction_sb_cLuL::synapse0x305f9d0() {
   return (neuron0x30513d0()*0.41033);
}

double NNfunction_sb_cLuL::synapse0x305fa10() {
   return (neuron0x3051710()*0.176113);
}

double NNfunction_sb_cLuL::synapse0x305fa50() {
   return (neuron0x3051a50()*0.000445288);
}

double NNfunction_sb_cLuL::synapse0x305fa90() {
   return (neuron0x3051d90()*-0.227963);
}

double NNfunction_sb_cLuL::synapse0x305fad0() {
   return (neuron0x30520d0()*-0.214607);
}

double NNfunction_sb_cLuL::synapse0x305fb10() {
   return (neuron0x3052410()*0.0140479);
}

double NNfunction_sb_cLuL::synapse0x305fb50() {
   return (neuron0x3052750()*-0.335162);
}

double NNfunction_sb_cLuL::synapse0x305fb90() {
   return (neuron0x3052a90()*-0.04839);
}

double NNfunction_sb_cLuL::synapse0x305fbd0() {
   return (neuron0x3052dd0()*0.108565);
}

double NNfunction_sb_cLuL::synapse0x305fc10() {
   return (neuron0x3053110()*0.539694);
}

double NNfunction_sb_cLuL::synapse0x305fc50() {
   return (neuron0x3053450()*-0.131787);
}

double NNfunction_sb_cLuL::synapse0x305fc90() {
   return (neuron0x3053790()*0.460242);
}

double NNfunction_sb_cLuL::synapse0x305fcd0() {
   return (neuron0x3053ad0()*0.686221);
}

double NNfunction_sb_cLuL::synapse0x305fd10() {
   return (neuron0x3053e10()*-0.271704);
}

double NNfunction_sb_cLuL::synapse0x305f7a0() {
   return (neuron0x3054150()*-0.551241);
}

double NNfunction_sb_cLuL::synapse0x305f7e0() {
   return (neuron0x30546b0()*0.22622);
}

double NNfunction_sb_cLuL::synapse0x305fe60() {
   return (neuron0x30549f0()*0.12076);
}

double NNfunction_sb_cLuL::synapse0x305fea0() {
   return (neuron0x3054d30()*0.587453);
}

double NNfunction_sb_cLuL::synapse0x305fee0() {
   return (neuron0x3055070()*0.911873);
}

double NNfunction_sb_cLuL::synapse0x305ff20() {
   return (neuron0x30553b0()*-0.0212604);
}

double NNfunction_sb_cLuL::synapse0x305ff60() {
   return (neuron0x30556f0()*0.741786);
}

double NNfunction_sb_cLuL::synapse0x305ffa0() {
   return (neuron0x3055a30()*-0.463681);
}

double NNfunction_sb_cLuL::synapse0x3060320() {
   return (neuron0x3050de0()*-0.451701);
}

double NNfunction_sb_cLuL::synapse0x3060360() {
   return (neuron0x3051090()*0.0303779);
}

double NNfunction_sb_cLuL::synapse0x30603a0() {
   return (neuron0x30513d0()*-0.246624);
}

double NNfunction_sb_cLuL::synapse0x30603e0() {
   return (neuron0x3051710()*0.216593);
}

double NNfunction_sb_cLuL::synapse0x3060420() {
   return (neuron0x3051a50()*0.230646);
}

double NNfunction_sb_cLuL::synapse0x3060460() {
   return (neuron0x3051d90()*-1.04948);
}

double NNfunction_sb_cLuL::synapse0x30604a0() {
   return (neuron0x30520d0()*0.383465);
}

double NNfunction_sb_cLuL::synapse0x30604e0() {
   return (neuron0x3052410()*-0.46999);
}

double NNfunction_sb_cLuL::synapse0x3060520() {
   return (neuron0x3052750()*0.833875);
}

double NNfunction_sb_cLuL::synapse0x3060560() {
   return (neuron0x3052a90()*0.315864);
}

double NNfunction_sb_cLuL::synapse0x30605a0() {
   return (neuron0x3052dd0()*-0.486855);
}

double NNfunction_sb_cLuL::synapse0x30605e0() {
   return (neuron0x3053110()*-0.75161);
}

double NNfunction_sb_cLuL::synapse0x3060620() {
   return (neuron0x3053450()*0.372636);
}

double NNfunction_sb_cLuL::synapse0x3060660() {
   return (neuron0x3053790()*0.167565);
}

double NNfunction_sb_cLuL::synapse0x30606a0() {
   return (neuron0x3053ad0()*0.270732);
}

double NNfunction_sb_cLuL::synapse0x30606e0() {
   return (neuron0x3053e10()*-0.294388);
}

double NNfunction_sb_cLuL::synapse0x3060170() {
   return (neuron0x3054150()*-0.00785868);
}

double NNfunction_sb_cLuL::synapse0x30601b0() {
   return (neuron0x30546b0()*0.975921);
}

double NNfunction_sb_cLuL::synapse0x3060830() {
   return (neuron0x30549f0()*-0.293035);
}

double NNfunction_sb_cLuL::synapse0x3060870() {
   return (neuron0x3054d30()*-0.48811);
}

double NNfunction_sb_cLuL::synapse0x30608b0() {
   return (neuron0x3055070()*-0.0640716);
}

double NNfunction_sb_cLuL::synapse0x30608f0() {
   return (neuron0x30553b0()*-0.0222489);
}

double NNfunction_sb_cLuL::synapse0x3060930() {
   return (neuron0x30556f0()*-0.391422);
}

double NNfunction_sb_cLuL::synapse0x3060970() {
   return (neuron0x3055a30()*0.0090645);
}

double NNfunction_sb_cLuL::synapse0x3060cf0() {
   return (neuron0x3050de0()*0.0715275);
}

double NNfunction_sb_cLuL::synapse0x3050f70() {
   return (neuron0x3051090()*0.0371499);
}

double NNfunction_sb_cLuL::synapse0x3050fb0() {
   return (neuron0x30513d0()*0.095585);
}

double NNfunction_sb_cLuL::synapse0x30512b0() {
   return (neuron0x3051710()*-1.56947);
}

double NNfunction_sb_cLuL::synapse0x30512f0() {
   return (neuron0x3051a50()*0.0473858);
}

double NNfunction_sb_cLuL::synapse0x30515f0() {
   return (neuron0x3051d90()*0.0887792);
}

double NNfunction_sb_cLuL::synapse0x3051630() {
   return (neuron0x30520d0()*-0.139115);
}

double NNfunction_sb_cLuL::synapse0x3051930() {
   return (neuron0x3052410()*0.322979);
}

double NNfunction_sb_cLuL::synapse0x3051970() {
   return (neuron0x3052750()*-0.0391252);
}

double NNfunction_sb_cLuL::synapse0x3051c70() {
   return (neuron0x3052a90()*0.0442501);
}

double NNfunction_sb_cLuL::synapse0x3051cb0() {
   return (neuron0x3052dd0()*0.145856);
}

double NNfunction_sb_cLuL::synapse0x3051fb0() {
   return (neuron0x3053110()*-1.18452);
}

double NNfunction_sb_cLuL::synapse0x3051ff0() {
   return (neuron0x3053450()*-1.34303);
}

double NNfunction_sb_cLuL::synapse0x30522f0() {
   return (neuron0x3053790()*0.0052716);
}

double NNfunction_sb_cLuL::synapse0x3052330() {
   return (neuron0x3053ad0()*0.0626963);
}

double NNfunction_sb_cLuL::synapse0x3052630() {
   return (neuron0x3053e10()*0.0109944);
}

double NNfunction_sb_cLuL::synapse0x3052670() {
   return (neuron0x3054150()*-0.0472468);
}

double NNfunction_sb_cLuL::synapse0x3052970() {
   return (neuron0x30546b0()*0.208116);
}

double NNfunction_sb_cLuL::synapse0x30529b0() {
   return (neuron0x30549f0()*0.00434205);
}

double NNfunction_sb_cLuL::synapse0x3052cb0() {
   return (neuron0x3054d30()*0.168044);
}

double NNfunction_sb_cLuL::synapse0x3052cf0() {
   return (neuron0x3055070()*-0.159009);
}

double NNfunction_sb_cLuL::synapse0x3052ff0() {
   return (neuron0x30553b0()*0.134644);
}

double NNfunction_sb_cLuL::synapse0x3053030() {
   return (neuron0x30556f0()*0.121673);
}

double NNfunction_sb_cLuL::synapse0x3053330() {
   return (neuron0x3055a30()*0.0516465);
}

double NNfunction_sb_cLuL::synapse0x3053370() {
   return (neuron0x3050de0()*-0.0606349);
}

double NNfunction_sb_cLuL::synapse0x3054030() {
   return (neuron0x3051090()*-0.0375137);
}

double NNfunction_sb_cLuL::synapse0x3054070() {
   return (neuron0x30513d0()*-0.167432);
}

double NNfunction_sb_cLuL::synapse0x3060b40() {
   return (neuron0x3051710()*1.06849);
}

double NNfunction_sb_cLuL::synapse0x3060b80() {
   return (neuron0x3051a50()*-0.0797246);
}

double NNfunction_sb_cLuL::synapse0x3054370() {
   return (neuron0x3051d90()*0.0341816);
}

double NNfunction_sb_cLuL::synapse0x30543b0() {
   return (neuron0x30520d0()*-0.058329);
}

double NNfunction_sb_cLuL::synapse0x30548d0() {
   return (neuron0x3052410()*0.073781);
}

double NNfunction_sb_cLuL::synapse0x3054910() {
   return (neuron0x3052750()*-0.0684733);
}

double NNfunction_sb_cLuL::synapse0x3054c10() {
   return (neuron0x3052a90()*-0.0428927);
}

double NNfunction_sb_cLuL::synapse0x3054c50() {
   return (neuron0x3052dd0()*0.0446614);
}

double NNfunction_sb_cLuL::synapse0x3054f50() {
   return (neuron0x3053110()*-0.0698933);
}

double NNfunction_sb_cLuL::synapse0x3054f90() {
   return (neuron0x3053450()*-0.0319019);
}

double NNfunction_sb_cLuL::synapse0x3055290() {
   return (neuron0x3053790()*0.0487428);
}

double NNfunction_sb_cLuL::synapse0x30552d0() {
   return (neuron0x3053ad0()*-0.263242);
}

double NNfunction_sb_cLuL::synapse0x30555d0() {
   return (neuron0x3053e10()*-0.203459);
}

double NNfunction_sb_cLuL::synapse0x3055610() {
   return (neuron0x3054150()*0.0599892);
}

double NNfunction_sb_cLuL::synapse0x3055910() {
   return (neuron0x30546b0()*-0.0596536);
}

double NNfunction_sb_cLuL::synapse0x3055950() {
   return (neuron0x30549f0()*0.0600133);
}

double NNfunction_sb_cLuL::synapse0x3055c50() {
   return (neuron0x3054d30()*-0.000940593);
}

double NNfunction_sb_cLuL::synapse0x3055c90() {
   return (neuron0x3055070()*-0.0128487);
}

double NNfunction_sb_cLuL::synapse0x3053670() {
   return (neuron0x30553b0()*-0.0527224);
}

double NNfunction_sb_cLuL::synapse0x30536b0() {
   return (neuron0x30556f0()*-0.0308109);
}

double NNfunction_sb_cLuL::synapse0x3062a60() {
   return (neuron0x3055a30()*-0.0409862);
}

double NNfunction_sb_cLuL::synapse0x3062de0() {
   return (neuron0x3050de0()*0.365477);
}

double NNfunction_sb_cLuL::synapse0x3062e20() {
   return (neuron0x3051090()*0.357475);
}

double NNfunction_sb_cLuL::synapse0x3062e60() {
   return (neuron0x30513d0()*-0.127194);
}

double NNfunction_sb_cLuL::synapse0x3062ea0() {
   return (neuron0x3051710()*-0.189813);
}

double NNfunction_sb_cLuL::synapse0x3062ee0() {
   return (neuron0x3051a50()*0.00600802);
}

double NNfunction_sb_cLuL::synapse0x3062f20() {
   return (neuron0x3051d90()*-0.900499);
}

double NNfunction_sb_cLuL::synapse0x3062f60() {
   return (neuron0x30520d0()*-0.456488);
}

double NNfunction_sb_cLuL::synapse0x3062fa0() {
   return (neuron0x3052410()*-0.105915);
}

double NNfunction_sb_cLuL::synapse0x3062fe0() {
   return (neuron0x3052750()*0.174341);
}

double NNfunction_sb_cLuL::synapse0x3063020() {
   return (neuron0x3052a90()*0.30409);
}

double NNfunction_sb_cLuL::synapse0x3063060() {
   return (neuron0x3052dd0()*-0.46701);
}

double NNfunction_sb_cLuL::synapse0x30630a0() {
   return (neuron0x3053110()*-0.730866);
}

double NNfunction_sb_cLuL::synapse0x30630e0() {
   return (neuron0x3053450()*-0.451533);
}

double NNfunction_sb_cLuL::synapse0x3063120() {
   return (neuron0x3053790()*0.195342);
}

double NNfunction_sb_cLuL::synapse0x3063160() {
   return (neuron0x3053ad0()*-0.505695);
}

double NNfunction_sb_cLuL::synapse0x30631a0() {
   return (neuron0x3053e10()*0.441595);
}

double NNfunction_sb_cLuL::synapse0x3062c30() {
   return (neuron0x3054150()*0.794643);
}

double NNfunction_sb_cLuL::synapse0x3062c70() {
   return (neuron0x30546b0()*0.965316);
}

double NNfunction_sb_cLuL::synapse0x30632f0() {
   return (neuron0x30549f0()*0.14026);
}

double NNfunction_sb_cLuL::synapse0x3063330() {
   return (neuron0x3054d30()*0.29271);
}

double NNfunction_sb_cLuL::synapse0x3063370() {
   return (neuron0x3055070()*-0.76983);
}

double NNfunction_sb_cLuL::synapse0x30633b0() {
   return (neuron0x30553b0()*-0.243761);
}

double NNfunction_sb_cLuL::synapse0x30633f0() {
   return (neuron0x30556f0()*-0.130521);
}

double NNfunction_sb_cLuL::synapse0x3063430() {
   return (neuron0x3055a30()*-0.701515);
}

double NNfunction_sb_cLuL::synapse0x30637b0() {
   return (neuron0x3050de0()*-0.285516);
}

double NNfunction_sb_cLuL::synapse0x30637f0() {
   return (neuron0x3051090()*1.57956e-05);
}

double NNfunction_sb_cLuL::synapse0x3063830() {
   return (neuron0x30513d0()*-0.28088);
}

double NNfunction_sb_cLuL::synapse0x3063870() {
   return (neuron0x3051710()*-0.589047);
}

double NNfunction_sb_cLuL::synapse0x30638b0() {
   return (neuron0x3051a50()*-0.249599);
}

double NNfunction_sb_cLuL::synapse0x30638f0() {
   return (neuron0x3051d90()*0.640907);
}

double NNfunction_sb_cLuL::synapse0x3063930() {
   return (neuron0x30520d0()*-0.20996);
}

double NNfunction_sb_cLuL::synapse0x3063970() {
   return (neuron0x3052410()*-0.333797);
}

double NNfunction_sb_cLuL::synapse0x30639b0() {
   return (neuron0x3052750()*0.572249);
}

double NNfunction_sb_cLuL::synapse0x30639f0() {
   return (neuron0x3052a90()*-0.29085);
}

double NNfunction_sb_cLuL::synapse0x3063a30() {
   return (neuron0x3052dd0()*0.232065);
}

double NNfunction_sb_cLuL::synapse0x3063a70() {
   return (neuron0x3053110()*-0.978593);
}

double NNfunction_sb_cLuL::synapse0x3063ab0() {
   return (neuron0x3053450()*-0.553711);
}

double NNfunction_sb_cLuL::synapse0x3063af0() {
   return (neuron0x3053790()*-0.518224);
}

double NNfunction_sb_cLuL::synapse0x3063b30() {
   return (neuron0x3053ad0()*-0.225239);
}

double NNfunction_sb_cLuL::synapse0x3063b70() {
   return (neuron0x3053e10()*0.0568589);
}

double NNfunction_sb_cLuL::synapse0x3063600() {
   return (neuron0x3054150()*0.44403);
}

double NNfunction_sb_cLuL::synapse0x3063640() {
   return (neuron0x30546b0()*-0.205523);
}

double NNfunction_sb_cLuL::synapse0x3063cc0() {
   return (neuron0x30549f0()*-0.683284);
}

double NNfunction_sb_cLuL::synapse0x3063d00() {
   return (neuron0x3054d30()*0.247533);
}

double NNfunction_sb_cLuL::synapse0x3063d40() {
   return (neuron0x3055070()*-0.135656);
}

double NNfunction_sb_cLuL::synapse0x3063d80() {
   return (neuron0x30553b0()*-0.0484157);
}

double NNfunction_sb_cLuL::synapse0x3063dc0() {
   return (neuron0x30556f0()*-0.335714);
}

double NNfunction_sb_cLuL::synapse0x3063e00() {
   return (neuron0x3055a30()*0.199867);
}

double NNfunction_sb_cLuL::synapse0x3064180() {
   return (neuron0x3050de0()*-0.0082499);
}

double NNfunction_sb_cLuL::synapse0x30641c0() {
   return (neuron0x3051090()*-0.0188675);
}

double NNfunction_sb_cLuL::synapse0x3064200() {
   return (neuron0x30513d0()*1.31508);
}

double NNfunction_sb_cLuL::synapse0x3064240() {
   return (neuron0x3051710()*0.167197);
}

double NNfunction_sb_cLuL::synapse0x3064280() {
   return (neuron0x3051a50()*-0.060672);
}

double NNfunction_sb_cLuL::synapse0x30642c0() {
   return (neuron0x3051d90()*0.00814839);
}

double NNfunction_sb_cLuL::synapse0x3064300() {
   return (neuron0x30520d0()*-0.0307737);
}

double NNfunction_sb_cLuL::synapse0x3064340() {
   return (neuron0x3052410()*-0.0134897);
}

double NNfunction_sb_cLuL::synapse0x3064380() {
   return (neuron0x3052750()*0.0179823);
}

double NNfunction_sb_cLuL::synapse0x30643c0() {
   return (neuron0x3052a90()*-0.0159506);
}

double NNfunction_sb_cLuL::synapse0x3064400() {
   return (neuron0x3052dd0()*0.056683);
}

double NNfunction_sb_cLuL::synapse0x3064440() {
   return (neuron0x3053110()*-0.180028);
}

double NNfunction_sb_cLuL::synapse0x3064480() {
   return (neuron0x3053450()*-0.0778132);
}

double NNfunction_sb_cLuL::synapse0x30644c0() {
   return (neuron0x3053790()*0.0170966);
}

double NNfunction_sb_cLuL::synapse0x3064500() {
   return (neuron0x3053ad0()*0.0433979);
}

double NNfunction_sb_cLuL::synapse0x3064540() {
   return (neuron0x3053e10()*-0.0236329);
}

double NNfunction_sb_cLuL::synapse0x3063fd0() {
   return (neuron0x3054150()*0.0365253);
}

double NNfunction_sb_cLuL::synapse0x3064010() {
   return (neuron0x30546b0()*-0.00743575);
}

double NNfunction_sb_cLuL::synapse0x3064690() {
   return (neuron0x30549f0()*-0.0333093);
}

double NNfunction_sb_cLuL::synapse0x30646d0() {
   return (neuron0x3054d30()*-0.00206137);
}

double NNfunction_sb_cLuL::synapse0x3064710() {
   return (neuron0x3055070()*0.0394323);
}

double NNfunction_sb_cLuL::synapse0x3064750() {
   return (neuron0x30553b0()*0.00888544);
}

double NNfunction_sb_cLuL::synapse0x3064790() {
   return (neuron0x30556f0()*-0.0322987);
}

double NNfunction_sb_cLuL::synapse0x30647d0() {
   return (neuron0x3055a30()*0.0150517);
}

double NNfunction_sb_cLuL::synapse0x3064b50() {
   return (neuron0x3050de0()*-0.00774592);
}

double NNfunction_sb_cLuL::synapse0x3064b90() {
   return (neuron0x3051090()*0.000274268);
}

double NNfunction_sb_cLuL::synapse0x3064bd0() {
   return (neuron0x30513d0()*-0.0129191);
}

double NNfunction_sb_cLuL::synapse0x3064c10() {
   return (neuron0x3051710()*0.0960256);
}

double NNfunction_sb_cLuL::synapse0x3064c50() {
   return (neuron0x3051a50()*-0.00429162);
}

double NNfunction_sb_cLuL::synapse0x3064c90() {
   return (neuron0x3051d90()*-0.00435718);
}

double NNfunction_sb_cLuL::synapse0x3064cd0() {
   return (neuron0x30520d0()*0.00618692);
}

double NNfunction_sb_cLuL::synapse0x3064d10() {
   return (neuron0x3052410()*0.00863081);
}

double NNfunction_sb_cLuL::synapse0x3064d50() {
   return (neuron0x3052750()*0.00225654);
}

double NNfunction_sb_cLuL::synapse0x3064d90() {
   return (neuron0x3052a90()*0.00945105);
}

double NNfunction_sb_cLuL::synapse0x3064dd0() {
   return (neuron0x3052dd0()*-0.00949817);
}

double NNfunction_sb_cLuL::synapse0x3064e10() {
   return (neuron0x3053110()*0.905495);
}

double NNfunction_sb_cLuL::synapse0x3064e50() {
   return (neuron0x3053450()*-0.132807);
}

double NNfunction_sb_cLuL::synapse0x3064e90() {
   return (neuron0x3053790()*0.00543408);
}

double NNfunction_sb_cLuL::synapse0x3064ed0() {
   return (neuron0x3053ad0()*0.0131161);
}

double NNfunction_sb_cLuL::synapse0x3064f10() {
   return (neuron0x3053e10()*0.0100183);
}

double NNfunction_sb_cLuL::synapse0x30649a0() {
   return (neuron0x3054150()*-0.0135319);
}

double NNfunction_sb_cLuL::synapse0x30649e0() {
   return (neuron0x30546b0()*0.00721894);
}

double NNfunction_sb_cLuL::synapse0x3065060() {
   return (neuron0x30549f0()*0.00208177);
}

double NNfunction_sb_cLuL::synapse0x30650a0() {
   return (neuron0x3054d30()*0.0077351);
}

double NNfunction_sb_cLuL::synapse0x30650e0() {
   return (neuron0x3055070()*-0.00616318);
}

double NNfunction_sb_cLuL::synapse0x3065120() {
   return (neuron0x30553b0()*-0.0029344);
}

double NNfunction_sb_cLuL::synapse0x3065160() {
   return (neuron0x30556f0()*0.0082904);
}

double NNfunction_sb_cLuL::synapse0x30651a0() {
   return (neuron0x3055a30()*0.0137159);
}

double NNfunction_sb_cLuL::synapse0x3065520() {
   return (neuron0x3050de0()*0.00365796);
}

double NNfunction_sb_cLuL::synapse0x3065560() {
   return (neuron0x3051090()*-0.00239606);
}

double NNfunction_sb_cLuL::synapse0x30655a0() {
   return (neuron0x30513d0()*0.0293626);
}

double NNfunction_sb_cLuL::synapse0x30655e0() {
   return (neuron0x3051710()*1.27398);
}

double NNfunction_sb_cLuL::synapse0x3065620() {
   return (neuron0x3051a50()*-0.00815104);
}

double NNfunction_sb_cLuL::synapse0x3065660() {
   return (neuron0x3051d90()*-0.00494969);
}

double NNfunction_sb_cLuL::synapse0x30656a0() {
   return (neuron0x30520d0()*-0.00990455);
}

double NNfunction_sb_cLuL::synapse0x30656e0() {
   return (neuron0x3052410()*0.00841373);
}

double NNfunction_sb_cLuL::synapse0x3065720() {
   return (neuron0x3052750()*-0.00813797);
}

double NNfunction_sb_cLuL::synapse0x305d8e0() {
   return (neuron0x3052a90()*-0.00318988);
}

double NNfunction_sb_cLuL::synapse0x305d920() {
   return (neuron0x3052dd0()*-0.00369475);
}

double NNfunction_sb_cLuL::synapse0x305d960() {
   return (neuron0x3053110()*0.0377893);
}

double NNfunction_sb_cLuL::synapse0x305d9a0() {
   return (neuron0x3053450()*-0.0408123);
}

double NNfunction_sb_cLuL::synapse0x305d9e0() {
   return (neuron0x3053790()*-0.0161116);
}

double NNfunction_sb_cLuL::synapse0x305da20() {
   return (neuron0x3053ad0()*0.00451407);
}

double NNfunction_sb_cLuL::synapse0x305da60() {
   return (neuron0x3053e10()*0.00846323);
}

double NNfunction_sb_cLuL::synapse0x3065370() {
   return (neuron0x3054150()*-0.0138956);
}

double NNfunction_sb_cLuL::synapse0x30653b0() {
   return (neuron0x30546b0()*0.00447815);
}

double NNfunction_sb_cLuL::synapse0x305dbb0() {
   return (neuron0x30549f0()*0.0046922);
}

double NNfunction_sb_cLuL::synapse0x305dbf0() {
   return (neuron0x3054d30()*-0.00609383);
}

double NNfunction_sb_cLuL::synapse0x305dc30() {
   return (neuron0x3055070()*0.0161067);
}

double NNfunction_sb_cLuL::synapse0x305dc70() {
   return (neuron0x30553b0()*-0.0102818);
}

double NNfunction_sb_cLuL::synapse0x305dcb0() {
   return (neuron0x30556f0()*0.000407747);
}

double NNfunction_sb_cLuL::synapse0x305dcf0() {
   return (neuron0x3055a30()*-0.00500329);
}

double NNfunction_sb_cLuL::synapse0x305e070() {
   return (neuron0x3050de0()*-0.138541);
}

double NNfunction_sb_cLuL::synapse0x305e0b0() {
   return (neuron0x3051090()*0.239712);
}

double NNfunction_sb_cLuL::synapse0x305e0f0() {
   return (neuron0x30513d0()*-0.664517);
}

double NNfunction_sb_cLuL::synapse0x305e130() {
   return (neuron0x3051710()*-0.415235);
}

double NNfunction_sb_cLuL::synapse0x305e170() {
   return (neuron0x3051a50()*0.420105);
}

double NNfunction_sb_cLuL::synapse0x305e1b0() {
   return (neuron0x3051d90()*-0.162571);
}

double NNfunction_sb_cLuL::synapse0x305e1f0() {
   return (neuron0x30520d0()*0.000680576);
}

double NNfunction_sb_cLuL::synapse0x305e230() {
   return (neuron0x3052410()*-0.0473985);
}

double NNfunction_sb_cLuL::synapse0x305e270() {
   return (neuron0x3052750()*-0.11788);
}

double NNfunction_sb_cLuL::synapse0x305e2b0() {
   return (neuron0x3052a90()*0.189397);
}

double NNfunction_sb_cLuL::synapse0x305e2f0() {
   return (neuron0x3052dd0()*-0.449656);
}

double NNfunction_sb_cLuL::synapse0x305e330() {
   return (neuron0x3053110()*-0.482578);
}

double NNfunction_sb_cLuL::synapse0x305e370() {
   return (neuron0x3053450()*-0.729);
}

double NNfunction_sb_cLuL::synapse0x305e3b0() {
   return (neuron0x3053790()*-0.116616);
}

double NNfunction_sb_cLuL::synapse0x305e3f0() {
   return (neuron0x3053ad0()*-0.139033);
}

double NNfunction_sb_cLuL::synapse0x305e430() {
   return (neuron0x3053e10()*0.181082);
}

double NNfunction_sb_cLuL::synapse0x305dec0() {
   return (neuron0x3054150()*-0.237463);
}

double NNfunction_sb_cLuL::synapse0x305df00() {
   return (neuron0x30546b0()*1.21292);
}

double NNfunction_sb_cLuL::synapse0x305e580() {
   return (neuron0x30549f0()*-0.647031);
}

double NNfunction_sb_cLuL::synapse0x305e5c0() {
   return (neuron0x3054d30()*0.279805);
}

double NNfunction_sb_cLuL::synapse0x305e600() {
   return (neuron0x3055070()*-0.274521);
}

double NNfunction_sb_cLuL::synapse0x305e640() {
   return (neuron0x30553b0()*-0.6443);
}

double NNfunction_sb_cLuL::synapse0x305e680() {
   return (neuron0x30556f0()*0.0368582);
}

double NNfunction_sb_cLuL::synapse0x305e6c0() {
   return (neuron0x3055a30()*-0.500916);
}

double NNfunction_sb_cLuL::synapse0x305e890() {
   return (neuron0x3050de0()*0.0727245);
}

double NNfunction_sb_cLuL::synapse0x3067920() {
   return (neuron0x3051090()*-0.0434644);
}

double NNfunction_sb_cLuL::synapse0x3067960() {
   return (neuron0x30513d0()*-0.575771);
}

double NNfunction_sb_cLuL::synapse0x30679a0() {
   return (neuron0x3051710()*-1.49185);
}

double NNfunction_sb_cLuL::synapse0x30679e0() {
   return (neuron0x3051a50()*0.164642);
}

double NNfunction_sb_cLuL::synapse0x3067a20() {
   return (neuron0x3051d90()*0.074806);
}

double NNfunction_sb_cLuL::synapse0x3067a60() {
   return (neuron0x30520d0()*-0.0606869);
}

double NNfunction_sb_cLuL::synapse0x3067aa0() {
   return (neuron0x3052410()*-0.0241921);
}

double NNfunction_sb_cLuL::synapse0x3067ae0() {
   return (neuron0x3052750()*-0.00931051);
}

double NNfunction_sb_cLuL::synapse0x3067b20() {
   return (neuron0x3052a90()*0.0350535);
}

double NNfunction_sb_cLuL::synapse0x3067b60() {
   return (neuron0x3052dd0()*0.084542);
}

double NNfunction_sb_cLuL::synapse0x3067ba0() {
   return (neuron0x3053110()*-0.75088);
}

double NNfunction_sb_cLuL::synapse0x3067be0() {
   return (neuron0x3053450()*0.212542);
}

double NNfunction_sb_cLuL::synapse0x3067c20() {
   return (neuron0x3053790()*-0.0406524);
}

double NNfunction_sb_cLuL::synapse0x3067c60() {
   return (neuron0x3053ad0()*-0.131747);
}

double NNfunction_sb_cLuL::synapse0x3067ca0() {
   return (neuron0x3053e10()*-0.0388581);
}

double NNfunction_sb_cLuL::synapse0x3067770() {
   return (neuron0x3054150()*0.128609);
}

double NNfunction_sb_cLuL::synapse0x30677b0() {
   return (neuron0x30546b0()*-0.154778);
}

double NNfunction_sb_cLuL::synapse0x3067df0() {
   return (neuron0x30549f0()*0.0720737);
}

double NNfunction_sb_cLuL::synapse0x3067e30() {
   return (neuron0x3054d30()*-0.0266565);
}

double NNfunction_sb_cLuL::synapse0x3067e70() {
   return (neuron0x3055070()*0.000983923);
}

double NNfunction_sb_cLuL::synapse0x3067eb0() {
   return (neuron0x30553b0()*0.00821109);
}

double NNfunction_sb_cLuL::synapse0x3067ef0() {
   return (neuron0x30556f0()*0.0213006);
}

double NNfunction_sb_cLuL::synapse0x3067f30() {
   return (neuron0x3055a30()*-0.0312765);
}

double NNfunction_sb_cLuL::synapse0x30682b0() {
   return (neuron0x3050de0()*0.296645);
}

double NNfunction_sb_cLuL::synapse0x30682f0() {
   return (neuron0x3051090()*-0.45428);
}

double NNfunction_sb_cLuL::synapse0x3068330() {
   return (neuron0x30513d0()*0.171798);
}

double NNfunction_sb_cLuL::synapse0x3068370() {
   return (neuron0x3051710()*0.730966);
}

double NNfunction_sb_cLuL::synapse0x30683b0() {
   return (neuron0x3051a50()*0.270229);
}

double NNfunction_sb_cLuL::synapse0x30683f0() {
   return (neuron0x3051d90()*-0.280611);
}

double NNfunction_sb_cLuL::synapse0x3068430() {
   return (neuron0x30520d0()*-0.944307);
}

double NNfunction_sb_cLuL::synapse0x3068470() {
   return (neuron0x3052410()*-0.164479);
}

double NNfunction_sb_cLuL::synapse0x30684b0() {
   return (neuron0x3052750()*0.240365);
}

double NNfunction_sb_cLuL::synapse0x30684f0() {
   return (neuron0x3052a90()*0.158797);
}

double NNfunction_sb_cLuL::synapse0x3068530() {
   return (neuron0x3052dd0()*-0.0440355);
}

double NNfunction_sb_cLuL::synapse0x3068570() {
   return (neuron0x3053110()*-0.923359);
}

double NNfunction_sb_cLuL::synapse0x30685b0() {
   return (neuron0x3053450()*-0.485399);
}

double NNfunction_sb_cLuL::synapse0x30685f0() {
   return (neuron0x3053790()*0.23401);
}

double NNfunction_sb_cLuL::synapse0x3068630() {
   return (neuron0x3053ad0()*0.860858);
}

double NNfunction_sb_cLuL::synapse0x3068670() {
   return (neuron0x3053e10()*-0.336454);
}

double NNfunction_sb_cLuL::synapse0x3068100() {
   return (neuron0x3054150()*0.19122);
}

double NNfunction_sb_cLuL::synapse0x3068140() {
   return (neuron0x30546b0()*-0.0122607);
}

double NNfunction_sb_cLuL::synapse0x30687c0() {
   return (neuron0x30549f0()*0.441383);
}

double NNfunction_sb_cLuL::synapse0x3068800() {
   return (neuron0x3054d30()*-0.389693);
}

double NNfunction_sb_cLuL::synapse0x3068840() {
   return (neuron0x3055070()*0.287548);
}

double NNfunction_sb_cLuL::synapse0x3068880() {
   return (neuron0x30553b0()*0.775584);
}

double NNfunction_sb_cLuL::synapse0x30688c0() {
   return (neuron0x30556f0()*-0.0520003);
}

double NNfunction_sb_cLuL::synapse0x3068900() {
   return (neuron0x3055a30()*0.416686);
}

double NNfunction_sb_cLuL::synapse0x3068c80() {
   return (neuron0x3050de0()*0.201592);
}

double NNfunction_sb_cLuL::synapse0x3068cc0() {
   return (neuron0x3051090()*0.0185648);
}

double NNfunction_sb_cLuL::synapse0x3068d00() {
   return (neuron0x30513d0()*-0.0551907);
}

double NNfunction_sb_cLuL::synapse0x3068d40() {
   return (neuron0x3051710()*-1.10097);
}

double NNfunction_sb_cLuL::synapse0x3068d80() {
   return (neuron0x3051a50()*-0.219749);
}

double NNfunction_sb_cLuL::synapse0x3068dc0() {
   return (neuron0x3051d90()*-0.318517);
}

double NNfunction_sb_cLuL::synapse0x3068e00() {
   return (neuron0x30520d0()*-0.217968);
}

double NNfunction_sb_cLuL::synapse0x3068e40() {
   return (neuron0x3052410()*0.0300662);
}

double NNfunction_sb_cLuL::synapse0x3068e80() {
   return (neuron0x3052750()*0.231754);
}

double NNfunction_sb_cLuL::synapse0x3068ec0() {
   return (neuron0x3052a90()*0.0563296);
}

double NNfunction_sb_cLuL::synapse0x3068f00() {
   return (neuron0x3052dd0()*-0.0431664);
}

double NNfunction_sb_cLuL::synapse0x3068f40() {
   return (neuron0x3053110()*0.128209);
}

double NNfunction_sb_cLuL::synapse0x3068f80() {
   return (neuron0x3053450()*1.37451);
}

double NNfunction_sb_cLuL::synapse0x3068fc0() {
   return (neuron0x3053790()*-0.00735749);
}

double NNfunction_sb_cLuL::synapse0x3069000() {
   return (neuron0x3053ad0()*0.232172);
}

double NNfunction_sb_cLuL::synapse0x3069040() {
   return (neuron0x3053e10()*-0.130854);
}

double NNfunction_sb_cLuL::synapse0x3068ad0() {
   return (neuron0x3054150()*0.106532);
}

double NNfunction_sb_cLuL::synapse0x3068b10() {
   return (neuron0x30546b0()*0.0909262);
}

double NNfunction_sb_cLuL::synapse0x3069190() {
   return (neuron0x30549f0()*-0.196135);
}

double NNfunction_sb_cLuL::synapse0x30691d0() {
   return (neuron0x3054d30()*-0.214808);
}

double NNfunction_sb_cLuL::synapse0x3069210() {
   return (neuron0x3055070()*-0.0324859);
}

double NNfunction_sb_cLuL::synapse0x3069250() {
   return (neuron0x30553b0()*-0.0520752);
}

double NNfunction_sb_cLuL::synapse0x3069290() {
   return (neuron0x30556f0()*-0.0132044);
}

double NNfunction_sb_cLuL::synapse0x30692d0() {
   return (neuron0x3055a30()*-0.086446);
}

double NNfunction_sb_cLuL::synapse0x3069650() {
   return (neuron0x3050de0()*-0.140743);
}

double NNfunction_sb_cLuL::synapse0x3069690() {
   return (neuron0x3051090()*0.202047);
}

double NNfunction_sb_cLuL::synapse0x30696d0() {
   return (neuron0x30513d0()*0.0358672);
}

double NNfunction_sb_cLuL::synapse0x3069710() {
   return (neuron0x3051710()*-0.0391133);
}

double NNfunction_sb_cLuL::synapse0x3069750() {
   return (neuron0x3051a50()*-0.0749158);
}

double NNfunction_sb_cLuL::synapse0x3069790() {
   return (neuron0x3051d90()*-0.0215954);
}

double NNfunction_sb_cLuL::synapse0x30697d0() {
   return (neuron0x30520d0()*0.0189549);
}

double NNfunction_sb_cLuL::synapse0x3069810() {
   return (neuron0x3052410()*-0.612282);
}

double NNfunction_sb_cLuL::synapse0x3069850() {
   return (neuron0x3052750()*0.521014);
}

double NNfunction_sb_cLuL::synapse0x3069890() {
   return (neuron0x3052a90()*-0.708104);
}

double NNfunction_sb_cLuL::synapse0x30698d0() {
   return (neuron0x3052dd0()*-0.630803);
}

double NNfunction_sb_cLuL::synapse0x3069910() {
   return (neuron0x3053110()*-0.0690418);
}

double NNfunction_sb_cLuL::synapse0x3069950() {
   return (neuron0x3053450()*0.386218);
}

double NNfunction_sb_cLuL::synapse0x3069990() {
   return (neuron0x3053790()*-0.675895);
}

double NNfunction_sb_cLuL::synapse0x30699d0() {
   return (neuron0x3053ad0()*0.920622);
}

double NNfunction_sb_cLuL::synapse0x3069a10() {
   return (neuron0x3053e10()*-0.025348);
}

double NNfunction_sb_cLuL::synapse0x30694a0() {
   return (neuron0x3054150()*-0.664189);
}

double NNfunction_sb_cLuL::synapse0x30694e0() {
   return (neuron0x30546b0()*0.0951447);
}

double NNfunction_sb_cLuL::synapse0x3069b60() {
   return (neuron0x30549f0()*-0.00883973);
}

double NNfunction_sb_cLuL::synapse0x3069ba0() {
   return (neuron0x3054d30()*-0.0927092);
}

double NNfunction_sb_cLuL::synapse0x3069be0() {
   return (neuron0x3055070()*1.25673);
}

double NNfunction_sb_cLuL::synapse0x3069c20() {
   return (neuron0x30553b0()*-0.356672);
}

double NNfunction_sb_cLuL::synapse0x3069c60() {
   return (neuron0x30556f0()*-0.250404);
}

double NNfunction_sb_cLuL::synapse0x3069ca0() {
   return (neuron0x3055a30()*-0.629886);
}

double NNfunction_sb_cLuL::synapse0x306a020() {
   return (neuron0x3050de0()*-0.0571482);
}

double NNfunction_sb_cLuL::synapse0x306a060() {
   return (neuron0x3051090()*0.0168401);
}

double NNfunction_sb_cLuL::synapse0x306a0a0() {
   return (neuron0x30513d0()*0.0357758);
}

double NNfunction_sb_cLuL::synapse0x306a0e0() {
   return (neuron0x3051710()*2.63379);
}

double NNfunction_sb_cLuL::synapse0x306a120() {
   return (neuron0x3051a50()*-0.0297566);
}

double NNfunction_sb_cLuL::synapse0x306a160() {
   return (neuron0x3051d90()*-0.00127484);
}

double NNfunction_sb_cLuL::synapse0x306a1a0() {
   return (neuron0x30520d0()*0.0214591);
}

double NNfunction_sb_cLuL::synapse0x306a1e0() {
   return (neuron0x3052410()*0.0176213);
}

double NNfunction_sb_cLuL::synapse0x306a220() {
   return (neuron0x3052750()*0.0156224);
}

double NNfunction_sb_cLuL::synapse0x306a260() {
   return (neuron0x3052a90()*0.00555608);
}

double NNfunction_sb_cLuL::synapse0x306a2a0() {
   return (neuron0x3052dd0()*0.0477417);
}

double NNfunction_sb_cLuL::synapse0x306a2e0() {
   return (neuron0x3053110()*0.0585983);
}

double NNfunction_sb_cLuL::synapse0x306a320() {
   return (neuron0x3053450()*0.0335721);
}

double NNfunction_sb_cLuL::synapse0x306a360() {
   return (neuron0x3053790()*0.0264072);
}

double NNfunction_sb_cLuL::synapse0x306a3a0() {
   return (neuron0x3053ad0()*0.0154498);
}

double NNfunction_sb_cLuL::synapse0x306a3e0() {
   return (neuron0x3053e10()*0.0110808);
}

double NNfunction_sb_cLuL::synapse0x3069e70() {
   return (neuron0x3054150()*-0.0047242);
}

double NNfunction_sb_cLuL::synapse0x3069eb0() {
   return (neuron0x30546b0()*0.0177681);
}

double NNfunction_sb_cLuL::synapse0x306a530() {
   return (neuron0x30549f0()*-0.00257049);
}

double NNfunction_sb_cLuL::synapse0x306a570() {
   return (neuron0x3054d30()*0.0475647);
}

double NNfunction_sb_cLuL::synapse0x306a5b0() {
   return (neuron0x3055070()*0.0382547);
}

double NNfunction_sb_cLuL::synapse0x306a5f0() {
   return (neuron0x30553b0()*0.0386686);
}

double NNfunction_sb_cLuL::synapse0x306a630() {
   return (neuron0x30556f0()*0.00250401);
}

double NNfunction_sb_cLuL::synapse0x306a670() {
   return (neuron0x3055a30()*0.0649728);
}

double NNfunction_sb_cLuL::synapse0x306a9f0() {
   return (neuron0x3050de0()*0.0381707);
}

double NNfunction_sb_cLuL::synapse0x306aa30() {
   return (neuron0x3051090()*0.00750529);
}

double NNfunction_sb_cLuL::synapse0x306aa70() {
   return (neuron0x30513d0()*0.00536132);
}

double NNfunction_sb_cLuL::synapse0x306aab0() {
   return (neuron0x3051710()*3.94883);
}

double NNfunction_sb_cLuL::synapse0x306aaf0() {
   return (neuron0x3051a50()*-0.00367653);
}

double NNfunction_sb_cLuL::synapse0x306ab30() {
   return (neuron0x3051d90()*0.0121545);
}

double NNfunction_sb_cLuL::synapse0x306ab70() {
   return (neuron0x30520d0()*-0.000138206);
}

double NNfunction_sb_cLuL::synapse0x306abb0() {
   return (neuron0x3052410()*-0.00200603);
}

double NNfunction_sb_cLuL::synapse0x306abf0() {
   return (neuron0x3052750()*-0.0233538);
}

double NNfunction_sb_cLuL::synapse0x306ac30() {
   return (neuron0x3052a90()*-0.038277);
}

double NNfunction_sb_cLuL::synapse0x306ac70() {
   return (neuron0x3052dd0()*-0.0888794);
}

double NNfunction_sb_cLuL::synapse0x306acb0() {
   return (neuron0x3053110()*0.179046);
}

double NNfunction_sb_cLuL::synapse0x306acf0() {
   return (neuron0x3053450()*0.220079);
}

double NNfunction_sb_cLuL::synapse0x306ad30() {
   return (neuron0x3053790()*-0.0609728);
}

double NNfunction_sb_cLuL::synapse0x306ad70() {
   return (neuron0x3053ad0()*-0.0247251);
}

double NNfunction_sb_cLuL::synapse0x306adb0() {
   return (neuron0x3053e10()*-0.0326967);
}

double NNfunction_sb_cLuL::synapse0x306a840() {
   return (neuron0x3054150()*-0.0405633);
}

double NNfunction_sb_cLuL::synapse0x306a880() {
   return (neuron0x30546b0()*-0.0077871);
}

double NNfunction_sb_cLuL::synapse0x306af00() {
   return (neuron0x30549f0()*-0.0629927);
}

double NNfunction_sb_cLuL::synapse0x306af40() {
   return (neuron0x3054d30()*-0.0513864);
}

double NNfunction_sb_cLuL::synapse0x306af80() {
   return (neuron0x3055070()*-0.0216061);
}

double NNfunction_sb_cLuL::synapse0x306afc0() {
   return (neuron0x30553b0()*-0.0562461);
}

double NNfunction_sb_cLuL::synapse0x306b000() {
   return (neuron0x30556f0()*-0.00193934);
}

double NNfunction_sb_cLuL::synapse0x306b040() {
   return (neuron0x3055a30()*-0.0410186);
}

double NNfunction_sb_cLuL::synapse0x306b3c0() {
   return (neuron0x3050de0()*-0.124713);
}

double NNfunction_sb_cLuL::synapse0x306b400() {
   return (neuron0x3051090()*-0.0721279);
}

double NNfunction_sb_cLuL::synapse0x306b440() {
   return (neuron0x30513d0()*0.079962);
}

double NNfunction_sb_cLuL::synapse0x306b480() {
   return (neuron0x3051710()*-1.63586);
}

double NNfunction_sb_cLuL::synapse0x306b4c0() {
   return (neuron0x3051a50()*-0.178671);
}

double NNfunction_sb_cLuL::synapse0x306b500() {
   return (neuron0x3051d90()*1.05067);
}

double NNfunction_sb_cLuL::synapse0x306b540() {
   return (neuron0x30520d0()*-0.314384);
}

double NNfunction_sb_cLuL::synapse0x306b580() {
   return (neuron0x3052410()*0.0565089);
}

double NNfunction_sb_cLuL::synapse0x306b5c0() {
   return (neuron0x3052750()*0.272799);
}

double NNfunction_sb_cLuL::synapse0x306b600() {
   return (neuron0x3052a90()*-0.269361);
}

double NNfunction_sb_cLuL::synapse0x306b640() {
   return (neuron0x3052dd0()*-0.0167038);
}

double NNfunction_sb_cLuL::synapse0x306b680() {
   return (neuron0x3053110()*-0.659757);
}

double NNfunction_sb_cLuL::synapse0x306b6c0() {
   return (neuron0x3053450()*-0.789255);
}

double NNfunction_sb_cLuL::synapse0x306b700() {
   return (neuron0x3053790()*-0.231145);
}

double NNfunction_sb_cLuL::synapse0x306b740() {
   return (neuron0x3053ad0()*0.153758);
}

double NNfunction_sb_cLuL::synapse0x306b780() {
   return (neuron0x3053e10()*-0.29996);
}

double NNfunction_sb_cLuL::synapse0x306b210() {
   return (neuron0x3054150()*0.346395);
}

double NNfunction_sb_cLuL::synapse0x306b250() {
   return (neuron0x30546b0()*-0.0514242);
}

double NNfunction_sb_cLuL::synapse0x306b8d0() {
   return (neuron0x30549f0()*-0.37864);
}

double NNfunction_sb_cLuL::synapse0x306b910() {
   return (neuron0x3054d30()*-0.184826);
}

double NNfunction_sb_cLuL::synapse0x306b950() {
   return (neuron0x3055070()*0.168503);
}

double NNfunction_sb_cLuL::synapse0x306b990() {
   return (neuron0x30553b0()*0.500606);
}

double NNfunction_sb_cLuL::synapse0x306b9d0() {
   return (neuron0x30556f0()*0.111423);
}

double NNfunction_sb_cLuL::synapse0x306ba10() {
   return (neuron0x3055a30()*-0.083046);
}

double NNfunction_sb_cLuL::synapse0x306bd90() {
   return (neuron0x3050de0()*0.315491);
}

double NNfunction_sb_cLuL::synapse0x306bdd0() {
   return (neuron0x3051090()*-0.230428);
}

double NNfunction_sb_cLuL::synapse0x306be10() {
   return (neuron0x30513d0()*-0.319838);
}

double NNfunction_sb_cLuL::synapse0x306be50() {
   return (neuron0x3051710()*-0.359266);
}

double NNfunction_sb_cLuL::synapse0x306be90() {
   return (neuron0x3051a50()*-0.0673643);
}

double NNfunction_sb_cLuL::synapse0x306bed0() {
   return (neuron0x3051d90()*1.08853);
}

double NNfunction_sb_cLuL::synapse0x306bf10() {
   return (neuron0x30520d0()*-0.188797);
}

double NNfunction_sb_cLuL::synapse0x306bf50() {
   return (neuron0x3052410()*0.649539);
}

double NNfunction_sb_cLuL::synapse0x306bf90() {
   return (neuron0x3052750()*0.368299);
}

double NNfunction_sb_cLuL::synapse0x306bfd0() {
   return (neuron0x3052a90()*-0.369589);
}

double NNfunction_sb_cLuL::synapse0x306c010() {
   return (neuron0x3052dd0()*0.240455);
}

double NNfunction_sb_cLuL::synapse0x306c050() {
   return (neuron0x3053110()*-0.492336);
}

double NNfunction_sb_cLuL::synapse0x306c090() {
   return (neuron0x3053450()*-1.06678);
}

double NNfunction_sb_cLuL::synapse0x306c0d0() {
   return (neuron0x3053790()*-0.0267579);
}

double NNfunction_sb_cLuL::synapse0x306c110() {
   return (neuron0x3053ad0()*0.122579);
}

double NNfunction_sb_cLuL::synapse0x306c150() {
   return (neuron0x3053e10()*-0.516475);
}

double NNfunction_sb_cLuL::synapse0x306bbe0() {
   return (neuron0x3054150()*0.264949);
}

double NNfunction_sb_cLuL::synapse0x306bc20() {
   return (neuron0x30546b0()*-0.231904);
}

double NNfunction_sb_cLuL::synapse0x306c2a0() {
   return (neuron0x30549f0()*-0.548549);
}

double NNfunction_sb_cLuL::synapse0x306c2e0() {
   return (neuron0x3054d30()*-0.22813);
}

double NNfunction_sb_cLuL::synapse0x306c320() {
   return (neuron0x3055070()*0.312259);
}

double NNfunction_sb_cLuL::synapse0x306c360() {
   return (neuron0x30553b0()*0.669252);
}

double NNfunction_sb_cLuL::synapse0x306c3a0() {
   return (neuron0x30556f0()*0.122126);
}

double NNfunction_sb_cLuL::synapse0x306c3e0() {
   return (neuron0x3055a30()*0.248996);
}

double NNfunction_sb_cLuL::synapse0x306c760() {
   return (neuron0x3050de0()*-0.00591722);
}

double NNfunction_sb_cLuL::synapse0x3060d30() {
   return (neuron0x3051090()*0.00438301);
}

double NNfunction_sb_cLuL::synapse0x3060d70() {
   return (neuron0x30513d0()*-0.038722);
}

double NNfunction_sb_cLuL::synapse0x3060db0() {
   return (neuron0x3051710()*0.0532495);
}

double NNfunction_sb_cLuL::synapse0x3061000() {
   return (neuron0x3051a50()*0.00392411);
}

double NNfunction_sb_cLuL::synapse0x3061040() {
   return (neuron0x3051d90()*0.0144959);
}

double NNfunction_sb_cLuL::synapse0x3061080() {
   return (neuron0x30520d0()*0.00937902);
}

double NNfunction_sb_cLuL::synapse0x30612d0() {
   return (neuron0x3052410()*0.00154823);
}

double NNfunction_sb_cLuL::synapse0x3061310() {
   return (neuron0x3052750()*0.00245842);
}

double NNfunction_sb_cLuL::synapse0x3061560() {
   return (neuron0x3052a90()*-0.0125482);
}

double NNfunction_sb_cLuL::synapse0x30615a0() {
   return (neuron0x3052dd0()*0.00993364);
}

double NNfunction_sb_cLuL::synapse0x30615e0() {
   return (neuron0x3053110()*-0.213045);
}

double NNfunction_sb_cLuL::synapse0x3061830() {
   return (neuron0x3053450()*1.8605);
}

double NNfunction_sb_cLuL::synapse0x3061870() {
   return (neuron0x3053790()*0.0205207);
}

double NNfunction_sb_cLuL::synapse0x3061ac0() {
   return (neuron0x3053ad0()*-0.0371256);
}

double NNfunction_sb_cLuL::synapse0x3061b00() {
   return (neuron0x3053e10()*0.000823043);
}

double NNfunction_sb_cLuL::synapse0x306c5b0() {
   return (neuron0x3054150()*0.0205436);
}

double NNfunction_sb_cLuL::synapse0x306c5f0() {
   return (neuron0x30546b0()*0.0085458);
}

double NNfunction_sb_cLuL::synapse0x3061c50() {
   return (neuron0x30549f0()*-0.00346363);
}

double NNfunction_sb_cLuL::synapse0x3062160() {
   return (neuron0x3054d30()*-0.011943);
}

double NNfunction_sb_cLuL::synapse0x30621a0() {
   return (neuron0x3055070()*-0.00533503);
}

double NNfunction_sb_cLuL::synapse0x30621e0() {
   return (neuron0x30553b0()*0.0195256);
}

double NNfunction_sb_cLuL::synapse0x3062430() {
   return (neuron0x30556f0()*0.0147742);
}

double NNfunction_sb_cLuL::synapse0x3062470() {
   return (neuron0x3055a30()*-0.0255332);
}

double NNfunction_sb_cLuL::synapse0x3061d20() {
   return (neuron0x3050de0()*0.115478);
}

double NNfunction_sb_cLuL::synapse0x3061d60() {
   return (neuron0x3051090()*-0.0998623);
}

double NNfunction_sb_cLuL::synapse0x3061da0() {
   return (neuron0x30513d0()*-0.0518986);
}

double NNfunction_sb_cLuL::synapse0x3061de0() {
   return (neuron0x3051710()*-2.13084);
}

double NNfunction_sb_cLuL::synapse0x3062760() {
   return (neuron0x3051a50()*0.027069);
}

double NNfunction_sb_cLuL::synapse0x306eab0() {
   return (neuron0x3051d90()*-0.00507863);
}

double NNfunction_sb_cLuL::synapse0x306eaf0() {
   return (neuron0x30520d0()*-0.0606408);
}

double NNfunction_sb_cLuL::synapse0x306eb30() {
   return (neuron0x3052410()*-0.0441609);
}

double NNfunction_sb_cLuL::synapse0x306eb70() {
   return (neuron0x3052750()*0.0331087);
}

double NNfunction_sb_cLuL::synapse0x306ebb0() {
   return (neuron0x3052a90()*0.0600173);
}

double NNfunction_sb_cLuL::synapse0x306ebf0() {
   return (neuron0x3052dd0()*-0.0104052);
}

double NNfunction_sb_cLuL::synapse0x306ec30() {
   return (neuron0x3053110()*-0.124704);
}

double NNfunction_sb_cLuL::synapse0x306ec70() {
   return (neuron0x3053450()*-0.285566);
}

double NNfunction_sb_cLuL::synapse0x306ecb0() {
   return (neuron0x3053790()*-0.00726316);
}

double NNfunction_sb_cLuL::synapse0x306ecf0() {
   return (neuron0x3053ad0()*0.00799137);
}

double NNfunction_sb_cLuL::synapse0x306ed30() {
   return (neuron0x3053e10()*-0.031542);
}

double NNfunction_sb_cLuL::synapse0x3062640() {
   return (neuron0x3054150()*0.0558333);
}

double NNfunction_sb_cLuL::synapse0x3062680() {
   return (neuron0x30546b0()*-0.0229781);
}

double NNfunction_sb_cLuL::synapse0x306ee80() {
   return (neuron0x30549f0()*0.0647354);
}

double NNfunction_sb_cLuL::synapse0x306eec0() {
   return (neuron0x3054d30()*-0.0197077);
}

double NNfunction_sb_cLuL::synapse0x306ef00() {
   return (neuron0x3055070()*-0.0352857);
}

double NNfunction_sb_cLuL::synapse0x306ef40() {
   return (neuron0x30553b0()*0.00811125);
}

double NNfunction_sb_cLuL::synapse0x306ef80() {
   return (neuron0x30556f0()*-0.0275314);
}

double NNfunction_sb_cLuL::synapse0x306efc0() {
   return (neuron0x3055a30()*-0.0690957);
}

double NNfunction_sb_cLuL::synapse0x306f340() {
   return (neuron0x3050de0()*-0.131128);
}

double NNfunction_sb_cLuL::synapse0x306f380() {
   return (neuron0x3051090()*-0.702244);
}

double NNfunction_sb_cLuL::synapse0x306f3c0() {
   return (neuron0x30513d0()*-0.12666);
}

double NNfunction_sb_cLuL::synapse0x306f400() {
   return (neuron0x3051710()*0.0329301);
}

double NNfunction_sb_cLuL::synapse0x306f440() {
   return (neuron0x3051a50()*-0.225311);
}

double NNfunction_sb_cLuL::synapse0x306f480() {
   return (neuron0x3051d90()*0.383241);
}

double NNfunction_sb_cLuL::synapse0x306f4c0() {
   return (neuron0x30520d0()*0.139109);
}

double NNfunction_sb_cLuL::synapse0x306f500() {
   return (neuron0x3052410()*-0.0523187);
}

double NNfunction_sb_cLuL::synapse0x306f540() {
   return (neuron0x3052750()*0.132562);
}

double NNfunction_sb_cLuL::synapse0x306f580() {
   return (neuron0x3052a90()*0.185974);
}

double NNfunction_sb_cLuL::synapse0x306f5c0() {
   return (neuron0x3052dd0()*-0.101136);
}

double NNfunction_sb_cLuL::synapse0x306f600() {
   return (neuron0x3053110()*-0.0561196);
}

double NNfunction_sb_cLuL::synapse0x306f640() {
   return (neuron0x3053450()*-0.599606);
}

double NNfunction_sb_cLuL::synapse0x306f680() {
   return (neuron0x3053790()*-0.616296);
}

double NNfunction_sb_cLuL::synapse0x306f6c0() {
   return (neuron0x3053ad0()*0.450971);
}

double NNfunction_sb_cLuL::synapse0x306f700() {
   return (neuron0x3053e10()*0.896466);
}

double NNfunction_sb_cLuL::synapse0x306f190() {
   return (neuron0x3054150()*-0.350428);
}

double NNfunction_sb_cLuL::synapse0x306f1d0() {
   return (neuron0x30546b0()*0.44409);
}

double NNfunction_sb_cLuL::synapse0x306f850() {
   return (neuron0x30549f0()*0.561625);
}

double NNfunction_sb_cLuL::synapse0x306f890() {
   return (neuron0x3054d30()*0.282048);
}

double NNfunction_sb_cLuL::synapse0x306f8d0() {
   return (neuron0x3055070()*0.198407);
}

double NNfunction_sb_cLuL::synapse0x306f910() {
   return (neuron0x30553b0()*0.0363686);
}

double NNfunction_sb_cLuL::synapse0x306f950() {
   return (neuron0x30556f0()*-0.149835);
}

double NNfunction_sb_cLuL::synapse0x306f990() {
   return (neuron0x3055a30()*0.527949);
}

double NNfunction_sb_cLuL::synapse0x306fd10() {
   return (neuron0x3050de0()*0.00126935);
}

double NNfunction_sb_cLuL::synapse0x306fd50() {
   return (neuron0x3051090()*-0.00433258);
}

double NNfunction_sb_cLuL::synapse0x306fd90() {
   return (neuron0x30513d0()*-0.0358046);
}

double NNfunction_sb_cLuL::synapse0x306fdd0() {
   return (neuron0x3051710()*0.62458);
}

double NNfunction_sb_cLuL::synapse0x306fe10() {
   return (neuron0x3051a50()*-0.0163066);
}

double NNfunction_sb_cLuL::synapse0x306fe50() {
   return (neuron0x3051d90()*0.00649391);
}

double NNfunction_sb_cLuL::synapse0x306fe90() {
   return (neuron0x30520d0()*-0.000316435);
}

double NNfunction_sb_cLuL::synapse0x306fed0() {
   return (neuron0x3052410()*0.0321219);
}

double NNfunction_sb_cLuL::synapse0x306ff10() {
   return (neuron0x3052750()*0.00262461);
}

double NNfunction_sb_cLuL::synapse0x306ff50() {
   return (neuron0x3052a90()*0.0260775);
}

double NNfunction_sb_cLuL::synapse0x306ff90() {
   return (neuron0x3052dd0()*-0.0425239);
}

double NNfunction_sb_cLuL::synapse0x306ffd0() {
   return (neuron0x3053110()*-1.1986);
}

double NNfunction_sb_cLuL::synapse0x3070010() {
   return (neuron0x3053450()*-0.537895);
}

double NNfunction_sb_cLuL::synapse0x3070050() {
   return (neuron0x3053790()*-0.0115042);
}

double NNfunction_sb_cLuL::synapse0x3070090() {
   return (neuron0x3053ad0()*-0.00109842);
}

double NNfunction_sb_cLuL::synapse0x30700d0() {
   return (neuron0x3053e10()*0.0268108);
}

double NNfunction_sb_cLuL::synapse0x306fb60() {
   return (neuron0x3054150()*-0.0340814);
}

double NNfunction_sb_cLuL::synapse0x306fba0() {
   return (neuron0x30546b0()*0.0137403);
}

double NNfunction_sb_cLuL::synapse0x3070220() {
   return (neuron0x30549f0()*-0.010974);
}

double NNfunction_sb_cLuL::synapse0x3070260() {
   return (neuron0x3054d30()*0.00487762);
}

double NNfunction_sb_cLuL::synapse0x30702a0() {
   return (neuron0x3055070()*-0.0135335);
}

double NNfunction_sb_cLuL::synapse0x30702e0() {
   return (neuron0x30553b0()*0.00605149);
}

double NNfunction_sb_cLuL::synapse0x3070320() {
   return (neuron0x30556f0()*0.0171389);
}

double NNfunction_sb_cLuL::synapse0x3070360() {
   return (neuron0x3055a30()*0.00232871);
}

double NNfunction_sb_cLuL::synapse0x30706e0() {
   return (neuron0x3050de0()*-0.0992949);
}

double NNfunction_sb_cLuL::synapse0x3070720() {
   return (neuron0x3051090()*-0.141411);
}

double NNfunction_sb_cLuL::synapse0x3070760() {
   return (neuron0x30513d0()*0.468934);
}

double NNfunction_sb_cLuL::synapse0x30707a0() {
   return (neuron0x3051710()*-0.504927);
}

double NNfunction_sb_cLuL::synapse0x30707e0() {
   return (neuron0x3051a50()*0.737302);
}

double NNfunction_sb_cLuL::synapse0x3070820() {
   return (neuron0x3051d90()*0.24975);
}

double NNfunction_sb_cLuL::synapse0x3070860() {
   return (neuron0x30520d0()*-0.282596);
}

double NNfunction_sb_cLuL::synapse0x30708a0() {
   return (neuron0x3052410()*0.817835);
}

double NNfunction_sb_cLuL::synapse0x30708e0() {
   return (neuron0x3052750()*0.273939);
}

double NNfunction_sb_cLuL::synapse0x3070920() {
   return (neuron0x3052a90()*-0.209862);
}

double NNfunction_sb_cLuL::synapse0x3070960() {
   return (neuron0x3052dd0()*-0.0274819);
}

double NNfunction_sb_cLuL::synapse0x30709a0() {
   return (neuron0x3053110()*-0.238293);
}

double NNfunction_sb_cLuL::synapse0x30709e0() {
   return (neuron0x3053450()*-0.0644007);
}

double NNfunction_sb_cLuL::synapse0x3070a20() {
   return (neuron0x3053790()*0.405144);
}

double NNfunction_sb_cLuL::synapse0x3070a60() {
   return (neuron0x3053ad0()*0.719229);
}

double NNfunction_sb_cLuL::synapse0x3070aa0() {
   return (neuron0x3053e10()*0.0010628);
}

double NNfunction_sb_cLuL::synapse0x3070530() {
   return (neuron0x3054150()*-0.0392124);
}

double NNfunction_sb_cLuL::synapse0x3070570() {
   return (neuron0x30546b0()*-0.0982319);
}

double NNfunction_sb_cLuL::synapse0x3070bf0() {
   return (neuron0x30549f0()*0.445584);
}

double NNfunction_sb_cLuL::synapse0x3070c30() {
   return (neuron0x3054d30()*0.106208);
}

double NNfunction_sb_cLuL::synapse0x3070c70() {
   return (neuron0x3055070()*-0.0119484);
}

double NNfunction_sb_cLuL::synapse0x3070cb0() {
   return (neuron0x30553b0()*-0.683829);
}

double NNfunction_sb_cLuL::synapse0x3070cf0() {
   return (neuron0x30556f0()*0.0251389);
}

double NNfunction_sb_cLuL::synapse0x3070d30() {
   return (neuron0x3055a30()*0.0830936);
}

double NNfunction_sb_cLuL::synapse0x30710b0() {
   return (neuron0x3050de0()*0.0157688);
}

double NNfunction_sb_cLuL::synapse0x30710f0() {
   return (neuron0x3051090()*-0.000594731);
}

double NNfunction_sb_cLuL::synapse0x3071130() {
   return (neuron0x30513d0()*-0.0466926);
}

double NNfunction_sb_cLuL::synapse0x3071170() {
   return (neuron0x3051710()*-0.122746);
}

double NNfunction_sb_cLuL::synapse0x30711b0() {
   return (neuron0x3051a50()*0.00566675);
}

double NNfunction_sb_cLuL::synapse0x30711f0() {
   return (neuron0x3051d90()*-0.029345);
}

double NNfunction_sb_cLuL::synapse0x3071230() {
   return (neuron0x30520d0()*-0.0088069);
}

double NNfunction_sb_cLuL::synapse0x3071270() {
   return (neuron0x3052410()*-0.000495437);
}

double NNfunction_sb_cLuL::synapse0x30712b0() {
   return (neuron0x3052750()*-0.0037669);
}

double NNfunction_sb_cLuL::synapse0x30712f0() {
   return (neuron0x3052a90()*0.0134344);
}

double NNfunction_sb_cLuL::synapse0x3071330() {
   return (neuron0x3052dd0()*0.0437953);
}

double NNfunction_sb_cLuL::synapse0x3071370() {
   return (neuron0x3053110()*1.72136);
}

double NNfunction_sb_cLuL::synapse0x30713b0() {
   return (neuron0x3053450()*-0.27842);
}

double NNfunction_sb_cLuL::synapse0x30713f0() {
   return (neuron0x3053790()*0.0195942);
}

double NNfunction_sb_cLuL::synapse0x3071430() {
   return (neuron0x3053ad0()*0.00664542);
}

double NNfunction_sb_cLuL::synapse0x3071470() {
   return (neuron0x3053e10()*0.017183);
}

double NNfunction_sb_cLuL::synapse0x3070f00() {
   return (neuron0x3054150()*0.00128903);
}

double NNfunction_sb_cLuL::synapse0x3070f40() {
   return (neuron0x30546b0()*-0.0211064);
}

double NNfunction_sb_cLuL::synapse0x30715c0() {
   return (neuron0x30549f0()*-0.000371788);
}

double NNfunction_sb_cLuL::synapse0x3071600() {
   return (neuron0x3054d30()*0.0246433);
}

double NNfunction_sb_cLuL::synapse0x3071640() {
   return (neuron0x3055070()*0.00764389);
}

double NNfunction_sb_cLuL::synapse0x3071680() {
   return (neuron0x30553b0()*-0.0194988);
}

double NNfunction_sb_cLuL::synapse0x30716c0() {
   return (neuron0x30556f0()*0.0110094);
}

double NNfunction_sb_cLuL::synapse0x3071700() {
   return (neuron0x3055a30()*0.0166424);
}

double NNfunction_sb_cLuL::synapse0x3071a80() {
   return (neuron0x3050de0()*0.00611056);
}

double NNfunction_sb_cLuL::synapse0x3071ac0() {
   return (neuron0x3051090()*-0.0020539);
}

double NNfunction_sb_cLuL::synapse0x3071b00() {
   return (neuron0x30513d0()*0.018158);
}

double NNfunction_sb_cLuL::synapse0x3071b40() {
   return (neuron0x3051710()*0.0133349);
}

double NNfunction_sb_cLuL::synapse0x3071b80() {
   return (neuron0x3051a50()*-0.0154805);
}

double NNfunction_sb_cLuL::synapse0x3071bc0() {
   return (neuron0x3051d90()*-0.011039);
}

double NNfunction_sb_cLuL::synapse0x3071c00() {
   return (neuron0x30520d0()*0.00216204);
}

double NNfunction_sb_cLuL::synapse0x3071c40() {
   return (neuron0x3052410()*-0.000755114);
}

double NNfunction_sb_cLuL::synapse0x3071c80() {
   return (neuron0x3052750()*0.00211792);
}

double NNfunction_sb_cLuL::synapse0x3071cc0() {
   return (neuron0x3052a90()*0.00533978);
}

double NNfunction_sb_cLuL::synapse0x3071d00() {
   return (neuron0x3052dd0()*0.0213013);
}

double NNfunction_sb_cLuL::synapse0x3071d40() {
   return (neuron0x3053110()*0.0828632);
}

double NNfunction_sb_cLuL::synapse0x3071d80() {
   return (neuron0x3053450()*-1.02869);
}

double NNfunction_sb_cLuL::synapse0x3071dc0() {
   return (neuron0x3053790()*-0.00884549);
}

double NNfunction_sb_cLuL::synapse0x3071e00() {
   return (neuron0x3053ad0()*0.00473124);
}

double NNfunction_sb_cLuL::synapse0x3071e40() {
   return (neuron0x3053e10()*0.00854945);
}

double NNfunction_sb_cLuL::synapse0x30718d0() {
   return (neuron0x3054150()*-0.000455149);
}

double NNfunction_sb_cLuL::synapse0x3071910() {
   return (neuron0x30546b0()*0.0182833);
}

double NNfunction_sb_cLuL::synapse0x3071f90() {
   return (neuron0x30549f0()*0.00860372);
}

double NNfunction_sb_cLuL::synapse0x3071fd0() {
   return (neuron0x3054d30()*0.00025605);
}

double NNfunction_sb_cLuL::synapse0x3072010() {
   return (neuron0x3055070()*-0.00158584);
}

double NNfunction_sb_cLuL::synapse0x3072050() {
   return (neuron0x30553b0()*0.00309501);
}

double NNfunction_sb_cLuL::synapse0x3072090() {
   return (neuron0x30556f0()*0.000672893);
}

double NNfunction_sb_cLuL::synapse0x30720d0() {
   return (neuron0x3055a30()*-0.00148797);
}

double NNfunction_sb_cLuL::synapse0x3072450() {
   return (neuron0x3050de0()*-0.132003);
}

double NNfunction_sb_cLuL::synapse0x3072490() {
   return (neuron0x3051090()*0.0560773);
}

double NNfunction_sb_cLuL::synapse0x30724d0() {
   return (neuron0x30513d0()*0.167747);
}

double NNfunction_sb_cLuL::synapse0x3072510() {
   return (neuron0x3051710()*-2.09431);
}

double NNfunction_sb_cLuL::synapse0x3072550() {
   return (neuron0x3051a50()*-0.107828);
}

double NNfunction_sb_cLuL::synapse0x3072590() {
   return (neuron0x3051d90()*0.0262753);
}

double NNfunction_sb_cLuL::synapse0x30725d0() {
   return (neuron0x30520d0()*0.0348419);
}

double NNfunction_sb_cLuL::synapse0x3072610() {
   return (neuron0x3052410()*0.0627544);
}

double NNfunction_sb_cLuL::synapse0x3072650() {
   return (neuron0x3052750()*-0.0022738);
}

double NNfunction_sb_cLuL::synapse0x3072690() {
   return (neuron0x3052a90()*-0.0287347);
}

double NNfunction_sb_cLuL::synapse0x30726d0() {
   return (neuron0x3052dd0()*0.0815761);
}

double NNfunction_sb_cLuL::synapse0x3072710() {
   return (neuron0x3053110()*0.136918);
}

double NNfunction_sb_cLuL::synapse0x3072750() {
   return (neuron0x3053450()*0.0142067);
}

double NNfunction_sb_cLuL::synapse0x3072790() {
   return (neuron0x3053790()*-0.0435894);
}

double NNfunction_sb_cLuL::synapse0x30727d0() {
   return (neuron0x3053ad0()*0.0220398);
}

double NNfunction_sb_cLuL::synapse0x3072810() {
   return (neuron0x3053e10()*0.070846);
}

double NNfunction_sb_cLuL::synapse0x30722a0() {
   return (neuron0x3054150()*-0.0497314);
}

double NNfunction_sb_cLuL::synapse0x30722e0() {
   return (neuron0x30546b0()*0.0170349);
}

double NNfunction_sb_cLuL::synapse0x3072960() {
   return (neuron0x30549f0()*-0.0870123);
}

double NNfunction_sb_cLuL::synapse0x30729a0() {
   return (neuron0x3054d30()*0.0619582);
}

double NNfunction_sb_cLuL::synapse0x30729e0() {
   return (neuron0x3055070()*0.143806);
}

double NNfunction_sb_cLuL::synapse0x3072a20() {
   return (neuron0x30553b0()*0.0495657);
}

double NNfunction_sb_cLuL::synapse0x3072a60() {
   return (neuron0x30556f0()*0.0130787);
}

double NNfunction_sb_cLuL::synapse0x3072aa0() {
   return (neuron0x3055a30()*0.145135);
}

double NNfunction_sb_cLuL::synapse0x3072e20() {
   return (neuron0x3050de0()*0.00718983);
}

double NNfunction_sb_cLuL::synapse0x3072e60() {
   return (neuron0x3051090()*0.00801086);
}

double NNfunction_sb_cLuL::synapse0x3072ea0() {
   return (neuron0x30513d0()*-0.0479606);
}

double NNfunction_sb_cLuL::synapse0x3072ee0() {
   return (neuron0x3051710()*-5.14277);
}

double NNfunction_sb_cLuL::synapse0x3072f20() {
   return (neuron0x3051a50()*0.0134725);
}

double NNfunction_sb_cLuL::synapse0x3072f60() {
   return (neuron0x3051d90()*-0.0108975);
}

double NNfunction_sb_cLuL::synapse0x3072fa0() {
   return (neuron0x30520d0()*0.00718312);
}

double NNfunction_sb_cLuL::synapse0x3072fe0() {
   return (neuron0x3052410()*-0.00340458);
}

double NNfunction_sb_cLuL::synapse0x3073020() {
   return (neuron0x3052750()*0.00182287);
}

double NNfunction_sb_cLuL::synapse0x3073060() {
   return (neuron0x3052a90()*0.00966233);
}

double NNfunction_sb_cLuL::synapse0x30730a0() {
   return (neuron0x3052dd0()*0.00469402);
}

double NNfunction_sb_cLuL::synapse0x30730e0() {
   return (neuron0x3053110()*0.219438);
}

double NNfunction_sb_cLuL::synapse0x3073120() {
   return (neuron0x3053450()*0.189022);
}

double NNfunction_sb_cLuL::synapse0x3073160() {
   return (neuron0x3053790()*0.00289576);
}

double NNfunction_sb_cLuL::synapse0x30731a0() {
   return (neuron0x3053ad0()*-0.0169981);
}

double NNfunction_sb_cLuL::synapse0x30731e0() {
   return (neuron0x3053e10()*-0.0191138);
}

double NNfunction_sb_cLuL::synapse0x3072c70() {
   return (neuron0x3054150()*-0.000738891);
}

double NNfunction_sb_cLuL::synapse0x3072cb0() {
   return (neuron0x30546b0()*-0.00461956);
}

double NNfunction_sb_cLuL::synapse0x3073330() {
   return (neuron0x30549f0()*0.00483346);
}

double NNfunction_sb_cLuL::synapse0x3073370() {
   return (neuron0x3054d30()*0.0171847);
}

double NNfunction_sb_cLuL::synapse0x30733b0() {
   return (neuron0x3055070()*-0.00776453);
}

double NNfunction_sb_cLuL::synapse0x30733f0() {
   return (neuron0x30553b0()*0.0103648);
}

double NNfunction_sb_cLuL::synapse0x3073430() {
   return (neuron0x30556f0()*0.0174045);
}

double NNfunction_sb_cLuL::synapse0x3073470() {
   return (neuron0x3055a30()*-0.00374369);
}

double NNfunction_sb_cLuL::synapse0x305bf20() {
   return (neuron0x3050de0()*1.4576);
}

double NNfunction_sb_cLuL::synapse0x305bf60() {
   return (neuron0x3051090()*-0.448368);
}

double NNfunction_sb_cLuL::synapse0x305bfa0() {
   return (neuron0x30513d0()*0.24899);
}

double NNfunction_sb_cLuL::synapse0x305bfe0() {
   return (neuron0x3051710()*-0.167639);
}

double NNfunction_sb_cLuL::synapse0x305c020() {
   return (neuron0x3051a50()*-0.395136);
}

double NNfunction_sb_cLuL::synapse0x305c060() {
   return (neuron0x3051d90()*-0.300102);
}

double NNfunction_sb_cLuL::synapse0x305c0a0() {
   return (neuron0x30520d0()*0.587);
}

double NNfunction_sb_cLuL::synapse0x305c0e0() {
   return (neuron0x3052410()*0.220486);
}

double NNfunction_sb_cLuL::synapse0x3073c00() {
   return (neuron0x3052750()*0.281196);
}

double NNfunction_sb_cLuL::synapse0x3073c40() {
   return (neuron0x3052a90()*0.432989);
}

double NNfunction_sb_cLuL::synapse0x3073c80() {
   return (neuron0x3052dd0()*0.177111);
}

double NNfunction_sb_cLuL::synapse0x3073cc0() {
   return (neuron0x3053110()*0.639992);
}

double NNfunction_sb_cLuL::synapse0x3073d00() {
   return (neuron0x3053450()*0.224715);
}

double NNfunction_sb_cLuL::synapse0x3073d40() {
   return (neuron0x3053790()*0.971968);
}

double NNfunction_sb_cLuL::synapse0x3073d80() {
   return (neuron0x3053ad0()*-0.513042);
}

double NNfunction_sb_cLuL::synapse0x3073dc0() {
   return (neuron0x3053e10()*-0.156268);
}

double NNfunction_sb_cLuL::synapse0x3073640() {
   return (neuron0x3054150()*-0.121206);
}

double NNfunction_sb_cLuL::synapse0x3073680() {
   return (neuron0x30546b0()*0.106658);
}

double NNfunction_sb_cLuL::synapse0x3073f10() {
   return (neuron0x30549f0()*-0.503459);
}

double NNfunction_sb_cLuL::synapse0x3073f50() {
   return (neuron0x3054d30()*-0.294387);
}

double NNfunction_sb_cLuL::synapse0x3073f90() {
   return (neuron0x3055070()*-0.0612224);
}

double NNfunction_sb_cLuL::synapse0x3073fd0() {
   return (neuron0x30553b0()*-0.0191008);
}

double NNfunction_sb_cLuL::synapse0x3074010() {
   return (neuron0x30556f0()*-0.638442);
}

double NNfunction_sb_cLuL::synapse0x3074050() {
   return (neuron0x3055a30()*-0.256862);
}

double NNfunction_sb_cLuL::synapse0x30743d0() {
   return (neuron0x3050de0()*-0.306811);
}

double NNfunction_sb_cLuL::synapse0x3074410() {
   return (neuron0x3051090()*-0.177505);
}

double NNfunction_sb_cLuL::synapse0x3074450() {
   return (neuron0x30513d0()*0.137705);
}

double NNfunction_sb_cLuL::synapse0x3074490() {
   return (neuron0x3051710()*0.255922);
}

double NNfunction_sb_cLuL::synapse0x30744d0() {
   return (neuron0x3051a50()*0.204711);
}

double NNfunction_sb_cLuL::synapse0x3074510() {
   return (neuron0x3051d90()*-0.0486867);
}

double NNfunction_sb_cLuL::synapse0x3074550() {
   return (neuron0x30520d0()*0.0689091);
}

double NNfunction_sb_cLuL::synapse0x3074590() {
   return (neuron0x3052410()*0.0515278);
}

double NNfunction_sb_cLuL::synapse0x30745d0() {
   return (neuron0x3052750()*-0.508095);
}

double NNfunction_sb_cLuL::synapse0x3074610() {
   return (neuron0x3052a90()*0.148185);
}

double NNfunction_sb_cLuL::synapse0x3074650() {
   return (neuron0x3052dd0()*0.182242);
}

double NNfunction_sb_cLuL::synapse0x3074690() {
   return (neuron0x3053110()*-0.931247);
}

double NNfunction_sb_cLuL::synapse0x30746d0() {
   return (neuron0x3053450()*-0.546839);
}

double NNfunction_sb_cLuL::synapse0x3074710() {
   return (neuron0x3053790()*-0.130204);
}

double NNfunction_sb_cLuL::synapse0x3074750() {
   return (neuron0x3053ad0()*0.00472792);
}

double NNfunction_sb_cLuL::synapse0x3074790() {
   return (neuron0x3053e10()*-0.140418);
}

double NNfunction_sb_cLuL::synapse0x3074220() {
   return (neuron0x3054150()*-0.16638);
}

double NNfunction_sb_cLuL::synapse0x3074260() {
   return (neuron0x30546b0()*-0.339922);
}

double NNfunction_sb_cLuL::synapse0x30748e0() {
   return (neuron0x30549f0()*0.664543);
}

double NNfunction_sb_cLuL::synapse0x3074920() {
   return (neuron0x3054d30()*-0.17452);
}

double NNfunction_sb_cLuL::synapse0x3074960() {
   return (neuron0x3055070()*-0.0543782);
}

double NNfunction_sb_cLuL::synapse0x30749a0() {
   return (neuron0x30553b0()*-0.176565);
}

double NNfunction_sb_cLuL::synapse0x30749e0() {
   return (neuron0x30556f0()*0.208094);
}

double NNfunction_sb_cLuL::synapse0x3074a20() {
   return (neuron0x3055a30()*0.0262284);
}

double NNfunction_sb_cLuL::synapse0x3074da0() {
   return (neuron0x3050de0()*-0.706031);
}

double NNfunction_sb_cLuL::synapse0x3074de0() {
   return (neuron0x3051090()*1.01165);
}

double NNfunction_sb_cLuL::synapse0x3074e20() {
   return (neuron0x30513d0()*-0.752324);
}

double NNfunction_sb_cLuL::synapse0x3074e60() {
   return (neuron0x3051710()*-0.512432);
}

double NNfunction_sb_cLuL::synapse0x3074ea0() {
   return (neuron0x3051a50()*0.354525);
}

double NNfunction_sb_cLuL::synapse0x3074ee0() {
   return (neuron0x3051d90()*-0.216564);
}

double NNfunction_sb_cLuL::synapse0x3074f20() {
   return (neuron0x30520d0()*-0.203617);
}

double NNfunction_sb_cLuL::synapse0x3074f60() {
   return (neuron0x3052410()*-0.217959);
}

double NNfunction_sb_cLuL::synapse0x3074fa0() {
   return (neuron0x3052750()*0.111488);
}

double NNfunction_sb_cLuL::synapse0x3074fe0() {
   return (neuron0x3052a90()*-0.447285);
}

double NNfunction_sb_cLuL::synapse0x3075020() {
   return (neuron0x3052dd0()*-0.10435);
}

double NNfunction_sb_cLuL::synapse0x3075060() {
   return (neuron0x3053110()*0.814105);
}

double NNfunction_sb_cLuL::synapse0x30750a0() {
   return (neuron0x3053450()*0.101156);
}

double NNfunction_sb_cLuL::synapse0x30750e0() {
   return (neuron0x3053790()*0.0373528);
}

double NNfunction_sb_cLuL::synapse0x3075120() {
   return (neuron0x3053ad0()*0.148433);
}

double NNfunction_sb_cLuL::synapse0x3075160() {
   return (neuron0x3053e10()*0.423528);
}

double NNfunction_sb_cLuL::synapse0x3074bf0() {
   return (neuron0x3054150()*-0.13425);
}

double NNfunction_sb_cLuL::synapse0x3074c30() {
   return (neuron0x30546b0()*-0.0875521);
}

double NNfunction_sb_cLuL::synapse0x3065760() {
   return (neuron0x30549f0()*-0.164347);
}

double NNfunction_sb_cLuL::synapse0x30657a0() {
   return (neuron0x3054d30()*0.374347);
}

double NNfunction_sb_cLuL::synapse0x30657e0() {
   return (neuron0x3055070()*0.815273);
}

double NNfunction_sb_cLuL::synapse0x3065820() {
   return (neuron0x30553b0()*1.00127);
}

double NNfunction_sb_cLuL::synapse0x3065860() {
   return (neuron0x30556f0()*0.274652);
}

double NNfunction_sb_cLuL::synapse0x30658a0() {
   return (neuron0x3055a30()*-0.306238);
}

double NNfunction_sb_cLuL::synapse0x3065c20() {
   return (neuron0x3050de0()*0.591055);
}

double NNfunction_sb_cLuL::synapse0x3065c60() {
   return (neuron0x3051090()*-0.318634);
}

double NNfunction_sb_cLuL::synapse0x3065ca0() {
   return (neuron0x30513d0()*0.305247);
}

double NNfunction_sb_cLuL::synapse0x3065ce0() {
   return (neuron0x3051710()*0.328523);
}

double NNfunction_sb_cLuL::synapse0x3065d20() {
   return (neuron0x3051a50()*-0.265527);
}

double NNfunction_sb_cLuL::synapse0x3065d60() {
   return (neuron0x3051d90()*-1.13365);
}

double NNfunction_sb_cLuL::synapse0x3065da0() {
   return (neuron0x30520d0()*-0.628716);
}

double NNfunction_sb_cLuL::synapse0x3065de0() {
   return (neuron0x3052410()*-0.567737);
}

double NNfunction_sb_cLuL::synapse0x3065e20() {
   return (neuron0x3052750()*0.179625);
}

double NNfunction_sb_cLuL::synapse0x3065e60() {
   return (neuron0x3052a90()*0.593289);
}

double NNfunction_sb_cLuL::synapse0x3065ea0() {
   return (neuron0x3052dd0()*0.214922);
}

double NNfunction_sb_cLuL::synapse0x3065ee0() {
   return (neuron0x3053110()*-0.912242);
}

double NNfunction_sb_cLuL::synapse0x3065f20() {
   return (neuron0x3053450()*-0.0727333);
}

double NNfunction_sb_cLuL::synapse0x3065f60() {
   return (neuron0x3053790()*0.16718);
}

double NNfunction_sb_cLuL::synapse0x3065fa0() {
   return (neuron0x3053ad0()*0.660059);
}

double NNfunction_sb_cLuL::synapse0x3065fe0() {
   return (neuron0x3053e10()*0.183934);
}

double NNfunction_sb_cLuL::synapse0x3065a70() {
   return (neuron0x3054150()*0.40617);
}

double NNfunction_sb_cLuL::synapse0x3065ab0() {
   return (neuron0x30546b0()*0.161185);
}

double NNfunction_sb_cLuL::synapse0x3066130() {
   return (neuron0x30549f0()*-0.0366378);
}

double NNfunction_sb_cLuL::synapse0x3066170() {
   return (neuron0x3054d30()*-0.602194);
}

double NNfunction_sb_cLuL::synapse0x30661b0() {
   return (neuron0x3055070()*-0.311274);
}

double NNfunction_sb_cLuL::synapse0x30661f0() {
   return (neuron0x30553b0()*0.244707);
}

double NNfunction_sb_cLuL::synapse0x3066230() {
   return (neuron0x30556f0()*0.495292);
}

double NNfunction_sb_cLuL::synapse0x3066270() {
   return (neuron0x3055a30()*0.00823766);
}

double NNfunction_sb_cLuL::synapse0x30665f0() {
   return (neuron0x3050de0()*0.194705);
}

double NNfunction_sb_cLuL::synapse0x3066630() {
   return (neuron0x3051090()*-0.321404);
}

double NNfunction_sb_cLuL::synapse0x3066670() {
   return (neuron0x30513d0()*1.15018);
}

double NNfunction_sb_cLuL::synapse0x30666b0() {
   return (neuron0x3051710()*0.585498);
}

double NNfunction_sb_cLuL::synapse0x30666f0() {
   return (neuron0x3051a50()*-0.230437);
}

double NNfunction_sb_cLuL::synapse0x3066730() {
   return (neuron0x3051d90()*-0.404064);
}

double NNfunction_sb_cLuL::synapse0x3066770() {
   return (neuron0x30520d0()*-0.323885);
}

double NNfunction_sb_cLuL::synapse0x30667b0() {
   return (neuron0x3052410()*-0.431129);
}

double NNfunction_sb_cLuL::synapse0x30667f0() {
   return (neuron0x3052750()*-0.373321);
}

double NNfunction_sb_cLuL::synapse0x3066830() {
   return (neuron0x3052a90()*-0.0188098);
}

double NNfunction_sb_cLuL::synapse0x3066870() {
   return (neuron0x3052dd0()*0.182895);
}

double NNfunction_sb_cLuL::synapse0x30668b0() {
   return (neuron0x3053110()*-0.212901);
}

double NNfunction_sb_cLuL::synapse0x30668f0() {
   return (neuron0x3053450()*0.355566);
}

double NNfunction_sb_cLuL::synapse0x3066930() {
   return (neuron0x3053790()*0.470652);
}

double NNfunction_sb_cLuL::synapse0x3066970() {
   return (neuron0x3053ad0()*-0.491579);
}

double NNfunction_sb_cLuL::synapse0x30669b0() {
   return (neuron0x3053e10()*-0.640787);
}

double NNfunction_sb_cLuL::synapse0x3066440() {
   return (neuron0x3054150()*0.859276);
}

double NNfunction_sb_cLuL::synapse0x3066480() {
   return (neuron0x30546b0()*-0.0557137);
}

double NNfunction_sb_cLuL::synapse0x3066b00() {
   return (neuron0x30549f0()*0.801417);
}

double NNfunction_sb_cLuL::synapse0x3066b40() {
   return (neuron0x3054d30()*-0.233901);
}

double NNfunction_sb_cLuL::synapse0x3066b80() {
   return (neuron0x3055070()*-0.812678);
}

double NNfunction_sb_cLuL::synapse0x3066bc0() {
   return (neuron0x30553b0()*-0.05301);
}

double NNfunction_sb_cLuL::synapse0x3066c00() {
   return (neuron0x30556f0()*-0.178237);
}

double NNfunction_sb_cLuL::synapse0x3066c40() {
   return (neuron0x3055a30()*-0.46763);
}

double NNfunction_sb_cLuL::synapse0x3066fc0() {
   return (neuron0x3050de0()*0.583578);
}

double NNfunction_sb_cLuL::synapse0x3067000() {
   return (neuron0x3051090()*0.777127);
}

double NNfunction_sb_cLuL::synapse0x3067040() {
   return (neuron0x30513d0()*-0.230997);
}

double NNfunction_sb_cLuL::synapse0x3067080() {
   return (neuron0x3051710()*0.268085);
}

double NNfunction_sb_cLuL::synapse0x30670c0() {
   return (neuron0x3051a50()*0.227724);
}

double NNfunction_sb_cLuL::synapse0x3067100() {
   return (neuron0x3051d90()*0.0738052);
}

double NNfunction_sb_cLuL::synapse0x3067140() {
   return (neuron0x30520d0()*-0.249325);
}

double NNfunction_sb_cLuL::synapse0x3067180() {
   return (neuron0x3052410()*-0.155077);
}

double NNfunction_sb_cLuL::synapse0x30671c0() {
   return (neuron0x3052750()*-0.165414);
}

double NNfunction_sb_cLuL::synapse0x3067200() {
   return (neuron0x3052a90()*0.689747);
}

double NNfunction_sb_cLuL::synapse0x3067240() {
   return (neuron0x3052dd0()*0.353303);
}

double NNfunction_sb_cLuL::synapse0x3067280() {
   return (neuron0x3053110()*0.52591);
}

double NNfunction_sb_cLuL::synapse0x30672c0() {
   return (neuron0x3053450()*0.184754);
}

double NNfunction_sb_cLuL::synapse0x3067300() {
   return (neuron0x3053790()*0.616292);
}

double NNfunction_sb_cLuL::synapse0x3067340() {
   return (neuron0x3053ad0()*-0.729438);
}

double NNfunction_sb_cLuL::synapse0x3067380() {
   return (neuron0x3053e10()*0.0713998);
}

double NNfunction_sb_cLuL::synapse0x3066e10() {
   return (neuron0x3054150()*-0.632205);
}

double NNfunction_sb_cLuL::synapse0x3066e50() {
   return (neuron0x30546b0()*-0.832661);
}

double NNfunction_sb_cLuL::synapse0x30674d0() {
   return (neuron0x30549f0()*-0.36796);
}

double NNfunction_sb_cLuL::synapse0x3067510() {
   return (neuron0x3054d30()*0.34505);
}

double NNfunction_sb_cLuL::synapse0x3067550() {
   return (neuron0x3055070()*-0.65022);
}

double NNfunction_sb_cLuL::synapse0x3067590() {
   return (neuron0x30553b0()*-0.247564);
}

double NNfunction_sb_cLuL::synapse0x30675d0() {
   return (neuron0x30556f0()*0.161038);
}

double NNfunction_sb_cLuL::synapse0x3067610() {
   return (neuron0x3055a30()*-0.0508491);
}

double NNfunction_sb_cLuL::synapse0x30794e0() {
   return (neuron0x3050de0()*0.0521791);
}

double NNfunction_sb_cLuL::synapse0x3079520() {
   return (neuron0x3051090()*0.190499);
}

double NNfunction_sb_cLuL::synapse0x3079560() {
   return (neuron0x30513d0()*0.538411);
}

double NNfunction_sb_cLuL::synapse0x30795a0() {
   return (neuron0x3051710()*-0.559435);
}

double NNfunction_sb_cLuL::synapse0x30795e0() {
   return (neuron0x3051a50()*-0.0181884);
}

double NNfunction_sb_cLuL::synapse0x3079620() {
   return (neuron0x3051d90()*-0.870176);
}

double NNfunction_sb_cLuL::synapse0x3079660() {
   return (neuron0x30520d0()*0.221166);
}

double NNfunction_sb_cLuL::synapse0x30796a0() {
   return (neuron0x3052410()*-0.34061);
}

double NNfunction_sb_cLuL::synapse0x30796e0() {
   return (neuron0x3052750()*-0.439872);
}

double NNfunction_sb_cLuL::synapse0x3079720() {
   return (neuron0x3052a90()*0.322191);
}

double NNfunction_sb_cLuL::synapse0x3079760() {
   return (neuron0x3052dd0()*-0.858371);
}

double NNfunction_sb_cLuL::synapse0x30797a0() {
   return (neuron0x3053110()*0.40155);
}

double NNfunction_sb_cLuL::synapse0x30797e0() {
   return (neuron0x3053450()*0.595917);
}

double NNfunction_sb_cLuL::synapse0x3079820() {
   return (neuron0x3053790()*0.0441436);
}

double NNfunction_sb_cLuL::synapse0x3079860() {
   return (neuron0x3053ad0()*-0.105166);
}

double NNfunction_sb_cLuL::synapse0x30798a0() {
   return (neuron0x3053e10()*0.469309);
}

double NNfunction_sb_cLuL::synapse0x3067650() {
   return (neuron0x3054150()*-0.453636);
}

double NNfunction_sb_cLuL::synapse0x3067690() {
   return (neuron0x30546b0()*0.899893);
}

double NNfunction_sb_cLuL::synapse0x30799f0() {
   return (neuron0x30549f0()*0.438961);
}

double NNfunction_sb_cLuL::synapse0x3079a30() {
   return (neuron0x3054d30()*-0.275104);
}

double NNfunction_sb_cLuL::synapse0x3079a70() {
   return (neuron0x3055070()*0.410933);
}

double NNfunction_sb_cLuL::synapse0x3079ab0() {
   return (neuron0x30553b0()*-0.116262);
}

double NNfunction_sb_cLuL::synapse0x3079af0() {
   return (neuron0x30556f0()*-0.0687817);
}

double NNfunction_sb_cLuL::synapse0x3079b30() {
   return (neuron0x3055a30()*0.228662);
}

double NNfunction_sb_cLuL::synapse0x3079eb0() {
   return (neuron0x3050de0()*0.0464695);
}

double NNfunction_sb_cLuL::synapse0x3079ef0() {
   return (neuron0x3051090()*0.104751);
}

double NNfunction_sb_cLuL::synapse0x3079f30() {
   return (neuron0x30513d0()*0.933033);
}

double NNfunction_sb_cLuL::synapse0x3079f70() {
   return (neuron0x3051710()*-0.398253);
}

double NNfunction_sb_cLuL::synapse0x3079fb0() {
   return (neuron0x3051a50()*0.277158);
}

double NNfunction_sb_cLuL::synapse0x3079ff0() {
   return (neuron0x3051d90()*-0.0685731);
}

double NNfunction_sb_cLuL::synapse0x307a030() {
   return (neuron0x30520d0()*0.145197);
}

double NNfunction_sb_cLuL::synapse0x307a070() {
   return (neuron0x3052410()*0.264876);
}

double NNfunction_sb_cLuL::synapse0x307a0b0() {
   return (neuron0x3052750()*-0.264936);
}

double NNfunction_sb_cLuL::synapse0x307a0f0() {
   return (neuron0x3052a90()*-0.0474457);
}

double NNfunction_sb_cLuL::synapse0x307a130() {
   return (neuron0x3052dd0()*0.0682686);
}

double NNfunction_sb_cLuL::synapse0x307a170() {
   return (neuron0x3053110()*-0.31797);
}

double NNfunction_sb_cLuL::synapse0x307a1b0() {
   return (neuron0x3053450()*-0.941615);
}

double NNfunction_sb_cLuL::synapse0x307a1f0() {
   return (neuron0x3053790()*0.0776943);
}

double NNfunction_sb_cLuL::synapse0x307a230() {
   return (neuron0x3053ad0()*0.168104);
}

double NNfunction_sb_cLuL::synapse0x307a270() {
   return (neuron0x3053e10()*0.735693);
}

double NNfunction_sb_cLuL::synapse0x3079d00() {
   return (neuron0x3054150()*0.217594);
}

double NNfunction_sb_cLuL::synapse0x3079d40() {
   return (neuron0x30546b0()*0.214619);
}

double NNfunction_sb_cLuL::synapse0x307a3c0() {
   return (neuron0x30549f0()*0.51549);
}

double NNfunction_sb_cLuL::synapse0x307a400() {
   return (neuron0x3054d30()*-0.21518);
}

double NNfunction_sb_cLuL::synapse0x307a440() {
   return (neuron0x3055070()*-0.290499);
}

double NNfunction_sb_cLuL::synapse0x307a480() {
   return (neuron0x30553b0()*-0.00717454);
}

double NNfunction_sb_cLuL::synapse0x307a4c0() {
   return (neuron0x30556f0()*0.0272313);
}

double NNfunction_sb_cLuL::synapse0x307a500() {
   return (neuron0x3055a30()*-0.0307256);
}

double NNfunction_sb_cLuL::synapse0x307a880() {
   return (neuron0x3050de0()*-0.00662027);
}

double NNfunction_sb_cLuL::synapse0x307a8c0() {
   return (neuron0x3051090()*-0.0145003);
}

double NNfunction_sb_cLuL::synapse0x307a900() {
   return (neuron0x30513d0()*-0.0425946);
}

double NNfunction_sb_cLuL::synapse0x307a940() {
   return (neuron0x3051710()*7.80873);
}

double NNfunction_sb_cLuL::synapse0x307a980() {
   return (neuron0x3051a50()*-0.024938);
}

double NNfunction_sb_cLuL::synapse0x307a9c0() {
   return (neuron0x3051d90()*0.00489869);
}

double NNfunction_sb_cLuL::synapse0x307aa00() {
   return (neuron0x30520d0()*-0.0365489);
}

double NNfunction_sb_cLuL::synapse0x307aa40() {
   return (neuron0x3052410()*-0.00387866);
}

double NNfunction_sb_cLuL::synapse0x307aa80() {
   return (neuron0x3052750()*0.00917322);
}

double NNfunction_sb_cLuL::synapse0x307aac0() {
   return (neuron0x3052a90()*0.0337731);
}

double NNfunction_sb_cLuL::synapse0x307ab00() {
   return (neuron0x3052dd0()*0.0387211);
}

double NNfunction_sb_cLuL::synapse0x307ab40() {
   return (neuron0x3053110()*0.0654504);
}

double NNfunction_sb_cLuL::synapse0x307ab80() {
   return (neuron0x3053450()*0.126211);
}

double NNfunction_sb_cLuL::synapse0x307abc0() {
   return (neuron0x3053790()*0.0649174);
}

double NNfunction_sb_cLuL::synapse0x307ac00() {
   return (neuron0x3053ad0()*0.00295077);
}

double NNfunction_sb_cLuL::synapse0x307ac40() {
   return (neuron0x3053e10()*0.0126407);
}

double NNfunction_sb_cLuL::synapse0x307a6d0() {
   return (neuron0x3054150()*0.0439082);
}

double NNfunction_sb_cLuL::synapse0x307a710() {
   return (neuron0x30546b0()*-0.0120422);
}

double NNfunction_sb_cLuL::synapse0x307ad90() {
   return (neuron0x30549f0()*0.0392509);
}

double NNfunction_sb_cLuL::synapse0x307add0() {
   return (neuron0x3054d30()*0.0292325);
}

double NNfunction_sb_cLuL::synapse0x307ae10() {
   return (neuron0x3055070()*-0.0195149);
}

double NNfunction_sb_cLuL::synapse0x307ae50() {
   return (neuron0x30553b0()*0.0364847);
}

double NNfunction_sb_cLuL::synapse0x307ae90() {
   return (neuron0x30556f0()*-0.00377088);
}

double NNfunction_sb_cLuL::synapse0x307aed0() {
   return (neuron0x3055a30()*0.0428305);
}

double NNfunction_sb_cLuL::synapse0x307b250() {
   return (neuron0x3050de0()*-0.267452);
}

double NNfunction_sb_cLuL::synapse0x307b290() {
   return (neuron0x3051090()*-0.262509);
}

double NNfunction_sb_cLuL::synapse0x307b2d0() {
   return (neuron0x30513d0()*-0.476347);
}

double NNfunction_sb_cLuL::synapse0x307b310() {
   return (neuron0x3051710()*-0.0632983);
}

double NNfunction_sb_cLuL::synapse0x307b350() {
   return (neuron0x3051a50()*0.456605);
}

double NNfunction_sb_cLuL::synapse0x307b390() {
   return (neuron0x3051d90()*0.269988);
}

double NNfunction_sb_cLuL::synapse0x307b3d0() {
   return (neuron0x30520d0()*-0.256081);
}

double NNfunction_sb_cLuL::synapse0x307b410() {
   return (neuron0x3052410()*0.114651);
}

double NNfunction_sb_cLuL::synapse0x307b450() {
   return (neuron0x3052750()*0.301045);
}

double NNfunction_sb_cLuL::synapse0x307b490() {
   return (neuron0x3052a90()*0.426649);
}

double NNfunction_sb_cLuL::synapse0x307b4d0() {
   return (neuron0x3052dd0()*-0.756796);
}

double NNfunction_sb_cLuL::synapse0x307b510() {
   return (neuron0x3053110()*-0.208092);
}

double NNfunction_sb_cLuL::synapse0x307b550() {
   return (neuron0x3053450()*0.00746944);
}

double NNfunction_sb_cLuL::synapse0x307b590() {
   return (neuron0x3053790()*0.105822);
}

double NNfunction_sb_cLuL::synapse0x307b5d0() {
   return (neuron0x3053ad0()*0.487622);
}

double NNfunction_sb_cLuL::synapse0x307b610() {
   return (neuron0x3053e10()*-0.0476982);
}

double NNfunction_sb_cLuL::synapse0x307b0a0() {
   return (neuron0x3054150()*-0.0674133);
}

double NNfunction_sb_cLuL::synapse0x307b0e0() {
   return (neuron0x30546b0()*-0.384407);
}

double NNfunction_sb_cLuL::synapse0x307b760() {
   return (neuron0x30549f0()*0.0393375);
}

double NNfunction_sb_cLuL::synapse0x307b7a0() {
   return (neuron0x3054d30()*0.208874);
}

double NNfunction_sb_cLuL::synapse0x307b7e0() {
   return (neuron0x3055070()*0.514363);
}

double NNfunction_sb_cLuL::synapse0x307b820() {
   return (neuron0x30553b0()*0.0297938);
}

double NNfunction_sb_cLuL::synapse0x307b860() {
   return (neuron0x30556f0()*-0.365492);
}

double NNfunction_sb_cLuL::synapse0x307b8a0() {
   return (neuron0x3055a30()*0.123435);
}

double NNfunction_sb_cLuL::synapse0x2e1b710() {
   return (neuron0x3055ea0()*0.343793);
}

double NNfunction_sb_cLuL::synapse0x2e1b750() {
   return (neuron0x30566e0()*-0.0403248);
}

double NNfunction_sb_cLuL::synapse0x3058250() {
   return (neuron0x30571c0()*0.289138);
}

double NNfunction_sb_cLuL::synapse0x3058290() {
   return (neuron0x3056c60()*0.00155987);
}

double NNfunction_sb_cLuL::synapse0x3059d20() {
   return (neuron0x3057fa0()*0.138235);
}

double NNfunction_sb_cLuL::synapse0x3059d60() {
   return (neuron0x3059a70()*-1.65957);
}

double NNfunction_sb_cLuL::synapse0x305aaf0() {
   return (neuron0x305a840()*-0.0617159);
}

double NNfunction_sb_cLuL::synapse0x305ab30() {
   return (neuron0x305b210()*-0.0140432);
}

double NNfunction_sb_cLuL::synapse0x305b4c0() {
   return (neuron0x305bbe0()*0.433451);
}

double NNfunction_sb_cLuL::synapse0x305b500() {
   return (neuron0x305c6c0()*0.0592695);
}

double NNfunction_sb_cLuL::synapse0x305be90() {
   return (neuron0x305d090()*0.0290507);
}

double NNfunction_sb_cLuL::synapse0x305bed0() {
   return (neuron0x305a170()*1.43537);
}

double NNfunction_sb_cLuL::synapse0x305c970() {
   return (neuron0x305ec40()*0.0684517);
}

double NNfunction_sb_cLuL::synapse0x305c9b0() {
   return (neuron0x305f610()*0.00778646);
}

double NNfunction_sb_cLuL::synapse0x305d340() {
   return (neuron0x305ffe0()*-0.0354012);
}

double NNfunction_sb_cLuL::synapse0x305d380() {
   return (neuron0x30609b0()*-0.270868);
}

double NNfunction_sb_cLuL::synapse0x305a420() {
   return (neuron0x30627c0()*0.162262);
}

double NNfunction_sb_cLuL::synapse0x305a460() {
   return (neuron0x3062aa0()*-0.0973926);
}

double NNfunction_sb_cLuL::synapse0x305eef0() {
   return (neuron0x3063470()*0.0444546);
}

double NNfunction_sb_cLuL::synapse0x305ef30() {
   return (neuron0x3063e40()*-0.147585);
}

double NNfunction_sb_cLuL::synapse0x305f8c0() {
   return (neuron0x3064810()*1.0755);
}

double NNfunction_sb_cLuL::synapse0x305f900() {
   return (neuron0x30651e0()*-2.56908);
}

double NNfunction_sb_cLuL::synapse0x3060290() {
   return (neuron0x305dd30()*0.048941);
}

double NNfunction_sb_cLuL::synapse0x30602d0() {
   return (neuron0x305e700()*-0.513313);
}

double NNfunction_sb_cLuL::synapse0x3060c60() {
   return (neuron0x3067f70()*-0.0313999);
}

double NNfunction_sb_cLuL::synapse0x3060ca0() {
   return (neuron0x3068940()*0.104851);
}

double NNfunction_sb_cLuL::synapse0x3053cf0() {
   return (neuron0x3069310()*-0.00894781);
}

double NNfunction_sb_cLuL::synapse0x3053d30() {
   return (neuron0x3069ce0()*1.57329);
}

double NNfunction_sb_cLuL::synapse0x3062d50() {
   return (neuron0x306a6b0()*0.861173);
}

double NNfunction_sb_cLuL::synapse0x3062d90() {
   return (neuron0x306b080()*-0.142501);
}

double NNfunction_sb_cLuL::synapse0x3063720() {
   return (neuron0x306ba50()*0.07177);
}

double NNfunction_sb_cLuL::synapse0x3063760() {
   return (neuron0x306c420()*-0.525344);
}

double NNfunction_sb_cLuL::synapse0x30640f0() {
   return (neuron0x30624b0()*-2.04382);
}

double NNfunction_sb_cLuL::synapse0x3064130() {
   return (neuron0x306f000()*-0.00954976);
}

double NNfunction_sb_cLuL::synapse0x3064ac0() {
   return (neuron0x306f9d0()*1.51331);
}

double NNfunction_sb_cLuL::synapse0x3064b00() {
   return (neuron0x30703a0()*0.020915);
}

double NNfunction_sb_cLuL::synapse0x3065490() {
   return (neuron0x3070d70()*-0.40574);
}

double NNfunction_sb_cLuL::synapse0x30654d0() {
   return (neuron0x3071740()*-1.01509);
}

double NNfunction_sb_cLuL::synapse0x305dfe0() {
   return (neuron0x3072110()*-0.216271);
}

double NNfunction_sb_cLuL::synapse0x305e020() {
   return (neuron0x3072ae0()*2.00372);
}

double NNfunction_sb_cLuL::synapse0x3067890() {
   return (neuron0x30734b0()*0.00887529);
}

double NNfunction_sb_cLuL::synapse0x30678d0() {
   return (neuron0x3074090()*0.0298701);
}

double NNfunction_sb_cLuL::synapse0x3068220() {
   return (neuron0x3074a60()*0.0284451);
}

double NNfunction_sb_cLuL::synapse0x3068260() {
   return (neuron0x30658e0()*0.0705345);
}

double NNfunction_sb_cLuL::synapse0x3068bf0() {
   return (neuron0x30662b0()*0.06734);
}

double NNfunction_sb_cLuL::synapse0x3068c30() {
   return (neuron0x3066c80()*-0.0402234);
}

double NNfunction_sb_cLuL::synapse0x30695c0() {
   return (neuron0x30792c0()*0.02152);
}

double NNfunction_sb_cLuL::synapse0x3069600() {
   return (neuron0x3079b70()*-0.054959);
}

double NNfunction_sb_cLuL::synapse0x3069f90() {
   return (neuron0x307a540()*1.00305);
}

double NNfunction_sb_cLuL::synapse0x3069fd0() {
   return (neuron0x307af10()*8.73431e-06);
}

double NNfunction_sb_cLuL::synapse0x306c6d0() {
   return (neuron0x3055ea0()*0.0583853);
}

double NNfunction_sb_cLuL::synapse0x306c710() {
   return (neuron0x30566e0()*1.27031);
}

double NNfunction_sb_cLuL::synapse0x3061c90() {
   return (neuron0x30571c0()*3.66072);
}

double NNfunction_sb_cLuL::synapse0x3061cd0() {
   return (neuron0x3056c60()*1.30795);
}

double NNfunction_sb_cLuL::synapse0x306f2b0() {
   return (neuron0x3057fa0()*-2.39586);
}

double NNfunction_sb_cLuL::synapse0x306f2f0() {
   return (neuron0x3059a70()*-5.19779);
}

double NNfunction_sb_cLuL::synapse0x306fc80() {
   return (neuron0x305a840()*1.27082);
}

double NNfunction_sb_cLuL::synapse0x306fcc0() {
   return (neuron0x305b210()*-1.58508);
}

double NNfunction_sb_cLuL::synapse0x3070650() {
   return (neuron0x305bbe0()*1.20852);
}

double NNfunction_sb_cLuL::synapse0x3070690() {
   return (neuron0x305c6c0()*-1.62498);
}

double NNfunction_sb_cLuL::synapse0x3071020() {
   return (neuron0x305d090()*-2.18358);
}

double NNfunction_sb_cLuL::synapse0x3071060() {
   return (neuron0x305a170()*0.657218);
}

double NNfunction_sb_cLuL::synapse0x30719f0() {
   return (neuron0x305ec40()*-1.26339);
}

double NNfunction_sb_cLuL::synapse0x3071a30() {
   return (neuron0x305f610()*-1.63111);
}

double NNfunction_sb_cLuL::synapse0x30723c0() {
   return (neuron0x305ffe0()*1.44415);
}

double NNfunction_sb_cLuL::synapse0x3072400() {
   return (neuron0x30609b0()*-0.693546);
}

double NNfunction_sb_cLuL::synapse0x3072d90() {
   return (neuron0x30627c0()*3.88622);
}

double NNfunction_sb_cLuL::synapse0x3072dd0() {
   return (neuron0x3062aa0()*1.80308);
}

double NNfunction_sb_cLuL::synapse0x3073760() {
   return (neuron0x3063470()*-2.02752);
}

double NNfunction_sb_cLuL::synapse0x30737a0() {
   return (neuron0x3063e40()*1.54689);
}

double NNfunction_sb_cLuL::synapse0x3074340() {
   return (neuron0x3064810()*0.0708786);
}

double NNfunction_sb_cLuL::synapse0x3074380() {
   return (neuron0x30651e0()*-1.03992);
}

double NNfunction_sb_cLuL::synapse0x3074d10() {
   return (neuron0x305dd30()*-1.25386);
}

double NNfunction_sb_cLuL::synapse0x3074d50() {
   return (neuron0x305e700()*1.75201);
}

double NNfunction_sb_cLuL::synapse0x3065b90() {
   return (neuron0x3067f70()*1.56635);
}

double NNfunction_sb_cLuL::synapse0x3065bd0() {
   return (neuron0x3068940()*-2.45982);
}

double NNfunction_sb_cLuL::synapse0x3066560() {
   return (neuron0x3069310()*1.47298);
}

double NNfunction_sb_cLuL::synapse0x30665a0() {
   return (neuron0x3069ce0()*0.670685);
}

double NNfunction_sb_cLuL::synapse0x3066f30() {
   return (neuron0x306a6b0()*1.16913);
}

double NNfunction_sb_cLuL::synapse0x3066f70() {
   return (neuron0x306b080()*1.99025);
}

double NNfunction_sb_cLuL::synapse0x3079450() {
   return (neuron0x306ba50()*-1.11236);
}

double NNfunction_sb_cLuL::synapse0x3079490() {
   return (neuron0x306c420()*1.44946);
}

double NNfunction_sb_cLuL::synapse0x3079e20() {
   return (neuron0x30624b0()*0.710303);
}

double NNfunction_sb_cLuL::synapse0x3079e60() {
   return (neuron0x306f000()*1.56724);
}

double NNfunction_sb_cLuL::synapse0x307a7f0() {
   return (neuron0x306f9d0()*0.215277);
}

double NNfunction_sb_cLuL::synapse0x307a830() {
   return (neuron0x30703a0()*0.703938);
}

double NNfunction_sb_cLuL::synapse0x307b1c0() {
   return (neuron0x3070d70()*1.69415);
}

double NNfunction_sb_cLuL::synapse0x307b200() {
   return (neuron0x3071740()*-0.926346);
}

double NNfunction_sb_cLuL::synapse0x3056150() {
   return (neuron0x3072110()*-0.949703);
}

double NNfunction_sb_cLuL::synapse0x3056190() {
   return (neuron0x3072ae0()*1.61651);
}

double NNfunction_sb_cLuL::synapse0x306a960() {
   return (neuron0x30734b0()*-1.40647);
}

double NNfunction_sb_cLuL::synapse0x306a9a0() {
   return (neuron0x3074090()*-1.35414);
}

double NNfunction_sb_cLuL::synapse0x307b8e0() {
   return (neuron0x3074a60()*-1.78814);
}

double NNfunction_sb_cLuL::synapse0x307b920() {
   return (neuron0x30658e0()*-1.20009);
}

double NNfunction_sb_cLuL::synapse0x307b960() {
   return (neuron0x30662b0()*-1.2163);
}

double NNfunction_sb_cLuL::synapse0x307b9a0() {
   return (neuron0x3066c80()*1.59961);
}

double NNfunction_sb_cLuL::synapse0x3082850() {
   return (neuron0x30792c0()*-2.03026);
}

double NNfunction_sb_cLuL::synapse0x3082890() {
   return (neuron0x3079b70()*1.20238);
}

double NNfunction_sb_cLuL::synapse0x30828d0() {
   return (neuron0x307a540()*0.192199);
}

double NNfunction_sb_cLuL::synapse0x3082910() {
   return (neuron0x307af10()*-1.21642);
}

double NNfunction_sb_cLuL::synapse0x3082c90() {
   return (neuron0x3055ea0()*-0.666584);
}

double NNfunction_sb_cLuL::synapse0x3082cd0() {
   return (neuron0x30566e0()*-0.101096);
}

double NNfunction_sb_cLuL::synapse0x3082d10() {
   return (neuron0x30571c0()*-1.05563);
}

double NNfunction_sb_cLuL::synapse0x3082d50() {
   return (neuron0x3056c60()*-1.08817);
}

double NNfunction_sb_cLuL::synapse0x3082d90() {
   return (neuron0x3057fa0()*0.0448593);
}

double NNfunction_sb_cLuL::synapse0x3082dd0() {
   return (neuron0x3059a70()*-0.300346);
}

double NNfunction_sb_cLuL::synapse0x3082e10() {
   return (neuron0x305a840()*-0.55153);
}

double NNfunction_sb_cLuL::synapse0x3082e50() {
   return (neuron0x305b210()*-0.306504);
}

double NNfunction_sb_cLuL::synapse0x3082e90() {
   return (neuron0x305bbe0()*-0.504925);
}

double NNfunction_sb_cLuL::synapse0x3082ed0() {
   return (neuron0x305c6c0()*0.0501069);
}

double NNfunction_sb_cLuL::synapse0x3082f10() {
   return (neuron0x305d090()*-0.43279);
}

double NNfunction_sb_cLuL::synapse0x3082f50() {
   return (neuron0x305a170()*-0.0964939);
}

double NNfunction_sb_cLuL::synapse0x3082f90() {
   return (neuron0x305ec40()*-0.207592);
}

double NNfunction_sb_cLuL::synapse0x3082fd0() {
   return (neuron0x305f610()*-0.192876);
}

double NNfunction_sb_cLuL::synapse0x3083010() {
   return (neuron0x305ffe0()*-0.207945);
}

double NNfunction_sb_cLuL::synapse0x3083050() {
   return (neuron0x30609b0()*-1.10069);
}

double NNfunction_sb_cLuL::synapse0x3082ae0() {
   return (neuron0x30627c0()*-0.64963);
}

double NNfunction_sb_cLuL::synapse0x3082b20() {
   return (neuron0x3062aa0()*-0.425979);
}

double NNfunction_sb_cLuL::synapse0x30831a0() {
   return (neuron0x3063470()*-0.835463);
}

double NNfunction_sb_cLuL::synapse0x30831e0() {
   return (neuron0x3063e40()*-0.244096);
}

double NNfunction_sb_cLuL::synapse0x3083220() {
   return (neuron0x3064810()*-0.0893501);
}

double NNfunction_sb_cLuL::synapse0x3083260() {
   return (neuron0x30651e0()*-0.567978);
}

double NNfunction_sb_cLuL::synapse0x30832a0() {
   return (neuron0x305dd30()*-0.810718);
}

double NNfunction_sb_cLuL::synapse0x30832e0() {
   return (neuron0x305e700()*-1.15716);
}

double NNfunction_sb_cLuL::synapse0x3083320() {
   return (neuron0x3067f70()*-0.0312167);
}

double NNfunction_sb_cLuL::synapse0x3083360() {
   return (neuron0x3068940()*-0.272558);
}

double NNfunction_sb_cLuL::synapse0x30833a0() {
   return (neuron0x3069310()*-0.372486);
}

double NNfunction_sb_cLuL::synapse0x30833e0() {
   return (neuron0x3069ce0()*0.379606);
}

double NNfunction_sb_cLuL::synapse0x3083420() {
   return (neuron0x306a6b0()*-0.0281193);
}

double NNfunction_sb_cLuL::synapse0x3083460() {
   return (neuron0x306b080()*-1.02644);
}

double NNfunction_sb_cLuL::synapse0x30834a0() {
   return (neuron0x306ba50()*-0.548349);
}

double NNfunction_sb_cLuL::synapse0x30834e0() {
   return (neuron0x306c420()*-0.807138);
}

double NNfunction_sb_cLuL::synapse0x3083090() {
   return (neuron0x30624b0()*-0.946506);
}

double NNfunction_sb_cLuL::synapse0x30830d0() {
   return (neuron0x306f000()*-0.909281);
}

double NNfunction_sb_cLuL::synapse0x3083110() {
   return (neuron0x306f9d0()*0.027823);
}

double NNfunction_sb_cLuL::synapse0x3083150() {
   return (neuron0x30703a0()*0.030041);
}

double NNfunction_sb_cLuL::synapse0x3083730() {
   return (neuron0x3070d70()*-0.345869);
}

double NNfunction_sb_cLuL::synapse0x3083770() {
   return (neuron0x3071740()*-0.476149);
}

double NNfunction_sb_cLuL::synapse0x30837b0() {
   return (neuron0x3072110()*-0.956652);
}

double NNfunction_sb_cLuL::synapse0x30837f0() {
   return (neuron0x3072ae0()*-0.303884);
}

double NNfunction_sb_cLuL::synapse0x3083830() {
   return (neuron0x30734b0()*-0.722088);
}

double NNfunction_sb_cLuL::synapse0x3083870() {
   return (neuron0x3074090()*-0.62591);
}

double NNfunction_sb_cLuL::synapse0x30838b0() {
   return (neuron0x3074a60()*-0.410203);
}

double NNfunction_sb_cLuL::synapse0x30838f0() {
   return (neuron0x30658e0()*0.0515601);
}

double NNfunction_sb_cLuL::synapse0x3083930() {
   return (neuron0x30662b0()*0.119301);
}

double NNfunction_sb_cLuL::synapse0x3083970() {
   return (neuron0x3066c80()*-0.515718);
}

double NNfunction_sb_cLuL::synapse0x30839b0() {
   return (neuron0x30792c0()*-0.599705);
}

double NNfunction_sb_cLuL::synapse0x30839f0() {
   return (neuron0x3079b70()*-0.320829);
}

double NNfunction_sb_cLuL::synapse0x3083a30() {
   return (neuron0x307a540()*0.385299);
}

double NNfunction_sb_cLuL::synapse0x3083a70() {
   return (neuron0x307af10()*-0.873093);
}

double NNfunction_sb_cLuL::synapse0x3083df0() {
   return (neuron0x3055ea0()*-1.1556);
}

double NNfunction_sb_cLuL::synapse0x3083e30() {
   return (neuron0x30566e0()*0.0599253);
}

double NNfunction_sb_cLuL::synapse0x3083e70() {
   return (neuron0x30571c0()*0.487144);
}

double NNfunction_sb_cLuL::synapse0x3083eb0() {
   return (neuron0x3056c60()*0.185776);
}

double NNfunction_sb_cLuL::synapse0x3083ef0() {
   return (neuron0x3057fa0()*-0.11496);
}

double NNfunction_sb_cLuL::synapse0x3083f30() {
   return (neuron0x3059a70()*-1.52447);
}

double NNfunction_sb_cLuL::synapse0x3083f70() {
   return (neuron0x305a840()*-0.175635);
}

double NNfunction_sb_cLuL::synapse0x3083fb0() {
   return (neuron0x305b210()*-0.139801);
}

double NNfunction_sb_cLuL::synapse0x3083ff0() {
   return (neuron0x305bbe0()*0.051325);
}

double NNfunction_sb_cLuL::synapse0x3084030() {
   return (neuron0x305c6c0()*-0.0437884);
}

double NNfunction_sb_cLuL::synapse0x3084070() {
   return (neuron0x305d090()*-0.30204);
}

double NNfunction_sb_cLuL::synapse0x30840b0() {
   return (neuron0x305a170()*1.36571);
}

double NNfunction_sb_cLuL::synapse0x30840f0() {
   return (neuron0x305ec40()*0.217409);
}

double NNfunction_sb_cLuL::synapse0x3084130() {
   return (neuron0x305f610()*-0.251359);
}

double NNfunction_sb_cLuL::synapse0x3084170() {
   return (neuron0x305ffe0()*0.0147261);
}

double NNfunction_sb_cLuL::synapse0x30841b0() {
   return (neuron0x30609b0()*-0.302204);
}

double NNfunction_sb_cLuL::synapse0x3083c40() {
   return (neuron0x30627c0()*1.18464);
}

double NNfunction_sb_cLuL::synapse0x3083c80() {
   return (neuron0x3062aa0()*-0.414424);
}

double NNfunction_sb_cLuL::synapse0x3084300() {
   return (neuron0x3063470()*0.0660344);
}

double NNfunction_sb_cLuL::synapse0x3084340() {
   return (neuron0x3063e40()*1.72245);
}

double NNfunction_sb_cLuL::synapse0x3084380() {
   return (neuron0x3064810()*-0.115597);
}

double NNfunction_sb_cLuL::synapse0x30843c0() {
   return (neuron0x30651e0()*-2.69244);
}

double NNfunction_sb_cLuL::synapse0x3084400() {
   return (neuron0x305dd30()*0.434495);
}

double NNfunction_sb_cLuL::synapse0x3084440() {
   return (neuron0x305e700()*0.375268);
}

double NNfunction_sb_cLuL::synapse0x3084480() {
   return (neuron0x3067f70()*-0.0155034);
}

double NNfunction_sb_cLuL::synapse0x30844c0() {
   return (neuron0x3068940()*0.749331);
}

double NNfunction_sb_cLuL::synapse0x3084500() {
   return (neuron0x3069310()*0.00720164);
}

double NNfunction_sb_cLuL::synapse0x3084540() {
   return (neuron0x3069ce0()*0.916689);
}

double NNfunction_sb_cLuL::synapse0x3084580() {
   return (neuron0x306a6b0()*2.38229);
}

double NNfunction_sb_cLuL::synapse0x30845c0() {
   return (neuron0x306b080()*-1.39584);
}

double NNfunction_sb_cLuL::synapse0x3084600() {
   return (neuron0x306ba50()*0.989042);
}

double NNfunction_sb_cLuL::synapse0x3084640() {
   return (neuron0x306c420()*1.0664);
}

double NNfunction_sb_cLuL::synapse0x30841f0() {
   return (neuron0x30624b0()*-1.61757);
}

double NNfunction_sb_cLuL::synapse0x3084230() {
   return (neuron0x306f000()*-0.000923116);
}

double NNfunction_sb_cLuL::synapse0x3084270() {
   return (neuron0x306f9d0()*-1.96677);
}

double NNfunction_sb_cLuL::synapse0x30842b0() {
   return (neuron0x30703a0()*-0.0829499);
}

double NNfunction_sb_cLuL::synapse0x3084890() {
   return (neuron0x3070d70()*0.81409);
}

double NNfunction_sb_cLuL::synapse0x30848d0() {
   return (neuron0x3071740()*-0.475748);
}

double NNfunction_sb_cLuL::synapse0x3084910() {
   return (neuron0x3072110()*-1.4267);
}

double NNfunction_sb_cLuL::synapse0x3084950() {
   return (neuron0x3072ae0()*5.17112);
}

double NNfunction_sb_cLuL::synapse0x3084990() {
   return (neuron0x30734b0()*-0.110922);
}

double NNfunction_sb_cLuL::synapse0x30849d0() {
   return (neuron0x3074090()*-0.0473648);
}

double NNfunction_sb_cLuL::synapse0x3084a10() {
   return (neuron0x3074a60()*0.0268488);
}

double NNfunction_sb_cLuL::synapse0x3084a50() {
   return (neuron0x30658e0()*0.0153461);
}

double NNfunction_sb_cLuL::synapse0x3084a90() {
   return (neuron0x30662b0()*0.0517678);
}

double NNfunction_sb_cLuL::synapse0x3084ad0() {
   return (neuron0x3066c80()*-0.0267921);
}

double NNfunction_sb_cLuL::synapse0x3084b10() {
   return (neuron0x30792c0()*0.0190651);
}

double NNfunction_sb_cLuL::synapse0x3084b50() {
   return (neuron0x3079b70()*0.250023);
}

double NNfunction_sb_cLuL::synapse0x3084b90() {
   return (neuron0x307a540()*4.13025);
}

double NNfunction_sb_cLuL::synapse0x3084bd0() {
   return (neuron0x307af10()*0.317628);
}

double NNfunction_sb_cLuL::synapse0x3084f50() {
   return (neuron0x3055ea0()*0.712561);
}

double NNfunction_sb_cLuL::synapse0x3084f90() {
   return (neuron0x30566e0()*0.00156794);
}

double NNfunction_sb_cLuL::synapse0x3084fd0() {
   return (neuron0x30571c0()*0.191831);
}

double NNfunction_sb_cLuL::synapse0x3085010() {
   return (neuron0x3056c60()*0.0291953);
}

double NNfunction_sb_cLuL::synapse0x3085050() {
   return (neuron0x3057fa0()*0.0347523);
}

double NNfunction_sb_cLuL::synapse0x3085090() {
   return (neuron0x3059a70()*0.680402);
}

double NNfunction_sb_cLuL::synapse0x30850d0() {
   return (neuron0x305a840()*-0.0159484);
}

double NNfunction_sb_cLuL::synapse0x3085110() {
   return (neuron0x305b210()*-0.050633);
}

double NNfunction_sb_cLuL::synapse0x3085150() {
   return (neuron0x305bbe0()*-0.542101);
}

double NNfunction_sb_cLuL::synapse0x3085190() {
   return (neuron0x305c6c0()*-0.0162131);
}

double NNfunction_sb_cLuL::synapse0x30851d0() {
   return (neuron0x305d090()*-0.0259968);
}

double NNfunction_sb_cLuL::synapse0x3085210() {
   return (neuron0x305a170()*-0.500237);
}

double NNfunction_sb_cLuL::synapse0x3085250() {
   return (neuron0x305ec40()*-0.000348469);
}

double NNfunction_sb_cLuL::synapse0x3085290() {
   return (neuron0x305f610()*-0.0461912);
}

double NNfunction_sb_cLuL::synapse0x30852d0() {
   return (neuron0x305ffe0()*0.0093603);
}

double NNfunction_sb_cLuL::synapse0x3085310() {
   return (neuron0x30609b0()*-0.0861364);
}

double NNfunction_sb_cLuL::synapse0x3084da0() {
   return (neuron0x30627c0()*0.00646191);
}

double NNfunction_sb_cLuL::synapse0x3084de0() {
   return (neuron0x3062aa0()*-0.0345226);
}

double NNfunction_sb_cLuL::synapse0x3085460() {
   return (neuron0x3063470()*-0.0307469);
}

double NNfunction_sb_cLuL::synapse0x30854a0() {
   return (neuron0x3063e40()*-0.431857);
}

double NNfunction_sb_cLuL::synapse0x30854e0() {
   return (neuron0x3064810()*-1.90551);
}

double NNfunction_sb_cLuL::synapse0x3085520() {
   return (neuron0x30651e0()*1.00644);
}

double NNfunction_sb_cLuL::synapse0x3085560() {
   return (neuron0x305dd30()*0.0191938);
}

double NNfunction_sb_cLuL::synapse0x30855a0() {
   return (neuron0x305e700()*-0.376917);
}

double NNfunction_sb_cLuL::synapse0x30855e0() {
   return (neuron0x3067f70()*0.00847744);
}

double NNfunction_sb_cLuL::synapse0x3085620() {
   return (neuron0x3068940()*0.0549755);
}

double NNfunction_sb_cLuL::synapse0x3085660() {
   return (neuron0x3069310()*0.0161379);
}

double NNfunction_sb_cLuL::synapse0x30856a0() {
   return (neuron0x3069ce0()*-0.957502);
}

double NNfunction_sb_cLuL::synapse0x30856e0() {
   return (neuron0x306a6b0()*-0.614059);
}

double NNfunction_sb_cLuL::synapse0x3085720() {
   return (neuron0x306b080()*-0.0963573);
}

double NNfunction_sb_cLuL::synapse0x3085760() {
   return (neuron0x306ba50()*0.0371422);
}

double NNfunction_sb_cLuL::synapse0x30857a0() {
   return (neuron0x306c420()*-0.850555);
}

double NNfunction_sb_cLuL::synapse0x3085350() {
   return (neuron0x30624b0()*0.364056);
}

double NNfunction_sb_cLuL::synapse0x3085390() {
   return (neuron0x306f000()*-0.0269284);
}

double NNfunction_sb_cLuL::synapse0x30853d0() {
   return (neuron0x306f9d0()*-0.0148189);
}

double NNfunction_sb_cLuL::synapse0x3085410() {
   return (neuron0x30703a0()*0.0025862);
}

double NNfunction_sb_cLuL::synapse0x30859f0() {
   return (neuron0x3070d70()*-0.974117);
}

double NNfunction_sb_cLuL::synapse0x3085a30() {
   return (neuron0x3071740()*1.30394);
}

double NNfunction_sb_cLuL::synapse0x3085a70() {
   return (neuron0x3072110()*0.368621);
}

double NNfunction_sb_cLuL::synapse0x3085ab0() {
   return (neuron0x3072ae0()*-0.37954);
}

double NNfunction_sb_cLuL::synapse0x3085af0() {
   return (neuron0x30734b0()*-0.0312366);
}

double NNfunction_sb_cLuL::synapse0x3085b30() {
   return (neuron0x3074090()*0.0193845);
}

double NNfunction_sb_cLuL::synapse0x3085b70() {
   return (neuron0x3074a60()*-0.0313905);
}

double NNfunction_sb_cLuL::synapse0x3085bb0() {
   return (neuron0x30658e0()*0.0220632);
}

double NNfunction_sb_cLuL::synapse0x3085bf0() {
   return (neuron0x30662b0()*0.0173761);
}

double NNfunction_sb_cLuL::synapse0x3085c30() {
   return (neuron0x3066c80()*0.0170879);
}

double NNfunction_sb_cLuL::synapse0x3085c70() {
   return (neuron0x30792c0()*-0.0407279);
}

double NNfunction_sb_cLuL::synapse0x3085cb0() {
   return (neuron0x3079b70()*-0.073152);
}

double NNfunction_sb_cLuL::synapse0x3085cf0() {
   return (neuron0x307a540()*-0.122465);
}

double NNfunction_sb_cLuL::synapse0x3085d30() {
   return (neuron0x307af10()*0.00340853);
}

double NNfunction_sb_cLuL::synapse0x3085f90() {
   return (neuron0x3082110()*-4.73515);
}

double NNfunction_sb_cLuL::synapse0x3085fd0() {
   return (neuron0x30824b0()*-6.77278);
}

double NNfunction_sb_cLuL::synapse0x3086010() {
   return (neuron0x3082950()*-3.10594);
}

double NNfunction_sb_cLuL::synapse0x3086050() {
   return (neuron0x3083ab0()*-4.48448);
}

double NNfunction_sb_cLuL::synapse0x3086090() {
   return (neuron0x3084c10()*5.33002);
}

