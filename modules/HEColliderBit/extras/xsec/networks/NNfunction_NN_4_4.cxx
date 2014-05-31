#include "NNfunction_NN_4_4.h"
#include <cmath>

double NNfunction_NN_4_4::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.6997)/15.2557;
   input1 = (in1 - -1.01536)/233.307;
   input2 = (in2 - 251.117)/203.382;
   input3 = (in3 - -20.4214)/852.668;
   input4 = (in4 - 1040.61)/899.192;
   input5 = (in5 - 939.127)/952.265;
   input6 = (in6 - 943.039)/950.318;
   input7 = (in7 - 954.38)/929.77;
   input8 = (in8 - 941.698)/971.793;
   input9 = (in9 - 922.091)/958.25;
   input10 = (in10 - 974.975)/945.256;
   input11 = (in11 - 557.115)/732.219;
   input12 = (in12 - 711.383)/856.536;
   input13 = (in13 - 496.621)/518.013;
   input14 = (in14 - 627.213)/751.213;
   input15 = (in15 - 706.206)/794.849;
   input16 = (in16 - 545.556)/578.39;
   input17 = (in17 - 727.51)/874.501;
   input18 = (in18 - 733.556)/882.645;
   input19 = (in19 - 748.786)/849.264;
   input20 = (in20 - -4.27671)/500.173;
   input21 = (in21 - -4.61414)/1139.19;
   input22 = (in22 - 0.170508)/1198.64;
   input23 = (in23 - -26.347)/144.09;
   switch(index) {
     case 0:
         return neuron0x293f1d0();
     default:
         return 0.;
   }
}

double NNfunction_NN_4_4::Value(int index, double* input) {
   input0 = (input[0] - 23.6997)/15.2557;
   input1 = (input[1] - -1.01536)/233.307;
   input2 = (input[2] - 251.117)/203.382;
   input3 = (input[3] - -20.4214)/852.668;
   input4 = (input[4] - 1040.61)/899.192;
   input5 = (input[5] - 939.127)/952.265;
   input6 = (input[6] - 943.039)/950.318;
   input7 = (input[7] - 954.38)/929.77;
   input8 = (input[8] - 941.698)/971.793;
   input9 = (input[9] - 922.091)/958.25;
   input10 = (input[10] - 974.975)/945.256;
   input11 = (input[11] - 557.115)/732.219;
   input12 = (input[12] - 711.383)/856.536;
   input13 = (input[13] - 496.621)/518.013;
   input14 = (input[14] - 627.213)/751.213;
   input15 = (input[15] - 706.206)/794.849;
   input16 = (input[16] - 545.556)/578.39;
   input17 = (input[17] - 727.51)/874.501;
   input18 = (input[18] - 733.556)/882.645;
   input19 = (input[19] - 748.786)/849.264;
   input20 = (input[20] - -4.27671)/500.173;
   input21 = (input[21] - -4.61414)/1139.19;
   input22 = (input[22] - 0.170508)/1198.64;
   input23 = (input[23] - -26.347)/144.09;
   switch(index) {
     case 0:
         return neuron0x293f1d0();
     default:
         return 0.;
   }
}

double NNfunction_NN_4_4::neuron0x290b290() {
   return input0;
}

double NNfunction_NN_4_4::neuron0x290b5d0() {
   return input1;
}

double NNfunction_NN_4_4::neuron0x290b910() {
   return input2;
}

double NNfunction_NN_4_4::neuron0x290bc50() {
   return input3;
}

double NNfunction_NN_4_4::neuron0x290bf90() {
   return input4;
}

double NNfunction_NN_4_4::neuron0x290c2d0() {
   return input5;
}

double NNfunction_NN_4_4::neuron0x290c610() {
   return input6;
}

double NNfunction_NN_4_4::neuron0x290c950() {
   return input7;
}

double NNfunction_NN_4_4::neuron0x290cc90() {
   return input8;
}

double NNfunction_NN_4_4::neuron0x290cfd0() {
   return input9;
}

double NNfunction_NN_4_4::neuron0x290d310() {
   return input10;
}

double NNfunction_NN_4_4::neuron0x290d650() {
   return input11;
}

double NNfunction_NN_4_4::neuron0x290d990() {
   return input12;
}

double NNfunction_NN_4_4::neuron0x290dcd0() {
   return input13;
}

double NNfunction_NN_4_4::neuron0x290e010() {
   return input14;
}

double NNfunction_NN_4_4::neuron0x290e350() {
   return input15;
}

double NNfunction_NN_4_4::neuron0x290e690() {
   return input16;
}

double NNfunction_NN_4_4::neuron0x290ebf0() {
   return input17;
}

double NNfunction_NN_4_4::neuron0x290ee10() {
   return input18;
}

double NNfunction_NN_4_4::neuron0x290f150() {
   return input19;
}

double NNfunction_NN_4_4::neuron0x290f490() {
   return input20;
}

double NNfunction_NN_4_4::neuron0x290f7d0() {
   return input21;
}

double NNfunction_NN_4_4::neuron0x290fb10() {
   return input22;
}

double NNfunction_NN_4_4::neuron0x290fe50() {
   return input23;
}

double NNfunction_NN_4_4::input0x29102f0() {
   double input = 0.0861657;
   input += synapse0x26cb100();
   input += synapse0x290b150();
   input += synapse0x290b190();
   input += synapse0x29105a0();
   input += synapse0x29105e0();
   input += synapse0x2910620();
   input += synapse0x2910660();
   input += synapse0x29106a0();
   input += synapse0x29106e0();
   input += synapse0x2910720();
   input += synapse0x2910760();
   input += synapse0x29107a0();
   input += synapse0x29107e0();
   input += synapse0x2910820();
   input += synapse0x2910860();
   input += synapse0x29108a0();
   input += synapse0x290b0c0();
   input += synapse0x290b100();
   input += synapse0x26bc9a0();
   input += synapse0x26bc9e0();
   input += synapse0x2910b00();
   input += synapse0x2910b40();
   input += synapse0x2910b80();
   input += synapse0x2910bc0();
   return input;
}

double NNfunction_NN_4_4::neuron0x29102f0() {
   double input = input0x29102f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x2910c00() {
   double input = 0.352286;
   input += synapse0x2910f40();
   input += synapse0x2910f80();
   input += synapse0x2910fc0();
   input += synapse0x2911000();
   input += synapse0x2911040();
   input += synapse0x2911080();
   input += synapse0x29110c0();
   input += synapse0x2911100();
   input += synapse0x2911140();
   input += synapse0x29109f0();
   input += synapse0x2910a30();
   input += synapse0x2910a70();
   input += synapse0x2910ab0();
   input += synapse0x2911390();
   input += synapse0x29113d0();
   input += synapse0x2911410();
   input += synapse0x2910d90();
   input += synapse0x2910dd0();
   input += synapse0x2911560();
   input += synapse0x29115a0();
   input += synapse0x29115e0();
   input += synapse0x2911620();
   input += synapse0x2911660();
   input += synapse0x29116a0();
   return input;
}

double NNfunction_NN_4_4::neuron0x2910c00() {
   double input = input0x2910c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x29116e0() {
   double input = -1.00525;
   input += synapse0x2911a20();
   input += synapse0x2911a60();
   input += synapse0x2911aa0();
   input += synapse0x2911ae0();
   input += synapse0x2911b20();
   input += synapse0x2911b60();
   input += synapse0x2911ba0();
   input += synapse0x2911be0();
   input += synapse0x2911c20();
   input += synapse0x2911c60();
   input += synapse0x2911ca0();
   input += synapse0x2911ce0();
   input += synapse0x2911d20();
   input += synapse0x2911d60();
   input += synapse0x2911da0();
   input += synapse0x2911de0();
   input += synapse0x2911870();
   input += synapse0x29118b0();
   input += synapse0x26ca7f0();
   input += synapse0x26ca830();
   input += synapse0x28fa320();
   input += synapse0x28fa360();
   input += synapse0x28fa3a0();
   input += synapse0x290b1d0();
   return input;
}

double NNfunction_NN_4_4::neuron0x29116e0() {
   double input = input0x29116e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x26caf70() {
   double input = -3.35003;
   input += synapse0x2911330();
   input += synapse0x290b210();
   input += synapse0x290b250();
   input += synapse0x2911f30();
   input += synapse0x2911f70();
   input += synapse0x2911fb0();
   input += synapse0x2911ff0();
   input += synapse0x2912030();
   input += synapse0x2912070();
   input += synapse0x29120b0();
   input += synapse0x29120f0();
   input += synapse0x2912130();
   input += synapse0x2912170();
   input += synapse0x29121b0();
   input += synapse0x29121f0();
   input += synapse0x2912230();
   input += synapse0x2911180();
   input += synapse0x29111c0();
   input += synapse0x2912380();
   input += synapse0x29123c0();
   input += synapse0x2912400();
   input += synapse0x2912440();
   input += synapse0x2912480();
   input += synapse0x29124c0();
   return input;
}

double NNfunction_NN_4_4::neuron0x26caf70() {
   double input = input0x26caf70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x2912500() {
   double input = -1.34836;
   input += synapse0x2912840();
   input += synapse0x2912880();
   input += synapse0x29128c0();
   input += synapse0x2912900();
   input += synapse0x2912940();
   input += synapse0x2912980();
   input += synapse0x29129c0();
   input += synapse0x2912a00();
   input += synapse0x2912a40();
   input += synapse0x2912a80();
   input += synapse0x2912ac0();
   input += synapse0x2912b00();
   input += synapse0x2912b40();
   input += synapse0x2912b80();
   input += synapse0x2912bc0();
   input += synapse0x2912c00();
   input += synapse0x2912690();
   input += synapse0x29126d0();
   input += synapse0x2912d50();
   input += synapse0x2912d90();
   input += synapse0x2912dd0();
   input += synapse0x2912e10();
   input += synapse0x2912e50();
   input += synapse0x2912e90();
   return input;
}

double NNfunction_NN_4_4::neuron0x2912500() {
   double input = input0x2912500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x2912ed0() {
   double input = -1.3271;
   input += synapse0x2913210();
   input += synapse0x2913250();
   input += synapse0x2913290();
   input += synapse0x29132d0();
   input += synapse0x2913310();
   input += synapse0x2913350();
   input += synapse0x2913390();
   input += synapse0x29133d0();
   input += synapse0x2913410();
   input += synapse0x26cab60();
   input += synapse0x26caba0();
   input += synapse0x26cabe0();
   input += synapse0x26cac20();
   input += synapse0x26cac60();
   input += synapse0x26caca0();
   input += synapse0x26cace0();
   input += synapse0x2913060();
   input += synapse0x29130a0();
   input += synapse0x26cae30();
   input += synapse0x26cae70();
   input += synapse0x26caeb0();
   input += synapse0x26caef0();
   input += synapse0x26caf30();
   input += synapse0x2913c60();
   return input;
}

double NNfunction_NN_4_4::neuron0x2912ed0() {
   double input = input0x2912ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x2913ca0() {
   double input = 3.23371;
   input += synapse0x2913fe0();
   input += synapse0x2914020();
   input += synapse0x2914060();
   input += synapse0x29140a0();
   input += synapse0x29140e0();
   input += synapse0x2914120();
   input += synapse0x2914160();
   input += synapse0x29141a0();
   input += synapse0x29141e0();
   input += synapse0x2914220();
   input += synapse0x2914260();
   input += synapse0x29142a0();
   input += synapse0x29142e0();
   input += synapse0x2914320();
   input += synapse0x2914360();
   input += synapse0x29143a0();
   input += synapse0x2913e30();
   input += synapse0x2913e70();
   input += synapse0x29144f0();
   input += synapse0x2914530();
   input += synapse0x2914570();
   input += synapse0x29145b0();
   input += synapse0x29145f0();
   input += synapse0x2914630();
   return input;
}

double NNfunction_NN_4_4::neuron0x2913ca0() {
   double input = input0x2913ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x2914670() {
   double input = 0.829476;
   input += synapse0x29149b0();
   input += synapse0x29149f0();
   input += synapse0x2914a30();
   input += synapse0x2914a70();
   input += synapse0x2914ab0();
   input += synapse0x2914af0();
   input += synapse0x2914b30();
   input += synapse0x2914b70();
   input += synapse0x2914bb0();
   input += synapse0x2914bf0();
   input += synapse0x2914c30();
   input += synapse0x2914c70();
   input += synapse0x2914cb0();
   input += synapse0x2914cf0();
   input += synapse0x2914d30();
   input += synapse0x2914d70();
   input += synapse0x2914800();
   input += synapse0x2914840();
   input += synapse0x2914ec0();
   input += synapse0x2914f00();
   input += synapse0x2914f40();
   input += synapse0x2914f80();
   input += synapse0x2914fc0();
   input += synapse0x2915000();
   return input;
}

double NNfunction_NN_4_4::neuron0x2914670() {
   double input = input0x2914670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x2915040() {
   double input = -0.912612;
   input += synapse0x290eae0();
   input += synapse0x290eb20();
   input += synapse0x290eb60();
   input += synapse0x290eba0();
   input += synapse0x2915590();
   input += synapse0x29155d0();
   input += synapse0x2915610();
   input += synapse0x2915650();
   input += synapse0x2915690();
   input += synapse0x29156d0();
   input += synapse0x2915710();
   input += synapse0x2915750();
   input += synapse0x2915790();
   input += synapse0x29157d0();
   input += synapse0x2915810();
   input += synapse0x2915850();
   input += synapse0x29151d0();
   input += synapse0x2915210();
   input += synapse0x29159a0();
   input += synapse0x29159e0();
   input += synapse0x2915a20();
   input += synapse0x2915a60();
   input += synapse0x2915aa0();
   input += synapse0x2915ae0();
   return input;
}

double NNfunction_NN_4_4::neuron0x2915040() {
   double input = input0x2915040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x2915b20() {
   double input = -1.89141;
   input += synapse0x2915e60();
   input += synapse0x2915ea0();
   input += synapse0x2915ee0();
   input += synapse0x2915f20();
   input += synapse0x2915f60();
   input += synapse0x2915fa0();
   input += synapse0x2915fe0();
   input += synapse0x2916020();
   input += synapse0x2916060();
   input += synapse0x29160a0();
   input += synapse0x29160e0();
   input += synapse0x2916120();
   input += synapse0x2916160();
   input += synapse0x29161a0();
   input += synapse0x29161e0();
   input += synapse0x2916220();
   input += synapse0x2915cb0();
   input += synapse0x2915cf0();
   input += synapse0x2916370();
   input += synapse0x29163b0();
   input += synapse0x29163f0();
   input += synapse0x2916430();
   input += synapse0x2916470();
   input += synapse0x29164b0();
   return input;
}

double NNfunction_NN_4_4::neuron0x2915b20() {
   double input = input0x2915b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x29164f0() {
   double input = -4.36808;
   input += synapse0x2916830();
   input += synapse0x2916870();
   input += synapse0x29168b0();
   input += synapse0x29168f0();
   input += synapse0x2916930();
   input += synapse0x2916970();
   input += synapse0x29169b0();
   input += synapse0x29169f0();
   input += synapse0x2916a30();
   input += synapse0x2916a70();
   input += synapse0x2916ab0();
   input += synapse0x2916af0();
   input += synapse0x2916b30();
   input += synapse0x2916b70();
   input += synapse0x2916bb0();
   input += synapse0x2916bf0();
   input += synapse0x2916680();
   input += synapse0x29166c0();
   input += synapse0x2913450();
   input += synapse0x2913490();
   input += synapse0x29134d0();
   input += synapse0x2913510();
   input += synapse0x2913550();
   input += synapse0x2913590();
   return input;
}

double NNfunction_NN_4_4::neuron0x29164f0() {
   double input = input0x29164f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x29135d0() {
   double input = -2.53093;
   input += synapse0x2913910();
   input += synapse0x2913950();
   input += synapse0x2913990();
   input += synapse0x29139d0();
   input += synapse0x2913a10();
   input += synapse0x2913a50();
   input += synapse0x2913a90();
   input += synapse0x2913ad0();
   input += synapse0x2913b10();
   input += synapse0x2913b50();
   input += synapse0x2913b90();
   input += synapse0x2913bd0();
   input += synapse0x2913c10();
   input += synapse0x2917d50();
   input += synapse0x2917d90();
   input += synapse0x2917dd0();
   input += synapse0x2913760();
   input += synapse0x29137a0();
   input += synapse0x2917f20();
   input += synapse0x2917f60();
   input += synapse0x2917fa0();
   input += synapse0x2917fe0();
   input += synapse0x2918020();
   input += synapse0x2918060();
   return input;
}

double NNfunction_NN_4_4::neuron0x29135d0() {
   double input = input0x29135d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x29180a0() {
   double input = 0.405147;
   input += synapse0x29183e0();
   input += synapse0x2918420();
   input += synapse0x2918460();
   input += synapse0x29184a0();
   input += synapse0x29184e0();
   input += synapse0x2918520();
   input += synapse0x2918560();
   input += synapse0x29185a0();
   input += synapse0x29185e0();
   input += synapse0x2918620();
   input += synapse0x2918660();
   input += synapse0x29186a0();
   input += synapse0x29186e0();
   input += synapse0x2918720();
   input += synapse0x2918760();
   input += synapse0x29187a0();
   input += synapse0x2918230();
   input += synapse0x2918270();
   input += synapse0x29188f0();
   input += synapse0x2918930();
   input += synapse0x2918970();
   input += synapse0x29189b0();
   input += synapse0x29189f0();
   input += synapse0x2918a30();
   return input;
}

double NNfunction_NN_4_4::neuron0x29180a0() {
   double input = input0x29180a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x2918a70() {
   double input = -1.53459;
   input += synapse0x2918db0();
   input += synapse0x2918df0();
   input += synapse0x2918e30();
   input += synapse0x2918e70();
   input += synapse0x2918eb0();
   input += synapse0x2918ef0();
   input += synapse0x2918f30();
   input += synapse0x2918f70();
   input += synapse0x2918fb0();
   input += synapse0x2918ff0();
   input += synapse0x2919030();
   input += synapse0x2919070();
   input += synapse0x29190b0();
   input += synapse0x29190f0();
   input += synapse0x2919130();
   input += synapse0x2919170();
   input += synapse0x2918c00();
   input += synapse0x2918c40();
   input += synapse0x29192c0();
   input += synapse0x2919300();
   input += synapse0x2919340();
   input += synapse0x2919380();
   input += synapse0x29193c0();
   input += synapse0x2919400();
   return input;
}

double NNfunction_NN_4_4::neuron0x2918a70() {
   double input = input0x2918a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x2919440() {
   double input = 0.415753;
   input += synapse0x2919780();
   input += synapse0x29197c0();
   input += synapse0x2919800();
   input += synapse0x2919840();
   input += synapse0x2919880();
   input += synapse0x29198c0();
   input += synapse0x2919900();
   input += synapse0x2919940();
   input += synapse0x2919980();
   input += synapse0x29199c0();
   input += synapse0x2919a00();
   input += synapse0x2919a40();
   input += synapse0x2919a80();
   input += synapse0x2919ac0();
   input += synapse0x2919b00();
   input += synapse0x2919b40();
   input += synapse0x29195d0();
   input += synapse0x2919610();
   input += synapse0x2919c90();
   input += synapse0x2919cd0();
   input += synapse0x2919d10();
   input += synapse0x2919d50();
   input += synapse0x2919d90();
   input += synapse0x2919dd0();
   return input;
}

double NNfunction_NN_4_4::neuron0x2919440() {
   double input = input0x2919440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x2919e10() {
   double input = 0.541838;
   input += synapse0x291a150();
   input += synapse0x290b4b0();
   input += synapse0x290b4f0();
   input += synapse0x290b7f0();
   input += synapse0x290b830();
   input += synapse0x290bb30();
   input += synapse0x290bb70();
   input += synapse0x290be70();
   input += synapse0x290beb0();
   input += synapse0x290c1b0();
   input += synapse0x290c1f0();
   input += synapse0x290c4f0();
   input += synapse0x290c530();
   input += synapse0x290c830();
   input += synapse0x290c870();
   input += synapse0x290cb70();
   input += synapse0x290cbb0();
   input += synapse0x290ceb0();
   input += synapse0x290cef0();
   input += synapse0x290d1f0();
   input += synapse0x290d230();
   input += synapse0x290d530();
   input += synapse0x290d570();
   input += synapse0x290d870();
   return input;
}

double NNfunction_NN_4_4::neuron0x2919e10() {
   double input = input0x2919e10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x291bc20() {
   double input = 2.16808;
   input += synapse0x290d8b0();
   input += synapse0x290e570();
   input += synapse0x290e5b0();
   input += synapse0x2919fa0();
   input += synapse0x2919fe0();
   input += synapse0x290e8b0();
   input += synapse0x290e8f0();
   input += synapse0x26bc880();
   input += synapse0x26bc8c0();
   input += synapse0x290f030();
   input += synapse0x290f070();
   input += synapse0x290f370();
   input += synapse0x290f3b0();
   input += synapse0x290f6b0();
   input += synapse0x290f6f0();
   input += synapse0x290f9f0();
   input += synapse0x290fa30();
   input += synapse0x290fd30();
   input += synapse0x290fd70();
   input += synapse0x2910070();
   input += synapse0x29100b0();
   input += synapse0x290dbb0();
   input += synapse0x290dbf0();
   input += synapse0x291bec0();
   return input;
}

double NNfunction_NN_4_4::neuron0x291bc20() {
   double input = input0x291bc20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x291bf00() {
   double input = -0.212369;
   input += synapse0x291c240();
   input += synapse0x291c280();
   input += synapse0x291c2c0();
   input += synapse0x291c300();
   input += synapse0x291c340();
   input += synapse0x291c380();
   input += synapse0x291c3c0();
   input += synapse0x291c400();
   input += synapse0x291c440();
   input += synapse0x291c480();
   input += synapse0x291c4c0();
   input += synapse0x291c500();
   input += synapse0x291c540();
   input += synapse0x291c580();
   input += synapse0x291c5c0();
   input += synapse0x291c600();
   input += synapse0x291c090();
   input += synapse0x291c0d0();
   input += synapse0x291c750();
   input += synapse0x291c790();
   input += synapse0x291c7d0();
   input += synapse0x291c810();
   input += synapse0x291c850();
   input += synapse0x291c890();
   return input;
}

double NNfunction_NN_4_4::neuron0x291bf00() {
   double input = input0x291bf00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x291c8d0() {
   double input = -1.41009;
   input += synapse0x291cc10();
   input += synapse0x291cc50();
   input += synapse0x291cc90();
   input += synapse0x291ccd0();
   input += synapse0x291cd10();
   input += synapse0x291cd50();
   input += synapse0x291cd90();
   input += synapse0x291cdd0();
   input += synapse0x291ce10();
   input += synapse0x291ce50();
   input += synapse0x291ce90();
   input += synapse0x291ced0();
   input += synapse0x291cf10();
   input += synapse0x291cf50();
   input += synapse0x291cf90();
   input += synapse0x291cfd0();
   input += synapse0x291ca60();
   input += synapse0x291caa0();
   input += synapse0x291d120();
   input += synapse0x291d160();
   input += synapse0x291d1a0();
   input += synapse0x291d1e0();
   input += synapse0x291d220();
   input += synapse0x291d260();
   return input;
}

double NNfunction_NN_4_4::neuron0x291c8d0() {
   double input = input0x291c8d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x291d2a0() {
   double input = 0.682626;
   input += synapse0x291d5e0();
   input += synapse0x291d620();
   input += synapse0x291d660();
   input += synapse0x291d6a0();
   input += synapse0x291d6e0();
   input += synapse0x291d720();
   input += synapse0x291d760();
   input += synapse0x291d7a0();
   input += synapse0x291d7e0();
   input += synapse0x291d820();
   input += synapse0x291d860();
   input += synapse0x291d8a0();
   input += synapse0x291d8e0();
   input += synapse0x291d920();
   input += synapse0x291d960();
   input += synapse0x291d9a0();
   input += synapse0x291d430();
   input += synapse0x291d470();
   input += synapse0x291daf0();
   input += synapse0x291db30();
   input += synapse0x291db70();
   input += synapse0x291dbb0();
   input += synapse0x291dbf0();
   input += synapse0x291dc30();
   return input;
}

double NNfunction_NN_4_4::neuron0x291d2a0() {
   double input = input0x291d2a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x291dc70() {
   double input = -5.83067;
   input += synapse0x291dfb0();
   input += synapse0x291dff0();
   input += synapse0x291e030();
   input += synapse0x291e070();
   input += synapse0x291e0b0();
   input += synapse0x291e0f0();
   input += synapse0x291e130();
   input += synapse0x291e170();
   input += synapse0x291e1b0();
   input += synapse0x291e1f0();
   input += synapse0x291e230();
   input += synapse0x291e270();
   input += synapse0x291e2b0();
   input += synapse0x291e2f0();
   input += synapse0x291e330();
   input += synapse0x291e370();
   input += synapse0x291de00();
   input += synapse0x291de40();
   input += synapse0x291e4c0();
   input += synapse0x291e500();
   input += synapse0x291e540();
   input += synapse0x291e580();
   input += synapse0x291e5c0();
   input += synapse0x291e600();
   return input;
}

double NNfunction_NN_4_4::neuron0x291dc70() {
   double input = input0x291dc70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x291e640() {
   double input = -0.599048;
   input += synapse0x291e980();
   input += synapse0x291e9c0();
   input += synapse0x291ea00();
   input += synapse0x291ea40();
   input += synapse0x291ea80();
   input += synapse0x291eac0();
   input += synapse0x291eb00();
   input += synapse0x291eb40();
   input += synapse0x291eb80();
   input += synapse0x2916d40();
   input += synapse0x2916d80();
   input += synapse0x2916dc0();
   input += synapse0x2916e00();
   input += synapse0x2916e40();
   input += synapse0x2916e80();
   input += synapse0x2916ec0();
   input += synapse0x291e7d0();
   input += synapse0x291e810();
   input += synapse0x2917010();
   input += synapse0x2917050();
   input += synapse0x2917090();
   input += synapse0x29170d0();
   input += synapse0x2917110();
   input += synapse0x2917150();
   return input;
}

double NNfunction_NN_4_4::neuron0x291e640() {
   double input = input0x291e640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x2917190() {
   double input = -2.1567;
   input += synapse0x29174d0();
   input += synapse0x2917510();
   input += synapse0x2917550();
   input += synapse0x2917590();
   input += synapse0x29175d0();
   input += synapse0x2917610();
   input += synapse0x2917650();
   input += synapse0x2917690();
   input += synapse0x29176d0();
   input += synapse0x2917710();
   input += synapse0x2917750();
   input += synapse0x2917790();
   input += synapse0x29177d0();
   input += synapse0x2917810();
   input += synapse0x2917850();
   input += synapse0x2917890();
   input += synapse0x2917320();
   input += synapse0x2917360();
   input += synapse0x29179e0();
   input += synapse0x2917a20();
   input += synapse0x2917a60();
   input += synapse0x2917aa0();
   input += synapse0x2917ae0();
   input += synapse0x2917b20();
   return input;
}

double NNfunction_NN_4_4::neuron0x2917190() {
   double input = input0x2917190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x2917b60() {
   double input = 0.20046;
   input += synapse0x2917cf0();
   input += synapse0x2920d80();
   input += synapse0x2920dc0();
   input += synapse0x2920e00();
   input += synapse0x2920e40();
   input += synapse0x2920e80();
   input += synapse0x2920ec0();
   input += synapse0x2920f00();
   input += synapse0x2920f40();
   input += synapse0x2920f80();
   input += synapse0x2920fc0();
   input += synapse0x2921000();
   input += synapse0x2921040();
   input += synapse0x2921080();
   input += synapse0x29210c0();
   input += synapse0x2921100();
   input += synapse0x2920bd0();
   input += synapse0x2920c10();
   input += synapse0x2921250();
   input += synapse0x2921290();
   input += synapse0x29212d0();
   input += synapse0x2921310();
   input += synapse0x2921350();
   input += synapse0x2921390();
   return input;
}

double NNfunction_NN_4_4::neuron0x2917b60() {
   double input = input0x2917b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x29213d0() {
   double input = -0.613175;
   input += synapse0x2921710();
   input += synapse0x2921750();
   input += synapse0x2921790();
   input += synapse0x29217d0();
   input += synapse0x2921810();
   input += synapse0x2921850();
   input += synapse0x2921890();
   input += synapse0x29218d0();
   input += synapse0x2921910();
   input += synapse0x2921950();
   input += synapse0x2921990();
   input += synapse0x29219d0();
   input += synapse0x2921a10();
   input += synapse0x2921a50();
   input += synapse0x2921a90();
   input += synapse0x2921ad0();
   input += synapse0x2921560();
   input += synapse0x29215a0();
   input += synapse0x2921c20();
   input += synapse0x2921c60();
   input += synapse0x2921ca0();
   input += synapse0x2921ce0();
   input += synapse0x2921d20();
   input += synapse0x2921d60();
   return input;
}

double NNfunction_NN_4_4::neuron0x29213d0() {
   double input = input0x29213d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x2921da0() {
   double input = 0.0952375;
   input += synapse0x29220e0();
   input += synapse0x2922120();
   input += synapse0x2922160();
   input += synapse0x29221a0();
   input += synapse0x29221e0();
   input += synapse0x2922220();
   input += synapse0x2922260();
   input += synapse0x29222a0();
   input += synapse0x29222e0();
   input += synapse0x2922320();
   input += synapse0x2922360();
   input += synapse0x29223a0();
   input += synapse0x29223e0();
   input += synapse0x2922420();
   input += synapse0x2922460();
   input += synapse0x29224a0();
   input += synapse0x2921f30();
   input += synapse0x2921f70();
   input += synapse0x29225f0();
   input += synapse0x2922630();
   input += synapse0x2922670();
   input += synapse0x29226b0();
   input += synapse0x29226f0();
   input += synapse0x2922730();
   return input;
}

double NNfunction_NN_4_4::neuron0x2921da0() {
   double input = input0x2921da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x2922770() {
   double input = -0.954816;
   input += synapse0x2922ab0();
   input += synapse0x2922af0();
   input += synapse0x2922b30();
   input += synapse0x2922b70();
   input += synapse0x2922bb0();
   input += synapse0x2922bf0();
   input += synapse0x2922c30();
   input += synapse0x2922c70();
   input += synapse0x2922cb0();
   input += synapse0x2922cf0();
   input += synapse0x2922d30();
   input += synapse0x2922d70();
   input += synapse0x2922db0();
   input += synapse0x2922df0();
   input += synapse0x2922e30();
   input += synapse0x2922e70();
   input += synapse0x2922900();
   input += synapse0x2922940();
   input += synapse0x2922fc0();
   input += synapse0x2923000();
   input += synapse0x2923040();
   input += synapse0x2923080();
   input += synapse0x29230c0();
   input += synapse0x2923100();
   return input;
}

double NNfunction_NN_4_4::neuron0x2922770() {
   double input = input0x2922770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x2923140() {
   double input = -1.89961;
   input += synapse0x2923480();
   input += synapse0x29234c0();
   input += synapse0x2923500();
   input += synapse0x2923540();
   input += synapse0x2923580();
   input += synapse0x29235c0();
   input += synapse0x2923600();
   input += synapse0x2923640();
   input += synapse0x2923680();
   input += synapse0x29236c0();
   input += synapse0x2923700();
   input += synapse0x2923740();
   input += synapse0x2923780();
   input += synapse0x29237c0();
   input += synapse0x2923800();
   input += synapse0x2923840();
   input += synapse0x29232d0();
   input += synapse0x2923310();
   input += synapse0x2923990();
   input += synapse0x29239d0();
   input += synapse0x2923a10();
   input += synapse0x2923a50();
   input += synapse0x2923a90();
   input += synapse0x2923ad0();
   return input;
}

double NNfunction_NN_4_4::neuron0x2923140() {
   double input = input0x2923140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x2923b10() {
   double input = 0.0587716;
   input += synapse0x2923e50();
   input += synapse0x2923e90();
   input += synapse0x2923ed0();
   input += synapse0x2923f10();
   input += synapse0x2923f50();
   input += synapse0x2923f90();
   input += synapse0x2923fd0();
   input += synapse0x2924010();
   input += synapse0x2924050();
   input += synapse0x2924090();
   input += synapse0x29240d0();
   input += synapse0x2924110();
   input += synapse0x2924150();
   input += synapse0x2924190();
   input += synapse0x29241d0();
   input += synapse0x2924210();
   input += synapse0x2923ca0();
   input += synapse0x2923ce0();
   input += synapse0x2924360();
   input += synapse0x29243a0();
   input += synapse0x29243e0();
   input += synapse0x2924420();
   input += synapse0x2924460();
   input += synapse0x29244a0();
   return input;
}

double NNfunction_NN_4_4::neuron0x2923b10() {
   double input = input0x2923b10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x29244e0() {
   double input = 1.90204;
   input += synapse0x2924820();
   input += synapse0x2924860();
   input += synapse0x29248a0();
   input += synapse0x29248e0();
   input += synapse0x2924920();
   input += synapse0x2924960();
   input += synapse0x29249a0();
   input += synapse0x29249e0();
   input += synapse0x2924a20();
   input += synapse0x2924a60();
   input += synapse0x2924aa0();
   input += synapse0x2924ae0();
   input += synapse0x2924b20();
   input += synapse0x2924b60();
   input += synapse0x2924ba0();
   input += synapse0x2924be0();
   input += synapse0x2924670();
   input += synapse0x29246b0();
   input += synapse0x2924d30();
   input += synapse0x2924d70();
   input += synapse0x2924db0();
   input += synapse0x2924df0();
   input += synapse0x2924e30();
   input += synapse0x2924e70();
   return input;
}

double NNfunction_NN_4_4::neuron0x29244e0() {
   double input = input0x29244e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x2924eb0() {
   double input = -5.50044;
   input += synapse0x29251f0();
   input += synapse0x2925230();
   input += synapse0x2925270();
   input += synapse0x29252b0();
   input += synapse0x29252f0();
   input += synapse0x2925330();
   input += synapse0x2925370();
   input += synapse0x29253b0();
   input += synapse0x29253f0();
   input += synapse0x2925430();
   input += synapse0x2925470();
   input += synapse0x29254b0();
   input += synapse0x29254f0();
   input += synapse0x2925530();
   input += synapse0x2925570();
   input += synapse0x29255b0();
   input += synapse0x2925040();
   input += synapse0x2925080();
   input += synapse0x2925700();
   input += synapse0x2925740();
   input += synapse0x2925780();
   input += synapse0x29257c0();
   input += synapse0x2925800();
   input += synapse0x2925840();
   return input;
}

double NNfunction_NN_4_4::neuron0x2924eb0() {
   double input = input0x2924eb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x2925880() {
   double input = -0.0683162;
   input += synapse0x2925bc0();
   input += synapse0x291a190();
   input += synapse0x291a1d0();
   input += synapse0x291a210();
   input += synapse0x291a460();
   input += synapse0x291a4a0();
   input += synapse0x291a4e0();
   input += synapse0x291a730();
   input += synapse0x291a770();
   input += synapse0x291a9c0();
   input += synapse0x291aa00();
   input += synapse0x291aa40();
   input += synapse0x291ac90();
   input += synapse0x291acd0();
   input += synapse0x291af20();
   input += synapse0x291af60();
   input += synapse0x2925a10();
   input += synapse0x2925a50();
   input += synapse0x291b0b0();
   input += synapse0x291b5c0();
   input += synapse0x291b600();
   input += synapse0x291b640();
   input += synapse0x291b890();
   input += synapse0x291b8d0();
   return input;
}

double NNfunction_NN_4_4::neuron0x2925880() {
   double input = input0x2925880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x291b910() {
   double input = 0.70547;
   input += synapse0x291b180();
   input += synapse0x291b1c0();
   input += synapse0x291b200();
   input += synapse0x291b240();
   input += synapse0x291bbc0();
   input += synapse0x2927f10();
   input += synapse0x2927f50();
   input += synapse0x2927f90();
   input += synapse0x2927fd0();
   input += synapse0x2928010();
   input += synapse0x2928050();
   input += synapse0x2928090();
   input += synapse0x29280d0();
   input += synapse0x2928110();
   input += synapse0x2928150();
   input += synapse0x2928190();
   input += synapse0x291baa0();
   input += synapse0x291bae0();
   input += synapse0x29282e0();
   input += synapse0x2928320();
   input += synapse0x2928360();
   input += synapse0x29283a0();
   input += synapse0x29283e0();
   input += synapse0x2928420();
   return input;
}

double NNfunction_NN_4_4::neuron0x291b910() {
   double input = input0x291b910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x2928460() {
   double input = -2.41636;
   input += synapse0x29287a0();
   input += synapse0x29287e0();
   input += synapse0x2928820();
   input += synapse0x2928860();
   input += synapse0x29288a0();
   input += synapse0x29288e0();
   input += synapse0x2928920();
   input += synapse0x2928960();
   input += synapse0x29289a0();
   input += synapse0x29289e0();
   input += synapse0x2928a20();
   input += synapse0x2928a60();
   input += synapse0x2928aa0();
   input += synapse0x2928ae0();
   input += synapse0x2928b20();
   input += synapse0x2928b60();
   input += synapse0x29285f0();
   input += synapse0x2928630();
   input += synapse0x2928cb0();
   input += synapse0x2928cf0();
   input += synapse0x2928d30();
   input += synapse0x2928d70();
   input += synapse0x2928db0();
   input += synapse0x2928df0();
   return input;
}

double NNfunction_NN_4_4::neuron0x2928460() {
   double input = input0x2928460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x2928e30() {
   double input = -0.317504;
   input += synapse0x2929170();
   input += synapse0x29291b0();
   input += synapse0x29291f0();
   input += synapse0x2929230();
   input += synapse0x2929270();
   input += synapse0x29292b0();
   input += synapse0x29292f0();
   input += synapse0x2929330();
   input += synapse0x2929370();
   input += synapse0x29293b0();
   input += synapse0x29293f0();
   input += synapse0x2929430();
   input += synapse0x2929470();
   input += synapse0x29294b0();
   input += synapse0x29294f0();
   input += synapse0x2929530();
   input += synapse0x2928fc0();
   input += synapse0x2929000();
   input += synapse0x2929680();
   input += synapse0x29296c0();
   input += synapse0x2929700();
   input += synapse0x2929740();
   input += synapse0x2929780();
   input += synapse0x29297c0();
   return input;
}

double NNfunction_NN_4_4::neuron0x2928e30() {
   double input = input0x2928e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x2929800() {
   double input = -0.514463;
   input += synapse0x2929b40();
   input += synapse0x2929b80();
   input += synapse0x2929bc0();
   input += synapse0x2929c00();
   input += synapse0x2929c40();
   input += synapse0x2929c80();
   input += synapse0x2929cc0();
   input += synapse0x2929d00();
   input += synapse0x2929d40();
   input += synapse0x2929d80();
   input += synapse0x2929dc0();
   input += synapse0x2929e00();
   input += synapse0x2929e40();
   input += synapse0x2929e80();
   input += synapse0x2929ec0();
   input += synapse0x2929f00();
   input += synapse0x2929990();
   input += synapse0x29299d0();
   input += synapse0x292a050();
   input += synapse0x292a090();
   input += synapse0x292a0d0();
   input += synapse0x292a110();
   input += synapse0x292a150();
   input += synapse0x292a190();
   return input;
}

double NNfunction_NN_4_4::neuron0x2929800() {
   double input = input0x2929800();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x292a1d0() {
   double input = 0.380172;
   input += synapse0x292a510();
   input += synapse0x292a550();
   input += synapse0x292a590();
   input += synapse0x292a5d0();
   input += synapse0x292a610();
   input += synapse0x292a650();
   input += synapse0x292a690();
   input += synapse0x292a6d0();
   input += synapse0x292a710();
   input += synapse0x292a750();
   input += synapse0x292a790();
   input += synapse0x292a7d0();
   input += synapse0x292a810();
   input += synapse0x292a850();
   input += synapse0x292a890();
   input += synapse0x292a8d0();
   input += synapse0x292a360();
   input += synapse0x292a3a0();
   input += synapse0x292aa20();
   input += synapse0x292aa60();
   input += synapse0x292aaa0();
   input += synapse0x292aae0();
   input += synapse0x292ab20();
   input += synapse0x292ab60();
   return input;
}

double NNfunction_NN_4_4::neuron0x292a1d0() {
   double input = input0x292a1d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x292aba0() {
   double input = -0.376262;
   input += synapse0x292aee0();
   input += synapse0x292af20();
   input += synapse0x292af60();
   input += synapse0x292afa0();
   input += synapse0x292afe0();
   input += synapse0x292b020();
   input += synapse0x292b060();
   input += synapse0x292b0a0();
   input += synapse0x292b0e0();
   input += synapse0x292b120();
   input += synapse0x292b160();
   input += synapse0x292b1a0();
   input += synapse0x292b1e0();
   input += synapse0x292b220();
   input += synapse0x292b260();
   input += synapse0x292b2a0();
   input += synapse0x292ad30();
   input += synapse0x292ad70();
   input += synapse0x292b3f0();
   input += synapse0x292b430();
   input += synapse0x292b470();
   input += synapse0x292b4b0();
   input += synapse0x292b4f0();
   input += synapse0x292b530();
   return input;
}

double NNfunction_NN_4_4::neuron0x292aba0() {
   double input = input0x292aba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x292b570() {
   double input = 0.748047;
   input += synapse0x292b8b0();
   input += synapse0x292b8f0();
   input += synapse0x292b930();
   input += synapse0x292b970();
   input += synapse0x292b9b0();
   input += synapse0x292b9f0();
   input += synapse0x292ba30();
   input += synapse0x292ba70();
   input += synapse0x292bab0();
   input += synapse0x292baf0();
   input += synapse0x292bb30();
   input += synapse0x292bb70();
   input += synapse0x292bbb0();
   input += synapse0x292bbf0();
   input += synapse0x292bc30();
   input += synapse0x292bc70();
   input += synapse0x292b700();
   input += synapse0x292b740();
   input += synapse0x292bdc0();
   input += synapse0x292be00();
   input += synapse0x292be40();
   input += synapse0x292be80();
   input += synapse0x292bec0();
   input += synapse0x292bf00();
   return input;
}

double NNfunction_NN_4_4::neuron0x292b570() {
   double input = input0x292b570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x292bf40() {
   double input = -5.84371;
   input += synapse0x292c280();
   input += synapse0x292c2c0();
   input += synapse0x292c300();
   input += synapse0x292c340();
   input += synapse0x292c380();
   input += synapse0x292c3c0();
   input += synapse0x292c400();
   input += synapse0x292c440();
   input += synapse0x292c480();
   input += synapse0x292c4c0();
   input += synapse0x292c500();
   input += synapse0x292c540();
   input += synapse0x292c580();
   input += synapse0x292c5c0();
   input += synapse0x292c600();
   input += synapse0x292c640();
   input += synapse0x292c0d0();
   input += synapse0x292c110();
   input += synapse0x292c790();
   input += synapse0x292c7d0();
   input += synapse0x292c810();
   input += synapse0x292c850();
   input += synapse0x292c890();
   input += synapse0x292c8d0();
   return input;
}

double NNfunction_NN_4_4::neuron0x292bf40() {
   double input = input0x292bf40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x292c910() {
   double input = -0.461472;
   input += synapse0x2915380();
   input += synapse0x29153c0();
   input += synapse0x2915400();
   input += synapse0x2915440();
   input += synapse0x2915480();
   input += synapse0x29154c0();
   input += synapse0x2915500();
   input += synapse0x2915540();
   input += synapse0x292d060();
   input += synapse0x292d0a0();
   input += synapse0x292d0e0();
   input += synapse0x292d120();
   input += synapse0x292d160();
   input += synapse0x292d1a0();
   input += synapse0x292d1e0();
   input += synapse0x292d220();
   input += synapse0x292caa0();
   input += synapse0x292cae0();
   input += synapse0x292d370();
   input += synapse0x292d3b0();
   input += synapse0x292d3f0();
   input += synapse0x292d430();
   input += synapse0x292d470();
   input += synapse0x292d4b0();
   return input;
}

double NNfunction_NN_4_4::neuron0x292c910() {
   double input = input0x292c910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x292d4f0() {
   double input = -1.15509;
   input += synapse0x292d830();
   input += synapse0x292d870();
   input += synapse0x292d8b0();
   input += synapse0x292d8f0();
   input += synapse0x292d930();
   input += synapse0x292d970();
   input += synapse0x292d9b0();
   input += synapse0x292d9f0();
   input += synapse0x292da30();
   input += synapse0x292da70();
   input += synapse0x292dab0();
   input += synapse0x292daf0();
   input += synapse0x292db30();
   input += synapse0x292db70();
   input += synapse0x292dbb0();
   input += synapse0x292dbf0();
   input += synapse0x292d680();
   input += synapse0x292d6c0();
   input += synapse0x292dd40();
   input += synapse0x292dd80();
   input += synapse0x292ddc0();
   input += synapse0x292de00();
   input += synapse0x292de40();
   input += synapse0x292de80();
   return input;
}

double NNfunction_NN_4_4::neuron0x292d4f0() {
   double input = input0x292d4f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x292dec0() {
   double input = -1.61043;
   input += synapse0x292e200();
   input += synapse0x292e240();
   input += synapse0x292e280();
   input += synapse0x292e2c0();
   input += synapse0x292e300();
   input += synapse0x292e340();
   input += synapse0x292e380();
   input += synapse0x292e3c0();
   input += synapse0x292e400();
   input += synapse0x292e440();
   input += synapse0x292e480();
   input += synapse0x292e4c0();
   input += synapse0x292e500();
   input += synapse0x292e540();
   input += synapse0x292e580();
   input += synapse0x292e5c0();
   input += synapse0x292e050();
   input += synapse0x292e090();
   input += synapse0x291ebc0();
   input += synapse0x291ec00();
   input += synapse0x291ec40();
   input += synapse0x291ec80();
   input += synapse0x291ecc0();
   input += synapse0x291ed00();
   return input;
}

double NNfunction_NN_4_4::neuron0x292dec0() {
   double input = input0x292dec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x291ed40() {
   double input = -0.140928;
   input += synapse0x291f080();
   input += synapse0x291f0c0();
   input += synapse0x291f100();
   input += synapse0x291f140();
   input += synapse0x291f180();
   input += synapse0x291f1c0();
   input += synapse0x291f200();
   input += synapse0x291f240();
   input += synapse0x291f280();
   input += synapse0x291f2c0();
   input += synapse0x291f300();
   input += synapse0x291f340();
   input += synapse0x291f380();
   input += synapse0x291f3c0();
   input += synapse0x291f400();
   input += synapse0x291f440();
   input += synapse0x291eed0();
   input += synapse0x291ef10();
   input += synapse0x291f590();
   input += synapse0x291f5d0();
   input += synapse0x291f610();
   input += synapse0x291f650();
   input += synapse0x291f690();
   input += synapse0x291f6d0();
   return input;
}

double NNfunction_NN_4_4::neuron0x291ed40() {
   double input = input0x291ed40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x291f710() {
   double input = -0.123107;
   input += synapse0x291fa50();
   input += synapse0x291fa90();
   input += synapse0x291fad0();
   input += synapse0x291fb10();
   input += synapse0x291fb50();
   input += synapse0x291fb90();
   input += synapse0x291fbd0();
   input += synapse0x291fc10();
   input += synapse0x291fc50();
   input += synapse0x291fc90();
   input += synapse0x291fcd0();
   input += synapse0x291fd10();
   input += synapse0x291fd50();
   input += synapse0x291fd90();
   input += synapse0x291fdd0();
   input += synapse0x291fe10();
   input += synapse0x291f8a0();
   input += synapse0x291f8e0();
   input += synapse0x291ff60();
   input += synapse0x291ffa0();
   input += synapse0x291ffe0();
   input += synapse0x2920020();
   input += synapse0x2920060();
   input += synapse0x29200a0();
   return input;
}

double NNfunction_NN_4_4::neuron0x291f710() {
   double input = input0x291f710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x29200e0() {
   double input = -2.2952;
   input += synapse0x2920420();
   input += synapse0x2920460();
   input += synapse0x29204a0();
   input += synapse0x29204e0();
   input += synapse0x2920520();
   input += synapse0x2920560();
   input += synapse0x29205a0();
   input += synapse0x29205e0();
   input += synapse0x2920620();
   input += synapse0x2920660();
   input += synapse0x29206a0();
   input += synapse0x29206e0();
   input += synapse0x2920720();
   input += synapse0x2920760();
   input += synapse0x29207a0();
   input += synapse0x29207e0();
   input += synapse0x2920270();
   input += synapse0x29202b0();
   input += synapse0x2920930();
   input += synapse0x2920970();
   input += synapse0x29209b0();
   input += synapse0x29209f0();
   input += synapse0x2920a30();
   input += synapse0x2920a70();
   return input;
}

double NNfunction_NN_4_4::neuron0x29200e0() {
   double input = input0x29200e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x2932720() {
   double input = -0.767731;
   input += synapse0x2932940();
   input += synapse0x2932980();
   input += synapse0x29329c0();
   input += synapse0x2932a00();
   input += synapse0x2932a40();
   input += synapse0x2932a80();
   input += synapse0x2932ac0();
   input += synapse0x2932b00();
   input += synapse0x2932b40();
   input += synapse0x2932b80();
   input += synapse0x2932bc0();
   input += synapse0x2932c00();
   input += synapse0x2932c40();
   input += synapse0x2932c80();
   input += synapse0x2932cc0();
   input += synapse0x2932d00();
   input += synapse0x2920ab0();
   input += synapse0x2920af0();
   input += synapse0x2932e50();
   input += synapse0x2932e90();
   input += synapse0x2932ed0();
   input += synapse0x2932f10();
   input += synapse0x2932f50();
   input += synapse0x2932f90();
   return input;
}

double NNfunction_NN_4_4::neuron0x2932720() {
   double input = input0x2932720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x2932fd0() {
   double input = -0.530748;
   input += synapse0x2933310();
   input += synapse0x2933350();
   input += synapse0x2933390();
   input += synapse0x29333d0();
   input += synapse0x2933410();
   input += synapse0x2933450();
   input += synapse0x2933490();
   input += synapse0x29334d0();
   input += synapse0x2933510();
   input += synapse0x2933550();
   input += synapse0x2933590();
   input += synapse0x29335d0();
   input += synapse0x2933610();
   input += synapse0x2933650();
   input += synapse0x2933690();
   input += synapse0x29336d0();
   input += synapse0x2933160();
   input += synapse0x29331a0();
   input += synapse0x2933820();
   input += synapse0x2933860();
   input += synapse0x29338a0();
   input += synapse0x29338e0();
   input += synapse0x2933920();
   input += synapse0x2933960();
   return input;
}

double NNfunction_NN_4_4::neuron0x2932fd0() {
   double input = input0x2932fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x29339a0() {
   double input = 0.999002;
   input += synapse0x2933ce0();
   input += synapse0x2933d20();
   input += synapse0x2933d60();
   input += synapse0x2933da0();
   input += synapse0x2933de0();
   input += synapse0x2933e20();
   input += synapse0x2933e60();
   input += synapse0x2933ea0();
   input += synapse0x2933ee0();
   input += synapse0x2933f20();
   input += synapse0x2933f60();
   input += synapse0x2933fa0();
   input += synapse0x2933fe0();
   input += synapse0x2934020();
   input += synapse0x2934060();
   input += synapse0x29340a0();
   input += synapse0x2933b30();
   input += synapse0x2933b70();
   input += synapse0x29341f0();
   input += synapse0x2934230();
   input += synapse0x2934270();
   input += synapse0x29342b0();
   input += synapse0x29342f0();
   input += synapse0x2934330();
   return input;
}

double NNfunction_NN_4_4::neuron0x29339a0() {
   double input = input0x29339a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x2934370() {
   double input = 0.845958;
   input += synapse0x29346b0();
   input += synapse0x29346f0();
   input += synapse0x2934730();
   input += synapse0x2934770();
   input += synapse0x29347b0();
   input += synapse0x29347f0();
   input += synapse0x2934830();
   input += synapse0x2934870();
   input += synapse0x29348b0();
   input += synapse0x29348f0();
   input += synapse0x2934930();
   input += synapse0x2934970();
   input += synapse0x29349b0();
   input += synapse0x29349f0();
   input += synapse0x2934a30();
   input += synapse0x2934a70();
   input += synapse0x2934500();
   input += synapse0x2934540();
   input += synapse0x2934bc0();
   input += synapse0x2934c00();
   input += synapse0x2934c40();
   input += synapse0x2934c80();
   input += synapse0x2934cc0();
   input += synapse0x2934d00();
   return input;
}

double NNfunction_NN_4_4::neuron0x2934370() {
   double input = input0x2934370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x293b570() {
   double input = 0.506711;
   input += synapse0x29112a0();
   input += synapse0x29112e0();
   input += synapse0x29127b0();
   input += synapse0x29127f0();
   input += synapse0x2913180();
   input += synapse0x29131c0();
   input += synapse0x2913f50();
   input += synapse0x2913f90();
   input += synapse0x2914920();
   input += synapse0x2914960();
   input += synapse0x29152f0();
   input += synapse0x2915330();
   input += synapse0x2915dd0();
   input += synapse0x2915e10();
   input += synapse0x29167a0();
   input += synapse0x29167e0();
   input += synapse0x2913880();
   input += synapse0x29138c0();
   input += synapse0x2918350();
   input += synapse0x2918390();
   input += synapse0x2918d20();
   input += synapse0x2918d60();
   input += synapse0x29196f0();
   input += synapse0x2919730();
   input += synapse0x291a0c0();
   input += synapse0x291a100();
   input += synapse0x290e230();
   input += synapse0x290e270();
   input += synapse0x291c1b0();
   input += synapse0x291c1f0();
   input += synapse0x291cb80();
   input += synapse0x291cbc0();
   input += synapse0x291d550();
   input += synapse0x291d590();
   input += synapse0x291df20();
   input += synapse0x291df60();
   input += synapse0x291e8f0();
   input += synapse0x291e930();
   input += synapse0x2917440();
   input += synapse0x2917480();
   input += synapse0x2920cf0();
   input += synapse0x2920d30();
   input += synapse0x2921680();
   input += synapse0x29216c0();
   input += synapse0x2922050();
   input += synapse0x2922090();
   input += synapse0x2922a20();
   input += synapse0x2922a60();
   input += synapse0x29233f0();
   input += synapse0x2923430();
   return input;
}

double NNfunction_NN_4_4::neuron0x293b570() {
   double input = input0x293b570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x293b910() {
   double input = -0.0769652;
   input += synapse0x2925b30();
   input += synapse0x2925b70();
   input += synapse0x291b0f0();
   input += synapse0x291b130();
   input += synapse0x2928710();
   input += synapse0x2928750();
   input += synapse0x29290e0();
   input += synapse0x2929120();
   input += synapse0x2929ab0();
   input += synapse0x2929af0();
   input += synapse0x292a480();
   input += synapse0x292a4c0();
   input += synapse0x292ae50();
   input += synapse0x292ae90();
   input += synapse0x292b820();
   input += synapse0x292b860();
   input += synapse0x292c1f0();
   input += synapse0x292c230();
   input += synapse0x292cbc0();
   input += synapse0x292cc00();
   input += synapse0x292d7a0();
   input += synapse0x292d7e0();
   input += synapse0x292e170();
   input += synapse0x292e1b0();
   input += synapse0x291eff0();
   input += synapse0x291f030();
   input += synapse0x291f9c0();
   input += synapse0x291fa00();
   input += synapse0x2920390();
   input += synapse0x29203d0();
   input += synapse0x29328b0();
   input += synapse0x29328f0();
   input += synapse0x2933280();
   input += synapse0x29332c0();
   input += synapse0x2933c50();
   input += synapse0x2933c90();
   input += synapse0x2934620();
   input += synapse0x2934660();
   input += synapse0x2910510();
   input += synapse0x2910550();
   input += synapse0x2923dc0();
   input += synapse0x2923e00();
   input += synapse0x2934d40();
   input += synapse0x2934d80();
   input += synapse0x2934dc0();
   input += synapse0x2934e00();
   input += synapse0x293bcb0();
   input += synapse0x293bcf0();
   input += synapse0x293bd30();
   input += synapse0x293bd70();
   return input;
}

double NNfunction_NN_4_4::neuron0x293b910() {
   double input = input0x293b910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x293bdb0() {
   double input = 0.532201;
   input += synapse0x293c0f0();
   input += synapse0x293c130();
   input += synapse0x293c170();
   input += synapse0x293c1b0();
   input += synapse0x293c1f0();
   input += synapse0x293c230();
   input += synapse0x293c270();
   input += synapse0x293c2b0();
   input += synapse0x293c2f0();
   input += synapse0x293c330();
   input += synapse0x293c370();
   input += synapse0x293c3b0();
   input += synapse0x293c3f0();
   input += synapse0x293c430();
   input += synapse0x293c470();
   input += synapse0x293c4b0();
   input += synapse0x293bf40();
   input += synapse0x293bf80();
   input += synapse0x293c600();
   input += synapse0x293c640();
   input += synapse0x293c680();
   input += synapse0x293c6c0();
   input += synapse0x293c700();
   input += synapse0x293c740();
   input += synapse0x293c780();
   input += synapse0x293c7c0();
   input += synapse0x293c800();
   input += synapse0x293c840();
   input += synapse0x293c880();
   input += synapse0x293c8c0();
   input += synapse0x293c900();
   input += synapse0x293c940();
   input += synapse0x293c4f0();
   input += synapse0x293c530();
   input += synapse0x293c570();
   input += synapse0x293c5b0();
   input += synapse0x293cb90();
   input += synapse0x293cbd0();
   input += synapse0x293cc10();
   input += synapse0x293cc50();
   input += synapse0x293cc90();
   input += synapse0x293ccd0();
   input += synapse0x293cd10();
   input += synapse0x293cd50();
   input += synapse0x293cd90();
   input += synapse0x293cdd0();
   input += synapse0x293ce10();
   input += synapse0x293ce50();
   input += synapse0x293ce90();
   input += synapse0x293ced0();
   return input;
}

double NNfunction_NN_4_4::neuron0x293bdb0() {
   double input = input0x293bdb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x293cf10() {
   double input = 0.0823034;
   input += synapse0x293d250();
   input += synapse0x293d290();
   input += synapse0x293d2d0();
   input += synapse0x293d310();
   input += synapse0x293d350();
   input += synapse0x293d390();
   input += synapse0x293d3d0();
   input += synapse0x293d410();
   input += synapse0x293d450();
   input += synapse0x293d490();
   input += synapse0x293d4d0();
   input += synapse0x293d510();
   input += synapse0x293d550();
   input += synapse0x293d590();
   input += synapse0x293d5d0();
   input += synapse0x293d610();
   input += synapse0x293d0a0();
   input += synapse0x293d0e0();
   input += synapse0x293d760();
   input += synapse0x293d7a0();
   input += synapse0x293d7e0();
   input += synapse0x293d820();
   input += synapse0x293d860();
   input += synapse0x293d8a0();
   input += synapse0x293d8e0();
   input += synapse0x293d920();
   input += synapse0x293d960();
   input += synapse0x293d9a0();
   input += synapse0x293d9e0();
   input += synapse0x293da20();
   input += synapse0x293da60();
   input += synapse0x293daa0();
   input += synapse0x293d650();
   input += synapse0x293d690();
   input += synapse0x293d6d0();
   input += synapse0x293d710();
   input += synapse0x293dcf0();
   input += synapse0x293dd30();
   input += synapse0x293dd70();
   input += synapse0x293ddb0();
   input += synapse0x293ddf0();
   input += synapse0x293de30();
   input += synapse0x293de70();
   input += synapse0x293deb0();
   input += synapse0x293def0();
   input += synapse0x293df30();
   input += synapse0x293df70();
   input += synapse0x293dfb0();
   input += synapse0x293dff0();
   input += synapse0x293e030();
   return input;
}

double NNfunction_NN_4_4::neuron0x293cf10() {
   double input = input0x293cf10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x293e070() {
   double input = -0.561793;
   input += synapse0x293e3b0();
   input += synapse0x293e3f0();
   input += synapse0x293e430();
   input += synapse0x293e470();
   input += synapse0x293e4b0();
   input += synapse0x293e4f0();
   input += synapse0x293e530();
   input += synapse0x293e570();
   input += synapse0x293e5b0();
   input += synapse0x293e5f0();
   input += synapse0x293e630();
   input += synapse0x293e670();
   input += synapse0x293e6b0();
   input += synapse0x293e6f0();
   input += synapse0x293e730();
   input += synapse0x293e770();
   input += synapse0x293e200();
   input += synapse0x293e240();
   input += synapse0x293e8c0();
   input += synapse0x293e900();
   input += synapse0x293e940();
   input += synapse0x293e980();
   input += synapse0x293e9c0();
   input += synapse0x293ea00();
   input += synapse0x293ea40();
   input += synapse0x293ea80();
   input += synapse0x293eac0();
   input += synapse0x293eb00();
   input += synapse0x293eb40();
   input += synapse0x293eb80();
   input += synapse0x293ebc0();
   input += synapse0x293ec00();
   input += synapse0x293e7b0();
   input += synapse0x293e7f0();
   input += synapse0x293e830();
   input += synapse0x293e870();
   input += synapse0x293ee50();
   input += synapse0x293ee90();
   input += synapse0x293eed0();
   input += synapse0x293ef10();
   input += synapse0x293ef50();
   input += synapse0x293ef90();
   input += synapse0x293efd0();
   input += synapse0x293f010();
   input += synapse0x293f050();
   input += synapse0x293f090();
   input += synapse0x293f0d0();
   input += synapse0x293f110();
   input += synapse0x293f150();
   input += synapse0x293f190();
   return input;
}

double NNfunction_NN_4_4::neuron0x293e070() {
   double input = input0x293e070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_4_4::input0x293f1d0() {
   double input = 2.71225;
   input += synapse0x29102b0();
   input += synapse0x293f3f0();
   input += synapse0x293f430();
   input += synapse0x293f470();
   input += synapse0x293f4b0();
   return input;
}

double NNfunction_NN_4_4::neuron0x293f1d0() {
   double input = input0x293f1d0();
   return (input * 1)+0;
}

double NNfunction_NN_4_4::synapse0x26cb100() {
   return (neuron0x290b290()*0.187948);
}

double NNfunction_NN_4_4::synapse0x290b150() {
   return (neuron0x290b5d0()*0.181797);
}

double NNfunction_NN_4_4::synapse0x290b190() {
   return (neuron0x290b910()*0.62398);
}

double NNfunction_NN_4_4::synapse0x29105a0() {
   return (neuron0x290bc50()*0.107285);
}

double NNfunction_NN_4_4::synapse0x29105e0() {
   return (neuron0x290bf90()*0.0483508);
}

double NNfunction_NN_4_4::synapse0x2910620() {
   return (neuron0x290c2d0()*-0.0309131);
}

double NNfunction_NN_4_4::synapse0x2910660() {
   return (neuron0x290c610()*-0.00889426);
}

double NNfunction_NN_4_4::synapse0x29106a0() {
   return (neuron0x290c950()*0.0193337);
}

double NNfunction_NN_4_4::synapse0x29106e0() {
   return (neuron0x290cc90()*0.0752916);
}

double NNfunction_NN_4_4::synapse0x2910720() {
   return (neuron0x290cfd0()*0.010945);
}

double NNfunction_NN_4_4::synapse0x2910760() {
   return (neuron0x290d310()*-0.035918);
}

double NNfunction_NN_4_4::synapse0x29107a0() {
   return (neuron0x290d650()*-0.086283);
}

double NNfunction_NN_4_4::synapse0x29107e0() {
   return (neuron0x290d990()*-0.00832202);
}

double NNfunction_NN_4_4::synapse0x2910820() {
   return (neuron0x290dcd0()*0.112504);
}

double NNfunction_NN_4_4::synapse0x2910860() {
   return (neuron0x290e010()*0.192261);
}

double NNfunction_NN_4_4::synapse0x29108a0() {
   return (neuron0x290e350()*-0.0521573);
}

double NNfunction_NN_4_4::synapse0x290b0c0() {
   return (neuron0x290e690()*-0.0415866);
}

double NNfunction_NN_4_4::synapse0x290b100() {
   return (neuron0x290ebf0()*0.00626434);
}

double NNfunction_NN_4_4::synapse0x26bc9a0() {
   return (neuron0x290ee10()*0.0267842);
}

double NNfunction_NN_4_4::synapse0x26bc9e0() {
   return (neuron0x290f150()*0.0269799);
}

double NNfunction_NN_4_4::synapse0x2910b00() {
   return (neuron0x290f490()*0.0133217);
}

double NNfunction_NN_4_4::synapse0x2910b40() {
   return (neuron0x290f7d0()*-0.0862277);
}

double NNfunction_NN_4_4::synapse0x2910b80() {
   return (neuron0x290fb10()*-0.00146274);
}

double NNfunction_NN_4_4::synapse0x2910bc0() {
   return (neuron0x290fe50()*-0.121534);
}

double NNfunction_NN_4_4::synapse0x2910f40() {
   return (neuron0x290b290()*0.404858);
}

double NNfunction_NN_4_4::synapse0x2910f80() {
   return (neuron0x290b5d0()*-0.205755);
}

double NNfunction_NN_4_4::synapse0x2910fc0() {
   return (neuron0x290b910()*-0.123376);
}

double NNfunction_NN_4_4::synapse0x2911000() {
   return (neuron0x290bc50()*0.0219373);
}

double NNfunction_NN_4_4::synapse0x2911040() {
   return (neuron0x290bf90()*0.329952);
}

double NNfunction_NN_4_4::synapse0x2911080() {
   return (neuron0x290c2d0()*0.230249);
}

double NNfunction_NN_4_4::synapse0x29110c0() {
   return (neuron0x290c610()*-0.299341);
}

double NNfunction_NN_4_4::synapse0x2911100() {
   return (neuron0x290c950()*-0.513014);
}

double NNfunction_NN_4_4::synapse0x2911140() {
   return (neuron0x290cc90()*0.394334);
}

double NNfunction_NN_4_4::synapse0x29109f0() {
   return (neuron0x290cfd0()*0.0876434);
}

double NNfunction_NN_4_4::synapse0x2910a30() {
   return (neuron0x290d310()*0.0857414);
}

double NNfunction_NN_4_4::synapse0x2910a70() {
   return (neuron0x290d650()*0.11811);
}

double NNfunction_NN_4_4::synapse0x2910ab0() {
   return (neuron0x290d990()*-0.201013);
}

double NNfunction_NN_4_4::synapse0x2911390() {
   return (neuron0x290dcd0()*0.378897);
}

double NNfunction_NN_4_4::synapse0x29113d0() {
   return (neuron0x290e010()*-1.13404);
}

double NNfunction_NN_4_4::synapse0x2911410() {
   return (neuron0x290e350()*0.31781);
}

double NNfunction_NN_4_4::synapse0x2910d90() {
   return (neuron0x290e690()*-0.228618);
}

double NNfunction_NN_4_4::synapse0x2910dd0() {
   return (neuron0x290ebf0()*0.358032);
}

double NNfunction_NN_4_4::synapse0x2911560() {
   return (neuron0x290ee10()*0.131499);
}

double NNfunction_NN_4_4::synapse0x29115a0() {
   return (neuron0x290f150()*-0.16068);
}

double NNfunction_NN_4_4::synapse0x29115e0() {
   return (neuron0x290f490()*0.0942772);
}

double NNfunction_NN_4_4::synapse0x2911620() {
   return (neuron0x290f7d0()*-0.0384448);
}

double NNfunction_NN_4_4::synapse0x2911660() {
   return (neuron0x290fb10()*0.423255);
}

double NNfunction_NN_4_4::synapse0x29116a0() {
   return (neuron0x290fe50()*-1.0769);
}

double NNfunction_NN_4_4::synapse0x2911a20() {
   return (neuron0x290b290()*0.050068);
}

double NNfunction_NN_4_4::synapse0x2911a60() {
   return (neuron0x290b5d0()*0.028347);
}

double NNfunction_NN_4_4::synapse0x2911aa0() {
   return (neuron0x290b910()*-0.78083);
}

double NNfunction_NN_4_4::synapse0x2911ae0() {
   return (neuron0x290bc50()*-0.053893);
}

double NNfunction_NN_4_4::synapse0x2911b20() {
   return (neuron0x290bf90()*-0.00774681);
}

double NNfunction_NN_4_4::synapse0x2911b60() {
   return (neuron0x290c2d0()*-0.171465);
}

double NNfunction_NN_4_4::synapse0x2911ba0() {
   return (neuron0x290c610()*-0.106325);
}

double NNfunction_NN_4_4::synapse0x2911be0() {
   return (neuron0x290c950()*0.365048);
}

double NNfunction_NN_4_4::synapse0x2911c20() {
   return (neuron0x290cc90()*0.226115);
}

double NNfunction_NN_4_4::synapse0x2911c60() {
   return (neuron0x290cfd0()*0.0725155);
}

double NNfunction_NN_4_4::synapse0x2911ca0() {
   return (neuron0x290d310()*0.274936);
}

double NNfunction_NN_4_4::synapse0x2911ce0() {
   return (neuron0x290d650()*0.143384);
}

double NNfunction_NN_4_4::synapse0x2911d20() {
   return (neuron0x290d990()*0.24216);
}

double NNfunction_NN_4_4::synapse0x2911d60() {
   return (neuron0x290dcd0()*-0.122392);
}

double NNfunction_NN_4_4::synapse0x2911da0() {
   return (neuron0x290e010()*0.37159);
}

double NNfunction_NN_4_4::synapse0x2911de0() {
   return (neuron0x290e350()*0.257462);
}

double NNfunction_NN_4_4::synapse0x2911870() {
   return (neuron0x290e690()*-0.143938);
}

double NNfunction_NN_4_4::synapse0x29118b0() {
   return (neuron0x290ebf0()*0.36819);
}

double NNfunction_NN_4_4::synapse0x26ca7f0() {
   return (neuron0x290ee10()*0.418711);
}

double NNfunction_NN_4_4::synapse0x26ca830() {
   return (neuron0x290f150()*-0.119346);
}

double NNfunction_NN_4_4::synapse0x28fa320() {
   return (neuron0x290f490()*0.0524266);
}

double NNfunction_NN_4_4::synapse0x28fa360() {
   return (neuron0x290f7d0()*0.104844);
}

double NNfunction_NN_4_4::synapse0x28fa3a0() {
   return (neuron0x290fb10()*0.102765);
}

double NNfunction_NN_4_4::synapse0x290b1d0() {
   return (neuron0x290fe50()*0.0258166);
}

double NNfunction_NN_4_4::synapse0x2911330() {
   return (neuron0x290b290()*-0.0196988);
}

double NNfunction_NN_4_4::synapse0x290b210() {
   return (neuron0x290b5d0()*-1.03677);
}

double NNfunction_NN_4_4::synapse0x290b250() {
   return (neuron0x290b910()*-1.24491);
}

double NNfunction_NN_4_4::synapse0x2911f30() {
   return (neuron0x290bc50()*-0.00136333);
}

double NNfunction_NN_4_4::synapse0x2911f70() {
   return (neuron0x290bf90()*0.0084864);
}

double NNfunction_NN_4_4::synapse0x2911fb0() {
   return (neuron0x290c2d0()*-0.0198641);
}

double NNfunction_NN_4_4::synapse0x2911ff0() {
   return (neuron0x290c610()*0.0258941);
}

double NNfunction_NN_4_4::synapse0x2912030() {
   return (neuron0x290c950()*-0.0101917);
}

double NNfunction_NN_4_4::synapse0x2912070() {
   return (neuron0x290cc90()*-0.00712506);
}

double NNfunction_NN_4_4::synapse0x29120b0() {
   return (neuron0x290cfd0()*-0.0167104);
}

double NNfunction_NN_4_4::synapse0x29120f0() {
   return (neuron0x290d310()*-0.00141988);
}

double NNfunction_NN_4_4::synapse0x2912130() {
   return (neuron0x290d650()*0.0203849);
}

double NNfunction_NN_4_4::synapse0x2912170() {
   return (neuron0x290d990()*0.0062097);
}

double NNfunction_NN_4_4::synapse0x29121b0() {
   return (neuron0x290dcd0()*-0.0131683);
}

double NNfunction_NN_4_4::synapse0x29121f0() {
   return (neuron0x290e010()*-0.0613637);
}

double NNfunction_NN_4_4::synapse0x2912230() {
   return (neuron0x290e350()*-0.0226464);
}

double NNfunction_NN_4_4::synapse0x2911180() {
   return (neuron0x290e690()*0.00623805);
}

double NNfunction_NN_4_4::synapse0x29111c0() {
   return (neuron0x290ebf0()*-0.0196262);
}

double NNfunction_NN_4_4::synapse0x2912380() {
   return (neuron0x290ee10()*-0.00718991);
}

double NNfunction_NN_4_4::synapse0x29123c0() {
   return (neuron0x290f150()*-0.0122383);
}

double NNfunction_NN_4_4::synapse0x2912400() {
   return (neuron0x290f490()*-0.00141712);
}

double NNfunction_NN_4_4::synapse0x2912440() {
   return (neuron0x290f7d0()*-0.0178336);
}

double NNfunction_NN_4_4::synapse0x2912480() {
   return (neuron0x290fb10()*0.0211729);
}

double NNfunction_NN_4_4::synapse0x29124c0() {
   return (neuron0x290fe50()*1.10341);
}

double NNfunction_NN_4_4::synapse0x2912840() {
   return (neuron0x290b290()*-0.10403);
}

double NNfunction_NN_4_4::synapse0x2912880() {
   return (neuron0x290b5d0()*2.80332);
}

double NNfunction_NN_4_4::synapse0x29128c0() {
   return (neuron0x290b910()*-1.95452);
}

double NNfunction_NN_4_4::synapse0x2912900() {
   return (neuron0x290bc50()*0.0156969);
}

double NNfunction_NN_4_4::synapse0x2912940() {
   return (neuron0x290bf90()*-0.0176563);
}

double NNfunction_NN_4_4::synapse0x2912980() {
   return (neuron0x290c2d0()*0.0915374);
}

double NNfunction_NN_4_4::synapse0x29129c0() {
   return (neuron0x290c610()*0.000817454);
}

double NNfunction_NN_4_4::synapse0x2912a00() {
   return (neuron0x290c950()*-0.049502);
}

double NNfunction_NN_4_4::synapse0x2912a40() {
   return (neuron0x290cc90()*-0.0314158);
}

double NNfunction_NN_4_4::synapse0x2912a80() {
   return (neuron0x290cfd0()*0.0248893);
}

double NNfunction_NN_4_4::synapse0x2912ac0() {
   return (neuron0x290d310()*0.0181629);
}

double NNfunction_NN_4_4::synapse0x2912b00() {
   return (neuron0x290d650()*0.136784);
}

double NNfunction_NN_4_4::synapse0x2912b40() {
   return (neuron0x290d990()*-0.0343144);
}

double NNfunction_NN_4_4::synapse0x2912b80() {
   return (neuron0x290dcd0()*0.053799);
}

double NNfunction_NN_4_4::synapse0x2912bc0() {
   return (neuron0x290e010()*0.386643);
}

double NNfunction_NN_4_4::synapse0x2912c00() {
   return (neuron0x290e350()*0.10565);
}

double NNfunction_NN_4_4::synapse0x2912690() {
   return (neuron0x290e690()*0.0145617);
}

double NNfunction_NN_4_4::synapse0x29126d0() {
   return (neuron0x290ebf0()*0.00572094);
}

double NNfunction_NN_4_4::synapse0x2912d50() {
   return (neuron0x290ee10()*-0.0496871);
}

double NNfunction_NN_4_4::synapse0x2912d90() {
   return (neuron0x290f150()*0.00419504);
}

double NNfunction_NN_4_4::synapse0x2912dd0() {
   return (neuron0x290f490()*0.0384247);
}

double NNfunction_NN_4_4::synapse0x2912e10() {
   return (neuron0x290f7d0()*0.0180691);
}

double NNfunction_NN_4_4::synapse0x2912e50() {
   return (neuron0x290fb10()*-0.00902239);
}

double NNfunction_NN_4_4::synapse0x2912e90() {
   return (neuron0x290fe50()*0.680303);
}

double NNfunction_NN_4_4::synapse0x2913210() {
   return (neuron0x290b290()*-0.0311683);
}

double NNfunction_NN_4_4::synapse0x2913250() {
   return (neuron0x290b5d0()*1.16068);
}

double NNfunction_NN_4_4::synapse0x2913290() {
   return (neuron0x290b910()*-0.186532);
}

double NNfunction_NN_4_4::synapse0x29132d0() {
   return (neuron0x290bc50()*0.0066873);
}

double NNfunction_NN_4_4::synapse0x2913310() {
   return (neuron0x290bf90()*-0.0165626);
}

double NNfunction_NN_4_4::synapse0x2913350() {
   return (neuron0x290c2d0()*-0.0683551);
}

double NNfunction_NN_4_4::synapse0x2913390() {
   return (neuron0x290c610()*-0.0100262);
}

double NNfunction_NN_4_4::synapse0x29133d0() {
   return (neuron0x290c950()*-0.0056288);
}

double NNfunction_NN_4_4::synapse0x2913410() {
   return (neuron0x290cc90()*0.0170361);
}

double NNfunction_NN_4_4::synapse0x26cab60() {
   return (neuron0x290cfd0()*-0.0105863);
}

double NNfunction_NN_4_4::synapse0x26caba0() {
   return (neuron0x290d310()*-0.00180444);
}

double NNfunction_NN_4_4::synapse0x26cabe0() {
   return (neuron0x290d650()*-0.125093);
}

double NNfunction_NN_4_4::synapse0x26cac20() {
   return (neuron0x290d990()*-0.0319306);
}

double NNfunction_NN_4_4::synapse0x26cac60() {
   return (neuron0x290dcd0()*-0.0369353);
}

double NNfunction_NN_4_4::synapse0x26caca0() {
   return (neuron0x290e010()*1.19705);
}

double NNfunction_NN_4_4::synapse0x26cace0() {
   return (neuron0x290e350()*0.0322774);
}

double NNfunction_NN_4_4::synapse0x2913060() {
   return (neuron0x290e690()*-0.0294353);
}

double NNfunction_NN_4_4::synapse0x29130a0() {
   return (neuron0x290ebf0()*0.0177523);
}

double NNfunction_NN_4_4::synapse0x26cae30() {
   return (neuron0x290ee10()*0.0530721);
}

double NNfunction_NN_4_4::synapse0x26cae70() {
   return (neuron0x290f150()*-0.00886763);
}

double NNfunction_NN_4_4::synapse0x26caeb0() {
   return (neuron0x290f490()*0.0359503);
}

double NNfunction_NN_4_4::synapse0x26caef0() {
   return (neuron0x290f7d0()*0.0310135);
}

double NNfunction_NN_4_4::synapse0x26caf30() {
   return (neuron0x290fb10()*0.0399693);
}

double NNfunction_NN_4_4::synapse0x2913c60() {
   return (neuron0x290fe50()*-0.156263);
}

double NNfunction_NN_4_4::synapse0x2913fe0() {
   return (neuron0x290b290()*-0.00358763);
}

double NNfunction_NN_4_4::synapse0x2914020() {
   return (neuron0x290b5d0()*-3.94992);
}

double NNfunction_NN_4_4::synapse0x2914060() {
   return (neuron0x290b910()*2.41903);
}

double NNfunction_NN_4_4::synapse0x29140a0() {
   return (neuron0x290bc50()*-0.0213272);
}

double NNfunction_NN_4_4::synapse0x29140e0() {
   return (neuron0x290bf90()*0.0322632);
}

double NNfunction_NN_4_4::synapse0x2914120() {
   return (neuron0x290c2d0()*-0.00364308);
}

double NNfunction_NN_4_4::synapse0x2914160() {
   return (neuron0x290c610()*-8.28095e-05);
}

double NNfunction_NN_4_4::synapse0x29141a0() {
   return (neuron0x290c950()*-0.00883083);
}

double NNfunction_NN_4_4::synapse0x29141e0() {
   return (neuron0x290cc90()*-0.0262671);
}

double NNfunction_NN_4_4::synapse0x2914220() {
   return (neuron0x290cfd0()*-0.00744604);
}

double NNfunction_NN_4_4::synapse0x2914260() {
   return (neuron0x290d310()*-0.0141058);
}

double NNfunction_NN_4_4::synapse0x29142a0() {
   return (neuron0x290d650()*0.0408187);
}

double NNfunction_NN_4_4::synapse0x29142e0() {
   return (neuron0x290d990()*-0.0120697);
}

double NNfunction_NN_4_4::synapse0x2914320() {
   return (neuron0x290dcd0()*-0.0199604);
}

double NNfunction_NN_4_4::synapse0x2914360() {
   return (neuron0x290e010()*-0.134069);
}

double NNfunction_NN_4_4::synapse0x29143a0() {
   return (neuron0x290e350()*-0.012437);
}

double NNfunction_NN_4_4::synapse0x2913e30() {
   return (neuron0x290e690()*0.00880544);
}

double NNfunction_NN_4_4::synapse0x2913e70() {
   return (neuron0x290ebf0()*-0.0375498);
}

double NNfunction_NN_4_4::synapse0x29144f0() {
   return (neuron0x290ee10()*0.00159948);
}

double NNfunction_NN_4_4::synapse0x2914530() {
   return (neuron0x290f150()*0.0092836);
}

double NNfunction_NN_4_4::synapse0x2914570() {
   return (neuron0x290f490()*0.00510071);
}

double NNfunction_NN_4_4::synapse0x29145b0() {
   return (neuron0x290f7d0()*0.000890947);
}

double NNfunction_NN_4_4::synapse0x29145f0() {
   return (neuron0x290fb10()*0.00430108);
}

double NNfunction_NN_4_4::synapse0x2914630() {
   return (neuron0x290fe50()*0.404148);
}

double NNfunction_NN_4_4::synapse0x29149b0() {
   return (neuron0x290b290()*-0.0858372);
}

double NNfunction_NN_4_4::synapse0x29149f0() {
   return (neuron0x290b5d0()*0.142313);
}

double NNfunction_NN_4_4::synapse0x2914a30() {
   return (neuron0x290b910()*-1.80331);
}

double NNfunction_NN_4_4::synapse0x2914a70() {
   return (neuron0x290bc50()*-0.0381236);
}

double NNfunction_NN_4_4::synapse0x2914ab0() {
   return (neuron0x290bf90()*0.0234331);
}

double NNfunction_NN_4_4::synapse0x2914af0() {
   return (neuron0x290c2d0()*-0.0687588);
}

double NNfunction_NN_4_4::synapse0x2914b30() {
   return (neuron0x290c610()*0.111248);
}

double NNfunction_NN_4_4::synapse0x2914b70() {
   return (neuron0x290c950()*0.0390697);
}

double NNfunction_NN_4_4::synapse0x2914bb0() {
   return (neuron0x290cc90()*-0.0944816);
}

double NNfunction_NN_4_4::synapse0x2914bf0() {
   return (neuron0x290cfd0()*-0.0613552);
}

double NNfunction_NN_4_4::synapse0x2914c30() {
   return (neuron0x290d310()*-0.0181571);
}

double NNfunction_NN_4_4::synapse0x2914c70() {
   return (neuron0x290d650()*-0.371145);
}

double NNfunction_NN_4_4::synapse0x2914cb0() {
   return (neuron0x290d990()*0.209204);
}

double NNfunction_NN_4_4::synapse0x2914cf0() {
   return (neuron0x290dcd0()*-0.202741);
}

double NNfunction_NN_4_4::synapse0x2914d30() {
   return (neuron0x290e010()*0.0287357);
}

double NNfunction_NN_4_4::synapse0x2914d70() {
   return (neuron0x290e350()*0.0378913);
}

double NNfunction_NN_4_4::synapse0x2914800() {
   return (neuron0x290e690()*0.0708731);
}

double NNfunction_NN_4_4::synapse0x2914840() {
   return (neuron0x290ebf0()*-0.0221308);
}

double NNfunction_NN_4_4::synapse0x2914ec0() {
   return (neuron0x290ee10()*-0.0797289);
}

double NNfunction_NN_4_4::synapse0x2914f00() {
   return (neuron0x290f150()*0.095192);
}

double NNfunction_NN_4_4::synapse0x2914f40() {
   return (neuron0x290f490()*-0.0297413);
}

double NNfunction_NN_4_4::synapse0x2914f80() {
   return (neuron0x290f7d0()*0.0321127);
}

double NNfunction_NN_4_4::synapse0x2914fc0() {
   return (neuron0x290fb10()*0.0440157);
}

double NNfunction_NN_4_4::synapse0x2915000() {
   return (neuron0x290fe50()*0.262095);
}

double NNfunction_NN_4_4::synapse0x290eae0() {
   return (neuron0x290b290()*0.146464);
}

double NNfunction_NN_4_4::synapse0x290eb20() {
   return (neuron0x290b5d0()*-0.227912);
}

double NNfunction_NN_4_4::synapse0x290eb60() {
   return (neuron0x290b910()*0.312131);
}

double NNfunction_NN_4_4::synapse0x290eba0() {
   return (neuron0x290bc50()*0.107281);
}

double NNfunction_NN_4_4::synapse0x2915590() {
   return (neuron0x290bf90()*0.209775);
}

double NNfunction_NN_4_4::synapse0x29155d0() {
   return (neuron0x290c2d0()*0.589814);
}

double NNfunction_NN_4_4::synapse0x2915610() {
   return (neuron0x290c610()*0.305889);
}

double NNfunction_NN_4_4::synapse0x2915650() {
   return (neuron0x290c950()*0.642985);
}

double NNfunction_NN_4_4::synapse0x2915690() {
   return (neuron0x290cc90()*0.213442);
}

double NNfunction_NN_4_4::synapse0x29156d0() {
   return (neuron0x290cfd0()*-0.0780612);
}

double NNfunction_NN_4_4::synapse0x2915710() {
   return (neuron0x290d310()*-0.15147);
}

double NNfunction_NN_4_4::synapse0x2915750() {
   return (neuron0x290d650()*0.270073);
}

double NNfunction_NN_4_4::synapse0x2915790() {
   return (neuron0x290d990()*-0.0375218);
}

double NNfunction_NN_4_4::synapse0x29157d0() {
   return (neuron0x290dcd0()*-0.0104071);
}

double NNfunction_NN_4_4::synapse0x2915810() {
   return (neuron0x290e010()*-0.245505);
}

double NNfunction_NN_4_4::synapse0x2915850() {
   return (neuron0x290e350()*-0.315943);
}

double NNfunction_NN_4_4::synapse0x29151d0() {
   return (neuron0x290e690()*0.243665);
}

double NNfunction_NN_4_4::synapse0x2915210() {
   return (neuron0x290ebf0()*0.387857);
}

double NNfunction_NN_4_4::synapse0x29159a0() {
   return (neuron0x290ee10()*0.169624);
}

double NNfunction_NN_4_4::synapse0x29159e0() {
   return (neuron0x290f150()*-0.22432);
}

double NNfunction_NN_4_4::synapse0x2915a20() {
   return (neuron0x290f490()*-0.20285);
}

double NNfunction_NN_4_4::synapse0x2915a60() {
   return (neuron0x290f7d0()*0.217919);
}

double NNfunction_NN_4_4::synapse0x2915aa0() {
   return (neuron0x290fb10()*0.16031);
}

double NNfunction_NN_4_4::synapse0x2915ae0() {
   return (neuron0x290fe50()*0.540037);
}

double NNfunction_NN_4_4::synapse0x2915e60() {
   return (neuron0x290b290()*0.0272868);
}

double NNfunction_NN_4_4::synapse0x2915ea0() {
   return (neuron0x290b5d0()*-1.60564);
}

double NNfunction_NN_4_4::synapse0x2915ee0() {
   return (neuron0x290b910()*0.137944);
}

double NNfunction_NN_4_4::synapse0x2915f20() {
   return (neuron0x290bc50()*0.00183758);
}

double NNfunction_NN_4_4::synapse0x2915f60() {
   return (neuron0x290bf90()*0.00604452);
}

double NNfunction_NN_4_4::synapse0x2915fa0() {
   return (neuron0x290c2d0()*0.0417719);
}

double NNfunction_NN_4_4::synapse0x2915fe0() {
   return (neuron0x290c610()*0.00120264);
}

double NNfunction_NN_4_4::synapse0x2916020() {
   return (neuron0x290c950()*0.00464538);
}

double NNfunction_NN_4_4::synapse0x2916060() {
   return (neuron0x290cc90()*0.00982229);
}

double NNfunction_NN_4_4::synapse0x29160a0() {
   return (neuron0x290cfd0()*-0.0648044);
}

double NNfunction_NN_4_4::synapse0x29160e0() {
   return (neuron0x290d310()*0.0362883);
}

double NNfunction_NN_4_4::synapse0x2916120() {
   return (neuron0x290d650()*-0.125623);
}

double NNfunction_NN_4_4::synapse0x2916160() {
   return (neuron0x290d990()*0.0320271);
}

double NNfunction_NN_4_4::synapse0x29161a0() {
   return (neuron0x290dcd0()*0.0801789);
}

double NNfunction_NN_4_4::synapse0x29161e0() {
   return (neuron0x290e010()*0.444687);
}

double NNfunction_NN_4_4::synapse0x2916220() {
   return (neuron0x290e350()*0.0553597);
}

double NNfunction_NN_4_4::synapse0x2915cb0() {
   return (neuron0x290e690()*-0.0193038);
}

double NNfunction_NN_4_4::synapse0x2915cf0() {
   return (neuron0x290ebf0()*0.0496434);
}

double NNfunction_NN_4_4::synapse0x2916370() {
   return (neuron0x290ee10()*-0.00378859);
}

double NNfunction_NN_4_4::synapse0x29163b0() {
   return (neuron0x290f150()*-0.01299);
}

double NNfunction_NN_4_4::synapse0x29163f0() {
   return (neuron0x290f490()*0.0472061);
}

double NNfunction_NN_4_4::synapse0x2916430() {
   return (neuron0x290f7d0()*0.0533217);
}

double NNfunction_NN_4_4::synapse0x2916470() {
   return (neuron0x290fb10()*0.00599006);
}

double NNfunction_NN_4_4::synapse0x29164b0() {
   return (neuron0x290fe50()*1.03881);
}

double NNfunction_NN_4_4::synapse0x2916830() {
   return (neuron0x290b290()*0.0114402);
}

double NNfunction_NN_4_4::synapse0x2916870() {
   return (neuron0x290b5d0()*0.212782);
}

double NNfunction_NN_4_4::synapse0x29168b0() {
   return (neuron0x290b910()*-1.91981);
}

double NNfunction_NN_4_4::synapse0x29168f0() {
   return (neuron0x290bc50()*0.00230829);
}

double NNfunction_NN_4_4::synapse0x2916930() {
   return (neuron0x290bf90()*0.020687);
}

double NNfunction_NN_4_4::synapse0x2916970() {
   return (neuron0x290c2d0()*0.00552199);
}

double NNfunction_NN_4_4::synapse0x29169b0() {
   return (neuron0x290c610()*-0.0428525);
}

double NNfunction_NN_4_4::synapse0x29169f0() {
   return (neuron0x290c950()*0.0137859);
}

double NNfunction_NN_4_4::synapse0x2916a30() {
   return (neuron0x290cc90()*0.00109726);
}

double NNfunction_NN_4_4::synapse0x2916a70() {
   return (neuron0x290cfd0()*0.0150154);
}

double NNfunction_NN_4_4::synapse0x2916ab0() {
   return (neuron0x290d310()*0.00775859);
}

double NNfunction_NN_4_4::synapse0x2916af0() {
   return (neuron0x290d650()*-0.109611);
}

double NNfunction_NN_4_4::synapse0x2916b30() {
   return (neuron0x290d990()*-0.0298295);
}

double NNfunction_NN_4_4::synapse0x2916b70() {
   return (neuron0x290dcd0()*0.0158829);
}

double NNfunction_NN_4_4::synapse0x2916bb0() {
   return (neuron0x290e010()*0.0951575);
}

double NNfunction_NN_4_4::synapse0x2916bf0() {
   return (neuron0x290e350()*0.0280007);
}

double NNfunction_NN_4_4::synapse0x2916680() {
   return (neuron0x290e690()*-0.0169015);
}

double NNfunction_NN_4_4::synapse0x29166c0() {
   return (neuron0x290ebf0()*0.0192054);
}

double NNfunction_NN_4_4::synapse0x2913450() {
   return (neuron0x290ee10()*0.00962899);
}

double NNfunction_NN_4_4::synapse0x2913490() {
   return (neuron0x290f150()*0.0134242);
}

double NNfunction_NN_4_4::synapse0x29134d0() {
   return (neuron0x290f490()*0.0029041);
}

double NNfunction_NN_4_4::synapse0x2913510() {
   return (neuron0x290f7d0()*0.0294405);
}

double NNfunction_NN_4_4::synapse0x2913550() {
   return (neuron0x290fb10()*-0.0233112);
}

double NNfunction_NN_4_4::synapse0x2913590() {
   return (neuron0x290fe50()*1.59194);
}

double NNfunction_NN_4_4::synapse0x2913910() {
   return (neuron0x290b290()*-0.0449948);
}

double NNfunction_NN_4_4::synapse0x2913950() {
   return (neuron0x290b5d0()*1.3839);
}

double NNfunction_NN_4_4::synapse0x2913990() {
   return (neuron0x290b910()*-1.67966);
}

double NNfunction_NN_4_4::synapse0x29139d0() {
   return (neuron0x290bc50()*0.0186482);
}

double NNfunction_NN_4_4::synapse0x2913a10() {
   return (neuron0x290bf90()*-0.0191112);
}

double NNfunction_NN_4_4::synapse0x2913a50() {
   return (neuron0x290c2d0()*0.0185678);
}

double NNfunction_NN_4_4::synapse0x2913a90() {
   return (neuron0x290c610()*0.00118129);
}

double NNfunction_NN_4_4::synapse0x2913ad0() {
   return (neuron0x290c950()*0.0339507);
}

double NNfunction_NN_4_4::synapse0x2913b10() {
   return (neuron0x290cc90()*0.0110592);
}

double NNfunction_NN_4_4::synapse0x2913b50() {
   return (neuron0x290cfd0()*-0.0579999);
}

double NNfunction_NN_4_4::synapse0x2913b90() {
   return (neuron0x290d310()*-0.00398254);
}

double NNfunction_NN_4_4::synapse0x2913bd0() {
   return (neuron0x290d650()*-0.0483111);
}

double NNfunction_NN_4_4::synapse0x2913c10() {
   return (neuron0x290d990()*-0.0188759);
}

double NNfunction_NN_4_4::synapse0x2917d50() {
   return (neuron0x290dcd0()*-0.0360625);
}

double NNfunction_NN_4_4::synapse0x2917d90() {
   return (neuron0x290e010()*0.128523);
}

double NNfunction_NN_4_4::synapse0x2917dd0() {
   return (neuron0x290e350()*-0.0141861);
}

double NNfunction_NN_4_4::synapse0x2913760() {
   return (neuron0x290e690()*0.00708965);
}

double NNfunction_NN_4_4::synapse0x29137a0() {
   return (neuron0x290ebf0()*0.00751203);
}

double NNfunction_NN_4_4::synapse0x2917f20() {
   return (neuron0x290ee10()*-0.00541026);
}

double NNfunction_NN_4_4::synapse0x2917f60() {
   return (neuron0x290f150()*0.00650337);
}

double NNfunction_NN_4_4::synapse0x2917fa0() {
   return (neuron0x290f490()*0.00211988);
}

double NNfunction_NN_4_4::synapse0x2917fe0() {
   return (neuron0x290f7d0()*0.0303641);
}

double NNfunction_NN_4_4::synapse0x2918020() {
   return (neuron0x290fb10()*0.0109521);
}

double NNfunction_NN_4_4::synapse0x2918060() {
   return (neuron0x290fe50()*0.942399);
}

double NNfunction_NN_4_4::synapse0x29183e0() {
   return (neuron0x290b290()*-0.0501728);
}

double NNfunction_NN_4_4::synapse0x2918420() {
   return (neuron0x290b5d0()*2.59606);
}

double NNfunction_NN_4_4::synapse0x2918460() {
   return (neuron0x290b910()*2.61697);
}

double NNfunction_NN_4_4::synapse0x29184a0() {
   return (neuron0x290bc50()*0.0921949);
}

double NNfunction_NN_4_4::synapse0x29184e0() {
   return (neuron0x290bf90()*0.104508);
}

double NNfunction_NN_4_4::synapse0x2918520() {
   return (neuron0x290c2d0()*0.0281171);
}

double NNfunction_NN_4_4::synapse0x2918560() {
   return (neuron0x290c610()*-0.0753419);
}

double NNfunction_NN_4_4::synapse0x29185a0() {
   return (neuron0x290c950()*-0.0613575);
}

double NNfunction_NN_4_4::synapse0x29185e0() {
   return (neuron0x290cc90()*0.117585);
}

double NNfunction_NN_4_4::synapse0x2918620() {
   return (neuron0x290cfd0()*0.0704657);
}

double NNfunction_NN_4_4::synapse0x2918660() {
   return (neuron0x290d310()*-0.0776292);
}

double NNfunction_NN_4_4::synapse0x29186a0() {
   return (neuron0x290d650()*-1.81274);
}

double NNfunction_NN_4_4::synapse0x29186e0() {
   return (neuron0x290d990()*0.0806625);
}

double NNfunction_NN_4_4::synapse0x2918720() {
   return (neuron0x290dcd0()*0.0610043);
}

double NNfunction_NN_4_4::synapse0x2918760() {
   return (neuron0x290e010()*0.410793);
}

double NNfunction_NN_4_4::synapse0x29187a0() {
   return (neuron0x290e350()*-0.0903436);
}

double NNfunction_NN_4_4::synapse0x2918230() {
   return (neuron0x290e690()*-0.127322);
}

double NNfunction_NN_4_4::synapse0x2918270() {
   return (neuron0x290ebf0()*0.00536675);
}

double NNfunction_NN_4_4::synapse0x29188f0() {
   return (neuron0x290ee10()*-0.0476567);
}

double NNfunction_NN_4_4::synapse0x2918930() {
   return (neuron0x290f150()*0.0242428);
}

double NNfunction_NN_4_4::synapse0x2918970() {
   return (neuron0x290f490()*0.0558489);
}

double NNfunction_NN_4_4::synapse0x29189b0() {
   return (neuron0x290f7d0()*-0.029442);
}

double NNfunction_NN_4_4::synapse0x29189f0() {
   return (neuron0x290fb10()*-0.12494);
}

double NNfunction_NN_4_4::synapse0x2918a30() {
   return (neuron0x290fe50()*0.369096);
}

double NNfunction_NN_4_4::synapse0x2918db0() {
   return (neuron0x290b290()*0.112406);
}

double NNfunction_NN_4_4::synapse0x2918df0() {
   return (neuron0x290b5d0()*-2.07128);
}

double NNfunction_NN_4_4::synapse0x2918e30() {
   return (neuron0x290b910()*-2.08872);
}

double NNfunction_NN_4_4::synapse0x2918e70() {
   return (neuron0x290bc50()*-0.0240676);
}

double NNfunction_NN_4_4::synapse0x2918eb0() {
   return (neuron0x290bf90()*0.0298367);
}

double NNfunction_NN_4_4::synapse0x2918ef0() {
   return (neuron0x290c2d0()*-0.0299092);
}

double NNfunction_NN_4_4::synapse0x2918f30() {
   return (neuron0x290c610()*0.00349729);
}

double NNfunction_NN_4_4::synapse0x2918f70() {
   return (neuron0x290c950()*-0.0107642);
}

double NNfunction_NN_4_4::synapse0x2918fb0() {
   return (neuron0x290cc90()*-0.0145878);
}

double NNfunction_NN_4_4::synapse0x2918ff0() {
   return (neuron0x290cfd0()*-0.0069573);
}

double NNfunction_NN_4_4::synapse0x2919030() {
   return (neuron0x290d310()*0.028569);
}

double NNfunction_NN_4_4::synapse0x2919070() {
   return (neuron0x290d650()*0.146286);
}

double NNfunction_NN_4_4::synapse0x29190b0() {
   return (neuron0x290d990()*0.0252927);
}

double NNfunction_NN_4_4::synapse0x29190f0() {
   return (neuron0x290dcd0()*-0.0179271);
}

double NNfunction_NN_4_4::synapse0x2919130() {
   return (neuron0x290e010()*0.297798);
}

double NNfunction_NN_4_4::synapse0x2919170() {
   return (neuron0x290e350()*-0.0449206);
}

double NNfunction_NN_4_4::synapse0x2918c00() {
   return (neuron0x290e690()*0.0679898);
}

double NNfunction_NN_4_4::synapse0x2918c40() {
   return (neuron0x290ebf0()*-0.0619382);
}

double NNfunction_NN_4_4::synapse0x29192c0() {
   return (neuron0x290ee10()*0.031234);
}

double NNfunction_NN_4_4::synapse0x2919300() {
   return (neuron0x290f150()*0.0154293);
}

double NNfunction_NN_4_4::synapse0x2919340() {
   return (neuron0x290f490()*0.00844884);
}

double NNfunction_NN_4_4::synapse0x2919380() {
   return (neuron0x290f7d0()*-0.00742253);
}

double NNfunction_NN_4_4::synapse0x29193c0() {
   return (neuron0x290fb10()*0.0199787);
}

double NNfunction_NN_4_4::synapse0x2919400() {
   return (neuron0x290fe50()*-1.73952);
}

double NNfunction_NN_4_4::synapse0x2919780() {
   return (neuron0x290b290()*0.0656016);
}

double NNfunction_NN_4_4::synapse0x29197c0() {
   return (neuron0x290b5d0()*0.160384);
}

double NNfunction_NN_4_4::synapse0x2919800() {
   return (neuron0x290b910()*-0.404517);
}

double NNfunction_NN_4_4::synapse0x2919840() {
   return (neuron0x290bc50()*0.188323);
}

double NNfunction_NN_4_4::synapse0x2919880() {
   return (neuron0x290bf90()*0.045753);
}

double NNfunction_NN_4_4::synapse0x29198c0() {
   return (neuron0x290c2d0()*0.0386457);
}

double NNfunction_NN_4_4::synapse0x2919900() {
   return (neuron0x290c610()*0.0605732);
}

double NNfunction_NN_4_4::synapse0x2919940() {
   return (neuron0x290c950()*-0.189964);
}

double NNfunction_NN_4_4::synapse0x2919980() {
   return (neuron0x290cc90()*0.0274816);
}

double NNfunction_NN_4_4::synapse0x29199c0() {
   return (neuron0x290cfd0()*-0.243583);
}

double NNfunction_NN_4_4::synapse0x2919a00() {
   return (neuron0x290d310()*-0.145995);
}

double NNfunction_NN_4_4::synapse0x2919a40() {
   return (neuron0x290d650()*-0.272986);
}

double NNfunction_NN_4_4::synapse0x2919a80() {
   return (neuron0x290d990()*0.252468);
}

double NNfunction_NN_4_4::synapse0x2919ac0() {
   return (neuron0x290dcd0()*-0.00532926);
}

double NNfunction_NN_4_4::synapse0x2919b00() {
   return (neuron0x290e010()*-0.260257);
}

double NNfunction_NN_4_4::synapse0x2919b40() {
   return (neuron0x290e350()*-0.136796);
}

double NNfunction_NN_4_4::synapse0x29195d0() {
   return (neuron0x290e690()*-0.0613253);
}

double NNfunction_NN_4_4::synapse0x2919610() {
   return (neuron0x290ebf0()*-0.0773039);
}

double NNfunction_NN_4_4::synapse0x2919c90() {
   return (neuron0x290ee10()*-0.119857);
}

double NNfunction_NN_4_4::synapse0x2919cd0() {
   return (neuron0x290f150()*0.227084);
}

double NNfunction_NN_4_4::synapse0x2919d10() {
   return (neuron0x290f490()*0.019051);
}

double NNfunction_NN_4_4::synapse0x2919d50() {
   return (neuron0x290f7d0()*0.0958676);
}

double NNfunction_NN_4_4::synapse0x2919d90() {
   return (neuron0x290fb10()*0.0401802);
}

double NNfunction_NN_4_4::synapse0x2919dd0() {
   return (neuron0x290fe50()*0.337826);
}

double NNfunction_NN_4_4::synapse0x291a150() {
   return (neuron0x290b290()*-0.0893042);
}

double NNfunction_NN_4_4::synapse0x290b4b0() {
   return (neuron0x290b5d0()*0.029855);
}

double NNfunction_NN_4_4::synapse0x290b4f0() {
   return (neuron0x290b910()*-0.208778);
}

double NNfunction_NN_4_4::synapse0x290b7f0() {
   return (neuron0x290bc50()*1.81064);
}

double NNfunction_NN_4_4::synapse0x290b830() {
   return (neuron0x290bf90()*-0.0943374);
}

double NNfunction_NN_4_4::synapse0x290bb30() {
   return (neuron0x290c2d0()*-0.182438);
}

double NNfunction_NN_4_4::synapse0x290bb70() {
   return (neuron0x290c610()*-0.128217);
}

double NNfunction_NN_4_4::synapse0x290be70() {
   return (neuron0x290c950()*-0.0960745);
}

double NNfunction_NN_4_4::synapse0x290beb0() {
   return (neuron0x290cc90()*-0.0986268);
}

double NNfunction_NN_4_4::synapse0x290c1b0() {
   return (neuron0x290cfd0()*0.0618772);
}

double NNfunction_NN_4_4::synapse0x290c1f0() {
   return (neuron0x290d310()*0.0504378);
}

double NNfunction_NN_4_4::synapse0x290c4f0() {
   return (neuron0x290d650()*-0.298715);
}

double NNfunction_NN_4_4::synapse0x290c530() {
   return (neuron0x290d990()*-0.104268);
}

double NNfunction_NN_4_4::synapse0x290c830() {
   return (neuron0x290dcd0()*-0.2149);
}

double NNfunction_NN_4_4::synapse0x290c870() {
   return (neuron0x290e010()*-0.158053);
}

double NNfunction_NN_4_4::synapse0x290cb70() {
   return (neuron0x290e350()*0.179096);
}

double NNfunction_NN_4_4::synapse0x290cbb0() {
   return (neuron0x290e690()*0.0704143);
}

double NNfunction_NN_4_4::synapse0x290ceb0() {
   return (neuron0x290ebf0()*0.176908);
}

double NNfunction_NN_4_4::synapse0x290cef0() {
   return (neuron0x290ee10()*0.0260309);
}

double NNfunction_NN_4_4::synapse0x290d1f0() {
   return (neuron0x290f150()*-0.311989);
}

double NNfunction_NN_4_4::synapse0x290d230() {
   return (neuron0x290f490()*-0.154007);
}

double NNfunction_NN_4_4::synapse0x290d530() {
   return (neuron0x290f7d0()*-0.050812);
}

double NNfunction_NN_4_4::synapse0x290d570() {
   return (neuron0x290fb10()*0.00311446);
}

double NNfunction_NN_4_4::synapse0x290d870() {
   return (neuron0x290fe50()*-0.205595);
}

double NNfunction_NN_4_4::synapse0x290d8b0() {
   return (neuron0x290b290()*0.0274628);
}

double NNfunction_NN_4_4::synapse0x290e570() {
   return (neuron0x290b5d0()*-0.824389);
}

double NNfunction_NN_4_4::synapse0x290e5b0() {
   return (neuron0x290b910()*0.251612);
}

double NNfunction_NN_4_4::synapse0x2919fa0() {
   return (neuron0x290bc50()*0.028692);
}

double NNfunction_NN_4_4::synapse0x2919fe0() {
   return (neuron0x290bf90()*-0.00597497);
}

double NNfunction_NN_4_4::synapse0x290e8b0() {
   return (neuron0x290c2d0()*0.039945);
}

double NNfunction_NN_4_4::synapse0x290e8f0() {
   return (neuron0x290c610()*0.0113858);
}

double NNfunction_NN_4_4::synapse0x26bc880() {
   return (neuron0x290c950()*-0.00778177);
}

double NNfunction_NN_4_4::synapse0x26bc8c0() {
   return (neuron0x290cc90()*0.00567643);
}

double NNfunction_NN_4_4::synapse0x290f030() {
   return (neuron0x290cfd0()*-0.00333723);
}

double NNfunction_NN_4_4::synapse0x290f070() {
   return (neuron0x290d310()*-0.0542216);
}

double NNfunction_NN_4_4::synapse0x290f370() {
   return (neuron0x290d650()*-0.184307);
}

double NNfunction_NN_4_4::synapse0x290f3b0() {
   return (neuron0x290d990()*-0.0649447);
}

double NNfunction_NN_4_4::synapse0x290f6b0() {
   return (neuron0x290dcd0()*0.0725728);
}

double NNfunction_NN_4_4::synapse0x290f6f0() {
   return (neuron0x290e010()*-0.28793);
}

double NNfunction_NN_4_4::synapse0x290f9f0() {
   return (neuron0x290e350()*0.0887243);
}

double NNfunction_NN_4_4::synapse0x290fa30() {
   return (neuron0x290e690()*-0.0434455);
}

double NNfunction_NN_4_4::synapse0x290fd30() {
   return (neuron0x290ebf0()*0.0204868);
}

double NNfunction_NN_4_4::synapse0x290fd70() {
   return (neuron0x290ee10()*0.0147801);
}

double NNfunction_NN_4_4::synapse0x2910070() {
   return (neuron0x290f150()*0.0356631);
}

double NNfunction_NN_4_4::synapse0x29100b0() {
   return (neuron0x290f490()*0.0716277);
}

double NNfunction_NN_4_4::synapse0x290dbb0() {
   return (neuron0x290f7d0()*-0.0421165);
}

double NNfunction_NN_4_4::synapse0x290dbf0() {
   return (neuron0x290fb10()*-0.0016508);
}

double NNfunction_NN_4_4::synapse0x291bec0() {
   return (neuron0x290fe50()*-0.243176);
}

double NNfunction_NN_4_4::synapse0x291c240() {
   return (neuron0x290b290()*0.0150539);
}

double NNfunction_NN_4_4::synapse0x291c280() {
   return (neuron0x290b5d0()*-2.83539);
}

double NNfunction_NN_4_4::synapse0x291c2c0() {
   return (neuron0x290b910()*0.768387);
}

double NNfunction_NN_4_4::synapse0x291c300() {
   return (neuron0x290bc50()*0.0152457);
}

double NNfunction_NN_4_4::synapse0x291c340() {
   return (neuron0x290bf90()*-0.0074632);
}

double NNfunction_NN_4_4::synapse0x291c380() {
   return (neuron0x290c2d0()*0.00380414);
}

double NNfunction_NN_4_4::synapse0x291c3c0() {
   return (neuron0x290c610()*0.0123793);
}

double NNfunction_NN_4_4::synapse0x291c400() {
   return (neuron0x290c950()*0.0111874);
}

double NNfunction_NN_4_4::synapse0x291c440() {
   return (neuron0x290cc90()*0.040954);
}

double NNfunction_NN_4_4::synapse0x291c480() {
   return (neuron0x290cfd0()*0.0139385);
}

double NNfunction_NN_4_4::synapse0x291c4c0() {
   return (neuron0x290d310()*0.0328495);
}

double NNfunction_NN_4_4::synapse0x291c500() {
   return (neuron0x290d650()*0.0165648);
}

double NNfunction_NN_4_4::synapse0x291c540() {
   return (neuron0x290d990()*0.0114474);
}

double NNfunction_NN_4_4::synapse0x291c580() {
   return (neuron0x290dcd0()*-0.0300715);
}

double NNfunction_NN_4_4::synapse0x291c5c0() {
   return (neuron0x290e010()*-0.0403106);
}

double NNfunction_NN_4_4::synapse0x291c600() {
   return (neuron0x290e350()*-0.0272178);
}

double NNfunction_NN_4_4::synapse0x291c090() {
   return (neuron0x290e690()*0.00013298);
}

double NNfunction_NN_4_4::synapse0x291c0d0() {
   return (neuron0x290ebf0()*0.0127599);
}

double NNfunction_NN_4_4::synapse0x291c750() {
   return (neuron0x290ee10()*-0.00207884);
}

double NNfunction_NN_4_4::synapse0x291c790() {
   return (neuron0x290f150()*0.0240268);
}

double NNfunction_NN_4_4::synapse0x291c7d0() {
   return (neuron0x290f490()*-0.0125092);
}

double NNfunction_NN_4_4::synapse0x291c810() {
   return (neuron0x290f7d0()*0.0181142);
}

double NNfunction_NN_4_4::synapse0x291c850() {
   return (neuron0x290fb10()*0.00730972);
}

double NNfunction_NN_4_4::synapse0x291c890() {
   return (neuron0x290fe50()*2.05571);
}

double NNfunction_NN_4_4::synapse0x291cc10() {
   return (neuron0x290b290()*0.000411903);
}

double NNfunction_NN_4_4::synapse0x291cc50() {
   return (neuron0x290b5d0()*-0.0491469);
}

double NNfunction_NN_4_4::synapse0x291cc90() {
   return (neuron0x290b910()*1.04803);
}

double NNfunction_NN_4_4::synapse0x291ccd0() {
   return (neuron0x290bc50()*0.0741734);
}

double NNfunction_NN_4_4::synapse0x291cd10() {
   return (neuron0x290bf90()*0.00978036);
}

double NNfunction_NN_4_4::synapse0x291cd50() {
   return (neuron0x290c2d0()*-0.00386156);
}

double NNfunction_NN_4_4::synapse0x291cd90() {
   return (neuron0x290c610()*0.0555957);
}

double NNfunction_NN_4_4::synapse0x291cdd0() {
   return (neuron0x290c950()*-0.0135438);
}

double NNfunction_NN_4_4::synapse0x291ce10() {
   return (neuron0x290cc90()*0.00687749);
}

double NNfunction_NN_4_4::synapse0x291ce50() {
   return (neuron0x290cfd0()*-3.25409e-05);
}

double NNfunction_NN_4_4::synapse0x291ce90() {
   return (neuron0x290d310()*-0.00845905);
}

double NNfunction_NN_4_4::synapse0x291ced0() {
   return (neuron0x290d650()*1.32873);
}

double NNfunction_NN_4_4::synapse0x291cf10() {
   return (neuron0x290d990()*0.149071);
}

double NNfunction_NN_4_4::synapse0x291cf50() {
   return (neuron0x290dcd0()*-0.000430715);
}

double NNfunction_NN_4_4::synapse0x291cf90() {
   return (neuron0x290e010()*0.0355394);
}

double NNfunction_NN_4_4::synapse0x291cfd0() {
   return (neuron0x290e350()*0.0213908);
}

double NNfunction_NN_4_4::synapse0x291ca60() {
   return (neuron0x290e690()*-0.0213237);
}

double NNfunction_NN_4_4::synapse0x291caa0() {
   return (neuron0x290ebf0()*-0.00771907);
}

double NNfunction_NN_4_4::synapse0x291d120() {
   return (neuron0x290ee10()*0.0104301);
}

double NNfunction_NN_4_4::synapse0x291d160() {
   return (neuron0x290f150()*0.0104407);
}

double NNfunction_NN_4_4::synapse0x291d1a0() {
   return (neuron0x290f490()*0.000312296);
}

double NNfunction_NN_4_4::synapse0x291d1e0() {
   return (neuron0x290f7d0()*0.0468467);
}

double NNfunction_NN_4_4::synapse0x291d220() {
   return (neuron0x290fb10()*0.00308702);
}

double NNfunction_NN_4_4::synapse0x291d260() {
   return (neuron0x290fe50()*-0.0482919);
}

double NNfunction_NN_4_4::synapse0x291d5e0() {
   return (neuron0x290b290()*-0.088004);
}

double NNfunction_NN_4_4::synapse0x291d620() {
   return (neuron0x290b5d0()*2.19082);
}

double NNfunction_NN_4_4::synapse0x291d660() {
   return (neuron0x290b910()*1.27307);
}

double NNfunction_NN_4_4::synapse0x291d6a0() {
   return (neuron0x290bc50()*0.00192762);
}

double NNfunction_NN_4_4::synapse0x291d6e0() {
   return (neuron0x290bf90()*-0.0545806);
}

double NNfunction_NN_4_4::synapse0x291d720() {
   return (neuron0x290c2d0()*-0.0685974);
}

double NNfunction_NN_4_4::synapse0x291d760() {
   return (neuron0x290c610()*0.0317203);
}

double NNfunction_NN_4_4::synapse0x291d7a0() {
   return (neuron0x290c950()*0.0771588);
}

double NNfunction_NN_4_4::synapse0x291d7e0() {
   return (neuron0x290cc90()*-0.0611849);
}

double NNfunction_NN_4_4::synapse0x291d820() {
   return (neuron0x290cfd0()*0.0197712);
}

double NNfunction_NN_4_4::synapse0x291d860() {
   return (neuron0x290d310()*0.0128862);
}

double NNfunction_NN_4_4::synapse0x291d8a0() {
   return (neuron0x290d650()*-0.0488569);
}

double NNfunction_NN_4_4::synapse0x291d8e0() {
   return (neuron0x290d990()*-0.038926);
}

double NNfunction_NN_4_4::synapse0x291d920() {
   return (neuron0x290dcd0()*-0.0624173);
}

double NNfunction_NN_4_4::synapse0x291d960() {
   return (neuron0x290e010()*0.576032);
}

double NNfunction_NN_4_4::synapse0x291d9a0() {
   return (neuron0x290e350()*-0.0796257);
}

double NNfunction_NN_4_4::synapse0x291d430() {
   return (neuron0x290e690()*0.00516211);
}

double NNfunction_NN_4_4::synapse0x291d470() {
   return (neuron0x290ebf0()*0.00913608);
}

double NNfunction_NN_4_4::synapse0x291daf0() {
   return (neuron0x290ee10()*-0.0504168);
}

double NNfunction_NN_4_4::synapse0x291db30() {
   return (neuron0x290f150()*0.0419256);
}

double NNfunction_NN_4_4::synapse0x291db70() {
   return (neuron0x290f490()*-0.106439);
}

double NNfunction_NN_4_4::synapse0x291dbb0() {
   return (neuron0x290f7d0()*0.00800831);
}

double NNfunction_NN_4_4::synapse0x291dbf0() {
   return (neuron0x290fb10()*-0.0156092);
}

double NNfunction_NN_4_4::synapse0x291dc30() {
   return (neuron0x290fe50()*1.41387);
}

double NNfunction_NN_4_4::synapse0x291dfb0() {
   return (neuron0x290b290()*-0.0343077);
}

double NNfunction_NN_4_4::synapse0x291dff0() {
   return (neuron0x290b5d0()*-5.36028);
}

double NNfunction_NN_4_4::synapse0x291e030() {
   return (neuron0x290b910()*-3.98033);
}

double NNfunction_NN_4_4::synapse0x291e070() {
   return (neuron0x290bc50()*0.0147177);
}

double NNfunction_NN_4_4::synapse0x291e0b0() {
   return (neuron0x290bf90()*-0.0429226);
}

double NNfunction_NN_4_4::synapse0x291e0f0() {
   return (neuron0x290c2d0()*0.0369105);
}

double NNfunction_NN_4_4::synapse0x291e130() {
   return (neuron0x290c610()*-0.0284239);
}

double NNfunction_NN_4_4::synapse0x291e170() {
   return (neuron0x290c950()*-0.0313576);
}

double NNfunction_NN_4_4::synapse0x291e1b0() {
   return (neuron0x290cc90()*-0.0141435);
}

double NNfunction_NN_4_4::synapse0x291e1f0() {
   return (neuron0x290cfd0()*-0.00624133);
}

double NNfunction_NN_4_4::synapse0x291e230() {
   return (neuron0x290d310()*-0.0250442);
}

double NNfunction_NN_4_4::synapse0x291e270() {
   return (neuron0x290d650()*-0.00380318);
}

double NNfunction_NN_4_4::synapse0x291e2b0() {
   return (neuron0x290d990()*-0.0157986);
}

double NNfunction_NN_4_4::synapse0x291e2f0() {
   return (neuron0x290dcd0()*-0.0341704);
}

double NNfunction_NN_4_4::synapse0x291e330() {
   return (neuron0x290e010()*-0.186891);
}

double NNfunction_NN_4_4::synapse0x291e370() {
   return (neuron0x290e350()*-0.0184211);
}

double NNfunction_NN_4_4::synapse0x291de00() {
   return (neuron0x290e690()*-0.00778024);
}

double NNfunction_NN_4_4::synapse0x291de40() {
   return (neuron0x290ebf0()*0.00604825);
}

double NNfunction_NN_4_4::synapse0x291e4c0() {
   return (neuron0x290ee10()*-0.0138987);
}

double NNfunction_NN_4_4::synapse0x291e500() {
   return (neuron0x290f150()*-0.0354876);
}

double NNfunction_NN_4_4::synapse0x291e540() {
   return (neuron0x290f490()*-0.0241206);
}

double NNfunction_NN_4_4::synapse0x291e580() {
   return (neuron0x290f7d0()*-0.0502673);
}

double NNfunction_NN_4_4::synapse0x291e5c0() {
   return (neuron0x290fb10()*-0.00150558);
}

double NNfunction_NN_4_4::synapse0x291e600() {
   return (neuron0x290fe50()*0.15827);
}

double NNfunction_NN_4_4::synapse0x291e980() {
   return (neuron0x290b290()*0.102008);
}

double NNfunction_NN_4_4::synapse0x291e9c0() {
   return (neuron0x290b5d0()*0.604528);
}

double NNfunction_NN_4_4::synapse0x291ea00() {
   return (neuron0x290b910()*-1.27762);
}

double NNfunction_NN_4_4::synapse0x291ea40() {
   return (neuron0x290bc50()*-0.00946719);
}

double NNfunction_NN_4_4::synapse0x291ea80() {
   return (neuron0x290bf90()*-0.0232591);
}

double NNfunction_NN_4_4::synapse0x291eac0() {
   return (neuron0x290c2d0()*-0.0860916);
}

double NNfunction_NN_4_4::synapse0x291eb00() {
   return (neuron0x290c610()*0.0816362);
}

double NNfunction_NN_4_4::synapse0x291eb40() {
   return (neuron0x290c950()*0.0195547);
}

double NNfunction_NN_4_4::synapse0x291eb80() {
   return (neuron0x290cc90()*-0.0443272);
}

double NNfunction_NN_4_4::synapse0x2916d40() {
   return (neuron0x290cfd0()*0.138742);
}

double NNfunction_NN_4_4::synapse0x2916d80() {
   return (neuron0x290d310()*0.0659753);
}

double NNfunction_NN_4_4::synapse0x2916dc0() {
   return (neuron0x290d650()*-0.327356);
}

double NNfunction_NN_4_4::synapse0x2916e00() {
   return (neuron0x290d990()*-0.162935);
}

double NNfunction_NN_4_4::synapse0x2916e40() {
   return (neuron0x290dcd0()*-0.00709849);
}

double NNfunction_NN_4_4::synapse0x2916e80() {
   return (neuron0x290e010()*-0.398511);
}

double NNfunction_NN_4_4::synapse0x2916ec0() {
   return (neuron0x290e350()*0.0280702);
}

double NNfunction_NN_4_4::synapse0x291e7d0() {
   return (neuron0x290e690()*-0.00409133);
}

double NNfunction_NN_4_4::synapse0x291e810() {
   return (neuron0x290ebf0()*-0.017252);
}

double NNfunction_NN_4_4::synapse0x2917010() {
   return (neuron0x290ee10()*-0.141495);
}

double NNfunction_NN_4_4::synapse0x2917050() {
   return (neuron0x290f150()*-0.0526309);
}

double NNfunction_NN_4_4::synapse0x2917090() {
   return (neuron0x290f490()*0.00242413);
}

double NNfunction_NN_4_4::synapse0x29170d0() {
   return (neuron0x290f7d0()*-0.0775116);
}

double NNfunction_NN_4_4::synapse0x2917110() {
   return (neuron0x290fb10()*-0.0263667);
}

double NNfunction_NN_4_4::synapse0x2917150() {
   return (neuron0x290fe50()*0.147985);
}

double NNfunction_NN_4_4::synapse0x29174d0() {
   return (neuron0x290b290()*0.0855902);
}

double NNfunction_NN_4_4::synapse0x2917510() {
   return (neuron0x290b5d0()*-1.06371);
}

double NNfunction_NN_4_4::synapse0x2917550() {
   return (neuron0x290b910()*-1.33056);
}

double NNfunction_NN_4_4::synapse0x2917590() {
   return (neuron0x290bc50()*-0.00655064);
}

double NNfunction_NN_4_4::synapse0x29175d0() {
   return (neuron0x290bf90()*0.0429974);
}

double NNfunction_NN_4_4::synapse0x2917610() {
   return (neuron0x290c2d0()*-0.0031224);
}

double NNfunction_NN_4_4::synapse0x2917650() {
   return (neuron0x290c610()*0.00900178);
}

double NNfunction_NN_4_4::synapse0x2917690() {
   return (neuron0x290c950()*0.0160804);
}

double NNfunction_NN_4_4::synapse0x29176d0() {
   return (neuron0x290cc90()*-0.00338036);
}

double NNfunction_NN_4_4::synapse0x2917710() {
   return (neuron0x290cfd0()*-0.0103693);
}

double NNfunction_NN_4_4::synapse0x2917750() {
   return (neuron0x290d310()*0.0171624);
}

double NNfunction_NN_4_4::synapse0x2917790() {
   return (neuron0x290d650()*0.0230087);
}

double NNfunction_NN_4_4::synapse0x29177d0() {
   return (neuron0x290d990()*0.037309);
}

double NNfunction_NN_4_4::synapse0x2917810() {
   return (neuron0x290dcd0()*0.00650607);
}

double NNfunction_NN_4_4::synapse0x2917850() {
   return (neuron0x290e010()*0.0701482);
}

double NNfunction_NN_4_4::synapse0x2917890() {
   return (neuron0x290e350()*0.00160498);
}

double NNfunction_NN_4_4::synapse0x2917320() {
   return (neuron0x290e690()*0.0158651);
}

double NNfunction_NN_4_4::synapse0x2917360() {
   return (neuron0x290ebf0()*-0.0308168);
}

double NNfunction_NN_4_4::synapse0x29179e0() {
   return (neuron0x290ee10()*0.00139026);
}

double NNfunction_NN_4_4::synapse0x2917a20() {
   return (neuron0x290f150()*0.0127499);
}

double NNfunction_NN_4_4::synapse0x2917a60() {
   return (neuron0x290f490()*-0.0126487);
}

double NNfunction_NN_4_4::synapse0x2917aa0() {
   return (neuron0x290f7d0()*-0.00680213);
}

double NNfunction_NN_4_4::synapse0x2917ae0() {
   return (neuron0x290fb10()*0.0252836);
}

double NNfunction_NN_4_4::synapse0x2917b20() {
   return (neuron0x290fe50()*1.8482);
}

double NNfunction_NN_4_4::synapse0x2917cf0() {
   return (neuron0x290b290()*-0.117914);
}

double NNfunction_NN_4_4::synapse0x2920d80() {
   return (neuron0x290b5d0()*0.58157);
}

double NNfunction_NN_4_4::synapse0x2920dc0() {
   return (neuron0x290b910()*-0.697701);
}

double NNfunction_NN_4_4::synapse0x2920e00() {
   return (neuron0x290bc50()*-0.00411988);
}

double NNfunction_NN_4_4::synapse0x2920e40() {
   return (neuron0x290bf90()*-0.251526);
}

double NNfunction_NN_4_4::synapse0x2920e80() {
   return (neuron0x290c2d0()*-0.480621);
}

double NNfunction_NN_4_4::synapse0x2920ec0() {
   return (neuron0x290c610()*-0.0881326);
}

double NNfunction_NN_4_4::synapse0x2920f00() {
   return (neuron0x290c950()*-0.413416);
}

double NNfunction_NN_4_4::synapse0x2920f40() {
   return (neuron0x290cc90()*-0.0517935);
}

double NNfunction_NN_4_4::synapse0x2920f80() {
   return (neuron0x290cfd0()*0.0647289);
}

double NNfunction_NN_4_4::synapse0x2920fc0() {
   return (neuron0x290d310()*-0.0787783);
}

double NNfunction_NN_4_4::synapse0x2921000() {
   return (neuron0x290d650()*-0.555156);
}

double NNfunction_NN_4_4::synapse0x2921040() {
   return (neuron0x290d990()*0.136811);
}

double NNfunction_NN_4_4::synapse0x2921080() {
   return (neuron0x290dcd0()*-0.114816);
}

double NNfunction_NN_4_4::synapse0x29210c0() {
   return (neuron0x290e010()*-0.141114);
}

double NNfunction_NN_4_4::synapse0x2921100() {
   return (neuron0x290e350()*0.0965251);
}

double NNfunction_NN_4_4::synapse0x2920bd0() {
   return (neuron0x290e690()*-0.378226);
}

double NNfunction_NN_4_4::synapse0x2920c10() {
   return (neuron0x290ebf0()*-0.186897);
}

double NNfunction_NN_4_4::synapse0x2921250() {
   return (neuron0x290ee10()*-0.130255);
}

double NNfunction_NN_4_4::synapse0x2921290() {
   return (neuron0x290f150()*0.116002);
}

double NNfunction_NN_4_4::synapse0x29212d0() {
   return (neuron0x290f490()*-0.130482);
}

double NNfunction_NN_4_4::synapse0x2921310() {
   return (neuron0x290f7d0()*-0.153583);
}

double NNfunction_NN_4_4::synapse0x2921350() {
   return (neuron0x290fb10()*0.00101379);
}

double NNfunction_NN_4_4::synapse0x2921390() {
   return (neuron0x290fe50()*-0.584943);
}

double NNfunction_NN_4_4::synapse0x2921710() {
   return (neuron0x290b290()*-0.0432158);
}

double NNfunction_NN_4_4::synapse0x2921750() {
   return (neuron0x290b5d0()*-0.443656);
}

double NNfunction_NN_4_4::synapse0x2921790() {
   return (neuron0x290b910()*0.732795);
}

double NNfunction_NN_4_4::synapse0x29217d0() {
   return (neuron0x290bc50()*0.0284153);
}

double NNfunction_NN_4_4::synapse0x2921810() {
   return (neuron0x290bf90()*-0.0399575);
}

double NNfunction_NN_4_4::synapse0x2921850() {
   return (neuron0x290c2d0()*-0.0157421);
}

double NNfunction_NN_4_4::synapse0x2921890() {
   return (neuron0x290c610()*-0.0715586);
}

double NNfunction_NN_4_4::synapse0x29218d0() {
   return (neuron0x290c950()*0.00645584);
}

double NNfunction_NN_4_4::synapse0x2921910() {
   return (neuron0x290cc90()*-0.0114041);
}

double NNfunction_NN_4_4::synapse0x2921950() {
   return (neuron0x290cfd0()*-6.13426e-05);
}

double NNfunction_NN_4_4::synapse0x2921990() {
   return (neuron0x290d310()*0.0586778);
}

double NNfunction_NN_4_4::synapse0x29219d0() {
   return (neuron0x290d650()*0.0916083);
}

double NNfunction_NN_4_4::synapse0x2921a10() {
   return (neuron0x290d990()*-0.00931961);
}

double NNfunction_NN_4_4::synapse0x2921a50() {
   return (neuron0x290dcd0()*-0.0340384);
}

double NNfunction_NN_4_4::synapse0x2921a90() {
   return (neuron0x290e010()*-0.22055);
}

double NNfunction_NN_4_4::synapse0x2921ad0() {
   return (neuron0x290e350()*0.0833003);
}

double NNfunction_NN_4_4::synapse0x2921560() {
   return (neuron0x290e690()*0.0488836);
}

double NNfunction_NN_4_4::synapse0x29215a0() {
   return (neuron0x290ebf0()*0.0448478);
}

double NNfunction_NN_4_4::synapse0x2921c20() {
   return (neuron0x290ee10()*-0.00266137);
}

double NNfunction_NN_4_4::synapse0x2921c60() {
   return (neuron0x290f150()*-0.0456435);
}

double NNfunction_NN_4_4::synapse0x2921ca0() {
   return (neuron0x290f490()*0.00424446);
}

double NNfunction_NN_4_4::synapse0x2921ce0() {
   return (neuron0x290f7d0()*-0.0222651);
}

double NNfunction_NN_4_4::synapse0x2921d20() {
   return (neuron0x290fb10()*0.00924602);
}

double NNfunction_NN_4_4::synapse0x2921d60() {
   return (neuron0x290fe50()*-0.00869761);
}

double NNfunction_NN_4_4::synapse0x29220e0() {
   return (neuron0x290b290()*-0.136116);
}

double NNfunction_NN_4_4::synapse0x2922120() {
   return (neuron0x290b5d0()*-0.443868);
}

double NNfunction_NN_4_4::synapse0x2922160() {
   return (neuron0x290b910()*-0.336462);
}

double NNfunction_NN_4_4::synapse0x29221a0() {
   return (neuron0x290bc50()*0.0149051);
}

double NNfunction_NN_4_4::synapse0x29221e0() {
   return (neuron0x290bf90()*-0.0262016);
}

double NNfunction_NN_4_4::synapse0x2922220() {
   return (neuron0x290c2d0()*-0.195348);
}

double NNfunction_NN_4_4::synapse0x2922260() {
   return (neuron0x290c610()*-0.00598801);
}

double NNfunction_NN_4_4::synapse0x29222a0() {
   return (neuron0x290c950()*0.187024);
}

double NNfunction_NN_4_4::synapse0x29222e0() {
   return (neuron0x290cc90()*0.0249845);
}

double NNfunction_NN_4_4::synapse0x2922320() {
   return (neuron0x290cfd0()*0.230527);
}

double NNfunction_NN_4_4::synapse0x2922360() {
   return (neuron0x290d310()*0.321953);
}

double NNfunction_NN_4_4::synapse0x29223a0() {
   return (neuron0x290d650()*0.52931);
}

double NNfunction_NN_4_4::synapse0x29223e0() {
   return (neuron0x290d990()*-1.21301);
}

double NNfunction_NN_4_4::synapse0x2922420() {
   return (neuron0x290dcd0()*-0.1336);
}

double NNfunction_NN_4_4::synapse0x2922460() {
   return (neuron0x290e010()*-0.338455);
}

double NNfunction_NN_4_4::synapse0x29224a0() {
   return (neuron0x290e350()*-0.367442);
}

double NNfunction_NN_4_4::synapse0x2921f30() {
   return (neuron0x290e690()*-0.2564);
}

double NNfunction_NN_4_4::synapse0x2921f70() {
   return (neuron0x290ebf0()*-0.666807);
}

double NNfunction_NN_4_4::synapse0x29225f0() {
   return (neuron0x290ee10()*0.0627653);
}

double NNfunction_NN_4_4::synapse0x2922630() {
   return (neuron0x290f150()*-0.208373);
}

double NNfunction_NN_4_4::synapse0x2922670() {
   return (neuron0x290f490()*-0.044019);
}

double NNfunction_NN_4_4::synapse0x29226b0() {
   return (neuron0x290f7d0()*-0.0912591);
}

double NNfunction_NN_4_4::synapse0x29226f0() {
   return (neuron0x290fb10()*-0.253709);
}

double NNfunction_NN_4_4::synapse0x2922730() {
   return (neuron0x290fe50()*-0.255033);
}

double NNfunction_NN_4_4::synapse0x2922ab0() {
   return (neuron0x290b290()*-0.117394);
}

double NNfunction_NN_4_4::synapse0x2922af0() {
   return (neuron0x290b5d0()*0.496563);
}

double NNfunction_NN_4_4::synapse0x2922b30() {
   return (neuron0x290b910()*-1.52564);
}

double NNfunction_NN_4_4::synapse0x2922b70() {
   return (neuron0x290bc50()*-0.182279);
}

double NNfunction_NN_4_4::synapse0x2922bb0() {
   return (neuron0x290bf90()*-0.0244071);
}

double NNfunction_NN_4_4::synapse0x2922bf0() {
   return (neuron0x290c2d0()*-0.187918);
}

double NNfunction_NN_4_4::synapse0x2922c30() {
   return (neuron0x290c610()*-0.0881428);
}

double NNfunction_NN_4_4::synapse0x2922c70() {
   return (neuron0x290c950()*-0.0056552);
}

double NNfunction_NN_4_4::synapse0x2922cb0() {
   return (neuron0x290cc90()*-0.216056);
}

double NNfunction_NN_4_4::synapse0x2922cf0() {
   return (neuron0x290cfd0()*0.0661199);
}

double NNfunction_NN_4_4::synapse0x2922d30() {
   return (neuron0x290d310()*0.105714);
}

double NNfunction_NN_4_4::synapse0x2922d70() {
   return (neuron0x290d650()*1.03154);
}

double NNfunction_NN_4_4::synapse0x2922db0() {
   return (neuron0x290d990()*-0.0881382);
}

double NNfunction_NN_4_4::synapse0x2922df0() {
   return (neuron0x290dcd0()*-0.30868);
}

double NNfunction_NN_4_4::synapse0x2922e30() {
   return (neuron0x290e010()*0.7108);
}

double NNfunction_NN_4_4::synapse0x2922e70() {
   return (neuron0x290e350()*0.117284);
}

double NNfunction_NN_4_4::synapse0x2922900() {
   return (neuron0x290e690()*0.0890241);
}

double NNfunction_NN_4_4::synapse0x2922940() {
   return (neuron0x290ebf0()*0.00766243);
}

double NNfunction_NN_4_4::synapse0x2922fc0() {
   return (neuron0x290ee10()*0.186477);
}

double NNfunction_NN_4_4::synapse0x2923000() {
   return (neuron0x290f150()*-0.119211);
}

double NNfunction_NN_4_4::synapse0x2923040() {
   return (neuron0x290f490()*-0.0377496);
}

double NNfunction_NN_4_4::synapse0x2923080() {
   return (neuron0x290f7d0()*0.130511);
}

double NNfunction_NN_4_4::synapse0x29230c0() {
   return (neuron0x290fb10()*-0.019748);
}

double NNfunction_NN_4_4::synapse0x2923100() {
   return (neuron0x290fe50()*0.0652564);
}

double NNfunction_NN_4_4::synapse0x2923480() {
   return (neuron0x290b290()*-0.0503752);
}

double NNfunction_NN_4_4::synapse0x29234c0() {
   return (neuron0x290b5d0()*-1.34639);
}

double NNfunction_NN_4_4::synapse0x2923500() {
   return (neuron0x290b910()*1.4107);
}

double NNfunction_NN_4_4::synapse0x2923540() {
   return (neuron0x290bc50()*0.0449029);
}

double NNfunction_NN_4_4::synapse0x2923580() {
   return (neuron0x290bf90()*0.0637877);
}

double NNfunction_NN_4_4::synapse0x29235c0() {
   return (neuron0x290c2d0()*0.0264659);
}

double NNfunction_NN_4_4::synapse0x2923600() {
   return (neuron0x290c610()*0.070463);
}

double NNfunction_NN_4_4::synapse0x2923640() {
   return (neuron0x290c950()*-0.0325997);
}

double NNfunction_NN_4_4::synapse0x2923680() {
   return (neuron0x290cc90()*0.02557);
}

double NNfunction_NN_4_4::synapse0x29236c0() {
   return (neuron0x290cfd0()*0.0145867);
}

double NNfunction_NN_4_4::synapse0x2923700() {
   return (neuron0x290d310()*-0.0147017);
}

double NNfunction_NN_4_4::synapse0x2923740() {
   return (neuron0x290d650()*0.466738);
}

double NNfunction_NN_4_4::synapse0x2923780() {
   return (neuron0x290d990()*-1.98564);
}

double NNfunction_NN_4_4::synapse0x29237c0() {
   return (neuron0x290dcd0()*0.0292059);
}

double NNfunction_NN_4_4::synapse0x2923800() {
   return (neuron0x290e010()*0.0862634);
}

double NNfunction_NN_4_4::synapse0x2923840() {
   return (neuron0x290e350()*0.023512);
}

double NNfunction_NN_4_4::synapse0x29232d0() {
   return (neuron0x290e690()*-0.0247766);
}

double NNfunction_NN_4_4::synapse0x2923310() {
   return (neuron0x290ebf0()*-0.0339137);
}

double NNfunction_NN_4_4::synapse0x2923990() {
   return (neuron0x290ee10()*-0.0634961);
}

double NNfunction_NN_4_4::synapse0x29239d0() {
   return (neuron0x290f150()*-0.0512677);
}

double NNfunction_NN_4_4::synapse0x2923a10() {
   return (neuron0x290f490()*-0.0306702);
}

double NNfunction_NN_4_4::synapse0x2923a50() {
   return (neuron0x290f7d0()*-0.0594343);
}

double NNfunction_NN_4_4::synapse0x2923a90() {
   return (neuron0x290fb10()*-0.0200593);
}

double NNfunction_NN_4_4::synapse0x2923ad0() {
   return (neuron0x290fe50()*-0.0243521);
}

double NNfunction_NN_4_4::synapse0x2923e50() {
   return (neuron0x290b290()*-0.0178084);
}

double NNfunction_NN_4_4::synapse0x2923e90() {
   return (neuron0x290b5d0()*-0.346506);
}

double NNfunction_NN_4_4::synapse0x2923ed0() {
   return (neuron0x290b910()*0.622928);
}

double NNfunction_NN_4_4::synapse0x2923f10() {
   return (neuron0x290bc50()*-0.0492091);
}

double NNfunction_NN_4_4::synapse0x2923f50() {
   return (neuron0x290bf90()*0.0142204);
}

double NNfunction_NN_4_4::synapse0x2923f90() {
   return (neuron0x290c2d0()*-0.0123895);
}

double NNfunction_NN_4_4::synapse0x2923fd0() {
   return (neuron0x290c610()*0.116576);
}

double NNfunction_NN_4_4::synapse0x2924010() {
   return (neuron0x290c950()*0.0123933);
}

double NNfunction_NN_4_4::synapse0x2924050() {
   return (neuron0x290cc90()*-0.0401408);
}

double NNfunction_NN_4_4::synapse0x2924090() {
   return (neuron0x290cfd0()*0.0322235);
}

double NNfunction_NN_4_4::synapse0x29240d0() {
   return (neuron0x290d310()*-0.0326697);
}

double NNfunction_NN_4_4::synapse0x2924110() {
   return (neuron0x290d650()*1.78519);
}

double NNfunction_NN_4_4::synapse0x2924150() {
   return (neuron0x290d990()*-1.12929);
}

double NNfunction_NN_4_4::synapse0x2924190() {
   return (neuron0x290dcd0()*-0.034736);
}

double NNfunction_NN_4_4::synapse0x29241d0() {
   return (neuron0x290e010()*-0.0258711);
}

double NNfunction_NN_4_4::synapse0x2924210() {
   return (neuron0x290e350()*0.0651029);
}

double NNfunction_NN_4_4::synapse0x2923ca0() {
   return (neuron0x290e690()*-0.0879259);
}

double NNfunction_NN_4_4::synapse0x2923ce0() {
   return (neuron0x290ebf0()*0.0321114);
}

double NNfunction_NN_4_4::synapse0x2924360() {
   return (neuron0x290ee10()*-0.0529134);
}

double NNfunction_NN_4_4::synapse0x29243a0() {
   return (neuron0x290f150()*-0.012788);
}

double NNfunction_NN_4_4::synapse0x29243e0() {
   return (neuron0x290f490()*-0.126371);
}

double NNfunction_NN_4_4::synapse0x2924420() {
   return (neuron0x290f7d0()*-0.107789);
}

double NNfunction_NN_4_4::synapse0x2924460() {
   return (neuron0x290fb10()*-0.0133473);
}

double NNfunction_NN_4_4::synapse0x29244a0() {
   return (neuron0x290fe50()*0.068834);
}

double NNfunction_NN_4_4::synapse0x2924820() {
   return (neuron0x290b290()*0.021226);
}

double NNfunction_NN_4_4::synapse0x2924860() {
   return (neuron0x290b5d0()*-0.100152);
}

double NNfunction_NN_4_4::synapse0x29248a0() {
   return (neuron0x290b910()*0.138255);
}

double NNfunction_NN_4_4::synapse0x29248e0() {
   return (neuron0x290bc50()*-0.0203718);
}

double NNfunction_NN_4_4::synapse0x2924920() {
   return (neuron0x290bf90()*0.0104062);
}

double NNfunction_NN_4_4::synapse0x2924960() {
   return (neuron0x290c2d0()*0.0176399);
}

double NNfunction_NN_4_4::synapse0x29249a0() {
   return (neuron0x290c610()*0.0417942);
}

double NNfunction_NN_4_4::synapse0x29249e0() {
   return (neuron0x290c950()*0.0142864);
}

double NNfunction_NN_4_4::synapse0x2924a20() {
   return (neuron0x290cc90()*-0.00635531);
}

double NNfunction_NN_4_4::synapse0x2924a60() {
   return (neuron0x290cfd0()*-0.026768);
}

double NNfunction_NN_4_4::synapse0x2924aa0() {
   return (neuron0x290d310()*-0.0251458);
}

double NNfunction_NN_4_4::synapse0x2924ae0() {
   return (neuron0x290d650()*-0.0814109);
}

double NNfunction_NN_4_4::synapse0x2924b20() {
   return (neuron0x290d990()*-0.0208895);
}

double NNfunction_NN_4_4::synapse0x2924b60() {
   return (neuron0x290dcd0()*-0.0383294);
}

double NNfunction_NN_4_4::synapse0x2924ba0() {
   return (neuron0x290e010()*1.98768);
}

double NNfunction_NN_4_4::synapse0x2924be0() {
   return (neuron0x290e350()*0.0592705);
}

double NNfunction_NN_4_4::synapse0x2924670() {
   return (neuron0x290e690()*0.0317834);
}

double NNfunction_NN_4_4::synapse0x29246b0() {
   return (neuron0x290ebf0()*-0.07521);
}

double NNfunction_NN_4_4::synapse0x2924d30() {
   return (neuron0x290ee10()*0.0507376);
}

double NNfunction_NN_4_4::synapse0x2924d70() {
   return (neuron0x290f150()*-0.0731191);
}

double NNfunction_NN_4_4::synapse0x2924db0() {
   return (neuron0x290f490()*0.0325656);
}

double NNfunction_NN_4_4::synapse0x2924df0() {
   return (neuron0x290f7d0()*0.0351992);
}

double NNfunction_NN_4_4::synapse0x2924e30() {
   return (neuron0x290fb10()*0.0219705);
}

double NNfunction_NN_4_4::synapse0x2924e70() {
   return (neuron0x290fe50()*-0.26312);
}

double NNfunction_NN_4_4::synapse0x29251f0() {
   return (neuron0x290b290()*0.0337465);
}

double NNfunction_NN_4_4::synapse0x2925230() {
   return (neuron0x290b5d0()*-4.42019);
}

double NNfunction_NN_4_4::synapse0x2925270() {
   return (neuron0x290b910()*-2.85692);
}

double NNfunction_NN_4_4::synapse0x29252b0() {
   return (neuron0x290bc50()*0.0160339);
}

double NNfunction_NN_4_4::synapse0x29252f0() {
   return (neuron0x290bf90()*-0.0277138);
}

double NNfunction_NN_4_4::synapse0x2925330() {
   return (neuron0x290c2d0()*0.0308137);
}

double NNfunction_NN_4_4::synapse0x2925370() {
   return (neuron0x290c610()*0.00848389);
}

double NNfunction_NN_4_4::synapse0x29253b0() {
   return (neuron0x290c950()*-0.0154305);
}

double NNfunction_NN_4_4::synapse0x29253f0() {
   return (neuron0x290cc90()*0.0223478);
}

double NNfunction_NN_4_4::synapse0x2925430() {
   return (neuron0x290cfd0()*-0.0374194);
}

double NNfunction_NN_4_4::synapse0x2925470() {
   return (neuron0x290d310()*-0.00175607);
}

double NNfunction_NN_4_4::synapse0x29254b0() {
   return (neuron0x290d650()*-0.0334548);
}

double NNfunction_NN_4_4::synapse0x29254f0() {
   return (neuron0x290d990()*0.0250413);
}

double NNfunction_NN_4_4::synapse0x2925530() {
   return (neuron0x290dcd0()*-0.000936888);
}

double NNfunction_NN_4_4::synapse0x2925570() {
   return (neuron0x290e010()*0.00735855);
}

double NNfunction_NN_4_4::synapse0x29255b0() {
   return (neuron0x290e350()*-0.0216493);
}

double NNfunction_NN_4_4::synapse0x2925040() {
   return (neuron0x290e690()*0.00689794);
}

double NNfunction_NN_4_4::synapse0x2925080() {
   return (neuron0x290ebf0()*0.0120105);
}

double NNfunction_NN_4_4::synapse0x2925700() {
   return (neuron0x290ee10()*-0.0122065);
}

double NNfunction_NN_4_4::synapse0x2925740() {
   return (neuron0x290f150()*-0.0443414);
}

double NNfunction_NN_4_4::synapse0x2925780() {
   return (neuron0x290f490()*0.0130063);
}

double NNfunction_NN_4_4::synapse0x29257c0() {
   return (neuron0x290f7d0()*-0.00600613);
}

double NNfunction_NN_4_4::synapse0x2925800() {
   return (neuron0x290fb10()*0.00240833);
}

double NNfunction_NN_4_4::synapse0x2925840() {
   return (neuron0x290fe50()*-0.410185);
}

double NNfunction_NN_4_4::synapse0x2925bc0() {
   return (neuron0x290b290()*-0.698862);
}

double NNfunction_NN_4_4::synapse0x291a190() {
   return (neuron0x290b5d0()*0.615104);
}

double NNfunction_NN_4_4::synapse0x291a1d0() {
   return (neuron0x290b910()*-0.0205401);
}

double NNfunction_NN_4_4::synapse0x291a210() {
   return (neuron0x290bc50()*-0.435555);
}

double NNfunction_NN_4_4::synapse0x291a460() {
   return (neuron0x290bf90()*-0.731411);
}

double NNfunction_NN_4_4::synapse0x291a4a0() {
   return (neuron0x290c2d0()*-0.350448);
}

double NNfunction_NN_4_4::synapse0x291a4e0() {
   return (neuron0x290c610()*-0.26879);
}

double NNfunction_NN_4_4::synapse0x291a730() {
   return (neuron0x290c950()*0.646101);
}

double NNfunction_NN_4_4::synapse0x291a770() {
   return (neuron0x290cc90()*-0.429667);
}

double NNfunction_NN_4_4::synapse0x291a9c0() {
   return (neuron0x290cfd0()*-0.131414);
}

double NNfunction_NN_4_4::synapse0x291aa00() {
   return (neuron0x290d310()*0.157011);
}

double NNfunction_NN_4_4::synapse0x291aa40() {
   return (neuron0x290d650()*-0.222597);
}

double NNfunction_NN_4_4::synapse0x291ac90() {
   return (neuron0x290d990()*-0.0876104);
}

double NNfunction_NN_4_4::synapse0x291acd0() {
   return (neuron0x290dcd0()*-0.162585);
}

double NNfunction_NN_4_4::synapse0x291af20() {
   return (neuron0x290e010()*-0.170249);
}

double NNfunction_NN_4_4::synapse0x291af60() {
   return (neuron0x290e350()*-0.16402);
}

double NNfunction_NN_4_4::synapse0x2925a10() {
   return (neuron0x290e690()*0.30903);
}

double NNfunction_NN_4_4::synapse0x2925a50() {
   return (neuron0x290ebf0()*0.137345);
}

double NNfunction_NN_4_4::synapse0x291b0b0() {
   return (neuron0x290ee10()*-0.0335665);
}

double NNfunction_NN_4_4::synapse0x291b5c0() {
   return (neuron0x290f150()*0.00403412);
}

double NNfunction_NN_4_4::synapse0x291b600() {
   return (neuron0x290f490()*-0.214906);
}

double NNfunction_NN_4_4::synapse0x291b640() {
   return (neuron0x290f7d0()*-0.515593);
}

double NNfunction_NN_4_4::synapse0x291b890() {
   return (neuron0x290fb10()*-0.215068);
}

double NNfunction_NN_4_4::synapse0x291b8d0() {
   return (neuron0x290fe50()*0.00136525);
}

double NNfunction_NN_4_4::synapse0x291b180() {
   return (neuron0x290b290()*0.214645);
}

double NNfunction_NN_4_4::synapse0x291b1c0() {
   return (neuron0x290b5d0()*-0.484642);
}

double NNfunction_NN_4_4::synapse0x291b200() {
   return (neuron0x290b910()*-0.54065);
}

double NNfunction_NN_4_4::synapse0x291b240() {
   return (neuron0x290bc50()*-0.11274);
}

double NNfunction_NN_4_4::synapse0x291bbc0() {
   return (neuron0x290bf90()*-0.0281253);
}

double NNfunction_NN_4_4::synapse0x2927f10() {
   return (neuron0x290c2d0()*-2.58397e-05);
}

double NNfunction_NN_4_4::synapse0x2927f50() {
   return (neuron0x290c610()*0.0178601);
}

double NNfunction_NN_4_4::synapse0x2927f90() {
   return (neuron0x290c950()*0.133509);
}

double NNfunction_NN_4_4::synapse0x2927fd0() {
   return (neuron0x290cc90()*0.0183456);
}

double NNfunction_NN_4_4::synapse0x2928010() {
   return (neuron0x290cfd0()*0.0725996);
}

double NNfunction_NN_4_4::synapse0x2928050() {
   return (neuron0x290d310()*-0.093752);
}

double NNfunction_NN_4_4::synapse0x2928090() {
   return (neuron0x290d650()*-0.209193);
}

double NNfunction_NN_4_4::synapse0x29280d0() {
   return (neuron0x290d990()*-0.202904);
}

double NNfunction_NN_4_4::synapse0x2928110() {
   return (neuron0x290dcd0()*-0.140612);
}

double NNfunction_NN_4_4::synapse0x2928150() {
   return (neuron0x290e010()*0.905936);
}

double NNfunction_NN_4_4::synapse0x2928190() {
   return (neuron0x290e350()*-0.0176168);
}

double NNfunction_NN_4_4::synapse0x291baa0() {
   return (neuron0x290e690()*0.156895);
}

double NNfunction_NN_4_4::synapse0x291bae0() {
   return (neuron0x290ebf0()*0.12525);
}

double NNfunction_NN_4_4::synapse0x29282e0() {
   return (neuron0x290ee10()*-0.00595048);
}

double NNfunction_NN_4_4::synapse0x2928320() {
   return (neuron0x290f150()*-0.0208706);
}

double NNfunction_NN_4_4::synapse0x2928360() {
   return (neuron0x290f490()*-0.0774295);
}

double NNfunction_NN_4_4::synapse0x29283a0() {
   return (neuron0x290f7d0()*0.139644);
}

double NNfunction_NN_4_4::synapse0x29283e0() {
   return (neuron0x290fb10()*-0.00485258);
}

double NNfunction_NN_4_4::synapse0x2928420() {
   return (neuron0x290fe50()*0.501743);
}

double NNfunction_NN_4_4::synapse0x29287a0() {
   return (neuron0x290b290()*-0.0119738);
}

double NNfunction_NN_4_4::synapse0x29287e0() {
   return (neuron0x290b5d0()*2.9787);
}

double NNfunction_NN_4_4::synapse0x2928820() {
   return (neuron0x290b910()*-3.53939);
}

double NNfunction_NN_4_4::synapse0x2928860() {
   return (neuron0x290bc50()*7.68712e-05);
}

double NNfunction_NN_4_4::synapse0x29288a0() {
   return (neuron0x290bf90()*-0.0312405);
}

double NNfunction_NN_4_4::synapse0x29288e0() {
   return (neuron0x290c2d0()*0.0466);
}

double NNfunction_NN_4_4::synapse0x2928920() {
   return (neuron0x290c610()*-0.0338388);
}

double NNfunction_NN_4_4::synapse0x2928960() {
   return (neuron0x290c950()*-0.0401376);
}

double NNfunction_NN_4_4::synapse0x29289a0() {
   return (neuron0x290cc90()*0.0035359);
}

double NNfunction_NN_4_4::synapse0x29289e0() {
   return (neuron0x290cfd0()*0.00106705);
}

double NNfunction_NN_4_4::synapse0x2928a20() {
   return (neuron0x290d310()*0.0290532);
}

double NNfunction_NN_4_4::synapse0x2928a60() {
   return (neuron0x290d650()*1.02889);
}

double NNfunction_NN_4_4::synapse0x2928aa0() {
   return (neuron0x290d990()*0.0418543);
}

double NNfunction_NN_4_4::synapse0x2928ae0() {
   return (neuron0x290dcd0()*0.0237176);
}

double NNfunction_NN_4_4::synapse0x2928b20() {
   return (neuron0x290e010()*-0.12855);
}

double NNfunction_NN_4_4::synapse0x2928b60() {
   return (neuron0x290e350()*0.0444412);
}

double NNfunction_NN_4_4::synapse0x29285f0() {
   return (neuron0x290e690()*0.0106597);
}

double NNfunction_NN_4_4::synapse0x2928630() {
   return (neuron0x290ebf0()*-0.00428267);
}

double NNfunction_NN_4_4::synapse0x2928cb0() {
   return (neuron0x290ee10()*-0.0173902);
}

double NNfunction_NN_4_4::synapse0x2928cf0() {
   return (neuron0x290f150()*-0.0159193);
}

double NNfunction_NN_4_4::synapse0x2928d30() {
   return (neuron0x290f490()*0.0125665);
}

double NNfunction_NN_4_4::synapse0x2928d70() {
   return (neuron0x290f7d0()*0.0198335);
}

double NNfunction_NN_4_4::synapse0x2928db0() {
   return (neuron0x290fb10()*-0.0146382);
}

double NNfunction_NN_4_4::synapse0x2928df0() {
   return (neuron0x290fe50()*-0.0533965);
}

double NNfunction_NN_4_4::synapse0x2929170() {
   return (neuron0x290b290()*-0.170691);
}

double NNfunction_NN_4_4::synapse0x29291b0() {
   return (neuron0x290b5d0()*2.16817);
}

double NNfunction_NN_4_4::synapse0x29291f0() {
   return (neuron0x290b910()*-0.2653);
}

double NNfunction_NN_4_4::synapse0x2929230() {
   return (neuron0x290bc50()*0.0628965);
}

double NNfunction_NN_4_4::synapse0x2929270() {
   return (neuron0x290bf90()*0.0415595);
}

double NNfunction_NN_4_4::synapse0x29292b0() {
   return (neuron0x290c2d0()*0.00914471);
}

double NNfunction_NN_4_4::synapse0x29292f0() {
   return (neuron0x290c610()*0.00590378);
}

double NNfunction_NN_4_4::synapse0x2929330() {
   return (neuron0x290c950()*-0.08629);
}

double NNfunction_NN_4_4::synapse0x2929370() {
   return (neuron0x290cc90()*-0.0240098);
}

double NNfunction_NN_4_4::synapse0x29293b0() {
   return (neuron0x290cfd0()*-0.00616182);
}

double NNfunction_NN_4_4::synapse0x29293f0() {
   return (neuron0x290d310()*-0.258897);
}

double NNfunction_NN_4_4::synapse0x2929430() {
   return (neuron0x290d650()*0.859368);
}

double NNfunction_NN_4_4::synapse0x2929470() {
   return (neuron0x290d990()*0.110629);
}

double NNfunction_NN_4_4::synapse0x29294b0() {
   return (neuron0x290dcd0()*0.0292678);
}

double NNfunction_NN_4_4::synapse0x29294f0() {
   return (neuron0x290e010()*0.0652387);
}

double NNfunction_NN_4_4::synapse0x2929530() {
   return (neuron0x290e350()*0.015133);
}

double NNfunction_NN_4_4::synapse0x2928fc0() {
   return (neuron0x290e690()*-0.251207);
}

double NNfunction_NN_4_4::synapse0x2929000() {
   return (neuron0x290ebf0()*0.0893301);
}

double NNfunction_NN_4_4::synapse0x2929680() {
   return (neuron0x290ee10()*-0.117809);
}

double NNfunction_NN_4_4::synapse0x29296c0() {
   return (neuron0x290f150()*0.0954136);
}

double NNfunction_NN_4_4::synapse0x2929700() {
   return (neuron0x290f490()*0.0433972);
}

double NNfunction_NN_4_4::synapse0x2929740() {
   return (neuron0x290f7d0()*-0.0304283);
}

double NNfunction_NN_4_4::synapse0x2929780() {
   return (neuron0x290fb10()*-0.152953);
}

double NNfunction_NN_4_4::synapse0x29297c0() {
   return (neuron0x290fe50()*-0.828578);
}

double NNfunction_NN_4_4::synapse0x2929b40() {
   return (neuron0x290b290()*-0.00527541);
}

double NNfunction_NN_4_4::synapse0x2929b80() {
   return (neuron0x290b5d0()*2.74315);
}

double NNfunction_NN_4_4::synapse0x2929bc0() {
   return (neuron0x290b910()*-0.41398);
}

double NNfunction_NN_4_4::synapse0x2929c00() {
   return (neuron0x290bc50()*-0.0193152);
}

double NNfunction_NN_4_4::synapse0x2929c40() {
   return (neuron0x290bf90()*0.0202327);
}

double NNfunction_NN_4_4::synapse0x2929c80() {
   return (neuron0x290c2d0()*0.000489812);
}

double NNfunction_NN_4_4::synapse0x2929cc0() {
   return (neuron0x290c610()*0.00649699);
}

double NNfunction_NN_4_4::synapse0x2929d00() {
   return (neuron0x290c950()*0.00419891);
}

double NNfunction_NN_4_4::synapse0x2929d40() {
   return (neuron0x290cc90()*-0.00635381);
}

double NNfunction_NN_4_4::synapse0x2929d80() {
   return (neuron0x290cfd0()*-0.0155196);
}

double NNfunction_NN_4_4::synapse0x2929dc0() {
   return (neuron0x290d310()*-0.0170289);
}

double NNfunction_NN_4_4::synapse0x2929e00() {
   return (neuron0x290d650()*-0.0307816);
}

double NNfunction_NN_4_4::synapse0x2929e40() {
   return (neuron0x290d990()*0.0178183);
}

double NNfunction_NN_4_4::synapse0x2929e80() {
   return (neuron0x290dcd0()*0.0318937);
}

double NNfunction_NN_4_4::synapse0x2929ec0() {
   return (neuron0x290e010()*-0.0730048);
}

double NNfunction_NN_4_4::synapse0x2929f00() {
   return (neuron0x290e350()*0.0283014);
}

double NNfunction_NN_4_4::synapse0x2929990() {
   return (neuron0x290e690()*0.00799316);
}

double NNfunction_NN_4_4::synapse0x29299d0() {
   return (neuron0x290ebf0()*-0.0296353);
}

double NNfunction_NN_4_4::synapse0x292a050() {
   return (neuron0x290ee10()*0.0135016);
}

double NNfunction_NN_4_4::synapse0x292a090() {
   return (neuron0x290f150()*-0.02463);
}

double NNfunction_NN_4_4::synapse0x292a0d0() {
   return (neuron0x290f490()*0.0465601);
}

double NNfunction_NN_4_4::synapse0x292a110() {
   return (neuron0x290f7d0()*0.0045629);
}

double NNfunction_NN_4_4::synapse0x292a150() {
   return (neuron0x290fb10()*0.0133909);
}

double NNfunction_NN_4_4::synapse0x292a190() {
   return (neuron0x290fe50()*-1.92933);
}

double NNfunction_NN_4_4::synapse0x292a510() {
   return (neuron0x290b290()*0.408651);
}

double NNfunction_NN_4_4::synapse0x292a550() {
   return (neuron0x290b5d0()*-0.668184);
}

double NNfunction_NN_4_4::synapse0x292a590() {
   return (neuron0x290b910()*-0.24702);
}

double NNfunction_NN_4_4::synapse0x292a5d0() {
   return (neuron0x290bc50()*-0.0484283);
}

double NNfunction_NN_4_4::synapse0x292a610() {
   return (neuron0x290bf90()*0.138182);
}

double NNfunction_NN_4_4::synapse0x292a650() {
   return (neuron0x290c2d0()*0.101146);
}

double NNfunction_NN_4_4::synapse0x292a690() {
   return (neuron0x290c610()*-0.299592);
}

double NNfunction_NN_4_4::synapse0x292a6d0() {
   return (neuron0x290c950()*-0.148923);
}

double NNfunction_NN_4_4::synapse0x292a710() {
   return (neuron0x290cc90()*0.0501703);
}

double NNfunction_NN_4_4::synapse0x292a750() {
   return (neuron0x290cfd0()*0.335055);
}

double NNfunction_NN_4_4::synapse0x292a790() {
   return (neuron0x290d310()*0.031803);
}

double NNfunction_NN_4_4::synapse0x292a7d0() {
   return (neuron0x290d650()*1.04664);
}

double NNfunction_NN_4_4::synapse0x292a810() {
   return (neuron0x290d990()*0.303714);
}

double NNfunction_NN_4_4::synapse0x292a850() {
   return (neuron0x290dcd0()*0.198119);
}

double NNfunction_NN_4_4::synapse0x292a890() {
   return (neuron0x290e010()*0.785724);
}

double NNfunction_NN_4_4::synapse0x292a8d0() {
   return (neuron0x290e350()*-0.541071);
}

double NNfunction_NN_4_4::synapse0x292a360() {
   return (neuron0x290e690()*0.242133);
}

double NNfunction_NN_4_4::synapse0x292a3a0() {
   return (neuron0x290ebf0()*0.51811);
}

double NNfunction_NN_4_4::synapse0x292aa20() {
   return (neuron0x290ee10()*0.13357);
}

double NNfunction_NN_4_4::synapse0x292aa60() {
   return (neuron0x290f150()*0.0651183);
}

double NNfunction_NN_4_4::synapse0x292aaa0() {
   return (neuron0x290f490()*-0.19024);
}

double NNfunction_NN_4_4::synapse0x292aae0() {
   return (neuron0x290f7d0()*-0.371126);
}

double NNfunction_NN_4_4::synapse0x292ab20() {
   return (neuron0x290fb10()*0.173906);
}

double NNfunction_NN_4_4::synapse0x292ab60() {
   return (neuron0x290fe50()*0.0583972);
}

double NNfunction_NN_4_4::synapse0x292aee0() {
   return (neuron0x290b290()*0.185638);
}

double NNfunction_NN_4_4::synapse0x292af20() {
   return (neuron0x290b5d0()*-0.315611);
}

double NNfunction_NN_4_4::synapse0x292af60() {
   return (neuron0x290b910()*-0.705002);
}

double NNfunction_NN_4_4::synapse0x292afa0() {
   return (neuron0x290bc50()*0.0226539);
}

double NNfunction_NN_4_4::synapse0x292afe0() {
   return (neuron0x290bf90()*0.00257882);
}

double NNfunction_NN_4_4::synapse0x292b020() {
   return (neuron0x290c2d0()*0.248009);
}

double NNfunction_NN_4_4::synapse0x292b060() {
   return (neuron0x290c610()*-0.174542);
}

double NNfunction_NN_4_4::synapse0x292b0a0() {
   return (neuron0x290c950()*-0.0444436);
}

double NNfunction_NN_4_4::synapse0x292b0e0() {
   return (neuron0x290cc90()*0.556508);
}

double NNfunction_NN_4_4::synapse0x292b120() {
   return (neuron0x290cfd0()*-0.166719);
}

double NNfunction_NN_4_4::synapse0x292b160() {
   return (neuron0x290d310()*-0.586378);
}

double NNfunction_NN_4_4::synapse0x292b1a0() {
   return (neuron0x290d650()*0.990829);
}

double NNfunction_NN_4_4::synapse0x292b1e0() {
   return (neuron0x290d990()*0.0913712);
}

double NNfunction_NN_4_4::synapse0x292b220() {
   return (neuron0x290dcd0()*0.108065);
}

double NNfunction_NN_4_4::synapse0x292b260() {
   return (neuron0x290e010()*-0.517952);
}

double NNfunction_NN_4_4::synapse0x292b2a0() {
   return (neuron0x290e350()*-0.195051);
}

double NNfunction_NN_4_4::synapse0x292ad30() {
   return (neuron0x290e690()*0.249375);
}

double NNfunction_NN_4_4::synapse0x292ad70() {
   return (neuron0x290ebf0()*0.256934);
}

double NNfunction_NN_4_4::synapse0x292b3f0() {
   return (neuron0x290ee10()*-0.198529);
}

double NNfunction_NN_4_4::synapse0x292b430() {
   return (neuron0x290f150()*0.0576657);
}

double NNfunction_NN_4_4::synapse0x292b470() {
   return (neuron0x290f490()*0.00716982);
}

double NNfunction_NN_4_4::synapse0x292b4b0() {
   return (neuron0x290f7d0()*0.547126);
}

double NNfunction_NN_4_4::synapse0x292b4f0() {
   return (neuron0x290fb10()*0.359181);
}

double NNfunction_NN_4_4::synapse0x292b530() {
   return (neuron0x290fe50()*-0.880347);
}

double NNfunction_NN_4_4::synapse0x292b8b0() {
   return (neuron0x290b290()*0.0130369);
}

double NNfunction_NN_4_4::synapse0x292b8f0() {
   return (neuron0x290b5d0()*-0.771089);
}

double NNfunction_NN_4_4::synapse0x292b930() {
   return (neuron0x290b910()*0.534523);
}

double NNfunction_NN_4_4::synapse0x292b970() {
   return (neuron0x290bc50()*0.0288782);
}

double NNfunction_NN_4_4::synapse0x292b9b0() {
   return (neuron0x290bf90()*-0.00607128);
}

double NNfunction_NN_4_4::synapse0x292b9f0() {
   return (neuron0x290c2d0()*-0.0308182);
}

double NNfunction_NN_4_4::synapse0x292ba30() {
   return (neuron0x290c610()*-0.00688187);
}

double NNfunction_NN_4_4::synapse0x292ba70() {
   return (neuron0x290c950()*-0.00194571);
}

double NNfunction_NN_4_4::synapse0x292bab0() {
   return (neuron0x290cc90()*0.051144);
}

double NNfunction_NN_4_4::synapse0x292baf0() {
   return (neuron0x290cfd0()*0.00765795);
}

double NNfunction_NN_4_4::synapse0x292bb30() {
   return (neuron0x290d310()*0.0488869);
}

double NNfunction_NN_4_4::synapse0x292bb70() {
   return (neuron0x290d650()*0.112483);
}

double NNfunction_NN_4_4::synapse0x292bbb0() {
   return (neuron0x290d990()*0.0789522);
}

double NNfunction_NN_4_4::synapse0x292bbf0() {
   return (neuron0x290dcd0()*0.0644427);
}

double NNfunction_NN_4_4::synapse0x292bc30() {
   return (neuron0x290e010()*-0.448821);
}

double NNfunction_NN_4_4::synapse0x292bc70() {
   return (neuron0x290e350()*0.0208426);
}

double NNfunction_NN_4_4::synapse0x292b700() {
   return (neuron0x290e690()*-0.0153811);
}

double NNfunction_NN_4_4::synapse0x292b740() {
   return (neuron0x290ebf0()*-0.0151132);
}

double NNfunction_NN_4_4::synapse0x292bdc0() {
   return (neuron0x290ee10()*-0.0254115);
}

double NNfunction_NN_4_4::synapse0x292be00() {
   return (neuron0x290f150()*0.00746582);
}

double NNfunction_NN_4_4::synapse0x292be40() {
   return (neuron0x290f490()*0.040683);
}

double NNfunction_NN_4_4::synapse0x292be80() {
   return (neuron0x290f7d0()*-0.0311035);
}

double NNfunction_NN_4_4::synapse0x292bec0() {
   return (neuron0x290fb10()*0.014847);
}

double NNfunction_NN_4_4::synapse0x292bf00() {
   return (neuron0x290fe50()*0.816273);
}

double NNfunction_NN_4_4::synapse0x292c280() {
   return (neuron0x290b290()*-0.00495699);
}

double NNfunction_NN_4_4::synapse0x292c2c0() {
   return (neuron0x290b5d0()*5.495);
}

double NNfunction_NN_4_4::synapse0x292c300() {
   return (neuron0x290b910()*-3.43567);
}

double NNfunction_NN_4_4::synapse0x292c340() {
   return (neuron0x290bc50()*0.020879);
}

double NNfunction_NN_4_4::synapse0x292c380() {
   return (neuron0x290bf90()*-0.0263401);
}

double NNfunction_NN_4_4::synapse0x292c3c0() {
   return (neuron0x290c2d0()*-0.0478183);
}

double NNfunction_NN_4_4::synapse0x292c400() {
   return (neuron0x290c610()*-0.0189072);
}

double NNfunction_NN_4_4::synapse0x292c440() {
   return (neuron0x290c950()*-0.0125569);
}

double NNfunction_NN_4_4::synapse0x292c480() {
   return (neuron0x290cc90()*0.0334757);
}

double NNfunction_NN_4_4::synapse0x292c4c0() {
   return (neuron0x290cfd0()*0.0129806);
}

double NNfunction_NN_4_4::synapse0x292c500() {
   return (neuron0x290d310()*0.000205375);
}

double NNfunction_NN_4_4::synapse0x292c540() {
   return (neuron0x290d650()*0.338514);
}

double NNfunction_NN_4_4::synapse0x292c580() {
   return (neuron0x290d990()*0.0155392);
}

double NNfunction_NN_4_4::synapse0x292c5c0() {
   return (neuron0x290dcd0()*0.0119958);
}

double NNfunction_NN_4_4::synapse0x292c600() {
   return (neuron0x290e010()*-0.74919);
}

double NNfunction_NN_4_4::synapse0x292c640() {
   return (neuron0x290e350()*0.00807349);
}

double NNfunction_NN_4_4::synapse0x292c0d0() {
   return (neuron0x290e690()*-0.042664);
}

double NNfunction_NN_4_4::synapse0x292c110() {
   return (neuron0x290ebf0()*0.0405278);
}

double NNfunction_NN_4_4::synapse0x292c790() {
   return (neuron0x290ee10()*-0.00633796);
}

double NNfunction_NN_4_4::synapse0x292c7d0() {
   return (neuron0x290f150()*0.0151298);
}

double NNfunction_NN_4_4::synapse0x292c810() {
   return (neuron0x290f490()*-0.00515323);
}

double NNfunction_NN_4_4::synapse0x292c850() {
   return (neuron0x290f7d0()*0.0117406);
}

double NNfunction_NN_4_4::synapse0x292c890() {
   return (neuron0x290fb10()*-0.0322529);
}

double NNfunction_NN_4_4::synapse0x292c8d0() {
   return (neuron0x290fe50()*0.0656964);
}

double NNfunction_NN_4_4::synapse0x2915380() {
   return (neuron0x290b290()*-0.183164);
}

double NNfunction_NN_4_4::synapse0x29153c0() {
   return (neuron0x290b5d0()*0.468065);
}

double NNfunction_NN_4_4::synapse0x2915400() {
   return (neuron0x290b910()*2.11514);
}

double NNfunction_NN_4_4::synapse0x2915440() {
   return (neuron0x290bc50()*-0.0206303);
}

double NNfunction_NN_4_4::synapse0x2915480() {
   return (neuron0x290bf90()*0.0534506);
}

double NNfunction_NN_4_4::synapse0x29154c0() {
   return (neuron0x290c2d0()*0.0403506);
}

double NNfunction_NN_4_4::synapse0x2915500() {
   return (neuron0x290c610()*0.086716);
}

double NNfunction_NN_4_4::synapse0x2915540() {
   return (neuron0x290c950()*0.04773);
}

double NNfunction_NN_4_4::synapse0x292d060() {
   return (neuron0x290cc90()*0.0347295);
}

double NNfunction_NN_4_4::synapse0x292d0a0() {
   return (neuron0x290cfd0()*-0.0319334);
}

double NNfunction_NN_4_4::synapse0x292d0e0() {
   return (neuron0x290d310()*-0.0631634);
}

double NNfunction_NN_4_4::synapse0x292d120() {
   return (neuron0x290d650()*0.018642);
}

double NNfunction_NN_4_4::synapse0x292d160() {
   return (neuron0x290d990()*0.131678);
}

double NNfunction_NN_4_4::synapse0x292d1a0() {
   return (neuron0x290dcd0()*0.107263);
}

double NNfunction_NN_4_4::synapse0x292d1e0() {
   return (neuron0x290e010()*-0.118624);
}

double NNfunction_NN_4_4::synapse0x292d220() {
   return (neuron0x290e350()*0.160353);
}

double NNfunction_NN_4_4::synapse0x292caa0() {
   return (neuron0x290e690()*-0.0132199);
}

double NNfunction_NN_4_4::synapse0x292cae0() {
   return (neuron0x290ebf0()*0.0119211);
}

double NNfunction_NN_4_4::synapse0x292d370() {
   return (neuron0x290ee10()*-0.00794115);
}

double NNfunction_NN_4_4::synapse0x292d3b0() {
   return (neuron0x290f150()*-0.0121609);
}

double NNfunction_NN_4_4::synapse0x292d3f0() {
   return (neuron0x290f490()*0.0474694);
}

double NNfunction_NN_4_4::synapse0x292d430() {
   return (neuron0x290f7d0()*-0.0738733);
}

double NNfunction_NN_4_4::synapse0x292d470() {
   return (neuron0x290fb10()*0.000419701);
}

double NNfunction_NN_4_4::synapse0x292d4b0() {
   return (neuron0x290fe50()*0.944565);
}

double NNfunction_NN_4_4::synapse0x292d830() {
   return (neuron0x290b290()*-0.032697);
}

double NNfunction_NN_4_4::synapse0x292d870() {
   return (neuron0x290b5d0()*0.272297);
}

double NNfunction_NN_4_4::synapse0x292d8b0() {
   return (neuron0x290b910()*-1.09801);
}

double NNfunction_NN_4_4::synapse0x292d8f0() {
   return (neuron0x290bc50()*0.0188418);
}

double NNfunction_NN_4_4::synapse0x292d930() {
   return (neuron0x290bf90()*-0.0538941);
}

double NNfunction_NN_4_4::synapse0x292d970() {
   return (neuron0x290c2d0()*-0.00755831);
}

double NNfunction_NN_4_4::synapse0x292d9b0() {
   return (neuron0x290c610()*0.0095332);
}

double NNfunction_NN_4_4::synapse0x292d9f0() {
   return (neuron0x290c950()*0.0480521);
}

double NNfunction_NN_4_4::synapse0x292da30() {
   return (neuron0x290cc90()*-0.000159291);
}

double NNfunction_NN_4_4::synapse0x292da70() {
   return (neuron0x290cfd0()*-0.0400001);
}

double NNfunction_NN_4_4::synapse0x292dab0() {
   return (neuron0x290d310()*0.0140304);
}

double NNfunction_NN_4_4::synapse0x292daf0() {
   return (neuron0x290d650()*0.154122);
}

double NNfunction_NN_4_4::synapse0x292db30() {
   return (neuron0x290d990()*-0.0253406);
}

double NNfunction_NN_4_4::synapse0x292db70() {
   return (neuron0x290dcd0()*-0.0343392);
}

double NNfunction_NN_4_4::synapse0x292dbb0() {
   return (neuron0x290e010()*-0.363195);
}

double NNfunction_NN_4_4::synapse0x292dbf0() {
   return (neuron0x290e350()*-0.0863603);
}

double NNfunction_NN_4_4::synapse0x292d680() {
   return (neuron0x290e690()*-0.00414484);
}

double NNfunction_NN_4_4::synapse0x292d6c0() {
   return (neuron0x290ebf0()*0.0153084);
}

double NNfunction_NN_4_4::synapse0x292dd40() {
   return (neuron0x290ee10()*0.000599469);
}

double NNfunction_NN_4_4::synapse0x292dd80() {
   return (neuron0x290f150()*0.00341844);
}

double NNfunction_NN_4_4::synapse0x292ddc0() {
   return (neuron0x290f490()*-0.0163678);
}

double NNfunction_NN_4_4::synapse0x292de00() {
   return (neuron0x290f7d0()*0.0132502);
}

double NNfunction_NN_4_4::synapse0x292de40() {
   return (neuron0x290fb10()*0.0160775);
}

double NNfunction_NN_4_4::synapse0x292de80() {
   return (neuron0x290fe50()*1.59209);
}

double NNfunction_NN_4_4::synapse0x292e200() {
   return (neuron0x290b290()*0.0333);
}

double NNfunction_NN_4_4::synapse0x292e240() {
   return (neuron0x290b5d0()*-0.136498);
}

double NNfunction_NN_4_4::synapse0x292e280() {
   return (neuron0x290b910()*-0.940112);
}

double NNfunction_NN_4_4::synapse0x292e2c0() {
   return (neuron0x290bc50()*-0.00673112);
}

double NNfunction_NN_4_4::synapse0x292e300() {
   return (neuron0x290bf90()*0.000658664);
}

double NNfunction_NN_4_4::synapse0x292e340() {
   return (neuron0x290c2d0()*0.00738632);
}

double NNfunction_NN_4_4::synapse0x292e380() {
   return (neuron0x290c610()*-0.0189398);
}

double NNfunction_NN_4_4::synapse0x292e3c0() {
   return (neuron0x290c950()*-0.0121805);
}

double NNfunction_NN_4_4::synapse0x292e400() {
   return (neuron0x290cc90()*0.0154618);
}

double NNfunction_NN_4_4::synapse0x292e440() {
   return (neuron0x290cfd0()*0.00979064);
}

double NNfunction_NN_4_4::synapse0x292e480() {
   return (neuron0x290d310()*-0.016635);
}

double NNfunction_NN_4_4::synapse0x292e4c0() {
   return (neuron0x290d650()*-1.8702);
}

double NNfunction_NN_4_4::synapse0x292e500() {
   return (neuron0x290d990()*0.0127884);
}

double NNfunction_NN_4_4::synapse0x292e540() {
   return (neuron0x290dcd0()*0.0420619);
}

double NNfunction_NN_4_4::synapse0x292e580() {
   return (neuron0x290e010()*-0.0337463);
}

double NNfunction_NN_4_4::synapse0x292e5c0() {
   return (neuron0x290e350()*0.00356909);
}

double NNfunction_NN_4_4::synapse0x292e050() {
   return (neuron0x290e690()*0.0100426);
}

double NNfunction_NN_4_4::synapse0x292e090() {
   return (neuron0x290ebf0()*-0.0104355);
}

double NNfunction_NN_4_4::synapse0x291ebc0() {
   return (neuron0x290ee10()*-0.0293996);
}

double NNfunction_NN_4_4::synapse0x291ec00() {
   return (neuron0x290f150()*-0.00042313);
}

double NNfunction_NN_4_4::synapse0x291ec40() {
   return (neuron0x290f490()*-0.0200129);
}

double NNfunction_NN_4_4::synapse0x291ec80() {
   return (neuron0x290f7d0()*-0.0370675);
}

double NNfunction_NN_4_4::synapse0x291ecc0() {
   return (neuron0x290fb10()*0.0205581);
}

double NNfunction_NN_4_4::synapse0x291ed00() {
   return (neuron0x290fe50()*-0.117796);
}

double NNfunction_NN_4_4::synapse0x291f080() {
   return (neuron0x290b290()*-0.279173);
}

double NNfunction_NN_4_4::synapse0x291f0c0() {
   return (neuron0x290b5d0()*0.312513);
}

double NNfunction_NN_4_4::synapse0x291f100() {
   return (neuron0x290b910()*-0.392128);
}

double NNfunction_NN_4_4::synapse0x291f140() {
   return (neuron0x290bc50()*-0.0124904);
}

double NNfunction_NN_4_4::synapse0x291f180() {
   return (neuron0x290bf90()*-0.200469);
}

double NNfunction_NN_4_4::synapse0x291f1c0() {
   return (neuron0x290c2d0()*-0.064411);
}

double NNfunction_NN_4_4::synapse0x291f200() {
   return (neuron0x290c610()*0.0088444);
}

double NNfunction_NN_4_4::synapse0x291f240() {
   return (neuron0x290c950()*0.108232);
}

double NNfunction_NN_4_4::synapse0x291f280() {
   return (neuron0x290cc90()*0.0204306);
}

double NNfunction_NN_4_4::synapse0x291f2c0() {
   return (neuron0x290cfd0()*0.0286658);
}

double NNfunction_NN_4_4::synapse0x291f300() {
   return (neuron0x290d310()*0.120585);
}

double NNfunction_NN_4_4::synapse0x291f340() {
   return (neuron0x290d650()*-0.211342);
}

double NNfunction_NN_4_4::synapse0x291f380() {
   return (neuron0x290d990()*-0.166899);
}

double NNfunction_NN_4_4::synapse0x291f3c0() {
   return (neuron0x290dcd0()*-0.0811816);
}

double NNfunction_NN_4_4::synapse0x291f400() {
   return (neuron0x290e010()*0.323906);
}

double NNfunction_NN_4_4::synapse0x291f440() {
   return (neuron0x290e350()*0.225822);
}

double NNfunction_NN_4_4::synapse0x291eed0() {
   return (neuron0x290e690()*-0.0361597);
}

double NNfunction_NN_4_4::synapse0x291ef10() {
   return (neuron0x290ebf0()*0.239394);
}

double NNfunction_NN_4_4::synapse0x291f590() {
   return (neuron0x290ee10()*-0.199036);
}

double NNfunction_NN_4_4::synapse0x291f5d0() {
   return (neuron0x290f150()*0.0982659);
}

double NNfunction_NN_4_4::synapse0x291f610() {
   return (neuron0x290f490()*0.0118339);
}

double NNfunction_NN_4_4::synapse0x291f650() {
   return (neuron0x290f7d0()*0.167158);
}

double NNfunction_NN_4_4::synapse0x291f690() {
   return (neuron0x290fb10()*0.00745369);
}

double NNfunction_NN_4_4::synapse0x291f6d0() {
   return (neuron0x290fe50()*-0.013483);
}

double NNfunction_NN_4_4::synapse0x291fa50() {
   return (neuron0x290b290()*-0.187185);
}

double NNfunction_NN_4_4::synapse0x291fa90() {
   return (neuron0x290b5d0()*-1.68396);
}

double NNfunction_NN_4_4::synapse0x291fad0() {
   return (neuron0x290b910()*2.11032);
}

double NNfunction_NN_4_4::synapse0x291fb10() {
   return (neuron0x290bc50()*-0.00557411);
}

double NNfunction_NN_4_4::synapse0x291fb50() {
   return (neuron0x290bf90()*0.011019);
}

double NNfunction_NN_4_4::synapse0x291fb90() {
   return (neuron0x290c2d0()*0.0519596);
}

double NNfunction_NN_4_4::synapse0x291fbd0() {
   return (neuron0x290c610()*-0.00453388);
}

double NNfunction_NN_4_4::synapse0x291fc10() {
   return (neuron0x290c950()*-0.0157546);
}

double NNfunction_NN_4_4::synapse0x291fc50() {
   return (neuron0x290cc90()*-0.0377459);
}

double NNfunction_NN_4_4::synapse0x291fc90() {
   return (neuron0x290cfd0()*-0.0411419);
}

double NNfunction_NN_4_4::synapse0x291fcd0() {
   return (neuron0x290d310()*-0.00890865);
}

double NNfunction_NN_4_4::synapse0x291fd10() {
   return (neuron0x290d650()*0.0667754);
}

double NNfunction_NN_4_4::synapse0x291fd50() {
   return (neuron0x290d990()*0.00451141);
}

double NNfunction_NN_4_4::synapse0x291fd90() {
   return (neuron0x290dcd0()*-0.00337481);
}

double NNfunction_NN_4_4::synapse0x291fdd0() {
   return (neuron0x290e010()*-0.624426);
}

double NNfunction_NN_4_4::synapse0x291fe10() {
   return (neuron0x290e350()*-0.00406146);
}

double NNfunction_NN_4_4::synapse0x291f8a0() {
   return (neuron0x290e690()*-0.0460344);
}

double NNfunction_NN_4_4::synapse0x291f8e0() {
   return (neuron0x290ebf0()*-0.0145423);
}

double NNfunction_NN_4_4::synapse0x291ff60() {
   return (neuron0x290ee10()*0.0197551);
}

double NNfunction_NN_4_4::synapse0x291ffa0() {
   return (neuron0x290f150()*0.0429958);
}

double NNfunction_NN_4_4::synapse0x291ffe0() {
   return (neuron0x290f490()*0.00704993);
}

double NNfunction_NN_4_4::synapse0x2920020() {
   return (neuron0x290f7d0()*0.0886943);
}

double NNfunction_NN_4_4::synapse0x2920060() {
   return (neuron0x290fb10()*0.0107104);
}

double NNfunction_NN_4_4::synapse0x29200a0() {
   return (neuron0x290fe50()*0.688803);
}

double NNfunction_NN_4_4::synapse0x2920420() {
   return (neuron0x290b290()*0.125253);
}

double NNfunction_NN_4_4::synapse0x2920460() {
   return (neuron0x290b5d0()*0.622733);
}

double NNfunction_NN_4_4::synapse0x29204a0() {
   return (neuron0x290b910()*-1.59617);
}

double NNfunction_NN_4_4::synapse0x29204e0() {
   return (neuron0x290bc50()*0.0232963);
}

double NNfunction_NN_4_4::synapse0x2920520() {
   return (neuron0x290bf90()*-0.0121978);
}

double NNfunction_NN_4_4::synapse0x2920560() {
   return (neuron0x290c2d0()*-0.0091805);
}

double NNfunction_NN_4_4::synapse0x29205a0() {
   return (neuron0x290c610()*0.0111279);
}

double NNfunction_NN_4_4::synapse0x29205e0() {
   return (neuron0x290c950()*0.046029);
}

double NNfunction_NN_4_4::synapse0x2920620() {
   return (neuron0x290cc90()*0.0077515);
}

double NNfunction_NN_4_4::synapse0x2920660() {
   return (neuron0x290cfd0()*0.0320327);
}

double NNfunction_NN_4_4::synapse0x29206a0() {
   return (neuron0x290d310()*-0.00671476);
}

double NNfunction_NN_4_4::synapse0x29206e0() {
   return (neuron0x290d650()*1.46091);
}

double NNfunction_NN_4_4::synapse0x2920720() {
   return (neuron0x290d990()*-0.429267);
}

double NNfunction_NN_4_4::synapse0x2920760() {
   return (neuron0x290dcd0()*0.0533591);
}

double NNfunction_NN_4_4::synapse0x29207a0() {
   return (neuron0x290e010()*-0.140829);
}

double NNfunction_NN_4_4::synapse0x29207e0() {
   return (neuron0x290e350()*0.0203384);
}

double NNfunction_NN_4_4::synapse0x2920270() {
   return (neuron0x290e690()*0.0059231);
}

double NNfunction_NN_4_4::synapse0x29202b0() {
   return (neuron0x290ebf0()*-0.0126175);
}

double NNfunction_NN_4_4::synapse0x2920930() {
   return (neuron0x290ee10()*-0.00648193);
}

double NNfunction_NN_4_4::synapse0x2920970() {
   return (neuron0x290f150()*-0.0298951);
}

double NNfunction_NN_4_4::synapse0x29209b0() {
   return (neuron0x290f490()*0.00262171);
}

double NNfunction_NN_4_4::synapse0x29209f0() {
   return (neuron0x290f7d0()*-0.0186567);
}

double NNfunction_NN_4_4::synapse0x2920a30() {
   return (neuron0x290fb10()*0.0385661);
}

double NNfunction_NN_4_4::synapse0x2920a70() {
   return (neuron0x290fe50()*0.0408734);
}

double NNfunction_NN_4_4::synapse0x2932940() {
   return (neuron0x290b290()*0.182424);
}

double NNfunction_NN_4_4::synapse0x2932980() {
   return (neuron0x290b5d0()*-1.11921);
}

double NNfunction_NN_4_4::synapse0x29329c0() {
   return (neuron0x290b910()*-1.96448);
}

double NNfunction_NN_4_4::synapse0x2932a00() {
   return (neuron0x290bc50()*0.0480759);
}

double NNfunction_NN_4_4::synapse0x2932a40() {
   return (neuron0x290bf90()*-0.0310104);
}

double NNfunction_NN_4_4::synapse0x2932a80() {
   return (neuron0x290c2d0()*-0.00337459);
}

double NNfunction_NN_4_4::synapse0x2932ac0() {
   return (neuron0x290c610()*-0.0404374);
}

double NNfunction_NN_4_4::synapse0x2932b00() {
   return (neuron0x290c950()*-0.0015166);
}

double NNfunction_NN_4_4::synapse0x2932b40() {
   return (neuron0x290cc90()*0.0410744);
}

double NNfunction_NN_4_4::synapse0x2932b80() {
   return (neuron0x290cfd0()*0.0327649);
}

double NNfunction_NN_4_4::synapse0x2932bc0() {
   return (neuron0x290d310()*0.022352);
}

double NNfunction_NN_4_4::synapse0x2932c00() {
   return (neuron0x290d650()*2.10813);
}

double NNfunction_NN_4_4::synapse0x2932c40() {
   return (neuron0x290d990()*-0.0969448);
}

double NNfunction_NN_4_4::synapse0x2932c80() {
   return (neuron0x290dcd0()*0.0292926);
}

double NNfunction_NN_4_4::synapse0x2932cc0() {
   return (neuron0x290e010()*-0.155904);
}

double NNfunction_NN_4_4::synapse0x2932d00() {
   return (neuron0x290e350()*-0.0595257);
}

double NNfunction_NN_4_4::synapse0x2920ab0() {
   return (neuron0x290e690()*0.016782);
}

double NNfunction_NN_4_4::synapse0x2920af0() {
   return (neuron0x290ebf0()*0.0335827);
}

double NNfunction_NN_4_4::synapse0x2932e50() {
   return (neuron0x290ee10()*0.0389502);
}

double NNfunction_NN_4_4::synapse0x2932e90() {
   return (neuron0x290f150()*-0.0373106);
}

double NNfunction_NN_4_4::synapse0x2932ed0() {
   return (neuron0x290f490()*0.00797005);
}

double NNfunction_NN_4_4::synapse0x2932f10() {
   return (neuron0x290f7d0()*0.0182017);
}

double NNfunction_NN_4_4::synapse0x2932f50() {
   return (neuron0x290fb10()*0.0629127);
}

double NNfunction_NN_4_4::synapse0x2932f90() {
   return (neuron0x290fe50()*-0.174729);
}

double NNfunction_NN_4_4::synapse0x2933310() {
   return (neuron0x290b290()*-0.0107634);
}

double NNfunction_NN_4_4::synapse0x2933350() {
   return (neuron0x290b5d0()*1.31686);
}

double NNfunction_NN_4_4::synapse0x2933390() {
   return (neuron0x290b910()*-0.390348);
}

double NNfunction_NN_4_4::synapse0x29333d0() {
   return (neuron0x290bc50()*-0.00808319);
}

double NNfunction_NN_4_4::synapse0x2933410() {
   return (neuron0x290bf90()*0.0197101);
}

double NNfunction_NN_4_4::synapse0x2933450() {
   return (neuron0x290c2d0()*-0.0135176);
}

double NNfunction_NN_4_4::synapse0x2933490() {
   return (neuron0x290c610()*-0.0123719);
}

double NNfunction_NN_4_4::synapse0x29334d0() {
   return (neuron0x290c950()*-3.97837e-05);
}

double NNfunction_NN_4_4::synapse0x2933510() {
   return (neuron0x290cc90()*0.0304196);
}

double NNfunction_NN_4_4::synapse0x2933550() {
   return (neuron0x290cfd0()*-0.0280737);
}

double NNfunction_NN_4_4::synapse0x2933590() {
   return (neuron0x290d310()*-0.0201701);
}

double NNfunction_NN_4_4::synapse0x29335d0() {
   return (neuron0x290d650()*-0.155119);
}

double NNfunction_NN_4_4::synapse0x2933610() {
   return (neuron0x290d990()*-0.0519091);
}

double NNfunction_NN_4_4::synapse0x2933650() {
   return (neuron0x290dcd0()*-0.0331091);
}

double NNfunction_NN_4_4::synapse0x2933690() {
   return (neuron0x290e010()*0.523646);
}

double NNfunction_NN_4_4::synapse0x29336d0() {
   return (neuron0x290e350()*0.017176);
}

double NNfunction_NN_4_4::synapse0x2933160() {
   return (neuron0x290e690()*-0.0135364);
}

double NNfunction_NN_4_4::synapse0x29331a0() {
   return (neuron0x290ebf0()*0.0236861);
}

double NNfunction_NN_4_4::synapse0x2933820() {
   return (neuron0x290ee10()*0.0464889);
}

double NNfunction_NN_4_4::synapse0x2933860() {
   return (neuron0x290f150()*-0.0168025);
}

double NNfunction_NN_4_4::synapse0x29338a0() {
   return (neuron0x290f490()*0.0120873);
}

double NNfunction_NN_4_4::synapse0x29338e0() {
   return (neuron0x290f7d0()*0.0363659);
}

double NNfunction_NN_4_4::synapse0x2933920() {
   return (neuron0x290fb10()*0.00196753);
}

double NNfunction_NN_4_4::synapse0x2933960() {
   return (neuron0x290fe50()*-0.258375);
}

double NNfunction_NN_4_4::synapse0x2933ce0() {
   return (neuron0x290b290()*0.0653002);
}

double NNfunction_NN_4_4::synapse0x2933d20() {
   return (neuron0x290b5d0()*-0.053686);
}

double NNfunction_NN_4_4::synapse0x2933d60() {
   return (neuron0x290b910()*-0.707984);
}

double NNfunction_NN_4_4::synapse0x2933da0() {
   return (neuron0x290bc50()*0.271213);
}

double NNfunction_NN_4_4::synapse0x2933de0() {
   return (neuron0x290bf90()*0.0317005);
}

double NNfunction_NN_4_4::synapse0x2933e20() {
   return (neuron0x290c2d0()*0.105223);
}

double NNfunction_NN_4_4::synapse0x2933e60() {
   return (neuron0x290c610()*0.0613367);
}

double NNfunction_NN_4_4::synapse0x2933ea0() {
   return (neuron0x290c950()*-0.0478815);
}

double NNfunction_NN_4_4::synapse0x2933ee0() {
   return (neuron0x290cc90()*0.0148808);
}

double NNfunction_NN_4_4::synapse0x2933f20() {
   return (neuron0x290cfd0()*-0.0154913);
}

double NNfunction_NN_4_4::synapse0x2933f60() {
   return (neuron0x290d310()*0.0152683);
}

double NNfunction_NN_4_4::synapse0x2933fa0() {
   return (neuron0x290d650()*-0.0308989);
}

double NNfunction_NN_4_4::synapse0x2933fe0() {
   return (neuron0x290d990()*0.0954702);
}

double NNfunction_NN_4_4::synapse0x2934020() {
   return (neuron0x290dcd0()*0.0778573);
}

double NNfunction_NN_4_4::synapse0x2934060() {
   return (neuron0x290e010()*-0.613556);
}

double NNfunction_NN_4_4::synapse0x29340a0() {
   return (neuron0x290e350()*0.306089);
}

double NNfunction_NN_4_4::synapse0x2933b30() {
   return (neuron0x290e690()*-0.0387556);
}

double NNfunction_NN_4_4::synapse0x2933b70() {
   return (neuron0x290ebf0()*0.0727974);
}

double NNfunction_NN_4_4::synapse0x29341f0() {
   return (neuron0x290ee10()*0.170386);
}

double NNfunction_NN_4_4::synapse0x2934230() {
   return (neuron0x290f150()*-0.0991784);
}

double NNfunction_NN_4_4::synapse0x2934270() {
   return (neuron0x290f490()*0.101011);
}

double NNfunction_NN_4_4::synapse0x29342b0() {
   return (neuron0x290f7d0()*-0.048944);
}

double NNfunction_NN_4_4::synapse0x29342f0() {
   return (neuron0x290fb10()*0.00122999);
}

double NNfunction_NN_4_4::synapse0x2934330() {
   return (neuron0x290fe50()*-0.693779);
}

double NNfunction_NN_4_4::synapse0x29346b0() {
   return (neuron0x290b290()*-0.120149);
}

double NNfunction_NN_4_4::synapse0x29346f0() {
   return (neuron0x290b5d0()*2.76273);
}

double NNfunction_NN_4_4::synapse0x2934730() {
   return (neuron0x290b910()*0.576185);
}

double NNfunction_NN_4_4::synapse0x2934770() {
   return (neuron0x290bc50()*-0.106864);
}

double NNfunction_NN_4_4::synapse0x29347b0() {
   return (neuron0x290bf90()*-0.051041);
}

double NNfunction_NN_4_4::synapse0x29347f0() {
   return (neuron0x290c2d0()*0.166941);
}

double NNfunction_NN_4_4::synapse0x2934830() {
   return (neuron0x290c610()*0.00125676);
}

double NNfunction_NN_4_4::synapse0x2934870() {
   return (neuron0x290c950()*-0.129105);
}

double NNfunction_NN_4_4::synapse0x29348b0() {
   return (neuron0x290cc90()*-0.213891);
}

double NNfunction_NN_4_4::synapse0x29348f0() {
   return (neuron0x290cfd0()*0.155195);
}

double NNfunction_NN_4_4::synapse0x2934930() {
   return (neuron0x290d310()*-0.231364);
}

double NNfunction_NN_4_4::synapse0x2934970() {
   return (neuron0x290d650()*-0.0746249);
}

double NNfunction_NN_4_4::synapse0x29349b0() {
   return (neuron0x290d990()*0.0141871);
}

double NNfunction_NN_4_4::synapse0x29349f0() {
   return (neuron0x290dcd0()*-0.0549207);
}

double NNfunction_NN_4_4::synapse0x2934a30() {
   return (neuron0x290e010()*1.59727);
}

double NNfunction_NN_4_4::synapse0x2934a70() {
   return (neuron0x290e350()*0.065374);
}

double NNfunction_NN_4_4::synapse0x2934500() {
   return (neuron0x290e690()*-0.129468);
}

double NNfunction_NN_4_4::synapse0x2934540() {
   return (neuron0x290ebf0()*-0.0773254);
}

double NNfunction_NN_4_4::synapse0x2934bc0() {
   return (neuron0x290ee10()*-0.0562572);
}

double NNfunction_NN_4_4::synapse0x2934c00() {
   return (neuron0x290f150()*0.0278612);
}

double NNfunction_NN_4_4::synapse0x2934c40() {
   return (neuron0x290f490()*-0.191997);
}

double NNfunction_NN_4_4::synapse0x2934c80() {
   return (neuron0x290f7d0()*-0.144365);
}

double NNfunction_NN_4_4::synapse0x2934cc0() {
   return (neuron0x290fb10()*-0.0290145);
}

double NNfunction_NN_4_4::synapse0x2934d00() {
   return (neuron0x290fe50()*-0.832443);
}

double NNfunction_NN_4_4::synapse0x29112a0() {
   return (neuron0x29102f0()*-0.27202);
}

double NNfunction_NN_4_4::synapse0x29112e0() {
   return (neuron0x2910c00()*-0.537774);
}

double NNfunction_NN_4_4::synapse0x29127b0() {
   return (neuron0x29116e0()*0.0899404);
}

double NNfunction_NN_4_4::synapse0x29127f0() {
   return (neuron0x26caf70()*-0.117957);
}

double NNfunction_NN_4_4::synapse0x2913180() {
   return (neuron0x2912500()*0.522631);
}

double NNfunction_NN_4_4::synapse0x29131c0() {
   return (neuron0x2912ed0()*0.454631);
}

double NNfunction_NN_4_4::synapse0x2913f50() {
   return (neuron0x2913ca0()*0.292747);
}

double NNfunction_NN_4_4::synapse0x2913f90() {
   return (neuron0x2914670()*0.956898);
}

double NNfunction_NN_4_4::synapse0x2914920() {
   return (neuron0x2915040()*-0.220847);
}

double NNfunction_NN_4_4::synapse0x2914960() {
   return (neuron0x2915b20()*0.083381);
}

double NNfunction_NN_4_4::synapse0x29152f0() {
   return (neuron0x29164f0()*0.609882);
}

double NNfunction_NN_4_4::synapse0x2915330() {
   return (neuron0x29135d0()*0.375115);
}

double NNfunction_NN_4_4::synapse0x2915dd0() {
   return (neuron0x29180a0()*-0.051665);
}

double NNfunction_NN_4_4::synapse0x2915e10() {
   return (neuron0x2918a70()*-0.574409);
}

double NNfunction_NN_4_4::synapse0x29167a0() {
   return (neuron0x2919440()*0.982445);
}

double NNfunction_NN_4_4::synapse0x29167e0() {
   return (neuron0x2919e10()*-0.103642);
}

double NNfunction_NN_4_4::synapse0x2913880() {
   return (neuron0x291bc20()*-0.443514);
}

double NNfunction_NN_4_4::synapse0x29138c0() {
   return (neuron0x291bf00()*0.798185);
}

double NNfunction_NN_4_4::synapse0x2918350() {
   return (neuron0x291c8d0()*0.217522);
}

double NNfunction_NN_4_4::synapse0x2918390() {
   return (neuron0x291d2a0()*0.300782);
}

double NNfunction_NN_4_4::synapse0x2918d20() {
   return (neuron0x291dc70()*0.161757);
}

double NNfunction_NN_4_4::synapse0x2918d60() {
   return (neuron0x291e640()*0.734101);
}

double NNfunction_NN_4_4::synapse0x29196f0() {
   return (neuron0x2917190()*0.513927);
}

double NNfunction_NN_4_4::synapse0x2919730() {
   return (neuron0x2917b60()*0.0315068);
}

double NNfunction_NN_4_4::synapse0x291a0c0() {
   return (neuron0x29213d0()*-0.165455);
}

double NNfunction_NN_4_4::synapse0x291a100() {
   return (neuron0x2921da0()*0.461659);
}

double NNfunction_NN_4_4::synapse0x290e230() {
   return (neuron0x2922770()*0.0214388);
}

double NNfunction_NN_4_4::synapse0x290e270() {
   return (neuron0x2923140()*-0.355366);
}

double NNfunction_NN_4_4::synapse0x291c1b0() {
   return (neuron0x2923b10()*0.889179);
}

double NNfunction_NN_4_4::synapse0x291c1f0() {
   return (neuron0x29244e0()*0.508191);
}

double NNfunction_NN_4_4::synapse0x291cb80() {
   return (neuron0x2924eb0()*-1.17068);
}

double NNfunction_NN_4_4::synapse0x291cbc0() {
   return (neuron0x2925880()*-0.0351113);
}

double NNfunction_NN_4_4::synapse0x291d550() {
   return (neuron0x291b910()*-0.131165);
}

double NNfunction_NN_4_4::synapse0x291d590() {
   return (neuron0x2928460()*0.291621);
}

double NNfunction_NN_4_4::synapse0x291df20() {
   return (neuron0x2928e30()*-0.251701);
}

double NNfunction_NN_4_4::synapse0x291df60() {
   return (neuron0x2929800()*0.369082);
}

double NNfunction_NN_4_4::synapse0x291e8f0() {
   return (neuron0x292a1d0()*0.515847);
}

double NNfunction_NN_4_4::synapse0x291e930() {
   return (neuron0x292aba0()*0.260406);
}

double NNfunction_NN_4_4::synapse0x2917440() {
   return (neuron0x292b570()*0.149416);
}

double NNfunction_NN_4_4::synapse0x2917480() {
   return (neuron0x292bf40()*0.774144);
}

double NNfunction_NN_4_4::synapse0x2920cf0() {
   return (neuron0x292c910()*0.481026);
}

double NNfunction_NN_4_4::synapse0x2920d30() {
   return (neuron0x292d4f0()*0.620936);
}

double NNfunction_NN_4_4::synapse0x2921680() {
   return (neuron0x292dec0()*-0.761048);
}

double NNfunction_NN_4_4::synapse0x29216c0() {
   return (neuron0x291ed40()*0.190637);
}

double NNfunction_NN_4_4::synapse0x2922050() {
   return (neuron0x291f710()*0.81991);
}

double NNfunction_NN_4_4::synapse0x2922090() {
   return (neuron0x29200e0()*0.37394);
}

double NNfunction_NN_4_4::synapse0x2922a20() {
   return (neuron0x2932720()*-0.20434);
}

double NNfunction_NN_4_4::synapse0x2922a60() {
   return (neuron0x2932fd0()*-0.213557);
}

double NNfunction_NN_4_4::synapse0x29233f0() {
   return (neuron0x29339a0()*0.825514);
}

double NNfunction_NN_4_4::synapse0x2923430() {
   return (neuron0x2934370()*-0.516059);
}

double NNfunction_NN_4_4::synapse0x2925b30() {
   return (neuron0x29102f0()*0.867407);
}

double NNfunction_NN_4_4::synapse0x2925b70() {
   return (neuron0x2910c00()*-0.460284);
}

double NNfunction_NN_4_4::synapse0x291b0f0() {
   return (neuron0x29116e0()*-0.420201);
}

double NNfunction_NN_4_4::synapse0x291b130() {
   return (neuron0x26caf70()*0.0169673);
}

double NNfunction_NN_4_4::synapse0x2928710() {
   return (neuron0x2912500()*0.841841);
}

double NNfunction_NN_4_4::synapse0x2928750() {
   return (neuron0x2912ed0()*-0.954322);
}

double NNfunction_NN_4_4::synapse0x29290e0() {
   return (neuron0x2913ca0()*-3.0266);
}

double NNfunction_NN_4_4::synapse0x2929120() {
   return (neuron0x2914670()*1.66686);
}

double NNfunction_NN_4_4::synapse0x2929ab0() {
   return (neuron0x2915040()*0.509526);
}

double NNfunction_NN_4_4::synapse0x2929af0() {
   return (neuron0x2915b20()*3.0506);
}

double NNfunction_NN_4_4::synapse0x292a480() {
   return (neuron0x29164f0()*-2.93993);
}

double NNfunction_NN_4_4::synapse0x292a4c0() {
   return (neuron0x29135d0()*-1.84719);
}

double NNfunction_NN_4_4::synapse0x292ae50() {
   return (neuron0x29180a0()*-1.11161);
}

double NNfunction_NN_4_4::synapse0x292ae90() {
   return (neuron0x2918a70()*0.551392);
}

double NNfunction_NN_4_4::synapse0x292b820() {
   return (neuron0x2919440()*-1.13081);
}

double NNfunction_NN_4_4::synapse0x292b860() {
   return (neuron0x2919e10()*-0.00994869);
}

double NNfunction_NN_4_4::synapse0x292c1f0() {
   return (neuron0x291bc20()*0.446355);
}

double NNfunction_NN_4_4::synapse0x292c230() {
   return (neuron0x291bf00()*2.49332);
}

double NNfunction_NN_4_4::synapse0x292cbc0() {
   return (neuron0x291c8d0()*-0.708458);
}

double NNfunction_NN_4_4::synapse0x292cc00() {
   return (neuron0x291d2a0()*-2.10678);
}

double NNfunction_NN_4_4::synapse0x292d7a0() {
   return (neuron0x291dc70()*3.31317);
}

double NNfunction_NN_4_4::synapse0x292d7e0() {
   return (neuron0x291e640()*-1.85121);
}

double NNfunction_NN_4_4::synapse0x292e170() {
   return (neuron0x2917190()*1.99166);
}

double NNfunction_NN_4_4::synapse0x292e1b0() {
   return (neuron0x2917b60()*0.732427);
}

double NNfunction_NN_4_4::synapse0x291eff0() {
   return (neuron0x29213d0()*-0.454231);
}

double NNfunction_NN_4_4::synapse0x291f030() {
   return (neuron0x2921da0()*0.412416);
}

double NNfunction_NN_4_4::synapse0x291f9c0() {
   return (neuron0x2922770()*0.517429);
}

double NNfunction_NN_4_4::synapse0x291fa00() {
   return (neuron0x2923140()*0.690621);
}

double NNfunction_NN_4_4::synapse0x2920390() {
   return (neuron0x2923b10()*-0.434757);
}

double NNfunction_NN_4_4::synapse0x29203d0() {
   return (neuron0x29244e0()*-0.0553087);
}

double NNfunction_NN_4_4::synapse0x29328b0() {
   return (neuron0x2924eb0()*0.0563918);
}

double NNfunction_NN_4_4::synapse0x29328f0() {
   return (neuron0x2925880()*-0.203226);
}

double NNfunction_NN_4_4::synapse0x2933280() {
   return (neuron0x291b910()*-1.18126);
}

double NNfunction_NN_4_4::synapse0x29332c0() {
   return (neuron0x2928460()*-1.03732);
}

double NNfunction_NN_4_4::synapse0x2933c50() {
   return (neuron0x2928e30()*0.773273);
}

double NNfunction_NN_4_4::synapse0x2933c90() {
   return (neuron0x2929800()*3.76789);
}

double NNfunction_NN_4_4::synapse0x2934620() {
   return (neuron0x292a1d0()*0.308265);
}

double NNfunction_NN_4_4::synapse0x2934660() {
   return (neuron0x292aba0()*0.309933);
}

double NNfunction_NN_4_4::synapse0x2910510() {
   return (neuron0x292b570()*-2.00701);
}

double NNfunction_NN_4_4::synapse0x2910550() {
   return (neuron0x292bf40()*-1.20285);
}

double NNfunction_NN_4_4::synapse0x2923dc0() {
   return (neuron0x292c910()*-2.29075);
}

double NNfunction_NN_4_4::synapse0x2923e00() {
   return (neuron0x292d4f0()*-0.575524);
}

double NNfunction_NN_4_4::synapse0x2934d40() {
   return (neuron0x292dec0()*0.029869);
}

double NNfunction_NN_4_4::synapse0x2934d80() {
   return (neuron0x291ed40()*1.00134);
}

double NNfunction_NN_4_4::synapse0x2934dc0() {
   return (neuron0x291f710()*-2.59518);
}

double NNfunction_NN_4_4::synapse0x2934e00() {
   return (neuron0x29200e0()*0.618877);
}

double NNfunction_NN_4_4::synapse0x293bcb0() {
   return (neuron0x2932720()*-1.6056);
}

double NNfunction_NN_4_4::synapse0x293bcf0() {
   return (neuron0x2932fd0()*-0.947498);
}

double NNfunction_NN_4_4::synapse0x293bd30() {
   return (neuron0x29339a0()*0.343687);
}

double NNfunction_NN_4_4::synapse0x293bd70() {
   return (neuron0x2934370()*-1.16501);
}

double NNfunction_NN_4_4::synapse0x293c0f0() {
   return (neuron0x29102f0()*1.51292);
}

double NNfunction_NN_4_4::synapse0x293c130() {
   return (neuron0x2910c00()*0.120037);
}

double NNfunction_NN_4_4::synapse0x293c170() {
   return (neuron0x29116e0()*-0.123548);
}

double NNfunction_NN_4_4::synapse0x293c1b0() {
   return (neuron0x26caf70()*3.17931);
}

double NNfunction_NN_4_4::synapse0x293c1f0() {
   return (neuron0x2912500()*-1.44018);
}

double NNfunction_NN_4_4::synapse0x293c230() {
   return (neuron0x2912ed0()*1.42979);
}

double NNfunction_NN_4_4::synapse0x293c270() {
   return (neuron0x2913ca0()*2.2426);
}

double NNfunction_NN_4_4::synapse0x293c2b0() {
   return (neuron0x2914670()*-0.458892);
}

double NNfunction_NN_4_4::synapse0x293c2f0() {
   return (neuron0x2915040()*-0.0639283);
}

double NNfunction_NN_4_4::synapse0x293c330() {
   return (neuron0x2915b20()*-0.593664);
}

double NNfunction_NN_4_4::synapse0x293c370() {
   return (neuron0x29164f0()*2.05672);
}

double NNfunction_NN_4_4::synapse0x293c3b0() {
   return (neuron0x29135d0()*2.34355);
}

double NNfunction_NN_4_4::synapse0x293c3f0() {
   return (neuron0x29180a0()*0.0465613);
}

double NNfunction_NN_4_4::synapse0x293c430() {
   return (neuron0x2918a70()*-1.16205);
}

double NNfunction_NN_4_4::synapse0x293c470() {
   return (neuron0x2919440()*0.160498);
}

double NNfunction_NN_4_4::synapse0x293c4b0() {
   return (neuron0x2919e10()*-0.142209);
}

double NNfunction_NN_4_4::synapse0x293bf40() {
   return (neuron0x291bc20()*-1.68271);
}

double NNfunction_NN_4_4::synapse0x293bf80() {
   return (neuron0x291bf00()*1.20437);
}

double NNfunction_NN_4_4::synapse0x293c600() {
   return (neuron0x291c8d0()*0.186647);
}

double NNfunction_NN_4_4::synapse0x293c640() {
   return (neuron0x291d2a0()*-0.177063);
}

double NNfunction_NN_4_4::synapse0x293c680() {
   return (neuron0x291dc70()*-0.257115);
}

double NNfunction_NN_4_4::synapse0x293c6c0() {
   return (neuron0x291e640()*0.29171);
}

double NNfunction_NN_4_4::synapse0x293c700() {
   return (neuron0x2917190()*-2.06677);
}

double NNfunction_NN_4_4::synapse0x293c740() {
   return (neuron0x2917b60()*-0.125117);
}

double NNfunction_NN_4_4::synapse0x293c780() {
   return (neuron0x29213d0()*1.01801);
}

double NNfunction_NN_4_4::synapse0x293c7c0() {
   return (neuron0x2921da0()*-0.0841292);
}

double NNfunction_NN_4_4::synapse0x293c800() {
   return (neuron0x2922770()*-0.174417);
}

double NNfunction_NN_4_4::synapse0x293c840() {
   return (neuron0x2923140()*-0.580264);
}

double NNfunction_NN_4_4::synapse0x293c880() {
   return (neuron0x2923b10()*0.260982);
}

double NNfunction_NN_4_4::synapse0x293c8c0() {
   return (neuron0x29244e0()*0.889599);
}

double NNfunction_NN_4_4::synapse0x293c900() {
   return (neuron0x2924eb0()*-2.72951);
}

double NNfunction_NN_4_4::synapse0x293c940() {
   return (neuron0x2925880()*-0.014327);
}

double NNfunction_NN_4_4::synapse0x293c4f0() {
   return (neuron0x291b910()*0.309363);
}

double NNfunction_NN_4_4::synapse0x293c530() {
   return (neuron0x2928460()*1.18621);
}

double NNfunction_NN_4_4::synapse0x293c570() {
   return (neuron0x2928e30()*-0.336442);
}

double NNfunction_NN_4_4::synapse0x293c5b0() {
   return (neuron0x2929800()*0.964898);
}

double NNfunction_NN_4_4::synapse0x293cb90() {
   return (neuron0x292a1d0()*0.0229621);
}

double NNfunction_NN_4_4::synapse0x293cbd0() {
   return (neuron0x292aba0()*-0.197441);
}

double NNfunction_NN_4_4::synapse0x293cc10() {
   return (neuron0x292b570()*-1.70638);
}

double NNfunction_NN_4_4::synapse0x293cc50() {
   return (neuron0x292bf40()*1.65815);
}

double NNfunction_NN_4_4::synapse0x293cc90() {
   return (neuron0x292c910()*0.667701);
}

double NNfunction_NN_4_4::synapse0x293ccd0() {
   return (neuron0x292d4f0()*-1.02612);
}

double NNfunction_NN_4_4::synapse0x293cd10() {
   return (neuron0x292dec0()*-0.324638);
}

double NNfunction_NN_4_4::synapse0x293cd50() {
   return (neuron0x291ed40()*0.222238);
}

double NNfunction_NN_4_4::synapse0x293cd90() {
   return (neuron0x291f710()*1.02845);
}

double NNfunction_NN_4_4::synapse0x293cdd0() {
   return (neuron0x29200e0()*-0.762178);
}

double NNfunction_NN_4_4::synapse0x293ce10() {
   return (neuron0x2932720()*0.500883);
}

double NNfunction_NN_4_4::synapse0x293ce50() {
   return (neuron0x2932fd0()*-3.1138);
}

double NNfunction_NN_4_4::synapse0x293ce90() {
   return (neuron0x29339a0()*0.241089);
}

double NNfunction_NN_4_4::synapse0x293ced0() {
   return (neuron0x2934370()*0.123699);
}

double NNfunction_NN_4_4::synapse0x293d250() {
   return (neuron0x29102f0()*-1.11237);
}

double NNfunction_NN_4_4::synapse0x293d290() {
   return (neuron0x2910c00()*-0.381845);
}

double NNfunction_NN_4_4::synapse0x293d2d0() {
   return (neuron0x29116e0()*0.15514);
}

double NNfunction_NN_4_4::synapse0x293d310() {
   return (neuron0x26caf70()*0.40161);
}

double NNfunction_NN_4_4::synapse0x293d350() {
   return (neuron0x2912500()*1.34825);
}

double NNfunction_NN_4_4::synapse0x293d390() {
   return (neuron0x2912ed0()*-0.711553);
}

double NNfunction_NN_4_4::synapse0x293d3d0() {
   return (neuron0x2913ca0()*-1.96552);
}

double NNfunction_NN_4_4::synapse0x293d410() {
   return (neuron0x2914670()*0.482652);
}

double NNfunction_NN_4_4::synapse0x293d450() {
   return (neuron0x2915040()*0.182324);
}

double NNfunction_NN_4_4::synapse0x293d490() {
   return (neuron0x2915b20()*0.614291);
}

double NNfunction_NN_4_4::synapse0x293d4d0() {
   return (neuron0x29164f0()*1.59574);
}

double NNfunction_NN_4_4::synapse0x293d510() {
   return (neuron0x29135d0()*-0.494454);
}

double NNfunction_NN_4_4::synapse0x293d550() {
   return (neuron0x29180a0()*0.567908);
}

double NNfunction_NN_4_4::synapse0x293d590() {
   return (neuron0x2918a70()*1.437);
}

double NNfunction_NN_4_4::synapse0x293d5d0() {
   return (neuron0x2919440()*0.161237);
}

double NNfunction_NN_4_4::synapse0x293d610() {
   return (neuron0x2919e10()*-0.0475557);
}

double NNfunction_NN_4_4::synapse0x293d0a0() {
   return (neuron0x291bc20()*0.336288);
}

double NNfunction_NN_4_4::synapse0x293d0e0() {
   return (neuron0x291bf00()*-1.25712);
}

double NNfunction_NN_4_4::synapse0x293d760() {
   return (neuron0x291c8d0()*-0.731917);
}

double NNfunction_NN_4_4::synapse0x293d7a0() {
   return (neuron0x291d2a0()*0.654679);
}

double NNfunction_NN_4_4::synapse0x293d7e0() {
   return (neuron0x291dc70()*0.432304);
}

double NNfunction_NN_4_4::synapse0x293d820() {
   return (neuron0x291e640()*0.35133);
}

double NNfunction_NN_4_4::synapse0x293d860() {
   return (neuron0x2917190()*1.09937);
}

double NNfunction_NN_4_4::synapse0x293d8a0() {
   return (neuron0x2917b60()*0.351266);
}

double NNfunction_NN_4_4::synapse0x293d8e0() {
   return (neuron0x29213d0()*0.420147);
}

double NNfunction_NN_4_4::synapse0x293d920() {
   return (neuron0x2921da0()*0.202917);
}

double NNfunction_NN_4_4::synapse0x293d960() {
   return (neuron0x2922770()*0.508818);
}

double NNfunction_NN_4_4::synapse0x293d9a0() {
   return (neuron0x2923140()*0.151382);
}

double NNfunction_NN_4_4::synapse0x293d9e0() {
   return (neuron0x2923b10()*0.0458968);
}

double NNfunction_NN_4_4::synapse0x293da20() {
   return (neuron0x29244e0()*-0.886553);
}

double NNfunction_NN_4_4::synapse0x293da60() {
   return (neuron0x2924eb0()*1.97134);
}

double NNfunction_NN_4_4::synapse0x293daa0() {
   return (neuron0x2925880()*-0.154861);
}

double NNfunction_NN_4_4::synapse0x293d650() {
   return (neuron0x291b910()*-0.541061);
}

double NNfunction_NN_4_4::synapse0x293d690() {
   return (neuron0x2928460()*0.50768);
}

double NNfunction_NN_4_4::synapse0x293d6d0() {
   return (neuron0x2928e30()*0.253445);
}

double NNfunction_NN_4_4::synapse0x293d710() {
   return (neuron0x2929800()*-0.738974);
}

double NNfunction_NN_4_4::synapse0x293dcf0() {
   return (neuron0x292a1d0()*0.0775256);
}

double NNfunction_NN_4_4::synapse0x293dd30() {
   return (neuron0x292aba0()*0.434288);
}

double NNfunction_NN_4_4::synapse0x293dd70() {
   return (neuron0x292b570()*0.964485);
}

double NNfunction_NN_4_4::synapse0x293ddb0() {
   return (neuron0x292bf40()*0.575198);
}

double NNfunction_NN_4_4::synapse0x293ddf0() {
   return (neuron0x292c910()*-0.11121);
}

double NNfunction_NN_4_4::synapse0x293de30() {
   return (neuron0x292d4f0()*0.189006);
}

double NNfunction_NN_4_4::synapse0x293de70() {
   return (neuron0x292dec0()*-0.666075);
}

double NNfunction_NN_4_4::synapse0x293deb0() {
   return (neuron0x291ed40()*-0.243346);
}

double NNfunction_NN_4_4::synapse0x293def0() {
   return (neuron0x291f710()*-0.780927);
}

double NNfunction_NN_4_4::synapse0x293df30() {
   return (neuron0x29200e0()*0.0385448);
}

double NNfunction_NN_4_4::synapse0x293df70() {
   return (neuron0x2932720()*0.634955);
}

double NNfunction_NN_4_4::synapse0x293dfb0() {
   return (neuron0x2932fd0()*1.14127);
}

double NNfunction_NN_4_4::synapse0x293dff0() {
   return (neuron0x29339a0()*0.319067);
}

double NNfunction_NN_4_4::synapse0x293e030() {
   return (neuron0x2934370()*-0.198836);
}

double NNfunction_NN_4_4::synapse0x293e3b0() {
   return (neuron0x29102f0()*0.573191);
}

double NNfunction_NN_4_4::synapse0x293e3f0() {
   return (neuron0x2910c00()*0.105207);
}

double NNfunction_NN_4_4::synapse0x293e430() {
   return (neuron0x29116e0()*-0.177074);
}

double NNfunction_NN_4_4::synapse0x293e470() {
   return (neuron0x26caf70()*-1.54803);
}

double NNfunction_NN_4_4::synapse0x293e4b0() {
   return (neuron0x2912500()*0.0378962);
}

double NNfunction_NN_4_4::synapse0x293e4f0() {
   return (neuron0x2912ed0()*-0.0585917);
}

double NNfunction_NN_4_4::synapse0x293e530() {
   return (neuron0x2913ca0()*-0.101364);
}

double NNfunction_NN_4_4::synapse0x293e570() {
   return (neuron0x2914670()*-0.104788);
}

double NNfunction_NN_4_4::synapse0x293e5b0() {
   return (neuron0x2915040()*-0.0705617);
}

double NNfunction_NN_4_4::synapse0x293e5f0() {
   return (neuron0x2915b20()*-0.175688);
}

double NNfunction_NN_4_4::synapse0x293e630() {
   return (neuron0x29164f0()*-0.386971);
}

double NNfunction_NN_4_4::synapse0x293e670() {
   return (neuron0x29135d0()*-0.563607);
}

double NNfunction_NN_4_4::synapse0x293e6b0() {
   return (neuron0x29180a0()*-0.420323);
}

double NNfunction_NN_4_4::synapse0x293e6f0() {
   return (neuron0x2918a70()*-0.465303);
}

double NNfunction_NN_4_4::synapse0x293e730() {
   return (neuron0x2919440()*-0.263794);
}

double NNfunction_NN_4_4::synapse0x293e770() {
   return (neuron0x2919e10()*-0.0870596);
}

double NNfunction_NN_4_4::synapse0x293e200() {
   return (neuron0x291bc20()*0.339692);
}

double NNfunction_NN_4_4::synapse0x293e240() {
   return (neuron0x291bf00()*0.0826104);
}

double NNfunction_NN_4_4::synapse0x293e8c0() {
   return (neuron0x291c8d0()*1.96229);
}

double NNfunction_NN_4_4::synapse0x293e900() {
   return (neuron0x291d2a0()*-0.167535);
}

double NNfunction_NN_4_4::synapse0x293e940() {
   return (neuron0x291dc70()*-0.742844);
}

double NNfunction_NN_4_4::synapse0x293e980() {
   return (neuron0x291e640()*-0.615343);
}

double NNfunction_NN_4_4::synapse0x293e9c0() {
   return (neuron0x2917190()*0.285286);
}

double NNfunction_NN_4_4::synapse0x293ea00() {
   return (neuron0x2917b60()*-0.220854);
}

double NNfunction_NN_4_4::synapse0x293ea40() {
   return (neuron0x29213d0()*0.438758);
}

double NNfunction_NN_4_4::synapse0x293ea80() {
   return (neuron0x2921da0()*-0.104656);
}

double NNfunction_NN_4_4::synapse0x293eac0() {
   return (neuron0x2922770()*-0.203231);
}

double NNfunction_NN_4_4::synapse0x293eb00() {
   return (neuron0x2923140()*-0.134786);
}

double NNfunction_NN_4_4::synapse0x293eb40() {
   return (neuron0x2923b10()*0.284424);
}

double NNfunction_NN_4_4::synapse0x293eb80() {
   return (neuron0x29244e0()*0.143037);
}

double NNfunction_NN_4_4::synapse0x293ebc0() {
   return (neuron0x2924eb0()*-0.237244);
}

double NNfunction_NN_4_4::synapse0x293ec00() {
   return (neuron0x2925880()*0.075574);
}

double NNfunction_NN_4_4::synapse0x293e7b0() {
   return (neuron0x291b910()*0.00908196);
}

double NNfunction_NN_4_4::synapse0x293e7f0() {
   return (neuron0x2928460()*-1.97553);
}

double NNfunction_NN_4_4::synapse0x293e830() {
   return (neuron0x2928e30()*0.0430482);
}

double NNfunction_NN_4_4::synapse0x293e870() {
   return (neuron0x2929800()*-0.0899017);
}

double NNfunction_NN_4_4::synapse0x293ee50() {
   return (neuron0x292a1d0()*-0.0116028);
}

double NNfunction_NN_4_4::synapse0x293ee90() {
   return (neuron0x292aba0()*-0.109648);
}

double NNfunction_NN_4_4::synapse0x293eed0() {
   return (neuron0x292b570()*0.341295);
}

double NNfunction_NN_4_4::synapse0x293ef10() {
   return (neuron0x292bf40()*-2.05978);
}

double NNfunction_NN_4_4::synapse0x293ef50() {
   return (neuron0x292c910()*-0.228153);
}

double NNfunction_NN_4_4::synapse0x293ef90() {
   return (neuron0x292d4f0()*0.358468);
}

double NNfunction_NN_4_4::synapse0x293efd0() {
   return (neuron0x292dec0()*-1.24936);
}

double NNfunction_NN_4_4::synapse0x293f010() {
   return (neuron0x291ed40()*-0.038613);
}

double NNfunction_NN_4_4::synapse0x293f050() {
   return (neuron0x291f710()*0.00855064);
}

double NNfunction_NN_4_4::synapse0x293f090() {
   return (neuron0x29200e0()*0.0462548);
}

double NNfunction_NN_4_4::synapse0x293f0d0() {
   return (neuron0x2932720()*-0.677365);
}

double NNfunction_NN_4_4::synapse0x293f110() {
   return (neuron0x2932fd0()*0.370864);
}

double NNfunction_NN_4_4::synapse0x293f150() {
   return (neuron0x29339a0()*-0.323592);
}

double NNfunction_NN_4_4::synapse0x293f190() {
   return (neuron0x2934370()*0.0545768);
}

double NNfunction_NN_4_4::synapse0x29102b0() {
   return (neuron0x293b570()*3.3715);
}

double NNfunction_NN_4_4::synapse0x293f3f0() {
   return (neuron0x293b910()*-5.59752);
}

double NNfunction_NN_4_4::synapse0x293f430() {
   return (neuron0x293bdb0()*-7.26994);
}

double NNfunction_NN_4_4::synapse0x293f470() {
   return (neuron0x293cf10()*-3.52103);
}

double NNfunction_NN_4_4::synapse0x293f4b0() {
   return (neuron0x293e070()*-3.50384);
}

