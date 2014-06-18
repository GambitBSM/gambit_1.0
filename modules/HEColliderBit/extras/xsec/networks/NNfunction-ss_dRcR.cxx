#include "NNfunction-ss_dRcR.h"
#include <cmath>

double NNfunction-ss_dRcR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.7086)/14.9865;
   input1 = (in1 - 54.0111)/731.156;
   input2 = (in2 - 359.824)/459.09;
   input3 = (in3 - 277.943)/589.717;
   input4 = (in4 - 714.802)/681.458;
   input5 = (in5 - 615.82)/650.632;
   input6 = (in6 - 620.713)/656.54;
   input7 = (in7 - 619.316)/657.419;
   input8 = (in8 - 602.581)/663.761;
   input9 = (in9 - 598.49)/654.095;
   input10 = (in10 - 607.89)/680.096;
   input11 = (in11 - 660.707)/557.361;
   input12 = (in12 - 658.827)/558.193;
   input13 = (in13 - 517.725)/349.217;
   input14 = (in14 - 659.46)/540.428;
   input15 = (in15 - 512.062)/290.531;
   input16 = (in16 - 468.526)/379.892;
   input17 = (in17 - 504.544)/288.799;
   input18 = (in18 - 660.777)/568.03;
   input19 = (in19 - 668.045)/569.631;
   input20 = (in20 - -216.349)/400.069;
   input21 = (in21 - -281.23)/858.587;
   input22 = (in22 - 1.10051)/867.247;
   input23 = (in23 - -7.23921)/495.185;
   switch(index) {
     case 0:
         return neuron0x2bf8f10();
     default:
         return 0.;
   }
}

double NNfunction-ss_dRcR::Value(int index, double* input) {
   input0 = (input[0] - 22.7086)/14.9865;
   input1 = (input[1] - 54.0111)/731.156;
   input2 = (input[2] - 359.824)/459.09;
   input3 = (input[3] - 277.943)/589.717;
   input4 = (input[4] - 714.802)/681.458;
   input5 = (input[5] - 615.82)/650.632;
   input6 = (input[6] - 620.713)/656.54;
   input7 = (input[7] - 619.316)/657.419;
   input8 = (input[8] - 602.581)/663.761;
   input9 = (input[9] - 598.49)/654.095;
   input10 = (input[10] - 607.89)/680.096;
   input11 = (input[11] - 660.707)/557.361;
   input12 = (input[12] - 658.827)/558.193;
   input13 = (input[13] - 517.725)/349.217;
   input14 = (input[14] - 659.46)/540.428;
   input15 = (input[15] - 512.062)/290.531;
   input16 = (input[16] - 468.526)/379.892;
   input17 = (input[17] - 504.544)/288.799;
   input18 = (input[18] - 660.777)/568.03;
   input19 = (input[19] - 668.045)/569.631;
   input20 = (input[20] - -216.349)/400.069;
   input21 = (input[21] - -281.23)/858.587;
   input22 = (input[22] - 1.10051)/867.247;
   input23 = (input[23] - -7.23921)/495.185;
   switch(index) {
     case 0:
         return neuron0x2bf8f10();
     default:
         return 0.;
   }
}

double NNfunction-ss_dRcR::neuron0x2bc4fd0() {
   return input0;
}

double NNfunction-ss_dRcR::neuron0x2bc5310() {
   return input1;
}

double NNfunction-ss_dRcR::neuron0x2bc5650() {
   return input2;
}

double NNfunction-ss_dRcR::neuron0x2bc5990() {
   return input3;
}

double NNfunction-ss_dRcR::neuron0x2bc5cd0() {
   return input4;
}

double NNfunction-ss_dRcR::neuron0x2bc6010() {
   return input5;
}

double NNfunction-ss_dRcR::neuron0x2bc6350() {
   return input6;
}

double NNfunction-ss_dRcR::neuron0x2bc6690() {
   return input7;
}

double NNfunction-ss_dRcR::neuron0x2bc69d0() {
   return input8;
}

double NNfunction-ss_dRcR::neuron0x2bc6d10() {
   return input9;
}

double NNfunction-ss_dRcR::neuron0x2bc7050() {
   return input10;
}

double NNfunction-ss_dRcR::neuron0x2bc7390() {
   return input11;
}

double NNfunction-ss_dRcR::neuron0x2bc76d0() {
   return input12;
}

double NNfunction-ss_dRcR::neuron0x2bc7a10() {
   return input13;
}

double NNfunction-ss_dRcR::neuron0x2bc7d50() {
   return input14;
}

double NNfunction-ss_dRcR::neuron0x2bc8090() {
   return input15;
}

double NNfunction-ss_dRcR::neuron0x2bc83d0() {
   return input16;
}

double NNfunction-ss_dRcR::neuron0x2bc8930() {
   return input17;
}

double NNfunction-ss_dRcR::neuron0x2bc8b50() {
   return input18;
}

double NNfunction-ss_dRcR::neuron0x2bc8e90() {
   return input19;
}

double NNfunction-ss_dRcR::neuron0x2bc91d0() {
   return input20;
}

double NNfunction-ss_dRcR::neuron0x2bc9510() {
   return input21;
}

double NNfunction-ss_dRcR::neuron0x2bc9850() {
   return input22;
}

double NNfunction-ss_dRcR::neuron0x2bc9b90() {
   return input23;
}

double NNfunction-ss_dRcR::input0x2bca030() {
   double input = -0.616899;
   input += synapse0x298e980();
   input += synapse0x2bc4e90();
   input += synapse0x2bc4ed0();
   input += synapse0x2bca2e0();
   input += synapse0x2bca320();
   input += synapse0x2bca360();
   input += synapse0x2bca3a0();
   input += synapse0x2bca3e0();
   input += synapse0x2bca420();
   input += synapse0x2bca460();
   input += synapse0x2bca4a0();
   input += synapse0x2bca4e0();
   input += synapse0x2bca520();
   input += synapse0x2bca560();
   input += synapse0x2bca5a0();
   input += synapse0x2bca5e0();
   input += synapse0x2bc4e00();
   input += synapse0x2bc4e40();
   input += synapse0x2980190();
   input += synapse0x29801d0();
   input += synapse0x2bca840();
   input += synapse0x2bca880();
   input += synapse0x2bca8c0();
   input += synapse0x2bca900();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bca030() {
   double input = input0x2bca030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bca940() {
   double input = 1.38283;
   input += synapse0x2bcac80();
   input += synapse0x2bcacc0();
   input += synapse0x2bcad00();
   input += synapse0x2bcad40();
   input += synapse0x2bcad80();
   input += synapse0x2bcadc0();
   input += synapse0x2bcae00();
   input += synapse0x2bcae40();
   input += synapse0x2bcae80();
   input += synapse0x2bca730();
   input += synapse0x2bca770();
   input += synapse0x2bca7b0();
   input += synapse0x2bca7f0();
   input += synapse0x2bcb0d0();
   input += synapse0x2bcb110();
   input += synapse0x2bcb150();
   input += synapse0x2bcaad0();
   input += synapse0x2bcab10();
   input += synapse0x2bcb2a0();
   input += synapse0x2bcb2e0();
   input += synapse0x2bcb320();
   input += synapse0x2bcb360();
   input += synapse0x2bcb3a0();
   input += synapse0x2bcb3e0();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bca940() {
   double input = input0x2bca940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bcb420() {
   double input = -1.68595;
   input += synapse0x2bcb760();
   input += synapse0x2bcb7a0();
   input += synapse0x2bcb7e0();
   input += synapse0x2bcb820();
   input += synapse0x2bcb860();
   input += synapse0x2bcb8a0();
   input += synapse0x2bcb8e0();
   input += synapse0x2bcb920();
   input += synapse0x2bcb960();
   input += synapse0x2bcb9a0();
   input += synapse0x2bcb9e0();
   input += synapse0x2bcba20();
   input += synapse0x2bcba60();
   input += synapse0x2bcbaa0();
   input += synapse0x2bcbae0();
   input += synapse0x2bcbb20();
   input += synapse0x2bcb5b0();
   input += synapse0x2bcb5f0();
   input += synapse0x298e090();
   input += synapse0x298e0d0();
   input += synapse0x2bb4060();
   input += synapse0x2bb40a0();
   input += synapse0x2bb40e0();
   input += synapse0x2bc4f10();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bcb420() {
   double input = input0x2bcb420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x298e7f0() {
   double input = -0.31571;
   input += synapse0x2bcb070();
   input += synapse0x2bc4f50();
   input += synapse0x2bc4f90();
   input += synapse0x2bcbc70();
   input += synapse0x2bcbcb0();
   input += synapse0x2bcbcf0();
   input += synapse0x2bcbd30();
   input += synapse0x2bcbd70();
   input += synapse0x2bcbdb0();
   input += synapse0x2bcbdf0();
   input += synapse0x2bcbe30();
   input += synapse0x2bcbe70();
   input += synapse0x2bcbeb0();
   input += synapse0x2bcbef0();
   input += synapse0x2bcbf30();
   input += synapse0x2bcbf70();
   input += synapse0x2bcaec0();
   input += synapse0x2bcaf00();
   input += synapse0x2bcc0c0();
   input += synapse0x2bcc100();
   input += synapse0x2bcc140();
   input += synapse0x2bcc180();
   input += synapse0x2bcc1c0();
   input += synapse0x2bcc200();
   return input;
}

double NNfunction-ss_dRcR::neuron0x298e7f0() {
   double input = input0x298e7f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bcc240() {
   double input = -0.623743;
   input += synapse0x2bcc580();
   input += synapse0x2bcc5c0();
   input += synapse0x2bcc600();
   input += synapse0x2bcc640();
   input += synapse0x2bcc680();
   input += synapse0x2bcc6c0();
   input += synapse0x2bcc700();
   input += synapse0x2bcc740();
   input += synapse0x2bcc780();
   input += synapse0x2bcc7c0();
   input += synapse0x2bcc800();
   input += synapse0x2bcc840();
   input += synapse0x2bcc880();
   input += synapse0x2bcc8c0();
   input += synapse0x2bcc900();
   input += synapse0x2bcc940();
   input += synapse0x2bcc3d0();
   input += synapse0x2bcc410();
   input += synapse0x2bcca90();
   input += synapse0x2bccad0();
   input += synapse0x2bccb10();
   input += synapse0x2bccb50();
   input += synapse0x2bccb90();
   input += synapse0x2bccbd0();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bcc240() {
   double input = input0x2bcc240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bccc10() {
   double input = 0.00831516;
   input += synapse0x2bccf50();
   input += synapse0x2bccf90();
   input += synapse0x2bccfd0();
   input += synapse0x2bcd010();
   input += synapse0x2bcd050();
   input += synapse0x2bcd090();
   input += synapse0x2bcd0d0();
   input += synapse0x2bcd110();
   input += synapse0x2bcd150();
   input += synapse0x298e3e0();
   input += synapse0x298e420();
   input += synapse0x298e460();
   input += synapse0x298e4a0();
   input += synapse0x298e4e0();
   input += synapse0x298e520();
   input += synapse0x298e560();
   input += synapse0x2bccda0();
   input += synapse0x2bccde0();
   input += synapse0x298e6b0();
   input += synapse0x298e6f0();
   input += synapse0x298e730();
   input += synapse0x298e770();
   input += synapse0x298e7b0();
   input += synapse0x2bcd9a0();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bccc10() {
   double input = input0x2bccc10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bcd9e0() {
   double input = -0.237866;
   input += synapse0x2bcdd20();
   input += synapse0x2bcdd60();
   input += synapse0x2bcdda0();
   input += synapse0x2bcdde0();
   input += synapse0x2bcde20();
   input += synapse0x2bcde60();
   input += synapse0x2bcdea0();
   input += synapse0x2bcdee0();
   input += synapse0x2bcdf20();
   input += synapse0x2bcdf60();
   input += synapse0x2bcdfa0();
   input += synapse0x2bcdfe0();
   input += synapse0x2bce020();
   input += synapse0x2bce060();
   input += synapse0x2bce0a0();
   input += synapse0x2bce0e0();
   input += synapse0x2bcdb70();
   input += synapse0x2bcdbb0();
   input += synapse0x2bce230();
   input += synapse0x2bce270();
   input += synapse0x2bce2b0();
   input += synapse0x2bce2f0();
   input += synapse0x2bce330();
   input += synapse0x2bce370();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bcd9e0() {
   double input = input0x2bcd9e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bce3b0() {
   double input = -0.487474;
   input += synapse0x2bce6f0();
   input += synapse0x2bce730();
   input += synapse0x2bce770();
   input += synapse0x2bce7b0();
   input += synapse0x2bce7f0();
   input += synapse0x2bce830();
   input += synapse0x2bce870();
   input += synapse0x2bce8b0();
   input += synapse0x2bce8f0();
   input += synapse0x2bce930();
   input += synapse0x2bce970();
   input += synapse0x2bce9b0();
   input += synapse0x2bce9f0();
   input += synapse0x2bcea30();
   input += synapse0x2bcea70();
   input += synapse0x2bceab0();
   input += synapse0x2bce540();
   input += synapse0x2bce580();
   input += synapse0x2bcec00();
   input += synapse0x2bcec40();
   input += synapse0x2bcec80();
   input += synapse0x2bcecc0();
   input += synapse0x2bced00();
   input += synapse0x2bced40();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bce3b0() {
   double input = input0x2bce3b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bced80() {
   double input = -1.15984;
   input += synapse0x2bc8820();
   input += synapse0x2bc8860();
   input += synapse0x2bc88a0();
   input += synapse0x2bc88e0();
   input += synapse0x2bcf2d0();
   input += synapse0x2bcf310();
   input += synapse0x2bcf350();
   input += synapse0x2bcf390();
   input += synapse0x2bcf3d0();
   input += synapse0x2bcf410();
   input += synapse0x2bcf450();
   input += synapse0x2bcf490();
   input += synapse0x2bcf4d0();
   input += synapse0x2bcf510();
   input += synapse0x2bcf550();
   input += synapse0x2bcf590();
   input += synapse0x2bcef10();
   input += synapse0x2bcef50();
   input += synapse0x2bcf6e0();
   input += synapse0x2bcf720();
   input += synapse0x2bcf760();
   input += synapse0x2bcf7a0();
   input += synapse0x2bcf7e0();
   input += synapse0x2bcf820();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bced80() {
   double input = input0x2bced80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bcf860() {
   double input = -0.342764;
   input += synapse0x2bcfba0();
   input += synapse0x2bcfbe0();
   input += synapse0x2bcfc20();
   input += synapse0x2bcfc60();
   input += synapse0x2bcfca0();
   input += synapse0x2bcfce0();
   input += synapse0x2bcfd20();
   input += synapse0x2bcfd60();
   input += synapse0x2bcfda0();
   input += synapse0x2bcfde0();
   input += synapse0x2bcfe20();
   input += synapse0x2bcfe60();
   input += synapse0x2bcfea0();
   input += synapse0x2bcfee0();
   input += synapse0x2bcff20();
   input += synapse0x2bcff60();
   input += synapse0x2bcf9f0();
   input += synapse0x2bcfa30();
   input += synapse0x2bd00b0();
   input += synapse0x2bd00f0();
   input += synapse0x2bd0130();
   input += synapse0x2bd0170();
   input += synapse0x2bd01b0();
   input += synapse0x2bd01f0();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bcf860() {
   double input = input0x2bcf860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bd0230() {
   double input = -1.10036;
   input += synapse0x2bd0570();
   input += synapse0x2bd05b0();
   input += synapse0x2bd05f0();
   input += synapse0x2bd0630();
   input += synapse0x2bd0670();
   input += synapse0x2bd06b0();
   input += synapse0x2bd06f0();
   input += synapse0x2bd0730();
   input += synapse0x2bd0770();
   input += synapse0x2bd07b0();
   input += synapse0x2bd07f0();
   input += synapse0x2bd0830();
   input += synapse0x2bd0870();
   input += synapse0x2bd08b0();
   input += synapse0x2bd08f0();
   input += synapse0x2bd0930();
   input += synapse0x2bd03c0();
   input += synapse0x2bd0400();
   input += synapse0x2bcd190();
   input += synapse0x2bcd1d0();
   input += synapse0x2bcd210();
   input += synapse0x2bcd250();
   input += synapse0x2bcd290();
   input += synapse0x2bcd2d0();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bd0230() {
   double input = input0x2bd0230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bcd310() {
   double input = 1.5774;
   input += synapse0x2bcd650();
   input += synapse0x2bcd690();
   input += synapse0x2bcd6d0();
   input += synapse0x2bcd710();
   input += synapse0x2bcd750();
   input += synapse0x2bcd790();
   input += synapse0x2bcd7d0();
   input += synapse0x2bcd810();
   input += synapse0x2bcd850();
   input += synapse0x2bcd890();
   input += synapse0x2bcd8d0();
   input += synapse0x2bcd910();
   input += synapse0x2bcd950();
   input += synapse0x2bd1a90();
   input += synapse0x2bd1ad0();
   input += synapse0x2bd1b10();
   input += synapse0x2bcd4a0();
   input += synapse0x2bcd4e0();
   input += synapse0x2bd1c60();
   input += synapse0x2bd1ca0();
   input += synapse0x2bd1ce0();
   input += synapse0x2bd1d20();
   input += synapse0x2bd1d60();
   input += synapse0x2bd1da0();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bcd310() {
   double input = input0x2bcd310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bd1de0() {
   double input = 0.840248;
   input += synapse0x2bd2120();
   input += synapse0x2bd2160();
   input += synapse0x2bd21a0();
   input += synapse0x2bd21e0();
   input += synapse0x2bd2220();
   input += synapse0x2bd2260();
   input += synapse0x2bd22a0();
   input += synapse0x2bd22e0();
   input += synapse0x2bd2320();
   input += synapse0x2bd2360();
   input += synapse0x2bd23a0();
   input += synapse0x2bd23e0();
   input += synapse0x2bd2420();
   input += synapse0x2bd2460();
   input += synapse0x2bd24a0();
   input += synapse0x2bd24e0();
   input += synapse0x2bd1f70();
   input += synapse0x2bd1fb0();
   input += synapse0x2bd2630();
   input += synapse0x2bd2670();
   input += synapse0x2bd26b0();
   input += synapse0x2bd26f0();
   input += synapse0x2bd2730();
   input += synapse0x2bd2770();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bd1de0() {
   double input = input0x2bd1de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bd27b0() {
   double input = 2.04699;
   input += synapse0x2bd2af0();
   input += synapse0x2bd2b30();
   input += synapse0x2bd2b70();
   input += synapse0x2bd2bb0();
   input += synapse0x2bd2bf0();
   input += synapse0x2bd2c30();
   input += synapse0x2bd2c70();
   input += synapse0x2bd2cb0();
   input += synapse0x2bd2cf0();
   input += synapse0x2bd2d30();
   input += synapse0x2bd2d70();
   input += synapse0x2bd2db0();
   input += synapse0x2bd2df0();
   input += synapse0x2bd2e30();
   input += synapse0x2bd2e70();
   input += synapse0x2bd2eb0();
   input += synapse0x2bd2940();
   input += synapse0x2bd2980();
   input += synapse0x2bd3000();
   input += synapse0x2bd3040();
   input += synapse0x2bd3080();
   input += synapse0x2bd30c0();
   input += synapse0x2bd3100();
   input += synapse0x2bd3140();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bd27b0() {
   double input = input0x2bd27b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bd3180() {
   double input = 0.409968;
   input += synapse0x2bd34c0();
   input += synapse0x2bd3500();
   input += synapse0x2bd3540();
   input += synapse0x2bd3580();
   input += synapse0x2bd35c0();
   input += synapse0x2bd3600();
   input += synapse0x2bd3640();
   input += synapse0x2bd3680();
   input += synapse0x2bd36c0();
   input += synapse0x2bd3700();
   input += synapse0x2bd3740();
   input += synapse0x2bd3780();
   input += synapse0x2bd37c0();
   input += synapse0x2bd3800();
   input += synapse0x2bd3840();
   input += synapse0x2bd3880();
   input += synapse0x2bd3310();
   input += synapse0x2bd3350();
   input += synapse0x2bd39d0();
   input += synapse0x2bd3a10();
   input += synapse0x2bd3a50();
   input += synapse0x2bd3a90();
   input += synapse0x2bd3ad0();
   input += synapse0x2bd3b10();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bd3180() {
   double input = input0x2bd3180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bd3b50() {
   double input = -0.153966;
   input += synapse0x2bd3e90();
   input += synapse0x2bc51f0();
   input += synapse0x2bc5230();
   input += synapse0x2bc5530();
   input += synapse0x2bc5570();
   input += synapse0x2bc5870();
   input += synapse0x2bc58b0();
   input += synapse0x2bc5bb0();
   input += synapse0x2bc5bf0();
   input += synapse0x2bc5ef0();
   input += synapse0x2bc5f30();
   input += synapse0x2bc6230();
   input += synapse0x2bc6270();
   input += synapse0x2bc6570();
   input += synapse0x2bc65b0();
   input += synapse0x2bc68b0();
   input += synapse0x2bc68f0();
   input += synapse0x2bc6bf0();
   input += synapse0x2bc6c30();
   input += synapse0x2bc6f30();
   input += synapse0x2bc6f70();
   input += synapse0x2bc7270();
   input += synapse0x2bc72b0();
   input += synapse0x2bc75b0();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bd3b50() {
   double input = input0x2bd3b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bd5960() {
   double input = 0.94292;
   input += synapse0x2bc75f0();
   input += synapse0x2bc82b0();
   input += synapse0x2bc82f0();
   input += synapse0x2bd3ce0();
   input += synapse0x2bd3d20();
   input += synapse0x2bc85f0();
   input += synapse0x2bc8630();
   input += synapse0x2980070();
   input += synapse0x29800b0();
   input += synapse0x2bc8d70();
   input += synapse0x2bc8db0();
   input += synapse0x2bc90b0();
   input += synapse0x2bc90f0();
   input += synapse0x2bc93f0();
   input += synapse0x2bc9430();
   input += synapse0x2bc9730();
   input += synapse0x2bc9770();
   input += synapse0x2bc9a70();
   input += synapse0x2bc9ab0();
   input += synapse0x2bc9db0();
   input += synapse0x2bc9df0();
   input += synapse0x2bc78f0();
   input += synapse0x2bc7930();
   input += synapse0x2bd5c00();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bd5960() {
   double input = input0x2bd5960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bd5c40() {
   double input = -0.858394;
   input += synapse0x2bd5f80();
   input += synapse0x2bd5fc0();
   input += synapse0x2bd6000();
   input += synapse0x2bd6040();
   input += synapse0x2bd6080();
   input += synapse0x2bd60c0();
   input += synapse0x2bd6100();
   input += synapse0x2bd6140();
   input += synapse0x2bd6180();
   input += synapse0x2bd61c0();
   input += synapse0x2bd6200();
   input += synapse0x2bd6240();
   input += synapse0x2bd6280();
   input += synapse0x2bd62c0();
   input += synapse0x2bd6300();
   input += synapse0x2bd6340();
   input += synapse0x2bd5dd0();
   input += synapse0x2bd5e10();
   input += synapse0x2bd6490();
   input += synapse0x2bd64d0();
   input += synapse0x2bd6510();
   input += synapse0x2bd6550();
   input += synapse0x2bd6590();
   input += synapse0x2bd65d0();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bd5c40() {
   double input = input0x2bd5c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bd6610() {
   double input = 1.47316;
   input += synapse0x2bd6950();
   input += synapse0x2bd6990();
   input += synapse0x2bd69d0();
   input += synapse0x2bd6a10();
   input += synapse0x2bd6a50();
   input += synapse0x2bd6a90();
   input += synapse0x2bd6ad0();
   input += synapse0x2bd6b10();
   input += synapse0x2bd6b50();
   input += synapse0x2bd6b90();
   input += synapse0x2bd6bd0();
   input += synapse0x2bd6c10();
   input += synapse0x2bd6c50();
   input += synapse0x2bd6c90();
   input += synapse0x2bd6cd0();
   input += synapse0x2bd6d10();
   input += synapse0x2bd67a0();
   input += synapse0x2bd67e0();
   input += synapse0x2bd6e60();
   input += synapse0x2bd6ea0();
   input += synapse0x2bd6ee0();
   input += synapse0x2bd6f20();
   input += synapse0x2bd6f60();
   input += synapse0x2bd6fa0();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bd6610() {
   double input = input0x2bd6610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bd6fe0() {
   double input = 0.737869;
   input += synapse0x2bd7320();
   input += synapse0x2bd7360();
   input += synapse0x2bd73a0();
   input += synapse0x2bd73e0();
   input += synapse0x2bd7420();
   input += synapse0x2bd7460();
   input += synapse0x2bd74a0();
   input += synapse0x2bd74e0();
   input += synapse0x2bd7520();
   input += synapse0x2bd7560();
   input += synapse0x2bd75a0();
   input += synapse0x2bd75e0();
   input += synapse0x2bd7620();
   input += synapse0x2bd7660();
   input += synapse0x2bd76a0();
   input += synapse0x2bd76e0();
   input += synapse0x2bd7170();
   input += synapse0x2bd71b0();
   input += synapse0x2bd7830();
   input += synapse0x2bd7870();
   input += synapse0x2bd78b0();
   input += synapse0x2bd78f0();
   input += synapse0x2bd7930();
   input += synapse0x2bd7970();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bd6fe0() {
   double input = input0x2bd6fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bd79b0() {
   double input = 0.86305;
   input += synapse0x2bd7cf0();
   input += synapse0x2bd7d30();
   input += synapse0x2bd7d70();
   input += synapse0x2bd7db0();
   input += synapse0x2bd7df0();
   input += synapse0x2bd7e30();
   input += synapse0x2bd7e70();
   input += synapse0x2bd7eb0();
   input += synapse0x2bd7ef0();
   input += synapse0x2bd7f30();
   input += synapse0x2bd7f70();
   input += synapse0x2bd7fb0();
   input += synapse0x2bd7ff0();
   input += synapse0x2bd8030();
   input += synapse0x2bd8070();
   input += synapse0x2bd80b0();
   input += synapse0x2bd7b40();
   input += synapse0x2bd7b80();
   input += synapse0x2bd8200();
   input += synapse0x2bd8240();
   input += synapse0x2bd8280();
   input += synapse0x2bd82c0();
   input += synapse0x2bd8300();
   input += synapse0x2bd8340();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bd79b0() {
   double input = input0x2bd79b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bd8380() {
   double input = 0.725342;
   input += synapse0x2bd86c0();
   input += synapse0x2bd8700();
   input += synapse0x2bd8740();
   input += synapse0x2bd8780();
   input += synapse0x2bd87c0();
   input += synapse0x2bd8800();
   input += synapse0x2bd8840();
   input += synapse0x2bd8880();
   input += synapse0x2bd88c0();
   input += synapse0x2bd0a80();
   input += synapse0x2bd0ac0();
   input += synapse0x2bd0b00();
   input += synapse0x2bd0b40();
   input += synapse0x2bd0b80();
   input += synapse0x2bd0bc0();
   input += synapse0x2bd0c00();
   input += synapse0x2bd8510();
   input += synapse0x2bd8550();
   input += synapse0x2bd0d50();
   input += synapse0x2bd0d90();
   input += synapse0x2bd0dd0();
   input += synapse0x2bd0e10();
   input += synapse0x2bd0e50();
   input += synapse0x2bd0e90();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bd8380() {
   double input = input0x2bd8380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bd0ed0() {
   double input = 0.426874;
   input += synapse0x2bd1210();
   input += synapse0x2bd1250();
   input += synapse0x2bd1290();
   input += synapse0x2bd12d0();
   input += synapse0x2bd1310();
   input += synapse0x2bd1350();
   input += synapse0x2bd1390();
   input += synapse0x2bd13d0();
   input += synapse0x2bd1410();
   input += synapse0x2bd1450();
   input += synapse0x2bd1490();
   input += synapse0x2bd14d0();
   input += synapse0x2bd1510();
   input += synapse0x2bd1550();
   input += synapse0x2bd1590();
   input += synapse0x2bd15d0();
   input += synapse0x2bd1060();
   input += synapse0x2bd10a0();
   input += synapse0x2bd1720();
   input += synapse0x2bd1760();
   input += synapse0x2bd17a0();
   input += synapse0x2bd17e0();
   input += synapse0x2bd1820();
   input += synapse0x2bd1860();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bd0ed0() {
   double input = input0x2bd0ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bd18a0() {
   double input = 1.41932;
   input += synapse0x2bd1a30();
   input += synapse0x2bdaac0();
   input += synapse0x2bdab00();
   input += synapse0x2bdab40();
   input += synapse0x2bdab80();
   input += synapse0x2bdabc0();
   input += synapse0x2bdac00();
   input += synapse0x2bdac40();
   input += synapse0x2bdac80();
   input += synapse0x2bdacc0();
   input += synapse0x2bdad00();
   input += synapse0x2bdad40();
   input += synapse0x2bdad80();
   input += synapse0x2bdadc0();
   input += synapse0x2bdae00();
   input += synapse0x2bdae40();
   input += synapse0x2bda910();
   input += synapse0x2bda950();
   input += synapse0x2bdaf90();
   input += synapse0x2bdafd0();
   input += synapse0x2bdb010();
   input += synapse0x2bdb050();
   input += synapse0x2bdb090();
   input += synapse0x2bdb0d0();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bd18a0() {
   double input = input0x2bd18a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bdb110() {
   double input = 0.0216236;
   input += synapse0x2bdb450();
   input += synapse0x2bdb490();
   input += synapse0x2bdb4d0();
   input += synapse0x2bdb510();
   input += synapse0x2bdb550();
   input += synapse0x2bdb590();
   input += synapse0x2bdb5d0();
   input += synapse0x2bdb610();
   input += synapse0x2bdb650();
   input += synapse0x2bdb690();
   input += synapse0x2bdb6d0();
   input += synapse0x2bdb710();
   input += synapse0x2bdb750();
   input += synapse0x2bdb790();
   input += synapse0x2bdb7d0();
   input += synapse0x2bdb810();
   input += synapse0x2bdb2a0();
   input += synapse0x2bdb2e0();
   input += synapse0x2bdb960();
   input += synapse0x2bdb9a0();
   input += synapse0x2bdb9e0();
   input += synapse0x2bdba20();
   input += synapse0x2bdba60();
   input += synapse0x2bdbaa0();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bdb110() {
   double input = input0x2bdb110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bdbae0() {
   double input = 1.31969;
   input += synapse0x2bdbe20();
   input += synapse0x2bdbe60();
   input += synapse0x2bdbea0();
   input += synapse0x2bdbee0();
   input += synapse0x2bdbf20();
   input += synapse0x2bdbf60();
   input += synapse0x2bdbfa0();
   input += synapse0x2bdbfe0();
   input += synapse0x2bdc020();
   input += synapse0x2bdc060();
   input += synapse0x2bdc0a0();
   input += synapse0x2bdc0e0();
   input += synapse0x2bdc120();
   input += synapse0x2bdc160();
   input += synapse0x2bdc1a0();
   input += synapse0x2bdc1e0();
   input += synapse0x2bdbc70();
   input += synapse0x2bdbcb0();
   input += synapse0x2bdc330();
   input += synapse0x2bdc370();
   input += synapse0x2bdc3b0();
   input += synapse0x2bdc3f0();
   input += synapse0x2bdc430();
   input += synapse0x2bdc470();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bdbae0() {
   double input = input0x2bdbae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bdc4b0() {
   double input = -1.39666;
   input += synapse0x2bdc7f0();
   input += synapse0x2bdc830();
   input += synapse0x2bdc870();
   input += synapse0x2bdc8b0();
   input += synapse0x2bdc8f0();
   input += synapse0x2bdc930();
   input += synapse0x2bdc970();
   input += synapse0x2bdc9b0();
   input += synapse0x2bdc9f0();
   input += synapse0x2bdca30();
   input += synapse0x2bdca70();
   input += synapse0x2bdcab0();
   input += synapse0x2bdcaf0();
   input += synapse0x2bdcb30();
   input += synapse0x2bdcb70();
   input += synapse0x2bdcbb0();
   input += synapse0x2bdc640();
   input += synapse0x2bdc680();
   input += synapse0x2bdcd00();
   input += synapse0x2bdcd40();
   input += synapse0x2bdcd80();
   input += synapse0x2bdcdc0();
   input += synapse0x2bdce00();
   input += synapse0x2bdce40();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bdc4b0() {
   double input = input0x2bdc4b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bdce80() {
   double input = -0.605781;
   input += synapse0x2bdd1c0();
   input += synapse0x2bdd200();
   input += synapse0x2bdd240();
   input += synapse0x2bdd280();
   input += synapse0x2bdd2c0();
   input += synapse0x2bdd300();
   input += synapse0x2bdd340();
   input += synapse0x2bdd380();
   input += synapse0x2bdd3c0();
   input += synapse0x2bdd400();
   input += synapse0x2bdd440();
   input += synapse0x2bdd480();
   input += synapse0x2bdd4c0();
   input += synapse0x2bdd500();
   input += synapse0x2bdd540();
   input += synapse0x2bdd580();
   input += synapse0x2bdd010();
   input += synapse0x2bdd050();
   input += synapse0x2bdd6d0();
   input += synapse0x2bdd710();
   input += synapse0x2bdd750();
   input += synapse0x2bdd790();
   input += synapse0x2bdd7d0();
   input += synapse0x2bdd810();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bdce80() {
   double input = input0x2bdce80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bdd850() {
   double input = -0.724248;
   input += synapse0x2bddb90();
   input += synapse0x2bddbd0();
   input += synapse0x2bddc10();
   input += synapse0x2bddc50();
   input += synapse0x2bddc90();
   input += synapse0x2bddcd0();
   input += synapse0x2bddd10();
   input += synapse0x2bddd50();
   input += synapse0x2bddd90();
   input += synapse0x2bdddd0();
   input += synapse0x2bdde10();
   input += synapse0x2bdde50();
   input += synapse0x2bdde90();
   input += synapse0x2bdded0();
   input += synapse0x2bddf10();
   input += synapse0x2bddf50();
   input += synapse0x2bdd9e0();
   input += synapse0x2bdda20();
   input += synapse0x2bde0a0();
   input += synapse0x2bde0e0();
   input += synapse0x2bde120();
   input += synapse0x2bde160();
   input += synapse0x2bde1a0();
   input += synapse0x2bde1e0();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bdd850() {
   double input = input0x2bdd850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bde220() {
   double input = -1.36537;
   input += synapse0x2bde560();
   input += synapse0x2bde5a0();
   input += synapse0x2bde5e0();
   input += synapse0x2bde620();
   input += synapse0x2bde660();
   input += synapse0x2bde6a0();
   input += synapse0x2bde6e0();
   input += synapse0x2bde720();
   input += synapse0x2bde760();
   input += synapse0x2bde7a0();
   input += synapse0x2bde7e0();
   input += synapse0x2bde820();
   input += synapse0x2bde860();
   input += synapse0x2bde8a0();
   input += synapse0x2bde8e0();
   input += synapse0x2bde920();
   input += synapse0x2bde3b0();
   input += synapse0x2bde3f0();
   input += synapse0x2bdea70();
   input += synapse0x2bdeab0();
   input += synapse0x2bdeaf0();
   input += synapse0x2bdeb30();
   input += synapse0x2bdeb70();
   input += synapse0x2bdebb0();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bde220() {
   double input = input0x2bde220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bdebf0() {
   double input = -0.957118;
   input += synapse0x2bdef30();
   input += synapse0x2bdef70();
   input += synapse0x2bdefb0();
   input += synapse0x2bdeff0();
   input += synapse0x2bdf030();
   input += synapse0x2bdf070();
   input += synapse0x2bdf0b0();
   input += synapse0x2bdf0f0();
   input += synapse0x2bdf130();
   input += synapse0x2bdf170();
   input += synapse0x2bdf1b0();
   input += synapse0x2bdf1f0();
   input += synapse0x2bdf230();
   input += synapse0x2bdf270();
   input += synapse0x2bdf2b0();
   input += synapse0x2bdf2f0();
   input += synapse0x2bded80();
   input += synapse0x2bdedc0();
   input += synapse0x2bdf440();
   input += synapse0x2bdf480();
   input += synapse0x2bdf4c0();
   input += synapse0x2bdf500();
   input += synapse0x2bdf540();
   input += synapse0x2bdf580();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bdebf0() {
   double input = input0x2bdebf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bdf5c0() {
   double input = 1.10689;
   input += synapse0x2bdf900();
   input += synapse0x2bd3ed0();
   input += synapse0x2bd3f10();
   input += synapse0x2bd3f50();
   input += synapse0x2bd41a0();
   input += synapse0x2bd41e0();
   input += synapse0x2bd4220();
   input += synapse0x2bd4470();
   input += synapse0x2bd44b0();
   input += synapse0x2bd4700();
   input += synapse0x2bd4740();
   input += synapse0x2bd4780();
   input += synapse0x2bd49d0();
   input += synapse0x2bd4a10();
   input += synapse0x2bd4c60();
   input += synapse0x2bd4ca0();
   input += synapse0x2bdf750();
   input += synapse0x2bdf790();
   input += synapse0x2bd4df0();
   input += synapse0x2bd5300();
   input += synapse0x2bd5340();
   input += synapse0x2bd5380();
   input += synapse0x2bd55d0();
   input += synapse0x2bd5610();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bdf5c0() {
   double input = input0x2bdf5c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bd5650() {
   double input = -1.09073;
   input += synapse0x2bd4ec0();
   input += synapse0x2bd4f00();
   input += synapse0x2bd4f40();
   input += synapse0x2bd4f80();
   input += synapse0x2bd5900();
   input += synapse0x2be1c50();
   input += synapse0x2be1c90();
   input += synapse0x2be1cd0();
   input += synapse0x2be1d10();
   input += synapse0x2be1d50();
   input += synapse0x2be1d90();
   input += synapse0x2be1dd0();
   input += synapse0x2be1e10();
   input += synapse0x2be1e50();
   input += synapse0x2be1e90();
   input += synapse0x2be1ed0();
   input += synapse0x2bd57e0();
   input += synapse0x2bd5820();
   input += synapse0x2be2020();
   input += synapse0x2be2060();
   input += synapse0x2be20a0();
   input += synapse0x2be20e0();
   input += synapse0x2be2120();
   input += synapse0x2be2160();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bd5650() {
   double input = input0x2bd5650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2be21a0() {
   double input = -0.670677;
   input += synapse0x2be24e0();
   input += synapse0x2be2520();
   input += synapse0x2be2560();
   input += synapse0x2be25a0();
   input += synapse0x2be25e0();
   input += synapse0x2be2620();
   input += synapse0x2be2660();
   input += synapse0x2be26a0();
   input += synapse0x2be26e0();
   input += synapse0x2be2720();
   input += synapse0x2be2760();
   input += synapse0x2be27a0();
   input += synapse0x2be27e0();
   input += synapse0x2be2820();
   input += synapse0x2be2860();
   input += synapse0x2be28a0();
   input += synapse0x2be2330();
   input += synapse0x2be2370();
   input += synapse0x2be29f0();
   input += synapse0x2be2a30();
   input += synapse0x2be2a70();
   input += synapse0x2be2ab0();
   input += synapse0x2be2af0();
   input += synapse0x2be2b30();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2be21a0() {
   double input = input0x2be21a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2be2b70() {
   double input = 0.879242;
   input += synapse0x2be2eb0();
   input += synapse0x2be2ef0();
   input += synapse0x2be2f30();
   input += synapse0x2be2f70();
   input += synapse0x2be2fb0();
   input += synapse0x2be2ff0();
   input += synapse0x2be3030();
   input += synapse0x2be3070();
   input += synapse0x2be30b0();
   input += synapse0x2be30f0();
   input += synapse0x2be3130();
   input += synapse0x2be3170();
   input += synapse0x2be31b0();
   input += synapse0x2be31f0();
   input += synapse0x2be3230();
   input += synapse0x2be3270();
   input += synapse0x2be2d00();
   input += synapse0x2be2d40();
   input += synapse0x2be33c0();
   input += synapse0x2be3400();
   input += synapse0x2be3440();
   input += synapse0x2be3480();
   input += synapse0x2be34c0();
   input += synapse0x2be3500();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2be2b70() {
   double input = input0x2be2b70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2be3540() {
   double input = 0.596451;
   input += synapse0x2be3880();
   input += synapse0x2be38c0();
   input += synapse0x2be3900();
   input += synapse0x2be3940();
   input += synapse0x2be3980();
   input += synapse0x2be39c0();
   input += synapse0x2be3a00();
   input += synapse0x2be3a40();
   input += synapse0x2be3a80();
   input += synapse0x2be3ac0();
   input += synapse0x2be3b00();
   input += synapse0x2be3b40();
   input += synapse0x2be3b80();
   input += synapse0x2be3bc0();
   input += synapse0x2be3c00();
   input += synapse0x2be3c40();
   input += synapse0x2be36d0();
   input += synapse0x2be3710();
   input += synapse0x2be3d90();
   input += synapse0x2be3dd0();
   input += synapse0x2be3e10();
   input += synapse0x2be3e50();
   input += synapse0x2be3e90();
   input += synapse0x2be3ed0();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2be3540() {
   double input = input0x2be3540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2be3f10() {
   double input = 0.966124;
   input += synapse0x2be4250();
   input += synapse0x2be4290();
   input += synapse0x2be42d0();
   input += synapse0x2be4310();
   input += synapse0x2be4350();
   input += synapse0x2be4390();
   input += synapse0x2be43d0();
   input += synapse0x2be4410();
   input += synapse0x2be4450();
   input += synapse0x2be4490();
   input += synapse0x2be44d0();
   input += synapse0x2be4510();
   input += synapse0x2be4550();
   input += synapse0x2be4590();
   input += synapse0x2be45d0();
   input += synapse0x2be4610();
   input += synapse0x2be40a0();
   input += synapse0x2be40e0();
   input += synapse0x2be4760();
   input += synapse0x2be47a0();
   input += synapse0x2be47e0();
   input += synapse0x2be4820();
   input += synapse0x2be4860();
   input += synapse0x2be48a0();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2be3f10() {
   double input = input0x2be3f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2be48e0() {
   double input = 0.288442;
   input += synapse0x2be4c20();
   input += synapse0x2be4c60();
   input += synapse0x2be4ca0();
   input += synapse0x2be4ce0();
   input += synapse0x2be4d20();
   input += synapse0x2be4d60();
   input += synapse0x2be4da0();
   input += synapse0x2be4de0();
   input += synapse0x2be4e20();
   input += synapse0x2be4e60();
   input += synapse0x2be4ea0();
   input += synapse0x2be4ee0();
   input += synapse0x2be4f20();
   input += synapse0x2be4f60();
   input += synapse0x2be4fa0();
   input += synapse0x2be4fe0();
   input += synapse0x2be4a70();
   input += synapse0x2be4ab0();
   input += synapse0x2be5130();
   input += synapse0x2be5170();
   input += synapse0x2be51b0();
   input += synapse0x2be51f0();
   input += synapse0x2be5230();
   input += synapse0x2be5270();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2be48e0() {
   double input = input0x2be48e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2be52b0() {
   double input = 0.246041;
   input += synapse0x2be55f0();
   input += synapse0x2be5630();
   input += synapse0x2be5670();
   input += synapse0x2be56b0();
   input += synapse0x2be56f0();
   input += synapse0x2be5730();
   input += synapse0x2be5770();
   input += synapse0x2be57b0();
   input += synapse0x2be57f0();
   input += synapse0x2be5830();
   input += synapse0x2be5870();
   input += synapse0x2be58b0();
   input += synapse0x2be58f0();
   input += synapse0x2be5930();
   input += synapse0x2be5970();
   input += synapse0x2be59b0();
   input += synapse0x2be5440();
   input += synapse0x2be5480();
   input += synapse0x2be5b00();
   input += synapse0x2be5b40();
   input += synapse0x2be5b80();
   input += synapse0x2be5bc0();
   input += synapse0x2be5c00();
   input += synapse0x2be5c40();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2be52b0() {
   double input = input0x2be52b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2be5c80() {
   double input = 0.242639;
   input += synapse0x2be5fc0();
   input += synapse0x2be6000();
   input += synapse0x2be6040();
   input += synapse0x2be6080();
   input += synapse0x2be60c0();
   input += synapse0x2be6100();
   input += synapse0x2be6140();
   input += synapse0x2be6180();
   input += synapse0x2be61c0();
   input += synapse0x2be6200();
   input += synapse0x2be6240();
   input += synapse0x2be6280();
   input += synapse0x2be62c0();
   input += synapse0x2be6300();
   input += synapse0x2be6340();
   input += synapse0x2be6380();
   input += synapse0x2be5e10();
   input += synapse0x2be5e50();
   input += synapse0x2be64d0();
   input += synapse0x2be6510();
   input += synapse0x2be6550();
   input += synapse0x2be6590();
   input += synapse0x2be65d0();
   input += synapse0x2be6610();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2be5c80() {
   double input = input0x2be5c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2be6650() {
   double input = -0.429007;
   input += synapse0x2bcf0c0();
   input += synapse0x2bcf100();
   input += synapse0x2bcf140();
   input += synapse0x2bcf180();
   input += synapse0x2bcf1c0();
   input += synapse0x2bcf200();
   input += synapse0x2bcf240();
   input += synapse0x2bcf280();
   input += synapse0x2be6da0();
   input += synapse0x2be6de0();
   input += synapse0x2be6e20();
   input += synapse0x2be6e60();
   input += synapse0x2be6ea0();
   input += synapse0x2be6ee0();
   input += synapse0x2be6f20();
   input += synapse0x2be6f60();
   input += synapse0x2be67e0();
   input += synapse0x2be6820();
   input += synapse0x2be70b0();
   input += synapse0x2be70f0();
   input += synapse0x2be7130();
   input += synapse0x2be7170();
   input += synapse0x2be71b0();
   input += synapse0x2be71f0();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2be6650() {
   double input = input0x2be6650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2be7230() {
   double input = -0.627821;
   input += synapse0x2be7570();
   input += synapse0x2be75b0();
   input += synapse0x2be75f0();
   input += synapse0x2be7630();
   input += synapse0x2be7670();
   input += synapse0x2be76b0();
   input += synapse0x2be76f0();
   input += synapse0x2be7730();
   input += synapse0x2be7770();
   input += synapse0x2be77b0();
   input += synapse0x2be77f0();
   input += synapse0x2be7830();
   input += synapse0x2be7870();
   input += synapse0x2be78b0();
   input += synapse0x2be78f0();
   input += synapse0x2be7930();
   input += synapse0x2be73c0();
   input += synapse0x2be7400();
   input += synapse0x2be7a80();
   input += synapse0x2be7ac0();
   input += synapse0x2be7b00();
   input += synapse0x2be7b40();
   input += synapse0x2be7b80();
   input += synapse0x2be7bc0();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2be7230() {
   double input = input0x2be7230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2be7c00() {
   double input = 2.20374;
   input += synapse0x2be7f40();
   input += synapse0x2be7f80();
   input += synapse0x2be7fc0();
   input += synapse0x2be8000();
   input += synapse0x2be8040();
   input += synapse0x2be8080();
   input += synapse0x2be80c0();
   input += synapse0x2be8100();
   input += synapse0x2be8140();
   input += synapse0x2be8180();
   input += synapse0x2be81c0();
   input += synapse0x2be8200();
   input += synapse0x2be8240();
   input += synapse0x2be8280();
   input += synapse0x2be82c0();
   input += synapse0x2be8300();
   input += synapse0x2be7d90();
   input += synapse0x2be7dd0();
   input += synapse0x2bd8900();
   input += synapse0x2bd8940();
   input += synapse0x2bd8980();
   input += synapse0x2bd89c0();
   input += synapse0x2bd8a00();
   input += synapse0x2bd8a40();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2be7c00() {
   double input = input0x2be7c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bd8a80() {
   double input = -0.530407;
   input += synapse0x2bd8dc0();
   input += synapse0x2bd8e00();
   input += synapse0x2bd8e40();
   input += synapse0x2bd8e80();
   input += synapse0x2bd8ec0();
   input += synapse0x2bd8f00();
   input += synapse0x2bd8f40();
   input += synapse0x2bd8f80();
   input += synapse0x2bd8fc0();
   input += synapse0x2bd9000();
   input += synapse0x2bd9040();
   input += synapse0x2bd9080();
   input += synapse0x2bd90c0();
   input += synapse0x2bd9100();
   input += synapse0x2bd9140();
   input += synapse0x2bd9180();
   input += synapse0x2bd8c10();
   input += synapse0x2bd8c50();
   input += synapse0x2bd92d0();
   input += synapse0x2bd9310();
   input += synapse0x2bd9350();
   input += synapse0x2bd9390();
   input += synapse0x2bd93d0();
   input += synapse0x2bd9410();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bd8a80() {
   double input = input0x2bd8a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bd9450() {
   double input = -1.03703;
   input += synapse0x2bd9790();
   input += synapse0x2bd97d0();
   input += synapse0x2bd9810();
   input += synapse0x2bd9850();
   input += synapse0x2bd9890();
   input += synapse0x2bd98d0();
   input += synapse0x2bd9910();
   input += synapse0x2bd9950();
   input += synapse0x2bd9990();
   input += synapse0x2bd99d0();
   input += synapse0x2bd9a10();
   input += synapse0x2bd9a50();
   input += synapse0x2bd9a90();
   input += synapse0x2bd9ad0();
   input += synapse0x2bd9b10();
   input += synapse0x2bd9b50();
   input += synapse0x2bd95e0();
   input += synapse0x2bd9620();
   input += synapse0x2bd9ca0();
   input += synapse0x2bd9ce0();
   input += synapse0x2bd9d20();
   input += synapse0x2bd9d60();
   input += synapse0x2bd9da0();
   input += synapse0x2bd9de0();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bd9450() {
   double input = input0x2bd9450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bd9e20() {
   double input = 5.71708;
   input += synapse0x2bda160();
   input += synapse0x2bda1a0();
   input += synapse0x2bda1e0();
   input += synapse0x2bda220();
   input += synapse0x2bda260();
   input += synapse0x2bda2a0();
   input += synapse0x2bda2e0();
   input += synapse0x2bda320();
   input += synapse0x2bda360();
   input += synapse0x2bda3a0();
   input += synapse0x2bda3e0();
   input += synapse0x2bda420();
   input += synapse0x2bda460();
   input += synapse0x2bda4a0();
   input += synapse0x2bda4e0();
   input += synapse0x2bda520();
   input += synapse0x2bd9fb0();
   input += synapse0x2bd9ff0();
   input += synapse0x2bda670();
   input += synapse0x2bda6b0();
   input += synapse0x2bda6f0();
   input += synapse0x2bda730();
   input += synapse0x2bda770();
   input += synapse0x2bda7b0();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bd9e20() {
   double input = input0x2bd9e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bec460() {
   double input = 1.00733;
   input += synapse0x2bec680();
   input += synapse0x2bec6c0();
   input += synapse0x2bec700();
   input += synapse0x2bec740();
   input += synapse0x2bec780();
   input += synapse0x2bec7c0();
   input += synapse0x2bec800();
   input += synapse0x2bec840();
   input += synapse0x2bec880();
   input += synapse0x2bec8c0();
   input += synapse0x2bec900();
   input += synapse0x2bec940();
   input += synapse0x2bec980();
   input += synapse0x2bec9c0();
   input += synapse0x2beca00();
   input += synapse0x2beca40();
   input += synapse0x2bda7f0();
   input += synapse0x2bda830();
   input += synapse0x2becb90();
   input += synapse0x2becbd0();
   input += synapse0x2becc10();
   input += synapse0x2becc50();
   input += synapse0x2becc90();
   input += synapse0x2beccd0();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bec460() {
   double input = input0x2bec460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2becd10() {
   double input = -0.0891619;
   input += synapse0x2bed050();
   input += synapse0x2bed090();
   input += synapse0x2bed0d0();
   input += synapse0x2bed110();
   input += synapse0x2bed150();
   input += synapse0x2bed190();
   input += synapse0x2bed1d0();
   input += synapse0x2bed210();
   input += synapse0x2bed250();
   input += synapse0x2bed290();
   input += synapse0x2bed2d0();
   input += synapse0x2bed310();
   input += synapse0x2bed350();
   input += synapse0x2bed390();
   input += synapse0x2bed3d0();
   input += synapse0x2bed410();
   input += synapse0x2becea0();
   input += synapse0x2becee0();
   input += synapse0x2bed560();
   input += synapse0x2bed5a0();
   input += synapse0x2bed5e0();
   input += synapse0x2bed620();
   input += synapse0x2bed660();
   input += synapse0x2bed6a0();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2becd10() {
   double input = input0x2becd10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bed6e0() {
   double input = -0.201734;
   input += synapse0x2beda20();
   input += synapse0x2beda60();
   input += synapse0x2bedaa0();
   input += synapse0x2bedae0();
   input += synapse0x2bedb20();
   input += synapse0x2bedb60();
   input += synapse0x2bedba0();
   input += synapse0x2bedbe0();
   input += synapse0x2bedc20();
   input += synapse0x2bedc60();
   input += synapse0x2bedca0();
   input += synapse0x2bedce0();
   input += synapse0x2bedd20();
   input += synapse0x2bedd60();
   input += synapse0x2bedda0();
   input += synapse0x2bedde0();
   input += synapse0x2bed870();
   input += synapse0x2bed8b0();
   input += synapse0x2bedf30();
   input += synapse0x2bedf70();
   input += synapse0x2bedfb0();
   input += synapse0x2bedff0();
   input += synapse0x2bee030();
   input += synapse0x2bee070();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bed6e0() {
   double input = input0x2bed6e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bee0b0() {
   double input = 0.726364;
   input += synapse0x2bee3f0();
   input += synapse0x2bee430();
   input += synapse0x2bee470();
   input += synapse0x2bee4b0();
   input += synapse0x2bee4f0();
   input += synapse0x2bee530();
   input += synapse0x2bee570();
   input += synapse0x2bee5b0();
   input += synapse0x2bee5f0();
   input += synapse0x2bee630();
   input += synapse0x2bee670();
   input += synapse0x2bee6b0();
   input += synapse0x2bee6f0();
   input += synapse0x2bee730();
   input += synapse0x2bee770();
   input += synapse0x2bee7b0();
   input += synapse0x2bee240();
   input += synapse0x2bee280();
   input += synapse0x2bee900();
   input += synapse0x2bee940();
   input += synapse0x2bee980();
   input += synapse0x2bee9c0();
   input += synapse0x2beea00();
   input += synapse0x2beea40();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bee0b0() {
   double input = input0x2bee0b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bf52b0() {
   double input = -0.379026;
   input += synapse0x2bcafe0();
   input += synapse0x2bcb020();
   input += synapse0x2bcc4f0();
   input += synapse0x2bcc530();
   input += synapse0x2bccec0();
   input += synapse0x2bccf00();
   input += synapse0x2bcdc90();
   input += synapse0x2bcdcd0();
   input += synapse0x2bce660();
   input += synapse0x2bce6a0();
   input += synapse0x2bcf030();
   input += synapse0x2bcf070();
   input += synapse0x2bcfb10();
   input += synapse0x2bcfb50();
   input += synapse0x2bd04e0();
   input += synapse0x2bd0520();
   input += synapse0x2bcd5c0();
   input += synapse0x2bcd600();
   input += synapse0x2bd2090();
   input += synapse0x2bd20d0();
   input += synapse0x2bd2a60();
   input += synapse0x2bd2aa0();
   input += synapse0x2bd3430();
   input += synapse0x2bd3470();
   input += synapse0x2bd3e00();
   input += synapse0x2bd3e40();
   input += synapse0x2bc7f70();
   input += synapse0x2bc7fb0();
   input += synapse0x2bd5ef0();
   input += synapse0x2bd5f30();
   input += synapse0x2bd68c0();
   input += synapse0x2bd6900();
   input += synapse0x2bd7290();
   input += synapse0x2bd72d0();
   input += synapse0x2bd7c60();
   input += synapse0x2bd7ca0();
   input += synapse0x2bd8630();
   input += synapse0x2bd8670();
   input += synapse0x2bd1180();
   input += synapse0x2bd11c0();
   input += synapse0x2bdaa30();
   input += synapse0x2bdaa70();
   input += synapse0x2bdb3c0();
   input += synapse0x2bdb400();
   input += synapse0x2bdbd90();
   input += synapse0x2bdbdd0();
   input += synapse0x2bdc760();
   input += synapse0x2bdc7a0();
   input += synapse0x2bdd130();
   input += synapse0x2bdd170();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bf52b0() {
   double input = input0x2bf52b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bf5650() {
   double input = 0.648407;
   input += synapse0x2bdf870();
   input += synapse0x2bdf8b0();
   input += synapse0x2bd4e30();
   input += synapse0x2bd4e70();
   input += synapse0x2be2450();
   input += synapse0x2be2490();
   input += synapse0x2be2e20();
   input += synapse0x2be2e60();
   input += synapse0x2be37f0();
   input += synapse0x2be3830();
   input += synapse0x2be41c0();
   input += synapse0x2be4200();
   input += synapse0x2be4b90();
   input += synapse0x2be4bd0();
   input += synapse0x2be5560();
   input += synapse0x2be55a0();
   input += synapse0x2be5f30();
   input += synapse0x2be5f70();
   input += synapse0x2be6900();
   input += synapse0x2be6940();
   input += synapse0x2be74e0();
   input += synapse0x2be7520();
   input += synapse0x2be7eb0();
   input += synapse0x2be7ef0();
   input += synapse0x2bd8d30();
   input += synapse0x2bd8d70();
   input += synapse0x2bd9700();
   input += synapse0x2bd9740();
   input += synapse0x2bda0d0();
   input += synapse0x2bda110();
   input += synapse0x2bec5f0();
   input += synapse0x2bec630();
   input += synapse0x2becfc0();
   input += synapse0x2bed000();
   input += synapse0x2bed990();
   input += synapse0x2bed9d0();
   input += synapse0x2bee360();
   input += synapse0x2bee3a0();
   input += synapse0x2bca250();
   input += synapse0x2bca290();
   input += synapse0x2bddb00();
   input += synapse0x2bddb40();
   input += synapse0x2beea80();
   input += synapse0x2beeac0();
   input += synapse0x2beeb00();
   input += synapse0x2beeb40();
   input += synapse0x2bf59f0();
   input += synapse0x2bf5a30();
   input += synapse0x2bf5a70();
   input += synapse0x2bf5ab0();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bf5650() {
   double input = input0x2bf5650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bf5af0() {
   double input = 0.893511;
   input += synapse0x2bf5e30();
   input += synapse0x2bf5e70();
   input += synapse0x2bf5eb0();
   input += synapse0x2bf5ef0();
   input += synapse0x2bf5f30();
   input += synapse0x2bf5f70();
   input += synapse0x2bf5fb0();
   input += synapse0x2bf5ff0();
   input += synapse0x2bf6030();
   input += synapse0x2bf6070();
   input += synapse0x2bf60b0();
   input += synapse0x2bf60f0();
   input += synapse0x2bf6130();
   input += synapse0x2bf6170();
   input += synapse0x2bf61b0();
   input += synapse0x2bf61f0();
   input += synapse0x2bf5c80();
   input += synapse0x2bf5cc0();
   input += synapse0x2bf6340();
   input += synapse0x2bf6380();
   input += synapse0x2bf63c0();
   input += synapse0x2bf6400();
   input += synapse0x2bf6440();
   input += synapse0x2bf6480();
   input += synapse0x2bf64c0();
   input += synapse0x2bf6500();
   input += synapse0x2bf6540();
   input += synapse0x2bf6580();
   input += synapse0x2bf65c0();
   input += synapse0x2bf6600();
   input += synapse0x2bf6640();
   input += synapse0x2bf6680();
   input += synapse0x2bf6230();
   input += synapse0x2bf6270();
   input += synapse0x2bf62b0();
   input += synapse0x2bf62f0();
   input += synapse0x2bf68d0();
   input += synapse0x2bf6910();
   input += synapse0x2bf6950();
   input += synapse0x2bf6990();
   input += synapse0x2bf69d0();
   input += synapse0x2bf6a10();
   input += synapse0x2bf6a50();
   input += synapse0x2bf6a90();
   input += synapse0x2bf6ad0();
   input += synapse0x2bf6b10();
   input += synapse0x2bf6b50();
   input += synapse0x2bf6b90();
   input += synapse0x2bf6bd0();
   input += synapse0x2bf6c10();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bf5af0() {
   double input = input0x2bf5af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bf6c50() {
   double input = 0.0405534;
   input += synapse0x2bf6f90();
   input += synapse0x2bf6fd0();
   input += synapse0x2bf7010();
   input += synapse0x2bf7050();
   input += synapse0x2bf7090();
   input += synapse0x2bf70d0();
   input += synapse0x2bf7110();
   input += synapse0x2bf7150();
   input += synapse0x2bf7190();
   input += synapse0x2bf71d0();
   input += synapse0x2bf7210();
   input += synapse0x2bf7250();
   input += synapse0x2bf7290();
   input += synapse0x2bf72d0();
   input += synapse0x2bf7310();
   input += synapse0x2bf7350();
   input += synapse0x2bf6de0();
   input += synapse0x2bf6e20();
   input += synapse0x2bf74a0();
   input += synapse0x2bf74e0();
   input += synapse0x2bf7520();
   input += synapse0x2bf7560();
   input += synapse0x2bf75a0();
   input += synapse0x2bf75e0();
   input += synapse0x2bf7620();
   input += synapse0x2bf7660();
   input += synapse0x2bf76a0();
   input += synapse0x2bf76e0();
   input += synapse0x2bf7720();
   input += synapse0x2bf7760();
   input += synapse0x2bf77a0();
   input += synapse0x2bf77e0();
   input += synapse0x2bf7390();
   input += synapse0x2bf73d0();
   input += synapse0x2bf7410();
   input += synapse0x2bf7450();
   input += synapse0x2bf7a30();
   input += synapse0x2bf7a70();
   input += synapse0x2bf7ab0();
   input += synapse0x2bf7af0();
   input += synapse0x2bf7b30();
   input += synapse0x2bf7b70();
   input += synapse0x2bf7bb0();
   input += synapse0x2bf7bf0();
   input += synapse0x2bf7c30();
   input += synapse0x2bf7c70();
   input += synapse0x2bf7cb0();
   input += synapse0x2bf7cf0();
   input += synapse0x2bf7d30();
   input += synapse0x2bf7d70();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bf6c50() {
   double input = input0x2bf6c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bf7db0() {
   double input = -0.371962;
   input += synapse0x2bf80f0();
   input += synapse0x2bf8130();
   input += synapse0x2bf8170();
   input += synapse0x2bf81b0();
   input += synapse0x2bf81f0();
   input += synapse0x2bf8230();
   input += synapse0x2bf8270();
   input += synapse0x2bf82b0();
   input += synapse0x2bf82f0();
   input += synapse0x2bf8330();
   input += synapse0x2bf8370();
   input += synapse0x2bf83b0();
   input += synapse0x2bf83f0();
   input += synapse0x2bf8430();
   input += synapse0x2bf8470();
   input += synapse0x2bf84b0();
   input += synapse0x2bf7f40();
   input += synapse0x2bf7f80();
   input += synapse0x2bf8600();
   input += synapse0x2bf8640();
   input += synapse0x2bf8680();
   input += synapse0x2bf86c0();
   input += synapse0x2bf8700();
   input += synapse0x2bf8740();
   input += synapse0x2bf8780();
   input += synapse0x2bf87c0();
   input += synapse0x2bf8800();
   input += synapse0x2bf8840();
   input += synapse0x2bf8880();
   input += synapse0x2bf88c0();
   input += synapse0x2bf8900();
   input += synapse0x2bf8940();
   input += synapse0x2bf84f0();
   input += synapse0x2bf8530();
   input += synapse0x2bf8570();
   input += synapse0x2bf85b0();
   input += synapse0x2bf8b90();
   input += synapse0x2bf8bd0();
   input += synapse0x2bf8c10();
   input += synapse0x2bf8c50();
   input += synapse0x2bf8c90();
   input += synapse0x2bf8cd0();
   input += synapse0x2bf8d10();
   input += synapse0x2bf8d50();
   input += synapse0x2bf8d90();
   input += synapse0x2bf8dd0();
   input += synapse0x2bf8e10();
   input += synapse0x2bf8e50();
   input += synapse0x2bf8e90();
   input += synapse0x2bf8ed0();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bf7db0() {
   double input = input0x2bf7db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dRcR::input0x2bf8f10() {
   double input = 1.5007;
   input += synapse0x2bc9ff0();
   input += synapse0x2bf9130();
   input += synapse0x2bf9170();
   input += synapse0x2bf91b0();
   input += synapse0x2bf91f0();
   return input;
}

double NNfunction-ss_dRcR::neuron0x2bf8f10() {
   double input = input0x2bf8f10();
   return (input * 1)+0;
}

double NNfunction-ss_dRcR::synapse0x298e980() {
   return (neuron0x2bc4fd0()*-0.0868836);
}

double NNfunction-ss_dRcR::synapse0x2bc4e90() {
   return (neuron0x2bc5310()*-0.797136);
}

double NNfunction-ss_dRcR::synapse0x2bc4ed0() {
   return (neuron0x2bc5650()*0.448442);
}

double NNfunction-ss_dRcR::synapse0x2bca2e0() {
   return (neuron0x2bc5990()*-0.972141);
}

double NNfunction-ss_dRcR::synapse0x2bca320() {
   return (neuron0x2bc5cd0()*-0.312856);
}

double NNfunction-ss_dRcR::synapse0x2bca360() {
   return (neuron0x2bc6010()*-0.0229234);
}

double NNfunction-ss_dRcR::synapse0x2bca3a0() {
   return (neuron0x2bc6350()*0.0265497);
}

double NNfunction-ss_dRcR::synapse0x2bca3e0() {
   return (neuron0x2bc6690()*-0.187103);
}

double NNfunction-ss_dRcR::synapse0x2bca420() {
   return (neuron0x2bc69d0()*0.369763);
}

double NNfunction-ss_dRcR::synapse0x2bca460() {
   return (neuron0x2bc6d10()*-0.067818);
}

double NNfunction-ss_dRcR::synapse0x2bca4a0() {
   return (neuron0x2bc7050()*0.603499);
}

double NNfunction-ss_dRcR::synapse0x2bca4e0() {
   return (neuron0x2bc7390()*0.0461468);
}

double NNfunction-ss_dRcR::synapse0x2bca520() {
   return (neuron0x2bc76d0()*0.414829);
}

double NNfunction-ss_dRcR::synapse0x2bca560() {
   return (neuron0x2bc7a10()*-0.289563);
}

double NNfunction-ss_dRcR::synapse0x2bca5a0() {
   return (neuron0x2bc7d50()*0.311769);
}

double NNfunction-ss_dRcR::synapse0x2bca5e0() {
   return (neuron0x2bc8090()*-0.428069);
}

double NNfunction-ss_dRcR::synapse0x2bc4e00() {
   return (neuron0x2bc83d0()*0.758112);
}

double NNfunction-ss_dRcR::synapse0x2bc4e40() {
   return (neuron0x2bc8930()*0.828405);
}

double NNfunction-ss_dRcR::synapse0x2980190() {
   return (neuron0x2bc8b50()*-0.0561357);
}

double NNfunction-ss_dRcR::synapse0x29801d0() {
   return (neuron0x2bc8e90()*-0.556554);
}

double NNfunction-ss_dRcR::synapse0x2bca840() {
   return (neuron0x2bc91d0()*0.131669);
}

double NNfunction-ss_dRcR::synapse0x2bca880() {
   return (neuron0x2bc9510()*0.658728);
}

double NNfunction-ss_dRcR::synapse0x2bca8c0() {
   return (neuron0x2bc9850()*-0.23016);
}

double NNfunction-ss_dRcR::synapse0x2bca900() {
   return (neuron0x2bc9b90()*-0.481699);
}

double NNfunction-ss_dRcR::synapse0x2bcac80() {
   return (neuron0x2bc4fd0()*0.0194497);
}

double NNfunction-ss_dRcR::synapse0x2bcacc0() {
   return (neuron0x2bc5310()*0.0125839);
}

double NNfunction-ss_dRcR::synapse0x2bcad00() {
   return (neuron0x2bc5650()*-0.19446);
}

double NNfunction-ss_dRcR::synapse0x2bcad40() {
   return (neuron0x2bc5990()*-0.178331);
}

double NNfunction-ss_dRcR::synapse0x2bcad80() {
   return (neuron0x2bc5cd0()*-0.0703802);
}

double NNfunction-ss_dRcR::synapse0x2bcadc0() {
   return (neuron0x2bc6010()*-0.013579);
}

double NNfunction-ss_dRcR::synapse0x2bcae00() {
   return (neuron0x2bc6350()*0.112051);
}

double NNfunction-ss_dRcR::synapse0x2bcae40() {
   return (neuron0x2bc6690()*-0.0700471);
}

double NNfunction-ss_dRcR::synapse0x2bcae80() {
   return (neuron0x2bc69d0()*-0.0687846);
}

double NNfunction-ss_dRcR::synapse0x2bca730() {
   return (neuron0x2bc6d10()*-0.014036);
}

double NNfunction-ss_dRcR::synapse0x2bca770() {
   return (neuron0x2bc7050()*-0.0119419);
}

double NNfunction-ss_dRcR::synapse0x2bca7b0() {
   return (neuron0x2bc7390()*0.0147478);
}

double NNfunction-ss_dRcR::synapse0x2bca7f0() {
   return (neuron0x2bc76d0()*-0.072115);
}

double NNfunction-ss_dRcR::synapse0x2bcb0d0() {
   return (neuron0x2bc7a10()*-0.0440832);
}

double NNfunction-ss_dRcR::synapse0x2bcb110() {
   return (neuron0x2bc7d50()*0.00412633);
}

double NNfunction-ss_dRcR::synapse0x2bcb150() {
   return (neuron0x2bc8090()*0.936537);
}

double NNfunction-ss_dRcR::synapse0x2bcaad0() {
   return (neuron0x2bc83d0()*-0.048886);
}

double NNfunction-ss_dRcR::synapse0x2bcab10() {
   return (neuron0x2bc8930()*0.989167);
}

double NNfunction-ss_dRcR::synapse0x2bcb2a0() {
   return (neuron0x2bc8b50()*0.0410119);
}

double NNfunction-ss_dRcR::synapse0x2bcb2e0() {
   return (neuron0x2bc8e90()*-0.028214);
}

double NNfunction-ss_dRcR::synapse0x2bcb320() {
   return (neuron0x2bc91d0()*0.0321895);
}

double NNfunction-ss_dRcR::synapse0x2bcb360() {
   return (neuron0x2bc9510()*-0.0536743);
}

double NNfunction-ss_dRcR::synapse0x2bcb3a0() {
   return (neuron0x2bc9850()*-0.0015553);
}

double NNfunction-ss_dRcR::synapse0x2bcb3e0() {
   return (neuron0x2bc9b90()*0.08685);
}

double NNfunction-ss_dRcR::synapse0x2bcb760() {
   return (neuron0x2bc4fd0()*0.198538);
}

double NNfunction-ss_dRcR::synapse0x2bcb7a0() {
   return (neuron0x2bc5310()*-0.421852);
}

double NNfunction-ss_dRcR::synapse0x2bcb7e0() {
   return (neuron0x2bc5650()*0.053336);
}

double NNfunction-ss_dRcR::synapse0x2bcb820() {
   return (neuron0x2bc5990()*-0.872354);
}

double NNfunction-ss_dRcR::synapse0x2bcb860() {
   return (neuron0x2bc5cd0()*0.0702214);
}

double NNfunction-ss_dRcR::synapse0x2bcb8a0() {
   return (neuron0x2bc6010()*-0.0970946);
}

double NNfunction-ss_dRcR::synapse0x2bcb8e0() {
   return (neuron0x2bc6350()*0.225406);
}

double NNfunction-ss_dRcR::synapse0x2bcb920() {
   return (neuron0x2bc6690()*-0.0829961);
}

double NNfunction-ss_dRcR::synapse0x2bcb960() {
   return (neuron0x2bc69d0()*0.0432747);
}

double NNfunction-ss_dRcR::synapse0x2bcb9a0() {
   return (neuron0x2bc6d10()*-0.186418);
}

double NNfunction-ss_dRcR::synapse0x2bcb9e0() {
   return (neuron0x2bc7050()*0.279059);
}

double NNfunction-ss_dRcR::synapse0x2bcba20() {
   return (neuron0x2bc7390()*0.0495981);
}

double NNfunction-ss_dRcR::synapse0x2bcba60() {
   return (neuron0x2bc76d0()*-0.057077);
}

double NNfunction-ss_dRcR::synapse0x2bcbaa0() {
   return (neuron0x2bc7a10()*-0.0936899);
}

double NNfunction-ss_dRcR::synapse0x2bcbae0() {
   return (neuron0x2bc7d50()*0.00432784);
}

double NNfunction-ss_dRcR::synapse0x2bcbb20() {
   return (neuron0x2bc8090()*0.186395);
}

double NNfunction-ss_dRcR::synapse0x2bcb5b0() {
   return (neuron0x2bc83d0()*-0.0264299);
}

double NNfunction-ss_dRcR::synapse0x2bcb5f0() {
   return (neuron0x2bc8930()*0.208088);
}

double NNfunction-ss_dRcR::synapse0x298e090() {
   return (neuron0x2bc8b50()*0.102278);
}

double NNfunction-ss_dRcR::synapse0x298e0d0() {
   return (neuron0x2bc8e90()*0.068254);
}

double NNfunction-ss_dRcR::synapse0x2bb4060() {
   return (neuron0x2bc91d0()*0.0181685);
}

double NNfunction-ss_dRcR::synapse0x2bb40a0() {
   return (neuron0x2bc9510()*0.0108205);
}

double NNfunction-ss_dRcR::synapse0x2bb40e0() {
   return (neuron0x2bc9850()*-0.0147087);
}

double NNfunction-ss_dRcR::synapse0x2bc4f10() {
   return (neuron0x2bc9b90()*-0.0432444);
}

double NNfunction-ss_dRcR::synapse0x2bcb070() {
   return (neuron0x2bc4fd0()*-0.144014);
}

double NNfunction-ss_dRcR::synapse0x2bc4f50() {
   return (neuron0x2bc5310()*-0.407648);
}

double NNfunction-ss_dRcR::synapse0x2bc4f90() {
   return (neuron0x2bc5650()*-0.147172);
}

double NNfunction-ss_dRcR::synapse0x2bcbc70() {
   return (neuron0x2bc5990()*-3.42853);
}

double NNfunction-ss_dRcR::synapse0x2bcbcb0() {
   return (neuron0x2bc5cd0()*-0.0674095);
}

double NNfunction-ss_dRcR::synapse0x2bcbcf0() {
   return (neuron0x2bc6010()*-0.205926);
}

double NNfunction-ss_dRcR::synapse0x2bcbd30() {
   return (neuron0x2bc6350()*-0.108116);
}

double NNfunction-ss_dRcR::synapse0x2bcbd70() {
   return (neuron0x2bc6690()*-0.0415071);
}

double NNfunction-ss_dRcR::synapse0x2bcbdb0() {
   return (neuron0x2bc69d0()*-0.0694399);
}

double NNfunction-ss_dRcR::synapse0x2bcbdf0() {
   return (neuron0x2bc6d10()*-0.0644683);
}

double NNfunction-ss_dRcR::synapse0x2bcbe30() {
   return (neuron0x2bc7050()*-0.1275);
}

double NNfunction-ss_dRcR::synapse0x2bcbe70() {
   return (neuron0x2bc7390()*0.0818528);
}

double NNfunction-ss_dRcR::synapse0x2bcbeb0() {
   return (neuron0x2bc76d0()*-0.182002);
}

double NNfunction-ss_dRcR::synapse0x2bcbef0() {
   return (neuron0x2bc7a10()*0.00721374);
}

double NNfunction-ss_dRcR::synapse0x2bcbf30() {
   return (neuron0x2bc7d50()*0.037138);
}

double NNfunction-ss_dRcR::synapse0x2bcbf70() {
   return (neuron0x2bc8090()*0.626108);
}

double NNfunction-ss_dRcR::synapse0x2bcaec0() {
   return (neuron0x2bc83d0()*0.0208991);
}

double NNfunction-ss_dRcR::synapse0x2bcaf00() {
   return (neuron0x2bc8930()*0.775193);
}

double NNfunction-ss_dRcR::synapse0x2bcc0c0() {
   return (neuron0x2bc8b50()*-0.258195);
}

double NNfunction-ss_dRcR::synapse0x2bcc100() {
   return (neuron0x2bc8e90()*-0.107741);
}

double NNfunction-ss_dRcR::synapse0x2bcc140() {
   return (neuron0x2bc91d0()*0.166925);
}

double NNfunction-ss_dRcR::synapse0x2bcc180() {
   return (neuron0x2bc9510()*0.114572);
}

double NNfunction-ss_dRcR::synapse0x2bcc1c0() {
   return (neuron0x2bc9850()*0.196435);
}

double NNfunction-ss_dRcR::synapse0x2bcc200() {
   return (neuron0x2bc9b90()*0.0174351);
}

double NNfunction-ss_dRcR::synapse0x2bcc580() {
   return (neuron0x2bc4fd0()*-0.538063);
}

double NNfunction-ss_dRcR::synapse0x2bcc5c0() {
   return (neuron0x2bc5310()*0.921709);
}

double NNfunction-ss_dRcR::synapse0x2bcc600() {
   return (neuron0x2bc5650()*0.143747);
}

double NNfunction-ss_dRcR::synapse0x2bcc640() {
   return (neuron0x2bc5990()*0.293236);
}

double NNfunction-ss_dRcR::synapse0x2bcc680() {
   return (neuron0x2bc5cd0()*0.094319);
}

double NNfunction-ss_dRcR::synapse0x2bcc6c0() {
   return (neuron0x2bc6010()*-0.879637);
}

double NNfunction-ss_dRcR::synapse0x2bcc700() {
   return (neuron0x2bc6350()*0.188862);
}

double NNfunction-ss_dRcR::synapse0x2bcc740() {
   return (neuron0x2bc6690()*0.663077);
}

double NNfunction-ss_dRcR::synapse0x2bcc780() {
   return (neuron0x2bc69d0()*-0.29453);
}

double NNfunction-ss_dRcR::synapse0x2bcc7c0() {
   return (neuron0x2bc6d10()*0.0905971);
}

double NNfunction-ss_dRcR::synapse0x2bcc800() {
   return (neuron0x2bc7050()*-0.0436407);
}

double NNfunction-ss_dRcR::synapse0x2bcc840() {
   return (neuron0x2bc7390()*0.427602);
}

double NNfunction-ss_dRcR::synapse0x2bcc880() {
   return (neuron0x2bc76d0()*0.61536);
}

double NNfunction-ss_dRcR::synapse0x2bcc8c0() {
   return (neuron0x2bc7a10()*-0.421997);
}

double NNfunction-ss_dRcR::synapse0x2bcc900() {
   return (neuron0x2bc7d50()*0.330481);
}

double NNfunction-ss_dRcR::synapse0x2bcc940() {
   return (neuron0x2bc8090()*-0.157031);
}

double NNfunction-ss_dRcR::synapse0x2bcc3d0() {
   return (neuron0x2bc83d0()*-0.514399);
}

double NNfunction-ss_dRcR::synapse0x2bcc410() {
   return (neuron0x2bc8930()*0.334118);
}

double NNfunction-ss_dRcR::synapse0x2bcca90() {
   return (neuron0x2bc8b50()*0.660422);
}

double NNfunction-ss_dRcR::synapse0x2bccad0() {
   return (neuron0x2bc8e90()*0.491114);
}

double NNfunction-ss_dRcR::synapse0x2bccb10() {
   return (neuron0x2bc91d0()*0.0896113);
}

double NNfunction-ss_dRcR::synapse0x2bccb50() {
   return (neuron0x2bc9510()*-0.0721559);
}

double NNfunction-ss_dRcR::synapse0x2bccb90() {
   return (neuron0x2bc9850()*0.457667);
}

double NNfunction-ss_dRcR::synapse0x2bccbd0() {
   return (neuron0x2bc9b90()*0.591336);
}

double NNfunction-ss_dRcR::synapse0x2bccf50() {
   return (neuron0x2bc4fd0()*0.58665);
}

double NNfunction-ss_dRcR::synapse0x2bccf90() {
   return (neuron0x2bc5310()*-0.035751);
}

double NNfunction-ss_dRcR::synapse0x2bccfd0() {
   return (neuron0x2bc5650()*-0.69021);
}

double NNfunction-ss_dRcR::synapse0x2bcd010() {
   return (neuron0x2bc5990()*-0.400181);
}

double NNfunction-ss_dRcR::synapse0x2bcd050() {
   return (neuron0x2bc5cd0()*1.03274);
}

double NNfunction-ss_dRcR::synapse0x2bcd090() {
   return (neuron0x2bc6010()*0.568454);
}

double NNfunction-ss_dRcR::synapse0x2bcd0d0() {
   return (neuron0x2bc6350()*-0.268669);
}

double NNfunction-ss_dRcR::synapse0x2bcd110() {
   return (neuron0x2bc6690()*0.482075);
}

double NNfunction-ss_dRcR::synapse0x2bcd150() {
   return (neuron0x2bc69d0()*0.292965);
}

double NNfunction-ss_dRcR::synapse0x298e3e0() {
   return (neuron0x2bc6d10()*0.477282);
}

double NNfunction-ss_dRcR::synapse0x298e420() {
   return (neuron0x2bc7050()*0.254352);
}

double NNfunction-ss_dRcR::synapse0x298e460() {
   return (neuron0x2bc7390()*0.0155495);
}

double NNfunction-ss_dRcR::synapse0x298e4a0() {
   return (neuron0x2bc76d0()*-0.140366);
}

double NNfunction-ss_dRcR::synapse0x298e4e0() {
   return (neuron0x2bc7a10()*0.0303968);
}

double NNfunction-ss_dRcR::synapse0x298e520() {
   return (neuron0x2bc7d50()*0.286605);
}

double NNfunction-ss_dRcR::synapse0x298e560() {
   return (neuron0x2bc8090()*-0.316908);
}

double NNfunction-ss_dRcR::synapse0x2bccda0() {
   return (neuron0x2bc83d0()*0.654243);
}

double NNfunction-ss_dRcR::synapse0x2bccde0() {
   return (neuron0x2bc8930()*0.811848);
}

double NNfunction-ss_dRcR::synapse0x298e6b0() {
   return (neuron0x2bc8b50()*-0.928181);
}

double NNfunction-ss_dRcR::synapse0x298e6f0() {
   return (neuron0x2bc8e90()*-0.335937);
}

double NNfunction-ss_dRcR::synapse0x298e730() {
   return (neuron0x2bc91d0()*-0.816274);
}

double NNfunction-ss_dRcR::synapse0x298e770() {
   return (neuron0x2bc9510()*-0.319624);
}

double NNfunction-ss_dRcR::synapse0x298e7b0() {
   return (neuron0x2bc9850()*0.354169);
}

double NNfunction-ss_dRcR::synapse0x2bcd9a0() {
   return (neuron0x2bc9b90()*-0.173278);
}

double NNfunction-ss_dRcR::synapse0x2bcdd20() {
   return (neuron0x2bc4fd0()*-0.355668);
}

double NNfunction-ss_dRcR::synapse0x2bcdd60() {
   return (neuron0x2bc5310()*0.11275);
}

double NNfunction-ss_dRcR::synapse0x2bcdda0() {
   return (neuron0x2bc5650()*0.0544828);
}

double NNfunction-ss_dRcR::synapse0x2bcdde0() {
   return (neuron0x2bc5990()*-0.726479);
}

double NNfunction-ss_dRcR::synapse0x2bcde20() {
   return (neuron0x2bc5cd0()*-0.194688);
}

double NNfunction-ss_dRcR::synapse0x2bcde60() {
   return (neuron0x2bc6010()*0.221242);
}

double NNfunction-ss_dRcR::synapse0x2bcdea0() {
   return (neuron0x2bc6350()*-0.256959);
}

double NNfunction-ss_dRcR::synapse0x2bcdee0() {
   return (neuron0x2bc6690()*0.535389);
}

double NNfunction-ss_dRcR::synapse0x2bcdf20() {
   return (neuron0x2bc69d0()*-0.150655);
}

double NNfunction-ss_dRcR::synapse0x2bcdf60() {
   return (neuron0x2bc6d10()*0.15919);
}

double NNfunction-ss_dRcR::synapse0x2bcdfa0() {
   return (neuron0x2bc7050()*-0.185514);
}

double NNfunction-ss_dRcR::synapse0x2bcdfe0() {
   return (neuron0x2bc7390()*-0.19214);
}

double NNfunction-ss_dRcR::synapse0x2bce020() {
   return (neuron0x2bc76d0()*0.0930705);
}

double NNfunction-ss_dRcR::synapse0x2bce060() {
   return (neuron0x2bc7a10()*0.0368529);
}

double NNfunction-ss_dRcR::synapse0x2bce0a0() {
   return (neuron0x2bc7d50()*-0.088795);
}

double NNfunction-ss_dRcR::synapse0x2bce0e0() {
   return (neuron0x2bc8090()*-0.415253);
}

double NNfunction-ss_dRcR::synapse0x2bcdb70() {
   return (neuron0x2bc83d0()*0.243264);
}

double NNfunction-ss_dRcR::synapse0x2bcdbb0() {
   return (neuron0x2bc8930()*0.175681);
}

double NNfunction-ss_dRcR::synapse0x2bce230() {
   return (neuron0x2bc8b50()*0.189342);
}

double NNfunction-ss_dRcR::synapse0x2bce270() {
   return (neuron0x2bc8e90()*-0.205367);
}

double NNfunction-ss_dRcR::synapse0x2bce2b0() {
   return (neuron0x2bc91d0()*0.232164);
}

double NNfunction-ss_dRcR::synapse0x2bce2f0() {
   return (neuron0x2bc9510()*0.173702);
}

double NNfunction-ss_dRcR::synapse0x2bce330() {
   return (neuron0x2bc9850()*-0.329544);
}

double NNfunction-ss_dRcR::synapse0x2bce370() {
   return (neuron0x2bc9b90()*-0.0144807);
}

double NNfunction-ss_dRcR::synapse0x2bce6f0() {
   return (neuron0x2bc4fd0()*-0.01445);
}

double NNfunction-ss_dRcR::synapse0x2bce730() {
   return (neuron0x2bc5310()*-0.561396);
}

double NNfunction-ss_dRcR::synapse0x2bce770() {
   return (neuron0x2bc5650()*0.745738);
}

double NNfunction-ss_dRcR::synapse0x2bce7b0() {
   return (neuron0x2bc5990()*-0.228901);
}

double NNfunction-ss_dRcR::synapse0x2bce7f0() {
   return (neuron0x2bc5cd0()*-0.244481);
}

double NNfunction-ss_dRcR::synapse0x2bce830() {
   return (neuron0x2bc6010()*0.289432);
}

double NNfunction-ss_dRcR::synapse0x2bce870() {
   return (neuron0x2bc6350()*1.36875);
}

double NNfunction-ss_dRcR::synapse0x2bce8b0() {
   return (neuron0x2bc6690()*-0.0944454);
}

double NNfunction-ss_dRcR::synapse0x2bce8f0() {
   return (neuron0x2bc69d0()*0.81024);
}

double NNfunction-ss_dRcR::synapse0x2bce930() {
   return (neuron0x2bc6d10()*0.398627);
}

double NNfunction-ss_dRcR::synapse0x2bce970() {
   return (neuron0x2bc7050()*0.267677);
}

double NNfunction-ss_dRcR::synapse0x2bce9b0() {
   return (neuron0x2bc7390()*-0.425527);
}

double NNfunction-ss_dRcR::synapse0x2bce9f0() {
   return (neuron0x2bc76d0()*0.260605);
}

double NNfunction-ss_dRcR::synapse0x2bcea30() {
   return (neuron0x2bc7a10()*1.11485);
}

double NNfunction-ss_dRcR::synapse0x2bcea70() {
   return (neuron0x2bc7d50()*-0.405929);
}

double NNfunction-ss_dRcR::synapse0x2bceab0() {
   return (neuron0x2bc8090()*-0.626536);
}

double NNfunction-ss_dRcR::synapse0x2bce540() {
   return (neuron0x2bc83d0()*-0.426006);
}

double NNfunction-ss_dRcR::synapse0x2bce580() {
   return (neuron0x2bc8930()*-0.559426);
}

double NNfunction-ss_dRcR::synapse0x2bcec00() {
   return (neuron0x2bc8b50()*0.0422129);
}

double NNfunction-ss_dRcR::synapse0x2bcec40() {
   return (neuron0x2bc8e90()*-0.486887);
}

double NNfunction-ss_dRcR::synapse0x2bcec80() {
   return (neuron0x2bc91d0()*-0.513168);
}

double NNfunction-ss_dRcR::synapse0x2bcecc0() {
   return (neuron0x2bc9510()*0.49602);
}

double NNfunction-ss_dRcR::synapse0x2bced00() {
   return (neuron0x2bc9850()*-0.380747);
}

double NNfunction-ss_dRcR::synapse0x2bced40() {
   return (neuron0x2bc9b90()*-0.157513);
}

double NNfunction-ss_dRcR::synapse0x2bc8820() {
   return (neuron0x2bc4fd0()*0.0226746);
}

double NNfunction-ss_dRcR::synapse0x2bc8860() {
   return (neuron0x2bc5310()*-0.719514);
}

double NNfunction-ss_dRcR::synapse0x2bc88a0() {
   return (neuron0x2bc5650()*-0.0317947);
}

double NNfunction-ss_dRcR::synapse0x2bc88e0() {
   return (neuron0x2bc5990()*2.29826);
}

double NNfunction-ss_dRcR::synapse0x2bcf2d0() {
   return (neuron0x2bc5cd0()*0.0352572);
}

double NNfunction-ss_dRcR::synapse0x2bcf310() {
   return (neuron0x2bc6010()*-0.0696035);
}

double NNfunction-ss_dRcR::synapse0x2bcf350() {
   return (neuron0x2bc6350()*-0.0733321);
}

double NNfunction-ss_dRcR::synapse0x2bcf390() {
   return (neuron0x2bc6690()*-0.412337);
}

double NNfunction-ss_dRcR::synapse0x2bcf3d0() {
   return (neuron0x2bc69d0()*0.881627);
}

double NNfunction-ss_dRcR::synapse0x2bcf410() {
   return (neuron0x2bc6d10()*0.373036);
}

double NNfunction-ss_dRcR::synapse0x2bcf450() {
   return (neuron0x2bc7050()*0.183425);
}

double NNfunction-ss_dRcR::synapse0x2bcf490() {
   return (neuron0x2bc7390()*-0.250441);
}

double NNfunction-ss_dRcR::synapse0x2bcf4d0() {
   return (neuron0x2bc76d0()*-0.519679);
}

double NNfunction-ss_dRcR::synapse0x2bcf510() {
   return (neuron0x2bc7a10()*0.990285);
}

double NNfunction-ss_dRcR::synapse0x2bcf550() {
   return (neuron0x2bc7d50()*0.0436528);
}

double NNfunction-ss_dRcR::synapse0x2bcf590() {
   return (neuron0x2bc8090()*0.52931);
}

double NNfunction-ss_dRcR::synapse0x2bcef10() {
   return (neuron0x2bc83d0()*0.0659613);
}

double NNfunction-ss_dRcR::synapse0x2bcef50() {
   return (neuron0x2bc8930()*-1.1925);
}

double NNfunction-ss_dRcR::synapse0x2bcf6e0() {
   return (neuron0x2bc8b50()*0.0051221);
}

double NNfunction-ss_dRcR::synapse0x2bcf720() {
   return (neuron0x2bc8e90()*0.118322);
}

double NNfunction-ss_dRcR::synapse0x2bcf760() {
   return (neuron0x2bc91d0()*0.382077);
}

double NNfunction-ss_dRcR::synapse0x2bcf7a0() {
   return (neuron0x2bc9510()*-0.235285);
}

double NNfunction-ss_dRcR::synapse0x2bcf7e0() {
   return (neuron0x2bc9850()*-0.0326972);
}

double NNfunction-ss_dRcR::synapse0x2bcf820() {
   return (neuron0x2bc9b90()*-0.231799);
}

double NNfunction-ss_dRcR::synapse0x2bcfba0() {
   return (neuron0x2bc4fd0()*0.0102936);
}

double NNfunction-ss_dRcR::synapse0x2bcfbe0() {
   return (neuron0x2bc5310()*0.116162);
}

double NNfunction-ss_dRcR::synapse0x2bcfc20() {
   return (neuron0x2bc5650()*-0.502816);
}

double NNfunction-ss_dRcR::synapse0x2bcfc60() {
   return (neuron0x2bc5990()*0.582319);
}

double NNfunction-ss_dRcR::synapse0x2bcfca0() {
   return (neuron0x2bc5cd0()*0.414173);
}

double NNfunction-ss_dRcR::synapse0x2bcfce0() {
   return (neuron0x2bc6010()*-0.286744);
}

double NNfunction-ss_dRcR::synapse0x2bcfd20() {
   return (neuron0x2bc6350()*0.454536);
}

double NNfunction-ss_dRcR::synapse0x2bcfd60() {
   return (neuron0x2bc6690()*0.744818);
}

double NNfunction-ss_dRcR::synapse0x2bcfda0() {
   return (neuron0x2bc69d0()*0.106927);
}

double NNfunction-ss_dRcR::synapse0x2bcfde0() {
   return (neuron0x2bc6d10()*0.338848);
}

double NNfunction-ss_dRcR::synapse0x2bcfe20() {
   return (neuron0x2bc7050()*0.029077);
}

double NNfunction-ss_dRcR::synapse0x2bcfe60() {
   return (neuron0x2bc7390()*-0.0967513);
}

double NNfunction-ss_dRcR::synapse0x2bcfea0() {
   return (neuron0x2bc76d0()*0.063513);
}

double NNfunction-ss_dRcR::synapse0x2bcfee0() {
   return (neuron0x2bc7a10()*0.40318);
}

double NNfunction-ss_dRcR::synapse0x2bcff20() {
   return (neuron0x2bc7d50()*0.398004);
}

double NNfunction-ss_dRcR::synapse0x2bcff60() {
   return (neuron0x2bc8090()*0.149662);
}

double NNfunction-ss_dRcR::synapse0x2bcf9f0() {
   return (neuron0x2bc83d0()*0.114236);
}

double NNfunction-ss_dRcR::synapse0x2bcfa30() {
   return (neuron0x2bc8930()*0.876429);
}

double NNfunction-ss_dRcR::synapse0x2bd00b0() {
   return (neuron0x2bc8b50()*0.921862);
}

double NNfunction-ss_dRcR::synapse0x2bd00f0() {
   return (neuron0x2bc8e90()*-0.0301588);
}

double NNfunction-ss_dRcR::synapse0x2bd0130() {
   return (neuron0x2bc91d0()*-0.0806375);
}

double NNfunction-ss_dRcR::synapse0x2bd0170() {
   return (neuron0x2bc9510()*0.0579682);
}

double NNfunction-ss_dRcR::synapse0x2bd01b0() {
   return (neuron0x2bc9850()*0.362773);
}

double NNfunction-ss_dRcR::synapse0x2bd01f0() {
   return (neuron0x2bc9b90()*0.228951);
}

double NNfunction-ss_dRcR::synapse0x2bd0570() {
   return (neuron0x2bc4fd0()*0.314438);
}

double NNfunction-ss_dRcR::synapse0x2bd05b0() {
   return (neuron0x2bc5310()*0.0696441);
}

double NNfunction-ss_dRcR::synapse0x2bd05f0() {
   return (neuron0x2bc5650()*0.177589);
}

double NNfunction-ss_dRcR::synapse0x2bd0630() {
   return (neuron0x2bc5990()*-0.495935);
}

double NNfunction-ss_dRcR::synapse0x2bd0670() {
   return (neuron0x2bc5cd0()*0.417154);
}

double NNfunction-ss_dRcR::synapse0x2bd06b0() {
   return (neuron0x2bc6010()*-0.0793224);
}

double NNfunction-ss_dRcR::synapse0x2bd06f0() {
   return (neuron0x2bc6350()*0.142615);
}

double NNfunction-ss_dRcR::synapse0x2bd0730() {
   return (neuron0x2bc6690()*0.568804);
}

double NNfunction-ss_dRcR::synapse0x2bd0770() {
   return (neuron0x2bc69d0()*0.0108054);
}

double NNfunction-ss_dRcR::synapse0x2bd07b0() {
   return (neuron0x2bc6d10()*0.0850698);
}

double NNfunction-ss_dRcR::synapse0x2bd07f0() {
   return (neuron0x2bc7050()*0.203607);
}

double NNfunction-ss_dRcR::synapse0x2bd0830() {
   return (neuron0x2bc7390()*0.0282244);
}

double NNfunction-ss_dRcR::synapse0x2bd0870() {
   return (neuron0x2bc76d0()*0.0837924);
}

double NNfunction-ss_dRcR::synapse0x2bd08b0() {
   return (neuron0x2bc7a10()*0.112248);
}

double NNfunction-ss_dRcR::synapse0x2bd08f0() {
   return (neuron0x2bc7d50()*0.0297519);
}

double NNfunction-ss_dRcR::synapse0x2bd0930() {
   return (neuron0x2bc8090()*0.39166);
}

double NNfunction-ss_dRcR::synapse0x2bd03c0() {
   return (neuron0x2bc83d0()*0.111717);
}

double NNfunction-ss_dRcR::synapse0x2bd0400() {
   return (neuron0x2bc8930()*0.419151);
}

double NNfunction-ss_dRcR::synapse0x2bcd190() {
   return (neuron0x2bc8b50()*0.278856);
}

double NNfunction-ss_dRcR::synapse0x2bcd1d0() {
   return (neuron0x2bc8e90()*0.0304067);
}

double NNfunction-ss_dRcR::synapse0x2bcd210() {
   return (neuron0x2bc91d0()*-0.0234034);
}

double NNfunction-ss_dRcR::synapse0x2bcd250() {
   return (neuron0x2bc9510()*0.0991118);
}

double NNfunction-ss_dRcR::synapse0x2bcd290() {
   return (neuron0x2bc9850()*0.0564689);
}

double NNfunction-ss_dRcR::synapse0x2bcd2d0() {
   return (neuron0x2bc9b90()*0.0965302);
}

double NNfunction-ss_dRcR::synapse0x2bcd650() {
   return (neuron0x2bc4fd0()*-0.162037);
}

double NNfunction-ss_dRcR::synapse0x2bcd690() {
   return (neuron0x2bc5310()*-0.433269);
}

double NNfunction-ss_dRcR::synapse0x2bcd6d0() {
   return (neuron0x2bc5650()*-0.627721);
}

double NNfunction-ss_dRcR::synapse0x2bcd710() {
   return (neuron0x2bc5990()*1.23089);
}

double NNfunction-ss_dRcR::synapse0x2bcd750() {
   return (neuron0x2bc5cd0()*-0.317102);
}

double NNfunction-ss_dRcR::synapse0x2bcd790() {
   return (neuron0x2bc6010()*-0.747378);
}

double NNfunction-ss_dRcR::synapse0x2bcd7d0() {
   return (neuron0x2bc6350()*-0.0261102);
}

double NNfunction-ss_dRcR::synapse0x2bcd810() {
   return (neuron0x2bc6690()*0.274031);
}

double NNfunction-ss_dRcR::synapse0x2bcd850() {
   return (neuron0x2bc69d0()*0.240349);
}

double NNfunction-ss_dRcR::synapse0x2bcd890() {
   return (neuron0x2bc6d10()*0.622294);
}

double NNfunction-ss_dRcR::synapse0x2bcd8d0() {
   return (neuron0x2bc7050()*0.748111);
}

double NNfunction-ss_dRcR::synapse0x2bcd910() {
   return (neuron0x2bc7390()*-0.539043);
}

double NNfunction-ss_dRcR::synapse0x2bcd950() {
   return (neuron0x2bc76d0()*-0.242642);
}

double NNfunction-ss_dRcR::synapse0x2bd1a90() {
   return (neuron0x2bc7a10()*0.603963);
}

double NNfunction-ss_dRcR::synapse0x2bd1ad0() {
   return (neuron0x2bc7d50()*-1.24427);
}

double NNfunction-ss_dRcR::synapse0x2bd1b10() {
   return (neuron0x2bc8090()*-1.14057);
}

double NNfunction-ss_dRcR::synapse0x2bcd4a0() {
   return (neuron0x2bc83d0()*0.13409);
}

double NNfunction-ss_dRcR::synapse0x2bcd4e0() {
   return (neuron0x2bc8930()*-0.152188);
}

double NNfunction-ss_dRcR::synapse0x2bd1c60() {
   return (neuron0x2bc8b50()*0.529266);
}

double NNfunction-ss_dRcR::synapse0x2bd1ca0() {
   return (neuron0x2bc8e90()*0.902662);
}

double NNfunction-ss_dRcR::synapse0x2bd1ce0() {
   return (neuron0x2bc91d0()*0.5297);
}

double NNfunction-ss_dRcR::synapse0x2bd1d20() {
   return (neuron0x2bc9510()*0.0223334);
}

double NNfunction-ss_dRcR::synapse0x2bd1d60() {
   return (neuron0x2bc9850()*0.0809776);
}

double NNfunction-ss_dRcR::synapse0x2bd1da0() {
   return (neuron0x2bc9b90()*0.284301);
}

double NNfunction-ss_dRcR::synapse0x2bd2120() {
   return (neuron0x2bc4fd0()*0.0243078);
}

double NNfunction-ss_dRcR::synapse0x2bd2160() {
   return (neuron0x2bc5310()*0.0218136);
}

double NNfunction-ss_dRcR::synapse0x2bd21a0() {
   return (neuron0x2bc5650()*0.00511582);
}

double NNfunction-ss_dRcR::synapse0x2bd21e0() {
   return (neuron0x2bc5990()*-0.300959);
}

double NNfunction-ss_dRcR::synapse0x2bd2220() {
   return (neuron0x2bc5cd0()*-0.0204696);
}

double NNfunction-ss_dRcR::synapse0x2bd2260() {
   return (neuron0x2bc6010()*-0.0229719);
}

double NNfunction-ss_dRcR::synapse0x2bd22a0() {
   return (neuron0x2bc6350()*-0.0468749);
}

double NNfunction-ss_dRcR::synapse0x2bd22e0() {
   return (neuron0x2bc6690()*0.0133619);
}

double NNfunction-ss_dRcR::synapse0x2bd2320() {
   return (neuron0x2bc69d0()*-0.0109529);
}

double NNfunction-ss_dRcR::synapse0x2bd2360() {
   return (neuron0x2bc6d10()*0.00209493);
}

double NNfunction-ss_dRcR::synapse0x2bd23a0() {
   return (neuron0x2bc7050()*0.018138);
}

double NNfunction-ss_dRcR::synapse0x2bd23e0() {
   return (neuron0x2bc7390()*0.458443);
}

double NNfunction-ss_dRcR::synapse0x2bd2420() {
   return (neuron0x2bc76d0()*0.311415);
}

double NNfunction-ss_dRcR::synapse0x2bd2460() {
   return (neuron0x2bc7a10()*-0.0584945);
}

double NNfunction-ss_dRcR::synapse0x2bd24a0() {
   return (neuron0x2bc7d50()*0.175884);
}

double NNfunction-ss_dRcR::synapse0x2bd24e0() {
   return (neuron0x2bc8090()*-0.0225702);
}

double NNfunction-ss_dRcR::synapse0x2bd1f70() {
   return (neuron0x2bc83d0()*-0.0527309);
}

double NNfunction-ss_dRcR::synapse0x2bd1fb0() {
   return (neuron0x2bc8930()*0.0172865);
}

double NNfunction-ss_dRcR::synapse0x2bd2630() {
   return (neuron0x2bc8b50()*0.192998);
}

double NNfunction-ss_dRcR::synapse0x2bd2670() {
   return (neuron0x2bc8e90()*0.00210564);
}

double NNfunction-ss_dRcR::synapse0x2bd26b0() {
   return (neuron0x2bc91d0()*0.0223422);
}

double NNfunction-ss_dRcR::synapse0x2bd26f0() {
   return (neuron0x2bc9510()*0.01324);
}

double NNfunction-ss_dRcR::synapse0x2bd2730() {
   return (neuron0x2bc9850()*0.0125681);
}

double NNfunction-ss_dRcR::synapse0x2bd2770() {
   return (neuron0x2bc9b90()*0.00645982);
}

double NNfunction-ss_dRcR::synapse0x2bd2af0() {
   return (neuron0x2bc4fd0()*0.0174578);
}

double NNfunction-ss_dRcR::synapse0x2bd2b30() {
   return (neuron0x2bc5310()*-0.0173226);
}

double NNfunction-ss_dRcR::synapse0x2bd2b70() {
   return (neuron0x2bc5650()*-0.0547184);
}

double NNfunction-ss_dRcR::synapse0x2bd2bb0() {
   return (neuron0x2bc5990()*2.36267);
}

double NNfunction-ss_dRcR::synapse0x2bd2bf0() {
   return (neuron0x2bc5cd0()*0.0104189);
}

double NNfunction-ss_dRcR::synapse0x2bd2c30() {
   return (neuron0x2bc6010()*-0.0223552);
}

double NNfunction-ss_dRcR::synapse0x2bd2c70() {
   return (neuron0x2bc6350()*-0.0357672);
}

double NNfunction-ss_dRcR::synapse0x2bd2cb0() {
   return (neuron0x2bc6690()*-0.00314492);
}

double NNfunction-ss_dRcR::synapse0x2bd2cf0() {
   return (neuron0x2bc69d0()*-0.00228169);
}

double NNfunction-ss_dRcR::synapse0x2bd2d30() {
   return (neuron0x2bc6d10()*-0.0321964);
}

double NNfunction-ss_dRcR::synapse0x2bd2d70() {
   return (neuron0x2bc7050()*-0.0189959);
}

double NNfunction-ss_dRcR::synapse0x2bd2db0() {
   return (neuron0x2bc7390()*-0.000975186);
}

double NNfunction-ss_dRcR::synapse0x2bd2df0() {
   return (neuron0x2bc76d0()*-0.0113059);
}

double NNfunction-ss_dRcR::synapse0x2bd2e30() {
   return (neuron0x2bc7a10()*-0.0409171);
}

double NNfunction-ss_dRcR::synapse0x2bd2e70() {
   return (neuron0x2bc7d50()*-0.00831793);
}

double NNfunction-ss_dRcR::synapse0x2bd2eb0() {
   return (neuron0x2bc8090()*-0.128813);
}

double NNfunction-ss_dRcR::synapse0x2bd2940() {
   return (neuron0x2bc83d0()*-0.0232717);
}

double NNfunction-ss_dRcR::synapse0x2bd2980() {
   return (neuron0x2bc8930()*-0.119939);
}

double NNfunction-ss_dRcR::synapse0x2bd3000() {
   return (neuron0x2bc8b50()*-0.0101729);
}

double NNfunction-ss_dRcR::synapse0x2bd3040() {
   return (neuron0x2bc8e90()*0.0115227);
}

double NNfunction-ss_dRcR::synapse0x2bd3080() {
   return (neuron0x2bc91d0()*0.0174986);
}

double NNfunction-ss_dRcR::synapse0x2bd30c0() {
   return (neuron0x2bc9510()*-0.00330798);
}

double NNfunction-ss_dRcR::synapse0x2bd3100() {
   return (neuron0x2bc9850()*0.0102848);
}

double NNfunction-ss_dRcR::synapse0x2bd3140() {
   return (neuron0x2bc9b90()*0.013394);
}

double NNfunction-ss_dRcR::synapse0x2bd34c0() {
   return (neuron0x2bc4fd0()*0.296695);
}

double NNfunction-ss_dRcR::synapse0x2bd3500() {
   return (neuron0x2bc5310()*0.122489);
}

double NNfunction-ss_dRcR::synapse0x2bd3540() {
   return (neuron0x2bc5650()*-0.0193404);
}

double NNfunction-ss_dRcR::synapse0x2bd3580() {
   return (neuron0x2bc5990()*1.24745);
}

double NNfunction-ss_dRcR::synapse0x2bd35c0() {
   return (neuron0x2bc5cd0()*0.804832);
}

double NNfunction-ss_dRcR::synapse0x2bd3600() {
   return (neuron0x2bc6010()*0.160357);
}

double NNfunction-ss_dRcR::synapse0x2bd3640() {
   return (neuron0x2bc6350()*0.0676751);
}

double NNfunction-ss_dRcR::synapse0x2bd3680() {
   return (neuron0x2bc6690()*0.0717054);
}

double NNfunction-ss_dRcR::synapse0x2bd36c0() {
   return (neuron0x2bc69d0()*-0.0135699);
}

double NNfunction-ss_dRcR::synapse0x2bd3700() {
   return (neuron0x2bc6d10()*-0.0217341);
}

double NNfunction-ss_dRcR::synapse0x2bd3740() {
   return (neuron0x2bc7050()*0.336182);
}

double NNfunction-ss_dRcR::synapse0x2bd3780() {
   return (neuron0x2bc7390()*0.0417084);
}

double NNfunction-ss_dRcR::synapse0x2bd37c0() {
   return (neuron0x2bc76d0()*0.0681672);
}

double NNfunction-ss_dRcR::synapse0x2bd3800() {
   return (neuron0x2bc7a10()*-0.0754449);
}

double NNfunction-ss_dRcR::synapse0x2bd3840() {
   return (neuron0x2bc7d50()*-0.109205);
}

double NNfunction-ss_dRcR::synapse0x2bd3880() {
   return (neuron0x2bc8090()*-0.484685);
}

double NNfunction-ss_dRcR::synapse0x2bd3310() {
   return (neuron0x2bc83d0()*0.200955);
}

double NNfunction-ss_dRcR::synapse0x2bd3350() {
   return (neuron0x2bc8930()*-0.632522);
}

double NNfunction-ss_dRcR::synapse0x2bd39d0() {
   return (neuron0x2bc8b50()*-0.471154);
}

double NNfunction-ss_dRcR::synapse0x2bd3a10() {
   return (neuron0x2bc8e90()*-0.111084);
}

double NNfunction-ss_dRcR::synapse0x2bd3a50() {
   return (neuron0x2bc91d0()*0.135327);
}

double NNfunction-ss_dRcR::synapse0x2bd3a90() {
   return (neuron0x2bc9510()*0.0178106);
}

double NNfunction-ss_dRcR::synapse0x2bd3ad0() {
   return (neuron0x2bc9850()*-0.0900212);
}

double NNfunction-ss_dRcR::synapse0x2bd3b10() {
   return (neuron0x2bc9b90()*0.25832);
}

double NNfunction-ss_dRcR::synapse0x2bd3e90() {
   return (neuron0x2bc4fd0()*0.805029);
}

double NNfunction-ss_dRcR::synapse0x2bc51f0() {
   return (neuron0x2bc5310()*0.530958);
}

double NNfunction-ss_dRcR::synapse0x2bc5230() {
   return (neuron0x2bc5650()*-0.250751);
}

double NNfunction-ss_dRcR::synapse0x2bc5530() {
   return (neuron0x2bc5990()*0.732828);
}

double NNfunction-ss_dRcR::synapse0x2bc5570() {
   return (neuron0x2bc5cd0()*0.415672);
}

double NNfunction-ss_dRcR::synapse0x2bc5870() {
   return (neuron0x2bc6010()*0.271893);
}

double NNfunction-ss_dRcR::synapse0x2bc58b0() {
   return (neuron0x2bc6350()*0.0951064);
}

double NNfunction-ss_dRcR::synapse0x2bc5bb0() {
   return (neuron0x2bc6690()*0.237151);
}

double NNfunction-ss_dRcR::synapse0x2bc5bf0() {
   return (neuron0x2bc69d0()*-0.683768);
}

double NNfunction-ss_dRcR::synapse0x2bc5ef0() {
   return (neuron0x2bc6d10()*-0.273914);
}

double NNfunction-ss_dRcR::synapse0x2bc5f30() {
   return (neuron0x2bc7050()*0.0694707);
}

double NNfunction-ss_dRcR::synapse0x2bc6230() {
   return (neuron0x2bc7390()*-0.979795);
}

double NNfunction-ss_dRcR::synapse0x2bc6270() {
   return (neuron0x2bc76d0()*0.862796);
}

double NNfunction-ss_dRcR::synapse0x2bc6570() {
   return (neuron0x2bc7a10()*-0.0938249);
}

double NNfunction-ss_dRcR::synapse0x2bc65b0() {
   return (neuron0x2bc7d50()*-0.239453);
}

double NNfunction-ss_dRcR::synapse0x2bc68b0() {
   return (neuron0x2bc8090()*0.329767);
}

double NNfunction-ss_dRcR::synapse0x2bc68f0() {
   return (neuron0x2bc83d0()*-0.196881);
}

double NNfunction-ss_dRcR::synapse0x2bc6bf0() {
   return (neuron0x2bc8930()*-0.0623208);
}

double NNfunction-ss_dRcR::synapse0x2bc6c30() {
   return (neuron0x2bc8b50()*0.435122);
}

double NNfunction-ss_dRcR::synapse0x2bc6f30() {
   return (neuron0x2bc8e90()*-0.190097);
}

double NNfunction-ss_dRcR::synapse0x2bc6f70() {
   return (neuron0x2bc91d0()*0.0710946);
}

double NNfunction-ss_dRcR::synapse0x2bc7270() {
   return (neuron0x2bc9510()*-0.141251);
}

double NNfunction-ss_dRcR::synapse0x2bc72b0() {
   return (neuron0x2bc9850()*0.377134);
}

double NNfunction-ss_dRcR::synapse0x2bc75b0() {
   return (neuron0x2bc9b90()*0.362951);
}

double NNfunction-ss_dRcR::synapse0x2bc75f0() {
   return (neuron0x2bc4fd0()*0.67901);
}

double NNfunction-ss_dRcR::synapse0x2bc82b0() {
   return (neuron0x2bc5310()*-0.461548);
}

double NNfunction-ss_dRcR::synapse0x2bc82f0() {
   return (neuron0x2bc5650()*-0.71334);
}

double NNfunction-ss_dRcR::synapse0x2bd3ce0() {
   return (neuron0x2bc5990()*-0.805082);
}

double NNfunction-ss_dRcR::synapse0x2bd3d20() {
   return (neuron0x2bc5cd0()*0.339313);
}

double NNfunction-ss_dRcR::synapse0x2bc85f0() {
   return (neuron0x2bc6010()*0.0399251);
}

double NNfunction-ss_dRcR::synapse0x2bc8630() {
   return (neuron0x2bc6350()*-0.24451);
}

double NNfunction-ss_dRcR::synapse0x2980070() {
   return (neuron0x2bc6690()*0.864165);
}

double NNfunction-ss_dRcR::synapse0x29800b0() {
   return (neuron0x2bc69d0()*0.371582);
}

double NNfunction-ss_dRcR::synapse0x2bc8d70() {
   return (neuron0x2bc6d10()*-0.190422);
}

double NNfunction-ss_dRcR::synapse0x2bc8db0() {
   return (neuron0x2bc7050()*-0.0977521);
}

double NNfunction-ss_dRcR::synapse0x2bc90b0() {
   return (neuron0x2bc7390()*0.514557);
}

double NNfunction-ss_dRcR::synapse0x2bc90f0() {
   return (neuron0x2bc76d0()*-0.390391);
}

double NNfunction-ss_dRcR::synapse0x2bc93f0() {
   return (neuron0x2bc7a10()*0.429665);
}

double NNfunction-ss_dRcR::synapse0x2bc9430() {
   return (neuron0x2bc7d50()*-0.0198613);
}

double NNfunction-ss_dRcR::synapse0x2bc9730() {
   return (neuron0x2bc8090()*-0.441574);
}

double NNfunction-ss_dRcR::synapse0x2bc9770() {
   return (neuron0x2bc83d0()*0.2183);
}

double NNfunction-ss_dRcR::synapse0x2bc9a70() {
   return (neuron0x2bc8930()*0.121882);
}

double NNfunction-ss_dRcR::synapse0x2bc9ab0() {
   return (neuron0x2bc8b50()*-0.0115944);
}

double NNfunction-ss_dRcR::synapse0x2bc9db0() {
   return (neuron0x2bc8e90()*-0.264539);
}

double NNfunction-ss_dRcR::synapse0x2bc9df0() {
   return (neuron0x2bc91d0()*-0.722556);
}

double NNfunction-ss_dRcR::synapse0x2bc78f0() {
   return (neuron0x2bc9510()*-0.0642275);
}

double NNfunction-ss_dRcR::synapse0x2bc7930() {
   return (neuron0x2bc9850()*0.0967382);
}

double NNfunction-ss_dRcR::synapse0x2bd5c00() {
   return (neuron0x2bc9b90()*-0.178327);
}

double NNfunction-ss_dRcR::synapse0x2bd5f80() {
   return (neuron0x2bc4fd0()*-0.263998);
}

double NNfunction-ss_dRcR::synapse0x2bd5fc0() {
   return (neuron0x2bc5310()*0.0979121);
}

double NNfunction-ss_dRcR::synapse0x2bd6000() {
   return (neuron0x2bc5650()*0.992951);
}

double NNfunction-ss_dRcR::synapse0x2bd6040() {
   return (neuron0x2bc5990()*0.642123);
}

double NNfunction-ss_dRcR::synapse0x2bd6080() {
   return (neuron0x2bc5cd0()*-0.0500319);
}

double NNfunction-ss_dRcR::synapse0x2bd60c0() {
   return (neuron0x2bc6010()*-0.0500496);
}

double NNfunction-ss_dRcR::synapse0x2bd6100() {
   return (neuron0x2bc6350()*0.531095);
}

double NNfunction-ss_dRcR::synapse0x2bd6140() {
   return (neuron0x2bc6690()*-0.165874);
}

double NNfunction-ss_dRcR::synapse0x2bd6180() {
   return (neuron0x2bc69d0()*-0.710652);
}

double NNfunction-ss_dRcR::synapse0x2bd61c0() {
   return (neuron0x2bc6d10()*-0.202042);
}

double NNfunction-ss_dRcR::synapse0x2bd6200() {
   return (neuron0x2bc7050()*0.143586);
}

double NNfunction-ss_dRcR::synapse0x2bd6240() {
   return (neuron0x2bc7390()*-0.392042);
}

double NNfunction-ss_dRcR::synapse0x2bd6280() {
   return (neuron0x2bc76d0()*-0.349583);
}

double NNfunction-ss_dRcR::synapse0x2bd62c0() {
   return (neuron0x2bc7a10()*-0.470975);
}

double NNfunction-ss_dRcR::synapse0x2bd6300() {
   return (neuron0x2bc7d50()*-0.2968);
}

double NNfunction-ss_dRcR::synapse0x2bd6340() {
   return (neuron0x2bc8090()*-0.019403);
}

double NNfunction-ss_dRcR::synapse0x2bd5dd0() {
   return (neuron0x2bc83d0()*0.432087);
}

double NNfunction-ss_dRcR::synapse0x2bd5e10() {
   return (neuron0x2bc8930()*0.473496);
}

double NNfunction-ss_dRcR::synapse0x2bd6490() {
   return (neuron0x2bc8b50()*-0.316806);
}

double NNfunction-ss_dRcR::synapse0x2bd64d0() {
   return (neuron0x2bc8e90()*-0.352767);
}

double NNfunction-ss_dRcR::synapse0x2bd6510() {
   return (neuron0x2bc91d0()*-0.189949);
}

double NNfunction-ss_dRcR::synapse0x2bd6550() {
   return (neuron0x2bc9510()*0.0861794);
}

double NNfunction-ss_dRcR::synapse0x2bd6590() {
   return (neuron0x2bc9850()*-0.139041);
}

double NNfunction-ss_dRcR::synapse0x2bd65d0() {
   return (neuron0x2bc9b90()*0.150507);
}

double NNfunction-ss_dRcR::synapse0x2bd6950() {
   return (neuron0x2bc4fd0()*-0.00137638);
}

double NNfunction-ss_dRcR::synapse0x2bd6990() {
   return (neuron0x2bc5310()*-0.0232511);
}

double NNfunction-ss_dRcR::synapse0x2bd69d0() {
   return (neuron0x2bc5650()*0.0386656);
}

double NNfunction-ss_dRcR::synapse0x2bd6a10() {
   return (neuron0x2bc5990()*-0.526225);
}

double NNfunction-ss_dRcR::synapse0x2bd6a50() {
   return (neuron0x2bc5cd0()*0.0274382);
}

double NNfunction-ss_dRcR::synapse0x2bd6a90() {
   return (neuron0x2bc6010()*0.0239285);
}

double NNfunction-ss_dRcR::synapse0x2bd6ad0() {
   return (neuron0x2bc6350()*-0.038574);
}

double NNfunction-ss_dRcR::synapse0x2bd6b10() {
   return (neuron0x2bc6690()*0.0473433);
}

double NNfunction-ss_dRcR::synapse0x2bd6b50() {
   return (neuron0x2bc69d0()*0.0270563);
}

double NNfunction-ss_dRcR::synapse0x2bd6b90() {
   return (neuron0x2bc6d10()*0.000219789);
}

double NNfunction-ss_dRcR::synapse0x2bd6bd0() {
   return (neuron0x2bc7050()*0.0103829);
}

double NNfunction-ss_dRcR::synapse0x2bd6c10() {
   return (neuron0x2bc7390()*-0.0390717);
}

double NNfunction-ss_dRcR::synapse0x2bd6c50() {
   return (neuron0x2bc76d0()*0.052646);
}

double NNfunction-ss_dRcR::synapse0x2bd6c90() {
   return (neuron0x2bc7a10()*-0.00796297);
}

double NNfunction-ss_dRcR::synapse0x2bd6cd0() {
   return (neuron0x2bc7d50()*0.0476966);
}

double NNfunction-ss_dRcR::synapse0x2bd6d10() {
   return (neuron0x2bc8090()*-0.643507);
}

double NNfunction-ss_dRcR::synapse0x2bd67a0() {
   return (neuron0x2bc83d0()*0.00582773);
}

double NNfunction-ss_dRcR::synapse0x2bd67e0() {
   return (neuron0x2bc8930()*-0.660272);
}

double NNfunction-ss_dRcR::synapse0x2bd6e60() {
   return (neuron0x2bc8b50()*-0.00230712);
}

double NNfunction-ss_dRcR::synapse0x2bd6ea0() {
   return (neuron0x2bc8e90()*0.0116758);
}

double NNfunction-ss_dRcR::synapse0x2bd6ee0() {
   return (neuron0x2bc91d0()*-0.0362695);
}

double NNfunction-ss_dRcR::synapse0x2bd6f20() {
   return (neuron0x2bc9510()*0.0115595);
}

double NNfunction-ss_dRcR::synapse0x2bd6f60() {
   return (neuron0x2bc9850()*0.00532624);
}

double NNfunction-ss_dRcR::synapse0x2bd6fa0() {
   return (neuron0x2bc9b90()*-0.0659323);
}

double NNfunction-ss_dRcR::synapse0x2bd7320() {
   return (neuron0x2bc4fd0()*0.0711888);
}

double NNfunction-ss_dRcR::synapse0x2bd7360() {
   return (neuron0x2bc5310()*0.00261978);
}

double NNfunction-ss_dRcR::synapse0x2bd73a0() {
   return (neuron0x2bc5650()*0.0797238);
}

double NNfunction-ss_dRcR::synapse0x2bd73e0() {
   return (neuron0x2bc5990()*-4.1525);
}

double NNfunction-ss_dRcR::synapse0x2bd7420() {
   return (neuron0x2bc5cd0()*0.119649);
}

double NNfunction-ss_dRcR::synapse0x2bd7460() {
   return (neuron0x2bc6010()*0.0408267);
}

double NNfunction-ss_dRcR::synapse0x2bd74a0() {
   return (neuron0x2bc6350()*-0.0147161);
}

double NNfunction-ss_dRcR::synapse0x2bd74e0() {
   return (neuron0x2bc6690()*0.0554247);
}

double NNfunction-ss_dRcR::synapse0x2bd7520() {
   return (neuron0x2bc69d0()*0.0709412);
}

double NNfunction-ss_dRcR::synapse0x2bd7560() {
   return (neuron0x2bc6d10()*-0.00907762);
}

double NNfunction-ss_dRcR::synapse0x2bd75a0() {
   return (neuron0x2bc7050()*0.00203596);
}

double NNfunction-ss_dRcR::synapse0x2bd75e0() {
   return (neuron0x2bc7390()*-0.117882);
}

double NNfunction-ss_dRcR::synapse0x2bd7620() {
   return (neuron0x2bc76d0()*0.0965458);
}

double NNfunction-ss_dRcR::synapse0x2bd7660() {
   return (neuron0x2bc7a10()*0.0297226);
}

double NNfunction-ss_dRcR::synapse0x2bd76a0() {
   return (neuron0x2bc7d50()*-0.0556708);
}

double NNfunction-ss_dRcR::synapse0x2bd76e0() {
   return (neuron0x2bc8090()*-0.0481913);
}

double NNfunction-ss_dRcR::synapse0x2bd7170() {
   return (neuron0x2bc83d0()*0.0116861);
}

double NNfunction-ss_dRcR::synapse0x2bd71b0() {
   return (neuron0x2bc8930()*1.9807);
}

double NNfunction-ss_dRcR::synapse0x2bd7830() {
   return (neuron0x2bc8b50()*0.0328104);
}

double NNfunction-ss_dRcR::synapse0x2bd7870() {
   return (neuron0x2bc8e90()*0.10751);
}

double NNfunction-ss_dRcR::synapse0x2bd78b0() {
   return (neuron0x2bc91d0()*-0.00998822);
}

double NNfunction-ss_dRcR::synapse0x2bd78f0() {
   return (neuron0x2bc9510()*0.0575978);
}

double NNfunction-ss_dRcR::synapse0x2bd7930() {
   return (neuron0x2bc9850()*-0.0373183);
}

double NNfunction-ss_dRcR::synapse0x2bd7970() {
   return (neuron0x2bc9b90()*-0.019388);
}

double NNfunction-ss_dRcR::synapse0x2bd7cf0() {
   return (neuron0x2bc4fd0()*0.651797);
}

double NNfunction-ss_dRcR::synapse0x2bd7d30() {
   return (neuron0x2bc5310()*-0.570141);
}

double NNfunction-ss_dRcR::synapse0x2bd7d70() {
   return (neuron0x2bc5650()*-1.0175);
}

double NNfunction-ss_dRcR::synapse0x2bd7db0() {
   return (neuron0x2bc5990()*-0.291853);
}

double NNfunction-ss_dRcR::synapse0x2bd7df0() {
   return (neuron0x2bc5cd0()*0.332428);
}

double NNfunction-ss_dRcR::synapse0x2bd7e30() {
   return (neuron0x2bc6010()*0.167213);
}

double NNfunction-ss_dRcR::synapse0x2bd7e70() {
   return (neuron0x2bc6350()*-0.362345);
}

double NNfunction-ss_dRcR::synapse0x2bd7eb0() {
   return (neuron0x2bc6690()*1.13837);
}

double NNfunction-ss_dRcR::synapse0x2bd7ef0() {
   return (neuron0x2bc69d0()*0.491553);
}

double NNfunction-ss_dRcR::synapse0x2bd7f30() {
   return (neuron0x2bc6d10()*-0.225077);
}

double NNfunction-ss_dRcR::synapse0x2bd7f70() {
   return (neuron0x2bc7050()*-0.0859073);
}

double NNfunction-ss_dRcR::synapse0x2bd7fb0() {
   return (neuron0x2bc7390()*0.759351);
}

double NNfunction-ss_dRcR::synapse0x2bd7ff0() {
   return (neuron0x2bc76d0()*-0.615037);
}

double NNfunction-ss_dRcR::synapse0x2bd8030() {
   return (neuron0x2bc7a10()*0.598922);
}

double NNfunction-ss_dRcR::synapse0x2bd8070() {
   return (neuron0x2bc7d50()*-0.188797);
}

double NNfunction-ss_dRcR::synapse0x2bd80b0() {
   return (neuron0x2bc8090()*-0.589173);
}

double NNfunction-ss_dRcR::synapse0x2bd7b40() {
   return (neuron0x2bc83d0()*0.321419);
}

double NNfunction-ss_dRcR::synapse0x2bd7b80() {
   return (neuron0x2bc8930()*0.157631);
}

double NNfunction-ss_dRcR::synapse0x2bd8200() {
   return (neuron0x2bc8b50()*-0.0791058);
}

double NNfunction-ss_dRcR::synapse0x2bd8240() {
   return (neuron0x2bc8e90()*-0.25817);
}

double NNfunction-ss_dRcR::synapse0x2bd8280() {
   return (neuron0x2bc91d0()*-0.646948);
}

double NNfunction-ss_dRcR::synapse0x2bd82c0() {
   return (neuron0x2bc9510()*-0.197813);
}

double NNfunction-ss_dRcR::synapse0x2bd8300() {
   return (neuron0x2bc9850()*0.0851576);
}

double NNfunction-ss_dRcR::synapse0x2bd8340() {
   return (neuron0x2bc9b90()*-0.392274);
}

double NNfunction-ss_dRcR::synapse0x2bd86c0() {
   return (neuron0x2bc4fd0()*-0.0459113);
}

double NNfunction-ss_dRcR::synapse0x2bd8700() {
   return (neuron0x2bc5310()*-0.502808);
}

double NNfunction-ss_dRcR::synapse0x2bd8740() {
   return (neuron0x2bc5650()*1.14344);
}

double NNfunction-ss_dRcR::synapse0x2bd8780() {
   return (neuron0x2bc5990()*-0.491179);
}

double NNfunction-ss_dRcR::synapse0x2bd87c0() {
   return (neuron0x2bc5cd0()*0.332979);
}

double NNfunction-ss_dRcR::synapse0x2bd8800() {
   return (neuron0x2bc6010()*0.0500459);
}

double NNfunction-ss_dRcR::synapse0x2bd8840() {
   return (neuron0x2bc6350()*-0.144324);
}

double NNfunction-ss_dRcR::synapse0x2bd8880() {
   return (neuron0x2bc6690()*0.312302);
}

double NNfunction-ss_dRcR::synapse0x2bd88c0() {
   return (neuron0x2bc69d0()*-0.566657);
}

double NNfunction-ss_dRcR::synapse0x2bd0a80() {
   return (neuron0x2bc6d10()*0.208527);
}

double NNfunction-ss_dRcR::synapse0x2bd0ac0() {
   return (neuron0x2bc7050()*0.460229);
}

double NNfunction-ss_dRcR::synapse0x2bd0b00() {
   return (neuron0x2bc7390()*-0.352933);
}

double NNfunction-ss_dRcR::synapse0x2bd0b40() {
   return (neuron0x2bc76d0()*-0.495247);
}

double NNfunction-ss_dRcR::synapse0x2bd0b80() {
   return (neuron0x2bc7a10()*0.215868);
}

double NNfunction-ss_dRcR::synapse0x2bd0bc0() {
   return (neuron0x2bc7d50()*-0.0344939);
}

double NNfunction-ss_dRcR::synapse0x2bd0c00() {
   return (neuron0x2bc8090()*-0.642218);
}

double NNfunction-ss_dRcR::synapse0x2bd8510() {
   return (neuron0x2bc83d0()*0.488353);
}

double NNfunction-ss_dRcR::synapse0x2bd8550() {
   return (neuron0x2bc8930()*-0.756521);
}

double NNfunction-ss_dRcR::synapse0x2bd0d50() {
   return (neuron0x2bc8b50()*-0.652487);
}

double NNfunction-ss_dRcR::synapse0x2bd0d90() {
   return (neuron0x2bc8e90()*0.597958);
}

double NNfunction-ss_dRcR::synapse0x2bd0dd0() {
   return (neuron0x2bc91d0()*0.365341);
}

double NNfunction-ss_dRcR::synapse0x2bd0e10() {
   return (neuron0x2bc9510()*0.216667);
}

double NNfunction-ss_dRcR::synapse0x2bd0e50() {
   return (neuron0x2bc9850()*-0.41246);
}

double NNfunction-ss_dRcR::synapse0x2bd0e90() {
   return (neuron0x2bc9b90()*-0.258997);
}

double NNfunction-ss_dRcR::synapse0x2bd1210() {
   return (neuron0x2bc4fd0()*-0.110474);
}

double NNfunction-ss_dRcR::synapse0x2bd1250() {
   return (neuron0x2bc5310()*-1.39053);
}

double NNfunction-ss_dRcR::synapse0x2bd1290() {
   return (neuron0x2bc5650()*0.344579);
}

double NNfunction-ss_dRcR::synapse0x2bd12d0() {
   return (neuron0x2bc5990()*0.572713);
}

double NNfunction-ss_dRcR::synapse0x2bd1310() {
   return (neuron0x2bc5cd0()*-0.724738);
}

double NNfunction-ss_dRcR::synapse0x2bd1350() {
   return (neuron0x2bc6010()*0.481145);
}

double NNfunction-ss_dRcR::synapse0x2bd1390() {
   return (neuron0x2bc6350()*0.96166);
}

double NNfunction-ss_dRcR::synapse0x2bd13d0() {
   return (neuron0x2bc6690()*0.598128);
}

double NNfunction-ss_dRcR::synapse0x2bd1410() {
   return (neuron0x2bc69d0()*0.211421);
}

double NNfunction-ss_dRcR::synapse0x2bd1450() {
   return (neuron0x2bc6d10()*0.713298);
}

double NNfunction-ss_dRcR::synapse0x2bd1490() {
   return (neuron0x2bc7050()*1.06843);
}

double NNfunction-ss_dRcR::synapse0x2bd14d0() {
   return (neuron0x2bc7390()*0.603229);
}

double NNfunction-ss_dRcR::synapse0x2bd1510() {
   return (neuron0x2bc76d0()*0.154089);
}

double NNfunction-ss_dRcR::synapse0x2bd1550() {
   return (neuron0x2bc7a10()*0.298584);
}

double NNfunction-ss_dRcR::synapse0x2bd1590() {
   return (neuron0x2bc7d50()*-0.297297);
}

double NNfunction-ss_dRcR::synapse0x2bd15d0() {
   return (neuron0x2bc8090()*-1.01209);
}

double NNfunction-ss_dRcR::synapse0x2bd1060() {
   return (neuron0x2bc83d0()*0.289108);
}

double NNfunction-ss_dRcR::synapse0x2bd10a0() {
   return (neuron0x2bc8930()*-0.670683);
}

double NNfunction-ss_dRcR::synapse0x2bd1720() {
   return (neuron0x2bc8b50()*1.06893);
}

double NNfunction-ss_dRcR::synapse0x2bd1760() {
   return (neuron0x2bc8e90()*0.146409);
}

double NNfunction-ss_dRcR::synapse0x2bd17a0() {
   return (neuron0x2bc91d0()*-0.565458);
}

double NNfunction-ss_dRcR::synapse0x2bd17e0() {
   return (neuron0x2bc9510()*0.424171);
}

double NNfunction-ss_dRcR::synapse0x2bd1820() {
   return (neuron0x2bc9850()*0.296096);
}

double NNfunction-ss_dRcR::synapse0x2bd1860() {
   return (neuron0x2bc9b90()*-0.0203175);
}

double NNfunction-ss_dRcR::synapse0x2bd1a30() {
   return (neuron0x2bc4fd0()*-0.177074);
}

double NNfunction-ss_dRcR::synapse0x2bdaac0() {
   return (neuron0x2bc5310()*-0.0281127);
}

double NNfunction-ss_dRcR::synapse0x2bdab00() {
   return (neuron0x2bc5650()*-0.164653);
}

double NNfunction-ss_dRcR::synapse0x2bdab40() {
   return (neuron0x2bc5990()*-0.645015);
}

double NNfunction-ss_dRcR::synapse0x2bdab80() {
   return (neuron0x2bc5cd0()*-0.384441);
}

double NNfunction-ss_dRcR::synapse0x2bdabc0() {
   return (neuron0x2bc6010()*-0.061839);
}

double NNfunction-ss_dRcR::synapse0x2bdac00() {
   return (neuron0x2bc6350()*0.121682);
}

double NNfunction-ss_dRcR::synapse0x2bdac40() {
   return (neuron0x2bc6690()*-0.370047);
}

double NNfunction-ss_dRcR::synapse0x2bdac80() {
   return (neuron0x2bc69d0()*0.0474601);
}

double NNfunction-ss_dRcR::synapse0x2bdacc0() {
   return (neuron0x2bc6d10()*0.0799726);
}

double NNfunction-ss_dRcR::synapse0x2bdad00() {
   return (neuron0x2bc7050()*0.121213);
}

double NNfunction-ss_dRcR::synapse0x2bdad40() {
   return (neuron0x2bc7390()*-0.161945);
}

double NNfunction-ss_dRcR::synapse0x2bdad80() {
   return (neuron0x2bc76d0()*-0.212279);
}

double NNfunction-ss_dRcR::synapse0x2bdadc0() {
   return (neuron0x2bc7a10()*-0.113882);
}

double NNfunction-ss_dRcR::synapse0x2bdae00() {
   return (neuron0x2bc7d50()*0.0476024);
}

double NNfunction-ss_dRcR::synapse0x2bdae40() {
   return (neuron0x2bc8090()*0.151004);
}

double NNfunction-ss_dRcR::synapse0x2bda910() {
   return (neuron0x2bc83d0()*-0.0615832);
}

double NNfunction-ss_dRcR::synapse0x2bda950() {
   return (neuron0x2bc8930()*-0.649558);
}

double NNfunction-ss_dRcR::synapse0x2bdaf90() {
   return (neuron0x2bc8b50()*-0.163243);
}

double NNfunction-ss_dRcR::synapse0x2bdafd0() {
   return (neuron0x2bc8e90()*-0.141721);
}

double NNfunction-ss_dRcR::synapse0x2bdb010() {
   return (neuron0x2bc91d0()*0.28054);
}

double NNfunction-ss_dRcR::synapse0x2bdb050() {
   return (neuron0x2bc9510()*-0.064411);
}

double NNfunction-ss_dRcR::synapse0x2bdb090() {
   return (neuron0x2bc9850()*0.279168);
}

double NNfunction-ss_dRcR::synapse0x2bdb0d0() {
   return (neuron0x2bc9b90()*0.308942);
}

double NNfunction-ss_dRcR::synapse0x2bdb450() {
   return (neuron0x2bc4fd0()*-0.44484);
}

double NNfunction-ss_dRcR::synapse0x2bdb490() {
   return (neuron0x2bc5310()*-0.0290689);
}

double NNfunction-ss_dRcR::synapse0x2bdb4d0() {
   return (neuron0x2bc5650()*0.199971);
}

double NNfunction-ss_dRcR::synapse0x2bdb510() {
   return (neuron0x2bc5990()*-0.185717);
}

double NNfunction-ss_dRcR::synapse0x2bdb550() {
   return (neuron0x2bc5cd0()*0.745997);
}

double NNfunction-ss_dRcR::synapse0x2bdb590() {
   return (neuron0x2bc6010()*0.542916);
}

double NNfunction-ss_dRcR::synapse0x2bdb5d0() {
   return (neuron0x2bc6350()*0.291404);
}

double NNfunction-ss_dRcR::synapse0x2bdb610() {
   return (neuron0x2bc6690()*0.326798);
}

double NNfunction-ss_dRcR::synapse0x2bdb650() {
   return (neuron0x2bc69d0()*0.286259);
}

double NNfunction-ss_dRcR::synapse0x2bdb690() {
   return (neuron0x2bc6d10()*0.328342);
}

double NNfunction-ss_dRcR::synapse0x2bdb6d0() {
   return (neuron0x2bc7050()*-0.152781);
}

double NNfunction-ss_dRcR::synapse0x2bdb710() {
   return (neuron0x2bc7390()*0.322523);
}

double NNfunction-ss_dRcR::synapse0x2bdb750() {
   return (neuron0x2bc76d0()*-0.552633);
}

double NNfunction-ss_dRcR::synapse0x2bdb790() {
   return (neuron0x2bc7a10()*-0.133138);
}

double NNfunction-ss_dRcR::synapse0x2bdb7d0() {
   return (neuron0x2bc7d50()*-0.0376898);
}

double NNfunction-ss_dRcR::synapse0x2bdb810() {
   return (neuron0x2bc8090()*0.104256);
}

double NNfunction-ss_dRcR::synapse0x2bdb2a0() {
   return (neuron0x2bc83d0()*0.319857);
}

double NNfunction-ss_dRcR::synapse0x2bdb2e0() {
   return (neuron0x2bc8930()*-0.209761);
}

double NNfunction-ss_dRcR::synapse0x2bdb960() {
   return (neuron0x2bc8b50()*0.0515354);
}

double NNfunction-ss_dRcR::synapse0x2bdb9a0() {
   return (neuron0x2bc8e90()*0.0940432);
}

double NNfunction-ss_dRcR::synapse0x2bdb9e0() {
   return (neuron0x2bc91d0()*0.210229);
}

double NNfunction-ss_dRcR::synapse0x2bdba20() {
   return (neuron0x2bc9510()*-0.139949);
}

double NNfunction-ss_dRcR::synapse0x2bdba60() {
   return (neuron0x2bc9850()*0.0641464);
}

double NNfunction-ss_dRcR::synapse0x2bdbaa0() {
   return (neuron0x2bc9b90()*0.260766);
}

double NNfunction-ss_dRcR::synapse0x2bdbe20() {
   return (neuron0x2bc4fd0()*-0.220393);
}

double NNfunction-ss_dRcR::synapse0x2bdbe60() {
   return (neuron0x2bc5310()*-0.270241);
}

double NNfunction-ss_dRcR::synapse0x2bdbea0() {
   return (neuron0x2bc5650()*-0.442708);
}

double NNfunction-ss_dRcR::synapse0x2bdbee0() {
   return (neuron0x2bc5990()*0.0380482);
}

double NNfunction-ss_dRcR::synapse0x2bdbf20() {
   return (neuron0x2bc5cd0()*0.17814);
}

double NNfunction-ss_dRcR::synapse0x2bdbf60() {
   return (neuron0x2bc6010()*-0.183067);
}

double NNfunction-ss_dRcR::synapse0x2bdbfa0() {
   return (neuron0x2bc6350()*-0.091013);
}

double NNfunction-ss_dRcR::synapse0x2bdbfe0() {
   return (neuron0x2bc6690()*0.118844);
}

double NNfunction-ss_dRcR::synapse0x2bdc020() {
   return (neuron0x2bc69d0()*0.317689);
}

double NNfunction-ss_dRcR::synapse0x2bdc060() {
   return (neuron0x2bc6d10()*0.0629783);
}

double NNfunction-ss_dRcR::synapse0x2bdc0a0() {
   return (neuron0x2bc7050()*0.0311655);
}

double NNfunction-ss_dRcR::synapse0x2bdc0e0() {
   return (neuron0x2bc7390()*0.0637343);
}

double NNfunction-ss_dRcR::synapse0x2bdc120() {
   return (neuron0x2bc76d0()*1.68377);
}

double NNfunction-ss_dRcR::synapse0x2bdc160() {
   return (neuron0x2bc7a10()*0.0593493);
}

double NNfunction-ss_dRcR::synapse0x2bdc1a0() {
   return (neuron0x2bc7d50()*0.488186);
}

double NNfunction-ss_dRcR::synapse0x2bdc1e0() {
   return (neuron0x2bc8090()*-0.112426);
}

double NNfunction-ss_dRcR::synapse0x2bdbc70() {
   return (neuron0x2bc83d0()*0.042361);
}

double NNfunction-ss_dRcR::synapse0x2bdbcb0() {
   return (neuron0x2bc8930()*0.0178932);
}

double NNfunction-ss_dRcR::synapse0x2bdc330() {
   return (neuron0x2bc8b50()*0.245555);
}

double NNfunction-ss_dRcR::synapse0x2bdc370() {
   return (neuron0x2bc8e90()*0.0314951);
}

double NNfunction-ss_dRcR::synapse0x2bdc3b0() {
   return (neuron0x2bc91d0()*-0.331659);
}

double NNfunction-ss_dRcR::synapse0x2bdc3f0() {
   return (neuron0x2bc9510()*0.0471234);
}

double NNfunction-ss_dRcR::synapse0x2bdc430() {
   return (neuron0x2bc9850()*-0.261552);
}

double NNfunction-ss_dRcR::synapse0x2bdc470() {
   return (neuron0x2bc9b90()*-0.0207707);
}

double NNfunction-ss_dRcR::synapse0x2bdc7f0() {
   return (neuron0x2bc4fd0()*0.0797708);
}

double NNfunction-ss_dRcR::synapse0x2bdc830() {
   return (neuron0x2bc5310()*0.448228);
}

double NNfunction-ss_dRcR::synapse0x2bdc870() {
   return (neuron0x2bc5650()*-0.228632);
}

double NNfunction-ss_dRcR::synapse0x2bdc8b0() {
   return (neuron0x2bc5990()*-2.69543);
}

double NNfunction-ss_dRcR::synapse0x2bdc8f0() {
   return (neuron0x2bc5cd0()*0.126881);
}

double NNfunction-ss_dRcR::synapse0x2bdc930() {
   return (neuron0x2bc6010()*-0.0327526);
}

double NNfunction-ss_dRcR::synapse0x2bdc970() {
   return (neuron0x2bc6350()*0.0276248);
}

double NNfunction-ss_dRcR::synapse0x2bdc9b0() {
   return (neuron0x2bc6690()*0.0586034);
}

double NNfunction-ss_dRcR::synapse0x2bdc9f0() {
   return (neuron0x2bc69d0()*0.147768);
}

double NNfunction-ss_dRcR::synapse0x2bdca30() {
   return (neuron0x2bc6d10()*0.255621);
}

double NNfunction-ss_dRcR::synapse0x2bdca70() {
   return (neuron0x2bc7050()*0.164745);
}

double NNfunction-ss_dRcR::synapse0x2bdcab0() {
   return (neuron0x2bc7390()*0.254925);
}

double NNfunction-ss_dRcR::synapse0x2bdcaf0() {
   return (neuron0x2bc76d0()*-0.0228152);
}

double NNfunction-ss_dRcR::synapse0x2bdcb30() {
   return (neuron0x2bc7a10()*0.0469514);
}

double NNfunction-ss_dRcR::synapse0x2bdcb70() {
   return (neuron0x2bc7d50()*0.00380386);
}

double NNfunction-ss_dRcR::synapse0x2bdcbb0() {
   return (neuron0x2bc8090()*0.286009);
}

double NNfunction-ss_dRcR::synapse0x2bdc640() {
   return (neuron0x2bc83d0()*0.0157506);
}

double NNfunction-ss_dRcR::synapse0x2bdc680() {
   return (neuron0x2bc8930()*0.284614);
}

double NNfunction-ss_dRcR::synapse0x2bdcd00() {
   return (neuron0x2bc8b50()*0.18971);
}

double NNfunction-ss_dRcR::synapse0x2bdcd40() {
   return (neuron0x2bc8e90()*-0.0148049);
}

double NNfunction-ss_dRcR::synapse0x2bdcd80() {
   return (neuron0x2bc91d0()*0.0104148);
}

double NNfunction-ss_dRcR::synapse0x2bdcdc0() {
   return (neuron0x2bc9510()*-0.0125287);
}

double NNfunction-ss_dRcR::synapse0x2bdce00() {
   return (neuron0x2bc9850()*0.126353);
}

double NNfunction-ss_dRcR::synapse0x2bdce40() {
   return (neuron0x2bc9b90()*0.206182);
}

double NNfunction-ss_dRcR::synapse0x2bdd1c0() {
   return (neuron0x2bc4fd0()*0.342332);
}

double NNfunction-ss_dRcR::synapse0x2bdd200() {
   return (neuron0x2bc5310()*-0.118713);
}

double NNfunction-ss_dRcR::synapse0x2bdd240() {
   return (neuron0x2bc5650()*0.182761);
}

double NNfunction-ss_dRcR::synapse0x2bdd280() {
   return (neuron0x2bc5990()*0.252111);
}

double NNfunction-ss_dRcR::synapse0x2bdd2c0() {
   return (neuron0x2bc5cd0()*0.27985);
}

double NNfunction-ss_dRcR::synapse0x2bdd300() {
   return (neuron0x2bc6010()*0.352778);
}

double NNfunction-ss_dRcR::synapse0x2bdd340() {
   return (neuron0x2bc6350()*0.102654);
}

double NNfunction-ss_dRcR::synapse0x2bdd380() {
   return (neuron0x2bc6690()*0.138386);
}

double NNfunction-ss_dRcR::synapse0x2bdd3c0() {
   return (neuron0x2bc69d0()*0.226765);
}

double NNfunction-ss_dRcR::synapse0x2bdd400() {
   return (neuron0x2bc6d10()*0.0889748);
}

double NNfunction-ss_dRcR::synapse0x2bdd440() {
   return (neuron0x2bc7050()*0.328106);
}

double NNfunction-ss_dRcR::synapse0x2bdd480() {
   return (neuron0x2bc7390()*-0.375412);
}

double NNfunction-ss_dRcR::synapse0x2bdd4c0() {
   return (neuron0x2bc76d0()*-0.453415);
}

double NNfunction-ss_dRcR::synapse0x2bdd500() {
   return (neuron0x2bc7a10()*-0.0308128);
}

double NNfunction-ss_dRcR::synapse0x2bdd540() {
   return (neuron0x2bc7d50()*-0.138189);
}

double NNfunction-ss_dRcR::synapse0x2bdd580() {
   return (neuron0x2bc8090()*-0.61989);
}

double NNfunction-ss_dRcR::synapse0x2bdd010() {
   return (neuron0x2bc83d0()*0.0356301);
}

double NNfunction-ss_dRcR::synapse0x2bdd050() {
   return (neuron0x2bc8930()*-1.05035);
}

double NNfunction-ss_dRcR::synapse0x2bdd6d0() {
   return (neuron0x2bc8b50()*-0.18502);
}

double NNfunction-ss_dRcR::synapse0x2bdd710() {
   return (neuron0x2bc8e90()*-0.214666);
}

double NNfunction-ss_dRcR::synapse0x2bdd750() {
   return (neuron0x2bc91d0()*0.255599);
}

double NNfunction-ss_dRcR::synapse0x2bdd790() {
   return (neuron0x2bc9510()*-0.142578);
}

double NNfunction-ss_dRcR::synapse0x2bdd7d0() {
   return (neuron0x2bc9850()*-0.0984032);
}

double NNfunction-ss_dRcR::synapse0x2bdd810() {
   return (neuron0x2bc9b90()*-0.0206378);
}

double NNfunction-ss_dRcR::synapse0x2bddb90() {
   return (neuron0x2bc4fd0()*0.0360448);
}

double NNfunction-ss_dRcR::synapse0x2bddbd0() {
   return (neuron0x2bc5310()*0.00215804);
}

double NNfunction-ss_dRcR::synapse0x2bddc10() {
   return (neuron0x2bc5650()*0.0246678);
}

double NNfunction-ss_dRcR::synapse0x2bddc50() {
   return (neuron0x2bc5990()*0.0113523);
}

double NNfunction-ss_dRcR::synapse0x2bddc90() {
   return (neuron0x2bc5cd0()*0.0070497);
}

double NNfunction-ss_dRcR::synapse0x2bddcd0() {
   return (neuron0x2bc6010()*0.00631258);
}

double NNfunction-ss_dRcR::synapse0x2bddd10() {
   return (neuron0x2bc6350()*-0.0104596);
}

double NNfunction-ss_dRcR::synapse0x2bddd50() {
   return (neuron0x2bc6690()*-0.00398965);
}

double NNfunction-ss_dRcR::synapse0x2bddd90() {
   return (neuron0x2bc69d0()*-0.0159752);
}

double NNfunction-ss_dRcR::synapse0x2bdddd0() {
   return (neuron0x2bc6d10()*0.000915452);
}

double NNfunction-ss_dRcR::synapse0x2bdde10() {
   return (neuron0x2bc7050()*0.00368023);
}

double NNfunction-ss_dRcR::synapse0x2bdde50() {
   return (neuron0x2bc7390()*-0.0100403);
}

double NNfunction-ss_dRcR::synapse0x2bdde90() {
   return (neuron0x2bc76d0()*0.0113772);
}

double NNfunction-ss_dRcR::synapse0x2bdded0() {
   return (neuron0x2bc7a10()*0.00301311);
}

double NNfunction-ss_dRcR::synapse0x2bddf10() {
   return (neuron0x2bc7d50()*0.00445702);
}

double NNfunction-ss_dRcR::synapse0x2bddf50() {
   return (neuron0x2bc8090()*-0.329581);
}

double NNfunction-ss_dRcR::synapse0x2bdd9e0() {
   return (neuron0x2bc83d0()*0.0183352);
}

double NNfunction-ss_dRcR::synapse0x2bdda20() {
   return (neuron0x2bc8930()*0.732447);
}

double NNfunction-ss_dRcR::synapse0x2bde0a0() {
   return (neuron0x2bc8b50()*-0.00531908);
}

double NNfunction-ss_dRcR::synapse0x2bde0e0() {
   return (neuron0x2bc8e90()*-0.000711612);
}

double NNfunction-ss_dRcR::synapse0x2bde120() {
   return (neuron0x2bc91d0()*-0.0142372);
}

double NNfunction-ss_dRcR::synapse0x2bde160() {
   return (neuron0x2bc9510()*0.0148734);
}

double NNfunction-ss_dRcR::synapse0x2bde1a0() {
   return (neuron0x2bc9850()*0.0190464);
}

double NNfunction-ss_dRcR::synapse0x2bde1e0() {
   return (neuron0x2bc9b90()*0.0101776);
}

double NNfunction-ss_dRcR::synapse0x2bde560() {
   return (neuron0x2bc4fd0()*0.039392);
}

double NNfunction-ss_dRcR::synapse0x2bde5a0() {
   return (neuron0x2bc5310()*0.521361);
}

double NNfunction-ss_dRcR::synapse0x2bde5e0() {
   return (neuron0x2bc5650()*0.351729);
}

double NNfunction-ss_dRcR::synapse0x2bde620() {
   return (neuron0x2bc5990()*0.413902);
}

double NNfunction-ss_dRcR::synapse0x2bde660() {
   return (neuron0x2bc5cd0()*-0.209043);
}

double NNfunction-ss_dRcR::synapse0x2bde6a0() {
   return (neuron0x2bc6010()*-0.865487);
}

double NNfunction-ss_dRcR::synapse0x2bde6e0() {
   return (neuron0x2bc6350()*-0.705696);
}

double NNfunction-ss_dRcR::synapse0x2bde720() {
   return (neuron0x2bc6690()*0.369536);
}

double NNfunction-ss_dRcR::synapse0x2bde760() {
   return (neuron0x2bc69d0()*-0.179591);
}

double NNfunction-ss_dRcR::synapse0x2bde7a0() {
   return (neuron0x2bc6d10()*0.63228);
}

double NNfunction-ss_dRcR::synapse0x2bde7e0() {
   return (neuron0x2bc7050()*0.32802);
}

double NNfunction-ss_dRcR::synapse0x2bde820() {
   return (neuron0x2bc7390()*0.785423);
}

double NNfunction-ss_dRcR::synapse0x2bde860() {
   return (neuron0x2bc76d0()*0.877531);
}

double NNfunction-ss_dRcR::synapse0x2bde8a0() {
   return (neuron0x2bc7a10()*-0.677021);
}

double NNfunction-ss_dRcR::synapse0x2bde8e0() {
   return (neuron0x2bc7d50()*0.0486679);
}

double NNfunction-ss_dRcR::synapse0x2bde920() {
   return (neuron0x2bc8090()*-0.745182);
}

double NNfunction-ss_dRcR::synapse0x2bde3b0() {
   return (neuron0x2bc83d0()*-0.500344);
}

double NNfunction-ss_dRcR::synapse0x2bde3f0() {
   return (neuron0x2bc8930()*-0.137713);
}

double NNfunction-ss_dRcR::synapse0x2bdea70() {
   return (neuron0x2bc8b50()*1.00194);
}

double NNfunction-ss_dRcR::synapse0x2bdeab0() {
   return (neuron0x2bc8e90()*0.149164);
}

double NNfunction-ss_dRcR::synapse0x2bdeaf0() {
   return (neuron0x2bc91d0()*0.0548128);
}

double NNfunction-ss_dRcR::synapse0x2bdeb30() {
   return (neuron0x2bc9510()*0.208548);
}

double NNfunction-ss_dRcR::synapse0x2bdeb70() {
   return (neuron0x2bc9850()*0.149763);
}

double NNfunction-ss_dRcR::synapse0x2bdebb0() {
   return (neuron0x2bc9b90()*0.0555917);
}

double NNfunction-ss_dRcR::synapse0x2bdef30() {
   return (neuron0x2bc4fd0()*-0.402827);
}

double NNfunction-ss_dRcR::synapse0x2bdef70() {
   return (neuron0x2bc5310()*-0.513997);
}

double NNfunction-ss_dRcR::synapse0x2bdefb0() {
   return (neuron0x2bc5650()*0.43577);
}

double NNfunction-ss_dRcR::synapse0x2bdeff0() {
   return (neuron0x2bc5990()*-0.941318);
}

double NNfunction-ss_dRcR::synapse0x2bdf030() {
   return (neuron0x2bc5cd0()*0.02158);
}

double NNfunction-ss_dRcR::synapse0x2bdf070() {
   return (neuron0x2bc6010()*-0.123281);
}

double NNfunction-ss_dRcR::synapse0x2bdf0b0() {
   return (neuron0x2bc6350()*-1.10454);
}

double NNfunction-ss_dRcR::synapse0x2bdf0f0() {
   return (neuron0x2bc6690()*-0.141981);
}

double NNfunction-ss_dRcR::synapse0x2bdf130() {
   return (neuron0x2bc69d0()*0.742444);
}

double NNfunction-ss_dRcR::synapse0x2bdf170() {
   return (neuron0x2bc6d10()*0.267655);
}

double NNfunction-ss_dRcR::synapse0x2bdf1b0() {
   return (neuron0x2bc7050()*1.14393);
}

double NNfunction-ss_dRcR::synapse0x2bdf1f0() {
   return (neuron0x2bc7390()*0.107953);
}

double NNfunction-ss_dRcR::synapse0x2bdf230() {
   return (neuron0x2bc76d0()*0.0739136);
}

double NNfunction-ss_dRcR::synapse0x2bdf270() {
   return (neuron0x2bc7a10()*-0.576049);
}

double NNfunction-ss_dRcR::synapse0x2bdf2b0() {
   return (neuron0x2bc7d50()*-0.108558);
}

double NNfunction-ss_dRcR::synapse0x2bdf2f0() {
   return (neuron0x2bc8090()*-0.299261);
}

double NNfunction-ss_dRcR::synapse0x2bded80() {
   return (neuron0x2bc83d0()*0.28052);
}

double NNfunction-ss_dRcR::synapse0x2bdedc0() {
   return (neuron0x2bc8930()*-0.253961);
}

double NNfunction-ss_dRcR::synapse0x2bdf440() {
   return (neuron0x2bc8b50()*0.564687);
}

double NNfunction-ss_dRcR::synapse0x2bdf480() {
   return (neuron0x2bc8e90()*0.68492);
}

double NNfunction-ss_dRcR::synapse0x2bdf4c0() {
   return (neuron0x2bc91d0()*-0.0642953);
}

double NNfunction-ss_dRcR::synapse0x2bdf500() {
   return (neuron0x2bc9510()*-0.298335);
}

double NNfunction-ss_dRcR::synapse0x2bdf540() {
   return (neuron0x2bc9850()*0.264893);
}

double NNfunction-ss_dRcR::synapse0x2bdf580() {
   return (neuron0x2bc9b90()*0.303874);
}

double NNfunction-ss_dRcR::synapse0x2bdf900() {
   return (neuron0x2bc4fd0()*-0.387184);
}

double NNfunction-ss_dRcR::synapse0x2bd3ed0() {
   return (neuron0x2bc5310()*0.230309);
}

double NNfunction-ss_dRcR::synapse0x2bd3f10() {
   return (neuron0x2bc5650()*-0.111632);
}

double NNfunction-ss_dRcR::synapse0x2bd3f50() {
   return (neuron0x2bc5990()*0.331525);
}

double NNfunction-ss_dRcR::synapse0x2bd41a0() {
   return (neuron0x2bc5cd0()*-0.498029);
}

double NNfunction-ss_dRcR::synapse0x2bd41e0() {
   return (neuron0x2bc6010()*-0.12994);
}

double NNfunction-ss_dRcR::synapse0x2bd4220() {
   return (neuron0x2bc6350()*-0.0623568);
}

double NNfunction-ss_dRcR::synapse0x2bd4470() {
   return (neuron0x2bc6690()*0.635396);
}

double NNfunction-ss_dRcR::synapse0x2bd44b0() {
   return (neuron0x2bc69d0()*-0.200931);
}

double NNfunction-ss_dRcR::synapse0x2bd4700() {
   return (neuron0x2bc6d10()*-0.483678);
}

double NNfunction-ss_dRcR::synapse0x2bd4740() {
   return (neuron0x2bc7050()*-0.298687);
}

double NNfunction-ss_dRcR::synapse0x2bd4780() {
   return (neuron0x2bc7390()*-0.0145505);
}

double NNfunction-ss_dRcR::synapse0x2bd49d0() {
   return (neuron0x2bc76d0()*0.423216);
}

double NNfunction-ss_dRcR::synapse0x2bd4a10() {
   return (neuron0x2bc7a10()*-0.420984);
}

double NNfunction-ss_dRcR::synapse0x2bd4c60() {
   return (neuron0x2bc7d50()*-0.66058);
}

double NNfunction-ss_dRcR::synapse0x2bd4ca0() {
   return (neuron0x2bc8090()*-0.107576);
}

double NNfunction-ss_dRcR::synapse0x2bdf750() {
   return (neuron0x2bc83d0()*0.260062);
}

double NNfunction-ss_dRcR::synapse0x2bdf790() {
   return (neuron0x2bc8930()*-0.000242252);
}

double NNfunction-ss_dRcR::synapse0x2bd4df0() {
   return (neuron0x2bc8b50()*0.219719);
}

double NNfunction-ss_dRcR::synapse0x2bd5300() {
   return (neuron0x2bc8e90()*-0.837914);
}

double NNfunction-ss_dRcR::synapse0x2bd5340() {
   return (neuron0x2bc91d0()*0.632842);
}

double NNfunction-ss_dRcR::synapse0x2bd5380() {
   return (neuron0x2bc9510()*-0.29852);
}

double NNfunction-ss_dRcR::synapse0x2bd55d0() {
   return (neuron0x2bc9850()*-0.565543);
}

double NNfunction-ss_dRcR::synapse0x2bd5610() {
   return (neuron0x2bc9b90()*0.28616);
}

double NNfunction-ss_dRcR::synapse0x2bd4ec0() {
   return (neuron0x2bc4fd0()*-0.00707093);
}

double NNfunction-ss_dRcR::synapse0x2bd4f00() {
   return (neuron0x2bc5310()*0.471811);
}

double NNfunction-ss_dRcR::synapse0x2bd4f40() {
   return (neuron0x2bc5650()*0.0982255);
}

double NNfunction-ss_dRcR::synapse0x2bd4f80() {
   return (neuron0x2bc5990()*0.248216);
}

double NNfunction-ss_dRcR::synapse0x2bd5900() {
   return (neuron0x2bc5cd0()*0.426366);
}

double NNfunction-ss_dRcR::synapse0x2be1c50() {
   return (neuron0x2bc6010()*0.825395);
}

double NNfunction-ss_dRcR::synapse0x2be1c90() {
   return (neuron0x2bc6350()*0.225993);
}

double NNfunction-ss_dRcR::synapse0x2be1cd0() {
   return (neuron0x2bc6690()*0.304197);
}

double NNfunction-ss_dRcR::synapse0x2be1d10() {
   return (neuron0x2bc69d0()*0.0521595);
}

double NNfunction-ss_dRcR::synapse0x2be1d50() {
   return (neuron0x2bc6d10()*-0.0859972);
}

double NNfunction-ss_dRcR::synapse0x2be1d90() {
   return (neuron0x2bc7050()*-0.356171);
}

double NNfunction-ss_dRcR::synapse0x2be1dd0() {
   return (neuron0x2bc7390()*0.74971);
}

double NNfunction-ss_dRcR::synapse0x2be1e10() {
   return (neuron0x2bc76d0()*0.440981);
}

double NNfunction-ss_dRcR::synapse0x2be1e50() {
   return (neuron0x2bc7a10()*-0.108074);
}

double NNfunction-ss_dRcR::synapse0x2be1e90() {
   return (neuron0x2bc7d50()*-0.137174);
}

double NNfunction-ss_dRcR::synapse0x2be1ed0() {
   return (neuron0x2bc8090()*-1.06532);
}

double NNfunction-ss_dRcR::synapse0x2bd57e0() {
   return (neuron0x2bc83d0()*0.944134);
}

double NNfunction-ss_dRcR::synapse0x2bd5820() {
   return (neuron0x2bc8930()*-0.0146877);
}

double NNfunction-ss_dRcR::synapse0x2be2020() {
   return (neuron0x2bc8b50()*-0.73408);
}

double NNfunction-ss_dRcR::synapse0x2be2060() {
   return (neuron0x2bc8e90()*0.253739);
}

double NNfunction-ss_dRcR::synapse0x2be20a0() {
   return (neuron0x2bc91d0()*-0.765691);
}

double NNfunction-ss_dRcR::synapse0x2be20e0() {
   return (neuron0x2bc9510()*-0.161449);
}

double NNfunction-ss_dRcR::synapse0x2be2120() {
   return (neuron0x2bc9850()*0.608347);
}

double NNfunction-ss_dRcR::synapse0x2be2160() {
   return (neuron0x2bc9b90()*0.128331);
}

double NNfunction-ss_dRcR::synapse0x2be24e0() {
   return (neuron0x2bc4fd0()*-0.00726609);
}

double NNfunction-ss_dRcR::synapse0x2be2520() {
   return (neuron0x2bc5310()*0.0049369);
}

double NNfunction-ss_dRcR::synapse0x2be2560() {
   return (neuron0x2bc5650()*0.0147886);
}

double NNfunction-ss_dRcR::synapse0x2be25a0() {
   return (neuron0x2bc5990()*-0.0318056);
}

double NNfunction-ss_dRcR::synapse0x2be25e0() {
   return (neuron0x2bc5cd0()*-0.0243736);
}

double NNfunction-ss_dRcR::synapse0x2be2620() {
   return (neuron0x2bc6010()*-0.0179035);
}

double NNfunction-ss_dRcR::synapse0x2be2660() {
   return (neuron0x2bc6350()*-0.0372641);
}

double NNfunction-ss_dRcR::synapse0x2be26a0() {
   return (neuron0x2bc6690()*-0.0350306);
}

double NNfunction-ss_dRcR::synapse0x2be26e0() {
   return (neuron0x2bc69d0()*0.027213);
}

double NNfunction-ss_dRcR::synapse0x2be2720() {
   return (neuron0x2bc6d10()*0.0203308);
}

double NNfunction-ss_dRcR::synapse0x2be2760() {
   return (neuron0x2bc7050()*0.0212365);
}

double NNfunction-ss_dRcR::synapse0x2be27a0() {
   return (neuron0x2bc7390()*0.00180758);
}

double NNfunction-ss_dRcR::synapse0x2be27e0() {
   return (neuron0x2bc76d0()*-0.0097256);
}

double NNfunction-ss_dRcR::synapse0x2be2820() {
   return (neuron0x2bc7a10()*0.0183369);
}

double NNfunction-ss_dRcR::synapse0x2be2860() {
   return (neuron0x2bc7d50()*0.00258433);
}

double NNfunction-ss_dRcR::synapse0x2be28a0() {
   return (neuron0x2bc8090()*0.666465);
}

double NNfunction-ss_dRcR::synapse0x2be2330() {
   return (neuron0x2bc83d0()*-0.00252887);
}

double NNfunction-ss_dRcR::synapse0x2be2370() {
   return (neuron0x2bc8930()*-0.295714);
}

double NNfunction-ss_dRcR::synapse0x2be29f0() {
   return (neuron0x2bc8b50()*-0.0119416);
}

double NNfunction-ss_dRcR::synapse0x2be2a30() {
   return (neuron0x2bc8e90()*0.0138965);
}

double NNfunction-ss_dRcR::synapse0x2be2a70() {
   return (neuron0x2bc91d0()*0.00643052);
}

double NNfunction-ss_dRcR::synapse0x2be2ab0() {
   return (neuron0x2bc9510()*0.020695);
}

double NNfunction-ss_dRcR::synapse0x2be2af0() {
   return (neuron0x2bc9850()*0.000966677);
}

double NNfunction-ss_dRcR::synapse0x2be2b30() {
   return (neuron0x2bc9b90()*-0.0091898);
}

double NNfunction-ss_dRcR::synapse0x2be2eb0() {
   return (neuron0x2bc4fd0()*-0.209121);
}

double NNfunction-ss_dRcR::synapse0x2be2ef0() {
   return (neuron0x2bc5310()*-0.513977);
}

double NNfunction-ss_dRcR::synapse0x2be2f30() {
   return (neuron0x2bc5650()*0.394052);
}

double NNfunction-ss_dRcR::synapse0x2be2f70() {
   return (neuron0x2bc5990()*1.19137);
}

double NNfunction-ss_dRcR::synapse0x2be2fb0() {
   return (neuron0x2bc5cd0()*0.098128);
}

double NNfunction-ss_dRcR::synapse0x2be2ff0() {
   return (neuron0x2bc6010()*-0.0833651);
}

double NNfunction-ss_dRcR::synapse0x2be3030() {
   return (neuron0x2bc6350()*0.0329966);
}

double NNfunction-ss_dRcR::synapse0x2be3070() {
   return (neuron0x2bc6690()*0.215974);
}

double NNfunction-ss_dRcR::synapse0x2be30b0() {
   return (neuron0x2bc69d0()*-0.340463);
}

double NNfunction-ss_dRcR::synapse0x2be30f0() {
   return (neuron0x2bc6d10()*-0.144441);
}

double NNfunction-ss_dRcR::synapse0x2be3130() {
   return (neuron0x2bc7050()*-0.442354);
}

double NNfunction-ss_dRcR::synapse0x2be3170() {
   return (neuron0x2bc7390()*0.144168);
}

double NNfunction-ss_dRcR::synapse0x2be31b0() {
   return (neuron0x2bc76d0()*-0.0701551);
}

double NNfunction-ss_dRcR::synapse0x2be31f0() {
   return (neuron0x2bc7a10()*-0.105026);
}

double NNfunction-ss_dRcR::synapse0x2be3230() {
   return (neuron0x2bc7d50()*-0.118142);
}

double NNfunction-ss_dRcR::synapse0x2be3270() {
   return (neuron0x2bc8090()*-0.178956);
}

double NNfunction-ss_dRcR::synapse0x2be2d00() {
   return (neuron0x2bc83d0()*0.416908);
}

double NNfunction-ss_dRcR::synapse0x2be2d40() {
   return (neuron0x2bc8930()*-0.535967);
}

double NNfunction-ss_dRcR::synapse0x2be33c0() {
   return (neuron0x2bc8b50()*0.221626);
}

double NNfunction-ss_dRcR::synapse0x2be3400() {
   return (neuron0x2bc8e90()*0.420655);
}

double NNfunction-ss_dRcR::synapse0x2be3440() {
   return (neuron0x2bc91d0()*0.0308475);
}

double NNfunction-ss_dRcR::synapse0x2be3480() {
   return (neuron0x2bc9510()*0.143292);
}

double NNfunction-ss_dRcR::synapse0x2be34c0() {
   return (neuron0x2bc9850()*-0.324803);
}

double NNfunction-ss_dRcR::synapse0x2be3500() {
   return (neuron0x2bc9b90()*-0.0369415);
}

double NNfunction-ss_dRcR::synapse0x2be3880() {
   return (neuron0x2bc4fd0()*0.322764);
}

double NNfunction-ss_dRcR::synapse0x2be38c0() {
   return (neuron0x2bc5310()*-0.790512);
}

double NNfunction-ss_dRcR::synapse0x2be3900() {
   return (neuron0x2bc5650()*0.131998);
}

double NNfunction-ss_dRcR::synapse0x2be3940() {
   return (neuron0x2bc5990()*0.0222759);
}

double NNfunction-ss_dRcR::synapse0x2be3980() {
   return (neuron0x2bc5cd0()*0.542001);
}

double NNfunction-ss_dRcR::synapse0x2be39c0() {
   return (neuron0x2bc6010()*0.49405);
}

double NNfunction-ss_dRcR::synapse0x2be3a00() {
   return (neuron0x2bc6350()*-0.0507674);
}

double NNfunction-ss_dRcR::synapse0x2be3a40() {
   return (neuron0x2bc6690()*-0.0811336);
}

double NNfunction-ss_dRcR::synapse0x2be3a80() {
   return (neuron0x2bc69d0()*-0.274625);
}

double NNfunction-ss_dRcR::synapse0x2be3ac0() {
   return (neuron0x2bc6d10()*-0.829309);
}

double NNfunction-ss_dRcR::synapse0x2be3b00() {
   return (neuron0x2bc7050()*-0.519943);
}

double NNfunction-ss_dRcR::synapse0x2be3b40() {
   return (neuron0x2bc7390()*-0.178451);
}

double NNfunction-ss_dRcR::synapse0x2be3b80() {
   return (neuron0x2bc76d0()*0.314424);
}

double NNfunction-ss_dRcR::synapse0x2be3bc0() {
   return (neuron0x2bc7a10()*-0.477561);
}

double NNfunction-ss_dRcR::synapse0x2be3c00() {
   return (neuron0x2bc7d50()*0.286407);
}

double NNfunction-ss_dRcR::synapse0x2be3c40() {
   return (neuron0x2bc8090()*-0.448961);
}

double NNfunction-ss_dRcR::synapse0x2be36d0() {
   return (neuron0x2bc83d0()*-0.255476);
}

double NNfunction-ss_dRcR::synapse0x2be3710() {
   return (neuron0x2bc8930()*0.578529);
}

double NNfunction-ss_dRcR::synapse0x2be3d90() {
   return (neuron0x2bc8b50()*0.276548);
}

double NNfunction-ss_dRcR::synapse0x2be3dd0() {
   return (neuron0x2bc8e90()*-0.659412);
}

double NNfunction-ss_dRcR::synapse0x2be3e10() {
   return (neuron0x2bc91d0()*-0.573806);
}

double NNfunction-ss_dRcR::synapse0x2be3e50() {
   return (neuron0x2bc9510()*1.07639);
}

double NNfunction-ss_dRcR::synapse0x2be3e90() {
   return (neuron0x2bc9850()*0.376083);
}

double NNfunction-ss_dRcR::synapse0x2be3ed0() {
   return (neuron0x2bc9b90()*-0.130966);
}

double NNfunction-ss_dRcR::synapse0x2be4250() {
   return (neuron0x2bc4fd0()*0.00163208);
}

double NNfunction-ss_dRcR::synapse0x2be4290() {
   return (neuron0x2bc5310()*0.0146204);
}

double NNfunction-ss_dRcR::synapse0x2be42d0() {
   return (neuron0x2bc5650()*-0.0199575);
}

double NNfunction-ss_dRcR::synapse0x2be4310() {
   return (neuron0x2bc5990()*0.713406);
}

double NNfunction-ss_dRcR::synapse0x2be4350() {
   return (neuron0x2bc5cd0()*-0.0247888);
}

double NNfunction-ss_dRcR::synapse0x2be4390() {
   return (neuron0x2bc6010()*-0.0109932);
}

double NNfunction-ss_dRcR::synapse0x2be43d0() {
   return (neuron0x2bc6350()*-0.0209704);
}

double NNfunction-ss_dRcR::synapse0x2be4410() {
   return (neuron0x2bc6690()*-0.0222445);
}

double NNfunction-ss_dRcR::synapse0x2be4450() {
   return (neuron0x2bc69d0()*-0.00862498);
}

double NNfunction-ss_dRcR::synapse0x2be4490() {
   return (neuron0x2bc6d10()*0.0162993);
}

double NNfunction-ss_dRcR::synapse0x2be44d0() {
   return (neuron0x2bc7050()*0.00174731);
}

double NNfunction-ss_dRcR::synapse0x2be4510() {
   return (neuron0x2bc7390()*0.0251287);
}

double NNfunction-ss_dRcR::synapse0x2be4550() {
   return (neuron0x2bc76d0()*0.0188709);
}

double NNfunction-ss_dRcR::synapse0x2be4590() {
   return (neuron0x2bc7a10()*-0.00271989);
}

double NNfunction-ss_dRcR::synapse0x2be45d0() {
   return (neuron0x2bc7d50()*0.0164855);
}

double NNfunction-ss_dRcR::synapse0x2be4610() {
   return (neuron0x2bc8090()*-0.039772);
}

double NNfunction-ss_dRcR::synapse0x2be40a0() {
   return (neuron0x2bc83d0()*-0.0112945);
}

double NNfunction-ss_dRcR::synapse0x2be40e0() {
   return (neuron0x2bc8930()*0.0031404);
}

double NNfunction-ss_dRcR::synapse0x2be4760() {
   return (neuron0x2bc8b50()*0.0158842);
}

double NNfunction-ss_dRcR::synapse0x2be47a0() {
   return (neuron0x2bc8e90()*-0.00192942);
}

double NNfunction-ss_dRcR::synapse0x2be47e0() {
   return (neuron0x2bc91d0()*-0.00928247);
}

double NNfunction-ss_dRcR::synapse0x2be4820() {
   return (neuron0x2bc9510()*0.00911419);
}

double NNfunction-ss_dRcR::synapse0x2be4860() {
   return (neuron0x2bc9850()*0.00886954);
}

double NNfunction-ss_dRcR::synapse0x2be48a0() {
   return (neuron0x2bc9b90()*0.00325929);
}

double NNfunction-ss_dRcR::synapse0x2be4c20() {
   return (neuron0x2bc4fd0()*0.243531);
}

double NNfunction-ss_dRcR::synapse0x2be4c60() {
   return (neuron0x2bc5310()*0.719288);
}

double NNfunction-ss_dRcR::synapse0x2be4ca0() {
   return (neuron0x2bc5650()*-0.302639);
}

double NNfunction-ss_dRcR::synapse0x2be4ce0() {
   return (neuron0x2bc5990()*0.919612);
}

double NNfunction-ss_dRcR::synapse0x2be4d20() {
   return (neuron0x2bc5cd0()*-0.0293203);
}

double NNfunction-ss_dRcR::synapse0x2be4d60() {
   return (neuron0x2bc6010()*-0.0998398);
}

double NNfunction-ss_dRcR::synapse0x2be4da0() {
   return (neuron0x2bc6350()*0.362077);
}

double NNfunction-ss_dRcR::synapse0x2be4de0() {
   return (neuron0x2bc6690()*0.0572917);
}

double NNfunction-ss_dRcR::synapse0x2be4e20() {
   return (neuron0x2bc69d0()*-0.302553);
}

double NNfunction-ss_dRcR::synapse0x2be4e60() {
   return (neuron0x2bc6d10()*-0.261621);
}

double NNfunction-ss_dRcR::synapse0x2be4ea0() {
   return (neuron0x2bc7050()*0.0259239);
}

double NNfunction-ss_dRcR::synapse0x2be4ee0() {
   return (neuron0x2bc7390()*-1.2107);
}

double NNfunction-ss_dRcR::synapse0x2be4f20() {
   return (neuron0x2bc76d0()*0.241244);
}

double NNfunction-ss_dRcR::synapse0x2be4f60() {
   return (neuron0x2bc7a10()*0.577079);
}

double NNfunction-ss_dRcR::synapse0x2be4fa0() {
   return (neuron0x2bc7d50()*-0.260546);
}

double NNfunction-ss_dRcR::synapse0x2be4fe0() {
   return (neuron0x2bc8090()*-0.170589);
}

double NNfunction-ss_dRcR::synapse0x2be4a70() {
   return (neuron0x2bc83d0()*0.425484);
}

double NNfunction-ss_dRcR::synapse0x2be4ab0() {
   return (neuron0x2bc8930()*0.458327);
}

double NNfunction-ss_dRcR::synapse0x2be5130() {
   return (neuron0x2bc8b50()*-0.149571);
}

double NNfunction-ss_dRcR::synapse0x2be5170() {
   return (neuron0x2bc8e90()*-0.49399);
}

double NNfunction-ss_dRcR::synapse0x2be51b0() {
   return (neuron0x2bc91d0()*-0.543792);
}

double NNfunction-ss_dRcR::synapse0x2be51f0() {
   return (neuron0x2bc9510()*0.774879);
}

double NNfunction-ss_dRcR::synapse0x2be5230() {
   return (neuron0x2bc9850()*0.287668);
}

double NNfunction-ss_dRcR::synapse0x2be5270() {
   return (neuron0x2bc9b90()*-0.354265);
}

double NNfunction-ss_dRcR::synapse0x2be55f0() {
   return (neuron0x2bc4fd0()*0.229659);
}

double NNfunction-ss_dRcR::synapse0x2be5630() {
   return (neuron0x2bc5310()*-0.278788);
}

double NNfunction-ss_dRcR::synapse0x2be5670() {
   return (neuron0x2bc5650()*0.433214);
}

double NNfunction-ss_dRcR::synapse0x2be56b0() {
   return (neuron0x2bc5990()*0.374395);
}

double NNfunction-ss_dRcR::synapse0x2be56f0() {
   return (neuron0x2bc5cd0()*0.678115);
}

double NNfunction-ss_dRcR::synapse0x2be5730() {
   return (neuron0x2bc6010()*0.256228);
}

double NNfunction-ss_dRcR::synapse0x2be5770() {
   return (neuron0x2bc6350()*-0.21537);
}

double NNfunction-ss_dRcR::synapse0x2be57b0() {
   return (neuron0x2bc6690()*-0.798294);
}

double NNfunction-ss_dRcR::synapse0x2be57f0() {
   return (neuron0x2bc69d0()*-0.014076);
}

double NNfunction-ss_dRcR::synapse0x2be5830() {
   return (neuron0x2bc6d10()*0.714416);
}

double NNfunction-ss_dRcR::synapse0x2be5870() {
   return (neuron0x2bc7050()*0.520009);
}

double NNfunction-ss_dRcR::synapse0x2be58b0() {
   return (neuron0x2bc7390()*-0.153435);
}

double NNfunction-ss_dRcR::synapse0x2be58f0() {
   return (neuron0x2bc76d0()*-0.71917);
}

double NNfunction-ss_dRcR::synapse0x2be5930() {
   return (neuron0x2bc7a10()*0.822446);
}

double NNfunction-ss_dRcR::synapse0x2be5970() {
   return (neuron0x2bc7d50()*0.437399);
}

double NNfunction-ss_dRcR::synapse0x2be59b0() {
   return (neuron0x2bc8090()*0.561357);
}

double NNfunction-ss_dRcR::synapse0x2be5440() {
   return (neuron0x2bc83d0()*-0.146723);
}

double NNfunction-ss_dRcR::synapse0x2be5480() {
   return (neuron0x2bc8930()*0.00381572);
}

double NNfunction-ss_dRcR::synapse0x2be5b00() {
   return (neuron0x2bc8b50()*0.305109);
}

double NNfunction-ss_dRcR::synapse0x2be5b40() {
   return (neuron0x2bc8e90()*1.4921);
}

double NNfunction-ss_dRcR::synapse0x2be5b80() {
   return (neuron0x2bc91d0()*-1.20744);
}

double NNfunction-ss_dRcR::synapse0x2be5bc0() {
   return (neuron0x2bc9510()*0.376462);
}

double NNfunction-ss_dRcR::synapse0x2be5c00() {
   return (neuron0x2bc9850()*0.963453);
}

double NNfunction-ss_dRcR::synapse0x2be5c40() {
   return (neuron0x2bc9b90()*0.199227);
}

double NNfunction-ss_dRcR::synapse0x2be5fc0() {
   return (neuron0x2bc4fd0()*-0.396213);
}

double NNfunction-ss_dRcR::synapse0x2be6000() {
   return (neuron0x2bc5310()*0.397736);
}

double NNfunction-ss_dRcR::synapse0x2be6040() {
   return (neuron0x2bc5650()*0.0139663);
}

double NNfunction-ss_dRcR::synapse0x2be6080() {
   return (neuron0x2bc5990()*0.769465);
}

double NNfunction-ss_dRcR::synapse0x2be60c0() {
   return (neuron0x2bc5cd0()*-0.371358);
}

double NNfunction-ss_dRcR::synapse0x2be6100() {
   return (neuron0x2bc6010()*-0.470494);
}

double NNfunction-ss_dRcR::synapse0x2be6140() {
   return (neuron0x2bc6350()*0.833952);
}

double NNfunction-ss_dRcR::synapse0x2be6180() {
   return (neuron0x2bc6690()*0.353998);
}

double NNfunction-ss_dRcR::synapse0x2be61c0() {
   return (neuron0x2bc69d0()*0.587033);
}

double NNfunction-ss_dRcR::synapse0x2be6200() {
   return (neuron0x2bc6d10()*0.324446);
}

double NNfunction-ss_dRcR::synapse0x2be6240() {
   return (neuron0x2bc7050()*0.0542358);
}

double NNfunction-ss_dRcR::synapse0x2be6280() {
   return (neuron0x2bc7390()*0.413266);
}

double NNfunction-ss_dRcR::synapse0x2be62c0() {
   return (neuron0x2bc76d0()*0.15658);
}

double NNfunction-ss_dRcR::synapse0x2be6300() {
   return (neuron0x2bc7a10()*0.695291);
}

double NNfunction-ss_dRcR::synapse0x2be6340() {
   return (neuron0x2bc7d50()*-0.069077);
}

double NNfunction-ss_dRcR::synapse0x2be6380() {
   return (neuron0x2bc8090()*-0.638013);
}

double NNfunction-ss_dRcR::synapse0x2be5e10() {
   return (neuron0x2bc83d0()*-0.0055132);
}

double NNfunction-ss_dRcR::synapse0x2be5e50() {
   return (neuron0x2bc8930()*0.0404208);
}

double NNfunction-ss_dRcR::synapse0x2be64d0() {
   return (neuron0x2bc8b50()*0.0355494);
}

double NNfunction-ss_dRcR::synapse0x2be6510() {
   return (neuron0x2bc8e90()*-0.126175);
}

double NNfunction-ss_dRcR::synapse0x2be6550() {
   return (neuron0x2bc91d0()*0.293125);
}

double NNfunction-ss_dRcR::synapse0x2be6590() {
   return (neuron0x2bc9510()*0.128359);
}

double NNfunction-ss_dRcR::synapse0x2be65d0() {
   return (neuron0x2bc9850()*-0.0822166);
}

double NNfunction-ss_dRcR::synapse0x2be6610() {
   return (neuron0x2bc9b90()*-0.232784);
}

double NNfunction-ss_dRcR::synapse0x2bcf0c0() {
   return (neuron0x2bc4fd0()*0.101563);
}

double NNfunction-ss_dRcR::synapse0x2bcf100() {
   return (neuron0x2bc5310()*-0.204115);
}

double NNfunction-ss_dRcR::synapse0x2bcf140() {
   return (neuron0x2bc5650()*0.123622);
}

double NNfunction-ss_dRcR::synapse0x2bcf180() {
   return (neuron0x2bc5990()*-0.968815);
}

double NNfunction-ss_dRcR::synapse0x2bcf1c0() {
   return (neuron0x2bc5cd0()*0.125112);
}

double NNfunction-ss_dRcR::synapse0x2bcf200() {
   return (neuron0x2bc6010()*-0.183668);
}

double NNfunction-ss_dRcR::synapse0x2bcf240() {
   return (neuron0x2bc6350()*0.0643687);
}

double NNfunction-ss_dRcR::synapse0x2bcf280() {
   return (neuron0x2bc6690()*-0.291059);
}

double NNfunction-ss_dRcR::synapse0x2be6da0() {
   return (neuron0x2bc69d0()*-0.417876);
}

double NNfunction-ss_dRcR::synapse0x2be6de0() {
   return (neuron0x2bc6d10()*-0.419476);
}

double NNfunction-ss_dRcR::synapse0x2be6e20() {
   return (neuron0x2bc7050()*-0.529408);
}

double NNfunction-ss_dRcR::synapse0x2be6e60() {
   return (neuron0x2bc7390()*0.102856);
}

double NNfunction-ss_dRcR::synapse0x2be6ea0() {
   return (neuron0x2bc76d0()*0.926095);
}

double NNfunction-ss_dRcR::synapse0x2be6ee0() {
   return (neuron0x2bc7a10()*-0.385009);
}

double NNfunction-ss_dRcR::synapse0x2be6f20() {
   return (neuron0x2bc7d50()*0.46079);
}

double NNfunction-ss_dRcR::synapse0x2be6f60() {
   return (neuron0x2bc8090()*0.182308);
}

double NNfunction-ss_dRcR::synapse0x2be67e0() {
   return (neuron0x2bc83d0()*0.022863);
}

double NNfunction-ss_dRcR::synapse0x2be6820() {
   return (neuron0x2bc8930()*0.374082);
}

double NNfunction-ss_dRcR::synapse0x2be70b0() {
   return (neuron0x2bc8b50()*-0.0665218);
}

double NNfunction-ss_dRcR::synapse0x2be70f0() {
   return (neuron0x2bc8e90()*-0.128292);
}

double NNfunction-ss_dRcR::synapse0x2be7130() {
   return (neuron0x2bc91d0()*-0.432531);
}

double NNfunction-ss_dRcR::synapse0x2be7170() {
   return (neuron0x2bc9510()*0.125129);
}

double NNfunction-ss_dRcR::synapse0x2be71b0() {
   return (neuron0x2bc9850()*0.0226408);
}

double NNfunction-ss_dRcR::synapse0x2be71f0() {
   return (neuron0x2bc9b90()*0.22929);
}

double NNfunction-ss_dRcR::synapse0x2be7570() {
   return (neuron0x2bc4fd0()*-0.0392986);
}

double NNfunction-ss_dRcR::synapse0x2be75b0() {
   return (neuron0x2bc5310()*0.324811);
}

double NNfunction-ss_dRcR::synapse0x2be75f0() {
   return (neuron0x2bc5650()*0.354579);
}

double NNfunction-ss_dRcR::synapse0x2be7630() {
   return (neuron0x2bc5990()*-0.58674);
}

double NNfunction-ss_dRcR::synapse0x2be7670() {
   return (neuron0x2bc5cd0()*-0.420069);
}

double NNfunction-ss_dRcR::synapse0x2be76b0() {
   return (neuron0x2bc6010()*-0.146394);
}

double NNfunction-ss_dRcR::synapse0x2be76f0() {
   return (neuron0x2bc6350()*-0.0915011);
}

double NNfunction-ss_dRcR::synapse0x2be7730() {
   return (neuron0x2bc6690()*-0.496015);
}

double NNfunction-ss_dRcR::synapse0x2be7770() {
   return (neuron0x2bc69d0()*-0.643512);
}

double NNfunction-ss_dRcR::synapse0x2be77b0() {
   return (neuron0x2bc6d10()*-0.186321);
}

double NNfunction-ss_dRcR::synapse0x2be77f0() {
   return (neuron0x2bc7050()*-0.179205);
}

double NNfunction-ss_dRcR::synapse0x2be7830() {
   return (neuron0x2bc7390()*0.803757);
}

double NNfunction-ss_dRcR::synapse0x2be7870() {
   return (neuron0x2bc76d0()*0.495596);
}

double NNfunction-ss_dRcR::synapse0x2be78b0() {
   return (neuron0x2bc7a10()*0.543522);
}

double NNfunction-ss_dRcR::synapse0x2be78f0() {
   return (neuron0x2bc7d50()*0.0777286);
}

double NNfunction-ss_dRcR::synapse0x2be7930() {
   return (neuron0x2bc8090()*0.779136);
}

double NNfunction-ss_dRcR::synapse0x2be73c0() {
   return (neuron0x2bc83d0()*0.389649);
}

double NNfunction-ss_dRcR::synapse0x2be7400() {
   return (neuron0x2bc8930()*0.608509);
}

double NNfunction-ss_dRcR::synapse0x2be7a80() {
   return (neuron0x2bc8b50()*0.188531);
}

double NNfunction-ss_dRcR::synapse0x2be7ac0() {
   return (neuron0x2bc8e90()*0.128878);
}

double NNfunction-ss_dRcR::synapse0x2be7b00() {
   return (neuron0x2bc91d0()*-0.154346);
}

double NNfunction-ss_dRcR::synapse0x2be7b40() {
   return (neuron0x2bc9510()*0.298717);
}

double NNfunction-ss_dRcR::synapse0x2be7b80() {
   return (neuron0x2bc9850()*-0.115512);
}

double NNfunction-ss_dRcR::synapse0x2be7bc0() {
   return (neuron0x2bc9b90()*-0.247708);
}

double NNfunction-ss_dRcR::synapse0x2be7f40() {
   return (neuron0x2bc4fd0()*0.00321705);
}

double NNfunction-ss_dRcR::synapse0x2be7f80() {
   return (neuron0x2bc5310()*0.0433674);
}

double NNfunction-ss_dRcR::synapse0x2be7fc0() {
   return (neuron0x2bc5650()*-0.0491024);
}

double NNfunction-ss_dRcR::synapse0x2be8000() {
   return (neuron0x2bc5990()*6.94539);
}

double NNfunction-ss_dRcR::synapse0x2be8040() {
   return (neuron0x2bc5cd0()*-0.0119515);
}

double NNfunction-ss_dRcR::synapse0x2be8080() {
   return (neuron0x2bc6010()*-0.0123243);
}

double NNfunction-ss_dRcR::synapse0x2be80c0() {
   return (neuron0x2bc6350()*0.0237043);
}

double NNfunction-ss_dRcR::synapse0x2be8100() {
   return (neuron0x2bc6690()*-0.0160381);
}

double NNfunction-ss_dRcR::synapse0x2be8140() {
   return (neuron0x2bc69d0()*-0.0164443);
}

double NNfunction-ss_dRcR::synapse0x2be8180() {
   return (neuron0x2bc6d10()*-0.0014814);
}

double NNfunction-ss_dRcR::synapse0x2be81c0() {
   return (neuron0x2bc7050()*-0.00485101);
}

double NNfunction-ss_dRcR::synapse0x2be8200() {
   return (neuron0x2bc7390()*0.00579192);
}

double NNfunction-ss_dRcR::synapse0x2be8240() {
   return (neuron0x2bc76d0()*-0.0472068);
}

double NNfunction-ss_dRcR::synapse0x2be8280() {
   return (neuron0x2bc7a10()*-0.0154764);
}

double NNfunction-ss_dRcR::synapse0x2be82c0() {
   return (neuron0x2bc7d50()*0.0117524);
}

double NNfunction-ss_dRcR::synapse0x2be8300() {
   return (neuron0x2bc8090()*0.169451);
}

double NNfunction-ss_dRcR::synapse0x2be7d90() {
   return (neuron0x2bc83d0()*0.0114769);
}

double NNfunction-ss_dRcR::synapse0x2be7dd0() {
   return (neuron0x2bc8930()*0.148136);
}

double NNfunction-ss_dRcR::synapse0x2bd8900() {
   return (neuron0x2bc8b50()*0.00717893);
}

double NNfunction-ss_dRcR::synapse0x2bd8940() {
   return (neuron0x2bc8e90()*-0.0496385);
}

double NNfunction-ss_dRcR::synapse0x2bd8980() {
   return (neuron0x2bc91d0()*0.00856605);
}

double NNfunction-ss_dRcR::synapse0x2bd89c0() {
   return (neuron0x2bc9510()*-0.0271088);
}

double NNfunction-ss_dRcR::synapse0x2bd8a00() {
   return (neuron0x2bc9850()*-0.000625445);
}

double NNfunction-ss_dRcR::synapse0x2bd8a40() {
   return (neuron0x2bc9b90()*0.0317371);
}

double NNfunction-ss_dRcR::synapse0x2bd8dc0() {
   return (neuron0x2bc4fd0()*0.0788883);
}

double NNfunction-ss_dRcR::synapse0x2bd8e00() {
   return (neuron0x2bc5310()*-0.21013);
}

double NNfunction-ss_dRcR::synapse0x2bd8e40() {
   return (neuron0x2bc5650()*0.097852);
}

double NNfunction-ss_dRcR::synapse0x2bd8e80() {
   return (neuron0x2bc5990()*0.239738);
}

double NNfunction-ss_dRcR::synapse0x2bd8ec0() {
   return (neuron0x2bc5cd0()*-0.0438302);
}

double NNfunction-ss_dRcR::synapse0x2bd8f00() {
   return (neuron0x2bc6010()*0.327853);
}

double NNfunction-ss_dRcR::synapse0x2bd8f40() {
   return (neuron0x2bc6350()*0.116393);
}

double NNfunction-ss_dRcR::synapse0x2bd8f80() {
   return (neuron0x2bc6690()*-0.524396);
}

double NNfunction-ss_dRcR::synapse0x2bd8fc0() {
   return (neuron0x2bc69d0()*-0.0633107);
}

double NNfunction-ss_dRcR::synapse0x2bd9000() {
   return (neuron0x2bc6d10()*-0.0793164);
}

double NNfunction-ss_dRcR::synapse0x2bd9040() {
   return (neuron0x2bc7050()*0.260163);
}

double NNfunction-ss_dRcR::synapse0x2bd9080() {
   return (neuron0x2bc7390()*-0.214127);
}

double NNfunction-ss_dRcR::synapse0x2bd90c0() {
   return (neuron0x2bc76d0()*-0.231845);
}

double NNfunction-ss_dRcR::synapse0x2bd9100() {
   return (neuron0x2bc7a10()*0.0914525);
}

double NNfunction-ss_dRcR::synapse0x2bd9140() {
   return (neuron0x2bc7d50()*-0.22842);
}

double NNfunction-ss_dRcR::synapse0x2bd9180() {
   return (neuron0x2bc8090()*0.388399);
}

double NNfunction-ss_dRcR::synapse0x2bd8c10() {
   return (neuron0x2bc83d0()*-0.0957478);
}

double NNfunction-ss_dRcR::synapse0x2bd8c50() {
   return (neuron0x2bc8930()*-0.353891);
}

double NNfunction-ss_dRcR::synapse0x2bd92d0() {
   return (neuron0x2bc8b50()*0.124309);
}

double NNfunction-ss_dRcR::synapse0x2bd9310() {
   return (neuron0x2bc8e90()*0.361701);
}

double NNfunction-ss_dRcR::synapse0x2bd9350() {
   return (neuron0x2bc91d0()*-0.183188);
}

double NNfunction-ss_dRcR::synapse0x2bd9390() {
   return (neuron0x2bc9510()*-0.398358);
}

double NNfunction-ss_dRcR::synapse0x2bd93d0() {
   return (neuron0x2bc9850()*0.0873761);
}

double NNfunction-ss_dRcR::synapse0x2bd9410() {
   return (neuron0x2bc9b90()*-0.297641);
}

double NNfunction-ss_dRcR::synapse0x2bd9790() {
   return (neuron0x2bc4fd0()*-0.0163833);
}

double NNfunction-ss_dRcR::synapse0x2bd97d0() {
   return (neuron0x2bc5310()*0.0142089);
}

double NNfunction-ss_dRcR::synapse0x2bd9810() {
   return (neuron0x2bc5650()*0.131424);
}

double NNfunction-ss_dRcR::synapse0x2bd9850() {
   return (neuron0x2bc5990()*-5.22115);
}

double NNfunction-ss_dRcR::synapse0x2bd9890() {
   return (neuron0x2bc5cd0()*-0.0919109);
}

double NNfunction-ss_dRcR::synapse0x2bd98d0() {
   return (neuron0x2bc6010()*0.102202);
}

double NNfunction-ss_dRcR::synapse0x2bd9910() {
   return (neuron0x2bc6350()*-0.0805018);
}

double NNfunction-ss_dRcR::synapse0x2bd9950() {
   return (neuron0x2bc6690()*0.0274994);
}

double NNfunction-ss_dRcR::synapse0x2bd9990() {
   return (neuron0x2bc69d0()*0.0927011);
}

double NNfunction-ss_dRcR::synapse0x2bd99d0() {
   return (neuron0x2bc6d10()*-0.0324091);
}

double NNfunction-ss_dRcR::synapse0x2bd9a10() {
   return (neuron0x2bc7050()*0.0377807);
}

double NNfunction-ss_dRcR::synapse0x2bd9a50() {
   return (neuron0x2bc7390()*-0.113919);
}

double NNfunction-ss_dRcR::synapse0x2bd9a90() {
   return (neuron0x2bc76d0()*0.0147307);
}

double NNfunction-ss_dRcR::synapse0x2bd9ad0() {
   return (neuron0x2bc7a10()*0.0168872);
}

double NNfunction-ss_dRcR::synapse0x2bd9b10() {
   return (neuron0x2bc7d50()*-0.0298568);
}

double NNfunction-ss_dRcR::synapse0x2bd9b50() {
   return (neuron0x2bc8090()*1.67916);
}

double NNfunction-ss_dRcR::synapse0x2bd95e0() {
   return (neuron0x2bc83d0()*-0.000659781);
}

double NNfunction-ss_dRcR::synapse0x2bd9620() {
   return (neuron0x2bc8930()*-0.131028);
}

double NNfunction-ss_dRcR::synapse0x2bd9ca0() {
   return (neuron0x2bc8b50()*-0.018061);
}

double NNfunction-ss_dRcR::synapse0x2bd9ce0() {
   return (neuron0x2bc8e90()*0.104761);
}

double NNfunction-ss_dRcR::synapse0x2bd9d20() {
   return (neuron0x2bc91d0()*0.0296469);
}

double NNfunction-ss_dRcR::synapse0x2bd9d60() {
   return (neuron0x2bc9510()*0.00858034);
}

double NNfunction-ss_dRcR::synapse0x2bd9da0() {
   return (neuron0x2bc9850()*-0.0897051);
}

double NNfunction-ss_dRcR::synapse0x2bd9de0() {
   return (neuron0x2bc9b90()*0.018773);
}

double NNfunction-ss_dRcR::synapse0x2bda160() {
   return (neuron0x2bc4fd0()*0.00115331);
}

double NNfunction-ss_dRcR::synapse0x2bda1a0() {
   return (neuron0x2bc5310()*0.0126389);
}

double NNfunction-ss_dRcR::synapse0x2bda1e0() {
   return (neuron0x2bc5650()*-0.0222534);
}

double NNfunction-ss_dRcR::synapse0x2bda220() {
   return (neuron0x2bc5990()*-1.84869);
}

double NNfunction-ss_dRcR::synapse0x2bda260() {
   return (neuron0x2bc5cd0()*0.0515615);
}

double NNfunction-ss_dRcR::synapse0x2bda2a0() {
   return (neuron0x2bc6010()*0.00477159);
}

double NNfunction-ss_dRcR::synapse0x2bda2e0() {
   return (neuron0x2bc6350()*0.0303804);
}

double NNfunction-ss_dRcR::synapse0x2bda320() {
   return (neuron0x2bc6690()*0.00631156);
}

double NNfunction-ss_dRcR::synapse0x2bda360() {
   return (neuron0x2bc69d0()*0.00649102);
}

double NNfunction-ss_dRcR::synapse0x2bda3a0() {
   return (neuron0x2bc6d10()*-0.0398441);
}

double NNfunction-ss_dRcR::synapse0x2bda3e0() {
   return (neuron0x2bc7050()*-0.048444);
}

double NNfunction-ss_dRcR::synapse0x2bda420() {
   return (neuron0x2bc7390()*-0.0290853);
}

double NNfunction-ss_dRcR::synapse0x2bda460() {
   return (neuron0x2bc76d0()*-0.00412777);
}

double NNfunction-ss_dRcR::synapse0x2bda4a0() {
   return (neuron0x2bc7a10()*0.0271746);
}

double NNfunction-ss_dRcR::synapse0x2bda4e0() {
   return (neuron0x2bc7d50()*0.00509701);
}

double NNfunction-ss_dRcR::synapse0x2bda520() {
   return (neuron0x2bc8090()*0.088363);
}

double NNfunction-ss_dRcR::synapse0x2bd9fb0() {
   return (neuron0x2bc83d0()*0.0189118);
}

double NNfunction-ss_dRcR::synapse0x2bd9ff0() {
   return (neuron0x2bc8930()*0.0188035);
}

double NNfunction-ss_dRcR::synapse0x2bda670() {
   return (neuron0x2bc8b50()*0.002389);
}

double NNfunction-ss_dRcR::synapse0x2bda6b0() {
   return (neuron0x2bc8e90()*-0.0193472);
}

double NNfunction-ss_dRcR::synapse0x2bda6f0() {
   return (neuron0x2bc91d0()*-0.020065);
}

double NNfunction-ss_dRcR::synapse0x2bda730() {
   return (neuron0x2bc9510()*3.49851e-05);
}

double NNfunction-ss_dRcR::synapse0x2bda770() {
   return (neuron0x2bc9850()*-0.0217279);
}

double NNfunction-ss_dRcR::synapse0x2bda7b0() {
   return (neuron0x2bc9b90()*-0.0245898);
}

double NNfunction-ss_dRcR::synapse0x2bec680() {
   return (neuron0x2bc4fd0()*0.161171);
}

double NNfunction-ss_dRcR::synapse0x2bec6c0() {
   return (neuron0x2bc5310()*0.0564017);
}

double NNfunction-ss_dRcR::synapse0x2bec700() {
   return (neuron0x2bc5650()*0.896955);
}

double NNfunction-ss_dRcR::synapse0x2bec740() {
   return (neuron0x2bc5990()*0.515713);
}

double NNfunction-ss_dRcR::synapse0x2bec780() {
   return (neuron0x2bc5cd0()*-0.447593);
}

double NNfunction-ss_dRcR::synapse0x2bec7c0() {
   return (neuron0x2bc6010()*-0.702976);
}

double NNfunction-ss_dRcR::synapse0x2bec800() {
   return (neuron0x2bc6350()*-0.687405);
}

double NNfunction-ss_dRcR::synapse0x2bec840() {
   return (neuron0x2bc6690()*-0.336578);
}

double NNfunction-ss_dRcR::synapse0x2bec880() {
   return (neuron0x2bc69d0()*0.629159);
}

double NNfunction-ss_dRcR::synapse0x2bec8c0() {
   return (neuron0x2bc6d10()*0.0557337);
}

double NNfunction-ss_dRcR::synapse0x2bec900() {
   return (neuron0x2bc7050()*1.0657);
}

double NNfunction-ss_dRcR::synapse0x2bec940() {
   return (neuron0x2bc7390()*0.0941433);
}

double NNfunction-ss_dRcR::synapse0x2bec980() {
   return (neuron0x2bc76d0()*0.0759482);
}

double NNfunction-ss_dRcR::synapse0x2bec9c0() {
   return (neuron0x2bc7a10()*0.196959);
}

double NNfunction-ss_dRcR::synapse0x2beca00() {
   return (neuron0x2bc7d50()*0.0292749);
}

double NNfunction-ss_dRcR::synapse0x2beca40() {
   return (neuron0x2bc8090()*-0.539578);
}

double NNfunction-ss_dRcR::synapse0x2bda7f0() {
   return (neuron0x2bc83d0()*0.153335);
}

double NNfunction-ss_dRcR::synapse0x2bda830() {
   return (neuron0x2bc8930()*-0.910419);
}

double NNfunction-ss_dRcR::synapse0x2becb90() {
   return (neuron0x2bc8b50()*0.296201);
}

double NNfunction-ss_dRcR::synapse0x2becbd0() {
   return (neuron0x2bc8e90()*0.0939901);
}

double NNfunction-ss_dRcR::synapse0x2becc10() {
   return (neuron0x2bc91d0()*-0.33187);
}

double NNfunction-ss_dRcR::synapse0x2becc50() {
   return (neuron0x2bc9510()*0.0226946);
}

double NNfunction-ss_dRcR::synapse0x2becc90() {
   return (neuron0x2bc9850()*0.461049);
}

double NNfunction-ss_dRcR::synapse0x2beccd0() {
   return (neuron0x2bc9b90()*-0.262392);
}

double NNfunction-ss_dRcR::synapse0x2bed050() {
   return (neuron0x2bc4fd0()*0.194228);
}

double NNfunction-ss_dRcR::synapse0x2bed090() {
   return (neuron0x2bc5310()*0.79961);
}

double NNfunction-ss_dRcR::synapse0x2bed0d0() {
   return (neuron0x2bc5650()*1.39732);
}

double NNfunction-ss_dRcR::synapse0x2bed110() {
   return (neuron0x2bc5990()*-0.366462);
}

double NNfunction-ss_dRcR::synapse0x2bed150() {
   return (neuron0x2bc5cd0()*0.981773);
}

double NNfunction-ss_dRcR::synapse0x2bed190() {
   return (neuron0x2bc6010()*0.946323);
}

double NNfunction-ss_dRcR::synapse0x2bed1d0() {
   return (neuron0x2bc6350()*0.909059);
}

double NNfunction-ss_dRcR::synapse0x2bed210() {
   return (neuron0x2bc6690()*0.527919);
}

double NNfunction-ss_dRcR::synapse0x2bed250() {
   return (neuron0x2bc69d0()*0.466389);
}

double NNfunction-ss_dRcR::synapse0x2bed290() {
   return (neuron0x2bc6d10()*-0.00746845);
}

double NNfunction-ss_dRcR::synapse0x2bed2d0() {
   return (neuron0x2bc7050()*0.11752);
}

double NNfunction-ss_dRcR::synapse0x2bed310() {
   return (neuron0x2bc7390()*-0.574174);
}

double NNfunction-ss_dRcR::synapse0x2bed350() {
   return (neuron0x2bc76d0()*-0.663627);
}

double NNfunction-ss_dRcR::synapse0x2bed390() {
   return (neuron0x2bc7a10()*-0.112127);
}

double NNfunction-ss_dRcR::synapse0x2bed3d0() {
   return (neuron0x2bc7d50()*-0.184644);
}

double NNfunction-ss_dRcR::synapse0x2bed410() {
   return (neuron0x2bc8090()*0.522361);
}

double NNfunction-ss_dRcR::synapse0x2becea0() {
   return (neuron0x2bc83d0()*0.174647);
}

double NNfunction-ss_dRcR::synapse0x2becee0() {
   return (neuron0x2bc8930()*-0.782062);
}

double NNfunction-ss_dRcR::synapse0x2bed560() {
   return (neuron0x2bc8b50()*0.0677357);
}

double NNfunction-ss_dRcR::synapse0x2bed5a0() {
   return (neuron0x2bc8e90()*-0.341736);
}

double NNfunction-ss_dRcR::synapse0x2bed5e0() {
   return (neuron0x2bc91d0()*1.23167);
}

double NNfunction-ss_dRcR::synapse0x2bed620() {
   return (neuron0x2bc9510()*-0.478434);
}

double NNfunction-ss_dRcR::synapse0x2bed660() {
   return (neuron0x2bc9850()*-0.283937);
}

double NNfunction-ss_dRcR::synapse0x2bed6a0() {
   return (neuron0x2bc9b90()*0.147824);
}

double NNfunction-ss_dRcR::synapse0x2beda20() {
   return (neuron0x2bc4fd0()*-0.21547);
}

double NNfunction-ss_dRcR::synapse0x2beda60() {
   return (neuron0x2bc5310()*0.414393);
}

double NNfunction-ss_dRcR::synapse0x2bedaa0() {
   return (neuron0x2bc5650()*-0.13272);
}

double NNfunction-ss_dRcR::synapse0x2bedae0() {
   return (neuron0x2bc5990()*1.21905);
}

double NNfunction-ss_dRcR::synapse0x2bedb20() {
   return (neuron0x2bc5cd0()*0.15516);
}

double NNfunction-ss_dRcR::synapse0x2bedb60() {
   return (neuron0x2bc6010()*-0.0180461);
}

double NNfunction-ss_dRcR::synapse0x2bedba0() {
   return (neuron0x2bc6350()*0.138457);
}

double NNfunction-ss_dRcR::synapse0x2bedbe0() {
   return (neuron0x2bc6690()*0.125983);
}

double NNfunction-ss_dRcR::synapse0x2bedc20() {
   return (neuron0x2bc69d0()*0.0547203);
}

double NNfunction-ss_dRcR::synapse0x2bedc60() {
   return (neuron0x2bc6d10()*-0.00414518);
}

double NNfunction-ss_dRcR::synapse0x2bedca0() {
   return (neuron0x2bc7050()*-0.199828);
}

double NNfunction-ss_dRcR::synapse0x2bedce0() {
   return (neuron0x2bc7390()*-0.0101938);
}

double NNfunction-ss_dRcR::synapse0x2bedd20() {
   return (neuron0x2bc76d0()*0.0908997);
}

double NNfunction-ss_dRcR::synapse0x2bedd60() {
   return (neuron0x2bc7a10()*0.166272);
}

double NNfunction-ss_dRcR::synapse0x2bedda0() {
   return (neuron0x2bc7d50()*-0.146658);
}

double NNfunction-ss_dRcR::synapse0x2bedde0() {
   return (neuron0x2bc8090()*0.34334);
}

double NNfunction-ss_dRcR::synapse0x2bed870() {
   return (neuron0x2bc83d0()*-0.442741);
}

double NNfunction-ss_dRcR::synapse0x2bed8b0() {
   return (neuron0x2bc8930()*-0.423258);
}

double NNfunction-ss_dRcR::synapse0x2bedf30() {
   return (neuron0x2bc8b50()*0.340194);
}

double NNfunction-ss_dRcR::synapse0x2bedf70() {
   return (neuron0x2bc8e90()*0.644781);
}

double NNfunction-ss_dRcR::synapse0x2bedfb0() {
   return (neuron0x2bc91d0()*0.087143);
}

double NNfunction-ss_dRcR::synapse0x2bedff0() {
   return (neuron0x2bc9510()*-0.289324);
}

double NNfunction-ss_dRcR::synapse0x2bee030() {
   return (neuron0x2bc9850()*0.162414);
}

double NNfunction-ss_dRcR::synapse0x2bee070() {
   return (neuron0x2bc9b90()*0.519679);
}

double NNfunction-ss_dRcR::synapse0x2bee3f0() {
   return (neuron0x2bc4fd0()*1.32325e-05);
}

double NNfunction-ss_dRcR::synapse0x2bee430() {
   return (neuron0x2bc5310()*0.00183998);
}

double NNfunction-ss_dRcR::synapse0x2bee470() {
   return (neuron0x2bc5650()*0.0136169);
}

double NNfunction-ss_dRcR::synapse0x2bee4b0() {
   return (neuron0x2bc5990()*-1.01997);
}

double NNfunction-ss_dRcR::synapse0x2bee4f0() {
   return (neuron0x2bc5cd0()*-0.00426838);
}

double NNfunction-ss_dRcR::synapse0x2bee530() {
   return (neuron0x2bc6010()*0.000683337);
}

double NNfunction-ss_dRcR::synapse0x2bee570() {
   return (neuron0x2bc6350()*0.00622428);
}

double NNfunction-ss_dRcR::synapse0x2bee5b0() {
   return (neuron0x2bc6690()*0.0100484);
}

double NNfunction-ss_dRcR::synapse0x2bee5f0() {
   return (neuron0x2bc69d0()*0.00552744);
}

double NNfunction-ss_dRcR::synapse0x2bee630() {
   return (neuron0x2bc6d10()*0.00500927);
}

double NNfunction-ss_dRcR::synapse0x2bee670() {
   return (neuron0x2bc7050()*0.00319652);
}

double NNfunction-ss_dRcR::synapse0x2bee6b0() {
   return (neuron0x2bc7390()*0.020455);
}

double NNfunction-ss_dRcR::synapse0x2bee6f0() {
   return (neuron0x2bc76d0()*0.0109914);
}

double NNfunction-ss_dRcR::synapse0x2bee730() {
   return (neuron0x2bc7a10()*0.00424819);
}

double NNfunction-ss_dRcR::synapse0x2bee770() {
   return (neuron0x2bc7d50()*0.00511468);
}

double NNfunction-ss_dRcR::synapse0x2bee7b0() {
   return (neuron0x2bc8090()*-0.0667568);
}

double NNfunction-ss_dRcR::synapse0x2bee240() {
   return (neuron0x2bc83d0()*0.00184888);
}

double NNfunction-ss_dRcR::synapse0x2bee280() {
   return (neuron0x2bc8930()*-0.0664411);
}

double NNfunction-ss_dRcR::synapse0x2bee900() {
   return (neuron0x2bc8b50()*0.00933118);
}

double NNfunction-ss_dRcR::synapse0x2bee940() {
   return (neuron0x2bc8e90()*0.00392605);
}

double NNfunction-ss_dRcR::synapse0x2bee980() {
   return (neuron0x2bc91d0()*0.00642598);
}

double NNfunction-ss_dRcR::synapse0x2bee9c0() {
   return (neuron0x2bc9510()*0.00561237);
}

double NNfunction-ss_dRcR::synapse0x2beea00() {
   return (neuron0x2bc9850()*-0.00629045);
}

double NNfunction-ss_dRcR::synapse0x2beea40() {
   return (neuron0x2bc9b90()*0.0116972);
}

double NNfunction-ss_dRcR::synapse0x2bcafe0() {
   return (neuron0x2bca030()*1.08429);
}

double NNfunction-ss_dRcR::synapse0x2bcb020() {
   return (neuron0x2bca940()*1.44127);
}

double NNfunction-ss_dRcR::synapse0x2bcc4f0() {
   return (neuron0x2bcb420()*-2.80228);
}

double NNfunction-ss_dRcR::synapse0x2bcc530() {
   return (neuron0x298e7f0()*1.86043);
}

double NNfunction-ss_dRcR::synapse0x2bccec0() {
   return (neuron0x2bcc240()*-0.814496);
}

double NNfunction-ss_dRcR::synapse0x2bccf00() {
   return (neuron0x2bccc10()*0.972612);
}

double NNfunction-ss_dRcR::synapse0x2bcdc90() {
   return (neuron0x2bcd9e0()*-1.73628);
}

double NNfunction-ss_dRcR::synapse0x2bcdcd0() {
   return (neuron0x2bce3b0()*-0.960952);
}

double NNfunction-ss_dRcR::synapse0x2bce660() {
   return (neuron0x2bced80()*-0.736564);
}

double NNfunction-ss_dRcR::synapse0x2bce6a0() {
   return (neuron0x2bcf860()*1.11822);
}

double NNfunction-ss_dRcR::synapse0x2bcf030() {
   return (neuron0x2bd0230()*-2.35054);
}

double NNfunction-ss_dRcR::synapse0x2bcf070() {
   return (neuron0x2bcd310()*-0.82415);
}

double NNfunction-ss_dRcR::synapse0x2bcfb10() {
   return (neuron0x2bd1de0()*-1.44628);
}

double NNfunction-ss_dRcR::synapse0x2bcfb50() {
   return (neuron0x2bd27b0()*-2.87911);
}

double NNfunction-ss_dRcR::synapse0x2bd04e0() {
   return (neuron0x2bd3180()*1.61362);
}

double NNfunction-ss_dRcR::synapse0x2bd0520() {
   return (neuron0x2bd3b50()*0.907661);
}

double NNfunction-ss_dRcR::synapse0x2bcd5c0() {
   return (neuron0x2bd5960()*-1.31926);
}

double NNfunction-ss_dRcR::synapse0x2bcd600() {
   return (neuron0x2bd5c40()*0.572403);
}

double NNfunction-ss_dRcR::synapse0x2bd2090() {
   return (neuron0x2bd6610()*-0.65196);
}

double NNfunction-ss_dRcR::synapse0x2bd20d0() {
   return (neuron0x2bd6fe0()*1.88822);
}

double NNfunction-ss_dRcR::synapse0x2bd2a60() {
   return (neuron0x2bd79b0()*1.04598);
}

double NNfunction-ss_dRcR::synapse0x2bd2aa0() {
   return (neuron0x2bd8380()*0.638599);
}

double NNfunction-ss_dRcR::synapse0x2bd3430() {
   return (neuron0x2bd0ed0()*0.873298);
}

double NNfunction-ss_dRcR::synapse0x2bd3470() {
   return (neuron0x2bd18a0()*-1.4849);
}

double NNfunction-ss_dRcR::synapse0x2bd3e00() {
   return (neuron0x2bdb110()*-0.994804);
}

double NNfunction-ss_dRcR::synapse0x2bd3e40() {
   return (neuron0x2bdbae0()*0.386289);
}

double NNfunction-ss_dRcR::synapse0x2bc7f70() {
   return (neuron0x2bdc4b0()*2.7834);
}

double NNfunction-ss_dRcR::synapse0x2bc7fb0() {
   return (neuron0x2bdce80()*-1.48007);
}

double NNfunction-ss_dRcR::synapse0x2bd5ef0() {
   return (neuron0x2bdd850()*0.701667);
}

double NNfunction-ss_dRcR::synapse0x2bd5f30() {
   return (neuron0x2bde220()*0.118246);
}

double NNfunction-ss_dRcR::synapse0x2bd68c0() {
   return (neuron0x2bdebf0()*-1.15074);
}

double NNfunction-ss_dRcR::synapse0x2bd6900() {
   return (neuron0x2bdf5c0()*2.02291);
}

double NNfunction-ss_dRcR::synapse0x2bd7290() {
   return (neuron0x2bd5650()*-0.938673);
}

double NNfunction-ss_dRcR::synapse0x2bd72d0() {
   return (neuron0x2be21a0()*0.562975);
}

double NNfunction-ss_dRcR::synapse0x2bd7c60() {
   return (neuron0x2be2b70()*1.71947);
}

double NNfunction-ss_dRcR::synapse0x2bd7ca0() {
   return (neuron0x2be3540()*0.967726);
}

double NNfunction-ss_dRcR::synapse0x2bd8630() {
   return (neuron0x2be3f10()*1.77133);
}

double NNfunction-ss_dRcR::synapse0x2bd8670() {
   return (neuron0x2be48e0()*-1.31955);
}

double NNfunction-ss_dRcR::synapse0x2bd1180() {
   return (neuron0x2be52b0()*1.453);
}

double NNfunction-ss_dRcR::synapse0x2bd11c0() {
   return (neuron0x2be5c80()*1.4872);
}

double NNfunction-ss_dRcR::synapse0x2bdaa30() {
   return (neuron0x2be6650()*-1.05827);
}

double NNfunction-ss_dRcR::synapse0x2bdaa70() {
   return (neuron0x2be7230()*-0.658824);
}

double NNfunction-ss_dRcR::synapse0x2bdb3c0() {
   return (neuron0x2be7c00()*5.39384);
}

double NNfunction-ss_dRcR::synapse0x2bdb400() {
   return (neuron0x2bd8a80()*1.12915);
}

double NNfunction-ss_dRcR::synapse0x2bdbd90() {
   return (neuron0x2bd9450()*2.49484);
}

double NNfunction-ss_dRcR::synapse0x2bdbdd0() {
   return (neuron0x2bd9e20()*-0.0291369);
}

double NNfunction-ss_dRcR::synapse0x2bdc760() {
   return (neuron0x2bec460()*1.1798);
}

double NNfunction-ss_dRcR::synapse0x2bdc7a0() {
   return (neuron0x2becd10()*0.563314);
}

double NNfunction-ss_dRcR::synapse0x2bdd130() {
   return (neuron0x2bed6e0()*0.83728);
}

double NNfunction-ss_dRcR::synapse0x2bdd170() {
   return (neuron0x2bee0b0()*-1.63537);
}

double NNfunction-ss_dRcR::synapse0x2bdf870() {
   return (neuron0x2bca030()*0.473403);
}

double NNfunction-ss_dRcR::synapse0x2bdf8b0() {
   return (neuron0x2bca940()*0.507453);
}

double NNfunction-ss_dRcR::synapse0x2bd4e30() {
   return (neuron0x2bcb420()*0.462397);
}

double NNfunction-ss_dRcR::synapse0x2bd4e70() {
   return (neuron0x298e7f0()*0.0745397);
}

double NNfunction-ss_dRcR::synapse0x2be2450() {
   return (neuron0x2bcc240()*0.54479);
}

double NNfunction-ss_dRcR::synapse0x2be2490() {
   return (neuron0x2bccc10()*0.460901);
}

double NNfunction-ss_dRcR::synapse0x2be2e20() {
   return (neuron0x2bcd9e0()*0.373978);
}

double NNfunction-ss_dRcR::synapse0x2be2e60() {
   return (neuron0x2bce3b0()*0.522067);
}

double NNfunction-ss_dRcR::synapse0x2be37f0() {
   return (neuron0x2bced80()*-0.320162);
}

double NNfunction-ss_dRcR::synapse0x2be3830() {
   return (neuron0x2bcf860()*0.00632191);
}

double NNfunction-ss_dRcR::synapse0x2be41c0() {
   return (neuron0x2bd0230()*0.26318);
}

double NNfunction-ss_dRcR::synapse0x2be4200() {
   return (neuron0x2bcd310()*0.381199);
}

double NNfunction-ss_dRcR::synapse0x2be4b90() {
   return (neuron0x2bd1de0()*-0.0347843);
}

double NNfunction-ss_dRcR::synapse0x2be4bd0() {
   return (neuron0x2bd27b0()*0.407677);
}

double NNfunction-ss_dRcR::synapse0x2be5560() {
   return (neuron0x2bd3180()*0.0918694);
}

double NNfunction-ss_dRcR::synapse0x2be55a0() {
   return (neuron0x2bd3b50()*0.365316);
}

double NNfunction-ss_dRcR::synapse0x2be5f30() {
   return (neuron0x2bd5960()*-0.16425);
}

double NNfunction-ss_dRcR::synapse0x2be5f70() {
   return (neuron0x2bd5c40()*0.124872);
}

double NNfunction-ss_dRcR::synapse0x2be6900() {
   return (neuron0x2bd6610()*0.45143);
}

double NNfunction-ss_dRcR::synapse0x2be6940() {
   return (neuron0x2bd6fe0()*0.273718);
}

double NNfunction-ss_dRcR::synapse0x2be74e0() {
   return (neuron0x2bd79b0()*0.0319212);
}

double NNfunction-ss_dRcR::synapse0x2be7520() {
   return (neuron0x2bd8380()*0.184857);
}

double NNfunction-ss_dRcR::synapse0x2be7eb0() {
   return (neuron0x2bd0ed0()*0.476633);
}

double NNfunction-ss_dRcR::synapse0x2be7ef0() {
   return (neuron0x2bd18a0()*0.311097);
}

double NNfunction-ss_dRcR::synapse0x2bd8d30() {
   return (neuron0x2bdb110()*0.199493);
}

double NNfunction-ss_dRcR::synapse0x2bd8d70() {
   return (neuron0x2bdbae0()*0.386213);
}

double NNfunction-ss_dRcR::synapse0x2bd9700() {
   return (neuron0x2bdc4b0()*0.176676);
}

double NNfunction-ss_dRcR::synapse0x2bd9740() {
   return (neuron0x2bdce80()*-0.130704);
}

double NNfunction-ss_dRcR::synapse0x2bda0d0() {
   return (neuron0x2bdd850()*0.3146);
}

double NNfunction-ss_dRcR::synapse0x2bda110() {
   return (neuron0x2bde220()*-0.108041);
}

double NNfunction-ss_dRcR::synapse0x2bec5f0() {
   return (neuron0x2bdebf0()*0.544381);
}

double NNfunction-ss_dRcR::synapse0x2bec630() {
   return (neuron0x2bdf5c0()*-0.0723597);
}

double NNfunction-ss_dRcR::synapse0x2becfc0() {
   return (neuron0x2bd5650()*0.505716);
}

double NNfunction-ss_dRcR::synapse0x2bed000() {
   return (neuron0x2be21a0()*0.289873);
}

double NNfunction-ss_dRcR::synapse0x2bed990() {
   return (neuron0x2be2b70()*-0.0168096);
}

double NNfunction-ss_dRcR::synapse0x2bed9d0() {
   return (neuron0x2be3540()*-0.16873);
}

double NNfunction-ss_dRcR::synapse0x2bee360() {
   return (neuron0x2be3f10()*0.117524);
}

double NNfunction-ss_dRcR::synapse0x2bee3a0() {
   return (neuron0x2be48e0()*-0.24968);
}

double NNfunction-ss_dRcR::synapse0x2bca250() {
   return (neuron0x2be52b0()*0.268547);
}

double NNfunction-ss_dRcR::synapse0x2bca290() {
   return (neuron0x2be5c80()*-0.163082);
}

double NNfunction-ss_dRcR::synapse0x2bddb00() {
   return (neuron0x2be6650()*0.422403);
}

double NNfunction-ss_dRcR::synapse0x2bddb40() {
   return (neuron0x2be7230()*0.599922);
}

double NNfunction-ss_dRcR::synapse0x2beea80() {
   return (neuron0x2be7c00()*0.519164);
}

double NNfunction-ss_dRcR::synapse0x2beeac0() {
   return (neuron0x2bd8a80()*0.668817);
}

double NNfunction-ss_dRcR::synapse0x2beeb00() {
   return (neuron0x2bd9450()*0.0214305);
}

double NNfunction-ss_dRcR::synapse0x2beeb40() {
   return (neuron0x2bd9e20()*0.31805);
}

double NNfunction-ss_dRcR::synapse0x2bf59f0() {
   return (neuron0x2bec460()*0.371833);
}

double NNfunction-ss_dRcR::synapse0x2bf5a30() {
   return (neuron0x2becd10()*-0.00592943);
}

double NNfunction-ss_dRcR::synapse0x2bf5a70() {
   return (neuron0x2bed6e0()*0.523838);
}

double NNfunction-ss_dRcR::synapse0x2bf5ab0() {
   return (neuron0x2bee0b0()*-0.216002);
}

double NNfunction-ss_dRcR::synapse0x2bf5e30() {
   return (neuron0x2bca030()*-0.0580487);
}

double NNfunction-ss_dRcR::synapse0x2bf5e70() {
   return (neuron0x2bca940()*-0.229374);
}

double NNfunction-ss_dRcR::synapse0x2bf5eb0() {
   return (neuron0x2bcb420()*0.0616508);
}

double NNfunction-ss_dRcR::synapse0x2bf5ef0() {
   return (neuron0x298e7f0()*0.0132669);
}

double NNfunction-ss_dRcR::synapse0x2bf5f30() {
   return (neuron0x2bcc240()*0.0672486);
}

double NNfunction-ss_dRcR::synapse0x2bf5f70() {
   return (neuron0x2bccc10()*-0.0118258);
}

double NNfunction-ss_dRcR::synapse0x2bf5fb0() {
   return (neuron0x2bcd9e0()*-0.181954);
}

double NNfunction-ss_dRcR::synapse0x2bf5ff0() {
   return (neuron0x2bce3b0()*-0.00101645);
}

double NNfunction-ss_dRcR::synapse0x2bf6030() {
   return (neuron0x2bced80()*-0.0486177);
}

double NNfunction-ss_dRcR::synapse0x2bf6070() {
   return (neuron0x2bcf860()*0.0509913);
}

double NNfunction-ss_dRcR::synapse0x2bf60b0() {
   return (neuron0x2bd0230()*-0.204235);
}

double NNfunction-ss_dRcR::synapse0x2bf60f0() {
   return (neuron0x2bcd310()*0.00963149);
}

double NNfunction-ss_dRcR::synapse0x2bf6130() {
   return (neuron0x2bd1de0()*-0.442638);
}

double NNfunction-ss_dRcR::synapse0x2bf6170() {
   return (neuron0x2bd27b0()*0.776509);
}

double NNfunction-ss_dRcR::synapse0x2bf61b0() {
   return (neuron0x2bd3180()*-0.0570353);
}

double NNfunction-ss_dRcR::synapse0x2bf61f0() {
   return (neuron0x2bd3b50()*0.0631721);
}

double NNfunction-ss_dRcR::synapse0x2bf5c80() {
   return (neuron0x2bd5960()*-0.248545);
}

double NNfunction-ss_dRcR::synapse0x2bf5cc0() {
   return (neuron0x2bd5c40()*-0.0629413);
}

double NNfunction-ss_dRcR::synapse0x2bf6340() {
   return (neuron0x2bd6610()*0.671251);
}

double NNfunction-ss_dRcR::synapse0x2bf6380() {
   return (neuron0x2bd6fe0()*-0.000695786);
}

double NNfunction-ss_dRcR::synapse0x2bf63c0() {
   return (neuron0x2bd79b0()*0.18752);
}

double NNfunction-ss_dRcR::synapse0x2bf6400() {
   return (neuron0x2bd8380()*-0.0491185);
}

double NNfunction-ss_dRcR::synapse0x2bf6440() {
   return (neuron0x2bd0ed0()*-0.00161766);
}

double NNfunction-ss_dRcR::synapse0x2bf6480() {
   return (neuron0x2bd18a0()*-0.19297);
}

double NNfunction-ss_dRcR::synapse0x2bf64c0() {
   return (neuron0x2bdb110()*0.0690936);
}

double NNfunction-ss_dRcR::synapse0x2bf6500() {
   return (neuron0x2bdbae0()*-0.0724762);
}

double NNfunction-ss_dRcR::synapse0x2bf6540() {
   return (neuron0x2bdc4b0()*0.159866);
}

double NNfunction-ss_dRcR::synapse0x2bf6580() {
   return (neuron0x2bdce80()*0.199142);
}

double NNfunction-ss_dRcR::synapse0x2bf65c0() {
   return (neuron0x2bdd850()*-0.900846);
}

double NNfunction-ss_dRcR::synapse0x2bf6600() {
   return (neuron0x2bde220()*-0.0666987);
}

double NNfunction-ss_dRcR::synapse0x2bf6640() {
   return (neuron0x2bdebf0()*0.043687);
}

double NNfunction-ss_dRcR::synapse0x2bf6680() {
   return (neuron0x2bdf5c0()*0.0613139);
}

double NNfunction-ss_dRcR::synapse0x2bf6230() {
   return (neuron0x2bd5650()*-0.0459138);
}

double NNfunction-ss_dRcR::synapse0x2bf6270() {
   return (neuron0x2be21a0()*-0.966046);
}

double NNfunction-ss_dRcR::synapse0x2bf62b0() {
   return (neuron0x2be2b70()*0.036945);
}

double NNfunction-ss_dRcR::synapse0x2bf62f0() {
   return (neuron0x2be3540()*-0.0214228);
}

double NNfunction-ss_dRcR::synapse0x2bf68d0() {
   return (neuron0x2be3f10()*1.79723);
}

double NNfunction-ss_dRcR::synapse0x2bf6910() {
   return (neuron0x2be48e0()*0.0247967);
}

double NNfunction-ss_dRcR::synapse0x2bf6950() {
   return (neuron0x2be52b0()*0.0273175);
}

double NNfunction-ss_dRcR::synapse0x2bf6990() {
   return (neuron0x2be5c80()*-0.00109654);
}

double NNfunction-ss_dRcR::synapse0x2bf69d0() {
   return (neuron0x2be6650()*0.0836631);
}

double NNfunction-ss_dRcR::synapse0x2bf6a10() {
   return (neuron0x2be7230()*0.0343946);
}

double NNfunction-ss_dRcR::synapse0x2bf6a50() {
   return (neuron0x2be7c00()*-0.797051);
}

double NNfunction-ss_dRcR::synapse0x2bf6a90() {
   return (neuron0x2bd8a80()*-0.0531306);
}

double NNfunction-ss_dRcR::synapse0x2bf6ad0() {
   return (neuron0x2bd9450()*-0.0347362);
}

double NNfunction-ss_dRcR::synapse0x2bf6b10() {
   return (neuron0x2bd9e20()*-4.47889);
}

double NNfunction-ss_dRcR::synapse0x2bf6b50() {
   return (neuron0x2bec460()*-0.00944324);
}

double NNfunction-ss_dRcR::synapse0x2bf6b90() {
   return (neuron0x2becd10()*-0.046027);
}

double NNfunction-ss_dRcR::synapse0x2bf6bd0() {
   return (neuron0x2bed6e0()*-0.193765);
}

double NNfunction-ss_dRcR::synapse0x2bf6c10() {
   return (neuron0x2bee0b0()*3.49243);
}

double NNfunction-ss_dRcR::synapse0x2bf6f90() {
   return (neuron0x2bca030()*-0.689171);
}

double NNfunction-ss_dRcR::synapse0x2bf6fd0() {
   return (neuron0x2bca940()*-0.367837);
}

double NNfunction-ss_dRcR::synapse0x2bf7010() {
   return (neuron0x2bcb420()*-0.15714);
}

double NNfunction-ss_dRcR::synapse0x2bf7050() {
   return (neuron0x298e7f0()*1.44288);
}

double NNfunction-ss_dRcR::synapse0x2bf7090() {
   return (neuron0x2bcc240()*-0.515608);
}

double NNfunction-ss_dRcR::synapse0x2bf70d0() {
   return (neuron0x2bccc10()*-0.023789);
}

double NNfunction-ss_dRcR::synapse0x2bf7110() {
   return (neuron0x2bcd9e0()*-0.150359);
}

double NNfunction-ss_dRcR::synapse0x2bf7150() {
   return (neuron0x2bce3b0()*-1.34391);
}

double NNfunction-ss_dRcR::synapse0x2bf7190() {
   return (neuron0x2bced80()*-2.23554);
}

double NNfunction-ss_dRcR::synapse0x2bf71d0() {
   return (neuron0x2bcf860()*0.368681);
}

double NNfunction-ss_dRcR::synapse0x2bf7210() {
   return (neuron0x2bd0230()*0.362818);
}

double NNfunction-ss_dRcR::synapse0x2bf7250() {
   return (neuron0x2bcd310()*1.13723);
}

double NNfunction-ss_dRcR::synapse0x2bf7290() {
   return (neuron0x2bd1de0()*-1.09925);
}

double NNfunction-ss_dRcR::synapse0x2bf72d0() {
   return (neuron0x2bd27b0()*0.217949);
}

double NNfunction-ss_dRcR::synapse0x2bf7310() {
   return (neuron0x2bd3180()*-0.0192154);
}

double NNfunction-ss_dRcR::synapse0x2bf7350() {
   return (neuron0x2bd3b50()*-0.305814);
}

double NNfunction-ss_dRcR::synapse0x2bf6de0() {
   return (neuron0x2bd5960()*0.0471622);
}

double NNfunction-ss_dRcR::synapse0x2bf6e20() {
   return (neuron0x2bd5c40()*-0.46834);
}

double NNfunction-ss_dRcR::synapse0x2bf74a0() {
   return (neuron0x2bd6610()*-0.271017);
}

double NNfunction-ss_dRcR::synapse0x2bf74e0() {
   return (neuron0x2bd6fe0()*-0.852073);
}

double NNfunction-ss_dRcR::synapse0x2bf7520() {
   return (neuron0x2bd79b0()*0.107564);
}

double NNfunction-ss_dRcR::synapse0x2bf7560() {
   return (neuron0x2bd8380()*-1.07525);
}

double NNfunction-ss_dRcR::synapse0x2bf75a0() {
   return (neuron0x2bd0ed0()*-1.10704);
}

double NNfunction-ss_dRcR::synapse0x2bf75e0() {
   return (neuron0x2bd18a0()*-0.541025);
}

double NNfunction-ss_dRcR::synapse0x2bf7620() {
   return (neuron0x2bdb110()*0.148669);
}

double NNfunction-ss_dRcR::synapse0x2bf7660() {
   return (neuron0x2bdbae0()*0.914487);
}

double NNfunction-ss_dRcR::synapse0x2bf76a0() {
   return (neuron0x2bdc4b0()*0.165221);
}

double NNfunction-ss_dRcR::synapse0x2bf76e0() {
   return (neuron0x2bdce80()*0.051715);
}

double NNfunction-ss_dRcR::synapse0x2bf7720() {
   return (neuron0x2bdd850()*-1.80836);
}

double NNfunction-ss_dRcR::synapse0x2bf7760() {
   return (neuron0x2bde220()*-1.49127);
}

double NNfunction-ss_dRcR::synapse0x2bf77a0() {
   return (neuron0x2bdebf0()*-1.19467);
}

double NNfunction-ss_dRcR::synapse0x2bf77e0() {
   return (neuron0x2bdf5c0()*-0.386492);
}

double NNfunction-ss_dRcR::synapse0x2bf7390() {
   return (neuron0x2bd5650()*-1.65219);
}

double NNfunction-ss_dRcR::synapse0x2bf73d0() {
   return (neuron0x2be21a0()*-0.454053);
}

double NNfunction-ss_dRcR::synapse0x2bf7410() {
   return (neuron0x2be2b70()*0.659532);
}

double NNfunction-ss_dRcR::synapse0x2bf7450() {
   return (neuron0x2be3540()*0.0835714);
}

double NNfunction-ss_dRcR::synapse0x2bf7a30() {
   return (neuron0x2be3f10()*0.141348);
}

double NNfunction-ss_dRcR::synapse0x2bf7a70() {
   return (neuron0x2be48e0()*-0.326283);
}

double NNfunction-ss_dRcR::synapse0x2bf7ab0() {
   return (neuron0x2be52b0()*0.0378178);
}

double NNfunction-ss_dRcR::synapse0x2bf7af0() {
   return (neuron0x2be5c80()*-0.0327305);
}

double NNfunction-ss_dRcR::synapse0x2bf7b30() {
   return (neuron0x2be6650()*-1.02233);
}

double NNfunction-ss_dRcR::synapse0x2bf7b70() {
   return (neuron0x2be7230()*0.80555);
}

double NNfunction-ss_dRcR::synapse0x2bf7bb0() {
   return (neuron0x2be7c00()*1.98233);
}

double NNfunction-ss_dRcR::synapse0x2bf7bf0() {
   return (neuron0x2bd8a80()*-0.538351);
}

double NNfunction-ss_dRcR::synapse0x2bf7c30() {
   return (neuron0x2bd9450()*-1.06889);
}

double NNfunction-ss_dRcR::synapse0x2bf7c70() {
   return (neuron0x2bd9e20()*-0.707732);
}

double NNfunction-ss_dRcR::synapse0x2bf7cb0() {
   return (neuron0x2bec460()*0.626403);
}

double NNfunction-ss_dRcR::synapse0x2bf7cf0() {
   return (neuron0x2becd10()*-1.87497);
}

double NNfunction-ss_dRcR::synapse0x2bf7d30() {
   return (neuron0x2bed6e0()*0.385712);
}

double NNfunction-ss_dRcR::synapse0x2bf7d70() {
   return (neuron0x2bee0b0()*0.799852);
}

double NNfunction-ss_dRcR::synapse0x2bf80f0() {
   return (neuron0x2bca030()*-0.419935);
}

double NNfunction-ss_dRcR::synapse0x2bf8130() {
   return (neuron0x2bca940()*0.0765398);
}

double NNfunction-ss_dRcR::synapse0x2bf8170() {
   return (neuron0x2bcb420()*0.3492);
}

double NNfunction-ss_dRcR::synapse0x2bf81b0() {
   return (neuron0x298e7f0()*0.498804);
}

double NNfunction-ss_dRcR::synapse0x2bf81f0() {
   return (neuron0x2bcc240()*0.393056);
}

double NNfunction-ss_dRcR::synapse0x2bf8230() {
   return (neuron0x2bccc10()*-0.164986);
}

double NNfunction-ss_dRcR::synapse0x2bf8270() {
   return (neuron0x2bcd9e0()*-0.530043);
}

double NNfunction-ss_dRcR::synapse0x2bf82b0() {
   return (neuron0x2bce3b0()*0.0575715);
}

double NNfunction-ss_dRcR::synapse0x2bf82f0() {
   return (neuron0x2bced80()*-0.283674);
}

double NNfunction-ss_dRcR::synapse0x2bf8330() {
   return (neuron0x2bcf860()*0.140297);
}

double NNfunction-ss_dRcR::synapse0x2bf8370() {
   return (neuron0x2bd0230()*-0.658095);
}

double NNfunction-ss_dRcR::synapse0x2bf83b0() {
   return (neuron0x2bcd310()*0.163265);
}

double NNfunction-ss_dRcR::synapse0x2bf83f0() {
   return (neuron0x2bd1de0()*0.0605975);
}

double NNfunction-ss_dRcR::synapse0x2bf8430() {
   return (neuron0x2bd27b0()*-0.0321914);
}

double NNfunction-ss_dRcR::synapse0x2bf8470() {
   return (neuron0x2bd3180()*-0.499768);
}

double NNfunction-ss_dRcR::synapse0x2bf84b0() {
   return (neuron0x2bd3b50()*0.150386);
}

double NNfunction-ss_dRcR::synapse0x2bf7f40() {
   return (neuron0x2bd5960()*-0.845817);
}

double NNfunction-ss_dRcR::synapse0x2bf7f80() {
   return (neuron0x2bd5c40()*-0.36615);
}

double NNfunction-ss_dRcR::synapse0x2bf8600() {
   return (neuron0x2bd6610()*0.01041);
}

double NNfunction-ss_dRcR::synapse0x2bf8640() {
   return (neuron0x2bd6fe0()*1.3685);
}

double NNfunction-ss_dRcR::synapse0x2bf8680() {
   return (neuron0x2bd79b0()*0.669388);
}

double NNfunction-ss_dRcR::synapse0x2bf86c0() {
   return (neuron0x2bd8380()*-0.273608);
}

double NNfunction-ss_dRcR::synapse0x2bf8700() {
   return (neuron0x2bd0ed0()*-0.0997619);
}

double NNfunction-ss_dRcR::synapse0x2bf8740() {
   return (neuron0x2bd18a0()*-0.889363);
}

double NNfunction-ss_dRcR::synapse0x2bf8780() {
   return (neuron0x2bdb110()*0.412245);
}

double NNfunction-ss_dRcR::synapse0x2bf87c0() {
   return (neuron0x2bdbae0()*-0.243764);
}

double NNfunction-ss_dRcR::synapse0x2bf8800() {
   return (neuron0x2bdc4b0()*0.633579);
}

double NNfunction-ss_dRcR::synapse0x2bf8840() {
   return (neuron0x2bdce80()*0.962344);
}

double NNfunction-ss_dRcR::synapse0x2bf8880() {
   return (neuron0x2bdd850()*-0.16577);
}

double NNfunction-ss_dRcR::synapse0x2bf88c0() {
   return (neuron0x2bde220()*-0.327525);
}

double NNfunction-ss_dRcR::synapse0x2bf8900() {
   return (neuron0x2bdebf0()*0.321528);
}

double NNfunction-ss_dRcR::synapse0x2bf8940() {
   return (neuron0x2bdf5c0()*0.0332904);
}

double NNfunction-ss_dRcR::synapse0x2bf84f0() {
   return (neuron0x2bd5650()*-0.155082);
}

double NNfunction-ss_dRcR::synapse0x2bf8530() {
   return (neuron0x2be21a0()*-0.213625);
}

double NNfunction-ss_dRcR::synapse0x2bf8570() {
   return (neuron0x2be2b70()*-0.0648959);
}

double NNfunction-ss_dRcR::synapse0x2bf85b0() {
   return (neuron0x2be3540()*-0.177943);
}

double NNfunction-ss_dRcR::synapse0x2bf8b90() {
   return (neuron0x2be3f10()*-0.545446);
}

double NNfunction-ss_dRcR::synapse0x2bf8bd0() {
   return (neuron0x2be48e0()*0.225126);
}

double NNfunction-ss_dRcR::synapse0x2bf8c10() {
   return (neuron0x2be52b0()*-0.0622446);
}

double NNfunction-ss_dRcR::synapse0x2bf8c50() {
   return (neuron0x2be5c80()*-0.171414);
}

double NNfunction-ss_dRcR::synapse0x2bf8c90() {
   return (neuron0x2be6650()*0.534895);
}

double NNfunction-ss_dRcR::synapse0x2bf8cd0() {
   return (neuron0x2be7230()*0.182595);
}

double NNfunction-ss_dRcR::synapse0x2bf8d10() {
   return (neuron0x2be7c00()*-1.7269);
}

double NNfunction-ss_dRcR::synapse0x2bf8d50() {
   return (neuron0x2bd8a80()*-0.275488);
}

double NNfunction-ss_dRcR::synapse0x2bf8d90() {
   return (neuron0x2bd9450()*0.865187);
}

double NNfunction-ss_dRcR::synapse0x2bf8dd0() {
   return (neuron0x2bd9e20()*0.737126);
}

double NNfunction-ss_dRcR::synapse0x2bf8e10() {
   return (neuron0x2bec460()*-0.181836);
}

double NNfunction-ss_dRcR::synapse0x2bf8e50() {
   return (neuron0x2becd10()*-0.324765);
}

double NNfunction-ss_dRcR::synapse0x2bf8e90() {
   return (neuron0x2bed6e0()*-0.984998);
}

double NNfunction-ss_dRcR::synapse0x2bf8ed0() {
   return (neuron0x2bee0b0()*-0.398491);
}

double NNfunction-ss_dRcR::synapse0x2bc9ff0() {
   return (neuron0x2bf52b0()*-8.02557);
}

double NNfunction-ss_dRcR::synapse0x2bf9130() {
   return (neuron0x2bf5650()*1.17641);
}

double NNfunction-ss_dRcR::synapse0x2bf9170() {
   return (neuron0x2bf5af0()*10.4288);
}

double NNfunction-ss_dRcR::synapse0x2bf91b0() {
   return (neuron0x2bf6c50()*2.7861);
}

double NNfunction-ss_dRcR::synapse0x2bf91f0() {
   return (neuron0x2bf7db0()*-2.81229);
}

