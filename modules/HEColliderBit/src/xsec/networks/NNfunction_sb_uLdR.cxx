#include "NNfunction_sb_uLdR.h"
#include <cmath>

double NNfunction_sb_uLdR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5126)/15.3358;
   input1 = (in1 - -0.91286)/1146.8;
   input2 = (in2 - 663.131)/626.33;
   input3 = (in3 - -54.4917)/829.676;
   input4 = (in4 - 1053.49)/946.847;
   input5 = (in5 - 885.657)/935.73;
   input6 = (in6 - 900.625)/937.214;
   input7 = (in7 - 917.696)/926.381;
   input8 = (in8 - 930.616)/979.694;
   input9 = (in9 - 902.709)/956.61;
   input10 = (in10 - 991.658)/958.836;
   input11 = (in11 - 470.067)/516.647;
   input12 = (in12 - 736.2)/887.041;
   input13 = (in13 - 505.086)/527.004;
   input14 = (in14 - 709.803)/808.374;
   input15 = (in15 - 713.432)/808.063;
   input16 = (in16 - 534.254)/560.322;
   input17 = (in17 - 490.321)/540.483;
   input18 = (in18 - 757.906)/906.505;
   input19 = (in19 - 805.878)/887.248;
   input20 = (in20 - -4.95394)/490.879;
   input21 = (in21 - 2.04733)/1159.09;
   input22 = (in22 - 2.78362)/1213.54;
   input23 = (in23 - -194.258)/601.321;
   switch(index) {
     case 0:
         return neuron0x12d74a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_uLdR::Value(int index, double* input) {
   input0 = (input[0] - 23.5126)/15.3358;
   input1 = (input[1] - -0.91286)/1146.8;
   input2 = (input[2] - 663.131)/626.33;
   input3 = (input[3] - -54.4917)/829.676;
   input4 = (input[4] - 1053.49)/946.847;
   input5 = (input[5] - 885.657)/935.73;
   input6 = (input[6] - 900.625)/937.214;
   input7 = (input[7] - 917.696)/926.381;
   input8 = (input[8] - 930.616)/979.694;
   input9 = (input[9] - 902.709)/956.61;
   input10 = (input[10] - 991.658)/958.836;
   input11 = (input[11] - 470.067)/516.647;
   input12 = (input[12] - 736.2)/887.041;
   input13 = (input[13] - 505.086)/527.004;
   input14 = (input[14] - 709.803)/808.374;
   input15 = (input[15] - 713.432)/808.063;
   input16 = (input[16] - 534.254)/560.322;
   input17 = (input[17] - 490.321)/540.483;
   input18 = (input[18] - 757.906)/906.505;
   input19 = (input[19] - 805.878)/887.248;
   input20 = (input[20] - -4.95394)/490.879;
   input21 = (input[21] - 2.04733)/1159.09;
   input22 = (input[22] - 2.78362)/1213.54;
   input23 = (input[23] - -194.258)/601.321;
   switch(index) {
     case 0:
         return neuron0x12d74a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_uLdR::neuron0x12a3560() {
   return input0;
}

double NNfunction_sb_uLdR::neuron0x12a38a0() {
   return input1;
}

double NNfunction_sb_uLdR::neuron0x12a3be0() {
   return input2;
}

double NNfunction_sb_uLdR::neuron0x12a3f20() {
   return input3;
}

double NNfunction_sb_uLdR::neuron0x12a4260() {
   return input4;
}

double NNfunction_sb_uLdR::neuron0x12a45a0() {
   return input5;
}

double NNfunction_sb_uLdR::neuron0x12a48e0() {
   return input6;
}

double NNfunction_sb_uLdR::neuron0x12a4c20() {
   return input7;
}

double NNfunction_sb_uLdR::neuron0x12a4f60() {
   return input8;
}

double NNfunction_sb_uLdR::neuron0x12a52a0() {
   return input9;
}

double NNfunction_sb_uLdR::neuron0x12a55e0() {
   return input10;
}

double NNfunction_sb_uLdR::neuron0x12a5920() {
   return input11;
}

double NNfunction_sb_uLdR::neuron0x12a5c60() {
   return input12;
}

double NNfunction_sb_uLdR::neuron0x12a5fa0() {
   return input13;
}

double NNfunction_sb_uLdR::neuron0x12a62e0() {
   return input14;
}

double NNfunction_sb_uLdR::neuron0x12a6620() {
   return input15;
}

double NNfunction_sb_uLdR::neuron0x12a6960() {
   return input16;
}

double NNfunction_sb_uLdR::neuron0x12a6ec0() {
   return input17;
}

double NNfunction_sb_uLdR::neuron0x12a70e0() {
   return input18;
}

double NNfunction_sb_uLdR::neuron0x12a7420() {
   return input19;
}

double NNfunction_sb_uLdR::neuron0x12a7760() {
   return input20;
}

double NNfunction_sb_uLdR::neuron0x12a7aa0() {
   return input21;
}

double NNfunction_sb_uLdR::neuron0x12a7de0() {
   return input22;
}

double NNfunction_sb_uLdR::neuron0x12a8120() {
   return input23;
}

double NNfunction_sb_uLdR::input0x12a85c0() {
   double input = -0.560593;
   input += synapse0x10633d0();
   input += synapse0x12a3420();
   input += synapse0x12a3460();
   input += synapse0x12a8870();
   input += synapse0x12a88b0();
   input += synapse0x12a88f0();
   input += synapse0x12a8930();
   input += synapse0x12a8970();
   input += synapse0x12a89b0();
   input += synapse0x12a89f0();
   input += synapse0x12a8a30();
   input += synapse0x12a8a70();
   input += synapse0x12a8ab0();
   input += synapse0x12a8af0();
   input += synapse0x12a8b30();
   input += synapse0x12a8b70();
   input += synapse0x12a3390();
   input += synapse0x12a33d0();
   input += synapse0x1054c70();
   input += synapse0x1054cb0();
   input += synapse0x12a8dd0();
   input += synapse0x12a8e10();
   input += synapse0x12a8e50();
   input += synapse0x12a8e90();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12a85c0() {
   double input = input0x12a85c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12a8ed0() {
   double input = 2.53699;
   input += synapse0x12a9210();
   input += synapse0x12a9250();
   input += synapse0x12a9290();
   input += synapse0x12a92d0();
   input += synapse0x12a9310();
   input += synapse0x12a9350();
   input += synapse0x12a9390();
   input += synapse0x12a93d0();
   input += synapse0x12a9410();
   input += synapse0x12a8cc0();
   input += synapse0x12a8d00();
   input += synapse0x12a8d40();
   input += synapse0x12a8d80();
   input += synapse0x12a9660();
   input += synapse0x12a96a0();
   input += synapse0x12a96e0();
   input += synapse0x12a9060();
   input += synapse0x12a90a0();
   input += synapse0x12a9830();
   input += synapse0x12a9870();
   input += synapse0x12a98b0();
   input += synapse0x12a98f0();
   input += synapse0x12a9930();
   input += synapse0x12a9970();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12a8ed0() {
   double input = input0x12a8ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12a99b0() {
   double input = 0.524999;
   input += synapse0x12a9cf0();
   input += synapse0x12a9d30();
   input += synapse0x12a9d70();
   input += synapse0x12a9db0();
   input += synapse0x12a9df0();
   input += synapse0x12a9e30();
   input += synapse0x12a9e70();
   input += synapse0x12a9eb0();
   input += synapse0x12a9ef0();
   input += synapse0x12a9f30();
   input += synapse0x12a9f70();
   input += synapse0x12a9fb0();
   input += synapse0x12a9ff0();
   input += synapse0x12aa030();
   input += synapse0x12aa070();
   input += synapse0x12aa0b0();
   input += synapse0x12a9b40();
   input += synapse0x12a9b80();
   input += synapse0x1062ac0();
   input += synapse0x1062b00();
   input += synapse0x12925f0();
   input += synapse0x1292630();
   input += synapse0x1292670();
   input += synapse0x12a34a0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12a99b0() {
   double input = input0x12a99b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x1063240() {
   double input = -0.00360109;
   input += synapse0x12a9600();
   input += synapse0x12a34e0();
   input += synapse0x12a3520();
   input += synapse0x12aa200();
   input += synapse0x12aa240();
   input += synapse0x12aa280();
   input += synapse0x12aa2c0();
   input += synapse0x12aa300();
   input += synapse0x12aa340();
   input += synapse0x12aa380();
   input += synapse0x12aa3c0();
   input += synapse0x12aa400();
   input += synapse0x12aa440();
   input += synapse0x12aa480();
   input += synapse0x12aa4c0();
   input += synapse0x12aa500();
   input += synapse0x12a9450();
   input += synapse0x12a9490();
   input += synapse0x12aa650();
   input += synapse0x12aa690();
   input += synapse0x12aa6d0();
   input += synapse0x12aa710();
   input += synapse0x12aa750();
   input += synapse0x12aa790();
   return input;
}

double NNfunction_sb_uLdR::neuron0x1063240() {
   double input = input0x1063240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12aa7d0() {
   double input = 1.4139;
   input += synapse0x12aab10();
   input += synapse0x12aab50();
   input += synapse0x12aab90();
   input += synapse0x12aabd0();
   input += synapse0x12aac10();
   input += synapse0x12aac50();
   input += synapse0x12aac90();
   input += synapse0x12aacd0();
   input += synapse0x12aad10();
   input += synapse0x12aad50();
   input += synapse0x12aad90();
   input += synapse0x12aadd0();
   input += synapse0x12aae10();
   input += synapse0x12aae50();
   input += synapse0x12aae90();
   input += synapse0x12aaed0();
   input += synapse0x12aa960();
   input += synapse0x12aa9a0();
   input += synapse0x12ab020();
   input += synapse0x12ab060();
   input += synapse0x12ab0a0();
   input += synapse0x12ab0e0();
   input += synapse0x12ab120();
   input += synapse0x12ab160();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12aa7d0() {
   double input = input0x12aa7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12ab1a0() {
   double input = -0.615478;
   input += synapse0x12ab4e0();
   input += synapse0x12ab520();
   input += synapse0x12ab560();
   input += synapse0x12ab5a0();
   input += synapse0x12ab5e0();
   input += synapse0x12ab620();
   input += synapse0x12ab660();
   input += synapse0x12ab6a0();
   input += synapse0x12ab6e0();
   input += synapse0x1062e30();
   input += synapse0x1062e70();
   input += synapse0x1062eb0();
   input += synapse0x1062ef0();
   input += synapse0x1062f30();
   input += synapse0x1062f70();
   input += synapse0x1062fb0();
   input += synapse0x12ab330();
   input += synapse0x12ab370();
   input += synapse0x1063100();
   input += synapse0x1063140();
   input += synapse0x1063180();
   input += synapse0x10631c0();
   input += synapse0x1063200();
   input += synapse0x12abf30();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12ab1a0() {
   double input = input0x12ab1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12abf70() {
   double input = -1.6427;
   input += synapse0x12ac2b0();
   input += synapse0x12ac2f0();
   input += synapse0x12ac330();
   input += synapse0x12ac370();
   input += synapse0x12ac3b0();
   input += synapse0x12ac3f0();
   input += synapse0x12ac430();
   input += synapse0x12ac470();
   input += synapse0x12ac4b0();
   input += synapse0x12ac4f0();
   input += synapse0x12ac530();
   input += synapse0x12ac570();
   input += synapse0x12ac5b0();
   input += synapse0x12ac5f0();
   input += synapse0x12ac630();
   input += synapse0x12ac670();
   input += synapse0x12ac100();
   input += synapse0x12ac140();
   input += synapse0x12ac7c0();
   input += synapse0x12ac800();
   input += synapse0x12ac840();
   input += synapse0x12ac880();
   input += synapse0x12ac8c0();
   input += synapse0x12ac900();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12abf70() {
   double input = input0x12abf70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12ac940() {
   double input = -0.970892;
   input += synapse0x12acc80();
   input += synapse0x12accc0();
   input += synapse0x12acd00();
   input += synapse0x12acd40();
   input += synapse0x12acd80();
   input += synapse0x12acdc0();
   input += synapse0x12ace00();
   input += synapse0x12ace40();
   input += synapse0x12ace80();
   input += synapse0x12acec0();
   input += synapse0x12acf00();
   input += synapse0x12acf40();
   input += synapse0x12acf80();
   input += synapse0x12acfc0();
   input += synapse0x12ad000();
   input += synapse0x12ad040();
   input += synapse0x12acad0();
   input += synapse0x12acb10();
   input += synapse0x12ad190();
   input += synapse0x12ad1d0();
   input += synapse0x12ad210();
   input += synapse0x12ad250();
   input += synapse0x12ad290();
   input += synapse0x12ad2d0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12ac940() {
   double input = input0x12ac940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12ad310() {
   double input = 0.915903;
   input += synapse0x12a6db0();
   input += synapse0x12a6df0();
   input += synapse0x12a6e30();
   input += synapse0x12a6e70();
   input += synapse0x12ad860();
   input += synapse0x12ad8a0();
   input += synapse0x12ad8e0();
   input += synapse0x12ad920();
   input += synapse0x12ad960();
   input += synapse0x12ad9a0();
   input += synapse0x12ad9e0();
   input += synapse0x12ada20();
   input += synapse0x12ada60();
   input += synapse0x12adaa0();
   input += synapse0x12adae0();
   input += synapse0x12adb20();
   input += synapse0x12ad4a0();
   input += synapse0x12ad4e0();
   input += synapse0x12adc70();
   input += synapse0x12adcb0();
   input += synapse0x12adcf0();
   input += synapse0x12add30();
   input += synapse0x12add70();
   input += synapse0x12addb0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12ad310() {
   double input = input0x12ad310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12addf0() {
   double input = 2.87312;
   input += synapse0x12ae130();
   input += synapse0x12ae170();
   input += synapse0x12ae1b0();
   input += synapse0x12ae1f0();
   input += synapse0x12ae230();
   input += synapse0x12ae270();
   input += synapse0x12ae2b0();
   input += synapse0x12ae2f0();
   input += synapse0x12ae330();
   input += synapse0x12ae370();
   input += synapse0x12ae3b0();
   input += synapse0x12ae3f0();
   input += synapse0x12ae430();
   input += synapse0x12ae470();
   input += synapse0x12ae4b0();
   input += synapse0x12ae4f0();
   input += synapse0x12adf80();
   input += synapse0x12adfc0();
   input += synapse0x12ae640();
   input += synapse0x12ae680();
   input += synapse0x12ae6c0();
   input += synapse0x12ae700();
   input += synapse0x12ae740();
   input += synapse0x12ae780();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12addf0() {
   double input = input0x12addf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12ae7c0() {
   double input = 0.323108;
   input += synapse0x12aeb00();
   input += synapse0x12aeb40();
   input += synapse0x12aeb80();
   input += synapse0x12aebc0();
   input += synapse0x12aec00();
   input += synapse0x12aec40();
   input += synapse0x12aec80();
   input += synapse0x12aecc0();
   input += synapse0x12aed00();
   input += synapse0x12aed40();
   input += synapse0x12aed80();
   input += synapse0x12aedc0();
   input += synapse0x12aee00();
   input += synapse0x12aee40();
   input += synapse0x12aee80();
   input += synapse0x12aeec0();
   input += synapse0x12ae950();
   input += synapse0x12ae990();
   input += synapse0x12ab720();
   input += synapse0x12ab760();
   input += synapse0x12ab7a0();
   input += synapse0x12ab7e0();
   input += synapse0x12ab820();
   input += synapse0x12ab860();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12ae7c0() {
   double input = input0x12ae7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12ab8a0() {
   double input = -0.838335;
   input += synapse0x12abbe0();
   input += synapse0x12abc20();
   input += synapse0x12abc60();
   input += synapse0x12abca0();
   input += synapse0x12abce0();
   input += synapse0x12abd20();
   input += synapse0x12abd60();
   input += synapse0x12abda0();
   input += synapse0x12abde0();
   input += synapse0x12abe20();
   input += synapse0x12abe60();
   input += synapse0x12abea0();
   input += synapse0x12abee0();
   input += synapse0x12b0020();
   input += synapse0x12b0060();
   input += synapse0x12b00a0();
   input += synapse0x12aba30();
   input += synapse0x12aba70();
   input += synapse0x12b01f0();
   input += synapse0x12b0230();
   input += synapse0x12b0270();
   input += synapse0x12b02b0();
   input += synapse0x12b02f0();
   input += synapse0x12b0330();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12ab8a0() {
   double input = input0x12ab8a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12b0370() {
   double input = -0.128099;
   input += synapse0x12b06b0();
   input += synapse0x12b06f0();
   input += synapse0x12b0730();
   input += synapse0x12b0770();
   input += synapse0x12b07b0();
   input += synapse0x12b07f0();
   input += synapse0x12b0830();
   input += synapse0x12b0870();
   input += synapse0x12b08b0();
   input += synapse0x12b08f0();
   input += synapse0x12b0930();
   input += synapse0x12b0970();
   input += synapse0x12b09b0();
   input += synapse0x12b09f0();
   input += synapse0x12b0a30();
   input += synapse0x12b0a70();
   input += synapse0x12b0500();
   input += synapse0x12b0540();
   input += synapse0x12b0bc0();
   input += synapse0x12b0c00();
   input += synapse0x12b0c40();
   input += synapse0x12b0c80();
   input += synapse0x12b0cc0();
   input += synapse0x12b0d00();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12b0370() {
   double input = input0x12b0370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12b0d40() {
   double input = 1.24236;
   input += synapse0x12b1080();
   input += synapse0x12b10c0();
   input += synapse0x12b1100();
   input += synapse0x12b1140();
   input += synapse0x12b1180();
   input += synapse0x12b11c0();
   input += synapse0x12b1200();
   input += synapse0x12b1240();
   input += synapse0x12b1280();
   input += synapse0x12b12c0();
   input += synapse0x12b1300();
   input += synapse0x12b1340();
   input += synapse0x12b1380();
   input += synapse0x12b13c0();
   input += synapse0x12b1400();
   input += synapse0x12b1440();
   input += synapse0x12b0ed0();
   input += synapse0x12b0f10();
   input += synapse0x12b1590();
   input += synapse0x12b15d0();
   input += synapse0x12b1610();
   input += synapse0x12b1650();
   input += synapse0x12b1690();
   input += synapse0x12b16d0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12b0d40() {
   double input = input0x12b0d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12b1710() {
   double input = 1.0463;
   input += synapse0x12b1a50();
   input += synapse0x12b1a90();
   input += synapse0x12b1ad0();
   input += synapse0x12b1b10();
   input += synapse0x12b1b50();
   input += synapse0x12b1b90();
   input += synapse0x12b1bd0();
   input += synapse0x12b1c10();
   input += synapse0x12b1c50();
   input += synapse0x12b1c90();
   input += synapse0x12b1cd0();
   input += synapse0x12b1d10();
   input += synapse0x12b1d50();
   input += synapse0x12b1d90();
   input += synapse0x12b1dd0();
   input += synapse0x12b1e10();
   input += synapse0x12b18a0();
   input += synapse0x12b18e0();
   input += synapse0x12b1f60();
   input += synapse0x12b1fa0();
   input += synapse0x12b1fe0();
   input += synapse0x12b2020();
   input += synapse0x12b2060();
   input += synapse0x12b20a0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12b1710() {
   double input = input0x12b1710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12b20e0() {
   double input = 0.609721;
   input += synapse0x12b2420();
   input += synapse0x12a3780();
   input += synapse0x12a37c0();
   input += synapse0x12a3ac0();
   input += synapse0x12a3b00();
   input += synapse0x12a3e00();
   input += synapse0x12a3e40();
   input += synapse0x12a4140();
   input += synapse0x12a4180();
   input += synapse0x12a4480();
   input += synapse0x12a44c0();
   input += synapse0x12a47c0();
   input += synapse0x12a4800();
   input += synapse0x12a4b00();
   input += synapse0x12a4b40();
   input += synapse0x12a4e40();
   input += synapse0x12a4e80();
   input += synapse0x12a5180();
   input += synapse0x12a51c0();
   input += synapse0x12a54c0();
   input += synapse0x12a5500();
   input += synapse0x12a5800();
   input += synapse0x12a5840();
   input += synapse0x12a5b40();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12b20e0() {
   double input = input0x12b20e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12b3ef0() {
   double input = 0.626486;
   input += synapse0x12a5b80();
   input += synapse0x12a6840();
   input += synapse0x12a6880();
   input += synapse0x12b2270();
   input += synapse0x12b22b0();
   input += synapse0x12a6b80();
   input += synapse0x12a6bc0();
   input += synapse0x1054b50();
   input += synapse0x1054b90();
   input += synapse0x12a7300();
   input += synapse0x12a7340();
   input += synapse0x12a7640();
   input += synapse0x12a7680();
   input += synapse0x12a7980();
   input += synapse0x12a79c0();
   input += synapse0x12a7cc0();
   input += synapse0x12a7d00();
   input += synapse0x12a8000();
   input += synapse0x12a8040();
   input += synapse0x12a8340();
   input += synapse0x12a8380();
   input += synapse0x12a5e80();
   input += synapse0x12a5ec0();
   input += synapse0x12b4190();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12b3ef0() {
   double input = input0x12b3ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12b41d0() {
   double input = 0.851791;
   input += synapse0x12b4510();
   input += synapse0x12b4550();
   input += synapse0x12b4590();
   input += synapse0x12b45d0();
   input += synapse0x12b4610();
   input += synapse0x12b4650();
   input += synapse0x12b4690();
   input += synapse0x12b46d0();
   input += synapse0x12b4710();
   input += synapse0x12b4750();
   input += synapse0x12b4790();
   input += synapse0x12b47d0();
   input += synapse0x12b4810();
   input += synapse0x12b4850();
   input += synapse0x12b4890();
   input += synapse0x12b48d0();
   input += synapse0x12b4360();
   input += synapse0x12b43a0();
   input += synapse0x12b4a20();
   input += synapse0x12b4a60();
   input += synapse0x12b4aa0();
   input += synapse0x12b4ae0();
   input += synapse0x12b4b20();
   input += synapse0x12b4b60();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12b41d0() {
   double input = input0x12b41d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12b4ba0() {
   double input = 0.0197948;
   input += synapse0x12b4ee0();
   input += synapse0x12b4f20();
   input += synapse0x12b4f60();
   input += synapse0x12b4fa0();
   input += synapse0x12b4fe0();
   input += synapse0x12b5020();
   input += synapse0x12b5060();
   input += synapse0x12b50a0();
   input += synapse0x12b50e0();
   input += synapse0x12b5120();
   input += synapse0x12b5160();
   input += synapse0x12b51a0();
   input += synapse0x12b51e0();
   input += synapse0x12b5220();
   input += synapse0x12b5260();
   input += synapse0x12b52a0();
   input += synapse0x12b4d30();
   input += synapse0x12b4d70();
   input += synapse0x12b53f0();
   input += synapse0x12b5430();
   input += synapse0x12b5470();
   input += synapse0x12b54b0();
   input += synapse0x12b54f0();
   input += synapse0x12b5530();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12b4ba0() {
   double input = input0x12b4ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12b5570() {
   double input = 2.50215;
   input += synapse0x12b58b0();
   input += synapse0x12b58f0();
   input += synapse0x12b5930();
   input += synapse0x12b5970();
   input += synapse0x12b59b0();
   input += synapse0x12b59f0();
   input += synapse0x12b5a30();
   input += synapse0x12b5a70();
   input += synapse0x12b5ab0();
   input += synapse0x12b5af0();
   input += synapse0x12b5b30();
   input += synapse0x12b5b70();
   input += synapse0x12b5bb0();
   input += synapse0x12b5bf0();
   input += synapse0x12b5c30();
   input += synapse0x12b5c70();
   input += synapse0x12b5700();
   input += synapse0x12b5740();
   input += synapse0x12b5dc0();
   input += synapse0x12b5e00();
   input += synapse0x12b5e40();
   input += synapse0x12b5e80();
   input += synapse0x12b5ec0();
   input += synapse0x12b5f00();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12b5570() {
   double input = input0x12b5570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12b5f40() {
   double input = 0.224237;
   input += synapse0x12b6280();
   input += synapse0x12b62c0();
   input += synapse0x12b6300();
   input += synapse0x12b6340();
   input += synapse0x12b6380();
   input += synapse0x12b63c0();
   input += synapse0x12b6400();
   input += synapse0x12b6440();
   input += synapse0x12b6480();
   input += synapse0x12b64c0();
   input += synapse0x12b6500();
   input += synapse0x12b6540();
   input += synapse0x12b6580();
   input += synapse0x12b65c0();
   input += synapse0x12b6600();
   input += synapse0x12b6640();
   input += synapse0x12b60d0();
   input += synapse0x12b6110();
   input += synapse0x12b6790();
   input += synapse0x12b67d0();
   input += synapse0x12b6810();
   input += synapse0x12b6850();
   input += synapse0x12b6890();
   input += synapse0x12b68d0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12b5f40() {
   double input = input0x12b5f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12b6910() {
   double input = -0.515553;
   input += synapse0x12b6c50();
   input += synapse0x12b6c90();
   input += synapse0x12b6cd0();
   input += synapse0x12b6d10();
   input += synapse0x12b6d50();
   input += synapse0x12b6d90();
   input += synapse0x12b6dd0();
   input += synapse0x12b6e10();
   input += synapse0x12b6e50();
   input += synapse0x12af010();
   input += synapse0x12af050();
   input += synapse0x12af090();
   input += synapse0x12af0d0();
   input += synapse0x12af110();
   input += synapse0x12af150();
   input += synapse0x12af190();
   input += synapse0x12b6aa0();
   input += synapse0x12b6ae0();
   input += synapse0x12af2e0();
   input += synapse0x12af320();
   input += synapse0x12af360();
   input += synapse0x12af3a0();
   input += synapse0x12af3e0();
   input += synapse0x12af420();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12b6910() {
   double input = input0x12b6910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12af460() {
   double input = 0.65522;
   input += synapse0x12af7a0();
   input += synapse0x12af7e0();
   input += synapse0x12af820();
   input += synapse0x12af860();
   input += synapse0x12af8a0();
   input += synapse0x12af8e0();
   input += synapse0x12af920();
   input += synapse0x12af960();
   input += synapse0x12af9a0();
   input += synapse0x12af9e0();
   input += synapse0x12afa20();
   input += synapse0x12afa60();
   input += synapse0x12afaa0();
   input += synapse0x12afae0();
   input += synapse0x12afb20();
   input += synapse0x12afb60();
   input += synapse0x12af5f0();
   input += synapse0x12af630();
   input += synapse0x12afcb0();
   input += synapse0x12afcf0();
   input += synapse0x12afd30();
   input += synapse0x12afd70();
   input += synapse0x12afdb0();
   input += synapse0x12afdf0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12af460() {
   double input = input0x12af460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12afe30() {
   double input = -0.35387;
   input += synapse0x12affc0();
   input += synapse0x12b9050();
   input += synapse0x12b9090();
   input += synapse0x12b90d0();
   input += synapse0x12b9110();
   input += synapse0x12b9150();
   input += synapse0x12b9190();
   input += synapse0x12b91d0();
   input += synapse0x12b9210();
   input += synapse0x12b9250();
   input += synapse0x12b9290();
   input += synapse0x12b92d0();
   input += synapse0x12b9310();
   input += synapse0x12b9350();
   input += synapse0x12b9390();
   input += synapse0x12b93d0();
   input += synapse0x12b8ea0();
   input += synapse0x12b8ee0();
   input += synapse0x12b9520();
   input += synapse0x12b9560();
   input += synapse0x12b95a0();
   input += synapse0x12b95e0();
   input += synapse0x12b9620();
   input += synapse0x12b9660();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12afe30() {
   double input = input0x12afe30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12b96a0() {
   double input = -0.254059;
   input += synapse0x12b99e0();
   input += synapse0x12b9a20();
   input += synapse0x12b9a60();
   input += synapse0x12b9aa0();
   input += synapse0x12b9ae0();
   input += synapse0x12b9b20();
   input += synapse0x12b9b60();
   input += synapse0x12b9ba0();
   input += synapse0x12b9be0();
   input += synapse0x12b9c20();
   input += synapse0x12b9c60();
   input += synapse0x12b9ca0();
   input += synapse0x12b9ce0();
   input += synapse0x12b9d20();
   input += synapse0x12b9d60();
   input += synapse0x12b9da0();
   input += synapse0x12b9830();
   input += synapse0x12b9870();
   input += synapse0x12b9ef0();
   input += synapse0x12b9f30();
   input += synapse0x12b9f70();
   input += synapse0x12b9fb0();
   input += synapse0x12b9ff0();
   input += synapse0x12ba030();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12b96a0() {
   double input = input0x12b96a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12ba070() {
   double input = -0.884758;
   input += synapse0x12ba3b0();
   input += synapse0x12ba3f0();
   input += synapse0x12ba430();
   input += synapse0x12ba470();
   input += synapse0x12ba4b0();
   input += synapse0x12ba4f0();
   input += synapse0x12ba530();
   input += synapse0x12ba570();
   input += synapse0x12ba5b0();
   input += synapse0x12ba5f0();
   input += synapse0x12ba630();
   input += synapse0x12ba670();
   input += synapse0x12ba6b0();
   input += synapse0x12ba6f0();
   input += synapse0x12ba730();
   input += synapse0x12ba770();
   input += synapse0x12ba200();
   input += synapse0x12ba240();
   input += synapse0x12ba8c0();
   input += synapse0x12ba900();
   input += synapse0x12ba940();
   input += synapse0x12ba980();
   input += synapse0x12ba9c0();
   input += synapse0x12baa00();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12ba070() {
   double input = input0x12ba070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12baa40() {
   double input = -1.25342;
   input += synapse0x12bad80();
   input += synapse0x12badc0();
   input += synapse0x12bae00();
   input += synapse0x12bae40();
   input += synapse0x12bae80();
   input += synapse0x12baec0();
   input += synapse0x12baf00();
   input += synapse0x12baf40();
   input += synapse0x12baf80();
   input += synapse0x12bafc0();
   input += synapse0x12bb000();
   input += synapse0x12bb040();
   input += synapse0x12bb080();
   input += synapse0x12bb0c0();
   input += synapse0x12bb100();
   input += synapse0x12bb140();
   input += synapse0x12babd0();
   input += synapse0x12bac10();
   input += synapse0x12bb290();
   input += synapse0x12bb2d0();
   input += synapse0x12bb310();
   input += synapse0x12bb350();
   input += synapse0x12bb390();
   input += synapse0x12bb3d0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12baa40() {
   double input = input0x12baa40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12bb410() {
   double input = -0.00391604;
   input += synapse0x12bb750();
   input += synapse0x12bb790();
   input += synapse0x12bb7d0();
   input += synapse0x12bb810();
   input += synapse0x12bb850();
   input += synapse0x12bb890();
   input += synapse0x12bb8d0();
   input += synapse0x12bb910();
   input += synapse0x12bb950();
   input += synapse0x12bb990();
   input += synapse0x12bb9d0();
   input += synapse0x12bba10();
   input += synapse0x12bba50();
   input += synapse0x12bba90();
   input += synapse0x12bbad0();
   input += synapse0x12bbb10();
   input += synapse0x12bb5a0();
   input += synapse0x12bb5e0();
   input += synapse0x12bbc60();
   input += synapse0x12bbca0();
   input += synapse0x12bbce0();
   input += synapse0x12bbd20();
   input += synapse0x12bbd60();
   input += synapse0x12bbda0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12bb410() {
   double input = input0x12bb410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12bbde0() {
   double input = -0.413093;
   input += synapse0x12bc120();
   input += synapse0x12bc160();
   input += synapse0x12bc1a0();
   input += synapse0x12bc1e0();
   input += synapse0x12bc220();
   input += synapse0x12bc260();
   input += synapse0x12bc2a0();
   input += synapse0x12bc2e0();
   input += synapse0x12bc320();
   input += synapse0x12bc360();
   input += synapse0x12bc3a0();
   input += synapse0x12bc3e0();
   input += synapse0x12bc420();
   input += synapse0x12bc460();
   input += synapse0x12bc4a0();
   input += synapse0x12bc4e0();
   input += synapse0x12bbf70();
   input += synapse0x12bbfb0();
   input += synapse0x12bc630();
   input += synapse0x12bc670();
   input += synapse0x12bc6b0();
   input += synapse0x12bc6f0();
   input += synapse0x12bc730();
   input += synapse0x12bc770();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12bbde0() {
   double input = input0x12bbde0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12bc7b0() {
   double input = -1.94807;
   input += synapse0x12bcaf0();
   input += synapse0x12bcb30();
   input += synapse0x12bcb70();
   input += synapse0x12bcbb0();
   input += synapse0x12bcbf0();
   input += synapse0x12bcc30();
   input += synapse0x12bcc70();
   input += synapse0x12bccb0();
   input += synapse0x12bccf0();
   input += synapse0x12bcd30();
   input += synapse0x12bcd70();
   input += synapse0x12bcdb0();
   input += synapse0x12bcdf0();
   input += synapse0x12bce30();
   input += synapse0x12bce70();
   input += synapse0x12bceb0();
   input += synapse0x12bc940();
   input += synapse0x12bc980();
   input += synapse0x12bd000();
   input += synapse0x12bd040();
   input += synapse0x12bd080();
   input += synapse0x12bd0c0();
   input += synapse0x12bd100();
   input += synapse0x12bd140();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12bc7b0() {
   double input = input0x12bc7b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12bd180() {
   double input = -0.710828;
   input += synapse0x12bd4c0();
   input += synapse0x12bd500();
   input += synapse0x12bd540();
   input += synapse0x12bd580();
   input += synapse0x12bd5c0();
   input += synapse0x12bd600();
   input += synapse0x12bd640();
   input += synapse0x12bd680();
   input += synapse0x12bd6c0();
   input += synapse0x12bd700();
   input += synapse0x12bd740();
   input += synapse0x12bd780();
   input += synapse0x12bd7c0();
   input += synapse0x12bd800();
   input += synapse0x12bd840();
   input += synapse0x12bd880();
   input += synapse0x12bd310();
   input += synapse0x12bd350();
   input += synapse0x12bd9d0();
   input += synapse0x12bda10();
   input += synapse0x12bda50();
   input += synapse0x12bda90();
   input += synapse0x12bdad0();
   input += synapse0x12bdb10();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12bd180() {
   double input = input0x12bd180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12bdb50() {
   double input = -0.316978;
   input += synapse0x12bde90();
   input += synapse0x12b2460();
   input += synapse0x12b24a0();
   input += synapse0x12b24e0();
   input += synapse0x12b2730();
   input += synapse0x12b2770();
   input += synapse0x12b27b0();
   input += synapse0x12b2a00();
   input += synapse0x12b2a40();
   input += synapse0x12b2c90();
   input += synapse0x12b2cd0();
   input += synapse0x12b2d10();
   input += synapse0x12b2f60();
   input += synapse0x12b2fa0();
   input += synapse0x12b31f0();
   input += synapse0x12b3230();
   input += synapse0x12bdce0();
   input += synapse0x12bdd20();
   input += synapse0x12b3380();
   input += synapse0x12b3890();
   input += synapse0x12b38d0();
   input += synapse0x12b3910();
   input += synapse0x12b3b60();
   input += synapse0x12b3ba0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12bdb50() {
   double input = input0x12bdb50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12b3be0() {
   double input = -0.518164;
   input += synapse0x12b3450();
   input += synapse0x12b3490();
   input += synapse0x12b34d0();
   input += synapse0x12b3510();
   input += synapse0x12b3e90();
   input += synapse0x12c01e0();
   input += synapse0x12c0220();
   input += synapse0x12c0260();
   input += synapse0x12c02a0();
   input += synapse0x12c02e0();
   input += synapse0x12c0320();
   input += synapse0x12c0360();
   input += synapse0x12c03a0();
   input += synapse0x12c03e0();
   input += synapse0x12c0420();
   input += synapse0x12c0460();
   input += synapse0x12b3d70();
   input += synapse0x12b3db0();
   input += synapse0x12c05b0();
   input += synapse0x12c05f0();
   input += synapse0x12c0630();
   input += synapse0x12c0670();
   input += synapse0x12c06b0();
   input += synapse0x12c06f0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12b3be0() {
   double input = input0x12b3be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12c0730() {
   double input = -0.0916663;
   input += synapse0x12c0a70();
   input += synapse0x12c0ab0();
   input += synapse0x12c0af0();
   input += synapse0x12c0b30();
   input += synapse0x12c0b70();
   input += synapse0x12c0bb0();
   input += synapse0x12c0bf0();
   input += synapse0x12c0c30();
   input += synapse0x12c0c70();
   input += synapse0x12c0cb0();
   input += synapse0x12c0cf0();
   input += synapse0x12c0d30();
   input += synapse0x12c0d70();
   input += synapse0x12c0db0();
   input += synapse0x12c0df0();
   input += synapse0x12c0e30();
   input += synapse0x12c08c0();
   input += synapse0x12c0900();
   input += synapse0x12c0f80();
   input += synapse0x12c0fc0();
   input += synapse0x12c1000();
   input += synapse0x12c1040();
   input += synapse0x12c1080();
   input += synapse0x12c10c0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12c0730() {
   double input = input0x12c0730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12c1100() {
   double input = -0.122285;
   input += synapse0x12c1440();
   input += synapse0x12c1480();
   input += synapse0x12c14c0();
   input += synapse0x12c1500();
   input += synapse0x12c1540();
   input += synapse0x12c1580();
   input += synapse0x12c15c0();
   input += synapse0x12c1600();
   input += synapse0x12c1640();
   input += synapse0x12c1680();
   input += synapse0x12c16c0();
   input += synapse0x12c1700();
   input += synapse0x12c1740();
   input += synapse0x12c1780();
   input += synapse0x12c17c0();
   input += synapse0x12c1800();
   input += synapse0x12c1290();
   input += synapse0x12c12d0();
   input += synapse0x12c1950();
   input += synapse0x12c1990();
   input += synapse0x12c19d0();
   input += synapse0x12c1a10();
   input += synapse0x12c1a50();
   input += synapse0x12c1a90();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12c1100() {
   double input = input0x12c1100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12c1ad0() {
   double input = -0.667196;
   input += synapse0x12c1e10();
   input += synapse0x12c1e50();
   input += synapse0x12c1e90();
   input += synapse0x12c1ed0();
   input += synapse0x12c1f10();
   input += synapse0x12c1f50();
   input += synapse0x12c1f90();
   input += synapse0x12c1fd0();
   input += synapse0x12c2010();
   input += synapse0x12c2050();
   input += synapse0x12c2090();
   input += synapse0x12c20d0();
   input += synapse0x12c2110();
   input += synapse0x12c2150();
   input += synapse0x12c2190();
   input += synapse0x12c21d0();
   input += synapse0x12c1c60();
   input += synapse0x12c1ca0();
   input += synapse0x12c2320();
   input += synapse0x12c2360();
   input += synapse0x12c23a0();
   input += synapse0x12c23e0();
   input += synapse0x12c2420();
   input += synapse0x12c2460();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12c1ad0() {
   double input = input0x12c1ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12c24a0() {
   double input = -0.32481;
   input += synapse0x12c27e0();
   input += synapse0x12c2820();
   input += synapse0x12c2860();
   input += synapse0x12c28a0();
   input += synapse0x12c28e0();
   input += synapse0x12c2920();
   input += synapse0x12c2960();
   input += synapse0x12c29a0();
   input += synapse0x12c29e0();
   input += synapse0x12c2a20();
   input += synapse0x12c2a60();
   input += synapse0x12c2aa0();
   input += synapse0x12c2ae0();
   input += synapse0x12c2b20();
   input += synapse0x12c2b60();
   input += synapse0x12c2ba0();
   input += synapse0x12c2630();
   input += synapse0x12c2670();
   input += synapse0x12c2cf0();
   input += synapse0x12c2d30();
   input += synapse0x12c2d70();
   input += synapse0x12c2db0();
   input += synapse0x12c2df0();
   input += synapse0x12c2e30();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12c24a0() {
   double input = input0x12c24a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12c2e70() {
   double input = 0.369127;
   input += synapse0x12c31b0();
   input += synapse0x12c31f0();
   input += synapse0x12c3230();
   input += synapse0x12c3270();
   input += synapse0x12c32b0();
   input += synapse0x12c32f0();
   input += synapse0x12c3330();
   input += synapse0x12c3370();
   input += synapse0x12c33b0();
   input += synapse0x12c33f0();
   input += synapse0x12c3430();
   input += synapse0x12c3470();
   input += synapse0x12c34b0();
   input += synapse0x12c34f0();
   input += synapse0x12c3530();
   input += synapse0x12c3570();
   input += synapse0x12c3000();
   input += synapse0x12c3040();
   input += synapse0x12c36c0();
   input += synapse0x12c3700();
   input += synapse0x12c3740();
   input += synapse0x12c3780();
   input += synapse0x12c37c0();
   input += synapse0x12c3800();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12c2e70() {
   double input = input0x12c2e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12c3840() {
   double input = -0.0919643;
   input += synapse0x12c3b80();
   input += synapse0x12c3bc0();
   input += synapse0x12c3c00();
   input += synapse0x12c3c40();
   input += synapse0x12c3c80();
   input += synapse0x12c3cc0();
   input += synapse0x12c3d00();
   input += synapse0x12c3d40();
   input += synapse0x12c3d80();
   input += synapse0x12c3dc0();
   input += synapse0x12c3e00();
   input += synapse0x12c3e40();
   input += synapse0x12c3e80();
   input += synapse0x12c3ec0();
   input += synapse0x12c3f00();
   input += synapse0x12c3f40();
   input += synapse0x12c39d0();
   input += synapse0x12c3a10();
   input += synapse0x12c4090();
   input += synapse0x12c40d0();
   input += synapse0x12c4110();
   input += synapse0x12c4150();
   input += synapse0x12c4190();
   input += synapse0x12c41d0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12c3840() {
   double input = input0x12c3840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12c4210() {
   double input = -1.9413;
   input += synapse0x12c4550();
   input += synapse0x12c4590();
   input += synapse0x12c45d0();
   input += synapse0x12c4610();
   input += synapse0x12c4650();
   input += synapse0x12c4690();
   input += synapse0x12c46d0();
   input += synapse0x12c4710();
   input += synapse0x12c4750();
   input += synapse0x12c4790();
   input += synapse0x12c47d0();
   input += synapse0x12c4810();
   input += synapse0x12c4850();
   input += synapse0x12c4890();
   input += synapse0x12c48d0();
   input += synapse0x12c4910();
   input += synapse0x12c43a0();
   input += synapse0x12c43e0();
   input += synapse0x12c4a60();
   input += synapse0x12c4aa0();
   input += synapse0x12c4ae0();
   input += synapse0x12c4b20();
   input += synapse0x12c4b60();
   input += synapse0x12c4ba0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12c4210() {
   double input = input0x12c4210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12c4be0() {
   double input = -0.146538;
   input += synapse0x12ad650();
   input += synapse0x12ad690();
   input += synapse0x12ad6d0();
   input += synapse0x12ad710();
   input += synapse0x12ad750();
   input += synapse0x12ad790();
   input += synapse0x12ad7d0();
   input += synapse0x12ad810();
   input += synapse0x12c5330();
   input += synapse0x12c5370();
   input += synapse0x12c53b0();
   input += synapse0x12c53f0();
   input += synapse0x12c5430();
   input += synapse0x12c5470();
   input += synapse0x12c54b0();
   input += synapse0x12c54f0();
   input += synapse0x12c4d70();
   input += synapse0x12c4db0();
   input += synapse0x12c5640();
   input += synapse0x12c5680();
   input += synapse0x12c56c0();
   input += synapse0x12c5700();
   input += synapse0x12c5740();
   input += synapse0x12c5780();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12c4be0() {
   double input = input0x12c4be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12c57c0() {
   double input = 0.198795;
   input += synapse0x12c5b00();
   input += synapse0x12c5b40();
   input += synapse0x12c5b80();
   input += synapse0x12c5bc0();
   input += synapse0x12c5c00();
   input += synapse0x12c5c40();
   input += synapse0x12c5c80();
   input += synapse0x12c5cc0();
   input += synapse0x12c5d00();
   input += synapse0x12c5d40();
   input += synapse0x12c5d80();
   input += synapse0x12c5dc0();
   input += synapse0x12c5e00();
   input += synapse0x12c5e40();
   input += synapse0x12c5e80();
   input += synapse0x12c5ec0();
   input += synapse0x12c5950();
   input += synapse0x12c5990();
   input += synapse0x12c6010();
   input += synapse0x12c6050();
   input += synapse0x12c6090();
   input += synapse0x12c60d0();
   input += synapse0x12c6110();
   input += synapse0x12c6150();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12c57c0() {
   double input = input0x12c57c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12c6190() {
   double input = -0.291234;
   input += synapse0x12c64d0();
   input += synapse0x12c6510();
   input += synapse0x12c6550();
   input += synapse0x12c6590();
   input += synapse0x12c65d0();
   input += synapse0x12c6610();
   input += synapse0x12c6650();
   input += synapse0x12c6690();
   input += synapse0x12c66d0();
   input += synapse0x12c6710();
   input += synapse0x12c6750();
   input += synapse0x12c6790();
   input += synapse0x12c67d0();
   input += synapse0x12c6810();
   input += synapse0x12c6850();
   input += synapse0x12c6890();
   input += synapse0x12c6320();
   input += synapse0x12c6360();
   input += synapse0x12b6e90();
   input += synapse0x12b6ed0();
   input += synapse0x12b6f10();
   input += synapse0x12b6f50();
   input += synapse0x12b6f90();
   input += synapse0x12b6fd0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12c6190() {
   double input = input0x12c6190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12b7010() {
   double input = 1.08724;
   input += synapse0x12b7350();
   input += synapse0x12b7390();
   input += synapse0x12b73d0();
   input += synapse0x12b7410();
   input += synapse0x12b7450();
   input += synapse0x12b7490();
   input += synapse0x12b74d0();
   input += synapse0x12b7510();
   input += synapse0x12b7550();
   input += synapse0x12b7590();
   input += synapse0x12b75d0();
   input += synapse0x12b7610();
   input += synapse0x12b7650();
   input += synapse0x12b7690();
   input += synapse0x12b76d0();
   input += synapse0x12b7710();
   input += synapse0x12b71a0();
   input += synapse0x12b71e0();
   input += synapse0x12b7860();
   input += synapse0x12b78a0();
   input += synapse0x12b78e0();
   input += synapse0x12b7920();
   input += synapse0x12b7960();
   input += synapse0x12b79a0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12b7010() {
   double input = input0x12b7010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12b79e0() {
   double input = 0.255148;
   input += synapse0x12b7d20();
   input += synapse0x12b7d60();
   input += synapse0x12b7da0();
   input += synapse0x12b7de0();
   input += synapse0x12b7e20();
   input += synapse0x12b7e60();
   input += synapse0x12b7ea0();
   input += synapse0x12b7ee0();
   input += synapse0x12b7f20();
   input += synapse0x12b7f60();
   input += synapse0x12b7fa0();
   input += synapse0x12b7fe0();
   input += synapse0x12b8020();
   input += synapse0x12b8060();
   input += synapse0x12b80a0();
   input += synapse0x12b80e0();
   input += synapse0x12b7b70();
   input += synapse0x12b7bb0();
   input += synapse0x12b8230();
   input += synapse0x12b8270();
   input += synapse0x12b82b0();
   input += synapse0x12b82f0();
   input += synapse0x12b8330();
   input += synapse0x12b8370();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12b79e0() {
   double input = input0x12b79e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12b83b0() {
   double input = 0.696239;
   input += synapse0x12b86f0();
   input += synapse0x12b8730();
   input += synapse0x12b8770();
   input += synapse0x12b87b0();
   input += synapse0x12b87f0();
   input += synapse0x12b8830();
   input += synapse0x12b8870();
   input += synapse0x12b88b0();
   input += synapse0x12b88f0();
   input += synapse0x12b8930();
   input += synapse0x12b8970();
   input += synapse0x12b89b0();
   input += synapse0x12b89f0();
   input += synapse0x12b8a30();
   input += synapse0x12b8a70();
   input += synapse0x12b8ab0();
   input += synapse0x12b8540();
   input += synapse0x12b8580();
   input += synapse0x12b8c00();
   input += synapse0x12b8c40();
   input += synapse0x12b8c80();
   input += synapse0x12b8cc0();
   input += synapse0x12b8d00();
   input += synapse0x12b8d40();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12b83b0() {
   double input = input0x12b83b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12ca9f0() {
   double input = 1.69997;
   input += synapse0x12cac10();
   input += synapse0x12cac50();
   input += synapse0x12cac90();
   input += synapse0x12cacd0();
   input += synapse0x12cad10();
   input += synapse0x12cad50();
   input += synapse0x12cad90();
   input += synapse0x12cadd0();
   input += synapse0x12cae10();
   input += synapse0x12cae50();
   input += synapse0x12cae90();
   input += synapse0x12caed0();
   input += synapse0x12caf10();
   input += synapse0x12caf50();
   input += synapse0x12caf90();
   input += synapse0x12cafd0();
   input += synapse0x12b8d80();
   input += synapse0x12b8dc0();
   input += synapse0x12cb120();
   input += synapse0x12cb160();
   input += synapse0x12cb1a0();
   input += synapse0x12cb1e0();
   input += synapse0x12cb220();
   input += synapse0x12cb260();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12ca9f0() {
   double input = input0x12ca9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12cb2a0() {
   double input = -0.112834;
   input += synapse0x12cb5e0();
   input += synapse0x12cb620();
   input += synapse0x12cb660();
   input += synapse0x12cb6a0();
   input += synapse0x12cb6e0();
   input += synapse0x12cb720();
   input += synapse0x12cb760();
   input += synapse0x12cb7a0();
   input += synapse0x12cb7e0();
   input += synapse0x12cb820();
   input += synapse0x12cb860();
   input += synapse0x12cb8a0();
   input += synapse0x12cb8e0();
   input += synapse0x12cb920();
   input += synapse0x12cb960();
   input += synapse0x12cb9a0();
   input += synapse0x12cb430();
   input += synapse0x12cb470();
   input += synapse0x12cbaf0();
   input += synapse0x12cbb30();
   input += synapse0x12cbb70();
   input += synapse0x12cbbb0();
   input += synapse0x12cbbf0();
   input += synapse0x12cbc30();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12cb2a0() {
   double input = input0x12cb2a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12cbc70() {
   double input = -0.0265561;
   input += synapse0x12cbfb0();
   input += synapse0x12cbff0();
   input += synapse0x12cc030();
   input += synapse0x12cc070();
   input += synapse0x12cc0b0();
   input += synapse0x12cc0f0();
   input += synapse0x12cc130();
   input += synapse0x12cc170();
   input += synapse0x12cc1b0();
   input += synapse0x12cc1f0();
   input += synapse0x12cc230();
   input += synapse0x12cc270();
   input += synapse0x12cc2b0();
   input += synapse0x12cc2f0();
   input += synapse0x12cc330();
   input += synapse0x12cc370();
   input += synapse0x12cbe00();
   input += synapse0x12cbe40();
   input += synapse0x12cc4c0();
   input += synapse0x12cc500();
   input += synapse0x12cc540();
   input += synapse0x12cc580();
   input += synapse0x12cc5c0();
   input += synapse0x12cc600();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12cbc70() {
   double input = input0x12cbc70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12cc640() {
   double input = 2.02037;
   input += synapse0x12cc980();
   input += synapse0x12cc9c0();
   input += synapse0x12cca00();
   input += synapse0x12cca40();
   input += synapse0x12cca80();
   input += synapse0x12ccac0();
   input += synapse0x12ccb00();
   input += synapse0x12ccb40();
   input += synapse0x12ccb80();
   input += synapse0x12ccbc0();
   input += synapse0x12ccc00();
   input += synapse0x12ccc40();
   input += synapse0x12ccc80();
   input += synapse0x12cccc0();
   input += synapse0x12ccd00();
   input += synapse0x12ccd40();
   input += synapse0x12cc7d0();
   input += synapse0x12cc810();
   input += synapse0x12cce90();
   input += synapse0x12cced0();
   input += synapse0x12ccf10();
   input += synapse0x12ccf50();
   input += synapse0x12ccf90();
   input += synapse0x12ccfd0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12cc640() {
   double input = input0x12cc640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12d3840() {
   double input = 0.231894;
   input += synapse0x12a9570();
   input += synapse0x12a95b0();
   input += synapse0x12aaa80();
   input += synapse0x12aaac0();
   input += synapse0x12ab450();
   input += synapse0x12ab490();
   input += synapse0x12ac220();
   input += synapse0x12ac260();
   input += synapse0x12acbf0();
   input += synapse0x12acc30();
   input += synapse0x12ad5c0();
   input += synapse0x12ad600();
   input += synapse0x12ae0a0();
   input += synapse0x12ae0e0();
   input += synapse0x12aea70();
   input += synapse0x12aeab0();
   input += synapse0x12abb50();
   input += synapse0x12abb90();
   input += synapse0x12b0620();
   input += synapse0x12b0660();
   input += synapse0x12b0ff0();
   input += synapse0x12b1030();
   input += synapse0x12b19c0();
   input += synapse0x12b1a00();
   input += synapse0x12b2390();
   input += synapse0x12b23d0();
   input += synapse0x12a6500();
   input += synapse0x12a6540();
   input += synapse0x12b4480();
   input += synapse0x12b44c0();
   input += synapse0x12b4e50();
   input += synapse0x12b4e90();
   input += synapse0x12b5820();
   input += synapse0x12b5860();
   input += synapse0x12b61f0();
   input += synapse0x12b6230();
   input += synapse0x12b6bc0();
   input += synapse0x12b6c00();
   input += synapse0x12af710();
   input += synapse0x12af750();
   input += synapse0x12b8fc0();
   input += synapse0x12b9000();
   input += synapse0x12b9950();
   input += synapse0x12b9990();
   input += synapse0x12ba320();
   input += synapse0x12ba360();
   input += synapse0x12bacf0();
   input += synapse0x12bad30();
   input += synapse0x12bb6c0();
   input += synapse0x12bb700();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12d3840() {
   double input = input0x12d3840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12d3be0() {
   double input = 0.0397516;
   input += synapse0x12bde00();
   input += synapse0x12bde40();
   input += synapse0x12b33c0();
   input += synapse0x12b3400();
   input += synapse0x12c09e0();
   input += synapse0x12c0a20();
   input += synapse0x12c13b0();
   input += synapse0x12c13f0();
   input += synapse0x12c1d80();
   input += synapse0x12c1dc0();
   input += synapse0x12c2750();
   input += synapse0x12c2790();
   input += synapse0x12c3120();
   input += synapse0x12c3160();
   input += synapse0x12c3af0();
   input += synapse0x12c3b30();
   input += synapse0x12c44c0();
   input += synapse0x12c4500();
   input += synapse0x12c4e90();
   input += synapse0x12c4ed0();
   input += synapse0x12c5a70();
   input += synapse0x12c5ab0();
   input += synapse0x12c6440();
   input += synapse0x12c6480();
   input += synapse0x12b72c0();
   input += synapse0x12b7300();
   input += synapse0x12b7c90();
   input += synapse0x12b7cd0();
   input += synapse0x12b8660();
   input += synapse0x12b86a0();
   input += synapse0x12cab80();
   input += synapse0x12cabc0();
   input += synapse0x12cb550();
   input += synapse0x12cb590();
   input += synapse0x12cbf20();
   input += synapse0x12cbf60();
   input += synapse0x12cc8f0();
   input += synapse0x12cc930();
   input += synapse0x12a87e0();
   input += synapse0x12a8820();
   input += synapse0x12bc090();
   input += synapse0x12bc0d0();
   input += synapse0x12cd010();
   input += synapse0x12cd050();
   input += synapse0x12cd090();
   input += synapse0x12cd0d0();
   input += synapse0x12d3f80();
   input += synapse0x12d3fc0();
   input += synapse0x12d4000();
   input += synapse0x12d4040();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12d3be0() {
   double input = input0x12d3be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12d4080() {
   double input = -0.560131;
   input += synapse0x12d43c0();
   input += synapse0x12d4400();
   input += synapse0x12d4440();
   input += synapse0x12d4480();
   input += synapse0x12d44c0();
   input += synapse0x12d4500();
   input += synapse0x12d4540();
   input += synapse0x12d4580();
   input += synapse0x12d45c0();
   input += synapse0x12d4600();
   input += synapse0x12d4640();
   input += synapse0x12d4680();
   input += synapse0x12d46c0();
   input += synapse0x12d4700();
   input += synapse0x12d4740();
   input += synapse0x12d4780();
   input += synapse0x12d4210();
   input += synapse0x12d4250();
   input += synapse0x12d48d0();
   input += synapse0x12d4910();
   input += synapse0x12d4950();
   input += synapse0x12d4990();
   input += synapse0x12d49d0();
   input += synapse0x12d4a10();
   input += synapse0x12d4a50();
   input += synapse0x12d4a90();
   input += synapse0x12d4ad0();
   input += synapse0x12d4b10();
   input += synapse0x12d4b50();
   input += synapse0x12d4b90();
   input += synapse0x12d4bd0();
   input += synapse0x12d4c10();
   input += synapse0x12d47c0();
   input += synapse0x12d4800();
   input += synapse0x12d4840();
   input += synapse0x12d4880();
   input += synapse0x12d4e60();
   input += synapse0x12d4ea0();
   input += synapse0x12d4ee0();
   input += synapse0x12d4f20();
   input += synapse0x12d4f60();
   input += synapse0x12d4fa0();
   input += synapse0x12d4fe0();
   input += synapse0x12d5020();
   input += synapse0x12d5060();
   input += synapse0x12d50a0();
   input += synapse0x12d50e0();
   input += synapse0x12d5120();
   input += synapse0x12d5160();
   input += synapse0x12d51a0();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12d4080() {
   double input = input0x12d4080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12d51e0() {
   double input = -0.401297;
   input += synapse0x12d5520();
   input += synapse0x12d5560();
   input += synapse0x12d55a0();
   input += synapse0x12d55e0();
   input += synapse0x12d5620();
   input += synapse0x12d5660();
   input += synapse0x12d56a0();
   input += synapse0x12d56e0();
   input += synapse0x12d5720();
   input += synapse0x12d5760();
   input += synapse0x12d57a0();
   input += synapse0x12d57e0();
   input += synapse0x12d5820();
   input += synapse0x12d5860();
   input += synapse0x12d58a0();
   input += synapse0x12d58e0();
   input += synapse0x12d5370();
   input += synapse0x12d53b0();
   input += synapse0x12d5a30();
   input += synapse0x12d5a70();
   input += synapse0x12d5ab0();
   input += synapse0x12d5af0();
   input += synapse0x12d5b30();
   input += synapse0x12d5b70();
   input += synapse0x12d5bb0();
   input += synapse0x12d5bf0();
   input += synapse0x12d5c30();
   input += synapse0x12d5c70();
   input += synapse0x12d5cb0();
   input += synapse0x12d5cf0();
   input += synapse0x12d5d30();
   input += synapse0x12d5d70();
   input += synapse0x12d5920();
   input += synapse0x12d5960();
   input += synapse0x12d59a0();
   input += synapse0x12d59e0();
   input += synapse0x12d5fc0();
   input += synapse0x12d6000();
   input += synapse0x12d6040();
   input += synapse0x12d6080();
   input += synapse0x12d60c0();
   input += synapse0x12d6100();
   input += synapse0x12d6140();
   input += synapse0x12d6180();
   input += synapse0x12d61c0();
   input += synapse0x12d6200();
   input += synapse0x12d6240();
   input += synapse0x12d6280();
   input += synapse0x12d62c0();
   input += synapse0x12d6300();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12d51e0() {
   double input = input0x12d51e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12d6340() {
   double input = -0.74004;
   input += synapse0x12d6680();
   input += synapse0x12d66c0();
   input += synapse0x12d6700();
   input += synapse0x12d6740();
   input += synapse0x12d6780();
   input += synapse0x12d67c0();
   input += synapse0x12d6800();
   input += synapse0x12d6840();
   input += synapse0x12d6880();
   input += synapse0x12d68c0();
   input += synapse0x12d6900();
   input += synapse0x12d6940();
   input += synapse0x12d6980();
   input += synapse0x12d69c0();
   input += synapse0x12d6a00();
   input += synapse0x12d6a40();
   input += synapse0x12d64d0();
   input += synapse0x12d6510();
   input += synapse0x12d6b90();
   input += synapse0x12d6bd0();
   input += synapse0x12d6c10();
   input += synapse0x12d6c50();
   input += synapse0x12d6c90();
   input += synapse0x12d6cd0();
   input += synapse0x12d6d10();
   input += synapse0x12d6d50();
   input += synapse0x12d6d90();
   input += synapse0x12d6dd0();
   input += synapse0x12d6e10();
   input += synapse0x12d6e50();
   input += synapse0x12d6e90();
   input += synapse0x12d6ed0();
   input += synapse0x12d6a80();
   input += synapse0x12d6ac0();
   input += synapse0x12d6b00();
   input += synapse0x12d6b40();
   input += synapse0x12d7120();
   input += synapse0x12d7160();
   input += synapse0x12d71a0();
   input += synapse0x12d71e0();
   input += synapse0x12d7220();
   input += synapse0x12d7260();
   input += synapse0x12d72a0();
   input += synapse0x12d72e0();
   input += synapse0x12d7320();
   input += synapse0x12d7360();
   input += synapse0x12d73a0();
   input += synapse0x12d73e0();
   input += synapse0x12d7420();
   input += synapse0x12d7460();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12d6340() {
   double input = input0x12d6340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_uLdR::input0x12d74a0() {
   double input = 1.40936;
   input += synapse0x12a8580();
   input += synapse0x12d76c0();
   input += synapse0x12d7700();
   input += synapse0x12d7740();
   input += synapse0x12d7780();
   return input;
}

double NNfunction_sb_uLdR::neuron0x12d74a0() {
   double input = input0x12d74a0();
   return (input * 1)+0;
}

double NNfunction_sb_uLdR::synapse0x10633d0() {
   return (neuron0x12a3560()*-0.891365);
}

double NNfunction_sb_uLdR::synapse0x12a3420() {
   return (neuron0x12a38a0()*-0.0136656);
}

double NNfunction_sb_uLdR::synapse0x12a3460() {
   return (neuron0x12a3be0()*0.701265);
}

double NNfunction_sb_uLdR::synapse0x12a8870() {
   return (neuron0x12a3f20()*0.185177);
}

double NNfunction_sb_uLdR::synapse0x12a88b0() {
   return (neuron0x12a4260()*0.0609218);
}

double NNfunction_sb_uLdR::synapse0x12a88f0() {
   return (neuron0x12a45a0()*-0.229473);
}

double NNfunction_sb_uLdR::synapse0x12a8930() {
   return (neuron0x12a48e0()*0.208151);
}

double NNfunction_sb_uLdR::synapse0x12a8970() {
   return (neuron0x12a4c20()*0.00136234);
}

double NNfunction_sb_uLdR::synapse0x12a89b0() {
   return (neuron0x12a4f60()*0.382993);
}

double NNfunction_sb_uLdR::synapse0x12a89f0() {
   return (neuron0x12a52a0()*0.202434);
}

double NNfunction_sb_uLdR::synapse0x12a8a30() {
   return (neuron0x12a55e0()*-0.407956);
}

double NNfunction_sb_uLdR::synapse0x12a8a70() {
   return (neuron0x12a5920()*-0.789404);
}

double NNfunction_sb_uLdR::synapse0x12a8ab0() {
   return (neuron0x12a5c60()*-0.00845433);
}

double NNfunction_sb_uLdR::synapse0x12a8af0() {
   return (neuron0x12a5fa0()*-0.330158);
}

double NNfunction_sb_uLdR::synapse0x12a8b30() {
   return (neuron0x12a62e0()*0.0999289);
}

double NNfunction_sb_uLdR::synapse0x12a8b70() {
   return (neuron0x12a6620()*0.177326);
}

double NNfunction_sb_uLdR::synapse0x12a3390() {
   return (neuron0x12a6960()*-0.00486334);
}

double NNfunction_sb_uLdR::synapse0x12a33d0() {
   return (neuron0x12a6ec0()*0.121148);
}

double NNfunction_sb_uLdR::synapse0x1054c70() {
   return (neuron0x12a70e0()*-0.151216);
}

double NNfunction_sb_uLdR::synapse0x1054cb0() {
   return (neuron0x12a7420()*-0.0806952);
}

double NNfunction_sb_uLdR::synapse0x12a8dd0() {
   return (neuron0x12a7760()*-0.156826);
}

double NNfunction_sb_uLdR::synapse0x12a8e10() {
   return (neuron0x12a7aa0()*0.526641);
}

double NNfunction_sb_uLdR::synapse0x12a8e50() {
   return (neuron0x12a7de0()*-0.222468);
}

double NNfunction_sb_uLdR::synapse0x12a8e90() {
   return (neuron0x12a8120()*0.233989);
}

double NNfunction_sb_uLdR::synapse0x12a9210() {
   return (neuron0x12a3560()*0.000702514);
}

double NNfunction_sb_uLdR::synapse0x12a9250() {
   return (neuron0x12a38a0()*0.00126464);
}

double NNfunction_sb_uLdR::synapse0x12a9290() {
   return (neuron0x12a3be0()*0.00398236);
}

double NNfunction_sb_uLdR::synapse0x12a92d0() {
   return (neuron0x12a3f20()*-0.0925131);
}

double NNfunction_sb_uLdR::synapse0x12a9310() {
   return (neuron0x12a4260()*0.0029911);
}

double NNfunction_sb_uLdR::synapse0x12a9350() {
   return (neuron0x12a45a0()*-0.0061323);
}

double NNfunction_sb_uLdR::synapse0x12a9390() {
   return (neuron0x12a48e0()*-0.00657803);
}

double NNfunction_sb_uLdR::synapse0x12a93d0() {
   return (neuron0x12a4c20()*-0.0106042);
}

double NNfunction_sb_uLdR::synapse0x12a9410() {
   return (neuron0x12a4f60()*0.00642462);
}

double NNfunction_sb_uLdR::synapse0x12a8cc0() {
   return (neuron0x12a52a0()*0.013596);
}

double NNfunction_sb_uLdR::synapse0x12a8d00() {
   return (neuron0x12a55e0()*0.00633412);
}

double NNfunction_sb_uLdR::synapse0x12a8d40() {
   return (neuron0x12a5920()*-0.887517);
}

double NNfunction_sb_uLdR::synapse0x12a8d80() {
   return (neuron0x12a5c60()*0.0187753);
}

double NNfunction_sb_uLdR::synapse0x12a9660() {
   return (neuron0x12a5fa0()*-0.0116737);
}

double NNfunction_sb_uLdR::synapse0x12a96a0() {
   return (neuron0x12a62e0()*0.0150746);
}

double NNfunction_sb_uLdR::synapse0x12a96e0() {
   return (neuron0x12a6620()*-0.0120813);
}

double NNfunction_sb_uLdR::synapse0x12a9060() {
   return (neuron0x12a6960()*-0.00715836);
}

double NNfunction_sb_uLdR::synapse0x12a90a0() {
   return (neuron0x12a6ec0()*-0.89551);
}

double NNfunction_sb_uLdR::synapse0x12a9830() {
   return (neuron0x12a70e0()*0.00523504);
}

double NNfunction_sb_uLdR::synapse0x12a9870() {
   return (neuron0x12a7420()*-0.0264155);
}

double NNfunction_sb_uLdR::synapse0x12a98b0() {
   return (neuron0x12a7760()*0.00293276);
}

double NNfunction_sb_uLdR::synapse0x12a98f0() {
   return (neuron0x12a7aa0()*0.00828914);
}

double NNfunction_sb_uLdR::synapse0x12a9930() {
   return (neuron0x12a7de0()*0.00335818);
}

double NNfunction_sb_uLdR::synapse0x12a9970() {
   return (neuron0x12a8120()*0.00114361);
}

double NNfunction_sb_uLdR::synapse0x12a9cf0() {
   return (neuron0x12a3560()*0.411888);
}

double NNfunction_sb_uLdR::synapse0x12a9d30() {
   return (neuron0x12a38a0()*-0.128272);
}

double NNfunction_sb_uLdR::synapse0x12a9d70() {
   return (neuron0x12a3be0()*0.144624);
}

double NNfunction_sb_uLdR::synapse0x12a9db0() {
   return (neuron0x12a3f20()*-0.379077);
}

double NNfunction_sb_uLdR::synapse0x12a9df0() {
   return (neuron0x12a4260()*-0.0320624);
}

double NNfunction_sb_uLdR::synapse0x12a9e30() {
   return (neuron0x12a45a0()*-0.420654);
}

double NNfunction_sb_uLdR::synapse0x12a9e70() {
   return (neuron0x12a48e0()*0.146118);
}

double NNfunction_sb_uLdR::synapse0x12a9eb0() {
   return (neuron0x12a4c20()*-0.136519);
}

double NNfunction_sb_uLdR::synapse0x12a9ef0() {
   return (neuron0x12a4f60()*-0.435192);
}

double NNfunction_sb_uLdR::synapse0x12a9f30() {
   return (neuron0x12a52a0()*0.0831013);
}

double NNfunction_sb_uLdR::synapse0x12a9f70() {
   return (neuron0x12a55e0()*-1.33439);
}

double NNfunction_sb_uLdR::synapse0x12a9fb0() {
   return (neuron0x12a5920()*0.275337);
}

double NNfunction_sb_uLdR::synapse0x12a9ff0() {
   return (neuron0x12a5c60()*0.0848944);
}

double NNfunction_sb_uLdR::synapse0x12aa030() {
   return (neuron0x12a5fa0()*-0.0687138);
}

double NNfunction_sb_uLdR::synapse0x12aa070() {
   return (neuron0x12a62e0()*0.198165);
}

double NNfunction_sb_uLdR::synapse0x12aa0b0() {
   return (neuron0x12a6620()*0.142462);
}

double NNfunction_sb_uLdR::synapse0x12a9b40() {
   return (neuron0x12a6960()*0.225111);
}

double NNfunction_sb_uLdR::synapse0x12a9b80() {
   return (neuron0x12a6ec0()*0.25375);
}

double NNfunction_sb_uLdR::synapse0x1062ac0() {
   return (neuron0x12a70e0()*-0.0475708);
}

double NNfunction_sb_uLdR::synapse0x1062b00() {
   return (neuron0x12a7420()*0.172676);
}

double NNfunction_sb_uLdR::synapse0x12925f0() {
   return (neuron0x12a7760()*-0.0513413);
}

double NNfunction_sb_uLdR::synapse0x1292630() {
   return (neuron0x12a7aa0()*0.0350914);
}

double NNfunction_sb_uLdR::synapse0x1292670() {
   return (neuron0x12a7de0()*0.0947315);
}

double NNfunction_sb_uLdR::synapse0x12a34a0() {
   return (neuron0x12a8120()*-0.10155);
}

double NNfunction_sb_uLdR::synapse0x12a9600() {
   return (neuron0x12a3560()*0.401416);
}

double NNfunction_sb_uLdR::synapse0x12a34e0() {
   return (neuron0x12a38a0()*-0.0445858);
}

double NNfunction_sb_uLdR::synapse0x12a3520() {
   return (neuron0x12a3be0()*-0.173398);
}

double NNfunction_sb_uLdR::synapse0x12aa200() {
   return (neuron0x12a3f20()*-0.61629);
}

double NNfunction_sb_uLdR::synapse0x12aa240() {
   return (neuron0x12a4260()*-0.354296);
}

double NNfunction_sb_uLdR::synapse0x12aa280() {
   return (neuron0x12a45a0()*0.502165);
}

double NNfunction_sb_uLdR::synapse0x12aa2c0() {
   return (neuron0x12a48e0()*0.00165945);
}

double NNfunction_sb_uLdR::synapse0x12aa300() {
   return (neuron0x12a4c20()*0.187489);
}

double NNfunction_sb_uLdR::synapse0x12aa340() {
   return (neuron0x12a4f60()*-0.389321);
}

double NNfunction_sb_uLdR::synapse0x12aa380() {
   return (neuron0x12a52a0()*0.287198);
}

double NNfunction_sb_uLdR::synapse0x12aa3c0() {
   return (neuron0x12a55e0()*-0.510808);
}

double NNfunction_sb_uLdR::synapse0x12aa400() {
   return (neuron0x12a5920()*0.229525);
}

double NNfunction_sb_uLdR::synapse0x12aa440() {
   return (neuron0x12a5c60()*-0.0844308);
}

double NNfunction_sb_uLdR::synapse0x12aa480() {
   return (neuron0x12a5fa0()*0.0834528);
}

double NNfunction_sb_uLdR::synapse0x12aa4c0() {
   return (neuron0x12a62e0()*-0.277899);
}

double NNfunction_sb_uLdR::synapse0x12aa500() {
   return (neuron0x12a6620()*-0.745154);
}

double NNfunction_sb_uLdR::synapse0x12a9450() {
   return (neuron0x12a6960()*0.0603488);
}

double NNfunction_sb_uLdR::synapse0x12a9490() {
   return (neuron0x12a6ec0()*-0.220426);
}

double NNfunction_sb_uLdR::synapse0x12aa650() {
   return (neuron0x12a70e0()*0.301721);
}

double NNfunction_sb_uLdR::synapse0x12aa690() {
   return (neuron0x12a7420()*-0.396979);
}

double NNfunction_sb_uLdR::synapse0x12aa6d0() {
   return (neuron0x12a7760()*-0.434187);
}

double NNfunction_sb_uLdR::synapse0x12aa710() {
   return (neuron0x12a7aa0()*0.307721);
}

double NNfunction_sb_uLdR::synapse0x12aa750() {
   return (neuron0x12a7de0()*-0.453171);
}

double NNfunction_sb_uLdR::synapse0x12aa790() {
   return (neuron0x12a8120()*-0.00155543);
}

double NNfunction_sb_uLdR::synapse0x12aab10() {
   return (neuron0x12a3560()*0.00580987);
}

double NNfunction_sb_uLdR::synapse0x12aab50() {
   return (neuron0x12a38a0()*-0.125087);
}

double NNfunction_sb_uLdR::synapse0x12aab90() {
   return (neuron0x12a3be0()*-0.184564);
}

double NNfunction_sb_uLdR::synapse0x12aabd0() {
   return (neuron0x12a3f20()*1.62482);
}

double NNfunction_sb_uLdR::synapse0x12aac10() {
   return (neuron0x12a4260()*0.155536);
}

double NNfunction_sb_uLdR::synapse0x12aac50() {
   return (neuron0x12a45a0()*-0.0249092);
}

double NNfunction_sb_uLdR::synapse0x12aac90() {
   return (neuron0x12a48e0()*-0.18075);
}

double NNfunction_sb_uLdR::synapse0x12aacd0() {
   return (neuron0x12a4c20()*0.294504);
}

double NNfunction_sb_uLdR::synapse0x12aad10() {
   return (neuron0x12a4f60()*0.000447487);
}

double NNfunction_sb_uLdR::synapse0x12aad50() {
   return (neuron0x12a52a0()*-0.159023);
}

double NNfunction_sb_uLdR::synapse0x12aad90() {
   return (neuron0x12a55e0()*-0.0912676);
}

double NNfunction_sb_uLdR::synapse0x12aadd0() {
   return (neuron0x12a5920()*-0.565239);
}

double NNfunction_sb_uLdR::synapse0x12aae10() {
   return (neuron0x12a5c60()*0.255217);
}

double NNfunction_sb_uLdR::synapse0x12aae50() {
   return (neuron0x12a5fa0()*-0.0250468);
}

double NNfunction_sb_uLdR::synapse0x12aae90() {
   return (neuron0x12a62e0()*0.189966);
}

double NNfunction_sb_uLdR::synapse0x12aaed0() {
   return (neuron0x12a6620()*0.245835);
}

double NNfunction_sb_uLdR::synapse0x12aa960() {
   return (neuron0x12a6960()*-0.144339);
}

double NNfunction_sb_uLdR::synapse0x12aa9a0() {
   return (neuron0x12a6ec0()*-0.640627);
}

double NNfunction_sb_uLdR::synapse0x12ab020() {
   return (neuron0x12a70e0()*-0.166081);
}

double NNfunction_sb_uLdR::synapse0x12ab060() {
   return (neuron0x12a7420()*-0.0341981);
}

double NNfunction_sb_uLdR::synapse0x12ab0a0() {
   return (neuron0x12a7760()*-0.169941);
}

double NNfunction_sb_uLdR::synapse0x12ab0e0() {
   return (neuron0x12a7aa0()*0.0782193);
}

double NNfunction_sb_uLdR::synapse0x12ab120() {
   return (neuron0x12a7de0()*-0.0363101);
}

double NNfunction_sb_uLdR::synapse0x12ab160() {
   return (neuron0x12a8120()*0.0607205);
}

double NNfunction_sb_uLdR::synapse0x12ab4e0() {
   return (neuron0x12a3560()*0.197076);
}

double NNfunction_sb_uLdR::synapse0x12ab520() {
   return (neuron0x12a38a0()*0.247676);
}

double NNfunction_sb_uLdR::synapse0x12ab560() {
   return (neuron0x12a3be0()*0.662292);
}

double NNfunction_sb_uLdR::synapse0x12ab5a0() {
   return (neuron0x12a3f20()*0.123013);
}

double NNfunction_sb_uLdR::synapse0x12ab5e0() {
   return (neuron0x12a4260()*0.164436);
}

double NNfunction_sb_uLdR::synapse0x12ab620() {
   return (neuron0x12a45a0()*-0.373602);
}

double NNfunction_sb_uLdR::synapse0x12ab660() {
   return (neuron0x12a48e0()*-0.100033);
}

double NNfunction_sb_uLdR::synapse0x12ab6a0() {
   return (neuron0x12a4c20()*0.682396);
}

double NNfunction_sb_uLdR::synapse0x12ab6e0() {
   return (neuron0x12a4f60()*-0.235481);
}

double NNfunction_sb_uLdR::synapse0x1062e30() {
   return (neuron0x12a52a0()*-0.0247224);
}

double NNfunction_sb_uLdR::synapse0x1062e70() {
   return (neuron0x12a55e0()*-0.311681);
}

double NNfunction_sb_uLdR::synapse0x1062eb0() {
   return (neuron0x12a5920()*0.195609);
}

double NNfunction_sb_uLdR::synapse0x1062ef0() {
   return (neuron0x12a5c60()*0.6757);
}

double NNfunction_sb_uLdR::synapse0x1062f30() {
   return (neuron0x12a5fa0()*-0.314083);
}

double NNfunction_sb_uLdR::synapse0x1062f70() {
   return (neuron0x12a62e0()*-0.151475);
}

double NNfunction_sb_uLdR::synapse0x1062fb0() {
   return (neuron0x12a6620()*-0.428481);
}

double NNfunction_sb_uLdR::synapse0x12ab330() {
   return (neuron0x12a6960()*-0.0323181);
}

double NNfunction_sb_uLdR::synapse0x12ab370() {
   return (neuron0x12a6ec0()*0.144662);
}

double NNfunction_sb_uLdR::synapse0x1063100() {
   return (neuron0x12a70e0()*0.397247);
}

double NNfunction_sb_uLdR::synapse0x1063140() {
   return (neuron0x12a7420()*-0.0536234);
}

double NNfunction_sb_uLdR::synapse0x1063180() {
   return (neuron0x12a7760()*0.104508);
}

double NNfunction_sb_uLdR::synapse0x10631c0() {
   return (neuron0x12a7aa0()*-0.759426);
}

double NNfunction_sb_uLdR::synapse0x1063200() {
   return (neuron0x12a7de0()*-0.10213);
}

double NNfunction_sb_uLdR::synapse0x12abf30() {
   return (neuron0x12a8120()*0.885106);
}

double NNfunction_sb_uLdR::synapse0x12ac2b0() {
   return (neuron0x12a3560()*0.00175681);
}

double NNfunction_sb_uLdR::synapse0x12ac2f0() {
   return (neuron0x12a38a0()*0.0205999);
}

double NNfunction_sb_uLdR::synapse0x12ac330() {
   return (neuron0x12a3be0()*0.0231399);
}

double NNfunction_sb_uLdR::synapse0x12ac370() {
   return (neuron0x12a3f20()*0.229773);
}

double NNfunction_sb_uLdR::synapse0x12ac3b0() {
   return (neuron0x12a4260()*-0.0119598);
}

double NNfunction_sb_uLdR::synapse0x12ac3f0() {
   return (neuron0x12a45a0()*-0.0041569);
}

double NNfunction_sb_uLdR::synapse0x12ac430() {
   return (neuron0x12a48e0()*-0.00761161);
}

double NNfunction_sb_uLdR::synapse0x12ac470() {
   return (neuron0x12a4c20()*0.0287139);
}

double NNfunction_sb_uLdR::synapse0x12ac4b0() {
   return (neuron0x12a4f60()*-0.0136177);
}

double NNfunction_sb_uLdR::synapse0x12ac4f0() {
   return (neuron0x12a52a0()*-0.00200338);
}

double NNfunction_sb_uLdR::synapse0x12ac530() {
   return (neuron0x12a55e0()*-0.00607138);
}

double NNfunction_sb_uLdR::synapse0x12ac570() {
   return (neuron0x12a5920()*0.0180232);
}

double NNfunction_sb_uLdR::synapse0x12ac5b0() {
   return (neuron0x12a5c60()*-0.41123);
}

double NNfunction_sb_uLdR::synapse0x12ac5f0() {
   return (neuron0x12a5fa0()*0.0849974);
}

double NNfunction_sb_uLdR::synapse0x12ac630() {
   return (neuron0x12a62e0()*-0.309716);
}

double NNfunction_sb_uLdR::synapse0x12ac670() {
   return (neuron0x12a6620()*-0.261549);
}

double NNfunction_sb_uLdR::synapse0x12ac100() {
   return (neuron0x12a6960()*0.0458234);
}

double NNfunction_sb_uLdR::synapse0x12ac140() {
   return (neuron0x12a6ec0()*0.18611);
}

double NNfunction_sb_uLdR::synapse0x12ac7c0() {
   return (neuron0x12a70e0()*-0.208565);
}

double NNfunction_sb_uLdR::synapse0x12ac800() {
   return (neuron0x12a7420()*0.0190084);
}

double NNfunction_sb_uLdR::synapse0x12ac840() {
   return (neuron0x12a7760()*0.00387814);
}

double NNfunction_sb_uLdR::synapse0x12ac880() {
   return (neuron0x12a7aa0()*-0.0402635);
}

double NNfunction_sb_uLdR::synapse0x12ac8c0() {
   return (neuron0x12a7de0()*0.00933916);
}

double NNfunction_sb_uLdR::synapse0x12ac900() {
   return (neuron0x12a8120()*-0.00479878);
}

double NNfunction_sb_uLdR::synapse0x12acc80() {
   return (neuron0x12a3560()*0.030192);
}

double NNfunction_sb_uLdR::synapse0x12accc0() {
   return (neuron0x12a38a0()*0.0121019);
}

double NNfunction_sb_uLdR::synapse0x12acd00() {
   return (neuron0x12a3be0()*0.0212103);
}

double NNfunction_sb_uLdR::synapse0x12acd40() {
   return (neuron0x12a3f20()*2.42911);
}

double NNfunction_sb_uLdR::synapse0x12acd80() {
   return (neuron0x12a4260()*0.0848025);
}

double NNfunction_sb_uLdR::synapse0x12acdc0() {
   return (neuron0x12a45a0()*0.0425681);
}

double NNfunction_sb_uLdR::synapse0x12ace00() {
   return (neuron0x12a48e0()*0.0418088);
}

double NNfunction_sb_uLdR::synapse0x12ace40() {
   return (neuron0x12a4c20()*0.0433873);
}

double NNfunction_sb_uLdR::synapse0x12ace80() {
   return (neuron0x12a4f60()*-0.0220725);
}

double NNfunction_sb_uLdR::synapse0x12acec0() {
   return (neuron0x12a52a0()*-0.0182506);
}

double NNfunction_sb_uLdR::synapse0x12acf00() {
   return (neuron0x12a55e0()*-0.0350859);
}

double NNfunction_sb_uLdR::synapse0x12acf40() {
   return (neuron0x12a5920()*0.000287961);
}

double NNfunction_sb_uLdR::synapse0x12acf80() {
   return (neuron0x12a5c60()*0.0825612);
}

double NNfunction_sb_uLdR::synapse0x12acfc0() {
   return (neuron0x12a5fa0()*-0.0292142);
}

double NNfunction_sb_uLdR::synapse0x12ad000() {
   return (neuron0x12a62e0()*0.0417366);
}

double NNfunction_sb_uLdR::synapse0x12ad040() {
   return (neuron0x12a6620()*0.0868136);
}

double NNfunction_sb_uLdR::synapse0x12acad0() {
   return (neuron0x12a6960()*-0.0431552);
}

double NNfunction_sb_uLdR::synapse0x12acb10() {
   return (neuron0x12a6ec0()*-1.25114);
}

double NNfunction_sb_uLdR::synapse0x12ad190() {
   return (neuron0x12a70e0()*-0.013256);
}

double NNfunction_sb_uLdR::synapse0x12ad1d0() {
   return (neuron0x12a7420()*0.0357567);
}

double NNfunction_sb_uLdR::synapse0x12ad210() {
   return (neuron0x12a7760()*-0.0119964);
}

double NNfunction_sb_uLdR::synapse0x12ad250() {
   return (neuron0x12a7aa0()*-0.012612);
}

double NNfunction_sb_uLdR::synapse0x12ad290() {
   return (neuron0x12a7de0()*-0.0101593);
}

double NNfunction_sb_uLdR::synapse0x12ad2d0() {
   return (neuron0x12a8120()*0.0179945);
}

double NNfunction_sb_uLdR::synapse0x12a6db0() {
   return (neuron0x12a3560()*0.0607992);
}

double NNfunction_sb_uLdR::synapse0x12a6df0() {
   return (neuron0x12a38a0()*-0.0657881);
}

double NNfunction_sb_uLdR::synapse0x12a6e30() {
   return (neuron0x12a3be0()*-0.0540148);
}

double NNfunction_sb_uLdR::synapse0x12a6e70() {
   return (neuron0x12a3f20()*0.366214);
}

double NNfunction_sb_uLdR::synapse0x12ad860() {
   return (neuron0x12a4260()*0.0411839);
}

double NNfunction_sb_uLdR::synapse0x12ad8a0() {
   return (neuron0x12a45a0()*0.00601012);
}

double NNfunction_sb_uLdR::synapse0x12ad8e0() {
   return (neuron0x12a48e0()*0.0787393);
}

double NNfunction_sb_uLdR::synapse0x12ad920() {
   return (neuron0x12a4c20()*-0.0161872);
}

double NNfunction_sb_uLdR::synapse0x12ad960() {
   return (neuron0x12a4f60()*-0.491865);
}

double NNfunction_sb_uLdR::synapse0x12ad9a0() {
   return (neuron0x12a52a0()*-0.11331);
}

double NNfunction_sb_uLdR::synapse0x12ad9e0() {
   return (neuron0x12a55e0()*0.0580507);
}

double NNfunction_sb_uLdR::synapse0x12ada20() {
   return (neuron0x12a5920()*0.876752);
}

double NNfunction_sb_uLdR::synapse0x12ada60() {
   return (neuron0x12a5c60()*-0.00595916);
}

double NNfunction_sb_uLdR::synapse0x12adaa0() {
   return (neuron0x12a5fa0()*-0.0114525);
}

double NNfunction_sb_uLdR::synapse0x12adae0() {
   return (neuron0x12a62e0()*0.0167534);
}

double NNfunction_sb_uLdR::synapse0x12adb20() {
   return (neuron0x12a6620()*-0.130349);
}

double NNfunction_sb_uLdR::synapse0x12ad4a0() {
   return (neuron0x12a6960()*0.144318);
}

double NNfunction_sb_uLdR::synapse0x12ad4e0() {
   return (neuron0x12a6ec0()*-0.823447);
}

double NNfunction_sb_uLdR::synapse0x12adc70() {
   return (neuron0x12a70e0()*-0.186145);
}

double NNfunction_sb_uLdR::synapse0x12adcb0() {
   return (neuron0x12a7420()*0.0642188);
}

double NNfunction_sb_uLdR::synapse0x12adcf0() {
   return (neuron0x12a7760()*-0.0226975);
}

double NNfunction_sb_uLdR::synapse0x12add30() {
   return (neuron0x12a7aa0()*-0.136633);
}

double NNfunction_sb_uLdR::synapse0x12add70() {
   return (neuron0x12a7de0()*0.0969687);
}

double NNfunction_sb_uLdR::synapse0x12addb0() {
   return (neuron0x12a8120()*0.111908);
}

double NNfunction_sb_uLdR::synapse0x12ae130() {
   return (neuron0x12a3560()*-0.0101854);
}

double NNfunction_sb_uLdR::synapse0x12ae170() {
   return (neuron0x12a38a0()*0.0286842);
}

double NNfunction_sb_uLdR::synapse0x12ae1b0() {
   return (neuron0x12a3be0()*0.0114102);
}

double NNfunction_sb_uLdR::synapse0x12ae1f0() {
   return (neuron0x12a3f20()*-1.06072);
}

double NNfunction_sb_uLdR::synapse0x12ae230() {
   return (neuron0x12a4260()*-0.0889069);
}

double NNfunction_sb_uLdR::synapse0x12ae270() {
   return (neuron0x12a45a0()*-0.0288724);
}

double NNfunction_sb_uLdR::synapse0x12ae2b0() {
   return (neuron0x12a48e0()*-0.000538408);
}

double NNfunction_sb_uLdR::synapse0x12ae2f0() {
   return (neuron0x12a4c20()*-0.0108872);
}

double NNfunction_sb_uLdR::synapse0x12ae330() {
   return (neuron0x12a4f60()*0.0876499);
}

double NNfunction_sb_uLdR::synapse0x12ae370() {
   return (neuron0x12a52a0()*0.00435327);
}

double NNfunction_sb_uLdR::synapse0x12ae3b0() {
   return (neuron0x12a55e0()*0.0267191);
}

double NNfunction_sb_uLdR::synapse0x12ae3f0() {
   return (neuron0x12a5920()*-0.271457);
}

double NNfunction_sb_uLdR::synapse0x12ae430() {
   return (neuron0x12a5c60()*-0.0524476);
}

double NNfunction_sb_uLdR::synapse0x12ae470() {
   return (neuron0x12a5fa0()*0.0175264);
}

double NNfunction_sb_uLdR::synapse0x12ae4b0() {
   return (neuron0x12a62e0()*0.0361584);
}

double NNfunction_sb_uLdR::synapse0x12ae4f0() {
   return (neuron0x12a6620()*-0.000682108);
}

double NNfunction_sb_uLdR::synapse0x12adf80() {
   return (neuron0x12a6960()*0.0184558);
}

double NNfunction_sb_uLdR::synapse0x12adfc0() {
   return (neuron0x12a6ec0()*3.62091);
}

double NNfunction_sb_uLdR::synapse0x12ae640() {
   return (neuron0x12a70e0()*0.0329918);
}

double NNfunction_sb_uLdR::synapse0x12ae680() {
   return (neuron0x12a7420()*-0.068442);
}

double NNfunction_sb_uLdR::synapse0x12ae6c0() {
   return (neuron0x12a7760()*-0.00318847);
}

double NNfunction_sb_uLdR::synapse0x12ae700() {
   return (neuron0x12a7aa0()*0.06284);
}

double NNfunction_sb_uLdR::synapse0x12ae740() {
   return (neuron0x12a7de0()*-0.0042753);
}

double NNfunction_sb_uLdR::synapse0x12ae780() {
   return (neuron0x12a8120()*-0.0271875);
}

double NNfunction_sb_uLdR::synapse0x12aeb00() {
   return (neuron0x12a3560()*-0.309587);
}

double NNfunction_sb_uLdR::synapse0x12aeb40() {
   return (neuron0x12a38a0()*0.933542);
}

double NNfunction_sb_uLdR::synapse0x12aeb80() {
   return (neuron0x12a3be0()*-0.307628);
}

double NNfunction_sb_uLdR::synapse0x12aebc0() {
   return (neuron0x12a3f20()*-0.183372);
}

double NNfunction_sb_uLdR::synapse0x12aec00() {
   return (neuron0x12a4260()*0.716134);
}

double NNfunction_sb_uLdR::synapse0x12aec40() {
   return (neuron0x12a45a0()*-0.303487);
}

double NNfunction_sb_uLdR::synapse0x12aec80() {
   return (neuron0x12a48e0()*-0.0899418);
}

double NNfunction_sb_uLdR::synapse0x12aecc0() {
   return (neuron0x12a4c20()*-0.0352688);
}

double NNfunction_sb_uLdR::synapse0x12aed00() {
   return (neuron0x12a4f60()*0.359832);
}

double NNfunction_sb_uLdR::synapse0x12aed40() {
   return (neuron0x12a52a0()*0.269197);
}

double NNfunction_sb_uLdR::synapse0x12aed80() {
   return (neuron0x12a55e0()*0.358314);
}

double NNfunction_sb_uLdR::synapse0x12aedc0() {
   return (neuron0x12a5920()*-0.212544);
}

double NNfunction_sb_uLdR::synapse0x12aee00() {
   return (neuron0x12a5c60()*-0.421538);
}

double NNfunction_sb_uLdR::synapse0x12aee40() {
   return (neuron0x12a5fa0()*0.360511);
}

double NNfunction_sb_uLdR::synapse0x12aee80() {
   return (neuron0x12a62e0()*-0.175071);
}

double NNfunction_sb_uLdR::synapse0x12aeec0() {
   return (neuron0x12a6620()*0.385179);
}

double NNfunction_sb_uLdR::synapse0x12ae950() {
   return (neuron0x12a6960()*-0.274299);
}

double NNfunction_sb_uLdR::synapse0x12ae990() {
   return (neuron0x12a6ec0()*0.296035);
}

double NNfunction_sb_uLdR::synapse0x12ab720() {
   return (neuron0x12a70e0()*-0.405001);
}

double NNfunction_sb_uLdR::synapse0x12ab760() {
   return (neuron0x12a7420()*0.582831);
}

double NNfunction_sb_uLdR::synapse0x12ab7a0() {
   return (neuron0x12a7760()*-0.725114);
}

double NNfunction_sb_uLdR::synapse0x12ab7e0() {
   return (neuron0x12a7aa0()*0.210102);
}

double NNfunction_sb_uLdR::synapse0x12ab820() {
   return (neuron0x12a7de0()*-0.164859);
}

double NNfunction_sb_uLdR::synapse0x12ab860() {
   return (neuron0x12a8120()*-0.0471815);
}

double NNfunction_sb_uLdR::synapse0x12abbe0() {
   return (neuron0x12a3560()*0.401);
}

double NNfunction_sb_uLdR::synapse0x12abc20() {
   return (neuron0x12a38a0()*0.093538);
}

double NNfunction_sb_uLdR::synapse0x12abc60() {
   return (neuron0x12a3be0()*0.0897709);
}

double NNfunction_sb_uLdR::synapse0x12abca0() {
   return (neuron0x12a3f20()*-0.360226);
}

double NNfunction_sb_uLdR::synapse0x12abce0() {
   return (neuron0x12a4260()*0.308932);
}

double NNfunction_sb_uLdR::synapse0x12abd20() {
   return (neuron0x12a45a0()*-0.483592);
}

double NNfunction_sb_uLdR::synapse0x12abd60() {
   return (neuron0x12a48e0()*0.0901073);
}

double NNfunction_sb_uLdR::synapse0x12abda0() {
   return (neuron0x12a4c20()*-1.06812);
}

double NNfunction_sb_uLdR::synapse0x12abde0() {
   return (neuron0x12a4f60()*0.708293);
}

double NNfunction_sb_uLdR::synapse0x12abe20() {
   return (neuron0x12a52a0()*-0.507293);
}

double NNfunction_sb_uLdR::synapse0x12abe60() {
   return (neuron0x12a55e0()*0.33852);
}

double NNfunction_sb_uLdR::synapse0x12abea0() {
   return (neuron0x12a5920()*-0.348333);
}

double NNfunction_sb_uLdR::synapse0x12abee0() {
   return (neuron0x12a5c60()*0.296464);
}

double NNfunction_sb_uLdR::synapse0x12b0020() {
   return (neuron0x12a5fa0()*0.108539);
}

double NNfunction_sb_uLdR::synapse0x12b0060() {
   return (neuron0x12a62e0()*0.278118);
}

double NNfunction_sb_uLdR::synapse0x12b00a0() {
   return (neuron0x12a6620()*0.64736);
}

double NNfunction_sb_uLdR::synapse0x12aba30() {
   return (neuron0x12a6960()*-0.309878);
}

double NNfunction_sb_uLdR::synapse0x12aba70() {
   return (neuron0x12a6ec0()*-0.141036);
}

double NNfunction_sb_uLdR::synapse0x12b01f0() {
   return (neuron0x12a70e0()*-0.0964206);
}

double NNfunction_sb_uLdR::synapse0x12b0230() {
   return (neuron0x12a7420()*-0.326748);
}

double NNfunction_sb_uLdR::synapse0x12b0270() {
   return (neuron0x12a7760()*0.239835);
}

double NNfunction_sb_uLdR::synapse0x12b02b0() {
   return (neuron0x12a7aa0()*-0.112827);
}

double NNfunction_sb_uLdR::synapse0x12b02f0() {
   return (neuron0x12a7de0()*-0.241505);
}

double NNfunction_sb_uLdR::synapse0x12b0330() {
   return (neuron0x12a8120()*-0.26147);
}

double NNfunction_sb_uLdR::synapse0x12b06b0() {
   return (neuron0x12a3560()*-0.103124);
}

double NNfunction_sb_uLdR::synapse0x12b06f0() {
   return (neuron0x12a38a0()*-0.217486);
}

double NNfunction_sb_uLdR::synapse0x12b0730() {
   return (neuron0x12a3be0()*-0.102375);
}

double NNfunction_sb_uLdR::synapse0x12b0770() {
   return (neuron0x12a3f20()*0.765526);
}

double NNfunction_sb_uLdR::synapse0x12b07b0() {
   return (neuron0x12a4260()*0.318846);
}

double NNfunction_sb_uLdR::synapse0x12b07f0() {
   return (neuron0x12a45a0()*-0.292963);
}

double NNfunction_sb_uLdR::synapse0x12b0830() {
   return (neuron0x12a48e0()*-0.00603096);
}

double NNfunction_sb_uLdR::synapse0x12b0870() {
   return (neuron0x12a4c20()*0.506775);
}

double NNfunction_sb_uLdR::synapse0x12b08b0() {
   return (neuron0x12a4f60()*-0.737051);
}

double NNfunction_sb_uLdR::synapse0x12b08f0() {
   return (neuron0x12a52a0()*0.150574);
}

double NNfunction_sb_uLdR::synapse0x12b0930() {
   return (neuron0x12a55e0()*-0.13437);
}

double NNfunction_sb_uLdR::synapse0x12b0970() {
   return (neuron0x12a5920()*1.00269);
}

double NNfunction_sb_uLdR::synapse0x12b09b0() {
   return (neuron0x12a5c60()*-0.0584023);
}

double NNfunction_sb_uLdR::synapse0x12b09f0() {
   return (neuron0x12a5fa0()*0.0813922);
}

double NNfunction_sb_uLdR::synapse0x12b0a30() {
   return (neuron0x12a62e0()*0.0226494);
}

double NNfunction_sb_uLdR::synapse0x12b0a70() {
   return (neuron0x12a6620()*0.0477457);
}

double NNfunction_sb_uLdR::synapse0x12b0500() {
   return (neuron0x12a6960()*-0.489829);
}

double NNfunction_sb_uLdR::synapse0x12b0540() {
   return (neuron0x12a6ec0()*-0.385723);
}

double NNfunction_sb_uLdR::synapse0x12b0bc0() {
   return (neuron0x12a70e0()*0.473933);
}

double NNfunction_sb_uLdR::synapse0x12b0c00() {
   return (neuron0x12a7420()*-0.282875);
}

double NNfunction_sb_uLdR::synapse0x12b0c40() {
   return (neuron0x12a7760()*-0.0430057);
}

double NNfunction_sb_uLdR::synapse0x12b0c80() {
   return (neuron0x12a7aa0()*-0.391655);
}

double NNfunction_sb_uLdR::synapse0x12b0cc0() {
   return (neuron0x12a7de0()*0.427676);
}

double NNfunction_sb_uLdR::synapse0x12b0d00() {
   return (neuron0x12a8120()*0.074696);
}

double NNfunction_sb_uLdR::synapse0x12b1080() {
   return (neuron0x12a3560()*-0.0813872);
}

double NNfunction_sb_uLdR::synapse0x12b10c0() {
   return (neuron0x12a38a0()*-0.00684759);
}

double NNfunction_sb_uLdR::synapse0x12b1100() {
   return (neuron0x12a3be0()*0.280098);
}

double NNfunction_sb_uLdR::synapse0x12b1140() {
   return (neuron0x12a3f20()*-0.474331);
}

double NNfunction_sb_uLdR::synapse0x12b1180() {
   return (neuron0x12a4260()*-0.216197);
}

double NNfunction_sb_uLdR::synapse0x12b11c0() {
   return (neuron0x12a45a0()*0.174599);
}

double NNfunction_sb_uLdR::synapse0x12b1200() {
   return (neuron0x12a48e0()*0.215223);
}

double NNfunction_sb_uLdR::synapse0x12b1240() {
   return (neuron0x12a4c20()*0.595221);
}

double NNfunction_sb_uLdR::synapse0x12b1280() {
   return (neuron0x12a4f60()*-0.834628);
}

double NNfunction_sb_uLdR::synapse0x12b12c0() {
   return (neuron0x12a52a0()*0.486886);
}

double NNfunction_sb_uLdR::synapse0x12b1300() {
   return (neuron0x12a55e0()*-0.356978);
}

double NNfunction_sb_uLdR::synapse0x12b1340() {
   return (neuron0x12a5920()*0.300486);
}

double NNfunction_sb_uLdR::synapse0x12b1380() {
   return (neuron0x12a5c60()*-0.165719);
}

double NNfunction_sb_uLdR::synapse0x12b13c0() {
   return (neuron0x12a5fa0()*0.105143);
}

double NNfunction_sb_uLdR::synapse0x12b1400() {
   return (neuron0x12a62e0()*-0.154199);
}

double NNfunction_sb_uLdR::synapse0x12b1440() {
   return (neuron0x12a6620()*0.0495532);
}

double NNfunction_sb_uLdR::synapse0x12b0ed0() {
   return (neuron0x12a6960()*0.222813);
}

double NNfunction_sb_uLdR::synapse0x12b0f10() {
   return (neuron0x12a6ec0()*0.102864);
}

double NNfunction_sb_uLdR::synapse0x12b1590() {
   return (neuron0x12a70e0()*0.0945716);
}

double NNfunction_sb_uLdR::synapse0x12b15d0() {
   return (neuron0x12a7420()*0.130422);
}

double NNfunction_sb_uLdR::synapse0x12b1610() {
   return (neuron0x12a7760()*-0.174445);
}

double NNfunction_sb_uLdR::synapse0x12b1650() {
   return (neuron0x12a7aa0()*0.237016);
}

double NNfunction_sb_uLdR::synapse0x12b1690() {
   return (neuron0x12a7de0()*0.449887);
}

double NNfunction_sb_uLdR::synapse0x12b16d0() {
   return (neuron0x12a8120()*0.0731605);
}

double NNfunction_sb_uLdR::synapse0x12b1a50() {
   return (neuron0x12a3560()*0.255623);
}

double NNfunction_sb_uLdR::synapse0x12b1a90() {
   return (neuron0x12a38a0()*-0.133806);
}

double NNfunction_sb_uLdR::synapse0x12b1ad0() {
   return (neuron0x12a3be0()*1.28951);
}

double NNfunction_sb_uLdR::synapse0x12b1b10() {
   return (neuron0x12a3f20()*0.517559);
}

double NNfunction_sb_uLdR::synapse0x12b1b50() {
   return (neuron0x12a4260()*0.286389);
}

double NNfunction_sb_uLdR::synapse0x12b1b90() {
   return (neuron0x12a45a0()*0.202562);
}

double NNfunction_sb_uLdR::synapse0x12b1bd0() {
   return (neuron0x12a48e0()*-0.21527);
}

double NNfunction_sb_uLdR::synapse0x12b1c10() {
   return (neuron0x12a4c20()*0.144334);
}

double NNfunction_sb_uLdR::synapse0x12b1c50() {
   return (neuron0x12a4f60()*0.230836);
}

double NNfunction_sb_uLdR::synapse0x12b1c90() {
   return (neuron0x12a52a0()*0.203311);
}

double NNfunction_sb_uLdR::synapse0x12b1cd0() {
   return (neuron0x12a55e0()*0.10002);
}

double NNfunction_sb_uLdR::synapse0x12b1d10() {
   return (neuron0x12a5920()*-0.280017);
}

double NNfunction_sb_uLdR::synapse0x12b1d50() {
   return (neuron0x12a5c60()*0.799791);
}

double NNfunction_sb_uLdR::synapse0x12b1d90() {
   return (neuron0x12a5fa0()*-0.0184395);
}

double NNfunction_sb_uLdR::synapse0x12b1dd0() {
   return (neuron0x12a62e0()*-0.29193);
}

double NNfunction_sb_uLdR::synapse0x12b1e10() {
   return (neuron0x12a6620()*-0.0692788);
}

double NNfunction_sb_uLdR::synapse0x12b18a0() {
   return (neuron0x12a6960()*-0.445032);
}

double NNfunction_sb_uLdR::synapse0x12b18e0() {
   return (neuron0x12a6ec0()*-0.298629);
}

double NNfunction_sb_uLdR::synapse0x12b1f60() {
   return (neuron0x12a70e0()*0.262386);
}

double NNfunction_sb_uLdR::synapse0x12b1fa0() {
   return (neuron0x12a7420()*-0.139548);
}

double NNfunction_sb_uLdR::synapse0x12b1fe0() {
   return (neuron0x12a7760()*0.231803);
}

double NNfunction_sb_uLdR::synapse0x12b2020() {
   return (neuron0x12a7aa0()*-0.0451596);
}

double NNfunction_sb_uLdR::synapse0x12b2060() {
   return (neuron0x12a7de0()*0.311967);
}

double NNfunction_sb_uLdR::synapse0x12b20a0() {
   return (neuron0x12a8120()*-0.117362);
}

double NNfunction_sb_uLdR::synapse0x12b2420() {
   return (neuron0x12a3560()*0.293349);
}

double NNfunction_sb_uLdR::synapse0x12a3780() {
   return (neuron0x12a38a0()*-0.0173833);
}

double NNfunction_sb_uLdR::synapse0x12a37c0() {
   return (neuron0x12a3be0()*0.146141);
}

double NNfunction_sb_uLdR::synapse0x12a3ac0() {
   return (neuron0x12a3f20()*0.657213);
}

double NNfunction_sb_uLdR::synapse0x12a3b00() {
   return (neuron0x12a4260()*0.0462132);
}

double NNfunction_sb_uLdR::synapse0x12a3e00() {
   return (neuron0x12a45a0()*-0.251568);
}

double NNfunction_sb_uLdR::synapse0x12a3e40() {
   return (neuron0x12a48e0()*0.0985601);
}

double NNfunction_sb_uLdR::synapse0x12a4140() {
   return (neuron0x12a4c20()*-0.286464);
}

double NNfunction_sb_uLdR::synapse0x12a4180() {
   return (neuron0x12a4f60()*0.170854);
}

double NNfunction_sb_uLdR::synapse0x12a4480() {
   return (neuron0x12a52a0()*0.215995);
}

double NNfunction_sb_uLdR::synapse0x12a44c0() {
   return (neuron0x12a55e0()*-0.0471949);
}

double NNfunction_sb_uLdR::synapse0x12a47c0() {
   return (neuron0x12a5920()*0.355251);
}

double NNfunction_sb_uLdR::synapse0x12a4800() {
   return (neuron0x12a5c60()*0.420917);
}

double NNfunction_sb_uLdR::synapse0x12a4b00() {
   return (neuron0x12a5fa0()*0.677925);
}

double NNfunction_sb_uLdR::synapse0x12a4b40() {
   return (neuron0x12a62e0()*-0.217817);
}

double NNfunction_sb_uLdR::synapse0x12a4e40() {
   return (neuron0x12a6620()*-0.368114);
}

double NNfunction_sb_uLdR::synapse0x12a4e80() {
   return (neuron0x12a6960()*-0.272315);
}

double NNfunction_sb_uLdR::synapse0x12a5180() {
   return (neuron0x12a6ec0()*0.438831);
}

double NNfunction_sb_uLdR::synapse0x12a51c0() {
   return (neuron0x12a70e0()*-0.228025);
}

double NNfunction_sb_uLdR::synapse0x12a54c0() {
   return (neuron0x12a7420()*0.341035);
}

double NNfunction_sb_uLdR::synapse0x12a5500() {
   return (neuron0x12a7760()*0.131328);
}

double NNfunction_sb_uLdR::synapse0x12a5800() {
   return (neuron0x12a7aa0()*-0.118809);
}

double NNfunction_sb_uLdR::synapse0x12a5840() {
   return (neuron0x12a7de0()*0.315169);
}

double NNfunction_sb_uLdR::synapse0x12a5b40() {
   return (neuron0x12a8120()*0.313894);
}

double NNfunction_sb_uLdR::synapse0x12a5b80() {
   return (neuron0x12a3560()*0.51119);
}

double NNfunction_sb_uLdR::synapse0x12a6840() {
   return (neuron0x12a38a0()*-0.287762);
}

double NNfunction_sb_uLdR::synapse0x12a6880() {
   return (neuron0x12a3be0()*-0.318598);
}

double NNfunction_sb_uLdR::synapse0x12b2270() {
   return (neuron0x12a3f20()*0.214055);
}

double NNfunction_sb_uLdR::synapse0x12b22b0() {
   return (neuron0x12a4260()*0.12999);
}

double NNfunction_sb_uLdR::synapse0x12a6b80() {
   return (neuron0x12a45a0()*0.000444783);
}

double NNfunction_sb_uLdR::synapse0x12a6bc0() {
   return (neuron0x12a48e0()*-0.333046);
}

double NNfunction_sb_uLdR::synapse0x1054b50() {
   return (neuron0x12a4c20()*-0.0539866);
}

double NNfunction_sb_uLdR::synapse0x1054b90() {
   return (neuron0x12a4f60()*0.603134);
}

double NNfunction_sb_uLdR::synapse0x12a7300() {
   return (neuron0x12a52a0()*0.233666);
}

double NNfunction_sb_uLdR::synapse0x12a7340() {
   return (neuron0x12a55e0()*0.709203);
}

double NNfunction_sb_uLdR::synapse0x12a7640() {
   return (neuron0x12a5920()*0.668392);
}

double NNfunction_sb_uLdR::synapse0x12a7680() {
   return (neuron0x12a5c60()*0.704697);
}

double NNfunction_sb_uLdR::synapse0x12a7980() {
   return (neuron0x12a5fa0()*-0.117943);
}

double NNfunction_sb_uLdR::synapse0x12a79c0() {
   return (neuron0x12a62e0()*0.0149162);
}

double NNfunction_sb_uLdR::synapse0x12a7cc0() {
   return (neuron0x12a6620()*-0.54536);
}

double NNfunction_sb_uLdR::synapse0x12a7d00() {
   return (neuron0x12a6960()*0.628937);
}

double NNfunction_sb_uLdR::synapse0x12a8000() {
   return (neuron0x12a6ec0()*-0.263847);
}

double NNfunction_sb_uLdR::synapse0x12a8040() {
   return (neuron0x12a70e0()*0.0330718);
}

double NNfunction_sb_uLdR::synapse0x12a8340() {
   return (neuron0x12a7420()*-0.113774);
}

double NNfunction_sb_uLdR::synapse0x12a8380() {
   return (neuron0x12a7760()*0.187954);
}

double NNfunction_sb_uLdR::synapse0x12a5e80() {
   return (neuron0x12a7aa0()*0.0348167);
}

double NNfunction_sb_uLdR::synapse0x12a5ec0() {
   return (neuron0x12a7de0()*-0.268296);
}

double NNfunction_sb_uLdR::synapse0x12b4190() {
   return (neuron0x12a8120()*-0.279983);
}

double NNfunction_sb_uLdR::synapse0x12b4510() {
   return (neuron0x12a3560()*-0.000923592);
}

double NNfunction_sb_uLdR::synapse0x12b4550() {
   return (neuron0x12a38a0()*-0.00326392);
}

double NNfunction_sb_uLdR::synapse0x12b4590() {
   return (neuron0x12a3be0()*0.00362728);
}

double NNfunction_sb_uLdR::synapse0x12b45d0() {
   return (neuron0x12a3f20()*-15.3856);
}

double NNfunction_sb_uLdR::synapse0x12b4610() {
   return (neuron0x12a4260()*0.0172103);
}

double NNfunction_sb_uLdR::synapse0x12b4650() {
   return (neuron0x12a45a0()*-0.021071);
}

double NNfunction_sb_uLdR::synapse0x12b4690() {
   return (neuron0x12a48e0()*0.00207552);
}

double NNfunction_sb_uLdR::synapse0x12b46d0() {
   return (neuron0x12a4c20()*-0.0323741);
}

double NNfunction_sb_uLdR::synapse0x12b4710() {
   return (neuron0x12a4f60()*0.0145173);
}

double NNfunction_sb_uLdR::synapse0x12b4750() {
   return (neuron0x12a52a0()*-0.00222034);
}

double NNfunction_sb_uLdR::synapse0x12b4790() {
   return (neuron0x12a55e0()*-0.0118222);
}

double NNfunction_sb_uLdR::synapse0x12b47d0() {
   return (neuron0x12a5920()*0.0443315);
}

double NNfunction_sb_uLdR::synapse0x12b4810() {
   return (neuron0x12a5c60()*-0.000271354);
}

double NNfunction_sb_uLdR::synapse0x12b4850() {
   return (neuron0x12a5fa0()*0.0100285);
}

double NNfunction_sb_uLdR::synapse0x12b4890() {
   return (neuron0x12a62e0()*-0.00597876);
}

double NNfunction_sb_uLdR::synapse0x12b48d0() {
   return (neuron0x12a6620()*0.0601291);
}

double NNfunction_sb_uLdR::synapse0x12b4360() {
   return (neuron0x12a6960()*-0.0516758);
}

double NNfunction_sb_uLdR::synapse0x12b43a0() {
   return (neuron0x12a6ec0()*-0.00966591);
}

double NNfunction_sb_uLdR::synapse0x12b4a20() {
   return (neuron0x12a70e0()*0.0742086);
}

double NNfunction_sb_uLdR::synapse0x12b4a60() {
   return (neuron0x12a7420()*0.0110654);
}

double NNfunction_sb_uLdR::synapse0x12b4aa0() {
   return (neuron0x12a7760()*-0.0324527);
}

double NNfunction_sb_uLdR::synapse0x12b4ae0() {
   return (neuron0x12a7aa0()*0.0179386);
}

double NNfunction_sb_uLdR::synapse0x12b4b20() {
   return (neuron0x12a7de0()*-0.0119736);
}

double NNfunction_sb_uLdR::synapse0x12b4b60() {
   return (neuron0x12a8120()*-0.0488983);
}

double NNfunction_sb_uLdR::synapse0x12b4ee0() {
   return (neuron0x12a3560()*0.00419891);
}

double NNfunction_sb_uLdR::synapse0x12b4f20() {
   return (neuron0x12a38a0()*-0.0172351);
}

double NNfunction_sb_uLdR::synapse0x12b4f60() {
   return (neuron0x12a3be0()*-0.00773066);
}

double NNfunction_sb_uLdR::synapse0x12b4fa0() {
   return (neuron0x12a3f20()*0.316158);
}

double NNfunction_sb_uLdR::synapse0x12b4fe0() {
   return (neuron0x12a4260()*-0.00394523);
}

double NNfunction_sb_uLdR::synapse0x12b5020() {
   return (neuron0x12a45a0()*-0.00098667);
}

double NNfunction_sb_uLdR::synapse0x12b5060() {
   return (neuron0x12a48e0()*-0.000801291);
}

double NNfunction_sb_uLdR::synapse0x12b50a0() {
   return (neuron0x12a4c20()*-0.0160933);
}

double NNfunction_sb_uLdR::synapse0x12b50e0() {
   return (neuron0x12a4f60()*-0.00925939);
}

double NNfunction_sb_uLdR::synapse0x12b5120() {
   return (neuron0x12a52a0()*0.0219292);
}

double NNfunction_sb_uLdR::synapse0x12b5160() {
   return (neuron0x12a55e0()*0.00203812);
}

double NNfunction_sb_uLdR::synapse0x12b51a0() {
   return (neuron0x12a5920()*-1.27984);
}

double NNfunction_sb_uLdR::synapse0x12b51e0() {
   return (neuron0x12a5c60()*-0.0362945);
}

double NNfunction_sb_uLdR::synapse0x12b5220() {
   return (neuron0x12a5fa0()*0.00907625);
}

double NNfunction_sb_uLdR::synapse0x12b5260() {
   return (neuron0x12a62e0()*-0.0143587);
}

double NNfunction_sb_uLdR::synapse0x12b52a0() {
   return (neuron0x12a6620()*-0.0133713);
}

double NNfunction_sb_uLdR::synapse0x12b4d30() {
   return (neuron0x12a6960()*0.0118289);
}

double NNfunction_sb_uLdR::synapse0x12b4d70() {
   return (neuron0x12a6ec0()*0.382498);
}

double NNfunction_sb_uLdR::synapse0x12b53f0() {
   return (neuron0x12a70e0()*0.0159579);
}

double NNfunction_sb_uLdR::synapse0x12b5430() {
   return (neuron0x12a7420()*-0.0188605);
}

double NNfunction_sb_uLdR::synapse0x12b5470() {
   return (neuron0x12a7760()*-0.00403479);
}

double NNfunction_sb_uLdR::synapse0x12b54b0() {
   return (neuron0x12a7aa0()*-0.00997346);
}

double NNfunction_sb_uLdR::synapse0x12b54f0() {
   return (neuron0x12a7de0()*0.008629);
}

double NNfunction_sb_uLdR::synapse0x12b5530() {
   return (neuron0x12a8120()*0.00646995);
}

double NNfunction_sb_uLdR::synapse0x12b58b0() {
   return (neuron0x12a3560()*0.0460901);
}

double NNfunction_sb_uLdR::synapse0x12b58f0() {
   return (neuron0x12a38a0()*0.00745198);
}

double NNfunction_sb_uLdR::synapse0x12b5930() {
   return (neuron0x12a3be0()*0.0465266);
}

double NNfunction_sb_uLdR::synapse0x12b5970() {
   return (neuron0x12a3f20()*-0.692804);
}

double NNfunction_sb_uLdR::synapse0x12b59b0() {
   return (neuron0x12a4260()*0.00218321);
}

double NNfunction_sb_uLdR::synapse0x12b59f0() {
   return (neuron0x12a45a0()*0.026197);
}

double NNfunction_sb_uLdR::synapse0x12b5a30() {
   return (neuron0x12a48e0()*0.0097103);
}

double NNfunction_sb_uLdR::synapse0x12b5a70() {
   return (neuron0x12a4c20()*-0.0073143);
}

double NNfunction_sb_uLdR::synapse0x12b5ab0() {
   return (neuron0x12a4f60()*0.00733304);
}

double NNfunction_sb_uLdR::synapse0x12b5af0() {
   return (neuron0x12a52a0()*-0.0216791);
}

double NNfunction_sb_uLdR::synapse0x12b5b30() {
   return (neuron0x12a55e0()*0.0181124);
}

double NNfunction_sb_uLdR::synapse0x12b5b70() {
   return (neuron0x12a5920()*3.72198);
}

double NNfunction_sb_uLdR::synapse0x12b5bb0() {
   return (neuron0x12a5c60()*0.0657354);
}

double NNfunction_sb_uLdR::synapse0x12b5bf0() {
   return (neuron0x12a5fa0()*-0.0481718);
}

double NNfunction_sb_uLdR::synapse0x12b5c30() {
   return (neuron0x12a62e0()*0.0580385);
}

double NNfunction_sb_uLdR::synapse0x12b5c70() {
   return (neuron0x12a6620()*-0.0136712);
}

double NNfunction_sb_uLdR::synapse0x12b5700() {
   return (neuron0x12a6960()*0.0363598);
}

double NNfunction_sb_uLdR::synapse0x12b5740() {
   return (neuron0x12a6ec0()*-0.0291694);
}

double NNfunction_sb_uLdR::synapse0x12b5dc0() {
   return (neuron0x12a70e0()*-0.0954631);
}

double NNfunction_sb_uLdR::synapse0x12b5e00() {
   return (neuron0x12a7420()*-0.108053);
}

double NNfunction_sb_uLdR::synapse0x12b5e40() {
   return (neuron0x12a7760()*-0.0424761);
}

double NNfunction_sb_uLdR::synapse0x12b5e80() {
   return (neuron0x12a7aa0()*0.00196511);
}

double NNfunction_sb_uLdR::synapse0x12b5ec0() {
   return (neuron0x12a7de0()*0.0462259);
}

double NNfunction_sb_uLdR::synapse0x12b5f00() {
   return (neuron0x12a8120()*-0.00960062);
}

double NNfunction_sb_uLdR::synapse0x12b6280() {
   return (neuron0x12a3560()*-0.0097023);
}

double NNfunction_sb_uLdR::synapse0x12b62c0() {
   return (neuron0x12a38a0()*0.00716828);
}

double NNfunction_sb_uLdR::synapse0x12b6300() {
   return (neuron0x12a3be0()*0.0319924);
}

double NNfunction_sb_uLdR::synapse0x12b6340() {
   return (neuron0x12a3f20()*-0.314852);
}

double NNfunction_sb_uLdR::synapse0x12b6380() {
   return (neuron0x12a4260()*0.0217037);
}

double NNfunction_sb_uLdR::synapse0x12b63c0() {
   return (neuron0x12a45a0()*-0.0265399);
}

double NNfunction_sb_uLdR::synapse0x12b6400() {
   return (neuron0x12a48e0()*-0.0515031);
}

double NNfunction_sb_uLdR::synapse0x12b6440() {
   return (neuron0x12a4c20()*-0.0979822);
}

double NNfunction_sb_uLdR::synapse0x12b6480() {
   return (neuron0x12a4f60()*0.0556252);
}

double NNfunction_sb_uLdR::synapse0x12b64c0() {
   return (neuron0x12a52a0()*-0.140024);
}

double NNfunction_sb_uLdR::synapse0x12b6500() {
   return (neuron0x12a55e0()*0.228929);
}

double NNfunction_sb_uLdR::synapse0x12b6540() {
   return (neuron0x12a5920()*-0.79847);
}

double NNfunction_sb_uLdR::synapse0x12b6580() {
   return (neuron0x12a5c60()*-0.201459);
}

double NNfunction_sb_uLdR::synapse0x12b65c0() {
   return (neuron0x12a5fa0()*-0.229984);
}

double NNfunction_sb_uLdR::synapse0x12b6600() {
   return (neuron0x12a62e0()*0.0392084);
}

double NNfunction_sb_uLdR::synapse0x12b6640() {
   return (neuron0x12a6620()*-0.0804181);
}

double NNfunction_sb_uLdR::synapse0x12b60d0() {
   return (neuron0x12a6960()*-0.0691813);
}

double NNfunction_sb_uLdR::synapse0x12b6110() {
   return (neuron0x12a6ec0()*-0.781916);
}

double NNfunction_sb_uLdR::synapse0x12b6790() {
   return (neuron0x12a70e0()*-0.439104);
}

double NNfunction_sb_uLdR::synapse0x12b67d0() {
   return (neuron0x12a7420()*-0.0845129);
}

double NNfunction_sb_uLdR::synapse0x12b6810() {
   return (neuron0x12a7760()*0.0348344);
}

double NNfunction_sb_uLdR::synapse0x12b6850() {
   return (neuron0x12a7aa0()*-0.0334347);
}

double NNfunction_sb_uLdR::synapse0x12b6890() {
   return (neuron0x12a7de0()*0.00292851);
}

double NNfunction_sb_uLdR::synapse0x12b68d0() {
   return (neuron0x12a8120()*0.102992);
}

double NNfunction_sb_uLdR::synapse0x12b6c50() {
   return (neuron0x12a3560()*-0.0486483);
}

double NNfunction_sb_uLdR::synapse0x12b6c90() {
   return (neuron0x12a38a0()*-0.625783);
}

double NNfunction_sb_uLdR::synapse0x12b6cd0() {
   return (neuron0x12a3be0()*-0.331155);
}

double NNfunction_sb_uLdR::synapse0x12b6d10() {
   return (neuron0x12a3f20()*-0.075786);
}

double NNfunction_sb_uLdR::synapse0x12b6d50() {
   return (neuron0x12a4260()*0.0494902);
}

double NNfunction_sb_uLdR::synapse0x12b6d90() {
   return (neuron0x12a45a0()*-0.302433);
}

double NNfunction_sb_uLdR::synapse0x12b6dd0() {
   return (neuron0x12a48e0()*-0.370589);
}

double NNfunction_sb_uLdR::synapse0x12b6e10() {
   return (neuron0x12a4c20()*-0.215973);
}

double NNfunction_sb_uLdR::synapse0x12b6e50() {
   return (neuron0x12a4f60()*-0.157465);
}

double NNfunction_sb_uLdR::synapse0x12af010() {
   return (neuron0x12a52a0()*0.100979);
}

double NNfunction_sb_uLdR::synapse0x12af050() {
   return (neuron0x12a55e0()*-0.49766);
}

double NNfunction_sb_uLdR::synapse0x12af090() {
   return (neuron0x12a5920()*0.348488);
}

double NNfunction_sb_uLdR::synapse0x12af0d0() {
   return (neuron0x12a5c60()*0.282341);
}

double NNfunction_sb_uLdR::synapse0x12af110() {
   return (neuron0x12a5fa0()*0.0109245);
}

double NNfunction_sb_uLdR::synapse0x12af150() {
   return (neuron0x12a62e0()*-1.10679);
}

double NNfunction_sb_uLdR::synapse0x12af190() {
   return (neuron0x12a6620()*0.649361);
}

double NNfunction_sb_uLdR::synapse0x12b6aa0() {
   return (neuron0x12a6960()*-0.0198882);
}

double NNfunction_sb_uLdR::synapse0x12b6ae0() {
   return (neuron0x12a6ec0()*0.379831);
}

double NNfunction_sb_uLdR::synapse0x12af2e0() {
   return (neuron0x12a70e0()*0.55237);
}

double NNfunction_sb_uLdR::synapse0x12af320() {
   return (neuron0x12a7420()*-0.0926636);
}

double NNfunction_sb_uLdR::synapse0x12af360() {
   return (neuron0x12a7760()*0.00838005);
}

double NNfunction_sb_uLdR::synapse0x12af3a0() {
   return (neuron0x12a7aa0()*0.261074);
}

double NNfunction_sb_uLdR::synapse0x12af3e0() {
   return (neuron0x12a7de0()*-0.172057);
}

double NNfunction_sb_uLdR::synapse0x12af420() {
   return (neuron0x12a8120()*-0.82675);
}

double NNfunction_sb_uLdR::synapse0x12af7a0() {
   return (neuron0x12a3560()*0.0662066);
}

double NNfunction_sb_uLdR::synapse0x12af7e0() {
   return (neuron0x12a38a0()*0.354893);
}

double NNfunction_sb_uLdR::synapse0x12af820() {
   return (neuron0x12a3be0()*0.0401204);
}

double NNfunction_sb_uLdR::synapse0x12af860() {
   return (neuron0x12a3f20()*0.0945044);
}

double NNfunction_sb_uLdR::synapse0x12af8a0() {
   return (neuron0x12a4260()*-0.328338);
}

double NNfunction_sb_uLdR::synapse0x12af8e0() {
   return (neuron0x12a45a0()*0.268286);
}

double NNfunction_sb_uLdR::synapse0x12af920() {
   return (neuron0x12a48e0()*-0.363758);
}

double NNfunction_sb_uLdR::synapse0x12af960() {
   return (neuron0x12a4c20()*-0.21391);
}

double NNfunction_sb_uLdR::synapse0x12af9a0() {
   return (neuron0x12a4f60()*0.141104);
}

double NNfunction_sb_uLdR::synapse0x12af9e0() {
   return (neuron0x12a52a0()*-0.0647978);
}

double NNfunction_sb_uLdR::synapse0x12afa20() {
   return (neuron0x12a55e0()*0.0758398);
}

double NNfunction_sb_uLdR::synapse0x12afa60() {
   return (neuron0x12a5920()*-0.196132);
}

double NNfunction_sb_uLdR::synapse0x12afaa0() {
   return (neuron0x12a5c60()*-0.0128015);
}

double NNfunction_sb_uLdR::synapse0x12afae0() {
   return (neuron0x12a5fa0()*0.0454);
}

double NNfunction_sb_uLdR::synapse0x12afb20() {
   return (neuron0x12a62e0()*-0.345746);
}

double NNfunction_sb_uLdR::synapse0x12afb60() {
   return (neuron0x12a6620()*0.317761);
}

double NNfunction_sb_uLdR::synapse0x12af5f0() {
   return (neuron0x12a6960()*-0.307987);
}

double NNfunction_sb_uLdR::synapse0x12af630() {
   return (neuron0x12a6ec0()*-0.150764);
}

double NNfunction_sb_uLdR::synapse0x12afcb0() {
   return (neuron0x12a70e0()*-0.157475);
}

double NNfunction_sb_uLdR::synapse0x12afcf0() {
   return (neuron0x12a7420()*0.120531);
}

double NNfunction_sb_uLdR::synapse0x12afd30() {
   return (neuron0x12a7760()*-0.186005);
}

double NNfunction_sb_uLdR::synapse0x12afd70() {
   return (neuron0x12a7aa0()*0.0645574);
}

double NNfunction_sb_uLdR::synapse0x12afdb0() {
   return (neuron0x12a7de0()*-0.104352);
}

double NNfunction_sb_uLdR::synapse0x12afdf0() {
   return (neuron0x12a8120()*-0.100475);
}

double NNfunction_sb_uLdR::synapse0x12affc0() {
   return (neuron0x12a3560()*0.482084);
}

double NNfunction_sb_uLdR::synapse0x12b9050() {
   return (neuron0x12a38a0()*-0.279448);
}

double NNfunction_sb_uLdR::synapse0x12b9090() {
   return (neuron0x12a3be0()*0.273466);
}

double NNfunction_sb_uLdR::synapse0x12b90d0() {
   return (neuron0x12a3f20()*-0.030977);
}

double NNfunction_sb_uLdR::synapse0x12b9110() {
   return (neuron0x12a4260()*0.208699);
}

double NNfunction_sb_uLdR::synapse0x12b9150() {
   return (neuron0x12a45a0()*-0.521769);
}

double NNfunction_sb_uLdR::synapse0x12b9190() {
   return (neuron0x12a48e0()*0.19257);
}

double NNfunction_sb_uLdR::synapse0x12b91d0() {
   return (neuron0x12a4c20()*0.650226);
}

double NNfunction_sb_uLdR::synapse0x12b9210() {
   return (neuron0x12a4f60()*-0.801809);
}

double NNfunction_sb_uLdR::synapse0x12b9250() {
   return (neuron0x12a52a0()*-0.337692);
}

double NNfunction_sb_uLdR::synapse0x12b9290() {
   return (neuron0x12a55e0()*0.145866);
}

double NNfunction_sb_uLdR::synapse0x12b92d0() {
   return (neuron0x12a5920()*-0.245606);
}

double NNfunction_sb_uLdR::synapse0x12b9310() {
   return (neuron0x12a5c60()*0.700789);
}

double NNfunction_sb_uLdR::synapse0x12b9350() {
   return (neuron0x12a5fa0()*0.357869);
}

double NNfunction_sb_uLdR::synapse0x12b9390() {
   return (neuron0x12a62e0()*-0.113389);
}

double NNfunction_sb_uLdR::synapse0x12b93d0() {
   return (neuron0x12a6620()*0.38765);
}

double NNfunction_sb_uLdR::synapse0x12b8ea0() {
   return (neuron0x12a6960()*-0.207387);
}

double NNfunction_sb_uLdR::synapse0x12b8ee0() {
   return (neuron0x12a6ec0()*-0.531264);
}

double NNfunction_sb_uLdR::synapse0x12b9520() {
   return (neuron0x12a70e0()*-0.630338);
}

double NNfunction_sb_uLdR::synapse0x12b9560() {
   return (neuron0x12a7420()*0.0145998);
}

double NNfunction_sb_uLdR::synapse0x12b95a0() {
   return (neuron0x12a7760()*-0.00713256);
}

double NNfunction_sb_uLdR::synapse0x12b95e0() {
   return (neuron0x12a7aa0()*-0.0104981);
}

double NNfunction_sb_uLdR::synapse0x12b9620() {
   return (neuron0x12a7de0()*-0.200567);
}

double NNfunction_sb_uLdR::synapse0x12b9660() {
   return (neuron0x12a8120()*-0.0918618);
}

double NNfunction_sb_uLdR::synapse0x12b99e0() {
   return (neuron0x12a3560()*0.291476);
}

double NNfunction_sb_uLdR::synapse0x12b9a20() {
   return (neuron0x12a38a0()*0.276922);
}

double NNfunction_sb_uLdR::synapse0x12b9a60() {
   return (neuron0x12a3be0()*0.55546);
}

double NNfunction_sb_uLdR::synapse0x12b9aa0() {
   return (neuron0x12a3f20()*0.0354253);
}

double NNfunction_sb_uLdR::synapse0x12b9ae0() {
   return (neuron0x12a4260()*-0.0469224);
}

double NNfunction_sb_uLdR::synapse0x12b9b20() {
   return (neuron0x12a45a0()*0.225591);
}

double NNfunction_sb_uLdR::synapse0x12b9b60() {
   return (neuron0x12a48e0()*-0.111319);
}

double NNfunction_sb_uLdR::synapse0x12b9ba0() {
   return (neuron0x12a4c20()*0.210841);
}

double NNfunction_sb_uLdR::synapse0x12b9be0() {
   return (neuron0x12a4f60()*0.0644158);
}

double NNfunction_sb_uLdR::synapse0x12b9c20() {
   return (neuron0x12a52a0()*-0.402085);
}

double NNfunction_sb_uLdR::synapse0x12b9c60() {
   return (neuron0x12a55e0()*-0.0194719);
}

double NNfunction_sb_uLdR::synapse0x12b9ca0() {
   return (neuron0x12a5920()*0.431776);
}

double NNfunction_sb_uLdR::synapse0x12b9ce0() {
   return (neuron0x12a5c60()*-0.376943);
}

double NNfunction_sb_uLdR::synapse0x12b9d20() {
   return (neuron0x12a5fa0()*0.444989);
}

double NNfunction_sb_uLdR::synapse0x12b9d60() {
   return (neuron0x12a62e0()*0.043097);
}

double NNfunction_sb_uLdR::synapse0x12b9da0() {
   return (neuron0x12a6620()*-1.1593);
}

double NNfunction_sb_uLdR::synapse0x12b9830() {
   return (neuron0x12a6960()*0.266117);
}

double NNfunction_sb_uLdR::synapse0x12b9870() {
   return (neuron0x12a6ec0()*0.265338);
}

double NNfunction_sb_uLdR::synapse0x12b9ef0() {
   return (neuron0x12a70e0()*-0.0655627);
}

double NNfunction_sb_uLdR::synapse0x12b9f30() {
   return (neuron0x12a7420()*-0.135863);
}

double NNfunction_sb_uLdR::synapse0x12b9f70() {
   return (neuron0x12a7760()*-0.516328);
}

double NNfunction_sb_uLdR::synapse0x12b9fb0() {
   return (neuron0x12a7aa0()*-0.52177);
}

double NNfunction_sb_uLdR::synapse0x12b9ff0() {
   return (neuron0x12a7de0()*0.244145);
}

double NNfunction_sb_uLdR::synapse0x12ba030() {
   return (neuron0x12a8120()*-0.416684);
}

double NNfunction_sb_uLdR::synapse0x12ba3b0() {
   return (neuron0x12a3560()*0.201449);
}

double NNfunction_sb_uLdR::synapse0x12ba3f0() {
   return (neuron0x12a38a0()*-0.0179692);
}

double NNfunction_sb_uLdR::synapse0x12ba430() {
   return (neuron0x12a3be0()*-0.0556419);
}

double NNfunction_sb_uLdR::synapse0x12ba470() {
   return (neuron0x12a3f20()*0.004621);
}

double NNfunction_sb_uLdR::synapse0x12ba4b0() {
   return (neuron0x12a4260()*0.207291);
}

double NNfunction_sb_uLdR::synapse0x12ba4f0() {
   return (neuron0x12a45a0()*0.00654034);
}

double NNfunction_sb_uLdR::synapse0x12ba530() {
   return (neuron0x12a48e0()*-0.449086);
}

double NNfunction_sb_uLdR::synapse0x12ba570() {
   return (neuron0x12a4c20()*0.181142);
}

double NNfunction_sb_uLdR::synapse0x12ba5b0() {
   return (neuron0x12a4f60()*0.478215);
}

double NNfunction_sb_uLdR::synapse0x12ba5f0() {
   return (neuron0x12a52a0()*-0.12046);
}

double NNfunction_sb_uLdR::synapse0x12ba630() {
   return (neuron0x12a55e0()*0.400813);
}

double NNfunction_sb_uLdR::synapse0x12ba670() {
   return (neuron0x12a5920()*-1.30264);
}

double NNfunction_sb_uLdR::synapse0x12ba6b0() {
   return (neuron0x12a5c60()*0.582343);
}

double NNfunction_sb_uLdR::synapse0x12ba6f0() {
   return (neuron0x12a5fa0()*0.292904);
}

double NNfunction_sb_uLdR::synapse0x12ba730() {
   return (neuron0x12a62e0()*-0.149977);
}

double NNfunction_sb_uLdR::synapse0x12ba770() {
   return (neuron0x12a6620()*-0.0280341);
}

double NNfunction_sb_uLdR::synapse0x12ba200() {
   return (neuron0x12a6960()*0.0904557);
}

double NNfunction_sb_uLdR::synapse0x12ba240() {
   return (neuron0x12a6ec0()*-0.440319);
}

double NNfunction_sb_uLdR::synapse0x12ba8c0() {
   return (neuron0x12a70e0()*0.22216);
}

double NNfunction_sb_uLdR::synapse0x12ba900() {
   return (neuron0x12a7420()*-0.138904);
}

double NNfunction_sb_uLdR::synapse0x12ba940() {
   return (neuron0x12a7760()*0.48835);
}

double NNfunction_sb_uLdR::synapse0x12ba980() {
   return (neuron0x12a7aa0()*-0.469867);
}

double NNfunction_sb_uLdR::synapse0x12ba9c0() {
   return (neuron0x12a7de0()*0.115607);
}

double NNfunction_sb_uLdR::synapse0x12baa00() {
   return (neuron0x12a8120()*-0.0718242);
}

double NNfunction_sb_uLdR::synapse0x12bad80() {
   return (neuron0x12a3560()*0.00958344);
}

double NNfunction_sb_uLdR::synapse0x12badc0() {
   return (neuron0x12a38a0()*0.000126635);
}

double NNfunction_sb_uLdR::synapse0x12bae00() {
   return (neuron0x12a3be0()*0.00359918);
}

double NNfunction_sb_uLdR::synapse0x12bae40() {
   return (neuron0x12a3f20()*0.948611);
}

double NNfunction_sb_uLdR::synapse0x12bae80() {
   return (neuron0x12a4260()*-0.0228668);
}

double NNfunction_sb_uLdR::synapse0x12baec0() {
   return (neuron0x12a45a0()*-0.00512663);
}

double NNfunction_sb_uLdR::synapse0x12baf00() {
   return (neuron0x12a48e0()*0.0335838);
}

double NNfunction_sb_uLdR::synapse0x12baf40() {
   return (neuron0x12a4c20()*0.0398088);
}

double NNfunction_sb_uLdR::synapse0x12baf80() {
   return (neuron0x12a4f60()*-0.0144766);
}

double NNfunction_sb_uLdR::synapse0x12bafc0() {
   return (neuron0x12a52a0()*-0.00222763);
}

double NNfunction_sb_uLdR::synapse0x12bb000() {
   return (neuron0x12a55e0()*-0.0159731);
}

double NNfunction_sb_uLdR::synapse0x12bb040() {
   return (neuron0x12a5920()*0.101567);
}

double NNfunction_sb_uLdR::synapse0x12bb080() {
   return (neuron0x12a5c60()*0.05302);
}

double NNfunction_sb_uLdR::synapse0x12bb0c0() {
   return (neuron0x12a5fa0()*0.0105748);
}

double NNfunction_sb_uLdR::synapse0x12bb100() {
   return (neuron0x12a62e0()*0.0228288);
}

double NNfunction_sb_uLdR::synapse0x12bb140() {
   return (neuron0x12a6620()*0.0615052);
}

double NNfunction_sb_uLdR::synapse0x12babd0() {
   return (neuron0x12a6960()*-0.00956787);
}

double NNfunction_sb_uLdR::synapse0x12bac10() {
   return (neuron0x12a6ec0()*0.266901);
}

double NNfunction_sb_uLdR::synapse0x12bb290() {
   return (neuron0x12a70e0()*0.0205722);
}

double NNfunction_sb_uLdR::synapse0x12bb2d0() {
   return (neuron0x12a7420()*0.003767);
}

double NNfunction_sb_uLdR::synapse0x12bb310() {
   return (neuron0x12a7760()*-0.0263961);
}

double NNfunction_sb_uLdR::synapse0x12bb350() {
   return (neuron0x12a7aa0()*-0.00103288);
}

double NNfunction_sb_uLdR::synapse0x12bb390() {
   return (neuron0x12a7de0()*0.00471835);
}

double NNfunction_sb_uLdR::synapse0x12bb3d0() {
   return (neuron0x12a8120()*0.00101489);
}

double NNfunction_sb_uLdR::synapse0x12bb750() {
   return (neuron0x12a3560()*-0.00962298);
}

double NNfunction_sb_uLdR::synapse0x12bb790() {
   return (neuron0x12a38a0()*-0.0123523);
}

double NNfunction_sb_uLdR::synapse0x12bb7d0() {
   return (neuron0x12a3be0()*-0.0115083);
}

double NNfunction_sb_uLdR::synapse0x12bb810() {
   return (neuron0x12a3f20()*9.75476);
}

double NNfunction_sb_uLdR::synapse0x12bb850() {
   return (neuron0x12a4260()*-0.00714421);
}

double NNfunction_sb_uLdR::synapse0x12bb890() {
   return (neuron0x12a45a0()*0.0201003);
}

double NNfunction_sb_uLdR::synapse0x12bb8d0() {
   return (neuron0x12a48e0()*-0.0336464);
}

double NNfunction_sb_uLdR::synapse0x12bb910() {
   return (neuron0x12a4c20()*0.0152695);
}

double NNfunction_sb_uLdR::synapse0x12bb950() {
   return (neuron0x12a4f60()*0.00443186);
}

double NNfunction_sb_uLdR::synapse0x12bb990() {
   return (neuron0x12a52a0()*0.00417747);
}

double NNfunction_sb_uLdR::synapse0x12bb9d0() {
   return (neuron0x12a55e0()*0.0271702);
}

double NNfunction_sb_uLdR::synapse0x12bba10() {
   return (neuron0x12a5920()*0.203523);
}

double NNfunction_sb_uLdR::synapse0x12bba50() {
   return (neuron0x12a5c60()*-0.00583748);
}

double NNfunction_sb_uLdR::synapse0x12bba90() {
   return (neuron0x12a5fa0()*-0.00257679);
}

double NNfunction_sb_uLdR::synapse0x12bbad0() {
   return (neuron0x12a62e0()*0.00993333);
}

double NNfunction_sb_uLdR::synapse0x12bbb10() {
   return (neuron0x12a6620()*-0.0498495);
}

double NNfunction_sb_uLdR::synapse0x12bb5a0() {
   return (neuron0x12a6960()*0.0448058);
}

double NNfunction_sb_uLdR::synapse0x12bb5e0() {
   return (neuron0x12a6ec0()*0.345322);
}

double NNfunction_sb_uLdR::synapse0x12bbc60() {
   return (neuron0x12a70e0()*-0.0552954);
}

double NNfunction_sb_uLdR::synapse0x12bbca0() {
   return (neuron0x12a7420()*0.00872506);
}

double NNfunction_sb_uLdR::synapse0x12bbce0() {
   return (neuron0x12a7760()*0.0229793);
}

double NNfunction_sb_uLdR::synapse0x12bbd20() {
   return (neuron0x12a7aa0()*-0.0191463);
}

double NNfunction_sb_uLdR::synapse0x12bbd60() {
   return (neuron0x12a7de0()*-0.0057356);
}

double NNfunction_sb_uLdR::synapse0x12bbda0() {
   return (neuron0x12a8120()*0.036052);
}

double NNfunction_sb_uLdR::synapse0x12bc120() {
   return (neuron0x12a3560()*-0.324052);
}

double NNfunction_sb_uLdR::synapse0x12bc160() {
   return (neuron0x12a38a0()*0.332857);
}

double NNfunction_sb_uLdR::synapse0x12bc1a0() {
   return (neuron0x12a3be0()*-0.170125);
}

double NNfunction_sb_uLdR::synapse0x12bc1e0() {
   return (neuron0x12a3f20()*-0.413653);
}

double NNfunction_sb_uLdR::synapse0x12bc220() {
   return (neuron0x12a4260()*0.142438);
}

double NNfunction_sb_uLdR::synapse0x12bc260() {
   return (neuron0x12a45a0()*0.487393);
}

double NNfunction_sb_uLdR::synapse0x12bc2a0() {
   return (neuron0x12a48e0()*0.267442);
}

double NNfunction_sb_uLdR::synapse0x12bc2e0() {
   return (neuron0x12a4c20()*0.00323643);
}

double NNfunction_sb_uLdR::synapse0x12bc320() {
   return (neuron0x12a4f60()*-0.381071);
}

double NNfunction_sb_uLdR::synapse0x12bc360() {
   return (neuron0x12a52a0()*0.203434);
}

double NNfunction_sb_uLdR::synapse0x12bc3a0() {
   return (neuron0x12a55e0()*-0.150642);
}

double NNfunction_sb_uLdR::synapse0x12bc3e0() {
   return (neuron0x12a5920()*0.100304);
}

double NNfunction_sb_uLdR::synapse0x12bc420() {
   return (neuron0x12a5c60()*0.0465184);
}

double NNfunction_sb_uLdR::synapse0x12bc460() {
   return (neuron0x12a5fa0()*-0.297214);
}

double NNfunction_sb_uLdR::synapse0x12bc4a0() {
   return (neuron0x12a62e0()*-0.234209);
}

double NNfunction_sb_uLdR::synapse0x12bc4e0() {
   return (neuron0x12a6620()*0.346562);
}

double NNfunction_sb_uLdR::synapse0x12bbf70() {
   return (neuron0x12a6960()*-1.1187);
}

double NNfunction_sb_uLdR::synapse0x12bbfb0() {
   return (neuron0x12a6ec0()*0.214583);
}

double NNfunction_sb_uLdR::synapse0x12bc630() {
   return (neuron0x12a70e0()*0.413032);
}

double NNfunction_sb_uLdR::synapse0x12bc670() {
   return (neuron0x12a7420()*0.455533);
}

double NNfunction_sb_uLdR::synapse0x12bc6b0() {
   return (neuron0x12a7760()*-0.0568504);
}

double NNfunction_sb_uLdR::synapse0x12bc6f0() {
   return (neuron0x12a7aa0()*-0.10595);
}

double NNfunction_sb_uLdR::synapse0x12bc730() {
   return (neuron0x12a7de0()*0.389205);
}

double NNfunction_sb_uLdR::synapse0x12bc770() {
   return (neuron0x12a8120()*-0.203094);
}

double NNfunction_sb_uLdR::synapse0x12bcaf0() {
   return (neuron0x12a3560()*0.0928217);
}

double NNfunction_sb_uLdR::synapse0x12bcb30() {
   return (neuron0x12a38a0()*0.115468);
}

double NNfunction_sb_uLdR::synapse0x12bcb70() {
   return (neuron0x12a3be0()*0.896594);
}

double NNfunction_sb_uLdR::synapse0x12bcbb0() {
   return (neuron0x12a3f20()*-0.964957);
}

double NNfunction_sb_uLdR::synapse0x12bcbf0() {
   return (neuron0x12a4260()*0.259525);
}

double NNfunction_sb_uLdR::synapse0x12bcc30() {
   return (neuron0x12a45a0()*-0.0816492);
}

double NNfunction_sb_uLdR::synapse0x12bcc70() {
   return (neuron0x12a48e0()*0.150832);
}

double NNfunction_sb_uLdR::synapse0x12bccb0() {
   return (neuron0x12a4c20()*0.300427);
}

double NNfunction_sb_uLdR::synapse0x12bccf0() {
   return (neuron0x12a4f60()*0.0901458);
}

double NNfunction_sb_uLdR::synapse0x12bcd30() {
   return (neuron0x12a52a0()*0.0935109);
}

double NNfunction_sb_uLdR::synapse0x12bcd70() {
   return (neuron0x12a55e0()*0.0106473);
}

double NNfunction_sb_uLdR::synapse0x12bcdb0() {
   return (neuron0x12a5920()*0.601944);
}

double NNfunction_sb_uLdR::synapse0x12bcdf0() {
   return (neuron0x12a5c60()*-0.465655);
}

double NNfunction_sb_uLdR::synapse0x12bce30() {
   return (neuron0x12a5fa0()*0.126694);
}

double NNfunction_sb_uLdR::synapse0x12bce70() {
   return (neuron0x12a62e0()*-0.233185);
}

double NNfunction_sb_uLdR::synapse0x12bceb0() {
   return (neuron0x12a6620()*0.6054);
}

double NNfunction_sb_uLdR::synapse0x12bc940() {
   return (neuron0x12a6960()*0.196567);
}

double NNfunction_sb_uLdR::synapse0x12bc980() {
   return (neuron0x12a6ec0()*0.0400175);
}

double NNfunction_sb_uLdR::synapse0x12bd000() {
   return (neuron0x12a70e0()*-0.280529);
}

double NNfunction_sb_uLdR::synapse0x12bd040() {
   return (neuron0x12a7420()*-0.410886);
}

double NNfunction_sb_uLdR::synapse0x12bd080() {
   return (neuron0x12a7760()*-0.246735);
}

double NNfunction_sb_uLdR::synapse0x12bd0c0() {
   return (neuron0x12a7aa0()*0.0781806);
}

double NNfunction_sb_uLdR::synapse0x12bd100() {
   return (neuron0x12a7de0()*-0.100469);
}

double NNfunction_sb_uLdR::synapse0x12bd140() {
   return (neuron0x12a8120()*0.000969628);
}

double NNfunction_sb_uLdR::synapse0x12bd4c0() {
   return (neuron0x12a3560()*-0.602261);
}

double NNfunction_sb_uLdR::synapse0x12bd500() {
   return (neuron0x12a38a0()*-0.208183);
}

double NNfunction_sb_uLdR::synapse0x12bd540() {
   return (neuron0x12a3be0()*0.26998);
}

double NNfunction_sb_uLdR::synapse0x12bd580() {
   return (neuron0x12a3f20()*-0.314395);
}

double NNfunction_sb_uLdR::synapse0x12bd5c0() {
   return (neuron0x12a4260()*-0.181984);
}

double NNfunction_sb_uLdR::synapse0x12bd600() {
   return (neuron0x12a45a0()*-0.101532);
}

double NNfunction_sb_uLdR::synapse0x12bd640() {
   return (neuron0x12a48e0()*0.200005);
}

double NNfunction_sb_uLdR::synapse0x12bd680() {
   return (neuron0x12a4c20()*-0.691016);
}

double NNfunction_sb_uLdR::synapse0x12bd6c0() {
   return (neuron0x12a4f60()*-0.104921);
}

double NNfunction_sb_uLdR::synapse0x12bd700() {
   return (neuron0x12a52a0()*0.307839);
}

double NNfunction_sb_uLdR::synapse0x12bd740() {
   return (neuron0x12a55e0()*0.252821);
}

double NNfunction_sb_uLdR::synapse0x12bd780() {
   return (neuron0x12a5920()*-0.0606032);
}

double NNfunction_sb_uLdR::synapse0x12bd7c0() {
   return (neuron0x12a5c60()*0.327867);
}

double NNfunction_sb_uLdR::synapse0x12bd800() {
   return (neuron0x12a5fa0()*-0.56143);
}

double NNfunction_sb_uLdR::synapse0x12bd840() {
   return (neuron0x12a62e0()*0.198034);
}

double NNfunction_sb_uLdR::synapse0x12bd880() {
   return (neuron0x12a6620()*-0.28517);
}

double NNfunction_sb_uLdR::synapse0x12bd310() {
   return (neuron0x12a6960()*0.0359714);
}

double NNfunction_sb_uLdR::synapse0x12bd350() {
   return (neuron0x12a6ec0()*0.510894);
}

double NNfunction_sb_uLdR::synapse0x12bd9d0() {
   return (neuron0x12a70e0()*0.175254);
}

double NNfunction_sb_uLdR::synapse0x12bda10() {
   return (neuron0x12a7420()*0.359203);
}

double NNfunction_sb_uLdR::synapse0x12bda50() {
   return (neuron0x12a7760()*-0.239859);
}

double NNfunction_sb_uLdR::synapse0x12bda90() {
   return (neuron0x12a7aa0()*0.0830639);
}

double NNfunction_sb_uLdR::synapse0x12bdad0() {
   return (neuron0x12a7de0()*0.225933);
}

double NNfunction_sb_uLdR::synapse0x12bdb10() {
   return (neuron0x12a8120()*-0.0218482);
}

double NNfunction_sb_uLdR::synapse0x12bde90() {
   return (neuron0x12a3560()*0.427199);
}

double NNfunction_sb_uLdR::synapse0x12b2460() {
   return (neuron0x12a38a0()*0.0716002);
}

double NNfunction_sb_uLdR::synapse0x12b24a0() {
   return (neuron0x12a3be0()*0.422839);
}

double NNfunction_sb_uLdR::synapse0x12b24e0() {
   return (neuron0x12a3f20()*0.445386);
}

double NNfunction_sb_uLdR::synapse0x12b2730() {
   return (neuron0x12a4260()*-0.000462504);
}

double NNfunction_sb_uLdR::synapse0x12b2770() {
   return (neuron0x12a45a0()*0.00936415);
}

double NNfunction_sb_uLdR::synapse0x12b27b0() {
   return (neuron0x12a48e0()*0.416652);
}

double NNfunction_sb_uLdR::synapse0x12b2a00() {
   return (neuron0x12a4c20()*0.219689);
}

double NNfunction_sb_uLdR::synapse0x12b2a40() {
   return (neuron0x12a4f60()*0.0376171);
}

double NNfunction_sb_uLdR::synapse0x12b2c90() {
   return (neuron0x12a52a0()*-0.0430996);
}

double NNfunction_sb_uLdR::synapse0x12b2cd0() {
   return (neuron0x12a55e0()*0.082321);
}

double NNfunction_sb_uLdR::synapse0x12b2d10() {
   return (neuron0x12a5920()*0.27179);
}

double NNfunction_sb_uLdR::synapse0x12b2f60() {
   return (neuron0x12a5c60()*-0.272716);
}

double NNfunction_sb_uLdR::synapse0x12b2fa0() {
   return (neuron0x12a5fa0()*-0.382829);
}

double NNfunction_sb_uLdR::synapse0x12b31f0() {
   return (neuron0x12a62e0()*-0.0721389);
}

double NNfunction_sb_uLdR::synapse0x12b3230() {
   return (neuron0x12a6620()*0.0157604);
}

double NNfunction_sb_uLdR::synapse0x12bdce0() {
   return (neuron0x12a6960()*0.508914);
}

double NNfunction_sb_uLdR::synapse0x12bdd20() {
   return (neuron0x12a6ec0()*0.672375);
}

double NNfunction_sb_uLdR::synapse0x12b3380() {
   return (neuron0x12a70e0()*-0.0291314);
}

double NNfunction_sb_uLdR::synapse0x12b3890() {
   return (neuron0x12a7420()*-0.461059);
}

double NNfunction_sb_uLdR::synapse0x12b38d0() {
   return (neuron0x12a7760()*0.242694);
}

double NNfunction_sb_uLdR::synapse0x12b3910() {
   return (neuron0x12a7aa0()*-0.18915);
}

double NNfunction_sb_uLdR::synapse0x12b3b60() {
   return (neuron0x12a7de0()*-0.0600159);
}

double NNfunction_sb_uLdR::synapse0x12b3ba0() {
   return (neuron0x12a8120()*-0.0384669);
}

double NNfunction_sb_uLdR::synapse0x12b3450() {
   return (neuron0x12a3560()*-0.00615518);
}

double NNfunction_sb_uLdR::synapse0x12b3490() {
   return (neuron0x12a38a0()*-0.0604423);
}

double NNfunction_sb_uLdR::synapse0x12b34d0() {
   return (neuron0x12a3be0()*0.0907303);
}

double NNfunction_sb_uLdR::synapse0x12b3510() {
   return (neuron0x12a3f20()*0.634561);
}

double NNfunction_sb_uLdR::synapse0x12b3e90() {
   return (neuron0x12a4260()*0.0227777);
}

double NNfunction_sb_uLdR::synapse0x12c01e0() {
   return (neuron0x12a45a0()*0.143085);
}

double NNfunction_sb_uLdR::synapse0x12c0220() {
   return (neuron0x12a48e0()*0.0805508);
}

double NNfunction_sb_uLdR::synapse0x12c0260() {
   return (neuron0x12a4c20()*-0.184386);
}

double NNfunction_sb_uLdR::synapse0x12c02a0() {
   return (neuron0x12a4f60()*0.0729759);
}

double NNfunction_sb_uLdR::synapse0x12c02e0() {
   return (neuron0x12a52a0()*0.0294559);
}

double NNfunction_sb_uLdR::synapse0x12c0320() {
   return (neuron0x12a55e0()*0.0318826);
}

double NNfunction_sb_uLdR::synapse0x12c0360() {
   return (neuron0x12a5920()*0.152331);
}

double NNfunction_sb_uLdR::synapse0x12c03a0() {
   return (neuron0x12a5c60()*-0.2531);
}

double NNfunction_sb_uLdR::synapse0x12c03e0() {
   return (neuron0x12a5fa0()*-0.0743303);
}

double NNfunction_sb_uLdR::synapse0x12c0420() {
   return (neuron0x12a62e0()*0.0767301);
}

double NNfunction_sb_uLdR::synapse0x12c0460() {
   return (neuron0x12a6620()*-0.339334);
}

double NNfunction_sb_uLdR::synapse0x12b3d70() {
   return (neuron0x12a6960()*0.071045);
}

double NNfunction_sb_uLdR::synapse0x12b3db0() {
   return (neuron0x12a6ec0()*-0.192915);
}

double NNfunction_sb_uLdR::synapse0x12c05b0() {
   return (neuron0x12a70e0()*-0.0479808);
}

double NNfunction_sb_uLdR::synapse0x12c05f0() {
   return (neuron0x12a7420()*-0.145987);
}

double NNfunction_sb_uLdR::synapse0x12c0630() {
   return (neuron0x12a7760()*-0.0612946);
}

double NNfunction_sb_uLdR::synapse0x12c0670() {
   return (neuron0x12a7aa0()*0.308076);
}

double NNfunction_sb_uLdR::synapse0x12c06b0() {
   return (neuron0x12a7de0()*0.015109);
}

double NNfunction_sb_uLdR::synapse0x12c06f0() {
   return (neuron0x12a8120()*0.014841);
}

double NNfunction_sb_uLdR::synapse0x12c0a70() {
   return (neuron0x12a3560()*0.0530216);
}

double NNfunction_sb_uLdR::synapse0x12c0ab0() {
   return (neuron0x12a38a0()*0.427775);
}

double NNfunction_sb_uLdR::synapse0x12c0af0() {
   return (neuron0x12a3be0()*-0.61082);
}

double NNfunction_sb_uLdR::synapse0x12c0b30() {
   return (neuron0x12a3f20()*0.579971);
}

double NNfunction_sb_uLdR::synapse0x12c0b70() {
   return (neuron0x12a4260()*-0.484817);
}

double NNfunction_sb_uLdR::synapse0x12c0bb0() {
   return (neuron0x12a45a0()*-0.475851);
}

double NNfunction_sb_uLdR::synapse0x12c0bf0() {
   return (neuron0x12a48e0()*0.677565);
}

double NNfunction_sb_uLdR::synapse0x12c0c30() {
   return (neuron0x12a4c20()*-0.348858);
}

double NNfunction_sb_uLdR::synapse0x12c0c70() {
   return (neuron0x12a4f60()*0.0868228);
}

double NNfunction_sb_uLdR::synapse0x12c0cb0() {
   return (neuron0x12a52a0()*-0.40757);
}

double NNfunction_sb_uLdR::synapse0x12c0cf0() {
   return (neuron0x12a55e0()*-0.226793);
}

double NNfunction_sb_uLdR::synapse0x12c0d30() {
   return (neuron0x12a5920()*0.0988384);
}

double NNfunction_sb_uLdR::synapse0x12c0d70() {
   return (neuron0x12a5c60()*0.337292);
}

double NNfunction_sb_uLdR::synapse0x12c0db0() {
   return (neuron0x12a5fa0()*0.323505);
}

double NNfunction_sb_uLdR::synapse0x12c0df0() {
   return (neuron0x12a62e0()*-0.139769);
}

double NNfunction_sb_uLdR::synapse0x12c0e30() {
   return (neuron0x12a6620()*0.0899569);
}

double NNfunction_sb_uLdR::synapse0x12c08c0() {
   return (neuron0x12a6960()*0.115852);
}

double NNfunction_sb_uLdR::synapse0x12c0900() {
   return (neuron0x12a6ec0()*-0.307942);
}

double NNfunction_sb_uLdR::synapse0x12c0f80() {
   return (neuron0x12a70e0()*0.247418);
}

double NNfunction_sb_uLdR::synapse0x12c0fc0() {
   return (neuron0x12a7420()*-0.178999);
}

double NNfunction_sb_uLdR::synapse0x12c1000() {
   return (neuron0x12a7760()*-0.0957192);
}

double NNfunction_sb_uLdR::synapse0x12c1040() {
   return (neuron0x12a7aa0()*-0.00648709);
}

double NNfunction_sb_uLdR::synapse0x12c1080() {
   return (neuron0x12a7de0()*-0.0370921);
}

double NNfunction_sb_uLdR::synapse0x12c10c0() {
   return (neuron0x12a8120()*-0.58631);
}

double NNfunction_sb_uLdR::synapse0x12c1440() {
   return (neuron0x12a3560()*-0.530633);
}

double NNfunction_sb_uLdR::synapse0x12c1480() {
   return (neuron0x12a38a0()*0.0946142);
}

double NNfunction_sb_uLdR::synapse0x12c14c0() {
   return (neuron0x12a3be0()*0.378254);
}

double NNfunction_sb_uLdR::synapse0x12c1500() {
   return (neuron0x12a3f20()*0.217403);
}

double NNfunction_sb_uLdR::synapse0x12c1540() {
   return (neuron0x12a4260()*-0.0289514);
}

double NNfunction_sb_uLdR::synapse0x12c1580() {
   return (neuron0x12a45a0()*0.271933);
}

double NNfunction_sb_uLdR::synapse0x12c15c0() {
   return (neuron0x12a48e0()*-0.0233864);
}

double NNfunction_sb_uLdR::synapse0x12c1600() {
   return (neuron0x12a4c20()*-0.137842);
}

double NNfunction_sb_uLdR::synapse0x12c1640() {
   return (neuron0x12a4f60()*0.0302173);
}

double NNfunction_sb_uLdR::synapse0x12c1680() {
   return (neuron0x12a52a0()*0.296496);
}

double NNfunction_sb_uLdR::synapse0x12c16c0() {
   return (neuron0x12a55e0()*0.410105);
}

double NNfunction_sb_uLdR::synapse0x12c1700() {
   return (neuron0x12a5920()*0.0680387);
}

double NNfunction_sb_uLdR::synapse0x12c1740() {
   return (neuron0x12a5c60()*0.0501718);
}

double NNfunction_sb_uLdR::synapse0x12c1780() {
   return (neuron0x12a5fa0()*-0.803724);
}

double NNfunction_sb_uLdR::synapse0x12c17c0() {
   return (neuron0x12a62e0()*-0.474372);
}

double NNfunction_sb_uLdR::synapse0x12c1800() {
   return (neuron0x12a6620()*0.900201);
}

double NNfunction_sb_uLdR::synapse0x12c1290() {
   return (neuron0x12a6960()*-0.20002);
}

double NNfunction_sb_uLdR::synapse0x12c12d0() {
   return (neuron0x12a6ec0()*0.22663);
}

double NNfunction_sb_uLdR::synapse0x12c1950() {
   return (neuron0x12a70e0()*0.250493);
}

double NNfunction_sb_uLdR::synapse0x12c1990() {
   return (neuron0x12a7420()*-0.348222);
}

double NNfunction_sb_uLdR::synapse0x12c19d0() {
   return (neuron0x12a7760()*-0.339045);
}

double NNfunction_sb_uLdR::synapse0x12c1a10() {
   return (neuron0x12a7aa0()*-0.442805);
}

double NNfunction_sb_uLdR::synapse0x12c1a50() {
   return (neuron0x12a7de0()*0.299172);
}

double NNfunction_sb_uLdR::synapse0x12c1a90() {
   return (neuron0x12a8120()*-0.301274);
}

double NNfunction_sb_uLdR::synapse0x12c1e10() {
   return (neuron0x12a3560()*-0.0294835);
}

double NNfunction_sb_uLdR::synapse0x12c1e50() {
   return (neuron0x12a38a0()*-0.384524);
}

double NNfunction_sb_uLdR::synapse0x12c1e90() {
   return (neuron0x12a3be0()*-0.0138881);
}

double NNfunction_sb_uLdR::synapse0x12c1ed0() {
   return (neuron0x12a3f20()*-0.231094);
}

double NNfunction_sb_uLdR::synapse0x12c1f10() {
   return (neuron0x12a4260()*-0.0230661);
}

double NNfunction_sb_uLdR::synapse0x12c1f50() {
   return (neuron0x12a45a0()*-0.0500512);
}

double NNfunction_sb_uLdR::synapse0x12c1f90() {
   return (neuron0x12a48e0()*0.489191);
}

double NNfunction_sb_uLdR::synapse0x12c1fd0() {
   return (neuron0x12a4c20()*-0.142569);
}

double NNfunction_sb_uLdR::synapse0x12c2010() {
   return (neuron0x12a4f60()*-0.150753);
}

double NNfunction_sb_uLdR::synapse0x12c2050() {
   return (neuron0x12a52a0()*-0.0511667);
}

double NNfunction_sb_uLdR::synapse0x12c2090() {
   return (neuron0x12a55e0()*-0.145861);
}

double NNfunction_sb_uLdR::synapse0x12c20d0() {
   return (neuron0x12a5920()*0.211495);
}

double NNfunction_sb_uLdR::synapse0x12c2110() {
   return (neuron0x12a5c60()*-0.302753);
}

double NNfunction_sb_uLdR::synapse0x12c2150() {
   return (neuron0x12a5fa0()*0.568665);
}

double NNfunction_sb_uLdR::synapse0x12c2190() {
   return (neuron0x12a62e0()*-0.230326);
}

double NNfunction_sb_uLdR::synapse0x12c21d0() {
   return (neuron0x12a6620()*0.431407);
}

double NNfunction_sb_uLdR::synapse0x12c1c60() {
   return (neuron0x12a6960()*-0.294632);
}

double NNfunction_sb_uLdR::synapse0x12c1ca0() {
   return (neuron0x12a6ec0()*-0.170443);
}

double NNfunction_sb_uLdR::synapse0x12c2320() {
   return (neuron0x12a70e0()*-0.0937649);
}

double NNfunction_sb_uLdR::synapse0x12c2360() {
   return (neuron0x12a7420()*-0.204271);
}

double NNfunction_sb_uLdR::synapse0x12c23a0() {
   return (neuron0x12a7760()*0.0336045);
}

double NNfunction_sb_uLdR::synapse0x12c23e0() {
   return (neuron0x12a7aa0()*0.145574);
}

double NNfunction_sb_uLdR::synapse0x12c2420() {
   return (neuron0x12a7de0()*0.554215);
}

double NNfunction_sb_uLdR::synapse0x12c2460() {
   return (neuron0x12a8120()*0.701868);
}

double NNfunction_sb_uLdR::synapse0x12c27e0() {
   return (neuron0x12a3560()*-0.28252);
}

double NNfunction_sb_uLdR::synapse0x12c2820() {
   return (neuron0x12a38a0()*-0.157501);
}

double NNfunction_sb_uLdR::synapse0x12c2860() {
   return (neuron0x12a3be0()*-0.186011);
}

double NNfunction_sb_uLdR::synapse0x12c28a0() {
   return (neuron0x12a3f20()*0.0327647);
}

double NNfunction_sb_uLdR::synapse0x12c28e0() {
   return (neuron0x12a4260()*-0.0297298);
}

double NNfunction_sb_uLdR::synapse0x12c2920() {
   return (neuron0x12a45a0()*-0.139965);
}

double NNfunction_sb_uLdR::synapse0x12c2960() {
   return (neuron0x12a48e0()*-0.387869);
}

double NNfunction_sb_uLdR::synapse0x12c29a0() {
   return (neuron0x12a4c20()*0.200989);
}

double NNfunction_sb_uLdR::synapse0x12c29e0() {
   return (neuron0x12a4f60()*-0.283235);
}

double NNfunction_sb_uLdR::synapse0x12c2a20() {
   return (neuron0x12a52a0()*0.154669);
}

double NNfunction_sb_uLdR::synapse0x12c2a60() {
   return (neuron0x12a55e0()*-0.0510209);
}

double NNfunction_sb_uLdR::synapse0x12c2aa0() {
   return (neuron0x12a5920()*0.574786);
}

double NNfunction_sb_uLdR::synapse0x12c2ae0() {
   return (neuron0x12a5c60()*0.252313);
}

double NNfunction_sb_uLdR::synapse0x12c2b20() {
   return (neuron0x12a5fa0()*0.28573);
}

double NNfunction_sb_uLdR::synapse0x12c2b60() {
   return (neuron0x12a62e0()*0.0753312);
}

double NNfunction_sb_uLdR::synapse0x12c2ba0() {
   return (neuron0x12a6620()*0.247682);
}

double NNfunction_sb_uLdR::synapse0x12c2630() {
   return (neuron0x12a6960()*-0.0820999);
}

double NNfunction_sb_uLdR::synapse0x12c2670() {
   return (neuron0x12a6ec0()*0.557338);
}

double NNfunction_sb_uLdR::synapse0x12c2cf0() {
   return (neuron0x12a70e0()*-0.494175);
}

double NNfunction_sb_uLdR::synapse0x12c2d30() {
   return (neuron0x12a7420()*0.247337);
}

double NNfunction_sb_uLdR::synapse0x12c2d70() {
   return (neuron0x12a7760()*0.121561);
}

double NNfunction_sb_uLdR::synapse0x12c2db0() {
   return (neuron0x12a7aa0()*-0.739006);
}

double NNfunction_sb_uLdR::synapse0x12c2df0() {
   return (neuron0x12a7de0()*0.0225535);
}

double NNfunction_sb_uLdR::synapse0x12c2e30() {
   return (neuron0x12a8120()*-0.134748);
}

double NNfunction_sb_uLdR::synapse0x12c31b0() {
   return (neuron0x12a3560()*-0.245709);
}

double NNfunction_sb_uLdR::synapse0x12c31f0() {
   return (neuron0x12a38a0()*-0.719514);
}

double NNfunction_sb_uLdR::synapse0x12c3230() {
   return (neuron0x12a3be0()*0.257342);
}

double NNfunction_sb_uLdR::synapse0x12c3270() {
   return (neuron0x12a3f20()*1.11182);
}

double NNfunction_sb_uLdR::synapse0x12c32b0() {
   return (neuron0x12a4260()*-0.189217);
}

double NNfunction_sb_uLdR::synapse0x12c32f0() {
   return (neuron0x12a45a0()*0.0388996);
}

double NNfunction_sb_uLdR::synapse0x12c3330() {
   return (neuron0x12a48e0()*-0.209064);
}

double NNfunction_sb_uLdR::synapse0x12c3370() {
   return (neuron0x12a4c20()*-0.506089);
}

double NNfunction_sb_uLdR::synapse0x12c33b0() {
   return (neuron0x12a4f60()*-0.536565);
}

double NNfunction_sb_uLdR::synapse0x12c33f0() {
   return (neuron0x12a52a0()*-0.0271334);
}

double NNfunction_sb_uLdR::synapse0x12c3430() {
   return (neuron0x12a55e0()*0.172457);
}

double NNfunction_sb_uLdR::synapse0x12c3470() {
   return (neuron0x12a5920()*0.108279);
}

double NNfunction_sb_uLdR::synapse0x12c34b0() {
   return (neuron0x12a5c60()*-0.0304284);
}

double NNfunction_sb_uLdR::synapse0x12c34f0() {
   return (neuron0x12a5fa0()*0.202509);
}

double NNfunction_sb_uLdR::synapse0x12c3530() {
   return (neuron0x12a62e0()*0.0620188);
}

double NNfunction_sb_uLdR::synapse0x12c3570() {
   return (neuron0x12a6620()*0.00159684);
}

double NNfunction_sb_uLdR::synapse0x12c3000() {
   return (neuron0x12a6960()*-0.126412);
}

double NNfunction_sb_uLdR::synapse0x12c3040() {
   return (neuron0x12a6ec0()*-0.237036);
}

double NNfunction_sb_uLdR::synapse0x12c36c0() {
   return (neuron0x12a70e0()*-0.0556299);
}

double NNfunction_sb_uLdR::synapse0x12c3700() {
   return (neuron0x12a7420()*-0.0305936);
}

double NNfunction_sb_uLdR::synapse0x12c3740() {
   return (neuron0x12a7760()*0.406736);
}

double NNfunction_sb_uLdR::synapse0x12c3780() {
   return (neuron0x12a7aa0()*-0.363487);
}

double NNfunction_sb_uLdR::synapse0x12c37c0() {
   return (neuron0x12a7de0()*-0.0931874);
}

double NNfunction_sb_uLdR::synapse0x12c3800() {
   return (neuron0x12a8120()*-0.103813);
}

double NNfunction_sb_uLdR::synapse0x12c3b80() {
   return (neuron0x12a3560()*0.0124662);
}

double NNfunction_sb_uLdR::synapse0x12c3bc0() {
   return (neuron0x12a38a0()*0.049353);
}

double NNfunction_sb_uLdR::synapse0x12c3c00() {
   return (neuron0x12a3be0()*0.055094);
}

double NNfunction_sb_uLdR::synapse0x12c3c40() {
   return (neuron0x12a3f20()*0.758762);
}

double NNfunction_sb_uLdR::synapse0x12c3c80() {
   return (neuron0x12a4260()*0.125259);
}

double NNfunction_sb_uLdR::synapse0x12c3cc0() {
   return (neuron0x12a45a0()*0.0464801);
}

double NNfunction_sb_uLdR::synapse0x12c3d00() {
   return (neuron0x12a48e0()*0.0134833);
}

double NNfunction_sb_uLdR::synapse0x12c3d40() {
   return (neuron0x12a4c20()*0.0528524);
}

double NNfunction_sb_uLdR::synapse0x12c3d80() {
   return (neuron0x12a4f60()*0.0080087);
}

double NNfunction_sb_uLdR::synapse0x12c3dc0() {
   return (neuron0x12a52a0()*-0.0224914);
}

double NNfunction_sb_uLdR::synapse0x12c3e00() {
   return (neuron0x12a55e0()*-0.0326826);
}

double NNfunction_sb_uLdR::synapse0x12c3e40() {
   return (neuron0x12a5920()*-0.451681);
}

double NNfunction_sb_uLdR::synapse0x12c3e80() {
   return (neuron0x12a5c60()*0.0765631);
}

double NNfunction_sb_uLdR::synapse0x12c3ec0() {
   return (neuron0x12a5fa0()*-0.0763468);
}

double NNfunction_sb_uLdR::synapse0x12c3f00() {
   return (neuron0x12a62e0()*0.0588918);
}

double NNfunction_sb_uLdR::synapse0x12c3f40() {
   return (neuron0x12a6620()*0.0489777);
}

double NNfunction_sb_uLdR::synapse0x12c39d0() {
   return (neuron0x12a6960()*-0.0968201);
}

double NNfunction_sb_uLdR::synapse0x12c3a10() {
   return (neuron0x12a6ec0()*-1.19456);
}

double NNfunction_sb_uLdR::synapse0x12c4090() {
   return (neuron0x12a70e0()*-0.0609478);
}

double NNfunction_sb_uLdR::synapse0x12c40d0() {
   return (neuron0x12a7420()*0.0426417);
}

double NNfunction_sb_uLdR::synapse0x12c4110() {
   return (neuron0x12a7760()*0.00104945);
}

double NNfunction_sb_uLdR::synapse0x12c4150() {
   return (neuron0x12a7aa0()*0.00317276);
}

double NNfunction_sb_uLdR::synapse0x12c4190() {
   return (neuron0x12a7de0()*-0.0228867);
}

double NNfunction_sb_uLdR::synapse0x12c41d0() {
   return (neuron0x12a8120()*0.00265556);
}

double NNfunction_sb_uLdR::synapse0x12c4550() {
   return (neuron0x12a3560()*0.0151775);
}

double NNfunction_sb_uLdR::synapse0x12c4590() {
   return (neuron0x12a38a0()*-0.0148767);
}

double NNfunction_sb_uLdR::synapse0x12c45d0() {
   return (neuron0x12a3be0()*-0.00229585);
}

double NNfunction_sb_uLdR::synapse0x12c4610() {
   return (neuron0x12a3f20()*2.15136);
}

double NNfunction_sb_uLdR::synapse0x12c4650() {
   return (neuron0x12a4260()*0.0115316);
}

double NNfunction_sb_uLdR::synapse0x12c4690() {
   return (neuron0x12a45a0()*0.014724);
}

double NNfunction_sb_uLdR::synapse0x12c46d0() {
   return (neuron0x12a48e0()*0.00508063);
}

double NNfunction_sb_uLdR::synapse0x12c4710() {
   return (neuron0x12a4c20()*0.0173898);
}

double NNfunction_sb_uLdR::synapse0x12c4750() {
   return (neuron0x12a4f60()*0.00460181);
}

double NNfunction_sb_uLdR::synapse0x12c4790() {
   return (neuron0x12a52a0()*-0.00474969);
}

double NNfunction_sb_uLdR::synapse0x12c47d0() {
   return (neuron0x12a55e0()*-0.00534896);
}

double NNfunction_sb_uLdR::synapse0x12c4810() {
   return (neuron0x12a5920()*-0.180041);
}

double NNfunction_sb_uLdR::synapse0x12c4850() {
   return (neuron0x12a5c60()*0.0169582);
}

double NNfunction_sb_uLdR::synapse0x12c4890() {
   return (neuron0x12a5fa0()*-0.0112345);
}

double NNfunction_sb_uLdR::synapse0x12c48d0() {
   return (neuron0x12a62e0()*0.0170992);
}

double NNfunction_sb_uLdR::synapse0x12c4910() {
   return (neuron0x12a6620()*0.0101552);
}

double NNfunction_sb_uLdR::synapse0x12c43a0() {
   return (neuron0x12a6960()*-0.00899251);
}

double NNfunction_sb_uLdR::synapse0x12c43e0() {
   return (neuron0x12a6ec0()*-0.0811446);
}

double NNfunction_sb_uLdR::synapse0x12c4a60() {
   return (neuron0x12a70e0()*-0.0126777);
}

double NNfunction_sb_uLdR::synapse0x12c4aa0() {
   return (neuron0x12a7420()*0.0122952);
}

double NNfunction_sb_uLdR::synapse0x12c4ae0() {
   return (neuron0x12a7760()*0.00400379);
}

double NNfunction_sb_uLdR::synapse0x12c4b20() {
   return (neuron0x12a7aa0()*0.00724416);
}

double NNfunction_sb_uLdR::synapse0x12c4b60() {
   return (neuron0x12a7de0()*-0.00739946);
}

double NNfunction_sb_uLdR::synapse0x12c4ba0() {
   return (neuron0x12a8120()*0.0120234);
}

double NNfunction_sb_uLdR::synapse0x12ad650() {
   return (neuron0x12a3560()*0.0174941);
}

double NNfunction_sb_uLdR::synapse0x12ad690() {
   return (neuron0x12a38a0()*0.015123);
}

double NNfunction_sb_uLdR::synapse0x12ad6d0() {
   return (neuron0x12a3be0()*0.24041);
}

double NNfunction_sb_uLdR::synapse0x12ad710() {
   return (neuron0x12a3f20()*0.0584682);
}

double NNfunction_sb_uLdR::synapse0x12ad750() {
   return (neuron0x12a4260()*0.0441355);
}

double NNfunction_sb_uLdR::synapse0x12ad790() {
   return (neuron0x12a45a0()*0.0760745);
}

double NNfunction_sb_uLdR::synapse0x12ad7d0() {
   return (neuron0x12a48e0()*-0.0188057);
}

double NNfunction_sb_uLdR::synapse0x12ad810() {
   return (neuron0x12a4c20()*0.00206404);
}

double NNfunction_sb_uLdR::synapse0x12c5330() {
   return (neuron0x12a4f60()*-0.033403);
}

double NNfunction_sb_uLdR::synapse0x12c5370() {
   return (neuron0x12a52a0()*-0.0458288);
}

double NNfunction_sb_uLdR::synapse0x12c53b0() {
   return (neuron0x12a55e0()*-0.0515421);
}

double NNfunction_sb_uLdR::synapse0x12c53f0() {
   return (neuron0x12a5920()*-0.12594);
}

double NNfunction_sb_uLdR::synapse0x12c5430() {
   return (neuron0x12a5c60()*0.0798924);
}

double NNfunction_sb_uLdR::synapse0x12c5470() {
   return (neuron0x12a5fa0()*-0.0226795);
}

double NNfunction_sb_uLdR::synapse0x12c54b0() {
   return (neuron0x12a62e0()*0.0636669);
}

double NNfunction_sb_uLdR::synapse0x12c54f0() {
   return (neuron0x12a6620()*0.120438);
}

double NNfunction_sb_uLdR::synapse0x12c4d70() {
   return (neuron0x12a6960()*-0.00515915);
}

double NNfunction_sb_uLdR::synapse0x12c4db0() {
   return (neuron0x12a6ec0()*-0.173221);
}

double NNfunction_sb_uLdR::synapse0x12c5640() {
   return (neuron0x12a70e0()*0.0199091);
}

double NNfunction_sb_uLdR::synapse0x12c5680() {
   return (neuron0x12a7420()*0.207543);
}

double NNfunction_sb_uLdR::synapse0x12c56c0() {
   return (neuron0x12a7760()*0.0507539);
}

double NNfunction_sb_uLdR::synapse0x12c5700() {
   return (neuron0x12a7aa0()*-0.0701609);
}

double NNfunction_sb_uLdR::synapse0x12c5740() {
   return (neuron0x12a7de0()*-0.0486492);
}

double NNfunction_sb_uLdR::synapse0x12c5780() {
   return (neuron0x12a8120()*-0.0200394);
}

double NNfunction_sb_uLdR::synapse0x12c5b00() {
   return (neuron0x12a3560()*-0.376361);
}

double NNfunction_sb_uLdR::synapse0x12c5b40() {
   return (neuron0x12a38a0()*-0.0732723);
}

double NNfunction_sb_uLdR::synapse0x12c5b80() {
   return (neuron0x12a3be0()*-0.774125);
}

double NNfunction_sb_uLdR::synapse0x12c5bc0() {
   return (neuron0x12a3f20()*0.606722);
}

double NNfunction_sb_uLdR::synapse0x12c5c00() {
   return (neuron0x12a4260()*0.0377955);
}

double NNfunction_sb_uLdR::synapse0x12c5c40() {
   return (neuron0x12a45a0()*0.132801);
}

double NNfunction_sb_uLdR::synapse0x12c5c80() {
   return (neuron0x12a48e0()*-0.0598291);
}

double NNfunction_sb_uLdR::synapse0x12c5cc0() {
   return (neuron0x12a4c20()*-0.14017);
}

double NNfunction_sb_uLdR::synapse0x12c5d00() {
   return (neuron0x12a4f60()*-0.613558);
}

double NNfunction_sb_uLdR::synapse0x12c5d40() {
   return (neuron0x12a52a0()*-0.840544);
}

double NNfunction_sb_uLdR::synapse0x12c5d80() {
   return (neuron0x12a55e0()*-0.101069);
}

double NNfunction_sb_uLdR::synapse0x12c5dc0() {
   return (neuron0x12a5920()*0.0317113);
}

double NNfunction_sb_uLdR::synapse0x12c5e00() {
   return (neuron0x12a5c60()*-0.174463);
}

double NNfunction_sb_uLdR::synapse0x12c5e40() {
   return (neuron0x12a5fa0()*0.0130596);
}

double NNfunction_sb_uLdR::synapse0x12c5e80() {
   return (neuron0x12a62e0()*0.278799);
}

double NNfunction_sb_uLdR::synapse0x12c5ec0() {
   return (neuron0x12a6620()*0.556499);
}

double NNfunction_sb_uLdR::synapse0x12c5950() {
   return (neuron0x12a6960()*0.225584);
}

double NNfunction_sb_uLdR::synapse0x12c5990() {
   return (neuron0x12a6ec0()*0.0714034);
}

double NNfunction_sb_uLdR::synapse0x12c6010() {
   return (neuron0x12a70e0()*-0.274213);
}

double NNfunction_sb_uLdR::synapse0x12c6050() {
   return (neuron0x12a7420()*0.0412739);
}

double NNfunction_sb_uLdR::synapse0x12c6090() {
   return (neuron0x12a7760()*-0.206427);
}

double NNfunction_sb_uLdR::synapse0x12c60d0() {
   return (neuron0x12a7aa0()*0.435457);
}

double NNfunction_sb_uLdR::synapse0x12c6110() {
   return (neuron0x12a7de0()*-0.461869);
}

double NNfunction_sb_uLdR::synapse0x12c6150() {
   return (neuron0x12a8120()*0.168102);
}

double NNfunction_sb_uLdR::synapse0x12c64d0() {
   return (neuron0x12a3560()*-0.164153);
}

double NNfunction_sb_uLdR::synapse0x12c6510() {
   return (neuron0x12a38a0()*-0.481402);
}

double NNfunction_sb_uLdR::synapse0x12c6550() {
   return (neuron0x12a3be0()*-0.503622);
}

double NNfunction_sb_uLdR::synapse0x12c6590() {
   return (neuron0x12a3f20()*0.491337);
}

double NNfunction_sb_uLdR::synapse0x12c65d0() {
   return (neuron0x12a4260()*-0.564324);
}

double NNfunction_sb_uLdR::synapse0x12c6610() {
   return (neuron0x12a45a0()*0.921647);
}

double NNfunction_sb_uLdR::synapse0x12c6650() {
   return (neuron0x12a48e0()*-0.0630206);
}

double NNfunction_sb_uLdR::synapse0x12c6690() {
   return (neuron0x12a4c20()*-0.0727235);
}

double NNfunction_sb_uLdR::synapse0x12c66d0() {
   return (neuron0x12a4f60()*0.00234002);
}

double NNfunction_sb_uLdR::synapse0x12c6710() {
   return (neuron0x12a52a0()*-0.344338);
}

double NNfunction_sb_uLdR::synapse0x12c6750() {
   return (neuron0x12a55e0()*0.00773202);
}

double NNfunction_sb_uLdR::synapse0x12c6790() {
   return (neuron0x12a5920()*-0.458537);
}

double NNfunction_sb_uLdR::synapse0x12c67d0() {
   return (neuron0x12a5c60()*-0.0567442);
}

double NNfunction_sb_uLdR::synapse0x12c6810() {
   return (neuron0x12a5fa0()*0.274108);
}

double NNfunction_sb_uLdR::synapse0x12c6850() {
   return (neuron0x12a62e0()*-0.166511);
}

double NNfunction_sb_uLdR::synapse0x12c6890() {
   return (neuron0x12a6620()*0.0741322);
}

double NNfunction_sb_uLdR::synapse0x12c6320() {
   return (neuron0x12a6960()*0.0867274);
}

double NNfunction_sb_uLdR::synapse0x12c6360() {
   return (neuron0x12a6ec0()*-0.523393);
}

double NNfunction_sb_uLdR::synapse0x12b6e90() {
   return (neuron0x12a70e0()*0.0875371);
}

double NNfunction_sb_uLdR::synapse0x12b6ed0() {
   return (neuron0x12a7420()*0.385499);
}

double NNfunction_sb_uLdR::synapse0x12b6f10() {
   return (neuron0x12a7760()*0.0424781);
}

double NNfunction_sb_uLdR::synapse0x12b6f50() {
   return (neuron0x12a7aa0()*-0.199466);
}

double NNfunction_sb_uLdR::synapse0x12b6f90() {
   return (neuron0x12a7de0()*-0.0834344);
}

double NNfunction_sb_uLdR::synapse0x12b6fd0() {
   return (neuron0x12a8120()*0.00421806);
}

double NNfunction_sb_uLdR::synapse0x12b7350() {
   return (neuron0x12a3560()*0.000182957);
}

double NNfunction_sb_uLdR::synapse0x12b7390() {
   return (neuron0x12a38a0()*-0.035134);
}

double NNfunction_sb_uLdR::synapse0x12b73d0() {
   return (neuron0x12a3be0()*-0.0249261);
}

double NNfunction_sb_uLdR::synapse0x12b7410() {
   return (neuron0x12a3f20()*0.0103872);
}

double NNfunction_sb_uLdR::synapse0x12b7450() {
   return (neuron0x12a4260()*-0.0106018);
}

double NNfunction_sb_uLdR::synapse0x12b7490() {
   return (neuron0x12a45a0()*0.0174797);
}

double NNfunction_sb_uLdR::synapse0x12b74d0() {
   return (neuron0x12a48e0()*-0.00332068);
}

double NNfunction_sb_uLdR::synapse0x12b7510() {
   return (neuron0x12a4c20()*0.00245076);
}

double NNfunction_sb_uLdR::synapse0x12b7550() {
   return (neuron0x12a4f60()*0.00127286);
}

double NNfunction_sb_uLdR::synapse0x12b7590() {
   return (neuron0x12a52a0()*-0.0256776);
}

double NNfunction_sb_uLdR::synapse0x12b75d0() {
   return (neuron0x12a55e0()*-0.0107506);
}

double NNfunction_sb_uLdR::synapse0x12b7610() {
   return (neuron0x12a5920()*0.8293);
}

double NNfunction_sb_uLdR::synapse0x12b7650() {
   return (neuron0x12a5c60()*-0.0305174);
}

double NNfunction_sb_uLdR::synapse0x12b7690() {
   return (neuron0x12a5fa0()*0.0168624);
}

double NNfunction_sb_uLdR::synapse0x12b76d0() {
   return (neuron0x12a62e0()*-0.00773626);
}

double NNfunction_sb_uLdR::synapse0x12b7710() {
   return (neuron0x12a6620()*0.0463177);
}

double NNfunction_sb_uLdR::synapse0x12b71a0() {
   return (neuron0x12a6960()*0.0311648);
}

double NNfunction_sb_uLdR::synapse0x12b71e0() {
   return (neuron0x12a6ec0()*1.55415);
}

double NNfunction_sb_uLdR::synapse0x12b7860() {
   return (neuron0x12a70e0()*-0.0213559);
}

double NNfunction_sb_uLdR::synapse0x12b78a0() {
   return (neuron0x12a7420()*0.0628443);
}

double NNfunction_sb_uLdR::synapse0x12b78e0() {
   return (neuron0x12a7760()*0.00612813);
}

double NNfunction_sb_uLdR::synapse0x12b7920() {
   return (neuron0x12a7aa0()*-0.022792);
}

double NNfunction_sb_uLdR::synapse0x12b7960() {
   return (neuron0x12a7de0()*-0.0156627);
}

double NNfunction_sb_uLdR::synapse0x12b79a0() {
   return (neuron0x12a8120()*-0.00228428);
}

double NNfunction_sb_uLdR::synapse0x12b7d20() {
   return (neuron0x12a3560()*-0.687312);
}

double NNfunction_sb_uLdR::synapse0x12b7d60() {
   return (neuron0x12a38a0()*0.53184);
}

double NNfunction_sb_uLdR::synapse0x12b7da0() {
   return (neuron0x12a3be0()*-0.440941);
}

double NNfunction_sb_uLdR::synapse0x12b7de0() {
   return (neuron0x12a3f20()*0.511016);
}

double NNfunction_sb_uLdR::synapse0x12b7e20() {
   return (neuron0x12a4260()*0.139516);
}

double NNfunction_sb_uLdR::synapse0x12b7e60() {
   return (neuron0x12a45a0()*-0.211319);
}

double NNfunction_sb_uLdR::synapse0x12b7ea0() {
   return (neuron0x12a48e0()*-0.548908);
}

double NNfunction_sb_uLdR::synapse0x12b7ee0() {
   return (neuron0x12a4c20()*-0.0947248);
}

double NNfunction_sb_uLdR::synapse0x12b7f20() {
   return (neuron0x12a4f60()*-0.283157);
}

double NNfunction_sb_uLdR::synapse0x12b7f60() {
   return (neuron0x12a52a0()*0.000445344);
}

double NNfunction_sb_uLdR::synapse0x12b7fa0() {
   return (neuron0x12a55e0()*0.187919);
}

double NNfunction_sb_uLdR::synapse0x12b7fe0() {
   return (neuron0x12a5920()*0.336139);
}

double NNfunction_sb_uLdR::synapse0x12b8020() {
   return (neuron0x12a5c60()*-0.175876);
}

double NNfunction_sb_uLdR::synapse0x12b8060() {
   return (neuron0x12a5fa0()*0.130331);
}

double NNfunction_sb_uLdR::synapse0x12b80a0() {
   return (neuron0x12a62e0()*-0.860597);
}

double NNfunction_sb_uLdR::synapse0x12b80e0() {
   return (neuron0x12a6620()*-0.0192073);
}

double NNfunction_sb_uLdR::synapse0x12b7b70() {
   return (neuron0x12a6960()*-0.0194018);
}

double NNfunction_sb_uLdR::synapse0x12b7bb0() {
   return (neuron0x12a6ec0()*-0.210125);
}

double NNfunction_sb_uLdR::synapse0x12b8230() {
   return (neuron0x12a70e0()*-0.114584);
}

double NNfunction_sb_uLdR::synapse0x12b8270() {
   return (neuron0x12a7420()*-0.21637);
}

double NNfunction_sb_uLdR::synapse0x12b82b0() {
   return (neuron0x12a7760()*-0.0525125);
}

double NNfunction_sb_uLdR::synapse0x12b82f0() {
   return (neuron0x12a7aa0()*0.10717);
}

double NNfunction_sb_uLdR::synapse0x12b8330() {
   return (neuron0x12a7de0()*-0.112758);
}

double NNfunction_sb_uLdR::synapse0x12b8370() {
   return (neuron0x12a8120()*-0.0734768);
}

double NNfunction_sb_uLdR::synapse0x12b86f0() {
   return (neuron0x12a3560()*0.0012588);
}

double NNfunction_sb_uLdR::synapse0x12b8730() {
   return (neuron0x12a38a0()*0.0214576);
}

double NNfunction_sb_uLdR::synapse0x12b8770() {
   return (neuron0x12a3be0()*0.00522776);
}

double NNfunction_sb_uLdR::synapse0x12b87b0() {
   return (neuron0x12a3f20()*-0.00734172);
}

double NNfunction_sb_uLdR::synapse0x12b87f0() {
   return (neuron0x12a4260()*-0.000525746);
}

double NNfunction_sb_uLdR::synapse0x12b8830() {
   return (neuron0x12a45a0()*-0.0108816);
}

double NNfunction_sb_uLdR::synapse0x12b8870() {
   return (neuron0x12a48e0()*-0.0161462);
}

double NNfunction_sb_uLdR::synapse0x12b88b0() {
   return (neuron0x12a4c20()*0.00154834);
}

double NNfunction_sb_uLdR::synapse0x12b88f0() {
   return (neuron0x12a4f60()*0.0664903);
}

double NNfunction_sb_uLdR::synapse0x12b8930() {
   return (neuron0x12a52a0()*0.0146077);
}

double NNfunction_sb_uLdR::synapse0x12b8970() {
   return (neuron0x12a55e0()*-0.0122758);
}

double NNfunction_sb_uLdR::synapse0x12b89b0() {
   return (neuron0x12a5920()*0.409675);
}

double NNfunction_sb_uLdR::synapse0x12b89f0() {
   return (neuron0x12a5c60()*0.00107482);
}

double NNfunction_sb_uLdR::synapse0x12b8a30() {
   return (neuron0x12a5fa0()*-0.0207461);
}

double NNfunction_sb_uLdR::synapse0x12b8a70() {
   return (neuron0x12a62e0()*0.00523877);
}

double NNfunction_sb_uLdR::synapse0x12b8ab0() {
   return (neuron0x12a6620()*-0.00413473);
}

double NNfunction_sb_uLdR::synapse0x12b8540() {
   return (neuron0x12a6960()*-0.0260506);
}

double NNfunction_sb_uLdR::synapse0x12b8580() {
   return (neuron0x12a6ec0()*-0.880426);
}

double NNfunction_sb_uLdR::synapse0x12b8c00() {
   return (neuron0x12a70e0()*0.00382775);
}

double NNfunction_sb_uLdR::synapse0x12b8c40() {
   return (neuron0x12a7420()*-0.0280221);
}

double NNfunction_sb_uLdR::synapse0x12b8c80() {
   return (neuron0x12a7760()*0.0161235);
}

double NNfunction_sb_uLdR::synapse0x12b8cc0() {
   return (neuron0x12a7aa0()*0.0214983);
}

double NNfunction_sb_uLdR::synapse0x12b8d00() {
   return (neuron0x12a7de0()*-0.0145417);
}

double NNfunction_sb_uLdR::synapse0x12b8d40() {
   return (neuron0x12a8120()*-0.0187766);
}

double NNfunction_sb_uLdR::synapse0x12cac10() {
   return (neuron0x12a3560()*0.0336943);
}

double NNfunction_sb_uLdR::synapse0x12cac50() {
   return (neuron0x12a38a0()*-0.00298458);
}

double NNfunction_sb_uLdR::synapse0x12cac90() {
   return (neuron0x12a3be0()*-0.00505381);
}

double NNfunction_sb_uLdR::synapse0x12cacd0() {
   return (neuron0x12a3f20()*-3.937);
}

double NNfunction_sb_uLdR::synapse0x12cad10() {
   return (neuron0x12a4260()*0.0353501);
}

double NNfunction_sb_uLdR::synapse0x12cad50() {
   return (neuron0x12a45a0()*0.0145874);
}

double NNfunction_sb_uLdR::synapse0x12cad90() {
   return (neuron0x12a48e0()*0.0223467);
}

double NNfunction_sb_uLdR::synapse0x12cadd0() {
   return (neuron0x12a4c20()*-0.00174713);
}

double NNfunction_sb_uLdR::synapse0x12cae10() {
   return (neuron0x12a4f60()*-0.00317459);
}

double NNfunction_sb_uLdR::synapse0x12cae50() {
   return (neuron0x12a52a0()*-2.76448e-05);
}

double NNfunction_sb_uLdR::synapse0x12cae90() {
   return (neuron0x12a55e0()*-0.0228492);
}

double NNfunction_sb_uLdR::synapse0x12caed0() {
   return (neuron0x12a5920()*1.47892);
}

double NNfunction_sb_uLdR::synapse0x12caf10() {
   return (neuron0x12a5c60()*-0.0261133);
}

double NNfunction_sb_uLdR::synapse0x12caf50() {
   return (neuron0x12a5fa0()*0.0150377);
}

double NNfunction_sb_uLdR::synapse0x12caf90() {
   return (neuron0x12a62e0()*-0.0316297);
}

double NNfunction_sb_uLdR::synapse0x12cafd0() {
   return (neuron0x12a6620()*-0.00613594);
}

double NNfunction_sb_uLdR::synapse0x12b8d80() {
   return (neuron0x12a6960()*0.0102911);
}

double NNfunction_sb_uLdR::synapse0x12b8dc0() {
   return (neuron0x12a6ec0()*0.788832);
}

double NNfunction_sb_uLdR::synapse0x12cb120() {
   return (neuron0x12a70e0()*-0.00407957);
}

double NNfunction_sb_uLdR::synapse0x12cb160() {
   return (neuron0x12a7420()*-0.0335095);
}

double NNfunction_sb_uLdR::synapse0x12cb1a0() {
   return (neuron0x12a7760()*0.00860646);
}

double NNfunction_sb_uLdR::synapse0x12cb1e0() {
   return (neuron0x12a7aa0()*0.0114588);
}

double NNfunction_sb_uLdR::synapse0x12cb220() {
   return (neuron0x12a7de0()*0.00909008);
}

double NNfunction_sb_uLdR::synapse0x12cb260() {
   return (neuron0x12a8120()*-0.00367415);
}

double NNfunction_sb_uLdR::synapse0x12cb5e0() {
   return (neuron0x12a3560()*0.0449279);
}

double NNfunction_sb_uLdR::synapse0x12cb620() {
   return (neuron0x12a38a0()*-0.024101);
}

double NNfunction_sb_uLdR::synapse0x12cb660() {
   return (neuron0x12a3be0()*-0.062463);
}

double NNfunction_sb_uLdR::synapse0x12cb6a0() {
   return (neuron0x12a3f20()*1.03593);
}

double NNfunction_sb_uLdR::synapse0x12cb6e0() {
   return (neuron0x12a4260()*0.0165541);
}

double NNfunction_sb_uLdR::synapse0x12cb720() {
   return (neuron0x12a45a0()*0.00246511);
}

double NNfunction_sb_uLdR::synapse0x12cb760() {
   return (neuron0x12a48e0()*-0.033852);
}

double NNfunction_sb_uLdR::synapse0x12cb7a0() {
   return (neuron0x12a4c20()*0.000240758);
}

double NNfunction_sb_uLdR::synapse0x12cb7e0() {
   return (neuron0x12a4f60()*0.0444232);
}

double NNfunction_sb_uLdR::synapse0x12cb820() {
   return (neuron0x12a52a0()*-0.0158851);
}

double NNfunction_sb_uLdR::synapse0x12cb860() {
   return (neuron0x12a55e0()*-0.0226049);
}

double NNfunction_sb_uLdR::synapse0x12cb8a0() {
   return (neuron0x12a5920()*-0.121072);
}

double NNfunction_sb_uLdR::synapse0x12cb8e0() {
   return (neuron0x12a5c60()*-0.00460456);
}

double NNfunction_sb_uLdR::synapse0x12cb920() {
   return (neuron0x12a5fa0()*-0.0125673);
}

double NNfunction_sb_uLdR::synapse0x12cb960() {
   return (neuron0x12a62e0()*-0.00312919);
}

double NNfunction_sb_uLdR::synapse0x12cb9a0() {
   return (neuron0x12a6620()*0.0249988);
}

double NNfunction_sb_uLdR::synapse0x12cb430() {
   return (neuron0x12a6960()*0.0238867);
}

double NNfunction_sb_uLdR::synapse0x12cb470() {
   return (neuron0x12a6ec0()*0.837399);
}

double NNfunction_sb_uLdR::synapse0x12cbaf0() {
   return (neuron0x12a70e0()*-0.0427798);
}

double NNfunction_sb_uLdR::synapse0x12cbb30() {
   return (neuron0x12a7420()*0.0298415);
}

double NNfunction_sb_uLdR::synapse0x12cbb70() {
   return (neuron0x12a7760()*0.00948418);
}

double NNfunction_sb_uLdR::synapse0x12cbbb0() {
   return (neuron0x12a7aa0()*-0.0325294);
}

double NNfunction_sb_uLdR::synapse0x12cbbf0() {
   return (neuron0x12a7de0()*-0.0210537);
}

double NNfunction_sb_uLdR::synapse0x12cbc30() {
   return (neuron0x12a8120()*0.00106281);
}

double NNfunction_sb_uLdR::synapse0x12cbfb0() {
   return (neuron0x12a3560()*0.0524713);
}

double NNfunction_sb_uLdR::synapse0x12cbff0() {
   return (neuron0x12a38a0()*-0.0728392);
}

double NNfunction_sb_uLdR::synapse0x12cc030() {
   return (neuron0x12a3be0()*-1.28637);
}

double NNfunction_sb_uLdR::synapse0x12cc070() {
   return (neuron0x12a3f20()*-0.0459513);
}

double NNfunction_sb_uLdR::synapse0x12cc0b0() {
   return (neuron0x12a4260()*0.0287285);
}

double NNfunction_sb_uLdR::synapse0x12cc0f0() {
   return (neuron0x12a45a0()*-0.045697);
}

double NNfunction_sb_uLdR::synapse0x12cc130() {
   return (neuron0x12a48e0()*-0.082561);
}

double NNfunction_sb_uLdR::synapse0x12cc170() {
   return (neuron0x12a4c20()*-0.0343614);
}

double NNfunction_sb_uLdR::synapse0x12cc1b0() {
   return (neuron0x12a4f60()*0.0740476);
}

double NNfunction_sb_uLdR::synapse0x12cc1f0() {
   return (neuron0x12a52a0()*0.0542711);
}

double NNfunction_sb_uLdR::synapse0x12cc230() {
   return (neuron0x12a55e0()*0.0551068);
}

double NNfunction_sb_uLdR::synapse0x12cc270() {
   return (neuron0x12a5920()*0.484756);
}

double NNfunction_sb_uLdR::synapse0x12cc2b0() {
   return (neuron0x12a5c60()*0.0762948);
}

double NNfunction_sb_uLdR::synapse0x12cc2f0() {
   return (neuron0x12a5fa0()*-0.00466555);
}

double NNfunction_sb_uLdR::synapse0x12cc330() {
   return (neuron0x12a62e0()*-0.107485);
}

double NNfunction_sb_uLdR::synapse0x12cc370() {
   return (neuron0x12a6620()*-0.0703223);
}

double NNfunction_sb_uLdR::synapse0x12cbe00() {
   return (neuron0x12a6960()*-0.0421999);
}

double NNfunction_sb_uLdR::synapse0x12cbe40() {
   return (neuron0x12a6ec0()*-0.0187978);
}

double NNfunction_sb_uLdR::synapse0x12cc4c0() {
   return (neuron0x12a70e0()*-0.0209926);
}

double NNfunction_sb_uLdR::synapse0x12cc500() {
   return (neuron0x12a7420()*-0.234965);
}

double NNfunction_sb_uLdR::synapse0x12cc540() {
   return (neuron0x12a7760()*0.0509816);
}

double NNfunction_sb_uLdR::synapse0x12cc580() {
   return (neuron0x12a7aa0()*0.0766846);
}

double NNfunction_sb_uLdR::synapse0x12cc5c0() {
   return (neuron0x12a7de0()*0.0498413);
}

double NNfunction_sb_uLdR::synapse0x12cc600() {
   return (neuron0x12a8120()*-2.5477e-05);
}

double NNfunction_sb_uLdR::synapse0x12cc980() {
   return (neuron0x12a3560()*0.151721);
}

double NNfunction_sb_uLdR::synapse0x12cc9c0() {
   return (neuron0x12a38a0()*-0.200674);
}

double NNfunction_sb_uLdR::synapse0x12cca00() {
   return (neuron0x12a3be0()*0.425036);
}

double NNfunction_sb_uLdR::synapse0x12cca40() {
   return (neuron0x12a3f20()*1.12369);
}

double NNfunction_sb_uLdR::synapse0x12cca80() {
   return (neuron0x12a4260()*-0.085159);
}

double NNfunction_sb_uLdR::synapse0x12ccac0() {
   return (neuron0x12a45a0()*-0.234074);
}

double NNfunction_sb_uLdR::synapse0x12ccb00() {
   return (neuron0x12a48e0()*0.146689);
}

double NNfunction_sb_uLdR::synapse0x12ccb40() {
   return (neuron0x12a4c20()*-0.167174);
}

double NNfunction_sb_uLdR::synapse0x12ccb80() {
   return (neuron0x12a4f60()*0.0917988);
}

double NNfunction_sb_uLdR::synapse0x12ccbc0() {
   return (neuron0x12a52a0()*0.146146);
}

double NNfunction_sb_uLdR::synapse0x12ccc00() {
   return (neuron0x12a55e0()*-0.0411644);
}

double NNfunction_sb_uLdR::synapse0x12ccc40() {
   return (neuron0x12a5920()*-0.595766);
}

double NNfunction_sb_uLdR::synapse0x12ccc80() {
   return (neuron0x12a5c60()*-0.491917);
}

double NNfunction_sb_uLdR::synapse0x12cccc0() {
   return (neuron0x12a5fa0()*0.257699);
}

double NNfunction_sb_uLdR::synapse0x12ccd00() {
   return (neuron0x12a62e0()*-0.019555);
}

double NNfunction_sb_uLdR::synapse0x12ccd40() {
   return (neuron0x12a6620()*0.00750735);
}

double NNfunction_sb_uLdR::synapse0x12cc7d0() {
   return (neuron0x12a6960()*0.510246);
}

double NNfunction_sb_uLdR::synapse0x12cc810() {
   return (neuron0x12a6ec0()*-0.226408);
}

double NNfunction_sb_uLdR::synapse0x12cce90() {
   return (neuron0x12a70e0()*-0.118292);
}

double NNfunction_sb_uLdR::synapse0x12cced0() {
   return (neuron0x12a7420()*-0.496361);
}

double NNfunction_sb_uLdR::synapse0x12ccf10() {
   return (neuron0x12a7760()*0.180155);
}

double NNfunction_sb_uLdR::synapse0x12ccf50() {
   return (neuron0x12a7aa0()*0.0340577);
}

double NNfunction_sb_uLdR::synapse0x12ccf90() {
   return (neuron0x12a7de0()*-0.146331);
}

double NNfunction_sb_uLdR::synapse0x12ccfd0() {
   return (neuron0x12a8120()*-0.0762367);
}

double NNfunction_sb_uLdR::synapse0x12a9570() {
   return (neuron0x12a85c0()*0.415661);
}

double NNfunction_sb_uLdR::synapse0x12a95b0() {
   return (neuron0x12a8ed0()*-0.352956);
}

double NNfunction_sb_uLdR::synapse0x12aaa80() {
   return (neuron0x12a99b0()*0.552564);
}

double NNfunction_sb_uLdR::synapse0x12aaac0() {
   return (neuron0x1063240()*0.119149);
}

double NNfunction_sb_uLdR::synapse0x12ab450() {
   return (neuron0x12aa7d0()*0.168067);
}

double NNfunction_sb_uLdR::synapse0x12ab490() {
   return (neuron0x12ab1a0()*0.2343);
}

double NNfunction_sb_uLdR::synapse0x12ac220() {
   return (neuron0x12abf70()*-0.129924);
}

double NNfunction_sb_uLdR::synapse0x12ac260() {
   return (neuron0x12ac940()*0.271663);
}

double NNfunction_sb_uLdR::synapse0x12acbf0() {
   return (neuron0x12ad310()*0.673262);
}

double NNfunction_sb_uLdR::synapse0x12acc30() {
   return (neuron0x12addf0()*0.418531);
}

double NNfunction_sb_uLdR::synapse0x12ad5c0() {
   return (neuron0x12ae7c0()*0.203771);
}

double NNfunction_sb_uLdR::synapse0x12ad600() {
   return (neuron0x12ab8a0()*0.0352231);
}

double NNfunction_sb_uLdR::synapse0x12ae0a0() {
   return (neuron0x12b0370()*0.121509);
}

double NNfunction_sb_uLdR::synapse0x12ae0e0() {
   return (neuron0x12b0d40()*-0.404376);
}

double NNfunction_sb_uLdR::synapse0x12aea70() {
   return (neuron0x12b1710()*0.849858);
}

double NNfunction_sb_uLdR::synapse0x12aeab0() {
   return (neuron0x12b20e0()*0.0898381);
}

double NNfunction_sb_uLdR::synapse0x12abb50() {
   return (neuron0x12b3ef0()*0.0461935);
}

double NNfunction_sb_uLdR::synapse0x12abb90() {
   return (neuron0x12b41d0()*0.727957);
}

double NNfunction_sb_uLdR::synapse0x12b0620() {
   return (neuron0x12b4ba0()*0.12805);
}

double NNfunction_sb_uLdR::synapse0x12b0660() {
   return (neuron0x12b5570()*0.189332);
}

double NNfunction_sb_uLdR::synapse0x12b0ff0() {
   return (neuron0x12b5f40()*0.0725436);
}

double NNfunction_sb_uLdR::synapse0x12b1030() {
   return (neuron0x12b6910()*0.321845);
}

double NNfunction_sb_uLdR::synapse0x12b19c0() {
   return (neuron0x12af460()*0.734912);
}

double NNfunction_sb_uLdR::synapse0x12b1a00() {
   return (neuron0x12afe30()*-0.18547);
}

double NNfunction_sb_uLdR::synapse0x12b2390() {
   return (neuron0x12b96a0()*0.445031);
}

double NNfunction_sb_uLdR::synapse0x12b23d0() {
   return (neuron0x12ba070()*-0.321241);
}

double NNfunction_sb_uLdR::synapse0x12a6500() {
   return (neuron0x12baa40()*-0.0466955);
}

double NNfunction_sb_uLdR::synapse0x12a6540() {
   return (neuron0x12bb410()*0.597614);
}

double NNfunction_sb_uLdR::synapse0x12b4480() {
   return (neuron0x12bbde0()*-0.0428556);
}

double NNfunction_sb_uLdR::synapse0x12b44c0() {
   return (neuron0x12bc7b0()*-0.202045);
}

double NNfunction_sb_uLdR::synapse0x12b4e50() {
   return (neuron0x12bd180()*0.44792);
}

double NNfunction_sb_uLdR::synapse0x12b4e90() {
   return (neuron0x12bdb50()*0.194739);
}

double NNfunction_sb_uLdR::synapse0x12b5820() {
   return (neuron0x12b3be0()*0.692147);
}

double NNfunction_sb_uLdR::synapse0x12b5860() {
   return (neuron0x12c0730()*-0.327745);
}

double NNfunction_sb_uLdR::synapse0x12b61f0() {
   return (neuron0x12c1100()*0.55657);
}

double NNfunction_sb_uLdR::synapse0x12b6230() {
   return (neuron0x12c1ad0()*0.298165);
}

double NNfunction_sb_uLdR::synapse0x12b6bc0() {
   return (neuron0x12c24a0()*1.07121);
}

double NNfunction_sb_uLdR::synapse0x12b6c00() {
   return (neuron0x12c2e70()*0.332231);
}

double NNfunction_sb_uLdR::synapse0x12af710() {
   return (neuron0x12c3840()*-0.0976198);
}

double NNfunction_sb_uLdR::synapse0x12af750() {
   return (neuron0x12c4210()*0.714387);
}

double NNfunction_sb_uLdR::synapse0x12b8fc0() {
   return (neuron0x12c4be0()*-0.436842);
}

double NNfunction_sb_uLdR::synapse0x12b9000() {
   return (neuron0x12c57c0()*0.187213);
}

double NNfunction_sb_uLdR::synapse0x12b9950() {
   return (neuron0x12c6190()*0.421082);
}

double NNfunction_sb_uLdR::synapse0x12b9990() {
   return (neuron0x12b7010()*0.777013);
}

double NNfunction_sb_uLdR::synapse0x12ba320() {
   return (neuron0x12b79e0()*-0.101778);
}

double NNfunction_sb_uLdR::synapse0x12ba360() {
   return (neuron0x12b83b0()*-0.129565);
}

double NNfunction_sb_uLdR::synapse0x12bacf0() {
   return (neuron0x12ca9f0()*0.886548);
}

double NNfunction_sb_uLdR::synapse0x12bad30() {
   return (neuron0x12cb2a0()*1.04589);
}

double NNfunction_sb_uLdR::synapse0x12bb6c0() {
   return (neuron0x12cbc70()*0.239811);
}

double NNfunction_sb_uLdR::synapse0x12bb700() {
   return (neuron0x12cc640()*0.0247911);
}

double NNfunction_sb_uLdR::synapse0x12bde00() {
   return (neuron0x12a85c0()*-0.0508613);
}

double NNfunction_sb_uLdR::synapse0x12bde40() {
   return (neuron0x12a8ed0()*2.10518);
}

double NNfunction_sb_uLdR::synapse0x12b33c0() {
   return (neuron0x12a99b0()*0.0659635);
}

double NNfunction_sb_uLdR::synapse0x12b3400() {
   return (neuron0x1063240()*-0.0223966);
}

double NNfunction_sb_uLdR::synapse0x12c09e0() {
   return (neuron0x12aa7d0()*0.191484);
}

double NNfunction_sb_uLdR::synapse0x12c0a20() {
   return (neuron0x12ab1a0()*-0.0188618);
}

double NNfunction_sb_uLdR::synapse0x12c13b0() {
   return (neuron0x12abf70()*0.590168);
}

double NNfunction_sb_uLdR::synapse0x12c13f0() {
   return (neuron0x12ac940()*0.697544);
}

double NNfunction_sb_uLdR::synapse0x12c1d80() {
   return (neuron0x12ad310()*-0.195059);
}

double NNfunction_sb_uLdR::synapse0x12c1dc0() {
   return (neuron0x12addf0()*0.515026);
}

double NNfunction_sb_uLdR::synapse0x12c2750() {
   return (neuron0x12ae7c0()*0.0562581);
}

double NNfunction_sb_uLdR::synapse0x12c2790() {
   return (neuron0x12ab8a0()*-0.0489286);
}

double NNfunction_sb_uLdR::synapse0x12c3120() {
   return (neuron0x12b0370()*0.0516735);
}

double NNfunction_sb_uLdR::synapse0x12c3160() {
   return (neuron0x12b0d40()*-0.0437003);
}

double NNfunction_sb_uLdR::synapse0x12c3af0() {
   return (neuron0x12b1710()*-0.00261386);
}

double NNfunction_sb_uLdR::synapse0x12c3b30() {
   return (neuron0x12b20e0()*0.0630779);
}

double NNfunction_sb_uLdR::synapse0x12c44c0() {
   return (neuron0x12b3ef0()*0.00521919);
}

double NNfunction_sb_uLdR::synapse0x12c4500() {
   return (neuron0x12b41d0()*-1.64134);
}

double NNfunction_sb_uLdR::synapse0x12c4e90() {
   return (neuron0x12b4ba0()*0.296876);
}

double NNfunction_sb_uLdR::synapse0x12c4ed0() {
   return (neuron0x12b5570()*0.412999);
}

double NNfunction_sb_uLdR::synapse0x12c5a70() {
   return (neuron0x12b5f40()*0.0067636);
}

double NNfunction_sb_uLdR::synapse0x12c5ab0() {
   return (neuron0x12b6910()*-0.0264593);
}

double NNfunction_sb_uLdR::synapse0x12c6440() {
   return (neuron0x12af460()*-0.0497659);
}

double NNfunction_sb_uLdR::synapse0x12c6480() {
   return (neuron0x12afe30()*-0.0121334);
}

double NNfunction_sb_uLdR::synapse0x12b72c0() {
   return (neuron0x12b96a0()*-0.035831);
}

double NNfunction_sb_uLdR::synapse0x12b7300() {
   return (neuron0x12ba070()*-0.0745735);
}

double NNfunction_sb_uLdR::synapse0x12b7c90() {
   return (neuron0x12baa40()*0.417473);
}

double NNfunction_sb_uLdR::synapse0x12b7cd0() {
   return (neuron0x12bb410()*1.83634);
}

double NNfunction_sb_uLdR::synapse0x12b8660() {
   return (neuron0x12bbde0()*-0.0628325);
}

double NNfunction_sb_uLdR::synapse0x12b86a0() {
   return (neuron0x12bc7b0()*-0.0156486);
}

double NNfunction_sb_uLdR::synapse0x12cab80() {
   return (neuron0x12bd180()*-0.0177675);
}

double NNfunction_sb_uLdR::synapse0x12cabc0() {
   return (neuron0x12bdb50()*0.0863573);
}

double NNfunction_sb_uLdR::synapse0x12cb550() {
   return (neuron0x12b3be0()*-0.0775167);
}

double NNfunction_sb_uLdR::synapse0x12cb590() {
   return (neuron0x12c0730()*0.066468);
}

double NNfunction_sb_uLdR::synapse0x12cbf20() {
   return (neuron0x12c1100()*0.0482474);
}

double NNfunction_sb_uLdR::synapse0x12cbf60() {
   return (neuron0x12c1ad0()*-0.0215471);
}

double NNfunction_sb_uLdR::synapse0x12cc8f0() {
   return (neuron0x12c24a0()*-0.0549537);
}

double NNfunction_sb_uLdR::synapse0x12cc930() {
   return (neuron0x12c2e70()*0.0611433);
}

double NNfunction_sb_uLdR::synapse0x12a87e0() {
   return (neuron0x12c3840()*-0.294615);
}

double NNfunction_sb_uLdR::synapse0x12a8820() {
   return (neuron0x12c4210()*1.61436);
}

double NNfunction_sb_uLdR::synapse0x12bc090() {
   return (neuron0x12c4be0()*0.460431);
}

double NNfunction_sb_uLdR::synapse0x12bc0d0() {
   return (neuron0x12c57c0()*-0.0244332);
}

double NNfunction_sb_uLdR::synapse0x12cd010() {
   return (neuron0x12c6190()*0.0722034);
}

double NNfunction_sb_uLdR::synapse0x12cd050() {
   return (neuron0x12b7010()*-0.480049);
}

double NNfunction_sb_uLdR::synapse0x12cd090() {
   return (neuron0x12b79e0()*0.053112);
}

double NNfunction_sb_uLdR::synapse0x12cd0d0() {
   return (neuron0x12b83b0()*-0.382158);
}

double NNfunction_sb_uLdR::synapse0x12d3f80() {
   return (neuron0x12ca9f0()*-1.31868);
}

double NNfunction_sb_uLdR::synapse0x12d3fc0() {
   return (neuron0x12cb2a0()*-1.09684);
}

double NNfunction_sb_uLdR::synapse0x12d4000() {
   return (neuron0x12cbc70()*0.079529);
}

double NNfunction_sb_uLdR::synapse0x12d4040() {
   return (neuron0x12cc640()*-0.0267707);
}

double NNfunction_sb_uLdR::synapse0x12d43c0() {
   return (neuron0x12a85c0()*0.0117692);
}

double NNfunction_sb_uLdR::synapse0x12d4400() {
   return (neuron0x12a8ed0()*2.54898);
}

double NNfunction_sb_uLdR::synapse0x12d4440() {
   return (neuron0x12a99b0()*-0.0359984);
}

double NNfunction_sb_uLdR::synapse0x12d4480() {
   return (neuron0x1063240()*-0.0196936);
}

double NNfunction_sb_uLdR::synapse0x12d44c0() {
   return (neuron0x12aa7d0()*0.0141316);
}

double NNfunction_sb_uLdR::synapse0x12d4500() {
   return (neuron0x12ab1a0()*0.00023941);
}

double NNfunction_sb_uLdR::synapse0x12d4540() {
   return (neuron0x12abf70()*0.617328);
}

double NNfunction_sb_uLdR::synapse0x12d4580() {
   return (neuron0x12ac940()*0.415082);
}

double NNfunction_sb_uLdR::synapse0x12d45c0() {
   return (neuron0x12ad310()*0.132021);
}

double NNfunction_sb_uLdR::synapse0x12d4600() {
   return (neuron0x12addf0()*-0.087444);
}

double NNfunction_sb_uLdR::synapse0x12d4640() {
   return (neuron0x12ae7c0()*-0.0162533);
}

double NNfunction_sb_uLdR::synapse0x12d4680() {
   return (neuron0x12ab8a0()*-0.0332066);
}

double NNfunction_sb_uLdR::synapse0x12d46c0() {
   return (neuron0x12b0370()*0.00994654);
}

double NNfunction_sb_uLdR::synapse0x12d4700() {
   return (neuron0x12b0d40()*-0.0429214);
}

double NNfunction_sb_uLdR::synapse0x12d4740() {
   return (neuron0x12b1710()*-0.00800591);
}

double NNfunction_sb_uLdR::synapse0x12d4780() {
   return (neuron0x12b20e0()*0.0275601);
}

double NNfunction_sb_uLdR::synapse0x12d4210() {
   return (neuron0x12b3ef0()*0.0119742);
}

double NNfunction_sb_uLdR::synapse0x12d4250() {
   return (neuron0x12b41d0()*-5.08269);
}

double NNfunction_sb_uLdR::synapse0x12d48d0() {
   return (neuron0x12b4ba0()*1.01997);
}

double NNfunction_sb_uLdR::synapse0x12d4910() {
   return (neuron0x12b5570()*-0.140749);
}

double NNfunction_sb_uLdR::synapse0x12d4950() {
   return (neuron0x12b5f40()*0.140102);
}

double NNfunction_sb_uLdR::synapse0x12d4990() {
   return (neuron0x12b6910()*0.0121547);
}

double NNfunction_sb_uLdR::synapse0x12d49d0() {
   return (neuron0x12af460()*-0.0605021);
}

double NNfunction_sb_uLdR::synapse0x12d4a10() {
   return (neuron0x12afe30()*0.00212338);
}

double NNfunction_sb_uLdR::synapse0x12d4a50() {
   return (neuron0x12b96a0()*0.0115116);
}

double NNfunction_sb_uLdR::synapse0x12d4a90() {
   return (neuron0x12ba070()*0.00474962);
}

double NNfunction_sb_uLdR::synapse0x12d4ad0() {
   return (neuron0x12baa40()*2.6045);
}

double NNfunction_sb_uLdR::synapse0x12d4b10() {
   return (neuron0x12bb410()*-4.40627);
}

double NNfunction_sb_uLdR::synapse0x12d4b50() {
   return (neuron0x12bbde0()*0.00677433);
}

double NNfunction_sb_uLdR::synapse0x12d4b90() {
   return (neuron0x12bc7b0()*0.0172229);
}

double NNfunction_sb_uLdR::synapse0x12d4bd0() {
   return (neuron0x12bd180()*-0.0197778);
}

double NNfunction_sb_uLdR::synapse0x12d4c10() {
   return (neuron0x12bdb50()*-0.0213464);
}

double NNfunction_sb_uLdR::synapse0x12d47c0() {
   return (neuron0x12b3be0()*0.288522);
}

double NNfunction_sb_uLdR::synapse0x12d4800() {
   return (neuron0x12c0730()*-0.0285229);
}

double NNfunction_sb_uLdR::synapse0x12d4840() {
   return (neuron0x12c1100()*0.00710586);
}

double NNfunction_sb_uLdR::synapse0x12d4880() {
   return (neuron0x12c1ad0()*0.0040087);
}

double NNfunction_sb_uLdR::synapse0x12d4e60() {
   return (neuron0x12c24a0()*-0.0122429);
}

double NNfunction_sb_uLdR::synapse0x12d4ea0() {
   return (neuron0x12c2e70()*0.00930346);
}

double NNfunction_sb_uLdR::synapse0x12d4ee0() {
   return (neuron0x12c3840()*-0.356398);
}

double NNfunction_sb_uLdR::synapse0x12d4f20() {
   return (neuron0x12c4210()*-2.54168);
}

double NNfunction_sb_uLdR::synapse0x12d4f60() {
   return (neuron0x12c4be0()*0.852552);
}

double NNfunction_sb_uLdR::synapse0x12d4fa0() {
   return (neuron0x12c57c0()*0.0343575);
}

double NNfunction_sb_uLdR::synapse0x12d4fe0() {
   return (neuron0x12c6190()*-0.0172827);
}

double NNfunction_sb_uLdR::synapse0x12d5020() {
   return (neuron0x12b7010()*-0.70783);
}

double NNfunction_sb_uLdR::synapse0x12d5060() {
   return (neuron0x12b79e0()*0.0216679);
}

double NNfunction_sb_uLdR::synapse0x12d50a0() {
   return (neuron0x12b83b0()*1.4595);
}

double NNfunction_sb_uLdR::synapse0x12d50e0() {
   return (neuron0x12ca9f0()*-0.286043);
}

double NNfunction_sb_uLdR::synapse0x12d5120() {
   return (neuron0x12cb2a0()*0.651196);
}

double NNfunction_sb_uLdR::synapse0x12d5160() {
   return (neuron0x12cbc70()*0.211152);
}

double NNfunction_sb_uLdR::synapse0x12d51a0() {
   return (neuron0x12cc640()*-0.0288729);
}

double NNfunction_sb_uLdR::synapse0x12d5520() {
   return (neuron0x12a85c0()*-0.749598);
}

double NNfunction_sb_uLdR::synapse0x12d5560() {
   return (neuron0x12a8ed0()*-0.503037);
}

double NNfunction_sb_uLdR::synapse0x12d55a0() {
   return (neuron0x12a99b0()*0.828407);
}

double NNfunction_sb_uLdR::synapse0x12d55e0() {
   return (neuron0x1063240()*-0.411493);
}

double NNfunction_sb_uLdR::synapse0x12d5620() {
   return (neuron0x12aa7d0()*1.48133);
}

double NNfunction_sb_uLdR::synapse0x12d5660() {
   return (neuron0x12ab1a0()*-0.552307);
}

double NNfunction_sb_uLdR::synapse0x12d56a0() {
   return (neuron0x12abf70()*0.0186284);
}

double NNfunction_sb_uLdR::synapse0x12d56e0() {
   return (neuron0x12ac940()*1.76484);
}

double NNfunction_sb_uLdR::synapse0x12d5720() {
   return (neuron0x12ad310()*-1.24577);
}

double NNfunction_sb_uLdR::synapse0x12d5760() {
   return (neuron0x12addf0()*2.33527);
}

double NNfunction_sb_uLdR::synapse0x12d57a0() {
   return (neuron0x12ae7c0()*0.630326);
}

double NNfunction_sb_uLdR::synapse0x12d57e0() {
   return (neuron0x12ab8a0()*-1.10678);
}

double NNfunction_sb_uLdR::synapse0x12d5820() {
   return (neuron0x12b0370()*0.764942);
}

double NNfunction_sb_uLdR::synapse0x12d5860() {
   return (neuron0x12b0d40()*-1.04892);
}

double NNfunction_sb_uLdR::synapse0x12d58a0() {
   return (neuron0x12b1710()*0.117484);
}

double NNfunction_sb_uLdR::synapse0x12d58e0() {
   return (neuron0x12b20e0()*1.09655);
}

double NNfunction_sb_uLdR::synapse0x12d5370() {
   return (neuron0x12b3ef0()*-0.388694);
}

double NNfunction_sb_uLdR::synapse0x12d53b0() {
   return (neuron0x12b41d0()*-1.56417);
}

double NNfunction_sb_uLdR::synapse0x12d5a30() {
   return (neuron0x12b4ba0()*-0.701137);
}

double NNfunction_sb_uLdR::synapse0x12d5a70() {
   return (neuron0x12b5570()*2.09514);
}

double NNfunction_sb_uLdR::synapse0x12d5ab0() {
   return (neuron0x12b5f40()*-0.989095);
}

double NNfunction_sb_uLdR::synapse0x12d5af0() {
   return (neuron0x12b6910()*-0.676226);
}

double NNfunction_sb_uLdR::synapse0x12d5b30() {
   return (neuron0x12af460()*-0.462184);
}

double NNfunction_sb_uLdR::synapse0x12d5b70() {
   return (neuron0x12afe30()*0.344897);
}

double NNfunction_sb_uLdR::synapse0x12d5bb0() {
   return (neuron0x12b96a0()*-0.79264);
}

double NNfunction_sb_uLdR::synapse0x12d5bf0() {
   return (neuron0x12ba070()*-0.625268);
}

double NNfunction_sb_uLdR::synapse0x12d5c30() {
   return (neuron0x12baa40()*0.137121);
}

double NNfunction_sb_uLdR::synapse0x12d5c70() {
   return (neuron0x12bb410()*4.23007);
}

double NNfunction_sb_uLdR::synapse0x12d5cb0() {
   return (neuron0x12bbde0()*-0.901371);
}

double NNfunction_sb_uLdR::synapse0x12d5cf0() {
   return (neuron0x12bc7b0()*-0.329218);
}

double NNfunction_sb_uLdR::synapse0x12d5d30() {
   return (neuron0x12bd180()*-0.462754);
}

double NNfunction_sb_uLdR::synapse0x12d5d70() {
   return (neuron0x12bdb50()*1.04084);
}

double NNfunction_sb_uLdR::synapse0x12d5920() {
   return (neuron0x12b3be0()*0.704496);
}

double NNfunction_sb_uLdR::synapse0x12d5960() {
   return (neuron0x12c0730()*0.557768);
}

double NNfunction_sb_uLdR::synapse0x12d59a0() {
   return (neuron0x12c1100()*0.740737);
}

double NNfunction_sb_uLdR::synapse0x12d59e0() {
   return (neuron0x12c1ad0()*-0.774987);
}

double NNfunction_sb_uLdR::synapse0x12d5fc0() {
   return (neuron0x12c24a0()*-1.05973);
}

double NNfunction_sb_uLdR::synapse0x12d6000() {
   return (neuron0x12c2e70()*1.05484);
}

double NNfunction_sb_uLdR::synapse0x12d6040() {
   return (neuron0x12c3840()*0.170859);
}

double NNfunction_sb_uLdR::synapse0x12d6080() {
   return (neuron0x12c4210()*2.21795);
}

double NNfunction_sb_uLdR::synapse0x12d60c0() {
   return (neuron0x12c4be0()*-0.744803);
}

double NNfunction_sb_uLdR::synapse0x12d6100() {
   return (neuron0x12c57c0()*-0.54236);
}

double NNfunction_sb_uLdR::synapse0x12d6140() {
   return (neuron0x12c6190()*0.889625);
}

double NNfunction_sb_uLdR::synapse0x12d6180() {
   return (neuron0x12b7010()*-0.0762264);
}

double NNfunction_sb_uLdR::synapse0x12d61c0() {
   return (neuron0x12b79e0()*0.921641);
}

double NNfunction_sb_uLdR::synapse0x12d6200() {
   return (neuron0x12b83b0()*-1.09318);
}

double NNfunction_sb_uLdR::synapse0x12d6240() {
   return (neuron0x12ca9f0()*-2.6645);
}

double NNfunction_sb_uLdR::synapse0x12d6280() {
   return (neuron0x12cb2a0()*-0.163045);
}

double NNfunction_sb_uLdR::synapse0x12d62c0() {
   return (neuron0x12cbc70()*-0.821839);
}

double NNfunction_sb_uLdR::synapse0x12d6300() {
   return (neuron0x12cc640()*-0.718345);
}

double NNfunction_sb_uLdR::synapse0x12d6680() {
   return (neuron0x12a85c0()*-0.501001);
}

double NNfunction_sb_uLdR::synapse0x12d66c0() {
   return (neuron0x12a8ed0()*-1.26565);
}

double NNfunction_sb_uLdR::synapse0x12d6700() {
   return (neuron0x12a99b0()*0.090021);
}

double NNfunction_sb_uLdR::synapse0x12d6740() {
   return (neuron0x1063240()*-0.822663);
}

double NNfunction_sb_uLdR::synapse0x12d6780() {
   return (neuron0x12aa7d0()*1.11012);
}

double NNfunction_sb_uLdR::synapse0x12d67c0() {
   return (neuron0x12ab1a0()*0.163378);
}

double NNfunction_sb_uLdR::synapse0x12d6800() {
   return (neuron0x12abf70()*0.0614854);
}

double NNfunction_sb_uLdR::synapse0x12d6840() {
   return (neuron0x12ac940()*-0.666031);
}

double NNfunction_sb_uLdR::synapse0x12d6880() {
   return (neuron0x12ad310()*-0.163209);
}

double NNfunction_sb_uLdR::synapse0x12d68c0() {
   return (neuron0x12addf0()*-1.11966);
}

double NNfunction_sb_uLdR::synapse0x12d6900() {
   return (neuron0x12ae7c0()*0.34033);
}

double NNfunction_sb_uLdR::synapse0x12d6940() {
   return (neuron0x12ab8a0()*-1.231);
}

double NNfunction_sb_uLdR::synapse0x12d6980() {
   return (neuron0x12b0370()*0.902292);
}

double NNfunction_sb_uLdR::synapse0x12d69c0() {
   return (neuron0x12b0d40()*-1.39671);
}

double NNfunction_sb_uLdR::synapse0x12d6a00() {
   return (neuron0x12b1710()*1.60922);
}

double NNfunction_sb_uLdR::synapse0x12d6a40() {
   return (neuron0x12b20e0()*1.07359);
}

double NNfunction_sb_uLdR::synapse0x12d64d0() {
   return (neuron0x12b3ef0()*1.24586);
}

double NNfunction_sb_uLdR::synapse0x12d6510() {
   return (neuron0x12b41d0()*4.59189);
}

double NNfunction_sb_uLdR::synapse0x12d6b90() {
   return (neuron0x12b4ba0()*-0.0716002);
}

double NNfunction_sb_uLdR::synapse0x12d6bd0() {
   return (neuron0x12b5570()*-0.432201);
}

double NNfunction_sb_uLdR::synapse0x12d6c10() {
   return (neuron0x12b5f40()*-1.37472);
}

double NNfunction_sb_uLdR::synapse0x12d6c50() {
   return (neuron0x12b6910()*-0.319939);
}

double NNfunction_sb_uLdR::synapse0x12d6c90() {
   return (neuron0x12af460()*0.730814);
}

double NNfunction_sb_uLdR::synapse0x12d6cd0() {
   return (neuron0x12afe30()*-1.06168);
}

double NNfunction_sb_uLdR::synapse0x12d6d10() {
   return (neuron0x12b96a0()*-0.493432);
}

double NNfunction_sb_uLdR::synapse0x12d6d50() {
   return (neuron0x12ba070()*-1.84814);
}

double NNfunction_sb_uLdR::synapse0x12d6d90() {
   return (neuron0x12baa40()*0.198983);
}

double NNfunction_sb_uLdR::synapse0x12d6dd0() {
   return (neuron0x12bb410()*2.71822);
}

double NNfunction_sb_uLdR::synapse0x12d6e10() {
   return (neuron0x12bbde0()*-0.0992084);
}

double NNfunction_sb_uLdR::synapse0x12d6e50() {
   return (neuron0x12bc7b0()*-1.89763);
}

double NNfunction_sb_uLdR::synapse0x12d6e90() {
   return (neuron0x12bd180()*-0.9685);
}

double NNfunction_sb_uLdR::synapse0x12d6ed0() {
   return (neuron0x12bdb50()*0.89399);
}

double NNfunction_sb_uLdR::synapse0x12d6a80() {
   return (neuron0x12b3be0()*0.643453);
}

double NNfunction_sb_uLdR::synapse0x12d6ac0() {
   return (neuron0x12c0730()*0.508589);
}

double NNfunction_sb_uLdR::synapse0x12d6b00() {
   return (neuron0x12c1100()*0.613389);
}

double NNfunction_sb_uLdR::synapse0x12d6b40() {
   return (neuron0x12c1ad0()*-0.147331);
}

double NNfunction_sb_uLdR::synapse0x12d7120() {
   return (neuron0x12c24a0()*0.541601);
}

double NNfunction_sb_uLdR::synapse0x12d7160() {
   return (neuron0x12c2e70()*0.0921137);
}

double NNfunction_sb_uLdR::synapse0x12d71a0() {
   return (neuron0x12c3840()*0.503331);
}

double NNfunction_sb_uLdR::synapse0x12d71e0() {
   return (neuron0x12c4210()*1.02311);
}

double NNfunction_sb_uLdR::synapse0x12d7220() {
   return (neuron0x12c4be0()*-1.05153);
}

double NNfunction_sb_uLdR::synapse0x12d7260() {
   return (neuron0x12c57c0()*1.35626);
}

double NNfunction_sb_uLdR::synapse0x12d72a0() {
   return (neuron0x12c6190()*-0.100356);
}

double NNfunction_sb_uLdR::synapse0x12d72e0() {
   return (neuron0x12b7010()*2.1108);
}

double NNfunction_sb_uLdR::synapse0x12d7320() {
   return (neuron0x12b79e0()*0.389451);
}

double NNfunction_sb_uLdR::synapse0x12d7360() {
   return (neuron0x12b83b0()*-1.25778);
}

double NNfunction_sb_uLdR::synapse0x12d73a0() {
   return (neuron0x12ca9f0()*3.11644);
}

double NNfunction_sb_uLdR::synapse0x12d73e0() {
   return (neuron0x12cb2a0()*1.67172);
}

double NNfunction_sb_uLdR::synapse0x12d7420() {
   return (neuron0x12cbc70()*-1.03836);
}

double NNfunction_sb_uLdR::synapse0x12d7460() {
   return (neuron0x12cc640()*1.7707);
}

double NNfunction_sb_uLdR::synapse0x12a8580() {
   return (neuron0x12d3840()*-0.70706);
}

double NNfunction_sb_uLdR::synapse0x12d76c0() {
   return (neuron0x12d3be0()*7.29931);
}

double NNfunction_sb_uLdR::synapse0x12d7700() {
   return (neuron0x12d4080()*10.8516);
}

double NNfunction_sb_uLdR::synapse0x12d7740() {
   return (neuron0x12d51e0()*-6.79645);
}

double NNfunction_sb_uLdR::synapse0x12d7780() {
   return (neuron0x12d6340()*-6.08146);
}

