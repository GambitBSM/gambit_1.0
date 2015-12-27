#include "NNfunction_nn_chi1_charge1p.h"
#include <cmath>

double NNfunction_nn_chi1_charge1p::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.6902)/15.047;
   input1 = (in1 - 53.3637)/873.316;
   input2 = (in2 - 458.026)/502.297;
   input3 = (in3 - 259.037)/714.382;
   input4 = (in4 - 1111.58)/926.018;
   input5 = (in5 - 1057.09)/982.202;
   input6 = (in6 - 1060.25)/980.553;
   input7 = (in7 - 1045.29)/948.29;
   input8 = (in8 - 1062.72)/992.118;
   input9 = (in9 - 1055.04)/985.377;
   input10 = (in10 - 1039.64)/939.272;
   input11 = (in11 - 1019.41)/944.205;
   input12 = (in12 - 1031.01)/947.403;
   input13 = (in13 - 775.88)/676.746;
   input14 = (in14 - 1032.38)/927.498;
   input15 = (in15 - 1029.62)/928.361;
   input16 = (in16 - 674.254)/570.754;
   input17 = (in17 - 1043.24)/958.304;
   input18 = (in18 - 1040.39)/958.896;
   input19 = (in19 - 1023.45)/895.721;
   input20 = (in20 - -202.773)/482.239;
   input21 = (in21 - -261.883)/1034.45;
   input22 = (in22 - -7.60149)/1054.35;
   input23 = (in23 - -18.0892)/552.592;
   switch(index) {
     case 0:
         return neuron0x2bf9660();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi1_charge1p::Value(int index, double* input) {
   input0 = (input[0] - 23.6902)/15.047;
   input1 = (input[1] - 53.3637)/873.316;
   input2 = (input[2] - 458.026)/502.297;
   input3 = (input[3] - 259.037)/714.382;
   input4 = (input[4] - 1111.58)/926.018;
   input5 = (input[5] - 1057.09)/982.202;
   input6 = (input[6] - 1060.25)/980.553;
   input7 = (input[7] - 1045.29)/948.29;
   input8 = (input[8] - 1062.72)/992.118;
   input9 = (input[9] - 1055.04)/985.377;
   input10 = (input[10] - 1039.64)/939.272;
   input11 = (input[11] - 1019.41)/944.205;
   input12 = (input[12] - 1031.01)/947.403;
   input13 = (input[13] - 775.88)/676.746;
   input14 = (input[14] - 1032.38)/927.498;
   input15 = (input[15] - 1029.62)/928.361;
   input16 = (input[16] - 674.254)/570.754;
   input17 = (input[17] - 1043.24)/958.304;
   input18 = (input[18] - 1040.39)/958.896;
   input19 = (input[19] - 1023.45)/895.721;
   input20 = (input[20] - -202.773)/482.239;
   input21 = (input[21] - -261.883)/1034.45;
   input22 = (input[22] - -7.60149)/1054.35;
   input23 = (input[23] - -18.0892)/552.592;
   switch(index) {
     case 0:
         return neuron0x2bf9660();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi1_charge1p::neuron0x2bc46d0() {
   return input0;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bc4980() {
   return input1;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bc4cc0() {
   return input2;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bc5000() {
   return input3;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bc5340() {
   return input4;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bc5680() {
   return input5;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bc59c0() {
   return input6;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bc5d00() {
   return input7;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bc6040() {
   return input8;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bc6380() {
   return input9;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bc66c0() {
   return input10;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bc6a00() {
   return input11;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bc6d40() {
   return input12;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bc7080() {
   return input13;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bc73c0() {
   return input14;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bc7700() {
   return input15;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bc7a40() {
   return input16;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bc7fa0() {
   return input17;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bc8250() {
   return input18;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bc8590() {
   return input19;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bc88d0() {
   return input20;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bc8c10() {
   return input21;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bc8f50() {
   return input22;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bc9290() {
   return input23;
}

double NNfunction_nn_chi1_charge1p::input0x2bc9700() {
   double input = 4.21697;
   input += synapse0x2bc9a40();
   input += synapse0x2bc9a80();
   input += synapse0x2bc9ac0();
   input += synapse0x2bc9b00();
   input += synapse0x2bc9b40();
   input += synapse0x2bc9b80();
   input += synapse0x2bc9bc0();
   input += synapse0x2bc9c00();
   input += synapse0x2bc9c40();
   input += synapse0x2bc9c80();
   input += synapse0x2bc9cc0();
   input += synapse0x2bc9d00();
   input += synapse0x2bc9d40();
   input += synapse0x2bc9d80();
   input += synapse0x2bc9dc0();
   input += synapse0x2bc9e00();
   input += synapse0x2bc9890();
   input += synapse0x2bc98d0();
   input += synapse0x2980920();
   input += synapse0x2980960();
   input += synapse0x1bd28d0();
   input += synapse0x1bd2910();
   input += synapse0x2bc9f50();
   input += synapse0x2bc9f90();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bc9700() {
   double input = input0x2bc9700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bc9fd0() {
   double input = -4.4377;
   input += synapse0x2bca310();
   input += synapse0x2bca350();
   input += synapse0x2bca390();
   input += synapse0x2bca3d0();
   input += synapse0x2bca410();
   input += synapse0x2bca450();
   input += synapse0x2bca490();
   input += synapse0x2bca4d0();
   input += synapse0x2bca510();
   input += synapse0x2bc9e40();
   input += synapse0x2bc9e80();
   input += synapse0x2bc9ec0();
   input += synapse0x2bc9f00();
   input += synapse0x2bca760();
   input += synapse0x2bca7a0();
   input += synapse0x2bca7e0();
   input += synapse0x2bca160();
   input += synapse0x2bca1a0();
   input += synapse0x2bca930();
   input += synapse0x2bca970();
   input += synapse0x2bca9b0();
   input += synapse0x2bca9f0();
   input += synapse0x2bcaa30();
   input += synapse0x2bcaa70();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bc9fd0() {
   double input = input0x2bc9fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bcaab0() {
   double input = 1.10374;
   input += synapse0x2bcadf0();
   input += synapse0x2bcae30();
   input += synapse0x2bcae70();
   input += synapse0x2bcaeb0();
   input += synapse0x2bcaef0();
   input += synapse0x2bcaf30();
   input += synapse0x2bcaf70();
   input += synapse0x2bcafb0();
   input += synapse0x2bcaff0();
   input += synapse0x2bcb030();
   input += synapse0x2bcb070();
   input += synapse0x2bcb0b0();
   input += synapse0x2bcb0f0();
   input += synapse0x2bcb130();
   input += synapse0x2bcb170();
   input += synapse0x2bcb1b0();
   input += synapse0x2bcac40();
   input += synapse0x2bcac80();
   input += synapse0x298e770();
   input += synapse0x298e7b0();
   input += synapse0x2bcd0e0();
   input += synapse0x2bcd120();
   input += synapse0x2bc4410();
   input += synapse0x2bc4450();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bcaab0() {
   double input = input0x2bcaab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x298eed0() {
   double input = 1.84258;
   input += synapse0x298f060();
   input += synapse0x2bca670();
   input += synapse0x2bca6b0();
   input += synapse0x2bca6f0();
   input += synapse0x2bcb300();
   input += synapse0x2bcb340();
   input += synapse0x2bcb380();
   input += synapse0x2bcb3c0();
   input += synapse0x2bcb400();
   input += synapse0x2bcb440();
   input += synapse0x2bcb480();
   input += synapse0x2bcb4c0();
   input += synapse0x2bcb500();
   input += synapse0x2bcb540();
   input += synapse0x2bcb580();
   input += synapse0x2bcb5c0();
   input += synapse0x2bc4490();
   input += synapse0x2bc44d0();
   input += synapse0x2bcb710();
   input += synapse0x2bcb750();
   input += synapse0x2bcb790();
   input += synapse0x2bcb7d0();
   input += synapse0x2bcb810();
   input += synapse0x2bcb850();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x298eed0() {
   double input = input0x298eed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bcb890() {
   double input = 2.2942;
   input += synapse0x2bcbbd0();
   input += synapse0x2bcbc10();
   input += synapse0x2bcbc50();
   input += synapse0x2bcbc90();
   input += synapse0x2bcbcd0();
   input += synapse0x2bcbd10();
   input += synapse0x2bcbd50();
   input += synapse0x2bcbd90();
   input += synapse0x2bcbdd0();
   input += synapse0x2bcbe10();
   input += synapse0x2bcbe50();
   input += synapse0x2bcbe90();
   input += synapse0x2bcbed0();
   input += synapse0x2bcbf10();
   input += synapse0x2bcbf50();
   input += synapse0x2bcbf90();
   input += synapse0x2bcc0e0();
   input += synapse0x2bcba20();
   input += synapse0x2bcba60();
   input += synapse0x2bcd220();
   input += synapse0x2bcd260();
   input += synapse0x2bcd2a0();
   input += synapse0x2bcd2e0();
   input += synapse0x2bcd320();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bcb890() {
   double input = input0x2bcb890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bcd360() {
   double input = 2.05622;
   input += synapse0x2bcd6a0();
   input += synapse0x2bcd6e0();
   input += synapse0x2bcd720();
   input += synapse0x2bcd760();
   input += synapse0x2bcd7a0();
   input += synapse0x2bcd7e0();
   input += synapse0x2bcd820();
   input += synapse0x2bcd860();
   input += synapse0x2bcd8a0();
   input += synapse0x298eac0();
   input += synapse0x298eb00();
   input += synapse0x298eb40();
   input += synapse0x298eb80();
   input += synapse0x298ebc0();
   input += synapse0x298ec00();
   input += synapse0x298ec40();
   input += synapse0x2bcd4f0();
   input += synapse0x2bcd530();
   input += synapse0x298ed90();
   input += synapse0x298edd0();
   input += synapse0x298ee10();
   input += synapse0x298ee50();
   input += synapse0x298ee90();
   input += synapse0x2bce0f0();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bcd360() {
   double input = input0x2bcd360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bce130() {
   double input = -2.83083;
   input += synapse0x2bce470();
   input += synapse0x2bce4b0();
   input += synapse0x2bce4f0();
   input += synapse0x2bce530();
   input += synapse0x2bce570();
   input += synapse0x2bce5b0();
   input += synapse0x2bce5f0();
   input += synapse0x2bce630();
   input += synapse0x2bce670();
   input += synapse0x2bce6b0();
   input += synapse0x2bce6f0();
   input += synapse0x2bce730();
   input += synapse0x2bce770();
   input += synapse0x2bce7b0();
   input += synapse0x2bce7f0();
   input += synapse0x2bce830();
   input += synapse0x2bce2c0();
   input += synapse0x2bce300();
   input += synapse0x2bce980();
   input += synapse0x2bce9c0();
   input += synapse0x2bcea00();
   input += synapse0x2bcea40();
   input += synapse0x2bcea80();
   input += synapse0x2bceac0();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bce130() {
   double input = input0x2bce130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bceb00() {
   double input = 0.945068;
   input += synapse0x2bcee40();
   input += synapse0x2bcee80();
   input += synapse0x2bceec0();
   input += synapse0x2bcef00();
   input += synapse0x2bcef40();
   input += synapse0x2bcef80();
   input += synapse0x2bcefc0();
   input += synapse0x2bcf000();
   input += synapse0x2bcf040();
   input += synapse0x2bcf080();
   input += synapse0x2bcf0c0();
   input += synapse0x2bcf100();
   input += synapse0x2bcf140();
   input += synapse0x2bcf180();
   input += synapse0x2bcf1c0();
   input += synapse0x2bcf200();
   input += synapse0x2bcec90();
   input += synapse0x2bcecd0();
   input += synapse0x2bcf350();
   input += synapse0x2bcf390();
   input += synapse0x2bcf3d0();
   input += synapse0x2bcf410();
   input += synapse0x2bcf450();
   input += synapse0x2bcf490();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bceb00() {
   double input = input0x2bceb00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bcf4d0() {
   double input = -4.79277;
   input += synapse0x2bc7e90();
   input += synapse0x2bc7ed0();
   input += synapse0x2bc7f10();
   input += synapse0x2bc7f50();
   input += synapse0x2bcfa20();
   input += synapse0x2bcfa60();
   input += synapse0x2bcfaa0();
   input += synapse0x2bcfae0();
   input += synapse0x2bcfb20();
   input += synapse0x2bcfb60();
   input += synapse0x2bcfba0();
   input += synapse0x2bcfbe0();
   input += synapse0x2bcfc20();
   input += synapse0x2bcfc60();
   input += synapse0x2bcfca0();
   input += synapse0x2bcfce0();
   input += synapse0x2bcf660();
   input += synapse0x2bcf6a0();
   input += synapse0x2bcfe30();
   input += synapse0x2bcfe70();
   input += synapse0x2bcfeb0();
   input += synapse0x2bcfef0();
   input += synapse0x2bcff30();
   input += synapse0x2bcff70();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bcf4d0() {
   double input = input0x2bcf4d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bcffb0() {
   double input = -10.2604;
   input += synapse0x2bd02f0();
   input += synapse0x2bd0330();
   input += synapse0x2bd0370();
   input += synapse0x2bd03b0();
   input += synapse0x2bd03f0();
   input += synapse0x2bd0430();
   input += synapse0x2bd0470();
   input += synapse0x2bd04b0();
   input += synapse0x2bd04f0();
   input += synapse0x2bd0530();
   input += synapse0x2bd0570();
   input += synapse0x2bd05b0();
   input += synapse0x2bd05f0();
   input += synapse0x2bd0630();
   input += synapse0x2bd0670();
   input += synapse0x2bd06b0();
   input += synapse0x2bd0140();
   input += synapse0x2bd0180();
   input += synapse0x2bd0800();
   input += synapse0x2bd0840();
   input += synapse0x2bd0880();
   input += synapse0x2bd08c0();
   input += synapse0x2bd0900();
   input += synapse0x2bd0940();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bcffb0() {
   double input = input0x2bcffb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bd0980() {
   double input = 1.67411;
   input += synapse0x2bd0cc0();
   input += synapse0x2bd0d00();
   input += synapse0x2bd0d40();
   input += synapse0x2bd0d80();
   input += synapse0x2bd0dc0();
   input += synapse0x2bd0e00();
   input += synapse0x2bd0e40();
   input += synapse0x2bd0e80();
   input += synapse0x2bd0ec0();
   input += synapse0x2bd0f00();
   input += synapse0x2bd0f40();
   input += synapse0x2bd0f80();
   input += synapse0x2bd0fc0();
   input += synapse0x2bd1000();
   input += synapse0x2bd1040();
   input += synapse0x2bd1080();
   input += synapse0x2bd0b10();
   input += synapse0x2bd0b50();
   input += synapse0x2bcd8e0();
   input += synapse0x2bcd920();
   input += synapse0x2bcd960();
   input += synapse0x2bcd9a0();
   input += synapse0x2bcd9e0();
   input += synapse0x2bcda20();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bd0980() {
   double input = input0x2bd0980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bcda60() {
   double input = -0.887405;
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
   input += synapse0x2bd21e0();
   input += synapse0x2bd2220();
   input += synapse0x2bd2260();
   input += synapse0x2bcdbf0();
   input += synapse0x2bcdc30();
   input += synapse0x2bd23b0();
   input += synapse0x2bd23f0();
   input += synapse0x2bd2430();
   input += synapse0x2bd2470();
   input += synapse0x2bd24b0();
   input += synapse0x2bd24f0();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bcda60() {
   double input = input0x2bcda60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bd2530() {
   double input = -4.03443;
   input += synapse0x2bd2870();
   input += synapse0x2bd28b0();
   input += synapse0x2bd28f0();
   input += synapse0x2bd2930();
   input += synapse0x2bd2970();
   input += synapse0x2bd29b0();
   input += synapse0x2bd29f0();
   input += synapse0x2bd2a30();
   input += synapse0x2bd2a70();
   input += synapse0x2bd2ab0();
   input += synapse0x2bd2af0();
   input += synapse0x2bd2b30();
   input += synapse0x2bd2b70();
   input += synapse0x2bd2bb0();
   input += synapse0x2bd2bf0();
   input += synapse0x2bd2c30();
   input += synapse0x2bd26c0();
   input += synapse0x2bd2700();
   input += synapse0x2bd2d80();
   input += synapse0x2bd2dc0();
   input += synapse0x2bd2e00();
   input += synapse0x2bd2e40();
   input += synapse0x2bd2e80();
   input += synapse0x2bd2ec0();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bd2530() {
   double input = input0x2bd2530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bd2f00() {
   double input = -2.01786;
   input += synapse0x2bd3240();
   input += synapse0x2bd3280();
   input += synapse0x2bd32c0();
   input += synapse0x2bd3300();
   input += synapse0x2bd3340();
   input += synapse0x2bd3380();
   input += synapse0x2bd33c0();
   input += synapse0x2bd3400();
   input += synapse0x2bd3440();
   input += synapse0x2bd3480();
   input += synapse0x2bd34c0();
   input += synapse0x2bd3500();
   input += synapse0x2bd3540();
   input += synapse0x2bd3580();
   input += synapse0x2bd35c0();
   input += synapse0x2bd3600();
   input += synapse0x2bd3090();
   input += synapse0x2bd30d0();
   input += synapse0x2bd3750();
   input += synapse0x2bd3790();
   input += synapse0x2bd37d0();
   input += synapse0x2bd3810();
   input += synapse0x2bd3850();
   input += synapse0x2bd3890();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bd2f00() {
   double input = input0x2bd2f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bd38d0() {
   double input = -1.42342;
   input += synapse0x2bd3c10();
   input += synapse0x2bd3c50();
   input += synapse0x2bd3c90();
   input += synapse0x2bd3cd0();
   input += synapse0x2bd3d10();
   input += synapse0x2bd3d50();
   input += synapse0x2bd3d90();
   input += synapse0x2bd3dd0();
   input += synapse0x2bd3e10();
   input += synapse0x2bd3e50();
   input += synapse0x2bd3e90();
   input += synapse0x2bd3ed0();
   input += synapse0x2bd3f10();
   input += synapse0x2bd3f50();
   input += synapse0x2bd3f90();
   input += synapse0x2bd3fd0();
   input += synapse0x2bd3a60();
   input += synapse0x2bd3aa0();
   input += synapse0x2bd4120();
   input += synapse0x2bd4160();
   input += synapse0x2bd41a0();
   input += synapse0x2bd41e0();
   input += synapse0x2bd4220();
   input += synapse0x2bd4260();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bd38d0() {
   double input = input0x2bd38d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bd42a0() {
   double input = -2.57934;
   input += synapse0x2bd45e0();
   input += synapse0x2bc4860();
   input += synapse0x2bc48a0();
   input += synapse0x2bc4ba0();
   input += synapse0x2bc4be0();
   input += synapse0x2bc4ee0();
   input += synapse0x2bc4f20();
   input += synapse0x2bc5220();
   input += synapse0x2bc5260();
   input += synapse0x2bc5560();
   input += synapse0x2bc55a0();
   input += synapse0x2bc58a0();
   input += synapse0x2bc58e0();
   input += synapse0x2bc5be0();
   input += synapse0x2bc5c20();
   input += synapse0x2bc5f20();
   input += synapse0x2bc5f60();
   input += synapse0x2bc6260();
   input += synapse0x2bc62a0();
   input += synapse0x2bc65a0();
   input += synapse0x2bc65e0();
   input += synapse0x2bc68e0();
   input += synapse0x2bc6920();
   input += synapse0x2bc6c20();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bd42a0() {
   double input = input0x2bd42a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bd60b0() {
   double input = -1.29796;
   input += synapse0x2bc6c60();
   input += synapse0x2bc7920();
   input += synapse0x2bc7960();
   input += synapse0x2bd4430();
   input += synapse0x2bd4470();
   input += synapse0x2bc7c60();
   input += synapse0x2bc7ca0();
   input += synapse0x2bc8130();
   input += synapse0x2bc8170();
   input += synapse0x2bc8470();
   input += synapse0x2bc84b0();
   input += synapse0x2bc87b0();
   input += synapse0x2bc87f0();
   input += synapse0x2bc8af0();
   input += synapse0x2bc8b30();
   input += synapse0x2bc8e30();
   input += synapse0x2bc8e70();
   input += synapse0x2bc9170();
   input += synapse0x2bc91b0();
   input += synapse0x2bc94b0();
   input += synapse0x2bc94f0();
   input += synapse0x2bc6f60();
   input += synapse0x2bc6fa0();
   input += synapse0x2bd6350();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bd60b0() {
   double input = input0x2bd60b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bd6390() {
   double input = -1.54407;
   input += synapse0x2bd66d0();
   input += synapse0x2bd6710();
   input += synapse0x2bd6750();
   input += synapse0x2bd6790();
   input += synapse0x2bd67d0();
   input += synapse0x2bd6810();
   input += synapse0x2bd6850();
   input += synapse0x2bd6890();
   input += synapse0x2bd68d0();
   input += synapse0x2bd6910();
   input += synapse0x2bd6950();
   input += synapse0x2bd6990();
   input += synapse0x2bd69d0();
   input += synapse0x2bd6a10();
   input += synapse0x2bd6a50();
   input += synapse0x2bd6a90();
   input += synapse0x2bd6520();
   input += synapse0x2bd6560();
   input += synapse0x2bd6be0();
   input += synapse0x2bd6c20();
   input += synapse0x2bd6c60();
   input += synapse0x2bd6ca0();
   input += synapse0x2bd6ce0();
   input += synapse0x2bd6d20();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bd6390() {
   double input = input0x2bd6390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bd6d60() {
   double input = 9.85753;
   input += synapse0x2bd70a0();
   input += synapse0x2bd70e0();
   input += synapse0x2bd7120();
   input += synapse0x2bd7160();
   input += synapse0x2bd71a0();
   input += synapse0x2bd71e0();
   input += synapse0x2bd7220();
   input += synapse0x2bd7260();
   input += synapse0x2bd72a0();
   input += synapse0x2bd72e0();
   input += synapse0x2bd7320();
   input += synapse0x2bd7360();
   input += synapse0x2bd73a0();
   input += synapse0x2bd73e0();
   input += synapse0x2bd7420();
   input += synapse0x2bd7460();
   input += synapse0x2bd6ef0();
   input += synapse0x2bd6f30();
   input += synapse0x2bd75b0();
   input += synapse0x2bd75f0();
   input += synapse0x2bd7630();
   input += synapse0x2bd7670();
   input += synapse0x2bd76b0();
   input += synapse0x2bd76f0();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bd6d60() {
   double input = input0x2bd6d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bd7730() {
   double input = 1.17652;
   input += synapse0x2bd7a70();
   input += synapse0x2bd7ab0();
   input += synapse0x2bd7af0();
   input += synapse0x2bd7b30();
   input += synapse0x2bd7b70();
   input += synapse0x2bd7bb0();
   input += synapse0x2bd7bf0();
   input += synapse0x2bd7c30();
   input += synapse0x2bd7c70();
   input += synapse0x2bd7cb0();
   input += synapse0x2bd7cf0();
   input += synapse0x2bd7d30();
   input += synapse0x2bd7d70();
   input += synapse0x2bd7db0();
   input += synapse0x2bd7df0();
   input += synapse0x2bd7e30();
   input += synapse0x2bd78c0();
   input += synapse0x2bd7900();
   input += synapse0x2bd7f80();
   input += synapse0x2bd7fc0();
   input += synapse0x2bd8000();
   input += synapse0x2bd8040();
   input += synapse0x2bd8080();
   input += synapse0x2bd80c0();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bd7730() {
   double input = input0x2bd7730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bd8100() {
   double input = -3.22745;
   input += synapse0x2bd8440();
   input += synapse0x2bd8480();
   input += synapse0x2bd84c0();
   input += synapse0x2bd8500();
   input += synapse0x2bd8540();
   input += synapse0x2bd8580();
   input += synapse0x2bd85c0();
   input += synapse0x2bd8600();
   input += synapse0x2bd8640();
   input += synapse0x2bd8680();
   input += synapse0x2bd86c0();
   input += synapse0x2bd8700();
   input += synapse0x2bd8740();
   input += synapse0x2bd8780();
   input += synapse0x2bd87c0();
   input += synapse0x2bd8800();
   input += synapse0x2bd8290();
   input += synapse0x2bd82d0();
   input += synapse0x2bd8950();
   input += synapse0x2bd8990();
   input += synapse0x2bd89d0();
   input += synapse0x2bd8a10();
   input += synapse0x2bd8a50();
   input += synapse0x2bd8a90();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bd8100() {
   double input = input0x2bd8100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bd8ad0() {
   double input = -0.343779;
   input += synapse0x2bd8e10();
   input += synapse0x2bd8e50();
   input += synapse0x2bd8e90();
   input += synapse0x2bd8ed0();
   input += synapse0x2bd8f10();
   input += synapse0x2bd8f50();
   input += synapse0x2bd8f90();
   input += synapse0x2bd8fd0();
   input += synapse0x2bd9010();
   input += synapse0x2bd11d0();
   input += synapse0x2bd1210();
   input += synapse0x2bd1250();
   input += synapse0x2bd1290();
   input += synapse0x2bd12d0();
   input += synapse0x2bd1310();
   input += synapse0x2bd1350();
   input += synapse0x2bd8c60();
   input += synapse0x2bd8ca0();
   input += synapse0x2bd14a0();
   input += synapse0x2bd14e0();
   input += synapse0x2bd1520();
   input += synapse0x2bd1560();
   input += synapse0x2bd15a0();
   input += synapse0x2bd15e0();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bd8ad0() {
   double input = input0x2bd8ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bd1620() {
   double input = -0.0533629;
   input += synapse0x2bd1960();
   input += synapse0x2bd19a0();
   input += synapse0x2bd19e0();
   input += synapse0x2bd1a20();
   input += synapse0x2bd1a60();
   input += synapse0x2bd1aa0();
   input += synapse0x2bd1ae0();
   input += synapse0x2bd1b20();
   input += synapse0x2bd1b60();
   input += synapse0x2bd1ba0();
   input += synapse0x2bd1be0();
   input += synapse0x2bd1c20();
   input += synapse0x2bd1c60();
   input += synapse0x2bd1ca0();
   input += synapse0x2bd1ce0();
   input += synapse0x2bd1d20();
   input += synapse0x2bd17b0();
   input += synapse0x2bd17f0();
   input += synapse0x2bd1e70();
   input += synapse0x2bd1eb0();
   input += synapse0x2bd1ef0();
   input += synapse0x2bd1f30();
   input += synapse0x2bd1f70();
   input += synapse0x2bd1fb0();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bd1620() {
   double input = input0x2bd1620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bd1ff0() {
   double input = -6.73418;
   input += synapse0x2bd2180();
   input += synapse0x2bdb210();
   input += synapse0x2bdb250();
   input += synapse0x2bdb290();
   input += synapse0x2bdb2d0();
   input += synapse0x2bdb310();
   input += synapse0x2bdb350();
   input += synapse0x2bdb390();
   input += synapse0x2bdb3d0();
   input += synapse0x2bdb410();
   input += synapse0x2bdb450();
   input += synapse0x2bdb490();
   input += synapse0x2bdb4d0();
   input += synapse0x2bdb510();
   input += synapse0x2bdb550();
   input += synapse0x2bdb590();
   input += synapse0x2bdb060();
   input += synapse0x2bdb0a0();
   input += synapse0x2bdb6e0();
   input += synapse0x2bdb720();
   input += synapse0x2bdb760();
   input += synapse0x2bdb7a0();
   input += synapse0x2bdb7e0();
   input += synapse0x2bdb820();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bd1ff0() {
   double input = input0x2bd1ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bdb860() {
   double input = 2.03014;
   input += synapse0x2bdbba0();
   input += synapse0x2bdbbe0();
   input += synapse0x2bdbc20();
   input += synapse0x2bdbc60();
   input += synapse0x2bdbca0();
   input += synapse0x2bdbce0();
   input += synapse0x2bdbd20();
   input += synapse0x2bdbd60();
   input += synapse0x2bdbda0();
   input += synapse0x2bdbde0();
   input += synapse0x2bdbe20();
   input += synapse0x2bdbe60();
   input += synapse0x2bdbea0();
   input += synapse0x2bdbee0();
   input += synapse0x2bdbf20();
   input += synapse0x2bdbf60();
   input += synapse0x2bdb9f0();
   input += synapse0x2bdba30();
   input += synapse0x2bdc0b0();
   input += synapse0x2bdc0f0();
   input += synapse0x2bdc130();
   input += synapse0x2bdc170();
   input += synapse0x2bdc1b0();
   input += synapse0x2bdc1f0();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bdb860() {
   double input = input0x2bdb860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bdc230() {
   double input = 1.02029;
   input += synapse0x2bdc570();
   input += synapse0x2bdc5b0();
   input += synapse0x2bdc5f0();
   input += synapse0x2bdc630();
   input += synapse0x2bdc670();
   input += synapse0x2bdc6b0();
   input += synapse0x2bdc6f0();
   input += synapse0x2bdc730();
   input += synapse0x2bdc770();
   input += synapse0x2bdc7b0();
   input += synapse0x2bdc7f0();
   input += synapse0x2bdc830();
   input += synapse0x2bdc870();
   input += synapse0x2bdc8b0();
   input += synapse0x2bdc8f0();
   input += synapse0x2bdc930();
   input += synapse0x2bdc3c0();
   input += synapse0x2bdc400();
   input += synapse0x2bdca80();
   input += synapse0x2bdcac0();
   input += synapse0x2bdcb00();
   input += synapse0x2bdcb40();
   input += synapse0x2bdcb80();
   input += synapse0x2bdcbc0();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bdc230() {
   double input = input0x2bdc230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bdcc00() {
   double input = -0.741041;
   input += synapse0x2bdcf40();
   input += synapse0x2bdcf80();
   input += synapse0x2bdcfc0();
   input += synapse0x2bdd000();
   input += synapse0x2bdd040();
   input += synapse0x2bdd080();
   input += synapse0x2bdd0c0();
   input += synapse0x2bdd100();
   input += synapse0x2bdd140();
   input += synapse0x2bdd180();
   input += synapse0x2bdd1c0();
   input += synapse0x2bdd200();
   input += synapse0x2bdd240();
   input += synapse0x2bdd280();
   input += synapse0x2bdd2c0();
   input += synapse0x2bdd300();
   input += synapse0x2bdcd90();
   input += synapse0x2bdcdd0();
   input += synapse0x2bdd450();
   input += synapse0x2bdd490();
   input += synapse0x2bdd4d0();
   input += synapse0x2bdd510();
   input += synapse0x2bdd550();
   input += synapse0x2bdd590();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bdcc00() {
   double input = input0x2bdcc00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bdd5d0() {
   double input = -0.107376;
   input += synapse0x2bdd910();
   input += synapse0x2bdd950();
   input += synapse0x2bdd990();
   input += synapse0x2bdd9d0();
   input += synapse0x2bdda10();
   input += synapse0x2bdda50();
   input += synapse0x2bdda90();
   input += synapse0x2bddad0();
   input += synapse0x2bddb10();
   input += synapse0x2bddb50();
   input += synapse0x2bddb90();
   input += synapse0x2bddbd0();
   input += synapse0x2bddc10();
   input += synapse0x2bddc50();
   input += synapse0x2bddc90();
   input += synapse0x2bddcd0();
   input += synapse0x2bdd760();
   input += synapse0x2bdd7a0();
   input += synapse0x2bdde20();
   input += synapse0x2bdde60();
   input += synapse0x2bddea0();
   input += synapse0x2bddee0();
   input += synapse0x2bddf20();
   input += synapse0x2bddf60();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bdd5d0() {
   double input = input0x2bdd5d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bddfa0() {
   double input = -0.064945;
   input += synapse0x2bde2e0();
   input += synapse0x2bde320();
   input += synapse0x2bde360();
   input += synapse0x2bde3a0();
   input += synapse0x2bde3e0();
   input += synapse0x2bde420();
   input += synapse0x2bde460();
   input += synapse0x2bde4a0();
   input += synapse0x2bde4e0();
   input += synapse0x2bde520();
   input += synapse0x2bde560();
   input += synapse0x2bde5a0();
   input += synapse0x2bde5e0();
   input += synapse0x2bde620();
   input += synapse0x2bde660();
   input += synapse0x2bde6a0();
   input += synapse0x2bde130();
   input += synapse0x2bde170();
   input += synapse0x2bde7f0();
   input += synapse0x2bde830();
   input += synapse0x2bde870();
   input += synapse0x2bde8b0();
   input += synapse0x2bde8f0();
   input += synapse0x2bde930();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bddfa0() {
   double input = input0x2bddfa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bde970() {
   double input = -0.105112;
   input += synapse0x2bdecb0();
   input += synapse0x2bdecf0();
   input += synapse0x2bded30();
   input += synapse0x2bded70();
   input += synapse0x2bdedb0();
   input += synapse0x2bdedf0();
   input += synapse0x2bdee30();
   input += synapse0x2bdee70();
   input += synapse0x2bdeeb0();
   input += synapse0x2bdeef0();
   input += synapse0x2bdef30();
   input += synapse0x2bdef70();
   input += synapse0x2bdefb0();
   input += synapse0x2bdeff0();
   input += synapse0x2bdf030();
   input += synapse0x2bdf070();
   input += synapse0x2bdeb00();
   input += synapse0x2bdeb40();
   input += synapse0x2bdf1c0();
   input += synapse0x2bdf200();
   input += synapse0x2bdf240();
   input += synapse0x2bdf280();
   input += synapse0x2bdf2c0();
   input += synapse0x2bdf300();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bde970() {
   double input = input0x2bde970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bdf340() {
   double input = -1.95621;
   input += synapse0x2bdf680();
   input += synapse0x2bdf6c0();
   input += synapse0x2bdf700();
   input += synapse0x2bdf740();
   input += synapse0x2bdf780();
   input += synapse0x2bdf7c0();
   input += synapse0x2bdf800();
   input += synapse0x2bdf840();
   input += synapse0x2bdf880();
   input += synapse0x2bdf8c0();
   input += synapse0x2bdf900();
   input += synapse0x2bdf940();
   input += synapse0x2bdf980();
   input += synapse0x2bdf9c0();
   input += synapse0x2bdfa00();
   input += synapse0x2bdfa40();
   input += synapse0x2bdf4d0();
   input += synapse0x2bdf510();
   input += synapse0x2bdfb90();
   input += synapse0x2bdfbd0();
   input += synapse0x2bdfc10();
   input += synapse0x2bdfc50();
   input += synapse0x2bdfc90();
   input += synapse0x2bdfcd0();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bdf340() {
   double input = input0x2bdf340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bdfd10() {
   double input = 1.17131;
   input += synapse0x2be0050();
   input += synapse0x2bd4620();
   input += synapse0x2bd4660();
   input += synapse0x2bd46a0();
   input += synapse0x2bd48f0();
   input += synapse0x2bd4930();
   input += synapse0x2bd4970();
   input += synapse0x2bd4bc0();
   input += synapse0x2bd4c00();
   input += synapse0x2bd4e50();
   input += synapse0x2bd4e90();
   input += synapse0x2bd4ed0();
   input += synapse0x2bd5120();
   input += synapse0x2bd5160();
   input += synapse0x2bd53b0();
   input += synapse0x2bd53f0();
   input += synapse0x2bdfea0();
   input += synapse0x2bdfee0();
   input += synapse0x2bd5540();
   input += synapse0x2bd5a50();
   input += synapse0x2bd5a90();
   input += synapse0x2bd5ad0();
   input += synapse0x2bd5d20();
   input += synapse0x2bd5d60();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bdfd10() {
   double input = input0x2bdfd10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bd5da0() {
   double input = -0.290829;
   input += synapse0x2bd5610();
   input += synapse0x2bd5650();
   input += synapse0x2bd5690();
   input += synapse0x2bd56d0();
   input += synapse0x2bd6050();
   input += synapse0x2be23a0();
   input += synapse0x2be23e0();
   input += synapse0x2be2420();
   input += synapse0x2be2460();
   input += synapse0x2be24a0();
   input += synapse0x2be24e0();
   input += synapse0x2be2520();
   input += synapse0x2be2560();
   input += synapse0x2be25a0();
   input += synapse0x2be25e0();
   input += synapse0x2be2620();
   input += synapse0x2bd5f30();
   input += synapse0x2bd5f70();
   input += synapse0x2be2770();
   input += synapse0x2be27b0();
   input += synapse0x2be27f0();
   input += synapse0x2be2830();
   input += synapse0x2be2870();
   input += synapse0x2be28b0();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bd5da0() {
   double input = input0x2bd5da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2be28f0() {
   double input = 0.763224;
   input += synapse0x2be2c30();
   input += synapse0x2be2c70();
   input += synapse0x2be2cb0();
   input += synapse0x2be2cf0();
   input += synapse0x2be2d30();
   input += synapse0x2be2d70();
   input += synapse0x2be2db0();
   input += synapse0x2be2df0();
   input += synapse0x2be2e30();
   input += synapse0x2be2e70();
   input += synapse0x2be2eb0();
   input += synapse0x2be2ef0();
   input += synapse0x2be2f30();
   input += synapse0x2be2f70();
   input += synapse0x2be2fb0();
   input += synapse0x2be2ff0();
   input += synapse0x2be2a80();
   input += synapse0x2be2ac0();
   input += synapse0x2be3140();
   input += synapse0x2be3180();
   input += synapse0x2be31c0();
   input += synapse0x2be3200();
   input += synapse0x2be3240();
   input += synapse0x2be3280();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2be28f0() {
   double input = input0x2be28f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2be32c0() {
   double input = 0.663971;
   input += synapse0x2be3600();
   input += synapse0x2be3640();
   input += synapse0x2be3680();
   input += synapse0x2be36c0();
   input += synapse0x2be3700();
   input += synapse0x2be3740();
   input += synapse0x2be3780();
   input += synapse0x2be37c0();
   input += synapse0x2be3800();
   input += synapse0x2be3840();
   input += synapse0x2be3880();
   input += synapse0x2be38c0();
   input += synapse0x2be3900();
   input += synapse0x2be3940();
   input += synapse0x2be3980();
   input += synapse0x2be39c0();
   input += synapse0x2be3450();
   input += synapse0x2be3490();
   input += synapse0x2be3b10();
   input += synapse0x2be3b50();
   input += synapse0x2be3b90();
   input += synapse0x2be3bd0();
   input += synapse0x2be3c10();
   input += synapse0x2be3c50();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2be32c0() {
   double input = input0x2be32c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2be3c90() {
   double input = 0.360855;
   input += synapse0x2be3fd0();
   input += synapse0x2be4010();
   input += synapse0x2be4050();
   input += synapse0x2be4090();
   input += synapse0x2be40d0();
   input += synapse0x2be4110();
   input += synapse0x2be4150();
   input += synapse0x2be4190();
   input += synapse0x2be41d0();
   input += synapse0x2be4210();
   input += synapse0x2be4250();
   input += synapse0x2be4290();
   input += synapse0x2be42d0();
   input += synapse0x2be4310();
   input += synapse0x2be4350();
   input += synapse0x2be4390();
   input += synapse0x2be3e20();
   input += synapse0x2be3e60();
   input += synapse0x2be44e0();
   input += synapse0x2be4520();
   input += synapse0x2be4560();
   input += synapse0x2be45a0();
   input += synapse0x2be45e0();
   input += synapse0x2be4620();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2be3c90() {
   double input = input0x2be3c90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2be4660() {
   double input = 1.80014;
   input += synapse0x2be49a0();
   input += synapse0x2be49e0();
   input += synapse0x2be4a20();
   input += synapse0x2be4a60();
   input += synapse0x2be4aa0();
   input += synapse0x2be4ae0();
   input += synapse0x2be4b20();
   input += synapse0x2be4b60();
   input += synapse0x2be4ba0();
   input += synapse0x2be4be0();
   input += synapse0x2be4c20();
   input += synapse0x2be4c60();
   input += synapse0x2be4ca0();
   input += synapse0x2be4ce0();
   input += synapse0x2be4d20();
   input += synapse0x2be4d60();
   input += synapse0x2be47f0();
   input += synapse0x2be4830();
   input += synapse0x2be4eb0();
   input += synapse0x2be4ef0();
   input += synapse0x2be4f30();
   input += synapse0x2be4f70();
   input += synapse0x2be4fb0();
   input += synapse0x2be4ff0();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2be4660() {
   double input = input0x2be4660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2be5030() {
   double input = 2.95651;
   input += synapse0x2be5370();
   input += synapse0x2be53b0();
   input += synapse0x2be53f0();
   input += synapse0x2be5430();
   input += synapse0x2be5470();
   input += synapse0x2be54b0();
   input += synapse0x2be54f0();
   input += synapse0x2be5530();
   input += synapse0x2be5570();
   input += synapse0x2be55b0();
   input += synapse0x2be55f0();
   input += synapse0x2be5630();
   input += synapse0x2be5670();
   input += synapse0x2be56b0();
   input += synapse0x2be56f0();
   input += synapse0x2be5730();
   input += synapse0x2be51c0();
   input += synapse0x2be5200();
   input += synapse0x2be5880();
   input += synapse0x2be58c0();
   input += synapse0x2be5900();
   input += synapse0x2be5940();
   input += synapse0x2be5980();
   input += synapse0x2be59c0();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2be5030() {
   double input = input0x2be5030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2be5a00() {
   double input = 1.13722;
   input += synapse0x2be5d40();
   input += synapse0x2be5d80();
   input += synapse0x2be5dc0();
   input += synapse0x2be5e00();
   input += synapse0x2be5e40();
   input += synapse0x2be5e80();
   input += synapse0x2be5ec0();
   input += synapse0x2be5f00();
   input += synapse0x2be5f40();
   input += synapse0x2be5f80();
   input += synapse0x2be5fc0();
   input += synapse0x2be6000();
   input += synapse0x2be6040();
   input += synapse0x2be6080();
   input += synapse0x2be60c0();
   input += synapse0x2be6100();
   input += synapse0x2be5b90();
   input += synapse0x2be5bd0();
   input += synapse0x2be6250();
   input += synapse0x2be6290();
   input += synapse0x2be62d0();
   input += synapse0x2be6310();
   input += synapse0x2be6350();
   input += synapse0x2be6390();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2be5a00() {
   double input = input0x2be5a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2be63d0() {
   double input = 0.137674;
   input += synapse0x2be6710();
   input += synapse0x2be6750();
   input += synapse0x2be6790();
   input += synapse0x2be67d0();
   input += synapse0x2be6810();
   input += synapse0x2be6850();
   input += synapse0x2be6890();
   input += synapse0x2be68d0();
   input += synapse0x2be6910();
   input += synapse0x2be6950();
   input += synapse0x2be6990();
   input += synapse0x2be69d0();
   input += synapse0x2be6a10();
   input += synapse0x2be6a50();
   input += synapse0x2be6a90();
   input += synapse0x2be6ad0();
   input += synapse0x2be6560();
   input += synapse0x2be65a0();
   input += synapse0x2be6c20();
   input += synapse0x2be6c60();
   input += synapse0x2be6ca0();
   input += synapse0x2be6ce0();
   input += synapse0x2be6d20();
   input += synapse0x2be6d60();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2be63d0() {
   double input = input0x2be63d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2be6da0() {
   double input = -0.726904;
   input += synapse0x2bcf810();
   input += synapse0x2bcf850();
   input += synapse0x2bcf890();
   input += synapse0x2bcf8d0();
   input += synapse0x2bcf910();
   input += synapse0x2bcf950();
   input += synapse0x2bcf990();
   input += synapse0x2bcf9d0();
   input += synapse0x2be74f0();
   input += synapse0x2be7530();
   input += synapse0x2be7570();
   input += synapse0x2be75b0();
   input += synapse0x2be75f0();
   input += synapse0x2be7630();
   input += synapse0x2be7670();
   input += synapse0x2be76b0();
   input += synapse0x2be6f30();
   input += synapse0x2be6f70();
   input += synapse0x2be7800();
   input += synapse0x2be7840();
   input += synapse0x2be7880();
   input += synapse0x2be78c0();
   input += synapse0x2be7900();
   input += synapse0x2be7940();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2be6da0() {
   double input = input0x2be6da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2be7980() {
   double input = 1.70059;
   input += synapse0x2be7cc0();
   input += synapse0x2be7d00();
   input += synapse0x2be7d40();
   input += synapse0x2be7d80();
   input += synapse0x2be7dc0();
   input += synapse0x2be7e00();
   input += synapse0x2be7e40();
   input += synapse0x2be7e80();
   input += synapse0x2be7ec0();
   input += synapse0x2be7f00();
   input += synapse0x2be7f40();
   input += synapse0x2be7f80();
   input += synapse0x2be7fc0();
   input += synapse0x2be8000();
   input += synapse0x2be8040();
   input += synapse0x2be8080();
   input += synapse0x2be7b10();
   input += synapse0x2be7b50();
   input += synapse0x2be81d0();
   input += synapse0x2be8210();
   input += synapse0x2be8250();
   input += synapse0x2be8290();
   input += synapse0x2be82d0();
   input += synapse0x2be8310();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2be7980() {
   double input = input0x2be7980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2be8350() {
   double input = -0.0147892;
   input += synapse0x2be8690();
   input += synapse0x2be86d0();
   input += synapse0x2be8710();
   input += synapse0x2be8750();
   input += synapse0x2be8790();
   input += synapse0x2be87d0();
   input += synapse0x2be8810();
   input += synapse0x2be8850();
   input += synapse0x2be8890();
   input += synapse0x2be88d0();
   input += synapse0x2be8910();
   input += synapse0x2be8950();
   input += synapse0x2be8990();
   input += synapse0x2be89d0();
   input += synapse0x2be8a10();
   input += synapse0x2be8a50();
   input += synapse0x2be84e0();
   input += synapse0x2be8520();
   input += synapse0x2bd9050();
   input += synapse0x2bd9090();
   input += synapse0x2bd90d0();
   input += synapse0x2bd9110();
   input += synapse0x2bd9150();
   input += synapse0x2bd9190();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2be8350() {
   double input = input0x2be8350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bd91d0() {
   double input = -1.48624;
   input += synapse0x2bd9510();
   input += synapse0x2bd9550();
   input += synapse0x2bd9590();
   input += synapse0x2bd95d0();
   input += synapse0x2bd9610();
   input += synapse0x2bd9650();
   input += synapse0x2bd9690();
   input += synapse0x2bd96d0();
   input += synapse0x2bd9710();
   input += synapse0x2bd9750();
   input += synapse0x2bd9790();
   input += synapse0x2bd97d0();
   input += synapse0x2bd9810();
   input += synapse0x2bd9850();
   input += synapse0x2bd9890();
   input += synapse0x2bd98d0();
   input += synapse0x2bd9360();
   input += synapse0x2bd93a0();
   input += synapse0x2bd9a20();
   input += synapse0x2bd9a60();
   input += synapse0x2bd9aa0();
   input += synapse0x2bd9ae0();
   input += synapse0x2bd9b20();
   input += synapse0x2bd9b60();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bd91d0() {
   double input = input0x2bd91d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bd9ba0() {
   double input = 1.66567;
   input += synapse0x2bd9ee0();
   input += synapse0x2bd9f20();
   input += synapse0x2bd9f60();
   input += synapse0x2bd9fa0();
   input += synapse0x2bd9fe0();
   input += synapse0x2bda020();
   input += synapse0x2bda060();
   input += synapse0x2bda0a0();
   input += synapse0x2bda0e0();
   input += synapse0x2bda120();
   input += synapse0x2bda160();
   input += synapse0x2bda1a0();
   input += synapse0x2bda1e0();
   input += synapse0x2bda220();
   input += synapse0x2bda260();
   input += synapse0x2bda2a0();
   input += synapse0x2bd9d30();
   input += synapse0x2bd9d70();
   input += synapse0x2bda3f0();
   input += synapse0x2bda430();
   input += synapse0x2bda470();
   input += synapse0x2bda4b0();
   input += synapse0x2bda4f0();
   input += synapse0x2bda530();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bd9ba0() {
   double input = input0x2bd9ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bda570() {
   double input = 4.62693;
   input += synapse0x2bda8b0();
   input += synapse0x2bda8f0();
   input += synapse0x2bda930();
   input += synapse0x2bda970();
   input += synapse0x2bda9b0();
   input += synapse0x2bda9f0();
   input += synapse0x2bdaa30();
   input += synapse0x2bdaa70();
   input += synapse0x2bdaab0();
   input += synapse0x2bdaaf0();
   input += synapse0x2bdab30();
   input += synapse0x2bdab70();
   input += synapse0x2bdabb0();
   input += synapse0x2bdabf0();
   input += synapse0x2bdac30();
   input += synapse0x2bdac70();
   input += synapse0x2bda700();
   input += synapse0x2bda740();
   input += synapse0x2bdadc0();
   input += synapse0x2bdae00();
   input += synapse0x2bdae40();
   input += synapse0x2bdae80();
   input += synapse0x2bdaec0();
   input += synapse0x2bdaf00();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bda570() {
   double input = input0x2bda570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2becbb0() {
   double input = 1.73098;
   input += synapse0x2becdd0();
   input += synapse0x2bece10();
   input += synapse0x2bece50();
   input += synapse0x2bece90();
   input += synapse0x2beced0();
   input += synapse0x2becf10();
   input += synapse0x2becf50();
   input += synapse0x2becf90();
   input += synapse0x2becfd0();
   input += synapse0x2bed010();
   input += synapse0x2bed050();
   input += synapse0x2bed090();
   input += synapse0x2bed0d0();
   input += synapse0x2bed110();
   input += synapse0x2bed150();
   input += synapse0x2bed190();
   input += synapse0x2bdaf40();
   input += synapse0x2bdaf80();
   input += synapse0x2bed2e0();
   input += synapse0x2bed320();
   input += synapse0x2bed360();
   input += synapse0x2bed3a0();
   input += synapse0x2bed3e0();
   input += synapse0x2bed420();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2becbb0() {
   double input = input0x2becbb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bed460() {
   double input = 1.78727;
   input += synapse0x2bed7a0();
   input += synapse0x2bed7e0();
   input += synapse0x2bed820();
   input += synapse0x2bed860();
   input += synapse0x2bed8a0();
   input += synapse0x2bed8e0();
   input += synapse0x2bed920();
   input += synapse0x2bed960();
   input += synapse0x2bed9a0();
   input += synapse0x2bed9e0();
   input += synapse0x2beda20();
   input += synapse0x2beda60();
   input += synapse0x2bedaa0();
   input += synapse0x2bedae0();
   input += synapse0x2bedb20();
   input += synapse0x2bedb60();
   input += synapse0x2bed5f0();
   input += synapse0x2bed630();
   input += synapse0x2bedcb0();
   input += synapse0x2bedcf0();
   input += synapse0x2bedd30();
   input += synapse0x2bedd70();
   input += synapse0x2beddb0();
   input += synapse0x2beddf0();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bed460() {
   double input = input0x2bed460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bede30() {
   double input = -1.01049;
   input += synapse0x2bee170();
   input += synapse0x2bee1b0();
   input += synapse0x2bee1f0();
   input += synapse0x2bee230();
   input += synapse0x2bee270();
   input += synapse0x2bee2b0();
   input += synapse0x2bee2f0();
   input += synapse0x2bee330();
   input += synapse0x2bee370();
   input += synapse0x2bee3b0();
   input += synapse0x2bee3f0();
   input += synapse0x2bee430();
   input += synapse0x2bee470();
   input += synapse0x2bee4b0();
   input += synapse0x2bee4f0();
   input += synapse0x2bee530();
   input += synapse0x2bedfc0();
   input += synapse0x2bee000();
   input += synapse0x2bee680();
   input += synapse0x2bee6c0();
   input += synapse0x2bee700();
   input += synapse0x2bee740();
   input += synapse0x2bee780();
   input += synapse0x2bee7c0();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bede30() {
   double input = input0x2bede30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bee800() {
   double input = -1.53637;
   input += synapse0x2beeb40();
   input += synapse0x2beeb80();
   input += synapse0x2beebc0();
   input += synapse0x2beec00();
   input += synapse0x2beec40();
   input += synapse0x2beec80();
   input += synapse0x2beecc0();
   input += synapse0x2beed00();
   input += synapse0x2beed40();
   input += synapse0x2beed80();
   input += synapse0x2beedc0();
   input += synapse0x2beee00();
   input += synapse0x2beee40();
   input += synapse0x2beee80();
   input += synapse0x2beeec0();
   input += synapse0x2beef00();
   input += synapse0x2bee990();
   input += synapse0x2bee9d0();
   input += synapse0x2bef050();
   input += synapse0x2bef090();
   input += synapse0x2bef0d0();
   input += synapse0x2bef110();
   input += synapse0x2bef150();
   input += synapse0x2bef190();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bee800() {
   double input = input0x2bee800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bf5a00() {
   double input = 0.140043;
   input += synapse0x2bca5e0();
   input += synapse0x2bca620();
   input += synapse0x2bcbb40();
   input += synapse0x2bcbb80();
   input += synapse0x2bcd610();
   input += synapse0x2bcd650();
   input += synapse0x2bce3e0();
   input += synapse0x2bce420();
   input += synapse0x2bcedb0();
   input += synapse0x2bcedf0();
   input += synapse0x2bcf780();
   input += synapse0x2bcf7c0();
   input += synapse0x2bd0260();
   input += synapse0x2bd02a0();
   input += synapse0x2bd0c30();
   input += synapse0x2bd0c70();
   input += synapse0x2bcdd10();
   input += synapse0x2bcdd50();
   input += synapse0x2bd27e0();
   input += synapse0x2bd2820();
   input += synapse0x2bd31b0();
   input += synapse0x2bd31f0();
   input += synapse0x2bd3b80();
   input += synapse0x2bd3bc0();
   input += synapse0x2bd4550();
   input += synapse0x2bd4590();
   input += synapse0x2bc75e0();
   input += synapse0x2bc7620();
   input += synapse0x2bd6640();
   input += synapse0x2bd6680();
   input += synapse0x2bd7010();
   input += synapse0x2bd7050();
   input += synapse0x2bd79e0();
   input += synapse0x2bd7a20();
   input += synapse0x2bd83b0();
   input += synapse0x2bd83f0();
   input += synapse0x2bd8d80();
   input += synapse0x2bd8dc0();
   input += synapse0x2bd18d0();
   input += synapse0x2bd1910();
   input += synapse0x2bdb180();
   input += synapse0x2bdb1c0();
   input += synapse0x2bdbb10();
   input += synapse0x2bdbb50();
   input += synapse0x2bdc4e0();
   input += synapse0x2bdc520();
   input += synapse0x2bdceb0();
   input += synapse0x2bdcef0();
   input += synapse0x2bdd880();
   input += synapse0x2bdd8c0();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bf5a00() {
   double input = input0x2bf5a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bf5da0() {
   double input = 1.13145;
   input += synapse0x2bdffc0();
   input += synapse0x2be0000();
   input += synapse0x2bd5580();
   input += synapse0x2bd55c0();
   input += synapse0x2be2ba0();
   input += synapse0x2be2be0();
   input += synapse0x2be3570();
   input += synapse0x2be35b0();
   input += synapse0x2be3f40();
   input += synapse0x2be3f80();
   input += synapse0x2be4910();
   input += synapse0x2be4950();
   input += synapse0x2be52e0();
   input += synapse0x2be5320();
   input += synapse0x2be5cb0();
   input += synapse0x2be5cf0();
   input += synapse0x2be6680();
   input += synapse0x2be66c0();
   input += synapse0x2be7050();
   input += synapse0x2be7090();
   input += synapse0x2be7c30();
   input += synapse0x2be7c70();
   input += synapse0x2be8600();
   input += synapse0x2be8640();
   input += synapse0x2bd9480();
   input += synapse0x2bd94c0();
   input += synapse0x2bd9e50();
   input += synapse0x2bd9e90();
   input += synapse0x2bda820();
   input += synapse0x2bda860();
   input += synapse0x2becd40();
   input += synapse0x2becd80();
   input += synapse0x2bed710();
   input += synapse0x2bed750();
   input += synapse0x2bee0e0();
   input += synapse0x2bee120();
   input += synapse0x2beeab0();
   input += synapse0x2beeaf0();
   input += synapse0x2bc99b0();
   input += synapse0x2bc99f0();
   input += synapse0x2bde250();
   input += synapse0x2bde290();
   input += synapse0x2bef1d0();
   input += synapse0x2bef210();
   input += synapse0x2bef250();
   input += synapse0x2bef290();
   input += synapse0x2bf6140();
   input += synapse0x2bf6180();
   input += synapse0x2bf61c0();
   input += synapse0x2bf6200();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bf5da0() {
   double input = input0x2bf5da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bf6240() {
   double input = -0.0380129;
   input += synapse0x2bf6580();
   input += synapse0x2bf65c0();
   input += synapse0x2bf6600();
   input += synapse0x2bf6640();
   input += synapse0x2bf6680();
   input += synapse0x2bf66c0();
   input += synapse0x2bf6700();
   input += synapse0x2bf6740();
   input += synapse0x2bf6780();
   input += synapse0x2bf67c0();
   input += synapse0x2bf6800();
   input += synapse0x2bf6840();
   input += synapse0x2bf6880();
   input += synapse0x2bf68c0();
   input += synapse0x2bf6900();
   input += synapse0x2bf6940();
   input += synapse0x2bf63d0();
   input += synapse0x2bf6410();
   input += synapse0x2bf6a90();
   input += synapse0x2bf6ad0();
   input += synapse0x2bf6b10();
   input += synapse0x2bf6b50();
   input += synapse0x2bf6b90();
   input += synapse0x2bf6bd0();
   input += synapse0x2bf6c10();
   input += synapse0x2bf6c50();
   input += synapse0x2bf6c90();
   input += synapse0x2bf6cd0();
   input += synapse0x2bf6d10();
   input += synapse0x2bf6d50();
   input += synapse0x2bf6d90();
   input += synapse0x2bf6dd0();
   input += synapse0x2bf6980();
   input += synapse0x2bf69c0();
   input += synapse0x2bf6a00();
   input += synapse0x2bf6a40();
   input += synapse0x2bf7020();
   input += synapse0x2bf7060();
   input += synapse0x2bf70a0();
   input += synapse0x2bf70e0();
   input += synapse0x2bf7120();
   input += synapse0x2bf7160();
   input += synapse0x2bf71a0();
   input += synapse0x2bf71e0();
   input += synapse0x2bf7220();
   input += synapse0x2bf7260();
   input += synapse0x2bf72a0();
   input += synapse0x2bf72e0();
   input += synapse0x2bf7320();
   input += synapse0x2bf7360();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bf6240() {
   double input = input0x2bf6240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bf73a0() {
   double input = -0.37755;
   input += synapse0x2bf76e0();
   input += synapse0x2bf7720();
   input += synapse0x2bf7760();
   input += synapse0x2bf77a0();
   input += synapse0x2bf77e0();
   input += synapse0x2bf7820();
   input += synapse0x2bf7860();
   input += synapse0x2bf78a0();
   input += synapse0x2bf78e0();
   input += synapse0x2bf7920();
   input += synapse0x2bf7960();
   input += synapse0x2bf79a0();
   input += synapse0x2bf79e0();
   input += synapse0x2bf7a20();
   input += synapse0x2bf7a60();
   input += synapse0x2bf7aa0();
   input += synapse0x2bf7530();
   input += synapse0x2bf7570();
   input += synapse0x2bf7bf0();
   input += synapse0x2bf7c30();
   input += synapse0x2bf7c70();
   input += synapse0x2bf7cb0();
   input += synapse0x2bf7cf0();
   input += synapse0x2bf7d30();
   input += synapse0x2bf7d70();
   input += synapse0x2bf7db0();
   input += synapse0x2bf7df0();
   input += synapse0x2bf7e30();
   input += synapse0x2bf7e70();
   input += synapse0x2bf7eb0();
   input += synapse0x2bf7ef0();
   input += synapse0x2bf7f30();
   input += synapse0x2bf7ae0();
   input += synapse0x2bf7b20();
   input += synapse0x2bf7b60();
   input += synapse0x2bf7ba0();
   input += synapse0x2bf8180();
   input += synapse0x2bf81c0();
   input += synapse0x2bf8200();
   input += synapse0x2bf8240();
   input += synapse0x2bf8280();
   input += synapse0x2bf82c0();
   input += synapse0x2bf8300();
   input += synapse0x2bf8340();
   input += synapse0x2bf8380();
   input += synapse0x2bf83c0();
   input += synapse0x2bf8400();
   input += synapse0x2bf8440();
   input += synapse0x2bf8480();
   input += synapse0x2bf84c0();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bf73a0() {
   double input = input0x2bf73a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bf8500() {
   double input = 4.13773;
   input += synapse0x2bf8840();
   input += synapse0x2bf8880();
   input += synapse0x2bf88c0();
   input += synapse0x2bf8900();
   input += synapse0x2bf8940();
   input += synapse0x2bf8980();
   input += synapse0x2bf89c0();
   input += synapse0x2bf8a00();
   input += synapse0x2bf8a40();
   input += synapse0x2bf8a80();
   input += synapse0x2bf8ac0();
   input += synapse0x2bf8b00();
   input += synapse0x2bf8b40();
   input += synapse0x2bf8b80();
   input += synapse0x2bf8bc0();
   input += synapse0x2bf8c00();
   input += synapse0x2bf8690();
   input += synapse0x2bf86d0();
   input += synapse0x2bf8d50();
   input += synapse0x2bf8d90();
   input += synapse0x2bf8dd0();
   input += synapse0x2bf8e10();
   input += synapse0x2bf8e50();
   input += synapse0x2bf8e90();
   input += synapse0x2bf8ed0();
   input += synapse0x2bf8f10();
   input += synapse0x2bf8f50();
   input += synapse0x2bf8f90();
   input += synapse0x2bf8fd0();
   input += synapse0x2bf9010();
   input += synapse0x2bf9050();
   input += synapse0x2bf9090();
   input += synapse0x2bf8c40();
   input += synapse0x2bf8c80();
   input += synapse0x2bf8cc0();
   input += synapse0x2bf8d00();
   input += synapse0x2bf92e0();
   input += synapse0x2bf9320();
   input += synapse0x2bf9360();
   input += synapse0x2bf93a0();
   input += synapse0x2bf93e0();
   input += synapse0x2bf9420();
   input += synapse0x2bf9460();
   input += synapse0x2bf94a0();
   input += synapse0x2bf94e0();
   input += synapse0x2bf9520();
   input += synapse0x2bf9560();
   input += synapse0x2bf95a0();
   input += synapse0x2bf95e0();
   input += synapse0x2bf9620();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bf8500() {
   double input = input0x2bf8500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi1_charge1p::input0x2bf9660() {
   double input = -4.30665;
   input += synapse0x2bf9880();
   input += synapse0x2bf98c0();
   input += synapse0x2bf9900();
   input += synapse0x2bf9940();
   input += synapse0x2bf9980();
   return input;
}

double NNfunction_nn_chi1_charge1p::neuron0x2bf9660() {
   double input = input0x2bf9660();
   return (input * 1)+0;
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc9a40() {
   return (neuron0x2bc46d0()*-0.0946255);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc9a80() {
   return (neuron0x2bc4980()*0.6056);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc9ac0() {
   return (neuron0x2bc4cc0()*-0.886955);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc9b00() {
   return (neuron0x2bc5000()*3.07355);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc9b40() {
   return (neuron0x2bc5340()*-0.360442);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc9b80() {
   return (neuron0x2bc5680()*1.15664);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc9bc0() {
   return (neuron0x2bc59c0()*-1.49066);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc9c00() {
   return (neuron0x2bc5d00()*-0.472827);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc9c40() {
   return (neuron0x2bc6040()*2.18067);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc9c80() {
   return (neuron0x2bc6380()*-1.22481);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc9cc0() {
   return (neuron0x2bc66c0()*1.84064);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc9d00() {
   return (neuron0x2bc6a00()*0.82783);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc9d40() {
   return (neuron0x2bc6d40()*-0.475309);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc9d80() {
   return (neuron0x2bc7080()*-0.523224);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc9dc0() {
   return (neuron0x2bc73c0()*-0.484465);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc9e00() {
   return (neuron0x2bc7700()*0.685407);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc9890() {
   return (neuron0x2bc7a40()*-1.05417);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc98d0() {
   return (neuron0x2bc7fa0()*-0.198417);
}

double NNfunction_nn_chi1_charge1p::synapse0x2980920() {
   return (neuron0x2bc8250()*1.05333);
}

double NNfunction_nn_chi1_charge1p::synapse0x2980960() {
   return (neuron0x2bc8590()*-0.343697);
}

double NNfunction_nn_chi1_charge1p::synapse0x1bd28d0() {
   return (neuron0x2bc88d0()*-0.173573);
}

double NNfunction_nn_chi1_charge1p::synapse0x1bd2910() {
   return (neuron0x2bc8c10()*2.14453);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc9f50() {
   return (neuron0x2bc8f50()*-0.193761);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc9f90() {
   return (neuron0x2bc9290()*1.19068);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bca310() {
   return (neuron0x2bc46d0()*-1.38335);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bca350() {
   return (neuron0x2bc4980()*2.89005);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bca390() {
   return (neuron0x2bc4cc0()*-1.31755);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bca3d0() {
   return (neuron0x2bc5000()*0.25024);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bca410() {
   return (neuron0x2bc5340()*1.09765);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bca450() {
   return (neuron0x2bc5680()*0.000231529);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bca490() {
   return (neuron0x2bc59c0()*-0.0942581);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bca4d0() {
   return (neuron0x2bc5d00()*-0.00115855);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bca510() {
   return (neuron0x2bc6040()*-0.305971);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc9e40() {
   return (neuron0x2bc6380()*-1.6543);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc9e80() {
   return (neuron0x2bc66c0()*0.565529);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc9ec0() {
   return (neuron0x2bc6a00()*-0.238746);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc9f00() {
   return (neuron0x2bc6d40()*-1.72841);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bca760() {
   return (neuron0x2bc7080()*-3.12844);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bca7a0() {
   return (neuron0x2bc73c0()*-0.307413);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bca7e0() {
   return (neuron0x2bc7700()*0.221626);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bca160() {
   return (neuron0x2bc7a40()*0.00614771);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bca1a0() {
   return (neuron0x2bc7fa0()*2.08266);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bca930() {
   return (neuron0x2bc8250()*1.68627);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bca970() {
   return (neuron0x2bc8590()*1.83404);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bca9b0() {
   return (neuron0x2bc88d0()*1.15578);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bca9f0() {
   return (neuron0x2bc8c10()*-2.01092);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcaa30() {
   return (neuron0x2bc8f50()*0.422012);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcaa70() {
   return (neuron0x2bc9290()*0.79464);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcadf0() {
   return (neuron0x2bc46d0()*-0.0327963);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcae30() {
   return (neuron0x2bc4980()*8.33826);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcae70() {
   return (neuron0x2bc4cc0()*0.0477287);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcaeb0() {
   return (neuron0x2bc5000()*-0.0107899);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcaef0() {
   return (neuron0x2bc5340()*-0.00231318);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcaf30() {
   return (neuron0x2bc5680()*-0.00777775);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcaf70() {
   return (neuron0x2bc59c0()*-0.0313225);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcafb0() {
   return (neuron0x2bc5d00()*0.00690585);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcaff0() {
   return (neuron0x2bc6040()*-0.0449632);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcb030() {
   return (neuron0x2bc6380()*-0.00122841);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcb070() {
   return (neuron0x2bc66c0()*-0.00532119);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcb0b0() {
   return (neuron0x2bc6a00()*-0.0268098);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcb0f0() {
   return (neuron0x2bc6d40()*0.081744);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcb130() {
   return (neuron0x2bc7080()*-0.00951584);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcb170() {
   return (neuron0x2bc73c0()*0.0196735);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcb1b0() {
   return (neuron0x2bc7700()*-0.0203877);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcac40() {
   return (neuron0x2bc7a40()*-0.00898151);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcac80() {
   return (neuron0x2bc7fa0()*0.00673559);
}

double NNfunction_nn_chi1_charge1p::synapse0x298e770() {
   return (neuron0x2bc8250()*-0.0183983);
}

double NNfunction_nn_chi1_charge1p::synapse0x298e7b0() {
   return (neuron0x2bc8590()*-0.0027692);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcd0e0() {
   return (neuron0x2bc88d0()*-0.0247467);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcd120() {
   return (neuron0x2bc8c10()*-0.0422949);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc4410() {
   return (neuron0x2bc8f50()*0.0176394);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc4450() {
   return (neuron0x2bc9290()*-0.46566);
}

double NNfunction_nn_chi1_charge1p::synapse0x298f060() {
   return (neuron0x2bc46d0()*0.00494433);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bca670() {
   return (neuron0x2bc4980()*0.00303811);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bca6b0() {
   return (neuron0x2bc4cc0()*0.0588079);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bca6f0() {
   return (neuron0x2bc5000()*-0.000569054);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcb300() {
   return (neuron0x2bc5340()*-0.00155808);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcb340() {
   return (neuron0x2bc5680()*-0.00094788);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcb380() {
   return (neuron0x2bc59c0()*0.00397205);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcb3c0() {
   return (neuron0x2bc5d00()*-0.00290051);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcb400() {
   return (neuron0x2bc6040()*-0.000337431);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcb440() {
   return (neuron0x2bc6380()*-0.00199795);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcb480() {
   return (neuron0x2bc66c0()*-0.00353633);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcb4c0() {
   return (neuron0x2bc6a00()*0.0148416);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcb500() {
   return (neuron0x2bc6d40()*-0.00102487);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcb540() {
   return (neuron0x2bc7080()*-0.0070804);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcb580() {
   return (neuron0x2bc73c0()*-0.0017617);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcb5c0() {
   return (neuron0x2bc7700()*-0.00344305);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc4490() {
   return (neuron0x2bc7a40()*-0.00868447);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc44d0() {
   return (neuron0x2bc7fa0()*0.00210599);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcb710() {
   return (neuron0x2bc8250()*-0.000173768);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcb750() {
   return (neuron0x2bc8590()*-0.00210543);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcb790() {
   return (neuron0x2bc88d0()*0.00610003);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcb7d0() {
   return (neuron0x2bc8c10()*0.00328276);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcb810() {
   return (neuron0x2bc8f50()*0.000550586);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcb850() {
   return (neuron0x2bc9290()*1.32852);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcbbd0() {
   return (neuron0x2bc46d0()*-0.00980047);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcbc10() {
   return (neuron0x2bc4980()*-0.0147268);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcbc50() {
   return (neuron0x2bc4cc0()*-0.11518);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcbc90() {
   return (neuron0x2bc5000()*-0.00369312);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcbcd0() {
   return (neuron0x2bc5340()*-0.00138777);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcbd10() {
   return (neuron0x2bc5680()*0.0140728);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcbd50() {
   return (neuron0x2bc59c0()*-0.0143678);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcbd90() {
   return (neuron0x2bc5d00()*0.00241801);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcbdd0() {
   return (neuron0x2bc6040()*0.00670532);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcbe10() {
   return (neuron0x2bc6380()*0.0177023);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcbe50() {
   return (neuron0x2bc66c0()*0.00410176);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcbe90() {
   return (neuron0x2bc6a00()*0.0216864);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcbed0() {
   return (neuron0x2bc6d40()*-0.00513957);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcbf10() {
   return (neuron0x2bc7080()*-0.0238002);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcbf50() {
   return (neuron0x2bc73c0()*-0.0102964);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcbf90() {
   return (neuron0x2bc7700()*0.0026391);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcc0e0() {
   return (neuron0x2bc7a40()*-0.0108705);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcba20() {
   return (neuron0x2bc7fa0()*-0.010149);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcba60() {
   return (neuron0x2bc8250()*-0.00946716);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcd220() {
   return (neuron0x2bc8590()*0.00409145);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcd260() {
   return (neuron0x2bc88d0()*0.00536763);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcd2a0() {
   return (neuron0x2bc8c10()*-0.00836095);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcd2e0() {
   return (neuron0x2bc8f50()*-0.0197436);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcd320() {
   return (neuron0x2bc9290()*-2.50811);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcd6a0() {
   return (neuron0x2bc46d0()*0.193748);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcd6e0() {
   return (neuron0x2bc4980()*-0.959808);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcd720() {
   return (neuron0x2bc4cc0()*0.936474);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcd760() {
   return (neuron0x2bc5000()*-0.656341);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcd7a0() {
   return (neuron0x2bc5340()*0.0396288);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcd7e0() {
   return (neuron0x2bc5680()*0.0262522);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcd820() {
   return (neuron0x2bc59c0()*-0.267716);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcd860() {
   return (neuron0x2bc5d00()*0.849973);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcd8a0() {
   return (neuron0x2bc6040()*-0.543468);
}

double NNfunction_nn_chi1_charge1p::synapse0x298eac0() {
   return (neuron0x2bc6380()*0.759446);
}

double NNfunction_nn_chi1_charge1p::synapse0x298eb00() {
   return (neuron0x2bc66c0()*-0.342803);
}

double NNfunction_nn_chi1_charge1p::synapse0x298eb40() {
   return (neuron0x2bc6a00()*-1.36094);
}

double NNfunction_nn_chi1_charge1p::synapse0x298eb80() {
   return (neuron0x2bc6d40()*-0.0481393);
}

double NNfunction_nn_chi1_charge1p::synapse0x298ebc0() {
   return (neuron0x2bc7080()*0.359831);
}

double NNfunction_nn_chi1_charge1p::synapse0x298ec00() {
   return (neuron0x2bc73c0()*0.334328);
}

double NNfunction_nn_chi1_charge1p::synapse0x298ec40() {
   return (neuron0x2bc7700()*-0.102308);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcd4f0() {
   return (neuron0x2bc7a40()*0.0433068);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcd530() {
   return (neuron0x2bc7fa0()*0.153579);
}

double NNfunction_nn_chi1_charge1p::synapse0x298ed90() {
   return (neuron0x2bc8250()*0.146754);
}

double NNfunction_nn_chi1_charge1p::synapse0x298edd0() {
   return (neuron0x2bc8590()*-0.151316);
}

double NNfunction_nn_chi1_charge1p::synapse0x298ee10() {
   return (neuron0x2bc88d0()*0.00864996);
}

double NNfunction_nn_chi1_charge1p::synapse0x298ee50() {
   return (neuron0x2bc8c10()*0.173051);
}

double NNfunction_nn_chi1_charge1p::synapse0x298ee90() {
   return (neuron0x2bc8f50()*0.0571841);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bce0f0() {
   return (neuron0x2bc9290()*-4.03615);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bce470() {
   return (neuron0x2bc46d0()*0.725961);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bce4b0() {
   return (neuron0x2bc4980()*1.15883);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bce4f0() {
   return (neuron0x2bc4cc0()*2.80362);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bce530() {
   return (neuron0x2bc5000()*-1.0269);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bce570() {
   return (neuron0x2bc5340()*-1.78951);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bce5b0() {
   return (neuron0x2bc5680()*2.31917);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bce5f0() {
   return (neuron0x2bc59c0()*-0.225355);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bce630() {
   return (neuron0x2bc5d00()*0.915205);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bce670() {
   return (neuron0x2bc6040()*-0.480934);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bce6b0() {
   return (neuron0x2bc6380()*2.77685);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bce6f0() {
   return (neuron0x2bc66c0()*-1.16107);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bce730() {
   return (neuron0x2bc6a00()*-1.25581);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bce770() {
   return (neuron0x2bc6d40()*-0.543376);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bce7b0() {
   return (neuron0x2bc7080()*-0.377148);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bce7f0() {
   return (neuron0x2bc73c0()*0.277975);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bce830() {
   return (neuron0x2bc7700()*-1.77089);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bce2c0() {
   return (neuron0x2bc7a40()*0.221292);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bce300() {
   return (neuron0x2bc7fa0()*-1.52088);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bce980() {
   return (neuron0x2bc8250()*-1.19844);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bce9c0() {
   return (neuron0x2bc8590()*-0.0620043);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcea00() {
   return (neuron0x2bc88d0()*-1.33308);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcea40() {
   return (neuron0x2bc8c10()*-0.781269);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcea80() {
   return (neuron0x2bc8f50()*0.805382);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bceac0() {
   return (neuron0x2bc9290()*-1.21012);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcee40() {
   return (neuron0x2bc46d0()*-0.0527239);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcee80() {
   return (neuron0x2bc4980()*-0.0036357);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bceec0() {
   return (neuron0x2bc4cc0()*-0.0270302);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcef00() {
   return (neuron0x2bc5000()*-0.00542032);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcef40() {
   return (neuron0x2bc5340()*0.0143783);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcef80() {
   return (neuron0x2bc5680()*0.0105466);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcefc0() {
   return (neuron0x2bc59c0()*-0.00765902);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcf000() {
   return (neuron0x2bc5d00()*-0.00102012);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcf040() {
   return (neuron0x2bc6040()*0.00310117);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcf080() {
   return (neuron0x2bc6380()*-0.00470593);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcf0c0() {
   return (neuron0x2bc66c0()*0.00979916);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcf100() {
   return (neuron0x2bc6a00()*-0.00664);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcf140() {
   return (neuron0x2bc6d40()*-0.000692425);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcf180() {
   return (neuron0x2bc7080()*-0.0114422);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcf1c0() {
   return (neuron0x2bc73c0()*-0.00492034);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcf200() {
   return (neuron0x2bc7700()*0.00220527);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcec90() {
   return (neuron0x2bc7a40()*0.0039247);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcecd0() {
   return (neuron0x2bc7fa0()*-0.0133831);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcf350() {
   return (neuron0x2bc8250()*-0.00773581);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcf390() {
   return (neuron0x2bc8590()*-0.000802247);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcf3d0() {
   return (neuron0x2bc88d0()*-0.00526645);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcf410() {
   return (neuron0x2bc8c10()*0.0027244);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcf450() {
   return (neuron0x2bc8f50()*-0.00348117);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcf490() {
   return (neuron0x2bc9290()*-20.5615);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc7e90() {
   return (neuron0x2bc46d0()*-4.88186);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc7ed0() {
   return (neuron0x2bc4980()*-0.888453);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc7f10() {
   return (neuron0x2bc4cc0()*4.53667);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc7f50() {
   return (neuron0x2bc5000()*-3.46331);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcfa20() {
   return (neuron0x2bc5340()*2.41092);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcfa60() {
   return (neuron0x2bc5680()*3.0474);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcfaa0() {
   return (neuron0x2bc59c0()*-0.474001);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcfae0() {
   return (neuron0x2bc5d00()*-0.205455);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcfb20() {
   return (neuron0x2bc6040()*0.776592);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcfb60() {
   return (neuron0x2bc6380()*-0.674095);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcfba0() {
   return (neuron0x2bc66c0()*-0.94986);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcfbe0() {
   return (neuron0x2bc6a00()*-2.39075);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcfc20() {
   return (neuron0x2bc6d40()*0.0484664);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcfc60() {
   return (neuron0x2bc7080()*-0.46446);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcfca0() {
   return (neuron0x2bc73c0()*1.54442);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcfce0() {
   return (neuron0x2bc7700()*0.484204);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcf660() {
   return (neuron0x2bc7a40()*-2.0696);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcf6a0() {
   return (neuron0x2bc7fa0()*-0.946703);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcfe30() {
   return (neuron0x2bc8250()*-0.359705);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcfe70() {
   return (neuron0x2bc8590()*-0.171374);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcfeb0() {
   return (neuron0x2bc88d0()*1.90732);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcfef0() {
   return (neuron0x2bc8c10()*0.441587);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcff30() {
   return (neuron0x2bc8f50()*-1.64792);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcff70() {
   return (neuron0x2bc9290()*-4.58716);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd02f0() {
   return (neuron0x2bc46d0()*0.00164823);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd0330() {
   return (neuron0x2bc4980()*-0.00118484);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd0370() {
   return (neuron0x2bc4cc0()*-10.3545);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd03b0() {
   return (neuron0x2bc5000()*0.000245445);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd03f0() {
   return (neuron0x2bc5340()*0.027597);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd0430() {
   return (neuron0x2bc5680()*0.0167466);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd0470() {
   return (neuron0x2bc59c0()*0.0253608);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd04b0() {
   return (neuron0x2bc5d00()*0.00902414);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd04f0() {
   return (neuron0x2bc6040()*0.00484671);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd0530() {
   return (neuron0x2bc6380()*-0.0141748);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd0570() {
   return (neuron0x2bc66c0()*-0.000322088);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd05b0() {
   return (neuron0x2bc6a00()*-0.295432);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd05f0() {
   return (neuron0x2bc6d40()*0.0216866);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd0630() {
   return (neuron0x2bc7080()*-0.0341263);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd0670() {
   return (neuron0x2bc73c0()*0.00335217);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd06b0() {
   return (neuron0x2bc7700()*0.0394059);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd0140() {
   return (neuron0x2bc7a40()*-0.0267368);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd0180() {
   return (neuron0x2bc7fa0()*-0.0105475);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd0800() {
   return (neuron0x2bc8250()*0.0152353);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd0840() {
   return (neuron0x2bc8590()*0.0223382);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd0880() {
   return (neuron0x2bc88d0()*0.0441079);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd08c0() {
   return (neuron0x2bc8c10()*0.00365994);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd0900() {
   return (neuron0x2bc8f50()*-0.00890319);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd0940() {
   return (neuron0x2bc9290()*0.00614488);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd0cc0() {
   return (neuron0x2bc46d0()*-0.417544);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd0d00() {
   return (neuron0x2bc4980()*1.65791);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd0d40() {
   return (neuron0x2bc4cc0()*1.60227);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd0d80() {
   return (neuron0x2bc5000()*1.42454);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd0dc0() {
   return (neuron0x2bc5340()*-1.43538);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd0e00() {
   return (neuron0x2bc5680()*1.47322);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd0e40() {
   return (neuron0x2bc59c0()*1.06118);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd0e80() {
   return (neuron0x2bc5d00()*-1.05411);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd0ec0() {
   return (neuron0x2bc6040()*-0.633507);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd0f00() {
   return (neuron0x2bc6380()*-0.383755);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd0f40() {
   return (neuron0x2bc66c0()*-1.11822);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd0f80() {
   return (neuron0x2bc6a00()*-0.67304);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd0fc0() {
   return (neuron0x2bc6d40()*0.568545);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd1000() {
   return (neuron0x2bc7080()*1.04587);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd1040() {
   return (neuron0x2bc73c0()*-0.840155);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd1080() {
   return (neuron0x2bc7700()*1.18766);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd0b10() {
   return (neuron0x2bc7a40()*1.29292);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd0b50() {
   return (neuron0x2bc7fa0()*-1.06246);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcd8e0() {
   return (neuron0x2bc8250()*1.17731);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcd920() {
   return (neuron0x2bc8590()*-0.294822);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcd960() {
   return (neuron0x2bc88d0()*-2.17484);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcd9a0() {
   return (neuron0x2bc8c10()*-0.0480969);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcd9e0() {
   return (neuron0x2bc8f50()*1.52739);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcda20() {
   return (neuron0x2bc9290()*0.819849);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcdda0() {
   return (neuron0x2bc46d0()*0.373542);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcdde0() {
   return (neuron0x2bc4980()*-0.638638);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcde20() {
   return (neuron0x2bc4cc0()*0.150759);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcde60() {
   return (neuron0x2bc5000()*-0.436845);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcdea0() {
   return (neuron0x2bc5340()*-0.329967);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcdee0() {
   return (neuron0x2bc5680()*-0.507655);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcdf20() {
   return (neuron0x2bc59c0()*-1.52398);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcdf60() {
   return (neuron0x2bc5d00()*0.791785);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcdfa0() {
   return (neuron0x2bc6040()*0.509951);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcdfe0() {
   return (neuron0x2bc6380()*0.827402);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bce020() {
   return (neuron0x2bc66c0()*-0.107516);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bce060() {
   return (neuron0x2bc6a00()*-2.23553);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bce0a0() {
   return (neuron0x2bc6d40()*1.97171);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd21e0() {
   return (neuron0x2bc7080()*-1.67521);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd2220() {
   return (neuron0x2bc73c0()*0.759081);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd2260() {
   return (neuron0x2bc7700()*-0.880602);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcdbf0() {
   return (neuron0x2bc7a40()*1.62303);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcdc30() {
   return (neuron0x2bc7fa0()*-2.15201);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd23b0() {
   return (neuron0x2bc8250()*0.616098);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd23f0() {
   return (neuron0x2bc8590()*1.67252);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd2430() {
   return (neuron0x2bc88d0()*-1.05088);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd2470() {
   return (neuron0x2bc8c10()*1.73657);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd24b0() {
   return (neuron0x2bc8f50()*0.622112);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd24f0() {
   return (neuron0x2bc9290()*-0.187702);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd2870() {
   return (neuron0x2bc46d0()*0.0106611);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd28b0() {
   return (neuron0x2bc4980()*-0.00431714);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd28f0() {
   return (neuron0x2bc4cc0()*-3.54739);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd2930() {
   return (neuron0x2bc5000()*0.0089832);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd2970() {
   return (neuron0x2bc5340()*0.0182494);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd29b0() {
   return (neuron0x2bc5680()*0.0100094);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd29f0() {
   return (neuron0x2bc59c0()*0.00528021);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd2a30() {
   return (neuron0x2bc5d00()*-0.00793026);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd2a70() {
   return (neuron0x2bc6040()*-0.0162992);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd2ab0() {
   return (neuron0x2bc6380()*-0.0154008);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd2af0() {
   return (neuron0x2bc66c0()*0.00593342);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd2b30() {
   return (neuron0x2bc6a00()*0.00119229);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd2b70() {
   return (neuron0x2bc6d40()*-0.0138264);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd2bb0() {
   return (neuron0x2bc7080()*-0.0199822);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd2bf0() {
   return (neuron0x2bc73c0()*-0.0159887);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd2c30() {
   return (neuron0x2bc7700()*-0.00360088);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd26c0() {
   return (neuron0x2bc7a40()*0.00680237);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd2700() {
   return (neuron0x2bc7fa0()*-0.0195262);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd2d80() {
   return (neuron0x2bc8250()*-0.0236001);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd2dc0() {
   return (neuron0x2bc8590()*-0.0088574);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd2e00() {
   return (neuron0x2bc88d0()*-0.0145873);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd2e40() {
   return (neuron0x2bc8c10()*-0.000216571);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd2e80() {
   return (neuron0x2bc8f50()*-0.0186436);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd2ec0() {
   return (neuron0x2bc9290()*5.34379);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3240() {
   return (neuron0x2bc46d0()*-0.00899106);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3280() {
   return (neuron0x2bc4980()*-0.00256545);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd32c0() {
   return (neuron0x2bc4cc0()*-1.81829);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3300() {
   return (neuron0x2bc5000()*0.039588);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3340() {
   return (neuron0x2bc5340()*-0.0465472);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3380() {
   return (neuron0x2bc5680()*-0.0520955);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd33c0() {
   return (neuron0x2bc59c0()*-0.0309271);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3400() {
   return (neuron0x2bc5d00()*-0.0401628);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3440() {
   return (neuron0x2bc6040()*-0.0600035);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3480() {
   return (neuron0x2bc6380()*-0.00356296);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd34c0() {
   return (neuron0x2bc66c0()*-0.021551);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3500() {
   return (neuron0x2bc6a00()*0.772788);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3540() {
   return (neuron0x2bc6d40()*-0.0494339);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3580() {
   return (neuron0x2bc7080()*0.013593);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd35c0() {
   return (neuron0x2bc73c0()*0.00386927);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3600() {
   return (neuron0x2bc7700()*-0.0418924);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3090() {
   return (neuron0x2bc7a40()*0.00225109);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd30d0() {
   return (neuron0x2bc7fa0()*0.000656796);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3750() {
   return (neuron0x2bc8250()*-0.0211097);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3790() {
   return (neuron0x2bc8590()*-0.0099867);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd37d0() {
   return (neuron0x2bc88d0()*-0.0522308);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3810() {
   return (neuron0x2bc8c10()*0.0154304);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3850() {
   return (neuron0x2bc8f50()*0.00933032);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3890() {
   return (neuron0x2bc9290()*0.0450081);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3c10() {
   return (neuron0x2bc46d0()*0.0961718);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3c50() {
   return (neuron0x2bc4980()*-9.23618);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3c90() {
   return (neuron0x2bc4cc0()*1.30219);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3cd0() {
   return (neuron0x2bc5000()*-0.00171519);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3d10() {
   return (neuron0x2bc5340()*0.0894477);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3d50() {
   return (neuron0x2bc5680()*-0.0029567);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3d90() {
   return (neuron0x2bc59c0()*-0.00159723);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3dd0() {
   return (neuron0x2bc5d00()*-0.127758);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3e10() {
   return (neuron0x2bc6040()*-0.0181767);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3e50() {
   return (neuron0x2bc6380()*-0.0632603);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3e90() {
   return (neuron0x2bc66c0()*-0.0149716);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3ed0() {
   return (neuron0x2bc6a00()*-0.0981421);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3f10() {
   return (neuron0x2bc6d40()*0.065433);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3f50() {
   return (neuron0x2bc7080()*-0.00872513);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3f90() {
   return (neuron0x2bc73c0()*0.0682274);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3fd0() {
   return (neuron0x2bc7700()*0.0132222);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3a60() {
   return (neuron0x2bc7a40()*-0.0149487);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3aa0() {
   return (neuron0x2bc7fa0()*0.0104297);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd4120() {
   return (neuron0x2bc8250()*0.0147651);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd4160() {
   return (neuron0x2bc8590()*-0.039132);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd41a0() {
   return (neuron0x2bc88d0()*-0.0153492);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd41e0() {
   return (neuron0x2bc8c10()*-0.0492322);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd4220() {
   return (neuron0x2bc8f50()*0.0678721);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd4260() {
   return (neuron0x2bc9290()*0.439341);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd45e0() {
   return (neuron0x2bc46d0()*-0.0138763);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc4860() {
   return (neuron0x2bc4980()*-1.14282);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc48a0() {
   return (neuron0x2bc4cc0()*0.775583);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc4ba0() {
   return (neuron0x2bc5000()*0.303795);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc4be0() {
   return (neuron0x2bc5340()*-0.198501);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc4ee0() {
   return (neuron0x2bc5680()*-0.280374);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc4f20() {
   return (neuron0x2bc59c0()*1.19303);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc5220() {
   return (neuron0x2bc5d00()*1.18597);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc5260() {
   return (neuron0x2bc6040()*-0.059408);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc5560() {
   return (neuron0x2bc6380()*0.0150237);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc55a0() {
   return (neuron0x2bc66c0()*-0.33401);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc58a0() {
   return (neuron0x2bc6a00()*1.83829e-05);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc58e0() {
   return (neuron0x2bc6d40()*1.23588);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc5be0() {
   return (neuron0x2bc7080()*0.0180868);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc5c20() {
   return (neuron0x2bc73c0()*-0.00569263);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc5f20() {
   return (neuron0x2bc7700()*-0.173391);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc5f60() {
   return (neuron0x2bc7a40()*-2.50718);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc6260() {
   return (neuron0x2bc7fa0()*0.47723);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc62a0() {
   return (neuron0x2bc8250()*-1.2281);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc65a0() {
   return (neuron0x2bc8590()*1.18574);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc65e0() {
   return (neuron0x2bc88d0()*0.0455105);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc68e0() {
   return (neuron0x2bc8c10()*-1.02365);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc6920() {
   return (neuron0x2bc8f50()*0.784982);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc6c20() {
   return (neuron0x2bc9290()*3.52484);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc6c60() {
   return (neuron0x2bc46d0()*0.481986);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc7920() {
   return (neuron0x2bc4980()*-0.518536);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc7960() {
   return (neuron0x2bc4cc0()*0.212132);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd4430() {
   return (neuron0x2bc5000()*-0.238907);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd4470() {
   return (neuron0x2bc5340()*1.15582);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc7c60() {
   return (neuron0x2bc5680()*0.303949);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc7ca0() {
   return (neuron0x2bc59c0()*-0.0700033);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc8130() {
   return (neuron0x2bc5d00()*1.16892);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc8170() {
   return (neuron0x2bc6040()*-0.373061);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc8470() {
   return (neuron0x2bc6380()*-0.338744);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc84b0() {
   return (neuron0x2bc66c0()*0.260029);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc87b0() {
   return (neuron0x2bc6a00()*-1.05643);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc87f0() {
   return (neuron0x2bc6d40()*0.0753249);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc8af0() {
   return (neuron0x2bc7080()*-0.615448);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc8b30() {
   return (neuron0x2bc73c0()*0.225676);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc8e30() {
   return (neuron0x2bc7700()*0.290131);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc8e70() {
   return (neuron0x2bc7a40()*-0.804038);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc9170() {
   return (neuron0x2bc7fa0()*0.23086);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc91b0() {
   return (neuron0x2bc8250()*-0.529737);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc94b0() {
   return (neuron0x2bc8590()*-0.246783);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc94f0() {
   return (neuron0x2bc88d0()*1.04519);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc6f60() {
   return (neuron0x2bc8c10()*0.0481448);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc6fa0() {
   return (neuron0x2bc8f50()*-0.71707);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd6350() {
   return (neuron0x2bc9290()*-6.58402);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd66d0() {
   return (neuron0x2bc46d0()*-0.84722);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd6710() {
   return (neuron0x2bc4980()*0.531005);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd6750() {
   return (neuron0x2bc4cc0()*0.985656);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd6790() {
   return (neuron0x2bc5000()*-0.0659221);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd67d0() {
   return (neuron0x2bc5340()*0.129282);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd6810() {
   return (neuron0x2bc5680()*1.40841);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd6850() {
   return (neuron0x2bc59c0()*0.0309507);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd6890() {
   return (neuron0x2bc5d00()*0.187616);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd68d0() {
   return (neuron0x2bc6040()*0.566788);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd6910() {
   return (neuron0x2bc6380()*-0.362471);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd6950() {
   return (neuron0x2bc66c0()*-0.988937);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd6990() {
   return (neuron0x2bc6a00()*0.293501);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd69d0() {
   return (neuron0x2bc6d40()*-0.706127);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd6a10() {
   return (neuron0x2bc7080()*0.418916);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd6a50() {
   return (neuron0x2bc73c0()*-1.06386);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd6a90() {
   return (neuron0x2bc7700()*-1.33156);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd6520() {
   return (neuron0x2bc7a40()*0.525942);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd6560() {
   return (neuron0x2bc7fa0()*-0.237191);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd6be0() {
   return (neuron0x2bc8250()*-0.05044);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd6c20() {
   return (neuron0x2bc8590()*0.383952);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd6c60() {
   return (neuron0x2bc88d0()*1.32309);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd6ca0() {
   return (neuron0x2bc8c10()*0.449852);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd6ce0() {
   return (neuron0x2bc8f50()*-0.520025);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd6d20() {
   return (neuron0x2bc9290()*-0.411799);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd70a0() {
   return (neuron0x2bc46d0()*4.68203);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd70e0() {
   return (neuron0x2bc4980()*-0.00593923);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd7120() {
   return (neuron0x2bc4cc0()*3.64592);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd7160() {
   return (neuron0x2bc5000()*-0.0362573);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd71a0() {
   return (neuron0x2bc5340()*-0.00823909);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd71e0() {
   return (neuron0x2bc5680()*0.0181774);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd7220() {
   return (neuron0x2bc59c0()*0.0611319);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd7260() {
   return (neuron0x2bc5d00()*0.0569256);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd72a0() {
   return (neuron0x2bc6040()*0.0942976);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd72e0() {
   return (neuron0x2bc6380()*0.0211357);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd7320() {
   return (neuron0x2bc66c0()*0.0414551);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd7360() {
   return (neuron0x2bc6a00()*0.0957395);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd73a0() {
   return (neuron0x2bc6d40()*-0.0160029);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd73e0() {
   return (neuron0x2bc7080()*-0.0712846);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd7420() {
   return (neuron0x2bc73c0()*-0.0535768);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd7460() {
   return (neuron0x2bc7700()*-0.0371863);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd6ef0() {
   return (neuron0x2bc7a40()*0.0123363);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd6f30() {
   return (neuron0x2bc7fa0()*-0.0147213);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd75b0() {
   return (neuron0x2bc8250()*-0.098536);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd75f0() {
   return (neuron0x2bc8590()*-0.0247262);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd7630() {
   return (neuron0x2bc88d0()*-0.0529659);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd7670() {
   return (neuron0x2bc8c10()*-0.00144194);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd76b0() {
   return (neuron0x2bc8f50()*-0.0151853);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd76f0() {
   return (neuron0x2bc9290()*0.90507);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd7a70() {
   return (neuron0x2bc46d0()*0.66868);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd7ab0() {
   return (neuron0x2bc4980()*0.168804);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd7af0() {
   return (neuron0x2bc4cc0()*-0.479362);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd7b30() {
   return (neuron0x2bc5000()*-1.38032);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd7b70() {
   return (neuron0x2bc5340()*-0.462752);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd7bb0() {
   return (neuron0x2bc5680()*-0.462945);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd7bf0() {
   return (neuron0x2bc59c0()*-0.0975494);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd7c30() {
   return (neuron0x2bc5d00()*0.140647);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd7c70() {
   return (neuron0x2bc6040()*-0.782543);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd7cb0() {
   return (neuron0x2bc6380()*1.89212);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd7cf0() {
   return (neuron0x2bc66c0()*0.489867);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd7d30() {
   return (neuron0x2bc6a00()*0.280083);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd7d70() {
   return (neuron0x2bc6d40()*0.111024);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd7db0() {
   return (neuron0x2bc7080()*-0.874867);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd7df0() {
   return (neuron0x2bc73c0()*-0.423399);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd7e30() {
   return (neuron0x2bc7700()*0.0378359);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd78c0() {
   return (neuron0x2bc7a40()*1.71469);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd7900() {
   return (neuron0x2bc7fa0()*-0.433437);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd7f80() {
   return (neuron0x2bc8250()*0.578238);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd7fc0() {
   return (neuron0x2bc8590()*-1.21025);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd8000() {
   return (neuron0x2bc88d0()*0.624071);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd8040() {
   return (neuron0x2bc8c10()*0.834235);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd8080() {
   return (neuron0x2bc8f50()*-0.783459);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd80c0() {
   return (neuron0x2bc9290()*-1.18876);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd8440() {
   return (neuron0x2bc46d0()*-0.175249);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd8480() {
   return (neuron0x2bc4980()*-3.29076);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd84c0() {
   return (neuron0x2bc4cc0()*-1.24026);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd8500() {
   return (neuron0x2bc5000()*0.573647);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd8540() {
   return (neuron0x2bc5340()*-0.123125);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd8580() {
   return (neuron0x2bc5680()*0.29563);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd85c0() {
   return (neuron0x2bc59c0()*-0.657333);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd8600() {
   return (neuron0x2bc5d00()*0.861958);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd8640() {
   return (neuron0x2bc6040()*-0.563184);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd8680() {
   return (neuron0x2bc6380()*-0.808605);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd86c0() {
   return (neuron0x2bc66c0()*-0.140348);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd8700() {
   return (neuron0x2bc6a00()*1.73097);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd8740() {
   return (neuron0x2bc6d40()*-0.0556318);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd8780() {
   return (neuron0x2bc7080()*-0.344768);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd87c0() {
   return (neuron0x2bc73c0()*0.19087);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd8800() {
   return (neuron0x2bc7700()*1.09123);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd8290() {
   return (neuron0x2bc7a40()*-0.00577732);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd82d0() {
   return (neuron0x2bc7fa0()*0.673925);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd8950() {
   return (neuron0x2bc8250()*-1.34798);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd8990() {
   return (neuron0x2bc8590()*0.0789335);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd89d0() {
   return (neuron0x2bc88d0()*0.0352034);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd8a10() {
   return (neuron0x2bc8c10()*0.312102);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd8a50() {
   return (neuron0x2bc8f50()*-0.594205);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd8a90() {
   return (neuron0x2bc9290()*-4.36094);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd8e10() {
   return (neuron0x2bc46d0()*-0.161445);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd8e50() {
   return (neuron0x2bc4980()*-0.754379);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd8e90() {
   return (neuron0x2bc4cc0()*-0.746333);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd8ed0() {
   return (neuron0x2bc5000()*0.276133);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd8f10() {
   return (neuron0x2bc5340()*-0.865857);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd8f50() {
   return (neuron0x2bc5680()*-0.135932);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd8f90() {
   return (neuron0x2bc59c0()*0.291497);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd8fd0() {
   return (neuron0x2bc5d00()*0.0822232);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9010() {
   return (neuron0x2bc6040()*-0.921096);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd11d0() {
   return (neuron0x2bc6380()*1.29146);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd1210() {
   return (neuron0x2bc66c0()*-2.73379);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd1250() {
   return (neuron0x2bc6a00()*0.0260378);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd1290() {
   return (neuron0x2bc6d40()*1.29562);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd12d0() {
   return (neuron0x2bc7080()*-0.228567);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd1310() {
   return (neuron0x2bc73c0()*-0.597814);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd1350() {
   return (neuron0x2bc7700()*-0.622982);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd8c60() {
   return (neuron0x2bc7a40()*1.06171);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd8ca0() {
   return (neuron0x2bc7fa0()*1.28966);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd14a0() {
   return (neuron0x2bc8250()*-0.202239);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd14e0() {
   return (neuron0x2bc8590()*2.01701);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd1520() {
   return (neuron0x2bc88d0()*0.367752);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd1560() {
   return (neuron0x2bc8c10()*-0.482961);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd15a0() {
   return (neuron0x2bc8f50()*-0.278937);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd15e0() {
   return (neuron0x2bc9290()*2.75958);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd1960() {
   return (neuron0x2bc46d0()*-0.000562362);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd19a0() {
   return (neuron0x2bc4980()*0.00480571);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd19e0() {
   return (neuron0x2bc4cc0()*-1.24123);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd1a20() {
   return (neuron0x2bc5000()*-0.00724131);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd1a60() {
   return (neuron0x2bc5340()*0.0266083);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd1aa0() {
   return (neuron0x2bc5680()*0.0268042);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd1ae0() {
   return (neuron0x2bc59c0()*0.0172927);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd1b20() {
   return (neuron0x2bc5d00()*0.0141978);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd1b60() {
   return (neuron0x2bc6040()*0.0403371);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd1ba0() {
   return (neuron0x2bc6380()*-0.00792665);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd1be0() {
   return (neuron0x2bc66c0()*0.0221578);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd1c20() {
   return (neuron0x2bc6a00()*-0.441782);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd1c60() {
   return (neuron0x2bc6d40()*0.0150378);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd1ca0() {
   return (neuron0x2bc7080()*-0.0093002);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd1ce0() {
   return (neuron0x2bc73c0()*-0.00796091);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd1d20() {
   return (neuron0x2bc7700()*0.0306217);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd17b0() {
   return (neuron0x2bc7a40()*0.0129158);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd17f0() {
   return (neuron0x2bc7fa0()*-0.00657979);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd1e70() {
   return (neuron0x2bc8250()*0.01157);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd1eb0() {
   return (neuron0x2bc8590()*-0.00623008);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd1ef0() {
   return (neuron0x2bc88d0()*0.0153475);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd1f30() {
   return (neuron0x2bc8c10()*0.00785202);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd1f70() {
   return (neuron0x2bc8f50()*-0.00394961);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd1fb0() {
   return (neuron0x2bc9290()*-0.0372311);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd2180() {
   return (neuron0x2bc46d0()*-7.97498);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdb210() {
   return (neuron0x2bc4980()*-1.43504);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdb250() {
   return (neuron0x2bc4cc0()*2.29687);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdb290() {
   return (neuron0x2bc5000()*-3.36503);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdb2d0() {
   return (neuron0x2bc5340()*3.60124);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdb310() {
   return (neuron0x2bc5680()*1.33934);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdb350() {
   return (neuron0x2bc59c0()*-0.58637);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdb390() {
   return (neuron0x2bc5d00()*1.70609);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdb3d0() {
   return (neuron0x2bc6040()*1.01233);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdb410() {
   return (neuron0x2bc6380()*-2.25404);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdb450() {
   return (neuron0x2bc66c0()*0.00919711);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdb490() {
   return (neuron0x2bc6a00()*-1.05774);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdb4d0() {
   return (neuron0x2bc6d40()*3.44292);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdb510() {
   return (neuron0x2bc7080()*-5.11134);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdb550() {
   return (neuron0x2bc73c0()*2.392);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdb590() {
   return (neuron0x2bc7700()*1.0982);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdb060() {
   return (neuron0x2bc7a40()*-2.54085);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdb0a0() {
   return (neuron0x2bc7fa0()*-0.6756);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdb6e0() {
   return (neuron0x2bc8250()*-0.174013);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdb720() {
   return (neuron0x2bc8590()*-1.84981);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdb760() {
   return (neuron0x2bc88d0()*4.30992);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdb7a0() {
   return (neuron0x2bc8c10()*-1.60638);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdb7e0() {
   return (neuron0x2bc8f50()*-1.51713);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdb820() {
   return (neuron0x2bc9290()*-3.44364);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdbba0() {
   return (neuron0x2bc46d0()*-0.115991);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdbbe0() {
   return (neuron0x2bc4980()*0.0013464);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdbc20() {
   return (neuron0x2bc4cc0()*0.714732);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdbc60() {
   return (neuron0x2bc5000()*-0.134773);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdbca0() {
   return (neuron0x2bc5340()*-0.0341889);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdbce0() {
   return (neuron0x2bc5680()*-0.273086);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdbd20() {
   return (neuron0x2bc59c0()*0.275644);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdbd60() {
   return (neuron0x2bc5d00()*-0.192251);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdbda0() {
   return (neuron0x2bc6040()*-0.169313);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdbde0() {
   return (neuron0x2bc6380()*-0.350981);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdbe20() {
   return (neuron0x2bc66c0()*0.0685208);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdbe60() {
   return (neuron0x2bc6a00()*0.441563);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdbea0() {
   return (neuron0x2bc6d40()*0.277158);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdbee0() {
   return (neuron0x2bc7080()*-0.176073);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdbf20() {
   return (neuron0x2bc73c0()*0.0409587);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdbf60() {
   return (neuron0x2bc7700()*0.354595);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdb9f0() {
   return (neuron0x2bc7a40()*-0.0846694);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdba30() {
   return (neuron0x2bc7fa0()*-0.0336344);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdc0b0() {
   return (neuron0x2bc8250()*0.279956);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdc0f0() {
   return (neuron0x2bc8590()*-0.274569);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdc130() {
   return (neuron0x2bc88d0()*-0.0623665);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdc170() {
   return (neuron0x2bc8c10()*-0.0305409);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdc1b0() {
   return (neuron0x2bc8f50()*0.127506);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdc1f0() {
   return (neuron0x2bc9290()*-1.01845);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdc570() {
   return (neuron0x2bc46d0()*0.077916);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdc5b0() {
   return (neuron0x2bc4980()*-5.7493);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdc5f0() {
   return (neuron0x2bc4cc0()*-0.0467274);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdc630() {
   return (neuron0x2bc5000()*0.0919606);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdc670() {
   return (neuron0x2bc5340()*-0.108751);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdc6b0() {
   return (neuron0x2bc5680()*0.0277693);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdc6f0() {
   return (neuron0x2bc59c0()*-0.0542478);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdc730() {
   return (neuron0x2bc5d00()*0.0497185);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdc770() {
   return (neuron0x2bc6040()*0.0568306);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdc7b0() {
   return (neuron0x2bc6380()*-0.0630822);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdc7f0() {
   return (neuron0x2bc66c0()*-0.0573637);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdc830() {
   return (neuron0x2bc6a00()*-0.125921);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdc870() {
   return (neuron0x2bc6d40()*0.0389539);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdc8b0() {
   return (neuron0x2bc7080()*0.0854421);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdc8f0() {
   return (neuron0x2bc73c0()*0.0373358);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdc930() {
   return (neuron0x2bc7700()*0.0544972);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdc3c0() {
   return (neuron0x2bc7a40()*-0.0605142);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdc400() {
   return (neuron0x2bc7fa0()*0.132049);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdca80() {
   return (neuron0x2bc8250()*0.0767908);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdcac0() {
   return (neuron0x2bc8590()*0.118818);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdcb00() {
   return (neuron0x2bc88d0()*0.0848896);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdcb40() {
   return (neuron0x2bc8c10()*-0.0593818);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdcb80() {
   return (neuron0x2bc8f50()*0.0712975);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdcbc0() {
   return (neuron0x2bc9290()*1.76294);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdcf40() {
   return (neuron0x2bc46d0()*-0.0446303);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdcf80() {
   return (neuron0x2bc4980()*-0.0185093);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdcfc0() {
   return (neuron0x2bc4cc0()*0.0571487);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdd000() {
   return (neuron0x2bc5000()*1.41907);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdd040() {
   return (neuron0x2bc5340()*-0.629234);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdd080() {
   return (neuron0x2bc5680()*0.891612);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdd0c0() {
   return (neuron0x2bc59c0()*0.184038);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdd100() {
   return (neuron0x2bc5d00()*-0.0402104);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdd140() {
   return (neuron0x2bc6040()*-0.464486);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdd180() {
   return (neuron0x2bc6380()*0.0275255);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdd1c0() {
   return (neuron0x2bc66c0()*0.015941);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdd200() {
   return (neuron0x2bc6a00()*-0.894205);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdd240() {
   return (neuron0x2bc6d40()*0.515794);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdd280() {
   return (neuron0x2bc7080()*0.932164);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdd2c0() {
   return (neuron0x2bc73c0()*-0.435999);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdd300() {
   return (neuron0x2bc7700()*0.876049);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdcd90() {
   return (neuron0x2bc7a40()*0.699413);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdcdd0() {
   return (neuron0x2bc7fa0()*-0.909148);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdd450() {
   return (neuron0x2bc8250()*-1.361);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdd490() {
   return (neuron0x2bc8590()*0.862185);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdd4d0() {
   return (neuron0x2bc88d0()*2.43924);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdd510() {
   return (neuron0x2bc8c10()*-0.370286);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdd550() {
   return (neuron0x2bc8f50()*-0.720662);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdd590() {
   return (neuron0x2bc9290()*-1.06803);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdd910() {
   return (neuron0x2bc46d0()*0.0178846);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdd950() {
   return (neuron0x2bc4980()*10.213);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdd990() {
   return (neuron0x2bc4cc0()*-0.145239);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdd9d0() {
   return (neuron0x2bc5000()*-0.0370415);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdda10() {
   return (neuron0x2bc5340()*0.00893883);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdda50() {
   return (neuron0x2bc5680()*0.00243554);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdda90() {
   return (neuron0x2bc59c0()*0.0136695);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bddad0() {
   return (neuron0x2bc5d00()*-0.018592);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bddb10() {
   return (neuron0x2bc6040()*-0.0136588);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bddb50() {
   return (neuron0x2bc6380()*-0.00470227);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bddb90() {
   return (neuron0x2bc66c0()*0.0197673);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bddbd0() {
   return (neuron0x2bc6a00()*-0.0509631);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bddc10() {
   return (neuron0x2bc6d40()*0.0129688);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bddc50() {
   return (neuron0x2bc7080()*-0.051625);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bddc90() {
   return (neuron0x2bc73c0()*-0.0177294);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bddcd0() {
   return (neuron0x2bc7700()*-0.0233235);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdd760() {
   return (neuron0x2bc7a40()*0.0328269);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdd7a0() {
   return (neuron0x2bc7fa0()*-0.0377059);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdde20() {
   return (neuron0x2bc8250()*-0.0226853);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdde60() {
   return (neuron0x2bc8590()*-0.0255086);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bddea0() {
   return (neuron0x2bc88d0()*-0.0224258);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bddee0() {
   return (neuron0x2bc8c10()*0.0113896);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bddf20() {
   return (neuron0x2bc8f50()*-0.00525782);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bddf60() {
   return (neuron0x2bc9290()*2.96897);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bde2e0() {
   return (neuron0x2bc46d0()*0.138419);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bde320() {
   return (neuron0x2bc4980()*0.175529);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bde360() {
   return (neuron0x2bc4cc0()*0.137526);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bde3a0() {
   return (neuron0x2bc5000()*1.23397);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bde3e0() {
   return (neuron0x2bc5340()*-0.231513);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bde420() {
   return (neuron0x2bc5680()*-0.0742401);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bde460() {
   return (neuron0x2bc59c0()*-0.467046);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bde4a0() {
   return (neuron0x2bc5d00()*-1.71695);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bde4e0() {
   return (neuron0x2bc6040()*0.894221);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bde520() {
   return (neuron0x2bc6380()*-0.057702);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bde560() {
   return (neuron0x2bc66c0()*1.06711);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bde5a0() {
   return (neuron0x2bc6a00()*0.492965);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bde5e0() {
   return (neuron0x2bc6d40()*0.540337);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bde620() {
   return (neuron0x2bc7080()*-2.0602);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bde660() {
   return (neuron0x2bc73c0()*-0.663533);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bde6a0() {
   return (neuron0x2bc7700()*0.670539);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bde130() {
   return (neuron0x2bc7a40()*-0.120806);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bde170() {
   return (neuron0x2bc7fa0()*0.45729);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bde7f0() {
   return (neuron0x2bc8250()*1.51042);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bde830() {
   return (neuron0x2bc8590()*0.185084);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bde870() {
   return (neuron0x2bc88d0()*1.46592);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bde8b0() {
   return (neuron0x2bc8c10()*-0.545579);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bde8f0() {
   return (neuron0x2bc8f50()*0.173039);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bde930() {
   return (neuron0x2bc9290()*5.17883);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdecb0() {
   return (neuron0x2bc46d0()*-0.145358);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdecf0() {
   return (neuron0x2bc4980()*-0.817525);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bded30() {
   return (neuron0x2bc4cc0()*0.565977);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bded70() {
   return (neuron0x2bc5000()*-0.119038);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdedb0() {
   return (neuron0x2bc5340()*0.338905);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdedf0() {
   return (neuron0x2bc5680()*1.15748);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdee30() {
   return (neuron0x2bc59c0()*-1.38672);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdee70() {
   return (neuron0x2bc5d00()*-0.156417);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdeeb0() {
   return (neuron0x2bc6040()*0.704344);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdeef0() {
   return (neuron0x2bc6380()*-0.23767);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdef30() {
   return (neuron0x2bc66c0()*-0.235876);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdef70() {
   return (neuron0x2bc6a00()*0.576136);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdefb0() {
   return (neuron0x2bc6d40()*0.273515);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdeff0() {
   return (neuron0x2bc7080()*-1.17121);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdf030() {
   return (neuron0x2bc73c0()*0.228013);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdf070() {
   return (neuron0x2bc7700()*-0.625979);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdeb00() {
   return (neuron0x2bc7a40()*0.094208);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdeb40() {
   return (neuron0x2bc7fa0()*0.663853);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdf1c0() {
   return (neuron0x2bc8250()*0.0077483);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdf200() {
   return (neuron0x2bc8590()*-0.492454);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdf240() {
   return (neuron0x2bc88d0()*-0.334766);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdf280() {
   return (neuron0x2bc8c10()*-1.07786);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdf2c0() {
   return (neuron0x2bc8f50()*0.0860161);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdf300() {
   return (neuron0x2bc9290()*-0.376505);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdf680() {
   return (neuron0x2bc46d0()*-1.73071);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdf6c0() {
   return (neuron0x2bc4980()*0.319438);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdf700() {
   return (neuron0x2bc4cc0()*-1.25519);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdf740() {
   return (neuron0x2bc5000()*-0.409064);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdf780() {
   return (neuron0x2bc5340()*-0.500011);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdf7c0() {
   return (neuron0x2bc5680()*0.426296);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdf800() {
   return (neuron0x2bc59c0()*1.10297);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdf840() {
   return (neuron0x2bc5d00()*-0.0767613);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdf880() {
   return (neuron0x2bc6040()*0.611274);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdf8c0() {
   return (neuron0x2bc6380()*0.58196);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdf900() {
   return (neuron0x2bc66c0()*0.863104);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdf940() {
   return (neuron0x2bc6a00()*-2.04761);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdf980() {
   return (neuron0x2bc6d40()*1.95115);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdf9c0() {
   return (neuron0x2bc7080()*1.63753);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdfa00() {
   return (neuron0x2bc73c0()*0.105231);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdfa40() {
   return (neuron0x2bc7700()*-0.444758);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdf4d0() {
   return (neuron0x2bc7a40()*-1.03255);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdf510() {
   return (neuron0x2bc7fa0()*-2.32211);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdfb90() {
   return (neuron0x2bc8250()*0.0664857);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdfbd0() {
   return (neuron0x2bc8590()*-0.882386);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdfc10() {
   return (neuron0x2bc88d0()*-1.50474);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdfc50() {
   return (neuron0x2bc8c10()*1.34897);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdfc90() {
   return (neuron0x2bc8f50()*0.466721);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdfcd0() {
   return (neuron0x2bc9290()*-0.67832);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be0050() {
   return (neuron0x2bc46d0()*-0.223669);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd4620() {
   return (neuron0x2bc4980()*-0.0146656);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd4660() {
   return (neuron0x2bc4cc0()*1.39854);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd46a0() {
   return (neuron0x2bc5000()*-0.0337523);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd48f0() {
   return (neuron0x2bc5340()*0.0434326);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd4930() {
   return (neuron0x2bc5680()*0.0791826);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd4970() {
   return (neuron0x2bc59c0()*0.0431907);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd4bc0() {
   return (neuron0x2bc5d00()*-0.0047044);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd4c00() {
   return (neuron0x2bc6040()*-0.0332697);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd4e50() {
   return (neuron0x2bc6380()*0.045389);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd4e90() {
   return (neuron0x2bc66c0()*0.00872527);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd4ed0() {
   return (neuron0x2bc6a00()*0.0586589);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd5120() {
   return (neuron0x2bc6d40()*-0.0749523);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd5160() {
   return (neuron0x2bc7080()*0.0621552);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd53b0() {
   return (neuron0x2bc73c0()*0.0323028);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd53f0() {
   return (neuron0x2bc7700()*0.0122781);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdfea0() {
   return (neuron0x2bc7a40()*0.0895746);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdfee0() {
   return (neuron0x2bc7fa0()*-0.0608449);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd5540() {
   return (neuron0x2bc8250()*-0.0699351);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd5a50() {
   return (neuron0x2bc8590()*-0.0680275);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd5a90() {
   return (neuron0x2bc88d0()*-0.0418819);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd5ad0() {
   return (neuron0x2bc8c10()*0.000550984);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd5d20() {
   return (neuron0x2bc8f50()*-0.0229407);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd5d60() {
   return (neuron0x2bc9290()*9.69348);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd5610() {
   return (neuron0x2bc46d0()*-0.38881);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd5650() {
   return (neuron0x2bc4980()*0.591235);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd5690() {
   return (neuron0x2bc4cc0()*-0.729947);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd56d0() {
   return (neuron0x2bc5000()*0.139006);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd6050() {
   return (neuron0x2bc5340()*0.160881);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be23a0() {
   return (neuron0x2bc5680()*0.144161);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be23e0() {
   return (neuron0x2bc59c0()*0.12166);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be2420() {
   return (neuron0x2bc5d00()*-0.366316);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be2460() {
   return (neuron0x2bc6040()*-0.635014);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be24a0() {
   return (neuron0x2bc6380()*0.138647);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be24e0() {
   return (neuron0x2bc66c0()*0.395815);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be2520() {
   return (neuron0x2bc6a00()*0.381282);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be2560() {
   return (neuron0x2bc6d40()*0.464948);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be25a0() {
   return (neuron0x2bc7080()*-0.747464);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be25e0() {
   return (neuron0x2bc73c0()*0.513663);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be2620() {
   return (neuron0x2bc7700()*-0.378203);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd5f30() {
   return (neuron0x2bc7a40()*0.0561489);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd5f70() {
   return (neuron0x2bc7fa0()*0.494034);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be2770() {
   return (neuron0x2bc8250()*-1.22231);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be27b0() {
   return (neuron0x2bc8590()*0.304836);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be27f0() {
   return (neuron0x2bc88d0()*0.509032);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be2830() {
   return (neuron0x2bc8c10()*-0.322415);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be2870() {
   return (neuron0x2bc8f50()*0.385947);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be28b0() {
   return (neuron0x2bc9290()*-0.599194);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be2c30() {
   return (neuron0x2bc46d0()*0.612519);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be2c70() {
   return (neuron0x2bc4980()*-3.27126);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be2cb0() {
   return (neuron0x2bc4cc0()*-1.01025);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be2cf0() {
   return (neuron0x2bc5000()*-0.664948);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be2d30() {
   return (neuron0x2bc5340()*-0.710677);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be2d70() {
   return (neuron0x2bc5680()*0.347832);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be2db0() {
   return (neuron0x2bc59c0()*-0.330437);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be2df0() {
   return (neuron0x2bc5d00()*-1.98164);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be2e30() {
   return (neuron0x2bc6040()*-0.384806);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be2e70() {
   return (neuron0x2bc6380()*0.964518);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be2eb0() {
   return (neuron0x2bc66c0()*0.536033);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be2ef0() {
   return (neuron0x2bc6a00()*1.32125);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be2f30() {
   return (neuron0x2bc6d40()*1.29407);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be2f70() {
   return (neuron0x2bc7080()*1.68008);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be2fb0() {
   return (neuron0x2bc73c0()*-0.66031);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be2ff0() {
   return (neuron0x2bc7700()*0.692865);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be2a80() {
   return (neuron0x2bc7a40()*0.445863);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be2ac0() {
   return (neuron0x2bc7fa0()*-1.50481);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be3140() {
   return (neuron0x2bc8250()*-2.00958);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be3180() {
   return (neuron0x2bc8590()*1.04595);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be31c0() {
   return (neuron0x2bc88d0()*0.318828);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be3200() {
   return (neuron0x2bc8c10()*-0.350017);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be3240() {
   return (neuron0x2bc8f50()*0.596254);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be3280() {
   return (neuron0x2bc9290()*0.61529);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be3600() {
   return (neuron0x2bc46d0()*-0.698363);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be3640() {
   return (neuron0x2bc4980()*-2.7079);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be3680() {
   return (neuron0x2bc4cc0()*2.61384);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be36c0() {
   return (neuron0x2bc5000()*0.626569);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be3700() {
   return (neuron0x2bc5340()*0.380523);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be3740() {
   return (neuron0x2bc5680()*0.193906);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be3780() {
   return (neuron0x2bc59c0()*0.386212);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be37c0() {
   return (neuron0x2bc5d00()*0.259918);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be3800() {
   return (neuron0x2bc6040()*0.127146);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be3840() {
   return (neuron0x2bc6380()*0.0454907);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be3880() {
   return (neuron0x2bc66c0()*0.38394);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be38c0() {
   return (neuron0x2bc6a00()*0.0594051);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be3900() {
   return (neuron0x2bc6d40()*-0.754725);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be3940() {
   return (neuron0x2bc7080()*-0.919287);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be3980() {
   return (neuron0x2bc73c0()*0.305761);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be39c0() {
   return (neuron0x2bc7700()*0.346406);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be3450() {
   return (neuron0x2bc7a40()*0.172569);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be3490() {
   return (neuron0x2bc7fa0()*-0.0890298);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be3b10() {
   return (neuron0x2bc8250()*-0.19643);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be3b50() {
   return (neuron0x2bc8590()*-0.340587);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be3b90() {
   return (neuron0x2bc88d0()*0.232888);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be3bd0() {
   return (neuron0x2bc8c10()*1.12059);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be3c10() {
   return (neuron0x2bc8f50()*-0.0332098);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be3c50() {
   return (neuron0x2bc9290()*0.128947);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be3fd0() {
   return (neuron0x2bc46d0()*3.27771);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4010() {
   return (neuron0x2bc4980()*1.92347);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4050() {
   return (neuron0x2bc4cc0()*-2.00636);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4090() {
   return (neuron0x2bc5000()*1.23198);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be40d0() {
   return (neuron0x2bc5340()*-1.08762);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4110() {
   return (neuron0x2bc5680()*-0.613665);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4150() {
   return (neuron0x2bc59c0()*0.391802);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4190() {
   return (neuron0x2bc5d00()*-0.214145);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be41d0() {
   return (neuron0x2bc6040()*-2.07803);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4210() {
   return (neuron0x2bc6380()*-1.14627);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4250() {
   return (neuron0x2bc66c0()*-1.38631);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4290() {
   return (neuron0x2bc6a00()*0.38675);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be42d0() {
   return (neuron0x2bc6d40()*-1.40012);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4310() {
   return (neuron0x2bc7080()*3.00287);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4350() {
   return (neuron0x2bc73c0()*0.433624);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4390() {
   return (neuron0x2bc7700()*-1.41505);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be3e20() {
   return (neuron0x2bc7a40()*1.53413);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be3e60() {
   return (neuron0x2bc7fa0()*1.52871);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be44e0() {
   return (neuron0x2bc8250()*-0.716378);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4520() {
   return (neuron0x2bc8590()*2.30285);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4560() {
   return (neuron0x2bc88d0()*-1.36796);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be45a0() {
   return (neuron0x2bc8c10()*0.232883);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be45e0() {
   return (neuron0x2bc8f50()*0.822608);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4620() {
   return (neuron0x2bc9290()*1.69816);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be49a0() {
   return (neuron0x2bc46d0()*2.51244);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be49e0() {
   return (neuron0x2bc4980()*-0.411255);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4a20() {
   return (neuron0x2bc4cc0()*0.783145);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4a60() {
   return (neuron0x2bc5000()*0.853344);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4aa0() {
   return (neuron0x2bc5340()*1.02139);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4ae0() {
   return (neuron0x2bc5680()*-0.516842);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4b20() {
   return (neuron0x2bc59c0()*-1.46573);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4b60() {
   return (neuron0x2bc5d00()*0.0778396);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4ba0() {
   return (neuron0x2bc6040()*-0.575391);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4be0() {
   return (neuron0x2bc6380()*0.380143);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4c20() {
   return (neuron0x2bc66c0()*0.403251);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4c60() {
   return (neuron0x2bc6a00()*-3.44955);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4ca0() {
   return (neuron0x2bc6d40()*1.0029);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4ce0() {
   return (neuron0x2bc7080()*0.414201);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4d20() {
   return (neuron0x2bc73c0()*1.22815);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4d60() {
   return (neuron0x2bc7700()*0.650238);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be47f0() {
   return (neuron0x2bc7a40()*1.24795);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4830() {
   return (neuron0x2bc7fa0()*-0.190684);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4eb0() {
   return (neuron0x2bc8250()*-0.793827);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4ef0() {
   return (neuron0x2bc8590()*0.128234);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4f30() {
   return (neuron0x2bc88d0()*-0.0777532);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4f70() {
   return (neuron0x2bc8c10()*-0.706836);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4fb0() {
   return (neuron0x2bc8f50()*0.393909);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4ff0() {
   return (neuron0x2bc9290()*0.548294);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be5370() {
   return (neuron0x2bc46d0()*2.49833);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be53b0() {
   return (neuron0x2bc4980()*0.103364);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be53f0() {
   return (neuron0x2bc4cc0()*0.712187);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be5430() {
   return (neuron0x2bc5000()*1.19623);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be5470() {
   return (neuron0x2bc5340()*-0.444514);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be54b0() {
   return (neuron0x2bc5680()*-1.30577);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be54f0() {
   return (neuron0x2bc59c0()*0.065289);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be5530() {
   return (neuron0x2bc5d00()*-0.460554);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be5570() {
   return (neuron0x2bc6040()*-0.480591);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be55b0() {
   return (neuron0x2bc6380()*-0.268916);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be55f0() {
   return (neuron0x2bc66c0()*0.104466);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be5630() {
   return (neuron0x2bc6a00()*0.790597);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be5670() {
   return (neuron0x2bc6d40()*-0.208563);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be56b0() {
   return (neuron0x2bc7080()*0.304096);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be56f0() {
   return (neuron0x2bc73c0()*0.21143);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be5730() {
   return (neuron0x2bc7700()*0.168016);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be51c0() {
   return (neuron0x2bc7a40()*1.52027);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be5200() {
   return (neuron0x2bc7fa0()*0.0965846);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be5880() {
   return (neuron0x2bc8250()*-0.300064);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be58c0() {
   return (neuron0x2bc8590()*0.122588);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be5900() {
   return (neuron0x2bc88d0()*-0.505481);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be5940() {
   return (neuron0x2bc8c10()*-0.328396);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be5980() {
   return (neuron0x2bc8f50()*0.621239);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be59c0() {
   return (neuron0x2bc9290()*2.02326);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be5d40() {
   return (neuron0x2bc46d0()*0.058857);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be5d80() {
   return (neuron0x2bc4980()*-0.0192899);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be5dc0() {
   return (neuron0x2bc4cc0()*2.12216);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be5e00() {
   return (neuron0x2bc5000()*0.0178066);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be5e40() {
   return (neuron0x2bc5340()*-0.0196684);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be5e80() {
   return (neuron0x2bc5680()*-0.0356874);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be5ec0() {
   return (neuron0x2bc59c0()*-0.00555217);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be5f00() {
   return (neuron0x2bc5d00()*-0.0435756);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be5f40() {
   return (neuron0x2bc6040()*-0.0565031);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be5f80() {
   return (neuron0x2bc6380()*-0.0243709);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be5fc0() {
   return (neuron0x2bc66c0()*-0.0108162);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be6000() {
   return (neuron0x2bc6a00()*0.452642);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be6040() {
   return (neuron0x2bc6d40()*0.00662786);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be6080() {
   return (neuron0x2bc7080()*-0.000195828);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be60c0() {
   return (neuron0x2bc73c0()*-0.0395993);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be6100() {
   return (neuron0x2bc7700()*-0.0200899);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be5b90() {
   return (neuron0x2bc7a40()*-0.0147604);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be5bd0() {
   return (neuron0x2bc7fa0()*-0.0332312);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be6250() {
   return (neuron0x2bc8250()*0.00791679);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be6290() {
   return (neuron0x2bc8590()*-0.0122599);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be62d0() {
   return (neuron0x2bc88d0()*-0.0179925);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be6310() {
   return (neuron0x2bc8c10()*0.0318348);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be6350() {
   return (neuron0x2bc8f50()*-0.000261369);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be6390() {
   return (neuron0x2bc9290()*5.07713);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be6710() {
   return (neuron0x2bc46d0()*-0.0010123);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be6750() {
   return (neuron0x2bc4980()*-0.00981607);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be6790() {
   return (neuron0x2bc4cc0()*12.4881);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be67d0() {
   return (neuron0x2bc5000()*-0.0830377);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be6810() {
   return (neuron0x2bc5340()*0.0589209);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be6850() {
   return (neuron0x2bc5680()*0.0317785);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be6890() {
   return (neuron0x2bc59c0()*0.0893093);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be68d0() {
   return (neuron0x2bc5d00()*0.00946448);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be6910() {
   return (neuron0x2bc6040()*0.0179858);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be6950() {
   return (neuron0x2bc6380()*-0.0334925);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be6990() {
   return (neuron0x2bc66c0()*0.00365277);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be69d0() {
   return (neuron0x2bc6a00()*-8.03241);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be6a10() {
   return (neuron0x2bc6d40()*-0.046002);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be6a50() {
   return (neuron0x2bc7080()*-0.0618036);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be6a90() {
   return (neuron0x2bc73c0()*-0.024533);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be6ad0() {
   return (neuron0x2bc7700()*0.0901336);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be6560() {
   return (neuron0x2bc7a40()*-0.0431212);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be65a0() {
   return (neuron0x2bc7fa0()*-0.054738);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be6c20() {
   return (neuron0x2bc8250()*0.0166562);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be6c60() {
   return (neuron0x2bc8590()*-0.00634559);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be6ca0() {
   return (neuron0x2bc88d0()*0.0558467);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be6ce0() {
   return (neuron0x2bc8c10()*-0.0566595);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be6d20() {
   return (neuron0x2bc8f50()*-0.0361683);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be6d60() {
   return (neuron0x2bc9290()*-0.0833176);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcf810() {
   return (neuron0x2bc46d0()*-1.34968);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcf850() {
   return (neuron0x2bc4980()*-0.156912);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcf890() {
   return (neuron0x2bc4cc0()*-0.608811);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcf8d0() {
   return (neuron0x2bc5000()*-0.115945);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcf910() {
   return (neuron0x2bc5340()*-0.0352234);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcf950() {
   return (neuron0x2bc5680()*0.113821);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcf990() {
   return (neuron0x2bc59c0()*-1.08603);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcf9d0() {
   return (neuron0x2bc5d00()*-0.0969691);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be74f0() {
   return (neuron0x2bc6040()*-0.20521);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be7530() {
   return (neuron0x2bc6380()*0.779815);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be7570() {
   return (neuron0x2bc66c0()*-0.40032);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be75b0() {
   return (neuron0x2bc6a00()*0.537771);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be75f0() {
   return (neuron0x2bc6d40()*-0.0523422);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be7630() {
   return (neuron0x2bc7080()*0.201122);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be7670() {
   return (neuron0x2bc73c0()*-0.324896);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be76b0() {
   return (neuron0x2bc7700()*-0.304162);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be6f30() {
   return (neuron0x2bc7a40()*0.444513);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be6f70() {
   return (neuron0x2bc7fa0()*-0.0187932);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be7800() {
   return (neuron0x2bc8250()*0.510977);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be7840() {
   return (neuron0x2bc8590()*0.144225);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be7880() {
   return (neuron0x2bc88d0()*0.406469);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be78c0() {
   return (neuron0x2bc8c10()*-0.224328);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be7900() {
   return (neuron0x2bc8f50()*0.197036);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be7940() {
   return (neuron0x2bc9290()*4.0933);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be7cc0() {
   return (neuron0x2bc46d0()*-0.326978);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be7d00() {
   return (neuron0x2bc4980()*-0.0688405);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be7d40() {
   return (neuron0x2bc4cc0()*3.57598);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be7d80() {
   return (neuron0x2bc5000()*-0.102419);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be7dc0() {
   return (neuron0x2bc5340()*-0.1788);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be7e00() {
   return (neuron0x2bc5680()*-0.176279);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be7e40() {
   return (neuron0x2bc59c0()*0.693934);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be7e80() {
   return (neuron0x2bc5d00()*-0.102939);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be7ec0() {
   return (neuron0x2bc6040()*2.64983);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be7f00() {
   return (neuron0x2bc6380()*-0.769619);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be7f40() {
   return (neuron0x2bc66c0()*-0.632334);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be7f80() {
   return (neuron0x2bc6a00()*-1.04286);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be7fc0() {
   return (neuron0x2bc6d40()*-0.153729);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be8000() {
   return (neuron0x2bc7080()*1.28222);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be8040() {
   return (neuron0x2bc73c0()*-1.01517);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be8080() {
   return (neuron0x2bc7700()*0.142924);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be7b10() {
   return (neuron0x2bc7a40()*0.170928);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be7b50() {
   return (neuron0x2bc7fa0()*-0.977305);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be81d0() {
   return (neuron0x2bc8250()*1.20926);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be8210() {
   return (neuron0x2bc8590()*-0.374341);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be8250() {
   return (neuron0x2bc88d0()*-0.270271);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be8290() {
   return (neuron0x2bc8c10()*0.0626144);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be82d0() {
   return (neuron0x2bc8f50()*-0.516706);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be8310() {
   return (neuron0x2bc9290()*3.68415);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be8690() {
   return (neuron0x2bc46d0()*-0.0325742);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be86d0() {
   return (neuron0x2bc4980()*0.000412411);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be8710() {
   return (neuron0x2bc4cc0()*-0.21705);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be8750() {
   return (neuron0x2bc5000()*-0.00783373);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be8790() {
   return (neuron0x2bc5340()*0.0132971);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be87d0() {
   return (neuron0x2bc5680()*0.0233707);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be8810() {
   return (neuron0x2bc59c0()*-0.00935084);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be8850() {
   return (neuron0x2bc5d00()*0.0117843);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be8890() {
   return (neuron0x2bc6040()*0.00812294);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be88d0() {
   return (neuron0x2bc6380()*0.00969697);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be8910() {
   return (neuron0x2bc66c0()*0.0193092);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be8950() {
   return (neuron0x2bc6a00()*-0.0479656);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be8990() {
   return (neuron0x2bc6d40()*0.00377574);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be89d0() {
   return (neuron0x2bc7080()*0.00133718);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be8a10() {
   return (neuron0x2bc73c0()*-0.0013484);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be8a50() {
   return (neuron0x2bc7700()*0.00936271);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be84e0() {
   return (neuron0x2bc7a40()*0.0126358);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be8520() {
   return (neuron0x2bc7fa0()*-0.0155105);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9050() {
   return (neuron0x2bc8250()*-0.00976042);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9090() {
   return (neuron0x2bc8590()*-0.00164009);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd90d0() {
   return (neuron0x2bc88d0()*-0.00755597);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9110() {
   return (neuron0x2bc8c10()*-0.00556074);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9150() {
   return (neuron0x2bc8f50()*-0.0151804);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9190() {
   return (neuron0x2bc9290()*2.6887);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9510() {
   return (neuron0x2bc46d0()*-0.206423);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9550() {
   return (neuron0x2bc4980()*2.97601);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9590() {
   return (neuron0x2bc4cc0()*-0.993905);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd95d0() {
   return (neuron0x2bc5000()*-0.058803);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9610() {
   return (neuron0x2bc5340()*0.644513);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9650() {
   return (neuron0x2bc5680()*0.156255);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9690() {
   return (neuron0x2bc59c0()*-0.126306);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd96d0() {
   return (neuron0x2bc5d00()*0.533805);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9710() {
   return (neuron0x2bc6040()*-0.340487);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9750() {
   return (neuron0x2bc6380()*-0.385753);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9790() {
   return (neuron0x2bc66c0()*0.0267898);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd97d0() {
   return (neuron0x2bc6a00()*0.0444964);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9810() {
   return (neuron0x2bc6d40()*0.532247);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9850() {
   return (neuron0x2bc7080()*-0.078732);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9890() {
   return (neuron0x2bc73c0()*-0.239511);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd98d0() {
   return (neuron0x2bc7700()*-0.0951291);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9360() {
   return (neuron0x2bc7a40()*-0.427493);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd93a0() {
   return (neuron0x2bc7fa0()*0.109779);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9a20() {
   return (neuron0x2bc8250()*-0.24982);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9a60() {
   return (neuron0x2bc8590()*0.105864);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9aa0() {
   return (neuron0x2bc88d0()*0.614416);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9ae0() {
   return (neuron0x2bc8c10()*-0.0564861);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9b20() {
   return (neuron0x2bc8f50()*-0.364306);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9b60() {
   return (neuron0x2bc9290()*-4.97835);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9ee0() {
   return (neuron0x2bc46d0()*0.182629);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9f20() {
   return (neuron0x2bc4980()*-2.09475);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9f60() {
   return (neuron0x2bc4cc0()*1.40323);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9fa0() {
   return (neuron0x2bc5000()*1.51784);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9fe0() {
   return (neuron0x2bc5340()*0.57499);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bda020() {
   return (neuron0x2bc5680()*-0.0219859);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bda060() {
   return (neuron0x2bc59c0()*-0.292143);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bda0a0() {
   return (neuron0x2bc5d00()*1.87737);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bda0e0() {
   return (neuron0x2bc6040()*-2.28209);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bda120() {
   return (neuron0x2bc6380()*-1.29332);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bda160() {
   return (neuron0x2bc66c0()*-2.62477);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bda1a0() {
   return (neuron0x2bc6a00()*2.82903);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bda1e0() {
   return (neuron0x2bc6d40()*0.97851);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bda220() {
   return (neuron0x2bc7080()*-0.512514);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bda260() {
   return (neuron0x2bc73c0()*0.495062);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bda2a0() {
   return (neuron0x2bc7700()*1.41436);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9d30() {
   return (neuron0x2bc7a40()*-1.05844);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9d70() {
   return (neuron0x2bc7fa0()*-1.85434);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bda3f0() {
   return (neuron0x2bc8250()*0.91044);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bda430() {
   return (neuron0x2bc8590()*1.65133);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bda470() {
   return (neuron0x2bc88d0()*-1.9054);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bda4b0() {
   return (neuron0x2bc8c10()*-0.85755);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bda4f0() {
   return (neuron0x2bc8f50()*2.22655);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bda530() {
   return (neuron0x2bc9290()*0.807402);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bda8b0() {
   return (neuron0x2bc46d0()*0.0314812);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bda8f0() {
   return (neuron0x2bc4980()*0.0151202);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bda930() {
   return (neuron0x2bc4cc0()*5.21187);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bda970() {
   return (neuron0x2bc5000()*-0.00110979);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bda9b0() {
   return (neuron0x2bc5340()*0.0277932);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bda9f0() {
   return (neuron0x2bc5680()*0.0122649);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdaa30() {
   return (neuron0x2bc59c0()*-0.0136411);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdaa70() {
   return (neuron0x2bc5d00()*0.023608);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdaab0() {
   return (neuron0x2bc6040()*0.0267384);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdaaf0() {
   return (neuron0x2bc6380()*0.0220993);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdab30() {
   return (neuron0x2bc66c0()*-0.00159661);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdab70() {
   return (neuron0x2bc6a00()*-0.00729777);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdabb0() {
   return (neuron0x2bc6d40()*0.0598474);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdabf0() {
   return (neuron0x2bc7080()*0.0174571);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdac30() {
   return (neuron0x2bc73c0()*-0.0380051);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdac70() {
   return (neuron0x2bc7700()*0.000269186);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bda700() {
   return (neuron0x2bc7a40()*-0.0277188);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bda740() {
   return (neuron0x2bc7fa0()*0.0122616);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdadc0() {
   return (neuron0x2bc8250()*0.0177856);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdae00() {
   return (neuron0x2bc8590()*0.0192951);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdae40() {
   return (neuron0x2bc88d0()*0.0320908);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdae80() {
   return (neuron0x2bc8c10()*-0.00676567);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdaec0() {
   return (neuron0x2bc8f50()*-0.0148248);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdaf00() {
   return (neuron0x2bc9290()*6.08073);
}

double NNfunction_nn_chi1_charge1p::synapse0x2becdd0() {
   return (neuron0x2bc46d0()*0.258258);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bece10() {
   return (neuron0x2bc4980()*3.40027);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bece50() {
   return (neuron0x2bc4cc0()*-0.459471);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bece90() {
   return (neuron0x2bc5000()*0.315925);
}

double NNfunction_nn_chi1_charge1p::synapse0x2beced0() {
   return (neuron0x2bc5340()*0.268894);
}

double NNfunction_nn_chi1_charge1p::synapse0x2becf10() {
   return (neuron0x2bc5680()*1.22391);
}

double NNfunction_nn_chi1_charge1p::synapse0x2becf50() {
   return (neuron0x2bc59c0()*2.58485);
}

double NNfunction_nn_chi1_charge1p::synapse0x2becf90() {
   return (neuron0x2bc5d00()*0.75799);
}

double NNfunction_nn_chi1_charge1p::synapse0x2becfd0() {
   return (neuron0x2bc6040()*-2.12791);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bed010() {
   return (neuron0x2bc6380()*-0.580739);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bed050() {
   return (neuron0x2bc66c0()*-2.35596);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bed090() {
   return (neuron0x2bc6a00()*1.66363);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bed0d0() {
   return (neuron0x2bc6d40()*-0.89268);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bed110() {
   return (neuron0x2bc7080()*1.57537);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bed150() {
   return (neuron0x2bc73c0()*2.22824);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bed190() {
   return (neuron0x2bc7700()*-1.6694);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdaf40() {
   return (neuron0x2bc7a40()*-1.21492);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdaf80() {
   return (neuron0x2bc7fa0()*0.0268868);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bed2e0() {
   return (neuron0x2bc8250()*-1.40502);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bed320() {
   return (neuron0x2bc8590()*-0.218611);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bed360() {
   return (neuron0x2bc88d0()*-2.59788);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bed3a0() {
   return (neuron0x2bc8c10()*0.6426);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bed3e0() {
   return (neuron0x2bc8f50()*2.391);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bed420() {
   return (neuron0x2bc9290()*0.214504);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bed7a0() {
   return (neuron0x2bc46d0()*0.101719);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bed7e0() {
   return (neuron0x2bc4980()*0.326081);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bed820() {
   return (neuron0x2bc4cc0()*-0.156076);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bed860() {
   return (neuron0x2bc5000()*1.84196);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bed8a0() {
   return (neuron0x2bc5340()*-1.30527);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bed8e0() {
   return (neuron0x2bc5680()*1.17835);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bed920() {
   return (neuron0x2bc59c0()*0.808998);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bed960() {
   return (neuron0x2bc5d00()*-0.841428);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bed9a0() {
   return (neuron0x2bc6040()*0.419409);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bed9e0() {
   return (neuron0x2bc6380()*-0.695784);
}

double NNfunction_nn_chi1_charge1p::synapse0x2beda20() {
   return (neuron0x2bc66c0()*1.20982);
}

double NNfunction_nn_chi1_charge1p::synapse0x2beda60() {
   return (neuron0x2bc6a00()*1.49702);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bedaa0() {
   return (neuron0x2bc6d40()*2.55509);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bedae0() {
   return (neuron0x2bc7080()*0.814723);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bedb20() {
   return (neuron0x2bc73c0()*-1.48162);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bedb60() {
   return (neuron0x2bc7700()*-0.208969);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bed5f0() {
   return (neuron0x2bc7a40()*-1.61264);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bed630() {
   return (neuron0x2bc7fa0()*-0.840295);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bedcb0() {
   return (neuron0x2bc8250()*-0.197154);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bedcf0() {
   return (neuron0x2bc8590()*-1.1732);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bedd30() {
   return (neuron0x2bc88d0()*0.0551597);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bedd70() {
   return (neuron0x2bc8c10()*-1.95747);
}

double NNfunction_nn_chi1_charge1p::synapse0x2beddb0() {
   return (neuron0x2bc8f50()*1.46166);
}

double NNfunction_nn_chi1_charge1p::synapse0x2beddf0() {
   return (neuron0x2bc9290()*-1.14169);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bee170() {
   return (neuron0x2bc46d0()*-0.154611);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bee1b0() {
   return (neuron0x2bc4980()*0.517669);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bee1f0() {
   return (neuron0x2bc4cc0()*0.204125);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bee230() {
   return (neuron0x2bc5000()*0.17895);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bee270() {
   return (neuron0x2bc5340()*0.787151);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bee2b0() {
   return (neuron0x2bc5680()*-0.784125);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bee2f0() {
   return (neuron0x2bc59c0()*-0.577802);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bee330() {
   return (neuron0x2bc5d00()*-0.77071);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bee370() {
   return (neuron0x2bc6040()*-0.244079);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bee3b0() {
   return (neuron0x2bc6380()*-0.774957);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bee3f0() {
   return (neuron0x2bc66c0()*-0.00833259);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bee430() {
   return (neuron0x2bc6a00()*0.101062);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bee470() {
   return (neuron0x2bc6d40()*-0.985703);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bee4b0() {
   return (neuron0x2bc7080()*-2.10678);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bee4f0() {
   return (neuron0x2bc73c0()*-0.92676);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bee530() {
   return (neuron0x2bc7700()*0.826367);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bedfc0() {
   return (neuron0x2bc7a40()*0.138023);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bee000() {
   return (neuron0x2bc7fa0()*1.07317);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bee680() {
   return (neuron0x2bc8250()*1.6802);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bee6c0() {
   return (neuron0x2bc8590()*0.800104);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bee700() {
   return (neuron0x2bc88d0()*1.92652);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bee740() {
   return (neuron0x2bc8c10()*-0.986364);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bee780() {
   return (neuron0x2bc8f50()*0.063877);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bee7c0() {
   return (neuron0x2bc9290()*5.03102);
}

double NNfunction_nn_chi1_charge1p::synapse0x2beeb40() {
   return (neuron0x2bc46d0()*0.0488528);
}

double NNfunction_nn_chi1_charge1p::synapse0x2beeb80() {
   return (neuron0x2bc4980()*-8.60029);
}

double NNfunction_nn_chi1_charge1p::synapse0x2beebc0() {
   return (neuron0x2bc4cc0()*-0.0843579);
}

double NNfunction_nn_chi1_charge1p::synapse0x2beec00() {
   return (neuron0x2bc5000()*0.00998874);
}

double NNfunction_nn_chi1_charge1p::synapse0x2beec40() {
   return (neuron0x2bc5340()*-0.00242851);
}

double NNfunction_nn_chi1_charge1p::synapse0x2beec80() {
   return (neuron0x2bc5680()*0.0167708);
}

double NNfunction_nn_chi1_charge1p::synapse0x2beecc0() {
   return (neuron0x2bc59c0()*0.0363161);
}

double NNfunction_nn_chi1_charge1p::synapse0x2beed00() {
   return (neuron0x2bc5d00()*-0.00649135);
}

double NNfunction_nn_chi1_charge1p::synapse0x2beed40() {
   return (neuron0x2bc6040()*0.0555972);
}

double NNfunction_nn_chi1_charge1p::synapse0x2beed80() {
   return (neuron0x2bc6380()*-0.00568212);
}

double NNfunction_nn_chi1_charge1p::synapse0x2beedc0() {
   return (neuron0x2bc66c0()*0.00727636);
}

double NNfunction_nn_chi1_charge1p::synapse0x2beee00() {
   return (neuron0x2bc6a00()*0.00645662);
}

double NNfunction_nn_chi1_charge1p::synapse0x2beee40() {
   return (neuron0x2bc6d40()*-0.0900358);
}

double NNfunction_nn_chi1_charge1p::synapse0x2beee80() {
   return (neuron0x2bc7080()*0.00971856);
}

double NNfunction_nn_chi1_charge1p::synapse0x2beeec0() {
   return (neuron0x2bc73c0()*-0.0191715);
}

double NNfunction_nn_chi1_charge1p::synapse0x2beef00() {
   return (neuron0x2bc7700()*0.0265828);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bee990() {
   return (neuron0x2bc7a40()*0.0203808);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bee9d0() {
   return (neuron0x2bc7fa0()*-0.00724941);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bef050() {
   return (neuron0x2bc8250()*0.0183796);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bef090() {
   return (neuron0x2bc8590()*0.00641731);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bef0d0() {
   return (neuron0x2bc88d0()*0.0290127);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bef110() {
   return (neuron0x2bc8c10()*0.0478835);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bef150() {
   return (neuron0x2bc8f50()*-0.0134408);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bef190() {
   return (neuron0x2bc9290()*-1.05119);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bca5e0() {
   return (neuron0x2bc9700()*-1.62236);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bca620() {
   return (neuron0x2bc9fd0()*-2.44486);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcbb40() {
   return (neuron0x2bcaab0()*0.606731);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcbb80() {
   return (neuron0x298eed0()*5.31048);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcd610() {
   return (neuron0x2bcb890()*0.411601);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcd650() {
   return (neuron0x2bcd360()*0.521972);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bce3e0() {
   return (neuron0x2bce130()*-1.58774);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bce420() {
   return (neuron0x2bceb00()*1.26503);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcedb0() {
   return (neuron0x2bcf4d0()*-2.12828);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcedf0() {
   return (neuron0x2bcffb0()*-6.43761);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcf780() {
   return (neuron0x2bd0980()*-0.591964);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcf7c0() {
   return (neuron0x2bcda60()*1.50697);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd0260() {
   return (neuron0x2bd2530()*-0.547372);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd02a0() {
   return (neuron0x2bd2f00()*-3.51505);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd0c30() {
   return (neuron0x2bd38d0()*-9.2088);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd0c70() {
   return (neuron0x2bd42a0()*-2.16527);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcdd10() {
   return (neuron0x2bd60b0()*-3.84966);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bcdd50() {
   return (neuron0x2bd6390()*-2.40003);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd27e0() {
   return (neuron0x2bd6d60()*0.0874036);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd2820() {
   return (neuron0x2bd7730()*-1.92938);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd31b0() {
   return (neuron0x2bd8100()*-1.91797);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd31f0() {
   return (neuron0x2bd8ad0()*0.504722);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3b80() {
   return (neuron0x2bd1620()*-0.263603);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd3bc0() {
   return (neuron0x2bd1ff0()*1.35214);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd4550() {
   return (neuron0x2bdb860()*-0.969156);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd4590() {
   return (neuron0x2bdc230()*-2.00524);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc75e0() {
   return (neuron0x2bdcc00()*1.87711);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc7620() {
   return (neuron0x2bdd5d0()*-7.54327);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd6640() {
   return (neuron0x2bddfa0()*-1.26095);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd6680() {
   return (neuron0x2bde970()*2.95722);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd7010() {
   return (neuron0x2bdf340()*-1.67479);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd7050() {
   return (neuron0x2bdfd10()*1.31643);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd79e0() {
   return (neuron0x2bd5da0()*-3.95463);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd7a20() {
   return (neuron0x2be28f0()*1.57992);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd83b0() {
   return (neuron0x2be32c0()*2.73973);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd83f0() {
   return (neuron0x2be3c90()*1.3564);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd8d80() {
   return (neuron0x2be4660()*-1.39372);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd8dc0() {
   return (neuron0x2be5030()*-2.78336);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd18d0() {
   return (neuron0x2be5a00()*-1.99741);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd1910() {
   return (neuron0x2be63d0()*-4.59104);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdb180() {
   return (neuron0x2be6da0()*-2.37758);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdb1c0() {
   return (neuron0x2be7980()*-2.13873);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdbb10() {
   return (neuron0x2be8350()*4.56197);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdbb50() {
   return (neuron0x2bd91d0()*4.01057);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdc4e0() {
   return (neuron0x2bd9ba0()*-1.38999);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdc520() {
   return (neuron0x2bda570()*-3.72864);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdceb0() {
   return (neuron0x2becbb0()*1.46326);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdcef0() {
   return (neuron0x2bed460()*1.22257);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdd880() {
   return (neuron0x2bede30()*3.07051);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdd8c0() {
   return (neuron0x2bee800()*4.42942);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bdffc0() {
   return (neuron0x2bc9700()*-0.00991367);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be0000() {
   return (neuron0x2bc9fd0()*-0.0140541);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd5580() {
   return (neuron0x2bcaab0()*-3.76768);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd55c0() {
   return (neuron0x298eed0()*2.60508);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be2ba0() {
   return (neuron0x2bcb890()*-3.19103);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be2be0() {
   return (neuron0x2bcd360()*-0.000206627);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be3570() {
   return (neuron0x2bce130()*0.0118492);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be35b0() {
   return (neuron0x2bceb00()*-6.30732);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be3f40() {
   return (neuron0x2bcf4d0()*0.00530859);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be3f80() {
   return (neuron0x2bcffb0()*1.36084);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4910() {
   return (neuron0x2bd0980()*0.0018916);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be4950() {
   return (neuron0x2bcda60()*-0.00329233);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be52e0() {
   return (neuron0x2bd2530()*0.920672);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be5320() {
   return (neuron0x2bd2f00()*-0.0383092);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be5cb0() {
   return (neuron0x2bd38d0()*0.136275);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be5cf0() {
   return (neuron0x2bd42a0()*0.0322295);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be6680() {
   return (neuron0x2bd60b0()*-0.0330693);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be66c0() {
   return (neuron0x2bd6390()*-0.00834276);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be7050() {
   return (neuron0x2bd6d60()*1.39217);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be7090() {
   return (neuron0x2bd7730()*-0.00865693);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be7c30() {
   return (neuron0x2bd8100()*0.0408919);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be7c70() {
   return (neuron0x2bd8ad0()*-0.0144596);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be8600() {
   return (neuron0x2bd1620()*-0.00819211);
}

double NNfunction_nn_chi1_charge1p::synapse0x2be8640() {
   return (neuron0x2bd1ff0()*0.0131162);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9480() {
   return (neuron0x2bdb860()*-0.0986786);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd94c0() {
   return (neuron0x2bdc230()*-0.0885732);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9e50() {
   return (neuron0x2bdcc00()*0.0222609);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bd9e90() {
   return (neuron0x2bdd5d0()*1.55025);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bda820() {
   return (neuron0x2bddfa0()*0.0161746);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bda860() {
   return (neuron0x2bde970()*0.0147233);
}

double NNfunction_nn_chi1_charge1p::synapse0x2becd40() {
   return (neuron0x2bdf340()*-0.00438374);
}

double NNfunction_nn_chi1_charge1p::synapse0x2becd80() {
   return (neuron0x2bdfd10()*-1.0762);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bed710() {
   return (neuron0x2bd5da0()*-0.00436835);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bed750() {
   return (neuron0x2be28f0()*-0.00577438);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bee0e0() {
   return (neuron0x2be32c0()*-0.005503);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bee120() {
   return (neuron0x2be3c90()*0.00402903);
}

double NNfunction_nn_chi1_charge1p::synapse0x2beeab0() {
   return (neuron0x2be4660()*-0.0096888);
}

double NNfunction_nn_chi1_charge1p::synapse0x2beeaf0() {
   return (neuron0x2be5030()*0.00274211);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc99b0() {
   return (neuron0x2be5a00()*0.687019);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bc99f0() {
   return (neuron0x2be63d0()*-0.00634597);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bde250() {
   return (neuron0x2be6da0()*0.0325339);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bde290() {
   return (neuron0x2be7980()*0.0063194);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bef1d0() {
   return (neuron0x2be8350()*1.33042);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bef210() {
   return (neuron0x2bd91d0()*0.0228446);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bef250() {
   return (neuron0x2bd9ba0()*0.000973412);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bef290() {
   return (neuron0x2bda570()*-0.696239);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf6140() {
   return (neuron0x2becbb0()*-0.0168522);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf6180() {
   return (neuron0x2bed460()*-0.0183967);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf61c0() {
   return (neuron0x2bede30()*0.0103329);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf6200() {
   return (neuron0x2bee800()*-2.2604);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf6580() {
   return (neuron0x2bc9700()*-0.0152722);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf65c0() {
   return (neuron0x2bc9fd0()*0.304593);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf6600() {
   return (neuron0x2bcaab0()*-9.06195);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf6640() {
   return (neuron0x298eed0()*0.645984);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf6680() {
   return (neuron0x2bcb890()*0.653916);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf66c0() {
   return (neuron0x2bcd360()*-1.63566);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf6700() {
   return (neuron0x2bce130()*-0.223786);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf6740() {
   return (neuron0x2bceb00()*-2.20637);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf6780() {
   return (neuron0x2bcf4d0()*-0.434657);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf67c0() {
   return (neuron0x2bcffb0()*-5.1119);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf6800() {
   return (neuron0x2bd0980()*-1.10292);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf6840() {
   return (neuron0x2bcda60()*0.306047);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf6880() {
   return (neuron0x2bd2530()*2.48339);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf68c0() {
   return (neuron0x2bd2f00()*-3.43364);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf6900() {
   return (neuron0x2bd38d0()*-7.51356);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf6940() {
   return (neuron0x2bd42a0()*-0.641324);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf63d0() {
   return (neuron0x2bd60b0()*2.03606);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf6410() {
   return (neuron0x2bd6390()*0.0479871);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf6a90() {
   return (neuron0x2bd6d60()*2.26865);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf6ad0() {
   return (neuron0x2bd7730()*-0.128393);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf6b10() {
   return (neuron0x2bd8100()*-1.52209);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf6b50() {
   return (neuron0x2bd8ad0()*0.953524);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf6b90() {
   return (neuron0x2bd1620()*-1.38446);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf6bd0() {
   return (neuron0x2bd1ff0()*-0.190041);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf6c10() {
   return (neuron0x2bdb860()*2.5873);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf6c50() {
   return (neuron0x2bdc230()*5.84845);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf6c90() {
   return (neuron0x2bdcc00()*0.0884683);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf6cd0() {
   return (neuron0x2bdd5d0()*-2.68385);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf6d10() {
   return (neuron0x2bddfa0()*-1.33483);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf6d50() {
   return (neuron0x2bde970()*0.839029);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf6d90() {
   return (neuron0x2bdf340()*0.307175);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf6dd0() {
   return (neuron0x2bdfd10()*0.869235);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf6980() {
   return (neuron0x2bd5da0()*-0.935183);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf69c0() {
   return (neuron0x2be28f0()*0.70269);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf6a00() {
   return (neuron0x2be32c0()*0.432128);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf6a40() {
   return (neuron0x2be3c90()*0.16459);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7020() {
   return (neuron0x2be4660()*0.498251);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7060() {
   return (neuron0x2be5030()*-0.610174);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf70a0() {
   return (neuron0x2be5a00()*-1.08169);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf70e0() {
   return (neuron0x2be63d0()*-1.89451);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7120() {
   return (neuron0x2be6da0()*0.156138);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7160() {
   return (neuron0x2be7980()*-0.998629);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf71a0() {
   return (neuron0x2be8350()*1.24183);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf71e0() {
   return (neuron0x2bd91d0()*-2.85401);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7220() {
   return (neuron0x2bd9ba0()*0.122971);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7260() {
   return (neuron0x2bda570()*-1.61213);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf72a0() {
   return (neuron0x2becbb0()*0.47345);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf72e0() {
   return (neuron0x2bed460()*0.706707);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7320() {
   return (neuron0x2bede30()*0.10856);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7360() {
   return (neuron0x2bee800()*-9.00498);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf76e0() {
   return (neuron0x2bc9700()*-0.0211806);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7720() {
   return (neuron0x2bc9fd0()*-0.0078055);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7760() {
   return (neuron0x2bcaab0()*-0.624907);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf77a0() {
   return (neuron0x298eed0()*-0.0535865);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf77e0() {
   return (neuron0x2bcb890()*-0.25657);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7820() {
   return (neuron0x2bcd360()*0.00075104);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7860() {
   return (neuron0x2bce130()*0.00570717);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf78a0() {
   return (neuron0x2bceb00()*-1.95498);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf78e0() {
   return (neuron0x2bcf4d0()*-0.00193929);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7920() {
   return (neuron0x2bcffb0()*2.8455);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7960() {
   return (neuron0x2bd0980()*-0.0188054);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf79a0() {
   return (neuron0x2bcda60()*0.00841169);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf79e0() {
   return (neuron0x2bd2530()*2.55534);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7a20() {
   return (neuron0x2bd2f00()*1.70059);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7a60() {
   return (neuron0x2bd38d0()*-0.57005);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7aa0() {
   return (neuron0x2bd42a0()*0.0205511);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7530() {
   return (neuron0x2bd60b0()*-0.0200699);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7570() {
   return (neuron0x2bd6390()*-0.00222341);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7bf0() {
   return (neuron0x2bd6d60()*0.0216062);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7c30() {
   return (neuron0x2bd7730()*-0.0124728);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7c70() {
   return (neuron0x2bd8100()*-0.0164325);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7cb0() {
   return (neuron0x2bd8ad0()*0.0103282);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7cf0() {
   return (neuron0x2bd1620()*2.43454);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7d30() {
   return (neuron0x2bd1ff0()*0.00612701);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7d70() {
   return (neuron0x2bdb860()*0.0157502);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7db0() {
   return (neuron0x2bdc230()*0.0658299);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7df0() {
   return (neuron0x2bdcc00()*0.0116983);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7e30() {
   return (neuron0x2bdd5d0()*-0.0209662);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7e70() {
   return (neuron0x2bddfa0()*0.000202022);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7eb0() {
   return (neuron0x2bde970()*0.0132795);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7ef0() {
   return (neuron0x2bdf340()*-0.000176148);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7f30() {
   return (neuron0x2bdfd10()*-1.63236);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7ae0() {
   return (neuron0x2bd5da0()*-0.0192414);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7b20() {
   return (neuron0x2be28f0()*0.00622432);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7b60() {
   return (neuron0x2be32c0()*-0.0409147);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf7ba0() {
   return (neuron0x2be3c90()*-0.00728538);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8180() {
   return (neuron0x2be4660()*-0.00269044);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf81c0() {
   return (neuron0x2be5030()*-0.0130469);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8200() {
   return (neuron0x2be5a00()*-0.570054);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8240() {
   return (neuron0x2be63d0()*-0.539581);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8280() {
   return (neuron0x2be6da0()*0.0598929);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf82c0() {
   return (neuron0x2be7980()*-0.0180626);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8300() {
   return (neuron0x2be8350()*-0.881292);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8340() {
   return (neuron0x2bd91d0()*0.00677093);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8380() {
   return (neuron0x2bd9ba0()*-0.00696592);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf83c0() {
   return (neuron0x2bda570()*-1.77053);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8400() {
   return (neuron0x2becbb0()*0.00145997);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8440() {
   return (neuron0x2bed460()*0.0051342);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8480() {
   return (neuron0x2bede30()*0.0160339);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf84c0() {
   return (neuron0x2bee800()*-0.11786);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8840() {
   return (neuron0x2bc9700()*-0.00215116);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8880() {
   return (neuron0x2bc9fd0()*-0.00664277);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf88c0() {
   return (neuron0x2bcaab0()*-4.88526);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8900() {
   return (neuron0x298eed0()*7.40684);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8940() {
   return (neuron0x2bcb890()*-0.880505);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8980() {
   return (neuron0x2bcd360()*0.0231128);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf89c0() {
   return (neuron0x2bce130()*-0.00182709);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8a00() {
   return (neuron0x2bceb00()*-7.9537);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8a40() {
   return (neuron0x2bcf4d0()*-0.000164764);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8a80() {
   return (neuron0x2bcffb0()*-1.26745);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8ac0() {
   return (neuron0x2bd0980()*0.0101529);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8b00() {
   return (neuron0x2bcda60()*0.00152584);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8b40() {
   return (neuron0x2bd2530()*2.58054);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8b80() {
   return (neuron0x2bd2f00()*-0.0843335);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8bc0() {
   return (neuron0x2bd38d0()*0.206615);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8c00() {
   return (neuron0x2bd42a0()*-0.00769705);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8690() {
   return (neuron0x2bd60b0()*-0.0114895);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf86d0() {
   return (neuron0x2bd6390()*-0.00837818);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8d50() {
   return (neuron0x2bd6d60()*1.22181);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8d90() {
   return (neuron0x2bd7730()*0.00408087);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8dd0() {
   return (neuron0x2bd8100()*-0.00611405);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8e10() {
   return (neuron0x2bd8ad0()*-0.00261821);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8e50() {
   return (neuron0x2bd1620()*-0.698211);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8e90() {
   return (neuron0x2bd1ff0()*-0.00422889);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8ed0() {
   return (neuron0x2bdb860()*0.0519597);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8f10() {
   return (neuron0x2bdc230()*0.479424);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8f50() {
   return (neuron0x2bdcc00()*0.00215225);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8f90() {
   return (neuron0x2bdd5d0()*1.21683);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8fd0() {
   return (neuron0x2bddfa0()*-0.00119099);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf9010() {
   return (neuron0x2bde970()*-0.00441014);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf9050() {
   return (neuron0x2bdf340()*-0.00744373);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf9090() {
   return (neuron0x2bdfd10()*-0.1096);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8c40() {
   return (neuron0x2bd5da0()*-0.00643499);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8c80() {
   return (neuron0x2be28f0()*-0.00185464);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8cc0() {
   return (neuron0x2be32c0()*0.00901882);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf8d00() {
   return (neuron0x2be3c90()*0.007579);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf92e0() {
   return (neuron0x2be4660()*0.00337916);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf9320() {
   return (neuron0x2be5030()*0.0113405);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf9360() {
   return (neuron0x2be5a00()*-0.337242);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf93a0() {
   return (neuron0x2be63d0()*0.0164504);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf93e0() {
   return (neuron0x2be6da0()*-0.0197178);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf9420() {
   return (neuron0x2be7980()*0.0034455);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf9460() {
   return (neuron0x2be8350()*2.78494);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf94a0() {
   return (neuron0x2bd91d0()*-0.00336219);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf94e0() {
   return (neuron0x2bd9ba0()*-0.00172208);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf9520() {
   return (neuron0x2bda570()*0.753406);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf9560() {
   return (neuron0x2becbb0()*0.0115449);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf95a0() {
   return (neuron0x2bed460()*-0.0026237);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf95e0() {
   return (neuron0x2bede30()*0.0042248);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf9620() {
   return (neuron0x2bee800()*-4.32048);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf9880() {
   return (neuron0x2bf5a00()*-9.05418);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf98c0() {
   return (neuron0x2bf5da0()*-6.86571);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf9900() {
   return (neuron0x2bf6240()*-11.0661);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf9940() {
   return (neuron0x2bf73a0()*16.8416);
}

double NNfunction_nn_chi1_charge1p::synapse0x2bf9980() {
   return (neuron0x2bf8500()*6.9782);
}

