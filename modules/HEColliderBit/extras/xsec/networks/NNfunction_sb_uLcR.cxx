#include "NNfunction_sb_uLcR.h"
#include <cmath>

double NNfunction_sb_uLcR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4441)/15.2849;
   input1 = (in1 - -1.72008)/1147.97;
   input2 = (in2 - 649.413)/616.977;
   input3 = (in3 - -57.8193)/829.251;
   input4 = (in4 - 1067.68)/958.861;
   input5 = (in5 - 890.6)/947.523;
   input6 = (in6 - 909.044)/954.754;
   input7 = (in7 - 920.922)/935.856;
   input8 = (in8 - 903.445)/956.402;
   input9 = (in9 - 883.396)/936.232;
   input10 = (in10 - 982.844)/947.085;
   input11 = (in11 - 405.426)/428.109;
   input12 = (in12 - 708.662)/857.427;
   input13 = (in13 - 499.677)/518.574;
   input14 = (in14 - 720.518)/822.218;
   input15 = (in15 - 437.519)/449.116;
   input16 = (in16 - 533.28)/563.629;
   input17 = (in17 - 749.041)/883.565;
   input18 = (in18 - 735.868)/881.106;
   input19 = (in19 - 791.071)/871.314;
   input20 = (in20 - -5.21414)/493.711;
   input21 = (in21 - 3.08132)/1157.17;
   input22 = (in22 - 2.51451)/1207.63;
   input23 = (in23 - -189.997)/594.104;
   switch(index) {
     case 0:
         return neuron0x12984b0();
     default:
         return 0.;
   }
}

double NNfunction_sb_uLcR::Value(int index, double* input) {
   input0 = (input[0] - 23.4441)/15.2849;
   input1 = (input[1] - -1.72008)/1147.97;
   input2 = (input[2] - 649.413)/616.977;
   input3 = (input[3] - -57.8193)/829.251;
   input4 = (input[4] - 1067.68)/958.861;
   input5 = (input[5] - 890.6)/947.523;
   input6 = (input[6] - 909.044)/954.754;
   input7 = (input[7] - 920.922)/935.856;
   input8 = (input[8] - 903.445)/956.402;
   input9 = (input[9] - 883.396)/936.232;
   input10 = (input[10] - 982.844)/947.085;
   input11 = (input[11] - 405.426)/428.109;
   input12 = (input[12] - 708.662)/857.427;
   input13 = (input[13] - 499.677)/518.574;
   input14 = (input[14] - 720.518)/822.218;
   input15 = (input[15] - 437.519)/449.116;
   input16 = (input[16] - 533.28)/563.629;
   input17 = (input[17] - 749.041)/883.565;
   input18 = (input[18] - 735.868)/881.106;
   input19 = (input[19] - 791.071)/871.314;
   input20 = (input[20] - -5.21414)/493.711;
   input21 = (input[21] - 3.08132)/1157.17;
   input22 = (input[22] - 2.51451)/1207.63;
   input23 = (input[23] - -189.997)/594.104;
   switch(index) {
     case 0:
         return neuron0x12984b0();
     default:
         return 0.;
   }
}

double NNfunction_sb_uLcR::neuron0x1264570() {
   return input0;
}

double NNfunction_sb_uLcR::neuron0x12648b0() {
   return input1;
}

double NNfunction_sb_uLcR::neuron0x1264bf0() {
   return input2;
}

double NNfunction_sb_uLcR::neuron0x1264f30() {
   return input3;
}

double NNfunction_sb_uLcR::neuron0x1265270() {
   return input4;
}

double NNfunction_sb_uLcR::neuron0x12655b0() {
   return input5;
}

double NNfunction_sb_uLcR::neuron0x12658f0() {
   return input6;
}

double NNfunction_sb_uLcR::neuron0x1265c30() {
   return input7;
}

double NNfunction_sb_uLcR::neuron0x1265f70() {
   return input8;
}

double NNfunction_sb_uLcR::neuron0x12662b0() {
   return input9;
}

double NNfunction_sb_uLcR::neuron0x12665f0() {
   return input10;
}

double NNfunction_sb_uLcR::neuron0x1266930() {
   return input11;
}

double NNfunction_sb_uLcR::neuron0x1266c70() {
   return input12;
}

double NNfunction_sb_uLcR::neuron0x1266fb0() {
   return input13;
}

double NNfunction_sb_uLcR::neuron0x12672f0() {
   return input14;
}

double NNfunction_sb_uLcR::neuron0x1267630() {
   return input15;
}

double NNfunction_sb_uLcR::neuron0x1267970() {
   return input16;
}

double NNfunction_sb_uLcR::neuron0x1267ed0() {
   return input17;
}

double NNfunction_sb_uLcR::neuron0x12680f0() {
   return input18;
}

double NNfunction_sb_uLcR::neuron0x1268430() {
   return input19;
}

double NNfunction_sb_uLcR::neuron0x1268770() {
   return input20;
}

double NNfunction_sb_uLcR::neuron0x1268ab0() {
   return input21;
}

double NNfunction_sb_uLcR::neuron0x1268df0() {
   return input22;
}

double NNfunction_sb_uLcR::neuron0x1269130() {
   return input23;
}

double NNfunction_sb_uLcR::input0x12695d0() {
   double input = -0.472447;
   input += synapse0x10243e0();
   input += synapse0x1264430();
   input += synapse0x1264470();
   input += synapse0x1269880();
   input += synapse0x12698c0();
   input += synapse0x1269900();
   input += synapse0x1269940();
   input += synapse0x1269980();
   input += synapse0x12699c0();
   input += synapse0x1269a00();
   input += synapse0x1269a40();
   input += synapse0x1269a80();
   input += synapse0x1269ac0();
   input += synapse0x1269b00();
   input += synapse0x1269b40();
   input += synapse0x1269b80();
   input += synapse0x12643a0();
   input += synapse0x12643e0();
   input += synapse0x1015c80();
   input += synapse0x1015cc0();
   input += synapse0x1269de0();
   input += synapse0x1269e20();
   input += synapse0x1269e60();
   input += synapse0x1269ea0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x12695d0() {
   double input = input0x12695d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x1269ee0() {
   double input = -1.35311;
   input += synapse0x126a220();
   input += synapse0x126a260();
   input += synapse0x126a2a0();
   input += synapse0x126a2e0();
   input += synapse0x126a320();
   input += synapse0x126a360();
   input += synapse0x126a3a0();
   input += synapse0x126a3e0();
   input += synapse0x126a420();
   input += synapse0x1269cd0();
   input += synapse0x1269d10();
   input += synapse0x1269d50();
   input += synapse0x1269d90();
   input += synapse0x126a670();
   input += synapse0x126a6b0();
   input += synapse0x126a6f0();
   input += synapse0x126a070();
   input += synapse0x126a0b0();
   input += synapse0x126a840();
   input += synapse0x126a880();
   input += synapse0x126a8c0();
   input += synapse0x126a900();
   input += synapse0x126a940();
   input += synapse0x126a980();
   return input;
}

double NNfunction_sb_uLcR::neuron0x1269ee0() {
   double input = input0x1269ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x126a9c0() {
   double input = 0.609147;
   input += synapse0x126ad00();
   input += synapse0x126ad40();
   input += synapse0x126ad80();
   input += synapse0x126adc0();
   input += synapse0x126ae00();
   input += synapse0x126ae40();
   input += synapse0x126ae80();
   input += synapse0x126aec0();
   input += synapse0x126af00();
   input += synapse0x126af40();
   input += synapse0x126af80();
   input += synapse0x126afc0();
   input += synapse0x126b000();
   input += synapse0x126b040();
   input += synapse0x126b080();
   input += synapse0x126b0c0();
   input += synapse0x126ab50();
   input += synapse0x126ab90();
   input += synapse0x1023ad0();
   input += synapse0x1023b10();
   input += synapse0x1253600();
   input += synapse0x1253640();
   input += synapse0x1253680();
   input += synapse0x12644b0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x126a9c0() {
   double input = input0x126a9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x1024250() {
   double input = -0.113719;
   input += synapse0x126a610();
   input += synapse0x12644f0();
   input += synapse0x1264530();
   input += synapse0x126b210();
   input += synapse0x126b250();
   input += synapse0x126b290();
   input += synapse0x126b2d0();
   input += synapse0x126b310();
   input += synapse0x126b350();
   input += synapse0x126b390();
   input += synapse0x126b3d0();
   input += synapse0x126b410();
   input += synapse0x126b450();
   input += synapse0x126b490();
   input += synapse0x126b4d0();
   input += synapse0x126b510();
   input += synapse0x126a460();
   input += synapse0x126a4a0();
   input += synapse0x126b660();
   input += synapse0x126b6a0();
   input += synapse0x126b6e0();
   input += synapse0x126b720();
   input += synapse0x126b760();
   input += synapse0x126b7a0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x1024250() {
   double input = input0x1024250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x126b7e0() {
   double input = 1.17898;
   input += synapse0x126bb20();
   input += synapse0x126bb60();
   input += synapse0x126bba0();
   input += synapse0x126bbe0();
   input += synapse0x126bc20();
   input += synapse0x126bc60();
   input += synapse0x126bca0();
   input += synapse0x126bce0();
   input += synapse0x126bd20();
   input += synapse0x126bd60();
   input += synapse0x126bda0();
   input += synapse0x126bde0();
   input += synapse0x126be20();
   input += synapse0x126be60();
   input += synapse0x126bea0();
   input += synapse0x126bee0();
   input += synapse0x126b970();
   input += synapse0x126b9b0();
   input += synapse0x126c030();
   input += synapse0x126c070();
   input += synapse0x126c0b0();
   input += synapse0x126c0f0();
   input += synapse0x126c130();
   input += synapse0x126c170();
   return input;
}

double NNfunction_sb_uLcR::neuron0x126b7e0() {
   double input = input0x126b7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x126c1b0() {
   double input = 1.32191;
   input += synapse0x126c4f0();
   input += synapse0x126c530();
   input += synapse0x126c570();
   input += synapse0x126c5b0();
   input += synapse0x126c5f0();
   input += synapse0x126c630();
   input += synapse0x126c670();
   input += synapse0x126c6b0();
   input += synapse0x126c6f0();
   input += synapse0x1023e40();
   input += synapse0x1023e80();
   input += synapse0x1023ec0();
   input += synapse0x1023f00();
   input += synapse0x1023f40();
   input += synapse0x1023f80();
   input += synapse0x1023fc0();
   input += synapse0x126c340();
   input += synapse0x126c380();
   input += synapse0x1024110();
   input += synapse0x1024150();
   input += synapse0x1024190();
   input += synapse0x10241d0();
   input += synapse0x1024210();
   input += synapse0x126cf40();
   return input;
}

double NNfunction_sb_uLcR::neuron0x126c1b0() {
   double input = input0x126c1b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x126cf80() {
   double input = -0.168506;
   input += synapse0x126d2c0();
   input += synapse0x126d300();
   input += synapse0x126d340();
   input += synapse0x126d380();
   input += synapse0x126d3c0();
   input += synapse0x126d400();
   input += synapse0x126d440();
   input += synapse0x126d480();
   input += synapse0x126d4c0();
   input += synapse0x126d500();
   input += synapse0x126d540();
   input += synapse0x126d580();
   input += synapse0x126d5c0();
   input += synapse0x126d600();
   input += synapse0x126d640();
   input += synapse0x126d680();
   input += synapse0x126d110();
   input += synapse0x126d150();
   input += synapse0x126d7d0();
   input += synapse0x126d810();
   input += synapse0x126d850();
   input += synapse0x126d890();
   input += synapse0x126d8d0();
   input += synapse0x126d910();
   return input;
}

double NNfunction_sb_uLcR::neuron0x126cf80() {
   double input = input0x126cf80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x126d950() {
   double input = 0.132333;
   input += synapse0x126dc90();
   input += synapse0x126dcd0();
   input += synapse0x126dd10();
   input += synapse0x126dd50();
   input += synapse0x126dd90();
   input += synapse0x126ddd0();
   input += synapse0x126de10();
   input += synapse0x126de50();
   input += synapse0x126de90();
   input += synapse0x126ded0();
   input += synapse0x126df10();
   input += synapse0x126df50();
   input += synapse0x126df90();
   input += synapse0x126dfd0();
   input += synapse0x126e010();
   input += synapse0x126e050();
   input += synapse0x126dae0();
   input += synapse0x126db20();
   input += synapse0x126e1a0();
   input += synapse0x126e1e0();
   input += synapse0x126e220();
   input += synapse0x126e260();
   input += synapse0x126e2a0();
   input += synapse0x126e2e0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x126d950() {
   double input = input0x126d950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x126e320() {
   double input = 0.599926;
   input += synapse0x1267dc0();
   input += synapse0x1267e00();
   input += synapse0x1267e40();
   input += synapse0x1267e80();
   input += synapse0x126e870();
   input += synapse0x126e8b0();
   input += synapse0x126e8f0();
   input += synapse0x126e930();
   input += synapse0x126e970();
   input += synapse0x126e9b0();
   input += synapse0x126e9f0();
   input += synapse0x126ea30();
   input += synapse0x126ea70();
   input += synapse0x126eab0();
   input += synapse0x126eaf0();
   input += synapse0x126eb30();
   input += synapse0x126e4b0();
   input += synapse0x126e4f0();
   input += synapse0x126ec80();
   input += synapse0x126ecc0();
   input += synapse0x126ed00();
   input += synapse0x126ed40();
   input += synapse0x126ed80();
   input += synapse0x126edc0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x126e320() {
   double input = input0x126e320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x126ee00() {
   double input = 0.547247;
   input += synapse0x126f140();
   input += synapse0x126f180();
   input += synapse0x126f1c0();
   input += synapse0x126f200();
   input += synapse0x126f240();
   input += synapse0x126f280();
   input += synapse0x126f2c0();
   input += synapse0x126f300();
   input += synapse0x126f340();
   input += synapse0x126f380();
   input += synapse0x126f3c0();
   input += synapse0x126f400();
   input += synapse0x126f440();
   input += synapse0x126f480();
   input += synapse0x126f4c0();
   input += synapse0x126f500();
   input += synapse0x126ef90();
   input += synapse0x126efd0();
   input += synapse0x126f650();
   input += synapse0x126f690();
   input += synapse0x126f6d0();
   input += synapse0x126f710();
   input += synapse0x126f750();
   input += synapse0x126f790();
   return input;
}

double NNfunction_sb_uLcR::neuron0x126ee00() {
   double input = input0x126ee00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x126f7d0() {
   double input = 0.065679;
   input += synapse0x126fb10();
   input += synapse0x126fb50();
   input += synapse0x126fb90();
   input += synapse0x126fbd0();
   input += synapse0x126fc10();
   input += synapse0x126fc50();
   input += synapse0x126fc90();
   input += synapse0x126fcd0();
   input += synapse0x126fd10();
   input += synapse0x126fd50();
   input += synapse0x126fd90();
   input += synapse0x126fdd0();
   input += synapse0x126fe10();
   input += synapse0x126fe50();
   input += synapse0x126fe90();
   input += synapse0x126fed0();
   input += synapse0x126f960();
   input += synapse0x126f9a0();
   input += synapse0x126c730();
   input += synapse0x126c770();
   input += synapse0x126c7b0();
   input += synapse0x126c7f0();
   input += synapse0x126c830();
   input += synapse0x126c870();
   return input;
}

double NNfunction_sb_uLcR::neuron0x126f7d0() {
   double input = input0x126f7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x126c8b0() {
   double input = -0.75401;
   input += synapse0x126cbf0();
   input += synapse0x126cc30();
   input += synapse0x126cc70();
   input += synapse0x126ccb0();
   input += synapse0x126ccf0();
   input += synapse0x126cd30();
   input += synapse0x126cd70();
   input += synapse0x126cdb0();
   input += synapse0x126cdf0();
   input += synapse0x126ce30();
   input += synapse0x126ce70();
   input += synapse0x126ceb0();
   input += synapse0x126cef0();
   input += synapse0x1271030();
   input += synapse0x1271070();
   input += synapse0x12710b0();
   input += synapse0x126ca40();
   input += synapse0x126ca80();
   input += synapse0x1271200();
   input += synapse0x1271240();
   input += synapse0x1271280();
   input += synapse0x12712c0();
   input += synapse0x1271300();
   input += synapse0x1271340();
   return input;
}

double NNfunction_sb_uLcR::neuron0x126c8b0() {
   double input = input0x126c8b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x1271380() {
   double input = 1.36175;
   input += synapse0x12716c0();
   input += synapse0x1271700();
   input += synapse0x1271740();
   input += synapse0x1271780();
   input += synapse0x12717c0();
   input += synapse0x1271800();
   input += synapse0x1271840();
   input += synapse0x1271880();
   input += synapse0x12718c0();
   input += synapse0x1271900();
   input += synapse0x1271940();
   input += synapse0x1271980();
   input += synapse0x12719c0();
   input += synapse0x1271a00();
   input += synapse0x1271a40();
   input += synapse0x1271a80();
   input += synapse0x1271510();
   input += synapse0x1271550();
   input += synapse0x1271bd0();
   input += synapse0x1271c10();
   input += synapse0x1271c50();
   input += synapse0x1271c90();
   input += synapse0x1271cd0();
   input += synapse0x1271d10();
   return input;
}

double NNfunction_sb_uLcR::neuron0x1271380() {
   double input = input0x1271380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x1271d50() {
   double input = 0.273668;
   input += synapse0x1272090();
   input += synapse0x12720d0();
   input += synapse0x1272110();
   input += synapse0x1272150();
   input += synapse0x1272190();
   input += synapse0x12721d0();
   input += synapse0x1272210();
   input += synapse0x1272250();
   input += synapse0x1272290();
   input += synapse0x12722d0();
   input += synapse0x1272310();
   input += synapse0x1272350();
   input += synapse0x1272390();
   input += synapse0x12723d0();
   input += synapse0x1272410();
   input += synapse0x1272450();
   input += synapse0x1271ee0();
   input += synapse0x1271f20();
   input += synapse0x12725a0();
   input += synapse0x12725e0();
   input += synapse0x1272620();
   input += synapse0x1272660();
   input += synapse0x12726a0();
   input += synapse0x12726e0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x1271d50() {
   double input = input0x1271d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x1272720() {
   double input = -0.956347;
   input += synapse0x1272a60();
   input += synapse0x1272aa0();
   input += synapse0x1272ae0();
   input += synapse0x1272b20();
   input += synapse0x1272b60();
   input += synapse0x1272ba0();
   input += synapse0x1272be0();
   input += synapse0x1272c20();
   input += synapse0x1272c60();
   input += synapse0x1272ca0();
   input += synapse0x1272ce0();
   input += synapse0x1272d20();
   input += synapse0x1272d60();
   input += synapse0x1272da0();
   input += synapse0x1272de0();
   input += synapse0x1272e20();
   input += synapse0x12728b0();
   input += synapse0x12728f0();
   input += synapse0x1272f70();
   input += synapse0x1272fb0();
   input += synapse0x1272ff0();
   input += synapse0x1273030();
   input += synapse0x1273070();
   input += synapse0x12730b0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x1272720() {
   double input = input0x1272720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x12730f0() {
   double input = -0.156133;
   input += synapse0x1273430();
   input += synapse0x1264790();
   input += synapse0x12647d0();
   input += synapse0x1264ad0();
   input += synapse0x1264b10();
   input += synapse0x1264e10();
   input += synapse0x1264e50();
   input += synapse0x1265150();
   input += synapse0x1265190();
   input += synapse0x1265490();
   input += synapse0x12654d0();
   input += synapse0x12657d0();
   input += synapse0x1265810();
   input += synapse0x1265b10();
   input += synapse0x1265b50();
   input += synapse0x1265e50();
   input += synapse0x1265e90();
   input += synapse0x1266190();
   input += synapse0x12661d0();
   input += synapse0x12664d0();
   input += synapse0x1266510();
   input += synapse0x1266810();
   input += synapse0x1266850();
   input += synapse0x1266b50();
   return input;
}

double NNfunction_sb_uLcR::neuron0x12730f0() {
   double input = input0x12730f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x1274f00() {
   double input = 2.53897;
   input += synapse0x1266b90();
   input += synapse0x1267850();
   input += synapse0x1267890();
   input += synapse0x1273280();
   input += synapse0x12732c0();
   input += synapse0x1267b90();
   input += synapse0x1267bd0();
   input += synapse0x1015b60();
   input += synapse0x1015ba0();
   input += synapse0x1268310();
   input += synapse0x1268350();
   input += synapse0x1268650();
   input += synapse0x1268690();
   input += synapse0x1268990();
   input += synapse0x12689d0();
   input += synapse0x1268cd0();
   input += synapse0x1268d10();
   input += synapse0x1269010();
   input += synapse0x1269050();
   input += synapse0x1269350();
   input += synapse0x1269390();
   input += synapse0x1266e90();
   input += synapse0x1266ed0();
   input += synapse0x12751a0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x1274f00() {
   double input = input0x1274f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x12751e0() {
   double input = 0.0544124;
   input += synapse0x1275520();
   input += synapse0x1275560();
   input += synapse0x12755a0();
   input += synapse0x12755e0();
   input += synapse0x1275620();
   input += synapse0x1275660();
   input += synapse0x12756a0();
   input += synapse0x12756e0();
   input += synapse0x1275720();
   input += synapse0x1275760();
   input += synapse0x12757a0();
   input += synapse0x12757e0();
   input += synapse0x1275820();
   input += synapse0x1275860();
   input += synapse0x12758a0();
   input += synapse0x12758e0();
   input += synapse0x1275370();
   input += synapse0x12753b0();
   input += synapse0x1275a30();
   input += synapse0x1275a70();
   input += synapse0x1275ab0();
   input += synapse0x1275af0();
   input += synapse0x1275b30();
   input += synapse0x1275b70();
   return input;
}

double NNfunction_sb_uLcR::neuron0x12751e0() {
   double input = input0x12751e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x1275bb0() {
   double input = -0.479376;
   input += synapse0x1275ef0();
   input += synapse0x1275f30();
   input += synapse0x1275f70();
   input += synapse0x1275fb0();
   input += synapse0x1275ff0();
   input += synapse0x1276030();
   input += synapse0x1276070();
   input += synapse0x12760b0();
   input += synapse0x12760f0();
   input += synapse0x1276130();
   input += synapse0x1276170();
   input += synapse0x12761b0();
   input += synapse0x12761f0();
   input += synapse0x1276230();
   input += synapse0x1276270();
   input += synapse0x12762b0();
   input += synapse0x1275d40();
   input += synapse0x1275d80();
   input += synapse0x1276400();
   input += synapse0x1276440();
   input += synapse0x1276480();
   input += synapse0x12764c0();
   input += synapse0x1276500();
   input += synapse0x1276540();
   return input;
}

double NNfunction_sb_uLcR::neuron0x1275bb0() {
   double input = input0x1275bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x1276580() {
   double input = 0.886158;
   input += synapse0x12768c0();
   input += synapse0x1276900();
   input += synapse0x1276940();
   input += synapse0x1276980();
   input += synapse0x12769c0();
   input += synapse0x1276a00();
   input += synapse0x1276a40();
   input += synapse0x1276a80();
   input += synapse0x1276ac0();
   input += synapse0x1276b00();
   input += synapse0x1276b40();
   input += synapse0x1276b80();
   input += synapse0x1276bc0();
   input += synapse0x1276c00();
   input += synapse0x1276c40();
   input += synapse0x1276c80();
   input += synapse0x1276710();
   input += synapse0x1276750();
   input += synapse0x1276dd0();
   input += synapse0x1276e10();
   input += synapse0x1276e50();
   input += synapse0x1276e90();
   input += synapse0x1276ed0();
   input += synapse0x1276f10();
   return input;
}

double NNfunction_sb_uLcR::neuron0x1276580() {
   double input = input0x1276580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x1276f50() {
   double input = -2.0566;
   input += synapse0x1277290();
   input += synapse0x12772d0();
   input += synapse0x1277310();
   input += synapse0x1277350();
   input += synapse0x1277390();
   input += synapse0x12773d0();
   input += synapse0x1277410();
   input += synapse0x1277450();
   input += synapse0x1277490();
   input += synapse0x12774d0();
   input += synapse0x1277510();
   input += synapse0x1277550();
   input += synapse0x1277590();
   input += synapse0x12775d0();
   input += synapse0x1277610();
   input += synapse0x1277650();
   input += synapse0x12770e0();
   input += synapse0x1277120();
   input += synapse0x12777a0();
   input += synapse0x12777e0();
   input += synapse0x1277820();
   input += synapse0x1277860();
   input += synapse0x12778a0();
   input += synapse0x12778e0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x1276f50() {
   double input = input0x1276f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x1277920() {
   double input = -2.51937;
   input += synapse0x1277c60();
   input += synapse0x1277ca0();
   input += synapse0x1277ce0();
   input += synapse0x1277d20();
   input += synapse0x1277d60();
   input += synapse0x1277da0();
   input += synapse0x1277de0();
   input += synapse0x1277e20();
   input += synapse0x1277e60();
   input += synapse0x1270020();
   input += synapse0x1270060();
   input += synapse0x12700a0();
   input += synapse0x12700e0();
   input += synapse0x1270120();
   input += synapse0x1270160();
   input += synapse0x12701a0();
   input += synapse0x1277ab0();
   input += synapse0x1277af0();
   input += synapse0x12702f0();
   input += synapse0x1270330();
   input += synapse0x1270370();
   input += synapse0x12703b0();
   input += synapse0x12703f0();
   input += synapse0x1270430();
   return input;
}

double NNfunction_sb_uLcR::neuron0x1277920() {
   double input = input0x1277920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x1270470() {
   double input = 0.274896;
   input += synapse0x12707b0();
   input += synapse0x12707f0();
   input += synapse0x1270830();
   input += synapse0x1270870();
   input += synapse0x12708b0();
   input += synapse0x12708f0();
   input += synapse0x1270930();
   input += synapse0x1270970();
   input += synapse0x12709b0();
   input += synapse0x12709f0();
   input += synapse0x1270a30();
   input += synapse0x1270a70();
   input += synapse0x1270ab0();
   input += synapse0x1270af0();
   input += synapse0x1270b30();
   input += synapse0x1270b70();
   input += synapse0x1270600();
   input += synapse0x1270640();
   input += synapse0x1270cc0();
   input += synapse0x1270d00();
   input += synapse0x1270d40();
   input += synapse0x1270d80();
   input += synapse0x1270dc0();
   input += synapse0x1270e00();
   return input;
}

double NNfunction_sb_uLcR::neuron0x1270470() {
   double input = input0x1270470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x1270e40() {
   double input = 0.508488;
   input += synapse0x1270fd0();
   input += synapse0x127a060();
   input += synapse0x127a0a0();
   input += synapse0x127a0e0();
   input += synapse0x127a120();
   input += synapse0x127a160();
   input += synapse0x127a1a0();
   input += synapse0x127a1e0();
   input += synapse0x127a220();
   input += synapse0x127a260();
   input += synapse0x127a2a0();
   input += synapse0x127a2e0();
   input += synapse0x127a320();
   input += synapse0x127a360();
   input += synapse0x127a3a0();
   input += synapse0x127a3e0();
   input += synapse0x1279eb0();
   input += synapse0x1279ef0();
   input += synapse0x127a530();
   input += synapse0x127a570();
   input += synapse0x127a5b0();
   input += synapse0x127a5f0();
   input += synapse0x127a630();
   input += synapse0x127a670();
   return input;
}

double NNfunction_sb_uLcR::neuron0x1270e40() {
   double input = input0x1270e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x127a6b0() {
   double input = -4.63322;
   input += synapse0x127a9f0();
   input += synapse0x127aa30();
   input += synapse0x127aa70();
   input += synapse0x127aab0();
   input += synapse0x127aaf0();
   input += synapse0x127ab30();
   input += synapse0x127ab70();
   input += synapse0x127abb0();
   input += synapse0x127abf0();
   input += synapse0x127ac30();
   input += synapse0x127ac70();
   input += synapse0x127acb0();
   input += synapse0x127acf0();
   input += synapse0x127ad30();
   input += synapse0x127ad70();
   input += synapse0x127adb0();
   input += synapse0x127a840();
   input += synapse0x127a880();
   input += synapse0x127af00();
   input += synapse0x127af40();
   input += synapse0x127af80();
   input += synapse0x127afc0();
   input += synapse0x127b000();
   input += synapse0x127b040();
   return input;
}

double NNfunction_sb_uLcR::neuron0x127a6b0() {
   double input = input0x127a6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x127b080() {
   double input = -1.43147;
   input += synapse0x127b3c0();
   input += synapse0x127b400();
   input += synapse0x127b440();
   input += synapse0x127b480();
   input += synapse0x127b4c0();
   input += synapse0x127b500();
   input += synapse0x127b540();
   input += synapse0x127b580();
   input += synapse0x127b5c0();
   input += synapse0x127b600();
   input += synapse0x127b640();
   input += synapse0x127b680();
   input += synapse0x127b6c0();
   input += synapse0x127b700();
   input += synapse0x127b740();
   input += synapse0x127b780();
   input += synapse0x127b210();
   input += synapse0x127b250();
   input += synapse0x127b8d0();
   input += synapse0x127b910();
   input += synapse0x127b950();
   input += synapse0x127b990();
   input += synapse0x127b9d0();
   input += synapse0x127ba10();
   return input;
}

double NNfunction_sb_uLcR::neuron0x127b080() {
   double input = input0x127b080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x127ba50() {
   double input = 0.612139;
   input += synapse0x127bd90();
   input += synapse0x127bdd0();
   input += synapse0x127be10();
   input += synapse0x127be50();
   input += synapse0x127be90();
   input += synapse0x127bed0();
   input += synapse0x127bf10();
   input += synapse0x127bf50();
   input += synapse0x127bf90();
   input += synapse0x127bfd0();
   input += synapse0x127c010();
   input += synapse0x127c050();
   input += synapse0x127c090();
   input += synapse0x127c0d0();
   input += synapse0x127c110();
   input += synapse0x127c150();
   input += synapse0x127bbe0();
   input += synapse0x127bc20();
   input += synapse0x127c2a0();
   input += synapse0x127c2e0();
   input += synapse0x127c320();
   input += synapse0x127c360();
   input += synapse0x127c3a0();
   input += synapse0x127c3e0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x127ba50() {
   double input = input0x127ba50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x127c420() {
   double input = 1.48594;
   input += synapse0x127c760();
   input += synapse0x127c7a0();
   input += synapse0x127c7e0();
   input += synapse0x127c820();
   input += synapse0x127c860();
   input += synapse0x127c8a0();
   input += synapse0x127c8e0();
   input += synapse0x127c920();
   input += synapse0x127c960();
   input += synapse0x127c9a0();
   input += synapse0x127c9e0();
   input += synapse0x127ca20();
   input += synapse0x127ca60();
   input += synapse0x127caa0();
   input += synapse0x127cae0();
   input += synapse0x127cb20();
   input += synapse0x127c5b0();
   input += synapse0x127c5f0();
   input += synapse0x127cc70();
   input += synapse0x127ccb0();
   input += synapse0x127ccf0();
   input += synapse0x127cd30();
   input += synapse0x127cd70();
   input += synapse0x127cdb0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x127c420() {
   double input = input0x127c420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x127cdf0() {
   double input = -1.62476;
   input += synapse0x127d130();
   input += synapse0x127d170();
   input += synapse0x127d1b0();
   input += synapse0x127d1f0();
   input += synapse0x127d230();
   input += synapse0x127d270();
   input += synapse0x127d2b0();
   input += synapse0x127d2f0();
   input += synapse0x127d330();
   input += synapse0x127d370();
   input += synapse0x127d3b0();
   input += synapse0x127d3f0();
   input += synapse0x127d430();
   input += synapse0x127d470();
   input += synapse0x127d4b0();
   input += synapse0x127d4f0();
   input += synapse0x127cf80();
   input += synapse0x127cfc0();
   input += synapse0x127d640();
   input += synapse0x127d680();
   input += synapse0x127d6c0();
   input += synapse0x127d700();
   input += synapse0x127d740();
   input += synapse0x127d780();
   return input;
}

double NNfunction_sb_uLcR::neuron0x127cdf0() {
   double input = input0x127cdf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x127d7c0() {
   double input = -0.13705;
   input += synapse0x127db00();
   input += synapse0x127db40();
   input += synapse0x127db80();
   input += synapse0x127dbc0();
   input += synapse0x127dc00();
   input += synapse0x127dc40();
   input += synapse0x127dc80();
   input += synapse0x127dcc0();
   input += synapse0x127dd00();
   input += synapse0x127dd40();
   input += synapse0x127dd80();
   input += synapse0x127ddc0();
   input += synapse0x127de00();
   input += synapse0x127de40();
   input += synapse0x127de80();
   input += synapse0x127dec0();
   input += synapse0x127d950();
   input += synapse0x127d990();
   input += synapse0x127e010();
   input += synapse0x127e050();
   input += synapse0x127e090();
   input += synapse0x127e0d0();
   input += synapse0x127e110();
   input += synapse0x127e150();
   return input;
}

double NNfunction_sb_uLcR::neuron0x127d7c0() {
   double input = input0x127d7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x127e190() {
   double input = 0.264842;
   input += synapse0x127e4d0();
   input += synapse0x127e510();
   input += synapse0x127e550();
   input += synapse0x127e590();
   input += synapse0x127e5d0();
   input += synapse0x127e610();
   input += synapse0x127e650();
   input += synapse0x127e690();
   input += synapse0x127e6d0();
   input += synapse0x127e710();
   input += synapse0x127e750();
   input += synapse0x127e790();
   input += synapse0x127e7d0();
   input += synapse0x127e810();
   input += synapse0x127e850();
   input += synapse0x127e890();
   input += synapse0x127e320();
   input += synapse0x127e360();
   input += synapse0x127e9e0();
   input += synapse0x127ea20();
   input += synapse0x127ea60();
   input += synapse0x127eaa0();
   input += synapse0x127eae0();
   input += synapse0x127eb20();
   return input;
}

double NNfunction_sb_uLcR::neuron0x127e190() {
   double input = input0x127e190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x127eb60() {
   double input = 0.759111;
   input += synapse0x127eea0();
   input += synapse0x1273470();
   input += synapse0x12734b0();
   input += synapse0x12734f0();
   input += synapse0x1273740();
   input += synapse0x1273780();
   input += synapse0x12737c0();
   input += synapse0x1273a10();
   input += synapse0x1273a50();
   input += synapse0x1273ca0();
   input += synapse0x1273ce0();
   input += synapse0x1273d20();
   input += synapse0x1273f70();
   input += synapse0x1273fb0();
   input += synapse0x1274200();
   input += synapse0x1274240();
   input += synapse0x127ecf0();
   input += synapse0x127ed30();
   input += synapse0x1274390();
   input += synapse0x12748a0();
   input += synapse0x12748e0();
   input += synapse0x1274920();
   input += synapse0x1274b70();
   input += synapse0x1274bb0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x127eb60() {
   double input = input0x127eb60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x1274bf0() {
   double input = 0.169606;
   input += synapse0x1274460();
   input += synapse0x12744a0();
   input += synapse0x12744e0();
   input += synapse0x1274520();
   input += synapse0x1274ea0();
   input += synapse0x12811f0();
   input += synapse0x1281230();
   input += synapse0x1281270();
   input += synapse0x12812b0();
   input += synapse0x12812f0();
   input += synapse0x1281330();
   input += synapse0x1281370();
   input += synapse0x12813b0();
   input += synapse0x12813f0();
   input += synapse0x1281430();
   input += synapse0x1281470();
   input += synapse0x1274d80();
   input += synapse0x1274dc0();
   input += synapse0x12815c0();
   input += synapse0x1281600();
   input += synapse0x1281640();
   input += synapse0x1281680();
   input += synapse0x12816c0();
   input += synapse0x1281700();
   return input;
}

double NNfunction_sb_uLcR::neuron0x1274bf0() {
   double input = input0x1274bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x1281740() {
   double input = 1.02948;
   input += synapse0x1281a80();
   input += synapse0x1281ac0();
   input += synapse0x1281b00();
   input += synapse0x1281b40();
   input += synapse0x1281b80();
   input += synapse0x1281bc0();
   input += synapse0x1281c00();
   input += synapse0x1281c40();
   input += synapse0x1281c80();
   input += synapse0x1281cc0();
   input += synapse0x1281d00();
   input += synapse0x1281d40();
   input += synapse0x1281d80();
   input += synapse0x1281dc0();
   input += synapse0x1281e00();
   input += synapse0x1281e40();
   input += synapse0x12818d0();
   input += synapse0x1281910();
   input += synapse0x1281f90();
   input += synapse0x1281fd0();
   input += synapse0x1282010();
   input += synapse0x1282050();
   input += synapse0x1282090();
   input += synapse0x12820d0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x1281740() {
   double input = input0x1281740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x1282110() {
   double input = 0.278796;
   input += synapse0x1282450();
   input += synapse0x1282490();
   input += synapse0x12824d0();
   input += synapse0x1282510();
   input += synapse0x1282550();
   input += synapse0x1282590();
   input += synapse0x12825d0();
   input += synapse0x1282610();
   input += synapse0x1282650();
   input += synapse0x1282690();
   input += synapse0x12826d0();
   input += synapse0x1282710();
   input += synapse0x1282750();
   input += synapse0x1282790();
   input += synapse0x12827d0();
   input += synapse0x1282810();
   input += synapse0x12822a0();
   input += synapse0x12822e0();
   input += synapse0x1282960();
   input += synapse0x12829a0();
   input += synapse0x12829e0();
   input += synapse0x1282a20();
   input += synapse0x1282a60();
   input += synapse0x1282aa0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x1282110() {
   double input = input0x1282110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x1282ae0() {
   double input = 0.473938;
   input += synapse0x1282e20();
   input += synapse0x1282e60();
   input += synapse0x1282ea0();
   input += synapse0x1282ee0();
   input += synapse0x1282f20();
   input += synapse0x1282f60();
   input += synapse0x1282fa0();
   input += synapse0x1282fe0();
   input += synapse0x1283020();
   input += synapse0x1283060();
   input += synapse0x12830a0();
   input += synapse0x12830e0();
   input += synapse0x1283120();
   input += synapse0x1283160();
   input += synapse0x12831a0();
   input += synapse0x12831e0();
   input += synapse0x1282c70();
   input += synapse0x1282cb0();
   input += synapse0x1283330();
   input += synapse0x1283370();
   input += synapse0x12833b0();
   input += synapse0x12833f0();
   input += synapse0x1283430();
   input += synapse0x1283470();
   return input;
}

double NNfunction_sb_uLcR::neuron0x1282ae0() {
   double input = input0x1282ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x12834b0() {
   double input = 0.826204;
   input += synapse0x12837f0();
   input += synapse0x1283830();
   input += synapse0x1283870();
   input += synapse0x12838b0();
   input += synapse0x12838f0();
   input += synapse0x1283930();
   input += synapse0x1283970();
   input += synapse0x12839b0();
   input += synapse0x12839f0();
   input += synapse0x1283a30();
   input += synapse0x1283a70();
   input += synapse0x1283ab0();
   input += synapse0x1283af0();
   input += synapse0x1283b30();
   input += synapse0x1283b70();
   input += synapse0x1283bb0();
   input += synapse0x1283640();
   input += synapse0x1283680();
   input += synapse0x1283d00();
   input += synapse0x1283d40();
   input += synapse0x1283d80();
   input += synapse0x1283dc0();
   input += synapse0x1283e00();
   input += synapse0x1283e40();
   return input;
}

double NNfunction_sb_uLcR::neuron0x12834b0() {
   double input = input0x12834b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x1283e80() {
   double input = -0.257961;
   input += synapse0x12841c0();
   input += synapse0x1284200();
   input += synapse0x1284240();
   input += synapse0x1284280();
   input += synapse0x12842c0();
   input += synapse0x1284300();
   input += synapse0x1284340();
   input += synapse0x1284380();
   input += synapse0x12843c0();
   input += synapse0x1284400();
   input += synapse0x1284440();
   input += synapse0x1284480();
   input += synapse0x12844c0();
   input += synapse0x1284500();
   input += synapse0x1284540();
   input += synapse0x1284580();
   input += synapse0x1284010();
   input += synapse0x1284050();
   input += synapse0x12846d0();
   input += synapse0x1284710();
   input += synapse0x1284750();
   input += synapse0x1284790();
   input += synapse0x12847d0();
   input += synapse0x1284810();
   return input;
}

double NNfunction_sb_uLcR::neuron0x1283e80() {
   double input = input0x1283e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x1284850() {
   double input = -0.0323971;
   input += synapse0x1284b90();
   input += synapse0x1284bd0();
   input += synapse0x1284c10();
   input += synapse0x1284c50();
   input += synapse0x1284c90();
   input += synapse0x1284cd0();
   input += synapse0x1284d10();
   input += synapse0x1284d50();
   input += synapse0x1284d90();
   input += synapse0x1284dd0();
   input += synapse0x1284e10();
   input += synapse0x1284e50();
   input += synapse0x1284e90();
   input += synapse0x1284ed0();
   input += synapse0x1284f10();
   input += synapse0x1284f50();
   input += synapse0x12849e0();
   input += synapse0x1284a20();
   input += synapse0x12850a0();
   input += synapse0x12850e0();
   input += synapse0x1285120();
   input += synapse0x1285160();
   input += synapse0x12851a0();
   input += synapse0x12851e0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x1284850() {
   double input = input0x1284850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x1285220() {
   double input = -0.726013;
   input += synapse0x1285560();
   input += synapse0x12855a0();
   input += synapse0x12855e0();
   input += synapse0x1285620();
   input += synapse0x1285660();
   input += synapse0x12856a0();
   input += synapse0x12856e0();
   input += synapse0x1285720();
   input += synapse0x1285760();
   input += synapse0x12857a0();
   input += synapse0x12857e0();
   input += synapse0x1285820();
   input += synapse0x1285860();
   input += synapse0x12858a0();
   input += synapse0x12858e0();
   input += synapse0x1285920();
   input += synapse0x12853b0();
   input += synapse0x12853f0();
   input += synapse0x1285a70();
   input += synapse0x1285ab0();
   input += synapse0x1285af0();
   input += synapse0x1285b30();
   input += synapse0x1285b70();
   input += synapse0x1285bb0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x1285220() {
   double input = input0x1285220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x1285bf0() {
   double input = -0.150556;
   input += synapse0x126e660();
   input += synapse0x126e6a0();
   input += synapse0x126e6e0();
   input += synapse0x126e720();
   input += synapse0x126e760();
   input += synapse0x126e7a0();
   input += synapse0x126e7e0();
   input += synapse0x126e820();
   input += synapse0x1286340();
   input += synapse0x1286380();
   input += synapse0x12863c0();
   input += synapse0x1286400();
   input += synapse0x1286440();
   input += synapse0x1286480();
   input += synapse0x12864c0();
   input += synapse0x1286500();
   input += synapse0x1285d80();
   input += synapse0x1285dc0();
   input += synapse0x1286650();
   input += synapse0x1286690();
   input += synapse0x12866d0();
   input += synapse0x1286710();
   input += synapse0x1286750();
   input += synapse0x1286790();
   return input;
}

double NNfunction_sb_uLcR::neuron0x1285bf0() {
   double input = input0x1285bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x12867d0() {
   double input = 0.253869;
   input += synapse0x1286b10();
   input += synapse0x1286b50();
   input += synapse0x1286b90();
   input += synapse0x1286bd0();
   input += synapse0x1286c10();
   input += synapse0x1286c50();
   input += synapse0x1286c90();
   input += synapse0x1286cd0();
   input += synapse0x1286d10();
   input += synapse0x1286d50();
   input += synapse0x1286d90();
   input += synapse0x1286dd0();
   input += synapse0x1286e10();
   input += synapse0x1286e50();
   input += synapse0x1286e90();
   input += synapse0x1286ed0();
   input += synapse0x1286960();
   input += synapse0x12869a0();
   input += synapse0x1287020();
   input += synapse0x1287060();
   input += synapse0x12870a0();
   input += synapse0x12870e0();
   input += synapse0x1287120();
   input += synapse0x1287160();
   return input;
}

double NNfunction_sb_uLcR::neuron0x12867d0() {
   double input = input0x12867d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x12871a0() {
   double input = 2.18139;
   input += synapse0x12874e0();
   input += synapse0x1287520();
   input += synapse0x1287560();
   input += synapse0x12875a0();
   input += synapse0x12875e0();
   input += synapse0x1287620();
   input += synapse0x1287660();
   input += synapse0x12876a0();
   input += synapse0x12876e0();
   input += synapse0x1287720();
   input += synapse0x1287760();
   input += synapse0x12877a0();
   input += synapse0x12877e0();
   input += synapse0x1287820();
   input += synapse0x1287860();
   input += synapse0x12878a0();
   input += synapse0x1287330();
   input += synapse0x1287370();
   input += synapse0x1277ea0();
   input += synapse0x1277ee0();
   input += synapse0x1277f20();
   input += synapse0x1277f60();
   input += synapse0x1277fa0();
   input += synapse0x1277fe0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x12871a0() {
   double input = input0x12871a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x1278020() {
   double input = -0.541644;
   input += synapse0x1278360();
   input += synapse0x12783a0();
   input += synapse0x12783e0();
   input += synapse0x1278420();
   input += synapse0x1278460();
   input += synapse0x12784a0();
   input += synapse0x12784e0();
   input += synapse0x1278520();
   input += synapse0x1278560();
   input += synapse0x12785a0();
   input += synapse0x12785e0();
   input += synapse0x1278620();
   input += synapse0x1278660();
   input += synapse0x12786a0();
   input += synapse0x12786e0();
   input += synapse0x1278720();
   input += synapse0x12781b0();
   input += synapse0x12781f0();
   input += synapse0x1278870();
   input += synapse0x12788b0();
   input += synapse0x12788f0();
   input += synapse0x1278930();
   input += synapse0x1278970();
   input += synapse0x12789b0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x1278020() {
   double input = input0x1278020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x12789f0() {
   double input = -0.313663;
   input += synapse0x1278d30();
   input += synapse0x1278d70();
   input += synapse0x1278db0();
   input += synapse0x1278df0();
   input += synapse0x1278e30();
   input += synapse0x1278e70();
   input += synapse0x1278eb0();
   input += synapse0x1278ef0();
   input += synapse0x1278f30();
   input += synapse0x1278f70();
   input += synapse0x1278fb0();
   input += synapse0x1278ff0();
   input += synapse0x1279030();
   input += synapse0x1279070();
   input += synapse0x12790b0();
   input += synapse0x12790f0();
   input += synapse0x1278b80();
   input += synapse0x1278bc0();
   input += synapse0x1279240();
   input += synapse0x1279280();
   input += synapse0x12792c0();
   input += synapse0x1279300();
   input += synapse0x1279340();
   input += synapse0x1279380();
   return input;
}

double NNfunction_sb_uLcR::neuron0x12789f0() {
   double input = input0x12789f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x12793c0() {
   double input = 0.773741;
   input += synapse0x1279700();
   input += synapse0x1279740();
   input += synapse0x1279780();
   input += synapse0x12797c0();
   input += synapse0x1279800();
   input += synapse0x1279840();
   input += synapse0x1279880();
   input += synapse0x12798c0();
   input += synapse0x1279900();
   input += synapse0x1279940();
   input += synapse0x1279980();
   input += synapse0x12799c0();
   input += synapse0x1279a00();
   input += synapse0x1279a40();
   input += synapse0x1279a80();
   input += synapse0x1279ac0();
   input += synapse0x1279550();
   input += synapse0x1279590();
   input += synapse0x1279c10();
   input += synapse0x1279c50();
   input += synapse0x1279c90();
   input += synapse0x1279cd0();
   input += synapse0x1279d10();
   input += synapse0x1279d50();
   return input;
}

double NNfunction_sb_uLcR::neuron0x12793c0() {
   double input = input0x12793c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x128ba00() {
   double input = 1.13468;
   input += synapse0x128bc20();
   input += synapse0x128bc60();
   input += synapse0x128bca0();
   input += synapse0x128bce0();
   input += synapse0x128bd20();
   input += synapse0x128bd60();
   input += synapse0x128bda0();
   input += synapse0x128bde0();
   input += synapse0x128be20();
   input += synapse0x128be60();
   input += synapse0x128bea0();
   input += synapse0x128bee0();
   input += synapse0x128bf20();
   input += synapse0x128bf60();
   input += synapse0x128bfa0();
   input += synapse0x128bfe0();
   input += synapse0x1279d90();
   input += synapse0x1279dd0();
   input += synapse0x128c130();
   input += synapse0x128c170();
   input += synapse0x128c1b0();
   input += synapse0x128c1f0();
   input += synapse0x128c230();
   input += synapse0x128c270();
   return input;
}

double NNfunction_sb_uLcR::neuron0x128ba00() {
   double input = input0x128ba00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x128c2b0() {
   double input = 1.58858;
   input += synapse0x128c5f0();
   input += synapse0x128c630();
   input += synapse0x128c670();
   input += synapse0x128c6b0();
   input += synapse0x128c6f0();
   input += synapse0x128c730();
   input += synapse0x128c770();
   input += synapse0x128c7b0();
   input += synapse0x128c7f0();
   input += synapse0x128c830();
   input += synapse0x128c870();
   input += synapse0x128c8b0();
   input += synapse0x128c8f0();
   input += synapse0x128c930();
   input += synapse0x128c970();
   input += synapse0x128c9b0();
   input += synapse0x128c440();
   input += synapse0x128c480();
   input += synapse0x128cb00();
   input += synapse0x128cb40();
   input += synapse0x128cb80();
   input += synapse0x128cbc0();
   input += synapse0x128cc00();
   input += synapse0x128cc40();
   return input;
}

double NNfunction_sb_uLcR::neuron0x128c2b0() {
   double input = input0x128c2b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x128cc80() {
   double input = 2.36257;
   input += synapse0x128cfc0();
   input += synapse0x128d000();
   input += synapse0x128d040();
   input += synapse0x128d080();
   input += synapse0x128d0c0();
   input += synapse0x128d100();
   input += synapse0x128d140();
   input += synapse0x128d180();
   input += synapse0x128d1c0();
   input += synapse0x128d200();
   input += synapse0x128d240();
   input += synapse0x128d280();
   input += synapse0x128d2c0();
   input += synapse0x128d300();
   input += synapse0x128d340();
   input += synapse0x128d380();
   input += synapse0x128ce10();
   input += synapse0x128ce50();
   input += synapse0x128d4d0();
   input += synapse0x128d510();
   input += synapse0x128d550();
   input += synapse0x128d590();
   input += synapse0x128d5d0();
   input += synapse0x128d610();
   return input;
}

double NNfunction_sb_uLcR::neuron0x128cc80() {
   double input = input0x128cc80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x128d650() {
   double input = -0.156687;
   input += synapse0x128d990();
   input += synapse0x128d9d0();
   input += synapse0x128da10();
   input += synapse0x128da50();
   input += synapse0x128da90();
   input += synapse0x128dad0();
   input += synapse0x128db10();
   input += synapse0x128db50();
   input += synapse0x128db90();
   input += synapse0x128dbd0();
   input += synapse0x128dc10();
   input += synapse0x128dc50();
   input += synapse0x128dc90();
   input += synapse0x128dcd0();
   input += synapse0x128dd10();
   input += synapse0x128dd50();
   input += synapse0x128d7e0();
   input += synapse0x128d820();
   input += synapse0x128dea0();
   input += synapse0x128dee0();
   input += synapse0x128df20();
   input += synapse0x128df60();
   input += synapse0x128dfa0();
   input += synapse0x128dfe0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x128d650() {
   double input = input0x128d650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x1294850() {
   double input = -0.336828;
   input += synapse0x126a580();
   input += synapse0x126a5c0();
   input += synapse0x126ba90();
   input += synapse0x126bad0();
   input += synapse0x126c460();
   input += synapse0x126c4a0();
   input += synapse0x126d230();
   input += synapse0x126d270();
   input += synapse0x126dc00();
   input += synapse0x126dc40();
   input += synapse0x126e5d0();
   input += synapse0x126e610();
   input += synapse0x126f0b0();
   input += synapse0x126f0f0();
   input += synapse0x126fa80();
   input += synapse0x126fac0();
   input += synapse0x126cb60();
   input += synapse0x126cba0();
   input += synapse0x1271630();
   input += synapse0x1271670();
   input += synapse0x1272000();
   input += synapse0x1272040();
   input += synapse0x12729d0();
   input += synapse0x1272a10();
   input += synapse0x12733a0();
   input += synapse0x12733e0();
   input += synapse0x1267510();
   input += synapse0x1267550();
   input += synapse0x1275490();
   input += synapse0x12754d0();
   input += synapse0x1275e60();
   input += synapse0x1275ea0();
   input += synapse0x1276830();
   input += synapse0x1276870();
   input += synapse0x1277200();
   input += synapse0x1277240();
   input += synapse0x1277bd0();
   input += synapse0x1277c10();
   input += synapse0x1270720();
   input += synapse0x1270760();
   input += synapse0x1279fd0();
   input += synapse0x127a010();
   input += synapse0x127a960();
   input += synapse0x127a9a0();
   input += synapse0x127b330();
   input += synapse0x127b370();
   input += synapse0x127bd00();
   input += synapse0x127bd40();
   input += synapse0x127c6d0();
   input += synapse0x127c710();
   return input;
}

double NNfunction_sb_uLcR::neuron0x1294850() {
   double input = input0x1294850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x1294bf0() {
   double input = 0.247798;
   input += synapse0x127ee10();
   input += synapse0x127ee50();
   input += synapse0x12743d0();
   input += synapse0x1274410();
   input += synapse0x12819f0();
   input += synapse0x1281a30();
   input += synapse0x12823c0();
   input += synapse0x1282400();
   input += synapse0x1282d90();
   input += synapse0x1282dd0();
   input += synapse0x1283760();
   input += synapse0x12837a0();
   input += synapse0x1284130();
   input += synapse0x1284170();
   input += synapse0x1284b00();
   input += synapse0x1284b40();
   input += synapse0x12854d0();
   input += synapse0x1285510();
   input += synapse0x1285ea0();
   input += synapse0x1285ee0();
   input += synapse0x1286a80();
   input += synapse0x1286ac0();
   input += synapse0x1287450();
   input += synapse0x1287490();
   input += synapse0x12782d0();
   input += synapse0x1278310();
   input += synapse0x1278ca0();
   input += synapse0x1278ce0();
   input += synapse0x1279670();
   input += synapse0x12796b0();
   input += synapse0x128bb90();
   input += synapse0x128bbd0();
   input += synapse0x128c560();
   input += synapse0x128c5a0();
   input += synapse0x128cf30();
   input += synapse0x128cf70();
   input += synapse0x128d900();
   input += synapse0x128d940();
   input += synapse0x12697f0();
   input += synapse0x1269830();
   input += synapse0x127d0a0();
   input += synapse0x127d0e0();
   input += synapse0x128e020();
   input += synapse0x128e060();
   input += synapse0x128e0a0();
   input += synapse0x128e0e0();
   input += synapse0x1294f90();
   input += synapse0x1294fd0();
   input += synapse0x1295010();
   input += synapse0x1295050();
   return input;
}

double NNfunction_sb_uLcR::neuron0x1294bf0() {
   double input = input0x1294bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x1295090() {
   double input = 0.00186803;
   input += synapse0x12953d0();
   input += synapse0x1295410();
   input += synapse0x1295450();
   input += synapse0x1295490();
   input += synapse0x12954d0();
   input += synapse0x1295510();
   input += synapse0x1295550();
   input += synapse0x1295590();
   input += synapse0x12955d0();
   input += synapse0x1295610();
   input += synapse0x1295650();
   input += synapse0x1295690();
   input += synapse0x12956d0();
   input += synapse0x1295710();
   input += synapse0x1295750();
   input += synapse0x1295790();
   input += synapse0x1295220();
   input += synapse0x1295260();
   input += synapse0x12958e0();
   input += synapse0x1295920();
   input += synapse0x1295960();
   input += synapse0x12959a0();
   input += synapse0x12959e0();
   input += synapse0x1295a20();
   input += synapse0x1295a60();
   input += synapse0x1295aa0();
   input += synapse0x1295ae0();
   input += synapse0x1295b20();
   input += synapse0x1295b60();
   input += synapse0x1295ba0();
   input += synapse0x1295be0();
   input += synapse0x1295c20();
   input += synapse0x12957d0();
   input += synapse0x1295810();
   input += synapse0x1295850();
   input += synapse0x1295890();
   input += synapse0x1295e70();
   input += synapse0x1295eb0();
   input += synapse0x1295ef0();
   input += synapse0x1295f30();
   input += synapse0x1295f70();
   input += synapse0x1295fb0();
   input += synapse0x1295ff0();
   input += synapse0x1296030();
   input += synapse0x1296070();
   input += synapse0x12960b0();
   input += synapse0x12960f0();
   input += synapse0x1296130();
   input += synapse0x1296170();
   input += synapse0x12961b0();
   return input;
}

double NNfunction_sb_uLcR::neuron0x1295090() {
   double input = input0x1295090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x12961f0() {
   double input = 0.0330248;
   input += synapse0x1296530();
   input += synapse0x1296570();
   input += synapse0x12965b0();
   input += synapse0x12965f0();
   input += synapse0x1296630();
   input += synapse0x1296670();
   input += synapse0x12966b0();
   input += synapse0x12966f0();
   input += synapse0x1296730();
   input += synapse0x1296770();
   input += synapse0x12967b0();
   input += synapse0x12967f0();
   input += synapse0x1296830();
   input += synapse0x1296870();
   input += synapse0x12968b0();
   input += synapse0x12968f0();
   input += synapse0x1296380();
   input += synapse0x12963c0();
   input += synapse0x1296a40();
   input += synapse0x1296a80();
   input += synapse0x1296ac0();
   input += synapse0x1296b00();
   input += synapse0x1296b40();
   input += synapse0x1296b80();
   input += synapse0x1296bc0();
   input += synapse0x1296c00();
   input += synapse0x1296c40();
   input += synapse0x1296c80();
   input += synapse0x1296cc0();
   input += synapse0x1296d00();
   input += synapse0x1296d40();
   input += synapse0x1296d80();
   input += synapse0x1296930();
   input += synapse0x1296970();
   input += synapse0x12969b0();
   input += synapse0x12969f0();
   input += synapse0x1296fd0();
   input += synapse0x1297010();
   input += synapse0x1297050();
   input += synapse0x1297090();
   input += synapse0x12970d0();
   input += synapse0x1297110();
   input += synapse0x1297150();
   input += synapse0x1297190();
   input += synapse0x12971d0();
   input += synapse0x1297210();
   input += synapse0x1297250();
   input += synapse0x1297290();
   input += synapse0x12972d0();
   input += synapse0x1297310();
   return input;
}

double NNfunction_sb_uLcR::neuron0x12961f0() {
   double input = input0x12961f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x1297350() {
   double input = 1.02743;
   input += synapse0x1297690();
   input += synapse0x12976d0();
   input += synapse0x1297710();
   input += synapse0x1297750();
   input += synapse0x1297790();
   input += synapse0x12977d0();
   input += synapse0x1297810();
   input += synapse0x1297850();
   input += synapse0x1297890();
   input += synapse0x12978d0();
   input += synapse0x1297910();
   input += synapse0x1297950();
   input += synapse0x1297990();
   input += synapse0x12979d0();
   input += synapse0x1297a10();
   input += synapse0x1297a50();
   input += synapse0x12974e0();
   input += synapse0x1297520();
   input += synapse0x1297ba0();
   input += synapse0x1297be0();
   input += synapse0x1297c20();
   input += synapse0x1297c60();
   input += synapse0x1297ca0();
   input += synapse0x1297ce0();
   input += synapse0x1297d20();
   input += synapse0x1297d60();
   input += synapse0x1297da0();
   input += synapse0x1297de0();
   input += synapse0x1297e20();
   input += synapse0x1297e60();
   input += synapse0x1297ea0();
   input += synapse0x1297ee0();
   input += synapse0x1297a90();
   input += synapse0x1297ad0();
   input += synapse0x1297b10();
   input += synapse0x1297b50();
   input += synapse0x1298130();
   input += synapse0x1298170();
   input += synapse0x12981b0();
   input += synapse0x12981f0();
   input += synapse0x1298230();
   input += synapse0x1298270();
   input += synapse0x12982b0();
   input += synapse0x12982f0();
   input += synapse0x1298330();
   input += synapse0x1298370();
   input += synapse0x12983b0();
   input += synapse0x12983f0();
   input += synapse0x1298430();
   input += synapse0x1298470();
   return input;
}

double NNfunction_sb_uLcR::neuron0x1297350() {
   double input = input0x1297350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLcR::input0x12984b0() {
   double input = 8.74187;
   input += synapse0x1269590();
   input += synapse0x12986d0();
   input += synapse0x1298710();
   input += synapse0x1298750();
   input += synapse0x1298790();
   return input;
}

double NNfunction_sb_uLcR::neuron0x12984b0() {
   double input = input0x12984b0();
   return (input * 1)+0;
}

double NNfunction_sb_uLcR::synapse0x10243e0() {
   return (neuron0x1264570()*-0.231237);
}

double NNfunction_sb_uLcR::synapse0x1264430() {
   return (neuron0x12648b0()*0.069494);
}

double NNfunction_sb_uLcR::synapse0x1264470() {
   return (neuron0x1264bf0()*-0.112531);
}

double NNfunction_sb_uLcR::synapse0x1269880() {
   return (neuron0x1264f30()*0.516153);
}

double NNfunction_sb_uLcR::synapse0x12698c0() {
   return (neuron0x1265270()*-0.199096);
}

double NNfunction_sb_uLcR::synapse0x1269900() {
   return (neuron0x12655b0()*-0.0140035);
}

double NNfunction_sb_uLcR::synapse0x1269940() {
   return (neuron0x12658f0()*0.0958884);
}

double NNfunction_sb_uLcR::synapse0x1269980() {
   return (neuron0x1265c30()*0.204514);
}

double NNfunction_sb_uLcR::synapse0x12699c0() {
   return (neuron0x1265f70()*-0.0124477);
}

double NNfunction_sb_uLcR::synapse0x1269a00() {
   return (neuron0x12662b0()*0.049845);
}

double NNfunction_sb_uLcR::synapse0x1269a40() {
   return (neuron0x12665f0()*0.497166);
}

double NNfunction_sb_uLcR::synapse0x1269a80() {
   return (neuron0x1266930()*-0.139476);
}

double NNfunction_sb_uLcR::synapse0x1269ac0() {
   return (neuron0x1266c70()*0.0247182);
}

double NNfunction_sb_uLcR::synapse0x1269b00() {
   return (neuron0x1266fb0()*0.0552896);
}

double NNfunction_sb_uLcR::synapse0x1269b40() {
   return (neuron0x12672f0()*-0.352773);
}

double NNfunction_sb_uLcR::synapse0x1269b80() {
   return (neuron0x1267630()*0.943314);
}

double NNfunction_sb_uLcR::synapse0x12643a0() {
   return (neuron0x1267970()*-0.398653);
}

double NNfunction_sb_uLcR::synapse0x12643e0() {
   return (neuron0x1267ed0()*-0.0516841);
}

double NNfunction_sb_uLcR::synapse0x1015c80() {
   return (neuron0x12680f0()*-0.0322375);
}

double NNfunction_sb_uLcR::synapse0x1015cc0() {
   return (neuron0x1268430()*0.345721);
}

double NNfunction_sb_uLcR::synapse0x1269de0() {
   return (neuron0x1268770()*-0.0385185);
}

double NNfunction_sb_uLcR::synapse0x1269e20() {
   return (neuron0x1268ab0()*-0.159138);
}

double NNfunction_sb_uLcR::synapse0x1269e60() {
   return (neuron0x1268df0()*-0.08092);
}

double NNfunction_sb_uLcR::synapse0x1269ea0() {
   return (neuron0x1269130()*-0.213195);
}

double NNfunction_sb_uLcR::synapse0x126a220() {
   return (neuron0x1264570()*0.079483);
}

double NNfunction_sb_uLcR::synapse0x126a260() {
   return (neuron0x12648b0()*0.0776185);
}

double NNfunction_sb_uLcR::synapse0x126a2a0() {
   return (neuron0x1264bf0()*-0.0246883);
}

double NNfunction_sb_uLcR::synapse0x126a2e0() {
   return (neuron0x1264f30()*-0.605285);
}

double NNfunction_sb_uLcR::synapse0x126a320() {
   return (neuron0x1265270()*-0.0817772);
}

double NNfunction_sb_uLcR::synapse0x126a360() {
   return (neuron0x12655b0()*-0.198944);
}

double NNfunction_sb_uLcR::synapse0x126a3a0() {
   return (neuron0x12658f0()*0.363716);
}

double NNfunction_sb_uLcR::synapse0x126a3e0() {
   return (neuron0x1265c30()*-0.110463);
}

double NNfunction_sb_uLcR::synapse0x126a420() {
   return (neuron0x1265f70()*0.266262);
}

double NNfunction_sb_uLcR::synapse0x1269cd0() {
   return (neuron0x12662b0()*-0.424345);
}

double NNfunction_sb_uLcR::synapse0x1269d10() {
   return (neuron0x12665f0()*-0.070909);
}

double NNfunction_sb_uLcR::synapse0x1269d50() {
   return (neuron0x1266930()*0.037894);
}

double NNfunction_sb_uLcR::synapse0x1269d90() {
   return (neuron0x1266c70()*-0.411651);
}

double NNfunction_sb_uLcR::synapse0x126a670() {
   return (neuron0x1266fb0()*-0.168675);
}

double NNfunction_sb_uLcR::synapse0x126a6b0() {
   return (neuron0x12672f0()*-0.120856);
}

double NNfunction_sb_uLcR::synapse0x126a6f0() {
   return (neuron0x1267630()*-0.164309);
}

double NNfunction_sb_uLcR::synapse0x126a070() {
   return (neuron0x1267970()*0.133149);
}

double NNfunction_sb_uLcR::synapse0x126a0b0() {
   return (neuron0x1267ed0()*-0.29676);
}

double NNfunction_sb_uLcR::synapse0x126a840() {
   return (neuron0x12680f0()*0.469852);
}

double NNfunction_sb_uLcR::synapse0x126a880() {
   return (neuron0x1268430()*-0.135664);
}

double NNfunction_sb_uLcR::synapse0x126a8c0() {
   return (neuron0x1268770()*0.0869112);
}

double NNfunction_sb_uLcR::synapse0x126a900() {
   return (neuron0x1268ab0()*-0.0714136);
}

double NNfunction_sb_uLcR::synapse0x126a940() {
   return (neuron0x1268df0()*0.0513724);
}

double NNfunction_sb_uLcR::synapse0x126a980() {
   return (neuron0x1269130()*-0.104362);
}

double NNfunction_sb_uLcR::synapse0x126ad00() {
   return (neuron0x1264570()*0.0411816);
}

double NNfunction_sb_uLcR::synapse0x126ad40() {
   return (neuron0x12648b0()*-0.166176);
}

double NNfunction_sb_uLcR::synapse0x126ad80() {
   return (neuron0x1264bf0()*-0.0656437);
}

double NNfunction_sb_uLcR::synapse0x126adc0() {
   return (neuron0x1264f30()*-0.344302);
}

double NNfunction_sb_uLcR::synapse0x126ae00() {
   return (neuron0x1265270()*-0.151736);
}

double NNfunction_sb_uLcR::synapse0x126ae40() {
   return (neuron0x12655b0()*-0.42211);
}

double NNfunction_sb_uLcR::synapse0x126ae80() {
   return (neuron0x12658f0()*-0.0974457);
}

double NNfunction_sb_uLcR::synapse0x126aec0() {
   return (neuron0x1265c30()*-0.357256);
}

double NNfunction_sb_uLcR::synapse0x126af00() {
   return (neuron0x1265f70()*0.084129);
}

double NNfunction_sb_uLcR::synapse0x126af40() {
   return (neuron0x12662b0()*-0.198782);
}

double NNfunction_sb_uLcR::synapse0x126af80() {
   return (neuron0x12665f0()*0.00334547);
}

double NNfunction_sb_uLcR::synapse0x126afc0() {
   return (neuron0x1266930()*-0.666455);
}

double NNfunction_sb_uLcR::synapse0x126b000() {
   return (neuron0x1266c70()*0.0224816);
}

double NNfunction_sb_uLcR::synapse0x126b040() {
   return (neuron0x1266fb0()*-0.275255);
}

double NNfunction_sb_uLcR::synapse0x126b080() {
   return (neuron0x12672f0()*-0.104309);
}

double NNfunction_sb_uLcR::synapse0x126b0c0() {
   return (neuron0x1267630()*-0.946063);
}

double NNfunction_sb_uLcR::synapse0x126ab50() {
   return (neuron0x1267970()*-0.0310839);
}

double NNfunction_sb_uLcR::synapse0x126ab90() {
   return (neuron0x1267ed0()*-0.0667747);
}

double NNfunction_sb_uLcR::synapse0x1023ad0() {
   return (neuron0x12680f0()*-0.136397);
}

double NNfunction_sb_uLcR::synapse0x1023b10() {
   return (neuron0x1268430()*-0.107487);
}

double NNfunction_sb_uLcR::synapse0x1253600() {
   return (neuron0x1268770()*-0.0216565);
}

double NNfunction_sb_uLcR::synapse0x1253640() {
   return (neuron0x1268ab0()*-0.018231);
}

double NNfunction_sb_uLcR::synapse0x1253680() {
   return (neuron0x1268df0()*0.210904);
}

double NNfunction_sb_uLcR::synapse0x12644b0() {
   return (neuron0x1269130()*0.181973);
}

double NNfunction_sb_uLcR::synapse0x126a610() {
   return (neuron0x1264570()*-0.210908);
}

double NNfunction_sb_uLcR::synapse0x12644f0() {
   return (neuron0x12648b0()*-0.179779);
}

double NNfunction_sb_uLcR::synapse0x1264530() {
   return (neuron0x1264bf0()*0.086977);
}

double NNfunction_sb_uLcR::synapse0x126b210() {
   return (neuron0x1264f30()*-0.751414);
}

double NNfunction_sb_uLcR::synapse0x126b250() {
   return (neuron0x1265270()*0.322567);
}

double NNfunction_sb_uLcR::synapse0x126b290() {
   return (neuron0x12655b0()*-0.0116213);
}

double NNfunction_sb_uLcR::synapse0x126b2d0() {
   return (neuron0x12658f0()*0.324586);
}

double NNfunction_sb_uLcR::synapse0x126b310() {
   return (neuron0x1265c30()*-0.77359);
}

double NNfunction_sb_uLcR::synapse0x126b350() {
   return (neuron0x1265f70()*0.303895);
}

double NNfunction_sb_uLcR::synapse0x126b390() {
   return (neuron0x12662b0()*-0.280409);
}

double NNfunction_sb_uLcR::synapse0x126b3d0() {
   return (neuron0x12665f0()*0.407069);
}

double NNfunction_sb_uLcR::synapse0x126b410() {
   return (neuron0x1266930()*-0.217166);
}

double NNfunction_sb_uLcR::synapse0x126b450() {
   return (neuron0x1266c70()*-0.613147);
}

double NNfunction_sb_uLcR::synapse0x126b490() {
   return (neuron0x1266fb0()*0.235364);
}

double NNfunction_sb_uLcR::synapse0x126b4d0() {
   return (neuron0x12672f0()*-0.146536);
}

double NNfunction_sb_uLcR::synapse0x126b510() {
   return (neuron0x1267630()*-1.09404);
}

double NNfunction_sb_uLcR::synapse0x126a460() {
   return (neuron0x1267970()*-0.0201031);
}

double NNfunction_sb_uLcR::synapse0x126a4a0() {
   return (neuron0x1267ed0()*-0.14297);
}

double NNfunction_sb_uLcR::synapse0x126b660() {
   return (neuron0x12680f0()*0.0502576);
}

double NNfunction_sb_uLcR::synapse0x126b6a0() {
   return (neuron0x1268430()*-0.0923503);
}

double NNfunction_sb_uLcR::synapse0x126b6e0() {
   return (neuron0x1268770()*-0.0558142);
}

double NNfunction_sb_uLcR::synapse0x126b720() {
   return (neuron0x1268ab0()*0.195325);
}

double NNfunction_sb_uLcR::synapse0x126b760() {
   return (neuron0x1268df0()*-0.455272);
}

double NNfunction_sb_uLcR::synapse0x126b7a0() {
   return (neuron0x1269130()*0.174858);
}

double NNfunction_sb_uLcR::synapse0x126bb20() {
   return (neuron0x1264570()*0.0829521);
}

double NNfunction_sb_uLcR::synapse0x126bb60() {
   return (neuron0x12648b0()*-0.0011548);
}

double NNfunction_sb_uLcR::synapse0x126bba0() {
   return (neuron0x1264bf0()*-0.119615);
}

double NNfunction_sb_uLcR::synapse0x126bbe0() {
   return (neuron0x1264f30()*0.501408);
}

double NNfunction_sb_uLcR::synapse0x126bc20() {
   return (neuron0x1265270()*0.108814);
}

double NNfunction_sb_uLcR::synapse0x126bc60() {
   return (neuron0x12655b0()*-0.746477);
}

double NNfunction_sb_uLcR::synapse0x126bca0() {
   return (neuron0x12658f0()*0.249875);
}

double NNfunction_sb_uLcR::synapse0x126bce0() {
   return (neuron0x1265c30()*0.209236);
}

double NNfunction_sb_uLcR::synapse0x126bd20() {
   return (neuron0x1265f70()*-0.219834);
}

double NNfunction_sb_uLcR::synapse0x126bd60() {
   return (neuron0x12662b0()*0.0960932);
}

double NNfunction_sb_uLcR::synapse0x126bda0() {
   return (neuron0x12665f0()*0.0706087);
}

double NNfunction_sb_uLcR::synapse0x126bde0() {
   return (neuron0x1266930()*-0.263521);
}

double NNfunction_sb_uLcR::synapse0x126be20() {
   return (neuron0x1266c70()*-0.0459175);
}

double NNfunction_sb_uLcR::synapse0x126be60() {
   return (neuron0x1266fb0()*0.0620425);
}

double NNfunction_sb_uLcR::synapse0x126bea0() {
   return (neuron0x12672f0()*0.553098);
}

double NNfunction_sb_uLcR::synapse0x126bee0() {
   return (neuron0x1267630()*-0.732269);
}

double NNfunction_sb_uLcR::synapse0x126b970() {
   return (neuron0x1267970()*-0.122538);
}

double NNfunction_sb_uLcR::synapse0x126b9b0() {
   return (neuron0x1267ed0()*-0.0183369);
}

double NNfunction_sb_uLcR::synapse0x126c030() {
   return (neuron0x12680f0()*-0.0975683);
}

double NNfunction_sb_uLcR::synapse0x126c070() {
   return (neuron0x1268430()*0.251548);
}

double NNfunction_sb_uLcR::synapse0x126c0b0() {
   return (neuron0x1268770()*0.167521);
}

double NNfunction_sb_uLcR::synapse0x126c0f0() {
   return (neuron0x1268ab0()*0.421667);
}

double NNfunction_sb_uLcR::synapse0x126c130() {
   return (neuron0x1268df0()*-0.0319704);
}

double NNfunction_sb_uLcR::synapse0x126c170() {
   return (neuron0x1269130()*0.21487);
}

double NNfunction_sb_uLcR::synapse0x126c4f0() {
   return (neuron0x1264570()*-0.166452);
}

double NNfunction_sb_uLcR::synapse0x126c530() {
   return (neuron0x12648b0()*0.0375651);
}

double NNfunction_sb_uLcR::synapse0x126c570() {
   return (neuron0x1264bf0()*-0.279397);
}

double NNfunction_sb_uLcR::synapse0x126c5b0() {
   return (neuron0x1264f30()*-1.06375);
}

double NNfunction_sb_uLcR::synapse0x126c5f0() {
   return (neuron0x1265270()*-0.0751734);
}

double NNfunction_sb_uLcR::synapse0x126c630() {
   return (neuron0x12655b0()*0.144787);
}

double NNfunction_sb_uLcR::synapse0x126c670() {
   return (neuron0x12658f0()*-0.0653472);
}

double NNfunction_sb_uLcR::synapse0x126c6b0() {
   return (neuron0x1265c30()*0.392285);
}

double NNfunction_sb_uLcR::synapse0x126c6f0() {
   return (neuron0x1265f70()*-0.149417);
}

double NNfunction_sb_uLcR::synapse0x1023e40() {
   return (neuron0x12662b0()*-0.0474301);
}

double NNfunction_sb_uLcR::synapse0x1023e80() {
   return (neuron0x12665f0()*-0.0666398);
}

double NNfunction_sb_uLcR::synapse0x1023ec0() {
   return (neuron0x1266930()*0.272195);
}

double NNfunction_sb_uLcR::synapse0x1023f00() {
   return (neuron0x1266c70()*-0.0955182);
}

double NNfunction_sb_uLcR::synapse0x1023f40() {
   return (neuron0x1266fb0()*-0.0376763);
}

double NNfunction_sb_uLcR::synapse0x1023f80() {
   return (neuron0x12672f0()*0.0797091);
}

double NNfunction_sb_uLcR::synapse0x1023fc0() {
   return (neuron0x1267630()*-0.206505);
}

double NNfunction_sb_uLcR::synapse0x126c340() {
   return (neuron0x1267970()*0.160372);
}

double NNfunction_sb_uLcR::synapse0x126c380() {
   return (neuron0x1267ed0()*0.0187661);
}

double NNfunction_sb_uLcR::synapse0x1024110() {
   return (neuron0x12680f0()*-0.190753);
}

double NNfunction_sb_uLcR::synapse0x1024150() {
   return (neuron0x1268430()*-0.0104141);
}

double NNfunction_sb_uLcR::synapse0x1024190() {
   return (neuron0x1268770()*0.00101284);
}

double NNfunction_sb_uLcR::synapse0x10241d0() {
   return (neuron0x1268ab0()*0.0361146);
}

double NNfunction_sb_uLcR::synapse0x1024210() {
   return (neuron0x1268df0()*0.0730188);
}

double NNfunction_sb_uLcR::synapse0x126cf40() {
   return (neuron0x1269130()*-0.0503913);
}

double NNfunction_sb_uLcR::synapse0x126d2c0() {
   return (neuron0x1264570()*-0.0127769);
}

double NNfunction_sb_uLcR::synapse0x126d300() {
   return (neuron0x12648b0()*-0.0326836);
}

double NNfunction_sb_uLcR::synapse0x126d340() {
   return (neuron0x1264bf0()*-0.0206841);
}

double NNfunction_sb_uLcR::synapse0x126d380() {
   return (neuron0x1264f30()*10.9621);
}

double NNfunction_sb_uLcR::synapse0x126d3c0() {
   return (neuron0x1265270()*0.0117782);
}

double NNfunction_sb_uLcR::synapse0x126d400() {
   return (neuron0x12655b0()*-0.036418);
}

double NNfunction_sb_uLcR::synapse0x126d440() {
   return (neuron0x12658f0()*-0.000492359);
}

double NNfunction_sb_uLcR::synapse0x126d480() {
   return (neuron0x1265c30()*-0.0304409);
}

double NNfunction_sb_uLcR::synapse0x126d4c0() {
   return (neuron0x1265f70()*-0.00798082);
}

double NNfunction_sb_uLcR::synapse0x126d500() {
   return (neuron0x12662b0()*0.0183053);
}

double NNfunction_sb_uLcR::synapse0x126d540() {
   return (neuron0x12665f0()*0.0030264);
}

double NNfunction_sb_uLcR::synapse0x126d580() {
   return (neuron0x1266930()*0.791958);
}

double NNfunction_sb_uLcR::synapse0x126d5c0() {
   return (neuron0x1266c70()*-0.0101323);
}

double NNfunction_sb_uLcR::synapse0x126d600() {
   return (neuron0x1266fb0()*0.0132887);
}

double NNfunction_sb_uLcR::synapse0x126d640() {
   return (neuron0x12672f0()*-0.00216101);
}

double NNfunction_sb_uLcR::synapse0x126d680() {
   return (neuron0x1267630()*-0.204716);
}

double NNfunction_sb_uLcR::synapse0x126d110() {
   return (neuron0x1267970()*0.00513207);
}

double NNfunction_sb_uLcR::synapse0x126d150() {
   return (neuron0x1267ed0()*-0.0170695);
}

double NNfunction_sb_uLcR::synapse0x126d7d0() {
   return (neuron0x12680f0()*-0.00248051);
}

double NNfunction_sb_uLcR::synapse0x126d810() {
   return (neuron0x1268430()*-0.00667362);
}

double NNfunction_sb_uLcR::synapse0x126d850() {
   return (neuron0x1268770()*-0.0214743);
}

double NNfunction_sb_uLcR::synapse0x126d890() {
   return (neuron0x1268ab0()*0.0192492);
}

double NNfunction_sb_uLcR::synapse0x126d8d0() {
   return (neuron0x1268df0()*0.017897);
}

double NNfunction_sb_uLcR::synapse0x126d910() {
   return (neuron0x1269130()*0.033799);
}

double NNfunction_sb_uLcR::synapse0x126dc90() {
   return (neuron0x1264570()*-0.859747);
}

double NNfunction_sb_uLcR::synapse0x126dcd0() {
   return (neuron0x12648b0()*-0.383825);
}

double NNfunction_sb_uLcR::synapse0x126dd10() {
   return (neuron0x1264bf0()*0.0945645);
}

double NNfunction_sb_uLcR::synapse0x126dd50() {
   return (neuron0x1264f30()*0.0256205);
}

double NNfunction_sb_uLcR::synapse0x126dd90() {
   return (neuron0x1265270()*-0.203253);
}

double NNfunction_sb_uLcR::synapse0x126ddd0() {
   return (neuron0x12655b0()*-0.248455);
}

double NNfunction_sb_uLcR::synapse0x126de10() {
   return (neuron0x12658f0()*-0.00621924);
}

double NNfunction_sb_uLcR::synapse0x126de50() {
   return (neuron0x1265c30()*-0.220205);
}

double NNfunction_sb_uLcR::synapse0x126de90() {
   return (neuron0x1265f70()*0.00965585);
}

double NNfunction_sb_uLcR::synapse0x126ded0() {
   return (neuron0x12662b0()*0.0278526);
}

double NNfunction_sb_uLcR::synapse0x126df10() {
   return (neuron0x12665f0()*-0.306935);
}

double NNfunction_sb_uLcR::synapse0x126df50() {
   return (neuron0x1266930()*-0.173945);
}

double NNfunction_sb_uLcR::synapse0x126df90() {
   return (neuron0x1266c70()*-0.35644);
}

double NNfunction_sb_uLcR::synapse0x126dfd0() {
   return (neuron0x1266fb0()*-0.18662);
}

double NNfunction_sb_uLcR::synapse0x126e010() {
   return (neuron0x12672f0()*0.349323);
}

double NNfunction_sb_uLcR::synapse0x126e050() {
   return (neuron0x1267630()*0.457634);
}

double NNfunction_sb_uLcR::synapse0x126dae0() {
   return (neuron0x1267970()*0.566002);
}

double NNfunction_sb_uLcR::synapse0x126db20() {
   return (neuron0x1267ed0()*-0.0342892);
}

double NNfunction_sb_uLcR::synapse0x126e1a0() {
   return (neuron0x12680f0()*0.601622);
}

double NNfunction_sb_uLcR::synapse0x126e1e0() {
   return (neuron0x1268430()*0.7154);
}

double NNfunction_sb_uLcR::synapse0x126e220() {
   return (neuron0x1268770()*0.304091);
}

double NNfunction_sb_uLcR::synapse0x126e260() {
   return (neuron0x1268ab0()*0.557151);
}

double NNfunction_sb_uLcR::synapse0x126e2a0() {
   return (neuron0x1268df0()*-0.11737);
}

double NNfunction_sb_uLcR::synapse0x126e2e0() {
   return (neuron0x1269130()*-0.402979);
}

double NNfunction_sb_uLcR::synapse0x1267dc0() {
   return (neuron0x1264570()*0.398545);
}

double NNfunction_sb_uLcR::synapse0x1267e00() {
   return (neuron0x12648b0()*0.406178);
}

double NNfunction_sb_uLcR::synapse0x1267e40() {
   return (neuron0x1264bf0()*0.359454);
}

double NNfunction_sb_uLcR::synapse0x1267e80() {
   return (neuron0x1264f30()*-0.491744);
}

double NNfunction_sb_uLcR::synapse0x126e870() {
   return (neuron0x1265270()*-0.839716);
}

double NNfunction_sb_uLcR::synapse0x126e8b0() {
   return (neuron0x12655b0()*-0.194719);
}

double NNfunction_sb_uLcR::synapse0x126e8f0() {
   return (neuron0x12658f0()*-0.135562);
}

double NNfunction_sb_uLcR::synapse0x126e930() {
   return (neuron0x1265c30()*0.288562);
}

double NNfunction_sb_uLcR::synapse0x126e970() {
   return (neuron0x1265f70()*0.503056);
}

double NNfunction_sb_uLcR::synapse0x126e9b0() {
   return (neuron0x12662b0()*0.0139416);
}

double NNfunction_sb_uLcR::synapse0x126e9f0() {
   return (neuron0x12665f0()*0.539574);
}

double NNfunction_sb_uLcR::synapse0x126ea30() {
   return (neuron0x1266930()*-0.118018);
}

double NNfunction_sb_uLcR::synapse0x126ea70() {
   return (neuron0x1266c70()*0.0386126);
}

double NNfunction_sb_uLcR::synapse0x126eab0() {
   return (neuron0x1266fb0()*-0.562345);
}

double NNfunction_sb_uLcR::synapse0x126eaf0() {
   return (neuron0x12672f0()*0.0784594);
}

double NNfunction_sb_uLcR::synapse0x126eb30() {
   return (neuron0x1267630()*0.155373);
}

double NNfunction_sb_uLcR::synapse0x126e4b0() {
   return (neuron0x1267970()*0.173316);
}

double NNfunction_sb_uLcR::synapse0x126e4f0() {
   return (neuron0x1267ed0()*0.320347);
}

double NNfunction_sb_uLcR::synapse0x126ec80() {
   return (neuron0x12680f0()*-0.775719);
}

double NNfunction_sb_uLcR::synapse0x126ecc0() {
   return (neuron0x1268430()*-0.427619);
}

double NNfunction_sb_uLcR::synapse0x126ed00() {
   return (neuron0x1268770()*-0.0951752);
}

double NNfunction_sb_uLcR::synapse0x126ed40() {
   return (neuron0x1268ab0()*-0.121918);
}

double NNfunction_sb_uLcR::synapse0x126ed80() {
   return (neuron0x1268df0()*0.0623111);
}

double NNfunction_sb_uLcR::synapse0x126edc0() {
   return (neuron0x1269130()*0.618845);
}

double NNfunction_sb_uLcR::synapse0x126f140() {
   return (neuron0x1264570()*-0.0441515);
}

double NNfunction_sb_uLcR::synapse0x126f180() {
   return (neuron0x12648b0()*0.0573027);
}

double NNfunction_sb_uLcR::synapse0x126f1c0() {
   return (neuron0x1264bf0()*-0.0620415);
}

double NNfunction_sb_uLcR::synapse0x126f200() {
   return (neuron0x1264f30()*0.129082);
}

double NNfunction_sb_uLcR::synapse0x126f240() {
   return (neuron0x1265270()*-0.175645);
}

double NNfunction_sb_uLcR::synapse0x126f280() {
   return (neuron0x12655b0()*-0.0875127);
}

double NNfunction_sb_uLcR::synapse0x126f2c0() {
   return (neuron0x12658f0()*-0.816879);
}

double NNfunction_sb_uLcR::synapse0x126f300() {
   return (neuron0x1265c30()*0.237871);
}

double NNfunction_sb_uLcR::synapse0x126f340() {
   return (neuron0x1265f70()*0.0848281);
}

double NNfunction_sb_uLcR::synapse0x126f380() {
   return (neuron0x12662b0()*-0.00347606);
}

double NNfunction_sb_uLcR::synapse0x126f3c0() {
   return (neuron0x12665f0()*-0.10278);
}

double NNfunction_sb_uLcR::synapse0x126f400() {
   return (neuron0x1266930()*-0.214583);
}

double NNfunction_sb_uLcR::synapse0x126f440() {
   return (neuron0x1266c70()*0.0835598);
}

double NNfunction_sb_uLcR::synapse0x126f480() {
   return (neuron0x1266fb0()*-0.062911);
}

double NNfunction_sb_uLcR::synapse0x126f4c0() {
   return (neuron0x12672f0()*0.103685);
}

double NNfunction_sb_uLcR::synapse0x126f500() {
   return (neuron0x1267630()*1.48618);
}

double NNfunction_sb_uLcR::synapse0x126ef90() {
   return (neuron0x1267970()*-0.0109298);
}

double NNfunction_sb_uLcR::synapse0x126efd0() {
   return (neuron0x1267ed0()*0.0969014);
}

double NNfunction_sb_uLcR::synapse0x126f650() {
   return (neuron0x12680f0()*-0.0718486);
}

double NNfunction_sb_uLcR::synapse0x126f690() {
   return (neuron0x1268430()*0.158416);
}

double NNfunction_sb_uLcR::synapse0x126f6d0() {
   return (neuron0x1268770()*0.437155);
}

double NNfunction_sb_uLcR::synapse0x126f710() {
   return (neuron0x1268ab0()*0.0348509);
}

double NNfunction_sb_uLcR::synapse0x126f750() {
   return (neuron0x1268df0()*0.33679);
}

double NNfunction_sb_uLcR::synapse0x126f790() {
   return (neuron0x1269130()*0.117019);
}

double NNfunction_sb_uLcR::synapse0x126fb10() {
   return (neuron0x1264570()*0.133133);
}

double NNfunction_sb_uLcR::synapse0x126fb50() {
   return (neuron0x12648b0()*-0.127438);
}

double NNfunction_sb_uLcR::synapse0x126fb90() {
   return (neuron0x1264bf0()*0.146449);
}

double NNfunction_sb_uLcR::synapse0x126fbd0() {
   return (neuron0x1264f30()*0.191503);
}

double NNfunction_sb_uLcR::synapse0x126fc10() {
   return (neuron0x1265270()*0.193381);
}

double NNfunction_sb_uLcR::synapse0x126fc50() {
   return (neuron0x12655b0()*-0.484144);
}

double NNfunction_sb_uLcR::synapse0x126fc90() {
   return (neuron0x12658f0()*-0.213948);
}

double NNfunction_sb_uLcR::synapse0x126fcd0() {
   return (neuron0x1265c30()*0.00929699);
}

double NNfunction_sb_uLcR::synapse0x126fd10() {
   return (neuron0x1265f70()*-0.431534);
}

double NNfunction_sb_uLcR::synapse0x126fd50() {
   return (neuron0x12662b0()*0.150728);
}

double NNfunction_sb_uLcR::synapse0x126fd90() {
   return (neuron0x12665f0()*0.209094);
}

double NNfunction_sb_uLcR::synapse0x126fdd0() {
   return (neuron0x1266930()*-0.205073);
}

double NNfunction_sb_uLcR::synapse0x126fe10() {
   return (neuron0x1266c70()*-0.476006);
}

double NNfunction_sb_uLcR::synapse0x126fe50() {
   return (neuron0x1266fb0()*-0.0568471);
}

double NNfunction_sb_uLcR::synapse0x126fe90() {
   return (neuron0x12672f0()*-0.893687);
}

double NNfunction_sb_uLcR::synapse0x126fed0() {
   return (neuron0x1267630()*-0.292963);
}

double NNfunction_sb_uLcR::synapse0x126f960() {
   return (neuron0x1267970()*-0.14606);
}

double NNfunction_sb_uLcR::synapse0x126f9a0() {
   return (neuron0x1267ed0()*-0.394519);
}

double NNfunction_sb_uLcR::synapse0x126c730() {
   return (neuron0x12680f0()*-0.352402);
}

double NNfunction_sb_uLcR::synapse0x126c770() {
   return (neuron0x1268430()*-0.122551);
}

double NNfunction_sb_uLcR::synapse0x126c7b0() {
   return (neuron0x1268770()*0.138566);
}

double NNfunction_sb_uLcR::synapse0x126c7f0() {
   return (neuron0x1268ab0()*0.0378674);
}

double NNfunction_sb_uLcR::synapse0x126c830() {
   return (neuron0x1268df0()*0.180974);
}

double NNfunction_sb_uLcR::synapse0x126c870() {
   return (neuron0x1269130()*-0.11624);
}

double NNfunction_sb_uLcR::synapse0x126cbf0() {
   return (neuron0x1264570()*0.180068);
}

double NNfunction_sb_uLcR::synapse0x126cc30() {
   return (neuron0x12648b0()*0.353818);
}

double NNfunction_sb_uLcR::synapse0x126cc70() {
   return (neuron0x1264bf0()*0.175409);
}

double NNfunction_sb_uLcR::synapse0x126ccb0() {
   return (neuron0x1264f30()*-0.537224);
}

double NNfunction_sb_uLcR::synapse0x126ccf0() {
   return (neuron0x1265270()*-0.168613);
}

double NNfunction_sb_uLcR::synapse0x126cd30() {
   return (neuron0x12655b0()*-0.245402);
}

double NNfunction_sb_uLcR::synapse0x126cd70() {
   return (neuron0x12658f0()*0.0380577);
}

double NNfunction_sb_uLcR::synapse0x126cdb0() {
   return (neuron0x1265c30()*-0.167508);
}

double NNfunction_sb_uLcR::synapse0x126cdf0() {
   return (neuron0x1265f70()*0.225824);
}

double NNfunction_sb_uLcR::synapse0x126ce30() {
   return (neuron0x12662b0()*0.0405198);
}

double NNfunction_sb_uLcR::synapse0x126ce70() {
   return (neuron0x12665f0()*0.232911);
}

double NNfunction_sb_uLcR::synapse0x126ceb0() {
   return (neuron0x1266930()*-0.043473);
}

double NNfunction_sb_uLcR::synapse0x126cef0() {
   return (neuron0x1266c70()*0.193108);
}

double NNfunction_sb_uLcR::synapse0x1271030() {
   return (neuron0x1266fb0()*-0.0466169);
}

double NNfunction_sb_uLcR::synapse0x1271070() {
   return (neuron0x12672f0()*-0.0859839);
}

double NNfunction_sb_uLcR::synapse0x12710b0() {
   return (neuron0x1267630()*-0.416897);
}

double NNfunction_sb_uLcR::synapse0x126ca40() {
   return (neuron0x1267970()*0.169053);
}

double NNfunction_sb_uLcR::synapse0x126ca80() {
   return (neuron0x1267ed0()*-0.192934);
}

double NNfunction_sb_uLcR::synapse0x1271200() {
   return (neuron0x12680f0()*-0.666685);
}

double NNfunction_sb_uLcR::synapse0x1271240() {
   return (neuron0x1268430()*0.0428184);
}

double NNfunction_sb_uLcR::synapse0x1271280() {
   return (neuron0x1268770()*0.187507);
}

double NNfunction_sb_uLcR::synapse0x12712c0() {
   return (neuron0x1268ab0()*0.168513);
}

double NNfunction_sb_uLcR::synapse0x1271300() {
   return (neuron0x1268df0()*-0.0502649);
}

double NNfunction_sb_uLcR::synapse0x1271340() {
   return (neuron0x1269130()*-0.0410873);
}

double NNfunction_sb_uLcR::synapse0x12716c0() {
   return (neuron0x1264570()*-0.00541133);
}

double NNfunction_sb_uLcR::synapse0x1271700() {
   return (neuron0x12648b0()*0.0525002);
}

double NNfunction_sb_uLcR::synapse0x1271740() {
   return (neuron0x1264bf0()*0.0170123);
}

double NNfunction_sb_uLcR::synapse0x1271780() {
   return (neuron0x1264f30()*-15.8017);
}

double NNfunction_sb_uLcR::synapse0x12717c0() {
   return (neuron0x1265270()*-0.00829795);
}

double NNfunction_sb_uLcR::synapse0x1271800() {
   return (neuron0x12655b0()*0.00844389);
}

double NNfunction_sb_uLcR::synapse0x1271840() {
   return (neuron0x12658f0()*-0.000702164);
}

double NNfunction_sb_uLcR::synapse0x1271880() {
   return (neuron0x1265c30()*0.0213524);
}

double NNfunction_sb_uLcR::synapse0x12718c0() {
   return (neuron0x1265f70()*0.0151769);
}

double NNfunction_sb_uLcR::synapse0x1271900() {
   return (neuron0x12662b0()*-0.015242);
}

double NNfunction_sb_uLcR::synapse0x1271940() {
   return (neuron0x12665f0()*0.0129444);
}

double NNfunction_sb_uLcR::synapse0x1271980() {
   return (neuron0x1266930()*-0.0991557);
}

double NNfunction_sb_uLcR::synapse0x12719c0() {
   return (neuron0x1266c70()*-0.00101061);
}

double NNfunction_sb_uLcR::synapse0x1271a00() {
   return (neuron0x1266fb0()*0.0176198);
}

double NNfunction_sb_uLcR::synapse0x1271a40() {
   return (neuron0x12672f0()*-0.0319413);
}

double NNfunction_sb_uLcR::synapse0x1271a80() {
   return (neuron0x1267630()*0.673196);
}

double NNfunction_sb_uLcR::synapse0x1271510() {
   return (neuron0x1267970()*0.00613898);
}

double NNfunction_sb_uLcR::synapse0x1271550() {
   return (neuron0x1267ed0()*0.0100361);
}

double NNfunction_sb_uLcR::synapse0x1271bd0() {
   return (neuron0x12680f0()*-0.0135657);
}

double NNfunction_sb_uLcR::synapse0x1271c10() {
   return (neuron0x1268430()*0.0173533);
}

double NNfunction_sb_uLcR::synapse0x1271c50() {
   return (neuron0x1268770()*-0.0156638);
}

double NNfunction_sb_uLcR::synapse0x1271c90() {
   return (neuron0x1268ab0()*-0.034676);
}

double NNfunction_sb_uLcR::synapse0x1271cd0() {
   return (neuron0x1268df0()*-0.0137829);
}

double NNfunction_sb_uLcR::synapse0x1271d10() {
   return (neuron0x1269130()*-0.0448914);
}

double NNfunction_sb_uLcR::synapse0x1272090() {
   return (neuron0x1264570()*0.257461);
}

double NNfunction_sb_uLcR::synapse0x12720d0() {
   return (neuron0x12648b0()*-0.411248);
}

double NNfunction_sb_uLcR::synapse0x1272110() {
   return (neuron0x1264bf0()*1.09095);
}

double NNfunction_sb_uLcR::synapse0x1272150() {
   return (neuron0x1264f30()*-0.0231644);
}

double NNfunction_sb_uLcR::synapse0x1272190() {
   return (neuron0x1265270()*0.421628);
}

double NNfunction_sb_uLcR::synapse0x12721d0() {
   return (neuron0x12655b0()*-0.00670279);
}

double NNfunction_sb_uLcR::synapse0x1272210() {
   return (neuron0x12658f0()*-0.00734063);
}

double NNfunction_sb_uLcR::synapse0x1272250() {
   return (neuron0x1265c30()*0.0172807);
}

double NNfunction_sb_uLcR::synapse0x1272290() {
   return (neuron0x1265f70()*0.232039);
}

double NNfunction_sb_uLcR::synapse0x12722d0() {
   return (neuron0x12662b0()*0.0379866);
}

double NNfunction_sb_uLcR::synapse0x1272310() {
   return (neuron0x12665f0()*-0.317339);
}

double NNfunction_sb_uLcR::synapse0x1272350() {
   return (neuron0x1266930()*-0.377494);
}

double NNfunction_sb_uLcR::synapse0x1272390() {
   return (neuron0x1266c70()*-0.0823702);
}

double NNfunction_sb_uLcR::synapse0x12723d0() {
   return (neuron0x1266fb0()*0.318322);
}

double NNfunction_sb_uLcR::synapse0x1272410() {
   return (neuron0x12672f0()*-0.0507699);
}

double NNfunction_sb_uLcR::synapse0x1272450() {
   return (neuron0x1267630()*0.493159);
}

double NNfunction_sb_uLcR::synapse0x1271ee0() {
   return (neuron0x1267970()*-0.119258);
}

double NNfunction_sb_uLcR::synapse0x1271f20() {
   return (neuron0x1267ed0()*7.94756e-05);
}

double NNfunction_sb_uLcR::synapse0x12725a0() {
   return (neuron0x12680f0()*0.0197964);
}

double NNfunction_sb_uLcR::synapse0x12725e0() {
   return (neuron0x1268430()*-0.209838);
}

double NNfunction_sb_uLcR::synapse0x1272620() {
   return (neuron0x1268770()*0.30254);
}

double NNfunction_sb_uLcR::synapse0x1272660() {
   return (neuron0x1268ab0()*-0.177295);
}

double NNfunction_sb_uLcR::synapse0x12726a0() {
   return (neuron0x1268df0()*0.109666);
}

double NNfunction_sb_uLcR::synapse0x12726e0() {
   return (neuron0x1269130()*-0.00795892);
}

double NNfunction_sb_uLcR::synapse0x1272a60() {
   return (neuron0x1264570()*0.011571);
}

double NNfunction_sb_uLcR::synapse0x1272aa0() {
   return (neuron0x12648b0()*-0.00195406);
}

double NNfunction_sb_uLcR::synapse0x1272ae0() {
   return (neuron0x1264bf0()*0.0543475);
}

double NNfunction_sb_uLcR::synapse0x1272b20() {
   return (neuron0x1264f30()*-0.109502);
}

double NNfunction_sb_uLcR::synapse0x1272b60() {
   return (neuron0x1265270()*-0.00593478);
}

double NNfunction_sb_uLcR::synapse0x1272ba0() {
   return (neuron0x12655b0()*0.0238204);
}

double NNfunction_sb_uLcR::synapse0x1272be0() {
   return (neuron0x12658f0()*-0.0175229);
}

double NNfunction_sb_uLcR::synapse0x1272c20() {
   return (neuron0x1265c30()*-0.000498534);
}

double NNfunction_sb_uLcR::synapse0x1272c60() {
   return (neuron0x1265f70()*0.00774179);
}

double NNfunction_sb_uLcR::synapse0x1272ca0() {
   return (neuron0x12662b0()*-0.00818931);
}

double NNfunction_sb_uLcR::synapse0x1272ce0() {
   return (neuron0x12665f0()*-0.0042431);
}

double NNfunction_sb_uLcR::synapse0x1272d20() {
   return (neuron0x1266930()*0.0990521);
}

double NNfunction_sb_uLcR::synapse0x1272d60() {
   return (neuron0x1266c70()*0.0294162);
}

double NNfunction_sb_uLcR::synapse0x1272da0() {
   return (neuron0x1266fb0()*-0.0278507);
}

double NNfunction_sb_uLcR::synapse0x1272de0() {
   return (neuron0x12672f0()*0.0393014);
}

double NNfunction_sb_uLcR::synapse0x1272e20() {
   return (neuron0x1267630()*-1.92851);
}

double NNfunction_sb_uLcR::synapse0x12728b0() {
   return (neuron0x1267970()*-0.0171588);
}

double NNfunction_sb_uLcR::synapse0x12728f0() {
   return (neuron0x1267ed0()*0.00513413);
}

double NNfunction_sb_uLcR::synapse0x1272f70() {
   return (neuron0x12680f0()*0.0231832);
}

double NNfunction_sb_uLcR::synapse0x1272fb0() {
   return (neuron0x1268430()*-0.0286973);
}

double NNfunction_sb_uLcR::synapse0x1272ff0() {
   return (neuron0x1268770()*0.0100698);
}

double NNfunction_sb_uLcR::synapse0x1273030() {
   return (neuron0x1268ab0()*0.00688778);
}

double NNfunction_sb_uLcR::synapse0x1273070() {
   return (neuron0x1268df0()*-0.00760593);
}

double NNfunction_sb_uLcR::synapse0x12730b0() {
   return (neuron0x1269130()*-0.0147427);
}

double NNfunction_sb_uLcR::synapse0x1273430() {
   return (neuron0x1264570()*-0.19584);
}

double NNfunction_sb_uLcR::synapse0x1264790() {
   return (neuron0x12648b0()*0.402463);
}

double NNfunction_sb_uLcR::synapse0x12647d0() {
   return (neuron0x1264bf0()*0.170087);
}

double NNfunction_sb_uLcR::synapse0x1264ad0() {
   return (neuron0x1264f30()*-0.605204);
}

double NNfunction_sb_uLcR::synapse0x1264b10() {
   return (neuron0x1265270()*-0.57232);
}

double NNfunction_sb_uLcR::synapse0x1264e10() {
   return (neuron0x12655b0()*0.0769326);
}

double NNfunction_sb_uLcR::synapse0x1264e50() {
   return (neuron0x12658f0()*0.407291);
}

double NNfunction_sb_uLcR::synapse0x1265150() {
   return (neuron0x1265c30()*-0.00549086);
}

double NNfunction_sb_uLcR::synapse0x1265190() {
   return (neuron0x1265f70()*-0.10903);
}

double NNfunction_sb_uLcR::synapse0x1265490() {
   return (neuron0x12662b0()*0.286167);
}

double NNfunction_sb_uLcR::synapse0x12654d0() {
   return (neuron0x12665f0()*-0.312352);
}

double NNfunction_sb_uLcR::synapse0x12657d0() {
   return (neuron0x1266930()*0.133536);
}

double NNfunction_sb_uLcR::synapse0x1265810() {
   return (neuron0x1266c70()*0.0193171);
}

double NNfunction_sb_uLcR::synapse0x1265b10() {
   return (neuron0x1266fb0()*-0.307586);
}

double NNfunction_sb_uLcR::synapse0x1265b50() {
   return (neuron0x12672f0()*-0.0332412);
}

double NNfunction_sb_uLcR::synapse0x1265e50() {
   return (neuron0x1267630()*-0.304873);
}

double NNfunction_sb_uLcR::synapse0x1265e90() {
   return (neuron0x1267970()*0.355853);
}

double NNfunction_sb_uLcR::synapse0x1266190() {
   return (neuron0x1267ed0()*-0.729726);
}

double NNfunction_sb_uLcR::synapse0x12661d0() {
   return (neuron0x12680f0()*0.541382);
}

double NNfunction_sb_uLcR::synapse0x12664d0() {
   return (neuron0x1268430()*-0.141031);
}

double NNfunction_sb_uLcR::synapse0x1266510() {
   return (neuron0x1268770()*-0.439487);
}

double NNfunction_sb_uLcR::synapse0x1266810() {
   return (neuron0x1268ab0()*0.156765);
}

double NNfunction_sb_uLcR::synapse0x1266850() {
   return (neuron0x1268df0()*-0.31749);
}

double NNfunction_sb_uLcR::synapse0x1266b50() {
   return (neuron0x1269130()*-0.00685462);
}

double NNfunction_sb_uLcR::synapse0x1266b90() {
   return (neuron0x1264570()*-0.00269738);
}

double NNfunction_sb_uLcR::synapse0x1267850() {
   return (neuron0x12648b0()*0.00029375);
}

double NNfunction_sb_uLcR::synapse0x1267890() {
   return (neuron0x1264bf0()*0.0159024);
}

double NNfunction_sb_uLcR::synapse0x1273280() {
   return (neuron0x1264f30()*-2.61432);
}

double NNfunction_sb_uLcR::synapse0x12732c0() {
   return (neuron0x1265270()*0.00314113);
}

double NNfunction_sb_uLcR::synapse0x1267b90() {
   return (neuron0x12655b0()*0.0136491);
}

double NNfunction_sb_uLcR::synapse0x1267bd0() {
   return (neuron0x12658f0()*0.0046707);
}

double NNfunction_sb_uLcR::synapse0x1015b60() {
   return (neuron0x1265c30()*0.00856962);
}

double NNfunction_sb_uLcR::synapse0x1015ba0() {
   return (neuron0x1265f70()*-0.00498184);
}

double NNfunction_sb_uLcR::synapse0x1268310() {
   return (neuron0x12662b0()*0.00393603);
}

double NNfunction_sb_uLcR::synapse0x1268350() {
   return (neuron0x12665f0()*0.00140472);
}

double NNfunction_sb_uLcR::synapse0x1268650() {
   return (neuron0x1266930()*0.192856);
}

double NNfunction_sb_uLcR::synapse0x1268690() {
   return (neuron0x1266c70()*0.000941847);
}

double NNfunction_sb_uLcR::synapse0x1268990() {
   return (neuron0x1266fb0()*0.00431001);
}

double NNfunction_sb_uLcR::synapse0x12689d0() {
   return (neuron0x12672f0()*-0.0157867);
}

double NNfunction_sb_uLcR::synapse0x1268cd0() {
   return (neuron0x1267630()*0.201985);
}

double NNfunction_sb_uLcR::synapse0x1268d10() {
   return (neuron0x1267970()*-0.00369726);
}

double NNfunction_sb_uLcR::synapse0x1269010() {
   return (neuron0x1267ed0()*-0.00872612);
}

double NNfunction_sb_uLcR::synapse0x1269050() {
   return (neuron0x12680f0()*-0.00116782);
}

double NNfunction_sb_uLcR::synapse0x1269350() {
   return (neuron0x1268430()*-0.0141965);
}

double NNfunction_sb_uLcR::synapse0x1269390() {
   return (neuron0x1268770()*-0.0099753);
}

double NNfunction_sb_uLcR::synapse0x1266e90() {
   return (neuron0x1268ab0()*-0.0081443);
}

double NNfunction_sb_uLcR::synapse0x1266ed0() {
   return (neuron0x1268df0()*0.000664019);
}

double NNfunction_sb_uLcR::synapse0x12751a0() {
   return (neuron0x1269130()*-0.00633061);
}

double NNfunction_sb_uLcR::synapse0x1275520() {
   return (neuron0x1264570()*0.144195);
}

double NNfunction_sb_uLcR::synapse0x1275560() {
   return (neuron0x12648b0()*0.0701812);
}

double NNfunction_sb_uLcR::synapse0x12755a0() {
   return (neuron0x1264bf0()*0.153141);
}

double NNfunction_sb_uLcR::synapse0x12755e0() {
   return (neuron0x1264f30()*-0.12886);
}

double NNfunction_sb_uLcR::synapse0x1275620() {
   return (neuron0x1265270()*0.292469);
}

double NNfunction_sb_uLcR::synapse0x1275660() {
   return (neuron0x12655b0()*-0.279445);
}

double NNfunction_sb_uLcR::synapse0x12756a0() {
   return (neuron0x12658f0()*0.312864);
}

double NNfunction_sb_uLcR::synapse0x12756e0() {
   return (neuron0x1265c30()*-0.848284);
}

double NNfunction_sb_uLcR::synapse0x1275720() {
   return (neuron0x1265f70()*-0.0221939);
}

double NNfunction_sb_uLcR::synapse0x1275760() {
   return (neuron0x12662b0()*-0.0725699);
}

double NNfunction_sb_uLcR::synapse0x12757a0() {
   return (neuron0x12665f0()*-0.264557);
}

double NNfunction_sb_uLcR::synapse0x12757e0() {
   return (neuron0x1266930()*0.105485);
}

double NNfunction_sb_uLcR::synapse0x1275820() {
   return (neuron0x1266c70()*-0.115053);
}

double NNfunction_sb_uLcR::synapse0x1275860() {
   return (neuron0x1266fb0()*-0.137884);
}

double NNfunction_sb_uLcR::synapse0x12758a0() {
   return (neuron0x12672f0()*-0.0993715);
}

double NNfunction_sb_uLcR::synapse0x12758e0() {
   return (neuron0x1267630()*0.839995);
}

double NNfunction_sb_uLcR::synapse0x1275370() {
   return (neuron0x1267970()*0.117796);
}

double NNfunction_sb_uLcR::synapse0x12753b0() {
   return (neuron0x1267ed0()*-0.105532);
}

double NNfunction_sb_uLcR::synapse0x1275a30() {
   return (neuron0x12680f0()*-0.13582);
}

double NNfunction_sb_uLcR::synapse0x1275a70() {
   return (neuron0x1268430()*-0.244349);
}

double NNfunction_sb_uLcR::synapse0x1275ab0() {
   return (neuron0x1268770()*0.114627);
}

double NNfunction_sb_uLcR::synapse0x1275af0() {
   return (neuron0x1268ab0()*0.168188);
}

double NNfunction_sb_uLcR::synapse0x1275b30() {
   return (neuron0x1268df0()*0.0557697);
}

double NNfunction_sb_uLcR::synapse0x1275b70() {
   return (neuron0x1269130()*0.0903539);
}

double NNfunction_sb_uLcR::synapse0x1275ef0() {
   return (neuron0x1264570()*-0.738622);
}

double NNfunction_sb_uLcR::synapse0x1275f30() {
   return (neuron0x12648b0()*0.0247798);
}

double NNfunction_sb_uLcR::synapse0x1275f70() {
   return (neuron0x1264bf0()*-0.192314);
}

double NNfunction_sb_uLcR::synapse0x1275fb0() {
   return (neuron0x1264f30()*0.490216);
}

double NNfunction_sb_uLcR::synapse0x1275ff0() {
   return (neuron0x1265270()*-0.28982);
}

double NNfunction_sb_uLcR::synapse0x1276030() {
   return (neuron0x12655b0()*0.154801);
}

double NNfunction_sb_uLcR::synapse0x1276070() {
   return (neuron0x12658f0()*-1.07106);
}

double NNfunction_sb_uLcR::synapse0x12760b0() {
   return (neuron0x1265c30()*0.125915);
}

double NNfunction_sb_uLcR::synapse0x12760f0() {
   return (neuron0x1265f70()*0.181641);
}

double NNfunction_sb_uLcR::synapse0x1276130() {
   return (neuron0x12662b0()*0.24074);
}

double NNfunction_sb_uLcR::synapse0x1276170() {
   return (neuron0x12665f0()*-0.258903);
}

double NNfunction_sb_uLcR::synapse0x12761b0() {
   return (neuron0x1266930()*-0.924401);
}

double NNfunction_sb_uLcR::synapse0x12761f0() {
   return (neuron0x1266c70()*0.0630768);
}

double NNfunction_sb_uLcR::synapse0x1276230() {
   return (neuron0x1266fb0()*0.301071);
}

double NNfunction_sb_uLcR::synapse0x1276270() {
   return (neuron0x12672f0()*-0.0883564);
}

double NNfunction_sb_uLcR::synapse0x12762b0() {
   return (neuron0x1267630()*0.193376);
}

double NNfunction_sb_uLcR::synapse0x1275d40() {
   return (neuron0x1267970()*-0.0933624);
}

double NNfunction_sb_uLcR::synapse0x1275d80() {
   return (neuron0x1267ed0()*-0.042674);
}

double NNfunction_sb_uLcR::synapse0x1276400() {
   return (neuron0x12680f0()*-0.399294);
}

double NNfunction_sb_uLcR::synapse0x1276440() {
   return (neuron0x1268430()*-0.63038);
}

double NNfunction_sb_uLcR::synapse0x1276480() {
   return (neuron0x1268770()*-0.278815);
}

double NNfunction_sb_uLcR::synapse0x12764c0() {
   return (neuron0x1268ab0()*-0.318291);
}

double NNfunction_sb_uLcR::synapse0x1276500() {
   return (neuron0x1268df0()*-0.251572);
}

double NNfunction_sb_uLcR::synapse0x1276540() {
   return (neuron0x1269130()*-0.345035);
}

double NNfunction_sb_uLcR::synapse0x12768c0() {
   return (neuron0x1264570()*0.166838);
}

double NNfunction_sb_uLcR::synapse0x1276900() {
   return (neuron0x12648b0()*0.0914559);
}

double NNfunction_sb_uLcR::synapse0x1276940() {
   return (neuron0x1264bf0()*-0.0128655);
}

double NNfunction_sb_uLcR::synapse0x1276980() {
   return (neuron0x1264f30()*-0.773105);
}

double NNfunction_sb_uLcR::synapse0x12769c0() {
   return (neuron0x1265270()*-0.00455248);
}

double NNfunction_sb_uLcR::synapse0x1276a00() {
   return (neuron0x12655b0()*0.115694);
}

double NNfunction_sb_uLcR::synapse0x1276a40() {
   return (neuron0x12658f0()*-0.0553863);
}

double NNfunction_sb_uLcR::synapse0x1276a80() {
   return (neuron0x1265c30()*0.00165364);
}

double NNfunction_sb_uLcR::synapse0x1276ac0() {
   return (neuron0x1265f70()*0.0993456);
}

double NNfunction_sb_uLcR::synapse0x1276b00() {
   return (neuron0x12662b0()*-0.0189905);
}

double NNfunction_sb_uLcR::synapse0x1276b40() {
   return (neuron0x12665f0()*0.0781714);
}

double NNfunction_sb_uLcR::synapse0x1276b80() {
   return (neuron0x1266930()*0.33613);
}

double NNfunction_sb_uLcR::synapse0x1276bc0() {
   return (neuron0x1266c70()*0.427395);
}

double NNfunction_sb_uLcR::synapse0x1276c00() {
   return (neuron0x1266fb0()*0.0135002);
}

double NNfunction_sb_uLcR::synapse0x1276c40() {
   return (neuron0x12672f0()*-0.134386);
}

double NNfunction_sb_uLcR::synapse0x1276c80() {
   return (neuron0x1267630()*-0.183788);
}

double NNfunction_sb_uLcR::synapse0x1276710() {
   return (neuron0x1267970()*-0.0130133);
}

double NNfunction_sb_uLcR::synapse0x1276750() {
   return (neuron0x1267ed0()*-0.192632);
}

double NNfunction_sb_uLcR::synapse0x1276dd0() {
   return (neuron0x12680f0()*0.272019);
}

double NNfunction_sb_uLcR::synapse0x1276e10() {
   return (neuron0x1268430()*-0.174252);
}

double NNfunction_sb_uLcR::synapse0x1276e50() {
   return (neuron0x1268770()*-0.00478403);
}

double NNfunction_sb_uLcR::synapse0x1276e90() {
   return (neuron0x1268ab0()*-0.099796);
}

double NNfunction_sb_uLcR::synapse0x1276ed0() {
   return (neuron0x1268df0()*0.0293372);
}

double NNfunction_sb_uLcR::synapse0x1276f10() {
   return (neuron0x1269130()*0.026354);
}

double NNfunction_sb_uLcR::synapse0x1277290() {
   return (neuron0x1264570()*-0.00312008);
}

double NNfunction_sb_uLcR::synapse0x12772d0() {
   return (neuron0x12648b0()*-0.00151383);
}

double NNfunction_sb_uLcR::synapse0x1277310() {
   return (neuron0x1264bf0()*-0.0524889);
}

double NNfunction_sb_uLcR::synapse0x1277350() {
   return (neuron0x1264f30()*-4.18181);
}

double NNfunction_sb_uLcR::synapse0x1277390() {
   return (neuron0x1265270()*0.000992155);
}

double NNfunction_sb_uLcR::synapse0x12773d0() {
   return (neuron0x12655b0()*-0.0554054);
}

double NNfunction_sb_uLcR::synapse0x1277410() {
   return (neuron0x12658f0()*-0.00743159);
}

double NNfunction_sb_uLcR::synapse0x1277450() {
   return (neuron0x1265c30()*0.0262603);
}

double NNfunction_sb_uLcR::synapse0x1277490() {
   return (neuron0x1265f70()*0.025824);
}

double NNfunction_sb_uLcR::synapse0x12774d0() {
   return (neuron0x12662b0()*-0.0690212);
}

double NNfunction_sb_uLcR::synapse0x1277510() {
   return (neuron0x12665f0()*-0.011404);
}

double NNfunction_sb_uLcR::synapse0x1277550() {
   return (neuron0x1266930()*-0.0875894);
}

double NNfunction_sb_uLcR::synapse0x1277590() {
   return (neuron0x1266c70()*-0.0264696);
}

double NNfunction_sb_uLcR::synapse0x12775d0() {
   return (neuron0x1266fb0()*0.0231182);
}

double NNfunction_sb_uLcR::synapse0x1277610() {
   return (neuron0x12672f0()*0.0174736);
}

double NNfunction_sb_uLcR::synapse0x1277650() {
   return (neuron0x1267630()*0.732801);
}

double NNfunction_sb_uLcR::synapse0x12770e0() {
   return (neuron0x1267970()*0.0179842);
}

double NNfunction_sb_uLcR::synapse0x1277120() {
   return (neuron0x1267ed0()*-0.0586106);
}

double NNfunction_sb_uLcR::synapse0x12777a0() {
   return (neuron0x12680f0()*-0.0472751);
}

double NNfunction_sb_uLcR::synapse0x12777e0() {
   return (neuron0x1268430()*-0.0048805);
}

double NNfunction_sb_uLcR::synapse0x1277820() {
   return (neuron0x1268770()*0.0162152);
}

double NNfunction_sb_uLcR::synapse0x1277860() {
   return (neuron0x1268ab0()*-0.00946221);
}

double NNfunction_sb_uLcR::synapse0x12778a0() {
   return (neuron0x1268df0()*-0.00818683);
}

double NNfunction_sb_uLcR::synapse0x12778e0() {
   return (neuron0x1269130()*-0.00524751);
}

double NNfunction_sb_uLcR::synapse0x1277c60() {
   return (neuron0x1264570()*0.0132507);
}

double NNfunction_sb_uLcR::synapse0x1277ca0() {
   return (neuron0x12648b0()*0.148923);
}

double NNfunction_sb_uLcR::synapse0x1277ce0() {
   return (neuron0x1264bf0()*0.0709473);
}

double NNfunction_sb_uLcR::synapse0x1277d20() {
   return (neuron0x1264f30()*0.9284);
}

double NNfunction_sb_uLcR::synapse0x1277d60() {
   return (neuron0x1265270()*-0.0311332);
}

double NNfunction_sb_uLcR::synapse0x1277da0() {
   return (neuron0x12655b0()*-0.0101635);
}

double NNfunction_sb_uLcR::synapse0x1277de0() {
   return (neuron0x12658f0()*-0.00766941);
}

double NNfunction_sb_uLcR::synapse0x1277e20() {
   return (neuron0x1265c30()*0.0668232);
}

double NNfunction_sb_uLcR::synapse0x1277e60() {
   return (neuron0x1265f70()*-0.0754792);
}

double NNfunction_sb_uLcR::synapse0x1270020() {
   return (neuron0x12662b0()*0.0106953);
}

double NNfunction_sb_uLcR::synapse0x1270060() {
   return (neuron0x12665f0()*-0.0105001);
}

double NNfunction_sb_uLcR::synapse0x12700a0() {
   return (neuron0x1266930()*-0.178411);
}

double NNfunction_sb_uLcR::synapse0x12700e0() {
   return (neuron0x1266c70()*0.0818999);
}

double NNfunction_sb_uLcR::synapse0x1270120() {
   return (neuron0x1266fb0()*-0.0498974);
}

double NNfunction_sb_uLcR::synapse0x1270160() {
   return (neuron0x12672f0()*-0.0131869);
}

double NNfunction_sb_uLcR::synapse0x12701a0() {
   return (neuron0x1267630()*-0.638628);
}

double NNfunction_sb_uLcR::synapse0x1277ab0() {
   return (neuron0x1267970()*-0.0222729);
}

double NNfunction_sb_uLcR::synapse0x1277af0() {
   return (neuron0x1267ed0()*-0.0962991);
}

double NNfunction_sb_uLcR::synapse0x12702f0() {
   return (neuron0x12680f0()*0.0944647);
}

double NNfunction_sb_uLcR::synapse0x1270330() {
   return (neuron0x1268430()*0.105314);
}

double NNfunction_sb_uLcR::synapse0x1270370() {
   return (neuron0x1268770()*0.0934876);
}

double NNfunction_sb_uLcR::synapse0x12703b0() {
   return (neuron0x1268ab0()*0.0891527);
}

double NNfunction_sb_uLcR::synapse0x12703f0() {
   return (neuron0x1268df0()*0.0429432);
}

double NNfunction_sb_uLcR::synapse0x1270430() {
   return (neuron0x1269130()*-0.0201866);
}

double NNfunction_sb_uLcR::synapse0x12707b0() {
   return (neuron0x1264570()*0.432429);
}

double NNfunction_sb_uLcR::synapse0x12707f0() {
   return (neuron0x12648b0()*0.373749);
}

double NNfunction_sb_uLcR::synapse0x1270830() {
   return (neuron0x1264bf0()*0.657446);
}

double NNfunction_sb_uLcR::synapse0x1270870() {
   return (neuron0x1264f30()*0.523804);
}

double NNfunction_sb_uLcR::synapse0x12708b0() {
   return (neuron0x1265270()*-0.0244418);
}

double NNfunction_sb_uLcR::synapse0x12708f0() {
   return (neuron0x12655b0()*0.553391);
}

double NNfunction_sb_uLcR::synapse0x1270930() {
   return (neuron0x12658f0()*0.306739);
}

double NNfunction_sb_uLcR::synapse0x1270970() {
   return (neuron0x1265c30()*-0.0555953);
}

double NNfunction_sb_uLcR::synapse0x12709b0() {
   return (neuron0x1265f70()*0.192444);
}

double NNfunction_sb_uLcR::synapse0x12709f0() {
   return (neuron0x12662b0()*0.811902);
}

double NNfunction_sb_uLcR::synapse0x1270a30() {
   return (neuron0x12665f0()*0.0443148);
}

double NNfunction_sb_uLcR::synapse0x1270a70() {
   return (neuron0x1266930()*0.300719);
}

double NNfunction_sb_uLcR::synapse0x1270ab0() {
   return (neuron0x1266c70()*-0.104478);
}

double NNfunction_sb_uLcR::synapse0x1270af0() {
   return (neuron0x1266fb0()*-0.0364375);
}

double NNfunction_sb_uLcR::synapse0x1270b30() {
   return (neuron0x12672f0()*0.0544887);
}

double NNfunction_sb_uLcR::synapse0x1270b70() {
   return (neuron0x1267630()*0.647835);
}

double NNfunction_sb_uLcR::synapse0x1270600() {
   return (neuron0x1267970()*0.45175);
}

double NNfunction_sb_uLcR::synapse0x1270640() {
   return (neuron0x1267ed0()*-0.0573747);
}

double NNfunction_sb_uLcR::synapse0x1270cc0() {
   return (neuron0x12680f0()*-0.432473);
}

double NNfunction_sb_uLcR::synapse0x1270d00() {
   return (neuron0x1268430()*0.0895725);
}

double NNfunction_sb_uLcR::synapse0x1270d40() {
   return (neuron0x1268770()*-0.143274);
}

double NNfunction_sb_uLcR::synapse0x1270d80() {
   return (neuron0x1268ab0()*-0.629298);
}

double NNfunction_sb_uLcR::synapse0x1270dc0() {
   return (neuron0x1268df0()*-0.00784786);
}

double NNfunction_sb_uLcR::synapse0x1270e00() {
   return (neuron0x1269130()*-0.454427);
}

double NNfunction_sb_uLcR::synapse0x1270fd0() {
   return (neuron0x1264570()*0.461247);
}

double NNfunction_sb_uLcR::synapse0x127a060() {
   return (neuron0x12648b0()*0.00865531);
}

double NNfunction_sb_uLcR::synapse0x127a0a0() {
   return (neuron0x1264bf0()*0.0161914);
}

double NNfunction_sb_uLcR::synapse0x127a0e0() {
   return (neuron0x1264f30()*0.446331);
}

double NNfunction_sb_uLcR::synapse0x127a120() {
   return (neuron0x1265270()*-0.0898094);
}

double NNfunction_sb_uLcR::synapse0x127a160() {
   return (neuron0x12655b0()*0.502067);
}

double NNfunction_sb_uLcR::synapse0x127a1a0() {
   return (neuron0x12658f0()*0.704221);
}

double NNfunction_sb_uLcR::synapse0x127a1e0() {
   return (neuron0x1265c30()*0.0250747);
}

double NNfunction_sb_uLcR::synapse0x127a220() {
   return (neuron0x1265f70()*0.0903661);
}

double NNfunction_sb_uLcR::synapse0x127a260() {
   return (neuron0x12662b0()*-0.178007);
}

double NNfunction_sb_uLcR::synapse0x127a2a0() {
   return (neuron0x12665f0()*-0.257507);
}

double NNfunction_sb_uLcR::synapse0x127a2e0() {
   return (neuron0x1266930()*1.29377);
}

double NNfunction_sb_uLcR::synapse0x127a320() {
   return (neuron0x1266c70()*0.420051);
}

double NNfunction_sb_uLcR::synapse0x127a360() {
   return (neuron0x1266fb0()*0.00452222);
}

double NNfunction_sb_uLcR::synapse0x127a3a0() {
   return (neuron0x12672f0()*0.158695);
}

double NNfunction_sb_uLcR::synapse0x127a3e0() {
   return (neuron0x1267630()*0.581442);
}

double NNfunction_sb_uLcR::synapse0x1279eb0() {
   return (neuron0x1267970()*0.391154);
}

double NNfunction_sb_uLcR::synapse0x1279ef0() {
   return (neuron0x1267ed0()*0.179341);
}

double NNfunction_sb_uLcR::synapse0x127a530() {
   return (neuron0x12680f0()*0.202577);
}

double NNfunction_sb_uLcR::synapse0x127a570() {
   return (neuron0x1268430()*-0.0810878);
}

double NNfunction_sb_uLcR::synapse0x127a5b0() {
   return (neuron0x1268770()*0.0797895);
}

double NNfunction_sb_uLcR::synapse0x127a5f0() {
   return (neuron0x1268ab0()*-0.141908);
}

double NNfunction_sb_uLcR::synapse0x127a630() {
   return (neuron0x1268df0()*0.556652);
}

double NNfunction_sb_uLcR::synapse0x127a670() {
   return (neuron0x1269130()*-0.0541995);
}

double NNfunction_sb_uLcR::synapse0x127a9f0() {
   return (neuron0x1264570()*0.0151435);
}

double NNfunction_sb_uLcR::synapse0x127aa30() {
   return (neuron0x12648b0()*-0.0330903);
}

double NNfunction_sb_uLcR::synapse0x127aa70() {
   return (neuron0x1264bf0()*0.0423165);
}

double NNfunction_sb_uLcR::synapse0x127aab0() {
   return (neuron0x1264f30()*-2.6955);
}

double NNfunction_sb_uLcR::synapse0x127aaf0() {
   return (neuron0x1265270()*0.0450504);
}

double NNfunction_sb_uLcR::synapse0x127ab30() {
   return (neuron0x12655b0()*0.134382);
}

double NNfunction_sb_uLcR::synapse0x127ab70() {
   return (neuron0x12658f0()*0.0106417);
}

double NNfunction_sb_uLcR::synapse0x127abb0() {
   return (neuron0x1265c30()*-0.0656411);
}

double NNfunction_sb_uLcR::synapse0x127abf0() {
   return (neuron0x1265f70()*-0.0140366);
}

double NNfunction_sb_uLcR::synapse0x127ac30() {
   return (neuron0x12662b0()*0.0602024);
}

double NNfunction_sb_uLcR::synapse0x127ac70() {
   return (neuron0x12665f0()*-0.0266146);
}

double NNfunction_sb_uLcR::synapse0x127acb0() {
   return (neuron0x1266930()*0.293442);
}

double NNfunction_sb_uLcR::synapse0x127acf0() {
   return (neuron0x1266c70()*0.0136226);
}

double NNfunction_sb_uLcR::synapse0x127ad30() {
   return (neuron0x1266fb0()*-0.00789556);
}

double NNfunction_sb_uLcR::synapse0x127ad70() {
   return (neuron0x12672f0()*0.0564619);
}

double NNfunction_sb_uLcR::synapse0x127adb0() {
   return (neuron0x1267630()*0.574842);
}

double NNfunction_sb_uLcR::synapse0x127a840() {
   return (neuron0x1267970()*0.0460227);
}

double NNfunction_sb_uLcR::synapse0x127a880() {
   return (neuron0x1267ed0()*0.130384);
}

double NNfunction_sb_uLcR::synapse0x127af00() {
   return (neuron0x12680f0()*-0.0120382);
}

double NNfunction_sb_uLcR::synapse0x127af40() {
   return (neuron0x1268430()*0.0922275);
}

double NNfunction_sb_uLcR::synapse0x127af80() {
   return (neuron0x1268770()*-0.0225818);
}

double NNfunction_sb_uLcR::synapse0x127afc0() {
   return (neuron0x1268ab0()*-0.00910261);
}

double NNfunction_sb_uLcR::synapse0x127b000() {
   return (neuron0x1268df0()*0.00456094);
}

double NNfunction_sb_uLcR::synapse0x127b040() {
   return (neuron0x1269130()*0.00870096);
}

double NNfunction_sb_uLcR::synapse0x127b3c0() {
   return (neuron0x1264570()*0.00275059);
}

double NNfunction_sb_uLcR::synapse0x127b400() {
   return (neuron0x12648b0()*0.00103949);
}

double NNfunction_sb_uLcR::synapse0x127b440() {
   return (neuron0x1264bf0()*-0.0187845);
}

double NNfunction_sb_uLcR::synapse0x127b480() {
   return (neuron0x1264f30()*-0.0166219);
}

double NNfunction_sb_uLcR::synapse0x127b4c0() {
   return (neuron0x1265270()*0.00328852);
}

double NNfunction_sb_uLcR::synapse0x127b500() {
   return (neuron0x12655b0()*-0.0119877);
}

double NNfunction_sb_uLcR::synapse0x127b540() {
   return (neuron0x12658f0()*-0.00385434);
}

double NNfunction_sb_uLcR::synapse0x127b580() {
   return (neuron0x1265c30()*-0.00192626);
}

double NNfunction_sb_uLcR::synapse0x127b5c0() {
   return (neuron0x1265f70()*0.000353792);
}

double NNfunction_sb_uLcR::synapse0x127b600() {
   return (neuron0x12662b0()*-0.0118128);
}

double NNfunction_sb_uLcR::synapse0x127b640() {
   return (neuron0x12665f0()*-6.68913e-05);
}

double NNfunction_sb_uLcR::synapse0x127b680() {
   return (neuron0x1266930()*0.451083);
}

double NNfunction_sb_uLcR::synapse0x127b6c0() {
   return (neuron0x1266c70()*-0.0616928);
}

double NNfunction_sb_uLcR::synapse0x127b700() {
   return (neuron0x1266fb0()*0.00690137);
}

double NNfunction_sb_uLcR::synapse0x127b740() {
   return (neuron0x12672f0()*-0.0186248);
}

double NNfunction_sb_uLcR::synapse0x127b780() {
   return (neuron0x1267630()*0.626464);
}

double NNfunction_sb_uLcR::synapse0x127b210() {
   return (neuron0x1267970()*0.0120492);
}

double NNfunction_sb_uLcR::synapse0x127b250() {
   return (neuron0x1267ed0()*-0.027075);
}

double NNfunction_sb_uLcR::synapse0x127b8d0() {
   return (neuron0x12680f0()*-0.0329126);
}

double NNfunction_sb_uLcR::synapse0x127b910() {
   return (neuron0x1268430()*-0.011862);
}

double NNfunction_sb_uLcR::synapse0x127b950() {
   return (neuron0x1268770()*-0.00110242);
}

double NNfunction_sb_uLcR::synapse0x127b990() {
   return (neuron0x1268ab0()*-0.00563802);
}

double NNfunction_sb_uLcR::synapse0x127b9d0() {
   return (neuron0x1268df0()*-0.002589);
}

double NNfunction_sb_uLcR::synapse0x127ba10() {
   return (neuron0x1269130()*0.00332997);
}

double NNfunction_sb_uLcR::synapse0x127bd90() {
   return (neuron0x1264570()*0.0904079);
}

double NNfunction_sb_uLcR::synapse0x127bdd0() {
   return (neuron0x12648b0()*0.27249);
}

double NNfunction_sb_uLcR::synapse0x127be10() {
   return (neuron0x1264bf0()*0.418309);
}

double NNfunction_sb_uLcR::synapse0x127be50() {
   return (neuron0x1264f30()*-0.144556);
}

double NNfunction_sb_uLcR::synapse0x127be90() {
   return (neuron0x1265270()*0.154628);
}

double NNfunction_sb_uLcR::synapse0x127bed0() {
   return (neuron0x12655b0()*0.147409);
}

double NNfunction_sb_uLcR::synapse0x127bf10() {
   return (neuron0x12658f0()*-0.193717);
}

double NNfunction_sb_uLcR::synapse0x127bf50() {
   return (neuron0x1265c30()*0.0909941);
}

double NNfunction_sb_uLcR::synapse0x127bf90() {
   return (neuron0x1265f70()*-0.401453);
}

double NNfunction_sb_uLcR::synapse0x127bfd0() {
   return (neuron0x12662b0()*-0.315485);
}

double NNfunction_sb_uLcR::synapse0x127c010() {
   return (neuron0x12665f0()*0.348678);
}

double NNfunction_sb_uLcR::synapse0x127c050() {
   return (neuron0x1266930()*-0.635265);
}

double NNfunction_sb_uLcR::synapse0x127c090() {
   return (neuron0x1266c70()*-0.152984);
}

double NNfunction_sb_uLcR::synapse0x127c0d0() {
   return (neuron0x1266fb0()*0.454149);
}

double NNfunction_sb_uLcR::synapse0x127c110() {
   return (neuron0x12672f0()*0.00424802);
}

double NNfunction_sb_uLcR::synapse0x127c150() {
   return (neuron0x1267630()*-0.761406);
}

double NNfunction_sb_uLcR::synapse0x127bbe0() {
   return (neuron0x1267970()*-0.145995);
}

double NNfunction_sb_uLcR::synapse0x127bc20() {
   return (neuron0x1267ed0()*0.50648);
}

double NNfunction_sb_uLcR::synapse0x127c2a0() {
   return (neuron0x12680f0()*0.319968);
}

double NNfunction_sb_uLcR::synapse0x127c2e0() {
   return (neuron0x1268430()*0.6086);
}

double NNfunction_sb_uLcR::synapse0x127c320() {
   return (neuron0x1268770()*-0.214494);
}

double NNfunction_sb_uLcR::synapse0x127c360() {
   return (neuron0x1268ab0()*-0.0258169);
}

double NNfunction_sb_uLcR::synapse0x127c3a0() {
   return (neuron0x1268df0()*-0.156968);
}

double NNfunction_sb_uLcR::synapse0x127c3e0() {
   return (neuron0x1269130()*0.244793);
}

double NNfunction_sb_uLcR::synapse0x127c760() {
   return (neuron0x1264570()*0.0129212);
}

double NNfunction_sb_uLcR::synapse0x127c7a0() {
   return (neuron0x12648b0()*0.0598666);
}

double NNfunction_sb_uLcR::synapse0x127c7e0() {
   return (neuron0x1264bf0()*-0.111737);
}

double NNfunction_sb_uLcR::synapse0x127c820() {
   return (neuron0x1264f30()*0.0554109);
}

double NNfunction_sb_uLcR::synapse0x127c860() {
   return (neuron0x1265270()*-0.0127235);
}

double NNfunction_sb_uLcR::synapse0x127c8a0() {
   return (neuron0x12655b0()*-0.00669705);
}

double NNfunction_sb_uLcR::synapse0x127c8e0() {
   return (neuron0x12658f0()*0.00114453);
}

double NNfunction_sb_uLcR::synapse0x127c920() {
   return (neuron0x1265c30()*-0.0140492);
}

double NNfunction_sb_uLcR::synapse0x127c960() {
   return (neuron0x1265f70()*-0.00651743);
}

double NNfunction_sb_uLcR::synapse0x127c9a0() {
   return (neuron0x12662b0()*0.0244389);
}

double NNfunction_sb_uLcR::synapse0x127c9e0() {
   return (neuron0x12665f0()*-0.00571127);
}

double NNfunction_sb_uLcR::synapse0x127ca20() {
   return (neuron0x1266930()*-0.0962424);
}

double NNfunction_sb_uLcR::synapse0x127ca60() {
   return (neuron0x1266c70()*0.453389);
}

double NNfunction_sb_uLcR::synapse0x127caa0() {
   return (neuron0x1266fb0()*-0.0689563);
}

double NNfunction_sb_uLcR::synapse0x127cae0() {
   return (neuron0x12672f0()*0.173842);
}

double NNfunction_sb_uLcR::synapse0x127cb20() {
   return (neuron0x1267630()*0.0664281);
}

double NNfunction_sb_uLcR::synapse0x127c5b0() {
   return (neuron0x1267970()*-0.0368908);
}

double NNfunction_sb_uLcR::synapse0x127c5f0() {
   return (neuron0x1267ed0()*0.292229);
}

double NNfunction_sb_uLcR::synapse0x127cc70() {
   return (neuron0x12680f0()*0.252215);
}

double NNfunction_sb_uLcR::synapse0x127ccb0() {
   return (neuron0x1268430()*-0.0503851);
}

double NNfunction_sb_uLcR::synapse0x127ccf0() {
   return (neuron0x1268770()*0.0126999);
}

double NNfunction_sb_uLcR::synapse0x127cd30() {
   return (neuron0x1268ab0()*0.0227091);
}

double NNfunction_sb_uLcR::synapse0x127cd70() {
   return (neuron0x1268df0()*0.00846147);
}

double NNfunction_sb_uLcR::synapse0x127cdb0() {
   return (neuron0x1269130()*-0.00214676);
}

double NNfunction_sb_uLcR::synapse0x127d130() {
   return (neuron0x1264570()*-0.0230226);
}

double NNfunction_sb_uLcR::synapse0x127d170() {
   return (neuron0x12648b0()*-0.0260203);
}

double NNfunction_sb_uLcR::synapse0x127d1b0() {
   return (neuron0x1264bf0()*-0.0340894);
}

double NNfunction_sb_uLcR::synapse0x127d1f0() {
   return (neuron0x1264f30()*16.9099);
}

double NNfunction_sb_uLcR::synapse0x127d230() {
   return (neuron0x1265270()*0.0302191);
}

double NNfunction_sb_uLcR::synapse0x127d270() {
   return (neuron0x12655b0()*-0.0488479);
}

double NNfunction_sb_uLcR::synapse0x127d2b0() {
   return (neuron0x12658f0()*0.0119222);
}

double NNfunction_sb_uLcR::synapse0x127d2f0() {
   return (neuron0x1265c30()*-0.0221251);
}

double NNfunction_sb_uLcR::synapse0x127d330() {
   return (neuron0x1265f70()*-0.00831784);
}

double NNfunction_sb_uLcR::synapse0x127d370() {
   return (neuron0x12662b0()*-0.00408956);
}

double NNfunction_sb_uLcR::synapse0x127d3b0() {
   return (neuron0x12665f0()*-0.000328502);
}

double NNfunction_sb_uLcR::synapse0x127d3f0() {
   return (neuron0x1266930()*0.356476);
}

double NNfunction_sb_uLcR::synapse0x127d430() {
   return (neuron0x1266c70()*0.00704696);
}

double NNfunction_sb_uLcR::synapse0x127d470() {
   return (neuron0x1266fb0()*0.059734);
}

double NNfunction_sb_uLcR::synapse0x127d4b0() {
   return (neuron0x12672f0()*0.00674246);
}

double NNfunction_sb_uLcR::synapse0x127d4f0() {
   return (neuron0x1267630()*0.314223);
}

double NNfunction_sb_uLcR::synapse0x127cf80() {
   return (neuron0x1267970()*-0.00147705);
}

double NNfunction_sb_uLcR::synapse0x127cfc0() {
   return (neuron0x1267ed0()*-0.0463142);
}

double NNfunction_sb_uLcR::synapse0x127d640() {
   return (neuron0x12680f0()*-0.0407998);
}

double NNfunction_sb_uLcR::synapse0x127d680() {
   return (neuron0x1268430()*0.0059277);
}

double NNfunction_sb_uLcR::synapse0x127d6c0() {
   return (neuron0x1268770()*-0.00314141);
}

double NNfunction_sb_uLcR::synapse0x127d700() {
   return (neuron0x1268ab0()*0.000882728);
}

double NNfunction_sb_uLcR::synapse0x127d740() {
   return (neuron0x1268df0()*0.00692044);
}

double NNfunction_sb_uLcR::synapse0x127d780() {
   return (neuron0x1269130()*0.0294564);
}

double NNfunction_sb_uLcR::synapse0x127db00() {
   return (neuron0x1264570()*0.000594014);
}

double NNfunction_sb_uLcR::synapse0x127db40() {
   return (neuron0x12648b0()*0.00833837);
}

double NNfunction_sb_uLcR::synapse0x127db80() {
   return (neuron0x1264bf0()*-0.00263811);
}

double NNfunction_sb_uLcR::synapse0x127dbc0() {
   return (neuron0x1264f30()*1.61853);
}

double NNfunction_sb_uLcR::synapse0x127dc00() {
   return (neuron0x1265270()*0.000896219);
}

double NNfunction_sb_uLcR::synapse0x127dc40() {
   return (neuron0x12655b0()*-0.0142391);
}

double NNfunction_sb_uLcR::synapse0x127dc80() {
   return (neuron0x12658f0()*-0.00025099);
}

double NNfunction_sb_uLcR::synapse0x127dcc0() {
   return (neuron0x1265c30()*-0.00691929);
}

double NNfunction_sb_uLcR::synapse0x127dd00() {
   return (neuron0x1265f70()*0.00156897);
}

double NNfunction_sb_uLcR::synapse0x127dd40() {
   return (neuron0x12662b0()*-0.00431683);
}

double NNfunction_sb_uLcR::synapse0x127dd80() {
   return (neuron0x12665f0()*0.00518424);
}

double NNfunction_sb_uLcR::synapse0x127ddc0() {
   return (neuron0x1266930()*-0.256163);
}

double NNfunction_sb_uLcR::synapse0x127de00() {
   return (neuron0x1266c70()*0.0199083);
}

double NNfunction_sb_uLcR::synapse0x127de40() {
   return (neuron0x1266fb0()*-0.00810682);
}

double NNfunction_sb_uLcR::synapse0x127de80() {
   return (neuron0x12672f0()*0.0145151);
}

double NNfunction_sb_uLcR::synapse0x127dec0() {
   return (neuron0x1267630()*-0.431071);
}

double NNfunction_sb_uLcR::synapse0x127d950() {
   return (neuron0x1267970()*-0.00943983);
}

double NNfunction_sb_uLcR::synapse0x127d990() {
   return (neuron0x1267ed0()*-0.00302943);
}

double NNfunction_sb_uLcR::synapse0x127e010() {
   return (neuron0x12680f0()*0.0104515);
}

double NNfunction_sb_uLcR::synapse0x127e050() {
   return (neuron0x1268430()*0.0110491);
}

double NNfunction_sb_uLcR::synapse0x127e090() {
   return (neuron0x1268770()*-0.00223559);
}

double NNfunction_sb_uLcR::synapse0x127e0d0() {
   return (neuron0x1268ab0()*0.00737293);
}

double NNfunction_sb_uLcR::synapse0x127e110() {
   return (neuron0x1268df0()*-0.00186187);
}

double NNfunction_sb_uLcR::synapse0x127e150() {
   return (neuron0x1269130()*0.0058137);
}

double NNfunction_sb_uLcR::synapse0x127e4d0() {
   return (neuron0x1264570()*-0.0103442);
}

double NNfunction_sb_uLcR::synapse0x127e510() {
   return (neuron0x12648b0()*0.710839);
}

double NNfunction_sb_uLcR::synapse0x127e550() {
   return (neuron0x1264bf0()*-0.203653);
}

double NNfunction_sb_uLcR::synapse0x127e590() {
   return (neuron0x1264f30()*0.232656);
}

double NNfunction_sb_uLcR::synapse0x127e5d0() {
   return (neuron0x1265270()*0.00597816);
}

double NNfunction_sb_uLcR::synapse0x127e610() {
   return (neuron0x12655b0()*-0.00920804);
}

double NNfunction_sb_uLcR::synapse0x127e650() {
   return (neuron0x12658f0()*0.111485);
}

double NNfunction_sb_uLcR::synapse0x127e690() {
   return (neuron0x1265c30()*0.0556873);
}

double NNfunction_sb_uLcR::synapse0x127e6d0() {
   return (neuron0x1265f70()*0.155814);
}

double NNfunction_sb_uLcR::synapse0x127e710() {
   return (neuron0x12662b0()*0.216672);
}

double NNfunction_sb_uLcR::synapse0x127e750() {
   return (neuron0x12665f0()*0.199409);
}

double NNfunction_sb_uLcR::synapse0x127e790() {
   return (neuron0x1266930()*0.191211);
}

double NNfunction_sb_uLcR::synapse0x127e7d0() {
   return (neuron0x1266c70()*0.193926);
}

double NNfunction_sb_uLcR::synapse0x127e810() {
   return (neuron0x1266fb0()*0.162202);
}

double NNfunction_sb_uLcR::synapse0x127e850() {
   return (neuron0x12672f0()*0.125959);
}

double NNfunction_sb_uLcR::synapse0x127e890() {
   return (neuron0x1267630()*-0.75339);
}

double NNfunction_sb_uLcR::synapse0x127e320() {
   return (neuron0x1267970()*0.0816735);
}

double NNfunction_sb_uLcR::synapse0x127e360() {
   return (neuron0x1267ed0()*-0.134552);
}

double NNfunction_sb_uLcR::synapse0x127e9e0() {
   return (neuron0x12680f0()*0.230812);
}

double NNfunction_sb_uLcR::synapse0x127ea20() {
   return (neuron0x1268430()*0.236434);
}

double NNfunction_sb_uLcR::synapse0x127ea60() {
   return (neuron0x1268770()*0.0109891);
}

double NNfunction_sb_uLcR::synapse0x127eaa0() {
   return (neuron0x1268ab0()*-0.0997051);
}

double NNfunction_sb_uLcR::synapse0x127eae0() {
   return (neuron0x1268df0()*-0.187563);
}

double NNfunction_sb_uLcR::synapse0x127eb20() {
   return (neuron0x1269130()*-0.188165);
}

double NNfunction_sb_uLcR::synapse0x127eea0() {
   return (neuron0x1264570()*0.865464);
}

double NNfunction_sb_uLcR::synapse0x1273470() {
   return (neuron0x12648b0()*0.609726);
}

double NNfunction_sb_uLcR::synapse0x12734b0() {
   return (neuron0x1264bf0()*-0.568077);
}

double NNfunction_sb_uLcR::synapse0x12734f0() {
   return (neuron0x1264f30()*-0.325554);
}

double NNfunction_sb_uLcR::synapse0x1273740() {
   return (neuron0x1265270()*0.574856);
}

double NNfunction_sb_uLcR::synapse0x1273780() {
   return (neuron0x12655b0()*-0.307434);
}

double NNfunction_sb_uLcR::synapse0x12737c0() {
   return (neuron0x12658f0()*-0.694468);
}

double NNfunction_sb_uLcR::synapse0x1273a10() {
   return (neuron0x1265c30()*0.0360476);
}

double NNfunction_sb_uLcR::synapse0x1273a50() {
   return (neuron0x1265f70()*-0.391676);
}

double NNfunction_sb_uLcR::synapse0x1273ca0() {
   return (neuron0x12662b0()*-0.343672);
}

double NNfunction_sb_uLcR::synapse0x1273ce0() {
   return (neuron0x12665f0()*0.217164);
}

double NNfunction_sb_uLcR::synapse0x1273d20() {
   return (neuron0x1266930()*0.0189758);
}

double NNfunction_sb_uLcR::synapse0x1273f70() {
   return (neuron0x1266c70()*0.544211);
}

double NNfunction_sb_uLcR::synapse0x1273fb0() {
   return (neuron0x1266fb0()*0.458651);
}

double NNfunction_sb_uLcR::synapse0x1274200() {
   return (neuron0x12672f0()*-0.634885);
}

double NNfunction_sb_uLcR::synapse0x1274240() {
   return (neuron0x1267630()*0.904461);
}

double NNfunction_sb_uLcR::synapse0x127ecf0() {
   return (neuron0x1267970()*-0.14025);
}

double NNfunction_sb_uLcR::synapse0x127ed30() {
   return (neuron0x1267ed0()*-0.272954);
}

double NNfunction_sb_uLcR::synapse0x1274390() {
   return (neuron0x12680f0()*-0.115537);
}

double NNfunction_sb_uLcR::synapse0x12748a0() {
   return (neuron0x1268430()*-0.359906);
}

double NNfunction_sb_uLcR::synapse0x12748e0() {
   return (neuron0x1268770()*-0.919751);
}

double NNfunction_sb_uLcR::synapse0x1274920() {
   return (neuron0x1268ab0()*-0.389486);
}

double NNfunction_sb_uLcR::synapse0x1274b70() {
   return (neuron0x1268df0()*0.146489);
}

double NNfunction_sb_uLcR::synapse0x1274bb0() {
   return (neuron0x1269130()*0.272488);
}

double NNfunction_sb_uLcR::synapse0x1274460() {
   return (neuron0x1264570()*0.003504);
}

double NNfunction_sb_uLcR::synapse0x12744a0() {
   return (neuron0x12648b0()*-0.0511092);
}

double NNfunction_sb_uLcR::synapse0x12744e0() {
   return (neuron0x1264bf0()*-0.0122503);
}

double NNfunction_sb_uLcR::synapse0x1274520() {
   return (neuron0x1264f30()*-3.91116);
}

double NNfunction_sb_uLcR::synapse0x1274ea0() {
   return (neuron0x1265270()*-0.0165541);
}

double NNfunction_sb_uLcR::synapse0x12811f0() {
   return (neuron0x12655b0()*-0.00683852);
}

double NNfunction_sb_uLcR::synapse0x1281230() {
   return (neuron0x12658f0()*0.0498463);
}

double NNfunction_sb_uLcR::synapse0x1281270() {
   return (neuron0x1265c30()*0.0668484);
}

double NNfunction_sb_uLcR::synapse0x12812b0() {
   return (neuron0x1265f70()*0.0776893);
}

double NNfunction_sb_uLcR::synapse0x12812f0() {
   return (neuron0x12662b0()*0.023667);
}

double NNfunction_sb_uLcR::synapse0x1281330() {
   return (neuron0x12665f0()*0.0693625);
}

double NNfunction_sb_uLcR::synapse0x1281370() {
   return (neuron0x1266930()*0.422427);
}

double NNfunction_sb_uLcR::synapse0x12813b0() {
   return (neuron0x1266c70()*-0.025045);
}

double NNfunction_sb_uLcR::synapse0x12813f0() {
   return (neuron0x1266fb0()*-0.125632);
}

double NNfunction_sb_uLcR::synapse0x1281430() {
   return (neuron0x12672f0()*0.0605591);
}

double NNfunction_sb_uLcR::synapse0x1281470() {
   return (neuron0x1267630()*-0.869979);
}

double NNfunction_sb_uLcR::synapse0x1274d80() {
   return (neuron0x1267970()*0.00994566);
}

double NNfunction_sb_uLcR::synapse0x1274dc0() {
   return (neuron0x1267ed0()*0.14522);
}

double NNfunction_sb_uLcR::synapse0x12815c0() {
   return (neuron0x12680f0()*-0.0358394);
}

double NNfunction_sb_uLcR::synapse0x1281600() {
   return (neuron0x1268430()*-0.0793488);
}

double NNfunction_sb_uLcR::synapse0x1281640() {
   return (neuron0x1268770()*0.0262486);
}

double NNfunction_sb_uLcR::synapse0x1281680() {
   return (neuron0x1268ab0()*0.00725735);
}

double NNfunction_sb_uLcR::synapse0x12816c0() {
   return (neuron0x1268df0()*-0.00351156);
}

double NNfunction_sb_uLcR::synapse0x1281700() {
   return (neuron0x1269130()*-0.0321425);
}

double NNfunction_sb_uLcR::synapse0x1281a80() {
   return (neuron0x1264570()*-0.0374652);
}

double NNfunction_sb_uLcR::synapse0x1281ac0() {
   return (neuron0x12648b0()*-0.250037);
}

double NNfunction_sb_uLcR::synapse0x1281b00() {
   return (neuron0x1264bf0()*-0.354995);
}

double NNfunction_sb_uLcR::synapse0x1281b40() {
   return (neuron0x1264f30()*-0.135967);
}

double NNfunction_sb_uLcR::synapse0x1281b80() {
   return (neuron0x1265270()*0.0806137);
}

double NNfunction_sb_uLcR::synapse0x1281bc0() {
   return (neuron0x12655b0()*-0.0559581);
}

double NNfunction_sb_uLcR::synapse0x1281c00() {
   return (neuron0x12658f0()*0.0455885);
}

double NNfunction_sb_uLcR::synapse0x1281c40() {
   return (neuron0x1265c30()*0.0950307);
}

double NNfunction_sb_uLcR::synapse0x1281c80() {
   return (neuron0x1265f70()*-0.0633934);
}

double NNfunction_sb_uLcR::synapse0x1281cc0() {
   return (neuron0x12662b0()*-0.189203);
}

double NNfunction_sb_uLcR::synapse0x1281d00() {
   return (neuron0x12665f0()*-0.0668042);
}

double NNfunction_sb_uLcR::synapse0x1281d40() {
   return (neuron0x1266930()*-0.125078);
}

double NNfunction_sb_uLcR::synapse0x1281d80() {
   return (neuron0x1266c70()*0.37677);
}

double NNfunction_sb_uLcR::synapse0x1281dc0() {
   return (neuron0x1266fb0()*-0.413665);
}

double NNfunction_sb_uLcR::synapse0x1281e00() {
   return (neuron0x12672f0()*0.193083);
}

double NNfunction_sb_uLcR::synapse0x1281e40() {
   return (neuron0x1267630()*0.180289);
}

double NNfunction_sb_uLcR::synapse0x12818d0() {
   return (neuron0x1267970()*-0.559339);
}

double NNfunction_sb_uLcR::synapse0x1281910() {
   return (neuron0x1267ed0()*0.000926723);
}

double NNfunction_sb_uLcR::synapse0x1281f90() {
   return (neuron0x12680f0()*-0.0883809);
}

double NNfunction_sb_uLcR::synapse0x1281fd0() {
   return (neuron0x1268430()*0.263921);
}

double NNfunction_sb_uLcR::synapse0x1282010() {
   return (neuron0x1268770()*0.0123331);
}

double NNfunction_sb_uLcR::synapse0x1282050() {
   return (neuron0x1268ab0()*0.0109305);
}

double NNfunction_sb_uLcR::synapse0x1282090() {
   return (neuron0x1268df0()*0.0144717);
}

double NNfunction_sb_uLcR::synapse0x12820d0() {
   return (neuron0x1269130()*-0.078543);
}

double NNfunction_sb_uLcR::synapse0x1282450() {
   return (neuron0x1264570()*0.0812361);
}

double NNfunction_sb_uLcR::synapse0x1282490() {
   return (neuron0x12648b0()*-0.567451);
}

double NNfunction_sb_uLcR::synapse0x12824d0() {
   return (neuron0x1264bf0()*0.318417);
}

double NNfunction_sb_uLcR::synapse0x1282510() {
   return (neuron0x1264f30()*0.731698);
}

double NNfunction_sb_uLcR::synapse0x1282550() {
   return (neuron0x1265270()*-0.284956);
}

double NNfunction_sb_uLcR::synapse0x1282590() {
   return (neuron0x12655b0()*0.122276);
}

double NNfunction_sb_uLcR::synapse0x12825d0() {
   return (neuron0x12658f0()*-0.198901);
}

double NNfunction_sb_uLcR::synapse0x1282610() {
   return (neuron0x1265c30()*0.153662);
}

double NNfunction_sb_uLcR::synapse0x1282650() {
   return (neuron0x1265f70()*0.46729);
}

double NNfunction_sb_uLcR::synapse0x1282690() {
   return (neuron0x12662b0()*0.528334);
}

double NNfunction_sb_uLcR::synapse0x12826d0() {
   return (neuron0x12665f0()*0.295504);
}

double NNfunction_sb_uLcR::synapse0x1282710() {
   return (neuron0x1266930()*-0.48835);
}

double NNfunction_sb_uLcR::synapse0x1282750() {
   return (neuron0x1266c70()*-0.10568);
}

double NNfunction_sb_uLcR::synapse0x1282790() {
   return (neuron0x1266fb0()*-0.276931);
}

double NNfunction_sb_uLcR::synapse0x12827d0() {
   return (neuron0x12672f0()*0.0996137);
}

double NNfunction_sb_uLcR::synapse0x1282810() {
   return (neuron0x1267630()*-0.281868);
}

double NNfunction_sb_uLcR::synapse0x12822a0() {
   return (neuron0x1267970()*-0.0217767);
}

double NNfunction_sb_uLcR::synapse0x12822e0() {
   return (neuron0x1267ed0()*0.658589);
}

double NNfunction_sb_uLcR::synapse0x1282960() {
   return (neuron0x12680f0()*0.197816);
}

double NNfunction_sb_uLcR::synapse0x12829a0() {
   return (neuron0x1268430()*0.717186);
}

double NNfunction_sb_uLcR::synapse0x12829e0() {
   return (neuron0x1268770()*-0.122357);
}

double NNfunction_sb_uLcR::synapse0x1282a20() {
   return (neuron0x1268ab0()*-0.0250686);
}

double NNfunction_sb_uLcR::synapse0x1282a60() {
   return (neuron0x1268df0()*0.0588039);
}

double NNfunction_sb_uLcR::synapse0x1282aa0() {
   return (neuron0x1269130()*0.0922241);
}

double NNfunction_sb_uLcR::synapse0x1282e20() {
   return (neuron0x1264570()*0.232809);
}

double NNfunction_sb_uLcR::synapse0x1282e60() {
   return (neuron0x12648b0()*-0.141168);
}

double NNfunction_sb_uLcR::synapse0x1282ea0() {
   return (neuron0x1264bf0()*0.0225666);
}

double NNfunction_sb_uLcR::synapse0x1282ee0() {
   return (neuron0x1264f30()*-0.588646);
}

double NNfunction_sb_uLcR::synapse0x1282f20() {
   return (neuron0x1265270()*0.509474);
}

double NNfunction_sb_uLcR::synapse0x1282f60() {
   return (neuron0x12655b0()*0.240733);
}

double NNfunction_sb_uLcR::synapse0x1282fa0() {
   return (neuron0x12658f0()*-0.447366);
}

double NNfunction_sb_uLcR::synapse0x1282fe0() {
   return (neuron0x1265c30()*-0.209687);
}

double NNfunction_sb_uLcR::synapse0x1283020() {
   return (neuron0x1265f70()*-0.145695);
}

double NNfunction_sb_uLcR::synapse0x1283060() {
   return (neuron0x12662b0()*0.20095);
}

double NNfunction_sb_uLcR::synapse0x12830a0() {
   return (neuron0x12665f0()*-0.0868171);
}

double NNfunction_sb_uLcR::synapse0x12830e0() {
   return (neuron0x1266930()*-0.401599);
}

double NNfunction_sb_uLcR::synapse0x1283120() {
   return (neuron0x1266c70()*0.0862923);
}

double NNfunction_sb_uLcR::synapse0x1283160() {
   return (neuron0x1266fb0()*0.155351);
}

double NNfunction_sb_uLcR::synapse0x12831a0() {
   return (neuron0x12672f0()*0.00120324);
}

double NNfunction_sb_uLcR::synapse0x12831e0() {
   return (neuron0x1267630()*-0.714081);
}

double NNfunction_sb_uLcR::synapse0x1282c70() {
   return (neuron0x1267970()*0.21063);
}

double NNfunction_sb_uLcR::synapse0x1282cb0() {
   return (neuron0x1267ed0()*0.369492);
}

double NNfunction_sb_uLcR::synapse0x1283330() {
   return (neuron0x12680f0()*0.2275);
}

double NNfunction_sb_uLcR::synapse0x1283370() {
   return (neuron0x1268430()*0.0568536);
}

double NNfunction_sb_uLcR::synapse0x12833b0() {
   return (neuron0x1268770()*-0.289184);
}

double NNfunction_sb_uLcR::synapse0x12833f0() {
   return (neuron0x1268ab0()*0.0999846);
}

double NNfunction_sb_uLcR::synapse0x1283430() {
   return (neuron0x1268df0()*0.0086413);
}

double NNfunction_sb_uLcR::synapse0x1283470() {
   return (neuron0x1269130()*0.336967);
}

double NNfunction_sb_uLcR::synapse0x12837f0() {
   return (neuron0x1264570()*-0.0152644);
}

double NNfunction_sb_uLcR::synapse0x1283830() {
   return (neuron0x12648b0()*-0.0117836);
}

double NNfunction_sb_uLcR::synapse0x1283870() {
   return (neuron0x1264bf0()*-0.735054);
}

double NNfunction_sb_uLcR::synapse0x12838b0() {
   return (neuron0x1264f30()*-0.0565543);
}

double NNfunction_sb_uLcR::synapse0x12838f0() {
   return (neuron0x1265270()*-0.00195291);
}

double NNfunction_sb_uLcR::synapse0x1283930() {
   return (neuron0x12655b0()*0.016743);
}

double NNfunction_sb_uLcR::synapse0x1283970() {
   return (neuron0x12658f0()*-0.0397552);
}

double NNfunction_sb_uLcR::synapse0x12839b0() {
   return (neuron0x1265c30()*-0.0106225);
}

double NNfunction_sb_uLcR::synapse0x12839f0() {
   return (neuron0x1265f70()*0.0185608);
}

double NNfunction_sb_uLcR::synapse0x1283a30() {
   return (neuron0x12662b0()*0.0210542);
}

double NNfunction_sb_uLcR::synapse0x1283a70() {
   return (neuron0x12665f0()*0.0209587);
}

double NNfunction_sb_uLcR::synapse0x1283ab0() {
   return (neuron0x1266930()*0.968663);
}

double NNfunction_sb_uLcR::synapse0x1283af0() {
   return (neuron0x1266c70()*0.0272401);
}

double NNfunction_sb_uLcR::synapse0x1283b30() {
   return (neuron0x1266fb0()*-0.00412508);
}

double NNfunction_sb_uLcR::synapse0x1283b70() {
   return (neuron0x12672f0()*-0.0113048);
}

double NNfunction_sb_uLcR::synapse0x1283bb0() {
   return (neuron0x1267630()*-0.197345);
}

double NNfunction_sb_uLcR::synapse0x1283640() {
   return (neuron0x1267970()*-0.0279069);
}

double NNfunction_sb_uLcR::synapse0x1283680() {
   return (neuron0x1267ed0()*0.0512175);
}

double NNfunction_sb_uLcR::synapse0x1283d00() {
   return (neuron0x12680f0()*0.0138121);
}

double NNfunction_sb_uLcR::synapse0x1283d40() {
   return (neuron0x1268430()*0.00700059);
}

double NNfunction_sb_uLcR::synapse0x1283d80() {
   return (neuron0x1268770()*-0.0138339);
}

double NNfunction_sb_uLcR::synapse0x1283dc0() {
   return (neuron0x1268ab0()*-0.00165737);
}

double NNfunction_sb_uLcR::synapse0x1283e00() {
   return (neuron0x1268df0()*-0.0151179);
}

double NNfunction_sb_uLcR::synapse0x1283e40() {
   return (neuron0x1269130()*-0.00320804);
}

double NNfunction_sb_uLcR::synapse0x12841c0() {
   return (neuron0x1264570()*0.0196877);
}

double NNfunction_sb_uLcR::synapse0x1284200() {
   return (neuron0x12648b0()*0.0146045);
}

double NNfunction_sb_uLcR::synapse0x1284240() {
   return (neuron0x1264bf0()*0.0844607);
}

double NNfunction_sb_uLcR::synapse0x1284280() {
   return (neuron0x1264f30()*-1.93848);
}

double NNfunction_sb_uLcR::synapse0x12842c0() {
   return (neuron0x1265270()*-0.0291168);
}

double NNfunction_sb_uLcR::synapse0x1284300() {
   return (neuron0x12655b0()*0.0639098);
}

double NNfunction_sb_uLcR::synapse0x1284340() {
   return (neuron0x12658f0()*-0.120563);
}

double NNfunction_sb_uLcR::synapse0x1284380() {
   return (neuron0x1265c30()*-0.0450694);
}

double NNfunction_sb_uLcR::synapse0x12843c0() {
   return (neuron0x1265f70()*0.0512907);
}

double NNfunction_sb_uLcR::synapse0x1284400() {
   return (neuron0x12662b0()*0.0679555);
}

double NNfunction_sb_uLcR::synapse0x1284440() {
   return (neuron0x12665f0()*-0.0612014);
}

double NNfunction_sb_uLcR::synapse0x1284480() {
   return (neuron0x1266930()*1.49628);
}

double NNfunction_sb_uLcR::synapse0x12844c0() {
   return (neuron0x1266c70()*0.0151074);
}

double NNfunction_sb_uLcR::synapse0x1284500() {
   return (neuron0x1266fb0()*0.145211);
}

double NNfunction_sb_uLcR::synapse0x1284540() {
   return (neuron0x12672f0()*-0.0317175);
}

double NNfunction_sb_uLcR::synapse0x1284580() {
   return (neuron0x1267630()*0.214999);
}

double NNfunction_sb_uLcR::synapse0x1284010() {
   return (neuron0x1267970()*-0.0399566);
}

double NNfunction_sb_uLcR::synapse0x1284050() {
   return (neuron0x1267ed0()*0.0347564);
}

double NNfunction_sb_uLcR::synapse0x12846d0() {
   return (neuron0x12680f0()*0.0202733);
}

double NNfunction_sb_uLcR::synapse0x1284710() {
   return (neuron0x1268430()*0.0558709);
}

double NNfunction_sb_uLcR::synapse0x1284750() {
   return (neuron0x1268770()*-0.0422687);
}

double NNfunction_sb_uLcR::synapse0x1284790() {
   return (neuron0x1268ab0()*-0.0699637);
}

double NNfunction_sb_uLcR::synapse0x12847d0() {
   return (neuron0x1268df0()*-0.022483);
}

double NNfunction_sb_uLcR::synapse0x1284810() {
   return (neuron0x1269130()*-0.0316988);
}

double NNfunction_sb_uLcR::synapse0x1284b90() {
   return (neuron0x1264570()*-0.102706);
}

double NNfunction_sb_uLcR::synapse0x1284bd0() {
   return (neuron0x12648b0()*0.0359749);
}

double NNfunction_sb_uLcR::synapse0x1284c10() {
   return (neuron0x1264bf0()*0.283819);
}

double NNfunction_sb_uLcR::synapse0x1284c50() {
   return (neuron0x1264f30()*0.951888);
}

double NNfunction_sb_uLcR::synapse0x1284c90() {
   return (neuron0x1265270()*-0.082404);
}

double NNfunction_sb_uLcR::synapse0x1284cd0() {
   return (neuron0x12655b0()*-0.680891);
}

double NNfunction_sb_uLcR::synapse0x1284d10() {
   return (neuron0x12658f0()*-0.386199);
}

double NNfunction_sb_uLcR::synapse0x1284d50() {
   return (neuron0x1265c30()*0.288984);
}

double NNfunction_sb_uLcR::synapse0x1284d90() {
   return (neuron0x1265f70()*-0.103036);
}

double NNfunction_sb_uLcR::synapse0x1284dd0() {
   return (neuron0x12662b0()*0.225018);
}

double NNfunction_sb_uLcR::synapse0x1284e10() {
   return (neuron0x12665f0()*-0.251782);
}

double NNfunction_sb_uLcR::synapse0x1284e50() {
   return (neuron0x1266930()*0.214384);
}

double NNfunction_sb_uLcR::synapse0x1284e90() {
   return (neuron0x1266c70()*0.170039);
}

double NNfunction_sb_uLcR::synapse0x1284ed0() {
   return (neuron0x1266fb0()*0.178652);
}

double NNfunction_sb_uLcR::synapse0x1284f10() {
   return (neuron0x12672f0()*-0.610756);
}

double NNfunction_sb_uLcR::synapse0x1284f50() {
   return (neuron0x1267630()*0.311142);
}

double NNfunction_sb_uLcR::synapse0x12849e0() {
   return (neuron0x1267970()*-0.100735);
}

double NNfunction_sb_uLcR::synapse0x1284a20() {
   return (neuron0x1267ed0()*0.288295);
}

double NNfunction_sb_uLcR::synapse0x12850a0() {
   return (neuron0x12680f0()*0.300136);
}

double NNfunction_sb_uLcR::synapse0x12850e0() {
   return (neuron0x1268430()*-0.0740696);
}

double NNfunction_sb_uLcR::synapse0x1285120() {
   return (neuron0x1268770()*-0.0012195);
}

double NNfunction_sb_uLcR::synapse0x1285160() {
   return (neuron0x1268ab0()*0.108608);
}

double NNfunction_sb_uLcR::synapse0x12851a0() {
   return (neuron0x1268df0()*0.212471);
}

double NNfunction_sb_uLcR::synapse0x12851e0() {
   return (neuron0x1269130()*-0.237707);
}

double NNfunction_sb_uLcR::synapse0x1285560() {
   return (neuron0x1264570()*0.201293);
}

double NNfunction_sb_uLcR::synapse0x12855a0() {
   return (neuron0x12648b0()*-0.0430116);
}

double NNfunction_sb_uLcR::synapse0x12855e0() {
   return (neuron0x1264bf0()*-0.062704);
}

double NNfunction_sb_uLcR::synapse0x1285620() {
   return (neuron0x1264f30()*0.412537);
}

double NNfunction_sb_uLcR::synapse0x1285660() {
   return (neuron0x1265270()*0.220179);
}

double NNfunction_sb_uLcR::synapse0x12856a0() {
   return (neuron0x12655b0()*0.177111);
}

double NNfunction_sb_uLcR::synapse0x12856e0() {
   return (neuron0x12658f0()*0.0828882);
}

double NNfunction_sb_uLcR::synapse0x1285720() {
   return (neuron0x1265c30()*0.261133);
}

double NNfunction_sb_uLcR::synapse0x1285760() {
   return (neuron0x1265f70()*-0.233625);
}

double NNfunction_sb_uLcR::synapse0x12857a0() {
   return (neuron0x12662b0()*-0.49952);
}

double NNfunction_sb_uLcR::synapse0x12857e0() {
   return (neuron0x12665f0()*0.114998);
}

double NNfunction_sb_uLcR::synapse0x1285820() {
   return (neuron0x1266930()*-0.282922);
}

double NNfunction_sb_uLcR::synapse0x1285860() {
   return (neuron0x1266c70()*0.0399122);
}

double NNfunction_sb_uLcR::synapse0x12858a0() {
   return (neuron0x1266fb0()*-0.0576245);
}

double NNfunction_sb_uLcR::synapse0x12858e0() {
   return (neuron0x12672f0()*0.210921);
}

double NNfunction_sb_uLcR::synapse0x1285920() {
   return (neuron0x1267630()*0.334971);
}

double NNfunction_sb_uLcR::synapse0x12853b0() {
   return (neuron0x1267970()*0.222638);
}

double NNfunction_sb_uLcR::synapse0x12853f0() {
   return (neuron0x1267ed0()*-0.0400546);
}

double NNfunction_sb_uLcR::synapse0x1285a70() {
   return (neuron0x12680f0()*-0.176743);
}

double NNfunction_sb_uLcR::synapse0x1285ab0() {
   return (neuron0x1268430()*-0.357144);
}

double NNfunction_sb_uLcR::synapse0x1285af0() {
   return (neuron0x1268770()*-0.0750313);
}

double NNfunction_sb_uLcR::synapse0x1285b30() {
   return (neuron0x1268ab0()*-0.100322);
}

double NNfunction_sb_uLcR::synapse0x1285b70() {
   return (neuron0x1268df0()*-0.229967);
}

double NNfunction_sb_uLcR::synapse0x1285bb0() {
   return (neuron0x1269130()*0.237566);
}

double NNfunction_sb_uLcR::synapse0x126e660() {
   return (neuron0x1264570()*0.023054);
}

double NNfunction_sb_uLcR::synapse0x126e6a0() {
   return (neuron0x12648b0()*0.0145111);
}

double NNfunction_sb_uLcR::synapse0x126e6e0() {
   return (neuron0x1264bf0()*0.00351341);
}

double NNfunction_sb_uLcR::synapse0x126e720() {
   return (neuron0x1264f30()*-1.94766);
}

double NNfunction_sb_uLcR::synapse0x126e760() {
   return (neuron0x1265270()*0.060325);
}

double NNfunction_sb_uLcR::synapse0x126e7a0() {
   return (neuron0x12655b0()*0.0831953);
}

double NNfunction_sb_uLcR::synapse0x126e7e0() {
   return (neuron0x12658f0()*0.0344176);
}

double NNfunction_sb_uLcR::synapse0x126e820() {
   return (neuron0x1265c30()*0.0614387);
}

double NNfunction_sb_uLcR::synapse0x1286340() {
   return (neuron0x1265f70()*-0.0244082);
}

double NNfunction_sb_uLcR::synapse0x1286380() {
   return (neuron0x12662b0()*-0.0715662);
}

double NNfunction_sb_uLcR::synapse0x12863c0() {
   return (neuron0x12665f0()*0.0190511);
}

double NNfunction_sb_uLcR::synapse0x1286400() {
   return (neuron0x1266930()*-2.1763);
}

double NNfunction_sb_uLcR::synapse0x1286440() {
   return (neuron0x1266c70()*0.0113283);
}

double NNfunction_sb_uLcR::synapse0x1286480() {
   return (neuron0x1266fb0()*0.0195853);
}

double NNfunction_sb_uLcR::synapse0x12864c0() {
   return (neuron0x12672f0()*0.0210084);
}

double NNfunction_sb_uLcR::synapse0x1286500() {
   return (neuron0x1267630()*0.267025);
}

double NNfunction_sb_uLcR::synapse0x1285d80() {
   return (neuron0x1267970()*-0.0419176);
}

double NNfunction_sb_uLcR::synapse0x1285dc0() {
   return (neuron0x1267ed0()*-0.0294777);
}

double NNfunction_sb_uLcR::synapse0x1286650() {
   return (neuron0x12680f0()*0.0349583);
}

double NNfunction_sb_uLcR::synapse0x1286690() {
   return (neuron0x1268430()*0.0384741);
}

double NNfunction_sb_uLcR::synapse0x12866d0() {
   return (neuron0x1268770()*-0.0102857);
}

double NNfunction_sb_uLcR::synapse0x1286710() {
   return (neuron0x1268ab0()*-0.0163097);
}

double NNfunction_sb_uLcR::synapse0x1286750() {
   return (neuron0x1268df0()*0.0131686);
}

double NNfunction_sb_uLcR::synapse0x1286790() {
   return (neuron0x1269130()*0.00227334);
}

double NNfunction_sb_uLcR::synapse0x1286b10() {
   return (neuron0x1264570()*0.0974793);
}

double NNfunction_sb_uLcR::synapse0x1286b50() {
   return (neuron0x12648b0()*-0.35545);
}

double NNfunction_sb_uLcR::synapse0x1286b90() {
   return (neuron0x1264bf0()*0.110324);
}

double NNfunction_sb_uLcR::synapse0x1286bd0() {
   return (neuron0x1264f30()*-0.280694);
}

double NNfunction_sb_uLcR::synapse0x1286c10() {
   return (neuron0x1265270()*0.114169);
}

double NNfunction_sb_uLcR::synapse0x1286c50() {
   return (neuron0x12655b0()*-0.199053);
}

double NNfunction_sb_uLcR::synapse0x1286c90() {
   return (neuron0x12658f0()*-0.147833);
}

double NNfunction_sb_uLcR::synapse0x1286cd0() {
   return (neuron0x1265c30()*0.458659);
}

double NNfunction_sb_uLcR::synapse0x1286d10() {
   return (neuron0x1265f70()*-0.101202);
}

double NNfunction_sb_uLcR::synapse0x1286d50() {
   return (neuron0x12662b0()*0.127103);
}

double NNfunction_sb_uLcR::synapse0x1286d90() {
   return (neuron0x12665f0()*0.0722154);
}

double NNfunction_sb_uLcR::synapse0x1286dd0() {
   return (neuron0x1266930()*0.274722);
}

double NNfunction_sb_uLcR::synapse0x1286e10() {
   return (neuron0x1266c70()*0.394722);
}

double NNfunction_sb_uLcR::synapse0x1286e50() {
   return (neuron0x1266fb0()*0.0662931);
}

double NNfunction_sb_uLcR::synapse0x1286e90() {
   return (neuron0x12672f0()*-0.0028875);
}

double NNfunction_sb_uLcR::synapse0x1286ed0() {
   return (neuron0x1267630()*0.520089);
}

double NNfunction_sb_uLcR::synapse0x1286960() {
   return (neuron0x1267970()*-0.272659);
}

double NNfunction_sb_uLcR::synapse0x12869a0() {
   return (neuron0x1267ed0()*0.255272);
}

double NNfunction_sb_uLcR::synapse0x1287020() {
   return (neuron0x12680f0()*0.105958);
}

double NNfunction_sb_uLcR::synapse0x1287060() {
   return (neuron0x1268430()*0.169149);
}

double NNfunction_sb_uLcR::synapse0x12870a0() {
   return (neuron0x1268770()*0.0918877);
}

double NNfunction_sb_uLcR::synapse0x12870e0() {
   return (neuron0x1268ab0()*-0.0543935);
}

double NNfunction_sb_uLcR::synapse0x1287120() {
   return (neuron0x1268df0()*0.113565);
}

double NNfunction_sb_uLcR::synapse0x1287160() {
   return (neuron0x1269130()*-0.120409);
}

double NNfunction_sb_uLcR::synapse0x12874e0() {
   return (neuron0x1264570()*-0.0100748);
}

double NNfunction_sb_uLcR::synapse0x1287520() {
   return (neuron0x12648b0()*0.0967869);
}

double NNfunction_sb_uLcR::synapse0x1287560() {
   return (neuron0x1264bf0()*-0.695082);
}

double NNfunction_sb_uLcR::synapse0x12875a0() {
   return (neuron0x1264f30()*0.0423809);
}

double NNfunction_sb_uLcR::synapse0x12875e0() {
   return (neuron0x1265270()*0.0113808);
}

double NNfunction_sb_uLcR::synapse0x1287620() {
   return (neuron0x12655b0()*0.0100767);
}

double NNfunction_sb_uLcR::synapse0x1287660() {
   return (neuron0x12658f0()*-0.025416);
}

double NNfunction_sb_uLcR::synapse0x12876a0() {
   return (neuron0x1265c30()*-0.0322124);
}

double NNfunction_sb_uLcR::synapse0x12876e0() {
   return (neuron0x1265f70()*0.0057546);
}

double NNfunction_sb_uLcR::synapse0x1287720() {
   return (neuron0x12662b0()*0.0190389);
}

double NNfunction_sb_uLcR::synapse0x1287760() {
   return (neuron0x12665f0()*-0.00722337);
}

double NNfunction_sb_uLcR::synapse0x12877a0() {
   return (neuron0x1266930()*0.214398);
}

double NNfunction_sb_uLcR::synapse0x12877e0() {
   return (neuron0x1266c70()*-0.125102);
}

double NNfunction_sb_uLcR::synapse0x1287820() {
   return (neuron0x1266fb0()*0.0297528);
}

double NNfunction_sb_uLcR::synapse0x1287860() {
   return (neuron0x12672f0()*-0.0531717);
}

double NNfunction_sb_uLcR::synapse0x12878a0() {
   return (neuron0x1267630()*0.107181);
}

double NNfunction_sb_uLcR::synapse0x1287330() {
   return (neuron0x1267970()*-0.0129034);
}

double NNfunction_sb_uLcR::synapse0x1287370() {
   return (neuron0x1267ed0()*-0.0368284);
}

double NNfunction_sb_uLcR::synapse0x1277ea0() {
   return (neuron0x12680f0()*-0.0460053);
}

double NNfunction_sb_uLcR::synapse0x1277ee0() {
   return (neuron0x1268430()*0.0036071);
}

double NNfunction_sb_uLcR::synapse0x1277f20() {
   return (neuron0x1268770()*-0.000996502);
}

double NNfunction_sb_uLcR::synapse0x1277f60() {
   return (neuron0x1268ab0()*-0.00422499);
}

double NNfunction_sb_uLcR::synapse0x1277fa0() {
   return (neuron0x1268df0()*0.0187255);
}

double NNfunction_sb_uLcR::synapse0x1277fe0() {
   return (neuron0x1269130()*0.00897117);
}

double NNfunction_sb_uLcR::synapse0x1278360() {
   return (neuron0x1264570()*-0.0117099);
}

double NNfunction_sb_uLcR::synapse0x12783a0() {
   return (neuron0x12648b0()*0.00740882);
}

double NNfunction_sb_uLcR::synapse0x12783e0() {
   return (neuron0x1264bf0()*-0.0176856);
}

double NNfunction_sb_uLcR::synapse0x1278420() {
   return (neuron0x1264f30()*1.09882);
}

double NNfunction_sb_uLcR::synapse0x1278460() {
   return (neuron0x1265270()*-0.00497);
}

double NNfunction_sb_uLcR::synapse0x12784a0() {
   return (neuron0x12655b0()*0.000663996);
}

double NNfunction_sb_uLcR::synapse0x12784e0() {
   return (neuron0x12658f0()*0.0138264);
}

double NNfunction_sb_uLcR::synapse0x1278520() {
   return (neuron0x1265c30()*0.027366);
}

double NNfunction_sb_uLcR::synapse0x1278560() {
   return (neuron0x1265f70()*-0.00745652);
}

double NNfunction_sb_uLcR::synapse0x12785a0() {
   return (neuron0x12662b0()*0.00624196);
}

double NNfunction_sb_uLcR::synapse0x12785e0() {
   return (neuron0x12665f0()*0.0162626);
}

double NNfunction_sb_uLcR::synapse0x1278620() {
   return (neuron0x1266930()*0.706297);
}

double NNfunction_sb_uLcR::synapse0x1278660() {
   return (neuron0x1266c70()*-0.020507);
}

double NNfunction_sb_uLcR::synapse0x12786a0() {
   return (neuron0x1266fb0()*0.019012);
}

double NNfunction_sb_uLcR::synapse0x12786e0() {
   return (neuron0x12672f0()*-0.0400549);
}

double NNfunction_sb_uLcR::synapse0x1278720() {
   return (neuron0x1267630()*0.563765);
}

double NNfunction_sb_uLcR::synapse0x12781b0() {
   return (neuron0x1267970()*0.0164155);
}

double NNfunction_sb_uLcR::synapse0x12781f0() {
   return (neuron0x1267ed0()*-0.0307397);
}

double NNfunction_sb_uLcR::synapse0x1278870() {
   return (neuron0x12680f0()*0.00338576);
}

double NNfunction_sb_uLcR::synapse0x12788b0() {
   return (neuron0x1268430()*0.00532869);
}

double NNfunction_sb_uLcR::synapse0x12788f0() {
   return (neuron0x1268770()*0.0025442);
}

double NNfunction_sb_uLcR::synapse0x1278930() {
   return (neuron0x1268ab0()*0.0292794);
}

double NNfunction_sb_uLcR::synapse0x1278970() {
   return (neuron0x1268df0()*-0.0131229);
}

double NNfunction_sb_uLcR::synapse0x12789b0() {
   return (neuron0x1269130()*-0.0108661);
}

double NNfunction_sb_uLcR::synapse0x1278d30() {
   return (neuron0x1264570()*0.00418946);
}

double NNfunction_sb_uLcR::synapse0x1278d70() {
   return (neuron0x12648b0()*0.0310476);
}

double NNfunction_sb_uLcR::synapse0x1278db0() {
   return (neuron0x1264bf0()*0.0961423);
}

double NNfunction_sb_uLcR::synapse0x1278df0() {
   return (neuron0x1264f30()*-0.108956);
}

double NNfunction_sb_uLcR::synapse0x1278e30() {
   return (neuron0x1265270()*0.0184307);
}

double NNfunction_sb_uLcR::synapse0x1278e70() {
   return (neuron0x12655b0()*0.0124438);
}

double NNfunction_sb_uLcR::synapse0x1278eb0() {
   return (neuron0x12658f0()*-0.00706291);
}

double NNfunction_sb_uLcR::synapse0x1278ef0() {
   return (neuron0x1265c30()*0.014251);
}

double NNfunction_sb_uLcR::synapse0x1278f30() {
   return (neuron0x1265f70()*0.0204543);
}

double NNfunction_sb_uLcR::synapse0x1278f70() {
   return (neuron0x12662b0()*0.0159053);
}

double NNfunction_sb_uLcR::synapse0x1278fb0() {
   return (neuron0x12665f0()*-0.0264921);
}

double NNfunction_sb_uLcR::synapse0x1278ff0() {
   return (neuron0x1266930()*-2.07866);
}

double NNfunction_sb_uLcR::synapse0x1279030() {
   return (neuron0x1266c70()*-0.00816251);
}

double NNfunction_sb_uLcR::synapse0x1279070() {
   return (neuron0x1266fb0()*-0.0136289);
}

double NNfunction_sb_uLcR::synapse0x12790b0() {
   return (neuron0x12672f0()*-0.0322858);
}

double NNfunction_sb_uLcR::synapse0x12790f0() {
   return (neuron0x1267630()*0.369803);
}

double NNfunction_sb_uLcR::synapse0x1278b80() {
   return (neuron0x1267970()*0.0050884);
}

double NNfunction_sb_uLcR::synapse0x1278bc0() {
   return (neuron0x1267ed0()*0.00394133);
}

double NNfunction_sb_uLcR::synapse0x1279240() {
   return (neuron0x12680f0()*0.012603);
}

double NNfunction_sb_uLcR::synapse0x1279280() {
   return (neuron0x1268430()*-0.0291493);
}

double NNfunction_sb_uLcR::synapse0x12792c0() {
   return (neuron0x1268770()*0.00216587);
}

double NNfunction_sb_uLcR::synapse0x1279300() {
   return (neuron0x1268ab0()*-0.0325234);
}

double NNfunction_sb_uLcR::synapse0x1279340() {
   return (neuron0x1268df0()*0.0282618);
}

double NNfunction_sb_uLcR::synapse0x1279380() {
   return (neuron0x1269130()*-0.00282904);
}

double NNfunction_sb_uLcR::synapse0x1279700() {
   return (neuron0x1264570()*-0.0558513);
}

double NNfunction_sb_uLcR::synapse0x1279740() {
   return (neuron0x12648b0()*0.250803);
}

double NNfunction_sb_uLcR::synapse0x1279780() {
   return (neuron0x1264bf0()*-0.898552);
}

double NNfunction_sb_uLcR::synapse0x12797c0() {
   return (neuron0x1264f30()*-0.284609);
}

double NNfunction_sb_uLcR::synapse0x1279800() {
   return (neuron0x1265270()*-0.165498);
}

double NNfunction_sb_uLcR::synapse0x1279840() {
   return (neuron0x12655b0()*-0.212132);
}

double NNfunction_sb_uLcR::synapse0x1279880() {
   return (neuron0x12658f0()*0.694291);
}

double NNfunction_sb_uLcR::synapse0x12798c0() {
   return (neuron0x1265c30()*0.0427289);
}

double NNfunction_sb_uLcR::synapse0x1279900() {
   return (neuron0x1265f70()*-0.735658);
}

double NNfunction_sb_uLcR::synapse0x1279940() {
   return (neuron0x12662b0()*0.289363);
}

double NNfunction_sb_uLcR::synapse0x1279980() {
   return (neuron0x12665f0()*0.203383);
}

double NNfunction_sb_uLcR::synapse0x12799c0() {
   return (neuron0x1266930()*0.00112393);
}

double NNfunction_sb_uLcR::synapse0x1279a00() {
   return (neuron0x1266c70()*-0.368483);
}

double NNfunction_sb_uLcR::synapse0x1279a40() {
   return (neuron0x1266fb0()*-0.36272);
}

double NNfunction_sb_uLcR::synapse0x1279a80() {
   return (neuron0x12672f0()*-0.276776);
}

double NNfunction_sb_uLcR::synapse0x1279ac0() {
   return (neuron0x1267630()*-0.0546217);
}

double NNfunction_sb_uLcR::synapse0x1279550() {
   return (neuron0x1267970()*0.121974);
}

double NNfunction_sb_uLcR::synapse0x1279590() {
   return (neuron0x1267ed0()*0.396691);
}

double NNfunction_sb_uLcR::synapse0x1279c10() {
   return (neuron0x12680f0()*-0.998609);
}

double NNfunction_sb_uLcR::synapse0x1279c50() {
   return (neuron0x1268430()*-0.200517);
}

double NNfunction_sb_uLcR::synapse0x1279c90() {
   return (neuron0x1268770()*-0.403098);
}

double NNfunction_sb_uLcR::synapse0x1279cd0() {
   return (neuron0x1268ab0()*1.1436);
}

double NNfunction_sb_uLcR::synapse0x1279d10() {
   return (neuron0x1268df0()*-0.408842);
}

double NNfunction_sb_uLcR::synapse0x1279d50() {
   return (neuron0x1269130()*1.10297);
}

double NNfunction_sb_uLcR::synapse0x128bc20() {
   return (neuron0x1264570()*-0.0704505);
}

double NNfunction_sb_uLcR::synapse0x128bc60() {
   return (neuron0x12648b0()*-0.300467);
}

double NNfunction_sb_uLcR::synapse0x128bca0() {
   return (neuron0x1264bf0()*0.115603);
}

double NNfunction_sb_uLcR::synapse0x128bce0() {
   return (neuron0x1264f30()*-0.247732);
}

double NNfunction_sb_uLcR::synapse0x128bd20() {
   return (neuron0x1265270()*0.166125);
}

double NNfunction_sb_uLcR::synapse0x128bd60() {
   return (neuron0x12655b0()*-0.0680447);
}

double NNfunction_sb_uLcR::synapse0x128bda0() {
   return (neuron0x12658f0()*0.251387);
}

double NNfunction_sb_uLcR::synapse0x128bde0() {
   return (neuron0x1265c30()*-0.605042);
}

double NNfunction_sb_uLcR::synapse0x128be20() {
   return (neuron0x1265f70()*-0.153312);
}

double NNfunction_sb_uLcR::synapse0x128be60() {
   return (neuron0x12662b0()*-0.411189);
}

double NNfunction_sb_uLcR::synapse0x128bea0() {
   return (neuron0x12665f0()*0.209067);
}

double NNfunction_sb_uLcR::synapse0x128bee0() {
   return (neuron0x1266930()*1.8376);
}

double NNfunction_sb_uLcR::synapse0x128bf20() {
   return (neuron0x1266c70()*-0.445715);
}

double NNfunction_sb_uLcR::synapse0x128bf60() {
   return (neuron0x1266fb0()*0.122293);
}

double NNfunction_sb_uLcR::synapse0x128bfa0() {
   return (neuron0x12672f0()*-0.345777);
}

double NNfunction_sb_uLcR::synapse0x128bfe0() {
   return (neuron0x1267630()*0.283832);
}

double NNfunction_sb_uLcR::synapse0x1279d90() {
   return (neuron0x1267970()*-0.231289);
}

double NNfunction_sb_uLcR::synapse0x1279dd0() {
   return (neuron0x1267ed0()*-0.088544);
}

double NNfunction_sb_uLcR::synapse0x128c130() {
   return (neuron0x12680f0()*-0.303628);
}

double NNfunction_sb_uLcR::synapse0x128c170() {
   return (neuron0x1268430()*0.175436);
}

double NNfunction_sb_uLcR::synapse0x128c1b0() {
   return (neuron0x1268770()*0.141787);
}

double NNfunction_sb_uLcR::synapse0x128c1f0() {
   return (neuron0x1268ab0()*-0.0175291);
}

double NNfunction_sb_uLcR::synapse0x128c230() {
   return (neuron0x1268df0()*-0.24101);
}

double NNfunction_sb_uLcR::synapse0x128c270() {
   return (neuron0x1269130()*0.0483114);
}

double NNfunction_sb_uLcR::synapse0x128c5f0() {
   return (neuron0x1264570()*0.162983);
}

double NNfunction_sb_uLcR::synapse0x128c630() {
   return (neuron0x12648b0()*-0.789157);
}

double NNfunction_sb_uLcR::synapse0x128c670() {
   return (neuron0x1264bf0()*-0.667432);
}

double NNfunction_sb_uLcR::synapse0x128c6b0() {
   return (neuron0x1264f30()*0.287611);
}

double NNfunction_sb_uLcR::synapse0x128c6f0() {
   return (neuron0x1265270()*0.0121827);
}

double NNfunction_sb_uLcR::synapse0x128c730() {
   return (neuron0x12655b0()*-0.103166);
}

double NNfunction_sb_uLcR::synapse0x128c770() {
   return (neuron0x12658f0()*-0.0483869);
}

double NNfunction_sb_uLcR::synapse0x128c7b0() {
   return (neuron0x1265c30()*0.141153);
}

double NNfunction_sb_uLcR::synapse0x128c7f0() {
   return (neuron0x1265f70()*0.0798247);
}

double NNfunction_sb_uLcR::synapse0x128c830() {
   return (neuron0x12662b0()*0.122066);
}

double NNfunction_sb_uLcR::synapse0x128c870() {
   return (neuron0x12665f0()*0.0903653);
}

double NNfunction_sb_uLcR::synapse0x128c8b0() {
   return (neuron0x1266930()*-0.37935);
}

double NNfunction_sb_uLcR::synapse0x128c8f0() {
   return (neuron0x1266c70()*0.271751);
}

double NNfunction_sb_uLcR::synapse0x128c930() {
   return (neuron0x1266fb0()*0.20555);
}

double NNfunction_sb_uLcR::synapse0x128c970() {
   return (neuron0x12672f0()*0.00151585);
}

double NNfunction_sb_uLcR::synapse0x128c9b0() {
   return (neuron0x1267630()*-0.997547);
}

double NNfunction_sb_uLcR::synapse0x128c440() {
   return (neuron0x1267970()*0.129661);
}

double NNfunction_sb_uLcR::synapse0x128c480() {
   return (neuron0x1267ed0()*0.0279483);
}

double NNfunction_sb_uLcR::synapse0x128cb00() {
   return (neuron0x12680f0()*0.135124);
}

double NNfunction_sb_uLcR::synapse0x128cb40() {
   return (neuron0x1268430()*0.118354);
}

double NNfunction_sb_uLcR::synapse0x128cb80() {
   return (neuron0x1268770()*0.0715169);
}

double NNfunction_sb_uLcR::synapse0x128cbc0() {
   return (neuron0x1268ab0()*0.0166205);
}

double NNfunction_sb_uLcR::synapse0x128cc00() {
   return (neuron0x1268df0()*-0.0322558);
}

double NNfunction_sb_uLcR::synapse0x128cc40() {
   return (neuron0x1269130()*0.0879291);
}

double NNfunction_sb_uLcR::synapse0x128cfc0() {
   return (neuron0x1264570()*-0.00889363);
}

double NNfunction_sb_uLcR::synapse0x128d000() {
   return (neuron0x12648b0()*-0.00707854);
}

double NNfunction_sb_uLcR::synapse0x128d040() {
   return (neuron0x1264bf0()*-0.100767);
}

double NNfunction_sb_uLcR::synapse0x128d080() {
   return (neuron0x1264f30()*0.00513293);
}

double NNfunction_sb_uLcR::synapse0x128d0c0() {
   return (neuron0x1265270()*-0.00937246);
}

double NNfunction_sb_uLcR::synapse0x128d100() {
   return (neuron0x12655b0()*-0.0140746);
}

double NNfunction_sb_uLcR::synapse0x128d140() {
   return (neuron0x12658f0()*-0.00259466);
}

double NNfunction_sb_uLcR::synapse0x128d180() {
   return (neuron0x1265c30()*-0.00728634);
}

double NNfunction_sb_uLcR::synapse0x128d1c0() {
   return (neuron0x1265f70()*0.00726406);
}

double NNfunction_sb_uLcR::synapse0x128d200() {
   return (neuron0x12662b0()*0.0143411);
}

double NNfunction_sb_uLcR::synapse0x128d240() {
   return (neuron0x12665f0()*0.0139525);
}

double NNfunction_sb_uLcR::synapse0x128d280() {
   return (neuron0x1266930()*-0.569044);
}

double NNfunction_sb_uLcR::synapse0x128d2c0() {
   return (neuron0x1266c70()*0.0201468);
}

double NNfunction_sb_uLcR::synapse0x128d300() {
   return (neuron0x1266fb0()*0.00209314);
}

double NNfunction_sb_uLcR::synapse0x128d340() {
   return (neuron0x12672f0()*-0.0163369);
}

double NNfunction_sb_uLcR::synapse0x128d380() {
   return (neuron0x1267630()*0.932268);
}

double NNfunction_sb_uLcR::synapse0x128ce10() {
   return (neuron0x1267970()*-0.0117309);
}

double NNfunction_sb_uLcR::synapse0x128ce50() {
   return (neuron0x1267ed0()*0.0279704);
}

double NNfunction_sb_uLcR::synapse0x128d4d0() {
   return (neuron0x12680f0()*0.0104042);
}

double NNfunction_sb_uLcR::synapse0x128d510() {
   return (neuron0x1268430()*0.0110402);
}

double NNfunction_sb_uLcR::synapse0x128d550() {
   return (neuron0x1268770()*0.00102793);
}

double NNfunction_sb_uLcR::synapse0x128d590() {
   return (neuron0x1268ab0()*-0.00179391);
}

double NNfunction_sb_uLcR::synapse0x128d5d0() {
   return (neuron0x1268df0()*0.00434869);
}

double NNfunction_sb_uLcR::synapse0x128d610() {
   return (neuron0x1269130()*0.0104816);
}

double NNfunction_sb_uLcR::synapse0x128d990() {
   return (neuron0x1264570()*-0.482646);
}

double NNfunction_sb_uLcR::synapse0x128d9d0() {
   return (neuron0x12648b0()*-0.187218);
}

double NNfunction_sb_uLcR::synapse0x128da10() {
   return (neuron0x1264bf0()*-0.067567);
}

double NNfunction_sb_uLcR::synapse0x128da50() {
   return (neuron0x1264f30()*0.555528);
}

double NNfunction_sb_uLcR::synapse0x128da90() {
   return (neuron0x1265270()*0.46896);
}

double NNfunction_sb_uLcR::synapse0x128dad0() {
   return (neuron0x12655b0()*0.165445);
}

double NNfunction_sb_uLcR::synapse0x128db10() {
   return (neuron0x12658f0()*-0.711785);
}

double NNfunction_sb_uLcR::synapse0x128db50() {
   return (neuron0x1265c30()*-0.216489);
}

double NNfunction_sb_uLcR::synapse0x128db90() {
   return (neuron0x1265f70()*0.281988);
}

double NNfunction_sb_uLcR::synapse0x128dbd0() {
   return (neuron0x12662b0()*0.458259);
}

double NNfunction_sb_uLcR::synapse0x128dc10() {
   return (neuron0x12665f0()*-1.28236);
}

double NNfunction_sb_uLcR::synapse0x128dc50() {
   return (neuron0x1266930()*-0.0763274);
}

double NNfunction_sb_uLcR::synapse0x128dc90() {
   return (neuron0x1266c70()*0.345126);
}

double NNfunction_sb_uLcR::synapse0x128dcd0() {
   return (neuron0x1266fb0()*0.486222);
}

double NNfunction_sb_uLcR::synapse0x128dd10() {
   return (neuron0x12672f0()*-0.975877);
}

double NNfunction_sb_uLcR::synapse0x128dd50() {
   return (neuron0x1267630()*-0.27902);
}

double NNfunction_sb_uLcR::synapse0x128d7e0() {
   return (neuron0x1267970()*0.238871);
}

double NNfunction_sb_uLcR::synapse0x128d820() {
   return (neuron0x1267ed0()*0.26179);
}

double NNfunction_sb_uLcR::synapse0x128dea0() {
   return (neuron0x12680f0()*-0.634479);
}

double NNfunction_sb_uLcR::synapse0x128dee0() {
   return (neuron0x1268430()*-0.219802);
}

double NNfunction_sb_uLcR::synapse0x128df20() {
   return (neuron0x1268770()*0.55985);
}

double NNfunction_sb_uLcR::synapse0x128df60() {
   return (neuron0x1268ab0()*-0.308825);
}

double NNfunction_sb_uLcR::synapse0x128dfa0() {
   return (neuron0x1268df0()*-0.162739);
}

double NNfunction_sb_uLcR::synapse0x128dfe0() {
   return (neuron0x1269130()*0.00742028);
}

double NNfunction_sb_uLcR::synapse0x126a580() {
   return (neuron0x12695d0()*-1.09755);
}

double NNfunction_sb_uLcR::synapse0x126a5c0() {
   return (neuron0x1269ee0()*-0.52149);
}

double NNfunction_sb_uLcR::synapse0x126ba90() {
   return (neuron0x126a9c0()*-0.854111);
}

double NNfunction_sb_uLcR::synapse0x126bad0() {
   return (neuron0x1024250()*0.656897);
}

double NNfunction_sb_uLcR::synapse0x126c460() {
   return (neuron0x126b7e0()*-0.660423);
}

double NNfunction_sb_uLcR::synapse0x126c4a0() {
   return (neuron0x126c1b0()*2.55079);
}

double NNfunction_sb_uLcR::synapse0x126d230() {
   return (neuron0x126cf80()*-1.15838);
}

double NNfunction_sb_uLcR::synapse0x126d270() {
   return (neuron0x126d950()*0.0936333);
}

double NNfunction_sb_uLcR::synapse0x126dc00() {
   return (neuron0x126e320()*0.304898);
}

double NNfunction_sb_uLcR::synapse0x126dc40() {
   return (neuron0x126ee00()*0.584075);
}

double NNfunction_sb_uLcR::synapse0x126e5d0() {
   return (neuron0x126f7d0()*0.307365);
}

double NNfunction_sb_uLcR::synapse0x126e610() {
   return (neuron0x126c8b0()*-0.255839);
}

double NNfunction_sb_uLcR::synapse0x126f0b0() {
   return (neuron0x1271380()*-1.23455);
}

double NNfunction_sb_uLcR::synapse0x126f0f0() {
   return (neuron0x1271d50()*-0.121556);
}

double NNfunction_sb_uLcR::synapse0x126fa80() {
   return (neuron0x1272720()*-1.18657);
}

double NNfunction_sb_uLcR::synapse0x126fac0() {
   return (neuron0x12730f0()*0.686143);
}

double NNfunction_sb_uLcR::synapse0x126cb60() {
   return (neuron0x1274f00()*-3.34036);
}

double NNfunction_sb_uLcR::synapse0x126cba0() {
   return (neuron0x12751e0()*1.12486);
}

double NNfunction_sb_uLcR::synapse0x1271630() {
   return (neuron0x1275bb0()*-0.388781);
}

double NNfunction_sb_uLcR::synapse0x1271670() {
   return (neuron0x1276580()*1.55063);
}

double NNfunction_sb_uLcR::synapse0x1272000() {
   return (neuron0x1276f50()*5.1827);
}

double NNfunction_sb_uLcR::synapse0x1272040() {
   return (neuron0x1277920()*-3.02335);
}

double NNfunction_sb_uLcR::synapse0x12729d0() {
   return (neuron0x1270470()*0.126842);
}

double NNfunction_sb_uLcR::synapse0x1272a10() {
   return (neuron0x1270e40()*-0.33873);
}

double NNfunction_sb_uLcR::synapse0x12733a0() {
   return (neuron0x127a6b0()*-0.0234397);
}

double NNfunction_sb_uLcR::synapse0x12733e0() {
   return (neuron0x127b080()*1.48425);
}

double NNfunction_sb_uLcR::synapse0x1267510() {
   return (neuron0x127ba50()*0.707146);
}

double NNfunction_sb_uLcR::synapse0x1267550() {
   return (neuron0x127c420()*0.781073);
}

double NNfunction_sb_uLcR::synapse0x1275490() {
   return (neuron0x127cdf0()*8.91328);
}

double NNfunction_sb_uLcR::synapse0x12754d0() {
   return (neuron0x127d7c0()*-1.8541);
}

double NNfunction_sb_uLcR::synapse0x1275e60() {
   return (neuron0x127e190()*0.310121);
}

double NNfunction_sb_uLcR::synapse0x1275ea0() {
   return (neuron0x127eb60()*0.130144);
}

double NNfunction_sb_uLcR::synapse0x1276830() {
   return (neuron0x1274bf0()*3.47964);
}

double NNfunction_sb_uLcR::synapse0x1276870() {
   return (neuron0x1281740()*0.314996);
}

double NNfunction_sb_uLcR::synapse0x1277200() {
   return (neuron0x1282110()*-0.0308352);
}

double NNfunction_sb_uLcR::synapse0x1277240() {
   return (neuron0x1282ae0()*-0.774454);
}

double NNfunction_sb_uLcR::synapse0x1277bd0() {
   return (neuron0x12834b0()*-1.11823);
}

double NNfunction_sb_uLcR::synapse0x1277c10() {
   return (neuron0x1283e80()*1.78536);
}

double NNfunction_sb_uLcR::synapse0x1270720() {
   return (neuron0x1284850()*-0.012724);
}

double NNfunction_sb_uLcR::synapse0x1270760() {
   return (neuron0x1285220()*-1.0131);
}

double NNfunction_sb_uLcR::synapse0x1279fd0() {
   return (neuron0x1285bf0()*3.08807);
}

double NNfunction_sb_uLcR::synapse0x127a010() {
   return (neuron0x12867d0()*1.07743);
}

double NNfunction_sb_uLcR::synapse0x127a960() {
   return (neuron0x12871a0()*1.17098);
}

double NNfunction_sb_uLcR::synapse0x127a9a0() {
   return (neuron0x1278020()*-3.33394);
}

double NNfunction_sb_uLcR::synapse0x127b330() {
   return (neuron0x12789f0()*-1.01562);
}

double NNfunction_sb_uLcR::synapse0x127b370() {
   return (neuron0x12793c0()*0.0958582);
}

double NNfunction_sb_uLcR::synapse0x127bd00() {
   return (neuron0x128ba00()*0.357514);
}

double NNfunction_sb_uLcR::synapse0x127bd40() {
   return (neuron0x128c2b0()*0.362233);
}

double NNfunction_sb_uLcR::synapse0x127c6d0() {
   return (neuron0x128cc80()*-1.84734);
}

double NNfunction_sb_uLcR::synapse0x127c710() {
   return (neuron0x128d650()*-0.0952369);
}

double NNfunction_sb_uLcR::synapse0x127ee10() {
   return (neuron0x12695d0()*0.315577);
}

double NNfunction_sb_uLcR::synapse0x127ee50() {
   return (neuron0x1269ee0()*-0.0976587);
}

double NNfunction_sb_uLcR::synapse0x12743d0() {
   return (neuron0x126a9c0()*-0.0316881);
}

double NNfunction_sb_uLcR::synapse0x1274410() {
   return (neuron0x1024250()*-0.130257);
}

double NNfunction_sb_uLcR::synapse0x12819f0() {
   return (neuron0x126b7e0()*-0.11343);
}

double NNfunction_sb_uLcR::synapse0x1281a30() {
   return (neuron0x126c1b0()*-0.246032);
}

double NNfunction_sb_uLcR::synapse0x12823c0() {
   return (neuron0x126cf80()*0.676235);
}

double NNfunction_sb_uLcR::synapse0x1282400() {
   return (neuron0x126d950()*0.0220217);
}

double NNfunction_sb_uLcR::synapse0x1282d90() {
   return (neuron0x126e320()*0.0347064);
}

double NNfunction_sb_uLcR::synapse0x1282dd0() {
   return (neuron0x126ee00()*0.0269525);
}

double NNfunction_sb_uLcR::synapse0x1283760() {
   return (neuron0x126f7d0()*-0.0972165);
}

double NNfunction_sb_uLcR::synapse0x12837a0() {
   return (neuron0x126c8b0()*-0.0106925);
}

double NNfunction_sb_uLcR::synapse0x1284130() {
   return (neuron0x1271380()*0.139244);
}

double NNfunction_sb_uLcR::synapse0x1284170() {
   return (neuron0x1271d50()*0.0665686);
}

double NNfunction_sb_uLcR::synapse0x1284b00() {
   return (neuron0x1272720()*-0.887321);
}

double NNfunction_sb_uLcR::synapse0x1284b40() {
   return (neuron0x12730f0()*0.0785088);
}

double NNfunction_sb_uLcR::synapse0x12854d0() {
   return (neuron0x1274f00()*0.41271);
}

double NNfunction_sb_uLcR::synapse0x1285510() {
   return (neuron0x12751e0()*0.21678);
}

double NNfunction_sb_uLcR::synapse0x1285ea0() {
   return (neuron0x1275bb0()*-0.0402217);
}

double NNfunction_sb_uLcR::synapse0x1285ee0() {
   return (neuron0x1276580()*-0.135979);
}

double NNfunction_sb_uLcR::synapse0x1286a80() {
   return (neuron0x1276f50()*0.39544);
}

double NNfunction_sb_uLcR::synapse0x1286ac0() {
   return (neuron0x1277920()*-0.156207);
}

double NNfunction_sb_uLcR::synapse0x1287450() {
   return (neuron0x1270470()*-0.103627);
}

double NNfunction_sb_uLcR::synapse0x1287490() {
   return (neuron0x1270e40()*-0.0232811);
}

double NNfunction_sb_uLcR::synapse0x12782d0() {
   return (neuron0x127a6b0()*0.012423);
}

double NNfunction_sb_uLcR::synapse0x1278310() {
   return (neuron0x127b080()*2.03448);
}

double NNfunction_sb_uLcR::synapse0x1278ca0() {
   return (neuron0x127ba50()*-0.0757649);
}

double NNfunction_sb_uLcR::synapse0x1278ce0() {
   return (neuron0x127c420()*0.176752);
}

double NNfunction_sb_uLcR::synapse0x1279670() {
   return (neuron0x127cdf0()*0.0645564);
}

double NNfunction_sb_uLcR::synapse0x12796b0() {
   return (neuron0x127d7c0()*-0.954056);
}

double NNfunction_sb_uLcR::synapse0x128bb90() {
   return (neuron0x127e190()*-0.0358589);
}

double NNfunction_sb_uLcR::synapse0x128bbd0() {
   return (neuron0x127eb60()*-0.0613767);
}

double NNfunction_sb_uLcR::synapse0x128c560() {
   return (neuron0x1274bf0()*-0.560418);
}

double NNfunction_sb_uLcR::synapse0x128c5a0() {
   return (neuron0x1281740()*-0.121011);
}

double NNfunction_sb_uLcR::synapse0x128cf30() {
   return (neuron0x1282110()*-0.0247812);
}

double NNfunction_sb_uLcR::synapse0x128cf70() {
   return (neuron0x1282ae0()*0.0807305);
}

double NNfunction_sb_uLcR::synapse0x128d900() {
   return (neuron0x12834b0()*0.0605618);
}

double NNfunction_sb_uLcR::synapse0x128d940() {
   return (neuron0x1283e80()*-0.417473);
}

double NNfunction_sb_uLcR::synapse0x12697f0() {
   return (neuron0x1284850()*-0.0565321);
}

double NNfunction_sb_uLcR::synapse0x1269830() {
   return (neuron0x1285220()*0.0738851);
}

double NNfunction_sb_uLcR::synapse0x127d0a0() {
   return (neuron0x1285bf0()*0.341161);
}

double NNfunction_sb_uLcR::synapse0x127d0e0() {
   return (neuron0x12867d0()*0.294397);
}

double NNfunction_sb_uLcR::synapse0x128e020() {
   return (neuron0x12871a0()*-0.0493114);
}

double NNfunction_sb_uLcR::synapse0x128e060() {
   return (neuron0x1278020()*0.34791);
}

double NNfunction_sb_uLcR::synapse0x128e0a0() {
   return (neuron0x12789f0()*0.101162);
}

double NNfunction_sb_uLcR::synapse0x128e0e0() {
   return (neuron0x12793c0()*-0.020354);
}

double NNfunction_sb_uLcR::synapse0x1294f90() {
   return (neuron0x128ba00()*-0.164663);
}

double NNfunction_sb_uLcR::synapse0x1294fd0() {
   return (neuron0x128c2b0()*-0.149456);
}

double NNfunction_sb_uLcR::synapse0x1295010() {
   return (neuron0x128cc80()*-0.871699);
}

double NNfunction_sb_uLcR::synapse0x1295050() {
   return (neuron0x128d650()*-0.020784);
}

double NNfunction_sb_uLcR::synapse0x12953d0() {
   return (neuron0x12695d0()*-0.455182);
}

double NNfunction_sb_uLcR::synapse0x1295410() {
   return (neuron0x1269ee0()*-1.52482);
}

double NNfunction_sb_uLcR::synapse0x1295450() {
   return (neuron0x126a9c0()*-1.32999);
}

double NNfunction_sb_uLcR::synapse0x1295490() {
   return (neuron0x1024250()*0.350752);
}

double NNfunction_sb_uLcR::synapse0x12954d0() {
   return (neuron0x126b7e0()*-0.815368);
}

double NNfunction_sb_uLcR::synapse0x1295510() {
   return (neuron0x126c1b0()*0.125023);
}

double NNfunction_sb_uLcR::synapse0x1295550() {
   return (neuron0x126cf80()*-0.753898);
}

double NNfunction_sb_uLcR::synapse0x1295590() {
   return (neuron0x126d950()*1.08468);
}

double NNfunction_sb_uLcR::synapse0x12955d0() {
   return (neuron0x126e320()*0.524781);
}

double NNfunction_sb_uLcR::synapse0x1295610() {
   return (neuron0x126ee00()*0.986081);
}

double NNfunction_sb_uLcR::synapse0x1295650() {
   return (neuron0x126f7d0()*0.0822635);
}

double NNfunction_sb_uLcR::synapse0x1295690() {
   return (neuron0x126c8b0()*-1.44483);
}

double NNfunction_sb_uLcR::synapse0x12956d0() {
   return (neuron0x1271380()*5.87711);
}

double NNfunction_sb_uLcR::synapse0x1295710() {
   return (neuron0x1271d50()*1.49131);
}

double NNfunction_sb_uLcR::synapse0x1295750() {
   return (neuron0x1272720()*-1.48468);
}

double NNfunction_sb_uLcR::synapse0x1295790() {
   return (neuron0x12730f0()*0.00632745);
}

double NNfunction_sb_uLcR::synapse0x1295220() {
   return (neuron0x1274f00()*-2.94848);
}

double NNfunction_sb_uLcR::synapse0x1295260() {
   return (neuron0x12751e0()*1.35646);
}

double NNfunction_sb_uLcR::synapse0x12958e0() {
   return (neuron0x1275bb0()*0.864057);
}

double NNfunction_sb_uLcR::synapse0x1295920() {
   return (neuron0x1276580()*0.641759);
}

double NNfunction_sb_uLcR::synapse0x1295960() {
   return (neuron0x1276f50()*4.02887);
}

double NNfunction_sb_uLcR::synapse0x12959a0() {
   return (neuron0x1277920()*-0.711197);
}

double NNfunction_sb_uLcR::synapse0x12959e0() {
   return (neuron0x1270470()*0.366599);
}

double NNfunction_sb_uLcR::synapse0x1295a20() {
   return (neuron0x1270e40()*0.968894);
}

double NNfunction_sb_uLcR::synapse0x1295a60() {
   return (neuron0x127a6b0()*-4.24535);
}

double NNfunction_sb_uLcR::synapse0x1295aa0() {
   return (neuron0x127b080()*0.476384);
}

double NNfunction_sb_uLcR::synapse0x1295ae0() {
   return (neuron0x127ba50()*0.0600576);
}

double NNfunction_sb_uLcR::synapse0x1295b20() {
   return (neuron0x127c420()*0.0713754);
}

double NNfunction_sb_uLcR::synapse0x1295b60() {
   return (neuron0x127cdf0()*4.44229);
}

double NNfunction_sb_uLcR::synapse0x1295ba0() {
   return (neuron0x127d7c0()*-1.36292);
}

double NNfunction_sb_uLcR::synapse0x1295be0() {
   return (neuron0x127e190()*1.47328);
}

double NNfunction_sb_uLcR::synapse0x1295c20() {
   return (neuron0x127eb60()*0.781023);
}

double NNfunction_sb_uLcR::synapse0x12957d0() {
   return (neuron0x1274bf0()*-1.54227);
}

double NNfunction_sb_uLcR::synapse0x1295810() {
   return (neuron0x1281740()*0.920728);
}

double NNfunction_sb_uLcR::synapse0x1295850() {
   return (neuron0x1282110()*0.885381);
}

double NNfunction_sb_uLcR::synapse0x1295890() {
   return (neuron0x1282ae0()*-1.58391);
}

double NNfunction_sb_uLcR::synapse0x1295e70() {
   return (neuron0x12834b0()*-0.446144);
}

double NNfunction_sb_uLcR::synapse0x1295eb0() {
   return (neuron0x1283e80()*-2.31359);
}

double NNfunction_sb_uLcR::synapse0x1295ef0() {
   return (neuron0x1284850()*1.01086);
}

double NNfunction_sb_uLcR::synapse0x1295f30() {
   return (neuron0x1285220()*0.837092);
}

double NNfunction_sb_uLcR::synapse0x1295f70() {
   return (neuron0x1285bf0()*0.143092);
}

double NNfunction_sb_uLcR::synapse0x1295fb0() {
   return (neuron0x12867d0()*-0.955652);
}

double NNfunction_sb_uLcR::synapse0x1295ff0() {
   return (neuron0x12871a0()*1.11694);
}

double NNfunction_sb_uLcR::synapse0x1296030() {
   return (neuron0x1278020()*0.914913);
}

double NNfunction_sb_uLcR::synapse0x1296070() {
   return (neuron0x12789f0()*-2.10838);
}

double NNfunction_sb_uLcR::synapse0x12960b0() {
   return (neuron0x12793c0()*0.721838);
}

double NNfunction_sb_uLcR::synapse0x12960f0() {
   return (neuron0x128ba00()*0.870627);
}

double NNfunction_sb_uLcR::synapse0x1296130() {
   return (neuron0x128c2b0()*1.24728);
}

double NNfunction_sb_uLcR::synapse0x1296170() {
   return (neuron0x128cc80()*-1.87189);
}

double NNfunction_sb_uLcR::synapse0x12961b0() {
   return (neuron0x128d650()*-0.717381);
}

double NNfunction_sb_uLcR::synapse0x1296530() {
   return (neuron0x12695d0()*0.745433);
}

double NNfunction_sb_uLcR::synapse0x1296570() {
   return (neuron0x1269ee0()*-0.270651);
}

double NNfunction_sb_uLcR::synapse0x12965b0() {
   return (neuron0x126a9c0()*-0.59775);
}

double NNfunction_sb_uLcR::synapse0x12965f0() {
   return (neuron0x1024250()*0.327804);
}

double NNfunction_sb_uLcR::synapse0x1296630() {
   return (neuron0x126b7e0()*-0.2941);
}

double NNfunction_sb_uLcR::synapse0x1296670() {
   return (neuron0x126c1b0()*-0.169454);
}

double NNfunction_sb_uLcR::synapse0x12966b0() {
   return (neuron0x126cf80()*0.400064);
}

double NNfunction_sb_uLcR::synapse0x12966f0() {
   return (neuron0x126d950()*1.35736);
}

double NNfunction_sb_uLcR::synapse0x1296730() {
   return (neuron0x126e320()*0.359264);
}

double NNfunction_sb_uLcR::synapse0x1296770() {
   return (neuron0x126ee00()*1.39715);
}

double NNfunction_sb_uLcR::synapse0x12967b0() {
   return (neuron0x126f7d0()*-1.21366);
}

double NNfunction_sb_uLcR::synapse0x12967f0() {
   return (neuron0x126c8b0()*-0.679004);
}

double NNfunction_sb_uLcR::synapse0x1296830() {
   return (neuron0x1271380()*0.830306);
}

double NNfunction_sb_uLcR::synapse0x1296870() {
   return (neuron0x1271d50()*1.20832);
}

double NNfunction_sb_uLcR::synapse0x12968b0() {
   return (neuron0x1272720()*-0.924345);
}

double NNfunction_sb_uLcR::synapse0x12968f0() {
   return (neuron0x12730f0()*0.257978);
}

double NNfunction_sb_uLcR::synapse0x1296380() {
   return (neuron0x1274f00()*0.265388);
}

double NNfunction_sb_uLcR::synapse0x12963c0() {
   return (neuron0x12751e0()*1.30024);
}

double NNfunction_sb_uLcR::synapse0x1296a40() {
   return (neuron0x1275bb0()*0.954205);
}

double NNfunction_sb_uLcR::synapse0x1296a80() {
   return (neuron0x1276580()*-0.407564);
}

double NNfunction_sb_uLcR::synapse0x1296ac0() {
   return (neuron0x1276f50()*0.815779);
}

double NNfunction_sb_uLcR::synapse0x1296b00() {
   return (neuron0x1277920()*-0.0632851);
}

double NNfunction_sb_uLcR::synapse0x1296b40() {
   return (neuron0x1270470()*0.991445);
}

double NNfunction_sb_uLcR::synapse0x1296b80() {
   return (neuron0x1270e40()*0.714454);
}

double NNfunction_sb_uLcR::synapse0x1296bc0() {
   return (neuron0x127a6b0()*0.523319);
}

double NNfunction_sb_uLcR::synapse0x1296c00() {
   return (neuron0x127b080()*0.67612);
}

double NNfunction_sb_uLcR::synapse0x1296c40() {
   return (neuron0x127ba50()*-0.297993);
}

double NNfunction_sb_uLcR::synapse0x1296c80() {
   return (neuron0x127c420()*0.623581);
}

double NNfunction_sb_uLcR::synapse0x1296cc0() {
   return (neuron0x127cdf0()*-0.753785);
}

double NNfunction_sb_uLcR::synapse0x1296d00() {
   return (neuron0x127d7c0()*-0.508217);
}

double NNfunction_sb_uLcR::synapse0x1296d40() {
   return (neuron0x127e190()*0.204841);
}

double NNfunction_sb_uLcR::synapse0x1296d80() {
   return (neuron0x127eb60()*1.0717);
}

double NNfunction_sb_uLcR::synapse0x1296930() {
   return (neuron0x1274bf0()*-1.09093);
}

double NNfunction_sb_uLcR::synapse0x1296970() {
   return (neuron0x1281740()*-0.150912);
}

double NNfunction_sb_uLcR::synapse0x12969b0() {
   return (neuron0x1282110()*0.182568);
}

double NNfunction_sb_uLcR::synapse0x12969f0() {
   return (neuron0x1282ae0()*-0.595186);
}

double NNfunction_sb_uLcR::synapse0x1296fd0() {
   return (neuron0x12834b0()*0.338379);
}

double NNfunction_sb_uLcR::synapse0x1297010() {
   return (neuron0x1283e80()*0.291704);
}

double NNfunction_sb_uLcR::synapse0x1297050() {
   return (neuron0x1284850()*0.448242);
}

double NNfunction_sb_uLcR::synapse0x1297090() {
   return (neuron0x1285220()*0.806954);
}

double NNfunction_sb_uLcR::synapse0x12970d0() {
   return (neuron0x1285bf0()*-0.5369);
}

double NNfunction_sb_uLcR::synapse0x1297110() {
   return (neuron0x12867d0()*0.438554);
}

double NNfunction_sb_uLcR::synapse0x1297150() {
   return (neuron0x12871a0()*0.479414);
}

double NNfunction_sb_uLcR::synapse0x1297190() {
   return (neuron0x1278020()*0.4549);
}

double NNfunction_sb_uLcR::synapse0x12971d0() {
   return (neuron0x12789f0()*0.330215);
}

double NNfunction_sb_uLcR::synapse0x1297210() {
   return (neuron0x12793c0()*0.865319);
}

double NNfunction_sb_uLcR::synapse0x1297250() {
   return (neuron0x128ba00()*1.1529);
}

double NNfunction_sb_uLcR::synapse0x1297290() {
   return (neuron0x128c2b0()*-0.0787065);
}

double NNfunction_sb_uLcR::synapse0x12972d0() {
   return (neuron0x128cc80()*0.0632147);
}

double NNfunction_sb_uLcR::synapse0x1297310() {
   return (neuron0x128d650()*-0.779415);
}

double NNfunction_sb_uLcR::synapse0x1297690() {
   return (neuron0x12695d0()*-0.105517);
}

double NNfunction_sb_uLcR::synapse0x12976d0() {
   return (neuron0x1269ee0()*0.0797458);
}

double NNfunction_sb_uLcR::synapse0x1297710() {
   return (neuron0x126a9c0()*0.099777);
}

double NNfunction_sb_uLcR::synapse0x1297750() {
   return (neuron0x1024250()*0.058724);
}

double NNfunction_sb_uLcR::synapse0x1297790() {
   return (neuron0x126b7e0()*0.0946297);
}

double NNfunction_sb_uLcR::synapse0x12977d0() {
   return (neuron0x126c1b0()*0.130085);
}

double NNfunction_sb_uLcR::synapse0x1297810() {
   return (neuron0x126cf80()*4.85972);
}

double NNfunction_sb_uLcR::synapse0x1297850() {
   return (neuron0x126d950()*-0.0324056);
}

double NNfunction_sb_uLcR::synapse0x1297890() {
   return (neuron0x126e320()*-0.0387035);
}

double NNfunction_sb_uLcR::synapse0x12978d0() {
   return (neuron0x126ee00()*-0.00729815);
}

double NNfunction_sb_uLcR::synapse0x1297910() {
   return (neuron0x126f7d0()*-0.000975924);
}

double NNfunction_sb_uLcR::synapse0x1297950() {
   return (neuron0x126c8b0()*-0.00155506);
}

double NNfunction_sb_uLcR::synapse0x1297990() {
   return (neuron0x1271380()*2.22967);
}

double NNfunction_sb_uLcR::synapse0x12979d0() {
   return (neuron0x1271d50()*-0.0633296);
}

double NNfunction_sb_uLcR::synapse0x1297a10() {
   return (neuron0x1272720()*-0.485897);
}

double NNfunction_sb_uLcR::synapse0x1297a50() {
   return (neuron0x12730f0()*-0.0601434);
}

double NNfunction_sb_uLcR::synapse0x12974e0() {
   return (neuron0x1274f00()*-1.52818);
}

double NNfunction_sb_uLcR::synapse0x1297520() {
   return (neuron0x12751e0()*-0.130408);
}

double NNfunction_sb_uLcR::synapse0x1297ba0() {
   return (neuron0x1275bb0()*0.0303906);
}

double NNfunction_sb_uLcR::synapse0x1297be0() {
   return (neuron0x1276580()*0.165152);
}

double NNfunction_sb_uLcR::synapse0x1297c20() {
   return (neuron0x1276f50()*-0.290515);
}

double NNfunction_sb_uLcR::synapse0x1297c60() {
   return (neuron0x1277920()*-0.257444);
}

double NNfunction_sb_uLcR::synapse0x1297ca0() {
   return (neuron0x1270470()*0.0762164);
}

double NNfunction_sb_uLcR::synapse0x1297ce0() {
   return (neuron0x1270e40()*-0.0230006);
}

double NNfunction_sb_uLcR::synapse0x1297d20() {
   return (neuron0x127a6b0()*0.239173);
}

double NNfunction_sb_uLcR::synapse0x1297d60() {
   return (neuron0x127b080()*1.32699);
}

double NNfunction_sb_uLcR::synapse0x1297da0() {
   return (neuron0x127ba50()*0.0603338);
}

double NNfunction_sb_uLcR::synapse0x1297de0() {
   return (neuron0x127c420()*0.889809);
}

double NNfunction_sb_uLcR::synapse0x1297e20() {
   return (neuron0x127cdf0()*-2.62217);
}

double NNfunction_sb_uLcR::synapse0x1297e60() {
   return (neuron0x127d7c0()*-1.76916);
}

double NNfunction_sb_uLcR::synapse0x1297ea0() {
   return (neuron0x127e190()*0.00536241);
}

double NNfunction_sb_uLcR::synapse0x1297ee0() {
   return (neuron0x127eb60()*0.013103);
}

double NNfunction_sb_uLcR::synapse0x1297a90() {
   return (neuron0x1274bf0()*0.342207);
}

double NNfunction_sb_uLcR::synapse0x1297ad0() {
   return (neuron0x1281740()*0.185411);
}

double NNfunction_sb_uLcR::synapse0x1297b10() {
   return (neuron0x1282110()*0.00173763);
}

double NNfunction_sb_uLcR::synapse0x1297b50() {
   return (neuron0x1282ae0()*0.0159982);
}

double NNfunction_sb_uLcR::synapse0x1298130() {
   return (neuron0x12834b0()*-0.786808);
}

double NNfunction_sb_uLcR::synapse0x1298170() {
   return (neuron0x1283e80()*0.260387);
}

double NNfunction_sb_uLcR::synapse0x12981b0() {
   return (neuron0x1284850()*-0.0163614);
}

double NNfunction_sb_uLcR::synapse0x12981f0() {
   return (neuron0x1285220()*-0.0861038);
}

double NNfunction_sb_uLcR::synapse0x1298230() {
   return (neuron0x1285bf0()*-0.303177);
}

double NNfunction_sb_uLcR::synapse0x1298270() {
   return (neuron0x12867d0()*-0.192429);
}

double NNfunction_sb_uLcR::synapse0x12982b0() {
   return (neuron0x12871a0()*0.848133);
}

double NNfunction_sb_uLcR::synapse0x12982f0() {
   return (neuron0x1278020()*0.810556);
}

double NNfunction_sb_uLcR::synapse0x1298330() {
   return (neuron0x12789f0()*-0.514482);
}

double NNfunction_sb_uLcR::synapse0x1298370() {
   return (neuron0x12793c0()*-0.00352623);
}

double NNfunction_sb_uLcR::synapse0x12983b0() {
   return (neuron0x128ba00()*0.0432001);
}

double NNfunction_sb_uLcR::synapse0x12983f0() {
   return (neuron0x128c2b0()*0.148245);
}

double NNfunction_sb_uLcR::synapse0x1298430() {
   return (neuron0x128cc80()*-2.74849);
}

double NNfunction_sb_uLcR::synapse0x1298470() {
   return (neuron0x128d650()*0.0255024);
}

double NNfunction_sb_uLcR::synapse0x1269590() {
   return (neuron0x1294850()*-7.09225);
}

double NNfunction_sb_uLcR::synapse0x12986d0() {
   return (neuron0x1294bf0()*-3.97665);
}

double NNfunction_sb_uLcR::synapse0x1298710() {
   return (neuron0x1295090()*-5.77411);
}

double NNfunction_sb_uLcR::synapse0x1298750() {
   return (neuron0x12961f0()*7.683);
}

double NNfunction_sb_uLcR::synapse0x1298790() {
   return (neuron0x1297350()*-6.28187);
}

