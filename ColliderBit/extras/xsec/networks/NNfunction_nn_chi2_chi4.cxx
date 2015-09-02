#include "NNfunction_nn_chi2_chi4.h"
#include <cmath>

double NNfunction_nn_chi2_chi4::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 24.3697)/14.8899;
   input1 = (in1 - 46.0567)/162.304;
   input2 = (in2 - 186.377)/144.818;
   input3 = (in3 - 247.89)/614.655;
   input4 = (in4 - 876.257)/762.711;
   input5 = (in5 - 884.425)/837.281;
   input6 = (in6 - 887.482)/838.088;
   input7 = (in7 - 870.389)/814.051;
   input8 = (in8 - 878.135)/853.958;
   input9 = (in9 - 873.964)/848.317;
   input10 = (in10 - 847.12)/816.712;
   input11 = (in11 - 808.422)/749.95;
   input12 = (in12 - 857.946)/773.587;
   input13 = (in13 - 653.739)/537.527;
   input14 = (in14 - 839.505)/746.748;
   input15 = (in15 - 850.112)/747.682;
   input16 = (in16 - 577.062)/482.372;
   input17 = (in17 - 860.88)/783.738;
   input18 = (in18 - 864.127)/788.405;
   input19 = (in19 - 826.477)/733.647;
   input20 = (in20 - -182.416)/387.531;
   input21 = (in21 - -233.724)/822.9;
   input22 = (in22 - 8.78628)/845.973;
   input23 = (in23 - 34.7036)/248.252;
   switch(index) {
     case 0:
         return neuron0x28f3b40();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi2_chi4::Value(int index, double* input) {
   input0 = (input[0] - 24.3697)/14.8899;
   input1 = (input[1] - 46.0567)/162.304;
   input2 = (input[2] - 186.377)/144.818;
   input3 = (input[3] - 247.89)/614.655;
   input4 = (input[4] - 876.257)/762.711;
   input5 = (input[5] - 884.425)/837.281;
   input6 = (input[6] - 887.482)/838.088;
   input7 = (input[7] - 870.389)/814.051;
   input8 = (input[8] - 878.135)/853.958;
   input9 = (input[9] - 873.964)/848.317;
   input10 = (input[10] - 847.12)/816.712;
   input11 = (input[11] - 808.422)/749.95;
   input12 = (input[12] - 857.946)/773.587;
   input13 = (input[13] - 653.739)/537.527;
   input14 = (input[14] - 839.505)/746.748;
   input15 = (input[15] - 850.112)/747.682;
   input16 = (input[16] - 577.062)/482.372;
   input17 = (input[17] - 860.88)/783.738;
   input18 = (input[18] - 864.127)/788.405;
   input19 = (input[19] - 826.477)/733.647;
   input20 = (input[20] - -182.416)/387.531;
   input21 = (input[21] - -233.724)/822.9;
   input22 = (input[22] - 8.78628)/845.973;
   input23 = (input[23] - 34.7036)/248.252;
   switch(index) {
     case 0:
         return neuron0x28f3b40();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi2_chi4::neuron0x28bfd00() {
   return input0;
}

double NNfunction_nn_chi2_chi4::neuron0x28bffb0() {
   return input1;
}

double NNfunction_nn_chi2_chi4::neuron0x28c02f0() {
   return input2;
}

double NNfunction_nn_chi2_chi4::neuron0x28c0630() {
   return input3;
}

double NNfunction_nn_chi2_chi4::neuron0x28c0970() {
   return input4;
}

double NNfunction_nn_chi2_chi4::neuron0x28c0cb0() {
   return input5;
}

double NNfunction_nn_chi2_chi4::neuron0x28c0ff0() {
   return input6;
}

double NNfunction_nn_chi2_chi4::neuron0x28c1330() {
   return input7;
}

double NNfunction_nn_chi2_chi4::neuron0x28c1670() {
   return input8;
}

double NNfunction_nn_chi2_chi4::neuron0x28c19b0() {
   return input9;
}

double NNfunction_nn_chi2_chi4::neuron0x28c1cf0() {
   return input10;
}

double NNfunction_nn_chi2_chi4::neuron0x28c2030() {
   return input11;
}

double NNfunction_nn_chi2_chi4::neuron0x28c2370() {
   return input12;
}

double NNfunction_nn_chi2_chi4::neuron0x28c26b0() {
   return input13;
}

double NNfunction_nn_chi2_chi4::neuron0x28c29f0() {
   return input14;
}

double NNfunction_nn_chi2_chi4::neuron0x28c2d30() {
   return input15;
}

double NNfunction_nn_chi2_chi4::neuron0x28c3070() {
   return input16;
}

double NNfunction_nn_chi2_chi4::neuron0x28c35d0() {
   return input17;
}

double NNfunction_nn_chi2_chi4::neuron0x28c37f0() {
   return input18;
}

double NNfunction_nn_chi2_chi4::neuron0x28c3b30() {
   return input19;
}

double NNfunction_nn_chi2_chi4::neuron0x28c3e70() {
   return input20;
}

double NNfunction_nn_chi2_chi4::neuron0x28c41b0() {
   return input21;
}

double NNfunction_nn_chi2_chi4::neuron0x28c44f0() {
   return input22;
}

double NNfunction_nn_chi2_chi4::neuron0x28c4830() {
   return input23;
}

double NNfunction_nn_chi2_chi4::input0x28c4ca0() {
   double input = -0.0826213;
   input += synapse0x28bfc80();
   input += synapse0x28bfcc0();
   input += synapse0x28c4f50();
   input += synapse0x28c4f90();
   input += synapse0x28c4fd0();
   input += synapse0x28c5010();
   input += synapse0x28c5050();
   input += synapse0x28c5090();
   input += synapse0x28c50d0();
   input += synapse0x28c5110();
   input += synapse0x28c5150();
   input += synapse0x28c5190();
   input += synapse0x28c51d0();
   input += synapse0x28c5210();
   input += synapse0x28c5250();
   input += synapse0x28c5290();
   input += synapse0x28bfbf0();
   input += synapse0x28bfc30();
   input += synapse0x267add0();
   input += synapse0x267ae10();
   input += synapse0x28c54f0();
   input += synapse0x28c5530();
   input += synapse0x28c5570();
   input += synapse0x28c55b0();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28c4ca0() {
   double input = input0x28c4ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28c55f0() {
   double input = -0.321631;
   input += synapse0x28c5930();
   input += synapse0x28c5970();
   input += synapse0x28c59b0();
   input += synapse0x28c59f0();
   input += synapse0x28c5a30();
   input += synapse0x28c5a70();
   input += synapse0x28c5ab0();
   input += synapse0x28c5af0();
   input += synapse0x28c5b30();
   input += synapse0x28c53e0();
   input += synapse0x28c5420();
   input += synapse0x28c5460();
   input += synapse0x28c54a0();
   input += synapse0x28c5d80();
   input += synapse0x28c5dc0();
   input += synapse0x28c5e00();
   input += synapse0x28c5780();
   input += synapse0x28c57c0();
   input += synapse0x28c5f50();
   input += synapse0x28c5f90();
   input += synapse0x28c5fd0();
   input += synapse0x28c6010();
   input += synapse0x28c6050();
   input += synapse0x28c6090();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28c55f0() {
   double input = input0x28c55f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28c60d0() {
   double input = -13.6547;
   input += synapse0x28c6410();
   input += synapse0x28c6450();
   input += synapse0x28c6490();
   input += synapse0x28c64d0();
   input += synapse0x28c6510();
   input += synapse0x28c6550();
   input += synapse0x28c6590();
   input += synapse0x28c65d0();
   input += synapse0x28c6610();
   input += synapse0x28c6650();
   input += synapse0x28c6690();
   input += synapse0x28c66d0();
   input += synapse0x28c6710();
   input += synapse0x28c6750();
   input += synapse0x28c6790();
   input += synapse0x28c67d0();
   input += synapse0x28c6260();
   input += synapse0x28c62a0();
   input += synapse0x28aed70();
   input += synapse0x2688cc0();
   input += synapse0x2688d00();
   input += synapse0x27a4210();
   input += synapse0x27a4250();
   input += synapse0x28bfa60();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28c60d0() {
   double input = input0x28c60d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x2689420() {
   double input = -0.350903;
   input += synapse0x26895b0();
   input += synapse0x28c5c90();
   input += synapse0x28c5cd0();
   input += synapse0x28c5d10();
   input += synapse0x28c6920();
   input += synapse0x28c6960();
   input += synapse0x28c69a0();
   input += synapse0x28c69e0();
   input += synapse0x28c6a20();
   input += synapse0x28c6a60();
   input += synapse0x28c6aa0();
   input += synapse0x28c6ae0();
   input += synapse0x28c6b20();
   input += synapse0x28c6b60();
   input += synapse0x28c6ba0();
   input += synapse0x28c6be0();
   input += synapse0x28bfaa0();
   input += synapse0x28bfae0();
   input += synapse0x28bfb20();
   input += synapse0x28c6d30();
   input += synapse0x28c6d70();
   input += synapse0x28c6db0();
   input += synapse0x28c6df0();
   input += synapse0x28c6e30();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x2689420() {
   double input = input0x2689420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28c6e70() {
   double input = 0.947792;
   input += synapse0x28c71b0();
   input += synapse0x28c71f0();
   input += synapse0x28c7230();
   input += synapse0x28c7270();
   input += synapse0x28c72b0();
   input += synapse0x28c72f0();
   input += synapse0x28c7330();
   input += synapse0x28c7370();
   input += synapse0x28c73b0();
   input += synapse0x28c73f0();
   input += synapse0x28c7430();
   input += synapse0x28c7470();
   input += synapse0x28c74b0();
   input += synapse0x28c74f0();
   input += synapse0x28c7530();
   input += synapse0x28c7570();
   input += synapse0x28c7000();
   input += synapse0x28c7040();
   input += synapse0x28c76c0();
   input += synapse0x28c7700();
   input += synapse0x28c7740();
   input += synapse0x28c7780();
   input += synapse0x28c77c0();
   input += synapse0x28c7800();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28c6e70() {
   double input = input0x28c6e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28c7840() {
   double input = 3.33489;
   input += synapse0x28c7b80();
   input += synapse0x28c7bc0();
   input += synapse0x28c7c00();
   input += synapse0x28c7c40();
   input += synapse0x28c7c80();
   input += synapse0x28c7cc0();
   input += synapse0x28c7d00();
   input += synapse0x28c7d40();
   input += synapse0x28c7d80();
   input += synapse0x2689010();
   input += synapse0x2689050();
   input += synapse0x2689090();
   input += synapse0x26890d0();
   input += synapse0x2689110();
   input += synapse0x2689150();
   input += synapse0x2689190();
   input += synapse0x28c79d0();
   input += synapse0x28c7a10();
   input += synapse0x26892e0();
   input += synapse0x2689320();
   input += synapse0x2689360();
   input += synapse0x26893a0();
   input += synapse0x26893e0();
   input += synapse0x28c85d0();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28c7840() {
   double input = input0x28c7840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28c8610() {
   double input = -0.633552;
   input += synapse0x28c8950();
   input += synapse0x28c8990();
   input += synapse0x28c89d0();
   input += synapse0x28c8a10();
   input += synapse0x28c8a50();
   input += synapse0x28c8a90();
   input += synapse0x28c8ad0();
   input += synapse0x28c8b10();
   input += synapse0x28c8b50();
   input += synapse0x28c8b90();
   input += synapse0x28c8bd0();
   input += synapse0x28c8c10();
   input += synapse0x28c8c50();
   input += synapse0x28c8c90();
   input += synapse0x28c8cd0();
   input += synapse0x28c8d10();
   input += synapse0x28c87a0();
   input += synapse0x28c87e0();
   input += synapse0x28c8e60();
   input += synapse0x28c8ea0();
   input += synapse0x28c8ee0();
   input += synapse0x28c8f20();
   input += synapse0x28c8f60();
   input += synapse0x28c8fa0();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28c8610() {
   double input = input0x28c8610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28c8fe0() {
   double input = 0.938215;
   input += synapse0x28c9320();
   input += synapse0x28c9360();
   input += synapse0x28c93a0();
   input += synapse0x28c93e0();
   input += synapse0x28c9420();
   input += synapse0x28c9460();
   input += synapse0x28c94a0();
   input += synapse0x28c94e0();
   input += synapse0x28c9520();
   input += synapse0x28c9560();
   input += synapse0x28c95a0();
   input += synapse0x28c95e0();
   input += synapse0x28c9620();
   input += synapse0x28c9660();
   input += synapse0x28c96a0();
   input += synapse0x28c96e0();
   input += synapse0x28c9170();
   input += synapse0x28c91b0();
   input += synapse0x28c9830();
   input += synapse0x28c9870();
   input += synapse0x28c98b0();
   input += synapse0x28c98f0();
   input += synapse0x28c9930();
   input += synapse0x28c9970();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28c8fe0() {
   double input = input0x28c8fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28c99b0() {
   double input = -2.41979;
   input += synapse0x28c34c0();
   input += synapse0x28c3500();
   input += synapse0x28c3540();
   input += synapse0x28c3580();
   input += synapse0x28c9f00();
   input += synapse0x28c9f40();
   input += synapse0x28c9f80();
   input += synapse0x28c9fc0();
   input += synapse0x28ca000();
   input += synapse0x28ca040();
   input += synapse0x28ca080();
   input += synapse0x28ca0c0();
   input += synapse0x28ca100();
   input += synapse0x28ca140();
   input += synapse0x28ca180();
   input += synapse0x28ca1c0();
   input += synapse0x28c9b40();
   input += synapse0x28c9b80();
   input += synapse0x28ca310();
   input += synapse0x28ca350();
   input += synapse0x28ca390();
   input += synapse0x28ca3d0();
   input += synapse0x28ca410();
   input += synapse0x28ca450();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28c99b0() {
   double input = input0x28c99b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28ca490() {
   double input = 0.196956;
   input += synapse0x28ca7d0();
   input += synapse0x28ca810();
   input += synapse0x28ca850();
   input += synapse0x28ca890();
   input += synapse0x28ca8d0();
   input += synapse0x28ca910();
   input += synapse0x28ca950();
   input += synapse0x28ca990();
   input += synapse0x28ca9d0();
   input += synapse0x28caa10();
   input += synapse0x28caa50();
   input += synapse0x28caa90();
   input += synapse0x28caad0();
   input += synapse0x28cab10();
   input += synapse0x28cab50();
   input += synapse0x28cab90();
   input += synapse0x28ca620();
   input += synapse0x28ca660();
   input += synapse0x28cace0();
   input += synapse0x28cad20();
   input += synapse0x28cad60();
   input += synapse0x28cada0();
   input += synapse0x28cade0();
   input += synapse0x28cae20();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28ca490() {
   double input = input0x28ca490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28cae60() {
   double input = -0.791947;
   input += synapse0x28cb1a0();
   input += synapse0x28cb1e0();
   input += synapse0x28cb220();
   input += synapse0x28cb260();
   input += synapse0x28cb2a0();
   input += synapse0x28cb2e0();
   input += synapse0x28cb320();
   input += synapse0x28cb360();
   input += synapse0x28cb3a0();
   input += synapse0x28cb3e0();
   input += synapse0x28cb420();
   input += synapse0x28cb460();
   input += synapse0x28cb4a0();
   input += synapse0x28cb4e0();
   input += synapse0x28cb520();
   input += synapse0x28cb560();
   input += synapse0x28caff0();
   input += synapse0x28cb030();
   input += synapse0x28c7dc0();
   input += synapse0x28c7e00();
   input += synapse0x28c7e40();
   input += synapse0x28c7e80();
   input += synapse0x28c7ec0();
   input += synapse0x28c7f00();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28cae60() {
   double input = input0x28cae60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28c7f40() {
   double input = 1.65788;
   input += synapse0x28c8280();
   input += synapse0x28c82c0();
   input += synapse0x28c8300();
   input += synapse0x28c8340();
   input += synapse0x28c8380();
   input += synapse0x28c83c0();
   input += synapse0x28c8400();
   input += synapse0x28c8440();
   input += synapse0x28c8480();
   input += synapse0x28c84c0();
   input += synapse0x28c8500();
   input += synapse0x28c8540();
   input += synapse0x28c8580();
   input += synapse0x28cc6c0();
   input += synapse0x28cc700();
   input += synapse0x28cc740();
   input += synapse0x28c80d0();
   input += synapse0x28c8110();
   input += synapse0x28cc890();
   input += synapse0x28cc8d0();
   input += synapse0x28cc910();
   input += synapse0x28cc950();
   input += synapse0x28cc990();
   input += synapse0x28cc9d0();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28c7f40() {
   double input = input0x28c7f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28cca10() {
   double input = 1.70336;
   input += synapse0x28ccd50();
   input += synapse0x28ccd90();
   input += synapse0x28ccdd0();
   input += synapse0x28cce10();
   input += synapse0x28cce50();
   input += synapse0x28cce90();
   input += synapse0x28cced0();
   input += synapse0x28ccf10();
   input += synapse0x28ccf50();
   input += synapse0x28ccf90();
   input += synapse0x28ccfd0();
   input += synapse0x28cd010();
   input += synapse0x28cd050();
   input += synapse0x28cd090();
   input += synapse0x28cd0d0();
   input += synapse0x28cd110();
   input += synapse0x28ccba0();
   input += synapse0x28ccbe0();
   input += synapse0x28cd260();
   input += synapse0x28cd2a0();
   input += synapse0x28cd2e0();
   input += synapse0x28cd320();
   input += synapse0x28cd360();
   input += synapse0x28cd3a0();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28cca10() {
   double input = input0x28cca10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28cd3e0() {
   double input = 1.67353;
   input += synapse0x28cd720();
   input += synapse0x28cd760();
   input += synapse0x28cd7a0();
   input += synapse0x28cd7e0();
   input += synapse0x28cd820();
   input += synapse0x28cd860();
   input += synapse0x28cd8a0();
   input += synapse0x28cd8e0();
   input += synapse0x28cd920();
   input += synapse0x28cd960();
   input += synapse0x28cd9a0();
   input += synapse0x28cd9e0();
   input += synapse0x28cda20();
   input += synapse0x28cda60();
   input += synapse0x28cdaa0();
   input += synapse0x28cdae0();
   input += synapse0x28cd570();
   input += synapse0x28cd5b0();
   input += synapse0x28cdc30();
   input += synapse0x28cdc70();
   input += synapse0x28cdcb0();
   input += synapse0x28cdcf0();
   input += synapse0x28cdd30();
   input += synapse0x28cdd70();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28cd3e0() {
   double input = input0x28cd3e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28cddb0() {
   double input = 0.265494;
   input += synapse0x28ce0f0();
   input += synapse0x28ce130();
   input += synapse0x28ce170();
   input += synapse0x28ce1b0();
   input += synapse0x28ce1f0();
   input += synapse0x28ce230();
   input += synapse0x28ce270();
   input += synapse0x28ce2b0();
   input += synapse0x28ce2f0();
   input += synapse0x28ce330();
   input += synapse0x28ce370();
   input += synapse0x28ce3b0();
   input += synapse0x28ce3f0();
   input += synapse0x28ce430();
   input += synapse0x28ce470();
   input += synapse0x28ce4b0();
   input += synapse0x28cdf40();
   input += synapse0x28cdf80();
   input += synapse0x28ce600();
   input += synapse0x28ce640();
   input += synapse0x28ce680();
   input += synapse0x28ce6c0();
   input += synapse0x28ce700();
   input += synapse0x28ce740();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28cddb0() {
   double input = input0x28cddb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28ce780() {
   double input = 0.788378;
   input += synapse0x28ceac0();
   input += synapse0x28bfe90();
   input += synapse0x28bfed0();
   input += synapse0x28c01d0();
   input += synapse0x28c0210();
   input += synapse0x28c0510();
   input += synapse0x28c0550();
   input += synapse0x28c0850();
   input += synapse0x28c0890();
   input += synapse0x28c0b90();
   input += synapse0x28c0bd0();
   input += synapse0x28c0ed0();
   input += synapse0x28c0f10();
   input += synapse0x28c1210();
   input += synapse0x28c1250();
   input += synapse0x28c1550();
   input += synapse0x28c1590();
   input += synapse0x28c1890();
   input += synapse0x28c18d0();
   input += synapse0x28c1bd0();
   input += synapse0x28c1c10();
   input += synapse0x28c1f10();
   input += synapse0x28c1f50();
   input += synapse0x28c2250();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28ce780() {
   double input = input0x28ce780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28d0590() {
   double input = -5.24586;
   input += synapse0x28c2290();
   input += synapse0x28c2f50();
   input += synapse0x28c2f90();
   input += synapse0x28ce910();
   input += synapse0x28ce950();
   input += synapse0x28c3290();
   input += synapse0x28c32d0();
   input += synapse0x267acb0();
   input += synapse0x267acf0();
   input += synapse0x28c3a10();
   input += synapse0x28c3a50();
   input += synapse0x28c3d50();
   input += synapse0x28c3d90();
   input += synapse0x28c4090();
   input += synapse0x28c40d0();
   input += synapse0x28c43d0();
   input += synapse0x28c4410();
   input += synapse0x28c4710();
   input += synapse0x28c4750();
   input += synapse0x28c4a50();
   input += synapse0x28c4a90();
   input += synapse0x28c2590();
   input += synapse0x28c25d0();
   input += synapse0x28d0830();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28d0590() {
   double input = input0x28d0590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28d0870() {
   double input = -4.02162;
   input += synapse0x28d0bb0();
   input += synapse0x28d0bf0();
   input += synapse0x28d0c30();
   input += synapse0x28d0c70();
   input += synapse0x28d0cb0();
   input += synapse0x28d0cf0();
   input += synapse0x28d0d30();
   input += synapse0x28d0d70();
   input += synapse0x28d0db0();
   input += synapse0x28d0df0();
   input += synapse0x28d0e30();
   input += synapse0x28d0e70();
   input += synapse0x28d0eb0();
   input += synapse0x28d0ef0();
   input += synapse0x28d0f30();
   input += synapse0x28d0f70();
   input += synapse0x28d0a00();
   input += synapse0x28d0a40();
   input += synapse0x28d10c0();
   input += synapse0x28d1100();
   input += synapse0x28d1140();
   input += synapse0x28d1180();
   input += synapse0x28d11c0();
   input += synapse0x28d1200();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28d0870() {
   double input = input0x28d0870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28d1240() {
   double input = 0.0195704;
   input += synapse0x28d1580();
   input += synapse0x28d15c0();
   input += synapse0x28d1600();
   input += synapse0x28d1640();
   input += synapse0x28d1680();
   input += synapse0x28d16c0();
   input += synapse0x28d1700();
   input += synapse0x28d1740();
   input += synapse0x28d1780();
   input += synapse0x28d17c0();
   input += synapse0x28d1800();
   input += synapse0x28d1840();
   input += synapse0x28d1880();
   input += synapse0x28d18c0();
   input += synapse0x28d1900();
   input += synapse0x28d1940();
   input += synapse0x28d13d0();
   input += synapse0x28d1410();
   input += synapse0x28d1a90();
   input += synapse0x28d1ad0();
   input += synapse0x28d1b10();
   input += synapse0x28d1b50();
   input += synapse0x28d1b90();
   input += synapse0x28d1bd0();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28d1240() {
   double input = input0x28d1240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28d1c10() {
   double input = -2.8169;
   input += synapse0x28d1f50();
   input += synapse0x28d1f90();
   input += synapse0x28d1fd0();
   input += synapse0x28d2010();
   input += synapse0x28d2050();
   input += synapse0x28d2090();
   input += synapse0x28d20d0();
   input += synapse0x28d2110();
   input += synapse0x28d2150();
   input += synapse0x28d2190();
   input += synapse0x28d21d0();
   input += synapse0x28d2210();
   input += synapse0x28d2250();
   input += synapse0x28d2290();
   input += synapse0x28d22d0();
   input += synapse0x28d2310();
   input += synapse0x28d1da0();
   input += synapse0x28d1de0();
   input += synapse0x28d2460();
   input += synapse0x28d24a0();
   input += synapse0x28d24e0();
   input += synapse0x28d2520();
   input += synapse0x28d2560();
   input += synapse0x28d25a0();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28d1c10() {
   double input = input0x28d1c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28d25e0() {
   double input = -0.0551323;
   input += synapse0x28d2920();
   input += synapse0x28d2960();
   input += synapse0x28d29a0();
   input += synapse0x28d29e0();
   input += synapse0x28d2a20();
   input += synapse0x28d2a60();
   input += synapse0x28d2aa0();
   input += synapse0x28d2ae0();
   input += synapse0x28d2b20();
   input += synapse0x28d2b60();
   input += synapse0x28d2ba0();
   input += synapse0x28d2be0();
   input += synapse0x28d2c20();
   input += synapse0x28d2c60();
   input += synapse0x28d2ca0();
   input += synapse0x28d2ce0();
   input += synapse0x28d2770();
   input += synapse0x28d27b0();
   input += synapse0x28d2e30();
   input += synapse0x28d2e70();
   input += synapse0x28d2eb0();
   input += synapse0x28d2ef0();
   input += synapse0x28d2f30();
   input += synapse0x28d2f70();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28d25e0() {
   double input = input0x28d25e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28d2fb0() {
   double input = 4.14982;
   input += synapse0x28d32f0();
   input += synapse0x28d3330();
   input += synapse0x28d3370();
   input += synapse0x28d33b0();
   input += synapse0x28d33f0();
   input += synapse0x28d3430();
   input += synapse0x28d3470();
   input += synapse0x28d34b0();
   input += synapse0x28d34f0();
   input += synapse0x28cb6b0();
   input += synapse0x28cb6f0();
   input += synapse0x28cb730();
   input += synapse0x28cb770();
   input += synapse0x28cb7b0();
   input += synapse0x28cb7f0();
   input += synapse0x28cb830();
   input += synapse0x28d3140();
   input += synapse0x28d3180();
   input += synapse0x28cb980();
   input += synapse0x28cb9c0();
   input += synapse0x28cba00();
   input += synapse0x28cba40();
   input += synapse0x28cba80();
   input += synapse0x28cbac0();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28d2fb0() {
   double input = input0x28d2fb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28cbb00() {
   double input = 0.854055;
   input += synapse0x28cbe40();
   input += synapse0x28cbe80();
   input += synapse0x28cbec0();
   input += synapse0x28cbf00();
   input += synapse0x28cbf40();
   input += synapse0x28cbf80();
   input += synapse0x28cbfc0();
   input += synapse0x28cc000();
   input += synapse0x28cc040();
   input += synapse0x28cc080();
   input += synapse0x28cc0c0();
   input += synapse0x28cc100();
   input += synapse0x28cc140();
   input += synapse0x28cc180();
   input += synapse0x28cc1c0();
   input += synapse0x28cc200();
   input += synapse0x28cbc90();
   input += synapse0x28cbcd0();
   input += synapse0x28cc350();
   input += synapse0x28cc390();
   input += synapse0x28cc3d0();
   input += synapse0x28cc410();
   input += synapse0x28cc450();
   input += synapse0x28cc490();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28cbb00() {
   double input = input0x28cbb00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28cc4d0() {
   double input = -1.5669;
   input += synapse0x28cc660();
   input += synapse0x28d56f0();
   input += synapse0x28d5730();
   input += synapse0x28d5770();
   input += synapse0x28d57b0();
   input += synapse0x28d57f0();
   input += synapse0x28d5830();
   input += synapse0x28d5870();
   input += synapse0x28d58b0();
   input += synapse0x28d58f0();
   input += synapse0x28d5930();
   input += synapse0x28d5970();
   input += synapse0x28d59b0();
   input += synapse0x28d59f0();
   input += synapse0x28d5a30();
   input += synapse0x28d5a70();
   input += synapse0x28d5540();
   input += synapse0x28d5580();
   input += synapse0x28d5bc0();
   input += synapse0x28d5c00();
   input += synapse0x28d5c40();
   input += synapse0x28d5c80();
   input += synapse0x28d5cc0();
   input += synapse0x28d5d00();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28cc4d0() {
   double input = input0x28cc4d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28d5d40() {
   double input = -0.638925;
   input += synapse0x28d6080();
   input += synapse0x28d60c0();
   input += synapse0x28d6100();
   input += synapse0x28d6140();
   input += synapse0x28d6180();
   input += synapse0x28d61c0();
   input += synapse0x28d6200();
   input += synapse0x28d6240();
   input += synapse0x28d6280();
   input += synapse0x28d62c0();
   input += synapse0x28d6300();
   input += synapse0x28d6340();
   input += synapse0x28d6380();
   input += synapse0x28d63c0();
   input += synapse0x28d6400();
   input += synapse0x28d6440();
   input += synapse0x28d5ed0();
   input += synapse0x28d5f10();
   input += synapse0x28d6590();
   input += synapse0x28d65d0();
   input += synapse0x28d6610();
   input += synapse0x28d6650();
   input += synapse0x28d6690();
   input += synapse0x28d66d0();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28d5d40() {
   double input = input0x28d5d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28d6710() {
   double input = -0.0783547;
   input += synapse0x28d6a50();
   input += synapse0x28d6a90();
   input += synapse0x28d6ad0();
   input += synapse0x28d6b10();
   input += synapse0x28d6b50();
   input += synapse0x28d6b90();
   input += synapse0x28d6bd0();
   input += synapse0x28d6c10();
   input += synapse0x28d6c50();
   input += synapse0x28d6c90();
   input += synapse0x28d6cd0();
   input += synapse0x28d6d10();
   input += synapse0x28d6d50();
   input += synapse0x28d6d90();
   input += synapse0x28d6dd0();
   input += synapse0x28d6e10();
   input += synapse0x28d68a0();
   input += synapse0x28d68e0();
   input += synapse0x28d6f60();
   input += synapse0x28d6fa0();
   input += synapse0x28d6fe0();
   input += synapse0x28d7020();
   input += synapse0x28d7060();
   input += synapse0x28d70a0();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28d6710() {
   double input = input0x28d6710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28d70e0() {
   double input = -1.3637;
   input += synapse0x28d7420();
   input += synapse0x28d7460();
   input += synapse0x28d74a0();
   input += synapse0x28d74e0();
   input += synapse0x28d7520();
   input += synapse0x28d7560();
   input += synapse0x28d75a0();
   input += synapse0x28d75e0();
   input += synapse0x28d7620();
   input += synapse0x28d7660();
   input += synapse0x28d76a0();
   input += synapse0x28d76e0();
   input += synapse0x28d7720();
   input += synapse0x28d7760();
   input += synapse0x28d77a0();
   input += synapse0x28d77e0();
   input += synapse0x28d7270();
   input += synapse0x28d72b0();
   input += synapse0x28d7930();
   input += synapse0x28d7970();
   input += synapse0x28d79b0();
   input += synapse0x28d79f0();
   input += synapse0x28d7a30();
   input += synapse0x28d7a70();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28d70e0() {
   double input = input0x28d70e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28d7ab0() {
   double input = -0.950218;
   input += synapse0x28d7df0();
   input += synapse0x28d7e30();
   input += synapse0x28d7e70();
   input += synapse0x28d7eb0();
   input += synapse0x28d7ef0();
   input += synapse0x28d7f30();
   input += synapse0x28d7f70();
   input += synapse0x28d7fb0();
   input += synapse0x28d7ff0();
   input += synapse0x28d8030();
   input += synapse0x28d8070();
   input += synapse0x28d80b0();
   input += synapse0x28d80f0();
   input += synapse0x28d8130();
   input += synapse0x28d8170();
   input += synapse0x28d81b0();
   input += synapse0x28d7c40();
   input += synapse0x28d7c80();
   input += synapse0x28d8300();
   input += synapse0x28d8340();
   input += synapse0x28d8380();
   input += synapse0x28d83c0();
   input += synapse0x28d8400();
   input += synapse0x28d8440();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28d7ab0() {
   double input = input0x28d7ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28d8480() {
   double input = 0.658956;
   input += synapse0x28d87c0();
   input += synapse0x28d8800();
   input += synapse0x28d8840();
   input += synapse0x28d8880();
   input += synapse0x28d88c0();
   input += synapse0x28d8900();
   input += synapse0x28d8940();
   input += synapse0x28d8980();
   input += synapse0x28d89c0();
   input += synapse0x28d8a00();
   input += synapse0x28d8a40();
   input += synapse0x28d8a80();
   input += synapse0x28d8ac0();
   input += synapse0x28d8b00();
   input += synapse0x28d8b40();
   input += synapse0x28d8b80();
   input += synapse0x28d8610();
   input += synapse0x28d8650();
   input += synapse0x28d8cd0();
   input += synapse0x28d8d10();
   input += synapse0x28d8d50();
   input += synapse0x28d8d90();
   input += synapse0x28d8dd0();
   input += synapse0x28d8e10();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28d8480() {
   double input = input0x28d8480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28d8e50() {
   double input = 1.79711;
   input += synapse0x28d9190();
   input += synapse0x28d91d0();
   input += synapse0x28d9210();
   input += synapse0x28d9250();
   input += synapse0x28d9290();
   input += synapse0x28d92d0();
   input += synapse0x28d9310();
   input += synapse0x28d9350();
   input += synapse0x28d9390();
   input += synapse0x28d93d0();
   input += synapse0x28d9410();
   input += synapse0x28d9450();
   input += synapse0x28d9490();
   input += synapse0x28d94d0();
   input += synapse0x28d9510();
   input += synapse0x28d9550();
   input += synapse0x28d8fe0();
   input += synapse0x28d9020();
   input += synapse0x28d96a0();
   input += synapse0x28d96e0();
   input += synapse0x28d9720();
   input += synapse0x28d9760();
   input += synapse0x28d97a0();
   input += synapse0x28d97e0();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28d8e50() {
   double input = input0x28d8e50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28d9820() {
   double input = 0.445332;
   input += synapse0x28d9b60();
   input += synapse0x28d9ba0();
   input += synapse0x28d9be0();
   input += synapse0x28d9c20();
   input += synapse0x28d9c60();
   input += synapse0x28d9ca0();
   input += synapse0x28d9ce0();
   input += synapse0x28d9d20();
   input += synapse0x28d9d60();
   input += synapse0x28d9da0();
   input += synapse0x28d9de0();
   input += synapse0x28d9e20();
   input += synapse0x28d9e60();
   input += synapse0x28d9ea0();
   input += synapse0x28d9ee0();
   input += synapse0x28d9f20();
   input += synapse0x28d99b0();
   input += synapse0x28d99f0();
   input += synapse0x28da070();
   input += synapse0x28da0b0();
   input += synapse0x28da0f0();
   input += synapse0x28da130();
   input += synapse0x28da170();
   input += synapse0x28da1b0();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28d9820() {
   double input = input0x28d9820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28da1f0() {
   double input = -2.2878;
   input += synapse0x28da530();
   input += synapse0x28ceb00();
   input += synapse0x28ceb40();
   input += synapse0x28ceb80();
   input += synapse0x28cedd0();
   input += synapse0x28cee10();
   input += synapse0x28cee50();
   input += synapse0x28cf0a0();
   input += synapse0x28cf0e0();
   input += synapse0x28cf330();
   input += synapse0x28cf370();
   input += synapse0x28cf3b0();
   input += synapse0x28cf600();
   input += synapse0x28cf640();
   input += synapse0x28cf890();
   input += synapse0x28cf8d0();
   input += synapse0x28da380();
   input += synapse0x28da3c0();
   input += synapse0x28cfa20();
   input += synapse0x28cff30();
   input += synapse0x28cff70();
   input += synapse0x28cffb0();
   input += synapse0x28d0200();
   input += synapse0x28d0240();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28da1f0() {
   double input = input0x28da1f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28d0280() {
   double input = -1.4009;
   input += synapse0x28cfaf0();
   input += synapse0x28cfb30();
   input += synapse0x28cfb70();
   input += synapse0x28cfbb0();
   input += synapse0x28d0530();
   input += synapse0x28dc880();
   input += synapse0x28dc8c0();
   input += synapse0x28dc900();
   input += synapse0x28dc940();
   input += synapse0x28dc980();
   input += synapse0x28dc9c0();
   input += synapse0x28dca00();
   input += synapse0x28dca40();
   input += synapse0x28dca80();
   input += synapse0x28dcac0();
   input += synapse0x28dcb00();
   input += synapse0x28d0410();
   input += synapse0x28d0450();
   input += synapse0x28dcc50();
   input += synapse0x28dcc90();
   input += synapse0x28dccd0();
   input += synapse0x28dcd10();
   input += synapse0x28dcd50();
   input += synapse0x28dcd90();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28d0280() {
   double input = input0x28d0280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28dcdd0() {
   double input = -2.07258;
   input += synapse0x28dd110();
   input += synapse0x28dd150();
   input += synapse0x28dd190();
   input += synapse0x28dd1d0();
   input += synapse0x28dd210();
   input += synapse0x28dd250();
   input += synapse0x28dd290();
   input += synapse0x28dd2d0();
   input += synapse0x28dd310();
   input += synapse0x28dd350();
   input += synapse0x28dd390();
   input += synapse0x28dd3d0();
   input += synapse0x28dd410();
   input += synapse0x28dd450();
   input += synapse0x28dd490();
   input += synapse0x28dd4d0();
   input += synapse0x28dcf60();
   input += synapse0x28dcfa0();
   input += synapse0x28dd620();
   input += synapse0x28dd660();
   input += synapse0x28dd6a0();
   input += synapse0x28dd6e0();
   input += synapse0x28dd720();
   input += synapse0x28dd760();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28dcdd0() {
   double input = input0x28dcdd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28dd7a0() {
   double input = 0.14614;
   input += synapse0x28ddae0();
   input += synapse0x28ddb20();
   input += synapse0x28ddb60();
   input += synapse0x28ddba0();
   input += synapse0x28ddbe0();
   input += synapse0x28ddc20();
   input += synapse0x28ddc60();
   input += synapse0x28ddca0();
   input += synapse0x28ddce0();
   input += synapse0x28ddd20();
   input += synapse0x28ddd60();
   input += synapse0x28ddda0();
   input += synapse0x28ddde0();
   input += synapse0x28dde20();
   input += synapse0x28dde60();
   input += synapse0x28ddea0();
   input += synapse0x28dd930();
   input += synapse0x28dd970();
   input += synapse0x28ddff0();
   input += synapse0x28de030();
   input += synapse0x28de070();
   input += synapse0x28de0b0();
   input += synapse0x28de0f0();
   input += synapse0x28de130();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28dd7a0() {
   double input = input0x28dd7a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28de170() {
   double input = -1.62465;
   input += synapse0x28de4b0();
   input += synapse0x28de4f0();
   input += synapse0x28de530();
   input += synapse0x28de570();
   input += synapse0x28de5b0();
   input += synapse0x28de5f0();
   input += synapse0x28de630();
   input += synapse0x28de670();
   input += synapse0x28de6b0();
   input += synapse0x28de6f0();
   input += synapse0x28de730();
   input += synapse0x28de770();
   input += synapse0x28de7b0();
   input += synapse0x28de7f0();
   input += synapse0x28de830();
   input += synapse0x28de870();
   input += synapse0x28de300();
   input += synapse0x28de340();
   input += synapse0x28de9c0();
   input += synapse0x28dea00();
   input += synapse0x28dea40();
   input += synapse0x28dea80();
   input += synapse0x28deac0();
   input += synapse0x28deb00();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28de170() {
   double input = input0x28de170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28deb40() {
   double input = 0.406812;
   input += synapse0x28dee80();
   input += synapse0x28deec0();
   input += synapse0x28def00();
   input += synapse0x28def40();
   input += synapse0x28def80();
   input += synapse0x28defc0();
   input += synapse0x28df000();
   input += synapse0x28df040();
   input += synapse0x28df080();
   input += synapse0x28df0c0();
   input += synapse0x28df100();
   input += synapse0x28df140();
   input += synapse0x28df180();
   input += synapse0x28df1c0();
   input += synapse0x28df200();
   input += synapse0x28df240();
   input += synapse0x28decd0();
   input += synapse0x28ded10();
   input += synapse0x28df390();
   input += synapse0x28df3d0();
   input += synapse0x28df410();
   input += synapse0x28df450();
   input += synapse0x28df490();
   input += synapse0x28df4d0();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28deb40() {
   double input = input0x28deb40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28df510() {
   double input = 1.67756;
   input += synapse0x28df850();
   input += synapse0x28df890();
   input += synapse0x28df8d0();
   input += synapse0x28df910();
   input += synapse0x28df950();
   input += synapse0x28df990();
   input += synapse0x28df9d0();
   input += synapse0x28dfa10();
   input += synapse0x28dfa50();
   input += synapse0x28dfa90();
   input += synapse0x28dfad0();
   input += synapse0x28dfb10();
   input += synapse0x28dfb50();
   input += synapse0x28dfb90();
   input += synapse0x28dfbd0();
   input += synapse0x28dfc10();
   input += synapse0x28df6a0();
   input += synapse0x28df6e0();
   input += synapse0x28dfd60();
   input += synapse0x28dfda0();
   input += synapse0x28dfde0();
   input += synapse0x28dfe20();
   input += synapse0x28dfe60();
   input += synapse0x28dfea0();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28df510() {
   double input = input0x28df510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28dfee0() {
   double input = -1.38574;
   input += synapse0x28e0220();
   input += synapse0x28e0260();
   input += synapse0x28e02a0();
   input += synapse0x28e02e0();
   input += synapse0x28e0320();
   input += synapse0x28e0360();
   input += synapse0x28e03a0();
   input += synapse0x28e03e0();
   input += synapse0x28e0420();
   input += synapse0x28e0460();
   input += synapse0x28e04a0();
   input += synapse0x28e04e0();
   input += synapse0x28e0520();
   input += synapse0x28e0560();
   input += synapse0x28e05a0();
   input += synapse0x28e05e0();
   input += synapse0x28e0070();
   input += synapse0x28e00b0();
   input += synapse0x28e0730();
   input += synapse0x28e0770();
   input += synapse0x28e07b0();
   input += synapse0x28e07f0();
   input += synapse0x28e0830();
   input += synapse0x28e0870();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28dfee0() {
   double input = input0x28dfee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28e08b0() {
   double input = -0.279201;
   input += synapse0x28e0bf0();
   input += synapse0x28e0c30();
   input += synapse0x28e0c70();
   input += synapse0x28e0cb0();
   input += synapse0x28e0cf0();
   input += synapse0x28e0d30();
   input += synapse0x28e0d70();
   input += synapse0x28e0db0();
   input += synapse0x28e0df0();
   input += synapse0x28e0e30();
   input += synapse0x28e0e70();
   input += synapse0x28e0eb0();
   input += synapse0x28e0ef0();
   input += synapse0x28e0f30();
   input += synapse0x28e0f70();
   input += synapse0x28e0fb0();
   input += synapse0x28e0a40();
   input += synapse0x28e0a80();
   input += synapse0x28e1100();
   input += synapse0x28e1140();
   input += synapse0x28e1180();
   input += synapse0x28e11c0();
   input += synapse0x28e1200();
   input += synapse0x28e1240();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28e08b0() {
   double input = input0x28e08b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28e1280() {
   double input = 2.68135;
   input += synapse0x28c9cf0();
   input += synapse0x28c9d30();
   input += synapse0x28c9d70();
   input += synapse0x28c9db0();
   input += synapse0x28c9df0();
   input += synapse0x28c9e30();
   input += synapse0x28c9e70();
   input += synapse0x28c9eb0();
   input += synapse0x28e19d0();
   input += synapse0x28e1a10();
   input += synapse0x28e1a50();
   input += synapse0x28e1a90();
   input += synapse0x28e1ad0();
   input += synapse0x28e1b10();
   input += synapse0x28e1b50();
   input += synapse0x28e1b90();
   input += synapse0x28e1410();
   input += synapse0x28e1450();
   input += synapse0x28e1ce0();
   input += synapse0x28e1d20();
   input += synapse0x28e1d60();
   input += synapse0x28e1da0();
   input += synapse0x28e1de0();
   input += synapse0x28e1e20();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28e1280() {
   double input = input0x28e1280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28e1e60() {
   double input = -3.78975;
   input += synapse0x28e21a0();
   input += synapse0x28e21e0();
   input += synapse0x28e2220();
   input += synapse0x28e2260();
   input += synapse0x28e22a0();
   input += synapse0x28e22e0();
   input += synapse0x28e2320();
   input += synapse0x28e2360();
   input += synapse0x28e23a0();
   input += synapse0x28e23e0();
   input += synapse0x28e2420();
   input += synapse0x28e2460();
   input += synapse0x28e24a0();
   input += synapse0x28e24e0();
   input += synapse0x28e2520();
   input += synapse0x28e2560();
   input += synapse0x28e1ff0();
   input += synapse0x28e2030();
   input += synapse0x28e26b0();
   input += synapse0x28e26f0();
   input += synapse0x28e2730();
   input += synapse0x28e2770();
   input += synapse0x28e27b0();
   input += synapse0x28e27f0();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28e1e60() {
   double input = input0x28e1e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28e2830() {
   double input = 0.147552;
   input += synapse0x28e2b70();
   input += synapse0x28e2bb0();
   input += synapse0x28e2bf0();
   input += synapse0x28e2c30();
   input += synapse0x28e2c70();
   input += synapse0x28e2cb0();
   input += synapse0x28e2cf0();
   input += synapse0x28e2d30();
   input += synapse0x28e2d70();
   input += synapse0x28e2db0();
   input += synapse0x28e2df0();
   input += synapse0x28e2e30();
   input += synapse0x28e2e70();
   input += synapse0x28e2eb0();
   input += synapse0x28e2ef0();
   input += synapse0x28e2f30();
   input += synapse0x28e29c0();
   input += synapse0x28e2a00();
   input += synapse0x28d3530();
   input += synapse0x28d3570();
   input += synapse0x28d35b0();
   input += synapse0x28d35f0();
   input += synapse0x28d3630();
   input += synapse0x28d3670();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28e2830() {
   double input = input0x28e2830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28d36b0() {
   double input = -0.211469;
   input += synapse0x28d39f0();
   input += synapse0x28d3a30();
   input += synapse0x28d3a70();
   input += synapse0x28d3ab0();
   input += synapse0x28d3af0();
   input += synapse0x28d3b30();
   input += synapse0x28d3b70();
   input += synapse0x28d3bb0();
   input += synapse0x28d3bf0();
   input += synapse0x28d3c30();
   input += synapse0x28d3c70();
   input += synapse0x28d3cb0();
   input += synapse0x28d3cf0();
   input += synapse0x28d3d30();
   input += synapse0x28d3d70();
   input += synapse0x28d3db0();
   input += synapse0x28d3840();
   input += synapse0x28d3880();
   input += synapse0x28d3f00();
   input += synapse0x28d3f40();
   input += synapse0x28d3f80();
   input += synapse0x28d3fc0();
   input += synapse0x28d4000();
   input += synapse0x28d4040();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28d36b0() {
   double input = input0x28d36b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28d4080() {
   double input = 1.17659;
   input += synapse0x28d43c0();
   input += synapse0x28d4400();
   input += synapse0x28d4440();
   input += synapse0x28d4480();
   input += synapse0x28d44c0();
   input += synapse0x28d4500();
   input += synapse0x28d4540();
   input += synapse0x28d4580();
   input += synapse0x28d45c0();
   input += synapse0x28d4600();
   input += synapse0x28d4640();
   input += synapse0x28d4680();
   input += synapse0x28d46c0();
   input += synapse0x28d4700();
   input += synapse0x28d4740();
   input += synapse0x28d4780();
   input += synapse0x28d4210();
   input += synapse0x28d4250();
   input += synapse0x28d48d0();
   input += synapse0x28d4910();
   input += synapse0x28d4950();
   input += synapse0x28d4990();
   input += synapse0x28d49d0();
   input += synapse0x28d4a10();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28d4080() {
   double input = input0x28d4080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28d4a50() {
   double input = 1.1625;
   input += synapse0x28d4d90();
   input += synapse0x28d4dd0();
   input += synapse0x28d4e10();
   input += synapse0x28d4e50();
   input += synapse0x28d4e90();
   input += synapse0x28d4ed0();
   input += synapse0x28d4f10();
   input += synapse0x28d4f50();
   input += synapse0x28d4f90();
   input += synapse0x28d4fd0();
   input += synapse0x28d5010();
   input += synapse0x28d5050();
   input += synapse0x28d5090();
   input += synapse0x28d50d0();
   input += synapse0x28d5110();
   input += synapse0x28d5150();
   input += synapse0x28d4be0();
   input += synapse0x28d4c20();
   input += synapse0x28d52a0();
   input += synapse0x28d52e0();
   input += synapse0x28d5320();
   input += synapse0x28d5360();
   input += synapse0x28d53a0();
   input += synapse0x28d53e0();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28d4a50() {
   double input = input0x28d4a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28e7090() {
   double input = -1.33007;
   input += synapse0x28e72b0();
   input += synapse0x28e72f0();
   input += synapse0x28e7330();
   input += synapse0x28e7370();
   input += synapse0x28e73b0();
   input += synapse0x28e73f0();
   input += synapse0x28e7430();
   input += synapse0x28e7470();
   input += synapse0x28e74b0();
   input += synapse0x28e74f0();
   input += synapse0x28e7530();
   input += synapse0x28e7570();
   input += synapse0x28e75b0();
   input += synapse0x28e75f0();
   input += synapse0x28e7630();
   input += synapse0x28e7670();
   input += synapse0x28d5420();
   input += synapse0x28d5460();
   input += synapse0x28e77c0();
   input += synapse0x28e7800();
   input += synapse0x28e7840();
   input += synapse0x28e7880();
   input += synapse0x28e78c0();
   input += synapse0x28e7900();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28e7090() {
   double input = input0x28e7090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28e7940() {
   double input = 1.62669;
   input += synapse0x28e7c80();
   input += synapse0x28e7cc0();
   input += synapse0x28e7d00();
   input += synapse0x28e7d40();
   input += synapse0x28e7d80();
   input += synapse0x28e7dc0();
   input += synapse0x28e7e00();
   input += synapse0x28e7e40();
   input += synapse0x28e7e80();
   input += synapse0x28e7ec0();
   input += synapse0x28e7f00();
   input += synapse0x28e7f40();
   input += synapse0x28e7f80();
   input += synapse0x28e7fc0();
   input += synapse0x28e8000();
   input += synapse0x28e8040();
   input += synapse0x28e7ad0();
   input += synapse0x28e7b10();
   input += synapse0x28e8190();
   input += synapse0x28e81d0();
   input += synapse0x28e8210();
   input += synapse0x28e8250();
   input += synapse0x28e8290();
   input += synapse0x28e82d0();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28e7940() {
   double input = input0x28e7940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28e8310() {
   double input = -0.664797;
   input += synapse0x28e8650();
   input += synapse0x28e8690();
   input += synapse0x28e86d0();
   input += synapse0x28e8710();
   input += synapse0x28e8750();
   input += synapse0x28e8790();
   input += synapse0x28e87d0();
   input += synapse0x28e8810();
   input += synapse0x28e8850();
   input += synapse0x28e8890();
   input += synapse0x28e88d0();
   input += synapse0x28e8910();
   input += synapse0x28e8950();
   input += synapse0x28e8990();
   input += synapse0x28e89d0();
   input += synapse0x28e8a10();
   input += synapse0x28e84a0();
   input += synapse0x28e84e0();
   input += synapse0x28e8b60();
   input += synapse0x28e8ba0();
   input += synapse0x28e8be0();
   input += synapse0x28e8c20();
   input += synapse0x28e8c60();
   input += synapse0x28e8ca0();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28e8310() {
   double input = input0x28e8310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28e8ce0() {
   double input = 2.55413;
   input += synapse0x28e9020();
   input += synapse0x28e9060();
   input += synapse0x28e90a0();
   input += synapse0x28e90e0();
   input += synapse0x28e9120();
   input += synapse0x28e9160();
   input += synapse0x28e91a0();
   input += synapse0x28e91e0();
   input += synapse0x28e9220();
   input += synapse0x28e9260();
   input += synapse0x28e92a0();
   input += synapse0x28e92e0();
   input += synapse0x28e9320();
   input += synapse0x28e9360();
   input += synapse0x28e93a0();
   input += synapse0x28e93e0();
   input += synapse0x28e8e70();
   input += synapse0x28e8eb0();
   input += synapse0x28e9530();
   input += synapse0x28e9570();
   input += synapse0x28e95b0();
   input += synapse0x28e95f0();
   input += synapse0x28e9630();
   input += synapse0x28e9670();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28e8ce0() {
   double input = input0x28e8ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28efee0() {
   double input = -2.22978;
   input += synapse0x28c5c00();
   input += synapse0x28c5c40();
   input += synapse0x28c7120();
   input += synapse0x28c7160();
   input += synapse0x28c7af0();
   input += synapse0x28c7b30();
   input += synapse0x28c88c0();
   input += synapse0x28c8900();
   input += synapse0x28c9290();
   input += synapse0x28c92d0();
   input += synapse0x28c9c60();
   input += synapse0x28c9ca0();
   input += synapse0x28ca740();
   input += synapse0x28ca780();
   input += synapse0x28cb110();
   input += synapse0x28cb150();
   input += synapse0x28c81f0();
   input += synapse0x28c8230();
   input += synapse0x28cccc0();
   input += synapse0x28ccd00();
   input += synapse0x28cd690();
   input += synapse0x28cd6d0();
   input += synapse0x28ce060();
   input += synapse0x28ce0a0();
   input += synapse0x28cea30();
   input += synapse0x28cea70();
   input += synapse0x28c2c10();
   input += synapse0x28c2c50();
   input += synapse0x28d0b20();
   input += synapse0x28d0b60();
   input += synapse0x28d14f0();
   input += synapse0x28d1530();
   input += synapse0x28d1ec0();
   input += synapse0x28d1f00();
   input += synapse0x28d2890();
   input += synapse0x28d28d0();
   input += synapse0x28d3260();
   input += synapse0x28d32a0();
   input += synapse0x28cbdb0();
   input += synapse0x28cbdf0();
   input += synapse0x28d5660();
   input += synapse0x28d56a0();
   input += synapse0x28d5ff0();
   input += synapse0x28d6030();
   input += synapse0x28d69c0();
   input += synapse0x28d6a00();
   input += synapse0x28d7390();
   input += synapse0x28d73d0();
   input += synapse0x28d7d60();
   input += synapse0x28d7da0();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28efee0() {
   double input = input0x28efee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28f0280() {
   double input = 1.62466;
   input += synapse0x28da4a0();
   input += synapse0x28da4e0();
   input += synapse0x28cfa60();
   input += synapse0x28cfaa0();
   input += synapse0x28dd080();
   input += synapse0x28dd0c0();
   input += synapse0x28dda50();
   input += synapse0x28dda90();
   input += synapse0x28de420();
   input += synapse0x28de460();
   input += synapse0x28dedf0();
   input += synapse0x28dee30();
   input += synapse0x28df7c0();
   input += synapse0x28df800();
   input += synapse0x28e0190();
   input += synapse0x28e01d0();
   input += synapse0x28e0b60();
   input += synapse0x28e0ba0();
   input += synapse0x28e1530();
   input += synapse0x28e1570();
   input += synapse0x28e2110();
   input += synapse0x28e2150();
   input += synapse0x28e2ae0();
   input += synapse0x28e2b20();
   input += synapse0x28d3960();
   input += synapse0x28d39a0();
   input += synapse0x28d4330();
   input += synapse0x28d4370();
   input += synapse0x28d4d00();
   input += synapse0x28d4d40();
   input += synapse0x28e7220();
   input += synapse0x28e7260();
   input += synapse0x28e7bf0();
   input += synapse0x28e7c30();
   input += synapse0x28e85c0();
   input += synapse0x28e8600();
   input += synapse0x28e8f90();
   input += synapse0x28e8fd0();
   input += synapse0x28c4ec0();
   input += synapse0x28c4f00();
   input += synapse0x28d8730();
   input += synapse0x28d8770();
   input += synapse0x28e96b0();
   input += synapse0x28e96f0();
   input += synapse0x28e9730();
   input += synapse0x28e9770();
   input += synapse0x28f0620();
   input += synapse0x28f0660();
   input += synapse0x28f06a0();
   input += synapse0x28f06e0();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28f0280() {
   double input = input0x28f0280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28f0720() {
   double input = 0.0784334;
   input += synapse0x28f0a60();
   input += synapse0x28f0aa0();
   input += synapse0x28f0ae0();
   input += synapse0x28f0b20();
   input += synapse0x28f0b60();
   input += synapse0x28f0ba0();
   input += synapse0x28f0be0();
   input += synapse0x28f0c20();
   input += synapse0x28f0c60();
   input += synapse0x28f0ca0();
   input += synapse0x28f0ce0();
   input += synapse0x28f0d20();
   input += synapse0x28f0d60();
   input += synapse0x28f0da0();
   input += synapse0x28f0de0();
   input += synapse0x28f0e20();
   input += synapse0x28f08b0();
   input += synapse0x28f08f0();
   input += synapse0x28f0f70();
   input += synapse0x28f0fb0();
   input += synapse0x28f0ff0();
   input += synapse0x28f1030();
   input += synapse0x28f1070();
   input += synapse0x28f10b0();
   input += synapse0x28f10f0();
   input += synapse0x28f1130();
   input += synapse0x28f1170();
   input += synapse0x28f11b0();
   input += synapse0x28f11f0();
   input += synapse0x28f1230();
   input += synapse0x28f1270();
   input += synapse0x28f12b0();
   input += synapse0x28f0e60();
   input += synapse0x28f0ea0();
   input += synapse0x28f0ee0();
   input += synapse0x28f0f20();
   input += synapse0x28f1500();
   input += synapse0x28f1540();
   input += synapse0x28f1580();
   input += synapse0x28f15c0();
   input += synapse0x28f1600();
   input += synapse0x28f1640();
   input += synapse0x28f1680();
   input += synapse0x28f16c0();
   input += synapse0x28f1700();
   input += synapse0x28f1740();
   input += synapse0x28f1780();
   input += synapse0x28f17c0();
   input += synapse0x28f1800();
   input += synapse0x28f1840();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28f0720() {
   double input = input0x28f0720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28f1880() {
   double input = -0.33974;
   input += synapse0x28f1bc0();
   input += synapse0x28f1c00();
   input += synapse0x28f1c40();
   input += synapse0x28f1c80();
   input += synapse0x28f1cc0();
   input += synapse0x28f1d00();
   input += synapse0x28f1d40();
   input += synapse0x28f1d80();
   input += synapse0x28f1dc0();
   input += synapse0x28f1e00();
   input += synapse0x28f1e40();
   input += synapse0x28f1e80();
   input += synapse0x28f1ec0();
   input += synapse0x28f1f00();
   input += synapse0x28f1f40();
   input += synapse0x28f1f80();
   input += synapse0x28f1a10();
   input += synapse0x28f1a50();
   input += synapse0x28f20d0();
   input += synapse0x28f2110();
   input += synapse0x28f2150();
   input += synapse0x28f2190();
   input += synapse0x28f21d0();
   input += synapse0x28f2210();
   input += synapse0x28f2250();
   input += synapse0x28f2290();
   input += synapse0x28f22d0();
   input += synapse0x28f2310();
   input += synapse0x28f2350();
   input += synapse0x28f2390();
   input += synapse0x28f23d0();
   input += synapse0x28f2410();
   input += synapse0x28f1fc0();
   input += synapse0x28f2000();
   input += synapse0x28f2040();
   input += synapse0x28f2080();
   input += synapse0x28f2660();
   input += synapse0x28f26a0();
   input += synapse0x28f26e0();
   input += synapse0x28f2720();
   input += synapse0x28f2760();
   input += synapse0x28f27a0();
   input += synapse0x28f27e0();
   input += synapse0x28f2820();
   input += synapse0x28f2860();
   input += synapse0x28f28a0();
   input += synapse0x28f28e0();
   input += synapse0x28f2920();
   input += synapse0x28f2960();
   input += synapse0x28f29a0();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28f1880() {
   double input = input0x28f1880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28f29e0() {
   double input = 1.12837;
   input += synapse0x28f2d20();
   input += synapse0x28f2d60();
   input += synapse0x28f2da0();
   input += synapse0x28f2de0();
   input += synapse0x28f2e20();
   input += synapse0x28f2e60();
   input += synapse0x28f2ea0();
   input += synapse0x28f2ee0();
   input += synapse0x28f2f20();
   input += synapse0x28f2f60();
   input += synapse0x28f2fa0();
   input += synapse0x28f2fe0();
   input += synapse0x28f3020();
   input += synapse0x28f3060();
   input += synapse0x28f30a0();
   input += synapse0x28f30e0();
   input += synapse0x28f2b70();
   input += synapse0x28f2bb0();
   input += synapse0x28f3230();
   input += synapse0x28f3270();
   input += synapse0x28f32b0();
   input += synapse0x28f32f0();
   input += synapse0x28f3330();
   input += synapse0x28f3370();
   input += synapse0x28f33b0();
   input += synapse0x28f33f0();
   input += synapse0x28f3430();
   input += synapse0x28f3470();
   input += synapse0x28f34b0();
   input += synapse0x28f34f0();
   input += synapse0x28f3530();
   input += synapse0x28f3570();
   input += synapse0x28f3120();
   input += synapse0x28f3160();
   input += synapse0x28f31a0();
   input += synapse0x28f31e0();
   input += synapse0x28f37c0();
   input += synapse0x28f3800();
   input += synapse0x28f3840();
   input += synapse0x28f3880();
   input += synapse0x28f38c0();
   input += synapse0x28f3900();
   input += synapse0x28f3940();
   input += synapse0x28f3980();
   input += synapse0x28f39c0();
   input += synapse0x28f3a00();
   input += synapse0x28f3a40();
   input += synapse0x28f3a80();
   input += synapse0x28f3ac0();
   input += synapse0x28f3b00();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28f29e0() {
   double input = input0x28f29e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi2_chi4::input0x28f3b40() {
   double input = 1.66938;
   input += synapse0x28f3d60();
   input += synapse0x28f3da0();
   input += synapse0x28f3de0();
   input += synapse0x28f3e20();
   input += synapse0x28f3e60();
   return input;
}

double NNfunction_nn_chi2_chi4::neuron0x28f3b40() {
   double input = input0x28f3b40();
   return (input * 1)+0;
}

double NNfunction_nn_chi2_chi4::synapse0x28bfc80() {
   return (neuron0x28bfd00()*0.392737);
}

double NNfunction_nn_chi2_chi4::synapse0x28bfcc0() {
   return (neuron0x28bffb0()*-1.99515);
}

double NNfunction_nn_chi2_chi4::synapse0x28c4f50() {
   return (neuron0x28c02f0()*0.0491218);
}

double NNfunction_nn_chi2_chi4::synapse0x28c4f90() {
   return (neuron0x28c0630()*-0.332033);
}

double NNfunction_nn_chi2_chi4::synapse0x28c4fd0() {
   return (neuron0x28c0970()*-0.146882);
}

double NNfunction_nn_chi2_chi4::synapse0x28c5010() {
   return (neuron0x28c0cb0()*-0.0652572);
}

double NNfunction_nn_chi2_chi4::synapse0x28c5050() {
   return (neuron0x28c0ff0()*-0.212856);
}

double NNfunction_nn_chi2_chi4::synapse0x28c5090() {
   return (neuron0x28c1330()*-0.739209);
}

double NNfunction_nn_chi2_chi4::synapse0x28c50d0() {
   return (neuron0x28c1670()*0.505789);
}

double NNfunction_nn_chi2_chi4::synapse0x28c5110() {
   return (neuron0x28c19b0()*-0.299261);
}

double NNfunction_nn_chi2_chi4::synapse0x28c5150() {
   return (neuron0x28c1cf0()*0.525396);
}

double NNfunction_nn_chi2_chi4::synapse0x28c5190() {
   return (neuron0x28c2030()*1.52986);
}

double NNfunction_nn_chi2_chi4::synapse0x28c51d0() {
   return (neuron0x28c2370()*-0.0270662);
}

double NNfunction_nn_chi2_chi4::synapse0x28c5210() {
   return (neuron0x28c26b0()*-0.138852);
}

double NNfunction_nn_chi2_chi4::synapse0x28c5250() {
   return (neuron0x28c29f0()*-0.427343);
}

double NNfunction_nn_chi2_chi4::synapse0x28c5290() {
   return (neuron0x28c2d30()*-0.780827);
}

double NNfunction_nn_chi2_chi4::synapse0x28bfbf0() {
   return (neuron0x28c3070()*0.18485);
}

double NNfunction_nn_chi2_chi4::synapse0x28bfc30() {
   return (neuron0x28c35d0()*0.111807);
}

double NNfunction_nn_chi2_chi4::synapse0x267add0() {
   return (neuron0x28c37f0()*0.501125);
}

double NNfunction_nn_chi2_chi4::synapse0x267ae10() {
   return (neuron0x28c3b30()*-0.175268);
}

double NNfunction_nn_chi2_chi4::synapse0x28c54f0() {
   return (neuron0x28c3e70()*-0.430707);
}

double NNfunction_nn_chi2_chi4::synapse0x28c5530() {
   return (neuron0x28c41b0()*-0.0261878);
}

double NNfunction_nn_chi2_chi4::synapse0x28c5570() {
   return (neuron0x28c44f0()*-0.171016);
}

double NNfunction_nn_chi2_chi4::synapse0x28c55b0() {
   return (neuron0x28c4830()*-0.729938);
}

double NNfunction_nn_chi2_chi4::synapse0x28c5930() {
   return (neuron0x28bfd00()*-0.79932);
}

double NNfunction_nn_chi2_chi4::synapse0x28c5970() {
   return (neuron0x28bffb0()*1.82428);
}

double NNfunction_nn_chi2_chi4::synapse0x28c59b0() {
   return (neuron0x28c02f0()*-3.68413);
}

double NNfunction_nn_chi2_chi4::synapse0x28c59f0() {
   return (neuron0x28c0630()*0.0876123);
}

double NNfunction_nn_chi2_chi4::synapse0x28c5a30() {
   return (neuron0x28c0970()*-1.40322);
}

double NNfunction_nn_chi2_chi4::synapse0x28c5a70() {
   return (neuron0x28c0cb0()*0.687069);
}

double NNfunction_nn_chi2_chi4::synapse0x28c5ab0() {
   return (neuron0x28c0ff0()*0.992885);
}

double NNfunction_nn_chi2_chi4::synapse0x28c5af0() {
   return (neuron0x28c1330()*-0.140653);
}

double NNfunction_nn_chi2_chi4::synapse0x28c5b30() {
   return (neuron0x28c1670()*-0.328954);
}

double NNfunction_nn_chi2_chi4::synapse0x28c53e0() {
   return (neuron0x28c19b0()*1.33953);
}

double NNfunction_nn_chi2_chi4::synapse0x28c5420() {
   return (neuron0x28c1cf0()*0.180158);
}

double NNfunction_nn_chi2_chi4::synapse0x28c5460() {
   return (neuron0x28c2030()*-0.928853);
}

double NNfunction_nn_chi2_chi4::synapse0x28c54a0() {
   return (neuron0x28c2370()*-0.470707);
}

double NNfunction_nn_chi2_chi4::synapse0x28c5d80() {
   return (neuron0x28c26b0()*-0.362368);
}

double NNfunction_nn_chi2_chi4::synapse0x28c5dc0() {
   return (neuron0x28c29f0()*0.0973012);
}

double NNfunction_nn_chi2_chi4::synapse0x28c5e00() {
   return (neuron0x28c2d30()*-1.39489);
}

double NNfunction_nn_chi2_chi4::synapse0x28c5780() {
   return (neuron0x28c3070()*-0.418155);
}

double NNfunction_nn_chi2_chi4::synapse0x28c57c0() {
   return (neuron0x28c35d0()*-0.452596);
}

double NNfunction_nn_chi2_chi4::synapse0x28c5f50() {
   return (neuron0x28c37f0()*-0.608769);
}

double NNfunction_nn_chi2_chi4::synapse0x28c5f90() {
   return (neuron0x28c3b30()*-1.71439);
}

double NNfunction_nn_chi2_chi4::synapse0x28c5fd0() {
   return (neuron0x28c3e70()*1.34959);
}

double NNfunction_nn_chi2_chi4::synapse0x28c6010() {
   return (neuron0x28c41b0()*-1.95084);
}

double NNfunction_nn_chi2_chi4::synapse0x28c6050() {
   return (neuron0x28c44f0()*0.794761);
}

double NNfunction_nn_chi2_chi4::synapse0x28c6090() {
   return (neuron0x28c4830()*-0.135989);
}

double NNfunction_nn_chi2_chi4::synapse0x28c6410() {
   return (neuron0x28bfd00()*-0.115107);
}

double NNfunction_nn_chi2_chi4::synapse0x28c6450() {
   return (neuron0x28bffb0()*-8.45798);
}

double NNfunction_nn_chi2_chi4::synapse0x28c6490() {
   return (neuron0x28c02f0()*-7.53682);
}

double NNfunction_nn_chi2_chi4::synapse0x28c64d0() {
   return (neuron0x28c0630()*0.026501);
}

double NNfunction_nn_chi2_chi4::synapse0x28c6510() {
   return (neuron0x28c0970()*-0.070768);
}

double NNfunction_nn_chi2_chi4::synapse0x28c6550() {
   return (neuron0x28c0cb0()*-0.0200336);
}

double NNfunction_nn_chi2_chi4::synapse0x28c6590() {
   return (neuron0x28c0ff0()*-0.094438);
}

double NNfunction_nn_chi2_chi4::synapse0x28c65d0() {
   return (neuron0x28c1330()*0.0325244);
}

double NNfunction_nn_chi2_chi4::synapse0x28c6610() {
   return (neuron0x28c1670()*0.0171708);
}

double NNfunction_nn_chi2_chi4::synapse0x28c6650() {
   return (neuron0x28c19b0()*-0.064803);
}

double NNfunction_nn_chi2_chi4::synapse0x28c6690() {
   return (neuron0x28c1cf0()*0.0339176);
}

double NNfunction_nn_chi2_chi4::synapse0x28c66d0() {
   return (neuron0x28c2030()*-0.352914);
}

double NNfunction_nn_chi2_chi4::synapse0x28c6710() {
   return (neuron0x28c2370()*-0.156248);
}

double NNfunction_nn_chi2_chi4::synapse0x28c6750() {
   return (neuron0x28c26b0()*0.00333894);
}

double NNfunction_nn_chi2_chi4::synapse0x28c6790() {
   return (neuron0x28c29f0()*-0.168145);
}

double NNfunction_nn_chi2_chi4::synapse0x28c67d0() {
   return (neuron0x28c2d30()*-0.0470554);
}

double NNfunction_nn_chi2_chi4::synapse0x28c6260() {
   return (neuron0x28c3070()*-0.0565088);
}

double NNfunction_nn_chi2_chi4::synapse0x28c62a0() {
   return (neuron0x28c35d0()*0.0620295);
}

double NNfunction_nn_chi2_chi4::synapse0x28aed70() {
   return (neuron0x28c37f0()*0.0201423);
}

double NNfunction_nn_chi2_chi4::synapse0x2688cc0() {
   return (neuron0x28c3b30()*-0.117944);
}

double NNfunction_nn_chi2_chi4::synapse0x2688d00() {
   return (neuron0x28c3e70()*0.00523999);
}

double NNfunction_nn_chi2_chi4::synapse0x27a4210() {
   return (neuron0x28c41b0()*-0.0361648);
}

double NNfunction_nn_chi2_chi4::synapse0x27a4250() {
   return (neuron0x28c44f0()*0.0179845);
}

double NNfunction_nn_chi2_chi4::synapse0x28bfa60() {
   return (neuron0x28c4830()*-0.762202);
}

double NNfunction_nn_chi2_chi4::synapse0x26895b0() {
   return (neuron0x28bfd00()*-0.0125356);
}

double NNfunction_nn_chi2_chi4::synapse0x28c5c90() {
   return (neuron0x28bffb0()*-0.0805936);
}

double NNfunction_nn_chi2_chi4::synapse0x28c5cd0() {
   return (neuron0x28c02f0()*-0.2053);
}

double NNfunction_nn_chi2_chi4::synapse0x28c5d10() {
   return (neuron0x28c0630()*-0.0148871);
}

double NNfunction_nn_chi2_chi4::synapse0x28c6920() {
   return (neuron0x28c0970()*0.0253923);
}

double NNfunction_nn_chi2_chi4::synapse0x28c6960() {
   return (neuron0x28c0cb0()*-0.0131182);
}

double NNfunction_nn_chi2_chi4::synapse0x28c69a0() {
   return (neuron0x28c0ff0()*0.0219818);
}

double NNfunction_nn_chi2_chi4::synapse0x28c69e0() {
   return (neuron0x28c1330()*-0.0312415);
}

double NNfunction_nn_chi2_chi4::synapse0x28c6a20() {
   return (neuron0x28c1670()*0.00943018);
}

double NNfunction_nn_chi2_chi4::synapse0x28c6a60() {
   return (neuron0x28c19b0()*0.0432367);
}

double NNfunction_nn_chi2_chi4::synapse0x28c6aa0() {
   return (neuron0x28c1cf0()*-0.00446165);
}

double NNfunction_nn_chi2_chi4::synapse0x28c6ae0() {
   return (neuron0x28c2030()*-0.0119781);
}

double NNfunction_nn_chi2_chi4::synapse0x28c6b20() {
   return (neuron0x28c2370()*-0.0706139);
}

double NNfunction_nn_chi2_chi4::synapse0x28c6b60() {
   return (neuron0x28c26b0()*0.0124142);
}

double NNfunction_nn_chi2_chi4::synapse0x28c6ba0() {
   return (neuron0x28c29f0()*0.0666937);
}

double NNfunction_nn_chi2_chi4::synapse0x28c6be0() {
   return (neuron0x28c2d30()*0.0102408);
}

double NNfunction_nn_chi2_chi4::synapse0x28bfaa0() {
   return (neuron0x28c3070()*0.0480107);
}

double NNfunction_nn_chi2_chi4::synapse0x28bfae0() {
   return (neuron0x28c35d0()*0.0116198);
}

double NNfunction_nn_chi2_chi4::synapse0x28bfb20() {
   return (neuron0x28c37f0()*0.022426);
}

double NNfunction_nn_chi2_chi4::synapse0x28c6d30() {
   return (neuron0x28c3b30()*0.0111044);
}

double NNfunction_nn_chi2_chi4::synapse0x28c6d70() {
   return (neuron0x28c3e70()*-0.00424048);
}

double NNfunction_nn_chi2_chi4::synapse0x28c6db0() {
   return (neuron0x28c41b0()*-0.0251674);
}

double NNfunction_nn_chi2_chi4::synapse0x28c6df0() {
   return (neuron0x28c44f0()*0.0060498);
}

double NNfunction_nn_chi2_chi4::synapse0x28c6e30() {
   return (neuron0x28c4830()*-7.7186);
}

double NNfunction_nn_chi2_chi4::synapse0x28c71b0() {
   return (neuron0x28bfd00()*0.00828355);
}

double NNfunction_nn_chi2_chi4::synapse0x28c71f0() {
   return (neuron0x28bffb0()*-0.630399);
}

double NNfunction_nn_chi2_chi4::synapse0x28c7230() {
   return (neuron0x28c02f0()*1.02381);
}

double NNfunction_nn_chi2_chi4::synapse0x28c7270() {
   return (neuron0x28c0630()*0.125417);
}

double NNfunction_nn_chi2_chi4::synapse0x28c72b0() {
   return (neuron0x28c0970()*-0.0179053);
}

double NNfunction_nn_chi2_chi4::synapse0x28c72f0() {
   return (neuron0x28c0cb0()*0.187567);
}

double NNfunction_nn_chi2_chi4::synapse0x28c7330() {
   return (neuron0x28c0ff0()*-0.185014);
}

double NNfunction_nn_chi2_chi4::synapse0x28c7370() {
   return (neuron0x28c1330()*-0.12726);
}

double NNfunction_nn_chi2_chi4::synapse0x28c73b0() {
   return (neuron0x28c1670()*0.179502);
}

double NNfunction_nn_chi2_chi4::synapse0x28c73f0() {
   return (neuron0x28c19b0()*-0.437725);
}

double NNfunction_nn_chi2_chi4::synapse0x28c7430() {
   return (neuron0x28c1cf0()*-0.0538358);
}

double NNfunction_nn_chi2_chi4::synapse0x28c7470() {
   return (neuron0x28c2030()*0.0441189);
}

double NNfunction_nn_chi2_chi4::synapse0x28c74b0() {
   return (neuron0x28c2370()*0.444341);
}

double NNfunction_nn_chi2_chi4::synapse0x28c74f0() {
   return (neuron0x28c26b0()*0.166005);
}

double NNfunction_nn_chi2_chi4::synapse0x28c7530() {
   return (neuron0x28c29f0()*0.140478);
}

double NNfunction_nn_chi2_chi4::synapse0x28c7570() {
   return (neuron0x28c2d30()*0.234423);
}

double NNfunction_nn_chi2_chi4::synapse0x28c7000() {
   return (neuron0x28c3070()*0.0983255);
}

double NNfunction_nn_chi2_chi4::synapse0x28c7040() {
   return (neuron0x28c35d0()*0.0278103);
}

double NNfunction_nn_chi2_chi4::synapse0x28c76c0() {
   return (neuron0x28c37f0()*0.361173);
}

double NNfunction_nn_chi2_chi4::synapse0x28c7700() {
   return (neuron0x28c3b30()*0.138249);
}

double NNfunction_nn_chi2_chi4::synapse0x28c7740() {
   return (neuron0x28c3e70()*-0.130695);
}

double NNfunction_nn_chi2_chi4::synapse0x28c7780() {
   return (neuron0x28c41b0()*0.0574289);
}

double NNfunction_nn_chi2_chi4::synapse0x28c77c0() {
   return (neuron0x28c44f0()*-0.0983258);
}

double NNfunction_nn_chi2_chi4::synapse0x28c7800() {
   return (neuron0x28c4830()*-0.891178);
}

double NNfunction_nn_chi2_chi4::synapse0x28c7b80() {
   return (neuron0x28bfd00()*0.615533);
}

double NNfunction_nn_chi2_chi4::synapse0x28c7bc0() {
   return (neuron0x28bffb0()*0.700392);
}

double NNfunction_nn_chi2_chi4::synapse0x28c7c00() {
   return (neuron0x28c02f0()*-1.26669);
}

double NNfunction_nn_chi2_chi4::synapse0x28c7c40() {
   return (neuron0x28c0630()*-1.25843);
}

double NNfunction_nn_chi2_chi4::synapse0x28c7c80() {
   return (neuron0x28c0970()*0.632772);
}

double NNfunction_nn_chi2_chi4::synapse0x28c7cc0() {
   return (neuron0x28c0cb0()*-1.12939);
}

double NNfunction_nn_chi2_chi4::synapse0x28c7d00() {
   return (neuron0x28c0ff0()*0.604177);
}

double NNfunction_nn_chi2_chi4::synapse0x28c7d40() {
   return (neuron0x28c1330()*0.229789);
}

double NNfunction_nn_chi2_chi4::synapse0x28c7d80() {
   return (neuron0x28c1670()*-0.378245);
}

double NNfunction_nn_chi2_chi4::synapse0x2689010() {
   return (neuron0x28c19b0()*-0.819984);
}

double NNfunction_nn_chi2_chi4::synapse0x2689050() {
   return (neuron0x28c1cf0()*0.207517);
}

double NNfunction_nn_chi2_chi4::synapse0x2689090() {
   return (neuron0x28c2030()*-1.245);
}

double NNfunction_nn_chi2_chi4::synapse0x26890d0() {
   return (neuron0x28c2370()*-0.0417354);
}

double NNfunction_nn_chi2_chi4::synapse0x2689110() {
   return (neuron0x28c26b0()*0.195802);
}

double NNfunction_nn_chi2_chi4::synapse0x2689150() {
   return (neuron0x28c29f0()*-0.380058);
}

double NNfunction_nn_chi2_chi4::synapse0x2689190() {
   return (neuron0x28c2d30()*-0.43388);
}

double NNfunction_nn_chi2_chi4::synapse0x28c79d0() {
   return (neuron0x28c3070()*-0.0669982);
}

double NNfunction_nn_chi2_chi4::synapse0x28c7a10() {
   return (neuron0x28c35d0()*0.138816);
}

double NNfunction_nn_chi2_chi4::synapse0x26892e0() {
   return (neuron0x28c37f0()*0.460096);
}

double NNfunction_nn_chi2_chi4::synapse0x2689320() {
   return (neuron0x28c3b30()*-0.31423);
}

double NNfunction_nn_chi2_chi4::synapse0x2689360() {
   return (neuron0x28c3e70()*0.399891);
}

double NNfunction_nn_chi2_chi4::synapse0x26893a0() {
   return (neuron0x28c41b0()*-0.0390131);
}

double NNfunction_nn_chi2_chi4::synapse0x26893e0() {
   return (neuron0x28c44f0()*-0.160903);
}

double NNfunction_nn_chi2_chi4::synapse0x28c85d0() {
   return (neuron0x28c4830()*2.04521);
}

double NNfunction_nn_chi2_chi4::synapse0x28c8950() {
   return (neuron0x28bfd00()*0.532253);
}

double NNfunction_nn_chi2_chi4::synapse0x28c8990() {
   return (neuron0x28bffb0()*-2.27171);
}

double NNfunction_nn_chi2_chi4::synapse0x28c89d0() {
   return (neuron0x28c02f0()*0.903921);
}

double NNfunction_nn_chi2_chi4::synapse0x28c8a10() {
   return (neuron0x28c0630()*0.0313562);
}

double NNfunction_nn_chi2_chi4::synapse0x28c8a50() {
   return (neuron0x28c0970()*0.91469);
}

double NNfunction_nn_chi2_chi4::synapse0x28c8a90() {
   return (neuron0x28c0cb0()*0.0565281);
}

double NNfunction_nn_chi2_chi4::synapse0x28c8ad0() {
   return (neuron0x28c0ff0()*1.20858);
}

double NNfunction_nn_chi2_chi4::synapse0x28c8b10() {
   return (neuron0x28c1330()*-1.46734);
}

double NNfunction_nn_chi2_chi4::synapse0x28c8b50() {
   return (neuron0x28c1670()*-0.823888);
}

double NNfunction_nn_chi2_chi4::synapse0x28c8b90() {
   return (neuron0x28c19b0()*-0.38672);
}

double NNfunction_nn_chi2_chi4::synapse0x28c8bd0() {
   return (neuron0x28c1cf0()*-0.588506);
}

double NNfunction_nn_chi2_chi4::synapse0x28c8c10() {
   return (neuron0x28c2030()*0.449504);
}

double NNfunction_nn_chi2_chi4::synapse0x28c8c50() {
   return (neuron0x28c2370()*2.0271);
}

double NNfunction_nn_chi2_chi4::synapse0x28c8c90() {
   return (neuron0x28c26b0()*2.71416);
}

double NNfunction_nn_chi2_chi4::synapse0x28c8cd0() {
   return (neuron0x28c29f0()*0.564816);
}

double NNfunction_nn_chi2_chi4::synapse0x28c8d10() {
   return (neuron0x28c2d30()*-0.755361);
}

double NNfunction_nn_chi2_chi4::synapse0x28c87a0() {
   return (neuron0x28c3070()*-1.55329);
}

double NNfunction_nn_chi2_chi4::synapse0x28c87e0() {
   return (neuron0x28c35d0()*0.550354);
}

double NNfunction_nn_chi2_chi4::synapse0x28c8e60() {
   return (neuron0x28c37f0()*0.218456);
}

double NNfunction_nn_chi2_chi4::synapse0x28c8ea0() {
   return (neuron0x28c3b30()*0.593622);
}

double NNfunction_nn_chi2_chi4::synapse0x28c8ee0() {
   return (neuron0x28c3e70()*-0.165104);
}

double NNfunction_nn_chi2_chi4::synapse0x28c8f20() {
   return (neuron0x28c41b0()*-0.323255);
}

double NNfunction_nn_chi2_chi4::synapse0x28c8f60() {
   return (neuron0x28c44f0()*0.554302);
}

double NNfunction_nn_chi2_chi4::synapse0x28c8fa0() {
   return (neuron0x28c4830()*0.265034);
}

double NNfunction_nn_chi2_chi4::synapse0x28c9320() {
   return (neuron0x28bfd00()*0.0344564);
}

double NNfunction_nn_chi2_chi4::synapse0x28c9360() {
   return (neuron0x28bffb0()*-0.179712);
}

double NNfunction_nn_chi2_chi4::synapse0x28c93a0() {
   return (neuron0x28c02f0()*-1.90846);
}

double NNfunction_nn_chi2_chi4::synapse0x28c93e0() {
   return (neuron0x28c0630()*-0.0634762);
}

double NNfunction_nn_chi2_chi4::synapse0x28c9420() {
   return (neuron0x28c0970()*0.0312205);
}

double NNfunction_nn_chi2_chi4::synapse0x28c9460() {
   return (neuron0x28c0cb0()*-0.0749053);
}

double NNfunction_nn_chi2_chi4::synapse0x28c94a0() {
   return (neuron0x28c0ff0()*0.0210707);
}

double NNfunction_nn_chi2_chi4::synapse0x28c94e0() {
   return (neuron0x28c1330()*-0.0247483);
}

double NNfunction_nn_chi2_chi4::synapse0x28c9520() {
   return (neuron0x28c1670()*0.0835058);
}

double NNfunction_nn_chi2_chi4::synapse0x28c9560() {
   return (neuron0x28c19b0()*-0.2134);
}

double NNfunction_nn_chi2_chi4::synapse0x28c95a0() {
   return (neuron0x28c1cf0()*0.120959);
}

double NNfunction_nn_chi2_chi4::synapse0x28c95e0() {
   return (neuron0x28c2030()*0.905789);
}

double NNfunction_nn_chi2_chi4::synapse0x28c9620() {
   return (neuron0x28c2370()*0.142938);
}

double NNfunction_nn_chi2_chi4::synapse0x28c9660() {
   return (neuron0x28c26b0()*-0.0831197);
}

double NNfunction_nn_chi2_chi4::synapse0x28c96a0() {
   return (neuron0x28c29f0()*-0.24243);
}

double NNfunction_nn_chi2_chi4::synapse0x28c96e0() {
   return (neuron0x28c2d30()*0.133937);
}

double NNfunction_nn_chi2_chi4::synapse0x28c9170() {
   return (neuron0x28c3070()*0.113204);
}

double NNfunction_nn_chi2_chi4::synapse0x28c91b0() {
   return (neuron0x28c35d0()*-0.0767698);
}

double NNfunction_nn_chi2_chi4::synapse0x28c9830() {
   return (neuron0x28c37f0()*-0.0609178);
}

double NNfunction_nn_chi2_chi4::synapse0x28c9870() {
   return (neuron0x28c3b30()*0.0102501);
}

double NNfunction_nn_chi2_chi4::synapse0x28c98b0() {
   return (neuron0x28c3e70()*0.018034);
}

double NNfunction_nn_chi2_chi4::synapse0x28c98f0() {
   return (neuron0x28c41b0()*-0.00276029);
}

double NNfunction_nn_chi2_chi4::synapse0x28c9930() {
   return (neuron0x28c44f0()*-0.0908982);
}

double NNfunction_nn_chi2_chi4::synapse0x28c9970() {
   return (neuron0x28c4830()*3.22237);
}

double NNfunction_nn_chi2_chi4::synapse0x28c34c0() {
   return (neuron0x28bfd00()*0.596967);
}

double NNfunction_nn_chi2_chi4::synapse0x28c3500() {
   return (neuron0x28bffb0()*-0.189122);
}

double NNfunction_nn_chi2_chi4::synapse0x28c3540() {
   return (neuron0x28c02f0()*0.840271);
}

double NNfunction_nn_chi2_chi4::synapse0x28c3580() {
   return (neuron0x28c0630()*-0.476214);
}

double NNfunction_nn_chi2_chi4::synapse0x28c9f00() {
   return (neuron0x28c0970()*0.401569);
}

double NNfunction_nn_chi2_chi4::synapse0x28c9f40() {
   return (neuron0x28c0cb0()*0.764646);
}

double NNfunction_nn_chi2_chi4::synapse0x28c9f80() {
   return (neuron0x28c0ff0()*-0.15431);
}

double NNfunction_nn_chi2_chi4::synapse0x28c9fc0() {
   return (neuron0x28c1330()*0.102688);
}

double NNfunction_nn_chi2_chi4::synapse0x28ca000() {
   return (neuron0x28c1670()*0.12671);
}

double NNfunction_nn_chi2_chi4::synapse0x28ca040() {
   return (neuron0x28c19b0()*-0.0820708);
}

double NNfunction_nn_chi2_chi4::synapse0x28ca080() {
   return (neuron0x28c1cf0()*1.04426);
}

double NNfunction_nn_chi2_chi4::synapse0x28ca0c0() {
   return (neuron0x28c2030()*1.32118);
}

double NNfunction_nn_chi2_chi4::synapse0x28ca100() {
   return (neuron0x28c2370()*0.460438);
}

double NNfunction_nn_chi2_chi4::synapse0x28ca140() {
   return (neuron0x28c26b0()*-0.703692);
}

double NNfunction_nn_chi2_chi4::synapse0x28ca180() {
   return (neuron0x28c29f0()*0.0497011);
}

double NNfunction_nn_chi2_chi4::synapse0x28ca1c0() {
   return (neuron0x28c2d30()*-1.49707);
}

double NNfunction_nn_chi2_chi4::synapse0x28c9b40() {
   return (neuron0x28c3070()*0.178661);
}

double NNfunction_nn_chi2_chi4::synapse0x28c9b80() {
   return (neuron0x28c35d0()*0.388939);
}

double NNfunction_nn_chi2_chi4::synapse0x28ca310() {
   return (neuron0x28c37f0()*0.59862);
}

double NNfunction_nn_chi2_chi4::synapse0x28ca350() {
   return (neuron0x28c3b30()*1.27632);
}

double NNfunction_nn_chi2_chi4::synapse0x28ca390() {
   return (neuron0x28c3e70()*0.249604);
}

double NNfunction_nn_chi2_chi4::synapse0x28ca3d0() {
   return (neuron0x28c41b0()*-0.443595);
}

double NNfunction_nn_chi2_chi4::synapse0x28ca410() {
   return (neuron0x28c44f0()*-0.182024);
}

double NNfunction_nn_chi2_chi4::synapse0x28ca450() {
   return (neuron0x28c4830()*-1.55333);
}

double NNfunction_nn_chi2_chi4::synapse0x28ca7d0() {
   return (neuron0x28bfd00()*-0.174732);
}

double NNfunction_nn_chi2_chi4::synapse0x28ca810() {
   return (neuron0x28bffb0()*0.794691);
}

double NNfunction_nn_chi2_chi4::synapse0x28ca850() {
   return (neuron0x28c02f0()*0.953661);
}

double NNfunction_nn_chi2_chi4::synapse0x28ca890() {
   return (neuron0x28c0630()*-0.0902814);
}

double NNfunction_nn_chi2_chi4::synapse0x28ca8d0() {
   return (neuron0x28c0970()*0.292179);
}

double NNfunction_nn_chi2_chi4::synapse0x28ca910() {
   return (neuron0x28c0cb0()*0.0561735);
}

double NNfunction_nn_chi2_chi4::synapse0x28ca950() {
   return (neuron0x28c0ff0()*-0.00871697);
}

double NNfunction_nn_chi2_chi4::synapse0x28ca990() {
   return (neuron0x28c1330()*-0.357416);
}

double NNfunction_nn_chi2_chi4::synapse0x28ca9d0() {
   return (neuron0x28c1670()*1.07866);
}

double NNfunction_nn_chi2_chi4::synapse0x28caa10() {
   return (neuron0x28c19b0()*-0.568478);
}

double NNfunction_nn_chi2_chi4::synapse0x28caa50() {
   return (neuron0x28c1cf0()*-0.249292);
}

double NNfunction_nn_chi2_chi4::synapse0x28caa90() {
   return (neuron0x28c2030()*-1.21646);
}

double NNfunction_nn_chi2_chi4::synapse0x28caad0() {
   return (neuron0x28c2370()*-0.470793);
}

double NNfunction_nn_chi2_chi4::synapse0x28cab10() {
   return (neuron0x28c26b0()*0.00307527);
}

double NNfunction_nn_chi2_chi4::synapse0x28cab50() {
   return (neuron0x28c29f0()*1.28607);
}

double NNfunction_nn_chi2_chi4::synapse0x28cab90() {
   return (neuron0x28c2d30()*0.472739);
}

double NNfunction_nn_chi2_chi4::synapse0x28ca620() {
   return (neuron0x28c3070()*0.0362459);
}

double NNfunction_nn_chi2_chi4::synapse0x28ca660() {
   return (neuron0x28c35d0()*-0.227873);
}

double NNfunction_nn_chi2_chi4::synapse0x28cace0() {
   return (neuron0x28c37f0()*0.201124);
}

double NNfunction_nn_chi2_chi4::synapse0x28cad20() {
   return (neuron0x28c3b30()*-0.28639);
}

double NNfunction_nn_chi2_chi4::synapse0x28cad60() {
   return (neuron0x28c3e70()*-0.400226);
}

double NNfunction_nn_chi2_chi4::synapse0x28cada0() {
   return (neuron0x28c41b0()*-0.0963155);
}

double NNfunction_nn_chi2_chi4::synapse0x28cade0() {
   return (neuron0x28c44f0()*-0.53652);
}

double NNfunction_nn_chi2_chi4::synapse0x28cae20() {
   return (neuron0x28c4830()*0.971818);
}

double NNfunction_nn_chi2_chi4::synapse0x28cb1a0() {
   return (neuron0x28bfd00()*-0.282789);
}

double NNfunction_nn_chi2_chi4::synapse0x28cb1e0() {
   return (neuron0x28bffb0()*-2.74708);
}

double NNfunction_nn_chi2_chi4::synapse0x28cb220() {
   return (neuron0x28c02f0()*-2.32358);
}

double NNfunction_nn_chi2_chi4::synapse0x28cb260() {
   return (neuron0x28c0630()*-0.189563);
}

double NNfunction_nn_chi2_chi4::synapse0x28cb2a0() {
   return (neuron0x28c0970()*-0.131647);
}

double NNfunction_nn_chi2_chi4::synapse0x28cb2e0() {
   return (neuron0x28c0cb0()*-0.030045);
}

double NNfunction_nn_chi2_chi4::synapse0x28cb320() {
   return (neuron0x28c0ff0()*0.0316982);
}

double NNfunction_nn_chi2_chi4::synapse0x28cb360() {
   return (neuron0x28c1330()*0.235347);
}

double NNfunction_nn_chi2_chi4::synapse0x28cb3a0() {
   return (neuron0x28c1670()*-0.0207154);
}

double NNfunction_nn_chi2_chi4::synapse0x28cb3e0() {
   return (neuron0x28c19b0()*-0.06411);
}

double NNfunction_nn_chi2_chi4::synapse0x28cb420() {
   return (neuron0x28c1cf0()*-0.0251524);
}

double NNfunction_nn_chi2_chi4::synapse0x28cb460() {
   return (neuron0x28c2030()*1.40316);
}

double NNfunction_nn_chi2_chi4::synapse0x28cb4a0() {
   return (neuron0x28c2370()*-0.166233);
}

double NNfunction_nn_chi2_chi4::synapse0x28cb4e0() {
   return (neuron0x28c26b0()*-0.234193);
}

double NNfunction_nn_chi2_chi4::synapse0x28cb520() {
   return (neuron0x28c29f0()*-0.560666);
}

double NNfunction_nn_chi2_chi4::synapse0x28cb560() {
   return (neuron0x28c2d30()*0.196652);
}

double NNfunction_nn_chi2_chi4::synapse0x28caff0() {
   return (neuron0x28c3070()*0.0155926);
}

double NNfunction_nn_chi2_chi4::synapse0x28cb030() {
   return (neuron0x28c35d0()*0.199864);
}

double NNfunction_nn_chi2_chi4::synapse0x28c7dc0() {
   return (neuron0x28c37f0()*-0.20741);
}

double NNfunction_nn_chi2_chi4::synapse0x28c7e00() {
   return (neuron0x28c3b30()*0.146997);
}

double NNfunction_nn_chi2_chi4::synapse0x28c7e40() {
   return (neuron0x28c3e70()*-0.140419);
}

double NNfunction_nn_chi2_chi4::synapse0x28c7e80() {
   return (neuron0x28c41b0()*0.0956688);
}

double NNfunction_nn_chi2_chi4::synapse0x28c7ec0() {
   return (neuron0x28c44f0()*-0.166923);
}

double NNfunction_nn_chi2_chi4::synapse0x28c7f00() {
   return (neuron0x28c4830()*1.67055);
}

double NNfunction_nn_chi2_chi4::synapse0x28c8280() {
   return (neuron0x28bfd00()*0.434061);
}

double NNfunction_nn_chi2_chi4::synapse0x28c82c0() {
   return (neuron0x28bffb0()*0.299812);
}

double NNfunction_nn_chi2_chi4::synapse0x28c8300() {
   return (neuron0x28c02f0()*1.35956);
}

double NNfunction_nn_chi2_chi4::synapse0x28c8340() {
   return (neuron0x28c0630()*-0.158462);
}

double NNfunction_nn_chi2_chi4::synapse0x28c8380() {
   return (neuron0x28c0970()*0.0140893);
}

double NNfunction_nn_chi2_chi4::synapse0x28c83c0() {
   return (neuron0x28c0cb0()*-0.608605);
}

double NNfunction_nn_chi2_chi4::synapse0x28c8400() {
   return (neuron0x28c0ff0()*-0.384981);
}

double NNfunction_nn_chi2_chi4::synapse0x28c8440() {
   return (neuron0x28c1330()*-1.34929);
}

double NNfunction_nn_chi2_chi4::synapse0x28c8480() {
   return (neuron0x28c1670()*0.754518);
}

double NNfunction_nn_chi2_chi4::synapse0x28c84c0() {
   return (neuron0x28c19b0()*-0.697396);
}

double NNfunction_nn_chi2_chi4::synapse0x28c8500() {
   return (neuron0x28c1cf0()*-0.439425);
}

double NNfunction_nn_chi2_chi4::synapse0x28c8540() {
   return (neuron0x28c2030()*-0.428249);
}

double NNfunction_nn_chi2_chi4::synapse0x28c8580() {
   return (neuron0x28c2370()*-0.302607);
}

double NNfunction_nn_chi2_chi4::synapse0x28cc6c0() {
   return (neuron0x28c26b0()*-0.700031);
}

double NNfunction_nn_chi2_chi4::synapse0x28cc700() {
   return (neuron0x28c29f0()*1.93091);
}

double NNfunction_nn_chi2_chi4::synapse0x28cc740() {
   return (neuron0x28c2d30()*0.312665);
}

double NNfunction_nn_chi2_chi4::synapse0x28c80d0() {
   return (neuron0x28c3070()*0.28831);
}

double NNfunction_nn_chi2_chi4::synapse0x28c8110() {
   return (neuron0x28c35d0()*-0.592521);
}

double NNfunction_nn_chi2_chi4::synapse0x28cc890() {
   return (neuron0x28c37f0()*0.156943);
}

double NNfunction_nn_chi2_chi4::synapse0x28cc8d0() {
   return (neuron0x28c3b30()*-1.19685);
}

double NNfunction_nn_chi2_chi4::synapse0x28cc910() {
   return (neuron0x28c3e70()*-0.322777);
}

double NNfunction_nn_chi2_chi4::synapse0x28cc950() {
   return (neuron0x28c41b0()*-0.804505);
}

double NNfunction_nn_chi2_chi4::synapse0x28cc990() {
   return (neuron0x28c44f0()*-0.509137);
}

double NNfunction_nn_chi2_chi4::synapse0x28cc9d0() {
   return (neuron0x28c4830()*1.10439);
}

double NNfunction_nn_chi2_chi4::synapse0x28ccd50() {
   return (neuron0x28bfd00()*0.086702);
}

double NNfunction_nn_chi2_chi4::synapse0x28ccd90() {
   return (neuron0x28bffb0()*-2.777);
}

double NNfunction_nn_chi2_chi4::synapse0x28ccdd0() {
   return (neuron0x28c02f0()*2.97357);
}

double NNfunction_nn_chi2_chi4::synapse0x28cce10() {
   return (neuron0x28c0630()*0.213553);
}

double NNfunction_nn_chi2_chi4::synapse0x28cce50() {
   return (neuron0x28c0970()*0.0265632);
}

double NNfunction_nn_chi2_chi4::synapse0x28cce90() {
   return (neuron0x28c0cb0()*0.334549);
}

double NNfunction_nn_chi2_chi4::synapse0x28cced0() {
   return (neuron0x28c0ff0()*0.0120846);
}

double NNfunction_nn_chi2_chi4::synapse0x28ccf10() {
   return (neuron0x28c1330()*0.251239);
}

double NNfunction_nn_chi2_chi4::synapse0x28ccf50() {
   return (neuron0x28c1670()*0.0435016);
}

double NNfunction_nn_chi2_chi4::synapse0x28ccf90() {
   return (neuron0x28c19b0()*0.506826);
}

double NNfunction_nn_chi2_chi4::synapse0x28ccfd0() {
   return (neuron0x28c1cf0()*-0.220031);
}

double NNfunction_nn_chi2_chi4::synapse0x28cd010() {
   return (neuron0x28c2030()*0.335244);
}

double NNfunction_nn_chi2_chi4::synapse0x28cd050() {
   return (neuron0x28c2370()*-0.0819632);
}

double NNfunction_nn_chi2_chi4::synapse0x28cd090() {
   return (neuron0x28c26b0()*0.324018);
}

double NNfunction_nn_chi2_chi4::synapse0x28cd0d0() {
   return (neuron0x28c29f0()*0.0172048);
}

double NNfunction_nn_chi2_chi4::synapse0x28cd110() {
   return (neuron0x28c2d30()*0.294363);
}

double NNfunction_nn_chi2_chi4::synapse0x28ccba0() {
   return (neuron0x28c3070()*-0.0722816);
}

double NNfunction_nn_chi2_chi4::synapse0x28ccbe0() {
   return (neuron0x28c35d0()*0.286645);
}

double NNfunction_nn_chi2_chi4::synapse0x28cd260() {
   return (neuron0x28c37f0()*-0.23271);
}

double NNfunction_nn_chi2_chi4::synapse0x28cd2a0() {
   return (neuron0x28c3b30()*0.0783999);
}

double NNfunction_nn_chi2_chi4::synapse0x28cd2e0() {
   return (neuron0x28c3e70()*-0.0406371);
}

double NNfunction_nn_chi2_chi4::synapse0x28cd320() {
   return (neuron0x28c41b0()*0.0599554);
}

double NNfunction_nn_chi2_chi4::synapse0x28cd360() {
   return (neuron0x28c44f0()*0.0403691);
}

double NNfunction_nn_chi2_chi4::synapse0x28cd3a0() {
   return (neuron0x28c4830()*-0.755281);
}

double NNfunction_nn_chi2_chi4::synapse0x28cd720() {
   return (neuron0x28bfd00()*0.714432);
}

double NNfunction_nn_chi2_chi4::synapse0x28cd760() {
   return (neuron0x28bffb0()*2.60229);
}

double NNfunction_nn_chi2_chi4::synapse0x28cd7a0() {
   return (neuron0x28c02f0()*1.55449);
}

double NNfunction_nn_chi2_chi4::synapse0x28cd7e0() {
   return (neuron0x28c0630()*-0.122489);
}

double NNfunction_nn_chi2_chi4::synapse0x28cd820() {
   return (neuron0x28c0970()*-0.343468);
}

double NNfunction_nn_chi2_chi4::synapse0x28cd860() {
   return (neuron0x28c0cb0()*-0.952205);
}

double NNfunction_nn_chi2_chi4::synapse0x28cd8a0() {
   return (neuron0x28c0ff0()*-0.299488);
}

double NNfunction_nn_chi2_chi4::synapse0x28cd8e0() {
   return (neuron0x28c1330()*-0.474289);
}

double NNfunction_nn_chi2_chi4::synapse0x28cd920() {
   return (neuron0x28c1670()*0.288218);
}

double NNfunction_nn_chi2_chi4::synapse0x28cd960() {
   return (neuron0x28c19b0()*1.6033);
}

double NNfunction_nn_chi2_chi4::synapse0x28cd9a0() {
   return (neuron0x28c1cf0()*-0.0644893);
}

double NNfunction_nn_chi2_chi4::synapse0x28cd9e0() {
   return (neuron0x28c2030()*-2.39718);
}

double NNfunction_nn_chi2_chi4::synapse0x28cda20() {
   return (neuron0x28c2370()*-1.42355);
}

double NNfunction_nn_chi2_chi4::synapse0x28cda60() {
   return (neuron0x28c26b0()*-1.89526);
}

double NNfunction_nn_chi2_chi4::synapse0x28cdaa0() {
   return (neuron0x28c29f0()*0.105708);
}

double NNfunction_nn_chi2_chi4::synapse0x28cdae0() {
   return (neuron0x28c2d30()*-0.767616);
}

double NNfunction_nn_chi2_chi4::synapse0x28cd570() {
   return (neuron0x28c3070()*-0.337589);
}

double NNfunction_nn_chi2_chi4::synapse0x28cd5b0() {
   return (neuron0x28c35d0()*-1.06405);
}

double NNfunction_nn_chi2_chi4::synapse0x28cdc30() {
   return (neuron0x28c37f0()*-1.05869);
}

double NNfunction_nn_chi2_chi4::synapse0x28cdc70() {
   return (neuron0x28c3b30()*-0.363255);
}

double NNfunction_nn_chi2_chi4::synapse0x28cdcb0() {
   return (neuron0x28c3e70()*0.69018);
}

double NNfunction_nn_chi2_chi4::synapse0x28cdcf0() {
   return (neuron0x28c41b0()*0.468437);
}

double NNfunction_nn_chi2_chi4::synapse0x28cdd30() {
   return (neuron0x28c44f0()*0.244218);
}

double NNfunction_nn_chi2_chi4::synapse0x28cdd70() {
   return (neuron0x28c4830()*2.01091);
}

double NNfunction_nn_chi2_chi4::synapse0x28ce0f0() {
   return (neuron0x28bfd00()*-0.694351);
}

double NNfunction_nn_chi2_chi4::synapse0x28ce130() {
   return (neuron0x28bffb0()*-2.54744);
}

double NNfunction_nn_chi2_chi4::synapse0x28ce170() {
   return (neuron0x28c02f0()*1.55389);
}

double NNfunction_nn_chi2_chi4::synapse0x28ce1b0() {
   return (neuron0x28c0630()*0.0567968);
}

double NNfunction_nn_chi2_chi4::synapse0x28ce1f0() {
   return (neuron0x28c0970()*0.0266666);
}

double NNfunction_nn_chi2_chi4::synapse0x28ce230() {
   return (neuron0x28c0cb0()*-0.157423);
}

double NNfunction_nn_chi2_chi4::synapse0x28ce270() {
   return (neuron0x28c0ff0()*-0.182096);
}

double NNfunction_nn_chi2_chi4::synapse0x28ce2b0() {
   return (neuron0x28c1330()*0.0401918);
}

double NNfunction_nn_chi2_chi4::synapse0x28ce2f0() {
   return (neuron0x28c1670()*-0.200597);
}

double NNfunction_nn_chi2_chi4::synapse0x28ce330() {
   return (neuron0x28c19b0()*-0.105264);
}

double NNfunction_nn_chi2_chi4::synapse0x28ce370() {
   return (neuron0x28c1cf0()*0.0429295);
}

double NNfunction_nn_chi2_chi4::synapse0x28ce3b0() {
   return (neuron0x28c2030()*0.276523);
}

double NNfunction_nn_chi2_chi4::synapse0x28ce3f0() {
   return (neuron0x28c2370()*-0.045267);
}

double NNfunction_nn_chi2_chi4::synapse0x28ce430() {
   return (neuron0x28c26b0()*-0.332468);
}

double NNfunction_nn_chi2_chi4::synapse0x28ce470() {
   return (neuron0x28c29f0()*0.0863795);
}

double NNfunction_nn_chi2_chi4::synapse0x28ce4b0() {
   return (neuron0x28c2d30()*0.0256558);
}

double NNfunction_nn_chi2_chi4::synapse0x28cdf40() {
   return (neuron0x28c3070()*-0.0218257);
}

double NNfunction_nn_chi2_chi4::synapse0x28cdf80() {
   return (neuron0x28c35d0()*-0.252697);
}

double NNfunction_nn_chi2_chi4::synapse0x28ce600() {
   return (neuron0x28c37f0()*-0.124234);
}

double NNfunction_nn_chi2_chi4::synapse0x28ce640() {
   return (neuron0x28c3b30()*-0.0200823);
}

double NNfunction_nn_chi2_chi4::synapse0x28ce680() {
   return (neuron0x28c3e70()*0.0931218);
}

double NNfunction_nn_chi2_chi4::synapse0x28ce6c0() {
   return (neuron0x28c41b0()*0.12337);
}

double NNfunction_nn_chi2_chi4::synapse0x28ce700() {
   return (neuron0x28c44f0()*-0.0779037);
}

double NNfunction_nn_chi2_chi4::synapse0x28ce740() {
   return (neuron0x28c4830()*-1.5896);
}

double NNfunction_nn_chi2_chi4::synapse0x28ceac0() {
   return (neuron0x28bfd00()*0.0695311);
}

double NNfunction_nn_chi2_chi4::synapse0x28bfe90() {
   return (neuron0x28bffb0()*-2.58338);
}

double NNfunction_nn_chi2_chi4::synapse0x28bfed0() {
   return (neuron0x28c02f0()*-0.943779);
}

double NNfunction_nn_chi2_chi4::synapse0x28c01d0() {
   return (neuron0x28c0630()*0.0312221);
}

double NNfunction_nn_chi2_chi4::synapse0x28c0210() {
   return (neuron0x28c0970()*-0.191343);
}

double NNfunction_nn_chi2_chi4::synapse0x28c0510() {
   return (neuron0x28c0cb0()*0.0409619);
}

double NNfunction_nn_chi2_chi4::synapse0x28c0550() {
   return (neuron0x28c0ff0()*0.0156894);
}

double NNfunction_nn_chi2_chi4::synapse0x28c0850() {
   return (neuron0x28c1330()*0.0138623);
}

double NNfunction_nn_chi2_chi4::synapse0x28c0890() {
   return (neuron0x28c1670()*-0.091788);
}

double NNfunction_nn_chi2_chi4::synapse0x28c0b90() {
   return (neuron0x28c19b0()*0.0660817);
}

double NNfunction_nn_chi2_chi4::synapse0x28c0bd0() {
   return (neuron0x28c1cf0()*0.101463);
}

double NNfunction_nn_chi2_chi4::synapse0x28c0ed0() {
   return (neuron0x28c2030()*1.63595);
}

double NNfunction_nn_chi2_chi4::synapse0x28c0f10() {
   return (neuron0x28c2370()*-0.00321812);
}

double NNfunction_nn_chi2_chi4::synapse0x28c1210() {
   return (neuron0x28c26b0()*0.00776691);
}

double NNfunction_nn_chi2_chi4::synapse0x28c1250() {
   return (neuron0x28c29f0()*-0.00627913);
}

double NNfunction_nn_chi2_chi4::synapse0x28c1550() {
   return (neuron0x28c2d30()*-0.0287558);
}

double NNfunction_nn_chi2_chi4::synapse0x28c1590() {
   return (neuron0x28c3070()*0.00198715);
}

double NNfunction_nn_chi2_chi4::synapse0x28c1890() {
   return (neuron0x28c35d0()*0.069203);
}

double NNfunction_nn_chi2_chi4::synapse0x28c18d0() {
   return (neuron0x28c37f0()*0.14192);
}

double NNfunction_nn_chi2_chi4::synapse0x28c1bd0() {
   return (neuron0x28c3b30()*-0.0173672);
}

double NNfunction_nn_chi2_chi4::synapse0x28c1c10() {
   return (neuron0x28c3e70()*-0.0668263);
}

double NNfunction_nn_chi2_chi4::synapse0x28c1f10() {
   return (neuron0x28c41b0()*-0.041206);
}

double NNfunction_nn_chi2_chi4::synapse0x28c1f50() {
   return (neuron0x28c44f0()*-0.010066);
}

double NNfunction_nn_chi2_chi4::synapse0x28c2250() {
   return (neuron0x28c4830()*0.883022);
}

double NNfunction_nn_chi2_chi4::synapse0x28c2290() {
   return (neuron0x28bfd00()*-0.164715);
}

double NNfunction_nn_chi2_chi4::synapse0x28c2f50() {
   return (neuron0x28bffb0()*0.704731);
}

double NNfunction_nn_chi2_chi4::synapse0x28c2f90() {
   return (neuron0x28c02f0()*-2.44803);
}

double NNfunction_nn_chi2_chi4::synapse0x28ce910() {
   return (neuron0x28c0630()*-0.0742085);
}

double NNfunction_nn_chi2_chi4::synapse0x28ce950() {
   return (neuron0x28c0970()*-0.029265);
}

double NNfunction_nn_chi2_chi4::synapse0x28c3290() {
   return (neuron0x28c0cb0()*0.0576169);
}

double NNfunction_nn_chi2_chi4::synapse0x28c32d0() {
   return (neuron0x28c0ff0()*-0.00246116);
}

double NNfunction_nn_chi2_chi4::synapse0x267acb0() {
   return (neuron0x28c1330()*-0.0476158);
}

double NNfunction_nn_chi2_chi4::synapse0x267acf0() {
   return (neuron0x28c1670()*-0.0237321);
}

double NNfunction_nn_chi2_chi4::synapse0x28c3a10() {
   return (neuron0x28c19b0()*0.00156971);
}

double NNfunction_nn_chi2_chi4::synapse0x28c3a50() {
   return (neuron0x28c1cf0()*-0.0342384);
}

double NNfunction_nn_chi2_chi4::synapse0x28c3d50() {
   return (neuron0x28c2030()*-0.113326);
}

double NNfunction_nn_chi2_chi4::synapse0x28c3d90() {
   return (neuron0x28c2370()*-0.0111608);
}

double NNfunction_nn_chi2_chi4::synapse0x28c4090() {
   return (neuron0x28c26b0()*0.00100203);
}

double NNfunction_nn_chi2_chi4::synapse0x28c40d0() {
   return (neuron0x28c29f0()*0.0946254);
}

double NNfunction_nn_chi2_chi4::synapse0x28c43d0() {
   return (neuron0x28c2d30()*-0.0166297);
}

double NNfunction_nn_chi2_chi4::synapse0x28c4410() {
   return (neuron0x28c3070()*-0.0512452);
}

double NNfunction_nn_chi2_chi4::synapse0x28c4710() {
   return (neuron0x28c35d0()*0.0105748);
}

double NNfunction_nn_chi2_chi4::synapse0x28c4750() {
   return (neuron0x28c37f0()*0.0110247);
}

double NNfunction_nn_chi2_chi4::synapse0x28c4a50() {
   return (neuron0x28c3b30()*-0.0281467);
}

double NNfunction_nn_chi2_chi4::synapse0x28c4a90() {
   return (neuron0x28c3e70()*0.0161045);
}

double NNfunction_nn_chi2_chi4::synapse0x28c2590() {
   return (neuron0x28c41b0()*-0.039981);
}

double NNfunction_nn_chi2_chi4::synapse0x28c25d0() {
   return (neuron0x28c44f0()*0.00424436);
}

double NNfunction_nn_chi2_chi4::synapse0x28d0830() {
   return (neuron0x28c4830()*-3.47662);
}

double NNfunction_nn_chi2_chi4::synapse0x28d0bb0() {
   return (neuron0x28bfd00()*0.175344);
}

double NNfunction_nn_chi2_chi4::synapse0x28d0bf0() {
   return (neuron0x28bffb0()*-1.82258);
}

double NNfunction_nn_chi2_chi4::synapse0x28d0c30() {
   return (neuron0x28c02f0()*-0.705813);
}

double NNfunction_nn_chi2_chi4::synapse0x28d0c70() {
   return (neuron0x28c0630()*-0.0181517);
}

double NNfunction_nn_chi2_chi4::synapse0x28d0cb0() {
   return (neuron0x28c0970()*-0.0305428);
}

double NNfunction_nn_chi2_chi4::synapse0x28d0cf0() {
   return (neuron0x28c0cb0()*0.096817);
}

double NNfunction_nn_chi2_chi4::synapse0x28d0d30() {
   return (neuron0x28c0ff0()*-0.00971153);
}

double NNfunction_nn_chi2_chi4::synapse0x28d0d70() {
   return (neuron0x28c1330()*0.0306321);
}

double NNfunction_nn_chi2_chi4::synapse0x28d0db0() {
   return (neuron0x28c1670()*0.0195395);
}

double NNfunction_nn_chi2_chi4::synapse0x28d0df0() {
   return (neuron0x28c19b0()*0.0152944);
}

double NNfunction_nn_chi2_chi4::synapse0x28d0e30() {
   return (neuron0x28c1cf0()*-0.0149957);
}

double NNfunction_nn_chi2_chi4::synapse0x28d0e70() {
   return (neuron0x28c2030()*-0.180851);
}

double NNfunction_nn_chi2_chi4::synapse0x28d0eb0() {
   return (neuron0x28c2370()*-0.0674331);
}

double NNfunction_nn_chi2_chi4::synapse0x28d0ef0() {
   return (neuron0x28c26b0()*0.0130513);
}

double NNfunction_nn_chi2_chi4::synapse0x28d0f30() {
   return (neuron0x28c29f0()*0.230972);
}

double NNfunction_nn_chi2_chi4::synapse0x28d0f70() {
   return (neuron0x28c2d30()*0.0303878);
}

double NNfunction_nn_chi2_chi4::synapse0x28d0a00() {
   return (neuron0x28c3070()*0.0119181);
}

double NNfunction_nn_chi2_chi4::synapse0x28d0a40() {
   return (neuron0x28c35d0()*0.00143459);
}

double NNfunction_nn_chi2_chi4::synapse0x28d10c0() {
   return (neuron0x28c37f0()*0.00416531);
}

double NNfunction_nn_chi2_chi4::synapse0x28d1100() {
   return (neuron0x28c3b30()*0.00229131);
}

double NNfunction_nn_chi2_chi4::synapse0x28d1140() {
   return (neuron0x28c3e70()*-0.0792178);
}

double NNfunction_nn_chi2_chi4::synapse0x28d1180() {
   return (neuron0x28c41b0()*0.0028464);
}

double NNfunction_nn_chi2_chi4::synapse0x28d11c0() {
   return (neuron0x28c44f0()*-0.0101546);
}

double NNfunction_nn_chi2_chi4::synapse0x28d1200() {
   return (neuron0x28c4830()*0.755944);
}

double NNfunction_nn_chi2_chi4::synapse0x28d1580() {
   return (neuron0x28bfd00()*1.24717);
}

double NNfunction_nn_chi2_chi4::synapse0x28d15c0() {
   return (neuron0x28bffb0()*0.637186);
}

double NNfunction_nn_chi2_chi4::synapse0x28d1600() {
   return (neuron0x28c02f0()*0.618824);
}

double NNfunction_nn_chi2_chi4::synapse0x28d1640() {
   return (neuron0x28c0630()*0.542227);
}

double NNfunction_nn_chi2_chi4::synapse0x28d1680() {
   return (neuron0x28c0970()*0.0205182);
}

double NNfunction_nn_chi2_chi4::synapse0x28d16c0() {
   return (neuron0x28c0cb0()*0.952067);
}

double NNfunction_nn_chi2_chi4::synapse0x28d1700() {
   return (neuron0x28c0ff0()*-1.33986);
}

double NNfunction_nn_chi2_chi4::synapse0x28d1740() {
   return (neuron0x28c1330()*0.7029);
}

double NNfunction_nn_chi2_chi4::synapse0x28d1780() {
   return (neuron0x28c1670()*0.770292);
}

double NNfunction_nn_chi2_chi4::synapse0x28d17c0() {
   return (neuron0x28c19b0()*0.483365);
}

double NNfunction_nn_chi2_chi4::synapse0x28d1800() {
   return (neuron0x28c1cf0()*1.12538);
}

double NNfunction_nn_chi2_chi4::synapse0x28d1840() {
   return (neuron0x28c2030()*-0.206855);
}

double NNfunction_nn_chi2_chi4::synapse0x28d1880() {
   return (neuron0x28c2370()*0.182077);
}

double NNfunction_nn_chi2_chi4::synapse0x28d18c0() {
   return (neuron0x28c26b0()*0.0891507);
}

double NNfunction_nn_chi2_chi4::synapse0x28d1900() {
   return (neuron0x28c29f0()*0.148363);
}

double NNfunction_nn_chi2_chi4::synapse0x28d1940() {
   return (neuron0x28c2d30()*-0.391658);
}

double NNfunction_nn_chi2_chi4::synapse0x28d13d0() {
   return (neuron0x28c3070()*-0.412023);
}

double NNfunction_nn_chi2_chi4::synapse0x28d1410() {
   return (neuron0x28c35d0()*-0.60969);
}

double NNfunction_nn_chi2_chi4::synapse0x28d1a90() {
   return (neuron0x28c37f0()*-0.90178);
}

double NNfunction_nn_chi2_chi4::synapse0x28d1ad0() {
   return (neuron0x28c3b30()*2.3236);
}

double NNfunction_nn_chi2_chi4::synapse0x28d1b10() {
   return (neuron0x28c3e70()*-0.551639);
}

double NNfunction_nn_chi2_chi4::synapse0x28d1b50() {
   return (neuron0x28c41b0()*0.387023);
}

double NNfunction_nn_chi2_chi4::synapse0x28d1b90() {
   return (neuron0x28c44f0()*1.04308);
}

double NNfunction_nn_chi2_chi4::synapse0x28d1bd0() {
   return (neuron0x28c4830()*-1.07986);
}

double NNfunction_nn_chi2_chi4::synapse0x28d1f50() {
   return (neuron0x28bfd00()*-0.0632333);
}

double NNfunction_nn_chi2_chi4::synapse0x28d1f90() {
   return (neuron0x28bffb0()*-6.75299);
}

double NNfunction_nn_chi2_chi4::synapse0x28d1fd0() {
   return (neuron0x28c02f0()*-1.57072);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2010() {
   return (neuron0x28c0630()*-0.0689955);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2050() {
   return (neuron0x28c0970()*-0.0897322);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2090() {
   return (neuron0x28c0cb0()*0.109445);
}

double NNfunction_nn_chi2_chi4::synapse0x28d20d0() {
   return (neuron0x28c0ff0()*-0.176961);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2110() {
   return (neuron0x28c1330()*0.107821);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2150() {
   return (neuron0x28c1670()*-0.0680191);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2190() {
   return (neuron0x28c19b0()*-0.0118072);
}

double NNfunction_nn_chi2_chi4::synapse0x28d21d0() {
   return (neuron0x28c1cf0()*0.0198678);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2210() {
   return (neuron0x28c2030()*-0.16617);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2250() {
   return (neuron0x28c2370()*0.0013915);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2290() {
   return (neuron0x28c26b0()*0.20339);
}

double NNfunction_nn_chi2_chi4::synapse0x28d22d0() {
   return (neuron0x28c29f0()*0.420205);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2310() {
   return (neuron0x28c2d30()*-0.145141);
}

double NNfunction_nn_chi2_chi4::synapse0x28d1da0() {
   return (neuron0x28c3070()*0.0496279);
}

double NNfunction_nn_chi2_chi4::synapse0x28d1de0() {
   return (neuron0x28c35d0()*0.10676);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2460() {
   return (neuron0x28c37f0()*-0.011182);
}

double NNfunction_nn_chi2_chi4::synapse0x28d24a0() {
   return (neuron0x28c3b30()*-0.0134507);
}

double NNfunction_nn_chi2_chi4::synapse0x28d24e0() {
   return (neuron0x28c3e70()*-0.106469);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2520() {
   return (neuron0x28c41b0()*-0.0225556);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2560() {
   return (neuron0x28c44f0()*-0.0951775);
}

double NNfunction_nn_chi2_chi4::synapse0x28d25a0() {
   return (neuron0x28c4830()*-8.79372);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2920() {
   return (neuron0x28bfd00()*1.02378);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2960() {
   return (neuron0x28bffb0()*-0.292508);
}

double NNfunction_nn_chi2_chi4::synapse0x28d29a0() {
   return (neuron0x28c02f0()*1.20887);
}

double NNfunction_nn_chi2_chi4::synapse0x28d29e0() {
   return (neuron0x28c0630()*0.342694);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2a20() {
   return (neuron0x28c0970()*-0.00527715);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2a60() {
   return (neuron0x28c0cb0()*-0.483576);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2aa0() {
   return (neuron0x28c0ff0()*0.1389);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2ae0() {
   return (neuron0x28c1330()*-0.246885);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2b20() {
   return (neuron0x28c1670()*-0.274265);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2b60() {
   return (neuron0x28c19b0()*-0.00433115);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2ba0() {
   return (neuron0x28c1cf0()*-0.483874);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2be0() {
   return (neuron0x28c2030()*-1.2689);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2c20() {
   return (neuron0x28c2370()*0.0603916);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2c60() {
   return (neuron0x28c26b0()*0.0748022);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2ca0() {
   return (neuron0x28c29f0()*0.22543);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2ce0() {
   return (neuron0x28c2d30()*-0.195318);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2770() {
   return (neuron0x28c3070()*-0.246599);
}

double NNfunction_nn_chi2_chi4::synapse0x28d27b0() {
   return (neuron0x28c35d0()*0.0140749);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2e30() {
   return (neuron0x28c37f0()*0.156624);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2e70() {
   return (neuron0x28c3b30()*-0.130742);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2eb0() {
   return (neuron0x28c3e70()*-0.31277);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2ef0() {
   return (neuron0x28c41b0()*0.0952791);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2f30() {
   return (neuron0x28c44f0()*-0.136592);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2f70() {
   return (neuron0x28c4830()*-0.241193);
}

double NNfunction_nn_chi2_chi4::synapse0x28d32f0() {
   return (neuron0x28bfd00()*0.587175);
}

double NNfunction_nn_chi2_chi4::synapse0x28d3330() {
   return (neuron0x28bffb0()*1.55452);
}

double NNfunction_nn_chi2_chi4::synapse0x28d3370() {
   return (neuron0x28c02f0()*0.658152);
}

double NNfunction_nn_chi2_chi4::synapse0x28d33b0() {
   return (neuron0x28c0630()*-0.581677);
}

double NNfunction_nn_chi2_chi4::synapse0x28d33f0() {
   return (neuron0x28c0970()*0.0175107);
}

double NNfunction_nn_chi2_chi4::synapse0x28d3430() {
   return (neuron0x28c0cb0()*-0.811242);
}

double NNfunction_nn_chi2_chi4::synapse0x28d3470() {
   return (neuron0x28c0ff0()*0.234934);
}

double NNfunction_nn_chi2_chi4::synapse0x28d34b0() {
   return (neuron0x28c1330()*-0.636754);
}

double NNfunction_nn_chi2_chi4::synapse0x28d34f0() {
   return (neuron0x28c1670()*0.223496);
}

double NNfunction_nn_chi2_chi4::synapse0x28cb6b0() {
   return (neuron0x28c19b0()*1.89167);
}

double NNfunction_nn_chi2_chi4::synapse0x28cb6f0() {
   return (neuron0x28c1cf0()*0.0313972);
}

double NNfunction_nn_chi2_chi4::synapse0x28cb730() {
   return (neuron0x28c2030()*-1.99832);
}

double NNfunction_nn_chi2_chi4::synapse0x28cb770() {
   return (neuron0x28c2370()*-0.306195);
}

double NNfunction_nn_chi2_chi4::synapse0x28cb7b0() {
   return (neuron0x28c26b0()*-1.46265);
}

double NNfunction_nn_chi2_chi4::synapse0x28cb7f0() {
   return (neuron0x28c29f0()*0.784923);
}

double NNfunction_nn_chi2_chi4::synapse0x28cb830() {
   return (neuron0x28c2d30()*-0.450901);
}

double NNfunction_nn_chi2_chi4::synapse0x28d3140() {
   return (neuron0x28c3070()*-0.897745);
}

double NNfunction_nn_chi2_chi4::synapse0x28d3180() {
   return (neuron0x28c35d0()*-0.604463);
}

double NNfunction_nn_chi2_chi4::synapse0x28cb980() {
   return (neuron0x28c37f0()*-0.0878649);
}

double NNfunction_nn_chi2_chi4::synapse0x28cb9c0() {
   return (neuron0x28c3b30()*-0.414354);
}

double NNfunction_nn_chi2_chi4::synapse0x28cba00() {
   return (neuron0x28c3e70()*0.451775);
}

double NNfunction_nn_chi2_chi4::synapse0x28cba40() {
   return (neuron0x28c41b0()*-0.111983);
}

double NNfunction_nn_chi2_chi4::synapse0x28cba80() {
   return (neuron0x28c44f0()*0.158033);
}

double NNfunction_nn_chi2_chi4::synapse0x28cbac0() {
   return (neuron0x28c4830()*0.583634);
}

double NNfunction_nn_chi2_chi4::synapse0x28cbe40() {
   return (neuron0x28bfd00()*1.74275);
}

double NNfunction_nn_chi2_chi4::synapse0x28cbe80() {
   return (neuron0x28bffb0()*2.9899);
}

double NNfunction_nn_chi2_chi4::synapse0x28cbec0() {
   return (neuron0x28c02f0()*-2.56677);
}

double NNfunction_nn_chi2_chi4::synapse0x28cbf00() {
   return (neuron0x28c0630()*-0.215791);
}

double NNfunction_nn_chi2_chi4::synapse0x28cbf40() {
   return (neuron0x28c0970()*0.00338619);
}

double NNfunction_nn_chi2_chi4::synapse0x28cbf80() {
   return (neuron0x28c0cb0()*0.23264);
}

double NNfunction_nn_chi2_chi4::synapse0x28cbfc0() {
   return (neuron0x28c0ff0()*0.0538159);
}

double NNfunction_nn_chi2_chi4::synapse0x28cc000() {
   return (neuron0x28c1330()*-0.489227);
}

double NNfunction_nn_chi2_chi4::synapse0x28cc040() {
   return (neuron0x28c1670()*-0.208274);
}

double NNfunction_nn_chi2_chi4::synapse0x28cc080() {
   return (neuron0x28c19b0()*1.0299);
}

double NNfunction_nn_chi2_chi4::synapse0x28cc0c0() {
   return (neuron0x28c1cf0()*-0.0140106);
}

double NNfunction_nn_chi2_chi4::synapse0x28cc100() {
   return (neuron0x28c2030()*1.05117);
}

double NNfunction_nn_chi2_chi4::synapse0x28cc140() {
   return (neuron0x28c2370()*0.269286);
}

double NNfunction_nn_chi2_chi4::synapse0x28cc180() {
   return (neuron0x28c26b0()*1.53252);
}

double NNfunction_nn_chi2_chi4::synapse0x28cc1c0() {
   return (neuron0x28c29f0()*-0.0666288);
}

double NNfunction_nn_chi2_chi4::synapse0x28cc200() {
   return (neuron0x28c2d30()*-0.520969);
}

double NNfunction_nn_chi2_chi4::synapse0x28cbc90() {
   return (neuron0x28c3070()*-0.756892);
}

double NNfunction_nn_chi2_chi4::synapse0x28cbcd0() {
   return (neuron0x28c35d0()*-0.20511);
}

double NNfunction_nn_chi2_chi4::synapse0x28cc350() {
   return (neuron0x28c37f0()*0.733552);
}

double NNfunction_nn_chi2_chi4::synapse0x28cc390() {
   return (neuron0x28c3b30()*0.174149);
}

double NNfunction_nn_chi2_chi4::synapse0x28cc3d0() {
   return (neuron0x28c3e70()*-0.160287);
}

double NNfunction_nn_chi2_chi4::synapse0x28cc410() {
   return (neuron0x28c41b0()*-0.592245);
}

double NNfunction_nn_chi2_chi4::synapse0x28cc450() {
   return (neuron0x28c44f0()*0.26103);
}

double NNfunction_nn_chi2_chi4::synapse0x28cc490() {
   return (neuron0x28c4830()*-0.838676);
}

double NNfunction_nn_chi2_chi4::synapse0x28cc660() {
   return (neuron0x28bfd00()*-0.145823);
}

double NNfunction_nn_chi2_chi4::synapse0x28d56f0() {
   return (neuron0x28bffb0()*0.00981318);
}

double NNfunction_nn_chi2_chi4::synapse0x28d5730() {
   return (neuron0x28c02f0()*0.87184);
}

double NNfunction_nn_chi2_chi4::synapse0x28d5770() {
   return (neuron0x28c0630()*0.0262833);
}

double NNfunction_nn_chi2_chi4::synapse0x28d57b0() {
   return (neuron0x28c0970()*-0.149344);
}

double NNfunction_nn_chi2_chi4::synapse0x28d57f0() {
   return (neuron0x28c0cb0()*0.166434);
}

double NNfunction_nn_chi2_chi4::synapse0x28d5830() {
   return (neuron0x28c0ff0()*0.136615);
}

double NNfunction_nn_chi2_chi4::synapse0x28d5870() {
   return (neuron0x28c1330()*0.00509813);
}

double NNfunction_nn_chi2_chi4::synapse0x28d58b0() {
   return (neuron0x28c1670()*-0.100455);
}

double NNfunction_nn_chi2_chi4::synapse0x28d58f0() {
   return (neuron0x28c19b0()*-0.199207);
}

double NNfunction_nn_chi2_chi4::synapse0x28d5930() {
   return (neuron0x28c1cf0()*-0.133609);
}

double NNfunction_nn_chi2_chi4::synapse0x28d5970() {
   return (neuron0x28c2030()*0.208473);
}

double NNfunction_nn_chi2_chi4::synapse0x28d59b0() {
   return (neuron0x28c2370()*0.167403);
}

double NNfunction_nn_chi2_chi4::synapse0x28d59f0() {
   return (neuron0x28c26b0()*-0.0124486);
}

double NNfunction_nn_chi2_chi4::synapse0x28d5a30() {
   return (neuron0x28c29f0()*-3.56302);
}

double NNfunction_nn_chi2_chi4::synapse0x28d5a70() {
   return (neuron0x28c2d30()*-0.189378);
}

double NNfunction_nn_chi2_chi4::synapse0x28d5540() {
   return (neuron0x28c3070()*-0.034989);
}

double NNfunction_nn_chi2_chi4::synapse0x28d5580() {
   return (neuron0x28c35d0()*0.139299);
}

double NNfunction_nn_chi2_chi4::synapse0x28d5bc0() {
   return (neuron0x28c37f0()*0.193938);
}

double NNfunction_nn_chi2_chi4::synapse0x28d5c00() {
   return (neuron0x28c3b30()*-0.0724205);
}

double NNfunction_nn_chi2_chi4::synapse0x28d5c40() {
   return (neuron0x28c3e70()*-0.171369);
}

double NNfunction_nn_chi2_chi4::synapse0x28d5c80() {
   return (neuron0x28c41b0()*-0.0288854);
}

double NNfunction_nn_chi2_chi4::synapse0x28d5cc0() {
   return (neuron0x28c44f0()*-0.0340052);
}

double NNfunction_nn_chi2_chi4::synapse0x28d5d00() {
   return (neuron0x28c4830()*0.322754);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6080() {
   return (neuron0x28bfd00()*-0.0830935);
}

double NNfunction_nn_chi2_chi4::synapse0x28d60c0() {
   return (neuron0x28bffb0()*0.933038);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6100() {
   return (neuron0x28c02f0()*-0.160176);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6140() {
   return (neuron0x28c0630()*-0.064007);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6180() {
   return (neuron0x28c0970()*0.267773);
}

double NNfunction_nn_chi2_chi4::synapse0x28d61c0() {
   return (neuron0x28c0cb0()*-0.13101);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6200() {
   return (neuron0x28c0ff0()*0.51265);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6240() {
   return (neuron0x28c1330()*0.984101);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6280() {
   return (neuron0x28c1670()*0.348168);
}

double NNfunction_nn_chi2_chi4::synapse0x28d62c0() {
   return (neuron0x28c19b0()*0.00938069);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6300() {
   return (neuron0x28c1cf0()*0.107031);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6340() {
   return (neuron0x28c2030()*0.789558);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6380() {
   return (neuron0x28c2370()*0.262875);
}

double NNfunction_nn_chi2_chi4::synapse0x28d63c0() {
   return (neuron0x28c26b0()*0.249348);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6400() {
   return (neuron0x28c29f0()*0.493732);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6440() {
   return (neuron0x28c2d30()*1.25994);
}

double NNfunction_nn_chi2_chi4::synapse0x28d5ed0() {
   return (neuron0x28c3070()*-0.0157728);
}

double NNfunction_nn_chi2_chi4::synapse0x28d5f10() {
   return (neuron0x28c35d0()*0.589524);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6590() {
   return (neuron0x28c37f0()*-0.762406);
}

double NNfunction_nn_chi2_chi4::synapse0x28d65d0() {
   return (neuron0x28c3b30()*0.421035);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6610() {
   return (neuron0x28c3e70()*-0.260661);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6650() {
   return (neuron0x28c41b0()*0.233723);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6690() {
   return (neuron0x28c44f0()*-0.0122105);
}

double NNfunction_nn_chi2_chi4::synapse0x28d66d0() {
   return (neuron0x28c4830()*1.32194);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6a50() {
   return (neuron0x28bfd00()*1.30118);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6a90() {
   return (neuron0x28bffb0()*0.890695);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6ad0() {
   return (neuron0x28c02f0()*-0.33416);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6b10() {
   return (neuron0x28c0630()*0.430706);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6b50() {
   return (neuron0x28c0970()*0.727118);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6b90() {
   return (neuron0x28c0cb0()*0.903897);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6bd0() {
   return (neuron0x28c0ff0()*1.96665);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6c10() {
   return (neuron0x28c1330()*0.136668);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6c50() {
   return (neuron0x28c1670()*0.591092);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6c90() {
   return (neuron0x28c19b0()*-0.31215);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6cd0() {
   return (neuron0x28c1cf0()*0.479147);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6d10() {
   return (neuron0x28c2030()*-0.115502);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6d50() {
   return (neuron0x28c2370()*-1.13852);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6d90() {
   return (neuron0x28c26b0()*-0.0568777);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6dd0() {
   return (neuron0x28c29f0()*0.595781);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6e10() {
   return (neuron0x28c2d30()*-0.0254927);
}

double NNfunction_nn_chi2_chi4::synapse0x28d68a0() {
   return (neuron0x28c3070()*1.1109);
}

double NNfunction_nn_chi2_chi4::synapse0x28d68e0() {
   return (neuron0x28c35d0()*0.0393314);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6f60() {
   return (neuron0x28c37f0()*-0.355645);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6fa0() {
   return (neuron0x28c3b30()*0.178929);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6fe0() {
   return (neuron0x28c3e70()*0.0216866);
}

double NNfunction_nn_chi2_chi4::synapse0x28d7020() {
   return (neuron0x28c41b0()*1.46935);
}

double NNfunction_nn_chi2_chi4::synapse0x28d7060() {
   return (neuron0x28c44f0()*-0.79177);
}

double NNfunction_nn_chi2_chi4::synapse0x28d70a0() {
   return (neuron0x28c4830()*0.648854);
}

double NNfunction_nn_chi2_chi4::synapse0x28d7420() {
   return (neuron0x28bfd00()*0.0619729);
}

double NNfunction_nn_chi2_chi4::synapse0x28d7460() {
   return (neuron0x28bffb0()*3.83047);
}

double NNfunction_nn_chi2_chi4::synapse0x28d74a0() {
   return (neuron0x28c02f0()*-0.0522772);
}

double NNfunction_nn_chi2_chi4::synapse0x28d74e0() {
   return (neuron0x28c0630()*-0.0116946);
}

double NNfunction_nn_chi2_chi4::synapse0x28d7520() {
   return (neuron0x28c0970()*0.159252);
}

double NNfunction_nn_chi2_chi4::synapse0x28d7560() {
   return (neuron0x28c0cb0()*-0.114219);
}

double NNfunction_nn_chi2_chi4::synapse0x28d75a0() {
   return (neuron0x28c0ff0()*-0.0269813);
}

double NNfunction_nn_chi2_chi4::synapse0x28d75e0() {
   return (neuron0x28c1330()*-0.0721586);
}

double NNfunction_nn_chi2_chi4::synapse0x28d7620() {
   return (neuron0x28c1670()*0.0506233);
}

double NNfunction_nn_chi2_chi4::synapse0x28d7660() {
   return (neuron0x28c19b0()*-0.0908277);
}

double NNfunction_nn_chi2_chi4::synapse0x28d76a0() {
   return (neuron0x28c1cf0()*-0.0265341);
}

double NNfunction_nn_chi2_chi4::synapse0x28d76e0() {
   return (neuron0x28c2030()*-0.143354);
}

double NNfunction_nn_chi2_chi4::synapse0x28d7720() {
   return (neuron0x28c2370()*-0.0812389);
}

double NNfunction_nn_chi2_chi4::synapse0x28d7760() {
   return (neuron0x28c26b0()*-0.0532954);
}

double NNfunction_nn_chi2_chi4::synapse0x28d77a0() {
   return (neuron0x28c29f0()*-0.300732);
}

double NNfunction_nn_chi2_chi4::synapse0x28d77e0() {
   return (neuron0x28c2d30()*-0.107282);
}

double NNfunction_nn_chi2_chi4::synapse0x28d7270() {
   return (neuron0x28c3070()*-0.0160862);
}

double NNfunction_nn_chi2_chi4::synapse0x28d72b0() {
   return (neuron0x28c35d0()*0.0902512);
}

double NNfunction_nn_chi2_chi4::synapse0x28d7930() {
   return (neuron0x28c37f0()*-0.0551391);
}

double NNfunction_nn_chi2_chi4::synapse0x28d7970() {
   return (neuron0x28c3b30()*-0.0824313);
}

double NNfunction_nn_chi2_chi4::synapse0x28d79b0() {
   return (neuron0x28c3e70()*-0.000118427);
}

double NNfunction_nn_chi2_chi4::synapse0x28d79f0() {
   return (neuron0x28c41b0()*-0.0397998);
}

double NNfunction_nn_chi2_chi4::synapse0x28d7a30() {
   return (neuron0x28c44f0()*0.0662161);
}

double NNfunction_nn_chi2_chi4::synapse0x28d7a70() {
   return (neuron0x28c4830()*-6.64593);
}

double NNfunction_nn_chi2_chi4::synapse0x28d7df0() {
   return (neuron0x28bfd00()*0.225478);
}

double NNfunction_nn_chi2_chi4::synapse0x28d7e30() {
   return (neuron0x28bffb0()*-0.958217);
}

double NNfunction_nn_chi2_chi4::synapse0x28d7e70() {
   return (neuron0x28c02f0()*0.400517);
}

double NNfunction_nn_chi2_chi4::synapse0x28d7eb0() {
   return (neuron0x28c0630()*-0.280194);
}

double NNfunction_nn_chi2_chi4::synapse0x28d7ef0() {
   return (neuron0x28c0970()*-0.450305);
}

double NNfunction_nn_chi2_chi4::synapse0x28d7f30() {
   return (neuron0x28c0cb0()*1.14823);
}

double NNfunction_nn_chi2_chi4::synapse0x28d7f70() {
   return (neuron0x28c0ff0()*-1.02798);
}

double NNfunction_nn_chi2_chi4::synapse0x28d7fb0() {
   return (neuron0x28c1330()*-0.390772);
}

double NNfunction_nn_chi2_chi4::synapse0x28d7ff0() {
   return (neuron0x28c1670()*0.438089);
}

double NNfunction_nn_chi2_chi4::synapse0x28d8030() {
   return (neuron0x28c19b0()*-0.175821);
}

double NNfunction_nn_chi2_chi4::synapse0x28d8070() {
   return (neuron0x28c1cf0()*0.0571459);
}

double NNfunction_nn_chi2_chi4::synapse0x28d80b0() {
   return (neuron0x28c2030()*0.457701);
}

double NNfunction_nn_chi2_chi4::synapse0x28d80f0() {
   return (neuron0x28c2370()*-0.518981);
}

double NNfunction_nn_chi2_chi4::synapse0x28d8130() {
   return (neuron0x28c26b0()*1.02633);
}

double NNfunction_nn_chi2_chi4::synapse0x28d8170() {
   return (neuron0x28c29f0()*-1.04434);
}

double NNfunction_nn_chi2_chi4::synapse0x28d81b0() {
   return (neuron0x28c2d30()*-0.627237);
}

double NNfunction_nn_chi2_chi4::synapse0x28d7c40() {
   return (neuron0x28c3070()*-1.69827);
}

double NNfunction_nn_chi2_chi4::synapse0x28d7c80() {
   return (neuron0x28c35d0()*-1.04466);
}

double NNfunction_nn_chi2_chi4::synapse0x28d8300() {
   return (neuron0x28c37f0()*1.01162);
}

double NNfunction_nn_chi2_chi4::synapse0x28d8340() {
   return (neuron0x28c3b30()*0.167587);
}

double NNfunction_nn_chi2_chi4::synapse0x28d8380() {
   return (neuron0x28c3e70()*0.823054);
}

double NNfunction_nn_chi2_chi4::synapse0x28d83c0() {
   return (neuron0x28c41b0()*-0.019055);
}

double NNfunction_nn_chi2_chi4::synapse0x28d8400() {
   return (neuron0x28c44f0()*0.150862);
}

double NNfunction_nn_chi2_chi4::synapse0x28d8440() {
   return (neuron0x28c4830()*-4.29806);
}

double NNfunction_nn_chi2_chi4::synapse0x28d87c0() {
   return (neuron0x28bfd00()*0.0474203);
}

double NNfunction_nn_chi2_chi4::synapse0x28d8800() {
   return (neuron0x28bffb0()*2.64216);
}

double NNfunction_nn_chi2_chi4::synapse0x28d8840() {
   return (neuron0x28c02f0()*-0.238574);
}

double NNfunction_nn_chi2_chi4::synapse0x28d8880() {
   return (neuron0x28c0630()*0.0258326);
}

double NNfunction_nn_chi2_chi4::synapse0x28d88c0() {
   return (neuron0x28c0970()*0.020424);
}

double NNfunction_nn_chi2_chi4::synapse0x28d8900() {
   return (neuron0x28c0cb0()*-0.0577049);
}

double NNfunction_nn_chi2_chi4::synapse0x28d8940() {
   return (neuron0x28c0ff0()*0.0290233);
}

double NNfunction_nn_chi2_chi4::synapse0x28d8980() {
   return (neuron0x28c1330()*-0.0251331);
}

double NNfunction_nn_chi2_chi4::synapse0x28d89c0() {
   return (neuron0x28c1670()*0.0444005);
}

double NNfunction_nn_chi2_chi4::synapse0x28d8a00() {
   return (neuron0x28c19b0()*0.0254231);
}

double NNfunction_nn_chi2_chi4::synapse0x28d8a40() {
   return (neuron0x28c1cf0()*0.0837578);
}

double NNfunction_nn_chi2_chi4::synapse0x28d8a80() {
   return (neuron0x28c2030()*0.206692);
}

double NNfunction_nn_chi2_chi4::synapse0x28d8ac0() {
   return (neuron0x28c2370()*-0.00958406);
}

double NNfunction_nn_chi2_chi4::synapse0x28d8b00() {
   return (neuron0x28c26b0()*0.115469);
}

double NNfunction_nn_chi2_chi4::synapse0x28d8b40() {
   return (neuron0x28c29f0()*-0.0915222);
}

double NNfunction_nn_chi2_chi4::synapse0x28d8b80() {
   return (neuron0x28c2d30()*-0.0795501);
}

double NNfunction_nn_chi2_chi4::synapse0x28d8610() {
   return (neuron0x28c3070()*0.0346087);
}

double NNfunction_nn_chi2_chi4::synapse0x28d8650() {
   return (neuron0x28c35d0()*-0.0356275);
}

double NNfunction_nn_chi2_chi4::synapse0x28d8cd0() {
   return (neuron0x28c37f0()*0.0801211);
}

double NNfunction_nn_chi2_chi4::synapse0x28d8d10() {
   return (neuron0x28c3b30()*-0.10494);
}

double NNfunction_nn_chi2_chi4::synapse0x28d8d50() {
   return (neuron0x28c3e70()*0.0233484);
}

double NNfunction_nn_chi2_chi4::synapse0x28d8d90() {
   return (neuron0x28c41b0()*-0.0656641);
}

double NNfunction_nn_chi2_chi4::synapse0x28d8dd0() {
   return (neuron0x28c44f0()*0.0320409);
}

double NNfunction_nn_chi2_chi4::synapse0x28d8e10() {
   return (neuron0x28c4830()*-3.62267);
}

double NNfunction_nn_chi2_chi4::synapse0x28d9190() {
   return (neuron0x28bfd00()*-0.449147);
}

double NNfunction_nn_chi2_chi4::synapse0x28d91d0() {
   return (neuron0x28bffb0()*-0.177896);
}

double NNfunction_nn_chi2_chi4::synapse0x28d9210() {
   return (neuron0x28c02f0()*0.734119);
}

double NNfunction_nn_chi2_chi4::synapse0x28d9250() {
   return (neuron0x28c0630()*-0.0725244);
}

double NNfunction_nn_chi2_chi4::synapse0x28d9290() {
   return (neuron0x28c0970()*-0.00790034);
}

double NNfunction_nn_chi2_chi4::synapse0x28d92d0() {
   return (neuron0x28c0cb0()*0.0954282);
}

double NNfunction_nn_chi2_chi4::synapse0x28d9310() {
   return (neuron0x28c0ff0()*-0.00813175);
}

double NNfunction_nn_chi2_chi4::synapse0x28d9350() {
   return (neuron0x28c1330()*0.0630444);
}

double NNfunction_nn_chi2_chi4::synapse0x28d9390() {
   return (neuron0x28c1670()*-0.0723074);
}

double NNfunction_nn_chi2_chi4::synapse0x28d93d0() {
   return (neuron0x28c19b0()*-0.0263051);
}

double NNfunction_nn_chi2_chi4::synapse0x28d9410() {
   return (neuron0x28c1cf0()*0.0847391);
}

double NNfunction_nn_chi2_chi4::synapse0x28d9450() {
   return (neuron0x28c2030()*1.13622);
}

double NNfunction_nn_chi2_chi4::synapse0x28d9490() {
   return (neuron0x28c2370()*0.126761);
}

double NNfunction_nn_chi2_chi4::synapse0x28d94d0() {
   return (neuron0x28c26b0()*0.180513);
}

double NNfunction_nn_chi2_chi4::synapse0x28d9510() {
   return (neuron0x28c29f0()*-0.0919177);
}

double NNfunction_nn_chi2_chi4::synapse0x28d9550() {
   return (neuron0x28c2d30()*0.0242467);
}

double NNfunction_nn_chi2_chi4::synapse0x28d8fe0() {
   return (neuron0x28c3070()*-0.0383174);
}

double NNfunction_nn_chi2_chi4::synapse0x28d9020() {
   return (neuron0x28c35d0()*0.0212943);
}

double NNfunction_nn_chi2_chi4::synapse0x28d96a0() {
   return (neuron0x28c37f0()*0.0342961);
}

double NNfunction_nn_chi2_chi4::synapse0x28d96e0() {
   return (neuron0x28c3b30()*0.0173594);
}

double NNfunction_nn_chi2_chi4::synapse0x28d9720() {
   return (neuron0x28c3e70()*0.0948815);
}

double NNfunction_nn_chi2_chi4::synapse0x28d9760() {
   return (neuron0x28c41b0()*-0.0748454);
}

double NNfunction_nn_chi2_chi4::synapse0x28d97a0() {
   return (neuron0x28c44f0()*0.0140635);
}

double NNfunction_nn_chi2_chi4::synapse0x28d97e0() {
   return (neuron0x28c4830()*0.563296);
}

double NNfunction_nn_chi2_chi4::synapse0x28d9b60() {
   return (neuron0x28bfd00()*-0.0190245);
}

double NNfunction_nn_chi2_chi4::synapse0x28d9ba0() {
   return (neuron0x28bffb0()*-0.0794992);
}

double NNfunction_nn_chi2_chi4::synapse0x28d9be0() {
   return (neuron0x28c02f0()*0.659925);
}

double NNfunction_nn_chi2_chi4::synapse0x28d9c20() {
   return (neuron0x28c0630()*-0.00233234);
}

double NNfunction_nn_chi2_chi4::synapse0x28d9c60() {
   return (neuron0x28c0970()*-0.00855585);
}

double NNfunction_nn_chi2_chi4::synapse0x28d9ca0() {
   return (neuron0x28c0cb0()*-0.0133242);
}

double NNfunction_nn_chi2_chi4::synapse0x28d9ce0() {
   return (neuron0x28c0ff0()*0.0159617);
}

double NNfunction_nn_chi2_chi4::synapse0x28d9d20() {
   return (neuron0x28c1330()*0.00901809);
}

double NNfunction_nn_chi2_chi4::synapse0x28d9d60() {
   return (neuron0x28c1670()*-0.00113988);
}

double NNfunction_nn_chi2_chi4::synapse0x28d9da0() {
   return (neuron0x28c19b0()*0.0134684);
}

double NNfunction_nn_chi2_chi4::synapse0x28d9de0() {
   return (neuron0x28c1cf0()*0.00976664);
}

double NNfunction_nn_chi2_chi4::synapse0x28d9e20() {
   return (neuron0x28c2030()*-0.0781343);
}

double NNfunction_nn_chi2_chi4::synapse0x28d9e60() {
   return (neuron0x28c2370()*-0.00316549);
}

double NNfunction_nn_chi2_chi4::synapse0x28d9ea0() {
   return (neuron0x28c26b0()*-0.0111929);
}

double NNfunction_nn_chi2_chi4::synapse0x28d9ee0() {
   return (neuron0x28c29f0()*-0.0359074);
}

double NNfunction_nn_chi2_chi4::synapse0x28d9f20() {
   return (neuron0x28c2d30()*0.00818825);
}

double NNfunction_nn_chi2_chi4::synapse0x28d99b0() {
   return (neuron0x28c3070()*-0.00576737);
}

double NNfunction_nn_chi2_chi4::synapse0x28d99f0() {
   return (neuron0x28c35d0()*-0.0156592);
}

double NNfunction_nn_chi2_chi4::synapse0x28da070() {
   return (neuron0x28c37f0()*-0.0253529);
}

double NNfunction_nn_chi2_chi4::synapse0x28da0b0() {
   return (neuron0x28c3b30()*-0.0132133);
}

double NNfunction_nn_chi2_chi4::synapse0x28da0f0() {
   return (neuron0x28c3e70()*0.00308317);
}

double NNfunction_nn_chi2_chi4::synapse0x28da130() {
   return (neuron0x28c41b0()*0.00917801);
}

double NNfunction_nn_chi2_chi4::synapse0x28da170() {
   return (neuron0x28c44f0()*0.00209918);
}

double NNfunction_nn_chi2_chi4::synapse0x28da1b0() {
   return (neuron0x28c4830()*0.174117);
}

double NNfunction_nn_chi2_chi4::synapse0x28da530() {
   return (neuron0x28bfd00()*0.0209794);
}

double NNfunction_nn_chi2_chi4::synapse0x28ceb00() {
   return (neuron0x28bffb0()*0.234122);
}

double NNfunction_nn_chi2_chi4::synapse0x28ceb40() {
   return (neuron0x28c02f0()*0.0150726);
}

double NNfunction_nn_chi2_chi4::synapse0x28ceb80() {
   return (neuron0x28c0630()*0.0316441);
}

double NNfunction_nn_chi2_chi4::synapse0x28cedd0() {
   return (neuron0x28c0970()*-0.0208219);
}

double NNfunction_nn_chi2_chi4::synapse0x28cee10() {
   return (neuron0x28c0cb0()*0.0255747);
}

double NNfunction_nn_chi2_chi4::synapse0x28cee50() {
   return (neuron0x28c0ff0()*0.0184314);
}

double NNfunction_nn_chi2_chi4::synapse0x28cf0a0() {
   return (neuron0x28c1330()*-0.0138401);
}

double NNfunction_nn_chi2_chi4::synapse0x28cf0e0() {
   return (neuron0x28c1670()*-0.0154643);
}

double NNfunction_nn_chi2_chi4::synapse0x28cf330() {
   return (neuron0x28c19b0()*0.00573174);
}

double NNfunction_nn_chi2_chi4::synapse0x28cf370() {
   return (neuron0x28c1cf0()*0.00612289);
}

double NNfunction_nn_chi2_chi4::synapse0x28cf3b0() {
   return (neuron0x28c2030()*-1.76451);
}

double NNfunction_nn_chi2_chi4::synapse0x28cf600() {
   return (neuron0x28c2370()*0.0303257);
}

double NNfunction_nn_chi2_chi4::synapse0x28cf640() {
   return (neuron0x28c26b0()*-0.0294002);
}

double NNfunction_nn_chi2_chi4::synapse0x28cf890() {
   return (neuron0x28c29f0()*0.0717838);
}

double NNfunction_nn_chi2_chi4::synapse0x28cf8d0() {
   return (neuron0x28c2d30()*0.0177688);
}

double NNfunction_nn_chi2_chi4::synapse0x28da380() {
   return (neuron0x28c3070()*0.00940892);
}

double NNfunction_nn_chi2_chi4::synapse0x28da3c0() {
   return (neuron0x28c35d0()*-0.00694108);
}

double NNfunction_nn_chi2_chi4::synapse0x28cfa20() {
   return (neuron0x28c37f0()*-0.0265749);
}

double NNfunction_nn_chi2_chi4::synapse0x28cff30() {
   return (neuron0x28c3b30()*-0.00106388);
}

double NNfunction_nn_chi2_chi4::synapse0x28cff70() {
   return (neuron0x28c3e70()*0.00162858);
}

double NNfunction_nn_chi2_chi4::synapse0x28cffb0() {
   return (neuron0x28c41b0()*-0.00471581);
}

double NNfunction_nn_chi2_chi4::synapse0x28d0200() {
   return (neuron0x28c44f0()*0.00380043);
}

double NNfunction_nn_chi2_chi4::synapse0x28d0240() {
   return (neuron0x28c4830()*0.0574651);
}

double NNfunction_nn_chi2_chi4::synapse0x28cfaf0() {
   return (neuron0x28bfd00()*-0.51878);
}

double NNfunction_nn_chi2_chi4::synapse0x28cfb30() {
   return (neuron0x28bffb0()*0.258375);
}

double NNfunction_nn_chi2_chi4::synapse0x28cfb70() {
   return (neuron0x28c02f0()*-0.802412);
}

double NNfunction_nn_chi2_chi4::synapse0x28cfbb0() {
   return (neuron0x28c0630()*-0.927276);
}

double NNfunction_nn_chi2_chi4::synapse0x28d0530() {
   return (neuron0x28c0970()*-0.277017);
}

double NNfunction_nn_chi2_chi4::synapse0x28dc880() {
   return (neuron0x28c0cb0()*-0.512144);
}

double NNfunction_nn_chi2_chi4::synapse0x28dc8c0() {
   return (neuron0x28c0ff0()*-0.331908);
}

double NNfunction_nn_chi2_chi4::synapse0x28dc900() {
   return (neuron0x28c1330()*-0.139591);
}

double NNfunction_nn_chi2_chi4::synapse0x28dc940() {
   return (neuron0x28c1670()*1.20086);
}

double NNfunction_nn_chi2_chi4::synapse0x28dc980() {
   return (neuron0x28c19b0()*-0.519346);
}

double NNfunction_nn_chi2_chi4::synapse0x28dc9c0() {
   return (neuron0x28c1cf0()*1.26184);
}

double NNfunction_nn_chi2_chi4::synapse0x28dca00() {
   return (neuron0x28c2030()*-0.076917);
}

double NNfunction_nn_chi2_chi4::synapse0x28dca40() {
   return (neuron0x28c2370()*0.367041);
}

double NNfunction_nn_chi2_chi4::synapse0x28dca80() {
   return (neuron0x28c26b0()*-0.436832);
}

double NNfunction_nn_chi2_chi4::synapse0x28dcac0() {
   return (neuron0x28c29f0()*1.27832);
}

double NNfunction_nn_chi2_chi4::synapse0x28dcb00() {
   return (neuron0x28c2d30()*0.560323);
}

double NNfunction_nn_chi2_chi4::synapse0x28d0410() {
   return (neuron0x28c3070()*0.219764);
}

double NNfunction_nn_chi2_chi4::synapse0x28d0450() {
   return (neuron0x28c35d0()*-0.0512056);
}

double NNfunction_nn_chi2_chi4::synapse0x28dcc50() {
   return (neuron0x28c37f0()*-1.19921);
}

double NNfunction_nn_chi2_chi4::synapse0x28dcc90() {
   return (neuron0x28c3b30()*0.0973427);
}

double NNfunction_nn_chi2_chi4::synapse0x28dccd0() {
   return (neuron0x28c3e70()*0.893273);
}

double NNfunction_nn_chi2_chi4::synapse0x28dcd10() {
   return (neuron0x28c41b0()*-1.03626);
}

double NNfunction_nn_chi2_chi4::synapse0x28dcd50() {
   return (neuron0x28c44f0()*-0.270213);
}

double NNfunction_nn_chi2_chi4::synapse0x28dcd90() {
   return (neuron0x28c4830()*2.02828);
}

double NNfunction_nn_chi2_chi4::synapse0x28dd110() {
   return (neuron0x28bfd00()*-0.188727);
}

double NNfunction_nn_chi2_chi4::synapse0x28dd150() {
   return (neuron0x28bffb0()*-0.709098);
}

double NNfunction_nn_chi2_chi4::synapse0x28dd190() {
   return (neuron0x28c02f0()*-0.478615);
}

double NNfunction_nn_chi2_chi4::synapse0x28dd1d0() {
   return (neuron0x28c0630()*0.285363);
}

double NNfunction_nn_chi2_chi4::synapse0x28dd210() {
   return (neuron0x28c0970()*-0.00958763);
}

double NNfunction_nn_chi2_chi4::synapse0x28dd250() {
   return (neuron0x28c0cb0()*0.405545);
}

double NNfunction_nn_chi2_chi4::synapse0x28dd290() {
   return (neuron0x28c0ff0()*-0.0811625);
}

double NNfunction_nn_chi2_chi4::synapse0x28dd2d0() {
   return (neuron0x28c1330()*0.205649);
}

double NNfunction_nn_chi2_chi4::synapse0x28dd310() {
   return (neuron0x28c1670()*-0.0423884);
}

double NNfunction_nn_chi2_chi4::synapse0x28dd350() {
   return (neuron0x28c19b0()*-0.632731);
}

double NNfunction_nn_chi2_chi4::synapse0x28dd390() {
   return (neuron0x28c1cf0()*-0.0573542);
}

double NNfunction_nn_chi2_chi4::synapse0x28dd3d0() {
   return (neuron0x28c2030()*1.01147);
}

double NNfunction_nn_chi2_chi4::synapse0x28dd410() {
   return (neuron0x28c2370()*0.312952);
}

double NNfunction_nn_chi2_chi4::synapse0x28dd450() {
   return (neuron0x28c26b0()*0.746272);
}

double NNfunction_nn_chi2_chi4::synapse0x28dd490() {
   return (neuron0x28c29f0()*-0.21356);
}

double NNfunction_nn_chi2_chi4::synapse0x28dd4d0() {
   return (neuron0x28c2d30()*0.318505);
}

double NNfunction_nn_chi2_chi4::synapse0x28dcf60() {
   return (neuron0x28c3070()*0.39011);
}

double NNfunction_nn_chi2_chi4::synapse0x28dcfa0() {
   return (neuron0x28c35d0()*0.309984);
}

double NNfunction_nn_chi2_chi4::synapse0x28dd620() {
   return (neuron0x28c37f0()*0.181872);
}

double NNfunction_nn_chi2_chi4::synapse0x28dd660() {
   return (neuron0x28c3b30()*0.257076);
}

double NNfunction_nn_chi2_chi4::synapse0x28dd6a0() {
   return (neuron0x28c3e70()*-0.288165);
}

double NNfunction_nn_chi2_chi4::synapse0x28dd6e0() {
   return (neuron0x28c41b0()*-0.0369666);
}

double NNfunction_nn_chi2_chi4::synapse0x28dd720() {
   return (neuron0x28c44f0()*-0.0793056);
}

double NNfunction_nn_chi2_chi4::synapse0x28dd760() {
   return (neuron0x28c4830()*-0.878747);
}

double NNfunction_nn_chi2_chi4::synapse0x28ddae0() {
   return (neuron0x28bfd00()*-0.189666);
}

double NNfunction_nn_chi2_chi4::synapse0x28ddb20() {
   return (neuron0x28bffb0()*-1.85942);
}

double NNfunction_nn_chi2_chi4::synapse0x28ddb60() {
   return (neuron0x28c02f0()*0.0150256);
}

double NNfunction_nn_chi2_chi4::synapse0x28ddba0() {
   return (neuron0x28c0630()*-0.647303);
}

double NNfunction_nn_chi2_chi4::synapse0x28ddbe0() {
   return (neuron0x28c0970()*-0.81156);
}

double NNfunction_nn_chi2_chi4::synapse0x28ddc20() {
   return (neuron0x28c0cb0()*0.0181575);
}

double NNfunction_nn_chi2_chi4::synapse0x28ddc60() {
   return (neuron0x28c0ff0()*-1.17414);
}

double NNfunction_nn_chi2_chi4::synapse0x28ddca0() {
   return (neuron0x28c1330()*0.178129);
}

double NNfunction_nn_chi2_chi4::synapse0x28ddce0() {
   return (neuron0x28c1670()*1.11543);
}

double NNfunction_nn_chi2_chi4::synapse0x28ddd20() {
   return (neuron0x28c19b0()*-0.823798);
}

double NNfunction_nn_chi2_chi4::synapse0x28ddd60() {
   return (neuron0x28c1cf0()*1.11086);
}

double NNfunction_nn_chi2_chi4::synapse0x28ddda0() {
   return (neuron0x28c2030()*-2.2828);
}

double NNfunction_nn_chi2_chi4::synapse0x28ddde0() {
   return (neuron0x28c2370()*-0.681761);
}

double NNfunction_nn_chi2_chi4::synapse0x28dde20() {
   return (neuron0x28c26b0()*1.41866);
}

double NNfunction_nn_chi2_chi4::synapse0x28dde60() {
   return (neuron0x28c29f0()*-1.41455);
}

double NNfunction_nn_chi2_chi4::synapse0x28ddea0() {
   return (neuron0x28c2d30()*0.896807);
}

double NNfunction_nn_chi2_chi4::synapse0x28dd930() {
   return (neuron0x28c3070()*0.534718);
}

double NNfunction_nn_chi2_chi4::synapse0x28dd970() {
   return (neuron0x28c35d0()*0.220108);
}

double NNfunction_nn_chi2_chi4::synapse0x28ddff0() {
   return (neuron0x28c37f0()*0.0573006);
}

double NNfunction_nn_chi2_chi4::synapse0x28de030() {
   return (neuron0x28c3b30()*0.449839);
}

double NNfunction_nn_chi2_chi4::synapse0x28de070() {
   return (neuron0x28c3e70()*-0.713113);
}

double NNfunction_nn_chi2_chi4::synapse0x28de0b0() {
   return (neuron0x28c41b0()*0.734002);
}

double NNfunction_nn_chi2_chi4::synapse0x28de0f0() {
   return (neuron0x28c44f0()*-0.497067);
}

double NNfunction_nn_chi2_chi4::synapse0x28de130() {
   return (neuron0x28c4830()*-0.146088);
}

double NNfunction_nn_chi2_chi4::synapse0x28de4b0() {
   return (neuron0x28bfd00()*0.0358219);
}

double NNfunction_nn_chi2_chi4::synapse0x28de4f0() {
   return (neuron0x28bffb0()*-5.03061);
}

double NNfunction_nn_chi2_chi4::synapse0x28de530() {
   return (neuron0x28c02f0()*-2.16106);
}

double NNfunction_nn_chi2_chi4::synapse0x28de570() {
   return (neuron0x28c0630()*0.0141831);
}

double NNfunction_nn_chi2_chi4::synapse0x28de5b0() {
   return (neuron0x28c0970()*-0.0876604);
}

double NNfunction_nn_chi2_chi4::synapse0x28de5f0() {
   return (neuron0x28c0cb0()*0.00853787);
}

double NNfunction_nn_chi2_chi4::synapse0x28de630() {
   return (neuron0x28c0ff0()*0.0154543);
}

double NNfunction_nn_chi2_chi4::synapse0x28de670() {
   return (neuron0x28c1330()*0.0193962);
}

double NNfunction_nn_chi2_chi4::synapse0x28de6b0() {
   return (neuron0x28c1670()*-0.045688);
}

double NNfunction_nn_chi2_chi4::synapse0x28de6f0() {
   return (neuron0x28c19b0()*0.0793413);
}

double NNfunction_nn_chi2_chi4::synapse0x28de730() {
   return (neuron0x28c1cf0()*0.0609895);
}

double NNfunction_nn_chi2_chi4::synapse0x28de770() {
   return (neuron0x28c2030()*0.0924313);
}

double NNfunction_nn_chi2_chi4::synapse0x28de7b0() {
   return (neuron0x28c2370()*-0.00950787);
}

double NNfunction_nn_chi2_chi4::synapse0x28de7f0() {
   return (neuron0x28c26b0()*0.178581);
}

double NNfunction_nn_chi2_chi4::synapse0x28de830() {
   return (neuron0x28c29f0()*0.132699);
}

double NNfunction_nn_chi2_chi4::synapse0x28de870() {
   return (neuron0x28c2d30()*-0.0470086);
}

double NNfunction_nn_chi2_chi4::synapse0x28de300() {
   return (neuron0x28c3070()*0.0331611);
}

double NNfunction_nn_chi2_chi4::synapse0x28de340() {
   return (neuron0x28c35d0()*-0.145747);
}

double NNfunction_nn_chi2_chi4::synapse0x28de9c0() {
   return (neuron0x28c37f0()*0.159189);
}

double NNfunction_nn_chi2_chi4::synapse0x28dea00() {
   return (neuron0x28c3b30()*-0.0414519);
}

double NNfunction_nn_chi2_chi4::synapse0x28dea40() {
   return (neuron0x28c3e70()*-0.0501675);
}

double NNfunction_nn_chi2_chi4::synapse0x28dea80() {
   return (neuron0x28c41b0()*-0.0399685);
}

double NNfunction_nn_chi2_chi4::synapse0x28deac0() {
   return (neuron0x28c44f0()*-0.010405);
}

double NNfunction_nn_chi2_chi4::synapse0x28deb00() {
   return (neuron0x28c4830()*8.70368);
}

double NNfunction_nn_chi2_chi4::synapse0x28dee80() {
   return (neuron0x28bfd00()*-0.189808);
}

double NNfunction_nn_chi2_chi4::synapse0x28deec0() {
   return (neuron0x28bffb0()*1.63672);
}

double NNfunction_nn_chi2_chi4::synapse0x28def00() {
   return (neuron0x28c02f0()*0.175178);
}

double NNfunction_nn_chi2_chi4::synapse0x28def40() {
   return (neuron0x28c0630()*0.0413405);
}

double NNfunction_nn_chi2_chi4::synapse0x28def80() {
   return (neuron0x28c0970()*-0.0351404);
}

double NNfunction_nn_chi2_chi4::synapse0x28defc0() {
   return (neuron0x28c0cb0()*0.00640803);
}

double NNfunction_nn_chi2_chi4::synapse0x28df000() {
   return (neuron0x28c0ff0()*-0.0212258);
}

double NNfunction_nn_chi2_chi4::synapse0x28df040() {
   return (neuron0x28c1330()*-0.0441229);
}

double NNfunction_nn_chi2_chi4::synapse0x28df080() {
   return (neuron0x28c1670()*0.031568);
}

double NNfunction_nn_chi2_chi4::synapse0x28df0c0() {
   return (neuron0x28c19b0()*-0.0344351);
}

double NNfunction_nn_chi2_chi4::synapse0x28df100() {
   return (neuron0x28c1cf0()*0.048589);
}

double NNfunction_nn_chi2_chi4::synapse0x28df140() {
   return (neuron0x28c2030()*0.554792);
}

double NNfunction_nn_chi2_chi4::synapse0x28df180() {
   return (neuron0x28c2370()*0.0422916);
}

double NNfunction_nn_chi2_chi4::synapse0x28df1c0() {
   return (neuron0x28c26b0()*-0.0399544);
}

double NNfunction_nn_chi2_chi4::synapse0x28df200() {
   return (neuron0x28c29f0()*-0.129864);
}

double NNfunction_nn_chi2_chi4::synapse0x28df240() {
   return (neuron0x28c2d30()*-0.0787949);
}

double NNfunction_nn_chi2_chi4::synapse0x28decd0() {
   return (neuron0x28c3070()*0.0735844);
}

double NNfunction_nn_chi2_chi4::synapse0x28ded10() {
   return (neuron0x28c35d0()*0.00298958);
}

double NNfunction_nn_chi2_chi4::synapse0x28df390() {
   return (neuron0x28c37f0()*-0.0573116);
}

double NNfunction_nn_chi2_chi4::synapse0x28df3d0() {
   return (neuron0x28c3b30()*-0.0542987);
}

double NNfunction_nn_chi2_chi4::synapse0x28df410() {
   return (neuron0x28c3e70()*0.0314068);
}

double NNfunction_nn_chi2_chi4::synapse0x28df450() {
   return (neuron0x28c41b0()*-0.0128229);
}

double NNfunction_nn_chi2_chi4::synapse0x28df490() {
   return (neuron0x28c44f0()*0.0100308);
}

double NNfunction_nn_chi2_chi4::synapse0x28df4d0() {
   return (neuron0x28c4830()*3.40897);
}

double NNfunction_nn_chi2_chi4::synapse0x28df850() {
   return (neuron0x28bfd00()*0.0675806);
}

double NNfunction_nn_chi2_chi4::synapse0x28df890() {
   return (neuron0x28bffb0()*-0.0859272);
}

double NNfunction_nn_chi2_chi4::synapse0x28df8d0() {
   return (neuron0x28c02f0()*-0.00674879);
}

double NNfunction_nn_chi2_chi4::synapse0x28df910() {
   return (neuron0x28c0630()*0.0271137);
}

double NNfunction_nn_chi2_chi4::synapse0x28df950() {
   return (neuron0x28c0970()*-0.00858765);
}

double NNfunction_nn_chi2_chi4::synapse0x28df990() {
   return (neuron0x28c0cb0()*-0.0268883);
}

double NNfunction_nn_chi2_chi4::synapse0x28df9d0() {
   return (neuron0x28c0ff0()*-0.00242411);
}

double NNfunction_nn_chi2_chi4::synapse0x28dfa10() {
   return (neuron0x28c1330()*0.0259022);
}

double NNfunction_nn_chi2_chi4::synapse0x28dfa50() {
   return (neuron0x28c1670()*-0.00564268);
}

double NNfunction_nn_chi2_chi4::synapse0x28dfa90() {
   return (neuron0x28c19b0()*-0.029685);
}

double NNfunction_nn_chi2_chi4::synapse0x28dfad0() {
   return (neuron0x28c1cf0()*-0.0291305);
}

double NNfunction_nn_chi2_chi4::synapse0x28dfb10() {
   return (neuron0x28c2030()*0.0172317);
}

double NNfunction_nn_chi2_chi4::synapse0x28dfb50() {
   return (neuron0x28c2370()*0.05249);
}

double NNfunction_nn_chi2_chi4::synapse0x28dfb90() {
   return (neuron0x28c26b0()*-0.0112224);
}

double NNfunction_nn_chi2_chi4::synapse0x28dfbd0() {
   return (neuron0x28c29f0()*0.0194523);
}

double NNfunction_nn_chi2_chi4::synapse0x28dfc10() {
   return (neuron0x28c2d30()*0.013427);
}

double NNfunction_nn_chi2_chi4::synapse0x28df6a0() {
   return (neuron0x28c3070()*-0.053192);
}

double NNfunction_nn_chi2_chi4::synapse0x28df6e0() {
   return (neuron0x28c35d0()*0.000877979);
}

double NNfunction_nn_chi2_chi4::synapse0x28dfd60() {
   return (neuron0x28c37f0()*0.0220403);
}

double NNfunction_nn_chi2_chi4::synapse0x28dfda0() {
   return (neuron0x28c3b30()*0.0264933);
}

double NNfunction_nn_chi2_chi4::synapse0x28dfde0() {
   return (neuron0x28c3e70()*-0.0163192);
}

double NNfunction_nn_chi2_chi4::synapse0x28dfe20() {
   return (neuron0x28c41b0()*0.0117306);
}

double NNfunction_nn_chi2_chi4::synapse0x28dfe60() {
   return (neuron0x28c44f0()*-0.0157964);
}

double NNfunction_nn_chi2_chi4::synapse0x28dfea0() {
   return (neuron0x28c4830()*8.04722);
}

double NNfunction_nn_chi2_chi4::synapse0x28e0220() {
   return (neuron0x28bfd00()*0.131287);
}

double NNfunction_nn_chi2_chi4::synapse0x28e0260() {
   return (neuron0x28bffb0()*1.19264);
}

double NNfunction_nn_chi2_chi4::synapse0x28e02a0() {
   return (neuron0x28c02f0()*-0.086276);
}

double NNfunction_nn_chi2_chi4::synapse0x28e02e0() {
   return (neuron0x28c0630()*0.0170388);
}

double NNfunction_nn_chi2_chi4::synapse0x28e0320() {
   return (neuron0x28c0970()*-0.0358162);
}

double NNfunction_nn_chi2_chi4::synapse0x28e0360() {
   return (neuron0x28c0cb0()*0.0429017);
}

double NNfunction_nn_chi2_chi4::synapse0x28e03a0() {
   return (neuron0x28c0ff0()*-0.0350103);
}

double NNfunction_nn_chi2_chi4::synapse0x28e03e0() {
   return (neuron0x28c1330()*0.0129228);
}

double NNfunction_nn_chi2_chi4::synapse0x28e0420() {
   return (neuron0x28c1670()*0.010741);
}

double NNfunction_nn_chi2_chi4::synapse0x28e0460() {
   return (neuron0x28c19b0()*-0.0501059);
}

double NNfunction_nn_chi2_chi4::synapse0x28e04a0() {
   return (neuron0x28c1cf0()*0.0446014);
}

double NNfunction_nn_chi2_chi4::synapse0x28e04e0() {
   return (neuron0x28c2030()*-0.0056863);
}

double NNfunction_nn_chi2_chi4::synapse0x28e0520() {
   return (neuron0x28c2370()*0.0733488);
}

double NNfunction_nn_chi2_chi4::synapse0x28e0560() {
   return (neuron0x28c26b0()*0.0571524);
}

double NNfunction_nn_chi2_chi4::synapse0x28e05a0() {
   return (neuron0x28c29f0()*0.0424341);
}

double NNfunction_nn_chi2_chi4::synapse0x28e05e0() {
   return (neuron0x28c2d30()*0.0347768);
}

double NNfunction_nn_chi2_chi4::synapse0x28e0070() {
   return (neuron0x28c3070()*-0.0124684);
}

double NNfunction_nn_chi2_chi4::synapse0x28e00b0() {
   return (neuron0x28c35d0()*0.0319553);
}

double NNfunction_nn_chi2_chi4::synapse0x28e0730() {
   return (neuron0x28c37f0()*0.0683634);
}

double NNfunction_nn_chi2_chi4::synapse0x28e0770() {
   return (neuron0x28c3b30()*-0.00373109);
}

double NNfunction_nn_chi2_chi4::synapse0x28e07b0() {
   return (neuron0x28c3e70()*-0.0136175);
}

double NNfunction_nn_chi2_chi4::synapse0x28e07f0() {
   return (neuron0x28c41b0()*-0.0132072);
}

double NNfunction_nn_chi2_chi4::synapse0x28e0830() {
   return (neuron0x28c44f0()*0.00688162);
}

double NNfunction_nn_chi2_chi4::synapse0x28e0870() {
   return (neuron0x28c4830()*-1.5015);
}

double NNfunction_nn_chi2_chi4::synapse0x28e0bf0() {
   return (neuron0x28bfd00()*-0.12588);
}

double NNfunction_nn_chi2_chi4::synapse0x28e0c30() {
   return (neuron0x28bffb0()*0.076084);
}

double NNfunction_nn_chi2_chi4::synapse0x28e0c70() {
   return (neuron0x28c02f0()*1.4786);
}

double NNfunction_nn_chi2_chi4::synapse0x28e0cb0() {
   return (neuron0x28c0630()*0.00276914);
}

double NNfunction_nn_chi2_chi4::synapse0x28e0cf0() {
   return (neuron0x28c0970()*-0.071411);
}

double NNfunction_nn_chi2_chi4::synapse0x28e0d30() {
   return (neuron0x28c0cb0()*-0.00119446);
}

double NNfunction_nn_chi2_chi4::synapse0x28e0d70() {
   return (neuron0x28c0ff0()*0.0793467);
}

double NNfunction_nn_chi2_chi4::synapse0x28e0db0() {
   return (neuron0x28c1330()*-0.0141233);
}

double NNfunction_nn_chi2_chi4::synapse0x28e0df0() {
   return (neuron0x28c1670()*-0.0581243);
}

double NNfunction_nn_chi2_chi4::synapse0x28e0e30() {
   return (neuron0x28c19b0()*0.0608522);
}

double NNfunction_nn_chi2_chi4::synapse0x28e0e70() {
   return (neuron0x28c1cf0()*0.0923085);
}

double NNfunction_nn_chi2_chi4::synapse0x28e0eb0() {
   return (neuron0x28c2030()*-0.469329);
}

double NNfunction_nn_chi2_chi4::synapse0x28e0ef0() {
   return (neuron0x28c2370()*-0.010474);
}

double NNfunction_nn_chi2_chi4::synapse0x28e0f30() {
   return (neuron0x28c26b0()*-0.0223349);
}

double NNfunction_nn_chi2_chi4::synapse0x28e0f70() {
   return (neuron0x28c29f0()*0.931252);
}

double NNfunction_nn_chi2_chi4::synapse0x28e0fb0() {
   return (neuron0x28c2d30()*-0.0605391);
}

double NNfunction_nn_chi2_chi4::synapse0x28e0a40() {
   return (neuron0x28c3070()*0.0103943);
}

double NNfunction_nn_chi2_chi4::synapse0x28e0a80() {
   return (neuron0x28c35d0()*0.00601418);
}

double NNfunction_nn_chi2_chi4::synapse0x28e1100() {
   return (neuron0x28c37f0()*-0.127475);
}

double NNfunction_nn_chi2_chi4::synapse0x28e1140() {
   return (neuron0x28c3b30()*-0.0621721);
}

double NNfunction_nn_chi2_chi4::synapse0x28e1180() {
   return (neuron0x28c3e70()*0.00451958);
}

double NNfunction_nn_chi2_chi4::synapse0x28e11c0() {
   return (neuron0x28c41b0()*0.0501715);
}

double NNfunction_nn_chi2_chi4::synapse0x28e1200() {
   return (neuron0x28c44f0()*0.00600544);
}

double NNfunction_nn_chi2_chi4::synapse0x28e1240() {
   return (neuron0x28c4830()*0.0354506);
}

double NNfunction_nn_chi2_chi4::synapse0x28c9cf0() {
   return (neuron0x28bfd00()*-0.193719);
}

double NNfunction_nn_chi2_chi4::synapse0x28c9d30() {
   return (neuron0x28bffb0()*6.35762);
}

double NNfunction_nn_chi2_chi4::synapse0x28c9d70() {
   return (neuron0x28c02f0()*1.47271);
}

double NNfunction_nn_chi2_chi4::synapse0x28c9db0() {
   return (neuron0x28c0630()*0.0189054);
}

double NNfunction_nn_chi2_chi4::synapse0x28c9df0() {
   return (neuron0x28c0970()*0.0243884);
}

double NNfunction_nn_chi2_chi4::synapse0x28c9e30() {
   return (neuron0x28c0cb0()*-0.00835475);
}

double NNfunction_nn_chi2_chi4::synapse0x28c9e70() {
   return (neuron0x28c0ff0()*-0.0240221);
}

double NNfunction_nn_chi2_chi4::synapse0x28c9eb0() {
   return (neuron0x28c1330()*-0.110291);
}

double NNfunction_nn_chi2_chi4::synapse0x28e19d0() {
   return (neuron0x28c1670()*0.0393461);
}

double NNfunction_nn_chi2_chi4::synapse0x28e1a10() {
   return (neuron0x28c19b0()*0.0415662);
}

double NNfunction_nn_chi2_chi4::synapse0x28e1a50() {
   return (neuron0x28c1cf0()*0.0484206);
}

double NNfunction_nn_chi2_chi4::synapse0x28e1a90() {
   return (neuron0x28c2030()*0.121478);
}

double NNfunction_nn_chi2_chi4::synapse0x28e1ad0() {
   return (neuron0x28c2370()*-0.0250104);
}

double NNfunction_nn_chi2_chi4::synapse0x28e1b10() {
   return (neuron0x28c26b0()*0.10827);
}

double NNfunction_nn_chi2_chi4::synapse0x28e1b50() {
   return (neuron0x28c29f0()*-0.0942904);
}

double NNfunction_nn_chi2_chi4::synapse0x28e1b90() {
   return (neuron0x28c2d30()*-0.030991);
}

double NNfunction_nn_chi2_chi4::synapse0x28e1410() {
   return (neuron0x28c3070()*-0.00886632);
}

double NNfunction_nn_chi2_chi4::synapse0x28e1450() {
   return (neuron0x28c35d0()*-0.00407059);
}

double NNfunction_nn_chi2_chi4::synapse0x28e1ce0() {
   return (neuron0x28c37f0()*0.109159);
}

double NNfunction_nn_chi2_chi4::synapse0x28e1d20() {
   return (neuron0x28c3b30()*-0.090569);
}

double NNfunction_nn_chi2_chi4::synapse0x28e1d60() {
   return (neuron0x28c3e70()*0.0371773);
}

double NNfunction_nn_chi2_chi4::synapse0x28e1da0() {
   return (neuron0x28c41b0()*-0.066434);
}

double NNfunction_nn_chi2_chi4::synapse0x28e1de0() {
   return (neuron0x28c44f0()*0.0514357);
}

double NNfunction_nn_chi2_chi4::synapse0x28e1e20() {
   return (neuron0x28c4830()*-6.34614);
}

double NNfunction_nn_chi2_chi4::synapse0x28e21a0() {
   return (neuron0x28bfd00()*0.0143464);
}

double NNfunction_nn_chi2_chi4::synapse0x28e21e0() {
   return (neuron0x28bffb0()*-5.71395);
}

double NNfunction_nn_chi2_chi4::synapse0x28e2220() {
   return (neuron0x28c02f0()*-1.3496);
}

double NNfunction_nn_chi2_chi4::synapse0x28e2260() {
   return (neuron0x28c0630()*-0.0208564);
}

double NNfunction_nn_chi2_chi4::synapse0x28e22a0() {
   return (neuron0x28c0970()*0.02373);
}

double NNfunction_nn_chi2_chi4::synapse0x28e22e0() {
   return (neuron0x28c0cb0()*-0.103378);
}

double NNfunction_nn_chi2_chi4::synapse0x28e2320() {
   return (neuron0x28c0ff0()*-0.0343071);
}

double NNfunction_nn_chi2_chi4::synapse0x28e2360() {
   return (neuron0x28c1330()*0.092958);
}

double NNfunction_nn_chi2_chi4::synapse0x28e23a0() {
   return (neuron0x28c1670()*-0.102746);
}

double NNfunction_nn_chi2_chi4::synapse0x28e23e0() {
   return (neuron0x28c19b0()*0.146743);
}

double NNfunction_nn_chi2_chi4::synapse0x28e2420() {
   return (neuron0x28c1cf0()*-0.05947);
}

double NNfunction_nn_chi2_chi4::synapse0x28e2460() {
   return (neuron0x28c2030()*0.153627);
}

double NNfunction_nn_chi2_chi4::synapse0x28e24a0() {
   return (neuron0x28c2370()*-0.0868262);
}

double NNfunction_nn_chi2_chi4::synapse0x28e24e0() {
   return (neuron0x28c26b0()*-0.117109);
}

double NNfunction_nn_chi2_chi4::synapse0x28e2520() {
   return (neuron0x28c29f0()*0.142977);
}

double NNfunction_nn_chi2_chi4::synapse0x28e2560() {
   return (neuron0x28c2d30()*0.122021);
}

double NNfunction_nn_chi2_chi4::synapse0x28e1ff0() {
   return (neuron0x28c3070()*-0.0933593);
}

double NNfunction_nn_chi2_chi4::synapse0x28e2030() {
   return (neuron0x28c35d0()*-0.152655);
}

double NNfunction_nn_chi2_chi4::synapse0x28e26b0() {
   return (neuron0x28c37f0()*-0.00747168);
}

double NNfunction_nn_chi2_chi4::synapse0x28e26f0() {
   return (neuron0x28c3b30()*0.0918375);
}

double NNfunction_nn_chi2_chi4::synapse0x28e2730() {
   return (neuron0x28c3e70()*0.110766);
}

double NNfunction_nn_chi2_chi4::synapse0x28e2770() {
   return (neuron0x28c41b0()*-0.01766);
}

double NNfunction_nn_chi2_chi4::synapse0x28e27b0() {
   return (neuron0x28c44f0()*0.010577);
}

double NNfunction_nn_chi2_chi4::synapse0x28e27f0() {
   return (neuron0x28c4830()*-4.92223);
}

double NNfunction_nn_chi2_chi4::synapse0x28e2b70() {
   return (neuron0x28bfd00()*-0.141553);
}

double NNfunction_nn_chi2_chi4::synapse0x28e2bb0() {
   return (neuron0x28bffb0()*2.50007);
}

double NNfunction_nn_chi2_chi4::synapse0x28e2bf0() {
   return (neuron0x28c02f0()*0.279883);
}

double NNfunction_nn_chi2_chi4::synapse0x28e2c30() {
   return (neuron0x28c0630()*0.054791);
}

double NNfunction_nn_chi2_chi4::synapse0x28e2c70() {
   return (neuron0x28c0970()*-0.0845575);
}

double NNfunction_nn_chi2_chi4::synapse0x28e2cb0() {
   return (neuron0x28c0cb0()*0.0388772);
}

double NNfunction_nn_chi2_chi4::synapse0x28e2cf0() {
   return (neuron0x28c0ff0()*-0.0312619);
}

double NNfunction_nn_chi2_chi4::synapse0x28e2d30() {
   return (neuron0x28c1330()*-0.0054061);
}

double NNfunction_nn_chi2_chi4::synapse0x28e2d70() {
   return (neuron0x28c1670()*0.0592196);
}

double NNfunction_nn_chi2_chi4::synapse0x28e2db0() {
   return (neuron0x28c19b0()*-0.00425393);
}

double NNfunction_nn_chi2_chi4::synapse0x28e2df0() {
   return (neuron0x28c1cf0()*0.0865832);
}

double NNfunction_nn_chi2_chi4::synapse0x28e2e30() {
   return (neuron0x28c2030()*0.824116);
}

double NNfunction_nn_chi2_chi4::synapse0x28e2e70() {
   return (neuron0x28c2370()*0.0790854);
}

double NNfunction_nn_chi2_chi4::synapse0x28e2eb0() {
   return (neuron0x28c26b0()*-0.0727529);
}

double NNfunction_nn_chi2_chi4::synapse0x28e2ef0() {
   return (neuron0x28c29f0()*-0.1349);
}

double NNfunction_nn_chi2_chi4::synapse0x28e2f30() {
   return (neuron0x28c2d30()*-0.0540369);
}

double NNfunction_nn_chi2_chi4::synapse0x28e29c0() {
   return (neuron0x28c3070()*0.0625049);
}

double NNfunction_nn_chi2_chi4::synapse0x28e2a00() {
   return (neuron0x28c35d0()*0.00093593);
}

double NNfunction_nn_chi2_chi4::synapse0x28d3530() {
   return (neuron0x28c37f0()*-0.0515464);
}

double NNfunction_nn_chi2_chi4::synapse0x28d3570() {
   return (neuron0x28c3b30()*-0.0368594);
}

double NNfunction_nn_chi2_chi4::synapse0x28d35b0() {
   return (neuron0x28c3e70()*0.0587695);
}

double NNfunction_nn_chi2_chi4::synapse0x28d35f0() {
   return (neuron0x28c41b0()*-0.0363439);
}

double NNfunction_nn_chi2_chi4::synapse0x28d3630() {
   return (neuron0x28c44f0()*0.011783);
}

double NNfunction_nn_chi2_chi4::synapse0x28d3670() {
   return (neuron0x28c4830()*2.89358);
}

double NNfunction_nn_chi2_chi4::synapse0x28d39f0() {
   return (neuron0x28bfd00()*-0.0310602);
}

double NNfunction_nn_chi2_chi4::synapse0x28d3a30() {
   return (neuron0x28bffb0()*3.49839);
}

double NNfunction_nn_chi2_chi4::synapse0x28d3a70() {
   return (neuron0x28c02f0()*-3.46098);
}

double NNfunction_nn_chi2_chi4::synapse0x28d3ab0() {
   return (neuron0x28c0630()*0.0972251);
}

double NNfunction_nn_chi2_chi4::synapse0x28d3af0() {
   return (neuron0x28c0970()*0.167169);
}

double NNfunction_nn_chi2_chi4::synapse0x28d3b30() {
   return (neuron0x28c0cb0()*0.182742);
}

double NNfunction_nn_chi2_chi4::synapse0x28d3b70() {
   return (neuron0x28c0ff0()*0.0728123);
}

double NNfunction_nn_chi2_chi4::synapse0x28d3bb0() {
   return (neuron0x28c1330()*0.107559);
}

double NNfunction_nn_chi2_chi4::synapse0x28d3bf0() {
   return (neuron0x28c1670()*0.176423);
}

double NNfunction_nn_chi2_chi4::synapse0x28d3c30() {
   return (neuron0x28c19b0()*-0.127899);
}

double NNfunction_nn_chi2_chi4::synapse0x28d3c70() {
   return (neuron0x28c1cf0()*-0.0249357);
}

double NNfunction_nn_chi2_chi4::synapse0x28d3cb0() {
   return (neuron0x28c2030()*0.81616);
}

double NNfunction_nn_chi2_chi4::synapse0x28d3cf0() {
   return (neuron0x28c2370()*0.113728);
}

double NNfunction_nn_chi2_chi4::synapse0x28d3d30() {
   return (neuron0x28c26b0()*0.40841);
}

double NNfunction_nn_chi2_chi4::synapse0x28d3d70() {
   return (neuron0x28c29f0()*-0.272541);
}

double NNfunction_nn_chi2_chi4::synapse0x28d3db0() {
   return (neuron0x28c2d30()*0.495535);
}

double NNfunction_nn_chi2_chi4::synapse0x28d3840() {
   return (neuron0x28c3070()*0.140735);
}

double NNfunction_nn_chi2_chi4::synapse0x28d3880() {
   return (neuron0x28c35d0()*0.0927901);
}

double NNfunction_nn_chi2_chi4::synapse0x28d3f00() {
   return (neuron0x28c37f0()*-0.210308);
}

double NNfunction_nn_chi2_chi4::synapse0x28d3f40() {
   return (neuron0x28c3b30()*0.00182571);
}

double NNfunction_nn_chi2_chi4::synapse0x28d3f80() {
   return (neuron0x28c3e70()*-0.00732629);
}

double NNfunction_nn_chi2_chi4::synapse0x28d3fc0() {
   return (neuron0x28c41b0()*0.0294802);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4000() {
   return (neuron0x28c44f0()*-0.0431828);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4040() {
   return (neuron0x28c4830()*-1.20828);
}

double NNfunction_nn_chi2_chi4::synapse0x28d43c0() {
   return (neuron0x28bfd00()*1.2392);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4400() {
   return (neuron0x28bffb0()*-2.36873);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4440() {
   return (neuron0x28c02f0()*0.595474);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4480() {
   return (neuron0x28c0630()*-0.10356);
}

double NNfunction_nn_chi2_chi4::synapse0x28d44c0() {
   return (neuron0x28c0970()*0.216484);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4500() {
   return (neuron0x28c0cb0()*-0.139636);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4540() {
   return (neuron0x28c0ff0()*-0.00393394);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4580() {
   return (neuron0x28c1330()*0.0306242);
}

double NNfunction_nn_chi2_chi4::synapse0x28d45c0() {
   return (neuron0x28c1670()*-0.0427719);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4600() {
   return (neuron0x28c19b0()*-0.101245);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4640() {
   return (neuron0x28c1cf0()*-0.0562097);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4680() {
   return (neuron0x28c2030()*-0.752533);
}

double NNfunction_nn_chi2_chi4::synapse0x28d46c0() {
   return (neuron0x28c2370()*-0.065868);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4700() {
   return (neuron0x28c26b0()*-0.181772);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4740() {
   return (neuron0x28c29f0()*-0.205773);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4780() {
   return (neuron0x28c2d30()*-0.151645);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4210() {
   return (neuron0x28c3070()*-0.224609);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4250() {
   return (neuron0x28c35d0()*0.140977);
}

double NNfunction_nn_chi2_chi4::synapse0x28d48d0() {
   return (neuron0x28c37f0()*0.0526205);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4910() {
   return (neuron0x28c3b30()*0.185856);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4950() {
   return (neuron0x28c3e70()*-0.079317);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4990() {
   return (neuron0x28c41b0()*0.0400114);
}

double NNfunction_nn_chi2_chi4::synapse0x28d49d0() {
   return (neuron0x28c44f0()*0.0808319);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4a10() {
   return (neuron0x28c4830()*-0.684035);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4d90() {
   return (neuron0x28bfd00()*0.0266865);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4dd0() {
   return (neuron0x28bffb0()*0.204448);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4e10() {
   return (neuron0x28c02f0()*1.16874);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4e50() {
   return (neuron0x28c0630()*-0.00611093);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4e90() {
   return (neuron0x28c0970()*-0.0408049);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4ed0() {
   return (neuron0x28c0cb0()*0.0446971);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4f10() {
   return (neuron0x28c0ff0()*-0.000757253);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4f50() {
   return (neuron0x28c1330()*0.00729501);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4f90() {
   return (neuron0x28c1670()*0.00924675);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4fd0() {
   return (neuron0x28c19b0()*0.00968684);
}

double NNfunction_nn_chi2_chi4::synapse0x28d5010() {
   return (neuron0x28c1cf0()*-0.0250005);
}

double NNfunction_nn_chi2_chi4::synapse0x28d5050() {
   return (neuron0x28c2030()*-0.222725);
}

double NNfunction_nn_chi2_chi4::synapse0x28d5090() {
   return (neuron0x28c2370()*0.00895726);
}

double NNfunction_nn_chi2_chi4::synapse0x28d50d0() {
   return (neuron0x28c26b0()*0.051478);
}

double NNfunction_nn_chi2_chi4::synapse0x28d5110() {
   return (neuron0x28c29f0()*-0.243971);
}

double NNfunction_nn_chi2_chi4::synapse0x28d5150() {
   return (neuron0x28c2d30()*0.0551186);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4be0() {
   return (neuron0x28c3070()*-0.0263135);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4c20() {
   return (neuron0x28c35d0()*-0.0107886);
}

double NNfunction_nn_chi2_chi4::synapse0x28d52a0() {
   return (neuron0x28c37f0()*-0.00899798);
}

double NNfunction_nn_chi2_chi4::synapse0x28d52e0() {
   return (neuron0x28c3b30()*-0.0137823);
}

double NNfunction_nn_chi2_chi4::synapse0x28d5320() {
   return (neuron0x28c3e70()*-0.0393504);
}

double NNfunction_nn_chi2_chi4::synapse0x28d5360() {
   return (neuron0x28c41b0()*0.0241585);
}

double NNfunction_nn_chi2_chi4::synapse0x28d53a0() {
   return (neuron0x28c44f0()*0.00735892);
}

double NNfunction_nn_chi2_chi4::synapse0x28d53e0() {
   return (neuron0x28c4830()*0.191823);
}

double NNfunction_nn_chi2_chi4::synapse0x28e72b0() {
   return (neuron0x28bfd00()*0.130312);
}

double NNfunction_nn_chi2_chi4::synapse0x28e72f0() {
   return (neuron0x28bffb0()*-2.71987);
}

double NNfunction_nn_chi2_chi4::synapse0x28e7330() {
   return (neuron0x28c02f0()*-1.26285);
}

double NNfunction_nn_chi2_chi4::synapse0x28e7370() {
   return (neuron0x28c0630()*-0.0297756);
}

double NNfunction_nn_chi2_chi4::synapse0x28e73b0() {
   return (neuron0x28c0970()*0.0716395);
}

double NNfunction_nn_chi2_chi4::synapse0x28e73f0() {
   return (neuron0x28c0cb0()*-0.0419895);
}

double NNfunction_nn_chi2_chi4::synapse0x28e7430() {
   return (neuron0x28c0ff0()*0.0100413);
}

double NNfunction_nn_chi2_chi4::synapse0x28e7470() {
   return (neuron0x28c1330()*0.0114382);
}

double NNfunction_nn_chi2_chi4::synapse0x28e74b0() {
   return (neuron0x28c1670()*-0.0641404);
}

double NNfunction_nn_chi2_chi4::synapse0x28e74f0() {
   return (neuron0x28c19b0()*0.00728095);
}

double NNfunction_nn_chi2_chi4::synapse0x28e7530() {
   return (neuron0x28c1cf0()*-0.0768633);
}

double NNfunction_nn_chi2_chi4::synapse0x28e7570() {
   return (neuron0x28c2030()*-0.66128);
}

double NNfunction_nn_chi2_chi4::synapse0x28e75b0() {
   return (neuron0x28c2370()*-0.0779192);
}

double NNfunction_nn_chi2_chi4::synapse0x28e75f0() {
   return (neuron0x28c26b0()*0.094661);
}

double NNfunction_nn_chi2_chi4::synapse0x28e7630() {
   return (neuron0x28c29f0()*0.050465);
}

double NNfunction_nn_chi2_chi4::synapse0x28e7670() {
   return (neuron0x28c2d30()*0.053757);
}

double NNfunction_nn_chi2_chi4::synapse0x28d5420() {
   return (neuron0x28c3070()*-0.10506);
}

double NNfunction_nn_chi2_chi4::synapse0x28d5460() {
   return (neuron0x28c35d0()*0.0912683);
}

double NNfunction_nn_chi2_chi4::synapse0x28e77c0() {
   return (neuron0x28c37f0()*0.155852);
}

double NNfunction_nn_chi2_chi4::synapse0x28e7800() {
   return (neuron0x28c3b30()*0.131375);
}

double NNfunction_nn_chi2_chi4::synapse0x28e7840() {
   return (neuron0x28c3e70()*-0.0377009);
}

double NNfunction_nn_chi2_chi4::synapse0x28e7880() {
   return (neuron0x28c41b0()*0.0370487);
}

double NNfunction_nn_chi2_chi4::synapse0x28e78c0() {
   return (neuron0x28c44f0()*-0.0797147);
}

double NNfunction_nn_chi2_chi4::synapse0x28e7900() {
   return (neuron0x28c4830()*-4.90571);
}

double NNfunction_nn_chi2_chi4::synapse0x28e7c80() {
   return (neuron0x28bfd00()*-0.000511653);
}

double NNfunction_nn_chi2_chi4::synapse0x28e7cc0() {
   return (neuron0x28bffb0()*3.00507);
}

double NNfunction_nn_chi2_chi4::synapse0x28e7d00() {
   return (neuron0x28c02f0()*1.36354);
}

double NNfunction_nn_chi2_chi4::synapse0x28e7d40() {
   return (neuron0x28c0630()*-0.0564913);
}

double NNfunction_nn_chi2_chi4::synapse0x28e7d80() {
   return (neuron0x28c0970()*0.111184);
}

double NNfunction_nn_chi2_chi4::synapse0x28e7dc0() {
   return (neuron0x28c0cb0()*0.0641443);
}

double NNfunction_nn_chi2_chi4::synapse0x28e7e00() {
   return (neuron0x28c0ff0()*0.0262068);
}

double NNfunction_nn_chi2_chi4::synapse0x28e7e40() {
   return (neuron0x28c1330()*-0.033859);
}

double NNfunction_nn_chi2_chi4::synapse0x28e7e80() {
   return (neuron0x28c1670()*0.103898);
}

double NNfunction_nn_chi2_chi4::synapse0x28e7ec0() {
   return (neuron0x28c19b0()*-0.0485474);
}

double NNfunction_nn_chi2_chi4::synapse0x28e7f00() {
   return (neuron0x28c1cf0()*-0.0319812);
}

double NNfunction_nn_chi2_chi4::synapse0x28e7f40() {
   return (neuron0x28c2030()*0.63395);
}

double NNfunction_nn_chi2_chi4::synapse0x28e7f80() {
   return (neuron0x28c2370()*0.119897);
}

double NNfunction_nn_chi2_chi4::synapse0x28e7fc0() {
   return (neuron0x28c26b0()*-0.00445896);
}

double NNfunction_nn_chi2_chi4::synapse0x28e8000() {
   return (neuron0x28c29f0()*-0.161626);
}

double NNfunction_nn_chi2_chi4::synapse0x28e8040() {
   return (neuron0x28c2d30()*0.00273692);
}

double NNfunction_nn_chi2_chi4::synapse0x28e7ad0() {
   return (neuron0x28c3070()*0.0246228);
}

double NNfunction_nn_chi2_chi4::synapse0x28e7b10() {
   return (neuron0x28c35d0()*-0.0588291);
}

double NNfunction_nn_chi2_chi4::synapse0x28e8190() {
   return (neuron0x28c37f0()*-0.132098);
}

double NNfunction_nn_chi2_chi4::synapse0x28e81d0() {
   return (neuron0x28c3b30()*-0.0349389);
}

double NNfunction_nn_chi2_chi4::synapse0x28e8210() {
   return (neuron0x28c3e70()*0.085994);
}

double NNfunction_nn_chi2_chi4::synapse0x28e8250() {
   return (neuron0x28c41b0()*0.0309915);
}

double NNfunction_nn_chi2_chi4::synapse0x28e8290() {
   return (neuron0x28c44f0()*0.0210692);
}

double NNfunction_nn_chi2_chi4::synapse0x28e82d0() {
   return (neuron0x28c4830()*-0.550578);
}

double NNfunction_nn_chi2_chi4::synapse0x28e8650() {
   return (neuron0x28bfd00()*0.193294);
}

double NNfunction_nn_chi2_chi4::synapse0x28e8690() {
   return (neuron0x28bffb0()*-2.58506);
}

double NNfunction_nn_chi2_chi4::synapse0x28e86d0() {
   return (neuron0x28c02f0()*0.115098);
}

double NNfunction_nn_chi2_chi4::synapse0x28e8710() {
   return (neuron0x28c0630()*0.0035593);
}

double NNfunction_nn_chi2_chi4::synapse0x28e8750() {
   return (neuron0x28c0970()*-0.0340263);
}

double NNfunction_nn_chi2_chi4::synapse0x28e8790() {
   return (neuron0x28c0cb0()*0.101853);
}

double NNfunction_nn_chi2_chi4::synapse0x28e87d0() {
   return (neuron0x28c0ff0()*-0.00404962);
}

double NNfunction_nn_chi2_chi4::synapse0x28e8810() {
   return (neuron0x28c1330()*0.150683);
}

double NNfunction_nn_chi2_chi4::synapse0x28e8850() {
   return (neuron0x28c1670()*-0.0208763);
}

double NNfunction_nn_chi2_chi4::synapse0x28e8890() {
   return (neuron0x28c19b0()*0.11986);
}

double NNfunction_nn_chi2_chi4::synapse0x28e88d0() {
   return (neuron0x28c1cf0()*-0.0924351);
}

double NNfunction_nn_chi2_chi4::synapse0x28e8910() {
   return (neuron0x28c2030()*0.226067);
}

double NNfunction_nn_chi2_chi4::synapse0x28e8950() {
   return (neuron0x28c2370()*-0.0573407);
}

double NNfunction_nn_chi2_chi4::synapse0x28e8990() {
   return (neuron0x28c26b0()*0.0266915);
}

double NNfunction_nn_chi2_chi4::synapse0x28e89d0() {
   return (neuron0x28c29f0()*0.176962);
}

double NNfunction_nn_chi2_chi4::synapse0x28e8a10() {
   return (neuron0x28c2d30()*0.0834667);
}

double NNfunction_nn_chi2_chi4::synapse0x28e84a0() {
   return (neuron0x28c3070()*-0.155823);
}

double NNfunction_nn_chi2_chi4::synapse0x28e84e0() {
   return (neuron0x28c35d0()*0.146165);
}

double NNfunction_nn_chi2_chi4::synapse0x28e8b60() {
   return (neuron0x28c37f0()*0.107282);
}

double NNfunction_nn_chi2_chi4::synapse0x28e8ba0() {
   return (neuron0x28c3b30()*0.115877);
}

double NNfunction_nn_chi2_chi4::synapse0x28e8be0() {
   return (neuron0x28c3e70()*-4.75113e-05);
}

double NNfunction_nn_chi2_chi4::synapse0x28e8c20() {
   return (neuron0x28c41b0()*0.0676816);
}

double NNfunction_nn_chi2_chi4::synapse0x28e8c60() {
   return (neuron0x28c44f0()*0.0280597);
}

double NNfunction_nn_chi2_chi4::synapse0x28e8ca0() {
   return (neuron0x28c4830()*-6.01103);
}

double NNfunction_nn_chi2_chi4::synapse0x28e9020() {
   return (neuron0x28bfd00()*0.00659026);
}

double NNfunction_nn_chi2_chi4::synapse0x28e9060() {
   return (neuron0x28bffb0()*-0.726807);
}

double NNfunction_nn_chi2_chi4::synapse0x28e90a0() {
   return (neuron0x28c02f0()*1.06553);
}

double NNfunction_nn_chi2_chi4::synapse0x28e90e0() {
   return (neuron0x28c0630()*0.0294797);
}

double NNfunction_nn_chi2_chi4::synapse0x28e9120() {
   return (neuron0x28c0970()*0.0405559);
}

double NNfunction_nn_chi2_chi4::synapse0x28e9160() {
   return (neuron0x28c0cb0()*-0.0419053);
}

double NNfunction_nn_chi2_chi4::synapse0x28e91a0() {
   return (neuron0x28c0ff0()*0.02822);
}

double NNfunction_nn_chi2_chi4::synapse0x28e91e0() {
   return (neuron0x28c1330()*0.0331718);
}

double NNfunction_nn_chi2_chi4::synapse0x28e9220() {
   return (neuron0x28c1670()*0.0158222);
}

double NNfunction_nn_chi2_chi4::synapse0x28e9260() {
   return (neuron0x28c19b0()*0.00138551);
}

double NNfunction_nn_chi2_chi4::synapse0x28e92a0() {
   return (neuron0x28c1cf0()*0.000185627);
}

double NNfunction_nn_chi2_chi4::synapse0x28e92e0() {
   return (neuron0x28c2030()*0.0439004);
}

double NNfunction_nn_chi2_chi4::synapse0x28e9320() {
   return (neuron0x28c2370()*-0.00177829);
}

double NNfunction_nn_chi2_chi4::synapse0x28e9360() {
   return (neuron0x28c26b0()*-0.0442055);
}

double NNfunction_nn_chi2_chi4::synapse0x28e93a0() {
   return (neuron0x28c29f0()*-0.0221614);
}

double NNfunction_nn_chi2_chi4::synapse0x28e93e0() {
   return (neuron0x28c2d30()*0.0396313);
}

double NNfunction_nn_chi2_chi4::synapse0x28e8e70() {
   return (neuron0x28c3070()*-0.0223077);
}

double NNfunction_nn_chi2_chi4::synapse0x28e8eb0() {
   return (neuron0x28c35d0()*-0.0256513);
}

double NNfunction_nn_chi2_chi4::synapse0x28e9530() {
   return (neuron0x28c37f0()*-0.00265536);
}

double NNfunction_nn_chi2_chi4::synapse0x28e9570() {
   return (neuron0x28c3b30()*-0.0106856);
}

double NNfunction_nn_chi2_chi4::synapse0x28e95b0() {
   return (neuron0x28c3e70()*0.00542917);
}

double NNfunction_nn_chi2_chi4::synapse0x28e95f0() {
   return (neuron0x28c41b0()*0.0337365);
}

double NNfunction_nn_chi2_chi4::synapse0x28e9630() {
   return (neuron0x28c44f0()*0.0231807);
}

double NNfunction_nn_chi2_chi4::synapse0x28e9670() {
   return (neuron0x28c4830()*-1.7109);
}

double NNfunction_nn_chi2_chi4::synapse0x28c5c00() {
   return (neuron0x28c4ca0()*-0.289608);
}

double NNfunction_nn_chi2_chi4::synapse0x28c5c40() {
   return (neuron0x28c55f0()*-0.342027);
}

double NNfunction_nn_chi2_chi4::synapse0x28c7120() {
   return (neuron0x28c60d0()*1.3958);
}

double NNfunction_nn_chi2_chi4::synapse0x28c7160() {
   return (neuron0x2689420()*1.89586);
}

double NNfunction_nn_chi2_chi4::synapse0x28c7af0() {
   return (neuron0x28c6e70()*-1.71969);
}

double NNfunction_nn_chi2_chi4::synapse0x28c7b30() {
   return (neuron0x28c7840()*-0.793889);
}

double NNfunction_nn_chi2_chi4::synapse0x28c88c0() {
   return (neuron0x28c8610()*0.19975);
}

double NNfunction_nn_chi2_chi4::synapse0x28c8900() {
   return (neuron0x28c8fe0()*0.99955);
}

double NNfunction_nn_chi2_chi4::synapse0x28c9290() {
   return (neuron0x28c99b0()*0.0332639);
}

double NNfunction_nn_chi2_chi4::synapse0x28c92d0() {
   return (neuron0x28ca490()*0.962965);
}

double NNfunction_nn_chi2_chi4::synapse0x28c9c60() {
   return (neuron0x28cae60()*-1.75464);
}

double NNfunction_nn_chi2_chi4::synapse0x28c9ca0() {
   return (neuron0x28c7f40()*-0.625883);
}

double NNfunction_nn_chi2_chi4::synapse0x28ca740() {
   return (neuron0x28cca10()*-2.2222);
}

double NNfunction_nn_chi2_chi4::synapse0x28ca780() {
   return (neuron0x28cd3e0()*-0.303571);
}

double NNfunction_nn_chi2_chi4::synapse0x28cb110() {
   return (neuron0x28cddb0()*-1.28828);
}

double NNfunction_nn_chi2_chi4::synapse0x28cb150() {
   return (neuron0x28ce780()*2.14112);
}

double NNfunction_nn_chi2_chi4::synapse0x28c81f0() {
   return (neuron0x28d0590()*0.553927);
}

double NNfunction_nn_chi2_chi4::synapse0x28c8230() {
   return (neuron0x28d0870()*-0.816009);
}

double NNfunction_nn_chi2_chi4::synapse0x28cccc0() {
   return (neuron0x28d1240()*-0.150369);
}

double NNfunction_nn_chi2_chi4::synapse0x28ccd00() {
   return (neuron0x28d1c10()*-1.965);
}

double NNfunction_nn_chi2_chi4::synapse0x28cd690() {
   return (neuron0x28d25e0()*-0.550182);
}

double NNfunction_nn_chi2_chi4::synapse0x28cd6d0() {
   return (neuron0x28d2fb0()*-0.266836);
}

double NNfunction_nn_chi2_chi4::synapse0x28ce060() {
   return (neuron0x28cbb00()*-0.326782);
}

double NNfunction_nn_chi2_chi4::synapse0x28ce0a0() {
   return (neuron0x28cc4d0()*-0.386877);
}

double NNfunction_nn_chi2_chi4::synapse0x28cea30() {
   return (neuron0x28d5d40()*-0.296796);
}

double NNfunction_nn_chi2_chi4::synapse0x28cea70() {
   return (neuron0x28d6710()*-0.339923);
}

double NNfunction_nn_chi2_chi4::synapse0x28c2c10() {
   return (neuron0x28d70e0()*-1.58714);
}

double NNfunction_nn_chi2_chi4::synapse0x28c2c50() {
   return (neuron0x28d7ab0()*-0.256548);
}

double NNfunction_nn_chi2_chi4::synapse0x28d0b20() {
   return (neuron0x28d8480()*-1.83326);
}

double NNfunction_nn_chi2_chi4::synapse0x28d0b60() {
   return (neuron0x28d8e50()*-1.54539);
}

double NNfunction_nn_chi2_chi4::synapse0x28d14f0() {
   return (neuron0x28d9820()*-0.762275);
}

double NNfunction_nn_chi2_chi4::synapse0x28d1530() {
   return (neuron0x28da1f0()*2.40525);
}

double NNfunction_nn_chi2_chi4::synapse0x28d1ec0() {
   return (neuron0x28d0280()*-0.373592);
}

double NNfunction_nn_chi2_chi4::synapse0x28d1f00() {
   return (neuron0x28dcdd0()*-0.76879);
}

double NNfunction_nn_chi2_chi4::synapse0x28d2890() {
   return (neuron0x28dd7a0()*0.0553447);
}

double NNfunction_nn_chi2_chi4::synapse0x28d28d0() {
   return (neuron0x28de170()*-2.40198);
}

double NNfunction_nn_chi2_chi4::synapse0x28d3260() {
   return (neuron0x28deb40()*2.57132);
}

double NNfunction_nn_chi2_chi4::synapse0x28d32a0() {
   return (neuron0x28df510()*1.61681);
}

double NNfunction_nn_chi2_chi4::synapse0x28cbdb0() {
   return (neuron0x28dfee0()*3.95847);
}

double NNfunction_nn_chi2_chi4::synapse0x28cbdf0() {
   return (neuron0x28e08b0()*0.0151079);
}

double NNfunction_nn_chi2_chi4::synapse0x28d5660() {
   return (neuron0x28e1280()*-0.923908);
}

double NNfunction_nn_chi2_chi4::synapse0x28d56a0() {
   return (neuron0x28e1e60()*2.05434);
}

double NNfunction_nn_chi2_chi4::synapse0x28d5ff0() {
   return (neuron0x28e2830()*0.381221);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6030() {
   return (neuron0x28d36b0()*2.59624);
}

double NNfunction_nn_chi2_chi4::synapse0x28d69c0() {
   return (neuron0x28d4080()*-0.531327);
}

double NNfunction_nn_chi2_chi4::synapse0x28d6a00() {
   return (neuron0x28d4a50()*0.209737);
}

double NNfunction_nn_chi2_chi4::synapse0x28d7390() {
   return (neuron0x28e7090()*0.934988);
}

double NNfunction_nn_chi2_chi4::synapse0x28d73d0() {
   return (neuron0x28e7940()*0.806019);
}

double NNfunction_nn_chi2_chi4::synapse0x28d7d60() {
   return (neuron0x28e8310()*1.71222);
}

double NNfunction_nn_chi2_chi4::synapse0x28d7da0() {
   return (neuron0x28e8ce0()*-0.149853);
}

double NNfunction_nn_chi2_chi4::synapse0x28da4a0() {
   return (neuron0x28c4ca0()*0.277418);
}

double NNfunction_nn_chi2_chi4::synapse0x28da4e0() {
   return (neuron0x28c55f0()*-0.194242);
}

double NNfunction_nn_chi2_chi4::synapse0x28cfa60() {
   return (neuron0x28c60d0()*2.05816);
}

double NNfunction_nn_chi2_chi4::synapse0x28cfaa0() {
   return (neuron0x2689420()*-1.08486);
}

double NNfunction_nn_chi2_chi4::synapse0x28dd080() {
   return (neuron0x28c6e70()*-1.46363);
}

double NNfunction_nn_chi2_chi4::synapse0x28dd0c0() {
   return (neuron0x28c7840()*-1.21407);
}

double NNfunction_nn_chi2_chi4::synapse0x28dda50() {
   return (neuron0x28c8610()*0.0896546);
}

double NNfunction_nn_chi2_chi4::synapse0x28dda90() {
   return (neuron0x28c8fe0()*1.16591);
}

double NNfunction_nn_chi2_chi4::synapse0x28de420() {
   return (neuron0x28c99b0()*-0.243979);
}

double NNfunction_nn_chi2_chi4::synapse0x28de460() {
   return (neuron0x28ca490()*0.969516);
}

double NNfunction_nn_chi2_chi4::synapse0x28dedf0() {
   return (neuron0x28cae60()*-2.29443);
}

double NNfunction_nn_chi2_chi4::synapse0x28dee30() {
   return (neuron0x28c7f40()*-1.03057);
}

double NNfunction_nn_chi2_chi4::synapse0x28df7c0() {
   return (neuron0x28cca10()*-2.19383);
}

double NNfunction_nn_chi2_chi4::synapse0x28df800() {
   return (neuron0x28cd3e0()*-1.21854);
}

double NNfunction_nn_chi2_chi4::synapse0x28e0190() {
   return (neuron0x28cddb0()*-2.03319);
}

double NNfunction_nn_chi2_chi4::synapse0x28e01d0() {
   return (neuron0x28ce780()*3.16723);
}

double NNfunction_nn_chi2_chi4::synapse0x28e0b60() {
   return (neuron0x28d0590()*3.09734);
}

double NNfunction_nn_chi2_chi4::synapse0x28e0ba0() {
   return (neuron0x28d0870()*0.372482);
}

double NNfunction_nn_chi2_chi4::synapse0x28e1530() {
   return (neuron0x28d1240()*-0.0217758);
}

double NNfunction_nn_chi2_chi4::synapse0x28e1570() {
   return (neuron0x28d1c10()*-6.19498);
}

double NNfunction_nn_chi2_chi4::synapse0x28e2110() {
   return (neuron0x28d25e0()*0.431789);
}

double NNfunction_nn_chi2_chi4::synapse0x28e2150() {
   return (neuron0x28d2fb0()*-0.679496);
}

double NNfunction_nn_chi2_chi4::synapse0x28e2ae0() {
   return (neuron0x28cbb00()*-0.974297);
}

double NNfunction_nn_chi2_chi4::synapse0x28e2b20() {
   return (neuron0x28cc4d0()*-0.359344);
}

double NNfunction_nn_chi2_chi4::synapse0x28d3960() {
   return (neuron0x28d5d40()*-1.05419);
}

double NNfunction_nn_chi2_chi4::synapse0x28d39a0() {
   return (neuron0x28d6710()*-0.340091);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4330() {
   return (neuron0x28d70e0()*-5.20146);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4370() {
   return (neuron0x28d7ab0()*-0.602819);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4d00() {
   return (neuron0x28d8480()*3.53391);
}

double NNfunction_nn_chi2_chi4::synapse0x28d4d40() {
   return (neuron0x28d8e50()*0.865445);
}

double NNfunction_nn_chi2_chi4::synapse0x28e7220() {
   return (neuron0x28d9820()*0.142514);
}

double NNfunction_nn_chi2_chi4::synapse0x28e7260() {
   return (neuron0x28da1f0()*0.481238);
}

double NNfunction_nn_chi2_chi4::synapse0x28e7bf0() {
   return (neuron0x28d0280()*0.0174275);
}

double NNfunction_nn_chi2_chi4::synapse0x28e7c30() {
   return (neuron0x28dcdd0()*-1.91752);
}

double NNfunction_nn_chi2_chi4::synapse0x28e85c0() {
   return (neuron0x28dd7a0()*0.267576);
}

double NNfunction_nn_chi2_chi4::synapse0x28e8600() {
   return (neuron0x28de170()*-8.57221);
}

double NNfunction_nn_chi2_chi4::synapse0x28e8f90() {
   return (neuron0x28deb40()*-0.772517);
}

double NNfunction_nn_chi2_chi4::synapse0x28e8fd0() {
   return (neuron0x28df510()*-0.860393);
}

double NNfunction_nn_chi2_chi4::synapse0x28c4ec0() {
   return (neuron0x28dfee0()*0.473592);
}

double NNfunction_nn_chi2_chi4::synapse0x28c4f00() {
   return (neuron0x28e08b0()*-0.581474);
}

double NNfunction_nn_chi2_chi4::synapse0x28d8730() {
   return (neuron0x28e1280()*3.19327);
}

double NNfunction_nn_chi2_chi4::synapse0x28d8770() {
   return (neuron0x28e1e60()*-3.4866);
}

double NNfunction_nn_chi2_chi4::synapse0x28e96b0() {
   return (neuron0x28e2830()*-1.26196);
}

double NNfunction_nn_chi2_chi4::synapse0x28e96f0() {
   return (neuron0x28d36b0()*4.48944);
}

double NNfunction_nn_chi2_chi4::synapse0x28e9730() {
   return (neuron0x28d4080()*-0.187076);
}

double NNfunction_nn_chi2_chi4::synapse0x28e9770() {
   return (neuron0x28d4a50()*-2.42609);
}

double NNfunction_nn_chi2_chi4::synapse0x28f0620() {
   return (neuron0x28e7090()*-2.03023);
}

double NNfunction_nn_chi2_chi4::synapse0x28f0660() {
   return (neuron0x28e7940()*-1.31453);
}

double NNfunction_nn_chi2_chi4::synapse0x28f06a0() {
   return (neuron0x28e8310()*3.87032);
}

double NNfunction_nn_chi2_chi4::synapse0x28f06e0() {
   return (neuron0x28e8ce0()*1.0977);
}

double NNfunction_nn_chi2_chi4::synapse0x28f0a60() {
   return (neuron0x28c4ca0()*0.0156242);
}

double NNfunction_nn_chi2_chi4::synapse0x28f0aa0() {
   return (neuron0x28c55f0()*-0.0145888);
}

double NNfunction_nn_chi2_chi4::synapse0x28f0ae0() {
   return (neuron0x28c60d0()*1.07856);
}

double NNfunction_nn_chi2_chi4::synapse0x28f0b20() {
   return (neuron0x2689420()*-0.98622);
}

double NNfunction_nn_chi2_chi4::synapse0x28f0b60() {
   return (neuron0x28c6e70()*0.209567);
}

double NNfunction_nn_chi2_chi4::synapse0x28f0ba0() {
   return (neuron0x28c7840()*-0.0314652);
}

double NNfunction_nn_chi2_chi4::synapse0x28f0be0() {
   return (neuron0x28c8610()*0.0201456);
}

double NNfunction_nn_chi2_chi4::synapse0x28f0c20() {
   return (neuron0x28c8fe0()*-0.289819);
}

double NNfunction_nn_chi2_chi4::synapse0x28f0c60() {
   return (neuron0x28c99b0()*0.00134693);
}

double NNfunction_nn_chi2_chi4::synapse0x28f0ca0() {
   return (neuron0x28ca490()*-0.0491428);
}

double NNfunction_nn_chi2_chi4::synapse0x28f0ce0() {
   return (neuron0x28cae60()*0.159757);
}

double NNfunction_nn_chi2_chi4::synapse0x28f0d20() {
   return (neuron0x28c7f40()*0.0176857);
}

double NNfunction_nn_chi2_chi4::synapse0x28f0d60() {
   return (neuron0x28cca10()*0.140935);
}

double NNfunction_nn_chi2_chi4::synapse0x28f0da0() {
   return (neuron0x28cd3e0()*0.0241204);
}

double NNfunction_nn_chi2_chi4::synapse0x28f0de0() {
   return (neuron0x28cddb0()*-0.151671);
}

double NNfunction_nn_chi2_chi4::synapse0x28f0e20() {
   return (neuron0x28ce780()*0.229814);
}

double NNfunction_nn_chi2_chi4::synapse0x28f08b0() {
   return (neuron0x28d0590()*1.08061);
}

double NNfunction_nn_chi2_chi4::synapse0x28f08f0() {
   return (neuron0x28d0870()*0.809005);
}

double NNfunction_nn_chi2_chi4::synapse0x28f0f70() {
   return (neuron0x28d1240()*-0.00601227);
}

double NNfunction_nn_chi2_chi4::synapse0x28f0fb0() {
   return (neuron0x28d1c10()*-0.0672774);
}

double NNfunction_nn_chi2_chi4::synapse0x28f0ff0() {
   return (neuron0x28d25e0()*0.0367932);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1030() {
   return (neuron0x28d2fb0()*0.217407);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1070() {
   return (neuron0x28cbb00()*-0.039118);
}

double NNfunction_nn_chi2_chi4::synapse0x28f10b0() {
   return (neuron0x28cc4d0()*-0.104811);
}

double NNfunction_nn_chi2_chi4::synapse0x28f10f0() {
   return (neuron0x28d5d40()*-0.0223437);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1130() {
   return (neuron0x28d6710()*0.0143049);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1170() {
   return (neuron0x28d70e0()*0.0653372);
}

double NNfunction_nn_chi2_chi4::synapse0x28f11b0() {
   return (neuron0x28d7ab0()*8.51593e-05);
}

double NNfunction_nn_chi2_chi4::synapse0x28f11f0() {
   return (neuron0x28d8480()*-0.0986541);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1230() {
   return (neuron0x28d8e50()*0.0719975);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1270() {
   return (neuron0x28d9820()*4.30754);
}

double NNfunction_nn_chi2_chi4::synapse0x28f12b0() {
   return (neuron0x28da1f0()*-0.993279);
}

double NNfunction_nn_chi2_chi4::synapse0x28f0e60() {
   return (neuron0x28d0280()*0.00592414);
}

double NNfunction_nn_chi2_chi4::synapse0x28f0ea0() {
   return (neuron0x28dcdd0()*0.404534);
}

double NNfunction_nn_chi2_chi4::synapse0x28f0ee0() {
   return (neuron0x28dd7a0()*-0.0402511);
}

double NNfunction_nn_chi2_chi4::synapse0x28f0f20() {
   return (neuron0x28de170()*0.105929);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1500() {
   return (neuron0x28deb40()*-0.824634);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1540() {
   return (neuron0x28df510()*-0.908306);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1580() {
   return (neuron0x28dfee0()*0.138563);
}

double NNfunction_nn_chi2_chi4::synapse0x28f15c0() {
   return (neuron0x28e08b0()*-0.348358);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1600() {
   return (neuron0x28e1280()*0.110384);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1640() {
   return (neuron0x28e1e60()*-0.138444);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1680() {
   return (neuron0x28e2830()*0.516094);
}

double NNfunction_nn_chi2_chi4::synapse0x28f16c0() {
   return (neuron0x28d36b0()*-0.0829884);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1700() {
   return (neuron0x28d4080()*-0.0203418);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1740() {
   return (neuron0x28d4a50()*-1.67682);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1780() {
   return (neuron0x28e7090()*0.223017);
}

double NNfunction_nn_chi2_chi4::synapse0x28f17c0() {
   return (neuron0x28e7940()*0.405939);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1800() {
   return (neuron0x28e8310()*-0.253602);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1840() {
   return (neuron0x28e8ce0()*-1.03088);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1bc0() {
   return (neuron0x28c4ca0()*-0.703262);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1c00() {
   return (neuron0x28c55f0()*0.211588);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1c40() {
   return (neuron0x28c60d0()*-4.69929);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1c80() {
   return (neuron0x2689420()*4.07382);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1cc0() {
   return (neuron0x28c6e70()*-0.0564379);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1d00() {
   return (neuron0x28c7840()*-0.161595);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1d40() {
   return (neuron0x28c8610()*0.294978);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1d80() {
   return (neuron0x28c8fe0()*1.63495);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1dc0() {
   return (neuron0x28c99b0()*0.531574);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1e00() {
   return (neuron0x28ca490()*0.414804);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1e40() {
   return (neuron0x28cae60()*-0.664821);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1e80() {
   return (neuron0x28c7f40()*-0.292778);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1ec0() {
   return (neuron0x28cca10()*0.466672);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1f00() {
   return (neuron0x28cd3e0()*0.0439432);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1f40() {
   return (neuron0x28cddb0()*2.6466);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1f80() {
   return (neuron0x28ce780()*0.455675);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1a10() {
   return (neuron0x28d0590()*-2.9932);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1a50() {
   return (neuron0x28d0870()*-3.13405);
}

double NNfunction_nn_chi2_chi4::synapse0x28f20d0() {
   return (neuron0x28d1240()*-0.359778);
}

double NNfunction_nn_chi2_chi4::synapse0x28f2110() {
   return (neuron0x28d1c10()*-0.970892);
}

double NNfunction_nn_chi2_chi4::synapse0x28f2150() {
   return (neuron0x28d25e0()*-0.574744);
}

double NNfunction_nn_chi2_chi4::synapse0x28f2190() {
   return (neuron0x28d2fb0()*-1.27553);
}

double NNfunction_nn_chi2_chi4::synapse0x28f21d0() {
   return (neuron0x28cbb00()*0.836369);
}

double NNfunction_nn_chi2_chi4::synapse0x28f2210() {
   return (neuron0x28cc4d0()*0.350999);
}

double NNfunction_nn_chi2_chi4::synapse0x28f2250() {
   return (neuron0x28d5d40()*-0.183175);
}

double NNfunction_nn_chi2_chi4::synapse0x28f2290() {
   return (neuron0x28d6710()*-0.343872);
}

double NNfunction_nn_chi2_chi4::synapse0x28f22d0() {
   return (neuron0x28d70e0()*-1.44488);
}

double NNfunction_nn_chi2_chi4::synapse0x28f2310() {
   return (neuron0x28d7ab0()*-0.476916);
}

double NNfunction_nn_chi2_chi4::synapse0x28f2350() {
   return (neuron0x28d8480()*-2.17361);
}

double NNfunction_nn_chi2_chi4::synapse0x28f2390() {
   return (neuron0x28d8e50()*-2.83339);
}

double NNfunction_nn_chi2_chi4::synapse0x28f23d0() {
   return (neuron0x28d9820()*1.3165);
}

double NNfunction_nn_chi2_chi4::synapse0x28f2410() {
   return (neuron0x28da1f0()*-2.34739);
}

double NNfunction_nn_chi2_chi4::synapse0x28f1fc0() {
   return (neuron0x28d0280()*-0.327549);
}

double NNfunction_nn_chi2_chi4::synapse0x28f2000() {
   return (neuron0x28dcdd0()*-1.76888);
}

double NNfunction_nn_chi2_chi4::synapse0x28f2040() {
   return (neuron0x28dd7a0()*0.661485);
}

double NNfunction_nn_chi2_chi4::synapse0x28f2080() {
   return (neuron0x28de170()*-0.653288);
}

double NNfunction_nn_chi2_chi4::synapse0x28f2660() {
   return (neuron0x28deb40()*-1.82395);
}

double NNfunction_nn_chi2_chi4::synapse0x28f26a0() {
   return (neuron0x28df510()*3.69155);
}

double NNfunction_nn_chi2_chi4::synapse0x28f26e0() {
   return (neuron0x28dfee0()*3.36468);
}

double NNfunction_nn_chi2_chi4::synapse0x28f2720() {
   return (neuron0x28e08b0()*1.1387);
}

double NNfunction_nn_chi2_chi4::synapse0x28f2760() {
   return (neuron0x28e1280()*4.58014);
}

double NNfunction_nn_chi2_chi4::synapse0x28f27a0() {
   return (neuron0x28e1e60()*-3.07342);
}

double NNfunction_nn_chi2_chi4::synapse0x28f27e0() {
   return (neuron0x28e2830()*0.461481);
}

double NNfunction_nn_chi2_chi4::synapse0x28f2820() {
   return (neuron0x28d36b0()*-0.177244);
}

double NNfunction_nn_chi2_chi4::synapse0x28f2860() {
   return (neuron0x28d4080()*2.13716);
}

double NNfunction_nn_chi2_chi4::synapse0x28f28a0() {
   return (neuron0x28d4a50()*2.51491);
}

double NNfunction_nn_chi2_chi4::synapse0x28f28e0() {
   return (neuron0x28e7090()*-2.88624);
}

double NNfunction_nn_chi2_chi4::synapse0x28f2920() {
   return (neuron0x28e7940()*0.166499);
}

double NNfunction_nn_chi2_chi4::synapse0x28f2960() {
   return (neuron0x28e8310()*1.52253);
}

double NNfunction_nn_chi2_chi4::synapse0x28f29a0() {
   return (neuron0x28e8ce0()*-1.81268);
}

double NNfunction_nn_chi2_chi4::synapse0x28f2d20() {
   return (neuron0x28c4ca0()*0.376641);
}

double NNfunction_nn_chi2_chi4::synapse0x28f2d60() {
   return (neuron0x28c55f0()*0.182017);
}

double NNfunction_nn_chi2_chi4::synapse0x28f2da0() {
   return (neuron0x28c60d0()*0.570777);
}

double NNfunction_nn_chi2_chi4::synapse0x28f2de0() {
   return (neuron0x2689420()*-0.425067);
}

double NNfunction_nn_chi2_chi4::synapse0x28f2e20() {
   return (neuron0x28c6e70()*0.160337);
}

double NNfunction_nn_chi2_chi4::synapse0x28f2e60() {
   return (neuron0x28c7840()*0.381742);
}

double NNfunction_nn_chi2_chi4::synapse0x28f2ea0() {
   return (neuron0x28c8610()*-0.173617);
}

double NNfunction_nn_chi2_chi4::synapse0x28f2ee0() {
   return (neuron0x28c8fe0()*0.457476);
}

double NNfunction_nn_chi2_chi4::synapse0x28f2f20() {
   return (neuron0x28c99b0()*1.00315);
}

double NNfunction_nn_chi2_chi4::synapse0x28f2f60() {
   return (neuron0x28ca490()*0.527701);
}

double NNfunction_nn_chi2_chi4::synapse0x28f2fa0() {
   return (neuron0x28cae60()*0.516542);
}

double NNfunction_nn_chi2_chi4::synapse0x28f2fe0() {
   return (neuron0x28c7f40()*0.270869);
}

double NNfunction_nn_chi2_chi4::synapse0x28f3020() {
   return (neuron0x28cca10()*0.402109);
}

double NNfunction_nn_chi2_chi4::synapse0x28f3060() {
   return (neuron0x28cd3e0()*-0.0521319);
}

double NNfunction_nn_chi2_chi4::synapse0x28f30a0() {
   return (neuron0x28cddb0()*-0.0944122);
}

double NNfunction_nn_chi2_chi4::synapse0x28f30e0() {
   return (neuron0x28ce780()*0.716678);
}

double NNfunction_nn_chi2_chi4::synapse0x28f2b70() {
   return (neuron0x28d0590()*0.213262);
}

double NNfunction_nn_chi2_chi4::synapse0x28f2bb0() {
   return (neuron0x28d0870()*0.33689);
}

double NNfunction_nn_chi2_chi4::synapse0x28f3230() {
   return (neuron0x28d1240()*0.0236086);
}

double NNfunction_nn_chi2_chi4::synapse0x28f3270() {
   return (neuron0x28d1c10()*0.416801);
}

double NNfunction_nn_chi2_chi4::synapse0x28f32b0() {
   return (neuron0x28d25e0()*-0.0155531);
}

double NNfunction_nn_chi2_chi4::synapse0x28f32f0() {
   return (neuron0x28d2fb0()*0.0420676);
}

double NNfunction_nn_chi2_chi4::synapse0x28f3330() {
   return (neuron0x28cbb00()*0.43162);
}

double NNfunction_nn_chi2_chi4::synapse0x28f3370() {
   return (neuron0x28cc4d0()*0.863597);
}

double NNfunction_nn_chi2_chi4::synapse0x28f33b0() {
   return (neuron0x28d5d40()*0.542613);
}

double NNfunction_nn_chi2_chi4::synapse0x28f33f0() {
   return (neuron0x28d6710()*0.594726);
}

double NNfunction_nn_chi2_chi4::synapse0x28f3430() {
   return (neuron0x28d70e0()*0.770356);
}

double NNfunction_nn_chi2_chi4::synapse0x28f3470() {
   return (neuron0x28d7ab0()*0.381163);
}

double NNfunction_nn_chi2_chi4::synapse0x28f34b0() {
   return (neuron0x28d8480()*0.741351);
}

double NNfunction_nn_chi2_chi4::synapse0x28f34f0() {
   return (neuron0x28d8e50()*0.955771);
}

double NNfunction_nn_chi2_chi4::synapse0x28f3530() {
   return (neuron0x28d9820()*1.15674);
}

double NNfunction_nn_chi2_chi4::synapse0x28f3570() {
   return (neuron0x28da1f0()*0.231546);
}

double NNfunction_nn_chi2_chi4::synapse0x28f3120() {
   return (neuron0x28d0280()*0.722951);
}

double NNfunction_nn_chi2_chi4::synapse0x28f3160() {
   return (neuron0x28dcdd0()*0.65297);
}

double NNfunction_nn_chi2_chi4::synapse0x28f31a0() {
   return (neuron0x28dd7a0()*0.386299);
}

double NNfunction_nn_chi2_chi4::synapse0x28f31e0() {
   return (neuron0x28de170()*-0.162393);
}

double NNfunction_nn_chi2_chi4::synapse0x28f37c0() {
   return (neuron0x28deb40()*0.242027);
}

double NNfunction_nn_chi2_chi4::synapse0x28f3800() {
   return (neuron0x28df510()*0.415984);
}

double NNfunction_nn_chi2_chi4::synapse0x28f3840() {
   return (neuron0x28dfee0()*0.535896);
}

double NNfunction_nn_chi2_chi4::synapse0x28f3880() {
   return (neuron0x28e08b0()*0.195803);
}

double NNfunction_nn_chi2_chi4::synapse0x28f38c0() {
   return (neuron0x28e1280()*1.14794);
}

double NNfunction_nn_chi2_chi4::synapse0x28f3900() {
   return (neuron0x28e1e60()*-0.352694);
}

double NNfunction_nn_chi2_chi4::synapse0x28f3940() {
   return (neuron0x28e2830()*0.811336);
}

double NNfunction_nn_chi2_chi4::synapse0x28f3980() {
   return (neuron0x28d36b0()*0.62689);
}

double NNfunction_nn_chi2_chi4::synapse0x28f39c0() {
   return (neuron0x28d4080()*0.471857);
}

double NNfunction_nn_chi2_chi4::synapse0x28f3a00() {
   return (neuron0x28d4a50()*0.614023);
}

double NNfunction_nn_chi2_chi4::synapse0x28f3a40() {
   return (neuron0x28e7090()*-0.356801);
}

double NNfunction_nn_chi2_chi4::synapse0x28f3a80() {
   return (neuron0x28e7940()*0.645889);
}

double NNfunction_nn_chi2_chi4::synapse0x28f3ac0() {
   return (neuron0x28e8310()*-0.0543889);
}

double NNfunction_nn_chi2_chi4::synapse0x28f3b00() {
   return (neuron0x28e8ce0()*0.858007);
}

double NNfunction_nn_chi2_chi4::synapse0x28f3d60() {
   return (neuron0x28efee0()*-3.73064);
}

double NNfunction_nn_chi2_chi4::synapse0x28f3da0() {
   return (neuron0x28f0280()*2.95522);
}

double NNfunction_nn_chi2_chi4::synapse0x28f3de0() {
   return (neuron0x28f0720()*-9.44167);
}

double NNfunction_nn_chi2_chi4::synapse0x28f3e20() {
   return (neuron0x28f1880()*-2.36176);
}

double NNfunction_nn_chi2_chi4::synapse0x28f3e60() {
   return (neuron0x28f29e0()*2.59089);
}

