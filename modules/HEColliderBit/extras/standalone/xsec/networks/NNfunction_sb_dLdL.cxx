#include "NNfunction_sb_dLdL.h"
#include <cmath>

double NNfunction_sb_dLdL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5528)/15.3337;
   input1 = (in1 - -3.30481)/1151.15;
   input2 = (in2 - 663.964)/624.154;
   input3 = (in3 - -55.6489)/822.719;
   input4 = (in4 - 1060.36)/953.5;
   input5 = (in5 - 891.987)/944.653;
   input6 = (in6 - 909.256)/950.638;
   input7 = (in7 - 922.789)/932.425;
   input8 = (in8 - 930.18)/977.729;
   input9 = (in9 - 900.325)/952.32;
   input10 = (in10 - 990.348)/958.541;
   input11 = (in11 - 329.486)/298.205;
   input12 = (in12 - 729.987)/877.343;
   input13 = (in13 - 508.277)/525.686;
   input14 = (in14 - 717.753)/815.715;
   input15 = (in15 - 723.314)/818.006;
   input16 = (in16 - 539.303)/565.902;
   input17 = (in17 - 769.706)/908.457;
   input18 = (in18 - 754.134)/901.543;
   input19 = (in19 - 807.252)/884.155;
   input20 = (in20 - -4.05716)/493.759;
   input21 = (in21 - 3.23217)/1161.55;
   input22 = (in22 - 8.77066)/1206.11;
   input23 = (in23 - -192.912)/596.553;
   switch(index) {
     case 0:
         return neuron0x2c974a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_dLdL::Value(int index, double* input) {
   input0 = (input[0] - 23.5528)/15.3337;
   input1 = (input[1] - -3.30481)/1151.15;
   input2 = (input[2] - 663.964)/624.154;
   input3 = (input[3] - -55.6489)/822.719;
   input4 = (input[4] - 1060.36)/953.5;
   input5 = (input[5] - 891.987)/944.653;
   input6 = (input[6] - 909.256)/950.638;
   input7 = (input[7] - 922.789)/932.425;
   input8 = (input[8] - 930.18)/977.729;
   input9 = (input[9] - 900.325)/952.32;
   input10 = (input[10] - 990.348)/958.541;
   input11 = (input[11] - 329.486)/298.205;
   input12 = (input[12] - 729.987)/877.343;
   input13 = (input[13] - 508.277)/525.686;
   input14 = (input[14] - 717.753)/815.715;
   input15 = (input[15] - 723.314)/818.006;
   input16 = (input[16] - 539.303)/565.902;
   input17 = (input[17] - 769.706)/908.457;
   input18 = (input[18] - 754.134)/901.543;
   input19 = (input[19] - 807.252)/884.155;
   input20 = (input[20] - -4.05716)/493.759;
   input21 = (input[21] - 3.23217)/1161.55;
   input22 = (input[22] - 8.77066)/1206.11;
   input23 = (input[23] - -192.912)/596.553;
   switch(index) {
     case 0:
         return neuron0x2c974a0();
     default:
         return 0.;
   }
}

double NNfunction_sb_dLdL::neuron0x2c63560() {
   return input0;
}

double NNfunction_sb_dLdL::neuron0x2c638a0() {
   return input1;
}

double NNfunction_sb_dLdL::neuron0x2c63be0() {
   return input2;
}

double NNfunction_sb_dLdL::neuron0x2c63f20() {
   return input3;
}

double NNfunction_sb_dLdL::neuron0x2c64260() {
   return input4;
}

double NNfunction_sb_dLdL::neuron0x2c645a0() {
   return input5;
}

double NNfunction_sb_dLdL::neuron0x2c648e0() {
   return input6;
}

double NNfunction_sb_dLdL::neuron0x2c64c20() {
   return input7;
}

double NNfunction_sb_dLdL::neuron0x2c64f60() {
   return input8;
}

double NNfunction_sb_dLdL::neuron0x2c652a0() {
   return input9;
}

double NNfunction_sb_dLdL::neuron0x2c655e0() {
   return input10;
}

double NNfunction_sb_dLdL::neuron0x2c65920() {
   return input11;
}

double NNfunction_sb_dLdL::neuron0x2c65c60() {
   return input12;
}

double NNfunction_sb_dLdL::neuron0x2c65fa0() {
   return input13;
}

double NNfunction_sb_dLdL::neuron0x2c662e0() {
   return input14;
}

double NNfunction_sb_dLdL::neuron0x2c66620() {
   return input15;
}

double NNfunction_sb_dLdL::neuron0x2c66960() {
   return input16;
}

double NNfunction_sb_dLdL::neuron0x2c66ec0() {
   return input17;
}

double NNfunction_sb_dLdL::neuron0x2c670e0() {
   return input18;
}

double NNfunction_sb_dLdL::neuron0x2c67420() {
   return input19;
}

double NNfunction_sb_dLdL::neuron0x2c67760() {
   return input20;
}

double NNfunction_sb_dLdL::neuron0x2c67aa0() {
   return input21;
}

double NNfunction_sb_dLdL::neuron0x2c67de0() {
   return input22;
}

double NNfunction_sb_dLdL::neuron0x2c68120() {
   return input23;
}

double NNfunction_sb_dLdL::input0x2c685c0() {
   double input = 1.6542;
   input += synapse0x2a233d0();
   input += synapse0x2c63420();
   input += synapse0x2c63460();
   input += synapse0x2c68870();
   input += synapse0x2c688b0();
   input += synapse0x2c688f0();
   input += synapse0x2c68930();
   input += synapse0x2c68970();
   input += synapse0x2c689b0();
   input += synapse0x2c689f0();
   input += synapse0x2c68a30();
   input += synapse0x2c68a70();
   input += synapse0x2c68ab0();
   input += synapse0x2c68af0();
   input += synapse0x2c68b30();
   input += synapse0x2c68b70();
   input += synapse0x2c63390();
   input += synapse0x2c633d0();
   input += synapse0x2a14c70();
   input += synapse0x2a14cb0();
   input += synapse0x2c68dd0();
   input += synapse0x2c68e10();
   input += synapse0x2c68e50();
   input += synapse0x2c68e90();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c685c0() {
   double input = input0x2c685c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c68ed0() {
   double input = -1.29331;
   input += synapse0x2c69210();
   input += synapse0x2c69250();
   input += synapse0x2c69290();
   input += synapse0x2c692d0();
   input += synapse0x2c69310();
   input += synapse0x2c69350();
   input += synapse0x2c69390();
   input += synapse0x2c693d0();
   input += synapse0x2c69410();
   input += synapse0x2c68cc0();
   input += synapse0x2c68d00();
   input += synapse0x2c68d40();
   input += synapse0x2c68d80();
   input += synapse0x2c69660();
   input += synapse0x2c696a0();
   input += synapse0x2c696e0();
   input += synapse0x2c69060();
   input += synapse0x2c690a0();
   input += synapse0x2c69830();
   input += synapse0x2c69870();
   input += synapse0x2c698b0();
   input += synapse0x2c698f0();
   input += synapse0x2c69930();
   input += synapse0x2c69970();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c68ed0() {
   double input = input0x2c68ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c699b0() {
   double input = 0.226322;
   input += synapse0x2c69cf0();
   input += synapse0x2c69d30();
   input += synapse0x2c69d70();
   input += synapse0x2c69db0();
   input += synapse0x2c69df0();
   input += synapse0x2c69e30();
   input += synapse0x2c69e70();
   input += synapse0x2c69eb0();
   input += synapse0x2c69ef0();
   input += synapse0x2c69f30();
   input += synapse0x2c69f70();
   input += synapse0x2c69fb0();
   input += synapse0x2c69ff0();
   input += synapse0x2c6a030();
   input += synapse0x2c6a070();
   input += synapse0x2c6a0b0();
   input += synapse0x2c69b40();
   input += synapse0x2c69b80();
   input += synapse0x2a22ac0();
   input += synapse0x2a22b00();
   input += synapse0x2c525f0();
   input += synapse0x2c52630();
   input += synapse0x2c52670();
   input += synapse0x2c634a0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c699b0() {
   double input = input0x2c699b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2a23240() {
   double input = 0.468748;
   input += synapse0x2c69600();
   input += synapse0x2c634e0();
   input += synapse0x2c63520();
   input += synapse0x2c6a200();
   input += synapse0x2c6a240();
   input += synapse0x2c6a280();
   input += synapse0x2c6a2c0();
   input += synapse0x2c6a300();
   input += synapse0x2c6a340();
   input += synapse0x2c6a380();
   input += synapse0x2c6a3c0();
   input += synapse0x2c6a400();
   input += synapse0x2c6a440();
   input += synapse0x2c6a480();
   input += synapse0x2c6a4c0();
   input += synapse0x2c6a500();
   input += synapse0x2c69450();
   input += synapse0x2c69490();
   input += synapse0x2c6a650();
   input += synapse0x2c6a690();
   input += synapse0x2c6a6d0();
   input += synapse0x2c6a710();
   input += synapse0x2c6a750();
   input += synapse0x2c6a790();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2a23240() {
   double input = input0x2a23240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c6a7d0() {
   double input = -2.25286;
   input += synapse0x2c6ab10();
   input += synapse0x2c6ab50();
   input += synapse0x2c6ab90();
   input += synapse0x2c6abd0();
   input += synapse0x2c6ac10();
   input += synapse0x2c6ac50();
   input += synapse0x2c6ac90();
   input += synapse0x2c6acd0();
   input += synapse0x2c6ad10();
   input += synapse0x2c6ad50();
   input += synapse0x2c6ad90();
   input += synapse0x2c6add0();
   input += synapse0x2c6ae10();
   input += synapse0x2c6ae50();
   input += synapse0x2c6ae90();
   input += synapse0x2c6aed0();
   input += synapse0x2c6a960();
   input += synapse0x2c6a9a0();
   input += synapse0x2c6b020();
   input += synapse0x2c6b060();
   input += synapse0x2c6b0a0();
   input += synapse0x2c6b0e0();
   input += synapse0x2c6b120();
   input += synapse0x2c6b160();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c6a7d0() {
   double input = input0x2c6a7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c6b1a0() {
   double input = 1.58032;
   input += synapse0x2c6b4e0();
   input += synapse0x2c6b520();
   input += synapse0x2c6b560();
   input += synapse0x2c6b5a0();
   input += synapse0x2c6b5e0();
   input += synapse0x2c6b620();
   input += synapse0x2c6b660();
   input += synapse0x2c6b6a0();
   input += synapse0x2c6b6e0();
   input += synapse0x2a22e30();
   input += synapse0x2a22e70();
   input += synapse0x2a22eb0();
   input += synapse0x2a22ef0();
   input += synapse0x2a22f30();
   input += synapse0x2a22f70();
   input += synapse0x2a22fb0();
   input += synapse0x2c6b330();
   input += synapse0x2c6b370();
   input += synapse0x2a23100();
   input += synapse0x2a23140();
   input += synapse0x2a23180();
   input += synapse0x2a231c0();
   input += synapse0x2a23200();
   input += synapse0x2c6bf30();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c6b1a0() {
   double input = input0x2c6b1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c6bf70() {
   double input = 1.45459;
   input += synapse0x2c6c2b0();
   input += synapse0x2c6c2f0();
   input += synapse0x2c6c330();
   input += synapse0x2c6c370();
   input += synapse0x2c6c3b0();
   input += synapse0x2c6c3f0();
   input += synapse0x2c6c430();
   input += synapse0x2c6c470();
   input += synapse0x2c6c4b0();
   input += synapse0x2c6c4f0();
   input += synapse0x2c6c530();
   input += synapse0x2c6c570();
   input += synapse0x2c6c5b0();
   input += synapse0x2c6c5f0();
   input += synapse0x2c6c630();
   input += synapse0x2c6c670();
   input += synapse0x2c6c100();
   input += synapse0x2c6c140();
   input += synapse0x2c6c7c0();
   input += synapse0x2c6c800();
   input += synapse0x2c6c840();
   input += synapse0x2c6c880();
   input += synapse0x2c6c8c0();
   input += synapse0x2c6c900();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c6bf70() {
   double input = input0x2c6bf70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c6c940() {
   double input = 0.0453707;
   input += synapse0x2c6cc80();
   input += synapse0x2c6ccc0();
   input += synapse0x2c6cd00();
   input += synapse0x2c6cd40();
   input += synapse0x2c6cd80();
   input += synapse0x2c6cdc0();
   input += synapse0x2c6ce00();
   input += synapse0x2c6ce40();
   input += synapse0x2c6ce80();
   input += synapse0x2c6cec0();
   input += synapse0x2c6cf00();
   input += synapse0x2c6cf40();
   input += synapse0x2c6cf80();
   input += synapse0x2c6cfc0();
   input += synapse0x2c6d000();
   input += synapse0x2c6d040();
   input += synapse0x2c6cad0();
   input += synapse0x2c6cb10();
   input += synapse0x2c6d190();
   input += synapse0x2c6d1d0();
   input += synapse0x2c6d210();
   input += synapse0x2c6d250();
   input += synapse0x2c6d290();
   input += synapse0x2c6d2d0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c6c940() {
   double input = input0x2c6c940();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c6d310() {
   double input = -0.473842;
   input += synapse0x2c66db0();
   input += synapse0x2c66df0();
   input += synapse0x2c66e30();
   input += synapse0x2c66e70();
   input += synapse0x2c6d860();
   input += synapse0x2c6d8a0();
   input += synapse0x2c6d8e0();
   input += synapse0x2c6d920();
   input += synapse0x2c6d960();
   input += synapse0x2c6d9a0();
   input += synapse0x2c6d9e0();
   input += synapse0x2c6da20();
   input += synapse0x2c6da60();
   input += synapse0x2c6daa0();
   input += synapse0x2c6dae0();
   input += synapse0x2c6db20();
   input += synapse0x2c6d4a0();
   input += synapse0x2c6d4e0();
   input += synapse0x2c6dc70();
   input += synapse0x2c6dcb0();
   input += synapse0x2c6dcf0();
   input += synapse0x2c6dd30();
   input += synapse0x2c6dd70();
   input += synapse0x2c6ddb0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c6d310() {
   double input = input0x2c6d310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c6ddf0() {
   double input = -4.28498;
   input += synapse0x2c6e130();
   input += synapse0x2c6e170();
   input += synapse0x2c6e1b0();
   input += synapse0x2c6e1f0();
   input += synapse0x2c6e230();
   input += synapse0x2c6e270();
   input += synapse0x2c6e2b0();
   input += synapse0x2c6e2f0();
   input += synapse0x2c6e330();
   input += synapse0x2c6e370();
   input += synapse0x2c6e3b0();
   input += synapse0x2c6e3f0();
   input += synapse0x2c6e430();
   input += synapse0x2c6e470();
   input += synapse0x2c6e4b0();
   input += synapse0x2c6e4f0();
   input += synapse0x2c6df80();
   input += synapse0x2c6dfc0();
   input += synapse0x2c6e640();
   input += synapse0x2c6e680();
   input += synapse0x2c6e6c0();
   input += synapse0x2c6e700();
   input += synapse0x2c6e740();
   input += synapse0x2c6e780();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c6ddf0() {
   double input = input0x2c6ddf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c6e7c0() {
   double input = 0.515163;
   input += synapse0x2c6eb00();
   input += synapse0x2c6eb40();
   input += synapse0x2c6eb80();
   input += synapse0x2c6ebc0();
   input += synapse0x2c6ec00();
   input += synapse0x2c6ec40();
   input += synapse0x2c6ec80();
   input += synapse0x2c6ecc0();
   input += synapse0x2c6ed00();
   input += synapse0x2c6ed40();
   input += synapse0x2c6ed80();
   input += synapse0x2c6edc0();
   input += synapse0x2c6ee00();
   input += synapse0x2c6ee40();
   input += synapse0x2c6ee80();
   input += synapse0x2c6eec0();
   input += synapse0x2c6e950();
   input += synapse0x2c6e990();
   input += synapse0x2c6b720();
   input += synapse0x2c6b760();
   input += synapse0x2c6b7a0();
   input += synapse0x2c6b7e0();
   input += synapse0x2c6b820();
   input += synapse0x2c6b860();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c6e7c0() {
   double input = input0x2c6e7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c6b8a0() {
   double input = 0.577593;
   input += synapse0x2c6bbe0();
   input += synapse0x2c6bc20();
   input += synapse0x2c6bc60();
   input += synapse0x2c6bca0();
   input += synapse0x2c6bce0();
   input += synapse0x2c6bd20();
   input += synapse0x2c6bd60();
   input += synapse0x2c6bda0();
   input += synapse0x2c6bde0();
   input += synapse0x2c6be20();
   input += synapse0x2c6be60();
   input += synapse0x2c6bea0();
   input += synapse0x2c6bee0();
   input += synapse0x2c70020();
   input += synapse0x2c70060();
   input += synapse0x2c700a0();
   input += synapse0x2c6ba30();
   input += synapse0x2c6ba70();
   input += synapse0x2c701f0();
   input += synapse0x2c70230();
   input += synapse0x2c70270();
   input += synapse0x2c702b0();
   input += synapse0x2c702f0();
   input += synapse0x2c70330();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c6b8a0() {
   double input = input0x2c6b8a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c70370() {
   double input = -0.0893658;
   input += synapse0x2c706b0();
   input += synapse0x2c706f0();
   input += synapse0x2c70730();
   input += synapse0x2c70770();
   input += synapse0x2c707b0();
   input += synapse0x2c707f0();
   input += synapse0x2c70830();
   input += synapse0x2c70870();
   input += synapse0x2c708b0();
   input += synapse0x2c708f0();
   input += synapse0x2c70930();
   input += synapse0x2c70970();
   input += synapse0x2c709b0();
   input += synapse0x2c709f0();
   input += synapse0x2c70a30();
   input += synapse0x2c70a70();
   input += synapse0x2c70500();
   input += synapse0x2c70540();
   input += synapse0x2c70bc0();
   input += synapse0x2c70c00();
   input += synapse0x2c70c40();
   input += synapse0x2c70c80();
   input += synapse0x2c70cc0();
   input += synapse0x2c70d00();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c70370() {
   double input = input0x2c70370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c70d40() {
   double input = 0.105691;
   input += synapse0x2c71080();
   input += synapse0x2c710c0();
   input += synapse0x2c71100();
   input += synapse0x2c71140();
   input += synapse0x2c71180();
   input += synapse0x2c711c0();
   input += synapse0x2c71200();
   input += synapse0x2c71240();
   input += synapse0x2c71280();
   input += synapse0x2c712c0();
   input += synapse0x2c71300();
   input += synapse0x2c71340();
   input += synapse0x2c71380();
   input += synapse0x2c713c0();
   input += synapse0x2c71400();
   input += synapse0x2c71440();
   input += synapse0x2c70ed0();
   input += synapse0x2c70f10();
   input += synapse0x2c71590();
   input += synapse0x2c715d0();
   input += synapse0x2c71610();
   input += synapse0x2c71650();
   input += synapse0x2c71690();
   input += synapse0x2c716d0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c70d40() {
   double input = input0x2c70d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c71710() {
   double input = -0.229451;
   input += synapse0x2c71a50();
   input += synapse0x2c71a90();
   input += synapse0x2c71ad0();
   input += synapse0x2c71b10();
   input += synapse0x2c71b50();
   input += synapse0x2c71b90();
   input += synapse0x2c71bd0();
   input += synapse0x2c71c10();
   input += synapse0x2c71c50();
   input += synapse0x2c71c90();
   input += synapse0x2c71cd0();
   input += synapse0x2c71d10();
   input += synapse0x2c71d50();
   input += synapse0x2c71d90();
   input += synapse0x2c71dd0();
   input += synapse0x2c71e10();
   input += synapse0x2c718a0();
   input += synapse0x2c718e0();
   input += synapse0x2c71f60();
   input += synapse0x2c71fa0();
   input += synapse0x2c71fe0();
   input += synapse0x2c72020();
   input += synapse0x2c72060();
   input += synapse0x2c720a0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c71710() {
   double input = input0x2c71710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c720e0() {
   double input = 0.696861;
   input += synapse0x2c72420();
   input += synapse0x2c63780();
   input += synapse0x2c637c0();
   input += synapse0x2c63ac0();
   input += synapse0x2c63b00();
   input += synapse0x2c63e00();
   input += synapse0x2c63e40();
   input += synapse0x2c64140();
   input += synapse0x2c64180();
   input += synapse0x2c64480();
   input += synapse0x2c644c0();
   input += synapse0x2c647c0();
   input += synapse0x2c64800();
   input += synapse0x2c64b00();
   input += synapse0x2c64b40();
   input += synapse0x2c64e40();
   input += synapse0x2c64e80();
   input += synapse0x2c65180();
   input += synapse0x2c651c0();
   input += synapse0x2c654c0();
   input += synapse0x2c65500();
   input += synapse0x2c65800();
   input += synapse0x2c65840();
   input += synapse0x2c65b40();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c720e0() {
   double input = input0x2c720e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c73ef0() {
   double input = 0.296097;
   input += synapse0x2c65b80();
   input += synapse0x2c66840();
   input += synapse0x2c66880();
   input += synapse0x2c72270();
   input += synapse0x2c722b0();
   input += synapse0x2c66b80();
   input += synapse0x2c66bc0();
   input += synapse0x2a14b50();
   input += synapse0x2a14b90();
   input += synapse0x2c67300();
   input += synapse0x2c67340();
   input += synapse0x2c67640();
   input += synapse0x2c67680();
   input += synapse0x2c67980();
   input += synapse0x2c679c0();
   input += synapse0x2c67cc0();
   input += synapse0x2c67d00();
   input += synapse0x2c68000();
   input += synapse0x2c68040();
   input += synapse0x2c68340();
   input += synapse0x2c68380();
   input += synapse0x2c65e80();
   input += synapse0x2c65ec0();
   input += synapse0x2c74190();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c73ef0() {
   double input = input0x2c73ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c741d0() {
   double input = -0.0371661;
   input += synapse0x2c74510();
   input += synapse0x2c74550();
   input += synapse0x2c74590();
   input += synapse0x2c745d0();
   input += synapse0x2c74610();
   input += synapse0x2c74650();
   input += synapse0x2c74690();
   input += synapse0x2c746d0();
   input += synapse0x2c74710();
   input += synapse0x2c74750();
   input += synapse0x2c74790();
   input += synapse0x2c747d0();
   input += synapse0x2c74810();
   input += synapse0x2c74850();
   input += synapse0x2c74890();
   input += synapse0x2c748d0();
   input += synapse0x2c74360();
   input += synapse0x2c743a0();
   input += synapse0x2c74a20();
   input += synapse0x2c74a60();
   input += synapse0x2c74aa0();
   input += synapse0x2c74ae0();
   input += synapse0x2c74b20();
   input += synapse0x2c74b60();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c741d0() {
   double input = input0x2c741d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c74ba0() {
   double input = 5.23297;
   input += synapse0x2c74ee0();
   input += synapse0x2c74f20();
   input += synapse0x2c74f60();
   input += synapse0x2c74fa0();
   input += synapse0x2c74fe0();
   input += synapse0x2c75020();
   input += synapse0x2c75060();
   input += synapse0x2c750a0();
   input += synapse0x2c750e0();
   input += synapse0x2c75120();
   input += synapse0x2c75160();
   input += synapse0x2c751a0();
   input += synapse0x2c751e0();
   input += synapse0x2c75220();
   input += synapse0x2c75260();
   input += synapse0x2c752a0();
   input += synapse0x2c74d30();
   input += synapse0x2c74d70();
   input += synapse0x2c753f0();
   input += synapse0x2c75430();
   input += synapse0x2c75470();
   input += synapse0x2c754b0();
   input += synapse0x2c754f0();
   input += synapse0x2c75530();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c74ba0() {
   double input = input0x2c74ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c75570() {
   double input = 1.45117;
   input += synapse0x2c758b0();
   input += synapse0x2c758f0();
   input += synapse0x2c75930();
   input += synapse0x2c75970();
   input += synapse0x2c759b0();
   input += synapse0x2c759f0();
   input += synapse0x2c75a30();
   input += synapse0x2c75a70();
   input += synapse0x2c75ab0();
   input += synapse0x2c75af0();
   input += synapse0x2c75b30();
   input += synapse0x2c75b70();
   input += synapse0x2c75bb0();
   input += synapse0x2c75bf0();
   input += synapse0x2c75c30();
   input += synapse0x2c75c70();
   input += synapse0x2c75700();
   input += synapse0x2c75740();
   input += synapse0x2c75dc0();
   input += synapse0x2c75e00();
   input += synapse0x2c75e40();
   input += synapse0x2c75e80();
   input += synapse0x2c75ec0();
   input += synapse0x2c75f00();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c75570() {
   double input = input0x2c75570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c75f40() {
   double input = -0.747677;
   input += synapse0x2c76280();
   input += synapse0x2c762c0();
   input += synapse0x2c76300();
   input += synapse0x2c76340();
   input += synapse0x2c76380();
   input += synapse0x2c763c0();
   input += synapse0x2c76400();
   input += synapse0x2c76440();
   input += synapse0x2c76480();
   input += synapse0x2c764c0();
   input += synapse0x2c76500();
   input += synapse0x2c76540();
   input += synapse0x2c76580();
   input += synapse0x2c765c0();
   input += synapse0x2c76600();
   input += synapse0x2c76640();
   input += synapse0x2c760d0();
   input += synapse0x2c76110();
   input += synapse0x2c76790();
   input += synapse0x2c767d0();
   input += synapse0x2c76810();
   input += synapse0x2c76850();
   input += synapse0x2c76890();
   input += synapse0x2c768d0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c75f40() {
   double input = input0x2c75f40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c76910() {
   double input = -1.7673;
   input += synapse0x2c76c50();
   input += synapse0x2c76c90();
   input += synapse0x2c76cd0();
   input += synapse0x2c76d10();
   input += synapse0x2c76d50();
   input += synapse0x2c76d90();
   input += synapse0x2c76dd0();
   input += synapse0x2c76e10();
   input += synapse0x2c76e50();
   input += synapse0x2c6f010();
   input += synapse0x2c6f050();
   input += synapse0x2c6f090();
   input += synapse0x2c6f0d0();
   input += synapse0x2c6f110();
   input += synapse0x2c6f150();
   input += synapse0x2c6f190();
   input += synapse0x2c76aa0();
   input += synapse0x2c76ae0();
   input += synapse0x2c6f2e0();
   input += synapse0x2c6f320();
   input += synapse0x2c6f360();
   input += synapse0x2c6f3a0();
   input += synapse0x2c6f3e0();
   input += synapse0x2c6f420();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c76910() {
   double input = input0x2c76910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c6f460() {
   double input = 1.20214;
   input += synapse0x2c6f7a0();
   input += synapse0x2c6f7e0();
   input += synapse0x2c6f820();
   input += synapse0x2c6f860();
   input += synapse0x2c6f8a0();
   input += synapse0x2c6f8e0();
   input += synapse0x2c6f920();
   input += synapse0x2c6f960();
   input += synapse0x2c6f9a0();
   input += synapse0x2c6f9e0();
   input += synapse0x2c6fa20();
   input += synapse0x2c6fa60();
   input += synapse0x2c6faa0();
   input += synapse0x2c6fae0();
   input += synapse0x2c6fb20();
   input += synapse0x2c6fb60();
   input += synapse0x2c6f5f0();
   input += synapse0x2c6f630();
   input += synapse0x2c6fcb0();
   input += synapse0x2c6fcf0();
   input += synapse0x2c6fd30();
   input += synapse0x2c6fd70();
   input += synapse0x2c6fdb0();
   input += synapse0x2c6fdf0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c6f460() {
   double input = input0x2c6f460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c6fe30() {
   double input = -0.898973;
   input += synapse0x2c6ffc0();
   input += synapse0x2c79050();
   input += synapse0x2c79090();
   input += synapse0x2c790d0();
   input += synapse0x2c79110();
   input += synapse0x2c79150();
   input += synapse0x2c79190();
   input += synapse0x2c791d0();
   input += synapse0x2c79210();
   input += synapse0x2c79250();
   input += synapse0x2c79290();
   input += synapse0x2c792d0();
   input += synapse0x2c79310();
   input += synapse0x2c79350();
   input += synapse0x2c79390();
   input += synapse0x2c793d0();
   input += synapse0x2c78ea0();
   input += synapse0x2c78ee0();
   input += synapse0x2c79520();
   input += synapse0x2c79560();
   input += synapse0x2c795a0();
   input += synapse0x2c795e0();
   input += synapse0x2c79620();
   input += synapse0x2c79660();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c6fe30() {
   double input = input0x2c6fe30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c796a0() {
   double input = 1.33516;
   input += synapse0x2c799e0();
   input += synapse0x2c79a20();
   input += synapse0x2c79a60();
   input += synapse0x2c79aa0();
   input += synapse0x2c79ae0();
   input += synapse0x2c79b20();
   input += synapse0x2c79b60();
   input += synapse0x2c79ba0();
   input += synapse0x2c79be0();
   input += synapse0x2c79c20();
   input += synapse0x2c79c60();
   input += synapse0x2c79ca0();
   input += synapse0x2c79ce0();
   input += synapse0x2c79d20();
   input += synapse0x2c79d60();
   input += synapse0x2c79da0();
   input += synapse0x2c79830();
   input += synapse0x2c79870();
   input += synapse0x2c79ef0();
   input += synapse0x2c79f30();
   input += synapse0x2c79f70();
   input += synapse0x2c79fb0();
   input += synapse0x2c79ff0();
   input += synapse0x2c7a030();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c796a0() {
   double input = input0x2c796a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c7a070() {
   double input = -0.317286;
   input += synapse0x2c7a3b0();
   input += synapse0x2c7a3f0();
   input += synapse0x2c7a430();
   input += synapse0x2c7a470();
   input += synapse0x2c7a4b0();
   input += synapse0x2c7a4f0();
   input += synapse0x2c7a530();
   input += synapse0x2c7a570();
   input += synapse0x2c7a5b0();
   input += synapse0x2c7a5f0();
   input += synapse0x2c7a630();
   input += synapse0x2c7a670();
   input += synapse0x2c7a6b0();
   input += synapse0x2c7a6f0();
   input += synapse0x2c7a730();
   input += synapse0x2c7a770();
   input += synapse0x2c7a200();
   input += synapse0x2c7a240();
   input += synapse0x2c7a8c0();
   input += synapse0x2c7a900();
   input += synapse0x2c7a940();
   input += synapse0x2c7a980();
   input += synapse0x2c7a9c0();
   input += synapse0x2c7aa00();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c7a070() {
   double input = input0x2c7a070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c7aa40() {
   double input = -0.788303;
   input += synapse0x2c7ad80();
   input += synapse0x2c7adc0();
   input += synapse0x2c7ae00();
   input += synapse0x2c7ae40();
   input += synapse0x2c7ae80();
   input += synapse0x2c7aec0();
   input += synapse0x2c7af00();
   input += synapse0x2c7af40();
   input += synapse0x2c7af80();
   input += synapse0x2c7afc0();
   input += synapse0x2c7b000();
   input += synapse0x2c7b040();
   input += synapse0x2c7b080();
   input += synapse0x2c7b0c0();
   input += synapse0x2c7b100();
   input += synapse0x2c7b140();
   input += synapse0x2c7abd0();
   input += synapse0x2c7ac10();
   input += synapse0x2c7b290();
   input += synapse0x2c7b2d0();
   input += synapse0x2c7b310();
   input += synapse0x2c7b350();
   input += synapse0x2c7b390();
   input += synapse0x2c7b3d0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c7aa40() {
   double input = input0x2c7aa40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c7b410() {
   double input = 0.542446;
   input += synapse0x2c7b750();
   input += synapse0x2c7b790();
   input += synapse0x2c7b7d0();
   input += synapse0x2c7b810();
   input += synapse0x2c7b850();
   input += synapse0x2c7b890();
   input += synapse0x2c7b8d0();
   input += synapse0x2c7b910();
   input += synapse0x2c7b950();
   input += synapse0x2c7b990();
   input += synapse0x2c7b9d0();
   input += synapse0x2c7ba10();
   input += synapse0x2c7ba50();
   input += synapse0x2c7ba90();
   input += synapse0x2c7bad0();
   input += synapse0x2c7bb10();
   input += synapse0x2c7b5a0();
   input += synapse0x2c7b5e0();
   input += synapse0x2c7bc60();
   input += synapse0x2c7bca0();
   input += synapse0x2c7bce0();
   input += synapse0x2c7bd20();
   input += synapse0x2c7bd60();
   input += synapse0x2c7bda0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c7b410() {
   double input = input0x2c7b410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c7bde0() {
   double input = -0.16949;
   input += synapse0x2c7c120();
   input += synapse0x2c7c160();
   input += synapse0x2c7c1a0();
   input += synapse0x2c7c1e0();
   input += synapse0x2c7c220();
   input += synapse0x2c7c260();
   input += synapse0x2c7c2a0();
   input += synapse0x2c7c2e0();
   input += synapse0x2c7c320();
   input += synapse0x2c7c360();
   input += synapse0x2c7c3a0();
   input += synapse0x2c7c3e0();
   input += synapse0x2c7c420();
   input += synapse0x2c7c460();
   input += synapse0x2c7c4a0();
   input += synapse0x2c7c4e0();
   input += synapse0x2c7bf70();
   input += synapse0x2c7bfb0();
   input += synapse0x2c7c630();
   input += synapse0x2c7c670();
   input += synapse0x2c7c6b0();
   input += synapse0x2c7c6f0();
   input += synapse0x2c7c730();
   input += synapse0x2c7c770();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c7bde0() {
   double input = input0x2c7bde0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c7c7b0() {
   double input = -0.0670078;
   input += synapse0x2c7caf0();
   input += synapse0x2c7cb30();
   input += synapse0x2c7cb70();
   input += synapse0x2c7cbb0();
   input += synapse0x2c7cbf0();
   input += synapse0x2c7cc30();
   input += synapse0x2c7cc70();
   input += synapse0x2c7ccb0();
   input += synapse0x2c7ccf0();
   input += synapse0x2c7cd30();
   input += synapse0x2c7cd70();
   input += synapse0x2c7cdb0();
   input += synapse0x2c7cdf0();
   input += synapse0x2c7ce30();
   input += synapse0x2c7ce70();
   input += synapse0x2c7ceb0();
   input += synapse0x2c7c940();
   input += synapse0x2c7c980();
   input += synapse0x2c7d000();
   input += synapse0x2c7d040();
   input += synapse0x2c7d080();
   input += synapse0x2c7d0c0();
   input += synapse0x2c7d100();
   input += synapse0x2c7d140();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c7c7b0() {
   double input = input0x2c7c7b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c7d180() {
   double input = 1.97013;
   input += synapse0x2c7d4c0();
   input += synapse0x2c7d500();
   input += synapse0x2c7d540();
   input += synapse0x2c7d580();
   input += synapse0x2c7d5c0();
   input += synapse0x2c7d600();
   input += synapse0x2c7d640();
   input += synapse0x2c7d680();
   input += synapse0x2c7d6c0();
   input += synapse0x2c7d700();
   input += synapse0x2c7d740();
   input += synapse0x2c7d780();
   input += synapse0x2c7d7c0();
   input += synapse0x2c7d800();
   input += synapse0x2c7d840();
   input += synapse0x2c7d880();
   input += synapse0x2c7d310();
   input += synapse0x2c7d350();
   input += synapse0x2c7d9d0();
   input += synapse0x2c7da10();
   input += synapse0x2c7da50();
   input += synapse0x2c7da90();
   input += synapse0x2c7dad0();
   input += synapse0x2c7db10();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c7d180() {
   double input = input0x2c7d180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c7db50() {
   double input = -1.00269;
   input += synapse0x2c7de90();
   input += synapse0x2c72460();
   input += synapse0x2c724a0();
   input += synapse0x2c724e0();
   input += synapse0x2c72730();
   input += synapse0x2c72770();
   input += synapse0x2c727b0();
   input += synapse0x2c72a00();
   input += synapse0x2c72a40();
   input += synapse0x2c72c90();
   input += synapse0x2c72cd0();
   input += synapse0x2c72d10();
   input += synapse0x2c72f60();
   input += synapse0x2c72fa0();
   input += synapse0x2c731f0();
   input += synapse0x2c73230();
   input += synapse0x2c7dce0();
   input += synapse0x2c7dd20();
   input += synapse0x2c73380();
   input += synapse0x2c73890();
   input += synapse0x2c738d0();
   input += synapse0x2c73910();
   input += synapse0x2c73b60();
   input += synapse0x2c73ba0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c7db50() {
   double input = input0x2c7db50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c73be0() {
   double input = 0.238918;
   input += synapse0x2c73450();
   input += synapse0x2c73490();
   input += synapse0x2c734d0();
   input += synapse0x2c73510();
   input += synapse0x2c73e90();
   input += synapse0x2c801e0();
   input += synapse0x2c80220();
   input += synapse0x2c80260();
   input += synapse0x2c802a0();
   input += synapse0x2c802e0();
   input += synapse0x2c80320();
   input += synapse0x2c80360();
   input += synapse0x2c803a0();
   input += synapse0x2c803e0();
   input += synapse0x2c80420();
   input += synapse0x2c80460();
   input += synapse0x2c73d70();
   input += synapse0x2c73db0();
   input += synapse0x2c805b0();
   input += synapse0x2c805f0();
   input += synapse0x2c80630();
   input += synapse0x2c80670();
   input += synapse0x2c806b0();
   input += synapse0x2c806f0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c73be0() {
   double input = input0x2c73be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c80730() {
   double input = -0.304602;
   input += synapse0x2c80a70();
   input += synapse0x2c80ab0();
   input += synapse0x2c80af0();
   input += synapse0x2c80b30();
   input += synapse0x2c80b70();
   input += synapse0x2c80bb0();
   input += synapse0x2c80bf0();
   input += synapse0x2c80c30();
   input += synapse0x2c80c70();
   input += synapse0x2c80cb0();
   input += synapse0x2c80cf0();
   input += synapse0x2c80d30();
   input += synapse0x2c80d70();
   input += synapse0x2c80db0();
   input += synapse0x2c80df0();
   input += synapse0x2c80e30();
   input += synapse0x2c808c0();
   input += synapse0x2c80900();
   input += synapse0x2c80f80();
   input += synapse0x2c80fc0();
   input += synapse0x2c81000();
   input += synapse0x2c81040();
   input += synapse0x2c81080();
   input += synapse0x2c810c0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c80730() {
   double input = input0x2c80730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c81100() {
   double input = 1.70819;
   input += synapse0x2c81440();
   input += synapse0x2c81480();
   input += synapse0x2c814c0();
   input += synapse0x2c81500();
   input += synapse0x2c81540();
   input += synapse0x2c81580();
   input += synapse0x2c815c0();
   input += synapse0x2c81600();
   input += synapse0x2c81640();
   input += synapse0x2c81680();
   input += synapse0x2c816c0();
   input += synapse0x2c81700();
   input += synapse0x2c81740();
   input += synapse0x2c81780();
   input += synapse0x2c817c0();
   input += synapse0x2c81800();
   input += synapse0x2c81290();
   input += synapse0x2c812d0();
   input += synapse0x2c81950();
   input += synapse0x2c81990();
   input += synapse0x2c819d0();
   input += synapse0x2c81a10();
   input += synapse0x2c81a50();
   input += synapse0x2c81a90();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c81100() {
   double input = input0x2c81100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c81ad0() {
   double input = -0.403423;
   input += synapse0x2c81e10();
   input += synapse0x2c81e50();
   input += synapse0x2c81e90();
   input += synapse0x2c81ed0();
   input += synapse0x2c81f10();
   input += synapse0x2c81f50();
   input += synapse0x2c81f90();
   input += synapse0x2c81fd0();
   input += synapse0x2c82010();
   input += synapse0x2c82050();
   input += synapse0x2c82090();
   input += synapse0x2c820d0();
   input += synapse0x2c82110();
   input += synapse0x2c82150();
   input += synapse0x2c82190();
   input += synapse0x2c821d0();
   input += synapse0x2c81c60();
   input += synapse0x2c81ca0();
   input += synapse0x2c82320();
   input += synapse0x2c82360();
   input += synapse0x2c823a0();
   input += synapse0x2c823e0();
   input += synapse0x2c82420();
   input += synapse0x2c82460();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c81ad0() {
   double input = input0x2c81ad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c824a0() {
   double input = 0.0948041;
   input += synapse0x2c827e0();
   input += synapse0x2c82820();
   input += synapse0x2c82860();
   input += synapse0x2c828a0();
   input += synapse0x2c828e0();
   input += synapse0x2c82920();
   input += synapse0x2c82960();
   input += synapse0x2c829a0();
   input += synapse0x2c829e0();
   input += synapse0x2c82a20();
   input += synapse0x2c82a60();
   input += synapse0x2c82aa0();
   input += synapse0x2c82ae0();
   input += synapse0x2c82b20();
   input += synapse0x2c82b60();
   input += synapse0x2c82ba0();
   input += synapse0x2c82630();
   input += synapse0x2c82670();
   input += synapse0x2c82cf0();
   input += synapse0x2c82d30();
   input += synapse0x2c82d70();
   input += synapse0x2c82db0();
   input += synapse0x2c82df0();
   input += synapse0x2c82e30();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c824a0() {
   double input = input0x2c824a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c82e70() {
   double input = -0.636374;
   input += synapse0x2c831b0();
   input += synapse0x2c831f0();
   input += synapse0x2c83230();
   input += synapse0x2c83270();
   input += synapse0x2c832b0();
   input += synapse0x2c832f0();
   input += synapse0x2c83330();
   input += synapse0x2c83370();
   input += synapse0x2c833b0();
   input += synapse0x2c833f0();
   input += synapse0x2c83430();
   input += synapse0x2c83470();
   input += synapse0x2c834b0();
   input += synapse0x2c834f0();
   input += synapse0x2c83530();
   input += synapse0x2c83570();
   input += synapse0x2c83000();
   input += synapse0x2c83040();
   input += synapse0x2c836c0();
   input += synapse0x2c83700();
   input += synapse0x2c83740();
   input += synapse0x2c83780();
   input += synapse0x2c837c0();
   input += synapse0x2c83800();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c82e70() {
   double input = input0x2c82e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c83840() {
   double input = 0.782865;
   input += synapse0x2c83b80();
   input += synapse0x2c83bc0();
   input += synapse0x2c83c00();
   input += synapse0x2c83c40();
   input += synapse0x2c83c80();
   input += synapse0x2c83cc0();
   input += synapse0x2c83d00();
   input += synapse0x2c83d40();
   input += synapse0x2c83d80();
   input += synapse0x2c83dc0();
   input += synapse0x2c83e00();
   input += synapse0x2c83e40();
   input += synapse0x2c83e80();
   input += synapse0x2c83ec0();
   input += synapse0x2c83f00();
   input += synapse0x2c83f40();
   input += synapse0x2c839d0();
   input += synapse0x2c83a10();
   input += synapse0x2c84090();
   input += synapse0x2c840d0();
   input += synapse0x2c84110();
   input += synapse0x2c84150();
   input += synapse0x2c84190();
   input += synapse0x2c841d0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c83840() {
   double input = input0x2c83840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c84210() {
   double input = -1.5167;
   input += synapse0x2c84550();
   input += synapse0x2c84590();
   input += synapse0x2c845d0();
   input += synapse0x2c84610();
   input += synapse0x2c84650();
   input += synapse0x2c84690();
   input += synapse0x2c846d0();
   input += synapse0x2c84710();
   input += synapse0x2c84750();
   input += synapse0x2c84790();
   input += synapse0x2c847d0();
   input += synapse0x2c84810();
   input += synapse0x2c84850();
   input += synapse0x2c84890();
   input += synapse0x2c848d0();
   input += synapse0x2c84910();
   input += synapse0x2c843a0();
   input += synapse0x2c843e0();
   input += synapse0x2c84a60();
   input += synapse0x2c84aa0();
   input += synapse0x2c84ae0();
   input += synapse0x2c84b20();
   input += synapse0x2c84b60();
   input += synapse0x2c84ba0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c84210() {
   double input = input0x2c84210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c84be0() {
   double input = -0.209517;
   input += synapse0x2c6d650();
   input += synapse0x2c6d690();
   input += synapse0x2c6d6d0();
   input += synapse0x2c6d710();
   input += synapse0x2c6d750();
   input += synapse0x2c6d790();
   input += synapse0x2c6d7d0();
   input += synapse0x2c6d810();
   input += synapse0x2c85330();
   input += synapse0x2c85370();
   input += synapse0x2c853b0();
   input += synapse0x2c853f0();
   input += synapse0x2c85430();
   input += synapse0x2c85470();
   input += synapse0x2c854b0();
   input += synapse0x2c854f0();
   input += synapse0x2c84d70();
   input += synapse0x2c84db0();
   input += synapse0x2c85640();
   input += synapse0x2c85680();
   input += synapse0x2c856c0();
   input += synapse0x2c85700();
   input += synapse0x2c85740();
   input += synapse0x2c85780();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c84be0() {
   double input = input0x2c84be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c857c0() {
   double input = 0.120746;
   input += synapse0x2c85b00();
   input += synapse0x2c85b40();
   input += synapse0x2c85b80();
   input += synapse0x2c85bc0();
   input += synapse0x2c85c00();
   input += synapse0x2c85c40();
   input += synapse0x2c85c80();
   input += synapse0x2c85cc0();
   input += synapse0x2c85d00();
   input += synapse0x2c85d40();
   input += synapse0x2c85d80();
   input += synapse0x2c85dc0();
   input += synapse0x2c85e00();
   input += synapse0x2c85e40();
   input += synapse0x2c85e80();
   input += synapse0x2c85ec0();
   input += synapse0x2c85950();
   input += synapse0x2c85990();
   input += synapse0x2c86010();
   input += synapse0x2c86050();
   input += synapse0x2c86090();
   input += synapse0x2c860d0();
   input += synapse0x2c86110();
   input += synapse0x2c86150();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c857c0() {
   double input = input0x2c857c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c86190() {
   double input = 2.26732;
   input += synapse0x2c864d0();
   input += synapse0x2c86510();
   input += synapse0x2c86550();
   input += synapse0x2c86590();
   input += synapse0x2c865d0();
   input += synapse0x2c86610();
   input += synapse0x2c86650();
   input += synapse0x2c86690();
   input += synapse0x2c866d0();
   input += synapse0x2c86710();
   input += synapse0x2c86750();
   input += synapse0x2c86790();
   input += synapse0x2c867d0();
   input += synapse0x2c86810();
   input += synapse0x2c86850();
   input += synapse0x2c86890();
   input += synapse0x2c86320();
   input += synapse0x2c86360();
   input += synapse0x2c76e90();
   input += synapse0x2c76ed0();
   input += synapse0x2c76f10();
   input += synapse0x2c76f50();
   input += synapse0x2c76f90();
   input += synapse0x2c76fd0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c86190() {
   double input = input0x2c86190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c77010() {
   double input = -0.201652;
   input += synapse0x2c77350();
   input += synapse0x2c77390();
   input += synapse0x2c773d0();
   input += synapse0x2c77410();
   input += synapse0x2c77450();
   input += synapse0x2c77490();
   input += synapse0x2c774d0();
   input += synapse0x2c77510();
   input += synapse0x2c77550();
   input += synapse0x2c77590();
   input += synapse0x2c775d0();
   input += synapse0x2c77610();
   input += synapse0x2c77650();
   input += synapse0x2c77690();
   input += synapse0x2c776d0();
   input += synapse0x2c77710();
   input += synapse0x2c771a0();
   input += synapse0x2c771e0();
   input += synapse0x2c77860();
   input += synapse0x2c778a0();
   input += synapse0x2c778e0();
   input += synapse0x2c77920();
   input += synapse0x2c77960();
   input += synapse0x2c779a0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c77010() {
   double input = input0x2c77010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c779e0() {
   double input = 0.400263;
   input += synapse0x2c77d20();
   input += synapse0x2c77d60();
   input += synapse0x2c77da0();
   input += synapse0x2c77de0();
   input += synapse0x2c77e20();
   input += synapse0x2c77e60();
   input += synapse0x2c77ea0();
   input += synapse0x2c77ee0();
   input += synapse0x2c77f20();
   input += synapse0x2c77f60();
   input += synapse0x2c77fa0();
   input += synapse0x2c77fe0();
   input += synapse0x2c78020();
   input += synapse0x2c78060();
   input += synapse0x2c780a0();
   input += synapse0x2c780e0();
   input += synapse0x2c77b70();
   input += synapse0x2c77bb0();
   input += synapse0x2c78230();
   input += synapse0x2c78270();
   input += synapse0x2c782b0();
   input += synapse0x2c782f0();
   input += synapse0x2c78330();
   input += synapse0x2c78370();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c779e0() {
   double input = input0x2c779e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c783b0() {
   double input = 2.04491;
   input += synapse0x2c786f0();
   input += synapse0x2c78730();
   input += synapse0x2c78770();
   input += synapse0x2c787b0();
   input += synapse0x2c787f0();
   input += synapse0x2c78830();
   input += synapse0x2c78870();
   input += synapse0x2c788b0();
   input += synapse0x2c788f0();
   input += synapse0x2c78930();
   input += synapse0x2c78970();
   input += synapse0x2c789b0();
   input += synapse0x2c789f0();
   input += synapse0x2c78a30();
   input += synapse0x2c78a70();
   input += synapse0x2c78ab0();
   input += synapse0x2c78540();
   input += synapse0x2c78580();
   input += synapse0x2c78c00();
   input += synapse0x2c78c40();
   input += synapse0x2c78c80();
   input += synapse0x2c78cc0();
   input += synapse0x2c78d00();
   input += synapse0x2c78d40();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c783b0() {
   double input = input0x2c783b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c8a9f0() {
   double input = -0.321983;
   input += synapse0x2c8ac10();
   input += synapse0x2c8ac50();
   input += synapse0x2c8ac90();
   input += synapse0x2c8acd0();
   input += synapse0x2c8ad10();
   input += synapse0x2c8ad50();
   input += synapse0x2c8ad90();
   input += synapse0x2c8add0();
   input += synapse0x2c8ae10();
   input += synapse0x2c8ae50();
   input += synapse0x2c8ae90();
   input += synapse0x2c8aed0();
   input += synapse0x2c8af10();
   input += synapse0x2c8af50();
   input += synapse0x2c8af90();
   input += synapse0x2c8afd0();
   input += synapse0x2c78d80();
   input += synapse0x2c78dc0();
   input += synapse0x2c8b120();
   input += synapse0x2c8b160();
   input += synapse0x2c8b1a0();
   input += synapse0x2c8b1e0();
   input += synapse0x2c8b220();
   input += synapse0x2c8b260();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c8a9f0() {
   double input = input0x2c8a9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c8b2a0() {
   double input = -0.315488;
   input += synapse0x2c8b5e0();
   input += synapse0x2c8b620();
   input += synapse0x2c8b660();
   input += synapse0x2c8b6a0();
   input += synapse0x2c8b6e0();
   input += synapse0x2c8b720();
   input += synapse0x2c8b760();
   input += synapse0x2c8b7a0();
   input += synapse0x2c8b7e0();
   input += synapse0x2c8b820();
   input += synapse0x2c8b860();
   input += synapse0x2c8b8a0();
   input += synapse0x2c8b8e0();
   input += synapse0x2c8b920();
   input += synapse0x2c8b960();
   input += synapse0x2c8b9a0();
   input += synapse0x2c8b430();
   input += synapse0x2c8b470();
   input += synapse0x2c8baf0();
   input += synapse0x2c8bb30();
   input += synapse0x2c8bb70();
   input += synapse0x2c8bbb0();
   input += synapse0x2c8bbf0();
   input += synapse0x2c8bc30();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c8b2a0() {
   double input = input0x2c8b2a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c8bc70() {
   double input = -0.535998;
   input += synapse0x2c8bfb0();
   input += synapse0x2c8bff0();
   input += synapse0x2c8c030();
   input += synapse0x2c8c070();
   input += synapse0x2c8c0b0();
   input += synapse0x2c8c0f0();
   input += synapse0x2c8c130();
   input += synapse0x2c8c170();
   input += synapse0x2c8c1b0();
   input += synapse0x2c8c1f0();
   input += synapse0x2c8c230();
   input += synapse0x2c8c270();
   input += synapse0x2c8c2b0();
   input += synapse0x2c8c2f0();
   input += synapse0x2c8c330();
   input += synapse0x2c8c370();
   input += synapse0x2c8be00();
   input += synapse0x2c8be40();
   input += synapse0x2c8c4c0();
   input += synapse0x2c8c500();
   input += synapse0x2c8c540();
   input += synapse0x2c8c580();
   input += synapse0x2c8c5c0();
   input += synapse0x2c8c600();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c8bc70() {
   double input = input0x2c8bc70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c8c640() {
   double input = 0.261664;
   input += synapse0x2c8c980();
   input += synapse0x2c8c9c0();
   input += synapse0x2c8ca00();
   input += synapse0x2c8ca40();
   input += synapse0x2c8ca80();
   input += synapse0x2c8cac0();
   input += synapse0x2c8cb00();
   input += synapse0x2c8cb40();
   input += synapse0x2c8cb80();
   input += synapse0x2c8cbc0();
   input += synapse0x2c8cc00();
   input += synapse0x2c8cc40();
   input += synapse0x2c8cc80();
   input += synapse0x2c8ccc0();
   input += synapse0x2c8cd00();
   input += synapse0x2c8cd40();
   input += synapse0x2c8c7d0();
   input += synapse0x2c8c810();
   input += synapse0x2c8ce90();
   input += synapse0x2c8ced0();
   input += synapse0x2c8cf10();
   input += synapse0x2c8cf50();
   input += synapse0x2c8cf90();
   input += synapse0x2c8cfd0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c8c640() {
   double input = input0x2c8c640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c93840() {
   double input = 0.105758;
   input += synapse0x2c69570();
   input += synapse0x2c695b0();
   input += synapse0x2c6aa80();
   input += synapse0x2c6aac0();
   input += synapse0x2c6b450();
   input += synapse0x2c6b490();
   input += synapse0x2c6c220();
   input += synapse0x2c6c260();
   input += synapse0x2c6cbf0();
   input += synapse0x2c6cc30();
   input += synapse0x2c6d5c0();
   input += synapse0x2c6d600();
   input += synapse0x2c6e0a0();
   input += synapse0x2c6e0e0();
   input += synapse0x2c6ea70();
   input += synapse0x2c6eab0();
   input += synapse0x2c6bb50();
   input += synapse0x2c6bb90();
   input += synapse0x2c70620();
   input += synapse0x2c70660();
   input += synapse0x2c70ff0();
   input += synapse0x2c71030();
   input += synapse0x2c719c0();
   input += synapse0x2c71a00();
   input += synapse0x2c72390();
   input += synapse0x2c723d0();
   input += synapse0x2c66500();
   input += synapse0x2c66540();
   input += synapse0x2c74480();
   input += synapse0x2c744c0();
   input += synapse0x2c74e50();
   input += synapse0x2c74e90();
   input += synapse0x2c75820();
   input += synapse0x2c75860();
   input += synapse0x2c761f0();
   input += synapse0x2c76230();
   input += synapse0x2c76bc0();
   input += synapse0x2c76c00();
   input += synapse0x2c6f710();
   input += synapse0x2c6f750();
   input += synapse0x2c78fc0();
   input += synapse0x2c79000();
   input += synapse0x2c79950();
   input += synapse0x2c79990();
   input += synapse0x2c7a320();
   input += synapse0x2c7a360();
   input += synapse0x2c7acf0();
   input += synapse0x2c7ad30();
   input += synapse0x2c7b6c0();
   input += synapse0x2c7b700();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c93840() {
   double input = input0x2c93840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c93be0() {
   double input = -0.136329;
   input += synapse0x2c7de00();
   input += synapse0x2c7de40();
   input += synapse0x2c733c0();
   input += synapse0x2c73400();
   input += synapse0x2c809e0();
   input += synapse0x2c80a20();
   input += synapse0x2c813b0();
   input += synapse0x2c813f0();
   input += synapse0x2c81d80();
   input += synapse0x2c81dc0();
   input += synapse0x2c82750();
   input += synapse0x2c82790();
   input += synapse0x2c83120();
   input += synapse0x2c83160();
   input += synapse0x2c83af0();
   input += synapse0x2c83b30();
   input += synapse0x2c844c0();
   input += synapse0x2c84500();
   input += synapse0x2c84e90();
   input += synapse0x2c84ed0();
   input += synapse0x2c85a70();
   input += synapse0x2c85ab0();
   input += synapse0x2c86440();
   input += synapse0x2c86480();
   input += synapse0x2c772c0();
   input += synapse0x2c77300();
   input += synapse0x2c77c90();
   input += synapse0x2c77cd0();
   input += synapse0x2c78660();
   input += synapse0x2c786a0();
   input += synapse0x2c8ab80();
   input += synapse0x2c8abc0();
   input += synapse0x2c8b550();
   input += synapse0x2c8b590();
   input += synapse0x2c8bf20();
   input += synapse0x2c8bf60();
   input += synapse0x2c8c8f0();
   input += synapse0x2c8c930();
   input += synapse0x2c687e0();
   input += synapse0x2c68820();
   input += synapse0x2c7c090();
   input += synapse0x2c7c0d0();
   input += synapse0x2c8d010();
   input += synapse0x2c8d050();
   input += synapse0x2c8d090();
   input += synapse0x2c8d0d0();
   input += synapse0x2c93f80();
   input += synapse0x2c93fc0();
   input += synapse0x2c94000();
   input += synapse0x2c94040();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c93be0() {
   double input = input0x2c93be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c94080() {
   double input = -0.0131728;
   input += synapse0x2c943c0();
   input += synapse0x2c94400();
   input += synapse0x2c94440();
   input += synapse0x2c94480();
   input += synapse0x2c944c0();
   input += synapse0x2c94500();
   input += synapse0x2c94540();
   input += synapse0x2c94580();
   input += synapse0x2c945c0();
   input += synapse0x2c94600();
   input += synapse0x2c94640();
   input += synapse0x2c94680();
   input += synapse0x2c946c0();
   input += synapse0x2c94700();
   input += synapse0x2c94740();
   input += synapse0x2c94780();
   input += synapse0x2c94210();
   input += synapse0x2c94250();
   input += synapse0x2c948d0();
   input += synapse0x2c94910();
   input += synapse0x2c94950();
   input += synapse0x2c94990();
   input += synapse0x2c949d0();
   input += synapse0x2c94a10();
   input += synapse0x2c94a50();
   input += synapse0x2c94a90();
   input += synapse0x2c94ad0();
   input += synapse0x2c94b10();
   input += synapse0x2c94b50();
   input += synapse0x2c94b90();
   input += synapse0x2c94bd0();
   input += synapse0x2c94c10();
   input += synapse0x2c947c0();
   input += synapse0x2c94800();
   input += synapse0x2c94840();
   input += synapse0x2c94880();
   input += synapse0x2c94e60();
   input += synapse0x2c94ea0();
   input += synapse0x2c94ee0();
   input += synapse0x2c94f20();
   input += synapse0x2c94f60();
   input += synapse0x2c94fa0();
   input += synapse0x2c94fe0();
   input += synapse0x2c95020();
   input += synapse0x2c95060();
   input += synapse0x2c950a0();
   input += synapse0x2c950e0();
   input += synapse0x2c95120();
   input += synapse0x2c95160();
   input += synapse0x2c951a0();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c94080() {
   double input = input0x2c94080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c951e0() {
   double input = -0.259718;
   input += synapse0x2c95520();
   input += synapse0x2c95560();
   input += synapse0x2c955a0();
   input += synapse0x2c955e0();
   input += synapse0x2c95620();
   input += synapse0x2c95660();
   input += synapse0x2c956a0();
   input += synapse0x2c956e0();
   input += synapse0x2c95720();
   input += synapse0x2c95760();
   input += synapse0x2c957a0();
   input += synapse0x2c957e0();
   input += synapse0x2c95820();
   input += synapse0x2c95860();
   input += synapse0x2c958a0();
   input += synapse0x2c958e0();
   input += synapse0x2c95370();
   input += synapse0x2c953b0();
   input += synapse0x2c95a30();
   input += synapse0x2c95a70();
   input += synapse0x2c95ab0();
   input += synapse0x2c95af0();
   input += synapse0x2c95b30();
   input += synapse0x2c95b70();
   input += synapse0x2c95bb0();
   input += synapse0x2c95bf0();
   input += synapse0x2c95c30();
   input += synapse0x2c95c70();
   input += synapse0x2c95cb0();
   input += synapse0x2c95cf0();
   input += synapse0x2c95d30();
   input += synapse0x2c95d70();
   input += synapse0x2c95920();
   input += synapse0x2c95960();
   input += synapse0x2c959a0();
   input += synapse0x2c959e0();
   input += synapse0x2c95fc0();
   input += synapse0x2c96000();
   input += synapse0x2c96040();
   input += synapse0x2c96080();
   input += synapse0x2c960c0();
   input += synapse0x2c96100();
   input += synapse0x2c96140();
   input += synapse0x2c96180();
   input += synapse0x2c961c0();
   input += synapse0x2c96200();
   input += synapse0x2c96240();
   input += synapse0x2c96280();
   input += synapse0x2c962c0();
   input += synapse0x2c96300();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c951e0() {
   double input = input0x2c951e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c96340() {
   double input = 0.673468;
   input += synapse0x2c96680();
   input += synapse0x2c966c0();
   input += synapse0x2c96700();
   input += synapse0x2c96740();
   input += synapse0x2c96780();
   input += synapse0x2c967c0();
   input += synapse0x2c96800();
   input += synapse0x2c96840();
   input += synapse0x2c96880();
   input += synapse0x2c968c0();
   input += synapse0x2c96900();
   input += synapse0x2c96940();
   input += synapse0x2c96980();
   input += synapse0x2c969c0();
   input += synapse0x2c96a00();
   input += synapse0x2c96a40();
   input += synapse0x2c964d0();
   input += synapse0x2c96510();
   input += synapse0x2c96b90();
   input += synapse0x2c96bd0();
   input += synapse0x2c96c10();
   input += synapse0x2c96c50();
   input += synapse0x2c96c90();
   input += synapse0x2c96cd0();
   input += synapse0x2c96d10();
   input += synapse0x2c96d50();
   input += synapse0x2c96d90();
   input += synapse0x2c96dd0();
   input += synapse0x2c96e10();
   input += synapse0x2c96e50();
   input += synapse0x2c96e90();
   input += synapse0x2c96ed0();
   input += synapse0x2c96a80();
   input += synapse0x2c96ac0();
   input += synapse0x2c96b00();
   input += synapse0x2c96b40();
   input += synapse0x2c97120();
   input += synapse0x2c97160();
   input += synapse0x2c971a0();
   input += synapse0x2c971e0();
   input += synapse0x2c97220();
   input += synapse0x2c97260();
   input += synapse0x2c972a0();
   input += synapse0x2c972e0();
   input += synapse0x2c97320();
   input += synapse0x2c97360();
   input += synapse0x2c973a0();
   input += synapse0x2c973e0();
   input += synapse0x2c97420();
   input += synapse0x2c97460();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c96340() {
   double input = input0x2c96340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLdL::input0x2c974a0() {
   double input = -3.1283;
   input += synapse0x2c68580();
   input += synapse0x2c976c0();
   input += synapse0x2c97700();
   input += synapse0x2c97740();
   input += synapse0x2c97780();
   return input;
}

double NNfunction_sb_dLdL::neuron0x2c974a0() {
   double input = input0x2c974a0();
   return (input * 1)+0;
}

double NNfunction_sb_dLdL::synapse0x2a233d0() {
   return (neuron0x2c63560()*-0.00793589);
}

double NNfunction_sb_dLdL::synapse0x2c63420() {
   return (neuron0x2c638a0()*-0.00971302);
}

double NNfunction_sb_dLdL::synapse0x2c63460() {
   return (neuron0x2c63be0()*-0.0322151);
}

double NNfunction_sb_dLdL::synapse0x2c68870() {
   return (neuron0x2c63f20()*0.0340576);
}

double NNfunction_sb_dLdL::synapse0x2c688b0() {
   return (neuron0x2c64260()*-0.0227405);
}

double NNfunction_sb_dLdL::synapse0x2c688f0() {
   return (neuron0x2c645a0()*-0.000385383);
}

double NNfunction_sb_dLdL::synapse0x2c68930() {
   return (neuron0x2c648e0()*0.00985057);
}

double NNfunction_sb_dLdL::synapse0x2c68970() {
   return (neuron0x2c64c20()*0.0405746);
}

double NNfunction_sb_dLdL::synapse0x2c689b0() {
   return (neuron0x2c64f60()*0.282329);
}

double NNfunction_sb_dLdL::synapse0x2c689f0() {
   return (neuron0x2c652a0()*0.0487612);
}

double NNfunction_sb_dLdL::synapse0x2c68a30() {
   return (neuron0x2c655e0()*-0.384345);
}

double NNfunction_sb_dLdL::synapse0x2c68a70() {
   return (neuron0x2c65920()*-1.0609);
}

double NNfunction_sb_dLdL::synapse0x2c68ab0() {
   return (neuron0x2c65c60()*-0.00959949);
}

double NNfunction_sb_dLdL::synapse0x2c68af0() {
   return (neuron0x2c65fa0()*0.0276);
}

double NNfunction_sb_dLdL::synapse0x2c68b30() {
   return (neuron0x2c662e0()*0.023172);
}

double NNfunction_sb_dLdL::synapse0x2c68b70() {
   return (neuron0x2c66620()*-0.00396122);
}

double NNfunction_sb_dLdL::synapse0x2c63390() {
   return (neuron0x2c66960()*-0.0186824);
}

double NNfunction_sb_dLdL::synapse0x2c633d0() {
   return (neuron0x2c66ec0()*-0.0318894);
}

double NNfunction_sb_dLdL::synapse0x2a14c70() {
   return (neuron0x2c670e0()*-0.0308873);
}

double NNfunction_sb_dLdL::synapse0x2a14cb0() {
   return (neuron0x2c67420()*0.0705355);
}

double NNfunction_sb_dLdL::synapse0x2c68dd0() {
   return (neuron0x2c67760()*0.0171607);
}

double NNfunction_sb_dLdL::synapse0x2c68e10() {
   return (neuron0x2c67aa0()*-0.00464887);
}

double NNfunction_sb_dLdL::synapse0x2c68e50() {
   return (neuron0x2c67de0()*-0.000200858);
}

double NNfunction_sb_dLdL::synapse0x2c68e90() {
   return (neuron0x2c68120()*0.0044422);
}

double NNfunction_sb_dLdL::synapse0x2c69210() {
   return (neuron0x2c63560()*0.0325124);
}

double NNfunction_sb_dLdL::synapse0x2c69250() {
   return (neuron0x2c638a0()*-0.048039);
}

double NNfunction_sb_dLdL::synapse0x2c69290() {
   return (neuron0x2c63be0()*-0.377832);
}

double NNfunction_sb_dLdL::synapse0x2c692d0() {
   return (neuron0x2c63f20()*-0.626373);
}

double NNfunction_sb_dLdL::synapse0x2c69310() {
   return (neuron0x2c64260()*-0.144234);
}

double NNfunction_sb_dLdL::synapse0x2c69350() {
   return (neuron0x2c645a0()*0.0696597);
}

double NNfunction_sb_dLdL::synapse0x2c69390() {
   return (neuron0x2c648e0()*-0.273199);
}

double NNfunction_sb_dLdL::synapse0x2c693d0() {
   return (neuron0x2c64c20()*0.134818);
}

double NNfunction_sb_dLdL::synapse0x2c69410() {
   return (neuron0x2c64f60()*-0.0586463);
}

double NNfunction_sb_dLdL::synapse0x2c68cc0() {
   return (neuron0x2c652a0()*-0.0515766);
}

double NNfunction_sb_dLdL::synapse0x2c68d00() {
   return (neuron0x2c655e0()*0.0565256);
}

double NNfunction_sb_dLdL::synapse0x2c68d40() {
   return (neuron0x2c65920()*0.185167);
}

double NNfunction_sb_dLdL::synapse0x2c68d80() {
   return (neuron0x2c65c60()*0.18131);
}

double NNfunction_sb_dLdL::synapse0x2c69660() {
   return (neuron0x2c65fa0()*-0.213894);
}

double NNfunction_sb_dLdL::synapse0x2c696a0() {
   return (neuron0x2c662e0()*0.0977561);
}

double NNfunction_sb_dLdL::synapse0x2c696e0() {
   return (neuron0x2c66620()*0.139825);
}

double NNfunction_sb_dLdL::synapse0x2c69060() {
   return (neuron0x2c66960()*-0.372106);
}

double NNfunction_sb_dLdL::synapse0x2c690a0() {
   return (neuron0x2c66ec0()*0.174603);
}

double NNfunction_sb_dLdL::synapse0x2c69830() {
   return (neuron0x2c670e0()*0.114175);
}

double NNfunction_sb_dLdL::synapse0x2c69870() {
   return (neuron0x2c67420()*0.149736);
}

double NNfunction_sb_dLdL::synapse0x2c698b0() {
   return (neuron0x2c67760()*-0.0540686);
}

double NNfunction_sb_dLdL::synapse0x2c698f0() {
   return (neuron0x2c67aa0()*-0.0125739);
}

double NNfunction_sb_dLdL::synapse0x2c69930() {
   return (neuron0x2c67de0()*-0.00896674);
}

double NNfunction_sb_dLdL::synapse0x2c69970() {
   return (neuron0x2c68120()*0.0519793);
}

double NNfunction_sb_dLdL::synapse0x2c69cf0() {
   return (neuron0x2c63560()*0.0552696);
}

double NNfunction_sb_dLdL::synapse0x2c69d30() {
   return (neuron0x2c638a0()*-0.086154);
}

double NNfunction_sb_dLdL::synapse0x2c69d70() {
   return (neuron0x2c63be0()*-0.147439);
}

double NNfunction_sb_dLdL::synapse0x2c69db0() {
   return (neuron0x2c63f20()*-0.101679);
}

double NNfunction_sb_dLdL::synapse0x2c69df0() {
   return (neuron0x2c64260()*0.421784);
}

double NNfunction_sb_dLdL::synapse0x2c69e30() {
   return (neuron0x2c645a0()*0.262275);
}

double NNfunction_sb_dLdL::synapse0x2c69e70() {
   return (neuron0x2c648e0()*-0.120475);
}

double NNfunction_sb_dLdL::synapse0x2c69eb0() {
   return (neuron0x2c64c20()*0.214248);
}

double NNfunction_sb_dLdL::synapse0x2c69ef0() {
   return (neuron0x2c64f60()*0.236464);
}

double NNfunction_sb_dLdL::synapse0x2c69f30() {
   return (neuron0x2c652a0()*-0.176695);
}

double NNfunction_sb_dLdL::synapse0x2c69f70() {
   return (neuron0x2c655e0()*-0.281368);
}

double NNfunction_sb_dLdL::synapse0x2c69fb0() {
   return (neuron0x2c65920()*-1.02493);
}

double NNfunction_sb_dLdL::synapse0x2c69ff0() {
   return (neuron0x2c65c60()*-0.059004);
}

double NNfunction_sb_dLdL::synapse0x2c6a030() {
   return (neuron0x2c65fa0()*-0.34929);
}

double NNfunction_sb_dLdL::synapse0x2c6a070() {
   return (neuron0x2c662e0()*0.27266);
}

double NNfunction_sb_dLdL::synapse0x2c6a0b0() {
   return (neuron0x2c66620()*-0.0219913);
}

double NNfunction_sb_dLdL::synapse0x2c69b40() {
   return (neuron0x2c66960()*-0.0850844);
}

double NNfunction_sb_dLdL::synapse0x2c69b80() {
   return (neuron0x2c66ec0()*0.14632);
}

double NNfunction_sb_dLdL::synapse0x2a22ac0() {
   return (neuron0x2c670e0()*0.0670054);
}

double NNfunction_sb_dLdL::synapse0x2a22b00() {
   return (neuron0x2c67420()*0.149427);
}

double NNfunction_sb_dLdL::synapse0x2c525f0() {
   return (neuron0x2c67760()*-0.0183098);
}

double NNfunction_sb_dLdL::synapse0x2c52630() {
   return (neuron0x2c67aa0()*-0.0440306);
}

double NNfunction_sb_dLdL::synapse0x2c52670() {
   return (neuron0x2c67de0()*0.076263);
}

double NNfunction_sb_dLdL::synapse0x2c634a0() {
   return (neuron0x2c68120()*0.296522);
}

double NNfunction_sb_dLdL::synapse0x2c69600() {
   return (neuron0x2c63560()*0.055187);
}

double NNfunction_sb_dLdL::synapse0x2c634e0() {
   return (neuron0x2c638a0()*-0.0608681);
}

double NNfunction_sb_dLdL::synapse0x2c63520() {
   return (neuron0x2c63be0()*-0.0636876);
}

double NNfunction_sb_dLdL::synapse0x2c6a200() {
   return (neuron0x2c63f20()*0.0331251);
}

double NNfunction_sb_dLdL::synapse0x2c6a240() {
   return (neuron0x2c64260()*-0.173577);
}

double NNfunction_sb_dLdL::synapse0x2c6a280() {
   return (neuron0x2c645a0()*-0.160872);
}

double NNfunction_sb_dLdL::synapse0x2c6a2c0() {
   return (neuron0x2c648e0()*-0.256049);
}

double NNfunction_sb_dLdL::synapse0x2c6a300() {
   return (neuron0x2c64c20()*-0.376998);
}

double NNfunction_sb_dLdL::synapse0x2c6a340() {
   return (neuron0x2c64f60()*0.0102666);
}

double NNfunction_sb_dLdL::synapse0x2c6a380() {
   return (neuron0x2c652a0()*-0.0132872);
}

double NNfunction_sb_dLdL::synapse0x2c6a3c0() {
   return (neuron0x2c655e0()*0.0550849);
}

double NNfunction_sb_dLdL::synapse0x2c6a400() {
   return (neuron0x2c65920()*-0.567457);
}

double NNfunction_sb_dLdL::synapse0x2c6a440() {
   return (neuron0x2c65c60()*-0.161569);
}

double NNfunction_sb_dLdL::synapse0x2c6a480() {
   return (neuron0x2c65fa0()*0.161663);
}

double NNfunction_sb_dLdL::synapse0x2c6a4c0() {
   return (neuron0x2c662e0()*-0.168739);
}

double NNfunction_sb_dLdL::synapse0x2c6a500() {
   return (neuron0x2c66620()*0.30745);
}

double NNfunction_sb_dLdL::synapse0x2c69450() {
   return (neuron0x2c66960()*0.213733);
}

double NNfunction_sb_dLdL::synapse0x2c69490() {
   return (neuron0x2c66ec0()*0.0278079);
}

double NNfunction_sb_dLdL::synapse0x2c6a650() {
   return (neuron0x2c670e0()*-0.0690722);
}

double NNfunction_sb_dLdL::synapse0x2c6a690() {
   return (neuron0x2c67420()*-0.0724212);
}

double NNfunction_sb_dLdL::synapse0x2c6a6d0() {
   return (neuron0x2c67760()*-0.0263323);
}

double NNfunction_sb_dLdL::synapse0x2c6a710() {
   return (neuron0x2c67aa0()*-0.00250743);
}

double NNfunction_sb_dLdL::synapse0x2c6a750() {
   return (neuron0x2c67de0()*0.0395412);
}

double NNfunction_sb_dLdL::synapse0x2c6a790() {
   return (neuron0x2c68120()*0.0247195);
}

double NNfunction_sb_dLdL::synapse0x2c6ab10() {
   return (neuron0x2c63560()*0.0104683);
}

double NNfunction_sb_dLdL::synapse0x2c6ab50() {
   return (neuron0x2c638a0()*-0.0166411);
}

double NNfunction_sb_dLdL::synapse0x2c6ab90() {
   return (neuron0x2c63be0()*0.889235);
}

double NNfunction_sb_dLdL::synapse0x2c6abd0() {
   return (neuron0x2c63f20()*0.752695);
}

double NNfunction_sb_dLdL::synapse0x2c6ac10() {
   return (neuron0x2c64260()*-0.0349373);
}

double NNfunction_sb_dLdL::synapse0x2c6ac50() {
   return (neuron0x2c645a0()*-0.00331807);
}

double NNfunction_sb_dLdL::synapse0x2c6ac90() {
   return (neuron0x2c648e0()*-0.0273677);
}

double NNfunction_sb_dLdL::synapse0x2c6acd0() {
   return (neuron0x2c64c20()*-0.0337133);
}

double NNfunction_sb_dLdL::synapse0x2c6ad10() {
   return (neuron0x2c64f60()*0.00536406);
}

double NNfunction_sb_dLdL::synapse0x2c6ad50() {
   return (neuron0x2c652a0()*-0.0103693);
}

double NNfunction_sb_dLdL::synapse0x2c6ad90() {
   return (neuron0x2c655e0()*0.0142618);
}

double NNfunction_sb_dLdL::synapse0x2c6add0() {
   return (neuron0x2c65920()*-0.205698);
}

double NNfunction_sb_dLdL::synapse0x2c6ae10() {
   return (neuron0x2c65c60()*0.00447626);
}

double NNfunction_sb_dLdL::synapse0x2c6ae50() {
   return (neuron0x2c65fa0()*0.00963892);
}

double NNfunction_sb_dLdL::synapse0x2c6ae90() {
   return (neuron0x2c662e0()*0.0291689);
}

double NNfunction_sb_dLdL::synapse0x2c6aed0() {
   return (neuron0x2c66620()*-0.00331099);
}

double NNfunction_sb_dLdL::synapse0x2c6a960() {
   return (neuron0x2c66960()*-0.0636896);
}

double NNfunction_sb_dLdL::synapse0x2c6a9a0() {
   return (neuron0x2c66ec0()*0.0261005);
}

double NNfunction_sb_dLdL::synapse0x2c6b020() {
   return (neuron0x2c670e0()*-0.0099881);
}

double NNfunction_sb_dLdL::synapse0x2c6b060() {
   return (neuron0x2c67420()*0.0138206);
}

double NNfunction_sb_dLdL::synapse0x2c6b0a0() {
   return (neuron0x2c67760()*0.00971555);
}

double NNfunction_sb_dLdL::synapse0x2c6b0e0() {
   return (neuron0x2c67aa0()*0.0141476);
}

double NNfunction_sb_dLdL::synapse0x2c6b120() {
   return (neuron0x2c67de0()*0.0228534);
}

double NNfunction_sb_dLdL::synapse0x2c6b160() {
   return (neuron0x2c68120()*-0.00261614);
}

double NNfunction_sb_dLdL::synapse0x2c6b4e0() {
   return (neuron0x2c63560()*-0.0112744);
}

double NNfunction_sb_dLdL::synapse0x2c6b520() {
   return (neuron0x2c638a0()*-0.0121766);
}

double NNfunction_sb_dLdL::synapse0x2c6b560() {
   return (neuron0x2c63be0()*-0.0420357);
}

double NNfunction_sb_dLdL::synapse0x2c6b5a0() {
   return (neuron0x2c63f20()*0.121692);
}

double NNfunction_sb_dLdL::synapse0x2c6b5e0() {
   return (neuron0x2c64260()*-0.00699546);
}

double NNfunction_sb_dLdL::synapse0x2c6b620() {
   return (neuron0x2c645a0()*0.00736813);
}

double NNfunction_sb_dLdL::synapse0x2c6b660() {
   return (neuron0x2c648e0()*-0.0184947);
}

double NNfunction_sb_dLdL::synapse0x2c6b6a0() {
   return (neuron0x2c64c20()*-0.023835);
}

double NNfunction_sb_dLdL::synapse0x2c6b6e0() {
   return (neuron0x2c64f60()*0.0634999);
}

double NNfunction_sb_dLdL::synapse0x2a22e30() {
   return (neuron0x2c652a0()*-0.0116733);
}

double NNfunction_sb_dLdL::synapse0x2a22e70() {
   return (neuron0x2c655e0()*0.000979535);
}

double NNfunction_sb_dLdL::synapse0x2a22eb0() {
   return (neuron0x2c65920()*3.37169);
}

double NNfunction_sb_dLdL::synapse0x2a22ef0() {
   return (neuron0x2c65c60()*-0.0908014);
}

double NNfunction_sb_dLdL::synapse0x2a22f30() {
   return (neuron0x2c65fa0()*0.0177232);
}

double NNfunction_sb_dLdL::synapse0x2a22f70() {
   return (neuron0x2c662e0()*-0.043869);
}

double NNfunction_sb_dLdL::synapse0x2a22fb0() {
   return (neuron0x2c66620()*-0.0432226);
}

double NNfunction_sb_dLdL::synapse0x2c6b330() {
   return (neuron0x2c66960()*0.0382089);
}

double NNfunction_sb_dLdL::synapse0x2c6b370() {
   return (neuron0x2c66ec0()*-0.0450822);
}

double NNfunction_sb_dLdL::synapse0x2a23100() {
   return (neuron0x2c670e0()*-0.0439675);
}

double NNfunction_sb_dLdL::synapse0x2a23140() {
   return (neuron0x2c67420()*-0.0309441);
}

double NNfunction_sb_dLdL::synapse0x2a23180() {
   return (neuron0x2c67760()*-0.000271616);
}

double NNfunction_sb_dLdL::synapse0x2a231c0() {
   return (neuron0x2c67aa0()*-0.00734121);
}

double NNfunction_sb_dLdL::synapse0x2a23200() {
   return (neuron0x2c67de0()*-0.0100087);
}

double NNfunction_sb_dLdL::synapse0x2c6bf30() {
   return (neuron0x2c68120()*-0.00493013);
}

double NNfunction_sb_dLdL::synapse0x2c6c2b0() {
   return (neuron0x2c63560()*0.0291161);
}

double NNfunction_sb_dLdL::synapse0x2c6c2f0() {
   return (neuron0x2c638a0()*-0.167106);
}

double NNfunction_sb_dLdL::synapse0x2c6c330() {
   return (neuron0x2c63be0()*-0.489827);
}

double NNfunction_sb_dLdL::synapse0x2c6c370() {
   return (neuron0x2c63f20()*0.0670054);
}

double NNfunction_sb_dLdL::synapse0x2c6c3b0() {
   return (neuron0x2c64260()*0.547037);
}

double NNfunction_sb_dLdL::synapse0x2c6c3f0() {
   return (neuron0x2c645a0()*-0.113334);
}

double NNfunction_sb_dLdL::synapse0x2c6c430() {
   return (neuron0x2c648e0()*-0.292634);
}

double NNfunction_sb_dLdL::synapse0x2c6c470() {
   return (neuron0x2c64c20()*0.108305);
}

double NNfunction_sb_dLdL::synapse0x2c6c4b0() {
   return (neuron0x2c64f60()*0.0943383);
}

double NNfunction_sb_dLdL::synapse0x2c6c4f0() {
   return (neuron0x2c652a0()*-0.0159784);
}

double NNfunction_sb_dLdL::synapse0x2c6c530() {
   return (neuron0x2c655e0()*0.0579884);
}

double NNfunction_sb_dLdL::synapse0x2c6c570() {
   return (neuron0x2c65920()*-0.354299);
}

double NNfunction_sb_dLdL::synapse0x2c6c5b0() {
   return (neuron0x2c65c60()*0.180598);
}

double NNfunction_sb_dLdL::synapse0x2c6c5f0() {
   return (neuron0x2c65fa0()*-0.0293888);
}

double NNfunction_sb_dLdL::synapse0x2c6c630() {
   return (neuron0x2c662e0()*-0.386656);
}

double NNfunction_sb_dLdL::synapse0x2c6c670() {
   return (neuron0x2c66620()*-0.0915564);
}

double NNfunction_sb_dLdL::synapse0x2c6c100() {
   return (neuron0x2c66960()*-0.191739);
}

double NNfunction_sb_dLdL::synapse0x2c6c140() {
   return (neuron0x2c66ec0()*0.105608);
}

double NNfunction_sb_dLdL::synapse0x2c6c7c0() {
   return (neuron0x2c670e0()*0.00653134);
}

double NNfunction_sb_dLdL::synapse0x2c6c800() {
   return (neuron0x2c67420()*0.0558602);
}

double NNfunction_sb_dLdL::synapse0x2c6c840() {
   return (neuron0x2c67760()*0.0983536);
}

double NNfunction_sb_dLdL::synapse0x2c6c880() {
   return (neuron0x2c67aa0()*-0.0135838);
}

double NNfunction_sb_dLdL::synapse0x2c6c8c0() {
   return (neuron0x2c67de0()*-0.0289423);
}

double NNfunction_sb_dLdL::synapse0x2c6c900() {
   return (neuron0x2c68120()*-0.0413307);
}

double NNfunction_sb_dLdL::synapse0x2c6cc80() {
   return (neuron0x2c63560()*0.0746113);
}

double NNfunction_sb_dLdL::synapse0x2c6ccc0() {
   return (neuron0x2c638a0()*0.112392);
}

double NNfunction_sb_dLdL::synapse0x2c6cd00() {
   return (neuron0x2c63be0()*0.164253);
}

double NNfunction_sb_dLdL::synapse0x2c6cd40() {
   return (neuron0x2c63f20()*-0.0136571);
}

double NNfunction_sb_dLdL::synapse0x2c6cd80() {
   return (neuron0x2c64260()*-0.00440565);
}

double NNfunction_sb_dLdL::synapse0x2c6cdc0() {
   return (neuron0x2c645a0()*0.0838939);
}

double NNfunction_sb_dLdL::synapse0x2c6ce00() {
   return (neuron0x2c648e0()*0.0031649);
}

double NNfunction_sb_dLdL::synapse0x2c6ce40() {
   return (neuron0x2c64c20()*0.113795);
}

double NNfunction_sb_dLdL::synapse0x2c6ce80() {
   return (neuron0x2c64f60()*-0.166197);
}

double NNfunction_sb_dLdL::synapse0x2c6cec0() {
   return (neuron0x2c652a0()*0.0614038);
}

double NNfunction_sb_dLdL::synapse0x2c6cf00() {
   return (neuron0x2c655e0()*0.0727977);
}

double NNfunction_sb_dLdL::synapse0x2c6cf40() {
   return (neuron0x2c65920()*-0.792972);
}

double NNfunction_sb_dLdL::synapse0x2c6cf80() {
   return (neuron0x2c65c60()*-0.130112);
}

double NNfunction_sb_dLdL::synapse0x2c6cfc0() {
   return (neuron0x2c65fa0()*-0.0634222);
}

double NNfunction_sb_dLdL::synapse0x2c6d000() {
   return (neuron0x2c662e0()*-0.261882);
}

double NNfunction_sb_dLdL::synapse0x2c6d040() {
   return (neuron0x2c66620()*0.132875);
}

double NNfunction_sb_dLdL::synapse0x2c6cad0() {
   return (neuron0x2c66960()*0.117619);
}

double NNfunction_sb_dLdL::synapse0x2c6cb10() {
   return (neuron0x2c66ec0()*-0.250528);
}

double NNfunction_sb_dLdL::synapse0x2c6d190() {
   return (neuron0x2c670e0()*-0.0512075);
}

double NNfunction_sb_dLdL::synapse0x2c6d1d0() {
   return (neuron0x2c67420()*0.0741059);
}

double NNfunction_sb_dLdL::synapse0x2c6d210() {
   return (neuron0x2c67760()*0.331223);
}

double NNfunction_sb_dLdL::synapse0x2c6d250() {
   return (neuron0x2c67aa0()*-0.023412);
}

double NNfunction_sb_dLdL::synapse0x2c6d290() {
   return (neuron0x2c67de0()*0.0313237);
}

double NNfunction_sb_dLdL::synapse0x2c6d2d0() {
   return (neuron0x2c68120()*-0.167717);
}

double NNfunction_sb_dLdL::synapse0x2c66db0() {
   return (neuron0x2c63560()*0.133864);
}

double NNfunction_sb_dLdL::synapse0x2c66df0() {
   return (neuron0x2c638a0()*0.100519);
}

double NNfunction_sb_dLdL::synapse0x2c66e30() {
   return (neuron0x2c63be0()*-0.08863);
}

double NNfunction_sb_dLdL::synapse0x2c66e70() {
   return (neuron0x2c63f20()*0.0740335);
}

double NNfunction_sb_dLdL::synapse0x2c6d860() {
   return (neuron0x2c64260()*-0.0988311);
}

double NNfunction_sb_dLdL::synapse0x2c6d8a0() {
   return (neuron0x2c645a0()*0.389052);
}

double NNfunction_sb_dLdL::synapse0x2c6d8e0() {
   return (neuron0x2c648e0()*-0.147022);
}

double NNfunction_sb_dLdL::synapse0x2c6d920() {
   return (neuron0x2c64c20()*-0.168121);
}

double NNfunction_sb_dLdL::synapse0x2c6d960() {
   return (neuron0x2c64f60()*0.0447229);
}

double NNfunction_sb_dLdL::synapse0x2c6d9a0() {
   return (neuron0x2c652a0()*0.0498346);
}

double NNfunction_sb_dLdL::synapse0x2c6d9e0() {
   return (neuron0x2c655e0()*0.034324);
}

double NNfunction_sb_dLdL::synapse0x2c6da20() {
   return (neuron0x2c65920()*-1.32208);
}

double NNfunction_sb_dLdL::synapse0x2c6da60() {
   return (neuron0x2c65c60()*-0.0802749);
}

double NNfunction_sb_dLdL::synapse0x2c6daa0() {
   return (neuron0x2c65fa0()*-0.131356);
}

double NNfunction_sb_dLdL::synapse0x2c6dae0() {
   return (neuron0x2c662e0()*-0.0288806);
}

double NNfunction_sb_dLdL::synapse0x2c6db20() {
   return (neuron0x2c66620()*-0.156298);
}

double NNfunction_sb_dLdL::synapse0x2c6d4a0() {
   return (neuron0x2c66960()*-0.087276);
}

double NNfunction_sb_dLdL::synapse0x2c6d4e0() {
   return (neuron0x2c66ec0()*0.0239957);
}

double NNfunction_sb_dLdL::synapse0x2c6dc70() {
   return (neuron0x2c670e0()*0.0235322);
}

double NNfunction_sb_dLdL::synapse0x2c6dcb0() {
   return (neuron0x2c67420()*0.0287019);
}

double NNfunction_sb_dLdL::synapse0x2c6dcf0() {
   return (neuron0x2c67760()*0.061612);
}

double NNfunction_sb_dLdL::synapse0x2c6dd30() {
   return (neuron0x2c67aa0()*0.0782146);
}

double NNfunction_sb_dLdL::synapse0x2c6dd70() {
   return (neuron0x2c67de0()*-0.013287);
}

double NNfunction_sb_dLdL::synapse0x2c6ddb0() {
   return (neuron0x2c68120()*0.0065899);
}

double NNfunction_sb_dLdL::synapse0x2c6e130() {
   return (neuron0x2c63560()*0.00697643);
}

double NNfunction_sb_dLdL::synapse0x2c6e170() {
   return (neuron0x2c638a0()*-0.0367776);
}

double NNfunction_sb_dLdL::synapse0x2c6e1b0() {
   return (neuron0x2c63be0()*0.0322121);
}

double NNfunction_sb_dLdL::synapse0x2c6e1f0() {
   return (neuron0x2c63f20()*-2.50215);
}

double NNfunction_sb_dLdL::synapse0x2c6e230() {
   return (neuron0x2c64260()*0.0224673);
}

double NNfunction_sb_dLdL::synapse0x2c6e270() {
   return (neuron0x2c645a0()*-0.0014772);
}

double NNfunction_sb_dLdL::synapse0x2c6e2b0() {
   return (neuron0x2c648e0()*0.000892514);
}

double NNfunction_sb_dLdL::synapse0x2c6e2f0() {
   return (neuron0x2c64c20()*-0.0371142);
}

double NNfunction_sb_dLdL::synapse0x2c6e330() {
   return (neuron0x2c64f60()*0.0214286);
}

double NNfunction_sb_dLdL::synapse0x2c6e370() {
   return (neuron0x2c652a0()*0.0221441);
}

double NNfunction_sb_dLdL::synapse0x2c6e3b0() {
   return (neuron0x2c655e0()*0.0147668);
}

double NNfunction_sb_dLdL::synapse0x2c6e3f0() {
   return (neuron0x2c65920()*0.430063);
}

double NNfunction_sb_dLdL::synapse0x2c6e430() {
   return (neuron0x2c65c60()*-0.0936735);
}

double NNfunction_sb_dLdL::synapse0x2c6e470() {
   return (neuron0x2c65fa0()*0.107914);
}

double NNfunction_sb_dLdL::synapse0x2c6e4b0() {
   return (neuron0x2c662e0()*0.0146792);
}

double NNfunction_sb_dLdL::synapse0x2c6e4f0() {
   return (neuron0x2c66620()*-0.0121207);
}

double NNfunction_sb_dLdL::synapse0x2c6df80() {
   return (neuron0x2c66960()*0.14377);
}

double NNfunction_sb_dLdL::synapse0x2c6dfc0() {
   return (neuron0x2c66ec0()*-0.038263);
}

double NNfunction_sb_dLdL::synapse0x2c6e640() {
   return (neuron0x2c670e0()*-0.00012521);
}

double NNfunction_sb_dLdL::synapse0x2c6e680() {
   return (neuron0x2c67420()*-0.0161837);
}

double NNfunction_sb_dLdL::synapse0x2c6e6c0() {
   return (neuron0x2c67760()*-0.0137699);
}

double NNfunction_sb_dLdL::synapse0x2c6e700() {
   return (neuron0x2c67aa0()*0.02404);
}

double NNfunction_sb_dLdL::synapse0x2c6e740() {
   return (neuron0x2c67de0()*0.012485);
}

double NNfunction_sb_dLdL::synapse0x2c6e780() {
   return (neuron0x2c68120()*-0.0256971);
}

double NNfunction_sb_dLdL::synapse0x2c6eb00() {
   return (neuron0x2c63560()*0.00851665);
}

double NNfunction_sb_dLdL::synapse0x2c6eb40() {
   return (neuron0x2c638a0()*0.000855042);
}

double NNfunction_sb_dLdL::synapse0x2c6eb80() {
   return (neuron0x2c63be0()*-0.038266);
}

double NNfunction_sb_dLdL::synapse0x2c6ebc0() {
   return (neuron0x2c63f20()*-3.58834);
}

double NNfunction_sb_dLdL::synapse0x2c6ec00() {
   return (neuron0x2c64260()*-0.00341639);
}

double NNfunction_sb_dLdL::synapse0x2c6ec40() {
   return (neuron0x2c645a0()*-0.00082258);
}

double NNfunction_sb_dLdL::synapse0x2c6ec80() {
   return (neuron0x2c648e0()*0.00439631);
}

double NNfunction_sb_dLdL::synapse0x2c6ecc0() {
   return (neuron0x2c64c20()*-0.00097809);
}

double NNfunction_sb_dLdL::synapse0x2c6ed00() {
   return (neuron0x2c64f60()*-0.0109138);
}

double NNfunction_sb_dLdL::synapse0x2c6ed40() {
   return (neuron0x2c652a0()*-0.000630879);
}

double NNfunction_sb_dLdL::synapse0x2c6ed80() {
   return (neuron0x2c655e0()*0.00743373);
}

double NNfunction_sb_dLdL::synapse0x2c6edc0() {
   return (neuron0x2c65920()*-0.378756);
}

double NNfunction_sb_dLdL::synapse0x2c6ee00() {
   return (neuron0x2c65c60()*0.0185233);
}

double NNfunction_sb_dLdL::synapse0x2c6ee40() {
   return (neuron0x2c65fa0()*-0.0268332);
}

double NNfunction_sb_dLdL::synapse0x2c6ee80() {
   return (neuron0x2c662e0()*0.0111874);
}

double NNfunction_sb_dLdL::synapse0x2c6eec0() {
   return (neuron0x2c66620()*0.00684994);
}

double NNfunction_sb_dLdL::synapse0x2c6e950() {
   return (neuron0x2c66960()*-0.0143184);
}

double NNfunction_sb_dLdL::synapse0x2c6e990() {
   return (neuron0x2c66ec0()*0.0163276);
}

double NNfunction_sb_dLdL::synapse0x2c6b720() {
   return (neuron0x2c670e0()*0.00946492);
}

double NNfunction_sb_dLdL::synapse0x2c6b760() {
   return (neuron0x2c67420()*-0.000847676);
}

double NNfunction_sb_dLdL::synapse0x2c6b7a0() {
   return (neuron0x2c67760()*-0.000339597);
}

double NNfunction_sb_dLdL::synapse0x2c6b7e0() {
   return (neuron0x2c67aa0()*0.00172131);
}

double NNfunction_sb_dLdL::synapse0x2c6b820() {
   return (neuron0x2c67de0()*0.00596604);
}

double NNfunction_sb_dLdL::synapse0x2c6b860() {
   return (neuron0x2c68120()*-0.0049017);
}

double NNfunction_sb_dLdL::synapse0x2c6bbe0() {
   return (neuron0x2c63560()*-0.0272488);
}

double NNfunction_sb_dLdL::synapse0x2c6bc20() {
   return (neuron0x2c638a0()*0.0264808);
}

double NNfunction_sb_dLdL::synapse0x2c6bc60() {
   return (neuron0x2c63be0()*-0.0270645);
}

double NNfunction_sb_dLdL::synapse0x2c6bca0() {
   return (neuron0x2c63f20()*-0.00582312);
}

double NNfunction_sb_dLdL::synapse0x2c6bce0() {
   return (neuron0x2c64260()*0.0455489);
}

double NNfunction_sb_dLdL::synapse0x2c6bd20() {
   return (neuron0x2c645a0()*0.0174808);
}

double NNfunction_sb_dLdL::synapse0x2c6bd60() {
   return (neuron0x2c648e0()*-0.0360876);
}

double NNfunction_sb_dLdL::synapse0x2c6bda0() {
   return (neuron0x2c64c20()*0.0470522);
}

double NNfunction_sb_dLdL::synapse0x2c6bde0() {
   return (neuron0x2c64f60()*0.00175518);
}

double NNfunction_sb_dLdL::synapse0x2c6be20() {
   return (neuron0x2c652a0()*-0.0327105);
}

double NNfunction_sb_dLdL::synapse0x2c6be60() {
   return (neuron0x2c655e0()*-0.0746194);
}

double NNfunction_sb_dLdL::synapse0x2c6bea0() {
   return (neuron0x2c65920()*-0.47788);
}

double NNfunction_sb_dLdL::synapse0x2c6bee0() {
   return (neuron0x2c65c60()*-0.0352242);
}

double NNfunction_sb_dLdL::synapse0x2c70020() {
   return (neuron0x2c65fa0()*0.128598);
}

double NNfunction_sb_dLdL::synapse0x2c70060() {
   return (neuron0x2c662e0()*-0.00810461);
}

double NNfunction_sb_dLdL::synapse0x2c700a0() {
   return (neuron0x2c66620()*0.0545222);
}

double NNfunction_sb_dLdL::synapse0x2c6ba30() {
   return (neuron0x2c66960()*-0.0180707);
}

double NNfunction_sb_dLdL::synapse0x2c6ba70() {
   return (neuron0x2c66ec0()*0.0267391);
}

double NNfunction_sb_dLdL::synapse0x2c701f0() {
   return (neuron0x2c670e0()*0.0305147);
}

double NNfunction_sb_dLdL::synapse0x2c70230() {
   return (neuron0x2c67420()*-0.121706);
}

double NNfunction_sb_dLdL::synapse0x2c70270() {
   return (neuron0x2c67760()*-0.0648936);
}

double NNfunction_sb_dLdL::synapse0x2c702b0() {
   return (neuron0x2c67aa0()*-0.0380072);
}

double NNfunction_sb_dLdL::synapse0x2c702f0() {
   return (neuron0x2c67de0()*-0.00079329);
}

double NNfunction_sb_dLdL::synapse0x2c70330() {
   return (neuron0x2c68120()*-0.0304893);
}

double NNfunction_sb_dLdL::synapse0x2c706b0() {
   return (neuron0x2c63560()*0.078079);
}

double NNfunction_sb_dLdL::synapse0x2c706f0() {
   return (neuron0x2c638a0()*0.260408);
}

double NNfunction_sb_dLdL::synapse0x2c70730() {
   return (neuron0x2c63be0()*-0.196114);
}

double NNfunction_sb_dLdL::synapse0x2c70770() {
   return (neuron0x2c63f20()*-0.249194);
}

double NNfunction_sb_dLdL::synapse0x2c707b0() {
   return (neuron0x2c64260()*-0.236798);
}

double NNfunction_sb_dLdL::synapse0x2c707f0() {
   return (neuron0x2c645a0()*-0.166361);
}

double NNfunction_sb_dLdL::synapse0x2c70830() {
   return (neuron0x2c648e0()*0.0530327);
}

double NNfunction_sb_dLdL::synapse0x2c70870() {
   return (neuron0x2c64c20()*0.102455);
}

double NNfunction_sb_dLdL::synapse0x2c708b0() {
   return (neuron0x2c64f60()*0.090098);
}

double NNfunction_sb_dLdL::synapse0x2c708f0() {
   return (neuron0x2c652a0()*-0.120823);
}

double NNfunction_sb_dLdL::synapse0x2c70930() {
   return (neuron0x2c655e0()*0.190714);
}

double NNfunction_sb_dLdL::synapse0x2c70970() {
   return (neuron0x2c65920()*-0.0696956);
}

double NNfunction_sb_dLdL::synapse0x2c709b0() {
   return (neuron0x2c65c60()*-0.413697);
}

double NNfunction_sb_dLdL::synapse0x2c709f0() {
   return (neuron0x2c65fa0()*0.0757676);
}

double NNfunction_sb_dLdL::synapse0x2c70a30() {
   return (neuron0x2c662e0()*-0.0885599);
}

double NNfunction_sb_dLdL::synapse0x2c70a70() {
   return (neuron0x2c66620()*-0.0656337);
}

double NNfunction_sb_dLdL::synapse0x2c70500() {
   return (neuron0x2c66960()*-0.133711);
}

double NNfunction_sb_dLdL::synapse0x2c70540() {
   return (neuron0x2c66ec0()*-0.499973);
}

double NNfunction_sb_dLdL::synapse0x2c70bc0() {
   return (neuron0x2c670e0()*0.114848);
}

double NNfunction_sb_dLdL::synapse0x2c70c00() {
   return (neuron0x2c67420()*0.0188121);
}

double NNfunction_sb_dLdL::synapse0x2c70c40() {
   return (neuron0x2c67760()*-0.330015);
}

double NNfunction_sb_dLdL::synapse0x2c70c80() {
   return (neuron0x2c67aa0()*0.305517);
}

double NNfunction_sb_dLdL::synapse0x2c70cc0() {
   return (neuron0x2c67de0()*0.182459);
}

double NNfunction_sb_dLdL::synapse0x2c70d00() {
   return (neuron0x2c68120()*-0.351296);
}

double NNfunction_sb_dLdL::synapse0x2c71080() {
   return (neuron0x2c63560()*0.301645);
}

double NNfunction_sb_dLdL::synapse0x2c710c0() {
   return (neuron0x2c638a0()*0.0802874);
}

double NNfunction_sb_dLdL::synapse0x2c71100() {
   return (neuron0x2c63be0()*-0.085802);
}

double NNfunction_sb_dLdL::synapse0x2c71140() {
   return (neuron0x2c63f20()*0.175449);
}

double NNfunction_sb_dLdL::synapse0x2c71180() {
   return (neuron0x2c64260()*-0.14036);
}

double NNfunction_sb_dLdL::synapse0x2c711c0() {
   return (neuron0x2c645a0()*-0.045433);
}

double NNfunction_sb_dLdL::synapse0x2c71200() {
   return (neuron0x2c648e0()*-0.0674655);
}

double NNfunction_sb_dLdL::synapse0x2c71240() {
   return (neuron0x2c64c20()*-0.119448);
}

double NNfunction_sb_dLdL::synapse0x2c71280() {
   return (neuron0x2c64f60()*0.377401);
}

double NNfunction_sb_dLdL::synapse0x2c712c0() {
   return (neuron0x2c652a0()*-0.0809795);
}

double NNfunction_sb_dLdL::synapse0x2c71300() {
   return (neuron0x2c655e0()*0.353797);
}

double NNfunction_sb_dLdL::synapse0x2c71340() {
   return (neuron0x2c65920()*0.505388);
}

double NNfunction_sb_dLdL::synapse0x2c71380() {
   return (neuron0x2c65c60()*-0.22026);
}

double NNfunction_sb_dLdL::synapse0x2c713c0() {
   return (neuron0x2c65fa0()*-0.325571);
}

double NNfunction_sb_dLdL::synapse0x2c71400() {
   return (neuron0x2c662e0()*-0.270692);
}

double NNfunction_sb_dLdL::synapse0x2c71440() {
   return (neuron0x2c66620()*0.0482067);
}

double NNfunction_sb_dLdL::synapse0x2c70ed0() {
   return (neuron0x2c66960()*0.358175);
}

double NNfunction_sb_dLdL::synapse0x2c70f10() {
   return (neuron0x2c66ec0()*-0.0114387);
}

double NNfunction_sb_dLdL::synapse0x2c71590() {
   return (neuron0x2c670e0()*0.235268);
}

double NNfunction_sb_dLdL::synapse0x2c715d0() {
   return (neuron0x2c67420()*-0.252741);
}

double NNfunction_sb_dLdL::synapse0x2c71610() {
   return (neuron0x2c67760()*0.0878147);
}

double NNfunction_sb_dLdL::synapse0x2c71650() {
   return (neuron0x2c67aa0()*-0.307102);
}

double NNfunction_sb_dLdL::synapse0x2c71690() {
   return (neuron0x2c67de0()*0.024058);
}

double NNfunction_sb_dLdL::synapse0x2c716d0() {
   return (neuron0x2c68120()*0.516293);
}

double NNfunction_sb_dLdL::synapse0x2c71a50() {
   return (neuron0x2c63560()*-0.520226);
}

double NNfunction_sb_dLdL::synapse0x2c71a90() {
   return (neuron0x2c638a0()*-0.38576);
}

double NNfunction_sb_dLdL::synapse0x2c71ad0() {
   return (neuron0x2c63be0()*-0.218444);
}

double NNfunction_sb_dLdL::synapse0x2c71b10() {
   return (neuron0x2c63f20()*0.21496);
}

double NNfunction_sb_dLdL::synapse0x2c71b50() {
   return (neuron0x2c64260()*0.372699);
}

double NNfunction_sb_dLdL::synapse0x2c71b90() {
   return (neuron0x2c645a0()*-0.200713);
}

double NNfunction_sb_dLdL::synapse0x2c71bd0() {
   return (neuron0x2c648e0()*-0.089136);
}

double NNfunction_sb_dLdL::synapse0x2c71c10() {
   return (neuron0x2c64c20()*0.214094);
}

double NNfunction_sb_dLdL::synapse0x2c71c50() {
   return (neuron0x2c64f60()*0.164912);
}

double NNfunction_sb_dLdL::synapse0x2c71c90() {
   return (neuron0x2c652a0()*-0.128621);
}

double NNfunction_sb_dLdL::synapse0x2c71cd0() {
   return (neuron0x2c655e0()*-0.0874809);
}

double NNfunction_sb_dLdL::synapse0x2c71d10() {
   return (neuron0x2c65920()*-0.640518);
}

double NNfunction_sb_dLdL::synapse0x2c71d50() {
   return (neuron0x2c65c60()*-0.308539);
}

double NNfunction_sb_dLdL::synapse0x2c71d90() {
   return (neuron0x2c65fa0()*-0.0705445);
}

double NNfunction_sb_dLdL::synapse0x2c71dd0() {
   return (neuron0x2c662e0()*-0.0488427);
}

double NNfunction_sb_dLdL::synapse0x2c71e10() {
   return (neuron0x2c66620()*-0.0665767);
}

double NNfunction_sb_dLdL::synapse0x2c718a0() {
   return (neuron0x2c66960()*0.0747808);
}

double NNfunction_sb_dLdL::synapse0x2c718e0() {
   return (neuron0x2c66ec0()*-0.349536);
}

double NNfunction_sb_dLdL::synapse0x2c71f60() {
   return (neuron0x2c670e0()*-0.365781);
}

double NNfunction_sb_dLdL::synapse0x2c71fa0() {
   return (neuron0x2c67420()*0.20711);
}

double NNfunction_sb_dLdL::synapse0x2c71fe0() {
   return (neuron0x2c67760()*0.197961);
}

double NNfunction_sb_dLdL::synapse0x2c72020() {
   return (neuron0x2c67aa0()*-0.444812);
}

double NNfunction_sb_dLdL::synapse0x2c72060() {
   return (neuron0x2c67de0()*0.0323811);
}

double NNfunction_sb_dLdL::synapse0x2c720a0() {
   return (neuron0x2c68120()*-0.129806);
}

double NNfunction_sb_dLdL::synapse0x2c72420() {
   return (neuron0x2c63560()*-0.0567081);
}

double NNfunction_sb_dLdL::synapse0x2c63780() {
   return (neuron0x2c638a0()*-0.135094);
}

double NNfunction_sb_dLdL::synapse0x2c637c0() {
   return (neuron0x2c63be0()*-0.149844);
}

double NNfunction_sb_dLdL::synapse0x2c63ac0() {
   return (neuron0x2c63f20()*0.0860165);
}

double NNfunction_sb_dLdL::synapse0x2c63b00() {
   return (neuron0x2c64260()*-0.131896);
}

double NNfunction_sb_dLdL::synapse0x2c63e00() {
   return (neuron0x2c645a0()*0.121072);
}

double NNfunction_sb_dLdL::synapse0x2c63e40() {
   return (neuron0x2c648e0()*0.0490131);
}

double NNfunction_sb_dLdL::synapse0x2c64140() {
   return (neuron0x2c64c20()*-0.13665);
}

double NNfunction_sb_dLdL::synapse0x2c64180() {
   return (neuron0x2c64f60()*0.134874);
}

double NNfunction_sb_dLdL::synapse0x2c64480() {
   return (neuron0x2c652a0()*-0.0171459);
}

double NNfunction_sb_dLdL::synapse0x2c644c0() {
   return (neuron0x2c655e0()*-0.063633);
}

double NNfunction_sb_dLdL::synapse0x2c647c0() {
   return (neuron0x2c65920()*-0.363817);
}

double NNfunction_sb_dLdL::synapse0x2c64800() {
   return (neuron0x2c65c60()*0.0112214);
}

double NNfunction_sb_dLdL::synapse0x2c64b00() {
   return (neuron0x2c65fa0()*0.042013);
}

double NNfunction_sb_dLdL::synapse0x2c64b40() {
   return (neuron0x2c662e0()*-0.0519854);
}

double NNfunction_sb_dLdL::synapse0x2c64e40() {
   return (neuron0x2c66620()*-0.22224);
}

double NNfunction_sb_dLdL::synapse0x2c64e80() {
   return (neuron0x2c66960()*-0.0340495);
}

double NNfunction_sb_dLdL::synapse0x2c65180() {
   return (neuron0x2c66ec0()*-0.0714035);
}

double NNfunction_sb_dLdL::synapse0x2c651c0() {
   return (neuron0x2c670e0()*-0.0381499);
}

double NNfunction_sb_dLdL::synapse0x2c654c0() {
   return (neuron0x2c67420()*0.0276264);
}

double NNfunction_sb_dLdL::synapse0x2c65500() {
   return (neuron0x2c67760()*-0.0100314);
}

double NNfunction_sb_dLdL::synapse0x2c65800() {
   return (neuron0x2c67aa0()*-0.0232737);
}

double NNfunction_sb_dLdL::synapse0x2c65840() {
   return (neuron0x2c67de0()*0.0171132);
}

double NNfunction_sb_dLdL::synapse0x2c65b40() {
   return (neuron0x2c68120()*0.0177959);
}

double NNfunction_sb_dLdL::synapse0x2c65b80() {
   return (neuron0x2c63560()*0.0708432);
}

double NNfunction_sb_dLdL::synapse0x2c66840() {
   return (neuron0x2c638a0()*0.0831742);
}

double NNfunction_sb_dLdL::synapse0x2c66880() {
   return (neuron0x2c63be0()*-0.180892);
}

double NNfunction_sb_dLdL::synapse0x2c72270() {
   return (neuron0x2c63f20()*0.0759216);
}

double NNfunction_sb_dLdL::synapse0x2c722b0() {
   return (neuron0x2c64260()*0.22744);
}

double NNfunction_sb_dLdL::synapse0x2c66b80() {
   return (neuron0x2c645a0()*-0.0562594);
}

double NNfunction_sb_dLdL::synapse0x2c66bc0() {
   return (neuron0x2c648e0()*0.124096);
}

double NNfunction_sb_dLdL::synapse0x2a14b50() {
   return (neuron0x2c64c20()*-0.0443529);
}

double NNfunction_sb_dLdL::synapse0x2a14b90() {
   return (neuron0x2c64f60()*0.05126);
}

double NNfunction_sb_dLdL::synapse0x2c67300() {
   return (neuron0x2c652a0()*0.0641383);
}

double NNfunction_sb_dLdL::synapse0x2c67340() {
   return (neuron0x2c655e0()*0.0512905);
}

double NNfunction_sb_dLdL::synapse0x2c67640() {
   return (neuron0x2c65920()*-0.580012);
}

double NNfunction_sb_dLdL::synapse0x2c67680() {
   return (neuron0x2c65c60()*0.176656);
}

double NNfunction_sb_dLdL::synapse0x2c67980() {
   return (neuron0x2c65fa0()*-0.0578334);
}

double NNfunction_sb_dLdL::synapse0x2c679c0() {
   return (neuron0x2c662e0()*0.711595);
}

double NNfunction_sb_dLdL::synapse0x2c67cc0() {
   return (neuron0x2c66620()*0.146572);
}

double NNfunction_sb_dLdL::synapse0x2c67d00() {
   return (neuron0x2c66960()*-0.202544);
}

double NNfunction_sb_dLdL::synapse0x2c68000() {
   return (neuron0x2c66ec0()*0.0866192);
}

double NNfunction_sb_dLdL::synapse0x2c68040() {
   return (neuron0x2c670e0()*0.00301046);
}

double NNfunction_sb_dLdL::synapse0x2c68340() {
   return (neuron0x2c67420()*0.0326356);
}

double NNfunction_sb_dLdL::synapse0x2c68380() {
   return (neuron0x2c67760()*-0.0567931);
}

double NNfunction_sb_dLdL::synapse0x2c65e80() {
   return (neuron0x2c67aa0()*-0.0108591);
}

double NNfunction_sb_dLdL::synapse0x2c65ec0() {
   return (neuron0x2c67de0()*0.0020104);
}

double NNfunction_sb_dLdL::synapse0x2c74190() {
   return (neuron0x2c68120()*0.0112244);
}

double NNfunction_sb_dLdL::synapse0x2c74510() {
   return (neuron0x2c63560()*-0.196255);
}

double NNfunction_sb_dLdL::synapse0x2c74550() {
   return (neuron0x2c638a0()*-0.0655031);
}

double NNfunction_sb_dLdL::synapse0x2c74590() {
   return (neuron0x2c63be0()*-0.351954);
}

double NNfunction_sb_dLdL::synapse0x2c745d0() {
   return (neuron0x2c63f20()*-0.254949);
}

double NNfunction_sb_dLdL::synapse0x2c74610() {
   return (neuron0x2c64260()*-0.0249471);
}

double NNfunction_sb_dLdL::synapse0x2c74650() {
   return (neuron0x2c645a0()*-0.177098);
}

double NNfunction_sb_dLdL::synapse0x2c74690() {
   return (neuron0x2c648e0()*-0.31126);
}

double NNfunction_sb_dLdL::synapse0x2c746d0() {
   return (neuron0x2c64c20()*-0.0310105);
}

double NNfunction_sb_dLdL::synapse0x2c74710() {
   return (neuron0x2c64f60()*-0.387043);
}

double NNfunction_sb_dLdL::synapse0x2c74750() {
   return (neuron0x2c652a0()*0.0162544);
}

double NNfunction_sb_dLdL::synapse0x2c74790() {
   return (neuron0x2c655e0()*0.211802);
}

double NNfunction_sb_dLdL::synapse0x2c747d0() {
   return (neuron0x2c65920()*0.0194353);
}

double NNfunction_sb_dLdL::synapse0x2c74810() {
   return (neuron0x2c65c60()*0.275634);
}

double NNfunction_sb_dLdL::synapse0x2c74850() {
   return (neuron0x2c65fa0()*-0.144394);
}

double NNfunction_sb_dLdL::synapse0x2c74890() {
   return (neuron0x2c662e0()*-0.0866699);
}

double NNfunction_sb_dLdL::synapse0x2c748d0() {
   return (neuron0x2c66620()*-0.107517);
}

double NNfunction_sb_dLdL::synapse0x2c74360() {
   return (neuron0x2c66960()*0.653889);
}

double NNfunction_sb_dLdL::synapse0x2c743a0() {
   return (neuron0x2c66ec0()*0.307426);
}

double NNfunction_sb_dLdL::synapse0x2c74a20() {
   return (neuron0x2c670e0()*-0.00290564);
}

double NNfunction_sb_dLdL::synapse0x2c74a60() {
   return (neuron0x2c67420()*0.343396);
}

double NNfunction_sb_dLdL::synapse0x2c74aa0() {
   return (neuron0x2c67760()*0.253786);
}

double NNfunction_sb_dLdL::synapse0x2c74ae0() {
   return (neuron0x2c67aa0()*-0.0489238);
}

double NNfunction_sb_dLdL::synapse0x2c74b20() {
   return (neuron0x2c67de0()*-0.198396);
}

double NNfunction_sb_dLdL::synapse0x2c74b60() {
   return (neuron0x2c68120()*0.0191538);
}

double NNfunction_sb_dLdL::synapse0x2c74ee0() {
   return (neuron0x2c63560()*-0.0352824);
}

double NNfunction_sb_dLdL::synapse0x2c74f20() {
   return (neuron0x2c638a0()*0.00800558);
}

double NNfunction_sb_dLdL::synapse0x2c74f60() {
   return (neuron0x2c63be0()*0.180622);
}

double NNfunction_sb_dLdL::synapse0x2c74fa0() {
   return (neuron0x2c63f20()*-2.97098);
}

double NNfunction_sb_dLdL::synapse0x2c74fe0() {
   return (neuron0x2c64260()*0.0334137);
}

double NNfunction_sb_dLdL::synapse0x2c75020() {
   return (neuron0x2c645a0()*0.0308248);
}

double NNfunction_sb_dLdL::synapse0x2c75060() {
   return (neuron0x2c648e0()*0.00702683);
}

double NNfunction_sb_dLdL::synapse0x2c750a0() {
   return (neuron0x2c64c20()*-0.00154987);
}

double NNfunction_sb_dLdL::synapse0x2c750e0() {
   return (neuron0x2c64f60()*0.0223131);
}

double NNfunction_sb_dLdL::synapse0x2c75120() {
   return (neuron0x2c652a0()*0.0120788);
}

double NNfunction_sb_dLdL::synapse0x2c75160() {
   return (neuron0x2c655e0()*-0.0464068);
}

double NNfunction_sb_dLdL::synapse0x2c751a0() {
   return (neuron0x2c65920()*-0.533604);
}

double NNfunction_sb_dLdL::synapse0x2c751e0() {
   return (neuron0x2c65c60()*0.0380886);
}

double NNfunction_sb_dLdL::synapse0x2c75220() {
   return (neuron0x2c65fa0()*-0.00387124);
}

double NNfunction_sb_dLdL::synapse0x2c75260() {
   return (neuron0x2c662e0()*0.0493072);
}

double NNfunction_sb_dLdL::synapse0x2c752a0() {
   return (neuron0x2c66620()*0.0487504);
}

double NNfunction_sb_dLdL::synapse0x2c74d30() {
   return (neuron0x2c66960()*-0.0567827);
}

double NNfunction_sb_dLdL::synapse0x2c74d70() {
   return (neuron0x2c66ec0()*0.0303337);
}

double NNfunction_sb_dLdL::synapse0x2c753f0() {
   return (neuron0x2c670e0()*0.0448822);
}

double NNfunction_sb_dLdL::synapse0x2c75430() {
   return (neuron0x2c67420()*0.0660466);
}

double NNfunction_sb_dLdL::synapse0x2c75470() {
   return (neuron0x2c67760()*0.025468);
}

double NNfunction_sb_dLdL::synapse0x2c754b0() {
   return (neuron0x2c67aa0()*0.0207205);
}

double NNfunction_sb_dLdL::synapse0x2c754f0() {
   return (neuron0x2c67de0()*0.00454128);
}

double NNfunction_sb_dLdL::synapse0x2c75530() {
   return (neuron0x2c68120()*-0.0078671);
}

double NNfunction_sb_dLdL::synapse0x2c758b0() {
   return (neuron0x2c63560()*-0.0209361);
}

double NNfunction_sb_dLdL::synapse0x2c758f0() {
   return (neuron0x2c638a0()*-0.129762);
}

double NNfunction_sb_dLdL::synapse0x2c75930() {
   return (neuron0x2c63be0()*-0.559259);
}

double NNfunction_sb_dLdL::synapse0x2c75970() {
   return (neuron0x2c63f20()*0.557625);
}

double NNfunction_sb_dLdL::synapse0x2c759b0() {
   return (neuron0x2c64260()*-0.0332168);
}

double NNfunction_sb_dLdL::synapse0x2c759f0() {
   return (neuron0x2c645a0()*-0.0330563);
}

double NNfunction_sb_dLdL::synapse0x2c75a30() {
   return (neuron0x2c648e0()*0.0168176);
}

double NNfunction_sb_dLdL::synapse0x2c75a70() {
   return (neuron0x2c64c20()*-0.157129);
}

double NNfunction_sb_dLdL::synapse0x2c75ab0() {
   return (neuron0x2c64f60()*-0.0891756);
}

double NNfunction_sb_dLdL::synapse0x2c75af0() {
   return (neuron0x2c652a0()*-0.0458888);
}

double NNfunction_sb_dLdL::synapse0x2c75b30() {
   return (neuron0x2c655e0()*-0.072443);
}

double NNfunction_sb_dLdL::synapse0x2c75b70() {
   return (neuron0x2c65920()*0.155508);
}

double NNfunction_sb_dLdL::synapse0x2c75bb0() {
   return (neuron0x2c65c60()*0.208268);
}

double NNfunction_sb_dLdL::synapse0x2c75bf0() {
   return (neuron0x2c65fa0()*-0.215953);
}

double NNfunction_sb_dLdL::synapse0x2c75c30() {
   return (neuron0x2c662e0()*-0.00677014);
}

double NNfunction_sb_dLdL::synapse0x2c75c70() {
   return (neuron0x2c66620()*-0.0655161);
}

double NNfunction_sb_dLdL::synapse0x2c75700() {
   return (neuron0x2c66960()*-0.169317);
}

double NNfunction_sb_dLdL::synapse0x2c75740() {
   return (neuron0x2c66ec0()*0.0977572);
}

double NNfunction_sb_dLdL::synapse0x2c75dc0() {
   return (neuron0x2c670e0()*0.158785);
}

double NNfunction_sb_dLdL::synapse0x2c75e00() {
   return (neuron0x2c67420()*0.132851);
}

double NNfunction_sb_dLdL::synapse0x2c75e40() {
   return (neuron0x2c67760()*0.00369111);
}

double NNfunction_sb_dLdL::synapse0x2c75e80() {
   return (neuron0x2c67aa0()*0.0513838);
}

double NNfunction_sb_dLdL::synapse0x2c75ec0() {
   return (neuron0x2c67de0()*-0.0103038);
}

double NNfunction_sb_dLdL::synapse0x2c75f00() {
   return (neuron0x2c68120()*-0.0299909);
}

double NNfunction_sb_dLdL::synapse0x2c76280() {
   return (neuron0x2c63560()*0.00685179);
}

double NNfunction_sb_dLdL::synapse0x2c762c0() {
   return (neuron0x2c638a0()*0.00937634);
}

double NNfunction_sb_dLdL::synapse0x2c76300() {
   return (neuron0x2c63be0()*0.0323495);
}

double NNfunction_sb_dLdL::synapse0x2c76340() {
   return (neuron0x2c63f20()*-4.99453);
}

double NNfunction_sb_dLdL::synapse0x2c76380() {
   return (neuron0x2c64260()*-0.00340617);
}

double NNfunction_sb_dLdL::synapse0x2c763c0() {
   return (neuron0x2c645a0()*0.000652047);
}

double NNfunction_sb_dLdL::synapse0x2c76400() {
   return (neuron0x2c648e0()*0.00528046);
}

double NNfunction_sb_dLdL::synapse0x2c76440() {
   return (neuron0x2c64c20()*-0.00431816);
}

double NNfunction_sb_dLdL::synapse0x2c76480() {
   return (neuron0x2c64f60()*0.00744318);
}

double NNfunction_sb_dLdL::synapse0x2c764c0() {
   return (neuron0x2c652a0()*-0.00375501);
}

double NNfunction_sb_dLdL::synapse0x2c76500() {
   return (neuron0x2c655e0()*-0.00281014);
}

double NNfunction_sb_dLdL::synapse0x2c76540() {
   return (neuron0x2c65920()*0.0949984);
}

double NNfunction_sb_dLdL::synapse0x2c76580() {
   return (neuron0x2c65c60()*0.021124);
}

double NNfunction_sb_dLdL::synapse0x2c765c0() {
   return (neuron0x2c65fa0()*0.0237871);
}

double NNfunction_sb_dLdL::synapse0x2c76600() {
   return (neuron0x2c662e0()*0.00424855);
}

double NNfunction_sb_dLdL::synapse0x2c76640() {
   return (neuron0x2c66620()*0.00639727);
}

double NNfunction_sb_dLdL::synapse0x2c760d0() {
   return (neuron0x2c66960()*0.0116708);
}

double NNfunction_sb_dLdL::synapse0x2c76110() {
   return (neuron0x2c66ec0()*0.00985594);
}

double NNfunction_sb_dLdL::synapse0x2c76790() {
   return (neuron0x2c670e0()*0.00681198);
}

double NNfunction_sb_dLdL::synapse0x2c767d0() {
   return (neuron0x2c67420()*0.00848705);
}

double NNfunction_sb_dLdL::synapse0x2c76810() {
   return (neuron0x2c67760()*0.00205526);
}

double NNfunction_sb_dLdL::synapse0x2c76850() {
   return (neuron0x2c67aa0()*0.00806176);
}

double NNfunction_sb_dLdL::synapse0x2c76890() {
   return (neuron0x2c67de0()*0.00381919);
}

double NNfunction_sb_dLdL::synapse0x2c768d0() {
   return (neuron0x2c68120()*-0.00496748);
}

double NNfunction_sb_dLdL::synapse0x2c76c50() {
   return (neuron0x2c63560()*0.0054946);
}

double NNfunction_sb_dLdL::synapse0x2c76c90() {
   return (neuron0x2c638a0()*-0.00814118);
}

double NNfunction_sb_dLdL::synapse0x2c76cd0() {
   return (neuron0x2c63be0()*-0.00104145);
}

double NNfunction_sb_dLdL::synapse0x2c76d10() {
   return (neuron0x2c63f20()*-0.110065);
}

double NNfunction_sb_dLdL::synapse0x2c76d50() {
   return (neuron0x2c64260()*-0.00563665);
}

double NNfunction_sb_dLdL::synapse0x2c76d90() {
   return (neuron0x2c645a0()*0.00350534);
}

double NNfunction_sb_dLdL::synapse0x2c76dd0() {
   return (neuron0x2c648e0()*-0.00669757);
}

double NNfunction_sb_dLdL::synapse0x2c76e10() {
   return (neuron0x2c64c20()*-0.00401359);
}

double NNfunction_sb_dLdL::synapse0x2c76e50() {
   return (neuron0x2c64f60()*-0.00268619);
}

double NNfunction_sb_dLdL::synapse0x2c6f010() {
   return (neuron0x2c652a0()*-0.0138498);
}

double NNfunction_sb_dLdL::synapse0x2c6f050() {
   return (neuron0x2c655e0()*-0.0135596);
}

double NNfunction_sb_dLdL::synapse0x2c6f090() {
   return (neuron0x2c65920()*-0.114412);
}

double NNfunction_sb_dLdL::synapse0x2c6f0d0() {
   return (neuron0x2c65c60()*-0.516211);
}

double NNfunction_sb_dLdL::synapse0x2c6f110() {
   return (neuron0x2c65fa0()*0.0333336);
}

double NNfunction_sb_dLdL::synapse0x2c6f150() {
   return (neuron0x2c662e0()*-0.254219);
}

double NNfunction_sb_dLdL::synapse0x2c6f190() {
   return (neuron0x2c66620()*-0.250876);
}

double NNfunction_sb_dLdL::synapse0x2c76aa0() {
   return (neuron0x2c66960()*0.0161539);
}

double NNfunction_sb_dLdL::synapse0x2c76ae0() {
   return (neuron0x2c66ec0()*-0.252854);
}

double NNfunction_sb_dLdL::synapse0x2c6f2e0() {
   return (neuron0x2c670e0()*-0.25704);
}

double NNfunction_sb_dLdL::synapse0x2c6f320() {
   return (neuron0x2c67420()*0.0214485);
}

double NNfunction_sb_dLdL::synapse0x2c6f360() {
   return (neuron0x2c67760()*-9.79752e-05);
}

double NNfunction_sb_dLdL::synapse0x2c6f3a0() {
   return (neuron0x2c67aa0()*0.00163623);
}

double NNfunction_sb_dLdL::synapse0x2c6f3e0() {
   return (neuron0x2c67de0()*-0.00557587);
}

double NNfunction_sb_dLdL::synapse0x2c6f420() {
   return (neuron0x2c68120()*0.00122364);
}

double NNfunction_sb_dLdL::synapse0x2c6f7a0() {
   return (neuron0x2c63560()*0.00901694);
}

double NNfunction_sb_dLdL::synapse0x2c6f7e0() {
   return (neuron0x2c638a0()*0.0108947);
}

double NNfunction_sb_dLdL::synapse0x2c6f820() {
   return (neuron0x2c63be0()*-0.118542);
}

double NNfunction_sb_dLdL::synapse0x2c6f860() {
   return (neuron0x2c63f20()*-0.309052);
}

double NNfunction_sb_dLdL::synapse0x2c6f8a0() {
   return (neuron0x2c64260()*0.0377267);
}

double NNfunction_sb_dLdL::synapse0x2c6f8e0() {
   return (neuron0x2c645a0()*-0.0912465);
}

double NNfunction_sb_dLdL::synapse0x2c6f920() {
   return (neuron0x2c648e0()*0.0309824);
}

double NNfunction_sb_dLdL::synapse0x2c6f960() {
   return (neuron0x2c64c20()*0.0205999);
}

double NNfunction_sb_dLdL::synapse0x2c6f9a0() {
   return (neuron0x2c64f60()*-0.0647041);
}

double NNfunction_sb_dLdL::synapse0x2c6f9e0() {
   return (neuron0x2c652a0()*-0.0415508);
}

double NNfunction_sb_dLdL::synapse0x2c6fa20() {
   return (neuron0x2c655e0()*-0.0289703);
}

double NNfunction_sb_dLdL::synapse0x2c6fa60() {
   return (neuron0x2c65920()*3.36181);
}

double NNfunction_sb_dLdL::synapse0x2c6faa0() {
   return (neuron0x2c65c60()*0.186338);
}

double NNfunction_sb_dLdL::synapse0x2c6fae0() {
   return (neuron0x2c65fa0()*0.11932);
}

double NNfunction_sb_dLdL::synapse0x2c6fb20() {
   return (neuron0x2c662e0()*0.0747723);
}

double NNfunction_sb_dLdL::synapse0x2c6fb60() {
   return (neuron0x2c66620()*0.102143);
}

double NNfunction_sb_dLdL::synapse0x2c6f5f0() {
   return (neuron0x2c66960()*0.0691566);
}

double NNfunction_sb_dLdL::synapse0x2c6f630() {
   return (neuron0x2c66ec0()*0.0744771);
}

double NNfunction_sb_dLdL::synapse0x2c6fcb0() {
   return (neuron0x2c670e0()*0.0894031);
}

double NNfunction_sb_dLdL::synapse0x2c6fcf0() {
   return (neuron0x2c67420()*0.111129);
}

double NNfunction_sb_dLdL::synapse0x2c6fd30() {
   return (neuron0x2c67760()*0.0162509);
}

double NNfunction_sb_dLdL::synapse0x2c6fd70() {
   return (neuron0x2c67aa0()*0.0229832);
}

double NNfunction_sb_dLdL::synapse0x2c6fdb0() {
   return (neuron0x2c67de0()*0.0170002);
}

double NNfunction_sb_dLdL::synapse0x2c6fdf0() {
   return (neuron0x2c68120()*-0.00476869);
}

double NNfunction_sb_dLdL::synapse0x2c6ffc0() {
   return (neuron0x2c63560()*-0.027541);
}

double NNfunction_sb_dLdL::synapse0x2c79050() {
   return (neuron0x2c638a0()*-0.117676);
}

double NNfunction_sb_dLdL::synapse0x2c79090() {
   return (neuron0x2c63be0()*0.0677932);
}

double NNfunction_sb_dLdL::synapse0x2c790d0() {
   return (neuron0x2c63f20()*0.117661);
}

double NNfunction_sb_dLdL::synapse0x2c79110() {
   return (neuron0x2c64260()*-0.0171648);
}

double NNfunction_sb_dLdL::synapse0x2c79150() {
   return (neuron0x2c645a0()*-0.00374836);
}

double NNfunction_sb_dLdL::synapse0x2c79190() {
   return (neuron0x2c648e0()*0.0227451);
}

double NNfunction_sb_dLdL::synapse0x2c791d0() {
   return (neuron0x2c64c20()*-0.0253064);
}

double NNfunction_sb_dLdL::synapse0x2c79210() {
   return (neuron0x2c64f60()*-0.47131);
}

double NNfunction_sb_dLdL::synapse0x2c79250() {
   return (neuron0x2c652a0()*-0.360465);
}

double NNfunction_sb_dLdL::synapse0x2c79290() {
   return (neuron0x2c655e0()*-0.492087);
}

double NNfunction_sb_dLdL::synapse0x2c792d0() {
   return (neuron0x2c65920()*0.887683);
}

double NNfunction_sb_dLdL::synapse0x2c79310() {
   return (neuron0x2c65c60()*-0.0294129);
}

double NNfunction_sb_dLdL::synapse0x2c79350() {
   return (neuron0x2c65fa0()*-0.197265);
}

double NNfunction_sb_dLdL::synapse0x2c79390() {
   return (neuron0x2c662e0()*-0.128811);
}

double NNfunction_sb_dLdL::synapse0x2c793d0() {
   return (neuron0x2c66620()*0.0928626);
}

double NNfunction_sb_dLdL::synapse0x2c78ea0() {
   return (neuron0x2c66960()*-0.0140163);
}

double NNfunction_sb_dLdL::synapse0x2c78ee0() {
   return (neuron0x2c66ec0()*-0.0233778);
}

double NNfunction_sb_dLdL::synapse0x2c79520() {
   return (neuron0x2c670e0()*0.129868);
}

double NNfunction_sb_dLdL::synapse0x2c79560() {
   return (neuron0x2c67420()*-0.06812);
}

double NNfunction_sb_dLdL::synapse0x2c795a0() {
   return (neuron0x2c67760()*0.0324557);
}

double NNfunction_sb_dLdL::synapse0x2c795e0() {
   return (neuron0x2c67aa0()*-0.0162308);
}

double NNfunction_sb_dLdL::synapse0x2c79620() {
   return (neuron0x2c67de0()*-0.0256851);
}

double NNfunction_sb_dLdL::synapse0x2c79660() {
   return (neuron0x2c68120()*-0.0342363);
}

double NNfunction_sb_dLdL::synapse0x2c799e0() {
   return (neuron0x2c63560()*-0.0513493);
}

double NNfunction_sb_dLdL::synapse0x2c79a20() {
   return (neuron0x2c638a0()*-0.0689509);
}

double NNfunction_sb_dLdL::synapse0x2c79a60() {
   return (neuron0x2c63be0()*-0.0869191);
}

double NNfunction_sb_dLdL::synapse0x2c79aa0() {
   return (neuron0x2c63f20()*0.0460946);
}

double NNfunction_sb_dLdL::synapse0x2c79ae0() {
   return (neuron0x2c64260()*-0.00756266);
}

double NNfunction_sb_dLdL::synapse0x2c79b20() {
   return (neuron0x2c645a0()*-0.00884667);
}

double NNfunction_sb_dLdL::synapse0x2c79b60() {
   return (neuron0x2c648e0()*-0.0547573);
}

double NNfunction_sb_dLdL::synapse0x2c79ba0() {
   return (neuron0x2c64c20()*0.00161545);
}

double NNfunction_sb_dLdL::synapse0x2c79be0() {
   return (neuron0x2c64f60()*0.185457);
}

double NNfunction_sb_dLdL::synapse0x2c79c20() {
   return (neuron0x2c652a0()*-0.468024);
}

double NNfunction_sb_dLdL::synapse0x2c79c60() {
   return (neuron0x2c655e0()*0.142395);
}

double NNfunction_sb_dLdL::synapse0x2c79ca0() {
   return (neuron0x2c65920()*-1.14688);
}

double NNfunction_sb_dLdL::synapse0x2c79ce0() {
   return (neuron0x2c65c60()*0.0432716);
}

double NNfunction_sb_dLdL::synapse0x2c79d20() {
   return (neuron0x2c65fa0()*-0.00968279);
}

double NNfunction_sb_dLdL::synapse0x2c79d60() {
   return (neuron0x2c662e0()*0.00727231);
}

double NNfunction_sb_dLdL::synapse0x2c79da0() {
   return (neuron0x2c66620()*0.0285765);
}

double NNfunction_sb_dLdL::synapse0x2c79830() {
   return (neuron0x2c66960()*-0.00317413);
}

double NNfunction_sb_dLdL::synapse0x2c79870() {
   return (neuron0x2c66ec0()*0.089715);
}

double NNfunction_sb_dLdL::synapse0x2c79ef0() {
   return (neuron0x2c670e0()*0.0236305);
}

double NNfunction_sb_dLdL::synapse0x2c79f30() {
   return (neuron0x2c67420()*0.0883851);
}

double NNfunction_sb_dLdL::synapse0x2c79f70() {
   return (neuron0x2c67760()*0.0457953);
}

double NNfunction_sb_dLdL::synapse0x2c79fb0() {
   return (neuron0x2c67aa0()*0.00295778);
}

double NNfunction_sb_dLdL::synapse0x2c79ff0() {
   return (neuron0x2c67de0()*0.0142024);
}

double NNfunction_sb_dLdL::synapse0x2c7a030() {
   return (neuron0x2c68120()*0.00804568);
}

double NNfunction_sb_dLdL::synapse0x2c7a3b0() {
   return (neuron0x2c63560()*-0.033027);
}

double NNfunction_sb_dLdL::synapse0x2c7a3f0() {
   return (neuron0x2c638a0()*0.00649909);
}

double NNfunction_sb_dLdL::synapse0x2c7a430() {
   return (neuron0x2c63be0()*0.0537235);
}

double NNfunction_sb_dLdL::synapse0x2c7a470() {
   return (neuron0x2c63f20()*0.0834968);
}

double NNfunction_sb_dLdL::synapse0x2c7a4b0() {
   return (neuron0x2c64260()*-0.0233632);
}

double NNfunction_sb_dLdL::synapse0x2c7a4f0() {
   return (neuron0x2c645a0()*-0.0204889);
}

double NNfunction_sb_dLdL::synapse0x2c7a530() {
   return (neuron0x2c648e0()*-0.0327434);
}

double NNfunction_sb_dLdL::synapse0x2c7a570() {
   return (neuron0x2c64c20()*0.00725831);
}

double NNfunction_sb_dLdL::synapse0x2c7a5b0() {
   return (neuron0x2c64f60()*-0.101885);
}

double NNfunction_sb_dLdL::synapse0x2c7a5f0() {
   return (neuron0x2c652a0()*0.0483057);
}

double NNfunction_sb_dLdL::synapse0x2c7a630() {
   return (neuron0x2c655e0()*0.0147926);
}

double NNfunction_sb_dLdL::synapse0x2c7a670() {
   return (neuron0x2c65920()*0.35174);
}

double NNfunction_sb_dLdL::synapse0x2c7a6b0() {
   return (neuron0x2c65c60()*-0.0405156);
}

double NNfunction_sb_dLdL::synapse0x2c7a6f0() {
   return (neuron0x2c65fa0()*0.0853441);
}

double NNfunction_sb_dLdL::synapse0x2c7a730() {
   return (neuron0x2c662e0()*-0.022747);
}

double NNfunction_sb_dLdL::synapse0x2c7a770() {
   return (neuron0x2c66620()*-0.0126766);
}

double NNfunction_sb_dLdL::synapse0x2c7a200() {
   return (neuron0x2c66960()*0.00548575);
}

double NNfunction_sb_dLdL::synapse0x2c7a240() {
   return (neuron0x2c66ec0()*0.0152806);
}

double NNfunction_sb_dLdL::synapse0x2c7a8c0() {
   return (neuron0x2c670e0()*-0.00362089);
}

double NNfunction_sb_dLdL::synapse0x2c7a900() {
   return (neuron0x2c67420()*0.0103723);
}

double NNfunction_sb_dLdL::synapse0x2c7a940() {
   return (neuron0x2c67760()*-0.0123271);
}

double NNfunction_sb_dLdL::synapse0x2c7a980() {
   return (neuron0x2c67aa0()*-0.00508645);
}

double NNfunction_sb_dLdL::synapse0x2c7a9c0() {
   return (neuron0x2c67de0()*0.0051974);
}

double NNfunction_sb_dLdL::synapse0x2c7aa00() {
   return (neuron0x2c68120()*-0.000962531);
}

double NNfunction_sb_dLdL::synapse0x2c7ad80() {
   return (neuron0x2c63560()*0.00535105);
}

double NNfunction_sb_dLdL::synapse0x2c7adc0() {
   return (neuron0x2c638a0()*-0.00780709);
}

double NNfunction_sb_dLdL::synapse0x2c7ae00() {
   return (neuron0x2c63be0()*0.0631206);
}

double NNfunction_sb_dLdL::synapse0x2c7ae40() {
   return (neuron0x2c63f20()*0.105022);
}

double NNfunction_sb_dLdL::synapse0x2c7ae80() {
   return (neuron0x2c64260()*-0.0028019);
}

double NNfunction_sb_dLdL::synapse0x2c7aec0() {
   return (neuron0x2c645a0()*0.0150209);
}

double NNfunction_sb_dLdL::synapse0x2c7af00() {
   return (neuron0x2c648e0()*-0.00782702);
}

double NNfunction_sb_dLdL::synapse0x2c7af40() {
   return (neuron0x2c64c20()*-0.0172449);
}

double NNfunction_sb_dLdL::synapse0x2c7af80() {
   return (neuron0x2c64f60()*0.140899);
}

double NNfunction_sb_dLdL::synapse0x2c7afc0() {
   return (neuron0x2c652a0()*-0.0446905);
}

double NNfunction_sb_dLdL::synapse0x2c7b000() {
   return (neuron0x2c655e0()*-0.0167043);
}

double NNfunction_sb_dLdL::synapse0x2c7b040() {
   return (neuron0x2c65920()*0.481402);
}

double NNfunction_sb_dLdL::synapse0x2c7b080() {
   return (neuron0x2c65c60()*-0.0646298);
}

double NNfunction_sb_dLdL::synapse0x2c7b0c0() {
   return (neuron0x2c65fa0()*-0.0448794);
}

double NNfunction_sb_dLdL::synapse0x2c7b100() {
   return (neuron0x2c662e0()*-0.0234748);
}

double NNfunction_sb_dLdL::synapse0x2c7b140() {
   return (neuron0x2c66620()*-0.00804987);
}

double NNfunction_sb_dLdL::synapse0x2c7abd0() {
   return (neuron0x2c66960()*-0.0194715);
}

double NNfunction_sb_dLdL::synapse0x2c7ac10() {
   return (neuron0x2c66ec0()*-0.0338081);
}

double NNfunction_sb_dLdL::synapse0x2c7b290() {
   return (neuron0x2c670e0()*-0.01494);
}

double NNfunction_sb_dLdL::synapse0x2c7b2d0() {
   return (neuron0x2c67420()*-0.0890713);
}

double NNfunction_sb_dLdL::synapse0x2c7b310() {
   return (neuron0x2c67760()*-0.00214064);
}

double NNfunction_sb_dLdL::synapse0x2c7b350() {
   return (neuron0x2c67aa0()*-0.00665875);
}

double NNfunction_sb_dLdL::synapse0x2c7b390() {
   return (neuron0x2c67de0()*-0.0093256);
}

double NNfunction_sb_dLdL::synapse0x2c7b3d0() {
   return (neuron0x2c68120()*0.00193285);
}

double NNfunction_sb_dLdL::synapse0x2c7b750() {
   return (neuron0x2c63560()*-0.109773);
}

double NNfunction_sb_dLdL::synapse0x2c7b790() {
   return (neuron0x2c638a0()*-0.120975);
}

double NNfunction_sb_dLdL::synapse0x2c7b7d0() {
   return (neuron0x2c63be0()*-0.0653582);
}

double NNfunction_sb_dLdL::synapse0x2c7b810() {
   return (neuron0x2c63f20()*-0.144846);
}

double NNfunction_sb_dLdL::synapse0x2c7b850() {
   return (neuron0x2c64260()*0.157462);
}

double NNfunction_sb_dLdL::synapse0x2c7b890() {
   return (neuron0x2c645a0()*-0.0546521);
}

double NNfunction_sb_dLdL::synapse0x2c7b8d0() {
   return (neuron0x2c648e0()*-0.0586907);
}

double NNfunction_sb_dLdL::synapse0x2c7b910() {
   return (neuron0x2c64c20()*-0.000844711);
}

double NNfunction_sb_dLdL::synapse0x2c7b950() {
   return (neuron0x2c64f60()*0.217789);
}

double NNfunction_sb_dLdL::synapse0x2c7b990() {
   return (neuron0x2c652a0()*0.131389);
}

double NNfunction_sb_dLdL::synapse0x2c7b9d0() {
   return (neuron0x2c655e0()*0.118188);
}

double NNfunction_sb_dLdL::synapse0x2c7ba10() {
   return (neuron0x2c65920()*-0.634376);
}

double NNfunction_sb_dLdL::synapse0x2c7ba50() {
   return (neuron0x2c65c60()*0.0794984);
}

double NNfunction_sb_dLdL::synapse0x2c7ba90() {
   return (neuron0x2c65fa0()*0.00931226);
}

double NNfunction_sb_dLdL::synapse0x2c7bad0() {
   return (neuron0x2c662e0()*-0.0212468);
}

double NNfunction_sb_dLdL::synapse0x2c7bb10() {
   return (neuron0x2c66620()*0.0577269);
}

double NNfunction_sb_dLdL::synapse0x2c7b5a0() {
   return (neuron0x2c66960()*0.0963438);
}

double NNfunction_sb_dLdL::synapse0x2c7b5e0() {
   return (neuron0x2c66ec0()*-0.116227);
}

double NNfunction_sb_dLdL::synapse0x2c7bc60() {
   return (neuron0x2c670e0()*0.490624);
}

double NNfunction_sb_dLdL::synapse0x2c7bca0() {
   return (neuron0x2c67420()*0.160969);
}

double NNfunction_sb_dLdL::synapse0x2c7bce0() {
   return (neuron0x2c67760()*0.0105504);
}

double NNfunction_sb_dLdL::synapse0x2c7bd20() {
   return (neuron0x2c67aa0()*0.00396796);
}

double NNfunction_sb_dLdL::synapse0x2c7bd60() {
   return (neuron0x2c67de0()*-0.0565891);
}

double NNfunction_sb_dLdL::synapse0x2c7bda0() {
   return (neuron0x2c68120()*-0.11386);
}

double NNfunction_sb_dLdL::synapse0x2c7c120() {
   return (neuron0x2c63560()*0.0240539);
}

double NNfunction_sb_dLdL::synapse0x2c7c160() {
   return (neuron0x2c638a0()*-0.299346);
}

double NNfunction_sb_dLdL::synapse0x2c7c1a0() {
   return (neuron0x2c63be0()*-0.164872);
}

double NNfunction_sb_dLdL::synapse0x2c7c1e0() {
   return (neuron0x2c63f20()*-0.248734);
}

double NNfunction_sb_dLdL::synapse0x2c7c220() {
   return (neuron0x2c64260()*0.493593);
}

double NNfunction_sb_dLdL::synapse0x2c7c260() {
   return (neuron0x2c645a0()*-0.109978);
}

double NNfunction_sb_dLdL::synapse0x2c7c2a0() {
   return (neuron0x2c648e0()*-0.161213);
}

double NNfunction_sb_dLdL::synapse0x2c7c2e0() {
   return (neuron0x2c64c20()*0.205305);
}

double NNfunction_sb_dLdL::synapse0x2c7c320() {
   return (neuron0x2c64f60()*-0.456647);
}

double NNfunction_sb_dLdL::synapse0x2c7c360() {
   return (neuron0x2c652a0()*0.244764);
}

double NNfunction_sb_dLdL::synapse0x2c7c3a0() {
   return (neuron0x2c655e0()*-0.31078);
}

double NNfunction_sb_dLdL::synapse0x2c7c3e0() {
   return (neuron0x2c65920()*-0.283929);
}

double NNfunction_sb_dLdL::synapse0x2c7c420() {
   return (neuron0x2c65c60()*0.269023);
}

double NNfunction_sb_dLdL::synapse0x2c7c460() {
   return (neuron0x2c65fa0()*-0.362816);
}

double NNfunction_sb_dLdL::synapse0x2c7c4a0() {
   return (neuron0x2c662e0()*-0.149187);
}

double NNfunction_sb_dLdL::synapse0x2c7c4e0() {
   return (neuron0x2c66620()*-0.34441);
}

double NNfunction_sb_dLdL::synapse0x2c7bf70() {
   return (neuron0x2c66960()*-0.350118);
}

double NNfunction_sb_dLdL::synapse0x2c7bfb0() {
   return (neuron0x2c66ec0()*-0.291176);
}

double NNfunction_sb_dLdL::synapse0x2c7c630() {
   return (neuron0x2c670e0()*0.312887);
}

double NNfunction_sb_dLdL::synapse0x2c7c670() {
   return (neuron0x2c67420()*0.013428);
}

double NNfunction_sb_dLdL::synapse0x2c7c6b0() {
   return (neuron0x2c67760()*-0.149715);
}

double NNfunction_sb_dLdL::synapse0x2c7c6f0() {
   return (neuron0x2c67aa0()*-0.131689);
}

double NNfunction_sb_dLdL::synapse0x2c7c730() {
   return (neuron0x2c67de0()*-0.0823508);
}

double NNfunction_sb_dLdL::synapse0x2c7c770() {
   return (neuron0x2c68120()*-0.498066);
}

double NNfunction_sb_dLdL::synapse0x2c7caf0() {
   return (neuron0x2c63560()*0.0737032);
}

double NNfunction_sb_dLdL::synapse0x2c7cb30() {
   return (neuron0x2c638a0()*0.219977);
}

double NNfunction_sb_dLdL::synapse0x2c7cb70() {
   return (neuron0x2c63be0()*0.78259);
}

double NNfunction_sb_dLdL::synapse0x2c7cbb0() {
   return (neuron0x2c63f20()*0.190376);
}

double NNfunction_sb_dLdL::synapse0x2c7cbf0() {
   return (neuron0x2c64260()*0.0444241);
}

double NNfunction_sb_dLdL::synapse0x2c7cc30() {
   return (neuron0x2c645a0()*0.0356221);
}

double NNfunction_sb_dLdL::synapse0x2c7cc70() {
   return (neuron0x2c648e0()*-0.181549);
}

double NNfunction_sb_dLdL::synapse0x2c7ccb0() {
   return (neuron0x2c64c20()*0.264437);
}

double NNfunction_sb_dLdL::synapse0x2c7ccf0() {
   return (neuron0x2c64f60()*0.0539556);
}

double NNfunction_sb_dLdL::synapse0x2c7cd30() {
   return (neuron0x2c652a0()*0.177437);
}

double NNfunction_sb_dLdL::synapse0x2c7cd70() {
   return (neuron0x2c655e0()*-0.0388511);
}

double NNfunction_sb_dLdL::synapse0x2c7cdb0() {
   return (neuron0x2c65920()*-1.256);
}

double NNfunction_sb_dLdL::synapse0x2c7cdf0() {
   return (neuron0x2c65c60()*-0.116873);
}

double NNfunction_sb_dLdL::synapse0x2c7ce30() {
   return (neuron0x2c65fa0()*0.20179);
}

double NNfunction_sb_dLdL::synapse0x2c7ce70() {
   return (neuron0x2c662e0()*-0.186681);
}

double NNfunction_sb_dLdL::synapse0x2c7ceb0() {
   return (neuron0x2c66620()*-0.055693);
}

double NNfunction_sb_dLdL::synapse0x2c7c940() {
   return (neuron0x2c66960()*0.0283639);
}

double NNfunction_sb_dLdL::synapse0x2c7c980() {
   return (neuron0x2c66ec0()*-0.106914);
}

double NNfunction_sb_dLdL::synapse0x2c7d000() {
   return (neuron0x2c670e0()*-0.042266);
}

double NNfunction_sb_dLdL::synapse0x2c7d040() {
   return (neuron0x2c67420()*0.0111151);
}

double NNfunction_sb_dLdL::synapse0x2c7d080() {
   return (neuron0x2c67760()*-0.0849093);
}

double NNfunction_sb_dLdL::synapse0x2c7d0c0() {
   return (neuron0x2c67aa0()*0.00118591);
}

double NNfunction_sb_dLdL::synapse0x2c7d100() {
   return (neuron0x2c67de0()*0.0953006);
}

double NNfunction_sb_dLdL::synapse0x2c7d140() {
   return (neuron0x2c68120()*-0.0269275);
}

double NNfunction_sb_dLdL::synapse0x2c7d4c0() {
   return (neuron0x2c63560()*-0.102132);
}

double NNfunction_sb_dLdL::synapse0x2c7d500() {
   return (neuron0x2c638a0()*-0.106042);
}

double NNfunction_sb_dLdL::synapse0x2c7d540() {
   return (neuron0x2c63be0()*-0.348039);
}

double NNfunction_sb_dLdL::synapse0x2c7d580() {
   return (neuron0x2c63f20()*0.862554);
}

double NNfunction_sb_dLdL::synapse0x2c7d5c0() {
   return (neuron0x2c64260()*0.197424);
}

double NNfunction_sb_dLdL::synapse0x2c7d600() {
   return (neuron0x2c645a0()*0.144435);
}

double NNfunction_sb_dLdL::synapse0x2c7d640() {
   return (neuron0x2c648e0()*-0.0946788);
}

double NNfunction_sb_dLdL::synapse0x2c7d680() {
   return (neuron0x2c64c20()*-0.0258095);
}

double NNfunction_sb_dLdL::synapse0x2c7d6c0() {
   return (neuron0x2c64f60()*0.113047);
}

double NNfunction_sb_dLdL::synapse0x2c7d700() {
   return (neuron0x2c652a0()*0.0123514);
}

double NNfunction_sb_dLdL::synapse0x2c7d740() {
   return (neuron0x2c655e0()*-0.0294788);
}

double NNfunction_sb_dLdL::synapse0x2c7d780() {
   return (neuron0x2c65920()*0.0388056);
}

double NNfunction_sb_dLdL::synapse0x2c7d7c0() {
   return (neuron0x2c65c60()*-0.517422);
}

double NNfunction_sb_dLdL::synapse0x2c7d800() {
   return (neuron0x2c65fa0()*0.120293);
}

double NNfunction_sb_dLdL::synapse0x2c7d840() {
   return (neuron0x2c662e0()*0.0876246);
}

double NNfunction_sb_dLdL::synapse0x2c7d880() {
   return (neuron0x2c66620()*0.18486);
}

double NNfunction_sb_dLdL::synapse0x2c7d310() {
   return (neuron0x2c66960()*0.110576);
}

double NNfunction_sb_dLdL::synapse0x2c7d350() {
   return (neuron0x2c66ec0()*-0.152505);
}

double NNfunction_sb_dLdL::synapse0x2c7d9d0() {
   return (neuron0x2c670e0()*0.122335);
}

double NNfunction_sb_dLdL::synapse0x2c7da10() {
   return (neuron0x2c67420()*0.0405287);
}

double NNfunction_sb_dLdL::synapse0x2c7da50() {
   return (neuron0x2c67760()*-0.0941382);
}

double NNfunction_sb_dLdL::synapse0x2c7da90() {
   return (neuron0x2c67aa0()*0.087129);
}

double NNfunction_sb_dLdL::synapse0x2c7dad0() {
   return (neuron0x2c67de0()*0.0206158);
}

double NNfunction_sb_dLdL::synapse0x2c7db10() {
   return (neuron0x2c68120()*-0.0377911);
}

double NNfunction_sb_dLdL::synapse0x2c7de90() {
   return (neuron0x2c63560()*-0.0110969);
}

double NNfunction_sb_dLdL::synapse0x2c72460() {
   return (neuron0x2c638a0()*-0.0867269);
}

double NNfunction_sb_dLdL::synapse0x2c724a0() {
   return (neuron0x2c63be0()*0.796935);
}

double NNfunction_sb_dLdL::synapse0x2c724e0() {
   return (neuron0x2c63f20()*-0.982497);
}

double NNfunction_sb_dLdL::synapse0x2c72730() {
   return (neuron0x2c64260()*-0.0645499);
}

double NNfunction_sb_dLdL::synapse0x2c72770() {
   return (neuron0x2c645a0()*-0.0688468);
}

double NNfunction_sb_dLdL::synapse0x2c727b0() {
   return (neuron0x2c648e0()*0.0180463);
}

double NNfunction_sb_dLdL::synapse0x2c72a00() {
   return (neuron0x2c64c20()*-0.0316499);
}

double NNfunction_sb_dLdL::synapse0x2c72a40() {
   return (neuron0x2c64f60()*0.0191057);
}

double NNfunction_sb_dLdL::synapse0x2c72c90() {
   return (neuron0x2c652a0()*-0.0559649);
}

double NNfunction_sb_dLdL::synapse0x2c72cd0() {
   return (neuron0x2c655e0()*0.0290516);
}

double NNfunction_sb_dLdL::synapse0x2c72d10() {
   return (neuron0x2c65920()*0.240385);
}

double NNfunction_sb_dLdL::synapse0x2c72f60() {
   return (neuron0x2c65c60()*0.0492681);
}

double NNfunction_sb_dLdL::synapse0x2c72fa0() {
   return (neuron0x2c65fa0()*-0.0403557);
}

double NNfunction_sb_dLdL::synapse0x2c731f0() {
   return (neuron0x2c662e0()*-0.0581383);
}

double NNfunction_sb_dLdL::synapse0x2c73230() {
   return (neuron0x2c66620()*0.0459157);
}

double NNfunction_sb_dLdL::synapse0x2c7dce0() {
   return (neuron0x2c66960()*-0.183821);
}

double NNfunction_sb_dLdL::synapse0x2c7dd20() {
   return (neuron0x2c66ec0()*0.0188809);
}

double NNfunction_sb_dLdL::synapse0x2c73380() {
   return (neuron0x2c670e0()*0.0862017);
}

double NNfunction_sb_dLdL::synapse0x2c73890() {
   return (neuron0x2c67420()*0.0356637);
}

double NNfunction_sb_dLdL::synapse0x2c738d0() {
   return (neuron0x2c67760()*-0.0492645);
}

double NNfunction_sb_dLdL::synapse0x2c73910() {
   return (neuron0x2c67aa0()*-0.0161552);
}

double NNfunction_sb_dLdL::synapse0x2c73b60() {
   return (neuron0x2c67de0()*0.00460199);
}

double NNfunction_sb_dLdL::synapse0x2c73ba0() {
   return (neuron0x2c68120()*0.0229178);
}

double NNfunction_sb_dLdL::synapse0x2c73450() {
   return (neuron0x2c63560()*0.0450271);
}

double NNfunction_sb_dLdL::synapse0x2c73490() {
   return (neuron0x2c638a0()*-0.381258);
}

double NNfunction_sb_dLdL::synapse0x2c734d0() {
   return (neuron0x2c63be0()*0.848809);
}

double NNfunction_sb_dLdL::synapse0x2c73510() {
   return (neuron0x2c63f20()*-0.169695);
}

double NNfunction_sb_dLdL::synapse0x2c73e90() {
   return (neuron0x2c64260()*0.118409);
}

double NNfunction_sb_dLdL::synapse0x2c801e0() {
   return (neuron0x2c645a0()*-0.0138951);
}

double NNfunction_sb_dLdL::synapse0x2c80220() {
   return (neuron0x2c648e0()*0.312721);
}

double NNfunction_sb_dLdL::synapse0x2c80260() {
   return (neuron0x2c64c20()*0.131068);
}

double NNfunction_sb_dLdL::synapse0x2c802a0() {
   return (neuron0x2c64f60()*0.115883);
}

double NNfunction_sb_dLdL::synapse0x2c802e0() {
   return (neuron0x2c652a0()*0.116727);
}

double NNfunction_sb_dLdL::synapse0x2c80320() {
   return (neuron0x2c655e0()*0.0599067);
}

double NNfunction_sb_dLdL::synapse0x2c80360() {
   return (neuron0x2c65920()*0.149228);
}

double NNfunction_sb_dLdL::synapse0x2c803a0() {
   return (neuron0x2c65c60()*0.121795);
}

double NNfunction_sb_dLdL::synapse0x2c803e0() {
   return (neuron0x2c65fa0()*-0.0340855);
}

double NNfunction_sb_dLdL::synapse0x2c80420() {
   return (neuron0x2c662e0()*-0.363169);
}

double NNfunction_sb_dLdL::synapse0x2c80460() {
   return (neuron0x2c66620()*0.602244);
}

double NNfunction_sb_dLdL::synapse0x2c73d70() {
   return (neuron0x2c66960()*-0.319136);
}

double NNfunction_sb_dLdL::synapse0x2c73db0() {
   return (neuron0x2c66ec0()*0.00276365);
}

double NNfunction_sb_dLdL::synapse0x2c805b0() {
   return (neuron0x2c670e0()*0.192608);
}

double NNfunction_sb_dLdL::synapse0x2c805f0() {
   return (neuron0x2c67420()*-0.16055);
}

double NNfunction_sb_dLdL::synapse0x2c80630() {
   return (neuron0x2c67760()*-0.269544);
}

double NNfunction_sb_dLdL::synapse0x2c80670() {
   return (neuron0x2c67aa0()*0.106855);
}

double NNfunction_sb_dLdL::synapse0x2c806b0() {
   return (neuron0x2c67de0()*0.125356);
}

double NNfunction_sb_dLdL::synapse0x2c806f0() {
   return (neuron0x2c68120()*0.0680264);
}

double NNfunction_sb_dLdL::synapse0x2c80a70() {
   return (neuron0x2c63560()*0.099134);
}

double NNfunction_sb_dLdL::synapse0x2c80ab0() {
   return (neuron0x2c638a0()*0.0267078);
}

double NNfunction_sb_dLdL::synapse0x2c80af0() {
   return (neuron0x2c63be0()*0.333753);
}

double NNfunction_sb_dLdL::synapse0x2c80b30() {
   return (neuron0x2c63f20()*-0.335988);
}

double NNfunction_sb_dLdL::synapse0x2c80b70() {
   return (neuron0x2c64260()*0.0547875);
}

double NNfunction_sb_dLdL::synapse0x2c80bb0() {
   return (neuron0x2c645a0()*-0.201486);
}

double NNfunction_sb_dLdL::synapse0x2c80bf0() {
   return (neuron0x2c648e0()*0.0379303);
}

double NNfunction_sb_dLdL::synapse0x2c80c30() {
   return (neuron0x2c64c20()*-0.128813);
}

double NNfunction_sb_dLdL::synapse0x2c80c70() {
   return (neuron0x2c64f60()*-0.0212108);
}

double NNfunction_sb_dLdL::synapse0x2c80cb0() {
   return (neuron0x2c652a0()*0.0967708);
}

double NNfunction_sb_dLdL::synapse0x2c80cf0() {
   return (neuron0x2c655e0()*0.0616792);
}

double NNfunction_sb_dLdL::synapse0x2c80d30() {
   return (neuron0x2c65920()*0.445585);
}

double NNfunction_sb_dLdL::synapse0x2c80d70() {
   return (neuron0x2c65c60()*-0.289291);
}

double NNfunction_sb_dLdL::synapse0x2c80db0() {
   return (neuron0x2c65fa0()*0.000359832);
}

double NNfunction_sb_dLdL::synapse0x2c80df0() {
   return (neuron0x2c662e0()*0.0989767);
}

double NNfunction_sb_dLdL::synapse0x2c80e30() {
   return (neuron0x2c66620()*-0.839228);
}

double NNfunction_sb_dLdL::synapse0x2c808c0() {
   return (neuron0x2c66960()*0.230195);
}

double NNfunction_sb_dLdL::synapse0x2c80900() {
   return (neuron0x2c66ec0()*0.0356407);
}

double NNfunction_sb_dLdL::synapse0x2c80f80() {
   return (neuron0x2c670e0()*-0.139977);
}

double NNfunction_sb_dLdL::synapse0x2c80fc0() {
   return (neuron0x2c67420()*-0.0113453);
}

double NNfunction_sb_dLdL::synapse0x2c81000() {
   return (neuron0x2c67760()*-0.0968147);
}

double NNfunction_sb_dLdL::synapse0x2c81040() {
   return (neuron0x2c67aa0()*0.0258229);
}

double NNfunction_sb_dLdL::synapse0x2c81080() {
   return (neuron0x2c67de0()*0.0143649);
}

double NNfunction_sb_dLdL::synapse0x2c810c0() {
   return (neuron0x2c68120()*0.0218679);
}

double NNfunction_sb_dLdL::synapse0x2c81440() {
   return (neuron0x2c63560()*0.00109846);
}

double NNfunction_sb_dLdL::synapse0x2c81480() {
   return (neuron0x2c638a0()*0.00423642);
}

double NNfunction_sb_dLdL::synapse0x2c814c0() {
   return (neuron0x2c63be0()*0.00747214);
}

double NNfunction_sb_dLdL::synapse0x2c81500() {
   return (neuron0x2c63f20()*0.140318);
}

double NNfunction_sb_dLdL::synapse0x2c81540() {
   return (neuron0x2c64260()*-0.0109414);
}

double NNfunction_sb_dLdL::synapse0x2c81580() {
   return (neuron0x2c645a0()*-0.0129084);
}

double NNfunction_sb_dLdL::synapse0x2c815c0() {
   return (neuron0x2c648e0()*-0.0161828);
}

double NNfunction_sb_dLdL::synapse0x2c81600() {
   return (neuron0x2c64c20()*-0.0241206);
}

double NNfunction_sb_dLdL::synapse0x2c81640() {
   return (neuron0x2c64f60()*0.000334848);
}

double NNfunction_sb_dLdL::synapse0x2c81680() {
   return (neuron0x2c652a0()*0.0134455);
}

double NNfunction_sb_dLdL::synapse0x2c816c0() {
   return (neuron0x2c655e0()*0.0299441);
}

double NNfunction_sb_dLdL::synapse0x2c81700() {
   return (neuron0x2c65920()*-0.646636);
}

double NNfunction_sb_dLdL::synapse0x2c81740() {
   return (neuron0x2c65c60()*-0.0281596);
}

double NNfunction_sb_dLdL::synapse0x2c81780() {
   return (neuron0x2c65fa0()*-0.0381383);
}

double NNfunction_sb_dLdL::synapse0x2c817c0() {
   return (neuron0x2c662e0()*-0.00501899);
}

double NNfunction_sb_dLdL::synapse0x2c81800() {
   return (neuron0x2c66620()*-0.0107216);
}

double NNfunction_sb_dLdL::synapse0x2c81290() {
   return (neuron0x2c66960()*-0.0199529);
}

double NNfunction_sb_dLdL::synapse0x2c812d0() {
   return (neuron0x2c66ec0()*-0.00257127);
}

double NNfunction_sb_dLdL::synapse0x2c81950() {
   return (neuron0x2c670e0()*-0.00253414);
}

double NNfunction_sb_dLdL::synapse0x2c81990() {
   return (neuron0x2c67420()*-0.0639522);
}

double NNfunction_sb_dLdL::synapse0x2c819d0() {
   return (neuron0x2c67760()*0.00340266);
}

double NNfunction_sb_dLdL::synapse0x2c81a10() {
   return (neuron0x2c67aa0()*-0.00308649);
}

double NNfunction_sb_dLdL::synapse0x2c81a50() {
   return (neuron0x2c67de0()*-0.00390924);
}

double NNfunction_sb_dLdL::synapse0x2c81a90() {
   return (neuron0x2c68120()*0.00613093);
}

double NNfunction_sb_dLdL::synapse0x2c81e10() {
   return (neuron0x2c63560()*0.0699678);
}

double NNfunction_sb_dLdL::synapse0x2c81e50() {
   return (neuron0x2c638a0()*0.0112633);
}

double NNfunction_sb_dLdL::synapse0x2c81e90() {
   return (neuron0x2c63be0()*0.269696);
}

double NNfunction_sb_dLdL::synapse0x2c81ed0() {
   return (neuron0x2c63f20()*0.0724406);
}

double NNfunction_sb_dLdL::synapse0x2c81f10() {
   return (neuron0x2c64260()*-0.0929582);
}

double NNfunction_sb_dLdL::synapse0x2c81f50() {
   return (neuron0x2c645a0()*-0.0312557);
}

double NNfunction_sb_dLdL::synapse0x2c81f90() {
   return (neuron0x2c648e0()*-0.134381);
}

double NNfunction_sb_dLdL::synapse0x2c81fd0() {
   return (neuron0x2c64c20()*-0.035442);
}

double NNfunction_sb_dLdL::synapse0x2c82010() {
   return (neuron0x2c64f60()*0.115184);
}

double NNfunction_sb_dLdL::synapse0x2c82050() {
   return (neuron0x2c652a0()*0.014417);
}

double NNfunction_sb_dLdL::synapse0x2c82090() {
   return (neuron0x2c655e0()*-0.0832268);
}

double NNfunction_sb_dLdL::synapse0x2c820d0() {
   return (neuron0x2c65920()*-0.210553);
}

double NNfunction_sb_dLdL::synapse0x2c82110() {
   return (neuron0x2c65c60()*-0.386177);
}

double NNfunction_sb_dLdL::synapse0x2c82150() {
   return (neuron0x2c65fa0()*0.830496);
}

double NNfunction_sb_dLdL::synapse0x2c82190() {
   return (neuron0x2c662e0()*-0.110689);
}

double NNfunction_sb_dLdL::synapse0x2c821d0() {
   return (neuron0x2c66620()*-0.102178);
}

double NNfunction_sb_dLdL::synapse0x2c81c60() {
   return (neuron0x2c66960()*0.548067);
}

double NNfunction_sb_dLdL::synapse0x2c81ca0() {
   return (neuron0x2c66ec0()*-0.0751792);
}

double NNfunction_sb_dLdL::synapse0x2c82320() {
   return (neuron0x2c670e0()*-0.106577);
}

double NNfunction_sb_dLdL::synapse0x2c82360() {
   return (neuron0x2c67420()*-0.200867);
}

double NNfunction_sb_dLdL::synapse0x2c823a0() {
   return (neuron0x2c67760()*-0.0462725);
}

double NNfunction_sb_dLdL::synapse0x2c823e0() {
   return (neuron0x2c67aa0()*-0.0659759);
}

double NNfunction_sb_dLdL::synapse0x2c82420() {
   return (neuron0x2c67de0()*0.00873477);
}

double NNfunction_sb_dLdL::synapse0x2c82460() {
   return (neuron0x2c68120()*-0.00553298);
}

double NNfunction_sb_dLdL::synapse0x2c827e0() {
   return (neuron0x2c63560()*0.131915);
}

double NNfunction_sb_dLdL::synapse0x2c82820() {
   return (neuron0x2c638a0()*-0.0215888);
}

double NNfunction_sb_dLdL::synapse0x2c82860() {
   return (neuron0x2c63be0()*-0.20423);
}

double NNfunction_sb_dLdL::synapse0x2c828a0() {
   return (neuron0x2c63f20()*0.0207769);
}

double NNfunction_sb_dLdL::synapse0x2c828e0() {
   return (neuron0x2c64260()*-0.0504898);
}

double NNfunction_sb_dLdL::synapse0x2c82920() {
   return (neuron0x2c645a0()*-0.110109);
}

double NNfunction_sb_dLdL::synapse0x2c82960() {
   return (neuron0x2c648e0()*0.428746);
}

double NNfunction_sb_dLdL::synapse0x2c829a0() {
   return (neuron0x2c64c20()*0.220814);
}

double NNfunction_sb_dLdL::synapse0x2c829e0() {
   return (neuron0x2c64f60()*-0.00347528);
}

double NNfunction_sb_dLdL::synapse0x2c82a20() {
   return (neuron0x2c652a0()*-0.0471122);
}

double NNfunction_sb_dLdL::synapse0x2c82a60() {
   return (neuron0x2c655e0()*-0.0711105);
}

double NNfunction_sb_dLdL::synapse0x2c82aa0() {
   return (neuron0x2c65920()*-1.01173);
}

double NNfunction_sb_dLdL::synapse0x2c82ae0() {
   return (neuron0x2c65c60()*-0.0318613);
}

double NNfunction_sb_dLdL::synapse0x2c82b20() {
   return (neuron0x2c65fa0()*-0.14812);
}

double NNfunction_sb_dLdL::synapse0x2c82b60() {
   return (neuron0x2c662e0()*-0.20288);
}

double NNfunction_sb_dLdL::synapse0x2c82ba0() {
   return (neuron0x2c66620()*0.295783);
}

double NNfunction_sb_dLdL::synapse0x2c82630() {
   return (neuron0x2c66960()*-0.0561564);
}

double NNfunction_sb_dLdL::synapse0x2c82670() {
   return (neuron0x2c66ec0()*0.096686);
}

double NNfunction_sb_dLdL::synapse0x2c82cf0() {
   return (neuron0x2c670e0()*0.0201973);
}

double NNfunction_sb_dLdL::synapse0x2c82d30() {
   return (neuron0x2c67420()*0.0807255);
}

double NNfunction_sb_dLdL::synapse0x2c82d70() {
   return (neuron0x2c67760()*-0.0403929);
}

double NNfunction_sb_dLdL::synapse0x2c82db0() {
   return (neuron0x2c67aa0()*0.0445469);
}

double NNfunction_sb_dLdL::synapse0x2c82df0() {
   return (neuron0x2c67de0()*0.0398262);
}

double NNfunction_sb_dLdL::synapse0x2c82e30() {
   return (neuron0x2c68120()*0.0357974);
}

double NNfunction_sb_dLdL::synapse0x2c831b0() {
   return (neuron0x2c63560()*-0.0232347);
}

double NNfunction_sb_dLdL::synapse0x2c831f0() {
   return (neuron0x2c638a0()*-0.0293409);
}

double NNfunction_sb_dLdL::synapse0x2c83230() {
   return (neuron0x2c63be0()*0.482988);
}

double NNfunction_sb_dLdL::synapse0x2c83270() {
   return (neuron0x2c63f20()*0.528021);
}

double NNfunction_sb_dLdL::synapse0x2c832b0() {
   return (neuron0x2c64260()*-0.0192069);
}

double NNfunction_sb_dLdL::synapse0x2c832f0() {
   return (neuron0x2c645a0()*-0.0151591);
}

double NNfunction_sb_dLdL::synapse0x2c83330() {
   return (neuron0x2c648e0()*-0.0222007);
}

double NNfunction_sb_dLdL::synapse0x2c83370() {
   return (neuron0x2c64c20()*-0.00714155);
}

double NNfunction_sb_dLdL::synapse0x2c833b0() {
   return (neuron0x2c64f60()*0.0835976);
}

double NNfunction_sb_dLdL::synapse0x2c833f0() {
   return (neuron0x2c652a0()*-0.0405266);
}

double NNfunction_sb_dLdL::synapse0x2c83430() {
   return (neuron0x2c655e0()*-0.00812738);
}

double NNfunction_sb_dLdL::synapse0x2c83470() {
   return (neuron0x2c65920()*0.576795);
}

double NNfunction_sb_dLdL::synapse0x2c834b0() {
   return (neuron0x2c65c60()*-0.00111713);
}

double NNfunction_sb_dLdL::synapse0x2c834f0() {
   return (neuron0x2c65fa0()*0.00179869);
}

double NNfunction_sb_dLdL::synapse0x2c83530() {
   return (neuron0x2c662e0()*0.0149639);
}

double NNfunction_sb_dLdL::synapse0x2c83570() {
   return (neuron0x2c66620()*0.0601592);
}

double NNfunction_sb_dLdL::synapse0x2c83000() {
   return (neuron0x2c66960()*-0.00990325);
}

double NNfunction_sb_dLdL::synapse0x2c83040() {
   return (neuron0x2c66ec0()*0.0207221);
}

double NNfunction_sb_dLdL::synapse0x2c836c0() {
   return (neuron0x2c670e0()*1.53829e-05);
}

double NNfunction_sb_dLdL::synapse0x2c83700() {
   return (neuron0x2c67420()*0.00230645);
}

double NNfunction_sb_dLdL::synapse0x2c83740() {
   return (neuron0x2c67760()*0.0191492);
}

double NNfunction_sb_dLdL::synapse0x2c83780() {
   return (neuron0x2c67aa0()*0.0027728);
}

double NNfunction_sb_dLdL::synapse0x2c837c0() {
   return (neuron0x2c67de0()*-0.028944);
}

double NNfunction_sb_dLdL::synapse0x2c83800() {
   return (neuron0x2c68120()*0.0072552);
}

double NNfunction_sb_dLdL::synapse0x2c83b80() {
   return (neuron0x2c63560()*-0.0339147);
}

double NNfunction_sb_dLdL::synapse0x2c83bc0() {
   return (neuron0x2c638a0()*-0.0990321);
}

double NNfunction_sb_dLdL::synapse0x2c83c00() {
   return (neuron0x2c63be0()*-0.10455);
}

double NNfunction_sb_dLdL::synapse0x2c83c40() {
   return (neuron0x2c63f20()*0.0928921);
}

double NNfunction_sb_dLdL::synapse0x2c83c80() {
   return (neuron0x2c64260()*-0.268697);
}

double NNfunction_sb_dLdL::synapse0x2c83cc0() {
   return (neuron0x2c645a0()*-0.212373);
}

double NNfunction_sb_dLdL::synapse0x2c83d00() {
   return (neuron0x2c648e0()*-0.187601);
}

double NNfunction_sb_dLdL::synapse0x2c83d40() {
   return (neuron0x2c64c20()*0.178235);
}

double NNfunction_sb_dLdL::synapse0x2c83d80() {
   return (neuron0x2c64f60()*0.0666131);
}

double NNfunction_sb_dLdL::synapse0x2c83dc0() {
   return (neuron0x2c652a0()*-0.00772856);
}

double NNfunction_sb_dLdL::synapse0x2c83e00() {
   return (neuron0x2c655e0()*-0.0225959);
}

double NNfunction_sb_dLdL::synapse0x2c83e40() {
   return (neuron0x2c65920()*-0.41168);
}

double NNfunction_sb_dLdL::synapse0x2c83e80() {
   return (neuron0x2c65c60()*-0.0618584);
}

double NNfunction_sb_dLdL::synapse0x2c83ec0() {
   return (neuron0x2c65fa0()*0.057214);
}

double NNfunction_sb_dLdL::synapse0x2c83f00() {
   return (neuron0x2c662e0()*0.250139);
}

double NNfunction_sb_dLdL::synapse0x2c83f40() {
   return (neuron0x2c66620()*-0.119884);
}

double NNfunction_sb_dLdL::synapse0x2c839d0() {
   return (neuron0x2c66960()*0.061119);
}

double NNfunction_sb_dLdL::synapse0x2c83a10() {
   return (neuron0x2c66ec0()*0.00720351);
}

double NNfunction_sb_dLdL::synapse0x2c84090() {
   return (neuron0x2c670e0()*0.0145529);
}

double NNfunction_sb_dLdL::synapse0x2c840d0() {
   return (neuron0x2c67420()*0.0610346);
}

double NNfunction_sb_dLdL::synapse0x2c84110() {
   return (neuron0x2c67760()*0.0718079);
}

double NNfunction_sb_dLdL::synapse0x2c84150() {
   return (neuron0x2c67aa0()*0.00251663);
}

double NNfunction_sb_dLdL::synapse0x2c84190() {
   return (neuron0x2c67de0()*0.00458008);
}

double NNfunction_sb_dLdL::synapse0x2c841d0() {
   return (neuron0x2c68120()*-0.0343087);
}

double NNfunction_sb_dLdL::synapse0x2c84550() {
   return (neuron0x2c63560()*-0.00685244);
}

double NNfunction_sb_dLdL::synapse0x2c84590() {
   return (neuron0x2c638a0()*-0.000116675);
}

double NNfunction_sb_dLdL::synapse0x2c845d0() {
   return (neuron0x2c63be0()*-0.125611);
}

double NNfunction_sb_dLdL::synapse0x2c84610() {
   return (neuron0x2c63f20()*-2.60817);
}

double NNfunction_sb_dLdL::synapse0x2c84650() {
   return (neuron0x2c64260()*-0.010047);
}

double NNfunction_sb_dLdL::synapse0x2c84690() {
   return (neuron0x2c645a0()*-0.00827657);
}

double NNfunction_sb_dLdL::synapse0x2c846d0() {
   return (neuron0x2c648e0()*-0.0258486);
}

double NNfunction_sb_dLdL::synapse0x2c84710() {
   return (neuron0x2c64c20()*-0.00125191);
}

double NNfunction_sb_dLdL::synapse0x2c84750() {
   return (neuron0x2c64f60()*-0.00696047);
}

double NNfunction_sb_dLdL::synapse0x2c84790() {
   return (neuron0x2c652a0()*-0.0188918);
}

double NNfunction_sb_dLdL::synapse0x2c847d0() {
   return (neuron0x2c655e0()*0.00900788);
}

double NNfunction_sb_dLdL::synapse0x2c84810() {
   return (neuron0x2c65920()*0.214884);
}

double NNfunction_sb_dLdL::synapse0x2c84850() {
   return (neuron0x2c65c60()*-0.069965);
}

double NNfunction_sb_dLdL::synapse0x2c84890() {
   return (neuron0x2c65fa0()*-0.0893825);
}

double NNfunction_sb_dLdL::synapse0x2c848d0() {
   return (neuron0x2c662e0()*-0.0459282);
}

double NNfunction_sb_dLdL::synapse0x2c84910() {
   return (neuron0x2c66620()*-0.0421083);
}

double NNfunction_sb_dLdL::synapse0x2c843a0() {
   return (neuron0x2c66960()*-0.0436487);
}

double NNfunction_sb_dLdL::synapse0x2c843e0() {
   return (neuron0x2c66ec0()*-0.0257966);
}

double NNfunction_sb_dLdL::synapse0x2c84a60() {
   return (neuron0x2c670e0()*-0.0380045);
}

double NNfunction_sb_dLdL::synapse0x2c84aa0() {
   return (neuron0x2c67420()*-0.0403659);
}

double NNfunction_sb_dLdL::synapse0x2c84ae0() {
   return (neuron0x2c67760()*-0.0110997);
}

double NNfunction_sb_dLdL::synapse0x2c84b20() {
   return (neuron0x2c67aa0()*-0.019212);
}

double NNfunction_sb_dLdL::synapse0x2c84b60() {
   return (neuron0x2c67de0()*-0.0159159);
}

double NNfunction_sb_dLdL::synapse0x2c84ba0() {
   return (neuron0x2c68120()*0.0190062);
}

double NNfunction_sb_dLdL::synapse0x2c6d650() {
   return (neuron0x2c63560()*-0.052344);
}

double NNfunction_sb_dLdL::synapse0x2c6d690() {
   return (neuron0x2c638a0()*-0.140007);
}

double NNfunction_sb_dLdL::synapse0x2c6d6d0() {
   return (neuron0x2c63be0()*0.27923);
}

double NNfunction_sb_dLdL::synapse0x2c6d710() {
   return (neuron0x2c63f20()*0.181327);
}

double NNfunction_sb_dLdL::synapse0x2c6d750() {
   return (neuron0x2c64260()*0.00508911);
}

double NNfunction_sb_dLdL::synapse0x2c6d790() {
   return (neuron0x2c645a0()*0.195922);
}

double NNfunction_sb_dLdL::synapse0x2c6d7d0() {
   return (neuron0x2c648e0()*0.0250143);
}

double NNfunction_sb_dLdL::synapse0x2c6d810() {
   return (neuron0x2c64c20()*0.206755);
}

double NNfunction_sb_dLdL::synapse0x2c85330() {
   return (neuron0x2c64f60()*-0.0337427);
}

double NNfunction_sb_dLdL::synapse0x2c85370() {
   return (neuron0x2c652a0()*-0.0114605);
}

double NNfunction_sb_dLdL::synapse0x2c853b0() {
   return (neuron0x2c655e0()*0.0872007);
}

double NNfunction_sb_dLdL::synapse0x2c853f0() {
   return (neuron0x2c65920()*-1.2683);
}

double NNfunction_sb_dLdL::synapse0x2c85430() {
   return (neuron0x2c65c60()*-0.0413908);
}

double NNfunction_sb_dLdL::synapse0x2c85470() {
   return (neuron0x2c65fa0()*0.145682);
}

double NNfunction_sb_dLdL::synapse0x2c854b0() {
   return (neuron0x2c662e0()*-0.0371445);
}

double NNfunction_sb_dLdL::synapse0x2c854f0() {
   return (neuron0x2c66620()*-0.17608);
}

double NNfunction_sb_dLdL::synapse0x2c84d70() {
   return (neuron0x2c66960()*0.163202);
}

double NNfunction_sb_dLdL::synapse0x2c84db0() {
   return (neuron0x2c66ec0()*-0.00226503);
}

double NNfunction_sb_dLdL::synapse0x2c85640() {
   return (neuron0x2c670e0()*-0.0533406);
}

double NNfunction_sb_dLdL::synapse0x2c85680() {
   return (neuron0x2c67420()*-0.15178);
}

double NNfunction_sb_dLdL::synapse0x2c856c0() {
   return (neuron0x2c67760()*-0.0306767);
}

double NNfunction_sb_dLdL::synapse0x2c85700() {
   return (neuron0x2c67aa0()*-0.0320753);
}

double NNfunction_sb_dLdL::synapse0x2c85740() {
   return (neuron0x2c67de0()*-0.0613927);
}

double NNfunction_sb_dLdL::synapse0x2c85780() {
   return (neuron0x2c68120()*0.0943917);
}

double NNfunction_sb_dLdL::synapse0x2c85b00() {
   return (neuron0x2c63560()*0.343726);
}

double NNfunction_sb_dLdL::synapse0x2c85b40() {
   return (neuron0x2c638a0()*0.272053);
}

double NNfunction_sb_dLdL::synapse0x2c85b80() {
   return (neuron0x2c63be0()*0.530155);
}

double NNfunction_sb_dLdL::synapse0x2c85bc0() {
   return (neuron0x2c63f20()*-0.260508);
}

double NNfunction_sb_dLdL::synapse0x2c85c00() {
   return (neuron0x2c64260()*0.298804);
}

double NNfunction_sb_dLdL::synapse0x2c85c40() {
   return (neuron0x2c645a0()*-0.418554);
}

double NNfunction_sb_dLdL::synapse0x2c85c80() {
   return (neuron0x2c648e0()*0.0937321);
}

double NNfunction_sb_dLdL::synapse0x2c85cc0() {
   return (neuron0x2c64c20()*0.00727047);
}

double NNfunction_sb_dLdL::synapse0x2c85d00() {
   return (neuron0x2c64f60()*0.0408535);
}

double NNfunction_sb_dLdL::synapse0x2c85d40() {
   return (neuron0x2c652a0()*-0.0766777);
}

double NNfunction_sb_dLdL::synapse0x2c85d80() {
   return (neuron0x2c655e0()*0.223133);
}

double NNfunction_sb_dLdL::synapse0x2c85dc0() {
   return (neuron0x2c65920()*0.106145);
}

double NNfunction_sb_dLdL::synapse0x2c85e00() {
   return (neuron0x2c65c60()*0.356286);
}

double NNfunction_sb_dLdL::synapse0x2c85e40() {
   return (neuron0x2c65fa0()*0.0315648);
}

double NNfunction_sb_dLdL::synapse0x2c85e80() {
   return (neuron0x2c662e0()*0.217506);
}

double NNfunction_sb_dLdL::synapse0x2c85ec0() {
   return (neuron0x2c66620()*-0.19202);
}

double NNfunction_sb_dLdL::synapse0x2c85950() {
   return (neuron0x2c66960()*0.172838);
}

double NNfunction_sb_dLdL::synapse0x2c85990() {
   return (neuron0x2c66ec0()*0.113048);
}

double NNfunction_sb_dLdL::synapse0x2c86010() {
   return (neuron0x2c670e0()*0.272924);
}

double NNfunction_sb_dLdL::synapse0x2c86050() {
   return (neuron0x2c67420()*-0.456394);
}

double NNfunction_sb_dLdL::synapse0x2c86090() {
   return (neuron0x2c67760()*0.448565);
}

double NNfunction_sb_dLdL::synapse0x2c860d0() {
   return (neuron0x2c67aa0()*-0.227656);
}

double NNfunction_sb_dLdL::synapse0x2c86110() {
   return (neuron0x2c67de0()*0.0310362);
}

double NNfunction_sb_dLdL::synapse0x2c86150() {
   return (neuron0x2c68120()*0.124043);
}

double NNfunction_sb_dLdL::synapse0x2c864d0() {
   return (neuron0x2c63560()*0.0738598);
}

double NNfunction_sb_dLdL::synapse0x2c86510() {
   return (neuron0x2c638a0()*0.081883);
}

double NNfunction_sb_dLdL::synapse0x2c86550() {
   return (neuron0x2c63be0()*-0.909085);
}

double NNfunction_sb_dLdL::synapse0x2c86590() {
   return (neuron0x2c63f20()*0.265916);
}

double NNfunction_sb_dLdL::synapse0x2c865d0() {
   return (neuron0x2c64260()*-0.0971871);
}

double NNfunction_sb_dLdL::synapse0x2c86610() {
   return (neuron0x2c645a0()*0.0141842);
}

double NNfunction_sb_dLdL::synapse0x2c86650() {
   return (neuron0x2c648e0()*0.0489454);
}

double NNfunction_sb_dLdL::synapse0x2c86690() {
   return (neuron0x2c64c20()*0.0472855);
}

double NNfunction_sb_dLdL::synapse0x2c866d0() {
   return (neuron0x2c64f60()*0.0934697);
}

double NNfunction_sb_dLdL::synapse0x2c86710() {
   return (neuron0x2c652a0()*0.0279642);
}

double NNfunction_sb_dLdL::synapse0x2c86750() {
   return (neuron0x2c655e0()*-0.00361233);
}

double NNfunction_sb_dLdL::synapse0x2c86790() {
   return (neuron0x2c65920()*-0.00944721);
}

double NNfunction_sb_dLdL::synapse0x2c867d0() {
   return (neuron0x2c65c60()*0.0300419);
}

double NNfunction_sb_dLdL::synapse0x2c86810() {
   return (neuron0x2c65fa0()*0.0780298);
}

double NNfunction_sb_dLdL::synapse0x2c86850() {
   return (neuron0x2c662e0()*-0.0345674);
}

double NNfunction_sb_dLdL::synapse0x2c86890() {
   return (neuron0x2c66620()*-0.140576);
}

double NNfunction_sb_dLdL::synapse0x2c86320() {
   return (neuron0x2c66960()*-0.128931);
}

double NNfunction_sb_dLdL::synapse0x2c86360() {
   return (neuron0x2c66ec0()*-0.00434005);
}

double NNfunction_sb_dLdL::synapse0x2c76e90() {
   return (neuron0x2c670e0()*-0.07012);
}

double NNfunction_sb_dLdL::synapse0x2c76ed0() {
   return (neuron0x2c67420()*0.0210897);
}

double NNfunction_sb_dLdL::synapse0x2c76f10() {
   return (neuron0x2c67760()*-0.0455334);
}

double NNfunction_sb_dLdL::synapse0x2c76f50() {
   return (neuron0x2c67aa0()*-0.0274086);
}

double NNfunction_sb_dLdL::synapse0x2c76f90() {
   return (neuron0x2c67de0()*0.0261444);
}

double NNfunction_sb_dLdL::synapse0x2c76fd0() {
   return (neuron0x2c68120()*0.0114609);
}

double NNfunction_sb_dLdL::synapse0x2c77350() {
   return (neuron0x2c63560()*-0.104138);
}

double NNfunction_sb_dLdL::synapse0x2c77390() {
   return (neuron0x2c638a0()*0.121102);
}

double NNfunction_sb_dLdL::synapse0x2c773d0() {
   return (neuron0x2c63be0()*0.00925095);
}

double NNfunction_sb_dLdL::synapse0x2c77410() {
   return (neuron0x2c63f20()*-0.0437134);
}

double NNfunction_sb_dLdL::synapse0x2c77450() {
   return (neuron0x2c64260()*0.0685193);
}

double NNfunction_sb_dLdL::synapse0x2c77490() {
   return (neuron0x2c645a0()*-0.230463);
}

double NNfunction_sb_dLdL::synapse0x2c774d0() {
   return (neuron0x2c648e0()*-0.0629583);
}

double NNfunction_sb_dLdL::synapse0x2c77510() {
   return (neuron0x2c64c20()*-0.111409);
}

double NNfunction_sb_dLdL::synapse0x2c77550() {
   return (neuron0x2c64f60()*-0.0133805);
}

double NNfunction_sb_dLdL::synapse0x2c77590() {
   return (neuron0x2c652a0()*0.0217953);
}

double NNfunction_sb_dLdL::synapse0x2c775d0() {
   return (neuron0x2c655e0()*0.0530492);
}

double NNfunction_sb_dLdL::synapse0x2c77610() {
   return (neuron0x2c65920()*-1.20299);
}

double NNfunction_sb_dLdL::synapse0x2c77650() {
   return (neuron0x2c65c60()*-0.00413294);
}

double NNfunction_sb_dLdL::synapse0x2c77690() {
   return (neuron0x2c65fa0()*0.038915);
}

double NNfunction_sb_dLdL::synapse0x2c776d0() {
   return (neuron0x2c662e0()*-0.0276362);
}

double NNfunction_sb_dLdL::synapse0x2c77710() {
   return (neuron0x2c66620()*-0.00877591);
}

double NNfunction_sb_dLdL::synapse0x2c771a0() {
   return (neuron0x2c66960()*-0.0561042);
}

double NNfunction_sb_dLdL::synapse0x2c771e0() {
   return (neuron0x2c66ec0()*0.0392856);
}

double NNfunction_sb_dLdL::synapse0x2c77860() {
   return (neuron0x2c670e0()*0.0221513);
}

double NNfunction_sb_dLdL::synapse0x2c778a0() {
   return (neuron0x2c67420()*0.0114711);
}

double NNfunction_sb_dLdL::synapse0x2c778e0() {
   return (neuron0x2c67760()*-0.0366253);
}

double NNfunction_sb_dLdL::synapse0x2c77920() {
   return (neuron0x2c67aa0()*-0.0289126);
}

double NNfunction_sb_dLdL::synapse0x2c77960() {
   return (neuron0x2c67de0()*0.00525142);
}

double NNfunction_sb_dLdL::synapse0x2c779a0() {
   return (neuron0x2c68120()*-0.00180738);
}

double NNfunction_sb_dLdL::synapse0x2c77d20() {
   return (neuron0x2c63560()*0.0272066);
}

double NNfunction_sb_dLdL::synapse0x2c77d60() {
   return (neuron0x2c638a0()*-0.0268542);
}

double NNfunction_sb_dLdL::synapse0x2c77da0() {
   return (neuron0x2c63be0()*1.87069);
}

double NNfunction_sb_dLdL::synapse0x2c77de0() {
   return (neuron0x2c63f20()*-0.114899);
}

double NNfunction_sb_dLdL::synapse0x2c77e20() {
   return (neuron0x2c64260()*-0.0259302);
}

double NNfunction_sb_dLdL::synapse0x2c77e60() {
   return (neuron0x2c645a0()*-0.00594497);
}

double NNfunction_sb_dLdL::synapse0x2c77ea0() {
   return (neuron0x2c648e0()*0.0162433);
}

double NNfunction_sb_dLdL::synapse0x2c77ee0() {
   return (neuron0x2c64c20()*-0.0199171);
}

double NNfunction_sb_dLdL::synapse0x2c77f20() {
   return (neuron0x2c64f60()*0.0253074);
}

double NNfunction_sb_dLdL::synapse0x2c77f60() {
   return (neuron0x2c652a0()*-0.0252665);
}

double NNfunction_sb_dLdL::synapse0x2c77fa0() {
   return (neuron0x2c655e0()*0.0208731);
}

double NNfunction_sb_dLdL::synapse0x2c77fe0() {
   return (neuron0x2c65920()*-0.37967);
}

double NNfunction_sb_dLdL::synapse0x2c78020() {
   return (neuron0x2c65c60()*-0.0334779);
}

double NNfunction_sb_dLdL::synapse0x2c78060() {
   return (neuron0x2c65fa0()*0.0694809);
}

double NNfunction_sb_dLdL::synapse0x2c780a0() {
   return (neuron0x2c662e0()*-0.00774089);
}

double NNfunction_sb_dLdL::synapse0x2c780e0() {
   return (neuron0x2c66620()*-0.0753343);
}

double NNfunction_sb_dLdL::synapse0x2c77b70() {
   return (neuron0x2c66960()*0.0474678);
}

double NNfunction_sb_dLdL::synapse0x2c77bb0() {
   return (neuron0x2c66ec0()*-0.00809057);
}

double NNfunction_sb_dLdL::synapse0x2c78230() {
   return (neuron0x2c670e0()*-0.02132);
}

double NNfunction_sb_dLdL::synapse0x2c78270() {
   return (neuron0x2c67420()*0.0274291);
}

double NNfunction_sb_dLdL::synapse0x2c782b0() {
   return (neuron0x2c67760()*-0.0113501);
}

double NNfunction_sb_dLdL::synapse0x2c782f0() {
   return (neuron0x2c67aa0()*-0.0492583);
}

double NNfunction_sb_dLdL::synapse0x2c78330() {
   return (neuron0x2c67de0()*-0.0130426);
}

double NNfunction_sb_dLdL::synapse0x2c78370() {
   return (neuron0x2c68120()*-0.0149198);
}

double NNfunction_sb_dLdL::synapse0x2c786f0() {
   return (neuron0x2c63560()*0.0333768);
}

double NNfunction_sb_dLdL::synapse0x2c78730() {
   return (neuron0x2c638a0()*0.000947332);
}

double NNfunction_sb_dLdL::synapse0x2c78770() {
   return (neuron0x2c63be0()*-1.38098);
}

double NNfunction_sb_dLdL::synapse0x2c787b0() {
   return (neuron0x2c63f20()*-0.0471679);
}

double NNfunction_sb_dLdL::synapse0x2c787f0() {
   return (neuron0x2c64260()*0.00673604);
}

double NNfunction_sb_dLdL::synapse0x2c78830() {
   return (neuron0x2c645a0()*0.0265089);
}

double NNfunction_sb_dLdL::synapse0x2c78870() {
   return (neuron0x2c648e0()*-0.000673559);
}

double NNfunction_sb_dLdL::synapse0x2c788b0() {
   return (neuron0x2c64c20()*-0.0088828);
}

double NNfunction_sb_dLdL::synapse0x2c788f0() {
   return (neuron0x2c64f60()*0.00438495);
}

double NNfunction_sb_dLdL::synapse0x2c78930() {
   return (neuron0x2c652a0()*0.00679846);
}

double NNfunction_sb_dLdL::synapse0x2c78970() {
   return (neuron0x2c655e0()*-0.0420244);
}

double NNfunction_sb_dLdL::synapse0x2c789b0() {
   return (neuron0x2c65920()*0.589235);
}

double NNfunction_sb_dLdL::synapse0x2c789f0() {
   return (neuron0x2c65c60()*0.0726266);
}

double NNfunction_sb_dLdL::synapse0x2c78a30() {
   return (neuron0x2c65fa0()*-0.107395);
}

double NNfunction_sb_dLdL::synapse0x2c78a70() {
   return (neuron0x2c662e0()*-0.00015655);
}

double NNfunction_sb_dLdL::synapse0x2c78ab0() {
   return (neuron0x2c66620()*-0.00267156);
}

double NNfunction_sb_dLdL::synapse0x2c78540() {
   return (neuron0x2c66960()*-0.114889);
}

double NNfunction_sb_dLdL::synapse0x2c78580() {
   return (neuron0x2c66ec0()*0.0205638);
}

double NNfunction_sb_dLdL::synapse0x2c78c00() {
   return (neuron0x2c670e0()*0.0174091);
}

double NNfunction_sb_dLdL::synapse0x2c78c40() {
   return (neuron0x2c67420()*0.0317804);
}

double NNfunction_sb_dLdL::synapse0x2c78c80() {
   return (neuron0x2c67760()*-0.00761827);
}

double NNfunction_sb_dLdL::synapse0x2c78cc0() {
   return (neuron0x2c67aa0()*0.0218947);
}

double NNfunction_sb_dLdL::synapse0x2c78d00() {
   return (neuron0x2c67de0()*-0.00241574);
}

double NNfunction_sb_dLdL::synapse0x2c78d40() {
   return (neuron0x2c68120()*-0.0038936);
}

double NNfunction_sb_dLdL::synapse0x2c8ac10() {
   return (neuron0x2c63560()*-0.524305);
}

double NNfunction_sb_dLdL::synapse0x2c8ac50() {
   return (neuron0x2c638a0()*0.308349);
}

double NNfunction_sb_dLdL::synapse0x2c8ac90() {
   return (neuron0x2c63be0()*-0.0973413);
}

double NNfunction_sb_dLdL::synapse0x2c8acd0() {
   return (neuron0x2c63f20()*-0.334174);
}

double NNfunction_sb_dLdL::synapse0x2c8ad10() {
   return (neuron0x2c64260()*0.168429);
}

double NNfunction_sb_dLdL::synapse0x2c8ad50() {
   return (neuron0x2c645a0()*-0.340572);
}

double NNfunction_sb_dLdL::synapse0x2c8ad90() {
   return (neuron0x2c648e0()*-0.342947);
}

double NNfunction_sb_dLdL::synapse0x2c8add0() {
   return (neuron0x2c64c20()*-0.133362);
}

double NNfunction_sb_dLdL::synapse0x2c8ae10() {
   return (neuron0x2c64f60()*-0.245212);
}

double NNfunction_sb_dLdL::synapse0x2c8ae50() {
   return (neuron0x2c652a0()*-0.0077613);
}

double NNfunction_sb_dLdL::synapse0x2c8ae90() {
   return (neuron0x2c655e0()*0.249664);
}

double NNfunction_sb_dLdL::synapse0x2c8aed0() {
   return (neuron0x2c65920()*0.150704);
}

double NNfunction_sb_dLdL::synapse0x2c8af10() {
   return (neuron0x2c65c60()*0.270706);
}

double NNfunction_sb_dLdL::synapse0x2c8af50() {
   return (neuron0x2c65fa0()*-0.410633);
}

double NNfunction_sb_dLdL::synapse0x2c8af90() {
   return (neuron0x2c662e0()*-0.123115);
}

double NNfunction_sb_dLdL::synapse0x2c8afd0() {
   return (neuron0x2c66620()*0.237043);
}

double NNfunction_sb_dLdL::synapse0x2c78d80() {
   return (neuron0x2c66960()*0.214491);
}

double NNfunction_sb_dLdL::synapse0x2c78dc0() {
   return (neuron0x2c66ec0()*-0.0115523);
}

double NNfunction_sb_dLdL::synapse0x2c8b120() {
   return (neuron0x2c670e0()*-0.102506);
}

double NNfunction_sb_dLdL::synapse0x2c8b160() {
   return (neuron0x2c67420()*-0.141364);
}

double NNfunction_sb_dLdL::synapse0x2c8b1a0() {
   return (neuron0x2c67760()*0.062193);
}

double NNfunction_sb_dLdL::synapse0x2c8b1e0() {
   return (neuron0x2c67aa0()*-0.11608);
}

double NNfunction_sb_dLdL::synapse0x2c8b220() {
   return (neuron0x2c67de0()*-0.107861);
}

double NNfunction_sb_dLdL::synapse0x2c8b260() {
   return (neuron0x2c68120()*0.409041);
}

double NNfunction_sb_dLdL::synapse0x2c8b5e0() {
   return (neuron0x2c63560()*-0.0468176);
}

double NNfunction_sb_dLdL::synapse0x2c8b620() {
   return (neuron0x2c638a0()*0.400018);
}

double NNfunction_sb_dLdL::synapse0x2c8b660() {
   return (neuron0x2c63be0()*-0.00283023);
}

double NNfunction_sb_dLdL::synapse0x2c8b6a0() {
   return (neuron0x2c63f20()*0.549421);
}

double NNfunction_sb_dLdL::synapse0x2c8b6e0() {
   return (neuron0x2c64260()*0.428026);
}

double NNfunction_sb_dLdL::synapse0x2c8b720() {
   return (neuron0x2c645a0()*0.0399608);
}

double NNfunction_sb_dLdL::synapse0x2c8b760() {
   return (neuron0x2c648e0()*0.287458);
}

double NNfunction_sb_dLdL::synapse0x2c8b7a0() {
   return (neuron0x2c64c20()*0.194791);
}

double NNfunction_sb_dLdL::synapse0x2c8b7e0() {
   return (neuron0x2c64f60()*0.429835);
}

double NNfunction_sb_dLdL::synapse0x2c8b820() {
   return (neuron0x2c652a0()*0.41198);
}

double NNfunction_sb_dLdL::synapse0x2c8b860() {
   return (neuron0x2c655e0()*-0.4813);
}

double NNfunction_sb_dLdL::synapse0x2c8b8a0() {
   return (neuron0x2c65920()*0.282095);
}

double NNfunction_sb_dLdL::synapse0x2c8b8e0() {
   return (neuron0x2c65c60()*-0.417673);
}

double NNfunction_sb_dLdL::synapse0x2c8b920() {
   return (neuron0x2c65fa0()*0.215572);
}

double NNfunction_sb_dLdL::synapse0x2c8b960() {
   return (neuron0x2c662e0()*0.182122);
}

double NNfunction_sb_dLdL::synapse0x2c8b9a0() {
   return (neuron0x2c66620()*0.141287);
}

double NNfunction_sb_dLdL::synapse0x2c8b430() {
   return (neuron0x2c66960()*-0.227501);
}

double NNfunction_sb_dLdL::synapse0x2c8b470() {
   return (neuron0x2c66ec0()*0.347074);
}

double NNfunction_sb_dLdL::synapse0x2c8baf0() {
   return (neuron0x2c670e0()*-0.160604);
}

double NNfunction_sb_dLdL::synapse0x2c8bb30() {
   return (neuron0x2c67420()*-0.0506031);
}

double NNfunction_sb_dLdL::synapse0x2c8bb70() {
   return (neuron0x2c67760()*-0.298828);
}

double NNfunction_sb_dLdL::synapse0x2c8bbb0() {
   return (neuron0x2c67aa0()*0.443119);
}

double NNfunction_sb_dLdL::synapse0x2c8bbf0() {
   return (neuron0x2c67de0()*-0.0289784);
}

double NNfunction_sb_dLdL::synapse0x2c8bc30() {
   return (neuron0x2c68120()*0.252464);
}

double NNfunction_sb_dLdL::synapse0x2c8bfb0() {
   return (neuron0x2c63560()*0.259558);
}

double NNfunction_sb_dLdL::synapse0x2c8bff0() {
   return (neuron0x2c638a0()*-0.0914272);
}

double NNfunction_sb_dLdL::synapse0x2c8c030() {
   return (neuron0x2c63be0()*0.0821286);
}

double NNfunction_sb_dLdL::synapse0x2c8c070() {
   return (neuron0x2c63f20()*-0.238704);
}

double NNfunction_sb_dLdL::synapse0x2c8c0b0() {
   return (neuron0x2c64260()*0.522368);
}

double NNfunction_sb_dLdL::synapse0x2c8c0f0() {
   return (neuron0x2c645a0()*-0.13964);
}

double NNfunction_sb_dLdL::synapse0x2c8c130() {
   return (neuron0x2c648e0()*-0.206817);
}

double NNfunction_sb_dLdL::synapse0x2c8c170() {
   return (neuron0x2c64c20()*-0.0229822);
}

double NNfunction_sb_dLdL::synapse0x2c8c1b0() {
   return (neuron0x2c64f60()*-0.167846);
}

double NNfunction_sb_dLdL::synapse0x2c8c1f0() {
   return (neuron0x2c652a0()*0.0901419);
}

double NNfunction_sb_dLdL::synapse0x2c8c230() {
   return (neuron0x2c655e0()*-0.125339);
}

double NNfunction_sb_dLdL::synapse0x2c8c270() {
   return (neuron0x2c65920()*0.163604);
}

double NNfunction_sb_dLdL::synapse0x2c8c2b0() {
   return (neuron0x2c65c60()*-0.0753644);
}

double NNfunction_sb_dLdL::synapse0x2c8c2f0() {
   return (neuron0x2c65fa0()*-0.306611);
}

double NNfunction_sb_dLdL::synapse0x2c8c330() {
   return (neuron0x2c662e0()*0.0343771);
}

double NNfunction_sb_dLdL::synapse0x2c8c370() {
   return (neuron0x2c66620()*0.319148);
}

double NNfunction_sb_dLdL::synapse0x2c8be00() {
   return (neuron0x2c66960()*0.149653);
}

double NNfunction_sb_dLdL::synapse0x2c8be40() {
   return (neuron0x2c66ec0()*-0.145935);
}

double NNfunction_sb_dLdL::synapse0x2c8c4c0() {
   return (neuron0x2c670e0()*0.444567);
}

double NNfunction_sb_dLdL::synapse0x2c8c500() {
   return (neuron0x2c67420()*0.267071);
}

double NNfunction_sb_dLdL::synapse0x2c8c540() {
   return (neuron0x2c67760()*-0.20482);
}

double NNfunction_sb_dLdL::synapse0x2c8c580() {
   return (neuron0x2c67aa0()*-0.146521);
}

double NNfunction_sb_dLdL::synapse0x2c8c5c0() {
   return (neuron0x2c67de0()*0.034529);
}

double NNfunction_sb_dLdL::synapse0x2c8c600() {
   return (neuron0x2c68120()*-0.31292);
}

double NNfunction_sb_dLdL::synapse0x2c8c980() {
   return (neuron0x2c63560()*-0.193775);
}

double NNfunction_sb_dLdL::synapse0x2c8c9c0() {
   return (neuron0x2c638a0()*0.201702);
}

double NNfunction_sb_dLdL::synapse0x2c8ca00() {
   return (neuron0x2c63be0()*-0.172497);
}

double NNfunction_sb_dLdL::synapse0x2c8ca40() {
   return (neuron0x2c63f20()*0.230145);
}

double NNfunction_sb_dLdL::synapse0x2c8ca80() {
   return (neuron0x2c64260()*0.0329757);
}

double NNfunction_sb_dLdL::synapse0x2c8cac0() {
   return (neuron0x2c645a0()*0.02063);
}

double NNfunction_sb_dLdL::synapse0x2c8cb00() {
   return (neuron0x2c648e0()*-0.27567);
}

double NNfunction_sb_dLdL::synapse0x2c8cb40() {
   return (neuron0x2c64c20()*-0.0164935);
}

double NNfunction_sb_dLdL::synapse0x2c8cb80() {
   return (neuron0x2c64f60()*-0.092662);
}

double NNfunction_sb_dLdL::synapse0x2c8cbc0() {
   return (neuron0x2c652a0()*-0.0540059);
}

double NNfunction_sb_dLdL::synapse0x2c8cc00() {
   return (neuron0x2c655e0()*0.430946);
}

double NNfunction_sb_dLdL::synapse0x2c8cc40() {
   return (neuron0x2c65920()*0.490783);
}

double NNfunction_sb_dLdL::synapse0x2c8cc80() {
   return (neuron0x2c65c60()*0.14675);
}

double NNfunction_sb_dLdL::synapse0x2c8ccc0() {
   return (neuron0x2c65fa0()*0.0955411);
}

double NNfunction_sb_dLdL::synapse0x2c8cd00() {
   return (neuron0x2c662e0()*0.00626917);
}

double NNfunction_sb_dLdL::synapse0x2c8cd40() {
   return (neuron0x2c66620()*-0.365777);
}

double NNfunction_sb_dLdL::synapse0x2c8c7d0() {
   return (neuron0x2c66960()*-0.211168);
}

double NNfunction_sb_dLdL::synapse0x2c8c810() {
   return (neuron0x2c66ec0()*0.0757902);
}

double NNfunction_sb_dLdL::synapse0x2c8ce90() {
   return (neuron0x2c670e0()*-0.336491);
}

double NNfunction_sb_dLdL::synapse0x2c8ced0() {
   return (neuron0x2c67420()*0.217895);
}

double NNfunction_sb_dLdL::synapse0x2c8cf10() {
   return (neuron0x2c67760()*0.180521);
}

double NNfunction_sb_dLdL::synapse0x2c8cf50() {
   return (neuron0x2c67aa0()*0.0145463);
}

double NNfunction_sb_dLdL::synapse0x2c8cf90() {
   return (neuron0x2c67de0()*-0.441361);
}

double NNfunction_sb_dLdL::synapse0x2c8cfd0() {
   return (neuron0x2c68120()*-0.416102);
}

double NNfunction_sb_dLdL::synapse0x2c69570() {
   return (neuron0x2c685c0()*-0.513099);
}

double NNfunction_sb_dLdL::synapse0x2c695b0() {
   return (neuron0x2c68ed0()*-0.175771);
}

double NNfunction_sb_dLdL::synapse0x2c6aa80() {
   return (neuron0x2c699b0()*0.0876289);
}

double NNfunction_sb_dLdL::synapse0x2c6aac0() {
   return (neuron0x2a23240()*0.0243694);
}

double NNfunction_sb_dLdL::synapse0x2c6b450() {
   return (neuron0x2c6a7d0()*0.167144);
}

double NNfunction_sb_dLdL::synapse0x2c6b490() {
   return (neuron0x2c6b1a0()*0.050385);
}

double NNfunction_sb_dLdL::synapse0x2c6c220() {
   return (neuron0x2c6bf70()*0.129351);
}

double NNfunction_sb_dLdL::synapse0x2c6c260() {
   return (neuron0x2c6c940()*0.131142);
}

double NNfunction_sb_dLdL::synapse0x2c6cbf0() {
   return (neuron0x2c6d310()*0.171903);
}

double NNfunction_sb_dLdL::synapse0x2c6cc30() {
   return (neuron0x2c6ddf0()*-0.125239);
}

double NNfunction_sb_dLdL::synapse0x2c6d5c0() {
   return (neuron0x2c6e7c0()*-2.14965);
}

double NNfunction_sb_dLdL::synapse0x2c6d600() {
   return (neuron0x2c6b8a0()*0.0835847);
}

double NNfunction_sb_dLdL::synapse0x2c6e0a0() {
   return (neuron0x2c70370()*-0.00149793);
}

double NNfunction_sb_dLdL::synapse0x2c6e0e0() {
   return (neuron0x2c70d40()*0.0337852);
}

double NNfunction_sb_dLdL::synapse0x2c6ea70() {
   return (neuron0x2c71710()*-0.0274522);
}

double NNfunction_sb_dLdL::synapse0x2c6eab0() {
   return (neuron0x2c720e0()*0.437416);
}

double NNfunction_sb_dLdL::synapse0x2c6bb50() {
   return (neuron0x2c73ef0()*0.136644);
}

double NNfunction_sb_dLdL::synapse0x2c6bb90() {
   return (neuron0x2c741d0()*0.0222912);
}

double NNfunction_sb_dLdL::synapse0x2c70620() {
   return (neuron0x2c74ba0()*1.22988);
}

double NNfunction_sb_dLdL::synapse0x2c70660() {
   return (neuron0x2c75570()*0.0338296);
}

double NNfunction_sb_dLdL::synapse0x2c70ff0() {
   return (neuron0x2c75f40()*3.22476);
}

double NNfunction_sb_dLdL::synapse0x2c71030() {
   return (neuron0x2c76910()*-0.790275);
}

double NNfunction_sb_dLdL::synapse0x2c719c0() {
   return (neuron0x2c6f460()*-0.247726);
}

double NNfunction_sb_dLdL::synapse0x2c71a00() {
   return (neuron0x2c6fe30()*0.135055);
}

double NNfunction_sb_dLdL::synapse0x2c72390() {
   return (neuron0x2c796a0()*-0.218415);
}

double NNfunction_sb_dLdL::synapse0x2c723d0() {
   return (neuron0x2c7a070()*0.042854);
}

double NNfunction_sb_dLdL::synapse0x2c66500() {
   return (neuron0x2c7aa40()*0.400084);
}

double NNfunction_sb_dLdL::synapse0x2c66540() {
   return (neuron0x2c7b410()*-0.260772);
}

double NNfunction_sb_dLdL::synapse0x2c74480() {
   return (neuron0x2c7bde0()*0.073473);
}

double NNfunction_sb_dLdL::synapse0x2c744c0() {
   return (neuron0x2c7c7b0()*-0.179458);
}

double NNfunction_sb_dLdL::synapse0x2c74e50() {
   return (neuron0x2c7d180()*0.387692);
}

double NNfunction_sb_dLdL::synapse0x2c74e90() {
   return (neuron0x2c7db50()*-0.36272);
}

double NNfunction_sb_dLdL::synapse0x2c75820() {
   return (neuron0x2c73be0()*-0.0166222);
}

double NNfunction_sb_dLdL::synapse0x2c75860() {
   return (neuron0x2c80730()*0.0801345);
}

double NNfunction_sb_dLdL::synapse0x2c761f0() {
   return (neuron0x2c81100()*-0.492158);
}

double NNfunction_sb_dLdL::synapse0x2c76230() {
   return (neuron0x2c81ad0()*-0.253902);
}

double NNfunction_sb_dLdL::synapse0x2c76bc0() {
   return (neuron0x2c824a0()*0.187343);
}

double NNfunction_sb_dLdL::synapse0x2c76c00() {
   return (neuron0x2c82e70()*0.902169);
}

double NNfunction_sb_dLdL::synapse0x2c6f710() {
   return (neuron0x2c83840()*0.244434);
}

double NNfunction_sb_dLdL::synapse0x2c6f750() {
   return (neuron0x2c84210()*0.0191965);
}

double NNfunction_sb_dLdL::synapse0x2c78fc0() {
   return (neuron0x2c84be0()*0.00549111);
}

double NNfunction_sb_dLdL::synapse0x2c79000() {
   return (neuron0x2c857c0()*-0.0626027);
}

double NNfunction_sb_dLdL::synapse0x2c79950() {
   return (neuron0x2c86190()*0.515431);
}

double NNfunction_sb_dLdL::synapse0x2c79990() {
   return (neuron0x2c77010()*0.121973);
}

double NNfunction_sb_dLdL::synapse0x2c7a320() {
   return (neuron0x2c779e0()*-0.247655);
}

double NNfunction_sb_dLdL::synapse0x2c7a360() {
   return (neuron0x2c783b0()*-0.243968);
}

double NNfunction_sb_dLdL::synapse0x2c7acf0() {
   return (neuron0x2c8a9f0()*0.00519498);
}

double NNfunction_sb_dLdL::synapse0x2c7ad30() {
   return (neuron0x2c8b2a0()*-0.00309856);
}

double NNfunction_sb_dLdL::synapse0x2c7b6c0() {
   return (neuron0x2c8bc70()*0.069902);
}

double NNfunction_sb_dLdL::synapse0x2c7b700() {
   return (neuron0x2c8c640()*0.0467723);
}

double NNfunction_sb_dLdL::synapse0x2c7de00() {
   return (neuron0x2c685c0()*-0.542488);
}

double NNfunction_sb_dLdL::synapse0x2c7de40() {
   return (neuron0x2c68ed0()*-0.01572);
}

double NNfunction_sb_dLdL::synapse0x2c733c0() {
   return (neuron0x2c699b0()*0.332826);
}

double NNfunction_sb_dLdL::synapse0x2c73400() {
   return (neuron0x2a23240()*0.181176);
}

double NNfunction_sb_dLdL::synapse0x2c809e0() {
   return (neuron0x2c6a7d0()*-0.0400117);
}

double NNfunction_sb_dLdL::synapse0x2c80a20() {
   return (neuron0x2c6b1a0()*-0.724875);
}

double NNfunction_sb_dLdL::synapse0x2c813b0() {
   return (neuron0x2c6bf70()*-0.182409);
}

double NNfunction_sb_dLdL::synapse0x2c813f0() {
   return (neuron0x2c6c940()*-0.282162);
}

double NNfunction_sb_dLdL::synapse0x2c81d80() {
   return (neuron0x2c6d310()*-0.0285555);
}

double NNfunction_sb_dLdL::synapse0x2c81dc0() {
   return (neuron0x2c6ddf0()*-0.569125);
}

double NNfunction_sb_dLdL::synapse0x2c82750() {
   return (neuron0x2c6e7c0()*-0.377702);
}

double NNfunction_sb_dLdL::synapse0x2c82790() {
   return (neuron0x2c6b8a0()*-0.352407);
}

double NNfunction_sb_dLdL::synapse0x2c83120() {
   return (neuron0x2c70370()*-0.191409);
}

double NNfunction_sb_dLdL::synapse0x2c83160() {
   return (neuron0x2c70d40()*-0.326592);
}

double NNfunction_sb_dLdL::synapse0x2c83af0() {
   return (neuron0x2c71710()*-0.134965);
}

double NNfunction_sb_dLdL::synapse0x2c83b30() {
   return (neuron0x2c720e0()*0.541243);
}

double NNfunction_sb_dLdL::synapse0x2c844c0() {
   return (neuron0x2c73ef0()*-0.457359);
}

double NNfunction_sb_dLdL::synapse0x2c84500() {
   return (neuron0x2c741d0()*-0.394341);
}

double NNfunction_sb_dLdL::synapse0x2c84e90() {
   return (neuron0x2c74ba0()*0.535217);
}

double NNfunction_sb_dLdL::synapse0x2c84ed0() {
   return (neuron0x2c75570()*0.095185);
}

double NNfunction_sb_dLdL::synapse0x2c85a70() {
   return (neuron0x2c75f40()*0.288309);
}

double NNfunction_sb_dLdL::synapse0x2c85ab0() {
   return (neuron0x2c76910()*-0.966574);
}

double NNfunction_sb_dLdL::synapse0x2c86440() {
   return (neuron0x2c6f460()*-0.696205);
}

double NNfunction_sb_dLdL::synapse0x2c86480() {
   return (neuron0x2c6fe30()*0.224719);
}

double NNfunction_sb_dLdL::synapse0x2c772c0() {
   return (neuron0x2c796a0()*-0.470616);
}

double NNfunction_sb_dLdL::synapse0x2c77300() {
   return (neuron0x2c7a070()*0.318762);
}

double NNfunction_sb_dLdL::synapse0x2c77c90() {
   return (neuron0x2c7aa40()*0.705934);
}

double NNfunction_sb_dLdL::synapse0x2c77cd0() {
   return (neuron0x2c7b410()*0.178037);
}

double NNfunction_sb_dLdL::synapse0x2c78660() {
   return (neuron0x2c7bde0()*-0.378569);
}

double NNfunction_sb_dLdL::synapse0x2c786a0() {
   return (neuron0x2c7c7b0()*0.358874);
}

double NNfunction_sb_dLdL::synapse0x2c8ab80() {
   return (neuron0x2c7d180()*-0.170353);
}

double NNfunction_sb_dLdL::synapse0x2c8abc0() {
   return (neuron0x2c7db50()*-0.230561);
}

double NNfunction_sb_dLdL::synapse0x2c8b550() {
   return (neuron0x2c73be0()*0.0132804);
}

double NNfunction_sb_dLdL::synapse0x2c8b590() {
   return (neuron0x2c80730()*-0.194498);
}

double NNfunction_sb_dLdL::synapse0x2c8bf20() {
   return (neuron0x2c81100()*-0.333051);
}

double NNfunction_sb_dLdL::synapse0x2c8bf60() {
   return (neuron0x2c81ad0()*-0.46655);
}

double NNfunction_sb_dLdL::synapse0x2c8c8f0() {
   return (neuron0x2c824a0()*0.267752);
}

double NNfunction_sb_dLdL::synapse0x2c8c930() {
   return (neuron0x2c82e70()*0.0459696);
}

double NNfunction_sb_dLdL::synapse0x2c687e0() {
   return (neuron0x2c83840()*0.382697);
}

double NNfunction_sb_dLdL::synapse0x2c68820() {
   return (neuron0x2c84210()*0.0746362);
}

double NNfunction_sb_dLdL::synapse0x2c7c090() {
   return (neuron0x2c84be0()*0.368939);
}

double NNfunction_sb_dLdL::synapse0x2c7c0d0() {
   return (neuron0x2c857c0()*0.260172);
}

double NNfunction_sb_dLdL::synapse0x2c8d010() {
   return (neuron0x2c86190()*0.47671);
}

double NNfunction_sb_dLdL::synapse0x2c8d050() {
   return (neuron0x2c77010()*0.536283);
}

double NNfunction_sb_dLdL::synapse0x2c8d090() {
   return (neuron0x2c779e0()*0.644292);
}

double NNfunction_sb_dLdL::synapse0x2c8d0d0() {
   return (neuron0x2c783b0()*0.426734);
}

double NNfunction_sb_dLdL::synapse0x2c93f80() {
   return (neuron0x2c8a9f0()*0.146914);
}

double NNfunction_sb_dLdL::synapse0x2c93fc0() {
   return (neuron0x2c8b2a0()*-0.0962823);
}

double NNfunction_sb_dLdL::synapse0x2c94000() {
   return (neuron0x2c8bc70()*0.433514);
}

double NNfunction_sb_dLdL::synapse0x2c94040() {
   return (neuron0x2c8c640()*0.221966);
}

double NNfunction_sb_dLdL::synapse0x2c943c0() {
   return (neuron0x2c685c0()*1.95149);
}

double NNfunction_sb_dLdL::synapse0x2c94400() {
   return (neuron0x2c68ed0()*1.44616);
}

double NNfunction_sb_dLdL::synapse0x2c94440() {
   return (neuron0x2c699b0()*0.0469626);
}

double NNfunction_sb_dLdL::synapse0x2c94480() {
   return (neuron0x2a23240()*-0.843709);
}

double NNfunction_sb_dLdL::synapse0x2c944c0() {
   return (neuron0x2c6a7d0()*3.99966);
}

double NNfunction_sb_dLdL::synapse0x2c94500() {
   return (neuron0x2c6b1a0()*-2.40536);
}

double NNfunction_sb_dLdL::synapse0x2c94540() {
   return (neuron0x2c6bf70()*-0.554691);
}

double NNfunction_sb_dLdL::synapse0x2c94580() {
   return (neuron0x2c6c940()*0.918612);
}

double NNfunction_sb_dLdL::synapse0x2c945c0() {
   return (neuron0x2c6d310()*-1.1737);
}

double NNfunction_sb_dLdL::synapse0x2c94600() {
   return (neuron0x2c6ddf0()*4.35899);
}

double NNfunction_sb_dLdL::synapse0x2c94640() {
   return (neuron0x2c6e7c0()*5.78791);
}

double NNfunction_sb_dLdL::synapse0x2c94680() {
   return (neuron0x2c6b8a0()*0.295478);
}

double NNfunction_sb_dLdL::synapse0x2c946c0() {
   return (neuron0x2c70370()*-0.513149);
}

double NNfunction_sb_dLdL::synapse0x2c94700() {
   return (neuron0x2c70d40()*-0.481391);
}

double NNfunction_sb_dLdL::synapse0x2c94740() {
   return (neuron0x2c71710()*-0.3629);
}

double NNfunction_sb_dLdL::synapse0x2c94780() {
   return (neuron0x2c720e0()*0.0502791);
}

double NNfunction_sb_dLdL::synapse0x2c94210() {
   return (neuron0x2c73ef0()*-0.812057);
}

double NNfunction_sb_dLdL::synapse0x2c94250() {
   return (neuron0x2c741d0()*-0.608695);
}

double NNfunction_sb_dLdL::synapse0x2c948d0() {
   return (neuron0x2c74ba0()*-4.17686);
}

double NNfunction_sb_dLdL::synapse0x2c94910() {
   return (neuron0x2c75570()*-1.41374);
}

double NNfunction_sb_dLdL::synapse0x2c94950() {
   return (neuron0x2c75f40()*-4.94126);
}

double NNfunction_sb_dLdL::synapse0x2c94990() {
   return (neuron0x2c76910()*0.213237);
}

double NNfunction_sb_dLdL::synapse0x2c949d0() {
   return (neuron0x2c6f460()*-1.9117);
}

double NNfunction_sb_dLdL::synapse0x2c94a10() {
   return (neuron0x2c6fe30()*-0.66695);
}

double NNfunction_sb_dLdL::synapse0x2c94a50() {
   return (neuron0x2c796a0()*1.52704);
}

double NNfunction_sb_dLdL::synapse0x2c94a90() {
   return (neuron0x2c7a070()*0.115463);
}

double NNfunction_sb_dLdL::synapse0x2c94ad0() {
   return (neuron0x2c7aa40()*-1.06803);
}

double NNfunction_sb_dLdL::synapse0x2c94b10() {
   return (neuron0x2c7b410()*0.735259);
}

double NNfunction_sb_dLdL::synapse0x2c94b50() {
   return (neuron0x2c7bde0()*-0.358015);
}

double NNfunction_sb_dLdL::synapse0x2c94b90() {
   return (neuron0x2c7c7b0()*-0.944252);
}

double NNfunction_sb_dLdL::synapse0x2c94bd0() {
   return (neuron0x2c7d180()*-1.24614);
}

double NNfunction_sb_dLdL::synapse0x2c94c10() {
   return (neuron0x2c7db50()*1.47958);
}

double NNfunction_sb_dLdL::synapse0x2c947c0() {
   return (neuron0x2c73be0()*-0.434032);
}

double NNfunction_sb_dLdL::synapse0x2c94800() {
   return (neuron0x2c80730()*0.726599);
}

double NNfunction_sb_dLdL::synapse0x2c94840() {
   return (neuron0x2c81100()*2.35198);
}

double NNfunction_sb_dLdL::synapse0x2c94880() {
   return (neuron0x2c81ad0()*0.236083);
}

double NNfunction_sb_dLdL::synapse0x2c94e60() {
   return (neuron0x2c824a0()*-0.364702);
}

double NNfunction_sb_dLdL::synapse0x2c94ea0() {
   return (neuron0x2c82e70()*1.36699);
}

double NNfunction_sb_dLdL::synapse0x2c94ee0() {
   return (neuron0x2c83840()*-1.00781);
}

double NNfunction_sb_dLdL::synapse0x2c94f20() {
   return (neuron0x2c84210()*-1.84413);
}

double NNfunction_sb_dLdL::synapse0x2c94f60() {
   return (neuron0x2c84be0()*-0.236011);
}

double NNfunction_sb_dLdL::synapse0x2c94fa0() {
   return (neuron0x2c857c0()*-0.261469);
}

double NNfunction_sb_dLdL::synapse0x2c94fe0() {
   return (neuron0x2c86190()*-1.53269);
}

double NNfunction_sb_dLdL::synapse0x2c95020() {
   return (neuron0x2c77010()*-0.0073038);
}

double NNfunction_sb_dLdL::synapse0x2c95060() {
   return (neuron0x2c779e0()*-1.47889);
}

double NNfunction_sb_dLdL::synapse0x2c950a0() {
   return (neuron0x2c783b0()*2.69459);
}

double NNfunction_sb_dLdL::synapse0x2c950e0() {
   return (neuron0x2c8a9f0()*0.261642);
}

double NNfunction_sb_dLdL::synapse0x2c95120() {
   return (neuron0x2c8b2a0()*0.0328066);
}

double NNfunction_sb_dLdL::synapse0x2c95160() {
   return (neuron0x2c8bc70()*0.612738);
}

double NNfunction_sb_dLdL::synapse0x2c951a0() {
   return (neuron0x2c8c640()*-0.143922);
}

double NNfunction_sb_dLdL::synapse0x2c95520() {
   return (neuron0x2c685c0()*0.956371);
}

double NNfunction_sb_dLdL::synapse0x2c95560() {
   return (neuron0x2c68ed0()*0.385552);
}

double NNfunction_sb_dLdL::synapse0x2c955a0() {
   return (neuron0x2c699b0()*-0.0137937);
}

double NNfunction_sb_dLdL::synapse0x2c955e0() {
   return (neuron0x2a23240()*-0.407425);
}

double NNfunction_sb_dLdL::synapse0x2c95620() {
   return (neuron0x2c6a7d0()*0.462276);
}

double NNfunction_sb_dLdL::synapse0x2c95660() {
   return (neuron0x2c6b1a0()*-2.33011);
}

double NNfunction_sb_dLdL::synapse0x2c956a0() {
   return (neuron0x2c6bf70()*-0.376053);
}

double NNfunction_sb_dLdL::synapse0x2c956e0() {
   return (neuron0x2c6c940()*-0.719955);
}

double NNfunction_sb_dLdL::synapse0x2c95720() {
   return (neuron0x2c6d310()*-0.69529);
}

double NNfunction_sb_dLdL::synapse0x2c95760() {
   return (neuron0x2c6ddf0()*-1.75748);
}

double NNfunction_sb_dLdL::synapse0x2c957a0() {
   return (neuron0x2c6e7c0()*0.866554);
}

double NNfunction_sb_dLdL::synapse0x2c957e0() {
   return (neuron0x2c6b8a0()*-0.386148);
}

double NNfunction_sb_dLdL::synapse0x2c95820() {
   return (neuron0x2c70370()*0.00519668);
}

double NNfunction_sb_dLdL::synapse0x2c95860() {
   return (neuron0x2c70d40()*0.0505995);
}

double NNfunction_sb_dLdL::synapse0x2c958a0() {
   return (neuron0x2c71710()*0.0385229);
}

double NNfunction_sb_dLdL::synapse0x2c958e0() {
   return (neuron0x2c720e0()*-0.827775);
}

double NNfunction_sb_dLdL::synapse0x2c95370() {
   return (neuron0x2c73ef0()*-0.786979);
}

double NNfunction_sb_dLdL::synapse0x2c953b0() {
   return (neuron0x2c741d0()*-0.0642923);
}

double NNfunction_sb_dLdL::synapse0x2c95a30() {
   return (neuron0x2c74ba0()*2.44868);
}

double NNfunction_sb_dLdL::synapse0x2c95a70() {
   return (neuron0x2c75570()*-0.193562);
}

double NNfunction_sb_dLdL::synapse0x2c95ab0() {
   return (neuron0x2c75f40()*0.346857);
}

double NNfunction_sb_dLdL::synapse0x2c95af0() {
   return (neuron0x2c76910()*0.833071);
}

double NNfunction_sb_dLdL::synapse0x2c95b30() {
   return (neuron0x2c6f460()*-1.71789);
}

double NNfunction_sb_dLdL::synapse0x2c95b70() {
   return (neuron0x2c6fe30()*-0.240921);
}

double NNfunction_sb_dLdL::synapse0x2c95bb0() {
   return (neuron0x2c796a0()*0.30392);
}

double NNfunction_sb_dLdL::synapse0x2c95bf0() {
   return (neuron0x2c7a070()*0.306339);
}

double NNfunction_sb_dLdL::synapse0x2c95c30() {
   return (neuron0x2c7aa40()*-0.543803);
}

double NNfunction_sb_dLdL::synapse0x2c95c70() {
   return (neuron0x2c7b410()*-0.00528315);
}

double NNfunction_sb_dLdL::synapse0x2c95cb0() {
   return (neuron0x2c7bde0()*-0.0581419);
}

double NNfunction_sb_dLdL::synapse0x2c95cf0() {
   return (neuron0x2c7c7b0()*-0.205447);
}

double NNfunction_sb_dLdL::synapse0x2c95d30() {
   return (neuron0x2c7d180()*0.134208);
}

double NNfunction_sb_dLdL::synapse0x2c95d70() {
   return (neuron0x2c7db50()*-0.288108);
}

double NNfunction_sb_dLdL::synapse0x2c95920() {
   return (neuron0x2c73be0()*0.138048);
}

double NNfunction_sb_dLdL::synapse0x2c95960() {
   return (neuron0x2c80730()*0.174579);
}

double NNfunction_sb_dLdL::synapse0x2c959a0() {
   return (neuron0x2c81100()*0.57105);
}

double NNfunction_sb_dLdL::synapse0x2c959e0() {
   return (neuron0x2c81ad0()*0.227284);
}

double NNfunction_sb_dLdL::synapse0x2c95fc0() {
   return (neuron0x2c824a0()*-0.663362);
}

double NNfunction_sb_dLdL::synapse0x2c96000() {
   return (neuron0x2c82e70()*0.691643);
}

double NNfunction_sb_dLdL::synapse0x2c96040() {
   return (neuron0x2c83840()*-0.729366);
}

double NNfunction_sb_dLdL::synapse0x2c96080() {
   return (neuron0x2c84210()*-1.70056);
}

double NNfunction_sb_dLdL::synapse0x2c960c0() {
   return (neuron0x2c84be0()*-1.03168);
}

double NNfunction_sb_dLdL::synapse0x2c96100() {
   return (neuron0x2c857c0()*0.221826);
}

double NNfunction_sb_dLdL::synapse0x2c96140() {
   return (neuron0x2c86190()*-0.654924);
}

double NNfunction_sb_dLdL::synapse0x2c96180() {
   return (neuron0x2c77010()*-1.28053);
}

double NNfunction_sb_dLdL::synapse0x2c961c0() {
   return (neuron0x2c779e0()*-0.396846);
}

double NNfunction_sb_dLdL::synapse0x2c96200() {
   return (neuron0x2c783b0()*1.06717);
}

double NNfunction_sb_dLdL::synapse0x2c96240() {
   return (neuron0x2c8a9f0()*0.0220823);
}

double NNfunction_sb_dLdL::synapse0x2c96280() {
   return (neuron0x2c8b2a0()*-0.142894);
}

double NNfunction_sb_dLdL::synapse0x2c962c0() {
   return (neuron0x2c8bc70()*0.0378589);
}

double NNfunction_sb_dLdL::synapse0x2c96300() {
   return (neuron0x2c8c640()*0.145142);
}

double NNfunction_sb_dLdL::synapse0x2c96680() {
   return (neuron0x2c685c0()*-0.370462);
}

double NNfunction_sb_dLdL::synapse0x2c966c0() {
   return (neuron0x2c68ed0()*-0.0462952);
}

double NNfunction_sb_dLdL::synapse0x2c96700() {
   return (neuron0x2c699b0()*0.122513);
}

double NNfunction_sb_dLdL::synapse0x2c96740() {
   return (neuron0x2a23240()*0.124663);
}

double NNfunction_sb_dLdL::synapse0x2c96780() {
   return (neuron0x2c6a7d0()*0.221271);
}

double NNfunction_sb_dLdL::synapse0x2c967c0() {
   return (neuron0x2c6b1a0()*-1.01134);
}

double NNfunction_sb_dLdL::synapse0x2c96800() {
   return (neuron0x2c6bf70()*-0.0137055);
}

double NNfunction_sb_dLdL::synapse0x2c96840() {
   return (neuron0x2c6c940()*0.0600921);
}

double NNfunction_sb_dLdL::synapse0x2c96880() {
   return (neuron0x2c6d310()*0.177139);
}

double NNfunction_sb_dLdL::synapse0x2c968c0() {
   return (neuron0x2c6ddf0()*-0.0318099);
}

double NNfunction_sb_dLdL::synapse0x2c96900() {
   return (neuron0x2c6e7c0()*0.68777);
}

double NNfunction_sb_dLdL::synapse0x2c96940() {
   return (neuron0x2c6b8a0()*0.62919);
}

double NNfunction_sb_dLdL::synapse0x2c96980() {
   return (neuron0x2c70370()*-0.0442244);
}

double NNfunction_sb_dLdL::synapse0x2c969c0() {
   return (neuron0x2c70d40()*-0.0929122);
}

double NNfunction_sb_dLdL::synapse0x2c96a00() {
   return (neuron0x2c71710()*-0.0302333);
}

double NNfunction_sb_dLdL::synapse0x2c96a40() {
   return (neuron0x2c720e0()*0.454262);
}

double NNfunction_sb_dLdL::synapse0x2c964d0() {
   return (neuron0x2c73ef0()*-0.0749805);
}

double NNfunction_sb_dLdL::synapse0x2c96510() {
   return (neuron0x2c741d0()*-0.0932707);
}

double NNfunction_sb_dLdL::synapse0x2c96b90() {
   return (neuron0x2c74ba0()*0.268404);
}

double NNfunction_sb_dLdL::synapse0x2c96bd0() {
   return (neuron0x2c75570()*-0.102007);
}

double NNfunction_sb_dLdL::synapse0x2c96c10() {
   return (neuron0x2c75f40()*-0.363624);
}

double NNfunction_sb_dLdL::synapse0x2c96c50() {
   return (neuron0x2c76910()*0.4856);
}

double NNfunction_sb_dLdL::synapse0x2c96c90() {
   return (neuron0x2c6f460()*-0.317511);
}

double NNfunction_sb_dLdL::synapse0x2c96cd0() {
   return (neuron0x2c6fe30()*0.0742922);
}

double NNfunction_sb_dLdL::synapse0x2c96d10() {
   return (neuron0x2c796a0()*-0.257202);
}

double NNfunction_sb_dLdL::synapse0x2c96d50() {
   return (neuron0x2c7a070()*-1.76507);
}

double NNfunction_sb_dLdL::synapse0x2c96d90() {
   return (neuron0x2c7aa40()*-1.51166);
}

double NNfunction_sb_dLdL::synapse0x2c96dd0() {
   return (neuron0x2c7b410()*0.0378232);
}

double NNfunction_sb_dLdL::synapse0x2c96e10() {
   return (neuron0x2c7bde0()*-0.082626);
}

double NNfunction_sb_dLdL::synapse0x2c96e50() {
   return (neuron0x2c7c7b0()*0.0539057);
}

double NNfunction_sb_dLdL::synapse0x2c96e90() {
   return (neuron0x2c7d180()*-0.0315598);
}

double NNfunction_sb_dLdL::synapse0x2c96ed0() {
   return (neuron0x2c7db50()*0.0197657);
}

double NNfunction_sb_dLdL::synapse0x2c96a80() {
   return (neuron0x2c73be0()*-0.0164157);
}

double NNfunction_sb_dLdL::synapse0x2c96ac0() {
   return (neuron0x2c80730()*-0.0305647);
}

double NNfunction_sb_dLdL::synapse0x2c96b00() {
   return (neuron0x2c81100()*1.30989);
}

double NNfunction_sb_dLdL::synapse0x2c96b40() {
   return (neuron0x2c81ad0()*-0.184589);
}

double NNfunction_sb_dLdL::synapse0x2c97120() {
   return (neuron0x2c824a0()*0.203559);
}

double NNfunction_sb_dLdL::synapse0x2c97160() {
   return (neuron0x2c82e70()*0.570874);
}

double NNfunction_sb_dLdL::synapse0x2c971a0() {
   return (neuron0x2c83840()*0.295907);
}

double NNfunction_sb_dLdL::synapse0x2c971e0() {
   return (neuron0x2c84210()*-0.269665);
}

double NNfunction_sb_dLdL::synapse0x2c97220() {
   return (neuron0x2c84be0()*0.265667);
}

double NNfunction_sb_dLdL::synapse0x2c97260() {
   return (neuron0x2c857c0()*0.0233895);
}

double NNfunction_sb_dLdL::synapse0x2c972a0() {
   return (neuron0x2c86190()*0.152887);
}

double NNfunction_sb_dLdL::synapse0x2c972e0() {
   return (neuron0x2c77010()*0.503554);
}

double NNfunction_sb_dLdL::synapse0x2c97320() {
   return (neuron0x2c779e0()*0.030195);
}

double NNfunction_sb_dLdL::synapse0x2c97360() {
   return (neuron0x2c783b0()*0.109426);
}

double NNfunction_sb_dLdL::synapse0x2c973a0() {
   return (neuron0x2c8a9f0()*0.0474934);
}

double NNfunction_sb_dLdL::synapse0x2c973e0() {
   return (neuron0x2c8b2a0()*0.000399828);
}

double NNfunction_sb_dLdL::synapse0x2c97420() {
   return (neuron0x2c8bc70()*0.106505);
}

double NNfunction_sb_dLdL::synapse0x2c97460() {
   return (neuron0x2c8c640()*0.0385749);
}

double NNfunction_sb_dLdL::synapse0x2c68580() {
   return (neuron0x2c93840()*-2.62749);
}

double NNfunction_sb_dLdL::synapse0x2c976c0() {
   return (neuron0x2c93be0()*-1.84857);
}

double NNfunction_sb_dLdL::synapse0x2c97700() {
   return (neuron0x2c94080()*9.79868);
}

double NNfunction_sb_dLdL::synapse0x2c97740() {
   return (neuron0x2c951e0()*4.93634);
}

double NNfunction_sb_dLdL::synapse0x2c97780() {
   return (neuron0x2c96340()*7.182);
}

