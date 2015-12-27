#include "NNfunction_sg_dR.h"
#include <cmath>

double NNfunction_sg_dR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4066)/15.1515;
   input1 = (in1 - 47.7233)/899.21;
   input2 = (in2 - 485.717)/539.378;
   input3 = (in3 - 232.34)/741.544;
   input4 = (in4 - 1014.17)/833.549;
   input5 = (in5 - 924.804)/843.444;
   input6 = (in6 - 928.635)/843;
   input7 = (in7 - 924.508)/823.207;
   input8 = (in8 - 931.222)/864.326;
   input9 = (in9 - 921.735)/853.066;
   input10 = (in10 - 925.769)/838.419;
   input11 = (in11 - 902.259)/793.29;
   input12 = (in12 - 904.539)/794.457;
   input13 = (in13 - 675.956)/528.607;
   input14 = (in14 - 896.386)/759.039;
   input15 = (in15 - 898.135)/760.232;
   input16 = (in16 - 611.51)/493.662;
   input17 = (in17 - 800.043)/670.833;
   input18 = (in18 - 916.248)/812.096;
   input19 = (in19 - 914.797)/770.905;
   input20 = (in20 - -193.737)/520.776;
   input21 = (in21 - -253.975)/1102.63;
   input22 = (in22 - -21.8663)/1107.97;
   input23 = (in23 - -44.9512)/605.635;
   switch(index) {
     case 0:
         return neuron0x4296cc0();
     default:
         return 0.;
   }
}

double NNfunction_sg_dR::Value(int index, double* input) {
   input0 = (input[0] - 23.4066)/15.1515;
   input1 = (input[1] - 47.7233)/899.21;
   input2 = (input[2] - 485.717)/539.378;
   input3 = (input[3] - 232.34)/741.544;
   input4 = (input[4] - 1014.17)/833.549;
   input5 = (input[5] - 924.804)/843.444;
   input6 = (input[6] - 928.635)/843;
   input7 = (input[7] - 924.508)/823.207;
   input8 = (input[8] - 931.222)/864.326;
   input9 = (input[9] - 921.735)/853.066;
   input10 = (input[10] - 925.769)/838.419;
   input11 = (input[11] - 902.259)/793.29;
   input12 = (input[12] - 904.539)/794.457;
   input13 = (input[13] - 675.956)/528.607;
   input14 = (input[14] - 896.386)/759.039;
   input15 = (input[15] - 898.135)/760.232;
   input16 = (input[16] - 611.51)/493.662;
   input17 = (input[17] - 800.043)/670.833;
   input18 = (input[18] - 916.248)/812.096;
   input19 = (input[19] - 914.797)/770.905;
   input20 = (input[20] - -193.737)/520.776;
   input21 = (input[21] - -253.975)/1102.63;
   input22 = (input[22] - -21.8663)/1107.97;
   input23 = (input[23] - -44.9512)/605.635;
   switch(index) {
     case 0:
         return neuron0x4296cc0();
     default:
         return 0.;
   }
}

double NNfunction_sg_dR::neuron0x4261d30() {
   return input0;
}

double NNfunction_sg_dR::neuron0x4261fe0() {
   return input1;
}

double NNfunction_sg_dR::neuron0x4262320() {
   return input2;
}

double NNfunction_sg_dR::neuron0x4262660() {
   return input3;
}

double NNfunction_sg_dR::neuron0x42629a0() {
   return input4;
}

double NNfunction_sg_dR::neuron0x4262ce0() {
   return input5;
}

double NNfunction_sg_dR::neuron0x4263020() {
   return input6;
}

double NNfunction_sg_dR::neuron0x4263360() {
   return input7;
}

double NNfunction_sg_dR::neuron0x42636a0() {
   return input8;
}

double NNfunction_sg_dR::neuron0x42639e0() {
   return input9;
}

double NNfunction_sg_dR::neuron0x4263d20() {
   return input10;
}

double NNfunction_sg_dR::neuron0x4264060() {
   return input11;
}

double NNfunction_sg_dR::neuron0x42643a0() {
   return input12;
}

double NNfunction_sg_dR::neuron0x42646e0() {
   return input13;
}

double NNfunction_sg_dR::neuron0x4264a20() {
   return input14;
}

double NNfunction_sg_dR::neuron0x4264d60() {
   return input15;
}

double NNfunction_sg_dR::neuron0x42650a0() {
   return input16;
}

double NNfunction_sg_dR::neuron0x4265600() {
   return input17;
}

double NNfunction_sg_dR::neuron0x4265820() {
   return input18;
}

double NNfunction_sg_dR::neuron0x4265b60() {
   return input19;
}

double NNfunction_sg_dR::neuron0x4265ea0() {
   return input20;
}

double NNfunction_sg_dR::neuron0x42661e0() {
   return input21;
}

double NNfunction_sg_dR::neuron0x4266520() {
   return input22;
}

double NNfunction_sg_dR::neuron0x4266860() {
   return input23;
}

double NNfunction_sg_dR::input0x4266cd0() {
   double input = -0.800168;
   input += synapse0x4267010();
   input += synapse0x4267050();
   input += synapse0x4267090();
   input += synapse0x42670d0();
   input += synapse0x4267110();
   input += synapse0x4267150();
   input += synapse0x4267190();
   input += synapse0x42671d0();
   input += synapse0x4267210();
   input += synapse0x4267250();
   input += synapse0x4267290();
   input += synapse0x42672d0();
   input += synapse0x4267310();
   input += synapse0x4267350();
   input += synapse0x4267390();
   input += synapse0x42673d0();
   input += synapse0x4266e60();
   input += synapse0x4266ea0();
   input += synapse0x2e8ccd0();
   input += synapse0x2e8cd10();
   input += synapse0x4267520();
   input += synapse0x4267560();
   input += synapse0x42675a0();
   input += synapse0x42675e0();
   return input;
}

double NNfunction_sg_dR::neuron0x4266cd0() {
   double input = input0x4266cd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x4267620() {
   double input = 0.989263;
   input += synapse0x4267960();
   input += synapse0x42679a0();
   input += synapse0x42679e0();
   input += synapse0x4267a20();
   input += synapse0x4267a60();
   input += synapse0x4267aa0();
   input += synapse0x4267ae0();
   input += synapse0x4267b20();
   input += synapse0x4267b60();
   input += synapse0x4267410();
   input += synapse0x4267450();
   input += synapse0x4267490();
   input += synapse0x42674d0();
   input += synapse0x4267db0();
   input += synapse0x4267df0();
   input += synapse0x4267e30();
   input += synapse0x42677b0();
   input += synapse0x42677f0();
   input += synapse0x4267f80();
   input += synapse0x4267fc0();
   input += synapse0x4268000();
   input += synapse0x4268040();
   input += synapse0x4268080();
   input += synapse0x42680c0();
   return input;
}

double NNfunction_sg_dR::neuron0x4267620() {
   double input = input0x4267620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x4268100() {
   double input = -1.92839;
   input += synapse0x4268440();
   input += synapse0x4268480();
   input += synapse0x42684c0();
   input += synapse0x4268500();
   input += synapse0x4268540();
   input += synapse0x4268580();
   input += synapse0x42685c0();
   input += synapse0x4268600();
   input += synapse0x4268640();
   input += synapse0x4268680();
   input += synapse0x42686c0();
   input += synapse0x4268700();
   input += synapse0x4268740();
   input += synapse0x4268780();
   input += synapse0x42687c0();
   input += synapse0x4268800();
   input += synapse0x4268290();
   input += synapse0x42682d0();
   input += synapse0x2e8dcb0();
   input += synapse0x402be00();
   input += synapse0x402be40();
   input += synapse0x426a740();
   input += synapse0x426a780();
   input += synapse0x4261a70();
   return input;
}

double NNfunction_sg_dR::neuron0x4268100() {
   double input = input0x4268100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x4267ba0() {
   double input = -0.088501;
   input += synapse0x4261b40();
   input += synapse0x402c6a0();
   input += synapse0x4267d30();
   input += synapse0x4267d70();
   input += synapse0x4268950();
   input += synapse0x4268990();
   input += synapse0x42689d0();
   input += synapse0x4268a10();
   input += synapse0x4268a50();
   input += synapse0x4268a90();
   input += synapse0x4268ad0();
   input += synapse0x4268b10();
   input += synapse0x4268b50();
   input += synapse0x4268b90();
   input += synapse0x4268bd0();
   input += synapse0x4268c10();
   input += synapse0x4261ab0();
   input += synapse0x4261af0();
   input += synapse0x4268d60();
   input += synapse0x4268da0();
   input += synapse0x4268de0();
   input += synapse0x4268e20();
   input += synapse0x4268e60();
   input += synapse0x4268ea0();
   return input;
}

double NNfunction_sg_dR::neuron0x4267ba0() {
   double input = input0x4267ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x4268ee0() {
   double input = -1.2942;
   input += synapse0x4269220();
   input += synapse0x4269260();
   input += synapse0x42692a0();
   input += synapse0x42692e0();
   input += synapse0x4269320();
   input += synapse0x4269360();
   input += synapse0x42693a0();
   input += synapse0x42693e0();
   input += synapse0x4269420();
   input += synapse0x4269460();
   input += synapse0x42694a0();
   input += synapse0x42694e0();
   input += synapse0x4269520();
   input += synapse0x4269560();
   input += synapse0x42695a0();
   input += synapse0x42695e0();
   input += synapse0x4269730();
   input += synapse0x4269070();
   input += synapse0x42690b0();
   input += synapse0x426a880();
   input += synapse0x426a8c0();
   input += synapse0x426a900();
   input += synapse0x426a940();
   input += synapse0x426a980();
   return input;
}

double NNfunction_sg_dR::neuron0x4268ee0() {
   double input = input0x4268ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x426a9c0() {
   double input = -1.26759;
   input += synapse0x426ad00();
   input += synapse0x426ad40();
   input += synapse0x426ad80();
   input += synapse0x426adc0();
   input += synapse0x426ae00();
   input += synapse0x426ae40();
   input += synapse0x426ae80();
   input += synapse0x426aec0();
   input += synapse0x426af00();
   input += synapse0x402c170();
   input += synapse0x402c1b0();
   input += synapse0x402c1f0();
   input += synapse0x402c230();
   input += synapse0x402c270();
   input += synapse0x402c2b0();
   input += synapse0x402c2f0();
   input += synapse0x426ab50();
   input += synapse0x426ab90();
   input += synapse0x402c440();
   input += synapse0x402c480();
   input += synapse0x402c4c0();
   input += synapse0x402c500();
   input += synapse0x402c540();
   input += synapse0x426b750();
   return input;
}

double NNfunction_sg_dR::neuron0x426a9c0() {
   double input = input0x426a9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x426b790() {
   double input = 0.884285;
   input += synapse0x426bad0();
   input += synapse0x426bb10();
   input += synapse0x426bb50();
   input += synapse0x426bb90();
   input += synapse0x426bbd0();
   input += synapse0x426bc10();
   input += synapse0x426bc50();
   input += synapse0x426bc90();
   input += synapse0x426bcd0();
   input += synapse0x426bd10();
   input += synapse0x426bd50();
   input += synapse0x426bd90();
   input += synapse0x426bdd0();
   input += synapse0x426be10();
   input += synapse0x426be50();
   input += synapse0x426be90();
   input += synapse0x426b920();
   input += synapse0x426b960();
   input += synapse0x426bfe0();
   input += synapse0x426c020();
   input += synapse0x426c060();
   input += synapse0x426c0a0();
   input += synapse0x426c0e0();
   input += synapse0x426c120();
   return input;
}

double NNfunction_sg_dR::neuron0x426b790() {
   double input = input0x426b790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x426c160() {
   double input = 0.237043;
   input += synapse0x426c4a0();
   input += synapse0x426c4e0();
   input += synapse0x426c520();
   input += synapse0x426c560();
   input += synapse0x426c5a0();
   input += synapse0x426c5e0();
   input += synapse0x426c620();
   input += synapse0x426c660();
   input += synapse0x426c6a0();
   input += synapse0x426c6e0();
   input += synapse0x426c720();
   input += synapse0x426c760();
   input += synapse0x426c7a0();
   input += synapse0x426c7e0();
   input += synapse0x426c820();
   input += synapse0x426c860();
   input += synapse0x426c2f0();
   input += synapse0x426c330();
   input += synapse0x426c9b0();
   input += synapse0x426c9f0();
   input += synapse0x426ca30();
   input += synapse0x426ca70();
   input += synapse0x426cab0();
   input += synapse0x426caf0();
   return input;
}

double NNfunction_sg_dR::neuron0x426c160() {
   double input = input0x426c160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x426cb30() {
   double input = 2.38225;
   input += synapse0x42654f0();
   input += synapse0x4265530();
   input += synapse0x4265570();
   input += synapse0x42655b0();
   input += synapse0x426d080();
   input += synapse0x426d0c0();
   input += synapse0x426d100();
   input += synapse0x426d140();
   input += synapse0x426d180();
   input += synapse0x426d1c0();
   input += synapse0x426d200();
   input += synapse0x426d240();
   input += synapse0x426d280();
   input += synapse0x426d2c0();
   input += synapse0x426d300();
   input += synapse0x426d340();
   input += synapse0x426ccc0();
   input += synapse0x426cd00();
   input += synapse0x426d490();
   input += synapse0x426d4d0();
   input += synapse0x426d510();
   input += synapse0x426d550();
   input += synapse0x426d590();
   input += synapse0x426d5d0();
   return input;
}

double NNfunction_sg_dR::neuron0x426cb30() {
   double input = input0x426cb30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x426d610() {
   double input = 0.694985;
   input += synapse0x426d950();
   input += synapse0x426d990();
   input += synapse0x426d9d0();
   input += synapse0x426da10();
   input += synapse0x426da50();
   input += synapse0x426da90();
   input += synapse0x426dad0();
   input += synapse0x426db10();
   input += synapse0x426db50();
   input += synapse0x426db90();
   input += synapse0x426dbd0();
   input += synapse0x426dc10();
   input += synapse0x426dc50();
   input += synapse0x426dc90();
   input += synapse0x426dcd0();
   input += synapse0x426dd10();
   input += synapse0x426d7a0();
   input += synapse0x426d7e0();
   input += synapse0x426de60();
   input += synapse0x426dea0();
   input += synapse0x426dee0();
   input += synapse0x426df20();
   input += synapse0x426df60();
   input += synapse0x426dfa0();
   return input;
}

double NNfunction_sg_dR::neuron0x426d610() {
   double input = input0x426d610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x426dfe0() {
   double input = -0.954534;
   input += synapse0x426e320();
   input += synapse0x426e360();
   input += synapse0x426e3a0();
   input += synapse0x426e3e0();
   input += synapse0x426e420();
   input += synapse0x426e460();
   input += synapse0x426e4a0();
   input += synapse0x426e4e0();
   input += synapse0x426e520();
   input += synapse0x426e560();
   input += synapse0x426e5a0();
   input += synapse0x426e5e0();
   input += synapse0x426e620();
   input += synapse0x426e660();
   input += synapse0x426e6a0();
   input += synapse0x426e6e0();
   input += synapse0x426e170();
   input += synapse0x426e1b0();
   input += synapse0x426af40();
   input += synapse0x426af80();
   input += synapse0x426afc0();
   input += synapse0x426b000();
   input += synapse0x426b040();
   input += synapse0x426b080();
   return input;
}

double NNfunction_sg_dR::neuron0x426dfe0() {
   double input = input0x426dfe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x426b0c0() {
   double input = -0.440432;
   input += synapse0x426b400();
   input += synapse0x426b440();
   input += synapse0x426b480();
   input += synapse0x426b4c0();
   input += synapse0x426b500();
   input += synapse0x426b540();
   input += synapse0x426b580();
   input += synapse0x426b5c0();
   input += synapse0x426b600();
   input += synapse0x426b640();
   input += synapse0x426b680();
   input += synapse0x426b6c0();
   input += synapse0x426b700();
   input += synapse0x426f840();
   input += synapse0x426f880();
   input += synapse0x426f8c0();
   input += synapse0x426b250();
   input += synapse0x426b290();
   input += synapse0x426fa10();
   input += synapse0x426fa50();
   input += synapse0x426fa90();
   input += synapse0x426fad0();
   input += synapse0x426fb10();
   input += synapse0x426fb50();
   return input;
}

double NNfunction_sg_dR::neuron0x426b0c0() {
   double input = input0x426b0c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x426fb90() {
   double input = -2.11611;
   input += synapse0x426fed0();
   input += synapse0x426ff10();
   input += synapse0x426ff50();
   input += synapse0x426ff90();
   input += synapse0x426ffd0();
   input += synapse0x4270010();
   input += synapse0x4270050();
   input += synapse0x4270090();
   input += synapse0x42700d0();
   input += synapse0x4270110();
   input += synapse0x4270150();
   input += synapse0x4270190();
   input += synapse0x42701d0();
   input += synapse0x4270210();
   input += synapse0x4270250();
   input += synapse0x4270290();
   input += synapse0x426fd20();
   input += synapse0x426fd60();
   input += synapse0x42703e0();
   input += synapse0x4270420();
   input += synapse0x4270460();
   input += synapse0x42704a0();
   input += synapse0x42704e0();
   input += synapse0x4270520();
   return input;
}

double NNfunction_sg_dR::neuron0x426fb90() {
   double input = input0x426fb90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x4270560() {
   double input = -1.25881;
   input += synapse0x42708a0();
   input += synapse0x42708e0();
   input += synapse0x4270920();
   input += synapse0x4270960();
   input += synapse0x42709a0();
   input += synapse0x42709e0();
   input += synapse0x4270a20();
   input += synapse0x4270a60();
   input += synapse0x4270aa0();
   input += synapse0x4270ae0();
   input += synapse0x4270b20();
   input += synapse0x4270b60();
   input += synapse0x4270ba0();
   input += synapse0x4270be0();
   input += synapse0x4270c20();
   input += synapse0x4270c60();
   input += synapse0x42706f0();
   input += synapse0x4270730();
   input += synapse0x4270db0();
   input += synapse0x4270df0();
   input += synapse0x4270e30();
   input += synapse0x4270e70();
   input += synapse0x4270eb0();
   input += synapse0x4270ef0();
   return input;
}

double NNfunction_sg_dR::neuron0x4270560() {
   double input = input0x4270560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x4270f30() {
   double input = 0.397535;
   input += synapse0x4271270();
   input += synapse0x42712b0();
   input += synapse0x42712f0();
   input += synapse0x4271330();
   input += synapse0x4271370();
   input += synapse0x42713b0();
   input += synapse0x42713f0();
   input += synapse0x4271430();
   input += synapse0x4271470();
   input += synapse0x42714b0();
   input += synapse0x42714f0();
   input += synapse0x4271530();
   input += synapse0x4271570();
   input += synapse0x42715b0();
   input += synapse0x42715f0();
   input += synapse0x4271630();
   input += synapse0x42710c0();
   input += synapse0x4271100();
   input += synapse0x4271780();
   input += synapse0x42717c0();
   input += synapse0x4271800();
   input += synapse0x4271840();
   input += synapse0x4271880();
   input += synapse0x42718c0();
   return input;
}

double NNfunction_sg_dR::neuron0x4270f30() {
   double input = input0x4270f30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x4271900() {
   double input = 2.43572;
   input += synapse0x4271c40();
   input += synapse0x4261ec0();
   input += synapse0x4261f00();
   input += synapse0x4262200();
   input += synapse0x4262240();
   input += synapse0x4262540();
   input += synapse0x4262580();
   input += synapse0x4262880();
   input += synapse0x42628c0();
   input += synapse0x4262bc0();
   input += synapse0x4262c00();
   input += synapse0x4262f00();
   input += synapse0x4262f40();
   input += synapse0x4263240();
   input += synapse0x4263280();
   input += synapse0x4263580();
   input += synapse0x42635c0();
   input += synapse0x42638c0();
   input += synapse0x4263900();
   input += synapse0x4263c00();
   input += synapse0x4263c40();
   input += synapse0x4263f40();
   input += synapse0x4263f80();
   input += synapse0x4264280();
   return input;
}

double NNfunction_sg_dR::neuron0x4271900() {
   double input = input0x4271900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x4273710() {
   double input = -1.51818;
   input += synapse0x42642c0();
   input += synapse0x4264f80();
   input += synapse0x4264fc0();
   input += synapse0x4271a90();
   input += synapse0x4271ad0();
   input += synapse0x42652c0();
   input += synapse0x4265300();
   input += synapse0x2ea0d40();
   input += synapse0x2ea0d80();
   input += synapse0x4265a40();
   input += synapse0x4265a80();
   input += synapse0x4265d80();
   input += synapse0x4265dc0();
   input += synapse0x42660c0();
   input += synapse0x4266100();
   input += synapse0x4266400();
   input += synapse0x4266440();
   input += synapse0x4266740();
   input += synapse0x4266780();
   input += synapse0x4266a80();
   input += synapse0x4266ac0();
   input += synapse0x42645c0();
   input += synapse0x4264600();
   input += synapse0x42739b0();
   return input;
}

double NNfunction_sg_dR::neuron0x4273710() {
   double input = input0x4273710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x42739f0() {
   double input = -0.358181;
   input += synapse0x4273d30();
   input += synapse0x4273d70();
   input += synapse0x4273db0();
   input += synapse0x4273df0();
   input += synapse0x4273e30();
   input += synapse0x4273e70();
   input += synapse0x4273eb0();
   input += synapse0x4273ef0();
   input += synapse0x4273f30();
   input += synapse0x4273f70();
   input += synapse0x4273fb0();
   input += synapse0x4273ff0();
   input += synapse0x4274030();
   input += synapse0x4274070();
   input += synapse0x42740b0();
   input += synapse0x42740f0();
   input += synapse0x4273b80();
   input += synapse0x4273bc0();
   input += synapse0x4274240();
   input += synapse0x4274280();
   input += synapse0x42742c0();
   input += synapse0x4274300();
   input += synapse0x4274340();
   input += synapse0x4274380();
   return input;
}

double NNfunction_sg_dR::neuron0x42739f0() {
   double input = input0x42739f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x42743c0() {
   double input = 0.185509;
   input += synapse0x4274700();
   input += synapse0x4274740();
   input += synapse0x4274780();
   input += synapse0x42747c0();
   input += synapse0x4274800();
   input += synapse0x4274840();
   input += synapse0x4274880();
   input += synapse0x42748c0();
   input += synapse0x4274900();
   input += synapse0x4274940();
   input += synapse0x4274980();
   input += synapse0x42749c0();
   input += synapse0x4274a00();
   input += synapse0x4274a40();
   input += synapse0x4274a80();
   input += synapse0x4274ac0();
   input += synapse0x4274550();
   input += synapse0x4274590();
   input += synapse0x4274c10();
   input += synapse0x4274c50();
   input += synapse0x4274c90();
   input += synapse0x4274cd0();
   input += synapse0x4274d10();
   input += synapse0x4274d50();
   return input;
}

double NNfunction_sg_dR::neuron0x42743c0() {
   double input = input0x42743c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x4274d90() {
   double input = 0.284941;
   input += synapse0x42750d0();
   input += synapse0x4275110();
   input += synapse0x4275150();
   input += synapse0x4275190();
   input += synapse0x42751d0();
   input += synapse0x4275210();
   input += synapse0x4275250();
   input += synapse0x4275290();
   input += synapse0x42752d0();
   input += synapse0x4275310();
   input += synapse0x4275350();
   input += synapse0x4275390();
   input += synapse0x42753d0();
   input += synapse0x4275410();
   input += synapse0x4275450();
   input += synapse0x4275490();
   input += synapse0x4274f20();
   input += synapse0x4274f60();
   input += synapse0x42755e0();
   input += synapse0x4275620();
   input += synapse0x4275660();
   input += synapse0x42756a0();
   input += synapse0x42756e0();
   input += synapse0x4275720();
   return input;
}

double NNfunction_sg_dR::neuron0x4274d90() {
   double input = input0x4274d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x4275760() {
   double input = 1.4076;
   input += synapse0x4275aa0();
   input += synapse0x4275ae0();
   input += synapse0x4275b20();
   input += synapse0x4275b60();
   input += synapse0x4275ba0();
   input += synapse0x4275be0();
   input += synapse0x4275c20();
   input += synapse0x4275c60();
   input += synapse0x4275ca0();
   input += synapse0x4275ce0();
   input += synapse0x4275d20();
   input += synapse0x4275d60();
   input += synapse0x4275da0();
   input += synapse0x4275de0();
   input += synapse0x4275e20();
   input += synapse0x4275e60();
   input += synapse0x42758f0();
   input += synapse0x4275930();
   input += synapse0x4275fb0();
   input += synapse0x4275ff0();
   input += synapse0x4276030();
   input += synapse0x4276070();
   input += synapse0x42760b0();
   input += synapse0x42760f0();
   return input;
}

double NNfunction_sg_dR::neuron0x4275760() {
   double input = input0x4275760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x4276130() {
   double input = 0.365797;
   input += synapse0x4276470();
   input += synapse0x42764b0();
   input += synapse0x42764f0();
   input += synapse0x4276530();
   input += synapse0x4276570();
   input += synapse0x42765b0();
   input += synapse0x42765f0();
   input += synapse0x4276630();
   input += synapse0x4276670();
   input += synapse0x426e830();
   input += synapse0x426e870();
   input += synapse0x426e8b0();
   input += synapse0x426e8f0();
   input += synapse0x426e930();
   input += synapse0x426e970();
   input += synapse0x426e9b0();
   input += synapse0x42762c0();
   input += synapse0x4276300();
   input += synapse0x426eb00();
   input += synapse0x426eb40();
   input += synapse0x426eb80();
   input += synapse0x426ebc0();
   input += synapse0x426ec00();
   input += synapse0x426ec40();
   return input;
}

double NNfunction_sg_dR::neuron0x4276130() {
   double input = input0x4276130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x426ec80() {
   double input = -0.390747;
   input += synapse0x426efc0();
   input += synapse0x426f000();
   input += synapse0x426f040();
   input += synapse0x426f080();
   input += synapse0x426f0c0();
   input += synapse0x426f100();
   input += synapse0x426f140();
   input += synapse0x426f180();
   input += synapse0x426f1c0();
   input += synapse0x426f200();
   input += synapse0x426f240();
   input += synapse0x426f280();
   input += synapse0x426f2c0();
   input += synapse0x426f300();
   input += synapse0x426f340();
   input += synapse0x426f380();
   input += synapse0x426ee10();
   input += synapse0x426ee50();
   input += synapse0x426f4d0();
   input += synapse0x426f510();
   input += synapse0x426f550();
   input += synapse0x426f590();
   input += synapse0x426f5d0();
   input += synapse0x426f610();
   return input;
}

double NNfunction_sg_dR::neuron0x426ec80() {
   double input = input0x426ec80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x426f650() {
   double input = -1.31685;
   input += synapse0x426f7e0();
   input += synapse0x4278870();
   input += synapse0x42788b0();
   input += synapse0x42788f0();
   input += synapse0x4278930();
   input += synapse0x4278970();
   input += synapse0x42789b0();
   input += synapse0x42789f0();
   input += synapse0x4278a30();
   input += synapse0x4278a70();
   input += synapse0x4278ab0();
   input += synapse0x4278af0();
   input += synapse0x4278b30();
   input += synapse0x4278b70();
   input += synapse0x4278bb0();
   input += synapse0x4278bf0();
   input += synapse0x42786c0();
   input += synapse0x4278700();
   input += synapse0x4278d40();
   input += synapse0x4278d80();
   input += synapse0x4278dc0();
   input += synapse0x4278e00();
   input += synapse0x4278e40();
   input += synapse0x4278e80();
   return input;
}

double NNfunction_sg_dR::neuron0x426f650() {
   double input = input0x426f650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x4278ec0() {
   double input = -0.20987;
   input += synapse0x4279200();
   input += synapse0x4279240();
   input += synapse0x4279280();
   input += synapse0x42792c0();
   input += synapse0x4279300();
   input += synapse0x4279340();
   input += synapse0x4279380();
   input += synapse0x42793c0();
   input += synapse0x4279400();
   input += synapse0x4279440();
   input += synapse0x4279480();
   input += synapse0x42794c0();
   input += synapse0x4279500();
   input += synapse0x4279540();
   input += synapse0x4279580();
   input += synapse0x42795c0();
   input += synapse0x4279050();
   input += synapse0x4279090();
   input += synapse0x4279710();
   input += synapse0x4279750();
   input += synapse0x4279790();
   input += synapse0x42797d0();
   input += synapse0x4279810();
   input += synapse0x4279850();
   return input;
}

double NNfunction_sg_dR::neuron0x4278ec0() {
   double input = input0x4278ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x4279890() {
   double input = -0.0808052;
   input += synapse0x4279bd0();
   input += synapse0x4279c10();
   input += synapse0x4279c50();
   input += synapse0x4279c90();
   input += synapse0x4279cd0();
   input += synapse0x4279d10();
   input += synapse0x4279d50();
   input += synapse0x4279d90();
   input += synapse0x4279dd0();
   input += synapse0x4279e10();
   input += synapse0x4279e50();
   input += synapse0x4279e90();
   input += synapse0x4279ed0();
   input += synapse0x4279f10();
   input += synapse0x4279f50();
   input += synapse0x4279f90();
   input += synapse0x4279a20();
   input += synapse0x4279a60();
   input += synapse0x427a0e0();
   input += synapse0x427a120();
   input += synapse0x427a160();
   input += synapse0x427a1a0();
   input += synapse0x427a1e0();
   input += synapse0x427a220();
   return input;
}

double NNfunction_sg_dR::neuron0x4279890() {
   double input = input0x4279890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x427a260() {
   double input = 2.36726;
   input += synapse0x427a5a0();
   input += synapse0x427a5e0();
   input += synapse0x427a620();
   input += synapse0x427a660();
   input += synapse0x427a6a0();
   input += synapse0x427a6e0();
   input += synapse0x427a720();
   input += synapse0x427a760();
   input += synapse0x427a7a0();
   input += synapse0x427a7e0();
   input += synapse0x427a820();
   input += synapse0x427a860();
   input += synapse0x427a8a0();
   input += synapse0x427a8e0();
   input += synapse0x427a920();
   input += synapse0x427a960();
   input += synapse0x427a3f0();
   input += synapse0x427a430();
   input += synapse0x427aab0();
   input += synapse0x427aaf0();
   input += synapse0x427ab30();
   input += synapse0x427ab70();
   input += synapse0x427abb0();
   input += synapse0x427abf0();
   return input;
}

double NNfunction_sg_dR::neuron0x427a260() {
   double input = input0x427a260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x427ac30() {
   double input = -0.421054;
   input += synapse0x427af70();
   input += synapse0x427afb0();
   input += synapse0x427aff0();
   input += synapse0x427b030();
   input += synapse0x427b070();
   input += synapse0x427b0b0();
   input += synapse0x427b0f0();
   input += synapse0x427b130();
   input += synapse0x427b170();
   input += synapse0x427b1b0();
   input += synapse0x427b1f0();
   input += synapse0x427b230();
   input += synapse0x427b270();
   input += synapse0x427b2b0();
   input += synapse0x427b2f0();
   input += synapse0x427b330();
   input += synapse0x427adc0();
   input += synapse0x427ae00();
   input += synapse0x427b480();
   input += synapse0x427b4c0();
   input += synapse0x427b500();
   input += synapse0x427b540();
   input += synapse0x427b580();
   input += synapse0x427b5c0();
   return input;
}

double NNfunction_sg_dR::neuron0x427ac30() {
   double input = input0x427ac30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x427b600() {
   double input = 2.29055;
   input += synapse0x427b940();
   input += synapse0x427b980();
   input += synapse0x427b9c0();
   input += synapse0x427ba00();
   input += synapse0x427ba40();
   input += synapse0x427ba80();
   input += synapse0x427bac0();
   input += synapse0x427bb00();
   input += synapse0x427bb40();
   input += synapse0x427bb80();
   input += synapse0x427bbc0();
   input += synapse0x427bc00();
   input += synapse0x427bc40();
   input += synapse0x427bc80();
   input += synapse0x427bcc0();
   input += synapse0x427bd00();
   input += synapse0x427b790();
   input += synapse0x427b7d0();
   input += synapse0x427be50();
   input += synapse0x427be90();
   input += synapse0x427bed0();
   input += synapse0x427bf10();
   input += synapse0x427bf50();
   input += synapse0x427bf90();
   return input;
}

double NNfunction_sg_dR::neuron0x427b600() {
   double input = input0x427b600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x427bfd0() {
   double input = 0.972915;
   input += synapse0x427c310();
   input += synapse0x427c350();
   input += synapse0x427c390();
   input += synapse0x427c3d0();
   input += synapse0x427c410();
   input += synapse0x427c450();
   input += synapse0x427c490();
   input += synapse0x427c4d0();
   input += synapse0x427c510();
   input += synapse0x427c550();
   input += synapse0x427c590();
   input += synapse0x427c5d0();
   input += synapse0x427c610();
   input += synapse0x427c650();
   input += synapse0x427c690();
   input += synapse0x427c6d0();
   input += synapse0x427c160();
   input += synapse0x427c1a0();
   input += synapse0x427c820();
   input += synapse0x427c860();
   input += synapse0x427c8a0();
   input += synapse0x427c8e0();
   input += synapse0x427c920();
   input += synapse0x427c960();
   return input;
}

double NNfunction_sg_dR::neuron0x427bfd0() {
   double input = input0x427bfd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x427c9a0() {
   double input = -2.8175;
   input += synapse0x427cce0();
   input += synapse0x427cd20();
   input += synapse0x427cd60();
   input += synapse0x427cda0();
   input += synapse0x427cde0();
   input += synapse0x427ce20();
   input += synapse0x427ce60();
   input += synapse0x427cea0();
   input += synapse0x427cee0();
   input += synapse0x427cf20();
   input += synapse0x427cf60();
   input += synapse0x427cfa0();
   input += synapse0x427cfe0();
   input += synapse0x427d020();
   input += synapse0x427d060();
   input += synapse0x427d0a0();
   input += synapse0x427cb30();
   input += synapse0x427cb70();
   input += synapse0x427d1f0();
   input += synapse0x427d230();
   input += synapse0x427d270();
   input += synapse0x427d2b0();
   input += synapse0x427d2f0();
   input += synapse0x427d330();
   return input;
}

double NNfunction_sg_dR::neuron0x427c9a0() {
   double input = input0x427c9a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x427d370() {
   double input = -2.98933;
   input += synapse0x427d6b0();
   input += synapse0x4271c80();
   input += synapse0x4271cc0();
   input += synapse0x4271d00();
   input += synapse0x4271f50();
   input += synapse0x4271f90();
   input += synapse0x4271fd0();
   input += synapse0x4272220();
   input += synapse0x4272260();
   input += synapse0x42724b0();
   input += synapse0x42724f0();
   input += synapse0x4272530();
   input += synapse0x4272780();
   input += synapse0x42727c0();
   input += synapse0x4272a10();
   input += synapse0x4272a50();
   input += synapse0x427d500();
   input += synapse0x427d540();
   input += synapse0x4272ba0();
   input += synapse0x42730b0();
   input += synapse0x42730f0();
   input += synapse0x4273130();
   input += synapse0x4273380();
   input += synapse0x42733c0();
   return input;
}

double NNfunction_sg_dR::neuron0x427d370() {
   double input = input0x427d370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x4273400() {
   double input = 0.0517878;
   input += synapse0x4272c70();
   input += synapse0x4272cb0();
   input += synapse0x4272cf0();
   input += synapse0x4272d30();
   input += synapse0x42736b0();
   input += synapse0x427fa00();
   input += synapse0x427fa40();
   input += synapse0x427fa80();
   input += synapse0x427fac0();
   input += synapse0x427fb00();
   input += synapse0x427fb40();
   input += synapse0x427fb80();
   input += synapse0x427fbc0();
   input += synapse0x427fc00();
   input += synapse0x427fc40();
   input += synapse0x427fc80();
   input += synapse0x4273590();
   input += synapse0x42735d0();
   input += synapse0x427fdd0();
   input += synapse0x427fe10();
   input += synapse0x427fe50();
   input += synapse0x427fe90();
   input += synapse0x427fed0();
   input += synapse0x427ff10();
   return input;
}

double NNfunction_sg_dR::neuron0x4273400() {
   double input = input0x4273400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x427ff50() {
   double input = 0.144748;
   input += synapse0x4280290();
   input += synapse0x42802d0();
   input += synapse0x4280310();
   input += synapse0x4280350();
   input += synapse0x4280390();
   input += synapse0x42803d0();
   input += synapse0x4280410();
   input += synapse0x4280450();
   input += synapse0x4280490();
   input += synapse0x42804d0();
   input += synapse0x4280510();
   input += synapse0x4280550();
   input += synapse0x4280590();
   input += synapse0x42805d0();
   input += synapse0x4280610();
   input += synapse0x4280650();
   input += synapse0x42800e0();
   input += synapse0x4280120();
   input += synapse0x42807a0();
   input += synapse0x42807e0();
   input += synapse0x4280820();
   input += synapse0x4280860();
   input += synapse0x42808a0();
   input += synapse0x42808e0();
   return input;
}

double NNfunction_sg_dR::neuron0x427ff50() {
   double input = input0x427ff50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x4280920() {
   double input = 1.7417;
   input += synapse0x4280c60();
   input += synapse0x4280ca0();
   input += synapse0x4280ce0();
   input += synapse0x4280d20();
   input += synapse0x4280d60();
   input += synapse0x4280da0();
   input += synapse0x4280de0();
   input += synapse0x4280e20();
   input += synapse0x4280e60();
   input += synapse0x4280ea0();
   input += synapse0x4280ee0();
   input += synapse0x4280f20();
   input += synapse0x4280f60();
   input += synapse0x4280fa0();
   input += synapse0x4280fe0();
   input += synapse0x4281020();
   input += synapse0x4280ab0();
   input += synapse0x4280af0();
   input += synapse0x4281170();
   input += synapse0x42811b0();
   input += synapse0x42811f0();
   input += synapse0x4281230();
   input += synapse0x4281270();
   input += synapse0x42812b0();
   return input;
}

double NNfunction_sg_dR::neuron0x4280920() {
   double input = input0x4280920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x42812f0() {
   double input = -0.454963;
   input += synapse0x4281630();
   input += synapse0x4281670();
   input += synapse0x42816b0();
   input += synapse0x42816f0();
   input += synapse0x4281730();
   input += synapse0x4281770();
   input += synapse0x42817b0();
   input += synapse0x42817f0();
   input += synapse0x4281830();
   input += synapse0x4281870();
   input += synapse0x42818b0();
   input += synapse0x42818f0();
   input += synapse0x4281930();
   input += synapse0x4281970();
   input += synapse0x42819b0();
   input += synapse0x42819f0();
   input += synapse0x4281480();
   input += synapse0x42814c0();
   input += synapse0x4281b40();
   input += synapse0x4281b80();
   input += synapse0x4281bc0();
   input += synapse0x4281c00();
   input += synapse0x4281c40();
   input += synapse0x4281c80();
   return input;
}

double NNfunction_sg_dR::neuron0x42812f0() {
   double input = input0x42812f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x4281cc0() {
   double input = 0.393663;
   input += synapse0x4282000();
   input += synapse0x4282040();
   input += synapse0x4282080();
   input += synapse0x42820c0();
   input += synapse0x4282100();
   input += synapse0x4282140();
   input += synapse0x4282180();
   input += synapse0x42821c0();
   input += synapse0x4282200();
   input += synapse0x4282240();
   input += synapse0x4282280();
   input += synapse0x42822c0();
   input += synapse0x4282300();
   input += synapse0x4282340();
   input += synapse0x4282380();
   input += synapse0x42823c0();
   input += synapse0x4281e50();
   input += synapse0x4281e90();
   input += synapse0x4282510();
   input += synapse0x4282550();
   input += synapse0x4282590();
   input += synapse0x42825d0();
   input += synapse0x4282610();
   input += synapse0x4282650();
   return input;
}

double NNfunction_sg_dR::neuron0x4281cc0() {
   double input = input0x4281cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x4282690() {
   double input = -0.304254;
   input += synapse0x42829d0();
   input += synapse0x4282a10();
   input += synapse0x4282a50();
   input += synapse0x4282a90();
   input += synapse0x4282ad0();
   input += synapse0x4282b10();
   input += synapse0x4282b50();
   input += synapse0x4282b90();
   input += synapse0x4282bd0();
   input += synapse0x4282c10();
   input += synapse0x4282c50();
   input += synapse0x4282c90();
   input += synapse0x4282cd0();
   input += synapse0x4282d10();
   input += synapse0x4282d50();
   input += synapse0x4282d90();
   input += synapse0x4282820();
   input += synapse0x4282860();
   input += synapse0x4282ee0();
   input += synapse0x4282f20();
   input += synapse0x4282f60();
   input += synapse0x4282fa0();
   input += synapse0x4282fe0();
   input += synapse0x4283020();
   return input;
}

double NNfunction_sg_dR::neuron0x4282690() {
   double input = input0x4282690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x4283060() {
   double input = -0.200931;
   input += synapse0x42833a0();
   input += synapse0x42833e0();
   input += synapse0x4283420();
   input += synapse0x4283460();
   input += synapse0x42834a0();
   input += synapse0x42834e0();
   input += synapse0x4283520();
   input += synapse0x4283560();
   input += synapse0x42835a0();
   input += synapse0x42835e0();
   input += synapse0x4283620();
   input += synapse0x4283660();
   input += synapse0x42836a0();
   input += synapse0x42836e0();
   input += synapse0x4283720();
   input += synapse0x4283760();
   input += synapse0x42831f0();
   input += synapse0x4283230();
   input += synapse0x42838b0();
   input += synapse0x42838f0();
   input += synapse0x4283930();
   input += synapse0x4283970();
   input += synapse0x42839b0();
   input += synapse0x42839f0();
   return input;
}

double NNfunction_sg_dR::neuron0x4283060() {
   double input = input0x4283060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x4283a30() {
   double input = 0.512946;
   input += synapse0x4283d70();
   input += synapse0x4283db0();
   input += synapse0x4283df0();
   input += synapse0x4283e30();
   input += synapse0x4283e70();
   input += synapse0x4283eb0();
   input += synapse0x4283ef0();
   input += synapse0x4283f30();
   input += synapse0x4283f70();
   input += synapse0x4283fb0();
   input += synapse0x4283ff0();
   input += synapse0x4284030();
   input += synapse0x4284070();
   input += synapse0x42840b0();
   input += synapse0x42840f0();
   input += synapse0x4284130();
   input += synapse0x4283bc0();
   input += synapse0x4283c00();
   input += synapse0x4284280();
   input += synapse0x42842c0();
   input += synapse0x4284300();
   input += synapse0x4284340();
   input += synapse0x4284380();
   input += synapse0x42843c0();
   return input;
}

double NNfunction_sg_dR::neuron0x4283a30() {
   double input = input0x4283a30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x4284400() {
   double input = 1.47955;
   input += synapse0x426ce70();
   input += synapse0x426ceb0();
   input += synapse0x426cef0();
   input += synapse0x426cf30();
   input += synapse0x426cf70();
   input += synapse0x426cfb0();
   input += synapse0x426cff0();
   input += synapse0x426d030();
   input += synapse0x4284b50();
   input += synapse0x4284b90();
   input += synapse0x4284bd0();
   input += synapse0x4284c10();
   input += synapse0x4284c50();
   input += synapse0x4284c90();
   input += synapse0x4284cd0();
   input += synapse0x4284d10();
   input += synapse0x4284590();
   input += synapse0x42845d0();
   input += synapse0x4284e60();
   input += synapse0x4284ea0();
   input += synapse0x4284ee0();
   input += synapse0x4284f20();
   input += synapse0x4284f60();
   input += synapse0x4284fa0();
   return input;
}

double NNfunction_sg_dR::neuron0x4284400() {
   double input = input0x4284400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x4284fe0() {
   double input = -0.0979641;
   input += synapse0x4285320();
   input += synapse0x4285360();
   input += synapse0x42853a0();
   input += synapse0x42853e0();
   input += synapse0x4285420();
   input += synapse0x4285460();
   input += synapse0x42854a0();
   input += synapse0x42854e0();
   input += synapse0x4285520();
   input += synapse0x4285560();
   input += synapse0x42855a0();
   input += synapse0x42855e0();
   input += synapse0x4285620();
   input += synapse0x4285660();
   input += synapse0x42856a0();
   input += synapse0x42856e0();
   input += synapse0x4285170();
   input += synapse0x42851b0();
   input += synapse0x4285830();
   input += synapse0x4285870();
   input += synapse0x42858b0();
   input += synapse0x42858f0();
   input += synapse0x4285930();
   input += synapse0x4285970();
   return input;
}

double NNfunction_sg_dR::neuron0x4284fe0() {
   double input = input0x4284fe0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x42859b0() {
   double input = -0.334814;
   input += synapse0x4285cf0();
   input += synapse0x4285d30();
   input += synapse0x4285d70();
   input += synapse0x4285db0();
   input += synapse0x4285df0();
   input += synapse0x4285e30();
   input += synapse0x4285e70();
   input += synapse0x4285eb0();
   input += synapse0x4285ef0();
   input += synapse0x4285f30();
   input += synapse0x4285f70();
   input += synapse0x4285fb0();
   input += synapse0x4285ff0();
   input += synapse0x4286030();
   input += synapse0x4286070();
   input += synapse0x42860b0();
   input += synapse0x4285b40();
   input += synapse0x4285b80();
   input += synapse0x42766b0();
   input += synapse0x42766f0();
   input += synapse0x4276730();
   input += synapse0x4276770();
   input += synapse0x42767b0();
   input += synapse0x42767f0();
   return input;
}

double NNfunction_sg_dR::neuron0x42859b0() {
   double input = input0x42859b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x4276830() {
   double input = 0.385075;
   input += synapse0x4276b70();
   input += synapse0x4276bb0();
   input += synapse0x4276bf0();
   input += synapse0x4276c30();
   input += synapse0x4276c70();
   input += synapse0x4276cb0();
   input += synapse0x4276cf0();
   input += synapse0x4276d30();
   input += synapse0x4276d70();
   input += synapse0x4276db0();
   input += synapse0x4276df0();
   input += synapse0x4276e30();
   input += synapse0x4276e70();
   input += synapse0x4276eb0();
   input += synapse0x4276ef0();
   input += synapse0x4276f30();
   input += synapse0x42769c0();
   input += synapse0x4276a00();
   input += synapse0x4277080();
   input += synapse0x42770c0();
   input += synapse0x4277100();
   input += synapse0x4277140();
   input += synapse0x4277180();
   input += synapse0x42771c0();
   return input;
}

double NNfunction_sg_dR::neuron0x4276830() {
   double input = input0x4276830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x4277200() {
   double input = 1.0259;
   input += synapse0x4277540();
   input += synapse0x4277580();
   input += synapse0x42775c0();
   input += synapse0x4277600();
   input += synapse0x4277640();
   input += synapse0x4277680();
   input += synapse0x42776c0();
   input += synapse0x4277700();
   input += synapse0x4277740();
   input += synapse0x4277780();
   input += synapse0x42777c0();
   input += synapse0x4277800();
   input += synapse0x4277840();
   input += synapse0x4277880();
   input += synapse0x42778c0();
   input += synapse0x4277900();
   input += synapse0x4277390();
   input += synapse0x42773d0();
   input += synapse0x4277a50();
   input += synapse0x4277a90();
   input += synapse0x4277ad0();
   input += synapse0x4277b10();
   input += synapse0x4277b50();
   input += synapse0x4277b90();
   return input;
}

double NNfunction_sg_dR::neuron0x4277200() {
   double input = input0x4277200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x4277bd0() {
   double input = 0.256105;
   input += synapse0x4277f10();
   input += synapse0x4277f50();
   input += synapse0x4277f90();
   input += synapse0x4277fd0();
   input += synapse0x4278010();
   input += synapse0x4278050();
   input += synapse0x4278090();
   input += synapse0x42780d0();
   input += synapse0x4278110();
   input += synapse0x4278150();
   input += synapse0x4278190();
   input += synapse0x42781d0();
   input += synapse0x4278210();
   input += synapse0x4278250();
   input += synapse0x4278290();
   input += synapse0x42782d0();
   input += synapse0x4277d60();
   input += synapse0x4277da0();
   input += synapse0x4278420();
   input += synapse0x4278460();
   input += synapse0x42784a0();
   input += synapse0x42784e0();
   input += synapse0x4278520();
   input += synapse0x4278560();
   return input;
}

double NNfunction_sg_dR::neuron0x4277bd0() {
   double input = input0x4277bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x428a210() {
   double input = 1.56442;
   input += synapse0x428a430();
   input += synapse0x428a470();
   input += synapse0x428a4b0();
   input += synapse0x428a4f0();
   input += synapse0x428a530();
   input += synapse0x428a570();
   input += synapse0x428a5b0();
   input += synapse0x428a5f0();
   input += synapse0x428a630();
   input += synapse0x428a670();
   input += synapse0x428a6b0();
   input += synapse0x428a6f0();
   input += synapse0x428a730();
   input += synapse0x428a770();
   input += synapse0x428a7b0();
   input += synapse0x428a7f0();
   input += synapse0x42785a0();
   input += synapse0x42785e0();
   input += synapse0x428a940();
   input += synapse0x428a980();
   input += synapse0x428a9c0();
   input += synapse0x428aa00();
   input += synapse0x428aa40();
   input += synapse0x428aa80();
   return input;
}

double NNfunction_sg_dR::neuron0x428a210() {
   double input = input0x428a210();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x428aac0() {
   double input = -0.161021;
   input += synapse0x428ae00();
   input += synapse0x428ae40();
   input += synapse0x428ae80();
   input += synapse0x428aec0();
   input += synapse0x428af00();
   input += synapse0x428af40();
   input += synapse0x428af80();
   input += synapse0x428afc0();
   input += synapse0x428b000();
   input += synapse0x428b040();
   input += synapse0x428b080();
   input += synapse0x428b0c0();
   input += synapse0x428b100();
   input += synapse0x428b140();
   input += synapse0x428b180();
   input += synapse0x428b1c0();
   input += synapse0x428ac50();
   input += synapse0x428ac90();
   input += synapse0x428b310();
   input += synapse0x428b350();
   input += synapse0x428b390();
   input += synapse0x428b3d0();
   input += synapse0x428b410();
   input += synapse0x428b450();
   return input;
}

double NNfunction_sg_dR::neuron0x428aac0() {
   double input = input0x428aac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x428b490() {
   double input = -0.338657;
   input += synapse0x428b7d0();
   input += synapse0x428b810();
   input += synapse0x428b850();
   input += synapse0x428b890();
   input += synapse0x428b8d0();
   input += synapse0x428b910();
   input += synapse0x428b950();
   input += synapse0x428b990();
   input += synapse0x428b9d0();
   input += synapse0x428ba10();
   input += synapse0x428ba50();
   input += synapse0x428ba90();
   input += synapse0x428bad0();
   input += synapse0x428bb10();
   input += synapse0x428bb50();
   input += synapse0x428bb90();
   input += synapse0x428b620();
   input += synapse0x428b660();
   input += synapse0x428bce0();
   input += synapse0x428bd20();
   input += synapse0x428bd60();
   input += synapse0x428bda0();
   input += synapse0x428bde0();
   input += synapse0x428be20();
   return input;
}

double NNfunction_sg_dR::neuron0x428b490() {
   double input = input0x428b490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x428be60() {
   double input = 0.645735;
   input += synapse0x428c1a0();
   input += synapse0x428c1e0();
   input += synapse0x428c220();
   input += synapse0x428c260();
   input += synapse0x428c2a0();
   input += synapse0x428c2e0();
   input += synapse0x428c320();
   input += synapse0x428c360();
   input += synapse0x428c3a0();
   input += synapse0x428c3e0();
   input += synapse0x428c420();
   input += synapse0x428c460();
   input += synapse0x428c4a0();
   input += synapse0x428c4e0();
   input += synapse0x428c520();
   input += synapse0x428c560();
   input += synapse0x428bff0();
   input += synapse0x428c030();
   input += synapse0x428c6b0();
   input += synapse0x428c6f0();
   input += synapse0x428c730();
   input += synapse0x428c770();
   input += synapse0x428c7b0();
   input += synapse0x428c7f0();
   return input;
}

double NNfunction_sg_dR::neuron0x428be60() {
   double input = input0x428be60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x4293060() {
   double input = 0.66312;
   input += synapse0x402c610();
   input += synapse0x402c650();
   input += synapse0x4269190();
   input += synapse0x42691d0();
   input += synapse0x426ac70();
   input += synapse0x426acb0();
   input += synapse0x426ba40();
   input += synapse0x426ba80();
   input += synapse0x426c410();
   input += synapse0x426c450();
   input += synapse0x426cde0();
   input += synapse0x426ce20();
   input += synapse0x426d8c0();
   input += synapse0x426d900();
   input += synapse0x426e290();
   input += synapse0x426e2d0();
   input += synapse0x426b370();
   input += synapse0x426b3b0();
   input += synapse0x426fe40();
   input += synapse0x426fe80();
   input += synapse0x4270810();
   input += synapse0x4270850();
   input += synapse0x42711e0();
   input += synapse0x4271220();
   input += synapse0x4271bb0();
   input += synapse0x4271bf0();
   input += synapse0x4264c40();
   input += synapse0x4264c80();
   input += synapse0x4273ca0();
   input += synapse0x4273ce0();
   input += synapse0x4274670();
   input += synapse0x42746b0();
   input += synapse0x4275040();
   input += synapse0x4275080();
   input += synapse0x4275a10();
   input += synapse0x4275a50();
   input += synapse0x42763e0();
   input += synapse0x4276420();
   input += synapse0x426ef30();
   input += synapse0x426ef70();
   input += synapse0x42787e0();
   input += synapse0x4278820();
   input += synapse0x4279170();
   input += synapse0x42791b0();
   input += synapse0x4279b40();
   input += synapse0x4279b80();
   input += synapse0x427a510();
   input += synapse0x427a550();
   input += synapse0x427aee0();
   input += synapse0x427af20();
   return input;
}

double NNfunction_sg_dR::neuron0x4293060() {
   double input = input0x4293060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x4293400() {
   double input = -0.128284;
   input += synapse0x427d620();
   input += synapse0x427d660();
   input += synapse0x4272be0();
   input += synapse0x4272c20();
   input += synapse0x4280200();
   input += synapse0x4280240();
   input += synapse0x4280bd0();
   input += synapse0x4280c10();
   input += synapse0x42815a0();
   input += synapse0x42815e0();
   input += synapse0x4281f70();
   input += synapse0x4281fb0();
   input += synapse0x4282940();
   input += synapse0x4282980();
   input += synapse0x4283310();
   input += synapse0x4283350();
   input += synapse0x4283ce0();
   input += synapse0x4283d20();
   input += synapse0x42846b0();
   input += synapse0x42846f0();
   input += synapse0x4285290();
   input += synapse0x42852d0();
   input += synapse0x4285c60();
   input += synapse0x4285ca0();
   input += synapse0x4276ae0();
   input += synapse0x4276b20();
   input += synapse0x42774b0();
   input += synapse0x42774f0();
   input += synapse0x4277e80();
   input += synapse0x4277ec0();
   input += synapse0x428a3a0();
   input += synapse0x428a3e0();
   input += synapse0x428ad70();
   input += synapse0x428adb0();
   input += synapse0x428b740();
   input += synapse0x428b780();
   input += synapse0x428c110();
   input += synapse0x428c150();
   input += synapse0x4266f80();
   input += synapse0x4266fc0();
   input += synapse0x427b8b0();
   input += synapse0x427b8f0();
   input += synapse0x428c830();
   input += synapse0x428c870();
   input += synapse0x428c8b0();
   input += synapse0x428c8f0();
   input += synapse0x42937a0();
   input += synapse0x42937e0();
   input += synapse0x4293820();
   input += synapse0x4293860();
   return input;
}

double NNfunction_sg_dR::neuron0x4293400() {
   double input = input0x4293400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x42938a0() {
   double input = -0.469157;
   input += synapse0x4293be0();
   input += synapse0x4293c20();
   input += synapse0x4293c60();
   input += synapse0x4293ca0();
   input += synapse0x4293ce0();
   input += synapse0x4293d20();
   input += synapse0x4293d60();
   input += synapse0x4293da0();
   input += synapse0x4293de0();
   input += synapse0x4293e20();
   input += synapse0x4293e60();
   input += synapse0x4293ea0();
   input += synapse0x4293ee0();
   input += synapse0x4293f20();
   input += synapse0x4293f60();
   input += synapse0x4293fa0();
   input += synapse0x4293a30();
   input += synapse0x4293a70();
   input += synapse0x42940f0();
   input += synapse0x4294130();
   input += synapse0x4294170();
   input += synapse0x42941b0();
   input += synapse0x42941f0();
   input += synapse0x4294230();
   input += synapse0x4294270();
   input += synapse0x42942b0();
   input += synapse0x42942f0();
   input += synapse0x4294330();
   input += synapse0x4294370();
   input += synapse0x42943b0();
   input += synapse0x42943f0();
   input += synapse0x4294430();
   input += synapse0x4293fe0();
   input += synapse0x4294020();
   input += synapse0x4294060();
   input += synapse0x42940a0();
   input += synapse0x4294680();
   input += synapse0x42946c0();
   input += synapse0x4294700();
   input += synapse0x4294740();
   input += synapse0x4294780();
   input += synapse0x42947c0();
   input += synapse0x4294800();
   input += synapse0x4294840();
   input += synapse0x4294880();
   input += synapse0x42948c0();
   input += synapse0x4294900();
   input += synapse0x4294940();
   input += synapse0x4294980();
   input += synapse0x42949c0();
   return input;
}

double NNfunction_sg_dR::neuron0x42938a0() {
   double input = input0x42938a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x4294a00() {
   double input = -0.774137;
   input += synapse0x4294d40();
   input += synapse0x4294d80();
   input += synapse0x4294dc0();
   input += synapse0x4294e00();
   input += synapse0x4294e40();
   input += synapse0x4294e80();
   input += synapse0x4294ec0();
   input += synapse0x4294f00();
   input += synapse0x4294f40();
   input += synapse0x4294f80();
   input += synapse0x4294fc0();
   input += synapse0x4295000();
   input += synapse0x4295040();
   input += synapse0x4295080();
   input += synapse0x42950c0();
   input += synapse0x4295100();
   input += synapse0x4294b90();
   input += synapse0x4294bd0();
   input += synapse0x4295250();
   input += synapse0x4295290();
   input += synapse0x42952d0();
   input += synapse0x4295310();
   input += synapse0x4295350();
   input += synapse0x4295390();
   input += synapse0x42953d0();
   input += synapse0x4295410();
   input += synapse0x4295450();
   input += synapse0x4295490();
   input += synapse0x42954d0();
   input += synapse0x4295510();
   input += synapse0x4295550();
   input += synapse0x4295590();
   input += synapse0x4295140();
   input += synapse0x4295180();
   input += synapse0x42951c0();
   input += synapse0x4295200();
   input += synapse0x42957e0();
   input += synapse0x4295820();
   input += synapse0x4295860();
   input += synapse0x42958a0();
   input += synapse0x42958e0();
   input += synapse0x4295920();
   input += synapse0x4295960();
   input += synapse0x42959a0();
   input += synapse0x42959e0();
   input += synapse0x4295a20();
   input += synapse0x4295a60();
   input += synapse0x4295aa0();
   input += synapse0x4295ae0();
   input += synapse0x4295b20();
   return input;
}

double NNfunction_sg_dR::neuron0x4294a00() {
   double input = input0x4294a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x4295b60() {
   double input = -0.193214;
   input += synapse0x4295ea0();
   input += synapse0x4295ee0();
   input += synapse0x4295f20();
   input += synapse0x4295f60();
   input += synapse0x4295fa0();
   input += synapse0x4295fe0();
   input += synapse0x4296020();
   input += synapse0x4296060();
   input += synapse0x42960a0();
   input += synapse0x42960e0();
   input += synapse0x4296120();
   input += synapse0x4296160();
   input += synapse0x42961a0();
   input += synapse0x42961e0();
   input += synapse0x4296220();
   input += synapse0x4296260();
   input += synapse0x4295cf0();
   input += synapse0x4295d30();
   input += synapse0x42963b0();
   input += synapse0x42963f0();
   input += synapse0x4296430();
   input += synapse0x4296470();
   input += synapse0x42964b0();
   input += synapse0x42964f0();
   input += synapse0x4296530();
   input += synapse0x4296570();
   input += synapse0x42965b0();
   input += synapse0x42965f0();
   input += synapse0x4296630();
   input += synapse0x4296670();
   input += synapse0x42966b0();
   input += synapse0x42966f0();
   input += synapse0x42962a0();
   input += synapse0x42962e0();
   input += synapse0x4296320();
   input += synapse0x4296360();
   input += synapse0x4296940();
   input += synapse0x4296980();
   input += synapse0x42969c0();
   input += synapse0x4296a00();
   input += synapse0x4296a40();
   input += synapse0x4296a80();
   input += synapse0x4296ac0();
   input += synapse0x4296b00();
   input += synapse0x4296b40();
   input += synapse0x4296b80();
   input += synapse0x4296bc0();
   input += synapse0x4296c00();
   input += synapse0x4296c40();
   input += synapse0x4296c80();
   return input;
}

double NNfunction_sg_dR::neuron0x4295b60() {
   double input = input0x4295b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sg_dR::input0x4296cc0() {
   double input = -4.41693;
   input += synapse0x4296ee0();
   input += synapse0x4296f20();
   input += synapse0x4296f60();
   input += synapse0x4296fa0();
   input += synapse0x4296fe0();
   return input;
}

double NNfunction_sg_dR::neuron0x4296cc0() {
   double input = input0x4296cc0();
   return (input * 1)+0;
}

double NNfunction_sg_dR::synapse0x4267010() {
   return (neuron0x4261d30()*-0.0760663);
}

double NNfunction_sg_dR::synapse0x4267050() {
   return (neuron0x4261fe0()*0.128627);
}

double NNfunction_sg_dR::synapse0x4267090() {
   return (neuron0x4262320()*-0.0368485);
}

double NNfunction_sg_dR::synapse0x42670d0() {
   return (neuron0x4262660()*-1.73129);
}

double NNfunction_sg_dR::synapse0x4267110() {
   return (neuron0x42629a0()*0.146378);
}

double NNfunction_sg_dR::synapse0x4267150() {
   return (neuron0x4262ce0()*0.0837411);
}

double NNfunction_sg_dR::synapse0x4267190() {
   return (neuron0x4263020()*-0.178581);
}

double NNfunction_sg_dR::synapse0x42671d0() {
   return (neuron0x4263360()*0.143573);
}

double NNfunction_sg_dR::synapse0x4267210() {
   return (neuron0x42636a0()*-0.114411);
}

double NNfunction_sg_dR::synapse0x4267250() {
   return (neuron0x42639e0()*-0.102073);
}

double NNfunction_sg_dR::synapse0x4267290() {
   return (neuron0x4263d20()*0.0232972);
}

double NNfunction_sg_dR::synapse0x42672d0() {
   return (neuron0x4264060()*0.295629);
}

double NNfunction_sg_dR::synapse0x4267310() {
   return (neuron0x42643a0()*0.269061);
}

double NNfunction_sg_dR::synapse0x4267350() {
   return (neuron0x42646e0()*0.0529148);
}

double NNfunction_sg_dR::synapse0x4267390() {
   return (neuron0x4264a20()*0.245492);
}

double NNfunction_sg_dR::synapse0x42673d0() {
   return (neuron0x4264d60()*-0.513696);
}

double NNfunction_sg_dR::synapse0x4266e60() {
   return (neuron0x42650a0()*0.106604);
}

double NNfunction_sg_dR::synapse0x4266ea0() {
   return (neuron0x4265600()*-0.0793814);
}

double NNfunction_sg_dR::synapse0x2e8ccd0() {
   return (neuron0x4265820()*0.0571408);
}

double NNfunction_sg_dR::synapse0x2e8cd10() {
   return (neuron0x4265b60()*0.0677266);
}

double NNfunction_sg_dR::synapse0x4267520() {
   return (neuron0x4265ea0()*-0.121494);
}

double NNfunction_sg_dR::synapse0x4267560() {
   return (neuron0x42661e0()*-0.075702);
}

double NNfunction_sg_dR::synapse0x42675a0() {
   return (neuron0x4266520()*0.0225313);
}

double NNfunction_sg_dR::synapse0x42675e0() {
   return (neuron0x4266860()*-0.0649387);
}

double NNfunction_sg_dR::synapse0x4267960() {
   return (neuron0x4261d30()*0.00422472);
}

double NNfunction_sg_dR::synapse0x42679a0() {
   return (neuron0x4261fe0()*0.0130212);
}

double NNfunction_sg_dR::synapse0x42679e0() {
   return (neuron0x4262320()*-0.0110971);
}

double NNfunction_sg_dR::synapse0x4267a20() {
   return (neuron0x4262660()*-0.543848);
}

double NNfunction_sg_dR::synapse0x4267a60() {
   return (neuron0x42629a0()*-0.00264356);
}

double NNfunction_sg_dR::synapse0x4267aa0() {
   return (neuron0x4262ce0()*-0.0023364);
}

double NNfunction_sg_dR::synapse0x4267ae0() {
   return (neuron0x4263020()*-0.00257804);
}

double NNfunction_sg_dR::synapse0x4267b20() {
   return (neuron0x4263360()*-0.010045);
}

double NNfunction_sg_dR::synapse0x4267b60() {
   return (neuron0x42636a0()*0.00762053);
}

double NNfunction_sg_dR::synapse0x4267410() {
   return (neuron0x42639e0()*-0.0156826);
}

double NNfunction_sg_dR::synapse0x4267450() {
   return (neuron0x4263d20()*0.0742066);
}

double NNfunction_sg_dR::synapse0x4267490() {
   return (neuron0x4264060()*0.0718042);
}

double NNfunction_sg_dR::synapse0x42674d0() {
   return (neuron0x42643a0()*0.064133);
}

double NNfunction_sg_dR::synapse0x4267db0() {
   return (neuron0x42646e0()*-0.0482315);
}

double NNfunction_sg_dR::synapse0x4267df0() {
   return (neuron0x4264a20()*0.302719);
}

double NNfunction_sg_dR::synapse0x4267e30() {
   return (neuron0x4264d60()*0.141759);
}

double NNfunction_sg_dR::synapse0x42677b0() {
   return (neuron0x42650a0()*-0.051978);
}

double NNfunction_sg_dR::synapse0x42677f0() {
   return (neuron0x4265600()*-0.184521);
}

double NNfunction_sg_dR::synapse0x4267f80() {
   return (neuron0x4265820()*0.0484299);
}

double NNfunction_sg_dR::synapse0x4267fc0() {
   return (neuron0x4265b60()*0.000703065);
}

double NNfunction_sg_dR::synapse0x4268000() {
   return (neuron0x4265ea0()*0.013593);
}

double NNfunction_sg_dR::synapse0x4268040() {
   return (neuron0x42661e0()*0.0160128);
}

double NNfunction_sg_dR::synapse0x4268080() {
   return (neuron0x4266520()*-0.0198444);
}

double NNfunction_sg_dR::synapse0x42680c0() {
   return (neuron0x4266860()*0.010181);
}

double NNfunction_sg_dR::synapse0x4268440() {
   return (neuron0x4261d30()*0.00991945);
}

double NNfunction_sg_dR::synapse0x4268480() {
   return (neuron0x4261fe0()*-0.105319);
}

double NNfunction_sg_dR::synapse0x42684c0() {
   return (neuron0x4262320()*-0.017709);
}

double NNfunction_sg_dR::synapse0x4268500() {
   return (neuron0x4262660()*-4.72969);
}

double NNfunction_sg_dR::synapse0x4268540() {
   return (neuron0x42629a0()*-0.0926308);
}

double NNfunction_sg_dR::synapse0x4268580() {
   return (neuron0x4262ce0()*0.10104);
}

double NNfunction_sg_dR::synapse0x42685c0() {
   return (neuron0x4263020()*0.0175591);
}

double NNfunction_sg_dR::synapse0x4268600() {
   return (neuron0x4263360()*0.0756719);
}

double NNfunction_sg_dR::synapse0x4268640() {
   return (neuron0x42636a0()*0.0590028);
}

double NNfunction_sg_dR::synapse0x4268680() {
   return (neuron0x42639e0()*-0.0241391);
}

double NNfunction_sg_dR::synapse0x42686c0() {
   return (neuron0x4263d20()*0.032359);
}

double NNfunction_sg_dR::synapse0x4268700() {
   return (neuron0x4264060()*-0.0158866);
}

double NNfunction_sg_dR::synapse0x4268740() {
   return (neuron0x42643a0()*0.00976232);
}

double NNfunction_sg_dR::synapse0x4268780() {
   return (neuron0x42646e0()*-0.076299);
}

double NNfunction_sg_dR::synapse0x42687c0() {
   return (neuron0x4264a20()*-0.0738344);
}

double NNfunction_sg_dR::synapse0x4268800() {
   return (neuron0x4264d60()*-0.159248);
}

double NNfunction_sg_dR::synapse0x4268290() {
   return (neuron0x42650a0()*0.0832612);
}

double NNfunction_sg_dR::synapse0x42682d0() {
   return (neuron0x4265600()*-0.00983442);
}

double NNfunction_sg_dR::synapse0x2e8dcb0() {
   return (neuron0x4265820()*-0.0269082);
}

double NNfunction_sg_dR::synapse0x402be00() {
   return (neuron0x4265b60()*-0.073492);
}

double NNfunction_sg_dR::synapse0x402be40() {
   return (neuron0x4265ea0()*0.0369122);
}

double NNfunction_sg_dR::synapse0x426a740() {
   return (neuron0x42661e0()*0.0644174);
}

double NNfunction_sg_dR::synapse0x426a780() {
   return (neuron0x4266520()*-0.0627362);
}

double NNfunction_sg_dR::synapse0x4261a70() {
   return (neuron0x4266860()*-0.00292944);
}

double NNfunction_sg_dR::synapse0x4261b40() {
   return (neuron0x4261d30()*0.371354);
}

double NNfunction_sg_dR::synapse0x402c6a0() {
   return (neuron0x4261fe0()*0.0862539);
}

double NNfunction_sg_dR::synapse0x4267d30() {
   return (neuron0x4262320()*-0.135903);
}

double NNfunction_sg_dR::synapse0x4267d70() {
   return (neuron0x4262660()*1.11019);
}

double NNfunction_sg_dR::synapse0x4268950() {
   return (neuron0x42629a0()*0.0378888);
}

double NNfunction_sg_dR::synapse0x4268990() {
   return (neuron0x4262ce0()*-0.045827);
}

double NNfunction_sg_dR::synapse0x42689d0() {
   return (neuron0x4263020()*0.125574);
}

double NNfunction_sg_dR::synapse0x4268a10() {
   return (neuron0x4263360()*0.163904);
}

double NNfunction_sg_dR::synapse0x4268a50() {
   return (neuron0x42636a0()*0.0968225);
}

double NNfunction_sg_dR::synapse0x4268a90() {
   return (neuron0x42639e0()*-0.364869);
}

double NNfunction_sg_dR::synapse0x4268ad0() {
   return (neuron0x4263d20()*-0.0515877);
}

double NNfunction_sg_dR::synapse0x4268b10() {
   return (neuron0x4264060()*-0.0379761);
}

double NNfunction_sg_dR::synapse0x4268b50() {
   return (neuron0x42643a0()*0.0636635);
}

double NNfunction_sg_dR::synapse0x4268b90() {
   return (neuron0x42646e0()*0.224592);
}

double NNfunction_sg_dR::synapse0x4268bd0() {
   return (neuron0x4264a20()*0.150333);
}

double NNfunction_sg_dR::synapse0x4268c10() {
   return (neuron0x4264d60()*-0.0467408);
}

double NNfunction_sg_dR::synapse0x4261ab0() {
   return (neuron0x42650a0()*-0.01589);
}

double NNfunction_sg_dR::synapse0x4261af0() {
   return (neuron0x4265600()*0.298599);
}

double NNfunction_sg_dR::synapse0x4268d60() {
   return (neuron0x4265820()*-0.0681544);
}

double NNfunction_sg_dR::synapse0x4268da0() {
   return (neuron0x4265b60()*-0.212707);
}

double NNfunction_sg_dR::synapse0x4268de0() {
   return (neuron0x4265ea0()*0.0776145);
}

double NNfunction_sg_dR::synapse0x4268e20() {
   return (neuron0x42661e0()*-0.204867);
}

double NNfunction_sg_dR::synapse0x4268e60() {
   return (neuron0x4266520()*-0.0239057);
}

double NNfunction_sg_dR::synapse0x4268ea0() {
   return (neuron0x4266860()*0.202564);
}

double NNfunction_sg_dR::synapse0x4269220() {
   return (neuron0x4261d30()*0.00380053);
}

double NNfunction_sg_dR::synapse0x4269260() {
   return (neuron0x4261fe0()*-0.00781678);
}

double NNfunction_sg_dR::synapse0x42692a0() {
   return (neuron0x4262320()*0.0195631);
}

double NNfunction_sg_dR::synapse0x42692e0() {
   return (neuron0x4262660()*0.641399);
}

double NNfunction_sg_dR::synapse0x4269320() {
   return (neuron0x42629a0()*0.0066356);
}

double NNfunction_sg_dR::synapse0x4269360() {
   return (neuron0x4262ce0()*-0.00241907);
}

double NNfunction_sg_dR::synapse0x42693a0() {
   return (neuron0x4263020()*-0.000993612);
}

double NNfunction_sg_dR::synapse0x42693e0() {
   return (neuron0x4263360()*-0.00795881);
}

double NNfunction_sg_dR::synapse0x4269420() {
   return (neuron0x42636a0()*-0.0533208);
}

double NNfunction_sg_dR::synapse0x4269460() {
   return (neuron0x42639e0()*0.0183954);
}

double NNfunction_sg_dR::synapse0x42694a0() {
   return (neuron0x4263d20()*-0.162431);
}

double NNfunction_sg_dR::synapse0x42694e0() {
   return (neuron0x4264060()*-0.0302103);
}

double NNfunction_sg_dR::synapse0x4269520() {
   return (neuron0x42643a0()*-0.0430928);
}

double NNfunction_sg_dR::synapse0x4269560() {
   return (neuron0x42646e0()*-0.0115218);
}

double NNfunction_sg_dR::synapse0x42695a0() {
   return (neuron0x4264a20()*-0.101603);
}

double NNfunction_sg_dR::synapse0x42695e0() {
   return (neuron0x4264d60()*-0.0292035);
}

double NNfunction_sg_dR::synapse0x4269730() {
   return (neuron0x42650a0()*0.021597);
}

double NNfunction_sg_dR::synapse0x4269070() {
   return (neuron0x4265600()*-0.0180698);
}

double NNfunction_sg_dR::synapse0x42690b0() {
   return (neuron0x4265820()*-0.0329775);
}

double NNfunction_sg_dR::synapse0x426a880() {
   return (neuron0x4265b60()*0.00393152);
}

double NNfunction_sg_dR::synapse0x426a8c0() {
   return (neuron0x4265ea0()*-0.00629271);
}

double NNfunction_sg_dR::synapse0x426a900() {
   return (neuron0x42661e0()*-0.00916551);
}

double NNfunction_sg_dR::synapse0x426a940() {
   return (neuron0x4266520()*0.0309603);
}

double NNfunction_sg_dR::synapse0x426a980() {
   return (neuron0x4266860()*0.0162859);
}

double NNfunction_sg_dR::synapse0x426ad00() {
   return (neuron0x4261d30()*-0.0249503);
}

double NNfunction_sg_dR::synapse0x426ad40() {
   return (neuron0x4261fe0()*-0.0229077);
}

double NNfunction_sg_dR::synapse0x426ad80() {
   return (neuron0x4262320()*-0.00739349);
}

double NNfunction_sg_dR::synapse0x426adc0() {
   return (neuron0x4262660()*-1.04891);
}

double NNfunction_sg_dR::synapse0x426ae00() {
   return (neuron0x42629a0()*0.0327063);
}

double NNfunction_sg_dR::synapse0x426ae40() {
   return (neuron0x4262ce0()*0.0408047);
}

double NNfunction_sg_dR::synapse0x426ae80() {
   return (neuron0x4263020()*-0.00266077);
}

double NNfunction_sg_dR::synapse0x426aec0() {
   return (neuron0x4263360()*0.0202044);
}

double NNfunction_sg_dR::synapse0x426af00() {
   return (neuron0x42636a0()*0.0290791);
}

double NNfunction_sg_dR::synapse0x402c170() {
   return (neuron0x42639e0()*-0.0074525);
}

double NNfunction_sg_dR::synapse0x402c1b0() {
   return (neuron0x4263d20()*-0.00371897);
}

double NNfunction_sg_dR::synapse0x402c1f0() {
   return (neuron0x4264060()*-0.0253447);
}

double NNfunction_sg_dR::synapse0x402c230() {
   return (neuron0x42643a0()*-0.0168721);
}

double NNfunction_sg_dR::synapse0x402c270() {
   return (neuron0x42646e0()*0.00341526);
}

double NNfunction_sg_dR::synapse0x402c2b0() {
   return (neuron0x4264a20()*-0.0285335);
}

double NNfunction_sg_dR::synapse0x402c2f0() {
   return (neuron0x4264d60()*0.0156056);
}

double NNfunction_sg_dR::synapse0x426ab50() {
   return (neuron0x42650a0()*0.0523538);
}

double NNfunction_sg_dR::synapse0x426ab90() {
   return (neuron0x4265600()*-0.414924);
}

double NNfunction_sg_dR::synapse0x402c440() {
   return (neuron0x4265820()*0.00344853);
}

double NNfunction_sg_dR::synapse0x402c480() {
   return (neuron0x4265b60()*-0.0263721);
}

double NNfunction_sg_dR::synapse0x402c4c0() {
   return (neuron0x4265ea0()*-0.0135527);
}

double NNfunction_sg_dR::synapse0x402c500() {
   return (neuron0x42661e0()*0.0064942);
}

double NNfunction_sg_dR::synapse0x402c540() {
   return (neuron0x4266520()*0.00196246);
}

double NNfunction_sg_dR::synapse0x426b750() {
   return (neuron0x4266860()*-0.00494137);
}

double NNfunction_sg_dR::synapse0x426bad0() {
   return (neuron0x4261d30()*0.00922796);
}

double NNfunction_sg_dR::synapse0x426bb10() {
   return (neuron0x4261fe0()*0.00193109);
}

double NNfunction_sg_dR::synapse0x426bb50() {
   return (neuron0x4262320()*-0.0254647);
}

double NNfunction_sg_dR::synapse0x426bb90() {
   return (neuron0x4262660()*-2.2931);
}

double NNfunction_sg_dR::synapse0x426bbd0() {
   return (neuron0x42629a0()*0.00777926);
}

double NNfunction_sg_dR::synapse0x426bc10() {
   return (neuron0x4262ce0()*0.0237788);
}

double NNfunction_sg_dR::synapse0x426bc50() {
   return (neuron0x4263020()*0.0179783);
}

double NNfunction_sg_dR::synapse0x426bc90() {
   return (neuron0x4263360()*0.000910228);
}

double NNfunction_sg_dR::synapse0x426bcd0() {
   return (neuron0x42636a0()*-0.00440602);
}

double NNfunction_sg_dR::synapse0x426bd10() {
   return (neuron0x42639e0()*0.0437732);
}

double NNfunction_sg_dR::synapse0x426bd50() {
   return (neuron0x4263d20()*-0.0961558);
}

double NNfunction_sg_dR::synapse0x426bd90() {
   return (neuron0x4264060()*-0.0221783);
}

double NNfunction_sg_dR::synapse0x426bdd0() {
   return (neuron0x42643a0()*-0.0154601);
}

double NNfunction_sg_dR::synapse0x426be10() {
   return (neuron0x42646e0()*0.00156018);
}

double NNfunction_sg_dR::synapse0x426be50() {
   return (neuron0x4264a20()*-0.00546797);
}

double NNfunction_sg_dR::synapse0x426be90() {
   return (neuron0x4264d60()*-0.00646561);
}

double NNfunction_sg_dR::synapse0x426b920() {
   return (neuron0x42650a0()*-0.0104787);
}

double NNfunction_sg_dR::synapse0x426b960() {
   return (neuron0x4265600()*-0.158648);
}

double NNfunction_sg_dR::synapse0x426bfe0() {
   return (neuron0x4265820()*-0.00921404);
}

double NNfunction_sg_dR::synapse0x426c020() {
   return (neuron0x4265b60()*0.0105169);
}

double NNfunction_sg_dR::synapse0x426c060() {
   return (neuron0x4265ea0()*0.0100343);
}

double NNfunction_sg_dR::synapse0x426c0a0() {
   return (neuron0x42661e0()*-0.00242648);
}

double NNfunction_sg_dR::synapse0x426c0e0() {
   return (neuron0x4266520()*0.0182559);
}

double NNfunction_sg_dR::synapse0x426c120() {
   return (neuron0x4266860()*-0.0171146);
}

double NNfunction_sg_dR::synapse0x426c4a0() {
   return (neuron0x4261d30()*-0.0504296);
}

double NNfunction_sg_dR::synapse0x426c4e0() {
   return (neuron0x4261fe0()*0.365327);
}

double NNfunction_sg_dR::synapse0x426c520() {
   return (neuron0x4262320()*-0.0107957);
}

double NNfunction_sg_dR::synapse0x426c560() {
   return (neuron0x4262660()*-0.215151);
}

double NNfunction_sg_dR::synapse0x426c5a0() {
   return (neuron0x42629a0()*-0.317042);
}

double NNfunction_sg_dR::synapse0x426c5e0() {
   return (neuron0x4262ce0()*-0.0388005);
}

double NNfunction_sg_dR::synapse0x426c620() {
   return (neuron0x4263020()*0.129914);
}

double NNfunction_sg_dR::synapse0x426c660() {
   return (neuron0x4263360()*0.129706);
}

double NNfunction_sg_dR::synapse0x426c6a0() {
   return (neuron0x42636a0()*0.0452437);
}

double NNfunction_sg_dR::synapse0x426c6e0() {
   return (neuron0x42639e0()*-0.341634);
}

double NNfunction_sg_dR::synapse0x426c720() {
   return (neuron0x4263d20()*0.16934);
}

double NNfunction_sg_dR::synapse0x426c760() {
   return (neuron0x4264060()*0.221014);
}

double NNfunction_sg_dR::synapse0x426c7a0() {
   return (neuron0x42643a0()*0.0108896);
}

double NNfunction_sg_dR::synapse0x426c7e0() {
   return (neuron0x42646e0()*-0.387537);
}

double NNfunction_sg_dR::synapse0x426c820() {
   return (neuron0x4264a20()*0.0337759);
}

double NNfunction_sg_dR::synapse0x426c860() {
   return (neuron0x4264d60()*-0.446864);
}

double NNfunction_sg_dR::synapse0x426c2f0() {
   return (neuron0x42650a0()*-0.237402);
}

double NNfunction_sg_dR::synapse0x426c330() {
   return (neuron0x4265600()*-0.52557);
}

double NNfunction_sg_dR::synapse0x426c9b0() {
   return (neuron0x4265820()*-0.666936);
}

double NNfunction_sg_dR::synapse0x426c9f0() {
   return (neuron0x4265b60()*-0.163394);
}

double NNfunction_sg_dR::synapse0x426ca30() {
   return (neuron0x4265ea0()*-0.00611513);
}

double NNfunction_sg_dR::synapse0x426ca70() {
   return (neuron0x42661e0()*0.0334256);
}

double NNfunction_sg_dR::synapse0x426cab0() {
   return (neuron0x4266520()*0.302925);
}

double NNfunction_sg_dR::synapse0x426caf0() {
   return (neuron0x4266860()*0.140315);
}

double NNfunction_sg_dR::synapse0x42654f0() {
   return (neuron0x4261d30()*0.00160523);
}

double NNfunction_sg_dR::synapse0x4265530() {
   return (neuron0x4261fe0()*-0.0172872);
}

double NNfunction_sg_dR::synapse0x4265570() {
   return (neuron0x4262320()*-0.00718776);
}

double NNfunction_sg_dR::synapse0x42655b0() {
   return (neuron0x4262660()*1.1036);
}

double NNfunction_sg_dR::synapse0x426d080() {
   return (neuron0x42629a0()*0.107824);
}

double NNfunction_sg_dR::synapse0x426d0c0() {
   return (neuron0x4262ce0()*0.00637393);
}

double NNfunction_sg_dR::synapse0x426d100() {
   return (neuron0x4263020()*0.0291234);
}

double NNfunction_sg_dR::synapse0x426d140() {
   return (neuron0x4263360()*-0.0324386);
}

double NNfunction_sg_dR::synapse0x426d180() {
   return (neuron0x42636a0()*0.0493224);
}

double NNfunction_sg_dR::synapse0x426d1c0() {
   return (neuron0x42639e0()*0.0511961);
}

double NNfunction_sg_dR::synapse0x426d200() {
   return (neuron0x4263d20()*-0.0639792);
}

double NNfunction_sg_dR::synapse0x426d240() {
   return (neuron0x4264060()*0.0174354);
}

double NNfunction_sg_dR::synapse0x426d280() {
   return (neuron0x42643a0()*-0.0443362);
}

double NNfunction_sg_dR::synapse0x426d2c0() {
   return (neuron0x42646e0()*-0.012789);
}

double NNfunction_sg_dR::synapse0x426d300() {
   return (neuron0x4264a20()*0.0771909);
}

double NNfunction_sg_dR::synapse0x426d340() {
   return (neuron0x4264d60()*0.0102934);
}

double NNfunction_sg_dR::synapse0x426ccc0() {
   return (neuron0x42650a0()*-0.0252453);
}

double NNfunction_sg_dR::synapse0x426cd00() {
   return (neuron0x4265600()*1.22976);
}

double NNfunction_sg_dR::synapse0x426d490() {
   return (neuron0x4265820()*-0.0129773);
}

double NNfunction_sg_dR::synapse0x426d4d0() {
   return (neuron0x4265b60()*-0.0720359);
}

double NNfunction_sg_dR::synapse0x426d510() {
   return (neuron0x4265ea0()*-0.0176622);
}

double NNfunction_sg_dR::synapse0x426d550() {
   return (neuron0x42661e0()*0.0179281);
}

double NNfunction_sg_dR::synapse0x426d590() {
   return (neuron0x4266520()*-0.0040123);
}

double NNfunction_sg_dR::synapse0x426d5d0() {
   return (neuron0x4266860()*-0.0366715);
}

double NNfunction_sg_dR::synapse0x426d950() {
   return (neuron0x4261d30()*0.0212567);
}

double NNfunction_sg_dR::synapse0x426d990() {
   return (neuron0x4261fe0()*0.0166641);
}

double NNfunction_sg_dR::synapse0x426d9d0() {
   return (neuron0x4262320()*0.0447619);
}

double NNfunction_sg_dR::synapse0x426da10() {
   return (neuron0x4262660()*2.04149);
}

double NNfunction_sg_dR::synapse0x426da50() {
   return (neuron0x42629a0()*-0.0652283);
}

double NNfunction_sg_dR::synapse0x426da90() {
   return (neuron0x4262ce0()*-0.0255217);
}

double NNfunction_sg_dR::synapse0x426dad0() {
   return (neuron0x4263020()*-0.0608921);
}

double NNfunction_sg_dR::synapse0x426db10() {
   return (neuron0x4263360()*0.0240154);
}

double NNfunction_sg_dR::synapse0x426db50() {
   return (neuron0x42636a0()*0.0298148);
}

double NNfunction_sg_dR::synapse0x426db90() {
   return (neuron0x42639e0()*0.0815134);
}

double NNfunction_sg_dR::synapse0x426dbd0() {
   return (neuron0x4263d20()*-0.0964285);
}

double NNfunction_sg_dR::synapse0x426dc10() {
   return (neuron0x4264060()*-0.15915);
}

double NNfunction_sg_dR::synapse0x426dc50() {
   return (neuron0x42643a0()*-0.185935);
}

double NNfunction_sg_dR::synapse0x426dc90() {
   return (neuron0x42646e0()*0.102884);
}

double NNfunction_sg_dR::synapse0x426dcd0() {
   return (neuron0x4264a20()*-0.376185);
}

double NNfunction_sg_dR::synapse0x426dd10() {
   return (neuron0x4264d60()*-0.416144);
}

double NNfunction_sg_dR::synapse0x426d7a0() {
   return (neuron0x42650a0()*0.0475203);
}

double NNfunction_sg_dR::synapse0x426d7e0() {
   return (neuron0x4265600()*0.28077);
}

double NNfunction_sg_dR::synapse0x426de60() {
   return (neuron0x4265820()*-0.165269);
}

double NNfunction_sg_dR::synapse0x426dea0() {
   return (neuron0x4265b60()*0.0392983);
}

double NNfunction_sg_dR::synapse0x426dee0() {
   return (neuron0x4265ea0()*-0.0820461);
}

double NNfunction_sg_dR::synapse0x426df20() {
   return (neuron0x42661e0()*-0.112942);
}

double NNfunction_sg_dR::synapse0x426df60() {
   return (neuron0x4266520()*0.0814922);
}

double NNfunction_sg_dR::synapse0x426dfa0() {
   return (neuron0x4266860()*-0.0564092);
}

double NNfunction_sg_dR::synapse0x426e320() {
   return (neuron0x4261d30()*-0.00121845);
}

double NNfunction_sg_dR::synapse0x426e360() {
   return (neuron0x4261fe0()*0.00362303);
}

double NNfunction_sg_dR::synapse0x426e3a0() {
   return (neuron0x4262320()*-0.00653626);
}

double NNfunction_sg_dR::synapse0x426e3e0() {
   return (neuron0x4262660()*-0.274375);
}

double NNfunction_sg_dR::synapse0x426e420() {
   return (neuron0x42629a0()*0.0166201);
}

double NNfunction_sg_dR::synapse0x426e460() {
   return (neuron0x4262ce0()*0.00101932);
}

double NNfunction_sg_dR::synapse0x426e4a0() {
   return (neuron0x4263020()*-0.00117242);
}

double NNfunction_sg_dR::synapse0x426e4e0() {
   return (neuron0x4263360()*0.00864843);
}

double NNfunction_sg_dR::synapse0x426e520() {
   return (neuron0x42636a0()*-0.00619189);
}

double NNfunction_sg_dR::synapse0x426e560() {
   return (neuron0x42639e0()*0.0130006);
}

double NNfunction_sg_dR::synapse0x426e5a0() {
   return (neuron0x4263d20()*-0.0469133);
}

double NNfunction_sg_dR::synapse0x426e5e0() {
   return (neuron0x4264060()*-0.0210671);
}

double NNfunction_sg_dR::synapse0x426e620() {
   return (neuron0x42643a0()*-0.020878);
}

double NNfunction_sg_dR::synapse0x426e660() {
   return (neuron0x42646e0()*-0.00680161);
}

double NNfunction_sg_dR::synapse0x426e6a0() {
   return (neuron0x4264a20()*-0.000233097);
}

double NNfunction_sg_dR::synapse0x426e6e0() {
   return (neuron0x4264d60()*0.00353334);
}

double NNfunction_sg_dR::synapse0x426e170() {
   return (neuron0x42650a0()*-0.00804931);
}

double NNfunction_sg_dR::synapse0x426e1b0() {
   return (neuron0x4265600()*1.25393);
}

double NNfunction_sg_dR::synapse0x426af40() {
   return (neuron0x4265820()*-0.00307219);
}

double NNfunction_sg_dR::synapse0x426af80() {
   return (neuron0x4265b60()*-0.00338627);
}

double NNfunction_sg_dR::synapse0x426afc0() {
   return (neuron0x4265ea0()*-0.00859891);
}

double NNfunction_sg_dR::synapse0x426b000() {
   return (neuron0x42661e0()*0.000297461);
}

double NNfunction_sg_dR::synapse0x426b040() {
   return (neuron0x4266520()*0.0019819);
}

double NNfunction_sg_dR::synapse0x426b080() {
   return (neuron0x4266860()*-0.00369874);
}

double NNfunction_sg_dR::synapse0x426b400() {
   return (neuron0x4261d30()*0.0499672);
}

double NNfunction_sg_dR::synapse0x426b440() {
   return (neuron0x4261fe0()*0.0543249);
}

double NNfunction_sg_dR::synapse0x426b480() {
   return (neuron0x4262320()*-0.0269023);
}

double NNfunction_sg_dR::synapse0x426b4c0() {
   return (neuron0x4262660()*-3.43047);
}

double NNfunction_sg_dR::synapse0x426b500() {
   return (neuron0x42629a0()*0.022051);
}

double NNfunction_sg_dR::synapse0x426b540() {
   return (neuron0x4262ce0()*-0.00634952);
}

double NNfunction_sg_dR::synapse0x426b580() {
   return (neuron0x4263020()*0.00031544);
}

double NNfunction_sg_dR::synapse0x426b5c0() {
   return (neuron0x4263360()*0.0272281);
}

double NNfunction_sg_dR::synapse0x426b600() {
   return (neuron0x42636a0()*0.0106621);
}

double NNfunction_sg_dR::synapse0x426b640() {
   return (neuron0x42639e0()*0.0361991);
}

double NNfunction_sg_dR::synapse0x426b680() {
   return (neuron0x4263d20()*0.00223225);
}

double NNfunction_sg_dR::synapse0x426b6c0() {
   return (neuron0x4264060()*0.008291);
}

double NNfunction_sg_dR::synapse0x426b700() {
   return (neuron0x42643a0()*0.0125581);
}

double NNfunction_sg_dR::synapse0x426f840() {
   return (neuron0x42646e0()*0.0161886);
}

double NNfunction_sg_dR::synapse0x426f880() {
   return (neuron0x4264a20()*-0.0817674);
}

double NNfunction_sg_dR::synapse0x426f8c0() {
   return (neuron0x4264d60()*0.0465139);
}

double NNfunction_sg_dR::synapse0x426b250() {
   return (neuron0x42650a0()*-0.00258826);
}

double NNfunction_sg_dR::synapse0x426b290() {
   return (neuron0x4265600()*0.785889);
}

double NNfunction_sg_dR::synapse0x426fa10() {
   return (neuron0x4265820()*0.00404801);
}

double NNfunction_sg_dR::synapse0x426fa50() {
   return (neuron0x4265b60()*-0.0304452);
}

double NNfunction_sg_dR::synapse0x426fa90() {
   return (neuron0x4265ea0()*-0.00435357);
}

double NNfunction_sg_dR::synapse0x426fad0() {
   return (neuron0x42661e0()*0.00581815);
}

double NNfunction_sg_dR::synapse0x426fb10() {
   return (neuron0x4266520()*0.0112769);
}

double NNfunction_sg_dR::synapse0x426fb50() {
   return (neuron0x4266860()*-0.00974311);
}

double NNfunction_sg_dR::synapse0x426fed0() {
   return (neuron0x4261d30()*0.0414247);
}

double NNfunction_sg_dR::synapse0x426ff10() {
   return (neuron0x4261fe0()*0.0290026);
}

double NNfunction_sg_dR::synapse0x426ff50() {
   return (neuron0x4262320()*-0.010474);
}

double NNfunction_sg_dR::synapse0x426ff90() {
   return (neuron0x4262660()*-0.783328);
}

double NNfunction_sg_dR::synapse0x426ffd0() {
   return (neuron0x42629a0()*0.00219574);
}

double NNfunction_sg_dR::synapse0x4270010() {
   return (neuron0x4262ce0()*0.0173272);
}

double NNfunction_sg_dR::synapse0x4270050() {
   return (neuron0x4263020()*0.0053673);
}

double NNfunction_sg_dR::synapse0x4270090() {
   return (neuron0x4263360()*0.0614975);
}

double NNfunction_sg_dR::synapse0x42700d0() {
   return (neuron0x42636a0()*-0.0144963);
}

double NNfunction_sg_dR::synapse0x4270110() {
   return (neuron0x42639e0()*-0.0150884);
}

double NNfunction_sg_dR::synapse0x4270150() {
   return (neuron0x4263d20()*-0.0115219);
}

double NNfunction_sg_dR::synapse0x4270190() {
   return (neuron0x4264060()*0.00434474);
}

double NNfunction_sg_dR::synapse0x42701d0() {
   return (neuron0x42643a0()*0.0553666);
}

double NNfunction_sg_dR::synapse0x4270210() {
   return (neuron0x42646e0()*-0.0501713);
}

double NNfunction_sg_dR::synapse0x4270250() {
   return (neuron0x4264a20()*0.054064);
}

double NNfunction_sg_dR::synapse0x4270290() {
   return (neuron0x4264d60()*0.0266669);
}

double NNfunction_sg_dR::synapse0x426fd20() {
   return (neuron0x42650a0()*-0.0335085);
}

double NNfunction_sg_dR::synapse0x426fd60() {
   return (neuron0x4265600()*-3.23266);
}

double NNfunction_sg_dR::synapse0x42703e0() {
   return (neuron0x4265820()*0.0449672);
}

double NNfunction_sg_dR::synapse0x4270420() {
   return (neuron0x4265b60()*0.00925956);
}

double NNfunction_sg_dR::synapse0x4270460() {
   return (neuron0x4265ea0()*-0.0193077);
}

double NNfunction_sg_dR::synapse0x42704a0() {
   return (neuron0x42661e0()*-0.0183292);
}

double NNfunction_sg_dR::synapse0x42704e0() {
   return (neuron0x4266520()*0.000112187);
}

double NNfunction_sg_dR::synapse0x4270520() {
   return (neuron0x4266860()*0.00279997);
}

double NNfunction_sg_dR::synapse0x42708a0() {
   return (neuron0x4261d30()*-0.00328865);
}

double NNfunction_sg_dR::synapse0x42708e0() {
   return (neuron0x4261fe0()*0.00318385);
}

double NNfunction_sg_dR::synapse0x4270920() {
   return (neuron0x4262320()*-0.00681273);
}

double NNfunction_sg_dR::synapse0x4270960() {
   return (neuron0x4262660()*-0.927853);
}

double NNfunction_sg_dR::synapse0x42709a0() {
   return (neuron0x42629a0()*0.0211652);
}

double NNfunction_sg_dR::synapse0x42709e0() {
   return (neuron0x4262ce0()*0.01807);
}

double NNfunction_sg_dR::synapse0x4270a20() {
   return (neuron0x4263020()*0.0468704);
}

double NNfunction_sg_dR::synapse0x4270a60() {
   return (neuron0x4263360()*0.0102267);
}

double NNfunction_sg_dR::synapse0x4270aa0() {
   return (neuron0x42636a0()*0.0216103);
}

double NNfunction_sg_dR::synapse0x4270ae0() {
   return (neuron0x42639e0()*0.00109745);
}

double NNfunction_sg_dR::synapse0x4270b20() {
   return (neuron0x4263d20()*-0.00263664);
}

double NNfunction_sg_dR::synapse0x4270b60() {
   return (neuron0x4264060()*0.0495666);
}

double NNfunction_sg_dR::synapse0x4270ba0() {
   return (neuron0x42643a0()*0.0568826);
}

double NNfunction_sg_dR::synapse0x4270be0() {
   return (neuron0x42646e0()*-0.00542927);
}

double NNfunction_sg_dR::synapse0x4270c20() {
   return (neuron0x4264a20()*0.0908306);
}

double NNfunction_sg_dR::synapse0x4270c60() {
   return (neuron0x4264d60()*0.0638288);
}

double NNfunction_sg_dR::synapse0x42706f0() {
   return (neuron0x42650a0()*-0.066483);
}

double NNfunction_sg_dR::synapse0x4270730() {
   return (neuron0x4265600()*-0.906033);
}

double NNfunction_sg_dR::synapse0x4270db0() {
   return (neuron0x4265820()*0.0242761);
}

double NNfunction_sg_dR::synapse0x4270df0() {
   return (neuron0x4265b60()*-0.00604008);
}

double NNfunction_sg_dR::synapse0x4270e30() {
   return (neuron0x4265ea0()*0.00860527);
}

double NNfunction_sg_dR::synapse0x4270e70() {
   return (neuron0x42661e0()*0.0110431);
}

double NNfunction_sg_dR::synapse0x4270eb0() {
   return (neuron0x4266520()*-0.0213607);
}

double NNfunction_sg_dR::synapse0x4270ef0() {
   return (neuron0x4266860()*0.00322311);
}

double NNfunction_sg_dR::synapse0x4271270() {
   return (neuron0x4261d30()*0.0285623);
}

double NNfunction_sg_dR::synapse0x42712b0() {
   return (neuron0x4261fe0()*0.0222472);
}

double NNfunction_sg_dR::synapse0x42712f0() {
   return (neuron0x4262320()*-0.038596);
}

double NNfunction_sg_dR::synapse0x4271330() {
   return (neuron0x4262660()*1.91409);
}

double NNfunction_sg_dR::synapse0x4271370() {
   return (neuron0x42629a0()*0.0751845);
}

double NNfunction_sg_dR::synapse0x42713b0() {
   return (neuron0x4262ce0()*0.0814333);
}

double NNfunction_sg_dR::synapse0x42713f0() {
   return (neuron0x4263020()*0.0852179);
}

double NNfunction_sg_dR::synapse0x4271430() {
   return (neuron0x4263360()*-0.0797435);
}

double NNfunction_sg_dR::synapse0x4271470() {
   return (neuron0x42636a0()*-0.0434951);
}

double NNfunction_sg_dR::synapse0x42714b0() {
   return (neuron0x42639e0()*0.00648977);
}

double NNfunction_sg_dR::synapse0x42714f0() {
   return (neuron0x4263d20()*0.0227115);
}

double NNfunction_sg_dR::synapse0x4271530() {
   return (neuron0x4264060()*0.243229);
}

double NNfunction_sg_dR::synapse0x4271570() {
   return (neuron0x42643a0()*-0.34406);
}

double NNfunction_sg_dR::synapse0x42715b0() {
   return (neuron0x42646e0()*0.0232896);
}

double NNfunction_sg_dR::synapse0x42715f0() {
   return (neuron0x4264a20()*0.0834329);
}

double NNfunction_sg_dR::synapse0x4271630() {
   return (neuron0x4264d60()*-0.301384);
}

double NNfunction_sg_dR::synapse0x42710c0() {
   return (neuron0x42650a0()*0.0444115);
}

double NNfunction_sg_dR::synapse0x4271100() {
   return (neuron0x4265600()*-0.165539);
}

double NNfunction_sg_dR::synapse0x4271780() {
   return (neuron0x4265820()*-0.0246251);
}

double NNfunction_sg_dR::synapse0x42717c0() {
   return (neuron0x4265b60()*-0.00904208);
}

double NNfunction_sg_dR::synapse0x4271800() {
   return (neuron0x4265ea0()*0.0120613);
}

double NNfunction_sg_dR::synapse0x4271840() {
   return (neuron0x42661e0()*-0.00040309);
}

double NNfunction_sg_dR::synapse0x4271880() {
   return (neuron0x4266520()*-0.00640333);
}

double NNfunction_sg_dR::synapse0x42718c0() {
   return (neuron0x4266860()*-0.00908536);
}

double NNfunction_sg_dR::synapse0x4271c40() {
   return (neuron0x4261d30()*-0.0166164);
}

double NNfunction_sg_dR::synapse0x4261ec0() {
   return (neuron0x4261fe0()*-0.0133612);
}

double NNfunction_sg_dR::synapse0x4261f00() {
   return (neuron0x4262320()*0.00684003);
}

double NNfunction_sg_dR::synapse0x4262200() {
   return (neuron0x4262660()*-0.327198);
}

double NNfunction_sg_dR::synapse0x4262240() {
   return (neuron0x42629a0()*-0.0179977);
}

double NNfunction_sg_dR::synapse0x4262540() {
   return (neuron0x4262ce0()*-0.0152807);
}

double NNfunction_sg_dR::synapse0x4262580() {
   return (neuron0x4263020()*-0.0212677);
}

double NNfunction_sg_dR::synapse0x4262880() {
   return (neuron0x4263360()*0.00647701);
}

double NNfunction_sg_dR::synapse0x42628c0() {
   return (neuron0x42636a0()*0.0204908);
}

double NNfunction_sg_dR::synapse0x4262bc0() {
   return (neuron0x42639e0()*-0.0293186);
}

double NNfunction_sg_dR::synapse0x4262c00() {
   return (neuron0x4263d20()*0.0142029);
}

double NNfunction_sg_dR::synapse0x4262f00() {
   return (neuron0x4264060()*-0.0703902);
}

double NNfunction_sg_dR::synapse0x4262f40() {
   return (neuron0x42643a0()*-0.0635099);
}

double NNfunction_sg_dR::synapse0x4263240() {
   return (neuron0x42646e0()*0.0492647);
}

double NNfunction_sg_dR::synapse0x4263280() {
   return (neuron0x4264a20()*-0.060951);
}

double NNfunction_sg_dR::synapse0x4263580() {
   return (neuron0x4264d60()*-0.0134726);
}

double NNfunction_sg_dR::synapse0x42635c0() {
   return (neuron0x42650a0()*0.0215374);
}

double NNfunction_sg_dR::synapse0x42638c0() {
   return (neuron0x4265600()*2.3896);
}

double NNfunction_sg_dR::synapse0x4263900() {
   return (neuron0x4265820()*-0.0273434);
}

double NNfunction_sg_dR::synapse0x4263c00() {
   return (neuron0x4265b60()*0.0159988);
}

double NNfunction_sg_dR::synapse0x4263c40() {
   return (neuron0x4265ea0()*-0.00773304);
}

double NNfunction_sg_dR::synapse0x4263f40() {
   return (neuron0x42661e0()*-0.00537051);
}

double NNfunction_sg_dR::synapse0x4263f80() {
   return (neuron0x4266520()*-0.0175806);
}

double NNfunction_sg_dR::synapse0x4264280() {
   return (neuron0x4266860()*-0.0134509);
}

double NNfunction_sg_dR::synapse0x42642c0() {
   return (neuron0x4261d30()*0.0191592);
}

double NNfunction_sg_dR::synapse0x4264f80() {
   return (neuron0x4261fe0()*-0.00857524);
}

double NNfunction_sg_dR::synapse0x4264fc0() {
   return (neuron0x4262320()*-0.0235663);
}

double NNfunction_sg_dR::synapse0x4271a90() {
   return (neuron0x4262660()*1.43363);
}

double NNfunction_sg_dR::synapse0x4271ad0() {
   return (neuron0x42629a0()*0.00875326);
}

double NNfunction_sg_dR::synapse0x42652c0() {
   return (neuron0x4262ce0()*0.00203287);
}

double NNfunction_sg_dR::synapse0x4265300() {
   return (neuron0x4263020()*0.00296631);
}

double NNfunction_sg_dR::synapse0x2ea0d40() {
   return (neuron0x4263360()*0.000321637);
}

double NNfunction_sg_dR::synapse0x2ea0d80() {
   return (neuron0x42636a0()*0.00661145);
}

double NNfunction_sg_dR::synapse0x4265a40() {
   return (neuron0x42639e0()*0.067417);
}

double NNfunction_sg_dR::synapse0x4265a80() {
   return (neuron0x4263d20()*0.0332285);
}

double NNfunction_sg_dR::synapse0x4265d80() {
   return (neuron0x4264060()*0.0315419);
}

double NNfunction_sg_dR::synapse0x4265dc0() {
   return (neuron0x42643a0()*0.0251095);
}

double NNfunction_sg_dR::synapse0x42660c0() {
   return (neuron0x42646e0()*0.0417607);
}

double NNfunction_sg_dR::synapse0x4266100() {
   return (neuron0x4264a20()*0.00281206);
}

double NNfunction_sg_dR::synapse0x4266400() {
   return (neuron0x4264d60()*0.00977216);
}

double NNfunction_sg_dR::synapse0x4266440() {
   return (neuron0x42650a0()*0.0327568);
}

double NNfunction_sg_dR::synapse0x4266740() {
   return (neuron0x4265600()*-0.356304);
}

double NNfunction_sg_dR::synapse0x4266780() {
   return (neuron0x4265820()*0.0279478);
}

double NNfunction_sg_dR::synapse0x4266a80() {
   return (neuron0x4265b60()*-0.00854244);
}

double NNfunction_sg_dR::synapse0x4266ac0() {
   return (neuron0x4265ea0()*0.0153678);
}

double NNfunction_sg_dR::synapse0x42645c0() {
   return (neuron0x42661e0()*-0.00346426);
}

double NNfunction_sg_dR::synapse0x4264600() {
   return (neuron0x4266520()*-0.00312466);
}

double NNfunction_sg_dR::synapse0x42739b0() {
   return (neuron0x4266860()*0.00258505);
}

double NNfunction_sg_dR::synapse0x4273d30() {
   return (neuron0x4261d30()*-0.0257415);
}

double NNfunction_sg_dR::synapse0x4273d70() {
   return (neuron0x4261fe0()*-0.100549);
}

double NNfunction_sg_dR::synapse0x4273db0() {
   return (neuron0x4262320()*-0.00378713);
}

double NNfunction_sg_dR::synapse0x4273df0() {
   return (neuron0x4262660()*-0.30981);
}

double NNfunction_sg_dR::synapse0x4273e30() {
   return (neuron0x42629a0()*0.0249643);
}

double NNfunction_sg_dR::synapse0x4273e70() {
   return (neuron0x4262ce0()*0.376792);
}

double NNfunction_sg_dR::synapse0x4273eb0() {
   return (neuron0x4263020()*-0.105453);
}

double NNfunction_sg_dR::synapse0x4273ef0() {
   return (neuron0x4263360()*0.177264);
}

double NNfunction_sg_dR::synapse0x4273f30() {
   return (neuron0x42636a0()*0.45164);
}

double NNfunction_sg_dR::synapse0x4273f70() {
   return (neuron0x42639e0()*0.329704);
}

double NNfunction_sg_dR::synapse0x4273fb0() {
   return (neuron0x4263d20()*0.0247036);
}

double NNfunction_sg_dR::synapse0x4273ff0() {
   return (neuron0x4264060()*0.00437825);
}

double NNfunction_sg_dR::synapse0x4274030() {
   return (neuron0x42643a0()*0.139353);
}

double NNfunction_sg_dR::synapse0x4274070() {
   return (neuron0x42646e0()*-0.159945);
}

double NNfunction_sg_dR::synapse0x42740b0() {
   return (neuron0x4264a20()*-0.0092714);
}

double NNfunction_sg_dR::synapse0x42740f0() {
   return (neuron0x4264d60()*-0.212809);
}

double NNfunction_sg_dR::synapse0x4273b80() {
   return (neuron0x42650a0()*0.0289271);
}

double NNfunction_sg_dR::synapse0x4273bc0() {
   return (neuron0x4265600()*0.180138);
}

double NNfunction_sg_dR::synapse0x4274240() {
   return (neuron0x4265820()*0.134313);
}

double NNfunction_sg_dR::synapse0x4274280() {
   return (neuron0x4265b60()*-0.289432);
}

double NNfunction_sg_dR::synapse0x42742c0() {
   return (neuron0x4265ea0()*0.0482963);
}

double NNfunction_sg_dR::synapse0x4274300() {
   return (neuron0x42661e0()*-0.0284308);
}

double NNfunction_sg_dR::synapse0x4274340() {
   return (neuron0x4266520()*-0.0731723);
}

double NNfunction_sg_dR::synapse0x4274380() {
   return (neuron0x4266860()*-0.210169);
}

double NNfunction_sg_dR::synapse0x4274700() {
   return (neuron0x4261d30()*-0.00708139);
}

double NNfunction_sg_dR::synapse0x4274740() {
   return (neuron0x4261fe0()*0.228238);
}

double NNfunction_sg_dR::synapse0x4274780() {
   return (neuron0x4262320()*-0.00392915);
}

double NNfunction_sg_dR::synapse0x42747c0() {
   return (neuron0x4262660()*1.89481);
}

double NNfunction_sg_dR::synapse0x4274800() {
   return (neuron0x42629a0()*-0.0233264);
}

double NNfunction_sg_dR::synapse0x4274840() {
   return (neuron0x4262ce0()*0.0718504);
}

double NNfunction_sg_dR::synapse0x4274880() {
   return (neuron0x4263020()*-0.00937968);
}

double NNfunction_sg_dR::synapse0x42748c0() {
   return (neuron0x4263360()*0.13221);
}

double NNfunction_sg_dR::synapse0x4274900() {
   return (neuron0x42636a0()*-0.0222884);
}

double NNfunction_sg_dR::synapse0x4274940() {
   return (neuron0x42639e0()*-0.0498883);
}

double NNfunction_sg_dR::synapse0x4274980() {
   return (neuron0x4263d20()*-0.0240273);
}

double NNfunction_sg_dR::synapse0x42749c0() {
   return (neuron0x4264060()*-0.0528659);
}

double NNfunction_sg_dR::synapse0x4274a00() {
   return (neuron0x42643a0()*0.103022);
}

double NNfunction_sg_dR::synapse0x4274a40() {
   return (neuron0x42646e0()*0.045563);
}

double NNfunction_sg_dR::synapse0x4274a80() {
   return (neuron0x4264a20()*0.167544);
}

double NNfunction_sg_dR::synapse0x4274ac0() {
   return (neuron0x4264d60()*0.0731793);
}

double NNfunction_sg_dR::synapse0x4274550() {
   return (neuron0x42650a0()*0.0576156);
}

double NNfunction_sg_dR::synapse0x4274590() {
   return (neuron0x4265600()*-0.144837);
}

double NNfunction_sg_dR::synapse0x4274c10() {
   return (neuron0x4265820()*-0.0678885);
}

double NNfunction_sg_dR::synapse0x4274c50() {
   return (neuron0x4265b60()*-0.0750608);
}

double NNfunction_sg_dR::synapse0x4274c90() {
   return (neuron0x4265ea0()*-0.0128378);
}

double NNfunction_sg_dR::synapse0x4274cd0() {
   return (neuron0x42661e0()*-0.0417949);
}

double NNfunction_sg_dR::synapse0x4274d10() {
   return (neuron0x4266520()*0.03212);
}

double NNfunction_sg_dR::synapse0x4274d50() {
   return (neuron0x4266860()*0.0292658);
}

double NNfunction_sg_dR::synapse0x42750d0() {
   return (neuron0x4261d30()*-0.0571717);
}

double NNfunction_sg_dR::synapse0x4275110() {
   return (neuron0x4261fe0()*0.486722);
}

double NNfunction_sg_dR::synapse0x4275150() {
   return (neuron0x4262320()*0.444738);
}

double NNfunction_sg_dR::synapse0x4275190() {
   return (neuron0x4262660()*-0.599398);
}

double NNfunction_sg_dR::synapse0x42751d0() {
   return (neuron0x42629a0()*0.299038);
}

double NNfunction_sg_dR::synapse0x4275210() {
   return (neuron0x4262ce0()*-0.0558002);
}

double NNfunction_sg_dR::synapse0x4275250() {
   return (neuron0x4263020()*0.448554);
}

double NNfunction_sg_dR::synapse0x4275290() {
   return (neuron0x4263360()*-0.0575148);
}

double NNfunction_sg_dR::synapse0x42752d0() {
   return (neuron0x42636a0()*-0.265163);
}

double NNfunction_sg_dR::synapse0x4275310() {
   return (neuron0x42639e0()*0.40328);
}

double NNfunction_sg_dR::synapse0x4275350() {
   return (neuron0x4263d20()*0.301499);
}

double NNfunction_sg_dR::synapse0x4275390() {
   return (neuron0x4264060()*0.205914);
}

double NNfunction_sg_dR::synapse0x42753d0() {
   return (neuron0x42643a0()*0.792384);
}

double NNfunction_sg_dR::synapse0x4275410() {
   return (neuron0x42646e0()*0.36131);
}

double NNfunction_sg_dR::synapse0x4275450() {
   return (neuron0x4264a20()*0.160933);
}

double NNfunction_sg_dR::synapse0x4275490() {
   return (neuron0x4264d60()*0.314172);
}

double NNfunction_sg_dR::synapse0x4274f20() {
   return (neuron0x42650a0()*-0.0329448);
}

double NNfunction_sg_dR::synapse0x4274f60() {
   return (neuron0x4265600()*0.0897728);
}

double NNfunction_sg_dR::synapse0x42755e0() {
   return (neuron0x4265820()*0.399924);
}

double NNfunction_sg_dR::synapse0x4275620() {
   return (neuron0x4265b60()*0.222734);
}

double NNfunction_sg_dR::synapse0x4275660() {
   return (neuron0x4265ea0()*-0.632064);
}

double NNfunction_sg_dR::synapse0x42756a0() {
   return (neuron0x42661e0()*0.00271236);
}

double NNfunction_sg_dR::synapse0x42756e0() {
   return (neuron0x4266520()*-0.427807);
}

double NNfunction_sg_dR::synapse0x4275720() {
   return (neuron0x4266860()*-0.144188);
}

double NNfunction_sg_dR::synapse0x4275aa0() {
   return (neuron0x4261d30()*0.00757187);
}

double NNfunction_sg_dR::synapse0x4275ae0() {
   return (neuron0x4261fe0()*-0.035964);
}

double NNfunction_sg_dR::synapse0x4275b20() {
   return (neuron0x4262320()*-0.118401);
}

double NNfunction_sg_dR::synapse0x4275b60() {
   return (neuron0x4262660()*1.92068);
}

double NNfunction_sg_dR::synapse0x4275ba0() {
   return (neuron0x42629a0()*-0.052199);
}

double NNfunction_sg_dR::synapse0x4275be0() {
   return (neuron0x4262ce0()*0.038052);
}

double NNfunction_sg_dR::synapse0x4275c20() {
   return (neuron0x4263020()*0.0080932);
}

double NNfunction_sg_dR::synapse0x4275c60() {
   return (neuron0x4263360()*0.0111228);
}

double NNfunction_sg_dR::synapse0x4275ca0() {
   return (neuron0x42636a0()*-0.075281);
}

double NNfunction_sg_dR::synapse0x4275ce0() {
   return (neuron0x42639e0()*-0.116297);
}

double NNfunction_sg_dR::synapse0x4275d20() {
   return (neuron0x4263d20()*-0.0977708);
}

double NNfunction_sg_dR::synapse0x4275d60() {
   return (neuron0x4264060()*0.0468757);
}

double NNfunction_sg_dR::synapse0x4275da0() {
   return (neuron0x42643a0()*0.0728887);
}

double NNfunction_sg_dR::synapse0x4275de0() {
   return (neuron0x42646e0()*0.00668494);
}

double NNfunction_sg_dR::synapse0x4275e20() {
   return (neuron0x4264a20()*0.0114644);
}

double NNfunction_sg_dR::synapse0x4275e60() {
   return (neuron0x4264d60()*-0.00937113);
}

double NNfunction_sg_dR::synapse0x42758f0() {
   return (neuron0x42650a0()*0.0670097);
}

double NNfunction_sg_dR::synapse0x4275930() {
   return (neuron0x4265600()*0.542055);
}

double NNfunction_sg_dR::synapse0x4275fb0() {
   return (neuron0x4265820()*0.03509);
}

double NNfunction_sg_dR::synapse0x4275ff0() {
   return (neuron0x4265b60()*-0.0192936);
}

double NNfunction_sg_dR::synapse0x4276030() {
   return (neuron0x4265ea0()*-0.0123155);
}

double NNfunction_sg_dR::synapse0x4276070() {
   return (neuron0x42661e0()*0.00984667);
}

double NNfunction_sg_dR::synapse0x42760b0() {
   return (neuron0x4266520()*-0.0576616);
}

double NNfunction_sg_dR::synapse0x42760f0() {
   return (neuron0x4266860()*-0.0345541);
}

double NNfunction_sg_dR::synapse0x4276470() {
   return (neuron0x4261d30()*0.00479309);
}

double NNfunction_sg_dR::synapse0x42764b0() {
   return (neuron0x4261fe0()*0.0334621);
}

double NNfunction_sg_dR::synapse0x42764f0() {
   return (neuron0x4262320()*-0.0125151);
}

double NNfunction_sg_dR::synapse0x4276530() {
   return (neuron0x4262660()*-0.550921);
}

double NNfunction_sg_dR::synapse0x4276570() {
   return (neuron0x42629a0()*-0.0393896);
}

double NNfunction_sg_dR::synapse0x42765b0() {
   return (neuron0x4262ce0()*-0.00240356);
}

double NNfunction_sg_dR::synapse0x42765f0() {
   return (neuron0x4263020()*-0.0105348);
}

double NNfunction_sg_dR::synapse0x4276630() {
   return (neuron0x4263360()*-0.00512109);
}

double NNfunction_sg_dR::synapse0x4276670() {
   return (neuron0x42636a0()*0.0206373);
}

double NNfunction_sg_dR::synapse0x426e830() {
   return (neuron0x42639e0()*-0.00804668);
}

double NNfunction_sg_dR::synapse0x426e870() {
   return (neuron0x4263d20()*-8.25609e-06);
}

double NNfunction_sg_dR::synapse0x426e8b0() {
   return (neuron0x4264060()*0.00529054);
}

double NNfunction_sg_dR::synapse0x426e8f0() {
   return (neuron0x42643a0()*0.0362009);
}

double NNfunction_sg_dR::synapse0x426e930() {
   return (neuron0x42646e0()*-0.0629395);
}

double NNfunction_sg_dR::synapse0x426e970() {
   return (neuron0x4264a20()*-0.123685);
}

double NNfunction_sg_dR::synapse0x426e9b0() {
   return (neuron0x4264d60()*-0.153709);
}

double NNfunction_sg_dR::synapse0x42762c0() {
   return (neuron0x42650a0()*-0.0639416);
}

double NNfunction_sg_dR::synapse0x4276300() {
   return (neuron0x4265600()*-0.341533);
}

double NNfunction_sg_dR::synapse0x426eb00() {
   return (neuron0x4265820()*-0.010388);
}

double NNfunction_sg_dR::synapse0x426eb40() {
   return (neuron0x4265b60()*0.00356588);
}

double NNfunction_sg_dR::synapse0x426eb80() {
   return (neuron0x4265ea0()*-0.00220598);
}

double NNfunction_sg_dR::synapse0x426ebc0() {
   return (neuron0x42661e0()*-0.00691842);
}

double NNfunction_sg_dR::synapse0x426ec00() {
   return (neuron0x4266520()*0.0225073);
}

double NNfunction_sg_dR::synapse0x426ec40() {
   return (neuron0x4266860()*-0.0186928);
}

double NNfunction_sg_dR::synapse0x426efc0() {
   return (neuron0x4261d30()*-0.0473478);
}

double NNfunction_sg_dR::synapse0x426f000() {
   return (neuron0x4261fe0()*0.313481);
}

double NNfunction_sg_dR::synapse0x426f040() {
   return (neuron0x4262320()*-0.0552509);
}

double NNfunction_sg_dR::synapse0x426f080() {
   return (neuron0x4262660()*-0.749787);
}

double NNfunction_sg_dR::synapse0x426f0c0() {
   return (neuron0x42629a0()*-0.144219);
}

double NNfunction_sg_dR::synapse0x426f100() {
   return (neuron0x4262ce0()*0.0134293);
}

double NNfunction_sg_dR::synapse0x426f140() {
   return (neuron0x4263020()*0.244312);
}

double NNfunction_sg_dR::synapse0x426f180() {
   return (neuron0x4263360()*-0.0809582);
}

double NNfunction_sg_dR::synapse0x426f1c0() {
   return (neuron0x42636a0()*0.143597);
}

double NNfunction_sg_dR::synapse0x426f200() {
   return (neuron0x42639e0()*0.10685);
}

double NNfunction_sg_dR::synapse0x426f240() {
   return (neuron0x4263d20()*0.0889535);
}

double NNfunction_sg_dR::synapse0x426f280() {
   return (neuron0x4264060()*0.290368);
}

double NNfunction_sg_dR::synapse0x426f2c0() {
   return (neuron0x42643a0()*0.262122);
}

double NNfunction_sg_dR::synapse0x426f300() {
   return (neuron0x42646e0()*-0.128681);
}

double NNfunction_sg_dR::synapse0x426f340() {
   return (neuron0x4264a20()*0.112914);
}

double NNfunction_sg_dR::synapse0x426f380() {
   return (neuron0x4264d60()*-0.329997);
}

double NNfunction_sg_dR::synapse0x426ee10() {
   return (neuron0x42650a0()*-0.775375);
}

double NNfunction_sg_dR::synapse0x426ee50() {
   return (neuron0x4265600()*0.458099);
}

double NNfunction_sg_dR::synapse0x426f4d0() {
   return (neuron0x4265820()*0.0367245);
}

double NNfunction_sg_dR::synapse0x426f510() {
   return (neuron0x4265b60()*0.149114);
}

double NNfunction_sg_dR::synapse0x426f550() {
   return (neuron0x4265ea0()*0.196489);
}

double NNfunction_sg_dR::synapse0x426f590() {
   return (neuron0x42661e0()*-0.00549334);
}

double NNfunction_sg_dR::synapse0x426f5d0() {
   return (neuron0x4266520()*-0.178495);
}

double NNfunction_sg_dR::synapse0x426f610() {
   return (neuron0x4266860()*0.00472555);
}

double NNfunction_sg_dR::synapse0x426f7e0() {
   return (neuron0x4261d30()*0.00100611);
}

double NNfunction_sg_dR::synapse0x4278870() {
   return (neuron0x4261fe0()*0.000887604);
}

double NNfunction_sg_dR::synapse0x42788b0() {
   return (neuron0x4262320()*0.000710937);
}

double NNfunction_sg_dR::synapse0x42788f0() {
   return (neuron0x4262660()*-5.51223);
}

double NNfunction_sg_dR::synapse0x4278930() {
   return (neuron0x42629a0()*-0.00172153);
}

double NNfunction_sg_dR::synapse0x4278970() {
   return (neuron0x4262ce0()*0.00225276);
}

double NNfunction_sg_dR::synapse0x42789b0() {
   return (neuron0x4263020()*0.000899302);
}

double NNfunction_sg_dR::synapse0x42789f0() {
   return (neuron0x4263360()*0.00611976);
}

double NNfunction_sg_dR::synapse0x4278a30() {
   return (neuron0x42636a0()*-0.00268194);
}

double NNfunction_sg_dR::synapse0x4278a70() {
   return (neuron0x42639e0()*-0.00234813);
}

double NNfunction_sg_dR::synapse0x4278ab0() {
   return (neuron0x4263d20()*-0.00129809);
}

double NNfunction_sg_dR::synapse0x4278af0() {
   return (neuron0x4264060()*-0.0162842);
}

double NNfunction_sg_dR::synapse0x4278b30() {
   return (neuron0x42643a0()*-0.021122);
}

double NNfunction_sg_dR::synapse0x4278b70() {
   return (neuron0x42646e0()*-0.00245349);
}

double NNfunction_sg_dR::synapse0x4278bb0() {
   return (neuron0x4264a20()*-0.00155752);
}

double NNfunction_sg_dR::synapse0x4278bf0() {
   return (neuron0x4264d60()*-0.0338767);
}

double NNfunction_sg_dR::synapse0x42786c0() {
   return (neuron0x42650a0()*0.00822862);
}

double NNfunction_sg_dR::synapse0x4278700() {
   return (neuron0x4265600()*-0.268656);
}

double NNfunction_sg_dR::synapse0x4278d40() {
   return (neuron0x4265820()*-0.00934281);
}

double NNfunction_sg_dR::synapse0x4278d80() {
   return (neuron0x4265b60()*-0.00373909);
}

double NNfunction_sg_dR::synapse0x4278dc0() {
   return (neuron0x4265ea0()*0.00799937);
}

double NNfunction_sg_dR::synapse0x4278e00() {
   return (neuron0x42661e0()*-0.00297648);
}

double NNfunction_sg_dR::synapse0x4278e40() {
   return (neuron0x4266520()*0.00255492);
}

double NNfunction_sg_dR::synapse0x4278e80() {
   return (neuron0x4266860()*-0.00370078);
}

double NNfunction_sg_dR::synapse0x4279200() {
   return (neuron0x4261d30()*-0.000194523);
}

double NNfunction_sg_dR::synapse0x4279240() {
   return (neuron0x4261fe0()*0.00725864);
}

double NNfunction_sg_dR::synapse0x4279280() {
   return (neuron0x4262320()*-0.0160375);
}

double NNfunction_sg_dR::synapse0x42792c0() {
   return (neuron0x4262660()*0.12543);
}

double NNfunction_sg_dR::synapse0x4279300() {
   return (neuron0x42629a0()*0.0179449);
}

double NNfunction_sg_dR::synapse0x4279340() {
   return (neuron0x4262ce0()*0.00373227);
}

double NNfunction_sg_dR::synapse0x4279380() {
   return (neuron0x4263020()*0.00768824);
}

double NNfunction_sg_dR::synapse0x42793c0() {
   return (neuron0x4263360()*0.00676052);
}

double NNfunction_sg_dR::synapse0x4279400() {
   return (neuron0x42636a0()*-0.0579597);
}

double NNfunction_sg_dR::synapse0x4279440() {
   return (neuron0x42639e0()*-0.00130863);
}

double NNfunction_sg_dR::synapse0x4279480() {
   return (neuron0x4263d20()*-0.125965);
}

double NNfunction_sg_dR::synapse0x42794c0() {
   return (neuron0x4264060()*-0.0892509);
}

double NNfunction_sg_dR::synapse0x4279500() {
   return (neuron0x42643a0()*-0.0552145);
}

double NNfunction_sg_dR::synapse0x4279540() {
   return (neuron0x42646e0()*-0.102236);
}

double NNfunction_sg_dR::synapse0x4279580() {
   return (neuron0x4264a20()*0.020024);
}

double NNfunction_sg_dR::synapse0x42795c0() {
   return (neuron0x4264d60()*0.0155128);
}

double NNfunction_sg_dR::synapse0x4279050() {
   return (neuron0x42650a0()*-0.0624668);
}

double NNfunction_sg_dR::synapse0x4279090() {
   return (neuron0x4265600()*-0.445626);
}

double NNfunction_sg_dR::synapse0x4279710() {
   return (neuron0x4265820()*-0.0342916);
}

double NNfunction_sg_dR::synapse0x4279750() {
   return (neuron0x4265b60()*-0.0195282);
}

double NNfunction_sg_dR::synapse0x4279790() {
   return (neuron0x4265ea0()*-0.00416503);
}

double NNfunction_sg_dR::synapse0x42797d0() {
   return (neuron0x42661e0()*0.00601248);
}

double NNfunction_sg_dR::synapse0x4279810() {
   return (neuron0x4266520()*0.00618086);
}

double NNfunction_sg_dR::synapse0x4279850() {
   return (neuron0x4266860()*0.00586005);
}

double NNfunction_sg_dR::synapse0x4279bd0() {
   return (neuron0x4261d30()*-0.512057);
}

double NNfunction_sg_dR::synapse0x4279c10() {
   return (neuron0x4261fe0()*0.239163);
}

double NNfunction_sg_dR::synapse0x4279c50() {
   return (neuron0x4262320()*0.278565);
}

double NNfunction_sg_dR::synapse0x4279c90() {
   return (neuron0x4262660()*0.80761);
}

double NNfunction_sg_dR::synapse0x4279cd0() {
   return (neuron0x42629a0()*0.216553);
}

double NNfunction_sg_dR::synapse0x4279d10() {
   return (neuron0x4262ce0()*0.0843012);
}

double NNfunction_sg_dR::synapse0x4279d50() {
   return (neuron0x4263020()*-0.160475);
}

double NNfunction_sg_dR::synapse0x4279d90() {
   return (neuron0x4263360()*-0.0643314);
}

double NNfunction_sg_dR::synapse0x4279dd0() {
   return (neuron0x42636a0()*-0.128664);
}

double NNfunction_sg_dR::synapse0x4279e10() {
   return (neuron0x42639e0()*0.251034);
}

double NNfunction_sg_dR::synapse0x4279e50() {
   return (neuron0x4263d20()*-0.193018);
}

double NNfunction_sg_dR::synapse0x4279e90() {
   return (neuron0x4264060()*-0.230611);
}

double NNfunction_sg_dR::synapse0x4279ed0() {
   return (neuron0x42643a0()*0.161458);
}

double NNfunction_sg_dR::synapse0x4279f10() {
   return (neuron0x42646e0()*-0.14593);
}

double NNfunction_sg_dR::synapse0x4279f50() {
   return (neuron0x4264a20()*0.18295);
}

double NNfunction_sg_dR::synapse0x4279f90() {
   return (neuron0x4264d60()*-0.274742);
}

double NNfunction_sg_dR::synapse0x4279a20() {
   return (neuron0x42650a0()*-0.37511);
}

double NNfunction_sg_dR::synapse0x4279a60() {
   return (neuron0x4265600()*0.18031);
}

double NNfunction_sg_dR::synapse0x427a0e0() {
   return (neuron0x4265820()*0.151392);
}

double NNfunction_sg_dR::synapse0x427a120() {
   return (neuron0x4265b60()*-0.600633);
}

double NNfunction_sg_dR::synapse0x427a160() {
   return (neuron0x4265ea0()*0.0667096);
}

double NNfunction_sg_dR::synapse0x427a1a0() {
   return (neuron0x42661e0()*0.233229);
}

double NNfunction_sg_dR::synapse0x427a1e0() {
   return (neuron0x4266520()*0.197667);
}

double NNfunction_sg_dR::synapse0x427a220() {
   return (neuron0x4266860()*-0.0942489);
}

double NNfunction_sg_dR::synapse0x427a5a0() {
   return (neuron0x4261d30()*-0.0151891);
}

double NNfunction_sg_dR::synapse0x427a5e0() {
   return (neuron0x4261fe0()*0.00318427);
}

double NNfunction_sg_dR::synapse0x427a620() {
   return (neuron0x4262320()*0.00496879);
}

double NNfunction_sg_dR::synapse0x427a660() {
   return (neuron0x4262660()*0.380121);
}

double NNfunction_sg_dR::synapse0x427a6a0() {
   return (neuron0x42629a0()*0.0212101);
}

double NNfunction_sg_dR::synapse0x427a6e0() {
   return (neuron0x4262ce0()*0.0604301);
}

double NNfunction_sg_dR::synapse0x427a720() {
   return (neuron0x4263020()*0.0575683);
}

double NNfunction_sg_dR::synapse0x427a760() {
   return (neuron0x4263360()*0.0705915);
}

double NNfunction_sg_dR::synapse0x427a7a0() {
   return (neuron0x42636a0()*0.0113233);
}

double NNfunction_sg_dR::synapse0x427a7e0() {
   return (neuron0x42639e0()*0.000771825);
}

double NNfunction_sg_dR::synapse0x427a820() {
   return (neuron0x4263d20()*0.0496854);
}

double NNfunction_sg_dR::synapse0x427a860() {
   return (neuron0x4264060()*0.132169);
}

double NNfunction_sg_dR::synapse0x427a8a0() {
   return (neuron0x42643a0()*0.129399);
}

double NNfunction_sg_dR::synapse0x427a8e0() {
   return (neuron0x42646e0()*-0.00267547);
}

double NNfunction_sg_dR::synapse0x427a920() {
   return (neuron0x4264a20()*0.0574489);
}

double NNfunction_sg_dR::synapse0x427a960() {
   return (neuron0x4264d60()*0.123496);
}

double NNfunction_sg_dR::synapse0x427a3f0() {
   return (neuron0x42650a0()*-0.0379684);
}

double NNfunction_sg_dR::synapse0x427a430() {
   return (neuron0x4265600()*1.55304);
}

double NNfunction_sg_dR::synapse0x427aab0() {
   return (neuron0x4265820()*0.0571853);
}

double NNfunction_sg_dR::synapse0x427aaf0() {
   return (neuron0x4265b60()*-0.013613);
}

double NNfunction_sg_dR::synapse0x427ab30() {
   return (neuron0x4265ea0()*0.0295233);
}

double NNfunction_sg_dR::synapse0x427ab70() {
   return (neuron0x42661e0()*-0.0103898);
}

double NNfunction_sg_dR::synapse0x427abb0() {
   return (neuron0x4266520()*0.0118488);
}

double NNfunction_sg_dR::synapse0x427abf0() {
   return (neuron0x4266860()*0.0509067);
}

double NNfunction_sg_dR::synapse0x427af70() {
   return (neuron0x4261d30()*-0.250574);
}

double NNfunction_sg_dR::synapse0x427afb0() {
   return (neuron0x4261fe0()*0.174562);
}

double NNfunction_sg_dR::synapse0x427aff0() {
   return (neuron0x4262320()*-0.0402731);
}

double NNfunction_sg_dR::synapse0x427b030() {
   return (neuron0x4262660()*0.695803);
}

double NNfunction_sg_dR::synapse0x427b070() {
   return (neuron0x42629a0()*0.261031);
}

double NNfunction_sg_dR::synapse0x427b0b0() {
   return (neuron0x4262ce0()*-0.0438728);
}

double NNfunction_sg_dR::synapse0x427b0f0() {
   return (neuron0x4263020()*-0.00286948);
}

double NNfunction_sg_dR::synapse0x427b130() {
   return (neuron0x4263360()*0.0516865);
}

double NNfunction_sg_dR::synapse0x427b170() {
   return (neuron0x42636a0()*0.0920324);
}

double NNfunction_sg_dR::synapse0x427b1b0() {
   return (neuron0x42639e0()*-0.245467);
}

double NNfunction_sg_dR::synapse0x427b1f0() {
   return (neuron0x4263d20()*0.0121531);
}

double NNfunction_sg_dR::synapse0x427b230() {
   return (neuron0x4264060()*-0.427683);
}

double NNfunction_sg_dR::synapse0x427b270() {
   return (neuron0x42643a0()*-0.554857);
}

double NNfunction_sg_dR::synapse0x427b2b0() {
   return (neuron0x42646e0()*-0.224302);
}

double NNfunction_sg_dR::synapse0x427b2f0() {
   return (neuron0x4264a20()*-0.274029);
}

double NNfunction_sg_dR::synapse0x427b330() {
   return (neuron0x4264d60()*-0.1294);
}

double NNfunction_sg_dR::synapse0x427adc0() {
   return (neuron0x42650a0()*-0.174441);
}

double NNfunction_sg_dR::synapse0x427ae00() {
   return (neuron0x4265600()*-0.558712);
}

double NNfunction_sg_dR::synapse0x427b480() {
   return (neuron0x4265820()*0.235926);
}

double NNfunction_sg_dR::synapse0x427b4c0() {
   return (neuron0x4265b60()*-0.32717);
}

double NNfunction_sg_dR::synapse0x427b500() {
   return (neuron0x4265ea0()*-0.0824287);
}

double NNfunction_sg_dR::synapse0x427b540() {
   return (neuron0x42661e0()*-0.10231);
}

double NNfunction_sg_dR::synapse0x427b580() {
   return (neuron0x4266520()*0.350911);
}

double NNfunction_sg_dR::synapse0x427b5c0() {
   return (neuron0x4266860()*-0.0658538);
}

double NNfunction_sg_dR::synapse0x427b940() {
   return (neuron0x4261d30()*-0.00304365);
}

double NNfunction_sg_dR::synapse0x427b980() {
   return (neuron0x4261fe0()*0.00176364);
}

double NNfunction_sg_dR::synapse0x427b9c0() {
   return (neuron0x4262320()*-0.00438327);
}

double NNfunction_sg_dR::synapse0x427ba00() {
   return (neuron0x4262660()*0.433557);
}

double NNfunction_sg_dR::synapse0x427ba40() {
   return (neuron0x42629a0()*0.00383125);
}

double NNfunction_sg_dR::synapse0x427ba80() {
   return (neuron0x4262ce0()*0.000673372);
}

double NNfunction_sg_dR::synapse0x427bac0() {
   return (neuron0x4263020()*-0.0030226);
}

double NNfunction_sg_dR::synapse0x427bb00() {
   return (neuron0x4263360()*0.00783534);
}

double NNfunction_sg_dR::synapse0x427bb40() {
   return (neuron0x42636a0()*-0.0264897);
}

double NNfunction_sg_dR::synapse0x427bb80() {
   return (neuron0x42639e0()*0.00164169);
}

double NNfunction_sg_dR::synapse0x427bbc0() {
   return (neuron0x4263d20()*0.0246483);
}

double NNfunction_sg_dR::synapse0x427bc00() {
   return (neuron0x4264060()*0.00968353);
}

double NNfunction_sg_dR::synapse0x427bc40() {
   return (neuron0x42643a0()*-0.00724825);
}

double NNfunction_sg_dR::synapse0x427bc80() {
   return (neuron0x42646e0()*-0.0120098);
}

double NNfunction_sg_dR::synapse0x427bcc0() {
   return (neuron0x4264a20()*0.0215785);
}

double NNfunction_sg_dR::synapse0x427bd00() {
   return (neuron0x4264d60()*0.00029541);
}

double NNfunction_sg_dR::synapse0x427b790() {
   return (neuron0x42650a0()*-0.00735005);
}

double NNfunction_sg_dR::synapse0x427b7d0() {
   return (neuron0x4265600()*-0.629551);
}

double NNfunction_sg_dR::synapse0x427be50() {
   return (neuron0x4265820()*-6.27204e-05);
}

double NNfunction_sg_dR::synapse0x427be90() {
   return (neuron0x4265b60()*-0.0105146);
}

double NNfunction_sg_dR::synapse0x427bed0() {
   return (neuron0x4265ea0()*-0.00268636);
}

double NNfunction_sg_dR::synapse0x427bf10() {
   return (neuron0x42661e0()*-0.00112096);
}

double NNfunction_sg_dR::synapse0x427bf50() {
   return (neuron0x4266520()*-0.0014035);
}

double NNfunction_sg_dR::synapse0x427bf90() {
   return (neuron0x4266860()*-0.000572134);
}

double NNfunction_sg_dR::synapse0x427c310() {
   return (neuron0x4261d30()*-0.0488639);
}

double NNfunction_sg_dR::synapse0x427c350() {
   return (neuron0x4261fe0()*-0.227945);
}

double NNfunction_sg_dR::synapse0x427c390() {
   return (neuron0x4262320()*-0.0303196);
}

double NNfunction_sg_dR::synapse0x427c3d0() {
   return (neuron0x4262660()*2.45376);
}

double NNfunction_sg_dR::synapse0x427c410() {
   return (neuron0x42629a0()*-0.0238899);
}

double NNfunction_sg_dR::synapse0x427c450() {
   return (neuron0x4262ce0()*-0.120128);
}

double NNfunction_sg_dR::synapse0x427c490() {
   return (neuron0x4263020()*-0.100483);
}

double NNfunction_sg_dR::synapse0x427c4d0() {
   return (neuron0x4263360()*0.18297);
}

double NNfunction_sg_dR::synapse0x427c510() {
   return (neuron0x42636a0()*-0.0153409);
}

double NNfunction_sg_dR::synapse0x427c550() {
   return (neuron0x42639e0()*0.0276132);
}

double NNfunction_sg_dR::synapse0x427c590() {
   return (neuron0x4263d20()*0.0121567);
}

double NNfunction_sg_dR::synapse0x427c5d0() {
   return (neuron0x4264060()*0.139399);
}

double NNfunction_sg_dR::synapse0x427c610() {
   return (neuron0x42643a0()*0.0533524);
}

double NNfunction_sg_dR::synapse0x427c650() {
   return (neuron0x42646e0()*-0.113233);
}

double NNfunction_sg_dR::synapse0x427c690() {
   return (neuron0x4264a20()*0.092929);
}

double NNfunction_sg_dR::synapse0x427c6d0() {
   return (neuron0x4264d60()*-0.1219);
}

double NNfunction_sg_dR::synapse0x427c160() {
   return (neuron0x42650a0()*-0.134017);
}

double NNfunction_sg_dR::synapse0x427c1a0() {
   return (neuron0x4265600()*-0.0506727);
}

double NNfunction_sg_dR::synapse0x427c820() {
   return (neuron0x4265820()*0.0665296);
}

double NNfunction_sg_dR::synapse0x427c860() {
   return (neuron0x4265b60()*0.0234094);
}

double NNfunction_sg_dR::synapse0x427c8a0() {
   return (neuron0x4265ea0()*0.000912268);
}

double NNfunction_sg_dR::synapse0x427c8e0() {
   return (neuron0x42661e0()*-0.0295326);
}

double NNfunction_sg_dR::synapse0x427c920() {
   return (neuron0x4266520()*0.0196557);
}

double NNfunction_sg_dR::synapse0x427c960() {
   return (neuron0x4266860()*0.0366422);
}

double NNfunction_sg_dR::synapse0x427cce0() {
   return (neuron0x4261d30()*0.00116874);
}

double NNfunction_sg_dR::synapse0x427cd20() {
   return (neuron0x4261fe0()*0.00536166);
}

double NNfunction_sg_dR::synapse0x427cd60() {
   return (neuron0x4262320()*-0.000228752);
}

double NNfunction_sg_dR::synapse0x427cda0() {
   return (neuron0x4262660()*-8.01002);
}

double NNfunction_sg_dR::synapse0x427cde0() {
   return (neuron0x42629a0()*0.00140965);
}

double NNfunction_sg_dR::synapse0x427ce20() {
   return (neuron0x4262ce0()*-0.00547856);
}

double NNfunction_sg_dR::synapse0x427ce60() {
   return (neuron0x4263020()*-0.00221835);
}

double NNfunction_sg_dR::synapse0x427cea0() {
   return (neuron0x4263360()*-0.00178142);
}

double NNfunction_sg_dR::synapse0x427cee0() {
   return (neuron0x42636a0()*-0.00344973);
}

double NNfunction_sg_dR::synapse0x427cf20() {
   return (neuron0x42639e0()*-0.00533335);
}

double NNfunction_sg_dR::synapse0x427cf60() {
   return (neuron0x4263d20()*-0.00473998);
}

double NNfunction_sg_dR::synapse0x427cfa0() {
   return (neuron0x4264060()*-0.00155992);
}

double NNfunction_sg_dR::synapse0x427cfe0() {
   return (neuron0x42643a0()*-0.000162107);
}

double NNfunction_sg_dR::synapse0x427d020() {
   return (neuron0x42646e0()*-0.00927082);
}

double NNfunction_sg_dR::synapse0x427d060() {
   return (neuron0x4264a20()*-0.00360856);
}

double NNfunction_sg_dR::synapse0x427d0a0() {
   return (neuron0x4264d60()*-0.0186359);
}

double NNfunction_sg_dR::synapse0x427cb30() {
   return (neuron0x42650a0()*0.00123993);
}

double NNfunction_sg_dR::synapse0x427cb70() {
   return (neuron0x4265600()*0.0370246);
}

double NNfunction_sg_dR::synapse0x427d1f0() {
   return (neuron0x4265820()*0.00295118);
}

double NNfunction_sg_dR::synapse0x427d230() {
   return (neuron0x4265b60()*-0.0023576);
}

double NNfunction_sg_dR::synapse0x427d270() {
   return (neuron0x4265ea0()*0.00749947);
}

double NNfunction_sg_dR::synapse0x427d2b0() {
   return (neuron0x42661e0()*0.00124826);
}

double NNfunction_sg_dR::synapse0x427d2f0() {
   return (neuron0x4266520()*-0.00184576);
}

double NNfunction_sg_dR::synapse0x427d330() {
   return (neuron0x4266860()*-0.00533724);
}

double NNfunction_sg_dR::synapse0x427d6b0() {
   return (neuron0x4261d30()*-0.009463);
}

double NNfunction_sg_dR::synapse0x4271c80() {
   return (neuron0x4261fe0()*-0.00647003);
}

double NNfunction_sg_dR::synapse0x4271cc0() {
   return (neuron0x4262320()*0.000955677);
}

double NNfunction_sg_dR::synapse0x4271d00() {
   return (neuron0x4262660()*1.08627);
}

double NNfunction_sg_dR::synapse0x4271f50() {
   return (neuron0x42629a0()*0.00243274);
}

double NNfunction_sg_dR::synapse0x4271f90() {
   return (neuron0x4262ce0()*0.00834942);
}

double NNfunction_sg_dR::synapse0x4271fd0() {
   return (neuron0x4263020()*0.00554348);
}

double NNfunction_sg_dR::synapse0x4272220() {
   return (neuron0x4263360()*0.00488567);
}

double NNfunction_sg_dR::synapse0x4272260() {
   return (neuron0x42636a0()*0.0376546);
}

double NNfunction_sg_dR::synapse0x42724b0() {
   return (neuron0x42639e0()*-0.00897083);
}

double NNfunction_sg_dR::synapse0x42724f0() {
   return (neuron0x4263d20()*0.0227476);
}

double NNfunction_sg_dR::synapse0x4272530() {
   return (neuron0x4264060()*-0.00904828);
}

double NNfunction_sg_dR::synapse0x4272780() {
   return (neuron0x42643a0()*-0.000419735);
}

double NNfunction_sg_dR::synapse0x42727c0() {
   return (neuron0x42646e0()*0.0155838);
}

double NNfunction_sg_dR::synapse0x4272a10() {
   return (neuron0x4264a20()*-0.0189417);
}

double NNfunction_sg_dR::synapse0x4272a50() {
   return (neuron0x4264d60()*-0.00366022);
}

double NNfunction_sg_dR::synapse0x427d500() {
   return (neuron0x42650a0()*0.0106716);
}

double NNfunction_sg_dR::synapse0x427d540() {
   return (neuron0x4265600()*0.552564);
}

double NNfunction_sg_dR::synapse0x4272ba0() {
   return (neuron0x4265820()*0.00450693);
}

double NNfunction_sg_dR::synapse0x42730b0() {
   return (neuron0x4265b60()*-0.000433575);
}

double NNfunction_sg_dR::synapse0x42730f0() {
   return (neuron0x4265ea0()*-0.00295948);
}

double NNfunction_sg_dR::synapse0x4273130() {
   return (neuron0x42661e0()*0.00366502);
}

double NNfunction_sg_dR::synapse0x4273380() {
   return (neuron0x4266520()*-0.00875494);
}

double NNfunction_sg_dR::synapse0x42733c0() {
   return (neuron0x4266860()*-0.00958226);
}

double NNfunction_sg_dR::synapse0x4272c70() {
   return (neuron0x4261d30()*0.0793017);
}

double NNfunction_sg_dR::synapse0x4272cb0() {
   return (neuron0x4261fe0()*-0.143978);
}

double NNfunction_sg_dR::synapse0x4272cf0() {
   return (neuron0x4262320()*0.229835);
}

double NNfunction_sg_dR::synapse0x4272d30() {
   return (neuron0x4262660()*0.905589);
}

double NNfunction_sg_dR::synapse0x42736b0() {
   return (neuron0x42629a0()*-0.00176183);
}

double NNfunction_sg_dR::synapse0x427fa00() {
   return (neuron0x4262ce0()*0.110815);
}

double NNfunction_sg_dR::synapse0x427fa40() {
   return (neuron0x4263020()*-0.189161);
}

double NNfunction_sg_dR::synapse0x427fa80() {
   return (neuron0x4263360()*0.108805);
}

double NNfunction_sg_dR::synapse0x427fac0() {
   return (neuron0x42636a0()*-0.051868);
}

double NNfunction_sg_dR::synapse0x427fb00() {
   return (neuron0x42639e0()*0.112738);
}

double NNfunction_sg_dR::synapse0x427fb40() {
   return (neuron0x4263d20()*0.333633);
}

double NNfunction_sg_dR::synapse0x427fb80() {
   return (neuron0x4264060()*-0.143206);
}

double NNfunction_sg_dR::synapse0x427fbc0() {
   return (neuron0x42643a0()*-0.364495);
}

double NNfunction_sg_dR::synapse0x427fc00() {
   return (neuron0x42646e0()*-0.0755162);
}

double NNfunction_sg_dR::synapse0x427fc40() {
   return (neuron0x4264a20()*0.234151);
}

double NNfunction_sg_dR::synapse0x427fc80() {
   return (neuron0x4264d60()*0.263936);
}

double NNfunction_sg_dR::synapse0x4273590() {
   return (neuron0x42650a0()*0.0554037);
}

double NNfunction_sg_dR::synapse0x42735d0() {
   return (neuron0x4265600()*-0.027922);
}

double NNfunction_sg_dR::synapse0x427fdd0() {
   return (neuron0x4265820()*0.0569256);
}

double NNfunction_sg_dR::synapse0x427fe10() {
   return (neuron0x4265b60()*0.0971891);
}

double NNfunction_sg_dR::synapse0x427fe50() {
   return (neuron0x4265ea0()*0.00775279);
}

double NNfunction_sg_dR::synapse0x427fe90() {
   return (neuron0x42661e0()*0.144133);
}

double NNfunction_sg_dR::synapse0x427fed0() {
   return (neuron0x4266520()*0.0270315);
}

double NNfunction_sg_dR::synapse0x427ff10() {
   return (neuron0x4266860()*0.0560072);
}

double NNfunction_sg_dR::synapse0x4280290() {
   return (neuron0x4261d30()*0.0240268);
}

double NNfunction_sg_dR::synapse0x42802d0() {
   return (neuron0x4261fe0()*0.0086663);
}

double NNfunction_sg_dR::synapse0x4280310() {
   return (neuron0x4262320()*-0.000152052);
}

double NNfunction_sg_dR::synapse0x4280350() {
   return (neuron0x4262660()*-0.588957);
}

double NNfunction_sg_dR::synapse0x4280390() {
   return (neuron0x42629a0()*0.0681735);
}

double NNfunction_sg_dR::synapse0x42803d0() {
   return (neuron0x4262ce0()*-0.019743);
}

double NNfunction_sg_dR::synapse0x4280410() {
   return (neuron0x4263020()*-0.0143159);
}

double NNfunction_sg_dR::synapse0x4280450() {
   return (neuron0x4263360()*0.0206286);
}

double NNfunction_sg_dR::synapse0x4280490() {
   return (neuron0x42636a0()*-0.410357);
}

double NNfunction_sg_dR::synapse0x42804d0() {
   return (neuron0x42639e0()*-0.227322);
}

double NNfunction_sg_dR::synapse0x4280510() {
   return (neuron0x4263d20()*0.0990698);
}

double NNfunction_sg_dR::synapse0x4280550() {
   return (neuron0x4264060()*0.0850022);
}

double NNfunction_sg_dR::synapse0x4280590() {
   return (neuron0x42643a0()*0.10326);
}

double NNfunction_sg_dR::synapse0x42805d0() {
   return (neuron0x42646e0()*0.195146);
}

double NNfunction_sg_dR::synapse0x4280610() {
   return (neuron0x4264a20()*0.101011);
}

double NNfunction_sg_dR::synapse0x4280650() {
   return (neuron0x4264d60()*-0.00871883);
}

double NNfunction_sg_dR::synapse0x42800e0() {
   return (neuron0x42650a0()*0.064105);
}

double NNfunction_sg_dR::synapse0x4280120() {
   return (neuron0x4265600()*1.21204);
}

double NNfunction_sg_dR::synapse0x42807a0() {
   return (neuron0x4265820()*0.0667654);
}

double NNfunction_sg_dR::synapse0x42807e0() {
   return (neuron0x4265b60()*0.0438053);
}

double NNfunction_sg_dR::synapse0x4280820() {
   return (neuron0x4265ea0()*-0.115331);
}

double NNfunction_sg_dR::synapse0x4280860() {
   return (neuron0x42661e0()*-0.0176235);
}

double NNfunction_sg_dR::synapse0x42808a0() {
   return (neuron0x4266520()*0.0780166);
}

double NNfunction_sg_dR::synapse0x42808e0() {
   return (neuron0x4266860()*0.0151502);
}

double NNfunction_sg_dR::synapse0x4280c60() {
   return (neuron0x4261d30()*0.00435848);
}

double NNfunction_sg_dR::synapse0x4280ca0() {
   return (neuron0x4261fe0()*0.00565006);
}

double NNfunction_sg_dR::synapse0x4280ce0() {
   return (neuron0x4262320()*-0.00539676);
}

double NNfunction_sg_dR::synapse0x4280d20() {
   return (neuron0x4262660()*-0.481967);
}

double NNfunction_sg_dR::synapse0x4280d60() {
   return (neuron0x42629a0()*0.0168434);
}

double NNfunction_sg_dR::synapse0x4280da0() {
   return (neuron0x4262ce0()*0.0116984);
}

double NNfunction_sg_dR::synapse0x4280de0() {
   return (neuron0x4263020()*0.0150197);
}

double NNfunction_sg_dR::synapse0x4280e20() {
   return (neuron0x4263360()*0.00398391);
}

double NNfunction_sg_dR::synapse0x4280e60() {
   return (neuron0x42636a0()*-0.0112614);
}

double NNfunction_sg_dR::synapse0x4280ea0() {
   return (neuron0x42639e0()*0.0224582);
}

double NNfunction_sg_dR::synapse0x4280ee0() {
   return (neuron0x4263d20()*-0.0490464);
}

double NNfunction_sg_dR::synapse0x4280f20() {
   return (neuron0x4264060()*0.0287873);
}

double NNfunction_sg_dR::synapse0x4280f60() {
   return (neuron0x42643a0()*0.0309759);
}

double NNfunction_sg_dR::synapse0x4280fa0() {
   return (neuron0x42646e0()*-0.0329548);
}

double NNfunction_sg_dR::synapse0x4280fe0() {
   return (neuron0x4264a20()*0.026807);
}

double NNfunction_sg_dR::synapse0x4281020() {
   return (neuron0x4264d60()*0.0272042);
}

double NNfunction_sg_dR::synapse0x4280ab0() {
   return (neuron0x42650a0()*-0.0286297);
}

double NNfunction_sg_dR::synapse0x4280af0() {
   return (neuron0x4265600()*2.60385);
}

double NNfunction_sg_dR::synapse0x4281170() {
   return (neuron0x4265820()*0.0124683);
}

double NNfunction_sg_dR::synapse0x42811b0() {
   return (neuron0x4265b60()*-0.00941853);
}

double NNfunction_sg_dR::synapse0x42811f0() {
   return (neuron0x4265ea0()*0.00578002);
}

double NNfunction_sg_dR::synapse0x4281230() {
   return (neuron0x42661e0()*0.00116649);
}

double NNfunction_sg_dR::synapse0x4281270() {
   return (neuron0x4266520()*0.00177032);
}

double NNfunction_sg_dR::synapse0x42812b0() {
   return (neuron0x4266860()*0.00980528);
}

double NNfunction_sg_dR::synapse0x4281630() {
   return (neuron0x4261d30()*-0.0118948);
}

double NNfunction_sg_dR::synapse0x4281670() {
   return (neuron0x4261fe0()*-0.163616);
}

double NNfunction_sg_dR::synapse0x42816b0() {
   return (neuron0x4262320()*-0.0594524);
}

double NNfunction_sg_dR::synapse0x42816f0() {
   return (neuron0x4262660()*-1.40422);
}

double NNfunction_sg_dR::synapse0x4281730() {
   return (neuron0x42629a0()*0.031377);
}

double NNfunction_sg_dR::synapse0x4281770() {
   return (neuron0x4262ce0()*0.058199);
}

double NNfunction_sg_dR::synapse0x42817b0() {
   return (neuron0x4263020()*-0.0572311);
}

double NNfunction_sg_dR::synapse0x42817f0() {
   return (neuron0x4263360()*0.137068);
}

double NNfunction_sg_dR::synapse0x4281830() {
   return (neuron0x42636a0()*-0.0868612);
}

double NNfunction_sg_dR::synapse0x4281870() {
   return (neuron0x42639e0()*0.0751502);
}

double NNfunction_sg_dR::synapse0x42818b0() {
   return (neuron0x4263d20()*-0.0462998);
}

double NNfunction_sg_dR::synapse0x42818f0() {
   return (neuron0x4264060()*-0.00204424);
}

double NNfunction_sg_dR::synapse0x4281930() {
   return (neuron0x42643a0()*-0.116843);
}

double NNfunction_sg_dR::synapse0x4281970() {
   return (neuron0x42646e0()*0.182072);
}

double NNfunction_sg_dR::synapse0x42819b0() {
   return (neuron0x4264a20()*0.179167);
}

double NNfunction_sg_dR::synapse0x42819f0() {
   return (neuron0x4264d60()*0.0887885);
}

double NNfunction_sg_dR::synapse0x4281480() {
   return (neuron0x42650a0()*-0.287286);
}

double NNfunction_sg_dR::synapse0x42814c0() {
   return (neuron0x4265600()*-0.165286);
}

double NNfunction_sg_dR::synapse0x4281b40() {
   return (neuron0x4265820()*0.175087);
}

double NNfunction_sg_dR::synapse0x4281b80() {
   return (neuron0x4265b60()*-0.0309833);
}

double NNfunction_sg_dR::synapse0x4281bc0() {
   return (neuron0x4265ea0()*0.000754067);
}

double NNfunction_sg_dR::synapse0x4281c00() {
   return (neuron0x42661e0()*-0.176382);
}

double NNfunction_sg_dR::synapse0x4281c40() {
   return (neuron0x4266520()*0.063514);
}

double NNfunction_sg_dR::synapse0x4281c80() {
   return (neuron0x4266860()*0.0398929);
}

double NNfunction_sg_dR::synapse0x4282000() {
   return (neuron0x4261d30()*0.0042437);
}

double NNfunction_sg_dR::synapse0x4282040() {
   return (neuron0x4261fe0()*0.00110984);
}

double NNfunction_sg_dR::synapse0x4282080() {
   return (neuron0x4262320()*-0.0219081);
}

double NNfunction_sg_dR::synapse0x42820c0() {
   return (neuron0x4262660()*1.92434);
}

double NNfunction_sg_dR::synapse0x4282100() {
   return (neuron0x42629a0()*-0.0513603);
}

double NNfunction_sg_dR::synapse0x4282140() {
   return (neuron0x4262ce0()*0.0719781);
}

double NNfunction_sg_dR::synapse0x4282180() {
   return (neuron0x4263020()*0.0791724);
}

double NNfunction_sg_dR::synapse0x42821c0() {
   return (neuron0x4263360()*-0.063737);
}

double NNfunction_sg_dR::synapse0x4282200() {
   return (neuron0x42636a0()*0.0404788);
}

double NNfunction_sg_dR::synapse0x4282240() {
   return (neuron0x42639e0()*0.00200891);
}

double NNfunction_sg_dR::synapse0x4282280() {
   return (neuron0x4263d20()*-0.00270567);
}

double NNfunction_sg_dR::synapse0x42822c0() {
   return (neuron0x4264060()*-0.133911);
}

double NNfunction_sg_dR::synapse0x4282300() {
   return (neuron0x42643a0()*0.226639);
}

double NNfunction_sg_dR::synapse0x4282340() {
   return (neuron0x42646e0()*0.0968433);
}

double NNfunction_sg_dR::synapse0x4282380() {
   return (neuron0x4264a20()*0.140901);
}

double NNfunction_sg_dR::synapse0x42823c0() {
   return (neuron0x4264d60()*-0.368374);
}

double NNfunction_sg_dR::synapse0x4281e50() {
   return (neuron0x42650a0()*0.10606);
}

double NNfunction_sg_dR::synapse0x4281e90() {
   return (neuron0x4265600()*-0.0667988);
}

double NNfunction_sg_dR::synapse0x4282510() {
   return (neuron0x4265820()*0.0400472);
}

double NNfunction_sg_dR::synapse0x4282550() {
   return (neuron0x4265b60()*-0.00301766);
}

double NNfunction_sg_dR::synapse0x4282590() {
   return (neuron0x4265ea0()*-0.011476);
}

double NNfunction_sg_dR::synapse0x42825d0() {
   return (neuron0x42661e0()*-0.0114628);
}

double NNfunction_sg_dR::synapse0x4282610() {
   return (neuron0x4266520()*-0.0115931);
}

double NNfunction_sg_dR::synapse0x4282650() {
   return (neuron0x4266860()*-0.0209336);
}

double NNfunction_sg_dR::synapse0x42829d0() {
   return (neuron0x4261d30()*-0.0135786);
}

double NNfunction_sg_dR::synapse0x4282a10() {
   return (neuron0x4261fe0()*0.00382006);
}

double NNfunction_sg_dR::synapse0x4282a50() {
   return (neuron0x4262320()*0.0178077);
}

double NNfunction_sg_dR::synapse0x4282a90() {
   return (neuron0x4262660()*-0.866825);
}

double NNfunction_sg_dR::synapse0x4282ad0() {
   return (neuron0x42629a0()*-0.0143506);
}

double NNfunction_sg_dR::synapse0x4282b10() {
   return (neuron0x4262ce0()*-0.00659454);
}

double NNfunction_sg_dR::synapse0x4282b50() {
   return (neuron0x4263020()*0.00205586);
}

double NNfunction_sg_dR::synapse0x4282b90() {
   return (neuron0x4263360()*0.018034);
}

double NNfunction_sg_dR::synapse0x4282bd0() {
   return (neuron0x42636a0()*0.0847284);
}

double NNfunction_sg_dR::synapse0x4282c10() {
   return (neuron0x42639e0()*-0.0631579);
}

double NNfunction_sg_dR::synapse0x4282c50() {
   return (neuron0x4263d20()*-0.0202713);
}

double NNfunction_sg_dR::synapse0x4282c90() {
   return (neuron0x4264060()*-0.0623492);
}

double NNfunction_sg_dR::synapse0x4282cd0() {
   return (neuron0x42643a0()*-0.0383702);
}

double NNfunction_sg_dR::synapse0x4282d10() {
   return (neuron0x42646e0()*0.00175492);
}

double NNfunction_sg_dR::synapse0x4282d50() {
   return (neuron0x4264a20()*-0.00554173);
}

double NNfunction_sg_dR::synapse0x4282d90() {
   return (neuron0x4264d60()*0.0254412);
}

double NNfunction_sg_dR::synapse0x4282820() {
   return (neuron0x42650a0()*-0.00319631);
}

double NNfunction_sg_dR::synapse0x4282860() {
   return (neuron0x4265600()*1.55862);
}

double NNfunction_sg_dR::synapse0x4282ee0() {
   return (neuron0x4265820()*-0.0339176);
}

double NNfunction_sg_dR::synapse0x4282f20() {
   return (neuron0x4265b60()*0.00807423);
}

double NNfunction_sg_dR::synapse0x4282f60() {
   return (neuron0x4265ea0()*0.0140601);
}

double NNfunction_sg_dR::synapse0x4282fa0() {
   return (neuron0x42661e0()*-0.000298431);
}

double NNfunction_sg_dR::synapse0x4282fe0() {
   return (neuron0x4266520()*-0.0164487);
}

double NNfunction_sg_dR::synapse0x4283020() {
   return (neuron0x4266860()*-0.00351842);
}

double NNfunction_sg_dR::synapse0x42833a0() {
   return (neuron0x4261d30()*-0.167493);
}

double NNfunction_sg_dR::synapse0x42833e0() {
   return (neuron0x4261fe0()*-1.60717e-05);
}

double NNfunction_sg_dR::synapse0x4283420() {
   return (neuron0x4262320()*0.139996);
}

double NNfunction_sg_dR::synapse0x4283460() {
   return (neuron0x4262660()*0.30224);
}

double NNfunction_sg_dR::synapse0x42834a0() {
   return (neuron0x42629a0()*0.43019);
}

double NNfunction_sg_dR::synapse0x42834e0() {
   return (neuron0x4262ce0()*0.181391);
}

double NNfunction_sg_dR::synapse0x4283520() {
   return (neuron0x4263020()*0.272934);
}

double NNfunction_sg_dR::synapse0x4283560() {
   return (neuron0x4263360()*0.43792);
}

double NNfunction_sg_dR::synapse0x42835a0() {
   return (neuron0x42636a0()*0.434583);
}

double NNfunction_sg_dR::synapse0x42835e0() {
   return (neuron0x42639e0()*0.0851641);
}

double NNfunction_sg_dR::synapse0x4283620() {
   return (neuron0x4263d20()*0.309627);
}

double NNfunction_sg_dR::synapse0x4283660() {
   return (neuron0x4264060()*0.00177881);
}

double NNfunction_sg_dR::synapse0x42836a0() {
   return (neuron0x42643a0()*0.174283);
}

double NNfunction_sg_dR::synapse0x42836e0() {
   return (neuron0x42646e0()*0.123174);
}

double NNfunction_sg_dR::synapse0x4283720() {
   return (neuron0x4264a20()*-0.0530823);
}

double NNfunction_sg_dR::synapse0x4283760() {
   return (neuron0x4264d60()*0.181193);
}

double NNfunction_sg_dR::synapse0x42831f0() {
   return (neuron0x42650a0()*0.178429);
}

double NNfunction_sg_dR::synapse0x4283230() {
   return (neuron0x4265600()*0.357151);
}

double NNfunction_sg_dR::synapse0x42838b0() {
   return (neuron0x4265820()*0.128171);
}

double NNfunction_sg_dR::synapse0x42838f0() {
   return (neuron0x4265b60()*0.171607);
}

double NNfunction_sg_dR::synapse0x4283930() {
   return (neuron0x4265ea0()*-0.232842);
}

double NNfunction_sg_dR::synapse0x4283970() {
   return (neuron0x42661e0()*0.178967);
}

double NNfunction_sg_dR::synapse0x42839b0() {
   return (neuron0x4266520()*0.326851);
}

double NNfunction_sg_dR::synapse0x42839f0() {
   return (neuron0x4266860()*0.290916);
}

double NNfunction_sg_dR::synapse0x4283d70() {
   return (neuron0x4261d30()*-0.0890683);
}

double NNfunction_sg_dR::synapse0x4283db0() {
   return (neuron0x4261fe0()*0.0506991);
}

double NNfunction_sg_dR::synapse0x4283df0() {
   return (neuron0x4262320()*-0.061093);
}

double NNfunction_sg_dR::synapse0x4283e30() {
   return (neuron0x4262660()*0.66303);
}

double NNfunction_sg_dR::synapse0x4283e70() {
   return (neuron0x42629a0()*0.246046);
}

double NNfunction_sg_dR::synapse0x4283eb0() {
   return (neuron0x4262ce0()*0.133948);
}

double NNfunction_sg_dR::synapse0x4283ef0() {
   return (neuron0x4263020()*0.228699);
}

double NNfunction_sg_dR::synapse0x4283f30() {
   return (neuron0x4263360()*0.358113);
}

double NNfunction_sg_dR::synapse0x4283f70() {
   return (neuron0x42636a0()*0.120772);
}

double NNfunction_sg_dR::synapse0x4283fb0() {
   return (neuron0x42639e0()*-0.109181);
}

double NNfunction_sg_dR::synapse0x4283ff0() {
   return (neuron0x4263d20()*0.244155);
}

double NNfunction_sg_dR::synapse0x4284030() {
   return (neuron0x4264060()*-0.0714361);
}

double NNfunction_sg_dR::synapse0x4284070() {
   return (neuron0x42643a0()*0.160413);
}

double NNfunction_sg_dR::synapse0x42840b0() {
   return (neuron0x42646e0()*0.171503);
}

double NNfunction_sg_dR::synapse0x42840f0() {
   return (neuron0x4264a20()*0.210467);
}

double NNfunction_sg_dR::synapse0x4284130() {
   return (neuron0x4264d60()*0.373529);
}

double NNfunction_sg_dR::synapse0x4283bc0() {
   return (neuron0x42650a0()*-0.00364411);
}

double NNfunction_sg_dR::synapse0x4283c00() {
   return (neuron0x4265600()*-0.0200085);
}

double NNfunction_sg_dR::synapse0x4284280() {
   return (neuron0x4265820()*0.163383);
}

double NNfunction_sg_dR::synapse0x42842c0() {
   return (neuron0x4265b60()*-0.0789386);
}

double NNfunction_sg_dR::synapse0x4284300() {
   return (neuron0x4265ea0()*0.0754614);
}

double NNfunction_sg_dR::synapse0x4284340() {
   return (neuron0x42661e0()*0.123827);
}

double NNfunction_sg_dR::synapse0x4284380() {
   return (neuron0x4266520()*-0.163442);
}

double NNfunction_sg_dR::synapse0x42843c0() {
   return (neuron0x4266860()*-0.11786);
}

double NNfunction_sg_dR::synapse0x426ce70() {
   return (neuron0x4261d30()*0.00329435);
}

double NNfunction_sg_dR::synapse0x426ceb0() {
   return (neuron0x4261fe0()*-0.00150709);
}

double NNfunction_sg_dR::synapse0x426cef0() {
   return (neuron0x4262320()*-0.00395586);
}

double NNfunction_sg_dR::synapse0x426cf30() {
   return (neuron0x4262660()*-0.07207);
}

double NNfunction_sg_dR::synapse0x426cf70() {
   return (neuron0x42629a0()*-0.00285446);
}

double NNfunction_sg_dR::synapse0x426cfb0() {
   return (neuron0x4262ce0()*0.0135524);
}

double NNfunction_sg_dR::synapse0x426cff0() {
   return (neuron0x4263020()*0.00610651);
}

double NNfunction_sg_dR::synapse0x426d030() {
   return (neuron0x4263360()*-0.000293018);
}

double NNfunction_sg_dR::synapse0x4284b50() {
   return (neuron0x42636a0()*0.11735);
}

double NNfunction_sg_dR::synapse0x4284b90() {
   return (neuron0x42639e0()*-0.0315201);
}

double NNfunction_sg_dR::synapse0x4284bd0() {
   return (neuron0x4263d20()*-0.0498666);
}

double NNfunction_sg_dR::synapse0x4284c10() {
   return (neuron0x4264060()*-0.00192413);
}

double NNfunction_sg_dR::synapse0x4284c50() {
   return (neuron0x42643a0()*0.0359674);
}

double NNfunction_sg_dR::synapse0x4284c90() {
   return (neuron0x42646e0()*0.0101758);
}

double NNfunction_sg_dR::synapse0x4284cd0() {
   return (neuron0x4264a20()*-0.019224);
}

double NNfunction_sg_dR::synapse0x4284d10() {
   return (neuron0x4264d60()*-0.0167211);
}

double NNfunction_sg_dR::synapse0x4284590() {
   return (neuron0x42650a0()*0.00329242);
}

double NNfunction_sg_dR::synapse0x42845d0() {
   return (neuron0x4265600()*-0.557952);
}

double NNfunction_sg_dR::synapse0x4284e60() {
   return (neuron0x4265820()*0.0252644);
}

double NNfunction_sg_dR::synapse0x4284ea0() {
   return (neuron0x4265b60()*0.00695884);
}

double NNfunction_sg_dR::synapse0x4284ee0() {
   return (neuron0x4265ea0()*-0.00660787);
}

double NNfunction_sg_dR::synapse0x4284f20() {
   return (neuron0x42661e0()*0.00583211);
}

double NNfunction_sg_dR::synapse0x4284f60() {
   return (neuron0x4266520()*0.00188508);
}

double NNfunction_sg_dR::synapse0x4284fa0() {
   return (neuron0x4266860()*-0.00698762);
}

double NNfunction_sg_dR::synapse0x4285320() {
   return (neuron0x4261d30()*-0.140982);
}

double NNfunction_sg_dR::synapse0x4285360() {
   return (neuron0x4261fe0()*-0.0107459);
}

double NNfunction_sg_dR::synapse0x42853a0() {
   return (neuron0x4262320()*0.0834964);
}

double NNfunction_sg_dR::synapse0x42853e0() {
   return (neuron0x4262660()*1.08009);
}

double NNfunction_sg_dR::synapse0x4285420() {
   return (neuron0x42629a0()*0.051226);
}

double NNfunction_sg_dR::synapse0x4285460() {
   return (neuron0x4262ce0()*-0.0347023);
}

double NNfunction_sg_dR::synapse0x42854a0() {
   return (neuron0x4263020()*-0.078342);
}

double NNfunction_sg_dR::synapse0x42854e0() {
   return (neuron0x4263360()*-0.360323);
}

double NNfunction_sg_dR::synapse0x4285520() {
   return (neuron0x42636a0()*0.0351344);
}

double NNfunction_sg_dR::synapse0x4285560() {
   return (neuron0x42639e0()*0.0508207);
}

double NNfunction_sg_dR::synapse0x42855a0() {
   return (neuron0x4263d20()*-0.126819);
}

double NNfunction_sg_dR::synapse0x42855e0() {
   return (neuron0x4264060()*0.135007);
}

double NNfunction_sg_dR::synapse0x4285620() {
   return (neuron0x42643a0()*0.128731);
}

double NNfunction_sg_dR::synapse0x4285660() {
   return (neuron0x42646e0()*-0.00943074);
}

double NNfunction_sg_dR::synapse0x42856a0() {
   return (neuron0x4264a20()*-0.144581);
}

double NNfunction_sg_dR::synapse0x42856e0() {
   return (neuron0x4264d60()*0.223318);
}

double NNfunction_sg_dR::synapse0x4285170() {
   return (neuron0x42650a0()*-0.0768745);
}

double NNfunction_sg_dR::synapse0x42851b0() {
   return (neuron0x4265600()*0.294455);
}

double NNfunction_sg_dR::synapse0x4285830() {
   return (neuron0x4265820()*-0.0581117);
}

double NNfunction_sg_dR::synapse0x4285870() {
   return (neuron0x4265b60()*0.0349643);
}

double NNfunction_sg_dR::synapse0x42858b0() {
   return (neuron0x4265ea0()*-0.112203);
}

double NNfunction_sg_dR::synapse0x42858f0() {
   return (neuron0x42661e0()*0.0058137);
}

double NNfunction_sg_dR::synapse0x4285930() {
   return (neuron0x4266520()*0.109629);
}

double NNfunction_sg_dR::synapse0x4285970() {
   return (neuron0x4266860()*0.0242744);
}

double NNfunction_sg_dR::synapse0x4285cf0() {
   return (neuron0x4261d30()*0.0735555);
}

double NNfunction_sg_dR::synapse0x4285d30() {
   return (neuron0x4261fe0()*0.139823);
}

double NNfunction_sg_dR::synapse0x4285d70() {
   return (neuron0x4262320()*0.144194);
}

double NNfunction_sg_dR::synapse0x4285db0() {
   return (neuron0x4262660()*-1.04147);
}

double NNfunction_sg_dR::synapse0x4285df0() {
   return (neuron0x42629a0()*0.0711479);
}

double NNfunction_sg_dR::synapse0x4285e30() {
   return (neuron0x4262ce0()*-0.590411);
}

double NNfunction_sg_dR::synapse0x4285e70() {
   return (neuron0x4263020()*0.0906459);
}

double NNfunction_sg_dR::synapse0x4285eb0() {
   return (neuron0x4263360()*-0.0229523);
}

double NNfunction_sg_dR::synapse0x4285ef0() {
   return (neuron0x42636a0()*-0.067346);
}

double NNfunction_sg_dR::synapse0x4285f30() {
   return (neuron0x42639e0()*-0.0110986);
}

double NNfunction_sg_dR::synapse0x4285f70() {
   return (neuron0x4263d20()*0.0768792);
}

double NNfunction_sg_dR::synapse0x4285fb0() {
   return (neuron0x4264060()*0.135835);
}

double NNfunction_sg_dR::synapse0x4285ff0() {
   return (neuron0x42643a0()*0.044763);
}

double NNfunction_sg_dR::synapse0x4286030() {
   return (neuron0x42646e0()*0.159932);
}

double NNfunction_sg_dR::synapse0x4286070() {
   return (neuron0x4264a20()*0.0960854);
}

double NNfunction_sg_dR::synapse0x42860b0() {
   return (neuron0x4264d60()*-0.0328405);
}

double NNfunction_sg_dR::synapse0x4285b40() {
   return (neuron0x42650a0()*0.151409);
}

double NNfunction_sg_dR::synapse0x4285b80() {
   return (neuron0x4265600()*0.406156);
}

double NNfunction_sg_dR::synapse0x42766b0() {
   return (neuron0x4265820()*-0.0519578);
}

double NNfunction_sg_dR::synapse0x42766f0() {
   return (neuron0x4265b60()*-0.0221581);
}

double NNfunction_sg_dR::synapse0x4276730() {
   return (neuron0x4265ea0()*-0.048807);
}

double NNfunction_sg_dR::synapse0x4276770() {
   return (neuron0x42661e0()*-0.115707);
}

double NNfunction_sg_dR::synapse0x42767b0() {
   return (neuron0x4266520()*0.0685761);
}

double NNfunction_sg_dR::synapse0x42767f0() {
   return (neuron0x4266860()*0.0161135);
}

double NNfunction_sg_dR::synapse0x4276b70() {
   return (neuron0x4261d30()*0.0211076);
}

double NNfunction_sg_dR::synapse0x4276bb0() {
   return (neuron0x4261fe0()*0.00573968);
}

double NNfunction_sg_dR::synapse0x4276bf0() {
   return (neuron0x4262320()*-0.0155066);
}

double NNfunction_sg_dR::synapse0x4276c30() {
   return (neuron0x4262660()*2.70309);
}

double NNfunction_sg_dR::synapse0x4276c70() {
   return (neuron0x42629a0()*0.0150561);
}

double NNfunction_sg_dR::synapse0x4276cb0() {
   return (neuron0x4262ce0()*0.0321176);
}

double NNfunction_sg_dR::synapse0x4276cf0() {
   return (neuron0x4263020()*0.00925607);
}

double NNfunction_sg_dR::synapse0x4276d30() {
   return (neuron0x4263360()*0.0295429);
}

double NNfunction_sg_dR::synapse0x4276d70() {
   return (neuron0x42636a0()*0.0143576);
}

double NNfunction_sg_dR::synapse0x4276db0() {
   return (neuron0x42639e0()*-0.0237193);
}

double NNfunction_sg_dR::synapse0x4276df0() {
   return (neuron0x4263d20()*0.028003);
}

double NNfunction_sg_dR::synapse0x4276e30() {
   return (neuron0x4264060()*0.0785849);
}

double NNfunction_sg_dR::synapse0x4276e70() {
   return (neuron0x42643a0()*0.0925775);
}

double NNfunction_sg_dR::synapse0x4276eb0() {
   return (neuron0x42646e0()*-0.0389149);
}

double NNfunction_sg_dR::synapse0x4276ef0() {
   return (neuron0x4264a20()*-0.0443394);
}

double NNfunction_sg_dR::synapse0x4276f30() {
   return (neuron0x4264d60()*0.130948);
}

double NNfunction_sg_dR::synapse0x42769c0() {
   return (neuron0x42650a0()*0.000502476);
}

double NNfunction_sg_dR::synapse0x4276a00() {
   return (neuron0x4265600()*-0.329909);
}

double NNfunction_sg_dR::synapse0x4277080() {
   return (neuron0x4265820()*0.0451004);
}

double NNfunction_sg_dR::synapse0x42770c0() {
   return (neuron0x4265b60()*-0.0146598);
}

double NNfunction_sg_dR::synapse0x4277100() {
   return (neuron0x4265ea0()*-0.00153701);
}

double NNfunction_sg_dR::synapse0x4277140() {
   return (neuron0x42661e0()*0.0280324);
}

double NNfunction_sg_dR::synapse0x4277180() {
   return (neuron0x4266520()*-0.0123604);
}

double NNfunction_sg_dR::synapse0x42771c0() {
   return (neuron0x4266860()*-0.00406);
}

double NNfunction_sg_dR::synapse0x4277540() {
   return (neuron0x4261d30()*0.0194045);
}

double NNfunction_sg_dR::synapse0x4277580() {
   return (neuron0x4261fe0()*0.00189731);
}

double NNfunction_sg_dR::synapse0x42775c0() {
   return (neuron0x4262320()*-0.0376749);
}

double NNfunction_sg_dR::synapse0x4277600() {
   return (neuron0x4262660()*1.65247);
}

double NNfunction_sg_dR::synapse0x4277640() {
   return (neuron0x42629a0()*-0.036362);
}

double NNfunction_sg_dR::synapse0x4277680() {
   return (neuron0x4262ce0()*0.0401176);
}

double NNfunction_sg_dR::synapse0x42776c0() {
   return (neuron0x4263020()*0.0460836);
}

double NNfunction_sg_dR::synapse0x4277700() {
   return (neuron0x4263360()*-0.012317);
}

double NNfunction_sg_dR::synapse0x4277740() {
   return (neuron0x42636a0()*-0.0319119);
}

double NNfunction_sg_dR::synapse0x4277780() {
   return (neuron0x42639e0()*-0.00885935);
}

double NNfunction_sg_dR::synapse0x42777c0() {
   return (neuron0x4263d20()*0.0229448);
}

double NNfunction_sg_dR::synapse0x4277800() {
   return (neuron0x4264060()*0.490336);
}

double NNfunction_sg_dR::synapse0x4277840() {
   return (neuron0x42643a0()*0.481024);
}

double NNfunction_sg_dR::synapse0x4277880() {
   return (neuron0x42646e0()*-0.0305607);
}

double NNfunction_sg_dR::synapse0x42778c0() {
   return (neuron0x4264a20()*-0.0552067);
}

double NNfunction_sg_dR::synapse0x4277900() {
   return (neuron0x4264d60()*0.326615);
}

double NNfunction_sg_dR::synapse0x4277390() {
   return (neuron0x42650a0()*0.00840621);
}

double NNfunction_sg_dR::synapse0x42773d0() {
   return (neuron0x4265600()*1.76818e-05);
}

double NNfunction_sg_dR::synapse0x4277a50() {
   return (neuron0x4265820()*0.178719);
}

double NNfunction_sg_dR::synapse0x4277a90() {
   return (neuron0x4265b60()*-0.0087297);
}

double NNfunction_sg_dR::synapse0x4277ad0() {
   return (neuron0x4265ea0()*0.00309198);
}

double NNfunction_sg_dR::synapse0x4277b10() {
   return (neuron0x42661e0()*-0.0168499);
}

double NNfunction_sg_dR::synapse0x4277b50() {
   return (neuron0x4266520()*-0.0404306);
}

double NNfunction_sg_dR::synapse0x4277b90() {
   return (neuron0x4266860()*-0.0162756);
}

double NNfunction_sg_dR::synapse0x4277f10() {
   return (neuron0x4261d30()*0.0743183);
}

double NNfunction_sg_dR::synapse0x4277f50() {
   return (neuron0x4261fe0()*0.0619609);
}

double NNfunction_sg_dR::synapse0x4277f90() {
   return (neuron0x4262320()*-0.00769944);
}

double NNfunction_sg_dR::synapse0x4277fd0() {
   return (neuron0x4262660()*0.874413);
}

double NNfunction_sg_dR::synapse0x4278010() {
   return (neuron0x42629a0()*-0.127045);
}

double NNfunction_sg_dR::synapse0x4278050() {
   return (neuron0x4262ce0()*-0.243987);
}

double NNfunction_sg_dR::synapse0x4278090() {
   return (neuron0x4263020()*-0.165138);
}

double NNfunction_sg_dR::synapse0x42780d0() {
   return (neuron0x4263360()*-0.236186);
}

double NNfunction_sg_dR::synapse0x4278110() {
   return (neuron0x42636a0()*0.0113207);
}

double NNfunction_sg_dR::synapse0x4278150() {
   return (neuron0x42639e0()*0.129218);
}

double NNfunction_sg_dR::synapse0x4278190() {
   return (neuron0x4263d20()*-0.00798233);
}

double NNfunction_sg_dR::synapse0x42781d0() {
   return (neuron0x4264060()*-0.197803);
}

double NNfunction_sg_dR::synapse0x4278210() {
   return (neuron0x42643a0()*-0.115619);
}

double NNfunction_sg_dR::synapse0x4278250() {
   return (neuron0x42646e0()*-0.214544);
}

double NNfunction_sg_dR::synapse0x4278290() {
   return (neuron0x4264a20()*0.061009);
}

double NNfunction_sg_dR::synapse0x42782d0() {
   return (neuron0x4264d60()*-0.288845);
}

double NNfunction_sg_dR::synapse0x4277d60() {
   return (neuron0x42650a0()*-0.0302845);
}

double NNfunction_sg_dR::synapse0x4277da0() {
   return (neuron0x4265600()*-0.0657007);
}

double NNfunction_sg_dR::synapse0x4278420() {
   return (neuron0x4265820()*-0.0307673);
}

double NNfunction_sg_dR::synapse0x4278460() {
   return (neuron0x4265b60()*0.17754);
}

double NNfunction_sg_dR::synapse0x42784a0() {
   return (neuron0x4265ea0()*0.1667);
}

double NNfunction_sg_dR::synapse0x42784e0() {
   return (neuron0x42661e0()*0.0542565);
}

double NNfunction_sg_dR::synapse0x4278520() {
   return (neuron0x4266520()*-0.195318);
}

double NNfunction_sg_dR::synapse0x4278560() {
   return (neuron0x4266860()*-0.0561794);
}

double NNfunction_sg_dR::synapse0x428a430() {
   return (neuron0x4261d30()*-0.000538523);
}

double NNfunction_sg_dR::synapse0x428a470() {
   return (neuron0x4261fe0()*-0.00644791);
}

double NNfunction_sg_dR::synapse0x428a4b0() {
   return (neuron0x4262320()*-0.0127371);
}

double NNfunction_sg_dR::synapse0x428a4f0() {
   return (neuron0x4262660()*-3.52332);
}

double NNfunction_sg_dR::synapse0x428a530() {
   return (neuron0x42629a0()*-0.0221234);
}

double NNfunction_sg_dR::synapse0x428a570() {
   return (neuron0x4262ce0()*-0.0124459);
}

double NNfunction_sg_dR::synapse0x428a5b0() {
   return (neuron0x4263020()*-0.0135823);
}

double NNfunction_sg_dR::synapse0x428a5f0() {
   return (neuron0x4263360()*-0.0410033);
}

double NNfunction_sg_dR::synapse0x428a630() {
   return (neuron0x42636a0()*-0.0213222);
}

double NNfunction_sg_dR::synapse0x428a670() {
   return (neuron0x42639e0()*0.0272476);
}

double NNfunction_sg_dR::synapse0x428a6b0() {
   return (neuron0x4263d20()*-0.0122735);
}

double NNfunction_sg_dR::synapse0x428a6f0() {
   return (neuron0x4264060()*-0.0154397);
}

double NNfunction_sg_dR::synapse0x428a730() {
   return (neuron0x42643a0()*-0.0247723);
}

double NNfunction_sg_dR::synapse0x428a770() {
   return (neuron0x42646e0()*-0.00594664);
}

double NNfunction_sg_dR::synapse0x428a7b0() {
   return (neuron0x4264a20()*-0.0155933);
}

double NNfunction_sg_dR::synapse0x428a7f0() {
   return (neuron0x4264d60()*-0.056455);
}

double NNfunction_sg_dR::synapse0x42785a0() {
   return (neuron0x42650a0()*0.0250052);
}

double NNfunction_sg_dR::synapse0x42785e0() {
   return (neuron0x4265600()*1.93534);
}

double NNfunction_sg_dR::synapse0x428a940() {
   return (neuron0x4265820()*-0.0143293);
}

double NNfunction_sg_dR::synapse0x428a980() {
   return (neuron0x4265b60()*-0.0216348);
}

double NNfunction_sg_dR::synapse0x428a9c0() {
   return (neuron0x4265ea0()*0.0173318);
}

double NNfunction_sg_dR::synapse0x428aa00() {
   return (neuron0x42661e0()*0.0147603);
}

double NNfunction_sg_dR::synapse0x428aa40() {
   return (neuron0x4266520()*0.00930856);
}

double NNfunction_sg_dR::synapse0x428aa80() {
   return (neuron0x4266860()*-0.00534678);
}

double NNfunction_sg_dR::synapse0x428ae00() {
   return (neuron0x4261d30()*0.218718);
}

double NNfunction_sg_dR::synapse0x428ae40() {
   return (neuron0x4261fe0()*0.00594594);
}

double NNfunction_sg_dR::synapse0x428ae80() {
   return (neuron0x4262320()*-0.262721);
}

double NNfunction_sg_dR::synapse0x428aec0() {
   return (neuron0x4262660()*-0.416086);
}

double NNfunction_sg_dR::synapse0x428af00() {
   return (neuron0x42629a0()*-0.0266583);
}

double NNfunction_sg_dR::synapse0x428af40() {
   return (neuron0x4262ce0()*0.384532);
}

double NNfunction_sg_dR::synapse0x428af80() {
   return (neuron0x4263020()*0.22778);
}

double NNfunction_sg_dR::synapse0x428afc0() {
   return (neuron0x4263360()*-0.0187977);
}

double NNfunction_sg_dR::synapse0x428b000() {
   return (neuron0x42636a0()*0.138127);
}

double NNfunction_sg_dR::synapse0x428b040() {
   return (neuron0x42639e0()*0.40534);
}

double NNfunction_sg_dR::synapse0x428b080() {
   return (neuron0x4263d20()*0.313928);
}

double NNfunction_sg_dR::synapse0x428b0c0() {
   return (neuron0x4264060()*-0.222223);
}

double NNfunction_sg_dR::synapse0x428b100() {
   return (neuron0x42643a0()*0.858125);
}

double NNfunction_sg_dR::synapse0x428b140() {
   return (neuron0x42646e0()*0.904558);
}

double NNfunction_sg_dR::synapse0x428b180() {
   return (neuron0x4264a20()*0.203817);
}

double NNfunction_sg_dR::synapse0x428b1c0() {
   return (neuron0x4264d60()*0.708503);
}

double NNfunction_sg_dR::synapse0x428ac50() {
   return (neuron0x42650a0()*0.53992);
}

double NNfunction_sg_dR::synapse0x428ac90() {
   return (neuron0x4265600()*-0.270147);
}

double NNfunction_sg_dR::synapse0x428b310() {
   return (neuron0x4265820()*-0.120064);
}

double NNfunction_sg_dR::synapse0x428b350() {
   return (neuron0x4265b60()*-0.104528);
}

double NNfunction_sg_dR::synapse0x428b390() {
   return (neuron0x4265ea0()*-0.292613);
}

double NNfunction_sg_dR::synapse0x428b3d0() {
   return (neuron0x42661e0()*0.193066);
}

double NNfunction_sg_dR::synapse0x428b410() {
   return (neuron0x4266520()*-0.257658);
}

double NNfunction_sg_dR::synapse0x428b450() {
   return (neuron0x4266860()*0.117898);
}

double NNfunction_sg_dR::synapse0x428b7d0() {
   return (neuron0x4261d30()*-0.00571311);
}

double NNfunction_sg_dR::synapse0x428b810() {
   return (neuron0x4261fe0()*0.0241531);
}

double NNfunction_sg_dR::synapse0x428b850() {
   return (neuron0x4262320()*0.00736947);
}

double NNfunction_sg_dR::synapse0x428b890() {
   return (neuron0x4262660()*1.58719);
}

double NNfunction_sg_dR::synapse0x428b8d0() {
   return (neuron0x42629a0()*-0.0203016);
}

double NNfunction_sg_dR::synapse0x428b910() {
   return (neuron0x4262ce0()*-0.00856858);
}

double NNfunction_sg_dR::synapse0x428b950() {
   return (neuron0x4263020()*-0.0472071);
}

double NNfunction_sg_dR::synapse0x428b990() {
   return (neuron0x4263360()*0.0271363);
}

double NNfunction_sg_dR::synapse0x428b9d0() {
   return (neuron0x42636a0()*-0.0191123);
}

double NNfunction_sg_dR::synapse0x428ba10() {
   return (neuron0x42639e0()*-0.013514);
}

double NNfunction_sg_dR::synapse0x428ba50() {
   return (neuron0x4263d20()*0.00692897);
}

double NNfunction_sg_dR::synapse0x428ba90() {
   return (neuron0x4264060()*-0.338508);
}

double NNfunction_sg_dR::synapse0x428bad0() {
   return (neuron0x42643a0()*-0.323458);
}

double NNfunction_sg_dR::synapse0x428bb10() {
   return (neuron0x42646e0()*0.0230631);
}

double NNfunction_sg_dR::synapse0x428bb50() {
   return (neuron0x4264a20()*-0.166154);
}

double NNfunction_sg_dR::synapse0x428bb90() {
   return (neuron0x4264d60()*-0.132001);
}

double NNfunction_sg_dR::synapse0x428b620() {
   return (neuron0x42650a0()*0.0148769);
}

double NNfunction_sg_dR::synapse0x428b660() {
   return (neuron0x4265600()*0.0527999);
}

double NNfunction_sg_dR::synapse0x428bce0() {
   return (neuron0x4265820()*-0.180144);
}

double NNfunction_sg_dR::synapse0x428bd20() {
   return (neuron0x4265b60()*-0.000700913);
}

double NNfunction_sg_dR::synapse0x428bd60() {
   return (neuron0x4265ea0()*-0.0261757);
}

double NNfunction_sg_dR::synapse0x428bda0() {
   return (neuron0x42661e0()*-0.0279991);
}

double NNfunction_sg_dR::synapse0x428bde0() {
   return (neuron0x4266520()*0.00513737);
}

double NNfunction_sg_dR::synapse0x428be20() {
   return (neuron0x4266860()*-0.0179695);
}

double NNfunction_sg_dR::synapse0x428c1a0() {
   return (neuron0x4261d30()*-0.00040473);
}

double NNfunction_sg_dR::synapse0x428c1e0() {
   return (neuron0x4261fe0()*-0.00248348);
}

double NNfunction_sg_dR::synapse0x428c220() {
   return (neuron0x4262320()*0.00940912);
}

double NNfunction_sg_dR::synapse0x428c260() {
   return (neuron0x4262660()*-2.37729);
}

double NNfunction_sg_dR::synapse0x428c2a0() {
   return (neuron0x42629a0()*-0.0130172);
}

double NNfunction_sg_dR::synapse0x428c2e0() {
   return (neuron0x4262ce0()*-0.00450451);
}

double NNfunction_sg_dR::synapse0x428c320() {
   return (neuron0x4263020()*-0.00427051);
}

double NNfunction_sg_dR::synapse0x428c360() {
   return (neuron0x4263360()*0.0113733);
}

double NNfunction_sg_dR::synapse0x428c3a0() {
   return (neuron0x42636a0()*0.00178194);
}

double NNfunction_sg_dR::synapse0x428c3e0() {
   return (neuron0x42639e0()*-0.0153499);
}

double NNfunction_sg_dR::synapse0x428c420() {
   return (neuron0x4263d20()*0.139231);
}

double NNfunction_sg_dR::synapse0x428c460() {
   return (neuron0x4264060()*-0.00860841);
}

double NNfunction_sg_dR::synapse0x428c4a0() {
   return (neuron0x42643a0()*0.0011761);
}

double NNfunction_sg_dR::synapse0x428c4e0() {
   return (neuron0x42646e0()*-0.00379505);
}

double NNfunction_sg_dR::synapse0x428c520() {
   return (neuron0x4264a20()*0.0056276);
}

double NNfunction_sg_dR::synapse0x428c560() {
   return (neuron0x4264d60()*-0.0275428);
}

double NNfunction_sg_dR::synapse0x428bff0() {
   return (neuron0x42650a0()*0.00228176);
}

double NNfunction_sg_dR::synapse0x428c030() {
   return (neuron0x4265600()*-0.17989);
}

double NNfunction_sg_dR::synapse0x428c6b0() {
   return (neuron0x4265820()*0.0087691);
}

double NNfunction_sg_dR::synapse0x428c6f0() {
   return (neuron0x4265b60()*-0.0229932);
}

double NNfunction_sg_dR::synapse0x428c730() {
   return (neuron0x4265ea0()*0.013533);
}

double NNfunction_sg_dR::synapse0x428c770() {
   return (neuron0x42661e0()*0.000815427);
}

double NNfunction_sg_dR::synapse0x428c7b0() {
   return (neuron0x4266520()*-0.0227128);
}

double NNfunction_sg_dR::synapse0x428c7f0() {
   return (neuron0x4266860()*0.0214025);
}

double NNfunction_sg_dR::synapse0x402c610() {
   return (neuron0x4266cd0()*-1.24466);
}

double NNfunction_sg_dR::synapse0x402c650() {
   return (neuron0x4267620()*-0.39026);
}

double NNfunction_sg_dR::synapse0x4269190() {
   return (neuron0x4268100()*-2.80477);
}

double NNfunction_sg_dR::synapse0x42691d0() {
   return (neuron0x4267ba0()*0.738332);
}

double NNfunction_sg_dR::synapse0x426ac70() {
   return (neuron0x4268ee0()*0.288853);
}

double NNfunction_sg_dR::synapse0x426acb0() {
   return (neuron0x426a9c0()*-1.10766);
}

double NNfunction_sg_dR::synapse0x426ba40() {
   return (neuron0x426b790()*-0.393112);
}

double NNfunction_sg_dR::synapse0x426ba80() {
   return (neuron0x426c160()*0.00245808);
}

double NNfunction_sg_dR::synapse0x426c410() {
   return (neuron0x426cb30()*1.28237);
}

double NNfunction_sg_dR::synapse0x426c450() {
   return (neuron0x426d610()*1.84931);
}

double NNfunction_sg_dR::synapse0x426cde0() {
   return (neuron0x426dfe0()*0.0580004);
}

double NNfunction_sg_dR::synapse0x426ce20() {
   return (neuron0x426b0c0()*-2.36294);
}

double NNfunction_sg_dR::synapse0x426d8c0() {
   return (neuron0x426fb90()*-0.846311);
}

double NNfunction_sg_dR::synapse0x426d900() {
   return (neuron0x4270560()*-1.17804);
}

double NNfunction_sg_dR::synapse0x426e290() {
   return (neuron0x4270f30()*1.67958);
}

double NNfunction_sg_dR::synapse0x426e2d0() {
   return (neuron0x4271900()*0.195519);
}

double NNfunction_sg_dR::synapse0x426b370() {
   return (neuron0x4273710()*0.68342);
}

double NNfunction_sg_dR::synapse0x426b3b0() {
   return (neuron0x42739f0()*-0.0580798);
}

double NNfunction_sg_dR::synapse0x426fe40() {
   return (neuron0x42743c0()*1.75294);
}

double NNfunction_sg_dR::synapse0x426fe80() {
   return (neuron0x4274d90()*0.0111404);
}

double NNfunction_sg_dR::synapse0x4270810() {
   return (neuron0x4275760()*1.4805);
}

double NNfunction_sg_dR::synapse0x4270850() {
   return (neuron0x4276130()*-0.58075);
}

double NNfunction_sg_dR::synapse0x42711e0() {
   return (neuron0x426ec80()*-0.244522);
}

double NNfunction_sg_dR::synapse0x4271220() {
   return (neuron0x426f650()*-1.39373);
}

double NNfunction_sg_dR::synapse0x4271bb0() {
   return (neuron0x4278ec0()*0.0653485);
}

double NNfunction_sg_dR::synapse0x4271bf0() {
   return (neuron0x4279890()*0.314252);
}

double NNfunction_sg_dR::synapse0x4264c40() {
   return (neuron0x427a260()*0.110581);
}

double NNfunction_sg_dR::synapse0x4264c80() {
   return (neuron0x427ac30()*0.258332);
}

double NNfunction_sg_dR::synapse0x4273ca0() {
   return (neuron0x427b600()*0.735282);
}

double NNfunction_sg_dR::synapse0x4273ce0() {
   return (neuron0x427bfd0()*2.29573);
}

double NNfunction_sg_dR::synapse0x4274670() {
   return (neuron0x427c9a0()*-3.68908);
}

double NNfunction_sg_dR::synapse0x42746b0() {
   return (neuron0x427d370()*0.927828);
}

double NNfunction_sg_dR::synapse0x4275040() {
   return (neuron0x4273400()*0.848765);
}

double NNfunction_sg_dR::synapse0x4275080() {
   return (neuron0x427ff50()*-0.304967);
}

double NNfunction_sg_dR::synapse0x4275a10() {
   return (neuron0x4280920()*0.409263);
}

double NNfunction_sg_dR::synapse0x4275a50() {
   return (neuron0x42812f0()*-0.772441);
}

double NNfunction_sg_dR::synapse0x42763e0() {
   return (neuron0x4281cc0()*1.70229);
}

double NNfunction_sg_dR::synapse0x4276420() {
   return (neuron0x4282690()*-0.943351);
}

double NNfunction_sg_dR::synapse0x426ef30() {
   return (neuron0x4283060()*0.121733);
}

double NNfunction_sg_dR::synapse0x426ef70() {
   return (neuron0x4283a30()*0.817428);
}

double NNfunction_sg_dR::synapse0x42787e0() {
   return (neuron0x4284400()*-0.426351);
}

double NNfunction_sg_dR::synapse0x4278820() {
   return (neuron0x4284fe0()*0.846275);
}

double NNfunction_sg_dR::synapse0x4279170() {
   return (neuron0x42859b0()*-0.44164);
}

double NNfunction_sg_dR::synapse0x42791b0() {
   return (neuron0x4276830()*2.54786);
}

double NNfunction_sg_dR::synapse0x4279b40() {
   return (neuron0x4277200()*1.94199);
}

double NNfunction_sg_dR::synapse0x4279b80() {
   return (neuron0x4277bd0()*0.955178);
}

double NNfunction_sg_dR::synapse0x427a510() {
   return (neuron0x428a210()*-3.14744);
}

double NNfunction_sg_dR::synapse0x427a550() {
   return (neuron0x428aac0()*-0.00286832);
}

double NNfunction_sg_dR::synapse0x427aee0() {
   return (neuron0x428b490()*1.35774);
}

double NNfunction_sg_dR::synapse0x427af20() {
   return (neuron0x428be60()*-0.633443);
}

double NNfunction_sg_dR::synapse0x427d620() {
   return (neuron0x4266cd0()*-0.286017);
}

double NNfunction_sg_dR::synapse0x427d660() {
   return (neuron0x4267620()*0.224389);
}

double NNfunction_sg_dR::synapse0x4272be0() {
   return (neuron0x4268100()*-0.465155);
}

double NNfunction_sg_dR::synapse0x4272c20() {
   return (neuron0x4267ba0()*0.0465665);
}

double NNfunction_sg_dR::synapse0x4280200() {
   return (neuron0x4268ee0()*-0.0757119);
}

double NNfunction_sg_dR::synapse0x4280240() {
   return (neuron0x426a9c0()*-0.516518);
}

double NNfunction_sg_dR::synapse0x4280bd0() {
   return (neuron0x426b790()*-0.373182);
}

double NNfunction_sg_dR::synapse0x4280c10() {
   return (neuron0x426c160()*0.0667416);
}

double NNfunction_sg_dR::synapse0x42815a0() {
   return (neuron0x426cb30()*0.601149);
}

double NNfunction_sg_dR::synapse0x42815e0() {
   return (neuron0x426d610()*0.409793);
}

double NNfunction_sg_dR::synapse0x4281f70() {
   return (neuron0x426dfe0()*0.622385);
}

double NNfunction_sg_dR::synapse0x4281fb0() {
   return (neuron0x426b0c0()*-0.395741);
}

double NNfunction_sg_dR::synapse0x4282940() {
   return (neuron0x426fb90()*1.21886);
}

double NNfunction_sg_dR::synapse0x4282980() {
   return (neuron0x4270560()*-0.0569086);
}

double NNfunction_sg_dR::synapse0x4283310() {
   return (neuron0x4270f30()*0.137043);
}

double NNfunction_sg_dR::synapse0x4283350() {
   return (neuron0x4271900()*1.14);
}

double NNfunction_sg_dR::synapse0x4283ce0() {
   return (neuron0x4273710()*1.00396);
}

double NNfunction_sg_dR::synapse0x4283d20() {
   return (neuron0x42739f0()*0.0563889);
}

double NNfunction_sg_dR::synapse0x42846b0() {
   return (neuron0x42743c0()*0.202965);
}

double NNfunction_sg_dR::synapse0x42846f0() {
   return (neuron0x4274d90()*0.0291021);
}

double NNfunction_sg_dR::synapse0x4285290() {
   return (neuron0x4275760()*0.149839);
}

double NNfunction_sg_dR::synapse0x42852d0() {
   return (neuron0x4276130()*-0.317184);
}

double NNfunction_sg_dR::synapse0x4285c60() {
   return (neuron0x426ec80()*-0.115457);
}

double NNfunction_sg_dR::synapse0x4285ca0() {
   return (neuron0x426f650()*-1.49173);
}

double NNfunction_sg_dR::synapse0x4276ae0() {
   return (neuron0x4278ec0()*-0.749047);
}

double NNfunction_sg_dR::synapse0x4276b20() {
   return (neuron0x4279890()*0.0408426);
}

double NNfunction_sg_dR::synapse0x42774b0() {
   return (neuron0x427a260()*0.563546);
}

double NNfunction_sg_dR::synapse0x42774f0() {
   return (neuron0x427ac30()*0.0655896);
}

double NNfunction_sg_dR::synapse0x4277e80() {
   return (neuron0x427b600()*-0.670385);
}

double NNfunction_sg_dR::synapse0x4277ec0() {
   return (neuron0x427bfd0()*0.286926);
}

double NNfunction_sg_dR::synapse0x428a3a0() {
   return (neuron0x427c9a0()*0.886276);
}

double NNfunction_sg_dR::synapse0x428a3e0() {
   return (neuron0x427d370()*-0.347322);
}

double NNfunction_sg_dR::synapse0x428ad70() {
   return (neuron0x4273400()*-0.062095);
}

double NNfunction_sg_dR::synapse0x428adb0() {
   return (neuron0x427ff50()*0.405383);
}

double NNfunction_sg_dR::synapse0x428b740() {
   return (neuron0x4280920()*0.929137);
}

double NNfunction_sg_dR::synapse0x428b780() {
   return (neuron0x42812f0()*-0.293274);
}

double NNfunction_sg_dR::synapse0x428c110() {
   return (neuron0x4281cc0()*0.0397319);
}

double NNfunction_sg_dR::synapse0x428c150() {
   return (neuron0x4282690()*0.468216);
}

double NNfunction_sg_dR::synapse0x4266f80() {
   return (neuron0x4283060()*0.0221689);
}

double NNfunction_sg_dR::synapse0x4266fc0() {
   return (neuron0x4283a30()*-0.0806492);
}

double NNfunction_sg_dR::synapse0x427b8b0() {
   return (neuron0x4284400()*-0.778085);
}

double NNfunction_sg_dR::synapse0x427b8f0() {
   return (neuron0x4284fe0()*-0.00813992);
}

double NNfunction_sg_dR::synapse0x428c830() {
   return (neuron0x42859b0()*-0.210928);
}

double NNfunction_sg_dR::synapse0x428c870() {
   return (neuron0x4276830()*-0.054149);
}

double NNfunction_sg_dR::synapse0x428c8b0() {
   return (neuron0x4277200()*0.062473);
}

double NNfunction_sg_dR::synapse0x428c8f0() {
   return (neuron0x4277bd0()*0.24794);
}

double NNfunction_sg_dR::synapse0x42937a0() {
   return (neuron0x428a210()*0.723375);
}

double NNfunction_sg_dR::synapse0x42937e0() {
   return (neuron0x428aac0()*-0.0511476);
}

double NNfunction_sg_dR::synapse0x4293820() {
   return (neuron0x428b490()*0.138595);
}

double NNfunction_sg_dR::synapse0x4293860() {
   return (neuron0x428be60()*-0.43321);
}

double NNfunction_sg_dR::synapse0x4293be0() {
   return (neuron0x4266cd0()*0.0155424);
}

double NNfunction_sg_dR::synapse0x4293c20() {
   return (neuron0x4267620()*-0.747923);
}

double NNfunction_sg_dR::synapse0x4293c60() {
   return (neuron0x4268100()*-0.146035);
}

double NNfunction_sg_dR::synapse0x4293ca0() {
   return (neuron0x4267ba0()*-0.000988012);
}

double NNfunction_sg_dR::synapse0x4293ce0() {
   return (neuron0x4268ee0()*-1.03247);
}

double NNfunction_sg_dR::synapse0x4293d20() {
   return (neuron0x426a9c0()*-0.820634);
}

double NNfunction_sg_dR::synapse0x4293d60() {
   return (neuron0x426b790()*0.744946);
}

double NNfunction_sg_dR::synapse0x4293da0() {
   return (neuron0x426c160()*0.0156185);
}

double NNfunction_sg_dR::synapse0x4293de0() {
   return (neuron0x426cb30()*0.335295);
}

double NNfunction_sg_dR::synapse0x4293e20() {
   return (neuron0x426d610()*0.104273);
}

double NNfunction_sg_dR::synapse0x4293e60() {
   return (neuron0x426dfe0()*-0.325281);
}

double NNfunction_sg_dR::synapse0x4293ea0() {
   return (neuron0x426b0c0()*-0.355491);
}

double NNfunction_sg_dR::synapse0x4293ee0() {
   return (neuron0x426fb90()*0.239097);
}

double NNfunction_sg_dR::synapse0x4293f20() {
   return (neuron0x4270560()*-0.685382);
}

double NNfunction_sg_dR::synapse0x4293f60() {
   return (neuron0x4270f30()*-0.0547786);
}

double NNfunction_sg_dR::synapse0x4293fa0() {
   return (neuron0x4271900()*-0.170915);
}

double NNfunction_sg_dR::synapse0x4293a30() {
   return (neuron0x4273710()*-0.582216);
}

double NNfunction_sg_dR::synapse0x4293a70() {
   return (neuron0x42739f0()*0.0347802);
}

double NNfunction_sg_dR::synapse0x42940f0() {
   return (neuron0x42743c0()*0.0149493);
}

double NNfunction_sg_dR::synapse0x4294130() {
   return (neuron0x4274d90()*0.00266809);
}

double NNfunction_sg_dR::synapse0x4294170() {
   return (neuron0x4275760()*0.206555);
}

double NNfunction_sg_dR::synapse0x42941b0() {
   return (neuron0x4276130()*-0.743115);
}

double NNfunction_sg_dR::synapse0x42941f0() {
   return (neuron0x426ec80()*0.0184607);
}

double NNfunction_sg_dR::synapse0x4294230() {
   return (neuron0x426f650()*1.92171);
}

double NNfunction_sg_dR::synapse0x4294270() {
   return (neuron0x4278ec0()*0.38772);
}

double NNfunction_sg_dR::synapse0x42942b0() {
   return (neuron0x4279890()*0.0126879);
}

double NNfunction_sg_dR::synapse0x42942f0() {
   return (neuron0x427a260()*0.253357);
}

double NNfunction_sg_dR::synapse0x4294330() {
   return (neuron0x427ac30()*0.00914943);
}

double NNfunction_sg_dR::synapse0x4294370() {
   return (neuron0x427b600()*1.11941);
}

double NNfunction_sg_dR::synapse0x42943b0() {
   return (neuron0x427bfd0()*-0.0534838);
}

double NNfunction_sg_dR::synapse0x42943f0() {
   return (neuron0x427c9a0()*-2.42189);
}

double NNfunction_sg_dR::synapse0x4294430() {
   return (neuron0x427d370()*-2.02836);
}

double NNfunction_sg_dR::synapse0x4293fe0() {
   return (neuron0x4273400()*-0.000895399);
}

double NNfunction_sg_dR::synapse0x4294020() {
   return (neuron0x427ff50()*-0.0242035);
}

double NNfunction_sg_dR::synapse0x4294060() {
   return (neuron0x4280920()*-0.195704);
}

double NNfunction_sg_dR::synapse0x42940a0() {
   return (neuron0x42812f0()*-0.0545724);
}

double NNfunction_sg_dR::synapse0x4294680() {
   return (neuron0x4281cc0()*-0.111524);
}

double NNfunction_sg_dR::synapse0x42946c0() {
   return (neuron0x4282690()*-0.31217);
}

double NNfunction_sg_dR::synapse0x4294700() {
   return (neuron0x4283060()*-0.00643571);
}

double NNfunction_sg_dR::synapse0x4294740() {
   return (neuron0x4283a30()*-0.0665827);
}

double NNfunction_sg_dR::synapse0x4294780() {
   return (neuron0x4284400()*0.624382);
}

double NNfunction_sg_dR::synapse0x42947c0() {
   return (neuron0x4284fe0()*0.00714541);
}

double NNfunction_sg_dR::synapse0x4294800() {
   return (neuron0x42859b0()*0.0147629);
}

double NNfunction_sg_dR::synapse0x4294840() {
   return (neuron0x4276830()*0.367826);
}

double NNfunction_sg_dR::synapse0x4294880() {
   return (neuron0x4277200()*-0.172687);
}

double NNfunction_sg_dR::synapse0x42948c0() {
   return (neuron0x4277bd0()*0.00231947);
}

double NNfunction_sg_dR::synapse0x4294900() {
   return (neuron0x428a210()*-0.0713233);
}

double NNfunction_sg_dR::synapse0x4294940() {
   return (neuron0x428aac0()*-0.00722452);
}

double NNfunction_sg_dR::synapse0x4294980() {
   return (neuron0x428b490()*-0.206804);
}

double NNfunction_sg_dR::synapse0x42949c0() {
   return (neuron0x428be60()*0.67687);
}

double NNfunction_sg_dR::synapse0x4294d40() {
   return (neuron0x4266cd0()*-0.710308);
}

double NNfunction_sg_dR::synapse0x4294d80() {
   return (neuron0x4267620()*0.258998);
}

double NNfunction_sg_dR::synapse0x4294dc0() {
   return (neuron0x4268100()*-2.83661);
}

double NNfunction_sg_dR::synapse0x4294e00() {
   return (neuron0x4267ba0()*0.405391);
}

double NNfunction_sg_dR::synapse0x4294e40() {
   return (neuron0x4268ee0()*0.254638);
}

double NNfunction_sg_dR::synapse0x4294e80() {
   return (neuron0x426a9c0()*-1.49334);
}

double NNfunction_sg_dR::synapse0x4294ec0() {
   return (neuron0x426b790()*-0.942377);
}

double NNfunction_sg_dR::synapse0x4294f00() {
   return (neuron0x426c160()*-0.0438617);
}

double NNfunction_sg_dR::synapse0x4294f40() {
   return (neuron0x426cb30()*2.0324);
}

double NNfunction_sg_dR::synapse0x4294f80() {
   return (neuron0x426d610()*1.04908);
}

double NNfunction_sg_dR::synapse0x4294fc0() {
   return (neuron0x426dfe0()*-1.20003);
}

double NNfunction_sg_dR::synapse0x4295000() {
   return (neuron0x426b0c0()*-1.9363);
}

double NNfunction_sg_dR::synapse0x4295040() {
   return (neuron0x426fb90()*1.04719);
}

double NNfunction_sg_dR::synapse0x4295080() {
   return (neuron0x4270560()*-1.44343);
}

double NNfunction_sg_dR::synapse0x42950c0() {
   return (neuron0x4270f30()*0.657275);
}

double NNfunction_sg_dR::synapse0x4295100() {
   return (neuron0x4271900()*2.01716);
}

double NNfunction_sg_dR::synapse0x4294b90() {
   return (neuron0x4273710()*0.0672496);
}

double NNfunction_sg_dR::synapse0x4294bd0() {
   return (neuron0x42739f0()*0.153922);
}

double NNfunction_sg_dR::synapse0x4295250() {
   return (neuron0x42743c0()*0.373034);
}

double NNfunction_sg_dR::synapse0x4295290() {
   return (neuron0x4274d90()*0.0356213);
}

double NNfunction_sg_dR::synapse0x42952d0() {
   return (neuron0x4275760()*1.08366);
}

double NNfunction_sg_dR::synapse0x4295310() {
   return (neuron0x4276130()*-0.66728);
}

double NNfunction_sg_dR::synapse0x4295350() {
   return (neuron0x426ec80()*-0.183882);
}

double NNfunction_sg_dR::synapse0x4295390() {
   return (neuron0x426f650()*-0.707749);
}

double NNfunction_sg_dR::synapse0x42953d0() {
   return (neuron0x4278ec0()*-0.309314);
}

double NNfunction_sg_dR::synapse0x4295410() {
   return (neuron0x4279890()*0.332049);
}

double NNfunction_sg_dR::synapse0x4295450() {
   return (neuron0x427a260()*2.18501);
}

double NNfunction_sg_dR::synapse0x4295490() {
   return (neuron0x427ac30()*0.00132063);
}

double NNfunction_sg_dR::synapse0x42954d0() {
   return (neuron0x427b600()*0.255937);
}

double NNfunction_sg_dR::synapse0x4295510() {
   return (neuron0x427bfd0()*1.1979);
}

double NNfunction_sg_dR::synapse0x4295550() {
   return (neuron0x427c9a0()*-4.13266);
}

double NNfunction_sg_dR::synapse0x4295590() {
   return (neuron0x427d370()*0.547451);
}

double NNfunction_sg_dR::synapse0x4295140() {
   return (neuron0x4273400()*0.145971);
}

double NNfunction_sg_dR::synapse0x4295180() {
   return (neuron0x427ff50()*-0.245237);
}

double NNfunction_sg_dR::synapse0x42951c0() {
   return (neuron0x4280920()*-1.38844);
}

double NNfunction_sg_dR::synapse0x4295200() {
   return (neuron0x42812f0()*-0.958927);
}

double NNfunction_sg_dR::synapse0x42957e0() {
   return (neuron0x4281cc0()*0.45829);
}

double NNfunction_sg_dR::synapse0x4295820() {
   return (neuron0x4282690()*-0.492411);
}

double NNfunction_sg_dR::synapse0x4295860() {
   return (neuron0x4283060()*0.0794214);
}

double NNfunction_sg_dR::synapse0x42958a0() {
   return (neuron0x4283a30()*-0.0160431);
}

double NNfunction_sg_dR::synapse0x42958e0() {
   return (neuron0x4284400()*-0.0881607);
}

double NNfunction_sg_dR::synapse0x4295920() {
   return (neuron0x4284fe0()*-0.431314);
}

double NNfunction_sg_dR::synapse0x4295960() {
   return (neuron0x42859b0()*-0.542333);
}

double NNfunction_sg_dR::synapse0x42959a0() {
   return (neuron0x4276830()*0.882147);
}

double NNfunction_sg_dR::synapse0x42959e0() {
   return (neuron0x4277200()*0.729663);
}

double NNfunction_sg_dR::synapse0x4295a20() {
   return (neuron0x4277bd0()*0.0887128);
}

double NNfunction_sg_dR::synapse0x4295a60() {
   return (neuron0x428a210()*1.34969);
}

double NNfunction_sg_dR::synapse0x4295aa0() {
   return (neuron0x428aac0()*0.0302367);
}

double NNfunction_sg_dR::synapse0x4295ae0() {
   return (neuron0x428b490()*0.493153);
}

double NNfunction_sg_dR::synapse0x4295b20() {
   return (neuron0x428be60()*-0.279182);
}

double NNfunction_sg_dR::synapse0x4295ea0() {
   return (neuron0x4266cd0()*-0.322389);
}

double NNfunction_sg_dR::synapse0x4295ee0() {
   return (neuron0x4267620()*0.0772948);
}

double NNfunction_sg_dR::synapse0x4295f20() {
   return (neuron0x4268100()*-0.504501);
}

double NNfunction_sg_dR::synapse0x4295f60() {
   return (neuron0x4267ba0()*0.0167412);
}

double NNfunction_sg_dR::synapse0x4295fa0() {
   return (neuron0x4268ee0()*0.433286);
}

double NNfunction_sg_dR::synapse0x4295fe0() {
   return (neuron0x426a9c0()*-0.256262);
}

double NNfunction_sg_dR::synapse0x4296020() {
   return (neuron0x426b790()*-0.33911);
}

double NNfunction_sg_dR::synapse0x4296060() {
   return (neuron0x426c160()*0.0332381);
}

double NNfunction_sg_dR::synapse0x42960a0() {
   return (neuron0x426cb30()*0.395293);
}

double NNfunction_sg_dR::synapse0x42960e0() {
   return (neuron0x426d610()*-0.102819);
}

double NNfunction_sg_dR::synapse0x4296120() {
   return (neuron0x426dfe0()*-0.836838);
}

double NNfunction_sg_dR::synapse0x4296160() {
   return (neuron0x426b0c0()*-0.543027);
}

double NNfunction_sg_dR::synapse0x42961a0() {
   return (neuron0x426fb90()*0.841953);
}

double NNfunction_sg_dR::synapse0x42961e0() {
   return (neuron0x4270560()*-0.156694);
}

double NNfunction_sg_dR::synapse0x4296220() {
   return (neuron0x4270f30()*0.50061);
}

double NNfunction_sg_dR::synapse0x4296260() {
   return (neuron0x4271900()*1.27026);
}

double NNfunction_sg_dR::synapse0x4295cf0() {
   return (neuron0x4273710()*0.763804);
}

double NNfunction_sg_dR::synapse0x4295d30() {
   return (neuron0x42739f0()*0.00898106);
}

double NNfunction_sg_dR::synapse0x42963b0() {
   return (neuron0x42743c0()*0.381338);
}

double NNfunction_sg_dR::synapse0x42963f0() {
   return (neuron0x4274d90()*0.0289695);
}

double NNfunction_sg_dR::synapse0x4296430() {
   return (neuron0x4275760()*-0.442898);
}

double NNfunction_sg_dR::synapse0x4296470() {
   return (neuron0x4276130()*0.0750701);
}

double NNfunction_sg_dR::synapse0x42964b0() {
   return (neuron0x426ec80()*-0.105689);
}

double NNfunction_sg_dR::synapse0x42964f0() {
   return (neuron0x426f650()*-1.09337);
}

double NNfunction_sg_dR::synapse0x4296530() {
   return (neuron0x4278ec0()*-0.169305);
}

double NNfunction_sg_dR::synapse0x4296570() {
   return (neuron0x4279890()*0.0240489);
}

double NNfunction_sg_dR::synapse0x42965b0() {
   return (neuron0x427a260()*0.416952);
}

double NNfunction_sg_dR::synapse0x42965f0() {
   return (neuron0x427ac30()*0.0367491);
}

double NNfunction_sg_dR::synapse0x4296630() {
   return (neuron0x427b600()*2.16695);
}

double NNfunction_sg_dR::synapse0x4296670() {
   return (neuron0x427bfd0()*0.640095);
}

double NNfunction_sg_dR::synapse0x42966b0() {
   return (neuron0x427c9a0()*-0.784161);
}

double NNfunction_sg_dR::synapse0x42966f0() {
   return (neuron0x427d370()*-0.0235971);
}

double NNfunction_sg_dR::synapse0x42962a0() {
   return (neuron0x4273400()*-0.0518115);
}

double NNfunction_sg_dR::synapse0x42962e0() {
   return (neuron0x427ff50()*0.352026);
}

double NNfunction_sg_dR::synapse0x4296320() {
   return (neuron0x4280920()*0.204296);
}

double NNfunction_sg_dR::synapse0x4296360() {
   return (neuron0x42812f0()*-0.128168);
}

double NNfunction_sg_dR::synapse0x4296940() {
   return (neuron0x4281cc0()*0.644769);
}

double NNfunction_sg_dR::synapse0x4296980() {
   return (neuron0x4282690()*0.942187);
}

double NNfunction_sg_dR::synapse0x42969c0() {
   return (neuron0x4283060()*0.0443097);
}

double NNfunction_sg_dR::synapse0x4296a00() {
   return (neuron0x4283a30()*0.0595883);
}

double NNfunction_sg_dR::synapse0x4296a40() {
   return (neuron0x4284400()*0.153153);
}

double NNfunction_sg_dR::synapse0x4296a80() {
   return (neuron0x4284fe0()*0.0667648);
}

double NNfunction_sg_dR::synapse0x4296ac0() {
   return (neuron0x42859b0()*-0.229695);
}

double NNfunction_sg_dR::synapse0x4296b00() {
   return (neuron0x4276830()*1.40404);
}

double NNfunction_sg_dR::synapse0x4296b40() {
   return (neuron0x4277200()*0.567765);
}

double NNfunction_sg_dR::synapse0x4296b80() {
   return (neuron0x4277bd0()*0.227464);
}

double NNfunction_sg_dR::synapse0x4296bc0() {
   return (neuron0x428a210()*0.0225515);
}

double NNfunction_sg_dR::synapse0x4296c00() {
   return (neuron0x428aac0()*-0.0297071);
}

double NNfunction_sg_dR::synapse0x4296c40() {
   return (neuron0x428b490()*1.13831);
}

double NNfunction_sg_dR::synapse0x4296c80() {
   return (neuron0x428be60()*-1.01746);
}

double NNfunction_sg_dR::synapse0x4296ee0() {
   return (neuron0x4293060()*6.15794);
}

double NNfunction_sg_dR::synapse0x4296f20() {
   return (neuron0x4293400()*-4.64988);
}

double NNfunction_sg_dR::synapse0x4296f60() {
   return (neuron0x42938a0()*9.63408);
}

double NNfunction_sg_dR::synapse0x4296fa0() {
   return (neuron0x4294a00()*-8.301);
}

double NNfunction_sg_dR::synapse0x4296fe0() {
   return (neuron0x4295b60()*4.63934);
}

