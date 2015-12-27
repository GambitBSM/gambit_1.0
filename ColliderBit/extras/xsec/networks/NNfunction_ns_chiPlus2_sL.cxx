#include "NNfunction_ns_chiPlus2_sL.h"
#include <cmath>

double NNfunction_ns_chiPlus2_sL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5756)/15.1123;
   input1 = (in1 - 20.837)/1042.46;
   input2 = (in2 - 321.464)/316.563;
   input3 = (in3 - 56.6487)/748.689;
   input4 = (in4 - 886.864)/865.549;
   input5 = (in5 - 774.291)/872.085;
   input6 = (in6 - 775.327)/869.912;
   input7 = (in7 - 776.745)/847.036;
   input8 = (in8 - 793.385)/903.902;
   input9 = (in9 - 782.22)/889.416;
   input10 = (in10 - 819.816)/897.798;
   input11 = (in11 - 670.719)/785.354;
   input12 = (in12 - 269.385)/204.034;
   input13 = (in13 - 463.857)/451.426;
   input14 = (in14 - 645.342)/706.424;
   input15 = (in15 - 649.61)/715.762;
   input16 = (in16 - 467.05)/486.207;
   input17 = (in17 - 698.111)/817.505;
   input18 = (in18 - 701.286)/821.517;
   input19 = (in19 - 697.746)/781.093;
   input20 = (in20 - -52.5401)/439.437;
   input21 = (in21 - -71.9915)/1028.81;
   input22 = (in22 - 14.0437)/1065.33;
   input23 = (in23 - -32.0669)/238.748;
   switch(index) {
     case 0:
         return neuron0x2da5640();
     default:
         return 0.;
   }
}

double NNfunction_ns_chiPlus2_sL::Value(int index, double* input) {
   input0 = (input[0] - 23.5756)/15.1123;
   input1 = (input[1] - 20.837)/1042.46;
   input2 = (input[2] - 321.464)/316.563;
   input3 = (input[3] - 56.6487)/748.689;
   input4 = (input[4] - 886.864)/865.549;
   input5 = (input[5] - 774.291)/872.085;
   input6 = (input[6] - 775.327)/869.912;
   input7 = (input[7] - 776.745)/847.036;
   input8 = (input[8] - 793.385)/903.902;
   input9 = (input[9] - 782.22)/889.416;
   input10 = (input[10] - 819.816)/897.798;
   input11 = (input[11] - 670.719)/785.354;
   input12 = (input[12] - 269.385)/204.034;
   input13 = (input[13] - 463.857)/451.426;
   input14 = (input[14] - 645.342)/706.424;
   input15 = (input[15] - 649.61)/715.762;
   input16 = (input[16] - 467.05)/486.207;
   input17 = (input[17] - 698.111)/817.505;
   input18 = (input[18] - 701.286)/821.517;
   input19 = (input[19] - 697.746)/781.093;
   input20 = (input[20] - -52.5401)/439.437;
   input21 = (input[21] - -71.9915)/1028.81;
   input22 = (input[22] - 14.0437)/1065.33;
   input23 = (input[23] - -32.0669)/238.748;
   switch(index) {
     case 0:
         return neuron0x2da5640();
     default:
         return 0.;
   }
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d71730() {
   return input0;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d71a70() {
   return input1;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d71db0() {
   return input2;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d720f0() {
   return input3;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d72430() {
   return input4;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d72770() {
   return input5;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d72ab0() {
   return input6;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d72df0() {
   return input7;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d73130() {
   return input8;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d73470() {
   return input9;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d737b0() {
   return input10;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d73af0() {
   return input11;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d73e30() {
   return input12;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d74170() {
   return input13;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d744b0() {
   return input14;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d747f0() {
   return input15;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d74b30() {
   return input16;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d75090() {
   return input17;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d752b0() {
   return input18;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d755f0() {
   return input19;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d75930() {
   return input20;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d75c70() {
   return input21;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d75fb0() {
   return input22;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d762f0() {
   return input23;
}

double NNfunction_ns_chiPlus2_sL::input0x2d76760() {
   double input = 1.4503;
   input += synapse0x2d715f0();
   input += synapse0x2d71630();
   input += synapse0x2d76a10();
   input += synapse0x2d76a50();
   input += synapse0x2d76a90();
   input += synapse0x2d76ad0();
   input += synapse0x2d76b10();
   input += synapse0x2d76b50();
   input += synapse0x2d76b90();
   input += synapse0x2d76bd0();
   input += synapse0x2d76c10();
   input += synapse0x2d76c50();
   input += synapse0x2d76c90();
   input += synapse0x2d76cd0();
   input += synapse0x2d76d10();
   input += synapse0x2d76d50();
   input += synapse0x2d71560();
   input += synapse0x2d715a0();
   input += synapse0x2b2c8d0();
   input += synapse0x2b2c910();
   input += synapse0x2d76fb0();
   input += synapse0x2d76ff0();
   input += synapse0x2d77030();
   input += synapse0x2d77070();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d76760() {
   double input = input0x2d76760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d770b0() {
   double input = 1.00385;
   input += synapse0x2d773f0();
   input += synapse0x2d77430();
   input += synapse0x2d77470();
   input += synapse0x2d774b0();
   input += synapse0x2d774f0();
   input += synapse0x2d77530();
   input += synapse0x2d77570();
   input += synapse0x2d775b0();
   input += synapse0x2d775f0();
   input += synapse0x2d76ea0();
   input += synapse0x2d76ee0();
   input += synapse0x2d76f20();
   input += synapse0x2d76f60();
   input += synapse0x2d77840();
   input += synapse0x2d77880();
   input += synapse0x2d778c0();
   input += synapse0x2d77240();
   input += synapse0x2d77280();
   input += synapse0x2d77a10();
   input += synapse0x2d77a50();
   input += synapse0x2d77a90();
   input += synapse0x2d77ad0();
   input += synapse0x2d77b10();
   input += synapse0x2d77b50();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d770b0() {
   double input = input0x2d770b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d77b90() {
   double input = -0.967871;
   input += synapse0x2d77ed0();
   input += synapse0x2d77f10();
   input += synapse0x2d77f50();
   input += synapse0x2d77f90();
   input += synapse0x2d77fd0();
   input += synapse0x2d78010();
   input += synapse0x2d78050();
   input += synapse0x2d78090();
   input += synapse0x2d780d0();
   input += synapse0x2d78110();
   input += synapse0x2d78150();
   input += synapse0x2d78190();
   input += synapse0x2d781d0();
   input += synapse0x2d78210();
   input += synapse0x2d78250();
   input += synapse0x2d78290();
   input += synapse0x2d77d20();
   input += synapse0x2d77d60();
   input += synapse0x2b2cfc0();
   input += synapse0x2b3a890();
   input += synapse0x2b3a8d0();
   input += synapse0x2d607c0();
   input += synapse0x2d60800();
   input += synapse0x2d60840();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d77b90() {
   double input = input0x2d77b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d77630() {
   double input = 0.993597;
   input += synapse0x2b3b110();
   input += synapse0x2d777c0();
   input += synapse0x2d77800();
   input += synapse0x2d783e0();
   input += synapse0x2d78420();
   input += synapse0x2d78460();
   input += synapse0x2d784a0();
   input += synapse0x2d784e0();
   input += synapse0x2d78520();
   input += synapse0x2d78560();
   input += synapse0x2d785a0();
   input += synapse0x2d785e0();
   input += synapse0x2d78620();
   input += synapse0x2d78660();
   input += synapse0x2d786a0();
   input += synapse0x2d786e0();
   input += synapse0x2d71670();
   input += synapse0x2d716b0();
   input += synapse0x2d716f0();
   input += synapse0x2d78830();
   input += synapse0x2d78870();
   input += synapse0x2d788b0();
   input += synapse0x2d788f0();
   input += synapse0x2d78930();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d77630() {
   double input = input0x2d77630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d78970() {
   double input = 0.759628;
   input += synapse0x2d78cb0();
   input += synapse0x2d78cf0();
   input += synapse0x2d78d30();
   input += synapse0x2d78d70();
   input += synapse0x2d78db0();
   input += synapse0x2d78df0();
   input += synapse0x2d78e30();
   input += synapse0x2d78e70();
   input += synapse0x2d78eb0();
   input += synapse0x2d78ef0();
   input += synapse0x2d78f30();
   input += synapse0x2d78f70();
   input += synapse0x2d78fb0();
   input += synapse0x2d78ff0();
   input += synapse0x2d79030();
   input += synapse0x2d79070();
   input += synapse0x2d78b00();
   input += synapse0x2d78b40();
   input += synapse0x2d791c0();
   input += synapse0x2d79200();
   input += synapse0x2d79240();
   input += synapse0x2d79280();
   input += synapse0x2d792c0();
   input += synapse0x2d79300();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d78970() {
   double input = input0x2d78970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d79340() {
   double input = -0.489693;
   input += synapse0x2d79680();
   input += synapse0x2d796c0();
   input += synapse0x2d79700();
   input += synapse0x2d79740();
   input += synapse0x2d79780();
   input += synapse0x2d797c0();
   input += synapse0x2d79800();
   input += synapse0x2d79840();
   input += synapse0x2d79880();
   input += synapse0x2b3abe0();
   input += synapse0x2b3ac20();
   input += synapse0x2b3ac60();
   input += synapse0x2b3aca0();
   input += synapse0x2b3ace0();
   input += synapse0x2b3ad20();
   input += synapse0x2b3ad60();
   input += synapse0x2d794d0();
   input += synapse0x2d79510();
   input += synapse0x2b3aeb0();
   input += synapse0x2b3aef0();
   input += synapse0x2b3af30();
   input += synapse0x2b3af70();
   input += synapse0x2b3afb0();
   input += synapse0x2d7a0d0();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d79340() {
   double input = input0x2d79340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d7a110() {
   double input = 0.572793;
   input += synapse0x2d7a450();
   input += synapse0x2d7a490();
   input += synapse0x2d7a4d0();
   input += synapse0x2d7a510();
   input += synapse0x2d7a550();
   input += synapse0x2d7a590();
   input += synapse0x2d7a5d0();
   input += synapse0x2d7a610();
   input += synapse0x2d7a650();
   input += synapse0x2d7a690();
   input += synapse0x2d7a6d0();
   input += synapse0x2d7a710();
   input += synapse0x2d7a750();
   input += synapse0x2d7a790();
   input += synapse0x2d7a7d0();
   input += synapse0x2d7a810();
   input += synapse0x2d7a2a0();
   input += synapse0x2d7a2e0();
   input += synapse0x2d7a960();
   input += synapse0x2d7a9a0();
   input += synapse0x2d7a9e0();
   input += synapse0x2d7aa20();
   input += synapse0x2d7aa60();
   input += synapse0x2d7aaa0();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d7a110() {
   double input = input0x2d7a110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d7aae0() {
   double input = -0.534387;
   input += synapse0x2d7ae20();
   input += synapse0x2d7ae60();
   input += synapse0x2d7aea0();
   input += synapse0x2d7aee0();
   input += synapse0x2d7af20();
   input += synapse0x2d7af60();
   input += synapse0x2d7afa0();
   input += synapse0x2d7afe0();
   input += synapse0x2d7b020();
   input += synapse0x2d7b060();
   input += synapse0x2d7b0a0();
   input += synapse0x2d7b0e0();
   input += synapse0x2d7b120();
   input += synapse0x2d7b160();
   input += synapse0x2d7b1a0();
   input += synapse0x2d7b1e0();
   input += synapse0x2d7ac70();
   input += synapse0x2d7acb0();
   input += synapse0x2d7b330();
   input += synapse0x2d7b370();
   input += synapse0x2d7b3b0();
   input += synapse0x2d7b3f0();
   input += synapse0x2d7b430();
   input += synapse0x2d7b470();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d7aae0() {
   double input = input0x2d7aae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d7b4b0() {
   double input = 0.464951;
   input += synapse0x2d74f80();
   input += synapse0x2d74fc0();
   input += synapse0x2d75000();
   input += synapse0x2d75040();
   input += synapse0x2d7ba00();
   input += synapse0x2d7ba40();
   input += synapse0x2d7ba80();
   input += synapse0x2d7bac0();
   input += synapse0x2d7bb00();
   input += synapse0x2d7bb40();
   input += synapse0x2d7bb80();
   input += synapse0x2d7bbc0();
   input += synapse0x2d7bc00();
   input += synapse0x2d7bc40();
   input += synapse0x2d7bc80();
   input += synapse0x2d7bcc0();
   input += synapse0x2d7b640();
   input += synapse0x2d7b680();
   input += synapse0x2d7be10();
   input += synapse0x2d7be50();
   input += synapse0x2d7be90();
   input += synapse0x2d7bed0();
   input += synapse0x2d7bf10();
   input += synapse0x2d7bf50();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d7b4b0() {
   double input = input0x2d7b4b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d7bf90() {
   double input = 1.81856;
   input += synapse0x2d7c2d0();
   input += synapse0x2d7c310();
   input += synapse0x2d7c350();
   input += synapse0x2d7c390();
   input += synapse0x2d7c3d0();
   input += synapse0x2d7c410();
   input += synapse0x2d7c450();
   input += synapse0x2d7c490();
   input += synapse0x2d7c4d0();
   input += synapse0x2d7c510();
   input += synapse0x2d7c550();
   input += synapse0x2d7c590();
   input += synapse0x2d7c5d0();
   input += synapse0x2d7c610();
   input += synapse0x2d7c650();
   input += synapse0x2d7c690();
   input += synapse0x2d7c120();
   input += synapse0x2d7c160();
   input += synapse0x2d7c7e0();
   input += synapse0x2d7c820();
   input += synapse0x2d7c860();
   input += synapse0x2d7c8a0();
   input += synapse0x2d7c8e0();
   input += synapse0x2d7c920();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d7bf90() {
   double input = input0x2d7bf90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d7c960() {
   double input = -0.174658;
   input += synapse0x2d7cca0();
   input += synapse0x2d7cce0();
   input += synapse0x2d7cd20();
   input += synapse0x2d7cd60();
   input += synapse0x2d7cda0();
   input += synapse0x2d7cde0();
   input += synapse0x2d7ce20();
   input += synapse0x2d7ce60();
   input += synapse0x2d7cea0();
   input += synapse0x2d7cee0();
   input += synapse0x2d7cf20();
   input += synapse0x2d7cf60();
   input += synapse0x2d7cfa0();
   input += synapse0x2d7cfe0();
   input += synapse0x2d7d020();
   input += synapse0x2d7d060();
   input += synapse0x2d7caf0();
   input += synapse0x2d7cb30();
   input += synapse0x2d798c0();
   input += synapse0x2d79900();
   input += synapse0x2d79940();
   input += synapse0x2d79980();
   input += synapse0x2d799c0();
   input += synapse0x2d79a00();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d7c960() {
   double input = input0x2d7c960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d79a40() {
   double input = 0.49662;
   input += synapse0x2d79d80();
   input += synapse0x2d79dc0();
   input += synapse0x2d79e00();
   input += synapse0x2d79e40();
   input += synapse0x2d79e80();
   input += synapse0x2d79ec0();
   input += synapse0x2d79f00();
   input += synapse0x2d79f40();
   input += synapse0x2d79f80();
   input += synapse0x2d79fc0();
   input += synapse0x2d7a000();
   input += synapse0x2d7a040();
   input += synapse0x2d7a080();
   input += synapse0x2d7e1c0();
   input += synapse0x2d7e200();
   input += synapse0x2d7e240();
   input += synapse0x2d79bd0();
   input += synapse0x2d79c10();
   input += synapse0x2d7e390();
   input += synapse0x2d7e3d0();
   input += synapse0x2d7e410();
   input += synapse0x2d7e450();
   input += synapse0x2d7e490();
   input += synapse0x2d7e4d0();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d79a40() {
   double input = input0x2d79a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d7e510() {
   double input = -1.03916;
   input += synapse0x2d7e850();
   input += synapse0x2d7e890();
   input += synapse0x2d7e8d0();
   input += synapse0x2d7e910();
   input += synapse0x2d7e950();
   input += synapse0x2d7e990();
   input += synapse0x2d7e9d0();
   input += synapse0x2d7ea10();
   input += synapse0x2d7ea50();
   input += synapse0x2d7ea90();
   input += synapse0x2d7ead0();
   input += synapse0x2d7eb10();
   input += synapse0x2d7eb50();
   input += synapse0x2d7eb90();
   input += synapse0x2d7ebd0();
   input += synapse0x2d7ec10();
   input += synapse0x2d7e6a0();
   input += synapse0x2d7e6e0();
   input += synapse0x2d7ed60();
   input += synapse0x2d7eda0();
   input += synapse0x2d7ede0();
   input += synapse0x2d7ee20();
   input += synapse0x2d7ee60();
   input += synapse0x2d7eea0();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d7e510() {
   double input = input0x2d7e510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d7eee0() {
   double input = 1.12302;
   input += synapse0x2d7f220();
   input += synapse0x2d7f260();
   input += synapse0x2d7f2a0();
   input += synapse0x2d7f2e0();
   input += synapse0x2d7f320();
   input += synapse0x2d7f360();
   input += synapse0x2d7f3a0();
   input += synapse0x2d7f3e0();
   input += synapse0x2d7f420();
   input += synapse0x2d7f460();
   input += synapse0x2d7f4a0();
   input += synapse0x2d7f4e0();
   input += synapse0x2d7f520();
   input += synapse0x2d7f560();
   input += synapse0x2d7f5a0();
   input += synapse0x2d7f5e0();
   input += synapse0x2d7f070();
   input += synapse0x2d7f0b0();
   input += synapse0x2d7f730();
   input += synapse0x2d7f770();
   input += synapse0x2d7f7b0();
   input += synapse0x2d7f7f0();
   input += synapse0x2d7f830();
   input += synapse0x2d7f870();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d7eee0() {
   double input = input0x2d7eee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d7f8b0() {
   double input = 0.545763;
   input += synapse0x2d7fbf0();
   input += synapse0x2d7fc30();
   input += synapse0x2d7fc70();
   input += synapse0x2d7fcb0();
   input += synapse0x2d7fcf0();
   input += synapse0x2d7fd30();
   input += synapse0x2d7fd70();
   input += synapse0x2d7fdb0();
   input += synapse0x2d7fdf0();
   input += synapse0x2d7fe30();
   input += synapse0x2d7fe70();
   input += synapse0x2d7feb0();
   input += synapse0x2d7fef0();
   input += synapse0x2d7ff30();
   input += synapse0x2d7ff70();
   input += synapse0x2d7ffb0();
   input += synapse0x2d7fa40();
   input += synapse0x2d7fa80();
   input += synapse0x2d80100();
   input += synapse0x2d80140();
   input += synapse0x2d80180();
   input += synapse0x2d801c0();
   input += synapse0x2d80200();
   input += synapse0x2d80240();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d7f8b0() {
   double input = input0x2d7f8b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d80280() {
   double input = 0.79796;
   input += synapse0x2d805c0();
   input += synapse0x2d71950();
   input += synapse0x2d71990();
   input += synapse0x2d71c90();
   input += synapse0x2d71cd0();
   input += synapse0x2d71fd0();
   input += synapse0x2d72010();
   input += synapse0x2d72310();
   input += synapse0x2d72350();
   input += synapse0x2d72650();
   input += synapse0x2d72690();
   input += synapse0x2d72990();
   input += synapse0x2d729d0();
   input += synapse0x2d72cd0();
   input += synapse0x2d72d10();
   input += synapse0x2d73010();
   input += synapse0x2d73050();
   input += synapse0x2d73350();
   input += synapse0x2d73390();
   input += synapse0x2d73690();
   input += synapse0x2d736d0();
   input += synapse0x2d739d0();
   input += synapse0x2d73a10();
   input += synapse0x2d73d10();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d80280() {
   double input = input0x2d80280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d82090() {
   double input = 1.7155;
   input += synapse0x2d73d50();
   input += synapse0x2d74a10();
   input += synapse0x2d74a50();
   input += synapse0x2d80410();
   input += synapse0x2d80450();
   input += synapse0x2d74d50();
   input += synapse0x2d74d90();
   input += synapse0x2b2c7b0();
   input += synapse0x2b2c7f0();
   input += synapse0x2d754d0();
   input += synapse0x2d75510();
   input += synapse0x2d75810();
   input += synapse0x2d75850();
   input += synapse0x2d75b50();
   input += synapse0x2d75b90();
   input += synapse0x2d75e90();
   input += synapse0x2d75ed0();
   input += synapse0x2d761d0();
   input += synapse0x2d76210();
   input += synapse0x2d76510();
   input += synapse0x2d76550();
   input += synapse0x2d74050();
   input += synapse0x2d74090();
   input += synapse0x2d82330();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d82090() {
   double input = input0x2d82090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d82370() {
   double input = 3.23992;
   input += synapse0x2d826b0();
   input += synapse0x2d826f0();
   input += synapse0x2d82730();
   input += synapse0x2d82770();
   input += synapse0x2d827b0();
   input += synapse0x2d827f0();
   input += synapse0x2d82830();
   input += synapse0x2d82870();
   input += synapse0x2d828b0();
   input += synapse0x2d828f0();
   input += synapse0x2d82930();
   input += synapse0x2d82970();
   input += synapse0x2d829b0();
   input += synapse0x2d829f0();
   input += synapse0x2d82a30();
   input += synapse0x2d82a70();
   input += synapse0x2d82500();
   input += synapse0x2d82540();
   input += synapse0x2d82bc0();
   input += synapse0x2d82c00();
   input += synapse0x2d82c40();
   input += synapse0x2d82c80();
   input += synapse0x2d82cc0();
   input += synapse0x2d82d00();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d82370() {
   double input = input0x2d82370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d82d40() {
   double input = -0.794861;
   input += synapse0x2d83080();
   input += synapse0x2d830c0();
   input += synapse0x2d83100();
   input += synapse0x2d83140();
   input += synapse0x2d83180();
   input += synapse0x2d831c0();
   input += synapse0x2d83200();
   input += synapse0x2d83240();
   input += synapse0x2d83280();
   input += synapse0x2d832c0();
   input += synapse0x2d83300();
   input += synapse0x2d83340();
   input += synapse0x2d83380();
   input += synapse0x2d833c0();
   input += synapse0x2d83400();
   input += synapse0x2d83440();
   input += synapse0x2d82ed0();
   input += synapse0x2d82f10();
   input += synapse0x2d83590();
   input += synapse0x2d835d0();
   input += synapse0x2d83610();
   input += synapse0x2d83650();
   input += synapse0x2d83690();
   input += synapse0x2d836d0();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d82d40() {
   double input = input0x2d82d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d83710() {
   double input = 1.12732;
   input += synapse0x2d83a50();
   input += synapse0x2d83a90();
   input += synapse0x2d83ad0();
   input += synapse0x2d83b10();
   input += synapse0x2d83b50();
   input += synapse0x2d83b90();
   input += synapse0x2d83bd0();
   input += synapse0x2d83c10();
   input += synapse0x2d83c50();
   input += synapse0x2d83c90();
   input += synapse0x2d83cd0();
   input += synapse0x2d83d10();
   input += synapse0x2d83d50();
   input += synapse0x2d83d90();
   input += synapse0x2d83dd0();
   input += synapse0x2d83e10();
   input += synapse0x2d838a0();
   input += synapse0x2d838e0();
   input += synapse0x2d83f60();
   input += synapse0x2d83fa0();
   input += synapse0x2d83fe0();
   input += synapse0x2d84020();
   input += synapse0x2d84060();
   input += synapse0x2d840a0();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d83710() {
   double input = input0x2d83710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d840e0() {
   double input = 0.669092;
   input += synapse0x2d84420();
   input += synapse0x2d84460();
   input += synapse0x2d844a0();
   input += synapse0x2d844e0();
   input += synapse0x2d84520();
   input += synapse0x2d84560();
   input += synapse0x2d845a0();
   input += synapse0x2d845e0();
   input += synapse0x2d84620();
   input += synapse0x2d84660();
   input += synapse0x2d846a0();
   input += synapse0x2d846e0();
   input += synapse0x2d84720();
   input += synapse0x2d84760();
   input += synapse0x2d847a0();
   input += synapse0x2d847e0();
   input += synapse0x2d84270();
   input += synapse0x2d842b0();
   input += synapse0x2d84930();
   input += synapse0x2d84970();
   input += synapse0x2d849b0();
   input += synapse0x2d849f0();
   input += synapse0x2d84a30();
   input += synapse0x2d84a70();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d840e0() {
   double input = input0x2d840e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d84ab0() {
   double input = 0.063698;
   input += synapse0x2d84df0();
   input += synapse0x2d84e30();
   input += synapse0x2d84e70();
   input += synapse0x2d84eb0();
   input += synapse0x2d84ef0();
   input += synapse0x2d84f30();
   input += synapse0x2d84f70();
   input += synapse0x2d84fb0();
   input += synapse0x2d84ff0();
   input += synapse0x2d7d1b0();
   input += synapse0x2d7d1f0();
   input += synapse0x2d7d230();
   input += synapse0x2d7d270();
   input += synapse0x2d7d2b0();
   input += synapse0x2d7d2f0();
   input += synapse0x2d7d330();
   input += synapse0x2d84c40();
   input += synapse0x2d84c80();
   input += synapse0x2d7d480();
   input += synapse0x2d7d4c0();
   input += synapse0x2d7d500();
   input += synapse0x2d7d540();
   input += synapse0x2d7d580();
   input += synapse0x2d7d5c0();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d84ab0() {
   double input = input0x2d84ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d7d600() {
   double input = -0.514321;
   input += synapse0x2d7d940();
   input += synapse0x2d7d980();
   input += synapse0x2d7d9c0();
   input += synapse0x2d7da00();
   input += synapse0x2d7da40();
   input += synapse0x2d7da80();
   input += synapse0x2d7dac0();
   input += synapse0x2d7db00();
   input += synapse0x2d7db40();
   input += synapse0x2d7db80();
   input += synapse0x2d7dbc0();
   input += synapse0x2d7dc00();
   input += synapse0x2d7dc40();
   input += synapse0x2d7dc80();
   input += synapse0x2d7dcc0();
   input += synapse0x2d7dd00();
   input += synapse0x2d7d790();
   input += synapse0x2d7d7d0();
   input += synapse0x2d7de50();
   input += synapse0x2d7de90();
   input += synapse0x2d7ded0();
   input += synapse0x2d7df10();
   input += synapse0x2d7df50();
   input += synapse0x2d7df90();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d7d600() {
   double input = input0x2d7d600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d7dfd0() {
   double input = 3.38967;
   input += synapse0x2d7e160();
   input += synapse0x2d871f0();
   input += synapse0x2d87230();
   input += synapse0x2d87270();
   input += synapse0x2d872b0();
   input += synapse0x2d872f0();
   input += synapse0x2d87330();
   input += synapse0x2d87370();
   input += synapse0x2d873b0();
   input += synapse0x2d873f0();
   input += synapse0x2d87430();
   input += synapse0x2d87470();
   input += synapse0x2d874b0();
   input += synapse0x2d874f0();
   input += synapse0x2d87530();
   input += synapse0x2d87570();
   input += synapse0x2d87040();
   input += synapse0x2d87080();
   input += synapse0x2d876c0();
   input += synapse0x2d87700();
   input += synapse0x2d87740();
   input += synapse0x2d87780();
   input += synapse0x2d877c0();
   input += synapse0x2d87800();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d7dfd0() {
   double input = input0x2d7dfd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d87840() {
   double input = -0.28174;
   input += synapse0x2d87b80();
   input += synapse0x2d87bc0();
   input += synapse0x2d87c00();
   input += synapse0x2d87c40();
   input += synapse0x2d87c80();
   input += synapse0x2d87cc0();
   input += synapse0x2d87d00();
   input += synapse0x2d87d40();
   input += synapse0x2d87d80();
   input += synapse0x2d87dc0();
   input += synapse0x2d87e00();
   input += synapse0x2d87e40();
   input += synapse0x2d87e80();
   input += synapse0x2d87ec0();
   input += synapse0x2d87f00();
   input += synapse0x2d87f40();
   input += synapse0x2d879d0();
   input += synapse0x2d87a10();
   input += synapse0x2d88090();
   input += synapse0x2d880d0();
   input += synapse0x2d88110();
   input += synapse0x2d88150();
   input += synapse0x2d88190();
   input += synapse0x2d881d0();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d87840() {
   double input = input0x2d87840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d88210() {
   double input = 0.897456;
   input += synapse0x2d88550();
   input += synapse0x2d88590();
   input += synapse0x2d885d0();
   input += synapse0x2d88610();
   input += synapse0x2d88650();
   input += synapse0x2d88690();
   input += synapse0x2d886d0();
   input += synapse0x2d88710();
   input += synapse0x2d88750();
   input += synapse0x2d88790();
   input += synapse0x2d887d0();
   input += synapse0x2d88810();
   input += synapse0x2d88850();
   input += synapse0x2d88890();
   input += synapse0x2d888d0();
   input += synapse0x2d88910();
   input += synapse0x2d883a0();
   input += synapse0x2d883e0();
   input += synapse0x2d88a60();
   input += synapse0x2d88aa0();
   input += synapse0x2d88ae0();
   input += synapse0x2d88b20();
   input += synapse0x2d88b60();
   input += synapse0x2d88ba0();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d88210() {
   double input = input0x2d88210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d88be0() {
   double input = 1.83402;
   input += synapse0x2d88f20();
   input += synapse0x2d88f60();
   input += synapse0x2d88fa0();
   input += synapse0x2d88fe0();
   input += synapse0x2d89020();
   input += synapse0x2d89060();
   input += synapse0x2d890a0();
   input += synapse0x2d890e0();
   input += synapse0x2d89120();
   input += synapse0x2d89160();
   input += synapse0x2d891a0();
   input += synapse0x2d891e0();
   input += synapse0x2d89220();
   input += synapse0x2d89260();
   input += synapse0x2d892a0();
   input += synapse0x2d892e0();
   input += synapse0x2d88d70();
   input += synapse0x2d88db0();
   input += synapse0x2d89430();
   input += synapse0x2d89470();
   input += synapse0x2d894b0();
   input += synapse0x2d894f0();
   input += synapse0x2d89530();
   input += synapse0x2d89570();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d88be0() {
   double input = input0x2d88be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d895b0() {
   double input = -0.0750843;
   input += synapse0x2d898f0();
   input += synapse0x2d89930();
   input += synapse0x2d89970();
   input += synapse0x2d899b0();
   input += synapse0x2d899f0();
   input += synapse0x2d89a30();
   input += synapse0x2d89a70();
   input += synapse0x2d89ab0();
   input += synapse0x2d89af0();
   input += synapse0x2d89b30();
   input += synapse0x2d89b70();
   input += synapse0x2d89bb0();
   input += synapse0x2d89bf0();
   input += synapse0x2d89c30();
   input += synapse0x2d89c70();
   input += synapse0x2d89cb0();
   input += synapse0x2d89740();
   input += synapse0x2d89780();
   input += synapse0x2d89e00();
   input += synapse0x2d89e40();
   input += synapse0x2d89e80();
   input += synapse0x2d89ec0();
   input += synapse0x2d89f00();
   input += synapse0x2d89f40();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d895b0() {
   double input = input0x2d895b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d89f80() {
   double input = -1.70841;
   input += synapse0x2d8a2c0();
   input += synapse0x2d8a300();
   input += synapse0x2d8a340();
   input += synapse0x2d8a380();
   input += synapse0x2d8a3c0();
   input += synapse0x2d8a400();
   input += synapse0x2d8a440();
   input += synapse0x2d8a480();
   input += synapse0x2d8a4c0();
   input += synapse0x2d8a500();
   input += synapse0x2d8a540();
   input += synapse0x2d8a580();
   input += synapse0x2d8a5c0();
   input += synapse0x2d8a600();
   input += synapse0x2d8a640();
   input += synapse0x2d8a680();
   input += synapse0x2d8a110();
   input += synapse0x2d8a150();
   input += synapse0x2d8a7d0();
   input += synapse0x2d8a810();
   input += synapse0x2d8a850();
   input += synapse0x2d8a890();
   input += synapse0x2d8a8d0();
   input += synapse0x2d8a910();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d89f80() {
   double input = input0x2d89f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d8a950() {
   double input = 0.755548;
   input += synapse0x2d8ac90();
   input += synapse0x2d8acd0();
   input += synapse0x2d8ad10();
   input += synapse0x2d8ad50();
   input += synapse0x2d8ad90();
   input += synapse0x2d8add0();
   input += synapse0x2d8ae10();
   input += synapse0x2d8ae50();
   input += synapse0x2d8ae90();
   input += synapse0x2d8aed0();
   input += synapse0x2d8af10();
   input += synapse0x2d8af50();
   input += synapse0x2d8af90();
   input += synapse0x2d8afd0();
   input += synapse0x2d8b010();
   input += synapse0x2d8b050();
   input += synapse0x2d8aae0();
   input += synapse0x2d8ab20();
   input += synapse0x2d8b1a0();
   input += synapse0x2d8b1e0();
   input += synapse0x2d8b220();
   input += synapse0x2d8b260();
   input += synapse0x2d8b2a0();
   input += synapse0x2d8b2e0();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d8a950() {
   double input = input0x2d8a950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d8b320() {
   double input = 0.347778;
   input += synapse0x2d8b660();
   input += synapse0x2d8b6a0();
   input += synapse0x2d8b6e0();
   input += synapse0x2d8b720();
   input += synapse0x2d8b760();
   input += synapse0x2d8b7a0();
   input += synapse0x2d8b7e0();
   input += synapse0x2d8b820();
   input += synapse0x2d8b860();
   input += synapse0x2d8b8a0();
   input += synapse0x2d8b8e0();
   input += synapse0x2d8b920();
   input += synapse0x2d8b960();
   input += synapse0x2d8b9a0();
   input += synapse0x2d8b9e0();
   input += synapse0x2d8ba20();
   input += synapse0x2d8b4b0();
   input += synapse0x2d8b4f0();
   input += synapse0x2d8bb70();
   input += synapse0x2d8bbb0();
   input += synapse0x2d8bbf0();
   input += synapse0x2d8bc30();
   input += synapse0x2d8bc70();
   input += synapse0x2d8bcb0();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d8b320() {
   double input = input0x2d8b320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d8bcf0() {
   double input = -0.626093;
   input += synapse0x2d8c030();
   input += synapse0x2d80600();
   input += synapse0x2d80640();
   input += synapse0x2d80680();
   input += synapse0x2d808d0();
   input += synapse0x2d80910();
   input += synapse0x2d80950();
   input += synapse0x2d80ba0();
   input += synapse0x2d80be0();
   input += synapse0x2d80e30();
   input += synapse0x2d80e70();
   input += synapse0x2d80eb0();
   input += synapse0x2d81100();
   input += synapse0x2d81140();
   input += synapse0x2d81390();
   input += synapse0x2d813d0();
   input += synapse0x2d8be80();
   input += synapse0x2d8bec0();
   input += synapse0x2d81520();
   input += synapse0x2d81a30();
   input += synapse0x2d81a70();
   input += synapse0x2d81ab0();
   input += synapse0x2d81d00();
   input += synapse0x2d81d40();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d8bcf0() {
   double input = input0x2d8bcf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d81d80() {
   double input = -2.06557;
   input += synapse0x2d815f0();
   input += synapse0x2d81630();
   input += synapse0x2d81670();
   input += synapse0x2d816b0();
   input += synapse0x2d82030();
   input += synapse0x2d8e380();
   input += synapse0x2d8e3c0();
   input += synapse0x2d8e400();
   input += synapse0x2d8e440();
   input += synapse0x2d8e480();
   input += synapse0x2d8e4c0();
   input += synapse0x2d8e500();
   input += synapse0x2d8e540();
   input += synapse0x2d8e580();
   input += synapse0x2d8e5c0();
   input += synapse0x2d8e600();
   input += synapse0x2d81f10();
   input += synapse0x2d81f50();
   input += synapse0x2d8e750();
   input += synapse0x2d8e790();
   input += synapse0x2d8e7d0();
   input += synapse0x2d8e810();
   input += synapse0x2d8e850();
   input += synapse0x2d8e890();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d81d80() {
   double input = input0x2d81d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d8e8d0() {
   double input = 2.79165;
   input += synapse0x2d8ec10();
   input += synapse0x2d8ec50();
   input += synapse0x2d8ec90();
   input += synapse0x2d8ecd0();
   input += synapse0x2d8ed10();
   input += synapse0x2d8ed50();
   input += synapse0x2d8ed90();
   input += synapse0x2d8edd0();
   input += synapse0x2d8ee10();
   input += synapse0x2d8ee50();
   input += synapse0x2d8ee90();
   input += synapse0x2d8eed0();
   input += synapse0x2d8ef10();
   input += synapse0x2d8ef50();
   input += synapse0x2d8ef90();
   input += synapse0x2d8efd0();
   input += synapse0x2d8ea60();
   input += synapse0x2d8eaa0();
   input += synapse0x2d8f120();
   input += synapse0x2d8f160();
   input += synapse0x2d8f1a0();
   input += synapse0x2d8f1e0();
   input += synapse0x2d8f220();
   input += synapse0x2d8f260();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d8e8d0() {
   double input = input0x2d8e8d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d8f2a0() {
   double input = -0.333683;
   input += synapse0x2d8f5e0();
   input += synapse0x2d8f620();
   input += synapse0x2d8f660();
   input += synapse0x2d8f6a0();
   input += synapse0x2d8f6e0();
   input += synapse0x2d8f720();
   input += synapse0x2d8f760();
   input += synapse0x2d8f7a0();
   input += synapse0x2d8f7e0();
   input += synapse0x2d8f820();
   input += synapse0x2d8f860();
   input += synapse0x2d8f8a0();
   input += synapse0x2d8f8e0();
   input += synapse0x2d8f920();
   input += synapse0x2d8f960();
   input += synapse0x2d8f9a0();
   input += synapse0x2d8f430();
   input += synapse0x2d8f470();
   input += synapse0x2d8faf0();
   input += synapse0x2d8fb30();
   input += synapse0x2d8fb70();
   input += synapse0x2d8fbb0();
   input += synapse0x2d8fbf0();
   input += synapse0x2d8fc30();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d8f2a0() {
   double input = input0x2d8f2a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d8fc70() {
   double input = -0.601073;
   input += synapse0x2d8ffb0();
   input += synapse0x2d8fff0();
   input += synapse0x2d90030();
   input += synapse0x2d90070();
   input += synapse0x2d900b0();
   input += synapse0x2d900f0();
   input += synapse0x2d90130();
   input += synapse0x2d90170();
   input += synapse0x2d901b0();
   input += synapse0x2d901f0();
   input += synapse0x2d90230();
   input += synapse0x2d90270();
   input += synapse0x2d902b0();
   input += synapse0x2d902f0();
   input += synapse0x2d90330();
   input += synapse0x2d90370();
   input += synapse0x2d8fe00();
   input += synapse0x2d8fe40();
   input += synapse0x2d904c0();
   input += synapse0x2d90500();
   input += synapse0x2d90540();
   input += synapse0x2d90580();
   input += synapse0x2d905c0();
   input += synapse0x2d90600();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d8fc70() {
   double input = input0x2d8fc70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d90640() {
   double input = -0.286069;
   input += synapse0x2d90980();
   input += synapse0x2d909c0();
   input += synapse0x2d90a00();
   input += synapse0x2d90a40();
   input += synapse0x2d90a80();
   input += synapse0x2d90ac0();
   input += synapse0x2d90b00();
   input += synapse0x2d90b40();
   input += synapse0x2d90b80();
   input += synapse0x2d90bc0();
   input += synapse0x2d90c00();
   input += synapse0x2d90c40();
   input += synapse0x2d90c80();
   input += synapse0x2d90cc0();
   input += synapse0x2d90d00();
   input += synapse0x2d90d40();
   input += synapse0x2d907d0();
   input += synapse0x2d90810();
   input += synapse0x2d90e90();
   input += synapse0x2d90ed0();
   input += synapse0x2d90f10();
   input += synapse0x2d90f50();
   input += synapse0x2d90f90();
   input += synapse0x2d90fd0();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d90640() {
   double input = input0x2d90640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d91010() {
   double input = -0.18475;
   input += synapse0x2d91350();
   input += synapse0x2d91390();
   input += synapse0x2d913d0();
   input += synapse0x2d91410();
   input += synapse0x2d91450();
   input += synapse0x2d91490();
   input += synapse0x2d914d0();
   input += synapse0x2d91510();
   input += synapse0x2d91550();
   input += synapse0x2d91590();
   input += synapse0x2d915d0();
   input += synapse0x2d91610();
   input += synapse0x2d91650();
   input += synapse0x2d91690();
   input += synapse0x2d916d0();
   input += synapse0x2d91710();
   input += synapse0x2d911a0();
   input += synapse0x2d911e0();
   input += synapse0x2d91860();
   input += synapse0x2d918a0();
   input += synapse0x2d918e0();
   input += synapse0x2d91920();
   input += synapse0x2d91960();
   input += synapse0x2d919a0();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d91010() {
   double input = input0x2d91010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d919e0() {
   double input = -0.52629;
   input += synapse0x2d91d20();
   input += synapse0x2d91d60();
   input += synapse0x2d91da0();
   input += synapse0x2d91de0();
   input += synapse0x2d91e20();
   input += synapse0x2d91e60();
   input += synapse0x2d91ea0();
   input += synapse0x2d91ee0();
   input += synapse0x2d91f20();
   input += synapse0x2d91f60();
   input += synapse0x2d91fa0();
   input += synapse0x2d91fe0();
   input += synapse0x2d92020();
   input += synapse0x2d92060();
   input += synapse0x2d920a0();
   input += synapse0x2d920e0();
   input += synapse0x2d91b70();
   input += synapse0x2d91bb0();
   input += synapse0x2d92230();
   input += synapse0x2d92270();
   input += synapse0x2d922b0();
   input += synapse0x2d922f0();
   input += synapse0x2d92330();
   input += synapse0x2d92370();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d919e0() {
   double input = input0x2d919e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d923b0() {
   double input = 0.249339;
   input += synapse0x2d926f0();
   input += synapse0x2d92730();
   input += synapse0x2d92770();
   input += synapse0x2d927b0();
   input += synapse0x2d927f0();
   input += synapse0x2d92830();
   input += synapse0x2d92870();
   input += synapse0x2d928b0();
   input += synapse0x2d928f0();
   input += synapse0x2d92930();
   input += synapse0x2d92970();
   input += synapse0x2d929b0();
   input += synapse0x2d929f0();
   input += synapse0x2d92a30();
   input += synapse0x2d92a70();
   input += synapse0x2d92ab0();
   input += synapse0x2d92540();
   input += synapse0x2d92580();
   input += synapse0x2d92c00();
   input += synapse0x2d92c40();
   input += synapse0x2d92c80();
   input += synapse0x2d92cc0();
   input += synapse0x2d92d00();
   input += synapse0x2d92d40();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d923b0() {
   double input = input0x2d923b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d92d80() {
   double input = 2.26059;
   input += synapse0x2d7b7f0();
   input += synapse0x2d7b830();
   input += synapse0x2d7b870();
   input += synapse0x2d7b8b0();
   input += synapse0x2d7b8f0();
   input += synapse0x2d7b930();
   input += synapse0x2d7b970();
   input += synapse0x2d7b9b0();
   input += synapse0x2d934d0();
   input += synapse0x2d93510();
   input += synapse0x2d93550();
   input += synapse0x2d93590();
   input += synapse0x2d935d0();
   input += synapse0x2d93610();
   input += synapse0x2d93650();
   input += synapse0x2d93690();
   input += synapse0x2d92f10();
   input += synapse0x2d92f50();
   input += synapse0x2d937e0();
   input += synapse0x2d93820();
   input += synapse0x2d93860();
   input += synapse0x2d938a0();
   input += synapse0x2d938e0();
   input += synapse0x2d93920();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d92d80() {
   double input = input0x2d92d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d93960() {
   double input = 0.934667;
   input += synapse0x2d93ca0();
   input += synapse0x2d93ce0();
   input += synapse0x2d93d20();
   input += synapse0x2d93d60();
   input += synapse0x2d93da0();
   input += synapse0x2d93de0();
   input += synapse0x2d93e20();
   input += synapse0x2d93e60();
   input += synapse0x2d93ea0();
   input += synapse0x2d93ee0();
   input += synapse0x2d93f20();
   input += synapse0x2d93f60();
   input += synapse0x2d93fa0();
   input += synapse0x2d93fe0();
   input += synapse0x2d94020();
   input += synapse0x2d94060();
   input += synapse0x2d93af0();
   input += synapse0x2d93b30();
   input += synapse0x2d941b0();
   input += synapse0x2d941f0();
   input += synapse0x2d94230();
   input += synapse0x2d94270();
   input += synapse0x2d942b0();
   input += synapse0x2d942f0();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d93960() {
   double input = input0x2d93960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d94330() {
   double input = 0.574166;
   input += synapse0x2d94670();
   input += synapse0x2d946b0();
   input += synapse0x2d946f0();
   input += synapse0x2d94730();
   input += synapse0x2d94770();
   input += synapse0x2d947b0();
   input += synapse0x2d947f0();
   input += synapse0x2d94830();
   input += synapse0x2d94870();
   input += synapse0x2d948b0();
   input += synapse0x2d948f0();
   input += synapse0x2d94930();
   input += synapse0x2d94970();
   input += synapse0x2d949b0();
   input += synapse0x2d949f0();
   input += synapse0x2d94a30();
   input += synapse0x2d944c0();
   input += synapse0x2d94500();
   input += synapse0x2d85030();
   input += synapse0x2d85070();
   input += synapse0x2d850b0();
   input += synapse0x2d850f0();
   input += synapse0x2d85130();
   input += synapse0x2d85170();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d94330() {
   double input = input0x2d94330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d851b0() {
   double input = -3.1751;
   input += synapse0x2d854f0();
   input += synapse0x2d85530();
   input += synapse0x2d85570();
   input += synapse0x2d855b0();
   input += synapse0x2d855f0();
   input += synapse0x2d85630();
   input += synapse0x2d85670();
   input += synapse0x2d856b0();
   input += synapse0x2d856f0();
   input += synapse0x2d85730();
   input += synapse0x2d85770();
   input += synapse0x2d857b0();
   input += synapse0x2d857f0();
   input += synapse0x2d85830();
   input += synapse0x2d85870();
   input += synapse0x2d858b0();
   input += synapse0x2d85340();
   input += synapse0x2d85380();
   input += synapse0x2d85a00();
   input += synapse0x2d85a40();
   input += synapse0x2d85a80();
   input += synapse0x2d85ac0();
   input += synapse0x2d85b00();
   input += synapse0x2d85b40();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d851b0() {
   double input = input0x2d851b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d85b80() {
   double input = 0.960482;
   input += synapse0x2d85ec0();
   input += synapse0x2d85f00();
   input += synapse0x2d85f40();
   input += synapse0x2d85f80();
   input += synapse0x2d85fc0();
   input += synapse0x2d86000();
   input += synapse0x2d86040();
   input += synapse0x2d86080();
   input += synapse0x2d860c0();
   input += synapse0x2d86100();
   input += synapse0x2d86140();
   input += synapse0x2d86180();
   input += synapse0x2d861c0();
   input += synapse0x2d86200();
   input += synapse0x2d86240();
   input += synapse0x2d86280();
   input += synapse0x2d85d10();
   input += synapse0x2d85d50();
   input += synapse0x2d863d0();
   input += synapse0x2d86410();
   input += synapse0x2d86450();
   input += synapse0x2d86490();
   input += synapse0x2d864d0();
   input += synapse0x2d86510();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d85b80() {
   double input = input0x2d85b80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d86550() {
   double input = -4.20689;
   input += synapse0x2d86890();
   input += synapse0x2d868d0();
   input += synapse0x2d86910();
   input += synapse0x2d86950();
   input += synapse0x2d86990();
   input += synapse0x2d869d0();
   input += synapse0x2d86a10();
   input += synapse0x2d86a50();
   input += synapse0x2d86a90();
   input += synapse0x2d86ad0();
   input += synapse0x2d86b10();
   input += synapse0x2d86b50();
   input += synapse0x2d86b90();
   input += synapse0x2d86bd0();
   input += synapse0x2d86c10();
   input += synapse0x2d86c50();
   input += synapse0x2d866e0();
   input += synapse0x2d86720();
   input += synapse0x2d86da0();
   input += synapse0x2d86de0();
   input += synapse0x2d86e20();
   input += synapse0x2d86e60();
   input += synapse0x2d86ea0();
   input += synapse0x2d86ee0();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d86550() {
   double input = input0x2d86550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d98b90() {
   double input = 1.14893;
   input += synapse0x2d98db0();
   input += synapse0x2d98df0();
   input += synapse0x2d98e30();
   input += synapse0x2d98e70();
   input += synapse0x2d98eb0();
   input += synapse0x2d98ef0();
   input += synapse0x2d98f30();
   input += synapse0x2d98f70();
   input += synapse0x2d98fb0();
   input += synapse0x2d98ff0();
   input += synapse0x2d99030();
   input += synapse0x2d99070();
   input += synapse0x2d990b0();
   input += synapse0x2d990f0();
   input += synapse0x2d99130();
   input += synapse0x2d99170();
   input += synapse0x2d86f20();
   input += synapse0x2d86f60();
   input += synapse0x2d992c0();
   input += synapse0x2d99300();
   input += synapse0x2d99340();
   input += synapse0x2d99380();
   input += synapse0x2d993c0();
   input += synapse0x2d99400();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d98b90() {
   double input = input0x2d98b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d99440() {
   double input = 3.43178;
   input += synapse0x2d99780();
   input += synapse0x2d997c0();
   input += synapse0x2d99800();
   input += synapse0x2d99840();
   input += synapse0x2d99880();
   input += synapse0x2d998c0();
   input += synapse0x2d99900();
   input += synapse0x2d99940();
   input += synapse0x2d99980();
   input += synapse0x2d999c0();
   input += synapse0x2d99a00();
   input += synapse0x2d99a40();
   input += synapse0x2d99a80();
   input += synapse0x2d99ac0();
   input += synapse0x2d99b00();
   input += synapse0x2d99b40();
   input += synapse0x2d995d0();
   input += synapse0x2d99610();
   input += synapse0x2d99c90();
   input += synapse0x2d99cd0();
   input += synapse0x2d99d10();
   input += synapse0x2d99d50();
   input += synapse0x2d99d90();
   input += synapse0x2d99dd0();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d99440() {
   double input = input0x2d99440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d99e10() {
   double input = 0.518297;
   input += synapse0x2d9a150();
   input += synapse0x2d9a190();
   input += synapse0x2d9a1d0();
   input += synapse0x2d9a210();
   input += synapse0x2d9a250();
   input += synapse0x2d9a290();
   input += synapse0x2d9a2d0();
   input += synapse0x2d9a310();
   input += synapse0x2d9a350();
   input += synapse0x2d9a390();
   input += synapse0x2d9a3d0();
   input += synapse0x2d9a410();
   input += synapse0x2d9a450();
   input += synapse0x2d9a490();
   input += synapse0x2d9a4d0();
   input += synapse0x2d9a510();
   input += synapse0x2d99fa0();
   input += synapse0x2d99fe0();
   input += synapse0x2d9a660();
   input += synapse0x2d9a6a0();
   input += synapse0x2d9a6e0();
   input += synapse0x2d9a720();
   input += synapse0x2d9a760();
   input += synapse0x2d9a7a0();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d99e10() {
   double input = input0x2d99e10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2d9a7e0() {
   double input = -0.0363024;
   input += synapse0x2d9ab20();
   input += synapse0x2d9ab60();
   input += synapse0x2d9aba0();
   input += synapse0x2d9abe0();
   input += synapse0x2d9ac20();
   input += synapse0x2d9ac60();
   input += synapse0x2d9aca0();
   input += synapse0x2d9ace0();
   input += synapse0x2d9ad20();
   input += synapse0x2d9ad60();
   input += synapse0x2d9ada0();
   input += synapse0x2d9ade0();
   input += synapse0x2d9ae20();
   input += synapse0x2d9ae60();
   input += synapse0x2d9aea0();
   input += synapse0x2d9aee0();
   input += synapse0x2d9a970();
   input += synapse0x2d9a9b0();
   input += synapse0x2d9b030();
   input += synapse0x2d9b070();
   input += synapse0x2d9b0b0();
   input += synapse0x2d9b0f0();
   input += synapse0x2d9b130();
   input += synapse0x2d9b170();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2d9a7e0() {
   double input = input0x2d9a7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2da19e0() {
   double input = -0.396216;
   input += synapse0x2b3b080();
   input += synapse0x2b3b0c0();
   input += synapse0x2d78c20();
   input += synapse0x2d78c60();
   input += synapse0x2d795f0();
   input += synapse0x2d79630();
   input += synapse0x2d7a3c0();
   input += synapse0x2d7a400();
   input += synapse0x2d7ad90();
   input += synapse0x2d7add0();
   input += synapse0x2d7b760();
   input += synapse0x2d7b7a0();
   input += synapse0x2d7c240();
   input += synapse0x2d7c280();
   input += synapse0x2d7cc10();
   input += synapse0x2d7cc50();
   input += synapse0x2d79cf0();
   input += synapse0x2d79d30();
   input += synapse0x2d7e7c0();
   input += synapse0x2d7e800();
   input += synapse0x2d7f190();
   input += synapse0x2d7f1d0();
   input += synapse0x2d7fb60();
   input += synapse0x2d7fba0();
   input += synapse0x2d80530();
   input += synapse0x2d80570();
   input += synapse0x2d746d0();
   input += synapse0x2d74710();
   input += synapse0x2d82620();
   input += synapse0x2d82660();
   input += synapse0x2d82ff0();
   input += synapse0x2d83030();
   input += synapse0x2d839c0();
   input += synapse0x2d83a00();
   input += synapse0x2d84390();
   input += synapse0x2d843d0();
   input += synapse0x2d84d60();
   input += synapse0x2d84da0();
   input += synapse0x2d7d8b0();
   input += synapse0x2d7d8f0();
   input += synapse0x2d87160();
   input += synapse0x2d871a0();
   input += synapse0x2d87af0();
   input += synapse0x2d87b30();
   input += synapse0x2d884c0();
   input += synapse0x2d88500();
   input += synapse0x2d88e90();
   input += synapse0x2d88ed0();
   input += synapse0x2d89860();
   input += synapse0x2d898a0();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2da19e0() {
   double input = input0x2da19e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2da1d80() {
   double input = 0.609925;
   input += synapse0x2d8bfa0();
   input += synapse0x2d8bfe0();
   input += synapse0x2d81560();
   input += synapse0x2d815a0();
   input += synapse0x2d8eb80();
   input += synapse0x2d8ebc0();
   input += synapse0x2d8f550();
   input += synapse0x2d8f590();
   input += synapse0x2d8ff20();
   input += synapse0x2d8ff60();
   input += synapse0x2d908f0();
   input += synapse0x2d90930();
   input += synapse0x2d912c0();
   input += synapse0x2d91300();
   input += synapse0x2d91c90();
   input += synapse0x2d91cd0();
   input += synapse0x2d92660();
   input += synapse0x2d926a0();
   input += synapse0x2d93030();
   input += synapse0x2d93070();
   input += synapse0x2d93c10();
   input += synapse0x2d93c50();
   input += synapse0x2d945e0();
   input += synapse0x2d94620();
   input += synapse0x2d85460();
   input += synapse0x2d854a0();
   input += synapse0x2d85e30();
   input += synapse0x2d85e70();
   input += synapse0x2d86800();
   input += synapse0x2d86840();
   input += synapse0x2d98d20();
   input += synapse0x2d98d60();
   input += synapse0x2d996f0();
   input += synapse0x2d99730();
   input += synapse0x2d9a0c0();
   input += synapse0x2d9a100();
   input += synapse0x2d9aa90();
   input += synapse0x2d9aad0();
   input += synapse0x2d76980();
   input += synapse0x2d769c0();
   input += synapse0x2d8a230();
   input += synapse0x2d8a270();
   input += synapse0x2d9b1b0();
   input += synapse0x2d9b1f0();
   input += synapse0x2d9b230();
   input += synapse0x2d9b270();
   input += synapse0x2da2120();
   input += synapse0x2da2160();
   input += synapse0x2da21a0();
   input += synapse0x2da21e0();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2da1d80() {
   double input = input0x2da1d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2da2220() {
   double input = -0.0656609;
   input += synapse0x2da2560();
   input += synapse0x2da25a0();
   input += synapse0x2da25e0();
   input += synapse0x2da2620();
   input += synapse0x2da2660();
   input += synapse0x2da26a0();
   input += synapse0x2da26e0();
   input += synapse0x2da2720();
   input += synapse0x2da2760();
   input += synapse0x2da27a0();
   input += synapse0x2da27e0();
   input += synapse0x2da2820();
   input += synapse0x2da2860();
   input += synapse0x2da28a0();
   input += synapse0x2da28e0();
   input += synapse0x2da2920();
   input += synapse0x2da23b0();
   input += synapse0x2da23f0();
   input += synapse0x2da2a70();
   input += synapse0x2da2ab0();
   input += synapse0x2da2af0();
   input += synapse0x2da2b30();
   input += synapse0x2da2b70();
   input += synapse0x2da2bb0();
   input += synapse0x2da2bf0();
   input += synapse0x2da2c30();
   input += synapse0x2da2c70();
   input += synapse0x2da2cb0();
   input += synapse0x2da2cf0();
   input += synapse0x2da2d30();
   input += synapse0x2da2d70();
   input += synapse0x2da2db0();
   input += synapse0x2da2960();
   input += synapse0x2da29a0();
   input += synapse0x2da29e0();
   input += synapse0x2da2a20();
   input += synapse0x2da3000();
   input += synapse0x2da3040();
   input += synapse0x2da3080();
   input += synapse0x2da30c0();
   input += synapse0x2da3100();
   input += synapse0x2da3140();
   input += synapse0x2da3180();
   input += synapse0x2da31c0();
   input += synapse0x2da3200();
   input += synapse0x2da3240();
   input += synapse0x2da3280();
   input += synapse0x2da32c0();
   input += synapse0x2da3300();
   input += synapse0x2da3340();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2da2220() {
   double input = input0x2da2220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2da3380() {
   double input = 0.805637;
   input += synapse0x2da36c0();
   input += synapse0x2da3700();
   input += synapse0x2da3740();
   input += synapse0x2da3780();
   input += synapse0x2da37c0();
   input += synapse0x2da3800();
   input += synapse0x2da3840();
   input += synapse0x2da3880();
   input += synapse0x2da38c0();
   input += synapse0x2da3900();
   input += synapse0x2da3940();
   input += synapse0x2da3980();
   input += synapse0x2da39c0();
   input += synapse0x2da3a00();
   input += synapse0x2da3a40();
   input += synapse0x2da3a80();
   input += synapse0x2da3510();
   input += synapse0x2da3550();
   input += synapse0x2da3bd0();
   input += synapse0x2da3c10();
   input += synapse0x2da3c50();
   input += synapse0x2da3c90();
   input += synapse0x2da3cd0();
   input += synapse0x2da3d10();
   input += synapse0x2da3d50();
   input += synapse0x2da3d90();
   input += synapse0x2da3dd0();
   input += synapse0x2da3e10();
   input += synapse0x2da3e50();
   input += synapse0x2da3e90();
   input += synapse0x2da3ed0();
   input += synapse0x2da3f10();
   input += synapse0x2da3ac0();
   input += synapse0x2da3b00();
   input += synapse0x2da3b40();
   input += synapse0x2da3b80();
   input += synapse0x2da4160();
   input += synapse0x2da41a0();
   input += synapse0x2da41e0();
   input += synapse0x2da4220();
   input += synapse0x2da4260();
   input += synapse0x2da42a0();
   input += synapse0x2da42e0();
   input += synapse0x2da4320();
   input += synapse0x2da4360();
   input += synapse0x2da43a0();
   input += synapse0x2da43e0();
   input += synapse0x2da4420();
   input += synapse0x2da4460();
   input += synapse0x2da44a0();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2da3380() {
   double input = input0x2da3380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2da44e0() {
   double input = 1.18145;
   input += synapse0x2da4820();
   input += synapse0x2da4860();
   input += synapse0x2da48a0();
   input += synapse0x2da48e0();
   input += synapse0x2da4920();
   input += synapse0x2da4960();
   input += synapse0x2da49a0();
   input += synapse0x2da49e0();
   input += synapse0x2da4a20();
   input += synapse0x2da4a60();
   input += synapse0x2da4aa0();
   input += synapse0x2da4ae0();
   input += synapse0x2da4b20();
   input += synapse0x2da4b60();
   input += synapse0x2da4ba0();
   input += synapse0x2da4be0();
   input += synapse0x2da4670();
   input += synapse0x2da46b0();
   input += synapse0x2da4d30();
   input += synapse0x2da4d70();
   input += synapse0x2da4db0();
   input += synapse0x2da4df0();
   input += synapse0x2da4e30();
   input += synapse0x2da4e70();
   input += synapse0x2da4eb0();
   input += synapse0x2da4ef0();
   input += synapse0x2da4f30();
   input += synapse0x2da4f70();
   input += synapse0x2da4fb0();
   input += synapse0x2da4ff0();
   input += synapse0x2da5030();
   input += synapse0x2da5070();
   input += synapse0x2da4c20();
   input += synapse0x2da4c60();
   input += synapse0x2da4ca0();
   input += synapse0x2da4ce0();
   input += synapse0x2da52c0();
   input += synapse0x2da5300();
   input += synapse0x2da5340();
   input += synapse0x2da5380();
   input += synapse0x2da53c0();
   input += synapse0x2da5400();
   input += synapse0x2da5440();
   input += synapse0x2da5480();
   input += synapse0x2da54c0();
   input += synapse0x2da5500();
   input += synapse0x2da5540();
   input += synapse0x2da5580();
   input += synapse0x2da55c0();
   input += synapse0x2da5600();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2da44e0() {
   double input = input0x2da44e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::input0x2da5640() {
   double input = 5.62005;
   input += synapse0x2da5860();
   input += synapse0x2da58a0();
   input += synapse0x2da58e0();
   input += synapse0x2da5920();
   input += synapse0x2da5960();
   return input;
}

double NNfunction_ns_chiPlus2_sL::neuron0x2da5640() {
   double input = input0x2da5640();
   return (input * 1)+0;
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d715f0() {
   return (neuron0x2d71730()*0.127893);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d71630() {
   return (neuron0x2d71a70()*0.027154);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d76a10() {
   return (neuron0x2d71db0()*-0.0432127);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d76a50() {
   return (neuron0x2d720f0()*-0.710003);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d76a90() {
   return (neuron0x2d72430()*-0.0191263);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d76ad0() {
   return (neuron0x2d72770()*0.0132304);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d76b10() {
   return (neuron0x2d72ab0()*-0.00266034);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d76b50() {
   return (neuron0x2d72df0()*-0.0534117);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d76b90() {
   return (neuron0x2d73130()*0.0446171);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d76bd0() {
   return (neuron0x2d73470()*-0.011465);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d76c10() {
   return (neuron0x2d737b0()*0.0107196);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d76c50() {
   return (neuron0x2d73af0()*-0.193822);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d76c90() {
   return (neuron0x2d73e30()*0.154338);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d76cd0() {
   return (neuron0x2d74170()*0.0861014);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d76d10() {
   return (neuron0x2d744b0()*0.217584);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d76d50() {
   return (neuron0x2d747f0()*-0.130061);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d71560() {
   return (neuron0x2d74b30()*0.124498);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d715a0() {
   return (neuron0x2d75090()*-0.0268959);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2b2c8d0() {
   return (neuron0x2d752b0()*-0.000934727);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2b2c910() {
   return (neuron0x2d755f0()*-0.0220759);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d76fb0() {
   return (neuron0x2d75930()*0.0553068);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d76ff0() {
   return (neuron0x2d75c70()*0.00781886);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d77030() {
   return (neuron0x2d75fb0()*-0.0630455);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d77070() {
   return (neuron0x2d762f0()*-0.0308153);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d773f0() {
   return (neuron0x2d71730()*0.0715808);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d77430() {
   return (neuron0x2d71a70()*0.0283964);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d77470() {
   return (neuron0x2d71db0()*-0.0598907);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d774b0() {
   return (neuron0x2d720f0()*0.018034);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d774f0() {
   return (neuron0x2d72430()*-0.0188647);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d77530() {
   return (neuron0x2d72770()*-0.020544);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d77570() {
   return (neuron0x2d72ab0()*-0.0167114);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d775b0() {
   return (neuron0x2d72df0()*0.00740382);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d775f0() {
   return (neuron0x2d73130()*-0.0290549);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d76ea0() {
   return (neuron0x2d73470()*0.147404);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d76ee0() {
   return (neuron0x2d737b0()*0.169795);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d76f20() {
   return (neuron0x2d73af0()*0.0844896);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d76f60() {
   return (neuron0x2d73e30()*-0.632429);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d77840() {
   return (neuron0x2d74170()*0.0517135);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d77880() {
   return (neuron0x2d744b0()*-0.0293304);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d778c0() {
   return (neuron0x2d747f0()*0.0102779);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d77240() {
   return (neuron0x2d74b30()*0.00106526);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d77280() {
   return (neuron0x2d75090()*0.0600268);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d77a10() {
   return (neuron0x2d752b0()*0.052462);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d77a50() {
   return (neuron0x2d755f0()*0.0129627);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d77a90() {
   return (neuron0x2d75930()*-0.0265084);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d77ad0() {
   return (neuron0x2d75c70()*0.0108601);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d77b10() {
   return (neuron0x2d75fb0()*-0.00944798);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d77b50() {
   return (neuron0x2d762f0()*-0.0884106);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d77ed0() {
   return (neuron0x2d71730()*-0.0113514);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d77f10() {
   return (neuron0x2d71a70()*0.000672757);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d77f50() {
   return (neuron0x2d71db0()*0.0345766);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d77f90() {
   return (neuron0x2d720f0()*3.83621);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d77fd0() {
   return (neuron0x2d72430()*-0.00632262);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78010() {
   return (neuron0x2d72770()*0.00114537);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78050() {
   return (neuron0x2d72ab0()*3.99179e-05);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78090() {
   return (neuron0x2d72df0()*0.000723042);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d780d0() {
   return (neuron0x2d73130()*0.000610935);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78110() {
   return (neuron0x2d73470()*0.00465879);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78150() {
   return (neuron0x2d737b0()*-0.00243365);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78190() {
   return (neuron0x2d73af0()*-0.00277642);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d781d0() {
   return (neuron0x2d73e30()*0.164799);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78210() {
   return (neuron0x2d74170()*0.0191673);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78250() {
   return (neuron0x2d744b0()*-0.00569843);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78290() {
   return (neuron0x2d747f0()*0.00154071);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d77d20() {
   return (neuron0x2d74b30()*0.0289727);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d77d60() {
   return (neuron0x2d75090()*-0.00395186);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2b2cfc0() {
   return (neuron0x2d752b0()*-0.0180286);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2b3a890() {
   return (neuron0x2d755f0()*-0.0064914);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2b3a8d0() {
   return (neuron0x2d75930()*-0.00795774);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d607c0() {
   return (neuron0x2d75c70()*-0.00595023);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d60800() {
   return (neuron0x2d75fb0()*-0.00166717);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d60840() {
   return (neuron0x2d762f0()*-0.00435414);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2b3b110() {
   return (neuron0x2d71730()*-0.0413084);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d777c0() {
   return (neuron0x2d71a70()*-0.0187537);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d77800() {
   return (neuron0x2d71db0()*-0.00793535);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d783e0() {
   return (neuron0x2d720f0()*0.468942);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78420() {
   return (neuron0x2d72430()*0.00826336);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78460() {
   return (neuron0x2d72770()*-0.0278798);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d784a0() {
   return (neuron0x2d72ab0()*0.0525693);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d784e0() {
   return (neuron0x2d72df0()*0.0114297);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78520() {
   return (neuron0x2d73130()*-0.0446968);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78560() {
   return (neuron0x2d73470()*-0.0169558);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d785a0() {
   return (neuron0x2d737b0()*0.178682);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d785e0() {
   return (neuron0x2d73af0()*-0.0272133);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78620() {
   return (neuron0x2d73e30()*0.307136);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78660() {
   return (neuron0x2d74170()*-0.0269667);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d786a0() {
   return (neuron0x2d744b0()*-0.00319102);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d786e0() {
   return (neuron0x2d747f0()*-0.0144115);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d71670() {
   return (neuron0x2d74b30()*-0.061666);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d716b0() {
   return (neuron0x2d75090()*-0.0340553);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d716f0() {
   return (neuron0x2d752b0()*-0.054606);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78830() {
   return (neuron0x2d755f0()*0.0266234);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78870() {
   return (neuron0x2d75930()*0.00645591);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d788b0() {
   return (neuron0x2d75c70()*-0.0200417);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d788f0() {
   return (neuron0x2d75fb0()*0.00809824);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78930() {
   return (neuron0x2d762f0()*0.16163);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78cb0() {
   return (neuron0x2d71730()*0.0524517);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78cf0() {
   return (neuron0x2d71a70()*-0.0719017);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78d30() {
   return (neuron0x2d71db0()*-0.197648);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78d70() {
   return (neuron0x2d720f0()*-0.000744413);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78db0() {
   return (neuron0x2d72430()*0.160039);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78df0() {
   return (neuron0x2d72770()*-0.01711);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78e30() {
   return (neuron0x2d72ab0()*0.0363843);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78e70() {
   return (neuron0x2d72df0()*0.0332013);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78eb0() {
   return (neuron0x2d73130()*0.0340548);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78ef0() {
   return (neuron0x2d73470()*0.0295212);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78f30() {
   return (neuron0x2d737b0()*-0.0127484);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78f70() {
   return (neuron0x2d73af0()*0.452976);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78fb0() {
   return (neuron0x2d73e30()*-0.12585);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78ff0() {
   return (neuron0x2d74170()*-0.622409);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d79030() {
   return (neuron0x2d744b0()*0.293262);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d79070() {
   return (neuron0x2d747f0()*0.1032);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78b00() {
   return (neuron0x2d74b30()*-0.442856);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78b40() {
   return (neuron0x2d75090()*0.125105);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d791c0() {
   return (neuron0x2d752b0()*0.105209);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d79200() {
   return (neuron0x2d755f0()*0.13024);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d79240() {
   return (neuron0x2d75930()*-0.00121408);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d79280() {
   return (neuron0x2d75c70()*0.0299933);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d792c0() {
   return (neuron0x2d75fb0()*-0.00373883);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d79300() {
   return (neuron0x2d762f0()*-0.0980453);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d79680() {
   return (neuron0x2d71730()*0.0426858);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d796c0() {
   return (neuron0x2d71a70()*-0.00833008);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d79700() {
   return (neuron0x2d71db0()*0.0105125);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d79740() {
   return (neuron0x2d720f0()*-0.321132);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d79780() {
   return (neuron0x2d72430()*0.0486494);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d797c0() {
   return (neuron0x2d72770()*-0.179941);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d79800() {
   return (neuron0x2d72ab0()*-0.0941663);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d79840() {
   return (neuron0x2d72df0()*-0.0801148);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d79880() {
   return (neuron0x2d73130()*0.00111365);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2b3abe0() {
   return (neuron0x2d73470()*0.100289);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2b3ac20() {
   return (neuron0x2d737b0()*0.0862217);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2b3ac60() {
   return (neuron0x2d73af0()*-0.383647);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2b3aca0() {
   return (neuron0x2d73e30()*0.763358);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2b3ace0() {
   return (neuron0x2d74170()*-0.721749);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2b3ad20() {
   return (neuron0x2d744b0()*-0.213282);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2b3ad60() {
   return (neuron0x2d747f0()*-0.162788);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d794d0() {
   return (neuron0x2d74b30()*-0.486062);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d79510() {
   return (neuron0x2d75090()*-0.407861);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2b3aeb0() {
   return (neuron0x2d752b0()*-0.478611);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2b3aef0() {
   return (neuron0x2d755f0()*-0.508332);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2b3af30() {
   return (neuron0x2d75930()*-0.0243644);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2b3af70() {
   return (neuron0x2d75c70()*0.00774387);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2b3afb0() {
   return (neuron0x2d75fb0()*0.012862);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7a0d0() {
   return (neuron0x2d762f0()*0.0787303);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7a450() {
   return (neuron0x2d71730()*0.00796782);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7a490() {
   return (neuron0x2d71a70()*0.0198133);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7a4d0() {
   return (neuron0x2d71db0()*0.0135949);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7a510() {
   return (neuron0x2d720f0()*-0.301524);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7a550() {
   return (neuron0x2d72430()*-0.137393);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7a590() {
   return (neuron0x2d72770()*-0.035727);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7a5d0() {
   return (neuron0x2d72ab0()*0.0242082);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7a610() {
   return (neuron0x2d72df0()*0.384951);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7a650() {
   return (neuron0x2d73130()*-0.00287729);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7a690() {
   return (neuron0x2d73470()*0.000513757);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7a6d0() {
   return (neuron0x2d737b0()*0.0202947);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7a710() {
   return (neuron0x2d73af0()*0.0462196);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7a750() {
   return (neuron0x2d73e30()*-0.320776);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7a790() {
   return (neuron0x2d74170()*0.0219686);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7a7d0() {
   return (neuron0x2d744b0()*-0.0867679);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7a810() {
   return (neuron0x2d747f0()*-0.0868945);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7a2a0() {
   return (neuron0x2d74b30()*-0.00776627);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7a2e0() {
   return (neuron0x2d75090()*0.013563);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7a960() {
   return (neuron0x2d752b0()*0.0172745);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7a9a0() {
   return (neuron0x2d755f0()*0.0202662);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7a9e0() {
   return (neuron0x2d75930()*-0.00428909);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7aa20() {
   return (neuron0x2d75c70()*0.0139463);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7aa60() {
   return (neuron0x2d75fb0()*-0.00152059);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7aaa0() {
   return (neuron0x2d762f0()*-0.0927734);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7ae20() {
   return (neuron0x2d71730()*0.154429);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7ae60() {
   return (neuron0x2d71a70()*-0.0259059);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7aea0() {
   return (neuron0x2d71db0()*-0.0644529);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7aee0() {
   return (neuron0x2d720f0()*-0.138008);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7af20() {
   return (neuron0x2d72430()*-0.0389538);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7af60() {
   return (neuron0x2d72770()*-0.0597875);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7afa0() {
   return (neuron0x2d72ab0()*-0.0740792);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7afe0() {
   return (neuron0x2d72df0()*-0.0486883);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7b020() {
   return (neuron0x2d73130()*0.193541);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7b060() {
   return (neuron0x2d73470()*-0.869095);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7b0a0() {
   return (neuron0x2d737b0()*0.363039);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7b0e0() {
   return (neuron0x2d73af0()*0.0478522);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7b120() {
   return (neuron0x2d73e30()*0.550804);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7b160() {
   return (neuron0x2d74170()*0.0668756);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7b1a0() {
   return (neuron0x2d744b0()*-0.0457903);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7b1e0() {
   return (neuron0x2d747f0()*-0.0250702);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7ac70() {
   return (neuron0x2d74b30()*0.042032);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7acb0() {
   return (neuron0x2d75090()*-0.0462886);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7b330() {
   return (neuron0x2d752b0()*0.125407);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7b370() {
   return (neuron0x2d755f0()*0.095102);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7b3b0() {
   return (neuron0x2d75930()*-0.0470399);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7b3f0() {
   return (neuron0x2d75c70()*0.0328702);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7b430() {
   return (neuron0x2d75fb0()*-0.0884312);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7b470() {
   return (neuron0x2d762f0()*0.0288931);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d74f80() {
   return (neuron0x2d71730()*0.185176);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d74fc0() {
   return (neuron0x2d71a70()*-0.251813);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d75000() {
   return (neuron0x2d71db0()*0.112212);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d75040() {
   return (neuron0x2d720f0()*-0.320581);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7ba00() {
   return (neuron0x2d72430()*0.151006);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7ba40() {
   return (neuron0x2d72770()*-0.0543411);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7ba80() {
   return (neuron0x2d72ab0()*-0.0769943);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7bac0() {
   return (neuron0x2d72df0()*-0.072232);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7bb00() {
   return (neuron0x2d73130()*-0.161878);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7bb40() {
   return (neuron0x2d73470()*-0.108136);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7bb80() {
   return (neuron0x2d737b0()*-0.425304);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7bbc0() {
   return (neuron0x2d73af0()*-0.685744);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7bc00() {
   return (neuron0x2d73e30()*-0.0494356);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7bc40() {
   return (neuron0x2d74170()*-0.23031);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7bc80() {
   return (neuron0x2d744b0()*0.0804243);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7bcc0() {
   return (neuron0x2d747f0()*-0.0874597);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7b640() {
   return (neuron0x2d74b30()*-0.17066);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7b680() {
   return (neuron0x2d75090()*-0.426152);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7be10() {
   return (neuron0x2d752b0()*-0.422436);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7be50() {
   return (neuron0x2d755f0()*-0.0513469);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7be90() {
   return (neuron0x2d75930()*-0.246261);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7bed0() {
   return (neuron0x2d75c70()*-0.211461);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7bf10() {
   return (neuron0x2d75fb0()*-0.21254);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7bf50() {
   return (neuron0x2d762f0()*-0.0859723);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7c2d0() {
   return (neuron0x2d71730()*0.0165882);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7c310() {
   return (neuron0x2d71a70()*-0.00184844);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7c350() {
   return (neuron0x2d71db0()*-0.0379058);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7c390() {
   return (neuron0x2d720f0()*0.138481);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7c3d0() {
   return (neuron0x2d72430()*0.00271956);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7c410() {
   return (neuron0x2d72770()*0.0368208);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7c450() {
   return (neuron0x2d72ab0()*0.0117769);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7c490() {
   return (neuron0x2d72df0()*0.0294476);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7c4d0() {
   return (neuron0x2d73130()*-0.0118887);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7c510() {
   return (neuron0x2d73470()*-0.0294286);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7c550() {
   return (neuron0x2d737b0()*0.0121286);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7c590() {
   return (neuron0x2d73af0()*-0.00997479);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7c5d0() {
   return (neuron0x2d73e30()*-0.257884);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7c610() {
   return (neuron0x2d74170()*-0.0342521);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7c650() {
   return (neuron0x2d744b0()*0.0028672);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7c690() {
   return (neuron0x2d747f0()*-0.0111897);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7c120() {
   return (neuron0x2d74b30()*-0.000906647);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7c160() {
   return (neuron0x2d75090()*-0.00906895);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7c7e0() {
   return (neuron0x2d752b0()*-0.01559);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7c820() {
   return (neuron0x2d755f0()*0.00830985);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7c860() {
   return (neuron0x2d75930()*0.00586473);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7c8a0() {
   return (neuron0x2d75c70()*-0.00292241);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7c8e0() {
   return (neuron0x2d75fb0()*0.00379636);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7c920() {
   return (neuron0x2d762f0()*-0.672676);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7cca0() {
   return (neuron0x2d71730()*0.0599191);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7cce0() {
   return (neuron0x2d71a70()*0.0891477);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7cd20() {
   return (neuron0x2d71db0()*0.00274672);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7cd60() {
   return (neuron0x2d720f0()*0.329361);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7cda0() {
   return (neuron0x2d72430()*0.0748719);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7cde0() {
   return (neuron0x2d72770()*0.0270886);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7ce20() {
   return (neuron0x2d72ab0()*0.0230374);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7ce60() {
   return (neuron0x2d72df0()*-0.244754);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7cea0() {
   return (neuron0x2d73130()*0.135774);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7cee0() {
   return (neuron0x2d73470()*-0.180047);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7cf20() {
   return (neuron0x2d737b0()*0.142255);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7cf60() {
   return (neuron0x2d73af0()*0.314735);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7cfa0() {
   return (neuron0x2d73e30()*-0.506498);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7cfe0() {
   return (neuron0x2d74170()*-0.0771768);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7d020() {
   return (neuron0x2d744b0()*-0.107087);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7d060() {
   return (neuron0x2d747f0()*-0.0217375);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7caf0() {
   return (neuron0x2d74b30()*0.0614397);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7cb30() {
   return (neuron0x2d75090()*0.0893718);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d798c0() {
   return (neuron0x2d752b0()*0.225923);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d79900() {
   return (neuron0x2d755f0()*0.124131);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d79940() {
   return (neuron0x2d75930()*0.0767908);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d79980() {
   return (neuron0x2d75c70()*0.0893456);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d799c0() {
   return (neuron0x2d75fb0()*0.0169797);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d79a00() {
   return (neuron0x2d762f0()*0.0571551);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d79d80() {
   return (neuron0x2d71730()*-0.0817125);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d79dc0() {
   return (neuron0x2d71a70()*-0.0970527);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d79e00() {
   return (neuron0x2d71db0()*0.000170913);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d79e40() {
   return (neuron0x2d720f0()*-0.40683);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d79e80() {
   return (neuron0x2d72430()*-0.0314083);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d79ec0() {
   return (neuron0x2d72770()*-0.148204);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d79f00() {
   return (neuron0x2d72ab0()*0.0487167);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d79f40() {
   return (neuron0x2d72df0()*-0.0849545);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d79f80() {
   return (neuron0x2d73130()*0.0444938);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d79fc0() {
   return (neuron0x2d73470()*0.0750154);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7a000() {
   return (neuron0x2d737b0()*0.0552175);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7a040() {
   return (neuron0x2d73af0()*-0.0600761);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7a080() {
   return (neuron0x2d73e30()*0.169112);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7e1c0() {
   return (neuron0x2d74170()*0.135221);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7e200() {
   return (neuron0x2d744b0()*-0.122324);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7e240() {
   return (neuron0x2d747f0()*0.0526233);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d79bd0() {
   return (neuron0x2d74b30()*0.00345796);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d79c10() {
   return (neuron0x2d75090()*0.0103399);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7e390() {
   return (neuron0x2d752b0()*-0.00417486);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7e3d0() {
   return (neuron0x2d755f0()*0.0352677);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7e410() {
   return (neuron0x2d75930()*0.000996137);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7e450() {
   return (neuron0x2d75c70()*-0.0121166);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7e490() {
   return (neuron0x2d75fb0()*0.0222367);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7e4d0() {
   return (neuron0x2d762f0()*0.0244808);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7e850() {
   return (neuron0x2d71730()*-0.0047124);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7e890() {
   return (neuron0x2d71a70()*0.00194912);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7e8d0() {
   return (neuron0x2d71db0()*0.59174);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7e910() {
   return (neuron0x2d720f0()*0.00245711);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7e950() {
   return (neuron0x2d72430()*-0.000440103);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7e990() {
   return (neuron0x2d72770()*0.00146946);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7e9d0() {
   return (neuron0x2d72ab0()*0.00412771);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7ea10() {
   return (neuron0x2d72df0()*-0.00817429);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7ea50() {
   return (neuron0x2d73130()*-0.00110831);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7ea90() {
   return (neuron0x2d73470()*-0.00570353);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7ead0() {
   return (neuron0x2d737b0()*0.00861162);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7eb10() {
   return (neuron0x2d73af0()*-0.00247784);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7eb50() {
   return (neuron0x2d73e30()*0.170871);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7eb90() {
   return (neuron0x2d74170()*-0.00640268);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7ebd0() {
   return (neuron0x2d744b0()*-0.00546661);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7ec10() {
   return (neuron0x2d747f0()*-0.000250375);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7e6a0() {
   return (neuron0x2d74b30()*-0.00159473);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7e6e0() {
   return (neuron0x2d75090()*-0.00707187);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7ed60() {
   return (neuron0x2d752b0()*-0.00495574);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7eda0() {
   return (neuron0x2d755f0()*-0.00953712);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7ede0() {
   return (neuron0x2d75930()*0.0044831);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7ee20() {
   return (neuron0x2d75c70()*0.00463717);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7ee60() {
   return (neuron0x2d75fb0()*0.00168786);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7eea0() {
   return (neuron0x2d762f0()*0.923899);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7f220() {
   return (neuron0x2d71730()*-0.030994);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7f260() {
   return (neuron0x2d71a70()*-0.0440883);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7f2a0() {
   return (neuron0x2d71db0()*0.0374129);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7f2e0() {
   return (neuron0x2d720f0()*0.501145);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7f320() {
   return (neuron0x2d72430()*-0.0274605);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7f360() {
   return (neuron0x2d72770()*-0.0175745);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7f3a0() {
   return (neuron0x2d72ab0()*0.0090782);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7f3e0() {
   return (neuron0x2d72df0()*0.0936295);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7f420() {
   return (neuron0x2d73130()*-0.0535395);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7f460() {
   return (neuron0x2d73470()*0.0554867);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7f4a0() {
   return (neuron0x2d737b0()*-0.0332341);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7f4e0() {
   return (neuron0x2d73af0()*0.0323909);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7f520() {
   return (neuron0x2d73e30()*-0.211535);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7f560() {
   return (neuron0x2d74170()*0.0145955);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7f5a0() {
   return (neuron0x2d744b0()*-0.132596);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7f5e0() {
   return (neuron0x2d747f0()*-0.0771757);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7f070() {
   return (neuron0x2d74b30()*0.0116602);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7f0b0() {
   return (neuron0x2d75090()*0.0210819);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7f730() {
   return (neuron0x2d752b0()*0.000670013);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7f770() {
   return (neuron0x2d755f0()*-0.0489632);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7f7b0() {
   return (neuron0x2d75930()*-0.0108781);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7f7f0() {
   return (neuron0x2d75c70()*-0.0252483);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7f830() {
   return (neuron0x2d75fb0()*0.0238767);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7f870() {
   return (neuron0x2d762f0()*-0.0469052);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7fbf0() {
   return (neuron0x2d71730()*0.0993767);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7fc30() {
   return (neuron0x2d71a70()*-0.0497371);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7fc70() {
   return (neuron0x2d71db0()*-0.24621);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7fcb0() {
   return (neuron0x2d720f0()*0.205367);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7fcf0() {
   return (neuron0x2d72430()*-0.0164707);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7fd30() {
   return (neuron0x2d72770()*-0.139008);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7fd70() {
   return (neuron0x2d72ab0()*-0.0257284);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7fdb0() {
   return (neuron0x2d72df0()*-0.0811577);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7fdf0() {
   return (neuron0x2d73130()*0.0367684);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7fe30() {
   return (neuron0x2d73470()*0.00288146);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7fe70() {
   return (neuron0x2d737b0()*-0.0150269);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7feb0() {
   return (neuron0x2d73af0()*-0.0870346);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7fef0() {
   return (neuron0x2d73e30()*-0.464169);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7ff30() {
   return (neuron0x2d74170()*0.156436);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7ff70() {
   return (neuron0x2d744b0()*-0.0463643);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7ffb0() {
   return (neuron0x2d747f0()*0.0150923);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7fa40() {
   return (neuron0x2d74b30()*0.158069);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7fa80() {
   return (neuron0x2d75090()*-0.0516586);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d80100() {
   return (neuron0x2d752b0()*0.00884597);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d80140() {
   return (neuron0x2d755f0()*-0.0745094);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d80180() {
   return (neuron0x2d75930()*0.0173502);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d801c0() {
   return (neuron0x2d75c70()*0.0435395);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d80200() {
   return (neuron0x2d75fb0()*0.0130108);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d80240() {
   return (neuron0x2d762f0()*-0.31234);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d805c0() {
   return (neuron0x2d71730()*-0.0226587);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d71950() {
   return (neuron0x2d71a70()*0.00216021);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d71990() {
   return (neuron0x2d71db0()*-0.0177556);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d71c90() {
   return (neuron0x2d720f0()*4.78587);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d71cd0() {
   return (neuron0x2d72430()*-0.0126362);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d71fd0() {
   return (neuron0x2d72770()*0.0034818);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d72010() {
   return (neuron0x2d72ab0()*0.00542086);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d72310() {
   return (neuron0x2d72df0()*0.0112559);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d72350() {
   return (neuron0x2d73130()*-0.00671923);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d72650() {
   return (neuron0x2d73470()*-0.00557266);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d72690() {
   return (neuron0x2d737b0()*-0.01371);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d72990() {
   return (neuron0x2d73af0()*-0.0119859);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d729d0() {
   return (neuron0x2d73e30()*-0.26499);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d72cd0() {
   return (neuron0x2d74170()*-0.0298047);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d72d10() {
   return (neuron0x2d744b0()*-0.0232999);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d73010() {
   return (neuron0x2d747f0()*-0.00822217);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d73050() {
   return (neuron0x2d74b30()*0.000492791);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d73350() {
   return (neuron0x2d75090()*-0.0195754);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d73390() {
   return (neuron0x2d752b0()*-0.0365961);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d73690() {
   return (neuron0x2d755f0()*-0.0231253);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d736d0() {
   return (neuron0x2d75930()*-0.0104566);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d739d0() {
   return (neuron0x2d75c70()*-0.00744505);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d73a10() {
   return (neuron0x2d75fb0()*-0.0036961);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d73d10() {
   return (neuron0x2d762f0()*0.0146759);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d73d50() {
   return (neuron0x2d71730()*0.0675188);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d74a10() {
   return (neuron0x2d71a70()*0.14319);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d74a50() {
   return (neuron0x2d71db0()*-0.0892789);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d80410() {
   return (neuron0x2d720f0()*-0.324192);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d80450() {
   return (neuron0x2d72430()*0.0402338);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d74d50() {
   return (neuron0x2d72770()*-0.102431);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d74d90() {
   return (neuron0x2d72ab0()*-0.100068);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2b2c7b0() {
   return (neuron0x2d72df0()*-0.120238);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2b2c7f0() {
   return (neuron0x2d73130()*0.0358454);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d754d0() {
   return (neuron0x2d73470()*0.0700322);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d75510() {
   return (neuron0x2d737b0()*0.0601805);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d75810() {
   return (neuron0x2d73af0()*0.187253);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d75850() {
   return (neuron0x2d73e30()*-0.0674335);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d75b50() {
   return (neuron0x2d74170()*0.0449982);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d75b90() {
   return (neuron0x2d744b0()*-0.232929);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d75e90() {
   return (neuron0x2d747f0()*-0.308473);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d75ed0() {
   return (neuron0x2d74b30()*-0.0207294);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d761d0() {
   return (neuron0x2d75090()*0.0405846);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d76210() {
   return (neuron0x2d752b0()*0.0431168);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d76510() {
   return (neuron0x2d755f0()*0.0224039);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d76550() {
   return (neuron0x2d75930()*-0.0271935);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d74050() {
   return (neuron0x2d75c70()*0.0100546);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d74090() {
   return (neuron0x2d75fb0()*-0.0168036);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d82330() {
   return (neuron0x2d762f0()*-0.0537546);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d826b0() {
   return (neuron0x2d71730()*0.0298667);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d826f0() {
   return (neuron0x2d71a70()*-0.00461807);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d82730() {
   return (neuron0x2d71db0()*4.3385);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d82770() {
   return (neuron0x2d720f0()*-0.00475952);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d827b0() {
   return (neuron0x2d72430()*0.00424406);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d827f0() {
   return (neuron0x2d72770()*0.0167308);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d82830() {
   return (neuron0x2d72ab0()*0.00513563);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d82870() {
   return (neuron0x2d72df0()*0.0106845);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d828b0() {
   return (neuron0x2d73130()*0.00020096);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d828f0() {
   return (neuron0x2d73470()*0.000736144);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d82930() {
   return (neuron0x2d737b0()*0.00566609);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d82970() {
   return (neuron0x2d73af0()*0.0172322);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d829b0() {
   return (neuron0x2d73e30()*0.0218359);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d829f0() {
   return (neuron0x2d74170()*0.00269345);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d82a30() {
   return (neuron0x2d744b0()*0.000262775);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d82a70() {
   return (neuron0x2d747f0()*0.0023117);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d82500() {
   return (neuron0x2d74b30()*-0.0111955);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d82540() {
   return (neuron0x2d75090()*0.000485206);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d82bc0() {
   return (neuron0x2d752b0()*-0.000679327);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d82c00() {
   return (neuron0x2d755f0()*0.000174765);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d82c40() {
   return (neuron0x2d75930()*-0.000599126);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d82c80() {
   return (neuron0x2d75c70()*-0.00221783);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d82cc0() {
   return (neuron0x2d75fb0()*0.00312851);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d82d00() {
   return (neuron0x2d762f0()*3.3507);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83080() {
   return (neuron0x2d71730()*-0.00151549);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d830c0() {
   return (neuron0x2d71a70()*-0.00308979);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83100() {
   return (neuron0x2d71db0()*0.49187);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83140() {
   return (neuron0x2d720f0()*-0.00373081);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83180() {
   return (neuron0x2d72430()*-0.0121033);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d831c0() {
   return (neuron0x2d72770()*-0.0093028);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83200() {
   return (neuron0x2d72ab0()*-0.00978379);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83240() {
   return (neuron0x2d72df0()*-0.0167701);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83280() {
   return (neuron0x2d73130()*-0.00190367);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d832c0() {
   return (neuron0x2d73470()*0.000846914);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83300() {
   return (neuron0x2d737b0()*0.0174122);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83340() {
   return (neuron0x2d73af0()*0.0018535);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83380() {
   return (neuron0x2d73e30()*0.124123);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d833c0() {
   return (neuron0x2d74170()*0.000170452);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83400() {
   return (neuron0x2d744b0()*-0.0118058);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83440() {
   return (neuron0x2d747f0()*0.00182455);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d82ed0() {
   return (neuron0x2d74b30()*0.00709747);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d82f10() {
   return (neuron0x2d75090()*-0.00457176);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83590() {
   return (neuron0x2d752b0()*-0.00350426);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d835d0() {
   return (neuron0x2d755f0()*-0.00349763);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83610() {
   return (neuron0x2d75930()*-0.0028404);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83650() {
   return (neuron0x2d75c70()*0.000805482);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83690() {
   return (neuron0x2d75fb0()*-0.00204757);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d836d0() {
   return (neuron0x2d762f0()*-0.794413);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83a50() {
   return (neuron0x2d71730()*0.0341763);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83a90() {
   return (neuron0x2d71a70()*0.00619597);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83ad0() {
   return (neuron0x2d71db0()*1.95785);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83b10() {
   return (neuron0x2d720f0()*0.00693513);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83b50() {
   return (neuron0x2d72430()*0.00774369);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83b90() {
   return (neuron0x2d72770()*0.0091189);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83bd0() {
   return (neuron0x2d72ab0()*0.00797812);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83c10() {
   return (neuron0x2d72df0()*0.0103038);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83c50() {
   return (neuron0x2d73130()*0.00867572);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83c90() {
   return (neuron0x2d73470()*-0.00686436);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83cd0() {
   return (neuron0x2d737b0()*-0.00949712);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83d10() {
   return (neuron0x2d73af0()*0.0290491);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83d50() {
   return (neuron0x2d73e30()*0.0392254);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83d90() {
   return (neuron0x2d74170()*0.00159761);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83dd0() {
   return (neuron0x2d744b0()*0.0158602);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83e10() {
   return (neuron0x2d747f0()*0.00660355);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d838a0() {
   return (neuron0x2d74b30()*-0.0254258);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d838e0() {
   return (neuron0x2d75090()*-0.00197031);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83f60() {
   return (neuron0x2d752b0()*0.000874297);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83fa0() {
   return (neuron0x2d755f0()*-0.000635628);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83fe0() {
   return (neuron0x2d75930()*-0.0065549);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d84020() {
   return (neuron0x2d75c70()*-0.00315533);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d84060() {
   return (neuron0x2d75fb0()*-0.00208544);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d840a0() {
   return (neuron0x2d762f0()*0.0588464);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d84420() {
   return (neuron0x2d71730()*0.15808);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d84460() {
   return (neuron0x2d71a70()*-0.0276646);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d844a0() {
   return (neuron0x2d71db0()*-0.0485676);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d844e0() {
   return (neuron0x2d720f0()*0.292385);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d84520() {
   return (neuron0x2d72430()*-0.0269881);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d84560() {
   return (neuron0x2d72770()*0.0230502);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d845a0() {
   return (neuron0x2d72ab0()*0.0450079);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d845e0() {
   return (neuron0x2d72df0()*-0.0776556);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d84620() {
   return (neuron0x2d73130()*-0.00280788);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d84660() {
   return (neuron0x2d73470()*-0.0423709);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d846a0() {
   return (neuron0x2d737b0()*0.0896198);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d846e0() {
   return (neuron0x2d73af0()*-0.298076);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d84720() {
   return (neuron0x2d73e30()*0.0474753);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d84760() {
   return (neuron0x2d74170()*0.237893);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d847a0() {
   return (neuron0x2d744b0()*0.0364728);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d847e0() {
   return (neuron0x2d747f0()*-0.133891);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d84270() {
   return (neuron0x2d74b30()*0.272909);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d842b0() {
   return (neuron0x2d75090()*-0.061076);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d84930() {
   return (neuron0x2d752b0()*-0.0589982);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d84970() {
   return (neuron0x2d755f0()*-0.0246325);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d849b0() {
   return (neuron0x2d75930()*0.149517);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d849f0() {
   return (neuron0x2d75c70()*-0.0096412);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d84a30() {
   return (neuron0x2d75fb0()*-0.0641855);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d84a70() {
   return (neuron0x2d762f0()*0.135427);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d84df0() {
   return (neuron0x2d71730()*-0.00833414);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d84e30() {
   return (neuron0x2d71a70()*0.0474537);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d84e70() {
   return (neuron0x2d71db0()*-0.125407);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d84eb0() {
   return (neuron0x2d720f0()*-0.215677);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d84ef0() {
   return (neuron0x2d72430()*0.00921009);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d84f30() {
   return (neuron0x2d72770()*0.163809);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d84f70() {
   return (neuron0x2d72ab0()*0.95956);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d84fb0() {
   return (neuron0x2d72df0()*-0.0968886);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d84ff0() {
   return (neuron0x2d73130()*-0.0414712);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7d1b0() {
   return (neuron0x2d73470()*0.020551);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7d1f0() {
   return (neuron0x2d737b0()*-0.0263281);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7d230() {
   return (neuron0x2d73af0()*0.0232056);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7d270() {
   return (neuron0x2d73e30()*-0.45974);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7d2b0() {
   return (neuron0x2d74170()*0.0426111);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7d2f0() {
   return (neuron0x2d744b0()*-0.148101);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7d330() {
   return (neuron0x2d747f0()*-0.081873);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d84c40() {
   return (neuron0x2d74b30()*0.0479434);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d84c80() {
   return (neuron0x2d75090()*0.0293379);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7d480() {
   return (neuron0x2d752b0()*-0.00349502);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7d4c0() {
   return (neuron0x2d755f0()*-0.0216011);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7d500() {
   return (neuron0x2d75930()*0.000360204);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7d540() {
   return (neuron0x2d75c70()*-0.023832);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7d580() {
   return (neuron0x2d75fb0()*-0.004848);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7d5c0() {
   return (neuron0x2d762f0()*0.000321529);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7d940() {
   return (neuron0x2d71730()*0.626322);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7d980() {
   return (neuron0x2d71a70()*-0.0319534);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7d9c0() {
   return (neuron0x2d71db0()*0.582339);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7da00() {
   return (neuron0x2d720f0()*-0.0186712);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7da40() {
   return (neuron0x2d72430()*-0.0643879);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7da80() {
   return (neuron0x2d72770()*0.0185446);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7dac0() {
   return (neuron0x2d72ab0()*0.00715167);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7db00() {
   return (neuron0x2d72df0()*0.115817);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7db40() {
   return (neuron0x2d73130()*0.00850158);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7db80() {
   return (neuron0x2d73470()*0.0344071);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7dbc0() {
   return (neuron0x2d737b0()*-0.0251683);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7dc00() {
   return (neuron0x2d73af0()*0.0991124);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7dc40() {
   return (neuron0x2d73e30()*0.314402);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7dc80() {
   return (neuron0x2d74170()*-0.0309001);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7dcc0() {
   return (neuron0x2d744b0()*0.0769057);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7dd00() {
   return (neuron0x2d747f0()*0.0956163);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7d790() {
   return (neuron0x2d74b30()*-0.0893895);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7d7d0() {
   return (neuron0x2d75090()*0.00265506);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7de50() {
   return (neuron0x2d752b0()*0.0839316);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7de90() {
   return (neuron0x2d755f0()*0.0659982);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7ded0() {
   return (neuron0x2d75930()*-0.0716932);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7df10() {
   return (neuron0x2d75c70()*-0.0226307);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7df50() {
   return (neuron0x2d75fb0()*0.0495823);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7df90() {
   return (neuron0x2d762f0()*0.447312);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7e160() {
   return (neuron0x2d71730()*0.0119509);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d871f0() {
   return (neuron0x2d71a70()*-0.000193141);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d87230() {
   return (neuron0x2d71db0()*3.61009);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d87270() {
   return (neuron0x2d720f0()*0.010056);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d872b0() {
   return (neuron0x2d72430()*-0.0081359);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d872f0() {
   return (neuron0x2d72770()*0.0110847);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d87330() {
   return (neuron0x2d72ab0()*0.00524075);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d87370() {
   return (neuron0x2d72df0()*0.00522358);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d873b0() {
   return (neuron0x2d73130()*-0.003633);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d873f0() {
   return (neuron0x2d73470()*-0.00713399);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d87430() {
   return (neuron0x2d737b0()*-0.00306499);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d87470() {
   return (neuron0x2d73af0()*0.00969773);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d874b0() {
   return (neuron0x2d73e30()*-0.0867757);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d874f0() {
   return (neuron0x2d74170()*-0.000304357);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d87530() {
   return (neuron0x2d744b0()*-0.00112657);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d87570() {
   return (neuron0x2d747f0()*0.00468537);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d87040() {
   return (neuron0x2d74b30()*-0.00986612);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d87080() {
   return (neuron0x2d75090()*0.00342553);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d876c0() {
   return (neuron0x2d752b0()*-0.00500167);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d87700() {
   return (neuron0x2d755f0()*0.0022226);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d87740() {
   return (neuron0x2d75930()*0.00218238);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d87780() {
   return (neuron0x2d75c70()*0.00201199);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d877c0() {
   return (neuron0x2d75fb0()*-4.80536e-05);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d87800() {
   return (neuron0x2d762f0()*-2.84999);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d87b80() {
   return (neuron0x2d71730()*-0.197877);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d87bc0() {
   return (neuron0x2d71a70()*0.471296);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d87c00() {
   return (neuron0x2d71db0()*-0.189496);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d87c40() {
   return (neuron0x2d720f0()*-0.0221997);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d87c80() {
   return (neuron0x2d72430()*-0.0995273);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d87cc0() {
   return (neuron0x2d72770()*-0.262833);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d87d00() {
   return (neuron0x2d72ab0()*0.374288);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d87d40() {
   return (neuron0x2d72df0()*-0.146234);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d87d80() {
   return (neuron0x2d73130()*-0.170631);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d87dc0() {
   return (neuron0x2d73470()*-0.0848987);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d87e00() {
   return (neuron0x2d737b0()*-0.015186);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d87e40() {
   return (neuron0x2d73af0()*-0.158993);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d87e80() {
   return (neuron0x2d73e30()*0.455511);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d87ec0() {
   return (neuron0x2d74170()*0.32557);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d87f00() {
   return (neuron0x2d744b0()*0.421914);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d87f40() {
   return (neuron0x2d747f0()*0.069459);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d879d0() {
   return (neuron0x2d74b30()*-0.466688);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d87a10() {
   return (neuron0x2d75090()*-0.38752);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d88090() {
   return (neuron0x2d752b0()*-0.149164);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d880d0() {
   return (neuron0x2d755f0()*-0.149733);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d88110() {
   return (neuron0x2d75930()*0.239867);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d88150() {
   return (neuron0x2d75c70()*0.460983);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d88190() {
   return (neuron0x2d75fb0()*-0.484829);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d881d0() {
   return (neuron0x2d762f0()*-0.55037);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d88550() {
   return (neuron0x2d71730()*0.0489517);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d88590() {
   return (neuron0x2d71a70()*0.0151906);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d885d0() {
   return (neuron0x2d71db0()*-0.139717);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d88610() {
   return (neuron0x2d720f0()*-0.525165);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d88650() {
   return (neuron0x2d72430()*0.0424034);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d88690() {
   return (neuron0x2d72770()*-0.100375);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d886d0() {
   return (neuron0x2d72ab0()*-0.0442371);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d88710() {
   return (neuron0x2d72df0()*0.051226);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d88750() {
   return (neuron0x2d73130()*-0.0296511);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d88790() {
   return (neuron0x2d73470()*0.0409162);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d887d0() {
   return (neuron0x2d737b0()*0.0199037);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d88810() {
   return (neuron0x2d73af0()*-0.132384);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d88850() {
   return (neuron0x2d73e30()*-0.44003);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d88890() {
   return (neuron0x2d74170()*0.103436);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d888d0() {
   return (neuron0x2d744b0()*-0.136102);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d88910() {
   return (neuron0x2d747f0()*0.0859848);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d883a0() {
   return (neuron0x2d74b30()*0.513398);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d883e0() {
   return (neuron0x2d75090()*-0.103403);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d88a60() {
   return (neuron0x2d752b0()*-0.134474);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d88aa0() {
   return (neuron0x2d755f0()*-0.160347);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d88ae0() {
   return (neuron0x2d75930()*-0.032067);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d88b20() {
   return (neuron0x2d75c70()*0.00697337);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d88b60() {
   return (neuron0x2d75fb0()*-0.00166919);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d88ba0() {
   return (neuron0x2d762f0()*0.0406369);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d88f20() {
   return (neuron0x2d71730()*0.0783642);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d88f60() {
   return (neuron0x2d71a70()*-0.0175232);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d88fa0() {
   return (neuron0x2d71db0()*-0.0108591);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d88fe0() {
   return (neuron0x2d720f0()*-0.884787);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d89020() {
   return (neuron0x2d72430()*0.0169014);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d89060() {
   return (neuron0x2d72770()*0.0132931);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d890a0() {
   return (neuron0x2d72ab0()*0.0207237);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d890e0() {
   return (neuron0x2d72df0()*-0.0163674);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d89120() {
   return (neuron0x2d73130()*0.0244781);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d89160() {
   return (neuron0x2d73470()*-0.0626322);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d891a0() {
   return (neuron0x2d737b0()*0.0603796);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d891e0() {
   return (neuron0x2d73af0()*0.0036079);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d89220() {
   return (neuron0x2d73e30()*0.322422);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d89260() {
   return (neuron0x2d74170()*0.00253946);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d892a0() {
   return (neuron0x2d744b0()*-0.0948711);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d892e0() {
   return (neuron0x2d747f0()*0.0258806);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d88d70() {
   return (neuron0x2d74b30()*0.0250733);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d88db0() {
   return (neuron0x2d75090()*-0.0295223);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d89430() {
   return (neuron0x2d752b0()*0.0113095);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d89470() {
   return (neuron0x2d755f0()*0.0301942);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d894b0() {
   return (neuron0x2d75930()*0.0357159);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d894f0() {
   return (neuron0x2d75c70()*0.0108291);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d89530() {
   return (neuron0x2d75fb0()*0.00726444);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d89570() {
   return (neuron0x2d762f0()*-0.0681188);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d898f0() {
   return (neuron0x2d71730()*0.00354892);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d89930() {
   return (neuron0x2d71a70()*-0.0195921);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d89970() {
   return (neuron0x2d71db0()*0.116203);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d899b0() {
   return (neuron0x2d720f0()*-0.0197356);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d899f0() {
   return (neuron0x2d72430()*0.000669938);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d89a30() {
   return (neuron0x2d72770()*-0.00841752);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d89a70() {
   return (neuron0x2d72ab0()*5.51166e-05);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d89ab0() {
   return (neuron0x2d72df0()*-0.00522127);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d89af0() {
   return (neuron0x2d73130()*0.00264085);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d89b30() {
   return (neuron0x2d73470()*-0.00337126);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d89b70() {
   return (neuron0x2d737b0()*-0.0172534);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d89bb0() {
   return (neuron0x2d73af0()*-0.00712915);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d89bf0() {
   return (neuron0x2d73e30()*1.8598);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d89c30() {
   return (neuron0x2d74170()*0.00838829);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d89c70() {
   return (neuron0x2d744b0()*-0.00343266);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d89cb0() {
   return (neuron0x2d747f0()*-0.0017089);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d89740() {
   return (neuron0x2d74b30()*-0.00234683);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d89780() {
   return (neuron0x2d75090()*-0.00316872);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d89e00() {
   return (neuron0x2d752b0()*-0.00741051);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d89e40() {
   return (neuron0x2d755f0()*0.00567122);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d89e80() {
   return (neuron0x2d75930()*0.00524156);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d89ec0() {
   return (neuron0x2d75c70()*-0.0046255);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d89f00() {
   return (neuron0x2d75fb0()*0.00195027);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d89f40() {
   return (neuron0x2d762f0()*-0.215749);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8a2c0() {
   return (neuron0x2d71730()*0.00575078);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8a300() {
   return (neuron0x2d71a70()*0.00564743);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8a340() {
   return (neuron0x2d71db0()*-0.0462674);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8a380() {
   return (neuron0x2d720f0()*-0.0592321);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8a3c0() {
   return (neuron0x2d72430()*0.0141784);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8a400() {
   return (neuron0x2d72770()*-0.00371665);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8a440() {
   return (neuron0x2d72ab0()*-0.0040733);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8a480() {
   return (neuron0x2d72df0()*0.0162512);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8a4c0() {
   return (neuron0x2d73130()*-0.00193016);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8a500() {
   return (neuron0x2d73470()*-0.0108934);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8a540() {
   return (neuron0x2d737b0()*-0.0157933);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8a580() {
   return (neuron0x2d73af0()*-0.00746485);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8a5c0() {
   return (neuron0x2d73e30()*-2.49506);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8a600() {
   return (neuron0x2d74170()*-0.0257631);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8a640() {
   return (neuron0x2d744b0()*0.012778);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8a680() {
   return (neuron0x2d747f0()*0.0199179);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8a110() {
   return (neuron0x2d74b30()*-0.000922894);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8a150() {
   return (neuron0x2d75090()*-0.00577628);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8a7d0() {
   return (neuron0x2d752b0()*-0.00191767);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8a810() {
   return (neuron0x2d755f0()*-0.0244614);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8a850() {
   return (neuron0x2d75930()*0.0166917);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8a890() {
   return (neuron0x2d75c70()*0.00738885);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8a8d0() {
   return (neuron0x2d75fb0()*-0.0017142);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8a910() {
   return (neuron0x2d762f0()*0.0107666);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8ac90() {
   return (neuron0x2d71730()*-0.0702483);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8acd0() {
   return (neuron0x2d71a70()*-0.0630209);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8ad10() {
   return (neuron0x2d71db0()*-1.53654);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8ad50() {
   return (neuron0x2d720f0()*-0.0583936);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8ad90() {
   return (neuron0x2d72430()*-0.0947114);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8add0() {
   return (neuron0x2d72770()*0.0869788);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8ae10() {
   return (neuron0x2d72ab0()*-0.0251467);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8ae50() {
   return (neuron0x2d72df0()*-0.0641222);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8ae90() {
   return (neuron0x2d73130()*0.0057302);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8aed0() {
   return (neuron0x2d73470()*0.0152104);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8af10() {
   return (neuron0x2d737b0()*-0.0278181);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8af50() {
   return (neuron0x2d73af0()*0.0138973);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8af90() {
   return (neuron0x2d73e30()*-0.140085);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8afd0() {
   return (neuron0x2d74170()*-0.00264499);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8b010() {
   return (neuron0x2d744b0()*-0.0340611);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8b050() {
   return (neuron0x2d747f0()*-0.0505263);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8aae0() {
   return (neuron0x2d74b30()*0.0871815);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8ab20() {
   return (neuron0x2d75090()*-0.0256879);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8b1a0() {
   return (neuron0x2d752b0()*-0.0268899);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8b1e0() {
   return (neuron0x2d755f0()*-0.0310131);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8b220() {
   return (neuron0x2d75930()*-0.00188162);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8b260() {
   return (neuron0x2d75c70()*0.0037823);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8b2a0() {
   return (neuron0x2d75fb0()*0.045752);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8b2e0() {
   return (neuron0x2d762f0()*0.883702);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8b660() {
   return (neuron0x2d71730()*0.0350168);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8b6a0() {
   return (neuron0x2d71a70()*-0.00736279);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8b6e0() {
   return (neuron0x2d71db0()*1.22375);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8b720() {
   return (neuron0x2d720f0()*0.0251287);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8b760() {
   return (neuron0x2d72430()*0.00158702);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8b7a0() {
   return (neuron0x2d72770()*0.00956236);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8b7e0() {
   return (neuron0x2d72ab0()*-0.00182399);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8b820() {
   return (neuron0x2d72df0()*-0.0113251);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8b860() {
   return (neuron0x2d73130()*0.0186085);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8b8a0() {
   return (neuron0x2d73470()*0.00222828);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8b8e0() {
   return (neuron0x2d737b0()*0.00264177);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8b920() {
   return (neuron0x2d73af0()*0.00810451);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8b960() {
   return (neuron0x2d73e30()*0.131519);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8b9a0() {
   return (neuron0x2d74170()*-0.0032804);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8b9e0() {
   return (neuron0x2d744b0()*0.00536435);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8ba20() {
   return (neuron0x2d747f0()*0.00114147);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8b4b0() {
   return (neuron0x2d74b30()*-0.0146838);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8b4f0() {
   return (neuron0x2d75090()*-0.00808051);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8bb70() {
   return (neuron0x2d752b0()*0.00336613);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8bbb0() {
   return (neuron0x2d755f0()*7.79141e-05);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8bbf0() {
   return (neuron0x2d75930()*-0.00414266);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8bc30() {
   return (neuron0x2d75c70()*-0.00340816);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8bc70() {
   return (neuron0x2d75fb0()*0.00133986);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8bcb0() {
   return (neuron0x2d762f0()*-1.29401);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8c030() {
   return (neuron0x2d71730()*-0.0155922);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d80600() {
   return (neuron0x2d71a70()*-0.00337587);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d80640() {
   return (neuron0x2d71db0()*0.0811023);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d80680() {
   return (neuron0x2d720f0()*-0.0247097);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d808d0() {
   return (neuron0x2d72430()*-0.00646069);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d80910() {
   return (neuron0x2d72770()*-0.0170111);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d80950() {
   return (neuron0x2d72ab0()*-0.0143009);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d80ba0() {
   return (neuron0x2d72df0()*-0.0192052);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d80be0() {
   return (neuron0x2d73130()*0.0014109);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d80e30() {
   return (neuron0x2d73470()*0.0227038);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d80e70() {
   return (neuron0x2d737b0()*0.0754903);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d80eb0() {
   return (neuron0x2d73af0()*-0.0102789);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d81100() {
   return (neuron0x2d73e30()*0.833485);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d81140() {
   return (neuron0x2d74170()*0.0145739);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d81390() {
   return (neuron0x2d744b0()*-0.0232311);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d813d0() {
   return (neuron0x2d747f0()*-0.0106327);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8be80() {
   return (neuron0x2d74b30()*0.0262083);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8bec0() {
   return (neuron0x2d75090()*-0.007953);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d81520() {
   return (neuron0x2d752b0()*0.00889139);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d81a30() {
   return (neuron0x2d755f0()*-0.00698826);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d81a70() {
   return (neuron0x2d75930()*0.0100512);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d81ab0() {
   return (neuron0x2d75c70()*-0.000629828);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d81d00() {
   return (neuron0x2d75fb0()*0.00654862);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d81d40() {
   return (neuron0x2d762f0()*0.213778);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d815f0() {
   return (neuron0x2d71730()*-0.0203163);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d81630() {
   return (neuron0x2d71a70()*-0.00785707);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d81670() {
   return (neuron0x2d71db0()*-0.0812679);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d816b0() {
   return (neuron0x2d720f0()*0.00220851);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d82030() {
   return (neuron0x2d72430()*0.00121439);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8e380() {
   return (neuron0x2d72770()*-0.0150667);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8e3c0() {
   return (neuron0x2d72ab0()*-0.0237532);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8e400() {
   return (neuron0x2d72df0()*-0.0346119);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8e440() {
   return (neuron0x2d73130()*0.0188864);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8e480() {
   return (neuron0x2d73470()*0.00349022);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8e4c0() {
   return (neuron0x2d737b0()*0.0351347);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8e500() {
   return (neuron0x2d73af0()*-0.019562);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8e540() {
   return (neuron0x2d73e30()*0.242797);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8e580() {
   return (neuron0x2d74170()*0.00676909);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8e5c0() {
   return (neuron0x2d744b0()*-0.0182651);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8e600() {
   return (neuron0x2d747f0()*0.00218655);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d81f10() {
   return (neuron0x2d74b30()*0.0168979);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d81f50() {
   return (neuron0x2d75090()*-0.0188873);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8e750() {
   return (neuron0x2d752b0()*2.72292e-05);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8e790() {
   return (neuron0x2d755f0()*-0.0133601);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8e7d0() {
   return (neuron0x2d75930()*0.00861265);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8e810() {
   return (neuron0x2d75c70()*-0.000107084);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8e850() {
   return (neuron0x2d75fb0()*0.0037553);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8e890() {
   return (neuron0x2d762f0()*-0.742359);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8ec10() {
   return (neuron0x2d71730()*-0.0558108);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8ec50() {
   return (neuron0x2d71a70()*-0.00612683);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8ec90() {
   return (neuron0x2d71db0()*-0.0152555);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8ecd0() {
   return (neuron0x2d720f0()*-1.60937);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8ed10() {
   return (neuron0x2d72430()*0.0247323);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8ed50() {
   return (neuron0x2d72770()*0.0166486);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8ed90() {
   return (neuron0x2d72ab0()*-0.0163622);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8edd0() {
   return (neuron0x2d72df0()*-0.00241584);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8ee10() {
   return (neuron0x2d73130()*-0.00899799);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8ee50() {
   return (neuron0x2d73470()*0.0240016);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8ee90() {
   return (neuron0x2d737b0()*-0.0363175);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8eed0() {
   return (neuron0x2d73af0()*0.0673827);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8ef10() {
   return (neuron0x2d73e30()*-0.323275);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8ef50() {
   return (neuron0x2d74170()*-0.0815297);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8ef90() {
   return (neuron0x2d744b0()*0.083708);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8efd0() {
   return (neuron0x2d747f0()*0.108376);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8ea60() {
   return (neuron0x2d74b30()*-0.132569);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8eaa0() {
   return (neuron0x2d75090()*0.0539186);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8f120() {
   return (neuron0x2d752b0()*0.0423685);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8f160() {
   return (neuron0x2d755f0()*0.0174584);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8f1a0() {
   return (neuron0x2d75930()*-0.0237861);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8f1e0() {
   return (neuron0x2d75c70()*0.000189082);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8f220() {
   return (neuron0x2d75fb0()*0.0270521);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8f260() {
   return (neuron0x2d762f0()*0.0108174);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8f5e0() {
   return (neuron0x2d71730()*-0.00115871);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8f620() {
   return (neuron0x2d71a70()*-0.0209394);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8f660() {
   return (neuron0x2d71db0()*0.0263462);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8f6a0() {
   return (neuron0x2d720f0()*-0.156054);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8f6e0() {
   return (neuron0x2d72430()*-0.0101172);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8f720() {
   return (neuron0x2d72770()*0.00355751);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8f760() {
   return (neuron0x2d72ab0()*0.00617321);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8f7a0() {
   return (neuron0x2d72df0()*0.0191249);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8f7e0() {
   return (neuron0x2d73130()*-0.354769);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8f820() {
   return (neuron0x2d73470()*-0.0429812);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8f860() {
   return (neuron0x2d737b0()*-0.03804);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8f8a0() {
   return (neuron0x2d73af0()*-0.0211094);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8f8e0() {
   return (neuron0x2d73e30()*0.19079);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8f920() {
   return (neuron0x2d74170()*0.0210161);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8f960() {
   return (neuron0x2d744b0()*0.0308653);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8f9a0() {
   return (neuron0x2d747f0()*0.00688379);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8f430() {
   return (neuron0x2d74b30()*0.0209324);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8f470() {
   return (neuron0x2d75090()*-0.00511575);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8faf0() {
   return (neuron0x2d752b0()*-0.00968267);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8fb30() {
   return (neuron0x2d755f0()*0.0119661);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8fb70() {
   return (neuron0x2d75930()*-0.00559562);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8fbb0() {
   return (neuron0x2d75c70()*0.00362129);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8fbf0() {
   return (neuron0x2d75fb0()*0.00743302);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8fc30() {
   return (neuron0x2d762f0()*-0.0281021);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8ffb0() {
   return (neuron0x2d71730()*-0.000890223);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8fff0() {
   return (neuron0x2d71a70()*0.0146215);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90030() {
   return (neuron0x2d71db0()*0.125774);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90070() {
   return (neuron0x2d720f0()*0.0695358);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d900b0() {
   return (neuron0x2d72430()*0.0306531);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d900f0() {
   return (neuron0x2d72770()*-0.561456);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90130() {
   return (neuron0x2d72ab0()*0.116641);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90170() {
   return (neuron0x2d72df0()*-0.00866469);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d901b0() {
   return (neuron0x2d73130()*-0.00895209);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d901f0() {
   return (neuron0x2d73470()*-0.0210213);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90230() {
   return (neuron0x2d737b0()*0.0658301);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90270() {
   return (neuron0x2d73af0()*-0.0371878);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d902b0() {
   return (neuron0x2d73e30()*0.197511);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d902f0() {
   return (neuron0x2d74170()*-0.0397134);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90330() {
   return (neuron0x2d744b0()*0.0637147);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90370() {
   return (neuron0x2d747f0()*0.112903);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8fe00() {
   return (neuron0x2d74b30()*-0.0777265);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8fe40() {
   return (neuron0x2d75090()*-0.0053298);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d904c0() {
   return (neuron0x2d752b0()*0.0144974);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90500() {
   return (neuron0x2d755f0()*-0.0260223);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90540() {
   return (neuron0x2d75930()*-0.00642584);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90580() {
   return (neuron0x2d75c70()*-0.00184589);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d905c0() {
   return (neuron0x2d75fb0()*-0.0162629);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90600() {
   return (neuron0x2d762f0()*0.201939);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90980() {
   return (neuron0x2d71730()*0.401473);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d909c0() {
   return (neuron0x2d71a70()*0.019865);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90a00() {
   return (neuron0x2d71db0()*-0.267842);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90a40() {
   return (neuron0x2d720f0()*-0.283639);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90a80() {
   return (neuron0x2d72430()*-0.253153);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90ac0() {
   return (neuron0x2d72770()*-0.206015);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90b00() {
   return (neuron0x2d72ab0()*-0.259547);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90b40() {
   return (neuron0x2d72df0()*0.197195);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90b80() {
   return (neuron0x2d73130()*0.0756481);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90bc0() {
   return (neuron0x2d73470()*-0.201245);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90c00() {
   return (neuron0x2d737b0()*0.207301);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90c40() {
   return (neuron0x2d73af0()*-0.177531);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90c80() {
   return (neuron0x2d73e30()*-0.0986203);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90cc0() {
   return (neuron0x2d74170()*-0.353548);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90d00() {
   return (neuron0x2d744b0()*-0.362405);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90d40() {
   return (neuron0x2d747f0()*-0.422567);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d907d0() {
   return (neuron0x2d74b30()*0.0859978);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90810() {
   return (neuron0x2d75090()*0.432695);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90e90() {
   return (neuron0x2d752b0()*0.068746);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90ed0() {
   return (neuron0x2d755f0()*0.0426974);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90f10() {
   return (neuron0x2d75930()*0.248673);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90f50() {
   return (neuron0x2d75c70()*-0.366874);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90f90() {
   return (neuron0x2d75fb0()*0.316426);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90fd0() {
   return (neuron0x2d762f0()*-0.176259);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d91350() {
   return (neuron0x2d71730()*0.076542);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d91390() {
   return (neuron0x2d71a70()*-0.0265192);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d913d0() {
   return (neuron0x2d71db0()*-0.512358);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d91410() {
   return (neuron0x2d720f0()*0.0218231);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d91450() {
   return (neuron0x2d72430()*-0.204475);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d91490() {
   return (neuron0x2d72770()*-0.0638909);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d914d0() {
   return (neuron0x2d72ab0()*-0.0231364);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d91510() {
   return (neuron0x2d72df0()*-0.13775);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d91550() {
   return (neuron0x2d73130()*0.00257161);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d91590() {
   return (neuron0x2d73470()*0.104755);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d915d0() {
   return (neuron0x2d737b0()*0.00962877);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d91610() {
   return (neuron0x2d73af0()*0.0465428);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d91650() {
   return (neuron0x2d73e30()*0.313479);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d91690() {
   return (neuron0x2d74170()*-0.0900822);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d916d0() {
   return (neuron0x2d744b0()*0.0409852);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d91710() {
   return (neuron0x2d747f0()*0.49438);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d911a0() {
   return (neuron0x2d74b30()*-0.143568);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d911e0() {
   return (neuron0x2d75090()*0.0521672);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d91860() {
   return (neuron0x2d752b0()*-0.0700683);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d918a0() {
   return (neuron0x2d755f0()*0.058982);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d918e0() {
   return (neuron0x2d75930()*-0.0614785);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d91920() {
   return (neuron0x2d75c70()*0.0489171);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d91960() {
   return (neuron0x2d75fb0()*0.0338349);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d919a0() {
   return (neuron0x2d762f0()*0.432087);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d91d20() {
   return (neuron0x2d71730()*-0.0535272);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d91d60() {
   return (neuron0x2d71a70()*-0.0773212);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d91da0() {
   return (neuron0x2d71db0()*-0.0873698);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d91de0() {
   return (neuron0x2d720f0()*-0.231108);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d91e20() {
   return (neuron0x2d72430()*-0.675188);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d91e60() {
   return (neuron0x2d72770()*-0.0964481);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d91ea0() {
   return (neuron0x2d72ab0()*0.00744616);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d91ee0() {
   return (neuron0x2d72df0()*-0.222092);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d91f20() {
   return (neuron0x2d73130()*-0.0484886);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d91f60() {
   return (neuron0x2d73470()*-0.0350876);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d91fa0() {
   return (neuron0x2d737b0()*0.0280906);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d91fe0() {
   return (neuron0x2d73af0()*0.0466547);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d92020() {
   return (neuron0x2d73e30()*0.352979);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d92060() {
   return (neuron0x2d74170()*0.0237657);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d920a0() {
   return (neuron0x2d744b0()*0.11855);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d920e0() {
   return (neuron0x2d747f0()*-0.323935);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d91b70() {
   return (neuron0x2d74b30()*0.112716);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d91bb0() {
   return (neuron0x2d75090()*-0.0492863);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d92230() {
   return (neuron0x2d752b0()*-0.0527242);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d92270() {
   return (neuron0x2d755f0()*0.0024286);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d922b0() {
   return (neuron0x2d75930()*-0.00675416);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d922f0() {
   return (neuron0x2d75c70()*0.027458);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d92330() {
   return (neuron0x2d75fb0()*0.00533391);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d92370() {
   return (neuron0x2d762f0()*0.0497788);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d926f0() {
   return (neuron0x2d71730()*-0.0559169);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d92730() {
   return (neuron0x2d71a70()*0.0456787);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d92770() {
   return (neuron0x2d71db0()*0.0389372);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d927b0() {
   return (neuron0x2d720f0()*-0.545505);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d927f0() {
   return (neuron0x2d72430()*-0.125562);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d92830() {
   return (neuron0x2d72770()*0.0198006);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d92870() {
   return (neuron0x2d72ab0()*0.0170855);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d928b0() {
   return (neuron0x2d72df0()*-0.0251888);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d928f0() {
   return (neuron0x2d73130()*0.186477);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d92930() {
   return (neuron0x2d73470()*0.0877014);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d92970() {
   return (neuron0x2d737b0()*-0.0782545);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d929b0() {
   return (neuron0x2d73af0()*0.326525);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d929f0() {
   return (neuron0x2d73e30()*-0.335925);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d92a30() {
   return (neuron0x2d74170()*-0.0511263);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d92a70() {
   return (neuron0x2d744b0()*0.16635);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d92ab0() {
   return (neuron0x2d747f0()*-0.193499);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d92540() {
   return (neuron0x2d74b30()*-0.0813656);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d92580() {
   return (neuron0x2d75090()*0.0219787);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d92c00() {
   return (neuron0x2d752b0()*-0.137643);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d92c40() {
   return (neuron0x2d755f0()*-0.219539);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d92c80() {
   return (neuron0x2d75930()*0.027175);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d92cc0() {
   return (neuron0x2d75c70()*-0.118891);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d92d00() {
   return (neuron0x2d75fb0()*-0.00614253);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d92d40() {
   return (neuron0x2d762f0()*0.0998834);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7b7f0() {
   return (neuron0x2d71730()*0.00399868);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7b830() {
   return (neuron0x2d71a70()*0.0147351);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7b870() {
   return (neuron0x2d71db0()*-0.187984);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7b8b0() {
   return (neuron0x2d720f0()*0.0428389);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7b8f0() {
   return (neuron0x2d72430()*-0.00196096);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7b930() {
   return (neuron0x2d72770()*0.0128001);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7b970() {
   return (neuron0x2d72ab0()*-0.00129727);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7b9b0() {
   return (neuron0x2d72df0()*-0.00156293);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d934d0() {
   return (neuron0x2d73130()*-0.00402016);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d93510() {
   return (neuron0x2d73470()*0.00853268);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d93550() {
   return (neuron0x2d737b0()*-0.0261798);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d93590() {
   return (neuron0x2d73af0()*0.0237914);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d935d0() {
   return (neuron0x2d73e30()*1.3233);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d93610() {
   return (neuron0x2d74170()*0.00828362);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d93650() {
   return (neuron0x2d744b0()*0.00974132);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d93690() {
   return (neuron0x2d747f0()*0.00903996);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d92f10() {
   return (neuron0x2d74b30()*-0.000139501);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d92f50() {
   return (neuron0x2d75090()*0.0187851);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d937e0() {
   return (neuron0x2d752b0()*0.00767717);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d93820() {
   return (neuron0x2d755f0()*0.00995683);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d93860() {
   return (neuron0x2d75930()*-0.00792051);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d938a0() {
   return (neuron0x2d75c70()*0.00755306);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d938e0() {
   return (neuron0x2d75fb0()*-0.00644194);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d93920() {
   return (neuron0x2d762f0()*-0.120329);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d93ca0() {
   return (neuron0x2d71730()*-0.0088831);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d93ce0() {
   return (neuron0x2d71a70()*0.102289);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d93d20() {
   return (neuron0x2d71db0()*0.0338113);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d93d60() {
   return (neuron0x2d720f0()*0.445);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d93da0() {
   return (neuron0x2d72430()*0.0108915);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d93de0() {
   return (neuron0x2d72770()*-0.00490192);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d93e20() {
   return (neuron0x2d72ab0()*0.0127675);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d93e60() {
   return (neuron0x2d72df0()*0.0877882);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d93ea0() {
   return (neuron0x2d73130()*-0.0292684);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d93ee0() {
   return (neuron0x2d73470()*0.06906);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d93f20() {
   return (neuron0x2d737b0()*-0.0310351);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d93f60() {
   return (neuron0x2d73af0()*-0.000904431);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d93fa0() {
   return (neuron0x2d73e30()*-0.324615);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d93fe0() {
   return (neuron0x2d74170()*0.0437954);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d94020() {
   return (neuron0x2d744b0()*0.419721);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d94060() {
   return (neuron0x2d747f0()*-0.139871);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d93af0() {
   return (neuron0x2d74b30()*0.00885997);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d93b30() {
   return (neuron0x2d75090()*0.0323228);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d941b0() {
   return (neuron0x2d752b0()*0.00148296);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d941f0() {
   return (neuron0x2d755f0()*-0.0179501);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d94230() {
   return (neuron0x2d75930()*-0.0217718);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d94270() {
   return (neuron0x2d75c70()*-0.00155584);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d942b0() {
   return (neuron0x2d75fb0()*0.0175903);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d942f0() {
   return (neuron0x2d762f0()*-0.0311799);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d94670() {
   return (neuron0x2d71730()*0.00386631);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d946b0() {
   return (neuron0x2d71a70()*-0.00977409);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d946f0() {
   return (neuron0x2d71db0()*-0.0239071);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d94730() {
   return (neuron0x2d720f0()*-0.00728017);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d94770() {
   return (neuron0x2d72430()*-0.0352438);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d947b0() {
   return (neuron0x2d72770()*-0.023164);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d947f0() {
   return (neuron0x2d72ab0()*-0.0127064);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d94830() {
   return (neuron0x2d72df0()*-0.00261522);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d94870() {
   return (neuron0x2d73130()*-0.055312);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d948b0() {
   return (neuron0x2d73470()*0.000780421);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d948f0() {
   return (neuron0x2d737b0()*0.0572693);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d94930() {
   return (neuron0x2d73af0()*-0.0157476);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d94970() {
   return (neuron0x2d73e30()*0.0672196);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d949b0() {
   return (neuron0x2d74170()*-0.0168438);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d949f0() {
   return (neuron0x2d744b0()*-0.0377955);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d94a30() {
   return (neuron0x2d747f0()*-0.0339531);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d944c0() {
   return (neuron0x2d74b30()*0.0396949);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d94500() {
   return (neuron0x2d75090()*-0.033135);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d85030() {
   return (neuron0x2d752b0()*-0.00397908);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d85070() {
   return (neuron0x2d755f0()*-0.0338111);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d850b0() {
   return (neuron0x2d75930()*0.00187635);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d850f0() {
   return (neuron0x2d75c70()*-0.000606195);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d85130() {
   return (neuron0x2d75fb0()*0.0147816);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d85170() {
   return (neuron0x2d762f0()*0.404366);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d854f0() {
   return (neuron0x2d71730()*0.00238514);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d85530() {
   return (neuron0x2d71a70()*0.00380058);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d85570() {
   return (neuron0x2d71db0()*-3.67968);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d855b0() {
   return (neuron0x2d720f0()*0.0112725);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d855f0() {
   return (neuron0x2d72430()*-0.00382565);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d85630() {
   return (neuron0x2d72770()*-0.0122122);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d85670() {
   return (neuron0x2d72ab0()*-0.00460727);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d856b0() {
   return (neuron0x2d72df0()*-0.0118935);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d856f0() {
   return (neuron0x2d73130()*0.00147912);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d85730() {
   return (neuron0x2d73470()*-0.00247957);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d85770() {
   return (neuron0x2d737b0()*-0.00321888);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d857b0() {
   return (neuron0x2d73af0()*-0.0174415);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d857f0() {
   return (neuron0x2d73e30()*-0.0117662);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d85830() {
   return (neuron0x2d74170()*-0.00566987);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d85870() {
   return (neuron0x2d744b0()*0.00264781);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d858b0() {
   return (neuron0x2d747f0()*2.87984e-05);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d85340() {
   return (neuron0x2d74b30()*0.00524242);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d85380() {
   return (neuron0x2d75090()*-0.00115343);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d85a00() {
   return (neuron0x2d752b0()*-0.000324349);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d85a40() {
   return (neuron0x2d755f0()*-0.00103754);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d85a80() {
   return (neuron0x2d75930()*0.00144732);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d85ac0() {
   return (neuron0x2d75c70()*0.0032072);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d85b00() {
   return (neuron0x2d75fb0()*-0.00132661);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d85b40() {
   return (neuron0x2d762f0()*-2.73316);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d85ec0() {
   return (neuron0x2d71730()*0.015493);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d85f00() {
   return (neuron0x2d71a70()*-0.000746111);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d85f40() {
   return (neuron0x2d71db0()*0.0487604);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d85f80() {
   return (neuron0x2d720f0()*0.518035);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d85fc0() {
   return (neuron0x2d72430()*0.000290622);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86000() {
   return (neuron0x2d72770()*0.00385989);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86040() {
   return (neuron0x2d72ab0()*-0.0233794);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86080() {
   return (neuron0x2d72df0()*0.00804711);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d860c0() {
   return (neuron0x2d73130()*-0.0635829);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86100() {
   return (neuron0x2d73470()*0.0103302);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86140() {
   return (neuron0x2d737b0()*-0.113349);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86180() {
   return (neuron0x2d73af0()*0.0293416);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d861c0() {
   return (neuron0x2d73e30()*0.0131997);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86200() {
   return (neuron0x2d74170()*0.0191163);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86240() {
   return (neuron0x2d744b0()*-0.0274815);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86280() {
   return (neuron0x2d747f0()*0.0270175);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d85d10() {
   return (neuron0x2d74b30()*-0.00979402);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d85d50() {
   return (neuron0x2d75090()*0.0187638);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d863d0() {
   return (neuron0x2d752b0()*0.0293105);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86410() {
   return (neuron0x2d755f0()*-0.0244029);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86450() {
   return (neuron0x2d75930()*-0.00652905);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86490() {
   return (neuron0x2d75c70()*-0.00402286);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d864d0() {
   return (neuron0x2d75fb0()*0.00459128);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86510() {
   return (neuron0x2d762f0()*0.117662);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86890() {
   return (neuron0x2d71730()*0.0144765);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d868d0() {
   return (neuron0x2d71a70()*-0.0104578);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86910() {
   return (neuron0x2d71db0()*-0.0271062);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86950() {
   return (neuron0x2d720f0()*-1.65776);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86990() {
   return (neuron0x2d72430()*0.00443125);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d869d0() {
   return (neuron0x2d72770()*0.000935781);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86a10() {
   return (neuron0x2d72ab0()*0.0115308);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86a50() {
   return (neuron0x2d72df0()*0.000953988);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86a90() {
   return (neuron0x2d73130()*-0.00235426);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86ad0() {
   return (neuron0x2d73470()*-0.00241824);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86b10() {
   return (neuron0x2d737b0()*0.0170998);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86b50() {
   return (neuron0x2d73af0()*-0.019106);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86b90() {
   return (neuron0x2d73e30()*-0.201254);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86bd0() {
   return (neuron0x2d74170()*0.0241872);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86c10() {
   return (neuron0x2d744b0()*0.0182872);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86c50() {
   return (neuron0x2d747f0()*0.000608942);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d866e0() {
   return (neuron0x2d74b30()*0.0118844);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86720() {
   return (neuron0x2d75090()*-0.00828168);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86da0() {
   return (neuron0x2d752b0()*0.00359739);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86de0() {
   return (neuron0x2d755f0()*-0.0116157);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86e20() {
   return (neuron0x2d75930()*0.0166252);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86e60() {
   return (neuron0x2d75c70()*-0.00385063);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86ea0() {
   return (neuron0x2d75fb0()*0.00883726);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86ee0() {
   return (neuron0x2d762f0()*-0.0266182);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d98db0() {
   return (neuron0x2d71730()*0.0403394);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d98df0() {
   return (neuron0x2d71a70()*0.159976);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d98e30() {
   return (neuron0x2d71db0()*-0.0800636);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d98e70() {
   return (neuron0x2d720f0()*0.288654);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d98eb0() {
   return (neuron0x2d72430()*-0.262571);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d98ef0() {
   return (neuron0x2d72770()*0.0410136);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d98f30() {
   return (neuron0x2d72ab0()*-0.0375842);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d98f70() {
   return (neuron0x2d72df0()*-0.0345904);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d98fb0() {
   return (neuron0x2d73130()*0.00662263);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d98ff0() {
   return (neuron0x2d73470()*0.0880788);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d99030() {
   return (neuron0x2d737b0()*0.0059703);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d99070() {
   return (neuron0x2d73af0()*0.132846);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d990b0() {
   return (neuron0x2d73e30()*-0.226352);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d990f0() {
   return (neuron0x2d74170()*-0.0427073);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d99130() {
   return (neuron0x2d744b0()*-0.0646959);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d99170() {
   return (neuron0x2d747f0()*0.461381);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86f20() {
   return (neuron0x2d74b30()*-0.148607);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86f60() {
   return (neuron0x2d75090()*0.0836182);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d992c0() {
   return (neuron0x2d752b0()*0.0661545);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d99300() {
   return (neuron0x2d755f0()*0.016079);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d99340() {
   return (neuron0x2d75930()*-0.0160034);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d99380() {
   return (neuron0x2d75c70()*-0.00704924);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d993c0() {
   return (neuron0x2d75fb0()*-0.00560818);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d99400() {
   return (neuron0x2d762f0()*0.00172848);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d99780() {
   return (neuron0x2d71730()*0.0236102);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d997c0() {
   return (neuron0x2d71a70()*2.42616e-05);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d99800() {
   return (neuron0x2d71db0()*3.14166);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d99840() {
   return (neuron0x2d720f0()*-0.00188755);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d99880() {
   return (neuron0x2d72430()*-0.00290745);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d998c0() {
   return (neuron0x2d72770()*0.0115162);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d99900() {
   return (neuron0x2d72ab0()*0.00592439);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d99940() {
   return (neuron0x2d72df0()*0.00850285);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d99980() {
   return (neuron0x2d73130()*-0.00426175);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d999c0() {
   return (neuron0x2d73470()*-0.00757238);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d99a00() {
   return (neuron0x2d737b0()*-0.0078242);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d99a40() {
   return (neuron0x2d73af0()*0.00854113);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d99a80() {
   return (neuron0x2d73e30()*-0.157688);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d99ac0() {
   return (neuron0x2d74170()*0.00650987);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d99b00() {
   return (neuron0x2d744b0()*0.00140209);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d99b40() {
   return (neuron0x2d747f0()*0.00241252);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d995d0() {
   return (neuron0x2d74b30()*-0.00519707);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d99610() {
   return (neuron0x2d75090()*0.00350149);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d99c90() {
   return (neuron0x2d752b0()*-0.00486683);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d99cd0() {
   return (neuron0x2d755f0()*0.000441226);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d99d10() {
   return (neuron0x2d75930()*0.00269749);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d99d50() {
   return (neuron0x2d75c70()*0.00403709);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d99d90() {
   return (neuron0x2d75fb0()*0.000210665);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d99dd0() {
   return (neuron0x2d762f0()*-2.39734);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9a150() {
   return (neuron0x2d71730()*0.0213548);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9a190() {
   return (neuron0x2d71a70()*-0.00127354);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9a1d0() {
   return (neuron0x2d71db0()*1.4019);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9a210() {
   return (neuron0x2d720f0()*-0.00454467);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9a250() {
   return (neuron0x2d72430()*0.00279853);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9a290() {
   return (neuron0x2d72770()*-0.00683509);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9a2d0() {
   return (neuron0x2d72ab0()*0.000907904);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9a310() {
   return (neuron0x2d72df0()*-0.00263814);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9a350() {
   return (neuron0x2d73130()*0.000985591);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9a390() {
   return (neuron0x2d73470()*0.00608175);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9a3d0() {
   return (neuron0x2d737b0()*0.0016133);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9a410() {
   return (neuron0x2d73af0()*0.012796);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9a450() {
   return (neuron0x2d73e30()*0.0723546);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9a490() {
   return (neuron0x2d74170()*0.00380847);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9a4d0() {
   return (neuron0x2d744b0()*-0.00551021);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9a510() {
   return (neuron0x2d747f0()*4.7885e-05);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d99fa0() {
   return (neuron0x2d74b30()*-0.0111302);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d99fe0() {
   return (neuron0x2d75090()*0.00385151);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9a660() {
   return (neuron0x2d752b0()*0.00132926);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9a6a0() {
   return (neuron0x2d755f0()*-0.000142926);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9a6e0() {
   return (neuron0x2d75930()*-0.00106436);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9a720() {
   return (neuron0x2d75c70()*-0.000947676);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9a760() {
   return (neuron0x2d75fb0()*-0.00079524);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9a7a0() {
   return (neuron0x2d762f0()*1.52513);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9ab20() {
   return (neuron0x2d71730()*0.0912029);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9ab60() {
   return (neuron0x2d71a70()*0.15124);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9aba0() {
   return (neuron0x2d71db0()*0.14338);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9abe0() {
   return (neuron0x2d720f0()*-0.28161);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9ac20() {
   return (neuron0x2d72430()*0.326358);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9ac60() {
   return (neuron0x2d72770()*0.102846);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9aca0() {
   return (neuron0x2d72ab0()*0.124228);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9ace0() {
   return (neuron0x2d72df0()*-0.00793311);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9ad20() {
   return (neuron0x2d73130()*-0.0558161);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9ad60() {
   return (neuron0x2d73470()*0.111973);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9ada0() {
   return (neuron0x2d737b0()*0.566981);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9ade0() {
   return (neuron0x2d73af0()*-0.0673506);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9ae20() {
   return (neuron0x2d73e30()*-0.353892);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9ae60() {
   return (neuron0x2d74170()*-0.414263);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9aea0() {
   return (neuron0x2d744b0()*0.18461);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9aee0() {
   return (neuron0x2d747f0()*0.172592);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9a970() {
   return (neuron0x2d74b30()*0.0912089);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9a9b0() {
   return (neuron0x2d75090()*-0.0087182);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9b030() {
   return (neuron0x2d752b0()*-0.100501);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9b070() {
   return (neuron0x2d755f0()*-0.213615);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9b0b0() {
   return (neuron0x2d75930()*-0.404268);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9b0f0() {
   return (neuron0x2d75c70()*-0.0461719);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9b130() {
   return (neuron0x2d75fb0()*-0.0640307);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9b170() {
   return (neuron0x2d762f0()*-0.0941237);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2b3b080() {
   return (neuron0x2d76760()*-0.0876716);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2b3b0c0() {
   return (neuron0x2d770b0()*-0.358332);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78c20() {
   return (neuron0x2d77b90()*0.299477);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d78c60() {
   return (neuron0x2d77630()*-0.270833);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d795f0() {
   return (neuron0x2d78970()*0.0446422);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d79630() {
   return (neuron0x2d79340()*0.0137038);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7a3c0() {
   return (neuron0x2d7a110()*0.117915);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7a400() {
   return (neuron0x2d7aae0()*0.00788516);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7ad90() {
   return (neuron0x2d7b4b0()*-0.0150242);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7add0() {
   return (neuron0x2d7bf90()*-0.927026);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7b760() {
   return (neuron0x2d7c960()*-0.00667742);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7b7a0() {
   return (neuron0x2d79a40()*0.00988631);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7c240() {
   return (neuron0x2d7e510()*1.37154);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7c280() {
   return (neuron0x2d7eee0()*0.383851);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7cc10() {
   return (neuron0x2d7f8b0()*0.00158725);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7cc50() {
   return (neuron0x2d80280()*-0.183964);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d79cf0() {
   return (neuron0x2d82090()*0.0613206);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d79d30() {
   return (neuron0x2d82370()*1.47052);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7e7c0() {
   return (neuron0x2d82d40()*1.34974);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7e800() {
   return (neuron0x2d83710()*-1.48769);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7f190() {
   return (neuron0x2d840e0()*-0.0284534);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7f1d0() {
   return (neuron0x2d84ab0()*0.0339945);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7fb60() {
   return (neuron0x2d7d600()*0.197414);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7fba0() {
   return (neuron0x2d7dfd0()*1.65475);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d80530() {
   return (neuron0x2d87840()*0.0135047);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d80570() {
   return (neuron0x2d88210()*0.0389465);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d746d0() {
   return (neuron0x2d88be0()*-0.225862);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d74710() {
   return (neuron0x2d895b0()*0.0367402);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d82620() {
   return (neuron0x2d89f80()*-0.0416129);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d82660() {
   return (neuron0x2d8a950()*0.0908873);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d82ff0() {
   return (neuron0x2d8b320()*0.430239);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83030() {
   return (neuron0x2d8bcf0()*1.20899);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d839c0() {
   return (neuron0x2d81d80()*1.51625);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d83a00() {
   return (neuron0x2d8e8d0()*-0.0882734);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d84390() {
   return (neuron0x2d8f2a0()*0.423273);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d843d0() {
   return (neuron0x2d8fc70()*-0.0483496);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d84d60() {
   return (neuron0x2d90640()*-0.00792612);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d84da0() {
   return (neuron0x2d91010()*-0.092293);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7d8b0() {
   return (neuron0x2d919e0()*-0.0259942);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d7d8f0() {
   return (neuron0x2d923b0()*0.0293597);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d87160() {
   return (neuron0x2d92d80()*-0.895455);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d871a0() {
   return (neuron0x2d93960()*0.0727525);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d87af0() {
   return (neuron0x2d94330()*-1.56768);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d87b30() {
   return (neuron0x2d851b0()*2.34516);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d884c0() {
   return (neuron0x2d85b80()*-0.655642);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d88500() {
   return (neuron0x2d86550()*-0.57117);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d88e90() {
   return (neuron0x2d98b90()*0.0746875);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d88ed0() {
   return (neuron0x2d99440()*-1.48325);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d89860() {
   return (neuron0x2d99e10()*0.568147);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d898a0() {
   return (neuron0x2d9a7e0()*0.0141854);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8bfa0() {
   return (neuron0x2d76760()*-0.0885808);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8bfe0() {
   return (neuron0x2d770b0()*-0.595608);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d81560() {
   return (neuron0x2d77b90()*0.282568);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d815a0() {
   return (neuron0x2d77630()*-0.333728);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8eb80() {
   return (neuron0x2d78970()*-0.0556143);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8ebc0() {
   return (neuron0x2d79340()*-0.0540176);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8f550() {
   return (neuron0x2d7a110()*0.330779);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8f590() {
   return (neuron0x2d7aae0()*-0.0401222);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8ff20() {
   return (neuron0x2d7b4b0()*0.022679);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8ff60() {
   return (neuron0x2d7bf90()*-0.45078);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d908f0() {
   return (neuron0x2d7c960()*0.17583);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d90930() {
   return (neuron0x2d79a40()*0.179107);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d912c0() {
   return (neuron0x2d7e510()*1.41369);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d91300() {
   return (neuron0x2d7eee0()*0.101713);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d91c90() {
   return (neuron0x2d7f8b0()*-0.331479);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d91cd0() {
   return (neuron0x2d80280()*-0.170596);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d92660() {
   return (neuron0x2d82090()*-0.0550677);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d926a0() {
   return (neuron0x2d82370()*0.324704);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d93030() {
   return (neuron0x2d82d40()*0.923318);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d93070() {
   return (neuron0x2d83710()*0.275168);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d93c10() {
   return (neuron0x2d840e0()*0.0610282);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d93c50() {
   return (neuron0x2d84ab0()*0.00622229);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d945e0() {
   return (neuron0x2d7d600()*-0.0296052);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d94620() {
   return (neuron0x2d7dfd0()*0.19083);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d85460() {
   return (neuron0x2d87840()*-0.00467238);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d854a0() {
   return (neuron0x2d88210()*-0.0533498);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d85e30() {
   return (neuron0x2d88be0()*-0.49912);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d85e70() {
   return (neuron0x2d895b0()*1.04555);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86800() {
   return (neuron0x2d89f80()*0.237958);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d86840() {
   return (neuron0x2d8a950()*-0.584669);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d98d20() {
   return (neuron0x2d8b320()*1.39622);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d98d60() {
   return (neuron0x2d8bcf0()*0.102843);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d996f0() {
   return (neuron0x2d81d80()*0.523053);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d99730() {
   return (neuron0x2d8e8d0()*0.0892715);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9a0c0() {
   return (neuron0x2d8f2a0()*0.177579);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9a100() {
   return (neuron0x2d8fc70()*-0.0950778);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9aa90() {
   return (neuron0x2d90640()*-0.0321425);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9aad0() {
   return (neuron0x2d91010()*0.0855728);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d76980() {
   return (neuron0x2d919e0()*-0.0101923);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d769c0() {
   return (neuron0x2d923b0()*0.0714487);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8a230() {
   return (neuron0x2d92d80()*-1.04289);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d8a270() {
   return (neuron0x2d93960()*0.147973);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9b1b0() {
   return (neuron0x2d94330()*0.25982);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9b1f0() {
   return (neuron0x2d851b0()*0.264904);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9b230() {
   return (neuron0x2d85b80()*-0.377439);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2d9b270() {
   return (neuron0x2d86550()*-0.221534);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da2120() {
   return (neuron0x2d98b90()*0.0434176);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da2160() {
   return (neuron0x2d99440()*-1.47741);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da21a0() {
   return (neuron0x2d99e10()*1.75506);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da21e0() {
   return (neuron0x2d9a7e0()*0.0763243);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da2560() {
   return (neuron0x2d76760()*0.186026);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da25a0() {
   return (neuron0x2d770b0()*0.310539);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da25e0() {
   return (neuron0x2d77b90()*0.296685);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da2620() {
   return (neuron0x2d77630()*0.0865548);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da2660() {
   return (neuron0x2d78970()*-0.151248);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da26a0() {
   return (neuron0x2d79340()*-0.0019949);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da26e0() {
   return (neuron0x2d7a110()*-0.0916489);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da2720() {
   return (neuron0x2d7aae0()*0.0885003);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da2760() {
   return (neuron0x2d7b4b0()*0.00808531);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da27a0() {
   return (neuron0x2d7bf90()*-1.7882);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da27e0() {
   return (neuron0x2d7c960()*0.069992);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da2820() {
   return (neuron0x2d79a40()*-0.262881);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da2860() {
   return (neuron0x2d7e510()*0.618562);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da28a0() {
   return (neuron0x2d7eee0()*-0.425015);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da28e0() {
   return (neuron0x2d7f8b0()*-0.911205);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da2920() {
   return (neuron0x2d80280()*-0.0347997);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da23b0() {
   return (neuron0x2d82090()*-0.130869);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da23f0() {
   return (neuron0x2d82370()*0.688109);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da2a70() {
   return (neuron0x2d82d40()*-0.658801);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da2ab0() {
   return (neuron0x2d83710()*0.166633);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da2af0() {
   return (neuron0x2d840e0()*0.341756);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da2b30() {
   return (neuron0x2d84ab0()*-0.0286808);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da2b70() {
   return (neuron0x2d7d600()*0.172672);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da2bb0() {
   return (neuron0x2d7dfd0()*0.233664);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da2bf0() {
   return (neuron0x2d87840()*-0.0363629);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da2c30() {
   return (neuron0x2d88210()*0.108885);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da2c70() {
   return (neuron0x2d88be0()*0.347041);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da2cb0() {
   return (neuron0x2d895b0()*-0.223939);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da2cf0() {
   return (neuron0x2d89f80()*-0.130604);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da2d30() {
   return (neuron0x2d8a950()*-0.293313);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da2d70() {
   return (neuron0x2d8b320()*-0.29166);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da2db0() {
   return (neuron0x2d8bcf0()*-0.415858);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da2960() {
   return (neuron0x2d81d80()*-0.157991);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da29a0() {
   return (neuron0x2d8e8d0()*-0.202843);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da29e0() {
   return (neuron0x2d8f2a0()*-0.379694);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da2a20() {
   return (neuron0x2d8fc70()*0.0757495);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3000() {
   return (neuron0x2d90640()*0.0155075);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3040() {
   return (neuron0x2d91010()*0.56995);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3080() {
   return (neuron0x2d919e0()*-0.0861838);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da30c0() {
   return (neuron0x2d923b0()*0.0383305);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3100() {
   return (neuron0x2d92d80()*-0.297513);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3140() {
   return (neuron0x2d93960()*-0.169577);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3180() {
   return (neuron0x2d94330()*0.709535);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da31c0() {
   return (neuron0x2d851b0()*-0.630143);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3200() {
   return (neuron0x2d85b80()*0.575014);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3240() {
   return (neuron0x2d86550()*-0.500327);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3280() {
   return (neuron0x2d98b90()*-0.570617);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da32c0() {
   return (neuron0x2d99440()*-1.88185);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3300() {
   return (neuron0x2d99e10()*-0.0697206);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3340() {
   return (neuron0x2d9a7e0()*-0.113808);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da36c0() {
   return (neuron0x2d76760()*-1.52);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3700() {
   return (neuron0x2d770b0()*0.980293);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3740() {
   return (neuron0x2d77b90()*-5.31736);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3780() {
   return (neuron0x2d77630()*1.53229);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da37c0() {
   return (neuron0x2d78970()*-0.408643);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3800() {
   return (neuron0x2d79340()*-0.204319);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3840() {
   return (neuron0x2d7a110()*-0.751778);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3880() {
   return (neuron0x2d7aae0()*-0.229586);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da38c0() {
   return (neuron0x2d7b4b0()*0.000751174);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3900() {
   return (neuron0x2d7bf90()*2.04065);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3940() {
   return (neuron0x2d7c960()*0.375504);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3980() {
   return (neuron0x2d79a40()*-0.903964);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da39c0() {
   return (neuron0x2d7e510()*-0.71546);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3a00() {
   return (neuron0x2d7eee0()*0.713364);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3a40() {
   return (neuron0x2d7f8b0()*-0.561242);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3a80() {
   return (neuron0x2d80280()*1.11868);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3510() {
   return (neuron0x2d82090()*-1.04331);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3550() {
   return (neuron0x2d82370()*-0.858006);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3bd0() {
   return (neuron0x2d82d40()*-0.237014);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3c10() {
   return (neuron0x2d83710()*-0.372019);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3c50() {
   return (neuron0x2d840e0()*0.474028);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3c90() {
   return (neuron0x2d84ab0()*-0.214781);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3cd0() {
   return (neuron0x2d7d600()*0.433746);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3d10() {
   return (neuron0x2d7dfd0()*-0.913474);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3d50() {
   return (neuron0x2d87840()*0.0364095);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3d90() {
   return (neuron0x2d88210()*-0.605185);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3dd0() {
   return (neuron0x2d88be0()*-1.73296);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3e10() {
   return (neuron0x2d895b0()*-1.07841);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3e50() {
   return (neuron0x2d89f80()*1.65772);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3e90() {
   return (neuron0x2d8a950()*-0.0913477);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3ed0() {
   return (neuron0x2d8b320()*-0.774839);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3f10() {
   return (neuron0x2d8bcf0()*-0.691595);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3ac0() {
   return (neuron0x2d81d80()*-0.483072);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3b00() {
   return (neuron0x2d8e8d0()*-2.40236);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3b40() {
   return (neuron0x2d8f2a0()*-1.204);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da3b80() {
   return (neuron0x2d8fc70()*0.570311);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4160() {
   return (neuron0x2d90640()*-0.0235214);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da41a0() {
   return (neuron0x2d91010()*-0.0108389);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da41e0() {
   return (neuron0x2d919e0()*0.355023);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4220() {
   return (neuron0x2d923b0()*-0.173458);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4260() {
   return (neuron0x2d92d80()*2.47514);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da42a0() {
   return (neuron0x2d93960()*-0.305938);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da42e0() {
   return (neuron0x2d94330()*-0.301241);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4320() {
   return (neuron0x2d851b0()*-1.10135);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4360() {
   return (neuron0x2d85b80()*1.78784);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da43a0() {
   return (neuron0x2d86550()*-0.959413);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da43e0() {
   return (neuron0x2d98b90()*-0.5708);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4420() {
   return (neuron0x2d99440()*1.29974);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4460() {
   return (neuron0x2d99e10()*-0.438472);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da44a0() {
   return (neuron0x2d9a7e0()*0.0373386);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4820() {
   return (neuron0x2d76760()*-0.623821);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4860() {
   return (neuron0x2d770b0()*-0.123382);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da48a0() {
   return (neuron0x2d77b90()*-1.43974);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da48e0() {
   return (neuron0x2d77630()*1.52084);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4920() {
   return (neuron0x2d78970()*0.35353);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4960() {
   return (neuron0x2d79340()*0.0954718);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da49a0() {
   return (neuron0x2d7a110()*-0.0103953);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da49e0() {
   return (neuron0x2d7aae0()*0.237657);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4a20() {
   return (neuron0x2d7b4b0()*0.223966);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4a60() {
   return (neuron0x2d7bf90()*0.595383);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4aa0() {
   return (neuron0x2d7c960()*0.380505);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4ae0() {
   return (neuron0x2d79a40()*-1.10147);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4b20() {
   return (neuron0x2d7e510()*1.28182);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4b60() {
   return (neuron0x2d7eee0()*2.01849);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4ba0() {
   return (neuron0x2d7f8b0()*1.07099);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4be0() {
   return (neuron0x2d80280()*-3.33756);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4670() {
   return (neuron0x2d82090()*0.266063);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da46b0() {
   return (neuron0x2d82370()*0.974377);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4d30() {
   return (neuron0x2d82d40()*0.724112);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4d70() {
   return (neuron0x2d83710()*0.555833);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4db0() {
   return (neuron0x2d840e0()*0.789154);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4df0() {
   return (neuron0x2d84ab0()*0.172492);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4e30() {
   return (neuron0x2d7d600()*-0.423702);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4e70() {
   return (neuron0x2d7dfd0()*0.930977);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4eb0() {
   return (neuron0x2d87840()*-0.0274798);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4ef0() {
   return (neuron0x2d88210()*0.262292);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4f30() {
   return (neuron0x2d88be0()*-2.04073);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4f70() {
   return (neuron0x2d895b0()*1.56266);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4fb0() {
   return (neuron0x2d89f80()*-1.35992);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4ff0() {
   return (neuron0x2d8a950()*0.339033);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da5030() {
   return (neuron0x2d8b320()*0.873676);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da5070() {
   return (neuron0x2d8bcf0()*1.41236);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4c20() {
   return (neuron0x2d81d80()*1.29641);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4c60() {
   return (neuron0x2d8e8d0()*-0.430944);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4ca0() {
   return (neuron0x2d8f2a0()*-0.856073);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da4ce0() {
   return (neuron0x2d8fc70()*-0.167708);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da52c0() {
   return (neuron0x2d90640()*0.00494883);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da5300() {
   return (neuron0x2d91010()*0.474674);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da5340() {
   return (neuron0x2d919e0()*-0.219905);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da5380() {
   return (neuron0x2d923b0()*-0.505367);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da53c0() {
   return (neuron0x2d92d80()*-1.57145);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da5400() {
   return (neuron0x2d93960()*1.31357);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da5440() {
   return (neuron0x2d94330()*-0.320045);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da5480() {
   return (neuron0x2d851b0()*1.24016);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da54c0() {
   return (neuron0x2d85b80()*1.71799);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da5500() {
   return (neuron0x2d86550()*-3.54216);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da5540() {
   return (neuron0x2d98b90()*0.464254);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da5580() {
   return (neuron0x2d99440()*-1.45115);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da55c0() {
   return (neuron0x2d99e10()*0.256238);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da5600() {
   return (neuron0x2d9a7e0()*-0.262765);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da5860() {
   return (neuron0x2da19e0()*-5.56822);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da58a0() {
   return (neuron0x2da1d80()*-2.11937);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da58e0() {
   return (neuron0x2da2220()*-2.585);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da5920() {
   return (neuron0x2da3380()*7.73548);
}

double NNfunction_ns_chiPlus2_sL::synapse0x2da5960() {
   return (neuron0x2da44e0()*-4.76921);
}

