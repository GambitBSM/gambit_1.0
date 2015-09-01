#include "NNfunction_nn_chi3_charge1p.h"
#include <cmath>

double NNfunction_nn_chi3_charge1p::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 24.6272)/14.9521;
   input1 = (in1 - 49.6618)/774.399;
   input2 = (in2 - 392.774)/453.544;
   input3 = (in3 - 288.98)/762.119;
   input4 = (in4 - 1068.94)/894.017;
   input5 = (in5 - 1068.59)/996.201;
   input6 = (in6 - 1071.82)/995.147;
   input7 = (in7 - 1050.76)/959.364;
   input8 = (in8 - 1069.51)/1005.79;
   input9 = (in9 - 1059.82)/998.765;
   input10 = (in10 - 1035.36)/942.476;
   input11 = (in11 - 1020.32)/982.874;
   input12 = (in12 - 1037.64)/981.332;
   input13 = (in13 - 778.834)/709.128;
   input14 = (in14 - 1034.47)/958.432;
   input15 = (in15 - 1036.03)/959.612;
   input16 = (in16 - 698.371)/607.439;
   input17 = (in17 - 1047.98)/989.309;
   input18 = (in18 - 1046.6)/990.666;
   input19 = (in19 - 1008.29)/914.234;
   input20 = (in20 - -210.504)/486.146;
   input21 = (in21 - -268.532)/977.577;
   input22 = (in22 - 12.3386)/969.28;
   input23 = (in23 - 30.2644)/323.859;
   switch(index) {
     case 0:
         return neuron0x3795760();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi3_charge1p::Value(int index, double* input) {
   input0 = (input[0] - 24.6272)/14.9521;
   input1 = (input[1] - 49.6618)/774.399;
   input2 = (input[2] - 392.774)/453.544;
   input3 = (input[3] - 288.98)/762.119;
   input4 = (input[4] - 1068.94)/894.017;
   input5 = (input[5] - 1068.59)/996.201;
   input6 = (input[6] - 1071.82)/995.147;
   input7 = (input[7] - 1050.76)/959.364;
   input8 = (input[8] - 1069.51)/1005.79;
   input9 = (input[9] - 1059.82)/998.765;
   input10 = (input[10] - 1035.36)/942.476;
   input11 = (input[11] - 1020.32)/982.874;
   input12 = (input[12] - 1037.64)/981.332;
   input13 = (input[13] - 778.834)/709.128;
   input14 = (input[14] - 1034.47)/958.432;
   input15 = (input[15] - 1036.03)/959.612;
   input16 = (input[16] - 698.371)/607.439;
   input17 = (input[17] - 1047.98)/989.309;
   input18 = (input[18] - 1046.6)/990.666;
   input19 = (input[19] - 1008.29)/914.234;
   input20 = (input[20] - -210.504)/486.146;
   input21 = (input[21] - -268.532)/977.577;
   input22 = (input[22] - 12.3386)/969.28;
   input23 = (input[23] - 30.2644)/323.859;
   switch(index) {
     case 0:
         return neuron0x3795760();
     default:
         return 0.;
   }
}

double NNfunction_nn_chi3_charge1p::neuron0x37607d0() {
   return input0;
}

double NNfunction_nn_chi3_charge1p::neuron0x3760a80() {
   return input1;
}

double NNfunction_nn_chi3_charge1p::neuron0x3760dc0() {
   return input2;
}

double NNfunction_nn_chi3_charge1p::neuron0x3761100() {
   return input3;
}

double NNfunction_nn_chi3_charge1p::neuron0x3761440() {
   return input4;
}

double NNfunction_nn_chi3_charge1p::neuron0x3761780() {
   return input5;
}

double NNfunction_nn_chi3_charge1p::neuron0x3761ac0() {
   return input6;
}

double NNfunction_nn_chi3_charge1p::neuron0x3761e00() {
   return input7;
}

double NNfunction_nn_chi3_charge1p::neuron0x3762140() {
   return input8;
}

double NNfunction_nn_chi3_charge1p::neuron0x3762480() {
   return input9;
}

double NNfunction_nn_chi3_charge1p::neuron0x37627c0() {
   return input10;
}

double NNfunction_nn_chi3_charge1p::neuron0x3762b00() {
   return input11;
}

double NNfunction_nn_chi3_charge1p::neuron0x3762e40() {
   return input12;
}

double NNfunction_nn_chi3_charge1p::neuron0x3763180() {
   return input13;
}

double NNfunction_nn_chi3_charge1p::neuron0x37634c0() {
   return input14;
}

double NNfunction_nn_chi3_charge1p::neuron0x3763800() {
   return input15;
}

double NNfunction_nn_chi3_charge1p::neuron0x3763b40() {
   return input16;
}

double NNfunction_nn_chi3_charge1p::neuron0x37640a0() {
   return input17;
}

double NNfunction_nn_chi3_charge1p::neuron0x37642c0() {
   return input18;
}

double NNfunction_nn_chi3_charge1p::neuron0x3764600() {
   return input19;
}

double NNfunction_nn_chi3_charge1p::neuron0x3764940() {
   return input20;
}

double NNfunction_nn_chi3_charge1p::neuron0x3764c80() {
   return input21;
}

double NNfunction_nn_chi3_charge1p::neuron0x3764fc0() {
   return input22;
}

double NNfunction_nn_chi3_charge1p::neuron0x3765300() {
   return input23;
}

double NNfunction_nn_chi3_charge1p::input0x3765770() {
   double input = -1.17914;
   input += synapse0x3765ab0();
   input += synapse0x3765af0();
   input += synapse0x3765b30();
   input += synapse0x3765b70();
   input += synapse0x3765bb0();
   input += synapse0x3765bf0();
   input += synapse0x3765c30();
   input += synapse0x3765c70();
   input += synapse0x3765cb0();
   input += synapse0x3765cf0();
   input += synapse0x3765d30();
   input += synapse0x3765d70();
   input += synapse0x3765db0();
   input += synapse0x3765df0();
   input += synapse0x3765e30();
   input += synapse0x3765e70();
   input += synapse0x3765900();
   input += synapse0x3765940();
   input += synapse0x26a2eb0();
   input += synapse0x26a2ef0();
   input += synapse0x3765fc0();
   input += synapse0x3766000();
   input += synapse0x3766040();
   input += synapse0x3766080();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x3765770() {
   double input = input0x3765770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x37660c0() {
   double input = 1.0222;
   input += synapse0x3766400();
   input += synapse0x3766440();
   input += synapse0x3766480();
   input += synapse0x37664c0();
   input += synapse0x3766500();
   input += synapse0x3766540();
   input += synapse0x3766580();
   input += synapse0x37665c0();
   input += synapse0x3766600();
   input += synapse0x3765eb0();
   input += synapse0x3765ef0();
   input += synapse0x3765f30();
   input += synapse0x3765f70();
   input += synapse0x3766850();
   input += synapse0x3766890();
   input += synapse0x37668d0();
   input += synapse0x3766250();
   input += synapse0x3766290();
   input += synapse0x3766a20();
   input += synapse0x3766a60();
   input += synapse0x3766aa0();
   input += synapse0x3766ae0();
   input += synapse0x3766b20();
   input += synapse0x3766b60();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x37660c0() {
   double input = input0x37660c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x3766ba0() {
   double input = -0.0220605;
   input += synapse0x3766ee0();
   input += synapse0x3766f20();
   input += synapse0x3766f60();
   input += synapse0x3766fa0();
   input += synapse0x3766fe0();
   input += synapse0x3767020();
   input += synapse0x3767060();
   input += synapse0x37670a0();
   input += synapse0x37670e0();
   input += synapse0x3767120();
   input += synapse0x3767160();
   input += synapse0x37671a0();
   input += synapse0x37671e0();
   input += synapse0x3767220();
   input += synapse0x3767260();
   input += synapse0x37672a0();
   input += synapse0x3766d30();
   input += synapse0x3766d70();
   input += synapse0x26a6920();
   input += synapse0x352a850();
   input += synapse0x352a890();
   input += synapse0x37691e0();
   input += synapse0x3769220();
   input += synapse0x3760510();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x3766ba0() {
   double input = input0x3766ba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x3766640() {
   double input = 2.83687;
   input += synapse0x37605e0();
   input += synapse0x352b0f0();
   input += synapse0x37667d0();
   input += synapse0x3766810();
   input += synapse0x37673f0();
   input += synapse0x3767430();
   input += synapse0x3767470();
   input += synapse0x37674b0();
   input += synapse0x37674f0();
   input += synapse0x3767530();
   input += synapse0x3767570();
   input += synapse0x37675b0();
   input += synapse0x37675f0();
   input += synapse0x3767630();
   input += synapse0x3767670();
   input += synapse0x37676b0();
   input += synapse0x3760550();
   input += synapse0x3760590();
   input += synapse0x3767800();
   input += synapse0x3767840();
   input += synapse0x3767880();
   input += synapse0x37678c0();
   input += synapse0x3767900();
   input += synapse0x3767940();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x3766640() {
   double input = input0x3766640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x3767980() {
   double input = -0.0745483;
   input += synapse0x3767cc0();
   input += synapse0x3767d00();
   input += synapse0x3767d40();
   input += synapse0x3767d80();
   input += synapse0x3767dc0();
   input += synapse0x3767e00();
   input += synapse0x3767e40();
   input += synapse0x3767e80();
   input += synapse0x3767ec0();
   input += synapse0x3767f00();
   input += synapse0x3767f40();
   input += synapse0x3767f80();
   input += synapse0x3767fc0();
   input += synapse0x3768000();
   input += synapse0x3768040();
   input += synapse0x3768080();
   input += synapse0x37681d0();
   input += synapse0x3767b10();
   input += synapse0x3767b50();
   input += synapse0x3769320();
   input += synapse0x3769360();
   input += synapse0x37693a0();
   input += synapse0x37693e0();
   input += synapse0x3769420();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x3767980() {
   double input = input0x3767980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x3769460() {
   double input = 1.684;
   input += synapse0x37697a0();
   input += synapse0x37697e0();
   input += synapse0x3769820();
   input += synapse0x3769860();
   input += synapse0x37698a0();
   input += synapse0x37698e0();
   input += synapse0x3769920();
   input += synapse0x3769960();
   input += synapse0x37699a0();
   input += synapse0x352abc0();
   input += synapse0x352ac00();
   input += synapse0x352ac40();
   input += synapse0x352ac80();
   input += synapse0x352acc0();
   input += synapse0x352ad00();
   input += synapse0x352ad40();
   input += synapse0x37695f0();
   input += synapse0x3769630();
   input += synapse0x352ae90();
   input += synapse0x352aed0();
   input += synapse0x352af10();
   input += synapse0x352af50();
   input += synapse0x352af90();
   input += synapse0x376a1f0();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x3769460() {
   double input = input0x3769460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x376a230() {
   double input = -5.73095;
   input += synapse0x376a570();
   input += synapse0x376a5b0();
   input += synapse0x376a5f0();
   input += synapse0x376a630();
   input += synapse0x376a670();
   input += synapse0x376a6b0();
   input += synapse0x376a6f0();
   input += synapse0x376a730();
   input += synapse0x376a770();
   input += synapse0x376a7b0();
   input += synapse0x376a7f0();
   input += synapse0x376a830();
   input += synapse0x376a870();
   input += synapse0x376a8b0();
   input += synapse0x376a8f0();
   input += synapse0x376a930();
   input += synapse0x376a3c0();
   input += synapse0x376a400();
   input += synapse0x376aa80();
   input += synapse0x376aac0();
   input += synapse0x376ab00();
   input += synapse0x376ab40();
   input += synapse0x376ab80();
   input += synapse0x376abc0();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x376a230() {
   double input = input0x376a230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x376ac00() {
   double input = 5.45365;
   input += synapse0x376af40();
   input += synapse0x376af80();
   input += synapse0x376afc0();
   input += synapse0x376b000();
   input += synapse0x376b040();
   input += synapse0x376b080();
   input += synapse0x376b0c0();
   input += synapse0x376b100();
   input += synapse0x376b140();
   input += synapse0x376b180();
   input += synapse0x376b1c0();
   input += synapse0x376b200();
   input += synapse0x376b240();
   input += synapse0x376b280();
   input += synapse0x376b2c0();
   input += synapse0x376b300();
   input += synapse0x376ad90();
   input += synapse0x376add0();
   input += synapse0x376b450();
   input += synapse0x376b490();
   input += synapse0x376b4d0();
   input += synapse0x376b510();
   input += synapse0x376b550();
   input += synapse0x376b590();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x376ac00() {
   double input = input0x376ac00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x376b5d0() {
   double input = 0.265601;
   input += synapse0x3763f90();
   input += synapse0x3763fd0();
   input += synapse0x3764010();
   input += synapse0x3764050();
   input += synapse0x376bb20();
   input += synapse0x376bb60();
   input += synapse0x376bba0();
   input += synapse0x376bbe0();
   input += synapse0x376bc20();
   input += synapse0x376bc60();
   input += synapse0x376bca0();
   input += synapse0x376bce0();
   input += synapse0x376bd20();
   input += synapse0x376bd60();
   input += synapse0x376bda0();
   input += synapse0x376bde0();
   input += synapse0x376b760();
   input += synapse0x376b7a0();
   input += synapse0x376bf30();
   input += synapse0x376bf70();
   input += synapse0x376bfb0();
   input += synapse0x376bff0();
   input += synapse0x376c030();
   input += synapse0x376c070();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x376b5d0() {
   double input = input0x376b5d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x376c0b0() {
   double input = 0.126164;
   input += synapse0x376c3f0();
   input += synapse0x376c430();
   input += synapse0x376c470();
   input += synapse0x376c4b0();
   input += synapse0x376c4f0();
   input += synapse0x376c530();
   input += synapse0x376c570();
   input += synapse0x376c5b0();
   input += synapse0x376c5f0();
   input += synapse0x376c630();
   input += synapse0x376c670();
   input += synapse0x376c6b0();
   input += synapse0x376c6f0();
   input += synapse0x376c730();
   input += synapse0x376c770();
   input += synapse0x376c7b0();
   input += synapse0x376c240();
   input += synapse0x376c280();
   input += synapse0x376c900();
   input += synapse0x376c940();
   input += synapse0x376c980();
   input += synapse0x376c9c0();
   input += synapse0x376ca00();
   input += synapse0x376ca40();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x376c0b0() {
   double input = input0x376c0b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x376ca80() {
   double input = 0.251075;
   input += synapse0x376cdc0();
   input += synapse0x376ce00();
   input += synapse0x376ce40();
   input += synapse0x376ce80();
   input += synapse0x376cec0();
   input += synapse0x376cf00();
   input += synapse0x376cf40();
   input += synapse0x376cf80();
   input += synapse0x376cfc0();
   input += synapse0x376d000();
   input += synapse0x376d040();
   input += synapse0x376d080();
   input += synapse0x376d0c0();
   input += synapse0x376d100();
   input += synapse0x376d140();
   input += synapse0x376d180();
   input += synapse0x376cc10();
   input += synapse0x376cc50();
   input += synapse0x37699e0();
   input += synapse0x3769a20();
   input += synapse0x3769a60();
   input += synapse0x3769aa0();
   input += synapse0x3769ae0();
   input += synapse0x3769b20();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x376ca80() {
   double input = input0x376ca80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x3769b60() {
   double input = 5.00681;
   input += synapse0x3769ea0();
   input += synapse0x3769ee0();
   input += synapse0x3769f20();
   input += synapse0x3769f60();
   input += synapse0x3769fa0();
   input += synapse0x3769fe0();
   input += synapse0x376a020();
   input += synapse0x376a060();
   input += synapse0x376a0a0();
   input += synapse0x376a0e0();
   input += synapse0x376a120();
   input += synapse0x376a160();
   input += synapse0x376a1a0();
   input += synapse0x376e2e0();
   input += synapse0x376e320();
   input += synapse0x376e360();
   input += synapse0x3769cf0();
   input += synapse0x3769d30();
   input += synapse0x376e4b0();
   input += synapse0x376e4f0();
   input += synapse0x376e530();
   input += synapse0x376e570();
   input += synapse0x376e5b0();
   input += synapse0x376e5f0();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x3769b60() {
   double input = input0x3769b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x376e630() {
   double input = -1.03331;
   input += synapse0x376e970();
   input += synapse0x376e9b0();
   input += synapse0x376e9f0();
   input += synapse0x376ea30();
   input += synapse0x376ea70();
   input += synapse0x376eab0();
   input += synapse0x376eaf0();
   input += synapse0x376eb30();
   input += synapse0x376eb70();
   input += synapse0x376ebb0();
   input += synapse0x376ebf0();
   input += synapse0x376ec30();
   input += synapse0x376ec70();
   input += synapse0x376ecb0();
   input += synapse0x376ecf0();
   input += synapse0x376ed30();
   input += synapse0x376e7c0();
   input += synapse0x376e800();
   input += synapse0x376ee80();
   input += synapse0x376eec0();
   input += synapse0x376ef00();
   input += synapse0x376ef40();
   input += synapse0x376ef80();
   input += synapse0x376efc0();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x376e630() {
   double input = input0x376e630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x376f000() {
   double input = -1.70625;
   input += synapse0x376f340();
   input += synapse0x376f380();
   input += synapse0x376f3c0();
   input += synapse0x376f400();
   input += synapse0x376f440();
   input += synapse0x376f480();
   input += synapse0x376f4c0();
   input += synapse0x376f500();
   input += synapse0x376f540();
   input += synapse0x376f580();
   input += synapse0x376f5c0();
   input += synapse0x376f600();
   input += synapse0x376f640();
   input += synapse0x376f680();
   input += synapse0x376f6c0();
   input += synapse0x376f700();
   input += synapse0x376f190();
   input += synapse0x376f1d0();
   input += synapse0x376f850();
   input += synapse0x376f890();
   input += synapse0x376f8d0();
   input += synapse0x376f910();
   input += synapse0x376f950();
   input += synapse0x376f990();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x376f000() {
   double input = input0x376f000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x376f9d0() {
   double input = -0.629644;
   input += synapse0x376fd10();
   input += synapse0x376fd50();
   input += synapse0x376fd90();
   input += synapse0x376fdd0();
   input += synapse0x376fe10();
   input += synapse0x376fe50();
   input += synapse0x376fe90();
   input += synapse0x376fed0();
   input += synapse0x376ff10();
   input += synapse0x376ff50();
   input += synapse0x376ff90();
   input += synapse0x376ffd0();
   input += synapse0x3770010();
   input += synapse0x3770050();
   input += synapse0x3770090();
   input += synapse0x37700d0();
   input += synapse0x376fb60();
   input += synapse0x376fba0();
   input += synapse0x3770220();
   input += synapse0x3770260();
   input += synapse0x37702a0();
   input += synapse0x37702e0();
   input += synapse0x3770320();
   input += synapse0x3770360();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x376f9d0() {
   double input = input0x376f9d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x37703a0() {
   double input = -3.85089;
   input += synapse0x37706e0();
   input += synapse0x3760960();
   input += synapse0x37609a0();
   input += synapse0x3760ca0();
   input += synapse0x3760ce0();
   input += synapse0x3760fe0();
   input += synapse0x3761020();
   input += synapse0x3761320();
   input += synapse0x3761360();
   input += synapse0x3761660();
   input += synapse0x37616a0();
   input += synapse0x37619a0();
   input += synapse0x37619e0();
   input += synapse0x3761ce0();
   input += synapse0x3761d20();
   input += synapse0x3762020();
   input += synapse0x3762060();
   input += synapse0x3762360();
   input += synapse0x37623a0();
   input += synapse0x37626a0();
   input += synapse0x37626e0();
   input += synapse0x37629e0();
   input += synapse0x3762a20();
   input += synapse0x3762d20();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x37703a0() {
   double input = input0x37703a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x37721b0() {
   double input = -1.5098;
   input += synapse0x3762d60();
   input += synapse0x3763a20();
   input += synapse0x3763a60();
   input += synapse0x3770530();
   input += synapse0x3770570();
   input += synapse0x3763d60();
   input += synapse0x3763da0();
   input += synapse0x26a48b0();
   input += synapse0x26a48f0();
   input += synapse0x37644e0();
   input += synapse0x3764520();
   input += synapse0x3764820();
   input += synapse0x3764860();
   input += synapse0x3764b60();
   input += synapse0x3764ba0();
   input += synapse0x3764ea0();
   input += synapse0x3764ee0();
   input += synapse0x37651e0();
   input += synapse0x3765220();
   input += synapse0x3765520();
   input += synapse0x3765560();
   input += synapse0x3763060();
   input += synapse0x37630a0();
   input += synapse0x3772450();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x37721b0() {
   double input = input0x37721b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x3772490() {
   double input = -4.3098;
   input += synapse0x37727d0();
   input += synapse0x3772810();
   input += synapse0x3772850();
   input += synapse0x3772890();
   input += synapse0x37728d0();
   input += synapse0x3772910();
   input += synapse0x3772950();
   input += synapse0x3772990();
   input += synapse0x37729d0();
   input += synapse0x3772a10();
   input += synapse0x3772a50();
   input += synapse0x3772a90();
   input += synapse0x3772ad0();
   input += synapse0x3772b10();
   input += synapse0x3772b50();
   input += synapse0x3772b90();
   input += synapse0x3772620();
   input += synapse0x3772660();
   input += synapse0x3772ce0();
   input += synapse0x3772d20();
   input += synapse0x3772d60();
   input += synapse0x3772da0();
   input += synapse0x3772de0();
   input += synapse0x3772e20();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x3772490() {
   double input = input0x3772490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x3772e60() {
   double input = -1.81648;
   input += synapse0x37731a0();
   input += synapse0x37731e0();
   input += synapse0x3773220();
   input += synapse0x3773260();
   input += synapse0x37732a0();
   input += synapse0x37732e0();
   input += synapse0x3773320();
   input += synapse0x3773360();
   input += synapse0x37733a0();
   input += synapse0x37733e0();
   input += synapse0x3773420();
   input += synapse0x3773460();
   input += synapse0x37734a0();
   input += synapse0x37734e0();
   input += synapse0x3773520();
   input += synapse0x3773560();
   input += synapse0x3772ff0();
   input += synapse0x3773030();
   input += synapse0x37736b0();
   input += synapse0x37736f0();
   input += synapse0x3773730();
   input += synapse0x3773770();
   input += synapse0x37737b0();
   input += synapse0x37737f0();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x3772e60() {
   double input = input0x3772e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x3773830() {
   double input = 2.03151;
   input += synapse0x3773b70();
   input += synapse0x3773bb0();
   input += synapse0x3773bf0();
   input += synapse0x3773c30();
   input += synapse0x3773c70();
   input += synapse0x3773cb0();
   input += synapse0x3773cf0();
   input += synapse0x3773d30();
   input += synapse0x3773d70();
   input += synapse0x3773db0();
   input += synapse0x3773df0();
   input += synapse0x3773e30();
   input += synapse0x3773e70();
   input += synapse0x3773eb0();
   input += synapse0x3773ef0();
   input += synapse0x3773f30();
   input += synapse0x37739c0();
   input += synapse0x3773a00();
   input += synapse0x3774080();
   input += synapse0x37740c0();
   input += synapse0x3774100();
   input += synapse0x3774140();
   input += synapse0x3774180();
   input += synapse0x37741c0();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x3773830() {
   double input = input0x3773830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x3774200() {
   double input = -0.0691999;
   input += synapse0x3774540();
   input += synapse0x3774580();
   input += synapse0x37745c0();
   input += synapse0x3774600();
   input += synapse0x3774640();
   input += synapse0x3774680();
   input += synapse0x37746c0();
   input += synapse0x3774700();
   input += synapse0x3774740();
   input += synapse0x3774780();
   input += synapse0x37747c0();
   input += synapse0x3774800();
   input += synapse0x3774840();
   input += synapse0x3774880();
   input += synapse0x37748c0();
   input += synapse0x3774900();
   input += synapse0x3774390();
   input += synapse0x37743d0();
   input += synapse0x3774a50();
   input += synapse0x3774a90();
   input += synapse0x3774ad0();
   input += synapse0x3774b10();
   input += synapse0x3774b50();
   input += synapse0x3774b90();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x3774200() {
   double input = input0x3774200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x3774bd0() {
   double input = 4.84028;
   input += synapse0x3774f10();
   input += synapse0x3774f50();
   input += synapse0x3774f90();
   input += synapse0x3774fd0();
   input += synapse0x3775010();
   input += synapse0x3775050();
   input += synapse0x3775090();
   input += synapse0x37750d0();
   input += synapse0x3775110();
   input += synapse0x376d2d0();
   input += synapse0x376d310();
   input += synapse0x376d350();
   input += synapse0x376d390();
   input += synapse0x376d3d0();
   input += synapse0x376d410();
   input += synapse0x376d450();
   input += synapse0x3774d60();
   input += synapse0x3774da0();
   input += synapse0x376d5a0();
   input += synapse0x376d5e0();
   input += synapse0x376d620();
   input += synapse0x376d660();
   input += synapse0x376d6a0();
   input += synapse0x376d6e0();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x3774bd0() {
   double input = input0x3774bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x376d720() {
   double input = -0.170348;
   input += synapse0x376da60();
   input += synapse0x376daa0();
   input += synapse0x376dae0();
   input += synapse0x376db20();
   input += synapse0x376db60();
   input += synapse0x376dba0();
   input += synapse0x376dbe0();
   input += synapse0x376dc20();
   input += synapse0x376dc60();
   input += synapse0x376dca0();
   input += synapse0x376dce0();
   input += synapse0x376dd20();
   input += synapse0x376dd60();
   input += synapse0x376dda0();
   input += synapse0x376dde0();
   input += synapse0x376de20();
   input += synapse0x376d8b0();
   input += synapse0x376d8f0();
   input += synapse0x376df70();
   input += synapse0x376dfb0();
   input += synapse0x376dff0();
   input += synapse0x376e030();
   input += synapse0x376e070();
   input += synapse0x376e0b0();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x376d720() {
   double input = input0x376d720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x376e0f0() {
   double input = 0.597962;
   input += synapse0x376e280();
   input += synapse0x3777310();
   input += synapse0x3777350();
   input += synapse0x3777390();
   input += synapse0x37773d0();
   input += synapse0x3777410();
   input += synapse0x3777450();
   input += synapse0x3777490();
   input += synapse0x37774d0();
   input += synapse0x3777510();
   input += synapse0x3777550();
   input += synapse0x3777590();
   input += synapse0x37775d0();
   input += synapse0x3777610();
   input += synapse0x3777650();
   input += synapse0x3777690();
   input += synapse0x3777160();
   input += synapse0x37771a0();
   input += synapse0x37777e0();
   input += synapse0x3777820();
   input += synapse0x3777860();
   input += synapse0x37778a0();
   input += synapse0x37778e0();
   input += synapse0x3777920();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x376e0f0() {
   double input = input0x376e0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x3777960() {
   double input = -0.381235;
   input += synapse0x3777ca0();
   input += synapse0x3777ce0();
   input += synapse0x3777d20();
   input += synapse0x3777d60();
   input += synapse0x3777da0();
   input += synapse0x3777de0();
   input += synapse0x3777e20();
   input += synapse0x3777e60();
   input += synapse0x3777ea0();
   input += synapse0x3777ee0();
   input += synapse0x3777f20();
   input += synapse0x3777f60();
   input += synapse0x3777fa0();
   input += synapse0x3777fe0();
   input += synapse0x3778020();
   input += synapse0x3778060();
   input += synapse0x3777af0();
   input += synapse0x3777b30();
   input += synapse0x37781b0();
   input += synapse0x37781f0();
   input += synapse0x3778230();
   input += synapse0x3778270();
   input += synapse0x37782b0();
   input += synapse0x37782f0();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x3777960() {
   double input = input0x3777960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x3778330() {
   double input = -0.0296652;
   input += synapse0x3778670();
   input += synapse0x37786b0();
   input += synapse0x37786f0();
   input += synapse0x3778730();
   input += synapse0x3778770();
   input += synapse0x37787b0();
   input += synapse0x37787f0();
   input += synapse0x3778830();
   input += synapse0x3778870();
   input += synapse0x37788b0();
   input += synapse0x37788f0();
   input += synapse0x3778930();
   input += synapse0x3778970();
   input += synapse0x37789b0();
   input += synapse0x37789f0();
   input += synapse0x3778a30();
   input += synapse0x37784c0();
   input += synapse0x3778500();
   input += synapse0x3778b80();
   input += synapse0x3778bc0();
   input += synapse0x3778c00();
   input += synapse0x3778c40();
   input += synapse0x3778c80();
   input += synapse0x3778cc0();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x3778330() {
   double input = input0x3778330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x3778d00() {
   double input = -2.66146;
   input += synapse0x3779040();
   input += synapse0x3779080();
   input += synapse0x37790c0();
   input += synapse0x3779100();
   input += synapse0x3779140();
   input += synapse0x3779180();
   input += synapse0x37791c0();
   input += synapse0x3779200();
   input += synapse0x3779240();
   input += synapse0x3779280();
   input += synapse0x37792c0();
   input += synapse0x3779300();
   input += synapse0x3779340();
   input += synapse0x3779380();
   input += synapse0x37793c0();
   input += synapse0x3779400();
   input += synapse0x3778e90();
   input += synapse0x3778ed0();
   input += synapse0x3779550();
   input += synapse0x3779590();
   input += synapse0x37795d0();
   input += synapse0x3779610();
   input += synapse0x3779650();
   input += synapse0x3779690();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x3778d00() {
   double input = input0x3778d00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x37796d0() {
   double input = -4.47545;
   input += synapse0x3779a10();
   input += synapse0x3779a50();
   input += synapse0x3779a90();
   input += synapse0x3779ad0();
   input += synapse0x3779b10();
   input += synapse0x3779b50();
   input += synapse0x3779b90();
   input += synapse0x3779bd0();
   input += synapse0x3779c10();
   input += synapse0x3779c50();
   input += synapse0x3779c90();
   input += synapse0x3779cd0();
   input += synapse0x3779d10();
   input += synapse0x3779d50();
   input += synapse0x3779d90();
   input += synapse0x3779dd0();
   input += synapse0x3779860();
   input += synapse0x37798a0();
   input += synapse0x3779f20();
   input += synapse0x3779f60();
   input += synapse0x3779fa0();
   input += synapse0x3779fe0();
   input += synapse0x377a020();
   input += synapse0x377a060();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x37796d0() {
   double input = input0x37796d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x377a0a0() {
   double input = 1.45399;
   input += synapse0x377a3e0();
   input += synapse0x377a420();
   input += synapse0x377a460();
   input += synapse0x377a4a0();
   input += synapse0x377a4e0();
   input += synapse0x377a520();
   input += synapse0x377a560();
   input += synapse0x377a5a0();
   input += synapse0x377a5e0();
   input += synapse0x377a620();
   input += synapse0x377a660();
   input += synapse0x377a6a0();
   input += synapse0x377a6e0();
   input += synapse0x377a720();
   input += synapse0x377a760();
   input += synapse0x377a7a0();
   input += synapse0x377a230();
   input += synapse0x377a270();
   input += synapse0x377a8f0();
   input += synapse0x377a930();
   input += synapse0x377a970();
   input += synapse0x377a9b0();
   input += synapse0x377a9f0();
   input += synapse0x377aa30();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x377a0a0() {
   double input = input0x377a0a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x377aa70() {
   double input = 0.842106;
   input += synapse0x377adb0();
   input += synapse0x377adf0();
   input += synapse0x377ae30();
   input += synapse0x377ae70();
   input += synapse0x377aeb0();
   input += synapse0x377aef0();
   input += synapse0x377af30();
   input += synapse0x377af70();
   input += synapse0x377afb0();
   input += synapse0x377aff0();
   input += synapse0x377b030();
   input += synapse0x377b070();
   input += synapse0x377b0b0();
   input += synapse0x377b0f0();
   input += synapse0x377b130();
   input += synapse0x377b170();
   input += synapse0x377ac00();
   input += synapse0x377ac40();
   input += synapse0x377b2c0();
   input += synapse0x377b300();
   input += synapse0x377b340();
   input += synapse0x377b380();
   input += synapse0x377b3c0();
   input += synapse0x377b400();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x377aa70() {
   double input = input0x377aa70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x377b440() {
   double input = 5.31751;
   input += synapse0x377b780();
   input += synapse0x377b7c0();
   input += synapse0x377b800();
   input += synapse0x377b840();
   input += synapse0x377b880();
   input += synapse0x377b8c0();
   input += synapse0x377b900();
   input += synapse0x377b940();
   input += synapse0x377b980();
   input += synapse0x377b9c0();
   input += synapse0x377ba00();
   input += synapse0x377ba40();
   input += synapse0x377ba80();
   input += synapse0x377bac0();
   input += synapse0x377bb00();
   input += synapse0x377bb40();
   input += synapse0x377b5d0();
   input += synapse0x377b610();
   input += synapse0x377bc90();
   input += synapse0x377bcd0();
   input += synapse0x377bd10();
   input += synapse0x377bd50();
   input += synapse0x377bd90();
   input += synapse0x377bdd0();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x377b440() {
   double input = input0x377b440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x377be10() {
   double input = 0.745854;
   input += synapse0x377c150();
   input += synapse0x3770720();
   input += synapse0x3770760();
   input += synapse0x37707a0();
   input += synapse0x37709f0();
   input += synapse0x3770a30();
   input += synapse0x3770a70();
   input += synapse0x3770cc0();
   input += synapse0x3770d00();
   input += synapse0x3770f50();
   input += synapse0x3770f90();
   input += synapse0x3770fd0();
   input += synapse0x3771220();
   input += synapse0x3771260();
   input += synapse0x37714b0();
   input += synapse0x37714f0();
   input += synapse0x377bfa0();
   input += synapse0x377bfe0();
   input += synapse0x3771640();
   input += synapse0x3771b50();
   input += synapse0x3771b90();
   input += synapse0x3771bd0();
   input += synapse0x3771e20();
   input += synapse0x3771e60();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x377be10() {
   double input = input0x377be10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x3771ea0() {
   double input = 1.92337;
   input += synapse0x3771710();
   input += synapse0x3771750();
   input += synapse0x3771790();
   input += synapse0x37717d0();
   input += synapse0x3772150();
   input += synapse0x377e4a0();
   input += synapse0x377e4e0();
   input += synapse0x377e520();
   input += synapse0x377e560();
   input += synapse0x377e5a0();
   input += synapse0x377e5e0();
   input += synapse0x377e620();
   input += synapse0x377e660();
   input += synapse0x377e6a0();
   input += synapse0x377e6e0();
   input += synapse0x377e720();
   input += synapse0x3772030();
   input += synapse0x3772070();
   input += synapse0x377e870();
   input += synapse0x377e8b0();
   input += synapse0x377e8f0();
   input += synapse0x377e930();
   input += synapse0x377e970();
   input += synapse0x377e9b0();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x3771ea0() {
   double input = input0x3771ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x377e9f0() {
   double input = -0.0536873;
   input += synapse0x377ed30();
   input += synapse0x377ed70();
   input += synapse0x377edb0();
   input += synapse0x377edf0();
   input += synapse0x377ee30();
   input += synapse0x377ee70();
   input += synapse0x377eeb0();
   input += synapse0x377eef0();
   input += synapse0x377ef30();
   input += synapse0x377ef70();
   input += synapse0x377efb0();
   input += synapse0x377eff0();
   input += synapse0x377f030();
   input += synapse0x377f070();
   input += synapse0x377f0b0();
   input += synapse0x377f0f0();
   input += synapse0x377eb80();
   input += synapse0x377ebc0();
   input += synapse0x377f240();
   input += synapse0x377f280();
   input += synapse0x377f2c0();
   input += synapse0x377f300();
   input += synapse0x377f340();
   input += synapse0x377f380();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x377e9f0() {
   double input = input0x377e9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x377f3c0() {
   double input = -1.52446;
   input += synapse0x377f700();
   input += synapse0x377f740();
   input += synapse0x377f780();
   input += synapse0x377f7c0();
   input += synapse0x377f800();
   input += synapse0x377f840();
   input += synapse0x377f880();
   input += synapse0x377f8c0();
   input += synapse0x377f900();
   input += synapse0x377f940();
   input += synapse0x377f980();
   input += synapse0x377f9c0();
   input += synapse0x377fa00();
   input += synapse0x377fa40();
   input += synapse0x377fa80();
   input += synapse0x377fac0();
   input += synapse0x377f550();
   input += synapse0x377f590();
   input += synapse0x377fc10();
   input += synapse0x377fc50();
   input += synapse0x377fc90();
   input += synapse0x377fcd0();
   input += synapse0x377fd10();
   input += synapse0x377fd50();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x377f3c0() {
   double input = input0x377f3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x377fd90() {
   double input = -3.56019;
   input += synapse0x37800d0();
   input += synapse0x3780110();
   input += synapse0x3780150();
   input += synapse0x3780190();
   input += synapse0x37801d0();
   input += synapse0x3780210();
   input += synapse0x3780250();
   input += synapse0x3780290();
   input += synapse0x37802d0();
   input += synapse0x3780310();
   input += synapse0x3780350();
   input += synapse0x3780390();
   input += synapse0x37803d0();
   input += synapse0x3780410();
   input += synapse0x3780450();
   input += synapse0x3780490();
   input += synapse0x377ff20();
   input += synapse0x377ff60();
   input += synapse0x37805e0();
   input += synapse0x3780620();
   input += synapse0x3780660();
   input += synapse0x37806a0();
   input += synapse0x37806e0();
   input += synapse0x3780720();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x377fd90() {
   double input = input0x377fd90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x3780760() {
   double input = -1.16237;
   input += synapse0x3780aa0();
   input += synapse0x3780ae0();
   input += synapse0x3780b20();
   input += synapse0x3780b60();
   input += synapse0x3780ba0();
   input += synapse0x3780be0();
   input += synapse0x3780c20();
   input += synapse0x3780c60();
   input += synapse0x3780ca0();
   input += synapse0x3780ce0();
   input += synapse0x3780d20();
   input += synapse0x3780d60();
   input += synapse0x3780da0();
   input += synapse0x3780de0();
   input += synapse0x3780e20();
   input += synapse0x3780e60();
   input += synapse0x37808f0();
   input += synapse0x3780930();
   input += synapse0x3780fb0();
   input += synapse0x3780ff0();
   input += synapse0x3781030();
   input += synapse0x3781070();
   input += synapse0x37810b0();
   input += synapse0x37810f0();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x3780760() {
   double input = input0x3780760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x3781130() {
   double input = 1.62317;
   input += synapse0x3781470();
   input += synapse0x37814b0();
   input += synapse0x37814f0();
   input += synapse0x3781530();
   input += synapse0x3781570();
   input += synapse0x37815b0();
   input += synapse0x37815f0();
   input += synapse0x3781630();
   input += synapse0x3781670();
   input += synapse0x37816b0();
   input += synapse0x37816f0();
   input += synapse0x3781730();
   input += synapse0x3781770();
   input += synapse0x37817b0();
   input += synapse0x37817f0();
   input += synapse0x3781830();
   input += synapse0x37812c0();
   input += synapse0x3781300();
   input += synapse0x3781980();
   input += synapse0x37819c0();
   input += synapse0x3781a00();
   input += synapse0x3781a40();
   input += synapse0x3781a80();
   input += synapse0x3781ac0();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x3781130() {
   double input = input0x3781130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x3781b00() {
   double input = 0.871553;
   input += synapse0x3781e40();
   input += synapse0x3781e80();
   input += synapse0x3781ec0();
   input += synapse0x3781f00();
   input += synapse0x3781f40();
   input += synapse0x3781f80();
   input += synapse0x3781fc0();
   input += synapse0x3782000();
   input += synapse0x3782040();
   input += synapse0x3782080();
   input += synapse0x37820c0();
   input += synapse0x3782100();
   input += synapse0x3782140();
   input += synapse0x3782180();
   input += synapse0x37821c0();
   input += synapse0x3782200();
   input += synapse0x3781c90();
   input += synapse0x3781cd0();
   input += synapse0x3782350();
   input += synapse0x3782390();
   input += synapse0x37823d0();
   input += synapse0x3782410();
   input += synapse0x3782450();
   input += synapse0x3782490();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x3781b00() {
   double input = input0x3781b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x37824d0() {
   double input = 1.1733;
   input += synapse0x3782810();
   input += synapse0x3782850();
   input += synapse0x3782890();
   input += synapse0x37828d0();
   input += synapse0x3782910();
   input += synapse0x3782950();
   input += synapse0x3782990();
   input += synapse0x37829d0();
   input += synapse0x3782a10();
   input += synapse0x3782a50();
   input += synapse0x3782a90();
   input += synapse0x3782ad0();
   input += synapse0x3782b10();
   input += synapse0x3782b50();
   input += synapse0x3782b90();
   input += synapse0x3782bd0();
   input += synapse0x3782660();
   input += synapse0x37826a0();
   input += synapse0x3782d20();
   input += synapse0x3782d60();
   input += synapse0x3782da0();
   input += synapse0x3782de0();
   input += synapse0x3782e20();
   input += synapse0x3782e60();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x37824d0() {
   double input = input0x37824d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x3782ea0() {
   double input = 0.366434;
   input += synapse0x376b910();
   input += synapse0x376b950();
   input += synapse0x376b990();
   input += synapse0x376b9d0();
   input += synapse0x376ba10();
   input += synapse0x376ba50();
   input += synapse0x376ba90();
   input += synapse0x376bad0();
   input += synapse0x37835f0();
   input += synapse0x3783630();
   input += synapse0x3783670();
   input += synapse0x37836b0();
   input += synapse0x37836f0();
   input += synapse0x3783730();
   input += synapse0x3783770();
   input += synapse0x37837b0();
   input += synapse0x3783030();
   input += synapse0x3783070();
   input += synapse0x3783900();
   input += synapse0x3783940();
   input += synapse0x3783980();
   input += synapse0x37839c0();
   input += synapse0x3783a00();
   input += synapse0x3783a40();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x3782ea0() {
   double input = input0x3782ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x3783a80() {
   double input = 1.15004;
   input += synapse0x3783dc0();
   input += synapse0x3783e00();
   input += synapse0x3783e40();
   input += synapse0x3783e80();
   input += synapse0x3783ec0();
   input += synapse0x3783f00();
   input += synapse0x3783f40();
   input += synapse0x3783f80();
   input += synapse0x3783fc0();
   input += synapse0x3784000();
   input += synapse0x3784040();
   input += synapse0x3784080();
   input += synapse0x37840c0();
   input += synapse0x3784100();
   input += synapse0x3784140();
   input += synapse0x3784180();
   input += synapse0x3783c10();
   input += synapse0x3783c50();
   input += synapse0x37842d0();
   input += synapse0x3784310();
   input += synapse0x3784350();
   input += synapse0x3784390();
   input += synapse0x37843d0();
   input += synapse0x3784410();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x3783a80() {
   double input = input0x3783a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x3784450() {
   double input = 1.31442;
   input += synapse0x3784790();
   input += synapse0x37847d0();
   input += synapse0x3784810();
   input += synapse0x3784850();
   input += synapse0x3784890();
   input += synapse0x37848d0();
   input += synapse0x3784910();
   input += synapse0x3784950();
   input += synapse0x3784990();
   input += synapse0x37849d0();
   input += synapse0x3784a10();
   input += synapse0x3784a50();
   input += synapse0x3784a90();
   input += synapse0x3784ad0();
   input += synapse0x3784b10();
   input += synapse0x3784b50();
   input += synapse0x37845e0();
   input += synapse0x3784620();
   input += synapse0x3775150();
   input += synapse0x3775190();
   input += synapse0x37751d0();
   input += synapse0x3775210();
   input += synapse0x3775250();
   input += synapse0x3775290();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x3784450() {
   double input = input0x3784450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x37752d0() {
   double input = -1.9104;
   input += synapse0x3775610();
   input += synapse0x3775650();
   input += synapse0x3775690();
   input += synapse0x37756d0();
   input += synapse0x3775710();
   input += synapse0x3775750();
   input += synapse0x3775790();
   input += synapse0x37757d0();
   input += synapse0x3775810();
   input += synapse0x3775850();
   input += synapse0x3775890();
   input += synapse0x37758d0();
   input += synapse0x3775910();
   input += synapse0x3775950();
   input += synapse0x3775990();
   input += synapse0x37759d0();
   input += synapse0x3775460();
   input += synapse0x37754a0();
   input += synapse0x3775b20();
   input += synapse0x3775b60();
   input += synapse0x3775ba0();
   input += synapse0x3775be0();
   input += synapse0x3775c20();
   input += synapse0x3775c60();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x37752d0() {
   double input = input0x37752d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x3775ca0() {
   double input = -0.0833625;
   input += synapse0x3775fe0();
   input += synapse0x3776020();
   input += synapse0x3776060();
   input += synapse0x37760a0();
   input += synapse0x37760e0();
   input += synapse0x3776120();
   input += synapse0x3776160();
   input += synapse0x37761a0();
   input += synapse0x37761e0();
   input += synapse0x3776220();
   input += synapse0x3776260();
   input += synapse0x37762a0();
   input += synapse0x37762e0();
   input += synapse0x3776320();
   input += synapse0x3776360();
   input += synapse0x37763a0();
   input += synapse0x3775e30();
   input += synapse0x3775e70();
   input += synapse0x37764f0();
   input += synapse0x3776530();
   input += synapse0x3776570();
   input += synapse0x37765b0();
   input += synapse0x37765f0();
   input += synapse0x3776630();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x3775ca0() {
   double input = input0x3775ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x3776670() {
   double input = -1.04472;
   input += synapse0x37769b0();
   input += synapse0x37769f0();
   input += synapse0x3776a30();
   input += synapse0x3776a70();
   input += synapse0x3776ab0();
   input += synapse0x3776af0();
   input += synapse0x3776b30();
   input += synapse0x3776b70();
   input += synapse0x3776bb0();
   input += synapse0x3776bf0();
   input += synapse0x3776c30();
   input += synapse0x3776c70();
   input += synapse0x3776cb0();
   input += synapse0x3776cf0();
   input += synapse0x3776d30();
   input += synapse0x3776d70();
   input += synapse0x3776800();
   input += synapse0x3776840();
   input += synapse0x3776ec0();
   input += synapse0x3776f00();
   input += synapse0x3776f40();
   input += synapse0x3776f80();
   input += synapse0x3776fc0();
   input += synapse0x3777000();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x3776670() {
   double input = input0x3776670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x3788cb0() {
   double input = -4.44463;
   input += synapse0x3788ed0();
   input += synapse0x3788f10();
   input += synapse0x3788f50();
   input += synapse0x3788f90();
   input += synapse0x3788fd0();
   input += synapse0x3789010();
   input += synapse0x3789050();
   input += synapse0x3789090();
   input += synapse0x37890d0();
   input += synapse0x3789110();
   input += synapse0x3789150();
   input += synapse0x3789190();
   input += synapse0x37891d0();
   input += synapse0x3789210();
   input += synapse0x3789250();
   input += synapse0x3789290();
   input += synapse0x3777040();
   input += synapse0x3777080();
   input += synapse0x37893e0();
   input += synapse0x3789420();
   input += synapse0x3789460();
   input += synapse0x37894a0();
   input += synapse0x37894e0();
   input += synapse0x3789520();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x3788cb0() {
   double input = input0x3788cb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x3789560() {
   double input = -6.65835;
   input += synapse0x37898a0();
   input += synapse0x37898e0();
   input += synapse0x3789920();
   input += synapse0x3789960();
   input += synapse0x37899a0();
   input += synapse0x37899e0();
   input += synapse0x3789a20();
   input += synapse0x3789a60();
   input += synapse0x3789aa0();
   input += synapse0x3789ae0();
   input += synapse0x3789b20();
   input += synapse0x3789b60();
   input += synapse0x3789ba0();
   input += synapse0x3789be0();
   input += synapse0x3789c20();
   input += synapse0x3789c60();
   input += synapse0x37896f0();
   input += synapse0x3789730();
   input += synapse0x3789db0();
   input += synapse0x3789df0();
   input += synapse0x3789e30();
   input += synapse0x3789e70();
   input += synapse0x3789eb0();
   input += synapse0x3789ef0();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x3789560() {
   double input = input0x3789560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x3789f30() {
   double input = 5.42337;
   input += synapse0x378a270();
   input += synapse0x378a2b0();
   input += synapse0x378a2f0();
   input += synapse0x378a330();
   input += synapse0x378a370();
   input += synapse0x378a3b0();
   input += synapse0x378a3f0();
   input += synapse0x378a430();
   input += synapse0x378a470();
   input += synapse0x378a4b0();
   input += synapse0x378a4f0();
   input += synapse0x378a530();
   input += synapse0x378a570();
   input += synapse0x378a5b0();
   input += synapse0x378a5f0();
   input += synapse0x378a630();
   input += synapse0x378a0c0();
   input += synapse0x378a100();
   input += synapse0x378a780();
   input += synapse0x378a7c0();
   input += synapse0x378a800();
   input += synapse0x378a840();
   input += synapse0x378a880();
   input += synapse0x378a8c0();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x3789f30() {
   double input = input0x3789f30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x378a900() {
   double input = -4.36977;
   input += synapse0x378ac40();
   input += synapse0x378ac80();
   input += synapse0x378acc0();
   input += synapse0x378ad00();
   input += synapse0x378ad40();
   input += synapse0x378ad80();
   input += synapse0x378adc0();
   input += synapse0x378ae00();
   input += synapse0x378ae40();
   input += synapse0x378ae80();
   input += synapse0x378aec0();
   input += synapse0x378af00();
   input += synapse0x378af40();
   input += synapse0x378af80();
   input += synapse0x378afc0();
   input += synapse0x378b000();
   input += synapse0x378aa90();
   input += synapse0x378aad0();
   input += synapse0x378b150();
   input += synapse0x378b190();
   input += synapse0x378b1d0();
   input += synapse0x378b210();
   input += synapse0x378b250();
   input += synapse0x378b290();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x378a900() {
   double input = input0x378a900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x3791b00() {
   double input = -2.39673;
   input += synapse0x352b060();
   input += synapse0x352b0a0();
   input += synapse0x3767c30();
   input += synapse0x3767c70();
   input += synapse0x3769710();
   input += synapse0x3769750();
   input += synapse0x376a4e0();
   input += synapse0x376a520();
   input += synapse0x376aeb0();
   input += synapse0x376aef0();
   input += synapse0x376b880();
   input += synapse0x376b8c0();
   input += synapse0x376c360();
   input += synapse0x376c3a0();
   input += synapse0x376cd30();
   input += synapse0x376cd70();
   input += synapse0x3769e10();
   input += synapse0x3769e50();
   input += synapse0x376e8e0();
   input += synapse0x376e920();
   input += synapse0x376f2b0();
   input += synapse0x376f2f0();
   input += synapse0x376fc80();
   input += synapse0x376fcc0();
   input += synapse0x3770650();
   input += synapse0x3770690();
   input += synapse0x37636e0();
   input += synapse0x3763720();
   input += synapse0x3772740();
   input += synapse0x3772780();
   input += synapse0x3773110();
   input += synapse0x3773150();
   input += synapse0x3773ae0();
   input += synapse0x3773b20();
   input += synapse0x37744b0();
   input += synapse0x37744f0();
   input += synapse0x3774e80();
   input += synapse0x3774ec0();
   input += synapse0x376d9d0();
   input += synapse0x376da10();
   input += synapse0x3777280();
   input += synapse0x37772c0();
   input += synapse0x3777c10();
   input += synapse0x3777c50();
   input += synapse0x37785e0();
   input += synapse0x3778620();
   input += synapse0x3778fb0();
   input += synapse0x3778ff0();
   input += synapse0x3779980();
   input += synapse0x37799c0();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x3791b00() {
   double input = input0x3791b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x3791ea0() {
   double input = -0.337598;
   input += synapse0x377c0c0();
   input += synapse0x377c100();
   input += synapse0x3771680();
   input += synapse0x37716c0();
   input += synapse0x377eca0();
   input += synapse0x377ece0();
   input += synapse0x377f670();
   input += synapse0x377f6b0();
   input += synapse0x3780040();
   input += synapse0x3780080();
   input += synapse0x3780a10();
   input += synapse0x3780a50();
   input += synapse0x37813e0();
   input += synapse0x3781420();
   input += synapse0x3781db0();
   input += synapse0x3781df0();
   input += synapse0x3782780();
   input += synapse0x37827c0();
   input += synapse0x3783150();
   input += synapse0x3783190();
   input += synapse0x3783d30();
   input += synapse0x3783d70();
   input += synapse0x3784700();
   input += synapse0x3784740();
   input += synapse0x3775580();
   input += synapse0x37755c0();
   input += synapse0x3775f50();
   input += synapse0x3775f90();
   input += synapse0x3776920();
   input += synapse0x3776960();
   input += synapse0x3788e40();
   input += synapse0x3788e80();
   input += synapse0x3789810();
   input += synapse0x3789850();
   input += synapse0x378a1e0();
   input += synapse0x378a220();
   input += synapse0x378abb0();
   input += synapse0x378abf0();
   input += synapse0x3765a20();
   input += synapse0x3765a60();
   input += synapse0x377a350();
   input += synapse0x377a390();
   input += synapse0x378b2d0();
   input += synapse0x378b310();
   input += synapse0x378b350();
   input += synapse0x378b390();
   input += synapse0x3792240();
   input += synapse0x3792280();
   input += synapse0x37922c0();
   input += synapse0x3792300();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x3791ea0() {
   double input = input0x3791ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x3792340() {
   double input = -0.320605;
   input += synapse0x3792680();
   input += synapse0x37926c0();
   input += synapse0x3792700();
   input += synapse0x3792740();
   input += synapse0x3792780();
   input += synapse0x37927c0();
   input += synapse0x3792800();
   input += synapse0x3792840();
   input += synapse0x3792880();
   input += synapse0x37928c0();
   input += synapse0x3792900();
   input += synapse0x3792940();
   input += synapse0x3792980();
   input += synapse0x37929c0();
   input += synapse0x3792a00();
   input += synapse0x3792a40();
   input += synapse0x37924d0();
   input += synapse0x3792510();
   input += synapse0x3792b90();
   input += synapse0x3792bd0();
   input += synapse0x3792c10();
   input += synapse0x3792c50();
   input += synapse0x3792c90();
   input += synapse0x3792cd0();
   input += synapse0x3792d10();
   input += synapse0x3792d50();
   input += synapse0x3792d90();
   input += synapse0x3792dd0();
   input += synapse0x3792e10();
   input += synapse0x3792e50();
   input += synapse0x3792e90();
   input += synapse0x3792ed0();
   input += synapse0x3792a80();
   input += synapse0x3792ac0();
   input += synapse0x3792b00();
   input += synapse0x3792b40();
   input += synapse0x3793120();
   input += synapse0x3793160();
   input += synapse0x37931a0();
   input += synapse0x37931e0();
   input += synapse0x3793220();
   input += synapse0x3793260();
   input += synapse0x37932a0();
   input += synapse0x37932e0();
   input += synapse0x3793320();
   input += synapse0x3793360();
   input += synapse0x37933a0();
   input += synapse0x37933e0();
   input += synapse0x3793420();
   input += synapse0x3793460();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x3792340() {
   double input = input0x3792340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x37934a0() {
   double input = 0.391522;
   input += synapse0x37937e0();
   input += synapse0x3793820();
   input += synapse0x3793860();
   input += synapse0x37938a0();
   input += synapse0x37938e0();
   input += synapse0x3793920();
   input += synapse0x3793960();
   input += synapse0x37939a0();
   input += synapse0x37939e0();
   input += synapse0x3793a20();
   input += synapse0x3793a60();
   input += synapse0x3793aa0();
   input += synapse0x3793ae0();
   input += synapse0x3793b20();
   input += synapse0x3793b60();
   input += synapse0x3793ba0();
   input += synapse0x3793630();
   input += synapse0x3793670();
   input += synapse0x3793cf0();
   input += synapse0x3793d30();
   input += synapse0x3793d70();
   input += synapse0x3793db0();
   input += synapse0x3793df0();
   input += synapse0x3793e30();
   input += synapse0x3793e70();
   input += synapse0x3793eb0();
   input += synapse0x3793ef0();
   input += synapse0x3793f30();
   input += synapse0x3793f70();
   input += synapse0x3793fb0();
   input += synapse0x3793ff0();
   input += synapse0x3794030();
   input += synapse0x3793be0();
   input += synapse0x3793c20();
   input += synapse0x3793c60();
   input += synapse0x3793ca0();
   input += synapse0x3794280();
   input += synapse0x37942c0();
   input += synapse0x3794300();
   input += synapse0x3794340();
   input += synapse0x3794380();
   input += synapse0x37943c0();
   input += synapse0x3794400();
   input += synapse0x3794440();
   input += synapse0x3794480();
   input += synapse0x37944c0();
   input += synapse0x3794500();
   input += synapse0x3794540();
   input += synapse0x3794580();
   input += synapse0x37945c0();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x37934a0() {
   double input = input0x37934a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x3794600() {
   double input = 0.145388;
   input += synapse0x3794940();
   input += synapse0x3794980();
   input += synapse0x37949c0();
   input += synapse0x3794a00();
   input += synapse0x3794a40();
   input += synapse0x3794a80();
   input += synapse0x3794ac0();
   input += synapse0x3794b00();
   input += synapse0x3794b40();
   input += synapse0x3794b80();
   input += synapse0x3794bc0();
   input += synapse0x3794c00();
   input += synapse0x3794c40();
   input += synapse0x3794c80();
   input += synapse0x3794cc0();
   input += synapse0x3794d00();
   input += synapse0x3794790();
   input += synapse0x37947d0();
   input += synapse0x3794e50();
   input += synapse0x3794e90();
   input += synapse0x3794ed0();
   input += synapse0x3794f10();
   input += synapse0x3794f50();
   input += synapse0x3794f90();
   input += synapse0x3794fd0();
   input += synapse0x3795010();
   input += synapse0x3795050();
   input += synapse0x3795090();
   input += synapse0x37950d0();
   input += synapse0x3795110();
   input += synapse0x3795150();
   input += synapse0x3795190();
   input += synapse0x3794d40();
   input += synapse0x3794d80();
   input += synapse0x3794dc0();
   input += synapse0x3794e00();
   input += synapse0x37953e0();
   input += synapse0x3795420();
   input += synapse0x3795460();
   input += synapse0x37954a0();
   input += synapse0x37954e0();
   input += synapse0x3795520();
   input += synapse0x3795560();
   input += synapse0x37955a0();
   input += synapse0x37955e0();
   input += synapse0x3795620();
   input += synapse0x3795660();
   input += synapse0x37956a0();
   input += synapse0x37956e0();
   input += synapse0x3795720();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x3794600() {
   double input = input0x3794600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_nn_chi3_charge1p::input0x3795760() {
   double input = 11.4831;
   input += synapse0x3795980();
   input += synapse0x37959c0();
   input += synapse0x3795a00();
   input += synapse0x3795a40();
   input += synapse0x3795a80();
   return input;
}

double NNfunction_nn_chi3_charge1p::neuron0x3795760() {
   double input = input0x3795760();
   return (input * 1)+0;
}

double NNfunction_nn_chi3_charge1p::synapse0x3765ab0() {
   return (neuron0x37607d0()*0.0537001);
}

double NNfunction_nn_chi3_charge1p::synapse0x3765af0() {
   return (neuron0x3760a80()*-0.0343275);
}

double NNfunction_nn_chi3_charge1p::synapse0x3765b30() {
   return (neuron0x3760dc0()*-7.08732);
}

double NNfunction_nn_chi3_charge1p::synapse0x3765b70() {
   return (neuron0x3761100()*0.0303676);
}

double NNfunction_nn_chi3_charge1p::synapse0x3765bb0() {
   return (neuron0x3761440()*-0.000322831);
}

double NNfunction_nn_chi3_charge1p::synapse0x3765bf0() {
   return (neuron0x3761780()*-0.0336212);
}

double NNfunction_nn_chi3_charge1p::synapse0x3765c30() {
   return (neuron0x3761ac0()*-0.0133387);
}

double NNfunction_nn_chi3_charge1p::synapse0x3765c70() {
   return (neuron0x3761e00()*-0.0825271);
}

double NNfunction_nn_chi3_charge1p::synapse0x3765cb0() {
   return (neuron0x3762140()*-0.0276487);
}

double NNfunction_nn_chi3_charge1p::synapse0x3765cf0() {
   return (neuron0x3762480()*0.0147566);
}

double NNfunction_nn_chi3_charge1p::synapse0x3765d30() {
   return (neuron0x37627c0()*0.0547273);
}

double NNfunction_nn_chi3_charge1p::synapse0x3765d70() {
   return (neuron0x3762b00()*4.21439);
}

double NNfunction_nn_chi3_charge1p::synapse0x3765db0() {
   return (neuron0x3762e40()*0.0155841);
}

double NNfunction_nn_chi3_charge1p::synapse0x3765df0() {
   return (neuron0x3763180()*-0.0374003);
}

double NNfunction_nn_chi3_charge1p::synapse0x3765e30() {
   return (neuron0x37634c0()*-0.00897389);
}

double NNfunction_nn_chi3_charge1p::synapse0x3765e70() {
   return (neuron0x3763800()*0.0296939);
}

double NNfunction_nn_chi3_charge1p::synapse0x3765900() {
   return (neuron0x3763b40()*-0.00248349);
}

double NNfunction_nn_chi3_charge1p::synapse0x3765940() {
   return (neuron0x37640a0()*0.0669236);
}

double NNfunction_nn_chi3_charge1p::synapse0x26a2eb0() {
   return (neuron0x37642c0()*0.0368829);
}

double NNfunction_nn_chi3_charge1p::synapse0x26a2ef0() {
   return (neuron0x3764600()*0.00295292);
}

double NNfunction_nn_chi3_charge1p::synapse0x3765fc0() {
   return (neuron0x3764940()*0.0250599);
}

double NNfunction_nn_chi3_charge1p::synapse0x3766000() {
   return (neuron0x3764c80()*-0.0283937);
}

double NNfunction_nn_chi3_charge1p::synapse0x3766040() {
   return (neuron0x3764fc0()*0.00721801);
}

double NNfunction_nn_chi3_charge1p::synapse0x3766080() {
   return (neuron0x3765300()*-0.367494);
}

double NNfunction_nn_chi3_charge1p::synapse0x3766400() {
   return (neuron0x37607d0()*0.0155729);
}

double NNfunction_nn_chi3_charge1p::synapse0x3766440() {
   return (neuron0x3760a80()*-0.0113581);
}

double NNfunction_nn_chi3_charge1p::synapse0x3766480() {
   return (neuron0x3760dc0()*0.101412);
}

double NNfunction_nn_chi3_charge1p::synapse0x37664c0() {
   return (neuron0x3761100()*0.0121903);
}

double NNfunction_nn_chi3_charge1p::synapse0x3766500() {
   return (neuron0x3761440()*0.0792541);
}

double NNfunction_nn_chi3_charge1p::synapse0x3766540() {
   return (neuron0x3761780()*-0.0121413);
}

double NNfunction_nn_chi3_charge1p::synapse0x3766580() {
   return (neuron0x3761ac0()*0.0133152);
}

double NNfunction_nn_chi3_charge1p::synapse0x37665c0() {
   return (neuron0x3761e00()*-0.0219316);
}

double NNfunction_nn_chi3_charge1p::synapse0x3766600() {
   return (neuron0x3762140()*0.00586917);
}

double NNfunction_nn_chi3_charge1p::synapse0x3765eb0() {
   return (neuron0x3762480()*-0.0052618);
}

double NNfunction_nn_chi3_charge1p::synapse0x3765ef0() {
   return (neuron0x37627c0()*-0.00997416);
}

double NNfunction_nn_chi3_charge1p::synapse0x3765f30() {
   return (neuron0x3762b00()*0.0336371);
}

double NNfunction_nn_chi3_charge1p::synapse0x3765f70() {
   return (neuron0x3762e40()*0.0256858);
}

double NNfunction_nn_chi3_charge1p::synapse0x3766850() {
   return (neuron0x3763180()*-0.0347691);
}

double NNfunction_nn_chi3_charge1p::synapse0x3766890() {
   return (neuron0x37634c0()*0.00812069);
}

double NNfunction_nn_chi3_charge1p::synapse0x37668d0() {
   return (neuron0x3763800()*-0.00854694);
}

double NNfunction_nn_chi3_charge1p::synapse0x3766250() {
   return (neuron0x3763b40()*-0.0130689);
}

double NNfunction_nn_chi3_charge1p::synapse0x3766290() {
   return (neuron0x37640a0()*0.00379313);
}

double NNfunction_nn_chi3_charge1p::synapse0x3766a20() {
   return (neuron0x37642c0()*-0.00761074);
}

double NNfunction_nn_chi3_charge1p::synapse0x3766a60() {
   return (neuron0x3764600()*-0.0240059);
}

double NNfunction_nn_chi3_charge1p::synapse0x3766aa0() {
   return (neuron0x3764940()*-0.0357611);
}

double NNfunction_nn_chi3_charge1p::synapse0x3766ae0() {
   return (neuron0x3764c80()*-0.00182157);
}

double NNfunction_nn_chi3_charge1p::synapse0x3766b20() {
   return (neuron0x3764fc0()*0.0329994);
}

double NNfunction_nn_chi3_charge1p::synapse0x3766b60() {
   return (neuron0x3765300()*1.0448);
}

double NNfunction_nn_chi3_charge1p::synapse0x3766ee0() {
   return (neuron0x37607d0()*-0.0515375);
}

double NNfunction_nn_chi3_charge1p::synapse0x3766f20() {
   return (neuron0x3760a80()*-0.0154419);
}

double NNfunction_nn_chi3_charge1p::synapse0x3766f60() {
   return (neuron0x3760dc0()*-0.159221);
}

double NNfunction_nn_chi3_charge1p::synapse0x3766fa0() {
   return (neuron0x3761100()*0.0123141);
}

double NNfunction_nn_chi3_charge1p::synapse0x3766fe0() {
   return (neuron0x3761440()*-0.0212801);
}

double NNfunction_nn_chi3_charge1p::synapse0x3767020() {
   return (neuron0x3761780()*-0.00150351);
}

double NNfunction_nn_chi3_charge1p::synapse0x3767060() {
   return (neuron0x3761ac0()*0.00284225);
}

double NNfunction_nn_chi3_charge1p::synapse0x37670a0() {
   return (neuron0x3761e00()*0.0039864);
}

double NNfunction_nn_chi3_charge1p::synapse0x37670e0() {
   return (neuron0x3762140()*-0.0209244);
}

double NNfunction_nn_chi3_charge1p::synapse0x3767120() {
   return (neuron0x3762480()*0.0185851);
}

double NNfunction_nn_chi3_charge1p::synapse0x3767160() {
   return (neuron0x37627c0()*-0.00132035);
}

double NNfunction_nn_chi3_charge1p::synapse0x37671a0() {
   return (neuron0x3762b00()*0.166362);
}

double NNfunction_nn_chi3_charge1p::synapse0x37671e0() {
   return (neuron0x3762e40()*0.024388);
}

double NNfunction_nn_chi3_charge1p::synapse0x3767220() {
   return (neuron0x3763180()*-0.0134617);
}

double NNfunction_nn_chi3_charge1p::synapse0x3767260() {
   return (neuron0x37634c0()*-0.000965472);
}

double NNfunction_nn_chi3_charge1p::synapse0x37672a0() {
   return (neuron0x3763800()*-0.00318586);
}

double NNfunction_nn_chi3_charge1p::synapse0x3766d30() {
   return (neuron0x3763b40()*-0.00798453);
}

double NNfunction_nn_chi3_charge1p::synapse0x3766d70() {
   return (neuron0x37640a0()*0.000506765);
}

double NNfunction_nn_chi3_charge1p::synapse0x26a6920() {
   return (neuron0x37642c0()*0.0030493);
}

double NNfunction_nn_chi3_charge1p::synapse0x352a850() {
   return (neuron0x3764600()*-0.00833231);
}

double NNfunction_nn_chi3_charge1p::synapse0x352a890() {
   return (neuron0x3764940()*0.00202314);
}

double NNfunction_nn_chi3_charge1p::synapse0x37691e0() {
   return (neuron0x3764c80()*0.000350919);
}

double NNfunction_nn_chi3_charge1p::synapse0x3769220() {
   return (neuron0x3764fc0()*0.00775466);
}

double NNfunction_nn_chi3_charge1p::synapse0x3760510() {
   return (neuron0x3765300()*3.07231);
}

double NNfunction_nn_chi3_charge1p::synapse0x37605e0() {
   return (neuron0x37607d0()*-0.0136256);
}

double NNfunction_nn_chi3_charge1p::synapse0x352b0f0() {
   return (neuron0x3760a80()*-0.0397226);
}

double NNfunction_nn_chi3_charge1p::synapse0x37667d0() {
   return (neuron0x3760dc0()*0.212667);
}

double NNfunction_nn_chi3_charge1p::synapse0x3766810() {
   return (neuron0x3761100()*0.0273723);
}

double NNfunction_nn_chi3_charge1p::synapse0x37673f0() {
   return (neuron0x3761440()*-0.0153148);
}

double NNfunction_nn_chi3_charge1p::synapse0x3767430() {
   return (neuron0x3761780()*-0.0196285);
}

double NNfunction_nn_chi3_charge1p::synapse0x3767470() {
   return (neuron0x3761ac0()*0.0198944);
}

double NNfunction_nn_chi3_charge1p::synapse0x37674b0() {
   return (neuron0x3761e00()*0.00460113);
}

double NNfunction_nn_chi3_charge1p::synapse0x37674f0() {
   return (neuron0x3762140()*-0.019273);
}

double NNfunction_nn_chi3_charge1p::synapse0x3767530() {
   return (neuron0x3762480()*0.0255009);
}

double NNfunction_nn_chi3_charge1p::synapse0x3767570() {
   return (neuron0x37627c0()*0.000305404);
}

double NNfunction_nn_chi3_charge1p::synapse0x37675b0() {
   return (neuron0x3762b00()*3.1281);
}

double NNfunction_nn_chi3_charge1p::synapse0x37675f0() {
   return (neuron0x3762e40()*0.0130985);
}

double NNfunction_nn_chi3_charge1p::synapse0x3767630() {
   return (neuron0x3763180()*-0.000468933);
}

double NNfunction_nn_chi3_charge1p::synapse0x3767670() {
   return (neuron0x37634c0()*-0.0111844);
}

double NNfunction_nn_chi3_charge1p::synapse0x37676b0() {
   return (neuron0x3763800()*-0.0229969);
}

double NNfunction_nn_chi3_charge1p::synapse0x3760550() {
   return (neuron0x3763b40()*-0.00579012);
}

double NNfunction_nn_chi3_charge1p::synapse0x3760590() {
   return (neuron0x37640a0()*-0.00252689);
}

double NNfunction_nn_chi3_charge1p::synapse0x3767800() {
   return (neuron0x37642c0()*0.0110037);
}

double NNfunction_nn_chi3_charge1p::synapse0x3767840() {
   return (neuron0x3764600()*-0.00629061);
}

double NNfunction_nn_chi3_charge1p::synapse0x3767880() {
   return (neuron0x3764940()*-0.00448196);
}

double NNfunction_nn_chi3_charge1p::synapse0x37678c0() {
   return (neuron0x3764c80()*0.00526098);
}

double NNfunction_nn_chi3_charge1p::synapse0x3767900() {
   return (neuron0x3764fc0()*-0.0249862);
}

double NNfunction_nn_chi3_charge1p::synapse0x3767940() {
   return (neuron0x3765300()*0.647194);
}

double NNfunction_nn_chi3_charge1p::synapse0x3767cc0() {
   return (neuron0x37607d0()*0.176551);
}

double NNfunction_nn_chi3_charge1p::synapse0x3767d00() {
   return (neuron0x3760a80()*-0.0621798);
}

double NNfunction_nn_chi3_charge1p::synapse0x3767d40() {
   return (neuron0x3760dc0()*0.963758);
}

double NNfunction_nn_chi3_charge1p::synapse0x3767d80() {
   return (neuron0x3761100()*-0.111474);
}

double NNfunction_nn_chi3_charge1p::synapse0x3767dc0() {
   return (neuron0x3761440()*0.906005);
}

double NNfunction_nn_chi3_charge1p::synapse0x3767e00() {
   return (neuron0x3761780()*0.573061);
}

double NNfunction_nn_chi3_charge1p::synapse0x3767e40() {
   return (neuron0x3761ac0()*-0.910539);
}

double NNfunction_nn_chi3_charge1p::synapse0x3767e80() {
   return (neuron0x3761e00()*0.0922274);
}

double NNfunction_nn_chi3_charge1p::synapse0x3767ec0() {
   return (neuron0x3762140()*-1.00967);
}

double NNfunction_nn_chi3_charge1p::synapse0x3767f00() {
   return (neuron0x3762480()*-0.0271508);
}

double NNfunction_nn_chi3_charge1p::synapse0x3767f40() {
   return (neuron0x37627c0()*-0.452913);
}

double NNfunction_nn_chi3_charge1p::synapse0x3767f80() {
   return (neuron0x3762b00()*0.626888);
}

double NNfunction_nn_chi3_charge1p::synapse0x3767fc0() {
   return (neuron0x3762e40()*0.29992);
}

double NNfunction_nn_chi3_charge1p::synapse0x3768000() {
   return (neuron0x3763180()*-0.0497292);
}

double NNfunction_nn_chi3_charge1p::synapse0x3768040() {
   return (neuron0x37634c0()*0.249698);
}

double NNfunction_nn_chi3_charge1p::synapse0x3768080() {
   return (neuron0x3763800()*0.124004);
}

double NNfunction_nn_chi3_charge1p::synapse0x37681d0() {
   return (neuron0x3763b40()*-0.219932);
}

double NNfunction_nn_chi3_charge1p::synapse0x3767b10() {
   return (neuron0x37640a0()*0.0713923);
}

double NNfunction_nn_chi3_charge1p::synapse0x3767b50() {
   return (neuron0x37642c0()*0.187206);
}

double NNfunction_nn_chi3_charge1p::synapse0x3769320() {
   return (neuron0x3764600()*0.898981);
}

double NNfunction_nn_chi3_charge1p::synapse0x3769360() {
   return (neuron0x3764940()*0.0713694);
}

double NNfunction_nn_chi3_charge1p::synapse0x37693a0() {
   return (neuron0x3764c80()*-0.875232);
}

double NNfunction_nn_chi3_charge1p::synapse0x37693e0() {
   return (neuron0x3764fc0()*0.885629);
}

double NNfunction_nn_chi3_charge1p::synapse0x3769420() {
   return (neuron0x3765300()*-1.29425);
}

double NNfunction_nn_chi3_charge1p::synapse0x37697a0() {
   return (neuron0x37607d0()*-0.0413892);
}

double NNfunction_nn_chi3_charge1p::synapse0x37697e0() {
   return (neuron0x3760a80()*0.00495351);
}

double NNfunction_nn_chi3_charge1p::synapse0x3769820() {
   return (neuron0x3760dc0()*7.21129);
}

double NNfunction_nn_chi3_charge1p::synapse0x3769860() {
   return (neuron0x3761100()*-0.0158044);
}

double NNfunction_nn_chi3_charge1p::synapse0x37698a0() {
   return (neuron0x3761440()*0.0188772);
}

double NNfunction_nn_chi3_charge1p::synapse0x37698e0() {
   return (neuron0x3761780()*0.00907844);
}

double NNfunction_nn_chi3_charge1p::synapse0x3769920() {
   return (neuron0x3761ac0()*0.0125204);
}

double NNfunction_nn_chi3_charge1p::synapse0x3769960() {
   return (neuron0x3761e00()*0.082542);
}

double NNfunction_nn_chi3_charge1p::synapse0x37699a0() {
   return (neuron0x3762140()*0.0125482);
}

double NNfunction_nn_chi3_charge1p::synapse0x352abc0() {
   return (neuron0x3762480()*0.00832468);
}

double NNfunction_nn_chi3_charge1p::synapse0x352ac00() {
   return (neuron0x37627c0()*-0.0665654);
}

double NNfunction_nn_chi3_charge1p::synapse0x352ac40() {
   return (neuron0x3762b00()*-4.77598);
}

double NNfunction_nn_chi3_charge1p::synapse0x352ac80() {
   return (neuron0x3762e40()*-0.0188456);
}

double NNfunction_nn_chi3_charge1p::synapse0x352acc0() {
   return (neuron0x3763180()*0.0190933);
}

double NNfunction_nn_chi3_charge1p::synapse0x352ad00() {
   return (neuron0x37634c0()*-0.00992396);
}

double NNfunction_nn_chi3_charge1p::synapse0x352ad40() {
   return (neuron0x3763800()*-0.0528951);
}

double NNfunction_nn_chi3_charge1p::synapse0x37695f0() {
   return (neuron0x3763b40()*0.0178089);
}

double NNfunction_nn_chi3_charge1p::synapse0x3769630() {
   return (neuron0x37640a0()*-0.107236);
}

double NNfunction_nn_chi3_charge1p::synapse0x352ae90() {
   return (neuron0x37642c0()*-0.0614237);
}

double NNfunction_nn_chi3_charge1p::synapse0x352aed0() {
   return (neuron0x3764600()*-0.000970131);
}

double NNfunction_nn_chi3_charge1p::synapse0x352af10() {
   return (neuron0x3764940()*-0.0465987);
}

double NNfunction_nn_chi3_charge1p::synapse0x352af50() {
   return (neuron0x3764c80()*0.0317715);
}

double NNfunction_nn_chi3_charge1p::synapse0x352af90() {
   return (neuron0x3764fc0()*0.00180318);
}

double NNfunction_nn_chi3_charge1p::synapse0x376a1f0() {
   return (neuron0x3765300()*-0.00782332);
}

double NNfunction_nn_chi3_charge1p::synapse0x376a570() {
   return (neuron0x37607d0()*-2.86293);
}

double NNfunction_nn_chi3_charge1p::synapse0x376a5b0() {
   return (neuron0x3760a80()*0.0250714);
}

double NNfunction_nn_chi3_charge1p::synapse0x376a5f0() {
   return (neuron0x3760dc0()*-0.752732);
}

double NNfunction_nn_chi3_charge1p::synapse0x376a630() {
   return (neuron0x3761100()*0.140108);
}

double NNfunction_nn_chi3_charge1p::synapse0x376a670() {
   return (neuron0x3761440()*-0.128887);
}

double NNfunction_nn_chi3_charge1p::synapse0x376a6b0() {
   return (neuron0x3761780()*-0.101914);
}

double NNfunction_nn_chi3_charge1p::synapse0x376a6f0() {
   return (neuron0x3761ac0()*-0.0948943);
}

double NNfunction_nn_chi3_charge1p::synapse0x376a730() {
   return (neuron0x3761e00()*-0.0357493);
}

double NNfunction_nn_chi3_charge1p::synapse0x376a770() {
   return (neuron0x3762140()*-0.010386);
}

double NNfunction_nn_chi3_charge1p::synapse0x376a7b0() {
   return (neuron0x3762480()*-0.0677739);
}

double NNfunction_nn_chi3_charge1p::synapse0x376a7f0() {
   return (neuron0x37627c0()*-0.135817);
}

double NNfunction_nn_chi3_charge1p::synapse0x376a830() {
   return (neuron0x3762b00()*0.0341672);
}

double NNfunction_nn_chi3_charge1p::synapse0x376a870() {
   return (neuron0x3762e40()*0.000538519);
}

double NNfunction_nn_chi3_charge1p::synapse0x376a8b0() {
   return (neuron0x3763180()*0.0829386);
}

double NNfunction_nn_chi3_charge1p::synapse0x376a8f0() {
   return (neuron0x37634c0()*-0.0195046);
}

double NNfunction_nn_chi3_charge1p::synapse0x376a930() {
   return (neuron0x3763800()*0.0540777);
}

double NNfunction_nn_chi3_charge1p::synapse0x376a3c0() {
   return (neuron0x3763b40()*-0.0903355);
}

double NNfunction_nn_chi3_charge1p::synapse0x376a400() {
   return (neuron0x37640a0()*-0.0582361);
}

double NNfunction_nn_chi3_charge1p::synapse0x376aa80() {
   return (neuron0x37642c0()*-0.000796381);
}

double NNfunction_nn_chi3_charge1p::synapse0x376aac0() {
   return (neuron0x3764600()*-0.00440033);
}

double NNfunction_nn_chi3_charge1p::synapse0x376ab00() {
   return (neuron0x3764940()*-0.124734);
}

double NNfunction_nn_chi3_charge1p::synapse0x376ab40() {
   return (neuron0x3764c80()*-0.0507492);
}

double NNfunction_nn_chi3_charge1p::synapse0x376ab80() {
   return (neuron0x3764fc0()*0.0183087);
}

double NNfunction_nn_chi3_charge1p::synapse0x376abc0() {
   return (neuron0x3765300()*-0.154353);
}

double NNfunction_nn_chi3_charge1p::synapse0x376af40() {
   return (neuron0x37607d0()*0.0737449);
}

double NNfunction_nn_chi3_charge1p::synapse0x376af80() {
   return (neuron0x3760a80()*0.159392);
}

double NNfunction_nn_chi3_charge1p::synapse0x376afc0() {
   return (neuron0x3760dc0()*1.96759);
}

double NNfunction_nn_chi3_charge1p::synapse0x376b000() {
   return (neuron0x3761100()*0.161414);
}

double NNfunction_nn_chi3_charge1p::synapse0x376b040() {
   return (neuron0x3761440()*-0.0233919);
}

double NNfunction_nn_chi3_charge1p::synapse0x376b080() {
   return (neuron0x3761780()*0.0461025);
}

double NNfunction_nn_chi3_charge1p::synapse0x376b0c0() {
   return (neuron0x3761ac0()*0.00795257);
}

double NNfunction_nn_chi3_charge1p::synapse0x376b100() {
   return (neuron0x3761e00()*0.0223038);
}

double NNfunction_nn_chi3_charge1p::synapse0x376b140() {
   return (neuron0x3762140()*0.065238);
}

double NNfunction_nn_chi3_charge1p::synapse0x376b180() {
   return (neuron0x3762480()*-0.0798086);
}

double NNfunction_nn_chi3_charge1p::synapse0x376b1c0() {
   return (neuron0x37627c0()*-0.0302507);
}

double NNfunction_nn_chi3_charge1p::synapse0x376b200() {
   return (neuron0x3762b00()*4.73928);
}

double NNfunction_nn_chi3_charge1p::synapse0x376b240() {
   return (neuron0x3762e40()*-0.00645378);
}

double NNfunction_nn_chi3_charge1p::synapse0x376b280() {
   return (neuron0x3763180()*0.0494152);
}

double NNfunction_nn_chi3_charge1p::synapse0x376b2c0() {
   return (neuron0x37634c0()*0.0267415);
}

double NNfunction_nn_chi3_charge1p::synapse0x376b300() {
   return (neuron0x3763800()*0.000449382);
}

double NNfunction_nn_chi3_charge1p::synapse0x376ad90() {
   return (neuron0x3763b40()*0.016395);
}

double NNfunction_nn_chi3_charge1p::synapse0x376add0() {
   return (neuron0x37640a0()*-0.00499096);
}

double NNfunction_nn_chi3_charge1p::synapse0x376b450() {
   return (neuron0x37642c0()*0.00411293);
}

double NNfunction_nn_chi3_charge1p::synapse0x376b490() {
   return (neuron0x3764600()*0.0125812);
}

double NNfunction_nn_chi3_charge1p::synapse0x376b4d0() {
   return (neuron0x3764940()*-0.028045);
}

double NNfunction_nn_chi3_charge1p::synapse0x376b510() {
   return (neuron0x3764c80()*0.0572853);
}

double NNfunction_nn_chi3_charge1p::synapse0x376b550() {
   return (neuron0x3764fc0()*-0.00930951);
}

double NNfunction_nn_chi3_charge1p::synapse0x376b590() {
   return (neuron0x3765300()*-0.101245);
}

double NNfunction_nn_chi3_charge1p::synapse0x3763f90() {
   return (neuron0x37607d0()*-0.0807256);
}

double NNfunction_nn_chi3_charge1p::synapse0x3763fd0() {
   return (neuron0x3760a80()*0.0498376);
}

double NNfunction_nn_chi3_charge1p::synapse0x3764010() {
   return (neuron0x3760dc0()*-0.0376143);
}

double NNfunction_nn_chi3_charge1p::synapse0x3764050() {
   return (neuron0x3761100()*-0.0513268);
}

double NNfunction_nn_chi3_charge1p::synapse0x376bb20() {
   return (neuron0x3761440()*-0.196393);
}

double NNfunction_nn_chi3_charge1p::synapse0x376bb60() {
   return (neuron0x3761780()*0.0170878);
}

double NNfunction_nn_chi3_charge1p::synapse0x376bba0() {
   return (neuron0x3761ac0()*-0.045365);
}

double NNfunction_nn_chi3_charge1p::synapse0x376bbe0() {
   return (neuron0x3761e00()*0.0207088);
}

double NNfunction_nn_chi3_charge1p::synapse0x376bc20() {
   return (neuron0x3762140()*-0.00784633);
}

double NNfunction_nn_chi3_charge1p::synapse0x376bc60() {
   return (neuron0x3762480()*0.0323868);
}

double NNfunction_nn_chi3_charge1p::synapse0x376bca0() {
   return (neuron0x37627c0()*0.0463608);
}

double NNfunction_nn_chi3_charge1p::synapse0x376bce0() {
   return (neuron0x3762b00()*0.0848186);
}

double NNfunction_nn_chi3_charge1p::synapse0x376bd20() {
   return (neuron0x3762e40()*-0.0244755);
}

double NNfunction_nn_chi3_charge1p::synapse0x376bd60() {
   return (neuron0x3763180()*0.130233);
}

double NNfunction_nn_chi3_charge1p::synapse0x376bda0() {
   return (neuron0x37634c0()*-0.0318703);
}

double NNfunction_nn_chi3_charge1p::synapse0x376bde0() {
   return (neuron0x3763800()*-0.0280835);
}

double NNfunction_nn_chi3_charge1p::synapse0x376b760() {
   return (neuron0x3763b40()*0.0930995);
}

double NNfunction_nn_chi3_charge1p::synapse0x376b7a0() {
   return (neuron0x37640a0()*-0.0454889);
}

double NNfunction_nn_chi3_charge1p::synapse0x376bf30() {
   return (neuron0x37642c0()*0.0410445);
}

double NNfunction_nn_chi3_charge1p::synapse0x376bf70() {
   return (neuron0x3764600()*0.0253586);
}

double NNfunction_nn_chi3_charge1p::synapse0x376bfb0() {
   return (neuron0x3764940()*0.129971);
}

double NNfunction_nn_chi3_charge1p::synapse0x376bff0() {
   return (neuron0x3764c80()*-0.0128004);
}

double NNfunction_nn_chi3_charge1p::synapse0x376c030() {
   return (neuron0x3764fc0()*-0.0668607);
}

double NNfunction_nn_chi3_charge1p::synapse0x376c070() {
   return (neuron0x3765300()*0.320447);
}

double NNfunction_nn_chi3_charge1p::synapse0x376c3f0() {
   return (neuron0x37607d0()*0.110841);
}

double NNfunction_nn_chi3_charge1p::synapse0x376c430() {
   return (neuron0x3760a80()*-0.0524755);
}

double NNfunction_nn_chi3_charge1p::synapse0x376c470() {
   return (neuron0x3760dc0()*0.186637);
}

double NNfunction_nn_chi3_charge1p::synapse0x376c4b0() {
   return (neuron0x3761100()*0.0824002);
}

double NNfunction_nn_chi3_charge1p::synapse0x376c4f0() {
   return (neuron0x3761440()*0.275448);
}

double NNfunction_nn_chi3_charge1p::synapse0x376c530() {
   return (neuron0x3761780()*-0.0328856);
}

double NNfunction_nn_chi3_charge1p::synapse0x376c570() {
   return (neuron0x3761ac0()*0.0665084);
}

double NNfunction_nn_chi3_charge1p::synapse0x376c5b0() {
   return (neuron0x3761e00()*-0.006655);
}

double NNfunction_nn_chi3_charge1p::synapse0x376c5f0() {
   return (neuron0x3762140()*0.0093882);
}

double NNfunction_nn_chi3_charge1p::synapse0x376c630() {
   return (neuron0x3762480()*-0.0756965);
}

double NNfunction_nn_chi3_charge1p::synapse0x376c670() {
   return (neuron0x37627c0()*-0.0824639);
}

double NNfunction_nn_chi3_charge1p::synapse0x376c6b0() {
   return (neuron0x3762b00()*-0.241645);
}

double NNfunction_nn_chi3_charge1p::synapse0x376c6f0() {
   return (neuron0x3762e40()*-0.000615075);
}

double NNfunction_nn_chi3_charge1p::synapse0x376c730() {
   return (neuron0x3763180()*-0.273471);
}

double NNfunction_nn_chi3_charge1p::synapse0x376c770() {
   return (neuron0x37634c0()*0.0387887);
}

double NNfunction_nn_chi3_charge1p::synapse0x376c7b0() {
   return (neuron0x3763800()*0.0570869);
}

double NNfunction_nn_chi3_charge1p::synapse0x376c240() {
   return (neuron0x3763b40()*-0.205086);
}

double NNfunction_nn_chi3_charge1p::synapse0x376c280() {
   return (neuron0x37640a0()*0.0704513);
}

double NNfunction_nn_chi3_charge1p::synapse0x376c900() {
   return (neuron0x37642c0()*-0.0658436);
}

double NNfunction_nn_chi3_charge1p::synapse0x376c940() {
   return (neuron0x3764600()*-0.00277796);
}

double NNfunction_nn_chi3_charge1p::synapse0x376c980() {
   return (neuron0x3764940()*-0.254421);
}

double NNfunction_nn_chi3_charge1p::synapse0x376c9c0() {
   return (neuron0x3764c80()*0.023637);
}

double NNfunction_nn_chi3_charge1p::synapse0x376ca00() {
   return (neuron0x3764fc0()*0.080935);
}

double NNfunction_nn_chi3_charge1p::synapse0x376ca40() {
   return (neuron0x3765300()*0.195326);
}

double NNfunction_nn_chi3_charge1p::synapse0x376cdc0() {
   return (neuron0x37607d0()*0.300439);
}

double NNfunction_nn_chi3_charge1p::synapse0x376ce00() {
   return (neuron0x3760a80()*-0.216401);
}

double NNfunction_nn_chi3_charge1p::synapse0x376ce40() {
   return (neuron0x3760dc0()*-0.0719209);
}

double NNfunction_nn_chi3_charge1p::synapse0x376ce80() {
   return (neuron0x3761100()*-0.1282);
}

double NNfunction_nn_chi3_charge1p::synapse0x376cec0() {
   return (neuron0x3761440()*0.15937);
}

double NNfunction_nn_chi3_charge1p::synapse0x376cf00() {
   return (neuron0x3761780()*-0.108163);
}

double NNfunction_nn_chi3_charge1p::synapse0x376cf40() {
   return (neuron0x3761ac0()*-0.754864);
}

double NNfunction_nn_chi3_charge1p::synapse0x376cf80() {
   return (neuron0x3761e00()*0.245762);
}

double NNfunction_nn_chi3_charge1p::synapse0x376cfc0() {
   return (neuron0x3762140()*-0.817647);
}

double NNfunction_nn_chi3_charge1p::synapse0x376d000() {
   return (neuron0x3762480()*-0.835793);
}

double NNfunction_nn_chi3_charge1p::synapse0x376d040() {
   return (neuron0x37627c0()*-0.310696);
}

double NNfunction_nn_chi3_charge1p::synapse0x376d080() {
   return (neuron0x3762b00()*0.242636);
}

double NNfunction_nn_chi3_charge1p::synapse0x376d0c0() {
   return (neuron0x3762e40()*0.247558);
}

double NNfunction_nn_chi3_charge1p::synapse0x376d100() {
   return (neuron0x3763180()*0.243612);
}

double NNfunction_nn_chi3_charge1p::synapse0x376d140() {
   return (neuron0x37634c0()*0.303072);
}

double NNfunction_nn_chi3_charge1p::synapse0x376d180() {
   return (neuron0x3763800()*0.410428);
}

double NNfunction_nn_chi3_charge1p::synapse0x376cc10() {
   return (neuron0x3763b40()*-0.176265);
}

double NNfunction_nn_chi3_charge1p::synapse0x376cc50() {
   return (neuron0x37640a0()*0.426138);
}

double NNfunction_nn_chi3_charge1p::synapse0x37699e0() {
   return (neuron0x37642c0()*-0.254964);
}

double NNfunction_nn_chi3_charge1p::synapse0x3769a20() {
   return (neuron0x3764600()*-0.00577492);
}

double NNfunction_nn_chi3_charge1p::synapse0x3769a60() {
   return (neuron0x3764940()*-0.586241);
}

double NNfunction_nn_chi3_charge1p::synapse0x3769aa0() {
   return (neuron0x3764c80()*-0.10928);
}

double NNfunction_nn_chi3_charge1p::synapse0x3769ae0() {
   return (neuron0x3764fc0()*0.534517);
}

double NNfunction_nn_chi3_charge1p::synapse0x3769b20() {
   return (neuron0x3765300()*1.43397);
}

double NNfunction_nn_chi3_charge1p::synapse0x3769ea0() {
   return (neuron0x37607d0()*0.0077053);
}

double NNfunction_nn_chi3_charge1p::synapse0x3769ee0() {
   return (neuron0x3760a80()*-0.0271136);
}

double NNfunction_nn_chi3_charge1p::synapse0x3769f20() {
   return (neuron0x3760dc0()*1.29249);
}

double NNfunction_nn_chi3_charge1p::synapse0x3769f60() {
   return (neuron0x3761100()*0.0639164);
}

double NNfunction_nn_chi3_charge1p::synapse0x3769fa0() {
   return (neuron0x3761440()*0.0136844);
}

double NNfunction_nn_chi3_charge1p::synapse0x3769fe0() {
   return (neuron0x3761780()*-0.0358323);
}

double NNfunction_nn_chi3_charge1p::synapse0x376a020() {
   return (neuron0x3761ac0()*0.0281395);
}

double NNfunction_nn_chi3_charge1p::synapse0x376a060() {
   return (neuron0x3761e00()*0.0209723);
}

double NNfunction_nn_chi3_charge1p::synapse0x376a0a0() {
   return (neuron0x3762140()*0.00828094);
}

double NNfunction_nn_chi3_charge1p::synapse0x376a0e0() {
   return (neuron0x3762480()*0.023736);
}

double NNfunction_nn_chi3_charge1p::synapse0x376a120() {
   return (neuron0x37627c0()*-0.00734857);
}

double NNfunction_nn_chi3_charge1p::synapse0x376a160() {
   return (neuron0x3762b00()*5.30293);
}

double NNfunction_nn_chi3_charge1p::synapse0x376a1a0() {
   return (neuron0x3762e40()*0.0518116);
}

double NNfunction_nn_chi3_charge1p::synapse0x376e2e0() {
   return (neuron0x3763180()*-0.0569582);
}

double NNfunction_nn_chi3_charge1p::synapse0x376e320() {
   return (neuron0x37634c0()*-0.0405659);
}

double NNfunction_nn_chi3_charge1p::synapse0x376e360() {
   return (neuron0x3763800()*-0.0240209);
}

double NNfunction_nn_chi3_charge1p::synapse0x3769cf0() {
   return (neuron0x3763b40()*-0.00729068);
}

double NNfunction_nn_chi3_charge1p::synapse0x3769d30() {
   return (neuron0x37640a0()*-0.00422645);
}

double NNfunction_nn_chi3_charge1p::synapse0x376e4b0() {
   return (neuron0x37642c0()*0.00917539);
}

double NNfunction_nn_chi3_charge1p::synapse0x376e4f0() {
   return (neuron0x3764600()*-0.0335808);
}

double NNfunction_nn_chi3_charge1p::synapse0x376e530() {
   return (neuron0x3764940()*-0.0295109);
}

double NNfunction_nn_chi3_charge1p::synapse0x376e570() {
   return (neuron0x3764c80()*0.0110483);
}

double NNfunction_nn_chi3_charge1p::synapse0x376e5b0() {
   return (neuron0x3764fc0()*-0.0111813);
}

double NNfunction_nn_chi3_charge1p::synapse0x376e5f0() {
   return (neuron0x3765300()*1.43334);
}

double NNfunction_nn_chi3_charge1p::synapse0x376e970() {
   return (neuron0x37607d0()*0.0187226);
}

double NNfunction_nn_chi3_charge1p::synapse0x376e9b0() {
   return (neuron0x3760a80()*0.00869639);
}

double NNfunction_nn_chi3_charge1p::synapse0x376e9f0() {
   return (neuron0x3760dc0()*0.231219);
}

double NNfunction_nn_chi3_charge1p::synapse0x376ea30() {
   return (neuron0x3761100()*-0.0419032);
}

double NNfunction_nn_chi3_charge1p::synapse0x376ea70() {
   return (neuron0x3761440()*0.0240758);
}

double NNfunction_nn_chi3_charge1p::synapse0x376eab0() {
   return (neuron0x3761780()*-0.00107641);
}

double NNfunction_nn_chi3_charge1p::synapse0x376eaf0() {
   return (neuron0x3761ac0()*-0.0169538);
}

double NNfunction_nn_chi3_charge1p::synapse0x376eb30() {
   return (neuron0x3761e00()*0.000626332);
}

double NNfunction_nn_chi3_charge1p::synapse0x376eb70() {
   return (neuron0x3762140()*0.00320056);
}

double NNfunction_nn_chi3_charge1p::synapse0x376ebb0() {
   return (neuron0x3762480()*-0.0121228);
}

double NNfunction_nn_chi3_charge1p::synapse0x376ebf0() {
   return (neuron0x37627c0()*-0.00598102);
}

double NNfunction_nn_chi3_charge1p::synapse0x376ec30() {
   return (neuron0x3762b00()*0.110033);
}

double NNfunction_nn_chi3_charge1p::synapse0x376ec70() {
   return (neuron0x3762e40()*-0.00228655);
}

double NNfunction_nn_chi3_charge1p::synapse0x376ecb0() {
   return (neuron0x3763180()*-0.0171045);
}

double NNfunction_nn_chi3_charge1p::synapse0x376ecf0() {
   return (neuron0x37634c0()*0.00588707);
}

double NNfunction_nn_chi3_charge1p::synapse0x376ed30() {
   return (neuron0x3763800()*0.0073183);
}

double NNfunction_nn_chi3_charge1p::synapse0x376e7c0() {
   return (neuron0x3763b40()*0.00914133);
}

double NNfunction_nn_chi3_charge1p::synapse0x376e800() {
   return (neuron0x37640a0()*-0.000954837);
}

double NNfunction_nn_chi3_charge1p::synapse0x376ee80() {
   return (neuron0x37642c0()*-0.00096118);
}

double NNfunction_nn_chi3_charge1p::synapse0x376eec0() {
   return (neuron0x3764600()*-0.00237085);
}

double NNfunction_nn_chi3_charge1p::synapse0x376ef00() {
   return (neuron0x3764940()*0.00514172);
}

double NNfunction_nn_chi3_charge1p::synapse0x376ef40() {
   return (neuron0x3764c80()*0.000239877);
}

double NNfunction_nn_chi3_charge1p::synapse0x376ef80() {
   return (neuron0x3764fc0()*-0.0025852);
}

double NNfunction_nn_chi3_charge1p::synapse0x376efc0() {
   return (neuron0x3765300()*-5.77032);
}

double NNfunction_nn_chi3_charge1p::synapse0x376f340() {
   return (neuron0x37607d0()*0.00472524);
}

double NNfunction_nn_chi3_charge1p::synapse0x376f380() {
   return (neuron0x3760a80()*0.139927);
}

double NNfunction_nn_chi3_charge1p::synapse0x376f3c0() {
   return (neuron0x3760dc0()*1.14334);
}

double NNfunction_nn_chi3_charge1p::synapse0x376f400() {
   return (neuron0x3761100()*-2.28845);
}

double NNfunction_nn_chi3_charge1p::synapse0x376f440() {
   return (neuron0x3761440()*-0.00535257);
}

double NNfunction_nn_chi3_charge1p::synapse0x376f480() {
   return (neuron0x3761780()*-0.0821064);
}

double NNfunction_nn_chi3_charge1p::synapse0x376f4c0() {
   return (neuron0x3761ac0()*-0.0842863);
}

double NNfunction_nn_chi3_charge1p::synapse0x376f500() {
   return (neuron0x3761e00()*-0.0576304);
}

double NNfunction_nn_chi3_charge1p::synapse0x376f540() {
   return (neuron0x3762140()*-0.0100461);
}

double NNfunction_nn_chi3_charge1p::synapse0x376f580() {
   return (neuron0x3762480()*0.00319267);
}

double NNfunction_nn_chi3_charge1p::synapse0x376f5c0() {
   return (neuron0x37627c0()*0.044955);
}

double NNfunction_nn_chi3_charge1p::synapse0x376f600() {
   return (neuron0x3762b00()*1.79693);
}

double NNfunction_nn_chi3_charge1p::synapse0x376f640() {
   return (neuron0x3762e40()*0.105319);
}

double NNfunction_nn_chi3_charge1p::synapse0x376f680() {
   return (neuron0x3763180()*0.146201);
}

double NNfunction_nn_chi3_charge1p::synapse0x376f6c0() {
   return (neuron0x37634c0()*0.0124553);
}

double NNfunction_nn_chi3_charge1p::synapse0x376f700() {
   return (neuron0x3763800()*0.0328726);
}

double NNfunction_nn_chi3_charge1p::synapse0x376f190() {
   return (neuron0x3763b40()*0.187297);
}

double NNfunction_nn_chi3_charge1p::synapse0x376f1d0() {
   return (neuron0x37640a0()*0.0656598);
}

double NNfunction_nn_chi3_charge1p::synapse0x376f850() {
   return (neuron0x37642c0()*0.00760438);
}

double NNfunction_nn_chi3_charge1p::synapse0x376f890() {
   return (neuron0x3764600()*0.0549992);
}

double NNfunction_nn_chi3_charge1p::synapse0x376f8d0() {
   return (neuron0x3764940()*-0.0433407);
}

double NNfunction_nn_chi3_charge1p::synapse0x376f910() {
   return (neuron0x3764c80()*-0.0838715);
}

double NNfunction_nn_chi3_charge1p::synapse0x376f950() {
   return (neuron0x3764fc0()*0.00672069);
}

double NNfunction_nn_chi3_charge1p::synapse0x376f990() {
   return (neuron0x3765300()*0.159685);
}

double NNfunction_nn_chi3_charge1p::synapse0x376fd10() {
   return (neuron0x37607d0()*0.00481466);
}

double NNfunction_nn_chi3_charge1p::synapse0x376fd50() {
   return (neuron0x3760a80()*-0.0305384);
}

double NNfunction_nn_chi3_charge1p::synapse0x376fd90() {
   return (neuron0x3760dc0()*0.225616);
}

double NNfunction_nn_chi3_charge1p::synapse0x376fdd0() {
   return (neuron0x3761100()*-0.0278828);
}

double NNfunction_nn_chi3_charge1p::synapse0x376fe10() {
   return (neuron0x3761440()*0.0260573);
}

double NNfunction_nn_chi3_charge1p::synapse0x376fe50() {
   return (neuron0x3761780()*-0.000546775);
}

double NNfunction_nn_chi3_charge1p::synapse0x376fe90() {
   return (neuron0x3761ac0()*-0.0240563);
}

double NNfunction_nn_chi3_charge1p::synapse0x376fed0() {
   return (neuron0x3761e00()*0.0101373);
}

double NNfunction_nn_chi3_charge1p::synapse0x376ff10() {
   return (neuron0x3762140()*-0.00828729);
}

double NNfunction_nn_chi3_charge1p::synapse0x376ff50() {
   return (neuron0x3762480()*0.00393832);
}

double NNfunction_nn_chi3_charge1p::synapse0x376ff90() {
   return (neuron0x37627c0()*-0.00565579);
}

double NNfunction_nn_chi3_charge1p::synapse0x376ffd0() {
   return (neuron0x3762b00()*0.344295);
}

double NNfunction_nn_chi3_charge1p::synapse0x3770010() {
   return (neuron0x3762e40()*0.00599163);
}

double NNfunction_nn_chi3_charge1p::synapse0x3770050() {
   return (neuron0x3763180()*-0.038196);
}

double NNfunction_nn_chi3_charge1p::synapse0x3770090() {
   return (neuron0x37634c0()*-0.00470962);
}

double NNfunction_nn_chi3_charge1p::synapse0x37700d0() {
   return (neuron0x3763800()*0.0203958);
}

double NNfunction_nn_chi3_charge1p::synapse0x376fb60() {
   return (neuron0x3763b40()*0.0170311);
}

double NNfunction_nn_chi3_charge1p::synapse0x376fba0() {
   return (neuron0x37640a0()*0.00876985);
}

double NNfunction_nn_chi3_charge1p::synapse0x3770220() {
   return (neuron0x37642c0()*-0.00873617);
}

double NNfunction_nn_chi3_charge1p::synapse0x3770260() {
   return (neuron0x3764600()*-0.0127281);
}

double NNfunction_nn_chi3_charge1p::synapse0x37702a0() {
   return (neuron0x3764940()*-0.00368381);
}

double NNfunction_nn_chi3_charge1p::synapse0x37702e0() {
   return (neuron0x3764c80()*0.00184921);
}

double NNfunction_nn_chi3_charge1p::synapse0x3770320() {
   return (neuron0x3764fc0()*-0.00464291);
}

double NNfunction_nn_chi3_charge1p::synapse0x3770360() {
   return (neuron0x3765300()*-2.99498);
}

double NNfunction_nn_chi3_charge1p::synapse0x37706e0() {
   return (neuron0x37607d0()*0.00464466);
}

double NNfunction_nn_chi3_charge1p::synapse0x3760960() {
   return (neuron0x3760a80()*0.0776066);
}

double NNfunction_nn_chi3_charge1p::synapse0x37609a0() {
   return (neuron0x3760dc0()*-1.1812);
}

double NNfunction_nn_chi3_charge1p::synapse0x3760ca0() {
   return (neuron0x3761100()*0.0194332);
}

double NNfunction_nn_chi3_charge1p::synapse0x3760ce0() {
   return (neuron0x3761440()*-0.0365757);
}

double NNfunction_nn_chi3_charge1p::synapse0x3760fe0() {
   return (neuron0x3761780()*-0.00511929);
}

double NNfunction_nn_chi3_charge1p::synapse0x3761020() {
   return (neuron0x3761ac0()*0.0116089);
}

double NNfunction_nn_chi3_charge1p::synapse0x3761320() {
   return (neuron0x3761e00()*-0.0120689);
}

double NNfunction_nn_chi3_charge1p::synapse0x3761360() {
   return (neuron0x3762140()*-0.0130476);
}

double NNfunction_nn_chi3_charge1p::synapse0x3761660() {
   return (neuron0x3762480()*-0.0319659);
}

double NNfunction_nn_chi3_charge1p::synapse0x37616a0() {
   return (neuron0x37627c0()*0.0176583);
}

double NNfunction_nn_chi3_charge1p::synapse0x37619a0() {
   return (neuron0x3762b00()*-2.87768);
}

double NNfunction_nn_chi3_charge1p::synapse0x37619e0() {
   return (neuron0x3762e40()*-0.0646625);
}

double NNfunction_nn_chi3_charge1p::synapse0x3761ce0() {
   return (neuron0x3763180()*0.0847017);
}

double NNfunction_nn_chi3_charge1p::synapse0x3761d20() {
   return (neuron0x37634c0()*0.0206616);
}

double NNfunction_nn_chi3_charge1p::synapse0x3762020() {
   return (neuron0x3763800()*-0.00212401);
}

double NNfunction_nn_chi3_charge1p::synapse0x3762060() {
   return (neuron0x3763b40()*0.0343829);
}

double NNfunction_nn_chi3_charge1p::synapse0x3762360() {
   return (neuron0x37640a0()*0.00229437);
}

double NNfunction_nn_chi3_charge1p::synapse0x37623a0() {
   return (neuron0x37642c0()*0.0198694);
}

double NNfunction_nn_chi3_charge1p::synapse0x37626a0() {
   return (neuron0x3764600()*0.0365799);
}

double NNfunction_nn_chi3_charge1p::synapse0x37626e0() {
   return (neuron0x3764940()*0.018355);
}

double NNfunction_nn_chi3_charge1p::synapse0x37629e0() {
   return (neuron0x3764c80()*-0.00734187);
}

double NNfunction_nn_chi3_charge1p::synapse0x3762a20() {
   return (neuron0x3764fc0()*0.00399478);
}

double NNfunction_nn_chi3_charge1p::synapse0x3762d20() {
   return (neuron0x3765300()*1.36098);
}

double NNfunction_nn_chi3_charge1p::synapse0x3762d60() {
   return (neuron0x37607d0()*0.0594107);
}

double NNfunction_nn_chi3_charge1p::synapse0x3763a20() {
   return (neuron0x3760a80()*-0.00234549);
}

double NNfunction_nn_chi3_charge1p::synapse0x3763a60() {
   return (neuron0x3760dc0()*0.556823);
}

double NNfunction_nn_chi3_charge1p::synapse0x3770530() {
   return (neuron0x3761100()*-0.0215376);
}

double NNfunction_nn_chi3_charge1p::synapse0x3770570() {
   return (neuron0x3761440()*-0.0182007);
}

double NNfunction_nn_chi3_charge1p::synapse0x3763d60() {
   return (neuron0x3761780()*0.0355077);
}

double NNfunction_nn_chi3_charge1p::synapse0x3763da0() {
   return (neuron0x3761ac0()*-0.0318287);
}

double NNfunction_nn_chi3_charge1p::synapse0x26a48b0() {
   return (neuron0x3761e00()*0.0449792);
}

double NNfunction_nn_chi3_charge1p::synapse0x26a48f0() {
   return (neuron0x3762140()*-0.0102636);
}

double NNfunction_nn_chi3_charge1p::synapse0x37644e0() {
   return (neuron0x3762480()*-0.0358697);
}

double NNfunction_nn_chi3_charge1p::synapse0x3764520() {
   return (neuron0x37627c0()*0.000741513);
}

double NNfunction_nn_chi3_charge1p::synapse0x3764820() {
   return (neuron0x3762b00()*-1.16953);
}

double NNfunction_nn_chi3_charge1p::synapse0x3764860() {
   return (neuron0x3762e40()*-0.00511892);
}

double NNfunction_nn_chi3_charge1p::synapse0x3764b60() {
   return (neuron0x3763180()*0.0179797);
}

double NNfunction_nn_chi3_charge1p::synapse0x3764ba0() {
   return (neuron0x37634c0()*0.0223694);
}

double NNfunction_nn_chi3_charge1p::synapse0x3764ea0() {
   return (neuron0x3763800()*0.0166346);
}

double NNfunction_nn_chi3_charge1p::synapse0x3764ee0() {
   return (neuron0x3763b40()*0.0241305);
}

double NNfunction_nn_chi3_charge1p::synapse0x37651e0() {
   return (neuron0x37640a0()*-0.00401635);
}

double NNfunction_nn_chi3_charge1p::synapse0x3765220() {
   return (neuron0x37642c0()*0.00338893);
}

double NNfunction_nn_chi3_charge1p::synapse0x3765520() {
   return (neuron0x3764600()*0.00468897);
}

double NNfunction_nn_chi3_charge1p::synapse0x3765560() {
   return (neuron0x3764940()*0.0194405);
}

double NNfunction_nn_chi3_charge1p::synapse0x3763060() {
   return (neuron0x3764c80()*0.0128139);
}

double NNfunction_nn_chi3_charge1p::synapse0x37630a0() {
   return (neuron0x3764fc0()*0.00194454);
}

double NNfunction_nn_chi3_charge1p::synapse0x3772450() {
   return (neuron0x3765300()*-0.71221);
}

double NNfunction_nn_chi3_charge1p::synapse0x37727d0() {
   return (neuron0x37607d0()*0.00923498);
}

double NNfunction_nn_chi3_charge1p::synapse0x3772810() {
   return (neuron0x3760a80()*0.0547686);
}

double NNfunction_nn_chi3_charge1p::synapse0x3772850() {
   return (neuron0x3760dc0()*-1.66762);
}

double NNfunction_nn_chi3_charge1p::synapse0x3772890() {
   return (neuron0x3761100()*0.000653911);
}

double NNfunction_nn_chi3_charge1p::synapse0x37728d0() {
   return (neuron0x3761440()*-0.0306184);
}

double NNfunction_nn_chi3_charge1p::synapse0x3772910() {
   return (neuron0x3761780()*-0.0107822);
}

double NNfunction_nn_chi3_charge1p::synapse0x3772950() {
   return (neuron0x3761ac0()*0.0099243);
}

double NNfunction_nn_chi3_charge1p::synapse0x3772990() {
   return (neuron0x3761e00()*0.00124975);
}

double NNfunction_nn_chi3_charge1p::synapse0x37729d0() {
   return (neuron0x3762140()*-0.00888794);
}

double NNfunction_nn_chi3_charge1p::synapse0x3772a10() {
   return (neuron0x3762480()*-0.023774);
}

double NNfunction_nn_chi3_charge1p::synapse0x3772a50() {
   return (neuron0x37627c0()*0.0268969);
}

double NNfunction_nn_chi3_charge1p::synapse0x3772a90() {
   return (neuron0x3762b00()*-3.02717);
}

double NNfunction_nn_chi3_charge1p::synapse0x3772ad0() {
   return (neuron0x3762e40()*-0.0730414);
}

double NNfunction_nn_chi3_charge1p::synapse0x3772b10() {
   return (neuron0x3763180()*0.0590709);
}

double NNfunction_nn_chi3_charge1p::synapse0x3772b50() {
   return (neuron0x37634c0()*0.010257);
}

double NNfunction_nn_chi3_charge1p::synapse0x3772b90() {
   return (neuron0x3763800()*0.00127167);
}

double NNfunction_nn_chi3_charge1p::synapse0x3772620() {
   return (neuron0x3763b40()*0.0304201);
}

double NNfunction_nn_chi3_charge1p::synapse0x3772660() {
   return (neuron0x37640a0()*0.00359305);
}

double NNfunction_nn_chi3_charge1p::synapse0x3772ce0() {
   return (neuron0x37642c0()*0.020668);
}

double NNfunction_nn_chi3_charge1p::synapse0x3772d20() {
   return (neuron0x3764600()*0.0370352);
}

double NNfunction_nn_chi3_charge1p::synapse0x3772d60() {
   return (neuron0x3764940()*0.0212053);
}

double NNfunction_nn_chi3_charge1p::synapse0x3772da0() {
   return (neuron0x3764c80()*-0.0125965);
}

double NNfunction_nn_chi3_charge1p::synapse0x3772de0() {
   return (neuron0x3764fc0()*0.0131672);
}

double NNfunction_nn_chi3_charge1p::synapse0x3772e20() {
   return (neuron0x3765300()*1.85836);
}

double NNfunction_nn_chi3_charge1p::synapse0x37731a0() {
   return (neuron0x37607d0()*0.0287761);
}

double NNfunction_nn_chi3_charge1p::synapse0x37731e0() {
   return (neuron0x3760a80()*0.0398785);
}

double NNfunction_nn_chi3_charge1p::synapse0x3773220() {
   return (neuron0x3760dc0()*0.581039);
}

double NNfunction_nn_chi3_charge1p::synapse0x3773260() {
   return (neuron0x3761100()*-0.0131672);
}

double NNfunction_nn_chi3_charge1p::synapse0x37732a0() {
   return (neuron0x3761440()*-0.0191842);
}

double NNfunction_nn_chi3_charge1p::synapse0x37732e0() {
   return (neuron0x3761780()*0.018432);
}

double NNfunction_nn_chi3_charge1p::synapse0x3773320() {
   return (neuron0x3761ac0()*-0.0264147);
}

double NNfunction_nn_chi3_charge1p::synapse0x3773360() {
   return (neuron0x3761e00()*0.0133073);
}

double NNfunction_nn_chi3_charge1p::synapse0x37733a0() {
   return (neuron0x3762140()*-0.00297424);
}

double NNfunction_nn_chi3_charge1p::synapse0x37733e0() {
   return (neuron0x3762480()*-0.0422345);
}

double NNfunction_nn_chi3_charge1p::synapse0x3773420() {
   return (neuron0x37627c0()*0.0167666);
}

double NNfunction_nn_chi3_charge1p::synapse0x3773460() {
   return (neuron0x3762b00()*-0.814248);
}

double NNfunction_nn_chi3_charge1p::synapse0x37734a0() {
   return (neuron0x3762e40()*-0.00627495);
}

double NNfunction_nn_chi3_charge1p::synapse0x37734e0() {
   return (neuron0x3763180()*0.00872651);
}

double NNfunction_nn_chi3_charge1p::synapse0x3773520() {
   return (neuron0x37634c0()*0.0122627);
}

double NNfunction_nn_chi3_charge1p::synapse0x3773560() {
   return (neuron0x3763800()*0.00320156);
}

double NNfunction_nn_chi3_charge1p::synapse0x3772ff0() {
   return (neuron0x3763b40()*0.0123285);
}

double NNfunction_nn_chi3_charge1p::synapse0x3773030() {
   return (neuron0x37640a0()*0.00116323);
}

double NNfunction_nn_chi3_charge1p::synapse0x37736b0() {
   return (neuron0x37642c0()*0.00858157);
}

double NNfunction_nn_chi3_charge1p::synapse0x37736f0() {
   return (neuron0x3764600()*0.0146055);
}

double NNfunction_nn_chi3_charge1p::synapse0x3773730() {
   return (neuron0x3764940()*0.00984001);
}

double NNfunction_nn_chi3_charge1p::synapse0x3773770() {
   return (neuron0x3764c80()*0.000693806);
}

double NNfunction_nn_chi3_charge1p::synapse0x37737b0() {
   return (neuron0x3764fc0()*0.0071827);
}

double NNfunction_nn_chi3_charge1p::synapse0x37737f0() {
   return (neuron0x3765300()*-0.344851);
}

double NNfunction_nn_chi3_charge1p::synapse0x3773b70() {
   return (neuron0x37607d0()*-0.0165962);
}

double NNfunction_nn_chi3_charge1p::synapse0x3773bb0() {
   return (neuron0x3760a80()*19.3847);
}

double NNfunction_nn_chi3_charge1p::synapse0x3773bf0() {
   return (neuron0x3760dc0()*0.259686);
}

double NNfunction_nn_chi3_charge1p::synapse0x3773c30() {
   return (neuron0x3761100()*-0.0140207);
}

double NNfunction_nn_chi3_charge1p::synapse0x3773c70() {
   return (neuron0x3761440()*0.00114396);
}

double NNfunction_nn_chi3_charge1p::synapse0x3773cb0() {
   return (neuron0x3761780()*0.00905541);
}

double NNfunction_nn_chi3_charge1p::synapse0x3773cf0() {
   return (neuron0x3761ac0()*-0.00271309);
}

double NNfunction_nn_chi3_charge1p::synapse0x3773d30() {
   return (neuron0x3761e00()*9.08726e-05);
}

double NNfunction_nn_chi3_charge1p::synapse0x3773d70() {
   return (neuron0x3762140()*-0.00129366);
}

double NNfunction_nn_chi3_charge1p::synapse0x3773db0() {
   return (neuron0x3762480()*0.00253648);
}

double NNfunction_nn_chi3_charge1p::synapse0x3773df0() {
   return (neuron0x37627c0()*-0.00322738);
}

double NNfunction_nn_chi3_charge1p::synapse0x3773e30() {
   return (neuron0x3762b00()*0.0380811);
}

double NNfunction_nn_chi3_charge1p::synapse0x3773e70() {
   return (neuron0x3762e40()*-0.0126187);
}

double NNfunction_nn_chi3_charge1p::synapse0x3773eb0() {
   return (neuron0x3763180()*-0.019985);
}

double NNfunction_nn_chi3_charge1p::synapse0x3773ef0() {
   return (neuron0x37634c0()*-0.00496121);
}

double NNfunction_nn_chi3_charge1p::synapse0x3773f30() {
   return (neuron0x3763800()*0.0114892);
}

double NNfunction_nn_chi3_charge1p::synapse0x37739c0() {
   return (neuron0x3763b40()*0.0254452);
}

double NNfunction_nn_chi3_charge1p::synapse0x3773a00() {
   return (neuron0x37640a0()*-0.00630658);
}

double NNfunction_nn_chi3_charge1p::synapse0x3774080() {
   return (neuron0x37642c0()*-0.0082175);
}

double NNfunction_nn_chi3_charge1p::synapse0x37740c0() {
   return (neuron0x3764600()*-0.00644408);
}

double NNfunction_nn_chi3_charge1p::synapse0x3774100() {
   return (neuron0x3764940()*0.00226804);
}

double NNfunction_nn_chi3_charge1p::synapse0x3774140() {
   return (neuron0x3764c80()*0.00917111);
}

double NNfunction_nn_chi3_charge1p::synapse0x3774180() {
   return (neuron0x3764fc0()*0.00940303);
}

double NNfunction_nn_chi3_charge1p::synapse0x37741c0() {
   return (neuron0x3765300()*-4.74986);
}

double NNfunction_nn_chi3_charge1p::synapse0x3774540() {
   return (neuron0x37607d0()*-0.0182333);
}

double NNfunction_nn_chi3_charge1p::synapse0x3774580() {
   return (neuron0x3760a80()*-17.5072);
}

double NNfunction_nn_chi3_charge1p::synapse0x37745c0() {
   return (neuron0x3760dc0()*0.0836669);
}

double NNfunction_nn_chi3_charge1p::synapse0x3774600() {
   return (neuron0x3761100()*-0.0131201);
}

double NNfunction_nn_chi3_charge1p::synapse0x3774640() {
   return (neuron0x3761440()*0.0247424);
}

double NNfunction_nn_chi3_charge1p::synapse0x3774680() {
   return (neuron0x3761780()*0.00259684);
}

double NNfunction_nn_chi3_charge1p::synapse0x37746c0() {
   return (neuron0x3761ac0()*0.0222653);
}

double NNfunction_nn_chi3_charge1p::synapse0x3774700() {
   return (neuron0x3761e00()*0.00983051);
}

double NNfunction_nn_chi3_charge1p::synapse0x3774740() {
   return (neuron0x3762140()*0.00298795);
}

double NNfunction_nn_chi3_charge1p::synapse0x3774780() {
   return (neuron0x3762480()*0.0280827);
}

double NNfunction_nn_chi3_charge1p::synapse0x37747c0() {
   return (neuron0x37627c0()*0.0116082);
}

double NNfunction_nn_chi3_charge1p::synapse0x3774800() {
   return (neuron0x3762b00()*-0.0701467);
}

double NNfunction_nn_chi3_charge1p::synapse0x3774840() {
   return (neuron0x3762e40()*0.00389326);
}

double NNfunction_nn_chi3_charge1p::synapse0x3774880() {
   return (neuron0x3763180()*0.00613156);
}

double NNfunction_nn_chi3_charge1p::synapse0x37748c0() {
   return (neuron0x37634c0()*0.0236303);
}

double NNfunction_nn_chi3_charge1p::synapse0x3774900() {
   return (neuron0x3763800()*-0.00876033);
}

double NNfunction_nn_chi3_charge1p::synapse0x3774390() {
   return (neuron0x3763b40()*0.0237767);
}

double NNfunction_nn_chi3_charge1p::synapse0x37743d0() {
   return (neuron0x37640a0()*-0.0042043);
}

double NNfunction_nn_chi3_charge1p::synapse0x3774a50() {
   return (neuron0x37642c0()*-0.00336613);
}

double NNfunction_nn_chi3_charge1p::synapse0x3774a90() {
   return (neuron0x3764600()*-0.00166888);
}

double NNfunction_nn_chi3_charge1p::synapse0x3774ad0() {
   return (neuron0x3764940()*-0.0115856);
}

double NNfunction_nn_chi3_charge1p::synapse0x3774b10() {
   return (neuron0x3764c80()*0.0105074);
}

double NNfunction_nn_chi3_charge1p::synapse0x3774b50() {
   return (neuron0x3764fc0()*-0.004616);
}

double NNfunction_nn_chi3_charge1p::synapse0x3774b90() {
   return (neuron0x3765300()*-4.26733);
}

double NNfunction_nn_chi3_charge1p::synapse0x3774f10() {
   return (neuron0x37607d0()*-0.0404915);
}

double NNfunction_nn_chi3_charge1p::synapse0x3774f50() {
   return (neuron0x3760a80()*12.5934);
}

double NNfunction_nn_chi3_charge1p::synapse0x3774f90() {
   return (neuron0x3760dc0()*5.03121);
}

double NNfunction_nn_chi3_charge1p::synapse0x3774fd0() {
   return (neuron0x3761100()*-0.00431572);
}

double NNfunction_nn_chi3_charge1p::synapse0x3775010() {
   return (neuron0x3761440()*-0.00873402);
}

double NNfunction_nn_chi3_charge1p::synapse0x3775050() {
   return (neuron0x3761780()*-0.032356);
}

double NNfunction_nn_chi3_charge1p::synapse0x3775090() {
   return (neuron0x3761ac0()*-0.00397984);
}

double NNfunction_nn_chi3_charge1p::synapse0x37750d0() {
   return (neuron0x3761e00()*0.00873037);
}

double NNfunction_nn_chi3_charge1p::synapse0x3775110() {
   return (neuron0x3762140()*-0.0135571);
}

double NNfunction_nn_chi3_charge1p::synapse0x376d2d0() {
   return (neuron0x3762480()*-0.0478363);
}

double NNfunction_nn_chi3_charge1p::synapse0x376d310() {
   return (neuron0x37627c0()*0.0145586);
}

double NNfunction_nn_chi3_charge1p::synapse0x376d350() {
   return (neuron0x3762b00()*-0.0133679);
}

double NNfunction_nn_chi3_charge1p::synapse0x376d390() {
   return (neuron0x3762e40()*0.00467054);
}

double NNfunction_nn_chi3_charge1p::synapse0x376d3d0() {
   return (neuron0x3763180()*0.00741219);
}

double NNfunction_nn_chi3_charge1p::synapse0x376d410() {
   return (neuron0x37634c0()*0.0152141);
}

double NNfunction_nn_chi3_charge1p::synapse0x376d450() {
   return (neuron0x3763800()*-0.0253977);
}

double NNfunction_nn_chi3_charge1p::synapse0x3774d60() {
   return (neuron0x3763b40()*0.023186);
}

double NNfunction_nn_chi3_charge1p::synapse0x3774da0() {
   return (neuron0x37640a0()*0.0332399);
}

double NNfunction_nn_chi3_charge1p::synapse0x376d5a0() {
   return (neuron0x37642c0()*0.0149717);
}

double NNfunction_nn_chi3_charge1p::synapse0x376d5e0() {
   return (neuron0x3764600()*0.0447703);
}

double NNfunction_nn_chi3_charge1p::synapse0x376d620() {
   return (neuron0x3764940()*0.0129502);
}

double NNfunction_nn_chi3_charge1p::synapse0x376d660() {
   return (neuron0x3764c80()*-0.0382045);
}

double NNfunction_nn_chi3_charge1p::synapse0x376d6a0() {
   return (neuron0x3764fc0()*0.018043);
}

double NNfunction_nn_chi3_charge1p::synapse0x376d6e0() {
   return (neuron0x3765300()*0.0578154);
}

double NNfunction_nn_chi3_charge1p::synapse0x376da60() {
   return (neuron0x37607d0()*0.0923463);
}

double NNfunction_nn_chi3_charge1p::synapse0x376daa0() {
   return (neuron0x3760a80()*0.00222844);
}

double NNfunction_nn_chi3_charge1p::synapse0x376dae0() {
   return (neuron0x3760dc0()*1.34582);
}

double NNfunction_nn_chi3_charge1p::synapse0x376db20() {
   return (neuron0x3761100()*-0.0221232);
}

double NNfunction_nn_chi3_charge1p::synapse0x376db60() {
   return (neuron0x3761440()*-0.0143101);
}

double NNfunction_nn_chi3_charge1p::synapse0x376dba0() {
   return (neuron0x3761780()*0.00766697);
}

double NNfunction_nn_chi3_charge1p::synapse0x376dbe0() {
   return (neuron0x3761ac0()*0.0463381);
}

double NNfunction_nn_chi3_charge1p::synapse0x376dc20() {
   return (neuron0x3761e00()*0.00239428);
}

double NNfunction_nn_chi3_charge1p::synapse0x376dc60() {
   return (neuron0x3762140()*0.0093505);
}

double NNfunction_nn_chi3_charge1p::synapse0x376dca0() {
   return (neuron0x3762480()*0.000193729);
}

double NNfunction_nn_chi3_charge1p::synapse0x376dce0() {
   return (neuron0x37627c0()*0.0114034);
}

double NNfunction_nn_chi3_charge1p::synapse0x376dd20() {
   return (neuron0x3762b00()*-0.0835742);
}

double NNfunction_nn_chi3_charge1p::synapse0x376dd60() {
   return (neuron0x3762e40()*0.0379754);
}

double NNfunction_nn_chi3_charge1p::synapse0x376dda0() {
   return (neuron0x3763180()*0.0545268);
}

double NNfunction_nn_chi3_charge1p::synapse0x376dde0() {
   return (neuron0x37634c0()*-0.00420133);
}

double NNfunction_nn_chi3_charge1p::synapse0x376de20() {
   return (neuron0x3763800()*-0.0271874);
}

double NNfunction_nn_chi3_charge1p::synapse0x376d8b0() {
   return (neuron0x3763b40()*0.0158795);
}

double NNfunction_nn_chi3_charge1p::synapse0x376d8f0() {
   return (neuron0x37640a0()*0.025289);
}

double NNfunction_nn_chi3_charge1p::synapse0x376df70() {
   return (neuron0x37642c0()*0.000437805);
}

double NNfunction_nn_chi3_charge1p::synapse0x376dfb0() {
   return (neuron0x3764600()*0.000478091);
}

double NNfunction_nn_chi3_charge1p::synapse0x376dff0() {
   return (neuron0x3764940()*0.0114822);
}

double NNfunction_nn_chi3_charge1p::synapse0x376e030() {
   return (neuron0x3764c80()*-0.00748205);
}

double NNfunction_nn_chi3_charge1p::synapse0x376e070() {
   return (neuron0x3764fc0()*0.00899062);
}

double NNfunction_nn_chi3_charge1p::synapse0x376e0b0() {
   return (neuron0x3765300()*-0.885959);
}

double NNfunction_nn_chi3_charge1p::synapse0x376e280() {
   return (neuron0x37607d0()*-0.0386356);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777310() {
   return (neuron0x3760a80()*5.00173);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777350() {
   return (neuron0x3760dc0()*1.47468);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777390() {
   return (neuron0x3761100()*0.0253851);
}

double NNfunction_nn_chi3_charge1p::synapse0x37773d0() {
   return (neuron0x3761440()*0.0524787);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777410() {
   return (neuron0x3761780()*-0.013388);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777450() {
   return (neuron0x3761ac0()*-0.0178446);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777490() {
   return (neuron0x3761e00()*0.00204768);
}

double NNfunction_nn_chi3_charge1p::synapse0x37774d0() {
   return (neuron0x3762140()*-0.0302712);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777510() {
   return (neuron0x3762480()*-0.0143672);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777550() {
   return (neuron0x37627c0()*0.00449773);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777590() {
   return (neuron0x3762b00()*-0.0745558);
}

double NNfunction_nn_chi3_charge1p::synapse0x37775d0() {
   return (neuron0x3762e40()*0.0365882);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777610() {
   return (neuron0x3763180()*0.00804107);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777650() {
   return (neuron0x37634c0()*-0.00459978);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777690() {
   return (neuron0x3763800()*0.011689);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777160() {
   return (neuron0x3763b40()*-0.0325197);
}

double NNfunction_nn_chi3_charge1p::synapse0x37771a0() {
   return (neuron0x37640a0()*-0.0453565);
}

double NNfunction_nn_chi3_charge1p::synapse0x37777e0() {
   return (neuron0x37642c0()*-0.0351725);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777820() {
   return (neuron0x3764600()*0.00461985);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777860() {
   return (neuron0x3764940()*-0.00874355);
}

double NNfunction_nn_chi3_charge1p::synapse0x37778a0() {
   return (neuron0x3764c80()*-0.0294147);
}

double NNfunction_nn_chi3_charge1p::synapse0x37778e0() {
   return (neuron0x3764fc0()*-0.00307367);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777920() {
   return (neuron0x3765300()*0.370627);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777ca0() {
   return (neuron0x37607d0()*-0.123065);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777ce0() {
   return (neuron0x3760a80()*5.69263);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777d20() {
   return (neuron0x3760dc0()*5.73421);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777d60() {
   return (neuron0x3761100()*-0.00248988);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777da0() {
   return (neuron0x3761440()*0.0211708);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777de0() {
   return (neuron0x3761780()*-0.0565263);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777e20() {
   return (neuron0x3761ac0()*-0.0169079);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777e60() {
   return (neuron0x3761e00()*0.0718816);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777ea0() {
   return (neuron0x3762140()*-0.0843999);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777ee0() {
   return (neuron0x3762480()*-0.059349);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777f20() {
   return (neuron0x37627c0()*0.0646886);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777f60() {
   return (neuron0x3762b00()*-2.06759);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777fa0() {
   return (neuron0x3762e40()*-0.09706);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777fe0() {
   return (neuron0x3763180()*-0.152697);
}

double NNfunction_nn_chi3_charge1p::synapse0x3778020() {
   return (neuron0x37634c0()*-0.0433391);
}

double NNfunction_nn_chi3_charge1p::synapse0x3778060() {
   return (neuron0x3763800()*-0.0682258);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777af0() {
   return (neuron0x3763b40()*-0.0242057);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777b30() {
   return (neuron0x37640a0()*-0.120915);
}

double NNfunction_nn_chi3_charge1p::synapse0x37781b0() {
   return (neuron0x37642c0()*-0.0839001);
}

double NNfunction_nn_chi3_charge1p::synapse0x37781f0() {
   return (neuron0x3764600()*0.0936813);
}

double NNfunction_nn_chi3_charge1p::synapse0x3778230() {
   return (neuron0x3764940()*0.0630324);
}

double NNfunction_nn_chi3_charge1p::synapse0x3778270() {
   return (neuron0x3764c80()*-0.00320052);
}

double NNfunction_nn_chi3_charge1p::synapse0x37782b0() {
   return (neuron0x3764fc0()*-0.0150472);
}

double NNfunction_nn_chi3_charge1p::synapse0x37782f0() {
   return (neuron0x3765300()*0.457286);
}

double NNfunction_nn_chi3_charge1p::synapse0x3778670() {
   return (neuron0x37607d0()*0.73425);
}

double NNfunction_nn_chi3_charge1p::synapse0x37786b0() {
   return (neuron0x3760a80()*0.0535805);
}

double NNfunction_nn_chi3_charge1p::synapse0x37786f0() {
   return (neuron0x3760dc0()*0.842276);
}

double NNfunction_nn_chi3_charge1p::synapse0x3778730() {
   return (neuron0x3761100()*-0.214275);
}

double NNfunction_nn_chi3_charge1p::synapse0x3778770() {
   return (neuron0x3761440()*-0.0471881);
}

double NNfunction_nn_chi3_charge1p::synapse0x37787b0() {
   return (neuron0x3761780()*0.0431416);
}

double NNfunction_nn_chi3_charge1p::synapse0x37787f0() {
   return (neuron0x3761ac0()*0.258548);
}

double NNfunction_nn_chi3_charge1p::synapse0x3778830() {
   return (neuron0x3761e00()*-0.0873901);
}

double NNfunction_nn_chi3_charge1p::synapse0x3778870() {
   return (neuron0x3762140()*0.104919);
}

double NNfunction_nn_chi3_charge1p::synapse0x37788b0() {
   return (neuron0x3762480()*-0.0895989);
}

double NNfunction_nn_chi3_charge1p::synapse0x37788f0() {
   return (neuron0x37627c0()*0.0866883);
}

double NNfunction_nn_chi3_charge1p::synapse0x3778930() {
   return (neuron0x3762b00()*-0.221696);
}

double NNfunction_nn_chi3_charge1p::synapse0x3778970() {
   return (neuron0x3762e40()*0.0487297);
}

double NNfunction_nn_chi3_charge1p::synapse0x37789b0() {
   return (neuron0x3763180()*-0.0200567);
}

double NNfunction_nn_chi3_charge1p::synapse0x37789f0() {
   return (neuron0x37634c0()*-0.131429);
}

double NNfunction_nn_chi3_charge1p::synapse0x3778a30() {
   return (neuron0x3763800()*-0.210056);
}

double NNfunction_nn_chi3_charge1p::synapse0x37784c0() {
   return (neuron0x3763b40()*0.0729592);
}

double NNfunction_nn_chi3_charge1p::synapse0x3778500() {
   return (neuron0x37640a0()*0.133227);
}

double NNfunction_nn_chi3_charge1p::synapse0x3778b80() {
   return (neuron0x37642c0()*-0.0564262);
}

double NNfunction_nn_chi3_charge1p::synapse0x3778bc0() {
   return (neuron0x3764600()*0.0459227);
}

double NNfunction_nn_chi3_charge1p::synapse0x3778c00() {
   return (neuron0x3764940()*0.0160797);
}

double NNfunction_nn_chi3_charge1p::synapse0x3778c40() {
   return (neuron0x3764c80()*-0.0412472);
}

double NNfunction_nn_chi3_charge1p::synapse0x3778c80() {
   return (neuron0x3764fc0()*0.0364895);
}

double NNfunction_nn_chi3_charge1p::synapse0x3778cc0() {
   return (neuron0x3765300()*-0.412915);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779040() {
   return (neuron0x37607d0()*0.00656387);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779080() {
   return (neuron0x3760a80()*-11.4005);
}

double NNfunction_nn_chi3_charge1p::synapse0x37790c0() {
   return (neuron0x3760dc0()*-0.672688);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779100() {
   return (neuron0x3761100()*0.0122253);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779140() {
   return (neuron0x3761440()*0.031957);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779180() {
   return (neuron0x3761780()*0.00510129);
}

double NNfunction_nn_chi3_charge1p::synapse0x37791c0() {
   return (neuron0x3761ac0()*0.00203695);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779200() {
   return (neuron0x3761e00()*0.00395582);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779240() {
   return (neuron0x3762140()*-0.000289043);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779280() {
   return (neuron0x3762480()*-0.00542177);
}

double NNfunction_nn_chi3_charge1p::synapse0x37792c0() {
   return (neuron0x37627c0()*-0.0197377);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779300() {
   return (neuron0x3762b00()*-0.20536);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779340() {
   return (neuron0x3762e40()*0.0196139);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779380() {
   return (neuron0x3763180()*0.00618445);
}

double NNfunction_nn_chi3_charge1p::synapse0x37793c0() {
   return (neuron0x37634c0()*0.0377192);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779400() {
   return (neuron0x3763800()*0.0151857);
}

double NNfunction_nn_chi3_charge1p::synapse0x3778e90() {
   return (neuron0x3763b40()*0.00026811);
}

double NNfunction_nn_chi3_charge1p::synapse0x3778ed0() {
   return (neuron0x37640a0()*-0.0338121);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779550() {
   return (neuron0x37642c0()*-0.0221056);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779590() {
   return (neuron0x3764600()*-0.0141427);
}

double NNfunction_nn_chi3_charge1p::synapse0x37795d0() {
   return (neuron0x3764940()*0.0106046);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779610() {
   return (neuron0x3764c80()*-0.00364865);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779650() {
   return (neuron0x3764fc0()*-0.00955931);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779690() {
   return (neuron0x3765300()*1.38213);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779a10() {
   return (neuron0x37607d0()*-0.0165222);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779a50() {
   return (neuron0x3760a80()*0.0249609);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779a90() {
   return (neuron0x3760dc0()*7.52677);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779ad0() {
   return (neuron0x3761100()*-0.0570087);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779b10() {
   return (neuron0x3761440()*0.00883686);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779b50() {
   return (neuron0x3761780()*0.0360381);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779b90() {
   return (neuron0x3761ac0()*0.00943284);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779bd0() {
   return (neuron0x3761e00()*0.0346233);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779c10() {
   return (neuron0x3762140()*0.00494527);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779c50() {
   return (neuron0x3762480()*-0.027678);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779c90() {
   return (neuron0x37627c0()*-0.0109824);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779cd0() {
   return (neuron0x3762b00()*-8.15042);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779d10() {
   return (neuron0x3762e40()*-0.0418176);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779d50() {
   return (neuron0x3763180()*0.051073);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779d90() {
   return (neuron0x37634c0()*0.0337078);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779dd0() {
   return (neuron0x3763800()*-0.00553403);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779860() {
   return (neuron0x3763b40()*0.0360213);
}

double NNfunction_nn_chi3_charge1p::synapse0x37798a0() {
   return (neuron0x37640a0()*0.0104176);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779f20() {
   return (neuron0x37642c0()*0.0332007);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779f60() {
   return (neuron0x3764600()*-0.0140656);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779fa0() {
   return (neuron0x3764940()*0.0158825);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779fe0() {
   return (neuron0x3764c80()*0.00797747);
}

double NNfunction_nn_chi3_charge1p::synapse0x377a020() {
   return (neuron0x3764fc0()*-0.00510406);
}

double NNfunction_nn_chi3_charge1p::synapse0x377a060() {
   return (neuron0x3765300()*-1.16179);
}

double NNfunction_nn_chi3_charge1p::synapse0x377a3e0() {
   return (neuron0x37607d0()*-0.0611495);
}

double NNfunction_nn_chi3_charge1p::synapse0x377a420() {
   return (neuron0x3760a80()*0.010141);
}

double NNfunction_nn_chi3_charge1p::synapse0x377a460() {
   return (neuron0x3760dc0()*1.44411);
}

double NNfunction_nn_chi3_charge1p::synapse0x377a4a0() {
   return (neuron0x3761100()*0.0301001);
}

double NNfunction_nn_chi3_charge1p::synapse0x377a4e0() {
   return (neuron0x3761440()*-0.013114);
}

double NNfunction_nn_chi3_charge1p::synapse0x377a520() {
   return (neuron0x3761780()*0.00839839);
}

double NNfunction_nn_chi3_charge1p::synapse0x377a560() {
   return (neuron0x3761ac0()*0.00149324);
}

double NNfunction_nn_chi3_charge1p::synapse0x377a5a0() {
   return (neuron0x3761e00()*0.00447256);
}

double NNfunction_nn_chi3_charge1p::synapse0x377a5e0() {
   return (neuron0x3762140()*-0.00534076);
}

double NNfunction_nn_chi3_charge1p::synapse0x377a620() {
   return (neuron0x3762480()*0.00364509);
}

double NNfunction_nn_chi3_charge1p::synapse0x377a660() {
   return (neuron0x37627c0()*0.00499009);
}

double NNfunction_nn_chi3_charge1p::synapse0x377a6a0() {
   return (neuron0x3762b00()*-0.0557629);
}

double NNfunction_nn_chi3_charge1p::synapse0x377a6e0() {
   return (neuron0x3762e40()*0.0229133);
}

double NNfunction_nn_chi3_charge1p::synapse0x377a720() {
   return (neuron0x3763180()*0.0216814);
}

double NNfunction_nn_chi3_charge1p::synapse0x377a760() {
   return (neuron0x37634c0()*-0.00671281);
}

double NNfunction_nn_chi3_charge1p::synapse0x377a7a0() {
   return (neuron0x3763800()*0.00382491);
}

double NNfunction_nn_chi3_charge1p::synapse0x377a230() {
   return (neuron0x3763b40()*-0.00571325);
}

double NNfunction_nn_chi3_charge1p::synapse0x377a270() {
   return (neuron0x37640a0()*-0.0045022);
}

double NNfunction_nn_chi3_charge1p::synapse0x377a8f0() {
   return (neuron0x37642c0()*0.00953725);
}

double NNfunction_nn_chi3_charge1p::synapse0x377a930() {
   return (neuron0x3764600()*0.00292854);
}

double NNfunction_nn_chi3_charge1p::synapse0x377a970() {
   return (neuron0x3764940()*0.00299227);
}

double NNfunction_nn_chi3_charge1p::synapse0x377a9b0() {
   return (neuron0x3764c80()*-0.0150992);
}

double NNfunction_nn_chi3_charge1p::synapse0x377a9f0() {
   return (neuron0x3764fc0()*0.00813649);
}

double NNfunction_nn_chi3_charge1p::synapse0x377aa30() {
   return (neuron0x3765300()*7.09303);
}

double NNfunction_nn_chi3_charge1p::synapse0x377adb0() {
   return (neuron0x37607d0()*-0.015525);
}

double NNfunction_nn_chi3_charge1p::synapse0x377adf0() {
   return (neuron0x3760a80()*-0.0074874);
}

double NNfunction_nn_chi3_charge1p::synapse0x377ae30() {
   return (neuron0x3760dc0()*-0.598431);
}

double NNfunction_nn_chi3_charge1p::synapse0x377ae70() {
   return (neuron0x3761100()*2.73938);
}

double NNfunction_nn_chi3_charge1p::synapse0x377aeb0() {
   return (neuron0x3761440()*-0.0250098);
}

double NNfunction_nn_chi3_charge1p::synapse0x377aef0() {
   return (neuron0x3761780()*0.0163257);
}

double NNfunction_nn_chi3_charge1p::synapse0x377af30() {
   return (neuron0x3761ac0()*0.024833);
}

double NNfunction_nn_chi3_charge1p::synapse0x377af70() {
   return (neuron0x3761e00()*0.031661);
}

double NNfunction_nn_chi3_charge1p::synapse0x377afb0() {
   return (neuron0x3762140()*0.00637275);
}

double NNfunction_nn_chi3_charge1p::synapse0x377aff0() {
   return (neuron0x3762480()*-0.0166608);
}

double NNfunction_nn_chi3_charge1p::synapse0x377b030() {
   return (neuron0x37627c0()*0.03371);
}

double NNfunction_nn_chi3_charge1p::synapse0x377b070() {
   return (neuron0x3762b00()*-1.02429);
}

double NNfunction_nn_chi3_charge1p::synapse0x377b0b0() {
   return (neuron0x3762e40()*0.0569601);
}

double NNfunction_nn_chi3_charge1p::synapse0x377b0f0() {
   return (neuron0x3763180()*-0.0222046);
}

double NNfunction_nn_chi3_charge1p::synapse0x377b130() {
   return (neuron0x37634c0()*0.0109557);
}

double NNfunction_nn_chi3_charge1p::synapse0x377b170() {
   return (neuron0x3763800()*0.0282354);
}

double NNfunction_nn_chi3_charge1p::synapse0x377ac00() {
   return (neuron0x3763b40()*-0.0674957);
}

double NNfunction_nn_chi3_charge1p::synapse0x377ac40() {
   return (neuron0x37640a0()*-0.00175695);
}

double NNfunction_nn_chi3_charge1p::synapse0x377b2c0() {
   return (neuron0x37642c0()*0.0277279);
}

double NNfunction_nn_chi3_charge1p::synapse0x377b300() {
   return (neuron0x3764600()*-0.0297891);
}

double NNfunction_nn_chi3_charge1p::synapse0x377b340() {
   return (neuron0x3764940()*0.0308563);
}

double NNfunction_nn_chi3_charge1p::synapse0x377b380() {
   return (neuron0x3764c80()*0.0506736);
}

double NNfunction_nn_chi3_charge1p::synapse0x377b3c0() {
   return (neuron0x3764fc0()*-0.0140495);
}

double NNfunction_nn_chi3_charge1p::synapse0x377b400() {
   return (neuron0x3765300()*-0.0810543);
}

double NNfunction_nn_chi3_charge1p::synapse0x377b780() {
   return (neuron0x37607d0()*3.26962);
}

double NNfunction_nn_chi3_charge1p::synapse0x377b7c0() {
   return (neuron0x3760a80()*-0.0318039);
}

double NNfunction_nn_chi3_charge1p::synapse0x377b800() {
   return (neuron0x3760dc0()*0.81461);
}

double NNfunction_nn_chi3_charge1p::synapse0x377b840() {
   return (neuron0x3761100()*-0.180742);
}

double NNfunction_nn_chi3_charge1p::synapse0x377b880() {
   return (neuron0x3761440()*0.166592);
}

double NNfunction_nn_chi3_charge1p::synapse0x377b8c0() {
   return (neuron0x3761780()*0.141817);
}

double NNfunction_nn_chi3_charge1p::synapse0x377b900() {
   return (neuron0x3761ac0()*0.117215);
}

double NNfunction_nn_chi3_charge1p::synapse0x377b940() {
   return (neuron0x3761e00()*0.042932);
}

double NNfunction_nn_chi3_charge1p::synapse0x377b980() {
   return (neuron0x3762140()*0.0181102);
}

double NNfunction_nn_chi3_charge1p::synapse0x377b9c0() {
   return (neuron0x3762480()*0.0833978);
}

double NNfunction_nn_chi3_charge1p::synapse0x377ba00() {
   return (neuron0x37627c0()*0.196368);
}

double NNfunction_nn_chi3_charge1p::synapse0x377ba40() {
   return (neuron0x3762b00()*-0.00122366);
}

double NNfunction_nn_chi3_charge1p::synapse0x377ba80() {
   return (neuron0x3762e40()*-0.00674681);
}

double NNfunction_nn_chi3_charge1p::synapse0x377bac0() {
   return (neuron0x3763180()*-0.110625);
}

double NNfunction_nn_chi3_charge1p::synapse0x377bb00() {
   return (neuron0x37634c0()*0.0322317);
}

double NNfunction_nn_chi3_charge1p::synapse0x377bb40() {
   return (neuron0x3763800()*-0.0718191);
}

double NNfunction_nn_chi3_charge1p::synapse0x377b5d0() {
   return (neuron0x3763b40()*0.128309);
}

double NNfunction_nn_chi3_charge1p::synapse0x377b610() {
   return (neuron0x37640a0()*0.0746521);
}

double NNfunction_nn_chi3_charge1p::synapse0x377bc90() {
   return (neuron0x37642c0()*0.00237793);
}

double NNfunction_nn_chi3_charge1p::synapse0x377bcd0() {
   return (neuron0x3764600()*-0.0072492);
}

double NNfunction_nn_chi3_charge1p::synapse0x377bd10() {
   return (neuron0x3764940()*0.17323);
}

double NNfunction_nn_chi3_charge1p::synapse0x377bd50() {
   return (neuron0x3764c80()*0.0591187);
}

double NNfunction_nn_chi3_charge1p::synapse0x377bd90() {
   return (neuron0x3764fc0()*-0.0177839);
}

double NNfunction_nn_chi3_charge1p::synapse0x377bdd0() {
   return (neuron0x3765300()*0.0959902);
}

double NNfunction_nn_chi3_charge1p::synapse0x377c150() {
   return (neuron0x37607d0()*-0.124154);
}

double NNfunction_nn_chi3_charge1p::synapse0x3770720() {
   return (neuron0x3760a80()*-8.05501);
}

double NNfunction_nn_chi3_charge1p::synapse0x3770760() {
   return (neuron0x3760dc0()*-0.210264);
}

double NNfunction_nn_chi3_charge1p::synapse0x37707a0() {
   return (neuron0x3761100()*-0.0423076);
}

double NNfunction_nn_chi3_charge1p::synapse0x37709f0() {
   return (neuron0x3761440()*0.00596497);
}

double NNfunction_nn_chi3_charge1p::synapse0x3770a30() {
   return (neuron0x3761780()*0.0177375);
}

double NNfunction_nn_chi3_charge1p::synapse0x3770a70() {
   return (neuron0x3761ac0()*0.034136);
}

double NNfunction_nn_chi3_charge1p::synapse0x3770cc0() {
   return (neuron0x3761e00()*0.0172744);
}

double NNfunction_nn_chi3_charge1p::synapse0x3770d00() {
   return (neuron0x3762140()*-0.0127734);
}

double NNfunction_nn_chi3_charge1p::synapse0x3770f50() {
   return (neuron0x3762480()*0.103306);
}

double NNfunction_nn_chi3_charge1p::synapse0x3770f90() {
   return (neuron0x37627c0()*0.0117349);
}

double NNfunction_nn_chi3_charge1p::synapse0x3770fd0() {
   return (neuron0x3762b00()*-0.364176);
}

double NNfunction_nn_chi3_charge1p::synapse0x3771220() {
   return (neuron0x3762e40()*0.0228454);
}

double NNfunction_nn_chi3_charge1p::synapse0x3771260() {
   return (neuron0x3763180()*0.00631669);
}

double NNfunction_nn_chi3_charge1p::synapse0x37714b0() {
   return (neuron0x37634c0()*0.0360617);
}

double NNfunction_nn_chi3_charge1p::synapse0x37714f0() {
   return (neuron0x3763800()*-0.0143467);
}

double NNfunction_nn_chi3_charge1p::synapse0x377bfa0() {
   return (neuron0x3763b40()*0.0227717);
}

double NNfunction_nn_chi3_charge1p::synapse0x377bfe0() {
   return (neuron0x37640a0()*-0.00838527);
}

double NNfunction_nn_chi3_charge1p::synapse0x3771640() {
   return (neuron0x37642c0()*0.000233171);
}

double NNfunction_nn_chi3_charge1p::synapse0x3771b50() {
   return (neuron0x3764600()*0.0198254);
}

double NNfunction_nn_chi3_charge1p::synapse0x3771b90() {
   return (neuron0x3764940()*-0.0312445);
}

double NNfunction_nn_chi3_charge1p::synapse0x3771bd0() {
   return (neuron0x3764c80()*0.0343438);
}

double NNfunction_nn_chi3_charge1p::synapse0x3771e20() {
   return (neuron0x3764fc0()*-0.00561763);
}

double NNfunction_nn_chi3_charge1p::synapse0x3771e60() {
   return (neuron0x3765300()*-2.21973);
}

double NNfunction_nn_chi3_charge1p::synapse0x3771710() {
   return (neuron0x37607d0()*0.0442945);
}

double NNfunction_nn_chi3_charge1p::synapse0x3771750() {
   return (neuron0x3760a80()*0.00798573);
}

double NNfunction_nn_chi3_charge1p::synapse0x3771790() {
   return (neuron0x3760dc0()*1.54997);
}

double NNfunction_nn_chi3_charge1p::synapse0x37717d0() {
   return (neuron0x3761100()*-0.0037339);
}

double NNfunction_nn_chi3_charge1p::synapse0x3772150() {
   return (neuron0x3761440()*0.00213558);
}

double NNfunction_nn_chi3_charge1p::synapse0x377e4a0() {
   return (neuron0x3761780()*0.0139027);
}

double NNfunction_nn_chi3_charge1p::synapse0x377e4e0() {
   return (neuron0x3761ac0()*0.0122541);
}

double NNfunction_nn_chi3_charge1p::synapse0x377e520() {
   return (neuron0x3761e00()*-0.000808849);
}

double NNfunction_nn_chi3_charge1p::synapse0x377e560() {
   return (neuron0x3762140()*0.0163839);
}

double NNfunction_nn_chi3_charge1p::synapse0x377e5a0() {
   return (neuron0x3762480()*-0.000826464);
}

double NNfunction_nn_chi3_charge1p::synapse0x377e5e0() {
   return (neuron0x37627c0()*-0.00614507);
}

double NNfunction_nn_chi3_charge1p::synapse0x377e620() {
   return (neuron0x3762b00()*-0.0621623);
}

double NNfunction_nn_chi3_charge1p::synapse0x377e660() {
   return (neuron0x3762e40()*-0.00297882);
}

double NNfunction_nn_chi3_charge1p::synapse0x377e6a0() {
   return (neuron0x3763180()*-0.00738099);
}

double NNfunction_nn_chi3_charge1p::synapse0x377e6e0() {
   return (neuron0x37634c0()*-0.00913641);
}

double NNfunction_nn_chi3_charge1p::synapse0x377e720() {
   return (neuron0x3763800()*-0.0134375);
}

double NNfunction_nn_chi3_charge1p::synapse0x3772030() {
   return (neuron0x3763b40()*0.00339937);
}

double NNfunction_nn_chi3_charge1p::synapse0x3772070() {
   return (neuron0x37640a0()*-0.0221019);
}

double NNfunction_nn_chi3_charge1p::synapse0x377e870() {
   return (neuron0x37642c0()*-0.0113265);
}

double NNfunction_nn_chi3_charge1p::synapse0x377e8b0() {
   return (neuron0x3764600()*-0.00605941);
}

double NNfunction_nn_chi3_charge1p::synapse0x377e8f0() {
   return (neuron0x3764940()*0.0318378);
}

double NNfunction_nn_chi3_charge1p::synapse0x377e930() {
   return (neuron0x3764c80()*-0.0137205);
}

double NNfunction_nn_chi3_charge1p::synapse0x377e970() {
   return (neuron0x3764fc0()*-0.0185996);
}

double NNfunction_nn_chi3_charge1p::synapse0x377e9b0() {
   return (neuron0x3765300()*3.85578);
}

double NNfunction_nn_chi3_charge1p::synapse0x377ed30() {
   return (neuron0x37607d0()*0.233131);
}

double NNfunction_nn_chi3_charge1p::synapse0x377ed70() {
   return (neuron0x3760a80()*0.0810267);
}

double NNfunction_nn_chi3_charge1p::synapse0x377edb0() {
   return (neuron0x3760dc0()*0.378386);
}

double NNfunction_nn_chi3_charge1p::synapse0x377edf0() {
   return (neuron0x3761100()*-0.0889506);
}

double NNfunction_nn_chi3_charge1p::synapse0x377ee30() {
   return (neuron0x3761440()*0.426569);
}

double NNfunction_nn_chi3_charge1p::synapse0x377ee70() {
   return (neuron0x3761780()*-0.14497);
}

double NNfunction_nn_chi3_charge1p::synapse0x377eeb0() {
   return (neuron0x3761ac0()*-0.997657);
}

double NNfunction_nn_chi3_charge1p::synapse0x377eef0() {
   return (neuron0x3761e00()*0.16058);
}

double NNfunction_nn_chi3_charge1p::synapse0x377ef30() {
   return (neuron0x3762140()*-0.547824);
}

double NNfunction_nn_chi3_charge1p::synapse0x377ef70() {
   return (neuron0x3762480()*-0.720206);
}

double NNfunction_nn_chi3_charge1p::synapse0x377efb0() {
   return (neuron0x37627c0()*-0.0517155);
}

double NNfunction_nn_chi3_charge1p::synapse0x377eff0() {
   return (neuron0x3762b00()*-0.0857349);
}

double NNfunction_nn_chi3_charge1p::synapse0x377f030() {
   return (neuron0x3762e40()*0.237701);
}

double NNfunction_nn_chi3_charge1p::synapse0x377f070() {
   return (neuron0x3763180()*0.208641);
}

double NNfunction_nn_chi3_charge1p::synapse0x377f0b0() {
   return (neuron0x37634c0()*0.172815);
}

double NNfunction_nn_chi3_charge1p::synapse0x377f0f0() {
   return (neuron0x3763800()*0.116861);
}

double NNfunction_nn_chi3_charge1p::synapse0x377eb80() {
   return (neuron0x3763b40()*-0.23342);
}

double NNfunction_nn_chi3_charge1p::synapse0x377ebc0() {
   return (neuron0x37640a0()*0.19444);
}

double NNfunction_nn_chi3_charge1p::synapse0x377f240() {
   return (neuron0x37642c0()*-0.261663);
}

double NNfunction_nn_chi3_charge1p::synapse0x377f280() {
   return (neuron0x3764600()*-0.161117);
}

double NNfunction_nn_chi3_charge1p::synapse0x377f2c0() {
   return (neuron0x3764940()*-0.51068);
}

double NNfunction_nn_chi3_charge1p::synapse0x377f300() {
   return (neuron0x3764c80()*-0.289392);
}

double NNfunction_nn_chi3_charge1p::synapse0x377f340() {
   return (neuron0x3764fc0()*0.518778);
}

double NNfunction_nn_chi3_charge1p::synapse0x377f380() {
   return (neuron0x3765300()*1.01863);
}

double NNfunction_nn_chi3_charge1p::synapse0x377f700() {
   return (neuron0x37607d0()*0.0219524);
}

double NNfunction_nn_chi3_charge1p::synapse0x377f740() {
   return (neuron0x3760a80()*0.0375633);
}

double NNfunction_nn_chi3_charge1p::synapse0x377f780() {
   return (neuron0x3760dc0()*-0.302768);
}

double NNfunction_nn_chi3_charge1p::synapse0x377f7c0() {
   return (neuron0x3761100()*-0.0379559);
}

double NNfunction_nn_chi3_charge1p::synapse0x377f800() {
   return (neuron0x3761440()*-0.00139177);
}

double NNfunction_nn_chi3_charge1p::synapse0x377f840() {
   return (neuron0x3761780()*0.0287743);
}

double NNfunction_nn_chi3_charge1p::synapse0x377f880() {
   return (neuron0x3761ac0()*-0.0131313);
}

double NNfunction_nn_chi3_charge1p::synapse0x377f8c0() {
   return (neuron0x3761e00()*0.00792418);
}

double NNfunction_nn_chi3_charge1p::synapse0x377f900() {
   return (neuron0x3762140()*0.0141728);
}

double NNfunction_nn_chi3_charge1p::synapse0x377f940() {
   return (neuron0x3762480()*-0.0248432);
}

double NNfunction_nn_chi3_charge1p::synapse0x377f980() {
   return (neuron0x37627c0()*0.00209398);
}

double NNfunction_nn_chi3_charge1p::synapse0x377f9c0() {
   return (neuron0x3762b00()*-2.94472);
}

double NNfunction_nn_chi3_charge1p::synapse0x377fa00() {
   return (neuron0x3762e40()*-0.00157492);
}

double NNfunction_nn_chi3_charge1p::synapse0x377fa40() {
   return (neuron0x3763180()*-0.00144875);
}

double NNfunction_nn_chi3_charge1p::synapse0x377fa80() {
   return (neuron0x37634c0()*0.00514416);
}

double NNfunction_nn_chi3_charge1p::synapse0x377fac0() {
   return (neuron0x3763800()*0.0380082);
}

double NNfunction_nn_chi3_charge1p::synapse0x377f550() {
   return (neuron0x3763b40()*0.0224078);
}

double NNfunction_nn_chi3_charge1p::synapse0x377f590() {
   return (neuron0x37640a0()*0.0068659);
}

double NNfunction_nn_chi3_charge1p::synapse0x377fc10() {
   return (neuron0x37642c0()*-0.00608099);
}

double NNfunction_nn_chi3_charge1p::synapse0x377fc50() {
   return (neuron0x3764600()*-0.00365617);
}

double NNfunction_nn_chi3_charge1p::synapse0x377fc90() {
   return (neuron0x3764940()*0.00668488);
}

double NNfunction_nn_chi3_charge1p::synapse0x377fcd0() {
   return (neuron0x3764c80()*0.00761448);
}

double NNfunction_nn_chi3_charge1p::synapse0x377fd10() {
   return (neuron0x3764fc0()*0.0114414);
}

double NNfunction_nn_chi3_charge1p::synapse0x377fd50() {
   return (neuron0x3765300()*-0.673102);
}

double NNfunction_nn_chi3_charge1p::synapse0x37800d0() {
   return (neuron0x37607d0()*-0.0633957);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780110() {
   return (neuron0x3760a80()*0.0331674);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780150() {
   return (neuron0x3760dc0()*-6.67064);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780190() {
   return (neuron0x3761100()*0.0565847);
}

double NNfunction_nn_chi3_charge1p::synapse0x37801d0() {
   return (neuron0x3761440()*0.00195949);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780210() {
   return (neuron0x3761780()*0.0392127);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780250() {
   return (neuron0x3761ac0()*0.0193506);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780290() {
   return (neuron0x3761e00()*0.0322299);
}

double NNfunction_nn_chi3_charge1p::synapse0x37802d0() {
   return (neuron0x3762140()*0.0225315);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780310() {
   return (neuron0x3762480()*-0.00756742);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780350() {
   return (neuron0x37627c0()*0.00671842);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780390() {
   return (neuron0x3762b00()*0.0796047);
}

double NNfunction_nn_chi3_charge1p::synapse0x37803d0() {
   return (neuron0x3762e40()*0.0125779);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780410() {
   return (neuron0x3763180()*0.0812877);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780450() {
   return (neuron0x37634c0()*0.0278142);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780490() {
   return (neuron0x3763800()*0.0441351);
}

double NNfunction_nn_chi3_charge1p::synapse0x377ff20() {
   return (neuron0x3763b40()*0.0462096);
}

double NNfunction_nn_chi3_charge1p::synapse0x377ff60() {
   return (neuron0x37640a0()*0.0483285);
}

double NNfunction_nn_chi3_charge1p::synapse0x37805e0() {
   return (neuron0x37642c0()*0.0100309);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780620() {
   return (neuron0x3764600()*0.0385817);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780660() {
   return (neuron0x3764940()*-0.0333211);
}

double NNfunction_nn_chi3_charge1p::synapse0x37806a0() {
   return (neuron0x3764c80()*-0.0150219);
}

double NNfunction_nn_chi3_charge1p::synapse0x37806e0() {
   return (neuron0x3764fc0()*-0.0250588);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780720() {
   return (neuron0x3765300()*6.08216);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780aa0() {
   return (neuron0x37607d0()*-1.02442);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780ae0() {
   return (neuron0x3760a80()*-0.502822);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780b20() {
   return (neuron0x3760dc0()*0.0571402);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780b60() {
   return (neuron0x3761100()*0.435058);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780ba0() {
   return (neuron0x3761440()*0.495116);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780be0() {
   return (neuron0x3761780()*-0.115934);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780c20() {
   return (neuron0x3761ac0()*-0.451944);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780c60() {
   return (neuron0x3761e00()*0.109122);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780ca0() {
   return (neuron0x3762140()*-0.0381673);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780ce0() {
   return (neuron0x3762480()*0.300791);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780d20() {
   return (neuron0x37627c0()*-0.50486);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780d60() {
   return (neuron0x3762b00()*-0.00660362);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780da0() {
   return (neuron0x3762e40()*-0.487778);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780de0() {
   return (neuron0x3763180()*-0.750272);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780e20() {
   return (neuron0x37634c0()*-0.457168);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780e60() {
   return (neuron0x3763800()*0.197681);
}

double NNfunction_nn_chi3_charge1p::synapse0x37808f0() {
   return (neuron0x3763b40()*-0.147394);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780930() {
   return (neuron0x37640a0()*-0.819505);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780fb0() {
   return (neuron0x37642c0()*0.48747);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780ff0() {
   return (neuron0x3764600()*0.421119);
}

double NNfunction_nn_chi3_charge1p::synapse0x3781030() {
   return (neuron0x3764940()*-0.801959);
}

double NNfunction_nn_chi3_charge1p::synapse0x3781070() {
   return (neuron0x3764c80()*-0.347536);
}

double NNfunction_nn_chi3_charge1p::synapse0x37810b0() {
   return (neuron0x3764fc0()*-0.0616504);
}

double NNfunction_nn_chi3_charge1p::synapse0x37810f0() {
   return (neuron0x3765300()*-0.552158);
}

double NNfunction_nn_chi3_charge1p::synapse0x3781470() {
   return (neuron0x37607d0()*-0.020355);
}

double NNfunction_nn_chi3_charge1p::synapse0x37814b0() {
   return (neuron0x3760a80()*-9.85956);
}

double NNfunction_nn_chi3_charge1p::synapse0x37814f0() {
   return (neuron0x3760dc0()*2.28247);
}

double NNfunction_nn_chi3_charge1p::synapse0x3781530() {
   return (neuron0x3761100()*-0.017002);
}

double NNfunction_nn_chi3_charge1p::synapse0x3781570() {
   return (neuron0x3761440()*0.028095);
}

double NNfunction_nn_chi3_charge1p::synapse0x37815b0() {
   return (neuron0x3761780()*-0.000547495);
}

double NNfunction_nn_chi3_charge1p::synapse0x37815f0() {
   return (neuron0x3761ac0()*-0.00339983);
}

double NNfunction_nn_chi3_charge1p::synapse0x3781630() {
   return (neuron0x3761e00()*0.00299754);
}

double NNfunction_nn_chi3_charge1p::synapse0x3781670() {
   return (neuron0x3762140()*0.0105408);
}

double NNfunction_nn_chi3_charge1p::synapse0x37816b0() {
   return (neuron0x3762480()*0.0118181);
}

double NNfunction_nn_chi3_charge1p::synapse0x37816f0() {
   return (neuron0x37627c0()*-0.0406476);
}

double NNfunction_nn_chi3_charge1p::synapse0x3781730() {
   return (neuron0x3762b00()*0.113941);
}

double NNfunction_nn_chi3_charge1p::synapse0x3781770() {
   return (neuron0x3762e40()*-0.00641168);
}

double NNfunction_nn_chi3_charge1p::synapse0x37817b0() {
   return (neuron0x3763180()*-0.0140465);
}

double NNfunction_nn_chi3_charge1p::synapse0x37817f0() {
   return (neuron0x37634c0()*0.00278605);
}

double NNfunction_nn_chi3_charge1p::synapse0x3781830() {
   return (neuron0x3763800()*0.00471387);
}

double NNfunction_nn_chi3_charge1p::synapse0x37812c0() {
   return (neuron0x3763b40()*-0.00933996);
}

double NNfunction_nn_chi3_charge1p::synapse0x3781300() {
   return (neuron0x37640a0()*0.00180224);
}

double NNfunction_nn_chi3_charge1p::synapse0x3781980() {
   return (neuron0x37642c0()*-0.00466321);
}

double NNfunction_nn_chi3_charge1p::synapse0x37819c0() {
   return (neuron0x3764600()*-0.0236695);
}

double NNfunction_nn_chi3_charge1p::synapse0x3781a00() {
   return (neuron0x3764940()*-0.0273065);
}

double NNfunction_nn_chi3_charge1p::synapse0x3781a40() {
   return (neuron0x3764c80()*0.0334975);
}

double NNfunction_nn_chi3_charge1p::synapse0x3781a80() {
   return (neuron0x3764fc0()*-0.0257493);
}

double NNfunction_nn_chi3_charge1p::synapse0x3781ac0() {
   return (neuron0x3765300()*0.568036);
}

double NNfunction_nn_chi3_charge1p::synapse0x3781e40() {
   return (neuron0x37607d0()*-0.0134823);
}

double NNfunction_nn_chi3_charge1p::synapse0x3781e80() {
   return (neuron0x3760a80()*-0.191737);
}

double NNfunction_nn_chi3_charge1p::synapse0x3781ec0() {
   return (neuron0x3760dc0()*-0.445728);
}

double NNfunction_nn_chi3_charge1p::synapse0x3781f00() {
   return (neuron0x3761100()*-1.49152);
}

double NNfunction_nn_chi3_charge1p::synapse0x3781f40() {
   return (neuron0x3761440()*0.111517);
}

double NNfunction_nn_chi3_charge1p::synapse0x3781f80() {
   return (neuron0x3761780()*0.0267665);
}

double NNfunction_nn_chi3_charge1p::synapse0x3781fc0() {
   return (neuron0x3761ac0()*0.107293);
}

double NNfunction_nn_chi3_charge1p::synapse0x3782000() {
   return (neuron0x3761e00()*0.0246967);
}

double NNfunction_nn_chi3_charge1p::synapse0x3782040() {
   return (neuron0x3762140()*-0.0407367);
}

double NNfunction_nn_chi3_charge1p::synapse0x3782080() {
   return (neuron0x3762480()*-0.103991);
}

double NNfunction_nn_chi3_charge1p::synapse0x37820c0() {
   return (neuron0x37627c0()*-0.316051);
}

double NNfunction_nn_chi3_charge1p::synapse0x3782100() {
   return (neuron0x3762b00()*-0.204653);
}

double NNfunction_nn_chi3_charge1p::synapse0x3782140() {
   return (neuron0x3762e40()*-0.105962);
}

double NNfunction_nn_chi3_charge1p::synapse0x3782180() {
   return (neuron0x3763180()*-0.186739);
}

double NNfunction_nn_chi3_charge1p::synapse0x37821c0() {
   return (neuron0x37634c0()*-0.0661686);
}

double NNfunction_nn_chi3_charge1p::synapse0x3782200() {
   return (neuron0x3763800()*-0.256553);
}

double NNfunction_nn_chi3_charge1p::synapse0x3781c90() {
   return (neuron0x3763b40()*-0.125083);
}

double NNfunction_nn_chi3_charge1p::synapse0x3781cd0() {
   return (neuron0x37640a0()*-0.35044);
}

double NNfunction_nn_chi3_charge1p::synapse0x3782350() {
   return (neuron0x37642c0()*-0.120201);
}

double NNfunction_nn_chi3_charge1p::synapse0x3782390() {
   return (neuron0x3764600()*-0.0467193);
}

double NNfunction_nn_chi3_charge1p::synapse0x37823d0() {
   return (neuron0x3764940()*-0.131735);
}

double NNfunction_nn_chi3_charge1p::synapse0x3782410() {
   return (neuron0x3764c80()*0.00329575);
}

double NNfunction_nn_chi3_charge1p::synapse0x3782450() {
   return (neuron0x3764fc0()*0.204079);
}

double NNfunction_nn_chi3_charge1p::synapse0x3782490() {
   return (neuron0x3765300()*0.373606);
}

double NNfunction_nn_chi3_charge1p::synapse0x3782810() {
   return (neuron0x37607d0()*-0.0136933);
}

double NNfunction_nn_chi3_charge1p::synapse0x3782850() {
   return (neuron0x3760a80()*-10.1639);
}

double NNfunction_nn_chi3_charge1p::synapse0x3782890() {
   return (neuron0x3760dc0()*0.541043);
}

double NNfunction_nn_chi3_charge1p::synapse0x37828d0() {
   return (neuron0x3761100()*-0.0125968);
}

double NNfunction_nn_chi3_charge1p::synapse0x3782910() {
   return (neuron0x3761440()*-0.00909676);
}

double NNfunction_nn_chi3_charge1p::synapse0x3782950() {
   return (neuron0x3761780()*-0.00197163);
}

double NNfunction_nn_chi3_charge1p::synapse0x3782990() {
   return (neuron0x3761ac0()*-0.00590423);
}

double NNfunction_nn_chi3_charge1p::synapse0x37829d0() {
   return (neuron0x3761e00()*-0.00469365);
}

double NNfunction_nn_chi3_charge1p::synapse0x3782a10() {
   return (neuron0x3762140()*-0.00403689);
}

double NNfunction_nn_chi3_charge1p::synapse0x3782a50() {
   return (neuron0x3762480()*0.0210644);
}

double NNfunction_nn_chi3_charge1p::synapse0x3782a90() {
   return (neuron0x37627c0()*0.000554038);
}

double NNfunction_nn_chi3_charge1p::synapse0x3782ad0() {
   return (neuron0x3762b00()*0.108904);
}

double NNfunction_nn_chi3_charge1p::synapse0x3782b10() {
   return (neuron0x3762e40()*0.0121067);
}

double NNfunction_nn_chi3_charge1p::synapse0x3782b50() {
   return (neuron0x3763180()*0.0214497);
}

double NNfunction_nn_chi3_charge1p::synapse0x3782b90() {
   return (neuron0x37634c0()*-0.0034248);
}

double NNfunction_nn_chi3_charge1p::synapse0x3782bd0() {
   return (neuron0x3763800()*-0.0154975);
}

double NNfunction_nn_chi3_charge1p::synapse0x3782660() {
   return (neuron0x3763b40()*-0.0032112);
}

double NNfunction_nn_chi3_charge1p::synapse0x37826a0() {
   return (neuron0x37640a0()*-0.00862096);
}

double NNfunction_nn_chi3_charge1p::synapse0x3782d20() {
   return (neuron0x37642c0()*-0.0032924);
}

double NNfunction_nn_chi3_charge1p::synapse0x3782d60() {
   return (neuron0x3764600()*0.0176285);
}

double NNfunction_nn_chi3_charge1p::synapse0x3782da0() {
   return (neuron0x3764940()*0.0229963);
}

double NNfunction_nn_chi3_charge1p::synapse0x3782de0() {
   return (neuron0x3764c80()*-0.00843693);
}

double NNfunction_nn_chi3_charge1p::synapse0x3782e20() {
   return (neuron0x3764fc0()*0.0185394);
}

double NNfunction_nn_chi3_charge1p::synapse0x3782e60() {
   return (neuron0x3765300()*-0.967336);
}

double NNfunction_nn_chi3_charge1p::synapse0x376b910() {
   return (neuron0x37607d0()*0.258571);
}

double NNfunction_nn_chi3_charge1p::synapse0x376b950() {
   return (neuron0x3760a80()*-0.10136);
}

double NNfunction_nn_chi3_charge1p::synapse0x376b990() {
   return (neuron0x3760dc0()*0.489607);
}

double NNfunction_nn_chi3_charge1p::synapse0x376b9d0() {
   return (neuron0x3761100()*-0.230203);
}

double NNfunction_nn_chi3_charge1p::synapse0x376ba10() {
   return (neuron0x3761440()*0.537604);
}

double NNfunction_nn_chi3_charge1p::synapse0x376ba50() {
   return (neuron0x3761780()*0.358);
}

double NNfunction_nn_chi3_charge1p::synapse0x376ba90() {
   return (neuron0x3761ac0()*0.781213);
}

double NNfunction_nn_chi3_charge1p::synapse0x376bad0() {
   return (neuron0x3761e00()*-0.675921);
}

double NNfunction_nn_chi3_charge1p::synapse0x37835f0() {
   return (neuron0x3762140()*-0.639754);
}

double NNfunction_nn_chi3_charge1p::synapse0x3783630() {
   return (neuron0x3762480()*0.207232);
}

double NNfunction_nn_chi3_charge1p::synapse0x3783670() {
   return (neuron0x37627c0()*-0.896589);
}

double NNfunction_nn_chi3_charge1p::synapse0x37836b0() {
   return (neuron0x3762b00()*0.268501);
}

double NNfunction_nn_chi3_charge1p::synapse0x37836f0() {
   return (neuron0x3762e40()*0.0174758);
}

double NNfunction_nn_chi3_charge1p::synapse0x3783730() {
   return (neuron0x3763180()*-0.169241);
}

double NNfunction_nn_chi3_charge1p::synapse0x3783770() {
   return (neuron0x37634c0()*0.927443);
}

double NNfunction_nn_chi3_charge1p::synapse0x37837b0() {
   return (neuron0x3763800()*-0.532338);
}

double NNfunction_nn_chi3_charge1p::synapse0x3783030() {
   return (neuron0x3763b40()*-0.0943202);
}

double NNfunction_nn_chi3_charge1p::synapse0x3783070() {
   return (neuron0x37640a0()*-0.518232);
}

double NNfunction_nn_chi3_charge1p::synapse0x3783900() {
   return (neuron0x37642c0()*-0.449459);
}

double NNfunction_nn_chi3_charge1p::synapse0x3783940() {
   return (neuron0x3764600()*-0.532499);
}

double NNfunction_nn_chi3_charge1p::synapse0x3783980() {
   return (neuron0x3764940()*0.201384);
}

double NNfunction_nn_chi3_charge1p::synapse0x37839c0() {
   return (neuron0x3764c80()*0.00612963);
}

double NNfunction_nn_chi3_charge1p::synapse0x3783a00() {
   return (neuron0x3764fc0()*0.680441);
}

double NNfunction_nn_chi3_charge1p::synapse0x3783a40() {
   return (neuron0x3765300()*1.27682);
}

double NNfunction_nn_chi3_charge1p::synapse0x3783dc0() {
   return (neuron0x37607d0()*0.721908);
}

double NNfunction_nn_chi3_charge1p::synapse0x3783e00() {
   return (neuron0x3760a80()*-0.98353);
}

double NNfunction_nn_chi3_charge1p::synapse0x3783e40() {
   return (neuron0x3760dc0()*-0.687673);
}

double NNfunction_nn_chi3_charge1p::synapse0x3783e80() {
   return (neuron0x3761100()*-0.864703);
}

double NNfunction_nn_chi3_charge1p::synapse0x3783ec0() {
   return (neuron0x3761440()*0.677825);
}

double NNfunction_nn_chi3_charge1p::synapse0x3783f00() {
   return (neuron0x3761780()*0.655688);
}

double NNfunction_nn_chi3_charge1p::synapse0x3783f40() {
   return (neuron0x3761ac0()*-0.463303);
}

double NNfunction_nn_chi3_charge1p::synapse0x3783f80() {
   return (neuron0x3761e00()*0.14332);
}

double NNfunction_nn_chi3_charge1p::synapse0x3783fc0() {
   return (neuron0x3762140()*-0.245521);
}

double NNfunction_nn_chi3_charge1p::synapse0x3784000() {
   return (neuron0x3762480()*0.00630737);
}

double NNfunction_nn_chi3_charge1p::synapse0x3784040() {
   return (neuron0x37627c0()*0.531673);
}

double NNfunction_nn_chi3_charge1p::synapse0x3784080() {
   return (neuron0x3762b00()*-0.0179978);
}

double NNfunction_nn_chi3_charge1p::synapse0x37840c0() {
   return (neuron0x3762e40()*-0.906731);
}

double NNfunction_nn_chi3_charge1p::synapse0x3784100() {
   return (neuron0x3763180()*-0.51238);
}

double NNfunction_nn_chi3_charge1p::synapse0x3784140() {
   return (neuron0x37634c0()*-0.676641);
}

double NNfunction_nn_chi3_charge1p::synapse0x3784180() {
   return (neuron0x3763800()*0.93081);
}

double NNfunction_nn_chi3_charge1p::synapse0x3783c10() {
   return (neuron0x3763b40()*0.0451854);
}

double NNfunction_nn_chi3_charge1p::synapse0x3783c50() {
   return (neuron0x37640a0()*0.519234);
}

double NNfunction_nn_chi3_charge1p::synapse0x37842d0() {
   return (neuron0x37642c0()*-0.0281133);
}

double NNfunction_nn_chi3_charge1p::synapse0x3784310() {
   return (neuron0x3764600()*0.457935);
}

double NNfunction_nn_chi3_charge1p::synapse0x3784350() {
   return (neuron0x3764940()*1.23791);
}

double NNfunction_nn_chi3_charge1p::synapse0x3784390() {
   return (neuron0x3764c80()*-0.0584716);
}

double NNfunction_nn_chi3_charge1p::synapse0x37843d0() {
   return (neuron0x3764fc0()*-1.11323);
}

double NNfunction_nn_chi3_charge1p::synapse0x3784410() {
   return (neuron0x3765300()*1.58892);
}

double NNfunction_nn_chi3_charge1p::synapse0x3784790() {
   return (neuron0x37607d0()*0.00350265);
}

double NNfunction_nn_chi3_charge1p::synapse0x37847d0() {
   return (neuron0x3760a80()*-0.0152456);
}

double NNfunction_nn_chi3_charge1p::synapse0x3784810() {
   return (neuron0x3760dc0()*-0.181818);
}

double NNfunction_nn_chi3_charge1p::synapse0x3784850() {
   return (neuron0x3761100()*-0.00770594);
}

double NNfunction_nn_chi3_charge1p::synapse0x3784890() {
   return (neuron0x3761440()*0.00621498);
}

double NNfunction_nn_chi3_charge1p::synapse0x37848d0() {
   return (neuron0x3761780()*-0.00353349);
}

double NNfunction_nn_chi3_charge1p::synapse0x3784910() {
   return (neuron0x3761ac0()*-0.0105612);
}

double NNfunction_nn_chi3_charge1p::synapse0x3784950() {
   return (neuron0x3761e00()*0.0114072);
}

double NNfunction_nn_chi3_charge1p::synapse0x3784990() {
   return (neuron0x3762140()*-0.00189029);
}

double NNfunction_nn_chi3_charge1p::synapse0x37849d0() {
   return (neuron0x3762480()*0.00567803);
}

double NNfunction_nn_chi3_charge1p::synapse0x3784a10() {
   return (neuron0x37627c0()*-0.00263027);
}

double NNfunction_nn_chi3_charge1p::synapse0x3784a50() {
   return (neuron0x3762b00()*0.105104);
}

double NNfunction_nn_chi3_charge1p::synapse0x3784a90() {
   return (neuron0x3762e40()*0.00343149);
}

double NNfunction_nn_chi3_charge1p::synapse0x3784ad0() {
   return (neuron0x3763180()*-0.0152461);
}

double NNfunction_nn_chi3_charge1p::synapse0x3784b10() {
   return (neuron0x37634c0()*-0.000191772);
}

double NNfunction_nn_chi3_charge1p::synapse0x3784b50() {
   return (neuron0x3763800()*0.00824466);
}

double NNfunction_nn_chi3_charge1p::synapse0x37845e0() {
   return (neuron0x3763b40()*-0.00278694);
}

double NNfunction_nn_chi3_charge1p::synapse0x3784620() {
   return (neuron0x37640a0()*-0.0145156);
}

double NNfunction_nn_chi3_charge1p::synapse0x3775150() {
   return (neuron0x37642c0()*0.00363029);
}

double NNfunction_nn_chi3_charge1p::synapse0x3775190() {
   return (neuron0x3764600()*-0.00957221);
}

double NNfunction_nn_chi3_charge1p::synapse0x37751d0() {
   return (neuron0x3764940()*-0.000831992);
}

double NNfunction_nn_chi3_charge1p::synapse0x3775210() {
   return (neuron0x3764c80()*-0.0022734);
}

double NNfunction_nn_chi3_charge1p::synapse0x3775250() {
   return (neuron0x3764fc0()*0.00441825);
}

double NNfunction_nn_chi3_charge1p::synapse0x3775290() {
   return (neuron0x3765300()*-3.21968);
}

double NNfunction_nn_chi3_charge1p::synapse0x3775610() {
   return (neuron0x37607d0()*-0.788708);
}

double NNfunction_nn_chi3_charge1p::synapse0x3775650() {
   return (neuron0x3760a80()*-0.748849);
}

double NNfunction_nn_chi3_charge1p::synapse0x3775690() {
   return (neuron0x3760dc0()*0.558325);
}

double NNfunction_nn_chi3_charge1p::synapse0x37756d0() {
   return (neuron0x3761100()*-0.222289);
}

double NNfunction_nn_chi3_charge1p::synapse0x3775710() {
   return (neuron0x3761440()*0.309448);
}

double NNfunction_nn_chi3_charge1p::synapse0x3775750() {
   return (neuron0x3761780()*-0.316351);
}

double NNfunction_nn_chi3_charge1p::synapse0x3775790() {
   return (neuron0x3761ac0()*-0.460152);
}

double NNfunction_nn_chi3_charge1p::synapse0x37757d0() {
   return (neuron0x3761e00()*-0.118047);
}

double NNfunction_nn_chi3_charge1p::synapse0x3775810() {
   return (neuron0x3762140()*0.261278);
}

double NNfunction_nn_chi3_charge1p::synapse0x3775850() {
   return (neuron0x3762480()*0.424843);
}

double NNfunction_nn_chi3_charge1p::synapse0x3775890() {
   return (neuron0x37627c0()*-0.527966);
}

double NNfunction_nn_chi3_charge1p::synapse0x37758d0() {
   return (neuron0x3762b00()*0.505051);
}

double NNfunction_nn_chi3_charge1p::synapse0x3775910() {
   return (neuron0x3762e40()*-0.20948);
}

double NNfunction_nn_chi3_charge1p::synapse0x3775950() {
   return (neuron0x3763180()*-1.42653);
}

double NNfunction_nn_chi3_charge1p::synapse0x3775990() {
   return (neuron0x37634c0()*-0.0664463);
}

double NNfunction_nn_chi3_charge1p::synapse0x37759d0() {
   return (neuron0x3763800()*-0.366571);
}

double NNfunction_nn_chi3_charge1p::synapse0x3775460() {
   return (neuron0x3763b40()*-0.416721);
}

double NNfunction_nn_chi3_charge1p::synapse0x37754a0() {
   return (neuron0x37640a0()*-0.772296);
}

double NNfunction_nn_chi3_charge1p::synapse0x3775b20() {
   return (neuron0x37642c0()*0.549339);
}

double NNfunction_nn_chi3_charge1p::synapse0x3775b60() {
   return (neuron0x3764600()*0.0254557);
}

double NNfunction_nn_chi3_charge1p::synapse0x3775ba0() {
   return (neuron0x3764940()*-1.00616);
}

double NNfunction_nn_chi3_charge1p::synapse0x3775be0() {
   return (neuron0x3764c80()*-0.168265);
}

double NNfunction_nn_chi3_charge1p::synapse0x3775c20() {
   return (neuron0x3764fc0()*0.327648);
}

double NNfunction_nn_chi3_charge1p::synapse0x3775c60() {
   return (neuron0x3765300()*-0.00182791);
}

double NNfunction_nn_chi3_charge1p::synapse0x3775fe0() {
   return (neuron0x37607d0()*0.0290356);
}

double NNfunction_nn_chi3_charge1p::synapse0x3776020() {
   return (neuron0x3760a80()*-0.0340061);
}

double NNfunction_nn_chi3_charge1p::synapse0x3776060() {
   return (neuron0x3760dc0()*0.177255);
}

double NNfunction_nn_chi3_charge1p::synapse0x37760a0() {
   return (neuron0x3761100()*-3.12662);
}

double NNfunction_nn_chi3_charge1p::synapse0x37760e0() {
   return (neuron0x3761440()*0.0230002);
}

double NNfunction_nn_chi3_charge1p::synapse0x3776120() {
   return (neuron0x3761780()*-0.00235836);
}

double NNfunction_nn_chi3_charge1p::synapse0x3776160() {
   return (neuron0x3761ac0()*0.003915);
}

double NNfunction_nn_chi3_charge1p::synapse0x37761a0() {
   return (neuron0x3761e00()*-0.010239);
}

double NNfunction_nn_chi3_charge1p::synapse0x37761e0() {
   return (neuron0x3762140()*0.000862042);
}

double NNfunction_nn_chi3_charge1p::synapse0x3776220() {
   return (neuron0x3762480()*0.00828161);
}

double NNfunction_nn_chi3_charge1p::synapse0x3776260() {
   return (neuron0x37627c0()*-0.0688649);
}

double NNfunction_nn_chi3_charge1p::synapse0x37762a0() {
   return (neuron0x3762b00()*0.506565);
}

double NNfunction_nn_chi3_charge1p::synapse0x37762e0() {
   return (neuron0x3762e40()*-0.118027);
}

double NNfunction_nn_chi3_charge1p::synapse0x3776320() {
   return (neuron0x3763180()*-0.0817793);
}

double NNfunction_nn_chi3_charge1p::synapse0x3776360() {
   return (neuron0x37634c0()*-0.00504706);
}

double NNfunction_nn_chi3_charge1p::synapse0x37763a0() {
   return (neuron0x3763800()*-0.0504755);
}

double NNfunction_nn_chi3_charge1p::synapse0x3775e30() {
   return (neuron0x3763b40()*0.0340607);
}

double NNfunction_nn_chi3_charge1p::synapse0x3775e70() {
   return (neuron0x37640a0()*-0.0144383);
}

double NNfunction_nn_chi3_charge1p::synapse0x37764f0() {
   return (neuron0x37642c0()*-0.0126466);
}

double NNfunction_nn_chi3_charge1p::synapse0x3776530() {
   return (neuron0x3764600()*-0.0144656);
}

double NNfunction_nn_chi3_charge1p::synapse0x3776570() {
   return (neuron0x3764940()*-0.0358481);
}

double NNfunction_nn_chi3_charge1p::synapse0x37765b0() {
   return (neuron0x3764c80()*-0.034362);
}

double NNfunction_nn_chi3_charge1p::synapse0x37765f0() {
   return (neuron0x3764fc0()*0.00551552);
}

double NNfunction_nn_chi3_charge1p::synapse0x3776630() {
   return (neuron0x3765300()*-0.0244716);
}

double NNfunction_nn_chi3_charge1p::synapse0x37769b0() {
   return (neuron0x37607d0()*-0.204532);
}

double NNfunction_nn_chi3_charge1p::synapse0x37769f0() {
   return (neuron0x3760a80()*-0.839449);
}

double NNfunction_nn_chi3_charge1p::synapse0x3776a30() {
   return (neuron0x3760dc0()*-1.79364);
}

double NNfunction_nn_chi3_charge1p::synapse0x3776a70() {
   return (neuron0x3761100()*-0.0193965);
}

double NNfunction_nn_chi3_charge1p::synapse0x3776ab0() {
   return (neuron0x3761440()*-0.115515);
}

double NNfunction_nn_chi3_charge1p::synapse0x3776af0() {
   return (neuron0x3761780()*0.195846);
}

double NNfunction_nn_chi3_charge1p::synapse0x3776b30() {
   return (neuron0x3761ac0()*0.225739);
}

double NNfunction_nn_chi3_charge1p::synapse0x3776b70() {
   return (neuron0x3761e00()*0.0394091);
}

double NNfunction_nn_chi3_charge1p::synapse0x3776bb0() {
   return (neuron0x3762140()*0.232368);
}

double NNfunction_nn_chi3_charge1p::synapse0x3776bf0() {
   return (neuron0x3762480()*0.109782);
}

double NNfunction_nn_chi3_charge1p::synapse0x3776c30() {
   return (neuron0x37627c0()*-0.00279602);
}

double NNfunction_nn_chi3_charge1p::synapse0x3776c70() {
   return (neuron0x3762b00()*-1.63152);
}

double NNfunction_nn_chi3_charge1p::synapse0x3776cb0() {
   return (neuron0x3762e40()*-0.231161);
}

double NNfunction_nn_chi3_charge1p::synapse0x3776cf0() {
   return (neuron0x3763180()*-0.275366);
}

double NNfunction_nn_chi3_charge1p::synapse0x3776d30() {
   return (neuron0x37634c0()*-0.309843);
}

double NNfunction_nn_chi3_charge1p::synapse0x3776d70() {
   return (neuron0x3763800()*-0.141029);
}

double NNfunction_nn_chi3_charge1p::synapse0x3776800() {
   return (neuron0x3763b40()*0.163117);
}

double NNfunction_nn_chi3_charge1p::synapse0x3776840() {
   return (neuron0x37640a0()*-0.170372);
}

double NNfunction_nn_chi3_charge1p::synapse0x3776ec0() {
   return (neuron0x37642c0()*0.0510034);
}

double NNfunction_nn_chi3_charge1p::synapse0x3776f00() {
   return (neuron0x3764600()*0.253767);
}

double NNfunction_nn_chi3_charge1p::synapse0x3776f40() {
   return (neuron0x3764940()*0.317403);
}

double NNfunction_nn_chi3_charge1p::synapse0x3776f80() {
   return (neuron0x3764c80()*0.427678);
}

double NNfunction_nn_chi3_charge1p::synapse0x3776fc0() {
   return (neuron0x3764fc0()*-0.153159);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777000() {
   return (neuron0x3765300()*-2.32021);
}

double NNfunction_nn_chi3_charge1p::synapse0x3788ed0() {
   return (neuron0x37607d0()*-0.0466574);
}

double NNfunction_nn_chi3_charge1p::synapse0x3788f10() {
   return (neuron0x3760a80()*4.61862);
}

double NNfunction_nn_chi3_charge1p::synapse0x3788f50() {
   return (neuron0x3760dc0()*-0.739326);
}

double NNfunction_nn_chi3_charge1p::synapse0x3788f90() {
   return (neuron0x3761100()*0.0177746);
}

double NNfunction_nn_chi3_charge1p::synapse0x3788fd0() {
   return (neuron0x3761440()*-0.0145847);
}

double NNfunction_nn_chi3_charge1p::synapse0x3789010() {
   return (neuron0x3761780()*0.00287236);
}

double NNfunction_nn_chi3_charge1p::synapse0x3789050() {
   return (neuron0x3761ac0()*-0.011598);
}

double NNfunction_nn_chi3_charge1p::synapse0x3789090() {
   return (neuron0x3761e00()*-0.0462514);
}

double NNfunction_nn_chi3_charge1p::synapse0x37890d0() {
   return (neuron0x3762140()*-0.00634153);
}

double NNfunction_nn_chi3_charge1p::synapse0x3789110() {
   return (neuron0x3762480()*-0.0363774);
}

double NNfunction_nn_chi3_charge1p::synapse0x3789150() {
   return (neuron0x37627c0()*-0.0055388);
}

double NNfunction_nn_chi3_charge1p::synapse0x3789190() {
   return (neuron0x3762b00()*-5.87342);
}

double NNfunction_nn_chi3_charge1p::synapse0x37891d0() {
   return (neuron0x3762e40()*-0.0315415);
}

double NNfunction_nn_chi3_charge1p::synapse0x3789210() {
   return (neuron0x3763180()*-0.0194044);
}

double NNfunction_nn_chi3_charge1p::synapse0x3789250() {
   return (neuron0x37634c0()*0.0368187);
}

double NNfunction_nn_chi3_charge1p::synapse0x3789290() {
   return (neuron0x3763800()*-0.00491578);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777040() {
   return (neuron0x3763b40()*0.00700183);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777080() {
   return (neuron0x37640a0()*-0.00738322);
}

double NNfunction_nn_chi3_charge1p::synapse0x37893e0() {
   return (neuron0x37642c0()*-0.0689414);
}

double NNfunction_nn_chi3_charge1p::synapse0x3789420() {
   return (neuron0x3764600()*0.0200635);
}

double NNfunction_nn_chi3_charge1p::synapse0x3789460() {
   return (neuron0x3764940()*0.00646047);
}

double NNfunction_nn_chi3_charge1p::synapse0x37894a0() {
   return (neuron0x3764c80()*-0.0450426);
}

double NNfunction_nn_chi3_charge1p::synapse0x37894e0() {
   return (neuron0x3764fc0()*0.0445948);
}

double NNfunction_nn_chi3_charge1p::synapse0x3789520() {
   return (neuron0x3765300()*-0.323496);
}

double NNfunction_nn_chi3_charge1p::synapse0x37898a0() {
   return (neuron0x37607d0()*0.0818824);
}

double NNfunction_nn_chi3_charge1p::synapse0x37898e0() {
   return (neuron0x3760a80()*0.0156769);
}

double NNfunction_nn_chi3_charge1p::synapse0x3789920() {
   return (neuron0x3760dc0()*-1.15782);
}

double NNfunction_nn_chi3_charge1p::synapse0x3789960() {
   return (neuron0x3761100()*-0.0477129);
}

double NNfunction_nn_chi3_charge1p::synapse0x37899a0() {
   return (neuron0x3761440()*0.0312862);
}

double NNfunction_nn_chi3_charge1p::synapse0x37899e0() {
   return (neuron0x3761780()*-0.00792918);
}

double NNfunction_nn_chi3_charge1p::synapse0x3789a20() {
   return (neuron0x3761ac0()*0.0175995);
}

double NNfunction_nn_chi3_charge1p::synapse0x3789a60() {
   return (neuron0x3761e00()*-0.0398222);
}

double NNfunction_nn_chi3_charge1p::synapse0x3789aa0() {
   return (neuron0x3762140()*0.00117066);
}

double NNfunction_nn_chi3_charge1p::synapse0x3789ae0() {
   return (neuron0x3762480()*-0.00944594);
}

double NNfunction_nn_chi3_charge1p::synapse0x3789b20() {
   return (neuron0x37627c0()*0.0144431);
}

double NNfunction_nn_chi3_charge1p::synapse0x3789b60() {
   return (neuron0x3762b00()*0.000820408);
}

double NNfunction_nn_chi3_charge1p::synapse0x3789ba0() {
   return (neuron0x3762e40()*-0.00437589);
}

double NNfunction_nn_chi3_charge1p::synapse0x3789be0() {
   return (neuron0x3763180()*0.0332739);
}

double NNfunction_nn_chi3_charge1p::synapse0x3789c20() {
   return (neuron0x37634c0()*0.00790886);
}

double NNfunction_nn_chi3_charge1p::synapse0x3789c60() {
   return (neuron0x3763800()*-0.0164591);
}

double NNfunction_nn_chi3_charge1p::synapse0x37896f0() {
   return (neuron0x3763b40()*0.03099);
}

double NNfunction_nn_chi3_charge1p::synapse0x3789730() {
   return (neuron0x37640a0()*0.00804296);
}

double NNfunction_nn_chi3_charge1p::synapse0x3789db0() {
   return (neuron0x37642c0()*-0.00874474);
}

double NNfunction_nn_chi3_charge1p::synapse0x3789df0() {
   return (neuron0x3764600()*0.0218392);
}

double NNfunction_nn_chi3_charge1p::synapse0x3789e30() {
   return (neuron0x3764940()*-0.00390834);
}

double NNfunction_nn_chi3_charge1p::synapse0x3789e70() {
   return (neuron0x3764c80()*-0.00873022);
}

double NNfunction_nn_chi3_charge1p::synapse0x3789eb0() {
   return (neuron0x3764fc0()*0.0134009);
}

double NNfunction_nn_chi3_charge1p::synapse0x3789ef0() {
   return (neuron0x3765300()*3.66121);
}

double NNfunction_nn_chi3_charge1p::synapse0x378a270() {
   return (neuron0x37607d0()*-0.0143543);
}

double NNfunction_nn_chi3_charge1p::synapse0x378a2b0() {
   return (neuron0x3760a80()*0.0262442);
}

double NNfunction_nn_chi3_charge1p::synapse0x378a2f0() {
   return (neuron0x3760dc0()*5.65113);
}

double NNfunction_nn_chi3_charge1p::synapse0x378a330() {
   return (neuron0x3761100()*0.00540078);
}

double NNfunction_nn_chi3_charge1p::synapse0x378a370() {
   return (neuron0x3761440()*-0.0241854);
}

double NNfunction_nn_chi3_charge1p::synapse0x378a3b0() {
   return (neuron0x3761780()*0.00326341);
}

double NNfunction_nn_chi3_charge1p::synapse0x378a3f0() {
   return (neuron0x3761ac0()*0.0193632);
}

double NNfunction_nn_chi3_charge1p::synapse0x378a430() {
   return (neuron0x3761e00()*-0.00602854);
}

double NNfunction_nn_chi3_charge1p::synapse0x378a470() {
   return (neuron0x3762140()*-0.0133161);
}

double NNfunction_nn_chi3_charge1p::synapse0x378a4b0() {
   return (neuron0x3762480()*-0.0175773);
}

double NNfunction_nn_chi3_charge1p::synapse0x378a4f0() {
   return (neuron0x37627c0()*-0.00131331);
}

double NNfunction_nn_chi3_charge1p::synapse0x378a530() {
   return (neuron0x3762b00()*-0.0172651);
}

double NNfunction_nn_chi3_charge1p::synapse0x378a570() {
   return (neuron0x3762e40()*-0.0334438);
}

double NNfunction_nn_chi3_charge1p::synapse0x378a5b0() {
   return (neuron0x3763180()*-0.0148824);
}

double NNfunction_nn_chi3_charge1p::synapse0x378a5f0() {
   return (neuron0x37634c0()*0.00986726);
}

double NNfunction_nn_chi3_charge1p::synapse0x378a630() {
   return (neuron0x3763800()*0.0177532);
}

double NNfunction_nn_chi3_charge1p::synapse0x378a0c0() {
   return (neuron0x3763b40()*0.0206833);
}

double NNfunction_nn_chi3_charge1p::synapse0x378a100() {
   return (neuron0x37640a0()*0.0249504);
}

double NNfunction_nn_chi3_charge1p::synapse0x378a780() {
   return (neuron0x37642c0()*-0.0280746);
}

double NNfunction_nn_chi3_charge1p::synapse0x378a7c0() {
   return (neuron0x3764600()*0.0127338);
}

double NNfunction_nn_chi3_charge1p::synapse0x378a800() {
   return (neuron0x3764940()*-0.0178417);
}

double NNfunction_nn_chi3_charge1p::synapse0x378a840() {
   return (neuron0x3764c80()*-0.0110532);
}

double NNfunction_nn_chi3_charge1p::synapse0x378a880() {
   return (neuron0x3764fc0()*0.00382758);
}

double NNfunction_nn_chi3_charge1p::synapse0x378a8c0() {
   return (neuron0x3765300()*3.6282);
}

double NNfunction_nn_chi3_charge1p::synapse0x378ac40() {
   return (neuron0x37607d0()*-0.0393386);
}

double NNfunction_nn_chi3_charge1p::synapse0x378ac80() {
   return (neuron0x3760a80()*-4.04004);
}

double NNfunction_nn_chi3_charge1p::synapse0x378acc0() {
   return (neuron0x3760dc0()*-0.77902);
}

double NNfunction_nn_chi3_charge1p::synapse0x378ad00() {
   return (neuron0x3761100()*-0.0136064);
}

double NNfunction_nn_chi3_charge1p::synapse0x378ad40() {
   return (neuron0x3761440()*0.0570098);
}

double NNfunction_nn_chi3_charge1p::synapse0x378ad80() {
   return (neuron0x3761780()*-0.0477415);
}

double NNfunction_nn_chi3_charge1p::synapse0x378adc0() {
   return (neuron0x3761ac0()*-0.0112858);
}

double NNfunction_nn_chi3_charge1p::synapse0x378ae00() {
   return (neuron0x3761e00()*0.00223759);
}

double NNfunction_nn_chi3_charge1p::synapse0x378ae40() {
   return (neuron0x3762140()*0.000451349);
}

double NNfunction_nn_chi3_charge1p::synapse0x378ae80() {
   return (neuron0x3762480()*-0.000232391);
}

double NNfunction_nn_chi3_charge1p::synapse0x378aec0() {
   return (neuron0x37627c0()*-0.00716637);
}

double NNfunction_nn_chi3_charge1p::synapse0x378af00() {
   return (neuron0x3762b00()*-5.57099);
}

double NNfunction_nn_chi3_charge1p::synapse0x378af40() {
   return (neuron0x3762e40()*-0.010287);
}

double NNfunction_nn_chi3_charge1p::synapse0x378af80() {
   return (neuron0x3763180()*0.0656351);
}

double NNfunction_nn_chi3_charge1p::synapse0x378afc0() {
   return (neuron0x37634c0()*-0.02977);
}

double NNfunction_nn_chi3_charge1p::synapse0x378b000() {
   return (neuron0x3763800()*0.0278007);
}

double NNfunction_nn_chi3_charge1p::synapse0x378aa90() {
   return (neuron0x3763b40()*0.0290399);
}

double NNfunction_nn_chi3_charge1p::synapse0x378aad0() {
   return (neuron0x37640a0()*-0.0105474);
}

double NNfunction_nn_chi3_charge1p::synapse0x378b150() {
   return (neuron0x37642c0()*0.0269517);
}

double NNfunction_nn_chi3_charge1p::synapse0x378b190() {
   return (neuron0x3764600()*-0.0104489);
}

double NNfunction_nn_chi3_charge1p::synapse0x378b1d0() {
   return (neuron0x3764940()*-0.0217169);
}

double NNfunction_nn_chi3_charge1p::synapse0x378b210() {
   return (neuron0x3764c80()*-0.00287049);
}

double NNfunction_nn_chi3_charge1p::synapse0x378b250() {
   return (neuron0x3764fc0()*0.0426806);
}

double NNfunction_nn_chi3_charge1p::synapse0x378b290() {
   return (neuron0x3765300()*-0.366569);
}

double NNfunction_nn_chi3_charge1p::synapse0x352b060() {
   return (neuron0x3765770()*1.65049);
}

double NNfunction_nn_chi3_charge1p::synapse0x352b0a0() {
   return (neuron0x37660c0()*3.33463);
}

double NNfunction_nn_chi3_charge1p::synapse0x3767c30() {
   return (neuron0x3766ba0()*-1.34463);
}

double NNfunction_nn_chi3_charge1p::synapse0x3767c70() {
   return (neuron0x3766640()*1.09838);
}

double NNfunction_nn_chi3_charge1p::synapse0x3769710() {
   return (neuron0x3767980()*0.0477174);
}

double NNfunction_nn_chi3_charge1p::synapse0x3769750() {
   return (neuron0x3769460()*1.36335);
}

double NNfunction_nn_chi3_charge1p::synapse0x376a4e0() {
   return (neuron0x376a230()*-1.95767);
}

double NNfunction_nn_chi3_charge1p::synapse0x376a520() {
   return (neuron0x376ac00()*0.551383);
}

double NNfunction_nn_chi3_charge1p::synapse0x376aeb0() {
   return (neuron0x376b5d0()*1.71267);
}

double NNfunction_nn_chi3_charge1p::synapse0x376aef0() {
   return (neuron0x376c0b0()*0.49354);
}

double NNfunction_nn_chi3_charge1p::synapse0x376b880() {
   return (neuron0x376ca80()*0.172834);
}

double NNfunction_nn_chi3_charge1p::synapse0x376b8c0() {
   return (neuron0x3769b60()*-0.566582);
}

double NNfunction_nn_chi3_charge1p::synapse0x376c360() {
   return (neuron0x376e630()*-2.15355);
}

double NNfunction_nn_chi3_charge1p::synapse0x376c3a0() {
   return (neuron0x376f000()*-0.296686);
}

double NNfunction_nn_chi3_charge1p::synapse0x376cd30() {
   return (neuron0x376f9d0()*1.00271);
}

double NNfunction_nn_chi3_charge1p::synapse0x376cd70() {
   return (neuron0x37703a0()*-2.1719);
}

double NNfunction_nn_chi3_charge1p::synapse0x3769e10() {
   return (neuron0x37721b0()*-0.717567);
}

double NNfunction_nn_chi3_charge1p::synapse0x3769e50() {
   return (neuron0x3772490()*0.941026);
}

double NNfunction_nn_chi3_charge1p::synapse0x376e8e0() {
   return (neuron0x3772e60()*1.19821);
}

double NNfunction_nn_chi3_charge1p::synapse0x376e920() {
   return (neuron0x3773830()*-0.951844);
}

double NNfunction_nn_chi3_charge1p::synapse0x376f2b0() {
   return (neuron0x3774200()*-1.08015);
}

double NNfunction_nn_chi3_charge1p::synapse0x376f2f0() {
   return (neuron0x3774bd0()*-0.632393);
}

double NNfunction_nn_chi3_charge1p::synapse0x376fc80() {
   return (neuron0x376d720()*1.10049);
}

double NNfunction_nn_chi3_charge1p::synapse0x376fcc0() {
   return (neuron0x376e0f0()*-1.06194);
}

double NNfunction_nn_chi3_charge1p::synapse0x3770650() {
   return (neuron0x3777960()*0.273194);
}

double NNfunction_nn_chi3_charge1p::synapse0x3770690() {
   return (neuron0x3778330()*-0.292205);
}

double NNfunction_nn_chi3_charge1p::synapse0x37636e0() {
   return (neuron0x3778d00()*1.19272);
}

double NNfunction_nn_chi3_charge1p::synapse0x3763720() {
   return (neuron0x37796d0()*-0.106572);
}

double NNfunction_nn_chi3_charge1p::synapse0x3772740() {
   return (neuron0x377a0a0()*0.35376);
}

double NNfunction_nn_chi3_charge1p::synapse0x3772780() {
   return (neuron0x377aa70()*-0.775163);
}

double NNfunction_nn_chi3_charge1p::synapse0x3773110() {
   return (neuron0x377b440()*-0.816786);
}

double NNfunction_nn_chi3_charge1p::synapse0x3773150() {
   return (neuron0x377be10()*0.189068);
}

double NNfunction_nn_chi3_charge1p::synapse0x3773ae0() {
   return (neuron0x3771ea0()*0.409188);
}

double NNfunction_nn_chi3_charge1p::synapse0x3773b20() {
   return (neuron0x377e9f0()*-0.21994);
}

double NNfunction_nn_chi3_charge1p::synapse0x37744b0() {
   return (neuron0x377f3c0()*0.219651);
}

double NNfunction_nn_chi3_charge1p::synapse0x37744f0() {
   return (neuron0x377fd90()*-0.15319);
}

double NNfunction_nn_chi3_charge1p::synapse0x3774e80() {
   return (neuron0x3780760()*-0.114774);
}

double NNfunction_nn_chi3_charge1p::synapse0x3774ec0() {
   return (neuron0x3781130()*-0.942331);
}

double NNfunction_nn_chi3_charge1p::synapse0x376d9d0() {
   return (neuron0x3781b00()*0.192738);
}

double NNfunction_nn_chi3_charge1p::synapse0x376da10() {
   return (neuron0x37824d0()*-1.57589);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777280() {
   return (neuron0x3782ea0()*-0.0641109);
}

double NNfunction_nn_chi3_charge1p::synapse0x37772c0() {
   return (neuron0x3783a80()*0.0606512);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777c10() {
   return (neuron0x3784450()*-0.693056);
}

double NNfunction_nn_chi3_charge1p::synapse0x3777c50() {
   return (neuron0x37752d0()*0.0895791);
}

double NNfunction_nn_chi3_charge1p::synapse0x37785e0() {
   return (neuron0x3775ca0()*-0.655797);
}

double NNfunction_nn_chi3_charge1p::synapse0x3778620() {
   return (neuron0x3776670()*-0.158838);
}

double NNfunction_nn_chi3_charge1p::synapse0x3778fb0() {
   return (neuron0x3788cb0()*0.423968);
}

double NNfunction_nn_chi3_charge1p::synapse0x3778ff0() {
   return (neuron0x3789560()*2.3624);
}

double NNfunction_nn_chi3_charge1p::synapse0x3779980() {
   return (neuron0x3789f30()*1.53233);
}

double NNfunction_nn_chi3_charge1p::synapse0x37799c0() {
   return (neuron0x378a900()*0.301784);
}

double NNfunction_nn_chi3_charge1p::synapse0x377c0c0() {
   return (neuron0x3765770()*-0.246729);
}

double NNfunction_nn_chi3_charge1p::synapse0x377c100() {
   return (neuron0x37660c0()*-0.39498);
}

double NNfunction_nn_chi3_charge1p::synapse0x3771680() {
   return (neuron0x3766ba0()*0.0416822);
}

double NNfunction_nn_chi3_charge1p::synapse0x37716c0() {
   return (neuron0x3766640()*-0.615278);
}

double NNfunction_nn_chi3_charge1p::synapse0x377eca0() {
   return (neuron0x3767980()*0.281099);
}

double NNfunction_nn_chi3_charge1p::synapse0x377ece0() {
   return (neuron0x3769460()*-0.638475);
}

double NNfunction_nn_chi3_charge1p::synapse0x377f670() {
   return (neuron0x376a230()*-0.317288);
}

double NNfunction_nn_chi3_charge1p::synapse0x377f6b0() {
   return (neuron0x376ac00()*-0.559581);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780040() {
   return (neuron0x376b5d0()*-0.218957);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780080() {
   return (neuron0x376c0b0()*-0.135834);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780a10() {
   return (neuron0x376ca80()*-1.06664);
}

double NNfunction_nn_chi3_charge1p::synapse0x3780a50() {
   return (neuron0x3769b60()*-0.537605);
}

double NNfunction_nn_chi3_charge1p::synapse0x37813e0() {
   return (neuron0x376e630()*-0.051231);
}

double NNfunction_nn_chi3_charge1p::synapse0x3781420() {
   return (neuron0x376f000()*-0.488051);
}

double NNfunction_nn_chi3_charge1p::synapse0x3781db0() {
   return (neuron0x376f9d0()*-0.776579);
}

double NNfunction_nn_chi3_charge1p::synapse0x3781df0() {
   return (neuron0x37703a0()*-0.166524);
}

double NNfunction_nn_chi3_charge1p::synapse0x3782780() {
   return (neuron0x37721b0()*-0.312807);
}

double NNfunction_nn_chi3_charge1p::synapse0x37827c0() {
   return (neuron0x3772490()*-1.18799);
}

double NNfunction_nn_chi3_charge1p::synapse0x3783150() {
   return (neuron0x3772e60()*-0.730113);
}

double NNfunction_nn_chi3_charge1p::synapse0x3783190() {
   return (neuron0x3773830()*-0.185355);
}

double NNfunction_nn_chi3_charge1p::synapse0x3783d30() {
   return (neuron0x3774200()*-0.701205);
}

double NNfunction_nn_chi3_charge1p::synapse0x3783d70() {
   return (neuron0x3774bd0()*-0.280509);
}

double NNfunction_nn_chi3_charge1p::synapse0x3784700() {
   return (neuron0x376d720()*0.0524514);
}

double NNfunction_nn_chi3_charge1p::synapse0x3784740() {
   return (neuron0x376e0f0()*-0.609534);
}

double NNfunction_nn_chi3_charge1p::synapse0x3775580() {
   return (neuron0x3777960()*-0.375702);
}

double NNfunction_nn_chi3_charge1p::synapse0x37755c0() {
   return (neuron0x3778330()*-0.1066);
}

double NNfunction_nn_chi3_charge1p::synapse0x3775f50() {
   return (neuron0x3778d00()*-0.153818);
}

double NNfunction_nn_chi3_charge1p::synapse0x3775f90() {
   return (neuron0x37796d0()*-0.557708);
}

double NNfunction_nn_chi3_charge1p::synapse0x3776920() {
   return (neuron0x377a0a0()*0.0912751);
}

double NNfunction_nn_chi3_charge1p::synapse0x3776960() {
   return (neuron0x377aa70()*-0.445736);
}

double NNfunction_nn_chi3_charge1p::synapse0x3788e40() {
   return (neuron0x377b440()*-0.273318);
}

double NNfunction_nn_chi3_charge1p::synapse0x3788e80() {
   return (neuron0x377be10()*-0.892183);
}

double NNfunction_nn_chi3_charge1p::synapse0x3789810() {
   return (neuron0x3771ea0()*-0.207808);
}

double NNfunction_nn_chi3_charge1p::synapse0x3789850() {
   return (neuron0x377e9f0()*0.150709);
}

double NNfunction_nn_chi3_charge1p::synapse0x378a1e0() {
   return (neuron0x377f3c0()*-0.165956);
}

double NNfunction_nn_chi3_charge1p::synapse0x378a220() {
   return (neuron0x377fd90()*-0.133908);
}

double NNfunction_nn_chi3_charge1p::synapse0x378abb0() {
   return (neuron0x3780760()*-0.463616);
}

double NNfunction_nn_chi3_charge1p::synapse0x378abf0() {
   return (neuron0x3781130()*-0.23522);
}

double NNfunction_nn_chi3_charge1p::synapse0x3765a20() {
   return (neuron0x3781b00()*0.04536);
}

double NNfunction_nn_chi3_charge1p::synapse0x3765a60() {
   return (neuron0x37824d0()*-0.0902997);
}

double NNfunction_nn_chi3_charge1p::synapse0x377a350() {
   return (neuron0x3782ea0()*-0.720375);
}

double NNfunction_nn_chi3_charge1p::synapse0x377a390() {
   return (neuron0x3783a80()*-0.783831);
}

double NNfunction_nn_chi3_charge1p::synapse0x378b2d0() {
   return (neuron0x3784450()*-0.32116);
}

double NNfunction_nn_chi3_charge1p::synapse0x378b310() {
   return (neuron0x37752d0()*-0.206607);
}

double NNfunction_nn_chi3_charge1p::synapse0x378b350() {
   return (neuron0x3775ca0()*-0.384441);
}

double NNfunction_nn_chi3_charge1p::synapse0x378b390() {
   return (neuron0x3776670()*-0.578495);
}

double NNfunction_nn_chi3_charge1p::synapse0x3792240() {
   return (neuron0x3788cb0()*-0.2267);
}

double NNfunction_nn_chi3_charge1p::synapse0x3792280() {
   return (neuron0x3789560()*-0.257878);
}

double NNfunction_nn_chi3_charge1p::synapse0x37922c0() {
   return (neuron0x3789f30()*-0.282761);
}

double NNfunction_nn_chi3_charge1p::synapse0x3792300() {
   return (neuron0x378a900()*-0.37172);
}

double NNfunction_nn_chi3_charge1p::synapse0x3792680() {
   return (neuron0x3765770()*0.0136536);
}

double NNfunction_nn_chi3_charge1p::synapse0x37926c0() {
   return (neuron0x37660c0()*-3.08955);
}

double NNfunction_nn_chi3_charge1p::synapse0x3792700() {
   return (neuron0x3766ba0()*-0.00765647);
}

double NNfunction_nn_chi3_charge1p::synapse0x3792740() {
   return (neuron0x3766640()*1.23584);
}

double NNfunction_nn_chi3_charge1p::synapse0x3792780() {
   return (neuron0x3767980()*0.00258141);
}

double NNfunction_nn_chi3_charge1p::synapse0x37927c0() {
   return (neuron0x3769460()*-0.00651628);
}

double NNfunction_nn_chi3_charge1p::synapse0x3792800() {
   return (neuron0x376a230()*3.94303);
}

double NNfunction_nn_chi3_charge1p::synapse0x3792840() {
   return (neuron0x376ac00()*0.287953);
}

double NNfunction_nn_chi3_charge1p::synapse0x3792880() {
   return (neuron0x376b5d0()*-3.14144);
}

double NNfunction_nn_chi3_charge1p::synapse0x37928c0() {
   return (neuron0x376c0b0()*-1.37795);
}

double NNfunction_nn_chi3_charge1p::synapse0x3792900() {
   return (neuron0x376ca80()*0.00904985);
}

double NNfunction_nn_chi3_charge1p::synapse0x3792940() {
   return (neuron0x3769b60()*-0.171081);
}

double NNfunction_nn_chi3_charge1p::synapse0x3792980() {
   return (neuron0x376e630()*-0.84253);
}

double NNfunction_nn_chi3_charge1p::synapse0x37929c0() {
   return (neuron0x376f000()*-0.131173);
}

double NNfunction_nn_chi3_charge1p::synapse0x3792a00() {
   return (neuron0x376f9d0()*0.834037);
}

double NNfunction_nn_chi3_charge1p::synapse0x3792a40() {
   return (neuron0x37703a0()*-0.907234);
}

double NNfunction_nn_chi3_charge1p::synapse0x37924d0() {
   return (neuron0x37721b0()*-0.913743);
}

double NNfunction_nn_chi3_charge1p::synapse0x3792510() {
   return (neuron0x3772490()*2.52574);
}

double NNfunction_nn_chi3_charge1p::synapse0x3792b90() {
   return (neuron0x3772e60()*1.17272);
}

double NNfunction_nn_chi3_charge1p::synapse0x3792bd0() {
   return (neuron0x3773830()*0.686738);
}

double NNfunction_nn_chi3_charge1p::synapse0x3792c10() {
   return (neuron0x3774200()*0.658324);
}

double NNfunction_nn_chi3_charge1p::synapse0x3792c50() {
   return (neuron0x3774bd0()*0.26433);
}

double NNfunction_nn_chi3_charge1p::synapse0x3792c90() {
   return (neuron0x376d720()*-0.103751);
}

double NNfunction_nn_chi3_charge1p::synapse0x3792cd0() {
   return (neuron0x376e0f0()*0.330726);
}

double NNfunction_nn_chi3_charge1p::synapse0x3792d10() {
   return (neuron0x3777960()*0.136449);
}

double NNfunction_nn_chi3_charge1p::synapse0x3792d50() {
   return (neuron0x3778330()*0.0495007);
}

double NNfunction_nn_chi3_charge1p::synapse0x3792d90() {
   return (neuron0x3778d00()*0.464364);
}

double NNfunction_nn_chi3_charge1p::synapse0x3792dd0() {
   return (neuron0x37796d0()*-0.0237167);
}

double NNfunction_nn_chi3_charge1p::synapse0x3792e10() {
   return (neuron0x377a0a0()*0.313261);
}

double NNfunction_nn_chi3_charge1p::synapse0x3792e50() {
   return (neuron0x377aa70()*-0.253454);
}

double NNfunction_nn_chi3_charge1p::synapse0x3792e90() {
   return (neuron0x377b440()*1.77864);
}

double NNfunction_nn_chi3_charge1p::synapse0x3792ed0() {
   return (neuron0x377be10()*-0.0407148);
}

double NNfunction_nn_chi3_charge1p::synapse0x3792a80() {
   return (neuron0x3771ea0()*0.363379);
}

double NNfunction_nn_chi3_charge1p::synapse0x3792ac0() {
   return (neuron0x377e9f0()*-0.0210005);
}

double NNfunction_nn_chi3_charge1p::synapse0x3792b00() {
   return (neuron0x377f3c0()*0.596999);
}

double NNfunction_nn_chi3_charge1p::synapse0x3792b40() {
   return (neuron0x377fd90()*-0.503188);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793120() {
   return (neuron0x3780760()*-0.00469864);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793160() {
   return (neuron0x3781130()*0.378793);
}

double NNfunction_nn_chi3_charge1p::synapse0x37931a0() {
   return (neuron0x3781b00()*0.0712243);
}

double NNfunction_nn_chi3_charge1p::synapse0x37931e0() {
   return (neuron0x37824d0()*-0.159718);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793220() {
   return (neuron0x3782ea0()*-0.0393064);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793260() {
   return (neuron0x3783a80()*-0.00179896);
}

double NNfunction_nn_chi3_charge1p::synapse0x37932a0() {
   return (neuron0x3784450()*-0.218395);
}

double NNfunction_nn_chi3_charge1p::synapse0x37932e0() {
   return (neuron0x37752d0()*0.0517036);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793320() {
   return (neuron0x3775ca0()*-0.175814);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793360() {
   return (neuron0x3776670()*-0.0317991);
}

double NNfunction_nn_chi3_charge1p::synapse0x37933a0() {
   return (neuron0x3788cb0()*0.193128);
}

double NNfunction_nn_chi3_charge1p::synapse0x37933e0() {
   return (neuron0x3789560()*-2.63889);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793420() {
   return (neuron0x3789f30()*-0.953843);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793460() {
   return (neuron0x378a900()*0.261474);
}

double NNfunction_nn_chi3_charge1p::synapse0x37937e0() {
   return (neuron0x3765770()*-2.72122);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793820() {
   return (neuron0x37660c0()*-2.3982);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793860() {
   return (neuron0x3766ba0()*0.978806);
}

double NNfunction_nn_chi3_charge1p::synapse0x37938a0() {
   return (neuron0x3766640()*0.131211);
}

double NNfunction_nn_chi3_charge1p::synapse0x37938e0() {
   return (neuron0x3767980()*-0.0768394);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793920() {
   return (neuron0x3769460()*-1.70741);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793960() {
   return (neuron0x376a230()*-0.356972);
}

double NNfunction_nn_chi3_charge1p::synapse0x37939a0() {
   return (neuron0x376ac00()*-0.780312);
}

double NNfunction_nn_chi3_charge1p::synapse0x37939e0() {
   return (neuron0x376b5d0()*1.08762);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793a20() {
   return (neuron0x376c0b0()*1.27936);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793a60() {
   return (neuron0x376ca80()*-0.29525);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793aa0() {
   return (neuron0x3769b60()*-1.17708);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793ae0() {
   return (neuron0x376e630()*4.14224);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793b20() {
   return (neuron0x376f000()*0.979154);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793b60() {
   return (neuron0x376f9d0()*1.11878);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793ba0() {
   return (neuron0x37703a0()*-0.156007);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793630() {
   return (neuron0x37721b0()*-0.822842);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793670() {
   return (neuron0x3772490()*0.014454);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793cf0() {
   return (neuron0x3772e60()*1.44666);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793d30() {
   return (neuron0x3773830()*1.90946);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793d70() {
   return (neuron0x3774200()*2.98333);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793db0() {
   return (neuron0x3774bd0()*-0.414762);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793df0() {
   return (neuron0x376d720()*2.35139);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793e30() {
   return (neuron0x376e0f0()*1.35673);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793e70() {
   return (neuron0x3777960()*-0.785581);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793eb0() {
   return (neuron0x3778330()*-0.116562);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793ef0() {
   return (neuron0x3778d00()*-3.17415);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793f30() {
   return (neuron0x37796d0()*7.14484);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793f70() {
   return (neuron0x377a0a0()*3.62549);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793fb0() {
   return (neuron0x377aa70()*2.41131);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793ff0() {
   return (neuron0x377b440()*-0.141368);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794030() {
   return (neuron0x377be10()*-1.64998);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793be0() {
   return (neuron0x3771ea0()*1.04913);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793c20() {
   return (neuron0x377e9f0()*0.362986);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793c60() {
   return (neuron0x377f3c0()*0.649143);
}

double NNfunction_nn_chi3_charge1p::synapse0x3793ca0() {
   return (neuron0x377fd90()*-0.750856);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794280() {
   return (neuron0x3780760()*0.203093);
}

double NNfunction_nn_chi3_charge1p::synapse0x37942c0() {
   return (neuron0x3781130()*0.495221);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794300() {
   return (neuron0x3781b00()*-0.548651);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794340() {
   return (neuron0x37824d0()*3.13664);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794380() {
   return (neuron0x3782ea0()*0.173643);
}

double NNfunction_nn_chi3_charge1p::synapse0x37943c0() {
   return (neuron0x3783a80()*-0.10527);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794400() {
   return (neuron0x3784450()*-4.30355);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794440() {
   return (neuron0x37752d0()*-0.140514);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794480() {
   return (neuron0x3775ca0()*1.86521);
}

double NNfunction_nn_chi3_charge1p::synapse0x37944c0() {
   return (neuron0x3776670()*0.368564);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794500() {
   return (neuron0x3788cb0()*-1.35943);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794540() {
   return (neuron0x3789560()*3.06726);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794580() {
   return (neuron0x3789f30()*-1.82149);
}

double NNfunction_nn_chi3_charge1p::synapse0x37945c0() {
   return (neuron0x378a900()*-1.01103);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794940() {
   return (neuron0x3765770()*-1.23754);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794980() {
   return (neuron0x37660c0()*-1.725);
}

double NNfunction_nn_chi3_charge1p::synapse0x37949c0() {
   return (neuron0x3766ba0()*-1.51758);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794a00() {
   return (neuron0x3766640()*-0.584361);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794a40() {
   return (neuron0x3767980()*-0.0325384);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794a80() {
   return (neuron0x3769460()*-1.21881);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794ac0() {
   return (neuron0x376a230()*1.9526);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794b00() {
   return (neuron0x376ac00()*-0.327238);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794b40() {
   return (neuron0x376b5d0()*1.01235);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794b80() {
   return (neuron0x376c0b0()*0.770248);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794bc0() {
   return (neuron0x376ca80()*-0.263904);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794c00() {
   return (neuron0x3769b60()*0.388295);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794c40() {
   return (neuron0x376e630()*1.63952);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794c80() {
   return (neuron0x376f000()*0.25875);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794cc0() {
   return (neuron0x376f9d0()*0.43049);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794d00() {
   return (neuron0x37703a0()*0.846365);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794790() {
   return (neuron0x37721b0()*-0.0138009);
}

double NNfunction_nn_chi3_charge1p::synapse0x37947d0() {
   return (neuron0x3772490()*-0.96463);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794e50() {
   return (neuron0x3772e60()*-0.203772);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794e90() {
   return (neuron0x3773830()*-1.73913);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794ed0() {
   return (neuron0x3774200()*-2.20127);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794f10() {
   return (neuron0x3774bd0()*0.049359);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794f50() {
   return (neuron0x376d720()*-0.219744);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794f90() {
   return (neuron0x376e0f0()*0.830106);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794fd0() {
   return (neuron0x3777960()*-0.102593);
}

double NNfunction_nn_chi3_charge1p::synapse0x3795010() {
   return (neuron0x3778330()*0.156216);
}

double NNfunction_nn_chi3_charge1p::synapse0x3795050() {
   return (neuron0x3778d00()*-1.58742);
}

double NNfunction_nn_chi3_charge1p::synapse0x3795090() {
   return (neuron0x37796d0()*0.131697);
}

double NNfunction_nn_chi3_charge1p::synapse0x37950d0() {
   return (neuron0x377a0a0()*-0.54856);
}

double NNfunction_nn_chi3_charge1p::synapse0x3795110() {
   return (neuron0x377aa70()*0.597706);
}

double NNfunction_nn_chi3_charge1p::synapse0x3795150() {
   return (neuron0x377b440()*0.662665);
}

double NNfunction_nn_chi3_charge1p::synapse0x3795190() {
   return (neuron0x377be10()*0.896814);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794d40() {
   return (neuron0x3771ea0()*-2.14496);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794d80() {
   return (neuron0x377e9f0()*0.281828);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794dc0() {
   return (neuron0x377f3c0()*0.0334965);
}

double NNfunction_nn_chi3_charge1p::synapse0x3794e00() {
   return (neuron0x377fd90()*0.324255);
}

double NNfunction_nn_chi3_charge1p::synapse0x37953e0() {
   return (neuron0x3780760()*0.113646);
}

double NNfunction_nn_chi3_charge1p::synapse0x3795420() {
   return (neuron0x3781130()*0.605078);
}

double NNfunction_nn_chi3_charge1p::synapse0x3795460() {
   return (neuron0x3781b00()*-0.221761);
}

double NNfunction_nn_chi3_charge1p::synapse0x37954a0() {
   return (neuron0x37824d0()*1.35085);
}

double NNfunction_nn_chi3_charge1p::synapse0x37954e0() {
   return (neuron0x3782ea0()*0.146791);
}

double NNfunction_nn_chi3_charge1p::synapse0x3795520() {
   return (neuron0x3783a80()*-0.108151);
}

double NNfunction_nn_chi3_charge1p::synapse0x3795560() {
   return (neuron0x3784450()*2.94624);
}

double NNfunction_nn_chi3_charge1p::synapse0x37955a0() {
   return (neuron0x37752d0()*-0.183544);
}

double NNfunction_nn_chi3_charge1p::synapse0x37955e0() {
   return (neuron0x3775ca0()*0.524838);
}

double NNfunction_nn_chi3_charge1p::synapse0x3795620() {
   return (neuron0x3776670()*0.233548);
}

double NNfunction_nn_chi3_charge1p::synapse0x3795660() {
   return (neuron0x3788cb0()*-0.198799);
}

double NNfunction_nn_chi3_charge1p::synapse0x37956a0() {
   return (neuron0x3789560()*1.43951);
}

double NNfunction_nn_chi3_charge1p::synapse0x37956e0() {
   return (neuron0x3789f30()*-0.0221327);
}

double NNfunction_nn_chi3_charge1p::synapse0x3795720() {
   return (neuron0x378a900()*-0.247786);
}

double NNfunction_nn_chi3_charge1p::synapse0x3795980() {
   return (neuron0x3791b00()*-11.741);
}

double NNfunction_nn_chi3_charge1p::synapse0x37959c0() {
   return (neuron0x3791ea0()*0.0951272);
}

double NNfunction_nn_chi3_charge1p::synapse0x3795a00() {
   return (neuron0x3792340()*-7.22905);
}

double NNfunction_nn_chi3_charge1p::synapse0x3795a40() {
   return (neuron0x37934a0()*-3.84976);
}

double NNfunction_nn_chi3_charge1p::synapse0x3795a80() {
   return (neuron0x3794600()*-6.0978);
}

