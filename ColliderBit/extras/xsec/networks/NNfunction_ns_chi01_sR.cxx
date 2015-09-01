#include "NNfunction_ns_chi01_sR.h"
#include <cmath>

double NNfunction_ns_chi01_sR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.0911)/15.1301;
   input1 = (in1 - 36.8365)/347.042;
   input2 = (in2 - 563.505)/600.861;
   input3 = (in3 - 133.551)/697.437;
   input4 = (in4 - 808.184)/820.009;
   input5 = (in5 - 698.493)/796.359;
   input6 = (in6 - 696.181)/796.198;
   input7 = (in7 - 709.981)/792.414;
   input8 = (in8 - 700.792)/818.562;
   input9 = (in9 - 689.139)/801.098;
   input10 = (in10 - 724.529)/821.197;
   input11 = (in11 - 638.437)/673.037;
   input12 = (in12 - 637.975)/673.885;
   input13 = (in13 - 471.764)/401.967;
   input14 = (in14 - 663.295)/670.019;
   input15 = (in15 - 662.332)/668.214;
   input16 = (in16 - 472.719)/456.455;
   input17 = (in17 - 658.034)/709.23;
   input18 = (in18 - 314.199)/229.09;
   input19 = (in19 - 679.488)/697.098;
   input20 = (in20 - -114.34)/423.781;
   input21 = (in21 - -144.704)/968.925;
   input22 = (in22 - 2.50155)/972.653;
   input23 = (in23 - -116.36)/532.666;
   switch(index) {
     case 0:
         return neuron0x2d2ea20();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi01_sR::Value(int index, double* input) {
   input0 = (input[0] - 23.0911)/15.1301;
   input1 = (input[1] - 36.8365)/347.042;
   input2 = (input[2] - 563.505)/600.861;
   input3 = (input[3] - 133.551)/697.437;
   input4 = (input[4] - 808.184)/820.009;
   input5 = (input[5] - 698.493)/796.359;
   input6 = (input[6] - 696.181)/796.198;
   input7 = (input[7] - 709.981)/792.414;
   input8 = (input[8] - 700.792)/818.562;
   input9 = (input[9] - 689.139)/801.098;
   input10 = (input[10] - 724.529)/821.197;
   input11 = (input[11] - 638.437)/673.037;
   input12 = (input[12] - 637.975)/673.885;
   input13 = (input[13] - 471.764)/401.967;
   input14 = (input[14] - 663.295)/670.019;
   input15 = (input[15] - 662.332)/668.214;
   input16 = (input[16] - 472.719)/456.455;
   input17 = (input[17] - 658.034)/709.23;
   input18 = (input[18] - 314.199)/229.09;
   input19 = (input[19] - 679.488)/697.098;
   input20 = (input[20] - -114.34)/423.781;
   input21 = (input[21] - -144.704)/968.925;
   input22 = (input[22] - 2.50155)/972.653;
   input23 = (input[23] - -116.36)/532.666;
   switch(index) {
     case 0:
         return neuron0x2d2ea20();
     default:
         return 0.;
   }
}

double NNfunction_ns_chi01_sR::neuron0x2cf9a90() {
   return input0;
}

double NNfunction_ns_chi01_sR::neuron0x2cf9d40() {
   return input1;
}

double NNfunction_ns_chi01_sR::neuron0x2cfa080() {
   return input2;
}

double NNfunction_ns_chi01_sR::neuron0x2cfa3c0() {
   return input3;
}

double NNfunction_ns_chi01_sR::neuron0x2cfa700() {
   return input4;
}

double NNfunction_ns_chi01_sR::neuron0x2cfaa40() {
   return input5;
}

double NNfunction_ns_chi01_sR::neuron0x2cfad80() {
   return input6;
}

double NNfunction_ns_chi01_sR::neuron0x2cfb0c0() {
   return input7;
}

double NNfunction_ns_chi01_sR::neuron0x2cfb400() {
   return input8;
}

double NNfunction_ns_chi01_sR::neuron0x2cfb740() {
   return input9;
}

double NNfunction_ns_chi01_sR::neuron0x2cfba80() {
   return input10;
}

double NNfunction_ns_chi01_sR::neuron0x2cfbdc0() {
   return input11;
}

double NNfunction_ns_chi01_sR::neuron0x2cfc100() {
   return input12;
}

double NNfunction_ns_chi01_sR::neuron0x2cfc440() {
   return input13;
}

double NNfunction_ns_chi01_sR::neuron0x2cfc780() {
   return input14;
}

double NNfunction_ns_chi01_sR::neuron0x2cfcac0() {
   return input15;
}

double NNfunction_ns_chi01_sR::neuron0x2cfce00() {
   return input16;
}

double NNfunction_ns_chi01_sR::neuron0x2cfd360() {
   return input17;
}

double NNfunction_ns_chi01_sR::neuron0x2cfd6a0() {
   return input18;
}

double NNfunction_ns_chi01_sR::neuron0x2cfd9e0() {
   return input19;
}

double NNfunction_ns_chi01_sR::neuron0x2cfdd20() {
   return input20;
}

double NNfunction_ns_chi01_sR::neuron0x2cfe060() {
   return input21;
}

double NNfunction_ns_chi01_sR::neuron0x2cfe3a0() {
   return input22;
}

double NNfunction_ns_chi01_sR::neuron0x2cfe6e0() {
   return input23;
}

double NNfunction_ns_chi01_sR::input0x2cfeb50() {
   double input = 0.614441;
   input += synapse0x2cfee90();
   input += synapse0x2cfeed0();
   input += synapse0x2cfef10();
   input += synapse0x2cfef50();
   input += synapse0x2cfef90();
   input += synapse0x2cfefd0();
   input += synapse0x2cff010();
   input += synapse0x2cff050();
   input += synapse0x2cff090();
   input += synapse0x2cff0d0();
   input += synapse0x2cff110();
   input += synapse0x2cff150();
   input += synapse0x2cff190();
   input += synapse0x2cff1d0();
   input += synapse0x2cff210();
   input += synapse0x2cff250();
   input += synapse0x2cfece0();
   input += synapse0x2cfed20();
   input += synapse0x2ab5c10();
   input += synapse0x2ab5c50();
   input += synapse0x2cff290();
   input += synapse0x2cff2d0();
   input += synapse0x2cff310();
   input += synapse0x2cff350();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2cfeb50() {
   double input = input0x2cfeb50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2cff390() {
   double input = 3.6461;
   input += synapse0x2cff6d0();
   input += synapse0x2cff710();
   input += synapse0x2cff750();
   input += synapse0x2cff790();
   input += synapse0x2cff7d0();
   input += synapse0x2cff810();
   input += synapse0x2cff850();
   input += synapse0x2cff890();
   input += synapse0x2cff8d0();
   input += synapse0x2ab5a60();
   input += synapse0x2ab5aa0();
   input += synapse0x2ab5ae0();
   input += synapse0x2ab5b20();
   input += synapse0x2cffb20();
   input += synapse0x2cffb60();
   input += synapse0x2cffba0();
   input += synapse0x2cff520();
   input += synapse0x2cff560();
   input += synapse0x2cffcf0();
   input += synapse0x2cffd30();
   input += synapse0x2cffd70();
   input += synapse0x2cffdb0();
   input += synapse0x2cffdf0();
   input += synapse0x2cffe30();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2cff390() {
   double input = input0x2cff390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2cffe70() {
   double input = -1.25907;
   input += synapse0x2d001b0();
   input += synapse0x2d001f0();
   input += synapse0x2d00230();
   input += synapse0x2d00270();
   input += synapse0x2d002b0();
   input += synapse0x2d002f0();
   input += synapse0x2d00330();
   input += synapse0x2d00370();
   input += synapse0x2d003b0();
   input += synapse0x2d003f0();
   input += synapse0x2d00430();
   input += synapse0x2d00470();
   input += synapse0x2d004b0();
   input += synapse0x2d004f0();
   input += synapse0x2d00530();
   input += synapse0x2d00570();
   input += synapse0x2d00000();
   input += synapse0x2d00040();
   input += synapse0x2ab6300();
   input += synapse0x2ac3bd0();
   input += synapse0x2ac3c10();
   input += synapse0x2d024a0();
   input += synapse0x2d024e0();
   input += synapse0x2cf97d0();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2cffe70() {
   double input = input0x2cffe70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2cff910() {
   double input = -1.03037;
   input += synapse0x2cf98a0();
   input += synapse0x2ac4450();
   input += synapse0x2cffaa0();
   input += synapse0x2cffae0();
   input += synapse0x2d006c0();
   input += synapse0x2d00700();
   input += synapse0x2d00740();
   input += synapse0x2d00780();
   input += synapse0x2d007c0();
   input += synapse0x2d00800();
   input += synapse0x2d00840();
   input += synapse0x2d00880();
   input += synapse0x2d008c0();
   input += synapse0x2d00900();
   input += synapse0x2d00940();
   input += synapse0x2d00980();
   input += synapse0x2cf9810();
   input += synapse0x2cf9850();
   input += synapse0x2d00ad0();
   input += synapse0x2d00b10();
   input += synapse0x2d00b50();
   input += synapse0x2d00b90();
   input += synapse0x2d00bd0();
   input += synapse0x2d00c10();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2cff910() {
   double input = input0x2cff910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d00c50() {
   double input = 0.0711817;
   input += synapse0x2d00f90();
   input += synapse0x2d00fd0();
   input += synapse0x2d01010();
   input += synapse0x2d01050();
   input += synapse0x2d01090();
   input += synapse0x2d010d0();
   input += synapse0x2d01110();
   input += synapse0x2d01150();
   input += synapse0x2d01190();
   input += synapse0x2d011d0();
   input += synapse0x2d01210();
   input += synapse0x2d01250();
   input += synapse0x2d01290();
   input += synapse0x2d012d0();
   input += synapse0x2d01310();
   input += synapse0x2d01350();
   input += synapse0x2d014a0();
   input += synapse0x2d00de0();
   input += synapse0x2d00e20();
   input += synapse0x2d025e0();
   input += synapse0x2d02620();
   input += synapse0x2d02660();
   input += synapse0x2d026a0();
   input += synapse0x2d026e0();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d00c50() {
   double input = input0x2d00c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d02720() {
   double input = -0.129658;
   input += synapse0x2d02a60();
   input += synapse0x2d02aa0();
   input += synapse0x2d02ae0();
   input += synapse0x2d02b20();
   input += synapse0x2d02b60();
   input += synapse0x2d02ba0();
   input += synapse0x2d02be0();
   input += synapse0x2d02c20();
   input += synapse0x2d02c60();
   input += synapse0x2ac3f20();
   input += synapse0x2ac3f60();
   input += synapse0x2ac3fa0();
   input += synapse0x2ac3fe0();
   input += synapse0x2ac4020();
   input += synapse0x2ac4060();
   input += synapse0x2ac40a0();
   input += synapse0x2d028b0();
   input += synapse0x2d028f0();
   input += synapse0x2ac41f0();
   input += synapse0x2ac4230();
   input += synapse0x2ac4270();
   input += synapse0x2ac42b0();
   input += synapse0x2ac42f0();
   input += synapse0x2d034b0();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d02720() {
   double input = input0x2d02720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d034f0() {
   double input = 0.287031;
   input += synapse0x2d03830();
   input += synapse0x2d03870();
   input += synapse0x2d038b0();
   input += synapse0x2d038f0();
   input += synapse0x2d03930();
   input += synapse0x2d03970();
   input += synapse0x2d039b0();
   input += synapse0x2d039f0();
   input += synapse0x2d03a30();
   input += synapse0x2d03a70();
   input += synapse0x2d03ab0();
   input += synapse0x2d03af0();
   input += synapse0x2d03b30();
   input += synapse0x2d03b70();
   input += synapse0x2d03bb0();
   input += synapse0x2d03bf0();
   input += synapse0x2d03680();
   input += synapse0x2d036c0();
   input += synapse0x2d03d40();
   input += synapse0x2d03d80();
   input += synapse0x2d03dc0();
   input += synapse0x2d03e00();
   input += synapse0x2d03e40();
   input += synapse0x2d03e80();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d034f0() {
   double input = input0x2d034f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d03ec0() {
   double input = 5.28921;
   input += synapse0x2d04200();
   input += synapse0x2d04240();
   input += synapse0x2d04280();
   input += synapse0x2d042c0();
   input += synapse0x2d04300();
   input += synapse0x2d04340();
   input += synapse0x2d04380();
   input += synapse0x2d043c0();
   input += synapse0x2d04400();
   input += synapse0x2d04440();
   input += synapse0x2d04480();
   input += synapse0x2d044c0();
   input += synapse0x2d04500();
   input += synapse0x2d04540();
   input += synapse0x2d04580();
   input += synapse0x2d045c0();
   input += synapse0x2d04050();
   input += synapse0x2d04090();
   input += synapse0x2d04710();
   input += synapse0x2d04750();
   input += synapse0x2d04790();
   input += synapse0x2d047d0();
   input += synapse0x2d04810();
   input += synapse0x2d04850();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d03ec0() {
   double input = input0x2d03ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d04890() {
   double input = 1.39403;
   input += synapse0x2cfd250();
   input += synapse0x2cfd290();
   input += synapse0x2cfd2d0();
   input += synapse0x2cfd310();
   input += synapse0x2d04de0();
   input += synapse0x2d04e20();
   input += synapse0x2d04e60();
   input += synapse0x2d04ea0();
   input += synapse0x2d04ee0();
   input += synapse0x2d04f20();
   input += synapse0x2d04f60();
   input += synapse0x2d04fa0();
   input += synapse0x2d04fe0();
   input += synapse0x2d05020();
   input += synapse0x2d05060();
   input += synapse0x2d050a0();
   input += synapse0x2d04a20();
   input += synapse0x2d04a60();
   input += synapse0x2d051f0();
   input += synapse0x2d05230();
   input += synapse0x2d05270();
   input += synapse0x2d052b0();
   input += synapse0x2d052f0();
   input += synapse0x2d05330();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d04890() {
   double input = input0x2d04890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d05370() {
   double input = -0.538963;
   input += synapse0x2d056b0();
   input += synapse0x2d056f0();
   input += synapse0x2d05730();
   input += synapse0x2d05770();
   input += synapse0x2d057b0();
   input += synapse0x2d057f0();
   input += synapse0x2d05830();
   input += synapse0x2d05870();
   input += synapse0x2d058b0();
   input += synapse0x2d058f0();
   input += synapse0x2d05930();
   input += synapse0x2d05970();
   input += synapse0x2d059b0();
   input += synapse0x2d059f0();
   input += synapse0x2d05a30();
   input += synapse0x2d05a70();
   input += synapse0x2d05500();
   input += synapse0x2d05540();
   input += synapse0x2d05bc0();
   input += synapse0x2d05c00();
   input += synapse0x2d05c40();
   input += synapse0x2d05c80();
   input += synapse0x2d05cc0();
   input += synapse0x2d05d00();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d05370() {
   double input = input0x2d05370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d05d40() {
   double input = -0.96501;
   input += synapse0x2d06080();
   input += synapse0x2d060c0();
   input += synapse0x2d06100();
   input += synapse0x2d06140();
   input += synapse0x2d06180();
   input += synapse0x2d061c0();
   input += synapse0x2d06200();
   input += synapse0x2d06240();
   input += synapse0x2d06280();
   input += synapse0x2d062c0();
   input += synapse0x2d06300();
   input += synapse0x2d06340();
   input += synapse0x2d06380();
   input += synapse0x2d063c0();
   input += synapse0x2d06400();
   input += synapse0x2d06440();
   input += synapse0x2d05ed0();
   input += synapse0x2d05f10();
   input += synapse0x2d02ca0();
   input += synapse0x2d02ce0();
   input += synapse0x2d02d20();
   input += synapse0x2d02d60();
   input += synapse0x2d02da0();
   input += synapse0x2d02de0();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d05d40() {
   double input = input0x2d05d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d02e20() {
   double input = 0.13624;
   input += synapse0x2d03160();
   input += synapse0x2d031a0();
   input += synapse0x2d031e0();
   input += synapse0x2d03220();
   input += synapse0x2d03260();
   input += synapse0x2d032a0();
   input += synapse0x2d032e0();
   input += synapse0x2d03320();
   input += synapse0x2d03360();
   input += synapse0x2d033a0();
   input += synapse0x2d033e0();
   input += synapse0x2d03420();
   input += synapse0x2d03460();
   input += synapse0x2d075a0();
   input += synapse0x2d075e0();
   input += synapse0x2d07620();
   input += synapse0x2d02fb0();
   input += synapse0x2d02ff0();
   input += synapse0x2d07770();
   input += synapse0x2d077b0();
   input += synapse0x2d077f0();
   input += synapse0x2d07830();
   input += synapse0x2d07870();
   input += synapse0x2d078b0();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d02e20() {
   double input = input0x2d02e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d078f0() {
   double input = -0.668374;
   input += synapse0x2d07c30();
   input += synapse0x2d07c70();
   input += synapse0x2d07cb0();
   input += synapse0x2d07cf0();
   input += synapse0x2d07d30();
   input += synapse0x2d07d70();
   input += synapse0x2d07db0();
   input += synapse0x2d07df0();
   input += synapse0x2d07e30();
   input += synapse0x2d07e70();
   input += synapse0x2d07eb0();
   input += synapse0x2d07ef0();
   input += synapse0x2d07f30();
   input += synapse0x2d07f70();
   input += synapse0x2d07fb0();
   input += synapse0x2d07ff0();
   input += synapse0x2d07a80();
   input += synapse0x2d07ac0();
   input += synapse0x2d08140();
   input += synapse0x2d08180();
   input += synapse0x2d081c0();
   input += synapse0x2d08200();
   input += synapse0x2d08240();
   input += synapse0x2d08280();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d078f0() {
   double input = input0x2d078f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d082c0() {
   double input = -2.61132;
   input += synapse0x2d08600();
   input += synapse0x2d08640();
   input += synapse0x2d08680();
   input += synapse0x2d086c0();
   input += synapse0x2d08700();
   input += synapse0x2d08740();
   input += synapse0x2d08780();
   input += synapse0x2d087c0();
   input += synapse0x2d08800();
   input += synapse0x2d08840();
   input += synapse0x2d08880();
   input += synapse0x2d088c0();
   input += synapse0x2d08900();
   input += synapse0x2d08940();
   input += synapse0x2d08980();
   input += synapse0x2d089c0();
   input += synapse0x2d08450();
   input += synapse0x2d08490();
   input += synapse0x2d08b10();
   input += synapse0x2d08b50();
   input += synapse0x2d08b90();
   input += synapse0x2d08bd0();
   input += synapse0x2d08c10();
   input += synapse0x2d08c50();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d082c0() {
   double input = input0x2d082c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d08c90() {
   double input = -1.18218;
   input += synapse0x2d08fd0();
   input += synapse0x2d09010();
   input += synapse0x2d09050();
   input += synapse0x2d09090();
   input += synapse0x2d090d0();
   input += synapse0x2d09110();
   input += synapse0x2d09150();
   input += synapse0x2d09190();
   input += synapse0x2d091d0();
   input += synapse0x2d09210();
   input += synapse0x2d09250();
   input += synapse0x2d09290();
   input += synapse0x2d092d0();
   input += synapse0x2d09310();
   input += synapse0x2d09350();
   input += synapse0x2d09390();
   input += synapse0x2d08e20();
   input += synapse0x2d08e60();
   input += synapse0x2d094e0();
   input += synapse0x2d09520();
   input += synapse0x2d09560();
   input += synapse0x2d095a0();
   input += synapse0x2d095e0();
   input += synapse0x2d09620();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d08c90() {
   double input = input0x2d08c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d09660() {
   double input = 0.785539;
   input += synapse0x2d099a0();
   input += synapse0x2cf9c20();
   input += synapse0x2cf9c60();
   input += synapse0x2cf9f60();
   input += synapse0x2cf9fa0();
   input += synapse0x2cfa2a0();
   input += synapse0x2cfa2e0();
   input += synapse0x2cfa5e0();
   input += synapse0x2cfa620();
   input += synapse0x2cfa920();
   input += synapse0x2cfa960();
   input += synapse0x2cfac60();
   input += synapse0x2cfaca0();
   input += synapse0x2cfafa0();
   input += synapse0x2cfafe0();
   input += synapse0x2cfb2e0();
   input += synapse0x2cfb320();
   input += synapse0x2cfb620();
   input += synapse0x2cfb660();
   input += synapse0x2cfb960();
   input += synapse0x2cfb9a0();
   input += synapse0x2cfbca0();
   input += synapse0x2cfbce0();
   input += synapse0x2cfbfe0();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d09660() {
   double input = input0x2d09660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d0b470() {
   double input = 9.53988;
   input += synapse0x2cfc020();
   input += synapse0x2cfcce0();
   input += synapse0x2cfcd20();
   input += synapse0x2d097f0();
   input += synapse0x2d09830();
   input += synapse0x2cfd020();
   input += synapse0x2cfd060();
   input += synapse0x2cfd580();
   input += synapse0x2cfd5c0();
   input += synapse0x2cfd8c0();
   input += synapse0x2cfd900();
   input += synapse0x2cfdc00();
   input += synapse0x2cfdc40();
   input += synapse0x2cfdf40();
   input += synapse0x2cfdf80();
   input += synapse0x2cfe280();
   input += synapse0x2cfe2c0();
   input += synapse0x2cfe5c0();
   input += synapse0x2cfe600();
   input += synapse0x2cfe900();
   input += synapse0x2cfe940();
   input += synapse0x2cfc320();
   input += synapse0x2cfc360();
   input += synapse0x2d0b710();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d0b470() {
   double input = input0x2d0b470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d0b750() {
   double input = -7.1278;
   input += synapse0x2d0ba90();
   input += synapse0x2d0bad0();
   input += synapse0x2d0bb10();
   input += synapse0x2d0bb50();
   input += synapse0x2d0bb90();
   input += synapse0x2d0bbd0();
   input += synapse0x2d0bc10();
   input += synapse0x2d0bc50();
   input += synapse0x2d0bc90();
   input += synapse0x2d0bcd0();
   input += synapse0x2d0bd10();
   input += synapse0x2d0bd50();
   input += synapse0x2d0bd90();
   input += synapse0x2d0bdd0();
   input += synapse0x2d0be10();
   input += synapse0x2d0be50();
   input += synapse0x2d0b8e0();
   input += synapse0x2d0b920();
   input += synapse0x2d0bfa0();
   input += synapse0x2d0bfe0();
   input += synapse0x2d0c020();
   input += synapse0x2d0c060();
   input += synapse0x2d0c0a0();
   input += synapse0x2d0c0e0();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d0b750() {
   double input = input0x2d0b750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d0c120() {
   double input = -0.773892;
   input += synapse0x2d0c460();
   input += synapse0x2d0c4a0();
   input += synapse0x2d0c4e0();
   input += synapse0x2d0c520();
   input += synapse0x2d0c560();
   input += synapse0x2d0c5a0();
   input += synapse0x2d0c5e0();
   input += synapse0x2d0c620();
   input += synapse0x2d0c660();
   input += synapse0x2d0c6a0();
   input += synapse0x2d0c6e0();
   input += synapse0x2d0c720();
   input += synapse0x2d0c760();
   input += synapse0x2d0c7a0();
   input += synapse0x2d0c7e0();
   input += synapse0x2d0c820();
   input += synapse0x2d0c2b0();
   input += synapse0x2d0c2f0();
   input += synapse0x2d0c970();
   input += synapse0x2d0c9b0();
   input += synapse0x2d0c9f0();
   input += synapse0x2d0ca30();
   input += synapse0x2d0ca70();
   input += synapse0x2d0cab0();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d0c120() {
   double input = input0x2d0c120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d0caf0() {
   double input = -0.0520288;
   input += synapse0x2d0ce30();
   input += synapse0x2d0ce70();
   input += synapse0x2d0ceb0();
   input += synapse0x2d0cef0();
   input += synapse0x2d0cf30();
   input += synapse0x2d0cf70();
   input += synapse0x2d0cfb0();
   input += synapse0x2d0cff0();
   input += synapse0x2d0d030();
   input += synapse0x2d0d070();
   input += synapse0x2d0d0b0();
   input += synapse0x2d0d0f0();
   input += synapse0x2d0d130();
   input += synapse0x2d0d170();
   input += synapse0x2d0d1b0();
   input += synapse0x2d0d1f0();
   input += synapse0x2d0cc80();
   input += synapse0x2d0ccc0();
   input += synapse0x2d0d340();
   input += synapse0x2d0d380();
   input += synapse0x2d0d3c0();
   input += synapse0x2d0d400();
   input += synapse0x2d0d440();
   input += synapse0x2d0d480();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d0caf0() {
   double input = input0x2d0caf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d0d4c0() {
   double input = 0.600954;
   input += synapse0x2d0d800();
   input += synapse0x2d0d840();
   input += synapse0x2d0d880();
   input += synapse0x2d0d8c0();
   input += synapse0x2d0d900();
   input += synapse0x2d0d940();
   input += synapse0x2d0d980();
   input += synapse0x2d0d9c0();
   input += synapse0x2d0da00();
   input += synapse0x2d0da40();
   input += synapse0x2d0da80();
   input += synapse0x2d0dac0();
   input += synapse0x2d0db00();
   input += synapse0x2d0db40();
   input += synapse0x2d0db80();
   input += synapse0x2d0dbc0();
   input += synapse0x2d0d650();
   input += synapse0x2d0d690();
   input += synapse0x2d0dd10();
   input += synapse0x2d0dd50();
   input += synapse0x2d0dd90();
   input += synapse0x2d0ddd0();
   input += synapse0x2d0de10();
   input += synapse0x2d0de50();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d0d4c0() {
   double input = input0x2d0d4c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d0de90() {
   double input = 4.79195;
   input += synapse0x2d0e1d0();
   input += synapse0x2d0e210();
   input += synapse0x2d0e250();
   input += synapse0x2d0e290();
   input += synapse0x2d0e2d0();
   input += synapse0x2d0e310();
   input += synapse0x2d0e350();
   input += synapse0x2d0e390();
   input += synapse0x2d0e3d0();
   input += synapse0x2d06590();
   input += synapse0x2d065d0();
   input += synapse0x2d06610();
   input += synapse0x2d06650();
   input += synapse0x2d06690();
   input += synapse0x2d066d0();
   input += synapse0x2d06710();
   input += synapse0x2d0e020();
   input += synapse0x2d0e060();
   input += synapse0x2d06860();
   input += synapse0x2d068a0();
   input += synapse0x2d068e0();
   input += synapse0x2d06920();
   input += synapse0x2d06960();
   input += synapse0x2d069a0();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d0de90() {
   double input = input0x2d0de90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d069e0() {
   double input = -1.00122;
   input += synapse0x2d06d20();
   input += synapse0x2d06d60();
   input += synapse0x2d06da0();
   input += synapse0x2d06de0();
   input += synapse0x2d06e20();
   input += synapse0x2d06e60();
   input += synapse0x2d06ea0();
   input += synapse0x2d06ee0();
   input += synapse0x2d06f20();
   input += synapse0x2d06f60();
   input += synapse0x2d06fa0();
   input += synapse0x2d06fe0();
   input += synapse0x2d07020();
   input += synapse0x2d07060();
   input += synapse0x2d070a0();
   input += synapse0x2d070e0();
   input += synapse0x2d06b70();
   input += synapse0x2d06bb0();
   input += synapse0x2d07230();
   input += synapse0x2d07270();
   input += synapse0x2d072b0();
   input += synapse0x2d072f0();
   input += synapse0x2d07330();
   input += synapse0x2d07370();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d069e0() {
   double input = input0x2d069e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d073b0() {
   double input = -8.18867;
   input += synapse0x2d07540();
   input += synapse0x2d105d0();
   input += synapse0x2d10610();
   input += synapse0x2d10650();
   input += synapse0x2d10690();
   input += synapse0x2d106d0();
   input += synapse0x2d10710();
   input += synapse0x2d10750();
   input += synapse0x2d10790();
   input += synapse0x2d107d0();
   input += synapse0x2d10810();
   input += synapse0x2d10850();
   input += synapse0x2d10890();
   input += synapse0x2d108d0();
   input += synapse0x2d10910();
   input += synapse0x2d10950();
   input += synapse0x2d10420();
   input += synapse0x2d10460();
   input += synapse0x2d10aa0();
   input += synapse0x2d10ae0();
   input += synapse0x2d10b20();
   input += synapse0x2d10b60();
   input += synapse0x2d10ba0();
   input += synapse0x2d10be0();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d073b0() {
   double input = input0x2d073b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d10c20() {
   double input = -0.462781;
   input += synapse0x2d10f60();
   input += synapse0x2d10fa0();
   input += synapse0x2d10fe0();
   input += synapse0x2d11020();
   input += synapse0x2d11060();
   input += synapse0x2d110a0();
   input += synapse0x2d110e0();
   input += synapse0x2d11120();
   input += synapse0x2d11160();
   input += synapse0x2d111a0();
   input += synapse0x2d111e0();
   input += synapse0x2d11220();
   input += synapse0x2d11260();
   input += synapse0x2d112a0();
   input += synapse0x2d112e0();
   input += synapse0x2d11320();
   input += synapse0x2d10db0();
   input += synapse0x2d10df0();
   input += synapse0x2d11470();
   input += synapse0x2d114b0();
   input += synapse0x2d114f0();
   input += synapse0x2d11530();
   input += synapse0x2d11570();
   input += synapse0x2d115b0();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d10c20() {
   double input = input0x2d10c20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d115f0() {
   double input = 0.623144;
   input += synapse0x2d11930();
   input += synapse0x2d11970();
   input += synapse0x2d119b0();
   input += synapse0x2d119f0();
   input += synapse0x2d11a30();
   input += synapse0x2d11a70();
   input += synapse0x2d11ab0();
   input += synapse0x2d11af0();
   input += synapse0x2d11b30();
   input += synapse0x2d11b70();
   input += synapse0x2d11bb0();
   input += synapse0x2d11bf0();
   input += synapse0x2d11c30();
   input += synapse0x2d11c70();
   input += synapse0x2d11cb0();
   input += synapse0x2d11cf0();
   input += synapse0x2d11780();
   input += synapse0x2d117c0();
   input += synapse0x2d11e40();
   input += synapse0x2d11e80();
   input += synapse0x2d11ec0();
   input += synapse0x2d11f00();
   input += synapse0x2d11f40();
   input += synapse0x2d11f80();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d115f0() {
   double input = input0x2d115f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d11fc0() {
   double input = 0.112045;
   input += synapse0x2d12300();
   input += synapse0x2d12340();
   input += synapse0x2d12380();
   input += synapse0x2d123c0();
   input += synapse0x2d12400();
   input += synapse0x2d12440();
   input += synapse0x2d12480();
   input += synapse0x2d124c0();
   input += synapse0x2d12500();
   input += synapse0x2d12540();
   input += synapse0x2d12580();
   input += synapse0x2d125c0();
   input += synapse0x2d12600();
   input += synapse0x2d12640();
   input += synapse0x2d12680();
   input += synapse0x2d126c0();
   input += synapse0x2d12150();
   input += synapse0x2d12190();
   input += synapse0x2d12810();
   input += synapse0x2d12850();
   input += synapse0x2d12890();
   input += synapse0x2d128d0();
   input += synapse0x2d12910();
   input += synapse0x2d12950();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d11fc0() {
   double input = input0x2d11fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d12990() {
   double input = -0.00640847;
   input += synapse0x2d12cd0();
   input += synapse0x2d12d10();
   input += synapse0x2d12d50();
   input += synapse0x2d12d90();
   input += synapse0x2d12dd0();
   input += synapse0x2d12e10();
   input += synapse0x2d12e50();
   input += synapse0x2d12e90();
   input += synapse0x2d12ed0();
   input += synapse0x2d12f10();
   input += synapse0x2d12f50();
   input += synapse0x2d12f90();
   input += synapse0x2d12fd0();
   input += synapse0x2d13010();
   input += synapse0x2d13050();
   input += synapse0x2d13090();
   input += synapse0x2d12b20();
   input += synapse0x2d12b60();
   input += synapse0x2d131e0();
   input += synapse0x2d13220();
   input += synapse0x2d13260();
   input += synapse0x2d132a0();
   input += synapse0x2d132e0();
   input += synapse0x2d13320();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d12990() {
   double input = input0x2d12990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d13360() {
   double input = -0.222387;
   input += synapse0x2d136a0();
   input += synapse0x2d136e0();
   input += synapse0x2d13720();
   input += synapse0x2d13760();
   input += synapse0x2d137a0();
   input += synapse0x2d137e0();
   input += synapse0x2d13820();
   input += synapse0x2d13860();
   input += synapse0x2d138a0();
   input += synapse0x2d138e0();
   input += synapse0x2d13920();
   input += synapse0x2d13960();
   input += synapse0x2d139a0();
   input += synapse0x2d139e0();
   input += synapse0x2d13a20();
   input += synapse0x2d13a60();
   input += synapse0x2d134f0();
   input += synapse0x2d13530();
   input += synapse0x2d13bb0();
   input += synapse0x2d13bf0();
   input += synapse0x2d13c30();
   input += synapse0x2d13c70();
   input += synapse0x2d13cb0();
   input += synapse0x2d13cf0();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d13360() {
   double input = input0x2d13360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d13d30() {
   double input = 0.395693;
   input += synapse0x2d14070();
   input += synapse0x2d140b0();
   input += synapse0x2d140f0();
   input += synapse0x2d14130();
   input += synapse0x2d14170();
   input += synapse0x2d141b0();
   input += synapse0x2d141f0();
   input += synapse0x2d14230();
   input += synapse0x2d14270();
   input += synapse0x2d142b0();
   input += synapse0x2d142f0();
   input += synapse0x2d14330();
   input += synapse0x2d14370();
   input += synapse0x2d143b0();
   input += synapse0x2d143f0();
   input += synapse0x2d14430();
   input += synapse0x2d13ec0();
   input += synapse0x2d13f00();
   input += synapse0x2d14580();
   input += synapse0x2d145c0();
   input += synapse0x2d14600();
   input += synapse0x2d14640();
   input += synapse0x2d14680();
   input += synapse0x2d146c0();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d13d30() {
   double input = input0x2d13d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d14700() {
   double input = -0.443377;
   input += synapse0x2d14a40();
   input += synapse0x2d14a80();
   input += synapse0x2d14ac0();
   input += synapse0x2d14b00();
   input += synapse0x2d14b40();
   input += synapse0x2d14b80();
   input += synapse0x2d14bc0();
   input += synapse0x2d14c00();
   input += synapse0x2d14c40();
   input += synapse0x2d14c80();
   input += synapse0x2d14cc0();
   input += synapse0x2d14d00();
   input += synapse0x2d14d40();
   input += synapse0x2d14d80();
   input += synapse0x2d14dc0();
   input += synapse0x2d14e00();
   input += synapse0x2d14890();
   input += synapse0x2d148d0();
   input += synapse0x2d14f50();
   input += synapse0x2d14f90();
   input += synapse0x2d14fd0();
   input += synapse0x2d15010();
   input += synapse0x2d15050();
   input += synapse0x2d15090();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d14700() {
   double input = input0x2d14700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d150d0() {
   double input = 2.07286;
   input += synapse0x2d15410();
   input += synapse0x2d099e0();
   input += synapse0x2d09a20();
   input += synapse0x2d09a60();
   input += synapse0x2d09cb0();
   input += synapse0x2d09cf0();
   input += synapse0x2d09d30();
   input += synapse0x2d09f80();
   input += synapse0x2d09fc0();
   input += synapse0x2d0a210();
   input += synapse0x2d0a250();
   input += synapse0x2d0a290();
   input += synapse0x2d0a4e0();
   input += synapse0x2d0a520();
   input += synapse0x2d0a770();
   input += synapse0x2d0a7b0();
   input += synapse0x2d15260();
   input += synapse0x2d152a0();
   input += synapse0x2d0a900();
   input += synapse0x2d0ae10();
   input += synapse0x2d0ae50();
   input += synapse0x2d0ae90();
   input += synapse0x2d0b0e0();
   input += synapse0x2d0b120();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d150d0() {
   double input = input0x2d150d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d0b160() {
   double input = 1.78662;
   input += synapse0x2d0a9d0();
   input += synapse0x2d0aa10();
   input += synapse0x2d0aa50();
   input += synapse0x2d0aa90();
   input += synapse0x2d0b410();
   input += synapse0x2d17760();
   input += synapse0x2d177a0();
   input += synapse0x2d177e0();
   input += synapse0x2d17820();
   input += synapse0x2d17860();
   input += synapse0x2d178a0();
   input += synapse0x2d178e0();
   input += synapse0x2d17920();
   input += synapse0x2d17960();
   input += synapse0x2d179a0();
   input += synapse0x2d179e0();
   input += synapse0x2d0b2f0();
   input += synapse0x2d0b330();
   input += synapse0x2d17b30();
   input += synapse0x2d17b70();
   input += synapse0x2d17bb0();
   input += synapse0x2d17bf0();
   input += synapse0x2d17c30();
   input += synapse0x2d17c70();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d0b160() {
   double input = input0x2d0b160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d17cb0() {
   double input = -1.73696;
   input += synapse0x2d17ff0();
   input += synapse0x2d18030();
   input += synapse0x2d18070();
   input += synapse0x2d180b0();
   input += synapse0x2d180f0();
   input += synapse0x2d18130();
   input += synapse0x2d18170();
   input += synapse0x2d181b0();
   input += synapse0x2d181f0();
   input += synapse0x2d18230();
   input += synapse0x2d18270();
   input += synapse0x2d182b0();
   input += synapse0x2d182f0();
   input += synapse0x2d18330();
   input += synapse0x2d18370();
   input += synapse0x2d183b0();
   input += synapse0x2d17e40();
   input += synapse0x2d17e80();
   input += synapse0x2d18500();
   input += synapse0x2d18540();
   input += synapse0x2d18580();
   input += synapse0x2d185c0();
   input += synapse0x2d18600();
   input += synapse0x2d18640();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d17cb0() {
   double input = input0x2d17cb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d18680() {
   double input = -1.09965;
   input += synapse0x2d189c0();
   input += synapse0x2d18a00();
   input += synapse0x2d18a40();
   input += synapse0x2d18a80();
   input += synapse0x2d18ac0();
   input += synapse0x2d18b00();
   input += synapse0x2d18b40();
   input += synapse0x2d18b80();
   input += synapse0x2d18bc0();
   input += synapse0x2d18c00();
   input += synapse0x2d18c40();
   input += synapse0x2d18c80();
   input += synapse0x2d18cc0();
   input += synapse0x2d18d00();
   input += synapse0x2d18d40();
   input += synapse0x2d18d80();
   input += synapse0x2d18810();
   input += synapse0x2d18850();
   input += synapse0x2d18ed0();
   input += synapse0x2d18f10();
   input += synapse0x2d18f50();
   input += synapse0x2d18f90();
   input += synapse0x2d18fd0();
   input += synapse0x2d19010();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d18680() {
   double input = input0x2d18680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d19050() {
   double input = 2.69411;
   input += synapse0x2d19390();
   input += synapse0x2d193d0();
   input += synapse0x2d19410();
   input += synapse0x2d19450();
   input += synapse0x2d19490();
   input += synapse0x2d194d0();
   input += synapse0x2d19510();
   input += synapse0x2d19550();
   input += synapse0x2d19590();
   input += synapse0x2d195d0();
   input += synapse0x2d19610();
   input += synapse0x2d19650();
   input += synapse0x2d19690();
   input += synapse0x2d196d0();
   input += synapse0x2d19710();
   input += synapse0x2d19750();
   input += synapse0x2d191e0();
   input += synapse0x2d19220();
   input += synapse0x2d198a0();
   input += synapse0x2d198e0();
   input += synapse0x2d19920();
   input += synapse0x2d19960();
   input += synapse0x2d199a0();
   input += synapse0x2d199e0();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d19050() {
   double input = input0x2d19050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d19a20() {
   double input = 0.183154;
   input += synapse0x2d19d60();
   input += synapse0x2d19da0();
   input += synapse0x2d19de0();
   input += synapse0x2d19e20();
   input += synapse0x2d19e60();
   input += synapse0x2d19ea0();
   input += synapse0x2d19ee0();
   input += synapse0x2d19f20();
   input += synapse0x2d19f60();
   input += synapse0x2d19fa0();
   input += synapse0x2d19fe0();
   input += synapse0x2d1a020();
   input += synapse0x2d1a060();
   input += synapse0x2d1a0a0();
   input += synapse0x2d1a0e0();
   input += synapse0x2d1a120();
   input += synapse0x2d19bb0();
   input += synapse0x2d19bf0();
   input += synapse0x2d1a270();
   input += synapse0x2d1a2b0();
   input += synapse0x2d1a2f0();
   input += synapse0x2d1a330();
   input += synapse0x2d1a370();
   input += synapse0x2d1a3b0();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d19a20() {
   double input = input0x2d19a20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d1a3f0() {
   double input = 1.93651;
   input += synapse0x2d1a730();
   input += synapse0x2d1a770();
   input += synapse0x2d1a7b0();
   input += synapse0x2d1a7f0();
   input += synapse0x2d1a830();
   input += synapse0x2d1a870();
   input += synapse0x2d1a8b0();
   input += synapse0x2d1a8f0();
   input += synapse0x2d1a930();
   input += synapse0x2d1a970();
   input += synapse0x2d1a9b0();
   input += synapse0x2d1a9f0();
   input += synapse0x2d1aa30();
   input += synapse0x2d1aa70();
   input += synapse0x2d1aab0();
   input += synapse0x2d1aaf0();
   input += synapse0x2d1a580();
   input += synapse0x2d1a5c0();
   input += synapse0x2d1ac40();
   input += synapse0x2d1ac80();
   input += synapse0x2d1acc0();
   input += synapse0x2d1ad00();
   input += synapse0x2d1ad40();
   input += synapse0x2d1ad80();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d1a3f0() {
   double input = input0x2d1a3f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d1adc0() {
   double input = -0.0570336;
   input += synapse0x2d1b100();
   input += synapse0x2d1b140();
   input += synapse0x2d1b180();
   input += synapse0x2d1b1c0();
   input += synapse0x2d1b200();
   input += synapse0x2d1b240();
   input += synapse0x2d1b280();
   input += synapse0x2d1b2c0();
   input += synapse0x2d1b300();
   input += synapse0x2d1b340();
   input += synapse0x2d1b380();
   input += synapse0x2d1b3c0();
   input += synapse0x2d1b400();
   input += synapse0x2d1b440();
   input += synapse0x2d1b480();
   input += synapse0x2d1b4c0();
   input += synapse0x2d1af50();
   input += synapse0x2d1af90();
   input += synapse0x2d1b610();
   input += synapse0x2d1b650();
   input += synapse0x2d1b690();
   input += synapse0x2d1b6d0();
   input += synapse0x2d1b710();
   input += synapse0x2d1b750();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d1adc0() {
   double input = input0x2d1adc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d1b790() {
   double input = 2.26615;
   input += synapse0x2d1bad0();
   input += synapse0x2d1bb10();
   input += synapse0x2d1bb50();
   input += synapse0x2d1bb90();
   input += synapse0x2d1bbd0();
   input += synapse0x2d1bc10();
   input += synapse0x2d1bc50();
   input += synapse0x2d1bc90();
   input += synapse0x2d1bcd0();
   input += synapse0x2d1bd10();
   input += synapse0x2d1bd50();
   input += synapse0x2d1bd90();
   input += synapse0x2d1bdd0();
   input += synapse0x2d1be10();
   input += synapse0x2d1be50();
   input += synapse0x2d1be90();
   input += synapse0x2d1b920();
   input += synapse0x2d1b960();
   input += synapse0x2d1bfe0();
   input += synapse0x2d1c020();
   input += synapse0x2d1c060();
   input += synapse0x2d1c0a0();
   input += synapse0x2d1c0e0();
   input += synapse0x2d1c120();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d1b790() {
   double input = input0x2d1b790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d1c160() {
   double input = -0.163918;
   input += synapse0x2d04bd0();
   input += synapse0x2d04c10();
   input += synapse0x2d04c50();
   input += synapse0x2d04c90();
   input += synapse0x2d04cd0();
   input += synapse0x2d04d10();
   input += synapse0x2d04d50();
   input += synapse0x2d04d90();
   input += synapse0x2d1c8b0();
   input += synapse0x2d1c8f0();
   input += synapse0x2d1c930();
   input += synapse0x2d1c970();
   input += synapse0x2d1c9b0();
   input += synapse0x2d1c9f0();
   input += synapse0x2d1ca30();
   input += synapse0x2d1ca70();
   input += synapse0x2d1c2f0();
   input += synapse0x2d1c330();
   input += synapse0x2d1cbc0();
   input += synapse0x2d1cc00();
   input += synapse0x2d1cc40();
   input += synapse0x2d1cc80();
   input += synapse0x2d1ccc0();
   input += synapse0x2d1cd00();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d1c160() {
   double input = input0x2d1c160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d1cd40() {
   double input = -0.461082;
   input += synapse0x2d1d080();
   input += synapse0x2d1d0c0();
   input += synapse0x2d1d100();
   input += synapse0x2d1d140();
   input += synapse0x2d1d180();
   input += synapse0x2d1d1c0();
   input += synapse0x2d1d200();
   input += synapse0x2d1d240();
   input += synapse0x2d1d280();
   input += synapse0x2d1d2c0();
   input += synapse0x2d1d300();
   input += synapse0x2d1d340();
   input += synapse0x2d1d380();
   input += synapse0x2d1d3c0();
   input += synapse0x2d1d400();
   input += synapse0x2d1d440();
   input += synapse0x2d1ced0();
   input += synapse0x2d1cf10();
   input += synapse0x2d1d590();
   input += synapse0x2d1d5d0();
   input += synapse0x2d1d610();
   input += synapse0x2d1d650();
   input += synapse0x2d1d690();
   input += synapse0x2d1d6d0();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d1cd40() {
   double input = input0x2d1cd40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d1d710() {
   double input = -4.05853;
   input += synapse0x2d1da50();
   input += synapse0x2d1da90();
   input += synapse0x2d1dad0();
   input += synapse0x2d1db10();
   input += synapse0x2d1db50();
   input += synapse0x2d1db90();
   input += synapse0x2d1dbd0();
   input += synapse0x2d1dc10();
   input += synapse0x2d1dc50();
   input += synapse0x2d1dc90();
   input += synapse0x2d1dcd0();
   input += synapse0x2d1dd10();
   input += synapse0x2d1dd50();
   input += synapse0x2d1dd90();
   input += synapse0x2d1ddd0();
   input += synapse0x2d1de10();
   input += synapse0x2d1d8a0();
   input += synapse0x2d1d8e0();
   input += synapse0x2d0e410();
   input += synapse0x2d0e450();
   input += synapse0x2d0e490();
   input += synapse0x2d0e4d0();
   input += synapse0x2d0e510();
   input += synapse0x2d0e550();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d1d710() {
   double input = input0x2d1d710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d0e590() {
   double input = -2.52088;
   input += synapse0x2d0e8d0();
   input += synapse0x2d0e910();
   input += synapse0x2d0e950();
   input += synapse0x2d0e990();
   input += synapse0x2d0e9d0();
   input += synapse0x2d0ea10();
   input += synapse0x2d0ea50();
   input += synapse0x2d0ea90();
   input += synapse0x2d0ead0();
   input += synapse0x2d0eb10();
   input += synapse0x2d0eb50();
   input += synapse0x2d0eb90();
   input += synapse0x2d0ebd0();
   input += synapse0x2d0ec10();
   input += synapse0x2d0ec50();
   input += synapse0x2d0ec90();
   input += synapse0x2d0e720();
   input += synapse0x2d0e760();
   input += synapse0x2d0ede0();
   input += synapse0x2d0ee20();
   input += synapse0x2d0ee60();
   input += synapse0x2d0eea0();
   input += synapse0x2d0eee0();
   input += synapse0x2d0ef20();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d0e590() {
   double input = input0x2d0e590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d0ef60() {
   double input = -3.15982;
   input += synapse0x2d0f2a0();
   input += synapse0x2d0f2e0();
   input += synapse0x2d0f320();
   input += synapse0x2d0f360();
   input += synapse0x2d0f3a0();
   input += synapse0x2d0f3e0();
   input += synapse0x2d0f420();
   input += synapse0x2d0f460();
   input += synapse0x2d0f4a0();
   input += synapse0x2d0f4e0();
   input += synapse0x2d0f520();
   input += synapse0x2d0f560();
   input += synapse0x2d0f5a0();
   input += synapse0x2d0f5e0();
   input += synapse0x2d0f620();
   input += synapse0x2d0f660();
   input += synapse0x2d0f0f0();
   input += synapse0x2d0f130();
   input += synapse0x2d0f7b0();
   input += synapse0x2d0f7f0();
   input += synapse0x2d0f830();
   input += synapse0x2d0f870();
   input += synapse0x2d0f8b0();
   input += synapse0x2d0f8f0();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d0ef60() {
   double input = input0x2d0ef60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d0f930() {
   double input = -0.0751221;
   input += synapse0x2d0fc70();
   input += synapse0x2d0fcb0();
   input += synapse0x2d0fcf0();
   input += synapse0x2d0fd30();
   input += synapse0x2d0fd70();
   input += synapse0x2d0fdb0();
   input += synapse0x2d0fdf0();
   input += synapse0x2d0fe30();
   input += synapse0x2d0fe70();
   input += synapse0x2d0feb0();
   input += synapse0x2d0fef0();
   input += synapse0x2d0ff30();
   input += synapse0x2d0ff70();
   input += synapse0x2d0ffb0();
   input += synapse0x2d0fff0();
   input += synapse0x2d10030();
   input += synapse0x2d0fac0();
   input += synapse0x2d0fb00();
   input += synapse0x2d10180();
   input += synapse0x2d101c0();
   input += synapse0x2d10200();
   input += synapse0x2d10240();
   input += synapse0x2d10280();
   input += synapse0x2d102c0();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d0f930() {
   double input = input0x2d0f930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d21f70() {
   double input = -11.6119;
   input += synapse0x2d22190();
   input += synapse0x2d221d0();
   input += synapse0x2d22210();
   input += synapse0x2d22250();
   input += synapse0x2d22290();
   input += synapse0x2d222d0();
   input += synapse0x2d22310();
   input += synapse0x2d22350();
   input += synapse0x2d22390();
   input += synapse0x2d223d0();
   input += synapse0x2d22410();
   input += synapse0x2d22450();
   input += synapse0x2d22490();
   input += synapse0x2d224d0();
   input += synapse0x2d22510();
   input += synapse0x2d22550();
   input += synapse0x2d10300();
   input += synapse0x2d10340();
   input += synapse0x2d226a0();
   input += synapse0x2d226e0();
   input += synapse0x2d22720();
   input += synapse0x2d22760();
   input += synapse0x2d227a0();
   input += synapse0x2d227e0();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d21f70() {
   double input = input0x2d21f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d22820() {
   double input = 2.26431;
   input += synapse0x2d22b60();
   input += synapse0x2d22ba0();
   input += synapse0x2d22be0();
   input += synapse0x2d22c20();
   input += synapse0x2d22c60();
   input += synapse0x2d22ca0();
   input += synapse0x2d22ce0();
   input += synapse0x2d22d20();
   input += synapse0x2d22d60();
   input += synapse0x2d22da0();
   input += synapse0x2d22de0();
   input += synapse0x2d22e20();
   input += synapse0x2d22e60();
   input += synapse0x2d22ea0();
   input += synapse0x2d22ee0();
   input += synapse0x2d22f20();
   input += synapse0x2d229b0();
   input += synapse0x2d229f0();
   input += synapse0x2d23070();
   input += synapse0x2d230b0();
   input += synapse0x2d230f0();
   input += synapse0x2d23130();
   input += synapse0x2d23170();
   input += synapse0x2d231b0();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d22820() {
   double input = input0x2d22820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d231f0() {
   double input = 2.43151;
   input += synapse0x2d23530();
   input += synapse0x2d23570();
   input += synapse0x2d235b0();
   input += synapse0x2d235f0();
   input += synapse0x2d23630();
   input += synapse0x2d23670();
   input += synapse0x2d236b0();
   input += synapse0x2d236f0();
   input += synapse0x2d23730();
   input += synapse0x2d23770();
   input += synapse0x2d237b0();
   input += synapse0x2d237f0();
   input += synapse0x2d23830();
   input += synapse0x2d23870();
   input += synapse0x2d238b0();
   input += synapse0x2d238f0();
   input += synapse0x2d23380();
   input += synapse0x2d233c0();
   input += synapse0x2d23a40();
   input += synapse0x2d23a80();
   input += synapse0x2d23ac0();
   input += synapse0x2d23b00();
   input += synapse0x2d23b40();
   input += synapse0x2d23b80();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d231f0() {
   double input = input0x2d231f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d23bc0() {
   double input = -10.8506;
   input += synapse0x2d23f00();
   input += synapse0x2d23f40();
   input += synapse0x2d23f80();
   input += synapse0x2d23fc0();
   input += synapse0x2d24000();
   input += synapse0x2d24040();
   input += synapse0x2d24080();
   input += synapse0x2d240c0();
   input += synapse0x2d24100();
   input += synapse0x2d24140();
   input += synapse0x2d24180();
   input += synapse0x2d241c0();
   input += synapse0x2d24200();
   input += synapse0x2d24240();
   input += synapse0x2d24280();
   input += synapse0x2d242c0();
   input += synapse0x2d23d50();
   input += synapse0x2d23d90();
   input += synapse0x2d24410();
   input += synapse0x2d24450();
   input += synapse0x2d24490();
   input += synapse0x2d244d0();
   input += synapse0x2d24510();
   input += synapse0x2d24550();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d23bc0() {
   double input = input0x2d23bc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d2adc0() {
   double input = 0.369342;
   input += synapse0x2ac43c0();
   input += synapse0x2ac4400();
   input += synapse0x2d00f00();
   input += synapse0x2d00f40();
   input += synapse0x2d029d0();
   input += synapse0x2d02a10();
   input += synapse0x2d037a0();
   input += synapse0x2d037e0();
   input += synapse0x2d04170();
   input += synapse0x2d041b0();
   input += synapse0x2d04b40();
   input += synapse0x2d04b80();
   input += synapse0x2d05620();
   input += synapse0x2d05660();
   input += synapse0x2d05ff0();
   input += synapse0x2d06030();
   input += synapse0x2d030d0();
   input += synapse0x2d03110();
   input += synapse0x2d07ba0();
   input += synapse0x2d07be0();
   input += synapse0x2d08570();
   input += synapse0x2d085b0();
   input += synapse0x2d08f40();
   input += synapse0x2d08f80();
   input += synapse0x2d09910();
   input += synapse0x2d09950();
   input += synapse0x2cfc9a0();
   input += synapse0x2cfc9e0();
   input += synapse0x2d0ba00();
   input += synapse0x2d0ba40();
   input += synapse0x2d0c3d0();
   input += synapse0x2d0c410();
   input += synapse0x2d0cda0();
   input += synapse0x2d0cde0();
   input += synapse0x2d0d770();
   input += synapse0x2d0d7b0();
   input += synapse0x2d0e140();
   input += synapse0x2d0e180();
   input += synapse0x2d06c90();
   input += synapse0x2d06cd0();
   input += synapse0x2d10540();
   input += synapse0x2d10580();
   input += synapse0x2d10ed0();
   input += synapse0x2d10f10();
   input += synapse0x2d118a0();
   input += synapse0x2d118e0();
   input += synapse0x2d12270();
   input += synapse0x2d122b0();
   input += synapse0x2d12c40();
   input += synapse0x2d12c80();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d2adc0() {
   double input = input0x2d2adc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d2b160() {
   double input = 0.993537;
   input += synapse0x2d15380();
   input += synapse0x2d153c0();
   input += synapse0x2d0a940();
   input += synapse0x2d0a980();
   input += synapse0x2d17f60();
   input += synapse0x2d17fa0();
   input += synapse0x2d18930();
   input += synapse0x2d18970();
   input += synapse0x2d19300();
   input += synapse0x2d19340();
   input += synapse0x2d19cd0();
   input += synapse0x2d19d10();
   input += synapse0x2d1a6a0();
   input += synapse0x2d1a6e0();
   input += synapse0x2d1b070();
   input += synapse0x2d1b0b0();
   input += synapse0x2d1ba40();
   input += synapse0x2d1ba80();
   input += synapse0x2d1c410();
   input += synapse0x2d1c450();
   input += synapse0x2d1cff0();
   input += synapse0x2d1d030();
   input += synapse0x2d1d9c0();
   input += synapse0x2d1da00();
   input += synapse0x2d0e840();
   input += synapse0x2d0e880();
   input += synapse0x2d0f210();
   input += synapse0x2d0f250();
   input += synapse0x2d0fbe0();
   input += synapse0x2d0fc20();
   input += synapse0x2d22100();
   input += synapse0x2d22140();
   input += synapse0x2d22ad0();
   input += synapse0x2d22b10();
   input += synapse0x2d234a0();
   input += synapse0x2d234e0();
   input += synapse0x2d23e70();
   input += synapse0x2d23eb0();
   input += synapse0x2cfee00();
   input += synapse0x2cfee40();
   input += synapse0x2d13610();
   input += synapse0x2d13650();
   input += synapse0x2d24590();
   input += synapse0x2d245d0();
   input += synapse0x2d24610();
   input += synapse0x2d24650();
   input += synapse0x2d2b500();
   input += synapse0x2d2b540();
   input += synapse0x2d2b580();
   input += synapse0x2d2b5c0();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d2b160() {
   double input = input0x2d2b160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d2b600() {
   double input = 2.96736;
   input += synapse0x2d2b940();
   input += synapse0x2d2b980();
   input += synapse0x2d2b9c0();
   input += synapse0x2d2ba00();
   input += synapse0x2d2ba40();
   input += synapse0x2d2ba80();
   input += synapse0x2d2bac0();
   input += synapse0x2d2bb00();
   input += synapse0x2d2bb40();
   input += synapse0x2d2bb80();
   input += synapse0x2d2bbc0();
   input += synapse0x2d2bc00();
   input += synapse0x2d2bc40();
   input += synapse0x2d2bc80();
   input += synapse0x2d2bcc0();
   input += synapse0x2d2bd00();
   input += synapse0x2d2b790();
   input += synapse0x2d2b7d0();
   input += synapse0x2d2be50();
   input += synapse0x2d2be90();
   input += synapse0x2d2bed0();
   input += synapse0x2d2bf10();
   input += synapse0x2d2bf50();
   input += synapse0x2d2bf90();
   input += synapse0x2d2bfd0();
   input += synapse0x2d2c010();
   input += synapse0x2d2c050();
   input += synapse0x2d2c090();
   input += synapse0x2d2c0d0();
   input += synapse0x2d2c110();
   input += synapse0x2d2c150();
   input += synapse0x2d2c190();
   input += synapse0x2d2bd40();
   input += synapse0x2d2bd80();
   input += synapse0x2d2bdc0();
   input += synapse0x2d2be00();
   input += synapse0x2d2c3e0();
   input += synapse0x2d2c420();
   input += synapse0x2d2c460();
   input += synapse0x2d2c4a0();
   input += synapse0x2d2c4e0();
   input += synapse0x2d2c520();
   input += synapse0x2d2c560();
   input += synapse0x2d2c5a0();
   input += synapse0x2d2c5e0();
   input += synapse0x2d2c620();
   input += synapse0x2d2c660();
   input += synapse0x2d2c6a0();
   input += synapse0x2d2c6e0();
   input += synapse0x2d2c720();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d2b600() {
   double input = input0x2d2b600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d2c760() {
   double input = 1.68867;
   input += synapse0x2d2caa0();
   input += synapse0x2d2cae0();
   input += synapse0x2d2cb20();
   input += synapse0x2d2cb60();
   input += synapse0x2d2cba0();
   input += synapse0x2d2cbe0();
   input += synapse0x2d2cc20();
   input += synapse0x2d2cc60();
   input += synapse0x2d2cca0();
   input += synapse0x2d2cce0();
   input += synapse0x2d2cd20();
   input += synapse0x2d2cd60();
   input += synapse0x2d2cda0();
   input += synapse0x2d2cde0();
   input += synapse0x2d2ce20();
   input += synapse0x2d2ce60();
   input += synapse0x2d2c8f0();
   input += synapse0x2d2c930();
   input += synapse0x2d2cfb0();
   input += synapse0x2d2cff0();
   input += synapse0x2d2d030();
   input += synapse0x2d2d070();
   input += synapse0x2d2d0b0();
   input += synapse0x2d2d0f0();
   input += synapse0x2d2d130();
   input += synapse0x2d2d170();
   input += synapse0x2d2d1b0();
   input += synapse0x2d2d1f0();
   input += synapse0x2d2d230();
   input += synapse0x2d2d270();
   input += synapse0x2d2d2b0();
   input += synapse0x2d2d2f0();
   input += synapse0x2d2cea0();
   input += synapse0x2d2cee0();
   input += synapse0x2d2cf20();
   input += synapse0x2d2cf60();
   input += synapse0x2d2d540();
   input += synapse0x2d2d580();
   input += synapse0x2d2d5c0();
   input += synapse0x2d2d600();
   input += synapse0x2d2d640();
   input += synapse0x2d2d680();
   input += synapse0x2d2d6c0();
   input += synapse0x2d2d700();
   input += synapse0x2d2d740();
   input += synapse0x2d2d780();
   input += synapse0x2d2d7c0();
   input += synapse0x2d2d800();
   input += synapse0x2d2d840();
   input += synapse0x2d2d880();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d2c760() {
   double input = input0x2d2c760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d2d8c0() {
   double input = -0.484986;
   input += synapse0x2d2dc00();
   input += synapse0x2d2dc40();
   input += synapse0x2d2dc80();
   input += synapse0x2d2dcc0();
   input += synapse0x2d2dd00();
   input += synapse0x2d2dd40();
   input += synapse0x2d2dd80();
   input += synapse0x2d2ddc0();
   input += synapse0x2d2de00();
   input += synapse0x2d2de40();
   input += synapse0x2d2de80();
   input += synapse0x2d2dec0();
   input += synapse0x2d2df00();
   input += synapse0x2d2df40();
   input += synapse0x2d2df80();
   input += synapse0x2d2dfc0();
   input += synapse0x2d2da50();
   input += synapse0x2d2da90();
   input += synapse0x2d2e110();
   input += synapse0x2d2e150();
   input += synapse0x2d2e190();
   input += synapse0x2d2e1d0();
   input += synapse0x2d2e210();
   input += synapse0x2d2e250();
   input += synapse0x2d2e290();
   input += synapse0x2d2e2d0();
   input += synapse0x2d2e310();
   input += synapse0x2d2e350();
   input += synapse0x2d2e390();
   input += synapse0x2d2e3d0();
   input += synapse0x2d2e410();
   input += synapse0x2d2e450();
   input += synapse0x2d2e000();
   input += synapse0x2d2e040();
   input += synapse0x2d2e080();
   input += synapse0x2d2e0c0();
   input += synapse0x2d2e6a0();
   input += synapse0x2d2e6e0();
   input += synapse0x2d2e720();
   input += synapse0x2d2e760();
   input += synapse0x2d2e7a0();
   input += synapse0x2d2e7e0();
   input += synapse0x2d2e820();
   input += synapse0x2d2e860();
   input += synapse0x2d2e8a0();
   input += synapse0x2d2e8e0();
   input += synapse0x2d2e920();
   input += synapse0x2d2e960();
   input += synapse0x2d2e9a0();
   input += synapse0x2d2e9e0();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d2d8c0() {
   double input = input0x2d2d8c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chi01_sR::input0x2d2ea20() {
   double input = 15.0336;
   input += synapse0x2d2ec40();
   input += synapse0x2d2ec80();
   input += synapse0x2d2ecc0();
   input += synapse0x2d2ed00();
   input += synapse0x2d2ed40();
   return input;
}

double NNfunction_ns_chi01_sR::neuron0x2d2ea20() {
   double input = input0x2d2ea20();
   return (input * 1)+0;
}

double NNfunction_ns_chi01_sR::synapse0x2cfee90() {
   return (neuron0x2cf9a90()*0.127418);
}

double NNfunction_ns_chi01_sR::synapse0x2cfeed0() {
   return (neuron0x2cf9d40()*0.180813);
}

double NNfunction_ns_chi01_sR::synapse0x2cfef10() {
   return (neuron0x2cfa080()*-1.45347);
}

double NNfunction_ns_chi01_sR::synapse0x2cfef50() {
   return (neuron0x2cfa3c0()*-0.451349);
}

double NNfunction_ns_chi01_sR::synapse0x2cfef90() {
   return (neuron0x2cfa700()*-1.19084);
}

double NNfunction_ns_chi01_sR::synapse0x2cfefd0() {
   return (neuron0x2cfaa40()*-0.440132);
}

double NNfunction_ns_chi01_sR::synapse0x2cff010() {
   return (neuron0x2cfad80()*0.465365);
}

double NNfunction_ns_chi01_sR::synapse0x2cff050() {
   return (neuron0x2cfb0c0()*0.61809);
}

double NNfunction_ns_chi01_sR::synapse0x2cff090() {
   return (neuron0x2cfb400()*-0.0175673);
}

double NNfunction_ns_chi01_sR::synapse0x2cff0d0() {
   return (neuron0x2cfb740()*-0.617603);
}

double NNfunction_ns_chi01_sR::synapse0x2cff110() {
   return (neuron0x2cfba80()*-2.06187);
}

double NNfunction_ns_chi01_sR::synapse0x2cff150() {
   return (neuron0x2cfbdc0()*-0.154868);
}

double NNfunction_ns_chi01_sR::synapse0x2cff190() {
   return (neuron0x2cfc100()*-0.861686);
}

double NNfunction_ns_chi01_sR::synapse0x2cff1d0() {
   return (neuron0x2cfc440()*-0.124755);
}

double NNfunction_ns_chi01_sR::synapse0x2cff210() {
   return (neuron0x2cfc780()*0.100011);
}

double NNfunction_ns_chi01_sR::synapse0x2cff250() {
   return (neuron0x2cfcac0()*1.40291);
}

double NNfunction_ns_chi01_sR::synapse0x2cfece0() {
   return (neuron0x2cfce00()*1.44564);
}

double NNfunction_ns_chi01_sR::synapse0x2cfed20() {
   return (neuron0x2cfd360()*0.835662);
}

double NNfunction_ns_chi01_sR::synapse0x2ab5c10() {
   return (neuron0x2cfd6a0()*-0.615401);
}

double NNfunction_ns_chi01_sR::synapse0x2ab5c50() {
   return (neuron0x2cfd9e0()*1.77761);
}

double NNfunction_ns_chi01_sR::synapse0x2cff290() {
   return (neuron0x2cfdd20()*0.408802);
}

double NNfunction_ns_chi01_sR::synapse0x2cff2d0() {
   return (neuron0x2cfe060()*1.58319);
}

double NNfunction_ns_chi01_sR::synapse0x2cff310() {
   return (neuron0x2cfe3a0()*0.76717);
}

double NNfunction_ns_chi01_sR::synapse0x2cff350() {
   return (neuron0x2cfe6e0()*-0.0567999);
}

double NNfunction_ns_chi01_sR::synapse0x2cff6d0() {
   return (neuron0x2cf9a90()*0.14837);
}

double NNfunction_ns_chi01_sR::synapse0x2cff710() {
   return (neuron0x2cf9d40()*5.65444);
}

double NNfunction_ns_chi01_sR::synapse0x2cff750() {
   return (neuron0x2cfa080()*4.34882);
}

double NNfunction_ns_chi01_sR::synapse0x2cff790() {
   return (neuron0x2cfa3c0()*0.0953395);
}

double NNfunction_ns_chi01_sR::synapse0x2cff7d0() {
   return (neuron0x2cfa700()*0.260177);
}

double NNfunction_ns_chi01_sR::synapse0x2cff810() {
   return (neuron0x2cfaa40()*0.535227);
}

double NNfunction_ns_chi01_sR::synapse0x2cff850() {
   return (neuron0x2cfad80()*0.226773);
}

double NNfunction_ns_chi01_sR::synapse0x2cff890() {
   return (neuron0x2cfb0c0()*0.131974);
}

double NNfunction_ns_chi01_sR::synapse0x2cff8d0() {
   return (neuron0x2cfb400()*-0.155389);
}

double NNfunction_ns_chi01_sR::synapse0x2ab5a60() {
   return (neuron0x2cfb740()*-0.00409169);
}

double NNfunction_ns_chi01_sR::synapse0x2ab5aa0() {
   return (neuron0x2cfba80()*0.00488828);
}

double NNfunction_ns_chi01_sR::synapse0x2ab5ae0() {
   return (neuron0x2cfbdc0()*-0.298303);
}

double NNfunction_ns_chi01_sR::synapse0x2ab5b20() {
   return (neuron0x2cfc100()*-0.385576);
}

double NNfunction_ns_chi01_sR::synapse0x2cffb20() {
   return (neuron0x2cfc440()*0.314842);
}

double NNfunction_ns_chi01_sR::synapse0x2cffb60() {
   return (neuron0x2cfc780()*0.0791617);
}

double NNfunction_ns_chi01_sR::synapse0x2cffba0() {
   return (neuron0x2cfcac0()*-0.13087);
}

double NNfunction_ns_chi01_sR::synapse0x2cff520() {
   return (neuron0x2cfce00()*0.0430975);
}

double NNfunction_ns_chi01_sR::synapse0x2cff560() {
   return (neuron0x2cfd360()*-0.257392);
}

double NNfunction_ns_chi01_sR::synapse0x2cffcf0() {
   return (neuron0x2cfd6a0()*-1.01995);
}

double NNfunction_ns_chi01_sR::synapse0x2cffd30() {
   return (neuron0x2cfd9e0()*-0.181699);
}

double NNfunction_ns_chi01_sR::synapse0x2cffd70() {
   return (neuron0x2cfdd20()*-0.0649786);
}

double NNfunction_ns_chi01_sR::synapse0x2cffdb0() {
   return (neuron0x2cfe060()*0.0754586);
}

double NNfunction_ns_chi01_sR::synapse0x2cffdf0() {
   return (neuron0x2cfe3a0()*0.231169);
}

double NNfunction_ns_chi01_sR::synapse0x2cffe30() {
   return (neuron0x2cfe6e0()*-0.255029);
}

double NNfunction_ns_chi01_sR::synapse0x2d001b0() {
   return (neuron0x2cf9a90()*-0.134771);
}

double NNfunction_ns_chi01_sR::synapse0x2d001f0() {
   return (neuron0x2cf9d40()*-0.0916981);
}

double NNfunction_ns_chi01_sR::synapse0x2d00230() {
   return (neuron0x2cfa080()*0.424812);
}

double NNfunction_ns_chi01_sR::synapse0x2d00270() {
   return (neuron0x2cfa3c0()*0.120417);
}

double NNfunction_ns_chi01_sR::synapse0x2d002b0() {
   return (neuron0x2cfa700()*-0.162732);
}

double NNfunction_ns_chi01_sR::synapse0x2d002f0() {
   return (neuron0x2cfaa40()*0.869673);
}

double NNfunction_ns_chi01_sR::synapse0x2d00330() {
   return (neuron0x2cfad80()*1.07737);
}

double NNfunction_ns_chi01_sR::synapse0x2d00370() {
   return (neuron0x2cfb0c0()*-0.743472);
}

double NNfunction_ns_chi01_sR::synapse0x2d003b0() {
   return (neuron0x2cfb400()*0.069574);
}

double NNfunction_ns_chi01_sR::synapse0x2d003f0() {
   return (neuron0x2cfb740()*0.160289);
}

double NNfunction_ns_chi01_sR::synapse0x2d00430() {
   return (neuron0x2cfba80()*0.260568);
}

double NNfunction_ns_chi01_sR::synapse0x2d00470() {
   return (neuron0x2cfbdc0()*-0.717339);
}

double NNfunction_ns_chi01_sR::synapse0x2d004b0() {
   return (neuron0x2cfc100()*-0.184286);
}

double NNfunction_ns_chi01_sR::synapse0x2d004f0() {
   return (neuron0x2cfc440()*0.335769);
}

double NNfunction_ns_chi01_sR::synapse0x2d00530() {
   return (neuron0x2cfc780()*-0.0820589);
}

double NNfunction_ns_chi01_sR::synapse0x2d00570() {
   return (neuron0x2cfcac0()*-0.588468);
}

double NNfunction_ns_chi01_sR::synapse0x2d00000() {
   return (neuron0x2cfce00()*-0.278697);
}

double NNfunction_ns_chi01_sR::synapse0x2d00040() {
   return (neuron0x2cfd360()*-0.740742);
}

double NNfunction_ns_chi01_sR::synapse0x2ab6300() {
   return (neuron0x2cfd6a0()*-2.11087);
}

double NNfunction_ns_chi01_sR::synapse0x2ac3bd0() {
   return (neuron0x2cfd9e0()*-0.632387);
}

double NNfunction_ns_chi01_sR::synapse0x2ac3c10() {
   return (neuron0x2cfdd20()*-0.494439);
}

double NNfunction_ns_chi01_sR::synapse0x2d024a0() {
   return (neuron0x2cfe060()*-0.0105218);
}

double NNfunction_ns_chi01_sR::synapse0x2d024e0() {
   return (neuron0x2cfe3a0()*-0.307966);
}

double NNfunction_ns_chi01_sR::synapse0x2cf97d0() {
   return (neuron0x2cfe6e0()*-0.627896);
}

double NNfunction_ns_chi01_sR::synapse0x2cf98a0() {
   return (neuron0x2cf9a90()*0.748363);
}

double NNfunction_ns_chi01_sR::synapse0x2ac4450() {
   return (neuron0x2cf9d40()*-2.01997);
}

double NNfunction_ns_chi01_sR::synapse0x2cffaa0() {
   return (neuron0x2cfa080()*-0.825199);
}

double NNfunction_ns_chi01_sR::synapse0x2cffae0() {
   return (neuron0x2cfa3c0()*0.588389);
}

double NNfunction_ns_chi01_sR::synapse0x2d006c0() {
   return (neuron0x2cfa700()*-0.337207);
}

double NNfunction_ns_chi01_sR::synapse0x2d00700() {
   return (neuron0x2cfaa40()*-1.88693);
}

double NNfunction_ns_chi01_sR::synapse0x2d00740() {
   return (neuron0x2cfad80()*0.146801);
}

double NNfunction_ns_chi01_sR::synapse0x2d00780() {
   return (neuron0x2cfb0c0()*0.643296);
}

double NNfunction_ns_chi01_sR::synapse0x2d007c0() {
   return (neuron0x2cfb400()*0.661267);
}

double NNfunction_ns_chi01_sR::synapse0x2d00800() {
   return (neuron0x2cfb740()*0.0277407);
}

double NNfunction_ns_chi01_sR::synapse0x2d00840() {
   return (neuron0x2cfba80()*-0.558947);
}

double NNfunction_ns_chi01_sR::synapse0x2d00880() {
   return (neuron0x2cfbdc0()*-1.07356);
}

double NNfunction_ns_chi01_sR::synapse0x2d008c0() {
   return (neuron0x2cfc100()*0.0417487);
}

double NNfunction_ns_chi01_sR::synapse0x2d00900() {
   return (neuron0x2cfc440()*0.237592);
}

double NNfunction_ns_chi01_sR::synapse0x2d00940() {
   return (neuron0x2cfc780()*1.2833);
}

double NNfunction_ns_chi01_sR::synapse0x2d00980() {
   return (neuron0x2cfcac0()*-1.23142);
}

double NNfunction_ns_chi01_sR::synapse0x2cf9810() {
   return (neuron0x2cfce00()*-0.591981);
}

double NNfunction_ns_chi01_sR::synapse0x2cf9850() {
   return (neuron0x2cfd360()*0.368072);
}

double NNfunction_ns_chi01_sR::synapse0x2d00ad0() {
   return (neuron0x2cfd6a0()*-0.124804);
}

double NNfunction_ns_chi01_sR::synapse0x2d00b10() {
   return (neuron0x2cfd9e0()*0.640301);
}

double NNfunction_ns_chi01_sR::synapse0x2d00b50() {
   return (neuron0x2cfdd20()*0.248327);
}

double NNfunction_ns_chi01_sR::synapse0x2d00b90() {
   return (neuron0x2cfe060()*0.137268);
}

double NNfunction_ns_chi01_sR::synapse0x2d00bd0() {
   return (neuron0x2cfe3a0()*-0.848717);
}

double NNfunction_ns_chi01_sR::synapse0x2d00c10() {
   return (neuron0x2cfe6e0()*-1.71729);
}

double NNfunction_ns_chi01_sR::synapse0x2d00f90() {
   return (neuron0x2cf9a90()*0.0224466);
}

double NNfunction_ns_chi01_sR::synapse0x2d00fd0() {
   return (neuron0x2cf9d40()*1.3153);
}

double NNfunction_ns_chi01_sR::synapse0x2d01010() {
   return (neuron0x2cfa080()*0.427333);
}

double NNfunction_ns_chi01_sR::synapse0x2d01050() {
   return (neuron0x2cfa3c0()*-0.312657);
}

double NNfunction_ns_chi01_sR::synapse0x2d01090() {
   return (neuron0x2cfa700()*-0.446072);
}

double NNfunction_ns_chi01_sR::synapse0x2d010d0() {
   return (neuron0x2cfaa40()*0.56286);
}

double NNfunction_ns_chi01_sR::synapse0x2d01110() {
   return (neuron0x2cfad80()*-0.160164);
}

double NNfunction_ns_chi01_sR::synapse0x2d01150() {
   return (neuron0x2cfb0c0()*-0.270268);
}

double NNfunction_ns_chi01_sR::synapse0x2d01190() {
   return (neuron0x2cfb400()*1.00918);
}

double NNfunction_ns_chi01_sR::synapse0x2d011d0() {
   return (neuron0x2cfb740()*-0.239189);
}

double NNfunction_ns_chi01_sR::synapse0x2d01210() {
   return (neuron0x2cfba80()*-0.391237);
}

double NNfunction_ns_chi01_sR::synapse0x2d01250() {
   return (neuron0x2cfbdc0()*-0.287944);
}

double NNfunction_ns_chi01_sR::synapse0x2d01290() {
   return (neuron0x2cfc100()*-0.583719);
}

double NNfunction_ns_chi01_sR::synapse0x2d012d0() {
   return (neuron0x2cfc440()*0.568161);
}

double NNfunction_ns_chi01_sR::synapse0x2d01310() {
   return (neuron0x2cfc780()*0.491435);
}

double NNfunction_ns_chi01_sR::synapse0x2d01350() {
   return (neuron0x2cfcac0()*1.14243);
}

double NNfunction_ns_chi01_sR::synapse0x2d014a0() {
   return (neuron0x2cfce00()*1.06165);
}

double NNfunction_ns_chi01_sR::synapse0x2d00de0() {
   return (neuron0x2cfd360()*-0.35662);
}

double NNfunction_ns_chi01_sR::synapse0x2d00e20() {
   return (neuron0x2cfd6a0()*-0.319987);
}

double NNfunction_ns_chi01_sR::synapse0x2d025e0() {
   return (neuron0x2cfd9e0()*0.245047);
}

double NNfunction_ns_chi01_sR::synapse0x2d02620() {
   return (neuron0x2cfdd20()*0.0778474);
}

double NNfunction_ns_chi01_sR::synapse0x2d02660() {
   return (neuron0x2cfe060()*-0.475008);
}

double NNfunction_ns_chi01_sR::synapse0x2d026a0() {
   return (neuron0x2cfe3a0()*0.279823);
}

double NNfunction_ns_chi01_sR::synapse0x2d026e0() {
   return (neuron0x2cfe6e0()*-0.450152);
}

double NNfunction_ns_chi01_sR::synapse0x2d02a60() {
   return (neuron0x2cf9a90()*-0.825322);
}

double NNfunction_ns_chi01_sR::synapse0x2d02aa0() {
   return (neuron0x2cf9d40()*-2.94633);
}

double NNfunction_ns_chi01_sR::synapse0x2d02ae0() {
   return (neuron0x2cfa080()*-0.812908);
}

double NNfunction_ns_chi01_sR::synapse0x2d02b20() {
   return (neuron0x2cfa3c0()*0.570175);
}

double NNfunction_ns_chi01_sR::synapse0x2d02b60() {
   return (neuron0x2cfa700()*-1.47888);
}

double NNfunction_ns_chi01_sR::synapse0x2d02ba0() {
   return (neuron0x2cfaa40()*0.345356);
}

double NNfunction_ns_chi01_sR::synapse0x2d02be0() {
   return (neuron0x2cfad80()*1.31066);
}

double NNfunction_ns_chi01_sR::synapse0x2d02c20() {
   return (neuron0x2cfb0c0()*0.716932);
}

double NNfunction_ns_chi01_sR::synapse0x2d02c60() {
   return (neuron0x2cfb400()*1.51815);
}

double NNfunction_ns_chi01_sR::synapse0x2ac3f20() {
   return (neuron0x2cfb740()*0.612291);
}

double NNfunction_ns_chi01_sR::synapse0x2ac3f60() {
   return (neuron0x2cfba80()*0.507989);
}

double NNfunction_ns_chi01_sR::synapse0x2ac3fa0() {
   return (neuron0x2cfbdc0()*0.225636);
}

double NNfunction_ns_chi01_sR::synapse0x2ac3fe0() {
   return (neuron0x2cfc100()*0.329947);
}

double NNfunction_ns_chi01_sR::synapse0x2ac4020() {
   return (neuron0x2cfc440()*0.629963);
}

double NNfunction_ns_chi01_sR::synapse0x2ac4060() {
   return (neuron0x2cfc780()*-0.542317);
}

double NNfunction_ns_chi01_sR::synapse0x2ac40a0() {
   return (neuron0x2cfcac0()*-0.630411);
}

double NNfunction_ns_chi01_sR::synapse0x2d028b0() {
   return (neuron0x2cfce00()*1.27794);
}

double NNfunction_ns_chi01_sR::synapse0x2d028f0() {
   return (neuron0x2cfd360()*-0.0447958);
}

double NNfunction_ns_chi01_sR::synapse0x2ac41f0() {
   return (neuron0x2cfd6a0()*-0.141362);
}

double NNfunction_ns_chi01_sR::synapse0x2ac4230() {
   return (neuron0x2cfd9e0()*-0.504884);
}

double NNfunction_ns_chi01_sR::synapse0x2ac4270() {
   return (neuron0x2cfdd20()*0.662766);
}

double NNfunction_ns_chi01_sR::synapse0x2ac42b0() {
   return (neuron0x2cfe060()*0.45282);
}

double NNfunction_ns_chi01_sR::synapse0x2ac42f0() {
   return (neuron0x2cfe3a0()*-0.342504);
}

double NNfunction_ns_chi01_sR::synapse0x2d034b0() {
   return (neuron0x2cfe6e0()*0.24831);
}

double NNfunction_ns_chi01_sR::synapse0x2d03830() {
   return (neuron0x2cf9a90()*0.00342516);
}

double NNfunction_ns_chi01_sR::synapse0x2d03870() {
   return (neuron0x2cf9d40()*-1.05906);
}

double NNfunction_ns_chi01_sR::synapse0x2d038b0() {
   return (neuron0x2cfa080()*0.00183647);
}

double NNfunction_ns_chi01_sR::synapse0x2d038f0() {
   return (neuron0x2cfa3c0()*0.0059713);
}

double NNfunction_ns_chi01_sR::synapse0x2d03930() {
   return (neuron0x2cfa700()*-0.00495388);
}

double NNfunction_ns_chi01_sR::synapse0x2d03970() {
   return (neuron0x2cfaa40()*0.0098987);
}

double NNfunction_ns_chi01_sR::synapse0x2d039b0() {
   return (neuron0x2cfad80()*-0.00556181);
}

double NNfunction_ns_chi01_sR::synapse0x2d039f0() {
   return (neuron0x2cfb0c0()*-2.18749e-05);
}

double NNfunction_ns_chi01_sR::synapse0x2d03a30() {
   return (neuron0x2cfb400()*0.00425341);
}

double NNfunction_ns_chi01_sR::synapse0x2d03a70() {
   return (neuron0x2cfb740()*0.0184247);
}

double NNfunction_ns_chi01_sR::synapse0x2d03ab0() {
   return (neuron0x2cfba80()*0.00189283);
}

double NNfunction_ns_chi01_sR::synapse0x2d03af0() {
   return (neuron0x2cfbdc0()*0.0107618);
}

double NNfunction_ns_chi01_sR::synapse0x2d03b30() {
   return (neuron0x2cfc100()*-0.00314401);
}

double NNfunction_ns_chi01_sR::synapse0x2d03b70() {
   return (neuron0x2cfc440()*-0.00979356);
}

double NNfunction_ns_chi01_sR::synapse0x2d03bb0() {
   return (neuron0x2cfc780()*-0.00333379);
}

double NNfunction_ns_chi01_sR::synapse0x2d03bf0() {
   return (neuron0x2cfcac0()*-0.00638281);
}

double NNfunction_ns_chi01_sR::synapse0x2d03680() {
   return (neuron0x2cfce00()*-0.00373956);
}

double NNfunction_ns_chi01_sR::synapse0x2d036c0() {
   return (neuron0x2cfd360()*-0.000268056);
}

double NNfunction_ns_chi01_sR::synapse0x2d03d40() {
   return (neuron0x2cfd6a0()*-0.630772);
}

double NNfunction_ns_chi01_sR::synapse0x2d03d80() {
   return (neuron0x2cfd9e0()*0.0104524);
}

double NNfunction_ns_chi01_sR::synapse0x2d03dc0() {
   return (neuron0x2cfdd20()*-0.0100873);
}

double NNfunction_ns_chi01_sR::synapse0x2d03e00() {
   return (neuron0x2cfe060()*-0.0116609);
}

double NNfunction_ns_chi01_sR::synapse0x2d03e40() {
   return (neuron0x2cfe3a0()*0.00195418);
}

double NNfunction_ns_chi01_sR::synapse0x2d03e80() {
   return (neuron0x2cfe6e0()*-0.0138514);
}

double NNfunction_ns_chi01_sR::synapse0x2d04200() {
   return (neuron0x2cf9a90()*-0.00664134);
}

double NNfunction_ns_chi01_sR::synapse0x2d04240() {
   return (neuron0x2cf9d40()*0.00218828);
}

double NNfunction_ns_chi01_sR::synapse0x2d04280() {
   return (neuron0x2cfa080()*0.0272572);
}

double NNfunction_ns_chi01_sR::synapse0x2d042c0() {
   return (neuron0x2cfa3c0()*-0.0259624);
}

double NNfunction_ns_chi01_sR::synapse0x2d04300() {
   return (neuron0x2cfa700()*-0.0488614);
}

double NNfunction_ns_chi01_sR::synapse0x2d04340() {
   return (neuron0x2cfaa40()*-0.0122035);
}

double NNfunction_ns_chi01_sR::synapse0x2d04380() {
   return (neuron0x2cfad80()*-0.0199328);
}

double NNfunction_ns_chi01_sR::synapse0x2d043c0() {
   return (neuron0x2cfb0c0()*-0.00576297);
}

double NNfunction_ns_chi01_sR::synapse0x2d04400() {
   return (neuron0x2cfb400()*0.00192315);
}

double NNfunction_ns_chi01_sR::synapse0x2d04440() {
   return (neuron0x2cfb740()*0.000388457);
}

double NNfunction_ns_chi01_sR::synapse0x2d04480() {
   return (neuron0x2cfba80()*-0.00545592);
}

double NNfunction_ns_chi01_sR::synapse0x2d044c0() {
   return (neuron0x2cfbdc0()*-0.00192888);
}

double NNfunction_ns_chi01_sR::synapse0x2d04500() {
   return (neuron0x2cfc100()*-0.00712607);
}

double NNfunction_ns_chi01_sR::synapse0x2d04540() {
   return (neuron0x2cfc440()*-0.0166308);
}

double NNfunction_ns_chi01_sR::synapse0x2d04580() {
   return (neuron0x2cfc780()*0.025578);
}

double NNfunction_ns_chi01_sR::synapse0x2d045c0() {
   return (neuron0x2cfcac0()*-0.0147127);
}

double NNfunction_ns_chi01_sR::synapse0x2d04050() {
   return (neuron0x2cfce00()*-0.0163147);
}

double NNfunction_ns_chi01_sR::synapse0x2d04090() {
   return (neuron0x2cfd360()*-0.00720585);
}

double NNfunction_ns_chi01_sR::synapse0x2d04710() {
   return (neuron0x2cfd6a0()*0.0509657);
}

double NNfunction_ns_chi01_sR::synapse0x2d04750() {
   return (neuron0x2cfd9e0()*0.0126217);
}

double NNfunction_ns_chi01_sR::synapse0x2d04790() {
   return (neuron0x2cfdd20()*0.0524286);
}

double NNfunction_ns_chi01_sR::synapse0x2d047d0() {
   return (neuron0x2cfe060()*-0.00382668);
}

double NNfunction_ns_chi01_sR::synapse0x2d04810() {
   return (neuron0x2cfe3a0()*0.0147726);
}

double NNfunction_ns_chi01_sR::synapse0x2d04850() {
   return (neuron0x2cfe6e0()*-28.1385);
}

double NNfunction_ns_chi01_sR::synapse0x2cfd250() {
   return (neuron0x2cf9a90()*-0.00390374);
}

double NNfunction_ns_chi01_sR::synapse0x2cfd290() {
   return (neuron0x2cf9d40()*1.35019);
}

double NNfunction_ns_chi01_sR::synapse0x2cfd2d0() {
   return (neuron0x2cfa080()*0.00620378);
}

double NNfunction_ns_chi01_sR::synapse0x2cfd310() {
   return (neuron0x2cfa3c0()*0.00345053);
}

double NNfunction_ns_chi01_sR::synapse0x2d04de0() {
   return (neuron0x2cfa700()*0.000780027);
}

double NNfunction_ns_chi01_sR::synapse0x2d04e20() {
   return (neuron0x2cfaa40()*-0.0119699);
}

double NNfunction_ns_chi01_sR::synapse0x2d04e60() {
   return (neuron0x2cfad80()*-0.000936271);
}

double NNfunction_ns_chi01_sR::synapse0x2d04ea0() {
   return (neuron0x2cfb0c0()*-0.00299988);
}

double NNfunction_ns_chi01_sR::synapse0x2d04ee0() {
   return (neuron0x2cfb400()*-0.0179006);
}

double NNfunction_ns_chi01_sR::synapse0x2d04f20() {
   return (neuron0x2cfb740()*-0.00771651);
}

double NNfunction_ns_chi01_sR::synapse0x2d04f60() {
   return (neuron0x2cfba80()*0.000240141);
}

double NNfunction_ns_chi01_sR::synapse0x2d04fa0() {
   return (neuron0x2cfbdc0()*-0.0167035);
}

double NNfunction_ns_chi01_sR::synapse0x2d04fe0() {
   return (neuron0x2cfc100()*0.00208527);
}

double NNfunction_ns_chi01_sR::synapse0x2d05020() {
   return (neuron0x2cfc440()*0.00411072);
}

double NNfunction_ns_chi01_sR::synapse0x2d05060() {
   return (neuron0x2cfc780()*0.0122709);
}

double NNfunction_ns_chi01_sR::synapse0x2d050a0() {
   return (neuron0x2cfcac0()*0.0217444);
}

double NNfunction_ns_chi01_sR::synapse0x2d04a20() {
   return (neuron0x2cfce00()*0.0123921);
}

double NNfunction_ns_chi01_sR::synapse0x2d04a60() {
   return (neuron0x2cfd360()*-0.00996508);
}

double NNfunction_ns_chi01_sR::synapse0x2d051f0() {
   return (neuron0x2cfd6a0()*-0.0424898);
}

double NNfunction_ns_chi01_sR::synapse0x2d05230() {
   return (neuron0x2cfd9e0()*-0.0150564);
}

double NNfunction_ns_chi01_sR::synapse0x2d05270() {
   return (neuron0x2cfdd20()*0.0130932);
}

double NNfunction_ns_chi01_sR::synapse0x2d052b0() {
   return (neuron0x2cfe060()*0.00636763);
}

double NNfunction_ns_chi01_sR::synapse0x2d052f0() {
   return (neuron0x2cfe3a0()*-0.00179983);
}

double NNfunction_ns_chi01_sR::synapse0x2d05330() {
   return (neuron0x2cfe6e0()*0.0179886);
}

double NNfunction_ns_chi01_sR::synapse0x2d056b0() {
   return (neuron0x2cf9a90()*-0.130984);
}

double NNfunction_ns_chi01_sR::synapse0x2d056f0() {
   return (neuron0x2cf9d40()*2.26875);
}

double NNfunction_ns_chi01_sR::synapse0x2d05730() {
   return (neuron0x2cfa080()*1.45322);
}

double NNfunction_ns_chi01_sR::synapse0x2d05770() {
   return (neuron0x2cfa3c0()*0.568376);
}

double NNfunction_ns_chi01_sR::synapse0x2d057b0() {
   return (neuron0x2cfa700()*0.269789);
}

double NNfunction_ns_chi01_sR::synapse0x2d057f0() {
   return (neuron0x2cfaa40()*0.0901623);
}

double NNfunction_ns_chi01_sR::synapse0x2d05830() {
   return (neuron0x2cfad80()*-0.624728);
}

double NNfunction_ns_chi01_sR::synapse0x2d05870() {
   return (neuron0x2cfb0c0()*1.26966);
}

double NNfunction_ns_chi01_sR::synapse0x2d058b0() {
   return (neuron0x2cfb400()*0.140517);
}

double NNfunction_ns_chi01_sR::synapse0x2d058f0() {
   return (neuron0x2cfb740()*0.673923);
}

double NNfunction_ns_chi01_sR::synapse0x2d05930() {
   return (neuron0x2cfba80()*-0.227491);
}

double NNfunction_ns_chi01_sR::synapse0x2d05970() {
   return (neuron0x2cfbdc0()*-0.632137);
}

double NNfunction_ns_chi01_sR::synapse0x2d059b0() {
   return (neuron0x2cfc100()*-1.25843);
}

double NNfunction_ns_chi01_sR::synapse0x2d059f0() {
   return (neuron0x2cfc440()*-0.732018);
}

double NNfunction_ns_chi01_sR::synapse0x2d05a30() {
   return (neuron0x2cfc780()*-0.133551);
}

double NNfunction_ns_chi01_sR::synapse0x2d05a70() {
   return (neuron0x2cfcac0()*-0.164925);
}

double NNfunction_ns_chi01_sR::synapse0x2d05500() {
   return (neuron0x2cfce00()*-1.32329);
}

double NNfunction_ns_chi01_sR::synapse0x2d05540() {
   return (neuron0x2cfd360()*-0.0868002);
}

double NNfunction_ns_chi01_sR::synapse0x2d05bc0() {
   return (neuron0x2cfd6a0()*0.200125);
}

double NNfunction_ns_chi01_sR::synapse0x2d05c00() {
   return (neuron0x2cfd9e0()*-0.758884);
}

double NNfunction_ns_chi01_sR::synapse0x2d05c40() {
   return (neuron0x2cfdd20()*-0.774204);
}

double NNfunction_ns_chi01_sR::synapse0x2d05c80() {
   return (neuron0x2cfe060()*0.336259);
}

double NNfunction_ns_chi01_sR::synapse0x2d05cc0() {
   return (neuron0x2cfe3a0()*0.202554);
}

double NNfunction_ns_chi01_sR::synapse0x2d05d00() {
   return (neuron0x2cfe6e0()*0.964733);
}

double NNfunction_ns_chi01_sR::synapse0x2d06080() {
   return (neuron0x2cf9a90()*-0.174717);
}

double NNfunction_ns_chi01_sR::synapse0x2d060c0() {
   return (neuron0x2cf9d40()*0.450746);
}

double NNfunction_ns_chi01_sR::synapse0x2d06100() {
   return (neuron0x2cfa080()*-0.327753);
}

double NNfunction_ns_chi01_sR::synapse0x2d06140() {
   return (neuron0x2cfa3c0()*0.75738);
}

double NNfunction_ns_chi01_sR::synapse0x2d06180() {
   return (neuron0x2cfa700()*1.46518);
}

double NNfunction_ns_chi01_sR::synapse0x2d061c0() {
   return (neuron0x2cfaa40()*0.300592);
}

double NNfunction_ns_chi01_sR::synapse0x2d06200() {
   return (neuron0x2cfad80()*-0.291099);
}

double NNfunction_ns_chi01_sR::synapse0x2d06240() {
   return (neuron0x2cfb0c0()*0.048424);
}

double NNfunction_ns_chi01_sR::synapse0x2d06280() {
   return (neuron0x2cfb400()*-0.468992);
}

double NNfunction_ns_chi01_sR::synapse0x2d062c0() {
   return (neuron0x2cfb740()*-0.536431);
}

double NNfunction_ns_chi01_sR::synapse0x2d06300() {
   return (neuron0x2cfba80()*1.86836);
}

double NNfunction_ns_chi01_sR::synapse0x2d06340() {
   return (neuron0x2cfbdc0()*-0.91075);
}

double NNfunction_ns_chi01_sR::synapse0x2d06380() {
   return (neuron0x2cfc100()*-0.219103);
}

double NNfunction_ns_chi01_sR::synapse0x2d063c0() {
   return (neuron0x2cfc440()*1.7286);
}

double NNfunction_ns_chi01_sR::synapse0x2d06400() {
   return (neuron0x2cfc780()*0.967669);
}

double NNfunction_ns_chi01_sR::synapse0x2d06440() {
   return (neuron0x2cfcac0()*-0.239254);
}

double NNfunction_ns_chi01_sR::synapse0x2d05ed0() {
   return (neuron0x2cfce00()*0.420351);
}

double NNfunction_ns_chi01_sR::synapse0x2d05f10() {
   return (neuron0x2cfd360()*1.42452);
}

double NNfunction_ns_chi01_sR::synapse0x2d02ca0() {
   return (neuron0x2cfd6a0()*1.83266);
}

double NNfunction_ns_chi01_sR::synapse0x2d02ce0() {
   return (neuron0x2cfd9e0()*1.01548);
}

double NNfunction_ns_chi01_sR::synapse0x2d02d20() {
   return (neuron0x2cfdd20()*1.41431);
}

double NNfunction_ns_chi01_sR::synapse0x2d02d60() {
   return (neuron0x2cfe060()*-0.83382);
}

double NNfunction_ns_chi01_sR::synapse0x2d02da0() {
   return (neuron0x2cfe3a0()*0.598656);
}

double NNfunction_ns_chi01_sR::synapse0x2d02de0() {
   return (neuron0x2cfe6e0()*2.01224);
}

double NNfunction_ns_chi01_sR::synapse0x2d03160() {
   return (neuron0x2cf9a90()*-0.452688);
}

double NNfunction_ns_chi01_sR::synapse0x2d031a0() {
   return (neuron0x2cf9d40()*0.178045);
}

double NNfunction_ns_chi01_sR::synapse0x2d031e0() {
   return (neuron0x2cfa080()*0.209376);
}

double NNfunction_ns_chi01_sR::synapse0x2d03220() {
   return (neuron0x2cfa3c0()*-0.178123);
}

double NNfunction_ns_chi01_sR::synapse0x2d03260() {
   return (neuron0x2cfa700()*0.400897);
}

double NNfunction_ns_chi01_sR::synapse0x2d032a0() {
   return (neuron0x2cfaa40()*-0.122151);
}

double NNfunction_ns_chi01_sR::synapse0x2d032e0() {
   return (neuron0x2cfad80()*0.116365);
}

double NNfunction_ns_chi01_sR::synapse0x2d03320() {
   return (neuron0x2cfb0c0()*0.25133);
}

double NNfunction_ns_chi01_sR::synapse0x2d03360() {
   return (neuron0x2cfb400()*-1.73566);
}

double NNfunction_ns_chi01_sR::synapse0x2d033a0() {
   return (neuron0x2cfb740()*0.106971);
}

double NNfunction_ns_chi01_sR::synapse0x2d033e0() {
   return (neuron0x2cfba80()*-0.384086);
}

double NNfunction_ns_chi01_sR::synapse0x2d03420() {
   return (neuron0x2cfbdc0()*0.421468);
}

double NNfunction_ns_chi01_sR::synapse0x2d03460() {
   return (neuron0x2cfc100()*0.73352);
}

double NNfunction_ns_chi01_sR::synapse0x2d075a0() {
   return (neuron0x2cfc440()*0.115566);
}

double NNfunction_ns_chi01_sR::synapse0x2d075e0() {
   return (neuron0x2cfc780()*-0.544109);
}

double NNfunction_ns_chi01_sR::synapse0x2d07620() {
   return (neuron0x2cfcac0()*-0.0821115);
}

double NNfunction_ns_chi01_sR::synapse0x2d02fb0() {
   return (neuron0x2cfce00()*-0.452373);
}

double NNfunction_ns_chi01_sR::synapse0x2d02ff0() {
   return (neuron0x2cfd360()*-0.967824);
}

double NNfunction_ns_chi01_sR::synapse0x2d07770() {
   return (neuron0x2cfd6a0()*0.695562);
}

double NNfunction_ns_chi01_sR::synapse0x2d077b0() {
   return (neuron0x2cfd9e0()*-0.351548);
}

double NNfunction_ns_chi01_sR::synapse0x2d077f0() {
   return (neuron0x2cfdd20()*0.100388);
}

double NNfunction_ns_chi01_sR::synapse0x2d07830() {
   return (neuron0x2cfe060()*-0.403462);
}

double NNfunction_ns_chi01_sR::synapse0x2d07870() {
   return (neuron0x2cfe3a0()*-0.139988);
}

double NNfunction_ns_chi01_sR::synapse0x2d078b0() {
   return (neuron0x2cfe6e0()*0.0356578);
}

double NNfunction_ns_chi01_sR::synapse0x2d07c30() {
   return (neuron0x2cf9a90()*0.0438534);
}

double NNfunction_ns_chi01_sR::synapse0x2d07c70() {
   return (neuron0x2cf9d40()*0.104504);
}

double NNfunction_ns_chi01_sR::synapse0x2d07cb0() {
   return (neuron0x2cfa080()*0.108932);
}

double NNfunction_ns_chi01_sR::synapse0x2d07cf0() {
   return (neuron0x2cfa3c0()*-0.220543);
}

double NNfunction_ns_chi01_sR::synapse0x2d07d30() {
   return (neuron0x2cfa700()*0.17572);
}

double NNfunction_ns_chi01_sR::synapse0x2d07d70() {
   return (neuron0x2cfaa40()*0.0532395);
}

double NNfunction_ns_chi01_sR::synapse0x2d07db0() {
   return (neuron0x2cfad80()*0.0471559);
}

double NNfunction_ns_chi01_sR::synapse0x2d07df0() {
   return (neuron0x2cfb0c0()*-0.24698);
}

double NNfunction_ns_chi01_sR::synapse0x2d07e30() {
   return (neuron0x2cfb400()*0.143769);
}

double NNfunction_ns_chi01_sR::synapse0x2d07e70() {
   return (neuron0x2cfb740()*-0.980694);
}

double NNfunction_ns_chi01_sR::synapse0x2d07eb0() {
   return (neuron0x2cfba80()*-0.792718);
}

double NNfunction_ns_chi01_sR::synapse0x2d07ef0() {
   return (neuron0x2cfbdc0()*0.145778);
}

double NNfunction_ns_chi01_sR::synapse0x2d07f30() {
   return (neuron0x2cfc100()*0.0263886);
}

double NNfunction_ns_chi01_sR::synapse0x2d07f70() {
   return (neuron0x2cfc440()*-0.0310308);
}

double NNfunction_ns_chi01_sR::synapse0x2d07fb0() {
   return (neuron0x2cfc780()*0.286078);
}

double NNfunction_ns_chi01_sR::synapse0x2d07ff0() {
   return (neuron0x2cfcac0()*0.643252);
}

double NNfunction_ns_chi01_sR::synapse0x2d07a80() {
   return (neuron0x2cfce00()*0.042582);
}

double NNfunction_ns_chi01_sR::synapse0x2d07ac0() {
   return (neuron0x2cfd360()*-0.0290222);
}

double NNfunction_ns_chi01_sR::synapse0x2d08140() {
   return (neuron0x2cfd6a0()*2.01816);
}

double NNfunction_ns_chi01_sR::synapse0x2d08180() {
   return (neuron0x2cfd9e0()*0.0237121);
}

double NNfunction_ns_chi01_sR::synapse0x2d081c0() {
   return (neuron0x2cfdd20()*0.195626);
}

double NNfunction_ns_chi01_sR::synapse0x2d08200() {
   return (neuron0x2cfe060()*-0.169148);
}

double NNfunction_ns_chi01_sR::synapse0x2d08240() {
   return (neuron0x2cfe3a0()*0.0654318);
}

double NNfunction_ns_chi01_sR::synapse0x2d08280() {
   return (neuron0x2cfe6e0()*0.224219);
}

double NNfunction_ns_chi01_sR::synapse0x2d08600() {
   return (neuron0x2cf9a90()*0.0757172);
}

double NNfunction_ns_chi01_sR::synapse0x2d08640() {
   return (neuron0x2cf9d40()*-4.35438);
}

double NNfunction_ns_chi01_sR::synapse0x2d08680() {
   return (neuron0x2cfa080()*0.172594);
}

double NNfunction_ns_chi01_sR::synapse0x2d086c0() {
   return (neuron0x2cfa3c0()*-0.0911422);
}

double NNfunction_ns_chi01_sR::synapse0x2d08700() {
   return (neuron0x2cfa700()*0.00629919);
}

double NNfunction_ns_chi01_sR::synapse0x2d08740() {
   return (neuron0x2cfaa40()*0.0500637);
}

double NNfunction_ns_chi01_sR::synapse0x2d08780() {
   return (neuron0x2cfad80()*0.0470512);
}

double NNfunction_ns_chi01_sR::synapse0x2d087c0() {
   return (neuron0x2cfb0c0()*0.025128);
}

double NNfunction_ns_chi01_sR::synapse0x2d08800() {
   return (neuron0x2cfb400()*-0.0429511);
}

double NNfunction_ns_chi01_sR::synapse0x2d08840() {
   return (neuron0x2cfb740()*0.0192379);
}

double NNfunction_ns_chi01_sR::synapse0x2d08880() {
   return (neuron0x2cfba80()*0.0253499);
}

double NNfunction_ns_chi01_sR::synapse0x2d088c0() {
   return (neuron0x2cfbdc0()*-0.0416167);
}

double NNfunction_ns_chi01_sR::synapse0x2d08900() {
   return (neuron0x2cfc100()*-0.100587);
}

double NNfunction_ns_chi01_sR::synapse0x2d08940() {
   return (neuron0x2cfc440()*0.0196495);
}

double NNfunction_ns_chi01_sR::synapse0x2d08980() {
   return (neuron0x2cfc780()*-0.034648);
}

double NNfunction_ns_chi01_sR::synapse0x2d089c0() {
   return (neuron0x2cfcac0()*0.0383947);
}

double NNfunction_ns_chi01_sR::synapse0x2d08450() {
   return (neuron0x2cfce00()*0.0624605);
}

double NNfunction_ns_chi01_sR::synapse0x2d08490() {
   return (neuron0x2cfd360()*-0.0631966);
}

double NNfunction_ns_chi01_sR::synapse0x2d08b10() {
   return (neuron0x2cfd6a0()*0.0543145);
}

double NNfunction_ns_chi01_sR::synapse0x2d08b50() {
   return (neuron0x2cfd9e0()*-0.0183685);
}

double NNfunction_ns_chi01_sR::synapse0x2d08b90() {
   return (neuron0x2cfdd20()*0.042884);
}

double NNfunction_ns_chi01_sR::synapse0x2d08bd0() {
   return (neuron0x2cfe060()*0.052952);
}

double NNfunction_ns_chi01_sR::synapse0x2d08c10() {
   return (neuron0x2cfe3a0()*-0.00743172);
}

double NNfunction_ns_chi01_sR::synapse0x2d08c50() {
   return (neuron0x2cfe6e0()*8.16346);
}

double NNfunction_ns_chi01_sR::synapse0x2d08fd0() {
   return (neuron0x2cf9a90()*0.0107257);
}

double NNfunction_ns_chi01_sR::synapse0x2d09010() {
   return (neuron0x2cf9d40()*-0.124774);
}

double NNfunction_ns_chi01_sR::synapse0x2d09050() {
   return (neuron0x2cfa080()*0.00936356);
}

double NNfunction_ns_chi01_sR::synapse0x2d09090() {
   return (neuron0x2cfa3c0()*-0.000405517);
}

double NNfunction_ns_chi01_sR::synapse0x2d090d0() {
   return (neuron0x2cfa700()*0.00668941);
}

double NNfunction_ns_chi01_sR::synapse0x2d09110() {
   return (neuron0x2cfaa40()*-0.00959816);
}

double NNfunction_ns_chi01_sR::synapse0x2d09150() {
   return (neuron0x2cfad80()*-0.00161603);
}

double NNfunction_ns_chi01_sR::synapse0x2d09190() {
   return (neuron0x2cfb0c0()*-0.00548508);
}

double NNfunction_ns_chi01_sR::synapse0x2d091d0() {
   return (neuron0x2cfb400()*0.0394059);
}

double NNfunction_ns_chi01_sR::synapse0x2d09210() {
   return (neuron0x2cfb740()*-0.0627841);
}

double NNfunction_ns_chi01_sR::synapse0x2d09250() {
   return (neuron0x2cfba80()*-0.0104988);
}

double NNfunction_ns_chi01_sR::synapse0x2d09290() {
   return (neuron0x2cfbdc0()*0.00691409);
}

double NNfunction_ns_chi01_sR::synapse0x2d092d0() {
   return (neuron0x2cfc100()*0.032369);
}

double NNfunction_ns_chi01_sR::synapse0x2d09310() {
   return (neuron0x2cfc440()*0.0367712);
}

double NNfunction_ns_chi01_sR::synapse0x2d09350() {
   return (neuron0x2cfc780()*0.0017302);
}

double NNfunction_ns_chi01_sR::synapse0x2d09390() {
   return (neuron0x2cfcac0()*0.0371146);
}

double NNfunction_ns_chi01_sR::synapse0x2d08e20() {
   return (neuron0x2cfce00()*-0.0155332);
}

double NNfunction_ns_chi01_sR::synapse0x2d08e60() {
   return (neuron0x2cfd360()*-0.0179626);
}

double NNfunction_ns_chi01_sR::synapse0x2d094e0() {
   return (neuron0x2cfd6a0()*-3.15872);
}

double NNfunction_ns_chi01_sR::synapse0x2d09520() {
   return (neuron0x2cfd9e0()*0.00166021);
}

double NNfunction_ns_chi01_sR::synapse0x2d09560() {
   return (neuron0x2cfdd20()*0.0350453);
}

double NNfunction_ns_chi01_sR::synapse0x2d095a0() {
   return (neuron0x2cfe060()*0.0109623);
}

double NNfunction_ns_chi01_sR::synapse0x2d095e0() {
   return (neuron0x2cfe3a0()*-0.026263);
}

double NNfunction_ns_chi01_sR::synapse0x2d09620() {
   return (neuron0x2cfe6e0()*0.000934317);
}

double NNfunction_ns_chi01_sR::synapse0x2d099a0() {
   return (neuron0x2cf9a90()*-0.213759);
}

double NNfunction_ns_chi01_sR::synapse0x2cf9c20() {
   return (neuron0x2cf9d40()*-0.95685);
}

double NNfunction_ns_chi01_sR::synapse0x2cf9c60() {
   return (neuron0x2cfa080()*-1.47149);
}

double NNfunction_ns_chi01_sR::synapse0x2cf9f60() {
   return (neuron0x2cfa3c0()*-0.447246);
}

double NNfunction_ns_chi01_sR::synapse0x2cf9fa0() {
   return (neuron0x2cfa700()*-0.299885);
}

double NNfunction_ns_chi01_sR::synapse0x2cfa2a0() {
   return (neuron0x2cfaa40()*0.472698);
}

double NNfunction_ns_chi01_sR::synapse0x2cfa2e0() {
   return (neuron0x2cfad80()*0.344105);
}

double NNfunction_ns_chi01_sR::synapse0x2cfa5e0() {
   return (neuron0x2cfb0c0()*0.00648794);
}

double NNfunction_ns_chi01_sR::synapse0x2cfa620() {
   return (neuron0x2cfb400()*1.26724);
}

double NNfunction_ns_chi01_sR::synapse0x2cfa920() {
   return (neuron0x2cfb740()*0.408391);
}

double NNfunction_ns_chi01_sR::synapse0x2cfa960() {
   return (neuron0x2cfba80()*0.0684951);
}

double NNfunction_ns_chi01_sR::synapse0x2cfac60() {
   return (neuron0x2cfbdc0()*-0.236561);
}

double NNfunction_ns_chi01_sR::synapse0x2cfaca0() {
   return (neuron0x2cfc100()*-0.253886);
}

double NNfunction_ns_chi01_sR::synapse0x2cfafa0() {
   return (neuron0x2cfc440()*1.26371);
}

double NNfunction_ns_chi01_sR::synapse0x2cfafe0() {
   return (neuron0x2cfc780()*-1.00187);
}

double NNfunction_ns_chi01_sR::synapse0x2cfb2e0() {
   return (neuron0x2cfcac0()*-1.17901);
}

double NNfunction_ns_chi01_sR::synapse0x2cfb320() {
   return (neuron0x2cfce00()*-0.0722162);
}

double NNfunction_ns_chi01_sR::synapse0x2cfb620() {
   return (neuron0x2cfd360()*-0.948305);
}

double NNfunction_ns_chi01_sR::synapse0x2cfb660() {
   return (neuron0x2cfd6a0()*0.830452);
}

double NNfunction_ns_chi01_sR::synapse0x2cfb960() {
   return (neuron0x2cfd9e0()*1.32039);
}

double NNfunction_ns_chi01_sR::synapse0x2cfb9a0() {
   return (neuron0x2cfdd20()*0.99784);
}

double NNfunction_ns_chi01_sR::synapse0x2cfbca0() {
   return (neuron0x2cfe060()*0.133378);
}

double NNfunction_ns_chi01_sR::synapse0x2cfbce0() {
   return (neuron0x2cfe3a0()*-1.54427);
}

double NNfunction_ns_chi01_sR::synapse0x2cfbfe0() {
   return (neuron0x2cfe6e0()*0.37405);
}

double NNfunction_ns_chi01_sR::synapse0x2cfc020() {
   return (neuron0x2cf9a90()*0.0233727);
}

double NNfunction_ns_chi01_sR::synapse0x2cfcce0() {
   return (neuron0x2cf9d40()*-0.0638125);
}

double NNfunction_ns_chi01_sR::synapse0x2cfcd20() {
   return (neuron0x2cfa080()*-0.0470275);
}

double NNfunction_ns_chi01_sR::synapse0x2d097f0() {
   return (neuron0x2cfa3c0()*-3.92007);
}

double NNfunction_ns_chi01_sR::synapse0x2d09830() {
   return (neuron0x2cfa700()*0.0256527);
}

double NNfunction_ns_chi01_sR::synapse0x2cfd020() {
   return (neuron0x2cfaa40()*-0.016647);
}

double NNfunction_ns_chi01_sR::synapse0x2cfd060() {
   return (neuron0x2cfad80()*-0.0234471);
}

double NNfunction_ns_chi01_sR::synapse0x2cfd580() {
   return (neuron0x2cfb0c0()*-0.00339615);
}

double NNfunction_ns_chi01_sR::synapse0x2cfd5c0() {
   return (neuron0x2cfb400()*0.0103554);
}

double NNfunction_ns_chi01_sR::synapse0x2cfd8c0() {
   return (neuron0x2cfb740()*-0.00206274);
}

double NNfunction_ns_chi01_sR::synapse0x2cfd900() {
   return (neuron0x2cfba80()*1.87446e-05);
}

double NNfunction_ns_chi01_sR::synapse0x2cfdc00() {
   return (neuron0x2cfbdc0()*0.0298629);
}

double NNfunction_ns_chi01_sR::synapse0x2cfdc40() {
   return (neuron0x2cfc100()*0.0472793);
}

double NNfunction_ns_chi01_sR::synapse0x2cfdf40() {
   return (neuron0x2cfc440()*-0.0135091);
}

double NNfunction_ns_chi01_sR::synapse0x2cfdf80() {
   return (neuron0x2cfc780()*-0.00532466);
}

double NNfunction_ns_chi01_sR::synapse0x2cfe280() {
   return (neuron0x2cfcac0()*0.0360936);
}

double NNfunction_ns_chi01_sR::synapse0x2cfe2c0() {
   return (neuron0x2cfce00()*-0.0152024);
}

double NNfunction_ns_chi01_sR::synapse0x2cfe5c0() {
   return (neuron0x2cfd360()*-0.0250027);
}

double NNfunction_ns_chi01_sR::synapse0x2cfe600() {
   return (neuron0x2cfd6a0()*0.458792);
}

double NNfunction_ns_chi01_sR::synapse0x2cfe900() {
   return (neuron0x2cfd9e0()*0.0309018);
}

double NNfunction_ns_chi01_sR::synapse0x2cfe940() {
   return (neuron0x2cfdd20()*0.0138649);
}

double NNfunction_ns_chi01_sR::synapse0x2cfc320() {
   return (neuron0x2cfe060()*0.0317904);
}

double NNfunction_ns_chi01_sR::synapse0x2cfc360() {
   return (neuron0x2cfe3a0()*-0.0265722);
}

double NNfunction_ns_chi01_sR::synapse0x2d0b710() {
   return (neuron0x2cfe6e0()*0.0277798);
}

double NNfunction_ns_chi01_sR::synapse0x2d0ba90() {
   return (neuron0x2cf9a90()*0.053657);
}

double NNfunction_ns_chi01_sR::synapse0x2d0bad0() {
   return (neuron0x2cf9d40()*0.0815806);
}

double NNfunction_ns_chi01_sR::synapse0x2d0bb10() {
   return (neuron0x2cfa080()*-6.89611);
}

double NNfunction_ns_chi01_sR::synapse0x2d0bb50() {
   return (neuron0x2cfa3c0()*-0.0118936);
}

double NNfunction_ns_chi01_sR::synapse0x2d0bb90() {
   return (neuron0x2cfa700()*-0.0134597);
}

double NNfunction_ns_chi01_sR::synapse0x2d0bbd0() {
   return (neuron0x2cfaa40()*-0.0285849);
}

double NNfunction_ns_chi01_sR::synapse0x2d0bc10() {
   return (neuron0x2cfad80()*-0.0317831);
}

double NNfunction_ns_chi01_sR::synapse0x2d0bc50() {
   return (neuron0x2cfb0c0()*-0.00684881);
}

double NNfunction_ns_chi01_sR::synapse0x2d0bc90() {
   return (neuron0x2cfb400()*0.0144749);
}

double NNfunction_ns_chi01_sR::synapse0x2d0bcd0() {
   return (neuron0x2cfb740()*-0.000757462);
}

double NNfunction_ns_chi01_sR::synapse0x2d0bd10() {
   return (neuron0x2cfba80()*-0.0138553);
}

double NNfunction_ns_chi01_sR::synapse0x2d0bd50() {
   return (neuron0x2cfbdc0()*0.0284513);
}

double NNfunction_ns_chi01_sR::synapse0x2d0bd90() {
   return (neuron0x2cfc100()*0.00931061);
}

double NNfunction_ns_chi01_sR::synapse0x2d0bdd0() {
   return (neuron0x2cfc440()*0.0184527);
}

double NNfunction_ns_chi01_sR::synapse0x2d0be10() {
   return (neuron0x2cfc780()*-0.0425194);
}

double NNfunction_ns_chi01_sR::synapse0x2d0be50() {
   return (neuron0x2cfcac0()*-0.026914);
}

double NNfunction_ns_chi01_sR::synapse0x2d0b8e0() {
   return (neuron0x2cfce00()*-0.00201152);
}

double NNfunction_ns_chi01_sR::synapse0x2d0b920() {
   return (neuron0x2cfd360()*-0.0106768);
}

double NNfunction_ns_chi01_sR::synapse0x2d0bfa0() {
   return (neuron0x2cfd6a0()*-0.278599);
}

double NNfunction_ns_chi01_sR::synapse0x2d0bfe0() {
   return (neuron0x2cfd9e0()*0.0337499);
}

double NNfunction_ns_chi01_sR::synapse0x2d0c020() {
   return (neuron0x2cfdd20()*-0.00541149);
}

double NNfunction_ns_chi01_sR::synapse0x2d0c060() {
   return (neuron0x2cfe060()*0.00479934);
}

double NNfunction_ns_chi01_sR::synapse0x2d0c0a0() {
   return (neuron0x2cfe3a0()*-0.0148345);
}

double NNfunction_ns_chi01_sR::synapse0x2d0c0e0() {
   return (neuron0x2cfe6e0()*0.104672);
}

double NNfunction_ns_chi01_sR::synapse0x2d0c460() {
   return (neuron0x2cf9a90()*0.0872479);
}

double NNfunction_ns_chi01_sR::synapse0x2d0c4a0() {
   return (neuron0x2cf9d40()*1.70995);
}

double NNfunction_ns_chi01_sR::synapse0x2d0c4e0() {
   return (neuron0x2cfa080()*0.351128);
}

double NNfunction_ns_chi01_sR::synapse0x2d0c520() {
   return (neuron0x2cfa3c0()*-0.0734238);
}

double NNfunction_ns_chi01_sR::synapse0x2d0c560() {
   return (neuron0x2cfa700()*0.734142);
}

double NNfunction_ns_chi01_sR::synapse0x2d0c5a0() {
   return (neuron0x2cfaa40()*0.17677);
}

double NNfunction_ns_chi01_sR::synapse0x2d0c5e0() {
   return (neuron0x2cfad80()*-0.102163);
}

double NNfunction_ns_chi01_sR::synapse0x2d0c620() {
   return (neuron0x2cfb0c0()*-0.379912);
}

double NNfunction_ns_chi01_sR::synapse0x2d0c660() {
   return (neuron0x2cfb400()*-0.0422273);
}

double NNfunction_ns_chi01_sR::synapse0x2d0c6a0() {
   return (neuron0x2cfb740()*-0.506911);
}

double NNfunction_ns_chi01_sR::synapse0x2d0c6e0() {
   return (neuron0x2cfba80()*1.2691);
}

double NNfunction_ns_chi01_sR::synapse0x2d0c720() {
   return (neuron0x2cfbdc0()*-0.258035);
}

double NNfunction_ns_chi01_sR::synapse0x2d0c760() {
   return (neuron0x2cfc100()*0.236032);
}

double NNfunction_ns_chi01_sR::synapse0x2d0c7a0() {
   return (neuron0x2cfc440()*-0.222405);
}

double NNfunction_ns_chi01_sR::synapse0x2d0c7e0() {
   return (neuron0x2cfc780()*-0.254142);
}

double NNfunction_ns_chi01_sR::synapse0x2d0c820() {
   return (neuron0x2cfcac0()*-1.5156);
}

double NNfunction_ns_chi01_sR::synapse0x2d0c2b0() {
   return (neuron0x2cfce00()*1.11276);
}

double NNfunction_ns_chi01_sR::synapse0x2d0c2f0() {
   return (neuron0x2cfd360()*0.101391);
}

double NNfunction_ns_chi01_sR::synapse0x2d0c970() {
   return (neuron0x2cfd6a0()*0.676869);
}

double NNfunction_ns_chi01_sR::synapse0x2d0c9b0() {
   return (neuron0x2cfd9e0()*-0.663892);
}

double NNfunction_ns_chi01_sR::synapse0x2d0c9f0() {
   return (neuron0x2cfdd20()*-0.49659);
}

double NNfunction_ns_chi01_sR::synapse0x2d0ca30() {
   return (neuron0x2cfe060()*0.239695);
}

double NNfunction_ns_chi01_sR::synapse0x2d0ca70() {
   return (neuron0x2cfe3a0()*0.227041);
}

double NNfunction_ns_chi01_sR::synapse0x2d0cab0() {
   return (neuron0x2cfe6e0()*-0.87546);
}

double NNfunction_ns_chi01_sR::synapse0x2d0ce30() {
   return (neuron0x2cf9a90()*0.0795071);
}

double NNfunction_ns_chi01_sR::synapse0x2d0ce70() {
   return (neuron0x2cf9d40()*-0.492218);
}

double NNfunction_ns_chi01_sR::synapse0x2d0ceb0() {
   return (neuron0x2cfa080()*1.11623);
}

double NNfunction_ns_chi01_sR::synapse0x2d0cef0() {
   return (neuron0x2cfa3c0()*0.5335);
}

double NNfunction_ns_chi01_sR::synapse0x2d0cf30() {
   return (neuron0x2cfa700()*0.3165);
}

double NNfunction_ns_chi01_sR::synapse0x2d0cf70() {
   return (neuron0x2cfaa40()*0.18136);
}

double NNfunction_ns_chi01_sR::synapse0x2d0cfb0() {
   return (neuron0x2cfad80()*-0.105157);
}

double NNfunction_ns_chi01_sR::synapse0x2d0cff0() {
   return (neuron0x2cfb0c0()*-0.0254512);
}

double NNfunction_ns_chi01_sR::synapse0x2d0d030() {
   return (neuron0x2cfb400()*-1.00573);
}

double NNfunction_ns_chi01_sR::synapse0x2d0d070() {
   return (neuron0x2cfb740()*-0.171515);
}

double NNfunction_ns_chi01_sR::synapse0x2d0d0b0() {
   return (neuron0x2cfba80()*1.29185);
}

double NNfunction_ns_chi01_sR::synapse0x2d0d0f0() {
   return (neuron0x2cfbdc0()*0.948569);
}

double NNfunction_ns_chi01_sR::synapse0x2d0d130() {
   return (neuron0x2cfc100()*1.42544);
}

double NNfunction_ns_chi01_sR::synapse0x2d0d170() {
   return (neuron0x2cfc440()*-0.687049);
}

double NNfunction_ns_chi01_sR::synapse0x2d0d1b0() {
   return (neuron0x2cfc780()*0.574146);
}

double NNfunction_ns_chi01_sR::synapse0x2d0d1f0() {
   return (neuron0x2cfcac0()*0.31943);
}

double NNfunction_ns_chi01_sR::synapse0x2d0cc80() {
   return (neuron0x2cfce00()*-0.186269);
}

double NNfunction_ns_chi01_sR::synapse0x2d0ccc0() {
   return (neuron0x2cfd360()*-0.845049);
}

double NNfunction_ns_chi01_sR::synapse0x2d0d340() {
   return (neuron0x2cfd6a0()*-0.505575);
}

double NNfunction_ns_chi01_sR::synapse0x2d0d380() {
   return (neuron0x2cfd9e0()*-1.38661);
}

double NNfunction_ns_chi01_sR::synapse0x2d0d3c0() {
   return (neuron0x2cfdd20()*-0.322933);
}

double NNfunction_ns_chi01_sR::synapse0x2d0d400() {
   return (neuron0x2cfe060()*-0.258794);
}

double NNfunction_ns_chi01_sR::synapse0x2d0d440() {
   return (neuron0x2cfe3a0()*0.0765829);
}

double NNfunction_ns_chi01_sR::synapse0x2d0d480() {
   return (neuron0x2cfe6e0()*0.967519);
}

double NNfunction_ns_chi01_sR::synapse0x2d0d800() {
   return (neuron0x2cf9a90()*-0.260532);
}

double NNfunction_ns_chi01_sR::synapse0x2d0d840() {
   return (neuron0x2cf9d40()*-0.0140944);
}

double NNfunction_ns_chi01_sR::synapse0x2d0d880() {
   return (neuron0x2cfa080()*-0.076693);
}

double NNfunction_ns_chi01_sR::synapse0x2d0d8c0() {
   return (neuron0x2cfa3c0()*-0.0484368);
}

double NNfunction_ns_chi01_sR::synapse0x2d0d900() {
   return (neuron0x2cfa700()*-0.0690026);
}

double NNfunction_ns_chi01_sR::synapse0x2d0d940() {
   return (neuron0x2cfaa40()*0.0166677);
}

double NNfunction_ns_chi01_sR::synapse0x2d0d980() {
   return (neuron0x2cfad80()*0.00349478);
}

double NNfunction_ns_chi01_sR::synapse0x2d0d9c0() {
   return (neuron0x2cfb0c0()*0.0266107);
}

double NNfunction_ns_chi01_sR::synapse0x2d0da00() {
   return (neuron0x2cfb400()*-0.0125957);
}

double NNfunction_ns_chi01_sR::synapse0x2d0da40() {
   return (neuron0x2cfb740()*0.0198333);
}

double NNfunction_ns_chi01_sR::synapse0x2d0da80() {
   return (neuron0x2cfba80()*0.0178115);
}

double NNfunction_ns_chi01_sR::synapse0x2d0dac0() {
   return (neuron0x2cfbdc0()*0.0149646);
}

double NNfunction_ns_chi01_sR::synapse0x2d0db00() {
   return (neuron0x2cfc100()*-0.0271305);
}

double NNfunction_ns_chi01_sR::synapse0x2d0db40() {
   return (neuron0x2cfc440()*-0.0476337);
}

double NNfunction_ns_chi01_sR::synapse0x2d0db80() {
   return (neuron0x2cfc780()*-0.0190331);
}

double NNfunction_ns_chi01_sR::synapse0x2d0dbc0() {
   return (neuron0x2cfcac0()*-0.0070382);
}

double NNfunction_ns_chi01_sR::synapse0x2d0d650() {
   return (neuron0x2cfce00()*0.0292443);
}

double NNfunction_ns_chi01_sR::synapse0x2d0d690() {
   return (neuron0x2cfd360()*-0.0180049);
}

double NNfunction_ns_chi01_sR::synapse0x2d0dd10() {
   return (neuron0x2cfd6a0()*0.164856);
}

double NNfunction_ns_chi01_sR::synapse0x2d0dd50() {
   return (neuron0x2cfd9e0()*0.0417149);
}

double NNfunction_ns_chi01_sR::synapse0x2d0dd90() {
   return (neuron0x2cfdd20()*-0.0335611);
}

double NNfunction_ns_chi01_sR::synapse0x2d0ddd0() {
   return (neuron0x2cfe060()*-0.0688136);
}

double NNfunction_ns_chi01_sR::synapse0x2d0de10() {
   return (neuron0x2cfe3a0()*0.0289068);
}

double NNfunction_ns_chi01_sR::synapse0x2d0de50() {
   return (neuron0x2cfe6e0()*-7.79565);
}

double NNfunction_ns_chi01_sR::synapse0x2d0e1d0() {
   return (neuron0x2cf9a90()*-0.020121);
}

double NNfunction_ns_chi01_sR::synapse0x2d0e210() {
   return (neuron0x2cf9d40()*0.0542955);
}

double NNfunction_ns_chi01_sR::synapse0x2d0e250() {
   return (neuron0x2cfa080()*-0.00770161);
}

double NNfunction_ns_chi01_sR::synapse0x2d0e290() {
   return (neuron0x2cfa3c0()*-0.0188395);
}

double NNfunction_ns_chi01_sR::synapse0x2d0e2d0() {
   return (neuron0x2cfa700()*-0.0404438);
}

double NNfunction_ns_chi01_sR::synapse0x2d0e310() {
   return (neuron0x2cfaa40()*-0.0159301);
}

double NNfunction_ns_chi01_sR::synapse0x2d0e350() {
   return (neuron0x2cfad80()*-0.0238051);
}

double NNfunction_ns_chi01_sR::synapse0x2d0e390() {
   return (neuron0x2cfb0c0()*-0.000592702);
}

double NNfunction_ns_chi01_sR::synapse0x2d0e3d0() {
   return (neuron0x2cfb400()*-0.00484867);
}

double NNfunction_ns_chi01_sR::synapse0x2d06590() {
   return (neuron0x2cfb740()*0.0217118);
}

double NNfunction_ns_chi01_sR::synapse0x2d065d0() {
   return (neuron0x2cfba80()*0.00265016);
}

double NNfunction_ns_chi01_sR::synapse0x2d06610() {
   return (neuron0x2cfbdc0()*-0.00142953);
}

double NNfunction_ns_chi01_sR::synapse0x2d06650() {
   return (neuron0x2cfc100()*0.00175664);
}

double NNfunction_ns_chi01_sR::synapse0x2d06690() {
   return (neuron0x2cfc440()*-0.0242975);
}

double NNfunction_ns_chi01_sR::synapse0x2d066d0() {
   return (neuron0x2cfc780()*0.0186691);
}

double NNfunction_ns_chi01_sR::synapse0x2d06710() {
   return (neuron0x2cfcac0()*-0.0285841);
}

double NNfunction_ns_chi01_sR::synapse0x2d0e020() {
   return (neuron0x2cfce00()*-0.0130247);
}

double NNfunction_ns_chi01_sR::synapse0x2d0e060() {
   return (neuron0x2cfd360()*-0.000283635);
}

double NNfunction_ns_chi01_sR::synapse0x2d06860() {
   return (neuron0x2cfd6a0()*0.0304326);
}

double NNfunction_ns_chi01_sR::synapse0x2d068a0() {
   return (neuron0x2cfd9e0()*0.0118515);
}

double NNfunction_ns_chi01_sR::synapse0x2d068e0() {
   return (neuron0x2cfdd20()*0.0519624);
}

double NNfunction_ns_chi01_sR::synapse0x2d06920() {
   return (neuron0x2cfe060()*0.00839506);
}

double NNfunction_ns_chi01_sR::synapse0x2d06960() {
   return (neuron0x2cfe3a0()*0.00626545);
}

double NNfunction_ns_chi01_sR::synapse0x2d069a0() {
   return (neuron0x2cfe6e0()*-22.4801);
}

double NNfunction_ns_chi01_sR::synapse0x2d06d20() {
   return (neuron0x2cf9a90()*0.00620179);
}

double NNfunction_ns_chi01_sR::synapse0x2d06d60() {
   return (neuron0x2cf9d40()*-0.0315714);
}

double NNfunction_ns_chi01_sR::synapse0x2d06da0() {
   return (neuron0x2cfa080()*-0.0377974);
}

double NNfunction_ns_chi01_sR::synapse0x2d06de0() {
   return (neuron0x2cfa3c0()*-3.19002);
}

double NNfunction_ns_chi01_sR::synapse0x2d06e20() {
   return (neuron0x2cfa700()*-0.008584);
}

double NNfunction_ns_chi01_sR::synapse0x2d06e60() {
   return (neuron0x2cfaa40()*0.00020075);
}

double NNfunction_ns_chi01_sR::synapse0x2d06ea0() {
   return (neuron0x2cfad80()*0.0129071);
}

double NNfunction_ns_chi01_sR::synapse0x2d06ee0() {
   return (neuron0x2cfb0c0()*0.00299566);
}

double NNfunction_ns_chi01_sR::synapse0x2d06f20() {
   return (neuron0x2cfb400()*0.0213845);
}

double NNfunction_ns_chi01_sR::synapse0x2d06f60() {
   return (neuron0x2cfb740()*0.00242981);
}

double NNfunction_ns_chi01_sR::synapse0x2d06fa0() {
   return (neuron0x2cfba80()*0.02719);
}

double NNfunction_ns_chi01_sR::synapse0x2d06fe0() {
   return (neuron0x2cfbdc0()*-0.0140421);
}

double NNfunction_ns_chi01_sR::synapse0x2d07020() {
   return (neuron0x2cfc100()*-0.0288842);
}

double NNfunction_ns_chi01_sR::synapse0x2d07060() {
   return (neuron0x2cfc440()*0.0327905);
}

double NNfunction_ns_chi01_sR::synapse0x2d070a0() {
   return (neuron0x2cfc780()*-0.0192589);
}

double NNfunction_ns_chi01_sR::synapse0x2d070e0() {
   return (neuron0x2cfcac0()*-0.0203939);
}

double NNfunction_ns_chi01_sR::synapse0x2d06b70() {
   return (neuron0x2cfce00()*0.0275651);
}

double NNfunction_ns_chi01_sR::synapse0x2d06bb0() {
   return (neuron0x2cfd360()*-0.00647649);
}

double NNfunction_ns_chi01_sR::synapse0x2d07230() {
   return (neuron0x2cfd6a0()*0.269053);
}

double NNfunction_ns_chi01_sR::synapse0x2d07270() {
   return (neuron0x2cfd9e0()*0.00900667);
}

double NNfunction_ns_chi01_sR::synapse0x2d072b0() {
   return (neuron0x2cfdd20()*-0.0116097);
}

double NNfunction_ns_chi01_sR::synapse0x2d072f0() {
   return (neuron0x2cfe060()*0.000541296);
}

double NNfunction_ns_chi01_sR::synapse0x2d07330() {
   return (neuron0x2cfe3a0()*0.00297275);
}

double NNfunction_ns_chi01_sR::synapse0x2d07370() {
   return (neuron0x2cfe6e0()*-0.00151328);
}

double NNfunction_ns_chi01_sR::synapse0x2d07540() {
   return (neuron0x2cf9a90()*0.0718412);
}

double NNfunction_ns_chi01_sR::synapse0x2d105d0() {
   return (neuron0x2cf9d40()*0.183359);
}

double NNfunction_ns_chi01_sR::synapse0x2d10610() {
   return (neuron0x2cfa080()*-10.4586);
}

double NNfunction_ns_chi01_sR::synapse0x2d10650() {
   return (neuron0x2cfa3c0()*0.00521748);
}

double NNfunction_ns_chi01_sR::synapse0x2d10690() {
   return (neuron0x2cfa700()*0.028757);
}

double NNfunction_ns_chi01_sR::synapse0x2d106d0() {
   return (neuron0x2cfaa40()*-0.0318944);
}

double NNfunction_ns_chi01_sR::synapse0x2d10710() {
   return (neuron0x2cfad80()*-0.0145704);
}

double NNfunction_ns_chi01_sR::synapse0x2d10750() {
   return (neuron0x2cfb0c0()*0.0196861);
}

double NNfunction_ns_chi01_sR::synapse0x2d10790() {
   return (neuron0x2cfb400()*0.016847);
}

double NNfunction_ns_chi01_sR::synapse0x2d107d0() {
   return (neuron0x2cfb740()*-0.0101904);
}

double NNfunction_ns_chi01_sR::synapse0x2d10810() {
   return (neuron0x2cfba80()*-0.0259718);
}

double NNfunction_ns_chi01_sR::synapse0x2d10850() {
   return (neuron0x2cfbdc0()*-0.00783989);
}

double NNfunction_ns_chi01_sR::synapse0x2d10890() {
   return (neuron0x2cfc100()*-0.000902656);
}

double NNfunction_ns_chi01_sR::synapse0x2d108d0() {
   return (neuron0x2cfc440()*0.0813086);
}

double NNfunction_ns_chi01_sR::synapse0x2d10910() {
   return (neuron0x2cfc780()*-0.0171738);
}

double NNfunction_ns_chi01_sR::synapse0x2d10950() {
   return (neuron0x2cfcac0()*-0.0138326);
}

double NNfunction_ns_chi01_sR::synapse0x2d10420() {
   return (neuron0x2cfce00()*0.0169295);
}

double NNfunction_ns_chi01_sR::synapse0x2d10460() {
   return (neuron0x2cfd360()*-0.0735434);
}

double NNfunction_ns_chi01_sR::synapse0x2d10aa0() {
   return (neuron0x2cfd6a0()*-0.338301);
}

double NNfunction_ns_chi01_sR::synapse0x2d10ae0() {
   return (neuron0x2cfd9e0()*0.027097);
}

double NNfunction_ns_chi01_sR::synapse0x2d10b20() {
   return (neuron0x2cfdd20()*-0.0409531);
}

double NNfunction_ns_chi01_sR::synapse0x2d10b60() {
   return (neuron0x2cfe060()*-0.00121123);
}

double NNfunction_ns_chi01_sR::synapse0x2d10ba0() {
   return (neuron0x2cfe3a0()*-0.0095033);
}

double NNfunction_ns_chi01_sR::synapse0x2d10be0() {
   return (neuron0x2cfe6e0()*0.12147);
}

double NNfunction_ns_chi01_sR::synapse0x2d10f60() {
   return (neuron0x2cf9a90()*-0.903465);
}

double NNfunction_ns_chi01_sR::synapse0x2d10fa0() {
   return (neuron0x2cf9d40()*0.0840041);
}

double NNfunction_ns_chi01_sR::synapse0x2d10fe0() {
   return (neuron0x2cfa080()*-0.177128);
}

double NNfunction_ns_chi01_sR::synapse0x2d11020() {
   return (neuron0x2cfa3c0()*-1.08336);
}

double NNfunction_ns_chi01_sR::synapse0x2d11060() {
   return (neuron0x2cfa700()*-0.671818);
}

double NNfunction_ns_chi01_sR::synapse0x2d110a0() {
   return (neuron0x2cfaa40()*0.4933);
}

double NNfunction_ns_chi01_sR::synapse0x2d110e0() {
   return (neuron0x2cfad80()*-0.332165);
}

double NNfunction_ns_chi01_sR::synapse0x2d11120() {
   return (neuron0x2cfb0c0()*0.898695);
}

double NNfunction_ns_chi01_sR::synapse0x2d11160() {
   return (neuron0x2cfb400()*-0.23435);
}

double NNfunction_ns_chi01_sR::synapse0x2d111a0() {
   return (neuron0x2cfb740()*-0.244337);
}

double NNfunction_ns_chi01_sR::synapse0x2d111e0() {
   return (neuron0x2cfba80()*0.593104);
}

double NNfunction_ns_chi01_sR::synapse0x2d11220() {
   return (neuron0x2cfbdc0()*2.44995);
}

double NNfunction_ns_chi01_sR::synapse0x2d11260() {
   return (neuron0x2cfc100()*0.369237);
}

double NNfunction_ns_chi01_sR::synapse0x2d112a0() {
   return (neuron0x2cfc440()*-0.0231281);
}

double NNfunction_ns_chi01_sR::synapse0x2d112e0() {
   return (neuron0x2cfc780()*-0.786897);
}

double NNfunction_ns_chi01_sR::synapse0x2d11320() {
   return (neuron0x2cfcac0()*-1.61116);
}

double NNfunction_ns_chi01_sR::synapse0x2d10db0() {
   return (neuron0x2cfce00()*-1.2943);
}

double NNfunction_ns_chi01_sR::synapse0x2d10df0() {
   return (neuron0x2cfd360()*-0.357897);
}

double NNfunction_ns_chi01_sR::synapse0x2d11470() {
   return (neuron0x2cfd6a0()*-1.02731);
}

double NNfunction_ns_chi01_sR::synapse0x2d114b0() {
   return (neuron0x2cfd9e0()*1.08228);
}

double NNfunction_ns_chi01_sR::synapse0x2d114f0() {
   return (neuron0x2cfdd20()*-1.83193);
}

double NNfunction_ns_chi01_sR::synapse0x2d11530() {
   return (neuron0x2cfe060()*1.30157);
}

double NNfunction_ns_chi01_sR::synapse0x2d11570() {
   return (neuron0x2cfe3a0()*-0.397133);
}

double NNfunction_ns_chi01_sR::synapse0x2d115b0() {
   return (neuron0x2cfe6e0()*-0.38);
}

double NNfunction_ns_chi01_sR::synapse0x2d11930() {
   return (neuron0x2cf9a90()*0.0258986);
}

double NNfunction_ns_chi01_sR::synapse0x2d11970() {
   return (neuron0x2cf9d40()*3.90298);
}

double NNfunction_ns_chi01_sR::synapse0x2d119b0() {
   return (neuron0x2cfa080()*0.0495601);
}

double NNfunction_ns_chi01_sR::synapse0x2d119f0() {
   return (neuron0x2cfa3c0()*0.00393113);
}

double NNfunction_ns_chi01_sR::synapse0x2d11a30() {
   return (neuron0x2cfa700()*0.0107478);
}

double NNfunction_ns_chi01_sR::synapse0x2d11a70() {
   return (neuron0x2cfaa40()*-0.0285763);
}

double NNfunction_ns_chi01_sR::synapse0x2d11ab0() {
   return (neuron0x2cfad80()*-0.0111005);
}

double NNfunction_ns_chi01_sR::synapse0x2d11af0() {
   return (neuron0x2cfb0c0()*-0.0232095);
}

double NNfunction_ns_chi01_sR::synapse0x2d11b30() {
   return (neuron0x2cfb400()*0.0298754);
}

double NNfunction_ns_chi01_sR::synapse0x2d11b70() {
   return (neuron0x2cfb740()*-0.0292249);
}

double NNfunction_ns_chi01_sR::synapse0x2d11bb0() {
   return (neuron0x2cfba80()*-0.0219092);
}

double NNfunction_ns_chi01_sR::synapse0x2d11bf0() {
   return (neuron0x2cfbdc0()*-0.0253819);
}

double NNfunction_ns_chi01_sR::synapse0x2d11c30() {
   return (neuron0x2cfc100()*0.0311036);
}

double NNfunction_ns_chi01_sR::synapse0x2d11c70() {
   return (neuron0x2cfc440()*0.00883873);
}

double NNfunction_ns_chi01_sR::synapse0x2d11cb0() {
   return (neuron0x2cfc780()*0.0119951);
}

double NNfunction_ns_chi01_sR::synapse0x2d11cf0() {
   return (neuron0x2cfcac0()*-0.0537829);
}

double NNfunction_ns_chi01_sR::synapse0x2d11780() {
   return (neuron0x2cfce00()*-0.00883038);
}

double NNfunction_ns_chi01_sR::synapse0x2d117c0() {
   return (neuron0x2cfd360()*0.00334281);
}

double NNfunction_ns_chi01_sR::synapse0x2d11e40() {
   return (neuron0x2cfd6a0()*-0.0370788);
}

double NNfunction_ns_chi01_sR::synapse0x2d11e80() {
   return (neuron0x2cfd9e0()*-0.0136497);
}

double NNfunction_ns_chi01_sR::synapse0x2d11ec0() {
   return (neuron0x2cfdd20()*-0.0122189);
}

double NNfunction_ns_chi01_sR::synapse0x2d11f00() {
   return (neuron0x2cfe060()*0.0211289);
}

double NNfunction_ns_chi01_sR::synapse0x2d11f40() {
   return (neuron0x2cfe3a0()*-0.0328263);
}

double NNfunction_ns_chi01_sR::synapse0x2d11f80() {
   return (neuron0x2cfe6e0()*-0.0666437);
}

double NNfunction_ns_chi01_sR::synapse0x2d12300() {
   return (neuron0x2cf9a90()*-0.250741);
}

double NNfunction_ns_chi01_sR::synapse0x2d12340() {
   return (neuron0x2cf9d40()*-3.89828);
}

double NNfunction_ns_chi01_sR::synapse0x2d12380() {
   return (neuron0x2cfa080()*-0.00249945);
}

double NNfunction_ns_chi01_sR::synapse0x2d123c0() {
   return (neuron0x2cfa3c0()*-0.207987);
}

double NNfunction_ns_chi01_sR::synapse0x2d12400() {
   return (neuron0x2cfa700()*-0.0767421);
}

double NNfunction_ns_chi01_sR::synapse0x2d12440() {
   return (neuron0x2cfaa40()*0.0347151);
}

double NNfunction_ns_chi01_sR::synapse0x2d12480() {
   return (neuron0x2cfad80()*0.138994);
}

double NNfunction_ns_chi01_sR::synapse0x2d124c0() {
   return (neuron0x2cfb0c0()*0.293379);
}

double NNfunction_ns_chi01_sR::synapse0x2d12500() {
   return (neuron0x2cfb400()*0.0900061);
}

double NNfunction_ns_chi01_sR::synapse0x2d12540() {
   return (neuron0x2cfb740()*-0.0190249);
}

double NNfunction_ns_chi01_sR::synapse0x2d12580() {
   return (neuron0x2cfba80()*-0.129921);
}

double NNfunction_ns_chi01_sR::synapse0x2d125c0() {
   return (neuron0x2cfbdc0()*-0.0962589);
}

double NNfunction_ns_chi01_sR::synapse0x2d12600() {
   return (neuron0x2cfc100()*-0.114451);
}

double NNfunction_ns_chi01_sR::synapse0x2d12640() {
   return (neuron0x2cfc440()*-0.0774183);
}

double NNfunction_ns_chi01_sR::synapse0x2d12680() {
   return (neuron0x2cfc780()*-0.208209);
}

double NNfunction_ns_chi01_sR::synapse0x2d126c0() {
   return (neuron0x2cfcac0()*0.307033);
}

double NNfunction_ns_chi01_sR::synapse0x2d12150() {
   return (neuron0x2cfce00()*0.113643);
}

double NNfunction_ns_chi01_sR::synapse0x2d12190() {
   return (neuron0x2cfd360()*-0.000822809);
}

double NNfunction_ns_chi01_sR::synapse0x2d12810() {
   return (neuron0x2cfd6a0()*0.476011);
}

double NNfunction_ns_chi01_sR::synapse0x2d12850() {
   return (neuron0x2cfd9e0()*0.00267483);
}

double NNfunction_ns_chi01_sR::synapse0x2d12890() {
   return (neuron0x2cfdd20()*0.0362742);
}

double NNfunction_ns_chi01_sR::synapse0x2d128d0() {
   return (neuron0x2cfe060()*-0.0525677);
}

double NNfunction_ns_chi01_sR::synapse0x2d12910() {
   return (neuron0x2cfe3a0()*0.0314975);
}

double NNfunction_ns_chi01_sR::synapse0x2d12950() {
   return (neuron0x2cfe6e0()*-3.77606);
}

double NNfunction_ns_chi01_sR::synapse0x2d12cd0() {
   return (neuron0x2cf9a90()*0.706112);
}

double NNfunction_ns_chi01_sR::synapse0x2d12d10() {
   return (neuron0x2cf9d40()*-0.0109836);
}

double NNfunction_ns_chi01_sR::synapse0x2d12d50() {
   return (neuron0x2cfa080()*1.26564);
}

double NNfunction_ns_chi01_sR::synapse0x2d12d90() {
   return (neuron0x2cfa3c0()*1.75311);
}

double NNfunction_ns_chi01_sR::synapse0x2d12dd0() {
   return (neuron0x2cfa700()*0.140552);
}

double NNfunction_ns_chi01_sR::synapse0x2d12e10() {
   return (neuron0x2cfaa40()*-0.935807);
}

double NNfunction_ns_chi01_sR::synapse0x2d12e50() {
   return (neuron0x2cfad80()*0.483769);
}

double NNfunction_ns_chi01_sR::synapse0x2d12e90() {
   return (neuron0x2cfb0c0()*-0.424999);
}

double NNfunction_ns_chi01_sR::synapse0x2d12ed0() {
   return (neuron0x2cfb400()*-1.46964);
}

double NNfunction_ns_chi01_sR::synapse0x2d12f10() {
   return (neuron0x2cfb740()*-1.57876);
}

double NNfunction_ns_chi01_sR::synapse0x2d12f50() {
   return (neuron0x2cfba80()*-0.972965);
}

double NNfunction_ns_chi01_sR::synapse0x2d12f90() {
   return (neuron0x2cfbdc0()*-0.502419);
}

double NNfunction_ns_chi01_sR::synapse0x2d12fd0() {
   return (neuron0x2cfc100()*-0.194978);
}

double NNfunction_ns_chi01_sR::synapse0x2d13010() {
   return (neuron0x2cfc440()*-0.345081);
}

double NNfunction_ns_chi01_sR::synapse0x2d13050() {
   return (neuron0x2cfc780()*1.75457);
}

double NNfunction_ns_chi01_sR::synapse0x2d13090() {
   return (neuron0x2cfcac0()*1.07521);
}

double NNfunction_ns_chi01_sR::synapse0x2d12b20() {
   return (neuron0x2cfce00()*0.277398);
}

double NNfunction_ns_chi01_sR::synapse0x2d12b60() {
   return (neuron0x2cfd360()*-0.104241);
}

double NNfunction_ns_chi01_sR::synapse0x2d131e0() {
   return (neuron0x2cfd6a0()*-1.15352);
}

double NNfunction_ns_chi01_sR::synapse0x2d13220() {
   return (neuron0x2cfd9e0()*-1.28889);
}

double NNfunction_ns_chi01_sR::synapse0x2d13260() {
   return (neuron0x2cfdd20()*-0.376692);
}

double NNfunction_ns_chi01_sR::synapse0x2d132a0() {
   return (neuron0x2cfe060()*-0.680246);
}

double NNfunction_ns_chi01_sR::synapse0x2d132e0() {
   return (neuron0x2cfe3a0()*1.56471);
}

double NNfunction_ns_chi01_sR::synapse0x2d13320() {
   return (neuron0x2cfe6e0()*0.198105);
}

double NNfunction_ns_chi01_sR::synapse0x2d136a0() {
   return (neuron0x2cf9a90()*-0.591767);
}

double NNfunction_ns_chi01_sR::synapse0x2d136e0() {
   return (neuron0x2cf9d40()*0.0947568);
}

double NNfunction_ns_chi01_sR::synapse0x2d13720() {
   return (neuron0x2cfa080()*0.479144);
}

double NNfunction_ns_chi01_sR::synapse0x2d13760() {
   return (neuron0x2cfa3c0()*-1.54786);
}

double NNfunction_ns_chi01_sR::synapse0x2d137a0() {
   return (neuron0x2cfa700()*-0.00284593);
}

double NNfunction_ns_chi01_sR::synapse0x2d137e0() {
   return (neuron0x2cfaa40()*1.07065);
}

double NNfunction_ns_chi01_sR::synapse0x2d13820() {
   return (neuron0x2cfad80()*0.216633);
}

double NNfunction_ns_chi01_sR::synapse0x2d13860() {
   return (neuron0x2cfb0c0()*0.4841);
}

double NNfunction_ns_chi01_sR::synapse0x2d138a0() {
   return (neuron0x2cfb400()*-0.290739);
}

double NNfunction_ns_chi01_sR::synapse0x2d138e0() {
   return (neuron0x2cfb740()*1.1885);
}

double NNfunction_ns_chi01_sR::synapse0x2d13920() {
   return (neuron0x2cfba80()*-1.06653);
}

double NNfunction_ns_chi01_sR::synapse0x2d13960() {
   return (neuron0x2cfbdc0()*1.46197);
}

double NNfunction_ns_chi01_sR::synapse0x2d139a0() {
   return (neuron0x2cfc100()*-0.509502);
}

double NNfunction_ns_chi01_sR::synapse0x2d139e0() {
   return (neuron0x2cfc440()*1.16091);
}

double NNfunction_ns_chi01_sR::synapse0x2d13a20() {
   return (neuron0x2cfc780()*-0.412104);
}

double NNfunction_ns_chi01_sR::synapse0x2d13a60() {
   return (neuron0x2cfcac0()*-0.889266);
}

double NNfunction_ns_chi01_sR::synapse0x2d134f0() {
   return (neuron0x2cfce00()*0.329852);
}

double NNfunction_ns_chi01_sR::synapse0x2d13530() {
   return (neuron0x2cfd360()*-0.464868);
}

double NNfunction_ns_chi01_sR::synapse0x2d13bb0() {
   return (neuron0x2cfd6a0()*0.120539);
}

double NNfunction_ns_chi01_sR::synapse0x2d13bf0() {
   return (neuron0x2cfd9e0()*0.364282);
}

double NNfunction_ns_chi01_sR::synapse0x2d13c30() {
   return (neuron0x2cfdd20()*-0.411788);
}

double NNfunction_ns_chi01_sR::synapse0x2d13c70() {
   return (neuron0x2cfe060()*-0.126095);
}

double NNfunction_ns_chi01_sR::synapse0x2d13cb0() {
   return (neuron0x2cfe3a0()*-0.290414);
}

double NNfunction_ns_chi01_sR::synapse0x2d13cf0() {
   return (neuron0x2cfe6e0()*1.08829);
}

double NNfunction_ns_chi01_sR::synapse0x2d14070() {
   return (neuron0x2cf9a90()*-0.422611);
}

double NNfunction_ns_chi01_sR::synapse0x2d140b0() {
   return (neuron0x2cf9d40()*-0.0517646);
}

double NNfunction_ns_chi01_sR::synapse0x2d140f0() {
   return (neuron0x2cfa080()*0.0909338);
}

double NNfunction_ns_chi01_sR::synapse0x2d14130() {
   return (neuron0x2cfa3c0()*1.40882);
}

double NNfunction_ns_chi01_sR::synapse0x2d14170() {
   return (neuron0x2cfa700()*0.441294);
}

double NNfunction_ns_chi01_sR::synapse0x2d141b0() {
   return (neuron0x2cfaa40()*-0.119083);
}

double NNfunction_ns_chi01_sR::synapse0x2d141f0() {
   return (neuron0x2cfad80()*0.0175592);
}

double NNfunction_ns_chi01_sR::synapse0x2d14230() {
   return (neuron0x2cfb0c0()*-0.0352119);
}

double NNfunction_ns_chi01_sR::synapse0x2d14270() {
   return (neuron0x2cfb400()*0.0989346);
}

double NNfunction_ns_chi01_sR::synapse0x2d142b0() {
   return (neuron0x2cfb740()*-0.159575);
}

double NNfunction_ns_chi01_sR::synapse0x2d142f0() {
   return (neuron0x2cfba80()*-0.148085);
}

double NNfunction_ns_chi01_sR::synapse0x2d14330() {
   return (neuron0x2cfbdc0()*1.20541);
}

double NNfunction_ns_chi01_sR::synapse0x2d14370() {
   return (neuron0x2cfc100()*1.51945);
}

double NNfunction_ns_chi01_sR::synapse0x2d143b0() {
   return (neuron0x2cfc440()*-0.8608);
}

double NNfunction_ns_chi01_sR::synapse0x2d143f0() {
   return (neuron0x2cfc780()*-0.237367);
}

double NNfunction_ns_chi01_sR::synapse0x2d14430() {
   return (neuron0x2cfcac0()*1.67916);
}

double NNfunction_ns_chi01_sR::synapse0x2d13ec0() {
   return (neuron0x2cfce00()*-0.828417);
}

double NNfunction_ns_chi01_sR::synapse0x2d13f00() {
   return (neuron0x2cfd360()*0.0477319);
}

double NNfunction_ns_chi01_sR::synapse0x2d14580() {
   return (neuron0x2cfd6a0()*-0.933492);
}

double NNfunction_ns_chi01_sR::synapse0x2d145c0() {
   return (neuron0x2cfd9e0()*-0.404324);
}

double NNfunction_ns_chi01_sR::synapse0x2d14600() {
   return (neuron0x2cfdd20()*-0.0407852);
}

double NNfunction_ns_chi01_sR::synapse0x2d14640() {
   return (neuron0x2cfe060()*0.690454);
}

double NNfunction_ns_chi01_sR::synapse0x2d14680() {
   return (neuron0x2cfe3a0()*0.0391818);
}

double NNfunction_ns_chi01_sR::synapse0x2d146c0() {
   return (neuron0x2cfe6e0()*-0.55172);
}

double NNfunction_ns_chi01_sR::synapse0x2d14a40() {
   return (neuron0x2cf9a90()*-0.205246);
}

double NNfunction_ns_chi01_sR::synapse0x2d14a80() {
   return (neuron0x2cf9d40()*-0.273666);
}

double NNfunction_ns_chi01_sR::synapse0x2d14ac0() {
   return (neuron0x2cfa080()*0.090005);
}

double NNfunction_ns_chi01_sR::synapse0x2d14b00() {
   return (neuron0x2cfa3c0()*-0.232744);
}

double NNfunction_ns_chi01_sR::synapse0x2d14b40() {
   return (neuron0x2cfa700()*0.288825);
}

double NNfunction_ns_chi01_sR::synapse0x2d14b80() {
   return (neuron0x2cfaa40()*0.860727);
}

double NNfunction_ns_chi01_sR::synapse0x2d14bc0() {
   return (neuron0x2cfad80()*-0.582288);
}

double NNfunction_ns_chi01_sR::synapse0x2d14c00() {
   return (neuron0x2cfb0c0()*-0.30598);
}

double NNfunction_ns_chi01_sR::synapse0x2d14c40() {
   return (neuron0x2cfb400()*0.261338);
}

double NNfunction_ns_chi01_sR::synapse0x2d14c80() {
   return (neuron0x2cfb740()*1.58293);
}

double NNfunction_ns_chi01_sR::synapse0x2d14cc0() {
   return (neuron0x2cfba80()*0.2642);
}

double NNfunction_ns_chi01_sR::synapse0x2d14d00() {
   return (neuron0x2cfbdc0()*0.710185);
}

double NNfunction_ns_chi01_sR::synapse0x2d14d40() {
   return (neuron0x2cfc100()*-1.28874);
}

double NNfunction_ns_chi01_sR::synapse0x2d14d80() {
   return (neuron0x2cfc440()*0.626082);
}

double NNfunction_ns_chi01_sR::synapse0x2d14dc0() {
   return (neuron0x2cfc780()*-0.964458);
}

double NNfunction_ns_chi01_sR::synapse0x2d14e00() {
   return (neuron0x2cfcac0()*-0.164663);
}

double NNfunction_ns_chi01_sR::synapse0x2d14890() {
   return (neuron0x2cfce00()*-0.190851);
}

double NNfunction_ns_chi01_sR::synapse0x2d148d0() {
   return (neuron0x2cfd360()*-0.248705);
}

double NNfunction_ns_chi01_sR::synapse0x2d14f50() {
   return (neuron0x2cfd6a0()*-0.873433);
}

double NNfunction_ns_chi01_sR::synapse0x2d14f90() {
   return (neuron0x2cfd9e0()*-0.580331);
}

double NNfunction_ns_chi01_sR::synapse0x2d14fd0() {
   return (neuron0x2cfdd20()*-0.0645775);
}

double NNfunction_ns_chi01_sR::synapse0x2d15010() {
   return (neuron0x2cfe060()*-0.534466);
}

double NNfunction_ns_chi01_sR::synapse0x2d15050() {
   return (neuron0x2cfe3a0()*0.341907);
}

double NNfunction_ns_chi01_sR::synapse0x2d15090() {
   return (neuron0x2cfe6e0()*1.09335);
}

double NNfunction_ns_chi01_sR::synapse0x2d15410() {
   return (neuron0x2cf9a90()*0.15126);
}

double NNfunction_ns_chi01_sR::synapse0x2d099e0() {
   return (neuron0x2cf9d40()*-0.0147671);
}

double NNfunction_ns_chi01_sR::synapse0x2d09a20() {
   return (neuron0x2cfa080()*0.117863);
}

double NNfunction_ns_chi01_sR::synapse0x2d09a60() {
   return (neuron0x2cfa3c0()*0.119429);
}

double NNfunction_ns_chi01_sR::synapse0x2d09cb0() {
   return (neuron0x2cfa700()*0.0662195);
}

double NNfunction_ns_chi01_sR::synapse0x2d09cf0() {
   return (neuron0x2cfaa40()*-0.0996281);
}

double NNfunction_ns_chi01_sR::synapse0x2d09d30() {
   return (neuron0x2cfad80()*-0.0962684);
}

double NNfunction_ns_chi01_sR::synapse0x2d09f80() {
   return (neuron0x2cfb0c0()*-0.179441);
}

double NNfunction_ns_chi01_sR::synapse0x2d09fc0() {
   return (neuron0x2cfb400()*0.00612954);
}

double NNfunction_ns_chi01_sR::synapse0x2d0a210() {
   return (neuron0x2cfb740()*0.000833114);
}

double NNfunction_ns_chi01_sR::synapse0x2d0a250() {
   return (neuron0x2cfba80()*-0.0139699);
}

double NNfunction_ns_chi01_sR::synapse0x2d0a290() {
   return (neuron0x2cfbdc0()*-0.254563);
}

double NNfunction_ns_chi01_sR::synapse0x2d0a4e0() {
   return (neuron0x2cfc100()*-0.061716);
}

double NNfunction_ns_chi01_sR::synapse0x2d0a520() {
   return (neuron0x2cfc440()*0.103638);
}

double NNfunction_ns_chi01_sR::synapse0x2d0a770() {
   return (neuron0x2cfc780()*-0.0361175);
}

double NNfunction_ns_chi01_sR::synapse0x2d0a7b0() {
   return (neuron0x2cfcac0()*0.178808);
}

double NNfunction_ns_chi01_sR::synapse0x2d15260() {
   return (neuron0x2cfce00()*0.480825);
}

double NNfunction_ns_chi01_sR::synapse0x2d152a0() {
   return (neuron0x2cfd360()*-0.0455163);
}

double NNfunction_ns_chi01_sR::synapse0x2d0a900() {
   return (neuron0x2cfd6a0()*-0.281847);
}

double NNfunction_ns_chi01_sR::synapse0x2d0ae10() {
   return (neuron0x2cfd9e0()*-0.101571);
}

double NNfunction_ns_chi01_sR::synapse0x2d0ae50() {
   return (neuron0x2cfdd20()*0.0287844);
}

double NNfunction_ns_chi01_sR::synapse0x2d0ae90() {
   return (neuron0x2cfe060()*0.0245211);
}

double NNfunction_ns_chi01_sR::synapse0x2d0b0e0() {
   return (neuron0x2cfe3a0()*-0.0726452);
}

double NNfunction_ns_chi01_sR::synapse0x2d0b120() {
   return (neuron0x2cfe6e0()*0.0347668);
}

double NNfunction_ns_chi01_sR::synapse0x2d0a9d0() {
   return (neuron0x2cf9a90()*0.148978);
}

double NNfunction_ns_chi01_sR::synapse0x2d0aa10() {
   return (neuron0x2cf9d40()*-4.54903);
}

double NNfunction_ns_chi01_sR::synapse0x2d0aa50() {
   return (neuron0x2cfa080()*1.82087);
}

double NNfunction_ns_chi01_sR::synapse0x2d0aa90() {
   return (neuron0x2cfa3c0()*-0.511925);
}

double NNfunction_ns_chi01_sR::synapse0x2d0b410() {
   return (neuron0x2cfa700()*-0.544829);
}

double NNfunction_ns_chi01_sR::synapse0x2d17760() {
   return (neuron0x2cfaa40()*0.327903);
}

double NNfunction_ns_chi01_sR::synapse0x2d177a0() {
   return (neuron0x2cfad80()*-0.403327);
}

double NNfunction_ns_chi01_sR::synapse0x2d177e0() {
   return (neuron0x2cfb0c0()*0.229844);
}

double NNfunction_ns_chi01_sR::synapse0x2d17820() {
   return (neuron0x2cfb400()*-0.809587);
}

double NNfunction_ns_chi01_sR::synapse0x2d17860() {
   return (neuron0x2cfb740()*0.00177984);
}

double NNfunction_ns_chi01_sR::synapse0x2d178a0() {
   return (neuron0x2cfba80()*-0.0272144);
}

double NNfunction_ns_chi01_sR::synapse0x2d178e0() {
   return (neuron0x2cfbdc0()*0.0226938);
}

double NNfunction_ns_chi01_sR::synapse0x2d17920() {
   return (neuron0x2cfc100()*-0.997688);
}

double NNfunction_ns_chi01_sR::synapse0x2d17960() {
   return (neuron0x2cfc440()*-0.135269);
}

double NNfunction_ns_chi01_sR::synapse0x2d179a0() {
   return (neuron0x2cfc780()*-0.370839);
}

double NNfunction_ns_chi01_sR::synapse0x2d179e0() {
   return (neuron0x2cfcac0()*0.398476);
}

double NNfunction_ns_chi01_sR::synapse0x2d0b2f0() {
   return (neuron0x2cfce00()*-0.243406);
}

double NNfunction_ns_chi01_sR::synapse0x2d0b330() {
   return (neuron0x2cfd360()*-0.35461);
}

double NNfunction_ns_chi01_sR::synapse0x2d17b30() {
   return (neuron0x2cfd6a0()*-0.459393);
}

double NNfunction_ns_chi01_sR::synapse0x2d17b70() {
   return (neuron0x2cfd9e0()*-0.0188487);
}

double NNfunction_ns_chi01_sR::synapse0x2d17bb0() {
   return (neuron0x2cfdd20()*-0.313659);
}

double NNfunction_ns_chi01_sR::synapse0x2d17bf0() {
   return (neuron0x2cfe060()*0.119432);
}

double NNfunction_ns_chi01_sR::synapse0x2d17c30() {
   return (neuron0x2cfe3a0()*0.180883);
}

double NNfunction_ns_chi01_sR::synapse0x2d17c70() {
   return (neuron0x2cfe6e0()*0.633626);
}

double NNfunction_ns_chi01_sR::synapse0x2d17ff0() {
   return (neuron0x2cf9a90()*0.0695471);
}

double NNfunction_ns_chi01_sR::synapse0x2d18030() {
   return (neuron0x2cf9d40()*4.7819);
}

double NNfunction_ns_chi01_sR::synapse0x2d18070() {
   return (neuron0x2cfa080()*-0.0286091);
}

double NNfunction_ns_chi01_sR::synapse0x2d180b0() {
   return (neuron0x2cfa3c0()*-0.00501208);
}

double NNfunction_ns_chi01_sR::synapse0x2d180f0() {
   return (neuron0x2cfa700()*0.0534995);
}

double NNfunction_ns_chi01_sR::synapse0x2d18130() {
   return (neuron0x2cfaa40()*0.0326504);
}

double NNfunction_ns_chi01_sR::synapse0x2d18170() {
   return (neuron0x2cfad80()*-0.0231986);
}

double NNfunction_ns_chi01_sR::synapse0x2d181b0() {
   return (neuron0x2cfb0c0()*-0.00759092);
}

double NNfunction_ns_chi01_sR::synapse0x2d181f0() {
   return (neuron0x2cfb400()*0.00156078);
}

double NNfunction_ns_chi01_sR::synapse0x2d18230() {
   return (neuron0x2cfb740()*-0.00666325);
}

double NNfunction_ns_chi01_sR::synapse0x2d18270() {
   return (neuron0x2cfba80()*0.0134907);
}

double NNfunction_ns_chi01_sR::synapse0x2d182b0() {
   return (neuron0x2cfbdc0()*-0.0153322);
}

double NNfunction_ns_chi01_sR::synapse0x2d182f0() {
   return (neuron0x2cfc100()*0.00825749);
}

double NNfunction_ns_chi01_sR::synapse0x2d18330() {
   return (neuron0x2cfc440()*-0.0241091);
}

double NNfunction_ns_chi01_sR::synapse0x2d18370() {
   return (neuron0x2cfc780()*-0.00223102);
}

double NNfunction_ns_chi01_sR::synapse0x2d183b0() {
   return (neuron0x2cfcac0()*0.0155539);
}

double NNfunction_ns_chi01_sR::synapse0x2d17e40() {
   return (neuron0x2cfce00()*0.00592353);
}

double NNfunction_ns_chi01_sR::synapse0x2d17e80() {
   return (neuron0x2cfd360()*-0.000141064);
}

double NNfunction_ns_chi01_sR::synapse0x2d18500() {
   return (neuron0x2cfd6a0()*-0.139468);
}

double NNfunction_ns_chi01_sR::synapse0x2d18540() {
   return (neuron0x2cfd9e0()*-0.0143067);
}

double NNfunction_ns_chi01_sR::synapse0x2d18580() {
   return (neuron0x2cfdd20()*0.0437124);
}

double NNfunction_ns_chi01_sR::synapse0x2d185c0() {
   return (neuron0x2cfe060()*-0.0108235);
}

double NNfunction_ns_chi01_sR::synapse0x2d18600() {
   return (neuron0x2cfe3a0()*0.0140543);
}

double NNfunction_ns_chi01_sR::synapse0x2d18640() {
   return (neuron0x2cfe6e0()*9.40229);
}

double NNfunction_ns_chi01_sR::synapse0x2d189c0() {
   return (neuron0x2cf9a90()*0.982949);
}

double NNfunction_ns_chi01_sR::synapse0x2d18a00() {
   return (neuron0x2cf9d40()*-0.332054);
}

double NNfunction_ns_chi01_sR::synapse0x2d18a40() {
   return (neuron0x2cfa080()*-0.39145);
}

double NNfunction_ns_chi01_sR::synapse0x2d18a80() {
   return (neuron0x2cfa3c0()*0.151648);
}

double NNfunction_ns_chi01_sR::synapse0x2d18ac0() {
   return (neuron0x2cfa700()*-0.141796);
}

double NNfunction_ns_chi01_sR::synapse0x2d18b00() {
   return (neuron0x2cfaa40()*-0.153744);
}

double NNfunction_ns_chi01_sR::synapse0x2d18b40() {
   return (neuron0x2cfad80()*0.0491793);
}

double NNfunction_ns_chi01_sR::synapse0x2d18b80() {
   return (neuron0x2cfb0c0()*-0.454882);
}

double NNfunction_ns_chi01_sR::synapse0x2d18bc0() {
   return (neuron0x2cfb400()*-0.96291);
}

double NNfunction_ns_chi01_sR::synapse0x2d18c00() {
   return (neuron0x2cfb740()*-1.06584);
}

double NNfunction_ns_chi01_sR::synapse0x2d18c40() {
   return (neuron0x2cfba80()*0.826779);
}

double NNfunction_ns_chi01_sR::synapse0x2d18c80() {
   return (neuron0x2cfbdc0()*-0.348155);
}

double NNfunction_ns_chi01_sR::synapse0x2d18cc0() {
   return (neuron0x2cfc100()*-0.197407);
}

double NNfunction_ns_chi01_sR::synapse0x2d18d00() {
   return (neuron0x2cfc440()*-0.493499);
}

double NNfunction_ns_chi01_sR::synapse0x2d18d40() {
   return (neuron0x2cfc780()*-0.0318623);
}

double NNfunction_ns_chi01_sR::synapse0x2d18d80() {
   return (neuron0x2cfcac0()*-0.50823);
}

double NNfunction_ns_chi01_sR::synapse0x2d18810() {
   return (neuron0x2cfce00()*-0.185078);
}

double NNfunction_ns_chi01_sR::synapse0x2d18850() {
   return (neuron0x2cfd360()*0.778018);
}

double NNfunction_ns_chi01_sR::synapse0x2d18ed0() {
   return (neuron0x2cfd6a0()*-0.0451878);
}

double NNfunction_ns_chi01_sR::synapse0x2d18f10() {
   return (neuron0x2cfd9e0()*-0.00162497);
}

double NNfunction_ns_chi01_sR::synapse0x2d18f50() {
   return (neuron0x2cfdd20()*-0.0164698);
}

double NNfunction_ns_chi01_sR::synapse0x2d18f90() {
   return (neuron0x2cfe060()*0.396525);
}

double NNfunction_ns_chi01_sR::synapse0x2d18fd0() {
   return (neuron0x2cfe3a0()*-0.160219);
}

double NNfunction_ns_chi01_sR::synapse0x2d19010() {
   return (neuron0x2cfe6e0()*0.106098);
}

double NNfunction_ns_chi01_sR::synapse0x2d19390() {
   return (neuron0x2cf9a90()*-0.141079);
}

double NNfunction_ns_chi01_sR::synapse0x2d193d0() {
   return (neuron0x2cf9d40()*-5.3404);
}

double NNfunction_ns_chi01_sR::synapse0x2d19410() {
   return (neuron0x2cfa080()*3.0573);
}

double NNfunction_ns_chi01_sR::synapse0x2d19450() {
   return (neuron0x2cfa3c0()*0.317084);
}

double NNfunction_ns_chi01_sR::synapse0x2d19490() {
   return (neuron0x2cfa700()*0.323029);
}

double NNfunction_ns_chi01_sR::synapse0x2d194d0() {
   return (neuron0x2cfaa40()*0.293004);
}

double NNfunction_ns_chi01_sR::synapse0x2d19510() {
   return (neuron0x2cfad80()*-0.126406);
}

double NNfunction_ns_chi01_sR::synapse0x2d19550() {
   return (neuron0x2cfb0c0()*-0.564444);
}

double NNfunction_ns_chi01_sR::synapse0x2d19590() {
   return (neuron0x2cfb400()*-0.262246);
}

double NNfunction_ns_chi01_sR::synapse0x2d195d0() {
   return (neuron0x2cfb740()*-0.334052);
}

double NNfunction_ns_chi01_sR::synapse0x2d19610() {
   return (neuron0x2cfba80()*-0.0866634);
}

double NNfunction_ns_chi01_sR::synapse0x2d19650() {
   return (neuron0x2cfbdc0()*-0.0736808);
}

double NNfunction_ns_chi01_sR::synapse0x2d19690() {
   return (neuron0x2cfc100()*0.301131);
}

double NNfunction_ns_chi01_sR::synapse0x2d196d0() {
   return (neuron0x2cfc440()*-0.292606);
}

double NNfunction_ns_chi01_sR::synapse0x2d19710() {
   return (neuron0x2cfc780()*-0.0912534);
}

double NNfunction_ns_chi01_sR::synapse0x2d19750() {
   return (neuron0x2cfcac0()*-0.221392);
}

double NNfunction_ns_chi01_sR::synapse0x2d191e0() {
   return (neuron0x2cfce00()*0.0464733);
}

double NNfunction_ns_chi01_sR::synapse0x2d19220() {
   return (neuron0x2cfd360()*0.167228);
}

double NNfunction_ns_chi01_sR::synapse0x2d198a0() {
   return (neuron0x2cfd6a0()*-1.56191);
}

double NNfunction_ns_chi01_sR::synapse0x2d198e0() {
   return (neuron0x2cfd9e0()*-0.0738431);
}

double NNfunction_ns_chi01_sR::synapse0x2d19920() {
   return (neuron0x2cfdd20()*0.0929397);
}

double NNfunction_ns_chi01_sR::synapse0x2d19960() {
   return (neuron0x2cfe060()*0.120295);
}

double NNfunction_ns_chi01_sR::synapse0x2d199a0() {
   return (neuron0x2cfe3a0()*0.0152647);
}

double NNfunction_ns_chi01_sR::synapse0x2d199e0() {
   return (neuron0x2cfe6e0()*-2.11675);
}

double NNfunction_ns_chi01_sR::synapse0x2d19d60() {
   return (neuron0x2cf9a90()*0.139089);
}

double NNfunction_ns_chi01_sR::synapse0x2d19da0() {
   return (neuron0x2cf9d40()*-0.0344946);
}

double NNfunction_ns_chi01_sR::synapse0x2d19de0() {
   return (neuron0x2cfa080()*0.109823);
}

double NNfunction_ns_chi01_sR::synapse0x2d19e20() {
   return (neuron0x2cfa3c0()*0.350305);
}

double NNfunction_ns_chi01_sR::synapse0x2d19e60() {
   return (neuron0x2cfa700()*-0.0170357);
}

double NNfunction_ns_chi01_sR::synapse0x2d19ea0() {
   return (neuron0x2cfaa40()*-0.220879);
}

double NNfunction_ns_chi01_sR::synapse0x2d19ee0() {
   return (neuron0x2cfad80()*-0.295595);
}

double NNfunction_ns_chi01_sR::synapse0x2d19f20() {
   return (neuron0x2cfb0c0()*0.0201431);
}

double NNfunction_ns_chi01_sR::synapse0x2d19f60() {
   return (neuron0x2cfb400()*0.142805);
}

double NNfunction_ns_chi01_sR::synapse0x2d19fa0() {
   return (neuron0x2cfb740()*0.0307853);
}

double NNfunction_ns_chi01_sR::synapse0x2d19fe0() {
   return (neuron0x2cfba80()*0.15461);
}

double NNfunction_ns_chi01_sR::synapse0x2d1a020() {
   return (neuron0x2cfbdc0()*-0.0839371);
}

double NNfunction_ns_chi01_sR::synapse0x2d1a060() {
   return (neuron0x2cfc100()*0.147484);
}

double NNfunction_ns_chi01_sR::synapse0x2d1a0a0() {
   return (neuron0x2cfc440()*-0.130545);
}

double NNfunction_ns_chi01_sR::synapse0x2d1a0e0() {
   return (neuron0x2cfc780()*1.44565);
}

double NNfunction_ns_chi01_sR::synapse0x2d1a120() {
   return (neuron0x2cfcac0()*-0.515866);
}

double NNfunction_ns_chi01_sR::synapse0x2d19bb0() {
   return (neuron0x2cfce00()*0.00785754);
}

double NNfunction_ns_chi01_sR::synapse0x2d19bf0() {
   return (neuron0x2cfd360()*0.0874305);
}

double NNfunction_ns_chi01_sR::synapse0x2d1a270() {
   return (neuron0x2cfd6a0()*-0.71078);
}

double NNfunction_ns_chi01_sR::synapse0x2d1a2b0() {
   return (neuron0x2cfd9e0()*-0.349357);
}

double NNfunction_ns_chi01_sR::synapse0x2d1a2f0() {
   return (neuron0x2cfdd20()*-0.138928);
}

double NNfunction_ns_chi01_sR::synapse0x2d1a330() {
   return (neuron0x2cfe060()*0.0620284);
}

double NNfunction_ns_chi01_sR::synapse0x2d1a370() {
   return (neuron0x2cfe3a0()*-0.128829);
}

double NNfunction_ns_chi01_sR::synapse0x2d1a3b0() {
   return (neuron0x2cfe6e0()*-0.26143);
}

double NNfunction_ns_chi01_sR::synapse0x2d1a730() {
   return (neuron0x2cf9a90()*-0.14523);
}

double NNfunction_ns_chi01_sR::synapse0x2d1a770() {
   return (neuron0x2cf9d40()*0.0314558);
}

double NNfunction_ns_chi01_sR::synapse0x2d1a7b0() {
   return (neuron0x2cfa080()*-0.0714056);
}

double NNfunction_ns_chi01_sR::synapse0x2d1a7f0() {
   return (neuron0x2cfa3c0()*-0.00160594);
}

double NNfunction_ns_chi01_sR::synapse0x2d1a830() {
   return (neuron0x2cfa700()*-0.0257256);
}

double NNfunction_ns_chi01_sR::synapse0x2d1a870() {
   return (neuron0x2cfaa40()*-0.0301449);
}

double NNfunction_ns_chi01_sR::synapse0x2d1a8b0() {
   return (neuron0x2cfad80()*-0.0209215);
}

double NNfunction_ns_chi01_sR::synapse0x2d1a8f0() {
   return (neuron0x2cfb0c0()*-0.0318521);
}

double NNfunction_ns_chi01_sR::synapse0x2d1a930() {
   return (neuron0x2cfb400()*0.0298642);
}

double NNfunction_ns_chi01_sR::synapse0x2d1a970() {
   return (neuron0x2cfb740()*-0.0494914);
}

double NNfunction_ns_chi01_sR::synapse0x2d1a9b0() {
   return (neuron0x2cfba80()*-0.0116282);
}

double NNfunction_ns_chi01_sR::synapse0x2d1a9f0() {
   return (neuron0x2cfbdc0()*0.0346847);
}

double NNfunction_ns_chi01_sR::synapse0x2d1aa30() {
   return (neuron0x2cfc100()*0.0322834);
}

double NNfunction_ns_chi01_sR::synapse0x2d1aa70() {
   return (neuron0x2cfc440()*-0.00126504);
}

double NNfunction_ns_chi01_sR::synapse0x2d1aab0() {
   return (neuron0x2cfc780()*0.0551956);
}

double NNfunction_ns_chi01_sR::synapse0x2d1aaf0() {
   return (neuron0x2cfcac0()*-0.0605316);
}

double NNfunction_ns_chi01_sR::synapse0x2d1a580() {
   return (neuron0x2cfce00()*0.0103671);
}

double NNfunction_ns_chi01_sR::synapse0x2d1a5c0() {
   return (neuron0x2cfd360()*0.0298317);
}

double NNfunction_ns_chi01_sR::synapse0x2d1ac40() {
   return (neuron0x2cfd6a0()*-0.392919);
}

double NNfunction_ns_chi01_sR::synapse0x2d1ac80() {
   return (neuron0x2cfd9e0()*0.00382555);
}

double NNfunction_ns_chi01_sR::synapse0x2d1acc0() {
   return (neuron0x2cfdd20()*-0.0131706);
}

double NNfunction_ns_chi01_sR::synapse0x2d1ad00() {
   return (neuron0x2cfe060()*-0.0103808);
}

double NNfunction_ns_chi01_sR::synapse0x2d1ad40() {
   return (neuron0x2cfe3a0()*-0.0222843);
}

double NNfunction_ns_chi01_sR::synapse0x2d1ad80() {
   return (neuron0x2cfe6e0()*-5.95466);
}

double NNfunction_ns_chi01_sR::synapse0x2d1b100() {
   return (neuron0x2cf9a90()*-0.00548549);
}

double NNfunction_ns_chi01_sR::synapse0x2d1b140() {
   return (neuron0x2cf9d40()*0.0317422);
}

double NNfunction_ns_chi01_sR::synapse0x2d1b180() {
   return (neuron0x2cfa080()*0.0106587);
}

double NNfunction_ns_chi01_sR::synapse0x2d1b1c0() {
   return (neuron0x2cfa3c0()*-3.2441);
}

double NNfunction_ns_chi01_sR::synapse0x2d1b200() {
   return (neuron0x2cfa700()*0.016488);
}

double NNfunction_ns_chi01_sR::synapse0x2d1b240() {
   return (neuron0x2cfaa40()*0.0195841);
}

double NNfunction_ns_chi01_sR::synapse0x2d1b280() {
   return (neuron0x2cfad80()*0.0158544);
}

double NNfunction_ns_chi01_sR::synapse0x2d1b2c0() {
   return (neuron0x2cfb0c0()*0.00137186);
}

double NNfunction_ns_chi01_sR::synapse0x2d1b300() {
   return (neuron0x2cfb400()*-0.02098);
}

double NNfunction_ns_chi01_sR::synapse0x2d1b340() {
   return (neuron0x2cfb740()*-0.0121091);
}

double NNfunction_ns_chi01_sR::synapse0x2d1b380() {
   return (neuron0x2cfba80()*0.0149199);
}

double NNfunction_ns_chi01_sR::synapse0x2d1b3c0() {
   return (neuron0x2cfbdc0()*-0.0177007);
}

double NNfunction_ns_chi01_sR::synapse0x2d1b400() {
   return (neuron0x2cfc100()*-0.003364);
}

double NNfunction_ns_chi01_sR::synapse0x2d1b440() {
   return (neuron0x2cfc440()*-0.0181152);
}

double NNfunction_ns_chi01_sR::synapse0x2d1b480() {
   return (neuron0x2cfc780()*0.0105401);
}

double NNfunction_ns_chi01_sR::synapse0x2d1b4c0() {
   return (neuron0x2cfcac0()*-0.00742899);
}

double NNfunction_ns_chi01_sR::synapse0x2d1af50() {
   return (neuron0x2cfce00()*-0.00546596);
}

double NNfunction_ns_chi01_sR::synapse0x2d1af90() {
   return (neuron0x2cfd360()*0.015596);
}

double NNfunction_ns_chi01_sR::synapse0x2d1b610() {
   return (neuron0x2cfd6a0()*-0.194436);
}

double NNfunction_ns_chi01_sR::synapse0x2d1b650() {
   return (neuron0x2cfd9e0()*-0.0134247);
}

double NNfunction_ns_chi01_sR::synapse0x2d1b690() {
   return (neuron0x2cfdd20()*-0.00889797);
}

double NNfunction_ns_chi01_sR::synapse0x2d1b6d0() {
   return (neuron0x2cfe060()*0.00972144);
}

double NNfunction_ns_chi01_sR::synapse0x2d1b710() {
   return (neuron0x2cfe3a0()*0.015155);
}

double NNfunction_ns_chi01_sR::synapse0x2d1b750() {
   return (neuron0x2cfe6e0()*-0.0234929);
}

double NNfunction_ns_chi01_sR::synapse0x2d1bad0() {
   return (neuron0x2cf9a90()*-0.10183);
}

double NNfunction_ns_chi01_sR::synapse0x2d1bb10() {
   return (neuron0x2cf9d40()*-0.119725);
}

double NNfunction_ns_chi01_sR::synapse0x2d1bb50() {
   return (neuron0x2cfa080()*-0.250115);
}

double NNfunction_ns_chi01_sR::synapse0x2d1bb90() {
   return (neuron0x2cfa3c0()*0.132651);
}

double NNfunction_ns_chi01_sR::synapse0x2d1bbd0() {
   return (neuron0x2cfa700()*-0.311859);
}

double NNfunction_ns_chi01_sR::synapse0x2d1bc10() {
   return (neuron0x2cfaa40()*-0.161377);
}

double NNfunction_ns_chi01_sR::synapse0x2d1bc50() {
   return (neuron0x2cfad80()*-0.340914);
}

double NNfunction_ns_chi01_sR::synapse0x2d1bc90() {
   return (neuron0x2cfb0c0()*0.286067);
}

double NNfunction_ns_chi01_sR::synapse0x2d1bcd0() {
   return (neuron0x2cfb400()*-0.0230255);
}

double NNfunction_ns_chi01_sR::synapse0x2d1bd10() {
   return (neuron0x2cfb740()*0.663237);
}

double NNfunction_ns_chi01_sR::synapse0x2d1bd50() {
   return (neuron0x2cfba80()*0.548045);
}

double NNfunction_ns_chi01_sR::synapse0x2d1bd90() {
   return (neuron0x2cfbdc0()*0.0437757);
}

double NNfunction_ns_chi01_sR::synapse0x2d1bdd0() {
   return (neuron0x2cfc100()*0.00512856);
}

double NNfunction_ns_chi01_sR::synapse0x2d1be10() {
   return (neuron0x2cfc440()*0.196037);
}

double NNfunction_ns_chi01_sR::synapse0x2d1be50() {
   return (neuron0x2cfc780()*-0.641725);
}

double NNfunction_ns_chi01_sR::synapse0x2d1be90() {
   return (neuron0x2cfcac0()*-0.986326);
}

double NNfunction_ns_chi01_sR::synapse0x2d1b920() {
   return (neuron0x2cfce00()*0.144499);
}

double NNfunction_ns_chi01_sR::synapse0x2d1b960() {
   return (neuron0x2cfd360()*0.108147);
}

double NNfunction_ns_chi01_sR::synapse0x2d1bfe0() {
   return (neuron0x2cfd6a0()*-1.05432);
}

double NNfunction_ns_chi01_sR::synapse0x2d1c020() {
   return (neuron0x2cfd9e0()*-0.0518816);
}

double NNfunction_ns_chi01_sR::synapse0x2d1c060() {
   return (neuron0x2cfdd20()*-0.0747202);
}

double NNfunction_ns_chi01_sR::synapse0x2d1c0a0() {
   return (neuron0x2cfe060()*0.195633);
}

double NNfunction_ns_chi01_sR::synapse0x2d1c0e0() {
   return (neuron0x2cfe3a0()*-0.0646779);
}

double NNfunction_ns_chi01_sR::synapse0x2d1c120() {
   return (neuron0x2cfe6e0()*-0.252558);
}

double NNfunction_ns_chi01_sR::synapse0x2d04bd0() {
   return (neuron0x2cf9a90()*-0.88515);
}

double NNfunction_ns_chi01_sR::synapse0x2d04c10() {
   return (neuron0x2cf9d40()*-4.06297);
}

double NNfunction_ns_chi01_sR::synapse0x2d04c50() {
   return (neuron0x2cfa080()*0.708579);
}

double NNfunction_ns_chi01_sR::synapse0x2d04c90() {
   return (neuron0x2cfa3c0()*0.246524);
}

double NNfunction_ns_chi01_sR::synapse0x2d04cd0() {
   return (neuron0x2cfa700()*-0.576567);
}

double NNfunction_ns_chi01_sR::synapse0x2d04d10() {
   return (neuron0x2cfaa40()*0.0827772);
}

double NNfunction_ns_chi01_sR::synapse0x2d04d50() {
   return (neuron0x2cfad80()*-0.332249);
}

double NNfunction_ns_chi01_sR::synapse0x2d04d90() {
   return (neuron0x2cfb0c0()*-0.524665);
}

double NNfunction_ns_chi01_sR::synapse0x2d1c8b0() {
   return (neuron0x2cfb400()*0.628756);
}

double NNfunction_ns_chi01_sR::synapse0x2d1c8f0() {
   return (neuron0x2cfb740()*0.593532);
}

double NNfunction_ns_chi01_sR::synapse0x2d1c930() {
   return (neuron0x2cfba80()*0.61462);
}

double NNfunction_ns_chi01_sR::synapse0x2d1c970() {
   return (neuron0x2cfbdc0()*0.116808);
}

double NNfunction_ns_chi01_sR::synapse0x2d1c9b0() {
   return (neuron0x2cfc100()*0.219262);
}

double NNfunction_ns_chi01_sR::synapse0x2d1c9f0() {
   return (neuron0x2cfc440()*-0.0668706);
}

double NNfunction_ns_chi01_sR::synapse0x2d1ca30() {
   return (neuron0x2cfc780()*0.350847);
}

double NNfunction_ns_chi01_sR::synapse0x2d1ca70() {
   return (neuron0x2cfcac0()*-0.39746);
}

double NNfunction_ns_chi01_sR::synapse0x2d1c2f0() {
   return (neuron0x2cfce00()*-0.580463);
}

double NNfunction_ns_chi01_sR::synapse0x2d1c330() {
   return (neuron0x2cfd360()*0.117089);
}

double NNfunction_ns_chi01_sR::synapse0x2d1cbc0() {
   return (neuron0x2cfd6a0()*-1.04864);
}

double NNfunction_ns_chi01_sR::synapse0x2d1cc00() {
   return (neuron0x2cfd9e0()*0.224545);
}

double NNfunction_ns_chi01_sR::synapse0x2d1cc40() {
   return (neuron0x2cfdd20()*-0.0412466);
}

double NNfunction_ns_chi01_sR::synapse0x2d1cc80() {
   return (neuron0x2cfe060()*-0.502853);
}

double NNfunction_ns_chi01_sR::synapse0x2d1ccc0() {
   return (neuron0x2cfe3a0()*-0.0790148);
}

double NNfunction_ns_chi01_sR::synapse0x2d1cd00() {
   return (neuron0x2cfe6e0()*-0.209766);
}

double NNfunction_ns_chi01_sR::synapse0x2d1d080() {
   return (neuron0x2cf9a90()*0.207056);
}

double NNfunction_ns_chi01_sR::synapse0x2d1d0c0() {
   return (neuron0x2cf9d40()*-0.204047);
}

double NNfunction_ns_chi01_sR::synapse0x2d1d100() {
   return (neuron0x2cfa080()*-1.08832);
}

double NNfunction_ns_chi01_sR::synapse0x2d1d140() {
   return (neuron0x2cfa3c0()*-0.627443);
}

double NNfunction_ns_chi01_sR::synapse0x2d1d180() {
   return (neuron0x2cfa700()*-0.0217589);
}

double NNfunction_ns_chi01_sR::synapse0x2d1d1c0() {
   return (neuron0x2cfaa40()*-0.377328);
}

double NNfunction_ns_chi01_sR::synapse0x2d1d200() {
   return (neuron0x2cfad80()*-0.673188);
}

double NNfunction_ns_chi01_sR::synapse0x2d1d240() {
   return (neuron0x2cfb0c0()*-0.151431);
}

double NNfunction_ns_chi01_sR::synapse0x2d1d280() {
   return (neuron0x2cfb400()*-0.509735);
}

double NNfunction_ns_chi01_sR::synapse0x2d1d2c0() {
   return (neuron0x2cfb740()*1.27244);
}

double NNfunction_ns_chi01_sR::synapse0x2d1d300() {
   return (neuron0x2cfba80()*-1.02569);
}

double NNfunction_ns_chi01_sR::synapse0x2d1d340() {
   return (neuron0x2cfbdc0()*-0.627932);
}

double NNfunction_ns_chi01_sR::synapse0x2d1d380() {
   return (neuron0x2cfc100()*0.596627);
}

double NNfunction_ns_chi01_sR::synapse0x2d1d3c0() {
   return (neuron0x2cfc440()*-0.709471);
}

double NNfunction_ns_chi01_sR::synapse0x2d1d400() {
   return (neuron0x2cfc780()*0.639382);
}

double NNfunction_ns_chi01_sR::synapse0x2d1d440() {
   return (neuron0x2cfcac0()*0.886172);
}

double NNfunction_ns_chi01_sR::synapse0x2d1ced0() {
   return (neuron0x2cfce00()*-0.26591);
}

double NNfunction_ns_chi01_sR::synapse0x2d1cf10() {
   return (neuron0x2cfd360()*-0.566715);
}

double NNfunction_ns_chi01_sR::synapse0x2d1d590() {
   return (neuron0x2cfd6a0()*-1.68337);
}

double NNfunction_ns_chi01_sR::synapse0x2d1d5d0() {
   return (neuron0x2cfd9e0()*-1.31446);
}

double NNfunction_ns_chi01_sR::synapse0x2d1d610() {
   return (neuron0x2cfdd20()*1.81945);
}

double NNfunction_ns_chi01_sR::synapse0x2d1d650() {
   return (neuron0x2cfe060()*0.167252);
}

double NNfunction_ns_chi01_sR::synapse0x2d1d690() {
   return (neuron0x2cfe3a0()*-1.47697);
}

double NNfunction_ns_chi01_sR::synapse0x2d1d6d0() {
   return (neuron0x2cfe6e0()*-0.268355);
}

double NNfunction_ns_chi01_sR::synapse0x2d1da50() {
   return (neuron0x2cf9a90()*0.095047);
}

double NNfunction_ns_chi01_sR::synapse0x2d1da90() {
   return (neuron0x2cf9d40()*5.90806);
}

double NNfunction_ns_chi01_sR::synapse0x2d1dad0() {
   return (neuron0x2cfa080()*-3.2793);
}

double NNfunction_ns_chi01_sR::synapse0x2d1db10() {
   return (neuron0x2cfa3c0()*0.126403);
}

double NNfunction_ns_chi01_sR::synapse0x2d1db50() {
   return (neuron0x2cfa700()*-0.336601);
}

double NNfunction_ns_chi01_sR::synapse0x2d1db90() {
   return (neuron0x2cfaa40()*0.222449);
}

double NNfunction_ns_chi01_sR::synapse0x2d1dbd0() {
   return (neuron0x2cfad80()*-0.352569);
}

double NNfunction_ns_chi01_sR::synapse0x2d1dc10() {
   return (neuron0x2cfb0c0()*-0.595025);
}

double NNfunction_ns_chi01_sR::synapse0x2d1dc50() {
   return (neuron0x2cfb400()*-0.0599369);
}

double NNfunction_ns_chi01_sR::synapse0x2d1dc90() {
   return (neuron0x2cfb740()*0.0703859);
}

double NNfunction_ns_chi01_sR::synapse0x2d1dcd0() {
   return (neuron0x2cfba80()*0.0828861);
}

double NNfunction_ns_chi01_sR::synapse0x2d1dd10() {
   return (neuron0x2cfbdc0()*0.0157301);
}

double NNfunction_ns_chi01_sR::synapse0x2d1dd50() {
   return (neuron0x2cfc100()*0.159968);
}

double NNfunction_ns_chi01_sR::synapse0x2d1dd90() {
   return (neuron0x2cfc440()*-0.240827);
}

double NNfunction_ns_chi01_sR::synapse0x2d1ddd0() {
   return (neuron0x2cfc780()*-0.0814877);
}

double NNfunction_ns_chi01_sR::synapse0x2d1de10() {
   return (neuron0x2cfcac0()*-0.0157623);
}

double NNfunction_ns_chi01_sR::synapse0x2d1d8a0() {
   return (neuron0x2cfce00()*-0.140935);
}

double NNfunction_ns_chi01_sR::synapse0x2d1d8e0() {
   return (neuron0x2cfd360()*-0.0650605);
}

double NNfunction_ns_chi01_sR::synapse0x2d0e410() {
   return (neuron0x2cfd6a0()*-1.38497);
}

double NNfunction_ns_chi01_sR::synapse0x2d0e450() {
   return (neuron0x2cfd9e0()*0.155854);
}

double NNfunction_ns_chi01_sR::synapse0x2d0e490() {
   return (neuron0x2cfdd20()*0.120028);
}

double NNfunction_ns_chi01_sR::synapse0x2d0e4d0() {
   return (neuron0x2cfe060()*0.16702);
}

double NNfunction_ns_chi01_sR::synapse0x2d0e510() {
   return (neuron0x2cfe3a0()*-0.117783);
}

double NNfunction_ns_chi01_sR::synapse0x2d0e550() {
   return (neuron0x2cfe6e0()*0.104404);
}

double NNfunction_ns_chi01_sR::synapse0x2d0e8d0() {
   return (neuron0x2cf9a90()*-0.0397774);
}

double NNfunction_ns_chi01_sR::synapse0x2d0e910() {
   return (neuron0x2cf9d40()*1.20209);
}

double NNfunction_ns_chi01_sR::synapse0x2d0e950() {
   return (neuron0x2cfa080()*-0.0548847);
}

double NNfunction_ns_chi01_sR::synapse0x2d0e990() {
   return (neuron0x2cfa3c0()*-0.0609074);
}

double NNfunction_ns_chi01_sR::synapse0x2d0e9d0() {
   return (neuron0x2cfa700()*-0.0650059);
}

double NNfunction_ns_chi01_sR::synapse0x2d0ea10() {
   return (neuron0x2cfaa40()*-0.0083499);
}

double NNfunction_ns_chi01_sR::synapse0x2d0ea50() {
   return (neuron0x2cfad80()*-0.0413059);
}

double NNfunction_ns_chi01_sR::synapse0x2d0ea90() {
   return (neuron0x2cfb0c0()*-0.054565);
}

double NNfunction_ns_chi01_sR::synapse0x2d0ead0() {
   return (neuron0x2cfb400()*0.0410944);
}

double NNfunction_ns_chi01_sR::synapse0x2d0eb10() {
   return (neuron0x2cfb740()*0.0610371);
}

double NNfunction_ns_chi01_sR::synapse0x2d0eb50() {
   return (neuron0x2cfba80()*0.0681673);
}

double NNfunction_ns_chi01_sR::synapse0x2d0eb90() {
   return (neuron0x2cfbdc0()*-0.0362524);
}

double NNfunction_ns_chi01_sR::synapse0x2d0ebd0() {
   return (neuron0x2cfc100()*0.00968214);
}

double NNfunction_ns_chi01_sR::synapse0x2d0ec10() {
   return (neuron0x2cfc440()*-0.0291408);
}

double NNfunction_ns_chi01_sR::synapse0x2d0ec50() {
   return (neuron0x2cfc780()*-0.0373034);
}

double NNfunction_ns_chi01_sR::synapse0x2d0ec90() {
   return (neuron0x2cfcac0()*-0.0401139);
}

double NNfunction_ns_chi01_sR::synapse0x2d0e720() {
   return (neuron0x2cfce00()*-0.0184807);
}

double NNfunction_ns_chi01_sR::synapse0x2d0e760() {
   return (neuron0x2cfd360()*0.0237763);
}

double NNfunction_ns_chi01_sR::synapse0x2d0ede0() {
   return (neuron0x2cfd6a0()*-1.35708);
}

double NNfunction_ns_chi01_sR::synapse0x2d0ee20() {
   return (neuron0x2cfd9e0()*0.0956519);
}

double NNfunction_ns_chi01_sR::synapse0x2d0ee60() {
   return (neuron0x2cfdd20()*0.0222054);
}

double NNfunction_ns_chi01_sR::synapse0x2d0eea0() {
   return (neuron0x2cfe060()*0.00423708);
}

double NNfunction_ns_chi01_sR::synapse0x2d0eee0() {
   return (neuron0x2cfe3a0()*-0.0318573);
}

double NNfunction_ns_chi01_sR::synapse0x2d0ef20() {
   return (neuron0x2cfe6e0()*0.00222093);
}

double NNfunction_ns_chi01_sR::synapse0x2d0f2a0() {
   return (neuron0x2cf9a90()*0.39973);
}

double NNfunction_ns_chi01_sR::synapse0x2d0f2e0() {
   return (neuron0x2cf9d40()*-0.832938);
}

double NNfunction_ns_chi01_sR::synapse0x2d0f320() {
   return (neuron0x2cfa080()*-1.29086);
}

double NNfunction_ns_chi01_sR::synapse0x2d0f360() {
   return (neuron0x2cfa3c0()*0.928791);
}

double NNfunction_ns_chi01_sR::synapse0x2d0f3a0() {
   return (neuron0x2cfa700()*0.659742);
}

double NNfunction_ns_chi01_sR::synapse0x2d0f3e0() {
   return (neuron0x2cfaa40()*0.837456);
}

double NNfunction_ns_chi01_sR::synapse0x2d0f420() {
   return (neuron0x2cfad80()*-0.0800376);
}

double NNfunction_ns_chi01_sR::synapse0x2d0f460() {
   return (neuron0x2cfb0c0()*0.198122);
}

double NNfunction_ns_chi01_sR::synapse0x2d0f4a0() {
   return (neuron0x2cfb400()*-0.164873);
}

double NNfunction_ns_chi01_sR::synapse0x2d0f4e0() {
   return (neuron0x2cfb740()*0.112459);
}

double NNfunction_ns_chi01_sR::synapse0x2d0f520() {
   return (neuron0x2cfba80()*-0.229692);
}

double NNfunction_ns_chi01_sR::synapse0x2d0f560() {
   return (neuron0x2cfbdc0()*-0.072468);
}

double NNfunction_ns_chi01_sR::synapse0x2d0f5a0() {
   return (neuron0x2cfc100()*0.757894);
}

double NNfunction_ns_chi01_sR::synapse0x2d0f5e0() {
   return (neuron0x2cfc440()*0.461639);
}

double NNfunction_ns_chi01_sR::synapse0x2d0f620() {
   return (neuron0x2cfc780()*0.202301);
}

double NNfunction_ns_chi01_sR::synapse0x2d0f660() {
   return (neuron0x2cfcac0()*0.288998);
}

double NNfunction_ns_chi01_sR::synapse0x2d0f0f0() {
   return (neuron0x2cfce00()*0.262784);
}

double NNfunction_ns_chi01_sR::synapse0x2d0f130() {
   return (neuron0x2cfd360()*0.0431744);
}

double NNfunction_ns_chi01_sR::synapse0x2d0f7b0() {
   return (neuron0x2cfd6a0()*-0.839275);
}

double NNfunction_ns_chi01_sR::synapse0x2d0f7f0() {
   return (neuron0x2cfd9e0()*-0.369818);
}

double NNfunction_ns_chi01_sR::synapse0x2d0f830() {
   return (neuron0x2cfdd20()*0.591295);
}

double NNfunction_ns_chi01_sR::synapse0x2d0f870() {
   return (neuron0x2cfe060()*0.495818);
}

double NNfunction_ns_chi01_sR::synapse0x2d0f8b0() {
   return (neuron0x2cfe3a0()*0.0158079);
}

double NNfunction_ns_chi01_sR::synapse0x2d0f8f0() {
   return (neuron0x2cfe6e0()*0.168168);
}

double NNfunction_ns_chi01_sR::synapse0x2d0fc70() {
   return (neuron0x2cf9a90()*-2.36673);
}

double NNfunction_ns_chi01_sR::synapse0x2d0fcb0() {
   return (neuron0x2cf9d40()*-1.41838);
}

double NNfunction_ns_chi01_sR::synapse0x2d0fcf0() {
   return (neuron0x2cfa080()*0.196096);
}

double NNfunction_ns_chi01_sR::synapse0x2d0fd30() {
   return (neuron0x2cfa3c0()*0.0338761);
}

double NNfunction_ns_chi01_sR::synapse0x2d0fd70() {
   return (neuron0x2cfa700()*0.797561);
}

double NNfunction_ns_chi01_sR::synapse0x2d0fdb0() {
   return (neuron0x2cfaa40()*0.048017);
}

double NNfunction_ns_chi01_sR::synapse0x2d0fdf0() {
   return (neuron0x2cfad80()*-1.42235);
}

double NNfunction_ns_chi01_sR::synapse0x2d0fe30() {
   return (neuron0x2cfb0c0()*-0.0618289);
}

double NNfunction_ns_chi01_sR::synapse0x2d0fe70() {
   return (neuron0x2cfb400()*-0.840296);
}

double NNfunction_ns_chi01_sR::synapse0x2d0feb0() {
   return (neuron0x2cfb740()*-0.430787);
}

double NNfunction_ns_chi01_sR::synapse0x2d0fef0() {
   return (neuron0x2cfba80()*1.40737);
}

double NNfunction_ns_chi01_sR::synapse0x2d0ff30() {
   return (neuron0x2cfbdc0()*0.648626);
}

double NNfunction_ns_chi01_sR::synapse0x2d0ff70() {
   return (neuron0x2cfc100()*0.0395752);
}

double NNfunction_ns_chi01_sR::synapse0x2d0ffb0() {
   return (neuron0x2cfc440()*-0.499031);
}

double NNfunction_ns_chi01_sR::synapse0x2d0fff0() {
   return (neuron0x2cfc780()*-1.42196);
}

double NNfunction_ns_chi01_sR::synapse0x2d10030() {
   return (neuron0x2cfcac0()*-1.19856);
}

double NNfunction_ns_chi01_sR::synapse0x2d0fac0() {
   return (neuron0x2cfce00()*-0.541284);
}

double NNfunction_ns_chi01_sR::synapse0x2d0fb00() {
   return (neuron0x2cfd360()*0.644723);
}

double NNfunction_ns_chi01_sR::synapse0x2d10180() {
   return (neuron0x2cfd6a0()*-0.37543);
}

double NNfunction_ns_chi01_sR::synapse0x2d101c0() {
   return (neuron0x2cfd9e0()*-0.884074);
}

double NNfunction_ns_chi01_sR::synapse0x2d10200() {
   return (neuron0x2cfdd20()*0.0494166);
}

double NNfunction_ns_chi01_sR::synapse0x2d10240() {
   return (neuron0x2cfe060()*0.313184);
}

double NNfunction_ns_chi01_sR::synapse0x2d10280() {
   return (neuron0x2cfe3a0()*0.788905);
}

double NNfunction_ns_chi01_sR::synapse0x2d102c0() {
   return (neuron0x2cfe6e0()*0.266466);
}

double NNfunction_ns_chi01_sR::synapse0x2d22190() {
   return (neuron0x2cf9a90()*-0.0471411);
}

double NNfunction_ns_chi01_sR::synapse0x2d221d0() {
   return (neuron0x2cf9d40()*3.79653);
}

double NNfunction_ns_chi01_sR::synapse0x2d22210() {
   return (neuron0x2cfa080()*-11.2417);
}

double NNfunction_ns_chi01_sR::synapse0x2d22250() {
   return (neuron0x2cfa3c0()*0.0437647);
}

double NNfunction_ns_chi01_sR::synapse0x2d22290() {
   return (neuron0x2cfa700()*0.0242156);
}

double NNfunction_ns_chi01_sR::synapse0x2d222d0() {
   return (neuron0x2cfaa40()*0.00604461);
}

double NNfunction_ns_chi01_sR::synapse0x2d22310() {
   return (neuron0x2cfad80()*0.036283);
}

double NNfunction_ns_chi01_sR::synapse0x2d22350() {
   return (neuron0x2cfb0c0()*0.0740179);
}

double NNfunction_ns_chi01_sR::synapse0x2d22390() {
   return (neuron0x2cfb400()*0.015297);
}

double NNfunction_ns_chi01_sR::synapse0x2d223d0() {
   return (neuron0x2cfb740()*-0.00370043);
}

double NNfunction_ns_chi01_sR::synapse0x2d22410() {
   return (neuron0x2cfba80()*0.00682966);
}

double NNfunction_ns_chi01_sR::synapse0x2d22450() {
   return (neuron0x2cfbdc0()*-0.0283633);
}

double NNfunction_ns_chi01_sR::synapse0x2d22490() {
   return (neuron0x2cfc100()*0.000842546);
}

double NNfunction_ns_chi01_sR::synapse0x2d224d0() {
   return (neuron0x2cfc440()*0.039768);
}

double NNfunction_ns_chi01_sR::synapse0x2d22510() {
   return (neuron0x2cfc780()*0.0517092);
}

double NNfunction_ns_chi01_sR::synapse0x2d22550() {
   return (neuron0x2cfcac0()*0.066076);
}

double NNfunction_ns_chi01_sR::synapse0x2d10300() {
   return (neuron0x2cfce00()*-0.0249383);
}

double NNfunction_ns_chi01_sR::synapse0x2d10340() {
   return (neuron0x2cfd360()*-0.106389);
}

double NNfunction_ns_chi01_sR::synapse0x2d226a0() {
   return (neuron0x2cfd6a0()*-0.403429);
}

double NNfunction_ns_chi01_sR::synapse0x2d226e0() {
   return (neuron0x2cfd9e0()*-0.0135877);
}

double NNfunction_ns_chi01_sR::synapse0x2d22720() {
   return (neuron0x2cfdd20()*-0.0686753);
}

double NNfunction_ns_chi01_sR::synapse0x2d22760() {
   return (neuron0x2cfe060()*-0.00248502);
}

double NNfunction_ns_chi01_sR::synapse0x2d227a0() {
   return (neuron0x2cfe3a0()*0.0101845);
}

double NNfunction_ns_chi01_sR::synapse0x2d227e0() {
   return (neuron0x2cfe6e0()*0.0737041);
}

double NNfunction_ns_chi01_sR::synapse0x2d22b60() {
   return (neuron0x2cf9a90()*-0.0258506);
}

double NNfunction_ns_chi01_sR::synapse0x2d22ba0() {
   return (neuron0x2cf9d40()*-0.0552324);
}

double NNfunction_ns_chi01_sR::synapse0x2d22be0() {
   return (neuron0x2cfa080()*-0.949648);
}

double NNfunction_ns_chi01_sR::synapse0x2d22c20() {
   return (neuron0x2cfa3c0()*1.22337);
}

double NNfunction_ns_chi01_sR::synapse0x2d22c60() {
   return (neuron0x2cfa700()*-0.0950679);
}

double NNfunction_ns_chi01_sR::synapse0x2d22ca0() {
   return (neuron0x2cfaa40()*0.468117);
}

double NNfunction_ns_chi01_sR::synapse0x2d22ce0() {
   return (neuron0x2cfad80()*-0.405007);
}

double NNfunction_ns_chi01_sR::synapse0x2d22d20() {
   return (neuron0x2cfb0c0()*-0.929854);
}

double NNfunction_ns_chi01_sR::synapse0x2d22d60() {
   return (neuron0x2cfb400()*-0.849312);
}

double NNfunction_ns_chi01_sR::synapse0x2d22da0() {
   return (neuron0x2cfb740()*-0.352331);
}

double NNfunction_ns_chi01_sR::synapse0x2d22de0() {
   return (neuron0x2cfba80()*-0.53933);
}

double NNfunction_ns_chi01_sR::synapse0x2d22e20() {
   return (neuron0x2cfbdc0()*0.09263);
}

double NNfunction_ns_chi01_sR::synapse0x2d22e60() {
   return (neuron0x2cfc100()*0.245956);
}

double NNfunction_ns_chi01_sR::synapse0x2d22ea0() {
   return (neuron0x2cfc440()*-0.0242965);
}

double NNfunction_ns_chi01_sR::synapse0x2d22ee0() {
   return (neuron0x2cfc780()*-0.0410215);
}

double NNfunction_ns_chi01_sR::synapse0x2d22f20() {
   return (neuron0x2cfcac0()*-0.161613);
}

double NNfunction_ns_chi01_sR::synapse0x2d229b0() {
   return (neuron0x2cfce00()*-0.370607);
}

double NNfunction_ns_chi01_sR::synapse0x2d229f0() {
   return (neuron0x2cfd360()*0.453084);
}

double NNfunction_ns_chi01_sR::synapse0x2d23070() {
   return (neuron0x2cfd6a0()*0.711168);
}

double NNfunction_ns_chi01_sR::synapse0x2d230b0() {
   return (neuron0x2cfd9e0()*-0.75772);
}

double NNfunction_ns_chi01_sR::synapse0x2d230f0() {
   return (neuron0x2cfdd20()*-0.226613);
}

double NNfunction_ns_chi01_sR::synapse0x2d23130() {
   return (neuron0x2cfe060()*-0.105233);
}

double NNfunction_ns_chi01_sR::synapse0x2d23170() {
   return (neuron0x2cfe3a0()*0.131394);
}

double NNfunction_ns_chi01_sR::synapse0x2d231b0() {
   return (neuron0x2cfe6e0()*0.242975);
}

double NNfunction_ns_chi01_sR::synapse0x2d23530() {
   return (neuron0x2cf9a90()*0.271203);
}

double NNfunction_ns_chi01_sR::synapse0x2d23570() {
   return (neuron0x2cf9d40()*2.04074);
}

double NNfunction_ns_chi01_sR::synapse0x2d235b0() {
   return (neuron0x2cfa080()*0.194015);
}

double NNfunction_ns_chi01_sR::synapse0x2d235f0() {
   return (neuron0x2cfa3c0()*0.404187);
}

double NNfunction_ns_chi01_sR::synapse0x2d23630() {
   return (neuron0x2cfa700()*-0.150203);
}

double NNfunction_ns_chi01_sR::synapse0x2d23670() {
   return (neuron0x2cfaa40()*-1.34676);
}

double NNfunction_ns_chi01_sR::synapse0x2d236b0() {
   return (neuron0x2cfad80()*-0.0843655);
}

double NNfunction_ns_chi01_sR::synapse0x2d236f0() {
   return (neuron0x2cfb0c0()*-0.983106);
}

double NNfunction_ns_chi01_sR::synapse0x2d23730() {
   return (neuron0x2cfb400()*-0.19534);
}

double NNfunction_ns_chi01_sR::synapse0x2d23770() {
   return (neuron0x2cfb740()*0.300733);
}

double NNfunction_ns_chi01_sR::synapse0x2d237b0() {
   return (neuron0x2cfba80()*0.278564);
}

double NNfunction_ns_chi01_sR::synapse0x2d237f0() {
   return (neuron0x2cfbdc0()*-0.299843);
}

double NNfunction_ns_chi01_sR::synapse0x2d23830() {
   return (neuron0x2cfc100()*-0.27598);
}

double NNfunction_ns_chi01_sR::synapse0x2d23870() {
   return (neuron0x2cfc440()*0.314694);
}

double NNfunction_ns_chi01_sR::synapse0x2d238b0() {
   return (neuron0x2cfc780()*-0.361344);
}

double NNfunction_ns_chi01_sR::synapse0x2d238f0() {
   return (neuron0x2cfcac0()*0.7726);
}

double NNfunction_ns_chi01_sR::synapse0x2d23380() {
   return (neuron0x2cfce00()*0.00436629);
}

double NNfunction_ns_chi01_sR::synapse0x2d233c0() {
   return (neuron0x2cfd360()*-0.544527);
}

double NNfunction_ns_chi01_sR::synapse0x2d23a40() {
   return (neuron0x2cfd6a0()*-0.553499);
}

double NNfunction_ns_chi01_sR::synapse0x2d23a80() {
   return (neuron0x2cfd9e0()*0.170931);
}

double NNfunction_ns_chi01_sR::synapse0x2d23ac0() {
   return (neuron0x2cfdd20()*0.876251);
}

double NNfunction_ns_chi01_sR::synapse0x2d23b00() {
   return (neuron0x2cfe060()*0.041847);
}

double NNfunction_ns_chi01_sR::synapse0x2d23b40() {
   return (neuron0x2cfe3a0()*-0.0613576);
}

double NNfunction_ns_chi01_sR::synapse0x2d23b80() {
   return (neuron0x2cfe6e0()*-0.875855);
}

double NNfunction_ns_chi01_sR::synapse0x2d23f00() {
   return (neuron0x2cf9a90()*-0.0422003);
}

double NNfunction_ns_chi01_sR::synapse0x2d23f40() {
   return (neuron0x2cf9d40()*0.0352076);
}

double NNfunction_ns_chi01_sR::synapse0x2d23f80() {
   return (neuron0x2cfa080()*0.0596571);
}

double NNfunction_ns_chi01_sR::synapse0x2d23fc0() {
   return (neuron0x2cfa3c0()*-3.72128);
}

double NNfunction_ns_chi01_sR::synapse0x2d24000() {
   return (neuron0x2cfa700()*0.0280309);
}

double NNfunction_ns_chi01_sR::synapse0x2d24040() {
   return (neuron0x2cfaa40()*0.00955992);
}

double NNfunction_ns_chi01_sR::synapse0x2d24080() {
   return (neuron0x2cfad80()*-0.0190049);
}

double NNfunction_ns_chi01_sR::synapse0x2d240c0() {
   return (neuron0x2cfb0c0()*-0.0380152);
}

double NNfunction_ns_chi01_sR::synapse0x2d24100() {
   return (neuron0x2cfb400()*-0.0306627);
}

double NNfunction_ns_chi01_sR::synapse0x2d24140() {
   return (neuron0x2cfb740()*-0.0410287);
}

double NNfunction_ns_chi01_sR::synapse0x2d24180() {
   return (neuron0x2cfba80()*-0.0472075);
}

double NNfunction_ns_chi01_sR::synapse0x2d241c0() {
   return (neuron0x2cfbdc0()*-0.0411139);
}

double NNfunction_ns_chi01_sR::synapse0x2d24200() {
   return (neuron0x2cfc100()*-0.0141661);
}

double NNfunction_ns_chi01_sR::synapse0x2d24240() {
   return (neuron0x2cfc440()*-0.014);
}

double NNfunction_ns_chi01_sR::synapse0x2d24280() {
   return (neuron0x2cfc780()*0.0796691);
}

double NNfunction_ns_chi01_sR::synapse0x2d242c0() {
   return (neuron0x2cfcac0()*0.0290969);
}

double NNfunction_ns_chi01_sR::synapse0x2d23d50() {
   return (neuron0x2cfce00()*0.0268285);
}

double NNfunction_ns_chi01_sR::synapse0x2d23d90() {
   return (neuron0x2cfd360()*0.00652413);
}

double NNfunction_ns_chi01_sR::synapse0x2d24410() {
   return (neuron0x2cfd6a0()*-0.453621);
}

double NNfunction_ns_chi01_sR::synapse0x2d24450() {
   return (neuron0x2cfd9e0()*-0.06646);
}

double NNfunction_ns_chi01_sR::synapse0x2d24490() {
   return (neuron0x2cfdd20()*0.0102279);
}

double NNfunction_ns_chi01_sR::synapse0x2d244d0() {
   return (neuron0x2cfe060()*-0.00361671);
}

double NNfunction_ns_chi01_sR::synapse0x2d24510() {
   return (neuron0x2cfe3a0()*0.0362739);
}

double NNfunction_ns_chi01_sR::synapse0x2d24550() {
   return (neuron0x2cfe6e0()*-0.011779);
}

double NNfunction_ns_chi01_sR::synapse0x2ac43c0() {
   return (neuron0x2cfeb50()*-0.0995756);
}

double NNfunction_ns_chi01_sR::synapse0x2ac4400() {
   return (neuron0x2cff390()*0.505833);
}

double NNfunction_ns_chi01_sR::synapse0x2d00f00() {
   return (neuron0x2cffe70()*-0.0396564);
}

double NNfunction_ns_chi01_sR::synapse0x2d00f40() {
   return (neuron0x2cff910()*-0.126052);
}

double NNfunction_ns_chi01_sR::synapse0x2d029d0() {
   return (neuron0x2d00c50()*0.118035);
}

double NNfunction_ns_chi01_sR::synapse0x2d02a10() {
   return (neuron0x2d02720()*0.0247117);
}

double NNfunction_ns_chi01_sR::synapse0x2d037a0() {
   return (neuron0x2d034f0()*-1.46333);
}

double NNfunction_ns_chi01_sR::synapse0x2d037e0() {
   return (neuron0x2d03ec0()*-7.23476);
}

double NNfunction_ns_chi01_sR::synapse0x2d04170() {
   return (neuron0x2d04890()*-2.67609);
}

double NNfunction_ns_chi01_sR::synapse0x2d041b0() {
   return (neuron0x2d05370()*0.0928174);
}

double NNfunction_ns_chi01_sR::synapse0x2d04b40() {
   return (neuron0x2d05d40()*0.0511919);
}

double NNfunction_ns_chi01_sR::synapse0x2d04b80() {
   return (neuron0x2d02e20()*-0.0147134);
}

double NNfunction_ns_chi01_sR::synapse0x2d05620() {
   return (neuron0x2d078f0()*-0.070858);
}

double NNfunction_ns_chi01_sR::synapse0x2d05660() {
   return (neuron0x2d082c0()*-0.877368);
}

double NNfunction_ns_chi01_sR::synapse0x2d05ff0() {
   return (neuron0x2d08c90()*-0.541547);
}

double NNfunction_ns_chi01_sR::synapse0x2d06030() {
   return (neuron0x2d09660()*-0.0693301);
}

double NNfunction_ns_chi01_sR::synapse0x2d030d0() {
   return (neuron0x2d0b470()*0.196481);
}

double NNfunction_ns_chi01_sR::synapse0x2d03110() {
   return (neuron0x2d0b750()*4.32949);
}

double NNfunction_ns_chi01_sR::synapse0x2d07ba0() {
   return (neuron0x2d0c120()*0.0206974);
}

double NNfunction_ns_chi01_sR::synapse0x2d07be0() {
   return (neuron0x2d0caf0()*0.0288339);
}

double NNfunction_ns_chi01_sR::synapse0x2d08570() {
   return (neuron0x2d0d4c0()*-0.568855);
}

double NNfunction_ns_chi01_sR::synapse0x2d085b0() {
   return (neuron0x2d0de90()*7.7141);
}

double NNfunction_ns_chi01_sR::synapse0x2d08f40() {
   return (neuron0x2d069e0()*0.499995);
}

double NNfunction_ns_chi01_sR::synapse0x2d08f80() {
   return (neuron0x2d073b0()*-2.62019);
}

double NNfunction_ns_chi01_sR::synapse0x2d09910() {
   return (neuron0x2d10c20()*0.0403062);
}

double NNfunction_ns_chi01_sR::synapse0x2d09950() {
   return (neuron0x2d115f0()*2.42193);
}

double NNfunction_ns_chi01_sR::synapse0x2cfc9a0() {
   return (neuron0x2d11fc0()*0.390664);
}

double NNfunction_ns_chi01_sR::synapse0x2cfc9e0() {
   return (neuron0x2d12990()*0.0152318);
}

double NNfunction_ns_chi01_sR::synapse0x2d0ba00() {
   return (neuron0x2d13360()*0.117862);
}

double NNfunction_ns_chi01_sR::synapse0x2d0ba40() {
   return (neuron0x2d13d30()*-0.00440985);
}

double NNfunction_ns_chi01_sR::synapse0x2d0c3d0() {
   return (neuron0x2d14700()*-0.0781595);
}

double NNfunction_ns_chi01_sR::synapse0x2d0c410() {
   return (neuron0x2d150d0()*-0.743935);
}

double NNfunction_ns_chi01_sR::synapse0x2d0cda0() {
   return (neuron0x2d0b160()*-0.0827602);
}

double NNfunction_ns_chi01_sR::synapse0x2d0cde0() {
   return (neuron0x2d17cb0()*1.51154);
}

double NNfunction_ns_chi01_sR::synapse0x2d0d770() {
   return (neuron0x2d18680()*-0.0146373);
}

double NNfunction_ns_chi01_sR::synapse0x2d0d7b0() {
   return (neuron0x2d19050()*-0.326198);
}

double NNfunction_ns_chi01_sR::synapse0x2d0e140() {
   return (neuron0x2d19a20()*-0.0613022);
}

double NNfunction_ns_chi01_sR::synapse0x2d0e180() {
   return (neuron0x2d1a3f0()*0.576864);
}

double NNfunction_ns_chi01_sR::synapse0x2d06c90() {
   return (neuron0x2d1adc0()*-0.609151);
}

double NNfunction_ns_chi01_sR::synapse0x2d06cd0() {
   return (neuron0x2d1b790()*-0.0118798);
}

double NNfunction_ns_chi01_sR::synapse0x2d10540() {
   return (neuron0x2d1c160()*-0.149772);
}

double NNfunction_ns_chi01_sR::synapse0x2d10580() {
   return (neuron0x2d1cd40()*0.0709981);
}

double NNfunction_ns_chi01_sR::synapse0x2d10ed0() {
   return (neuron0x2d1d710()*0.233368);
}

double NNfunction_ns_chi01_sR::synapse0x2d10f10() {
   return (neuron0x2d0e590()*1.40304);
}

double NNfunction_ns_chi01_sR::synapse0x2d118a0() {
   return (neuron0x2d0ef60()*-0.127957);
}

double NNfunction_ns_chi01_sR::synapse0x2d118e0() {
   return (neuron0x2d0f930()*-0.0680798);
}

double NNfunction_ns_chi01_sR::synapse0x2d12270() {
   return (neuron0x2d21f70()*8.50227);
}

double NNfunction_ns_chi01_sR::synapse0x2d122b0() {
   return (neuron0x2d22820()*0.0540267);
}

double NNfunction_ns_chi01_sR::synapse0x2d12c40() {
   return (neuron0x2d231f0()*0.17498);
}

double NNfunction_ns_chi01_sR::synapse0x2d12c80() {
   return (neuron0x2d23bc0()*-0.465133);
}

double NNfunction_ns_chi01_sR::synapse0x2d15380() {
   return (neuron0x2cfeb50()*-0.150842);
}

double NNfunction_ns_chi01_sR::synapse0x2d153c0() {
   return (neuron0x2cff390()*-0.0681964);
}

double NNfunction_ns_chi01_sR::synapse0x2d0a940() {
   return (neuron0x2cffe70()*0.453798);
}

double NNfunction_ns_chi01_sR::synapse0x2d0a980() {
   return (neuron0x2cff910()*-0.174793);
}

double NNfunction_ns_chi01_sR::synapse0x2d17f60() {
   return (neuron0x2d00c50()*0.487078);
}

double NNfunction_ns_chi01_sR::synapse0x2d17fa0() {
   return (neuron0x2d02720()*0.344128);
}

double NNfunction_ns_chi01_sR::synapse0x2d18930() {
   return (neuron0x2d034f0()*-0.64998);
}

double NNfunction_ns_chi01_sR::synapse0x2d18970() {
   return (neuron0x2d03ec0()*-2.64036);
}

double NNfunction_ns_chi01_sR::synapse0x2d19300() {
   return (neuron0x2d04890()*-1.46372);
}

double NNfunction_ns_chi01_sR::synapse0x2d19340() {
   return (neuron0x2d05370()*0.253787);
}

double NNfunction_ns_chi01_sR::synapse0x2d19cd0() {
   return (neuron0x2d05d40()*0.094343);
}

double NNfunction_ns_chi01_sR::synapse0x2d19d10() {
   return (neuron0x2d02e20()*0.522664);
}

double NNfunction_ns_chi01_sR::synapse0x2d1a6a0() {
   return (neuron0x2d078f0()*2.22701);
}

double NNfunction_ns_chi01_sR::synapse0x2d1a6e0() {
   return (neuron0x2d082c0()*-0.0321181);
}

double NNfunction_ns_chi01_sR::synapse0x2d1b070() {
   return (neuron0x2d08c90()*-4.62958);
}

double NNfunction_ns_chi01_sR::synapse0x2d1b0b0() {
   return (neuron0x2d09660()*-0.355992);
}

double NNfunction_ns_chi01_sR::synapse0x2d1ba40() {
   return (neuron0x2d0b470()*6.44232);
}

double NNfunction_ns_chi01_sR::synapse0x2d1ba80() {
   return (neuron0x2d0b750()*4.74208);
}

double NNfunction_ns_chi01_sR::synapse0x2d1c410() {
   return (neuron0x2d0c120()*-0.44649);
}

double NNfunction_ns_chi01_sR::synapse0x2d1c450() {
   return (neuron0x2d0caf0()*-0.428755);
}

double NNfunction_ns_chi01_sR::synapse0x2d1cff0() {
   return (neuron0x2d0d4c0()*2.26574);
}

double NNfunction_ns_chi01_sR::synapse0x2d1d030() {
   return (neuron0x2d0de90()*2.81043);
}

double NNfunction_ns_chi01_sR::synapse0x2d1d9c0() {
   return (neuron0x2d069e0()*7.32629);
}

double NNfunction_ns_chi01_sR::synapse0x2d1da00() {
   return (neuron0x2d073b0()*-1.6339);
}

double NNfunction_ns_chi01_sR::synapse0x2d0e840() {
   return (neuron0x2d10c20()*-0.268752);
}

double NNfunction_ns_chi01_sR::synapse0x2d0e880() {
   return (neuron0x2d115f0()*-1.21984);
}

double NNfunction_ns_chi01_sR::synapse0x2d0f210() {
   return (neuron0x2d11fc0()*-1.09698);
}

double NNfunction_ns_chi01_sR::synapse0x2d0f250() {
   return (neuron0x2d12990()*-0.270615);
}

double NNfunction_ns_chi01_sR::synapse0x2d0fbe0() {
   return (neuron0x2d13360()*0.115673);
}

double NNfunction_ns_chi01_sR::synapse0x2d0fc20() {
   return (neuron0x2d13d30()*0.474854);
}

double NNfunction_ns_chi01_sR::synapse0x2d22100() {
   return (neuron0x2d14700()*-0.0547584);
}

double NNfunction_ns_chi01_sR::synapse0x2d22140() {
   return (neuron0x2d150d0()*1.05466);
}

double NNfunction_ns_chi01_sR::synapse0x2d22ad0() {
   return (neuron0x2d0b160()*-0.127224);
}

double NNfunction_ns_chi01_sR::synapse0x2d22b10() {
   return (neuron0x2d17cb0()*-0.621638);
}

double NNfunction_ns_chi01_sR::synapse0x2d234a0() {
   return (neuron0x2d18680()*0.538685);
}

double NNfunction_ns_chi01_sR::synapse0x2d234e0() {
   return (neuron0x2d19050()*0.638068);
}

double NNfunction_ns_chi01_sR::synapse0x2d23e70() {
   return (neuron0x2d19a20()*1.02796);
}

double NNfunction_ns_chi01_sR::synapse0x2d23eb0() {
   return (neuron0x2d1a3f0()*-2.68777);
}

double NNfunction_ns_chi01_sR::synapse0x2cfee00() {
   return (neuron0x2d1adc0()*-7.37754);
}

double NNfunction_ns_chi01_sR::synapse0x2cfee40() {
   return (neuron0x2d1b790()*1.95529);
}

double NNfunction_ns_chi01_sR::synapse0x2d13610() {
   return (neuron0x2d1c160()*-0.561383);
}

double NNfunction_ns_chi01_sR::synapse0x2d13650() {
   return (neuron0x2d1cd40()*-0.275112);
}

double NNfunction_ns_chi01_sR::synapse0x2d24590() {
   return (neuron0x2d1d710()*0.166477);
}

double NNfunction_ns_chi01_sR::synapse0x2d245d0() {
   return (neuron0x2d0e590()*1.2137);
}

double NNfunction_ns_chi01_sR::synapse0x2d24610() {
   return (neuron0x2d0ef60()*-0.200539);
}

double NNfunction_ns_chi01_sR::synapse0x2d24650() {
   return (neuron0x2d0f930()*0.240708);
}

double NNfunction_ns_chi01_sR::synapse0x2d2b500() {
   return (neuron0x2d21f70()*0.27433);
}

double NNfunction_ns_chi01_sR::synapse0x2d2b540() {
   return (neuron0x2d22820()*-0.184879);
}

double NNfunction_ns_chi01_sR::synapse0x2d2b580() {
   return (neuron0x2d231f0()*0.316111);
}

double NNfunction_ns_chi01_sR::synapse0x2d2b5c0() {
   return (neuron0x2d23bc0()*-6.56761);
}

double NNfunction_ns_chi01_sR::synapse0x2d2b940() {
   return (neuron0x2cfeb50()*0.0361276);
}

double NNfunction_ns_chi01_sR::synapse0x2d2b980() {
   return (neuron0x2cff390()*-0.239934);
}

double NNfunction_ns_chi01_sR::synapse0x2d2b9c0() {
   return (neuron0x2cffe70()*-0.0410752);
}

double NNfunction_ns_chi01_sR::synapse0x2d2ba00() {
   return (neuron0x2cff910()*0.0758788);
}

double NNfunction_ns_chi01_sR::synapse0x2d2ba40() {
   return (neuron0x2d00c50()*-0.0955559);
}

double NNfunction_ns_chi01_sR::synapse0x2d2ba80() {
   return (neuron0x2d02720()*0.0102364);
}

double NNfunction_ns_chi01_sR::synapse0x2d2bac0() {
   return (neuron0x2d034f0()*-3.28778);
}

double NNfunction_ns_chi01_sR::synapse0x2d2bb00() {
   return (neuron0x2d03ec0()*1.70064);
}

double NNfunction_ns_chi01_sR::synapse0x2d2bb40() {
   return (neuron0x2d04890()*-1.2803);
}

double NNfunction_ns_chi01_sR::synapse0x2d2bb80() {
   return (neuron0x2d05370()*-0.0171856);
}

double NNfunction_ns_chi01_sR::synapse0x2d2bbc0() {
   return (neuron0x2d05d40()*-0.0213322);
}

double NNfunction_ns_chi01_sR::synapse0x2d2bc00() {
   return (neuron0x2d02e20()*-0.0421754);
}

double NNfunction_ns_chi01_sR::synapse0x2d2bc40() {
   return (neuron0x2d078f0()*0.0189826);
}

double NNfunction_ns_chi01_sR::synapse0x2d2bc80() {
   return (neuron0x2d082c0()*-0.243594);
}

double NNfunction_ns_chi01_sR::synapse0x2d2bcc0() {
   return (neuron0x2d08c90()*-0.216259);
}

double NNfunction_ns_chi01_sR::synapse0x2d2bd00() {
   return (neuron0x2d09660()*0.124613);
}

double NNfunction_ns_chi01_sR::synapse0x2d2b790() {
   return (neuron0x2d0b470()*0.540021);
}

double NNfunction_ns_chi01_sR::synapse0x2d2b7d0() {
   return (neuron0x2d0b750()*1.88542);
}

double NNfunction_ns_chi01_sR::synapse0x2d2be50() {
   return (neuron0x2d0c120()*0.0337319);
}

double NNfunction_ns_chi01_sR::synapse0x2d2be90() {
   return (neuron0x2d0caf0()*-0.000114845);
}

double NNfunction_ns_chi01_sR::synapse0x2d2bed0() {
   return (neuron0x2d0d4c0()*1.10914);
}

double NNfunction_ns_chi01_sR::synapse0x2d2bf10() {
   return (neuron0x2d0de90()*-1.58631);
}

double NNfunction_ns_chi01_sR::synapse0x2d2bf50() {
   return (neuron0x2d069e0()*1.19015);
}

double NNfunction_ns_chi01_sR::synapse0x2d2bf90() {
   return (neuron0x2d073b0()*-0.0387089);
}

double NNfunction_ns_chi01_sR::synapse0x2d2bfd0() {
   return (neuron0x2d10c20()*0.044115);
}

double NNfunction_ns_chi01_sR::synapse0x2d2c010() {
   return (neuron0x2d115f0()*-2.57381);
}

double NNfunction_ns_chi01_sR::synapse0x2d2c050() {
   return (neuron0x2d11fc0()*-0.333167);
}

double NNfunction_ns_chi01_sR::synapse0x2d2c090() {
   return (neuron0x2d12990()*0.0945105);
}

double NNfunction_ns_chi01_sR::synapse0x2d2c0d0() {
   return (neuron0x2d13360()*-0.0274555);
}

double NNfunction_ns_chi01_sR::synapse0x2d2c110() {
   return (neuron0x2d13d30()*0.0293738);
}

double NNfunction_ns_chi01_sR::synapse0x2d2c150() {
   return (neuron0x2d14700()*0.0147915);
}

double NNfunction_ns_chi01_sR::synapse0x2d2c190() {
   return (neuron0x2d150d0()*0.874905);
}

double NNfunction_ns_chi01_sR::synapse0x2d2bd40() {
   return (neuron0x2d0b160()*-0.018977);
}

double NNfunction_ns_chi01_sR::synapse0x2d2bd80() {
   return (neuron0x2d17cb0()*-0.0349123);
}

double NNfunction_ns_chi01_sR::synapse0x2d2bdc0() {
   return (neuron0x2d18680()*0.00830498);
}

double NNfunction_ns_chi01_sR::synapse0x2d2be00() {
   return (neuron0x2d19050()*0.210149);
}

double NNfunction_ns_chi01_sR::synapse0x2d2c3e0() {
   return (neuron0x2d19a20()*0.0310804);
}

double NNfunction_ns_chi01_sR::synapse0x2d2c420() {
   return (neuron0x2d1a3f0()*-1.31902);
}

double NNfunction_ns_chi01_sR::synapse0x2d2c460() {
   return (neuron0x2d1adc0()*-1.08048);
}

double NNfunction_ns_chi01_sR::synapse0x2d2c4a0() {
   return (neuron0x2d1b790()*0.0266862);
}

double NNfunction_ns_chi01_sR::synapse0x2d2c4e0() {
   return (neuron0x2d1c160()*0.123637);
}

double NNfunction_ns_chi01_sR::synapse0x2d2c520() {
   return (neuron0x2d1cd40()*0.00521867);
}

double NNfunction_ns_chi01_sR::synapse0x2d2c560() {
   return (neuron0x2d1d710()*-0.324776);
}

double NNfunction_ns_chi01_sR::synapse0x2d2c5a0() {
   return (neuron0x2d0e590()*-0.141724);
}

double NNfunction_ns_chi01_sR::synapse0x2d2c5e0() {
   return (neuron0x2d0ef60()*0.041959);
}

double NNfunction_ns_chi01_sR::synapse0x2d2c620() {
   return (neuron0x2d0f930()*0.00279375);
}

double NNfunction_ns_chi01_sR::synapse0x2d2c660() {
   return (neuron0x2d21f70()*-0.272103);
}

double NNfunction_ns_chi01_sR::synapse0x2d2c6a0() {
   return (neuron0x2d22820()*0.0452377);
}

double NNfunction_ns_chi01_sR::synapse0x2d2c6e0() {
   return (neuron0x2d231f0()*-0.115908);
}

double NNfunction_ns_chi01_sR::synapse0x2d2c720() {
   return (neuron0x2d23bc0()*-0.818882);
}

double NNfunction_ns_chi01_sR::synapse0x2d2caa0() {
   return (neuron0x2cfeb50()*-1.2157);
}

double NNfunction_ns_chi01_sR::synapse0x2d2cae0() {
   return (neuron0x2cff390()*2.63035);
}

double NNfunction_ns_chi01_sR::synapse0x2d2cb20() {
   return (neuron0x2cffe70()*-1.44854);
}

double NNfunction_ns_chi01_sR::synapse0x2d2cb60() {
   return (neuron0x2cff910()*-1.00932);
}

double NNfunction_ns_chi01_sR::synapse0x2d2cba0() {
   return (neuron0x2d00c50()*0.203149);
}

double NNfunction_ns_chi01_sR::synapse0x2d2cbe0() {
   return (neuron0x2d02720()*0.942081);
}

double NNfunction_ns_chi01_sR::synapse0x2d2cc20() {
   return (neuron0x2d034f0()*1.09061);
}

double NNfunction_ns_chi01_sR::synapse0x2d2cc60() {
   return (neuron0x2d03ec0()*-0.611136);
}

double NNfunction_ns_chi01_sR::synapse0x2d2cca0() {
   return (neuron0x2d04890()*-1.72177);
}

double NNfunction_ns_chi01_sR::synapse0x2d2cce0() {
   return (neuron0x2d05370()*1.46088);
}

double NNfunction_ns_chi01_sR::synapse0x2d2cd20() {
   return (neuron0x2d05d40()*1.04603);
}

double NNfunction_ns_chi01_sR::synapse0x2d2cd60() {
   return (neuron0x2d02e20()*-0.947311);
}

double NNfunction_ns_chi01_sR::synapse0x2d2cda0() {
   return (neuron0x2d078f0()*-0.825279);
}

double NNfunction_ns_chi01_sR::synapse0x2d2cde0() {
   return (neuron0x2d082c0()*-3.45055);
}

double NNfunction_ns_chi01_sR::synapse0x2d2ce20() {
   return (neuron0x2d08c90()*-0.139806);
}

double NNfunction_ns_chi01_sR::synapse0x2d2ce60() {
   return (neuron0x2d09660()*0.718625);
}

double NNfunction_ns_chi01_sR::synapse0x2d2c8f0() {
   return (neuron0x2d0b470()*1.34273);
}

double NNfunction_ns_chi01_sR::synapse0x2d2c930() {
   return (neuron0x2d0b750()*-3.74555);
}

double NNfunction_ns_chi01_sR::synapse0x2d2cfb0() {
   return (neuron0x2d0c120()*0.934414);
}

double NNfunction_ns_chi01_sR::synapse0x2d2cff0() {
   return (neuron0x2d0caf0()*-0.223037);
}

double NNfunction_ns_chi01_sR::synapse0x2d2d030() {
   return (neuron0x2d0d4c0()*3.48679);
}

double NNfunction_ns_chi01_sR::synapse0x2d2d070() {
   return (neuron0x2d0de90()*0.110826);
}

double NNfunction_ns_chi01_sR::synapse0x2d2d0b0() {
   return (neuron0x2d069e0()*2.02471);
}

double NNfunction_ns_chi01_sR::synapse0x2d2d0f0() {
   return (neuron0x2d073b0()*-4.00362);
}

double NNfunction_ns_chi01_sR::synapse0x2d2d130() {
   return (neuron0x2d10c20()*1.07065);
}

double NNfunction_ns_chi01_sR::synapse0x2d2d170() {
   return (neuron0x2d115f0()*-0.0717689);
}

double NNfunction_ns_chi01_sR::synapse0x2d2d1b0() {
   return (neuron0x2d11fc0()*-1.22237);
}

double NNfunction_ns_chi01_sR::synapse0x2d2d1f0() {
   return (neuron0x2d12990()*1.0676);
}

double NNfunction_ns_chi01_sR::synapse0x2d2d230() {
   return (neuron0x2d13360()*1.31637);
}

double NNfunction_ns_chi01_sR::synapse0x2d2d270() {
   return (neuron0x2d13d30()*0.324103);
}

double NNfunction_ns_chi01_sR::synapse0x2d2d2b0() {
   return (neuron0x2d14700()*-1.65423);
}

double NNfunction_ns_chi01_sR::synapse0x2d2d2f0() {
   return (neuron0x2d150d0()*-0.682383);
}

double NNfunction_ns_chi01_sR::synapse0x2d2cea0() {
   return (neuron0x2d0b160()*-2.26505);
}

double NNfunction_ns_chi01_sR::synapse0x2d2cee0() {
   return (neuron0x2d17cb0()*4.14579);
}

double NNfunction_ns_chi01_sR::synapse0x2d2cf20() {
   return (neuron0x2d18680()*-0.328796);
}

double NNfunction_ns_chi01_sR::synapse0x2d2cf60() {
   return (neuron0x2d19050()*-1.88377);
}

double NNfunction_ns_chi01_sR::synapse0x2d2d540() {
   return (neuron0x2d19a20()*-1.10326);
}

double NNfunction_ns_chi01_sR::synapse0x2d2d580() {
   return (neuron0x2d1a3f0()*0.0936939);
}

double NNfunction_ns_chi01_sR::synapse0x2d2d5c0() {
   return (neuron0x2d1adc0()*-1.62041);
}

double NNfunction_ns_chi01_sR::synapse0x2d2d600() {
   return (neuron0x2d1b790()*-0.151255);
}

double NNfunction_ns_chi01_sR::synapse0x2d2d640() {
   return (neuron0x2d1c160()*-1.04081);
}

double NNfunction_ns_chi01_sR::synapse0x2d2d680() {
   return (neuron0x2d1cd40()*1.10995);
}

double NNfunction_ns_chi01_sR::synapse0x2d2d6c0() {
   return (neuron0x2d1d710()*4.64753);
}

double NNfunction_ns_chi01_sR::synapse0x2d2d700() {
   return (neuron0x2d0e590()*-1.02928);
}

double NNfunction_ns_chi01_sR::synapse0x2d2d740() {
   return (neuron0x2d0ef60()*-1.96124);
}

double NNfunction_ns_chi01_sR::synapse0x2d2d780() {
   return (neuron0x2d0f930()*-1.00931);
}

double NNfunction_ns_chi01_sR::synapse0x2d2d7c0() {
   return (neuron0x2d21f70()*-0.65612);
}

double NNfunction_ns_chi01_sR::synapse0x2d2d800() {
   return (neuron0x2d22820()*1.80678);
}

double NNfunction_ns_chi01_sR::synapse0x2d2d840() {
   return (neuron0x2d231f0()*1.27913);
}

double NNfunction_ns_chi01_sR::synapse0x2d2d880() {
   return (neuron0x2d23bc0()*0.117257);
}

double NNfunction_ns_chi01_sR::synapse0x2d2dc00() {
   return (neuron0x2cfeb50()*0.810314);
}

double NNfunction_ns_chi01_sR::synapse0x2d2dc40() {
   return (neuron0x2cff390()*-1.64936);
}

double NNfunction_ns_chi01_sR::synapse0x2d2dc80() {
   return (neuron0x2cffe70()*0.988633);
}

double NNfunction_ns_chi01_sR::synapse0x2d2dcc0() {
   return (neuron0x2cff910()*0.653355);
}

double NNfunction_ns_chi01_sR::synapse0x2d2dd00() {
   return (neuron0x2d00c50()*-0.0912217);
}

double NNfunction_ns_chi01_sR::synapse0x2d2dd40() {
   return (neuron0x2d02720()*-0.669454);
}

double NNfunction_ns_chi01_sR::synapse0x2d2dd80() {
   return (neuron0x2d034f0()*-1.30122);
}

double NNfunction_ns_chi01_sR::synapse0x2d2ddc0() {
   return (neuron0x2d03ec0()*0.200786);
}

double NNfunction_ns_chi01_sR::synapse0x2d2de00() {
   return (neuron0x2d04890()*-0.553205);
}

double NNfunction_ns_chi01_sR::synapse0x2d2de40() {
   return (neuron0x2d05370()*-0.958799);
}

double NNfunction_ns_chi01_sR::synapse0x2d2de80() {
   return (neuron0x2d05d40()*-0.686531);
}

double NNfunction_ns_chi01_sR::synapse0x2d2dec0() {
   return (neuron0x2d02e20()*0.682006);
}

double NNfunction_ns_chi01_sR::synapse0x2d2df00() {
   return (neuron0x2d078f0()*0.578483);
}

double NNfunction_ns_chi01_sR::synapse0x2d2df40() {
   return (neuron0x2d082c0()*3.12139);
}

double NNfunction_ns_chi01_sR::synapse0x2d2df80() {
   return (neuron0x2d08c90()*0.0414994);
}

double NNfunction_ns_chi01_sR::synapse0x2d2dfc0() {
   return (neuron0x2d09660()*-0.535336);
}

double NNfunction_ns_chi01_sR::synapse0x2d2da50() {
   return (neuron0x2d0b470()*-0.77302);
}

double NNfunction_ns_chi01_sR::synapse0x2d2da90() {
   return (neuron0x2d0b750()*2.07641);
}

double NNfunction_ns_chi01_sR::synapse0x2d2e110() {
   return (neuron0x2d0c120()*-0.62737);
}

double NNfunction_ns_chi01_sR::synapse0x2d2e150() {
   return (neuron0x2d0caf0()*0.175121);
}

double NNfunction_ns_chi01_sR::synapse0x2d2e190() {
   return (neuron0x2d0d4c0()*-3.29056);
}

double NNfunction_ns_chi01_sR::synapse0x2d2e1d0() {
   return (neuron0x2d0de90()*-0.0752189);
}

double NNfunction_ns_chi01_sR::synapse0x2d2e210() {
   return (neuron0x2d069e0()*-1.31929);
}

double NNfunction_ns_chi01_sR::synapse0x2d2e250() {
   return (neuron0x2d073b0()*3.2211);
}

double NNfunction_ns_chi01_sR::synapse0x2d2e290() {
   return (neuron0x2d10c20()*-0.735426);
}

double NNfunction_ns_chi01_sR::synapse0x2d2e2d0() {
   return (neuron0x2d115f0()*0.246438);
}

double NNfunction_ns_chi01_sR::synapse0x2d2e310() {
   return (neuron0x2d11fc0()*0.970056);
}

double NNfunction_ns_chi01_sR::synapse0x2d2e350() {
   return (neuron0x2d12990()*-0.760013);
}

double NNfunction_ns_chi01_sR::synapse0x2d2e390() {
   return (neuron0x2d13360()*-0.905277);
}

double NNfunction_ns_chi01_sR::synapse0x2d2e3d0() {
   return (neuron0x2d13d30()*-0.220577);
}

double NNfunction_ns_chi01_sR::synapse0x2d2e410() {
   return (neuron0x2d14700()*1.07677);
}

double NNfunction_ns_chi01_sR::synapse0x2d2e450() {
   return (neuron0x2d150d0()*0.268211);
}

double NNfunction_ns_chi01_sR::synapse0x2d2e000() {
   return (neuron0x2d0b160()*1.50834);
}

double NNfunction_ns_chi01_sR::synapse0x2d2e040() {
   return (neuron0x2d17cb0()*-3.45076);
}

double NNfunction_ns_chi01_sR::synapse0x2d2e080() {
   return (neuron0x2d18680()*0.195356);
}

double NNfunction_ns_chi01_sR::synapse0x2d2e0c0() {
   return (neuron0x2d19050()*1.23856);
}

double NNfunction_ns_chi01_sR::synapse0x2d2e6a0() {
   return (neuron0x2d19a20()*0.715788);
}

double NNfunction_ns_chi01_sR::synapse0x2d2e6e0() {
   return (neuron0x2d1a3f0()*1.15292);
}

double NNfunction_ns_chi01_sR::synapse0x2d2e720() {
   return (neuron0x2d1adc0()*1.00463);
}

double NNfunction_ns_chi01_sR::synapse0x2d2e760() {
   return (neuron0x2d1b790()*0.118696);
}

double NNfunction_ns_chi01_sR::synapse0x2d2e7a0() {
   return (neuron0x2d1c160()*0.694508);
}

double NNfunction_ns_chi01_sR::synapse0x2d2e7e0() {
   return (neuron0x2d1cd40()*-0.718821);
}

double NNfunction_ns_chi01_sR::synapse0x2d2e820() {
   return (neuron0x2d1d710()*-3.14506);
}

double NNfunction_ns_chi01_sR::synapse0x2d2e860() {
   return (neuron0x2d0e590()*1.21262);
}

double NNfunction_ns_chi01_sR::synapse0x2d2e8a0() {
   return (neuron0x2d0ef60()*1.26711);
}

double NNfunction_ns_chi01_sR::synapse0x2d2e8e0() {
   return (neuron0x2d0f930()*0.6666);
}

double NNfunction_ns_chi01_sR::synapse0x2d2e920() {
   return (neuron0x2d21f70()*-4.43161);
}

double NNfunction_ns_chi01_sR::synapse0x2d2e960() {
   return (neuron0x2d22820()*-1.22156);
}

double NNfunction_ns_chi01_sR::synapse0x2d2e9a0() {
   return (neuron0x2d231f0()*-0.821478);
}

double NNfunction_ns_chi01_sR::synapse0x2d2e9e0() {
   return (neuron0x2d23bc0()*-0.307436);
}

double NNfunction_ns_chi01_sR::synapse0x2d2ec40() {
   return (neuron0x2d2adc0()*-4.96338);
}

double NNfunction_ns_chi01_sR::synapse0x2d2ec80() {
   return (neuron0x2d2b160()*-7.95648);
}

double NNfunction_ns_chi01_sR::synapse0x2d2ecc0() {
   return (neuron0x2d2b600()*-5.12963);
}

double NNfunction_ns_chi01_sR::synapse0x2d2ed00() {
   return (neuron0x2d2c760()*-5.4372);
}

double NNfunction_ns_chi01_sR::synapse0x2d2ed40() {
   return (neuron0x2d2d8c0()*-8.26735);
}

