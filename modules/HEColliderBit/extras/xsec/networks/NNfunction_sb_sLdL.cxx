#include "NNfunction_sb_sLdL.h"
#include <cmath>

double NNfunction_sb_sLdL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.9247)/15.0185;
   input1 = (in1 - 45.1741)/769.624;
   input2 = (in2 - 383.13)/492.06;
   input3 = (in3 - 218.997)/597.286;
   input4 = (in4 - 720.044)/705.618;
   input5 = (in5 - 630.712)/683.772;
   input6 = (in6 - 634.683)/685.176;
   input7 = (in7 - 636.047)/686.794;
   input8 = (in8 - 640.771)/722.306;
   input9 = (in9 - 626.801)/704.032;
   input10 = (in10 - 645.3)/731.146;
   input11 = (in11 - 484.054)/294.541;
   input12 = (in12 - 484.612)/295.036;
   input13 = (in13 - 494.836)/360.872;
   input14 = (in14 - 633.805)/551.971;
   input15 = (in15 - 634.615)/553.458;
   input16 = (in16 - 452.196)/388.306;
   input17 = (in17 - 664.57)/629.102;
   input18 = (in18 - 658.632)/627.196;
   input19 = (in19 - 665.477)/618.546;
   input20 = (in20 - -174.164)/393.899;
   input21 = (in21 - -222.652)/877.114;
   input22 = (in22 - 6.0496)/888.986;
   input23 = (in23 - -33.9302)/488.222;
   switch(index) {
     case 0:
         return neuron0x2a78270();
     default:
         return 0.;
   }
}

double NNfunction_sb_sLdL::Value(int index, double* input) {
   input0 = (input[0] - 22.9247)/15.0185;
   input1 = (input[1] - 45.1741)/769.624;
   input2 = (input[2] - 383.13)/492.06;
   input3 = (input[3] - 218.997)/597.286;
   input4 = (input[4] - 720.044)/705.618;
   input5 = (input[5] - 630.712)/683.772;
   input6 = (input[6] - 634.683)/685.176;
   input7 = (input[7] - 636.047)/686.794;
   input8 = (input[8] - 640.771)/722.306;
   input9 = (input[9] - 626.801)/704.032;
   input10 = (input[10] - 645.3)/731.146;
   input11 = (input[11] - 484.054)/294.541;
   input12 = (input[12] - 484.612)/295.036;
   input13 = (input[13] - 494.836)/360.872;
   input14 = (input[14] - 633.805)/551.971;
   input15 = (input[15] - 634.615)/553.458;
   input16 = (input[16] - 452.196)/388.306;
   input17 = (input[17] - 664.57)/629.102;
   input18 = (input[18] - 658.632)/627.196;
   input19 = (input[19] - 665.477)/618.546;
   input20 = (input[20] - -174.164)/393.899;
   input21 = (input[21] - -222.652)/877.114;
   input22 = (input[22] - 6.0496)/888.986;
   input23 = (input[23] - -33.9302)/488.222;
   switch(index) {
     case 0:
         return neuron0x2a78270();
     default:
         return 0.;
   }
}

double NNfunction_sb_sLdL::neuron0x2a44360() {
   return input0;
}

double NNfunction_sb_sLdL::neuron0x2a446a0() {
   return input1;
}

double NNfunction_sb_sLdL::neuron0x2a449e0() {
   return input2;
}

double NNfunction_sb_sLdL::neuron0x2a44d20() {
   return input3;
}

double NNfunction_sb_sLdL::neuron0x2a45060() {
   return input4;
}

double NNfunction_sb_sLdL::neuron0x2a453a0() {
   return input5;
}

double NNfunction_sb_sLdL::neuron0x2a456e0() {
   return input6;
}

double NNfunction_sb_sLdL::neuron0x2a45a20() {
   return input7;
}

double NNfunction_sb_sLdL::neuron0x2a45d60() {
   return input8;
}

double NNfunction_sb_sLdL::neuron0x2a460a0() {
   return input9;
}

double NNfunction_sb_sLdL::neuron0x2a463e0() {
   return input10;
}

double NNfunction_sb_sLdL::neuron0x2a46720() {
   return input11;
}

double NNfunction_sb_sLdL::neuron0x2a46a60() {
   return input12;
}

double NNfunction_sb_sLdL::neuron0x2a46da0() {
   return input13;
}

double NNfunction_sb_sLdL::neuron0x2a470e0() {
   return input14;
}

double NNfunction_sb_sLdL::neuron0x2a47420() {
   return input15;
}

double NNfunction_sb_sLdL::neuron0x2a47760() {
   return input16;
}

double NNfunction_sb_sLdL::neuron0x2a47cc0() {
   return input17;
}

double NNfunction_sb_sLdL::neuron0x2a47ee0() {
   return input18;
}

double NNfunction_sb_sLdL::neuron0x2a48220() {
   return input19;
}

double NNfunction_sb_sLdL::neuron0x2a48560() {
   return input20;
}

double NNfunction_sb_sLdL::neuron0x2a488a0() {
   return input21;
}

double NNfunction_sb_sLdL::neuron0x2a48be0() {
   return input22;
}

double NNfunction_sb_sLdL::neuron0x2a48f20() {
   return input23;
}

double NNfunction_sb_sLdL::input0x2a49390() {
   double input = 1.2263;
   input += synapse0x2a44220();
   input += synapse0x2a44260();
   input += synapse0x2a49640();
   input += synapse0x2a49680();
   input += synapse0x2a496c0();
   input += synapse0x2a49700();
   input += synapse0x2a49740();
   input += synapse0x2a49780();
   input += synapse0x2a497c0();
   input += synapse0x2a49800();
   input += synapse0x2a49840();
   input += synapse0x2a49880();
   input += synapse0x2a498c0();
   input += synapse0x2a49900();
   input += synapse0x2a49940();
   input += synapse0x2a49980();
   input += synapse0x2a44190();
   input += synapse0x2a441d0();
   input += synapse0x27ff5b0();
   input += synapse0x27ff5f0();
   input += synapse0x2a49be0();
   input += synapse0x2a49c20();
   input += synapse0x2a49c60();
   input += synapse0x2a49ca0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a49390() {
   double input = input0x2a49390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a49ce0() {
   double input = 0.388849;
   input += synapse0x2a4a020();
   input += synapse0x2a4a060();
   input += synapse0x2a4a0a0();
   input += synapse0x2a4a0e0();
   input += synapse0x2a4a120();
   input += synapse0x2a4a160();
   input += synapse0x2a4a1a0();
   input += synapse0x2a4a1e0();
   input += synapse0x2a4a220();
   input += synapse0x2a49ad0();
   input += synapse0x2a49b10();
   input += synapse0x2a49b50();
   input += synapse0x2a49b90();
   input += synapse0x2a4a470();
   input += synapse0x2a4a4b0();
   input += synapse0x2a4a4f0();
   input += synapse0x2a49e70();
   input += synapse0x2a49eb0();
   input += synapse0x2a4a640();
   input += synapse0x2a4a680();
   input += synapse0x2a4a6c0();
   input += synapse0x2a4a700();
   input += synapse0x2a4a740();
   input += synapse0x2a4a780();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a49ce0() {
   double input = input0x2a49ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a4a7c0() {
   double input = -0.448349;
   input += synapse0x2a4ab00();
   input += synapse0x2a4ab40();
   input += synapse0x2a4ab80();
   input += synapse0x2a4abc0();
   input += synapse0x2a4ac00();
   input += synapse0x2a4ac40();
   input += synapse0x2a4ac80();
   input += synapse0x2a4acc0();
   input += synapse0x2a4ad00();
   input += synapse0x2a4ad40();
   input += synapse0x2a4ad80();
   input += synapse0x2a4adc0();
   input += synapse0x2a4ae00();
   input += synapse0x2a4ae40();
   input += synapse0x2a4ae80();
   input += synapse0x2a4aec0();
   input += synapse0x2a4a950();
   input += synapse0x2a4a990();
   input += synapse0x27ffc50();
   input += synapse0x280d4c0();
   input += synapse0x280d500();
   input += synapse0x2a333f0();
   input += synapse0x2a33430();
   input += synapse0x2a33470();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a4a7c0() {
   double input = input0x2a4a7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a4a260() {
   double input = -0.404493;
   input += synapse0x280dd40();
   input += synapse0x2a4a3f0();
   input += synapse0x2a4a430();
   input += synapse0x2a4b010();
   input += synapse0x2a4b050();
   input += synapse0x2a4b090();
   input += synapse0x2a4b0d0();
   input += synapse0x2a4b110();
   input += synapse0x2a4b150();
   input += synapse0x2a4b190();
   input += synapse0x2a4b1d0();
   input += synapse0x2a4b210();
   input += synapse0x2a4b250();
   input += synapse0x2a4b290();
   input += synapse0x2a4b2d0();
   input += synapse0x2a4b310();
   input += synapse0x2a442a0();
   input += synapse0x2a442e0();
   input += synapse0x2a44320();
   input += synapse0x2a4b460();
   input += synapse0x2a4b4a0();
   input += synapse0x2a4b4e0();
   input += synapse0x2a4b520();
   input += synapse0x2a4b560();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a4a260() {
   double input = input0x2a4a260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a4b5a0() {
   double input = -1.28153;
   input += synapse0x2a4b8e0();
   input += synapse0x2a4b920();
   input += synapse0x2a4b960();
   input += synapse0x2a4b9a0();
   input += synapse0x2a4b9e0();
   input += synapse0x2a4ba20();
   input += synapse0x2a4ba60();
   input += synapse0x2a4baa0();
   input += synapse0x2a4bae0();
   input += synapse0x2a4bb20();
   input += synapse0x2a4bb60();
   input += synapse0x2a4bba0();
   input += synapse0x2a4bbe0();
   input += synapse0x2a4bc20();
   input += synapse0x2a4bc60();
   input += synapse0x2a4bca0();
   input += synapse0x2a4b730();
   input += synapse0x2a4b770();
   input += synapse0x2a4bdf0();
   input += synapse0x2a4be30();
   input += synapse0x2a4be70();
   input += synapse0x2a4beb0();
   input += synapse0x2a4bef0();
   input += synapse0x2a4bf30();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a4b5a0() {
   double input = input0x2a4b5a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a4bf70() {
   double input = 0.339397;
   input += synapse0x2a4c2b0();
   input += synapse0x2a4c2f0();
   input += synapse0x2a4c330();
   input += synapse0x2a4c370();
   input += synapse0x2a4c3b0();
   input += synapse0x2a4c3f0();
   input += synapse0x2a4c430();
   input += synapse0x2a4c470();
   input += synapse0x2a4c4b0();
   input += synapse0x280d810();
   input += synapse0x280d850();
   input += synapse0x280d890();
   input += synapse0x280d8d0();
   input += synapse0x280d910();
   input += synapse0x280d950();
   input += synapse0x280d990();
   input += synapse0x2a4c100();
   input += synapse0x2a4c140();
   input += synapse0x280dae0();
   input += synapse0x280db20();
   input += synapse0x280db60();
   input += synapse0x280dba0();
   input += synapse0x280dbe0();
   input += synapse0x2a4cd00();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a4bf70() {
   double input = input0x2a4bf70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a4cd40() {
   double input = 1.47773;
   input += synapse0x2a4d080();
   input += synapse0x2a4d0c0();
   input += synapse0x2a4d100();
   input += synapse0x2a4d140();
   input += synapse0x2a4d180();
   input += synapse0x2a4d1c0();
   input += synapse0x2a4d200();
   input += synapse0x2a4d240();
   input += synapse0x2a4d280();
   input += synapse0x2a4d2c0();
   input += synapse0x2a4d300();
   input += synapse0x2a4d340();
   input += synapse0x2a4d380();
   input += synapse0x2a4d3c0();
   input += synapse0x2a4d400();
   input += synapse0x2a4d440();
   input += synapse0x2a4ced0();
   input += synapse0x2a4cf10();
   input += synapse0x2a4d590();
   input += synapse0x2a4d5d0();
   input += synapse0x2a4d610();
   input += synapse0x2a4d650();
   input += synapse0x2a4d690();
   input += synapse0x2a4d6d0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a4cd40() {
   double input = input0x2a4cd40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a4d710() {
   double input = -0.0801918;
   input += synapse0x2a4da50();
   input += synapse0x2a4da90();
   input += synapse0x2a4dad0();
   input += synapse0x2a4db10();
   input += synapse0x2a4db50();
   input += synapse0x2a4db90();
   input += synapse0x2a4dbd0();
   input += synapse0x2a4dc10();
   input += synapse0x2a4dc50();
   input += synapse0x2a4dc90();
   input += synapse0x2a4dcd0();
   input += synapse0x2a4dd10();
   input += synapse0x2a4dd50();
   input += synapse0x2a4dd90();
   input += synapse0x2a4ddd0();
   input += synapse0x2a4de10();
   input += synapse0x2a4d8a0();
   input += synapse0x2a4d8e0();
   input += synapse0x2a4df60();
   input += synapse0x2a4dfa0();
   input += synapse0x2a4dfe0();
   input += synapse0x2a4e020();
   input += synapse0x2a4e060();
   input += synapse0x2a4e0a0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a4d710() {
   double input = input0x2a4d710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a4e0e0() {
   double input = -1.92062;
   input += synapse0x2a47bb0();
   input += synapse0x2a47bf0();
   input += synapse0x2a47c30();
   input += synapse0x2a47c70();
   input += synapse0x2a4e630();
   input += synapse0x2a4e670();
   input += synapse0x2a4e6b0();
   input += synapse0x2a4e6f0();
   input += synapse0x2a4e730();
   input += synapse0x2a4e770();
   input += synapse0x2a4e7b0();
   input += synapse0x2a4e7f0();
   input += synapse0x2a4e830();
   input += synapse0x2a4e870();
   input += synapse0x2a4e8b0();
   input += synapse0x2a4e8f0();
   input += synapse0x2a4e270();
   input += synapse0x2a4e2b0();
   input += synapse0x2a4ea40();
   input += synapse0x2a4ea80();
   input += synapse0x2a4eac0();
   input += synapse0x2a4eb00();
   input += synapse0x2a4eb40();
   input += synapse0x2a4eb80();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a4e0e0() {
   double input = input0x2a4e0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a4ebc0() {
   double input = 0.666036;
   input += synapse0x2a4ef00();
   input += synapse0x2a4ef40();
   input += synapse0x2a4ef80();
   input += synapse0x2a4efc0();
   input += synapse0x2a4f000();
   input += synapse0x2a4f040();
   input += synapse0x2a4f080();
   input += synapse0x2a4f0c0();
   input += synapse0x2a4f100();
   input += synapse0x2a4f140();
   input += synapse0x2a4f180();
   input += synapse0x2a4f1c0();
   input += synapse0x2a4f200();
   input += synapse0x2a4f240();
   input += synapse0x2a4f280();
   input += synapse0x2a4f2c0();
   input += synapse0x2a4ed50();
   input += synapse0x2a4ed90();
   input += synapse0x2a4f410();
   input += synapse0x2a4f450();
   input += synapse0x2a4f490();
   input += synapse0x2a4f4d0();
   input += synapse0x2a4f510();
   input += synapse0x2a4f550();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a4ebc0() {
   double input = input0x2a4ebc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a4f590() {
   double input = -0.929628;
   input += synapse0x2a4f8d0();
   input += synapse0x2a4f910();
   input += synapse0x2a4f950();
   input += synapse0x2a4f990();
   input += synapse0x2a4f9d0();
   input += synapse0x2a4fa10();
   input += synapse0x2a4fa50();
   input += synapse0x2a4fa90();
   input += synapse0x2a4fad0();
   input += synapse0x2a4fb10();
   input += synapse0x2a4fb50();
   input += synapse0x2a4fb90();
   input += synapse0x2a4fbd0();
   input += synapse0x2a4fc10();
   input += synapse0x2a4fc50();
   input += synapse0x2a4fc90();
   input += synapse0x2a4f720();
   input += synapse0x2a4f760();
   input += synapse0x2a4c4f0();
   input += synapse0x2a4c530();
   input += synapse0x2a4c570();
   input += synapse0x2a4c5b0();
   input += synapse0x2a4c5f0();
   input += synapse0x2a4c630();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a4f590() {
   double input = input0x2a4f590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a4c670() {
   double input = -0.506361;
   input += synapse0x2a4c9b0();
   input += synapse0x2a4c9f0();
   input += synapse0x2a4ca30();
   input += synapse0x2a4ca70();
   input += synapse0x2a4cab0();
   input += synapse0x2a4caf0();
   input += synapse0x2a4cb30();
   input += synapse0x2a4cb70();
   input += synapse0x2a4cbb0();
   input += synapse0x2a4cbf0();
   input += synapse0x2a4cc30();
   input += synapse0x2a4cc70();
   input += synapse0x2a4ccb0();
   input += synapse0x2a50df0();
   input += synapse0x2a50e30();
   input += synapse0x2a50e70();
   input += synapse0x2a4c800();
   input += synapse0x2a4c840();
   input += synapse0x2a50fc0();
   input += synapse0x2a51000();
   input += synapse0x2a51040();
   input += synapse0x2a51080();
   input += synapse0x2a510c0();
   input += synapse0x2a51100();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a4c670() {
   double input = input0x2a4c670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a51140() {
   double input = 1.73776;
   input += synapse0x2a51480();
   input += synapse0x2a514c0();
   input += synapse0x2a51500();
   input += synapse0x2a51540();
   input += synapse0x2a51580();
   input += synapse0x2a515c0();
   input += synapse0x2a51600();
   input += synapse0x2a51640();
   input += synapse0x2a51680();
   input += synapse0x2a516c0();
   input += synapse0x2a51700();
   input += synapse0x2a51740();
   input += synapse0x2a51780();
   input += synapse0x2a517c0();
   input += synapse0x2a51800();
   input += synapse0x2a51840();
   input += synapse0x2a512d0();
   input += synapse0x2a51310();
   input += synapse0x2a51990();
   input += synapse0x2a519d0();
   input += synapse0x2a51a10();
   input += synapse0x2a51a50();
   input += synapse0x2a51a90();
   input += synapse0x2a51ad0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a51140() {
   double input = input0x2a51140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a51b10() {
   double input = 0.548822;
   input += synapse0x2a51e50();
   input += synapse0x2a51e90();
   input += synapse0x2a51ed0();
   input += synapse0x2a51f10();
   input += synapse0x2a51f50();
   input += synapse0x2a51f90();
   input += synapse0x2a51fd0();
   input += synapse0x2a52010();
   input += synapse0x2a52050();
   input += synapse0x2a52090();
   input += synapse0x2a520d0();
   input += synapse0x2a52110();
   input += synapse0x2a52150();
   input += synapse0x2a52190();
   input += synapse0x2a521d0();
   input += synapse0x2a52210();
   input += synapse0x2a51ca0();
   input += synapse0x2a51ce0();
   input += synapse0x2a52360();
   input += synapse0x2a523a0();
   input += synapse0x2a523e0();
   input += synapse0x2a52420();
   input += synapse0x2a52460();
   input += synapse0x2a524a0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a51b10() {
   double input = input0x2a51b10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a524e0() {
   double input = 0.486556;
   input += synapse0x2a52820();
   input += synapse0x2a52860();
   input += synapse0x2a528a0();
   input += synapse0x2a528e0();
   input += synapse0x2a52920();
   input += synapse0x2a52960();
   input += synapse0x2a529a0();
   input += synapse0x2a529e0();
   input += synapse0x2a52a20();
   input += synapse0x2a52a60();
   input += synapse0x2a52aa0();
   input += synapse0x2a52ae0();
   input += synapse0x2a52b20();
   input += synapse0x2a52b60();
   input += synapse0x2a52ba0();
   input += synapse0x2a52be0();
   input += synapse0x2a52670();
   input += synapse0x2a526b0();
   input += synapse0x2a52d30();
   input += synapse0x2a52d70();
   input += synapse0x2a52db0();
   input += synapse0x2a52df0();
   input += synapse0x2a52e30();
   input += synapse0x2a52e70();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a524e0() {
   double input = input0x2a524e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a52eb0() {
   double input = 0.132073;
   input += synapse0x2a531f0();
   input += synapse0x2a44580();
   input += synapse0x2a445c0();
   input += synapse0x2a448c0();
   input += synapse0x2a44900();
   input += synapse0x2a44c00();
   input += synapse0x2a44c40();
   input += synapse0x2a44f40();
   input += synapse0x2a44f80();
   input += synapse0x2a45280();
   input += synapse0x2a452c0();
   input += synapse0x2a455c0();
   input += synapse0x2a45600();
   input += synapse0x2a45900();
   input += synapse0x2a45940();
   input += synapse0x2a45c40();
   input += synapse0x2a45c80();
   input += synapse0x2a45f80();
   input += synapse0x2a45fc0();
   input += synapse0x2a462c0();
   input += synapse0x2a46300();
   input += synapse0x2a46600();
   input += synapse0x2a46640();
   input += synapse0x2a46940();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a52eb0() {
   double input = input0x2a52eb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a54cc0() {
   double input = -1.05774;
   input += synapse0x2a46980();
   input += synapse0x2a47640();
   input += synapse0x2a47680();
   input += synapse0x2a53040();
   input += synapse0x2a53080();
   input += synapse0x2a47980();
   input += synapse0x2a479c0();
   input += synapse0x27ff490();
   input += synapse0x27ff4d0();
   input += synapse0x2a48100();
   input += synapse0x2a48140();
   input += synapse0x2a48440();
   input += synapse0x2a48480();
   input += synapse0x2a48780();
   input += synapse0x2a487c0();
   input += synapse0x2a48ac0();
   input += synapse0x2a48b00();
   input += synapse0x2a48e00();
   input += synapse0x2a48e40();
   input += synapse0x2a49140();
   input += synapse0x2a49180();
   input += synapse0x2a46c80();
   input += synapse0x2a46cc0();
   input += synapse0x2a54f60();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a54cc0() {
   double input = input0x2a54cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a54fa0() {
   double input = -0.581198;
   input += synapse0x2a552e0();
   input += synapse0x2a55320();
   input += synapse0x2a55360();
   input += synapse0x2a553a0();
   input += synapse0x2a553e0();
   input += synapse0x2a55420();
   input += synapse0x2a55460();
   input += synapse0x2a554a0();
   input += synapse0x2a554e0();
   input += synapse0x2a55520();
   input += synapse0x2a55560();
   input += synapse0x2a555a0();
   input += synapse0x2a555e0();
   input += synapse0x2a55620();
   input += synapse0x2a55660();
   input += synapse0x2a556a0();
   input += synapse0x2a55130();
   input += synapse0x2a55170();
   input += synapse0x2a557f0();
   input += synapse0x2a55830();
   input += synapse0x2a55870();
   input += synapse0x2a558b0();
   input += synapse0x2a558f0();
   input += synapse0x2a55930();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a54fa0() {
   double input = input0x2a54fa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a55970() {
   double input = 0.32753;
   input += synapse0x2a55cb0();
   input += synapse0x2a55cf0();
   input += synapse0x2a55d30();
   input += synapse0x2a55d70();
   input += synapse0x2a55db0();
   input += synapse0x2a55df0();
   input += synapse0x2a55e30();
   input += synapse0x2a55e70();
   input += synapse0x2a55eb0();
   input += synapse0x2a55ef0();
   input += synapse0x2a55f30();
   input += synapse0x2a55f70();
   input += synapse0x2a55fb0();
   input += synapse0x2a55ff0();
   input += synapse0x2a56030();
   input += synapse0x2a56070();
   input += synapse0x2a55b00();
   input += synapse0x2a55b40();
   input += synapse0x2a561c0();
   input += synapse0x2a56200();
   input += synapse0x2a56240();
   input += synapse0x2a56280();
   input += synapse0x2a562c0();
   input += synapse0x2a56300();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a55970() {
   double input = input0x2a55970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a56340() {
   double input = -0.220624;
   input += synapse0x2a56680();
   input += synapse0x2a566c0();
   input += synapse0x2a56700();
   input += synapse0x2a56740();
   input += synapse0x2a56780();
   input += synapse0x2a567c0();
   input += synapse0x2a56800();
   input += synapse0x2a56840();
   input += synapse0x2a56880();
   input += synapse0x2a568c0();
   input += synapse0x2a56900();
   input += synapse0x2a56940();
   input += synapse0x2a56980();
   input += synapse0x2a569c0();
   input += synapse0x2a56a00();
   input += synapse0x2a56a40();
   input += synapse0x2a564d0();
   input += synapse0x2a56510();
   input += synapse0x2a56b90();
   input += synapse0x2a56bd0();
   input += synapse0x2a56c10();
   input += synapse0x2a56c50();
   input += synapse0x2a56c90();
   input += synapse0x2a56cd0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a56340() {
   double input = input0x2a56340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a56d10() {
   double input = -0.0917711;
   input += synapse0x2a57050();
   input += synapse0x2a57090();
   input += synapse0x2a570d0();
   input += synapse0x2a57110();
   input += synapse0x2a57150();
   input += synapse0x2a57190();
   input += synapse0x2a571d0();
   input += synapse0x2a57210();
   input += synapse0x2a57250();
   input += synapse0x2a57290();
   input += synapse0x2a572d0();
   input += synapse0x2a57310();
   input += synapse0x2a57350();
   input += synapse0x2a57390();
   input += synapse0x2a573d0();
   input += synapse0x2a57410();
   input += synapse0x2a56ea0();
   input += synapse0x2a56ee0();
   input += synapse0x2a57560();
   input += synapse0x2a575a0();
   input += synapse0x2a575e0();
   input += synapse0x2a57620();
   input += synapse0x2a57660();
   input += synapse0x2a576a0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a56d10() {
   double input = input0x2a56d10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a576e0() {
   double input = 1.38605;
   input += synapse0x2a57a20();
   input += synapse0x2a57a60();
   input += synapse0x2a57aa0();
   input += synapse0x2a57ae0();
   input += synapse0x2a57b20();
   input += synapse0x2a57b60();
   input += synapse0x2a57ba0();
   input += synapse0x2a57be0();
   input += synapse0x2a57c20();
   input += synapse0x2a4fde0();
   input += synapse0x2a4fe20();
   input += synapse0x2a4fe60();
   input += synapse0x2a4fea0();
   input += synapse0x2a4fee0();
   input += synapse0x2a4ff20();
   input += synapse0x2a4ff60();
   input += synapse0x2a57870();
   input += synapse0x2a578b0();
   input += synapse0x2a500b0();
   input += synapse0x2a500f0();
   input += synapse0x2a50130();
   input += synapse0x2a50170();
   input += synapse0x2a501b0();
   input += synapse0x2a501f0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a576e0() {
   double input = input0x2a576e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a50230() {
   double input = 0.278281;
   input += synapse0x2a50570();
   input += synapse0x2a505b0();
   input += synapse0x2a505f0();
   input += synapse0x2a50630();
   input += synapse0x2a50670();
   input += synapse0x2a506b0();
   input += synapse0x2a506f0();
   input += synapse0x2a50730();
   input += synapse0x2a50770();
   input += synapse0x2a507b0();
   input += synapse0x2a507f0();
   input += synapse0x2a50830();
   input += synapse0x2a50870();
   input += synapse0x2a508b0();
   input += synapse0x2a508f0();
   input += synapse0x2a50930();
   input += synapse0x2a503c0();
   input += synapse0x2a50400();
   input += synapse0x2a50a80();
   input += synapse0x2a50ac0();
   input += synapse0x2a50b00();
   input += synapse0x2a50b40();
   input += synapse0x2a50b80();
   input += synapse0x2a50bc0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a50230() {
   double input = input0x2a50230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a50c00() {
   double input = -0.186053;
   input += synapse0x2a50d90();
   input += synapse0x2a59e20();
   input += synapse0x2a59e60();
   input += synapse0x2a59ea0();
   input += synapse0x2a59ee0();
   input += synapse0x2a59f20();
   input += synapse0x2a59f60();
   input += synapse0x2a59fa0();
   input += synapse0x2a59fe0();
   input += synapse0x2a5a020();
   input += synapse0x2a5a060();
   input += synapse0x2a5a0a0();
   input += synapse0x2a5a0e0();
   input += synapse0x2a5a120();
   input += synapse0x2a5a160();
   input += synapse0x2a5a1a0();
   input += synapse0x2a59c70();
   input += synapse0x2a59cb0();
   input += synapse0x2a5a2f0();
   input += synapse0x2a5a330();
   input += synapse0x2a5a370();
   input += synapse0x2a5a3b0();
   input += synapse0x2a5a3f0();
   input += synapse0x2a5a430();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a50c00() {
   double input = input0x2a50c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a5a470() {
   double input = 3.99515;
   input += synapse0x2a5a7b0();
   input += synapse0x2a5a7f0();
   input += synapse0x2a5a830();
   input += synapse0x2a5a870();
   input += synapse0x2a5a8b0();
   input += synapse0x2a5a8f0();
   input += synapse0x2a5a930();
   input += synapse0x2a5a970();
   input += synapse0x2a5a9b0();
   input += synapse0x2a5a9f0();
   input += synapse0x2a5aa30();
   input += synapse0x2a5aa70();
   input += synapse0x2a5aab0();
   input += synapse0x2a5aaf0();
   input += synapse0x2a5ab30();
   input += synapse0x2a5ab70();
   input += synapse0x2a5a600();
   input += synapse0x2a5a640();
   input += synapse0x2a5acc0();
   input += synapse0x2a5ad00();
   input += synapse0x2a5ad40();
   input += synapse0x2a5ad80();
   input += synapse0x2a5adc0();
   input += synapse0x2a5ae00();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a5a470() {
   double input = input0x2a5a470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a5ae40() {
   double input = -0.283225;
   input += synapse0x2a5b180();
   input += synapse0x2a5b1c0();
   input += synapse0x2a5b200();
   input += synapse0x2a5b240();
   input += synapse0x2a5b280();
   input += synapse0x2a5b2c0();
   input += synapse0x2a5b300();
   input += synapse0x2a5b340();
   input += synapse0x2a5b380();
   input += synapse0x2a5b3c0();
   input += synapse0x2a5b400();
   input += synapse0x2a5b440();
   input += synapse0x2a5b480();
   input += synapse0x2a5b4c0();
   input += synapse0x2a5b500();
   input += synapse0x2a5b540();
   input += synapse0x2a5afd0();
   input += synapse0x2a5b010();
   input += synapse0x2a5b690();
   input += synapse0x2a5b6d0();
   input += synapse0x2a5b710();
   input += synapse0x2a5b750();
   input += synapse0x2a5b790();
   input += synapse0x2a5b7d0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a5ae40() {
   double input = input0x2a5ae40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a5b810() {
   double input = 0.0239852;
   input += synapse0x2a5bb50();
   input += synapse0x2a5bb90();
   input += synapse0x2a5bbd0();
   input += synapse0x2a5bc10();
   input += synapse0x2a5bc50();
   input += synapse0x2a5bc90();
   input += synapse0x2a5bcd0();
   input += synapse0x2a5bd10();
   input += synapse0x2a5bd50();
   input += synapse0x2a5bd90();
   input += synapse0x2a5bdd0();
   input += synapse0x2a5be10();
   input += synapse0x2a5be50();
   input += synapse0x2a5be90();
   input += synapse0x2a5bed0();
   input += synapse0x2a5bf10();
   input += synapse0x2a5b9a0();
   input += synapse0x2a5b9e0();
   input += synapse0x2a5c060();
   input += synapse0x2a5c0a0();
   input += synapse0x2a5c0e0();
   input += synapse0x2a5c120();
   input += synapse0x2a5c160();
   input += synapse0x2a5c1a0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a5b810() {
   double input = input0x2a5b810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a5c1e0() {
   double input = -1.61914;
   input += synapse0x2a5c520();
   input += synapse0x2a5c560();
   input += synapse0x2a5c5a0();
   input += synapse0x2a5c5e0();
   input += synapse0x2a5c620();
   input += synapse0x2a5c660();
   input += synapse0x2a5c6a0();
   input += synapse0x2a5c6e0();
   input += synapse0x2a5c720();
   input += synapse0x2a5c760();
   input += synapse0x2a5c7a0();
   input += synapse0x2a5c7e0();
   input += synapse0x2a5c820();
   input += synapse0x2a5c860();
   input += synapse0x2a5c8a0();
   input += synapse0x2a5c8e0();
   input += synapse0x2a5c370();
   input += synapse0x2a5c3b0();
   input += synapse0x2a5ca30();
   input += synapse0x2a5ca70();
   input += synapse0x2a5cab0();
   input += synapse0x2a5caf0();
   input += synapse0x2a5cb30();
   input += synapse0x2a5cb70();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a5c1e0() {
   double input = input0x2a5c1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a5cbb0() {
   double input = 1.03644;
   input += synapse0x2a5cef0();
   input += synapse0x2a5cf30();
   input += synapse0x2a5cf70();
   input += synapse0x2a5cfb0();
   input += synapse0x2a5cff0();
   input += synapse0x2a5d030();
   input += synapse0x2a5d070();
   input += synapse0x2a5d0b0();
   input += synapse0x2a5d0f0();
   input += synapse0x2a5d130();
   input += synapse0x2a5d170();
   input += synapse0x2a5d1b0();
   input += synapse0x2a5d1f0();
   input += synapse0x2a5d230();
   input += synapse0x2a5d270();
   input += synapse0x2a5d2b0();
   input += synapse0x2a5cd40();
   input += synapse0x2a5cd80();
   input += synapse0x2a5d400();
   input += synapse0x2a5d440();
   input += synapse0x2a5d480();
   input += synapse0x2a5d4c0();
   input += synapse0x2a5d500();
   input += synapse0x2a5d540();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a5cbb0() {
   double input = input0x2a5cbb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a5d580() {
   double input = 0.268136;
   input += synapse0x2a5d8c0();
   input += synapse0x2a5d900();
   input += synapse0x2a5d940();
   input += synapse0x2a5d980();
   input += synapse0x2a5d9c0();
   input += synapse0x2a5da00();
   input += synapse0x2a5da40();
   input += synapse0x2a5da80();
   input += synapse0x2a5dac0();
   input += synapse0x2a5db00();
   input += synapse0x2a5db40();
   input += synapse0x2a5db80();
   input += synapse0x2a5dbc0();
   input += synapse0x2a5dc00();
   input += synapse0x2a5dc40();
   input += synapse0x2a5dc80();
   input += synapse0x2a5d710();
   input += synapse0x2a5d750();
   input += synapse0x2a5ddd0();
   input += synapse0x2a5de10();
   input += synapse0x2a5de50();
   input += synapse0x2a5de90();
   input += synapse0x2a5ded0();
   input += synapse0x2a5df10();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a5d580() {
   double input = input0x2a5d580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a5df50() {
   double input = 0.197215;
   input += synapse0x2a5e290();
   input += synapse0x2a5e2d0();
   input += synapse0x2a5e310();
   input += synapse0x2a5e350();
   input += synapse0x2a5e390();
   input += synapse0x2a5e3d0();
   input += synapse0x2a5e410();
   input += synapse0x2a5e450();
   input += synapse0x2a5e490();
   input += synapse0x2a5e4d0();
   input += synapse0x2a5e510();
   input += synapse0x2a5e550();
   input += synapse0x2a5e590();
   input += synapse0x2a5e5d0();
   input += synapse0x2a5e610();
   input += synapse0x2a5e650();
   input += synapse0x2a5e0e0();
   input += synapse0x2a5e120();
   input += synapse0x2a5e7a0();
   input += synapse0x2a5e7e0();
   input += synapse0x2a5e820();
   input += synapse0x2a5e860();
   input += synapse0x2a5e8a0();
   input += synapse0x2a5e8e0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a5df50() {
   double input = input0x2a5df50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a5e920() {
   double input = -1.13488;
   input += synapse0x2a5ec60();
   input += synapse0x2a53230();
   input += synapse0x2a53270();
   input += synapse0x2a532b0();
   input += synapse0x2a53500();
   input += synapse0x2a53540();
   input += synapse0x2a53580();
   input += synapse0x2a537d0();
   input += synapse0x2a53810();
   input += synapse0x2a53a60();
   input += synapse0x2a53aa0();
   input += synapse0x2a53ae0();
   input += synapse0x2a53d30();
   input += synapse0x2a53d70();
   input += synapse0x2a53fc0();
   input += synapse0x2a54000();
   input += synapse0x2a5eab0();
   input += synapse0x2a5eaf0();
   input += synapse0x2a54150();
   input += synapse0x2a54660();
   input += synapse0x2a546a0();
   input += synapse0x2a546e0();
   input += synapse0x2a54930();
   input += synapse0x2a54970();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a5e920() {
   double input = input0x2a5e920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a549b0() {
   double input = -1.01554;
   input += synapse0x2a54220();
   input += synapse0x2a54260();
   input += synapse0x2a542a0();
   input += synapse0x2a542e0();
   input += synapse0x2a54c60();
   input += synapse0x2a60fb0();
   input += synapse0x2a60ff0();
   input += synapse0x2a61030();
   input += synapse0x2a61070();
   input += synapse0x2a610b0();
   input += synapse0x2a610f0();
   input += synapse0x2a61130();
   input += synapse0x2a61170();
   input += synapse0x2a611b0();
   input += synapse0x2a611f0();
   input += synapse0x2a61230();
   input += synapse0x2a54b40();
   input += synapse0x2a54b80();
   input += synapse0x2a61380();
   input += synapse0x2a613c0();
   input += synapse0x2a61400();
   input += synapse0x2a61440();
   input += synapse0x2a61480();
   input += synapse0x2a614c0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a549b0() {
   double input = input0x2a549b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a61500() {
   double input = 0.877791;
   input += synapse0x2a61840();
   input += synapse0x2a61880();
   input += synapse0x2a618c0();
   input += synapse0x2a61900();
   input += synapse0x2a61940();
   input += synapse0x2a61980();
   input += synapse0x2a619c0();
   input += synapse0x2a61a00();
   input += synapse0x2a61a40();
   input += synapse0x2a61a80();
   input += synapse0x2a61ac0();
   input += synapse0x2a61b00();
   input += synapse0x2a61b40();
   input += synapse0x2a61b80();
   input += synapse0x2a61bc0();
   input += synapse0x2a61c00();
   input += synapse0x2a61690();
   input += synapse0x2a616d0();
   input += synapse0x2a61d50();
   input += synapse0x2a61d90();
   input += synapse0x2a61dd0();
   input += synapse0x2a61e10();
   input += synapse0x2a61e50();
   input += synapse0x2a61e90();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a61500() {
   double input = input0x2a61500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a61ed0() {
   double input = -0.957951;
   input += synapse0x2a62210();
   input += synapse0x2a62250();
   input += synapse0x2a62290();
   input += synapse0x2a622d0();
   input += synapse0x2a62310();
   input += synapse0x2a62350();
   input += synapse0x2a62390();
   input += synapse0x2a623d0();
   input += synapse0x2a62410();
   input += synapse0x2a62450();
   input += synapse0x2a62490();
   input += synapse0x2a624d0();
   input += synapse0x2a62510();
   input += synapse0x2a62550();
   input += synapse0x2a62590();
   input += synapse0x2a625d0();
   input += synapse0x2a62060();
   input += synapse0x2a620a0();
   input += synapse0x2a62720();
   input += synapse0x2a62760();
   input += synapse0x2a627a0();
   input += synapse0x2a627e0();
   input += synapse0x2a62820();
   input += synapse0x2a62860();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a61ed0() {
   double input = input0x2a61ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a628a0() {
   double input = -1.27435;
   input += synapse0x2a62be0();
   input += synapse0x2a62c20();
   input += synapse0x2a62c60();
   input += synapse0x2a62ca0();
   input += synapse0x2a62ce0();
   input += synapse0x2a62d20();
   input += synapse0x2a62d60();
   input += synapse0x2a62da0();
   input += synapse0x2a62de0();
   input += synapse0x2a62e20();
   input += synapse0x2a62e60();
   input += synapse0x2a62ea0();
   input += synapse0x2a62ee0();
   input += synapse0x2a62f20();
   input += synapse0x2a62f60();
   input += synapse0x2a62fa0();
   input += synapse0x2a62a30();
   input += synapse0x2a62a70();
   input += synapse0x2a630f0();
   input += synapse0x2a63130();
   input += synapse0x2a63170();
   input += synapse0x2a631b0();
   input += synapse0x2a631f0();
   input += synapse0x2a63230();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a628a0() {
   double input = input0x2a628a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a63270() {
   double input = 0.898078;
   input += synapse0x2a635b0();
   input += synapse0x2a635f0();
   input += synapse0x2a63630();
   input += synapse0x2a63670();
   input += synapse0x2a636b0();
   input += synapse0x2a636f0();
   input += synapse0x2a63730();
   input += synapse0x2a63770();
   input += synapse0x2a637b0();
   input += synapse0x2a637f0();
   input += synapse0x2a63830();
   input += synapse0x2a63870();
   input += synapse0x2a638b0();
   input += synapse0x2a638f0();
   input += synapse0x2a63930();
   input += synapse0x2a63970();
   input += synapse0x2a63400();
   input += synapse0x2a63440();
   input += synapse0x2a63ac0();
   input += synapse0x2a63b00();
   input += synapse0x2a63b40();
   input += synapse0x2a63b80();
   input += synapse0x2a63bc0();
   input += synapse0x2a63c00();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a63270() {
   double input = input0x2a63270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a63c40() {
   double input = -0.174132;
   input += synapse0x2a63f80();
   input += synapse0x2a63fc0();
   input += synapse0x2a64000();
   input += synapse0x2a64040();
   input += synapse0x2a64080();
   input += synapse0x2a640c0();
   input += synapse0x2a64100();
   input += synapse0x2a64140();
   input += synapse0x2a64180();
   input += synapse0x2a641c0();
   input += synapse0x2a64200();
   input += synapse0x2a64240();
   input += synapse0x2a64280();
   input += synapse0x2a642c0();
   input += synapse0x2a64300();
   input += synapse0x2a64340();
   input += synapse0x2a63dd0();
   input += synapse0x2a63e10();
   input += synapse0x2a64490();
   input += synapse0x2a644d0();
   input += synapse0x2a64510();
   input += synapse0x2a64550();
   input += synapse0x2a64590();
   input += synapse0x2a645d0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a63c40() {
   double input = input0x2a63c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a64610() {
   double input = -0.664424;
   input += synapse0x2a64950();
   input += synapse0x2a64990();
   input += synapse0x2a649d0();
   input += synapse0x2a64a10();
   input += synapse0x2a64a50();
   input += synapse0x2a64a90();
   input += synapse0x2a64ad0();
   input += synapse0x2a64b10();
   input += synapse0x2a64b50();
   input += synapse0x2a64b90();
   input += synapse0x2a64bd0();
   input += synapse0x2a64c10();
   input += synapse0x2a64c50();
   input += synapse0x2a64c90();
   input += synapse0x2a64cd0();
   input += synapse0x2a64d10();
   input += synapse0x2a647a0();
   input += synapse0x2a647e0();
   input += synapse0x2a64e60();
   input += synapse0x2a64ea0();
   input += synapse0x2a64ee0();
   input += synapse0x2a64f20();
   input += synapse0x2a64f60();
   input += synapse0x2a64fa0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a64610() {
   double input = input0x2a64610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a64fe0() {
   double input = -0.245735;
   input += synapse0x2a65320();
   input += synapse0x2a65360();
   input += synapse0x2a653a0();
   input += synapse0x2a653e0();
   input += synapse0x2a65420();
   input += synapse0x2a65460();
   input += synapse0x2a654a0();
   input += synapse0x2a654e0();
   input += synapse0x2a65520();
   input += synapse0x2a65560();
   input += synapse0x2a655a0();
   input += synapse0x2a655e0();
   input += synapse0x2a65620();
   input += synapse0x2a65660();
   input += synapse0x2a656a0();
   input += synapse0x2a656e0();
   input += synapse0x2a65170();
   input += synapse0x2a651b0();
   input += synapse0x2a65830();
   input += synapse0x2a65870();
   input += synapse0x2a658b0();
   input += synapse0x2a658f0();
   input += synapse0x2a65930();
   input += synapse0x2a65970();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a64fe0() {
   double input = input0x2a64fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a659b0() {
   double input = -0.11292;
   input += synapse0x2a4e420();
   input += synapse0x2a4e460();
   input += synapse0x2a4e4a0();
   input += synapse0x2a4e4e0();
   input += synapse0x2a4e520();
   input += synapse0x2a4e560();
   input += synapse0x2a4e5a0();
   input += synapse0x2a4e5e0();
   input += synapse0x2a66100();
   input += synapse0x2a66140();
   input += synapse0x2a66180();
   input += synapse0x2a661c0();
   input += synapse0x2a66200();
   input += synapse0x2a66240();
   input += synapse0x2a66280();
   input += synapse0x2a662c0();
   input += synapse0x2a65b40();
   input += synapse0x2a65b80();
   input += synapse0x2a66410();
   input += synapse0x2a66450();
   input += synapse0x2a66490();
   input += synapse0x2a664d0();
   input += synapse0x2a66510();
   input += synapse0x2a66550();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a659b0() {
   double input = input0x2a659b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a66590() {
   double input = 0.923496;
   input += synapse0x2a668d0();
   input += synapse0x2a66910();
   input += synapse0x2a66950();
   input += synapse0x2a66990();
   input += synapse0x2a669d0();
   input += synapse0x2a66a10();
   input += synapse0x2a66a50();
   input += synapse0x2a66a90();
   input += synapse0x2a66ad0();
   input += synapse0x2a66b10();
   input += synapse0x2a66b50();
   input += synapse0x2a66b90();
   input += synapse0x2a66bd0();
   input += synapse0x2a66c10();
   input += synapse0x2a66c50();
   input += synapse0x2a66c90();
   input += synapse0x2a66720();
   input += synapse0x2a66760();
   input += synapse0x2a66de0();
   input += synapse0x2a66e20();
   input += synapse0x2a66e60();
   input += synapse0x2a66ea0();
   input += synapse0x2a66ee0();
   input += synapse0x2a66f20();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a66590() {
   double input = input0x2a66590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a66f60() {
   double input = -0.37302;
   input += synapse0x2a672a0();
   input += synapse0x2a672e0();
   input += synapse0x2a67320();
   input += synapse0x2a67360();
   input += synapse0x2a673a0();
   input += synapse0x2a673e0();
   input += synapse0x2a67420();
   input += synapse0x2a67460();
   input += synapse0x2a674a0();
   input += synapse0x2a674e0();
   input += synapse0x2a67520();
   input += synapse0x2a67560();
   input += synapse0x2a675a0();
   input += synapse0x2a675e0();
   input += synapse0x2a67620();
   input += synapse0x2a67660();
   input += synapse0x2a670f0();
   input += synapse0x2a67130();
   input += synapse0x2a57c60();
   input += synapse0x2a57ca0();
   input += synapse0x2a57ce0();
   input += synapse0x2a57d20();
   input += synapse0x2a57d60();
   input += synapse0x2a57da0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a66f60() {
   double input = input0x2a66f60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a57de0() {
   double input = -1.02461;
   input += synapse0x2a58120();
   input += synapse0x2a58160();
   input += synapse0x2a581a0();
   input += synapse0x2a581e0();
   input += synapse0x2a58220();
   input += synapse0x2a58260();
   input += synapse0x2a582a0();
   input += synapse0x2a582e0();
   input += synapse0x2a58320();
   input += synapse0x2a58360();
   input += synapse0x2a583a0();
   input += synapse0x2a583e0();
   input += synapse0x2a58420();
   input += synapse0x2a58460();
   input += synapse0x2a584a0();
   input += synapse0x2a584e0();
   input += synapse0x2a57f70();
   input += synapse0x2a57fb0();
   input += synapse0x2a58630();
   input += synapse0x2a58670();
   input += synapse0x2a586b0();
   input += synapse0x2a586f0();
   input += synapse0x2a58730();
   input += synapse0x2a58770();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a57de0() {
   double input = input0x2a57de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a587b0() {
   double input = 1.99028;
   input += synapse0x2a58af0();
   input += synapse0x2a58b30();
   input += synapse0x2a58b70();
   input += synapse0x2a58bb0();
   input += synapse0x2a58bf0();
   input += synapse0x2a58c30();
   input += synapse0x2a58c70();
   input += synapse0x2a58cb0();
   input += synapse0x2a58cf0();
   input += synapse0x2a58d30();
   input += synapse0x2a58d70();
   input += synapse0x2a58db0();
   input += synapse0x2a58df0();
   input += synapse0x2a58e30();
   input += synapse0x2a58e70();
   input += synapse0x2a58eb0();
   input += synapse0x2a58940();
   input += synapse0x2a58980();
   input += synapse0x2a59000();
   input += synapse0x2a59040();
   input += synapse0x2a59080();
   input += synapse0x2a590c0();
   input += synapse0x2a59100();
   input += synapse0x2a59140();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a587b0() {
   double input = input0x2a587b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a59180() {
   double input = -0.317446;
   input += synapse0x2a594c0();
   input += synapse0x2a59500();
   input += synapse0x2a59540();
   input += synapse0x2a59580();
   input += synapse0x2a595c0();
   input += synapse0x2a59600();
   input += synapse0x2a59640();
   input += synapse0x2a59680();
   input += synapse0x2a596c0();
   input += synapse0x2a59700();
   input += synapse0x2a59740();
   input += synapse0x2a59780();
   input += synapse0x2a597c0();
   input += synapse0x2a59800();
   input += synapse0x2a59840();
   input += synapse0x2a59880();
   input += synapse0x2a59310();
   input += synapse0x2a59350();
   input += synapse0x2a599d0();
   input += synapse0x2a59a10();
   input += synapse0x2a59a50();
   input += synapse0x2a59a90();
   input += synapse0x2a59ad0();
   input += synapse0x2a59b10();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a59180() {
   double input = input0x2a59180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a6b7c0() {
   double input = -0.670388;
   input += synapse0x2a6b9e0();
   input += synapse0x2a6ba20();
   input += synapse0x2a6ba60();
   input += synapse0x2a6baa0();
   input += synapse0x2a6bae0();
   input += synapse0x2a6bb20();
   input += synapse0x2a6bb60();
   input += synapse0x2a6bba0();
   input += synapse0x2a6bbe0();
   input += synapse0x2a6bc20();
   input += synapse0x2a6bc60();
   input += synapse0x2a6bca0();
   input += synapse0x2a6bce0();
   input += synapse0x2a6bd20();
   input += synapse0x2a6bd60();
   input += synapse0x2a6bda0();
   input += synapse0x2a59b50();
   input += synapse0x2a59b90();
   input += synapse0x2a6bef0();
   input += synapse0x2a6bf30();
   input += synapse0x2a6bf70();
   input += synapse0x2a6bfb0();
   input += synapse0x2a6bff0();
   input += synapse0x2a6c030();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a6b7c0() {
   double input = input0x2a6b7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a6c070() {
   double input = -0.52558;
   input += synapse0x2a6c3b0();
   input += synapse0x2a6c3f0();
   input += synapse0x2a6c430();
   input += synapse0x2a6c470();
   input += synapse0x2a6c4b0();
   input += synapse0x2a6c4f0();
   input += synapse0x2a6c530();
   input += synapse0x2a6c570();
   input += synapse0x2a6c5b0();
   input += synapse0x2a6c5f0();
   input += synapse0x2a6c630();
   input += synapse0x2a6c670();
   input += synapse0x2a6c6b0();
   input += synapse0x2a6c6f0();
   input += synapse0x2a6c730();
   input += synapse0x2a6c770();
   input += synapse0x2a6c200();
   input += synapse0x2a6c240();
   input += synapse0x2a6c8c0();
   input += synapse0x2a6c900();
   input += synapse0x2a6c940();
   input += synapse0x2a6c980();
   input += synapse0x2a6c9c0();
   input += synapse0x2a6ca00();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a6c070() {
   double input = input0x2a6c070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a6ca40() {
   double input = -0.0869128;
   input += synapse0x2a6cd80();
   input += synapse0x2a6cdc0();
   input += synapse0x2a6ce00();
   input += synapse0x2a6ce40();
   input += synapse0x2a6ce80();
   input += synapse0x2a6cec0();
   input += synapse0x2a6cf00();
   input += synapse0x2a6cf40();
   input += synapse0x2a6cf80();
   input += synapse0x2a6cfc0();
   input += synapse0x2a6d000();
   input += synapse0x2a6d040();
   input += synapse0x2a6d080();
   input += synapse0x2a6d0c0();
   input += synapse0x2a6d100();
   input += synapse0x2a6d140();
   input += synapse0x2a6cbd0();
   input += synapse0x2a6cc10();
   input += synapse0x2a6d290();
   input += synapse0x2a6d2d0();
   input += synapse0x2a6d310();
   input += synapse0x2a6d350();
   input += synapse0x2a6d390();
   input += synapse0x2a6d3d0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a6ca40() {
   double input = input0x2a6ca40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a6d410() {
   double input = -2.6653;
   input += synapse0x2a6d750();
   input += synapse0x2a6d790();
   input += synapse0x2a6d7d0();
   input += synapse0x2a6d810();
   input += synapse0x2a6d850();
   input += synapse0x2a6d890();
   input += synapse0x2a6d8d0();
   input += synapse0x2a6d910();
   input += synapse0x2a6d950();
   input += synapse0x2a6d990();
   input += synapse0x2a6d9d0();
   input += synapse0x2a6da10();
   input += synapse0x2a6da50();
   input += synapse0x2a6da90();
   input += synapse0x2a6dad0();
   input += synapse0x2a6db10();
   input += synapse0x2a6d5a0();
   input += synapse0x2a6d5e0();
   input += synapse0x2a6dc60();
   input += synapse0x2a6dca0();
   input += synapse0x2a6dce0();
   input += synapse0x2a6dd20();
   input += synapse0x2a6dd60();
   input += synapse0x2a6dda0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a6d410() {
   double input = input0x2a6d410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a74610() {
   double input = -0.482911;
   input += synapse0x280dcb0();
   input += synapse0x280dcf0();
   input += synapse0x2a4b850();
   input += synapse0x2a4b890();
   input += synapse0x2a4c220();
   input += synapse0x2a4c260();
   input += synapse0x2a4cff0();
   input += synapse0x2a4d030();
   input += synapse0x2a4d9c0();
   input += synapse0x2a4da00();
   input += synapse0x2a4e390();
   input += synapse0x2a4e3d0();
   input += synapse0x2a4ee70();
   input += synapse0x2a4eeb0();
   input += synapse0x2a4f840();
   input += synapse0x2a4f880();
   input += synapse0x2a4c920();
   input += synapse0x2a4c960();
   input += synapse0x2a513f0();
   input += synapse0x2a51430();
   input += synapse0x2a51dc0();
   input += synapse0x2a51e00();
   input += synapse0x2a52790();
   input += synapse0x2a527d0();
   input += synapse0x2a53160();
   input += synapse0x2a531a0();
   input += synapse0x2a47300();
   input += synapse0x2a47340();
   input += synapse0x2a55250();
   input += synapse0x2a55290();
   input += synapse0x2a55c20();
   input += synapse0x2a55c60();
   input += synapse0x2a565f0();
   input += synapse0x2a56630();
   input += synapse0x2a56fc0();
   input += synapse0x2a57000();
   input += synapse0x2a57990();
   input += synapse0x2a579d0();
   input += synapse0x2a504e0();
   input += synapse0x2a50520();
   input += synapse0x2a59d90();
   input += synapse0x2a59dd0();
   input += synapse0x2a5a720();
   input += synapse0x2a5a760();
   input += synapse0x2a5b0f0();
   input += synapse0x2a5b130();
   input += synapse0x2a5bac0();
   input += synapse0x2a5bb00();
   input += synapse0x2a5c490();
   input += synapse0x2a5c4d0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a74610() {
   double input = input0x2a74610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a749b0() {
   double input = 0.295146;
   input += synapse0x2a5ebd0();
   input += synapse0x2a5ec10();
   input += synapse0x2a54190();
   input += synapse0x2a541d0();
   input += synapse0x2a617b0();
   input += synapse0x2a617f0();
   input += synapse0x2a62180();
   input += synapse0x2a621c0();
   input += synapse0x2a62b50();
   input += synapse0x2a62b90();
   input += synapse0x2a63520();
   input += synapse0x2a63560();
   input += synapse0x2a63ef0();
   input += synapse0x2a63f30();
   input += synapse0x2a648c0();
   input += synapse0x2a64900();
   input += synapse0x2a65290();
   input += synapse0x2a652d0();
   input += synapse0x2a65c60();
   input += synapse0x2a65ca0();
   input += synapse0x2a66840();
   input += synapse0x2a66880();
   input += synapse0x2a67210();
   input += synapse0x2a67250();
   input += synapse0x2a58090();
   input += synapse0x2a580d0();
   input += synapse0x2a58a60();
   input += synapse0x2a58aa0();
   input += synapse0x2a59430();
   input += synapse0x2a59470();
   input += synapse0x2a6b950();
   input += synapse0x2a6b990();
   input += synapse0x2a6c320();
   input += synapse0x2a6c360();
   input += synapse0x2a6ccf0();
   input += synapse0x2a6cd30();
   input += synapse0x2a6d6c0();
   input += synapse0x2a6d700();
   input += synapse0x2a495b0();
   input += synapse0x2a495f0();
   input += synapse0x2a5ce60();
   input += synapse0x2a5cea0();
   input += synapse0x2a6dde0();
   input += synapse0x2a6de20();
   input += synapse0x2a6de60();
   input += synapse0x2a6dea0();
   input += synapse0x2a74d50();
   input += synapse0x2a74d90();
   input += synapse0x2a74dd0();
   input += synapse0x2a74e10();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a749b0() {
   double input = input0x2a749b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a74e50() {
   double input = 0.329112;
   input += synapse0x2a75190();
   input += synapse0x2a751d0();
   input += synapse0x2a75210();
   input += synapse0x2a75250();
   input += synapse0x2a75290();
   input += synapse0x2a752d0();
   input += synapse0x2a75310();
   input += synapse0x2a75350();
   input += synapse0x2a75390();
   input += synapse0x2a753d0();
   input += synapse0x2a75410();
   input += synapse0x2a75450();
   input += synapse0x2a75490();
   input += synapse0x2a754d0();
   input += synapse0x2a75510();
   input += synapse0x2a75550();
   input += synapse0x2a74fe0();
   input += synapse0x2a75020();
   input += synapse0x2a756a0();
   input += synapse0x2a756e0();
   input += synapse0x2a75720();
   input += synapse0x2a75760();
   input += synapse0x2a757a0();
   input += synapse0x2a757e0();
   input += synapse0x2a75820();
   input += synapse0x2a75860();
   input += synapse0x2a758a0();
   input += synapse0x2a758e0();
   input += synapse0x2a75920();
   input += synapse0x2a75960();
   input += synapse0x2a759a0();
   input += synapse0x2a759e0();
   input += synapse0x2a75590();
   input += synapse0x2a755d0();
   input += synapse0x2a75610();
   input += synapse0x2a75650();
   input += synapse0x2a75c30();
   input += synapse0x2a75c70();
   input += synapse0x2a75cb0();
   input += synapse0x2a75cf0();
   input += synapse0x2a75d30();
   input += synapse0x2a75d70();
   input += synapse0x2a75db0();
   input += synapse0x2a75df0();
   input += synapse0x2a75e30();
   input += synapse0x2a75e70();
   input += synapse0x2a75eb0();
   input += synapse0x2a75ef0();
   input += synapse0x2a75f30();
   input += synapse0x2a75f70();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a74e50() {
   double input = input0x2a74e50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a75fb0() {
   double input = -1.75934;
   input += synapse0x2a762f0();
   input += synapse0x2a76330();
   input += synapse0x2a76370();
   input += synapse0x2a763b0();
   input += synapse0x2a763f0();
   input += synapse0x2a76430();
   input += synapse0x2a76470();
   input += synapse0x2a764b0();
   input += synapse0x2a764f0();
   input += synapse0x2a76530();
   input += synapse0x2a76570();
   input += synapse0x2a765b0();
   input += synapse0x2a765f0();
   input += synapse0x2a76630();
   input += synapse0x2a76670();
   input += synapse0x2a766b0();
   input += synapse0x2a76140();
   input += synapse0x2a76180();
   input += synapse0x2a76800();
   input += synapse0x2a76840();
   input += synapse0x2a76880();
   input += synapse0x2a768c0();
   input += synapse0x2a76900();
   input += synapse0x2a76940();
   input += synapse0x2a76980();
   input += synapse0x2a769c0();
   input += synapse0x2a76a00();
   input += synapse0x2a76a40();
   input += synapse0x2a76a80();
   input += synapse0x2a76ac0();
   input += synapse0x2a76b00();
   input += synapse0x2a76b40();
   input += synapse0x2a766f0();
   input += synapse0x2a76730();
   input += synapse0x2a76770();
   input += synapse0x2a767b0();
   input += synapse0x2a76d90();
   input += synapse0x2a76dd0();
   input += synapse0x2a76e10();
   input += synapse0x2a76e50();
   input += synapse0x2a76e90();
   input += synapse0x2a76ed0();
   input += synapse0x2a76f10();
   input += synapse0x2a76f50();
   input += synapse0x2a76f90();
   input += synapse0x2a76fd0();
   input += synapse0x2a77010();
   input += synapse0x2a77050();
   input += synapse0x2a77090();
   input += synapse0x2a770d0();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a75fb0() {
   double input = input0x2a75fb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a77110() {
   double input = 1.77308;
   input += synapse0x2a77450();
   input += synapse0x2a77490();
   input += synapse0x2a774d0();
   input += synapse0x2a77510();
   input += synapse0x2a77550();
   input += synapse0x2a77590();
   input += synapse0x2a775d0();
   input += synapse0x2a77610();
   input += synapse0x2a77650();
   input += synapse0x2a77690();
   input += synapse0x2a776d0();
   input += synapse0x2a77710();
   input += synapse0x2a77750();
   input += synapse0x2a77790();
   input += synapse0x2a777d0();
   input += synapse0x2a77810();
   input += synapse0x2a772a0();
   input += synapse0x2a772e0();
   input += synapse0x2a77960();
   input += synapse0x2a779a0();
   input += synapse0x2a779e0();
   input += synapse0x2a77a20();
   input += synapse0x2a77a60();
   input += synapse0x2a77aa0();
   input += synapse0x2a77ae0();
   input += synapse0x2a77b20();
   input += synapse0x2a77b60();
   input += synapse0x2a77ba0();
   input += synapse0x2a77be0();
   input += synapse0x2a77c20();
   input += synapse0x2a77c60();
   input += synapse0x2a77ca0();
   input += synapse0x2a77850();
   input += synapse0x2a77890();
   input += synapse0x2a778d0();
   input += synapse0x2a77910();
   input += synapse0x2a77ef0();
   input += synapse0x2a77f30();
   input += synapse0x2a77f70();
   input += synapse0x2a77fb0();
   input += synapse0x2a77ff0();
   input += synapse0x2a78030();
   input += synapse0x2a78070();
   input += synapse0x2a780b0();
   input += synapse0x2a780f0();
   input += synapse0x2a78130();
   input += synapse0x2a78170();
   input += synapse0x2a781b0();
   input += synapse0x2a781f0();
   input += synapse0x2a78230();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a77110() {
   double input = input0x2a77110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_sLdL::input0x2a78270() {
   double input = 1.33911;
   input += synapse0x2a78490();
   input += synapse0x2a784d0();
   input += synapse0x2a78510();
   input += synapse0x2a78550();
   input += synapse0x2a78590();
   return input;
}

double NNfunction_sb_sLdL::neuron0x2a78270() {
   double input = input0x2a78270();
   return (input * 1)+0;
}

double NNfunction_sb_sLdL::synapse0x2a44220() {
   return (neuron0x2a44360()*-0.73809);
}

double NNfunction_sb_sLdL::synapse0x2a44260() {
   return (neuron0x2a446a0()*-0.040236);
}

double NNfunction_sb_sLdL::synapse0x2a49640() {
   return (neuron0x2a449e0()*-0.218564);
}

double NNfunction_sb_sLdL::synapse0x2a49680() {
   return (neuron0x2a44d20()*0.0755171);
}

double NNfunction_sb_sLdL::synapse0x2a496c0() {
   return (neuron0x2a45060()*0.251218);
}

double NNfunction_sb_sLdL::synapse0x2a49700() {
   return (neuron0x2a453a0()*-0.758172);
}

double NNfunction_sb_sLdL::synapse0x2a49740() {
   return (neuron0x2a456e0()*0.151282);
}

double NNfunction_sb_sLdL::synapse0x2a49780() {
   return (neuron0x2a45a20()*0.0212229);
}

double NNfunction_sb_sLdL::synapse0x2a497c0() {
   return (neuron0x2a45d60()*-0.235025);
}

double NNfunction_sb_sLdL::synapse0x2a49800() {
   return (neuron0x2a460a0()*0.173741);
}

double NNfunction_sb_sLdL::synapse0x2a49840() {
   return (neuron0x2a463e0()*-0.303319);
}

double NNfunction_sb_sLdL::synapse0x2a49880() {
   return (neuron0x2a46720()*0.986278);
}

double NNfunction_sb_sLdL::synapse0x2a498c0() {
   return (neuron0x2a46a60()*-0.128468);
}

double NNfunction_sb_sLdL::synapse0x2a49900() {
   return (neuron0x2a46da0()*-0.271331);
}

double NNfunction_sb_sLdL::synapse0x2a49940() {
   return (neuron0x2a470e0()*0.966846);
}

double NNfunction_sb_sLdL::synapse0x2a49980() {
   return (neuron0x2a47420()*1.25139);
}

double NNfunction_sb_sLdL::synapse0x2a44190() {
   return (neuron0x2a47760()*-0.26043);
}

double NNfunction_sb_sLdL::synapse0x2a441d0() {
   return (neuron0x2a47cc0()*0.372875);
}

double NNfunction_sb_sLdL::synapse0x27ff5b0() {
   return (neuron0x2a47ee0()*0.810386);
}

double NNfunction_sb_sLdL::synapse0x27ff5f0() {
   return (neuron0x2a48220()*-0.310789);
}

double NNfunction_sb_sLdL::synapse0x2a49be0() {
   return (neuron0x2a48560()*-0.624418);
}

double NNfunction_sb_sLdL::synapse0x2a49c20() {
   return (neuron0x2a488a0()*0.558581);
}

double NNfunction_sb_sLdL::synapse0x2a49c60() {
   return (neuron0x2a48be0()*0.782514);
}

double NNfunction_sb_sLdL::synapse0x2a49ca0() {
   return (neuron0x2a48f20()*0.616944);
}

double NNfunction_sb_sLdL::synapse0x2a4a020() {
   return (neuron0x2a44360()*-0.0186378);
}

double NNfunction_sb_sLdL::synapse0x2a4a060() {
   return (neuron0x2a446a0()*0.593376);
}

double NNfunction_sb_sLdL::synapse0x2a4a0a0() {
   return (neuron0x2a449e0()*0.77272);
}

double NNfunction_sb_sLdL::synapse0x2a4a0e0() {
   return (neuron0x2a44d20()*-0.139456);
}

double NNfunction_sb_sLdL::synapse0x2a4a120() {
   return (neuron0x2a45060()*0.503977);
}

double NNfunction_sb_sLdL::synapse0x2a4a160() {
   return (neuron0x2a453a0()*-0.320047);
}

double NNfunction_sb_sLdL::synapse0x2a4a1a0() {
   return (neuron0x2a456e0()*0.0560481);
}

double NNfunction_sb_sLdL::synapse0x2a4a1e0() {
   return (neuron0x2a45a20()*0.158367);
}

double NNfunction_sb_sLdL::synapse0x2a4a220() {
   return (neuron0x2a45d60()*-1.42977);
}

double NNfunction_sb_sLdL::synapse0x2a49ad0() {
   return (neuron0x2a460a0()*0.22933);
}

double NNfunction_sb_sLdL::synapse0x2a49b10() {
   return (neuron0x2a463e0()*0.673126);
}

double NNfunction_sb_sLdL::synapse0x2a49b50() {
   return (neuron0x2a46720()*-0.0492955);
}

double NNfunction_sb_sLdL::synapse0x2a49b90() {
   return (neuron0x2a46a60()*-0.258588);
}

double NNfunction_sb_sLdL::synapse0x2a4a470() {
   return (neuron0x2a46da0()*0.78239);
}

double NNfunction_sb_sLdL::synapse0x2a4a4b0() {
   return (neuron0x2a470e0()*0.145768);
}

double NNfunction_sb_sLdL::synapse0x2a4a4f0() {
   return (neuron0x2a47420()*-0.765577);
}

double NNfunction_sb_sLdL::synapse0x2a49e70() {
   return (neuron0x2a47760()*0.75519);
}

double NNfunction_sb_sLdL::synapse0x2a49eb0() {
   return (neuron0x2a47cc0()*0.297114);
}

double NNfunction_sb_sLdL::synapse0x2a4a640() {
   return (neuron0x2a47ee0()*0.397249);
}

double NNfunction_sb_sLdL::synapse0x2a4a680() {
   return (neuron0x2a48220()*0.133846);
}

double NNfunction_sb_sLdL::synapse0x2a4a6c0() {
   return (neuron0x2a48560()*0.445433);
}

double NNfunction_sb_sLdL::synapse0x2a4a700() {
   return (neuron0x2a488a0()*0.240277);
}

double NNfunction_sb_sLdL::synapse0x2a4a740() {
   return (neuron0x2a48be0()*0.0553351);
}

double NNfunction_sb_sLdL::synapse0x2a4a780() {
   return (neuron0x2a48f20()*-0.235466);
}

double NNfunction_sb_sLdL::synapse0x2a4ab00() {
   return (neuron0x2a44360()*0.904264);
}

double NNfunction_sb_sLdL::synapse0x2a4ab40() {
   return (neuron0x2a446a0()*-0.0466231);
}

double NNfunction_sb_sLdL::synapse0x2a4ab80() {
   return (neuron0x2a449e0()*-0.508392);
}

double NNfunction_sb_sLdL::synapse0x2a4abc0() {
   return (neuron0x2a44d20()*0.12653);
}

double NNfunction_sb_sLdL::synapse0x2a4ac00() {
   return (neuron0x2a45060()*0.737662);
}

double NNfunction_sb_sLdL::synapse0x2a4ac40() {
   return (neuron0x2a453a0()*0.158362);
}

double NNfunction_sb_sLdL::synapse0x2a4ac80() {
   return (neuron0x2a456e0()*-0.317742);
}

double NNfunction_sb_sLdL::synapse0x2a4acc0() {
   return (neuron0x2a45a20()*-0.275952);
}

double NNfunction_sb_sLdL::synapse0x2a4ad00() {
   return (neuron0x2a45d60()*0.39879);
}

double NNfunction_sb_sLdL::synapse0x2a4ad40() {
   return (neuron0x2a460a0()*-0.378088);
}

double NNfunction_sb_sLdL::synapse0x2a4ad80() {
   return (neuron0x2a463e0()*0.221579);
}

double NNfunction_sb_sLdL::synapse0x2a4adc0() {
   return (neuron0x2a46720()*-0.250102);
}

double NNfunction_sb_sLdL::synapse0x2a4ae00() {
   return (neuron0x2a46a60()*-0.654076);
}

double NNfunction_sb_sLdL::synapse0x2a4ae40() {
   return (neuron0x2a46da0()*-0.0621357);
}

double NNfunction_sb_sLdL::synapse0x2a4ae80() {
   return (neuron0x2a470e0()*0.298369);
}

double NNfunction_sb_sLdL::synapse0x2a4aec0() {
   return (neuron0x2a47420()*0.547204);
}

double NNfunction_sb_sLdL::synapse0x2a4a950() {
   return (neuron0x2a47760()*0.467369);
}

double NNfunction_sb_sLdL::synapse0x2a4a990() {
   return (neuron0x2a47cc0()*0.248104);
}

double NNfunction_sb_sLdL::synapse0x27ffc50() {
   return (neuron0x2a47ee0()*0.320373);
}

double NNfunction_sb_sLdL::synapse0x280d4c0() {
   return (neuron0x2a48220()*0.492343);
}

double NNfunction_sb_sLdL::synapse0x280d500() {
   return (neuron0x2a48560()*-0.395737);
}

double NNfunction_sb_sLdL::synapse0x2a333f0() {
   return (neuron0x2a488a0()*-0.904943);
}

double NNfunction_sb_sLdL::synapse0x2a33430() {
   return (neuron0x2a48be0()*0.177258);
}

double NNfunction_sb_sLdL::synapse0x2a33470() {
   return (neuron0x2a48f20()*-0.147448);
}

double NNfunction_sb_sLdL::synapse0x280dd40() {
   return (neuron0x2a44360()*-0.0121533);
}

double NNfunction_sb_sLdL::synapse0x2a4a3f0() {
   return (neuron0x2a446a0()*-0.0066169);
}

double NNfunction_sb_sLdL::synapse0x2a4a430() {
   return (neuron0x2a449e0()*-0.111552);
}

double NNfunction_sb_sLdL::synapse0x2a4b010() {
   return (neuron0x2a44d20()*2.69445);
}

double NNfunction_sb_sLdL::synapse0x2a4b050() {
   return (neuron0x2a45060()*0.0273777);
}

double NNfunction_sb_sLdL::synapse0x2a4b090() {
   return (neuron0x2a453a0()*0.0085791);
}

double NNfunction_sb_sLdL::synapse0x2a4b0d0() {
   return (neuron0x2a456e0()*0.0115934);
}

double NNfunction_sb_sLdL::synapse0x2a4b110() {
   return (neuron0x2a45a20()*-0.0102268);
}

double NNfunction_sb_sLdL::synapse0x2a4b150() {
   return (neuron0x2a45d60()*0.0159687);
}

double NNfunction_sb_sLdL::synapse0x2a4b190() {
   return (neuron0x2a460a0()*-0.017088);
}

double NNfunction_sb_sLdL::synapse0x2a4b1d0() {
   return (neuron0x2a463e0()*-0.0390138);
}

double NNfunction_sb_sLdL::synapse0x2a4b210() {
   return (neuron0x2a46720()*-0.607791);
}

double NNfunction_sb_sLdL::synapse0x2a4b250() {
   return (neuron0x2a46a60()*-0.491479);
}

double NNfunction_sb_sLdL::synapse0x2a4b290() {
   return (neuron0x2a46da0()*-0.0438372);
}

double NNfunction_sb_sLdL::synapse0x2a4b2d0() {
   return (neuron0x2a470e0()*0.00950472);
}

double NNfunction_sb_sLdL::synapse0x2a4b310() {
   return (neuron0x2a47420()*0.0114022);
}

double NNfunction_sb_sLdL::synapse0x2a442a0() {
   return (neuron0x2a47760()*0.00479003);
}

double NNfunction_sb_sLdL::synapse0x2a442e0() {
   return (neuron0x2a47cc0()*-0.00429055);
}

double NNfunction_sb_sLdL::synapse0x2a44320() {
   return (neuron0x2a47ee0()*0.0497709);
}

double NNfunction_sb_sLdL::synapse0x2a4b460() {
   return (neuron0x2a48220()*0.0242497);
}

double NNfunction_sb_sLdL::synapse0x2a4b4a0() {
   return (neuron0x2a48560()*0.0200846);
}

double NNfunction_sb_sLdL::synapse0x2a4b4e0() {
   return (neuron0x2a488a0()*0.024948);
}

double NNfunction_sb_sLdL::synapse0x2a4b520() {
   return (neuron0x2a48be0()*-0.00213986);
}

double NNfunction_sb_sLdL::synapse0x2a4b560() {
   return (neuron0x2a48f20()*0.0327649);
}

double NNfunction_sb_sLdL::synapse0x2a4b8e0() {
   return (neuron0x2a44360()*-0.295927);
}

double NNfunction_sb_sLdL::synapse0x2a4b920() {
   return (neuron0x2a446a0()*0.0569566);
}

double NNfunction_sb_sLdL::synapse0x2a4b960() {
   return (neuron0x2a449e0()*-0.346324);
}

double NNfunction_sb_sLdL::synapse0x2a4b9a0() {
   return (neuron0x2a44d20()*2.07164);
}

double NNfunction_sb_sLdL::synapse0x2a4b9e0() {
   return (neuron0x2a45060()*-0.188051);
}

double NNfunction_sb_sLdL::synapse0x2a4ba20() {
   return (neuron0x2a453a0()*-0.454263);
}

double NNfunction_sb_sLdL::synapse0x2a4ba60() {
   return (neuron0x2a456e0()*0.151123);
}

double NNfunction_sb_sLdL::synapse0x2a4baa0() {
   return (neuron0x2a45a20()*0.240257);
}

double NNfunction_sb_sLdL::synapse0x2a4bae0() {
   return (neuron0x2a45d60()*-0.0464818);
}

double NNfunction_sb_sLdL::synapse0x2a4bb20() {
   return (neuron0x2a460a0()*0.0599048);
}

double NNfunction_sb_sLdL::synapse0x2a4bb60() {
   return (neuron0x2a463e0()*-0.137958);
}

double NNfunction_sb_sLdL::synapse0x2a4bba0() {
   return (neuron0x2a46720()*1.32109);
}

double NNfunction_sb_sLdL::synapse0x2a4bbe0() {
   return (neuron0x2a46a60()*1.06571);
}

double NNfunction_sb_sLdL::synapse0x2a4bc20() {
   return (neuron0x2a46da0()*-0.00492786);
}

double NNfunction_sb_sLdL::synapse0x2a4bc60() {
   return (neuron0x2a470e0()*0.0522928);
}

double NNfunction_sb_sLdL::synapse0x2a4bca0() {
   return (neuron0x2a47420()*-0.0816008);
}

double NNfunction_sb_sLdL::synapse0x2a4b730() {
   return (neuron0x2a47760()*0.0680879);
}

double NNfunction_sb_sLdL::synapse0x2a4b770() {
   return (neuron0x2a47cc0()*0.21776);
}

double NNfunction_sb_sLdL::synapse0x2a4bdf0() {
   return (neuron0x2a47ee0()*0.0826216);
}

double NNfunction_sb_sLdL::synapse0x2a4be30() {
   return (neuron0x2a48220()*-0.0674375);
}

double NNfunction_sb_sLdL::synapse0x2a4be70() {
   return (neuron0x2a48560()*-0.118997);
}

double NNfunction_sb_sLdL::synapse0x2a4beb0() {
   return (neuron0x2a488a0()*-0.0969472);
}

double NNfunction_sb_sLdL::synapse0x2a4bef0() {
   return (neuron0x2a48be0()*0.0308278);
}

double NNfunction_sb_sLdL::synapse0x2a4bf30() {
   return (neuron0x2a48f20()*0.0725932);
}

double NNfunction_sb_sLdL::synapse0x2a4c2b0() {
   return (neuron0x2a44360()*0.322504);
}

double NNfunction_sb_sLdL::synapse0x2a4c2f0() {
   return (neuron0x2a446a0()*0.379887);
}

double NNfunction_sb_sLdL::synapse0x2a4c330() {
   return (neuron0x2a449e0()*-0.0332321);
}

double NNfunction_sb_sLdL::synapse0x2a4c370() {
   return (neuron0x2a44d20()*-0.392955);
}

double NNfunction_sb_sLdL::synapse0x2a4c3b0() {
   return (neuron0x2a45060()*0.526356);
}

double NNfunction_sb_sLdL::synapse0x2a4c3f0() {
   return (neuron0x2a453a0()*0.0717586);
}

double NNfunction_sb_sLdL::synapse0x2a4c430() {
   return (neuron0x2a456e0()*-0.907993);
}

double NNfunction_sb_sLdL::synapse0x2a4c470() {
   return (neuron0x2a45a20()*-0.948167);
}

double NNfunction_sb_sLdL::synapse0x2a4c4b0() {
   return (neuron0x2a45d60()*-0.258058);
}

double NNfunction_sb_sLdL::synapse0x280d810() {
   return (neuron0x2a460a0()*-0.467834);
}

double NNfunction_sb_sLdL::synapse0x280d850() {
   return (neuron0x2a463e0()*-1.45225);
}

double NNfunction_sb_sLdL::synapse0x280d890() {
   return (neuron0x2a46720()*1.01089);
}

double NNfunction_sb_sLdL::synapse0x280d8d0() {
   return (neuron0x2a46a60()*-0.162571);
}

double NNfunction_sb_sLdL::synapse0x280d910() {
   return (neuron0x2a46da0()*-0.943923);
}

double NNfunction_sb_sLdL::synapse0x280d950() {
   return (neuron0x2a470e0()*0.430795);
}

double NNfunction_sb_sLdL::synapse0x280d990() {
   return (neuron0x2a47420()*-0.665869);
}

double NNfunction_sb_sLdL::synapse0x2a4c100() {
   return (neuron0x2a47760()*0.614762);
}

double NNfunction_sb_sLdL::synapse0x2a4c140() {
   return (neuron0x2a47cc0()*-0.168384);
}

double NNfunction_sb_sLdL::synapse0x280dae0() {
   return (neuron0x2a47ee0()*-0.246842);
}

double NNfunction_sb_sLdL::synapse0x280db20() {
   return (neuron0x2a48220()*-0.304266);
}

double NNfunction_sb_sLdL::synapse0x280db60() {
   return (neuron0x2a48560()*0.747478);
}

double NNfunction_sb_sLdL::synapse0x280dba0() {
   return (neuron0x2a488a0()*-0.184105);
}

double NNfunction_sb_sLdL::synapse0x280dbe0() {
   return (neuron0x2a48be0()*0.429342);
}

double NNfunction_sb_sLdL::synapse0x2a4cd00() {
   return (neuron0x2a48f20()*-0.117047);
}

double NNfunction_sb_sLdL::synapse0x2a4d080() {
   return (neuron0x2a44360()*0.0383568);
}

double NNfunction_sb_sLdL::synapse0x2a4d0c0() {
   return (neuron0x2a446a0()*-0.226611);
}

double NNfunction_sb_sLdL::synapse0x2a4d100() {
   return (neuron0x2a449e0()*-0.688962);
}

double NNfunction_sb_sLdL::synapse0x2a4d140() {
   return (neuron0x2a44d20()*-1.02422);
}

double NNfunction_sb_sLdL::synapse0x2a4d180() {
   return (neuron0x2a45060()*0.0046639);
}

double NNfunction_sb_sLdL::synapse0x2a4d1c0() {
   return (neuron0x2a453a0()*-0.134717);
}

double NNfunction_sb_sLdL::synapse0x2a4d200() {
   return (neuron0x2a456e0()*0.108798);
}

double NNfunction_sb_sLdL::synapse0x2a4d240() {
   return (neuron0x2a45a20()*0.423004);
}

double NNfunction_sb_sLdL::synapse0x2a4d280() {
   return (neuron0x2a45d60()*-0.103323);
}

double NNfunction_sb_sLdL::synapse0x2a4d2c0() {
   return (neuron0x2a460a0()*0.129197);
}

double NNfunction_sb_sLdL::synapse0x2a4d300() {
   return (neuron0x2a463e0()*-0.561682);
}

double NNfunction_sb_sLdL::synapse0x2a4d340() {
   return (neuron0x2a46720()*0.0667616);
}

double NNfunction_sb_sLdL::synapse0x2a4d380() {
   return (neuron0x2a46a60()*-1.14163);
}

double NNfunction_sb_sLdL::synapse0x2a4d3c0() {
   return (neuron0x2a46da0()*0.105052);
}

double NNfunction_sb_sLdL::synapse0x2a4d400() {
   return (neuron0x2a470e0()*-0.283516);
}

double NNfunction_sb_sLdL::synapse0x2a4d440() {
   return (neuron0x2a47420()*0.131876);
}

double NNfunction_sb_sLdL::synapse0x2a4ced0() {
   return (neuron0x2a47760()*0.703212);
}

double NNfunction_sb_sLdL::synapse0x2a4cf10() {
   return (neuron0x2a47cc0()*0.00334449);
}

double NNfunction_sb_sLdL::synapse0x2a4d590() {
   return (neuron0x2a47ee0()*-0.0640048);
}

double NNfunction_sb_sLdL::synapse0x2a4d5d0() {
   return (neuron0x2a48220()*0.206062);
}

double NNfunction_sb_sLdL::synapse0x2a4d610() {
   return (neuron0x2a48560()*-0.303508);
}

double NNfunction_sb_sLdL::synapse0x2a4d650() {
   return (neuron0x2a488a0()*-0.0661273);
}

double NNfunction_sb_sLdL::synapse0x2a4d690() {
   return (neuron0x2a48be0()*0.0927784);
}

double NNfunction_sb_sLdL::synapse0x2a4d6d0() {
   return (neuron0x2a48f20()*0.0468675);
}

double NNfunction_sb_sLdL::synapse0x2a4da50() {
   return (neuron0x2a44360()*-0.712616);
}

double NNfunction_sb_sLdL::synapse0x2a4da90() {
   return (neuron0x2a446a0()*-0.672478);
}

double NNfunction_sb_sLdL::synapse0x2a4dad0() {
   return (neuron0x2a449e0()*0.817722);
}

double NNfunction_sb_sLdL::synapse0x2a4db10() {
   return (neuron0x2a44d20()*-0.0270838);
}

double NNfunction_sb_sLdL::synapse0x2a4db50() {
   return (neuron0x2a45060()*0.21758);
}

double NNfunction_sb_sLdL::synapse0x2a4db90() {
   return (neuron0x2a453a0()*0.205306);
}

double NNfunction_sb_sLdL::synapse0x2a4dbd0() {
   return (neuron0x2a456e0()*1.3913);
}

double NNfunction_sb_sLdL::synapse0x2a4dc10() {
   return (neuron0x2a45a20()*0.0436069);
}

double NNfunction_sb_sLdL::synapse0x2a4dc50() {
   return (neuron0x2a45d60()*0.707436);
}

double NNfunction_sb_sLdL::synapse0x2a4dc90() {
   return (neuron0x2a460a0()*0.0133825);
}

double NNfunction_sb_sLdL::synapse0x2a4dcd0() {
   return (neuron0x2a463e0()*-0.430675);
}

double NNfunction_sb_sLdL::synapse0x2a4dd10() {
   return (neuron0x2a46720()*-0.204096);
}

double NNfunction_sb_sLdL::synapse0x2a4dd50() {
   return (neuron0x2a46a60()*-1.20542);
}

double NNfunction_sb_sLdL::synapse0x2a4dd90() {
   return (neuron0x2a46da0()*0.825689);
}

double NNfunction_sb_sLdL::synapse0x2a4ddd0() {
   return (neuron0x2a470e0()*0.342288);
}

double NNfunction_sb_sLdL::synapse0x2a4de10() {
   return (neuron0x2a47420()*-0.0341007);
}

double NNfunction_sb_sLdL::synapse0x2a4d8a0() {
   return (neuron0x2a47760()*-0.463271);
}

double NNfunction_sb_sLdL::synapse0x2a4d8e0() {
   return (neuron0x2a47cc0()*0.534807);
}

double NNfunction_sb_sLdL::synapse0x2a4df60() {
   return (neuron0x2a47ee0()*-0.192209);
}

double NNfunction_sb_sLdL::synapse0x2a4dfa0() {
   return (neuron0x2a48220()*-0.497658);
}

double NNfunction_sb_sLdL::synapse0x2a4dfe0() {
   return (neuron0x2a48560()*-0.190462);
}

double NNfunction_sb_sLdL::synapse0x2a4e020() {
   return (neuron0x2a488a0()*0.431806);
}

double NNfunction_sb_sLdL::synapse0x2a4e060() {
   return (neuron0x2a48be0()*0.25878);
}

double NNfunction_sb_sLdL::synapse0x2a4e0a0() {
   return (neuron0x2a48f20()*0.458191);
}

double NNfunction_sb_sLdL::synapse0x2a47bb0() {
   return (neuron0x2a44360()*-0.00459164);
}

double NNfunction_sb_sLdL::synapse0x2a47bf0() {
   return (neuron0x2a446a0()*0.000756491);
}

double NNfunction_sb_sLdL::synapse0x2a47c30() {
   return (neuron0x2a449e0()*0.0310145);
}

double NNfunction_sb_sLdL::synapse0x2a47c70() {
   return (neuron0x2a44d20()*-2.6429);
}

double NNfunction_sb_sLdL::synapse0x2a4e630() {
   return (neuron0x2a45060()*0.00416984);
}

double NNfunction_sb_sLdL::synapse0x2a4e670() {
   return (neuron0x2a453a0()*0.00495753);
}

double NNfunction_sb_sLdL::synapse0x2a4e6b0() {
   return (neuron0x2a456e0()*0.00957328);
}

double NNfunction_sb_sLdL::synapse0x2a4e6f0() {
   return (neuron0x2a45a20()*-0.00596842);
}

double NNfunction_sb_sLdL::synapse0x2a4e730() {
   return (neuron0x2a45d60()*-0.00613697);
}

double NNfunction_sb_sLdL::synapse0x2a4e770() {
   return (neuron0x2a460a0()*0.00576633);
}

double NNfunction_sb_sLdL::synapse0x2a4e7b0() {
   return (neuron0x2a463e0()*0.0107127);
}

double NNfunction_sb_sLdL::synapse0x2a4e7f0() {
   return (neuron0x2a46720()*0.33506);
}

double NNfunction_sb_sLdL::synapse0x2a4e830() {
   return (neuron0x2a46a60()*0.317592);
}

double NNfunction_sb_sLdL::synapse0x2a4e870() {
   return (neuron0x2a46da0()*0.00817889);
}

double NNfunction_sb_sLdL::synapse0x2a4e8b0() {
   return (neuron0x2a470e0()*0.00701678);
}

double NNfunction_sb_sLdL::synapse0x2a4e8f0() {
   return (neuron0x2a47420()*0.0024953);
}

double NNfunction_sb_sLdL::synapse0x2a4e270() {
   return (neuron0x2a47760()*-0.0162388);
}

double NNfunction_sb_sLdL::synapse0x2a4e2b0() {
   return (neuron0x2a47cc0()*0.00393127);
}

double NNfunction_sb_sLdL::synapse0x2a4ea40() {
   return (neuron0x2a47ee0()*-0.00391072);
}

double NNfunction_sb_sLdL::synapse0x2a4ea80() {
   return (neuron0x2a48220()*-0.00115959);
}

double NNfunction_sb_sLdL::synapse0x2a4eac0() {
   return (neuron0x2a48560()*0.000979127);
}

double NNfunction_sb_sLdL::synapse0x2a4eb00() {
   return (neuron0x2a488a0()*0.0017507);
}

double NNfunction_sb_sLdL::synapse0x2a4eb40() {
   return (neuron0x2a48be0()*0.00742665);
}

double NNfunction_sb_sLdL::synapse0x2a4eb80() {
   return (neuron0x2a48f20()*-0.0237334);
}

double NNfunction_sb_sLdL::synapse0x2a4ef00() {
   return (neuron0x2a44360()*0.451239);
}

double NNfunction_sb_sLdL::synapse0x2a4ef40() {
   return (neuron0x2a446a0()*1.06051);
}

double NNfunction_sb_sLdL::synapse0x2a4ef80() {
   return (neuron0x2a449e0()*0.195248);
}

double NNfunction_sb_sLdL::synapse0x2a4efc0() {
   return (neuron0x2a44d20()*-0.362251);
}

double NNfunction_sb_sLdL::synapse0x2a4f000() {
   return (neuron0x2a45060()*-0.388485);
}

double NNfunction_sb_sLdL::synapse0x2a4f040() {
   return (neuron0x2a453a0()*0.538862);
}

double NNfunction_sb_sLdL::synapse0x2a4f080() {
   return (neuron0x2a456e0()*0.321886);
}

double NNfunction_sb_sLdL::synapse0x2a4f0c0() {
   return (neuron0x2a45a20()*0.540549);
}

double NNfunction_sb_sLdL::synapse0x2a4f100() {
   return (neuron0x2a45d60()*0.349076);
}

double NNfunction_sb_sLdL::synapse0x2a4f140() {
   return (neuron0x2a460a0()*0.683375);
}

double NNfunction_sb_sLdL::synapse0x2a4f180() {
   return (neuron0x2a463e0()*-0.128794);
}

double NNfunction_sb_sLdL::synapse0x2a4f1c0() {
   return (neuron0x2a46720()*-0.220773);
}

double NNfunction_sb_sLdL::synapse0x2a4f200() {
   return (neuron0x2a46a60()*0.401785);
}

double NNfunction_sb_sLdL::synapse0x2a4f240() {
   return (neuron0x2a46da0()*-0.0282055);
}

double NNfunction_sb_sLdL::synapse0x2a4f280() {
   return (neuron0x2a470e0()*0.488737);
}

double NNfunction_sb_sLdL::synapse0x2a4f2c0() {
   return (neuron0x2a47420()*-0.576827);
}

double NNfunction_sb_sLdL::synapse0x2a4ed50() {
   return (neuron0x2a47760()*-0.290872);
}

double NNfunction_sb_sLdL::synapse0x2a4ed90() {
   return (neuron0x2a47cc0()*-0.118487);
}

double NNfunction_sb_sLdL::synapse0x2a4f410() {
   return (neuron0x2a47ee0()*-0.137641);
}

double NNfunction_sb_sLdL::synapse0x2a4f450() {
   return (neuron0x2a48220()*0.284389);
}

double NNfunction_sb_sLdL::synapse0x2a4f490() {
   return (neuron0x2a48560()*1.65408);
}

double NNfunction_sb_sLdL::synapse0x2a4f4d0() {
   return (neuron0x2a488a0()*0.340601);
}

double NNfunction_sb_sLdL::synapse0x2a4f510() {
   return (neuron0x2a48be0()*0.260532);
}

double NNfunction_sb_sLdL::synapse0x2a4f550() {
   return (neuron0x2a48f20()*0.216936);
}

double NNfunction_sb_sLdL::synapse0x2a4f8d0() {
   return (neuron0x2a44360()*0.018713);
}

double NNfunction_sb_sLdL::synapse0x2a4f910() {
   return (neuron0x2a446a0()*0.00198595);
}

double NNfunction_sb_sLdL::synapse0x2a4f950() {
   return (neuron0x2a449e0()*-0.000868036);
}

double NNfunction_sb_sLdL::synapse0x2a4f990() {
   return (neuron0x2a44d20()*2.08396);
}

double NNfunction_sb_sLdL::synapse0x2a4f9d0() {
   return (neuron0x2a45060()*0.0133629);
}

double NNfunction_sb_sLdL::synapse0x2a4fa10() {
   return (neuron0x2a453a0()*-0.00101184);
}

double NNfunction_sb_sLdL::synapse0x2a4fa50() {
   return (neuron0x2a456e0()*-0.00278986);
}

double NNfunction_sb_sLdL::synapse0x2a4fa90() {
   return (neuron0x2a45a20()*-0.00948215);
}

double NNfunction_sb_sLdL::synapse0x2a4fad0() {
   return (neuron0x2a45d60()*-0.00210386);
}

double NNfunction_sb_sLdL::synapse0x2a4fb10() {
   return (neuron0x2a460a0()*-0.00297423);
}

double NNfunction_sb_sLdL::synapse0x2a4fb50() {
   return (neuron0x2a463e0()*0.000629165);
}

double NNfunction_sb_sLdL::synapse0x2a4fb90() {
   return (neuron0x2a46720()*-0.0126873);
}

double NNfunction_sb_sLdL::synapse0x2a4fbd0() {
   return (neuron0x2a46a60()*0.00548047);
}

double NNfunction_sb_sLdL::synapse0x2a4fc10() {
   return (neuron0x2a46da0()*0.000768718);
}

double NNfunction_sb_sLdL::synapse0x2a4fc50() {
   return (neuron0x2a470e0()*-0.00749786);
}

double NNfunction_sb_sLdL::synapse0x2a4fc90() {
   return (neuron0x2a47420()*-0.00480941);
}

double NNfunction_sb_sLdL::synapse0x2a4f720() {
   return (neuron0x2a47760()*-0.0163621);
}

double NNfunction_sb_sLdL::synapse0x2a4f760() {
   return (neuron0x2a47cc0()*0.00962614);
}

double NNfunction_sb_sLdL::synapse0x2a4c4f0() {
   return (neuron0x2a47ee0()*-0.0011345);
}

double NNfunction_sb_sLdL::synapse0x2a4c530() {
   return (neuron0x2a48220()*0.00164259);
}

double NNfunction_sb_sLdL::synapse0x2a4c570() {
   return (neuron0x2a48560()*0.0014931);
}

double NNfunction_sb_sLdL::synapse0x2a4c5b0() {
   return (neuron0x2a488a0()*0.0100937);
}

double NNfunction_sb_sLdL::synapse0x2a4c5f0() {
   return (neuron0x2a48be0()*0.0060696);
}

double NNfunction_sb_sLdL::synapse0x2a4c630() {
   return (neuron0x2a48f20()*-0.00923863);
}

double NNfunction_sb_sLdL::synapse0x2a4c9b0() {
   return (neuron0x2a44360()*0.163774);
}

double NNfunction_sb_sLdL::synapse0x2a4c9f0() {
   return (neuron0x2a446a0()*0.00525848);
}

double NNfunction_sb_sLdL::synapse0x2a4ca30() {
   return (neuron0x2a449e0()*0.0806287);
}

double NNfunction_sb_sLdL::synapse0x2a4ca70() {
   return (neuron0x2a44d20()*0.251457);
}

double NNfunction_sb_sLdL::synapse0x2a4cab0() {
   return (neuron0x2a45060()*-0.013448);
}

double NNfunction_sb_sLdL::synapse0x2a4caf0() {
   return (neuron0x2a453a0()*-0.0118021);
}

double NNfunction_sb_sLdL::synapse0x2a4cb30() {
   return (neuron0x2a456e0()*-0.0103215);
}

double NNfunction_sb_sLdL::synapse0x2a4cb70() {
   return (neuron0x2a45a20()*-0.0643501);
}

double NNfunction_sb_sLdL::synapse0x2a4cbb0() {
   return (neuron0x2a45d60()*0.00410875);
}

double NNfunction_sb_sLdL::synapse0x2a4cbf0() {
   return (neuron0x2a460a0()*-0.0618233);
}

double NNfunction_sb_sLdL::synapse0x2a4cc30() {
   return (neuron0x2a463e0()*-0.0521432);
}

double NNfunction_sb_sLdL::synapse0x2a4cc70() {
   return (neuron0x2a46720()*0.191731);
}

double NNfunction_sb_sLdL::synapse0x2a4ccb0() {
   return (neuron0x2a46a60()*0.107897);
}

double NNfunction_sb_sLdL::synapse0x2a50df0() {
   return (neuron0x2a46da0()*0.0117069);
}

double NNfunction_sb_sLdL::synapse0x2a50e30() {
   return (neuron0x2a470e0()*0.0252821);
}

double NNfunction_sb_sLdL::synapse0x2a50e70() {
   return (neuron0x2a47420()*-0.0039609);
}

double NNfunction_sb_sLdL::synapse0x2a4c800() {
   return (neuron0x2a47760()*-0.0703783);
}

double NNfunction_sb_sLdL::synapse0x2a4c840() {
   return (neuron0x2a47cc0()*0.0275426);
}

double NNfunction_sb_sLdL::synapse0x2a50fc0() {
   return (neuron0x2a47ee0()*0.0928823);
}

double NNfunction_sb_sLdL::synapse0x2a51000() {
   return (neuron0x2a48220()*0.0578406);
}

double NNfunction_sb_sLdL::synapse0x2a51040() {
   return (neuron0x2a48560()*-0.0069541);
}

double NNfunction_sb_sLdL::synapse0x2a51080() {
   return (neuron0x2a488a0()*0.003118);
}

double NNfunction_sb_sLdL::synapse0x2a510c0() {
   return (neuron0x2a48be0()*0.0186872);
}

double NNfunction_sb_sLdL::synapse0x2a51100() {
   return (neuron0x2a48f20()*0.0557844);
}

double NNfunction_sb_sLdL::synapse0x2a51480() {
   return (neuron0x2a44360()*-0.0492816);
}

double NNfunction_sb_sLdL::synapse0x2a514c0() {
   return (neuron0x2a446a0()*-0.0538079);
}

double NNfunction_sb_sLdL::synapse0x2a51500() {
   return (neuron0x2a449e0()*-0.00798136);
}

double NNfunction_sb_sLdL::synapse0x2a51540() {
   return (neuron0x2a44d20()*-0.291749);
}

double NNfunction_sb_sLdL::synapse0x2a51580() {
   return (neuron0x2a45060()*-0.0362397);
}

double NNfunction_sb_sLdL::synapse0x2a515c0() {
   return (neuron0x2a453a0()*-0.0220764);
}

double NNfunction_sb_sLdL::synapse0x2a51600() {
   return (neuron0x2a456e0()*0.00875356);
}

double NNfunction_sb_sLdL::synapse0x2a51640() {
   return (neuron0x2a45a20()*0.00243792);
}

double NNfunction_sb_sLdL::synapse0x2a51680() {
   return (neuron0x2a45d60()*0.0237448);
}

double NNfunction_sb_sLdL::synapse0x2a516c0() {
   return (neuron0x2a460a0()*0.047021);
}

double NNfunction_sb_sLdL::synapse0x2a51700() {
   return (neuron0x2a463e0()*0.0373694);
}

double NNfunction_sb_sLdL::synapse0x2a51740() {
   return (neuron0x2a46720()*0.189433);
}

double NNfunction_sb_sLdL::synapse0x2a51780() {
   return (neuron0x2a46a60()*0.192249);
}

double NNfunction_sb_sLdL::synapse0x2a517c0() {
   return (neuron0x2a46da0()*-0.0718901);
}

double NNfunction_sb_sLdL::synapse0x2a51800() {
   return (neuron0x2a470e0()*0.301833);
}

double NNfunction_sb_sLdL::synapse0x2a51840() {
   return (neuron0x2a47420()*0.221599);
}

double NNfunction_sb_sLdL::synapse0x2a512d0() {
   return (neuron0x2a47760()*-0.0223468);
}

double NNfunction_sb_sLdL::synapse0x2a51310() {
   return (neuron0x2a47cc0()*0.315392);
}

double NNfunction_sb_sLdL::synapse0x2a51990() {
   return (neuron0x2a47ee0()*0.222873);
}

double NNfunction_sb_sLdL::synapse0x2a519d0() {
   return (neuron0x2a48220()*-0.0284247);
}

double NNfunction_sb_sLdL::synapse0x2a51a10() {
   return (neuron0x2a48560()*0.0264806);
}

double NNfunction_sb_sLdL::synapse0x2a51a50() {
   return (neuron0x2a488a0()*-0.0187278);
}

double NNfunction_sb_sLdL::synapse0x2a51a90() {
   return (neuron0x2a48be0()*0.00750115);
}

double NNfunction_sb_sLdL::synapse0x2a51ad0() {
   return (neuron0x2a48f20()*-0.0258805);
}

double NNfunction_sb_sLdL::synapse0x2a51e50() {
   return (neuron0x2a44360()*-0.0176943);
}

double NNfunction_sb_sLdL::synapse0x2a51e90() {
   return (neuron0x2a446a0()*0.000552627);
}

double NNfunction_sb_sLdL::synapse0x2a51ed0() {
   return (neuron0x2a449e0()*0.0185895);
}

double NNfunction_sb_sLdL::synapse0x2a51f10() {
   return (neuron0x2a44d20()*-0.0161033);
}

double NNfunction_sb_sLdL::synapse0x2a51f50() {
   return (neuron0x2a45060()*0.00431417);
}

double NNfunction_sb_sLdL::synapse0x2a51f90() {
   return (neuron0x2a453a0()*-0.00974965);
}

double NNfunction_sb_sLdL::synapse0x2a51fd0() {
   return (neuron0x2a456e0()*0.00960326);
}

double NNfunction_sb_sLdL::synapse0x2a52010() {
   return (neuron0x2a45a20()*0.00826035);
}

double NNfunction_sb_sLdL::synapse0x2a52050() {
   return (neuron0x2a45d60()*-0.00308293);
}

double NNfunction_sb_sLdL::synapse0x2a52090() {
   return (neuron0x2a460a0()*0.000198707);
}

double NNfunction_sb_sLdL::synapse0x2a520d0() {
   return (neuron0x2a463e0()*0.00878923);
}

double NNfunction_sb_sLdL::synapse0x2a52110() {
   return (neuron0x2a46720()*-0.75407);
}

double NNfunction_sb_sLdL::synapse0x2a52150() {
   return (neuron0x2a46a60()*0.364728);
}

double NNfunction_sb_sLdL::synapse0x2a52190() {
   return (neuron0x2a46da0()*-0.00763144);
}

double NNfunction_sb_sLdL::synapse0x2a521d0() {
   return (neuron0x2a470e0()*-0.0109056);
}

double NNfunction_sb_sLdL::synapse0x2a52210() {
   return (neuron0x2a47420()*0.00219118);
}

double NNfunction_sb_sLdL::synapse0x2a51ca0() {
   return (neuron0x2a47760()*0.00533571);
}

double NNfunction_sb_sLdL::synapse0x2a51ce0() {
   return (neuron0x2a47cc0()*-0.00973405);
}

double NNfunction_sb_sLdL::synapse0x2a52360() {
   return (neuron0x2a47ee0()*-0.000447305);
}

double NNfunction_sb_sLdL::synapse0x2a523a0() {
   return (neuron0x2a48220()*-0.00988477);
}

double NNfunction_sb_sLdL::synapse0x2a523e0() {
   return (neuron0x2a48560()*0.00710963);
}

double NNfunction_sb_sLdL::synapse0x2a52420() {
   return (neuron0x2a488a0()*0.0100531);
}

double NNfunction_sb_sLdL::synapse0x2a52460() {
   return (neuron0x2a48be0()*-0.00158001);
}

double NNfunction_sb_sLdL::synapse0x2a524a0() {
   return (neuron0x2a48f20()*-0.00476459);
}

double NNfunction_sb_sLdL::synapse0x2a52820() {
   return (neuron0x2a44360()*0.358292);
}

double NNfunction_sb_sLdL::synapse0x2a52860() {
   return (neuron0x2a446a0()*-0.505423);
}

double NNfunction_sb_sLdL::synapse0x2a528a0() {
   return (neuron0x2a449e0()*0.733889);
}

double NNfunction_sb_sLdL::synapse0x2a528e0() {
   return (neuron0x2a44d20()*-0.504859);
}

double NNfunction_sb_sLdL::synapse0x2a52920() {
   return (neuron0x2a45060()*-0.414922);
}

double NNfunction_sb_sLdL::synapse0x2a52960() {
   return (neuron0x2a453a0()*-0.72205);
}

double NNfunction_sb_sLdL::synapse0x2a529a0() {
   return (neuron0x2a456e0()*-0.717385);
}

double NNfunction_sb_sLdL::synapse0x2a529e0() {
   return (neuron0x2a45a20()*-0.336773);
}

double NNfunction_sb_sLdL::synapse0x2a52a20() {
   return (neuron0x2a45d60()*-0.838971);
}

double NNfunction_sb_sLdL::synapse0x2a52a60() {
   return (neuron0x2a460a0()*0.701325);
}

double NNfunction_sb_sLdL::synapse0x2a52aa0() {
   return (neuron0x2a463e0()*0.387348);
}

double NNfunction_sb_sLdL::synapse0x2a52ae0() {
   return (neuron0x2a46720()*-0.137844);
}

double NNfunction_sb_sLdL::synapse0x2a52b20() {
   return (neuron0x2a46a60()*0.103988);
}

double NNfunction_sb_sLdL::synapse0x2a52b60() {
   return (neuron0x2a46da0()*-0.141578);
}

double NNfunction_sb_sLdL::synapse0x2a52ba0() {
   return (neuron0x2a470e0()*-0.119558);
}

double NNfunction_sb_sLdL::synapse0x2a52be0() {
   return (neuron0x2a47420()*-0.0934747);
}

double NNfunction_sb_sLdL::synapse0x2a52670() {
   return (neuron0x2a47760()*-0.259726);
}

double NNfunction_sb_sLdL::synapse0x2a526b0() {
   return (neuron0x2a47cc0()*0.257629);
}

double NNfunction_sb_sLdL::synapse0x2a52d30() {
   return (neuron0x2a47ee0()*0.27685);
}

double NNfunction_sb_sLdL::synapse0x2a52d70() {
   return (neuron0x2a48220()*-0.0574013);
}

double NNfunction_sb_sLdL::synapse0x2a52db0() {
   return (neuron0x2a48560()*0.0416516);
}

double NNfunction_sb_sLdL::synapse0x2a52df0() {
   return (neuron0x2a488a0()*0.120523);
}

double NNfunction_sb_sLdL::synapse0x2a52e30() {
   return (neuron0x2a48be0()*-0.738932);
}

double NNfunction_sb_sLdL::synapse0x2a52e70() {
   return (neuron0x2a48f20()*0.222124);
}

double NNfunction_sb_sLdL::synapse0x2a531f0() {
   return (neuron0x2a44360()*0.0652151);
}

double NNfunction_sb_sLdL::synapse0x2a44580() {
   return (neuron0x2a446a0()*-0.00280221);
}

double NNfunction_sb_sLdL::synapse0x2a445c0() {
   return (neuron0x2a449e0()*-0.138291);
}

double NNfunction_sb_sLdL::synapse0x2a448c0() {
   return (neuron0x2a44d20()*-0.703457);
}

double NNfunction_sb_sLdL::synapse0x2a44900() {
   return (neuron0x2a45060()*-0.00699394);
}

double NNfunction_sb_sLdL::synapse0x2a44c00() {
   return (neuron0x2a453a0()*-0.0132986);
}

double NNfunction_sb_sLdL::synapse0x2a44c40() {
   return (neuron0x2a456e0()*-0.0195808);
}

double NNfunction_sb_sLdL::synapse0x2a44f40() {
   return (neuron0x2a45a20()*-0.0397111);
}

double NNfunction_sb_sLdL::synapse0x2a44f80() {
   return (neuron0x2a45d60()*0.00944262);
}

double NNfunction_sb_sLdL::synapse0x2a45280() {
   return (neuron0x2a460a0()*-0.0270642);
}

double NNfunction_sb_sLdL::synapse0x2a452c0() {
   return (neuron0x2a463e0()*-0.022668);
}

double NNfunction_sb_sLdL::synapse0x2a455c0() {
   return (neuron0x2a46720()*0.173162);
}

double NNfunction_sb_sLdL::synapse0x2a45600() {
   return (neuron0x2a46a60()*0.208144);
}

double NNfunction_sb_sLdL::synapse0x2a45900() {
   return (neuron0x2a46da0()*0.00364758);
}

double NNfunction_sb_sLdL::synapse0x2a45940() {
   return (neuron0x2a470e0()*-0.00646252);
}

double NNfunction_sb_sLdL::synapse0x2a45c40() {
   return (neuron0x2a47420()*-0.017828);
}

double NNfunction_sb_sLdL::synapse0x2a45c80() {
   return (neuron0x2a47760()*-0.0041835);
}

double NNfunction_sb_sLdL::synapse0x2a45f80() {
   return (neuron0x2a47cc0()*-0.00906864);
}

double NNfunction_sb_sLdL::synapse0x2a45fc0() {
   return (neuron0x2a47ee0()*0.0541544);
}

double NNfunction_sb_sLdL::synapse0x2a462c0() {
   return (neuron0x2a48220()*0.0265507);
}

double NNfunction_sb_sLdL::synapse0x2a46300() {
   return (neuron0x2a48560()*-0.00761325);
}

double NNfunction_sb_sLdL::synapse0x2a46600() {
   return (neuron0x2a488a0()*0.0120256);
}

double NNfunction_sb_sLdL::synapse0x2a46640() {
   return (neuron0x2a48be0()*-0.00645538);
}

double NNfunction_sb_sLdL::synapse0x2a46940() {
   return (neuron0x2a48f20()*0.0380074);
}

double NNfunction_sb_sLdL::synapse0x2a46980() {
   return (neuron0x2a44360()*0.357601);
}

double NNfunction_sb_sLdL::synapse0x2a47640() {
   return (neuron0x2a446a0()*-0.0477088);
}

double NNfunction_sb_sLdL::synapse0x2a47680() {
   return (neuron0x2a449e0()*-0.23139);
}

double NNfunction_sb_sLdL::synapse0x2a53040() {
   return (neuron0x2a44d20()*0.532956);
}

double NNfunction_sb_sLdL::synapse0x2a53080() {
   return (neuron0x2a45060()*0.00215844);
}

double NNfunction_sb_sLdL::synapse0x2a47980() {
   return (neuron0x2a453a0()*0.210886);
}

double NNfunction_sb_sLdL::synapse0x2a479c0() {
   return (neuron0x2a456e0()*-0.385318);
}

double NNfunction_sb_sLdL::synapse0x27ff490() {
   return (neuron0x2a45a20()*0.453487);
}

double NNfunction_sb_sLdL::synapse0x27ff4d0() {
   return (neuron0x2a45d60()*0.192883);
}

double NNfunction_sb_sLdL::synapse0x2a48100() {
   return (neuron0x2a460a0()*-0.470504);
}

double NNfunction_sb_sLdL::synapse0x2a48140() {
   return (neuron0x2a463e0()*0.725376);
}

double NNfunction_sb_sLdL::synapse0x2a48440() {
   return (neuron0x2a46720()*0.408475);
}

double NNfunction_sb_sLdL::synapse0x2a48480() {
   return (neuron0x2a46a60()*0.519219);
}

double NNfunction_sb_sLdL::synapse0x2a48780() {
   return (neuron0x2a46da0()*0.0273986);
}

double NNfunction_sb_sLdL::synapse0x2a487c0() {
   return (neuron0x2a470e0()*0.0468301);
}

double NNfunction_sb_sLdL::synapse0x2a48ac0() {
   return (neuron0x2a47420()*0.060873);
}

double NNfunction_sb_sLdL::synapse0x2a48b00() {
   return (neuron0x2a47760()*0.569691);
}

double NNfunction_sb_sLdL::synapse0x2a48e00() {
   return (neuron0x2a47cc0()*-0.492528);
}

double NNfunction_sb_sLdL::synapse0x2a48e40() {
   return (neuron0x2a47ee0()*-0.746679);
}

double NNfunction_sb_sLdL::synapse0x2a49140() {
   return (neuron0x2a48220()*0.719695);
}

double NNfunction_sb_sLdL::synapse0x2a49180() {
   return (neuron0x2a48560()*-0.580564);
}

double NNfunction_sb_sLdL::synapse0x2a46c80() {
   return (neuron0x2a488a0()*-0.523224);
}

double NNfunction_sb_sLdL::synapse0x2a46cc0() {
   return (neuron0x2a48be0()*0.279261);
}

double NNfunction_sb_sLdL::synapse0x2a54f60() {
   return (neuron0x2a48f20()*-0.0195466);
}

double NNfunction_sb_sLdL::synapse0x2a552e0() {
   return (neuron0x2a44360()*-0.0709434);
}

double NNfunction_sb_sLdL::synapse0x2a55320() {
   return (neuron0x2a446a0()*-0.00809921);
}

double NNfunction_sb_sLdL::synapse0x2a55360() {
   return (neuron0x2a449e0()*1.18462);
}

double NNfunction_sb_sLdL::synapse0x2a553a0() {
   return (neuron0x2a44d20()*0.136867);
}

double NNfunction_sb_sLdL::synapse0x2a553e0() {
   return (neuron0x2a45060()*-0.00889549);
}

double NNfunction_sb_sLdL::synapse0x2a55420() {
   return (neuron0x2a453a0()*-0.000782391);
}

double NNfunction_sb_sLdL::synapse0x2a55460() {
   return (neuron0x2a456e0()*0.0255894);
}

double NNfunction_sb_sLdL::synapse0x2a554a0() {
   return (neuron0x2a45a20()*0.0161736);
}

double NNfunction_sb_sLdL::synapse0x2a554e0() {
   return (neuron0x2a45d60()*-0.000735215);
}

double NNfunction_sb_sLdL::synapse0x2a55520() {
   return (neuron0x2a460a0()*-0.0013735);
}

double NNfunction_sb_sLdL::synapse0x2a55560() {
   return (neuron0x2a463e0()*-0.00566429);
}

double NNfunction_sb_sLdL::synapse0x2a555a0() {
   return (neuron0x2a46720()*-0.287021);
}

double NNfunction_sb_sLdL::synapse0x2a555e0() {
   return (neuron0x2a46a60()*-0.218833);
}

double NNfunction_sb_sLdL::synapse0x2a55620() {
   return (neuron0x2a46da0()*0.0504181);
}

double NNfunction_sb_sLdL::synapse0x2a55660() {
   return (neuron0x2a470e0()*0.0109205);
}

double NNfunction_sb_sLdL::synapse0x2a556a0() {
   return (neuron0x2a47420()*0.0252056);
}

double NNfunction_sb_sLdL::synapse0x2a55130() {
   return (neuron0x2a47760()*0.0640955);
}

double NNfunction_sb_sLdL::synapse0x2a55170() {
   return (neuron0x2a47cc0()*-0.0241802);
}

double NNfunction_sb_sLdL::synapse0x2a557f0() {
   return (neuron0x2a47ee0()*-0.0628136);
}

double NNfunction_sb_sLdL::synapse0x2a55830() {
   return (neuron0x2a48220()*-0.0159923);
}

double NNfunction_sb_sLdL::synapse0x2a55870() {
   return (neuron0x2a48560()*-0.0347202);
}

double NNfunction_sb_sLdL::synapse0x2a558b0() {
   return (neuron0x2a488a0()*-0.0161149);
}

double NNfunction_sb_sLdL::synapse0x2a558f0() {
   return (neuron0x2a48be0()*-0.0452044);
}

double NNfunction_sb_sLdL::synapse0x2a55930() {
   return (neuron0x2a48f20()*-0.0131792);
}

double NNfunction_sb_sLdL::synapse0x2a55cb0() {
   return (neuron0x2a44360()*-0.472337);
}

double NNfunction_sb_sLdL::synapse0x2a55cf0() {
   return (neuron0x2a446a0()*0.237007);
}

double NNfunction_sb_sLdL::synapse0x2a55d30() {
   return (neuron0x2a449e0()*-0.690412);
}

double NNfunction_sb_sLdL::synapse0x2a55d70() {
   return (neuron0x2a44d20()*0.202656);
}

double NNfunction_sb_sLdL::synapse0x2a55db0() {
   return (neuron0x2a45060()*0.0220399);
}

double NNfunction_sb_sLdL::synapse0x2a55df0() {
   return (neuron0x2a453a0()*0.550612);
}

double NNfunction_sb_sLdL::synapse0x2a55e30() {
   return (neuron0x2a456e0()*-0.344546);
}

double NNfunction_sb_sLdL::synapse0x2a55e70() {
   return (neuron0x2a45a20()*0.634055);
}

double NNfunction_sb_sLdL::synapse0x2a55eb0() {
   return (neuron0x2a45d60()*-0.166245);
}

double NNfunction_sb_sLdL::synapse0x2a55ef0() {
   return (neuron0x2a460a0()*-0.484019);
}

double NNfunction_sb_sLdL::synapse0x2a55f30() {
   return (neuron0x2a463e0()*-0.486745);
}

double NNfunction_sb_sLdL::synapse0x2a55f70() {
   return (neuron0x2a46720()*-0.31669);
}

double NNfunction_sb_sLdL::synapse0x2a55fb0() {
   return (neuron0x2a46a60()*0.250681);
}

double NNfunction_sb_sLdL::synapse0x2a55ff0() {
   return (neuron0x2a46da0()*-0.0911125);
}

double NNfunction_sb_sLdL::synapse0x2a56030() {
   return (neuron0x2a470e0()*-0.00589618);
}

double NNfunction_sb_sLdL::synapse0x2a56070() {
   return (neuron0x2a47420()*0.989343);
}

double NNfunction_sb_sLdL::synapse0x2a55b00() {
   return (neuron0x2a47760()*-0.488385);
}

double NNfunction_sb_sLdL::synapse0x2a55b40() {
   return (neuron0x2a47cc0()*-0.845679);
}

double NNfunction_sb_sLdL::synapse0x2a561c0() {
   return (neuron0x2a47ee0()*0.499238);
}

double NNfunction_sb_sLdL::synapse0x2a56200() {
   return (neuron0x2a48220()*-0.333367);
}

double NNfunction_sb_sLdL::synapse0x2a56240() {
   return (neuron0x2a48560()*0.896907);
}

double NNfunction_sb_sLdL::synapse0x2a56280() {
   return (neuron0x2a488a0()*-0.365594);
}

double NNfunction_sb_sLdL::synapse0x2a562c0() {
   return (neuron0x2a48be0()*0.639924);
}

double NNfunction_sb_sLdL::synapse0x2a56300() {
   return (neuron0x2a48f20()*0.654497);
}

double NNfunction_sb_sLdL::synapse0x2a56680() {
   return (neuron0x2a44360()*0.532063);
}

double NNfunction_sb_sLdL::synapse0x2a566c0() {
   return (neuron0x2a446a0()*0.0446286);
}

double NNfunction_sb_sLdL::synapse0x2a56700() {
   return (neuron0x2a449e0()*0.39498);
}

double NNfunction_sb_sLdL::synapse0x2a56740() {
   return (neuron0x2a44d20()*0.642966);
}

double NNfunction_sb_sLdL::synapse0x2a56780() {
   return (neuron0x2a45060()*0.143283);
}

double NNfunction_sb_sLdL::synapse0x2a567c0() {
   return (neuron0x2a453a0()*0.0620914);
}

double NNfunction_sb_sLdL::synapse0x2a56800() {
   return (neuron0x2a456e0()*0.113628);
}

double NNfunction_sb_sLdL::synapse0x2a56840() {
   return (neuron0x2a45a20()*0.199486);
}

double NNfunction_sb_sLdL::synapse0x2a56880() {
   return (neuron0x2a45d60()*-0.0960154);
}

double NNfunction_sb_sLdL::synapse0x2a568c0() {
   return (neuron0x2a460a0()*-0.0458566);
}

double NNfunction_sb_sLdL::synapse0x2a56900() {
   return (neuron0x2a463e0()*-0.036599);
}

double NNfunction_sb_sLdL::synapse0x2a56940() {
   return (neuron0x2a46720()*0.3548);
}

double NNfunction_sb_sLdL::synapse0x2a56980() {
   return (neuron0x2a46a60()*0.5076);
}

double NNfunction_sb_sLdL::synapse0x2a569c0() {
   return (neuron0x2a46da0()*-0.225444);
}

double NNfunction_sb_sLdL::synapse0x2a56a00() {
   return (neuron0x2a470e0()*-0.100594);
}

double NNfunction_sb_sLdL::synapse0x2a56a40() {
   return (neuron0x2a47420()*0.210667);
}

double NNfunction_sb_sLdL::synapse0x2a564d0() {
   return (neuron0x2a47760()*-0.173331);
}

double NNfunction_sb_sLdL::synapse0x2a56510() {
   return (neuron0x2a47cc0()*0.293443);
}

double NNfunction_sb_sLdL::synapse0x2a56b90() {
   return (neuron0x2a47ee0()*0.130691);
}

double NNfunction_sb_sLdL::synapse0x2a56bd0() {
   return (neuron0x2a48220()*0.110245);
}

double NNfunction_sb_sLdL::synapse0x2a56c10() {
   return (neuron0x2a48560()*0.0784262);
}

double NNfunction_sb_sLdL::synapse0x2a56c50() {
   return (neuron0x2a488a0()*0.0735142);
}

double NNfunction_sb_sLdL::synapse0x2a56c90() {
   return (neuron0x2a48be0()*0.109765);
}

double NNfunction_sb_sLdL::synapse0x2a56cd0() {
   return (neuron0x2a48f20()*0.0443658);
}

double NNfunction_sb_sLdL::synapse0x2a57050() {
   return (neuron0x2a44360()*-0.653174);
}

double NNfunction_sb_sLdL::synapse0x2a57090() {
   return (neuron0x2a446a0()*0.314652);
}

double NNfunction_sb_sLdL::synapse0x2a570d0() {
   return (neuron0x2a449e0()*0.582066);
}

double NNfunction_sb_sLdL::synapse0x2a57110() {
   return (neuron0x2a44d20()*-1.40198);
}

double NNfunction_sb_sLdL::synapse0x2a57150() {
   return (neuron0x2a45060()*0.0938748);
}

double NNfunction_sb_sLdL::synapse0x2a57190() {
   return (neuron0x2a453a0()*-0.084745);
}

double NNfunction_sb_sLdL::synapse0x2a571d0() {
   return (neuron0x2a456e0()*0.141103);
}

double NNfunction_sb_sLdL::synapse0x2a57210() {
   return (neuron0x2a45a20()*0.431834);
}

double NNfunction_sb_sLdL::synapse0x2a57250() {
   return (neuron0x2a45d60()*-0.142824);
}

double NNfunction_sb_sLdL::synapse0x2a57290() {
   return (neuron0x2a460a0()*0.158601);
}

double NNfunction_sb_sLdL::synapse0x2a572d0() {
   return (neuron0x2a463e0()*0.30224);
}

double NNfunction_sb_sLdL::synapse0x2a57310() {
   return (neuron0x2a46720()*1.08712);
}

double NNfunction_sb_sLdL::synapse0x2a57350() {
   return (neuron0x2a46a60()*0.262377);
}

double NNfunction_sb_sLdL::synapse0x2a57390() {
   return (neuron0x2a46da0()*0.175086);
}

double NNfunction_sb_sLdL::synapse0x2a573d0() {
   return (neuron0x2a470e0()*0.435311);
}

double NNfunction_sb_sLdL::synapse0x2a57410() {
   return (neuron0x2a47420()*0.246706);
}

double NNfunction_sb_sLdL::synapse0x2a56ea0() {
   return (neuron0x2a47760()*0.116144);
}

double NNfunction_sb_sLdL::synapse0x2a56ee0() {
   return (neuron0x2a47cc0()*-0.506444);
}

double NNfunction_sb_sLdL::synapse0x2a57560() {
   return (neuron0x2a47ee0()*-0.966838);
}

double NNfunction_sb_sLdL::synapse0x2a575a0() {
   return (neuron0x2a48220()*0.292703);
}

double NNfunction_sb_sLdL::synapse0x2a575e0() {
   return (neuron0x2a48560()*0.342071);
}

double NNfunction_sb_sLdL::synapse0x2a57620() {
   return (neuron0x2a488a0()*0.641414);
}

double NNfunction_sb_sLdL::synapse0x2a57660() {
   return (neuron0x2a48be0()*-0.122195);
}

double NNfunction_sb_sLdL::synapse0x2a576a0() {
   return (neuron0x2a48f20()*0.111163);
}

double NNfunction_sb_sLdL::synapse0x2a57a20() {
   return (neuron0x2a44360()*-0.0720388);
}

double NNfunction_sb_sLdL::synapse0x2a57a60() {
   return (neuron0x2a446a0()*-0.00538798);
}

double NNfunction_sb_sLdL::synapse0x2a57aa0() {
   return (neuron0x2a449e0()*-0.199347);
}

double NNfunction_sb_sLdL::synapse0x2a57ae0() {
   return (neuron0x2a44d20()*0.211461);
}

double NNfunction_sb_sLdL::synapse0x2a57b20() {
   return (neuron0x2a45060()*0.0387723);
}

double NNfunction_sb_sLdL::synapse0x2a57b60() {
   return (neuron0x2a453a0()*0.0536583);
}

double NNfunction_sb_sLdL::synapse0x2a57ba0() {
   return (neuron0x2a456e0()*0.0312047);
}

double NNfunction_sb_sLdL::synapse0x2a57be0() {
   return (neuron0x2a45a20()*-0.00183986);
}

double NNfunction_sb_sLdL::synapse0x2a57c20() {
   return (neuron0x2a45d60()*-0.00402093);
}

double NNfunction_sb_sLdL::synapse0x2a4fde0() {
   return (neuron0x2a460a0()*0.0730587);
}

double NNfunction_sb_sLdL::synapse0x2a4fe20() {
   return (neuron0x2a463e0()*0.0677717);
}

double NNfunction_sb_sLdL::synapse0x2a4fe60() {
   return (neuron0x2a46720()*0.79981);
}

double NNfunction_sb_sLdL::synapse0x2a4fea0() {
   return (neuron0x2a46a60()*1.51997);
}

double NNfunction_sb_sLdL::synapse0x2a4fee0() {
   return (neuron0x2a46da0()*-0.0159424);
}

double NNfunction_sb_sLdL::synapse0x2a4ff20() {
   return (neuron0x2a470e0()*-0.00172599);
}

double NNfunction_sb_sLdL::synapse0x2a4ff60() {
   return (neuron0x2a47420()*0.0122872);
}

double NNfunction_sb_sLdL::synapse0x2a57870() {
   return (neuron0x2a47760()*0.00216819);
}

double NNfunction_sb_sLdL::synapse0x2a578b0() {
   return (neuron0x2a47cc0()*-0.0144604);
}

double NNfunction_sb_sLdL::synapse0x2a500b0() {
   return (neuron0x2a47ee0()*0.00203078);
}

double NNfunction_sb_sLdL::synapse0x2a500f0() {
   return (neuron0x2a48220()*0.0424048);
}

double NNfunction_sb_sLdL::synapse0x2a50130() {
   return (neuron0x2a48560()*0.0806149);
}

double NNfunction_sb_sLdL::synapse0x2a50170() {
   return (neuron0x2a488a0()*0.0231927);
}

double NNfunction_sb_sLdL::synapse0x2a501b0() {
   return (neuron0x2a48be0()*0.0225161);
}

double NNfunction_sb_sLdL::synapse0x2a501f0() {
   return (neuron0x2a48f20()*-0.00341196);
}

double NNfunction_sb_sLdL::synapse0x2a50570() {
   return (neuron0x2a44360()*-0.0613893);
}

double NNfunction_sb_sLdL::synapse0x2a505b0() {
   return (neuron0x2a446a0()*-0.637556);
}

double NNfunction_sb_sLdL::synapse0x2a505f0() {
   return (neuron0x2a449e0()*-0.277139);
}

double NNfunction_sb_sLdL::synapse0x2a50630() {
   return (neuron0x2a44d20()*0.325202);
}

double NNfunction_sb_sLdL::synapse0x2a50670() {
   return (neuron0x2a45060()*-0.882752);
}

double NNfunction_sb_sLdL::synapse0x2a506b0() {
   return (neuron0x2a453a0()*-1.16611);
}

double NNfunction_sb_sLdL::synapse0x2a506f0() {
   return (neuron0x2a456e0()*-0.477755);
}

double NNfunction_sb_sLdL::synapse0x2a50730() {
   return (neuron0x2a45a20()*-0.237645);
}

double NNfunction_sb_sLdL::synapse0x2a50770() {
   return (neuron0x2a45d60()*-0.296536);
}

double NNfunction_sb_sLdL::synapse0x2a507b0() {
   return (neuron0x2a460a0()*0.0744719);
}

double NNfunction_sb_sLdL::synapse0x2a507f0() {
   return (neuron0x2a463e0()*0.319832);
}

double NNfunction_sb_sLdL::synapse0x2a50830() {
   return (neuron0x2a46720()*0.573992);
}

double NNfunction_sb_sLdL::synapse0x2a50870() {
   return (neuron0x2a46a60()*0.792006);
}

double NNfunction_sb_sLdL::synapse0x2a508b0() {
   return (neuron0x2a46da0()*0.70039);
}

double NNfunction_sb_sLdL::synapse0x2a508f0() {
   return (neuron0x2a470e0()*-0.0637355);
}

double NNfunction_sb_sLdL::synapse0x2a50930() {
   return (neuron0x2a47420()*-0.013347);
}

double NNfunction_sb_sLdL::synapse0x2a503c0() {
   return (neuron0x2a47760()*0.213053);
}

double NNfunction_sb_sLdL::synapse0x2a50400() {
   return (neuron0x2a47cc0()*0.642778);
}

double NNfunction_sb_sLdL::synapse0x2a50a80() {
   return (neuron0x2a47ee0()*0.612416);
}

double NNfunction_sb_sLdL::synapse0x2a50ac0() {
   return (neuron0x2a48220()*0.707043);
}

double NNfunction_sb_sLdL::synapse0x2a50b00() {
   return (neuron0x2a48560()*0.37867);
}

double NNfunction_sb_sLdL::synapse0x2a50b40() {
   return (neuron0x2a488a0()*-0.0550647);
}

double NNfunction_sb_sLdL::synapse0x2a50b80() {
   return (neuron0x2a48be0()*-0.584176);
}

double NNfunction_sb_sLdL::synapse0x2a50bc0() {
   return (neuron0x2a48f20()*0.00428819);
}

double NNfunction_sb_sLdL::synapse0x2a50d90() {
   return (neuron0x2a44360()*0.332223);
}

double NNfunction_sb_sLdL::synapse0x2a59e20() {
   return (neuron0x2a446a0()*0.608097);
}

double NNfunction_sb_sLdL::synapse0x2a59e60() {
   return (neuron0x2a449e0()*0.570781);
}

double NNfunction_sb_sLdL::synapse0x2a59ea0() {
   return (neuron0x2a44d20()*0.548983);
}

double NNfunction_sb_sLdL::synapse0x2a59ee0() {
   return (neuron0x2a45060()*0.466269);
}

double NNfunction_sb_sLdL::synapse0x2a59f20() {
   return (neuron0x2a453a0()*0.0751864);
}

double NNfunction_sb_sLdL::synapse0x2a59f60() {
   return (neuron0x2a456e0()*-0.188495);
}

double NNfunction_sb_sLdL::synapse0x2a59fa0() {
   return (neuron0x2a45a20()*-0.372194);
}

double NNfunction_sb_sLdL::synapse0x2a59fe0() {
   return (neuron0x2a45d60()*0.182052);
}

double NNfunction_sb_sLdL::synapse0x2a5a020() {
   return (neuron0x2a460a0()*-0.458217);
}

double NNfunction_sb_sLdL::synapse0x2a5a060() {
   return (neuron0x2a463e0()*-0.481132);
}

double NNfunction_sb_sLdL::synapse0x2a5a0a0() {
   return (neuron0x2a46720()*0.243562);
}

double NNfunction_sb_sLdL::synapse0x2a5a0e0() {
   return (neuron0x2a46a60()*0.299018);
}

double NNfunction_sb_sLdL::synapse0x2a5a120() {
   return (neuron0x2a46da0()*-0.15502);
}

double NNfunction_sb_sLdL::synapse0x2a5a160() {
   return (neuron0x2a470e0()*-0.421775);
}

double NNfunction_sb_sLdL::synapse0x2a5a1a0() {
   return (neuron0x2a47420()*-0.798524);
}

double NNfunction_sb_sLdL::synapse0x2a59c70() {
   return (neuron0x2a47760()*-0.256589);
}

double NNfunction_sb_sLdL::synapse0x2a59cb0() {
   return (neuron0x2a47cc0()*0.138186);
}

double NNfunction_sb_sLdL::synapse0x2a5a2f0() {
   return (neuron0x2a47ee0()*0.248263);
}

double NNfunction_sb_sLdL::synapse0x2a5a330() {
   return (neuron0x2a48220()*1.10693);
}

double NNfunction_sb_sLdL::synapse0x2a5a370() {
   return (neuron0x2a48560()*-0.271532);
}

double NNfunction_sb_sLdL::synapse0x2a5a3b0() {
   return (neuron0x2a488a0()*-0.932762);
}

double NNfunction_sb_sLdL::synapse0x2a5a3f0() {
   return (neuron0x2a48be0()*-0.370335);
}

double NNfunction_sb_sLdL::synapse0x2a5a430() {
   return (neuron0x2a48f20()*0.0417892);
}

double NNfunction_sb_sLdL::synapse0x2a5a7b0() {
   return (neuron0x2a44360()*-0.185637);
}

double NNfunction_sb_sLdL::synapse0x2a5a7f0() {
   return (neuron0x2a446a0()*-0.00100559);
}

double NNfunction_sb_sLdL::synapse0x2a5a830() {
   return (neuron0x2a449e0()*0.203269);
}

double NNfunction_sb_sLdL::synapse0x2a5a870() {
   return (neuron0x2a44d20()*1.78317);
}

double NNfunction_sb_sLdL::synapse0x2a5a8b0() {
   return (neuron0x2a45060()*-0.049369);
}

double NNfunction_sb_sLdL::synapse0x2a5a8f0() {
   return (neuron0x2a453a0()*0.0211433);
}

double NNfunction_sb_sLdL::synapse0x2a5a930() {
   return (neuron0x2a456e0()*0.097629);
}

double NNfunction_sb_sLdL::synapse0x2a5a970() {
   return (neuron0x2a45a20()*0.104191);
}

double NNfunction_sb_sLdL::synapse0x2a5a9b0() {
   return (neuron0x2a45d60()*0.00364343);
}

double NNfunction_sb_sLdL::synapse0x2a5a9f0() {
   return (neuron0x2a460a0()*0.0349739);
}

double NNfunction_sb_sLdL::synapse0x2a5aa30() {
   return (neuron0x2a463e0()*0.00842007);
}

double NNfunction_sb_sLdL::synapse0x2a5aa70() {
   return (neuron0x2a46720()*-0.502695);
}

double NNfunction_sb_sLdL::synapse0x2a5aab0() {
   return (neuron0x2a46a60()*-0.555605);
}

double NNfunction_sb_sLdL::synapse0x2a5aaf0() {
   return (neuron0x2a46da0()*-0.0225339);
}

double NNfunction_sb_sLdL::synapse0x2a5ab30() {
   return (neuron0x2a470e0()*-0.0340877);
}

double NNfunction_sb_sLdL::synapse0x2a5ab70() {
   return (neuron0x2a47420()*-0.0191211);
}

double NNfunction_sb_sLdL::synapse0x2a5a600() {
   return (neuron0x2a47760()*0.0560943);
}

double NNfunction_sb_sLdL::synapse0x2a5a640() {
   return (neuron0x2a47cc0()*-0.0435196);
}

double NNfunction_sb_sLdL::synapse0x2a5acc0() {
   return (neuron0x2a47ee0()*-0.0578046);
}

double NNfunction_sb_sLdL::synapse0x2a5ad00() {
   return (neuron0x2a48220()*-0.0250419);
}

double NNfunction_sb_sLdL::synapse0x2a5ad40() {
   return (neuron0x2a48560()*0.0017628);
}

double NNfunction_sb_sLdL::synapse0x2a5ad80() {
   return (neuron0x2a488a0()*0.00181374);
}

double NNfunction_sb_sLdL::synapse0x2a5adc0() {
   return (neuron0x2a48be0()*-0.0272587);
}

double NNfunction_sb_sLdL::synapse0x2a5ae00() {
   return (neuron0x2a48f20()*0.01548);
}

double NNfunction_sb_sLdL::synapse0x2a5b180() {
   return (neuron0x2a44360()*-0.204597);
}

double NNfunction_sb_sLdL::synapse0x2a5b1c0() {
   return (neuron0x2a446a0()*-0.46982);
}

double NNfunction_sb_sLdL::synapse0x2a5b200() {
   return (neuron0x2a449e0()*-0.70192);
}

double NNfunction_sb_sLdL::synapse0x2a5b240() {
   return (neuron0x2a44d20()*0.583198);
}

double NNfunction_sb_sLdL::synapse0x2a5b280() {
   return (neuron0x2a45060()*-0.249674);
}

double NNfunction_sb_sLdL::synapse0x2a5b2c0() {
   return (neuron0x2a453a0()*-0.0551457);
}

double NNfunction_sb_sLdL::synapse0x2a5b300() {
   return (neuron0x2a456e0()*-0.0238496);
}

double NNfunction_sb_sLdL::synapse0x2a5b340() {
   return (neuron0x2a45a20()*0.352528);
}

double NNfunction_sb_sLdL::synapse0x2a5b380() {
   return (neuron0x2a45d60()*-0.266564);
}

double NNfunction_sb_sLdL::synapse0x2a5b3c0() {
   return (neuron0x2a460a0()*0.0596659);
}

double NNfunction_sb_sLdL::synapse0x2a5b400() {
   return (neuron0x2a463e0()*0.115648);
}

double NNfunction_sb_sLdL::synapse0x2a5b440() {
   return (neuron0x2a46720()*0.726341);
}

double NNfunction_sb_sLdL::synapse0x2a5b480() {
   return (neuron0x2a46a60()*0.291489);
}

double NNfunction_sb_sLdL::synapse0x2a5b4c0() {
   return (neuron0x2a46da0()*0.634649);
}

double NNfunction_sb_sLdL::synapse0x2a5b500() {
   return (neuron0x2a470e0()*-0.0621689);
}

double NNfunction_sb_sLdL::synapse0x2a5b540() {
   return (neuron0x2a47420()*-0.0641096);
}

double NNfunction_sb_sLdL::synapse0x2a5afd0() {
   return (neuron0x2a47760()*1.26057);
}

double NNfunction_sb_sLdL::synapse0x2a5b010() {
   return (neuron0x2a47cc0()*-0.304183);
}

double NNfunction_sb_sLdL::synapse0x2a5b690() {
   return (neuron0x2a47ee0()*0.00496334);
}

double NNfunction_sb_sLdL::synapse0x2a5b6d0() {
   return (neuron0x2a48220()*1.02319);
}

double NNfunction_sb_sLdL::synapse0x2a5b710() {
   return (neuron0x2a48560()*0.588767);
}

double NNfunction_sb_sLdL::synapse0x2a5b750() {
   return (neuron0x2a488a0()*0.132684);
}

double NNfunction_sb_sLdL::synapse0x2a5b790() {
   return (neuron0x2a48be0()*-0.584727);
}

double NNfunction_sb_sLdL::synapse0x2a5b7d0() {
   return (neuron0x2a48f20()*-0.134045);
}

double NNfunction_sb_sLdL::synapse0x2a5bb50() {
   return (neuron0x2a44360()*-0.360841);
}

double NNfunction_sb_sLdL::synapse0x2a5bb90() {
   return (neuron0x2a446a0()*1.11391);
}

double NNfunction_sb_sLdL::synapse0x2a5bbd0() {
   return (neuron0x2a449e0()*-0.617015);
}

double NNfunction_sb_sLdL::synapse0x2a5bc10() {
   return (neuron0x2a44d20()*-0.703398);
}

double NNfunction_sb_sLdL::synapse0x2a5bc50() {
   return (neuron0x2a45060()*0.0515132);
}

double NNfunction_sb_sLdL::synapse0x2a5bc90() {
   return (neuron0x2a453a0()*-0.207157);
}

double NNfunction_sb_sLdL::synapse0x2a5bcd0() {
   return (neuron0x2a456e0()*0.102865);
}

double NNfunction_sb_sLdL::synapse0x2a5bd10() {
   return (neuron0x2a45a20()*-0.0681165);
}

double NNfunction_sb_sLdL::synapse0x2a5bd50() {
   return (neuron0x2a45d60()*-0.357841);
}

double NNfunction_sb_sLdL::synapse0x2a5bd90() {
   return (neuron0x2a460a0()*-0.0344585);
}

double NNfunction_sb_sLdL::synapse0x2a5bdd0() {
   return (neuron0x2a463e0()*-0.425601);
}

double NNfunction_sb_sLdL::synapse0x2a5be10() {
   return (neuron0x2a46720()*0.0906271);
}

double NNfunction_sb_sLdL::synapse0x2a5be50() {
   return (neuron0x2a46a60()*0.200868);
}

double NNfunction_sb_sLdL::synapse0x2a5be90() {
   return (neuron0x2a46da0()*0.641321);
}

double NNfunction_sb_sLdL::synapse0x2a5bed0() {
   return (neuron0x2a470e0()*0.284672);
}

double NNfunction_sb_sLdL::synapse0x2a5bf10() {
   return (neuron0x2a47420()*1.1572);
}

double NNfunction_sb_sLdL::synapse0x2a5b9a0() {
   return (neuron0x2a47760()*-0.322771);
}

double NNfunction_sb_sLdL::synapse0x2a5b9e0() {
   return (neuron0x2a47cc0()*0.466586);
}

double NNfunction_sb_sLdL::synapse0x2a5c060() {
   return (neuron0x2a47ee0()*0.106079);
}

double NNfunction_sb_sLdL::synapse0x2a5c0a0() {
   return (neuron0x2a48220()*0.15023);
}

double NNfunction_sb_sLdL::synapse0x2a5c0e0() {
   return (neuron0x2a48560()*-0.0179078);
}

double NNfunction_sb_sLdL::synapse0x2a5c120() {
   return (neuron0x2a488a0()*0.47687);
}

double NNfunction_sb_sLdL::synapse0x2a5c160() {
   return (neuron0x2a48be0()*-0.332385);
}

double NNfunction_sb_sLdL::synapse0x2a5c1a0() {
   return (neuron0x2a48f20()*-0.0635442);
}

double NNfunction_sb_sLdL::synapse0x2a5c520() {
   return (neuron0x2a44360()*0.00478013);
}

double NNfunction_sb_sLdL::synapse0x2a5c560() {
   return (neuron0x2a446a0()*0.00299806);
}

double NNfunction_sb_sLdL::synapse0x2a5c5a0() {
   return (neuron0x2a449e0()*0.0136857);
}

double NNfunction_sb_sLdL::synapse0x2a5c5e0() {
   return (neuron0x2a44d20()*-5.39044);
}

double NNfunction_sb_sLdL::synapse0x2a5c620() {
   return (neuron0x2a45060()*0.00538682);
}

double NNfunction_sb_sLdL::synapse0x2a5c660() {
   return (neuron0x2a453a0()*-0.0111787);
}

double NNfunction_sb_sLdL::synapse0x2a5c6a0() {
   return (neuron0x2a456e0()*-0.0122982);
}

double NNfunction_sb_sLdL::synapse0x2a5c6e0() {
   return (neuron0x2a45a20()*-0.00751674);
}

double NNfunction_sb_sLdL::synapse0x2a5c720() {
   return (neuron0x2a45d60()*-0.00515622);
}

double NNfunction_sb_sLdL::synapse0x2a5c760() {
   return (neuron0x2a460a0()*-0.0071482);
}

double NNfunction_sb_sLdL::synapse0x2a5c7a0() {
   return (neuron0x2a463e0()*0.0097713);
}

double NNfunction_sb_sLdL::synapse0x2a5c7e0() {
   return (neuron0x2a46720()*-0.020401);
}

double NNfunction_sb_sLdL::synapse0x2a5c820() {
   return (neuron0x2a46a60()*-0.0387788);
}

double NNfunction_sb_sLdL::synapse0x2a5c860() {
   return (neuron0x2a46da0()*0.0012779);
}

double NNfunction_sb_sLdL::synapse0x2a5c8a0() {
   return (neuron0x2a470e0()*-0.00289085);
}

double NNfunction_sb_sLdL::synapse0x2a5c8e0() {
   return (neuron0x2a47420()*-0.00941421);
}

double NNfunction_sb_sLdL::synapse0x2a5c370() {
   return (neuron0x2a47760()*-0.00945395);
}

double NNfunction_sb_sLdL::synapse0x2a5c3b0() {
   return (neuron0x2a47cc0()*0.0129611);
}

double NNfunction_sb_sLdL::synapse0x2a5ca30() {
   return (neuron0x2a47ee0()*-0.00378994);
}

double NNfunction_sb_sLdL::synapse0x2a5ca70() {
   return (neuron0x2a48220()*-0.0055296);
}

double NNfunction_sb_sLdL::synapse0x2a5cab0() {
   return (neuron0x2a48560()*-0.00116486);
}

double NNfunction_sb_sLdL::synapse0x2a5caf0() {
   return (neuron0x2a488a0()*-0.00341038);
}

double NNfunction_sb_sLdL::synapse0x2a5cb30() {
   return (neuron0x2a48be0()*0.00656271);
}

double NNfunction_sb_sLdL::synapse0x2a5cb70() {
   return (neuron0x2a48f20()*-0.0157598);
}

double NNfunction_sb_sLdL::synapse0x2a5cef0() {
   return (neuron0x2a44360()*0.016567);
}

double NNfunction_sb_sLdL::synapse0x2a5cf30() {
   return (neuron0x2a446a0()*0.0244144);
}

double NNfunction_sb_sLdL::synapse0x2a5cf70() {
   return (neuron0x2a449e0()*-0.429684);
}

double NNfunction_sb_sLdL::synapse0x2a5cfb0() {
   return (neuron0x2a44d20()*0.668002);
}

double NNfunction_sb_sLdL::synapse0x2a5cff0() {
   return (neuron0x2a45060()*-0.00562783);
}

double NNfunction_sb_sLdL::synapse0x2a5d030() {
   return (neuron0x2a453a0()*-0.0704811);
}

double NNfunction_sb_sLdL::synapse0x2a5d070() {
   return (neuron0x2a456e0()*-0.00230427);
}

double NNfunction_sb_sLdL::synapse0x2a5d0b0() {
   return (neuron0x2a45a20()*0.0446596);
}

double NNfunction_sb_sLdL::synapse0x2a5d0f0() {
   return (neuron0x2a45d60()*-0.0623959);
}

double NNfunction_sb_sLdL::synapse0x2a5d130() {
   return (neuron0x2a460a0()*-0.0503918);
}

double NNfunction_sb_sLdL::synapse0x2a5d170() {
   return (neuron0x2a463e0()*-0.0530017);
}

double NNfunction_sb_sLdL::synapse0x2a5d1b0() {
   return (neuron0x2a46720()*-0.218659);
}

double NNfunction_sb_sLdL::synapse0x2a5d1f0() {
   return (neuron0x2a46a60()*-0.30294);
}

double NNfunction_sb_sLdL::synapse0x2a5d230() {
   return (neuron0x2a46da0()*-0.0500106);
}

double NNfunction_sb_sLdL::synapse0x2a5d270() {
   return (neuron0x2a470e0()*-0.0729708);
}

double NNfunction_sb_sLdL::synapse0x2a5d2b0() {
   return (neuron0x2a47420()*0.0155439);
}

double NNfunction_sb_sLdL::synapse0x2a5cd40() {
   return (neuron0x2a47760()*0.018784);
}

double NNfunction_sb_sLdL::synapse0x2a5cd80() {
   return (neuron0x2a47cc0()*0.0818783);
}

double NNfunction_sb_sLdL::synapse0x2a5d400() {
   return (neuron0x2a47ee0()*-0.000117473);
}

double NNfunction_sb_sLdL::synapse0x2a5d440() {
   return (neuron0x2a48220()*0.0232935);
}

double NNfunction_sb_sLdL::synapse0x2a5d480() {
   return (neuron0x2a48560()*0.0320058);
}

double NNfunction_sb_sLdL::synapse0x2a5d4c0() {
   return (neuron0x2a488a0()*0.0564967);
}

double NNfunction_sb_sLdL::synapse0x2a5d500() {
   return (neuron0x2a48be0()*0.018558);
}

double NNfunction_sb_sLdL::synapse0x2a5d540() {
   return (neuron0x2a48f20()*0.056158);
}

double NNfunction_sb_sLdL::synapse0x2a5d8c0() {
   return (neuron0x2a44360()*0.319144);
}

double NNfunction_sb_sLdL::synapse0x2a5d900() {
   return (neuron0x2a446a0()*-0.991369);
}

double NNfunction_sb_sLdL::synapse0x2a5d940() {
   return (neuron0x2a449e0()*-0.17793);
}

double NNfunction_sb_sLdL::synapse0x2a5d980() {
   return (neuron0x2a44d20()*-0.764671);
}

double NNfunction_sb_sLdL::synapse0x2a5d9c0() {
   return (neuron0x2a45060()*-0.362256);
}

double NNfunction_sb_sLdL::synapse0x2a5da00() {
   return (neuron0x2a453a0()*-0.231869);
}

double NNfunction_sb_sLdL::synapse0x2a5da40() {
   return (neuron0x2a456e0()*0.288448);
}

double NNfunction_sb_sLdL::synapse0x2a5da80() {
   return (neuron0x2a45a20()*0.413662);
}

double NNfunction_sb_sLdL::synapse0x2a5dac0() {
   return (neuron0x2a45d60()*0.126024);
}

double NNfunction_sb_sLdL::synapse0x2a5db00() {
   return (neuron0x2a460a0()*0.296037);
}

double NNfunction_sb_sLdL::synapse0x2a5db40() {
   return (neuron0x2a463e0()*0.608382);
}

double NNfunction_sb_sLdL::synapse0x2a5db80() {
   return (neuron0x2a46720()*-0.134707);
}

double NNfunction_sb_sLdL::synapse0x2a5dbc0() {
   return (neuron0x2a46a60()*-0.36685);
}

double NNfunction_sb_sLdL::synapse0x2a5dc00() {
   return (neuron0x2a46da0()*-0.0786607);
}

double NNfunction_sb_sLdL::synapse0x2a5dc40() {
   return (neuron0x2a470e0()*-0.691986);
}

double NNfunction_sb_sLdL::synapse0x2a5dc80() {
   return (neuron0x2a47420()*-0.80458);
}

double NNfunction_sb_sLdL::synapse0x2a5d710() {
   return (neuron0x2a47760()*-0.0133552);
}

double NNfunction_sb_sLdL::synapse0x2a5d750() {
   return (neuron0x2a47cc0()*-0.56429);
}

double NNfunction_sb_sLdL::synapse0x2a5ddd0() {
   return (neuron0x2a47ee0()*-0.0555739);
}

double NNfunction_sb_sLdL::synapse0x2a5de10() {
   return (neuron0x2a48220()*-0.0659584);
}

double NNfunction_sb_sLdL::synapse0x2a5de50() {
   return (neuron0x2a48560()*0.2596);
}

double NNfunction_sb_sLdL::synapse0x2a5de90() {
   return (neuron0x2a488a0()*-0.0732377);
}

double NNfunction_sb_sLdL::synapse0x2a5ded0() {
   return (neuron0x2a48be0()*0.53716);
}

double NNfunction_sb_sLdL::synapse0x2a5df10() {
   return (neuron0x2a48f20()*0.161949);
}

double NNfunction_sb_sLdL::synapse0x2a5e290() {
   return (neuron0x2a44360()*0.0361155);
}

double NNfunction_sb_sLdL::synapse0x2a5e2d0() {
   return (neuron0x2a446a0()*-0.166217);
}

double NNfunction_sb_sLdL::synapse0x2a5e310() {
   return (neuron0x2a449e0()*0.207096);
}

double NNfunction_sb_sLdL::synapse0x2a5e350() {
   return (neuron0x2a44d20()*0.459864);
}

double NNfunction_sb_sLdL::synapse0x2a5e390() {
   return (neuron0x2a45060()*0.466569);
}

double NNfunction_sb_sLdL::synapse0x2a5e3d0() {
   return (neuron0x2a453a0()*0.473165);
}

double NNfunction_sb_sLdL::synapse0x2a5e410() {
   return (neuron0x2a456e0()*0.123166);
}

double NNfunction_sb_sLdL::synapse0x2a5e450() {
   return (neuron0x2a45a20()*0.233081);
}

double NNfunction_sb_sLdL::synapse0x2a5e490() {
   return (neuron0x2a45d60()*0.278642);
}

double NNfunction_sb_sLdL::synapse0x2a5e4d0() {
   return (neuron0x2a460a0()*-0.371186);
}

double NNfunction_sb_sLdL::synapse0x2a5e510() {
   return (neuron0x2a463e0()*-0.301804);
}

double NNfunction_sb_sLdL::synapse0x2a5e550() {
   return (neuron0x2a46720()*0.359298);
}

double NNfunction_sb_sLdL::synapse0x2a5e590() {
   return (neuron0x2a46a60()*0.874483);
}

double NNfunction_sb_sLdL::synapse0x2a5e5d0() {
   return (neuron0x2a46da0()*0.306966);
}

double NNfunction_sb_sLdL::synapse0x2a5e610() {
   return (neuron0x2a470e0()*-0.758281);
}

double NNfunction_sb_sLdL::synapse0x2a5e650() {
   return (neuron0x2a47420()*1.52177);
}

double NNfunction_sb_sLdL::synapse0x2a5e0e0() {
   return (neuron0x2a47760()*-0.397349);
}

double NNfunction_sb_sLdL::synapse0x2a5e120() {
   return (neuron0x2a47cc0()*-0.14597);
}

double NNfunction_sb_sLdL::synapse0x2a5e7a0() {
   return (neuron0x2a47ee0()*0.953165);
}

double NNfunction_sb_sLdL::synapse0x2a5e7e0() {
   return (neuron0x2a48220()*0.138919);
}

double NNfunction_sb_sLdL::synapse0x2a5e820() {
   return (neuron0x2a48560()*0.213479);
}

double NNfunction_sb_sLdL::synapse0x2a5e860() {
   return (neuron0x2a488a0()*-0.166125);
}

double NNfunction_sb_sLdL::synapse0x2a5e8a0() {
   return (neuron0x2a48be0()*-0.000587307);
}

double NNfunction_sb_sLdL::synapse0x2a5e8e0() {
   return (neuron0x2a48f20()*0.005948);
}

double NNfunction_sb_sLdL::synapse0x2a5ec60() {
   return (neuron0x2a44360()*0.214039);
}

double NNfunction_sb_sLdL::synapse0x2a53230() {
   return (neuron0x2a446a0()*0.0850237);
}

double NNfunction_sb_sLdL::synapse0x2a53270() {
   return (neuron0x2a449e0()*-0.0877742);
}

double NNfunction_sb_sLdL::synapse0x2a532b0() {
   return (neuron0x2a44d20()*1.74729);
}

double NNfunction_sb_sLdL::synapse0x2a53500() {
   return (neuron0x2a45060()*-0.0215817);
}

double NNfunction_sb_sLdL::synapse0x2a53540() {
   return (neuron0x2a453a0()*0.079327);
}

double NNfunction_sb_sLdL::synapse0x2a53580() {
   return (neuron0x2a456e0()*-0.236681);
}

double NNfunction_sb_sLdL::synapse0x2a537d0() {
   return (neuron0x2a45a20()*-0.231514);
}

double NNfunction_sb_sLdL::synapse0x2a53810() {
   return (neuron0x2a45d60()*-0.0376005);
}

double NNfunction_sb_sLdL::synapse0x2a53a60() {
   return (neuron0x2a460a0()*-0.224236);
}

double NNfunction_sb_sLdL::synapse0x2a53aa0() {
   return (neuron0x2a463e0()*-0.25868);
}

double NNfunction_sb_sLdL::synapse0x2a53ae0() {
   return (neuron0x2a46720()*0.613803);
}

double NNfunction_sb_sLdL::synapse0x2a53d30() {
   return (neuron0x2a46a60()*0.612523);
}

double NNfunction_sb_sLdL::synapse0x2a53d70() {
   return (neuron0x2a46da0()*-0.0406267);
}

double NNfunction_sb_sLdL::synapse0x2a53fc0() {
   return (neuron0x2a470e0()*-0.10717);
}

double NNfunction_sb_sLdL::synapse0x2a54000() {
   return (neuron0x2a47420()*-0.0412245);
}

double NNfunction_sb_sLdL::synapse0x2a5eab0() {
   return (neuron0x2a47760()*-0.044058);
}

double NNfunction_sb_sLdL::synapse0x2a5eaf0() {
   return (neuron0x2a47cc0()*-0.523714);
}

double NNfunction_sb_sLdL::synapse0x2a54150() {
   return (neuron0x2a47ee0()*-0.0874636);
}

double NNfunction_sb_sLdL::synapse0x2a54660() {
   return (neuron0x2a48220()*0.121552);
}

double NNfunction_sb_sLdL::synapse0x2a546a0() {
   return (neuron0x2a48560()*-0.0643863);
}

double NNfunction_sb_sLdL::synapse0x2a546e0() {
   return (neuron0x2a488a0()*-0.097479);
}

double NNfunction_sb_sLdL::synapse0x2a54930() {
   return (neuron0x2a48be0()*-0.0860196);
}

double NNfunction_sb_sLdL::synapse0x2a54970() {
   return (neuron0x2a48f20()*0.24541);
}

double NNfunction_sb_sLdL::synapse0x2a54220() {
   return (neuron0x2a44360()*-0.705298);
}

double NNfunction_sb_sLdL::synapse0x2a54260() {
   return (neuron0x2a446a0()*1.36698);
}

double NNfunction_sb_sLdL::synapse0x2a542a0() {
   return (neuron0x2a449e0()*0.53579);
}

double NNfunction_sb_sLdL::synapse0x2a542e0() {
   return (neuron0x2a44d20()*-0.449726);
}

double NNfunction_sb_sLdL::synapse0x2a54c60() {
   return (neuron0x2a45060()*-0.666486);
}

double NNfunction_sb_sLdL::synapse0x2a60fb0() {
   return (neuron0x2a453a0()*0.350166);
}

double NNfunction_sb_sLdL::synapse0x2a60ff0() {
   return (neuron0x2a456e0()*0.427853);
}

double NNfunction_sb_sLdL::synapse0x2a61030() {
   return (neuron0x2a45a20()*0.460341);
}

double NNfunction_sb_sLdL::synapse0x2a61070() {
   return (neuron0x2a45d60()*0.326781);
}

double NNfunction_sb_sLdL::synapse0x2a610b0() {
   return (neuron0x2a460a0()*0.154166);
}

double NNfunction_sb_sLdL::synapse0x2a610f0() {
   return (neuron0x2a463e0()*0.290852);
}

double NNfunction_sb_sLdL::synapse0x2a61130() {
   return (neuron0x2a46720()*-0.454753);
}

double NNfunction_sb_sLdL::synapse0x2a61170() {
   return (neuron0x2a46a60()*0.0615256);
}

double NNfunction_sb_sLdL::synapse0x2a611b0() {
   return (neuron0x2a46da0()*-0.051657);
}

double NNfunction_sb_sLdL::synapse0x2a611f0() {
   return (neuron0x2a470e0()*0.226544);
}

double NNfunction_sb_sLdL::synapse0x2a61230() {
   return (neuron0x2a47420()*-0.120777);
}

double NNfunction_sb_sLdL::synapse0x2a54b40() {
   return (neuron0x2a47760()*-0.0356485);
}

double NNfunction_sb_sLdL::synapse0x2a54b80() {
   return (neuron0x2a47cc0()*0.0142633);
}

double NNfunction_sb_sLdL::synapse0x2a61380() {
   return (neuron0x2a47ee0()*-0.351911);
}

double NNfunction_sb_sLdL::synapse0x2a613c0() {
   return (neuron0x2a48220()*0.336081);
}

double NNfunction_sb_sLdL::synapse0x2a61400() {
   return (neuron0x2a48560()*0.756467);
}

double NNfunction_sb_sLdL::synapse0x2a61440() {
   return (neuron0x2a488a0()*0.14096);
}

double NNfunction_sb_sLdL::synapse0x2a61480() {
   return (neuron0x2a48be0()*-0.0881629);
}

double NNfunction_sb_sLdL::synapse0x2a614c0() {
   return (neuron0x2a48f20()*0.398194);
}

double NNfunction_sb_sLdL::synapse0x2a61840() {
   return (neuron0x2a44360()*0.263571);
}

double NNfunction_sb_sLdL::synapse0x2a61880() {
   return (neuron0x2a446a0()*0.288369);
}

double NNfunction_sb_sLdL::synapse0x2a618c0() {
   return (neuron0x2a449e0()*-0.562005);
}

double NNfunction_sb_sLdL::synapse0x2a61900() {
   return (neuron0x2a44d20()*0.484246);
}

double NNfunction_sb_sLdL::synapse0x2a61940() {
   return (neuron0x2a45060()*0.373229);
}

double NNfunction_sb_sLdL::synapse0x2a61980() {
   return (neuron0x2a453a0()*0.29306);
}

double NNfunction_sb_sLdL::synapse0x2a619c0() {
   return (neuron0x2a456e0()*-0.200588);
}

double NNfunction_sb_sLdL::synapse0x2a61a00() {
   return (neuron0x2a45a20()*0.710356);
}

double NNfunction_sb_sLdL::synapse0x2a61a40() {
   return (neuron0x2a45d60()*0.577449);
}

double NNfunction_sb_sLdL::synapse0x2a61a80() {
   return (neuron0x2a460a0()*-0.00577286);
}

double NNfunction_sb_sLdL::synapse0x2a61ac0() {
   return (neuron0x2a463e0()*0.596992);
}

double NNfunction_sb_sLdL::synapse0x2a61b00() {
   return (neuron0x2a46720()*-0.147531);
}

double NNfunction_sb_sLdL::synapse0x2a61b40() {
   return (neuron0x2a46a60()*0.81187);
}

double NNfunction_sb_sLdL::synapse0x2a61b80() {
   return (neuron0x2a46da0()*0.0835867);
}

double NNfunction_sb_sLdL::synapse0x2a61bc0() {
   return (neuron0x2a470e0()*-0.630992);
}

double NNfunction_sb_sLdL::synapse0x2a61c00() {
   return (neuron0x2a47420()*-0.0430746);
}

double NNfunction_sb_sLdL::synapse0x2a61690() {
   return (neuron0x2a47760()*-0.0724298);
}

double NNfunction_sb_sLdL::synapse0x2a616d0() {
   return (neuron0x2a47cc0()*0.477062);
}

double NNfunction_sb_sLdL::synapse0x2a61d50() {
   return (neuron0x2a47ee0()*0.473487);
}

double NNfunction_sb_sLdL::synapse0x2a61d90() {
   return (neuron0x2a48220()*-0.243543);
}

double NNfunction_sb_sLdL::synapse0x2a61dd0() {
   return (neuron0x2a48560()*0.22704);
}

double NNfunction_sb_sLdL::synapse0x2a61e10() {
   return (neuron0x2a488a0()*-0.630734);
}

double NNfunction_sb_sLdL::synapse0x2a61e50() {
   return (neuron0x2a48be0()*0.0529642);
}

double NNfunction_sb_sLdL::synapse0x2a61e90() {
   return (neuron0x2a48f20()*-0.0891458);
}

double NNfunction_sb_sLdL::synapse0x2a62210() {
   return (neuron0x2a44360()*0.0156465);
}

double NNfunction_sb_sLdL::synapse0x2a62250() {
   return (neuron0x2a446a0()*-0.743459);
}

double NNfunction_sb_sLdL::synapse0x2a62290() {
   return (neuron0x2a449e0()*0.71374);
}

double NNfunction_sb_sLdL::synapse0x2a622d0() {
   return (neuron0x2a44d20()*-0.359733);
}

double NNfunction_sb_sLdL::synapse0x2a62310() {
   return (neuron0x2a45060()*0.633151);
}

double NNfunction_sb_sLdL::synapse0x2a62350() {
   return (neuron0x2a453a0()*0.0669945);
}

double NNfunction_sb_sLdL::synapse0x2a62390() {
   return (neuron0x2a456e0()*0.170349);
}

double NNfunction_sb_sLdL::synapse0x2a623d0() {
   return (neuron0x2a45a20()*0.126592);
}

double NNfunction_sb_sLdL::synapse0x2a62410() {
   return (neuron0x2a45d60()*-0.667768);
}

double NNfunction_sb_sLdL::synapse0x2a62450() {
   return (neuron0x2a460a0()*0.431785);
}

double NNfunction_sb_sLdL::synapse0x2a62490() {
   return (neuron0x2a463e0()*0.321474);
}

double NNfunction_sb_sLdL::synapse0x2a624d0() {
   return (neuron0x2a46720()*-0.0535379);
}

double NNfunction_sb_sLdL::synapse0x2a62510() {
   return (neuron0x2a46a60()*0.332071);
}

double NNfunction_sb_sLdL::synapse0x2a62550() {
   return (neuron0x2a46da0()*-0.361064);
}

double NNfunction_sb_sLdL::synapse0x2a62590() {
   return (neuron0x2a470e0()*0.00383456);
}

double NNfunction_sb_sLdL::synapse0x2a625d0() {
   return (neuron0x2a47420()*0.411166);
}

double NNfunction_sb_sLdL::synapse0x2a62060() {
   return (neuron0x2a47760()*-0.571623);
}

double NNfunction_sb_sLdL::synapse0x2a620a0() {
   return (neuron0x2a47cc0()*0.644074);
}

double NNfunction_sb_sLdL::synapse0x2a62720() {
   return (neuron0x2a47ee0()*-0.123235);
}

double NNfunction_sb_sLdL::synapse0x2a62760() {
   return (neuron0x2a48220()*-0.196115);
}

double NNfunction_sb_sLdL::synapse0x2a627a0() {
   return (neuron0x2a48560()*-0.393408);
}

double NNfunction_sb_sLdL::synapse0x2a627e0() {
   return (neuron0x2a488a0()*-0.583103);
}

double NNfunction_sb_sLdL::synapse0x2a62820() {
   return (neuron0x2a48be0()*0.698602);
}

double NNfunction_sb_sLdL::synapse0x2a62860() {
   return (neuron0x2a48f20()*0.061126);
}

double NNfunction_sb_sLdL::synapse0x2a62be0() {
   return (neuron0x2a44360()*0.0713933);
}

double NNfunction_sb_sLdL::synapse0x2a62c20() {
   return (neuron0x2a446a0()*-0.0769292);
}

double NNfunction_sb_sLdL::synapse0x2a62c60() {
   return (neuron0x2a449e0()*0.991822);
}

double NNfunction_sb_sLdL::synapse0x2a62ca0() {
   return (neuron0x2a44d20()*-0.498838);
}

double NNfunction_sb_sLdL::synapse0x2a62ce0() {
   return (neuron0x2a45060()*-0.0350392);
}

double NNfunction_sb_sLdL::synapse0x2a62d20() {
   return (neuron0x2a453a0()*0.130723);
}

double NNfunction_sb_sLdL::synapse0x2a62d60() {
   return (neuron0x2a456e0()*-0.159644);
}

double NNfunction_sb_sLdL::synapse0x2a62da0() {
   return (neuron0x2a45a20()*0.329186);
}

double NNfunction_sb_sLdL::synapse0x2a62de0() {
   return (neuron0x2a45d60()*-0.221779);
}

double NNfunction_sb_sLdL::synapse0x2a62e20() {
   return (neuron0x2a460a0()*-0.0737149);
}

double NNfunction_sb_sLdL::synapse0x2a62e60() {
   return (neuron0x2a463e0()*-0.717167);
}

double NNfunction_sb_sLdL::synapse0x2a62ea0() {
   return (neuron0x2a46720()*-0.336262);
}

double NNfunction_sb_sLdL::synapse0x2a62ee0() {
   return (neuron0x2a46a60()*0.112842);
}

double NNfunction_sb_sLdL::synapse0x2a62f20() {
   return (neuron0x2a46da0()*-0.556402);
}

double NNfunction_sb_sLdL::synapse0x2a62f60() {
   return (neuron0x2a470e0()*-0.153477);
}

double NNfunction_sb_sLdL::synapse0x2a62fa0() {
   return (neuron0x2a47420()*-0.0207482);
}

double NNfunction_sb_sLdL::synapse0x2a62a30() {
   return (neuron0x2a47760()*0.582787);
}

double NNfunction_sb_sLdL::synapse0x2a62a70() {
   return (neuron0x2a47cc0()*0.307787);
}

double NNfunction_sb_sLdL::synapse0x2a630f0() {
   return (neuron0x2a47ee0()*-0.129983);
}

double NNfunction_sb_sLdL::synapse0x2a63130() {
   return (neuron0x2a48220()*1.17299);
}

double NNfunction_sb_sLdL::synapse0x2a63170() {
   return (neuron0x2a48560()*0.265665);
}

double NNfunction_sb_sLdL::synapse0x2a631b0() {
   return (neuron0x2a488a0()*0.104752);
}

double NNfunction_sb_sLdL::synapse0x2a631f0() {
   return (neuron0x2a48be0()*0.15885);
}

double NNfunction_sb_sLdL::synapse0x2a63230() {
   return (neuron0x2a48f20()*-0.501995);
}

double NNfunction_sb_sLdL::synapse0x2a635b0() {
   return (neuron0x2a44360()*-0.877407);
}

double NNfunction_sb_sLdL::synapse0x2a635f0() {
   return (neuron0x2a446a0()*0.803841);
}

double NNfunction_sb_sLdL::synapse0x2a63630() {
   return (neuron0x2a449e0()*-0.0337783);
}

double NNfunction_sb_sLdL::synapse0x2a63670() {
   return (neuron0x2a44d20()*0.263779);
}

double NNfunction_sb_sLdL::synapse0x2a636b0() {
   return (neuron0x2a45060()*-0.696491);
}

double NNfunction_sb_sLdL::synapse0x2a636f0() {
   return (neuron0x2a453a0()*0.401292);
}

double NNfunction_sb_sLdL::synapse0x2a63730() {
   return (neuron0x2a456e0()*0.0490839);
}

double NNfunction_sb_sLdL::synapse0x2a63770() {
   return (neuron0x2a45a20()*-0.0576167);
}

double NNfunction_sb_sLdL::synapse0x2a637b0() {
   return (neuron0x2a45d60()*1.03007);
}

double NNfunction_sb_sLdL::synapse0x2a637f0() {
   return (neuron0x2a460a0()*-0.918135);
}

double NNfunction_sb_sLdL::synapse0x2a63830() {
   return (neuron0x2a463e0()*0.887501);
}

double NNfunction_sb_sLdL::synapse0x2a63870() {
   return (neuron0x2a46720()*0.224001);
}

double NNfunction_sb_sLdL::synapse0x2a638b0() {
   return (neuron0x2a46a60()*0.3031);
}

double NNfunction_sb_sLdL::synapse0x2a638f0() {
   return (neuron0x2a46da0()*-0.171594);
}

double NNfunction_sb_sLdL::synapse0x2a63930() {
   return (neuron0x2a470e0()*-0.0539621);
}

double NNfunction_sb_sLdL::synapse0x2a63970() {
   return (neuron0x2a47420()*-0.2666);
}

double NNfunction_sb_sLdL::synapse0x2a63400() {
   return (neuron0x2a47760()*-0.730757);
}

double NNfunction_sb_sLdL::synapse0x2a63440() {
   return (neuron0x2a47cc0()*0.440884);
}

double NNfunction_sb_sLdL::synapse0x2a63ac0() {
   return (neuron0x2a47ee0()*0.0501247);
}

double NNfunction_sb_sLdL::synapse0x2a63b00() {
   return (neuron0x2a48220()*0.367575);
}

double NNfunction_sb_sLdL::synapse0x2a63b40() {
   return (neuron0x2a48560()*0.875459);
}

double NNfunction_sb_sLdL::synapse0x2a63b80() {
   return (neuron0x2a488a0()*-0.429666);
}

double NNfunction_sb_sLdL::synapse0x2a63bc0() {
   return (neuron0x2a48be0()*-0.114219);
}

double NNfunction_sb_sLdL::synapse0x2a63c00() {
   return (neuron0x2a48f20()*-0.624899);
}

double NNfunction_sb_sLdL::synapse0x2a63f80() {
   return (neuron0x2a44360()*0.202014);
}

double NNfunction_sb_sLdL::synapse0x2a63fc0() {
   return (neuron0x2a446a0()*0.780164);
}

double NNfunction_sb_sLdL::synapse0x2a64000() {
   return (neuron0x2a449e0()*-2.05457);
}

double NNfunction_sb_sLdL::synapse0x2a64040() {
   return (neuron0x2a44d20()*0.596796);
}

double NNfunction_sb_sLdL::synapse0x2a64080() {
   return (neuron0x2a45060()*0.127247);
}

double NNfunction_sb_sLdL::synapse0x2a640c0() {
   return (neuron0x2a453a0()*0.314006);
}

double NNfunction_sb_sLdL::synapse0x2a64100() {
   return (neuron0x2a456e0()*0.143479);
}

double NNfunction_sb_sLdL::synapse0x2a64140() {
   return (neuron0x2a45a20()*0.0632967);
}

double NNfunction_sb_sLdL::synapse0x2a64180() {
   return (neuron0x2a45d60()*-0.443131);
}

double NNfunction_sb_sLdL::synapse0x2a641c0() {
   return (neuron0x2a460a0()*0.192124);
}

double NNfunction_sb_sLdL::synapse0x2a64200() {
   return (neuron0x2a463e0()*-0.0453031);
}

double NNfunction_sb_sLdL::synapse0x2a64240() {
   return (neuron0x2a46720()*0.561745);
}

double NNfunction_sb_sLdL::synapse0x2a64280() {
   return (neuron0x2a46a60()*-0.527513);
}

double NNfunction_sb_sLdL::synapse0x2a642c0() {
   return (neuron0x2a46da0()*-1.39508);
}

double NNfunction_sb_sLdL::synapse0x2a64300() {
   return (neuron0x2a470e0()*0.281526);
}

double NNfunction_sb_sLdL::synapse0x2a64340() {
   return (neuron0x2a47420()*-0.589526);
}

double NNfunction_sb_sLdL::synapse0x2a63dd0() {
   return (neuron0x2a47760()*-0.43947);
}

double NNfunction_sb_sLdL::synapse0x2a63e10() {
   return (neuron0x2a47cc0()*-0.124058);
}

double NNfunction_sb_sLdL::synapse0x2a64490() {
   return (neuron0x2a47ee0()*-0.556816);
}

double NNfunction_sb_sLdL::synapse0x2a644d0() {
   return (neuron0x2a48220()*-0.896189);
}

double NNfunction_sb_sLdL::synapse0x2a64510() {
   return (neuron0x2a48560()*-0.0619412);
}

double NNfunction_sb_sLdL::synapse0x2a64550() {
   return (neuron0x2a488a0()*-0.0465801);
}

double NNfunction_sb_sLdL::synapse0x2a64590() {
   return (neuron0x2a48be0()*0.0378207);
}

double NNfunction_sb_sLdL::synapse0x2a645d0() {
   return (neuron0x2a48f20()*0.271541);
}

double NNfunction_sb_sLdL::synapse0x2a64950() {
   return (neuron0x2a44360()*0.488542);
}

double NNfunction_sb_sLdL::synapse0x2a64990() {
   return (neuron0x2a446a0()*0.129596);
}

double NNfunction_sb_sLdL::synapse0x2a649d0() {
   return (neuron0x2a449e0()*0.184433);
}

double NNfunction_sb_sLdL::synapse0x2a64a10() {
   return (neuron0x2a44d20()*-0.577821);
}

double NNfunction_sb_sLdL::synapse0x2a64a50() {
   return (neuron0x2a45060()*0.133094);
}

double NNfunction_sb_sLdL::synapse0x2a64a90() {
   return (neuron0x2a453a0()*-0.665954);
}

double NNfunction_sb_sLdL::synapse0x2a64ad0() {
   return (neuron0x2a456e0()*0.0436311);
}

double NNfunction_sb_sLdL::synapse0x2a64b10() {
   return (neuron0x2a45a20()*0.436081);
}

double NNfunction_sb_sLdL::synapse0x2a64b50() {
   return (neuron0x2a45d60()*-0.294646);
}

double NNfunction_sb_sLdL::synapse0x2a64b90() {
   return (neuron0x2a460a0()*1.40503);
}

double NNfunction_sb_sLdL::synapse0x2a64bd0() {
   return (neuron0x2a463e0()*0.483815);
}

double NNfunction_sb_sLdL::synapse0x2a64c10() {
   return (neuron0x2a46720()*0.517794);
}

double NNfunction_sb_sLdL::synapse0x2a64c50() {
   return (neuron0x2a46a60()*-0.0116726);
}

double NNfunction_sb_sLdL::synapse0x2a64c90() {
   return (neuron0x2a46da0()*0.419703);
}

double NNfunction_sb_sLdL::synapse0x2a64cd0() {
   return (neuron0x2a470e0()*0.877387);
}

double NNfunction_sb_sLdL::synapse0x2a64d10() {
   return (neuron0x2a47420()*-0.107945);
}

double NNfunction_sb_sLdL::synapse0x2a647a0() {
   return (neuron0x2a47760()*0.638379);
}

double NNfunction_sb_sLdL::synapse0x2a647e0() {
   return (neuron0x2a47cc0()*0.19178);
}

double NNfunction_sb_sLdL::synapse0x2a64e60() {
   return (neuron0x2a47ee0()*-1.09078);
}

double NNfunction_sb_sLdL::synapse0x2a64ea0() {
   return (neuron0x2a48220()*-0.0188812);
}

double NNfunction_sb_sLdL::synapse0x2a64ee0() {
   return (neuron0x2a48560()*0.183102);
}

double NNfunction_sb_sLdL::synapse0x2a64f20() {
   return (neuron0x2a488a0()*1.28575);
}

double NNfunction_sb_sLdL::synapse0x2a64f60() {
   return (neuron0x2a48be0()*-0.258292);
}

double NNfunction_sb_sLdL::synapse0x2a64fa0() {
   return (neuron0x2a48f20()*-0.48147);
}

double NNfunction_sb_sLdL::synapse0x2a65320() {
   return (neuron0x2a44360()*0.323142);
}

double NNfunction_sb_sLdL::synapse0x2a65360() {
   return (neuron0x2a446a0()*0.0507427);
}

double NNfunction_sb_sLdL::synapse0x2a653a0() {
   return (neuron0x2a449e0()*-0.97976);
}

double NNfunction_sb_sLdL::synapse0x2a653e0() {
   return (neuron0x2a44d20()*-0.347748);
}

double NNfunction_sb_sLdL::synapse0x2a65420() {
   return (neuron0x2a45060()*-0.201148);
}

double NNfunction_sb_sLdL::synapse0x2a65460() {
   return (neuron0x2a453a0()*0.524645);
}

double NNfunction_sb_sLdL::synapse0x2a654a0() {
   return (neuron0x2a456e0()*0.589158);
}

double NNfunction_sb_sLdL::synapse0x2a654e0() {
   return (neuron0x2a45a20()*-0.507363);
}

double NNfunction_sb_sLdL::synapse0x2a65520() {
   return (neuron0x2a45d60()*0.444569);
}

double NNfunction_sb_sLdL::synapse0x2a65560() {
   return (neuron0x2a460a0()*0.656374);
}

double NNfunction_sb_sLdL::synapse0x2a655a0() {
   return (neuron0x2a463e0()*0.0779207);
}

double NNfunction_sb_sLdL::synapse0x2a655e0() {
   return (neuron0x2a46720()*-0.0442727);
}

double NNfunction_sb_sLdL::synapse0x2a65620() {
   return (neuron0x2a46a60()*-0.138171);
}

double NNfunction_sb_sLdL::synapse0x2a65660() {
   return (neuron0x2a46da0()*-0.276939);
}

double NNfunction_sb_sLdL::synapse0x2a656a0() {
   return (neuron0x2a470e0()*0.273774);
}

double NNfunction_sb_sLdL::synapse0x2a656e0() {
   return (neuron0x2a47420()*0.270882);
}

double NNfunction_sb_sLdL::synapse0x2a65170() {
   return (neuron0x2a47760()*0.187387);
}

double NNfunction_sb_sLdL::synapse0x2a651b0() {
   return (neuron0x2a47cc0()*-0.263665);
}

double NNfunction_sb_sLdL::synapse0x2a65830() {
   return (neuron0x2a47ee0()*0.0996609);
}

double NNfunction_sb_sLdL::synapse0x2a65870() {
   return (neuron0x2a48220()*0.673196);
}

double NNfunction_sb_sLdL::synapse0x2a658b0() {
   return (neuron0x2a48560()*-0.0745927);
}

double NNfunction_sb_sLdL::synapse0x2a658f0() {
   return (neuron0x2a488a0()*0.422453);
}

double NNfunction_sb_sLdL::synapse0x2a65930() {
   return (neuron0x2a48be0()*0.0417854);
}

double NNfunction_sb_sLdL::synapse0x2a65970() {
   return (neuron0x2a48f20()*-0.178979);
}

double NNfunction_sb_sLdL::synapse0x2a4e420() {
   return (neuron0x2a44360()*0.703703);
}

double NNfunction_sb_sLdL::synapse0x2a4e460() {
   return (neuron0x2a446a0()*0.140572);
}

double NNfunction_sb_sLdL::synapse0x2a4e4a0() {
   return (neuron0x2a449e0()*-0.0767076);
}

double NNfunction_sb_sLdL::synapse0x2a4e4e0() {
   return (neuron0x2a44d20()*0.0450296);
}

double NNfunction_sb_sLdL::synapse0x2a4e520() {
   return (neuron0x2a45060()*0.178992);
}

double NNfunction_sb_sLdL::synapse0x2a4e560() {
   return (neuron0x2a453a0()*0.0890199);
}

double NNfunction_sb_sLdL::synapse0x2a4e5a0() {
   return (neuron0x2a456e0()*0.378229);
}

double NNfunction_sb_sLdL::synapse0x2a4e5e0() {
   return (neuron0x2a45a20()*-0.166589);
}

double NNfunction_sb_sLdL::synapse0x2a66100() {
   return (neuron0x2a45d60()*-1.01728);
}

double NNfunction_sb_sLdL::synapse0x2a66140() {
   return (neuron0x2a460a0()*0.138259);
}

double NNfunction_sb_sLdL::synapse0x2a66180() {
   return (neuron0x2a463e0()*0.00681882);
}

double NNfunction_sb_sLdL::synapse0x2a661c0() {
   return (neuron0x2a46720()*1.40512);
}

double NNfunction_sb_sLdL::synapse0x2a66200() {
   return (neuron0x2a46a60()*0.741643);
}

double NNfunction_sb_sLdL::synapse0x2a66240() {
   return (neuron0x2a46da0()*0.286743);
}

double NNfunction_sb_sLdL::synapse0x2a66280() {
   return (neuron0x2a470e0()*-0.217956);
}

double NNfunction_sb_sLdL::synapse0x2a662c0() {
   return (neuron0x2a47420()*0.332955);
}

double NNfunction_sb_sLdL::synapse0x2a65b40() {
   return (neuron0x2a47760()*-0.339831);
}

double NNfunction_sb_sLdL::synapse0x2a65b80() {
   return (neuron0x2a47cc0()*-0.0282052);
}

double NNfunction_sb_sLdL::synapse0x2a66410() {
   return (neuron0x2a47ee0()*0.137198);
}

double NNfunction_sb_sLdL::synapse0x2a66450() {
   return (neuron0x2a48220()*0.0780262);
}

double NNfunction_sb_sLdL::synapse0x2a66490() {
   return (neuron0x2a48560()*-0.441475);
}

double NNfunction_sb_sLdL::synapse0x2a664d0() {
   return (neuron0x2a488a0()*-0.397495);
}

double NNfunction_sb_sLdL::synapse0x2a66510() {
   return (neuron0x2a48be0()*0.0458017);
}

double NNfunction_sb_sLdL::synapse0x2a66550() {
   return (neuron0x2a48f20()*0.214825);
}

double NNfunction_sb_sLdL::synapse0x2a668d0() {
   return (neuron0x2a44360()*0.653033);
}

double NNfunction_sb_sLdL::synapse0x2a66910() {
   return (neuron0x2a446a0()*0.41079);
}

double NNfunction_sb_sLdL::synapse0x2a66950() {
   return (neuron0x2a449e0()*-0.289681);
}

double NNfunction_sb_sLdL::synapse0x2a66990() {
   return (neuron0x2a44d20()*-0.388496);
}

double NNfunction_sb_sLdL::synapse0x2a669d0() {
   return (neuron0x2a45060()*-0.427426);
}

double NNfunction_sb_sLdL::synapse0x2a66a10() {
   return (neuron0x2a453a0()*-0.407536);
}

double NNfunction_sb_sLdL::synapse0x2a66a50() {
   return (neuron0x2a456e0()*-0.281142);
}

double NNfunction_sb_sLdL::synapse0x2a66a90() {
   return (neuron0x2a45a20()*-0.0113536);
}

double NNfunction_sb_sLdL::synapse0x2a66ad0() {
   return (neuron0x2a45d60()*-0.00305598);
}

double NNfunction_sb_sLdL::synapse0x2a66b10() {
   return (neuron0x2a460a0()*0.0771147);
}

double NNfunction_sb_sLdL::synapse0x2a66b50() {
   return (neuron0x2a463e0()*0.281918);
}

double NNfunction_sb_sLdL::synapse0x2a66b90() {
   return (neuron0x2a46720()*-0.0785858);
}

double NNfunction_sb_sLdL::synapse0x2a66bd0() {
   return (neuron0x2a46a60()*-1.2119);
}

double NNfunction_sb_sLdL::synapse0x2a66c10() {
   return (neuron0x2a46da0()*-0.497382);
}

double NNfunction_sb_sLdL::synapse0x2a66c50() {
   return (neuron0x2a470e0()*0.479853);
}

double NNfunction_sb_sLdL::synapse0x2a66c90() {
   return (neuron0x2a47420()*0.106852);
}

double NNfunction_sb_sLdL::synapse0x2a66720() {
   return (neuron0x2a47760()*0.137184);
}

double NNfunction_sb_sLdL::synapse0x2a66760() {
   return (neuron0x2a47cc0()*-0.218945);
}

double NNfunction_sb_sLdL::synapse0x2a66de0() {
   return (neuron0x2a47ee0()*-0.149701);
}

double NNfunction_sb_sLdL::synapse0x2a66e20() {
   return (neuron0x2a48220()*-0.423326);
}

double NNfunction_sb_sLdL::synapse0x2a66e60() {
   return (neuron0x2a48560()*-0.60428);
}

double NNfunction_sb_sLdL::synapse0x2a66ea0() {
   return (neuron0x2a488a0()*-0.279965);
}

double NNfunction_sb_sLdL::synapse0x2a66ee0() {
   return (neuron0x2a48be0()*-0.324713);
}

double NNfunction_sb_sLdL::synapse0x2a66f20() {
   return (neuron0x2a48f20()*0.299908);
}

double NNfunction_sb_sLdL::synapse0x2a672a0() {
   return (neuron0x2a44360()*-0.170732);
}

double NNfunction_sb_sLdL::synapse0x2a672e0() {
   return (neuron0x2a446a0()*-0.077889);
}

double NNfunction_sb_sLdL::synapse0x2a67320() {
   return (neuron0x2a449e0()*0.357659);
}

double NNfunction_sb_sLdL::synapse0x2a67360() {
   return (neuron0x2a44d20()*-0.104714);
}

double NNfunction_sb_sLdL::synapse0x2a673a0() {
   return (neuron0x2a45060()*-0.321957);
}

double NNfunction_sb_sLdL::synapse0x2a673e0() {
   return (neuron0x2a453a0()*0.515867);
}

double NNfunction_sb_sLdL::synapse0x2a67420() {
   return (neuron0x2a456e0()*0.00847839);
}

double NNfunction_sb_sLdL::synapse0x2a67460() {
   return (neuron0x2a45a20()*-0.438277);
}

double NNfunction_sb_sLdL::synapse0x2a674a0() {
   return (neuron0x2a45d60()*0.020418);
}

double NNfunction_sb_sLdL::synapse0x2a674e0() {
   return (neuron0x2a460a0()*-0.858246);
}

double NNfunction_sb_sLdL::synapse0x2a67520() {
   return (neuron0x2a463e0()*1.12223);
}

double NNfunction_sb_sLdL::synapse0x2a67560() {
   return (neuron0x2a46720()*-0.459331);
}

double NNfunction_sb_sLdL::synapse0x2a675a0() {
   return (neuron0x2a46a60()*-0.466612);
}

double NNfunction_sb_sLdL::synapse0x2a675e0() {
   return (neuron0x2a46da0()*0.979671);
}

double NNfunction_sb_sLdL::synapse0x2a67620() {
   return (neuron0x2a470e0()*0.839244);
}

double NNfunction_sb_sLdL::synapse0x2a67660() {
   return (neuron0x2a47420()*1.05991);
}

double NNfunction_sb_sLdL::synapse0x2a670f0() {
   return (neuron0x2a47760()*-0.509768);
}

double NNfunction_sb_sLdL::synapse0x2a67130() {
   return (neuron0x2a47cc0()*-0.117218);
}

double NNfunction_sb_sLdL::synapse0x2a57c60() {
   return (neuron0x2a47ee0()*0.433174);
}

double NNfunction_sb_sLdL::synapse0x2a57ca0() {
   return (neuron0x2a48220()*-0.487843);
}

double NNfunction_sb_sLdL::synapse0x2a57ce0() {
   return (neuron0x2a48560()*0.576308);
}

double NNfunction_sb_sLdL::synapse0x2a57d20() {
   return (neuron0x2a488a0()*-0.667894);
}

double NNfunction_sb_sLdL::synapse0x2a57d60() {
   return (neuron0x2a48be0()*0.25406);
}

double NNfunction_sb_sLdL::synapse0x2a57da0() {
   return (neuron0x2a48f20()*-0.325202);
}

double NNfunction_sb_sLdL::synapse0x2a58120() {
   return (neuron0x2a44360()*-0.0147357);
}

double NNfunction_sb_sLdL::synapse0x2a58160() {
   return (neuron0x2a446a0()*0.0993223);
}

double NNfunction_sb_sLdL::synapse0x2a581a0() {
   return (neuron0x2a449e0()*0.509266);
}

double NNfunction_sb_sLdL::synapse0x2a581e0() {
   return (neuron0x2a44d20()*0.816549);
}

double NNfunction_sb_sLdL::synapse0x2a58220() {
   return (neuron0x2a45060()*-0.142187);
}

double NNfunction_sb_sLdL::synapse0x2a58260() {
   return (neuron0x2a453a0()*-0.239575);
}

double NNfunction_sb_sLdL::synapse0x2a582a0() {
   return (neuron0x2a456e0()*-0.00915069);
}

double NNfunction_sb_sLdL::synapse0x2a582e0() {
   return (neuron0x2a45a20()*-0.181841);
}

double NNfunction_sb_sLdL::synapse0x2a58320() {
   return (neuron0x2a45d60()*0.0030962);
}

double NNfunction_sb_sLdL::synapse0x2a58360() {
   return (neuron0x2a460a0()*0.0182921);
}

double NNfunction_sb_sLdL::synapse0x2a583a0() {
   return (neuron0x2a463e0()*-0.0334566);
}

double NNfunction_sb_sLdL::synapse0x2a583e0() {
   return (neuron0x2a46720()*0.627774);
}

double NNfunction_sb_sLdL::synapse0x2a58420() {
   return (neuron0x2a46a60()*-1.08465);
}

double NNfunction_sb_sLdL::synapse0x2a58460() {
   return (neuron0x2a46da0()*0.137558);
}

double NNfunction_sb_sLdL::synapse0x2a584a0() {
   return (neuron0x2a470e0()*-0.0188719);
}

double NNfunction_sb_sLdL::synapse0x2a584e0() {
   return (neuron0x2a47420()*0.0525727);
}

double NNfunction_sb_sLdL::synapse0x2a57f70() {
   return (neuron0x2a47760()*-0.0460096);
}

double NNfunction_sb_sLdL::synapse0x2a57fb0() {
   return (neuron0x2a47cc0()*0.0909742);
}

double NNfunction_sb_sLdL::synapse0x2a58630() {
   return (neuron0x2a47ee0()*0.0130763);
}

double NNfunction_sb_sLdL::synapse0x2a58670() {
   return (neuron0x2a48220()*-0.00761333);
}

double NNfunction_sb_sLdL::synapse0x2a586b0() {
   return (neuron0x2a48560()*-0.392978);
}

double NNfunction_sb_sLdL::synapse0x2a586f0() {
   return (neuron0x2a488a0()*0.00908598);
}

double NNfunction_sb_sLdL::synapse0x2a58730() {
   return (neuron0x2a48be0()*0.163153);
}

double NNfunction_sb_sLdL::synapse0x2a58770() {
   return (neuron0x2a48f20()*0.0664389);
}

double NNfunction_sb_sLdL::synapse0x2a58af0() {
   return (neuron0x2a44360()*0.598548);
}

double NNfunction_sb_sLdL::synapse0x2a58b30() {
   return (neuron0x2a446a0()*-0.407738);
}

double NNfunction_sb_sLdL::synapse0x2a58b70() {
   return (neuron0x2a449e0()*-0.408132);
}

double NNfunction_sb_sLdL::synapse0x2a58bb0() {
   return (neuron0x2a44d20()*0.906216);
}

double NNfunction_sb_sLdL::synapse0x2a58bf0() {
   return (neuron0x2a45060()*0.446306);
}

double NNfunction_sb_sLdL::synapse0x2a58c30() {
   return (neuron0x2a453a0()*0.370044);
}

double NNfunction_sb_sLdL::synapse0x2a58c70() {
   return (neuron0x2a456e0()*-0.172427);
}

double NNfunction_sb_sLdL::synapse0x2a58cb0() {
   return (neuron0x2a45a20()*-0.234564);
}

double NNfunction_sb_sLdL::synapse0x2a58cf0() {
   return (neuron0x2a45d60()*-0.173189);
}

double NNfunction_sb_sLdL::synapse0x2a58d30() {
   return (neuron0x2a460a0()*0.431927);
}

double NNfunction_sb_sLdL::synapse0x2a58d70() {
   return (neuron0x2a463e0()*0.00245842);
}

double NNfunction_sb_sLdL::synapse0x2a58db0() {
   return (neuron0x2a46720()*-0.670037);
}

double NNfunction_sb_sLdL::synapse0x2a58df0() {
   return (neuron0x2a46a60()*-0.734825);
}

double NNfunction_sb_sLdL::synapse0x2a58e30() {
   return (neuron0x2a46da0()*0.410514);
}

double NNfunction_sb_sLdL::synapse0x2a58e70() {
   return (neuron0x2a470e0()*0.48809);
}

double NNfunction_sb_sLdL::synapse0x2a58eb0() {
   return (neuron0x2a47420()*0.362784);
}

double NNfunction_sb_sLdL::synapse0x2a58940() {
   return (neuron0x2a47760()*-0.0878123);
}

double NNfunction_sb_sLdL::synapse0x2a58980() {
   return (neuron0x2a47cc0()*0.255947);
}

double NNfunction_sb_sLdL::synapse0x2a59000() {
   return (neuron0x2a47ee0()*-0.461809);
}

double NNfunction_sb_sLdL::synapse0x2a59040() {
   return (neuron0x2a48220()*0.188897);
}

double NNfunction_sb_sLdL::synapse0x2a59080() {
   return (neuron0x2a48560()*0.365152);
}

double NNfunction_sb_sLdL::synapse0x2a590c0() {
   return (neuron0x2a488a0()*-0.0531612);
}

double NNfunction_sb_sLdL::synapse0x2a59100() {
   return (neuron0x2a48be0()*-0.226474);
}

double NNfunction_sb_sLdL::synapse0x2a59140() {
   return (neuron0x2a48f20()*0.335852);
}

double NNfunction_sb_sLdL::synapse0x2a594c0() {
   return (neuron0x2a44360()*-0.0366101);
}

double NNfunction_sb_sLdL::synapse0x2a59500() {
   return (neuron0x2a446a0()*-0.249057);
}

double NNfunction_sb_sLdL::synapse0x2a59540() {
   return (neuron0x2a449e0()*-0.26257);
}

double NNfunction_sb_sLdL::synapse0x2a59580() {
   return (neuron0x2a44d20()*0.102657);
}

double NNfunction_sb_sLdL::synapse0x2a595c0() {
   return (neuron0x2a45060()*0.968248);
}

double NNfunction_sb_sLdL::synapse0x2a59600() {
   return (neuron0x2a453a0()*-0.45978);
}

double NNfunction_sb_sLdL::synapse0x2a59640() {
   return (neuron0x2a456e0()*-0.521476);
}

double NNfunction_sb_sLdL::synapse0x2a59680() {
   return (neuron0x2a45a20()*0.201203);
}

double NNfunction_sb_sLdL::synapse0x2a596c0() {
   return (neuron0x2a45d60()*0.0525352);
}

double NNfunction_sb_sLdL::synapse0x2a59700() {
   return (neuron0x2a460a0()*-0.303906);
}

double NNfunction_sb_sLdL::synapse0x2a59740() {
   return (neuron0x2a463e0()*0.176914);
}

double NNfunction_sb_sLdL::synapse0x2a59780() {
   return (neuron0x2a46720()*-0.400605);
}

double NNfunction_sb_sLdL::synapse0x2a597c0() {
   return (neuron0x2a46a60()*-0.850385);
}

double NNfunction_sb_sLdL::synapse0x2a59800() {
   return (neuron0x2a46da0()*-0.64146);
}

double NNfunction_sb_sLdL::synapse0x2a59840() {
   return (neuron0x2a470e0()*0.422279);
}

double NNfunction_sb_sLdL::synapse0x2a59880() {
   return (neuron0x2a47420()*0.67539);
}

double NNfunction_sb_sLdL::synapse0x2a59310() {
   return (neuron0x2a47760()*-0.422643);
}

double NNfunction_sb_sLdL::synapse0x2a59350() {
   return (neuron0x2a47cc0()*0.153776);
}

double NNfunction_sb_sLdL::synapse0x2a599d0() {
   return (neuron0x2a47ee0()*0.751164);
}

double NNfunction_sb_sLdL::synapse0x2a59a10() {
   return (neuron0x2a48220()*-0.24729);
}

double NNfunction_sb_sLdL::synapse0x2a59a50() {
   return (neuron0x2a48560()*-0.299718);
}

double NNfunction_sb_sLdL::synapse0x2a59a90() {
   return (neuron0x2a488a0()*0.477041);
}

double NNfunction_sb_sLdL::synapse0x2a59ad0() {
   return (neuron0x2a48be0()*-0.319804);
}

double NNfunction_sb_sLdL::synapse0x2a59b10() {
   return (neuron0x2a48f20()*-0.565046);
}

double NNfunction_sb_sLdL::synapse0x2a6b9e0() {
   return (neuron0x2a44360()*-0.267366);
}

double NNfunction_sb_sLdL::synapse0x2a6ba20() {
   return (neuron0x2a446a0()*-0.250944);
}

double NNfunction_sb_sLdL::synapse0x2a6ba60() {
   return (neuron0x2a449e0()*0.145121);
}

double NNfunction_sb_sLdL::synapse0x2a6baa0() {
   return (neuron0x2a44d20()*0.195358);
}

double NNfunction_sb_sLdL::synapse0x2a6bae0() {
   return (neuron0x2a45060()*1.05872);
}

double NNfunction_sb_sLdL::synapse0x2a6bb20() {
   return (neuron0x2a453a0()*0.475721);
}

double NNfunction_sb_sLdL::synapse0x2a6bb60() {
   return (neuron0x2a456e0()*-0.463503);
}

double NNfunction_sb_sLdL::synapse0x2a6bba0() {
   return (neuron0x2a45a20()*0.136648);
}

double NNfunction_sb_sLdL::synapse0x2a6bbe0() {
   return (neuron0x2a45d60()*0.454505);
}

double NNfunction_sb_sLdL::synapse0x2a6bc20() {
   return (neuron0x2a460a0()*0.62857);
}

double NNfunction_sb_sLdL::synapse0x2a6bc60() {
   return (neuron0x2a463e0()*-0.106681);
}

double NNfunction_sb_sLdL::synapse0x2a6bca0() {
   return (neuron0x2a46720()*-0.393308);
}

double NNfunction_sb_sLdL::synapse0x2a6bce0() {
   return (neuron0x2a46a60()*0.662641);
}

double NNfunction_sb_sLdL::synapse0x2a6bd20() {
   return (neuron0x2a46da0()*-0.572752);
}

double NNfunction_sb_sLdL::synapse0x2a6bd60() {
   return (neuron0x2a470e0()*-0.221125);
}

double NNfunction_sb_sLdL::synapse0x2a6bda0() {
   return (neuron0x2a47420()*-0.825946);
}

double NNfunction_sb_sLdL::synapse0x2a59b50() {
   return (neuron0x2a47760()*-0.533645);
}

double NNfunction_sb_sLdL::synapse0x2a59b90() {
   return (neuron0x2a47cc0()*0.10041);
}

double NNfunction_sb_sLdL::synapse0x2a6bef0() {
   return (neuron0x2a47ee0()*-0.52908);
}

double NNfunction_sb_sLdL::synapse0x2a6bf30() {
   return (neuron0x2a48220()*-0.00837972);
}

double NNfunction_sb_sLdL::synapse0x2a6bf70() {
   return (neuron0x2a48560()*0.593774);
}

double NNfunction_sb_sLdL::synapse0x2a6bfb0() {
   return (neuron0x2a488a0()*0.232696);
}

double NNfunction_sb_sLdL::synapse0x2a6bff0() {
   return (neuron0x2a48be0()*0.499947);
}

double NNfunction_sb_sLdL::synapse0x2a6c030() {
   return (neuron0x2a48f20()*-0.836701);
}

double NNfunction_sb_sLdL::synapse0x2a6c3b0() {
   return (neuron0x2a44360()*0.0023009);
}

double NNfunction_sb_sLdL::synapse0x2a6c3f0() {
   return (neuron0x2a446a0()*0.00538689);
}

double NNfunction_sb_sLdL::synapse0x2a6c430() {
   return (neuron0x2a449e0()*0.01823);
}

double NNfunction_sb_sLdL::synapse0x2a6c470() {
   return (neuron0x2a44d20()*-0.000779706);
}

double NNfunction_sb_sLdL::synapse0x2a6c4b0() {
   return (neuron0x2a45060()*0.00358932);
}

double NNfunction_sb_sLdL::synapse0x2a6c4f0() {
   return (neuron0x2a453a0()*0.00152104);
}

double NNfunction_sb_sLdL::synapse0x2a6c530() {
   return (neuron0x2a456e0()*0.0054546);
}

double NNfunction_sb_sLdL::synapse0x2a6c570() {
   return (neuron0x2a45a20()*0.0217456);
}

double NNfunction_sb_sLdL::synapse0x2a6c5b0() {
   return (neuron0x2a45d60()*-0.0017035);
}

double NNfunction_sb_sLdL::synapse0x2a6c5f0() {
   return (neuron0x2a460a0()*0.00526996);
}

double NNfunction_sb_sLdL::synapse0x2a6c630() {
   return (neuron0x2a463e0()*0.00898296);
}

double NNfunction_sb_sLdL::synapse0x2a6c670() {
   return (neuron0x2a46720()*-0.401076);
}

double NNfunction_sb_sLdL::synapse0x2a6c6b0() {
   return (neuron0x2a46a60()*0.860869);
}

double NNfunction_sb_sLdL::synapse0x2a6c6f0() {
   return (neuron0x2a46da0()*0.0035561);
}

double NNfunction_sb_sLdL::synapse0x2a6c730() {
   return (neuron0x2a470e0()*0.00910292);
}

double NNfunction_sb_sLdL::synapse0x2a6c770() {
   return (neuron0x2a47420()*0.000883735);
}

double NNfunction_sb_sLdL::synapse0x2a6c200() {
   return (neuron0x2a47760()*-0.00736388);
}

double NNfunction_sb_sLdL::synapse0x2a6c240() {
   return (neuron0x2a47cc0()*0.0110755);
}

double NNfunction_sb_sLdL::synapse0x2a6c8c0() {
   return (neuron0x2a47ee0()*0.00539225);
}

double NNfunction_sb_sLdL::synapse0x2a6c900() {
   return (neuron0x2a48220()*-0.000157121);
}

double NNfunction_sb_sLdL::synapse0x2a6c940() {
   return (neuron0x2a48560()*-0.00312209);
}

double NNfunction_sb_sLdL::synapse0x2a6c980() {
   return (neuron0x2a488a0()*-0.00488589);
}

double NNfunction_sb_sLdL::synapse0x2a6c9c0() {
   return (neuron0x2a48be0()*0.0082547);
}

double NNfunction_sb_sLdL::synapse0x2a6ca00() {
   return (neuron0x2a48f20()*-0.00633062);
}

double NNfunction_sb_sLdL::synapse0x2a6cd80() {
   return (neuron0x2a44360()*0.0506074);
}

double NNfunction_sb_sLdL::synapse0x2a6cdc0() {
   return (neuron0x2a446a0()*0.0066823);
}

double NNfunction_sb_sLdL::synapse0x2a6ce00() {
   return (neuron0x2a449e0()*-0.0591352);
}

double NNfunction_sb_sLdL::synapse0x2a6ce40() {
   return (neuron0x2a44d20()*0.669419);
}

double NNfunction_sb_sLdL::synapse0x2a6ce80() {
   return (neuron0x2a45060()*4.27636e-05);
}

double NNfunction_sb_sLdL::synapse0x2a6cec0() {
   return (neuron0x2a453a0()*-0.00416809);
}

double NNfunction_sb_sLdL::synapse0x2a6cf00() {
   return (neuron0x2a456e0()*0.00397269);
}

double NNfunction_sb_sLdL::synapse0x2a6cf40() {
   return (neuron0x2a45a20()*-0.0371728);
}

double NNfunction_sb_sLdL::synapse0x2a6cf80() {
   return (neuron0x2a45d60()*-0.00972992);
}

double NNfunction_sb_sLdL::synapse0x2a6cfc0() {
   return (neuron0x2a460a0()*-0.0496145);
}

double NNfunction_sb_sLdL::synapse0x2a6d000() {
   return (neuron0x2a463e0()*-0.0303326);
}

double NNfunction_sb_sLdL::synapse0x2a6d040() {
   return (neuron0x2a46720()*0.616381);
}

double NNfunction_sb_sLdL::synapse0x2a6d080() {
   return (neuron0x2a46a60()*0.704887);
}

double NNfunction_sb_sLdL::synapse0x2a6d0c0() {
   return (neuron0x2a46da0()*-0.00723312);
}

double NNfunction_sb_sLdL::synapse0x2a6d100() {
   return (neuron0x2a470e0()*0.00327665);
}

double NNfunction_sb_sLdL::synapse0x2a6d140() {
   return (neuron0x2a47420()*-0.0190182);
}

double NNfunction_sb_sLdL::synapse0x2a6cbd0() {
   return (neuron0x2a47760()*-0.00559166);
}

double NNfunction_sb_sLdL::synapse0x2a6cc10() {
   return (neuron0x2a47cc0()*-0.0343605);
}

double NNfunction_sb_sLdL::synapse0x2a6d290() {
   return (neuron0x2a47ee0()*0.0262968);
}

double NNfunction_sb_sLdL::synapse0x2a6d2d0() {
   return (neuron0x2a48220()*0.0215321);
}

double NNfunction_sb_sLdL::synapse0x2a6d310() {
   return (neuron0x2a48560()*0.005943);
}

double NNfunction_sb_sLdL::synapse0x2a6d350() {
   return (neuron0x2a488a0()*-0.00558639);
}

double NNfunction_sb_sLdL::synapse0x2a6d390() {
   return (neuron0x2a48be0()*-0.00612317);
}

double NNfunction_sb_sLdL::synapse0x2a6d3d0() {
   return (neuron0x2a48f20()*0.0483681);
}

double NNfunction_sb_sLdL::synapse0x2a6d750() {
   return (neuron0x2a44360()*0.00520934);
}

double NNfunction_sb_sLdL::synapse0x2a6d790() {
   return (neuron0x2a446a0()*-0.00362917);
}

double NNfunction_sb_sLdL::synapse0x2a6d7d0() {
   return (neuron0x2a449e0()*0.0146275);
}

double NNfunction_sb_sLdL::synapse0x2a6d810() {
   return (neuron0x2a44d20()*-6.25454);
}

double NNfunction_sb_sLdL::synapse0x2a6d850() {
   return (neuron0x2a45060()*0.00459414);
}

double NNfunction_sb_sLdL::synapse0x2a6d890() {
   return (neuron0x2a453a0()*-0.00644906);
}

double NNfunction_sb_sLdL::synapse0x2a6d8d0() {
   return (neuron0x2a456e0()*-0.0109901);
}

double NNfunction_sb_sLdL::synapse0x2a6d910() {
   return (neuron0x2a45a20()*-0.00417836);
}

double NNfunction_sb_sLdL::synapse0x2a6d950() {
   return (neuron0x2a45d60()*0.00191077);
}

double NNfunction_sb_sLdL::synapse0x2a6d990() {
   return (neuron0x2a460a0()*-0.0121899);
}

double NNfunction_sb_sLdL::synapse0x2a6d9d0() {
   return (neuron0x2a463e0()*-0.00021965);
}

double NNfunction_sb_sLdL::synapse0x2a6da10() {
   return (neuron0x2a46720()*0.165602);
}

double NNfunction_sb_sLdL::synapse0x2a6da50() {
   return (neuron0x2a46a60()*0.147873);
}

double NNfunction_sb_sLdL::synapse0x2a6da90() {
   return (neuron0x2a46da0()*0.00893731);
}

double NNfunction_sb_sLdL::synapse0x2a6dad0() {
   return (neuron0x2a470e0()*-0.00527435);
}

double NNfunction_sb_sLdL::synapse0x2a6db10() {
   return (neuron0x2a47420()*-0.0144289);
}

double NNfunction_sb_sLdL::synapse0x2a6d5a0() {
   return (neuron0x2a47760()*-0.00829192);
}

double NNfunction_sb_sLdL::synapse0x2a6d5e0() {
   return (neuron0x2a47cc0()*0.0159837);
}

double NNfunction_sb_sLdL::synapse0x2a6dc60() {
   return (neuron0x2a47ee0()*-0.00104423);
}

double NNfunction_sb_sLdL::synapse0x2a6dca0() {
   return (neuron0x2a48220()*-0.0195807);
}

double NNfunction_sb_sLdL::synapse0x2a6dce0() {
   return (neuron0x2a48560()*-0.0030455);
}

double NNfunction_sb_sLdL::synapse0x2a6dd20() {
   return (neuron0x2a488a0()*0.00180566);
}

double NNfunction_sb_sLdL::synapse0x2a6dd60() {
   return (neuron0x2a48be0()*0.0202092);
}

double NNfunction_sb_sLdL::synapse0x2a6dda0() {
   return (neuron0x2a48f20()*-0.0135484);
}

double NNfunction_sb_sLdL::synapse0x280dcb0() {
   return (neuron0x2a49390()*-0.0447215);
}

double NNfunction_sb_sLdL::synapse0x280dcf0() {
   return (neuron0x2a49ce0()*-0.00471015);
}

double NNfunction_sb_sLdL::synapse0x2a4b850() {
   return (neuron0x2a4a7c0()*-0.712241);
}

double NNfunction_sb_sLdL::synapse0x2a4b890() {
   return (neuron0x2a4a260()*-0.0757251);
}

double NNfunction_sb_sLdL::synapse0x2a4c220() {
   return (neuron0x2a4b5a0()*-0.278793);
}

double NNfunction_sb_sLdL::synapse0x2a4c260() {
   return (neuron0x2a4bf70()*0.220679);
}

double NNfunction_sb_sLdL::synapse0x2a4cff0() {
   return (neuron0x2a4cd40()*-0.217549);
}

double NNfunction_sb_sLdL::synapse0x2a4d030() {
   return (neuron0x2a4d710()*-0.546304);
}

double NNfunction_sb_sLdL::synapse0x2a4d9c0() {
   return (neuron0x2a4e0e0()*-0.356881);
}

double NNfunction_sb_sLdL::synapse0x2a4da00() {
   return (neuron0x2a4ebc0()*-0.331);
}

double NNfunction_sb_sLdL::synapse0x2a4e390() {
   return (neuron0x2a4f590()*-0.332635);
}

double NNfunction_sb_sLdL::synapse0x2a4e3d0() {
   return (neuron0x2a4c670()*-0.477905);
}

double NNfunction_sb_sLdL::synapse0x2a4ee70() {
   return (neuron0x2a51140()*-0.00808408);
}

double NNfunction_sb_sLdL::synapse0x2a4eeb0() {
   return (neuron0x2a51b10()*-0.277939);
}

double NNfunction_sb_sLdL::synapse0x2a4f840() {
   return (neuron0x2a524e0()*-0.440856);
}

double NNfunction_sb_sLdL::synapse0x2a4f880() {
   return (neuron0x2a52eb0()*0.0348709);
}

double NNfunction_sb_sLdL::synapse0x2a4c920() {
   return (neuron0x2a54cc0()*-0.285114);
}

double NNfunction_sb_sLdL::synapse0x2a4c960() {
   return (neuron0x2a54fa0()*-0.00553384);
}

double NNfunction_sb_sLdL::synapse0x2a513f0() {
   return (neuron0x2a55970()*0.276768);
}

double NNfunction_sb_sLdL::synapse0x2a51430() {
   return (neuron0x2a56340()*-0.305209);
}

double NNfunction_sb_sLdL::synapse0x2a51dc0() {
   return (neuron0x2a56d10()*-0.346878);
}

double NNfunction_sb_sLdL::synapse0x2a51e00() {
   return (neuron0x2a576e0()*-0.58742);
}

double NNfunction_sb_sLdL::synapse0x2a52790() {
   return (neuron0x2a50230()*-0.21233);
}

double NNfunction_sb_sLdL::synapse0x2a527d0() {
   return (neuron0x2a50c00()*-0.361866);
}

double NNfunction_sb_sLdL::synapse0x2a53160() {
   return (neuron0x2a5a470()*0.0834626);
}

double NNfunction_sb_sLdL::synapse0x2a531a0() {
   return (neuron0x2a5ae40()*-0.434311);
}

double NNfunction_sb_sLdL::synapse0x2a47300() {
   return (neuron0x2a5b810()*0.204994);
}

double NNfunction_sb_sLdL::synapse0x2a47340() {
   return (neuron0x2a5c1e0()*0.363383);
}

double NNfunction_sb_sLdL::synapse0x2a55250() {
   return (neuron0x2a5cbb0()*-0.107741);
}

double NNfunction_sb_sLdL::synapse0x2a55290() {
   return (neuron0x2a5d580()*-0.0921722);
}

double NNfunction_sb_sLdL::synapse0x2a55c20() {
   return (neuron0x2a5df50()*-0.183602);
}

double NNfunction_sb_sLdL::synapse0x2a55c60() {
   return (neuron0x2a5e920()*-0.333357);
}

double NNfunction_sb_sLdL::synapse0x2a565f0() {
   return (neuron0x2a549b0()*-0.380359);
}

double NNfunction_sb_sLdL::synapse0x2a56630() {
   return (neuron0x2a61500()*-0.488795);
}

double NNfunction_sb_sLdL::synapse0x2a56fc0() {
   return (neuron0x2a61ed0()*-0.273578);
}

double NNfunction_sb_sLdL::synapse0x2a57000() {
   return (neuron0x2a628a0()*-0.362052);
}

double NNfunction_sb_sLdL::synapse0x2a57990() {
   return (neuron0x2a63270()*0.191588);
}

double NNfunction_sb_sLdL::synapse0x2a579d0() {
   return (neuron0x2a63c40()*0.456504);
}

double NNfunction_sb_sLdL::synapse0x2a504e0() {
   return (neuron0x2a64610()*0.235464);
}

double NNfunction_sb_sLdL::synapse0x2a50520() {
   return (neuron0x2a64fe0()*0.129708);
}

double NNfunction_sb_sLdL::synapse0x2a59d90() {
   return (neuron0x2a659b0()*-0.338864);
}

double NNfunction_sb_sLdL::synapse0x2a59dd0() {
   return (neuron0x2a66590()*-0.115187);
}

double NNfunction_sb_sLdL::synapse0x2a5a720() {
   return (neuron0x2a66f60()*0.343684);
}

double NNfunction_sb_sLdL::synapse0x2a5a760() {
   return (neuron0x2a57de0()*0.070293);
}

double NNfunction_sb_sLdL::synapse0x2a5b0f0() {
   return (neuron0x2a587b0()*0.333726);
}

double NNfunction_sb_sLdL::synapse0x2a5b130() {
   return (neuron0x2a59180()*-0.109087);
}

double NNfunction_sb_sLdL::synapse0x2a5bac0() {
   return (neuron0x2a6b7c0()*-0.582776);
}

double NNfunction_sb_sLdL::synapse0x2a5bb00() {
   return (neuron0x2a6c070()*-0.373453);
}

double NNfunction_sb_sLdL::synapse0x2a5c490() {
   return (neuron0x2a6ca40()*-0.0590846);
}

double NNfunction_sb_sLdL::synapse0x2a5c4d0() {
   return (neuron0x2a6d410()*-0.283954);
}

double NNfunction_sb_sLdL::synapse0x2a5ebd0() {
   return (neuron0x2a49390()*-1.82818);
}

double NNfunction_sb_sLdL::synapse0x2a5ec10() {
   return (neuron0x2a49ce0()*-1.37837);
}

double NNfunction_sb_sLdL::synapse0x2a54190() {
   return (neuron0x2a4a7c0()*-1.06471);
}

double NNfunction_sb_sLdL::synapse0x2a541d0() {
   return (neuron0x2a4a260()*0.579161);
}

double NNfunction_sb_sLdL::synapse0x2a617b0() {
   return (neuron0x2a4b5a0()*3.09363);
}

double NNfunction_sb_sLdL::synapse0x2a617f0() {
   return (neuron0x2a4bf70()*1.17557);
}

double NNfunction_sb_sLdL::synapse0x2a62180() {
   return (neuron0x2a4cd40()*-2.29369);
}

double NNfunction_sb_sLdL::synapse0x2a621c0() {
   return (neuron0x2a4d710()*2.03072);
}

double NNfunction_sb_sLdL::synapse0x2a62b50() {
   return (neuron0x2a4e0e0()*-0.213801);
}

double NNfunction_sb_sLdL::synapse0x2a62b90() {
   return (neuron0x2a4ebc0()*-1.65784);
}

double NNfunction_sb_sLdL::synapse0x2a63520() {
   return (neuron0x2a4f590()*-1.01061);
}

double NNfunction_sb_sLdL::synapse0x2a63560() {
   return (neuron0x2a4c670()*-0.662156);
}

double NNfunction_sb_sLdL::synapse0x2a63ef0() {
   return (neuron0x2a51140()*-0.525943);
}

double NNfunction_sb_sLdL::synapse0x2a63f30() {
   return (neuron0x2a51b10()*0.987011);
}

double NNfunction_sb_sLdL::synapse0x2a648c0() {
   return (neuron0x2a524e0()*1.55073);
}

double NNfunction_sb_sLdL::synapse0x2a64900() {
   return (neuron0x2a52eb0()*-0.0364009);
}

double NNfunction_sb_sLdL::synapse0x2a65290() {
   return (neuron0x2a54cc0()*0.972206);
}

double NNfunction_sb_sLdL::synapse0x2a652d0() {
   return (neuron0x2a54fa0()*-0.954855);
}

double NNfunction_sb_sLdL::synapse0x2a65c60() {
   return (neuron0x2a55970()*1.28864);
}

double NNfunction_sb_sLdL::synapse0x2a65ca0() {
   return (neuron0x2a56340()*0.522805);
}

double NNfunction_sb_sLdL::synapse0x2a66840() {
   return (neuron0x2a56d10()*-2.1814);
}

double NNfunction_sb_sLdL::synapse0x2a66880() {
   return (neuron0x2a576e0()*-1.95769);
}

double NNfunction_sb_sLdL::synapse0x2a67210() {
   return (neuron0x2a50230()*-1.46077);
}

double NNfunction_sb_sLdL::synapse0x2a67250() {
   return (neuron0x2a50c00()*1.66492);
}

double NNfunction_sb_sLdL::synapse0x2a58090() {
   return (neuron0x2a5a470()*-5.1563);
}

double NNfunction_sb_sLdL::synapse0x2a580d0() {
   return (neuron0x2a5ae40()*1.36022);
}

double NNfunction_sb_sLdL::synapse0x2a58a60() {
   return (neuron0x2a5b810()*1.78919);
}

double NNfunction_sb_sLdL::synapse0x2a58aa0() {
   return (neuron0x2a5c1e0()*0.912173);
}

double NNfunction_sb_sLdL::synapse0x2a59430() {
   return (neuron0x2a5cbb0()*-1.39875);
}

double NNfunction_sb_sLdL::synapse0x2a59470() {
   return (neuron0x2a5d580()*1.18967);
}

double NNfunction_sb_sLdL::synapse0x2a6b950() {
   return (neuron0x2a5df50()*-1.27685);
}

double NNfunction_sb_sLdL::synapse0x2a6b990() {
   return (neuron0x2a5e920()*2.12584);
}

double NNfunction_sb_sLdL::synapse0x2a6c320() {
   return (neuron0x2a549b0()*2.05959);
}

double NNfunction_sb_sLdL::synapse0x2a6c360() {
   return (neuron0x2a61500()*1.18788);
}

double NNfunction_sb_sLdL::synapse0x2a6ccf0() {
   return (neuron0x2a61ed0()*1.74574);
}

double NNfunction_sb_sLdL::synapse0x2a6cd30() {
   return (neuron0x2a628a0()*1.15781);
}

double NNfunction_sb_sLdL::synapse0x2a6d6c0() {
   return (neuron0x2a63270()*-2.01458);
}

double NNfunction_sb_sLdL::synapse0x2a6d700() {
   return (neuron0x2a63c40()*1.46909);
}

double NNfunction_sb_sLdL::synapse0x2a495b0() {
   return (neuron0x2a64610()*1.95347);
}

double NNfunction_sb_sLdL::synapse0x2a495f0() {
   return (neuron0x2a64fe0()*1.01364);
}

double NNfunction_sb_sLdL::synapse0x2a5ce60() {
   return (neuron0x2a659b0()*-1.96419);
}

double NNfunction_sb_sLdL::synapse0x2a5cea0() {
   return (neuron0x2a66590()*-2.0203);
}

double NNfunction_sb_sLdL::synapse0x2a6dde0() {
   return (neuron0x2a66f60()*1.77499);
}

double NNfunction_sb_sLdL::synapse0x2a6de20() {
   return (neuron0x2a57de0()*1.39701);
}

double NNfunction_sb_sLdL::synapse0x2a6de60() {
   return (neuron0x2a587b0()*-1.79517);
}

double NNfunction_sb_sLdL::synapse0x2a6dea0() {
   return (neuron0x2a59180()*1.43386);
}

double NNfunction_sb_sLdL::synapse0x2a74d50() {
   return (neuron0x2a6b7c0()*-1.671);
}

double NNfunction_sb_sLdL::synapse0x2a74d90() {
   return (neuron0x2a6c070()*-1.49085);
}

double NNfunction_sb_sLdL::synapse0x2a74dd0() {
   return (neuron0x2a6ca40()*-1.14697);
}

double NNfunction_sb_sLdL::synapse0x2a74e10() {
   return (neuron0x2a6d410()*-1.15848);
}

double NNfunction_sb_sLdL::synapse0x2a75190() {
   return (neuron0x2a49390()*-0.0933504);
}

double NNfunction_sb_sLdL::synapse0x2a751d0() {
   return (neuron0x2a49ce0()*-0.0772967);
}

double NNfunction_sb_sLdL::synapse0x2a75210() {
   return (neuron0x2a4a7c0()*-0.00122147);
}

double NNfunction_sb_sLdL::synapse0x2a75250() {
   return (neuron0x2a4a260()*-2.06028);
}

double NNfunction_sb_sLdL::synapse0x2a75290() {
   return (neuron0x2a4b5a0()*0.0507413);
}

double NNfunction_sb_sLdL::synapse0x2a752d0() {
   return (neuron0x2a4bf70()*0.088115);
}

double NNfunction_sb_sLdL::synapse0x2a75310() {
   return (neuron0x2a4cd40()*-0.0410284);
}

double NNfunction_sb_sLdL::synapse0x2a75350() {
   return (neuron0x2a4d710()*0.0273105);
}

double NNfunction_sb_sLdL::synapse0x2a75390() {
   return (neuron0x2a4e0e0()*1.34078);
}

double NNfunction_sb_sLdL::synapse0x2a753d0() {
   return (neuron0x2a4ebc0()*-0.0596654);
}

double NNfunction_sb_sLdL::synapse0x2a75410() {
   return (neuron0x2a4f590()*3.15367);
}

double NNfunction_sb_sLdL::synapse0x2a75450() {
   return (neuron0x2a4c670()*0.346214);
}

double NNfunction_sb_sLdL::synapse0x2a75490() {
   return (neuron0x2a51140()*0.235587);
}

double NNfunction_sb_sLdL::synapse0x2a754d0() {
   return (neuron0x2a51b10()*-1.69847);
}

double NNfunction_sb_sLdL::synapse0x2a75510() {
   return (neuron0x2a524e0()*0.060788);
}

double NNfunction_sb_sLdL::synapse0x2a75550() {
   return (neuron0x2a52eb0()*0.905859);
}

double NNfunction_sb_sLdL::synapse0x2a74fe0() {
   return (neuron0x2a54cc0()*0.0166431);
}

double NNfunction_sb_sLdL::synapse0x2a75020() {
   return (neuron0x2a54fa0()*1.1792);
}

double NNfunction_sb_sLdL::synapse0x2a756a0() {
   return (neuron0x2a55970()*0.0850956);
}

double NNfunction_sb_sLdL::synapse0x2a756e0() {
   return (neuron0x2a56340()*-0.544311);
}

double NNfunction_sb_sLdL::synapse0x2a75720() {
   return (neuron0x2a56d10()*-0.0971866);
}

double NNfunction_sb_sLdL::synapse0x2a75760() {
   return (neuron0x2a576e0()*0.78775);
}

double NNfunction_sb_sLdL::synapse0x2a757a0() {
   return (neuron0x2a50230()*-0.0844082);
}

double NNfunction_sb_sLdL::synapse0x2a757e0() {
   return (neuron0x2a50c00()*0.0299491);
}

double NNfunction_sb_sLdL::synapse0x2a75820() {
   return (neuron0x2a5a470()*0.255986);
}

double NNfunction_sb_sLdL::synapse0x2a75860() {
   return (neuron0x2a5ae40()*-0.000722204);
}

double NNfunction_sb_sLdL::synapse0x2a758a0() {
   return (neuron0x2a5b810()*0.0662119);
}

double NNfunction_sb_sLdL::synapse0x2a758e0() {
   return (neuron0x2a5c1e0()*-4.00159);
}

double NNfunction_sb_sLdL::synapse0x2a75920() {
   return (neuron0x2a5cbb0()*1.571);
}

double NNfunction_sb_sLdL::synapse0x2a75960() {
   return (neuron0x2a5d580()*0.0783072);
}

double NNfunction_sb_sLdL::synapse0x2a759a0() {
   return (neuron0x2a5df50()*-0.0207677);
}

double NNfunction_sb_sLdL::synapse0x2a759e0() {
   return (neuron0x2a5e920()*-0.411334);
}

double NNfunction_sb_sLdL::synapse0x2a75590() {
   return (neuron0x2a549b0()*0.0995376);
}

double NNfunction_sb_sLdL::synapse0x2a755d0() {
   return (neuron0x2a61500()*0.11954);
}

double NNfunction_sb_sLdL::synapse0x2a75610() {
   return (neuron0x2a61ed0()*0.0514301);
}

double NNfunction_sb_sLdL::synapse0x2a75650() {
   return (neuron0x2a628a0()*0.0256014);
}

double NNfunction_sb_sLdL::synapse0x2a75c30() {
   return (neuron0x2a63270()*-0.0909675);
}

double NNfunction_sb_sLdL::synapse0x2a75c70() {
   return (neuron0x2a63c40()*0.0599357);
}

double NNfunction_sb_sLdL::synapse0x2a75cb0() {
   return (neuron0x2a64610()*0.0495366);
}

double NNfunction_sb_sLdL::synapse0x2a75cf0() {
   return (neuron0x2a64fe0()*0.147085);
}

double NNfunction_sb_sLdL::synapse0x2a75d30() {
   return (neuron0x2a659b0()*0.0299359);
}

double NNfunction_sb_sLdL::synapse0x2a75d70() {
   return (neuron0x2a66590()*-0.0109894);
}

double NNfunction_sb_sLdL::synapse0x2a75db0() {
   return (neuron0x2a66f60()*0.0293104);
}

double NNfunction_sb_sLdL::synapse0x2a75df0() {
   return (neuron0x2a57de0()*-0.15664);
}

double NNfunction_sb_sLdL::synapse0x2a75e30() {
   return (neuron0x2a587b0()*-0.0280804);
}

double NNfunction_sb_sLdL::synapse0x2a75e70() {
   return (neuron0x2a59180()*0.168472);
}

double NNfunction_sb_sLdL::synapse0x2a75eb0() {
   return (neuron0x2a6b7c0()*-0.0673033);
}

double NNfunction_sb_sLdL::synapse0x2a75ef0() {
   return (neuron0x2a6c070()*0.921586);
}

double NNfunction_sb_sLdL::synapse0x2a75f30() {
   return (neuron0x2a6ca40()*1.37602);
}

double NNfunction_sb_sLdL::synapse0x2a75f70() {
   return (neuron0x2a6d410()*3.21731);
}

double NNfunction_sb_sLdL::synapse0x2a762f0() {
   return (neuron0x2a49390()*-0.319844);
}

double NNfunction_sb_sLdL::synapse0x2a76330() {
   return (neuron0x2a49ce0()*-0.124802);
}

double NNfunction_sb_sLdL::synapse0x2a76370() {
   return (neuron0x2a4a7c0()*-0.0639786);
}

double NNfunction_sb_sLdL::synapse0x2a763b0() {
   return (neuron0x2a4a260()*-0.776264);
}

double NNfunction_sb_sLdL::synapse0x2a763f0() {
   return (neuron0x2a4b5a0()*0.277729);
}

double NNfunction_sb_sLdL::synapse0x2a76430() {
   return (neuron0x2a4bf70()*0.0864876);
}

double NNfunction_sb_sLdL::synapse0x2a76470() {
   return (neuron0x2a4cd40()*-0.456949);
}

double NNfunction_sb_sLdL::synapse0x2a764b0() {
   return (neuron0x2a4d710()*0.348002);
}

double NNfunction_sb_sLdL::synapse0x2a764f0() {
   return (neuron0x2a4e0e0()*1.50018);
}

double NNfunction_sb_sLdL::synapse0x2a76530() {
   return (neuron0x2a4ebc0()*-0.176637);
}

double NNfunction_sb_sLdL::synapse0x2a76570() {
   return (neuron0x2a4f590()*2.17194);
}

double NNfunction_sb_sLdL::synapse0x2a765b0() {
   return (neuron0x2a4c670()*-1.12211);
}

double NNfunction_sb_sLdL::synapse0x2a765f0() {
   return (neuron0x2a51140()*-0.0945513);
}

double NNfunction_sb_sLdL::synapse0x2a76630() {
   return (neuron0x2a51b10()*-1.8064);
}

double NNfunction_sb_sLdL::synapse0x2a76670() {
   return (neuron0x2a524e0()*0.210549);
}

double NNfunction_sb_sLdL::synapse0x2a766b0() {
   return (neuron0x2a52eb0()*1.20929);
}

double NNfunction_sb_sLdL::synapse0x2a76140() {
   return (neuron0x2a54cc0()*0.0724236);
}

double NNfunction_sb_sLdL::synapse0x2a76180() {
   return (neuron0x2a54fa0()*0.0905373);
}

double NNfunction_sb_sLdL::synapse0x2a76800() {
   return (neuron0x2a55970()*0.294775);
}

double NNfunction_sb_sLdL::synapse0x2a76840() {
   return (neuron0x2a56340()*0.061174);
}

double NNfunction_sb_sLdL::synapse0x2a76880() {
   return (neuron0x2a56d10()*-0.46697);
}

double NNfunction_sb_sLdL::synapse0x2a768c0() {
   return (neuron0x2a576e0()*-0.746093);
}

double NNfunction_sb_sLdL::synapse0x2a76900() {
   return (neuron0x2a50230()*-0.221294);
}

double NNfunction_sb_sLdL::synapse0x2a76940() {
   return (neuron0x2a50c00()*0.255004);
}

double NNfunction_sb_sLdL::synapse0x2a76980() {
   return (neuron0x2a5a470()*-0.584444);
}

double NNfunction_sb_sLdL::synapse0x2a769c0() {
   return (neuron0x2a5ae40()*0.22574);
}

double NNfunction_sb_sLdL::synapse0x2a76a00() {
   return (neuron0x2a5b810()*0.354387);
}

double NNfunction_sb_sLdL::synapse0x2a76a40() {
   return (neuron0x2a5c1e0()*-1.845);
}

double NNfunction_sb_sLdL::synapse0x2a76a80() {
   return (neuron0x2a5cbb0()*0.301301);
}

double NNfunction_sb_sLdL::synapse0x2a76ac0() {
   return (neuron0x2a5d580()*0.269251);
}

double NNfunction_sb_sLdL::synapse0x2a76b00() {
   return (neuron0x2a5df50()*-0.203916);
}

double NNfunction_sb_sLdL::synapse0x2a76b40() {
   return (neuron0x2a5e920()*0.529283);
}

double NNfunction_sb_sLdL::synapse0x2a766f0() {
   return (neuron0x2a549b0()*0.294686);
}

double NNfunction_sb_sLdL::synapse0x2a76730() {
   return (neuron0x2a61500()*0.140704);
}

double NNfunction_sb_sLdL::synapse0x2a76770() {
   return (neuron0x2a61ed0()*0.291175);
}

double NNfunction_sb_sLdL::synapse0x2a767b0() {
   return (neuron0x2a628a0()*0.243763);
}

double NNfunction_sb_sLdL::synapse0x2a76d90() {
   return (neuron0x2a63270()*-0.307174);
}

double NNfunction_sb_sLdL::synapse0x2a76dd0() {
   return (neuron0x2a63c40()*0.222722);
}

double NNfunction_sb_sLdL::synapse0x2a76e10() {
   return (neuron0x2a64610()*0.3356);
}

double NNfunction_sb_sLdL::synapse0x2a76e50() {
   return (neuron0x2a64fe0()*0.210086);
}

double NNfunction_sb_sLdL::synapse0x2a76e90() {
   return (neuron0x2a659b0()*-0.382701);
}

double NNfunction_sb_sLdL::synapse0x2a76ed0() {
   return (neuron0x2a66590()*-0.29726);
}

double NNfunction_sb_sLdL::synapse0x2a76f10() {
   return (neuron0x2a66f60()*0.303434);
}

double NNfunction_sb_sLdL::synapse0x2a76f50() {
   return (neuron0x2a57de0()*0.509373);
}

double NNfunction_sb_sLdL::synapse0x2a76f90() {
   return (neuron0x2a587b0()*-0.209791);
}

double NNfunction_sb_sLdL::synapse0x2a76fd0() {
   return (neuron0x2a59180()*0.246339);
}

double NNfunction_sb_sLdL::synapse0x2a77010() {
   return (neuron0x2a6b7c0()*-0.259978);
}

double NNfunction_sb_sLdL::synapse0x2a77050() {
   return (neuron0x2a6c070()*1.67145);
}

double NNfunction_sb_sLdL::synapse0x2a77090() {
   return (neuron0x2a6ca40()*0.333068);
}

double NNfunction_sb_sLdL::synapse0x2a770d0() {
   return (neuron0x2a6d410()*1.08666);
}

double NNfunction_sb_sLdL::synapse0x2a77450() {
   return (neuron0x2a49390()*-0.201984);
}

double NNfunction_sb_sLdL::synapse0x2a77490() {
   return (neuron0x2a49ce0()*-0.0759339);
}

double NNfunction_sb_sLdL::synapse0x2a774d0() {
   return (neuron0x2a4a7c0()*0.00479741);
}

double NNfunction_sb_sLdL::synapse0x2a77510() {
   return (neuron0x2a4a260()*-0.168515);
}

double NNfunction_sb_sLdL::synapse0x2a77550() {
   return (neuron0x2a4b5a0()*0.0591805);
}

double NNfunction_sb_sLdL::synapse0x2a77590() {
   return (neuron0x2a4bf70()*0.0498064);
}

double NNfunction_sb_sLdL::synapse0x2a775d0() {
   return (neuron0x2a4cd40()*-0.289723);
}

double NNfunction_sb_sLdL::synapse0x2a77610() {
   return (neuron0x2a4d710()*0.19666);
}

double NNfunction_sb_sLdL::synapse0x2a77650() {
   return (neuron0x2a4e0e0()*-0.635925);
}

double NNfunction_sb_sLdL::synapse0x2a77690() {
   return (neuron0x2a4ebc0()*-0.103364);
}

double NNfunction_sb_sLdL::synapse0x2a776d0() {
   return (neuron0x2a4f590()*-1.01021);
}

double NNfunction_sb_sLdL::synapse0x2a77710() {
   return (neuron0x2a4c670()*0.848716);
}

double NNfunction_sb_sLdL::synapse0x2a77750() {
   return (neuron0x2a51140()*-0.911887);
}

double NNfunction_sb_sLdL::synapse0x2a77790() {
   return (neuron0x2a51b10()*0.667551);
}

double NNfunction_sb_sLdL::synapse0x2a777d0() {
   return (neuron0x2a524e0()*0.127834);
}

double NNfunction_sb_sLdL::synapse0x2a77810() {
   return (neuron0x2a52eb0()*-1.19275);
}

double NNfunction_sb_sLdL::synapse0x2a772a0() {
   return (neuron0x2a54cc0()*0.0264958);
}

double NNfunction_sb_sLdL::synapse0x2a772e0() {
   return (neuron0x2a54fa0()*-0.10705);
}

double NNfunction_sb_sLdL::synapse0x2a77960() {
   return (neuron0x2a55970()*0.181177);
}

double NNfunction_sb_sLdL::synapse0x2a779a0() {
   return (neuron0x2a56340()*-0.187143);
}

double NNfunction_sb_sLdL::synapse0x2a779e0() {
   return (neuron0x2a56d10()*-0.288834);
}

double NNfunction_sb_sLdL::synapse0x2a77a20() {
   return (neuron0x2a576e0()*-0.387074);
}

double NNfunction_sb_sLdL::synapse0x2a77a60() {
   return (neuron0x2a50230()*-0.135915);
}

double NNfunction_sb_sLdL::synapse0x2a77aa0() {
   return (neuron0x2a50c00()*0.135031);
}

double NNfunction_sb_sLdL::synapse0x2a77ae0() {
   return (neuron0x2a5a470()*0.234458);
}

double NNfunction_sb_sLdL::synapse0x2a77b20() {
   return (neuron0x2a5ae40()*0.136227);
}

double NNfunction_sb_sLdL::synapse0x2a77b60() {
   return (neuron0x2a5b810()*0.186579);
}

double NNfunction_sb_sLdL::synapse0x2a77ba0() {
   return (neuron0x2a5c1e0()*1.09107);
}

double NNfunction_sb_sLdL::synapse0x2a77be0() {
   return (neuron0x2a5cbb0()*0.596091);
}

double NNfunction_sb_sLdL::synapse0x2a77c20() {
   return (neuron0x2a5d580()*0.153473);
}

double NNfunction_sb_sLdL::synapse0x2a77c60() {
   return (neuron0x2a5df50()*-0.136284);
}

double NNfunction_sb_sLdL::synapse0x2a77ca0() {
   return (neuron0x2a5e920()*0.175559);
}

double NNfunction_sb_sLdL::synapse0x2a77850() {
   return (neuron0x2a549b0()*0.180311);
}

double NNfunction_sb_sLdL::synapse0x2a77890() {
   return (neuron0x2a61500()*0.0936574);
}

double NNfunction_sb_sLdL::synapse0x2a778d0() {
   return (neuron0x2a61ed0()*0.175361);
}

double NNfunction_sb_sLdL::synapse0x2a77910() {
   return (neuron0x2a628a0()*0.147274);
}

double NNfunction_sb_sLdL::synapse0x2a77ef0() {
   return (neuron0x2a63270()*-0.184365);
}

double NNfunction_sb_sLdL::synapse0x2a77f30() {
   return (neuron0x2a63c40()*0.13412);
}

double NNfunction_sb_sLdL::synapse0x2a77f70() {
   return (neuron0x2a64610()*0.183711);
}

double NNfunction_sb_sLdL::synapse0x2a77fb0() {
   return (neuron0x2a64fe0()*0.150071);
}

double NNfunction_sb_sLdL::synapse0x2a77ff0() {
   return (neuron0x2a659b0()*-0.189922);
}

double NNfunction_sb_sLdL::synapse0x2a78030() {
   return (neuron0x2a66590()*-0.136321);
}

double NNfunction_sb_sLdL::synapse0x2a78070() {
   return (neuron0x2a66f60()*0.157786);
}

double NNfunction_sb_sLdL::synapse0x2a780b0() {
   return (neuron0x2a57de0()*0.243338);
}

double NNfunction_sb_sLdL::synapse0x2a780f0() {
   return (neuron0x2a587b0()*-0.10216);
}

double NNfunction_sb_sLdL::synapse0x2a78130() {
   return (neuron0x2a59180()*0.188661);
}

double NNfunction_sb_sLdL::synapse0x2a78170() {
   return (neuron0x2a6b7c0()*-0.134826);
}

double NNfunction_sb_sLdL::synapse0x2a781b0() {
   return (neuron0x2a6c070()*-0.375467);
}

double NNfunction_sb_sLdL::synapse0x2a781f0() {
   return (neuron0x2a6ca40()*-0.622195);
}

double NNfunction_sb_sLdL::synapse0x2a78230() {
   return (neuron0x2a6d410()*-0.796858);
}

double NNfunction_sb_sLdL::synapse0x2a78490() {
   return (neuron0x2a74610()*0.429267);
}

double NNfunction_sb_sLdL::synapse0x2a784d0() {
   return (neuron0x2a749b0()*7.60257);
}

double NNfunction_sb_sLdL::synapse0x2a78510() {
   return (neuron0x2a74e50()*-6.0914);
}

double NNfunction_sb_sLdL::synapse0x2a78550() {
   return (neuron0x2a75fb0()*-4.89324);
}

double NNfunction_sb_sLdL::synapse0x2a78590() {
   return (neuron0x2a77110()*4.47031);
}

