#include "NNfunction_ss_dLuR.h"
#include <cmath>

double NNfunction_ss_dLuR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.0272)/15.0318;
   input1 = (in1 - 75.5392)/664.391;
   input2 = (in2 - 357.232)/422.008;
   input3 = (in3 - 398.977)/630.674;
   input4 = (in4 - 827.509)/644.798;
   input5 = (in5 - 747.1)/633.405;
   input6 = (in6 - 752.256)/636.392;
   input7 = (in7 - 735.371)/625.02;
   input8 = (in8 - 732.782)/648.277;
   input9 = (in9 - 724.227)/636.112;
   input10 = (in10 - 709.989)/647.343;
   input11 = (in11 - 755.751)/457.84;
   input12 = (in12 - 840.032)/579.597;
   input13 = (in13 - 662.814)/394.221;
   input14 = (in14 - 760.692)/457.26;
   input15 = (in15 - 833.857)/558.039;
   input16 = (in16 - 565.863)/377.676;
   input17 = (in17 - 840.966)/585.672;
   input18 = (in18 - 838.062)/588.494;
   input19 = (in19 - 821.578)/568.565;
   input20 = (in20 - -301.856)/453.843;
   input21 = (in21 - -394.902)/938.405;
   input22 = (in22 - -13.1728)/919.446;
   input23 = (in23 - 48.4433)/534.557;
   switch(index) {
     case 0:
         return neuron0x2ea6250();
     default:
         return 0.;
   }
}

double NNfunction_ss_dLuR::Value(int index, double* input) {
   input0 = (input[0] - 23.0272)/15.0318;
   input1 = (input[1] - 75.5392)/664.391;
   input2 = (input[2] - 357.232)/422.008;
   input3 = (input[3] - 398.977)/630.674;
   input4 = (input[4] - 827.509)/644.798;
   input5 = (input[5] - 747.1)/633.405;
   input6 = (input[6] - 752.256)/636.392;
   input7 = (input[7] - 735.371)/625.02;
   input8 = (input[8] - 732.782)/648.277;
   input9 = (input[9] - 724.227)/636.112;
   input10 = (input[10] - 709.989)/647.343;
   input11 = (input[11] - 755.751)/457.84;
   input12 = (input[12] - 840.032)/579.597;
   input13 = (input[13] - 662.814)/394.221;
   input14 = (input[14] - 760.692)/457.26;
   input15 = (input[15] - 833.857)/558.039;
   input16 = (input[16] - 565.863)/377.676;
   input17 = (input[17] - 840.966)/585.672;
   input18 = (input[18] - 838.062)/588.494;
   input19 = (input[19] - 821.578)/568.565;
   input20 = (input[20] - -301.856)/453.843;
   input21 = (input[21] - -394.902)/938.405;
   input22 = (input[22] - -13.1728)/919.446;
   input23 = (input[23] - 48.4433)/534.557;
   switch(index) {
     case 0:
         return neuron0x2ea6250();
     default:
         return 0.;
   }
}

double NNfunction_ss_dLuR::neuron0x2e72410() {
   return input0;
}

double NNfunction_ss_dLuR::neuron0x2e726c0() {
   return input1;
}

double NNfunction_ss_dLuR::neuron0x2e72a00() {
   return input2;
}

double NNfunction_ss_dLuR::neuron0x2e72d40() {
   return input3;
}

double NNfunction_ss_dLuR::neuron0x2e73080() {
   return input4;
}

double NNfunction_ss_dLuR::neuron0x2e733c0() {
   return input5;
}

double NNfunction_ss_dLuR::neuron0x2e73700() {
   return input6;
}

double NNfunction_ss_dLuR::neuron0x2e73a40() {
   return input7;
}

double NNfunction_ss_dLuR::neuron0x2e73d80() {
   return input8;
}

double NNfunction_ss_dLuR::neuron0x2e740c0() {
   return input9;
}

double NNfunction_ss_dLuR::neuron0x2e74400() {
   return input10;
}

double NNfunction_ss_dLuR::neuron0x2e74740() {
   return input11;
}

double NNfunction_ss_dLuR::neuron0x2e74a80() {
   return input12;
}

double NNfunction_ss_dLuR::neuron0x2e74dc0() {
   return input13;
}

double NNfunction_ss_dLuR::neuron0x2e75100() {
   return input14;
}

double NNfunction_ss_dLuR::neuron0x2e75440() {
   return input15;
}

double NNfunction_ss_dLuR::neuron0x2e75780() {
   return input16;
}

double NNfunction_ss_dLuR::neuron0x2e75ce0() {
   return input17;
}

double NNfunction_ss_dLuR::neuron0x2e75f00() {
   return input18;
}

double NNfunction_ss_dLuR::neuron0x2e76240() {
   return input19;
}

double NNfunction_ss_dLuR::neuron0x2e76580() {
   return input20;
}

double NNfunction_ss_dLuR::neuron0x2e768c0() {
   return input21;
}

double NNfunction_ss_dLuR::neuron0x2e76c00() {
   return input22;
}

double NNfunction_ss_dLuR::neuron0x2e76f40() {
   return input23;
}

double NNfunction_ss_dLuR::input0x2e773b0() {
   double input = 0.177177;
   input += synapse0x2e72390();
   input += synapse0x2e723d0();
   input += synapse0x2e77660();
   input += synapse0x2e776a0();
   input += synapse0x2e776e0();
   input += synapse0x2e77720();
   input += synapse0x2e77760();
   input += synapse0x2e777a0();
   input += synapse0x2e777e0();
   input += synapse0x2e77820();
   input += synapse0x2e77860();
   input += synapse0x2e778a0();
   input += synapse0x2e778e0();
   input += synapse0x2e77920();
   input += synapse0x2e77960();
   input += synapse0x2e779a0();
   input += synapse0x2e72300();
   input += synapse0x2e72340();
   input += synapse0x2c2d4d0();
   input += synapse0x2c2d510();
   input += synapse0x2e77c00();
   input += synapse0x2e77c40();
   input += synapse0x2e77c80();
   input += synapse0x2e77cc0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e773b0() {
   double input = input0x2e773b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e77d00() {
   double input = 0.0250194;
   input += synapse0x2e78040();
   input += synapse0x2e78080();
   input += synapse0x2e780c0();
   input += synapse0x2e78100();
   input += synapse0x2e78140();
   input += synapse0x2e78180();
   input += synapse0x2e781c0();
   input += synapse0x2e78200();
   input += synapse0x2e78240();
   input += synapse0x2e77af0();
   input += synapse0x2e77b30();
   input += synapse0x2e77b70();
   input += synapse0x2e77bb0();
   input += synapse0x2e78490();
   input += synapse0x2e784d0();
   input += synapse0x2e78510();
   input += synapse0x2e77e90();
   input += synapse0x2e77ed0();
   input += synapse0x2e78660();
   input += synapse0x2e786a0();
   input += synapse0x2e786e0();
   input += synapse0x2e78720();
   input += synapse0x2e78760();
   input += synapse0x2e787a0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e77d00() {
   double input = input0x2e77d00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e787e0() {
   double input = 0.587224;
   input += synapse0x2e78b20();
   input += synapse0x2e78b60();
   input += synapse0x2e78ba0();
   input += synapse0x2e78be0();
   input += synapse0x2e78c20();
   input += synapse0x2e78c60();
   input += synapse0x2e78ca0();
   input += synapse0x2e78ce0();
   input += synapse0x2e78d20();
   input += synapse0x2e78d60();
   input += synapse0x2e78da0();
   input += synapse0x2e78de0();
   input += synapse0x2e78e20();
   input += synapse0x2e78e60();
   input += synapse0x2e78ea0();
   input += synapse0x2e78ee0();
   input += synapse0x2e78970();
   input += synapse0x2e789b0();
   input += synapse0x2e61480();
   input += synapse0x2c3b3d0();
   input += synapse0x2c3b410();
   input += synapse0x2d56920();
   input += synapse0x2d56960();
   input += synapse0x2e72170();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e787e0() {
   double input = input0x2e787e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2c3bb30() {
   double input = -0.533362;
   input += synapse0x2c3bcc0();
   input += synapse0x2e783a0();
   input += synapse0x2e783e0();
   input += synapse0x2e78420();
   input += synapse0x2e79030();
   input += synapse0x2e79070();
   input += synapse0x2e790b0();
   input += synapse0x2e790f0();
   input += synapse0x2e79130();
   input += synapse0x2e79170();
   input += synapse0x2e791b0();
   input += synapse0x2e791f0();
   input += synapse0x2e79230();
   input += synapse0x2e79270();
   input += synapse0x2e792b0();
   input += synapse0x2e792f0();
   input += synapse0x2e721b0();
   input += synapse0x2e721f0();
   input += synapse0x2e72230();
   input += synapse0x2e79440();
   input += synapse0x2e79480();
   input += synapse0x2e794c0();
   input += synapse0x2e79500();
   input += synapse0x2e79540();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2c3bb30() {
   double input = input0x2c3bb30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e79580() {
   double input = 0.714058;
   input += synapse0x2e798c0();
   input += synapse0x2e79900();
   input += synapse0x2e79940();
   input += synapse0x2e79980();
   input += synapse0x2e799c0();
   input += synapse0x2e79a00();
   input += synapse0x2e79a40();
   input += synapse0x2e79a80();
   input += synapse0x2e79ac0();
   input += synapse0x2e79b00();
   input += synapse0x2e79b40();
   input += synapse0x2e79b80();
   input += synapse0x2e79bc0();
   input += synapse0x2e79c00();
   input += synapse0x2e79c40();
   input += synapse0x2e79c80();
   input += synapse0x2e79710();
   input += synapse0x2e79750();
   input += synapse0x2e79dd0();
   input += synapse0x2e79e10();
   input += synapse0x2e79e50();
   input += synapse0x2e79e90();
   input += synapse0x2e79ed0();
   input += synapse0x2e79f10();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e79580() {
   double input = input0x2e79580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e79f50() {
   double input = 1.43692;
   input += synapse0x2e7a290();
   input += synapse0x2e7a2d0();
   input += synapse0x2e7a310();
   input += synapse0x2e7a350();
   input += synapse0x2e7a390();
   input += synapse0x2e7a3d0();
   input += synapse0x2e7a410();
   input += synapse0x2e7a450();
   input += synapse0x2e7a490();
   input += synapse0x2c3b720();
   input += synapse0x2c3b760();
   input += synapse0x2c3b7a0();
   input += synapse0x2c3b7e0();
   input += synapse0x2c3b820();
   input += synapse0x2c3b860();
   input += synapse0x2c3b8a0();
   input += synapse0x2e7a0e0();
   input += synapse0x2e7a120();
   input += synapse0x2c3b9f0();
   input += synapse0x2c3ba30();
   input += synapse0x2c3ba70();
   input += synapse0x2c3bab0();
   input += synapse0x2c3baf0();
   input += synapse0x2e7ace0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e79f50() {
   double input = input0x2e79f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e7ad20() {
   double input = 0.0956177;
   input += synapse0x2e7b060();
   input += synapse0x2e7b0a0();
   input += synapse0x2e7b0e0();
   input += synapse0x2e7b120();
   input += synapse0x2e7b160();
   input += synapse0x2e7b1a0();
   input += synapse0x2e7b1e0();
   input += synapse0x2e7b220();
   input += synapse0x2e7b260();
   input += synapse0x2e7b2a0();
   input += synapse0x2e7b2e0();
   input += synapse0x2e7b320();
   input += synapse0x2e7b360();
   input += synapse0x2e7b3a0();
   input += synapse0x2e7b3e0();
   input += synapse0x2e7b420();
   input += synapse0x2e7aeb0();
   input += synapse0x2e7aef0();
   input += synapse0x2e7b570();
   input += synapse0x2e7b5b0();
   input += synapse0x2e7b5f0();
   input += synapse0x2e7b630();
   input += synapse0x2e7b670();
   input += synapse0x2e7b6b0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e7ad20() {
   double input = input0x2e7ad20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e7b6f0() {
   double input = -0.101641;
   input += synapse0x2e7ba30();
   input += synapse0x2e7ba70();
   input += synapse0x2e7bab0();
   input += synapse0x2e7baf0();
   input += synapse0x2e7bb30();
   input += synapse0x2e7bb70();
   input += synapse0x2e7bbb0();
   input += synapse0x2e7bbf0();
   input += synapse0x2e7bc30();
   input += synapse0x2e7bc70();
   input += synapse0x2e7bcb0();
   input += synapse0x2e7bcf0();
   input += synapse0x2e7bd30();
   input += synapse0x2e7bd70();
   input += synapse0x2e7bdb0();
   input += synapse0x2e7bdf0();
   input += synapse0x2e7b880();
   input += synapse0x2e7b8c0();
   input += synapse0x2e7bf40();
   input += synapse0x2e7bf80();
   input += synapse0x2e7bfc0();
   input += synapse0x2e7c000();
   input += synapse0x2e7c040();
   input += synapse0x2e7c080();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e7b6f0() {
   double input = input0x2e7b6f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e7c0c0() {
   double input = 0.552619;
   input += synapse0x2e75bd0();
   input += synapse0x2e75c10();
   input += synapse0x2e75c50();
   input += synapse0x2e75c90();
   input += synapse0x2e7c610();
   input += synapse0x2e7c650();
   input += synapse0x2e7c690();
   input += synapse0x2e7c6d0();
   input += synapse0x2e7c710();
   input += synapse0x2e7c750();
   input += synapse0x2e7c790();
   input += synapse0x2e7c7d0();
   input += synapse0x2e7c810();
   input += synapse0x2e7c850();
   input += synapse0x2e7c890();
   input += synapse0x2e7c8d0();
   input += synapse0x2e7c250();
   input += synapse0x2e7c290();
   input += synapse0x2e7ca20();
   input += synapse0x2e7ca60();
   input += synapse0x2e7caa0();
   input += synapse0x2e7cae0();
   input += synapse0x2e7cb20();
   input += synapse0x2e7cb60();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e7c0c0() {
   double input = input0x2e7c0c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e7cba0() {
   double input = 1.30443;
   input += synapse0x2e7cee0();
   input += synapse0x2e7cf20();
   input += synapse0x2e7cf60();
   input += synapse0x2e7cfa0();
   input += synapse0x2e7cfe0();
   input += synapse0x2e7d020();
   input += synapse0x2e7d060();
   input += synapse0x2e7d0a0();
   input += synapse0x2e7d0e0();
   input += synapse0x2e7d120();
   input += synapse0x2e7d160();
   input += synapse0x2e7d1a0();
   input += synapse0x2e7d1e0();
   input += synapse0x2e7d220();
   input += synapse0x2e7d260();
   input += synapse0x2e7d2a0();
   input += synapse0x2e7cd30();
   input += synapse0x2e7cd70();
   input += synapse0x2e7d3f0();
   input += synapse0x2e7d430();
   input += synapse0x2e7d470();
   input += synapse0x2e7d4b0();
   input += synapse0x2e7d4f0();
   input += synapse0x2e7d530();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e7cba0() {
   double input = input0x2e7cba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e7d570() {
   double input = 1.50307;
   input += synapse0x2e7d8b0();
   input += synapse0x2e7d8f0();
   input += synapse0x2e7d930();
   input += synapse0x2e7d970();
   input += synapse0x2e7d9b0();
   input += synapse0x2e7d9f0();
   input += synapse0x2e7da30();
   input += synapse0x2e7da70();
   input += synapse0x2e7dab0();
   input += synapse0x2e7daf0();
   input += synapse0x2e7db30();
   input += synapse0x2e7db70();
   input += synapse0x2e7dbb0();
   input += synapse0x2e7dbf0();
   input += synapse0x2e7dc30();
   input += synapse0x2e7dc70();
   input += synapse0x2e7d700();
   input += synapse0x2e7d740();
   input += synapse0x2e7a4d0();
   input += synapse0x2e7a510();
   input += synapse0x2e7a550();
   input += synapse0x2e7a590();
   input += synapse0x2e7a5d0();
   input += synapse0x2e7a610();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e7d570() {
   double input = input0x2e7d570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e7a650() {
   double input = -5.43949;
   input += synapse0x2e7a990();
   input += synapse0x2e7a9d0();
   input += synapse0x2e7aa10();
   input += synapse0x2e7aa50();
   input += synapse0x2e7aa90();
   input += synapse0x2e7aad0();
   input += synapse0x2e7ab10();
   input += synapse0x2e7ab50();
   input += synapse0x2e7ab90();
   input += synapse0x2e7abd0();
   input += synapse0x2e7ac10();
   input += synapse0x2e7ac50();
   input += synapse0x2e7ac90();
   input += synapse0x2e7edd0();
   input += synapse0x2e7ee10();
   input += synapse0x2e7ee50();
   input += synapse0x2e7a7e0();
   input += synapse0x2e7a820();
   input += synapse0x2e7efa0();
   input += synapse0x2e7efe0();
   input += synapse0x2e7f020();
   input += synapse0x2e7f060();
   input += synapse0x2e7f0a0();
   input += synapse0x2e7f0e0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e7a650() {
   double input = input0x2e7a650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e7f120() {
   double input = 0.55869;
   input += synapse0x2e7f460();
   input += synapse0x2e7f4a0();
   input += synapse0x2e7f4e0();
   input += synapse0x2e7f520();
   input += synapse0x2e7f560();
   input += synapse0x2e7f5a0();
   input += synapse0x2e7f5e0();
   input += synapse0x2e7f620();
   input += synapse0x2e7f660();
   input += synapse0x2e7f6a0();
   input += synapse0x2e7f6e0();
   input += synapse0x2e7f720();
   input += synapse0x2e7f760();
   input += synapse0x2e7f7a0();
   input += synapse0x2e7f7e0();
   input += synapse0x2e7f820();
   input += synapse0x2e7f2b0();
   input += synapse0x2e7f2f0();
   input += synapse0x2e7f970();
   input += synapse0x2e7f9b0();
   input += synapse0x2e7f9f0();
   input += synapse0x2e7fa30();
   input += synapse0x2e7fa70();
   input += synapse0x2e7fab0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e7f120() {
   double input = input0x2e7f120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e7faf0() {
   double input = 1.33689;
   input += synapse0x2e7fe30();
   input += synapse0x2e7fe70();
   input += synapse0x2e7feb0();
   input += synapse0x2e7fef0();
   input += synapse0x2e7ff30();
   input += synapse0x2e7ff70();
   input += synapse0x2e7ffb0();
   input += synapse0x2e7fff0();
   input += synapse0x2e80030();
   input += synapse0x2e80070();
   input += synapse0x2e800b0();
   input += synapse0x2e800f0();
   input += synapse0x2e80130();
   input += synapse0x2e80170();
   input += synapse0x2e801b0();
   input += synapse0x2e801f0();
   input += synapse0x2e7fc80();
   input += synapse0x2e7fcc0();
   input += synapse0x2e80340();
   input += synapse0x2e80380();
   input += synapse0x2e803c0();
   input += synapse0x2e80400();
   input += synapse0x2e80440();
   input += synapse0x2e80480();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e7faf0() {
   double input = input0x2e7faf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e804c0() {
   double input = -1.21453;
   input += synapse0x2e80800();
   input += synapse0x2e80840();
   input += synapse0x2e80880();
   input += synapse0x2e808c0();
   input += synapse0x2e80900();
   input += synapse0x2e80940();
   input += synapse0x2e80980();
   input += synapse0x2e809c0();
   input += synapse0x2e80a00();
   input += synapse0x2e80a40();
   input += synapse0x2e80a80();
   input += synapse0x2e80ac0();
   input += synapse0x2e80b00();
   input += synapse0x2e80b40();
   input += synapse0x2e80b80();
   input += synapse0x2e80bc0();
   input += synapse0x2e80650();
   input += synapse0x2e80690();
   input += synapse0x2e80d10();
   input += synapse0x2e80d50();
   input += synapse0x2e80d90();
   input += synapse0x2e80dd0();
   input += synapse0x2e80e10();
   input += synapse0x2e80e50();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e804c0() {
   double input = input0x2e804c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e80e90() {
   double input = -0.974725;
   input += synapse0x2e811d0();
   input += synapse0x2e725a0();
   input += synapse0x2e725e0();
   input += synapse0x2e728e0();
   input += synapse0x2e72920();
   input += synapse0x2e72c20();
   input += synapse0x2e72c60();
   input += synapse0x2e72f60();
   input += synapse0x2e72fa0();
   input += synapse0x2e732a0();
   input += synapse0x2e732e0();
   input += synapse0x2e735e0();
   input += synapse0x2e73620();
   input += synapse0x2e73920();
   input += synapse0x2e73960();
   input += synapse0x2e73c60();
   input += synapse0x2e73ca0();
   input += synapse0x2e73fa0();
   input += synapse0x2e73fe0();
   input += synapse0x2e742e0();
   input += synapse0x2e74320();
   input += synapse0x2e74620();
   input += synapse0x2e74660();
   input += synapse0x2e74960();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e80e90() {
   double input = input0x2e80e90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e82ca0() {
   double input = 0.0247366;
   input += synapse0x2e749a0();
   input += synapse0x2e75660();
   input += synapse0x2e756a0();
   input += synapse0x2e81020();
   input += synapse0x2e81060();
   input += synapse0x2e759a0();
   input += synapse0x2e759e0();
   input += synapse0x2c2d3b0();
   input += synapse0x2c2d3f0();
   input += synapse0x2e76120();
   input += synapse0x2e76160();
   input += synapse0x2e76460();
   input += synapse0x2e764a0();
   input += synapse0x2e767a0();
   input += synapse0x2e767e0();
   input += synapse0x2e76ae0();
   input += synapse0x2e76b20();
   input += synapse0x2e76e20();
   input += synapse0x2e76e60();
   input += synapse0x2e77160();
   input += synapse0x2e771a0();
   input += synapse0x2e74ca0();
   input += synapse0x2e74ce0();
   input += synapse0x2e82f40();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e82ca0() {
   double input = input0x2e82ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e82f80() {
   double input = 0.390423;
   input += synapse0x2e832c0();
   input += synapse0x2e83300();
   input += synapse0x2e83340();
   input += synapse0x2e83380();
   input += synapse0x2e833c0();
   input += synapse0x2e83400();
   input += synapse0x2e83440();
   input += synapse0x2e83480();
   input += synapse0x2e834c0();
   input += synapse0x2e83500();
   input += synapse0x2e83540();
   input += synapse0x2e83580();
   input += synapse0x2e835c0();
   input += synapse0x2e83600();
   input += synapse0x2e83640();
   input += synapse0x2e83680();
   input += synapse0x2e83110();
   input += synapse0x2e83150();
   input += synapse0x2e837d0();
   input += synapse0x2e83810();
   input += synapse0x2e83850();
   input += synapse0x2e83890();
   input += synapse0x2e838d0();
   input += synapse0x2e83910();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e82f80() {
   double input = input0x2e82f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e83950() {
   double input = 1.27589;
   input += synapse0x2e83c90();
   input += synapse0x2e83cd0();
   input += synapse0x2e83d10();
   input += synapse0x2e83d50();
   input += synapse0x2e83d90();
   input += synapse0x2e83dd0();
   input += synapse0x2e83e10();
   input += synapse0x2e83e50();
   input += synapse0x2e83e90();
   input += synapse0x2e83ed0();
   input += synapse0x2e83f10();
   input += synapse0x2e83f50();
   input += synapse0x2e83f90();
   input += synapse0x2e83fd0();
   input += synapse0x2e84010();
   input += synapse0x2e84050();
   input += synapse0x2e83ae0();
   input += synapse0x2e83b20();
   input += synapse0x2e841a0();
   input += synapse0x2e841e0();
   input += synapse0x2e84220();
   input += synapse0x2e84260();
   input += synapse0x2e842a0();
   input += synapse0x2e842e0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e83950() {
   double input = input0x2e83950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e84320() {
   double input = 1.65095;
   input += synapse0x2e84660();
   input += synapse0x2e846a0();
   input += synapse0x2e846e0();
   input += synapse0x2e84720();
   input += synapse0x2e84760();
   input += synapse0x2e847a0();
   input += synapse0x2e847e0();
   input += synapse0x2e84820();
   input += synapse0x2e84860();
   input += synapse0x2e848a0();
   input += synapse0x2e848e0();
   input += synapse0x2e84920();
   input += synapse0x2e84960();
   input += synapse0x2e849a0();
   input += synapse0x2e849e0();
   input += synapse0x2e84a20();
   input += synapse0x2e844b0();
   input += synapse0x2e844f0();
   input += synapse0x2e84b70();
   input += synapse0x2e84bb0();
   input += synapse0x2e84bf0();
   input += synapse0x2e84c30();
   input += synapse0x2e84c70();
   input += synapse0x2e84cb0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e84320() {
   double input = input0x2e84320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e84cf0() {
   double input = 1.3271;
   input += synapse0x2e85030();
   input += synapse0x2e85070();
   input += synapse0x2e850b0();
   input += synapse0x2e850f0();
   input += synapse0x2e85130();
   input += synapse0x2e85170();
   input += synapse0x2e851b0();
   input += synapse0x2e851f0();
   input += synapse0x2e85230();
   input += synapse0x2e85270();
   input += synapse0x2e852b0();
   input += synapse0x2e852f0();
   input += synapse0x2e85330();
   input += synapse0x2e85370();
   input += synapse0x2e853b0();
   input += synapse0x2e853f0();
   input += synapse0x2e84e80();
   input += synapse0x2e84ec0();
   input += synapse0x2e85540();
   input += synapse0x2e85580();
   input += synapse0x2e855c0();
   input += synapse0x2e85600();
   input += synapse0x2e85640();
   input += synapse0x2e85680();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e84cf0() {
   double input = input0x2e84cf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e856c0() {
   double input = -1.20315;
   input += synapse0x2e85a00();
   input += synapse0x2e85a40();
   input += synapse0x2e85a80();
   input += synapse0x2e85ac0();
   input += synapse0x2e85b00();
   input += synapse0x2e85b40();
   input += synapse0x2e85b80();
   input += synapse0x2e85bc0();
   input += synapse0x2e85c00();
   input += synapse0x2e7ddc0();
   input += synapse0x2e7de00();
   input += synapse0x2e7de40();
   input += synapse0x2e7de80();
   input += synapse0x2e7dec0();
   input += synapse0x2e7df00();
   input += synapse0x2e7df40();
   input += synapse0x2e85850();
   input += synapse0x2e85890();
   input += synapse0x2e7e090();
   input += synapse0x2e7e0d0();
   input += synapse0x2e7e110();
   input += synapse0x2e7e150();
   input += synapse0x2e7e190();
   input += synapse0x2e7e1d0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e856c0() {
   double input = input0x2e856c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e7e210() {
   double input = -0.1891;
   input += synapse0x2e7e550();
   input += synapse0x2e7e590();
   input += synapse0x2e7e5d0();
   input += synapse0x2e7e610();
   input += synapse0x2e7e650();
   input += synapse0x2e7e690();
   input += synapse0x2e7e6d0();
   input += synapse0x2e7e710();
   input += synapse0x2e7e750();
   input += synapse0x2e7e790();
   input += synapse0x2e7e7d0();
   input += synapse0x2e7e810();
   input += synapse0x2e7e850();
   input += synapse0x2e7e890();
   input += synapse0x2e7e8d0();
   input += synapse0x2e7e910();
   input += synapse0x2e7e3a0();
   input += synapse0x2e7e3e0();
   input += synapse0x2e7ea60();
   input += synapse0x2e7eaa0();
   input += synapse0x2e7eae0();
   input += synapse0x2e7eb20();
   input += synapse0x2e7eb60();
   input += synapse0x2e7eba0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e7e210() {
   double input = input0x2e7e210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e7ebe0() {
   double input = -1.83441;
   input += synapse0x2e7ed70();
   input += synapse0x2e87e00();
   input += synapse0x2e87e40();
   input += synapse0x2e87e80();
   input += synapse0x2e87ec0();
   input += synapse0x2e87f00();
   input += synapse0x2e87f40();
   input += synapse0x2e87f80();
   input += synapse0x2e87fc0();
   input += synapse0x2e88000();
   input += synapse0x2e88040();
   input += synapse0x2e88080();
   input += synapse0x2e880c0();
   input += synapse0x2e88100();
   input += synapse0x2e88140();
   input += synapse0x2e88180();
   input += synapse0x2e87c50();
   input += synapse0x2e87c90();
   input += synapse0x2e882d0();
   input += synapse0x2e88310();
   input += synapse0x2e88350();
   input += synapse0x2e88390();
   input += synapse0x2e883d0();
   input += synapse0x2e88410();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e7ebe0() {
   double input = input0x2e7ebe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e88450() {
   double input = 0.582571;
   input += synapse0x2e88790();
   input += synapse0x2e887d0();
   input += synapse0x2e88810();
   input += synapse0x2e88850();
   input += synapse0x2e88890();
   input += synapse0x2e888d0();
   input += synapse0x2e88910();
   input += synapse0x2e88950();
   input += synapse0x2e88990();
   input += synapse0x2e889d0();
   input += synapse0x2e88a10();
   input += synapse0x2e88a50();
   input += synapse0x2e88a90();
   input += synapse0x2e88ad0();
   input += synapse0x2e88b10();
   input += synapse0x2e88b50();
   input += synapse0x2e885e0();
   input += synapse0x2e88620();
   input += synapse0x2e88ca0();
   input += synapse0x2e88ce0();
   input += synapse0x2e88d20();
   input += synapse0x2e88d60();
   input += synapse0x2e88da0();
   input += synapse0x2e88de0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e88450() {
   double input = input0x2e88450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e88e20() {
   double input = 0.670691;
   input += synapse0x2e89160();
   input += synapse0x2e891a0();
   input += synapse0x2e891e0();
   input += synapse0x2e89220();
   input += synapse0x2e89260();
   input += synapse0x2e892a0();
   input += synapse0x2e892e0();
   input += synapse0x2e89320();
   input += synapse0x2e89360();
   input += synapse0x2e893a0();
   input += synapse0x2e893e0();
   input += synapse0x2e89420();
   input += synapse0x2e89460();
   input += synapse0x2e894a0();
   input += synapse0x2e894e0();
   input += synapse0x2e89520();
   input += synapse0x2e88fb0();
   input += synapse0x2e88ff0();
   input += synapse0x2e89670();
   input += synapse0x2e896b0();
   input += synapse0x2e896f0();
   input += synapse0x2e89730();
   input += synapse0x2e89770();
   input += synapse0x2e897b0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e88e20() {
   double input = input0x2e88e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e897f0() {
   double input = 0.200751;
   input += synapse0x2e89b30();
   input += synapse0x2e89b70();
   input += synapse0x2e89bb0();
   input += synapse0x2e89bf0();
   input += synapse0x2e89c30();
   input += synapse0x2e89c70();
   input += synapse0x2e89cb0();
   input += synapse0x2e89cf0();
   input += synapse0x2e89d30();
   input += synapse0x2e89d70();
   input += synapse0x2e89db0();
   input += synapse0x2e89df0();
   input += synapse0x2e89e30();
   input += synapse0x2e89e70();
   input += synapse0x2e89eb0();
   input += synapse0x2e89ef0();
   input += synapse0x2e89980();
   input += synapse0x2e899c0();
   input += synapse0x2e8a040();
   input += synapse0x2e8a080();
   input += synapse0x2e8a0c0();
   input += synapse0x2e8a100();
   input += synapse0x2e8a140();
   input += synapse0x2e8a180();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e897f0() {
   double input = input0x2e897f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e8a1c0() {
   double input = 0.789356;
   input += synapse0x2e8a500();
   input += synapse0x2e8a540();
   input += synapse0x2e8a580();
   input += synapse0x2e8a5c0();
   input += synapse0x2e8a600();
   input += synapse0x2e8a640();
   input += synapse0x2e8a680();
   input += synapse0x2e8a6c0();
   input += synapse0x2e8a700();
   input += synapse0x2e8a740();
   input += synapse0x2e8a780();
   input += synapse0x2e8a7c0();
   input += synapse0x2e8a800();
   input += synapse0x2e8a840();
   input += synapse0x2e8a880();
   input += synapse0x2e8a8c0();
   input += synapse0x2e8a350();
   input += synapse0x2e8a390();
   input += synapse0x2e8aa10();
   input += synapse0x2e8aa50();
   input += synapse0x2e8aa90();
   input += synapse0x2e8aad0();
   input += synapse0x2e8ab10();
   input += synapse0x2e8ab50();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e8a1c0() {
   double input = input0x2e8a1c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e8ab90() {
   double input = -1.2084;
   input += synapse0x2e8aed0();
   input += synapse0x2e8af10();
   input += synapse0x2e8af50();
   input += synapse0x2e8af90();
   input += synapse0x2e8afd0();
   input += synapse0x2e8b010();
   input += synapse0x2e8b050();
   input += synapse0x2e8b090();
   input += synapse0x2e8b0d0();
   input += synapse0x2e8b110();
   input += synapse0x2e8b150();
   input += synapse0x2e8b190();
   input += synapse0x2e8b1d0();
   input += synapse0x2e8b210();
   input += synapse0x2e8b250();
   input += synapse0x2e8b290();
   input += synapse0x2e8ad20();
   input += synapse0x2e8ad60();
   input += synapse0x2e8b3e0();
   input += synapse0x2e8b420();
   input += synapse0x2e8b460();
   input += synapse0x2e8b4a0();
   input += synapse0x2e8b4e0();
   input += synapse0x2e8b520();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e8ab90() {
   double input = input0x2e8ab90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e8b560() {
   double input = -0.423026;
   input += synapse0x2e8b8a0();
   input += synapse0x2e8b8e0();
   input += synapse0x2e8b920();
   input += synapse0x2e8b960();
   input += synapse0x2e8b9a0();
   input += synapse0x2e8b9e0();
   input += synapse0x2e8ba20();
   input += synapse0x2e8ba60();
   input += synapse0x2e8baa0();
   input += synapse0x2e8bae0();
   input += synapse0x2e8bb20();
   input += synapse0x2e8bb60();
   input += synapse0x2e8bba0();
   input += synapse0x2e8bbe0();
   input += synapse0x2e8bc20();
   input += synapse0x2e8bc60();
   input += synapse0x2e8b6f0();
   input += synapse0x2e8b730();
   input += synapse0x2e8bdb0();
   input += synapse0x2e8bdf0();
   input += synapse0x2e8be30();
   input += synapse0x2e8be70();
   input += synapse0x2e8beb0();
   input += synapse0x2e8bef0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e8b560() {
   double input = input0x2e8b560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e8bf30() {
   double input = -0.104288;
   input += synapse0x2e8c270();
   input += synapse0x2e8c2b0();
   input += synapse0x2e8c2f0();
   input += synapse0x2e8c330();
   input += synapse0x2e8c370();
   input += synapse0x2e8c3b0();
   input += synapse0x2e8c3f0();
   input += synapse0x2e8c430();
   input += synapse0x2e8c470();
   input += synapse0x2e8c4b0();
   input += synapse0x2e8c4f0();
   input += synapse0x2e8c530();
   input += synapse0x2e8c570();
   input += synapse0x2e8c5b0();
   input += synapse0x2e8c5f0();
   input += synapse0x2e8c630();
   input += synapse0x2e8c0c0();
   input += synapse0x2e8c100();
   input += synapse0x2e8c780();
   input += synapse0x2e8c7c0();
   input += synapse0x2e8c800();
   input += synapse0x2e8c840();
   input += synapse0x2e8c880();
   input += synapse0x2e8c8c0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e8bf30() {
   double input = input0x2e8bf30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e8c900() {
   double input = -1.24935;
   input += synapse0x2e8cc40();
   input += synapse0x2e81210();
   input += synapse0x2e81250();
   input += synapse0x2e81290();
   input += synapse0x2e814e0();
   input += synapse0x2e81520();
   input += synapse0x2e81560();
   input += synapse0x2e817b0();
   input += synapse0x2e817f0();
   input += synapse0x2e81a40();
   input += synapse0x2e81a80();
   input += synapse0x2e81ac0();
   input += synapse0x2e81d10();
   input += synapse0x2e81d50();
   input += synapse0x2e81fa0();
   input += synapse0x2e81fe0();
   input += synapse0x2e8ca90();
   input += synapse0x2e8cad0();
   input += synapse0x2e82130();
   input += synapse0x2e82640();
   input += synapse0x2e82680();
   input += synapse0x2e826c0();
   input += synapse0x2e82910();
   input += synapse0x2e82950();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e8c900() {
   double input = input0x2e8c900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e82990() {
   double input = -1.67264;
   input += synapse0x2e82200();
   input += synapse0x2e82240();
   input += synapse0x2e82280();
   input += synapse0x2e822c0();
   input += synapse0x2e82c40();
   input += synapse0x2e8ef90();
   input += synapse0x2e8efd0();
   input += synapse0x2e8f010();
   input += synapse0x2e8f050();
   input += synapse0x2e8f090();
   input += synapse0x2e8f0d0();
   input += synapse0x2e8f110();
   input += synapse0x2e8f150();
   input += synapse0x2e8f190();
   input += synapse0x2e8f1d0();
   input += synapse0x2e8f210();
   input += synapse0x2e82b20();
   input += synapse0x2e82b60();
   input += synapse0x2e8f360();
   input += synapse0x2e8f3a0();
   input += synapse0x2e8f3e0();
   input += synapse0x2e8f420();
   input += synapse0x2e8f460();
   input += synapse0x2e8f4a0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e82990() {
   double input = input0x2e82990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e8f4e0() {
   double input = 2.46806;
   input += synapse0x2e8f820();
   input += synapse0x2e8f860();
   input += synapse0x2e8f8a0();
   input += synapse0x2e8f8e0();
   input += synapse0x2e8f920();
   input += synapse0x2e8f960();
   input += synapse0x2e8f9a0();
   input += synapse0x2e8f9e0();
   input += synapse0x2e8fa20();
   input += synapse0x2e8fa60();
   input += synapse0x2e8faa0();
   input += synapse0x2e8fae0();
   input += synapse0x2e8fb20();
   input += synapse0x2e8fb60();
   input += synapse0x2e8fba0();
   input += synapse0x2e8fbe0();
   input += synapse0x2e8f670();
   input += synapse0x2e8f6b0();
   input += synapse0x2e8fd30();
   input += synapse0x2e8fd70();
   input += synapse0x2e8fdb0();
   input += synapse0x2e8fdf0();
   input += synapse0x2e8fe30();
   input += synapse0x2e8fe70();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e8f4e0() {
   double input = input0x2e8f4e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e8feb0() {
   double input = 2.33381;
   input += synapse0x2e901f0();
   input += synapse0x2e90230();
   input += synapse0x2e90270();
   input += synapse0x2e902b0();
   input += synapse0x2e902f0();
   input += synapse0x2e90330();
   input += synapse0x2e90370();
   input += synapse0x2e903b0();
   input += synapse0x2e903f0();
   input += synapse0x2e90430();
   input += synapse0x2e90470();
   input += synapse0x2e904b0();
   input += synapse0x2e904f0();
   input += synapse0x2e90530();
   input += synapse0x2e90570();
   input += synapse0x2e905b0();
   input += synapse0x2e90040();
   input += synapse0x2e90080();
   input += synapse0x2e90700();
   input += synapse0x2e90740();
   input += synapse0x2e90780();
   input += synapse0x2e907c0();
   input += synapse0x2e90800();
   input += synapse0x2e90840();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e8feb0() {
   double input = input0x2e8feb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e90880() {
   double input = -0.916936;
   input += synapse0x2e90bc0();
   input += synapse0x2e90c00();
   input += synapse0x2e90c40();
   input += synapse0x2e90c80();
   input += synapse0x2e90cc0();
   input += synapse0x2e90d00();
   input += synapse0x2e90d40();
   input += synapse0x2e90d80();
   input += synapse0x2e90dc0();
   input += synapse0x2e90e00();
   input += synapse0x2e90e40();
   input += synapse0x2e90e80();
   input += synapse0x2e90ec0();
   input += synapse0x2e90f00();
   input += synapse0x2e90f40();
   input += synapse0x2e90f80();
   input += synapse0x2e90a10();
   input += synapse0x2e90a50();
   input += synapse0x2e910d0();
   input += synapse0x2e91110();
   input += synapse0x2e91150();
   input += synapse0x2e91190();
   input += synapse0x2e911d0();
   input += synapse0x2e91210();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e90880() {
   double input = input0x2e90880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e91250() {
   double input = -0.220159;
   input += synapse0x2e91590();
   input += synapse0x2e915d0();
   input += synapse0x2e91610();
   input += synapse0x2e91650();
   input += synapse0x2e91690();
   input += synapse0x2e916d0();
   input += synapse0x2e91710();
   input += synapse0x2e91750();
   input += synapse0x2e91790();
   input += synapse0x2e917d0();
   input += synapse0x2e91810();
   input += synapse0x2e91850();
   input += synapse0x2e91890();
   input += synapse0x2e918d0();
   input += synapse0x2e91910();
   input += synapse0x2e91950();
   input += synapse0x2e913e0();
   input += synapse0x2e91420();
   input += synapse0x2e91aa0();
   input += synapse0x2e91ae0();
   input += synapse0x2e91b20();
   input += synapse0x2e91b60();
   input += synapse0x2e91ba0();
   input += synapse0x2e91be0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e91250() {
   double input = input0x2e91250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e91c20() {
   double input = -0.470971;
   input += synapse0x2e91f60();
   input += synapse0x2e91fa0();
   input += synapse0x2e91fe0();
   input += synapse0x2e92020();
   input += synapse0x2e92060();
   input += synapse0x2e920a0();
   input += synapse0x2e920e0();
   input += synapse0x2e92120();
   input += synapse0x2e92160();
   input += synapse0x2e921a0();
   input += synapse0x2e921e0();
   input += synapse0x2e92220();
   input += synapse0x2e92260();
   input += synapse0x2e922a0();
   input += synapse0x2e922e0();
   input += synapse0x2e92320();
   input += synapse0x2e91db0();
   input += synapse0x2e91df0();
   input += synapse0x2e92470();
   input += synapse0x2e924b0();
   input += synapse0x2e924f0();
   input += synapse0x2e92530();
   input += synapse0x2e92570();
   input += synapse0x2e925b0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e91c20() {
   double input = input0x2e91c20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e925f0() {
   double input = 0.728326;
   input += synapse0x2e92930();
   input += synapse0x2e92970();
   input += synapse0x2e929b0();
   input += synapse0x2e929f0();
   input += synapse0x2e92a30();
   input += synapse0x2e92a70();
   input += synapse0x2e92ab0();
   input += synapse0x2e92af0();
   input += synapse0x2e92b30();
   input += synapse0x2e92b70();
   input += synapse0x2e92bb0();
   input += synapse0x2e92bf0();
   input += synapse0x2e92c30();
   input += synapse0x2e92c70();
   input += synapse0x2e92cb0();
   input += synapse0x2e92cf0();
   input += synapse0x2e92780();
   input += synapse0x2e927c0();
   input += synapse0x2e92e40();
   input += synapse0x2e92e80();
   input += synapse0x2e92ec0();
   input += synapse0x2e92f00();
   input += synapse0x2e92f40();
   input += synapse0x2e92f80();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e925f0() {
   double input = input0x2e925f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e92fc0() {
   double input = -0.433611;
   input += synapse0x2e93300();
   input += synapse0x2e93340();
   input += synapse0x2e93380();
   input += synapse0x2e933c0();
   input += synapse0x2e93400();
   input += synapse0x2e93440();
   input += synapse0x2e93480();
   input += synapse0x2e934c0();
   input += synapse0x2e93500();
   input += synapse0x2e93540();
   input += synapse0x2e93580();
   input += synapse0x2e935c0();
   input += synapse0x2e93600();
   input += synapse0x2e93640();
   input += synapse0x2e93680();
   input += synapse0x2e936c0();
   input += synapse0x2e93150();
   input += synapse0x2e93190();
   input += synapse0x2e93810();
   input += synapse0x2e93850();
   input += synapse0x2e93890();
   input += synapse0x2e938d0();
   input += synapse0x2e93910();
   input += synapse0x2e93950();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e92fc0() {
   double input = input0x2e92fc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e93990() {
   double input = 0.746095;
   input += synapse0x2e7c400();
   input += synapse0x2e7c440();
   input += synapse0x2e7c480();
   input += synapse0x2e7c4c0();
   input += synapse0x2e7c500();
   input += synapse0x2e7c540();
   input += synapse0x2e7c580();
   input += synapse0x2e7c5c0();
   input += synapse0x2e940e0();
   input += synapse0x2e94120();
   input += synapse0x2e94160();
   input += synapse0x2e941a0();
   input += synapse0x2e941e0();
   input += synapse0x2e94220();
   input += synapse0x2e94260();
   input += synapse0x2e942a0();
   input += synapse0x2e93b20();
   input += synapse0x2e93b60();
   input += synapse0x2e943f0();
   input += synapse0x2e94430();
   input += synapse0x2e94470();
   input += synapse0x2e944b0();
   input += synapse0x2e944f0();
   input += synapse0x2e94530();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e93990() {
   double input = input0x2e93990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e94570() {
   double input = 1.59122;
   input += synapse0x2e948b0();
   input += synapse0x2e948f0();
   input += synapse0x2e94930();
   input += synapse0x2e94970();
   input += synapse0x2e949b0();
   input += synapse0x2e949f0();
   input += synapse0x2e94a30();
   input += synapse0x2e94a70();
   input += synapse0x2e94ab0();
   input += synapse0x2e94af0();
   input += synapse0x2e94b30();
   input += synapse0x2e94b70();
   input += synapse0x2e94bb0();
   input += synapse0x2e94bf0();
   input += synapse0x2e94c30();
   input += synapse0x2e94c70();
   input += synapse0x2e94700();
   input += synapse0x2e94740();
   input += synapse0x2e94dc0();
   input += synapse0x2e94e00();
   input += synapse0x2e94e40();
   input += synapse0x2e94e80();
   input += synapse0x2e94ec0();
   input += synapse0x2e94f00();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e94570() {
   double input = input0x2e94570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e94f40() {
   double input = 1.06318;
   input += synapse0x2e95280();
   input += synapse0x2e952c0();
   input += synapse0x2e95300();
   input += synapse0x2e95340();
   input += synapse0x2e95380();
   input += synapse0x2e953c0();
   input += synapse0x2e95400();
   input += synapse0x2e95440();
   input += synapse0x2e95480();
   input += synapse0x2e954c0();
   input += synapse0x2e95500();
   input += synapse0x2e95540();
   input += synapse0x2e95580();
   input += synapse0x2e955c0();
   input += synapse0x2e95600();
   input += synapse0x2e95640();
   input += synapse0x2e950d0();
   input += synapse0x2e95110();
   input += synapse0x2e85c40();
   input += synapse0x2e85c80();
   input += synapse0x2e85cc0();
   input += synapse0x2e85d00();
   input += synapse0x2e85d40();
   input += synapse0x2e85d80();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e94f40() {
   double input = input0x2e94f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e85dc0() {
   double input = 2.25529;
   input += synapse0x2e86100();
   input += synapse0x2e86140();
   input += synapse0x2e86180();
   input += synapse0x2e861c0();
   input += synapse0x2e86200();
   input += synapse0x2e86240();
   input += synapse0x2e86280();
   input += synapse0x2e862c0();
   input += synapse0x2e86300();
   input += synapse0x2e86340();
   input += synapse0x2e86380();
   input += synapse0x2e863c0();
   input += synapse0x2e86400();
   input += synapse0x2e86440();
   input += synapse0x2e86480();
   input += synapse0x2e864c0();
   input += synapse0x2e85f50();
   input += synapse0x2e85f90();
   input += synapse0x2e86610();
   input += synapse0x2e86650();
   input += synapse0x2e86690();
   input += synapse0x2e866d0();
   input += synapse0x2e86710();
   input += synapse0x2e86750();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e85dc0() {
   double input = input0x2e85dc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e86790() {
   double input = -1.06096;
   input += synapse0x2e86ad0();
   input += synapse0x2e86b10();
   input += synapse0x2e86b50();
   input += synapse0x2e86b90();
   input += synapse0x2e86bd0();
   input += synapse0x2e86c10();
   input += synapse0x2e86c50();
   input += synapse0x2e86c90();
   input += synapse0x2e86cd0();
   input += synapse0x2e86d10();
   input += synapse0x2e86d50();
   input += synapse0x2e86d90();
   input += synapse0x2e86dd0();
   input += synapse0x2e86e10();
   input += synapse0x2e86e50();
   input += synapse0x2e86e90();
   input += synapse0x2e86920();
   input += synapse0x2e86960();
   input += synapse0x2e86fe0();
   input += synapse0x2e87020();
   input += synapse0x2e87060();
   input += synapse0x2e870a0();
   input += synapse0x2e870e0();
   input += synapse0x2e87120();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e86790() {
   double input = input0x2e86790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e87160() {
   double input = 7.69681;
   input += synapse0x2e874a0();
   input += synapse0x2e874e0();
   input += synapse0x2e87520();
   input += synapse0x2e87560();
   input += synapse0x2e875a0();
   input += synapse0x2e875e0();
   input += synapse0x2e87620();
   input += synapse0x2e87660();
   input += synapse0x2e876a0();
   input += synapse0x2e876e0();
   input += synapse0x2e87720();
   input += synapse0x2e87760();
   input += synapse0x2e877a0();
   input += synapse0x2e877e0();
   input += synapse0x2e87820();
   input += synapse0x2e87860();
   input += synapse0x2e872f0();
   input += synapse0x2e87330();
   input += synapse0x2e879b0();
   input += synapse0x2e879f0();
   input += synapse0x2e87a30();
   input += synapse0x2e87a70();
   input += synapse0x2e87ab0();
   input += synapse0x2e87af0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e87160() {
   double input = input0x2e87160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e997a0() {
   double input = 1.07254;
   input += synapse0x2e999c0();
   input += synapse0x2e99a00();
   input += synapse0x2e99a40();
   input += synapse0x2e99a80();
   input += synapse0x2e99ac0();
   input += synapse0x2e99b00();
   input += synapse0x2e99b40();
   input += synapse0x2e99b80();
   input += synapse0x2e99bc0();
   input += synapse0x2e99c00();
   input += synapse0x2e99c40();
   input += synapse0x2e99c80();
   input += synapse0x2e99cc0();
   input += synapse0x2e99d00();
   input += synapse0x2e99d40();
   input += synapse0x2e99d80();
   input += synapse0x2e87b30();
   input += synapse0x2e87b70();
   input += synapse0x2e99ed0();
   input += synapse0x2e99f10();
   input += synapse0x2e99f50();
   input += synapse0x2e99f90();
   input += synapse0x2e99fd0();
   input += synapse0x2e9a010();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e997a0() {
   double input = input0x2e997a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e9a050() {
   double input = -1.71946;
   input += synapse0x2e9a390();
   input += synapse0x2e9a3d0();
   input += synapse0x2e9a410();
   input += synapse0x2e9a450();
   input += synapse0x2e9a490();
   input += synapse0x2e9a4d0();
   input += synapse0x2e9a510();
   input += synapse0x2e9a550();
   input += synapse0x2e9a590();
   input += synapse0x2e9a5d0();
   input += synapse0x2e9a610();
   input += synapse0x2e9a650();
   input += synapse0x2e9a690();
   input += synapse0x2e9a6d0();
   input += synapse0x2e9a710();
   input += synapse0x2e9a750();
   input += synapse0x2e9a1e0();
   input += synapse0x2e9a220();
   input += synapse0x2e9a8a0();
   input += synapse0x2e9a8e0();
   input += synapse0x2e9a920();
   input += synapse0x2e9a960();
   input += synapse0x2e9a9a0();
   input += synapse0x2e9a9e0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e9a050() {
   double input = input0x2e9a050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e9aa20() {
   double input = 2.93573;
   input += synapse0x2e9ad60();
   input += synapse0x2e9ada0();
   input += synapse0x2e9ade0();
   input += synapse0x2e9ae20();
   input += synapse0x2e9ae60();
   input += synapse0x2e9aea0();
   input += synapse0x2e9aee0();
   input += synapse0x2e9af20();
   input += synapse0x2e9af60();
   input += synapse0x2e9afa0();
   input += synapse0x2e9afe0();
   input += synapse0x2e9b020();
   input += synapse0x2e9b060();
   input += synapse0x2e9b0a0();
   input += synapse0x2e9b0e0();
   input += synapse0x2e9b120();
   input += synapse0x2e9abb0();
   input += synapse0x2e9abf0();
   input += synapse0x2e9b270();
   input += synapse0x2e9b2b0();
   input += synapse0x2e9b2f0();
   input += synapse0x2e9b330();
   input += synapse0x2e9b370();
   input += synapse0x2e9b3b0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e9aa20() {
   double input = input0x2e9aa20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2e9b3f0() {
   double input = 1.05878;
   input += synapse0x2e9b730();
   input += synapse0x2e9b770();
   input += synapse0x2e9b7b0();
   input += synapse0x2e9b7f0();
   input += synapse0x2e9b830();
   input += synapse0x2e9b870();
   input += synapse0x2e9b8b0();
   input += synapse0x2e9b8f0();
   input += synapse0x2e9b930();
   input += synapse0x2e9b970();
   input += synapse0x2e9b9b0();
   input += synapse0x2e9b9f0();
   input += synapse0x2e9ba30();
   input += synapse0x2e9ba70();
   input += synapse0x2e9bab0();
   input += synapse0x2e9baf0();
   input += synapse0x2e9b580();
   input += synapse0x2e9b5c0();
   input += synapse0x2e9bc40();
   input += synapse0x2e9bc80();
   input += synapse0x2e9bcc0();
   input += synapse0x2e9bd00();
   input += synapse0x2e9bd40();
   input += synapse0x2e9bd80();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2e9b3f0() {
   double input = input0x2e9b3f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2ea25f0() {
   double input = -0.868209;
   input += synapse0x2e78310();
   input += synapse0x2e78350();
   input += synapse0x2e79830();
   input += synapse0x2e79870();
   input += synapse0x2e7a200();
   input += synapse0x2e7a240();
   input += synapse0x2e7afd0();
   input += synapse0x2e7b010();
   input += synapse0x2e7b9a0();
   input += synapse0x2e7b9e0();
   input += synapse0x2e7c370();
   input += synapse0x2e7c3b0();
   input += synapse0x2e7ce50();
   input += synapse0x2e7ce90();
   input += synapse0x2e7d820();
   input += synapse0x2e7d860();
   input += synapse0x2e7a900();
   input += synapse0x2e7a940();
   input += synapse0x2e7f3d0();
   input += synapse0x2e7f410();
   input += synapse0x2e7fda0();
   input += synapse0x2e7fde0();
   input += synapse0x2e80770();
   input += synapse0x2e807b0();
   input += synapse0x2e81140();
   input += synapse0x2e81180();
   input += synapse0x2e75320();
   input += synapse0x2e75360();
   input += synapse0x2e83230();
   input += synapse0x2e83270();
   input += synapse0x2e83c00();
   input += synapse0x2e83c40();
   input += synapse0x2e845d0();
   input += synapse0x2e84610();
   input += synapse0x2e84fa0();
   input += synapse0x2e84fe0();
   input += synapse0x2e85970();
   input += synapse0x2e859b0();
   input += synapse0x2e7e4c0();
   input += synapse0x2e7e500();
   input += synapse0x2e87d70();
   input += synapse0x2e87db0();
   input += synapse0x2e88700();
   input += synapse0x2e88740();
   input += synapse0x2e890d0();
   input += synapse0x2e89110();
   input += synapse0x2e89aa0();
   input += synapse0x2e89ae0();
   input += synapse0x2e8a470();
   input += synapse0x2e8a4b0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2ea25f0() {
   double input = input0x2ea25f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2ea2990() {
   double input = -0.084109;
   input += synapse0x2e8cbb0();
   input += synapse0x2e8cbf0();
   input += synapse0x2e82170();
   input += synapse0x2e821b0();
   input += synapse0x2e8f790();
   input += synapse0x2e8f7d0();
   input += synapse0x2e90160();
   input += synapse0x2e901a0();
   input += synapse0x2e90b30();
   input += synapse0x2e90b70();
   input += synapse0x2e91500();
   input += synapse0x2e91540();
   input += synapse0x2e91ed0();
   input += synapse0x2e91f10();
   input += synapse0x2e928a0();
   input += synapse0x2e928e0();
   input += synapse0x2e93270();
   input += synapse0x2e932b0();
   input += synapse0x2e93c40();
   input += synapse0x2e93c80();
   input += synapse0x2e94820();
   input += synapse0x2e94860();
   input += synapse0x2e951f0();
   input += synapse0x2e95230();
   input += synapse0x2e86070();
   input += synapse0x2e860b0();
   input += synapse0x2e86a40();
   input += synapse0x2e86a80();
   input += synapse0x2e87410();
   input += synapse0x2e87450();
   input += synapse0x2e99930();
   input += synapse0x2e99970();
   input += synapse0x2e9a300();
   input += synapse0x2e9a340();
   input += synapse0x2e9acd0();
   input += synapse0x2e9ad10();
   input += synapse0x2e9b6a0();
   input += synapse0x2e9b6e0();
   input += synapse0x2e775d0();
   input += synapse0x2e77610();
   input += synapse0x2e8ae40();
   input += synapse0x2e8ae80();
   input += synapse0x2e9bdc0();
   input += synapse0x2e9be00();
   input += synapse0x2e9be40();
   input += synapse0x2e9be80();
   input += synapse0x2ea2d30();
   input += synapse0x2ea2d70();
   input += synapse0x2ea2db0();
   input += synapse0x2ea2df0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2ea2990() {
   double input = input0x2ea2990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2ea2e30() {
   double input = -0.187085;
   input += synapse0x2ea3170();
   input += synapse0x2ea31b0();
   input += synapse0x2ea31f0();
   input += synapse0x2ea3230();
   input += synapse0x2ea3270();
   input += synapse0x2ea32b0();
   input += synapse0x2ea32f0();
   input += synapse0x2ea3330();
   input += synapse0x2ea3370();
   input += synapse0x2ea33b0();
   input += synapse0x2ea33f0();
   input += synapse0x2ea3430();
   input += synapse0x2ea3470();
   input += synapse0x2ea34b0();
   input += synapse0x2ea34f0();
   input += synapse0x2ea3530();
   input += synapse0x2ea2fc0();
   input += synapse0x2ea3000();
   input += synapse0x2ea3680();
   input += synapse0x2ea36c0();
   input += synapse0x2ea3700();
   input += synapse0x2ea3740();
   input += synapse0x2ea3780();
   input += synapse0x2ea37c0();
   input += synapse0x2ea3800();
   input += synapse0x2ea3840();
   input += synapse0x2ea3880();
   input += synapse0x2ea38c0();
   input += synapse0x2ea3900();
   input += synapse0x2ea3940();
   input += synapse0x2ea3980();
   input += synapse0x2ea39c0();
   input += synapse0x2ea3570();
   input += synapse0x2ea35b0();
   input += synapse0x2ea35f0();
   input += synapse0x2ea3630();
   input += synapse0x2ea3c10();
   input += synapse0x2ea3c50();
   input += synapse0x2ea3c90();
   input += synapse0x2ea3cd0();
   input += synapse0x2ea3d10();
   input += synapse0x2ea3d50();
   input += synapse0x2ea3d90();
   input += synapse0x2ea3dd0();
   input += synapse0x2ea3e10();
   input += synapse0x2ea3e50();
   input += synapse0x2ea3e90();
   input += synapse0x2ea3ed0();
   input += synapse0x2ea3f10();
   input += synapse0x2ea3f50();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2ea2e30() {
   double input = input0x2ea2e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2ea3f90() {
   double input = -0.312467;
   input += synapse0x2ea42d0();
   input += synapse0x2ea4310();
   input += synapse0x2ea4350();
   input += synapse0x2ea4390();
   input += synapse0x2ea43d0();
   input += synapse0x2ea4410();
   input += synapse0x2ea4450();
   input += synapse0x2ea4490();
   input += synapse0x2ea44d0();
   input += synapse0x2ea4510();
   input += synapse0x2ea4550();
   input += synapse0x2ea4590();
   input += synapse0x2ea45d0();
   input += synapse0x2ea4610();
   input += synapse0x2ea4650();
   input += synapse0x2ea4690();
   input += synapse0x2ea4120();
   input += synapse0x2ea4160();
   input += synapse0x2ea47e0();
   input += synapse0x2ea4820();
   input += synapse0x2ea4860();
   input += synapse0x2ea48a0();
   input += synapse0x2ea48e0();
   input += synapse0x2ea4920();
   input += synapse0x2ea4960();
   input += synapse0x2ea49a0();
   input += synapse0x2ea49e0();
   input += synapse0x2ea4a20();
   input += synapse0x2ea4a60();
   input += synapse0x2ea4aa0();
   input += synapse0x2ea4ae0();
   input += synapse0x2ea4b20();
   input += synapse0x2ea46d0();
   input += synapse0x2ea4710();
   input += synapse0x2ea4750();
   input += synapse0x2ea4790();
   input += synapse0x2ea4d70();
   input += synapse0x2ea4db0();
   input += synapse0x2ea4df0();
   input += synapse0x2ea4e30();
   input += synapse0x2ea4e70();
   input += synapse0x2ea4eb0();
   input += synapse0x2ea4ef0();
   input += synapse0x2ea4f30();
   input += synapse0x2ea4f70();
   input += synapse0x2ea4fb0();
   input += synapse0x2ea4ff0();
   input += synapse0x2ea5030();
   input += synapse0x2ea5070();
   input += synapse0x2ea50b0();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2ea3f90() {
   double input = input0x2ea3f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2ea50f0() {
   double input = -0.683304;
   input += synapse0x2ea5430();
   input += synapse0x2ea5470();
   input += synapse0x2ea54b0();
   input += synapse0x2ea54f0();
   input += synapse0x2ea5530();
   input += synapse0x2ea5570();
   input += synapse0x2ea55b0();
   input += synapse0x2ea55f0();
   input += synapse0x2ea5630();
   input += synapse0x2ea5670();
   input += synapse0x2ea56b0();
   input += synapse0x2ea56f0();
   input += synapse0x2ea5730();
   input += synapse0x2ea5770();
   input += synapse0x2ea57b0();
   input += synapse0x2ea57f0();
   input += synapse0x2ea5280();
   input += synapse0x2ea52c0();
   input += synapse0x2ea5940();
   input += synapse0x2ea5980();
   input += synapse0x2ea59c0();
   input += synapse0x2ea5a00();
   input += synapse0x2ea5a40();
   input += synapse0x2ea5a80();
   input += synapse0x2ea5ac0();
   input += synapse0x2ea5b00();
   input += synapse0x2ea5b40();
   input += synapse0x2ea5b80();
   input += synapse0x2ea5bc0();
   input += synapse0x2ea5c00();
   input += synapse0x2ea5c40();
   input += synapse0x2ea5c80();
   input += synapse0x2ea5830();
   input += synapse0x2ea5870();
   input += synapse0x2ea58b0();
   input += synapse0x2ea58f0();
   input += synapse0x2ea5ed0();
   input += synapse0x2ea5f10();
   input += synapse0x2ea5f50();
   input += synapse0x2ea5f90();
   input += synapse0x2ea5fd0();
   input += synapse0x2ea6010();
   input += synapse0x2ea6050();
   input += synapse0x2ea6090();
   input += synapse0x2ea60d0();
   input += synapse0x2ea6110();
   input += synapse0x2ea6150();
   input += synapse0x2ea6190();
   input += synapse0x2ea61d0();
   input += synapse0x2ea6210();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2ea50f0() {
   double input = input0x2ea50f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dLuR::input0x2ea6250() {
   double input = 6.85881;
   input += synapse0x2ea6470();
   input += synapse0x2ea64b0();
   input += synapse0x2ea64f0();
   input += synapse0x2ea6530();
   input += synapse0x2ea6570();
   return input;
}

double NNfunction_ss_dLuR::neuron0x2ea6250() {
   double input = input0x2ea6250();
   return (input * 1)+0;
}

double NNfunction_ss_dLuR::synapse0x2e72390() {
   return (neuron0x2e72410()*-0.291415);
}

double NNfunction_ss_dLuR::synapse0x2e723d0() {
   return (neuron0x2e726c0()*0.79934);
}

double NNfunction_ss_dLuR::synapse0x2e77660() {
   return (neuron0x2e72a00()*0.254822);
}

double NNfunction_ss_dLuR::synapse0x2e776a0() {
   return (neuron0x2e72d40()*0.968239);
}

double NNfunction_ss_dLuR::synapse0x2e776e0() {
   return (neuron0x2e73080()*-0.757235);
}

double NNfunction_ss_dLuR::synapse0x2e77720() {
   return (neuron0x2e733c0()*0.640496);
}

double NNfunction_ss_dLuR::synapse0x2e77760() {
   return (neuron0x2e73700()*0.421653);
}

double NNfunction_ss_dLuR::synapse0x2e777a0() {
   return (neuron0x2e73a40()*-0.701229);
}

double NNfunction_ss_dLuR::synapse0x2e777e0() {
   return (neuron0x2e73d80()*0.338733);
}

double NNfunction_ss_dLuR::synapse0x2e77820() {
   return (neuron0x2e740c0()*0.452024);
}

double NNfunction_ss_dLuR::synapse0x2e77860() {
   return (neuron0x2e74400()*-0.444737);
}

double NNfunction_ss_dLuR::synapse0x2e778a0() {
   return (neuron0x2e74740()*-0.526674);
}

double NNfunction_ss_dLuR::synapse0x2e778e0() {
   return (neuron0x2e74a80()*0.320996);
}

double NNfunction_ss_dLuR::synapse0x2e77920() {
   return (neuron0x2e74dc0()*0.139525);
}

double NNfunction_ss_dLuR::synapse0x2e77960() {
   return (neuron0x2e75100()*-0.298803);
}

double NNfunction_ss_dLuR::synapse0x2e779a0() {
   return (neuron0x2e75440()*0.108385);
}

double NNfunction_ss_dLuR::synapse0x2e72300() {
   return (neuron0x2e75780()*0.287795);
}

double NNfunction_ss_dLuR::synapse0x2e72340() {
   return (neuron0x2e75ce0()*0.0902898);
}

double NNfunction_ss_dLuR::synapse0x2c2d4d0() {
   return (neuron0x2e75f00()*0.482781);
}

double NNfunction_ss_dLuR::synapse0x2c2d510() {
   return (neuron0x2e76240()*0.642137);
}

double NNfunction_ss_dLuR::synapse0x2e77c00() {
   return (neuron0x2e76580()*-0.0392585);
}

double NNfunction_ss_dLuR::synapse0x2e77c40() {
   return (neuron0x2e768c0()*-0.163818);
}

double NNfunction_ss_dLuR::synapse0x2e77c80() {
   return (neuron0x2e76c00()*-0.0802619);
}

double NNfunction_ss_dLuR::synapse0x2e77cc0() {
   return (neuron0x2e76f40()*0.193427);
}

double NNfunction_ss_dLuR::synapse0x2e78040() {
   return (neuron0x2e72410()*-0.0314307);
}

double NNfunction_ss_dLuR::synapse0x2e78080() {
   return (neuron0x2e726c0()*0.0291907);
}

double NNfunction_ss_dLuR::synapse0x2e780c0() {
   return (neuron0x2e72a00()*0.153353);
}

double NNfunction_ss_dLuR::synapse0x2e78100() {
   return (neuron0x2e72d40()*-0.464454);
}

double NNfunction_ss_dLuR::synapse0x2e78140() {
   return (neuron0x2e73080()*0.0233545);
}

double NNfunction_ss_dLuR::synapse0x2e78180() {
   return (neuron0x2e733c0()*0.0712699);
}

double NNfunction_ss_dLuR::synapse0x2e781c0() {
   return (neuron0x2e73700()*-0.0541235);
}

double NNfunction_ss_dLuR::synapse0x2e78200() {
   return (neuron0x2e73a40()*0.00527007);
}

double NNfunction_ss_dLuR::synapse0x2e78240() {
   return (neuron0x2e73d80()*0.00921328);
}

double NNfunction_ss_dLuR::synapse0x2e77af0() {
   return (neuron0x2e740c0()*0.0820928);
}

double NNfunction_ss_dLuR::synapse0x2e77b30() {
   return (neuron0x2e74400()*0.0184528);
}

double NNfunction_ss_dLuR::synapse0x2e77b70() {
   return (neuron0x2e74740()*-0.993926);
}

double NNfunction_ss_dLuR::synapse0x2e77bb0() {
   return (neuron0x2e74a80()*-0.0350538);
}

double NNfunction_ss_dLuR::synapse0x2e78490() {
   return (neuron0x2e74dc0()*-0.0308294);
}

double NNfunction_ss_dLuR::synapse0x2e784d0() {
   return (neuron0x2e75100()*-0.588361);
}

double NNfunction_ss_dLuR::synapse0x2e78510() {
   return (neuron0x2e75440()*-0.0248718);
}

double NNfunction_ss_dLuR::synapse0x2e77e90() {
   return (neuron0x2e75780()*0.0464827);
}

double NNfunction_ss_dLuR::synapse0x2e77ed0() {
   return (neuron0x2e75ce0()*0.0474149);
}

double NNfunction_ss_dLuR::synapse0x2e78660() {
   return (neuron0x2e75f00()*-0.0417145);
}

double NNfunction_ss_dLuR::synapse0x2e786a0() {
   return (neuron0x2e76240()*-0.015787);
}

double NNfunction_ss_dLuR::synapse0x2e786e0() {
   return (neuron0x2e76580()*0.0329815);
}

double NNfunction_ss_dLuR::synapse0x2e78720() {
   return (neuron0x2e768c0()*0.0485265);
}

double NNfunction_ss_dLuR::synapse0x2e78760() {
   return (neuron0x2e76c00()*-0.023603);
}

double NNfunction_ss_dLuR::synapse0x2e787a0() {
   return (neuron0x2e76f40()*-0.0169358);
}

double NNfunction_ss_dLuR::synapse0x2e78b20() {
   return (neuron0x2e72410()*0.0108054);
}

double NNfunction_ss_dLuR::synapse0x2e78b60() {
   return (neuron0x2e726c0()*-0.0431857);
}

double NNfunction_ss_dLuR::synapse0x2e78ba0() {
   return (neuron0x2e72a00()*-0.0304563);
}

double NNfunction_ss_dLuR::synapse0x2e78be0() {
   return (neuron0x2e72d40()*-0.412815);
}

double NNfunction_ss_dLuR::synapse0x2e78c20() {
   return (neuron0x2e73080()*-0.0412105);
}

double NNfunction_ss_dLuR::synapse0x2e78c60() {
   return (neuron0x2e733c0()*-0.0932096);
}

double NNfunction_ss_dLuR::synapse0x2e78ca0() {
   return (neuron0x2e73700()*0.0182328);
}

double NNfunction_ss_dLuR::synapse0x2e78ce0() {
   return (neuron0x2e73a40()*-0.0192545);
}

double NNfunction_ss_dLuR::synapse0x2e78d20() {
   return (neuron0x2e73d80()*-0.052627);
}

double NNfunction_ss_dLuR::synapse0x2e78d60() {
   return (neuron0x2e740c0()*-0.0337424);
}

double NNfunction_ss_dLuR::synapse0x2e78da0() {
   return (neuron0x2e74400()*0.0438255);
}

double NNfunction_ss_dLuR::synapse0x2e78de0() {
   return (neuron0x2e74740()*-0.364108);
}

double NNfunction_ss_dLuR::synapse0x2e78e20() {
   return (neuron0x2e74a80()*-0.0045136);
}

double NNfunction_ss_dLuR::synapse0x2e78e60() {
   return (neuron0x2e74dc0()*0.0451635);
}

double NNfunction_ss_dLuR::synapse0x2e78ea0() {
   return (neuron0x2e75100()*-0.806601);
}

double NNfunction_ss_dLuR::synapse0x2e78ee0() {
   return (neuron0x2e75440()*0.0427356);
}

double NNfunction_ss_dLuR::synapse0x2e78970() {
   return (neuron0x2e75780()*-0.00683057);
}

double NNfunction_ss_dLuR::synapse0x2e789b0() {
   return (neuron0x2e75ce0()*0.0184854);
}

double NNfunction_ss_dLuR::synapse0x2e61480() {
   return (neuron0x2e75f00()*0.0571718);
}

double NNfunction_ss_dLuR::synapse0x2c3b3d0() {
   return (neuron0x2e76240()*0.0232911);
}

double NNfunction_ss_dLuR::synapse0x2c3b410() {
   return (neuron0x2e76580()*-0.0673836);
}

double NNfunction_ss_dLuR::synapse0x2d56920() {
   return (neuron0x2e768c0()*-0.0112069);
}

double NNfunction_ss_dLuR::synapse0x2d56960() {
   return (neuron0x2e76c00()*0.0432994);
}

double NNfunction_ss_dLuR::synapse0x2e72170() {
   return (neuron0x2e76f40()*0.0369115);
}

double NNfunction_ss_dLuR::synapse0x2c3bcc0() {
   return (neuron0x2e72410()*0.0140188);
}

double NNfunction_ss_dLuR::synapse0x2e783a0() {
   return (neuron0x2e726c0()*-0.329066);
}

double NNfunction_ss_dLuR::synapse0x2e783e0() {
   return (neuron0x2e72a00()*-0.743864);
}

double NNfunction_ss_dLuR::synapse0x2e78420() {
   return (neuron0x2e72d40()*-0.503863);
}

double NNfunction_ss_dLuR::synapse0x2e79030() {
   return (neuron0x2e73080()*-0.390185);
}

double NNfunction_ss_dLuR::synapse0x2e79070() {
   return (neuron0x2e733c0()*-0.481596);
}

double NNfunction_ss_dLuR::synapse0x2e790b0() {
   return (neuron0x2e73700()*-0.553489);
}

double NNfunction_ss_dLuR::synapse0x2e790f0() {
   return (neuron0x2e73a40()*-0.00484042);
}

double NNfunction_ss_dLuR::synapse0x2e79130() {
   return (neuron0x2e73d80()*-0.478706);
}

double NNfunction_ss_dLuR::synapse0x2e79170() {
   return (neuron0x2e740c0()*0.0111042);
}

double NNfunction_ss_dLuR::synapse0x2e791b0() {
   return (neuron0x2e74400()*-0.0547539);
}

double NNfunction_ss_dLuR::synapse0x2e791f0() {
   return (neuron0x2e74740()*0.446793);
}

double NNfunction_ss_dLuR::synapse0x2e79230() {
   return (neuron0x2e74a80()*-0.131734);
}

double NNfunction_ss_dLuR::synapse0x2e79270() {
   return (neuron0x2e74dc0()*0.375932);
}

double NNfunction_ss_dLuR::synapse0x2e792b0() {
   return (neuron0x2e75100()*1.15647);
}

double NNfunction_ss_dLuR::synapse0x2e792f0() {
   return (neuron0x2e75440()*0.261278);
}

double NNfunction_ss_dLuR::synapse0x2e721b0() {
   return (neuron0x2e75780()*-0.629169);
}

double NNfunction_ss_dLuR::synapse0x2e721f0() {
   return (neuron0x2e75ce0()*0.10046);
}

double NNfunction_ss_dLuR::synapse0x2e72230() {
   return (neuron0x2e75f00()*0.259557);
}

double NNfunction_ss_dLuR::synapse0x2e79440() {
   return (neuron0x2e76240()*-0.0649598);
}

double NNfunction_ss_dLuR::synapse0x2e79480() {
   return (neuron0x2e76580()*-0.0452176);
}

double NNfunction_ss_dLuR::synapse0x2e794c0() {
   return (neuron0x2e768c0()*0.604389);
}

double NNfunction_ss_dLuR::synapse0x2e79500() {
   return (neuron0x2e76c00()*0.163965);
}

double NNfunction_ss_dLuR::synapse0x2e79540() {
   return (neuron0x2e76f40()*-0.0972889);
}

double NNfunction_ss_dLuR::synapse0x2e798c0() {
   return (neuron0x2e72410()*0.018475);
}

double NNfunction_ss_dLuR::synapse0x2e79900() {
   return (neuron0x2e726c0()*0.834009);
}

double NNfunction_ss_dLuR::synapse0x2e79940() {
   return (neuron0x2e72a00()*-2.82611);
}

double NNfunction_ss_dLuR::synapse0x2e79980() {
   return (neuron0x2e72d40()*1.41067);
}

double NNfunction_ss_dLuR::synapse0x2e799c0() {
   return (neuron0x2e73080()*-0.0819985);
}

double NNfunction_ss_dLuR::synapse0x2e79a00() {
   return (neuron0x2e733c0()*0.303691);
}

double NNfunction_ss_dLuR::synapse0x2e79a40() {
   return (neuron0x2e73700()*-0.539143);
}

double NNfunction_ss_dLuR::synapse0x2e79a80() {
   return (neuron0x2e73a40()*0.68279);
}

double NNfunction_ss_dLuR::synapse0x2e79ac0() {
   return (neuron0x2e73d80()*-0.914196);
}

double NNfunction_ss_dLuR::synapse0x2e79b00() {
   return (neuron0x2e740c0()*-0.889557);
}

double NNfunction_ss_dLuR::synapse0x2e79b40() {
   return (neuron0x2e74400()*0.267102);
}

double NNfunction_ss_dLuR::synapse0x2e79b80() {
   return (neuron0x2e74740()*0.27545);
}

double NNfunction_ss_dLuR::synapse0x2e79bc0() {
   return (neuron0x2e74a80()*-0.284859);
}

double NNfunction_ss_dLuR::synapse0x2e79c00() {
   return (neuron0x2e74dc0()*0.345287);
}

double NNfunction_ss_dLuR::synapse0x2e79c40() {
   return (neuron0x2e75100()*1.00351);
}

double NNfunction_ss_dLuR::synapse0x2e79c80() {
   return (neuron0x2e75440()*1.45018);
}

double NNfunction_ss_dLuR::synapse0x2e79710() {
   return (neuron0x2e75780()*-1.13691);
}

double NNfunction_ss_dLuR::synapse0x2e79750() {
   return (neuron0x2e75ce0()*-0.00642117);
}

double NNfunction_ss_dLuR::synapse0x2e79dd0() {
   return (neuron0x2e75f00()*-0.11478);
}

double NNfunction_ss_dLuR::synapse0x2e79e10() {
   return (neuron0x2e76240()*-0.735749);
}

double NNfunction_ss_dLuR::synapse0x2e79e50() {
   return (neuron0x2e76580()*-1.19091);
}

double NNfunction_ss_dLuR::synapse0x2e79e90() {
   return (neuron0x2e768c0()*-0.957699);
}

double NNfunction_ss_dLuR::synapse0x2e79ed0() {
   return (neuron0x2e76c00()*1.37265);
}

double NNfunction_ss_dLuR::synapse0x2e79f10() {
   return (neuron0x2e76f40()*0.385277);
}

double NNfunction_ss_dLuR::synapse0x2e7a290() {
   return (neuron0x2e72410()*0.0972888);
}

double NNfunction_ss_dLuR::synapse0x2e7a2d0() {
   return (neuron0x2e726c0()*-0.0996969);
}

double NNfunction_ss_dLuR::synapse0x2e7a310() {
   return (neuron0x2e72a00()*-0.409709);
}

double NNfunction_ss_dLuR::synapse0x2e7a350() {
   return (neuron0x2e72d40()*0.407096);
}

double NNfunction_ss_dLuR::synapse0x2e7a390() {
   return (neuron0x2e73080()*0.322748);
}

double NNfunction_ss_dLuR::synapse0x2e7a3d0() {
   return (neuron0x2e733c0()*0.220657);
}

double NNfunction_ss_dLuR::synapse0x2e7a410() {
   return (neuron0x2e73700()*0.0056768);
}

double NNfunction_ss_dLuR::synapse0x2e7a450() {
   return (neuron0x2e73a40()*-0.734908);
}

double NNfunction_ss_dLuR::synapse0x2e7a490() {
   return (neuron0x2e73d80()*-1.39432);
}

double NNfunction_ss_dLuR::synapse0x2c3b720() {
   return (neuron0x2e740c0()*1.01669);
}

double NNfunction_ss_dLuR::synapse0x2c3b760() {
   return (neuron0x2e74400()*-0.765666);
}

double NNfunction_ss_dLuR::synapse0x2c3b7a0() {
   return (neuron0x2e74740()*-0.405762);
}

double NNfunction_ss_dLuR::synapse0x2c3b7e0() {
   return (neuron0x2e74a80()*-1.13075);
}

double NNfunction_ss_dLuR::synapse0x2c3b820() {
   return (neuron0x2e74dc0()*0.231633);
}

double NNfunction_ss_dLuR::synapse0x2c3b860() {
   return (neuron0x2e75100()*0.507939);
}

double NNfunction_ss_dLuR::synapse0x2c3b8a0() {
   return (neuron0x2e75440()*0.329973);
}

double NNfunction_ss_dLuR::synapse0x2e7a0e0() {
   return (neuron0x2e75780()*-0.0898024);
}

double NNfunction_ss_dLuR::synapse0x2e7a120() {
   return (neuron0x2e75ce0()*0.134071);
}

double NNfunction_ss_dLuR::synapse0x2c3b9f0() {
   return (neuron0x2e75f00()*1.17993);
}

double NNfunction_ss_dLuR::synapse0x2c3ba30() {
   return (neuron0x2e76240()*0.475633);
}

double NNfunction_ss_dLuR::synapse0x2c3ba70() {
   return (neuron0x2e76580()*0.439812);
}

double NNfunction_ss_dLuR::synapse0x2c3bab0() {
   return (neuron0x2e768c0()*0.0195192);
}

double NNfunction_ss_dLuR::synapse0x2c3baf0() {
   return (neuron0x2e76c00()*-0.118162);
}

double NNfunction_ss_dLuR::synapse0x2e7ace0() {
   return (neuron0x2e76f40()*0.326621);
}

double NNfunction_ss_dLuR::synapse0x2e7b060() {
   return (neuron0x2e72410()*0.052702);
}

double NNfunction_ss_dLuR::synapse0x2e7b0a0() {
   return (neuron0x2e726c0()*-0.00377034);
}

double NNfunction_ss_dLuR::synapse0x2e7b0e0() {
   return (neuron0x2e72a00()*0.0772457);
}

double NNfunction_ss_dLuR::synapse0x2e7b120() {
   return (neuron0x2e72d40()*-2.11476);
}

double NNfunction_ss_dLuR::synapse0x2e7b160() {
   return (neuron0x2e73080()*0.0767427);
}

double NNfunction_ss_dLuR::synapse0x2e7b1a0() {
   return (neuron0x2e733c0()*0.0713685);
}

double NNfunction_ss_dLuR::synapse0x2e7b1e0() {
   return (neuron0x2e73700()*0.0283877);
}

double NNfunction_ss_dLuR::synapse0x2e7b220() {
   return (neuron0x2e73a40()*-0.0188701);
}

double NNfunction_ss_dLuR::synapse0x2e7b260() {
   return (neuron0x2e73d80()*0.0257068);
}

double NNfunction_ss_dLuR::synapse0x2e7b2a0() {
   return (neuron0x2e740c0()*0.016607);
}

double NNfunction_ss_dLuR::synapse0x2e7b2e0() {
   return (neuron0x2e74400()*-0.00905631);
}

double NNfunction_ss_dLuR::synapse0x2e7b320() {
   return (neuron0x2e74740()*-1.36437);
}

double NNfunction_ss_dLuR::synapse0x2e7b360() {
   return (neuron0x2e74a80()*-0.0388298);
}

double NNfunction_ss_dLuR::synapse0x2e7b3a0() {
   return (neuron0x2e74dc0()*-0.0574744);
}

double NNfunction_ss_dLuR::synapse0x2e7b3e0() {
   return (neuron0x2e75100()*0.609851);
}

double NNfunction_ss_dLuR::synapse0x2e7b420() {
   return (neuron0x2e75440()*-0.0176978);
}

double NNfunction_ss_dLuR::synapse0x2e7aeb0() {
   return (neuron0x2e75780()*-0.0455723);
}

double NNfunction_ss_dLuR::synapse0x2e7aef0() {
   return (neuron0x2e75ce0()*-0.129471);
}

double NNfunction_ss_dLuR::synapse0x2e7b570() {
   return (neuron0x2e75f00()*0.049307);
}

double NNfunction_ss_dLuR::synapse0x2e7b5b0() {
   return (neuron0x2e76240()*0.0117549);
}

double NNfunction_ss_dLuR::synapse0x2e7b5f0() {
   return (neuron0x2e76580()*0.0922607);
}

double NNfunction_ss_dLuR::synapse0x2e7b630() {
   return (neuron0x2e768c0()*0.0551938);
}

double NNfunction_ss_dLuR::synapse0x2e7b670() {
   return (neuron0x2e76c00()*-0.036192);
}

double NNfunction_ss_dLuR::synapse0x2e7b6b0() {
   return (neuron0x2e76f40()*-0.0672748);
}

double NNfunction_ss_dLuR::synapse0x2e7ba30() {
   return (neuron0x2e72410()*-0.268747);
}

double NNfunction_ss_dLuR::synapse0x2e7ba70() {
   return (neuron0x2e726c0()*0.463215);
}

double NNfunction_ss_dLuR::synapse0x2e7bab0() {
   return (neuron0x2e72a00()*0.228934);
}

double NNfunction_ss_dLuR::synapse0x2e7baf0() {
   return (neuron0x2e72d40()*0.532091);
}

double NNfunction_ss_dLuR::synapse0x2e7bb30() {
   return (neuron0x2e73080()*0.394488);
}

double NNfunction_ss_dLuR::synapse0x2e7bb70() {
   return (neuron0x2e733c0()*-0.175982);
}

double NNfunction_ss_dLuR::synapse0x2e7bbb0() {
   return (neuron0x2e73700()*0.0326685);
}

double NNfunction_ss_dLuR::synapse0x2e7bbf0() {
   return (neuron0x2e73a40()*0.0664497);
}

double NNfunction_ss_dLuR::synapse0x2e7bc30() {
   return (neuron0x2e73d80()*-0.120725);
}

double NNfunction_ss_dLuR::synapse0x2e7bc70() {
   return (neuron0x2e740c0()*-0.168395);
}

double NNfunction_ss_dLuR::synapse0x2e7bcb0() {
   return (neuron0x2e74400()*-0.329905);
}

double NNfunction_ss_dLuR::synapse0x2e7bcf0() {
   return (neuron0x2e74740()*-0.90557);
}

double NNfunction_ss_dLuR::synapse0x2e7bd30() {
   return (neuron0x2e74a80()*-0.641186);
}

double NNfunction_ss_dLuR::synapse0x2e7bd70() {
   return (neuron0x2e74dc0()*-0.175306);
}

double NNfunction_ss_dLuR::synapse0x2e7bdb0() {
   return (neuron0x2e75100()*-0.918474);
}

double NNfunction_ss_dLuR::synapse0x2e7bdf0() {
   return (neuron0x2e75440()*-0.0815298);
}

double NNfunction_ss_dLuR::synapse0x2e7b880() {
   return (neuron0x2e75780()*-0.00225473);
}

double NNfunction_ss_dLuR::synapse0x2e7b8c0() {
   return (neuron0x2e75ce0()*0.313809);
}

double NNfunction_ss_dLuR::synapse0x2e7bf40() {
   return (neuron0x2e75f00()*-0.107257);
}

double NNfunction_ss_dLuR::synapse0x2e7bf80() {
   return (neuron0x2e76240()*0.256983);
}

double NNfunction_ss_dLuR::synapse0x2e7bfc0() {
   return (neuron0x2e76580()*-0.0164861);
}

double NNfunction_ss_dLuR::synapse0x2e7c000() {
   return (neuron0x2e768c0()*0.0755723);
}

double NNfunction_ss_dLuR::synapse0x2e7c040() {
   return (neuron0x2e76c00()*0.218409);
}

double NNfunction_ss_dLuR::synapse0x2e7c080() {
   return (neuron0x2e76f40()*-0.552255);
}

double NNfunction_ss_dLuR::synapse0x2e75bd0() {
   return (neuron0x2e72410()*-0.140193);
}

double NNfunction_ss_dLuR::synapse0x2e75c10() {
   return (neuron0x2e726c0()*-0.449825);
}

double NNfunction_ss_dLuR::synapse0x2e75c50() {
   return (neuron0x2e72a00()*-0.51092);
}

double NNfunction_ss_dLuR::synapse0x2e75c90() {
   return (neuron0x2e72d40()*0.607729);
}

double NNfunction_ss_dLuR::synapse0x2e7c610() {
   return (neuron0x2e73080()*-0.505856);
}

double NNfunction_ss_dLuR::synapse0x2e7c650() {
   return (neuron0x2e733c0()*0.118157);
}

double NNfunction_ss_dLuR::synapse0x2e7c690() {
   return (neuron0x2e73700()*0.710876);
}

double NNfunction_ss_dLuR::synapse0x2e7c6d0() {
   return (neuron0x2e73a40()*-0.0714588);
}

double NNfunction_ss_dLuR::synapse0x2e7c710() {
   return (neuron0x2e73d80()*0.369095);
}

double NNfunction_ss_dLuR::synapse0x2e7c750() {
   return (neuron0x2e740c0()*-0.173518);
}

double NNfunction_ss_dLuR::synapse0x2e7c790() {
   return (neuron0x2e74400()*-0.122389);
}

double NNfunction_ss_dLuR::synapse0x2e7c7d0() {
   return (neuron0x2e74740()*1.2052);
}

double NNfunction_ss_dLuR::synapse0x2e7c810() {
   return (neuron0x2e74a80()*0.155219);
}

double NNfunction_ss_dLuR::synapse0x2e7c850() {
   return (neuron0x2e74dc0()*0.287784);
}

double NNfunction_ss_dLuR::synapse0x2e7c890() {
   return (neuron0x2e75100()*-0.00278532);
}

double NNfunction_ss_dLuR::synapse0x2e7c8d0() {
   return (neuron0x2e75440()*-0.260066);
}

double NNfunction_ss_dLuR::synapse0x2e7c250() {
   return (neuron0x2e75780()*-0.887182);
}

double NNfunction_ss_dLuR::synapse0x2e7c290() {
   return (neuron0x2e75ce0()*-1.10145);
}

double NNfunction_ss_dLuR::synapse0x2e7ca20() {
   return (neuron0x2e75f00()*0.24954);
}

double NNfunction_ss_dLuR::synapse0x2e7ca60() {
   return (neuron0x2e76240()*-0.18757);
}

double NNfunction_ss_dLuR::synapse0x2e7caa0() {
   return (neuron0x2e76580()*-0.534);
}

double NNfunction_ss_dLuR::synapse0x2e7cae0() {
   return (neuron0x2e768c0()*0.0824543);
}

double NNfunction_ss_dLuR::synapse0x2e7cb20() {
   return (neuron0x2e76c00()*-0.109566);
}

double NNfunction_ss_dLuR::synapse0x2e7cb60() {
   return (neuron0x2e76f40()*0.24947);
}

double NNfunction_ss_dLuR::synapse0x2e7cee0() {
   return (neuron0x2e72410()*-0.11199);
}

double NNfunction_ss_dLuR::synapse0x2e7cf20() {
   return (neuron0x2e726c0()*-0.274258);
}

double NNfunction_ss_dLuR::synapse0x2e7cf60() {
   return (neuron0x2e72a00()*-0.284879);
}

double NNfunction_ss_dLuR::synapse0x2e7cfa0() {
   return (neuron0x2e72d40()*0.418697);
}

double NNfunction_ss_dLuR::synapse0x2e7cfe0() {
   return (neuron0x2e73080()*0.302823);
}

double NNfunction_ss_dLuR::synapse0x2e7d020() {
   return (neuron0x2e733c0()*0.343735);
}

double NNfunction_ss_dLuR::synapse0x2e7d060() {
   return (neuron0x2e73700()*-0.345285);
}

double NNfunction_ss_dLuR::synapse0x2e7d0a0() {
   return (neuron0x2e73a40()*-0.337522);
}

double NNfunction_ss_dLuR::synapse0x2e7d0e0() {
   return (neuron0x2e73d80()*0.696633);
}

double NNfunction_ss_dLuR::synapse0x2e7d120() {
   return (neuron0x2e740c0()*0.337152);
}

double NNfunction_ss_dLuR::synapse0x2e7d160() {
   return (neuron0x2e74400()*-0.198063);
}

double NNfunction_ss_dLuR::synapse0x2e7d1a0() {
   return (neuron0x2e74740()*-0.357204);
}

double NNfunction_ss_dLuR::synapse0x2e7d1e0() {
   return (neuron0x2e74a80()*0.409015);
}

double NNfunction_ss_dLuR::synapse0x2e7d220() {
   return (neuron0x2e74dc0()*-0.6881);
}

double NNfunction_ss_dLuR::synapse0x2e7d260() {
   return (neuron0x2e75100()*0.0917515);
}

double NNfunction_ss_dLuR::synapse0x2e7d2a0() {
   return (neuron0x2e75440()*0.191076);
}

double NNfunction_ss_dLuR::synapse0x2e7cd30() {
   return (neuron0x2e75780()*0.186593);
}

double NNfunction_ss_dLuR::synapse0x2e7cd70() {
   return (neuron0x2e75ce0()*0.462086);
}

double NNfunction_ss_dLuR::synapse0x2e7d3f0() {
   return (neuron0x2e75f00()*-0.328966);
}

double NNfunction_ss_dLuR::synapse0x2e7d430() {
   return (neuron0x2e76240()*-0.0201811);
}

double NNfunction_ss_dLuR::synapse0x2e7d470() {
   return (neuron0x2e76580()*0.670111);
}

double NNfunction_ss_dLuR::synapse0x2e7d4b0() {
   return (neuron0x2e768c0()*0.130502);
}

double NNfunction_ss_dLuR::synapse0x2e7d4f0() {
   return (neuron0x2e76c00()*-0.504148);
}

double NNfunction_ss_dLuR::synapse0x2e7d530() {
   return (neuron0x2e76f40()*-0.0178054);
}

double NNfunction_ss_dLuR::synapse0x2e7d8b0() {
   return (neuron0x2e72410()*-0.0432789);
}

double NNfunction_ss_dLuR::synapse0x2e7d8f0() {
   return (neuron0x2e726c0()*0.052617);
}

double NNfunction_ss_dLuR::synapse0x2e7d930() {
   return (neuron0x2e72a00()*0.0628797);
}

double NNfunction_ss_dLuR::synapse0x2e7d970() {
   return (neuron0x2e72d40()*-1.68686);
}

double NNfunction_ss_dLuR::synapse0x2e7d9b0() {
   return (neuron0x2e73080()*0.0370754);
}

double NNfunction_ss_dLuR::synapse0x2e7d9f0() {
   return (neuron0x2e733c0()*0.0879688);
}

double NNfunction_ss_dLuR::synapse0x2e7da30() {
   return (neuron0x2e73700()*-0.0175811);
}

double NNfunction_ss_dLuR::synapse0x2e7da70() {
   return (neuron0x2e73a40()*0.000623717);
}

double NNfunction_ss_dLuR::synapse0x2e7dab0() {
   return (neuron0x2e73d80()*-0.0101786);
}

double NNfunction_ss_dLuR::synapse0x2e7daf0() {
   return (neuron0x2e740c0()*0.0331832);
}

double NNfunction_ss_dLuR::synapse0x2e7db30() {
   return (neuron0x2e74400()*-0.0283241);
}

double NNfunction_ss_dLuR::synapse0x2e7db70() {
   return (neuron0x2e74740()*-0.477912);
}

double NNfunction_ss_dLuR::synapse0x2e7dbb0() {
   return (neuron0x2e74a80()*-0.116263);
}

double NNfunction_ss_dLuR::synapse0x2e7dbf0() {
   return (neuron0x2e74dc0()*-0.0311712);
}

double NNfunction_ss_dLuR::synapse0x2e7dc30() {
   return (neuron0x2e75100()*-0.646954);
}

double NNfunction_ss_dLuR::synapse0x2e7dc70() {
   return (neuron0x2e75440()*0.0278272);
}

double NNfunction_ss_dLuR::synapse0x2e7d700() {
   return (neuron0x2e75780()*0.0222188);
}

double NNfunction_ss_dLuR::synapse0x2e7d740() {
   return (neuron0x2e75ce0()*-0.0238894);
}

double NNfunction_ss_dLuR::synapse0x2e7a4d0() {
   return (neuron0x2e75f00()*-0.0969791);
}

double NNfunction_ss_dLuR::synapse0x2e7a510() {
   return (neuron0x2e76240()*-0.0328826);
}

double NNfunction_ss_dLuR::synapse0x2e7a550() {
   return (neuron0x2e76580()*0.0422049);
}

double NNfunction_ss_dLuR::synapse0x2e7a590() {
   return (neuron0x2e768c0()*0.0244065);
}

double NNfunction_ss_dLuR::synapse0x2e7a5d0() {
   return (neuron0x2e76c00()*-0.0394711);
}

double NNfunction_ss_dLuR::synapse0x2e7a610() {
   return (neuron0x2e76f40()*0.00196482);
}

double NNfunction_ss_dLuR::synapse0x2e7a990() {
   return (neuron0x2e72410()*0.0195225);
}

double NNfunction_ss_dLuR::synapse0x2e7a9d0() {
   return (neuron0x2e726c0()*0.0220691);
}

double NNfunction_ss_dLuR::synapse0x2e7aa10() {
   return (neuron0x2e72a00()*-0.0370346);
}

double NNfunction_ss_dLuR::synapse0x2e7aa50() {
   return (neuron0x2e72d40()*-10.6938);
}

double NNfunction_ss_dLuR::synapse0x2e7aa90() {
   return (neuron0x2e73080()*-0.0157891);
}

double NNfunction_ss_dLuR::synapse0x2e7aad0() {
   return (neuron0x2e733c0()*0.00870523);
}

double NNfunction_ss_dLuR::synapse0x2e7ab10() {
   return (neuron0x2e73700()*-0.0103258);
}

double NNfunction_ss_dLuR::synapse0x2e7ab50() {
   return (neuron0x2e73a40()*0.00520888);
}

double NNfunction_ss_dLuR::synapse0x2e7ab90() {
   return (neuron0x2e73d80()*0.0285253);
}

double NNfunction_ss_dLuR::synapse0x2e7abd0() {
   return (neuron0x2e740c0()*0.0040857);
}

double NNfunction_ss_dLuR::synapse0x2e7ac10() {
   return (neuron0x2e74400()*-0.00498669);
}

double NNfunction_ss_dLuR::synapse0x2e7ac50() {
   return (neuron0x2e74740()*0.328989);
}

double NNfunction_ss_dLuR::synapse0x2e7ac90() {
   return (neuron0x2e74a80()*-0.00849107);
}

double NNfunction_ss_dLuR::synapse0x2e7edd0() {
   return (neuron0x2e74dc0()*0.0701844);
}

double NNfunction_ss_dLuR::synapse0x2e7ee10() {
   return (neuron0x2e75100()*0.598946);
}

double NNfunction_ss_dLuR::synapse0x2e7ee50() {
   return (neuron0x2e75440()*0.0063359);
}

double NNfunction_ss_dLuR::synapse0x2e7a7e0() {
   return (neuron0x2e75780()*0.00642204);
}

double NNfunction_ss_dLuR::synapse0x2e7a820() {
   return (neuron0x2e75ce0()*0.0173342);
}

double NNfunction_ss_dLuR::synapse0x2e7efa0() {
   return (neuron0x2e75f00()*0.00955778);
}

double NNfunction_ss_dLuR::synapse0x2e7efe0() {
   return (neuron0x2e76240()*-0.0457612);
}

double NNfunction_ss_dLuR::synapse0x2e7f020() {
   return (neuron0x2e76580()*-0.0527352);
}

double NNfunction_ss_dLuR::synapse0x2e7f060() {
   return (neuron0x2e768c0()*-0.0243378);
}

double NNfunction_ss_dLuR::synapse0x2e7f0a0() {
   return (neuron0x2e76c00()*0.00859102);
}

double NNfunction_ss_dLuR::synapse0x2e7f0e0() {
   return (neuron0x2e76f40()*-0.0316803);
}

double NNfunction_ss_dLuR::synapse0x2e7f460() {
   return (neuron0x2e72410()*0.131289);
}

double NNfunction_ss_dLuR::synapse0x2e7f4a0() {
   return (neuron0x2e726c0()*0.362727);
}

double NNfunction_ss_dLuR::synapse0x2e7f4e0() {
   return (neuron0x2e72a00()*0.0726832);
}

double NNfunction_ss_dLuR::synapse0x2e7f520() {
   return (neuron0x2e72d40()*-0.469916);
}

double NNfunction_ss_dLuR::synapse0x2e7f560() {
   return (neuron0x2e73080()*0.737938);
}

double NNfunction_ss_dLuR::synapse0x2e7f5a0() {
   return (neuron0x2e733c0()*0.614172);
}

double NNfunction_ss_dLuR::synapse0x2e7f5e0() {
   return (neuron0x2e73700()*0.613186);
}

double NNfunction_ss_dLuR::synapse0x2e7f620() {
   return (neuron0x2e73a40()*0.266579);
}

double NNfunction_ss_dLuR::synapse0x2e7f660() {
   return (neuron0x2e73d80()*-0.294869);
}

double NNfunction_ss_dLuR::synapse0x2e7f6a0() {
   return (neuron0x2e740c0()*0.203597);
}

double NNfunction_ss_dLuR::synapse0x2e7f6e0() {
   return (neuron0x2e74400()*-0.282782);
}

double NNfunction_ss_dLuR::synapse0x2e7f720() {
   return (neuron0x2e74740()*0.979461);
}

double NNfunction_ss_dLuR::synapse0x2e7f760() {
   return (neuron0x2e74a80()*-0.527337);
}

double NNfunction_ss_dLuR::synapse0x2e7f7a0() {
   return (neuron0x2e74dc0()*0.870835);
}

double NNfunction_ss_dLuR::synapse0x2e7f7e0() {
   return (neuron0x2e75100()*-0.273775);
}

double NNfunction_ss_dLuR::synapse0x2e7f820() {
   return (neuron0x2e75440()*-0.37668);
}

double NNfunction_ss_dLuR::synapse0x2e7f2b0() {
   return (neuron0x2e75780()*-0.0624588);
}

double NNfunction_ss_dLuR::synapse0x2e7f2f0() {
   return (neuron0x2e75ce0()*0.976482);
}

double NNfunction_ss_dLuR::synapse0x2e7f970() {
   return (neuron0x2e75f00()*0.164974);
}

double NNfunction_ss_dLuR::synapse0x2e7f9b0() {
   return (neuron0x2e76240()*-0.583817);
}

double NNfunction_ss_dLuR::synapse0x2e7f9f0() {
   return (neuron0x2e76580()*-0.106667);
}

double NNfunction_ss_dLuR::synapse0x2e7fa30() {
   return (neuron0x2e768c0()*-0.518139);
}

double NNfunction_ss_dLuR::synapse0x2e7fa70() {
   return (neuron0x2e76c00()*0.444853);
}

double NNfunction_ss_dLuR::synapse0x2e7fab0() {
   return (neuron0x2e76f40()*-0.124381);
}

double NNfunction_ss_dLuR::synapse0x2e7fe30() {
   return (neuron0x2e72410()*-0.373239);
}

double NNfunction_ss_dLuR::synapse0x2e7fe70() {
   return (neuron0x2e726c0()*1.40212);
}

double NNfunction_ss_dLuR::synapse0x2e7feb0() {
   return (neuron0x2e72a00()*-0.847907);
}

double NNfunction_ss_dLuR::synapse0x2e7fef0() {
   return (neuron0x2e72d40()*0.514952);
}

double NNfunction_ss_dLuR::synapse0x2e7ff30() {
   return (neuron0x2e73080()*-0.388637);
}

double NNfunction_ss_dLuR::synapse0x2e7ff70() {
   return (neuron0x2e733c0()*-0.208374);
}

double NNfunction_ss_dLuR::synapse0x2e7ffb0() {
   return (neuron0x2e73700()*0.175716);
}

double NNfunction_ss_dLuR::synapse0x2e7fff0() {
   return (neuron0x2e73a40()*-1.31824);
}

double NNfunction_ss_dLuR::synapse0x2e80030() {
   return (neuron0x2e73d80()*1.53317);
}

double NNfunction_ss_dLuR::synapse0x2e80070() {
   return (neuron0x2e740c0()*0.0262807);
}

double NNfunction_ss_dLuR::synapse0x2e800b0() {
   return (neuron0x2e74400()*-0.210174);
}

double NNfunction_ss_dLuR::synapse0x2e800f0() {
   return (neuron0x2e74740()*-0.805833);
}

double NNfunction_ss_dLuR::synapse0x2e80130() {
   return (neuron0x2e74a80()*-0.332272);
}

double NNfunction_ss_dLuR::synapse0x2e80170() {
   return (neuron0x2e74dc0()*-0.141034);
}

double NNfunction_ss_dLuR::synapse0x2e801b0() {
   return (neuron0x2e75100()*-0.6532);
}

double NNfunction_ss_dLuR::synapse0x2e801f0() {
   return (neuron0x2e75440()*-0.0428468);
}

double NNfunction_ss_dLuR::synapse0x2e7fc80() {
   return (neuron0x2e75780()*0.261082);
}

double NNfunction_ss_dLuR::synapse0x2e7fcc0() {
   return (neuron0x2e75ce0()*1.38875);
}

double NNfunction_ss_dLuR::synapse0x2e80340() {
   return (neuron0x2e75f00()*-0.134138);
}

double NNfunction_ss_dLuR::synapse0x2e80380() {
   return (neuron0x2e76240()*0.489093);
}

double NNfunction_ss_dLuR::synapse0x2e803c0() {
   return (neuron0x2e76580()*0.0686857);
}

double NNfunction_ss_dLuR::synapse0x2e80400() {
   return (neuron0x2e768c0()*-0.697293);
}

double NNfunction_ss_dLuR::synapse0x2e80440() {
   return (neuron0x2e76c00()*0.500695);
}

double NNfunction_ss_dLuR::synapse0x2e80480() {
   return (neuron0x2e76f40()*0.18265);
}

double NNfunction_ss_dLuR::synapse0x2e80800() {
   return (neuron0x2e72410()*0.0097981);
}

double NNfunction_ss_dLuR::synapse0x2e80840() {
   return (neuron0x2e726c0()*-0.0138348);
}

double NNfunction_ss_dLuR::synapse0x2e80880() {
   return (neuron0x2e72a00()*-0.0841914);
}

double NNfunction_ss_dLuR::synapse0x2e808c0() {
   return (neuron0x2e72d40()*0.135523);
}

double NNfunction_ss_dLuR::synapse0x2e80900() {
   return (neuron0x2e73080()*-0.0428682);
}

double NNfunction_ss_dLuR::synapse0x2e80940() {
   return (neuron0x2e733c0()*-0.0852749);
}

double NNfunction_ss_dLuR::synapse0x2e80980() {
   return (neuron0x2e73700()*-0.0260421);
}

double NNfunction_ss_dLuR::synapse0x2e809c0() {
   return (neuron0x2e73a40()*-0.0707614);
}

double NNfunction_ss_dLuR::synapse0x2e80a00() {
   return (neuron0x2e73d80()*0.0676401);
}

double NNfunction_ss_dLuR::synapse0x2e80a40() {
   return (neuron0x2e740c0()*-0.0120061);
}

double NNfunction_ss_dLuR::synapse0x2e80a80() {
   return (neuron0x2e74400()*0.0180151);
}

double NNfunction_ss_dLuR::synapse0x2e80ac0() {
   return (neuron0x2e74740()*-1.15254);
}

double NNfunction_ss_dLuR::synapse0x2e80b00() {
   return (neuron0x2e74a80()*0.0608848);
}

double NNfunction_ss_dLuR::synapse0x2e80b40() {
   return (neuron0x2e74dc0()*-0.0120849);
}

double NNfunction_ss_dLuR::synapse0x2e80b80() {
   return (neuron0x2e75100()*1.21249);
}

double NNfunction_ss_dLuR::synapse0x2e80bc0() {
   return (neuron0x2e75440()*-0.00116219);
}

double NNfunction_ss_dLuR::synapse0x2e80650() {
   return (neuron0x2e75780()*-0.00783179);
}

double NNfunction_ss_dLuR::synapse0x2e80690() {
   return (neuron0x2e75ce0()*0.0369153);
}

double NNfunction_ss_dLuR::synapse0x2e80d10() {
   return (neuron0x2e75f00()*0.0303351);
}

double NNfunction_ss_dLuR::synapse0x2e80d50() {
   return (neuron0x2e76240()*0.0494382);
}

double NNfunction_ss_dLuR::synapse0x2e80d90() {
   return (neuron0x2e76580()*-0.0440611);
}

double NNfunction_ss_dLuR::synapse0x2e80dd0() {
   return (neuron0x2e768c0()*-0.0126916);
}

double NNfunction_ss_dLuR::synapse0x2e80e10() {
   return (neuron0x2e76c00()*0.00385045);
}

double NNfunction_ss_dLuR::synapse0x2e80e50() {
   return (neuron0x2e76f40()*-0.0187211);
}

double NNfunction_ss_dLuR::synapse0x2e811d0() {
   return (neuron0x2e72410()*-0.095519);
}

double NNfunction_ss_dLuR::synapse0x2e725a0() {
   return (neuron0x2e726c0()*-0.734841);
}

double NNfunction_ss_dLuR::synapse0x2e725e0() {
   return (neuron0x2e72a00()*0.313763);
}

double NNfunction_ss_dLuR::synapse0x2e728e0() {
   return (neuron0x2e72d40()*-0.471835);
}

double NNfunction_ss_dLuR::synapse0x2e72920() {
   return (neuron0x2e73080()*-0.294622);
}

double NNfunction_ss_dLuR::synapse0x2e72c20() {
   return (neuron0x2e733c0()*-0.786104);
}

double NNfunction_ss_dLuR::synapse0x2e72c60() {
   return (neuron0x2e73700()*-0.166404);
}

double NNfunction_ss_dLuR::synapse0x2e72f60() {
   return (neuron0x2e73a40()*0.268961);
}

double NNfunction_ss_dLuR::synapse0x2e72fa0() {
   return (neuron0x2e73d80()*-0.930326);
}

double NNfunction_ss_dLuR::synapse0x2e732a0() {
   return (neuron0x2e740c0()*0.0187095);
}

double NNfunction_ss_dLuR::synapse0x2e732e0() {
   return (neuron0x2e74400()*0.309458);
}

double NNfunction_ss_dLuR::synapse0x2e735e0() {
   return (neuron0x2e74740()*-1.84645);
}

double NNfunction_ss_dLuR::synapse0x2e73620() {
   return (neuron0x2e74a80()*0.727443);
}

double NNfunction_ss_dLuR::synapse0x2e73920() {
   return (neuron0x2e74dc0()*-0.344135);
}

double NNfunction_ss_dLuR::synapse0x2e73960() {
   return (neuron0x2e75100()*1.36546);
}

double NNfunction_ss_dLuR::synapse0x2e73c60() {
   return (neuron0x2e75440()*0.411754);
}

double NNfunction_ss_dLuR::synapse0x2e73ca0() {
   return (neuron0x2e75780()*0.329724);
}

double NNfunction_ss_dLuR::synapse0x2e73fa0() {
   return (neuron0x2e75ce0()*0.0237756);
}

double NNfunction_ss_dLuR::synapse0x2e73fe0() {
   return (neuron0x2e75f00()*-0.0197369);
}

double NNfunction_ss_dLuR::synapse0x2e742e0() {
   return (neuron0x2e76240()*0.037161);
}

double NNfunction_ss_dLuR::synapse0x2e74320() {
   return (neuron0x2e76580()*-0.238513);
}

double NNfunction_ss_dLuR::synapse0x2e74620() {
   return (neuron0x2e768c0()*0.425371);
}

double NNfunction_ss_dLuR::synapse0x2e74660() {
   return (neuron0x2e76c00()*-0.277157);
}

double NNfunction_ss_dLuR::synapse0x2e74960() {
   return (neuron0x2e76f40()*0.263723);
}

double NNfunction_ss_dLuR::synapse0x2e749a0() {
   return (neuron0x2e72410()*0.36598);
}

double NNfunction_ss_dLuR::synapse0x2e75660() {
   return (neuron0x2e726c0()*0.171993);
}

double NNfunction_ss_dLuR::synapse0x2e756a0() {
   return (neuron0x2e72a00()*-0.829745);
}

double NNfunction_ss_dLuR::synapse0x2e81020() {
   return (neuron0x2e72d40()*0.606095);
}

double NNfunction_ss_dLuR::synapse0x2e81060() {
   return (neuron0x2e73080()*-0.162062);
}

double NNfunction_ss_dLuR::synapse0x2e759a0() {
   return (neuron0x2e733c0()*-0.0687998);
}

double NNfunction_ss_dLuR::synapse0x2e759e0() {
   return (neuron0x2e73700()*-0.232345);
}

double NNfunction_ss_dLuR::synapse0x2c2d3b0() {
   return (neuron0x2e73a40()*-0.150413);
}

double NNfunction_ss_dLuR::synapse0x2c2d3f0() {
   return (neuron0x2e73d80()*0.0738928);
}

double NNfunction_ss_dLuR::synapse0x2e76120() {
   return (neuron0x2e740c0()*-0.590511);
}

double NNfunction_ss_dLuR::synapse0x2e76160() {
   return (neuron0x2e74400()*-0.0524057);
}

double NNfunction_ss_dLuR::synapse0x2e76460() {
   return (neuron0x2e74740()*0.303837);
}

double NNfunction_ss_dLuR::synapse0x2e764a0() {
   return (neuron0x2e74a80()*-0.41774);
}

double NNfunction_ss_dLuR::synapse0x2e767a0() {
   return (neuron0x2e74dc0()*0.0270956);
}

double NNfunction_ss_dLuR::synapse0x2e767e0() {
   return (neuron0x2e75100()*-0.273989);
}

double NNfunction_ss_dLuR::synapse0x2e76ae0() {
   return (neuron0x2e75440()*0.358863);
}

double NNfunction_ss_dLuR::synapse0x2e76b20() {
   return (neuron0x2e75780()*-0.326301);
}

double NNfunction_ss_dLuR::synapse0x2e76e20() {
   return (neuron0x2e75ce0()*-0.276084);
}

double NNfunction_ss_dLuR::synapse0x2e76e60() {
   return (neuron0x2e75f00()*0.343941);
}

double NNfunction_ss_dLuR::synapse0x2e77160() {
   return (neuron0x2e76240()*-0.0172396);
}

double NNfunction_ss_dLuR::synapse0x2e771a0() {
   return (neuron0x2e76580()*-0.403894);
}

double NNfunction_ss_dLuR::synapse0x2e74ca0() {
   return (neuron0x2e768c0()*-0.0814976);
}

double NNfunction_ss_dLuR::synapse0x2e74ce0() {
   return (neuron0x2e76c00()*0.218161);
}

double NNfunction_ss_dLuR::synapse0x2e82f40() {
   return (neuron0x2e76f40()*-0.167021);
}

double NNfunction_ss_dLuR::synapse0x2e832c0() {
   return (neuron0x2e72410()*0.0109255);
}

double NNfunction_ss_dLuR::synapse0x2e83300() {
   return (neuron0x2e726c0()*-0.021544);
}

double NNfunction_ss_dLuR::synapse0x2e83340() {
   return (neuron0x2e72a00()*-0.00966482);
}

double NNfunction_ss_dLuR::synapse0x2e83380() {
   return (neuron0x2e72d40()*-2.19791);
}

double NNfunction_ss_dLuR::synapse0x2e833c0() {
   return (neuron0x2e73080()*-0.0148072);
}

double NNfunction_ss_dLuR::synapse0x2e83400() {
   return (neuron0x2e733c0()*-0.0353122);
}

double NNfunction_ss_dLuR::synapse0x2e83440() {
   return (neuron0x2e73700()*0.00284314);
}

double NNfunction_ss_dLuR::synapse0x2e83480() {
   return (neuron0x2e73a40()*0.00302121);
}

double NNfunction_ss_dLuR::synapse0x2e834c0() {
   return (neuron0x2e73d80()*-0.0124815);
}

double NNfunction_ss_dLuR::synapse0x2e83500() {
   return (neuron0x2e740c0()*-0.0124763);
}

double NNfunction_ss_dLuR::synapse0x2e83540() {
   return (neuron0x2e74400()*0.0164343);
}

double NNfunction_ss_dLuR::synapse0x2e83580() {
   return (neuron0x2e74740()*0.0640509);
}

double NNfunction_ss_dLuR::synapse0x2e835c0() {
   return (neuron0x2e74a80()*0.0363665);
}

double NNfunction_ss_dLuR::synapse0x2e83600() {
   return (neuron0x2e74dc0()*-0.00493209);
}

double NNfunction_ss_dLuR::synapse0x2e83640() {
   return (neuron0x2e75100()*-0.0668493);
}

double NNfunction_ss_dLuR::synapse0x2e83680() {
   return (neuron0x2e75440()*-0.00767426);
}

double NNfunction_ss_dLuR::synapse0x2e83110() {
   return (neuron0x2e75780()*-0.0179464);
}

double NNfunction_ss_dLuR::synapse0x2e83150() {
   return (neuron0x2e75ce0()*0.0112908);
}

double NNfunction_ss_dLuR::synapse0x2e837d0() {
   return (neuron0x2e75f00()*0.0829666);
}

double NNfunction_ss_dLuR::synapse0x2e83810() {
   return (neuron0x2e76240()*0.0249696);
}

double NNfunction_ss_dLuR::synapse0x2e83850() {
   return (neuron0x2e76580()*-0.0143353);
}

double NNfunction_ss_dLuR::synapse0x2e83890() {
   return (neuron0x2e768c0()*-0.000346526);
}

double NNfunction_ss_dLuR::synapse0x2e838d0() {
   return (neuron0x2e76c00()*0.00953679);
}

double NNfunction_ss_dLuR::synapse0x2e83910() {
   return (neuron0x2e76f40()*-0.019409);
}

double NNfunction_ss_dLuR::synapse0x2e83c90() {
   return (neuron0x2e72410()*0.0476191);
}

double NNfunction_ss_dLuR::synapse0x2e83cd0() {
   return (neuron0x2e726c0()*0.00395383);
}

double NNfunction_ss_dLuR::synapse0x2e83d10() {
   return (neuron0x2e72a00()*0.0226954);
}

double NNfunction_ss_dLuR::synapse0x2e83d50() {
   return (neuron0x2e72d40()*0.258409);
}

double NNfunction_ss_dLuR::synapse0x2e83d90() {
   return (neuron0x2e73080()*0.0444693);
}

double NNfunction_ss_dLuR::synapse0x2e83dd0() {
   return (neuron0x2e733c0()*-0.0467769);
}

double NNfunction_ss_dLuR::synapse0x2e83e10() {
   return (neuron0x2e73700()*0.0439323);
}

double NNfunction_ss_dLuR::synapse0x2e83e50() {
   return (neuron0x2e73a40()*0.0691138);
}

double NNfunction_ss_dLuR::synapse0x2e83e90() {
   return (neuron0x2e73d80()*0.045701);
}

double NNfunction_ss_dLuR::synapse0x2e83ed0() {
   return (neuron0x2e740c0()*-0.050273);
}

double NNfunction_ss_dLuR::synapse0x2e83f10() {
   return (neuron0x2e74400()*-0.0407864);
}

double NNfunction_ss_dLuR::synapse0x2e83f50() {
   return (neuron0x2e74740()*-0.590043);
}

double NNfunction_ss_dLuR::synapse0x2e83f90() {
   return (neuron0x2e74a80()*0.0654163);
}

double NNfunction_ss_dLuR::synapse0x2e83fd0() {
   return (neuron0x2e74dc0()*0.0139295);
}

double NNfunction_ss_dLuR::synapse0x2e84010() {
   return (neuron0x2e75100()*-0.651778);
}

double NNfunction_ss_dLuR::synapse0x2e84050() {
   return (neuron0x2e75440()*0.0117727);
}

double NNfunction_ss_dLuR::synapse0x2e83ae0() {
   return (neuron0x2e75780()*-0.0523327);
}

double NNfunction_ss_dLuR::synapse0x2e83b20() {
   return (neuron0x2e75ce0()*0.0687447);
}

double NNfunction_ss_dLuR::synapse0x2e841a0() {
   return (neuron0x2e75f00()*0.00677366);
}

double NNfunction_ss_dLuR::synapse0x2e841e0() {
   return (neuron0x2e76240()*-0.0142132);
}

double NNfunction_ss_dLuR::synapse0x2e84220() {
   return (neuron0x2e76580()*0.00779671);
}

double NNfunction_ss_dLuR::synapse0x2e84260() {
   return (neuron0x2e768c0()*0.00709313);
}

double NNfunction_ss_dLuR::synapse0x2e842a0() {
   return (neuron0x2e76c00()*0.0171343);
}

double NNfunction_ss_dLuR::synapse0x2e842e0() {
   return (neuron0x2e76f40()*-0.0010846);
}

double NNfunction_ss_dLuR::synapse0x2e84660() {
   return (neuron0x2e72410()*-0.0453402);
}

double NNfunction_ss_dLuR::synapse0x2e846a0() {
   return (neuron0x2e726c0()*-0.23438);
}

double NNfunction_ss_dLuR::synapse0x2e846e0() {
   return (neuron0x2e72a00()*-0.532028);
}

double NNfunction_ss_dLuR::synapse0x2e84720() {
   return (neuron0x2e72d40()*-0.663969);
}

double NNfunction_ss_dLuR::synapse0x2e84760() {
   return (neuron0x2e73080()*-0.213554);
}

double NNfunction_ss_dLuR::synapse0x2e847a0() {
   return (neuron0x2e733c0()*-0.98146);
}

double NNfunction_ss_dLuR::synapse0x2e847e0() {
   return (neuron0x2e73700()*0.655614);
}

double NNfunction_ss_dLuR::synapse0x2e84820() {
   return (neuron0x2e73a40()*-0.31131);
}

double NNfunction_ss_dLuR::synapse0x2e84860() {
   return (neuron0x2e73d80()*0.542759);
}

double NNfunction_ss_dLuR::synapse0x2e848a0() {
   return (neuron0x2e740c0()*-0.21763);
}

double NNfunction_ss_dLuR::synapse0x2e848e0() {
   return (neuron0x2e74400()*-0.121397);
}

double NNfunction_ss_dLuR::synapse0x2e84920() {
   return (neuron0x2e74740()*-0.824522);
}

double NNfunction_ss_dLuR::synapse0x2e84960() {
   return (neuron0x2e74a80()*-0.257914);
}

double NNfunction_ss_dLuR::synapse0x2e849a0() {
   return (neuron0x2e74dc0()*0.580417);
}

double NNfunction_ss_dLuR::synapse0x2e849e0() {
   return (neuron0x2e75100()*-1.06322);
}

double NNfunction_ss_dLuR::synapse0x2e84a20() {
   return (neuron0x2e75440()*0.993597);
}

double NNfunction_ss_dLuR::synapse0x2e844b0() {
   return (neuron0x2e75780()*0.0572525);
}

double NNfunction_ss_dLuR::synapse0x2e844f0() {
   return (neuron0x2e75ce0()*1.47767);
}

double NNfunction_ss_dLuR::synapse0x2e84b70() {
   return (neuron0x2e75f00()*-0.414234);
}

double NNfunction_ss_dLuR::synapse0x2e84bb0() {
   return (neuron0x2e76240()*0.277805);
}

double NNfunction_ss_dLuR::synapse0x2e84bf0() {
   return (neuron0x2e76580()*-0.813741);
}

double NNfunction_ss_dLuR::synapse0x2e84c30() {
   return (neuron0x2e768c0()*0.324258);
}

double NNfunction_ss_dLuR::synapse0x2e84c70() {
   return (neuron0x2e76c00()*0.364921);
}

double NNfunction_ss_dLuR::synapse0x2e84cb0() {
   return (neuron0x2e76f40()*-0.177579);
}

double NNfunction_ss_dLuR::synapse0x2e85030() {
   return (neuron0x2e72410()*0.222479);
}

double NNfunction_ss_dLuR::synapse0x2e85070() {
   return (neuron0x2e726c0()*-0.0944959);
}

double NNfunction_ss_dLuR::synapse0x2e850b0() {
   return (neuron0x2e72a00()*0.959073);
}

double NNfunction_ss_dLuR::synapse0x2e850f0() {
   return (neuron0x2e72d40()*0.178585);
}

double NNfunction_ss_dLuR::synapse0x2e85130() {
   return (neuron0x2e73080()*0.0137912);
}

double NNfunction_ss_dLuR::synapse0x2e85170() {
   return (neuron0x2e733c0()*-0.53897);
}

double NNfunction_ss_dLuR::synapse0x2e851b0() {
   return (neuron0x2e73700()*-0.0273147);
}

double NNfunction_ss_dLuR::synapse0x2e851f0() {
   return (neuron0x2e73a40()*0.630644);
}

double NNfunction_ss_dLuR::synapse0x2e85230() {
   return (neuron0x2e73d80()*0.140582);
}

double NNfunction_ss_dLuR::synapse0x2e85270() {
   return (neuron0x2e740c0()*-0.194483);
}

double NNfunction_ss_dLuR::synapse0x2e852b0() {
   return (neuron0x2e74400()*-0.0286808);
}

double NNfunction_ss_dLuR::synapse0x2e852f0() {
   return (neuron0x2e74740()*0.326579);
}

double NNfunction_ss_dLuR::synapse0x2e85330() {
   return (neuron0x2e74a80()*-0.118072);
}

double NNfunction_ss_dLuR::synapse0x2e85370() {
   return (neuron0x2e74dc0()*-0.254855);
}

double NNfunction_ss_dLuR::synapse0x2e853b0() {
   return (neuron0x2e75100()*-0.600108);
}

double NNfunction_ss_dLuR::synapse0x2e853f0() {
   return (neuron0x2e75440()*-0.298051);
}

double NNfunction_ss_dLuR::synapse0x2e84e80() {
   return (neuron0x2e75780()*-0.290504);
}

double NNfunction_ss_dLuR::synapse0x2e84ec0() {
   return (neuron0x2e75ce0()*-0.0965435);
}

double NNfunction_ss_dLuR::synapse0x2e85540() {
   return (neuron0x2e75f00()*-0.182709);
}

double NNfunction_ss_dLuR::synapse0x2e85580() {
   return (neuron0x2e76240()*0.466449);
}

double NNfunction_ss_dLuR::synapse0x2e855c0() {
   return (neuron0x2e76580()*-0.278225);
}

double NNfunction_ss_dLuR::synapse0x2e85600() {
   return (neuron0x2e768c0()*0.00339204);
}

double NNfunction_ss_dLuR::synapse0x2e85640() {
   return (neuron0x2e76c00()*0.164529);
}

double NNfunction_ss_dLuR::synapse0x2e85680() {
   return (neuron0x2e76f40()*-0.117124);
}

double NNfunction_ss_dLuR::synapse0x2e85a00() {
   return (neuron0x2e72410()*-0.00213585);
}

double NNfunction_ss_dLuR::synapse0x2e85a40() {
   return (neuron0x2e726c0()*0.315524);
}

double NNfunction_ss_dLuR::synapse0x2e85a80() {
   return (neuron0x2e72a00()*-0.498486);
}

double NNfunction_ss_dLuR::synapse0x2e85ac0() {
   return (neuron0x2e72d40()*-0.613133);
}

double NNfunction_ss_dLuR::synapse0x2e85b00() {
   return (neuron0x2e73080()*0.0180659);
}

double NNfunction_ss_dLuR::synapse0x2e85b40() {
   return (neuron0x2e733c0()*-0.385252);
}

double NNfunction_ss_dLuR::synapse0x2e85b80() {
   return (neuron0x2e73700()*-0.358322);
}

double NNfunction_ss_dLuR::synapse0x2e85bc0() {
   return (neuron0x2e73a40()*-0.165608);
}

double NNfunction_ss_dLuR::synapse0x2e85c00() {
   return (neuron0x2e73d80()*0.912086);
}

double NNfunction_ss_dLuR::synapse0x2e7ddc0() {
   return (neuron0x2e740c0()*0.169017);
}

double NNfunction_ss_dLuR::synapse0x2e7de00() {
   return (neuron0x2e74400()*0.284539);
}

double NNfunction_ss_dLuR::synapse0x2e7de40() {
   return (neuron0x2e74740()*-1.19452);
}

double NNfunction_ss_dLuR::synapse0x2e7de80() {
   return (neuron0x2e74a80()*0.605219);
}

double NNfunction_ss_dLuR::synapse0x2e7dec0() {
   return (neuron0x2e74dc0()*0.0197817);
}

double NNfunction_ss_dLuR::synapse0x2e7df00() {
   return (neuron0x2e75100()*-0.350702);
}

double NNfunction_ss_dLuR::synapse0x2e7df40() {
   return (neuron0x2e75440()*0.360775);
}

double NNfunction_ss_dLuR::synapse0x2e85850() {
   return (neuron0x2e75780()*0.057212);
}

double NNfunction_ss_dLuR::synapse0x2e85890() {
   return (neuron0x2e75ce0()*0.380311);
}

double NNfunction_ss_dLuR::synapse0x2e7e090() {
   return (neuron0x2e75f00()*0.491588);
}

double NNfunction_ss_dLuR::synapse0x2e7e0d0() {
   return (neuron0x2e76240()*-0.136537);
}

double NNfunction_ss_dLuR::synapse0x2e7e110() {
   return (neuron0x2e76580()*-0.386045);
}

double NNfunction_ss_dLuR::synapse0x2e7e150() {
   return (neuron0x2e768c0()*0.186544);
}

double NNfunction_ss_dLuR::synapse0x2e7e190() {
   return (neuron0x2e76c00()*0.00591197);
}

double NNfunction_ss_dLuR::synapse0x2e7e1d0() {
   return (neuron0x2e76f40()*0.14254);
}

double NNfunction_ss_dLuR::synapse0x2e7e550() {
   return (neuron0x2e72410()*0.189002);
}

double NNfunction_ss_dLuR::synapse0x2e7e590() {
   return (neuron0x2e726c0()*-0.734795);
}

double NNfunction_ss_dLuR::synapse0x2e7e5d0() {
   return (neuron0x2e72a00()*1.21206);
}

double NNfunction_ss_dLuR::synapse0x2e7e610() {
   return (neuron0x2e72d40()*0.514959);
}

double NNfunction_ss_dLuR::synapse0x2e7e650() {
   return (neuron0x2e73080()*-0.00334618);
}

double NNfunction_ss_dLuR::synapse0x2e7e690() {
   return (neuron0x2e733c0()*0.424644);
}

double NNfunction_ss_dLuR::synapse0x2e7e6d0() {
   return (neuron0x2e73700()*0.152619);
}

double NNfunction_ss_dLuR::synapse0x2e7e710() {
   return (neuron0x2e73a40()*0.367222);
}

double NNfunction_ss_dLuR::synapse0x2e7e750() {
   return (neuron0x2e73d80()*-0.579196);
}

double NNfunction_ss_dLuR::synapse0x2e7e790() {
   return (neuron0x2e740c0()*0.287827);
}

double NNfunction_ss_dLuR::synapse0x2e7e7d0() {
   return (neuron0x2e74400()*0.382241);
}

double NNfunction_ss_dLuR::synapse0x2e7e810() {
   return (neuron0x2e74740()*0.20627);
}

double NNfunction_ss_dLuR::synapse0x2e7e850() {
   return (neuron0x2e74a80()*-0.572508);
}

double NNfunction_ss_dLuR::synapse0x2e7e890() {
   return (neuron0x2e74dc0()*0.342818);
}

double NNfunction_ss_dLuR::synapse0x2e7e8d0() {
   return (neuron0x2e75100()*-0.738983);
}

double NNfunction_ss_dLuR::synapse0x2e7e910() {
   return (neuron0x2e75440()*-0.511193);
}

double NNfunction_ss_dLuR::synapse0x2e7e3a0() {
   return (neuron0x2e75780()*-0.128407);
}

double NNfunction_ss_dLuR::synapse0x2e7e3e0() {
   return (neuron0x2e75ce0()*-0.304229);
}

double NNfunction_ss_dLuR::synapse0x2e7ea60() {
   return (neuron0x2e75f00()*-1.29668);
}

double NNfunction_ss_dLuR::synapse0x2e7eaa0() {
   return (neuron0x2e76240()*0.547591);
}

double NNfunction_ss_dLuR::synapse0x2e7eae0() {
   return (neuron0x2e76580()*-0.0388929);
}

double NNfunction_ss_dLuR::synapse0x2e7eb20() {
   return (neuron0x2e768c0()*-0.217572);
}

double NNfunction_ss_dLuR::synapse0x2e7eb60() {
   return (neuron0x2e76c00()*0.136696);
}

double NNfunction_ss_dLuR::synapse0x2e7eba0() {
   return (neuron0x2e76f40()*-0.243986);
}

double NNfunction_ss_dLuR::synapse0x2e7ed70() {
   return (neuron0x2e72410()*0.00736838);
}

double NNfunction_ss_dLuR::synapse0x2e87e00() {
   return (neuron0x2e726c0()*0.173426);
}

double NNfunction_ss_dLuR::synapse0x2e87e40() {
   return (neuron0x2e72a00()*0.215162);
}

double NNfunction_ss_dLuR::synapse0x2e87e80() {
   return (neuron0x2e72d40()*-0.579767);
}

double NNfunction_ss_dLuR::synapse0x2e87ec0() {
   return (neuron0x2e73080()*-0.00751821);
}

double NNfunction_ss_dLuR::synapse0x2e87f00() {
   return (neuron0x2e733c0()*-0.952562);
}

double NNfunction_ss_dLuR::synapse0x2e87f40() {
   return (neuron0x2e73700()*0.118516);
}

double NNfunction_ss_dLuR::synapse0x2e87f80() {
   return (neuron0x2e73a40()*-0.0760556);
}

double NNfunction_ss_dLuR::synapse0x2e87fc0() {
   return (neuron0x2e73d80()*1.34416);
}

double NNfunction_ss_dLuR::synapse0x2e88000() {
   return (neuron0x2e740c0()*-0.122098);
}

double NNfunction_ss_dLuR::synapse0x2e88040() {
   return (neuron0x2e74400()*-0.217986);
}

double NNfunction_ss_dLuR::synapse0x2e88080() {
   return (neuron0x2e74740()*0.18629);
}

double NNfunction_ss_dLuR::synapse0x2e880c0() {
   return (neuron0x2e74a80()*0.210849);
}

double NNfunction_ss_dLuR::synapse0x2e88100() {
   return (neuron0x2e74dc0()*-0.00825898);
}

double NNfunction_ss_dLuR::synapse0x2e88140() {
   return (neuron0x2e75100()*0.00466421);
}

double NNfunction_ss_dLuR::synapse0x2e88180() {
   return (neuron0x2e75440()*0.487059);
}

double NNfunction_ss_dLuR::synapse0x2e87c50() {
   return (neuron0x2e75780()*-0.277295);
}

double NNfunction_ss_dLuR::synapse0x2e87c90() {
   return (neuron0x2e75ce0()*-1.95312);
}

double NNfunction_ss_dLuR::synapse0x2e882d0() {
   return (neuron0x2e75f00()*-0.0471598);
}

double NNfunction_ss_dLuR::synapse0x2e88310() {
   return (neuron0x2e76240()*0.77498);
}

double NNfunction_ss_dLuR::synapse0x2e88350() {
   return (neuron0x2e76580()*-0.106235);
}

double NNfunction_ss_dLuR::synapse0x2e88390() {
   return (neuron0x2e768c0()*-0.0728025);
}

double NNfunction_ss_dLuR::synapse0x2e883d0() {
   return (neuron0x2e76c00()*0.258782);
}

double NNfunction_ss_dLuR::synapse0x2e88410() {
   return (neuron0x2e76f40()*0.0157245);
}

double NNfunction_ss_dLuR::synapse0x2e88790() {
   return (neuron0x2e72410()*-0.0270874);
}

double NNfunction_ss_dLuR::synapse0x2e887d0() {
   return (neuron0x2e726c0()*0.0818061);
}

double NNfunction_ss_dLuR::synapse0x2e88810() {
   return (neuron0x2e72a00()*0.0685221);
}

double NNfunction_ss_dLuR::synapse0x2e88850() {
   return (neuron0x2e72d40()*0.0517722);
}

double NNfunction_ss_dLuR::synapse0x2e88890() {
   return (neuron0x2e73080()*0.0345305);
}

double NNfunction_ss_dLuR::synapse0x2e888d0() {
   return (neuron0x2e733c0()*-0.0748691);
}

double NNfunction_ss_dLuR::synapse0x2e88910() {
   return (neuron0x2e73700()*0.10424);
}

double NNfunction_ss_dLuR::synapse0x2e88950() {
   return (neuron0x2e73a40()*0.380768);
}

double NNfunction_ss_dLuR::synapse0x2e88990() {
   return (neuron0x2e73d80()*-0.143282);
}

double NNfunction_ss_dLuR::synapse0x2e889d0() {
   return (neuron0x2e740c0()*0.0423573);
}

double NNfunction_ss_dLuR::synapse0x2e88a10() {
   return (neuron0x2e74400()*0.00838052);
}

double NNfunction_ss_dLuR::synapse0x2e88a50() {
   return (neuron0x2e74740()*0.107805);
}

double NNfunction_ss_dLuR::synapse0x2e88a90() {
   return (neuron0x2e74a80()*0.0992804);
}

double NNfunction_ss_dLuR::synapse0x2e88ad0() {
   return (neuron0x2e74dc0()*0.0148262);
}

double NNfunction_ss_dLuR::synapse0x2e88b10() {
   return (neuron0x2e75100()*1.13157);
}

double NNfunction_ss_dLuR::synapse0x2e88b50() {
   return (neuron0x2e75440()*0.164772);
}

double NNfunction_ss_dLuR::synapse0x2e885e0() {
   return (neuron0x2e75780()*0.0464625);
}

double NNfunction_ss_dLuR::synapse0x2e88620() {
   return (neuron0x2e75ce0()*0.111551);
}

double NNfunction_ss_dLuR::synapse0x2e88ca0() {
   return (neuron0x2e75f00()*0.163703);
}

double NNfunction_ss_dLuR::synapse0x2e88ce0() {
   return (neuron0x2e76240()*-0.0620241);
}

double NNfunction_ss_dLuR::synapse0x2e88d20() {
   return (neuron0x2e76580()*-0.176676);
}

double NNfunction_ss_dLuR::synapse0x2e88d60() {
   return (neuron0x2e768c0()*0.135781);
}

double NNfunction_ss_dLuR::synapse0x2e88da0() {
   return (neuron0x2e76c00()*0.21144);
}

double NNfunction_ss_dLuR::synapse0x2e88de0() {
   return (neuron0x2e76f40()*0.175521);
}

double NNfunction_ss_dLuR::synapse0x2e89160() {
   return (neuron0x2e72410()*0.368018);
}

double NNfunction_ss_dLuR::synapse0x2e891a0() {
   return (neuron0x2e726c0()*0.444533);
}

double NNfunction_ss_dLuR::synapse0x2e891e0() {
   return (neuron0x2e72a00()*-0.133941);
}

double NNfunction_ss_dLuR::synapse0x2e89220() {
   return (neuron0x2e72d40()*-0.489785);
}

double NNfunction_ss_dLuR::synapse0x2e89260() {
   return (neuron0x2e73080()*0.146303);
}

double NNfunction_ss_dLuR::synapse0x2e892a0() {
   return (neuron0x2e733c0()*-0.537734);
}

double NNfunction_ss_dLuR::synapse0x2e892e0() {
   return (neuron0x2e73700()*0.0915291);
}

double NNfunction_ss_dLuR::synapse0x2e89320() {
   return (neuron0x2e73a40()*-0.703837);
}

double NNfunction_ss_dLuR::synapse0x2e89360() {
   return (neuron0x2e73d80()*0.549179);
}

double NNfunction_ss_dLuR::synapse0x2e893a0() {
   return (neuron0x2e740c0()*0.196898);
}

double NNfunction_ss_dLuR::synapse0x2e893e0() {
   return (neuron0x2e74400()*0.561819);
}

double NNfunction_ss_dLuR::synapse0x2e89420() {
   return (neuron0x2e74740()*-0.391717);
}

double NNfunction_ss_dLuR::synapse0x2e89460() {
   return (neuron0x2e74a80()*0.666525);
}

double NNfunction_ss_dLuR::synapse0x2e894a0() {
   return (neuron0x2e74dc0()*0.135397);
}

double NNfunction_ss_dLuR::synapse0x2e894e0() {
   return (neuron0x2e75100()*-0.218496);
}

double NNfunction_ss_dLuR::synapse0x2e89520() {
   return (neuron0x2e75440()*0.0254707);
}

double NNfunction_ss_dLuR::synapse0x2e88fb0() {
   return (neuron0x2e75780()*0.401886);
}

double NNfunction_ss_dLuR::synapse0x2e88ff0() {
   return (neuron0x2e75ce0()*-0.409078);
}

double NNfunction_ss_dLuR::synapse0x2e89670() {
   return (neuron0x2e75f00()*0.75045);
}

double NNfunction_ss_dLuR::synapse0x2e896b0() {
   return (neuron0x2e76240()*0.952306);
}

double NNfunction_ss_dLuR::synapse0x2e896f0() {
   return (neuron0x2e76580()*-0.0585523);
}

double NNfunction_ss_dLuR::synapse0x2e89730() {
   return (neuron0x2e768c0()*0.262452);
}

double NNfunction_ss_dLuR::synapse0x2e89770() {
   return (neuron0x2e76c00()*-0.537385);
}

double NNfunction_ss_dLuR::synapse0x2e897b0() {
   return (neuron0x2e76f40()*0.433108);
}

double NNfunction_ss_dLuR::synapse0x2e89b30() {
   return (neuron0x2e72410()*-0.319561);
}

double NNfunction_ss_dLuR::synapse0x2e89b70() {
   return (neuron0x2e726c0()*-0.120722);
}

double NNfunction_ss_dLuR::synapse0x2e89bb0() {
   return (neuron0x2e72a00()*-0.135224);
}

double NNfunction_ss_dLuR::synapse0x2e89bf0() {
   return (neuron0x2e72d40()*0.008364);
}

double NNfunction_ss_dLuR::synapse0x2e89c30() {
   return (neuron0x2e73080()*0.129711);
}

double NNfunction_ss_dLuR::synapse0x2e89c70() {
   return (neuron0x2e733c0()*0.229393);
}

double NNfunction_ss_dLuR::synapse0x2e89cb0() {
   return (neuron0x2e73700()*-0.0886272);
}

double NNfunction_ss_dLuR::synapse0x2e89cf0() {
   return (neuron0x2e73a40()*-0.27578);
}

double NNfunction_ss_dLuR::synapse0x2e89d30() {
   return (neuron0x2e73d80()*0.275264);
}

double NNfunction_ss_dLuR::synapse0x2e89d70() {
   return (neuron0x2e740c0()*-0.0686557);
}

double NNfunction_ss_dLuR::synapse0x2e89db0() {
   return (neuron0x2e74400()*-0.226646);
}

double NNfunction_ss_dLuR::synapse0x2e89df0() {
   return (neuron0x2e74740()*-0.754533);
}

double NNfunction_ss_dLuR::synapse0x2e89e30() {
   return (neuron0x2e74a80()*-0.131783);
}

double NNfunction_ss_dLuR::synapse0x2e89e70() {
   return (neuron0x2e74dc0()*-0.0871863);
}

double NNfunction_ss_dLuR::synapse0x2e89eb0() {
   return (neuron0x2e75100()*-0.598834);
}

double NNfunction_ss_dLuR::synapse0x2e89ef0() {
   return (neuron0x2e75440()*0.416529);
}

double NNfunction_ss_dLuR::synapse0x2e89980() {
   return (neuron0x2e75780()*0.268959);
}

double NNfunction_ss_dLuR::synapse0x2e899c0() {
   return (neuron0x2e75ce0()*0.0628826);
}

double NNfunction_ss_dLuR::synapse0x2e8a040() {
   return (neuron0x2e75f00()*-0.462771);
}

double NNfunction_ss_dLuR::synapse0x2e8a080() {
   return (neuron0x2e76240()*-0.00707865);
}

double NNfunction_ss_dLuR::synapse0x2e8a0c0() {
   return (neuron0x2e76580()*0.209547);
}

double NNfunction_ss_dLuR::synapse0x2e8a100() {
   return (neuron0x2e768c0()*0.132186);
}

double NNfunction_ss_dLuR::synapse0x2e8a140() {
   return (neuron0x2e76c00()*-0.0147635);
}

double NNfunction_ss_dLuR::synapse0x2e8a180() {
   return (neuron0x2e76f40()*-0.108343);
}

double NNfunction_ss_dLuR::synapse0x2e8a500() {
   return (neuron0x2e72410()*-0.11212);
}

double NNfunction_ss_dLuR::synapse0x2e8a540() {
   return (neuron0x2e726c0()*0.219362);
}

double NNfunction_ss_dLuR::synapse0x2e8a580() {
   return (neuron0x2e72a00()*-0.465194);
}

double NNfunction_ss_dLuR::synapse0x2e8a5c0() {
   return (neuron0x2e72d40()*-1.26118);
}

double NNfunction_ss_dLuR::synapse0x2e8a600() {
   return (neuron0x2e73080()*-0.721806);
}

double NNfunction_ss_dLuR::synapse0x2e8a640() {
   return (neuron0x2e733c0()*0.488933);
}

double NNfunction_ss_dLuR::synapse0x2e8a680() {
   return (neuron0x2e73700()*-0.908101);
}

double NNfunction_ss_dLuR::synapse0x2e8a6c0() {
   return (neuron0x2e73a40()*0.480496);
}

double NNfunction_ss_dLuR::synapse0x2e8a700() {
   return (neuron0x2e73d80()*0.108029);
}

double NNfunction_ss_dLuR::synapse0x2e8a740() {
   return (neuron0x2e740c0()*-0.235292);
}

double NNfunction_ss_dLuR::synapse0x2e8a780() {
   return (neuron0x2e74400()*0.633593);
}

double NNfunction_ss_dLuR::synapse0x2e8a7c0() {
   return (neuron0x2e74740()*0.132776);
}

double NNfunction_ss_dLuR::synapse0x2e8a800() {
   return (neuron0x2e74a80()*1.2659);
}

double NNfunction_ss_dLuR::synapse0x2e8a840() {
   return (neuron0x2e74dc0()*0.642918);
}

double NNfunction_ss_dLuR::synapse0x2e8a880() {
   return (neuron0x2e75100()*-1.19339);
}

double NNfunction_ss_dLuR::synapse0x2e8a8c0() {
   return (neuron0x2e75440()*1.00397);
}

double NNfunction_ss_dLuR::synapse0x2e8a350() {
   return (neuron0x2e75780()*-0.817365);
}

double NNfunction_ss_dLuR::synapse0x2e8a390() {
   return (neuron0x2e75ce0()*-0.230343);
}

double NNfunction_ss_dLuR::synapse0x2e8aa10() {
   return (neuron0x2e75f00()*1.16919);
}

double NNfunction_ss_dLuR::synapse0x2e8aa50() {
   return (neuron0x2e76240()*-0.615572);
}

double NNfunction_ss_dLuR::synapse0x2e8aa90() {
   return (neuron0x2e76580()*-0.322666);
}

double NNfunction_ss_dLuR::synapse0x2e8aad0() {
   return (neuron0x2e768c0()*0.105648);
}

double NNfunction_ss_dLuR::synapse0x2e8ab10() {
   return (neuron0x2e76c00()*0.385638);
}

double NNfunction_ss_dLuR::synapse0x2e8ab50() {
   return (neuron0x2e76f40()*0.0782307);
}

double NNfunction_ss_dLuR::synapse0x2e8aed0() {
   return (neuron0x2e72410()*0.0738563);
}

double NNfunction_ss_dLuR::synapse0x2e8af10() {
   return (neuron0x2e726c0()*-0.208976);
}

double NNfunction_ss_dLuR::synapse0x2e8af50() {
   return (neuron0x2e72a00()*0.0673326);
}

double NNfunction_ss_dLuR::synapse0x2e8af90() {
   return (neuron0x2e72d40()*0.435605);
}

double NNfunction_ss_dLuR::synapse0x2e8afd0() {
   return (neuron0x2e73080()*0.00231447);
}

double NNfunction_ss_dLuR::synapse0x2e8b010() {
   return (neuron0x2e733c0()*-0.185737);
}

double NNfunction_ss_dLuR::synapse0x2e8b050() {
   return (neuron0x2e73700()*0.00563338);
}

double NNfunction_ss_dLuR::synapse0x2e8b090() {
   return (neuron0x2e73a40()*0.242686);
}

double NNfunction_ss_dLuR::synapse0x2e8b0d0() {
   return (neuron0x2e73d80()*0.310967);
}

double NNfunction_ss_dLuR::synapse0x2e8b110() {
   return (neuron0x2e740c0()*-0.53868);
}

double NNfunction_ss_dLuR::synapse0x2e8b150() {
   return (neuron0x2e74400()*-0.213048);
}

double NNfunction_ss_dLuR::synapse0x2e8b190() {
   return (neuron0x2e74740()*-0.0642336);
}

double NNfunction_ss_dLuR::synapse0x2e8b1d0() {
   return (neuron0x2e74a80()*0.392034);
}

double NNfunction_ss_dLuR::synapse0x2e8b210() {
   return (neuron0x2e74dc0()*-0.312854);
}

double NNfunction_ss_dLuR::synapse0x2e8b250() {
   return (neuron0x2e75100()*0.680696);
}

double NNfunction_ss_dLuR::synapse0x2e8b290() {
   return (neuron0x2e75440()*0.0466104);
}

double NNfunction_ss_dLuR::synapse0x2e8ad20() {
   return (neuron0x2e75780()*-0.470767);
}

double NNfunction_ss_dLuR::synapse0x2e8ad60() {
   return (neuron0x2e75ce0()*0.153467);
}

double NNfunction_ss_dLuR::synapse0x2e8b3e0() {
   return (neuron0x2e75f00()*-0.269061);
}

double NNfunction_ss_dLuR::synapse0x2e8b420() {
   return (neuron0x2e76240()*0.00308866);
}

double NNfunction_ss_dLuR::synapse0x2e8b460() {
   return (neuron0x2e76580()*0.00937034);
}

double NNfunction_ss_dLuR::synapse0x2e8b4a0() {
   return (neuron0x2e768c0()*0.301295);
}

double NNfunction_ss_dLuR::synapse0x2e8b4e0() {
   return (neuron0x2e76c00()*-0.159802);
}

double NNfunction_ss_dLuR::synapse0x2e8b520() {
   return (neuron0x2e76f40()*0.098043);
}

double NNfunction_ss_dLuR::synapse0x2e8b8a0() {
   return (neuron0x2e72410()*-0.19703);
}

double NNfunction_ss_dLuR::synapse0x2e8b8e0() {
   return (neuron0x2e726c0()*-0.636954);
}

double NNfunction_ss_dLuR::synapse0x2e8b920() {
   return (neuron0x2e72a00()*-0.141961);
}

double NNfunction_ss_dLuR::synapse0x2e8b960() {
   return (neuron0x2e72d40()*1.1399);
}

double NNfunction_ss_dLuR::synapse0x2e8b9a0() {
   return (neuron0x2e73080()*-0.652661);
}

double NNfunction_ss_dLuR::synapse0x2e8b9e0() {
   return (neuron0x2e733c0()*0.351995);
}

double NNfunction_ss_dLuR::synapse0x2e8ba20() {
   return (neuron0x2e73700()*0.391565);
}

double NNfunction_ss_dLuR::synapse0x2e8ba60() {
   return (neuron0x2e73a40()*-0.285866);
}

double NNfunction_ss_dLuR::synapse0x2e8baa0() {
   return (neuron0x2e73d80()*-0.851736);
}

double NNfunction_ss_dLuR::synapse0x2e8bae0() {
   return (neuron0x2e740c0()*-0.344011);
}

double NNfunction_ss_dLuR::synapse0x2e8bb20() {
   return (neuron0x2e74400()*0.146134);
}

double NNfunction_ss_dLuR::synapse0x2e8bb60() {
   return (neuron0x2e74740()*-1.04322);
}

double NNfunction_ss_dLuR::synapse0x2e8bba0() {
   return (neuron0x2e74a80()*0.371218);
}

double NNfunction_ss_dLuR::synapse0x2e8bbe0() {
   return (neuron0x2e74dc0()*0.581832);
}

double NNfunction_ss_dLuR::synapse0x2e8bc20() {
   return (neuron0x2e75100()*-0.952921);
}

double NNfunction_ss_dLuR::synapse0x2e8bc60() {
   return (neuron0x2e75440()*0.282419);
}

double NNfunction_ss_dLuR::synapse0x2e8b6f0() {
   return (neuron0x2e75780()*-0.425141);
}

double NNfunction_ss_dLuR::synapse0x2e8b730() {
   return (neuron0x2e75ce0()*-0.23955);
}

double NNfunction_ss_dLuR::synapse0x2e8bdb0() {
   return (neuron0x2e75f00()*0.902394);
}

double NNfunction_ss_dLuR::synapse0x2e8bdf0() {
   return (neuron0x2e76240()*0.615147);
}

double NNfunction_ss_dLuR::synapse0x2e8be30() {
   return (neuron0x2e76580()*-0.237244);
}

double NNfunction_ss_dLuR::synapse0x2e8be70() {
   return (neuron0x2e768c0()*-0.00280935);
}

double NNfunction_ss_dLuR::synapse0x2e8beb0() {
   return (neuron0x2e76c00()*0.0533151);
}

double NNfunction_ss_dLuR::synapse0x2e8bef0() {
   return (neuron0x2e76f40()*0.0413773);
}

double NNfunction_ss_dLuR::synapse0x2e8c270() {
   return (neuron0x2e72410()*0.124495);
}

double NNfunction_ss_dLuR::synapse0x2e8c2b0() {
   return (neuron0x2e726c0()*0.0606538);
}

double NNfunction_ss_dLuR::synapse0x2e8c2f0() {
   return (neuron0x2e72a00()*-0.275942);
}

double NNfunction_ss_dLuR::synapse0x2e8c330() {
   return (neuron0x2e72d40()*-0.154732);
}

double NNfunction_ss_dLuR::synapse0x2e8c370() {
   return (neuron0x2e73080()*0.201897);
}

double NNfunction_ss_dLuR::synapse0x2e8c3b0() {
   return (neuron0x2e733c0()*-0.0814595);
}

double NNfunction_ss_dLuR::synapse0x2e8c3f0() {
   return (neuron0x2e73700()*-0.207061);
}

double NNfunction_ss_dLuR::synapse0x2e8c430() {
   return (neuron0x2e73a40()*0.0528807);
}

double NNfunction_ss_dLuR::synapse0x2e8c470() {
   return (neuron0x2e73d80()*0.147163);
}

double NNfunction_ss_dLuR::synapse0x2e8c4b0() {
   return (neuron0x2e740c0()*0.137788);
}

double NNfunction_ss_dLuR::synapse0x2e8c4f0() {
   return (neuron0x2e74400()*-0.119097);
}

double NNfunction_ss_dLuR::synapse0x2e8c530() {
   return (neuron0x2e74740()*0.561077);
}

double NNfunction_ss_dLuR::synapse0x2e8c570() {
   return (neuron0x2e74a80()*-0.633868);
}

double NNfunction_ss_dLuR::synapse0x2e8c5b0() {
   return (neuron0x2e74dc0()*-0.158998);
}

double NNfunction_ss_dLuR::synapse0x2e8c5f0() {
   return (neuron0x2e75100()*-0.47778);
}

double NNfunction_ss_dLuR::synapse0x2e8c630() {
   return (neuron0x2e75440()*-0.5658);
}

double NNfunction_ss_dLuR::synapse0x2e8c0c0() {
   return (neuron0x2e75780()*-0.127472);
}

double NNfunction_ss_dLuR::synapse0x2e8c100() {
   return (neuron0x2e75ce0()*-0.0266655);
}

double NNfunction_ss_dLuR::synapse0x2e8c780() {
   return (neuron0x2e75f00()*-0.131469);
}

double NNfunction_ss_dLuR::synapse0x2e8c7c0() {
   return (neuron0x2e76240()*-0.353299);
}

double NNfunction_ss_dLuR::synapse0x2e8c800() {
   return (neuron0x2e76580()*0.146432);
}

double NNfunction_ss_dLuR::synapse0x2e8c840() {
   return (neuron0x2e768c0()*0.0156267);
}

double NNfunction_ss_dLuR::synapse0x2e8c880() {
   return (neuron0x2e76c00()*-0.189806);
}

double NNfunction_ss_dLuR::synapse0x2e8c8c0() {
   return (neuron0x2e76f40()*0.142392);
}

double NNfunction_ss_dLuR::synapse0x2e8cc40() {
   return (neuron0x2e72410()*0.0159183);
}

double NNfunction_ss_dLuR::synapse0x2e81210() {
   return (neuron0x2e726c0()*0.0260241);
}

double NNfunction_ss_dLuR::synapse0x2e81250() {
   return (neuron0x2e72a00()*0.0120151);
}

double NNfunction_ss_dLuR::synapse0x2e81290() {
   return (neuron0x2e72d40()*-0.229334);
}

double NNfunction_ss_dLuR::synapse0x2e814e0() {
   return (neuron0x2e73080()*0.0931135);
}

double NNfunction_ss_dLuR::synapse0x2e81520() {
   return (neuron0x2e733c0()*-0.0515568);
}

double NNfunction_ss_dLuR::synapse0x2e81560() {
   return (neuron0x2e73700()*0.0714931);
}

double NNfunction_ss_dLuR::synapse0x2e817b0() {
   return (neuron0x2e73a40()*0.0597305);
}

double NNfunction_ss_dLuR::synapse0x2e817f0() {
   return (neuron0x2e73d80()*0.0155902);
}

double NNfunction_ss_dLuR::synapse0x2e81a40() {
   return (neuron0x2e740c0()*-0.00348833);
}

double NNfunction_ss_dLuR::synapse0x2e81a80() {
   return (neuron0x2e74400()*-0.0441582);
}

double NNfunction_ss_dLuR::synapse0x2e81ac0() {
   return (neuron0x2e74740()*0.670219);
}

double NNfunction_ss_dLuR::synapse0x2e81d10() {
   return (neuron0x2e74a80()*0.0264207);
}

double NNfunction_ss_dLuR::synapse0x2e81d50() {
   return (neuron0x2e74dc0()*-0.0257625);
}

double NNfunction_ss_dLuR::synapse0x2e81fa0() {
   return (neuron0x2e75100()*0.663938);
}

double NNfunction_ss_dLuR::synapse0x2e81fe0() {
   return (neuron0x2e75440()*-0.0099779);
}

double NNfunction_ss_dLuR::synapse0x2e8ca90() {
   return (neuron0x2e75780()*-0.0235661);
}

double NNfunction_ss_dLuR::synapse0x2e8cad0() {
   return (neuron0x2e75ce0()*0.0758958);
}

double NNfunction_ss_dLuR::synapse0x2e82130() {
   return (neuron0x2e75f00()*0.0094118);
}

double NNfunction_ss_dLuR::synapse0x2e82640() {
   return (neuron0x2e76240()*0.0173477);
}

double NNfunction_ss_dLuR::synapse0x2e82680() {
   return (neuron0x2e76580()*-0.000203896);
}

double NNfunction_ss_dLuR::synapse0x2e826c0() {
   return (neuron0x2e768c0()*0.01493);
}

double NNfunction_ss_dLuR::synapse0x2e82910() {
   return (neuron0x2e76c00()*0.0201725);
}

double NNfunction_ss_dLuR::synapse0x2e82950() {
   return (neuron0x2e76f40()*-0.0018002);
}

double NNfunction_ss_dLuR::synapse0x2e82200() {
   return (neuron0x2e72410()*0.00904246);
}

double NNfunction_ss_dLuR::synapse0x2e82240() {
   return (neuron0x2e726c0()*0.102721);
}

double NNfunction_ss_dLuR::synapse0x2e82280() {
   return (neuron0x2e72a00()*0.448341);
}

double NNfunction_ss_dLuR::synapse0x2e822c0() {
   return (neuron0x2e72d40()*0.370698);
}

double NNfunction_ss_dLuR::synapse0x2e82c40() {
   return (neuron0x2e73080()*0.237034);
}

double NNfunction_ss_dLuR::synapse0x2e8ef90() {
   return (neuron0x2e733c0()*0.366993);
}

double NNfunction_ss_dLuR::synapse0x2e8efd0() {
   return (neuron0x2e73700()*-0.105312);
}

double NNfunction_ss_dLuR::synapse0x2e8f010() {
   return (neuron0x2e73a40()*-0.302872);
}

double NNfunction_ss_dLuR::synapse0x2e8f050() {
   return (neuron0x2e73d80()*-0.672364);
}

double NNfunction_ss_dLuR::synapse0x2e8f090() {
   return (neuron0x2e740c0()*0.660425);
}

double NNfunction_ss_dLuR::synapse0x2e8f0d0() {
   return (neuron0x2e74400()*-0.275949);
}

double NNfunction_ss_dLuR::synapse0x2e8f110() {
   return (neuron0x2e74740()*-0.944353);
}

double NNfunction_ss_dLuR::synapse0x2e8f150() {
   return (neuron0x2e74a80()*-0.882124);
}

double NNfunction_ss_dLuR::synapse0x2e8f190() {
   return (neuron0x2e74dc0()*-0.650689);
}

double NNfunction_ss_dLuR::synapse0x2e8f1d0() {
   return (neuron0x2e75100()*0.0305096);
}

double NNfunction_ss_dLuR::synapse0x2e8f210() {
   return (neuron0x2e75440()*-0.473524);
}

double NNfunction_ss_dLuR::synapse0x2e82b20() {
   return (neuron0x2e75780()*-0.414731);
}

double NNfunction_ss_dLuR::synapse0x2e82b60() {
   return (neuron0x2e75ce0()*0.343167);
}

double NNfunction_ss_dLuR::synapse0x2e8f360() {
   return (neuron0x2e75f00()*1.31874);
}

double NNfunction_ss_dLuR::synapse0x2e8f3a0() {
   return (neuron0x2e76240()*0.218026);
}

double NNfunction_ss_dLuR::synapse0x2e8f3e0() {
   return (neuron0x2e76580()*0.334622);
}

double NNfunction_ss_dLuR::synapse0x2e8f420() {
   return (neuron0x2e768c0()*0.16268);
}

double NNfunction_ss_dLuR::synapse0x2e8f460() {
   return (neuron0x2e76c00()*-0.314026);
}

double NNfunction_ss_dLuR::synapse0x2e8f4a0() {
   return (neuron0x2e76f40()*-0.336808);
}

double NNfunction_ss_dLuR::synapse0x2e8f820() {
   return (neuron0x2e72410()*-0.0373035);
}

double NNfunction_ss_dLuR::synapse0x2e8f860() {
   return (neuron0x2e726c0()*-0.0134505);
}

double NNfunction_ss_dLuR::synapse0x2e8f8a0() {
   return (neuron0x2e72a00()*-0.00804019);
}

double NNfunction_ss_dLuR::synapse0x2e8f8e0() {
   return (neuron0x2e72d40()*0.756995);
}

double NNfunction_ss_dLuR::synapse0x2e8f920() {
   return (neuron0x2e73080()*-0.0107272);
}

double NNfunction_ss_dLuR::synapse0x2e8f960() {
   return (neuron0x2e733c0()*0.0836008);
}

double NNfunction_ss_dLuR::synapse0x2e8f9a0() {
   return (neuron0x2e73700()*-0.000887588);
}

double NNfunction_ss_dLuR::synapse0x2e8f9e0() {
   return (neuron0x2e73a40()*-0.0255056);
}

double NNfunction_ss_dLuR::synapse0x2e8fa20() {
   return (neuron0x2e73d80()*0.0311963);
}

double NNfunction_ss_dLuR::synapse0x2e8fa60() {
   return (neuron0x2e740c0()*0.0117296);
}

double NNfunction_ss_dLuR::synapse0x2e8faa0() {
   return (neuron0x2e74400()*-0.0222424);
}

double NNfunction_ss_dLuR::synapse0x2e8fae0() {
   return (neuron0x2e74740()*-0.0700718);
}

double NNfunction_ss_dLuR::synapse0x2e8fb20() {
   return (neuron0x2e74a80()*-0.193889);
}

double NNfunction_ss_dLuR::synapse0x2e8fb60() {
   return (neuron0x2e74dc0()*0.038994);
}

double NNfunction_ss_dLuR::synapse0x2e8fba0() {
   return (neuron0x2e75100()*-0.122502);
}

double NNfunction_ss_dLuR::synapse0x2e8fbe0() {
   return (neuron0x2e75440()*-0.0243131);
}

double NNfunction_ss_dLuR::synapse0x2e8f670() {
   return (neuron0x2e75780()*0.0268304);
}

double NNfunction_ss_dLuR::synapse0x2e8f6b0() {
   return (neuron0x2e75ce0()*-0.153196);
}

double NNfunction_ss_dLuR::synapse0x2e8fd30() {
   return (neuron0x2e75f00()*-0.177522);
}

double NNfunction_ss_dLuR::synapse0x2e8fd70() {
   return (neuron0x2e76240()*-0.028171);
}

double NNfunction_ss_dLuR::synapse0x2e8fdb0() {
   return (neuron0x2e76580()*0.0677672);
}

double NNfunction_ss_dLuR::synapse0x2e8fdf0() {
   return (neuron0x2e768c0()*0.000130446);
}

double NNfunction_ss_dLuR::synapse0x2e8fe30() {
   return (neuron0x2e76c00()*-0.0639307);
}

double NNfunction_ss_dLuR::synapse0x2e8fe70() {
   return (neuron0x2e76f40()*-0.0120734);
}

double NNfunction_ss_dLuR::synapse0x2e901f0() {
   return (neuron0x2e72410()*-0.00422951);
}

double NNfunction_ss_dLuR::synapse0x2e90230() {
   return (neuron0x2e726c0()*0.771129);
}

double NNfunction_ss_dLuR::synapse0x2e90270() {
   return (neuron0x2e72a00()*0.899209);
}

double NNfunction_ss_dLuR::synapse0x2e902b0() {
   return (neuron0x2e72d40()*3.55209);
}

double NNfunction_ss_dLuR::synapse0x2e902f0() {
   return (neuron0x2e73080()*0.080564);
}

double NNfunction_ss_dLuR::synapse0x2e90330() {
   return (neuron0x2e733c0()*-0.00614376);
}

double NNfunction_ss_dLuR::synapse0x2e90370() {
   return (neuron0x2e73700()*-1.37423);
}

double NNfunction_ss_dLuR::synapse0x2e903b0() {
   return (neuron0x2e73a40()*-0.0180908);
}

double NNfunction_ss_dLuR::synapse0x2e903f0() {
   return (neuron0x2e73d80()*-1.97272);
}

double NNfunction_ss_dLuR::synapse0x2e90430() {
   return (neuron0x2e740c0()*0.103902);
}

double NNfunction_ss_dLuR::synapse0x2e90470() {
   return (neuron0x2e74400()*-0.498544);
}

double NNfunction_ss_dLuR::synapse0x2e904b0() {
   return (neuron0x2e74740()*0.960449);
}

double NNfunction_ss_dLuR::synapse0x2e904f0() {
   return (neuron0x2e74a80()*0.421379);
}

double NNfunction_ss_dLuR::synapse0x2e90530() {
   return (neuron0x2e74dc0()*0.173858);
}

double NNfunction_ss_dLuR::synapse0x2e90570() {
   return (neuron0x2e75100()*-0.0439906);
}

double NNfunction_ss_dLuR::synapse0x2e905b0() {
   return (neuron0x2e75440()*-0.332628);
}

double NNfunction_ss_dLuR::synapse0x2e90040() {
   return (neuron0x2e75780()*-0.339178);
}

double NNfunction_ss_dLuR::synapse0x2e90080() {
   return (neuron0x2e75ce0()*0.811329);
}

double NNfunction_ss_dLuR::synapse0x2e90700() {
   return (neuron0x2e75f00()*0.481472);
}

double NNfunction_ss_dLuR::synapse0x2e90740() {
   return (neuron0x2e76240()*0.57025);
}

double NNfunction_ss_dLuR::synapse0x2e90780() {
   return (neuron0x2e76580()*-0.0161654);
}

double NNfunction_ss_dLuR::synapse0x2e907c0() {
   return (neuron0x2e768c0()*-0.543508);
}

double NNfunction_ss_dLuR::synapse0x2e90800() {
   return (neuron0x2e76c00()*0.344325);
}

double NNfunction_ss_dLuR::synapse0x2e90840() {
   return (neuron0x2e76f40()*0.188289);
}

double NNfunction_ss_dLuR::synapse0x2e90bc0() {
   return (neuron0x2e72410()*-0.225069);
}

double NNfunction_ss_dLuR::synapse0x2e90c00() {
   return (neuron0x2e726c0()*0.157036);
}

double NNfunction_ss_dLuR::synapse0x2e90c40() {
   return (neuron0x2e72a00()*-0.36193);
}

double NNfunction_ss_dLuR::synapse0x2e90c80() {
   return (neuron0x2e72d40()*0.634513);
}

double NNfunction_ss_dLuR::synapse0x2e90cc0() {
   return (neuron0x2e73080()*-0.127204);
}

double NNfunction_ss_dLuR::synapse0x2e90d00() {
   return (neuron0x2e733c0()*-0.56386);
}

double NNfunction_ss_dLuR::synapse0x2e90d40() {
   return (neuron0x2e73700()*-0.416241);
}

double NNfunction_ss_dLuR::synapse0x2e90d80() {
   return (neuron0x2e73a40()*-0.0980833);
}

double NNfunction_ss_dLuR::synapse0x2e90dc0() {
   return (neuron0x2e73d80()*0.123618);
}

double NNfunction_ss_dLuR::synapse0x2e90e00() {
   return (neuron0x2e740c0()*-0.212596);
}

double NNfunction_ss_dLuR::synapse0x2e90e40() {
   return (neuron0x2e74400()*-0.240207);
}

double NNfunction_ss_dLuR::synapse0x2e90e80() {
   return (neuron0x2e74740()*1.52823);
}

double NNfunction_ss_dLuR::synapse0x2e90ec0() {
   return (neuron0x2e74a80()*0.317646);
}

double NNfunction_ss_dLuR::synapse0x2e90f00() {
   return (neuron0x2e74dc0()*-0.293122);
}

double NNfunction_ss_dLuR::synapse0x2e90f40() {
   return (neuron0x2e75100()*0.673756);
}

double NNfunction_ss_dLuR::synapse0x2e90f80() {
   return (neuron0x2e75440()*-0.396312);
}

double NNfunction_ss_dLuR::synapse0x2e90a10() {
   return (neuron0x2e75780()*0.52573);
}

double NNfunction_ss_dLuR::synapse0x2e90a50() {
   return (neuron0x2e75ce0()*0.545337);
}

double NNfunction_ss_dLuR::synapse0x2e910d0() {
   return (neuron0x2e75f00()*0.280348);
}

double NNfunction_ss_dLuR::synapse0x2e91110() {
   return (neuron0x2e76240()*0.0968106);
}

double NNfunction_ss_dLuR::synapse0x2e91150() {
   return (neuron0x2e76580()*-0.277851);
}

double NNfunction_ss_dLuR::synapse0x2e91190() {
   return (neuron0x2e768c0()*0.0830748);
}

double NNfunction_ss_dLuR::synapse0x2e911d0() {
   return (neuron0x2e76c00()*-0.0430175);
}

double NNfunction_ss_dLuR::synapse0x2e91210() {
   return (neuron0x2e76f40()*-0.146065);
}

double NNfunction_ss_dLuR::synapse0x2e91590() {
   return (neuron0x2e72410()*0.4142);
}

double NNfunction_ss_dLuR::synapse0x2e915d0() {
   return (neuron0x2e726c0()*0.447069);
}

double NNfunction_ss_dLuR::synapse0x2e91610() {
   return (neuron0x2e72a00()*0.780817);
}

double NNfunction_ss_dLuR::synapse0x2e91650() {
   return (neuron0x2e72d40()*-0.399477);
}

double NNfunction_ss_dLuR::synapse0x2e91690() {
   return (neuron0x2e73080()*0.329753);
}

double NNfunction_ss_dLuR::synapse0x2e916d0() {
   return (neuron0x2e733c0()*-0.551109);
}

double NNfunction_ss_dLuR::synapse0x2e91710() {
   return (neuron0x2e73700()*-0.288156);
}

double NNfunction_ss_dLuR::synapse0x2e91750() {
   return (neuron0x2e73a40()*0.558534);
}

double NNfunction_ss_dLuR::synapse0x2e91790() {
   return (neuron0x2e73d80()*-0.183736);
}

double NNfunction_ss_dLuR::synapse0x2e917d0() {
   return (neuron0x2e740c0()*0.264593);
}

double NNfunction_ss_dLuR::synapse0x2e91810() {
   return (neuron0x2e74400()*0.554614);
}

double NNfunction_ss_dLuR::synapse0x2e91850() {
   return (neuron0x2e74740()*-0.135056);
}

double NNfunction_ss_dLuR::synapse0x2e91890() {
   return (neuron0x2e74a80()*-0.58367);
}

double NNfunction_ss_dLuR::synapse0x2e918d0() {
   return (neuron0x2e74dc0()*-0.0383234);
}

double NNfunction_ss_dLuR::synapse0x2e91910() {
   return (neuron0x2e75100()*0.556779);
}

double NNfunction_ss_dLuR::synapse0x2e91950() {
   return (neuron0x2e75440()*-0.674029);
}

double NNfunction_ss_dLuR::synapse0x2e913e0() {
   return (neuron0x2e75780()*-0.175401);
}

double NNfunction_ss_dLuR::synapse0x2e91420() {
   return (neuron0x2e75ce0()*-0.292148);
}

double NNfunction_ss_dLuR::synapse0x2e91aa0() {
   return (neuron0x2e75f00()*-0.433972);
}

double NNfunction_ss_dLuR::synapse0x2e91ae0() {
   return (neuron0x2e76240()*-0.240926);
}

double NNfunction_ss_dLuR::synapse0x2e91b20() {
   return (neuron0x2e76580()*0.321201);
}

double NNfunction_ss_dLuR::synapse0x2e91b60() {
   return (neuron0x2e768c0()*0.198715);
}

double NNfunction_ss_dLuR::synapse0x2e91ba0() {
   return (neuron0x2e76c00()*-0.0240097);
}

double NNfunction_ss_dLuR::synapse0x2e91be0() {
   return (neuron0x2e76f40()*0.399519);
}

double NNfunction_ss_dLuR::synapse0x2e91f60() {
   return (neuron0x2e72410()*0.070705);
}

double NNfunction_ss_dLuR::synapse0x2e91fa0() {
   return (neuron0x2e726c0()*-0.0181317);
}

double NNfunction_ss_dLuR::synapse0x2e91fe0() {
   return (neuron0x2e72a00()*1.01735);
}

double NNfunction_ss_dLuR::synapse0x2e92020() {
   return (neuron0x2e72d40()*0.157344);
}

double NNfunction_ss_dLuR::synapse0x2e92060() {
   return (neuron0x2e73080()*-0.0440597);
}

double NNfunction_ss_dLuR::synapse0x2e920a0() {
   return (neuron0x2e733c0()*0.0644678);
}

double NNfunction_ss_dLuR::synapse0x2e920e0() {
   return (neuron0x2e73700()*-0.00217928);
}

double NNfunction_ss_dLuR::synapse0x2e92120() {
   return (neuron0x2e73a40()*0.0275088);
}

double NNfunction_ss_dLuR::synapse0x2e92160() {
   return (neuron0x2e73d80()*0.0299);
}

double NNfunction_ss_dLuR::synapse0x2e921a0() {
   return (neuron0x2e740c0()*-0.0412977);
}

double NNfunction_ss_dLuR::synapse0x2e921e0() {
   return (neuron0x2e74400()*0.0412191);
}

double NNfunction_ss_dLuR::synapse0x2e92220() {
   return (neuron0x2e74740()*-0.232659);
}

double NNfunction_ss_dLuR::synapse0x2e92260() {
   return (neuron0x2e74a80()*0.0281981);
}

double NNfunction_ss_dLuR::synapse0x2e922a0() {
   return (neuron0x2e74dc0()*0.0577472);
}

double NNfunction_ss_dLuR::synapse0x2e922e0() {
   return (neuron0x2e75100()*0.0268556);
}

double NNfunction_ss_dLuR::synapse0x2e92320() {
   return (neuron0x2e75440()*-0.0252949);
}

double NNfunction_ss_dLuR::synapse0x2e91db0() {
   return (neuron0x2e75780()*0.058263);
}

double NNfunction_ss_dLuR::synapse0x2e91df0() {
   return (neuron0x2e75ce0()*0.144223);
}

double NNfunction_ss_dLuR::synapse0x2e92470() {
   return (neuron0x2e75f00()*0.0779809);
}

double NNfunction_ss_dLuR::synapse0x2e924b0() {
   return (neuron0x2e76240()*-0.0250905);
}

double NNfunction_ss_dLuR::synapse0x2e924f0() {
   return (neuron0x2e76580()*-0.0701241);
}

double NNfunction_ss_dLuR::synapse0x2e92530() {
   return (neuron0x2e768c0()*0.0348878);
}

double NNfunction_ss_dLuR::synapse0x2e92570() {
   return (neuron0x2e76c00()*-0.0141308);
}

double NNfunction_ss_dLuR::synapse0x2e925b0() {
   return (neuron0x2e76f40()*-0.0346399);
}

double NNfunction_ss_dLuR::synapse0x2e92930() {
   return (neuron0x2e72410()*-0.0128233);
}

double NNfunction_ss_dLuR::synapse0x2e92970() {
   return (neuron0x2e726c0()*-0.471919);
}

double NNfunction_ss_dLuR::synapse0x2e929b0() {
   return (neuron0x2e72a00()*-0.229541);
}

double NNfunction_ss_dLuR::synapse0x2e929f0() {
   return (neuron0x2e72d40()*-0.72498);
}

double NNfunction_ss_dLuR::synapse0x2e92a30() {
   return (neuron0x2e73080()*-0.0904128);
}

double NNfunction_ss_dLuR::synapse0x2e92a70() {
   return (neuron0x2e733c0()*-0.112103);
}

double NNfunction_ss_dLuR::synapse0x2e92ab0() {
   return (neuron0x2e73700()*0.00372683);
}

double NNfunction_ss_dLuR::synapse0x2e92af0() {
   return (neuron0x2e73a40()*-0.104731);
}

double NNfunction_ss_dLuR::synapse0x2e92b30() {
   return (neuron0x2e73d80()*-0.0744798);
}

double NNfunction_ss_dLuR::synapse0x2e92b70() {
   return (neuron0x2e740c0()*-0.119439);
}

double NNfunction_ss_dLuR::synapse0x2e92bb0() {
   return (neuron0x2e74400()*0.111547);
}

double NNfunction_ss_dLuR::synapse0x2e92bf0() {
   return (neuron0x2e74740()*-0.270026);
}

double NNfunction_ss_dLuR::synapse0x2e92c30() {
   return (neuron0x2e74a80()*-0.0586057);
}

double NNfunction_ss_dLuR::synapse0x2e92c70() {
   return (neuron0x2e74dc0()*0.101291);
}

double NNfunction_ss_dLuR::synapse0x2e92cb0() {
   return (neuron0x2e75100()*-0.502147);
}

double NNfunction_ss_dLuR::synapse0x2e92cf0() {
   return (neuron0x2e75440()*0.0325663);
}

double NNfunction_ss_dLuR::synapse0x2e92780() {
   return (neuron0x2e75780()*0.00529107);
}

double NNfunction_ss_dLuR::synapse0x2e927c0() {
   return (neuron0x2e75ce0()*-0.057126);
}

double NNfunction_ss_dLuR::synapse0x2e92e40() {
   return (neuron0x2e75f00()*0.105515);
}

double NNfunction_ss_dLuR::synapse0x2e92e80() {
   return (neuron0x2e76240()*0.0385073);
}

double NNfunction_ss_dLuR::synapse0x2e92ec0() {
   return (neuron0x2e76580()*0.0499335);
}

double NNfunction_ss_dLuR::synapse0x2e92f00() {
   return (neuron0x2e768c0()*0.0741474);
}

double NNfunction_ss_dLuR::synapse0x2e92f40() {
   return (neuron0x2e76c00()*-0.0119203);
}

double NNfunction_ss_dLuR::synapse0x2e92f80() {
   return (neuron0x2e76f40()*-0.00883328);
}

double NNfunction_ss_dLuR::synapse0x2e93300() {
   return (neuron0x2e72410()*-0.167596);
}

double NNfunction_ss_dLuR::synapse0x2e93340() {
   return (neuron0x2e726c0()*-0.0545252);
}

double NNfunction_ss_dLuR::synapse0x2e93380() {
   return (neuron0x2e72a00()*0.264297);
}

double NNfunction_ss_dLuR::synapse0x2e933c0() {
   return (neuron0x2e72d40()*-0.587864);
}

double NNfunction_ss_dLuR::synapse0x2e93400() {
   return (neuron0x2e73080()*-0.32934);
}

double NNfunction_ss_dLuR::synapse0x2e93440() {
   return (neuron0x2e733c0()*-0.045921);
}

double NNfunction_ss_dLuR::synapse0x2e93480() {
   return (neuron0x2e73700()*0.190666);
}

double NNfunction_ss_dLuR::synapse0x2e934c0() {
   return (neuron0x2e73a40()*0.270399);
}

double NNfunction_ss_dLuR::synapse0x2e93500() {
   return (neuron0x2e73d80()*0.491708);
}

double NNfunction_ss_dLuR::synapse0x2e93540() {
   return (neuron0x2e740c0()*-0.423);
}

double NNfunction_ss_dLuR::synapse0x2e93580() {
   return (neuron0x2e74400()*-0.295262);
}

double NNfunction_ss_dLuR::synapse0x2e935c0() {
   return (neuron0x2e74740()*-0.0978799);
}

double NNfunction_ss_dLuR::synapse0x2e93600() {
   return (neuron0x2e74a80()*-0.21918);
}

double NNfunction_ss_dLuR::synapse0x2e93640() {
   return (neuron0x2e74dc0()*-0.0173339);
}

double NNfunction_ss_dLuR::synapse0x2e93680() {
   return (neuron0x2e75100()*-0.0675806);
}

double NNfunction_ss_dLuR::synapse0x2e936c0() {
   return (neuron0x2e75440()*0.996853);
}

double NNfunction_ss_dLuR::synapse0x2e93150() {
   return (neuron0x2e75780()*0.0194937);
}

double NNfunction_ss_dLuR::synapse0x2e93190() {
   return (neuron0x2e75ce0()*0.240661);
}

double NNfunction_ss_dLuR::synapse0x2e93810() {
   return (neuron0x2e75f00()*-0.368712);
}

double NNfunction_ss_dLuR::synapse0x2e93850() {
   return (neuron0x2e76240()*0.497336);
}

double NNfunction_ss_dLuR::synapse0x2e93890() {
   return (neuron0x2e76580()*0.159935);
}

double NNfunction_ss_dLuR::synapse0x2e938d0() {
   return (neuron0x2e768c0()*-0.269309);
}

double NNfunction_ss_dLuR::synapse0x2e93910() {
   return (neuron0x2e76c00()*0.276048);
}

double NNfunction_ss_dLuR::synapse0x2e93950() {
   return (neuron0x2e76f40()*-0.158458);
}

double NNfunction_ss_dLuR::synapse0x2e7c400() {
   return (neuron0x2e72410()*0.0130659);
}

double NNfunction_ss_dLuR::synapse0x2e7c440() {
   return (neuron0x2e726c0()*-0.000614333);
}

double NNfunction_ss_dLuR::synapse0x2e7c480() {
   return (neuron0x2e72a00()*0.0166262);
}

double NNfunction_ss_dLuR::synapse0x2e7c4c0() {
   return (neuron0x2e72d40()*-1.95728);
}

double NNfunction_ss_dLuR::synapse0x2e7c500() {
   return (neuron0x2e73080()*-0.0229649);
}

double NNfunction_ss_dLuR::synapse0x2e7c540() {
   return (neuron0x2e733c0()*-0.0311351);
}

double NNfunction_ss_dLuR::synapse0x2e7c580() {
   return (neuron0x2e73700()*-0.0315033);
}

double NNfunction_ss_dLuR::synapse0x2e7c5c0() {
   return (neuron0x2e73a40()*-0.0370861);
}

double NNfunction_ss_dLuR::synapse0x2e940e0() {
   return (neuron0x2e73d80()*-0.00802774);
}

double NNfunction_ss_dLuR::synapse0x2e94120() {
   return (neuron0x2e740c0()*0.0350618);
}

double NNfunction_ss_dLuR::synapse0x2e94160() {
   return (neuron0x2e74400()*-0.00127033);
}

double NNfunction_ss_dLuR::synapse0x2e941a0() {
   return (neuron0x2e74740()*1.20817);
}

double NNfunction_ss_dLuR::synapse0x2e941e0() {
   return (neuron0x2e74a80()*-0.013022);
}

double NNfunction_ss_dLuR::synapse0x2e94220() {
   return (neuron0x2e74dc0()*0.00952351);
}

double NNfunction_ss_dLuR::synapse0x2e94260() {
   return (neuron0x2e75100()*-0.765049);
}

double NNfunction_ss_dLuR::synapse0x2e942a0() {
   return (neuron0x2e75440()*-0.0531625);
}

double NNfunction_ss_dLuR::synapse0x2e93b20() {
   return (neuron0x2e75780()*-0.0264382);
}

double NNfunction_ss_dLuR::synapse0x2e93b60() {
   return (neuron0x2e75ce0()*0.0474638);
}

double NNfunction_ss_dLuR::synapse0x2e943f0() {
   return (neuron0x2e75f00()*0.0639491);
}

double NNfunction_ss_dLuR::synapse0x2e94430() {
   return (neuron0x2e76240()*0.0252739);
}

double NNfunction_ss_dLuR::synapse0x2e94470() {
   return (neuron0x2e76580()*-0.0369397);
}

double NNfunction_ss_dLuR::synapse0x2e944b0() {
   return (neuron0x2e768c0()*0.0188124);
}

double NNfunction_ss_dLuR::synapse0x2e944f0() {
   return (neuron0x2e76c00()*0.0165155);
}

double NNfunction_ss_dLuR::synapse0x2e94530() {
   return (neuron0x2e76f40()*0.0153452);
}

double NNfunction_ss_dLuR::synapse0x2e948b0() {
   return (neuron0x2e72410()*-0.012387);
}

double NNfunction_ss_dLuR::synapse0x2e948f0() {
   return (neuron0x2e726c0()*-0.0117152);
}

double NNfunction_ss_dLuR::synapse0x2e94930() {
   return (neuron0x2e72a00()*-0.0707445);
}

double NNfunction_ss_dLuR::synapse0x2e94970() {
   return (neuron0x2e72d40()*0.334635);
}

double NNfunction_ss_dLuR::synapse0x2e949b0() {
   return (neuron0x2e73080()*-0.0637659);
}

double NNfunction_ss_dLuR::synapse0x2e949f0() {
   return (neuron0x2e733c0()*-0.0673365);
}

double NNfunction_ss_dLuR::synapse0x2e94a30() {
   return (neuron0x2e73700()*-0.0143276);
}

double NNfunction_ss_dLuR::synapse0x2e94a70() {
   return (neuron0x2e73a40()*-0.0335433);
}

double NNfunction_ss_dLuR::synapse0x2e94ab0() {
   return (neuron0x2e73d80()*-0.012116);
}

double NNfunction_ss_dLuR::synapse0x2e94af0() {
   return (neuron0x2e740c0()*-0.0490143);
}

double NNfunction_ss_dLuR::synapse0x2e94b30() {
   return (neuron0x2e74400()*0.0355567);
}

double NNfunction_ss_dLuR::synapse0x2e94b70() {
   return (neuron0x2e74740()*1.82272);
}

double NNfunction_ss_dLuR::synapse0x2e94bb0() {
   return (neuron0x2e74a80()*0.0397617);
}

double NNfunction_ss_dLuR::synapse0x2e94bf0() {
   return (neuron0x2e74dc0()*0.065186);
}

double NNfunction_ss_dLuR::synapse0x2e94c30() {
   return (neuron0x2e75100()*-0.310682);
}

double NNfunction_ss_dLuR::synapse0x2e94c70() {
   return (neuron0x2e75440()*0.0212971);
}

double NNfunction_ss_dLuR::synapse0x2e94700() {
   return (neuron0x2e75780()*0.0125636);
}

double NNfunction_ss_dLuR::synapse0x2e94740() {
   return (neuron0x2e75ce0()*0.0341428);
}

double NNfunction_ss_dLuR::synapse0x2e94dc0() {
   return (neuron0x2e75f00()*0.000359678);
}

double NNfunction_ss_dLuR::synapse0x2e94e00() {
   return (neuron0x2e76240()*0.00602322);
}

double NNfunction_ss_dLuR::synapse0x2e94e40() {
   return (neuron0x2e76580()*-0.0439891);
}

double NNfunction_ss_dLuR::synapse0x2e94e80() {
   return (neuron0x2e768c0()*-0.0535928);
}

double NNfunction_ss_dLuR::synapse0x2e94ec0() {
   return (neuron0x2e76c00()*0.0486288);
}

double NNfunction_ss_dLuR::synapse0x2e94f00() {
   return (neuron0x2e76f40()*0.00346475);
}

double NNfunction_ss_dLuR::synapse0x2e95280() {
   return (neuron0x2e72410()*-0.249804);
}

double NNfunction_ss_dLuR::synapse0x2e952c0() {
   return (neuron0x2e726c0()*-0.459718);
}

double NNfunction_ss_dLuR::synapse0x2e95300() {
   return (neuron0x2e72a00()*-0.373605);
}

double NNfunction_ss_dLuR::synapse0x2e95340() {
   return (neuron0x2e72d40()*1.09803);
}

double NNfunction_ss_dLuR::synapse0x2e95380() {
   return (neuron0x2e73080()*-0.55179);
}

double NNfunction_ss_dLuR::synapse0x2e953c0() {
   return (neuron0x2e733c0()*-0.123908);
}

double NNfunction_ss_dLuR::synapse0x2e95400() {
   return (neuron0x2e73700()*0.715943);
}

double NNfunction_ss_dLuR::synapse0x2e95440() {
   return (neuron0x2e73a40()*1.03415);
}

double NNfunction_ss_dLuR::synapse0x2e95480() {
   return (neuron0x2e73d80()*-0.447164);
}

double NNfunction_ss_dLuR::synapse0x2e954c0() {
   return (neuron0x2e740c0()*0.0776755);
}

double NNfunction_ss_dLuR::synapse0x2e95500() {
   return (neuron0x2e74400()*-0.120886);
}

double NNfunction_ss_dLuR::synapse0x2e95540() {
   return (neuron0x2e74740()*0.0383112);
}

double NNfunction_ss_dLuR::synapse0x2e95580() {
   return (neuron0x2e74a80()*0.413049);
}

double NNfunction_ss_dLuR::synapse0x2e955c0() {
   return (neuron0x2e74dc0()*-0.467245);
}

double NNfunction_ss_dLuR::synapse0x2e95600() {
   return (neuron0x2e75100()*-0.680455);
}

double NNfunction_ss_dLuR::synapse0x2e95640() {
   return (neuron0x2e75440()*1.11267);
}

double NNfunction_ss_dLuR::synapse0x2e950d0() {
   return (neuron0x2e75780()*-0.101685);
}

double NNfunction_ss_dLuR::synapse0x2e95110() {
   return (neuron0x2e75ce0()*-0.0535009);
}

double NNfunction_ss_dLuR::synapse0x2e85c40() {
   return (neuron0x2e75f00()*-0.933232);
}

double NNfunction_ss_dLuR::synapse0x2e85c80() {
   return (neuron0x2e76240()*-0.575825);
}

double NNfunction_ss_dLuR::synapse0x2e85cc0() {
   return (neuron0x2e76580()*-0.0195048);
}

double NNfunction_ss_dLuR::synapse0x2e85d00() {
   return (neuron0x2e768c0()*-1.31985);
}

double NNfunction_ss_dLuR::synapse0x2e85d40() {
   return (neuron0x2e76c00()*1.07791);
}

double NNfunction_ss_dLuR::synapse0x2e85d80() {
   return (neuron0x2e76f40()*0.424777);
}

double NNfunction_ss_dLuR::synapse0x2e86100() {
   return (neuron0x2e72410()*0.0289924);
}

double NNfunction_ss_dLuR::synapse0x2e86140() {
   return (neuron0x2e726c0()*0.0131515);
}

double NNfunction_ss_dLuR::synapse0x2e86180() {
   return (neuron0x2e72a00()*-0.0950248);
}

double NNfunction_ss_dLuR::synapse0x2e861c0() {
   return (neuron0x2e72d40()*0.464408);
}

double NNfunction_ss_dLuR::synapse0x2e86200() {
   return (neuron0x2e73080()*0.0282815);
}

double NNfunction_ss_dLuR::synapse0x2e86240() {
   return (neuron0x2e733c0()*-0.0037576);
}

double NNfunction_ss_dLuR::synapse0x2e86280() {
   return (neuron0x2e73700()*0.0133977);
}

double NNfunction_ss_dLuR::synapse0x2e862c0() {
   return (neuron0x2e73a40()*0.0299765);
}

double NNfunction_ss_dLuR::synapse0x2e86300() {
   return (neuron0x2e73d80()*-0.0365692);
}

double NNfunction_ss_dLuR::synapse0x2e86340() {
   return (neuron0x2e740c0()*-0.0311382);
}

double NNfunction_ss_dLuR::synapse0x2e86380() {
   return (neuron0x2e74400()*-0.029826);
}

double NNfunction_ss_dLuR::synapse0x2e863c0() {
   return (neuron0x2e74740()*0.346224);
}

double NNfunction_ss_dLuR::synapse0x2e86400() {
   return (neuron0x2e74a80()*0.182957);
}

double NNfunction_ss_dLuR::synapse0x2e86440() {
   return (neuron0x2e74dc0()*-0.0214995);
}

double NNfunction_ss_dLuR::synapse0x2e86480() {
   return (neuron0x2e75100()*0.260184);
}

double NNfunction_ss_dLuR::synapse0x2e864c0() {
   return (neuron0x2e75440()*0.05549);
}

double NNfunction_ss_dLuR::synapse0x2e85f50() {
   return (neuron0x2e75780()*-0.0601809);
}

double NNfunction_ss_dLuR::synapse0x2e85f90() {
   return (neuron0x2e75ce0()*0.0982134);
}

double NNfunction_ss_dLuR::synapse0x2e86610() {
   return (neuron0x2e75f00()*0.139194);
}

double NNfunction_ss_dLuR::synapse0x2e86650() {
   return (neuron0x2e76240()*-0.0301537);
}

double NNfunction_ss_dLuR::synapse0x2e86690() {
   return (neuron0x2e76580()*-0.0112609);
}

double NNfunction_ss_dLuR::synapse0x2e866d0() {
   return (neuron0x2e768c0()*-0.0240285);
}

double NNfunction_ss_dLuR::synapse0x2e86710() {
   return (neuron0x2e76c00()*-0.00846178);
}

double NNfunction_ss_dLuR::synapse0x2e86750() {
   return (neuron0x2e76f40()*0.0209512);
}

double NNfunction_ss_dLuR::synapse0x2e86ad0() {
   return (neuron0x2e72410()*-0.0291023);
}

double NNfunction_ss_dLuR::synapse0x2e86b10() {
   return (neuron0x2e726c0()*1.22478);
}

double NNfunction_ss_dLuR::synapse0x2e86b50() {
   return (neuron0x2e72a00()*-0.384384);
}

double NNfunction_ss_dLuR::synapse0x2e86b90() {
   return (neuron0x2e72d40()*-0.348226);
}

double NNfunction_ss_dLuR::synapse0x2e86bd0() {
   return (neuron0x2e73080()*-0.00980185);
}

double NNfunction_ss_dLuR::synapse0x2e86c10() {
   return (neuron0x2e733c0()*-0.4678);
}

double NNfunction_ss_dLuR::synapse0x2e86c50() {
   return (neuron0x2e73700()*-0.24622);
}

double NNfunction_ss_dLuR::synapse0x2e86c90() {
   return (neuron0x2e73a40()*0.00872313);
}

double NNfunction_ss_dLuR::synapse0x2e86cd0() {
   return (neuron0x2e73d80()*-0.262625);
}

double NNfunction_ss_dLuR::synapse0x2e86d10() {
   return (neuron0x2e740c0()*0.576755);
}

double NNfunction_ss_dLuR::synapse0x2e86d50() {
   return (neuron0x2e74400()*1.03192);
}

double NNfunction_ss_dLuR::synapse0x2e86d90() {
   return (neuron0x2e74740()*-0.310231);
}

double NNfunction_ss_dLuR::synapse0x2e86dd0() {
   return (neuron0x2e74a80()*-0.706166);
}

double NNfunction_ss_dLuR::synapse0x2e86e10() {
   return (neuron0x2e74dc0()*0.0919372);
}

double NNfunction_ss_dLuR::synapse0x2e86e50() {
   return (neuron0x2e75100()*0.564919);
}

double NNfunction_ss_dLuR::synapse0x2e86e90() {
   return (neuron0x2e75440()*0.56499);
}

double NNfunction_ss_dLuR::synapse0x2e86920() {
   return (neuron0x2e75780()*0.526264);
}

double NNfunction_ss_dLuR::synapse0x2e86960() {
   return (neuron0x2e75ce0()*1.27635);
}

double NNfunction_ss_dLuR::synapse0x2e86fe0() {
   return (neuron0x2e75f00()*-0.627952);
}

double NNfunction_ss_dLuR::synapse0x2e87020() {
   return (neuron0x2e76240()*-0.458246);
}

double NNfunction_ss_dLuR::synapse0x2e87060() {
   return (neuron0x2e76580()*-0.0666399);
}

double NNfunction_ss_dLuR::synapse0x2e870a0() {
   return (neuron0x2e768c0()*-0.211677);
}

double NNfunction_ss_dLuR::synapse0x2e870e0() {
   return (neuron0x2e76c00()*0.306076);
}

double NNfunction_ss_dLuR::synapse0x2e87120() {
   return (neuron0x2e76f40()*0.23645);
}

double NNfunction_ss_dLuR::synapse0x2e874a0() {
   return (neuron0x2e72410()*-0.0777858);
}

double NNfunction_ss_dLuR::synapse0x2e874e0() {
   return (neuron0x2e726c0()*-0.0196724);
}

double NNfunction_ss_dLuR::synapse0x2e87520() {
   return (neuron0x2e72a00()*0.0573944);
}

double NNfunction_ss_dLuR::synapse0x2e87560() {
   return (neuron0x2e72d40()*10.6425);
}

double NNfunction_ss_dLuR::synapse0x2e875a0() {
   return (neuron0x2e73080()*0.0102225);
}

double NNfunction_ss_dLuR::synapse0x2e875e0() {
   return (neuron0x2e733c0()*0.00253388);
}

double NNfunction_ss_dLuR::synapse0x2e87620() {
   return (neuron0x2e73700()*0.00694097);
}

double NNfunction_ss_dLuR::synapse0x2e87660() {
   return (neuron0x2e73a40()*-0.00365758);
}

double NNfunction_ss_dLuR::synapse0x2e876a0() {
   return (neuron0x2e73d80()*-0.034785);
}

double NNfunction_ss_dLuR::synapse0x2e876e0() {
   return (neuron0x2e740c0()*0.00117563);
}

double NNfunction_ss_dLuR::synapse0x2e87720() {
   return (neuron0x2e74400()*-0.016434);
}

double NNfunction_ss_dLuR::synapse0x2e87760() {
   return (neuron0x2e74740()*0.312558);
}

double NNfunction_ss_dLuR::synapse0x2e877a0() {
   return (neuron0x2e74a80()*-0.0225339);
}

double NNfunction_ss_dLuR::synapse0x2e877e0() {
   return (neuron0x2e74dc0()*-0.00996652);
}

double NNfunction_ss_dLuR::synapse0x2e87820() {
   return (neuron0x2e75100()*0.47768);
}

double NNfunction_ss_dLuR::synapse0x2e87860() {
   return (neuron0x2e75440()*0.019011);
}

double NNfunction_ss_dLuR::synapse0x2e872f0() {
   return (neuron0x2e75780()*0.0153993);
}

double NNfunction_ss_dLuR::synapse0x2e87330() {
   return (neuron0x2e75ce0()*-0.0154281);
}

double NNfunction_ss_dLuR::synapse0x2e879b0() {
   return (neuron0x2e75f00()*-0.00820256);
}

double NNfunction_ss_dLuR::synapse0x2e879f0() {
   return (neuron0x2e76240()*0.00776504);
}

double NNfunction_ss_dLuR::synapse0x2e87a30() {
   return (neuron0x2e76580()*0.0342181);
}

double NNfunction_ss_dLuR::synapse0x2e87a70() {
   return (neuron0x2e768c0()*0.0382747);
}

double NNfunction_ss_dLuR::synapse0x2e87ab0() {
   return (neuron0x2e76c00()*-0.0100769);
}

double NNfunction_ss_dLuR::synapse0x2e87af0() {
   return (neuron0x2e76f40()*-0.0174532);
}

double NNfunction_ss_dLuR::synapse0x2e999c0() {
   return (neuron0x2e72410()*-0.214217);
}

double NNfunction_ss_dLuR::synapse0x2e99a00() {
   return (neuron0x2e726c0()*1.09928);
}

double NNfunction_ss_dLuR::synapse0x2e99a40() {
   return (neuron0x2e72a00()*-1.19365);
}

double NNfunction_ss_dLuR::synapse0x2e99a80() {
   return (neuron0x2e72d40()*0.391199);
}

double NNfunction_ss_dLuR::synapse0x2e99ac0() {
   return (neuron0x2e73080()*-0.661224);
}

double NNfunction_ss_dLuR::synapse0x2e99b00() {
   return (neuron0x2e733c0()*0.136505);
}

double NNfunction_ss_dLuR::synapse0x2e99b40() {
   return (neuron0x2e73700()*-0.291588);
}

double NNfunction_ss_dLuR::synapse0x2e99b80() {
   return (neuron0x2e73a40()*0.949406);
}

double NNfunction_ss_dLuR::synapse0x2e99bc0() {
   return (neuron0x2e73d80()*-0.283705);
}

double NNfunction_ss_dLuR::synapse0x2e99c00() {
   return (neuron0x2e740c0()*-0.494768);
}

double NNfunction_ss_dLuR::synapse0x2e99c40() {
   return (neuron0x2e74400()*-0.0174401);
}

double NNfunction_ss_dLuR::synapse0x2e99c80() {
   return (neuron0x2e74740()*-0.668583);
}

double NNfunction_ss_dLuR::synapse0x2e99cc0() {
   return (neuron0x2e74a80()*0.731659);
}

double NNfunction_ss_dLuR::synapse0x2e99d00() {
   return (neuron0x2e74dc0()*-0.988519);
}

double NNfunction_ss_dLuR::synapse0x2e99d40() {
   return (neuron0x2e75100()*0.733967);
}

double NNfunction_ss_dLuR::synapse0x2e99d80() {
   return (neuron0x2e75440()*0.366455);
}

double NNfunction_ss_dLuR::synapse0x2e87b30() {
   return (neuron0x2e75780()*-0.184541);
}

double NNfunction_ss_dLuR::synapse0x2e87b70() {
   return (neuron0x2e75ce0()*-0.757595);
}

double NNfunction_ss_dLuR::synapse0x2e99ed0() {
   return (neuron0x2e75f00()*0.24571);
}

double NNfunction_ss_dLuR::synapse0x2e99f10() {
   return (neuron0x2e76240()*1.26732);
}

double NNfunction_ss_dLuR::synapse0x2e99f50() {
   return (neuron0x2e76580()*-0.143336);
}

double NNfunction_ss_dLuR::synapse0x2e99f90() {
   return (neuron0x2e768c0()*-0.165772);
}

double NNfunction_ss_dLuR::synapse0x2e99fd0() {
   return (neuron0x2e76c00()*0.108319);
}

double NNfunction_ss_dLuR::synapse0x2e9a010() {
   return (neuron0x2e76f40()*-0.19166);
}

double NNfunction_ss_dLuR::synapse0x2e9a390() {
   return (neuron0x2e72410()*-0.182026);
}

double NNfunction_ss_dLuR::synapse0x2e9a3d0() {
   return (neuron0x2e726c0()*-0.274247);
}

double NNfunction_ss_dLuR::synapse0x2e9a410() {
   return (neuron0x2e72a00()*-0.622037);
}

double NNfunction_ss_dLuR::synapse0x2e9a450() {
   return (neuron0x2e72d40()*0.0328659);
}

double NNfunction_ss_dLuR::synapse0x2e9a490() {
   return (neuron0x2e73080()*-0.477812);
}

double NNfunction_ss_dLuR::synapse0x2e9a4d0() {
   return (neuron0x2e733c0()*0.0611591);
}

double NNfunction_ss_dLuR::synapse0x2e9a510() {
   return (neuron0x2e73700()*1.0047);
}

double NNfunction_ss_dLuR::synapse0x2e9a550() {
   return (neuron0x2e73a40()*0.675144);
}

double NNfunction_ss_dLuR::synapse0x2e9a590() {
   return (neuron0x2e73d80()*-0.16008);
}

double NNfunction_ss_dLuR::synapse0x2e9a5d0() {
   return (neuron0x2e740c0()*0.157598);
}

double NNfunction_ss_dLuR::synapse0x2e9a610() {
   return (neuron0x2e74400()*0.18089);
}

double NNfunction_ss_dLuR::synapse0x2e9a650() {
   return (neuron0x2e74740()*-1.25025);
}

double NNfunction_ss_dLuR::synapse0x2e9a690() {
   return (neuron0x2e74a80()*0.874509);
}

double NNfunction_ss_dLuR::synapse0x2e9a6d0() {
   return (neuron0x2e74dc0()*-0.180264);
}

double NNfunction_ss_dLuR::synapse0x2e9a710() {
   return (neuron0x2e75100()*-0.572822);
}

double NNfunction_ss_dLuR::synapse0x2e9a750() {
   return (neuron0x2e75440()*1.34659);
}

double NNfunction_ss_dLuR::synapse0x2e9a1e0() {
   return (neuron0x2e75780()*-0.0450588);
}

double NNfunction_ss_dLuR::synapse0x2e9a220() {
   return (neuron0x2e75ce0()*-0.655396);
}

double NNfunction_ss_dLuR::synapse0x2e9a8a0() {
   return (neuron0x2e75f00()*-1.0725);
}

double NNfunction_ss_dLuR::synapse0x2e9a8e0() {
   return (neuron0x2e76240()*-0.234658);
}

double NNfunction_ss_dLuR::synapse0x2e9a920() {
   return (neuron0x2e76580()*-0.254851);
}

double NNfunction_ss_dLuR::synapse0x2e9a960() {
   return (neuron0x2e768c0()*-0.861722);
}

double NNfunction_ss_dLuR::synapse0x2e9a9a0() {
   return (neuron0x2e76c00()*0.962629);
}

double NNfunction_ss_dLuR::synapse0x2e9a9e0() {
   return (neuron0x2e76f40()*0.244907);
}

double NNfunction_ss_dLuR::synapse0x2e9ad60() {
   return (neuron0x2e72410()*-0.00113145);
}

double NNfunction_ss_dLuR::synapse0x2e9ada0() {
   return (neuron0x2e726c0()*-0.00276448);
}

double NNfunction_ss_dLuR::synapse0x2e9ade0() {
   return (neuron0x2e72a00()*-0.0118293);
}

double NNfunction_ss_dLuR::synapse0x2e9ae20() {
   return (neuron0x2e72d40()*2.01042);
}

double NNfunction_ss_dLuR::synapse0x2e9ae60() {
   return (neuron0x2e73080()*-0.0102919);
}

double NNfunction_ss_dLuR::synapse0x2e9aea0() {
   return (neuron0x2e733c0()*-0.0144159);
}

double NNfunction_ss_dLuR::synapse0x2e9aee0() {
   return (neuron0x2e73700()*0.000135872);
}

double NNfunction_ss_dLuR::synapse0x2e9af20() {
   return (neuron0x2e73a40()*0.011575);
}

double NNfunction_ss_dLuR::synapse0x2e9af60() {
   return (neuron0x2e73d80()*-0.0183261);
}

double NNfunction_ss_dLuR::synapse0x2e9afa0() {
   return (neuron0x2e740c0()*-0.0054848);
}

double NNfunction_ss_dLuR::synapse0x2e9afe0() {
   return (neuron0x2e74400()*0.00161611);
}

double NNfunction_ss_dLuR::synapse0x2e9b020() {
   return (neuron0x2e74740()*0.101642);
}

double NNfunction_ss_dLuR::synapse0x2e9b060() {
   return (neuron0x2e74a80()*0.0438994);
}

double NNfunction_ss_dLuR::synapse0x2e9b0a0() {
   return (neuron0x2e74dc0()*0.00352826);
}

double NNfunction_ss_dLuR::synapse0x2e9b0e0() {
   return (neuron0x2e75100()*0.0124487);
}

double NNfunction_ss_dLuR::synapse0x2e9b120() {
   return (neuron0x2e75440()*0.00619665);
}

double NNfunction_ss_dLuR::synapse0x2e9abb0() {
   return (neuron0x2e75780()*-0.0119314);
}

double NNfunction_ss_dLuR::synapse0x2e9abf0() {
   return (neuron0x2e75ce0()*0.028882);
}

double NNfunction_ss_dLuR::synapse0x2e9b270() {
   return (neuron0x2e75f00()*0.0395468);
}

double NNfunction_ss_dLuR::synapse0x2e9b2b0() {
   return (neuron0x2e76240()*0.00657554);
}

double NNfunction_ss_dLuR::synapse0x2e9b2f0() {
   return (neuron0x2e76580()*-0.0121567);
}

double NNfunction_ss_dLuR::synapse0x2e9b330() {
   return (neuron0x2e768c0()*-0.0208795);
}

double NNfunction_ss_dLuR::synapse0x2e9b370() {
   return (neuron0x2e76c00()*0.000349413);
}

double NNfunction_ss_dLuR::synapse0x2e9b3b0() {
   return (neuron0x2e76f40()*0.0046077);
}

double NNfunction_ss_dLuR::synapse0x2e9b730() {
   return (neuron0x2e72410()*0.112572);
}

double NNfunction_ss_dLuR::synapse0x2e9b770() {
   return (neuron0x2e726c0()*-1.0712);
}

double NNfunction_ss_dLuR::synapse0x2e9b7b0() {
   return (neuron0x2e72a00()*0.843477);
}

double NNfunction_ss_dLuR::synapse0x2e9b7f0() {
   return (neuron0x2e72d40()*-1.39336);
}

double NNfunction_ss_dLuR::synapse0x2e9b830() {
   return (neuron0x2e73080()*-0.392022);
}

double NNfunction_ss_dLuR::synapse0x2e9b870() {
   return (neuron0x2e733c0()*-0.911649);
}

double NNfunction_ss_dLuR::synapse0x2e9b8b0() {
   return (neuron0x2e73700()*-0.469875);
}

double NNfunction_ss_dLuR::synapse0x2e9b8f0() {
   return (neuron0x2e73a40()*-0.186869);
}

double NNfunction_ss_dLuR::synapse0x2e9b930() {
   return (neuron0x2e73d80()*0.349293);
}

double NNfunction_ss_dLuR::synapse0x2e9b970() {
   return (neuron0x2e740c0()*1.29686);
}

double NNfunction_ss_dLuR::synapse0x2e9b9b0() {
   return (neuron0x2e74400()*1.22815);
}

double NNfunction_ss_dLuR::synapse0x2e9b9f0() {
   return (neuron0x2e74740()*-0.415113);
}

double NNfunction_ss_dLuR::synapse0x2e9ba30() {
   return (neuron0x2e74a80()*-0.136642);
}

double NNfunction_ss_dLuR::synapse0x2e9ba70() {
   return (neuron0x2e74dc0()*0.74581);
}

double NNfunction_ss_dLuR::synapse0x2e9bab0() {
   return (neuron0x2e75100()*0.0486592);
}

double NNfunction_ss_dLuR::synapse0x2e9baf0() {
   return (neuron0x2e75440()*-0.655469);
}

double NNfunction_ss_dLuR::synapse0x2e9b580() {
   return (neuron0x2e75780()*-0.99632);
}

double NNfunction_ss_dLuR::synapse0x2e9b5c0() {
   return (neuron0x2e75ce0()*1.05318);
}

double NNfunction_ss_dLuR::synapse0x2e9bc40() {
   return (neuron0x2e75f00()*1.09062);
}

double NNfunction_ss_dLuR::synapse0x2e9bc80() {
   return (neuron0x2e76240()*-0.100964);
}

double NNfunction_ss_dLuR::synapse0x2e9bcc0() {
   return (neuron0x2e76580()*0.233402);
}

double NNfunction_ss_dLuR::synapse0x2e9bd00() {
   return (neuron0x2e768c0()*-0.198949);
}

double NNfunction_ss_dLuR::synapse0x2e9bd40() {
   return (neuron0x2e76c00()*-0.1839);
}

double NNfunction_ss_dLuR::synapse0x2e9bd80() {
   return (neuron0x2e76f40()*-0.0346678);
}

double NNfunction_ss_dLuR::synapse0x2e78310() {
   return (neuron0x2e773b0()*-0.77488);
}

double NNfunction_ss_dLuR::synapse0x2e78350() {
   return (neuron0x2e77d00()*-0.161201);
}

double NNfunction_ss_dLuR::synapse0x2e79830() {
   return (neuron0x2e787e0()*0.186957);
}

double NNfunction_ss_dLuR::synapse0x2e79870() {
   return (neuron0x2c3bb30()*0.36728);
}

double NNfunction_ss_dLuR::synapse0x2e7a200() {
   return (neuron0x2e79580()*0.841313);
}

double NNfunction_ss_dLuR::synapse0x2e7a240() {
   return (neuron0x2e79f50()*1.15786);
}

double NNfunction_ss_dLuR::synapse0x2e7afd0() {
   return (neuron0x2e7ad20()*-1.24611);
}

double NNfunction_ss_dLuR::synapse0x2e7b010() {
   return (neuron0x2e7b6f0()*0.131274);
}

double NNfunction_ss_dLuR::synapse0x2e7b9a0() {
   return (neuron0x2e7c0c0()*0.529162);
}

double NNfunction_ss_dLuR::synapse0x2e7b9e0() {
   return (neuron0x2e7cba0()*0.547555);
}

double NNfunction_ss_dLuR::synapse0x2e7c370() {
   return (neuron0x2e7d570()*-0.290976);
}

double NNfunction_ss_dLuR::synapse0x2e7c3b0() {
   return (neuron0x2e7a650()*1.29012);
}

double NNfunction_ss_dLuR::synapse0x2e7ce50() {
   return (neuron0x2e7f120()*-0.773675);
}

double NNfunction_ss_dLuR::synapse0x2e7ce90() {
   return (neuron0x2e7faf0()*0.48856);
}

double NNfunction_ss_dLuR::synapse0x2e7d820() {
   return (neuron0x2e804c0()*-0.765732);
}

double NNfunction_ss_dLuR::synapse0x2e7d860() {
   return (neuron0x2e80e90()*-1.12974);
}

double NNfunction_ss_dLuR::synapse0x2e7a900() {
   return (neuron0x2e82ca0()*-0.823748);
}

double NNfunction_ss_dLuR::synapse0x2e7a940() {
   return (neuron0x2e82f80()*3.20013);
}

double NNfunction_ss_dLuR::synapse0x2e7f3d0() {
   return (neuron0x2e83950()*1.39511);
}

double NNfunction_ss_dLuR::synapse0x2e7f410() {
   return (neuron0x2e84320()*1.06307);
}

double NNfunction_ss_dLuR::synapse0x2e7fda0() {
   return (neuron0x2e84cf0()*0.866586);
}

double NNfunction_ss_dLuR::synapse0x2e7fde0() {
   return (neuron0x2e856c0()*-1.49867);
}

double NNfunction_ss_dLuR::synapse0x2e80770() {
   return (neuron0x2e7e210()*-0.883777);
}

double NNfunction_ss_dLuR::synapse0x2e807b0() {
   return (neuron0x2e7ebe0()*-1.10543);
}

double NNfunction_ss_dLuR::synapse0x2e81140() {
   return (neuron0x2e88450()*-0.182467);
}

double NNfunction_ss_dLuR::synapse0x2e81180() {
   return (neuron0x2e88e20()*0.691861);
}

double NNfunction_ss_dLuR::synapse0x2e75320() {
   return (neuron0x2e897f0()*0.169186);
}

double NNfunction_ss_dLuR::synapse0x2e75360() {
   return (neuron0x2e8a1c0()*0.644553);
}

double NNfunction_ss_dLuR::synapse0x2e83230() {
   return (neuron0x2e8ab90()*-0.988028);
}

double NNfunction_ss_dLuR::synapse0x2e83270() {
   return (neuron0x2e8b560()*-1.23124);
}

double NNfunction_ss_dLuR::synapse0x2e83c00() {
   return (neuron0x2e8bf30()*-1.5767);
}

double NNfunction_ss_dLuR::synapse0x2e83c40() {
   return (neuron0x2e8c900()*-0.816832);
}

double NNfunction_ss_dLuR::synapse0x2e845d0() {
   return (neuron0x2e82990()*-1.20166);
}

double NNfunction_ss_dLuR::synapse0x2e84610() {
   return (neuron0x2e8f4e0()*-0.607671);
}

double NNfunction_ss_dLuR::synapse0x2e84fa0() {
   return (neuron0x2e8feb0()*-0.794316);
}

double NNfunction_ss_dLuR::synapse0x2e84fe0() {
   return (neuron0x2e90880()*-0.750176);
}

double NNfunction_ss_dLuR::synapse0x2e85970() {
   return (neuron0x2e91250()*-0.518922);
}

double NNfunction_ss_dLuR::synapse0x2e859b0() {
   return (neuron0x2e91c20()*0.994347);
}

double NNfunction_ss_dLuR::synapse0x2e7e4c0() {
   return (neuron0x2e925f0()*-1.60631);
}

double NNfunction_ss_dLuR::synapse0x2e7e500() {
   return (neuron0x2e92fc0()*-1.06096);
}

double NNfunction_ss_dLuR::synapse0x2e87d70() {
   return (neuron0x2e93990()*-1.65652);
}

double NNfunction_ss_dLuR::synapse0x2e87db0() {
   return (neuron0x2e94570()*-1.85472);
}

double NNfunction_ss_dLuR::synapse0x2e88700() {
   return (neuron0x2e94f40()*1.07316);
}

double NNfunction_ss_dLuR::synapse0x2e88740() {
   return (neuron0x2e85dc0()*-3.01489);
}

double NNfunction_ss_dLuR::synapse0x2e890d0() {
   return (neuron0x2e86790()*-0.969144);
}

double NNfunction_ss_dLuR::synapse0x2e89110() {
   return (neuron0x2e87160()*1.39818);
}

double NNfunction_ss_dLuR::synapse0x2e89aa0() {
   return (neuron0x2e997a0()*0.735189);
}

double NNfunction_ss_dLuR::synapse0x2e89ae0() {
   return (neuron0x2e9a050()*-1.51112);
}

double NNfunction_ss_dLuR::synapse0x2e8a470() {
   return (neuron0x2e9aa20()*1.81289);
}

double NNfunction_ss_dLuR::synapse0x2e8a4b0() {
   return (neuron0x2e9b3f0()*0.686427);
}

double NNfunction_ss_dLuR::synapse0x2e8cbb0() {
   return (neuron0x2e773b0()*-0.248543);
}

double NNfunction_ss_dLuR::synapse0x2e8cbf0() {
   return (neuron0x2e77d00()*-0.375862);
}

double NNfunction_ss_dLuR::synapse0x2e82170() {
   return (neuron0x2e787e0()*-1.58597);
}

double NNfunction_ss_dLuR::synapse0x2e821b0() {
   return (neuron0x2c3bb30()*0.463495);
}

double NNfunction_ss_dLuR::synapse0x2e8f790() {
   return (neuron0x2e79580()*0.284373);
}

double NNfunction_ss_dLuR::synapse0x2e8f7d0() {
   return (neuron0x2e79f50()*0.32344);
}

double NNfunction_ss_dLuR::synapse0x2e90160() {
   return (neuron0x2e7ad20()*-0.965891);
}

double NNfunction_ss_dLuR::synapse0x2e901a0() {
   return (neuron0x2e7b6f0()*-0.223378);
}

double NNfunction_ss_dLuR::synapse0x2e90b30() {
   return (neuron0x2e7c0c0()*0.678882);
}

double NNfunction_ss_dLuR::synapse0x2e90b70() {
   return (neuron0x2e7cba0()*0.300728);
}

double NNfunction_ss_dLuR::synapse0x2e91500() {
   return (neuron0x2e7d570()*-0.452112);
}

double NNfunction_ss_dLuR::synapse0x2e91540() {
   return (neuron0x2e7a650()*1.82784);
}

double NNfunction_ss_dLuR::synapse0x2e91ed0() {
   return (neuron0x2e7f120()*-0.211669);
}

double NNfunction_ss_dLuR::synapse0x2e91f10() {
   return (neuron0x2e7faf0()*-0.487586);
}

double NNfunction_ss_dLuR::synapse0x2e928a0() {
   return (neuron0x2e804c0()*0.0738842);
}

double NNfunction_ss_dLuR::synapse0x2e928e0() {
   return (neuron0x2e80e90()*-0.819433);
}

double NNfunction_ss_dLuR::synapse0x2e93270() {
   return (neuron0x2e82ca0()*-0.150316);
}

double NNfunction_ss_dLuR::synapse0x2e932b0() {
   return (neuron0x2e82f80()*0.119035);
}

double NNfunction_ss_dLuR::synapse0x2e93c40() {
   return (neuron0x2e83950()*-1.50347);
}

double NNfunction_ss_dLuR::synapse0x2e93c80() {
   return (neuron0x2e84320()*0.164955);
}

double NNfunction_ss_dLuR::synapse0x2e94820() {
   return (neuron0x2e84cf0()*-0.94974);
}

double NNfunction_ss_dLuR::synapse0x2e94860() {
   return (neuron0x2e856c0()*-0.537187);
}

double NNfunction_ss_dLuR::synapse0x2e951f0() {
   return (neuron0x2e7e210()*0.115739);
}

double NNfunction_ss_dLuR::synapse0x2e95230() {
   return (neuron0x2e7ebe0()*-0.00085369);
}

double NNfunction_ss_dLuR::synapse0x2e86070() {
   return (neuron0x2e88450()*-0.165126);
}

double NNfunction_ss_dLuR::synapse0x2e860b0() {
   return (neuron0x2e88e20()*0.0445896);
}

double NNfunction_ss_dLuR::synapse0x2e86a40() {
   return (neuron0x2e897f0()*-1.25463);
}

double NNfunction_ss_dLuR::synapse0x2e86a80() {
   return (neuron0x2e8a1c0()*-0.336073);
}

double NNfunction_ss_dLuR::synapse0x2e87410() {
   return (neuron0x2e8ab90()*0.157804);
}

double NNfunction_ss_dLuR::synapse0x2e87450() {
   return (neuron0x2e8b560()*-0.886395);
}

double NNfunction_ss_dLuR::synapse0x2e99930() {
   return (neuron0x2e8bf30()*-0.472432);
}

double NNfunction_ss_dLuR::synapse0x2e99970() {
   return (neuron0x2e8c900()*0.559224);
}

double NNfunction_ss_dLuR::synapse0x2e9a300() {
   return (neuron0x2e82990()*-0.43284);
}

double NNfunction_ss_dLuR::synapse0x2e9a340() {
   return (neuron0x2e8f4e0()*-0.543165);
}

double NNfunction_ss_dLuR::synapse0x2e9acd0() {
   return (neuron0x2e8feb0()*-0.709907);
}

double NNfunction_ss_dLuR::synapse0x2e9ad10() {
   return (neuron0x2e90880()*0.674103);
}

double NNfunction_ss_dLuR::synapse0x2e9b6a0() {
   return (neuron0x2e91250()*-0.426213);
}

double NNfunction_ss_dLuR::synapse0x2e9b6e0() {
   return (neuron0x2e91c20()*0.615725);
}

double NNfunction_ss_dLuR::synapse0x2e775d0() {
   return (neuron0x2e925f0()*-0.448492);
}

double NNfunction_ss_dLuR::synapse0x2e77610() {
   return (neuron0x2e92fc0()*-0.458923);
}

double NNfunction_ss_dLuR::synapse0x2e8ae40() {
   return (neuron0x2e93990()*-1.01068);
}

double NNfunction_ss_dLuR::synapse0x2e8ae80() {
   return (neuron0x2e94570()*0.550792);
}

double NNfunction_ss_dLuR::synapse0x2e9bdc0() {
   return (neuron0x2e94f40()*0.265147);
}

double NNfunction_ss_dLuR::synapse0x2e9be00() {
   return (neuron0x2e85dc0()*0.591611);
}

double NNfunction_ss_dLuR::synapse0x2e9be40() {
   return (neuron0x2e86790()*-0.0533502);
}

double NNfunction_ss_dLuR::synapse0x2e9be80() {
   return (neuron0x2e87160()*0.239329);
}

double NNfunction_ss_dLuR::synapse0x2ea2d30() {
   return (neuron0x2e997a0()*0.188918);
}

double NNfunction_ss_dLuR::synapse0x2ea2d70() {
   return (neuron0x2e9a050()*-0.534955);
}

double NNfunction_ss_dLuR::synapse0x2ea2db0() {
   return (neuron0x2e9aa20()*-0.377451);
}

double NNfunction_ss_dLuR::synapse0x2ea2df0() {
   return (neuron0x2e9b3f0()*-0.0783127);
}

double NNfunction_ss_dLuR::synapse0x2ea3170() {
   return (neuron0x2e773b0()*0.0534157);
}

double NNfunction_ss_dLuR::synapse0x2ea31b0() {
   return (neuron0x2e77d00()*-0.229115);
}

double NNfunction_ss_dLuR::synapse0x2ea31f0() {
   return (neuron0x2e787e0()*-0.144186);
}

double NNfunction_ss_dLuR::synapse0x2ea3230() {
   return (neuron0x2c3bb30()*0.226626);
}

double NNfunction_ss_dLuR::synapse0x2ea3270() {
   return (neuron0x2e79580()*0.635451);
}

double NNfunction_ss_dLuR::synapse0x2ea32b0() {
   return (neuron0x2e79f50()*0.284157);
}

double NNfunction_ss_dLuR::synapse0x2ea32f0() {
   return (neuron0x2e7ad20()*-0.077157);
}

double NNfunction_ss_dLuR::synapse0x2ea3330() {
   return (neuron0x2e7b6f0()*-0.258329);
}

double NNfunction_ss_dLuR::synapse0x2ea3370() {
   return (neuron0x2e7c0c0()*0.0882369);
}

double NNfunction_ss_dLuR::synapse0x2ea33b0() {
   return (neuron0x2e7cba0()*0.960744);
}

double NNfunction_ss_dLuR::synapse0x2ea33f0() {
   return (neuron0x2e7d570()*-0.474437);
}

double NNfunction_ss_dLuR::synapse0x2ea3430() {
   return (neuron0x2e7a650()*0.516309);
}

double NNfunction_ss_dLuR::synapse0x2ea3470() {
   return (neuron0x2e7f120()*0.242689);
}

double NNfunction_ss_dLuR::synapse0x2ea34b0() {
   return (neuron0x2e7faf0()*-0.0408173);
}

double NNfunction_ss_dLuR::synapse0x2ea34f0() {
   return (neuron0x2e804c0()*0.126942);
}

double NNfunction_ss_dLuR::synapse0x2ea3530() {
   return (neuron0x2e80e90()*-0.18828);
}

double NNfunction_ss_dLuR::synapse0x2ea2fc0() {
   return (neuron0x2e82ca0()*-0.885946);
}

double NNfunction_ss_dLuR::synapse0x2ea3000() {
   return (neuron0x2e82f80()*-0.811614);
}

double NNfunction_ss_dLuR::synapse0x2ea3680() {
   return (neuron0x2e83950()*-0.702778);
}

double NNfunction_ss_dLuR::synapse0x2ea36c0() {
   return (neuron0x2e84320()*0.0957315);
}

double NNfunction_ss_dLuR::synapse0x2ea3700() {
   return (neuron0x2e84cf0()*0.640626);
}

double NNfunction_ss_dLuR::synapse0x2ea3740() {
   return (neuron0x2e856c0()*0.406634);
}

double NNfunction_ss_dLuR::synapse0x2ea3780() {
   return (neuron0x2e7e210()*-0.339789);
}

double NNfunction_ss_dLuR::synapse0x2ea37c0() {
   return (neuron0x2e7ebe0()*-0.430842);
}

double NNfunction_ss_dLuR::synapse0x2ea3800() {
   return (neuron0x2e88450()*0.481414);
}

double NNfunction_ss_dLuR::synapse0x2ea3840() {
   return (neuron0x2e88e20()*0.414852);
}

double NNfunction_ss_dLuR::synapse0x2ea3880() {
   return (neuron0x2e897f0()*-0.18891);
}

double NNfunction_ss_dLuR::synapse0x2ea38c0() {
   return (neuron0x2e8a1c0()*0.260942);
}

double NNfunction_ss_dLuR::synapse0x2ea3900() {
   return (neuron0x2e8ab90()*0.183718);
}

double NNfunction_ss_dLuR::synapse0x2ea3940() {
   return (neuron0x2e8b560()*-0.297722);
}

double NNfunction_ss_dLuR::synapse0x2ea3980() {
   return (neuron0x2e8bf30()*-0.323037);
}

double NNfunction_ss_dLuR::synapse0x2ea39c0() {
   return (neuron0x2e8c900()*0.806576);
}

double NNfunction_ss_dLuR::synapse0x2ea3570() {
   return (neuron0x2e82990()*-0.182083);
}

double NNfunction_ss_dLuR::synapse0x2ea35b0() {
   return (neuron0x2e8f4e0()*0.236288);
}

double NNfunction_ss_dLuR::synapse0x2ea35f0() {
   return (neuron0x2e8feb0()*0.335384);
}

double NNfunction_ss_dLuR::synapse0x2ea3630() {
   return (neuron0x2e90880()*0.0274943);
}

double NNfunction_ss_dLuR::synapse0x2ea3c10() {
   return (neuron0x2e91250()*-0.29022);
}

double NNfunction_ss_dLuR::synapse0x2ea3c50() {
   return (neuron0x2e91c20()*0.190602);
}

double NNfunction_ss_dLuR::synapse0x2ea3c90() {
   return (neuron0x2e925f0()*-0.0373646);
}

double NNfunction_ss_dLuR::synapse0x2ea3cd0() {
   return (neuron0x2e92fc0()*0.081234);
}

double NNfunction_ss_dLuR::synapse0x2ea3d10() {
   return (neuron0x2e93990()*0.58538);
}

double NNfunction_ss_dLuR::synapse0x2ea3d50() {
   return (neuron0x2e94570()*0.852126);
}

double NNfunction_ss_dLuR::synapse0x2ea3d90() {
   return (neuron0x2e94f40()*-0.503789);
}

double NNfunction_ss_dLuR::synapse0x2ea3dd0() {
   return (neuron0x2e85dc0()*-0.142626);
}

double NNfunction_ss_dLuR::synapse0x2ea3e10() {
   return (neuron0x2e86790()*-0.32987);
}

double NNfunction_ss_dLuR::synapse0x2ea3e50() {
   return (neuron0x2e87160()*0.458952);
}

double NNfunction_ss_dLuR::synapse0x2ea3e90() {
   return (neuron0x2e997a0()*-0.154488);
}

double NNfunction_ss_dLuR::synapse0x2ea3ed0() {
   return (neuron0x2e9a050()*0.198179);
}

double NNfunction_ss_dLuR::synapse0x2ea3f10() {
   return (neuron0x2e9aa20()*-0.680475);
}

double NNfunction_ss_dLuR::synapse0x2ea3f50() {
   return (neuron0x2e9b3f0()*0.244729);
}

double NNfunction_ss_dLuR::synapse0x2ea42d0() {
   return (neuron0x2e773b0()*-0.152048);
}

double NNfunction_ss_dLuR::synapse0x2ea4310() {
   return (neuron0x2e77d00()*-2.21843);
}

double NNfunction_ss_dLuR::synapse0x2ea4350() {
   return (neuron0x2e787e0()*-1.97275);
}

double NNfunction_ss_dLuR::synapse0x2ea4390() {
   return (neuron0x2c3bb30()*0.0280594);
}

double NNfunction_ss_dLuR::synapse0x2ea43d0() {
   return (neuron0x2e79580()*0.0760639);
}

double NNfunction_ss_dLuR::synapse0x2ea4410() {
   return (neuron0x2e79f50()*0.157956);
}

double NNfunction_ss_dLuR::synapse0x2ea4450() {
   return (neuron0x2e7ad20()*0.494948);
}

double NNfunction_ss_dLuR::synapse0x2ea4490() {
   return (neuron0x2e7b6f0()*0.258875);
}

double NNfunction_ss_dLuR::synapse0x2ea44d0() {
   return (neuron0x2e7c0c0()*0.118721);
}

double NNfunction_ss_dLuR::synapse0x2ea4510() {
   return (neuron0x2e7cba0()*0.167638);
}

double NNfunction_ss_dLuR::synapse0x2ea4550() {
   return (neuron0x2e7d570()*2.37382);
}

double NNfunction_ss_dLuR::synapse0x2ea4590() {
   return (neuron0x2e7a650()*4.07769);
}

double NNfunction_ss_dLuR::synapse0x2ea45d0() {
   return (neuron0x2e7f120()*-0.161758);
}

double NNfunction_ss_dLuR::synapse0x2ea4610() {
   return (neuron0x2e7faf0()*0.0951554);
}

double NNfunction_ss_dLuR::synapse0x2ea4650() {
   return (neuron0x2e804c0()*1.52231);
}

double NNfunction_ss_dLuR::synapse0x2ea4690() {
   return (neuron0x2e80e90()*-0.166338);
}

double NNfunction_ss_dLuR::synapse0x2ea4120() {
   return (neuron0x2e82ca0()*-0.136765);
}

double NNfunction_ss_dLuR::synapse0x2ea4160() {
   return (neuron0x2e82f80()*-2.32567);
}

double NNfunction_ss_dLuR::synapse0x2ea47e0() {
   return (neuron0x2e83950()*-1.87244);
}

double NNfunction_ss_dLuR::synapse0x2ea4820() {
   return (neuron0x2e84320()*0.157127);
}

double NNfunction_ss_dLuR::synapse0x2ea4860() {
   return (neuron0x2e84cf0()*0.0579526);
}

double NNfunction_ss_dLuR::synapse0x2ea48a0() {
   return (neuron0x2e856c0()*-0.325545);
}

double NNfunction_ss_dLuR::synapse0x2ea48e0() {
   return (neuron0x2e7e210()*-0.00525096);
}

double NNfunction_ss_dLuR::synapse0x2ea4920() {
   return (neuron0x2e7ebe0()*-0.112649);
}

double NNfunction_ss_dLuR::synapse0x2ea4960() {
   return (neuron0x2e88450()*0.463322);
}

double NNfunction_ss_dLuR::synapse0x2ea49a0() {
   return (neuron0x2e88e20()*0.134866);
}

double NNfunction_ss_dLuR::synapse0x2ea49e0() {
   return (neuron0x2e897f0()*-0.275169);
}

double NNfunction_ss_dLuR::synapse0x2ea4a20() {
   return (neuron0x2e8a1c0()*0.0657178);
}

double NNfunction_ss_dLuR::synapse0x2ea4a60() {
   return (neuron0x2e8ab90()*-0.314535);
}

double NNfunction_ss_dLuR::synapse0x2ea4aa0() {
   return (neuron0x2e8b560()*-0.189161);
}

double NNfunction_ss_dLuR::synapse0x2ea4ae0() {
   return (neuron0x2e8bf30()*-0.218883);
}

double NNfunction_ss_dLuR::synapse0x2ea4b20() {
   return (neuron0x2e8c900()*1.22841);
}

double NNfunction_ss_dLuR::synapse0x2ea46d0() {
   return (neuron0x2e82990()*-0.14654);
}

double NNfunction_ss_dLuR::synapse0x2ea4710() {
   return (neuron0x2e8f4e0()*2.07174);
}

double NNfunction_ss_dLuR::synapse0x2ea4750() {
   return (neuron0x2e8feb0()*-0.1532);
}

double NNfunction_ss_dLuR::synapse0x2ea4790() {
   return (neuron0x2e90880()*0.107599);
}

double NNfunction_ss_dLuR::synapse0x2ea4d70() {
   return (neuron0x2e91250()*-0.0510439);
}

double NNfunction_ss_dLuR::synapse0x2ea4db0() {
   return (neuron0x2e91c20()*0.464201);
}

double NNfunction_ss_dLuR::synapse0x2ea4df0() {
   return (neuron0x2e925f0()*0.332163);
}

double NNfunction_ss_dLuR::synapse0x2ea4e30() {
   return (neuron0x2e92fc0()*-0.22389);
}

double NNfunction_ss_dLuR::synapse0x2ea4e70() {
   return (neuron0x2e93990()*0.244195);
}

double NNfunction_ss_dLuR::synapse0x2ea4eb0() {
   return (neuron0x2e94570()*0.975972);
}

double NNfunction_ss_dLuR::synapse0x2ea4ef0() {
   return (neuron0x2e94f40()*0.205799);
}

double NNfunction_ss_dLuR::synapse0x2ea4f30() {
   return (neuron0x2e85dc0()*1.63714);
}

double NNfunction_ss_dLuR::synapse0x2ea4f70() {
   return (neuron0x2e86790()*-0.132146);
}

double NNfunction_ss_dLuR::synapse0x2ea4fb0() {
   return (neuron0x2e87160()*4.10413);
}

double NNfunction_ss_dLuR::synapse0x2ea4ff0() {
   return (neuron0x2e997a0()*0.154461);
}

double NNfunction_ss_dLuR::synapse0x2ea5030() {
   return (neuron0x2e9a050()*-0.244612);
}

double NNfunction_ss_dLuR::synapse0x2ea5070() {
   return (neuron0x2e9aa20()*-3.0072);
}

double NNfunction_ss_dLuR::synapse0x2ea50b0() {
   return (neuron0x2e9b3f0()*0.0675758);
}

double NNfunction_ss_dLuR::synapse0x2ea5430() {
   return (neuron0x2e773b0()*-0.0555534);
}

double NNfunction_ss_dLuR::synapse0x2ea5470() {
   return (neuron0x2e77d00()*-0.859733);
}

double NNfunction_ss_dLuR::synapse0x2ea54b0() {
   return (neuron0x2e787e0()*-0.82418);
}

double NNfunction_ss_dLuR::synapse0x2ea54f0() {
   return (neuron0x2c3bb30()*0.0749834);
}

double NNfunction_ss_dLuR::synapse0x2ea5530() {
   return (neuron0x2e79580()*-0.195062);
}

double NNfunction_ss_dLuR::synapse0x2ea5570() {
   return (neuron0x2e79f50()*-0.0776079);
}

double NNfunction_ss_dLuR::synapse0x2ea55b0() {
   return (neuron0x2e7ad20()*0.222681);
}

double NNfunction_ss_dLuR::synapse0x2ea55f0() {
   return (neuron0x2e7b6f0()*-0.116166);
}

double NNfunction_ss_dLuR::synapse0x2ea5630() {
   return (neuron0x2e7c0c0()*-0.119988);
}

double NNfunction_ss_dLuR::synapse0x2ea5670() {
   return (neuron0x2e7cba0()*-0.293234);
}

double NNfunction_ss_dLuR::synapse0x2ea56b0() {
   return (neuron0x2e7d570()*-0.364577);
}

double NNfunction_ss_dLuR::synapse0x2ea56f0() {
   return (neuron0x2e7a650()*1.88773);
}

double NNfunction_ss_dLuR::synapse0x2ea5730() {
   return (neuron0x2e7f120()*-0.106403);
}

double NNfunction_ss_dLuR::synapse0x2ea5770() {
   return (neuron0x2e7faf0()*0.0674617);
}

double NNfunction_ss_dLuR::synapse0x2ea57b0() {
   return (neuron0x2e804c0()*-0.182927);
}

double NNfunction_ss_dLuR::synapse0x2ea57f0() {
   return (neuron0x2e80e90()*0.00430242);
}

double NNfunction_ss_dLuR::synapse0x2ea5280() {
   return (neuron0x2e82ca0()*0.314912);
}

double NNfunction_ss_dLuR::synapse0x2ea52c0() {
   return (neuron0x2e82f80()*0.225034);
}

double NNfunction_ss_dLuR::synapse0x2ea5940() {
   return (neuron0x2e83950()*-1.63673);
}

double NNfunction_ss_dLuR::synapse0x2ea5980() {
   return (neuron0x2e84320()*0.0455675);
}

double NNfunction_ss_dLuR::synapse0x2ea59c0() {
   return (neuron0x2e84cf0()*-0.197965);
}

double NNfunction_ss_dLuR::synapse0x2ea5a00() {
   return (neuron0x2e856c0()*-0.120065);
}

double NNfunction_ss_dLuR::synapse0x2ea5a40() {
   return (neuron0x2e7e210()*0.00229277);
}

double NNfunction_ss_dLuR::synapse0x2ea5a80() {
   return (neuron0x2e7ebe0()*0.0601573);
}

double NNfunction_ss_dLuR::synapse0x2ea5ac0() {
   return (neuron0x2e88450()*-0.233914);
}

double NNfunction_ss_dLuR::synapse0x2ea5b00() {
   return (neuron0x2e88e20()*-0.198404);
}

double NNfunction_ss_dLuR::synapse0x2ea5b40() {
   return (neuron0x2e897f0()*0.107388);
}

double NNfunction_ss_dLuR::synapse0x2ea5b80() {
   return (neuron0x2e8a1c0()*0.00485644);
}

double NNfunction_ss_dLuR::synapse0x2ea5bc0() {
   return (neuron0x2e8ab90()*-0.0653017);
}

double NNfunction_ss_dLuR::synapse0x2ea5c00() {
   return (neuron0x2e8b560()*0.0914966);
}

double NNfunction_ss_dLuR::synapse0x2ea5c40() {
   return (neuron0x2e8bf30()*-0.09708);
}

double NNfunction_ss_dLuR::synapse0x2ea5c80() {
   return (neuron0x2e8c900()*1.63367);
}

double NNfunction_ss_dLuR::synapse0x2ea5830() {
   return (neuron0x2e82990()*0.0124431);
}

double NNfunction_ss_dLuR::synapse0x2ea5870() {
   return (neuron0x2e8f4e0()*0.0766604);
}

double NNfunction_ss_dLuR::synapse0x2ea58b0() {
   return (neuron0x2e8feb0()*-0.098737);
}

double NNfunction_ss_dLuR::synapse0x2ea58f0() {
   return (neuron0x2e90880()*-0.0425694);
}

double NNfunction_ss_dLuR::synapse0x2ea5ed0() {
   return (neuron0x2e91250()*0.144649);
}

double NNfunction_ss_dLuR::synapse0x2ea5f10() {
   return (neuron0x2e91c20()*0.282191);
}

double NNfunction_ss_dLuR::synapse0x2ea5f50() {
   return (neuron0x2e925f0()*-0.0879063);
}

double NNfunction_ss_dLuR::synapse0x2ea5f90() {
   return (neuron0x2e92fc0()*0.0207299);
}

double NNfunction_ss_dLuR::synapse0x2ea5fd0() {
   return (neuron0x2e93990()*0.287777);
}

double NNfunction_ss_dLuR::synapse0x2ea6010() {
   return (neuron0x2e94570()*-0.19132);
}

double NNfunction_ss_dLuR::synapse0x2ea6050() {
   return (neuron0x2e94f40()*0.177214);
}

double NNfunction_ss_dLuR::synapse0x2ea6090() {
   return (neuron0x2e85dc0()*0.389251);
}

double NNfunction_ss_dLuR::synapse0x2ea60d0() {
   return (neuron0x2e86790()*0.0846616);
}

double NNfunction_ss_dLuR::synapse0x2ea6110() {
   return (neuron0x2e87160()*1.99126);
}

double NNfunction_ss_dLuR::synapse0x2ea6150() {
   return (neuron0x2e997a0()*0.0746428);
}

double NNfunction_ss_dLuR::synapse0x2ea6190() {
   return (neuron0x2e9a050()*-0.0898582);
}

double NNfunction_ss_dLuR::synapse0x2ea61d0() {
   return (neuron0x2e9aa20()*0.40727);
}

double NNfunction_ss_dLuR::synapse0x2ea6210() {
   return (neuron0x2e9b3f0()*-0.0129628);
}

double NNfunction_ss_dLuR::synapse0x2ea6470() {
   return (neuron0x2ea25f0()*6.08228);
}

double NNfunction_ss_dLuR::synapse0x2ea64b0() {
   return (neuron0x2ea2990()*-2.29192);
}

double NNfunction_ss_dLuR::synapse0x2ea64f0() {
   return (neuron0x2ea2e30()*-1.17765);
}

double NNfunction_ss_dLuR::synapse0x2ea6530() {
   return (neuron0x2ea3f90()*-7.25965);
}

double NNfunction_ss_dLuR::synapse0x2ea6570() {
   return (neuron0x2ea50f0()*-3.34116);
}

