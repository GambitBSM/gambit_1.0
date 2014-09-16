#include "NNfunction_nn_chi3_chi4.h"
#include <cmath>

double NNfunction_nn_chi3_chi4::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 24.2509)/14.8368;
   input1 = (in1 - 79.1711)/179.222;
   input2 = (in2 - 235.637)/156.763;
   input3 = (in3 - 469.002)/640.248;
   input4 = (in4 - 1065.26)/814.371;
   input5 = (in5 - 1105.41)/922.601;
   input6 = (in6 - 1108.16)/922.065;
   input7 = (in7 - 1077.07)/888.743;
   input8 = (in8 - 1093.02)/938.416;
   input9 = (in9 - 1088)/934.046;
   input10 = (in10 - 1026.54)/880.192;
   input11 = (in11 - 1125.63)/898.615;
   input12 = (in12 - 1166.79)/899.288;
   input13 = (in13 - 913.678)/672.665;
   input14 = (in14 - 1152.76)/885.037;
   input15 = (in15 - 1153.86)/883.527;
   input16 = (in16 - 760.902)/543.264;
   input17 = (in17 - 1163.77)/903.291;
   input18 = (in18 - 1165.09)/905.364;
   input19 = (in19 - 1105.76)/837.919;
   input20 = (in20 - -333.914)/455.147;
   input21 = (in21 - -426.209)/885.395;
   input22 = (in22 - 6.25012)/875.701;
   input23 = (in23 - 98.9257)/389.073;
   switch(index) {
     case 0:
         return neuron0x2a05f80();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi3_chi4::Value(int index, double* input) {
   input0 = (input[0] - 24.2509)/14.8368;
   input1 = (input[1] - 79.1711)/179.222;
   input2 = (input[2] - 235.637)/156.763;
   input3 = (input[3] - 469.002)/640.248;
   input4 = (input[4] - 1065.26)/814.371;
   input5 = (input[5] - 1105.41)/922.601;
   input6 = (input[6] - 1108.16)/922.065;
   input7 = (input[7] - 1077.07)/888.743;
   input8 = (input[8] - 1093.02)/938.416;
   input9 = (input[9] - 1088)/934.046;
   input10 = (input[10] - 1026.54)/880.192;
   input11 = (input[11] - 1125.63)/898.615;
   input12 = (input[12] - 1166.79)/899.288;
   input13 = (input[13] - 913.678)/672.665;
   input14 = (input[14] - 1152.76)/885.037;
   input15 = (input[15] - 1153.86)/883.527;
   input16 = (input[16] - 760.902)/543.264;
   input17 = (input[17] - 1163.77)/903.291;
   input18 = (input[18] - 1165.09)/905.364;
   input19 = (input[19] - 1105.76)/837.919;
   input20 = (input[20] - -333.914)/455.147;
   input21 = (input[21] - -426.209)/885.395;
   input22 = (input[22] - 6.25012)/875.701;
   input23 = (input[23] - 98.9257)/389.073;
   switch(index) {
     case 0:
         return neuron0x2a05f80();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi3_chi4::neuron0x29d0ff0() {
   return input0;
}

double NNfunction_nn_chi3_chi4::neuron0x29d12a0() {
   return input1;
}

double NNfunction_nn_chi3_chi4::neuron0x29d15e0() {
   return input2;
}

double NNfunction_nn_chi3_chi4::neuron0x29d1920() {
   return input3;
}

double NNfunction_nn_chi3_chi4::neuron0x29d1c60() {
   return input4;
}

double NNfunction_nn_chi3_chi4::neuron0x29d1fa0() {
   return input5;
}

double NNfunction_nn_chi3_chi4::neuron0x29d22e0() {
   return input6;
}

double NNfunction_nn_chi3_chi4::neuron0x29d2620() {
   return input7;
}

double NNfunction_nn_chi3_chi4::neuron0x29d2960() {
   return input8;
}

double NNfunction_nn_chi3_chi4::neuron0x29d2ca0() {
   return input9;
}

double NNfunction_nn_chi3_chi4::neuron0x29d2fe0() {
   return input10;
}

double NNfunction_nn_chi3_chi4::neuron0x29d3320() {
   return input11;
}

double NNfunction_nn_chi3_chi4::neuron0x29d3660() {
   return input12;
}

double NNfunction_nn_chi3_chi4::neuron0x29d39a0() {
   return input13;
}

double NNfunction_nn_chi3_chi4::neuron0x29d3ce0() {
   return input14;
}

double NNfunction_nn_chi3_chi4::neuron0x29d4020() {
   return input15;
}

double NNfunction_nn_chi3_chi4::neuron0x29d4360() {
   return input16;
}

double NNfunction_nn_chi3_chi4::neuron0x29d48c0() {
   return input17;
}

double NNfunction_nn_chi3_chi4::neuron0x29d4c00() {
   return input18;
}

double NNfunction_nn_chi3_chi4::neuron0x29d4f40() {
   return input19;
}

double NNfunction_nn_chi3_chi4::neuron0x29d5280() {
   return input20;
}

double NNfunction_nn_chi3_chi4::neuron0x29d55c0() {
   return input21;
}

double NNfunction_nn_chi3_chi4::neuron0x29d5900() {
   return input22;
}

double NNfunction_nn_chi3_chi4::neuron0x29d5c40() {
   return input23;
}

double NNfunction_nn_chi3_chi4::input0x29d60b0() {
   double input = 0.0813065;
   input += synapse0x29d63f0();
   input += synapse0x29d6430();
   input += synapse0x29d6470();
   input += synapse0x29d64b0();
   input += synapse0x29d64f0();
   input += synapse0x29d6530();
   input += synapse0x29d6570();
   input += synapse0x29d65b0();
   input += synapse0x29d65f0();
   input += synapse0x29d6630();
   input += synapse0x29d6670();
   input += synapse0x29d66b0();
   input += synapse0x29d66f0();
   input += synapse0x29d6730();
   input += synapse0x29d6770();
   input += synapse0x29d67b0();
   input += synapse0x29d6240();
   input += synapse0x29d6280();
   input += synapse0x278d2b0();
   input += synapse0x278d2f0();
   input += synapse0x29d67f0();
   input += synapse0x29d6830();
   input += synapse0x29d6870();
   input += synapse0x29d68b0();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29d60b0() {
   double input = input0x29d60b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29d68f0() {
   double input = 1.02335;
   input += synapse0x29d6c30();
   input += synapse0x29d6c70();
   input += synapse0x29d6cb0();
   input += synapse0x29d6cf0();
   input += synapse0x29d6d30();
   input += synapse0x29d6d70();
   input += synapse0x29d6db0();
   input += synapse0x29d6df0();
   input += synapse0x29d6e30();
   input += synapse0x278d100();
   input += synapse0x278d140();
   input += synapse0x278d180();
   input += synapse0x278d1c0();
   input += synapse0x29d7080();
   input += synapse0x29d70c0();
   input += synapse0x29d7100();
   input += synapse0x29d6a80();
   input += synapse0x29d6ac0();
   input += synapse0x29d7250();
   input += synapse0x29d7290();
   input += synapse0x29d72d0();
   input += synapse0x29d7310();
   input += synapse0x29d7350();
   input += synapse0x29d7390();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29d68f0() {
   double input = input0x29d68f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29d73d0() {
   double input = -1.67676;
   input += synapse0x29d7710();
   input += synapse0x29d7750();
   input += synapse0x29d7790();
   input += synapse0x29d77d0();
   input += synapse0x29d7810();
   input += synapse0x29d7850();
   input += synapse0x29d7890();
   input += synapse0x29d78d0();
   input += synapse0x29d7910();
   input += synapse0x29d7950();
   input += synapse0x29d7990();
   input += synapse0x29d79d0();
   input += synapse0x29d7a10();
   input += synapse0x29d7a50();
   input += synapse0x29d7a90();
   input += synapse0x29d7ad0();
   input += synapse0x29d7560();
   input += synapse0x29d75a0();
   input += synapse0x17caf10();
   input += synapse0x279b0a0();
   input += synapse0x279b0e0();
   input += synapse0x29d9a00();
   input += synapse0x29d9a40();
   input += synapse0x29d0d30();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29d73d0() {
   double input = input0x29d73d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29d6e70() {
   double input = -0.333953;
   input += synapse0x29d0e00();
   input += synapse0x279b920();
   input += synapse0x29d7000();
   input += synapse0x29d7040();
   input += synapse0x29d7c20();
   input += synapse0x29d7c60();
   input += synapse0x29d7ca0();
   input += synapse0x29d7ce0();
   input += synapse0x29d7d20();
   input += synapse0x29d7d60();
   input += synapse0x29d7da0();
   input += synapse0x29d7de0();
   input += synapse0x29d7e20();
   input += synapse0x29d7e60();
   input += synapse0x29d7ea0();
   input += synapse0x29d7ee0();
   input += synapse0x29d0d70();
   input += synapse0x29d0db0();
   input += synapse0x29d8030();
   input += synapse0x29d8070();
   input += synapse0x29d80b0();
   input += synapse0x29d80f0();
   input += synapse0x29d8130();
   input += synapse0x29d8170();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29d6e70() {
   double input = input0x29d6e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29d81b0() {
   double input = -1.16232;
   input += synapse0x29d84f0();
   input += synapse0x29d8530();
   input += synapse0x29d8570();
   input += synapse0x29d85b0();
   input += synapse0x29d85f0();
   input += synapse0x29d8630();
   input += synapse0x29d8670();
   input += synapse0x29d86b0();
   input += synapse0x29d86f0();
   input += synapse0x29d8730();
   input += synapse0x29d8770();
   input += synapse0x29d87b0();
   input += synapse0x29d87f0();
   input += synapse0x29d8830();
   input += synapse0x29d8870();
   input += synapse0x29d88b0();
   input += synapse0x29d8a00();
   input += synapse0x29d8340();
   input += synapse0x29d8380();
   input += synapse0x29d9b40();
   input += synapse0x29d9b80();
   input += synapse0x29d9bc0();
   input += synapse0x29d9c00();
   input += synapse0x29d9c40();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29d81b0() {
   double input = input0x29d81b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29d9c80() {
   double input = 1.50384;
   input += synapse0x29d9fc0();
   input += synapse0x29da000();
   input += synapse0x29da040();
   input += synapse0x29da080();
   input += synapse0x29da0c0();
   input += synapse0x29da100();
   input += synapse0x29da140();
   input += synapse0x29da180();
   input += synapse0x29da1c0();
   input += synapse0x279b3f0();
   input += synapse0x279b430();
   input += synapse0x279b470();
   input += synapse0x279b4b0();
   input += synapse0x279b4f0();
   input += synapse0x279b530();
   input += synapse0x279b570();
   input += synapse0x29d9e10();
   input += synapse0x29d9e50();
   input += synapse0x279b6c0();
   input += synapse0x279b700();
   input += synapse0x279b740();
   input += synapse0x279b780();
   input += synapse0x279b7c0();
   input += synapse0x29daa10();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29d9c80() {
   double input = input0x29d9c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29daa50() {
   double input = -3.62934;
   input += synapse0x29dad90();
   input += synapse0x29dadd0();
   input += synapse0x29dae10();
   input += synapse0x29dae50();
   input += synapse0x29dae90();
   input += synapse0x29daed0();
   input += synapse0x29daf10();
   input += synapse0x29daf50();
   input += synapse0x29daf90();
   input += synapse0x29dafd0();
   input += synapse0x29db010();
   input += synapse0x29db050();
   input += synapse0x29db090();
   input += synapse0x29db0d0();
   input += synapse0x29db110();
   input += synapse0x29db150();
   input += synapse0x29dabe0();
   input += synapse0x29dac20();
   input += synapse0x29db2a0();
   input += synapse0x29db2e0();
   input += synapse0x29db320();
   input += synapse0x29db360();
   input += synapse0x29db3a0();
   input += synapse0x29db3e0();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29daa50() {
   double input = input0x29daa50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29db420() {
   double input = -0.143323;
   input += synapse0x29db760();
   input += synapse0x29db7a0();
   input += synapse0x29db7e0();
   input += synapse0x29db820();
   input += synapse0x29db860();
   input += synapse0x29db8a0();
   input += synapse0x29db8e0();
   input += synapse0x29db920();
   input += synapse0x29db960();
   input += synapse0x29db9a0();
   input += synapse0x29db9e0();
   input += synapse0x29dba20();
   input += synapse0x29dba60();
   input += synapse0x29dbaa0();
   input += synapse0x29dbae0();
   input += synapse0x29dbb20();
   input += synapse0x29db5b0();
   input += synapse0x29db5f0();
   input += synapse0x29dbc70();
   input += synapse0x29dbcb0();
   input += synapse0x29dbcf0();
   input += synapse0x29dbd30();
   input += synapse0x29dbd70();
   input += synapse0x29dbdb0();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29db420() {
   double input = input0x29db420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29dbdf0() {
   double input = -1.90297;
   input += synapse0x29d47b0();
   input += synapse0x29d47f0();
   input += synapse0x29d4830();
   input += synapse0x29d4870();
   input += synapse0x29dc340();
   input += synapse0x29dc380();
   input += synapse0x29dc3c0();
   input += synapse0x29dc400();
   input += synapse0x29dc440();
   input += synapse0x29dc480();
   input += synapse0x29dc4c0();
   input += synapse0x29dc500();
   input += synapse0x29dc540();
   input += synapse0x29dc580();
   input += synapse0x29dc5c0();
   input += synapse0x29dc600();
   input += synapse0x29dbf80();
   input += synapse0x29dbfc0();
   input += synapse0x29dc750();
   input += synapse0x29dc790();
   input += synapse0x29dc7d0();
   input += synapse0x29dc810();
   input += synapse0x29dc850();
   input += synapse0x29dc890();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29dbdf0() {
   double input = input0x29dbdf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29dc8d0() {
   double input = -0.534531;
   input += synapse0x29dcc10();
   input += synapse0x29dcc50();
   input += synapse0x29dcc90();
   input += synapse0x29dccd0();
   input += synapse0x29dcd10();
   input += synapse0x29dcd50();
   input += synapse0x29dcd90();
   input += synapse0x29dcdd0();
   input += synapse0x29dce10();
   input += synapse0x29dce50();
   input += synapse0x29dce90();
   input += synapse0x29dced0();
   input += synapse0x29dcf10();
   input += synapse0x29dcf50();
   input += synapse0x29dcf90();
   input += synapse0x29dcfd0();
   input += synapse0x29dca60();
   input += synapse0x29dcaa0();
   input += synapse0x29dd120();
   input += synapse0x29dd160();
   input += synapse0x29dd1a0();
   input += synapse0x29dd1e0();
   input += synapse0x29dd220();
   input += synapse0x29dd260();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29dc8d0() {
   double input = input0x29dc8d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29dd2a0() {
   double input = 0.790774;
   input += synapse0x29dd5e0();
   input += synapse0x29dd620();
   input += synapse0x29dd660();
   input += synapse0x29dd6a0();
   input += synapse0x29dd6e0();
   input += synapse0x29dd720();
   input += synapse0x29dd760();
   input += synapse0x29dd7a0();
   input += synapse0x29dd7e0();
   input += synapse0x29dd820();
   input += synapse0x29dd860();
   input += synapse0x29dd8a0();
   input += synapse0x29dd8e0();
   input += synapse0x29dd920();
   input += synapse0x29dd960();
   input += synapse0x29dd9a0();
   input += synapse0x29dd430();
   input += synapse0x29dd470();
   input += synapse0x29da200();
   input += synapse0x29da240();
   input += synapse0x29da280();
   input += synapse0x29da2c0();
   input += synapse0x29da300();
   input += synapse0x29da340();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29dd2a0() {
   double input = input0x29dd2a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29da380() {
   double input = 1.64563;
   input += synapse0x29da6c0();
   input += synapse0x29da700();
   input += synapse0x29da740();
   input += synapse0x29da780();
   input += synapse0x29da7c0();
   input += synapse0x29da800();
   input += synapse0x29da840();
   input += synapse0x29da880();
   input += synapse0x29da8c0();
   input += synapse0x29da900();
   input += synapse0x29da940();
   input += synapse0x29da980();
   input += synapse0x29da9c0();
   input += synapse0x29deb00();
   input += synapse0x29deb40();
   input += synapse0x29deb80();
   input += synapse0x29da510();
   input += synapse0x29da550();
   input += synapse0x29decd0();
   input += synapse0x29ded10();
   input += synapse0x29ded50();
   input += synapse0x29ded90();
   input += synapse0x29dedd0();
   input += synapse0x29dee10();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29da380() {
   double input = input0x29da380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29dee50() {
   double input = 2.41779;
   input += synapse0x29df190();
   input += synapse0x29df1d0();
   input += synapse0x29df210();
   input += synapse0x29df250();
   input += synapse0x29df290();
   input += synapse0x29df2d0();
   input += synapse0x29df310();
   input += synapse0x29df350();
   input += synapse0x29df390();
   input += synapse0x29df3d0();
   input += synapse0x29df410();
   input += synapse0x29df450();
   input += synapse0x29df490();
   input += synapse0x29df4d0();
   input += synapse0x29df510();
   input += synapse0x29df550();
   input += synapse0x29defe0();
   input += synapse0x29df020();
   input += synapse0x29df6a0();
   input += synapse0x29df6e0();
   input += synapse0x29df720();
   input += synapse0x29df760();
   input += synapse0x29df7a0();
   input += synapse0x29df7e0();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29dee50() {
   double input = input0x29dee50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29df820() {
   double input = 0.784977;
   input += synapse0x29dfb60();
   input += synapse0x29dfba0();
   input += synapse0x29dfbe0();
   input += synapse0x29dfc20();
   input += synapse0x29dfc60();
   input += synapse0x29dfca0();
   input += synapse0x29dfce0();
   input += synapse0x29dfd20();
   input += synapse0x29dfd60();
   input += synapse0x29dfda0();
   input += synapse0x29dfde0();
   input += synapse0x29dfe20();
   input += synapse0x29dfe60();
   input += synapse0x29dfea0();
   input += synapse0x29dfee0();
   input += synapse0x29dff20();
   input += synapse0x29df9b0();
   input += synapse0x29df9f0();
   input += synapse0x29e0070();
   input += synapse0x29e00b0();
   input += synapse0x29e00f0();
   input += synapse0x29e0130();
   input += synapse0x29e0170();
   input += synapse0x29e01b0();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29df820() {
   double input = input0x29df820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29e01f0() {
   double input = -4.55207;
   input += synapse0x29e0530();
   input += synapse0x29e0570();
   input += synapse0x29e05b0();
   input += synapse0x29e05f0();
   input += synapse0x29e0630();
   input += synapse0x29e0670();
   input += synapse0x29e06b0();
   input += synapse0x29e06f0();
   input += synapse0x29e0730();
   input += synapse0x29e0770();
   input += synapse0x29e07b0();
   input += synapse0x29e07f0();
   input += synapse0x29e0830();
   input += synapse0x29e0870();
   input += synapse0x29e08b0();
   input += synapse0x29e08f0();
   input += synapse0x29e0380();
   input += synapse0x29e03c0();
   input += synapse0x29e0a40();
   input += synapse0x29e0a80();
   input += synapse0x29e0ac0();
   input += synapse0x29e0b00();
   input += synapse0x29e0b40();
   input += synapse0x29e0b80();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29e01f0() {
   double input = input0x29e01f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29e0bc0() {
   double input = -0.436774;
   input += synapse0x29e0f00();
   input += synapse0x29d1180();
   input += synapse0x29d11c0();
   input += synapse0x29d14c0();
   input += synapse0x29d1500();
   input += synapse0x29d1800();
   input += synapse0x29d1840();
   input += synapse0x29d1b40();
   input += synapse0x29d1b80();
   input += synapse0x29d1e80();
   input += synapse0x29d1ec0();
   input += synapse0x29d21c0();
   input += synapse0x29d2200();
   input += synapse0x29d2500();
   input += synapse0x29d2540();
   input += synapse0x29d2840();
   input += synapse0x29d2880();
   input += synapse0x29d2b80();
   input += synapse0x29d2bc0();
   input += synapse0x29d2ec0();
   input += synapse0x29d2f00();
   input += synapse0x29d3200();
   input += synapse0x29d3240();
   input += synapse0x29d3540();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29e0bc0() {
   double input = input0x29e0bc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29e29d0() {
   double input = -0.787965;
   input += synapse0x29d3580();
   input += synapse0x29d4240();
   input += synapse0x29d4280();
   input += synapse0x29e0d50();
   input += synapse0x29e0d90();
   input += synapse0x29d4580();
   input += synapse0x29d45c0();
   input += synapse0x29d4ae0();
   input += synapse0x29d4b20();
   input += synapse0x29d4e20();
   input += synapse0x29d4e60();
   input += synapse0x29d5160();
   input += synapse0x29d51a0();
   input += synapse0x29d54a0();
   input += synapse0x29d54e0();
   input += synapse0x29d57e0();
   input += synapse0x29d5820();
   input += synapse0x29d5b20();
   input += synapse0x29d5b60();
   input += synapse0x29d5e60();
   input += synapse0x29d5ea0();
   input += synapse0x29d3880();
   input += synapse0x29d38c0();
   input += synapse0x29e2c70();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29e29d0() {
   double input = input0x29e29d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29e2cb0() {
   double input = 0.127589;
   input += synapse0x29e2ff0();
   input += synapse0x29e3030();
   input += synapse0x29e3070();
   input += synapse0x29e30b0();
   input += synapse0x29e30f0();
   input += synapse0x29e3130();
   input += synapse0x29e3170();
   input += synapse0x29e31b0();
   input += synapse0x29e31f0();
   input += synapse0x29e3230();
   input += synapse0x29e3270();
   input += synapse0x29e32b0();
   input += synapse0x29e32f0();
   input += synapse0x29e3330();
   input += synapse0x29e3370();
   input += synapse0x29e33b0();
   input += synapse0x29e2e40();
   input += synapse0x29e2e80();
   input += synapse0x29e3500();
   input += synapse0x29e3540();
   input += synapse0x29e3580();
   input += synapse0x29e35c0();
   input += synapse0x29e3600();
   input += synapse0x29e3640();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29e2cb0() {
   double input = input0x29e2cb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29e3680() {
   double input = 2.27093;
   input += synapse0x29e39c0();
   input += synapse0x29e3a00();
   input += synapse0x29e3a40();
   input += synapse0x29e3a80();
   input += synapse0x29e3ac0();
   input += synapse0x29e3b00();
   input += synapse0x29e3b40();
   input += synapse0x29e3b80();
   input += synapse0x29e3bc0();
   input += synapse0x29e3c00();
   input += synapse0x29e3c40();
   input += synapse0x29e3c80();
   input += synapse0x29e3cc0();
   input += synapse0x29e3d00();
   input += synapse0x29e3d40();
   input += synapse0x29e3d80();
   input += synapse0x29e3810();
   input += synapse0x29e3850();
   input += synapse0x29e3ed0();
   input += synapse0x29e3f10();
   input += synapse0x29e3f50();
   input += synapse0x29e3f90();
   input += synapse0x29e3fd0();
   input += synapse0x29e4010();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29e3680() {
   double input = input0x29e3680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29e4050() {
   double input = -2.50802;
   input += synapse0x29e4390();
   input += synapse0x29e43d0();
   input += synapse0x29e4410();
   input += synapse0x29e4450();
   input += synapse0x29e4490();
   input += synapse0x29e44d0();
   input += synapse0x29e4510();
   input += synapse0x29e4550();
   input += synapse0x29e4590();
   input += synapse0x29e45d0();
   input += synapse0x29e4610();
   input += synapse0x29e4650();
   input += synapse0x29e4690();
   input += synapse0x29e46d0();
   input += synapse0x29e4710();
   input += synapse0x29e4750();
   input += synapse0x29e41e0();
   input += synapse0x29e4220();
   input += synapse0x29e48a0();
   input += synapse0x29e48e0();
   input += synapse0x29e4920();
   input += synapse0x29e4960();
   input += synapse0x29e49a0();
   input += synapse0x29e49e0();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29e4050() {
   double input = input0x29e4050();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29e4a20() {
   double input = -6.50542;
   input += synapse0x29e4d60();
   input += synapse0x29e4da0();
   input += synapse0x29e4de0();
   input += synapse0x29e4e20();
   input += synapse0x29e4e60();
   input += synapse0x29e4ea0();
   input += synapse0x29e4ee0();
   input += synapse0x29e4f20();
   input += synapse0x29e4f60();
   input += synapse0x29e4fa0();
   input += synapse0x29e4fe0();
   input += synapse0x29e5020();
   input += synapse0x29e5060();
   input += synapse0x29e50a0();
   input += synapse0x29e50e0();
   input += synapse0x29e5120();
   input += synapse0x29e4bb0();
   input += synapse0x29e4bf0();
   input += synapse0x29e5270();
   input += synapse0x29e52b0();
   input += synapse0x29e52f0();
   input += synapse0x29e5330();
   input += synapse0x29e5370();
   input += synapse0x29e53b0();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29e4a20() {
   double input = input0x29e4a20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29e53f0() {
   double input = -0.945519;
   input += synapse0x29e5730();
   input += synapse0x29e5770();
   input += synapse0x29e57b0();
   input += synapse0x29e57f0();
   input += synapse0x29e5830();
   input += synapse0x29e5870();
   input += synapse0x29e58b0();
   input += synapse0x29e58f0();
   input += synapse0x29e5930();
   input += synapse0x29ddaf0();
   input += synapse0x29ddb30();
   input += synapse0x29ddb70();
   input += synapse0x29ddbb0();
   input += synapse0x29ddbf0();
   input += synapse0x29ddc30();
   input += synapse0x29ddc70();
   input += synapse0x29e5580();
   input += synapse0x29e55c0();
   input += synapse0x29dddc0();
   input += synapse0x29dde00();
   input += synapse0x29dde40();
   input += synapse0x29dde80();
   input += synapse0x29ddec0();
   input += synapse0x29ddf00();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29e53f0() {
   double input = input0x29e53f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29ddf40() {
   double input = -0.455977;
   input += synapse0x29de280();
   input += synapse0x29de2c0();
   input += synapse0x29de300();
   input += synapse0x29de340();
   input += synapse0x29de380();
   input += synapse0x29de3c0();
   input += synapse0x29de400();
   input += synapse0x29de440();
   input += synapse0x29de480();
   input += synapse0x29de4c0();
   input += synapse0x29de500();
   input += synapse0x29de540();
   input += synapse0x29de580();
   input += synapse0x29de5c0();
   input += synapse0x29de600();
   input += synapse0x29de640();
   input += synapse0x29de0d0();
   input += synapse0x29de110();
   input += synapse0x29de790();
   input += synapse0x29de7d0();
   input += synapse0x29de810();
   input += synapse0x29de850();
   input += synapse0x29de890();
   input += synapse0x29de8d0();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29ddf40() {
   double input = input0x29ddf40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29de910() {
   double input = 0.288225;
   input += synapse0x29deaa0();
   input += synapse0x29e7b30();
   input += synapse0x29e7b70();
   input += synapse0x29e7bb0();
   input += synapse0x29e7bf0();
   input += synapse0x29e7c30();
   input += synapse0x29e7c70();
   input += synapse0x29e7cb0();
   input += synapse0x29e7cf0();
   input += synapse0x29e7d30();
   input += synapse0x29e7d70();
   input += synapse0x29e7db0();
   input += synapse0x29e7df0();
   input += synapse0x29e7e30();
   input += synapse0x29e7e70();
   input += synapse0x29e7eb0();
   input += synapse0x29e7980();
   input += synapse0x29e79c0();
   input += synapse0x29e8000();
   input += synapse0x29e8040();
   input += synapse0x29e8080();
   input += synapse0x29e80c0();
   input += synapse0x29e8100();
   input += synapse0x29e8140();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29de910() {
   double input = input0x29de910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29e8180() {
   double input = -2.01642;
   input += synapse0x29e84c0();
   input += synapse0x29e8500();
   input += synapse0x29e8540();
   input += synapse0x29e8580();
   input += synapse0x29e85c0();
   input += synapse0x29e8600();
   input += synapse0x29e8640();
   input += synapse0x29e8680();
   input += synapse0x29e86c0();
   input += synapse0x29e8700();
   input += synapse0x29e8740();
   input += synapse0x29e8780();
   input += synapse0x29e87c0();
   input += synapse0x29e8800();
   input += synapse0x29e8840();
   input += synapse0x29e8880();
   input += synapse0x29e8310();
   input += synapse0x29e8350();
   input += synapse0x29e89d0();
   input += synapse0x29e8a10();
   input += synapse0x29e8a50();
   input += synapse0x29e8a90();
   input += synapse0x29e8ad0();
   input += synapse0x29e8b10();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29e8180() {
   double input = input0x29e8180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29e8b50() {
   double input = -1.17274;
   input += synapse0x29e8e90();
   input += synapse0x29e8ed0();
   input += synapse0x29e8f10();
   input += synapse0x29e8f50();
   input += synapse0x29e8f90();
   input += synapse0x29e8fd0();
   input += synapse0x29e9010();
   input += synapse0x29e9050();
   input += synapse0x29e9090();
   input += synapse0x29e90d0();
   input += synapse0x29e9110();
   input += synapse0x29e9150();
   input += synapse0x29e9190();
   input += synapse0x29e91d0();
   input += synapse0x29e9210();
   input += synapse0x29e9250();
   input += synapse0x29e8ce0();
   input += synapse0x29e8d20();
   input += synapse0x29e93a0();
   input += synapse0x29e93e0();
   input += synapse0x29e9420();
   input += synapse0x29e9460();
   input += synapse0x29e94a0();
   input += synapse0x29e94e0();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29e8b50() {
   double input = input0x29e8b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29e9520() {
   double input = -2.15867;
   input += synapse0x29e9860();
   input += synapse0x29e98a0();
   input += synapse0x29e98e0();
   input += synapse0x29e9920();
   input += synapse0x29e9960();
   input += synapse0x29e99a0();
   input += synapse0x29e99e0();
   input += synapse0x29e9a20();
   input += synapse0x29e9a60();
   input += synapse0x29e9aa0();
   input += synapse0x29e9ae0();
   input += synapse0x29e9b20();
   input += synapse0x29e9b60();
   input += synapse0x29e9ba0();
   input += synapse0x29e9be0();
   input += synapse0x29e9c20();
   input += synapse0x29e96b0();
   input += synapse0x29e96f0();
   input += synapse0x29e9d70();
   input += synapse0x29e9db0();
   input += synapse0x29e9df0();
   input += synapse0x29e9e30();
   input += synapse0x29e9e70();
   input += synapse0x29e9eb0();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29e9520() {
   double input = input0x29e9520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29e9ef0() {
   double input = -1.50505;
   input += synapse0x29ea230();
   input += synapse0x29ea270();
   input += synapse0x29ea2b0();
   input += synapse0x29ea2f0();
   input += synapse0x29ea330();
   input += synapse0x29ea370();
   input += synapse0x29ea3b0();
   input += synapse0x29ea3f0();
   input += synapse0x29ea430();
   input += synapse0x29ea470();
   input += synapse0x29ea4b0();
   input += synapse0x29ea4f0();
   input += synapse0x29ea530();
   input += synapse0x29ea570();
   input += synapse0x29ea5b0();
   input += synapse0x29ea5f0();
   input += synapse0x29ea080();
   input += synapse0x29ea0c0();
   input += synapse0x29ea740();
   input += synapse0x29ea780();
   input += synapse0x29ea7c0();
   input += synapse0x29ea800();
   input += synapse0x29ea840();
   input += synapse0x29ea880();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29e9ef0() {
   double input = input0x29e9ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29ea8c0() {
   double input = 0.733671;
   input += synapse0x29eac00();
   input += synapse0x29eac40();
   input += synapse0x29eac80();
   input += synapse0x29eacc0();
   input += synapse0x29ead00();
   input += synapse0x29ead40();
   input += synapse0x29ead80();
   input += synapse0x29eadc0();
   input += synapse0x29eae00();
   input += synapse0x29eae40();
   input += synapse0x29eae80();
   input += synapse0x29eaec0();
   input += synapse0x29eaf00();
   input += synapse0x29eaf40();
   input += synapse0x29eaf80();
   input += synapse0x29eafc0();
   input += synapse0x29eaa50();
   input += synapse0x29eaa90();
   input += synapse0x29eb110();
   input += synapse0x29eb150();
   input += synapse0x29eb190();
   input += synapse0x29eb1d0();
   input += synapse0x29eb210();
   input += synapse0x29eb250();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29ea8c0() {
   double input = input0x29ea8c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29eb290() {
   double input = 2.07869;
   input += synapse0x29eb5d0();
   input += synapse0x29eb610();
   input += synapse0x29eb650();
   input += synapse0x29eb690();
   input += synapse0x29eb6d0();
   input += synapse0x29eb710();
   input += synapse0x29eb750();
   input += synapse0x29eb790();
   input += synapse0x29eb7d0();
   input += synapse0x29eb810();
   input += synapse0x29eb850();
   input += synapse0x29eb890();
   input += synapse0x29eb8d0();
   input += synapse0x29eb910();
   input += synapse0x29eb950();
   input += synapse0x29eb990();
   input += synapse0x29eb420();
   input += synapse0x29eb460();
   input += synapse0x29ebae0();
   input += synapse0x29ebb20();
   input += synapse0x29ebb60();
   input += synapse0x29ebba0();
   input += synapse0x29ebbe0();
   input += synapse0x29ebc20();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29eb290() {
   double input = input0x29eb290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29ebc60() {
   double input = -0.865937;
   input += synapse0x29ebfa0();
   input += synapse0x29ebfe0();
   input += synapse0x29ec020();
   input += synapse0x29ec060();
   input += synapse0x29ec0a0();
   input += synapse0x29ec0e0();
   input += synapse0x29ec120();
   input += synapse0x29ec160();
   input += synapse0x29ec1a0();
   input += synapse0x29ec1e0();
   input += synapse0x29ec220();
   input += synapse0x29ec260();
   input += synapse0x29ec2a0();
   input += synapse0x29ec2e0();
   input += synapse0x29ec320();
   input += synapse0x29ec360();
   input += synapse0x29ebdf0();
   input += synapse0x29ebe30();
   input += synapse0x29ec4b0();
   input += synapse0x29ec4f0();
   input += synapse0x29ec530();
   input += synapse0x29ec570();
   input += synapse0x29ec5b0();
   input += synapse0x29ec5f0();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29ebc60() {
   double input = input0x29ebc60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29ec630() {
   double input = -0.052659;
   input += synapse0x29ec970();
   input += synapse0x29e0f40();
   input += synapse0x29e0f80();
   input += synapse0x29e0fc0();
   input += synapse0x29e1210();
   input += synapse0x29e1250();
   input += synapse0x29e1290();
   input += synapse0x29e14e0();
   input += synapse0x29e1520();
   input += synapse0x29e1770();
   input += synapse0x29e17b0();
   input += synapse0x29e17f0();
   input += synapse0x29e1a40();
   input += synapse0x29e1a80();
   input += synapse0x29e1cd0();
   input += synapse0x29e1d10();
   input += synapse0x29ec7c0();
   input += synapse0x29ec800();
   input += synapse0x29e1e60();
   input += synapse0x29e2370();
   input += synapse0x29e23b0();
   input += synapse0x29e23f0();
   input += synapse0x29e2640();
   input += synapse0x29e2680();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29ec630() {
   double input = input0x29ec630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29e26c0() {
   double input = 5.03169;
   input += synapse0x29e1f30();
   input += synapse0x29e1f70();
   input += synapse0x29e1fb0();
   input += synapse0x29e1ff0();
   input += synapse0x29e2970();
   input += synapse0x29eecc0();
   input += synapse0x29eed00();
   input += synapse0x29eed40();
   input += synapse0x29eed80();
   input += synapse0x29eedc0();
   input += synapse0x29eee00();
   input += synapse0x29eee40();
   input += synapse0x29eee80();
   input += synapse0x29eeec0();
   input += synapse0x29eef00();
   input += synapse0x29eef40();
   input += synapse0x29e2850();
   input += synapse0x29e2890();
   input += synapse0x29ef090();
   input += synapse0x29ef0d0();
   input += synapse0x29ef110();
   input += synapse0x29ef150();
   input += synapse0x29ef190();
   input += synapse0x29ef1d0();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29e26c0() {
   double input = input0x29e26c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29ef210() {
   double input = -3.11151;
   input += synapse0x29ef550();
   input += synapse0x29ef590();
   input += synapse0x29ef5d0();
   input += synapse0x29ef610();
   input += synapse0x29ef650();
   input += synapse0x29ef690();
   input += synapse0x29ef6d0();
   input += synapse0x29ef710();
   input += synapse0x29ef750();
   input += synapse0x29ef790();
   input += synapse0x29ef7d0();
   input += synapse0x29ef810();
   input += synapse0x29ef850();
   input += synapse0x29ef890();
   input += synapse0x29ef8d0();
   input += synapse0x29ef910();
   input += synapse0x29ef3a0();
   input += synapse0x29ef3e0();
   input += synapse0x29efa60();
   input += synapse0x29efaa0();
   input += synapse0x29efae0();
   input += synapse0x29efb20();
   input += synapse0x29efb60();
   input += synapse0x29efba0();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29ef210() {
   double input = input0x29ef210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29efbe0() {
   double input = -2.89112;
   input += synapse0x29eff20();
   input += synapse0x29eff60();
   input += synapse0x29effa0();
   input += synapse0x29effe0();
   input += synapse0x29f0020();
   input += synapse0x29f0060();
   input += synapse0x29f00a0();
   input += synapse0x29f00e0();
   input += synapse0x29f0120();
   input += synapse0x29f0160();
   input += synapse0x29f01a0();
   input += synapse0x29f01e0();
   input += synapse0x29f0220();
   input += synapse0x29f0260();
   input += synapse0x29f02a0();
   input += synapse0x29f02e0();
   input += synapse0x29efd70();
   input += synapse0x29efdb0();
   input += synapse0x29f0430();
   input += synapse0x29f0470();
   input += synapse0x29f04b0();
   input += synapse0x29f04f0();
   input += synapse0x29f0530();
   input += synapse0x29f0570();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29efbe0() {
   double input = input0x29efbe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29f05b0() {
   double input = 3.19332;
   input += synapse0x29f08f0();
   input += synapse0x29f0930();
   input += synapse0x29f0970();
   input += synapse0x29f09b0();
   input += synapse0x29f09f0();
   input += synapse0x29f0a30();
   input += synapse0x29f0a70();
   input += synapse0x29f0ab0();
   input += synapse0x29f0af0();
   input += synapse0x29f0b30();
   input += synapse0x29f0b70();
   input += synapse0x29f0bb0();
   input += synapse0x29f0bf0();
   input += synapse0x29f0c30();
   input += synapse0x29f0c70();
   input += synapse0x29f0cb0();
   input += synapse0x29f0740();
   input += synapse0x29f0780();
   input += synapse0x29f0e00();
   input += synapse0x29f0e40();
   input += synapse0x29f0e80();
   input += synapse0x29f0ec0();
   input += synapse0x29f0f00();
   input += synapse0x29f0f40();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29f05b0() {
   double input = input0x29f05b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29f0f80() {
   double input = -3.97193;
   input += synapse0x29f12c0();
   input += synapse0x29f1300();
   input += synapse0x29f1340();
   input += synapse0x29f1380();
   input += synapse0x29f13c0();
   input += synapse0x29f1400();
   input += synapse0x29f1440();
   input += synapse0x29f1480();
   input += synapse0x29f14c0();
   input += synapse0x29f1500();
   input += synapse0x29f1540();
   input += synapse0x29f1580();
   input += synapse0x29f15c0();
   input += synapse0x29f1600();
   input += synapse0x29f1640();
   input += synapse0x29f1680();
   input += synapse0x29f1110();
   input += synapse0x29f1150();
   input += synapse0x29f17d0();
   input += synapse0x29f1810();
   input += synapse0x29f1850();
   input += synapse0x29f1890();
   input += synapse0x29f18d0();
   input += synapse0x29f1910();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29f0f80() {
   double input = input0x29f0f80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29f1950() {
   double input = 0.039215;
   input += synapse0x29f1c90();
   input += synapse0x29f1cd0();
   input += synapse0x29f1d10();
   input += synapse0x29f1d50();
   input += synapse0x29f1d90();
   input += synapse0x29f1dd0();
   input += synapse0x29f1e10();
   input += synapse0x29f1e50();
   input += synapse0x29f1e90();
   input += synapse0x29f1ed0();
   input += synapse0x29f1f10();
   input += synapse0x29f1f50();
   input += synapse0x29f1f90();
   input += synapse0x29f1fd0();
   input += synapse0x29f2010();
   input += synapse0x29f2050();
   input += synapse0x29f1ae0();
   input += synapse0x29f1b20();
   input += synapse0x29f21a0();
   input += synapse0x29f21e0();
   input += synapse0x29f2220();
   input += synapse0x29f2260();
   input += synapse0x29f22a0();
   input += synapse0x29f22e0();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29f1950() {
   double input = input0x29f1950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29f2320() {
   double input = 0.442551;
   input += synapse0x29f2660();
   input += synapse0x29f26a0();
   input += synapse0x29f26e0();
   input += synapse0x29f2720();
   input += synapse0x29f2760();
   input += synapse0x29f27a0();
   input += synapse0x29f27e0();
   input += synapse0x29f2820();
   input += synapse0x29f2860();
   input += synapse0x29f28a0();
   input += synapse0x29f28e0();
   input += synapse0x29f2920();
   input += synapse0x29f2960();
   input += synapse0x29f29a0();
   input += synapse0x29f29e0();
   input += synapse0x29f2a20();
   input += synapse0x29f24b0();
   input += synapse0x29f24f0();
   input += synapse0x29f2b70();
   input += synapse0x29f2bb0();
   input += synapse0x29f2bf0();
   input += synapse0x29f2c30();
   input += synapse0x29f2c70();
   input += synapse0x29f2cb0();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29f2320() {
   double input = input0x29f2320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29f2cf0() {
   double input = 0.382445;
   input += synapse0x29f3030();
   input += synapse0x29f3070();
   input += synapse0x29f30b0();
   input += synapse0x29f30f0();
   input += synapse0x29f3130();
   input += synapse0x29f3170();
   input += synapse0x29f31b0();
   input += synapse0x29f31f0();
   input += synapse0x29f3230();
   input += synapse0x29f3270();
   input += synapse0x29f32b0();
   input += synapse0x29f32f0();
   input += synapse0x29f3330();
   input += synapse0x29f3370();
   input += synapse0x29f33b0();
   input += synapse0x29f33f0();
   input += synapse0x29f2e80();
   input += synapse0x29f2ec0();
   input += synapse0x29f3540();
   input += synapse0x29f3580();
   input += synapse0x29f35c0();
   input += synapse0x29f3600();
   input += synapse0x29f3640();
   input += synapse0x29f3680();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29f2cf0() {
   double input = input0x29f2cf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29f36c0() {
   double input = -2.50119;
   input += synapse0x29dc130();
   input += synapse0x29dc170();
   input += synapse0x29dc1b0();
   input += synapse0x29dc1f0();
   input += synapse0x29dc230();
   input += synapse0x29dc270();
   input += synapse0x29dc2b0();
   input += synapse0x29dc2f0();
   input += synapse0x29f3e10();
   input += synapse0x29f3e50();
   input += synapse0x29f3e90();
   input += synapse0x29f3ed0();
   input += synapse0x29f3f10();
   input += synapse0x29f3f50();
   input += synapse0x29f3f90();
   input += synapse0x29f3fd0();
   input += synapse0x29f3850();
   input += synapse0x29f3890();
   input += synapse0x29f4120();
   input += synapse0x29f4160();
   input += synapse0x29f41a0();
   input += synapse0x29f41e0();
   input += synapse0x29f4220();
   input += synapse0x29f4260();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29f36c0() {
   double input = input0x29f36c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29f42a0() {
   double input = -0.117197;
   input += synapse0x29f45e0();
   input += synapse0x29f4620();
   input += synapse0x29f4660();
   input += synapse0x29f46a0();
   input += synapse0x29f46e0();
   input += synapse0x29f4720();
   input += synapse0x29f4760();
   input += synapse0x29f47a0();
   input += synapse0x29f47e0();
   input += synapse0x29f4820();
   input += synapse0x29f4860();
   input += synapse0x29f48a0();
   input += synapse0x29f48e0();
   input += synapse0x29f4920();
   input += synapse0x29f4960();
   input += synapse0x29f49a0();
   input += synapse0x29f4430();
   input += synapse0x29f4470();
   input += synapse0x29f4af0();
   input += synapse0x29f4b30();
   input += synapse0x29f4b70();
   input += synapse0x29f4bb0();
   input += synapse0x29f4bf0();
   input += synapse0x29f4c30();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29f42a0() {
   double input = input0x29f42a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29f4c70() {
   double input = 0.15155;
   input += synapse0x29f4fb0();
   input += synapse0x29f4ff0();
   input += synapse0x29f5030();
   input += synapse0x29f5070();
   input += synapse0x29f50b0();
   input += synapse0x29f50f0();
   input += synapse0x29f5130();
   input += synapse0x29f5170();
   input += synapse0x29f51b0();
   input += synapse0x29f51f0();
   input += synapse0x29f5230();
   input += synapse0x29f5270();
   input += synapse0x29f52b0();
   input += synapse0x29f52f0();
   input += synapse0x29f5330();
   input += synapse0x29f5370();
   input += synapse0x29f4e00();
   input += synapse0x29f4e40();
   input += synapse0x29e5970();
   input += synapse0x29e59b0();
   input += synapse0x29e59f0();
   input += synapse0x29e5a30();
   input += synapse0x29e5a70();
   input += synapse0x29e5ab0();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29f4c70() {
   double input = input0x29f4c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29e5af0() {
   double input = -2.18047;
   input += synapse0x29e5e30();
   input += synapse0x29e5e70();
   input += synapse0x29e5eb0();
   input += synapse0x29e5ef0();
   input += synapse0x29e5f30();
   input += synapse0x29e5f70();
   input += synapse0x29e5fb0();
   input += synapse0x29e5ff0();
   input += synapse0x29e6030();
   input += synapse0x29e6070();
   input += synapse0x29e60b0();
   input += synapse0x29e60f0();
   input += synapse0x29e6130();
   input += synapse0x29e6170();
   input += synapse0x29e61b0();
   input += synapse0x29e61f0();
   input += synapse0x29e5c80();
   input += synapse0x29e5cc0();
   input += synapse0x29e6340();
   input += synapse0x29e6380();
   input += synapse0x29e63c0();
   input += synapse0x29e6400();
   input += synapse0x29e6440();
   input += synapse0x29e6480();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29e5af0() {
   double input = input0x29e5af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29e64c0() {
   double input = -0.479108;
   input += synapse0x29e6800();
   input += synapse0x29e6840();
   input += synapse0x29e6880();
   input += synapse0x29e68c0();
   input += synapse0x29e6900();
   input += synapse0x29e6940();
   input += synapse0x29e6980();
   input += synapse0x29e69c0();
   input += synapse0x29e6a00();
   input += synapse0x29e6a40();
   input += synapse0x29e6a80();
   input += synapse0x29e6ac0();
   input += synapse0x29e6b00();
   input += synapse0x29e6b40();
   input += synapse0x29e6b80();
   input += synapse0x29e6bc0();
   input += synapse0x29e6650();
   input += synapse0x29e6690();
   input += synapse0x29e6d10();
   input += synapse0x29e6d50();
   input += synapse0x29e6d90();
   input += synapse0x29e6dd0();
   input += synapse0x29e6e10();
   input += synapse0x29e6e50();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29e64c0() {
   double input = input0x29e64c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29e6e90() {
   double input = -3.46196;
   input += synapse0x29e71d0();
   input += synapse0x29e7210();
   input += synapse0x29e7250();
   input += synapse0x29e7290();
   input += synapse0x29e72d0();
   input += synapse0x29e7310();
   input += synapse0x29e7350();
   input += synapse0x29e7390();
   input += synapse0x29e73d0();
   input += synapse0x29e7410();
   input += synapse0x29e7450();
   input += synapse0x29e7490();
   input += synapse0x29e74d0();
   input += synapse0x29e7510();
   input += synapse0x29e7550();
   input += synapse0x29e7590();
   input += synapse0x29e7020();
   input += synapse0x29e7060();
   input += synapse0x29e76e0();
   input += synapse0x29e7720();
   input += synapse0x29e7760();
   input += synapse0x29e77a0();
   input += synapse0x29e77e0();
   input += synapse0x29e7820();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29e6e90() {
   double input = input0x29e6e90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29f94d0() {
   double input = -1.29148;
   input += synapse0x29f96f0();
   input += synapse0x29f9730();
   input += synapse0x29f9770();
   input += synapse0x29f97b0();
   input += synapse0x29f97f0();
   input += synapse0x29f9830();
   input += synapse0x29f9870();
   input += synapse0x29f98b0();
   input += synapse0x29f98f0();
   input += synapse0x29f9930();
   input += synapse0x29f9970();
   input += synapse0x29f99b0();
   input += synapse0x29f99f0();
   input += synapse0x29f9a30();
   input += synapse0x29f9a70();
   input += synapse0x29f9ab0();
   input += synapse0x29e7860();
   input += synapse0x29e78a0();
   input += synapse0x29f9c00();
   input += synapse0x29f9c40();
   input += synapse0x29f9c80();
   input += synapse0x29f9cc0();
   input += synapse0x29f9d00();
   input += synapse0x29f9d40();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29f94d0() {
   double input = input0x29f94d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29f9d80() {
   double input = 0.286865;
   input += synapse0x29fa0c0();
   input += synapse0x29fa100();
   input += synapse0x29fa140();
   input += synapse0x29fa180();
   input += synapse0x29fa1c0();
   input += synapse0x29fa200();
   input += synapse0x29fa240();
   input += synapse0x29fa280();
   input += synapse0x29fa2c0();
   input += synapse0x29fa300();
   input += synapse0x29fa340();
   input += synapse0x29fa380();
   input += synapse0x29fa3c0();
   input += synapse0x29fa400();
   input += synapse0x29fa440();
   input += synapse0x29fa480();
   input += synapse0x29f9f10();
   input += synapse0x29f9f50();
   input += synapse0x29fa5d0();
   input += synapse0x29fa610();
   input += synapse0x29fa650();
   input += synapse0x29fa690();
   input += synapse0x29fa6d0();
   input += synapse0x29fa710();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29f9d80() {
   double input = input0x29f9d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29fa750() {
   double input = 3.5169;
   input += synapse0x29faa90();
   input += synapse0x29faad0();
   input += synapse0x29fab10();
   input += synapse0x29fab50();
   input += synapse0x29fab90();
   input += synapse0x29fabd0();
   input += synapse0x29fac10();
   input += synapse0x29fac50();
   input += synapse0x29fac90();
   input += synapse0x29facd0();
   input += synapse0x29fad10();
   input += synapse0x29fad50();
   input += synapse0x29fad90();
   input += synapse0x29fadd0();
   input += synapse0x29fae10();
   input += synapse0x29fae50();
   input += synapse0x29fa8e0();
   input += synapse0x29fa920();
   input += synapse0x29fafa0();
   input += synapse0x29fafe0();
   input += synapse0x29fb020();
   input += synapse0x29fb060();
   input += synapse0x29fb0a0();
   input += synapse0x29fb0e0();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29fa750() {
   double input = input0x29fa750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x29fb120() {
   double input = 0.397628;
   input += synapse0x29fb460();
   input += synapse0x29fb4a0();
   input += synapse0x29fb4e0();
   input += synapse0x29fb520();
   input += synapse0x29fb560();
   input += synapse0x29fb5a0();
   input += synapse0x29fb5e0();
   input += synapse0x29fb620();
   input += synapse0x29fb660();
   input += synapse0x29fb6a0();
   input += synapse0x29fb6e0();
   input += synapse0x29fb720();
   input += synapse0x29fb760();
   input += synapse0x29fb7a0();
   input += synapse0x29fb7e0();
   input += synapse0x29fb820();
   input += synapse0x29fb2b0();
   input += synapse0x29fb2f0();
   input += synapse0x29fb970();
   input += synapse0x29fb9b0();
   input += synapse0x29fb9f0();
   input += synapse0x29fba30();
   input += synapse0x29fba70();
   input += synapse0x29fbab0();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x29fb120() {
   double input = input0x29fb120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x2a02320() {
   double input = -1.27856;
   input += synapse0x279b890();
   input += synapse0x279b8d0();
   input += synapse0x29d8460();
   input += synapse0x29d84a0();
   input += synapse0x29d9f30();
   input += synapse0x29d9f70();
   input += synapse0x29dad00();
   input += synapse0x29dad40();
   input += synapse0x29db6d0();
   input += synapse0x29db710();
   input += synapse0x29dc0a0();
   input += synapse0x29dc0e0();
   input += synapse0x29dcb80();
   input += synapse0x29dcbc0();
   input += synapse0x29dd550();
   input += synapse0x29dd590();
   input += synapse0x29da630();
   input += synapse0x29da670();
   input += synapse0x29df100();
   input += synapse0x29df140();
   input += synapse0x29dfad0();
   input += synapse0x29dfb10();
   input += synapse0x29e04a0();
   input += synapse0x29e04e0();
   input += synapse0x29e0e70();
   input += synapse0x29e0eb0();
   input += synapse0x29d3f00();
   input += synapse0x29d3f40();
   input += synapse0x29e2f60();
   input += synapse0x29e2fa0();
   input += synapse0x29e3930();
   input += synapse0x29e3970();
   input += synapse0x29e4300();
   input += synapse0x29e4340();
   input += synapse0x29e4cd0();
   input += synapse0x29e4d10();
   input += synapse0x29e56a0();
   input += synapse0x29e56e0();
   input += synapse0x29de1f0();
   input += synapse0x29de230();
   input += synapse0x29e7aa0();
   input += synapse0x29e7ae0();
   input += synapse0x29e8430();
   input += synapse0x29e8470();
   input += synapse0x29e8e00();
   input += synapse0x29e8e40();
   input += synapse0x29e97d0();
   input += synapse0x29e9810();
   input += synapse0x29ea1a0();
   input += synapse0x29ea1e0();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x2a02320() {
   double input = input0x2a02320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x2a026c0() {
   double input = -0.73084;
   input += synapse0x29ec8e0();
   input += synapse0x29ec920();
   input += synapse0x29e1ea0();
   input += synapse0x29e1ee0();
   input += synapse0x29ef4c0();
   input += synapse0x29ef500();
   input += synapse0x29efe90();
   input += synapse0x29efed0();
   input += synapse0x29f0860();
   input += synapse0x29f08a0();
   input += synapse0x29f1230();
   input += synapse0x29f1270();
   input += synapse0x29f1c00();
   input += synapse0x29f1c40();
   input += synapse0x29f25d0();
   input += synapse0x29f2610();
   input += synapse0x29f2fa0();
   input += synapse0x29f2fe0();
   input += synapse0x29f3970();
   input += synapse0x29f39b0();
   input += synapse0x29f4550();
   input += synapse0x29f4590();
   input += synapse0x29f4f20();
   input += synapse0x29f4f60();
   input += synapse0x29e5da0();
   input += synapse0x29e5de0();
   input += synapse0x29e6770();
   input += synapse0x29e67b0();
   input += synapse0x29e7140();
   input += synapse0x29e7180();
   input += synapse0x29f9660();
   input += synapse0x29f96a0();
   input += synapse0x29fa030();
   input += synapse0x29fa070();
   input += synapse0x29faa00();
   input += synapse0x29faa40();
   input += synapse0x29fb3d0();
   input += synapse0x29fb410();
   input += synapse0x29d6360();
   input += synapse0x29d63a0();
   input += synapse0x29eab70();
   input += synapse0x29eabb0();
   input += synapse0x29fbaf0();
   input += synapse0x29fbb30();
   input += synapse0x29fbb70();
   input += synapse0x29fbbb0();
   input += synapse0x2a02a60();
   input += synapse0x2a02aa0();
   input += synapse0x2a02ae0();
   input += synapse0x2a02b20();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x2a026c0() {
   double input = input0x2a026c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x2a02b60() {
   double input = -1.36934;
   input += synapse0x2a02ea0();
   input += synapse0x2a02ee0();
   input += synapse0x2a02f20();
   input += synapse0x2a02f60();
   input += synapse0x2a02fa0();
   input += synapse0x2a02fe0();
   input += synapse0x2a03020();
   input += synapse0x2a03060();
   input += synapse0x2a030a0();
   input += synapse0x2a030e0();
   input += synapse0x2a03120();
   input += synapse0x2a03160();
   input += synapse0x2a031a0();
   input += synapse0x2a031e0();
   input += synapse0x2a03220();
   input += synapse0x2a03260();
   input += synapse0x2a02cf0();
   input += synapse0x2a02d30();
   input += synapse0x2a033b0();
   input += synapse0x2a033f0();
   input += synapse0x2a03430();
   input += synapse0x2a03470();
   input += synapse0x2a034b0();
   input += synapse0x2a034f0();
   input += synapse0x2a03530();
   input += synapse0x2a03570();
   input += synapse0x2a035b0();
   input += synapse0x2a035f0();
   input += synapse0x2a03630();
   input += synapse0x2a03670();
   input += synapse0x2a036b0();
   input += synapse0x2a036f0();
   input += synapse0x2a032a0();
   input += synapse0x2a032e0();
   input += synapse0x2a03320();
   input += synapse0x2a03360();
   input += synapse0x2a03940();
   input += synapse0x2a03980();
   input += synapse0x2a039c0();
   input += synapse0x2a03a00();
   input += synapse0x2a03a40();
   input += synapse0x2a03a80();
   input += synapse0x2a03ac0();
   input += synapse0x2a03b00();
   input += synapse0x2a03b40();
   input += synapse0x2a03b80();
   input += synapse0x2a03bc0();
   input += synapse0x2a03c00();
   input += synapse0x2a03c40();
   input += synapse0x2a03c80();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x2a02b60() {
   double input = input0x2a02b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x2a03cc0() {
   double input = 0.738997;
   input += synapse0x2a04000();
   input += synapse0x2a04040();
   input += synapse0x2a04080();
   input += synapse0x2a040c0();
   input += synapse0x2a04100();
   input += synapse0x2a04140();
   input += synapse0x2a04180();
   input += synapse0x2a041c0();
   input += synapse0x2a04200();
   input += synapse0x2a04240();
   input += synapse0x2a04280();
   input += synapse0x2a042c0();
   input += synapse0x2a04300();
   input += synapse0x2a04340();
   input += synapse0x2a04380();
   input += synapse0x2a043c0();
   input += synapse0x2a03e50();
   input += synapse0x2a03e90();
   input += synapse0x2a04510();
   input += synapse0x2a04550();
   input += synapse0x2a04590();
   input += synapse0x2a045d0();
   input += synapse0x2a04610();
   input += synapse0x2a04650();
   input += synapse0x2a04690();
   input += synapse0x2a046d0();
   input += synapse0x2a04710();
   input += synapse0x2a04750();
   input += synapse0x2a04790();
   input += synapse0x2a047d0();
   input += synapse0x2a04810();
   input += synapse0x2a04850();
   input += synapse0x2a04400();
   input += synapse0x2a04440();
   input += synapse0x2a04480();
   input += synapse0x2a044c0();
   input += synapse0x2a04aa0();
   input += synapse0x2a04ae0();
   input += synapse0x2a04b20();
   input += synapse0x2a04b60();
   input += synapse0x2a04ba0();
   input += synapse0x2a04be0();
   input += synapse0x2a04c20();
   input += synapse0x2a04c60();
   input += synapse0x2a04ca0();
   input += synapse0x2a04ce0();
   input += synapse0x2a04d20();
   input += synapse0x2a04d60();
   input += synapse0x2a04da0();
   input += synapse0x2a04de0();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x2a03cc0() {
   double input = input0x2a03cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x2a04e20() {
   double input = 1.54451;
   input += synapse0x2a05160();
   input += synapse0x2a051a0();
   input += synapse0x2a051e0();
   input += synapse0x2a05220();
   input += synapse0x2a05260();
   input += synapse0x2a052a0();
   input += synapse0x2a052e0();
   input += synapse0x2a05320();
   input += synapse0x2a05360();
   input += synapse0x2a053a0();
   input += synapse0x2a053e0();
   input += synapse0x2a05420();
   input += synapse0x2a05460();
   input += synapse0x2a054a0();
   input += synapse0x2a054e0();
   input += synapse0x2a05520();
   input += synapse0x2a04fb0();
   input += synapse0x2a04ff0();
   input += synapse0x2a05670();
   input += synapse0x2a056b0();
   input += synapse0x2a056f0();
   input += synapse0x2a05730();
   input += synapse0x2a05770();
   input += synapse0x2a057b0();
   input += synapse0x2a057f0();
   input += synapse0x2a05830();
   input += synapse0x2a05870();
   input += synapse0x2a058b0();
   input += synapse0x2a058f0();
   input += synapse0x2a05930();
   input += synapse0x2a05970();
   input += synapse0x2a059b0();
   input += synapse0x2a05560();
   input += synapse0x2a055a0();
   input += synapse0x2a055e0();
   input += synapse0x2a05620();
   input += synapse0x2a05c00();
   input += synapse0x2a05c40();
   input += synapse0x2a05c80();
   input += synapse0x2a05cc0();
   input += synapse0x2a05d00();
   input += synapse0x2a05d40();
   input += synapse0x2a05d80();
   input += synapse0x2a05dc0();
   input += synapse0x2a05e00();
   input += synapse0x2a05e40();
   input += synapse0x2a05e80();
   input += synapse0x2a05ec0();
   input += synapse0x2a05f00();
   input += synapse0x2a05f40();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x2a04e20() {
   double input = input0x2a04e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_chi4::input0x2a05f80() {
   double input = -1.45787;
   input += synapse0x2a061a0();
   input += synapse0x2a061e0();
   input += synapse0x2a06220();
   input += synapse0x2a06260();
   input += synapse0x2a062a0();
   return input;
}

double NNfunction_nn_chi3_chi4::neuron0x2a05f80() {
   double input = input0x2a05f80();
   return (input * 1)+0;
}

double NNfunction_nn_chi3_chi4::synapse0x29d63f0() {
   return (neuron0x29d0ff0()*-0.0245957);
}

double NNfunction_nn_chi3_chi4::synapse0x29d6430() {
   return (neuron0x29d12a0()*-1.04816);
}

double NNfunction_nn_chi3_chi4::synapse0x29d6470() {
   return (neuron0x29d15e0()*-0.721486);
}

double NNfunction_nn_chi3_chi4::synapse0x29d64b0() {
   return (neuron0x29d1920()*0.0265861);
}

double NNfunction_nn_chi3_chi4::synapse0x29d64f0() {
   return (neuron0x29d1c60()*0.0327702);
}

double NNfunction_nn_chi3_chi4::synapse0x29d6530() {
   return (neuron0x29d1fa0()*-0.0229739);
}

double NNfunction_nn_chi3_chi4::synapse0x29d6570() {
   return (neuron0x29d22e0()*-0.202754);
}

double NNfunction_nn_chi3_chi4::synapse0x29d65b0() {
   return (neuron0x29d2620()*0.0223597);
}

double NNfunction_nn_chi3_chi4::synapse0x29d65f0() {
   return (neuron0x29d2960()*-0.0542325);
}

double NNfunction_nn_chi3_chi4::synapse0x29d6630() {
   return (neuron0x29d2ca0()*0.0900879);
}

double NNfunction_nn_chi3_chi4::synapse0x29d6670() {
   return (neuron0x29d2fe0()*0.0839521);
}

double NNfunction_nn_chi3_chi4::synapse0x29d66b0() {
   return (neuron0x29d3320()*-1.09867);
}

double NNfunction_nn_chi3_chi4::synapse0x29d66f0() {
   return (neuron0x29d3660()*-0.03303);
}

double NNfunction_nn_chi3_chi4::synapse0x29d6730() {
   return (neuron0x29d39a0()*0.0510457);
}

double NNfunction_nn_chi3_chi4::synapse0x29d6770() {
   return (neuron0x29d3ce0()*-0.0570242);
}

double NNfunction_nn_chi3_chi4::synapse0x29d67b0() {
   return (neuron0x29d4020()*-0.0371203);
}

double NNfunction_nn_chi3_chi4::synapse0x29d6240() {
   return (neuron0x29d4360()*-0.0669503);
}

double NNfunction_nn_chi3_chi4::synapse0x29d6280() {
   return (neuron0x29d48c0()*-0.0740405);
}

double NNfunction_nn_chi3_chi4::synapse0x278d2b0() {
   return (neuron0x29d4c00()*0.0206528);
}

double NNfunction_nn_chi3_chi4::synapse0x278d2f0() {
   return (neuron0x29d4f40()*-0.00218221);
}

double NNfunction_nn_chi3_chi4::synapse0x29d67f0() {
   return (neuron0x29d5280()*-0.00235155);
}

double NNfunction_nn_chi3_chi4::synapse0x29d6830() {
   return (neuron0x29d55c0()*-0.0111239);
}

double NNfunction_nn_chi3_chi4::synapse0x29d6870() {
   return (neuron0x29d5900()*-0.0697805);
}

double NNfunction_nn_chi3_chi4::synapse0x29d68b0() {
   return (neuron0x29d5c40()*-0.906382);
}

double NNfunction_nn_chi3_chi4::synapse0x29d6c30() {
   return (neuron0x29d0ff0()*-0.574454);
}

double NNfunction_nn_chi3_chi4::synapse0x29d6c70() {
   return (neuron0x29d12a0()*2.72354);
}

double NNfunction_nn_chi3_chi4::synapse0x29d6cb0() {
   return (neuron0x29d15e0()*-2.45079);
}

double NNfunction_nn_chi3_chi4::synapse0x29d6cf0() {
   return (neuron0x29d1920()*0.400126);
}

double NNfunction_nn_chi3_chi4::synapse0x29d6d30() {
   return (neuron0x29d1c60()*0.268749);
}

double NNfunction_nn_chi3_chi4::synapse0x29d6d70() {
   return (neuron0x29d1fa0()*-1.20774);
}

double NNfunction_nn_chi3_chi4::synapse0x29d6db0() {
   return (neuron0x29d22e0()*-1.4442);
}

double NNfunction_nn_chi3_chi4::synapse0x29d6df0() {
   return (neuron0x29d2620()*-0.401797);
}

double NNfunction_nn_chi3_chi4::synapse0x29d6e30() {
   return (neuron0x29d2960()*-1.14253);
}

double NNfunction_nn_chi3_chi4::synapse0x278d100() {
   return (neuron0x29d2ca0()*0.334075);
}

double NNfunction_nn_chi3_chi4::synapse0x278d140() {
   return (neuron0x29d2fe0()*1.22297);
}

double NNfunction_nn_chi3_chi4::synapse0x278d180() {
   return (neuron0x29d3320()*0.906034);
}

double NNfunction_nn_chi3_chi4::synapse0x278d1c0() {
   return (neuron0x29d3660()*-0.0252985);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7080() {
   return (neuron0x29d39a0()*-0.949586);
}

double NNfunction_nn_chi3_chi4::synapse0x29d70c0() {
   return (neuron0x29d3ce0()*1.23404);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7100() {
   return (neuron0x29d4020()*0.749724);
}

double NNfunction_nn_chi3_chi4::synapse0x29d6a80() {
   return (neuron0x29d4360()*-0.314268);
}

double NNfunction_nn_chi3_chi4::synapse0x29d6ac0() {
   return (neuron0x29d48c0()*0.009535);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7250() {
   return (neuron0x29d4c00()*0.751259);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7290() {
   return (neuron0x29d4f40()*0.0759578);
}

double NNfunction_nn_chi3_chi4::synapse0x29d72d0() {
   return (neuron0x29d5280()*-0.747878);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7310() {
   return (neuron0x29d55c0()*-0.728541);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7350() {
   return (neuron0x29d5900()*0.134066);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7390() {
   return (neuron0x29d5c40()*1.07325);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7710() {
   return (neuron0x29d0ff0()*0.0181092);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7750() {
   return (neuron0x29d12a0()*-0.197941);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7790() {
   return (neuron0x29d15e0()*-0.215603);
}

double NNfunction_nn_chi3_chi4::synapse0x29d77d0() {
   return (neuron0x29d1920()*0.0451523);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7810() {
   return (neuron0x29d1c60()*-0.0686401);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7850() {
   return (neuron0x29d1fa0()*-0.00156405);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7890() {
   return (neuron0x29d22e0()*0.0156834);
}

double NNfunction_nn_chi3_chi4::synapse0x29d78d0() {
   return (neuron0x29d2620()*-0.0241725);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7910() {
   return (neuron0x29d2960()*0.0223258);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7950() {
   return (neuron0x29d2ca0()*0.0414713);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7990() {
   return (neuron0x29d2fe0()*-0.026162);
}

double NNfunction_nn_chi3_chi4::synapse0x29d79d0() {
   return (neuron0x29d3320()*-0.0653134);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7a10() {
   return (neuron0x29d3660()*0.0478628);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7a50() {
   return (neuron0x29d39a0()*0.116495);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7a90() {
   return (neuron0x29d3ce0()*0.0349871);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7ad0() {
   return (neuron0x29d4020()*-0.00873983);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7560() {
   return (neuron0x29d4360()*0.0726451);
}

double NNfunction_nn_chi3_chi4::synapse0x29d75a0() {
   return (neuron0x29d48c0()*0.0375512);
}

double NNfunction_nn_chi3_chi4::synapse0x17caf10() {
   return (neuron0x29d4c00()*0.0309437);
}

double NNfunction_nn_chi3_chi4::synapse0x279b0a0() {
   return (neuron0x29d4f40()*0.0271988);
}

double NNfunction_nn_chi3_chi4::synapse0x279b0e0() {
   return (neuron0x29d5280()*0.0517711);
}

double NNfunction_nn_chi3_chi4::synapse0x29d9a00() {
   return (neuron0x29d55c0()*-0.00466602);
}

double NNfunction_nn_chi3_chi4::synapse0x29d9a40() {
   return (neuron0x29d5900()*-0.026984);
}

double NNfunction_nn_chi3_chi4::synapse0x29d0d30() {
   return (neuron0x29d5c40()*-0.44909);
}

double NNfunction_nn_chi3_chi4::synapse0x29d0e00() {
   return (neuron0x29d0ff0()*-0.27814);
}

double NNfunction_nn_chi3_chi4::synapse0x279b920() {
   return (neuron0x29d12a0()*-0.584266);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7000() {
   return (neuron0x29d15e0()*0.0240638);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7040() {
   return (neuron0x29d1920()*0.0965047);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7c20() {
   return (neuron0x29d1c60()*0.763607);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7c60() {
   return (neuron0x29d1fa0()*0.379992);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7ca0() {
   return (neuron0x29d22e0()*-0.7948);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7ce0() {
   return (neuron0x29d2620()*-0.667717);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7d20() {
   return (neuron0x29d2960()*-1.11426);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7d60() {
   return (neuron0x29d2ca0()*0.422651);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7da0() {
   return (neuron0x29d2fe0()*-0.0192025);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7de0() {
   return (neuron0x29d3320()*-0.0844468);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7e20() {
   return (neuron0x29d3660()*0.491277);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7e60() {
   return (neuron0x29d39a0()*0.720456);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7ea0() {
   return (neuron0x29d3ce0()*0.232131);
}

double NNfunction_nn_chi3_chi4::synapse0x29d7ee0() {
   return (neuron0x29d4020()*-0.143249);
}

double NNfunction_nn_chi3_chi4::synapse0x29d0d70() {
   return (neuron0x29d4360()*0.107938);
}

double NNfunction_nn_chi3_chi4::synapse0x29d0db0() {
   return (neuron0x29d48c0()*-0.0865649);
}

double NNfunction_nn_chi3_chi4::synapse0x29d8030() {
   return (neuron0x29d4c00()*-1.21628);
}

double NNfunction_nn_chi3_chi4::synapse0x29d8070() {
   return (neuron0x29d4f40()*0.0850881);
}

double NNfunction_nn_chi3_chi4::synapse0x29d80b0() {
   return (neuron0x29d5280()*1.3766);
}

double NNfunction_nn_chi3_chi4::synapse0x29d80f0() {
   return (neuron0x29d55c0()*-0.113297);
}

double NNfunction_nn_chi3_chi4::synapse0x29d8130() {
   return (neuron0x29d5900()*0.803892);
}

double NNfunction_nn_chi3_chi4::synapse0x29d8170() {
   return (neuron0x29d5c40()*1.12525);
}

double NNfunction_nn_chi3_chi4::synapse0x29d84f0() {
   return (neuron0x29d0ff0()*0.00945615);
}

double NNfunction_nn_chi3_chi4::synapse0x29d8530() {
   return (neuron0x29d12a0()*-0.603431);
}

double NNfunction_nn_chi3_chi4::synapse0x29d8570() {
   return (neuron0x29d15e0()*0.0273023);
}

double NNfunction_nn_chi3_chi4::synapse0x29d85b0() {
   return (neuron0x29d1920()*-0.0305639);
}

double NNfunction_nn_chi3_chi4::synapse0x29d85f0() {
   return (neuron0x29d1c60()*-0.0311281);
}

double NNfunction_nn_chi3_chi4::synapse0x29d8630() {
   return (neuron0x29d1fa0()*-0.0268969);
}

double NNfunction_nn_chi3_chi4::synapse0x29d8670() {
   return (neuron0x29d22e0()*-0.0194834);
}

double NNfunction_nn_chi3_chi4::synapse0x29d86b0() {
   return (neuron0x29d2620()*0.0199526);
}

double NNfunction_nn_chi3_chi4::synapse0x29d86f0() {
   return (neuron0x29d2960()*-0.0151806);
}

double NNfunction_nn_chi3_chi4::synapse0x29d8730() {
   return (neuron0x29d2ca0()*-0.0311938);
}

double NNfunction_nn_chi3_chi4::synapse0x29d8770() {
   return (neuron0x29d2fe0()*0.00735235);
}

double NNfunction_nn_chi3_chi4::synapse0x29d87b0() {
   return (neuron0x29d3320()*0.747602);
}

double NNfunction_nn_chi3_chi4::synapse0x29d87f0() {
   return (neuron0x29d3660()*-0.00309305);
}

double NNfunction_nn_chi3_chi4::synapse0x29d8830() {
   return (neuron0x29d39a0()*0.0354627);
}

double NNfunction_nn_chi3_chi4::synapse0x29d8870() {
   return (neuron0x29d3ce0()*-0.0166128);
}

double NNfunction_nn_chi3_chi4::synapse0x29d88b0() {
   return (neuron0x29d4020()*-0.0340559);
}

double NNfunction_nn_chi3_chi4::synapse0x29d8a00() {
   return (neuron0x29d4360()*-0.000720803);
}

double NNfunction_nn_chi3_chi4::synapse0x29d8340() {
   return (neuron0x29d48c0()*0.0109578);
}

double NNfunction_nn_chi3_chi4::synapse0x29d8380() {
   return (neuron0x29d4c00()*-0.000862854);
}

double NNfunction_nn_chi3_chi4::synapse0x29d9b40() {
   return (neuron0x29d4f40()*0.0138324);
}

double NNfunction_nn_chi3_chi4::synapse0x29d9b80() {
   return (neuron0x29d5280()*0.045358);
}

double NNfunction_nn_chi3_chi4::synapse0x29d9bc0() {
   return (neuron0x29d55c0()*0.00798558);
}

double NNfunction_nn_chi3_chi4::synapse0x29d9c00() {
   return (neuron0x29d5900()*-0.00854486);
}

double NNfunction_nn_chi3_chi4::synapse0x29d9c40() {
   return (neuron0x29d5c40()*-6.33127);
}

double NNfunction_nn_chi3_chi4::synapse0x29d9fc0() {
   return (neuron0x29d0ff0()*-0.0137058);
}

double NNfunction_nn_chi3_chi4::synapse0x29da000() {
   return (neuron0x29d12a0()*-2.92677);
}

double NNfunction_nn_chi3_chi4::synapse0x29da040() {
   return (neuron0x29d15e0()*1.65561);
}

double NNfunction_nn_chi3_chi4::synapse0x29da080() {
   return (neuron0x29d1920()*-0.0651987);
}

double NNfunction_nn_chi3_chi4::synapse0x29da0c0() {
   return (neuron0x29d1c60()*-0.0491543);
}

double NNfunction_nn_chi3_chi4::synapse0x29da100() {
   return (neuron0x29d1fa0()*-0.0227614);
}

double NNfunction_nn_chi3_chi4::synapse0x29da140() {
   return (neuron0x29d22e0()*-0.0640703);
}

double NNfunction_nn_chi3_chi4::synapse0x29da180() {
   return (neuron0x29d2620()*-0.0059478);
}

double NNfunction_nn_chi3_chi4::synapse0x29da1c0() {
   return (neuron0x29d2960()*-0.0417581);
}

double NNfunction_nn_chi3_chi4::synapse0x279b3f0() {
   return (neuron0x29d2ca0()*0.0080479);
}

double NNfunction_nn_chi3_chi4::synapse0x279b430() {
   return (neuron0x29d2fe0()*0.0772952);
}

double NNfunction_nn_chi3_chi4::synapse0x279b470() {
   return (neuron0x29d3320()*0.032884);
}

double NNfunction_nn_chi3_chi4::synapse0x279b4b0() {
   return (neuron0x29d3660()*-0.00584167);
}

double NNfunction_nn_chi3_chi4::synapse0x279b4f0() {
   return (neuron0x29d39a0()*0.00391923);
}

double NNfunction_nn_chi3_chi4::synapse0x279b530() {
   return (neuron0x29d3ce0()*-0.0164275);
}

double NNfunction_nn_chi3_chi4::synapse0x279b570() {
   return (neuron0x29d4020()*-0.119069);
}

double NNfunction_nn_chi3_chi4::synapse0x29d9e10() {
   return (neuron0x29d4360()*-0.0220421);
}

double NNfunction_nn_chi3_chi4::synapse0x29d9e50() {
   return (neuron0x29d48c0()*-0.0753194);
}

double NNfunction_nn_chi3_chi4::synapse0x279b6c0() {
   return (neuron0x29d4c00()*0.0471795);
}

double NNfunction_nn_chi3_chi4::synapse0x279b700() {
   return (neuron0x29d4f40()*0.0606522);
}

double NNfunction_nn_chi3_chi4::synapse0x279b740() {
   return (neuron0x29d5280()*0.0312565);
}

double NNfunction_nn_chi3_chi4::synapse0x279b780() {
   return (neuron0x29d55c0()*-0.060476);
}

double NNfunction_nn_chi3_chi4::synapse0x279b7c0() {
   return (neuron0x29d5900()*-0.0210897);
}

double NNfunction_nn_chi3_chi4::synapse0x29daa10() {
   return (neuron0x29d5c40()*1.29223);
}

double NNfunction_nn_chi3_chi4::synapse0x29dad90() {
   return (neuron0x29d0ff0()*0.0195498);
}

double NNfunction_nn_chi3_chi4::synapse0x29dadd0() {
   return (neuron0x29d12a0()*-3.45664);
}

double NNfunction_nn_chi3_chi4::synapse0x29dae10() {
   return (neuron0x29d15e0()*-0.183863);
}

double NNfunction_nn_chi3_chi4::synapse0x29dae50() {
   return (neuron0x29d1920()*0.0360242);
}

double NNfunction_nn_chi3_chi4::synapse0x29dae90() {
   return (neuron0x29d1c60()*-0.0189952);
}

double NNfunction_nn_chi3_chi4::synapse0x29daed0() {
   return (neuron0x29d1fa0()*-0.0530274);
}

double NNfunction_nn_chi3_chi4::synapse0x29daf10() {
   return (neuron0x29d22e0()*-0.0611078);
}

double NNfunction_nn_chi3_chi4::synapse0x29daf50() {
   return (neuron0x29d2620()*-0.0452425);
}

double NNfunction_nn_chi3_chi4::synapse0x29daf90() {
   return (neuron0x29d2960()*0.00948344);
}

double NNfunction_nn_chi3_chi4::synapse0x29dafd0() {
   return (neuron0x29d2ca0()*-0.00459418);
}

double NNfunction_nn_chi3_chi4::synapse0x29db010() {
   return (neuron0x29d2fe0()*0.0376227);
}

double NNfunction_nn_chi3_chi4::synapse0x29db050() {
   return (neuron0x29d3320()*-0.326329);
}

double NNfunction_nn_chi3_chi4::synapse0x29db090() {
   return (neuron0x29d3660()*-0.0844259);
}

double NNfunction_nn_chi3_chi4::synapse0x29db0d0() {
   return (neuron0x29d39a0()*-0.000164805);
}

double NNfunction_nn_chi3_chi4::synapse0x29db110() {
   return (neuron0x29d3ce0()*0.0539973);
}

double NNfunction_nn_chi3_chi4::synapse0x29db150() {
   return (neuron0x29d4020()*-0.033564);
}

double NNfunction_nn_chi3_chi4::synapse0x29dabe0() {
   return (neuron0x29d4360()*-0.0316032);
}

double NNfunction_nn_chi3_chi4::synapse0x29dac20() {
   return (neuron0x29d48c0()*0.034896);
}

double NNfunction_nn_chi3_chi4::synapse0x29db2a0() {
   return (neuron0x29d4c00()*-0.0423683);
}

double NNfunction_nn_chi3_chi4::synapse0x29db2e0() {
   return (neuron0x29d4f40()*0.0755009);
}

double NNfunction_nn_chi3_chi4::synapse0x29db320() {
   return (neuron0x29d5280()*-0.0321404);
}

double NNfunction_nn_chi3_chi4::synapse0x29db360() {
   return (neuron0x29d55c0()*0.00295936);
}

double NNfunction_nn_chi3_chi4::synapse0x29db3a0() {
   return (neuron0x29d5900()*-0.0207028);
}

double NNfunction_nn_chi3_chi4::synapse0x29db3e0() {
   return (neuron0x29d5c40()*-3.89673);
}

double NNfunction_nn_chi3_chi4::synapse0x29db760() {
   return (neuron0x29d0ff0()*0.0237168);
}

double NNfunction_nn_chi3_chi4::synapse0x29db7a0() {
   return (neuron0x29d12a0()*-2.14801);
}

double NNfunction_nn_chi3_chi4::synapse0x29db7e0() {
   return (neuron0x29d15e0()*0.503187);
}

double NNfunction_nn_chi3_chi4::synapse0x29db820() {
   return (neuron0x29d1920()*0.0272421);
}

double NNfunction_nn_chi3_chi4::synapse0x29db860() {
   return (neuron0x29d1c60()*0.00278421);
}

double NNfunction_nn_chi3_chi4::synapse0x29db8a0() {
   return (neuron0x29d1fa0()*-0.0515852);
}

double NNfunction_nn_chi3_chi4::synapse0x29db8e0() {
   return (neuron0x29d22e0()*-0.0443957);
}

double NNfunction_nn_chi3_chi4::synapse0x29db920() {
   return (neuron0x29d2620()*-0.0409341);
}

double NNfunction_nn_chi3_chi4::synapse0x29db960() {
   return (neuron0x29d2960()*-0.0159074);
}

double NNfunction_nn_chi3_chi4::synapse0x29db9a0() {
   return (neuron0x29d2ca0()*-0.0455626);
}

double NNfunction_nn_chi3_chi4::synapse0x29db9e0() {
   return (neuron0x29d2fe0()*0.0455765);
}

double NNfunction_nn_chi3_chi4::synapse0x29dba20() {
   return (neuron0x29d3320()*-0.628413);
}

double NNfunction_nn_chi3_chi4::synapse0x29dba60() {
   return (neuron0x29d3660()*-0.0145919);
}

double NNfunction_nn_chi3_chi4::synapse0x29dbaa0() {
   return (neuron0x29d39a0()*0.0268508);
}

double NNfunction_nn_chi3_chi4::synapse0x29dbae0() {
   return (neuron0x29d3ce0()*-0.177993);
}

double NNfunction_nn_chi3_chi4::synapse0x29dbb20() {
   return (neuron0x29d4020()*0.0168909);
}

double NNfunction_nn_chi3_chi4::synapse0x29db5b0() {
   return (neuron0x29d4360()*0.0234562);
}

double NNfunction_nn_chi3_chi4::synapse0x29db5f0() {
   return (neuron0x29d48c0()*0.0244099);
}

double NNfunction_nn_chi3_chi4::synapse0x29dbc70() {
   return (neuron0x29d4c00()*0.0710403);
}

double NNfunction_nn_chi3_chi4::synapse0x29dbcb0() {
   return (neuron0x29d4f40()*-0.0252269);
}

double NNfunction_nn_chi3_chi4::synapse0x29dbcf0() {
   return (neuron0x29d5280()*0.0183437);
}

double NNfunction_nn_chi3_chi4::synapse0x29dbd30() {
   return (neuron0x29d55c0()*0.0218568);
}

double NNfunction_nn_chi3_chi4::synapse0x29dbd70() {
   return (neuron0x29d5900()*0.0345083);
}

double NNfunction_nn_chi3_chi4::synapse0x29dbdb0() {
   return (neuron0x29d5c40()*2.47616);
}

double NNfunction_nn_chi3_chi4::synapse0x29d47b0() {
   return (neuron0x29d0ff0()*-0.0283532);
}

double NNfunction_nn_chi3_chi4::synapse0x29d47f0() {
   return (neuron0x29d12a0()*0.875003);
}

double NNfunction_nn_chi3_chi4::synapse0x29d4830() {
   return (neuron0x29d15e0()*0.112912);
}

double NNfunction_nn_chi3_chi4::synapse0x29d4870() {
   return (neuron0x29d1920()*-0.0492951);
}

double NNfunction_nn_chi3_chi4::synapse0x29dc340() {
   return (neuron0x29d1c60()*0.0174938);
}

double NNfunction_nn_chi3_chi4::synapse0x29dc380() {
   return (neuron0x29d1fa0()*0.0190144);
}

double NNfunction_nn_chi3_chi4::synapse0x29dc3c0() {
   return (neuron0x29d22e0()*-0.00988308);
}

double NNfunction_nn_chi3_chi4::synapse0x29dc400() {
   return (neuron0x29d2620()*0.0252188);
}

double NNfunction_nn_chi3_chi4::synapse0x29dc440() {
   return (neuron0x29d2960()*0.00932713);
}

double NNfunction_nn_chi3_chi4::synapse0x29dc480() {
   return (neuron0x29d2ca0()*-0.00764532);
}

double NNfunction_nn_chi3_chi4::synapse0x29dc4c0() {
   return (neuron0x29d2fe0()*-0.0172945);
}

double NNfunction_nn_chi3_chi4::synapse0x29dc500() {
   return (neuron0x29d3320()*0.17156);
}

double NNfunction_nn_chi3_chi4::synapse0x29dc540() {
   return (neuron0x29d3660()*0.0130737);
}

double NNfunction_nn_chi3_chi4::synapse0x29dc580() {
   return (neuron0x29d39a0()*-0.0318313);
}

double NNfunction_nn_chi3_chi4::synapse0x29dc5c0() {
   return (neuron0x29d3ce0()*-0.00463167);
}

double NNfunction_nn_chi3_chi4::synapse0x29dc600() {
   return (neuron0x29d4020()*-0.022233);
}

double NNfunction_nn_chi3_chi4::synapse0x29dbf80() {
   return (neuron0x29d4360()*1.27898e-05);
}

double NNfunction_nn_chi3_chi4::synapse0x29dbfc0() {
   return (neuron0x29d48c0()*-0.0157136);
}

double NNfunction_nn_chi3_chi4::synapse0x29dc750() {
   return (neuron0x29d4c00()*-0.0410484);
}

double NNfunction_nn_chi3_chi4::synapse0x29dc790() {
   return (neuron0x29d4f40()*-0.00635998);
}

double NNfunction_nn_chi3_chi4::synapse0x29dc7d0() {
   return (neuron0x29d5280()*0.00238077);
}

double NNfunction_nn_chi3_chi4::synapse0x29dc810() {
   return (neuron0x29d55c0()*-0.0105468);
}

double NNfunction_nn_chi3_chi4::synapse0x29dc850() {
   return (neuron0x29d5900()*-0.0204673);
}

double NNfunction_nn_chi3_chi4::synapse0x29dc890() {
   return (neuron0x29d5c40()*-0.0382228);
}

double NNfunction_nn_chi3_chi4::synapse0x29dcc10() {
   return (neuron0x29d0ff0()*0.15887);
}

double NNfunction_nn_chi3_chi4::synapse0x29dcc50() {
   return (neuron0x29d12a0()*-0.32011);
}

double NNfunction_nn_chi3_chi4::synapse0x29dcc90() {
   return (neuron0x29d15e0()*0.14267);
}

double NNfunction_nn_chi3_chi4::synapse0x29dccd0() {
   return (neuron0x29d1920()*5.13668);
}

double NNfunction_nn_chi3_chi4::synapse0x29dcd10() {
   return (neuron0x29d1c60()*-0.0411378);
}

double NNfunction_nn_chi3_chi4::synapse0x29dcd50() {
   return (neuron0x29d1fa0()*0.288566);
}

double NNfunction_nn_chi3_chi4::synapse0x29dcd90() {
   return (neuron0x29d22e0()*-0.0293834);
}

double NNfunction_nn_chi3_chi4::synapse0x29dcdd0() {
   return (neuron0x29d2620()*0.161156);
}

double NNfunction_nn_chi3_chi4::synapse0x29dce10() {
   return (neuron0x29d2960()*-0.0614492);
}

double NNfunction_nn_chi3_chi4::synapse0x29dce50() {
   return (neuron0x29d2ca0()*-0.0750176);
}

double NNfunction_nn_chi3_chi4::synapse0x29dce90() {
   return (neuron0x29d2fe0()*-0.1053);
}

double NNfunction_nn_chi3_chi4::synapse0x29dced0() {
   return (neuron0x29d3320()*0.035594);
}

double NNfunction_nn_chi3_chi4::synapse0x29dcf10() {
   return (neuron0x29d3660()*-0.292623);
}

double NNfunction_nn_chi3_chi4::synapse0x29dcf50() {
   return (neuron0x29d39a0()*0.243018);
}

double NNfunction_nn_chi3_chi4::synapse0x29dcf90() {
   return (neuron0x29d3ce0()*0.391707);
}

double NNfunction_nn_chi3_chi4::synapse0x29dcfd0() {
   return (neuron0x29d4020()*0.0408294);
}

double NNfunction_nn_chi3_chi4::synapse0x29dca60() {
   return (neuron0x29d4360()*-0.138625);
}

double NNfunction_nn_chi3_chi4::synapse0x29dcaa0() {
   return (neuron0x29d48c0()*0.194352);
}

double NNfunction_nn_chi3_chi4::synapse0x29dd120() {
   return (neuron0x29d4c00()*-0.123971);
}

double NNfunction_nn_chi3_chi4::synapse0x29dd160() {
   return (neuron0x29d4f40()*-0.0204238);
}

double NNfunction_nn_chi3_chi4::synapse0x29dd1a0() {
   return (neuron0x29d5280()*-0.216199);
}

double NNfunction_nn_chi3_chi4::synapse0x29dd1e0() {
   return (neuron0x29d55c0()*-0.0257409);
}

double NNfunction_nn_chi3_chi4::synapse0x29dd220() {
   return (neuron0x29d5900()*0.11446);
}

double NNfunction_nn_chi3_chi4::synapse0x29dd260() {
   return (neuron0x29d5c40()*-0.982043);
}

double NNfunction_nn_chi3_chi4::synapse0x29dd5e0() {
   return (neuron0x29d0ff0()*0.0626291);
}

double NNfunction_nn_chi3_chi4::synapse0x29dd620() {
   return (neuron0x29d12a0()*0.874003);
}

double NNfunction_nn_chi3_chi4::synapse0x29dd660() {
   return (neuron0x29d15e0()*1.04541);
}

double NNfunction_nn_chi3_chi4::synapse0x29dd6a0() {
   return (neuron0x29d1920()*0.237048);
}

double NNfunction_nn_chi3_chi4::synapse0x29dd6e0() {
   return (neuron0x29d1c60()*0.142256);
}

double NNfunction_nn_chi3_chi4::synapse0x29dd720() {
   return (neuron0x29d1fa0()*-0.181872);
}

double NNfunction_nn_chi3_chi4::synapse0x29dd760() {
   return (neuron0x29d22e0()*-0.177626);
}

double NNfunction_nn_chi3_chi4::synapse0x29dd7a0() {
   return (neuron0x29d2620()*-0.0802426);
}

double NNfunction_nn_chi3_chi4::synapse0x29dd7e0() {
   return (neuron0x29d2960()*0.0602481);
}

double NNfunction_nn_chi3_chi4::synapse0x29dd820() {
   return (neuron0x29d2ca0()*-0.122628);
}

double NNfunction_nn_chi3_chi4::synapse0x29dd860() {
   return (neuron0x29d2fe0()*0.139985);
}

double NNfunction_nn_chi3_chi4::synapse0x29dd8a0() {
   return (neuron0x29d3320()*-2.4154);
}

double NNfunction_nn_chi3_chi4::synapse0x29dd8e0() {
   return (neuron0x29d3660()*0.448848);
}

double NNfunction_nn_chi3_chi4::synapse0x29dd920() {
   return (neuron0x29d39a0()*0.0296148);
}

double NNfunction_nn_chi3_chi4::synapse0x29dd960() {
   return (neuron0x29d3ce0()*-0.268556);
}

double NNfunction_nn_chi3_chi4::synapse0x29dd9a0() {
   return (neuron0x29d4020()*0.0634578);
}

double NNfunction_nn_chi3_chi4::synapse0x29dd430() {
   return (neuron0x29d4360()*0.0505456);
}

double NNfunction_nn_chi3_chi4::synapse0x29dd470() {
   return (neuron0x29d48c0()*0.162611);
}

double NNfunction_nn_chi3_chi4::synapse0x29da200() {
   return (neuron0x29d4c00()*0.136698);
}

double NNfunction_nn_chi3_chi4::synapse0x29da240() {
   return (neuron0x29d4f40()*-0.220675);
}

double NNfunction_nn_chi3_chi4::synapse0x29da280() {
   return (neuron0x29d5280()*0.215757);
}

double NNfunction_nn_chi3_chi4::synapse0x29da2c0() {
   return (neuron0x29d55c0()*-0.00661987);
}

double NNfunction_nn_chi3_chi4::synapse0x29da300() {
   return (neuron0x29d5900()*0.0248111);
}

double NNfunction_nn_chi3_chi4::synapse0x29da340() {
   return (neuron0x29d5c40()*-1.75074);
}

double NNfunction_nn_chi3_chi4::synapse0x29da6c0() {
   return (neuron0x29d0ff0()*-0.0431756);
}

double NNfunction_nn_chi3_chi4::synapse0x29da700() {
   return (neuron0x29d12a0()*1.63685);
}

double NNfunction_nn_chi3_chi4::synapse0x29da740() {
   return (neuron0x29d15e0()*0.641018);
}

double NNfunction_nn_chi3_chi4::synapse0x29da780() {
   return (neuron0x29d1920()*0.454417);
}

double NNfunction_nn_chi3_chi4::synapse0x29da7c0() {
   return (neuron0x29d1c60()*-0.354774);
}

double NNfunction_nn_chi3_chi4::synapse0x29da800() {
   return (neuron0x29d1fa0()*-1.18633);
}

double NNfunction_nn_chi3_chi4::synapse0x29da840() {
   return (neuron0x29d22e0()*-0.0507098);
}

double NNfunction_nn_chi3_chi4::synapse0x29da880() {
   return (neuron0x29d2620()*0.962179);
}

double NNfunction_nn_chi3_chi4::synapse0x29da8c0() {
   return (neuron0x29d2960()*0.199662);
}

double NNfunction_nn_chi3_chi4::synapse0x29da900() {
   return (neuron0x29d2ca0()*-0.429841);
}

double NNfunction_nn_chi3_chi4::synapse0x29da940() {
   return (neuron0x29d2fe0()*0.0574607);
}

double NNfunction_nn_chi3_chi4::synapse0x29da980() {
   return (neuron0x29d3320()*0.656775);
}

double NNfunction_nn_chi3_chi4::synapse0x29da9c0() {
   return (neuron0x29d3660()*0.636684);
}

double NNfunction_nn_chi3_chi4::synapse0x29deb00() {
   return (neuron0x29d39a0()*0.41428);
}

double NNfunction_nn_chi3_chi4::synapse0x29deb40() {
   return (neuron0x29d3ce0()*-0.499343);
}

double NNfunction_nn_chi3_chi4::synapse0x29deb80() {
   return (neuron0x29d4020()*-1.11982);
}

double NNfunction_nn_chi3_chi4::synapse0x29da510() {
   return (neuron0x29d4360()*-0.809643);
}

double NNfunction_nn_chi3_chi4::synapse0x29da550() {
   return (neuron0x29d48c0()*0.503621);
}

double NNfunction_nn_chi3_chi4::synapse0x29decd0() {
   return (neuron0x29d4c00()*0.417851);
}

double NNfunction_nn_chi3_chi4::synapse0x29ded10() {
   return (neuron0x29d4f40()*-0.00217857);
}

double NNfunction_nn_chi3_chi4::synapse0x29ded50() {
   return (neuron0x29d5280()*1.41001);
}

double NNfunction_nn_chi3_chi4::synapse0x29ded90() {
   return (neuron0x29d55c0()*1.21307);
}

double NNfunction_nn_chi3_chi4::synapse0x29dedd0() {
   return (neuron0x29d5900()*0.946895);
}

double NNfunction_nn_chi3_chi4::synapse0x29dee10() {
   return (neuron0x29d5c40()*-2.68723);
}

double NNfunction_nn_chi3_chi4::synapse0x29df190() {
   return (neuron0x29d0ff0()*0.00966145);
}

double NNfunction_nn_chi3_chi4::synapse0x29df1d0() {
   return (neuron0x29d12a0()*-0.103214);
}

double NNfunction_nn_chi3_chi4::synapse0x29df210() {
   return (neuron0x29d15e0()*0.229789);
}

double NNfunction_nn_chi3_chi4::synapse0x29df250() {
   return (neuron0x29d1920()*-0.00819266);
}

double NNfunction_nn_chi3_chi4::synapse0x29df290() {
   return (neuron0x29d1c60()*-0.0117368);
}

double NNfunction_nn_chi3_chi4::synapse0x29df2d0() {
   return (neuron0x29d1fa0()*0.0311808);
}

double NNfunction_nn_chi3_chi4::synapse0x29df310() {
   return (neuron0x29d22e0()*0.0221011);
}

double NNfunction_nn_chi3_chi4::synapse0x29df350() {
   return (neuron0x29d2620()*-0.0241491);
}

double NNfunction_nn_chi3_chi4::synapse0x29df390() {
   return (neuron0x29d2960()*0.00454312);
}

double NNfunction_nn_chi3_chi4::synapse0x29df3d0() {
   return (neuron0x29d2ca0()*0.0252019);
}

double NNfunction_nn_chi3_chi4::synapse0x29df410() {
   return (neuron0x29d2fe0()*-0.0111906);
}

double NNfunction_nn_chi3_chi4::synapse0x29df450() {
   return (neuron0x29d3320()*1.5593);
}

double NNfunction_nn_chi3_chi4::synapse0x29df490() {
   return (neuron0x29d3660()*0.00979728);
}

double NNfunction_nn_chi3_chi4::synapse0x29df4d0() {
   return (neuron0x29d39a0()*0.0153035);
}

double NNfunction_nn_chi3_chi4::synapse0x29df510() {
   return (neuron0x29d3ce0()*0.064717);
}

double NNfunction_nn_chi3_chi4::synapse0x29df550() {
   return (neuron0x29d4020()*-0.0207556);
}

double NNfunction_nn_chi3_chi4::synapse0x29defe0() {
   return (neuron0x29d4360()*0.0268966);
}

double NNfunction_nn_chi3_chi4::synapse0x29df020() {
   return (neuron0x29d48c0()*-0.0207633);
}

double NNfunction_nn_chi3_chi4::synapse0x29df6a0() {
   return (neuron0x29d4c00()*-0.0264475);
}

double NNfunction_nn_chi3_chi4::synapse0x29df6e0() {
   return (neuron0x29d4f40()*-0.00391568);
}

double NNfunction_nn_chi3_chi4::synapse0x29df720() {
   return (neuron0x29d5280()*-0.0342704);
}

double NNfunction_nn_chi3_chi4::synapse0x29df760() {
   return (neuron0x29d55c0()*0.0094586);
}

double NNfunction_nn_chi3_chi4::synapse0x29df7a0() {
   return (neuron0x29d5900()*-0.0186151);
}

double NNfunction_nn_chi3_chi4::synapse0x29df7e0() {
   return (neuron0x29d5c40()*4.34578);
}

double NNfunction_nn_chi3_chi4::synapse0x29dfb60() {
   return (neuron0x29d0ff0()*-0.516713);
}

double NNfunction_nn_chi3_chi4::synapse0x29dfba0() {
   return (neuron0x29d12a0()*0.144828);
}

double NNfunction_nn_chi3_chi4::synapse0x29dfbe0() {
   return (neuron0x29d15e0()*-0.086149);
}

double NNfunction_nn_chi3_chi4::synapse0x29dfc20() {
   return (neuron0x29d1920()*0.083897);
}

double NNfunction_nn_chi3_chi4::synapse0x29dfc60() {
   return (neuron0x29d1c60()*0.267161);
}

double NNfunction_nn_chi3_chi4::synapse0x29dfca0() {
   return (neuron0x29d1fa0()*-0.375734);
}

double NNfunction_nn_chi3_chi4::synapse0x29dfce0() {
   return (neuron0x29d22e0()*0.737613);
}

double NNfunction_nn_chi3_chi4::synapse0x29dfd20() {
   return (neuron0x29d2620()*0.18956);
}

double NNfunction_nn_chi3_chi4::synapse0x29dfd60() {
   return (neuron0x29d2960()*-0.27222);
}

double NNfunction_nn_chi3_chi4::synapse0x29dfda0() {
   return (neuron0x29d2ca0()*-0.284093);
}

double NNfunction_nn_chi3_chi4::synapse0x29dfde0() {
   return (neuron0x29d2fe0()*-0.142498);
}

double NNfunction_nn_chi3_chi4::synapse0x29dfe20() {
   return (neuron0x29d3320()*0.41113);
}

double NNfunction_nn_chi3_chi4::synapse0x29dfe60() {
   return (neuron0x29d3660()*0.192824);
}

double NNfunction_nn_chi3_chi4::synapse0x29dfea0() {
   return (neuron0x29d39a0()*0.144417);
}

double NNfunction_nn_chi3_chi4::synapse0x29dfee0() {
   return (neuron0x29d3ce0()*0.145942);
}

double NNfunction_nn_chi3_chi4::synapse0x29dff20() {
   return (neuron0x29d4020()*-0.157162);
}

double NNfunction_nn_chi3_chi4::synapse0x29df9b0() {
   return (neuron0x29d4360()*0.159564);
}

double NNfunction_nn_chi3_chi4::synapse0x29df9f0() {
   return (neuron0x29d48c0()*0.175193);
}

double NNfunction_nn_chi3_chi4::synapse0x29e0070() {
   return (neuron0x29d4c00()*-0.404687);
}

double NNfunction_nn_chi3_chi4::synapse0x29e00b0() {
   return (neuron0x29d4f40()*-0.111984);
}

double NNfunction_nn_chi3_chi4::synapse0x29e00f0() {
   return (neuron0x29d5280()*0.146171);
}

double NNfunction_nn_chi3_chi4::synapse0x29e0130() {
   return (neuron0x29d55c0()*-0.0193783);
}

double NNfunction_nn_chi3_chi4::synapse0x29e0170() {
   return (neuron0x29d5900()*0.0522677);
}

double NNfunction_nn_chi3_chi4::synapse0x29e01b0() {
   return (neuron0x29d5c40()*0.423412);
}

double NNfunction_nn_chi3_chi4::synapse0x29e0530() {
   return (neuron0x29d0ff0()*-0.0834466);
}

double NNfunction_nn_chi3_chi4::synapse0x29e0570() {
   return (neuron0x29d12a0()*0.692806);
}

double NNfunction_nn_chi3_chi4::synapse0x29e05b0() {
   return (neuron0x29d15e0()*-1.71333);
}

double NNfunction_nn_chi3_chi4::synapse0x29e05f0() {
   return (neuron0x29d1920()*0.157996);
}

double NNfunction_nn_chi3_chi4::synapse0x29e0630() {
   return (neuron0x29d1c60()*-0.0437674);
}

double NNfunction_nn_chi3_chi4::synapse0x29e0670() {
   return (neuron0x29d1fa0()*-0.0988235);
}

double NNfunction_nn_chi3_chi4::synapse0x29e06b0() {
   return (neuron0x29d22e0()*-0.0110463);
}

double NNfunction_nn_chi3_chi4::synapse0x29e06f0() {
   return (neuron0x29d2620()*0.00457502);
}

double NNfunction_nn_chi3_chi4::synapse0x29e0730() {
   return (neuron0x29d2960()*0.120355);
}

double NNfunction_nn_chi3_chi4::synapse0x29e0770() {
   return (neuron0x29d2ca0()*0.263113);
}

double NNfunction_nn_chi3_chi4::synapse0x29e07b0() {
   return (neuron0x29d2fe0()*0.023474);
}

double NNfunction_nn_chi3_chi4::synapse0x29e07f0() {
   return (neuron0x29d3320()*-0.299631);
}

double NNfunction_nn_chi3_chi4::synapse0x29e0830() {
   return (neuron0x29d3660()*-0.122734);
}

double NNfunction_nn_chi3_chi4::synapse0x29e0870() {
   return (neuron0x29d39a0()*0.266079);
}

double NNfunction_nn_chi3_chi4::synapse0x29e08b0() {
   return (neuron0x29d3ce0()*0.153908);
}

double NNfunction_nn_chi3_chi4::synapse0x29e08f0() {
   return (neuron0x29d4020()*-0.111576);
}

double NNfunction_nn_chi3_chi4::synapse0x29e0380() {
   return (neuron0x29d4360()*0.0656121);
}

double NNfunction_nn_chi3_chi4::synapse0x29e03c0() {
   return (neuron0x29d48c0()*0.107456);
}

double NNfunction_nn_chi3_chi4::synapse0x29e0a40() {
   return (neuron0x29d4c00()*0.193236);
}

double NNfunction_nn_chi3_chi4::synapse0x29e0a80() {
   return (neuron0x29d4f40()*0.303552);
}

double NNfunction_nn_chi3_chi4::synapse0x29e0ac0() {
   return (neuron0x29d5280()*-0.155013);
}

double NNfunction_nn_chi3_chi4::synapse0x29e0b00() {
   return (neuron0x29d55c0()*0.0627441);
}

double NNfunction_nn_chi3_chi4::synapse0x29e0b40() {
   return (neuron0x29d5900()*0.0200375);
}

double NNfunction_nn_chi3_chi4::synapse0x29e0b80() {
   return (neuron0x29d5c40()*-3.15241);
}

double NNfunction_nn_chi3_chi4::synapse0x29e0f00() {
   return (neuron0x29d0ff0()*-0.062457);
}

double NNfunction_nn_chi3_chi4::synapse0x29d1180() {
   return (neuron0x29d12a0()*-0.0800302);
}

double NNfunction_nn_chi3_chi4::synapse0x29d11c0() {
   return (neuron0x29d15e0()*0.12062);
}

double NNfunction_nn_chi3_chi4::synapse0x29d14c0() {
   return (neuron0x29d1920()*0.41499);
}

double NNfunction_nn_chi3_chi4::synapse0x29d1500() {
   return (neuron0x29d1c60()*-0.356351);
}

double NNfunction_nn_chi3_chi4::synapse0x29d1800() {
   return (neuron0x29d1fa0()*0.0849584);
}

double NNfunction_nn_chi3_chi4::synapse0x29d1840() {
   return (neuron0x29d22e0()*0.205385);
}

double NNfunction_nn_chi3_chi4::synapse0x29d1b40() {
   return (neuron0x29d2620()*-0.529554);
}

double NNfunction_nn_chi3_chi4::synapse0x29d1b80() {
   return (neuron0x29d2960()*0.218615);
}

double NNfunction_nn_chi3_chi4::synapse0x29d1e80() {
   return (neuron0x29d2ca0()*-0.698442);
}

double NNfunction_nn_chi3_chi4::synapse0x29d1ec0() {
   return (neuron0x29d2fe0()*0.119377);
}

double NNfunction_nn_chi3_chi4::synapse0x29d21c0() {
   return (neuron0x29d3320()*0.703031);
}

double NNfunction_nn_chi3_chi4::synapse0x29d2200() {
   return (neuron0x29d3660()*0.368399);
}

double NNfunction_nn_chi3_chi4::synapse0x29d2500() {
   return (neuron0x29d39a0()*-0.331892);
}

double NNfunction_nn_chi3_chi4::synapse0x29d2540() {
   return (neuron0x29d3ce0()*0.612343);
}

double NNfunction_nn_chi3_chi4::synapse0x29d2840() {
   return (neuron0x29d4020()*0.386731);
}

double NNfunction_nn_chi3_chi4::synapse0x29d2880() {
   return (neuron0x29d4360()*-0.209882);
}

double NNfunction_nn_chi3_chi4::synapse0x29d2b80() {
   return (neuron0x29d48c0()*0.0999342);
}

double NNfunction_nn_chi3_chi4::synapse0x29d2bc0() {
   return (neuron0x29d4c00()*0.393318);
}

double NNfunction_nn_chi3_chi4::synapse0x29d2ec0() {
   return (neuron0x29d4f40()*-0.174208);
}

double NNfunction_nn_chi3_chi4::synapse0x29d2f00() {
   return (neuron0x29d5280()*-0.713895);
}

double NNfunction_nn_chi3_chi4::synapse0x29d3200() {
   return (neuron0x29d55c0()*0.263718);
}

double NNfunction_nn_chi3_chi4::synapse0x29d3240() {
   return (neuron0x29d5900()*-0.286338);
}

double NNfunction_nn_chi3_chi4::synapse0x29d3540() {
   return (neuron0x29d5c40()*1.65127);
}

double NNfunction_nn_chi3_chi4::synapse0x29d3580() {
   return (neuron0x29d0ff0()*-0.191543);
}

double NNfunction_nn_chi3_chi4::synapse0x29d4240() {
   return (neuron0x29d12a0()*8.3598);
}

double NNfunction_nn_chi3_chi4::synapse0x29d4280() {
   return (neuron0x29d15e0()*0.930692);
}

double NNfunction_nn_chi3_chi4::synapse0x29e0d50() {
   return (neuron0x29d1920()*0.107884);
}

double NNfunction_nn_chi3_chi4::synapse0x29e0d90() {
   return (neuron0x29d1c60()*-0.134626);
}

double NNfunction_nn_chi3_chi4::synapse0x29d4580() {
   return (neuron0x29d1fa0()*-0.0478276);
}

double NNfunction_nn_chi3_chi4::synapse0x29d45c0() {
   return (neuron0x29d22e0()*-0.275538);
}

double NNfunction_nn_chi3_chi4::synapse0x29d4ae0() {
   return (neuron0x29d2620()*-0.099094);
}

double NNfunction_nn_chi3_chi4::synapse0x29d4b20() {
   return (neuron0x29d2960()*0.138925);
}

double NNfunction_nn_chi3_chi4::synapse0x29d4e20() {
   return (neuron0x29d2ca0()*0.0857573);
}

double NNfunction_nn_chi3_chi4::synapse0x29d4e60() {
   return (neuron0x29d2fe0()*-0.105348);
}

double NNfunction_nn_chi3_chi4::synapse0x29d5160() {
   return (neuron0x29d3320()*0.0332424);
}

double NNfunction_nn_chi3_chi4::synapse0x29d51a0() {
   return (neuron0x29d3660()*0.0191043);
}

double NNfunction_nn_chi3_chi4::synapse0x29d54a0() {
   return (neuron0x29d39a0()*-0.0365563);
}

double NNfunction_nn_chi3_chi4::synapse0x29d54e0() {
   return (neuron0x29d3ce0()*-0.110577);
}

double NNfunction_nn_chi3_chi4::synapse0x29d57e0() {
   return (neuron0x29d4020()*0.187033);
}

double NNfunction_nn_chi3_chi4::synapse0x29d5820() {
   return (neuron0x29d4360()*0.15231);
}

double NNfunction_nn_chi3_chi4::synapse0x29d5b20() {
   return (neuron0x29d48c0()*0.0979261);
}

double NNfunction_nn_chi3_chi4::synapse0x29d5b60() {
   return (neuron0x29d4c00()*0.103878);
}

double NNfunction_nn_chi3_chi4::synapse0x29d5e60() {
   return (neuron0x29d4f40()*-0.00312902);
}

double NNfunction_nn_chi3_chi4::synapse0x29d5ea0() {
   return (neuron0x29d5280()*-0.153272);
}

double NNfunction_nn_chi3_chi4::synapse0x29d3880() {
   return (neuron0x29d55c0()*0.139501);
}

double NNfunction_nn_chi3_chi4::synapse0x29d38c0() {
   return (neuron0x29d5900()*0.0765314);
}

double NNfunction_nn_chi3_chi4::synapse0x29e2c70() {
   return (neuron0x29d5c40()*-19.7619);
}

double NNfunction_nn_chi3_chi4::synapse0x29e2ff0() {
   return (neuron0x29d0ff0()*0.700679);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3030() {
   return (neuron0x29d12a0()*0.248263);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3070() {
   return (neuron0x29d15e0()*0.00201829);
}

double NNfunction_nn_chi3_chi4::synapse0x29e30b0() {
   return (neuron0x29d1920()*0.0668424);
}

double NNfunction_nn_chi3_chi4::synapse0x29e30f0() {
   return (neuron0x29d1c60()*0.24875);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3130() {
   return (neuron0x29d1fa0()*-0.276383);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3170() {
   return (neuron0x29d22e0()*-0.132711);
}

double NNfunction_nn_chi3_chi4::synapse0x29e31b0() {
   return (neuron0x29d2620()*0.877931);
}

double NNfunction_nn_chi3_chi4::synapse0x29e31f0() {
   return (neuron0x29d2960()*0.286407);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3230() {
   return (neuron0x29d2ca0()*0.0656162);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3270() {
   return (neuron0x29d2fe0()*0.258598);
}

double NNfunction_nn_chi3_chi4::synapse0x29e32b0() {
   return (neuron0x29d3320()*0.760895);
}

double NNfunction_nn_chi3_chi4::synapse0x29e32f0() {
   return (neuron0x29d3660()*0.10952);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3330() {
   return (neuron0x29d39a0()*0.0992032);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3370() {
   return (neuron0x29d3ce0()*0.121659);
}

double NNfunction_nn_chi3_chi4::synapse0x29e33b0() {
   return (neuron0x29d4020()*-0.73748);
}

double NNfunction_nn_chi3_chi4::synapse0x29e2e40() {
   return (neuron0x29d4360()*-0.436054);
}

double NNfunction_nn_chi3_chi4::synapse0x29e2e80() {
   return (neuron0x29d48c0()*-1.46055);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3500() {
   return (neuron0x29d4c00()*-0.536136);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3540() {
   return (neuron0x29d4f40()*-0.329544);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3580() {
   return (neuron0x29d5280()*-0.0950907);
}

double NNfunction_nn_chi3_chi4::synapse0x29e35c0() {
   return (neuron0x29d55c0()*0.966332);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3600() {
   return (neuron0x29d5900()*0.21291);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3640() {
   return (neuron0x29d5c40()*0.651608);
}

double NNfunction_nn_chi3_chi4::synapse0x29e39c0() {
   return (neuron0x29d0ff0()*-0.868877);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3a00() {
   return (neuron0x29d12a0()*1.0966);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3a40() {
   return (neuron0x29d15e0()*-1.5451);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3a80() {
   return (neuron0x29d1920()*-0.915638);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3ac0() {
   return (neuron0x29d1c60()*0.336161);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3b00() {
   return (neuron0x29d1fa0()*0.284197);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3b40() {
   return (neuron0x29d22e0()*0.211313);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3b80() {
   return (neuron0x29d2620()*0.169772);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3bc0() {
   return (neuron0x29d2960()*-0.250492);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3c00() {
   return (neuron0x29d2ca0()*0.985775);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3c40() {
   return (neuron0x29d2fe0()*-0.0227243);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3c80() {
   return (neuron0x29d3320()*-1.26012);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3cc0() {
   return (neuron0x29d3660()*-1.52994);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3d00() {
   return (neuron0x29d39a0()*0.0820742);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3d40() {
   return (neuron0x29d3ce0()*0.292553);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3d80() {
   return (neuron0x29d4020()*-1.05776);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3810() {
   return (neuron0x29d4360()*-0.799112);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3850() {
   return (neuron0x29d48c0()*-0.964459);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3ed0() {
   return (neuron0x29d4c00()*-0.331017);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3f10() {
   return (neuron0x29d4f40()*-0.279189);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3f50() {
   return (neuron0x29d5280()*0.22475);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3f90() {
   return (neuron0x29d55c0()*-1.05805);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3fd0() {
   return (neuron0x29d5900()*-1.04336);
}

double NNfunction_nn_chi3_chi4::synapse0x29e4010() {
   return (neuron0x29d5c40()*-1.67838);
}

double NNfunction_nn_chi3_chi4::synapse0x29e4390() {
   return (neuron0x29d0ff0()*-0.045062);
}

double NNfunction_nn_chi3_chi4::synapse0x29e43d0() {
   return (neuron0x29d12a0()*3.44594);
}

double NNfunction_nn_chi3_chi4::synapse0x29e4410() {
   return (neuron0x29d15e0()*-1.08682);
}

double NNfunction_nn_chi3_chi4::synapse0x29e4450() {
   return (neuron0x29d1920()*-0.0452256);
}

double NNfunction_nn_chi3_chi4::synapse0x29e4490() {
   return (neuron0x29d1c60()*0.00874804);
}

double NNfunction_nn_chi3_chi4::synapse0x29e44d0() {
   return (neuron0x29d1fa0()*0.0112754);
}

double NNfunction_nn_chi3_chi4::synapse0x29e4510() {
   return (neuron0x29d22e0()*0.00272319);
}

double NNfunction_nn_chi3_chi4::synapse0x29e4550() {
   return (neuron0x29d2620()*0.00431896);
}

double NNfunction_nn_chi3_chi4::synapse0x29e4590() {
   return (neuron0x29d2960()*-0.0401271);
}

double NNfunction_nn_chi3_chi4::synapse0x29e45d0() {
   return (neuron0x29d2ca0()*-0.0908455);
}

double NNfunction_nn_chi3_chi4::synapse0x29e4610() {
   return (neuron0x29d2fe0()*0.00745744);
}

double NNfunction_nn_chi3_chi4::synapse0x29e4650() {
   return (neuron0x29d3320()*0.254995);
}

double NNfunction_nn_chi3_chi4::synapse0x29e4690() {
   return (neuron0x29d3660()*-0.0142681);
}

double NNfunction_nn_chi3_chi4::synapse0x29e46d0() {
   return (neuron0x29d39a0()*-0.0545349);
}

double NNfunction_nn_chi3_chi4::synapse0x29e4710() {
   return (neuron0x29d3ce0()*-0.0729239);
}

double NNfunction_nn_chi3_chi4::synapse0x29e4750() {
   return (neuron0x29d4020()*-0.0123176);
}

double NNfunction_nn_chi3_chi4::synapse0x29e41e0() {
   return (neuron0x29d4360()*-0.019105);
}

double NNfunction_nn_chi3_chi4::synapse0x29e4220() {
   return (neuron0x29d48c0()*-0.0048316);
}

double NNfunction_nn_chi3_chi4::synapse0x29e48a0() {
   return (neuron0x29d4c00()*-0.0229995);
}

double NNfunction_nn_chi3_chi4::synapse0x29e48e0() {
   return (neuron0x29d4f40()*0.0187926);
}

double NNfunction_nn_chi3_chi4::synapse0x29e4920() {
   return (neuron0x29d5280()*0.0438869);
}

double NNfunction_nn_chi3_chi4::synapse0x29e4960() {
   return (neuron0x29d55c0()*0.0101808);
}

double NNfunction_nn_chi3_chi4::synapse0x29e49a0() {
   return (neuron0x29d5900()*0.0252286);
}

double NNfunction_nn_chi3_chi4::synapse0x29e49e0() {
   return (neuron0x29d5c40()*-9.66494);
}

double NNfunction_nn_chi3_chi4::synapse0x29e4d60() {
   return (neuron0x29d0ff0()*0.035049);
}

double NNfunction_nn_chi3_chi4::synapse0x29e4da0() {
   return (neuron0x29d12a0()*-1.32387);
}

double NNfunction_nn_chi3_chi4::synapse0x29e4de0() {
   return (neuron0x29d15e0()*-2.76786);
}

double NNfunction_nn_chi3_chi4::synapse0x29e4e20() {
   return (neuron0x29d1920()*0.154803);
}

double NNfunction_nn_chi3_chi4::synapse0x29e4e60() {
   return (neuron0x29d1c60()*-0.159849);
}

double NNfunction_nn_chi3_chi4::synapse0x29e4ea0() {
   return (neuron0x29d1fa0()*-0.186831);
}

double NNfunction_nn_chi3_chi4::synapse0x29e4ee0() {
   return (neuron0x29d22e0()*-0.264568);
}

double NNfunction_nn_chi3_chi4::synapse0x29e4f20() {
   return (neuron0x29d2620()*0.0388949);
}

double NNfunction_nn_chi3_chi4::synapse0x29e4f60() {
   return (neuron0x29d2960()*0.197241);
}

double NNfunction_nn_chi3_chi4::synapse0x29e4fa0() {
   return (neuron0x29d2ca0()*-0.102318);
}

double NNfunction_nn_chi3_chi4::synapse0x29e4fe0() {
   return (neuron0x29d2fe0()*0.242176);
}

double NNfunction_nn_chi3_chi4::synapse0x29e5020() {
   return (neuron0x29d3320()*0.317749);
}

double NNfunction_nn_chi3_chi4::synapse0x29e5060() {
   return (neuron0x29d3660()*0.183538);
}

double NNfunction_nn_chi3_chi4::synapse0x29e50a0() {
   return (neuron0x29d39a0()*0.404162);
}

double NNfunction_nn_chi3_chi4::synapse0x29e50e0() {
   return (neuron0x29d3ce0()*-0.211205);
}

double NNfunction_nn_chi3_chi4::synapse0x29e5120() {
   return (neuron0x29d4020()*-0.151024);
}

double NNfunction_nn_chi3_chi4::synapse0x29e4bb0() {
   return (neuron0x29d4360()*0.000250304);
}

double NNfunction_nn_chi3_chi4::synapse0x29e4bf0() {
   return (neuron0x29d48c0()*0.201544);
}

double NNfunction_nn_chi3_chi4::synapse0x29e5270() {
   return (neuron0x29d4c00()*0.209257);
}

double NNfunction_nn_chi3_chi4::synapse0x29e52b0() {
   return (neuron0x29d4f40()*0.0791408);
}

double NNfunction_nn_chi3_chi4::synapse0x29e52f0() {
   return (neuron0x29d5280()*0.00911898);
}

double NNfunction_nn_chi3_chi4::synapse0x29e5330() {
   return (neuron0x29d55c0()*-0.0643476);
}

double NNfunction_nn_chi3_chi4::synapse0x29e5370() {
   return (neuron0x29d5900()*-0.00950185);
}

double NNfunction_nn_chi3_chi4::synapse0x29e53b0() {
   return (neuron0x29d5c40()*-8.10764);
}

double NNfunction_nn_chi3_chi4::synapse0x29e5730() {
   return (neuron0x29d0ff0()*-0.345394);
}

double NNfunction_nn_chi3_chi4::synapse0x29e5770() {
   return (neuron0x29d12a0()*1.09746);
}

double NNfunction_nn_chi3_chi4::synapse0x29e57b0() {
   return (neuron0x29d15e0()*0.0957329);
}

double NNfunction_nn_chi3_chi4::synapse0x29e57f0() {
   return (neuron0x29d1920()*0.0400703);
}

double NNfunction_nn_chi3_chi4::synapse0x29e5830() {
   return (neuron0x29d1c60()*-0.959068);
}

double NNfunction_nn_chi3_chi4::synapse0x29e5870() {
   return (neuron0x29d1fa0()*0.619451);
}

double NNfunction_nn_chi3_chi4::synapse0x29e58b0() {
   return (neuron0x29d22e0()*0.049209);
}

double NNfunction_nn_chi3_chi4::synapse0x29e58f0() {
   return (neuron0x29d2620()*-0.815424);
}

double NNfunction_nn_chi3_chi4::synapse0x29e5930() {
   return (neuron0x29d2960()*0.16638);
}

double NNfunction_nn_chi3_chi4::synapse0x29ddaf0() {
   return (neuron0x29d2ca0()*-0.381689);
}

double NNfunction_nn_chi3_chi4::synapse0x29ddb30() {
   return (neuron0x29d2fe0()*0.151135);
}

double NNfunction_nn_chi3_chi4::synapse0x29ddb70() {
   return (neuron0x29d3320()*1.31623);
}

double NNfunction_nn_chi3_chi4::synapse0x29ddbb0() {
   return (neuron0x29d3660()*0.19592);
}

double NNfunction_nn_chi3_chi4::synapse0x29ddbf0() {
   return (neuron0x29d39a0()*-0.484184);
}

double NNfunction_nn_chi3_chi4::synapse0x29ddc30() {
   return (neuron0x29d3ce0()*-0.424797);
}

double NNfunction_nn_chi3_chi4::synapse0x29ddc70() {
   return (neuron0x29d4020()*0.443812);
}

double NNfunction_nn_chi3_chi4::synapse0x29e5580() {
   return (neuron0x29d4360()*0.653988);
}

double NNfunction_nn_chi3_chi4::synapse0x29e55c0() {
   return (neuron0x29d48c0()*0.722205);
}

double NNfunction_nn_chi3_chi4::synapse0x29dddc0() {
   return (neuron0x29d4c00()*-0.650667);
}

double NNfunction_nn_chi3_chi4::synapse0x29dde00() {
   return (neuron0x29d4f40()*-0.159761);
}

double NNfunction_nn_chi3_chi4::synapse0x29dde40() {
   return (neuron0x29d5280()*-0.585763);
}

double NNfunction_nn_chi3_chi4::synapse0x29dde80() {
   return (neuron0x29d55c0()*0.0900375);
}

double NNfunction_nn_chi3_chi4::synapse0x29ddec0() {
   return (neuron0x29d5900()*-0.379035);
}

double NNfunction_nn_chi3_chi4::synapse0x29ddf00() {
   return (neuron0x29d5c40()*-0.835258);
}

double NNfunction_nn_chi3_chi4::synapse0x29de280() {
   return (neuron0x29d0ff0()*-0.0744493);
}

double NNfunction_nn_chi3_chi4::synapse0x29de2c0() {
   return (neuron0x29d12a0()*1.0986);
}

double NNfunction_nn_chi3_chi4::synapse0x29de300() {
   return (neuron0x29d15e0()*-0.0907554);
}

double NNfunction_nn_chi3_chi4::synapse0x29de340() {
   return (neuron0x29d1920()*0.0896268);
}

double NNfunction_nn_chi3_chi4::synapse0x29de380() {
   return (neuron0x29d1c60()*0.0965856);
}

double NNfunction_nn_chi3_chi4::synapse0x29de3c0() {
   return (neuron0x29d1fa0()*-0.324947);
}

double NNfunction_nn_chi3_chi4::synapse0x29de400() {
   return (neuron0x29d22e0()*0.136821);
}

double NNfunction_nn_chi3_chi4::synapse0x29de440() {
   return (neuron0x29d2620()*0.741332);
}

double NNfunction_nn_chi3_chi4::synapse0x29de480() {
   return (neuron0x29d2960()*0.025189);
}

double NNfunction_nn_chi3_chi4::synapse0x29de4c0() {
   return (neuron0x29d2ca0()*0.0464895);
}

double NNfunction_nn_chi3_chi4::synapse0x29de500() {
   return (neuron0x29d2fe0()*-0.366312);
}

double NNfunction_nn_chi3_chi4::synapse0x29de540() {
   return (neuron0x29d3320()*0.159202);
}

double NNfunction_nn_chi3_chi4::synapse0x29de580() {
   return (neuron0x29d3660()*-0.316349);
}

double NNfunction_nn_chi3_chi4::synapse0x29de5c0() {
   return (neuron0x29d39a0()*0.25472);
}

double NNfunction_nn_chi3_chi4::synapse0x29de600() {
   return (neuron0x29d3ce0()*-1.46299);
}

double NNfunction_nn_chi3_chi4::synapse0x29de640() {
   return (neuron0x29d4020()*-0.851771);
}

double NNfunction_nn_chi3_chi4::synapse0x29de0d0() {
   return (neuron0x29d4360()*-0.169261);
}

double NNfunction_nn_chi3_chi4::synapse0x29de110() {
   return (neuron0x29d48c0()*-0.127393);
}

double NNfunction_nn_chi3_chi4::synapse0x29de790() {
   return (neuron0x29d4c00()*-0.0189014);
}

double NNfunction_nn_chi3_chi4::synapse0x29de7d0() {
   return (neuron0x29d4f40()*-0.140555);
}

double NNfunction_nn_chi3_chi4::synapse0x29de810() {
   return (neuron0x29d5280()*0.277569);
}

double NNfunction_nn_chi3_chi4::synapse0x29de850() {
   return (neuron0x29d55c0()*0.276287);
}

double NNfunction_nn_chi3_chi4::synapse0x29de890() {
   return (neuron0x29d5900()*0.124677);
}

double NNfunction_nn_chi3_chi4::synapse0x29de8d0() {
   return (neuron0x29d5c40()*-0.867567);
}

double NNfunction_nn_chi3_chi4::synapse0x29deaa0() {
   return (neuron0x29d0ff0()*0.111902);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7b30() {
   return (neuron0x29d12a0()*2.29575);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7b70() {
   return (neuron0x29d15e0()*1.46698);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7bb0() {
   return (neuron0x29d1920()*0.0478911);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7bf0() {
   return (neuron0x29d1c60()*-0.0604725);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7c30() {
   return (neuron0x29d1fa0()*0.0543882);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7c70() {
   return (neuron0x29d22e0()*0.106758);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7cb0() {
   return (neuron0x29d2620()*0.0920063);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7cf0() {
   return (neuron0x29d2960()*-0.00382711);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7d30() {
   return (neuron0x29d2ca0()*-0.100937);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7d70() {
   return (neuron0x29d2fe0()*0.028999);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7db0() {
   return (neuron0x29d3320()*-0.0760883);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7df0() {
   return (neuron0x29d3660()*0.0207708);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7e30() {
   return (neuron0x29d39a0()*0.193398);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7e70() {
   return (neuron0x29d3ce0()*0.0478186);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7eb0() {
   return (neuron0x29d4020()*-0.0668159);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7980() {
   return (neuron0x29d4360()*-0.0666415);
}

double NNfunction_nn_chi3_chi4::synapse0x29e79c0() {
   return (neuron0x29d48c0()*0.041704);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8000() {
   return (neuron0x29d4c00()*0.146794);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8040() {
   return (neuron0x29d4f40()*0.0307433);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8080() {
   return (neuron0x29d5280()*0.0715271);
}

double NNfunction_nn_chi3_chi4::synapse0x29e80c0() {
   return (neuron0x29d55c0()*-0.0632547);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8100() {
   return (neuron0x29d5900()*-0.0175756);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8140() {
   return (neuron0x29d5c40()*-6.95655);
}

double NNfunction_nn_chi3_chi4::synapse0x29e84c0() {
   return (neuron0x29d0ff0()*0.101183);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8500() {
   return (neuron0x29d12a0()*0.410299);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8540() {
   return (neuron0x29d15e0()*-0.361252);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8580() {
   return (neuron0x29d1920()*-0.0870667);
}

double NNfunction_nn_chi3_chi4::synapse0x29e85c0() {
   return (neuron0x29d1c60()*0.0608596);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8600() {
   return (neuron0x29d1fa0()*0.00434646);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8640() {
   return (neuron0x29d22e0()*0.0570465);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8680() {
   return (neuron0x29d2620()*-0.0221671);
}

double NNfunction_nn_chi3_chi4::synapse0x29e86c0() {
   return (neuron0x29d2960()*0.111689);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8700() {
   return (neuron0x29d2ca0()*-0.22809);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8740() {
   return (neuron0x29d2fe0()*-0.206153);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8780() {
   return (neuron0x29d3320()*0.248326);
}

double NNfunction_nn_chi3_chi4::synapse0x29e87c0() {
   return (neuron0x29d3660()*-0.048554);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8800() {
   return (neuron0x29d39a0()*-0.0884755);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8840() {
   return (neuron0x29d3ce0()*-0.392932);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8880() {
   return (neuron0x29d4020()*-0.0367145);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8310() {
   return (neuron0x29d4360()*-0.0592623);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8350() {
   return (neuron0x29d48c0()*0.0190887);
}

double NNfunction_nn_chi3_chi4::synapse0x29e89d0() {
   return (neuron0x29d4c00()*0.0414403);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8a10() {
   return (neuron0x29d4f40()*-0.165768);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8a50() {
   return (neuron0x29d5280()*0.101634);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8a90() {
   return (neuron0x29d55c0()*0.0248956);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8ad0() {
   return (neuron0x29d5900()*0.0361035);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8b10() {
   return (neuron0x29d5c40()*2.0796);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8e90() {
   return (neuron0x29d0ff0()*-0.0830598);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8ed0() {
   return (neuron0x29d12a0()*0.524628);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8f10() {
   return (neuron0x29d15e0()*-0.649881);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8f50() {
   return (neuron0x29d1920()*-1.02903);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8f90() {
   return (neuron0x29d1c60()*-0.577767);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8fd0() {
   return (neuron0x29d1fa0()*-0.971053);
}

double NNfunction_nn_chi3_chi4::synapse0x29e9010() {
   return (neuron0x29d22e0()*1.12285);
}

double NNfunction_nn_chi3_chi4::synapse0x29e9050() {
   return (neuron0x29d2620()*-0.291831);
}

double NNfunction_nn_chi3_chi4::synapse0x29e9090() {
   return (neuron0x29d2960()*0.489609);
}

double NNfunction_nn_chi3_chi4::synapse0x29e90d0() {
   return (neuron0x29d2ca0()*-0.796995);
}

double NNfunction_nn_chi3_chi4::synapse0x29e9110() {
   return (neuron0x29d2fe0()*0.579045);
}

double NNfunction_nn_chi3_chi4::synapse0x29e9150() {
   return (neuron0x29d3320()*0.909421);
}

double NNfunction_nn_chi3_chi4::synapse0x29e9190() {
   return (neuron0x29d3660()*0.250418);
}

double NNfunction_nn_chi3_chi4::synapse0x29e91d0() {
   return (neuron0x29d39a0()*-0.516905);
}

double NNfunction_nn_chi3_chi4::synapse0x29e9210() {
   return (neuron0x29d3ce0()*0.0696429);
}

double NNfunction_nn_chi3_chi4::synapse0x29e9250() {
   return (neuron0x29d4020()*-1.01995);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8ce0() {
   return (neuron0x29d4360()*-1.4125);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8d20() {
   return (neuron0x29d48c0()*-0.0460856);
}

double NNfunction_nn_chi3_chi4::synapse0x29e93a0() {
   return (neuron0x29d4c00()*1.45187);
}

double NNfunction_nn_chi3_chi4::synapse0x29e93e0() {
   return (neuron0x29d4f40()*0.0882417);
}

double NNfunction_nn_chi3_chi4::synapse0x29e9420() {
   return (neuron0x29d5280()*-1.5828);
}

double NNfunction_nn_chi3_chi4::synapse0x29e9460() {
   return (neuron0x29d55c0()*-0.00995518);
}

double NNfunction_nn_chi3_chi4::synapse0x29e94a0() {
   return (neuron0x29d5900()*-1.82507);
}

double NNfunction_nn_chi3_chi4::synapse0x29e94e0() {
   return (neuron0x29d5c40()*-0.71884);
}

double NNfunction_nn_chi3_chi4::synapse0x29e9860() {
   return (neuron0x29d0ff0()*0.0209184);
}

double NNfunction_nn_chi3_chi4::synapse0x29e98a0() {
   return (neuron0x29d12a0()*-0.2402);
}

double NNfunction_nn_chi3_chi4::synapse0x29e98e0() {
   return (neuron0x29d15e0()*-0.238216);
}

double NNfunction_nn_chi3_chi4::synapse0x29e9920() {
   return (neuron0x29d1920()*0.0123981);
}

double NNfunction_nn_chi3_chi4::synapse0x29e9960() {
   return (neuron0x29d1c60()*-0.0521285);
}

double NNfunction_nn_chi3_chi4::synapse0x29e99a0() {
   return (neuron0x29d1fa0()*-0.0051974);
}

double NNfunction_nn_chi3_chi4::synapse0x29e99e0() {
   return (neuron0x29d22e0()*-0.00272943);
}

double NNfunction_nn_chi3_chi4::synapse0x29e9a20() {
   return (neuron0x29d2620()*-0.0228065);
}

double NNfunction_nn_chi3_chi4::synapse0x29e9a60() {
   return (neuron0x29d2960()*0.0142976);
}

double NNfunction_nn_chi3_chi4::synapse0x29e9aa0() {
   return (neuron0x29d2ca0()*0.028278);
}

double NNfunction_nn_chi3_chi4::synapse0x29e9ae0() {
   return (neuron0x29d2fe0()*-0.0101367);
}

double NNfunction_nn_chi3_chi4::synapse0x29e9b20() {
   return (neuron0x29d3320()*-0.0626896);
}

double NNfunction_nn_chi3_chi4::synapse0x29e9b60() {
   return (neuron0x29d3660()*0.0281195);
}

double NNfunction_nn_chi3_chi4::synapse0x29e9ba0() {
   return (neuron0x29d39a0()*0.0810071);
}

double NNfunction_nn_chi3_chi4::synapse0x29e9be0() {
   return (neuron0x29d3ce0()*0.00787675);
}

double NNfunction_nn_chi3_chi4::synapse0x29e9c20() {
   return (neuron0x29d4020()*-0.00979906);
}

double NNfunction_nn_chi3_chi4::synapse0x29e96b0() {
   return (neuron0x29d4360()*0.0558828);
}

double NNfunction_nn_chi3_chi4::synapse0x29e96f0() {
   return (neuron0x29d48c0()*0.0319807);
}

double NNfunction_nn_chi3_chi4::synapse0x29e9d70() {
   return (neuron0x29d4c00()*0.0290845);
}

double NNfunction_nn_chi3_chi4::synapse0x29e9db0() {
   return (neuron0x29d4f40()*0.0181859);
}

double NNfunction_nn_chi3_chi4::synapse0x29e9df0() {
   return (neuron0x29d5280()*0.0480389);
}

double NNfunction_nn_chi3_chi4::synapse0x29e9e30() {
   return (neuron0x29d55c0()*-0.00555593);
}

double NNfunction_nn_chi3_chi4::synapse0x29e9e70() {
   return (neuron0x29d5900()*-0.0144953);
}

double NNfunction_nn_chi3_chi4::synapse0x29e9eb0() {
   return (neuron0x29d5c40()*-1.29666);
}

double NNfunction_nn_chi3_chi4::synapse0x29ea230() {
   return (neuron0x29d0ff0()*0.0090048);
}

double NNfunction_nn_chi3_chi4::synapse0x29ea270() {
   return (neuron0x29d12a0()*-0.481966);
}

double NNfunction_nn_chi3_chi4::synapse0x29ea2b0() {
   return (neuron0x29d15e0()*0.465634);
}

double NNfunction_nn_chi3_chi4::synapse0x29ea2f0() {
   return (neuron0x29d1920()*0.0192724);
}

double NNfunction_nn_chi3_chi4::synapse0x29ea330() {
   return (neuron0x29d1c60()*-0.0133647);
}

double NNfunction_nn_chi3_chi4::synapse0x29ea370() {
   return (neuron0x29d1fa0()*-0.00203183);
}

double NNfunction_nn_chi3_chi4::synapse0x29ea3b0() {
   return (neuron0x29d22e0()*0.0207194);
}

double NNfunction_nn_chi3_chi4::synapse0x29ea3f0() {
   return (neuron0x29d2620()*0.0232143);
}

double NNfunction_nn_chi3_chi4::synapse0x29ea430() {
   return (neuron0x29d2960()*0.012303);
}

double NNfunction_nn_chi3_chi4::synapse0x29ea470() {
   return (neuron0x29d2ca0()*0.00535375);
}

double NNfunction_nn_chi3_chi4::synapse0x29ea4b0() {
   return (neuron0x29d2fe0()*-0.000877333);
}

double NNfunction_nn_chi3_chi4::synapse0x29ea4f0() {
   return (neuron0x29d3320()*0.124798);
}

double NNfunction_nn_chi3_chi4::synapse0x29ea530() {
   return (neuron0x29d3660()*0.0396869);
}

double NNfunction_nn_chi3_chi4::synapse0x29ea570() {
   return (neuron0x29d39a0()*0.0483375);
}

double NNfunction_nn_chi3_chi4::synapse0x29ea5b0() {
   return (neuron0x29d3ce0()*-0.00168077);
}

double NNfunction_nn_chi3_chi4::synapse0x29ea5f0() {
   return (neuron0x29d4020()*0.0337226);
}

double NNfunction_nn_chi3_chi4::synapse0x29ea080() {
   return (neuron0x29d4360()*0.0305379);
}

double NNfunction_nn_chi3_chi4::synapse0x29ea0c0() {
   return (neuron0x29d48c0()*-0.0131158);
}

double NNfunction_nn_chi3_chi4::synapse0x29ea740() {
   return (neuron0x29d4c00()*0.00904344);
}

double NNfunction_nn_chi3_chi4::synapse0x29ea780() {
   return (neuron0x29d4f40()*-0.0182853);
}

double NNfunction_nn_chi3_chi4::synapse0x29ea7c0() {
   return (neuron0x29d5280()*-0.00629556);
}

double NNfunction_nn_chi3_chi4::synapse0x29ea800() {
   return (neuron0x29d55c0()*0.0131546);
}

double NNfunction_nn_chi3_chi4::synapse0x29ea840() {
   return (neuron0x29d5900()*-0.000449027);
}

double NNfunction_nn_chi3_chi4::synapse0x29ea880() {
   return (neuron0x29d5c40()*0.422295);
}

double NNfunction_nn_chi3_chi4::synapse0x29eac00() {
   return (neuron0x29d0ff0()*-0.042441);
}

double NNfunction_nn_chi3_chi4::synapse0x29eac40() {
   return (neuron0x29d12a0()*1.43437);
}

double NNfunction_nn_chi3_chi4::synapse0x29eac80() {
   return (neuron0x29d15e0()*1.07017);
}

double NNfunction_nn_chi3_chi4::synapse0x29eacc0() {
   return (neuron0x29d1920()*-0.0589461);
}

double NNfunction_nn_chi3_chi4::synapse0x29ead00() {
   return (neuron0x29d1c60()*0.0326465);
}

double NNfunction_nn_chi3_chi4::synapse0x29ead40() {
   return (neuron0x29d1fa0()*0.0372459);
}

double NNfunction_nn_chi3_chi4::synapse0x29ead80() {
   return (neuron0x29d22e0()*-0.0122803);
}

double NNfunction_nn_chi3_chi4::synapse0x29eadc0() {
   return (neuron0x29d2620()*0.0435297);
}

double NNfunction_nn_chi3_chi4::synapse0x29eae00() {
   return (neuron0x29d2960()*-0.0307135);
}

double NNfunction_nn_chi3_chi4::synapse0x29eae40() {
   return (neuron0x29d2ca0()*-0.0419202);
}

double NNfunction_nn_chi3_chi4::synapse0x29eae80() {
   return (neuron0x29d2fe0()*0.0100948);
}

double NNfunction_nn_chi3_chi4::synapse0x29eaec0() {
   return (neuron0x29d3320()*-0.418244);
}

double NNfunction_nn_chi3_chi4::synapse0x29eaf00() {
   return (neuron0x29d3660()*0.0573817);
}

double NNfunction_nn_chi3_chi4::synapse0x29eaf40() {
   return (neuron0x29d39a0()*0.0155138);
}

double NNfunction_nn_chi3_chi4::synapse0x29eaf80() {
   return (neuron0x29d3ce0()*0.025187);
}

double NNfunction_nn_chi3_chi4::synapse0x29eafc0() {
   return (neuron0x29d4020()*-0.0517782);
}

double NNfunction_nn_chi3_chi4::synapse0x29eaa50() {
   return (neuron0x29d4360()*0.00170908);
}

double NNfunction_nn_chi3_chi4::synapse0x29eaa90() {
   return (neuron0x29d48c0()*-0.0320391);
}

double NNfunction_nn_chi3_chi4::synapse0x29eb110() {
   return (neuron0x29d4c00()*-0.052279);
}

double NNfunction_nn_chi3_chi4::synapse0x29eb150() {
   return (neuron0x29d4f40()*-0.0186609);
}

double NNfunction_nn_chi3_chi4::synapse0x29eb190() {
   return (neuron0x29d5280()*0.0560432);
}

double NNfunction_nn_chi3_chi4::synapse0x29eb1d0() {
   return (neuron0x29d55c0()*0.0303534);
}

double NNfunction_nn_chi3_chi4::synapse0x29eb210() {
   return (neuron0x29d5900()*-0.0196075);
}

double NNfunction_nn_chi3_chi4::synapse0x29eb250() {
   return (neuron0x29d5c40()*1.29748);
}

double NNfunction_nn_chi3_chi4::synapse0x29eb5d0() {
   return (neuron0x29d0ff0()*0.0637062);
}

double NNfunction_nn_chi3_chi4::synapse0x29eb610() {
   return (neuron0x29d12a0()*-2.16612);
}

double NNfunction_nn_chi3_chi4::synapse0x29eb650() {
   return (neuron0x29d15e0()*0.562866);
}

double NNfunction_nn_chi3_chi4::synapse0x29eb690() {
   return (neuron0x29d1920()*0.0582055);
}

double NNfunction_nn_chi3_chi4::synapse0x29eb6d0() {
   return (neuron0x29d1c60()*-0.0215728);
}

double NNfunction_nn_chi3_chi4::synapse0x29eb710() {
   return (neuron0x29d1fa0()*0.0128123);
}

double NNfunction_nn_chi3_chi4::synapse0x29eb750() {
   return (neuron0x29d22e0()*-0.0170497);
}

double NNfunction_nn_chi3_chi4::synapse0x29eb790() {
   return (neuron0x29d2620()*-0.0312786);
}

double NNfunction_nn_chi3_chi4::synapse0x29eb7d0() {
   return (neuron0x29d2960()*0.0109555);
}

double NNfunction_nn_chi3_chi4::synapse0x29eb810() {
   return (neuron0x29d2ca0()*0.095252);
}

double NNfunction_nn_chi3_chi4::synapse0x29eb850() {
   return (neuron0x29d2fe0()*0.0161641);
}

double NNfunction_nn_chi3_chi4::synapse0x29eb890() {
   return (neuron0x29d3320()*0.827485);
}

double NNfunction_nn_chi3_chi4::synapse0x29eb8d0() {
   return (neuron0x29d3660()*0.0570536);
}

double NNfunction_nn_chi3_chi4::synapse0x29eb910() {
   return (neuron0x29d39a0()*0.107839);
}

double NNfunction_nn_chi3_chi4::synapse0x29eb950() {
   return (neuron0x29d3ce0()*0.113553);
}

double NNfunction_nn_chi3_chi4::synapse0x29eb990() {
   return (neuron0x29d4020()*0.0229309);
}

double NNfunction_nn_chi3_chi4::synapse0x29eb420() {
   return (neuron0x29d4360()*0.0677674);
}

double NNfunction_nn_chi3_chi4::synapse0x29eb460() {
   return (neuron0x29d48c0()*-0.0224201);
}

double NNfunction_nn_chi3_chi4::synapse0x29ebae0() {
   return (neuron0x29d4c00()*0.0294064);
}

double NNfunction_nn_chi3_chi4::synapse0x29ebb20() {
   return (neuron0x29d4f40()*-0.0354792);
}

double NNfunction_nn_chi3_chi4::synapse0x29ebb60() {
   return (neuron0x29d5280()*-0.052562);
}

double NNfunction_nn_chi3_chi4::synapse0x29ebba0() {
   return (neuron0x29d55c0()*-0.000208908);
}

double NNfunction_nn_chi3_chi4::synapse0x29ebbe0() {
   return (neuron0x29d5900()*-0.0273706);
}

double NNfunction_nn_chi3_chi4::synapse0x29ebc20() {
   return (neuron0x29d5c40()*6.72783);
}

double NNfunction_nn_chi3_chi4::synapse0x29ebfa0() {
   return (neuron0x29d0ff0()*-0.066973);
}

double NNfunction_nn_chi3_chi4::synapse0x29ebfe0() {
   return (neuron0x29d12a0()*-0.296574);
}

double NNfunction_nn_chi3_chi4::synapse0x29ec020() {
   return (neuron0x29d15e0()*0.978185);
}

double NNfunction_nn_chi3_chi4::synapse0x29ec060() {
   return (neuron0x29d1920()*-0.00888826);
}

double NNfunction_nn_chi3_chi4::synapse0x29ec0a0() {
   return (neuron0x29d1c60()*1.22639);
}

double NNfunction_nn_chi3_chi4::synapse0x29ec0e0() {
   return (neuron0x29d1fa0()*0.27634);
}

double NNfunction_nn_chi3_chi4::synapse0x29ec120() {
   return (neuron0x29d22e0()*-0.142759);
}

double NNfunction_nn_chi3_chi4::synapse0x29ec160() {
   return (neuron0x29d2620()*0.407456);
}

double NNfunction_nn_chi3_chi4::synapse0x29ec1a0() {
   return (neuron0x29d2960()*0.593553);
}

double NNfunction_nn_chi3_chi4::synapse0x29ec1e0() {
   return (neuron0x29d2ca0()*0.405574);
}

double NNfunction_nn_chi3_chi4::synapse0x29ec220() {
   return (neuron0x29d2fe0()*-0.506605);
}

double NNfunction_nn_chi3_chi4::synapse0x29ec260() {
   return (neuron0x29d3320()*-1.43013);
}

double NNfunction_nn_chi3_chi4::synapse0x29ec2a0() {
   return (neuron0x29d3660()*-0.372134);
}

double NNfunction_nn_chi3_chi4::synapse0x29ec2e0() {
   return (neuron0x29d39a0()*-0.100575);
}

double NNfunction_nn_chi3_chi4::synapse0x29ec320() {
   return (neuron0x29d3ce0()*-0.224453);
}

double NNfunction_nn_chi3_chi4::synapse0x29ec360() {
   return (neuron0x29d4020()*0.761706);
}

double NNfunction_nn_chi3_chi4::synapse0x29ebdf0() {
   return (neuron0x29d4360()*0.681087);
}

double NNfunction_nn_chi3_chi4::synapse0x29ebe30() {
   return (neuron0x29d48c0()*-0.680687);
}

double NNfunction_nn_chi3_chi4::synapse0x29ec4b0() {
   return (neuron0x29d4c00()*-0.182897);
}

double NNfunction_nn_chi3_chi4::synapse0x29ec4f0() {
   return (neuron0x29d4f40()*0.101723);
}

double NNfunction_nn_chi3_chi4::synapse0x29ec530() {
   return (neuron0x29d5280()*2.27468);
}

double NNfunction_nn_chi3_chi4::synapse0x29ec570() {
   return (neuron0x29d55c0()*0.0803343);
}

double NNfunction_nn_chi3_chi4::synapse0x29ec5b0() {
   return (neuron0x29d5900()*1.79636);
}

double NNfunction_nn_chi3_chi4::synapse0x29ec5f0() {
   return (neuron0x29d5c40()*-0.0628895);
}

double NNfunction_nn_chi3_chi4::synapse0x29ec970() {
   return (neuron0x29d0ff0()*-0.0326377);
}

double NNfunction_nn_chi3_chi4::synapse0x29e0f40() {
   return (neuron0x29d12a0()*0.303725);
}

double NNfunction_nn_chi3_chi4::synapse0x29e0f80() {
   return (neuron0x29d15e0()*-0.751463);
}

double NNfunction_nn_chi3_chi4::synapse0x29e0fc0() {
   return (neuron0x29d1920()*-0.0246884);
}

double NNfunction_nn_chi3_chi4::synapse0x29e1210() {
   return (neuron0x29d1c60()*0.0184077);
}

double NNfunction_nn_chi3_chi4::synapse0x29e1250() {
   return (neuron0x29d1fa0()*0.0113241);
}

double NNfunction_nn_chi3_chi4::synapse0x29e1290() {
   return (neuron0x29d22e0()*0.00365844);
}

double NNfunction_nn_chi3_chi4::synapse0x29e14e0() {
   return (neuron0x29d2620()*0.0153152);
}

double NNfunction_nn_chi3_chi4::synapse0x29e1520() {
   return (neuron0x29d2960()*-0.0122095);
}

double NNfunction_nn_chi3_chi4::synapse0x29e1770() {
   return (neuron0x29d2ca0()*-0.0411101);
}

double NNfunction_nn_chi3_chi4::synapse0x29e17b0() {
   return (neuron0x29d2fe0()*-0.00393687);
}

double NNfunction_nn_chi3_chi4::synapse0x29e17f0() {
   return (neuron0x29d3320()*0.0415092);
}

double NNfunction_nn_chi3_chi4::synapse0x29e1a40() {
   return (neuron0x29d3660()*-0.0259587);
}

double NNfunction_nn_chi3_chi4::synapse0x29e1a80() {
   return (neuron0x29d39a0()*-0.00952588);
}

double NNfunction_nn_chi3_chi4::synapse0x29e1cd0() {
   return (neuron0x29d3ce0()*-0.0488658);
}

double NNfunction_nn_chi3_chi4::synapse0x29e1d10() {
   return (neuron0x29d4020()*-0.0540343);
}

double NNfunction_nn_chi3_chi4::synapse0x29ec7c0() {
   return (neuron0x29d4360()*-0.0301039);
}

double NNfunction_nn_chi3_chi4::synapse0x29ec800() {
   return (neuron0x29d48c0()*-0.0244531);
}

double NNfunction_nn_chi3_chi4::synapse0x29e1e60() {
   return (neuron0x29d4c00()*-0.00499545);
}

double NNfunction_nn_chi3_chi4::synapse0x29e2370() {
   return (neuron0x29d4f40()*-0.0101167);
}

double NNfunction_nn_chi3_chi4::synapse0x29e23b0() {
   return (neuron0x29d5280()*0.026694);
}

double NNfunction_nn_chi3_chi4::synapse0x29e23f0() {
   return (neuron0x29d55c0()*-0.0246641);
}

double NNfunction_nn_chi3_chi4::synapse0x29e2640() {
   return (neuron0x29d5900()*0.00175644);
}

double NNfunction_nn_chi3_chi4::synapse0x29e2680() {
   return (neuron0x29d5c40()*0.275704);
}

double NNfunction_nn_chi3_chi4::synapse0x29e1f30() {
   return (neuron0x29d0ff0()*0.0239732);
}

double NNfunction_nn_chi3_chi4::synapse0x29e1f70() {
   return (neuron0x29d12a0()*1.60434);
}

double NNfunction_nn_chi3_chi4::synapse0x29e1fb0() {
   return (neuron0x29d15e0()*-1.02367);
}

double NNfunction_nn_chi3_chi4::synapse0x29e1ff0() {
   return (neuron0x29d1920()*0.0368592);
}

double NNfunction_nn_chi3_chi4::synapse0x29e2970() {
   return (neuron0x29d1c60()*0.0762277);
}

double NNfunction_nn_chi3_chi4::synapse0x29eecc0() {
   return (neuron0x29d1fa0()*-0.0308019);
}

double NNfunction_nn_chi3_chi4::synapse0x29eed00() {
   return (neuron0x29d22e0()*-0.0211471);
}

double NNfunction_nn_chi3_chi4::synapse0x29eed40() {
   return (neuron0x29d2620()*-0.0741615);
}

double NNfunction_nn_chi3_chi4::synapse0x29eed80() {
   return (neuron0x29d2960()*0.0115607);
}

double NNfunction_nn_chi3_chi4::synapse0x29eedc0() {
   return (neuron0x29d2ca0()*0.0251171);
}

double NNfunction_nn_chi3_chi4::synapse0x29eee00() {
   return (neuron0x29d2fe0()*0.0339617);
}

double NNfunction_nn_chi3_chi4::synapse0x29eee40() {
   return (neuron0x29d3320()*4.38703);
}

double NNfunction_nn_chi3_chi4::synapse0x29eee80() {
   return (neuron0x29d3660()*0.0738443);
}

double NNfunction_nn_chi3_chi4::synapse0x29eeec0() {
   return (neuron0x29d39a0()*-0.00399767);
}

double NNfunction_nn_chi3_chi4::synapse0x29eef00() {
   return (neuron0x29d3ce0()*0.0389207);
}

double NNfunction_nn_chi3_chi4::synapse0x29eef40() {
   return (neuron0x29d4020()*-0.00905345);
}

double NNfunction_nn_chi3_chi4::synapse0x29e2850() {
   return (neuron0x29d4360()*-0.0346804);
}

double NNfunction_nn_chi3_chi4::synapse0x29e2890() {
   return (neuron0x29d48c0()*-0.00674166);
}

double NNfunction_nn_chi3_chi4::synapse0x29ef090() {
   return (neuron0x29d4c00()*-0.0053476);
}

double NNfunction_nn_chi3_chi4::synapse0x29ef0d0() {
   return (neuron0x29d4f40()*-0.00188677);
}

double NNfunction_nn_chi3_chi4::synapse0x29ef110() {
   return (neuron0x29d5280()*-0.0280623);
}

double NNfunction_nn_chi3_chi4::synapse0x29ef150() {
   return (neuron0x29d55c0()*0.0150753);
}

double NNfunction_nn_chi3_chi4::synapse0x29ef190() {
   return (neuron0x29d5900()*0.0258873);
}

double NNfunction_nn_chi3_chi4::synapse0x29ef1d0() {
   return (neuron0x29d5c40()*-5.39852);
}

double NNfunction_nn_chi3_chi4::synapse0x29ef550() {
   return (neuron0x29d0ff0()*0.219762);
}

double NNfunction_nn_chi3_chi4::synapse0x29ef590() {
   return (neuron0x29d12a0()*0.786952);
}

double NNfunction_nn_chi3_chi4::synapse0x29ef5d0() {
   return (neuron0x29d15e0()*-0.0298073);
}

double NNfunction_nn_chi3_chi4::synapse0x29ef610() {
   return (neuron0x29d1920()*0.0234919);
}

double NNfunction_nn_chi3_chi4::synapse0x29ef650() {
   return (neuron0x29d1c60()*0.0178373);
}

double NNfunction_nn_chi3_chi4::synapse0x29ef690() {
   return (neuron0x29d1fa0()*0.244715);
}

double NNfunction_nn_chi3_chi4::synapse0x29ef6d0() {
   return (neuron0x29d22e0()*0.168145);
}

double NNfunction_nn_chi3_chi4::synapse0x29ef710() {
   return (neuron0x29d2620()*-0.10145);
}

double NNfunction_nn_chi3_chi4::synapse0x29ef750() {
   return (neuron0x29d2960()*0.0458766);
}

double NNfunction_nn_chi3_chi4::synapse0x29ef790() {
   return (neuron0x29d2ca0()*0.174186);
}

double NNfunction_nn_chi3_chi4::synapse0x29ef7d0() {
   return (neuron0x29d2fe0()*-0.287177);
}

double NNfunction_nn_chi3_chi4::synapse0x29ef810() {
   return (neuron0x29d3320()*0.977382);
}

double NNfunction_nn_chi3_chi4::synapse0x29ef850() {
   return (neuron0x29d3660()*-0.066467);
}

double NNfunction_nn_chi3_chi4::synapse0x29ef890() {
   return (neuron0x29d39a0()*0.288694);
}

double NNfunction_nn_chi3_chi4::synapse0x29ef8d0() {
   return (neuron0x29d3ce0()*0.181251);
}

double NNfunction_nn_chi3_chi4::synapse0x29ef910() {
   return (neuron0x29d4020()*0.0194592);
}

double NNfunction_nn_chi3_chi4::synapse0x29ef3a0() {
   return (neuron0x29d4360()*0.112151);
}

double NNfunction_nn_chi3_chi4::synapse0x29ef3e0() {
   return (neuron0x29d48c0()*0.286336);
}

double NNfunction_nn_chi3_chi4::synapse0x29efa60() {
   return (neuron0x29d4c00()*0.12474);
}

double NNfunction_nn_chi3_chi4::synapse0x29efaa0() {
   return (neuron0x29d4f40()*0.154625);
}

double NNfunction_nn_chi3_chi4::synapse0x29efae0() {
   return (neuron0x29d5280()*-0.0952375);
}

double NNfunction_nn_chi3_chi4::synapse0x29efb20() {
   return (neuron0x29d55c0()*0.0512297);
}

double NNfunction_nn_chi3_chi4::synapse0x29efb60() {
   return (neuron0x29d5900()*-0.121235);
}

double NNfunction_nn_chi3_chi4::synapse0x29efba0() {
   return (neuron0x29d5c40()*-2.74602);
}

double NNfunction_nn_chi3_chi4::synapse0x29eff20() {
   return (neuron0x29d0ff0()*-0.116205);
}

double NNfunction_nn_chi3_chi4::synapse0x29eff60() {
   return (neuron0x29d12a0()*-1.92115);
}

double NNfunction_nn_chi3_chi4::synapse0x29effa0() {
   return (neuron0x29d15e0()*1.11259);
}

double NNfunction_nn_chi3_chi4::synapse0x29effe0() {
   return (neuron0x29d1920()*-0.0482261);
}

double NNfunction_nn_chi3_chi4::synapse0x29f0020() {
   return (neuron0x29d1c60()*0.00514956);
}

double NNfunction_nn_chi3_chi4::synapse0x29f0060() {
   return (neuron0x29d1fa0()*-0.016444);
}

double NNfunction_nn_chi3_chi4::synapse0x29f00a0() {
   return (neuron0x29d22e0()*-0.0439036);
}

double NNfunction_nn_chi3_chi4::synapse0x29f00e0() {
   return (neuron0x29d2620()*-0.0138446);
}

double NNfunction_nn_chi3_chi4::synapse0x29f0120() {
   return (neuron0x29d2960()*-0.00816051);
}

double NNfunction_nn_chi3_chi4::synapse0x29f0160() {
   return (neuron0x29d2ca0()*0.00847228);
}

double NNfunction_nn_chi3_chi4::synapse0x29f01a0() {
   return (neuron0x29d2fe0()*-0.0273856);
}

double NNfunction_nn_chi3_chi4::synapse0x29f01e0() {
   return (neuron0x29d3320()*0.14023);
}

double NNfunction_nn_chi3_chi4::synapse0x29f0220() {
   return (neuron0x29d3660()*-0.0138051);
}

double NNfunction_nn_chi3_chi4::synapse0x29f0260() {
   return (neuron0x29d39a0()*0.0588198);
}

double NNfunction_nn_chi3_chi4::synapse0x29f02a0() {
   return (neuron0x29d3ce0()*-0.103475);
}

double NNfunction_nn_chi3_chi4::synapse0x29f02e0() {
   return (neuron0x29d4020()*-0.101427);
}

double NNfunction_nn_chi3_chi4::synapse0x29efd70() {
   return (neuron0x29d4360()*0.0210379);
}

double NNfunction_nn_chi3_chi4::synapse0x29efdb0() {
   return (neuron0x29d48c0()*0.0426571);
}

double NNfunction_nn_chi3_chi4::synapse0x29f0430() {
   return (neuron0x29d4c00()*0.0467026);
}

double NNfunction_nn_chi3_chi4::synapse0x29f0470() {
   return (neuron0x29d4f40()*0.000978955);
}

double NNfunction_nn_chi3_chi4::synapse0x29f04b0() {
   return (neuron0x29d5280()*0.0224253);
}

double NNfunction_nn_chi3_chi4::synapse0x29f04f0() {
   return (neuron0x29d55c0()*-0.00724839);
}

double NNfunction_nn_chi3_chi4::synapse0x29f0530() {
   return (neuron0x29d5900()*-0.0384331);
}

double NNfunction_nn_chi3_chi4::synapse0x29f0570() {
   return (neuron0x29d5c40()*-1.12655);
}

double NNfunction_nn_chi3_chi4::synapse0x29f08f0() {
   return (neuron0x29d0ff0()*-0.0127857);
}

double NNfunction_nn_chi3_chi4::synapse0x29f0930() {
   return (neuron0x29d12a0()*1.53967);
}

double NNfunction_nn_chi3_chi4::synapse0x29f0970() {
   return (neuron0x29d15e0()*-1.76231);
}

double NNfunction_nn_chi3_chi4::synapse0x29f09b0() {
   return (neuron0x29d1920()*0.0374821);
}

double NNfunction_nn_chi3_chi4::synapse0x29f09f0() {
   return (neuron0x29d1c60()*0.0649038);
}

double NNfunction_nn_chi3_chi4::synapse0x29f0a30() {
   return (neuron0x29d1fa0()*-0.00903585);
}

double NNfunction_nn_chi3_chi4::synapse0x29f0a70() {
   return (neuron0x29d22e0()*-0.015779);
}

double NNfunction_nn_chi3_chi4::synapse0x29f0ab0() {
   return (neuron0x29d2620()*-0.0210614);
}

double NNfunction_nn_chi3_chi4::synapse0x29f0af0() {
   return (neuron0x29d2960()*-0.0131616);
}

double NNfunction_nn_chi3_chi4::synapse0x29f0b30() {
   return (neuron0x29d2ca0()*0.0344157);
}

double NNfunction_nn_chi3_chi4::synapse0x29f0b70() {
   return (neuron0x29d2fe0()*-0.0451471);
}

double NNfunction_nn_chi3_chi4::synapse0x29f0bb0() {
   return (neuron0x29d3320()*3.55759);
}

double NNfunction_nn_chi3_chi4::synapse0x29f0bf0() {
   return (neuron0x29d3660()*-0.0119186);
}

double NNfunction_nn_chi3_chi4::synapse0x29f0c30() {
   return (neuron0x29d39a0()*0.0439893);
}

double NNfunction_nn_chi3_chi4::synapse0x29f0c70() {
   return (neuron0x29d3ce0()*-0.0106138);
}

double NNfunction_nn_chi3_chi4::synapse0x29f0cb0() {
   return (neuron0x29d4020()*0.0136734);
}

double NNfunction_nn_chi3_chi4::synapse0x29f0740() {
   return (neuron0x29d4360()*-0.0209436);
}

double NNfunction_nn_chi3_chi4::synapse0x29f0780() {
   return (neuron0x29d48c0()*0.0904489);
}

double NNfunction_nn_chi3_chi4::synapse0x29f0e00() {
   return (neuron0x29d4c00()*0.0257989);
}

double NNfunction_nn_chi3_chi4::synapse0x29f0e40() {
   return (neuron0x29d4f40()*-0.0273619);
}

double NNfunction_nn_chi3_chi4::synapse0x29f0e80() {
   return (neuron0x29d5280()*-0.024053);
}

double NNfunction_nn_chi3_chi4::synapse0x29f0ec0() {
   return (neuron0x29d55c0()*0.00129971);
}

double NNfunction_nn_chi3_chi4::synapse0x29f0f00() {
   return (neuron0x29d5900()*-0.00465483);
}

double NNfunction_nn_chi3_chi4::synapse0x29f0f40() {
   return (neuron0x29d5c40()*1.10183);
}

double NNfunction_nn_chi3_chi4::synapse0x29f12c0() {
   return (neuron0x29d0ff0()*-0.042113);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1300() {
   return (neuron0x29d12a0()*-3.7902);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1340() {
   return (neuron0x29d15e0()*0.702844);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1380() {
   return (neuron0x29d1920()*-0.00508973);
}

double NNfunction_nn_chi3_chi4::synapse0x29f13c0() {
   return (neuron0x29d1c60()*0.0100476);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1400() {
   return (neuron0x29d1fa0()*-0.0113038);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1440() {
   return (neuron0x29d22e0()*-0.0256431);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1480() {
   return (neuron0x29d2620()*0.00669103);
}

double NNfunction_nn_chi3_chi4::synapse0x29f14c0() {
   return (neuron0x29d2960()*0.0065548);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1500() {
   return (neuron0x29d2ca0()*0.00953004);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1540() {
   return (neuron0x29d2fe0()*-0.0273057);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1580() {
   return (neuron0x29d3320()*-0.352656);
}

double NNfunction_nn_chi3_chi4::synapse0x29f15c0() {
   return (neuron0x29d3660()*-0.0283454);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1600() {
   return (neuron0x29d39a0()*0.000407481);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1640() {
   return (neuron0x29d3ce0()*0.0320174);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1680() {
   return (neuron0x29d4020()*-0.0462051);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1110() {
   return (neuron0x29d4360()*0.00336639);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1150() {
   return (neuron0x29d48c0()*0.00114243);
}

double NNfunction_nn_chi3_chi4::synapse0x29f17d0() {
   return (neuron0x29d4c00()*-0.0428025);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1810() {
   return (neuron0x29d4f40()*0.0179997);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1850() {
   return (neuron0x29d5280()*0.00259116);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1890() {
   return (neuron0x29d55c0()*-1.50492e-05);
}

double NNfunction_nn_chi3_chi4::synapse0x29f18d0() {
   return (neuron0x29d5900()*-0.0285657);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1910() {
   return (neuron0x29d5c40()*-8.75404);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1c90() {
   return (neuron0x29d0ff0()*0.0385083);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1cd0() {
   return (neuron0x29d12a0()*-0.146621);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1d10() {
   return (neuron0x29d15e0()*0.36779);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1d50() {
   return (neuron0x29d1920()*0.538753);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1d90() {
   return (neuron0x29d1c60()*0.623841);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1dd0() {
   return (neuron0x29d1fa0()*-0.107147);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1e10() {
   return (neuron0x29d22e0()*0.188373);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1e50() {
   return (neuron0x29d2620()*0.607225);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1e90() {
   return (neuron0x29d2960()*0.271888);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1ed0() {
   return (neuron0x29d2ca0()*-1.22033);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1f10() {
   return (neuron0x29d2fe0()*0.315199);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1f50() {
   return (neuron0x29d3320()*0.726723);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1f90() {
   return (neuron0x29d3660()*-0.244862);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1fd0() {
   return (neuron0x29d39a0()*-1.1116);
}

double NNfunction_nn_chi3_chi4::synapse0x29f2010() {
   return (neuron0x29d3ce0()*0.1555);
}

double NNfunction_nn_chi3_chi4::synapse0x29f2050() {
   return (neuron0x29d4020()*-0.041602);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1ae0() {
   return (neuron0x29d4360()*0.336165);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1b20() {
   return (neuron0x29d48c0()*-1.38838);
}

double NNfunction_nn_chi3_chi4::synapse0x29f21a0() {
   return (neuron0x29d4c00()*-0.0522327);
}

double NNfunction_nn_chi3_chi4::synapse0x29f21e0() {
   return (neuron0x29d4f40()*-0.134404);
}

double NNfunction_nn_chi3_chi4::synapse0x29f2220() {
   return (neuron0x29d5280()*-0.628944);
}

double NNfunction_nn_chi3_chi4::synapse0x29f2260() {
   return (neuron0x29d55c0()*0.514672);
}

double NNfunction_nn_chi3_chi4::synapse0x29f22a0() {
   return (neuron0x29d5900()*-0.603099);
}

double NNfunction_nn_chi3_chi4::synapse0x29f22e0() {
   return (neuron0x29d5c40()*-0.641615);
}

double NNfunction_nn_chi3_chi4::synapse0x29f2660() {
   return (neuron0x29d0ff0()*-0.0485849);
}

double NNfunction_nn_chi3_chi4::synapse0x29f26a0() {
   return (neuron0x29d12a0()*-1.37373);
}

double NNfunction_nn_chi3_chi4::synapse0x29f26e0() {
   return (neuron0x29d15e0()*2.02172);
}

double NNfunction_nn_chi3_chi4::synapse0x29f2720() {
   return (neuron0x29d1920()*-0.044499);
}

double NNfunction_nn_chi3_chi4::synapse0x29f2760() {
   return (neuron0x29d1c60()*8.5702e-05);
}

double NNfunction_nn_chi3_chi4::synapse0x29f27a0() {
   return (neuron0x29d1fa0()*0.00264597);
}

double NNfunction_nn_chi3_chi4::synapse0x29f27e0() {
   return (neuron0x29d22e0()*0.0110643);
}

double NNfunction_nn_chi3_chi4::synapse0x29f2820() {
   return (neuron0x29d2620()*0.0467313);
}

double NNfunction_nn_chi3_chi4::synapse0x29f2860() {
   return (neuron0x29d2960()*-0.0275212);
}

double NNfunction_nn_chi3_chi4::synapse0x29f28a0() {
   return (neuron0x29d2ca0()*-0.0215473);
}

double NNfunction_nn_chi3_chi4::synapse0x29f28e0() {
   return (neuron0x29d2fe0()*0.0530698);
}

double NNfunction_nn_chi3_chi4::synapse0x29f2920() {
   return (neuron0x29d3320()*-0.867508);
}

double NNfunction_nn_chi3_chi4::synapse0x29f2960() {
   return (neuron0x29d3660()*-0.0598643);
}

double NNfunction_nn_chi3_chi4::synapse0x29f29a0() {
   return (neuron0x29d39a0()*0.000309502);
}

double NNfunction_nn_chi3_chi4::synapse0x29f29e0() {
   return (neuron0x29d3ce0()*0.0710562);
}

double NNfunction_nn_chi3_chi4::synapse0x29f2a20() {
   return (neuron0x29d4020()*-0.0855951);
}

double NNfunction_nn_chi3_chi4::synapse0x29f24b0() {
   return (neuron0x29d4360()*-0.0137337);
}

double NNfunction_nn_chi3_chi4::synapse0x29f24f0() {
   return (neuron0x29d48c0()*-0.0134935);
}

double NNfunction_nn_chi3_chi4::synapse0x29f2b70() {
   return (neuron0x29d4c00()*0.0185498);
}

double NNfunction_nn_chi3_chi4::synapse0x29f2bb0() {
   return (neuron0x29d4f40()*0.0159909);
}

double NNfunction_nn_chi3_chi4::synapse0x29f2bf0() {
   return (neuron0x29d5280()*-0.0354602);
}

double NNfunction_nn_chi3_chi4::synapse0x29f2c30() {
   return (neuron0x29d55c0()*0.0185064);
}

double NNfunction_nn_chi3_chi4::synapse0x29f2c70() {
   return (neuron0x29d5900()*0.0290159);
}

double NNfunction_nn_chi3_chi4::synapse0x29f2cb0() {
   return (neuron0x29d5c40()*0.244818);
}

double NNfunction_nn_chi3_chi4::synapse0x29f3030() {
   return (neuron0x29d0ff0()*0.0727846);
}

double NNfunction_nn_chi3_chi4::synapse0x29f3070() {
   return (neuron0x29d12a0()*0.568137);
}

double NNfunction_nn_chi3_chi4::synapse0x29f30b0() {
   return (neuron0x29d15e0()*0.74506);
}

double NNfunction_nn_chi3_chi4::synapse0x29f30f0() {
   return (neuron0x29d1920()*-0.000653319);
}

double NNfunction_nn_chi3_chi4::synapse0x29f3130() {
   return (neuron0x29d1c60()*0.0755416);
}

double NNfunction_nn_chi3_chi4::synapse0x29f3170() {
   return (neuron0x29d1fa0()*-0.0784084);
}

double NNfunction_nn_chi3_chi4::synapse0x29f31b0() {
   return (neuron0x29d22e0()*0.0379176);
}

double NNfunction_nn_chi3_chi4::synapse0x29f31f0() {
   return (neuron0x29d2620()*-0.088132);
}

double NNfunction_nn_chi3_chi4::synapse0x29f3230() {
   return (neuron0x29d2960()*0.021024);
}

double NNfunction_nn_chi3_chi4::synapse0x29f3270() {
   return (neuron0x29d2ca0()*-0.152478);
}

double NNfunction_nn_chi3_chi4::synapse0x29f32b0() {
   return (neuron0x29d2fe0()*0.0317166);
}

double NNfunction_nn_chi3_chi4::synapse0x29f32f0() {
   return (neuron0x29d3320()*-1.55982);
}

double NNfunction_nn_chi3_chi4::synapse0x29f3330() {
   return (neuron0x29d3660()*0.106524);
}

double NNfunction_nn_chi3_chi4::synapse0x29f3370() {
   return (neuron0x29d39a0()*-0.0453797);
}

double NNfunction_nn_chi3_chi4::synapse0x29f33b0() {
   return (neuron0x29d3ce0()*-0.185155);
}

double NNfunction_nn_chi3_chi4::synapse0x29f33f0() {
   return (neuron0x29d4020()*-0.0183354);
}

double NNfunction_nn_chi3_chi4::synapse0x29f2e80() {
   return (neuron0x29d4360()*-0.0687436);
}

double NNfunction_nn_chi3_chi4::synapse0x29f2ec0() {
   return (neuron0x29d48c0()*0.0644605);
}

double NNfunction_nn_chi3_chi4::synapse0x29f3540() {
   return (neuron0x29d4c00()*-0.028108);
}

double NNfunction_nn_chi3_chi4::synapse0x29f3580() {
   return (neuron0x29d4f40()*-0.0832105);
}

double NNfunction_nn_chi3_chi4::synapse0x29f35c0() {
   return (neuron0x29d5280()*0.0765658);
}

double NNfunction_nn_chi3_chi4::synapse0x29f3600() {
   return (neuron0x29d55c0()*-0.0301359);
}

double NNfunction_nn_chi3_chi4::synapse0x29f3640() {
   return (neuron0x29d5900()*0.0241009);
}

double NNfunction_nn_chi3_chi4::synapse0x29f3680() {
   return (neuron0x29d5c40()*0.903151);
}

double NNfunction_nn_chi3_chi4::synapse0x29dc130() {
   return (neuron0x29d0ff0()*-0.158554);
}

double NNfunction_nn_chi3_chi4::synapse0x29dc170() {
   return (neuron0x29d12a0()*2.01924);
}

double NNfunction_nn_chi3_chi4::synapse0x29dc1b0() {
   return (neuron0x29d15e0()*-2.7194);
}

double NNfunction_nn_chi3_chi4::synapse0x29dc1f0() {
   return (neuron0x29d1920()*-0.0512123);
}

double NNfunction_nn_chi3_chi4::synapse0x29dc230() {
   return (neuron0x29d1c60()*-0.00144024);
}

double NNfunction_nn_chi3_chi4::synapse0x29dc270() {
   return (neuron0x29d1fa0()*-0.165031);
}

double NNfunction_nn_chi3_chi4::synapse0x29dc2b0() {
   return (neuron0x29d22e0()*-0.159564);
}

double NNfunction_nn_chi3_chi4::synapse0x29dc2f0() {
   return (neuron0x29d2620()*-0.0172443);
}

double NNfunction_nn_chi3_chi4::synapse0x29f3e10() {
   return (neuron0x29d2960()*0.102792);
}

double NNfunction_nn_chi3_chi4::synapse0x29f3e50() {
   return (neuron0x29d2ca0()*-0.450059);
}

double NNfunction_nn_chi3_chi4::synapse0x29f3e90() {
   return (neuron0x29d2fe0()*0.0690576);
}

double NNfunction_nn_chi3_chi4::synapse0x29f3ed0() {
   return (neuron0x29d3320()*1.13305);
}

double NNfunction_nn_chi3_chi4::synapse0x29f3f10() {
   return (neuron0x29d3660()*0.183669);
}

double NNfunction_nn_chi3_chi4::synapse0x29f3f50() {
   return (neuron0x29d39a0()*-0.0453488);
}

double NNfunction_nn_chi3_chi4::synapse0x29f3f90() {
   return (neuron0x29d3ce0()*-0.293265);
}

double NNfunction_nn_chi3_chi4::synapse0x29f3fd0() {
   return (neuron0x29d4020()*0.163718);
}

double NNfunction_nn_chi3_chi4::synapse0x29f3850() {
   return (neuron0x29d4360()*-0.101737);
}

double NNfunction_nn_chi3_chi4::synapse0x29f3890() {
   return (neuron0x29d48c0()*0.449814);
}

double NNfunction_nn_chi3_chi4::synapse0x29f4120() {
   return (neuron0x29d4c00()*0.177726);
}

double NNfunction_nn_chi3_chi4::synapse0x29f4160() {
   return (neuron0x29d4f40()*-0.487812);
}

double NNfunction_nn_chi3_chi4::synapse0x29f41a0() {
   return (neuron0x29d5280()*0.314748);
}

double NNfunction_nn_chi3_chi4::synapse0x29f41e0() {
   return (neuron0x29d55c0()*-0.165682);
}

double NNfunction_nn_chi3_chi4::synapse0x29f4220() {
   return (neuron0x29d5900()*0.106751);
}

double NNfunction_nn_chi3_chi4::synapse0x29f4260() {
   return (neuron0x29d5c40()*3.01626);
}

double NNfunction_nn_chi3_chi4::synapse0x29f45e0() {
   return (neuron0x29d0ff0()*0.127831);
}

double NNfunction_nn_chi3_chi4::synapse0x29f4620() {
   return (neuron0x29d12a0()*-0.0348465);
}

double NNfunction_nn_chi3_chi4::synapse0x29f4660() {
   return (neuron0x29d15e0()*0.00415635);
}

double NNfunction_nn_chi3_chi4::synapse0x29f46a0() {
   return (neuron0x29d1920()*-0.408912);
}

double NNfunction_nn_chi3_chi4::synapse0x29f46e0() {
   return (neuron0x29d1c60()*0.432192);
}

double NNfunction_nn_chi3_chi4::synapse0x29f4720() {
   return (neuron0x29d1fa0()*-0.0371495);
}

double NNfunction_nn_chi3_chi4::synapse0x29f4760() {
   return (neuron0x29d22e0()*-0.117002);
}

double NNfunction_nn_chi3_chi4::synapse0x29f47a0() {
   return (neuron0x29d2620()*0.597579);
}

double NNfunction_nn_chi3_chi4::synapse0x29f47e0() {
   return (neuron0x29d2960()*-0.194934);
}

double NNfunction_nn_chi3_chi4::synapse0x29f4820() {
   return (neuron0x29d2ca0()*0.732883);
}

double NNfunction_nn_chi3_chi4::synapse0x29f4860() {
   return (neuron0x29d2fe0()*-0.197304);
}

double NNfunction_nn_chi3_chi4::synapse0x29f48a0() {
   return (neuron0x29d3320()*-0.933232);
}

double NNfunction_nn_chi3_chi4::synapse0x29f48e0() {
   return (neuron0x29d3660()*-0.381744);
}

double NNfunction_nn_chi3_chi4::synapse0x29f4920() {
   return (neuron0x29d39a0()*0.180321);
}

double NNfunction_nn_chi3_chi4::synapse0x29f4960() {
   return (neuron0x29d3ce0()*-0.673419);
}

double NNfunction_nn_chi3_chi4::synapse0x29f49a0() {
   return (neuron0x29d4020()*-0.290932);
}

double NNfunction_nn_chi3_chi4::synapse0x29f4430() {
   return (neuron0x29d4360()*0.353719);
}

double NNfunction_nn_chi3_chi4::synapse0x29f4470() {
   return (neuron0x29d48c0()*-0.109827);
}

double NNfunction_nn_chi3_chi4::synapse0x29f4af0() {
   return (neuron0x29d4c00()*-0.573668);
}

double NNfunction_nn_chi3_chi4::synapse0x29f4b30() {
   return (neuron0x29d4f40()*0.220832);
}

double NNfunction_nn_chi3_chi4::synapse0x29f4b70() {
   return (neuron0x29d5280()*0.746721);
}

double NNfunction_nn_chi3_chi4::synapse0x29f4bb0() {
   return (neuron0x29d55c0()*-0.217571);
}

double NNfunction_nn_chi3_chi4::synapse0x29f4bf0() {
   return (neuron0x29d5900()*0.329228);
}

double NNfunction_nn_chi3_chi4::synapse0x29f4c30() {
   return (neuron0x29d5c40()*-0.989625);
}

double NNfunction_nn_chi3_chi4::synapse0x29f4fb0() {
   return (neuron0x29d0ff0()*-0.203862);
}

double NNfunction_nn_chi3_chi4::synapse0x29f4ff0() {
   return (neuron0x29d12a0()*-2.11296);
}

double NNfunction_nn_chi3_chi4::synapse0x29f5030() {
   return (neuron0x29d15e0()*-2.11516);
}

double NNfunction_nn_chi3_chi4::synapse0x29f5070() {
   return (neuron0x29d1920()*-0.496459);
}

double NNfunction_nn_chi3_chi4::synapse0x29f50b0() {
   return (neuron0x29d1c60()*1.1314);
}

double NNfunction_nn_chi3_chi4::synapse0x29f50f0() {
   return (neuron0x29d1fa0()*-0.138124);
}

double NNfunction_nn_chi3_chi4::synapse0x29f5130() {
   return (neuron0x29d22e0()*-0.200861);
}

double NNfunction_nn_chi3_chi4::synapse0x29f5170() {
   return (neuron0x29d2620()*-0.5654);
}

double NNfunction_nn_chi3_chi4::synapse0x29f51b0() {
   return (neuron0x29d2960()*-0.445978);
}

double NNfunction_nn_chi3_chi4::synapse0x29f51f0() {
   return (neuron0x29d2ca0()*0.506547);
}

double NNfunction_nn_chi3_chi4::synapse0x29f5230() {
   return (neuron0x29d2fe0()*-0.706837);
}

double NNfunction_nn_chi3_chi4::synapse0x29f5270() {
   return (neuron0x29d3320()*0.538614);
}

double NNfunction_nn_chi3_chi4::synapse0x29f52b0() {
   return (neuron0x29d3660()*-0.40776);
}

double NNfunction_nn_chi3_chi4::synapse0x29f52f0() {
   return (neuron0x29d39a0()*-0.573207);
}

double NNfunction_nn_chi3_chi4::synapse0x29f5330() {
   return (neuron0x29d3ce0()*0.489186);
}

double NNfunction_nn_chi3_chi4::synapse0x29f5370() {
   return (neuron0x29d4020()*0.404974);
}

double NNfunction_nn_chi3_chi4::synapse0x29f4e00() {
   return (neuron0x29d4360()*0.060708);
}

double NNfunction_nn_chi3_chi4::synapse0x29f4e40() {
   return (neuron0x29d48c0()*-0.0388572);
}

double NNfunction_nn_chi3_chi4::synapse0x29e5970() {
   return (neuron0x29d4c00()*0.265793);
}

double NNfunction_nn_chi3_chi4::synapse0x29e59b0() {
   return (neuron0x29d4f40()*-1.46176);
}

double NNfunction_nn_chi3_chi4::synapse0x29e59f0() {
   return (neuron0x29d5280()*-0.694559);
}

double NNfunction_nn_chi3_chi4::synapse0x29e5a30() {
   return (neuron0x29d55c0()*-0.247789);
}

double NNfunction_nn_chi3_chi4::synapse0x29e5a70() {
   return (neuron0x29d5900()*0.0165713);
}

double NNfunction_nn_chi3_chi4::synapse0x29e5ab0() {
   return (neuron0x29d5c40()*-1.36909);
}

double NNfunction_nn_chi3_chi4::synapse0x29e5e30() {
   return (neuron0x29d0ff0()*-0.0041985);
}

double NNfunction_nn_chi3_chi4::synapse0x29e5e70() {
   return (neuron0x29d12a0()*0.202195);
}

double NNfunction_nn_chi3_chi4::synapse0x29e5eb0() {
   return (neuron0x29d15e0()*-1.0849);
}

double NNfunction_nn_chi3_chi4::synapse0x29e5ef0() {
   return (neuron0x29d1920()*0.0217214);
}

double NNfunction_nn_chi3_chi4::synapse0x29e5f30() {
   return (neuron0x29d1c60()*-0.0332974);
}

double NNfunction_nn_chi3_chi4::synapse0x29e5f70() {
   return (neuron0x29d1fa0()*-0.000675485);
}

double NNfunction_nn_chi3_chi4::synapse0x29e5fb0() {
   return (neuron0x29d22e0()*0.00985147);
}

double NNfunction_nn_chi3_chi4::synapse0x29e5ff0() {
   return (neuron0x29d2620()*-0.024414);
}

double NNfunction_nn_chi3_chi4::synapse0x29e6030() {
   return (neuron0x29d2960()*0.0122205);
}

double NNfunction_nn_chi3_chi4::synapse0x29e6070() {
   return (neuron0x29d2ca0()*-0.00523856);
}

double NNfunction_nn_chi3_chi4::synapse0x29e60b0() {
   return (neuron0x29d2fe0()*-0.0320585);
}

double NNfunction_nn_chi3_chi4::synapse0x29e60f0() {
   return (neuron0x29d3320()*0.124566);
}

double NNfunction_nn_chi3_chi4::synapse0x29e6130() {
   return (neuron0x29d3660()*0.0153949);
}

double NNfunction_nn_chi3_chi4::synapse0x29e6170() {
   return (neuron0x29d39a0()*0.0453064);
}

double NNfunction_nn_chi3_chi4::synapse0x29e61b0() {
   return (neuron0x29d3ce0()*-0.0456464);
}

double NNfunction_nn_chi3_chi4::synapse0x29e61f0() {
   return (neuron0x29d4020()*-0.0111215);
}

double NNfunction_nn_chi3_chi4::synapse0x29e5c80() {
   return (neuron0x29d4360()*0.0234664);
}

double NNfunction_nn_chi3_chi4::synapse0x29e5cc0() {
   return (neuron0x29d48c0()*0.0176566);
}

double NNfunction_nn_chi3_chi4::synapse0x29e6340() {
   return (neuron0x29d4c00()*0.00417818);
}

double NNfunction_nn_chi3_chi4::synapse0x29e6380() {
   return (neuron0x29d4f40()*-0.00185931);
}

double NNfunction_nn_chi3_chi4::synapse0x29e63c0() {
   return (neuron0x29d5280()*0.0427951);
}

double NNfunction_nn_chi3_chi4::synapse0x29e6400() {
   return (neuron0x29d55c0()*-0.00749874);
}

double NNfunction_nn_chi3_chi4::synapse0x29e6440() {
   return (neuron0x29d5900()*-0.0173235);
}

double NNfunction_nn_chi3_chi4::synapse0x29e6480() {
   return (neuron0x29d5c40()*1.77959);
}

double NNfunction_nn_chi3_chi4::synapse0x29e6800() {
   return (neuron0x29d0ff0()*0.443673);
}

double NNfunction_nn_chi3_chi4::synapse0x29e6840() {
   return (neuron0x29d12a0()*0.412464);
}

double NNfunction_nn_chi3_chi4::synapse0x29e6880() {
   return (neuron0x29d15e0()*0.247652);
}

double NNfunction_nn_chi3_chi4::synapse0x29e68c0() {
   return (neuron0x29d1920()*-0.0446921);
}

double NNfunction_nn_chi3_chi4::synapse0x29e6900() {
   return (neuron0x29d1c60()*-0.314657);
}

double NNfunction_nn_chi3_chi4::synapse0x29e6940() {
   return (neuron0x29d1fa0()*-0.449257);
}

double NNfunction_nn_chi3_chi4::synapse0x29e6980() {
   return (neuron0x29d22e0()*0.038968);
}

double NNfunction_nn_chi3_chi4::synapse0x29e69c0() {
   return (neuron0x29d2620()*1.0896);
}

double NNfunction_nn_chi3_chi4::synapse0x29e6a00() {
   return (neuron0x29d2960()*0.0210082);
}

double NNfunction_nn_chi3_chi4::synapse0x29e6a40() {
   return (neuron0x29d2ca0()*-0.368565);
}

double NNfunction_nn_chi3_chi4::synapse0x29e6a80() {
   return (neuron0x29d2fe0()*0.237027);
}

double NNfunction_nn_chi3_chi4::synapse0x29e6ac0() {
   return (neuron0x29d3320()*-0.864298);
}

double NNfunction_nn_chi3_chi4::synapse0x29e6b00() {
   return (neuron0x29d3660()*0.419424);
}

double NNfunction_nn_chi3_chi4::synapse0x29e6b40() {
   return (neuron0x29d39a0()*-0.0535003);
}

double NNfunction_nn_chi3_chi4::synapse0x29e6b80() {
   return (neuron0x29d3ce0()*0.127116);
}

double NNfunction_nn_chi3_chi4::synapse0x29e6bc0() {
   return (neuron0x29d4020()*0.00836146);
}

double NNfunction_nn_chi3_chi4::synapse0x29e6650() {
   return (neuron0x29d4360()*-0.171025);
}

double NNfunction_nn_chi3_chi4::synapse0x29e6690() {
   return (neuron0x29d48c0()*-0.00813916);
}

double NNfunction_nn_chi3_chi4::synapse0x29e6d10() {
   return (neuron0x29d4c00()*-0.318079);
}

double NNfunction_nn_chi3_chi4::synapse0x29e6d50() {
   return (neuron0x29d4f40()*-0.574882);
}

double NNfunction_nn_chi3_chi4::synapse0x29e6d90() {
   return (neuron0x29d5280()*0.305191);
}

double NNfunction_nn_chi3_chi4::synapse0x29e6dd0() {
   return (neuron0x29d55c0()*0.298394);
}

double NNfunction_nn_chi3_chi4::synapse0x29e6e10() {
   return (neuron0x29d5900()*0.660504);
}

double NNfunction_nn_chi3_chi4::synapse0x29e6e50() {
   return (neuron0x29d5c40()*0.619917);
}

double NNfunction_nn_chi3_chi4::synapse0x29e71d0() {
   return (neuron0x29d0ff0()*-0.0388503);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7210() {
   return (neuron0x29d12a0()*-3.71912);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7250() {
   return (neuron0x29d15e0()*0.60762);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7290() {
   return (neuron0x29d1920()*-0.00734886);
}

double NNfunction_nn_chi3_chi4::synapse0x29e72d0() {
   return (neuron0x29d1c60()*0.0124039);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7310() {
   return (neuron0x29d1fa0()*-0.0121511);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7350() {
   return (neuron0x29d22e0()*-0.0243269);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7390() {
   return (neuron0x29d2620()*0.00882857);
}

double NNfunction_nn_chi3_chi4::synapse0x29e73d0() {
   return (neuron0x29d2960()*0.000168437);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7410() {
   return (neuron0x29d2ca0()*0.00805125);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7450() {
   return (neuron0x29d2fe0()*-0.0329268);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7490() {
   return (neuron0x29d3320()*-0.274333);
}

double NNfunction_nn_chi3_chi4::synapse0x29e74d0() {
   return (neuron0x29d3660()*-0.0278569);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7510() {
   return (neuron0x29d39a0()*-0.00879887);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7550() {
   return (neuron0x29d3ce0()*0.0355393);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7590() {
   return (neuron0x29d4020()*-0.0607178);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7020() {
   return (neuron0x29d4360()*0.00303914);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7060() {
   return (neuron0x29d48c0()*0.000753421);
}

double NNfunction_nn_chi3_chi4::synapse0x29e76e0() {
   return (neuron0x29d4c00()*-0.0488053);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7720() {
   return (neuron0x29d4f40()*0.0139591);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7760() {
   return (neuron0x29d5280()*0.00987166);
}

double NNfunction_nn_chi3_chi4::synapse0x29e77a0() {
   return (neuron0x29d55c0()*0.00567677);
}

double NNfunction_nn_chi3_chi4::synapse0x29e77e0() {
   return (neuron0x29d5900()*-0.0293931);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7820() {
   return (neuron0x29d5c40()*-8.74719);
}

double NNfunction_nn_chi3_chi4::synapse0x29f96f0() {
   return (neuron0x29d0ff0()*-0.364626);
}

double NNfunction_nn_chi3_chi4::synapse0x29f9730() {
   return (neuron0x29d12a0()*0.375372);
}

double NNfunction_nn_chi3_chi4::synapse0x29f9770() {
   return (neuron0x29d15e0()*0.0199428);
}

double NNfunction_nn_chi3_chi4::synapse0x29f97b0() {
   return (neuron0x29d1920()*0.306541);
}

double NNfunction_nn_chi3_chi4::synapse0x29f97f0() {
   return (neuron0x29d1c60()*0.346563);
}

double NNfunction_nn_chi3_chi4::synapse0x29f9830() {
   return (neuron0x29d1fa0()*-0.0367113);
}

double NNfunction_nn_chi3_chi4::synapse0x29f9870() {
   return (neuron0x29d22e0()*0.422903);
}

double NNfunction_nn_chi3_chi4::synapse0x29f98b0() {
   return (neuron0x29d2620()*-0.0169806);
}

double NNfunction_nn_chi3_chi4::synapse0x29f98f0() {
   return (neuron0x29d2960()*-0.252832);
}

double NNfunction_nn_chi3_chi4::synapse0x29f9930() {
   return (neuron0x29d2ca0()*0.0792851);
}

double NNfunction_nn_chi3_chi4::synapse0x29f9970() {
   return (neuron0x29d2fe0()*0.139739);
}

double NNfunction_nn_chi3_chi4::synapse0x29f99b0() {
   return (neuron0x29d3320()*-1.96712);
}

double NNfunction_nn_chi3_chi4::synapse0x29f99f0() {
   return (neuron0x29d3660()*-0.0233385);
}

double NNfunction_nn_chi3_chi4::synapse0x29f9a30() {
   return (neuron0x29d39a0()*-0.158614);
}

double NNfunction_nn_chi3_chi4::synapse0x29f9a70() {
   return (neuron0x29d3ce0()*0.331305);
}

double NNfunction_nn_chi3_chi4::synapse0x29f9ab0() {
   return (neuron0x29d4020()*0.147936);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7860() {
   return (neuron0x29d4360()*0.153905);
}

double NNfunction_nn_chi3_chi4::synapse0x29e78a0() {
   return (neuron0x29d48c0()*-0.248376);
}

double NNfunction_nn_chi3_chi4::synapse0x29f9c00() {
   return (neuron0x29d4c00()*-0.482393);
}

double NNfunction_nn_chi3_chi4::synapse0x29f9c40() {
   return (neuron0x29d4f40()*-0.0484562);
}

double NNfunction_nn_chi3_chi4::synapse0x29f9c80() {
   return (neuron0x29d5280()*-0.338587);
}

double NNfunction_nn_chi3_chi4::synapse0x29f9cc0() {
   return (neuron0x29d55c0()*0.32097);
}

double NNfunction_nn_chi3_chi4::synapse0x29f9d00() {
   return (neuron0x29d5900()*0.0170545);
}

double NNfunction_nn_chi3_chi4::synapse0x29f9d40() {
   return (neuron0x29d5c40()*-1.14896);
}

double NNfunction_nn_chi3_chi4::synapse0x29fa0c0() {
   return (neuron0x29d0ff0()*-0.0553578);
}

double NNfunction_nn_chi3_chi4::synapse0x29fa100() {
   return (neuron0x29d12a0()*-0.354866);
}

double NNfunction_nn_chi3_chi4::synapse0x29fa140() {
   return (neuron0x29d15e0()*1.55221);
}

double NNfunction_nn_chi3_chi4::synapse0x29fa180() {
   return (neuron0x29d1920()*-0.0453051);
}

double NNfunction_nn_chi3_chi4::synapse0x29fa1c0() {
   return (neuron0x29d1c60()*-0.0434049);
}

double NNfunction_nn_chi3_chi4::synapse0x29fa200() {
   return (neuron0x29d1fa0()*-0.031336);
}

double NNfunction_nn_chi3_chi4::synapse0x29fa240() {
   return (neuron0x29d22e0()*-0.073947);
}

double NNfunction_nn_chi3_chi4::synapse0x29fa280() {
   return (neuron0x29d2620()*0.01939);
}

double NNfunction_nn_chi3_chi4::synapse0x29fa2c0() {
   return (neuron0x29d2960()*-0.0110212);
}

double NNfunction_nn_chi3_chi4::synapse0x29fa300() {
   return (neuron0x29d2ca0()*-0.033403);
}

double NNfunction_nn_chi3_chi4::synapse0x29fa340() {
   return (neuron0x29d2fe0()*-0.00774777);
}

double NNfunction_nn_chi3_chi4::synapse0x29fa380() {
   return (neuron0x29d3320()*-0.118876);
}

double NNfunction_nn_chi3_chi4::synapse0x29fa3c0() {
   return (neuron0x29d3660()*-0.00563744);
}

double NNfunction_nn_chi3_chi4::synapse0x29fa400() {
   return (neuron0x29d39a0()*-0.0226133);
}

double NNfunction_nn_chi3_chi4::synapse0x29fa440() {
   return (neuron0x29d3ce0()*-0.0381691);
}

double NNfunction_nn_chi3_chi4::synapse0x29fa480() {
   return (neuron0x29d4020()*-0.00400157);
}

double NNfunction_nn_chi3_chi4::synapse0x29f9f10() {
   return (neuron0x29d4360()*0.0709625);
}

double NNfunction_nn_chi3_chi4::synapse0x29f9f50() {
   return (neuron0x29d48c0()*0.0303735);
}

double NNfunction_nn_chi3_chi4::synapse0x29fa5d0() {
   return (neuron0x29d4c00()*0.0574848);
}

double NNfunction_nn_chi3_chi4::synapse0x29fa610() {
   return (neuron0x29d4f40()*-0.0717698);
}

double NNfunction_nn_chi3_chi4::synapse0x29fa650() {
   return (neuron0x29d5280()*-0.0163034);
}

double NNfunction_nn_chi3_chi4::synapse0x29fa690() {
   return (neuron0x29d55c0()*0.0345803);
}

double NNfunction_nn_chi3_chi4::synapse0x29fa6d0() {
   return (neuron0x29d5900()*0.0207988);
}

double NNfunction_nn_chi3_chi4::synapse0x29fa710() {
   return (neuron0x29d5c40()*0.717317);
}

double NNfunction_nn_chi3_chi4::synapse0x29faa90() {
   return (neuron0x29d0ff0()*-0.0382997);
}

double NNfunction_nn_chi3_chi4::synapse0x29faad0() {
   return (neuron0x29d12a0()*-0.291331);
}

double NNfunction_nn_chi3_chi4::synapse0x29fab10() {
   return (neuron0x29d15e0()*2.08695);
}

double NNfunction_nn_chi3_chi4::synapse0x29fab50() {
   return (neuron0x29d1920()*-0.00761941);
}

double NNfunction_nn_chi3_chi4::synapse0x29fab90() {
   return (neuron0x29d1c60()*-0.0303729);
}

double NNfunction_nn_chi3_chi4::synapse0x29fabd0() {
   return (neuron0x29d1fa0()*0.0368019);
}

double NNfunction_nn_chi3_chi4::synapse0x29fac10() {
   return (neuron0x29d22e0()*0.0134067);
}

double NNfunction_nn_chi3_chi4::synapse0x29fac50() {
   return (neuron0x29d2620()*-0.00438332);
}

double NNfunction_nn_chi3_chi4::synapse0x29fac90() {
   return (neuron0x29d2960()*-0.0157842);
}

double NNfunction_nn_chi3_chi4::synapse0x29facd0() {
   return (neuron0x29d2ca0()*0.0106997);
}

double NNfunction_nn_chi3_chi4::synapse0x29fad10() {
   return (neuron0x29d2fe0()*0.0198834);
}

double NNfunction_nn_chi3_chi4::synapse0x29fad50() {
   return (neuron0x29d3320()*-0.0105281);
}

double NNfunction_nn_chi3_chi4::synapse0x29fad90() {
   return (neuron0x29d3660()*-0.0253238);
}

double NNfunction_nn_chi3_chi4::synapse0x29fadd0() {
   return (neuron0x29d39a0()*0.0174853);
}

double NNfunction_nn_chi3_chi4::synapse0x29fae10() {
   return (neuron0x29d3ce0()*0.0424948);
}

double NNfunction_nn_chi3_chi4::synapse0x29fae50() {
   return (neuron0x29d4020()*0.0180362);
}

double NNfunction_nn_chi3_chi4::synapse0x29fa8e0() {
   return (neuron0x29d4360()*0.0325323);
}

double NNfunction_nn_chi3_chi4::synapse0x29fa920() {
   return (neuron0x29d48c0()*-0.0151882);
}

double NNfunction_nn_chi3_chi4::synapse0x29fafa0() {
   return (neuron0x29d4c00()*0.0294258);
}

double NNfunction_nn_chi3_chi4::synapse0x29fafe0() {
   return (neuron0x29d4f40()*0.018551);
}

double NNfunction_nn_chi3_chi4::synapse0x29fb020() {
   return (neuron0x29d5280()*-0.0587011);
}

double NNfunction_nn_chi3_chi4::synapse0x29fb060() {
   return (neuron0x29d55c0()*0.0212781);
}

double NNfunction_nn_chi3_chi4::synapse0x29fb0a0() {
   return (neuron0x29d5900()*0.000327326);
}

double NNfunction_nn_chi3_chi4::synapse0x29fb0e0() {
   return (neuron0x29d5c40()*5.43041);
}

double NNfunction_nn_chi3_chi4::synapse0x29fb460() {
   return (neuron0x29d0ff0()*0.232609);
}

double NNfunction_nn_chi3_chi4::synapse0x29fb4a0() {
   return (neuron0x29d12a0()*-0.891417);
}

double NNfunction_nn_chi3_chi4::synapse0x29fb4e0() {
   return (neuron0x29d15e0()*-1.97894);
}

double NNfunction_nn_chi3_chi4::synapse0x29fb520() {
   return (neuron0x29d1920()*0.691384);
}

double NNfunction_nn_chi3_chi4::synapse0x29fb560() {
   return (neuron0x29d1c60()*0.340749);
}

double NNfunction_nn_chi3_chi4::synapse0x29fb5a0() {
   return (neuron0x29d1fa0()*-0.763751);
}

double NNfunction_nn_chi3_chi4::synapse0x29fb5e0() {
   return (neuron0x29d22e0()*-0.221511);
}

double NNfunction_nn_chi3_chi4::synapse0x29fb620() {
   return (neuron0x29d2620()*0.323772);
}

double NNfunction_nn_chi3_chi4::synapse0x29fb660() {
   return (neuron0x29d2960()*-0.361643);
}

double NNfunction_nn_chi3_chi4::synapse0x29fb6a0() {
   return (neuron0x29d2ca0()*-0.50092);
}

double NNfunction_nn_chi3_chi4::synapse0x29fb6e0() {
   return (neuron0x29d2fe0()*-0.764315);
}

double NNfunction_nn_chi3_chi4::synapse0x29fb720() {
   return (neuron0x29d3320()*0.885858);
}

double NNfunction_nn_chi3_chi4::synapse0x29fb760() {
   return (neuron0x29d3660()*-0.947621);
}

double NNfunction_nn_chi3_chi4::synapse0x29fb7a0() {
   return (neuron0x29d39a0()*-0.593782);
}

double NNfunction_nn_chi3_chi4::synapse0x29fb7e0() {
   return (neuron0x29d3ce0()*-0.768386);
}

double NNfunction_nn_chi3_chi4::synapse0x29fb820() {
   return (neuron0x29d4020()*0.745552);
}

double NNfunction_nn_chi3_chi4::synapse0x29fb2b0() {
   return (neuron0x29d4360()*-1.10435);
}

double NNfunction_nn_chi3_chi4::synapse0x29fb2f0() {
   return (neuron0x29d48c0()*0.0149195);
}

double NNfunction_nn_chi3_chi4::synapse0x29fb970() {
   return (neuron0x29d4c00()*0.837797);
}

double NNfunction_nn_chi3_chi4::synapse0x29fb9b0() {
   return (neuron0x29d4f40()*0.841093);
}

double NNfunction_nn_chi3_chi4::synapse0x29fb9f0() {
   return (neuron0x29d5280()*-0.444346);
}

double NNfunction_nn_chi3_chi4::synapse0x29fba30() {
   return (neuron0x29d55c0()*-0.492313);
}

double NNfunction_nn_chi3_chi4::synapse0x29fba70() {
   return (neuron0x29d5900()*0.811551);
}

double NNfunction_nn_chi3_chi4::synapse0x29fbab0() {
   return (neuron0x29d5c40()*-1.13539);
}

double NNfunction_nn_chi3_chi4::synapse0x279b890() {
   return (neuron0x29d60b0()*-0.351256);
}

double NNfunction_nn_chi3_chi4::synapse0x279b8d0() {
   return (neuron0x29d68f0()*-0.0119912);
}

double NNfunction_nn_chi3_chi4::synapse0x29d8460() {
   return (neuron0x29d73d0()*-2.70612);
}

double NNfunction_nn_chi3_chi4::synapse0x29d84a0() {
   return (neuron0x29d6e70()*0.0628454);
}

double NNfunction_nn_chi3_chi4::synapse0x29d9f30() {
   return (neuron0x29d81b0()*1.6496);
}

double NNfunction_nn_chi3_chi4::synapse0x29d9f70() {
   return (neuron0x29d9c80()*-0.17062);
}

double NNfunction_nn_chi3_chi4::synapse0x29dad00() {
   return (neuron0x29daa50()*0.0811771);
}

double NNfunction_nn_chi3_chi4::synapse0x29dad40() {
   return (neuron0x29db420()*-0.334405);
}

double NNfunction_nn_chi3_chi4::synapse0x29db6d0() {
   return (neuron0x29dbdf0()*1.49855);
}

double NNfunction_nn_chi3_chi4::synapse0x29db710() {
   return (neuron0x29dc8d0()*0.0806238);
}

double NNfunction_nn_chi3_chi4::synapse0x29dc0a0() {
   return (neuron0x29dd2a0()*0.326405);
}

double NNfunction_nn_chi3_chi4::synapse0x29dc0e0() {
   return (neuron0x29da380()*-0.0325552);
}

double NNfunction_nn_chi3_chi4::synapse0x29dcb80() {
   return (neuron0x29dee50()*0.645038);
}

double NNfunction_nn_chi3_chi4::synapse0x29dcbc0() {
   return (neuron0x29df820()*-0.113719);
}

double NNfunction_nn_chi3_chi4::synapse0x29dd550() {
   return (neuron0x29e01f0()*0.0438717);
}

double NNfunction_nn_chi3_chi4::synapse0x29dd590() {
   return (neuron0x29e0bc0()*-0.0105571);
}

double NNfunction_nn_chi3_chi4::synapse0x29da630() {
   return (neuron0x29e29d0()*0.0891699);
}

double NNfunction_nn_chi3_chi4::synapse0x29da670() {
   return (neuron0x29e2cb0()*-0.0408108);
}

double NNfunction_nn_chi3_chi4::synapse0x29df100() {
   return (neuron0x29e3680()*0.0443108);
}

double NNfunction_nn_chi3_chi4::synapse0x29df140() {
   return (neuron0x29e4050()*-0.565694);
}

double NNfunction_nn_chi3_chi4::synapse0x29dfad0() {
   return (neuron0x29e4a20()*-0.118563);
}

double NNfunction_nn_chi3_chi4::synapse0x29dfb10() {
   return (neuron0x29e53f0()*-0.0185478);
}

double NNfunction_nn_chi3_chi4::synapse0x29e04a0() {
   return (neuron0x29ddf40()*0.0308421);
}

double NNfunction_nn_chi3_chi4::synapse0x29e04e0() {
   return (neuron0x29de910()*-0.216112);
}

double NNfunction_nn_chi3_chi4::synapse0x29e0e70() {
   return (neuron0x29e8180()*-0.232814);
}

double NNfunction_nn_chi3_chi4::synapse0x29e0eb0() {
   return (neuron0x29e8b50()*0.0620738);
}

double NNfunction_nn_chi3_chi4::synapse0x29d3f00() {
   return (neuron0x29e9520()*3.42199);
}

double NNfunction_nn_chi3_chi4::synapse0x29d3f40() {
   return (neuron0x29e9ef0()*1.91983);
}

double NNfunction_nn_chi3_chi4::synapse0x29e2f60() {
   return (neuron0x29ea8c0()*0.497686);
}

double NNfunction_nn_chi3_chi4::synapse0x29e2fa0() {
   return (neuron0x29eb290()*-0.705694);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3930() {
   return (neuron0x29ebc60()*0.0151516);
}

double NNfunction_nn_chi3_chi4::synapse0x29e3970() {
   return (neuron0x29ec630()*-0.225408);
}

double NNfunction_nn_chi3_chi4::synapse0x29e4300() {
   return (neuron0x29e26c0()*0.661968);
}

double NNfunction_nn_chi3_chi4::synapse0x29e4340() {
   return (neuron0x29ef210()*-0.0474725);
}

double NNfunction_nn_chi3_chi4::synapse0x29e4cd0() {
   return (neuron0x29efbe0()*0.653658);
}

double NNfunction_nn_chi3_chi4::synapse0x29e4d10() {
   return (neuron0x29f05b0()*0.0422499);
}

double NNfunction_nn_chi3_chi4::synapse0x29e56a0() {
   return (neuron0x29f0f80()*2.53491);
}

double NNfunction_nn_chi3_chi4::synapse0x29e56e0() {
   return (neuron0x29f1950()*0.0134789);
}

double NNfunction_nn_chi3_chi4::synapse0x29de1f0() {
   return (neuron0x29f2320()*0.370057);
}

double NNfunction_nn_chi3_chi4::synapse0x29de230() {
   return (neuron0x29f2cf0()*0.234732);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7aa0() {
   return (neuron0x29f36c0()*0.132348);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7ae0() {
   return (neuron0x29f42a0()*-0.00976556);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8430() {
   return (neuron0x29f4c70()*0.0394492);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8470() {
   return (neuron0x29e5af0()*1.38116);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8e00() {
   return (neuron0x29e64c0()*0.0668842);
}

double NNfunction_nn_chi3_chi4::synapse0x29e8e40() {
   return (neuron0x29e6e90()*-4.07227);
}

double NNfunction_nn_chi3_chi4::synapse0x29e97d0() {
   return (neuron0x29f94d0()*0.0346076);
}

double NNfunction_nn_chi3_chi4::synapse0x29e9810() {
   return (neuron0x29f9d80()*-0.413586);
}

double NNfunction_nn_chi3_chi4::synapse0x29ea1a0() {
   return (neuron0x29fa750()*0.996175);
}

double NNfunction_nn_chi3_chi4::synapse0x29ea1e0() {
   return (neuron0x29fb120()*0.0533026);
}

double NNfunction_nn_chi3_chi4::synapse0x29ec8e0() {
   return (neuron0x29d60b0()*-1.65289);
}

double NNfunction_nn_chi3_chi4::synapse0x29ec920() {
   return (neuron0x29d68f0()*-1.5129);
}

double NNfunction_nn_chi3_chi4::synapse0x29e1ea0() {
   return (neuron0x29d73d0()*-0.743304);
}

double NNfunction_nn_chi3_chi4::synapse0x29e1ee0() {
   return (neuron0x29d6e70()*0.863997);
}

double NNfunction_nn_chi3_chi4::synapse0x29ef4c0() {
   return (neuron0x29d81b0()*1.53596);
}

double NNfunction_nn_chi3_chi4::synapse0x29ef500() {
   return (neuron0x29d9c80()*1.03258);
}

double NNfunction_nn_chi3_chi4::synapse0x29efe90() {
   return (neuron0x29daa50()*-0.447891);
}

double NNfunction_nn_chi3_chi4::synapse0x29efed0() {
   return (neuron0x29db420()*-1.4237);
}

double NNfunction_nn_chi3_chi4::synapse0x29f0860() {
   return (neuron0x29dbdf0()*-1.6557);
}

double NNfunction_nn_chi3_chi4::synapse0x29f08a0() {
   return (neuron0x29dc8d0()*1.35378);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1230() {
   return (neuron0x29dd2a0()*-2.89653);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1270() {
   return (neuron0x29da380()*1.05966);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1c00() {
   return (neuron0x29dee50()*-0.30262);
}

double NNfunction_nn_chi3_chi4::synapse0x29f1c40() {
   return (neuron0x29df820()*-1.72509);
}

double NNfunction_nn_chi3_chi4::synapse0x29f25d0() {
   return (neuron0x29e01f0()*-2.00394);
}

double NNfunction_nn_chi3_chi4::synapse0x29f2610() {
   return (neuron0x29e0bc0()*-0.681773);
}

double NNfunction_nn_chi3_chi4::synapse0x29f2fa0() {
   return (neuron0x29e29d0()*12.4709);
}

double NNfunction_nn_chi3_chi4::synapse0x29f2fe0() {
   return (neuron0x29e2cb0()*-2.11474);
}

double NNfunction_nn_chi3_chi4::synapse0x29f3970() {
   return (neuron0x29e3680()*-3.52725);
}

double NNfunction_nn_chi3_chi4::synapse0x29f39b0() {
   return (neuron0x29e4050()*0.654598);
}

double NNfunction_nn_chi3_chi4::synapse0x29f4550() {
   return (neuron0x29e4a20()*-6.2721);
}

double NNfunction_nn_chi3_chi4::synapse0x29f4590() {
   return (neuron0x29e53f0()*-3.33358);
}

double NNfunction_nn_chi3_chi4::synapse0x29f4f20() {
   return (neuron0x29ddf40()*0.303849);
}

double NNfunction_nn_chi3_chi4::synapse0x29f4f60() {
   return (neuron0x29de910()*-3.73166);
}

double NNfunction_nn_chi3_chi4::synapse0x29e5da0() {
   return (neuron0x29e8180()*-0.497564);
}

double NNfunction_nn_chi3_chi4::synapse0x29e5de0() {
   return (neuron0x29e8b50()*-0.495037);
}

double NNfunction_nn_chi3_chi4::synapse0x29e6770() {
   return (neuron0x29e9520()*0.881);
}

double NNfunction_nn_chi3_chi4::synapse0x29e67b0() {
   return (neuron0x29e9ef0()*-0.686568);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7140() {
   return (neuron0x29ea8c0()*-0.20605);
}

double NNfunction_nn_chi3_chi4::synapse0x29e7180() {
   return (neuron0x29eb290()*0.829571);
}

double NNfunction_nn_chi3_chi4::synapse0x29f9660() {
   return (neuron0x29ebc60()*-2.60883);
}

double NNfunction_nn_chi3_chi4::synapse0x29f96a0() {
   return (neuron0x29ec630()*0.0638343);
}

double NNfunction_nn_chi3_chi4::synapse0x29fa030() {
   return (neuron0x29e26c0()*0.269559);
}

double NNfunction_nn_chi3_chi4::synapse0x29fa070() {
   return (neuron0x29ef210()*0.806206);
}

double NNfunction_nn_chi3_chi4::synapse0x29faa00() {
   return (neuron0x29efbe0()*-0.304119);
}

double NNfunction_nn_chi3_chi4::synapse0x29faa40() {
   return (neuron0x29f05b0()*2.00037);
}

double NNfunction_nn_chi3_chi4::synapse0x29fb3d0() {
   return (neuron0x29f0f80()*-6.52616);
}

double NNfunction_nn_chi3_chi4::synapse0x29fb410() {
   return (neuron0x29f1950()*-0.0582814);
}

double NNfunction_nn_chi3_chi4::synapse0x29d6360() {
   return (neuron0x29f2320()*-0.774683);
}

double NNfunction_nn_chi3_chi4::synapse0x29d63a0() {
   return (neuron0x29f2cf0()*-1.45226);
}

double NNfunction_nn_chi3_chi4::synapse0x29eab70() {
   return (neuron0x29f36c0()*-1.84024);
}

double NNfunction_nn_chi3_chi4::synapse0x29eabb0() {
   return (neuron0x29f42a0()*-1.33368);
}

double NNfunction_nn_chi3_chi4::synapse0x29fbaf0() {
   return (neuron0x29f4c70()*1.10797);
}

double NNfunction_nn_chi3_chi4::synapse0x29fbb30() {
   return (neuron0x29e5af0()*0.647964);
}

double NNfunction_nn_chi3_chi4::synapse0x29fbb70() {
   return (neuron0x29e64c0()*-1.73709);
}

double NNfunction_nn_chi3_chi4::synapse0x29fbbb0() {
   return (neuron0x29e6e90()*-4.59549);
}

double NNfunction_nn_chi3_chi4::synapse0x2a02a60() {
   return (neuron0x29f94d0()*0.666181);
}

double NNfunction_nn_chi3_chi4::synapse0x2a02aa0() {
   return (neuron0x29f9d80()*-1.46008);
}

double NNfunction_nn_chi3_chi4::synapse0x2a02ae0() {
   return (neuron0x29fa750()*1.50853);
}

double NNfunction_nn_chi3_chi4::synapse0x2a02b20() {
   return (neuron0x29fb120()*-1.69799);
}

double NNfunction_nn_chi3_chi4::synapse0x2a02ea0() {
   return (neuron0x29d60b0()*-1.25956);
}

double NNfunction_nn_chi3_chi4::synapse0x2a02ee0() {
   return (neuron0x29d68f0()*-0.16585);
}

double NNfunction_nn_chi3_chi4::synapse0x2a02f20() {
   return (neuron0x29d73d0()*1.72854);
}

double NNfunction_nn_chi3_chi4::synapse0x2a02f60() {
   return (neuron0x29d6e70()*0.174261);
}

double NNfunction_nn_chi3_chi4::synapse0x2a02fa0() {
   return (neuron0x29d81b0()*2.19941);
}

double NNfunction_nn_chi3_chi4::synapse0x2a02fe0() {
   return (neuron0x29d9c80()*2.03989);
}

double NNfunction_nn_chi3_chi4::synapse0x2a03020() {
   return (neuron0x29daa50()*1.72082);
}

double NNfunction_nn_chi3_chi4::synapse0x2a03060() {
   return (neuron0x29db420()*-2.10648);
}

double NNfunction_nn_chi3_chi4::synapse0x2a030a0() {
   return (neuron0x29dbdf0()*1.40708);
}

double NNfunction_nn_chi3_chi4::synapse0x2a030e0() {
   return (neuron0x29dc8d0()*-0.00834304);
}

double NNfunction_nn_chi3_chi4::synapse0x2a03120() {
   return (neuron0x29dd2a0()*0.0119481);
}

double NNfunction_nn_chi3_chi4::synapse0x2a03160() {
   return (neuron0x29da380()*-0.191038);
}

double NNfunction_nn_chi3_chi4::synapse0x2a031a0() {
   return (neuron0x29dee50()*-0.762618);
}

double NNfunction_nn_chi3_chi4::synapse0x2a031e0() {
   return (neuron0x29df820()*-0.554218);
}

double NNfunction_nn_chi3_chi4::synapse0x2a03220() {
   return (neuron0x29e01f0()*1.1654);
}

double NNfunction_nn_chi3_chi4::synapse0x2a03260() {
   return (neuron0x29e0bc0()*-0.371118);
}

double NNfunction_nn_chi3_chi4::synapse0x2a02cf0() {
   return (neuron0x29e29d0()*0.481443);
}

double NNfunction_nn_chi3_chi4::synapse0x2a02d30() {
   return (neuron0x29e2cb0()*-0.160519);
}

double NNfunction_nn_chi3_chi4::synapse0x2a033b0() {
   return (neuron0x29e3680()*0.0754783);
}

double NNfunction_nn_chi3_chi4::synapse0x2a033f0() {
   return (neuron0x29e4050()*4.3149);
}

double NNfunction_nn_chi3_chi4::synapse0x2a03430() {
   return (neuron0x29e4a20()*-0.231237);
}

double NNfunction_nn_chi3_chi4::synapse0x2a03470() {
   return (neuron0x29e53f0()*-0.0389956);
}

double NNfunction_nn_chi3_chi4::synapse0x2a034b0() {
   return (neuron0x29ddf40()*0.300536);
}

double NNfunction_nn_chi3_chi4::synapse0x2a034f0() {
   return (neuron0x29de910()*-0.0957646);
}

double NNfunction_nn_chi3_chi4::synapse0x2a03530() {
   return (neuron0x29e8180()*-1.19094);
}

double NNfunction_nn_chi3_chi4::synapse0x2a03570() {
   return (neuron0x29e8b50()*0.139733);
}

double NNfunction_nn_chi3_chi4::synapse0x2a035b0() {
   return (neuron0x29e9520()*0.658646);
}

double NNfunction_nn_chi3_chi4::synapse0x2a035f0() {
   return (neuron0x29e9ef0()*1.56117);
}

double NNfunction_nn_chi3_chi4::synapse0x2a03630() {
   return (neuron0x29ea8c0()*0.731622);
}

double NNfunction_nn_chi3_chi4::synapse0x2a03670() {
   return (neuron0x29eb290()*-0.0711741);
}

double NNfunction_nn_chi3_chi4::synapse0x2a036b0() {
   return (neuron0x29ebc60()*0.0924285);
}

double NNfunction_nn_chi3_chi4::synapse0x2a036f0() {
   return (neuron0x29ec630()*0.496498);
}

double NNfunction_nn_chi3_chi4::synapse0x2a032a0() {
   return (neuron0x29e26c0()*0.113727);
}

double NNfunction_nn_chi3_chi4::synapse0x2a032e0() {
   return (neuron0x29ef210()*-1.70423);
}

double NNfunction_nn_chi3_chi4::synapse0x2a03320() {
   return (neuron0x29efbe0()*1.21738);
}

double NNfunction_nn_chi3_chi4::synapse0x2a03360() {
   return (neuron0x29f05b0()*1.44429);
}

double NNfunction_nn_chi3_chi4::synapse0x2a03940() {
   return (neuron0x29f0f80()*-3.3718);
}

double NNfunction_nn_chi3_chi4::synapse0x2a03980() {
   return (neuron0x29f1950()*0.123341);
}

double NNfunction_nn_chi3_chi4::synapse0x2a039c0() {
   return (neuron0x29f2320()*-1.11958);
}

double NNfunction_nn_chi3_chi4::synapse0x2a03a00() {
   return (neuron0x29f2cf0()*1.51984);
}

double NNfunction_nn_chi3_chi4::synapse0x2a03a40() {
   return (neuron0x29f36c0()*0.515913);
}

double NNfunction_nn_chi3_chi4::synapse0x2a03a80() {
   return (neuron0x29f42a0()*-0.390098);
}

double NNfunction_nn_chi3_chi4::synapse0x2a03ac0() {
   return (neuron0x29f4c70()*0.174623);
}

double NNfunction_nn_chi3_chi4::synapse0x2a03b00() {
   return (neuron0x29e5af0()*-0.967885);
}

double NNfunction_nn_chi3_chi4::synapse0x2a03b40() {
   return (neuron0x29e64c0()*0.294096);
}

double NNfunction_nn_chi3_chi4::synapse0x2a03b80() {
   return (neuron0x29e6e90()*0.834541);
}

double NNfunction_nn_chi3_chi4::synapse0x2a03bc0() {
   return (neuron0x29f94d0()*0.475006);
}

double NNfunction_nn_chi3_chi4::synapse0x2a03c00() {
   return (neuron0x29f9d80()*-0.170155);
}

double NNfunction_nn_chi3_chi4::synapse0x2a03c40() {
   return (neuron0x29fa750()*1.53412);
}

double NNfunction_nn_chi3_chi4::synapse0x2a03c80() {
   return (neuron0x29fb120()*0.112179);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04000() {
   return (neuron0x29d60b0()*-0.578296);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04040() {
   return (neuron0x29d68f0()*-0.0220548);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04080() {
   return (neuron0x29d73d0()*0.589718);
}

double NNfunction_nn_chi3_chi4::synapse0x2a040c0() {
   return (neuron0x29d6e70()*0.203738);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04100() {
   return (neuron0x29d81b0()*-1.74702);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04140() {
   return (neuron0x29d9c80()*-0.0148002);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04180() {
   return (neuron0x29daa50()*0.0902704);
}

double NNfunction_nn_chi3_chi4::synapse0x2a041c0() {
   return (neuron0x29db420()*0.234435);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04200() {
   return (neuron0x29dbdf0()*1.43207);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04240() {
   return (neuron0x29dc8d0()*0.142739);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04280() {
   return (neuron0x29dd2a0()*1.01972);
}

double NNfunction_nn_chi3_chi4::synapse0x2a042c0() {
   return (neuron0x29da380()*-0.0341531);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04300() {
   return (neuron0x29dee50()*2.53713);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04340() {
   return (neuron0x29df820()*-0.336931);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04380() {
   return (neuron0x29e01f0()*0.237652);
}

double NNfunction_nn_chi3_chi4::synapse0x2a043c0() {
   return (neuron0x29e0bc0()*0.101577);
}

double NNfunction_nn_chi3_chi4::synapse0x2a03e50() {
   return (neuron0x29e29d0()*1.10752);
}

double NNfunction_nn_chi3_chi4::synapse0x2a03e90() {
   return (neuron0x29e2cb0()*-0.0973734);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04510() {
   return (neuron0x29e3680()*0.182484);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04550() {
   return (neuron0x29e4050()*-1.46381);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04590() {
   return (neuron0x29e4a20()*-0.744174);
}

double NNfunction_nn_chi3_chi4::synapse0x2a045d0() {
   return (neuron0x29e53f0()*0.00984163);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04610() {
   return (neuron0x29ddf40()*0.0759011);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04650() {
   return (neuron0x29de910()*-0.449548);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04690() {
   return (neuron0x29e8180()*0.276156);
}

double NNfunction_nn_chi3_chi4::synapse0x2a046d0() {
   return (neuron0x29e8b50()*0.199905);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04710() {
   return (neuron0x29e9520()*-0.673756);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04750() {
   return (neuron0x29e9ef0()*0.964494);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04790() {
   return (neuron0x29ea8c0()*1.08058);
}

double NNfunction_nn_chi3_chi4::synapse0x2a047d0() {
   return (neuron0x29eb290()*-1.69882);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04810() {
   return (neuron0x29ebc60()*0.0507112);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04850() {
   return (neuron0x29ec630()*-0.0473049);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04400() {
   return (neuron0x29e26c0()*1.01763);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04440() {
   return (neuron0x29ef210()*-0.201278);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04480() {
   return (neuron0x29efbe0()*1.68076);
}

double NNfunction_nn_chi3_chi4::synapse0x2a044c0() {
   return (neuron0x29f05b0()*0.146989);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04aa0() {
   return (neuron0x29f0f80()*0.931041);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04ae0() {
   return (neuron0x29f1950()*-0.0160588);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04b20() {
   return (neuron0x29f2320()*0.511095);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04b60() {
   return (neuron0x29f2cf0()*0.733118);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04ba0() {
   return (neuron0x29f36c0()*0.722214);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04be0() {
   return (neuron0x29f42a0()*0.168103);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04c20() {
   return (neuron0x29f4c70()*0.00494584);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04c60() {
   return (neuron0x29e5af0()*2.28932);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04ca0() {
   return (neuron0x29e64c0()*0.219878);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04ce0() {
   return (neuron0x29e6e90()*-1.06679);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04d20() {
   return (neuron0x29f94d0()*-0.110811);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04d60() {
   return (neuron0x29f9d80()*-0.0524222);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04da0() {
   return (neuron0x29fa750()*2.01305);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04de0() {
   return (neuron0x29fb120()*0.0471343);
}

double NNfunction_nn_chi3_chi4::synapse0x2a05160() {
   return (neuron0x29d60b0()*-1.39819);
}

double NNfunction_nn_chi3_chi4::synapse0x2a051a0() {
   return (neuron0x29d68f0()*-0.18052);
}

double NNfunction_nn_chi3_chi4::synapse0x2a051e0() {
   return (neuron0x29d73d0()*0.287952);
}

double NNfunction_nn_chi3_chi4::synapse0x2a05220() {
   return (neuron0x29d6e70()*0.16061);
}

double NNfunction_nn_chi3_chi4::synapse0x2a05260() {
   return (neuron0x29d81b0()*-1.56096);
}

double NNfunction_nn_chi3_chi4::synapse0x2a052a0() {
   return (neuron0x29d9c80()*2.41764);
}

double NNfunction_nn_chi3_chi4::synapse0x2a052e0() {
   return (neuron0x29daa50()*1.68281);
}

double NNfunction_nn_chi3_chi4::synapse0x2a05320() {
   return (neuron0x29db420()*-0.439613);
}

double NNfunction_nn_chi3_chi4::synapse0x2a05360() {
   return (neuron0x29dbdf0()*2.99355);
}

double NNfunction_nn_chi3_chi4::synapse0x2a053a0() {
   return (neuron0x29dc8d0()*-0.0975472);
}

double NNfunction_nn_chi3_chi4::synapse0x2a053e0() {
   return (neuron0x29dd2a0()*-0.524528);
}

double NNfunction_nn_chi3_chi4::synapse0x2a05420() {
   return (neuron0x29da380()*-0.216243);
}

double NNfunction_nn_chi3_chi4::synapse0x2a05460() {
   return (neuron0x29dee50()*0.493058);
}

double NNfunction_nn_chi3_chi4::synapse0x2a054a0() {
   return (neuron0x29df820()*-0.517379);
}

double NNfunction_nn_chi3_chi4::synapse0x2a054e0() {
   return (neuron0x29e01f0()*2.16525);
}

double NNfunction_nn_chi3_chi4::synapse0x2a05520() {
   return (neuron0x29e0bc0()*-0.922184);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04fb0() {
   return (neuron0x29e29d0()*0.457063);
}

double NNfunction_nn_chi3_chi4::synapse0x2a04ff0() {
   return (neuron0x29e2cb0()*-0.194786);
}

double NNfunction_nn_chi3_chi4::synapse0x2a05670() {
   return (neuron0x29e3680()*0.0440271);
}

double NNfunction_nn_chi3_chi4::synapse0x2a056b0() {
   return (neuron0x29e4050()*-0.00944096);
}

double NNfunction_nn_chi3_chi4::synapse0x2a056f0() {
   return (neuron0x29e4a20()*-1.3645);
}

double NNfunction_nn_chi3_chi4::synapse0x2a05730() {
   return (neuron0x29e53f0()*-0.0248604);
}

double NNfunction_nn_chi3_chi4::synapse0x2a05770() {
   return (neuron0x29ddf40()*0.378954);
}

double NNfunction_nn_chi3_chi4::synapse0x2a057b0() {
   return (neuron0x29de910()*1.19966);
}

double NNfunction_nn_chi3_chi4::synapse0x2a057f0() {
   return (neuron0x29e8180()*-1.2779);
}

double NNfunction_nn_chi3_chi4::synapse0x2a05830() {
   return (neuron0x29e8b50()*0.0939065);
}

double NNfunction_nn_chi3_chi4::synapse0x2a05870() {
   return (neuron0x29e9520()*3.36279);
}

double NNfunction_nn_chi3_chi4::synapse0x2a058b0() {
   return (neuron0x29e9ef0()*-0.696826);
}

double NNfunction_nn_chi3_chi4::synapse0x2a058f0() {
   return (neuron0x29ea8c0()*1.04972);
}

double NNfunction_nn_chi3_chi4::synapse0x2a05930() {
   return (neuron0x29eb290()*-0.970291);
}

double NNfunction_nn_chi3_chi4::synapse0x2a05970() {
   return (neuron0x29ebc60()*0.143654);
}

double NNfunction_nn_chi3_chi4::synapse0x2a059b0() {
   return (neuron0x29ec630()*-2.81681);
}

double NNfunction_nn_chi3_chi4::synapse0x2a05560() {
   return (neuron0x29e26c0()*-0.902069);
}

double NNfunction_nn_chi3_chi4::synapse0x2a055a0() {
   return (neuron0x29ef210()*-1.30913);
}

double NNfunction_nn_chi3_chi4::synapse0x2a055e0() {
   return (neuron0x29efbe0()*1.29203);
}

double NNfunction_nn_chi3_chi4::synapse0x2a05620() {
   return (neuron0x29f05b0()*1.29536);
}

double NNfunction_nn_chi3_chi4::synapse0x2a05c00() {
   return (neuron0x29f0f80()*3.99022);
}

double NNfunction_nn_chi3_chi4::synapse0x2a05c40() {
   return (neuron0x29f1950()*0.231554);
}

double NNfunction_nn_chi3_chi4::synapse0x2a05c80() {
   return (neuron0x29f2320()*-0.68493);
}

double NNfunction_nn_chi3_chi4::synapse0x2a05cc0() {
   return (neuron0x29f2cf0()*0.987892);
}

double NNfunction_nn_chi3_chi4::synapse0x2a05d00() {
   return (neuron0x29f36c0()*0.521612);
}

double NNfunction_nn_chi3_chi4::synapse0x2a05d40() {
   return (neuron0x29f42a0()*-0.947992);
}

double NNfunction_nn_chi3_chi4::synapse0x2a05d80() {
   return (neuron0x29f4c70()*0.206643);
}

double NNfunction_nn_chi3_chi4::synapse0x2a05dc0() {
   return (neuron0x29e5af0()*1.03745);
}

double NNfunction_nn_chi3_chi4::synapse0x2a05e00() {
   return (neuron0x29e64c0()*0.340719);
}

double NNfunction_nn_chi3_chi4::synapse0x2a05e40() {
   return (neuron0x29e6e90()*-0.0693921);
}

double NNfunction_nn_chi3_chi4::synapse0x2a05e80() {
   return (neuron0x29f94d0()*0.478516);
}

double NNfunction_nn_chi3_chi4::synapse0x2a05ec0() {
   return (neuron0x29f9d80()*-0.696542);
}

double NNfunction_nn_chi3_chi4::synapse0x2a05f00() {
   return (neuron0x29fa750()*-0.999207);
}

double NNfunction_nn_chi3_chi4::synapse0x2a05f40() {
   return (neuron0x29fb120()*0.112166);
}

double NNfunction_nn_chi3_chi4::synapse0x2a061a0() {
   return (neuron0x2a02320()*-7.71006);
}

double NNfunction_nn_chi3_chi4::synapse0x2a061e0() {
   return (neuron0x2a026c0()*-2.09512);
}

double NNfunction_nn_chi3_chi4::synapse0x2a06220() {
   return (neuron0x2a02b60()*6.19443);
}

double NNfunction_nn_chi3_chi4::synapse0x2a06260() {
   return (neuron0x2a03cc0()*2.65145);
}

double NNfunction_nn_chi3_chi4::synapse0x2a062a0() {
   return (neuron0x2a04e20()*-4.63439);
}

