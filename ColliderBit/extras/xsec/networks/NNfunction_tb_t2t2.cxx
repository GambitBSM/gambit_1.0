#include "NNfunction_tb_t2t2.h"
#include <cmath>

double NNfunction_tb_t2t2::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5399)/15.2573;
   input1 = (in1 - 35.1978)/938.141;
   input2 = (in2 - 491.558)/545.17;
   input3 = (in3 - 169.334)/747.811;
   input4 = (in4 - 887.586)/813.966;
   input5 = (in5 - 806.455)/811.098;
   input6 = (in6 - 811.494)/811.085;
   input7 = (in7 - 811.229)/797.584;
   input8 = (in8 - 809.393)/821.542;
   input9 = (in9 - 797.682)/804.765;
   input10 = (in10 - 817.587)/809.886;
   input11 = (in11 - 755.4)/719.661;
   input12 = (in12 - 755.106)/717.606;
   input13 = (in13 - 475.586)/318.072;
   input14 = (in14 - 761.927)/693.475;
   input15 = (in15 - 764.144)/695.231;
   input16 = (in16 - 421.521)/283.361;
   input17 = (in17 - 773.084)/740.349;
   input18 = (in18 - 773.647)/744.792;
   input19 = (in19 - 770.77)/709.178;
   input20 = (in20 - -150.322)/427.886;
   input21 = (in21 - -191.52)/1044.52;
   input22 = (in22 - -8.48499)/1058.58;
   input23 = (in23 - -81.3272)/552.744;
   switch(index) {
     case 0:
         return neuron0x3d9ec70();
     default:
         return 0.;
   }
}

double NNfunction_tb_t2t2::Value(int index, double* input) {
   input0 = (input[0] - 23.5399)/15.2573;
   input1 = (input[1] - 35.1978)/938.141;
   input2 = (input[2] - 491.558)/545.17;
   input3 = (input[3] - 169.334)/747.811;
   input4 = (input[4] - 887.586)/813.966;
   input5 = (input[5] - 806.455)/811.098;
   input6 = (input[6] - 811.494)/811.085;
   input7 = (input[7] - 811.229)/797.584;
   input8 = (input[8] - 809.393)/821.542;
   input9 = (input[9] - 797.682)/804.765;
   input10 = (input[10] - 817.587)/809.886;
   input11 = (input[11] - 755.4)/719.661;
   input12 = (input[12] - 755.106)/717.606;
   input13 = (input[13] - 475.586)/318.072;
   input14 = (input[14] - 761.927)/693.475;
   input15 = (input[15] - 764.144)/695.231;
   input16 = (input[16] - 421.521)/283.361;
   input17 = (input[17] - 773.084)/740.349;
   input18 = (input[18] - 773.647)/744.792;
   input19 = (input[19] - 770.77)/709.178;
   input20 = (input[20] - -150.322)/427.886;
   input21 = (input[21] - -191.52)/1044.52;
   input22 = (input[22] - -8.48499)/1058.58;
   input23 = (input[23] - -81.3272)/552.744;
   switch(index) {
     case 0:
         return neuron0x3d9ec70();
     default:
         return 0.;
   }
}

double NNfunction_tb_t2t2::neuron0x3d69ce0() {
   return input0;
}

double NNfunction_tb_t2t2::neuron0x3d69f90() {
   return input1;
}

double NNfunction_tb_t2t2::neuron0x3d6a2d0() {
   return input2;
}

double NNfunction_tb_t2t2::neuron0x3d6a610() {
   return input3;
}

double NNfunction_tb_t2t2::neuron0x3d6a950() {
   return input4;
}

double NNfunction_tb_t2t2::neuron0x3d6ac90() {
   return input5;
}

double NNfunction_tb_t2t2::neuron0x3d6afd0() {
   return input6;
}

double NNfunction_tb_t2t2::neuron0x3d6b310() {
   return input7;
}

double NNfunction_tb_t2t2::neuron0x3d6b650() {
   return input8;
}

double NNfunction_tb_t2t2::neuron0x3d6b990() {
   return input9;
}

double NNfunction_tb_t2t2::neuron0x3d6bcd0() {
   return input10;
}

double NNfunction_tb_t2t2::neuron0x3d6c010() {
   return input11;
}

double NNfunction_tb_t2t2::neuron0x3d6c350() {
   return input12;
}

double NNfunction_tb_t2t2::neuron0x3d6c690() {
   return input13;
}

double NNfunction_tb_t2t2::neuron0x3d6c9d0() {
   return input14;
}

double NNfunction_tb_t2t2::neuron0x3d6cd10() {
   return input15;
}

double NNfunction_tb_t2t2::neuron0x3d6d050() {
   return input16;
}

double NNfunction_tb_t2t2::neuron0x3d6d5b0() {
   return input17;
}

double NNfunction_tb_t2t2::neuron0x3d6d8f0() {
   return input18;
}

double NNfunction_tb_t2t2::neuron0x3d6dc30() {
   return input19;
}

double NNfunction_tb_t2t2::neuron0x3d6df70() {
   return input20;
}

double NNfunction_tb_t2t2::neuron0x3d6e2b0() {
   return input21;
}

double NNfunction_tb_t2t2::neuron0x3d6e5f0() {
   return input22;
}

double NNfunction_tb_t2t2::neuron0x3d6e930() {
   return input23;
}

double NNfunction_tb_t2t2::input0x3d6eda0() {
   double input = -0.999343;
   input += synapse0x3d6f0e0();
   input += synapse0x3d6f120();
   input += synapse0x3d6f160();
   input += synapse0x3d6f1a0();
   input += synapse0x3d6f1e0();
   input += synapse0x3d6f220();
   input += synapse0x3d6f260();
   input += synapse0x3d6f2a0();
   input += synapse0x3d6f2e0();
   input += synapse0x3d6f320();
   input += synapse0x3d6f360();
   input += synapse0x3d6f3a0();
   input += synapse0x3d6f3e0();
   input += synapse0x3d6f420();
   input += synapse0x3d6f460();
   input += synapse0x3d6f4a0();
   input += synapse0x3d6ef30();
   input += synapse0x3d6ef70();
   input += synapse0x3b25fa0();
   input += synapse0x3b25fe0();
   input += synapse0x3d6f4e0();
   input += synapse0x3d6f520();
   input += synapse0x3d6f560();
   input += synapse0x3d6f5a0();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d6eda0() {
   double input = input0x3d6eda0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d6f5e0() {
   double input = -0.274534;
   input += synapse0x3d6f920();
   input += synapse0x3d6f960();
   input += synapse0x3d6f9a0();
   input += synapse0x3d6f9e0();
   input += synapse0x3d6fa20();
   input += synapse0x3d6fa60();
   input += synapse0x3d6faa0();
   input += synapse0x3d6fae0();
   input += synapse0x3d6fb20();
   input += synapse0x3b25df0();
   input += synapse0x3b25e30();
   input += synapse0x3b25e70();
   input += synapse0x3b25eb0();
   input += synapse0x3d6fd70();
   input += synapse0x3d6fdb0();
   input += synapse0x3d6fdf0();
   input += synapse0x3d6f770();
   input += synapse0x3d6f7b0();
   input += synapse0x3d6ff40();
   input += synapse0x3d6ff80();
   input += synapse0x3d6ffc0();
   input += synapse0x3d70000();
   input += synapse0x3d70040();
   input += synapse0x3d70080();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d6f5e0() {
   double input = input0x3d6f5e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d700c0() {
   double input = 1.08708;
   input += synapse0x3d70400();
   input += synapse0x3d70440();
   input += synapse0x3d70480();
   input += synapse0x3d704c0();
   input += synapse0x3d70500();
   input += synapse0x3d70540();
   input += synapse0x3d70580();
   input += synapse0x3d705c0();
   input += synapse0x3d70600();
   input += synapse0x3d70640();
   input += synapse0x3d70680();
   input += synapse0x3d706c0();
   input += synapse0x3d70700();
   input += synapse0x3d70740();
   input += synapse0x3d70780();
   input += synapse0x3d707c0();
   input += synapse0x3d70250();
   input += synapse0x3d70290();
   input += synapse0x3b252b0();
   input += synapse0x3b33d90();
   input += synapse0x3b33dd0();
   input += synapse0x3d726f0();
   input += synapse0x3d72730();
   input += synapse0x3d69a20();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d700c0() {
   double input = input0x3d700c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d6fb60() {
   double input = -1.68909;
   input += synapse0x3d69af0();
   input += synapse0x3b34610();
   input += synapse0x3d6fcf0();
   input += synapse0x3d6fd30();
   input += synapse0x3d70910();
   input += synapse0x3d70950();
   input += synapse0x3d70990();
   input += synapse0x3d709d0();
   input += synapse0x3d70a10();
   input += synapse0x3d70a50();
   input += synapse0x3d70a90();
   input += synapse0x3d70ad0();
   input += synapse0x3d70b10();
   input += synapse0x3d70b50();
   input += synapse0x3d70b90();
   input += synapse0x3d70bd0();
   input += synapse0x3d69a60();
   input += synapse0x3d69aa0();
   input += synapse0x3d70d20();
   input += synapse0x3d70d60();
   input += synapse0x3d70da0();
   input += synapse0x3d70de0();
   input += synapse0x3d70e20();
   input += synapse0x3d70e60();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d6fb60() {
   double input = input0x3d6fb60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d70ea0() {
   double input = 0.209079;
   input += synapse0x3d711e0();
   input += synapse0x3d71220();
   input += synapse0x3d71260();
   input += synapse0x3d712a0();
   input += synapse0x3d712e0();
   input += synapse0x3d71320();
   input += synapse0x3d71360();
   input += synapse0x3d713a0();
   input += synapse0x3d713e0();
   input += synapse0x3d71420();
   input += synapse0x3d71460();
   input += synapse0x3d714a0();
   input += synapse0x3d714e0();
   input += synapse0x3d71520();
   input += synapse0x3d71560();
   input += synapse0x3d715a0();
   input += synapse0x3d716f0();
   input += synapse0x3d71030();
   input += synapse0x3d71070();
   input += synapse0x3d72830();
   input += synapse0x3d72870();
   input += synapse0x3d728b0();
   input += synapse0x3d728f0();
   input += synapse0x3d72930();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d70ea0() {
   double input = input0x3d70ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d72970() {
   double input = -1.51919;
   input += synapse0x3d72cb0();
   input += synapse0x3d72cf0();
   input += synapse0x3d72d30();
   input += synapse0x3d72d70();
   input += synapse0x3d72db0();
   input += synapse0x3d72df0();
   input += synapse0x3d72e30();
   input += synapse0x3d72e70();
   input += synapse0x3d72eb0();
   input += synapse0x3b340e0();
   input += synapse0x3b34120();
   input += synapse0x3b34160();
   input += synapse0x3b341a0();
   input += synapse0x3b341e0();
   input += synapse0x3b34220();
   input += synapse0x3b34260();
   input += synapse0x3d72b00();
   input += synapse0x3d72b40();
   input += synapse0x3b343b0();
   input += synapse0x3b343f0();
   input += synapse0x3b34430();
   input += synapse0x3b34470();
   input += synapse0x3b344b0();
   input += synapse0x3d73700();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d72970() {
   double input = input0x3d72970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d73740() {
   double input = 0.717989;
   input += synapse0x3d73a80();
   input += synapse0x3d73ac0();
   input += synapse0x3d73b00();
   input += synapse0x3d73b40();
   input += synapse0x3d73b80();
   input += synapse0x3d73bc0();
   input += synapse0x3d73c00();
   input += synapse0x3d73c40();
   input += synapse0x3d73c80();
   input += synapse0x3d73cc0();
   input += synapse0x3d73d00();
   input += synapse0x3d73d40();
   input += synapse0x3d73d80();
   input += synapse0x3d73dc0();
   input += synapse0x3d73e00();
   input += synapse0x3d73e40();
   input += synapse0x3d738d0();
   input += synapse0x3d73910();
   input += synapse0x3d73f90();
   input += synapse0x3d73fd0();
   input += synapse0x3d74010();
   input += synapse0x3d74050();
   input += synapse0x3d74090();
   input += synapse0x3d740d0();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d73740() {
   double input = input0x3d73740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d74110() {
   double input = -0.413358;
   input += synapse0x3d74450();
   input += synapse0x3d74490();
   input += synapse0x3d744d0();
   input += synapse0x3d74510();
   input += synapse0x3d74550();
   input += synapse0x3d74590();
   input += synapse0x3d745d0();
   input += synapse0x3d74610();
   input += synapse0x3d74650();
   input += synapse0x3d74690();
   input += synapse0x3d746d0();
   input += synapse0x3d74710();
   input += synapse0x3d74750();
   input += synapse0x3d74790();
   input += synapse0x3d747d0();
   input += synapse0x3d74810();
   input += synapse0x3d742a0();
   input += synapse0x3d742e0();
   input += synapse0x3d74960();
   input += synapse0x3d749a0();
   input += synapse0x3d749e0();
   input += synapse0x3d74a20();
   input += synapse0x3d74a60();
   input += synapse0x3d74aa0();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d74110() {
   double input = input0x3d74110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d74ae0() {
   double input = 0.428499;
   input += synapse0x3d6d4a0();
   input += synapse0x3d6d4e0();
   input += synapse0x3d6d520();
   input += synapse0x3d6d560();
   input += synapse0x3d75030();
   input += synapse0x3d75070();
   input += synapse0x3d750b0();
   input += synapse0x3d750f0();
   input += synapse0x3d75130();
   input += synapse0x3d75170();
   input += synapse0x3d751b0();
   input += synapse0x3d751f0();
   input += synapse0x3d75230();
   input += synapse0x3d75270();
   input += synapse0x3d752b0();
   input += synapse0x3d752f0();
   input += synapse0x3d74c70();
   input += synapse0x3d74cb0();
   input += synapse0x3d75440();
   input += synapse0x3d75480();
   input += synapse0x3d754c0();
   input += synapse0x3d75500();
   input += synapse0x3d75540();
   input += synapse0x3d75580();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d74ae0() {
   double input = input0x3d74ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d755c0() {
   double input = 1.73339;
   input += synapse0x3d75900();
   input += synapse0x3d75940();
   input += synapse0x3d75980();
   input += synapse0x3d759c0();
   input += synapse0x3d75a00();
   input += synapse0x3d75a40();
   input += synapse0x3d75a80();
   input += synapse0x3d75ac0();
   input += synapse0x3d75b00();
   input += synapse0x3d75b40();
   input += synapse0x3d75b80();
   input += synapse0x3d75bc0();
   input += synapse0x3d75c00();
   input += synapse0x3d75c40();
   input += synapse0x3d75c80();
   input += synapse0x3d75cc0();
   input += synapse0x3d75750();
   input += synapse0x3d75790();
   input += synapse0x3d75e10();
   input += synapse0x3d75e50();
   input += synapse0x3d75e90();
   input += synapse0x3d75ed0();
   input += synapse0x3d75f10();
   input += synapse0x3d75f50();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d755c0() {
   double input = input0x3d755c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d75f90() {
   double input = -0.467971;
   input += synapse0x3d762d0();
   input += synapse0x3d76310();
   input += synapse0x3d76350();
   input += synapse0x3d76390();
   input += synapse0x3d763d0();
   input += synapse0x3d76410();
   input += synapse0x3d76450();
   input += synapse0x3d76490();
   input += synapse0x3d764d0();
   input += synapse0x3d76510();
   input += synapse0x3d76550();
   input += synapse0x3d76590();
   input += synapse0x3d765d0();
   input += synapse0x3d76610();
   input += synapse0x3d76650();
   input += synapse0x3d76690();
   input += synapse0x3d76120();
   input += synapse0x3d76160();
   input += synapse0x3d72ef0();
   input += synapse0x3d72f30();
   input += synapse0x3d72f70();
   input += synapse0x3d72fb0();
   input += synapse0x3d72ff0();
   input += synapse0x3d73030();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d75f90() {
   double input = input0x3d75f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d73070() {
   double input = 1.78645;
   input += synapse0x3d733b0();
   input += synapse0x3d733f0();
   input += synapse0x3d73430();
   input += synapse0x3d73470();
   input += synapse0x3d734b0();
   input += synapse0x3d734f0();
   input += synapse0x3d73530();
   input += synapse0x3d73570();
   input += synapse0x3d735b0();
   input += synapse0x3d735f0();
   input += synapse0x3d73630();
   input += synapse0x3d73670();
   input += synapse0x3d736b0();
   input += synapse0x3d777f0();
   input += synapse0x3d77830();
   input += synapse0x3d77870();
   input += synapse0x3d73200();
   input += synapse0x3d73240();
   input += synapse0x3d779c0();
   input += synapse0x3d77a00();
   input += synapse0x3d77a40();
   input += synapse0x3d77a80();
   input += synapse0x3d77ac0();
   input += synapse0x3d77b00();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d73070() {
   double input = input0x3d73070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d77b40() {
   double input = 1.9914;
   input += synapse0x3d77e80();
   input += synapse0x3d77ec0();
   input += synapse0x3d77f00();
   input += synapse0x3d77f40();
   input += synapse0x3d77f80();
   input += synapse0x3d77fc0();
   input += synapse0x3d78000();
   input += synapse0x3d78040();
   input += synapse0x3d78080();
   input += synapse0x3d780c0();
   input += synapse0x3d78100();
   input += synapse0x3d78140();
   input += synapse0x3d78180();
   input += synapse0x3d781c0();
   input += synapse0x3d78200();
   input += synapse0x3d78240();
   input += synapse0x3d77cd0();
   input += synapse0x3d77d10();
   input += synapse0x3d78390();
   input += synapse0x3d783d0();
   input += synapse0x3d78410();
   input += synapse0x3d78450();
   input += synapse0x3d78490();
   input += synapse0x3d784d0();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d77b40() {
   double input = input0x3d77b40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d78510() {
   double input = -0.240497;
   input += synapse0x3d78850();
   input += synapse0x3d78890();
   input += synapse0x3d788d0();
   input += synapse0x3d78910();
   input += synapse0x3d78950();
   input += synapse0x3d78990();
   input += synapse0x3d789d0();
   input += synapse0x3d78a10();
   input += synapse0x3d78a50();
   input += synapse0x3d78a90();
   input += synapse0x3d78ad0();
   input += synapse0x3d78b10();
   input += synapse0x3d78b50();
   input += synapse0x3d78b90();
   input += synapse0x3d78bd0();
   input += synapse0x3d78c10();
   input += synapse0x3d786a0();
   input += synapse0x3d786e0();
   input += synapse0x3d78d60();
   input += synapse0x3d78da0();
   input += synapse0x3d78de0();
   input += synapse0x3d78e20();
   input += synapse0x3d78e60();
   input += synapse0x3d78ea0();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d78510() {
   double input = input0x3d78510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d78ee0() {
   double input = 1.99439;
   input += synapse0x3d79220();
   input += synapse0x3d79260();
   input += synapse0x3d792a0();
   input += synapse0x3d792e0();
   input += synapse0x3d79320();
   input += synapse0x3d79360();
   input += synapse0x3d793a0();
   input += synapse0x3d793e0();
   input += synapse0x3d79420();
   input += synapse0x3d79460();
   input += synapse0x3d794a0();
   input += synapse0x3d794e0();
   input += synapse0x3d79520();
   input += synapse0x3d79560();
   input += synapse0x3d795a0();
   input += synapse0x3d795e0();
   input += synapse0x3d79070();
   input += synapse0x3d790b0();
   input += synapse0x3d79730();
   input += synapse0x3d79770();
   input += synapse0x3d797b0();
   input += synapse0x3d797f0();
   input += synapse0x3d79830();
   input += synapse0x3d79870();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d78ee0() {
   double input = input0x3d78ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d798b0() {
   double input = 3.51137;
   input += synapse0x3d79bf0();
   input += synapse0x3d69e70();
   input += synapse0x3d69eb0();
   input += synapse0x3d6a1b0();
   input += synapse0x3d6a1f0();
   input += synapse0x3d6a4f0();
   input += synapse0x3d6a530();
   input += synapse0x3d6a830();
   input += synapse0x3d6a870();
   input += synapse0x3d6ab70();
   input += synapse0x3d6abb0();
   input += synapse0x3d6aeb0();
   input += synapse0x3d6aef0();
   input += synapse0x3d6b1f0();
   input += synapse0x3d6b230();
   input += synapse0x3d6b530();
   input += synapse0x3d6b570();
   input += synapse0x3d6b870();
   input += synapse0x3d6b8b0();
   input += synapse0x3d6bbb0();
   input += synapse0x3d6bbf0();
   input += synapse0x3d6bef0();
   input += synapse0x3d6bf30();
   input += synapse0x3d6c230();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d798b0() {
   double input = input0x3d798b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d7b6c0() {
   double input = 0.968424;
   input += synapse0x3d6c270();
   input += synapse0x3d6cf30();
   input += synapse0x3d6cf70();
   input += synapse0x3d79a40();
   input += synapse0x3d79a80();
   input += synapse0x3d6d270();
   input += synapse0x3d6d2b0();
   input += synapse0x3d6d7d0();
   input += synapse0x3d6d810();
   input += synapse0x3d6db10();
   input += synapse0x3d6db50();
   input += synapse0x3d6de50();
   input += synapse0x3d6de90();
   input += synapse0x3d6e190();
   input += synapse0x3d6e1d0();
   input += synapse0x3d6e4d0();
   input += synapse0x3d6e510();
   input += synapse0x3d6e810();
   input += synapse0x3d6e850();
   input += synapse0x3d6eb50();
   input += synapse0x3d6eb90();
   input += synapse0x3d6c570();
   input += synapse0x3d6c5b0();
   input += synapse0x3d7b960();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d7b6c0() {
   double input = input0x3d7b6c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d7b9a0() {
   double input = 0.994932;
   input += synapse0x3d7bce0();
   input += synapse0x3d7bd20();
   input += synapse0x3d7bd60();
   input += synapse0x3d7bda0();
   input += synapse0x3d7bde0();
   input += synapse0x3d7be20();
   input += synapse0x3d7be60();
   input += synapse0x3d7bea0();
   input += synapse0x3d7bee0();
   input += synapse0x3d7bf20();
   input += synapse0x3d7bf60();
   input += synapse0x3d7bfa0();
   input += synapse0x3d7bfe0();
   input += synapse0x3d7c020();
   input += synapse0x3d7c060();
   input += synapse0x3d7c0a0();
   input += synapse0x3d7bb30();
   input += synapse0x3d7bb70();
   input += synapse0x3d7c1f0();
   input += synapse0x3d7c230();
   input += synapse0x3d7c270();
   input += synapse0x3d7c2b0();
   input += synapse0x3d7c2f0();
   input += synapse0x3d7c330();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d7b9a0() {
   double input = input0x3d7b9a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d7c370() {
   double input = 0.79407;
   input += synapse0x3d7c6b0();
   input += synapse0x3d7c6f0();
   input += synapse0x3d7c730();
   input += synapse0x3d7c770();
   input += synapse0x3d7c7b0();
   input += synapse0x3d7c7f0();
   input += synapse0x3d7c830();
   input += synapse0x3d7c870();
   input += synapse0x3d7c8b0();
   input += synapse0x3d7c8f0();
   input += synapse0x3d7c930();
   input += synapse0x3d7c970();
   input += synapse0x3d7c9b0();
   input += synapse0x3d7c9f0();
   input += synapse0x3d7ca30();
   input += synapse0x3d7ca70();
   input += synapse0x3d7c500();
   input += synapse0x3d7c540();
   input += synapse0x3d7cbc0();
   input += synapse0x3d7cc00();
   input += synapse0x3d7cc40();
   input += synapse0x3d7cc80();
   input += synapse0x3d7ccc0();
   input += synapse0x3d7cd00();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d7c370() {
   double input = input0x3d7c370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d7cd40() {
   double input = 0.751404;
   input += synapse0x3d7d080();
   input += synapse0x3d7d0c0();
   input += synapse0x3d7d100();
   input += synapse0x3d7d140();
   input += synapse0x3d7d180();
   input += synapse0x3d7d1c0();
   input += synapse0x3d7d200();
   input += synapse0x3d7d240();
   input += synapse0x3d7d280();
   input += synapse0x3d7d2c0();
   input += synapse0x3d7d300();
   input += synapse0x3d7d340();
   input += synapse0x3d7d380();
   input += synapse0x3d7d3c0();
   input += synapse0x3d7d400();
   input += synapse0x3d7d440();
   input += synapse0x3d7ced0();
   input += synapse0x3d7cf10();
   input += synapse0x3d7d590();
   input += synapse0x3d7d5d0();
   input += synapse0x3d7d610();
   input += synapse0x3d7d650();
   input += synapse0x3d7d690();
   input += synapse0x3d7d6d0();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d7cd40() {
   double input = input0x3d7cd40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d7d710() {
   double input = 0.667767;
   input += synapse0x3d7da50();
   input += synapse0x3d7da90();
   input += synapse0x3d7dad0();
   input += synapse0x3d7db10();
   input += synapse0x3d7db50();
   input += synapse0x3d7db90();
   input += synapse0x3d7dbd0();
   input += synapse0x3d7dc10();
   input += synapse0x3d7dc50();
   input += synapse0x3d7dc90();
   input += synapse0x3d7dcd0();
   input += synapse0x3d7dd10();
   input += synapse0x3d7dd50();
   input += synapse0x3d7dd90();
   input += synapse0x3d7ddd0();
   input += synapse0x3d7de10();
   input += synapse0x3d7d8a0();
   input += synapse0x3d7d8e0();
   input += synapse0x3d7df60();
   input += synapse0x3d7dfa0();
   input += synapse0x3d7dfe0();
   input += synapse0x3d7e020();
   input += synapse0x3d7e060();
   input += synapse0x3d7e0a0();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d7d710() {
   double input = input0x3d7d710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d7e0e0() {
   double input = -1.46974;
   input += synapse0x3d7e420();
   input += synapse0x3d7e460();
   input += synapse0x3d7e4a0();
   input += synapse0x3d7e4e0();
   input += synapse0x3d7e520();
   input += synapse0x3d7e560();
   input += synapse0x3d7e5a0();
   input += synapse0x3d7e5e0();
   input += synapse0x3d7e620();
   input += synapse0x3d767e0();
   input += synapse0x3d76820();
   input += synapse0x3d76860();
   input += synapse0x3d768a0();
   input += synapse0x3d768e0();
   input += synapse0x3d76920();
   input += synapse0x3d76960();
   input += synapse0x3d7e270();
   input += synapse0x3d7e2b0();
   input += synapse0x3d76ab0();
   input += synapse0x3d76af0();
   input += synapse0x3d76b30();
   input += synapse0x3d76b70();
   input += synapse0x3d76bb0();
   input += synapse0x3d76bf0();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d7e0e0() {
   double input = input0x3d7e0e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d76c30() {
   double input = -2.03129;
   input += synapse0x3d76f70();
   input += synapse0x3d76fb0();
   input += synapse0x3d76ff0();
   input += synapse0x3d77030();
   input += synapse0x3d77070();
   input += synapse0x3d770b0();
   input += synapse0x3d770f0();
   input += synapse0x3d77130();
   input += synapse0x3d77170();
   input += synapse0x3d771b0();
   input += synapse0x3d771f0();
   input += synapse0x3d77230();
   input += synapse0x3d77270();
   input += synapse0x3d772b0();
   input += synapse0x3d772f0();
   input += synapse0x3d77330();
   input += synapse0x3d76dc0();
   input += synapse0x3d76e00();
   input += synapse0x3d77480();
   input += synapse0x3d774c0();
   input += synapse0x3d77500();
   input += synapse0x3d77540();
   input += synapse0x3d77580();
   input += synapse0x3d775c0();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d76c30() {
   double input = input0x3d76c30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d77600() {
   double input = -0.998268;
   input += synapse0x3d77790();
   input += synapse0x3d80820();
   input += synapse0x3d80860();
   input += synapse0x3d808a0();
   input += synapse0x3d808e0();
   input += synapse0x3d80920();
   input += synapse0x3d80960();
   input += synapse0x3d809a0();
   input += synapse0x3d809e0();
   input += synapse0x3d80a20();
   input += synapse0x3d80a60();
   input += synapse0x3d80aa0();
   input += synapse0x3d80ae0();
   input += synapse0x3d80b20();
   input += synapse0x3d80b60();
   input += synapse0x3d80ba0();
   input += synapse0x3d80670();
   input += synapse0x3d806b0();
   input += synapse0x3d80cf0();
   input += synapse0x3d80d30();
   input += synapse0x3d80d70();
   input += synapse0x3d80db0();
   input += synapse0x3d80df0();
   input += synapse0x3d80e30();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d77600() {
   double input = input0x3d77600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d80e70() {
   double input = 0.137715;
   input += synapse0x3d811b0();
   input += synapse0x3d811f0();
   input += synapse0x3d81230();
   input += synapse0x3d81270();
   input += synapse0x3d812b0();
   input += synapse0x3d812f0();
   input += synapse0x3d81330();
   input += synapse0x3d81370();
   input += synapse0x3d813b0();
   input += synapse0x3d813f0();
   input += synapse0x3d81430();
   input += synapse0x3d81470();
   input += synapse0x3d814b0();
   input += synapse0x3d814f0();
   input += synapse0x3d81530();
   input += synapse0x3d81570();
   input += synapse0x3d81000();
   input += synapse0x3d81040();
   input += synapse0x3d816c0();
   input += synapse0x3d81700();
   input += synapse0x3d81740();
   input += synapse0x3d81780();
   input += synapse0x3d817c0();
   input += synapse0x3d81800();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d80e70() {
   double input = input0x3d80e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d81840() {
   double input = -1.47513;
   input += synapse0x3d81b80();
   input += synapse0x3d81bc0();
   input += synapse0x3d81c00();
   input += synapse0x3d81c40();
   input += synapse0x3d81c80();
   input += synapse0x3d81cc0();
   input += synapse0x3d81d00();
   input += synapse0x3d81d40();
   input += synapse0x3d81d80();
   input += synapse0x3d81dc0();
   input += synapse0x3d81e00();
   input += synapse0x3d81e40();
   input += synapse0x3d81e80();
   input += synapse0x3d81ec0();
   input += synapse0x3d81f00();
   input += synapse0x3d81f40();
   input += synapse0x3d819d0();
   input += synapse0x3d81a10();
   input += synapse0x3d82090();
   input += synapse0x3d820d0();
   input += synapse0x3d82110();
   input += synapse0x3d82150();
   input += synapse0x3d82190();
   input += synapse0x3d821d0();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d81840() {
   double input = input0x3d81840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d82210() {
   double input = 1.17619;
   input += synapse0x3d82550();
   input += synapse0x3d82590();
   input += synapse0x3d825d0();
   input += synapse0x3d82610();
   input += synapse0x3d82650();
   input += synapse0x3d82690();
   input += synapse0x3d826d0();
   input += synapse0x3d82710();
   input += synapse0x3d82750();
   input += synapse0x3d82790();
   input += synapse0x3d827d0();
   input += synapse0x3d82810();
   input += synapse0x3d82850();
   input += synapse0x3d82890();
   input += synapse0x3d828d0();
   input += synapse0x3d82910();
   input += synapse0x3d823a0();
   input += synapse0x3d823e0();
   input += synapse0x3d82a60();
   input += synapse0x3d82aa0();
   input += synapse0x3d82ae0();
   input += synapse0x3d82b20();
   input += synapse0x3d82b60();
   input += synapse0x3d82ba0();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d82210() {
   double input = input0x3d82210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d82be0() {
   double input = -1.69171;
   input += synapse0x3d82f20();
   input += synapse0x3d82f60();
   input += synapse0x3d82fa0();
   input += synapse0x3d82fe0();
   input += synapse0x3d83020();
   input += synapse0x3d83060();
   input += synapse0x3d830a0();
   input += synapse0x3d830e0();
   input += synapse0x3d83120();
   input += synapse0x3d83160();
   input += synapse0x3d831a0();
   input += synapse0x3d831e0();
   input += synapse0x3d83220();
   input += synapse0x3d83260();
   input += synapse0x3d832a0();
   input += synapse0x3d832e0();
   input += synapse0x3d82d70();
   input += synapse0x3d82db0();
   input += synapse0x3d83430();
   input += synapse0x3d83470();
   input += synapse0x3d834b0();
   input += synapse0x3d834f0();
   input += synapse0x3d83530();
   input += synapse0x3d83570();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d82be0() {
   double input = input0x3d82be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d835b0() {
   double input = -1.50079;
   input += synapse0x3d838f0();
   input += synapse0x3d83930();
   input += synapse0x3d83970();
   input += synapse0x3d839b0();
   input += synapse0x3d839f0();
   input += synapse0x3d83a30();
   input += synapse0x3d83a70();
   input += synapse0x3d83ab0();
   input += synapse0x3d83af0();
   input += synapse0x3d83b30();
   input += synapse0x3d83b70();
   input += synapse0x3d83bb0();
   input += synapse0x3d83bf0();
   input += synapse0x3d83c30();
   input += synapse0x3d83c70();
   input += synapse0x3d83cb0();
   input += synapse0x3d83740();
   input += synapse0x3d83780();
   input += synapse0x3d83e00();
   input += synapse0x3d83e40();
   input += synapse0x3d83e80();
   input += synapse0x3d83ec0();
   input += synapse0x3d83f00();
   input += synapse0x3d83f40();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d835b0() {
   double input = input0x3d835b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d83f80() {
   double input = -1.87922;
   input += synapse0x3d842c0();
   input += synapse0x3d84300();
   input += synapse0x3d84340();
   input += synapse0x3d84380();
   input += synapse0x3d843c0();
   input += synapse0x3d84400();
   input += synapse0x3d84440();
   input += synapse0x3d84480();
   input += synapse0x3d844c0();
   input += synapse0x3d84500();
   input += synapse0x3d84540();
   input += synapse0x3d84580();
   input += synapse0x3d845c0();
   input += synapse0x3d84600();
   input += synapse0x3d84640();
   input += synapse0x3d84680();
   input += synapse0x3d84110();
   input += synapse0x3d84150();
   input += synapse0x3d847d0();
   input += synapse0x3d84810();
   input += synapse0x3d84850();
   input += synapse0x3d84890();
   input += synapse0x3d848d0();
   input += synapse0x3d84910();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d83f80() {
   double input = input0x3d83f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d84950() {
   double input = 0.64945;
   input += synapse0x3d84c90();
   input += synapse0x3d84cd0();
   input += synapse0x3d84d10();
   input += synapse0x3d84d50();
   input += synapse0x3d84d90();
   input += synapse0x3d84dd0();
   input += synapse0x3d84e10();
   input += synapse0x3d84e50();
   input += synapse0x3d84e90();
   input += synapse0x3d84ed0();
   input += synapse0x3d84f10();
   input += synapse0x3d84f50();
   input += synapse0x3d84f90();
   input += synapse0x3d84fd0();
   input += synapse0x3d85010();
   input += synapse0x3d85050();
   input += synapse0x3d84ae0();
   input += synapse0x3d84b20();
   input += synapse0x3d851a0();
   input += synapse0x3d851e0();
   input += synapse0x3d85220();
   input += synapse0x3d85260();
   input += synapse0x3d852a0();
   input += synapse0x3d852e0();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d84950() {
   double input = input0x3d84950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d85320() {
   double input = 0.462165;
   input += synapse0x3d85660();
   input += synapse0x3d79c30();
   input += synapse0x3d79c70();
   input += synapse0x3d79cb0();
   input += synapse0x3d79f00();
   input += synapse0x3d79f40();
   input += synapse0x3d79f80();
   input += synapse0x3d7a1d0();
   input += synapse0x3d7a210();
   input += synapse0x3d7a460();
   input += synapse0x3d7a4a0();
   input += synapse0x3d7a4e0();
   input += synapse0x3d7a730();
   input += synapse0x3d7a770();
   input += synapse0x3d7a9c0();
   input += synapse0x3d7aa00();
   input += synapse0x3d854b0();
   input += synapse0x3d854f0();
   input += synapse0x3d7ab50();
   input += synapse0x3d7b060();
   input += synapse0x3d7b0a0();
   input += synapse0x3d7b0e0();
   input += synapse0x3d7b330();
   input += synapse0x3d7b370();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d85320() {
   double input = input0x3d85320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d7b3b0() {
   double input = -0.0292515;
   input += synapse0x3d7ac20();
   input += synapse0x3d7ac60();
   input += synapse0x3d7aca0();
   input += synapse0x3d7ace0();
   input += synapse0x3d7b660();
   input += synapse0x3d879b0();
   input += synapse0x3d879f0();
   input += synapse0x3d87a30();
   input += synapse0x3d87a70();
   input += synapse0x3d87ab0();
   input += synapse0x3d87af0();
   input += synapse0x3d87b30();
   input += synapse0x3d87b70();
   input += synapse0x3d87bb0();
   input += synapse0x3d87bf0();
   input += synapse0x3d87c30();
   input += synapse0x3d7b540();
   input += synapse0x3d7b580();
   input += synapse0x3d87d80();
   input += synapse0x3d87dc0();
   input += synapse0x3d87e00();
   input += synapse0x3d87e40();
   input += synapse0x3d87e80();
   input += synapse0x3d87ec0();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d7b3b0() {
   double input = input0x3d7b3b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d87f00() {
   double input = 0.919293;
   input += synapse0x3d88240();
   input += synapse0x3d88280();
   input += synapse0x3d882c0();
   input += synapse0x3d88300();
   input += synapse0x3d88340();
   input += synapse0x3d88380();
   input += synapse0x3d883c0();
   input += synapse0x3d88400();
   input += synapse0x3d88440();
   input += synapse0x3d88480();
   input += synapse0x3d884c0();
   input += synapse0x3d88500();
   input += synapse0x3d88540();
   input += synapse0x3d88580();
   input += synapse0x3d885c0();
   input += synapse0x3d88600();
   input += synapse0x3d88090();
   input += synapse0x3d880d0();
   input += synapse0x3d88750();
   input += synapse0x3d88790();
   input += synapse0x3d887d0();
   input += synapse0x3d88810();
   input += synapse0x3d88850();
   input += synapse0x3d88890();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d87f00() {
   double input = input0x3d87f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d888d0() {
   double input = 0.0940875;
   input += synapse0x3d88c10();
   input += synapse0x3d88c50();
   input += synapse0x3d88c90();
   input += synapse0x3d88cd0();
   input += synapse0x3d88d10();
   input += synapse0x3d88d50();
   input += synapse0x3d88d90();
   input += synapse0x3d88dd0();
   input += synapse0x3d88e10();
   input += synapse0x3d88e50();
   input += synapse0x3d88e90();
   input += synapse0x3d88ed0();
   input += synapse0x3d88f10();
   input += synapse0x3d88f50();
   input += synapse0x3d88f90();
   input += synapse0x3d88fd0();
   input += synapse0x3d88a60();
   input += synapse0x3d88aa0();
   input += synapse0x3d89120();
   input += synapse0x3d89160();
   input += synapse0x3d891a0();
   input += synapse0x3d891e0();
   input += synapse0x3d89220();
   input += synapse0x3d89260();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d888d0() {
   double input = input0x3d888d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d892a0() {
   double input = 0.665848;
   input += synapse0x3d895e0();
   input += synapse0x3d89620();
   input += synapse0x3d89660();
   input += synapse0x3d896a0();
   input += synapse0x3d896e0();
   input += synapse0x3d89720();
   input += synapse0x3d89760();
   input += synapse0x3d897a0();
   input += synapse0x3d897e0();
   input += synapse0x3d89820();
   input += synapse0x3d89860();
   input += synapse0x3d898a0();
   input += synapse0x3d898e0();
   input += synapse0x3d89920();
   input += synapse0x3d89960();
   input += synapse0x3d899a0();
   input += synapse0x3d89430();
   input += synapse0x3d89470();
   input += synapse0x3d89af0();
   input += synapse0x3d89b30();
   input += synapse0x3d89b70();
   input += synapse0x3d89bb0();
   input += synapse0x3d89bf0();
   input += synapse0x3d89c30();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d892a0() {
   double input = input0x3d892a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d89c70() {
   double input = -1.26525;
   input += synapse0x3d89fb0();
   input += synapse0x3d89ff0();
   input += synapse0x3d8a030();
   input += synapse0x3d8a070();
   input += synapse0x3d8a0b0();
   input += synapse0x3d8a0f0();
   input += synapse0x3d8a130();
   input += synapse0x3d8a170();
   input += synapse0x3d8a1b0();
   input += synapse0x3d8a1f0();
   input += synapse0x3d8a230();
   input += synapse0x3d8a270();
   input += synapse0x3d8a2b0();
   input += synapse0x3d8a2f0();
   input += synapse0x3d8a330();
   input += synapse0x3d8a370();
   input += synapse0x3d89e00();
   input += synapse0x3d89e40();
   input += synapse0x3d8a4c0();
   input += synapse0x3d8a500();
   input += synapse0x3d8a540();
   input += synapse0x3d8a580();
   input += synapse0x3d8a5c0();
   input += synapse0x3d8a600();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d89c70() {
   double input = input0x3d89c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d8a640() {
   double input = -1.34949;
   input += synapse0x3d8a980();
   input += synapse0x3d8a9c0();
   input += synapse0x3d8aa00();
   input += synapse0x3d8aa40();
   input += synapse0x3d8aa80();
   input += synapse0x3d8aac0();
   input += synapse0x3d8ab00();
   input += synapse0x3d8ab40();
   input += synapse0x3d8ab80();
   input += synapse0x3d8abc0();
   input += synapse0x3d8ac00();
   input += synapse0x3d8ac40();
   input += synapse0x3d8ac80();
   input += synapse0x3d8acc0();
   input += synapse0x3d8ad00();
   input += synapse0x3d8ad40();
   input += synapse0x3d8a7d0();
   input += synapse0x3d8a810();
   input += synapse0x3d8ae90();
   input += synapse0x3d8aed0();
   input += synapse0x3d8af10();
   input += synapse0x3d8af50();
   input += synapse0x3d8af90();
   input += synapse0x3d8afd0();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d8a640() {
   double input = input0x3d8a640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d8b010() {
   double input = -2.22553;
   input += synapse0x3d8b350();
   input += synapse0x3d8b390();
   input += synapse0x3d8b3d0();
   input += synapse0x3d8b410();
   input += synapse0x3d8b450();
   input += synapse0x3d8b490();
   input += synapse0x3d8b4d0();
   input += synapse0x3d8b510();
   input += synapse0x3d8b550();
   input += synapse0x3d8b590();
   input += synapse0x3d8b5d0();
   input += synapse0x3d8b610();
   input += synapse0x3d8b650();
   input += synapse0x3d8b690();
   input += synapse0x3d8b6d0();
   input += synapse0x3d8b710();
   input += synapse0x3d8b1a0();
   input += synapse0x3d8b1e0();
   input += synapse0x3d8b860();
   input += synapse0x3d8b8a0();
   input += synapse0x3d8b8e0();
   input += synapse0x3d8b920();
   input += synapse0x3d8b960();
   input += synapse0x3d8b9a0();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d8b010() {
   double input = input0x3d8b010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d8b9e0() {
   double input = -0.703015;
   input += synapse0x3d8bd20();
   input += synapse0x3d8bd60();
   input += synapse0x3d8bda0();
   input += synapse0x3d8bde0();
   input += synapse0x3d8be20();
   input += synapse0x3d8be60();
   input += synapse0x3d8bea0();
   input += synapse0x3d8bee0();
   input += synapse0x3d8bf20();
   input += synapse0x3d8bf60();
   input += synapse0x3d8bfa0();
   input += synapse0x3d8bfe0();
   input += synapse0x3d8c020();
   input += synapse0x3d8c060();
   input += synapse0x3d8c0a0();
   input += synapse0x3d8c0e0();
   input += synapse0x3d8bb70();
   input += synapse0x3d8bbb0();
   input += synapse0x3d8c230();
   input += synapse0x3d8c270();
   input += synapse0x3d8c2b0();
   input += synapse0x3d8c2f0();
   input += synapse0x3d8c330();
   input += synapse0x3d8c370();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d8b9e0() {
   double input = input0x3d8b9e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d8c3b0() {
   double input = 0.586479;
   input += synapse0x3d74e20();
   input += synapse0x3d74e60();
   input += synapse0x3d74ea0();
   input += synapse0x3d74ee0();
   input += synapse0x3d74f20();
   input += synapse0x3d74f60();
   input += synapse0x3d74fa0();
   input += synapse0x3d74fe0();
   input += synapse0x3d8cb00();
   input += synapse0x3d8cb40();
   input += synapse0x3d8cb80();
   input += synapse0x3d8cbc0();
   input += synapse0x3d8cc00();
   input += synapse0x3d8cc40();
   input += synapse0x3d8cc80();
   input += synapse0x3d8ccc0();
   input += synapse0x3d8c540();
   input += synapse0x3d8c580();
   input += synapse0x3d8ce10();
   input += synapse0x3d8ce50();
   input += synapse0x3d8ce90();
   input += synapse0x3d8ced0();
   input += synapse0x3d8cf10();
   input += synapse0x3d8cf50();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d8c3b0() {
   double input = input0x3d8c3b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d8cf90() {
   double input = 0.363944;
   input += synapse0x3d8d2d0();
   input += synapse0x3d8d310();
   input += synapse0x3d8d350();
   input += synapse0x3d8d390();
   input += synapse0x3d8d3d0();
   input += synapse0x3d8d410();
   input += synapse0x3d8d450();
   input += synapse0x3d8d490();
   input += synapse0x3d8d4d0();
   input += synapse0x3d8d510();
   input += synapse0x3d8d550();
   input += synapse0x3d8d590();
   input += synapse0x3d8d5d0();
   input += synapse0x3d8d610();
   input += synapse0x3d8d650();
   input += synapse0x3d8d690();
   input += synapse0x3d8d120();
   input += synapse0x3d8d160();
   input += synapse0x3d8d7e0();
   input += synapse0x3d8d820();
   input += synapse0x3d8d860();
   input += synapse0x3d8d8a0();
   input += synapse0x3d8d8e0();
   input += synapse0x3d8d920();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d8cf90() {
   double input = input0x3d8cf90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d8d960() {
   double input = 0.969532;
   input += synapse0x3d8dca0();
   input += synapse0x3d8dce0();
   input += synapse0x3d8dd20();
   input += synapse0x3d8dd60();
   input += synapse0x3d8dda0();
   input += synapse0x3d8dde0();
   input += synapse0x3d8de20();
   input += synapse0x3d8de60();
   input += synapse0x3d8dea0();
   input += synapse0x3d8dee0();
   input += synapse0x3d8df20();
   input += synapse0x3d8df60();
   input += synapse0x3d8dfa0();
   input += synapse0x3d8dfe0();
   input += synapse0x3d8e020();
   input += synapse0x3d8e060();
   input += synapse0x3d8daf0();
   input += synapse0x3d8db30();
   input += synapse0x3d7e660();
   input += synapse0x3d7e6a0();
   input += synapse0x3d7e6e0();
   input += synapse0x3d7e720();
   input += synapse0x3d7e760();
   input += synapse0x3d7e7a0();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d8d960() {
   double input = input0x3d8d960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d7e7e0() {
   double input = -0.468895;
   input += synapse0x3d7eb20();
   input += synapse0x3d7eb60();
   input += synapse0x3d7eba0();
   input += synapse0x3d7ebe0();
   input += synapse0x3d7ec20();
   input += synapse0x3d7ec60();
   input += synapse0x3d7eca0();
   input += synapse0x3d7ece0();
   input += synapse0x3d7ed20();
   input += synapse0x3d7ed60();
   input += synapse0x3d7eda0();
   input += synapse0x3d7ede0();
   input += synapse0x3d7ee20();
   input += synapse0x3d7ee60();
   input += synapse0x3d7eea0();
   input += synapse0x3d7eee0();
   input += synapse0x3d7e970();
   input += synapse0x3d7e9b0();
   input += synapse0x3d7f030();
   input += synapse0x3d7f070();
   input += synapse0x3d7f0b0();
   input += synapse0x3d7f0f0();
   input += synapse0x3d7f130();
   input += synapse0x3d7f170();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d7e7e0() {
   double input = input0x3d7e7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d7f1b0() {
   double input = -1.63296;
   input += synapse0x3d7f4f0();
   input += synapse0x3d7f530();
   input += synapse0x3d7f570();
   input += synapse0x3d7f5b0();
   input += synapse0x3d7f5f0();
   input += synapse0x3d7f630();
   input += synapse0x3d7f670();
   input += synapse0x3d7f6b0();
   input += synapse0x3d7f6f0();
   input += synapse0x3d7f730();
   input += synapse0x3d7f770();
   input += synapse0x3d7f7b0();
   input += synapse0x3d7f7f0();
   input += synapse0x3d7f830();
   input += synapse0x3d7f870();
   input += synapse0x3d7f8b0();
   input += synapse0x3d7f340();
   input += synapse0x3d7f380();
   input += synapse0x3d7fa00();
   input += synapse0x3d7fa40();
   input += synapse0x3d7fa80();
   input += synapse0x3d7fac0();
   input += synapse0x3d7fb00();
   input += synapse0x3d7fb40();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d7f1b0() {
   double input = input0x3d7f1b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d7fb80() {
   double input = 2.66335;
   input += synapse0x3d7fec0();
   input += synapse0x3d7ff00();
   input += synapse0x3d7ff40();
   input += synapse0x3d7ff80();
   input += synapse0x3d7ffc0();
   input += synapse0x3d80000();
   input += synapse0x3d80040();
   input += synapse0x3d80080();
   input += synapse0x3d800c0();
   input += synapse0x3d80100();
   input += synapse0x3d80140();
   input += synapse0x3d80180();
   input += synapse0x3d801c0();
   input += synapse0x3d80200();
   input += synapse0x3d80240();
   input += synapse0x3d80280();
   input += synapse0x3d7fd10();
   input += synapse0x3d7fd50();
   input += synapse0x3d803d0();
   input += synapse0x3d80410();
   input += synapse0x3d80450();
   input += synapse0x3d80490();
   input += synapse0x3d804d0();
   input += synapse0x3d80510();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d7fb80() {
   double input = input0x3d7fb80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d921c0() {
   double input = -0.433269;
   input += synapse0x3d923e0();
   input += synapse0x3d92420();
   input += synapse0x3d92460();
   input += synapse0x3d924a0();
   input += synapse0x3d924e0();
   input += synapse0x3d92520();
   input += synapse0x3d92560();
   input += synapse0x3d925a0();
   input += synapse0x3d925e0();
   input += synapse0x3d92620();
   input += synapse0x3d92660();
   input += synapse0x3d926a0();
   input += synapse0x3d926e0();
   input += synapse0x3d92720();
   input += synapse0x3d92760();
   input += synapse0x3d927a0();
   input += synapse0x3d80550();
   input += synapse0x3d80590();
   input += synapse0x3d928f0();
   input += synapse0x3d92930();
   input += synapse0x3d92970();
   input += synapse0x3d929b0();
   input += synapse0x3d929f0();
   input += synapse0x3d92a30();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d921c0() {
   double input = input0x3d921c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d92a70() {
   double input = -0.195376;
   input += synapse0x3d92db0();
   input += synapse0x3d92df0();
   input += synapse0x3d92e30();
   input += synapse0x3d92e70();
   input += synapse0x3d92eb0();
   input += synapse0x3d92ef0();
   input += synapse0x3d92f30();
   input += synapse0x3d92f70();
   input += synapse0x3d92fb0();
   input += synapse0x3d92ff0();
   input += synapse0x3d93030();
   input += synapse0x3d93070();
   input += synapse0x3d930b0();
   input += synapse0x3d930f0();
   input += synapse0x3d93130();
   input += synapse0x3d93170();
   input += synapse0x3d92c00();
   input += synapse0x3d92c40();
   input += synapse0x3d932c0();
   input += synapse0x3d93300();
   input += synapse0x3d93340();
   input += synapse0x3d93380();
   input += synapse0x3d933c0();
   input += synapse0x3d93400();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d92a70() {
   double input = input0x3d92a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d93440() {
   double input = -1.07332;
   input += synapse0x3d93780();
   input += synapse0x3d937c0();
   input += synapse0x3d93800();
   input += synapse0x3d93840();
   input += synapse0x3d93880();
   input += synapse0x3d938c0();
   input += synapse0x3d93900();
   input += synapse0x3d93940();
   input += synapse0x3d93980();
   input += synapse0x3d939c0();
   input += synapse0x3d93a00();
   input += synapse0x3d93a40();
   input += synapse0x3d93a80();
   input += synapse0x3d93ac0();
   input += synapse0x3d93b00();
   input += synapse0x3d93b40();
   input += synapse0x3d935d0();
   input += synapse0x3d93610();
   input += synapse0x3d93c90();
   input += synapse0x3d93cd0();
   input += synapse0x3d93d10();
   input += synapse0x3d93d50();
   input += synapse0x3d93d90();
   input += synapse0x3d93dd0();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d93440() {
   double input = input0x3d93440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d93e10() {
   double input = 1.00355;
   input += synapse0x3d94150();
   input += synapse0x3d94190();
   input += synapse0x3d941d0();
   input += synapse0x3d94210();
   input += synapse0x3d94250();
   input += synapse0x3d94290();
   input += synapse0x3d942d0();
   input += synapse0x3d94310();
   input += synapse0x3d94350();
   input += synapse0x3d94390();
   input += synapse0x3d943d0();
   input += synapse0x3d94410();
   input += synapse0x3d94450();
   input += synapse0x3d94490();
   input += synapse0x3d944d0();
   input += synapse0x3d94510();
   input += synapse0x3d93fa0();
   input += synapse0x3d93fe0();
   input += synapse0x3d94660();
   input += synapse0x3d946a0();
   input += synapse0x3d946e0();
   input += synapse0x3d94720();
   input += synapse0x3d94760();
   input += synapse0x3d947a0();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d93e10() {
   double input = input0x3d93e10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d9b010() {
   double input = 0.351343;
   input += synapse0x3b34580();
   input += synapse0x3b345c0();
   input += synapse0x3d71150();
   input += synapse0x3d71190();
   input += synapse0x3d72c20();
   input += synapse0x3d72c60();
   input += synapse0x3d739f0();
   input += synapse0x3d73a30();
   input += synapse0x3d743c0();
   input += synapse0x3d74400();
   input += synapse0x3d74d90();
   input += synapse0x3d74dd0();
   input += synapse0x3d75870();
   input += synapse0x3d758b0();
   input += synapse0x3d76240();
   input += synapse0x3d76280();
   input += synapse0x3d73320();
   input += synapse0x3d73360();
   input += synapse0x3d77df0();
   input += synapse0x3d77e30();
   input += synapse0x3d787c0();
   input += synapse0x3d78800();
   input += synapse0x3d79190();
   input += synapse0x3d791d0();
   input += synapse0x3d79b60();
   input += synapse0x3d79ba0();
   input += synapse0x3d6cbf0();
   input += synapse0x3d6cc30();
   input += synapse0x3d7bc50();
   input += synapse0x3d7bc90();
   input += synapse0x3d7c620();
   input += synapse0x3d7c660();
   input += synapse0x3d7cff0();
   input += synapse0x3d7d030();
   input += synapse0x3d7d9c0();
   input += synapse0x3d7da00();
   input += synapse0x3d7e390();
   input += synapse0x3d7e3d0();
   input += synapse0x3d76ee0();
   input += synapse0x3d76f20();
   input += synapse0x3d80790();
   input += synapse0x3d807d0();
   input += synapse0x3d81120();
   input += synapse0x3d81160();
   input += synapse0x3d81af0();
   input += synapse0x3d81b30();
   input += synapse0x3d824c0();
   input += synapse0x3d82500();
   input += synapse0x3d82e90();
   input += synapse0x3d82ed0();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d9b010() {
   double input = input0x3d9b010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d9b3b0() {
   double input = -0.883851;
   input += synapse0x3d855d0();
   input += synapse0x3d85610();
   input += synapse0x3d7ab90();
   input += synapse0x3d7abd0();
   input += synapse0x3d881b0();
   input += synapse0x3d881f0();
   input += synapse0x3d88b80();
   input += synapse0x3d88bc0();
   input += synapse0x3d89550();
   input += synapse0x3d89590();
   input += synapse0x3d89f20();
   input += synapse0x3d89f60();
   input += synapse0x3d8a8f0();
   input += synapse0x3d8a930();
   input += synapse0x3d8b2c0();
   input += synapse0x3d8b300();
   input += synapse0x3d8bc90();
   input += synapse0x3d8bcd0();
   input += synapse0x3d8c660();
   input += synapse0x3d8c6a0();
   input += synapse0x3d8d240();
   input += synapse0x3d8d280();
   input += synapse0x3d8dc10();
   input += synapse0x3d8dc50();
   input += synapse0x3d7ea90();
   input += synapse0x3d7ead0();
   input += synapse0x3d7f460();
   input += synapse0x3d7f4a0();
   input += synapse0x3d7fe30();
   input += synapse0x3d7fe70();
   input += synapse0x3d92350();
   input += synapse0x3d92390();
   input += synapse0x3d92d20();
   input += synapse0x3d92d60();
   input += synapse0x3d936f0();
   input += synapse0x3d93730();
   input += synapse0x3d940c0();
   input += synapse0x3d94100();
   input += synapse0x3d6f050();
   input += synapse0x3d6f090();
   input += synapse0x3d83860();
   input += synapse0x3d838a0();
   input += synapse0x3d947e0();
   input += synapse0x3d94820();
   input += synapse0x3d94860();
   input += synapse0x3d948a0();
   input += synapse0x3d9b750();
   input += synapse0x3d9b790();
   input += synapse0x3d9b7d0();
   input += synapse0x3d9b810();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d9b3b0() {
   double input = input0x3d9b3b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d9b850() {
   double input = 0.289395;
   input += synapse0x3d9bb90();
   input += synapse0x3d9bbd0();
   input += synapse0x3d9bc10();
   input += synapse0x3d9bc50();
   input += synapse0x3d9bc90();
   input += synapse0x3d9bcd0();
   input += synapse0x3d9bd10();
   input += synapse0x3d9bd50();
   input += synapse0x3d9bd90();
   input += synapse0x3d9bdd0();
   input += synapse0x3d9be10();
   input += synapse0x3d9be50();
   input += synapse0x3d9be90();
   input += synapse0x3d9bed0();
   input += synapse0x3d9bf10();
   input += synapse0x3d9bf50();
   input += synapse0x3d9b9e0();
   input += synapse0x3d9ba20();
   input += synapse0x3d9c0a0();
   input += synapse0x3d9c0e0();
   input += synapse0x3d9c120();
   input += synapse0x3d9c160();
   input += synapse0x3d9c1a0();
   input += synapse0x3d9c1e0();
   input += synapse0x3d9c220();
   input += synapse0x3d9c260();
   input += synapse0x3d9c2a0();
   input += synapse0x3d9c2e0();
   input += synapse0x3d9c320();
   input += synapse0x3d9c360();
   input += synapse0x3d9c3a0();
   input += synapse0x3d9c3e0();
   input += synapse0x3d9bf90();
   input += synapse0x3d9bfd0();
   input += synapse0x3d9c010();
   input += synapse0x3d9c050();
   input += synapse0x3d9c630();
   input += synapse0x3d9c670();
   input += synapse0x3d9c6b0();
   input += synapse0x3d9c6f0();
   input += synapse0x3d9c730();
   input += synapse0x3d9c770();
   input += synapse0x3d9c7b0();
   input += synapse0x3d9c7f0();
   input += synapse0x3d9c830();
   input += synapse0x3d9c870();
   input += synapse0x3d9c8b0();
   input += synapse0x3d9c8f0();
   input += synapse0x3d9c930();
   input += synapse0x3d9c970();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d9b850() {
   double input = input0x3d9b850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d9c9b0() {
   double input = -0.991088;
   input += synapse0x3d9ccf0();
   input += synapse0x3d9cd30();
   input += synapse0x3d9cd70();
   input += synapse0x3d9cdb0();
   input += synapse0x3d9cdf0();
   input += synapse0x3d9ce30();
   input += synapse0x3d9ce70();
   input += synapse0x3d9ceb0();
   input += synapse0x3d9cef0();
   input += synapse0x3d9cf30();
   input += synapse0x3d9cf70();
   input += synapse0x3d9cfb0();
   input += synapse0x3d9cff0();
   input += synapse0x3d9d030();
   input += synapse0x3d9d070();
   input += synapse0x3d9d0b0();
   input += synapse0x3d9cb40();
   input += synapse0x3d9cb80();
   input += synapse0x3d9d200();
   input += synapse0x3d9d240();
   input += synapse0x3d9d280();
   input += synapse0x3d9d2c0();
   input += synapse0x3d9d300();
   input += synapse0x3d9d340();
   input += synapse0x3d9d380();
   input += synapse0x3d9d3c0();
   input += synapse0x3d9d400();
   input += synapse0x3d9d440();
   input += synapse0x3d9d480();
   input += synapse0x3d9d4c0();
   input += synapse0x3d9d500();
   input += synapse0x3d9d540();
   input += synapse0x3d9d0f0();
   input += synapse0x3d9d130();
   input += synapse0x3d9d170();
   input += synapse0x3d9d1b0();
   input += synapse0x3d9d790();
   input += synapse0x3d9d7d0();
   input += synapse0x3d9d810();
   input += synapse0x3d9d850();
   input += synapse0x3d9d890();
   input += synapse0x3d9d8d0();
   input += synapse0x3d9d910();
   input += synapse0x3d9d950();
   input += synapse0x3d9d990();
   input += synapse0x3d9d9d0();
   input += synapse0x3d9da10();
   input += synapse0x3d9da50();
   input += synapse0x3d9da90();
   input += synapse0x3d9dad0();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d9c9b0() {
   double input = input0x3d9c9b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d9db10() {
   double input = 0.0952245;
   input += synapse0x3d9de50();
   input += synapse0x3d9de90();
   input += synapse0x3d9ded0();
   input += synapse0x3d9df10();
   input += synapse0x3d9df50();
   input += synapse0x3d9df90();
   input += synapse0x3d9dfd0();
   input += synapse0x3d9e010();
   input += synapse0x3d9e050();
   input += synapse0x3d9e090();
   input += synapse0x3d9e0d0();
   input += synapse0x3d9e110();
   input += synapse0x3d9e150();
   input += synapse0x3d9e190();
   input += synapse0x3d9e1d0();
   input += synapse0x3d9e210();
   input += synapse0x3d9dca0();
   input += synapse0x3d9dce0();
   input += synapse0x3d9e360();
   input += synapse0x3d9e3a0();
   input += synapse0x3d9e3e0();
   input += synapse0x3d9e420();
   input += synapse0x3d9e460();
   input += synapse0x3d9e4a0();
   input += synapse0x3d9e4e0();
   input += synapse0x3d9e520();
   input += synapse0x3d9e560();
   input += synapse0x3d9e5a0();
   input += synapse0x3d9e5e0();
   input += synapse0x3d9e620();
   input += synapse0x3d9e660();
   input += synapse0x3d9e6a0();
   input += synapse0x3d9e250();
   input += synapse0x3d9e290();
   input += synapse0x3d9e2d0();
   input += synapse0x3d9e310();
   input += synapse0x3d9e8f0();
   input += synapse0x3d9e930();
   input += synapse0x3d9e970();
   input += synapse0x3d9e9b0();
   input += synapse0x3d9e9f0();
   input += synapse0x3d9ea30();
   input += synapse0x3d9ea70();
   input += synapse0x3d9eab0();
   input += synapse0x3d9eaf0();
   input += synapse0x3d9eb30();
   input += synapse0x3d9eb70();
   input += synapse0x3d9ebb0();
   input += synapse0x3d9ebf0();
   input += synapse0x3d9ec30();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d9db10() {
   double input = input0x3d9db10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t2t2::input0x3d9ec70() {
   double input = 4.23902;
   input += synapse0x3d9ee90();
   input += synapse0x3d9eed0();
   input += synapse0x3d9ef10();
   input += synapse0x3d9ef50();
   input += synapse0x3d9ef90();
   return input;
}

double NNfunction_tb_t2t2::neuron0x3d9ec70() {
   double input = input0x3d9ec70();
   return (input * 1)+0;
}

double NNfunction_tb_t2t2::synapse0x3d6f0e0() {
   return (neuron0x3d69ce0()*0.0448935);
}

double NNfunction_tb_t2t2::synapse0x3d6f120() {
   return (neuron0x3d69f90()*-0.303172);
}

double NNfunction_tb_t2t2::synapse0x3d6f160() {
   return (neuron0x3d6a2d0()*-0.0623192);
}

double NNfunction_tb_t2t2::synapse0x3d6f1a0() {
   return (neuron0x3d6a610()*0.00439007);
}

double NNfunction_tb_t2t2::synapse0x3d6f1e0() {
   return (neuron0x3d6a950()*-0.0477621);
}

double NNfunction_tb_t2t2::synapse0x3d6f220() {
   return (neuron0x3d6ac90()*-0.0567408);
}

double NNfunction_tb_t2t2::synapse0x3d6f260() {
   return (neuron0x3d6afd0()*-0.0413898);
}

double NNfunction_tb_t2t2::synapse0x3d6f2a0() {
   return (neuron0x3d6b310()*0.0312409);
}

double NNfunction_tb_t2t2::synapse0x3d6f2e0() {
   return (neuron0x3d6b650()*-0.0422921);
}

double NNfunction_tb_t2t2::synapse0x3d6f320() {
   return (neuron0x3d6b990()*0.136624);
}

double NNfunction_tb_t2t2::synapse0x3d6f360() {
   return (neuron0x3d6bcd0()*0.125071);
}

double NNfunction_tb_t2t2::synapse0x3d6f3a0() {
   return (neuron0x3d6c010()*-0.223359);
}

double NNfunction_tb_t2t2::synapse0x3d6f3e0() {
   return (neuron0x3d6c350()*0.0692593);
}

double NNfunction_tb_t2t2::synapse0x3d6f420() {
   return (neuron0x3d6c690()*0.528517);
}

double NNfunction_tb_t2t2::synapse0x3d6f460() {
   return (neuron0x3d6c9d0()*-0.0332942);
}

double NNfunction_tb_t2t2::synapse0x3d6f4a0() {
   return (neuron0x3d6cd10()*-0.0804592);
}

double NNfunction_tb_t2t2::synapse0x3d6ef30() {
   return (neuron0x3d6d050()*-0.172711);
}

double NNfunction_tb_t2t2::synapse0x3d6ef70() {
   return (neuron0x3d6d5b0()*-0.0753034);
}

double NNfunction_tb_t2t2::synapse0x3b25fa0() {
   return (neuron0x3d6d8f0()*0.00313606);
}

double NNfunction_tb_t2t2::synapse0x3b25fe0() {
   return (neuron0x3d6dc30()*0.0847029);
}

double NNfunction_tb_t2t2::synapse0x3d6f4e0() {
   return (neuron0x3d6df70()*-0.109348);
}

double NNfunction_tb_t2t2::synapse0x3d6f520() {
   return (neuron0x3d6e2b0()*-0.0343226);
}

double NNfunction_tb_t2t2::synapse0x3d6f560() {
   return (neuron0x3d6e5f0()*0.0493616);
}

double NNfunction_tb_t2t2::synapse0x3d6f5a0() {
   return (neuron0x3d6e930()*-0.421487);
}

double NNfunction_tb_t2t2::synapse0x3d6f920() {
   return (neuron0x3d69ce0()*0.0293817);
}

double NNfunction_tb_t2t2::synapse0x3d6f960() {
   return (neuron0x3d69f90()*0.00172345);
}

double NNfunction_tb_t2t2::synapse0x3d6f9a0() {
   return (neuron0x3d6a2d0()*-0.0340914);
}

double NNfunction_tb_t2t2::synapse0x3d6f9e0() {
   return (neuron0x3d6a610()*-0.00141837);
}

double NNfunction_tb_t2t2::synapse0x3d6fa20() {
   return (neuron0x3d6a950()*-0.00263281);
}

double NNfunction_tb_t2t2::synapse0x3d6fa60() {
   return (neuron0x3d6ac90()*-0.0321896);
}

double NNfunction_tb_t2t2::synapse0x3d6faa0() {
   return (neuron0x3d6afd0()*-0.0276218);
}

double NNfunction_tb_t2t2::synapse0x3d6fae0() {
   return (neuron0x3d6b310()*0.00469872);
}

double NNfunction_tb_t2t2::synapse0x3d6fb20() {
   return (neuron0x3d6b650()*0.00837589);
}

double NNfunction_tb_t2t2::synapse0x3b25df0() {
   return (neuron0x3d6b990()*0.0169956);
}

double NNfunction_tb_t2t2::synapse0x3b25e30() {
   return (neuron0x3d6bcd0()*0.0258387);
}

double NNfunction_tb_t2t2::synapse0x3b25e70() {
   return (neuron0x3d6c010()*0.00881846);
}

double NNfunction_tb_t2t2::synapse0x3b25eb0() {
   return (neuron0x3d6c350()*0.00831832);
}

double NNfunction_tb_t2t2::synapse0x3d6fd70() {
   return (neuron0x3d6c690()*2.59215);
}

double NNfunction_tb_t2t2::synapse0x3d6fdb0() {
   return (neuron0x3d6c9d0()*-0.0183722);
}

double NNfunction_tb_t2t2::synapse0x3d6fdf0() {
   return (neuron0x3d6cd10()*-0.0163258);
}

double NNfunction_tb_t2t2::synapse0x3d6f770() {
   return (neuron0x3d6d050()*-2.80274);
}

double NNfunction_tb_t2t2::synapse0x3d6f7b0() {
   return (neuron0x3d6d5b0()*0.022795);
}

double NNfunction_tb_t2t2::synapse0x3d6ff40() {
   return (neuron0x3d6d8f0()*0.0151997);
}

double NNfunction_tb_t2t2::synapse0x3d6ff80() {
   return (neuron0x3d6dc30()*0.0501282);
}

double NNfunction_tb_t2t2::synapse0x3d6ffc0() {
   return (neuron0x3d6df70()*-0.100566);
}

double NNfunction_tb_t2t2::synapse0x3d70000() {
   return (neuron0x3d6e2b0()*-0.0172252);
}

double NNfunction_tb_t2t2::synapse0x3d70040() {
   return (neuron0x3d6e5f0()*-0.0074871);
}

double NNfunction_tb_t2t2::synapse0x3d70080() {
   return (neuron0x3d6e930()*0.0576067);
}

double NNfunction_tb_t2t2::synapse0x3d70400() {
   return (neuron0x3d69ce0()*1.24956);
}

double NNfunction_tb_t2t2::synapse0x3d70440() {
   return (neuron0x3d69f90()*0.0205173);
}

double NNfunction_tb_t2t2::synapse0x3d70480() {
   return (neuron0x3d6a2d0()*0.0464384);
}

double NNfunction_tb_t2t2::synapse0x3d704c0() {
   return (neuron0x3d6a610()*-0.0209913);
}

double NNfunction_tb_t2t2::synapse0x3d70500() {
   return (neuron0x3d6a950()*-0.177098);
}

double NNfunction_tb_t2t2::synapse0x3d70540() {
   return (neuron0x3d6ac90()*-0.0133524);
}

double NNfunction_tb_t2t2::synapse0x3d70580() {
   return (neuron0x3d6afd0()*0.00202436);
}

double NNfunction_tb_t2t2::synapse0x3d705c0() {
   return (neuron0x3d6b310()*0.0283148);
}

double NNfunction_tb_t2t2::synapse0x3d70600() {
   return (neuron0x3d6b650()*0.00376551);
}

double NNfunction_tb_t2t2::synapse0x3d70640() {
   return (neuron0x3d6b990()*-0.0203718);
}

double NNfunction_tb_t2t2::synapse0x3d70680() {
   return (neuron0x3d6bcd0()*0.0176214);
}

double NNfunction_tb_t2t2::synapse0x3d706c0() {
   return (neuron0x3d6c010()*0.00379184);
}

double NNfunction_tb_t2t2::synapse0x3d70700() {
   return (neuron0x3d6c350()*-0.0062234);
}

double NNfunction_tb_t2t2::synapse0x3d70740() {
   return (neuron0x3d6c690()*0.0154318);
}

double NNfunction_tb_t2t2::synapse0x3d70780() {
   return (neuron0x3d6c9d0()*-0.0138198);
}

double NNfunction_tb_t2t2::synapse0x3d707c0() {
   return (neuron0x3d6cd10()*0.0195571);
}

double NNfunction_tb_t2t2::synapse0x3d70250() {
   return (neuron0x3d6d050()*-0.0909918);
}

double NNfunction_tb_t2t2::synapse0x3d70290() {
   return (neuron0x3d6d5b0()*0.021199);
}

double NNfunction_tb_t2t2::synapse0x3b252b0() {
   return (neuron0x3d6d8f0()*0.0172793);
}

double NNfunction_tb_t2t2::synapse0x3b33d90() {
   return (neuron0x3d6dc30()*0.0755808);
}

double NNfunction_tb_t2t2::synapse0x3b33dd0() {
   return (neuron0x3d6df70()*-1.04042);
}

double NNfunction_tb_t2t2::synapse0x3d726f0() {
   return (neuron0x3d6e2b0()*-0.00418379);
}

double NNfunction_tb_t2t2::synapse0x3d72730() {
   return (neuron0x3d6e5f0()*0.005399);
}

double NNfunction_tb_t2t2::synapse0x3d69a20() {
   return (neuron0x3d6e930()*0.525088);
}

double NNfunction_tb_t2t2::synapse0x3d69af0() {
   return (neuron0x3d69ce0()*-0.16931);
}

double NNfunction_tb_t2t2::synapse0x3b34610() {
   return (neuron0x3d69f90()*0.00785718);
}

double NNfunction_tb_t2t2::synapse0x3d6fcf0() {
   return (neuron0x3d6a2d0()*0.0272813);
}

double NNfunction_tb_t2t2::synapse0x3d6fd30() {
   return (neuron0x3d6a610()*-0.0921621);
}

double NNfunction_tb_t2t2::synapse0x3d70910() {
   return (neuron0x3d6a950()*-0.00209504);
}

double NNfunction_tb_t2t2::synapse0x3d70950() {
   return (neuron0x3d6ac90()*0.017431);
}

double NNfunction_tb_t2t2::synapse0x3d70990() {
   return (neuron0x3d6afd0()*0.00364482);
}

double NNfunction_tb_t2t2::synapse0x3d709d0() {
   return (neuron0x3d6b310()*0.0173998);
}

double NNfunction_tb_t2t2::synapse0x3d70a10() {
   return (neuron0x3d6b650()*0.0128248);
}

double NNfunction_tb_t2t2::synapse0x3d70a50() {
   return (neuron0x3d6b990()*-0.0119093);
}

double NNfunction_tb_t2t2::synapse0x3d70a90() {
   return (neuron0x3d6bcd0()*2.18586e-05);
}

double NNfunction_tb_t2t2::synapse0x3d70ad0() {
   return (neuron0x3d6c010()*-0.013378);
}

double NNfunction_tb_t2t2::synapse0x3d70b10() {
   return (neuron0x3d6c350()*0.00438459);
}

double NNfunction_tb_t2t2::synapse0x3d70b50() {
   return (neuron0x3d6c690()*-0.602682);
}

double NNfunction_tb_t2t2::synapse0x3d70b90() {
   return (neuron0x3d6c9d0()*-0.0154239);
}

double NNfunction_tb_t2t2::synapse0x3d70bd0() {
   return (neuron0x3d6cd10()*-0.0041245);
}

double NNfunction_tb_t2t2::synapse0x3d69a60() {
   return (neuron0x3d6d050()*0.850694);
}

double NNfunction_tb_t2t2::synapse0x3d69aa0() {
   return (neuron0x3d6d5b0()*-0.0113177);
}

double NNfunction_tb_t2t2::synapse0x3d70d20() {
   return (neuron0x3d6d8f0()*-0.0440029);
}

double NNfunction_tb_t2t2::synapse0x3d70d60() {
   return (neuron0x3d6dc30()*0.0108387);
}

double NNfunction_tb_t2t2::synapse0x3d70da0() {
   return (neuron0x3d6df70()*3.58021);
}

double NNfunction_tb_t2t2::synapse0x3d70de0() {
   return (neuron0x3d6e2b0()*0.0154468);
}

double NNfunction_tb_t2t2::synapse0x3d70e20() {
   return (neuron0x3d6e5f0()*0.0342849);
}

double NNfunction_tb_t2t2::synapse0x3d70e60() {
   return (neuron0x3d6e930()*-0.368698);
}

double NNfunction_tb_t2t2::synapse0x3d711e0() {
   return (neuron0x3d69ce0()*0.0235138);
}

double NNfunction_tb_t2t2::synapse0x3d71220() {
   return (neuron0x3d69f90()*-0.0105048);
}

double NNfunction_tb_t2t2::synapse0x3d71260() {
   return (neuron0x3d6a2d0()*-0.227582);
}

double NNfunction_tb_t2t2::synapse0x3d712a0() {
   return (neuron0x3d6a610()*0.227558);
}

double NNfunction_tb_t2t2::synapse0x3d712e0() {
   return (neuron0x3d6a950()*-0.106907);
}

double NNfunction_tb_t2t2::synapse0x3d71320() {
   return (neuron0x3d6ac90()*0.19962);
}

double NNfunction_tb_t2t2::synapse0x3d71360() {
   return (neuron0x3d6afd0()*-0.12924);
}

double NNfunction_tb_t2t2::synapse0x3d713a0() {
   return (neuron0x3d6b310()*0.0227566);
}

double NNfunction_tb_t2t2::synapse0x3d713e0() {
   return (neuron0x3d6b650()*-0.159141);
}

double NNfunction_tb_t2t2::synapse0x3d71420() {
   return (neuron0x3d6b990()*0.224295);
}

double NNfunction_tb_t2t2::synapse0x3d71460() {
   return (neuron0x3d6bcd0()*-0.516636);
}

double NNfunction_tb_t2t2::synapse0x3d714a0() {
   return (neuron0x3d6c010()*0.132544);
}

double NNfunction_tb_t2t2::synapse0x3d714e0() {
   return (neuron0x3d6c350()*0.0849524);
}

double NNfunction_tb_t2t2::synapse0x3d71520() {
   return (neuron0x3d6c690()*0.360292);
}

double NNfunction_tb_t2t2::synapse0x3d71560() {
   return (neuron0x3d6c9d0()*-0.00943819);
}

double NNfunction_tb_t2t2::synapse0x3d715a0() {
   return (neuron0x3d6cd10()*-0.236462);
}

double NNfunction_tb_t2t2::synapse0x3d716f0() {
   return (neuron0x3d6d050()*-0.0111649);
}

double NNfunction_tb_t2t2::synapse0x3d71030() {
   return (neuron0x3d6d5b0()*0.137635);
}

double NNfunction_tb_t2t2::synapse0x3d71070() {
   return (neuron0x3d6d8f0()*-1.17483);
}

double NNfunction_tb_t2t2::synapse0x3d72830() {
   return (neuron0x3d6dc30()*0.177306);
}

double NNfunction_tb_t2t2::synapse0x3d72870() {
   return (neuron0x3d6df70()*-0.835909);
}

double NNfunction_tb_t2t2::synapse0x3d728b0() {
   return (neuron0x3d6e2b0()*-0.376274);
}

double NNfunction_tb_t2t2::synapse0x3d728f0() {
   return (neuron0x3d6e5f0()*0.367894);
}

double NNfunction_tb_t2t2::synapse0x3d72930() {
   return (neuron0x3d6e930()*0.56363);
}

double NNfunction_tb_t2t2::synapse0x3d72cb0() {
   return (neuron0x3d69ce0()*-0.552454);
}

double NNfunction_tb_t2t2::synapse0x3d72cf0() {
   return (neuron0x3d69f90()*-0.0287591);
}

double NNfunction_tb_t2t2::synapse0x3d72d30() {
   return (neuron0x3d6a2d0()*-0.133143);
}

double NNfunction_tb_t2t2::synapse0x3d72d70() {
   return (neuron0x3d6a610()*0.0113874);
}

double NNfunction_tb_t2t2::synapse0x3d72db0() {
   return (neuron0x3d6a950()*0.153983);
}

double NNfunction_tb_t2t2::synapse0x3d72df0() {
   return (neuron0x3d6ac90()*-0.0148254);
}

double NNfunction_tb_t2t2::synapse0x3d72e30() {
   return (neuron0x3d6afd0()*-0.00537937);
}

double NNfunction_tb_t2t2::synapse0x3d72e70() {
   return (neuron0x3d6b310()*-0.0259902);
}

double NNfunction_tb_t2t2::synapse0x3d72eb0() {
   return (neuron0x3d6b650()*0.0216875);
}

double NNfunction_tb_t2t2::synapse0x3b340e0() {
   return (neuron0x3d6b990()*0.00137444);
}

double NNfunction_tb_t2t2::synapse0x3b34120() {
   return (neuron0x3d6bcd0()*0.00201488);
}

double NNfunction_tb_t2t2::synapse0x3b34160() {
   return (neuron0x3d6c010()*0.000962309);
}

double NNfunction_tb_t2t2::synapse0x3b341a0() {
   return (neuron0x3d6c350()*0.00517622);
}

double NNfunction_tb_t2t2::synapse0x3b341e0() {
   return (neuron0x3d6c690()*0.220453);
}

double NNfunction_tb_t2t2::synapse0x3b34220() {
   return (neuron0x3d6c9d0()*-0.00138955);
}

double NNfunction_tb_t2t2::synapse0x3b34260() {
   return (neuron0x3d6cd10()*-0.0196848);
}

double NNfunction_tb_t2t2::synapse0x3d72b00() {
   return (neuron0x3d6d050()*-0.304827);
}

double NNfunction_tb_t2t2::synapse0x3d72b40() {
   return (neuron0x3d6d5b0()*0.00963694);
}

double NNfunction_tb_t2t2::synapse0x3b343b0() {
   return (neuron0x3d6d8f0()*0.00213188);
}

double NNfunction_tb_t2t2::synapse0x3b343f0() {
   return (neuron0x3d6dc30()*-0.0130367);
}

double NNfunction_tb_t2t2::synapse0x3b34430() {
   return (neuron0x3d6df70()*0.957551);
}

double NNfunction_tb_t2t2::synapse0x3b34470() {
   return (neuron0x3d6e2b0()*0.00635547);
}

double NNfunction_tb_t2t2::synapse0x3b344b0() {
   return (neuron0x3d6e5f0()*-0.0223894);
}

double NNfunction_tb_t2t2::synapse0x3d73700() {
   return (neuron0x3d6e930()*0.00304826);
}

double NNfunction_tb_t2t2::synapse0x3d73a80() {
   return (neuron0x3d69ce0()*0.0128445);
}

double NNfunction_tb_t2t2::synapse0x3d73ac0() {
   return (neuron0x3d69f90()*0.114707);
}

double NNfunction_tb_t2t2::synapse0x3d73b00() {
   return (neuron0x3d6a2d0()*-0.030431);
}

double NNfunction_tb_t2t2::synapse0x3d73b40() {
   return (neuron0x3d6a610()*0.0989712);
}

double NNfunction_tb_t2t2::synapse0x3d73b80() {
   return (neuron0x3d6a950()*-0.0395267);
}

double NNfunction_tb_t2t2::synapse0x3d73bc0() {
   return (neuron0x3d6ac90()*0.0464385);
}

double NNfunction_tb_t2t2::synapse0x3d73c00() {
   return (neuron0x3d6afd0()*0.00384528);
}

double NNfunction_tb_t2t2::synapse0x3d73c40() {
   return (neuron0x3d6b310()*0.0275442);
}

double NNfunction_tb_t2t2::synapse0x3d73c80() {
   return (neuron0x3d6b650()*-0.0892546);
}

double NNfunction_tb_t2t2::synapse0x3d73cc0() {
   return (neuron0x3d6b990()*0.0596073);
}

double NNfunction_tb_t2t2::synapse0x3d73d00() {
   return (neuron0x3d6bcd0()*-0.0703785);
}

double NNfunction_tb_t2t2::synapse0x3d73d40() {
   return (neuron0x3d6c010()*-0.122514);
}

double NNfunction_tb_t2t2::synapse0x3d73d80() {
   return (neuron0x3d6c350()*-0.0833921);
}

double NNfunction_tb_t2t2::synapse0x3d73dc0() {
   return (neuron0x3d6c690()*-0.653967);
}

double NNfunction_tb_t2t2::synapse0x3d73e00() {
   return (neuron0x3d6c9d0()*-0.0178547);
}

double NNfunction_tb_t2t2::synapse0x3d73e40() {
   return (neuron0x3d6cd10()*-0.0111524);
}

double NNfunction_tb_t2t2::synapse0x3d738d0() {
   return (neuron0x3d6d050()*0.781346);
}

double NNfunction_tb_t2t2::synapse0x3d73910() {
   return (neuron0x3d6d5b0()*-0.181051);
}

double NNfunction_tb_t2t2::synapse0x3d73f90() {
   return (neuron0x3d6d8f0()*0.0560331);
}

double NNfunction_tb_t2t2::synapse0x3d73fd0() {
   return (neuron0x3d6dc30()*-0.0564424);
}

double NNfunction_tb_t2t2::synapse0x3d74010() {
   return (neuron0x3d6df70()*-0.0258168);
}

double NNfunction_tb_t2t2::synapse0x3d74050() {
   return (neuron0x3d6e2b0()*0.0336904);
}

double NNfunction_tb_t2t2::synapse0x3d74090() {
   return (neuron0x3d6e5f0()*0.0293206);
}

double NNfunction_tb_t2t2::synapse0x3d740d0() {
   return (neuron0x3d6e930()*0.18605);
}

double NNfunction_tb_t2t2::synapse0x3d74450() {
   return (neuron0x3d69ce0()*0.0192362);
}

double NNfunction_tb_t2t2::synapse0x3d74490() {
   return (neuron0x3d69f90()*-0.108749);
}

double NNfunction_tb_t2t2::synapse0x3d744d0() {
   return (neuron0x3d6a2d0()*-0.116474);
}

double NNfunction_tb_t2t2::synapse0x3d74510() {
   return (neuron0x3d6a610()*0.0251238);
}

double NNfunction_tb_t2t2::synapse0x3d74550() {
   return (neuron0x3d6a950()*-0.0426309);
}

double NNfunction_tb_t2t2::synapse0x3d74590() {
   return (neuron0x3d6ac90()*-0.0453102);
}

double NNfunction_tb_t2t2::synapse0x3d745d0() {
   return (neuron0x3d6afd0()*-0.0188065);
}

double NNfunction_tb_t2t2::synapse0x3d74610() {
   return (neuron0x3d6b310()*0.0631831);
}

double NNfunction_tb_t2t2::synapse0x3d74650() {
   return (neuron0x3d6b650()*0.26561);
}

double NNfunction_tb_t2t2::synapse0x3d74690() {
   return (neuron0x3d6b990()*0.00408983);
}

double NNfunction_tb_t2t2::synapse0x3d746d0() {
   return (neuron0x3d6bcd0()*0.00259759);
}

double NNfunction_tb_t2t2::synapse0x3d74710() {
   return (neuron0x3d6c010()*0.225621);
}

double NNfunction_tb_t2t2::synapse0x3d74750() {
   return (neuron0x3d6c350()*0.104766);
}

double NNfunction_tb_t2t2::synapse0x3d74790() {
   return (neuron0x3d6c690()*0.268342);
}

double NNfunction_tb_t2t2::synapse0x3d747d0() {
   return (neuron0x3d6c9d0()*-0.0023404);
}

double NNfunction_tb_t2t2::synapse0x3d74810() {
   return (neuron0x3d6cd10()*-0.0371611);
}

double NNfunction_tb_t2t2::synapse0x3d742a0() {
   return (neuron0x3d6d050()*1.049);
}

double NNfunction_tb_t2t2::synapse0x3d742e0() {
   return (neuron0x3d6d5b0()*-0.214674);
}

double NNfunction_tb_t2t2::synapse0x3d74960() {
   return (neuron0x3d6d8f0()*0.14299);
}

double NNfunction_tb_t2t2::synapse0x3d749a0() {
   return (neuron0x3d6dc30()*0.013181);
}

double NNfunction_tb_t2t2::synapse0x3d749e0() {
   return (neuron0x3d6df70()*0.0839951);
}

double NNfunction_tb_t2t2::synapse0x3d74a20() {
   return (neuron0x3d6e2b0()*0.000793923);
}

double NNfunction_tb_t2t2::synapse0x3d74a60() {
   return (neuron0x3d6e5f0()*-0.0317257);
}

double NNfunction_tb_t2t2::synapse0x3d74aa0() {
   return (neuron0x3d6e930()*-0.0837617);
}

double NNfunction_tb_t2t2::synapse0x3d6d4a0() {
   return (neuron0x3d69ce0()*-0.112914);
}

double NNfunction_tb_t2t2::synapse0x3d6d4e0() {
   return (neuron0x3d69f90()*-0.0475845);
}

double NNfunction_tb_t2t2::synapse0x3d6d520() {
   return (neuron0x3d6a2d0()*-0.0652242);
}

double NNfunction_tb_t2t2::synapse0x3d6d560() {
   return (neuron0x3d6a610()*0.0646827);
}

double NNfunction_tb_t2t2::synapse0x3d75030() {
   return (neuron0x3d6a950()*0.0227049);
}

double NNfunction_tb_t2t2::synapse0x3d75070() {
   return (neuron0x3d6ac90()*0.882393);
}

double NNfunction_tb_t2t2::synapse0x3d750b0() {
   return (neuron0x3d6afd0()*0.157804);
}

double NNfunction_tb_t2t2::synapse0x3d750f0() {
   return (neuron0x3d6b310()*0.054603);
}

double NNfunction_tb_t2t2::synapse0x3d75130() {
   return (neuron0x3d6b650()*-0.236492);
}

double NNfunction_tb_t2t2::synapse0x3d75170() {
   return (neuron0x3d6b990()*-0.0863514);
}

double NNfunction_tb_t2t2::synapse0x3d751b0() {
   return (neuron0x3d6bcd0()*-0.168568);
}

double NNfunction_tb_t2t2::synapse0x3d751f0() {
   return (neuron0x3d6c010()*0.00545905);
}

double NNfunction_tb_t2t2::synapse0x3d75230() {
   return (neuron0x3d6c350()*0.0804967);
}

double NNfunction_tb_t2t2::synapse0x3d75270() {
   return (neuron0x3d6c690()*-0.07105);
}

double NNfunction_tb_t2t2::synapse0x3d752b0() {
   return (neuron0x3d6c9d0()*0.0603113);
}

double NNfunction_tb_t2t2::synapse0x3d752f0() {
   return (neuron0x3d6cd10()*0.0414663);
}

double NNfunction_tb_t2t2::synapse0x3d74c70() {
   return (neuron0x3d6d050()*-0.0192211);
}

double NNfunction_tb_t2t2::synapse0x3d74cb0() {
   return (neuron0x3d6d5b0()*-0.0729299);
}

double NNfunction_tb_t2t2::synapse0x3d75440() {
   return (neuron0x3d6d8f0()*-0.0574344);
}

double NNfunction_tb_t2t2::synapse0x3d75480() {
   return (neuron0x3d6dc30()*-0.0629616);
}

double NNfunction_tb_t2t2::synapse0x3d754c0() {
   return (neuron0x3d6df70()*0.168442);
}

double NNfunction_tb_t2t2::synapse0x3d75500() {
   return (neuron0x3d6e2b0()*0.0644936);
}

double NNfunction_tb_t2t2::synapse0x3d75540() {
   return (neuron0x3d6e5f0()*-0.047509);
}

double NNfunction_tb_t2t2::synapse0x3d75580() {
   return (neuron0x3d6e930()*-0.218043);
}

double NNfunction_tb_t2t2::synapse0x3d75900() {
   return (neuron0x3d69ce0()*-0.936516);
}

double NNfunction_tb_t2t2::synapse0x3d75940() {
   return (neuron0x3d69f90()*-0.00432244);
}

double NNfunction_tb_t2t2::synapse0x3d75980() {
   return (neuron0x3d6a2d0()*0.0649371);
}

double NNfunction_tb_t2t2::synapse0x3d759c0() {
   return (neuron0x3d6a610()*-0.0565252);
}

double NNfunction_tb_t2t2::synapse0x3d75a00() {
   return (neuron0x3d6a950()*0.000598408);
}

double NNfunction_tb_t2t2::synapse0x3d75a40() {
   return (neuron0x3d6ac90()*0.0663637);
}

double NNfunction_tb_t2t2::synapse0x3d75a80() {
   return (neuron0x3d6afd0()*0.0106074);
}

double NNfunction_tb_t2t2::synapse0x3d75ac0() {
   return (neuron0x3d6b310()*-0.0129898);
}

double NNfunction_tb_t2t2::synapse0x3d75b00() {
   return (neuron0x3d6b650()*-0.0120824);
}

double NNfunction_tb_t2t2::synapse0x3d75b40() {
   return (neuron0x3d6b990()*0.0339166);
}

double NNfunction_tb_t2t2::synapse0x3d75b80() {
   return (neuron0x3d6bcd0()*-0.051324);
}

double NNfunction_tb_t2t2::synapse0x3d75bc0() {
   return (neuron0x3d6c010()*-0.0281738);
}

double NNfunction_tb_t2t2::synapse0x3d75c00() {
   return (neuron0x3d6c350()*0.0380872);
}

double NNfunction_tb_t2t2::synapse0x3d75c40() {
   return (neuron0x3d6c690()*-0.516079);
}

double NNfunction_tb_t2t2::synapse0x3d75c80() {
   return (neuron0x3d6c9d0()*-0.000614413);
}

double NNfunction_tb_t2t2::synapse0x3d75cc0() {
   return (neuron0x3d6cd10()*0.026184);
}

double NNfunction_tb_t2t2::synapse0x3d75750() {
   return (neuron0x3d6d050()*0.435907);
}

double NNfunction_tb_t2t2::synapse0x3d75790() {
   return (neuron0x3d6d5b0()*0.02666);
}

double NNfunction_tb_t2t2::synapse0x3d75e10() {
   return (neuron0x3d6d8f0()*-0.0242316);
}

double NNfunction_tb_t2t2::synapse0x3d75e50() {
   return (neuron0x3d6dc30()*-0.730107);
}

double NNfunction_tb_t2t2::synapse0x3d75e90() {
   return (neuron0x3d6df70()*-0.313974);
}

double NNfunction_tb_t2t2::synapse0x3d75ed0() {
   return (neuron0x3d6e2b0()*0.191854);
}

double NNfunction_tb_t2t2::synapse0x3d75f10() {
   return (neuron0x3d6e5f0()*-0.00664313);
}

double NNfunction_tb_t2t2::synapse0x3d75f50() {
   return (neuron0x3d6e930()*-0.0777009);
}

double NNfunction_tb_t2t2::synapse0x3d762d0() {
   return (neuron0x3d69ce0()*0.412959);
}

double NNfunction_tb_t2t2::synapse0x3d76310() {
   return (neuron0x3d69f90()*0.307564);
}

double NNfunction_tb_t2t2::synapse0x3d76350() {
   return (neuron0x3d6a2d0()*0.21027);
}

double NNfunction_tb_t2t2::synapse0x3d76390() {
   return (neuron0x3d6a610()*0.179313);
}

double NNfunction_tb_t2t2::synapse0x3d763d0() {
   return (neuron0x3d6a950()*0.254677);
}

double NNfunction_tb_t2t2::synapse0x3d76410() {
   return (neuron0x3d6ac90()*-0.124625);
}

double NNfunction_tb_t2t2::synapse0x3d76450() {
   return (neuron0x3d6afd0()*-0.019511);
}

double NNfunction_tb_t2t2::synapse0x3d76490() {
   return (neuron0x3d6b310()*0.0447593);
}

double NNfunction_tb_t2t2::synapse0x3d764d0() {
   return (neuron0x3d6b650()*0.098354);
}

double NNfunction_tb_t2t2::synapse0x3d76510() {
   return (neuron0x3d6b990()*0.0594386);
}

double NNfunction_tb_t2t2::synapse0x3d76550() {
   return (neuron0x3d6bcd0()*0.151211);
}

double NNfunction_tb_t2t2::synapse0x3d76590() {
   return (neuron0x3d6c010()*-0.0210074);
}

double NNfunction_tb_t2t2::synapse0x3d765d0() {
   return (neuron0x3d6c350()*0.0291886);
}

double NNfunction_tb_t2t2::synapse0x3d76610() {
   return (neuron0x3d6c690()*0.874565);
}

double NNfunction_tb_t2t2::synapse0x3d76650() {
   return (neuron0x3d6c9d0()*-0.0881036);
}

double NNfunction_tb_t2t2::synapse0x3d76690() {
   return (neuron0x3d6cd10()*-0.0942536);
}

double NNfunction_tb_t2t2::synapse0x3d76120() {
   return (neuron0x3d6d050()*-0.661783);
}

double NNfunction_tb_t2t2::synapse0x3d76160() {
   return (neuron0x3d6d5b0()*0.00395227);
}

double NNfunction_tb_t2t2::synapse0x3d72ef0() {
   return (neuron0x3d6d8f0()*0.00758022);
}

double NNfunction_tb_t2t2::synapse0x3d72f30() {
   return (neuron0x3d6dc30()*0.105176);
}

double NNfunction_tb_t2t2::synapse0x3d72f70() {
   return (neuron0x3d6df70()*-0.258057);
}

double NNfunction_tb_t2t2::synapse0x3d72fb0() {
   return (neuron0x3d6e2b0()*-0.0695418);
}

double NNfunction_tb_t2t2::synapse0x3d72ff0() {
   return (neuron0x3d6e5f0()*0.0363391);
}

double NNfunction_tb_t2t2::synapse0x3d73030() {
   return (neuron0x3d6e930()*0.150826);
}

double NNfunction_tb_t2t2::synapse0x3d733b0() {
   return (neuron0x3d69ce0()*-0.00752621);
}

double NNfunction_tb_t2t2::synapse0x3d733f0() {
   return (neuron0x3d69f90()*-0.00174649);
}

double NNfunction_tb_t2t2::synapse0x3d73430() {
   return (neuron0x3d6a2d0()*-0.00987879);
}

double NNfunction_tb_t2t2::synapse0x3d73470() {
   return (neuron0x3d6a610()*-0.00219113);
}

double NNfunction_tb_t2t2::synapse0x3d734b0() {
   return (neuron0x3d6a950()*0.00674728);
}

double NNfunction_tb_t2t2::synapse0x3d734f0() {
   return (neuron0x3d6ac90()*0.000454272);
}

double NNfunction_tb_t2t2::synapse0x3d73530() {
   return (neuron0x3d6afd0()*0.00761659);
}

double NNfunction_tb_t2t2::synapse0x3d73570() {
   return (neuron0x3d6b310()*-0.00181706);
}

double NNfunction_tb_t2t2::synapse0x3d735b0() {
   return (neuron0x3d6b650()*0.000981639);
}

double NNfunction_tb_t2t2::synapse0x3d735f0() {
   return (neuron0x3d6b990()*-0.0075901);
}

double NNfunction_tb_t2t2::synapse0x3d73630() {
   return (neuron0x3d6bcd0()*-0.00252757);
}

double NNfunction_tb_t2t2::synapse0x3d73670() {
   return (neuron0x3d6c010()*0.00390494);
}

double NNfunction_tb_t2t2::synapse0x3d736b0() {
   return (neuron0x3d6c350()*-0.0034689);
}

double NNfunction_tb_t2t2::synapse0x3d777f0() {
   return (neuron0x3d6c690()*-0.880454);
}

double NNfunction_tb_t2t2::synapse0x3d77830() {
   return (neuron0x3d6c9d0()*-0.00181894);
}

double NNfunction_tb_t2t2::synapse0x3d77870() {
   return (neuron0x3d6cd10()*0.0024615);
}

double NNfunction_tb_t2t2::synapse0x3d73200() {
   return (neuron0x3d6d050()*0.646331);
}

double NNfunction_tb_t2t2::synapse0x3d73240() {
   return (neuron0x3d6d5b0()*0.00108488);
}

double NNfunction_tb_t2t2::synapse0x3d779c0() {
   return (neuron0x3d6d8f0()*-0.00154695);
}

double NNfunction_tb_t2t2::synapse0x3d77a00() {
   return (neuron0x3d6dc30()*-0.00616097);
}

double NNfunction_tb_t2t2::synapse0x3d77a40() {
   return (neuron0x3d6df70()*0.0559524);
}

double NNfunction_tb_t2t2::synapse0x3d77a80() {
   return (neuron0x3d6e2b0()*0.0018651);
}

double NNfunction_tb_t2t2::synapse0x3d77ac0() {
   return (neuron0x3d6e5f0()*0.00104739);
}

double NNfunction_tb_t2t2::synapse0x3d77b00() {
   return (neuron0x3d6e930()*-0.0156698);
}

double NNfunction_tb_t2t2::synapse0x3d77e80() {
   return (neuron0x3d69ce0()*-0.0626288);
}

double NNfunction_tb_t2t2::synapse0x3d77ec0() {
   return (neuron0x3d69f90()*-0.00510885);
}

double NNfunction_tb_t2t2::synapse0x3d77f00() {
   return (neuron0x3d6a2d0()*-0.162662);
}

double NNfunction_tb_t2t2::synapse0x3d77f40() {
   return (neuron0x3d6a610()*-0.408835);
}

double NNfunction_tb_t2t2::synapse0x3d77f80() {
   return (neuron0x3d6a950()*0.0834563);
}

double NNfunction_tb_t2t2::synapse0x3d77fc0() {
   return (neuron0x3d6ac90()*-0.0396526);
}

double NNfunction_tb_t2t2::synapse0x3d78000() {
   return (neuron0x3d6afd0()*-0.0124316);
}

double NNfunction_tb_t2t2::synapse0x3d78040() {
   return (neuron0x3d6b310()*0.0277658);
}

double NNfunction_tb_t2t2::synapse0x3d78080() {
   return (neuron0x3d6b650()*0.0106517);
}

double NNfunction_tb_t2t2::synapse0x3d780c0() {
   return (neuron0x3d6b990()*-0.032733);
}

double NNfunction_tb_t2t2::synapse0x3d78100() {
   return (neuron0x3d6bcd0()*-0.00228519);
}

double NNfunction_tb_t2t2::synapse0x3d78140() {
   return (neuron0x3d6c010()*-0.0404226);
}

double NNfunction_tb_t2t2::synapse0x3d78180() {
   return (neuron0x3d6c350()*-0.0294791);
}

double NNfunction_tb_t2t2::synapse0x3d781c0() {
   return (neuron0x3d6c690()*-0.00469453);
}

double NNfunction_tb_t2t2::synapse0x3d78200() {
   return (neuron0x3d6c9d0()*-0.00998969);
}

double NNfunction_tb_t2t2::synapse0x3d78240() {
   return (neuron0x3d6cd10()*0.0110173);
}

double NNfunction_tb_t2t2::synapse0x3d77cd0() {
   return (neuron0x3d6d050()*0.293744);
}

double NNfunction_tb_t2t2::synapse0x3d77d10() {
   return (neuron0x3d6d5b0()*0.0261263);
}

double NNfunction_tb_t2t2::synapse0x3d78390() {
   return (neuron0x3d6d8f0()*-0.0140784);
}

double NNfunction_tb_t2t2::synapse0x3d783d0() {
   return (neuron0x3d6dc30()*-0.0473113);
}

double NNfunction_tb_t2t2::synapse0x3d78410() {
   return (neuron0x3d6df70()*0.0278181);
}

double NNfunction_tb_t2t2::synapse0x3d78450() {
   return (neuron0x3d6e2b0()*-0.00721329);
}

double NNfunction_tb_t2t2::synapse0x3d78490() {
   return (neuron0x3d6e5f0()*0.00388762);
}

double NNfunction_tb_t2t2::synapse0x3d784d0() {
   return (neuron0x3d6e930()*-0.57744);
}

double NNfunction_tb_t2t2::synapse0x3d78850() {
   return (neuron0x3d69ce0()*0.0174459);
}

double NNfunction_tb_t2t2::synapse0x3d78890() {
   return (neuron0x3d69f90()*-0.0978121);
}

double NNfunction_tb_t2t2::synapse0x3d788d0() {
   return (neuron0x3d6a2d0()*0.109048);
}

double NNfunction_tb_t2t2::synapse0x3d78910() {
   return (neuron0x3d6a610()*-0.270587);
}

double NNfunction_tb_t2t2::synapse0x3d78950() {
   return (neuron0x3d6a950()*-0.00766951);
}

double NNfunction_tb_t2t2::synapse0x3d78990() {
   return (neuron0x3d6ac90()*-0.0832404);
}

double NNfunction_tb_t2t2::synapse0x3d789d0() {
   return (neuron0x3d6afd0()*-0.0395469);
}

double NNfunction_tb_t2t2::synapse0x3d78a10() {
   return (neuron0x3d6b310()*-0.0148547);
}

double NNfunction_tb_t2t2::synapse0x3d78a50() {
   return (neuron0x3d6b650()*0.153478);
}

double NNfunction_tb_t2t2::synapse0x3d78a90() {
   return (neuron0x3d6b990()*0.174802);
}

double NNfunction_tb_t2t2::synapse0x3d78ad0() {
   return (neuron0x3d6bcd0()*0.0381188);
}

double NNfunction_tb_t2t2::synapse0x3d78b10() {
   return (neuron0x3d6c010()*-0.070205);
}

double NNfunction_tb_t2t2::synapse0x3d78b50() {
   return (neuron0x3d6c350()*-0.453079);
}

double NNfunction_tb_t2t2::synapse0x3d78b90() {
   return (neuron0x3d6c690()*0.665789);
}

double NNfunction_tb_t2t2::synapse0x3d78bd0() {
   return (neuron0x3d6c9d0()*-0.00617151);
}

double NNfunction_tb_t2t2::synapse0x3d78c10() {
   return (neuron0x3d6cd10()*-0.00948013);
}

double NNfunction_tb_t2t2::synapse0x3d786a0() {
   return (neuron0x3d6d050()*-0.304444);
}

double NNfunction_tb_t2t2::synapse0x3d786e0() {
   return (neuron0x3d6d5b0()*0.107458);
}

double NNfunction_tb_t2t2::synapse0x3d78d60() {
   return (neuron0x3d6d8f0()*0.0841801);
}

double NNfunction_tb_t2t2::synapse0x3d78da0() {
   return (neuron0x3d6dc30()*0.0985656);
}

double NNfunction_tb_t2t2::synapse0x3d78de0() {
   return (neuron0x3d6df70()*-0.190817);
}

double NNfunction_tb_t2t2::synapse0x3d78e20() {
   return (neuron0x3d6e2b0()*-0.0690443);
}

double NNfunction_tb_t2t2::synapse0x3d78e60() {
   return (neuron0x3d6e5f0()*0.0303597);
}

double NNfunction_tb_t2t2::synapse0x3d78ea0() {
   return (neuron0x3d6e930()*0.470083);
}

double NNfunction_tb_t2t2::synapse0x3d79220() {
   return (neuron0x3d69ce0()*-0.0910996);
}

double NNfunction_tb_t2t2::synapse0x3d79260() {
   return (neuron0x3d69f90()*-0.0180661);
}

double NNfunction_tb_t2t2::synapse0x3d792a0() {
   return (neuron0x3d6a2d0()*-0.0469799);
}

double NNfunction_tb_t2t2::synapse0x3d792e0() {
   return (neuron0x3d6a610()*0.0280867);
}

double NNfunction_tb_t2t2::synapse0x3d79320() {
   return (neuron0x3d6a950()*0.050803);
}

double NNfunction_tb_t2t2::synapse0x3d79360() {
   return (neuron0x3d6ac90()*-0.0173676);
}

double NNfunction_tb_t2t2::synapse0x3d793a0() {
   return (neuron0x3d6afd0()*-0.0478279);
}

double NNfunction_tb_t2t2::synapse0x3d793e0() {
   return (neuron0x3d6b310()*-0.142225);
}

double NNfunction_tb_t2t2::synapse0x3d79420() {
   return (neuron0x3d6b650()*-0.0418688);
}

double NNfunction_tb_t2t2::synapse0x3d79460() {
   return (neuron0x3d6b990()*0.0247288);
}

double NNfunction_tb_t2t2::synapse0x3d794a0() {
   return (neuron0x3d6bcd0()*0.00910919);
}

double NNfunction_tb_t2t2::synapse0x3d794e0() {
   return (neuron0x3d6c010()*0.0314198);
}

double NNfunction_tb_t2t2::synapse0x3d79520() {
   return (neuron0x3d6c350()*0.0393276);
}

double NNfunction_tb_t2t2::synapse0x3d79560() {
   return (neuron0x3d6c690()*0.800945);
}

double NNfunction_tb_t2t2::synapse0x3d795a0() {
   return (neuron0x3d6c9d0()*-0.0375329);
}

double NNfunction_tb_t2t2::synapse0x3d795e0() {
   return (neuron0x3d6cd10()*-0.0323022);
}

double NNfunction_tb_t2t2::synapse0x3d79070() {
   return (neuron0x3d6d050()*-1.12701);
}

double NNfunction_tb_t2t2::synapse0x3d790b0() {
   return (neuron0x3d6d5b0()*0.0502326);
}

double NNfunction_tb_t2t2::synapse0x3d79730() {
   return (neuron0x3d6d8f0()*0.00943362);
}

double NNfunction_tb_t2t2::synapse0x3d79770() {
   return (neuron0x3d6dc30()*-0.0063755);
}

double NNfunction_tb_t2t2::synapse0x3d797b0() {
   return (neuron0x3d6df70()*-0.59641);
}

double NNfunction_tb_t2t2::synapse0x3d797f0() {
   return (neuron0x3d6e2b0()*0.0158902);
}

double NNfunction_tb_t2t2::synapse0x3d79830() {
   return (neuron0x3d6e5f0()*0.0104804);
}

double NNfunction_tb_t2t2::synapse0x3d79870() {
   return (neuron0x3d6e930()*-0.0123297);
}

double NNfunction_tb_t2t2::synapse0x3d79bf0() {
   return (neuron0x3d69ce0()*0.0165208);
}

double NNfunction_tb_t2t2::synapse0x3d69e70() {
   return (neuron0x3d69f90()*-0.0406285);
}

double NNfunction_tb_t2t2::synapse0x3d69eb0() {
   return (neuron0x3d6a2d0()*-0.0117044);
}

double NNfunction_tb_t2t2::synapse0x3d6a1b0() {
   return (neuron0x3d6a610()*1.04659);
}

double NNfunction_tb_t2t2::synapse0x3d6a1f0() {
   return (neuron0x3d6a950()*0.0411166);
}

double NNfunction_tb_t2t2::synapse0x3d6a4f0() {
   return (neuron0x3d6ac90()*-0.0287001);
}

double NNfunction_tb_t2t2::synapse0x3d6a530() {
   return (neuron0x3d6afd0()*0.00201646);
}

double NNfunction_tb_t2t2::synapse0x3d6a830() {
   return (neuron0x3d6b310()*0.00567008);
}

double NNfunction_tb_t2t2::synapse0x3d6a870() {
   return (neuron0x3d6b650()*0.0165911);
}

double NNfunction_tb_t2t2::synapse0x3d6ab70() {
   return (neuron0x3d6b990()*-0.0253891);
}

double NNfunction_tb_t2t2::synapse0x3d6abb0() {
   return (neuron0x3d6bcd0()*0.0225718);
}

double NNfunction_tb_t2t2::synapse0x3d6aeb0() {
   return (neuron0x3d6c010()*-0.024965);
}

double NNfunction_tb_t2t2::synapse0x3d6aef0() {
   return (neuron0x3d6c350()*-0.016913);
}

double NNfunction_tb_t2t2::synapse0x3d6b1f0() {
   return (neuron0x3d6c690()*0.257851);
}

double NNfunction_tb_t2t2::synapse0x3d6b230() {
   return (neuron0x3d6c9d0()*0.000716392);
}

double NNfunction_tb_t2t2::synapse0x3d6b530() {
   return (neuron0x3d6cd10()*0.00470579);
}

double NNfunction_tb_t2t2::synapse0x3d6b570() {
   return (neuron0x3d6d050()*0.170499);
}

double NNfunction_tb_t2t2::synapse0x3d6b870() {
   return (neuron0x3d6d5b0()*-0.00237124);
}

double NNfunction_tb_t2t2::synapse0x3d6b8b0() {
   return (neuron0x3d6d8f0()*-0.0522626);
}

double NNfunction_tb_t2t2::synapse0x3d6bbb0() {
   return (neuron0x3d6dc30()*-0.0343188);
}

double NNfunction_tb_t2t2::synapse0x3d6bbf0() {
   return (neuron0x3d6df70()*0.0910623);
}

double NNfunction_tb_t2t2::synapse0x3d6bef0() {
   return (neuron0x3d6e2b0()*0.0386507);
}

double NNfunction_tb_t2t2::synapse0x3d6bf30() {
   return (neuron0x3d6e5f0()*-0.0234482);
}

double NNfunction_tb_t2t2::synapse0x3d6c230() {
   return (neuron0x3d6e930()*0.0261305);
}

double NNfunction_tb_t2t2::synapse0x3d6c270() {
   return (neuron0x3d69ce0()*0.016247);
}

double NNfunction_tb_t2t2::synapse0x3d6cf30() {
   return (neuron0x3d69f90()*-0.00226636);
}

double NNfunction_tb_t2t2::synapse0x3d6cf70() {
   return (neuron0x3d6a2d0()*-0.303108);
}

double NNfunction_tb_t2t2::synapse0x3d79a40() {
   return (neuron0x3d6a610()*0.108072);
}

double NNfunction_tb_t2t2::synapse0x3d79a80() {
   return (neuron0x3d6a950()*-0.0301046);
}

double NNfunction_tb_t2t2::synapse0x3d6d270() {
   return (neuron0x3d6ac90()*-0.0108171);
}

double NNfunction_tb_t2t2::synapse0x3d6d2b0() {
   return (neuron0x3d6afd0()*-0.0299244);
}

double NNfunction_tb_t2t2::synapse0x3d6d7d0() {
   return (neuron0x3d6b310()*0.0722699);
}

double NNfunction_tb_t2t2::synapse0x3d6d810() {
   return (neuron0x3d6b650()*-0.0580521);
}

double NNfunction_tb_t2t2::synapse0x3d6db10() {
   return (neuron0x3d6b990()*-0.0052484);
}

double NNfunction_tb_t2t2::synapse0x3d6db50() {
   return (neuron0x3d6bcd0()*-0.0170241);
}

double NNfunction_tb_t2t2::synapse0x3d6de50() {
   return (neuron0x3d6c010()*-0.0361125);
}

double NNfunction_tb_t2t2::synapse0x3d6de90() {
   return (neuron0x3d6c350()*0.0043419);
}

double NNfunction_tb_t2t2::synapse0x3d6e190() {
   return (neuron0x3d6c690()*-1.83471);
}

double NNfunction_tb_t2t2::synapse0x3d6e1d0() {
   return (neuron0x3d6c9d0()*-0.00552711);
}

double NNfunction_tb_t2t2::synapse0x3d6e4d0() {
   return (neuron0x3d6cd10()*0.000211969);
}

double NNfunction_tb_t2t2::synapse0x3d6e510() {
   return (neuron0x3d6d050()*1.66154);
}

double NNfunction_tb_t2t2::synapse0x3d6e810() {
   return (neuron0x3d6d5b0()*-0.054983);
}

double NNfunction_tb_t2t2::synapse0x3d6e850() {
   return (neuron0x3d6d8f0()*0.00791041);
}

double NNfunction_tb_t2t2::synapse0x3d6eb50() {
   return (neuron0x3d6dc30()*-0.0397434);
}

double NNfunction_tb_t2t2::synapse0x3d6eb90() {
   return (neuron0x3d6df70()*-0.372244);
}

double NNfunction_tb_t2t2::synapse0x3d6c570() {
   return (neuron0x3d6e2b0()*-0.0400037);
}

double NNfunction_tb_t2t2::synapse0x3d6c5b0() {
   return (neuron0x3d6e5f0()*-0.0214773);
}

double NNfunction_tb_t2t2::synapse0x3d7b960() {
   return (neuron0x3d6e930()*-0.039837);
}

double NNfunction_tb_t2t2::synapse0x3d7bce0() {
   return (neuron0x3d69ce0()*0.0292513);
}

double NNfunction_tb_t2t2::synapse0x3d7bd20() {
   return (neuron0x3d69f90()*0.0314904);
}

double NNfunction_tb_t2t2::synapse0x3d7bd60() {
   return (neuron0x3d6a2d0()*-0.0233526);
}

double NNfunction_tb_t2t2::synapse0x3d7bda0() {
   return (neuron0x3d6a610()*-0.0807967);
}

double NNfunction_tb_t2t2::synapse0x3d7bde0() {
   return (neuron0x3d6a950()*0.00772435);
}

double NNfunction_tb_t2t2::synapse0x3d7be20() {
   return (neuron0x3d6ac90()*0.0308308);
}

double NNfunction_tb_t2t2::synapse0x3d7be60() {
   return (neuron0x3d6afd0()*-0.0268318);
}

double NNfunction_tb_t2t2::synapse0x3d7bea0() {
   return (neuron0x3d6b310()*0.00174049);
}

double NNfunction_tb_t2t2::synapse0x3d7bee0() {
   return (neuron0x3d6b650()*-0.1948);
}

double NNfunction_tb_t2t2::synapse0x3d7bf20() {
   return (neuron0x3d6b990()*0.100648);
}

double NNfunction_tb_t2t2::synapse0x3d7bf60() {
   return (neuron0x3d6bcd0()*0.170023);
}

double NNfunction_tb_t2t2::synapse0x3d7bfa0() {
   return (neuron0x3d6c010()*0.430383);
}

double NNfunction_tb_t2t2::synapse0x3d7bfe0() {
   return (neuron0x3d6c350()*-0.246503);
}

double NNfunction_tb_t2t2::synapse0x3d7c020() {
   return (neuron0x3d6c690()*-0.0152339);
}

double NNfunction_tb_t2t2::synapse0x3d7c060() {
   return (neuron0x3d6c9d0()*-0.0329503);
}

double NNfunction_tb_t2t2::synapse0x3d7c0a0() {
   return (neuron0x3d6cd10()*0.047926);
}

double NNfunction_tb_t2t2::synapse0x3d7bb30() {
   return (neuron0x3d6d050()*0.102022);
}

double NNfunction_tb_t2t2::synapse0x3d7bb70() {
   return (neuron0x3d6d5b0()*-0.264061);
}

double NNfunction_tb_t2t2::synapse0x3d7c1f0() {
   return (neuron0x3d6d8f0()*-0.141488);
}

double NNfunction_tb_t2t2::synapse0x3d7c230() {
   return (neuron0x3d6dc30()*-0.0798677);
}

double NNfunction_tb_t2t2::synapse0x3d7c270() {
   return (neuron0x3d6df70()*0.128806);
}

double NNfunction_tb_t2t2::synapse0x3d7c2b0() {
   return (neuron0x3d6e2b0()*0.0130209);
}

double NNfunction_tb_t2t2::synapse0x3d7c2f0() {
   return (neuron0x3d6e5f0()*0.00562296);
}

double NNfunction_tb_t2t2::synapse0x3d7c330() {
   return (neuron0x3d6e930()*-0.596327);
}

double NNfunction_tb_t2t2::synapse0x3d7c6b0() {
   return (neuron0x3d69ce0()*0.0292339);
}

double NNfunction_tb_t2t2::synapse0x3d7c6f0() {
   return (neuron0x3d69f90()*-0.016376);
}

double NNfunction_tb_t2t2::synapse0x3d7c730() {
   return (neuron0x3d6a2d0()*-0.00239086);
}

double NNfunction_tb_t2t2::synapse0x3d7c770() {
   return (neuron0x3d6a610()*0.13619);
}

double NNfunction_tb_t2t2::synapse0x3d7c7b0() {
   return (neuron0x3d6a950()*0.0526609);
}

double NNfunction_tb_t2t2::synapse0x3d7c7f0() {
   return (neuron0x3d6ac90()*-0.0112879);
}

double NNfunction_tb_t2t2::synapse0x3d7c830() {
   return (neuron0x3d6afd0()*0.016881);
}

double NNfunction_tb_t2t2::synapse0x3d7c870() {
   return (neuron0x3d6b310()*0.00649655);
}

double NNfunction_tb_t2t2::synapse0x3d7c8b0() {
   return (neuron0x3d6b650()*0.00963281);
}

double NNfunction_tb_t2t2::synapse0x3d7c8f0() {
   return (neuron0x3d6b990()*0.0152813);
}

double NNfunction_tb_t2t2::synapse0x3d7c930() {
   return (neuron0x3d6bcd0()*-0.00794665);
}

double NNfunction_tb_t2t2::synapse0x3d7c970() {
   return (neuron0x3d6c010()*-0.00641482);
}

double NNfunction_tb_t2t2::synapse0x3d7c9b0() {
   return (neuron0x3d6c350()*-0.0160766);
}

double NNfunction_tb_t2t2::synapse0x3d7c9f0() {
   return (neuron0x3d6c690()*-0.211433);
}

double NNfunction_tb_t2t2::synapse0x3d7ca30() {
   return (neuron0x3d6c9d0()*0.0166588);
}

double NNfunction_tb_t2t2::synapse0x3d7ca70() {
   return (neuron0x3d6cd10()*0.0125565);
}

double NNfunction_tb_t2t2::synapse0x3d7c500() {
   return (neuron0x3d6d050()*0.445337);
}

double NNfunction_tb_t2t2::synapse0x3d7c540() {
   return (neuron0x3d6d5b0()*-0.0122762);
}

double NNfunction_tb_t2t2::synapse0x3d7cbc0() {
   return (neuron0x3d6d8f0()*-0.000610069);
}

double NNfunction_tb_t2t2::synapse0x3d7cc00() {
   return (neuron0x3d6dc30()*-0.0191163);
}

double NNfunction_tb_t2t2::synapse0x3d7cc40() {
   return (neuron0x3d6df70()*-3.6804);
}

double NNfunction_tb_t2t2::synapse0x3d7cc80() {
   return (neuron0x3d6e2b0()*0.0198579);
}

double NNfunction_tb_t2t2::synapse0x3d7ccc0() {
   return (neuron0x3d6e5f0()*0.00314781);
}

double NNfunction_tb_t2t2::synapse0x3d7cd00() {
   return (neuron0x3d6e930()*0.486245);
}

double NNfunction_tb_t2t2::synapse0x3d7d080() {
   return (neuron0x3d69ce0()*0.0495508);
}

double NNfunction_tb_t2t2::synapse0x3d7d0c0() {
   return (neuron0x3d69f90()*-0.00195);
}

double NNfunction_tb_t2t2::synapse0x3d7d100() {
   return (neuron0x3d6a2d0()*0.0733522);
}

double NNfunction_tb_t2t2::synapse0x3d7d140() {
   return (neuron0x3d6a610()*0.0227147);
}

double NNfunction_tb_t2t2::synapse0x3d7d180() {
   return (neuron0x3d6a950()*-0.0988508);
}

double NNfunction_tb_t2t2::synapse0x3d7d1c0() {
   return (neuron0x3d6ac90()*0.0150368);
}

double NNfunction_tb_t2t2::synapse0x3d7d200() {
   return (neuron0x3d6afd0()*-0.0333451);
}

double NNfunction_tb_t2t2::synapse0x3d7d240() {
   return (neuron0x3d6b310()*-0.00971172);
}

double NNfunction_tb_t2t2::synapse0x3d7d280() {
   return (neuron0x3d6b650()*-0.0223831);
}

double NNfunction_tb_t2t2::synapse0x3d7d2c0() {
   return (neuron0x3d6b990()*0.0125928);
}

double NNfunction_tb_t2t2::synapse0x3d7d300() {
   return (neuron0x3d6bcd0()*-0.014804);
}

double NNfunction_tb_t2t2::synapse0x3d7d340() {
   return (neuron0x3d6c010()*0.00491391);
}

double NNfunction_tb_t2t2::synapse0x3d7d380() {
   return (neuron0x3d6c350()*-0.00557163);
}

double NNfunction_tb_t2t2::synapse0x3d7d3c0() {
   return (neuron0x3d6c690()*-0.729325);
}

double NNfunction_tb_t2t2::synapse0x3d7d400() {
   return (neuron0x3d6c9d0()*-0.00027056);
}

double NNfunction_tb_t2t2::synapse0x3d7d440() {
   return (neuron0x3d6cd10()*-0.0064851);
}

double NNfunction_tb_t2t2::synapse0x3d7ced0() {
   return (neuron0x3d6d050()*0.142164);
}

double NNfunction_tb_t2t2::synapse0x3d7cf10() {
   return (neuron0x3d6d5b0()*-0.00309867);
}

double NNfunction_tb_t2t2::synapse0x3d7d590() {
   return (neuron0x3d6d8f0()*0.00818935);
}

double NNfunction_tb_t2t2::synapse0x3d7d5d0() {
   return (neuron0x3d6dc30()*0.0354864);
}

double NNfunction_tb_t2t2::synapse0x3d7d610() {
   return (neuron0x3d6df70()*0.909084);
}

double NNfunction_tb_t2t2::synapse0x3d7d650() {
   return (neuron0x3d6e2b0()*-0.0141379);
}

double NNfunction_tb_t2t2::synapse0x3d7d690() {
   return (neuron0x3d6e5f0()*0.0236451);
}

double NNfunction_tb_t2t2::synapse0x3d7d6d0() {
   return (neuron0x3d6e930()*-0.204413);
}

double NNfunction_tb_t2t2::synapse0x3d7da50() {
   return (neuron0x3d69ce0()*0.0255328);
}

double NNfunction_tb_t2t2::synapse0x3d7da90() {
   return (neuron0x3d69f90()*0.0122391);
}

double NNfunction_tb_t2t2::synapse0x3d7dad0() {
   return (neuron0x3d6a2d0()*-0.821534);
}

double NNfunction_tb_t2t2::synapse0x3d7db10() {
   return (neuron0x3d6a610()*0.0274635);
}

double NNfunction_tb_t2t2::synapse0x3d7db50() {
   return (neuron0x3d6a950()*0.0412584);
}

double NNfunction_tb_t2t2::synapse0x3d7db90() {
   return (neuron0x3d6ac90()*-0.0025238);
}

double NNfunction_tb_t2t2::synapse0x3d7dbd0() {
   return (neuron0x3d6afd0()*0.0314362);
}

double NNfunction_tb_t2t2::synapse0x3d7dc10() {
   return (neuron0x3d6b310()*0.00475568);
}

double NNfunction_tb_t2t2::synapse0x3d7dc50() {
   return (neuron0x3d6b650()*0.00254822);
}

double NNfunction_tb_t2t2::synapse0x3d7dc90() {
   return (neuron0x3d6b990()*0.0385962);
}

double NNfunction_tb_t2t2::synapse0x3d7dcd0() {
   return (neuron0x3d6bcd0()*-0.0104483);
}

double NNfunction_tb_t2t2::synapse0x3d7dd10() {
   return (neuron0x3d6c010()*-0.0124488);
}

double NNfunction_tb_t2t2::synapse0x3d7dd50() {
   return (neuron0x3d6c350()*0.0458387);
}

double NNfunction_tb_t2t2::synapse0x3d7dd90() {
   return (neuron0x3d6c690()*-0.0108011);
}

double NNfunction_tb_t2t2::synapse0x3d7ddd0() {
   return (neuron0x3d6c9d0()*0.0413127);
}

double NNfunction_tb_t2t2::synapse0x3d7de10() {
   return (neuron0x3d6cd10()*0.0314422);
}

double NNfunction_tb_t2t2::synapse0x3d7d8a0() {
   return (neuron0x3d6d050()*0.144757);
}

double NNfunction_tb_t2t2::synapse0x3d7d8e0() {
   return (neuron0x3d6d5b0()*-0.0214154);
}

double NNfunction_tb_t2t2::synapse0x3d7df60() {
   return (neuron0x3d6d8f0()*0.00416262);
}

double NNfunction_tb_t2t2::synapse0x3d7dfa0() {
   return (neuron0x3d6dc30()*0.0217107);
}

double NNfunction_tb_t2t2::synapse0x3d7dfe0() {
   return (neuron0x3d6df70()*0.19044);
}

double NNfunction_tb_t2t2::synapse0x3d7e020() {
   return (neuron0x3d6e2b0()*-0.0322587);
}

double NNfunction_tb_t2t2::synapse0x3d7e060() {
   return (neuron0x3d6e5f0()*0.0107349);
}

double NNfunction_tb_t2t2::synapse0x3d7e0a0() {
   return (neuron0x3d6e930()*0.059603);
}

double NNfunction_tb_t2t2::synapse0x3d7e420() {
   return (neuron0x3d69ce0()*-0.0878898);
}

double NNfunction_tb_t2t2::synapse0x3d7e460() {
   return (neuron0x3d69f90()*-0.0276156);
}

double NNfunction_tb_t2t2::synapse0x3d7e4a0() {
   return (neuron0x3d6a2d0()*0.802622);
}

double NNfunction_tb_t2t2::synapse0x3d7e4e0() {
   return (neuron0x3d6a610()*-0.0584797);
}

double NNfunction_tb_t2t2::synapse0x3d7e520() {
   return (neuron0x3d6a950()*-0.0551054);
}

double NNfunction_tb_t2t2::synapse0x3d7e560() {
   return (neuron0x3d6ac90()*0.0148875);
}

double NNfunction_tb_t2t2::synapse0x3d7e5a0() {
   return (neuron0x3d6afd0()*0.0106865);
}

double NNfunction_tb_t2t2::synapse0x3d7e5e0() {
   return (neuron0x3d6b310()*9.93168e-05);
}

double NNfunction_tb_t2t2::synapse0x3d7e620() {
   return (neuron0x3d6b650()*-0.0232155);
}

double NNfunction_tb_t2t2::synapse0x3d767e0() {
   return (neuron0x3d6b990()*-0.0944629);
}

double NNfunction_tb_t2t2::synapse0x3d76820() {
   return (neuron0x3d6bcd0()*-0.0196089);
}

double NNfunction_tb_t2t2::synapse0x3d76860() {
   return (neuron0x3d6c010()*0.0308126);
}

double NNfunction_tb_t2t2::synapse0x3d768a0() {
   return (neuron0x3d6c350()*-0.115414);
}

double NNfunction_tb_t2t2::synapse0x3d768e0() {
   return (neuron0x3d6c690()*-0.700891);
}

double NNfunction_tb_t2t2::synapse0x3d76920() {
   return (neuron0x3d6c9d0()*-0.0377203);
}

double NNfunction_tb_t2t2::synapse0x3d76960() {
   return (neuron0x3d6cd10()*-0.0238436);
}

double NNfunction_tb_t2t2::synapse0x3d7e270() {
   return (neuron0x3d6d050()*0.423579);
}

double NNfunction_tb_t2t2::synapse0x3d7e2b0() {
   return (neuron0x3d6d5b0()*0.0191797);
}

double NNfunction_tb_t2t2::synapse0x3d76ab0() {
   return (neuron0x3d6d8f0()*-0.00455199);
}

double NNfunction_tb_t2t2::synapse0x3d76af0() {
   return (neuron0x3d6dc30()*-0.0521639);
}

double NNfunction_tb_t2t2::synapse0x3d76b30() {
   return (neuron0x3d6df70()*0.0459477);
}

double NNfunction_tb_t2t2::synapse0x3d76b70() {
   return (neuron0x3d6e2b0()*0.0312589);
}

double NNfunction_tb_t2t2::synapse0x3d76bb0() {
   return (neuron0x3d6e5f0()*0.00273432);
}

double NNfunction_tb_t2t2::synapse0x3d76bf0() {
   return (neuron0x3d6e930()*-0.0741995);
}

double NNfunction_tb_t2t2::synapse0x3d76f70() {
   return (neuron0x3d69ce0()*-0.0598857);
}

double NNfunction_tb_t2t2::synapse0x3d76fb0() {
   return (neuron0x3d69f90()*0.0428967);
}

double NNfunction_tb_t2t2::synapse0x3d76ff0() {
   return (neuron0x3d6a2d0()*0.022091);
}

double NNfunction_tb_t2t2::synapse0x3d77030() {
   return (neuron0x3d6a610()*1.12994);
}

double NNfunction_tb_t2t2::synapse0x3d77070() {
   return (neuron0x3d6a950()*-0.100966);
}

double NNfunction_tb_t2t2::synapse0x3d770b0() {
   return (neuron0x3d6ac90()*-0.0399217);
}

double NNfunction_tb_t2t2::synapse0x3d770f0() {
   return (neuron0x3d6afd0()*-0.0241249);
}

double NNfunction_tb_t2t2::synapse0x3d77130() {
   return (neuron0x3d6b310()*-0.000112205);
}

double NNfunction_tb_t2t2::synapse0x3d77170() {
   return (neuron0x3d6b650()*0.000199465);
}

double NNfunction_tb_t2t2::synapse0x3d771b0() {
   return (neuron0x3d6b990()*0.00121289);
}

double NNfunction_tb_t2t2::synapse0x3d771f0() {
   return (neuron0x3d6bcd0()*0.0240398);
}

double NNfunction_tb_t2t2::synapse0x3d77230() {
   return (neuron0x3d6c010()*-0.0600081);
}

double NNfunction_tb_t2t2::synapse0x3d77270() {
   return (neuron0x3d6c350()*-0.0253973);
}

double NNfunction_tb_t2t2::synapse0x3d772b0() {
   return (neuron0x3d6c690()*-0.101824);
}

double NNfunction_tb_t2t2::synapse0x3d772f0() {
   return (neuron0x3d6c9d0()*-0.0303941);
}

double NNfunction_tb_t2t2::synapse0x3d77330() {
   return (neuron0x3d6cd10()*-0.0246173);
}

double NNfunction_tb_t2t2::synapse0x3d76dc0() {
   return (neuron0x3d6d050()*0.312935);
}

double NNfunction_tb_t2t2::synapse0x3d76e00() {
   return (neuron0x3d6d5b0()*-0.0641612);
}

double NNfunction_tb_t2t2::synapse0x3d77480() {
   return (neuron0x3d6d8f0()*-0.0923512);
}

double NNfunction_tb_t2t2::synapse0x3d774c0() {
   return (neuron0x3d6dc30()*-0.0152679);
}

double NNfunction_tb_t2t2::synapse0x3d77500() {
   return (neuron0x3d6df70()*0.178461);
}

double NNfunction_tb_t2t2::synapse0x3d77540() {
   return (neuron0x3d6e2b0()*-0.0139285);
}

double NNfunction_tb_t2t2::synapse0x3d77580() {
   return (neuron0x3d6e5f0()*-0.0581573);
}

double NNfunction_tb_t2t2::synapse0x3d775c0() {
   return (neuron0x3d6e930()*0.149784);
}

double NNfunction_tb_t2t2::synapse0x3d77790() {
   return (neuron0x3d69ce0()*0.312825);
}

double NNfunction_tb_t2t2::synapse0x3d80820() {
   return (neuron0x3d69f90()*0.0107003);
}

double NNfunction_tb_t2t2::synapse0x3d80860() {
   return (neuron0x3d6a2d0()*-0.0370029);
}

double NNfunction_tb_t2t2::synapse0x3d808a0() {
   return (neuron0x3d6a610()*-0.164456);
}

double NNfunction_tb_t2t2::synapse0x3d808e0() {
   return (neuron0x3d6a950()*0.003332);
}

double NNfunction_tb_t2t2::synapse0x3d80920() {
   return (neuron0x3d6ac90()*0.0608816);
}

double NNfunction_tb_t2t2::synapse0x3d80960() {
   return (neuron0x3d6afd0()*0.0255649);
}

double NNfunction_tb_t2t2::synapse0x3d809a0() {
   return (neuron0x3d6b310()*0.00991959);
}

double NNfunction_tb_t2t2::synapse0x3d809e0() {
   return (neuron0x3d6b650()*-0.0116204);
}

double NNfunction_tb_t2t2::synapse0x3d80a20() {
   return (neuron0x3d6b990()*-0.0204338);
}

double NNfunction_tb_t2t2::synapse0x3d80a60() {
   return (neuron0x3d6bcd0()*-0.0475868);
}

double NNfunction_tb_t2t2::synapse0x3d80aa0() {
   return (neuron0x3d6c010()*-0.0135503);
}

double NNfunction_tb_t2t2::synapse0x3d80ae0() {
   return (neuron0x3d6c350()*-0.0189215);
}

double NNfunction_tb_t2t2::synapse0x3d80b20() {
   return (neuron0x3d6c690()*-0.634211);
}

double NNfunction_tb_t2t2::synapse0x3d80b60() {
   return (neuron0x3d6c9d0()*0.0584565);
}

double NNfunction_tb_t2t2::synapse0x3d80ba0() {
   return (neuron0x3d6cd10()*0.0509446);
}

double NNfunction_tb_t2t2::synapse0x3d80670() {
   return (neuron0x3d6d050()*0.617039);
}

double NNfunction_tb_t2t2::synapse0x3d806b0() {
   return (neuron0x3d6d5b0()*0.0762905);
}

double NNfunction_tb_t2t2::synapse0x3d80cf0() {
   return (neuron0x3d6d8f0()*0.0545475);
}

double NNfunction_tb_t2t2::synapse0x3d80d30() {
   return (neuron0x3d6dc30()*0.0299903);
}

double NNfunction_tb_t2t2::synapse0x3d80d70() {
   return (neuron0x3d6df70()*1.94378);
}

double NNfunction_tb_t2t2::synapse0x3d80db0() {
   return (neuron0x3d6e2b0()*-0.0783296);
}

double NNfunction_tb_t2t2::synapse0x3d80df0() {
   return (neuron0x3d6e5f0()*-0.0736937);
}

double NNfunction_tb_t2t2::synapse0x3d80e30() {
   return (neuron0x3d6e930()*-0.792164);
}

double NNfunction_tb_t2t2::synapse0x3d811b0() {
   return (neuron0x3d69ce0()*0.516436);
}

double NNfunction_tb_t2t2::synapse0x3d811f0() {
   return (neuron0x3d69f90()*-0.0317816);
}

double NNfunction_tb_t2t2::synapse0x3d81230() {
   return (neuron0x3d6a2d0()*-0.117178);
}

double NNfunction_tb_t2t2::synapse0x3d81270() {
   return (neuron0x3d6a610()*0.101728);
}

double NNfunction_tb_t2t2::synapse0x3d812b0() {
   return (neuron0x3d6a950()*-0.337722);
}

double NNfunction_tb_t2t2::synapse0x3d812f0() {
   return (neuron0x3d6ac90()*-0.154117);
}

double NNfunction_tb_t2t2::synapse0x3d81330() {
   return (neuron0x3d6afd0()*0.0144771);
}

double NNfunction_tb_t2t2::synapse0x3d81370() {
   return (neuron0x3d6b310()*0.141285);
}

double NNfunction_tb_t2t2::synapse0x3d813b0() {
   return (neuron0x3d6b650()*0.129631);
}

double NNfunction_tb_t2t2::synapse0x3d813f0() {
   return (neuron0x3d6b990()*0.0463336);
}

double NNfunction_tb_t2t2::synapse0x3d81430() {
   return (neuron0x3d6bcd0()*0.0351902);
}

double NNfunction_tb_t2t2::synapse0x3d81470() {
   return (neuron0x3d6c010()*0.0329726);
}

double NNfunction_tb_t2t2::synapse0x3d814b0() {
   return (neuron0x3d6c350()*0.12368);
}

double NNfunction_tb_t2t2::synapse0x3d814f0() {
   return (neuron0x3d6c690()*0.117404);
}

double NNfunction_tb_t2t2::synapse0x3d81530() {
   return (neuron0x3d6c9d0()*-0.038162);
}

double NNfunction_tb_t2t2::synapse0x3d81570() {
   return (neuron0x3d6cd10()*-0.150105);
}

double NNfunction_tb_t2t2::synapse0x3d81000() {
   return (neuron0x3d6d050()*-0.345209);
}

double NNfunction_tb_t2t2::synapse0x3d81040() {
   return (neuron0x3d6d5b0()*-0.0397961);
}

double NNfunction_tb_t2t2::synapse0x3d816c0() {
   return (neuron0x3d6d8f0()*-0.26388);
}

double NNfunction_tb_t2t2::synapse0x3d81700() {
   return (neuron0x3d6dc30()*0.248631);
}

double NNfunction_tb_t2t2::synapse0x3d81740() {
   return (neuron0x3d6df70()*-0.597072);
}

double NNfunction_tb_t2t2::synapse0x3d81780() {
   return (neuron0x3d6e2b0()*0.200786);
}

double NNfunction_tb_t2t2::synapse0x3d817c0() {
   return (neuron0x3d6e5f0()*0.110647);
}

double NNfunction_tb_t2t2::synapse0x3d81800() {
   return (neuron0x3d6e930()*-0.377701);
}

double NNfunction_tb_t2t2::synapse0x3d81b80() {
   return (neuron0x3d69ce0()*-0.00814709);
}

double NNfunction_tb_t2t2::synapse0x3d81bc0() {
   return (neuron0x3d69f90()*0.00394789);
}

double NNfunction_tb_t2t2::synapse0x3d81c00() {
   return (neuron0x3d6a2d0()*0.0357469);
}

double NNfunction_tb_t2t2::synapse0x3d81c40() {
   return (neuron0x3d6a610()*0.0115028);
}

double NNfunction_tb_t2t2::synapse0x3d81c80() {
   return (neuron0x3d6a950()*-0.381009);
}

double NNfunction_tb_t2t2::synapse0x3d81cc0() {
   return (neuron0x3d6ac90()*0.0355659);
}

double NNfunction_tb_t2t2::synapse0x3d81d00() {
   return (neuron0x3d6afd0()*-0.01);
}

double NNfunction_tb_t2t2::synapse0x3d81d40() {
   return (neuron0x3d6b310()*-0.0292823);
}

double NNfunction_tb_t2t2::synapse0x3d81d80() {
   return (neuron0x3d6b650()*0.00898413);
}

double NNfunction_tb_t2t2::synapse0x3d81dc0() {
   return (neuron0x3d6b990()*0.0083401);
}

double NNfunction_tb_t2t2::synapse0x3d81e00() {
   return (neuron0x3d6bcd0()*-0.0174785);
}

double NNfunction_tb_t2t2::synapse0x3d81e40() {
   return (neuron0x3d6c010()*-0.0143576);
}

double NNfunction_tb_t2t2::synapse0x3d81e80() {
   return (neuron0x3d6c350()*-0.0265805);
}

double NNfunction_tb_t2t2::synapse0x3d81ec0() {
   return (neuron0x3d6c690()*-0.317175);
}

double NNfunction_tb_t2t2::synapse0x3d81f00() {
   return (neuron0x3d6c9d0()*0.0217709);
}

double NNfunction_tb_t2t2::synapse0x3d81f40() {
   return (neuron0x3d6cd10()*-0.00655298);
}

double NNfunction_tb_t2t2::synapse0x3d819d0() {
   return (neuron0x3d6d050()*0.198024);
}

double NNfunction_tb_t2t2::synapse0x3d81a10() {
   return (neuron0x3d6d5b0()*0.0088985);
}

double NNfunction_tb_t2t2::synapse0x3d82090() {
   return (neuron0x3d6d8f0()*-0.00498511);
}

double NNfunction_tb_t2t2::synapse0x3d820d0() {
   return (neuron0x3d6dc30()*0.0194657);
}

double NNfunction_tb_t2t2::synapse0x3d82110() {
   return (neuron0x3d6df70()*-0.149936);
}

double NNfunction_tb_t2t2::synapse0x3d82150() {
   return (neuron0x3d6e2b0()*-0.00677164);
}

double NNfunction_tb_t2t2::synapse0x3d82190() {
   return (neuron0x3d6e5f0()*-0.0249212);
}

double NNfunction_tb_t2t2::synapse0x3d821d0() {
   return (neuron0x3d6e930()*1.48598);
}

double NNfunction_tb_t2t2::synapse0x3d82550() {
   return (neuron0x3d69ce0()*-0.00965188);
}

double NNfunction_tb_t2t2::synapse0x3d82590() {
   return (neuron0x3d69f90()*0.00880668);
}

double NNfunction_tb_t2t2::synapse0x3d825d0() {
   return (neuron0x3d6a2d0()*0.00277615);
}

double NNfunction_tb_t2t2::synapse0x3d82610() {
   return (neuron0x3d6a610()*2.0038);
}

double NNfunction_tb_t2t2::synapse0x3d82650() {
   return (neuron0x3d6a950()*-0.0213868);
}

double NNfunction_tb_t2t2::synapse0x3d82690() {
   return (neuron0x3d6ac90()*0.00639895);
}

double NNfunction_tb_t2t2::synapse0x3d826d0() {
   return (neuron0x3d6afd0()*0.00374213);
}

double NNfunction_tb_t2t2::synapse0x3d82710() {
   return (neuron0x3d6b310()*0.00208287);
}

double NNfunction_tb_t2t2::synapse0x3d82750() {
   return (neuron0x3d6b650()*-0.00637018);
}

double NNfunction_tb_t2t2::synapse0x3d82790() {
   return (neuron0x3d6b990()*-7.77775e-05);
}

double NNfunction_tb_t2t2::synapse0x3d827d0() {
   return (neuron0x3d6bcd0()*-0.00554976);
}

double NNfunction_tb_t2t2::synapse0x3d82810() {
   return (neuron0x3d6c010()*0.0110517);
}

double NNfunction_tb_t2t2::synapse0x3d82850() {
   return (neuron0x3d6c350()*0.00698934);
}

double NNfunction_tb_t2t2::synapse0x3d82890() {
   return (neuron0x3d6c690()*-0.0568634);
}

double NNfunction_tb_t2t2::synapse0x3d828d0() {
   return (neuron0x3d6c9d0()*0.00414059);
}

double NNfunction_tb_t2t2::synapse0x3d82910() {
   return (neuron0x3d6cd10()*0.000978857);
}

double NNfunction_tb_t2t2::synapse0x3d823a0() {
   return (neuron0x3d6d050()*-0.0791423);
}

double NNfunction_tb_t2t2::synapse0x3d823e0() {
   return (neuron0x3d6d5b0()*0.00185008);
}

double NNfunction_tb_t2t2::synapse0x3d82a60() {
   return (neuron0x3d6d8f0()*0.0138673);
}

double NNfunction_tb_t2t2::synapse0x3d82aa0() {
   return (neuron0x3d6dc30()*0.0160891);
}

double NNfunction_tb_t2t2::synapse0x3d82ae0() {
   return (neuron0x3d6df70()*-0.25887);
}

double NNfunction_tb_t2t2::synapse0x3d82b20() {
   return (neuron0x3d6e2b0()*-0.00487148);
}

double NNfunction_tb_t2t2::synapse0x3d82b60() {
   return (neuron0x3d6e5f0()*-0.002765);
}

double NNfunction_tb_t2t2::synapse0x3d82ba0() {
   return (neuron0x3d6e930()*0.0242006);
}

double NNfunction_tb_t2t2::synapse0x3d82f20() {
   return (neuron0x3d69ce0()*-0.0016774);
}

double NNfunction_tb_t2t2::synapse0x3d82f60() {
   return (neuron0x3d69f90()*-0.0066861);
}

double NNfunction_tb_t2t2::synapse0x3d82fa0() {
   return (neuron0x3d6a2d0()*0.0220984);
}

double NNfunction_tb_t2t2::synapse0x3d82fe0() {
   return (neuron0x3d6a610()*0.0303327);
}

double NNfunction_tb_t2t2::synapse0x3d83020() {
   return (neuron0x3d6a950()*-0.038612);
}

double NNfunction_tb_t2t2::synapse0x3d83060() {
   return (neuron0x3d6ac90()*-0.00864736);
}

double NNfunction_tb_t2t2::synapse0x3d830a0() {
   return (neuron0x3d6afd0()*-0.00297329);
}

double NNfunction_tb_t2t2::synapse0x3d830e0() {
   return (neuron0x3d6b310()*0.00551686);
}

double NNfunction_tb_t2t2::synapse0x3d83120() {
   return (neuron0x3d6b650()*-0.014477);
}

double NNfunction_tb_t2t2::synapse0x3d83160() {
   return (neuron0x3d6b990()*0.00825319);
}

double NNfunction_tb_t2t2::synapse0x3d831a0() {
   return (neuron0x3d6bcd0()*0.00594561);
}

double NNfunction_tb_t2t2::synapse0x3d831e0() {
   return (neuron0x3d6c010()*-0.0026118);
}

double NNfunction_tb_t2t2::synapse0x3d83220() {
   return (neuron0x3d6c350()*0.00754144);
}

double NNfunction_tb_t2t2::synapse0x3d83260() {
   return (neuron0x3d6c690()*-1.02811);
}

double NNfunction_tb_t2t2::synapse0x3d832a0() {
   return (neuron0x3d6c9d0()*-0.00894429);
}

double NNfunction_tb_t2t2::synapse0x3d832e0() {
   return (neuron0x3d6cd10()*-0.0135752);
}

double NNfunction_tb_t2t2::synapse0x3d82d70() {
   return (neuron0x3d6d050()*-1.4506);
}

double NNfunction_tb_t2t2::synapse0x3d82db0() {
   return (neuron0x3d6d5b0()*0.0260259);
}

double NNfunction_tb_t2t2::synapse0x3d83430() {
   return (neuron0x3d6d8f0()*-0.0093905);
}

double NNfunction_tb_t2t2::synapse0x3d83470() {
   return (neuron0x3d6dc30()*0.00135759);
}

double NNfunction_tb_t2t2::synapse0x3d834b0() {
   return (neuron0x3d6df70()*-0.116708);
}

double NNfunction_tb_t2t2::synapse0x3d834f0() {
   return (neuron0x3d6e2b0()*-5.34896e-06);
}

double NNfunction_tb_t2t2::synapse0x3d83530() {
   return (neuron0x3d6e5f0()*-0.00317636);
}

double NNfunction_tb_t2t2::synapse0x3d83570() {
   return (neuron0x3d6e930()*-0.00278006);
}

double NNfunction_tb_t2t2::synapse0x3d838f0() {
   return (neuron0x3d69ce0()*0.624758);
}

double NNfunction_tb_t2t2::synapse0x3d83930() {
   return (neuron0x3d69f90()*-0.00175832);
}

double NNfunction_tb_t2t2::synapse0x3d83970() {
   return (neuron0x3d6a2d0()*-0.0297461);
}

double NNfunction_tb_t2t2::synapse0x3d839b0() {
   return (neuron0x3d6a610()*0.0346645);
}

double NNfunction_tb_t2t2::synapse0x3d839f0() {
   return (neuron0x3d6a950()*-0.0739789);
}

double NNfunction_tb_t2t2::synapse0x3d83a30() {
   return (neuron0x3d6ac90()*-0.0366115);
}

double NNfunction_tb_t2t2::synapse0x3d83a70() {
   return (neuron0x3d6afd0()*-0.00302754);
}

double NNfunction_tb_t2t2::synapse0x3d83ab0() {
   return (neuron0x3d6b310()*-0.00203008);
}

double NNfunction_tb_t2t2::synapse0x3d83af0() {
   return (neuron0x3d6b650()*0.0152126);
}

double NNfunction_tb_t2t2::synapse0x3d83b30() {
   return (neuron0x3d6b990()*-0.0141829);
}

double NNfunction_tb_t2t2::synapse0x3d83b70() {
   return (neuron0x3d6bcd0()*0.0439759);
}

double NNfunction_tb_t2t2::synapse0x3d83bb0() {
   return (neuron0x3d6c010()*0.00840562);
}

double NNfunction_tb_t2t2::synapse0x3d83bf0() {
   return (neuron0x3d6c350()*-0.0113845);
}

double NNfunction_tb_t2t2::synapse0x3d83c30() {
   return (neuron0x3d6c690()*0.285212);
}

double NNfunction_tb_t2t2::synapse0x3d83c70() {
   return (neuron0x3d6c9d0()*-0.00718193);
}

double NNfunction_tb_t2t2::synapse0x3d83cb0() {
   return (neuron0x3d6cd10()*-0.00903322);
}

double NNfunction_tb_t2t2::synapse0x3d83740() {
   return (neuron0x3d6d050()*-0.111225);
}

double NNfunction_tb_t2t2::synapse0x3d83780() {
   return (neuron0x3d6d5b0()*-0.00521187);
}

double NNfunction_tb_t2t2::synapse0x3d83e00() {
   return (neuron0x3d6d8f0()*0.0138068);
}

double NNfunction_tb_t2t2::synapse0x3d83e40() {
   return (neuron0x3d6dc30()*0.278115);
}

double NNfunction_tb_t2t2::synapse0x3d83e80() {
   return (neuron0x3d6df70()*0.303776);
}

double NNfunction_tb_t2t2::synapse0x3d83ec0() {
   return (neuron0x3d6e2b0()*-0.0539099);
}

double NNfunction_tb_t2t2::synapse0x3d83f00() {
   return (neuron0x3d6e5f0()*-0.0127292);
}

double NNfunction_tb_t2t2::synapse0x3d83f40() {
   return (neuron0x3d6e930()*0.0485405);
}

double NNfunction_tb_t2t2::synapse0x3d842c0() {
   return (neuron0x3d69ce0()*-0.141972);
}

double NNfunction_tb_t2t2::synapse0x3d84300() {
   return (neuron0x3d69f90()*0.0206989);
}

double NNfunction_tb_t2t2::synapse0x3d84340() {
   return (neuron0x3d6a2d0()*-0.20017);
}

double NNfunction_tb_t2t2::synapse0x3d84380() {
   return (neuron0x3d6a610()*0.688033);
}

double NNfunction_tb_t2t2::synapse0x3d843c0() {
   return (neuron0x3d6a950()*-0.13394);
}

double NNfunction_tb_t2t2::synapse0x3d84400() {
   return (neuron0x3d6ac90()*0.0272576);
}

double NNfunction_tb_t2t2::synapse0x3d84440() {
   return (neuron0x3d6afd0()*-0.00704664);
}

double NNfunction_tb_t2t2::synapse0x3d84480() {
   return (neuron0x3d6b310()*0.0254367);
}

double NNfunction_tb_t2t2::synapse0x3d844c0() {
   return (neuron0x3d6b650()*-0.0195076);
}

double NNfunction_tb_t2t2::synapse0x3d84500() {
   return (neuron0x3d6b990()*-0.00879856);
}

double NNfunction_tb_t2t2::synapse0x3d84540() {
   return (neuron0x3d6bcd0()*-0.0156575);
}

double NNfunction_tb_t2t2::synapse0x3d84580() {
   return (neuron0x3d6c010()*0.0152888);
}

double NNfunction_tb_t2t2::synapse0x3d845c0() {
   return (neuron0x3d6c350()*-0.0517444);
}

double NNfunction_tb_t2t2::synapse0x3d84600() {
   return (neuron0x3d6c690()*-0.336904);
}

double NNfunction_tb_t2t2::synapse0x3d84640() {
   return (neuron0x3d6c9d0()*0.0107994);
}

double NNfunction_tb_t2t2::synapse0x3d84680() {
   return (neuron0x3d6cd10()*0.00324534);
}

double NNfunction_tb_t2t2::synapse0x3d84110() {
   return (neuron0x3d6d050()*0.137508);
}

double NNfunction_tb_t2t2::synapse0x3d84150() {
   return (neuron0x3d6d5b0()*0.00983043);
}

double NNfunction_tb_t2t2::synapse0x3d847d0() {
   return (neuron0x3d6d8f0()*0.060862);
}

double NNfunction_tb_t2t2::synapse0x3d84810() {
   return (neuron0x3d6dc30()*-0.0196865);
}

double NNfunction_tb_t2t2::synapse0x3d84850() {
   return (neuron0x3d6df70()*-0.181306);
}

double NNfunction_tb_t2t2::synapse0x3d84890() {
   return (neuron0x3d6e2b0()*-0.0267968);
}

double NNfunction_tb_t2t2::synapse0x3d848d0() {
   return (neuron0x3d6e5f0()*0.000347303);
}

double NNfunction_tb_t2t2::synapse0x3d84910() {
   return (neuron0x3d6e930()*-0.431211);
}

double NNfunction_tb_t2t2::synapse0x3d84c90() {
   return (neuron0x3d69ce0()*0.171198);
}

double NNfunction_tb_t2t2::synapse0x3d84cd0() {
   return (neuron0x3d69f90()*0.222467);
}

double NNfunction_tb_t2t2::synapse0x3d84d10() {
   return (neuron0x3d6a2d0()*-0.114196);
}

double NNfunction_tb_t2t2::synapse0x3d84d50() {
   return (neuron0x3d6a610()*0.0533256);
}

double NNfunction_tb_t2t2::synapse0x3d84d90() {
   return (neuron0x3d6a950()*-0.240881);
}

double NNfunction_tb_t2t2::synapse0x3d84dd0() {
   return (neuron0x3d6ac90()*-0.323334);
}

double NNfunction_tb_t2t2::synapse0x3d84e10() {
   return (neuron0x3d6afd0()*0.284843);
}

double NNfunction_tb_t2t2::synapse0x3d84e50() {
   return (neuron0x3d6b310()*-0.211173);
}

double NNfunction_tb_t2t2::synapse0x3d84e90() {
   return (neuron0x3d6b650()*-0.183066);
}

double NNfunction_tb_t2t2::synapse0x3d84ed0() {
   return (neuron0x3d6b990()*-0.0355446);
}

double NNfunction_tb_t2t2::synapse0x3d84f10() {
   return (neuron0x3d6bcd0()*0.0628685);
}

double NNfunction_tb_t2t2::synapse0x3d84f50() {
   return (neuron0x3d6c010()*-0.0832401);
}

double NNfunction_tb_t2t2::synapse0x3d84f90() {
   return (neuron0x3d6c350()*-0.237743);
}

double NNfunction_tb_t2t2::synapse0x3d84fd0() {
   return (neuron0x3d6c690()*0.1619);
}

double NNfunction_tb_t2t2::synapse0x3d85010() {
   return (neuron0x3d6c9d0()*-0.243623);
}

double NNfunction_tb_t2t2::synapse0x3d85050() {
   return (neuron0x3d6cd10()*0.0665734);
}

double NNfunction_tb_t2t2::synapse0x3d84ae0() {
   return (neuron0x3d6d050()*-0.228284);
}

double NNfunction_tb_t2t2::synapse0x3d84b20() {
   return (neuron0x3d6d5b0()*0.0178953);
}

double NNfunction_tb_t2t2::synapse0x3d851a0() {
   return (neuron0x3d6d8f0()*0.076578);
}

double NNfunction_tb_t2t2::synapse0x3d851e0() {
   return (neuron0x3d6dc30()*-0.0369775);
}

double NNfunction_tb_t2t2::synapse0x3d85220() {
   return (neuron0x3d6df70()*0.0961995);
}

double NNfunction_tb_t2t2::synapse0x3d85260() {
   return (neuron0x3d6e2b0()*0.544773);
}

double NNfunction_tb_t2t2::synapse0x3d852a0() {
   return (neuron0x3d6e5f0()*-0.448342);
}

double NNfunction_tb_t2t2::synapse0x3d852e0() {
   return (neuron0x3d6e930()*-0.175791);
}

double NNfunction_tb_t2t2::synapse0x3d85660() {
   return (neuron0x3d69ce0()*0.74783);
}

double NNfunction_tb_t2t2::synapse0x3d79c30() {
   return (neuron0x3d69f90()*-0.03474);
}

double NNfunction_tb_t2t2::synapse0x3d79c70() {
   return (neuron0x3d6a2d0()*-0.0683147);
}

double NNfunction_tb_t2t2::synapse0x3d79cb0() {
   return (neuron0x3d6a610()*-0.0458758);
}

double NNfunction_tb_t2t2::synapse0x3d79f00() {
   return (neuron0x3d6a950()*0.145904);
}

double NNfunction_tb_t2t2::synapse0x3d79f40() {
   return (neuron0x3d6ac90()*-0.0085424);
}

double NNfunction_tb_t2t2::synapse0x3d79f80() {
   return (neuron0x3d6afd0()*0.0244111);
}

double NNfunction_tb_t2t2::synapse0x3d7a1d0() {
   return (neuron0x3d6b310()*-0.0175364);
}

double NNfunction_tb_t2t2::synapse0x3d7a210() {
   return (neuron0x3d6b650()*-0.00523198);
}

double NNfunction_tb_t2t2::synapse0x3d7a460() {
   return (neuron0x3d6b990()*0.0426322);
}

double NNfunction_tb_t2t2::synapse0x3d7a4a0() {
   return (neuron0x3d6bcd0()*-0.00142575);
}

double NNfunction_tb_t2t2::synapse0x3d7a4e0() {
   return (neuron0x3d6c010()*-0.00681092);
}

double NNfunction_tb_t2t2::synapse0x3d7a730() {
   return (neuron0x3d6c350()*0.0427125);
}

double NNfunction_tb_t2t2::synapse0x3d7a770() {
   return (neuron0x3d6c690()*0.404347);
}

double NNfunction_tb_t2t2::synapse0x3d7a9c0() {
   return (neuron0x3d6c9d0()*0.0151608);
}

double NNfunction_tb_t2t2::synapse0x3d7aa00() {
   return (neuron0x3d6cd10()*-0.00595003);
}

double NNfunction_tb_t2t2::synapse0x3d854b0() {
   return (neuron0x3d6d050()*-0.460498);
}

double NNfunction_tb_t2t2::synapse0x3d854f0() {
   return (neuron0x3d6d5b0()*0.0182244);
}

double NNfunction_tb_t2t2::synapse0x3d7ab50() {
   return (neuron0x3d6d8f0()*-0.0117093);
}

double NNfunction_tb_t2t2::synapse0x3d7b060() {
   return (neuron0x3d6dc30()*-0.00852149);
}

double NNfunction_tb_t2t2::synapse0x3d7b0a0() {
   return (neuron0x3d6df70()*1.03376);
}

double NNfunction_tb_t2t2::synapse0x3d7b0e0() {
   return (neuron0x3d6e2b0()*-0.0136998);
}

double NNfunction_tb_t2t2::synapse0x3d7b330() {
   return (neuron0x3d6e5f0()*-0.00150648);
}

double NNfunction_tb_t2t2::synapse0x3d7b370() {
   return (neuron0x3d6e930()*0.325699);
}

double NNfunction_tb_t2t2::synapse0x3d7ac20() {
   return (neuron0x3d69ce0()*0.0841344);
}

double NNfunction_tb_t2t2::synapse0x3d7ac60() {
   return (neuron0x3d69f90()*0.143094);
}

double NNfunction_tb_t2t2::synapse0x3d7aca0() {
   return (neuron0x3d6a2d0()*-0.0180583);
}

double NNfunction_tb_t2t2::synapse0x3d7ace0() {
   return (neuron0x3d6a610()*0.0835442);
}

double NNfunction_tb_t2t2::synapse0x3d7b660() {
   return (neuron0x3d6a950()*0.064512);
}

double NNfunction_tb_t2t2::synapse0x3d879b0() {
   return (neuron0x3d6ac90()*0.0131838);
}

double NNfunction_tb_t2t2::synapse0x3d879f0() {
   return (neuron0x3d6afd0()*-0.0151255);
}

double NNfunction_tb_t2t2::synapse0x3d87a30() {
   return (neuron0x3d6b310()*-0.0232198);
}

double NNfunction_tb_t2t2::synapse0x3d87a70() {
   return (neuron0x3d6b650()*0.124752);
}

double NNfunction_tb_t2t2::synapse0x3d87ab0() {
   return (neuron0x3d6b990()*0.0660132);
}

double NNfunction_tb_t2t2::synapse0x3d87af0() {
   return (neuron0x3d6bcd0()*0.0657436);
}

double NNfunction_tb_t2t2::synapse0x3d87b30() {
   return (neuron0x3d6c010()*-0.105081);
}

double NNfunction_tb_t2t2::synapse0x3d87b70() {
   return (neuron0x3d6c350()*0.0560546);
}

double NNfunction_tb_t2t2::synapse0x3d87bb0() {
   return (neuron0x3d6c690()*-0.0978313);
}

double NNfunction_tb_t2t2::synapse0x3d87bf0() {
   return (neuron0x3d6c9d0()*0.0135258);
}

double NNfunction_tb_t2t2::synapse0x3d87c30() {
   return (neuron0x3d6cd10()*-0.892278);
}

double NNfunction_tb_t2t2::synapse0x3d7b540() {
   return (neuron0x3d6d050()*-0.0127941);
}

double NNfunction_tb_t2t2::synapse0x3d7b580() {
   return (neuron0x3d6d5b0()*-0.0615987);
}

double NNfunction_tb_t2t2::synapse0x3d87d80() {
   return (neuron0x3d6d8f0()*-0.0990439);
}

double NNfunction_tb_t2t2::synapse0x3d87dc0() {
   return (neuron0x3d6dc30()*0.0849455);
}

double NNfunction_tb_t2t2::synapse0x3d87e00() {
   return (neuron0x3d6df70()*-0.244446);
}

double NNfunction_tb_t2t2::synapse0x3d87e40() {
   return (neuron0x3d6e2b0()*0.0409182);
}

double NNfunction_tb_t2t2::synapse0x3d87e80() {
   return (neuron0x3d6e5f0()*0.0298609);
}

double NNfunction_tb_t2t2::synapse0x3d87ec0() {
   return (neuron0x3d6e930()*-0.282575);
}

double NNfunction_tb_t2t2::synapse0x3d88240() {
   return (neuron0x3d69ce0()*-0.293409);
}

double NNfunction_tb_t2t2::synapse0x3d88280() {
   return (neuron0x3d69f90()*0.0170167);
}

double NNfunction_tb_t2t2::synapse0x3d882c0() {
   return (neuron0x3d6a2d0()*-0.00460282);
}

double NNfunction_tb_t2t2::synapse0x3d88300() {
   return (neuron0x3d6a610()*-0.0687719);
}

double NNfunction_tb_t2t2::synapse0x3d88340() {
   return (neuron0x3d6a950()*-0.978136);
}

double NNfunction_tb_t2t2::synapse0x3d88380() {
   return (neuron0x3d6ac90()*0.0671878);
}

double NNfunction_tb_t2t2::synapse0x3d883c0() {
   return (neuron0x3d6afd0()*0.0828343);
}

double NNfunction_tb_t2t2::synapse0x3d88400() {
   return (neuron0x3d6b310()*-0.0393206);
}

double NNfunction_tb_t2t2::synapse0x3d88440() {
   return (neuron0x3d6b650()*0.0347504);
}

double NNfunction_tb_t2t2::synapse0x3d88480() {
   return (neuron0x3d6b990()*-0.0471158);
}

double NNfunction_tb_t2t2::synapse0x3d884c0() {
   return (neuron0x3d6bcd0()*0.104385);
}

double NNfunction_tb_t2t2::synapse0x3d88500() {
   return (neuron0x3d6c010()*-0.103191);
}

double NNfunction_tb_t2t2::synapse0x3d88540() {
   return (neuron0x3d6c350()*-0.0874775);
}

double NNfunction_tb_t2t2::synapse0x3d88580() {
   return (neuron0x3d6c690()*-0.0884216);
}

double NNfunction_tb_t2t2::synapse0x3d885c0() {
   return (neuron0x3d6c9d0()*0.0790583);
}

double NNfunction_tb_t2t2::synapse0x3d88600() {
   return (neuron0x3d6cd10()*0.0801853);
}

double NNfunction_tb_t2t2::synapse0x3d88090() {
   return (neuron0x3d6d050()*0.470521);
}

double NNfunction_tb_t2t2::synapse0x3d880d0() {
   return (neuron0x3d6d5b0()*-0.00980316);
}

double NNfunction_tb_t2t2::synapse0x3d88750() {
   return (neuron0x3d6d8f0()*0.055337);
}

double NNfunction_tb_t2t2::synapse0x3d88790() {
   return (neuron0x3d6dc30()*-0.599401);
}

double NNfunction_tb_t2t2::synapse0x3d887d0() {
   return (neuron0x3d6df70()*-0.180857);
}

double NNfunction_tb_t2t2::synapse0x3d88810() {
   return (neuron0x3d6e2b0()*-1.0695);
}

double NNfunction_tb_t2t2::synapse0x3d88850() {
   return (neuron0x3d6e5f0()*-0.0270867);
}

double NNfunction_tb_t2t2::synapse0x3d88890() {
   return (neuron0x3d6e930()*0.463646);
}

double NNfunction_tb_t2t2::synapse0x3d88c10() {
   return (neuron0x3d69ce0()*0.00387124);
}

double NNfunction_tb_t2t2::synapse0x3d88c50() {
   return (neuron0x3d69f90()*-0.0262443);
}

double NNfunction_tb_t2t2::synapse0x3d88c90() {
   return (neuron0x3d6a2d0()*-0.117056);
}

double NNfunction_tb_t2t2::synapse0x3d88cd0() {
   return (neuron0x3d6a610()*0.0325143);
}

double NNfunction_tb_t2t2::synapse0x3d88d10() {
   return (neuron0x3d6a950()*-0.042389);
}

double NNfunction_tb_t2t2::synapse0x3d88d50() {
   return (neuron0x3d6ac90()*-0.0689122);
}

double NNfunction_tb_t2t2::synapse0x3d88d90() {
   return (neuron0x3d6afd0()*-0.0816969);
}

double NNfunction_tb_t2t2::synapse0x3d88dd0() {
   return (neuron0x3d6b310()*-0.00605015);
}

double NNfunction_tb_t2t2::synapse0x3d88e10() {
   return (neuron0x3d6b650()*0.0353093);
}

double NNfunction_tb_t2t2::synapse0x3d88e50() {
   return (neuron0x3d6b990()*0.0506278);
}

double NNfunction_tb_t2t2::synapse0x3d88e90() {
   return (neuron0x3d6bcd0()*0.0653865);
}

double NNfunction_tb_t2t2::synapse0x3d88ed0() {
   return (neuron0x3d6c010()*0.020278);
}

double NNfunction_tb_t2t2::synapse0x3d88f10() {
   return (neuron0x3d6c350()*0.0439746);
}

double NNfunction_tb_t2t2::synapse0x3d88f50() {
   return (neuron0x3d6c690()*2.79344);
}

double NNfunction_tb_t2t2::synapse0x3d88f90() {
   return (neuron0x3d6c9d0()*-0.0541821);
}

double NNfunction_tb_t2t2::synapse0x3d88fd0() {
   return (neuron0x3d6cd10()*-0.0585129);
}

double NNfunction_tb_t2t2::synapse0x3d88a60() {
   return (neuron0x3d6d050()*-1.30494);
}

double NNfunction_tb_t2t2::synapse0x3d88aa0() {
   return (neuron0x3d6d5b0()*-0.00997293);
}

double NNfunction_tb_t2t2::synapse0x3d89120() {
   return (neuron0x3d6d8f0()*0.0261944);
}

double NNfunction_tb_t2t2::synapse0x3d89160() {
   return (neuron0x3d6dc30()*0.117464);
}

double NNfunction_tb_t2t2::synapse0x3d891a0() {
   return (neuron0x3d6df70()*-0.189114);
}

double NNfunction_tb_t2t2::synapse0x3d891e0() {
   return (neuron0x3d6e2b0()*-0.00840479);
}

double NNfunction_tb_t2t2::synapse0x3d89220() {
   return (neuron0x3d6e5f0()*-0.0137449);
}

double NNfunction_tb_t2t2::synapse0x3d89260() {
   return (neuron0x3d6e930()*0.00228469);
}

double NNfunction_tb_t2t2::synapse0x3d895e0() {
   return (neuron0x3d69ce0()*0.372534);
}

double NNfunction_tb_t2t2::synapse0x3d89620() {
   return (neuron0x3d69f90()*-0.315329);
}

double NNfunction_tb_t2t2::synapse0x3d89660() {
   return (neuron0x3d6a2d0()*0.0690684);
}

double NNfunction_tb_t2t2::synapse0x3d896a0() {
   return (neuron0x3d6a610()*-0.084985);
}

double NNfunction_tb_t2t2::synapse0x3d896e0() {
   return (neuron0x3d6a950()*0.14151);
}

double NNfunction_tb_t2t2::synapse0x3d89720() {
   return (neuron0x3d6ac90()*0.0300911);
}

double NNfunction_tb_t2t2::synapse0x3d89760() {
   return (neuron0x3d6afd0()*0.00532737);
}

double NNfunction_tb_t2t2::synapse0x3d897a0() {
   return (neuron0x3d6b310()*-0.0114668);
}

double NNfunction_tb_t2t2::synapse0x3d897e0() {
   return (neuron0x3d6b650()*-0.0316969);
}

double NNfunction_tb_t2t2::synapse0x3d89820() {
   return (neuron0x3d6b990()*-0.0207914);
}

double NNfunction_tb_t2t2::synapse0x3d89860() {
   return (neuron0x3d6bcd0()*-0.0575014);
}

double NNfunction_tb_t2t2::synapse0x3d898a0() {
   return (neuron0x3d6c010()*0.0904802);
}

double NNfunction_tb_t2t2::synapse0x3d898e0() {
   return (neuron0x3d6c350()*0.0179839);
}

double NNfunction_tb_t2t2::synapse0x3d89920() {
   return (neuron0x3d6c690()*-0.818897);
}

double NNfunction_tb_t2t2::synapse0x3d89960() {
   return (neuron0x3d6c9d0()*0.128225);
}

double NNfunction_tb_t2t2::synapse0x3d899a0() {
   return (neuron0x3d6cd10()*0.10321);
}

double NNfunction_tb_t2t2::synapse0x3d89430() {
   return (neuron0x3d6d050()*0.350998);
}

double NNfunction_tb_t2t2::synapse0x3d89470() {
   return (neuron0x3d6d5b0()*-0.0142748);
}

double NNfunction_tb_t2t2::synapse0x3d89af0() {
   return (neuron0x3d6d8f0()*0.16394);
}

double NNfunction_tb_t2t2::synapse0x3d89b30() {
   return (neuron0x3d6dc30()*0.0559779);
}

double NNfunction_tb_t2t2::synapse0x3d89b70() {
   return (neuron0x3d6df70()*-0.410619);
}

double NNfunction_tb_t2t2::synapse0x3d89bb0() {
   return (neuron0x3d6e2b0()*-0.0594169);
}

double NNfunction_tb_t2t2::synapse0x3d89bf0() {
   return (neuron0x3d6e5f0()*-0.00910393);
}

double NNfunction_tb_t2t2::synapse0x3d89c30() {
   return (neuron0x3d6e930()*0.25695);
}

double NNfunction_tb_t2t2::synapse0x3d89fb0() {
   return (neuron0x3d69ce0()*-0.00895624);
}

double NNfunction_tb_t2t2::synapse0x3d89ff0() {
   return (neuron0x3d69f90()*-0.00990706);
}

double NNfunction_tb_t2t2::synapse0x3d8a030() {
   return (neuron0x3d6a2d0()*-0.000975163);
}

double NNfunction_tb_t2t2::synapse0x3d8a070() {
   return (neuron0x3d6a610()*-0.0257139);
}

double NNfunction_tb_t2t2::synapse0x3d8a0b0() {
   return (neuron0x3d6a950()*0.00696294);
}

double NNfunction_tb_t2t2::synapse0x3d8a0f0() {
   return (neuron0x3d6ac90()*0.00865071);
}

double NNfunction_tb_t2t2::synapse0x3d8a130() {
   return (neuron0x3d6afd0()*-0.00793253);
}

double NNfunction_tb_t2t2::synapse0x3d8a170() {
   return (neuron0x3d6b310()*-0.00428831);
}

double NNfunction_tb_t2t2::synapse0x3d8a1b0() {
   return (neuron0x3d6b650()*-0.0023913);
}

double NNfunction_tb_t2t2::synapse0x3d8a1f0() {
   return (neuron0x3d6b990()*0.0026837);
}

double NNfunction_tb_t2t2::synapse0x3d8a230() {
   return (neuron0x3d6bcd0()*-0.00455203);
}

double NNfunction_tb_t2t2::synapse0x3d8a270() {
   return (neuron0x3d6c010()*-0.000254125);
}

double NNfunction_tb_t2t2::synapse0x3d8a2b0() {
   return (neuron0x3d6c350()*-0.000139205);
}

double NNfunction_tb_t2t2::synapse0x3d8a2f0() {
   return (neuron0x3d6c690()*-0.480568);
}

double NNfunction_tb_t2t2::synapse0x3d8a330() {
   return (neuron0x3d6c9d0()*0.0132761);
}

double NNfunction_tb_t2t2::synapse0x3d8a370() {
   return (neuron0x3d6cd10()*0.00611683);
}

double NNfunction_tb_t2t2::synapse0x3d89e00() {
   return (neuron0x3d6d050()*0.6847);
}

double NNfunction_tb_t2t2::synapse0x3d89e40() {
   return (neuron0x3d6d5b0()*-0.0087569);
}

double NNfunction_tb_t2t2::synapse0x3d8a4c0() {
   return (neuron0x3d6d8f0()*0.011506);
}

double NNfunction_tb_t2t2::synapse0x3d8a500() {
   return (neuron0x3d6dc30()*-0.0256173);
}

double NNfunction_tb_t2t2::synapse0x3d8a540() {
   return (neuron0x3d6df70()*-0.12614);
}

double NNfunction_tb_t2t2::synapse0x3d8a580() {
   return (neuron0x3d6e2b0()*0.00476665);
}

double NNfunction_tb_t2t2::synapse0x3d8a5c0() {
   return (neuron0x3d6e5f0()*-0.00547591);
}

double NNfunction_tb_t2t2::synapse0x3d8a600() {
   return (neuron0x3d6e930()*-0.0161231);
}

double NNfunction_tb_t2t2::synapse0x3d8a980() {
   return (neuron0x3d69ce0()*0.00435943);
}

double NNfunction_tb_t2t2::synapse0x3d8a9c0() {
   return (neuron0x3d69f90()*0.0122457);
}

double NNfunction_tb_t2t2::synapse0x3d8aa00() {
   return (neuron0x3d6a2d0()*0.0465877);
}

double NNfunction_tb_t2t2::synapse0x3d8aa40() {
   return (neuron0x3d6a610()*0.0111921);
}

double NNfunction_tb_t2t2::synapse0x3d8aa80() {
   return (neuron0x3d6a950()*0.00572119);
}

double NNfunction_tb_t2t2::synapse0x3d8aac0() {
   return (neuron0x3d6ac90()*0.0311615);
}

double NNfunction_tb_t2t2::synapse0x3d8ab00() {
   return (neuron0x3d6afd0()*0.0329596);
}

double NNfunction_tb_t2t2::synapse0x3d8ab40() {
   return (neuron0x3d6b310()*0.0135654);
}

double NNfunction_tb_t2t2::synapse0x3d8ab80() {
   return (neuron0x3d6b650()*-0.00713888);
}

double NNfunction_tb_t2t2::synapse0x3d8abc0() {
   return (neuron0x3d6b990()*-0.0169855);
}

double NNfunction_tb_t2t2::synapse0x3d8ac00() {
   return (neuron0x3d6bcd0()*-0.020182);
}

double NNfunction_tb_t2t2::synapse0x3d8ac40() {
   return (neuron0x3d6c010()*-0.0296574);
}

double NNfunction_tb_t2t2::synapse0x3d8ac80() {
   return (neuron0x3d6c350()*-0.0190218);
}

double NNfunction_tb_t2t2::synapse0x3d8acc0() {
   return (neuron0x3d6c690()*-3.31158);
}

double NNfunction_tb_t2t2::synapse0x3d8ad00() {
   return (neuron0x3d6c9d0()*0.0186518);
}

double NNfunction_tb_t2t2::synapse0x3d8ad40() {
   return (neuron0x3d6cd10()*0.0215665);
}

double NNfunction_tb_t2t2::synapse0x3d8a7d0() {
   return (neuron0x3d6d050()*2.3148);
}

double NNfunction_tb_t2t2::synapse0x3d8a810() {
   return (neuron0x3d6d5b0()*-0.0162061);
}

double NNfunction_tb_t2t2::synapse0x3d8ae90() {
   return (neuron0x3d6d8f0()*-0.026445);
}

double NNfunction_tb_t2t2::synapse0x3d8aed0() {
   return (neuron0x3d6dc30()*-0.054278);
}

double NNfunction_tb_t2t2::synapse0x3d8af10() {
   return (neuron0x3d6df70()*0.0679487);
}

double NNfunction_tb_t2t2::synapse0x3d8af50() {
   return (neuron0x3d6e2b0()*0.000818554);
}

double NNfunction_tb_t2t2::synapse0x3d8af90() {
   return (neuron0x3d6e5f0()*0.00704541);
}

double NNfunction_tb_t2t2::synapse0x3d8afd0() {
   return (neuron0x3d6e930()*-0.0406998);
}

double NNfunction_tb_t2t2::synapse0x3d8b350() {
   return (neuron0x3d69ce0()*0.303668);
}

double NNfunction_tb_t2t2::synapse0x3d8b390() {
   return (neuron0x3d69f90()*0.0277323);
}

double NNfunction_tb_t2t2::synapse0x3d8b3d0() {
   return (neuron0x3d6a2d0()*0.394729);
}

double NNfunction_tb_t2t2::synapse0x3d8b410() {
   return (neuron0x3d6a610()*-1.11378e-05);
}

double NNfunction_tb_t2t2::synapse0x3d8b450() {
   return (neuron0x3d6a950()*-0.138872);
}

double NNfunction_tb_t2t2::synapse0x3d8b490() {
   return (neuron0x3d6ac90()*0.0062577);
}

double NNfunction_tb_t2t2::synapse0x3d8b4d0() {
   return (neuron0x3d6afd0()*-0.0140162);
}

double NNfunction_tb_t2t2::synapse0x3d8b510() {
   return (neuron0x3d6b310()*0.0347212);
}

double NNfunction_tb_t2t2::synapse0x3d8b550() {
   return (neuron0x3d6b650()*0.00326971);
}

double NNfunction_tb_t2t2::synapse0x3d8b590() {
   return (neuron0x3d6b990()*0.0295772);
}

double NNfunction_tb_t2t2::synapse0x3d8b5d0() {
   return (neuron0x3d6bcd0()*0.0296717);
}

double NNfunction_tb_t2t2::synapse0x3d8b610() {
   return (neuron0x3d6c010()*-0.01612);
}

double NNfunction_tb_t2t2::synapse0x3d8b650() {
   return (neuron0x3d6c350()*0.0170784);
}

double NNfunction_tb_t2t2::synapse0x3d8b690() {
   return (neuron0x3d6c690()*-0.389995);
}

double NNfunction_tb_t2t2::synapse0x3d8b6d0() {
   return (neuron0x3d6c9d0()*0.0119354);
}

double NNfunction_tb_t2t2::synapse0x3d8b710() {
   return (neuron0x3d6cd10()*0.0257417);
}

double NNfunction_tb_t2t2::synapse0x3d8b1a0() {
   return (neuron0x3d6d050()*0.441334);
}

double NNfunction_tb_t2t2::synapse0x3d8b1e0() {
   return (neuron0x3d6d5b0()*-0.0227715);
}

double NNfunction_tb_t2t2::synapse0x3d8b860() {
   return (neuron0x3d6d8f0()*0.0178104);
}

double NNfunction_tb_t2t2::synapse0x3d8b8a0() {
   return (neuron0x3d6dc30()*0.0356556);
}

double NNfunction_tb_t2t2::synapse0x3d8b8e0() {
   return (neuron0x3d6df70()*-0.119619);
}

double NNfunction_tb_t2t2::synapse0x3d8b920() {
   return (neuron0x3d6e2b0()*-0.0856282);
}

double NNfunction_tb_t2t2::synapse0x3d8b960() {
   return (neuron0x3d6e5f0()*0.00103214);
}

double NNfunction_tb_t2t2::synapse0x3d8b9a0() {
   return (neuron0x3d6e930()*0.0672296);
}

double NNfunction_tb_t2t2::synapse0x3d8bd20() {
   return (neuron0x3d69ce0()*0.0620423);
}

double NNfunction_tb_t2t2::synapse0x3d8bd60() {
   return (neuron0x3d69f90()*-0.0152934);
}

double NNfunction_tb_t2t2::synapse0x3d8bda0() {
   return (neuron0x3d6a2d0()*-0.051283);
}

double NNfunction_tb_t2t2::synapse0x3d8bde0() {
   return (neuron0x3d6a610()*-0.0117407);
}

double NNfunction_tb_t2t2::synapse0x3d8be20() {
   return (neuron0x3d6a950()*-0.448835);
}

double NNfunction_tb_t2t2::synapse0x3d8be60() {
   return (neuron0x3d6ac90()*0.00702043);
}

double NNfunction_tb_t2t2::synapse0x3d8bea0() {
   return (neuron0x3d6afd0()*-0.00787524);
}

double NNfunction_tb_t2t2::synapse0x3d8bee0() {
   return (neuron0x3d6b310()*0.0149752);
}

double NNfunction_tb_t2t2::synapse0x3d8bf20() {
   return (neuron0x3d6b650()*0.0193187);
}

double NNfunction_tb_t2t2::synapse0x3d8bf60() {
   return (neuron0x3d6b990()*0.000750604);
}

double NNfunction_tb_t2t2::synapse0x3d8bfa0() {
   return (neuron0x3d6bcd0()*-0.00779889);
}

double NNfunction_tb_t2t2::synapse0x3d8bfe0() {
   return (neuron0x3d6c010()*-0.0270762);
}

double NNfunction_tb_t2t2::synapse0x3d8c020() {
   return (neuron0x3d6c350()*-0.0139166);
}

double NNfunction_tb_t2t2::synapse0x3d8c060() {
   return (neuron0x3d6c690()*-0.0702782);
}

double NNfunction_tb_t2t2::synapse0x3d8c0a0() {
   return (neuron0x3d6c9d0()*-0.00363965);
}

double NNfunction_tb_t2t2::synapse0x3d8c0e0() {
   return (neuron0x3d6cd10()*-0.0154298);
}

double NNfunction_tb_t2t2::synapse0x3d8bb70() {
   return (neuron0x3d6d050()*-0.0171401);
}

double NNfunction_tb_t2t2::synapse0x3d8bbb0() {
   return (neuron0x3d6d5b0()*0.0245631);
}

double NNfunction_tb_t2t2::synapse0x3d8c230() {
   return (neuron0x3d6d8f0()*0.0015509);
}

double NNfunction_tb_t2t2::synapse0x3d8c270() {
   return (neuron0x3d6dc30()*0.00327255);
}

double NNfunction_tb_t2t2::synapse0x3d8c2b0() {
   return (neuron0x3d6df70()*-0.0238199);
}

double NNfunction_tb_t2t2::synapse0x3d8c2f0() {
   return (neuron0x3d6e2b0()*0.00409043);
}

double NNfunction_tb_t2t2::synapse0x3d8c330() {
   return (neuron0x3d6e5f0()*0.0103821);
}

double NNfunction_tb_t2t2::synapse0x3d8c370() {
   return (neuron0x3d6e930()*-1.13107);
}

double NNfunction_tb_t2t2::synapse0x3d74e20() {
   return (neuron0x3d69ce0()*0.0637629);
}

double NNfunction_tb_t2t2::synapse0x3d74e60() {
   return (neuron0x3d69f90()*-0.256204);
}

double NNfunction_tb_t2t2::synapse0x3d74ea0() {
   return (neuron0x3d6a2d0()*-0.0741888);
}

double NNfunction_tb_t2t2::synapse0x3d74ee0() {
   return (neuron0x3d6a610()*0.101417);
}

double NNfunction_tb_t2t2::synapse0x3d74f20() {
   return (neuron0x3d6a950()*-0.0421901);
}

double NNfunction_tb_t2t2::synapse0x3d74f60() {
   return (neuron0x3d6ac90()*0.0258668);
}

double NNfunction_tb_t2t2::synapse0x3d74fa0() {
   return (neuron0x3d6afd0()*-0.0778891);
}

double NNfunction_tb_t2t2::synapse0x3d74fe0() {
   return (neuron0x3d6b310()*-0.0451085);
}

double NNfunction_tb_t2t2::synapse0x3d8cb00() {
   return (neuron0x3d6b650()*-0.0884088);
}

double NNfunction_tb_t2t2::synapse0x3d8cb40() {
   return (neuron0x3d6b990()*-0.117141);
}

double NNfunction_tb_t2t2::synapse0x3d8cb80() {
   return (neuron0x3d6bcd0()*-0.0976127);
}

double NNfunction_tb_t2t2::synapse0x3d8cbc0() {
   return (neuron0x3d6c010()*0.0341294);
}

double NNfunction_tb_t2t2::synapse0x3d8cc00() {
   return (neuron0x3d6c350()*-0.129573);
}

double NNfunction_tb_t2t2::synapse0x3d8cc40() {
   return (neuron0x3d6c690()*0.238434);
}

double NNfunction_tb_t2t2::synapse0x3d8cc80() {
   return (neuron0x3d6c9d0()*1.3222);
}

double NNfunction_tb_t2t2::synapse0x3d8ccc0() {
   return (neuron0x3d6cd10()*-0.0798603);
}

double NNfunction_tb_t2t2::synapse0x3d8c540() {
   return (neuron0x3d6d050()*-0.0133004);
}

double NNfunction_tb_t2t2::synapse0x3d8c580() {
   return (neuron0x3d6d5b0()*-0.00206835);
}

double NNfunction_tb_t2t2::synapse0x3d8ce10() {
   return (neuron0x3d6d8f0()*0.110506);
}

double NNfunction_tb_t2t2::synapse0x3d8ce50() {
   return (neuron0x3d6dc30()*0.081617);
}

double NNfunction_tb_t2t2::synapse0x3d8ce90() {
   return (neuron0x3d6df70()*0.0508947);
}

double NNfunction_tb_t2t2::synapse0x3d8ced0() {
   return (neuron0x3d6e2b0()*-0.135197);
}

double NNfunction_tb_t2t2::synapse0x3d8cf10() {
   return (neuron0x3d6e5f0()*0.0166357);
}

double NNfunction_tb_t2t2::synapse0x3d8cf50() {
   return (neuron0x3d6e930()*-0.314418);
}

double NNfunction_tb_t2t2::synapse0x3d8d2d0() {
   return (neuron0x3d69ce0()*-0.0682896);
}

double NNfunction_tb_t2t2::synapse0x3d8d310() {
   return (neuron0x3d69f90()*-0.0472523);
}

double NNfunction_tb_t2t2::synapse0x3d8d350() {
   return (neuron0x3d6a2d0()*-0.0460737);
}

double NNfunction_tb_t2t2::synapse0x3d8d390() {
   return (neuron0x3d6a610()*-0.308308);
}

double NNfunction_tb_t2t2::synapse0x3d8d3d0() {
   return (neuron0x3d6a950()*-0.172231);
}

double NNfunction_tb_t2t2::synapse0x3d8d410() {
   return (neuron0x3d6ac90()*0.00164531);
}

double NNfunction_tb_t2t2::synapse0x3d8d450() {
   return (neuron0x3d6afd0()*-0.013857);
}

double NNfunction_tb_t2t2::synapse0x3d8d490() {
   return (neuron0x3d6b310()*-0.00937062);
}

double NNfunction_tb_t2t2::synapse0x3d8d4d0() {
   return (neuron0x3d6b650()*-0.0314016);
}

double NNfunction_tb_t2t2::synapse0x3d8d510() {
   return (neuron0x3d6b990()*0.0661086);
}

double NNfunction_tb_t2t2::synapse0x3d8d550() {
   return (neuron0x3d6bcd0()*-0.0263704);
}

double NNfunction_tb_t2t2::synapse0x3d8d590() {
   return (neuron0x3d6c010()*0.0944901);
}

double NNfunction_tb_t2t2::synapse0x3d8d5d0() {
   return (neuron0x3d6c350()*0.0220827);
}

double NNfunction_tb_t2t2::synapse0x3d8d610() {
   return (neuron0x3d6c690()*-0.239355);
}

double NNfunction_tb_t2t2::synapse0x3d8d650() {
   return (neuron0x3d6c9d0()*0.0357062);
}

double NNfunction_tb_t2t2::synapse0x3d8d690() {
   return (neuron0x3d6cd10()*-0.00928531);
}

double NNfunction_tb_t2t2::synapse0x3d8d120() {
   return (neuron0x3d6d050()*-0.219601);
}

double NNfunction_tb_t2t2::synapse0x3d8d160() {
   return (neuron0x3d6d5b0()*0.0994169);
}

double NNfunction_tb_t2t2::synapse0x3d8d7e0() {
   return (neuron0x3d6d8f0()*-0.0388427);
}

double NNfunction_tb_t2t2::synapse0x3d8d820() {
   return (neuron0x3d6dc30()*-0.0515879);
}

double NNfunction_tb_t2t2::synapse0x3d8d860() {
   return (neuron0x3d6df70()*0.195993);
}

double NNfunction_tb_t2t2::synapse0x3d8d8a0() {
   return (neuron0x3d6e2b0()*0.00173569);
}

double NNfunction_tb_t2t2::synapse0x3d8d8e0() {
   return (neuron0x3d6e5f0()*-0.00171351);
}

double NNfunction_tb_t2t2::synapse0x3d8d920() {
   return (neuron0x3d6e930()*0.593277);
}

double NNfunction_tb_t2t2::synapse0x3d8dca0() {
   return (neuron0x3d69ce0()*-0.362852);
}

double NNfunction_tb_t2t2::synapse0x3d8dce0() {
   return (neuron0x3d69f90()*0.0052698);
}

double NNfunction_tb_t2t2::synapse0x3d8dd20() {
   return (neuron0x3d6a2d0()*0.169938);
}

double NNfunction_tb_t2t2::synapse0x3d8dd60() {
   return (neuron0x3d6a610()*0.0306571);
}

double NNfunction_tb_t2t2::synapse0x3d8dda0() {
   return (neuron0x3d6a950()*0.132037);
}

double NNfunction_tb_t2t2::synapse0x3d8dde0() {
   return (neuron0x3d6ac90()*-0.00590365);
}

double NNfunction_tb_t2t2::synapse0x3d8de20() {
   return (neuron0x3d6afd0()*-0.000524542);
}

double NNfunction_tb_t2t2::synapse0x3d8de60() {
   return (neuron0x3d6b310()*-0.00196019);
}

double NNfunction_tb_t2t2::synapse0x3d8dea0() {
   return (neuron0x3d6b650()*-0.0031039);
}

double NNfunction_tb_t2t2::synapse0x3d8dee0() {
   return (neuron0x3d6b990()*0.0212791);
}

double NNfunction_tb_t2t2::synapse0x3d8df20() {
   return (neuron0x3d6bcd0()*-0.0206023);
}

double NNfunction_tb_t2t2::synapse0x3d8df60() {
   return (neuron0x3d6c010()*0.0264379);
}

double NNfunction_tb_t2t2::synapse0x3d8dfa0() {
   return (neuron0x3d6c350()*0.0519286);
}

double NNfunction_tb_t2t2::synapse0x3d8dfe0() {
   return (neuron0x3d6c690()*0.0884379);
}

double NNfunction_tb_t2t2::synapse0x3d8e020() {
   return (neuron0x3d6c9d0()*-0.00491044);
}

double NNfunction_tb_t2t2::synapse0x3d8e060() {
   return (neuron0x3d6cd10()*-0.00353725);
}

double NNfunction_tb_t2t2::synapse0x3d8daf0() {
   return (neuron0x3d6d050()*-0.260697);
}

double NNfunction_tb_t2t2::synapse0x3d8db30() {
   return (neuron0x3d6d5b0()*-0.0108321);
}

double NNfunction_tb_t2t2::synapse0x3d7e660() {
   return (neuron0x3d6d8f0()*-0.0210961);
}

double NNfunction_tb_t2t2::synapse0x3d7e6a0() {
   return (neuron0x3d6dc30()*-0.0601794);
}

double NNfunction_tb_t2t2::synapse0x3d7e6e0() {
   return (neuron0x3d6df70()*-0.148251);
}

double NNfunction_tb_t2t2::synapse0x3d7e720() {
   return (neuron0x3d6e2b0()*0.0369529);
}

double NNfunction_tb_t2t2::synapse0x3d7e760() {
   return (neuron0x3d6e5f0()*0.00883675);
}

double NNfunction_tb_t2t2::synapse0x3d7e7a0() {
   return (neuron0x3d6e930()*-0.344834);
}

double NNfunction_tb_t2t2::synapse0x3d7eb20() {
   return (neuron0x3d69ce0()*-0.812052);
}

double NNfunction_tb_t2t2::synapse0x3d7eb60() {
   return (neuron0x3d69f90()*0.0572065);
}

double NNfunction_tb_t2t2::synapse0x3d7eba0() {
   return (neuron0x3d6a2d0()*0.0579167);
}

double NNfunction_tb_t2t2::synapse0x3d7ebe0() {
   return (neuron0x3d6a610()*-0.0526726);
}

double NNfunction_tb_t2t2::synapse0x3d7ec20() {
   return (neuron0x3d6a950()*0.141075);
}

double NNfunction_tb_t2t2::synapse0x3d7ec60() {
   return (neuron0x3d6ac90()*0.0313559);
}

double NNfunction_tb_t2t2::synapse0x3d7eca0() {
   return (neuron0x3d6afd0()*-0.0334027);
}

double NNfunction_tb_t2t2::synapse0x3d7ece0() {
   return (neuron0x3d6b310()*-0.00722756);
}

double NNfunction_tb_t2t2::synapse0x3d7ed20() {
   return (neuron0x3d6b650()*0.000285552);
}

double NNfunction_tb_t2t2::synapse0x3d7ed60() {
   return (neuron0x3d6b990()*-0.024918);
}

double NNfunction_tb_t2t2::synapse0x3d7eda0() {
   return (neuron0x3d6bcd0()*-0.0269911);
}

double NNfunction_tb_t2t2::synapse0x3d7ede0() {
   return (neuron0x3d6c010()*-0.0259732);
}

double NNfunction_tb_t2t2::synapse0x3d7ee20() {
   return (neuron0x3d6c350()*-0.0610647);
}

double NNfunction_tb_t2t2::synapse0x3d7ee60() {
   return (neuron0x3d6c690()*-0.249797);
}

double NNfunction_tb_t2t2::synapse0x3d7eea0() {
   return (neuron0x3d6c9d0()*0.00565102);
}

double NNfunction_tb_t2t2::synapse0x3d7eee0() {
   return (neuron0x3d6cd10()*0.0157179);
}

double NNfunction_tb_t2t2::synapse0x3d7e970() {
   return (neuron0x3d6d050()*0.340904);
}

double NNfunction_tb_t2t2::synapse0x3d7e9b0() {
   return (neuron0x3d6d5b0()*0.000966202);
}

double NNfunction_tb_t2t2::synapse0x3d7f030() {
   return (neuron0x3d6d8f0()*0.0317724);
}

double NNfunction_tb_t2t2::synapse0x3d7f070() {
   return (neuron0x3d6dc30()*-0.0353797);
}

double NNfunction_tb_t2t2::synapse0x3d7f0b0() {
   return (neuron0x3d6df70()*-0.722265);
}

double NNfunction_tb_t2t2::synapse0x3d7f0f0() {
   return (neuron0x3d6e2b0()*0.0569186);
}

double NNfunction_tb_t2t2::synapse0x3d7f130() {
   return (neuron0x3d6e5f0()*-0.00369042);
}

double NNfunction_tb_t2t2::synapse0x3d7f170() {
   return (neuron0x3d6e930()*0.546417);
}

double NNfunction_tb_t2t2::synapse0x3d7f4f0() {
   return (neuron0x3d69ce0()*-0.0874401);
}

double NNfunction_tb_t2t2::synapse0x3d7f530() {
   return (neuron0x3d69f90()*0.0257342);
}

double NNfunction_tb_t2t2::synapse0x3d7f570() {
   return (neuron0x3d6a2d0()*-0.0672269);
}

double NNfunction_tb_t2t2::synapse0x3d7f5b0() {
   return (neuron0x3d6a610()*-0.750592);
}

double NNfunction_tb_t2t2::synapse0x3d7f5f0() {
   return (neuron0x3d6a950()*-0.123093);
}

double NNfunction_tb_t2t2::synapse0x3d7f630() {
   return (neuron0x3d6ac90()*-0.0171318);
}

double NNfunction_tb_t2t2::synapse0x3d7f670() {
   return (neuron0x3d6afd0()*0.00224457);
}

double NNfunction_tb_t2t2::synapse0x3d7f6b0() {
   return (neuron0x3d6b310()*0.013926);
}

double NNfunction_tb_t2t2::synapse0x3d7f6f0() {
   return (neuron0x3d6b650()*0.00632114);
}

double NNfunction_tb_t2t2::synapse0x3d7f730() {
   return (neuron0x3d6b990()*-0.025928);
}

double NNfunction_tb_t2t2::synapse0x3d7f770() {
   return (neuron0x3d6bcd0()*0.0387235);
}

double NNfunction_tb_t2t2::synapse0x3d7f7b0() {
   return (neuron0x3d6c010()*-0.0576193);
}

double NNfunction_tb_t2t2::synapse0x3d7f7f0() {
   return (neuron0x3d6c350()*-0.0361856);
}

double NNfunction_tb_t2t2::synapse0x3d7f830() {
   return (neuron0x3d6c690()*-0.0844982);
}

double NNfunction_tb_t2t2::synapse0x3d7f870() {
   return (neuron0x3d6c9d0()*-0.00630693);
}

double NNfunction_tb_t2t2::synapse0x3d7f8b0() {
   return (neuron0x3d6cd10()*-0.0145533);
}

double NNfunction_tb_t2t2::synapse0x3d7f340() {
   return (neuron0x3d6d050()*0.454165);
}

double NNfunction_tb_t2t2::synapse0x3d7f380() {
   return (neuron0x3d6d5b0()*-0.0951492);
}

double NNfunction_tb_t2t2::synapse0x3d7fa00() {
   return (neuron0x3d6d8f0()*-0.0698172);
}

double NNfunction_tb_t2t2::synapse0x3d7fa40() {
   return (neuron0x3d6dc30()*-0.0265804);
}

double NNfunction_tb_t2t2::synapse0x3d7fa80() {
   return (neuron0x3d6df70()*0.0868849);
}

double NNfunction_tb_t2t2::synapse0x3d7fac0() {
   return (neuron0x3d6e2b0()*0.00415607);
}

double NNfunction_tb_t2t2::synapse0x3d7fb00() {
   return (neuron0x3d6e5f0()*-0.0598733);
}

double NNfunction_tb_t2t2::synapse0x3d7fb40() {
   return (neuron0x3d6e930()*0.0173214);
}

double NNfunction_tb_t2t2::synapse0x3d7fec0() {
   return (neuron0x3d69ce0()*-0.248699);
}

double NNfunction_tb_t2t2::synapse0x3d7ff00() {
   return (neuron0x3d69f90()*0.0215734);
}

double NNfunction_tb_t2t2::synapse0x3d7ff40() {
   return (neuron0x3d6a2d0()*0.0129574);
}

double NNfunction_tb_t2t2::synapse0x3d7ff80() {
   return (neuron0x3d6a610()*0.114131);
}

double NNfunction_tb_t2t2::synapse0x3d7ffc0() {
   return (neuron0x3d6a950()*-0.13389);
}

double NNfunction_tb_t2t2::synapse0x3d80000() {
   return (neuron0x3d6ac90()*-0.0105578);
}

double NNfunction_tb_t2t2::synapse0x3d80040() {
   return (neuron0x3d6afd0()*0.0111518);
}

double NNfunction_tb_t2t2::synapse0x3d80080() {
   return (neuron0x3d6b310()*-0.0111223);
}

double NNfunction_tb_t2t2::synapse0x3d800c0() {
   return (neuron0x3d6b650()*-0.0211219);
}

double NNfunction_tb_t2t2::synapse0x3d80100() {
   return (neuron0x3d6b990()*-0.0101696);
}

double NNfunction_tb_t2t2::synapse0x3d80140() {
   return (neuron0x3d6bcd0()*-0.00269372);
}

double NNfunction_tb_t2t2::synapse0x3d80180() {
   return (neuron0x3d6c010()*0.0155799);
}

double NNfunction_tb_t2t2::synapse0x3d801c0() {
   return (neuron0x3d6c350()*0.0145509);
}

double NNfunction_tb_t2t2::synapse0x3d80200() {
   return (neuron0x3d6c690()*0.531714);
}

double NNfunction_tb_t2t2::synapse0x3d80240() {
   return (neuron0x3d6c9d0()*0.00367426);
}

double NNfunction_tb_t2t2::synapse0x3d80280() {
   return (neuron0x3d6cd10()*0.00809876);
}

double NNfunction_tb_t2t2::synapse0x3d7fd10() {
   return (neuron0x3d6d050()*0.155081);
}

double NNfunction_tb_t2t2::synapse0x3d7fd50() {
   return (neuron0x3d6d5b0()*-0.0194846);
}

double NNfunction_tb_t2t2::synapse0x3d803d0() {
   return (neuron0x3d6d8f0()*-0.0301949);
}

double NNfunction_tb_t2t2::synapse0x3d80410() {
   return (neuron0x3d6dc30()*-0.20415);
}

double NNfunction_tb_t2t2::synapse0x3d80450() {
   return (neuron0x3d6df70()*0.768709);
}

double NNfunction_tb_t2t2::synapse0x3d80490() {
   return (neuron0x3d6e2b0()*0.0766079);
}

double NNfunction_tb_t2t2::synapse0x3d804d0() {
   return (neuron0x3d6e5f0()*-0.0319397);
}

double NNfunction_tb_t2t2::synapse0x3d80510() {
   return (neuron0x3d6e930()*-0.179066);
}

double NNfunction_tb_t2t2::synapse0x3d923e0() {
   return (neuron0x3d69ce0()*0.159625);
}

double NNfunction_tb_t2t2::synapse0x3d92420() {
   return (neuron0x3d69f90()*-0.0219296);
}

double NNfunction_tb_t2t2::synapse0x3d92460() {
   return (neuron0x3d6a2d0()*0.078239);
}

double NNfunction_tb_t2t2::synapse0x3d924a0() {
   return (neuron0x3d6a610()*-0.143294);
}

double NNfunction_tb_t2t2::synapse0x3d924e0() {
   return (neuron0x3d6a950()*0.290444);
}

double NNfunction_tb_t2t2::synapse0x3d92520() {
   return (neuron0x3d6ac90()*-0.0742534);
}

double NNfunction_tb_t2t2::synapse0x3d92560() {
   return (neuron0x3d6afd0()*0.183688);
}

double NNfunction_tb_t2t2::synapse0x3d925a0() {
   return (neuron0x3d6b310()*0.0197446);
}

double NNfunction_tb_t2t2::synapse0x3d925e0() {
   return (neuron0x3d6b650()*0.0170487);
}

double NNfunction_tb_t2t2::synapse0x3d92620() {
   return (neuron0x3d6b990()*0.172259);
}

double NNfunction_tb_t2t2::synapse0x3d92660() {
   return (neuron0x3d6bcd0()*-0.0902364);
}

double NNfunction_tb_t2t2::synapse0x3d926a0() {
   return (neuron0x3d6c010()*0.0177608);
}

double NNfunction_tb_t2t2::synapse0x3d926e0() {
   return (neuron0x3d6c350()*0.0980348);
}

double NNfunction_tb_t2t2::synapse0x3d92720() {
   return (neuron0x3d6c690()*0.0988087);
}

double NNfunction_tb_t2t2::synapse0x3d92760() {
   return (neuron0x3d6c9d0()*0.100418);
}

double NNfunction_tb_t2t2::synapse0x3d927a0() {
   return (neuron0x3d6cd10()*0.224235);
}

double NNfunction_tb_t2t2::synapse0x3d80550() {
   return (neuron0x3d6d050()*0.468296);
}

double NNfunction_tb_t2t2::synapse0x3d80590() {
   return (neuron0x3d6d5b0()*-0.0789909);
}

double NNfunction_tb_t2t2::synapse0x3d928f0() {
   return (neuron0x3d6d8f0()*0.0576133);
}

double NNfunction_tb_t2t2::synapse0x3d92930() {
   return (neuron0x3d6dc30()*0.11252);
}

double NNfunction_tb_t2t2::synapse0x3d92970() {
   return (neuron0x3d6df70()*0.117229);
}

double NNfunction_tb_t2t2::synapse0x3d929b0() {
   return (neuron0x3d6e2b0()*0.0745899);
}

double NNfunction_tb_t2t2::synapse0x3d929f0() {
   return (neuron0x3d6e5f0()*-0.111599);
}

double NNfunction_tb_t2t2::synapse0x3d92a30() {
   return (neuron0x3d6e930()*0.445135);
}

double NNfunction_tb_t2t2::synapse0x3d92db0() {
   return (neuron0x3d69ce0()*0.0201135);
}

double NNfunction_tb_t2t2::synapse0x3d92df0() {
   return (neuron0x3d69f90()*-0.0126695);
}

double NNfunction_tb_t2t2::synapse0x3d92e30() {
   return (neuron0x3d6a2d0()*-0.0106073);
}

double NNfunction_tb_t2t2::synapse0x3d92e70() {
   return (neuron0x3d6a610()*2.02698);
}

double NNfunction_tb_t2t2::synapse0x3d92eb0() {
   return (neuron0x3d6a950()*0.0234657);
}

double NNfunction_tb_t2t2::synapse0x3d92ef0() {
   return (neuron0x3d6ac90()*-0.00110999);
}

double NNfunction_tb_t2t2::synapse0x3d92f30() {
   return (neuron0x3d6afd0()*-0.000445949);
}

double NNfunction_tb_t2t2::synapse0x3d92f70() {
   return (neuron0x3d6b310()*0.0021289);
}

double NNfunction_tb_t2t2::synapse0x3d92fb0() {
   return (neuron0x3d6b650()*0.00244243);
}

double NNfunction_tb_t2t2::synapse0x3d92ff0() {
   return (neuron0x3d6b990()*-0.00539702);
}

double NNfunction_tb_t2t2::synapse0x3d93030() {
   return (neuron0x3d6bcd0()*0.000812045);
}

double NNfunction_tb_t2t2::synapse0x3d93070() {
   return (neuron0x3d6c010()*-0.00970759);
}

double NNfunction_tb_t2t2::synapse0x3d930b0() {
   return (neuron0x3d6c350()*-0.00869167);
}

double NNfunction_tb_t2t2::synapse0x3d930f0() {
   return (neuron0x3d6c690()*0.0438806);
}

double NNfunction_tb_t2t2::synapse0x3d93130() {
   return (neuron0x3d6c9d0()*-0.00587065);
}

double NNfunction_tb_t2t2::synapse0x3d93170() {
   return (neuron0x3d6cd10()*-0.00501925);
}

double NNfunction_tb_t2t2::synapse0x3d92c00() {
   return (neuron0x3d6d050()*0.0806808);
}

double NNfunction_tb_t2t2::synapse0x3d92c40() {
   return (neuron0x3d6d5b0()*0.00341838);
}

double NNfunction_tb_t2t2::synapse0x3d932c0() {
   return (neuron0x3d6d8f0()*-0.00505658);
}

double NNfunction_tb_t2t2::synapse0x3d93300() {
   return (neuron0x3d6dc30()*-0.00337548);
}

double NNfunction_tb_t2t2::synapse0x3d93340() {
   return (neuron0x3d6df70()*-0.203546);
}

double NNfunction_tb_t2t2::synapse0x3d93380() {
   return (neuron0x3d6e2b0()*0.00884956);
}

double NNfunction_tb_t2t2::synapse0x3d933c0() {
   return (neuron0x3d6e5f0()*-0.00297427);
}

double NNfunction_tb_t2t2::synapse0x3d93400() {
   return (neuron0x3d6e930()*0.00946736);
}

double NNfunction_tb_t2t2::synapse0x3d93780() {
   return (neuron0x3d69ce0()*-0.00137664);
}

double NNfunction_tb_t2t2::synapse0x3d937c0() {
   return (neuron0x3d69f90()*0.0107183);
}

double NNfunction_tb_t2t2::synapse0x3d93800() {
   return (neuron0x3d6a2d0()*-0.0322603);
}

double NNfunction_tb_t2t2::synapse0x3d93840() {
   return (neuron0x3d6a610()*-0.0040544);
}

double NNfunction_tb_t2t2::synapse0x3d93880() {
   return (neuron0x3d6a950()*0.0317126);
}

double NNfunction_tb_t2t2::synapse0x3d938c0() {
   return (neuron0x3d6ac90()*0.00688339);
}

double NNfunction_tb_t2t2::synapse0x3d93900() {
   return (neuron0x3d6afd0()*0.00879616);
}

double NNfunction_tb_t2t2::synapse0x3d93940() {
   return (neuron0x3d6b310()*-0.000367738);
}

double NNfunction_tb_t2t2::synapse0x3d93980() {
   return (neuron0x3d6b650()*-0.00970152);
}

double NNfunction_tb_t2t2::synapse0x3d939c0() {
   return (neuron0x3d6b990()*-0.00920806);
}

double NNfunction_tb_t2t2::synapse0x3d93a00() {
   return (neuron0x3d6bcd0()*-0.00490609);
}

double NNfunction_tb_t2t2::synapse0x3d93a40() {
   return (neuron0x3d6c010()*-0.00264077);
}

double NNfunction_tb_t2t2::synapse0x3d93a80() {
   return (neuron0x3d6c350()*-0.00452378);
}

double NNfunction_tb_t2t2::synapse0x3d93ac0() {
   return (neuron0x3d6c690()*0.305038);
}

double NNfunction_tb_t2t2::synapse0x3d93b00() {
   return (neuron0x3d6c9d0()*-0.0016793);
}

double NNfunction_tb_t2t2::synapse0x3d93b40() {
   return (neuron0x3d6cd10()*0.00625608);
}

double NNfunction_tb_t2t2::synapse0x3d935d0() {
   return (neuron0x3d6d050()*0.500046);
}

double NNfunction_tb_t2t2::synapse0x3d93610() {
   return (neuron0x3d6d5b0()*0.0114968);
}

double NNfunction_tb_t2t2::synapse0x3d93c90() {
   return (neuron0x3d6d8f0()*-0.000265083);
}

double NNfunction_tb_t2t2::synapse0x3d93cd0() {
   return (neuron0x3d6dc30()*0.020604);
}

double NNfunction_tb_t2t2::synapse0x3d93d10() {
   return (neuron0x3d6df70()*0.10385);
}

double NNfunction_tb_t2t2::synapse0x3d93d50() {
   return (neuron0x3d6e2b0()*-0.0123134);
}

double NNfunction_tb_t2t2::synapse0x3d93d90() {
   return (neuron0x3d6e5f0()*0.0151585);
}

double NNfunction_tb_t2t2::synapse0x3d93dd0() {
   return (neuron0x3d6e930()*0.0190757);
}

double NNfunction_tb_t2t2::synapse0x3d94150() {
   return (neuron0x3d69ce0()*-0.359932);
}

double NNfunction_tb_t2t2::synapse0x3d94190() {
   return (neuron0x3d69f90()*-0.0199896);
}

double NNfunction_tb_t2t2::synapse0x3d941d0() {
   return (neuron0x3d6a2d0()*-0.146795);
}

double NNfunction_tb_t2t2::synapse0x3d94210() {
   return (neuron0x3d6a610()*0.0494596);
}

double NNfunction_tb_t2t2::synapse0x3d94250() {
   return (neuron0x3d6a950()*0.464894);
}

double NNfunction_tb_t2t2::synapse0x3d94290() {
   return (neuron0x3d6ac90()*0.00370131);
}

double NNfunction_tb_t2t2::synapse0x3d942d0() {
   return (neuron0x3d6afd0()*0.0240738);
}

double NNfunction_tb_t2t2::synapse0x3d94310() {
   return (neuron0x3d6b310()*-0.0113183);
}

double NNfunction_tb_t2t2::synapse0x3d94350() {
   return (neuron0x3d6b650()*-0.036055);
}

double NNfunction_tb_t2t2::synapse0x3d94390() {
   return (neuron0x3d6b990()*0.00486003);
}

double NNfunction_tb_t2t2::synapse0x3d943d0() {
   return (neuron0x3d6bcd0()*0.0264213);
}

double NNfunction_tb_t2t2::synapse0x3d94410() {
   return (neuron0x3d6c010()*0.0288618);
}

double NNfunction_tb_t2t2::synapse0x3d94450() {
   return (neuron0x3d6c350()*0.00798737);
}

double NNfunction_tb_t2t2::synapse0x3d94490() {
   return (neuron0x3d6c690()*-0.0150559);
}

double NNfunction_tb_t2t2::synapse0x3d944d0() {
   return (neuron0x3d6c9d0()*-0.00584624);
}

double NNfunction_tb_t2t2::synapse0x3d94510() {
   return (neuron0x3d6cd10()*0.0041163);
}

double NNfunction_tb_t2t2::synapse0x3d93fa0() {
   return (neuron0x3d6d050()*0.232104);
}

double NNfunction_tb_t2t2::synapse0x3d93fe0() {
   return (neuron0x3d6d5b0()*-0.0343056);
}

double NNfunction_tb_t2t2::synapse0x3d94660() {
   return (neuron0x3d6d8f0()*-0.0240041);
}

double NNfunction_tb_t2t2::synapse0x3d946a0() {
   return (neuron0x3d6dc30()*-0.0249985);
}

double NNfunction_tb_t2t2::synapse0x3d946e0() {
   return (neuron0x3d6df70()*0.00724347);
}

double NNfunction_tb_t2t2::synapse0x3d94720() {
   return (neuron0x3d6e2b0()*-0.00919579);
}

double NNfunction_tb_t2t2::synapse0x3d94760() {
   return (neuron0x3d6e5f0()*0.00583968);
}

double NNfunction_tb_t2t2::synapse0x3d947a0() {
   return (neuron0x3d6e930()*0.684456);
}

double NNfunction_tb_t2t2::synapse0x3b34580() {
   return (neuron0x3d6eda0()*0.333738);
}

double NNfunction_tb_t2t2::synapse0x3b345c0() {
   return (neuron0x3d6f5e0()*0.190267);
}

double NNfunction_tb_t2t2::synapse0x3d71150() {
   return (neuron0x3d700c0()*0.10274);
}

double NNfunction_tb_t2t2::synapse0x3d71190() {
   return (neuron0x3d6fb60()*0.587804);
}

double NNfunction_tb_t2t2::synapse0x3d72c20() {
   return (neuron0x3d70ea0()*0.297835);
}

double NNfunction_tb_t2t2::synapse0x3d72c60() {
   return (neuron0x3d72970()*-0.0232642);
}

double NNfunction_tb_t2t2::synapse0x3d739f0() {
   return (neuron0x3d73740()*0.552215);
}

double NNfunction_tb_t2t2::synapse0x3d73a30() {
   return (neuron0x3d74110()*0.549694);
}

double NNfunction_tb_t2t2::synapse0x3d743c0() {
   return (neuron0x3d74ae0()*0.373332);
}

double NNfunction_tb_t2t2::synapse0x3d74400() {
   return (neuron0x3d755c0()*-0.242795);
}

double NNfunction_tb_t2t2::synapse0x3d74d90() {
   return (neuron0x3d75f90()*0.292582);
}

double NNfunction_tb_t2t2::synapse0x3d74dd0() {
   return (neuron0x3d73070()*0.414277);
}

double NNfunction_tb_t2t2::synapse0x3d75870() {
   return (neuron0x3d77b40()*0.208943);
}

double NNfunction_tb_t2t2::synapse0x3d758b0() {
   return (neuron0x3d78510()*0.423479);
}

double NNfunction_tb_t2t2::synapse0x3d76240() {
   return (neuron0x3d78ee0()*0.272213);
}

double NNfunction_tb_t2t2::synapse0x3d76280() {
   return (neuron0x3d798b0()*0.0490906);
}

double NNfunction_tb_t2t2::synapse0x3d73320() {
   return (neuron0x3d7b6c0()*-0.363955);
}

double NNfunction_tb_t2t2::synapse0x3d73360() {
   return (neuron0x3d7b9a0()*0.189867);
}

double NNfunction_tb_t2t2::synapse0x3d77df0() {
   return (neuron0x3d7c370()*0.130559);
}

double NNfunction_tb_t2t2::synapse0x3d77e30() {
   return (neuron0x3d7cd40()*-0.26886);
}

double NNfunction_tb_t2t2::synapse0x3d787c0() {
   return (neuron0x3d7d710()*0.445783);
}

double NNfunction_tb_t2t2::synapse0x3d78800() {
   return (neuron0x3d7e0e0()*0.387173);
}

double NNfunction_tb_t2t2::synapse0x3d79190() {
   return (neuron0x3d76c30()*0.634834);
}

double NNfunction_tb_t2t2::synapse0x3d791d0() {
   return (neuron0x3d77600()*0.44531);
}

double NNfunction_tb_t2t2::synapse0x3d79b60() {
   return (neuron0x3d80e70()*0.609526);
}

double NNfunction_tb_t2t2::synapse0x3d79ba0() {
   return (neuron0x3d81840()*0.579392);
}

double NNfunction_tb_t2t2::synapse0x3d6cbf0() {
   return (neuron0x3d82210()*0.0550624);
}

double NNfunction_tb_t2t2::synapse0x3d6cc30() {
   return (neuron0x3d82be0()*-0.221861);
}

double NNfunction_tb_t2t2::synapse0x3d7bc50() {
   return (neuron0x3d835b0()*0.510353);
}

double NNfunction_tb_t2t2::synapse0x3d7bc90() {
   return (neuron0x3d83f80()*-0.228333);
}

double NNfunction_tb_t2t2::synapse0x3d7c620() {
   return (neuron0x3d84950()*0.275087);
}

double NNfunction_tb_t2t2::synapse0x3d7c660() {
   return (neuron0x3d85320()*0.432834);
}

double NNfunction_tb_t2t2::synapse0x3d7cff0() {
   return (neuron0x3d7b3b0()*0.200671);
}

double NNfunction_tb_t2t2::synapse0x3d7d030() {
   return (neuron0x3d87f00()*0.799215);
}

double NNfunction_tb_t2t2::synapse0x3d7d9c0() {
   return (neuron0x3d888d0()*0.512757);
}

double NNfunction_tb_t2t2::synapse0x3d7da00() {
   return (neuron0x3d892a0()*0.461912);
}

double NNfunction_tb_t2t2::synapse0x3d7e390() {
   return (neuron0x3d89c70()*0.452928);
}

double NNfunction_tb_t2t2::synapse0x3d7e3d0() {
   return (neuron0x3d8a640()*0.143167);
}

double NNfunction_tb_t2t2::synapse0x3d76ee0() {
   return (neuron0x3d8b010()*-0.10991);
}

double NNfunction_tb_t2t2::synapse0x3d76f20() {
   return (neuron0x3d8b9e0()*0.379933);
}

double NNfunction_tb_t2t2::synapse0x3d80790() {
   return (neuron0x3d8c3b0()*0.0807692);
}

double NNfunction_tb_t2t2::synapse0x3d807d0() {
   return (neuron0x3d8cf90()*0.473782);
}

double NNfunction_tb_t2t2::synapse0x3d81120() {
   return (neuron0x3d8d960()*0.409);
}

double NNfunction_tb_t2t2::synapse0x3d81160() {
   return (neuron0x3d7e7e0()*-0.0448757);
}

double NNfunction_tb_t2t2::synapse0x3d81af0() {
   return (neuron0x3d7f1b0()*0.536656);
}

double NNfunction_tb_t2t2::synapse0x3d81b30() {
   return (neuron0x3d7fb80()*-0.131626);
}

double NNfunction_tb_t2t2::synapse0x3d824c0() {
   return (neuron0x3d921c0()*0.406126);
}

double NNfunction_tb_t2t2::synapse0x3d82500() {
   return (neuron0x3d92a70()*0.277577);
}

double NNfunction_tb_t2t2::synapse0x3d82e90() {
   return (neuron0x3d93440()*0.340226);
}

double NNfunction_tb_t2t2::synapse0x3d82ed0() {
   return (neuron0x3d93e10()*0.246185);
}

double NNfunction_tb_t2t2::synapse0x3d855d0() {
   return (neuron0x3d6eda0()*-0.430853);
}

double NNfunction_tb_t2t2::synapse0x3d85610() {
   return (neuron0x3d6f5e0()*-0.605173);
}

double NNfunction_tb_t2t2::synapse0x3d7ab90() {
   return (neuron0x3d700c0()*-0.688011);
}

double NNfunction_tb_t2t2::synapse0x3d7abd0() {
   return (neuron0x3d6fb60()*-0.0689332);
}

double NNfunction_tb_t2t2::synapse0x3d881b0() {
   return (neuron0x3d70ea0()*-0.111494);
}

double NNfunction_tb_t2t2::synapse0x3d881f0() {
   return (neuron0x3d72970()*-1.69591);
}

double NNfunction_tb_t2t2::synapse0x3d88b80() {
   return (neuron0x3d73740()*-1.22627);
}

double NNfunction_tb_t2t2::synapse0x3d88bc0() {
   return (neuron0x3d74110()*-0.602317);
}

double NNfunction_tb_t2t2::synapse0x3d89550() {
   return (neuron0x3d74ae0()*-0.281716);
}

double NNfunction_tb_t2t2::synapse0x3d89590() {
   return (neuron0x3d755c0()*-0.340864);
}

double NNfunction_tb_t2t2::synapse0x3d89f20() {
   return (neuron0x3d75f90()*-0.471633);
}

double NNfunction_tb_t2t2::synapse0x3d89f60() {
   return (neuron0x3d73070()*1.3968);
}

double NNfunction_tb_t2t2::synapse0x3d8a8f0() {
   return (neuron0x3d77b40()*-0.950168);
}

double NNfunction_tb_t2t2::synapse0x3d8a930() {
   return (neuron0x3d78510()*-0.0660865);
}

double NNfunction_tb_t2t2::synapse0x3d8b2c0() {
   return (neuron0x3d78ee0()*0.859331);
}

double NNfunction_tb_t2t2::synapse0x3d8b300() {
   return (neuron0x3d798b0()*-1.41237);
}

double NNfunction_tb_t2t2::synapse0x3d8bc90() {
   return (neuron0x3d7b6c0()*0.13745);
}

double NNfunction_tb_t2t2::synapse0x3d8bcd0() {
   return (neuron0x3d7b9a0()*0.166358);
}

double NNfunction_tb_t2t2::synapse0x3d8c660() {
   return (neuron0x3d7c370()*-0.00209595);
}

double NNfunction_tb_t2t2::synapse0x3d8c6a0() {
   return (neuron0x3d7cd40()*1.88249);
}

double NNfunction_tb_t2t2::synapse0x3d8d240() {
   return (neuron0x3d7d710()*1.0411);
}

double NNfunction_tb_t2t2::synapse0x3d8d280() {
   return (neuron0x3d7e0e0()*0.471427);
}

double NNfunction_tb_t2t2::synapse0x3d8dc10() {
   return (neuron0x3d76c30()*1.41225);
}

double NNfunction_tb_t2t2::synapse0x3d8dc50() {
   return (neuron0x3d77600()*-0.195163);
}

double NNfunction_tb_t2t2::synapse0x3d7ea90() {
   return (neuron0x3d80e70()*0.0445874);
}

double NNfunction_tb_t2t2::synapse0x3d7ead0() {
   return (neuron0x3d81840()*-0.684437);
}

double NNfunction_tb_t2t2::synapse0x3d7f460() {
   return (neuron0x3d82210()*1.78098);
}

double NNfunction_tb_t2t2::synapse0x3d7f4a0() {
   return (neuron0x3d82be0()*1.5);
}

double NNfunction_tb_t2t2::synapse0x3d7fe30() {
   return (neuron0x3d835b0()*-2.47304);
}

double NNfunction_tb_t2t2::synapse0x3d7fe70() {
   return (neuron0x3d83f80()*1.15386);
}

double NNfunction_tb_t2t2::synapse0x3d92350() {
   return (neuron0x3d84950()*-0.269705);
}

double NNfunction_tb_t2t2::synapse0x3d92390() {
   return (neuron0x3d85320()*0.851321);
}

double NNfunction_tb_t2t2::synapse0x3d92d20() {
   return (neuron0x3d7b3b0()*0.374201);
}

double NNfunction_tb_t2t2::synapse0x3d92d60() {
   return (neuron0x3d87f00()*-0.221077);
}

double NNfunction_tb_t2t2::synapse0x3d936f0() {
   return (neuron0x3d888d0()*-0.10432);
}

double NNfunction_tb_t2t2::synapse0x3d93730() {
   return (neuron0x3d892a0()*0.594258);
}

double NNfunction_tb_t2t2::synapse0x3d940c0() {
   return (neuron0x3d89c70()*-1.68276);
}

double NNfunction_tb_t2t2::synapse0x3d94100() {
   return (neuron0x3d8a640()*-2.75702);
}

double NNfunction_tb_t2t2::synapse0x3d6f050() {
   return (neuron0x3d8b010()*2.48442);
}

double NNfunction_tb_t2t2::synapse0x3d6f090() {
   return (neuron0x3d8b9e0()*-0.0620055);
}

double NNfunction_tb_t2t2::synapse0x3d83860() {
   return (neuron0x3d8c3b0()*-0.251643);
}

double NNfunction_tb_t2t2::synapse0x3d838a0() {
   return (neuron0x3d8cf90()*-0.974286);
}

double NNfunction_tb_t2t2::synapse0x3d947e0() {
   return (neuron0x3d8d960()*-2.57496);
}

double NNfunction_tb_t2t2::synapse0x3d94820() {
   return (neuron0x3d7e7e0()*1.1482);
}

double NNfunction_tb_t2t2::synapse0x3d94860() {
   return (neuron0x3d7f1b0()*1.60047);
}

double NNfunction_tb_t2t2::synapse0x3d948a0() {
   return (neuron0x3d7fb80()*1.21907);
}

double NNfunction_tb_t2t2::synapse0x3d9b750() {
   return (neuron0x3d921c0()*0.57879);
}

double NNfunction_tb_t2t2::synapse0x3d9b790() {
   return (neuron0x3d92a70()*-1.8339);
}

double NNfunction_tb_t2t2::synapse0x3d9b7d0() {
   return (neuron0x3d93440()*-0.776068);
}

double NNfunction_tb_t2t2::synapse0x3d9b810() {
   return (neuron0x3d93e10()*-0.193093);
}

double NNfunction_tb_t2t2::synapse0x3d9bb90() {
   return (neuron0x3d6eda0()*-0.487901);
}

double NNfunction_tb_t2t2::synapse0x3d9bbd0() {
   return (neuron0x3d6f5e0()*1.02329);
}

double NNfunction_tb_t2t2::synapse0x3d9bc10() {
   return (neuron0x3d700c0()*-0.154705);
}

double NNfunction_tb_t2t2::synapse0x3d9bc50() {
   return (neuron0x3d6fb60()*-0.272188);
}

double NNfunction_tb_t2t2::synapse0x3d9bc90() {
   return (neuron0x3d70ea0()*-0.135177);
}

double NNfunction_tb_t2t2::synapse0x3d9bcd0() {
   return (neuron0x3d72970()*0.137984);
}

double NNfunction_tb_t2t2::synapse0x3d9bd10() {
   return (neuron0x3d73740()*-0.339957);
}

double NNfunction_tb_t2t2::synapse0x3d9bd50() {
   return (neuron0x3d74110()*-0.699111);
}

double NNfunction_tb_t2t2::synapse0x3d9bd90() {
   return (neuron0x3d74ae0()*-0.205599);
}

double NNfunction_tb_t2t2::synapse0x3d9bdd0() {
   return (neuron0x3d755c0()*0.311617);
}

double NNfunction_tb_t2t2::synapse0x3d9be10() {
   return (neuron0x3d75f90()*-0.420752);
}

double NNfunction_tb_t2t2::synapse0x3d9be50() {
   return (neuron0x3d73070()*-2.86658);
}

double NNfunction_tb_t2t2::synapse0x3d9be90() {
   return (neuron0x3d77b40()*0.454145);
}

double NNfunction_tb_t2t2::synapse0x3d9bed0() {
   return (neuron0x3d78510()*-0.103711);
}

double NNfunction_tb_t2t2::synapse0x3d9bf10() {
   return (neuron0x3d78ee0()*-0.0237238);
}

double NNfunction_tb_t2t2::synapse0x3d9bf50() {
   return (neuron0x3d798b0()*0.0179784);
}

double NNfunction_tb_t2t2::synapse0x3d9b9e0() {
   return (neuron0x3d7b6c0()*-0.0565658);
}

double NNfunction_tb_t2t2::synapse0x3d9ba20() {
   return (neuron0x3d7b9a0()*0.204921);
}

double NNfunction_tb_t2t2::synapse0x3d9c0a0() {
   return (neuron0x3d7c370()*-0.210586);
}

double NNfunction_tb_t2t2::synapse0x3d9c0e0() {
   return (neuron0x3d7cd40()*0.301701);
}

double NNfunction_tb_t2t2::synapse0x3d9c120() {
   return (neuron0x3d7d710()*0.290243);
}

double NNfunction_tb_t2t2::synapse0x3d9c160() {
   return (neuron0x3d7e0e0()*0.279826);
}

double NNfunction_tb_t2t2::synapse0x3d9c1a0() {
   return (neuron0x3d76c30()*0.853364);
}

double NNfunction_tb_t2t2::synapse0x3d9c1e0() {
   return (neuron0x3d77600()*-0.180125);
}

double NNfunction_tb_t2t2::synapse0x3d9c220() {
   return (neuron0x3d80e70()*0.0582202);
}

double NNfunction_tb_t2t2::synapse0x3d9c260() {
   return (neuron0x3d81840()*0.244834);
}

double NNfunction_tb_t2t2::synapse0x3d9c2a0() {
   return (neuron0x3d82210()*0.301691);
}

double NNfunction_tb_t2t2::synapse0x3d9c2e0() {
   return (neuron0x3d82be0()*0.77743);
}

double NNfunction_tb_t2t2::synapse0x3d9c320() {
   return (neuron0x3d835b0()*0.726092);
}

double NNfunction_tb_t2t2::synapse0x3d9c360() {
   return (neuron0x3d83f80()*0.274825);
}

double NNfunction_tb_t2t2::synapse0x3d9c3a0() {
   return (neuron0x3d84950()*-0.286689);
}

double NNfunction_tb_t2t2::synapse0x3d9c3e0() {
   return (neuron0x3d85320()*0.249222);
}

double NNfunction_tb_t2t2::synapse0x3d9bf90() {
   return (neuron0x3d7b3b0()*0.307794);
}

double NNfunction_tb_t2t2::synapse0x3d9bfd0() {
   return (neuron0x3d87f00()*-0.0727097);
}

double NNfunction_tb_t2t2::synapse0x3d9c010() {
   return (neuron0x3d888d0()*-0.249888);
}

double NNfunction_tb_t2t2::synapse0x3d9c050() {
   return (neuron0x3d892a0()*0.471153);
}

double NNfunction_tb_t2t2::synapse0x3d9c630() {
   return (neuron0x3d89c70()*1.47962);
}

double NNfunction_tb_t2t2::synapse0x3d9c670() {
   return (neuron0x3d8a640()*-0.182655);
}

double NNfunction_tb_t2t2::synapse0x3d9c6b0() {
   return (neuron0x3d8b010()*0.433869);
}

double NNfunction_tb_t2t2::synapse0x3d9c6f0() {
   return (neuron0x3d8b9e0()*0.65397);
}

double NNfunction_tb_t2t2::synapse0x3d9c730() {
   return (neuron0x3d8c3b0()*-0.218454);
}

double NNfunction_tb_t2t2::synapse0x3d9c770() {
   return (neuron0x3d8cf90()*-0.253467);
}

double NNfunction_tb_t2t2::synapse0x3d9c7b0() {
   return (neuron0x3d8d960()*-0.0362828);
}

double NNfunction_tb_t2t2::synapse0x3d9c7f0() {
   return (neuron0x3d7e7e0()*0.299466);
}

double NNfunction_tb_t2t2::synapse0x3d9c830() {
   return (neuron0x3d7f1b0()*0.744833);
}

double NNfunction_tb_t2t2::synapse0x3d9c870() {
   return (neuron0x3d7fb80()*-0.225332);
}

double NNfunction_tb_t2t2::synapse0x3d9c8b0() {
   return (neuron0x3d921c0()*0.453425);
}

double NNfunction_tb_t2t2::synapse0x3d9c8f0() {
   return (neuron0x3d92a70()*-0.191161);
}

double NNfunction_tb_t2t2::synapse0x3d9c930() {
   return (neuron0x3d93440()*2.0343);
}

double NNfunction_tb_t2t2::synapse0x3d9c970() {
   return (neuron0x3d93e10()*0.218168);
}

double NNfunction_tb_t2t2::synapse0x3d9ccf0() {
   return (neuron0x3d6eda0()*-1.13365);
}

double NNfunction_tb_t2t2::synapse0x3d9cd30() {
   return (neuron0x3d6f5e0()*3.91709);
}

double NNfunction_tb_t2t2::synapse0x3d9cd70() {
   return (neuron0x3d700c0()*1.00618);
}

double NNfunction_tb_t2t2::synapse0x3d9cdb0() {
   return (neuron0x3d6fb60()*2.16141);
}

double NNfunction_tb_t2t2::synapse0x3d9cdf0() {
   return (neuron0x3d70ea0()*-0.061344);
}

double NNfunction_tb_t2t2::synapse0x3d9ce30() {
   return (neuron0x3d72970()*2.11551);
}

double NNfunction_tb_t2t2::synapse0x3d9ce70() {
   return (neuron0x3d73740()*1.84725);
}

double NNfunction_tb_t2t2::synapse0x3d9ceb0() {
   return (neuron0x3d74110()*-0.822113);
}

double NNfunction_tb_t2t2::synapse0x3d9cef0() {
   return (neuron0x3d74ae0()*-0.467696);
}

double NNfunction_tb_t2t2::synapse0x3d9cf30() {
   return (neuron0x3d755c0()*0.598459);
}

double NNfunction_tb_t2t2::synapse0x3d9cf70() {
   return (neuron0x3d75f90()*-0.875648);
}

double NNfunction_tb_t2t2::synapse0x3d9cfb0() {
   return (neuron0x3d73070()*-3.47832);
}

double NNfunction_tb_t2t2::synapse0x3d9cff0() {
   return (neuron0x3d77b40()*3.00786);
}

double NNfunction_tb_t2t2::synapse0x3d9d030() {
   return (neuron0x3d78510()*-0.894672);
}

double NNfunction_tb_t2t2::synapse0x3d9d070() {
   return (neuron0x3d78ee0()*-1.68107);
}

double NNfunction_tb_t2t2::synapse0x3d9d0b0() {
   return (neuron0x3d798b0()*3.99345);
}

double NNfunction_tb_t2t2::synapse0x3d9cb40() {
   return (neuron0x3d7b6c0()*-2.1561);
}

double NNfunction_tb_t2t2::synapse0x3d9cb80() {
   return (neuron0x3d7b9a0()*0.675273);
}

double NNfunction_tb_t2t2::synapse0x3d9d200() {
   return (neuron0x3d7c370()*2.55025);
}

double NNfunction_tb_t2t2::synapse0x3d9d240() {
   return (neuron0x3d7cd40()*-2.28109);
}

double NNfunction_tb_t2t2::synapse0x3d9d280() {
   return (neuron0x3d7d710()*-1.52879);
}

double NNfunction_tb_t2t2::synapse0x3d9d2c0() {
   return (neuron0x3d7e0e0()*-1.85609);
}

double NNfunction_tb_t2t2::synapse0x3d9d300() {
   return (neuron0x3d76c30()*-1.52776);
}

double NNfunction_tb_t2t2::synapse0x3d9d340() {
   return (neuron0x3d77600()*1.19295);
}

double NNfunction_tb_t2t2::synapse0x3d9d380() {
   return (neuron0x3d80e70()*-0.593509);
}

double NNfunction_tb_t2t2::synapse0x3d9d3c0() {
   return (neuron0x3d81840()*1.64339);
}

double NNfunction_tb_t2t2::synapse0x3d9d400() {
   return (neuron0x3d82210()*-3.59998);
}

double NNfunction_tb_t2t2::synapse0x3d9d440() {
   return (neuron0x3d82be0()*-1.75247);
}

double NNfunction_tb_t2t2::synapse0x3d9d480() {
   return (neuron0x3d835b0()*1.86359);
}

double NNfunction_tb_t2t2::synapse0x3d9d4c0() {
   return (neuron0x3d83f80()*-3.22179);
}

double NNfunction_tb_t2t2::synapse0x3d9d500() {
   return (neuron0x3d84950()*-0.0388799);
}

double NNfunction_tb_t2t2::synapse0x3d9d540() {
   return (neuron0x3d85320()*-1.72561);
}

double NNfunction_tb_t2t2::synapse0x3d9d0f0() {
   return (neuron0x3d7b3b0()*0.49009);
}

double NNfunction_tb_t2t2::synapse0x3d9d130() {
   return (neuron0x3d87f00()*0.0381074);
}

double NNfunction_tb_t2t2::synapse0x3d9d170() {
   return (neuron0x3d888d0()*3.52463);
}

double NNfunction_tb_t2t2::synapse0x3d9d1b0() {
   return (neuron0x3d892a0()*0.708993);
}

double NNfunction_tb_t2t2::synapse0x3d9d790() {
   return (neuron0x3d89c70()*1.3917);
}

double NNfunction_tb_t2t2::synapse0x3d9d7d0() {
   return (neuron0x3d8a640()*3.27641);
}

double NNfunction_tb_t2t2::synapse0x3d9d810() {
   return (neuron0x3d8b010()*1.26616);
}

double NNfunction_tb_t2t2::synapse0x3d9d850() {
   return (neuron0x3d8b9e0()*2.72603);
}

double NNfunction_tb_t2t2::synapse0x3d9d890() {
   return (neuron0x3d8c3b0()*-0.19475);
}

double NNfunction_tb_t2t2::synapse0x3d9d8d0() {
   return (neuron0x3d8cf90()*0.717505);
}

double NNfunction_tb_t2t2::synapse0x3d9d910() {
   return (neuron0x3d8d960()*0.419828);
}

double NNfunction_tb_t2t2::synapse0x3d9d950() {
   return (neuron0x3d7e7e0()*-0.70182);
}

double NNfunction_tb_t2t2::synapse0x3d9d990() {
   return (neuron0x3d7f1b0()*-2.56371);
}

double NNfunction_tb_t2t2::synapse0x3d9d9d0() {
   return (neuron0x3d7fb80()*-2.19555);
}

double NNfunction_tb_t2t2::synapse0x3d9da10() {
   return (neuron0x3d921c0()*-0.0120848);
}

double NNfunction_tb_t2t2::synapse0x3d9da50() {
   return (neuron0x3d92a70()*3.94041);
}

double NNfunction_tb_t2t2::synapse0x3d9da90() {
   return (neuron0x3d93440()*0.494653);
}

double NNfunction_tb_t2t2::synapse0x3d9dad0() {
   return (neuron0x3d93e10()*1.98036);
}

double NNfunction_tb_t2t2::synapse0x3d9de50() {
   return (neuron0x3d6eda0()*0.411026);
}

double NNfunction_tb_t2t2::synapse0x3d9de90() {
   return (neuron0x3d6f5e0()*-0.901183);
}

double NNfunction_tb_t2t2::synapse0x3d9ded0() {
   return (neuron0x3d700c0()*0.073313);
}

double NNfunction_tb_t2t2::synapse0x3d9df10() {
   return (neuron0x3d6fb60()*0.258877);
}

double NNfunction_tb_t2t2::synapse0x3d9df50() {
   return (neuron0x3d70ea0()*0.121805);
}

double NNfunction_tb_t2t2::synapse0x3d9df90() {
   return (neuron0x3d72970()*-0.357849);
}

double NNfunction_tb_t2t2::synapse0x3d9dfd0() {
   return (neuron0x3d73740()*0.231257);
}

double NNfunction_tb_t2t2::synapse0x3d9e010() {
   return (neuron0x3d74110()*0.740193);
}

double NNfunction_tb_t2t2::synapse0x3d9e050() {
   return (neuron0x3d74ae0()*0.167651);
}

double NNfunction_tb_t2t2::synapse0x3d9e090() {
   return (neuron0x3d755c0()*-0.211619);
}

double NNfunction_tb_t2t2::synapse0x3d9e0d0() {
   return (neuron0x3d75f90()*0.31774);
}

double NNfunction_tb_t2t2::synapse0x3d9e110() {
   return (neuron0x3d73070()*-1.27272);
}

double NNfunction_tb_t2t2::synapse0x3d9e150() {
   return (neuron0x3d77b40()*-0.151085);
}

double NNfunction_tb_t2t2::synapse0x3d9e190() {
   return (neuron0x3d78510()*0.0915406);
}

double NNfunction_tb_t2t2::synapse0x3d9e1d0() {
   return (neuron0x3d78ee0()*-0.0416859);
}

double NNfunction_tb_t2t2::synapse0x3d9e210() {
   return (neuron0x3d798b0()*0.46993);
}

double NNfunction_tb_t2t2::synapse0x3d9dca0() {
   return (neuron0x3d7b6c0()*-0.134948);
}

double NNfunction_tb_t2t2::synapse0x3d9dce0() {
   return (neuron0x3d7b9a0()*-0.175839);
}

double NNfunction_tb_t2t2::synapse0x3d9e360() {
   return (neuron0x3d7c370()*0.175503);
}

double NNfunction_tb_t2t2::synapse0x3d9e3a0() {
   return (neuron0x3d7cd40()*-0.180056);
}

double NNfunction_tb_t2t2::synapse0x3d9e3e0() {
   return (neuron0x3d7d710()*-0.351296);
}

double NNfunction_tb_t2t2::synapse0x3d9e420() {
   return (neuron0x3d7e0e0()*-0.299413);
}

double NNfunction_tb_t2t2::synapse0x3d9e460() {
   return (neuron0x3d76c30()*-0.494688);
}

double NNfunction_tb_t2t2::synapse0x3d9e4a0() {
   return (neuron0x3d77600()*0.163538);
}

double NNfunction_tb_t2t2::synapse0x3d9e4e0() {
   return (neuron0x3d80e70()*-0.0378978);
}

double NNfunction_tb_t2t2::synapse0x3d9e520() {
   return (neuron0x3d81840()*-0.19315);
}

double NNfunction_tb_t2t2::synapse0x3d9e560() {
   return (neuron0x3d82210()*-0.554047);
}

double NNfunction_tb_t2t2::synapse0x3d9e5a0() {
   return (neuron0x3d82be0()*-1.74669);
}

double NNfunction_tb_t2t2::synapse0x3d9e5e0() {
   return (neuron0x3d835b0()*-0.671795);
}

double NNfunction_tb_t2t2::synapse0x3d9e620() {
   return (neuron0x3d83f80()*-0.370007);
}

double NNfunction_tb_t2t2::synapse0x3d9e660() {
   return (neuron0x3d84950()*0.303342);
}

double NNfunction_tb_t2t2::synapse0x3d9e6a0() {
   return (neuron0x3d85320()*-0.156034);
}

double NNfunction_tb_t2t2::synapse0x3d9e250() {
   return (neuron0x3d7b3b0()*-0.228575);
}

double NNfunction_tb_t2t2::synapse0x3d9e290() {
   return (neuron0x3d87f00()*0.0618847);
}

double NNfunction_tb_t2t2::synapse0x3d9e2d0() {
   return (neuron0x3d888d0()*0.443464);
}

double NNfunction_tb_t2t2::synapse0x3d9e310() {
   return (neuron0x3d892a0()*-0.359646);
}

double NNfunction_tb_t2t2::synapse0x3d9e8f0() {
   return (neuron0x3d89c70()*1.28545);
}

double NNfunction_tb_t2t2::synapse0x3d9e930() {
   return (neuron0x3d8a640()*0.223634);
}

double NNfunction_tb_t2t2::synapse0x3d9e970() {
   return (neuron0x3d8b010()*-0.034537);
}

double NNfunction_tb_t2t2::synapse0x3d9e9b0() {
   return (neuron0x3d8b9e0()*-0.330442);
}

double NNfunction_tb_t2t2::synapse0x3d9e9f0() {
   return (neuron0x3d8c3b0()*0.170346);
}

double NNfunction_tb_t2t2::synapse0x3d9ea30() {
   return (neuron0x3d8cf90()*0.281154);
}

double NNfunction_tb_t2t2::synapse0x3d9ea70() {
   return (neuron0x3d8d960()*0.0207328);
}

double NNfunction_tb_t2t2::synapse0x3d9eab0() {
   return (neuron0x3d7e7e0()*-0.196811);
}

double NNfunction_tb_t2t2::synapse0x3d9eaf0() {
   return (neuron0x3d7f1b0()*-0.458526);
}

double NNfunction_tb_t2t2::synapse0x3d9eb30() {
   return (neuron0x3d7fb80()*0.189183);
}

double NNfunction_tb_t2t2::synapse0x3d9eb70() {
   return (neuron0x3d921c0()*-0.375381);
}

double NNfunction_tb_t2t2::synapse0x3d9ebb0() {
   return (neuron0x3d92a70()*0.49065);
}

double NNfunction_tb_t2t2::synapse0x3d9ebf0() {
   return (neuron0x3d93440()*1.24712);
}

double NNfunction_tb_t2t2::synapse0x3d9ec30() {
   return (neuron0x3d93e10()*0.0302147);
}

double NNfunction_tb_t2t2::synapse0x3d9ee90() {
   return (neuron0x3d9b010()*4.78598);
}

double NNfunction_tb_t2t2::synapse0x3d9eed0() {
   return (neuron0x3d9b3b0()*7.31992);
}

double NNfunction_tb_t2t2::synapse0x3d9ef10() {
   return (neuron0x3d9b850()*-5.15918);
}

double NNfunction_tb_t2t2::synapse0x3d9ef50() {
   return (neuron0x3d9c9b0()*-7.09397);
}

double NNfunction_tb_t2t2::synapse0x3d9ef90() {
   return (neuron0x3d9db10()*-4.20829);
}

