#include "NNfunction-NN_3_8.h"
#include <cmath>

double NNfunction-NN_3_8::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4151)/15.166;
   input1 = (in1 - -9.02273)/1235.48;
   input2 = (in2 - 225.27)/193.299;
   input3 = (in3 - -21.4775)/843.461;
   input4 = (in4 - 1071.44)/929.116;
   input5 = (in5 - 922.496)/953.353;
   input6 = (in6 - 929.372)/950.118;
   input7 = (in7 - 945.014)/931.155;
   input8 = (in8 - 935.435)/977.158;
   input9 = (in9 - 920.312)/964.222;
   input10 = (in10 - 971.288)/955.207;
   input11 = (in11 - 709.773)/874.071;
   input12 = (in12 - 736.323)/875.079;
   input13 = (in13 - 505.86)/525.556;
   input14 = (in14 - 703.574)/803.383;
   input15 = (in15 - 707.469)/805.33;
   input16 = (in16 - 526.694)/562.805;
   input17 = (in17 - 764.194)/906.161;
   input18 = (in18 - 766.04)/909.802;
   input19 = (in19 - 775.951)/866.182;
   input20 = (in20 - -5.82493)/489.174;
   input21 = (in21 - -6.67295)/1135;
   input22 = (in22 - 2.81043)/1193.78;
   input23 = (in23 - -36.5703)/235.498;
   switch(index) {
     case 0:
         return neuron0x218a9c0();
     default:
         return 0.;
   }
}

double NNfunction-NN_3_8::Value(int index, double* input) {
   input0 = (input[0] - 23.4151)/15.166;
   input1 = (input[1] - -9.02273)/1235.48;
   input2 = (input[2] - 225.27)/193.299;
   input3 = (input[3] - -21.4775)/843.461;
   input4 = (input[4] - 1071.44)/929.116;
   input5 = (input[5] - 922.496)/953.353;
   input6 = (input[6] - 929.372)/950.118;
   input7 = (input[7] - 945.014)/931.155;
   input8 = (input[8] - 935.435)/977.158;
   input9 = (input[9] - 920.312)/964.222;
   input10 = (input[10] - 971.288)/955.207;
   input11 = (input[11] - 709.773)/874.071;
   input12 = (input[12] - 736.323)/875.079;
   input13 = (input[13] - 505.86)/525.556;
   input14 = (input[14] - 703.574)/803.383;
   input15 = (input[15] - 707.469)/805.33;
   input16 = (input[16] - 526.694)/562.805;
   input17 = (input[17] - 764.194)/906.161;
   input18 = (input[18] - 766.04)/909.802;
   input19 = (input[19] - 775.951)/866.182;
   input20 = (input[20] - -5.82493)/489.174;
   input21 = (input[21] - -6.67295)/1135;
   input22 = (input[22] - 2.81043)/1193.78;
   input23 = (input[23] - -36.5703)/235.498;
   switch(index) {
     case 0:
         return neuron0x218a9c0();
     default:
         return 0.;
   }
}

double NNfunction-NN_3_8::neuron0x2156a80() {
   return input0;
}

double NNfunction-NN_3_8::neuron0x2156dc0() {
   return input1;
}

double NNfunction-NN_3_8::neuron0x2157100() {
   return input2;
}

double NNfunction-NN_3_8::neuron0x2157440() {
   return input3;
}

double NNfunction-NN_3_8::neuron0x2157780() {
   return input4;
}

double NNfunction-NN_3_8::neuron0x2157ac0() {
   return input5;
}

double NNfunction-NN_3_8::neuron0x2157e00() {
   return input6;
}

double NNfunction-NN_3_8::neuron0x2158140() {
   return input7;
}

double NNfunction-NN_3_8::neuron0x2158480() {
   return input8;
}

double NNfunction-NN_3_8::neuron0x21587c0() {
   return input9;
}

double NNfunction-NN_3_8::neuron0x2158b00() {
   return input10;
}

double NNfunction-NN_3_8::neuron0x2158e40() {
   return input11;
}

double NNfunction-NN_3_8::neuron0x2159180() {
   return input12;
}

double NNfunction-NN_3_8::neuron0x21594c0() {
   return input13;
}

double NNfunction-NN_3_8::neuron0x2159800() {
   return input14;
}

double NNfunction-NN_3_8::neuron0x2159b40() {
   return input15;
}

double NNfunction-NN_3_8::neuron0x2159e80() {
   return input16;
}

double NNfunction-NN_3_8::neuron0x215a3e0() {
   return input17;
}

double NNfunction-NN_3_8::neuron0x215a600() {
   return input18;
}

double NNfunction-NN_3_8::neuron0x215a940() {
   return input19;
}

double NNfunction-NN_3_8::neuron0x215ac80() {
   return input20;
}

double NNfunction-NN_3_8::neuron0x215afc0() {
   return input21;
}

double NNfunction-NN_3_8::neuron0x215b300() {
   return input22;
}

double NNfunction-NN_3_8::neuron0x215b640() {
   return input23;
}

double NNfunction-NN_3_8::input0x215bae0() {
   double input = -0.413642;
   input += synapse0x1f168f0();
   input += synapse0x2156940();
   input += synapse0x2156980();
   input += synapse0x215bd90();
   input += synapse0x215bdd0();
   input += synapse0x215be10();
   input += synapse0x215be50();
   input += synapse0x215be90();
   input += synapse0x215bed0();
   input += synapse0x215bf10();
   input += synapse0x215bf50();
   input += synapse0x215bf90();
   input += synapse0x215bfd0();
   input += synapse0x215c010();
   input += synapse0x215c050();
   input += synapse0x215c090();
   input += synapse0x21568b0();
   input += synapse0x21568f0();
   input += synapse0x1f08140();
   input += synapse0x1f08180();
   input += synapse0x215c2f0();
   input += synapse0x215c330();
   input += synapse0x215c370();
   input += synapse0x215c3b0();
   return input;
}

double NNfunction-NN_3_8::neuron0x215bae0() {
   double input = input0x215bae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x215c3f0() {
   double input = 1.54874;
   input += synapse0x215c730();
   input += synapse0x215c770();
   input += synapse0x215c7b0();
   input += synapse0x215c7f0();
   input += synapse0x215c830();
   input += synapse0x215c870();
   input += synapse0x215c8b0();
   input += synapse0x215c8f0();
   input += synapse0x215c930();
   input += synapse0x215c1e0();
   input += synapse0x215c220();
   input += synapse0x215c260();
   input += synapse0x215c2a0();
   input += synapse0x215cb80();
   input += synapse0x215cbc0();
   input += synapse0x215cc00();
   input += synapse0x215c580();
   input += synapse0x215c5c0();
   input += synapse0x215cd50();
   input += synapse0x215cd90();
   input += synapse0x215cdd0();
   input += synapse0x215ce10();
   input += synapse0x215ce50();
   input += synapse0x215ce90();
   return input;
}

double NNfunction-NN_3_8::neuron0x215c3f0() {
   double input = input0x215c3f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x215ced0() {
   double input = 2.34367;
   input += synapse0x215d210();
   input += synapse0x215d250();
   input += synapse0x215d290();
   input += synapse0x215d2d0();
   input += synapse0x215d310();
   input += synapse0x215d350();
   input += synapse0x215d390();
   input += synapse0x215d3d0();
   input += synapse0x215d410();
   input += synapse0x215d450();
   input += synapse0x215d490();
   input += synapse0x215d4d0();
   input += synapse0x215d510();
   input += synapse0x215d550();
   input += synapse0x215d590();
   input += synapse0x215d5d0();
   input += synapse0x215d060();
   input += synapse0x215d0a0();
   input += synapse0x1f15fc0();
   input += synapse0x1f16000();
   input += synapse0x2145b10();
   input += synapse0x2145b50();
   input += synapse0x2145b90();
   input += synapse0x21569c0();
   return input;
}

double NNfunction-NN_3_8::neuron0x215ced0() {
   double input = input0x215ced0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x1f16760() {
   double input = 0.739316;
   input += synapse0x215cb20();
   input += synapse0x2156a00();
   input += synapse0x2156a40();
   input += synapse0x215d720();
   input += synapse0x215d760();
   input += synapse0x215d7a0();
   input += synapse0x215d7e0();
   input += synapse0x215d820();
   input += synapse0x215d860();
   input += synapse0x215d8a0();
   input += synapse0x215d8e0();
   input += synapse0x215d920();
   input += synapse0x215d960();
   input += synapse0x215d9a0();
   input += synapse0x215d9e0();
   input += synapse0x215da20();
   input += synapse0x215c970();
   input += synapse0x215c9b0();
   input += synapse0x215db70();
   input += synapse0x215dbb0();
   input += synapse0x215dbf0();
   input += synapse0x215dc30();
   input += synapse0x215dc70();
   input += synapse0x215dcb0();
   return input;
}

double NNfunction-NN_3_8::neuron0x1f16760() {
   double input = input0x1f16760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x215dcf0() {
   double input = -0.809908;
   input += synapse0x215e030();
   input += synapse0x215e070();
   input += synapse0x215e0b0();
   input += synapse0x215e0f0();
   input += synapse0x215e130();
   input += synapse0x215e170();
   input += synapse0x215e1b0();
   input += synapse0x215e1f0();
   input += synapse0x215e230();
   input += synapse0x215e270();
   input += synapse0x215e2b0();
   input += synapse0x215e2f0();
   input += synapse0x215e330();
   input += synapse0x215e370();
   input += synapse0x215e3b0();
   input += synapse0x215e3f0();
   input += synapse0x215de80();
   input += synapse0x215dec0();
   input += synapse0x215e540();
   input += synapse0x215e580();
   input += synapse0x215e5c0();
   input += synapse0x215e600();
   input += synapse0x215e640();
   input += synapse0x215e680();
   return input;
}

double NNfunction-NN_3_8::neuron0x215dcf0() {
   double input = input0x215dcf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x215e6c0() {
   double input = 0.128017;
   input += synapse0x215ea00();
   input += synapse0x215ea40();
   input += synapse0x215ea80();
   input += synapse0x215eac0();
   input += synapse0x215eb00();
   input += synapse0x215eb40();
   input += synapse0x215eb80();
   input += synapse0x215ebc0();
   input += synapse0x215ec00();
   input += synapse0x1f16350();
   input += synapse0x1f16390();
   input += synapse0x1f163d0();
   input += synapse0x1f16410();
   input += synapse0x1f16450();
   input += synapse0x1f16490();
   input += synapse0x1f164d0();
   input += synapse0x215e850();
   input += synapse0x215e890();
   input += synapse0x1f16620();
   input += synapse0x1f16660();
   input += synapse0x1f166a0();
   input += synapse0x1f166e0();
   input += synapse0x1f16720();
   input += synapse0x215f450();
   return input;
}

double NNfunction-NN_3_8::neuron0x215e6c0() {
   double input = input0x215e6c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x215f490() {
   double input = -3.22146;
   input += synapse0x215f7d0();
   input += synapse0x215f810();
   input += synapse0x215f850();
   input += synapse0x215f890();
   input += synapse0x215f8d0();
   input += synapse0x215f910();
   input += synapse0x215f950();
   input += synapse0x215f990();
   input += synapse0x215f9d0();
   input += synapse0x215fa10();
   input += synapse0x215fa50();
   input += synapse0x215fa90();
   input += synapse0x215fad0();
   input += synapse0x215fb10();
   input += synapse0x215fb50();
   input += synapse0x215fb90();
   input += synapse0x215f620();
   input += synapse0x215f660();
   input += synapse0x215fce0();
   input += synapse0x215fd20();
   input += synapse0x215fd60();
   input += synapse0x215fda0();
   input += synapse0x215fde0();
   input += synapse0x215fe20();
   return input;
}

double NNfunction-NN_3_8::neuron0x215f490() {
   double input = input0x215f490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x215fe60() {
   double input = 1.25202;
   input += synapse0x21601a0();
   input += synapse0x21601e0();
   input += synapse0x2160220();
   input += synapse0x2160260();
   input += synapse0x21602a0();
   input += synapse0x21602e0();
   input += synapse0x2160320();
   input += synapse0x2160360();
   input += synapse0x21603a0();
   input += synapse0x21603e0();
   input += synapse0x2160420();
   input += synapse0x2160460();
   input += synapse0x21604a0();
   input += synapse0x21604e0();
   input += synapse0x2160520();
   input += synapse0x2160560();
   input += synapse0x215fff0();
   input += synapse0x2160030();
   input += synapse0x21606b0();
   input += synapse0x21606f0();
   input += synapse0x2160730();
   input += synapse0x2160770();
   input += synapse0x21607b0();
   input += synapse0x21607f0();
   return input;
}

double NNfunction-NN_3_8::neuron0x215fe60() {
   double input = input0x215fe60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x2160830() {
   double input = 0.275311;
   input += synapse0x215a2d0();
   input += synapse0x215a310();
   input += synapse0x215a350();
   input += synapse0x215a390();
   input += synapse0x2160d80();
   input += synapse0x2160dc0();
   input += synapse0x2160e00();
   input += synapse0x2160e40();
   input += synapse0x2160e80();
   input += synapse0x2160ec0();
   input += synapse0x2160f00();
   input += synapse0x2160f40();
   input += synapse0x2160f80();
   input += synapse0x2160fc0();
   input += synapse0x2161000();
   input += synapse0x2161040();
   input += synapse0x21609c0();
   input += synapse0x2160a00();
   input += synapse0x2161190();
   input += synapse0x21611d0();
   input += synapse0x2161210();
   input += synapse0x2161250();
   input += synapse0x2161290();
   input += synapse0x21612d0();
   return input;
}

double NNfunction-NN_3_8::neuron0x2160830() {
   double input = input0x2160830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x2161310() {
   double input = -4.08297;
   input += synapse0x2161650();
   input += synapse0x2161690();
   input += synapse0x21616d0();
   input += synapse0x2161710();
   input += synapse0x2161750();
   input += synapse0x2161790();
   input += synapse0x21617d0();
   input += synapse0x2161810();
   input += synapse0x2161850();
   input += synapse0x2161890();
   input += synapse0x21618d0();
   input += synapse0x2161910();
   input += synapse0x2161950();
   input += synapse0x2161990();
   input += synapse0x21619d0();
   input += synapse0x2161a10();
   input += synapse0x21614a0();
   input += synapse0x21614e0();
   input += synapse0x2161b60();
   input += synapse0x2161ba0();
   input += synapse0x2161be0();
   input += synapse0x2161c20();
   input += synapse0x2161c60();
   input += synapse0x2161ca0();
   return input;
}

double NNfunction-NN_3_8::neuron0x2161310() {
   double input = input0x2161310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x2161ce0() {
   double input = -0.345669;
   input += synapse0x2162020();
   input += synapse0x2162060();
   input += synapse0x21620a0();
   input += synapse0x21620e0();
   input += synapse0x2162120();
   input += synapse0x2162160();
   input += synapse0x21621a0();
   input += synapse0x21621e0();
   input += synapse0x2162220();
   input += synapse0x2162260();
   input += synapse0x21622a0();
   input += synapse0x21622e0();
   input += synapse0x2162320();
   input += synapse0x2162360();
   input += synapse0x21623a0();
   input += synapse0x21623e0();
   input += synapse0x2161e70();
   input += synapse0x2161eb0();
   input += synapse0x215ec40();
   input += synapse0x215ec80();
   input += synapse0x215ecc0();
   input += synapse0x215ed00();
   input += synapse0x215ed40();
   input += synapse0x215ed80();
   return input;
}

double NNfunction-NN_3_8::neuron0x2161ce0() {
   double input = input0x2161ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x215edc0() {
   double input = -3.96708;
   input += synapse0x215f100();
   input += synapse0x215f140();
   input += synapse0x215f180();
   input += synapse0x215f1c0();
   input += synapse0x215f200();
   input += synapse0x215f240();
   input += synapse0x215f280();
   input += synapse0x215f2c0();
   input += synapse0x215f300();
   input += synapse0x215f340();
   input += synapse0x215f380();
   input += synapse0x215f3c0();
   input += synapse0x215f400();
   input += synapse0x2163540();
   input += synapse0x2163580();
   input += synapse0x21635c0();
   input += synapse0x215ef50();
   input += synapse0x215ef90();
   input += synapse0x2163710();
   input += synapse0x2163750();
   input += synapse0x2163790();
   input += synapse0x21637d0();
   input += synapse0x2163810();
   input += synapse0x2163850();
   return input;
}

double NNfunction-NN_3_8::neuron0x215edc0() {
   double input = input0x215edc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x2163890() {
   double input = -1.95889;
   input += synapse0x2163bd0();
   input += synapse0x2163c10();
   input += synapse0x2163c50();
   input += synapse0x2163c90();
   input += synapse0x2163cd0();
   input += synapse0x2163d10();
   input += synapse0x2163d50();
   input += synapse0x2163d90();
   input += synapse0x2163dd0();
   input += synapse0x2163e10();
   input += synapse0x2163e50();
   input += synapse0x2163e90();
   input += synapse0x2163ed0();
   input += synapse0x2163f10();
   input += synapse0x2163f50();
   input += synapse0x2163f90();
   input += synapse0x2163a20();
   input += synapse0x2163a60();
   input += synapse0x21640e0();
   input += synapse0x2164120();
   input += synapse0x2164160();
   input += synapse0x21641a0();
   input += synapse0x21641e0();
   input += synapse0x2164220();
   return input;
}

double NNfunction-NN_3_8::neuron0x2163890() {
   double input = input0x2163890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x2164260() {
   double input = 0.974688;
   input += synapse0x21645a0();
   input += synapse0x21645e0();
   input += synapse0x2164620();
   input += synapse0x2164660();
   input += synapse0x21646a0();
   input += synapse0x21646e0();
   input += synapse0x2164720();
   input += synapse0x2164760();
   input += synapse0x21647a0();
   input += synapse0x21647e0();
   input += synapse0x2164820();
   input += synapse0x2164860();
   input += synapse0x21648a0();
   input += synapse0x21648e0();
   input += synapse0x2164920();
   input += synapse0x2164960();
   input += synapse0x21643f0();
   input += synapse0x2164430();
   input += synapse0x2164ab0();
   input += synapse0x2164af0();
   input += synapse0x2164b30();
   input += synapse0x2164b70();
   input += synapse0x2164bb0();
   input += synapse0x2164bf0();
   return input;
}

double NNfunction-NN_3_8::neuron0x2164260() {
   double input = input0x2164260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x2164c30() {
   double input = 1.60056;
   input += synapse0x2164f70();
   input += synapse0x2164fb0();
   input += synapse0x2164ff0();
   input += synapse0x2165030();
   input += synapse0x2165070();
   input += synapse0x21650b0();
   input += synapse0x21650f0();
   input += synapse0x2165130();
   input += synapse0x2165170();
   input += synapse0x21651b0();
   input += synapse0x21651f0();
   input += synapse0x2165230();
   input += synapse0x2165270();
   input += synapse0x21652b0();
   input += synapse0x21652f0();
   input += synapse0x2165330();
   input += synapse0x2164dc0();
   input += synapse0x2164e00();
   input += synapse0x2165480();
   input += synapse0x21654c0();
   input += synapse0x2165500();
   input += synapse0x2165540();
   input += synapse0x2165580();
   input += synapse0x21655c0();
   return input;
}

double NNfunction-NN_3_8::neuron0x2164c30() {
   double input = input0x2164c30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x2165600() {
   double input = 0.927319;
   input += synapse0x2165940();
   input += synapse0x2156ca0();
   input += synapse0x2156ce0();
   input += synapse0x2156fe0();
   input += synapse0x2157020();
   input += synapse0x2157320();
   input += synapse0x2157360();
   input += synapse0x2157660();
   input += synapse0x21576a0();
   input += synapse0x21579a0();
   input += synapse0x21579e0();
   input += synapse0x2157ce0();
   input += synapse0x2157d20();
   input += synapse0x2158020();
   input += synapse0x2158060();
   input += synapse0x2158360();
   input += synapse0x21583a0();
   input += synapse0x21586a0();
   input += synapse0x21586e0();
   input += synapse0x21589e0();
   input += synapse0x2158a20();
   input += synapse0x2158d20();
   input += synapse0x2158d60();
   input += synapse0x2159060();
   return input;
}

double NNfunction-NN_3_8::neuron0x2165600() {
   double input = input0x2165600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x2167410() {
   double input = -2.6721;
   input += synapse0x21590a0();
   input += synapse0x2159d60();
   input += synapse0x2159da0();
   input += synapse0x2165790();
   input += synapse0x21657d0();
   input += synapse0x215a0a0();
   input += synapse0x215a0e0();
   input += synapse0x1f08020();
   input += synapse0x1f08060();
   input += synapse0x215a820();
   input += synapse0x215a860();
   input += synapse0x215ab60();
   input += synapse0x215aba0();
   input += synapse0x215aea0();
   input += synapse0x215aee0();
   input += synapse0x215b1e0();
   input += synapse0x215b220();
   input += synapse0x215b520();
   input += synapse0x215b560();
   input += synapse0x215b860();
   input += synapse0x215b8a0();
   input += synapse0x21593a0();
   input += synapse0x21593e0();
   input += synapse0x21676b0();
   return input;
}

double NNfunction-NN_3_8::neuron0x2167410() {
   double input = input0x2167410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x21676f0() {
   double input = 0.856744;
   input += synapse0x2167a30();
   input += synapse0x2167a70();
   input += synapse0x2167ab0();
   input += synapse0x2167af0();
   input += synapse0x2167b30();
   input += synapse0x2167b70();
   input += synapse0x2167bb0();
   input += synapse0x2167bf0();
   input += synapse0x2167c30();
   input += synapse0x2167c70();
   input += synapse0x2167cb0();
   input += synapse0x2167cf0();
   input += synapse0x2167d30();
   input += synapse0x2167d70();
   input += synapse0x2167db0();
   input += synapse0x2167df0();
   input += synapse0x2167880();
   input += synapse0x21678c0();
   input += synapse0x2167f40();
   input += synapse0x2167f80();
   input += synapse0x2167fc0();
   input += synapse0x2168000();
   input += synapse0x2168040();
   input += synapse0x2168080();
   return input;
}

double NNfunction-NN_3_8::neuron0x21676f0() {
   double input = input0x21676f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x21680c0() {
   double input = 0.201722;
   input += synapse0x2168400();
   input += synapse0x2168440();
   input += synapse0x2168480();
   input += synapse0x21684c0();
   input += synapse0x2168500();
   input += synapse0x2168540();
   input += synapse0x2168580();
   input += synapse0x21685c0();
   input += synapse0x2168600();
   input += synapse0x2168640();
   input += synapse0x2168680();
   input += synapse0x21686c0();
   input += synapse0x2168700();
   input += synapse0x2168740();
   input += synapse0x2168780();
   input += synapse0x21687c0();
   input += synapse0x2168250();
   input += synapse0x2168290();
   input += synapse0x2168910();
   input += synapse0x2168950();
   input += synapse0x2168990();
   input += synapse0x21689d0();
   input += synapse0x2168a10();
   input += synapse0x2168a50();
   return input;
}

double NNfunction-NN_3_8::neuron0x21680c0() {
   double input = input0x21680c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x2168a90() {
   double input = -0.517787;
   input += synapse0x2168dd0();
   input += synapse0x2168e10();
   input += synapse0x2168e50();
   input += synapse0x2168e90();
   input += synapse0x2168ed0();
   input += synapse0x2168f10();
   input += synapse0x2168f50();
   input += synapse0x2168f90();
   input += synapse0x2168fd0();
   input += synapse0x2169010();
   input += synapse0x2169050();
   input += synapse0x2169090();
   input += synapse0x21690d0();
   input += synapse0x2169110();
   input += synapse0x2169150();
   input += synapse0x2169190();
   input += synapse0x2168c20();
   input += synapse0x2168c60();
   input += synapse0x21692e0();
   input += synapse0x2169320();
   input += synapse0x2169360();
   input += synapse0x21693a0();
   input += synapse0x21693e0();
   input += synapse0x2169420();
   return input;
}

double NNfunction-NN_3_8::neuron0x2168a90() {
   double input = input0x2168a90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x2169460() {
   double input = -3.11741;
   input += synapse0x21697a0();
   input += synapse0x21697e0();
   input += synapse0x2169820();
   input += synapse0x2169860();
   input += synapse0x21698a0();
   input += synapse0x21698e0();
   input += synapse0x2169920();
   input += synapse0x2169960();
   input += synapse0x21699a0();
   input += synapse0x21699e0();
   input += synapse0x2169a20();
   input += synapse0x2169a60();
   input += synapse0x2169aa0();
   input += synapse0x2169ae0();
   input += synapse0x2169b20();
   input += synapse0x2169b60();
   input += synapse0x21695f0();
   input += synapse0x2169630();
   input += synapse0x2169cb0();
   input += synapse0x2169cf0();
   input += synapse0x2169d30();
   input += synapse0x2169d70();
   input += synapse0x2169db0();
   input += synapse0x2169df0();
   return input;
}

double NNfunction-NN_3_8::neuron0x2169460() {
   double input = input0x2169460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x2169e30() {
   double input = -5.32085;
   input += synapse0x216a170();
   input += synapse0x216a1b0();
   input += synapse0x216a1f0();
   input += synapse0x216a230();
   input += synapse0x216a270();
   input += synapse0x216a2b0();
   input += synapse0x216a2f0();
   input += synapse0x216a330();
   input += synapse0x216a370();
   input += synapse0x2162530();
   input += synapse0x2162570();
   input += synapse0x21625b0();
   input += synapse0x21625f0();
   input += synapse0x2162630();
   input += synapse0x2162670();
   input += synapse0x21626b0();
   input += synapse0x2169fc0();
   input += synapse0x216a000();
   input += synapse0x2162800();
   input += synapse0x2162840();
   input += synapse0x2162880();
   input += synapse0x21628c0();
   input += synapse0x2162900();
   input += synapse0x2162940();
   return input;
}

double NNfunction-NN_3_8::neuron0x2169e30() {
   double input = input0x2169e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x2162980() {
   double input = -2.5977;
   input += synapse0x2162cc0();
   input += synapse0x2162d00();
   input += synapse0x2162d40();
   input += synapse0x2162d80();
   input += synapse0x2162dc0();
   input += synapse0x2162e00();
   input += synapse0x2162e40();
   input += synapse0x2162e80();
   input += synapse0x2162ec0();
   input += synapse0x2162f00();
   input += synapse0x2162f40();
   input += synapse0x2162f80();
   input += synapse0x2162fc0();
   input += synapse0x2163000();
   input += synapse0x2163040();
   input += synapse0x2163080();
   input += synapse0x2162b10();
   input += synapse0x2162b50();
   input += synapse0x21631d0();
   input += synapse0x2163210();
   input += synapse0x2163250();
   input += synapse0x2163290();
   input += synapse0x21632d0();
   input += synapse0x2163310();
   return input;
}

double NNfunction-NN_3_8::neuron0x2162980() {
   double input = input0x2162980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x2163350() {
   double input = -0.171426;
   input += synapse0x21634e0();
   input += synapse0x216c570();
   input += synapse0x216c5b0();
   input += synapse0x216c5f0();
   input += synapse0x216c630();
   input += synapse0x216c670();
   input += synapse0x216c6b0();
   input += synapse0x216c6f0();
   input += synapse0x216c730();
   input += synapse0x216c770();
   input += synapse0x216c7b0();
   input += synapse0x216c7f0();
   input += synapse0x216c830();
   input += synapse0x216c870();
   input += synapse0x216c8b0();
   input += synapse0x216c8f0();
   input += synapse0x216c3c0();
   input += synapse0x216c400();
   input += synapse0x216ca40();
   input += synapse0x216ca80();
   input += synapse0x216cac0();
   input += synapse0x216cb00();
   input += synapse0x216cb40();
   input += synapse0x216cb80();
   return input;
}

double NNfunction-NN_3_8::neuron0x2163350() {
   double input = input0x2163350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x216cbc0() {
   double input = 0.0915259;
   input += synapse0x216cf00();
   input += synapse0x216cf40();
   input += synapse0x216cf80();
   input += synapse0x216cfc0();
   input += synapse0x216d000();
   input += synapse0x216d040();
   input += synapse0x216d080();
   input += synapse0x216d0c0();
   input += synapse0x216d100();
   input += synapse0x216d140();
   input += synapse0x216d180();
   input += synapse0x216d1c0();
   input += synapse0x216d200();
   input += synapse0x216d240();
   input += synapse0x216d280();
   input += synapse0x216d2c0();
   input += synapse0x216cd50();
   input += synapse0x216cd90();
   input += synapse0x216d410();
   input += synapse0x216d450();
   input += synapse0x216d490();
   input += synapse0x216d4d0();
   input += synapse0x216d510();
   input += synapse0x216d550();
   return input;
}

double NNfunction-NN_3_8::neuron0x216cbc0() {
   double input = input0x216cbc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x216d590() {
   double input = -1.62513;
   input += synapse0x216d8d0();
   input += synapse0x216d910();
   input += synapse0x216d950();
   input += synapse0x216d990();
   input += synapse0x216d9d0();
   input += synapse0x216da10();
   input += synapse0x216da50();
   input += synapse0x216da90();
   input += synapse0x216dad0();
   input += synapse0x216db10();
   input += synapse0x216db50();
   input += synapse0x216db90();
   input += synapse0x216dbd0();
   input += synapse0x216dc10();
   input += synapse0x216dc50();
   input += synapse0x216dc90();
   input += synapse0x216d720();
   input += synapse0x216d760();
   input += synapse0x216dde0();
   input += synapse0x216de20();
   input += synapse0x216de60();
   input += synapse0x216dea0();
   input += synapse0x216dee0();
   input += synapse0x216df20();
   return input;
}

double NNfunction-NN_3_8::neuron0x216d590() {
   double input = input0x216d590();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x216df60() {
   double input = -0.174483;
   input += synapse0x216e2a0();
   input += synapse0x216e2e0();
   input += synapse0x216e320();
   input += synapse0x216e360();
   input += synapse0x216e3a0();
   input += synapse0x216e3e0();
   input += synapse0x216e420();
   input += synapse0x216e460();
   input += synapse0x216e4a0();
   input += synapse0x216e4e0();
   input += synapse0x216e520();
   input += synapse0x216e560();
   input += synapse0x216e5a0();
   input += synapse0x216e5e0();
   input += synapse0x216e620();
   input += synapse0x216e660();
   input += synapse0x216e0f0();
   input += synapse0x216e130();
   input += synapse0x216e7b0();
   input += synapse0x216e7f0();
   input += synapse0x216e830();
   input += synapse0x216e870();
   input += synapse0x216e8b0();
   input += synapse0x216e8f0();
   return input;
}

double NNfunction-NN_3_8::neuron0x216df60() {
   double input = input0x216df60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x216e930() {
   double input = 1.22577;
   input += synapse0x216ec70();
   input += synapse0x216ecb0();
   input += synapse0x216ecf0();
   input += synapse0x216ed30();
   input += synapse0x216ed70();
   input += synapse0x216edb0();
   input += synapse0x216edf0();
   input += synapse0x216ee30();
   input += synapse0x216ee70();
   input += synapse0x216eeb0();
   input += synapse0x216eef0();
   input += synapse0x216ef30();
   input += synapse0x216ef70();
   input += synapse0x216efb0();
   input += synapse0x216eff0();
   input += synapse0x216f030();
   input += synapse0x216eac0();
   input += synapse0x216eb00();
   input += synapse0x216f180();
   input += synapse0x216f1c0();
   input += synapse0x216f200();
   input += synapse0x216f240();
   input += synapse0x216f280();
   input += synapse0x216f2c0();
   return input;
}

double NNfunction-NN_3_8::neuron0x216e930() {
   double input = input0x216e930();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x216f300() {
   double input = -0.401556;
   input += synapse0x216f640();
   input += synapse0x216f680();
   input += synapse0x216f6c0();
   input += synapse0x216f700();
   input += synapse0x216f740();
   input += synapse0x216f780();
   input += synapse0x216f7c0();
   input += synapse0x216f800();
   input += synapse0x216f840();
   input += synapse0x216f880();
   input += synapse0x216f8c0();
   input += synapse0x216f900();
   input += synapse0x216f940();
   input += synapse0x216f980();
   input += synapse0x216f9c0();
   input += synapse0x216fa00();
   input += synapse0x216f490();
   input += synapse0x216f4d0();
   input += synapse0x216fb50();
   input += synapse0x216fb90();
   input += synapse0x216fbd0();
   input += synapse0x216fc10();
   input += synapse0x216fc50();
   input += synapse0x216fc90();
   return input;
}

double NNfunction-NN_3_8::neuron0x216f300() {
   double input = input0x216f300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x216fcd0() {
   double input = 2.48912;
   input += synapse0x2170010();
   input += synapse0x2170050();
   input += synapse0x2170090();
   input += synapse0x21700d0();
   input += synapse0x2170110();
   input += synapse0x2170150();
   input += synapse0x2170190();
   input += synapse0x21701d0();
   input += synapse0x2170210();
   input += synapse0x2170250();
   input += synapse0x2170290();
   input += synapse0x21702d0();
   input += synapse0x2170310();
   input += synapse0x2170350();
   input += synapse0x2170390();
   input += synapse0x21703d0();
   input += synapse0x216fe60();
   input += synapse0x216fea0();
   input += synapse0x2170520();
   input += synapse0x2170560();
   input += synapse0x21705a0();
   input += synapse0x21705e0();
   input += synapse0x2170620();
   input += synapse0x2170660();
   return input;
}

double NNfunction-NN_3_8::neuron0x216fcd0() {
   double input = input0x216fcd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x21706a0() {
   double input = -0.678142;
   input += synapse0x21709e0();
   input += synapse0x2170a20();
   input += synapse0x2170a60();
   input += synapse0x2170aa0();
   input += synapse0x2170ae0();
   input += synapse0x2170b20();
   input += synapse0x2170b60();
   input += synapse0x2170ba0();
   input += synapse0x2170be0();
   input += synapse0x2170c20();
   input += synapse0x2170c60();
   input += synapse0x2170ca0();
   input += synapse0x2170ce0();
   input += synapse0x2170d20();
   input += synapse0x2170d60();
   input += synapse0x2170da0();
   input += synapse0x2170830();
   input += synapse0x2170870();
   input += synapse0x2170ef0();
   input += synapse0x2170f30();
   input += synapse0x2170f70();
   input += synapse0x2170fb0();
   input += synapse0x2170ff0();
   input += synapse0x2171030();
   return input;
}

double NNfunction-NN_3_8::neuron0x21706a0() {
   double input = input0x21706a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x2171070() {
   double input = 0.225084;
   input += synapse0x21713b0();
   input += synapse0x2165980();
   input += synapse0x21659c0();
   input += synapse0x2165a00();
   input += synapse0x2165c50();
   input += synapse0x2165c90();
   input += synapse0x2165cd0();
   input += synapse0x2165f20();
   input += synapse0x2165f60();
   input += synapse0x21661b0();
   input += synapse0x21661f0();
   input += synapse0x2166230();
   input += synapse0x2166480();
   input += synapse0x21664c0();
   input += synapse0x2166710();
   input += synapse0x2166750();
   input += synapse0x2171200();
   input += synapse0x2171240();
   input += synapse0x21668a0();
   input += synapse0x2166db0();
   input += synapse0x2166df0();
   input += synapse0x2166e30();
   input += synapse0x2167080();
   input += synapse0x21670c0();
   return input;
}

double NNfunction-NN_3_8::neuron0x2171070() {
   double input = input0x2171070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x2167100() {
   double input = 1.59409;
   input += synapse0x2166970();
   input += synapse0x21669b0();
   input += synapse0x21669f0();
   input += synapse0x2166a30();
   input += synapse0x21673b0();
   input += synapse0x2173700();
   input += synapse0x2173740();
   input += synapse0x2173780();
   input += synapse0x21737c0();
   input += synapse0x2173800();
   input += synapse0x2173840();
   input += synapse0x2173880();
   input += synapse0x21738c0();
   input += synapse0x2173900();
   input += synapse0x2173940();
   input += synapse0x2173980();
   input += synapse0x2167290();
   input += synapse0x21672d0();
   input += synapse0x2173ad0();
   input += synapse0x2173b10();
   input += synapse0x2173b50();
   input += synapse0x2173b90();
   input += synapse0x2173bd0();
   input += synapse0x2173c10();
   return input;
}

double NNfunction-NN_3_8::neuron0x2167100() {
   double input = input0x2167100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x2173c50() {
   double input = -1.11773;
   input += synapse0x2173f90();
   input += synapse0x2173fd0();
   input += synapse0x2174010();
   input += synapse0x2174050();
   input += synapse0x2174090();
   input += synapse0x21740d0();
   input += synapse0x2174110();
   input += synapse0x2174150();
   input += synapse0x2174190();
   input += synapse0x21741d0();
   input += synapse0x2174210();
   input += synapse0x2174250();
   input += synapse0x2174290();
   input += synapse0x21742d0();
   input += synapse0x2174310();
   input += synapse0x2174350();
   input += synapse0x2173de0();
   input += synapse0x2173e20();
   input += synapse0x21744a0();
   input += synapse0x21744e0();
   input += synapse0x2174520();
   input += synapse0x2174560();
   input += synapse0x21745a0();
   input += synapse0x21745e0();
   return input;
}

double NNfunction-NN_3_8::neuron0x2173c50() {
   double input = input0x2173c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x2174620() {
   double input = -0.743442;
   input += synapse0x2174960();
   input += synapse0x21749a0();
   input += synapse0x21749e0();
   input += synapse0x2174a20();
   input += synapse0x2174a60();
   input += synapse0x2174aa0();
   input += synapse0x2174ae0();
   input += synapse0x2174b20();
   input += synapse0x2174b60();
   input += synapse0x2174ba0();
   input += synapse0x2174be0();
   input += synapse0x2174c20();
   input += synapse0x2174c60();
   input += synapse0x2174ca0();
   input += synapse0x2174ce0();
   input += synapse0x2174d20();
   input += synapse0x21747b0();
   input += synapse0x21747f0();
   input += synapse0x2174e70();
   input += synapse0x2174eb0();
   input += synapse0x2174ef0();
   input += synapse0x2174f30();
   input += synapse0x2174f70();
   input += synapse0x2174fb0();
   return input;
}

double NNfunction-NN_3_8::neuron0x2174620() {
   double input = input0x2174620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x2174ff0() {
   double input = 3.26239;
   input += synapse0x2175330();
   input += synapse0x2175370();
   input += synapse0x21753b0();
   input += synapse0x21753f0();
   input += synapse0x2175430();
   input += synapse0x2175470();
   input += synapse0x21754b0();
   input += synapse0x21754f0();
   input += synapse0x2175530();
   input += synapse0x2175570();
   input += synapse0x21755b0();
   input += synapse0x21755f0();
   input += synapse0x2175630();
   input += synapse0x2175670();
   input += synapse0x21756b0();
   input += synapse0x21756f0();
   input += synapse0x2175180();
   input += synapse0x21751c0();
   input += synapse0x2175840();
   input += synapse0x2175880();
   input += synapse0x21758c0();
   input += synapse0x2175900();
   input += synapse0x2175940();
   input += synapse0x2175980();
   return input;
}

double NNfunction-NN_3_8::neuron0x2174ff0() {
   double input = input0x2174ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x21759c0() {
   double input = 4.19486;
   input += synapse0x2175d00();
   input += synapse0x2175d40();
   input += synapse0x2175d80();
   input += synapse0x2175dc0();
   input += synapse0x2175e00();
   input += synapse0x2175e40();
   input += synapse0x2175e80();
   input += synapse0x2175ec0();
   input += synapse0x2175f00();
   input += synapse0x2175f40();
   input += synapse0x2175f80();
   input += synapse0x2175fc0();
   input += synapse0x2176000();
   input += synapse0x2176040();
   input += synapse0x2176080();
   input += synapse0x21760c0();
   input += synapse0x2175b50();
   input += synapse0x2175b90();
   input += synapse0x2176210();
   input += synapse0x2176250();
   input += synapse0x2176290();
   input += synapse0x21762d0();
   input += synapse0x2176310();
   input += synapse0x2176350();
   return input;
}

double NNfunction-NN_3_8::neuron0x21759c0() {
   double input = input0x21759c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x2176390() {
   double input = -0.925517;
   input += synapse0x21766d0();
   input += synapse0x2176710();
   input += synapse0x2176750();
   input += synapse0x2176790();
   input += synapse0x21767d0();
   input += synapse0x2176810();
   input += synapse0x2176850();
   input += synapse0x2176890();
   input += synapse0x21768d0();
   input += synapse0x2176910();
   input += synapse0x2176950();
   input += synapse0x2176990();
   input += synapse0x21769d0();
   input += synapse0x2176a10();
   input += synapse0x2176a50();
   input += synapse0x2176a90();
   input += synapse0x2176520();
   input += synapse0x2176560();
   input += synapse0x2176be0();
   input += synapse0x2176c20();
   input += synapse0x2176c60();
   input += synapse0x2176ca0();
   input += synapse0x2176ce0();
   input += synapse0x2176d20();
   return input;
}

double NNfunction-NN_3_8::neuron0x2176390() {
   double input = input0x2176390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x2176d60() {
   double input = 0.794921;
   input += synapse0x21770a0();
   input += synapse0x21770e0();
   input += synapse0x2177120();
   input += synapse0x2177160();
   input += synapse0x21771a0();
   input += synapse0x21771e0();
   input += synapse0x2177220();
   input += synapse0x2177260();
   input += synapse0x21772a0();
   input += synapse0x21772e0();
   input += synapse0x2177320();
   input += synapse0x2177360();
   input += synapse0x21773a0();
   input += synapse0x21773e0();
   input += synapse0x2177420();
   input += synapse0x2177460();
   input += synapse0x2176ef0();
   input += synapse0x2176f30();
   input += synapse0x21775b0();
   input += synapse0x21775f0();
   input += synapse0x2177630();
   input += synapse0x2177670();
   input += synapse0x21776b0();
   input += synapse0x21776f0();
   return input;
}

double NNfunction-NN_3_8::neuron0x2176d60() {
   double input = input0x2176d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x2177730() {
   double input = 1.25605;
   input += synapse0x2177a70();
   input += synapse0x2177ab0();
   input += synapse0x2177af0();
   input += synapse0x2177b30();
   input += synapse0x2177b70();
   input += synapse0x2177bb0();
   input += synapse0x2177bf0();
   input += synapse0x2177c30();
   input += synapse0x2177c70();
   input += synapse0x2177cb0();
   input += synapse0x2177cf0();
   input += synapse0x2177d30();
   input += synapse0x2177d70();
   input += synapse0x2177db0();
   input += synapse0x2177df0();
   input += synapse0x2177e30();
   input += synapse0x21778c0();
   input += synapse0x2177900();
   input += synapse0x2177f80();
   input += synapse0x2177fc0();
   input += synapse0x2178000();
   input += synapse0x2178040();
   input += synapse0x2178080();
   input += synapse0x21780c0();
   return input;
}

double NNfunction-NN_3_8::neuron0x2177730() {
   double input = input0x2177730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x2178100() {
   double input = 1.22838;
   input += synapse0x2160b70();
   input += synapse0x2160bb0();
   input += synapse0x2160bf0();
   input += synapse0x2160c30();
   input += synapse0x2160c70();
   input += synapse0x2160cb0();
   input += synapse0x2160cf0();
   input += synapse0x2160d30();
   input += synapse0x2178850();
   input += synapse0x2178890();
   input += synapse0x21788d0();
   input += synapse0x2178910();
   input += synapse0x2178950();
   input += synapse0x2178990();
   input += synapse0x21789d0();
   input += synapse0x2178a10();
   input += synapse0x2178290();
   input += synapse0x21782d0();
   input += synapse0x2178b60();
   input += synapse0x2178ba0();
   input += synapse0x2178be0();
   input += synapse0x2178c20();
   input += synapse0x2178c60();
   input += synapse0x2178ca0();
   return input;
}

double NNfunction-NN_3_8::neuron0x2178100() {
   double input = input0x2178100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x2178ce0() {
   double input = 0.312821;
   input += synapse0x2179020();
   input += synapse0x2179060();
   input += synapse0x21790a0();
   input += synapse0x21790e0();
   input += synapse0x2179120();
   input += synapse0x2179160();
   input += synapse0x21791a0();
   input += synapse0x21791e0();
   input += synapse0x2179220();
   input += synapse0x2179260();
   input += synapse0x21792a0();
   input += synapse0x21792e0();
   input += synapse0x2179320();
   input += synapse0x2179360();
   input += synapse0x21793a0();
   input += synapse0x21793e0();
   input += synapse0x2178e70();
   input += synapse0x2178eb0();
   input += synapse0x2179530();
   input += synapse0x2179570();
   input += synapse0x21795b0();
   input += synapse0x21795f0();
   input += synapse0x2179630();
   input += synapse0x2179670();
   return input;
}

double NNfunction-NN_3_8::neuron0x2178ce0() {
   double input = input0x2178ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x21796b0() {
   double input = 0.031426;
   input += synapse0x21799f0();
   input += synapse0x2179a30();
   input += synapse0x2179a70();
   input += synapse0x2179ab0();
   input += synapse0x2179af0();
   input += synapse0x2179b30();
   input += synapse0x2179b70();
   input += synapse0x2179bb0();
   input += synapse0x2179bf0();
   input += synapse0x2179c30();
   input += synapse0x2179c70();
   input += synapse0x2179cb0();
   input += synapse0x2179cf0();
   input += synapse0x2179d30();
   input += synapse0x2179d70();
   input += synapse0x2179db0();
   input += synapse0x2179840();
   input += synapse0x2179880();
   input += synapse0x216a3b0();
   input += synapse0x216a3f0();
   input += synapse0x216a430();
   input += synapse0x216a470();
   input += synapse0x216a4b0();
   input += synapse0x216a4f0();
   return input;
}

double NNfunction-NN_3_8::neuron0x21796b0() {
   double input = input0x21796b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x216a530() {
   double input = -0.942742;
   input += synapse0x216a870();
   input += synapse0x216a8b0();
   input += synapse0x216a8f0();
   input += synapse0x216a930();
   input += synapse0x216a970();
   input += synapse0x216a9b0();
   input += synapse0x216a9f0();
   input += synapse0x216aa30();
   input += synapse0x216aa70();
   input += synapse0x216aab0();
   input += synapse0x216aaf0();
   input += synapse0x216ab30();
   input += synapse0x216ab70();
   input += synapse0x216abb0();
   input += synapse0x216abf0();
   input += synapse0x216ac30();
   input += synapse0x216a6c0();
   input += synapse0x216a700();
   input += synapse0x216ad80();
   input += synapse0x216adc0();
   input += synapse0x216ae00();
   input += synapse0x216ae40();
   input += synapse0x216ae80();
   input += synapse0x216aec0();
   return input;
}

double NNfunction-NN_3_8::neuron0x216a530() {
   double input = input0x216a530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x216af00() {
   double input = 1.0198;
   input += synapse0x216b240();
   input += synapse0x216b280();
   input += synapse0x216b2c0();
   input += synapse0x216b300();
   input += synapse0x216b340();
   input += synapse0x216b380();
   input += synapse0x216b3c0();
   input += synapse0x216b400();
   input += synapse0x216b440();
   input += synapse0x216b480();
   input += synapse0x216b4c0();
   input += synapse0x216b500();
   input += synapse0x216b540();
   input += synapse0x216b580();
   input += synapse0x216b5c0();
   input += synapse0x216b600();
   input += synapse0x216b090();
   input += synapse0x216b0d0();
   input += synapse0x216b750();
   input += synapse0x216b790();
   input += synapse0x216b7d0();
   input += synapse0x216b810();
   input += synapse0x216b850();
   input += synapse0x216b890();
   return input;
}

double NNfunction-NN_3_8::neuron0x216af00() {
   double input = input0x216af00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x216b8d0() {
   double input = -1.4846;
   input += synapse0x216bc10();
   input += synapse0x216bc50();
   input += synapse0x216bc90();
   input += synapse0x216bcd0();
   input += synapse0x216bd10();
   input += synapse0x216bd50();
   input += synapse0x216bd90();
   input += synapse0x216bdd0();
   input += synapse0x216be10();
   input += synapse0x216be50();
   input += synapse0x216be90();
   input += synapse0x216bed0();
   input += synapse0x216bf10();
   input += synapse0x216bf50();
   input += synapse0x216bf90();
   input += synapse0x216bfd0();
   input += synapse0x216ba60();
   input += synapse0x216baa0();
   input += synapse0x216c120();
   input += synapse0x216c160();
   input += synapse0x216c1a0();
   input += synapse0x216c1e0();
   input += synapse0x216c220();
   input += synapse0x216c260();
   return input;
}

double NNfunction-NN_3_8::neuron0x216b8d0() {
   double input = input0x216b8d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x217df10() {
   double input = 0.0362069;
   input += synapse0x217e130();
   input += synapse0x217e170();
   input += synapse0x217e1b0();
   input += synapse0x217e1f0();
   input += synapse0x217e230();
   input += synapse0x217e270();
   input += synapse0x217e2b0();
   input += synapse0x217e2f0();
   input += synapse0x217e330();
   input += synapse0x217e370();
   input += synapse0x217e3b0();
   input += synapse0x217e3f0();
   input += synapse0x217e430();
   input += synapse0x217e470();
   input += synapse0x217e4b0();
   input += synapse0x217e4f0();
   input += synapse0x216c2a0();
   input += synapse0x216c2e0();
   input += synapse0x217e640();
   input += synapse0x217e680();
   input += synapse0x217e6c0();
   input += synapse0x217e700();
   input += synapse0x217e740();
   input += synapse0x217e780();
   return input;
}

double NNfunction-NN_3_8::neuron0x217df10() {
   double input = input0x217df10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x217e7c0() {
   double input = -0.208429;
   input += synapse0x217eb00();
   input += synapse0x217eb40();
   input += synapse0x217eb80();
   input += synapse0x217ebc0();
   input += synapse0x217ec00();
   input += synapse0x217ec40();
   input += synapse0x217ec80();
   input += synapse0x217ecc0();
   input += synapse0x217ed00();
   input += synapse0x217ed40();
   input += synapse0x217ed80();
   input += synapse0x217edc0();
   input += synapse0x217ee00();
   input += synapse0x217ee40();
   input += synapse0x217ee80();
   input += synapse0x217eec0();
   input += synapse0x217e950();
   input += synapse0x217e990();
   input += synapse0x217f010();
   input += synapse0x217f050();
   input += synapse0x217f090();
   input += synapse0x217f0d0();
   input += synapse0x217f110();
   input += synapse0x217f150();
   return input;
}

double NNfunction-NN_3_8::neuron0x217e7c0() {
   double input = input0x217e7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x217f190() {
   double input = -0.534887;
   input += synapse0x217f4d0();
   input += synapse0x217f510();
   input += synapse0x217f550();
   input += synapse0x217f590();
   input += synapse0x217f5d0();
   input += synapse0x217f610();
   input += synapse0x217f650();
   input += synapse0x217f690();
   input += synapse0x217f6d0();
   input += synapse0x217f710();
   input += synapse0x217f750();
   input += synapse0x217f790();
   input += synapse0x217f7d0();
   input += synapse0x217f810();
   input += synapse0x217f850();
   input += synapse0x217f890();
   input += synapse0x217f320();
   input += synapse0x217f360();
   input += synapse0x217f9e0();
   input += synapse0x217fa20();
   input += synapse0x217fa60();
   input += synapse0x217faa0();
   input += synapse0x217fae0();
   input += synapse0x217fb20();
   return input;
}

double NNfunction-NN_3_8::neuron0x217f190() {
   double input = input0x217f190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x217fb60() {
   double input = -1.72042;
   input += synapse0x217fea0();
   input += synapse0x217fee0();
   input += synapse0x217ff20();
   input += synapse0x217ff60();
   input += synapse0x217ffa0();
   input += synapse0x217ffe0();
   input += synapse0x2180020();
   input += synapse0x2180060();
   input += synapse0x21800a0();
   input += synapse0x21800e0();
   input += synapse0x2180120();
   input += synapse0x2180160();
   input += synapse0x21801a0();
   input += synapse0x21801e0();
   input += synapse0x2180220();
   input += synapse0x2180260();
   input += synapse0x217fcf0();
   input += synapse0x217fd30();
   input += synapse0x21803b0();
   input += synapse0x21803f0();
   input += synapse0x2180430();
   input += synapse0x2180470();
   input += synapse0x21804b0();
   input += synapse0x21804f0();
   return input;
}

double NNfunction-NN_3_8::neuron0x217fb60() {
   double input = input0x217fb60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x2186d60() {
   double input = 0.0603587;
   input += synapse0x215ca90();
   input += synapse0x215cad0();
   input += synapse0x215dfa0();
   input += synapse0x215dfe0();
   input += synapse0x215e970();
   input += synapse0x215e9b0();
   input += synapse0x215f740();
   input += synapse0x215f780();
   input += synapse0x2160110();
   input += synapse0x2160150();
   input += synapse0x2160ae0();
   input += synapse0x2160b20();
   input += synapse0x21615c0();
   input += synapse0x2161600();
   input += synapse0x2161f90();
   input += synapse0x2161fd0();
   input += synapse0x215f070();
   input += synapse0x215f0b0();
   input += synapse0x2163b40();
   input += synapse0x2163b80();
   input += synapse0x2164510();
   input += synapse0x2164550();
   input += synapse0x2164ee0();
   input += synapse0x2164f20();
   input += synapse0x21658b0();
   input += synapse0x21658f0();
   input += synapse0x2159a20();
   input += synapse0x2159a60();
   input += synapse0x21679a0();
   input += synapse0x21679e0();
   input += synapse0x2168370();
   input += synapse0x21683b0();
   input += synapse0x2168d40();
   input += synapse0x2168d80();
   input += synapse0x2169710();
   input += synapse0x2169750();
   input += synapse0x216a0e0();
   input += synapse0x216a120();
   input += synapse0x2162c30();
   input += synapse0x2162c70();
   input += synapse0x216c4e0();
   input += synapse0x216c520();
   input += synapse0x216ce70();
   input += synapse0x216ceb0();
   input += synapse0x216d840();
   input += synapse0x216d880();
   input += synapse0x216e210();
   input += synapse0x216e250();
   input += synapse0x216ebe0();
   input += synapse0x216ec20();
   return input;
}

double NNfunction-NN_3_8::neuron0x2186d60() {
   double input = input0x2186d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x2187100() {
   double input = 0.446683;
   input += synapse0x2171320();
   input += synapse0x2171360();
   input += synapse0x21668e0();
   input += synapse0x2166920();
   input += synapse0x2173f00();
   input += synapse0x2173f40();
   input += synapse0x21748d0();
   input += synapse0x2174910();
   input += synapse0x21752a0();
   input += synapse0x21752e0();
   input += synapse0x2175c70();
   input += synapse0x2175cb0();
   input += synapse0x2176640();
   input += synapse0x2176680();
   input += synapse0x2177010();
   input += synapse0x2177050();
   input += synapse0x21779e0();
   input += synapse0x2177a20();
   input += synapse0x21783b0();
   input += synapse0x21783f0();
   input += synapse0x2178f90();
   input += synapse0x2178fd0();
   input += synapse0x2179960();
   input += synapse0x21799a0();
   input += synapse0x216a7e0();
   input += synapse0x216a820();
   input += synapse0x216b1b0();
   input += synapse0x216b1f0();
   input += synapse0x216bb80();
   input += synapse0x216bbc0();
   input += synapse0x217e0a0();
   input += synapse0x217e0e0();
   input += synapse0x217ea70();
   input += synapse0x217eab0();
   input += synapse0x217f440();
   input += synapse0x217f480();
   input += synapse0x217fe10();
   input += synapse0x217fe50();
   input += synapse0x215bd00();
   input += synapse0x215bd40();
   input += synapse0x216f5b0();
   input += synapse0x216f5f0();
   input += synapse0x2180530();
   input += synapse0x2180570();
   input += synapse0x21805b0();
   input += synapse0x21805f0();
   input += synapse0x21874a0();
   input += synapse0x21874e0();
   input += synapse0x2187520();
   input += synapse0x2187560();
   return input;
}

double NNfunction-NN_3_8::neuron0x2187100() {
   double input = input0x2187100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x21875a0() {
   double input = 0.112899;
   input += synapse0x21878e0();
   input += synapse0x2187920();
   input += synapse0x2187960();
   input += synapse0x21879a0();
   input += synapse0x21879e0();
   input += synapse0x2187a20();
   input += synapse0x2187a60();
   input += synapse0x2187aa0();
   input += synapse0x2187ae0();
   input += synapse0x2187b20();
   input += synapse0x2187b60();
   input += synapse0x2187ba0();
   input += synapse0x2187be0();
   input += synapse0x2187c20();
   input += synapse0x2187c60();
   input += synapse0x2187ca0();
   input += synapse0x2187730();
   input += synapse0x2187770();
   input += synapse0x2187df0();
   input += synapse0x2187e30();
   input += synapse0x2187e70();
   input += synapse0x2187eb0();
   input += synapse0x2187ef0();
   input += synapse0x2187f30();
   input += synapse0x2187f70();
   input += synapse0x2187fb0();
   input += synapse0x2187ff0();
   input += synapse0x2188030();
   input += synapse0x2188070();
   input += synapse0x21880b0();
   input += synapse0x21880f0();
   input += synapse0x2188130();
   input += synapse0x2187ce0();
   input += synapse0x2187d20();
   input += synapse0x2187d60();
   input += synapse0x2187da0();
   input += synapse0x2188380();
   input += synapse0x21883c0();
   input += synapse0x2188400();
   input += synapse0x2188440();
   input += synapse0x2188480();
   input += synapse0x21884c0();
   input += synapse0x2188500();
   input += synapse0x2188540();
   input += synapse0x2188580();
   input += synapse0x21885c0();
   input += synapse0x2188600();
   input += synapse0x2188640();
   input += synapse0x2188680();
   input += synapse0x21886c0();
   return input;
}

double NNfunction-NN_3_8::neuron0x21875a0() {
   double input = input0x21875a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x2188700() {
   double input = -0.242021;
   input += synapse0x2188a40();
   input += synapse0x2188a80();
   input += synapse0x2188ac0();
   input += synapse0x2188b00();
   input += synapse0x2188b40();
   input += synapse0x2188b80();
   input += synapse0x2188bc0();
   input += synapse0x2188c00();
   input += synapse0x2188c40();
   input += synapse0x2188c80();
   input += synapse0x2188cc0();
   input += synapse0x2188d00();
   input += synapse0x2188d40();
   input += synapse0x2188d80();
   input += synapse0x2188dc0();
   input += synapse0x2188e00();
   input += synapse0x2188890();
   input += synapse0x21888d0();
   input += synapse0x2188f50();
   input += synapse0x2188f90();
   input += synapse0x2188fd0();
   input += synapse0x2189010();
   input += synapse0x2189050();
   input += synapse0x2189090();
   input += synapse0x21890d0();
   input += synapse0x2189110();
   input += synapse0x2189150();
   input += synapse0x2189190();
   input += synapse0x21891d0();
   input += synapse0x2189210();
   input += synapse0x2189250();
   input += synapse0x2189290();
   input += synapse0x2188e40();
   input += synapse0x2188e80();
   input += synapse0x2188ec0();
   input += synapse0x2188f00();
   input += synapse0x21894e0();
   input += synapse0x2189520();
   input += synapse0x2189560();
   input += synapse0x21895a0();
   input += synapse0x21895e0();
   input += synapse0x2189620();
   input += synapse0x2189660();
   input += synapse0x21896a0();
   input += synapse0x21896e0();
   input += synapse0x2189720();
   input += synapse0x2189760();
   input += synapse0x21897a0();
   input += synapse0x21897e0();
   input += synapse0x2189820();
   return input;
}

double NNfunction-NN_3_8::neuron0x2188700() {
   double input = input0x2188700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x2189860() {
   double input = 3.3172;
   input += synapse0x2189ba0();
   input += synapse0x2189be0();
   input += synapse0x2189c20();
   input += synapse0x2189c60();
   input += synapse0x2189ca0();
   input += synapse0x2189ce0();
   input += synapse0x2189d20();
   input += synapse0x2189d60();
   input += synapse0x2189da0();
   input += synapse0x2189de0();
   input += synapse0x2189e20();
   input += synapse0x2189e60();
   input += synapse0x2189ea0();
   input += synapse0x2189ee0();
   input += synapse0x2189f20();
   input += synapse0x2189f60();
   input += synapse0x21899f0();
   input += synapse0x2189a30();
   input += synapse0x218a0b0();
   input += synapse0x218a0f0();
   input += synapse0x218a130();
   input += synapse0x218a170();
   input += synapse0x218a1b0();
   input += synapse0x218a1f0();
   input += synapse0x218a230();
   input += synapse0x218a270();
   input += synapse0x218a2b0();
   input += synapse0x218a2f0();
   input += synapse0x218a330();
   input += synapse0x218a370();
   input += synapse0x218a3b0();
   input += synapse0x218a3f0();
   input += synapse0x2189fa0();
   input += synapse0x2189fe0();
   input += synapse0x218a020();
   input += synapse0x218a060();
   input += synapse0x218a640();
   input += synapse0x218a680();
   input += synapse0x218a6c0();
   input += synapse0x218a700();
   input += synapse0x218a740();
   input += synapse0x218a780();
   input += synapse0x218a7c0();
   input += synapse0x218a800();
   input += synapse0x218a840();
   input += synapse0x218a880();
   input += synapse0x218a8c0();
   input += synapse0x218a900();
   input += synapse0x218a940();
   input += synapse0x218a980();
   return input;
}

double NNfunction-NN_3_8::neuron0x2189860() {
   double input = input0x2189860();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-NN_3_8::input0x218a9c0() {
   double input = -2.79272;
   input += synapse0x215baa0();
   input += synapse0x218abe0();
   input += synapse0x218ac20();
   input += synapse0x218ac60();
   input += synapse0x218aca0();
   return input;
}

double NNfunction-NN_3_8::neuron0x218a9c0() {
   double input = input0x218a9c0();
   return (input * 1)+0;
}

double NNfunction-NN_3_8::synapse0x1f168f0() {
   return (neuron0x2156a80()*-0.217727);
}

double NNfunction-NN_3_8::synapse0x2156940() {
   return (neuron0x2156dc0()*0.300785);
}

double NNfunction-NN_3_8::synapse0x2156980() {
   return (neuron0x2157100()*-0.123774);
}

double NNfunction-NN_3_8::synapse0x215bd90() {
   return (neuron0x2157440()*-0.426823);
}

double NNfunction-NN_3_8::synapse0x215bdd0() {
   return (neuron0x2157780()*0.444245);
}

double NNfunction-NN_3_8::synapse0x215be10() {
   return (neuron0x2157ac0()*0.435821);
}

double NNfunction-NN_3_8::synapse0x215be50() {
   return (neuron0x2157e00()*0.11701);
}

double NNfunction-NN_3_8::synapse0x215be90() {
   return (neuron0x2158140()*-0.25308);
}

double NNfunction-NN_3_8::synapse0x215bed0() {
   return (neuron0x2158480()*-0.551158);
}

double NNfunction-NN_3_8::synapse0x215bf10() {
   return (neuron0x21587c0()*-0.150466);
}

double NNfunction-NN_3_8::synapse0x215bf50() {
   return (neuron0x2158b00()*0.155778);
}

double NNfunction-NN_3_8::synapse0x215bf90() {
   return (neuron0x2158e40()*0.0996573);
}

double NNfunction-NN_3_8::synapse0x215bfd0() {
   return (neuron0x2159180()*-0.056143);
}

double NNfunction-NN_3_8::synapse0x215c010() {
   return (neuron0x21594c0()*-0.0977256);
}

double NNfunction-NN_3_8::synapse0x215c050() {
   return (neuron0x2159800()*0.0362552);
}

double NNfunction-NN_3_8::synapse0x215c090() {
   return (neuron0x2159b40()*0.375819);
}

double NNfunction-NN_3_8::synapse0x21568b0() {
   return (neuron0x2159e80()*-0.0665209);
}

double NNfunction-NN_3_8::synapse0x21568f0() {
   return (neuron0x215a3e0()*-0.200048);
}

double NNfunction-NN_3_8::synapse0x1f08140() {
   return (neuron0x215a600()*0.00168);
}

double NNfunction-NN_3_8::synapse0x1f08180() {
   return (neuron0x215a940()*0.0452459);
}

double NNfunction-NN_3_8::synapse0x215c2f0() {
   return (neuron0x215ac80()*0.0989136);
}

double NNfunction-NN_3_8::synapse0x215c330() {
   return (neuron0x215afc0()*-0.0394645);
}

double NNfunction-NN_3_8::synapse0x215c370() {
   return (neuron0x215b300()*-0.131653);
}

double NNfunction-NN_3_8::synapse0x215c3b0() {
   return (neuron0x215b640()*-0.0888763);
}

double NNfunction-NN_3_8::synapse0x215c730() {
   return (neuron0x2156a80()*-0.0259911);
}

double NNfunction-NN_3_8::synapse0x215c770() {
   return (neuron0x2156dc0()*0.00820658);
}

double NNfunction-NN_3_8::synapse0x215c7b0() {
   return (neuron0x2157100()*1.10387);
}

double NNfunction-NN_3_8::synapse0x215c7f0() {
   return (neuron0x2157440()*-0.0264416);
}

double NNfunction-NN_3_8::synapse0x215c830() {
   return (neuron0x2157780()*0.0111523);
}

double NNfunction-NN_3_8::synapse0x215c870() {
   return (neuron0x2157ac0()*-0.00327908);
}

double NNfunction-NN_3_8::synapse0x215c8b0() {
   return (neuron0x2157e00()*0.0134571);
}

double NNfunction-NN_3_8::synapse0x215c8f0() {
   return (neuron0x2158140()*-0.00864903);
}

double NNfunction-NN_3_8::synapse0x215c930() {
   return (neuron0x2158480()*0.0311578);
}

double NNfunction-NN_3_8::synapse0x215c1e0() {
   return (neuron0x21587c0()*-0.00780295);
}

double NNfunction-NN_3_8::synapse0x215c220() {
   return (neuron0x2158b00()*0.0195478);
}

double NNfunction-NN_3_8::synapse0x215c260() {
   return (neuron0x2158e40()*-0.186061);
}

double NNfunction-NN_3_8::synapse0x215c2a0() {
   return (neuron0x2159180()*0.167091);
}

double NNfunction-NN_3_8::synapse0x215cb80() {
   return (neuron0x21594c0()*0.0155074);
}

double NNfunction-NN_3_8::synapse0x215cbc0() {
   return (neuron0x2159800()*0.0346769);
}

double NNfunction-NN_3_8::synapse0x215cc00() {
   return (neuron0x2159b40()*0.0163883);
}

double NNfunction-NN_3_8::synapse0x215c580() {
   return (neuron0x2159e80()*0.00798502);
}

double NNfunction-NN_3_8::synapse0x215c5c0() {
   return (neuron0x215a3e0()*-0.0347532);
}

double NNfunction-NN_3_8::synapse0x215cd50() {
   return (neuron0x215a600()*0.00960444);
}

double NNfunction-NN_3_8::synapse0x215cd90() {
   return (neuron0x215a940()*-0.029313);
}

double NNfunction-NN_3_8::synapse0x215cdd0() {
   return (neuron0x215ac80()*-0.00970954);
}

double NNfunction-NN_3_8::synapse0x215ce10() {
   return (neuron0x215afc0()*-0.0173711);
}

double NNfunction-NN_3_8::synapse0x215ce50() {
   return (neuron0x215b300()*-0.0466071);
}

double NNfunction-NN_3_8::synapse0x215ce90() {
   return (neuron0x215b640()*-0.709785);
}

double NNfunction-NN_3_8::synapse0x215d210() {
   return (neuron0x2156a80()*0.0281313);
}

double NNfunction-NN_3_8::synapse0x215d250() {
   return (neuron0x2156dc0()*0.0309126);
}

double NNfunction-NN_3_8::synapse0x215d290() {
   return (neuron0x2157100()*-0.344765);
}

double NNfunction-NN_3_8::synapse0x215d2d0() {
   return (neuron0x2157440()*-0.0247647);
}

double NNfunction-NN_3_8::synapse0x215d310() {
   return (neuron0x2157780()*0.0080305);
}

double NNfunction-NN_3_8::synapse0x215d350() {
   return (neuron0x2157ac0()*-0.010786);
}

double NNfunction-NN_3_8::synapse0x215d390() {
   return (neuron0x2157e00()*0.00348674);
}

double NNfunction-NN_3_8::synapse0x215d3d0() {
   return (neuron0x2158140()*-0.0191128);
}

double NNfunction-NN_3_8::synapse0x215d410() {
   return (neuron0x2158480()*-0.00648642);
}

double NNfunction-NN_3_8::synapse0x215d450() {
   return (neuron0x21587c0()*-0.00167917);
}

double NNfunction-NN_3_8::synapse0x215d490() {
   return (neuron0x2158b00()*-0.0163391);
}

double NNfunction-NN_3_8::synapse0x215d4d0() {
   return (neuron0x2158e40()*-0.0573682);
}

double NNfunction-NN_3_8::synapse0x215d510() {
   return (neuron0x2159180()*0.00369841);
}

double NNfunction-NN_3_8::synapse0x215d550() {
   return (neuron0x21594c0()*-0.0105811);
}

double NNfunction-NN_3_8::synapse0x215d590() {
   return (neuron0x2159800()*0.025235);
}

double NNfunction-NN_3_8::synapse0x215d5d0() {
   return (neuron0x2159b40()*0.00887833);
}

double NNfunction-NN_3_8::synapse0x215d060() {
   return (neuron0x2159e80()*-0.0148278);
}

double NNfunction-NN_3_8::synapse0x215d0a0() {
   return (neuron0x215a3e0()*-0.00404402);
}

double NNfunction-NN_3_8::synapse0x1f15fc0() {
   return (neuron0x215a600()*0.0213697);
}

double NNfunction-NN_3_8::synapse0x1f16000() {
   return (neuron0x215a940()*-0.0163607);
}

double NNfunction-NN_3_8::synapse0x2145b10() {
   return (neuron0x215ac80()*-0.0209139);
}

double NNfunction-NN_3_8::synapse0x2145b50() {
   return (neuron0x215afc0()*0.00849063);
}

double NNfunction-NN_3_8::synapse0x2145b90() {
   return (neuron0x215b300()*0.000120194);
}

double NNfunction-NN_3_8::synapse0x21569c0() {
   return (neuron0x215b640()*0.964423);
}

double NNfunction-NN_3_8::synapse0x215cb20() {
   return (neuron0x2156a80()*0.0936021);
}

double NNfunction-NN_3_8::synapse0x2156a00() {
   return (neuron0x2156dc0()*-0.244778);
}

double NNfunction-NN_3_8::synapse0x2156a40() {
   return (neuron0x2157100()*0.616128);
}

double NNfunction-NN_3_8::synapse0x215d720() {
   return (neuron0x2157440()*0.297392);
}

double NNfunction-NN_3_8::synapse0x215d760() {
   return (neuron0x2157780()*0.0446843);
}

double NNfunction-NN_3_8::synapse0x215d7a0() {
   return (neuron0x2157ac0()*0.136224);
}

double NNfunction-NN_3_8::synapse0x215d7e0() {
   return (neuron0x2157e00()*-0.278205);
}

double NNfunction-NN_3_8::synapse0x215d820() {
   return (neuron0x2158140()*-0.376444);
}

double NNfunction-NN_3_8::synapse0x215d860() {
   return (neuron0x2158480()*0.141736);
}

double NNfunction-NN_3_8::synapse0x215d8a0() {
   return (neuron0x21587c0()*0.164585);
}

double NNfunction-NN_3_8::synapse0x215d8e0() {
   return (neuron0x2158b00()*0.241744);
}

double NNfunction-NN_3_8::synapse0x215d920() {
   return (neuron0x2158e40()*-0.0748934);
}

double NNfunction-NN_3_8::synapse0x215d960() {
   return (neuron0x2159180()*0.322013);
}

double NNfunction-NN_3_8::synapse0x215d9a0() {
   return (neuron0x21594c0()*-0.469494);
}

double NNfunction-NN_3_8::synapse0x215d9e0() {
   return (neuron0x2159800()*-0.171076);
}

double NNfunction-NN_3_8::synapse0x215da20() {
   return (neuron0x2159b40()*-0.151284);
}

double NNfunction-NN_3_8::synapse0x215c970() {
   return (neuron0x2159e80()*-0.182218);
}

double NNfunction-NN_3_8::synapse0x215c9b0() {
   return (neuron0x215a3e0()*0.211347);
}

double NNfunction-NN_3_8::synapse0x215db70() {
   return (neuron0x215a600()*0.232846);
}

double NNfunction-NN_3_8::synapse0x215dbb0() {
   return (neuron0x215a940()*-0.0809071);
}

double NNfunction-NN_3_8::synapse0x215dbf0() {
   return (neuron0x215ac80()*-0.481791);
}

double NNfunction-NN_3_8::synapse0x215dc30() {
   return (neuron0x215afc0()*-0.227928);
}

double NNfunction-NN_3_8::synapse0x215dc70() {
   return (neuron0x215b300()*-0.00258222);
}

double NNfunction-NN_3_8::synapse0x215dcb0() {
   return (neuron0x215b640()*0.380058);
}

double NNfunction-NN_3_8::synapse0x215e030() {
   return (neuron0x2156a80()*0.0146777);
}

double NNfunction-NN_3_8::synapse0x215e070() {
   return (neuron0x2156dc0()*0.36799);
}

double NNfunction-NN_3_8::synapse0x215e0b0() {
   return (neuron0x2157100()*2.70533);
}

double NNfunction-NN_3_8::synapse0x215e0f0() {
   return (neuron0x2157440()*-0.0423872);
}

double NNfunction-NN_3_8::synapse0x215e130() {
   return (neuron0x2157780()*0.00276503);
}

double NNfunction-NN_3_8::synapse0x215e170() {
   return (neuron0x2157ac0()*-0.0650682);
}

double NNfunction-NN_3_8::synapse0x215e1b0() {
   return (neuron0x2157e00()*-0.0303201);
}

double NNfunction-NN_3_8::synapse0x215e1f0() {
   return (neuron0x2158140()*-0.0602479);
}

double NNfunction-NN_3_8::synapse0x215e230() {
   return (neuron0x2158480()*0.0348173);
}

double NNfunction-NN_3_8::synapse0x215e270() {
   return (neuron0x21587c0()*-0.0746349);
}

double NNfunction-NN_3_8::synapse0x215e2b0() {
   return (neuron0x2158b00()*-0.0163329);
}

double NNfunction-NN_3_8::synapse0x215e2f0() {
   return (neuron0x2158e40()*-1.85804);
}

double NNfunction-NN_3_8::synapse0x215e330() {
   return (neuron0x2159180()*-0.0795113);
}

double NNfunction-NN_3_8::synapse0x215e370() {
   return (neuron0x21594c0()*0.0281648);
}

double NNfunction-NN_3_8::synapse0x215e3b0() {
   return (neuron0x2159800()*-0.0325352);
}

double NNfunction-NN_3_8::synapse0x215e3f0() {
   return (neuron0x2159b40()*-0.0794229);
}

double NNfunction-NN_3_8::synapse0x215de80() {
   return (neuron0x2159e80()*-0.0646006);
}

double NNfunction-NN_3_8::synapse0x215dec0() {
   return (neuron0x215a3e0()*-0.022052);
}

double NNfunction-NN_3_8::synapse0x215e540() {
   return (neuron0x215a600()*0.0472258);
}

double NNfunction-NN_3_8::synapse0x215e580() {
   return (neuron0x215a940()*-0.00401993);
}

double NNfunction-NN_3_8::synapse0x215e5c0() {
   return (neuron0x215ac80()*0.00516387);
}

double NNfunction-NN_3_8::synapse0x215e600() {
   return (neuron0x215afc0()*0.0818522);
}

double NNfunction-NN_3_8::synapse0x215e640() {
   return (neuron0x215b300()*-0.0131975);
}

double NNfunction-NN_3_8::synapse0x215e680() {
   return (neuron0x215b640()*-0.384237);
}

double NNfunction-NN_3_8::synapse0x215ea00() {
   return (neuron0x2156a80()*0.0544856);
}

double NNfunction-NN_3_8::synapse0x215ea40() {
   return (neuron0x2156dc0()*0.0180274);
}

double NNfunction-NN_3_8::synapse0x215ea80() {
   return (neuron0x2157100()*-1.98494);
}

double NNfunction-NN_3_8::synapse0x215eac0() {
   return (neuron0x2157440()*-0.00743315);
}

double NNfunction-NN_3_8::synapse0x215eb00() {
   return (neuron0x2157780()*-0.0325367);
}

double NNfunction-NN_3_8::synapse0x215eb40() {
   return (neuron0x2157ac0()*0.0428851);
}

double NNfunction-NN_3_8::synapse0x215eb80() {
   return (neuron0x2157e00()*-0.00551731);
}

double NNfunction-NN_3_8::synapse0x215ebc0() {
   return (neuron0x2158140()*0.0514524);
}

double NNfunction-NN_3_8::synapse0x215ec00() {
   return (neuron0x2158480()*0.00920292);
}

double NNfunction-NN_3_8::synapse0x1f16350() {
   return (neuron0x21587c0()*0.0382094);
}

double NNfunction-NN_3_8::synapse0x1f16390() {
   return (neuron0x2158b00()*0.00650588);
}

double NNfunction-NN_3_8::synapse0x1f163d0() {
   return (neuron0x2158e40()*0.395001);
}

double NNfunction-NN_3_8::synapse0x1f16410() {
   return (neuron0x2159180()*0.0719473);
}

double NNfunction-NN_3_8::synapse0x1f16450() {
   return (neuron0x21594c0()*0.00818679);
}

double NNfunction-NN_3_8::synapse0x1f16490() {
   return (neuron0x2159800()*-0.000503537);
}

double NNfunction-NN_3_8::synapse0x1f164d0() {
   return (neuron0x2159b40()*-0.0288586);
}

double NNfunction-NN_3_8::synapse0x215e850() {
   return (neuron0x2159e80()*-0.0553617);
}

double NNfunction-NN_3_8::synapse0x215e890() {
   return (neuron0x215a3e0()*-0.0257556);
}

double NNfunction-NN_3_8::synapse0x1f16620() {
   return (neuron0x215a600()*-0.0589754);
}

double NNfunction-NN_3_8::synapse0x1f16660() {
   return (neuron0x215a940()*-0.00600664);
}

double NNfunction-NN_3_8::synapse0x1f166a0() {
   return (neuron0x215ac80()*0.0757035);
}

double NNfunction-NN_3_8::synapse0x1f166e0() {
   return (neuron0x215afc0()*0.0429123);
}

double NNfunction-NN_3_8::synapse0x1f16720() {
   return (neuron0x215b300()*-0.011329);
}

double NNfunction-NN_3_8::synapse0x215f450() {
   return (neuron0x215b640()*-3.81081);
}

double NNfunction-NN_3_8::synapse0x215f7d0() {
   return (neuron0x2156a80()*0.153963);
}

double NNfunction-NN_3_8::synapse0x215f810() {
   return (neuron0x2156dc0()*0.0284021);
}

double NNfunction-NN_3_8::synapse0x215f850() {
   return (neuron0x2157100()*-1.62571);
}

double NNfunction-NN_3_8::synapse0x215f890() {
   return (neuron0x2157440()*-0.117591);
}

double NNfunction-NN_3_8::synapse0x215f8d0() {
   return (neuron0x2157780()*-0.0628696);
}

double NNfunction-NN_3_8::synapse0x215f910() {
   return (neuron0x2157ac0()*0.0117247);
}

double NNfunction-NN_3_8::synapse0x215f950() {
   return (neuron0x2157e00()*0.000762872);
}

double NNfunction-NN_3_8::synapse0x215f990() {
   return (neuron0x2158140()*-0.00910068);
}

double NNfunction-NN_3_8::synapse0x215f9d0() {
   return (neuron0x2158480()*-0.0401154);
}

double NNfunction-NN_3_8::synapse0x215fa10() {
   return (neuron0x21587c0()*0.0362918);
}

double NNfunction-NN_3_8::synapse0x215fa50() {
   return (neuron0x2158b00()*0.0385881);
}

double NNfunction-NN_3_8::synapse0x215fa90() {
   return (neuron0x2158e40()*-1.84667);
}

double NNfunction-NN_3_8::synapse0x215fad0() {
   return (neuron0x2159180()*-0.0402773);
}

double NNfunction-NN_3_8::synapse0x215fb10() {
   return (neuron0x21594c0()*0.022636);
}

double NNfunction-NN_3_8::synapse0x215fb50() {
   return (neuron0x2159800()*0.10913);
}

double NNfunction-NN_3_8::synapse0x215fb90() {
   return (neuron0x2159b40()*0.00821187);
}

double NNfunction-NN_3_8::synapse0x215f620() {
   return (neuron0x2159e80()*0.0482249);
}

double NNfunction-NN_3_8::synapse0x215f660() {
   return (neuron0x215a3e0()*0.0181418);
}

double NNfunction-NN_3_8::synapse0x215fce0() {
   return (neuron0x215a600()*0.00291935);
}

double NNfunction-NN_3_8::synapse0x215fd20() {
   return (neuron0x215a940()*-0.0295091);
}

double NNfunction-NN_3_8::synapse0x215fd60() {
   return (neuron0x215ac80()*0.068682);
}

double NNfunction-NN_3_8::synapse0x215fda0() {
   return (neuron0x215afc0()*0.00209135);
}

double NNfunction-NN_3_8::synapse0x215fde0() {
   return (neuron0x215b300()*-0.0507003);
}

double NNfunction-NN_3_8::synapse0x215fe20() {
   return (neuron0x215b640()*0.750063);
}

double NNfunction-NN_3_8::synapse0x21601a0() {
   return (neuron0x2156a80()*-0.102386);
}

double NNfunction-NN_3_8::synapse0x21601e0() {
   return (neuron0x2156dc0()*0.030458);
}

double NNfunction-NN_3_8::synapse0x2160220() {
   return (neuron0x2157100()*0.297955);
}

double NNfunction-NN_3_8::synapse0x2160260() {
   return (neuron0x2157440()*-0.0427148);
}

double NNfunction-NN_3_8::synapse0x21602a0() {
   return (neuron0x2157780()*-0.0091146);
}

double NNfunction-NN_3_8::synapse0x21602e0() {
   return (neuron0x2157ac0()*0.00786289);
}

double NNfunction-NN_3_8::synapse0x2160320() {
   return (neuron0x2157e00()*-0.0134901);
}

double NNfunction-NN_3_8::synapse0x2160360() {
   return (neuron0x2158140()*-0.0156438);
}

double NNfunction-NN_3_8::synapse0x21603a0() {
   return (neuron0x2158480()*0.0183844);
}

double NNfunction-NN_3_8::synapse0x21603e0() {
   return (neuron0x21587c0()*-0.00977314);
}

double NNfunction-NN_3_8::synapse0x2160420() {
   return (neuron0x2158b00()*-0.0513875);
}

double NNfunction-NN_3_8::synapse0x2160460() {
   return (neuron0x2158e40()*-0.10668);
}

double NNfunction-NN_3_8::synapse0x21604a0() {
   return (neuron0x2159180()*-0.135913);
}

double NNfunction-NN_3_8::synapse0x21604e0() {
   return (neuron0x21594c0()*-0.0343116);
}

double NNfunction-NN_3_8::synapse0x2160520() {
   return (neuron0x2159800()*-0.0415624);
}

double NNfunction-NN_3_8::synapse0x2160560() {
   return (neuron0x2159b40()*0.0113736);
}

double NNfunction-NN_3_8::synapse0x215fff0() {
   return (neuron0x2159e80()*-0.0210377);
}

double NNfunction-NN_3_8::synapse0x2160030() {
   return (neuron0x215a3e0()*0.0512565);
}

double NNfunction-NN_3_8::synapse0x21606b0() {
   return (neuron0x215a600()*-0.0415798);
}

double NNfunction-NN_3_8::synapse0x21606f0() {
   return (neuron0x215a940()*-0.00739585);
}

double NNfunction-NN_3_8::synapse0x2160730() {
   return (neuron0x215ac80()*0.00391119);
}

double NNfunction-NN_3_8::synapse0x2160770() {
   return (neuron0x215afc0()*0.00914001);
}

double NNfunction-NN_3_8::synapse0x21607b0() {
   return (neuron0x215b300()*0.0135467);
}

double NNfunction-NN_3_8::synapse0x21607f0() {
   return (neuron0x215b640()*-0.449983);
}

double NNfunction-NN_3_8::synapse0x215a2d0() {
   return (neuron0x2156a80()*0.188218);
}

double NNfunction-NN_3_8::synapse0x215a310() {
   return (neuron0x2156dc0()*-0.0313461);
}

double NNfunction-NN_3_8::synapse0x215a350() {
   return (neuron0x2157100()*-1.40738);
}

double NNfunction-NN_3_8::synapse0x215a390() {
   return (neuron0x2157440()*-0.30306);
}

double NNfunction-NN_3_8::synapse0x2160d80() {
   return (neuron0x2157780()*-0.0786896);
}

double NNfunction-NN_3_8::synapse0x2160dc0() {
   return (neuron0x2157ac0()*0.456445);
}

double NNfunction-NN_3_8::synapse0x2160e00() {
   return (neuron0x2157e00()*-0.147822);
}

double NNfunction-NN_3_8::synapse0x2160e40() {
   return (neuron0x2158140()*0.0720165);
}

double NNfunction-NN_3_8::synapse0x2160e80() {
   return (neuron0x2158480()*-0.447071);
}

double NNfunction-NN_3_8::synapse0x2160ec0() {
   return (neuron0x21587c0()*0.244791);
}

double NNfunction-NN_3_8::synapse0x2160f00() {
   return (neuron0x2158b00()*-0.970703);
}

double NNfunction-NN_3_8::synapse0x2160f40() {
   return (neuron0x2158e40()*-0.425208);
}

double NNfunction-NN_3_8::synapse0x2160f80() {
   return (neuron0x2159180()*-0.697438);
}

double NNfunction-NN_3_8::synapse0x2160fc0() {
   return (neuron0x21594c0()*0.384056);
}

double NNfunction-NN_3_8::synapse0x2161000() {
   return (neuron0x2159800()*0.508344);
}

double NNfunction-NN_3_8::synapse0x2161040() {
   return (neuron0x2159b40()*0.174503);
}

double NNfunction-NN_3_8::synapse0x21609c0() {
   return (neuron0x2159e80()*-0.0965753);
}

double NNfunction-NN_3_8::synapse0x2160a00() {
   return (neuron0x215a3e0()*-0.473731);
}

double NNfunction-NN_3_8::synapse0x2161190() {
   return (neuron0x215a600()*-0.124241);
}

double NNfunction-NN_3_8::synapse0x21611d0() {
   return (neuron0x215a940()*0.659575);
}

double NNfunction-NN_3_8::synapse0x2161210() {
   return (neuron0x215ac80()*0.65809);
}

double NNfunction-NN_3_8::synapse0x2161250() {
   return (neuron0x215afc0()*-0.126724);
}

double NNfunction-NN_3_8::synapse0x2161290() {
   return (neuron0x215b300()*0.126119);
}

double NNfunction-NN_3_8::synapse0x21612d0() {
   return (neuron0x215b640()*-0.609887);
}

double NNfunction-NN_3_8::synapse0x2161650() {
   return (neuron0x2156a80()*-0.0197031);
}

double NNfunction-NN_3_8::synapse0x2161690() {
   return (neuron0x2156dc0()*0.0170248);
}

double NNfunction-NN_3_8::synapse0x21616d0() {
   return (neuron0x2157100()*1.33694);
}

double NNfunction-NN_3_8::synapse0x2161710() {
   return (neuron0x2157440()*0.0206366);
}

double NNfunction-NN_3_8::synapse0x2161750() {
   return (neuron0x2157780()*0.0198099);
}

double NNfunction-NN_3_8::synapse0x2161790() {
   return (neuron0x2157ac0()*0.0471673);
}

double NNfunction-NN_3_8::synapse0x21617d0() {
   return (neuron0x2157e00()*0.0209538);
}

double NNfunction-NN_3_8::synapse0x2161810() {
   return (neuron0x2158140()*-6.34322e-05);
}

double NNfunction-NN_3_8::synapse0x2161850() {
   return (neuron0x2158480()*-0.013028);
}

double NNfunction-NN_3_8::synapse0x2161890() {
   return (neuron0x21587c0()*-0.0217365);
}

double NNfunction-NN_3_8::synapse0x21618d0() {
   return (neuron0x2158b00()*-0.0239956);
}

double NNfunction-NN_3_8::synapse0x2161910() {
   return (neuron0x2158e40()*-5.97842);
}

double NNfunction-NN_3_8::synapse0x2161950() {
   return (neuron0x2159180()*0.10938);
}

double NNfunction-NN_3_8::synapse0x2161990() {
   return (neuron0x21594c0()*0.0129868);
}

double NNfunction-NN_3_8::synapse0x21619d0() {
   return (neuron0x2159800()*0.026338);
}

double NNfunction-NN_3_8::synapse0x2161a10() {
   return (neuron0x2159b40()*0.0268235);
}

double NNfunction-NN_3_8::synapse0x21614a0() {
   return (neuron0x2159e80()*5.94869e-05);
}

double NNfunction-NN_3_8::synapse0x21614e0() {
   return (neuron0x215a3e0()*-0.00686733);
}

double NNfunction-NN_3_8::synapse0x2161b60() {
   return (neuron0x215a600()*-6.04141e-05);
}

double NNfunction-NN_3_8::synapse0x2161ba0() {
   return (neuron0x215a940()*-0.00118171);
}

double NNfunction-NN_3_8::synapse0x2161be0() {
   return (neuron0x215ac80()*-0.00204709);
}

double NNfunction-NN_3_8::synapse0x2161c20() {
   return (neuron0x215afc0()*0.00850353);
}

double NNfunction-NN_3_8::synapse0x2161c60() {
   return (neuron0x215b300()*-0.00898595);
}

double NNfunction-NN_3_8::synapse0x2161ca0() {
   return (neuron0x215b640()*0.229684);
}

double NNfunction-NN_3_8::synapse0x2162020() {
   return (neuron0x2156a80()*0.288485);
}

double NNfunction-NN_3_8::synapse0x2162060() {
   return (neuron0x2156dc0()*-0.0505608);
}

double NNfunction-NN_3_8::synapse0x21620a0() {
   return (neuron0x2157100()*2.50854);
}

double NNfunction-NN_3_8::synapse0x21620e0() {
   return (neuron0x2157440()*0.236094);
}

double NNfunction-NN_3_8::synapse0x2162120() {
   return (neuron0x2157780()*0.222687);
}

double NNfunction-NN_3_8::synapse0x2162160() {
   return (neuron0x2157ac0()*0.471747);
}

double NNfunction-NN_3_8::synapse0x21621a0() {
   return (neuron0x2157e00()*0.271777);
}

double NNfunction-NN_3_8::synapse0x21621e0() {
   return (neuron0x2158140()*0.187186);
}

double NNfunction-NN_3_8::synapse0x2162220() {
   return (neuron0x2158480()*-0.269786);
}

double NNfunction-NN_3_8::synapse0x2162260() {
   return (neuron0x21587c0()*0.0955933);
}

double NNfunction-NN_3_8::synapse0x21622a0() {
   return (neuron0x2158b00()*-0.108108);
}

double NNfunction-NN_3_8::synapse0x21622e0() {
   return (neuron0x2158e40()*-0.793024);
}

double NNfunction-NN_3_8::synapse0x2162320() {
   return (neuron0x2159180()*0.0117987);
}

double NNfunction-NN_3_8::synapse0x2162360() {
   return (neuron0x21594c0()*-0.346749);
}

double NNfunction-NN_3_8::synapse0x21623a0() {
   return (neuron0x2159800()*-0.232543);
}

double NNfunction-NN_3_8::synapse0x21623e0() {
   return (neuron0x2159b40()*-0.322572);
}

double NNfunction-NN_3_8::synapse0x2161e70() {
   return (neuron0x2159e80()*0.163047);
}

double NNfunction-NN_3_8::synapse0x2161eb0() {
   return (neuron0x215a3e0()*-0.601086);
}

double NNfunction-NN_3_8::synapse0x215ec40() {
   return (neuron0x215a600()*-0.56228);
}

double NNfunction-NN_3_8::synapse0x215ec80() {
   return (neuron0x215a940()*-0.0965777);
}

double NNfunction-NN_3_8::synapse0x215ecc0() {
   return (neuron0x215ac80()*-0.301252);
}

double NNfunction-NN_3_8::synapse0x215ed00() {
   return (neuron0x215afc0()*-0.10782);
}

double NNfunction-NN_3_8::synapse0x215ed40() {
   return (neuron0x215b300()*0.388649);
}

double NNfunction-NN_3_8::synapse0x215ed80() {
   return (neuron0x215b640()*-0.380591);
}

double NNfunction-NN_3_8::synapse0x215f100() {
   return (neuron0x2156a80()*0.00588518);
}

double NNfunction-NN_3_8::synapse0x215f140() {
   return (neuron0x2156dc0()*-0.101623);
}

double NNfunction-NN_3_8::synapse0x215f180() {
   return (neuron0x2157100()*-3.24762);
}

double NNfunction-NN_3_8::synapse0x215f1c0() {
   return (neuron0x2157440()*0.0577468);
}

double NNfunction-NN_3_8::synapse0x215f200() {
   return (neuron0x2157780()*0.0109504);
}

double NNfunction-NN_3_8::synapse0x215f240() {
   return (neuron0x2157ac0()*-0.0242048);
}

double NNfunction-NN_3_8::synapse0x215f280() {
   return (neuron0x2157e00()*0.0364484);
}

double NNfunction-NN_3_8::synapse0x215f2c0() {
   return (neuron0x2158140()*0.0033124);
}

double NNfunction-NN_3_8::synapse0x215f300() {
   return (neuron0x2158480()*-0.00779366);
}

double NNfunction-NN_3_8::synapse0x215f340() {
   return (neuron0x21587c0()*0.0109947);
}

double NNfunction-NN_3_8::synapse0x215f380() {
   return (neuron0x2158b00()*0.00436062);
}

double NNfunction-NN_3_8::synapse0x215f3c0() {
   return (neuron0x2158e40()*0.0491182);
}

double NNfunction-NN_3_8::synapse0x215f400() {
   return (neuron0x2159180()*-0.0393983);
}

double NNfunction-NN_3_8::synapse0x2163540() {
   return (neuron0x21594c0()*0.0625354);
}

double NNfunction-NN_3_8::synapse0x2163580() {
   return (neuron0x2159800()*0.00430534);
}

double NNfunction-NN_3_8::synapse0x21635c0() {
   return (neuron0x2159b40()*-0.0196578);
}

double NNfunction-NN_3_8::synapse0x215ef50() {
   return (neuron0x2159e80()*0.0428869);
}

double NNfunction-NN_3_8::synapse0x215ef90() {
   return (neuron0x215a3e0()*0.0155081);
}

double NNfunction-NN_3_8::synapse0x2163710() {
   return (neuron0x215a600()*-0.0225289);
}

double NNfunction-NN_3_8::synapse0x2163750() {
   return (neuron0x215a940()*-0.0175135);
}

double NNfunction-NN_3_8::synapse0x2163790() {
   return (neuron0x215ac80()*0.0399026);
}

double NNfunction-NN_3_8::synapse0x21637d0() {
   return (neuron0x215afc0()*-0.0204677);
}

double NNfunction-NN_3_8::synapse0x2163810() {
   return (neuron0x215b300()*0.034378);
}

double NNfunction-NN_3_8::synapse0x2163850() {
   return (neuron0x215b640()*-4.29134);
}

double NNfunction-NN_3_8::synapse0x2163bd0() {
   return (neuron0x2156a80()*0.00084288);
}

double NNfunction-NN_3_8::synapse0x2163c10() {
   return (neuron0x2156dc0()*15.5791);
}

double NNfunction-NN_3_8::synapse0x2163c50() {
   return (neuron0x2157100()*-1.63902);
}

double NNfunction-NN_3_8::synapse0x2163c90() {
   return (neuron0x2157440()*-0.000532627);
}

double NNfunction-NN_3_8::synapse0x2163cd0() {
   return (neuron0x2157780()*0.00890683);
}

double NNfunction-NN_3_8::synapse0x2163d10() {
   return (neuron0x2157ac0()*0.0359788);
}

double NNfunction-NN_3_8::synapse0x2163d50() {
   return (neuron0x2157e00()*-0.00956789);
}

double NNfunction-NN_3_8::synapse0x2163d90() {
   return (neuron0x2158140()*-0.00369223);
}

double NNfunction-NN_3_8::synapse0x2163dd0() {
   return (neuron0x2158480()*-0.00667121);
}

double NNfunction-NN_3_8::synapse0x2163e10() {
   return (neuron0x21587c0()*0.0191056);
}

double NNfunction-NN_3_8::synapse0x2163e50() {
   return (neuron0x2158b00()*-0.0361885);
}

double NNfunction-NN_3_8::synapse0x2163e90() {
   return (neuron0x2158e40()*0.0270236);
}

double NNfunction-NN_3_8::synapse0x2163ed0() {
   return (neuron0x2159180()*-0.0425894);
}

double NNfunction-NN_3_8::synapse0x2163f10() {
   return (neuron0x21594c0()*-0.00681426);
}

double NNfunction-NN_3_8::synapse0x2163f50() {
   return (neuron0x2159800()*0.00637864);
}

double NNfunction-NN_3_8::synapse0x2163f90() {
   return (neuron0x2159b40()*-0.0364962);
}

double NNfunction-NN_3_8::synapse0x2163a20() {
   return (neuron0x2159e80()*-0.0295062);
}

double NNfunction-NN_3_8::synapse0x2163a60() {
   return (neuron0x215a3e0()*0.00581956);
}

double NNfunction-NN_3_8::synapse0x21640e0() {
   return (neuron0x215a600()*-0.0284689);
}

double NNfunction-NN_3_8::synapse0x2164120() {
   return (neuron0x215a940()*0.0539939);
}

double NNfunction-NN_3_8::synapse0x2164160() {
   return (neuron0x215ac80()*-0.00204463);
}

double NNfunction-NN_3_8::synapse0x21641a0() {
   return (neuron0x215afc0()*0.0091963);
}

double NNfunction-NN_3_8::synapse0x21641e0() {
   return (neuron0x215b300()*0.00808153);
}

double NNfunction-NN_3_8::synapse0x2164220() {
   return (neuron0x215b640()*0.310567);
}

double NNfunction-NN_3_8::synapse0x21645a0() {
   return (neuron0x2156a80()*0.0271668);
}

double NNfunction-NN_3_8::synapse0x21645e0() {
   return (neuron0x2156dc0()*-0.211426);
}

double NNfunction-NN_3_8::synapse0x2164620() {
   return (neuron0x2157100()*1.78932);
}

double NNfunction-NN_3_8::synapse0x2164660() {
   return (neuron0x2157440()*0.015815);
}

double NNfunction-NN_3_8::synapse0x21646a0() {
   return (neuron0x2157780()*0.0166628);
}

double NNfunction-NN_3_8::synapse0x21646e0() {
   return (neuron0x2157ac0()*0.0441356);
}

double NNfunction-NN_3_8::synapse0x2164720() {
   return (neuron0x2157e00()*-0.0093481);
}

double NNfunction-NN_3_8::synapse0x2164760() {
   return (neuron0x2158140()*-0.0225065);
}

double NNfunction-NN_3_8::synapse0x21647a0() {
   return (neuron0x2158480()*-0.0217529);
}

double NNfunction-NN_3_8::synapse0x21647e0() {
   return (neuron0x21587c0()*0.0197407);
}

double NNfunction-NN_3_8::synapse0x2164820() {
   return (neuron0x2158b00()*0.0171147);
}

double NNfunction-NN_3_8::synapse0x2164860() {
   return (neuron0x2158e40()*-0.00586803);
}

double NNfunction-NN_3_8::synapse0x21648a0() {
   return (neuron0x2159180()*-0.0307008);
}

double NNfunction-NN_3_8::synapse0x21648e0() {
   return (neuron0x21594c0()*0.0101996);
}

double NNfunction-NN_3_8::synapse0x2164920() {
   return (neuron0x2159800()*-0.0489254);
}

double NNfunction-NN_3_8::synapse0x2164960() {
   return (neuron0x2159b40()*-0.00736744);
}

double NNfunction-NN_3_8::synapse0x21643f0() {
   return (neuron0x2159e80()*-0.0417863);
}

double NNfunction-NN_3_8::synapse0x2164430() {
   return (neuron0x215a3e0()*0.0275897);
}

double NNfunction-NN_3_8::synapse0x2164ab0() {
   return (neuron0x215a600()*-0.00458379);
}

double NNfunction-NN_3_8::synapse0x2164af0() {
   return (neuron0x215a940()*-0.0131805);
}

double NNfunction-NN_3_8::synapse0x2164b30() {
   return (neuron0x215ac80()*0.036519);
}

double NNfunction-NN_3_8::synapse0x2164b70() {
   return (neuron0x215afc0()*-0.0172082);
}

double NNfunction-NN_3_8::synapse0x2164bb0() {
   return (neuron0x215b300()*-0.016689);
}

double NNfunction-NN_3_8::synapse0x2164bf0() {
   return (neuron0x215b640()*0.407406);
}

double NNfunction-NN_3_8::synapse0x2164f70() {
   return (neuron0x2156a80()*0.0742785);
}

double NNfunction-NN_3_8::synapse0x2164fb0() {
   return (neuron0x2156dc0()*-0.000658702);
}

double NNfunction-NN_3_8::synapse0x2164ff0() {
   return (neuron0x2157100()*1.50685);
}

double NNfunction-NN_3_8::synapse0x2165030() {
   return (neuron0x2157440()*0.121157);
}

double NNfunction-NN_3_8::synapse0x2165070() {
   return (neuron0x2157780()*-0.000491002);
}

double NNfunction-NN_3_8::synapse0x21650b0() {
   return (neuron0x2157ac0()*0.0326193);
}

double NNfunction-NN_3_8::synapse0x21650f0() {
   return (neuron0x2157e00()*0.00723856);
}

double NNfunction-NN_3_8::synapse0x2165130() {
   return (neuron0x2158140()*0.00546221);
}

double NNfunction-NN_3_8::synapse0x2165170() {
   return (neuron0x2158480()*-0.0319757);
}

double NNfunction-NN_3_8::synapse0x21651b0() {
   return (neuron0x21587c0()*0.0424418);
}

double NNfunction-NN_3_8::synapse0x21651f0() {
   return (neuron0x2158b00()*0.00877944);
}

double NNfunction-NN_3_8::synapse0x2165230() {
   return (neuron0x2158e40()*0.117394);
}

double NNfunction-NN_3_8::synapse0x2165270() {
   return (neuron0x2159180()*-0.0222032);
}

double NNfunction-NN_3_8::synapse0x21652b0() {
   return (neuron0x21594c0()*-0.00821256);
}

double NNfunction-NN_3_8::synapse0x21652f0() {
   return (neuron0x2159800()*-0.0192121);
}

double NNfunction-NN_3_8::synapse0x2165330() {
   return (neuron0x2159b40()*-0.00519232);
}

double NNfunction-NN_3_8::synapse0x2164dc0() {
   return (neuron0x2159e80()*-0.0205198);
}

double NNfunction-NN_3_8::synapse0x2164e00() {
   return (neuron0x215a3e0()*0.0281402);
}

double NNfunction-NN_3_8::synapse0x2165480() {
   return (neuron0x215a600()*0.0261207);
}

double NNfunction-NN_3_8::synapse0x21654c0() {
   return (neuron0x215a940()*0.0240293);
}

double NNfunction-NN_3_8::synapse0x2165500() {
   return (neuron0x215ac80()*0.0261483);
}

double NNfunction-NN_3_8::synapse0x2165540() {
   return (neuron0x215afc0()*-0.0029317);
}

double NNfunction-NN_3_8::synapse0x2165580() {
   return (neuron0x215b300()*0.0317087);
}

double NNfunction-NN_3_8::synapse0x21655c0() {
   return (neuron0x215b640()*0.75878);
}

double NNfunction-NN_3_8::synapse0x2165940() {
   return (neuron0x2156a80()*0.0878587);
}

double NNfunction-NN_3_8::synapse0x2156ca0() {
   return (neuron0x2156dc0()*-5.10048);
}

double NNfunction-NN_3_8::synapse0x2156ce0() {
   return (neuron0x2157100()*1.80628);
}

double NNfunction-NN_3_8::synapse0x2156fe0() {
   return (neuron0x2157440()*-0.0186486);
}

double NNfunction-NN_3_8::synapse0x2157020() {
   return (neuron0x2157780()*-0.028704);
}

double NNfunction-NN_3_8::synapse0x2157320() {
   return (neuron0x2157ac0()*-0.0504452);
}

double NNfunction-NN_3_8::synapse0x2157360() {
   return (neuron0x2157e00()*0.0261995);
}

double NNfunction-NN_3_8::synapse0x2157660() {
   return (neuron0x2158140()*0.0269675);
}

double NNfunction-NN_3_8::synapse0x21576a0() {
   return (neuron0x2158480()*0.01738);
}

double NNfunction-NN_3_8::synapse0x21579a0() {
   return (neuron0x21587c0()*0.0177528);
}

double NNfunction-NN_3_8::synapse0x21579e0() {
   return (neuron0x2158b00()*-0.013599);
}

double NNfunction-NN_3_8::synapse0x2157ce0() {
   return (neuron0x2158e40()*-0.234907);
}

double NNfunction-NN_3_8::synapse0x2157d20() {
   return (neuron0x2159180()*0.0876536);
}

double NNfunction-NN_3_8::synapse0x2158020() {
   return (neuron0x21594c0()*0.0101173);
}

double NNfunction-NN_3_8::synapse0x2158060() {
   return (neuron0x2159800()*0.00565433);
}

double NNfunction-NN_3_8::synapse0x2158360() {
   return (neuron0x2159b40()*0.0318219);
}

double NNfunction-NN_3_8::synapse0x21583a0() {
   return (neuron0x2159e80()*-0.0180683);
}

double NNfunction-NN_3_8::synapse0x21586a0() {
   return (neuron0x215a3e0()*-0.00286056);
}

double NNfunction-NN_3_8::synapse0x21586e0() {
   return (neuron0x215a600()*-0.0315574);
}

double NNfunction-NN_3_8::synapse0x21589e0() {
   return (neuron0x215a940()*-0.00410638);
}

double NNfunction-NN_3_8::synapse0x2158a20() {
   return (neuron0x215ac80()*0.136633);
}

double NNfunction-NN_3_8::synapse0x2158d20() {
   return (neuron0x215afc0()*-0.0665381);
}

double NNfunction-NN_3_8::synapse0x2158d60() {
   return (neuron0x215b300()*0.0902626);
}

double NNfunction-NN_3_8::synapse0x2159060() {
   return (neuron0x215b640()*-2.00438);
}

double NNfunction-NN_3_8::synapse0x21590a0() {
   return (neuron0x2156a80()*-0.00900625);
}

double NNfunction-NN_3_8::synapse0x2159d60() {
   return (neuron0x2156dc0()*0.104348);
}

double NNfunction-NN_3_8::synapse0x2159da0() {
   return (neuron0x2157100()*3.72557);
}

double NNfunction-NN_3_8::synapse0x2165790() {
   return (neuron0x2157440()*-0.0345265);
}

double NNfunction-NN_3_8::synapse0x21657d0() {
   return (neuron0x2157780()*0.0262327);
}

double NNfunction-NN_3_8::synapse0x215a0a0() {
   return (neuron0x2157ac0()*0.0653259);
}

double NNfunction-NN_3_8::synapse0x215a0e0() {
   return (neuron0x2157e00()*0.0468057);
}

double NNfunction-NN_3_8::synapse0x1f08020() {
   return (neuron0x2158140()*0.0198453);
}

double NNfunction-NN_3_8::synapse0x1f08060() {
   return (neuron0x2158480()*0.0108668);
}

double NNfunction-NN_3_8::synapse0x215a820() {
   return (neuron0x21587c0()*-0.00537339);
}

double NNfunction-NN_3_8::synapse0x215a860() {
   return (neuron0x2158b00()*-0.0576408);
}

double NNfunction-NN_3_8::synapse0x215ab60() {
   return (neuron0x2158e40()*-4.80964);
}

double NNfunction-NN_3_8::synapse0x215aba0() {
   return (neuron0x2159180()*-0.155387);
}

double NNfunction-NN_3_8::synapse0x215aea0() {
   return (neuron0x21594c0()*0.0556051);
}

double NNfunction-NN_3_8::synapse0x215aee0() {
   return (neuron0x2159800()*0.0667885);
}

double NNfunction-NN_3_8::synapse0x215b1e0() {
   return (neuron0x2159b40()*0.0463322);
}

double NNfunction-NN_3_8::synapse0x215b220() {
   return (neuron0x2159e80()*0.00229925);
}

double NNfunction-NN_3_8::synapse0x215b520() {
   return (neuron0x215a3e0()*0.0041922);
}

double NNfunction-NN_3_8::synapse0x215b560() {
   return (neuron0x215a600()*-0.0184642);
}

double NNfunction-NN_3_8::synapse0x215b860() {
   return (neuron0x215a940()*0.00646652);
}

double NNfunction-NN_3_8::synapse0x215b8a0() {
   return (neuron0x215ac80()*-0.0152472);
}

double NNfunction-NN_3_8::synapse0x21593a0() {
   return (neuron0x215afc0()*-0.0155916);
}

double NNfunction-NN_3_8::synapse0x21593e0() {
   return (neuron0x215b300()*0.00188873);
}

double NNfunction-NN_3_8::synapse0x21676b0() {
   return (neuron0x215b640()*1.47032);
}

double NNfunction-NN_3_8::synapse0x2167a30() {
   return (neuron0x2156a80()*-0.173165);
}

double NNfunction-NN_3_8::synapse0x2167a70() {
   return (neuron0x2156dc0()*-0.095117);
}

double NNfunction-NN_3_8::synapse0x2167ab0() {
   return (neuron0x2157100()*0.472989);
}

double NNfunction-NN_3_8::synapse0x2167af0() {
   return (neuron0x2157440()*-0.15214);
}

double NNfunction-NN_3_8::synapse0x2167b30() {
   return (neuron0x2157780()*0.0776808);
}

double NNfunction-NN_3_8::synapse0x2167b70() {
   return (neuron0x2157ac0()*0.0482761);
}

double NNfunction-NN_3_8::synapse0x2167bb0() {
   return (neuron0x2157e00()*0.032445);
}

double NNfunction-NN_3_8::synapse0x2167bf0() {
   return (neuron0x2158140()*0.000565187);
}

double NNfunction-NN_3_8::synapse0x2167c30() {
   return (neuron0x2158480()*0.0068718);
}

double NNfunction-NN_3_8::synapse0x2167c70() {
   return (neuron0x21587c0()*0.00828561);
}

double NNfunction-NN_3_8::synapse0x2167cb0() {
   return (neuron0x2158b00()*-0.0790742);
}

double NNfunction-NN_3_8::synapse0x2167cf0() {
   return (neuron0x2158e40()*2.76799);
}

double NNfunction-NN_3_8::synapse0x2167d30() {
   return (neuron0x2159180()*-0.0263129);
}

double NNfunction-NN_3_8::synapse0x2167d70() {
   return (neuron0x21594c0()*-0.0559677);
}

double NNfunction-NN_3_8::synapse0x2167db0() {
   return (neuron0x2159800()*-0.0286308);
}

double NNfunction-NN_3_8::synapse0x2167df0() {
   return (neuron0x2159b40()*0.0476589);
}

double NNfunction-NN_3_8::synapse0x2167880() {
   return (neuron0x2159e80()*-0.00172534);
}

double NNfunction-NN_3_8::synapse0x21678c0() {
   return (neuron0x215a3e0()*-0.0489954);
}

double NNfunction-NN_3_8::synapse0x2167f40() {
   return (neuron0x215a600()*-0.0761019);
}

double NNfunction-NN_3_8::synapse0x2167f80() {
   return (neuron0x215a940()*-0.00673164);
}

double NNfunction-NN_3_8::synapse0x2167fc0() {
   return (neuron0x215ac80()*-0.0666112);
}

double NNfunction-NN_3_8::synapse0x2168000() {
   return (neuron0x215afc0()*0.0269334);
}

double NNfunction-NN_3_8::synapse0x2168040() {
   return (neuron0x215b300()*0.0200931);
}

double NNfunction-NN_3_8::synapse0x2168080() {
   return (neuron0x215b640()*1.43683);
}

double NNfunction-NN_3_8::synapse0x2168400() {
   return (neuron0x2156a80()*0.518642);
}

double NNfunction-NN_3_8::synapse0x2168440() {
   return (neuron0x2156dc0()*0.0124025);
}

double NNfunction-NN_3_8::synapse0x2168480() {
   return (neuron0x2157100()*0.0489092);
}

double NNfunction-NN_3_8::synapse0x21684c0() {
   return (neuron0x2157440()*-0.11232);
}

double NNfunction-NN_3_8::synapse0x2168500() {
   return (neuron0x2157780()*-0.0335454);
}

double NNfunction-NN_3_8::synapse0x2168540() {
   return (neuron0x2157ac0()*-0.179172);
}

double NNfunction-NN_3_8::synapse0x2168580() {
   return (neuron0x2157e00()*-0.0573203);
}

double NNfunction-NN_3_8::synapse0x21685c0() {
   return (neuron0x2158140()*0.0954202);
}

double NNfunction-NN_3_8::synapse0x2168600() {
   return (neuron0x2158480()*-0.0104041);
}

double NNfunction-NN_3_8::synapse0x2168640() {
   return (neuron0x21587c0()*0.0064798);
}

double NNfunction-NN_3_8::synapse0x2168680() {
   return (neuron0x2158b00()*-0.0622701);
}

double NNfunction-NN_3_8::synapse0x21686c0() {
   return (neuron0x2158e40()*0.0448938);
}

double NNfunction-NN_3_8::synapse0x2168700() {
   return (neuron0x2159180()*-0.178737);
}

double NNfunction-NN_3_8::synapse0x2168740() {
   return (neuron0x21594c0()*-0.0260213);
}

double NNfunction-NN_3_8::synapse0x2168780() {
   return (neuron0x2159800()*-0.0229397);
}

double NNfunction-NN_3_8::synapse0x21687c0() {
   return (neuron0x2159b40()*-0.119515);
}

double NNfunction-NN_3_8::synapse0x2168250() {
   return (neuron0x2159e80()*-0.0562667);
}

double NNfunction-NN_3_8::synapse0x2168290() {
   return (neuron0x215a3e0()*-0.175641);
}

double NNfunction-NN_3_8::synapse0x2168910() {
   return (neuron0x215a600()*0.0173275);
}

double NNfunction-NN_3_8::synapse0x2168950() {
   return (neuron0x215a940()*0.0288077);
}

double NNfunction-NN_3_8::synapse0x2168990() {
   return (neuron0x215ac80()*-0.136059);
}

double NNfunction-NN_3_8::synapse0x21689d0() {
   return (neuron0x215afc0()*-0.00551139);
}

double NNfunction-NN_3_8::synapse0x2168a10() {
   return (neuron0x215b300()*0.00935246);
}

double NNfunction-NN_3_8::synapse0x2168a50() {
   return (neuron0x215b640()*-0.109729);
}

double NNfunction-NN_3_8::synapse0x2168dd0() {
   return (neuron0x2156a80()*-0.00360616);
}

double NNfunction-NN_3_8::synapse0x2168e10() {
   return (neuron0x2156dc0()*-0.288726);
}

double NNfunction-NN_3_8::synapse0x2168e50() {
   return (neuron0x2157100()*0.374982);
}

double NNfunction-NN_3_8::synapse0x2168e90() {
   return (neuron0x2157440()*-0.0703371);
}

double NNfunction-NN_3_8::synapse0x2168ed0() {
   return (neuron0x2157780()*0.129984);
}

double NNfunction-NN_3_8::synapse0x2168f10() {
   return (neuron0x2157ac0()*0.0507855);
}

double NNfunction-NN_3_8::synapse0x2168f50() {
   return (neuron0x2157e00()*-0.0107014);
}

double NNfunction-NN_3_8::synapse0x2168f90() {
   return (neuron0x2158140()*0.0456421);
}

double NNfunction-NN_3_8::synapse0x2168fd0() {
   return (neuron0x2158480()*-0.0746582);
}

double NNfunction-NN_3_8::synapse0x2169010() {
   return (neuron0x21587c0()*0.0700557);
}

double NNfunction-NN_3_8::synapse0x2169050() {
   return (neuron0x2158b00()*-0.0999811);
}

double NNfunction-NN_3_8::synapse0x2169090() {
   return (neuron0x2158e40()*-0.254225);
}

double NNfunction-NN_3_8::synapse0x21690d0() {
   return (neuron0x2159180()*-0.00391601);
}

double NNfunction-NN_3_8::synapse0x2169110() {
   return (neuron0x21594c0()*0.0616842);
}

double NNfunction-NN_3_8::synapse0x2169150() {
   return (neuron0x2159800()*0.0972977);
}

double NNfunction-NN_3_8::synapse0x2169190() {
   return (neuron0x2159b40()*0.202605);
}

double NNfunction-NN_3_8::synapse0x2168c20() {
   return (neuron0x2159e80()*0.129323);
}

double NNfunction-NN_3_8::synapse0x2168c60() {
   return (neuron0x215a3e0()*-0.0123423);
}

double NNfunction-NN_3_8::synapse0x21692e0() {
   return (neuron0x215a600()*0.0868883);
}

double NNfunction-NN_3_8::synapse0x2169320() {
   return (neuron0x215a940()*0.0809948);
}

double NNfunction-NN_3_8::synapse0x2169360() {
   return (neuron0x215ac80()*-0.0166653);
}

double NNfunction-NN_3_8::synapse0x21693a0() {
   return (neuron0x215afc0()*0.0418234);
}

double NNfunction-NN_3_8::synapse0x21693e0() {
   return (neuron0x215b300()*0.0994029);
}

double NNfunction-NN_3_8::synapse0x2169420() {
   return (neuron0x215b640()*-0.330798);
}

double NNfunction-NN_3_8::synapse0x21697a0() {
   return (neuron0x2156a80()*0.0385752);
}

double NNfunction-NN_3_8::synapse0x21697e0() {
   return (neuron0x2156dc0()*-0.0943934);
}

double NNfunction-NN_3_8::synapse0x2169820() {
   return (neuron0x2157100()*-3.29756);
}

double NNfunction-NN_3_8::synapse0x2169860() {
   return (neuron0x2157440()*0.0640352);
}

double NNfunction-NN_3_8::synapse0x21698a0() {
   return (neuron0x2157780()*0.0332914);
}

double NNfunction-NN_3_8::synapse0x21698e0() {
   return (neuron0x2157ac0()*-0.0236055);
}

double NNfunction-NN_3_8::synapse0x2169920() {
   return (neuron0x2157e00()*0.0325886);
}

double NNfunction-NN_3_8::synapse0x2169960() {
   return (neuron0x2158140()*0.00619234);
}

double NNfunction-NN_3_8::synapse0x21699a0() {
   return (neuron0x2158480()*-0.0126627);
}

double NNfunction-NN_3_8::synapse0x21699e0() {
   return (neuron0x21587c0()*-0.00116071);
}

double NNfunction-NN_3_8::synapse0x2169a20() {
   return (neuron0x2158b00()*-0.0152562);
}

double NNfunction-NN_3_8::synapse0x2169a60() {
   return (neuron0x2158e40()*-0.0714778);
}

double NNfunction-NN_3_8::synapse0x2169aa0() {
   return (neuron0x2159180()*-0.0488981);
}

double NNfunction-NN_3_8::synapse0x2169ae0() {
   return (neuron0x21594c0()*0.0785895);
}

double NNfunction-NN_3_8::synapse0x2169b20() {
   return (neuron0x2159800()*-0.0118804);
}

double NNfunction-NN_3_8::synapse0x2169b60() {
   return (neuron0x2159b40()*-0.0185992);
}

double NNfunction-NN_3_8::synapse0x21695f0() {
   return (neuron0x2159e80()*0.0306888);
}

double NNfunction-NN_3_8::synapse0x2169630() {
   return (neuron0x215a3e0()*0.019523);
}

double NNfunction-NN_3_8::synapse0x2169cb0() {
   return (neuron0x215a600()*-0.0479282);
}

double NNfunction-NN_3_8::synapse0x2169cf0() {
   return (neuron0x215a940()*-0.0242428);
}

double NNfunction-NN_3_8::synapse0x2169d30() {
   return (neuron0x215ac80()*0.04479);
}

double NNfunction-NN_3_8::synapse0x2169d70() {
   return (neuron0x215afc0()*-0.022708);
}

double NNfunction-NN_3_8::synapse0x2169db0() {
   return (neuron0x215b300()*0.0338633);
}

double NNfunction-NN_3_8::synapse0x2169df0() {
   return (neuron0x215b640()*-4.36191);
}

double NNfunction-NN_3_8::synapse0x216a170() {
   return (neuron0x2156a80()*-0.0652482);
}

double NNfunction-NN_3_8::synapse0x216a1b0() {
   return (neuron0x2156dc0()*0.0328515);
}

double NNfunction-NN_3_8::synapse0x216a1f0() {
   return (neuron0x2157100()*2.89412);
}

double NNfunction-NN_3_8::synapse0x216a230() {
   return (neuron0x2157440()*-0.143186);
}

double NNfunction-NN_3_8::synapse0x216a270() {
   return (neuron0x2157780()*0.00516705);
}

double NNfunction-NN_3_8::synapse0x216a2b0() {
   return (neuron0x2157ac0()*0.0476004);
}

double NNfunction-NN_3_8::synapse0x216a2f0() {
   return (neuron0x2157e00()*0.0451036);
}

double NNfunction-NN_3_8::synapse0x216a330() {
   return (neuron0x2158140()*0.105451);
}

double NNfunction-NN_3_8::synapse0x216a370() {
   return (neuron0x2158480()*-0.07485);
}

double NNfunction-NN_3_8::synapse0x2162530() {
   return (neuron0x21587c0()*-0.105536);
}

double NNfunction-NN_3_8::synapse0x2162570() {
   return (neuron0x2158b00()*-0.0382294);
}

double NNfunction-NN_3_8::synapse0x21625b0() {
   return (neuron0x2158e40()*-2.24473);
}

double NNfunction-NN_3_8::synapse0x21625f0() {
   return (neuron0x2159180()*-2.06653);
}

double NNfunction-NN_3_8::synapse0x2162630() {
   return (neuron0x21594c0()*0.0500843);
}

double NNfunction-NN_3_8::synapse0x2162670() {
   return (neuron0x2159800()*-1.0262);
}

double NNfunction-NN_3_8::synapse0x21626b0() {
   return (neuron0x2159b40()*-1.05252);
}

double NNfunction-NN_3_8::synapse0x2169fc0() {
   return (neuron0x2159e80()*-0.0363383);
}

double NNfunction-NN_3_8::synapse0x216a000() {
   return (neuron0x215a3e0()*-1.2258);
}

double NNfunction-NN_3_8::synapse0x2162800() {
   return (neuron0x215a600()*-1.2422);
}

double NNfunction-NN_3_8::synapse0x2162840() {
   return (neuron0x215a940()*-0.0319261);
}

double NNfunction-NN_3_8::synapse0x2162880() {
   return (neuron0x215ac80()*-0.00104842);
}

double NNfunction-NN_3_8::synapse0x21628c0() {
   return (neuron0x215afc0()*-0.0359665);
}

double NNfunction-NN_3_8::synapse0x2162900() {
   return (neuron0x215b300()*-0.00669083);
}

double NNfunction-NN_3_8::synapse0x2162940() {
   return (neuron0x215b640()*-0.0813157);
}

double NNfunction-NN_3_8::synapse0x2162cc0() {
   return (neuron0x2156a80()*0.00898933);
}

double NNfunction-NN_3_8::synapse0x2162d00() {
   return (neuron0x2156dc0()*-20.1784);
}

double NNfunction-NN_3_8::synapse0x2162d40() {
   return (neuron0x2157100()*-2.21316);
}

double NNfunction-NN_3_8::synapse0x2162d80() {
   return (neuron0x2157440()*0.0274093);
}

double NNfunction-NN_3_8::synapse0x2162dc0() {
   return (neuron0x2157780()*-0.0290194);
}

double NNfunction-NN_3_8::synapse0x2162e00() {
   return (neuron0x2157ac0()*-0.0463718);
}

double NNfunction-NN_3_8::synapse0x2162e40() {
   return (neuron0x2157e00()*-0.0358032);
}

double NNfunction-NN_3_8::synapse0x2162e80() {
   return (neuron0x2158140()*0.00881237);
}

double NNfunction-NN_3_8::synapse0x2162ec0() {
   return (neuron0x2158480()*0.00985054);
}

double NNfunction-NN_3_8::synapse0x2162f00() {
   return (neuron0x21587c0()*0.000742676);
}

double NNfunction-NN_3_8::synapse0x2162f40() {
   return (neuron0x2158b00()*0.0297121);
}

double NNfunction-NN_3_8::synapse0x2162f80() {
   return (neuron0x2158e40()*-0.00131338);
}

double NNfunction-NN_3_8::synapse0x2162fc0() {
   return (neuron0x2159180()*0.0425717);
}

double NNfunction-NN_3_8::synapse0x2163000() {
   return (neuron0x21594c0()*-0.00539659);
}

double NNfunction-NN_3_8::synapse0x2163040() {
   return (neuron0x2159800()*0.030228);
}

double NNfunction-NN_3_8::synapse0x2163080() {
   return (neuron0x2159b40()*0.0240866);
}

double NNfunction-NN_3_8::synapse0x2162b10() {
   return (neuron0x2159e80()*0.0649916);
}

double NNfunction-NN_3_8::synapse0x2162b50() {
   return (neuron0x215a3e0()*0.00128406);
}

double NNfunction-NN_3_8::synapse0x21631d0() {
   return (neuron0x215a600()*-0.0246889);
}

double NNfunction-NN_3_8::synapse0x2163210() {
   return (neuron0x215a940()*-0.0456519);
}

double NNfunction-NN_3_8::synapse0x2163250() {
   return (neuron0x215ac80()*0.0282022);
}

double NNfunction-NN_3_8::synapse0x2163290() {
   return (neuron0x215afc0()*0.000860484);
}

double NNfunction-NN_3_8::synapse0x21632d0() {
   return (neuron0x215b300()*-0.00107091);
}

double NNfunction-NN_3_8::synapse0x2163310() {
   return (neuron0x215b640()*-0.1839);
}

double NNfunction-NN_3_8::synapse0x21634e0() {
   return (neuron0x2156a80()*0.0630678);
}

double NNfunction-NN_3_8::synapse0x216c570() {
   return (neuron0x2156dc0()*0.753107);
}

double NNfunction-NN_3_8::synapse0x216c5b0() {
   return (neuron0x2157100()*0.378139);
}

double NNfunction-NN_3_8::synapse0x216c5f0() {
   return (neuron0x2157440()*0.0329301);
}

double NNfunction-NN_3_8::synapse0x216c630() {
   return (neuron0x2157780()*-0.0322567);
}

double NNfunction-NN_3_8::synapse0x216c670() {
   return (neuron0x2157ac0()*0.0333239);
}

double NNfunction-NN_3_8::synapse0x216c6b0() {
   return (neuron0x2157e00()*0.0598869);
}

double NNfunction-NN_3_8::synapse0x216c6f0() {
   return (neuron0x2158140()*-0.0243613);
}

double NNfunction-NN_3_8::synapse0x216c730() {
   return (neuron0x2158480()*0.00786894);
}

double NNfunction-NN_3_8::synapse0x216c770() {
   return (neuron0x21587c0()*0.0197654);
}

double NNfunction-NN_3_8::synapse0x216c7b0() {
   return (neuron0x2158b00()*0.025646);
}

double NNfunction-NN_3_8::synapse0x216c7f0() {
   return (neuron0x2158e40()*0.0561912);
}

double NNfunction-NN_3_8::synapse0x216c830() {
   return (neuron0x2159180()*0.0338208);
}

double NNfunction-NN_3_8::synapse0x216c870() {
   return (neuron0x21594c0()*-0.0242521);
}

double NNfunction-NN_3_8::synapse0x216c8b0() {
   return (neuron0x2159800()*0.00365161);
}

double NNfunction-NN_3_8::synapse0x216c8f0() {
   return (neuron0x2159b40()*-0.0189682);
}

double NNfunction-NN_3_8::synapse0x216c3c0() {
   return (neuron0x2159e80()*-0.0234588);
}

double NNfunction-NN_3_8::synapse0x216c400() {
   return (neuron0x215a3e0()*-0.0488071);
}

double NNfunction-NN_3_8::synapse0x216ca40() {
   return (neuron0x215a600()*0.00896887);
}

double NNfunction-NN_3_8::synapse0x216ca80() {
   return (neuron0x215a940()*0.000508881);
}

double NNfunction-NN_3_8::synapse0x216cac0() {
   return (neuron0x215ac80()*-0.033358);
}

double NNfunction-NN_3_8::synapse0x216cb00() {
   return (neuron0x215afc0()*-0.0497194);
}

double NNfunction-NN_3_8::synapse0x216cb40() {
   return (neuron0x215b300()*-0.0604293);
}

double NNfunction-NN_3_8::synapse0x216cb80() {
   return (neuron0x215b640()*-0.224245);
}

double NNfunction-NN_3_8::synapse0x216cf00() {
   return (neuron0x2156a80()*-0.000970778);
}

double NNfunction-NN_3_8::synapse0x216cf40() {
   return (neuron0x2156dc0()*-3.70348);
}

double NNfunction-NN_3_8::synapse0x216cf80() {
   return (neuron0x2157100()*-0.46466);
}

double NNfunction-NN_3_8::synapse0x216cfc0() {
   return (neuron0x2157440()*-0.0136397);
}

double NNfunction-NN_3_8::synapse0x216d000() {
   return (neuron0x2157780()*-0.0177397);
}

double NNfunction-NN_3_8::synapse0x216d040() {
   return (neuron0x2157ac0()*-0.0519615);
}

double NNfunction-NN_3_8::synapse0x216d080() {
   return (neuron0x2157e00()*-0.0225944);
}

double NNfunction-NN_3_8::synapse0x216d0c0() {
   return (neuron0x2158140()*0.00430317);
}

double NNfunction-NN_3_8::synapse0x216d100() {
   return (neuron0x2158480()*-0.00109409);
}

double NNfunction-NN_3_8::synapse0x216d140() {
   return (neuron0x21587c0()*-0.00751432);
}

double NNfunction-NN_3_8::synapse0x216d180() {
   return (neuron0x2158b00()*-0.0254307);
}

double NNfunction-NN_3_8::synapse0x216d1c0() {
   return (neuron0x2158e40()*0.0402728);
}

double NNfunction-NN_3_8::synapse0x216d200() {
   return (neuron0x2159180()*0.00424921);
}

double NNfunction-NN_3_8::synapse0x216d240() {
   return (neuron0x21594c0()*0.0189904);
}

double NNfunction-NN_3_8::synapse0x216d280() {
   return (neuron0x2159800()*-0.0064917);
}

double NNfunction-NN_3_8::synapse0x216d2c0() {
   return (neuron0x2159b40()*0.0214479);
}

double NNfunction-NN_3_8::synapse0x216cd50() {
   return (neuron0x2159e80()*0.0186475);
}

double NNfunction-NN_3_8::synapse0x216cd90() {
   return (neuron0x215a3e0()*0.0211612);
}

double NNfunction-NN_3_8::synapse0x216d410() {
   return (neuron0x215a600()*-0.0215249);
}

double NNfunction-NN_3_8::synapse0x216d450() {
   return (neuron0x215a940()*0.0202656);
}

double NNfunction-NN_3_8::synapse0x216d490() {
   return (neuron0x215ac80()*0.0188207);
}

double NNfunction-NN_3_8::synapse0x216d4d0() {
   return (neuron0x215afc0()*0.00787666);
}

double NNfunction-NN_3_8::synapse0x216d510() {
   return (neuron0x215b300()*0.0346495);
}

double NNfunction-NN_3_8::synapse0x216d550() {
   return (neuron0x215b640()*-0.324215);
}

double NNfunction-NN_3_8::synapse0x216d8d0() {
   return (neuron0x2156a80()*-0.109273);
}

double NNfunction-NN_3_8::synapse0x216d910() {
   return (neuron0x2156dc0()*-1.48684);
}

double NNfunction-NN_3_8::synapse0x216d950() {
   return (neuron0x2157100()*1.12025);
}

double NNfunction-NN_3_8::synapse0x216d990() {
   return (neuron0x2157440()*-0.00472598);
}

double NNfunction-NN_3_8::synapse0x216d9d0() {
   return (neuron0x2157780()*0.0437242);
}

double NNfunction-NN_3_8::synapse0x216da10() {
   return (neuron0x2157ac0()*0.00318768);
}

double NNfunction-NN_3_8::synapse0x216da50() {
   return (neuron0x2157e00()*-0.0101582);
}

double NNfunction-NN_3_8::synapse0x216da90() {
   return (neuron0x2158140()*0.0146899);
}

double NNfunction-NN_3_8::synapse0x216dad0() {
   return (neuron0x2158480()*-0.0312662);
}

double NNfunction-NN_3_8::synapse0x216db10() {
   return (neuron0x21587c0()*0.00785644);
}

double NNfunction-NN_3_8::synapse0x216db50() {
   return (neuron0x2158b00()*-0.0172167);
}

double NNfunction-NN_3_8::synapse0x216db90() {
   return (neuron0x2158e40()*-0.26726);
}

double NNfunction-NN_3_8::synapse0x216dbd0() {
   return (neuron0x2159180()*-0.0649614);
}

double NNfunction-NN_3_8::synapse0x216dc10() {
   return (neuron0x21594c0()*0.0707983);
}

double NNfunction-NN_3_8::synapse0x216dc50() {
   return (neuron0x2159800()*0.028769);
}

double NNfunction-NN_3_8::synapse0x216dc90() {
   return (neuron0x2159b40()*-0.0329442);
}

double NNfunction-NN_3_8::synapse0x216d720() {
   return (neuron0x2159e80()*0.0091267);
}

double NNfunction-NN_3_8::synapse0x216d760() {
   return (neuron0x215a3e0()*-0.0493618);
}

double NNfunction-NN_3_8::synapse0x216dde0() {
   return (neuron0x215a600()*-0.0489814);
}

double NNfunction-NN_3_8::synapse0x216de20() {
   return (neuron0x215a940()*0.0375641);
}

double NNfunction-NN_3_8::synapse0x216de60() {
   return (neuron0x215ac80()*-0.061553);
}

double NNfunction-NN_3_8::synapse0x216dea0() {
   return (neuron0x215afc0()*0.0789807);
}

double NNfunction-NN_3_8::synapse0x216dee0() {
   return (neuron0x215b300()*0.0214562);
}

double NNfunction-NN_3_8::synapse0x216df20() {
   return (neuron0x215b640()*1.96516);
}

double NNfunction-NN_3_8::synapse0x216e2a0() {
   return (neuron0x2156a80()*0.349661);
}

double NNfunction-NN_3_8::synapse0x216e2e0() {
   return (neuron0x2156dc0()*0.108519);
}

double NNfunction-NN_3_8::synapse0x216e320() {
   return (neuron0x2157100()*-1.06352);
}

double NNfunction-NN_3_8::synapse0x216e360() {
   return (neuron0x2157440()*0.952195);
}

double NNfunction-NN_3_8::synapse0x216e3a0() {
   return (neuron0x2157780()*0.513661);
}

double NNfunction-NN_3_8::synapse0x216e3e0() {
   return (neuron0x2157ac0()*-0.399985);
}

double NNfunction-NN_3_8::synapse0x216e420() {
   return (neuron0x2157e00()*-0.552724);
}

double NNfunction-NN_3_8::synapse0x216e460() {
   return (neuron0x2158140()*-0.389029);
}

double NNfunction-NN_3_8::synapse0x216e4a0() {
   return (neuron0x2158480()*-0.054129);
}

double NNfunction-NN_3_8::synapse0x216e4e0() {
   return (neuron0x21587c0()*-0.146015);
}

double NNfunction-NN_3_8::synapse0x216e520() {
   return (neuron0x2158b00()*-0.515199);
}

double NNfunction-NN_3_8::synapse0x216e560() {
   return (neuron0x2158e40()*0.292111);
}

double NNfunction-NN_3_8::synapse0x216e5a0() {
   return (neuron0x2159180()*0.0716869);
}

double NNfunction-NN_3_8::synapse0x216e5e0() {
   return (neuron0x21594c0()*-0.142804);
}

double NNfunction-NN_3_8::synapse0x216e620() {
   return (neuron0x2159800()*0.0149404);
}

double NNfunction-NN_3_8::synapse0x216e660() {
   return (neuron0x2159b40()*-0.276674);
}

double NNfunction-NN_3_8::synapse0x216e0f0() {
   return (neuron0x2159e80()*-0.461171);
}

double NNfunction-NN_3_8::synapse0x216e130() {
   return (neuron0x215a3e0()*-0.254179);
}

double NNfunction-NN_3_8::synapse0x216e7b0() {
   return (neuron0x215a600()*-0.0818247);
}

double NNfunction-NN_3_8::synapse0x216e7f0() {
   return (neuron0x215a940()*0.181749);
}

double NNfunction-NN_3_8::synapse0x216e830() {
   return (neuron0x215ac80()*-0.320099);
}

double NNfunction-NN_3_8::synapse0x216e870() {
   return (neuron0x215afc0()*-0.246179);
}

double NNfunction-NN_3_8::synapse0x216e8b0() {
   return (neuron0x215b300()*-0.338692);
}

double NNfunction-NN_3_8::synapse0x216e8f0() {
   return (neuron0x215b640()*0.15998);
}

double NNfunction-NN_3_8::synapse0x216ec70() {
   return (neuron0x2156a80()*0.0217979);
}

double NNfunction-NN_3_8::synapse0x216ecb0() {
   return (neuron0x2156dc0()*0.037867);
}

double NNfunction-NN_3_8::synapse0x216ecf0() {
   return (neuron0x2157100()*2.14872);
}

double NNfunction-NN_3_8::synapse0x216ed30() {
   return (neuron0x2157440()*-3.461);
}

double NNfunction-NN_3_8::synapse0x216ed70() {
   return (neuron0x2157780()*-0.00253622);
}

double NNfunction-NN_3_8::synapse0x216edb0() {
   return (neuron0x2157ac0()*0.0632394);
}

double NNfunction-NN_3_8::synapse0x216edf0() {
   return (neuron0x2157e00()*0.0320874);
}

double NNfunction-NN_3_8::synapse0x216ee30() {
   return (neuron0x2158140()*0.0372325);
}

double NNfunction-NN_3_8::synapse0x216ee70() {
   return (neuron0x2158480()*0.0564546);
}

double NNfunction-NN_3_8::synapse0x216eeb0() {
   return (neuron0x21587c0()*0.100135);
}

double NNfunction-NN_3_8::synapse0x216eef0() {
   return (neuron0x2158b00()*-0.135508);
}

double NNfunction-NN_3_8::synapse0x216ef30() {
   return (neuron0x2158e40()*0.268562);
}

double NNfunction-NN_3_8::synapse0x216ef70() {
   return (neuron0x2159180()*-0.354942);
}

double NNfunction-NN_3_8::synapse0x216efb0() {
   return (neuron0x21594c0()*-0.201381);
}

double NNfunction-NN_3_8::synapse0x216eff0() {
   return (neuron0x2159800()*-0.089348);
}

double NNfunction-NN_3_8::synapse0x216f030() {
   return (neuron0x2159b40()*-0.166623);
}

double NNfunction-NN_3_8::synapse0x216eac0() {
   return (neuron0x2159e80()*0.199445);
}

double NNfunction-NN_3_8::synapse0x216eb00() {
   return (neuron0x215a3e0()*-0.293283);
}

double NNfunction-NN_3_8::synapse0x216f180() {
   return (neuron0x215a600()*-0.304657);
}

double NNfunction-NN_3_8::synapse0x216f1c0() {
   return (neuron0x215a940()*-0.0273945);
}

double NNfunction-NN_3_8::synapse0x216f200() {
   return (neuron0x215ac80()*0.0711738);
}

double NNfunction-NN_3_8::synapse0x216f240() {
   return (neuron0x215afc0()*-0.0258065);
}

double NNfunction-NN_3_8::synapse0x216f280() {
   return (neuron0x215b300()*-0.00340538);
}

double NNfunction-NN_3_8::synapse0x216f2c0() {
   return (neuron0x215b640()*-0.0202313);
}

double NNfunction-NN_3_8::synapse0x216f640() {
   return (neuron0x2156a80()*-0.0301975);
}

double NNfunction-NN_3_8::synapse0x216f680() {
   return (neuron0x2156dc0()*-0.0420886);
}

double NNfunction-NN_3_8::synapse0x216f6c0() {
   return (neuron0x2157100()*0.0888279);
}

double NNfunction-NN_3_8::synapse0x216f700() {
   return (neuron0x2157440()*-0.118398);
}

double NNfunction-NN_3_8::synapse0x216f740() {
   return (neuron0x2157780()*0.00996733);
}

double NNfunction-NN_3_8::synapse0x216f780() {
   return (neuron0x2157ac0()*-0.00148333);
}

double NNfunction-NN_3_8::synapse0x216f7c0() {
   return (neuron0x2157e00()*-0.0213231);
}

double NNfunction-NN_3_8::synapse0x216f800() {
   return (neuron0x2158140()*0.026673);
}

double NNfunction-NN_3_8::synapse0x216f840() {
   return (neuron0x2158480()*-0.0108178);
}

double NNfunction-NN_3_8::synapse0x216f880() {
   return (neuron0x21587c0()*-0.0464376);
}

double NNfunction-NN_3_8::synapse0x216f8c0() {
   return (neuron0x2158b00()*-0.00300061);
}

double NNfunction-NN_3_8::synapse0x216f900() {
   return (neuron0x2158e40()*-0.049005);
}

double NNfunction-NN_3_8::synapse0x216f940() {
   return (neuron0x2159180()*-0.159578);
}

double NNfunction-NN_3_8::synapse0x216f980() {
   return (neuron0x21594c0()*0.0337003);
}

double NNfunction-NN_3_8::synapse0x216f9c0() {
   return (neuron0x2159800()*-0.0618962);
}

double NNfunction-NN_3_8::synapse0x216fa00() {
   return (neuron0x2159b40()*-0.0171646);
}

double NNfunction-NN_3_8::synapse0x216f490() {
   return (neuron0x2159e80()*-0.0161391);
}

double NNfunction-NN_3_8::synapse0x216f4d0() {
   return (neuron0x215a3e0()*-0.0711214);
}

double NNfunction-NN_3_8::synapse0x216fb50() {
   return (neuron0x215a600()*-0.102273);
}

double NNfunction-NN_3_8::synapse0x216fb90() {
   return (neuron0x215a940()*0.0110822);
}

double NNfunction-NN_3_8::synapse0x216fbd0() {
   return (neuron0x215ac80()*0.0149618);
}

double NNfunction-NN_3_8::synapse0x216fc10() {
   return (neuron0x215afc0()*-0.0327188);
}

double NNfunction-NN_3_8::synapse0x216fc50() {
   return (neuron0x215b300()*-0.0201563);
}

double NNfunction-NN_3_8::synapse0x216fc90() {
   return (neuron0x215b640()*0.296658);
}

double NNfunction-NN_3_8::synapse0x2170010() {
   return (neuron0x2156a80()*-0.0423752);
}

double NNfunction-NN_3_8::synapse0x2170050() {
   return (neuron0x2156dc0()*-0.0118955);
}

double NNfunction-NN_3_8::synapse0x2170090() {
   return (neuron0x2157100()*1.03645);
}

double NNfunction-NN_3_8::synapse0x21700d0() {
   return (neuron0x2157440()*0.106383);
}

double NNfunction-NN_3_8::synapse0x2170110() {
   return (neuron0x2157780()*-0.1057);
}

double NNfunction-NN_3_8::synapse0x2170150() {
   return (neuron0x2157ac0()*0.0633285);
}

double NNfunction-NN_3_8::synapse0x2170190() {
   return (neuron0x2157e00()*-0.00972166);
}

double NNfunction-NN_3_8::synapse0x21701d0() {
   return (neuron0x2158140()*0.008066);
}

double NNfunction-NN_3_8::synapse0x2170210() {
   return (neuron0x2158480()*0.0546664);
}

double NNfunction-NN_3_8::synapse0x2170250() {
   return (neuron0x21587c0()*0.0921215);
}

double NNfunction-NN_3_8::synapse0x2170290() {
   return (neuron0x2158b00()*0.0850106);
}

double NNfunction-NN_3_8::synapse0x21702d0() {
   return (neuron0x2158e40()*0.105814);
}

double NNfunction-NN_3_8::synapse0x2170310() {
   return (neuron0x2159180()*0.0867977);
}

double NNfunction-NN_3_8::synapse0x2170350() {
   return (neuron0x21594c0()*-0.129442);
}

double NNfunction-NN_3_8::synapse0x2170390() {
   return (neuron0x2159800()*0.068766);
}

double NNfunction-NN_3_8::synapse0x21703d0() {
   return (neuron0x2159b40()*0.0218784);
}

double NNfunction-NN_3_8::synapse0x216fe60() {
   return (neuron0x2159e80()*0.00106156);
}

double NNfunction-NN_3_8::synapse0x216fea0() {
   return (neuron0x215a3e0()*-0.00107122);
}

double NNfunction-NN_3_8::synapse0x2170520() {
   return (neuron0x215a600()*0.0703258);
}

double NNfunction-NN_3_8::synapse0x2170560() {
   return (neuron0x215a940()*0.0388709);
}

double NNfunction-NN_3_8::synapse0x21705a0() {
   return (neuron0x215ac80()*0.0260996);
}

double NNfunction-NN_3_8::synapse0x21705e0() {
   return (neuron0x215afc0()*0.0352581);
}

double NNfunction-NN_3_8::synapse0x2170620() {
   return (neuron0x215b300()*0.0511994);
}

double NNfunction-NN_3_8::synapse0x2170660() {
   return (neuron0x215b640()*0.740265);
}

double NNfunction-NN_3_8::synapse0x21709e0() {
   return (neuron0x2156a80()*-0.0490161);
}

double NNfunction-NN_3_8::synapse0x2170a20() {
   return (neuron0x2156dc0()*-0.00798054);
}

double NNfunction-NN_3_8::synapse0x2170a60() {
   return (neuron0x2157100()*0.804155);
}

double NNfunction-NN_3_8::synapse0x2170aa0() {
   return (neuron0x2157440()*-0.0114228);
}

double NNfunction-NN_3_8::synapse0x2170ae0() {
   return (neuron0x2157780()*-0.00969209);
}

double NNfunction-NN_3_8::synapse0x2170b20() {
   return (neuron0x2157ac0()*0.044039);
}

double NNfunction-NN_3_8::synapse0x2170b60() {
   return (neuron0x2157e00()*0.011718);
}

double NNfunction-NN_3_8::synapse0x2170ba0() {
   return (neuron0x2158140()*0.00478832);
}

double NNfunction-NN_3_8::synapse0x2170be0() {
   return (neuron0x2158480()*-0.012127);
}

double NNfunction-NN_3_8::synapse0x2170c20() {
   return (neuron0x21587c0()*0.014045);
}

double NNfunction-NN_3_8::synapse0x2170c60() {
   return (neuron0x2158b00()*-0.0119851);
}

double NNfunction-NN_3_8::synapse0x2170ca0() {
   return (neuron0x2158e40()*-0.105151);
}

double NNfunction-NN_3_8::synapse0x2170ce0() {
   return (neuron0x2159180()*0.0332079);
}

double NNfunction-NN_3_8::synapse0x2170d20() {
   return (neuron0x21594c0()*-0.019115);
}

double NNfunction-NN_3_8::synapse0x2170d60() {
   return (neuron0x2159800()*0.000795916);
}

double NNfunction-NN_3_8::synapse0x2170da0() {
   return (neuron0x2159b40()*-0.0070717);
}

double NNfunction-NN_3_8::synapse0x2170830() {
   return (neuron0x2159e80()*-0.00861022);
}

double NNfunction-NN_3_8::synapse0x2170870() {
   return (neuron0x215a3e0()*-0.0197602);
}

double NNfunction-NN_3_8::synapse0x2170ef0() {
   return (neuron0x215a600()*0.00789882);
}

double NNfunction-NN_3_8::synapse0x2170f30() {
   return (neuron0x215a940()*-0.00654837);
}

double NNfunction-NN_3_8::synapse0x2170f70() {
   return (neuron0x215ac80()*-0.000116204);
}

double NNfunction-NN_3_8::synapse0x2170fb0() {
   return (neuron0x215afc0()*0.0277573);
}

double NNfunction-NN_3_8::synapse0x2170ff0() {
   return (neuron0x215b300()*0.029087);
}

double NNfunction-NN_3_8::synapse0x2171030() {
   return (neuron0x215b640()*0.299493);
}

double NNfunction-NN_3_8::synapse0x21713b0() {
   return (neuron0x2156a80()*0.0539312);
}

double NNfunction-NN_3_8::synapse0x2165980() {
   return (neuron0x2156dc0()*0.155119);
}

double NNfunction-NN_3_8::synapse0x21659c0() {
   return (neuron0x2157100()*0.524186);
}

double NNfunction-NN_3_8::synapse0x2165a00() {
   return (neuron0x2157440()*0.0505741);
}

double NNfunction-NN_3_8::synapse0x2165c50() {
   return (neuron0x2157780()*0.0052032);
}

double NNfunction-NN_3_8::synapse0x2165c90() {
   return (neuron0x2157ac0()*0.0200283);
}

double NNfunction-NN_3_8::synapse0x2165cd0() {
   return (neuron0x2157e00()*-0.0140143);
}

double NNfunction-NN_3_8::synapse0x2165f20() {
   return (neuron0x2158140()*0.0017218);
}

double NNfunction-NN_3_8::synapse0x2165f60() {
   return (neuron0x2158480()*-0.012873);
}

double NNfunction-NN_3_8::synapse0x21661b0() {
   return (neuron0x21587c0()*-0.0043538);
}

double NNfunction-NN_3_8::synapse0x21661f0() {
   return (neuron0x2158b00()*0.035596);
}

double NNfunction-NN_3_8::synapse0x2166230() {
   return (neuron0x2158e40()*-2.32804);
}

double NNfunction-NN_3_8::synapse0x2166480() {
   return (neuron0x2159180()*0.0546429);
}

double NNfunction-NN_3_8::synapse0x21664c0() {
   return (neuron0x21594c0()*0.0432909);
}

double NNfunction-NN_3_8::synapse0x2166710() {
   return (neuron0x2159800()*-0.00788603);
}

double NNfunction-NN_3_8::synapse0x2166750() {
   return (neuron0x2159b40()*-0.0582238);
}

double NNfunction-NN_3_8::synapse0x2171200() {
   return (neuron0x2159e80()*0.0152061);
}

double NNfunction-NN_3_8::synapse0x2171240() {
   return (neuron0x215a3e0()*0.00651554);
}

double NNfunction-NN_3_8::synapse0x21668a0() {
   return (neuron0x215a600()*0.0222852);
}

double NNfunction-NN_3_8::synapse0x2166db0() {
   return (neuron0x215a940()*0.0091134);
}

double NNfunction-NN_3_8::synapse0x2166df0() {
   return (neuron0x215ac80()*0.00495072);
}

double NNfunction-NN_3_8::synapse0x2166e30() {
   return (neuron0x215afc0()*0.00513057);
}

double NNfunction-NN_3_8::synapse0x2167080() {
   return (neuron0x215b300()*-0.037551);
}

double NNfunction-NN_3_8::synapse0x21670c0() {
   return (neuron0x215b640()*0.4314);
}

double NNfunction-NN_3_8::synapse0x2166970() {
   return (neuron0x2156a80()*-0.00890446);
}

double NNfunction-NN_3_8::synapse0x21669b0() {
   return (neuron0x2156dc0()*0.0513451);
}

double NNfunction-NN_3_8::synapse0x21669f0() {
   return (neuron0x2157100()*0.379236);
}

double NNfunction-NN_3_8::synapse0x2166a30() {
   return (neuron0x2157440()*-0.00490813);
}

double NNfunction-NN_3_8::synapse0x21673b0() {
   return (neuron0x2157780()*0.00820859);
}

double NNfunction-NN_3_8::synapse0x2173700() {
   return (neuron0x2157ac0()*-0.0202051);
}

double NNfunction-NN_3_8::synapse0x2173740() {
   return (neuron0x2157e00()*0.0262924);
}

double NNfunction-NN_3_8::synapse0x2173780() {
   return (neuron0x2158140()*0.0128575);
}

double NNfunction-NN_3_8::synapse0x21737c0() {
   return (neuron0x2158480()*-0.0228863);
}

double NNfunction-NN_3_8::synapse0x2173800() {
   return (neuron0x21587c0()*0.0248583);
}

double NNfunction-NN_3_8::synapse0x2173840() {
   return (neuron0x2158b00()*0.0400397);
}

double NNfunction-NN_3_8::synapse0x2173880() {
   return (neuron0x2158e40()*-0.0154013);
}

double NNfunction-NN_3_8::synapse0x21738c0() {
   return (neuron0x2159180()*0.0126037);
}

double NNfunction-NN_3_8::synapse0x2173900() {
   return (neuron0x21594c0()*0.0291572);
}

double NNfunction-NN_3_8::synapse0x2173940() {
   return (neuron0x2159800()*0.0149947);
}

double NNfunction-NN_3_8::synapse0x2173980() {
   return (neuron0x2159b40()*-0.030101);
}

double NNfunction-NN_3_8::synapse0x2167290() {
   return (neuron0x2159e80()*0.0416742);
}

double NNfunction-NN_3_8::synapse0x21672d0() {
   return (neuron0x215a3e0()*-0.0314886);
}

double NNfunction-NN_3_8::synapse0x2173ad0() {
   return (neuron0x215a600()*0.00760959);
}

double NNfunction-NN_3_8::synapse0x2173b10() {
   return (neuron0x215a940()*0.00100603);
}

double NNfunction-NN_3_8::synapse0x2173b50() {
   return (neuron0x215ac80()*0.0330032);
}

double NNfunction-NN_3_8::synapse0x2173b90() {
   return (neuron0x215afc0()*0.00785387);
}

double NNfunction-NN_3_8::synapse0x2173bd0() {
   return (neuron0x215b300()*-0.0195945);
}

double NNfunction-NN_3_8::synapse0x2173c10() {
   return (neuron0x215b640()*-3.58339);
}

double NNfunction-NN_3_8::synapse0x2173f90() {
   return (neuron0x2156a80()*0.00321757);
}

double NNfunction-NN_3_8::synapse0x2173fd0() {
   return (neuron0x2156dc0()*0.00777779);
}

double NNfunction-NN_3_8::synapse0x2174010() {
   return (neuron0x2157100()*0.703576);
}

double NNfunction-NN_3_8::synapse0x2174050() {
   return (neuron0x2157440()*-0.00089966);
}

double NNfunction-NN_3_8::synapse0x2174090() {
   return (neuron0x2157780()*0.0472639);
}

double NNfunction-NN_3_8::synapse0x21740d0() {
   return (neuron0x2157ac0()*0.0332071);
}

double NNfunction-NN_3_8::synapse0x2174110() {
   return (neuron0x2157e00()*-0.00614886);
}

double NNfunction-NN_3_8::synapse0x2174150() {
   return (neuron0x2158140()*-0.027811);
}

double NNfunction-NN_3_8::synapse0x2174190() {
   return (neuron0x2158480()*-0.0145776);
}

double NNfunction-NN_3_8::synapse0x21741d0() {
   return (neuron0x21587c0()*-0.0111638);
}

double NNfunction-NN_3_8::synapse0x2174210() {
   return (neuron0x2158b00()*0.0264178);
}

double NNfunction-NN_3_8::synapse0x2174250() {
   return (neuron0x2158e40()*-2.78288);
}

double NNfunction-NN_3_8::synapse0x2174290() {
   return (neuron0x2159180()*0.028693);
}

double NNfunction-NN_3_8::synapse0x21742d0() {
   return (neuron0x21594c0()*0.0331779);
}

double NNfunction-NN_3_8::synapse0x2174310() {
   return (neuron0x2159800()*0.0104559);
}

double NNfunction-NN_3_8::synapse0x2174350() {
   return (neuron0x2159b40()*-0.00555714);
}

double NNfunction-NN_3_8::synapse0x2173de0() {
   return (neuron0x2159e80()*0.0363541);
}

double NNfunction-NN_3_8::synapse0x2173e20() {
   return (neuron0x215a3e0()*0.0090121);
}

double NNfunction-NN_3_8::synapse0x21744a0() {
   return (neuron0x215a600()*0.00210985);
}

double NNfunction-NN_3_8::synapse0x21744e0() {
   return (neuron0x215a940()*-0.00682485);
}

double NNfunction-NN_3_8::synapse0x2174520() {
   return (neuron0x215ac80()*-0.00547846);
}

double NNfunction-NN_3_8::synapse0x2174560() {
   return (neuron0x215afc0()*0.00539853);
}

double NNfunction-NN_3_8::synapse0x21745a0() {
   return (neuron0x215b300()*-0.0344413);
}

double NNfunction-NN_3_8::synapse0x21745e0() {
   return (neuron0x215b640()*0.385658);
}

double NNfunction-NN_3_8::synapse0x2174960() {
   return (neuron0x2156a80()*0.303505);
}

double NNfunction-NN_3_8::synapse0x21749a0() {
   return (neuron0x2156dc0()*0.120871);
}

double NNfunction-NN_3_8::synapse0x21749e0() {
   return (neuron0x2157100()*-0.400767);
}

double NNfunction-NN_3_8::synapse0x2174a20() {
   return (neuron0x2157440()*0.249249);
}

double NNfunction-NN_3_8::synapse0x2174a60() {
   return (neuron0x2157780()*-0.174732);
}

double NNfunction-NN_3_8::synapse0x2174aa0() {
   return (neuron0x2157ac0()*-0.191597);
}

double NNfunction-NN_3_8::synapse0x2174ae0() {
   return (neuron0x2157e00()*-0.00821715);
}

double NNfunction-NN_3_8::synapse0x2174b20() {
   return (neuron0x2158140()*-0.160049);
}

double NNfunction-NN_3_8::synapse0x2174b60() {
   return (neuron0x2158480()*-0.198437);
}

double NNfunction-NN_3_8::synapse0x2174ba0() {
   return (neuron0x21587c0()*0.173333);
}

double NNfunction-NN_3_8::synapse0x2174be0() {
   return (neuron0x2158b00()*-0.296191);
}

double NNfunction-NN_3_8::synapse0x2174c20() {
   return (neuron0x2158e40()*-0.32976);
}

double NNfunction-NN_3_8::synapse0x2174c60() {
   return (neuron0x2159180()*0.00929048);
}

double NNfunction-NN_3_8::synapse0x2174ca0() {
   return (neuron0x21594c0()*0.323286);
}

double NNfunction-NN_3_8::synapse0x2174ce0() {
   return (neuron0x2159800()*0.392979);
}

double NNfunction-NN_3_8::synapse0x2174d20() {
   return (neuron0x2159b40()*-0.229328);
}

double NNfunction-NN_3_8::synapse0x21747b0() {
   return (neuron0x2159e80()*0.40102);
}

double NNfunction-NN_3_8::synapse0x21747f0() {
   return (neuron0x215a3e0()*0.0817708);
}

double NNfunction-NN_3_8::synapse0x2174e70() {
   return (neuron0x215a600()*0.0804204);
}

double NNfunction-NN_3_8::synapse0x2174eb0() {
   return (neuron0x215a940()*-0.158104);
}

double NNfunction-NN_3_8::synapse0x2174ef0() {
   return (neuron0x215ac80()*0.498171);
}

double NNfunction-NN_3_8::synapse0x2174f30() {
   return (neuron0x215afc0()*-0.287223);
}

double NNfunction-NN_3_8::synapse0x2174f70() {
   return (neuron0x215b300()*0.0227479);
}

double NNfunction-NN_3_8::synapse0x2174fb0() {
   return (neuron0x215b640()*-0.777523);
}

double NNfunction-NN_3_8::synapse0x2175330() {
   return (neuron0x2156a80()*0.0768636);
}

double NNfunction-NN_3_8::synapse0x2175370() {
   return (neuron0x2156dc0()*-0.457178);
}

double NNfunction-NN_3_8::synapse0x21753b0() {
   return (neuron0x2157100()*2.39218);
}

double NNfunction-NN_3_8::synapse0x21753f0() {
   return (neuron0x2157440()*0.0299354);
}

double NNfunction-NN_3_8::synapse0x2175430() {
   return (neuron0x2157780()*-0.016358);
}

double NNfunction-NN_3_8::synapse0x2175470() {
   return (neuron0x2157ac0()*0.0333354);
}

double NNfunction-NN_3_8::synapse0x21754b0() {
   return (neuron0x2157e00()*0.0302987);
}

double NNfunction-NN_3_8::synapse0x21754f0() {
   return (neuron0x2158140()*-0.0236496);
}

double NNfunction-NN_3_8::synapse0x2175530() {
   return (neuron0x2158480()*0.0214467);
}

double NNfunction-NN_3_8::synapse0x2175570() {
   return (neuron0x21587c0()*-0.0361325);
}

double NNfunction-NN_3_8::synapse0x21755b0() {
   return (neuron0x2158b00()*-0.0139227);
}

double NNfunction-NN_3_8::synapse0x21755f0() {
   return (neuron0x2158e40()*0.00878696);
}

double NNfunction-NN_3_8::synapse0x2175630() {
   return (neuron0x2159180()*-0.0432694);
}

double NNfunction-NN_3_8::synapse0x2175670() {
   return (neuron0x21594c0()*-0.0262605);
}

double NNfunction-NN_3_8::synapse0x21756b0() {
   return (neuron0x2159800()*0.00479538);
}

double NNfunction-NN_3_8::synapse0x21756f0() {
   return (neuron0x2159b40()*0.0430736);
}

double NNfunction-NN_3_8::synapse0x2175180() {
   return (neuron0x2159e80()*-0.0726912);
}

double NNfunction-NN_3_8::synapse0x21751c0() {
   return (neuron0x215a3e0()*0.0460562);
}

double NNfunction-NN_3_8::synapse0x2175840() {
   return (neuron0x215a600()*-0.00906002);
}

double NNfunction-NN_3_8::synapse0x2175880() {
   return (neuron0x215a940()*0.0108556);
}

double NNfunction-NN_3_8::synapse0x21758c0() {
   return (neuron0x215ac80()*-0.033472);
}

double NNfunction-NN_3_8::synapse0x2175900() {
   return (neuron0x215afc0()*-0.0140986);
}

double NNfunction-NN_3_8::synapse0x2175940() {
   return (neuron0x215b300()*0.00528426);
}

double NNfunction-NN_3_8::synapse0x2175980() {
   return (neuron0x215b640()*-3.83643);
}

double NNfunction-NN_3_8::synapse0x2175d00() {
   return (neuron0x2156a80()*0.036004);
}

double NNfunction-NN_3_8::synapse0x2175d40() {
   return (neuron0x2156dc0()*0.00384027);
}

double NNfunction-NN_3_8::synapse0x2175d80() {
   return (neuron0x2157100()*-2.19544);
}

double NNfunction-NN_3_8::synapse0x2175dc0() {
   return (neuron0x2157440()*-0.00421066);
}

double NNfunction-NN_3_8::synapse0x2175e00() {
   return (neuron0x2157780()*-0.0169633);
}

double NNfunction-NN_3_8::synapse0x2175e40() {
   return (neuron0x2157ac0()*-0.0528012);
}

double NNfunction-NN_3_8::synapse0x2175e80() {
   return (neuron0x2157e00()*-0.0288507);
}

double NNfunction-NN_3_8::synapse0x2175ec0() {
   return (neuron0x2158140()*-0.0118203);
}

double NNfunction-NN_3_8::synapse0x2175f00() {
   return (neuron0x2158480()*0.0244227);
}

double NNfunction-NN_3_8::synapse0x2175f40() {
   return (neuron0x21587c0()*0.0251978);
}

double NNfunction-NN_3_8::synapse0x2175f80() {
   return (neuron0x2158b00()*0.0351704);
}

double NNfunction-NN_3_8::synapse0x2175fc0() {
   return (neuron0x2158e40()*8.08717);
}

double NNfunction-NN_3_8::synapse0x2176000() {
   return (neuron0x2159180()*-0.0447435);
}

double NNfunction-NN_3_8::synapse0x2176040() {
   return (neuron0x21594c0()*-0.0211859);
}

double NNfunction-NN_3_8::synapse0x2176080() {
   return (neuron0x2159800()*-0.0463049);
}

double NNfunction-NN_3_8::synapse0x21760c0() {
   return (neuron0x2159b40()*-0.0431021);
}

double NNfunction-NN_3_8::synapse0x2175b50() {
   return (neuron0x2159e80()*-0.00770891);
}

double NNfunction-NN_3_8::synapse0x2175b90() {
   return (neuron0x215a3e0()*-0.00120472);
}

double NNfunction-NN_3_8::synapse0x2176210() {
   return (neuron0x215a600()*0.00281502);
}

double NNfunction-NN_3_8::synapse0x2176250() {
   return (neuron0x215a940()*0.000276546);
}

double NNfunction-NN_3_8::synapse0x2176290() {
   return (neuron0x215ac80()*0.00365482);
}

double NNfunction-NN_3_8::synapse0x21762d0() {
   return (neuron0x215afc0()*-0.0134297);
}

double NNfunction-NN_3_8::synapse0x2176310() {
   return (neuron0x215b300()*0.00800065);
}

double NNfunction-NN_3_8::synapse0x2176350() {
   return (neuron0x215b640()*0.0447056);
}

double NNfunction-NN_3_8::synapse0x21766d0() {
   return (neuron0x2156a80()*-0.0246251);
}

double NNfunction-NN_3_8::synapse0x2176710() {
   return (neuron0x2156dc0()*3.34445);
}

double NNfunction-NN_3_8::synapse0x2176750() {
   return (neuron0x2157100()*-0.793862);
}

double NNfunction-NN_3_8::synapse0x2176790() {
   return (neuron0x2157440()*0.00897884);
}

double NNfunction-NN_3_8::synapse0x21767d0() {
   return (neuron0x2157780()*0.0368776);
}

double NNfunction-NN_3_8::synapse0x2176810() {
   return (neuron0x2157ac0()*0.0361096);
}

double NNfunction-NN_3_8::synapse0x2176850() {
   return (neuron0x2157e00()*-0.0206611);
}

double NNfunction-NN_3_8::synapse0x2176890() {
   return (neuron0x2158140()*-0.0252338);
}

double NNfunction-NN_3_8::synapse0x21768d0() {
   return (neuron0x2158480()*-0.0551192);
}

double NNfunction-NN_3_8::synapse0x2176910() {
   return (neuron0x21587c0()*-0.00650034);
}

double NNfunction-NN_3_8::synapse0x2176950() {
   return (neuron0x2158b00()*-0.00372721);
}

double NNfunction-NN_3_8::synapse0x2176990() {
   return (neuron0x2158e40()*0.130955);
}

double NNfunction-NN_3_8::synapse0x21769d0() {
   return (neuron0x2159180()*-0.0593391);
}

double NNfunction-NN_3_8::synapse0x2176a10() {
   return (neuron0x21594c0()*-0.0111519);
}

double NNfunction-NN_3_8::synapse0x2176a50() {
   return (neuron0x2159800()*0.00742637);
}

double NNfunction-NN_3_8::synapse0x2176a90() {
   return (neuron0x2159b40()*-0.0121741);
}

double NNfunction-NN_3_8::synapse0x2176520() {
   return (neuron0x2159e80()*0.0419735);
}

double NNfunction-NN_3_8::synapse0x2176560() {
   return (neuron0x215a3e0()*-0.0628954);
}

double NNfunction-NN_3_8::synapse0x2176be0() {
   return (neuron0x215a600()*0.0216917);
}

double NNfunction-NN_3_8::synapse0x2176c20() {
   return (neuron0x215a940()*0.0276758);
}

double NNfunction-NN_3_8::synapse0x2176c60() {
   return (neuron0x215ac80()*-0.109257);
}

double NNfunction-NN_3_8::synapse0x2176ca0() {
   return (neuron0x215afc0()*0.0508171);
}

double NNfunction-NN_3_8::synapse0x2176ce0() {
   return (neuron0x215b300()*-0.0259778);
}

double NNfunction-NN_3_8::synapse0x2176d20() {
   return (neuron0x215b640()*1.2188);
}

double NNfunction-NN_3_8::synapse0x21770a0() {
   return (neuron0x2156a80()*0.0587507);
}

double NNfunction-NN_3_8::synapse0x21770e0() {
   return (neuron0x2156dc0()*0.0920716);
}

double NNfunction-NN_3_8::synapse0x2177120() {
   return (neuron0x2157100()*-2.0643);
}

double NNfunction-NN_3_8::synapse0x2177160() {
   return (neuron0x2157440()*-0.0051883);
}

double NNfunction-NN_3_8::synapse0x21771a0() {
   return (neuron0x2157780()*-0.0842127);
}

double NNfunction-NN_3_8::synapse0x21771e0() {
   return (neuron0x2157ac0()*0.0326025);
}

double NNfunction-NN_3_8::synapse0x2177220() {
   return (neuron0x2157e00()*0.0404512);
}

double NNfunction-NN_3_8::synapse0x2177260() {
   return (neuron0x2158140()*0.0135578);
}

double NNfunction-NN_3_8::synapse0x21772a0() {
   return (neuron0x2158480()*0.0226895);
}

double NNfunction-NN_3_8::synapse0x21772e0() {
   return (neuron0x21587c0()*0.0527008);
}

double NNfunction-NN_3_8::synapse0x2177320() {
   return (neuron0x2158b00()*0.0132618);
}

double NNfunction-NN_3_8::synapse0x2177360() {
   return (neuron0x2158e40()*3.69557);
}

double NNfunction-NN_3_8::synapse0x21773a0() {
   return (neuron0x2159180()*-0.0178464);
}

double NNfunction-NN_3_8::synapse0x21773e0() {
   return (neuron0x21594c0()*-0.0313062);
}

double NNfunction-NN_3_8::synapse0x2177420() {
   return (neuron0x2159800()*-0.0152466);
}

double NNfunction-NN_3_8::synapse0x2177460() {
   return (neuron0x2159b40()*-0.0539297);
}

double NNfunction-NN_3_8::synapse0x2176ef0() {
   return (neuron0x2159e80()*-0.0264575);
}

double NNfunction-NN_3_8::synapse0x2176f30() {
   return (neuron0x215a3e0()*0.0218474);
}

double NNfunction-NN_3_8::synapse0x21775b0() {
   return (neuron0x215a600()*-0.0384753);
}

double NNfunction-NN_3_8::synapse0x21775f0() {
   return (neuron0x215a940()*0.0417522);
}

double NNfunction-NN_3_8::synapse0x2177630() {
   return (neuron0x215ac80()*-0.00933732);
}

double NNfunction-NN_3_8::synapse0x2177670() {
   return (neuron0x215afc0()*0.000596398);
}

double NNfunction-NN_3_8::synapse0x21776b0() {
   return (neuron0x215b300()*0.0327607);
}

double NNfunction-NN_3_8::synapse0x21776f0() {
   return (neuron0x215b640()*-0.410125);
}

double NNfunction-NN_3_8::synapse0x2177a70() {
   return (neuron0x2156a80()*-0.111319);
}

double NNfunction-NN_3_8::synapse0x2177ab0() {
   return (neuron0x2156dc0()*-0.0152459);
}

double NNfunction-NN_3_8::synapse0x2177af0() {
   return (neuron0x2157100()*0.865673);
}

double NNfunction-NN_3_8::synapse0x2177b30() {
   return (neuron0x2157440()*0.294943);
}

double NNfunction-NN_3_8::synapse0x2177b70() {
   return (neuron0x2157780()*0.0364984);
}

double NNfunction-NN_3_8::synapse0x2177bb0() {
   return (neuron0x2157ac0()*0.00891636);
}

double NNfunction-NN_3_8::synapse0x2177bf0() {
   return (neuron0x2157e00()*-0.0271991);
}

double NNfunction-NN_3_8::synapse0x2177c30() {
   return (neuron0x2158140()*0.00954647);
}

double NNfunction-NN_3_8::synapse0x2177c70() {
   return (neuron0x2158480()*-0.00281828);
}

double NNfunction-NN_3_8::synapse0x2177cb0() {
   return (neuron0x21587c0()*-0.0180519);
}

double NNfunction-NN_3_8::synapse0x2177cf0() {
   return (neuron0x2158b00()*0.0506795);
}

double NNfunction-NN_3_8::synapse0x2177d30() {
   return (neuron0x2158e40()*-0.308028);
}

double NNfunction-NN_3_8::synapse0x2177d70() {
   return (neuron0x2159180()*-0.340887);
}

double NNfunction-NN_3_8::synapse0x2177db0() {
   return (neuron0x21594c0()*-0.00144602);
}

double NNfunction-NN_3_8::synapse0x2177df0() {
   return (neuron0x2159800()*-0.167273);
}

double NNfunction-NN_3_8::synapse0x2177e30() {
   return (neuron0x2159b40()*-0.109138);
}

double NNfunction-NN_3_8::synapse0x21778c0() {
   return (neuron0x2159e80()*-0.00444141);
}

double NNfunction-NN_3_8::synapse0x2177900() {
   return (neuron0x215a3e0()*-0.183824);
}

double NNfunction-NN_3_8::synapse0x2177f80() {
   return (neuron0x215a600()*-0.13272);
}

double NNfunction-NN_3_8::synapse0x2177fc0() {
   return (neuron0x215a940()*0.0107602);
}

double NNfunction-NN_3_8::synapse0x2178000() {
   return (neuron0x215ac80()*0.0848686);
}

double NNfunction-NN_3_8::synapse0x2178040() {
   return (neuron0x215afc0()*0.0339596);
}

double NNfunction-NN_3_8::synapse0x2178080() {
   return (neuron0x215b300()*0.0658633);
}

double NNfunction-NN_3_8::synapse0x21780c0() {
   return (neuron0x215b640()*-0.311101);
}

double NNfunction-NN_3_8::synapse0x2160b70() {
   return (neuron0x2156a80()*0.187122);
}

double NNfunction-NN_3_8::synapse0x2160bb0() {
   return (neuron0x2156dc0()*0.0236499);
}

double NNfunction-NN_3_8::synapse0x2160bf0() {
   return (neuron0x2157100()*0.205069);
}

double NNfunction-NN_3_8::synapse0x2160c30() {
   return (neuron0x2157440()*-0.112525);
}

double NNfunction-NN_3_8::synapse0x2160c70() {
   return (neuron0x2157780()*-0.0340894);
}

double NNfunction-NN_3_8::synapse0x2160cb0() {
   return (neuron0x2157ac0()*-0.0213703);
}

double NNfunction-NN_3_8::synapse0x2160cf0() {
   return (neuron0x2157e00()*0.00314316);
}

double NNfunction-NN_3_8::synapse0x2160d30() {
   return (neuron0x2158140()*0.0361729);
}

double NNfunction-NN_3_8::synapse0x2178850() {
   return (neuron0x2158480()*-0.0387555);
}

double NNfunction-NN_3_8::synapse0x2178890() {
   return (neuron0x21587c0()*-0.0561734);
}

double NNfunction-NN_3_8::synapse0x21788d0() {
   return (neuron0x2158b00()*-0.0193143);
}

double NNfunction-NN_3_8::synapse0x2178910() {
   return (neuron0x2158e40()*-0.254699);
}

double NNfunction-NN_3_8::synapse0x2178950() {
   return (neuron0x2159180()*-0.15813);
}

double NNfunction-NN_3_8::synapse0x2178990() {
   return (neuron0x21594c0()*0.0385552);
}

double NNfunction-NN_3_8::synapse0x21789d0() {
   return (neuron0x2159800()*-0.0760829);
}

double NNfunction-NN_3_8::synapse0x2178a10() {
   return (neuron0x2159b40()*-0.0826925);
}

double NNfunction-NN_3_8::synapse0x2178290() {
   return (neuron0x2159e80()*-0.0273828);
}

double NNfunction-NN_3_8::synapse0x21782d0() {
   return (neuron0x215a3e0()*-0.116208);
}

double NNfunction-NN_3_8::synapse0x2178b60() {
   return (neuron0x215a600()*-0.0696554);
}

double NNfunction-NN_3_8::synapse0x2178ba0() {
   return (neuron0x215a940()*0.00742416);
}

double NNfunction-NN_3_8::synapse0x2178be0() {
   return (neuron0x215ac80()*-0.0645515);
}

double NNfunction-NN_3_8::synapse0x2178c20() {
   return (neuron0x215afc0()*-0.0251722);
}

double NNfunction-NN_3_8::synapse0x2178c60() {
   return (neuron0x215b300()*-0.0358328);
}

double NNfunction-NN_3_8::synapse0x2178ca0() {
   return (neuron0x215b640()*-0.62813);
}

double NNfunction-NN_3_8::synapse0x2179020() {
   return (neuron0x2156a80()*-0.050302);
}

double NNfunction-NN_3_8::synapse0x2179060() {
   return (neuron0x2156dc0()*-0.115205);
}

double NNfunction-NN_3_8::synapse0x21790a0() {
   return (neuron0x2157100()*-0.124207);
}

double NNfunction-NN_3_8::synapse0x21790e0() {
   return (neuron0x2157440()*0.0253497);
}

double NNfunction-NN_3_8::synapse0x2179120() {
   return (neuron0x2157780()*0.0162546);
}

double NNfunction-NN_3_8::synapse0x2179160() {
   return (neuron0x2157ac0()*-0.0151992);
}

double NNfunction-NN_3_8::synapse0x21791a0() {
   return (neuron0x2157e00()*0.00428211);
}

double NNfunction-NN_3_8::synapse0x21791e0() {
   return (neuron0x2158140()*-0.0175163);
}

double NNfunction-NN_3_8::synapse0x2179220() {
   return (neuron0x2158480()*0.0322113);
}

double NNfunction-NN_3_8::synapse0x2179260() {
   return (neuron0x21587c0()*-0.0145764);
}

double NNfunction-NN_3_8::synapse0x21792a0() {
   return (neuron0x2158b00()*-0.0281598);
}

double NNfunction-NN_3_8::synapse0x21792e0() {
   return (neuron0x2158e40()*-0.225276);
}

double NNfunction-NN_3_8::synapse0x2179320() {
   return (neuron0x2159180()*-0.0444786);
}

double NNfunction-NN_3_8::synapse0x2179360() {
   return (neuron0x21594c0()*0.0138421);
}

double NNfunction-NN_3_8::synapse0x21793a0() {
   return (neuron0x2159800()*-0.0347357);
}

double NNfunction-NN_3_8::synapse0x21793e0() {
   return (neuron0x2159b40()*0.0140459);
}

double NNfunction-NN_3_8::synapse0x2178e70() {
   return (neuron0x2159e80()*0.0210521);
}

double NNfunction-NN_3_8::synapse0x2178eb0() {
   return (neuron0x215a3e0()*0.0309027);
}

double NNfunction-NN_3_8::synapse0x2179530() {
   return (neuron0x215a600()*-0.0261545);
}

double NNfunction-NN_3_8::synapse0x2179570() {
   return (neuron0x215a940()*-0.0244945);
}

double NNfunction-NN_3_8::synapse0x21795b0() {
   return (neuron0x215ac80()*-0.0056713);
}

double NNfunction-NN_3_8::synapse0x21795f0() {
   return (neuron0x215afc0()*0.0107109);
}

double NNfunction-NN_3_8::synapse0x2179630() {
   return (neuron0x215b300()*0.00456893);
}

double NNfunction-NN_3_8::synapse0x2179670() {
   return (neuron0x215b640()*0.277512);
}

double NNfunction-NN_3_8::synapse0x21799f0() {
   return (neuron0x2156a80()*-0.197859);
}

double NNfunction-NN_3_8::synapse0x2179a30() {
   return (neuron0x2156dc0()*0.00126296);
}

double NNfunction-NN_3_8::synapse0x2179a70() {
   return (neuron0x2157100()*0.224707);
}

double NNfunction-NN_3_8::synapse0x2179ab0() {
   return (neuron0x2157440()*0.202948);
}

double NNfunction-NN_3_8::synapse0x2179af0() {
   return (neuron0x2157780()*-0.219255);
}

double NNfunction-NN_3_8::synapse0x2179b30() {
   return (neuron0x2157ac0()*-0.203829);
}

double NNfunction-NN_3_8::synapse0x2179b70() {
   return (neuron0x2157e00()*0.155003);
}

double NNfunction-NN_3_8::synapse0x2179bb0() {
   return (neuron0x2158140()*-0.163114);
}

double NNfunction-NN_3_8::synapse0x2179bf0() {
   return (neuron0x2158480()*0.102065);
}

double NNfunction-NN_3_8::synapse0x2179c30() {
   return (neuron0x21587c0()*-0.27058);
}

double NNfunction-NN_3_8::synapse0x2179c70() {
   return (neuron0x2158b00()*0.475142);
}

double NNfunction-NN_3_8::synapse0x2179cb0() {
   return (neuron0x2158e40()*-0.33827);
}

double NNfunction-NN_3_8::synapse0x2179cf0() {
   return (neuron0x2159180()*0.251754);
}

double NNfunction-NN_3_8::synapse0x2179d30() {
   return (neuron0x21594c0()*-0.57258);
}

double NNfunction-NN_3_8::synapse0x2179d70() {
   return (neuron0x2159800()*-0.0899176);
}

double NNfunction-NN_3_8::synapse0x2179db0() {
   return (neuron0x2159b40()*0.0959424);
}

double NNfunction-NN_3_8::synapse0x2179840() {
   return (neuron0x2159e80()*0.448139);
}

double NNfunction-NN_3_8::synapse0x2179880() {
   return (neuron0x215a3e0()*0.30242);
}

double NNfunction-NN_3_8::synapse0x216a3b0() {
   return (neuron0x215a600()*0.0474836);
}

double NNfunction-NN_3_8::synapse0x216a3f0() {
   return (neuron0x215a940()*-0.624699);
}

double NNfunction-NN_3_8::synapse0x216a430() {
   return (neuron0x215ac80()*0.255489);
}

double NNfunction-NN_3_8::synapse0x216a470() {
   return (neuron0x215afc0()*0.00917775);
}

double NNfunction-NN_3_8::synapse0x216a4b0() {
   return (neuron0x215b300()*-0.691147);
}

double NNfunction-NN_3_8::synapse0x216a4f0() {
   return (neuron0x215b640()*-0.42372);
}

double NNfunction-NN_3_8::synapse0x216a870() {
   return (neuron0x2156a80()*0.0265138);
}

double NNfunction-NN_3_8::synapse0x216a8b0() {
   return (neuron0x2156dc0()*0.643266);
}

double NNfunction-NN_3_8::synapse0x216a8f0() {
   return (neuron0x2157100()*-1.8174);
}

double NNfunction-NN_3_8::synapse0x216a930() {
   return (neuron0x2157440()*0.0190136);
}

double NNfunction-NN_3_8::synapse0x216a970() {
   return (neuron0x2157780()*-0.0836452);
}

double NNfunction-NN_3_8::synapse0x216a9b0() {
   return (neuron0x2157ac0()*0.00962684);
}

double NNfunction-NN_3_8::synapse0x216a9f0() {
   return (neuron0x2157e00()*0.00255397);
}

double NNfunction-NN_3_8::synapse0x216aa30() {
   return (neuron0x2158140()*0.0253492);
}

double NNfunction-NN_3_8::synapse0x216aa70() {
   return (neuron0x2158480()*0.0197049);
}

double NNfunction-NN_3_8::synapse0x216aab0() {
   return (neuron0x21587c0()*-0.00164573);
}

double NNfunction-NN_3_8::synapse0x216aaf0() {
   return (neuron0x2158b00()*0.0261408);
}

double NNfunction-NN_3_8::synapse0x216ab30() {
   return (neuron0x2158e40()*0.632893);
}

double NNfunction-NN_3_8::synapse0x216ab70() {
   return (neuron0x2159180()*0.0176039);
}

double NNfunction-NN_3_8::synapse0x216abb0() {
   return (neuron0x21594c0()*-0.0466723);
}

double NNfunction-NN_3_8::synapse0x216abf0() {
   return (neuron0x2159800()*0.00588905);
}

double NNfunction-NN_3_8::synapse0x216ac30() {
   return (neuron0x2159b40()*0.0289837);
}

double NNfunction-NN_3_8::synapse0x216a6c0() {
   return (neuron0x2159e80()*-0.0482333);
}

double NNfunction-NN_3_8::synapse0x216a700() {
   return (neuron0x215a3e0()*-0.0364317);
}

double NNfunction-NN_3_8::synapse0x216ad80() {
   return (neuron0x215a600()*-0.0410204);
}

double NNfunction-NN_3_8::synapse0x216adc0() {
   return (neuron0x215a940()*0.00367671);
}

double NNfunction-NN_3_8::synapse0x216ae00() {
   return (neuron0x215ac80()*0.00847989);
}

double NNfunction-NN_3_8::synapse0x216ae40() {
   return (neuron0x215afc0()*0.0700343);
}

double NNfunction-NN_3_8::synapse0x216ae80() {
   return (neuron0x215b300()*0.00413239);
}

double NNfunction-NN_3_8::synapse0x216aec0() {
   return (neuron0x215b640()*-2.7831);
}

double NNfunction-NN_3_8::synapse0x216b240() {
   return (neuron0x2156a80()*0.124335);
}

double NNfunction-NN_3_8::synapse0x216b280() {
   return (neuron0x2156dc0()*0.689108);
}

double NNfunction-NN_3_8::synapse0x216b2c0() {
   return (neuron0x2157100()*0.673899);
}

double NNfunction-NN_3_8::synapse0x216b300() {
   return (neuron0x2157440()*-0.0731954);
}

double NNfunction-NN_3_8::synapse0x216b340() {
   return (neuron0x2157780()*0.0907263);
}

double NNfunction-NN_3_8::synapse0x216b380() {
   return (neuron0x2157ac0()*-0.0746806);
}

double NNfunction-NN_3_8::synapse0x216b3c0() {
   return (neuron0x2157e00()*0.0387421);
}

double NNfunction-NN_3_8::synapse0x216b400() {
   return (neuron0x2158140()*-0.023306);
}

double NNfunction-NN_3_8::synapse0x216b440() {
   return (neuron0x2158480()*-0.0955419);
}

double NNfunction-NN_3_8::synapse0x216b480() {
   return (neuron0x21587c0()*0.0120209);
}

double NNfunction-NN_3_8::synapse0x216b4c0() {
   return (neuron0x2158b00()*-0.0520717);
}

double NNfunction-NN_3_8::synapse0x216b500() {
   return (neuron0x2158e40()*-0.436829);
}

double NNfunction-NN_3_8::synapse0x216b540() {
   return (neuron0x2159180()*0.0238669);
}

double NNfunction-NN_3_8::synapse0x216b580() {
   return (neuron0x21594c0()*0.0332097);
}

double NNfunction-NN_3_8::synapse0x216b5c0() {
   return (neuron0x2159800()*0.0577939);
}

double NNfunction-NN_3_8::synapse0x216b600() {
   return (neuron0x2159b40()*-0.050921);
}

double NNfunction-NN_3_8::synapse0x216b090() {
   return (neuron0x2159e80()*0.0153014);
}

double NNfunction-NN_3_8::synapse0x216b0d0() {
   return (neuron0x215a3e0()*0.00646856);
}

double NNfunction-NN_3_8::synapse0x216b750() {
   return (neuron0x215a600()*0.0536523);
}

double NNfunction-NN_3_8::synapse0x216b790() {
   return (neuron0x215a940()*0.00138664);
}

double NNfunction-NN_3_8::synapse0x216b7d0() {
   return (neuron0x215ac80()*0.00792708);
}

double NNfunction-NN_3_8::synapse0x216b810() {
   return (neuron0x215afc0()*-0.00973929);
}

double NNfunction-NN_3_8::synapse0x216b850() {
   return (neuron0x215b300()*-0.00523229);
}

double NNfunction-NN_3_8::synapse0x216b890() {
   return (neuron0x215b640()*1.60554);
}

double NNfunction-NN_3_8::synapse0x216bc10() {
   return (neuron0x2156a80()*-0.060204);
}

double NNfunction-NN_3_8::synapse0x216bc50() {
   return (neuron0x2156dc0()*0.0244808);
}

double NNfunction-NN_3_8::synapse0x216bc90() {
   return (neuron0x2157100()*1.79556);
}

double NNfunction-NN_3_8::synapse0x216bcd0() {
   return (neuron0x2157440()*-0.0357795);
}

double NNfunction-NN_3_8::synapse0x216bd10() {
   return (neuron0x2157780()*0.0793797);
}

double NNfunction-NN_3_8::synapse0x216bd50() {
   return (neuron0x2157ac0()*0.037647);
}

double NNfunction-NN_3_8::synapse0x216bd90() {
   return (neuron0x2157e00()*-0.0122645);
}

double NNfunction-NN_3_8::synapse0x216bdd0() {
   return (neuron0x2158140()*-0.0483787);
}

double NNfunction-NN_3_8::synapse0x216be10() {
   return (neuron0x2158480()*-0.00228625);
}

double NNfunction-NN_3_8::synapse0x216be50() {
   return (neuron0x21587c0()*-0.0270703);
}

double NNfunction-NN_3_8::synapse0x216be90() {
   return (neuron0x2158b00()*-0.00417664);
}

double NNfunction-NN_3_8::synapse0x216bed0() {
   return (neuron0x2158e40()*-4.14317);
}

double NNfunction-NN_3_8::synapse0x216bf10() {
   return (neuron0x2159180()*0.0124286);
}

double NNfunction-NN_3_8::synapse0x216bf50() {
   return (neuron0x21594c0()*0.0307248);
}

double NNfunction-NN_3_8::synapse0x216bf90() {
   return (neuron0x2159800()*-0.0041302);
}

double NNfunction-NN_3_8::synapse0x216bfd0() {
   return (neuron0x2159b40()*-0.00503219);
}

double NNfunction-NN_3_8::synapse0x216ba60() {
   return (neuron0x2159e80()*0.0302537);
}

double NNfunction-NN_3_8::synapse0x216baa0() {
   return (neuron0x215a3e0()*0.00691055);
}

double NNfunction-NN_3_8::synapse0x216c120() {
   return (neuron0x215a600()*0.003844);
}

double NNfunction-NN_3_8::synapse0x216c160() {
   return (neuron0x215a940()*-0.00503541);
}

double NNfunction-NN_3_8::synapse0x216c1a0() {
   return (neuron0x215ac80()*-0.026233);
}

double NNfunction-NN_3_8::synapse0x216c1e0() {
   return (neuron0x215afc0()*0.0170629);
}

double NNfunction-NN_3_8::synapse0x216c220() {
   return (neuron0x215b300()*-0.0490263);
}

double NNfunction-NN_3_8::synapse0x216c260() {
   return (neuron0x215b640()*0.761763);
}

double NNfunction-NN_3_8::synapse0x217e130() {
   return (neuron0x2156a80()*0.0207628);
}

double NNfunction-NN_3_8::synapse0x217e170() {
   return (neuron0x2156dc0()*-0.39229);
}

double NNfunction-NN_3_8::synapse0x217e1b0() {
   return (neuron0x2157100()*-1.36636);
}

double NNfunction-NN_3_8::synapse0x217e1f0() {
   return (neuron0x2157440()*0.100331);
}

double NNfunction-NN_3_8::synapse0x217e230() {
   return (neuron0x2157780()*-0.0652398);
}

double NNfunction-NN_3_8::synapse0x217e270() {
   return (neuron0x2157ac0()*-0.0131729);
}

double NNfunction-NN_3_8::synapse0x217e2b0() {
   return (neuron0x2157e00()*-0.0714744);
}

double NNfunction-NN_3_8::synapse0x217e2f0() {
   return (neuron0x2158140()*0.0795476);
}

double NNfunction-NN_3_8::synapse0x217e330() {
   return (neuron0x2158480()*-0.0171158);
}

double NNfunction-NN_3_8::synapse0x217e370() {
   return (neuron0x21587c0()*-0.0558644);
}

double NNfunction-NN_3_8::synapse0x217e3b0() {
   return (neuron0x2158b00()*0.0720442);
}

double NNfunction-NN_3_8::synapse0x217e3f0() {
   return (neuron0x2158e40()*0.410968);
}

double NNfunction-NN_3_8::synapse0x217e430() {
   return (neuron0x2159180()*-0.0246042);
}

double NNfunction-NN_3_8::synapse0x217e470() {
   return (neuron0x21594c0()*0.0125729);
}

double NNfunction-NN_3_8::synapse0x217e4b0() {
   return (neuron0x2159800()*0.0269115);
}

double NNfunction-NN_3_8::synapse0x217e4f0() {
   return (neuron0x2159b40()*0.106863);
}

double NNfunction-NN_3_8::synapse0x216c2a0() {
   return (neuron0x2159e80()*0.00820769);
}

double NNfunction-NN_3_8::synapse0x216c2e0() {
   return (neuron0x215a3e0()*0.0523454);
}

double NNfunction-NN_3_8::synapse0x217e640() {
   return (neuron0x215a600()*0.0400897);
}

double NNfunction-NN_3_8::synapse0x217e680() {
   return (neuron0x215a940()*-0.052398);
}

double NNfunction-NN_3_8::synapse0x217e6c0() {
   return (neuron0x215ac80()*0.152347);
}

double NNfunction-NN_3_8::synapse0x217e700() {
   return (neuron0x215afc0()*0.0258494);
}

double NNfunction-NN_3_8::synapse0x217e740() {
   return (neuron0x215b300()*0.00644282);
}

double NNfunction-NN_3_8::synapse0x217e780() {
   return (neuron0x215b640()*-0.286719);
}

double NNfunction-NN_3_8::synapse0x217eb00() {
   return (neuron0x2156a80()*0.0384905);
}

double NNfunction-NN_3_8::synapse0x217eb40() {
   return (neuron0x2156dc0()*-0.0102362);
}

double NNfunction-NN_3_8::synapse0x217eb80() {
   return (neuron0x2157100()*0.956448);
}

double NNfunction-NN_3_8::synapse0x217ebc0() {
   return (neuron0x2157440()*-0.0020137);
}

double NNfunction-NN_3_8::synapse0x217ec00() {
   return (neuron0x2157780()*0.00663377);
}

double NNfunction-NN_3_8::synapse0x217ec40() {
   return (neuron0x2157ac0()*0.0140166);
}

double NNfunction-NN_3_8::synapse0x217ec80() {
   return (neuron0x2157e00()*0.00577164);
}

double NNfunction-NN_3_8::synapse0x217ecc0() {
   return (neuron0x2158140()*0.0190193);
}

double NNfunction-NN_3_8::synapse0x217ed00() {
   return (neuron0x2158480()*-0.00724681);
}

double NNfunction-NN_3_8::synapse0x217ed40() {
   return (neuron0x21587c0()*0.00330518);
}

double NNfunction-NN_3_8::synapse0x217ed80() {
   return (neuron0x2158b00()*-0.00333669);
}

double NNfunction-NN_3_8::synapse0x217edc0() {
   return (neuron0x2158e40()*-0.0203407);
}

double NNfunction-NN_3_8::synapse0x217ee00() {
   return (neuron0x2159180()*-0.0414855);
}

double NNfunction-NN_3_8::synapse0x217ee40() {
   return (neuron0x21594c0()*-0.00561623);
}

double NNfunction-NN_3_8::synapse0x217ee80() {
   return (neuron0x2159800()*-0.0126874);
}

double NNfunction-NN_3_8::synapse0x217eec0() {
   return (neuron0x2159b40()*-0.0139592);
}

double NNfunction-NN_3_8::synapse0x217e950() {
   return (neuron0x2159e80()*0.00182393);
}

double NNfunction-NN_3_8::synapse0x217e990() {
   return (neuron0x215a3e0()*-0.0212527);
}

double NNfunction-NN_3_8::synapse0x217f010() {
   return (neuron0x215a600()*-0.0157566);
}

double NNfunction-NN_3_8::synapse0x217f050() {
   return (neuron0x215a940()*0.0208033);
}

double NNfunction-NN_3_8::synapse0x217f090() {
   return (neuron0x215ac80()*-0.00816427);
}

double NNfunction-NN_3_8::synapse0x217f0d0() {
   return (neuron0x215afc0()*-0.00341141);
}

double NNfunction-NN_3_8::synapse0x217f110() {
   return (neuron0x215b300()*0.0114183);
}

double NNfunction-NN_3_8::synapse0x217f150() {
   return (neuron0x215b640()*-1.35404);
}

double NNfunction-NN_3_8::synapse0x217f4d0() {
   return (neuron0x2156a80()*-0.117157);
}

double NNfunction-NN_3_8::synapse0x217f510() {
   return (neuron0x2156dc0()*0.0115296);
}

double NNfunction-NN_3_8::synapse0x217f550() {
   return (neuron0x2157100()*-0.761588);
}

double NNfunction-NN_3_8::synapse0x217f590() {
   return (neuron0x2157440()*0.870555);
}

double NNfunction-NN_3_8::synapse0x217f5d0() {
   return (neuron0x2157780()*0.503901);
}

double NNfunction-NN_3_8::synapse0x217f610() {
   return (neuron0x2157ac0()*0.187779);
}

double NNfunction-NN_3_8::synapse0x217f650() {
   return (neuron0x2157e00()*-0.0383752);
}

double NNfunction-NN_3_8::synapse0x217f690() {
   return (neuron0x2158140()*-0.661957);
}

double NNfunction-NN_3_8::synapse0x217f6d0() {
   return (neuron0x2158480()*-0.0610253);
}

double NNfunction-NN_3_8::synapse0x217f710() {
   return (neuron0x21587c0()*0.0312178);
}

double NNfunction-NN_3_8::synapse0x217f750() {
   return (neuron0x2158b00()*-0.105499);
}

double NNfunction-NN_3_8::synapse0x217f790() {
   return (neuron0x2158e40()*0.227049);
}

double NNfunction-NN_3_8::synapse0x217f7d0() {
   return (neuron0x2159180()*0.399605);
}

double NNfunction-NN_3_8::synapse0x217f810() {
   return (neuron0x21594c0()*-0.058559);
}

double NNfunction-NN_3_8::synapse0x217f850() {
   return (neuron0x2159800()*-0.160972);
}

double NNfunction-NN_3_8::synapse0x217f890() {
   return (neuron0x2159b40()*-0.382192);
}

double NNfunction-NN_3_8::synapse0x217f320() {
   return (neuron0x2159e80()*-0.309282);
}

double NNfunction-NN_3_8::synapse0x217f360() {
   return (neuron0x215a3e0()*-0.100141);
}

double NNfunction-NN_3_8::synapse0x217f9e0() {
   return (neuron0x215a600()*-0.133987);
}

double NNfunction-NN_3_8::synapse0x217fa20() {
   return (neuron0x215a940()*0.0188676);
}

double NNfunction-NN_3_8::synapse0x217fa60() {
   return (neuron0x215ac80()*-0.0999484);
}

double NNfunction-NN_3_8::synapse0x217faa0() {
   return (neuron0x215afc0()*-0.0236284);
}

double NNfunction-NN_3_8::synapse0x217fae0() {
   return (neuron0x215b300()*0.118803);
}

double NNfunction-NN_3_8::synapse0x217fb20() {
   return (neuron0x215b640()*0.0620506);
}

double NNfunction-NN_3_8::synapse0x217fea0() {
   return (neuron0x2156a80()*-0.0617485);
}

double NNfunction-NN_3_8::synapse0x217fee0() {
   return (neuron0x2156dc0()*5.08782);
}

double NNfunction-NN_3_8::synapse0x217ff20() {
   return (neuron0x2157100()*1.46091);
}

double NNfunction-NN_3_8::synapse0x217ff60() {
   return (neuron0x2157440()*-0.0280847);
}

double NNfunction-NN_3_8::synapse0x217ffa0() {
   return (neuron0x2157780()*0.0311552);
}

double NNfunction-NN_3_8::synapse0x217ffe0() {
   return (neuron0x2157ac0()*0.0264114);
}

double NNfunction-NN_3_8::synapse0x2180020() {
   return (neuron0x2157e00()*-0.0989834);
}

double NNfunction-NN_3_8::synapse0x2180060() {
   return (neuron0x2158140()*0.0219168);
}

double NNfunction-NN_3_8::synapse0x21800a0() {
   return (neuron0x2158480()*0.0245198);
}

double NNfunction-NN_3_8::synapse0x21800e0() {
   return (neuron0x21587c0()*-0.0334164);
}

double NNfunction-NN_3_8::synapse0x2180120() {
   return (neuron0x2158b00()*-0.0287507);
}

double NNfunction-NN_3_8::synapse0x2180160() {
   return (neuron0x2158e40()*-0.299385);
}

double NNfunction-NN_3_8::synapse0x21801a0() {
   return (neuron0x2159180()*-0.124528);
}

double NNfunction-NN_3_8::synapse0x21801e0() {
   return (neuron0x21594c0()*0.00170444);
}

double NNfunction-NN_3_8::synapse0x2180220() {
   return (neuron0x2159800()*0.0176286);
}

double NNfunction-NN_3_8::synapse0x2180260() {
   return (neuron0x2159b40()*0.0408353);
}

double NNfunction-NN_3_8::synapse0x217fcf0() {
   return (neuron0x2159e80()*-0.00270272);
}

double NNfunction-NN_3_8::synapse0x217fd30() {
   return (neuron0x215a3e0()*-0.00369461);
}

double NNfunction-NN_3_8::synapse0x21803b0() {
   return (neuron0x215a600()*-0.0169848);
}

double NNfunction-NN_3_8::synapse0x21803f0() {
   return (neuron0x215a940()*0.0149668);
}

double NNfunction-NN_3_8::synapse0x2180430() {
   return (neuron0x215ac80()*-0.0445213);
}

double NNfunction-NN_3_8::synapse0x2180470() {
   return (neuron0x215afc0()*0.00905342);
}

double NNfunction-NN_3_8::synapse0x21804b0() {
   return (neuron0x215b300()*-0.0211185);
}

double NNfunction-NN_3_8::synapse0x21804f0() {
   return (neuron0x215b640()*1.18279);
}

double NNfunction-NN_3_8::synapse0x215ca90() {
   return (neuron0x215bae0()*0.347696);
}

double NNfunction-NN_3_8::synapse0x215cad0() {
   return (neuron0x215c3f0()*0.739559);
}

double NNfunction-NN_3_8::synapse0x215dfa0() {
   return (neuron0x215ced0()*-1.2333);
}

double NNfunction-NN_3_8::synapse0x215dfe0() {
   return (neuron0x1f16760()*-0.0757956);
}

double NNfunction-NN_3_8::synapse0x215e970() {
   return (neuron0x215dcf0()*-0.426397);
}

double NNfunction-NN_3_8::synapse0x215e9b0() {
   return (neuron0x215e6c0()*-0.751146);
}

double NNfunction-NN_3_8::synapse0x215f740() {
   return (neuron0x215f490()*-0.758217);
}

double NNfunction-NN_3_8::synapse0x215f780() {
   return (neuron0x215fe60()*1.56757);
}

double NNfunction-NN_3_8::synapse0x2160110() {
   return (neuron0x2160830()*-0.284292);
}

double NNfunction-NN_3_8::synapse0x2160150() {
   return (neuron0x2161310()*0.253188);
}

double NNfunction-NN_3_8::synapse0x2160ae0() {
   return (neuron0x2161ce0()*-0.181912);
}

double NNfunction-NN_3_8::synapse0x2160b20() {
   return (neuron0x215edc0()*1.1107);
}

double NNfunction-NN_3_8::synapse0x21615c0() {
   return (neuron0x2163890()*-3.13023);
}

double NNfunction-NN_3_8::synapse0x2161600() {
   return (neuron0x2164260()*0.841955);
}

double NNfunction-NN_3_8::synapse0x2161f90() {
   return (neuron0x2164c30()*-0.444173);
}

double NNfunction-NN_3_8::synapse0x2161fd0() {
   return (neuron0x2165600()*0.923304);
}

double NNfunction-NN_3_8::synapse0x215f070() {
   return (neuron0x2167410()*-0.190489);
}

double NNfunction-NN_3_8::synapse0x215f0b0() {
   return (neuron0x21676f0()*1.31336);
}

double NNfunction-NN_3_8::synapse0x2163b40() {
   return (neuron0x21680c0()*0.33233);
}

double NNfunction-NN_3_8::synapse0x2163b80() {
   return (neuron0x2168a90()*-0.225814);
}

double NNfunction-NN_3_8::synapse0x2164510() {
   return (neuron0x2169460()*-0.384156);
}

double NNfunction-NN_3_8::synapse0x2164550() {
   return (neuron0x2169e30()*-0.024589);
}

double NNfunction-NN_3_8::synapse0x2164ee0() {
   return (neuron0x2162980()*-2.89941);
}

double NNfunction-NN_3_8::synapse0x2164f20() {
   return (neuron0x2163350()*0.525239);
}

double NNfunction-NN_3_8::synapse0x21658b0() {
   return (neuron0x216cbc0()*0.13227);
}

double NNfunction-NN_3_8::synapse0x21658f0() {
   return (neuron0x216d590()*0.913943);
}

double NNfunction-NN_3_8::synapse0x2159a20() {
   return (neuron0x216df60()*0.129924);
}

double NNfunction-NN_3_8::synapse0x2159a60() {
   return (neuron0x216e930()*0.068511);
}

double NNfunction-NN_3_8::synapse0x21679a0() {
   return (neuron0x216f300()*-1.33127);
}

double NNfunction-NN_3_8::synapse0x21679e0() {
   return (neuron0x216fcd0()*-0.111347);
}

double NNfunction-NN_3_8::synapse0x2168370() {
   return (neuron0x21706a0()*-0.192407);
}

double NNfunction-NN_3_8::synapse0x21683b0() {
   return (neuron0x2171070()*0.975276);
}

double NNfunction-NN_3_8::synapse0x2168d40() {
   return (neuron0x2167100()*0.602663);
}

double NNfunction-NN_3_8::synapse0x2168d80() {
   return (neuron0x2173c50()*1.43401);
}

double NNfunction-NN_3_8::synapse0x2169710() {
   return (neuron0x2174620()*0.309141);
}

double NNfunction-NN_3_8::synapse0x2169750() {
   return (neuron0x2174ff0()*-0.01045);
}

double NNfunction-NN_3_8::synapse0x216a0e0() {
   return (neuron0x21759c0()*0.0427501);
}

double NNfunction-NN_3_8::synapse0x216a120() {
   return (neuron0x2176390()*0.785041);
}

double NNfunction-NN_3_8::synapse0x2162c30() {
   return (neuron0x2176d60()*0.876774);
}

double NNfunction-NN_3_8::synapse0x2162c70() {
   return (neuron0x2177730()*4.35347e-05);
}

double NNfunction-NN_3_8::synapse0x216c4e0() {
   return (neuron0x2178100()*0.0668021);
}

double NNfunction-NN_3_8::synapse0x216c520() {
   return (neuron0x2178ce0()*0.405172);
}

double NNfunction-NN_3_8::synapse0x216ce70() {
   return (neuron0x21796b0()*-0.294032);
}

double NNfunction-NN_3_8::synapse0x216ceb0() {
   return (neuron0x216a530()*0.553901);
}

double NNfunction-NN_3_8::synapse0x216d840() {
   return (neuron0x216af00()*-0.268783);
}

double NNfunction-NN_3_8::synapse0x216d880() {
   return (neuron0x216b8d0()*-0.491003);
}

double NNfunction-NN_3_8::synapse0x216e210() {
   return (neuron0x217df10()*0.907648);
}

double NNfunction-NN_3_8::synapse0x216e250() {
   return (neuron0x217e7c0()*0.121325);
}

double NNfunction-NN_3_8::synapse0x216ebe0() {
   return (neuron0x217f190()*-0.169294);
}

double NNfunction-NN_3_8::synapse0x216ec20() {
   return (neuron0x217fb60()*0.330944);
}

double NNfunction-NN_3_8::synapse0x2171320() {
   return (neuron0x215bae0()*0.0425399);
}

double NNfunction-NN_3_8::synapse0x2171360() {
   return (neuron0x215c3f0()*-0.39215);
}

double NNfunction-NN_3_8::synapse0x21668e0() {
   return (neuron0x215ced0()*-2.16495);
}

double NNfunction-NN_3_8::synapse0x2166920() {
   return (neuron0x1f16760()*0.0355698);
}

double NNfunction-NN_3_8::synapse0x2173f00() {
   return (neuron0x215dcf0()*0.265813);
}

double NNfunction-NN_3_8::synapse0x2173f40() {
   return (neuron0x215e6c0()*0.214379);
}

double NNfunction-NN_3_8::synapse0x21748d0() {
   return (neuron0x215f490()*-0.106066);
}

double NNfunction-NN_3_8::synapse0x2174910() {
   return (neuron0x215fe60()*0.783758);
}

double NNfunction-NN_3_8::synapse0x21752a0() {
   return (neuron0x2160830()*0.0100619);
}

double NNfunction-NN_3_8::synapse0x21752e0() {
   return (neuron0x2161310()*0.0141423);
}

double NNfunction-NN_3_8::synapse0x2175c70() {
   return (neuron0x2161ce0()*-0.0313354);
}

double NNfunction-NN_3_8::synapse0x2175cb0() {
   return (neuron0x215edc0()*-0.801988);
}

double NNfunction-NN_3_8::synapse0x2176640() {
   return (neuron0x2163890()*-0.0341369);
}

double NNfunction-NN_3_8::synapse0x2176680() {
   return (neuron0x2164260()*0.497127);
}

double NNfunction-NN_3_8::synapse0x2177010() {
   return (neuron0x2164c30()*-1.3268);
}

double NNfunction-NN_3_8::synapse0x2177050() {
   return (neuron0x2165600()*-0.108113);
}

double NNfunction-NN_3_8::synapse0x21779e0() {
   return (neuron0x2167410()*0.556681);
}

double NNfunction-NN_3_8::synapse0x2177a20() {
   return (neuron0x21676f0()*0.122633);
}

double NNfunction-NN_3_8::synapse0x21783b0() {
   return (neuron0x21680c0()*0.277425);
}

double NNfunction-NN_3_8::synapse0x21783f0() {
   return (neuron0x2168a90()*0.154876);
}

double NNfunction-NN_3_8::synapse0x2178f90() {
   return (neuron0x2169460()*1.78494);
}

double NNfunction-NN_3_8::synapse0x2178fd0() {
   return (neuron0x2169e30()*0.0509915);
}

double NNfunction-NN_3_8::synapse0x2179960() {
   return (neuron0x2162980()*-0.186305);
}

double NNfunction-NN_3_8::synapse0x21799a0() {
   return (neuron0x2163350()*0.148808);
}

double NNfunction-NN_3_8::synapse0x216a7e0() {
   return (neuron0x216cbc0()*0.234746);
}

double NNfunction-NN_3_8::synapse0x216a820() {
   return (neuron0x216d590()*-0.0509533);
}

double NNfunction-NN_3_8::synapse0x216b1b0() {
   return (neuron0x216df60()*-0.0785223);
}

double NNfunction-NN_3_8::synapse0x216b1f0() {
   return (neuron0x216e930()*-0.0826889);
}

double NNfunction-NN_3_8::synapse0x216bb80() {
   return (neuron0x216f300()*-1.1769);
}

double NNfunction-NN_3_8::synapse0x216bbc0() {
   return (neuron0x216fcd0()*-0.443334);
}

double NNfunction-NN_3_8::synapse0x217e0a0() {
   return (neuron0x21706a0()*-0.130812);
}

double NNfunction-NN_3_8::synapse0x217e0e0() {
   return (neuron0x2171070()*-0.658317);
}

double NNfunction-NN_3_8::synapse0x217ea70() {
   return (neuron0x2167100()*1.22156);
}

double NNfunction-NN_3_8::synapse0x217eab0() {
   return (neuron0x2173c50()*1.68092);
}

double NNfunction-NN_3_8::synapse0x217f440() {
   return (neuron0x2174620()*0.0231143);
}

double NNfunction-NN_3_8::synapse0x217f480() {
   return (neuron0x2174ff0()*0.141896);
}

double NNfunction-NN_3_8::synapse0x217fe10() {
   return (neuron0x21759c0()*0.117549);
}

double NNfunction-NN_3_8::synapse0x217fe50() {
   return (neuron0x2176390()*-0.221353);
}

double NNfunction-NN_3_8::synapse0x215bd00() {
   return (neuron0x2176d60()*0.0552066);
}

double NNfunction-NN_3_8::synapse0x215bd40() {
   return (neuron0x2177730()*0.0875155);
}

double NNfunction-NN_3_8::synapse0x216f5b0() {
   return (neuron0x2178100()*0.0238637);
}

double NNfunction-NN_3_8::synapse0x216f5f0() {
   return (neuron0x2178ce0()*-0.897519);
}

double NNfunction-NN_3_8::synapse0x2180530() {
   return (neuron0x21796b0()*-0.00553227);
}

double NNfunction-NN_3_8::synapse0x2180570() {
   return (neuron0x216a530()*-0.202138);
}

double NNfunction-NN_3_8::synapse0x21805b0() {
   return (neuron0x216af00()*-0.0157982);
}

double NNfunction-NN_3_8::synapse0x21805f0() {
   return (neuron0x216b8d0()*-1.01154);
}

double NNfunction-NN_3_8::synapse0x21874a0() {
   return (neuron0x217df10()*0.0705772);
}

double NNfunction-NN_3_8::synapse0x21874e0() {
   return (neuron0x217e7c0()*0.0726734);
}

double NNfunction-NN_3_8::synapse0x2187520() {
   return (neuron0x217f190()*0.0543715);
}

double NNfunction-NN_3_8::synapse0x2187560() {
   return (neuron0x217fb60()*0.134782);
}

double NNfunction-NN_3_8::synapse0x21878e0() {
   return (neuron0x215bae0()*-0.0971722);
}

double NNfunction-NN_3_8::synapse0x2187920() {
   return (neuron0x215c3f0()*0.999382);
}

double NNfunction-NN_3_8::synapse0x2187960() {
   return (neuron0x215ced0()*-1.82204);
}

double NNfunction-NN_3_8::synapse0x21879a0() {
   return (neuron0x1f16760()*-0.207156);
}

double NNfunction-NN_3_8::synapse0x21879e0() {
   return (neuron0x215dcf0()*0.170691);
}

double NNfunction-NN_3_8::synapse0x2187a20() {
   return (neuron0x215e6c0()*-1.99821);
}

double NNfunction-NN_3_8::synapse0x2187a60() {
   return (neuron0x215f490()*-0.82001);
}

double NNfunction-NN_3_8::synapse0x2187aa0() {
   return (neuron0x215fe60()*0.549856);
}

double NNfunction-NN_3_8::synapse0x2187ae0() {
   return (neuron0x2160830()*-0.255822);
}

double NNfunction-NN_3_8::synapse0x2187b20() {
   return (neuron0x2161310()*1.13267);
}

double NNfunction-NN_3_8::synapse0x2187b60() {
   return (neuron0x2161ce0()*0.131531);
}

double NNfunction-NN_3_8::synapse0x2187ba0() {
   return (neuron0x215edc0()*1.20055);
}

double NNfunction-NN_3_8::synapse0x2187be0() {
   return (neuron0x2163890()*-0.510729);
}

double NNfunction-NN_3_8::synapse0x2187c20() {
   return (neuron0x2164260()*2.10816);
}

double NNfunction-NN_3_8::synapse0x2187c60() {
   return (neuron0x2164c30()*-0.807765);
}

double NNfunction-NN_3_8::synapse0x2187ca0() {
   return (neuron0x2165600()*0.159106);
}

double NNfunction-NN_3_8::synapse0x2187730() {
   return (neuron0x2167410()*1.79819);
}

double NNfunction-NN_3_8::synapse0x2187770() {
   return (neuron0x21676f0()*-1.2919);
}

double NNfunction-NN_3_8::synapse0x2187df0() {
   return (neuron0x21680c0()*-0.785862);
}

double NNfunction-NN_3_8::synapse0x2187e30() {
   return (neuron0x2168a90()*0.203323);
}

double NNfunction-NN_3_8::synapse0x2187e70() {
   return (neuron0x2169460()*-1.39493);
}

double NNfunction-NN_3_8::synapse0x2187eb0() {
   return (neuron0x2169e30()*0.669233);
}

double NNfunction-NN_3_8::synapse0x2187ef0() {
   return (neuron0x2162980()*0.257047);
}

double NNfunction-NN_3_8::synapse0x2187f30() {
   return (neuron0x2163350()*0.753417);
}

double NNfunction-NN_3_8::synapse0x2187f70() {
   return (neuron0x216cbc0()*-0.390213);
}

double NNfunction-NN_3_8::synapse0x2187fb0() {
   return (neuron0x216d590()*-0.254652);
}

double NNfunction-NN_3_8::synapse0x2187ff0() {
   return (neuron0x216df60()*0.437712);
}

double NNfunction-NN_3_8::synapse0x2188030() {
   return (neuron0x216e930()*0.414521);
}

double NNfunction-NN_3_8::synapse0x2188070() {
   return (neuron0x216f300()*-1.78886);
}

double NNfunction-NN_3_8::synapse0x21880b0() {
   return (neuron0x216fcd0()*-0.0379794);
}

double NNfunction-NN_3_8::synapse0x21880f0() {
   return (neuron0x21706a0()*0.821016);
}

double NNfunction-NN_3_8::synapse0x2188130() {
   return (neuron0x2171070()*-0.92151);
}

double NNfunction-NN_3_8::synapse0x2187ce0() {
   return (neuron0x2167100()*2.21641);
}

double NNfunction-NN_3_8::synapse0x2187d20() {
   return (neuron0x2173c50()*0.732494);
}

double NNfunction-NN_3_8::synapse0x2187d60() {
   return (neuron0x2174620()*0.0038983);
}

double NNfunction-NN_3_8::synapse0x2187da0() {
   return (neuron0x2174ff0()*1.51104);
}

double NNfunction-NN_3_8::synapse0x2188380() {
   return (neuron0x21759c0()*-0.628864);
}

double NNfunction-NN_3_8::synapse0x21883c0() {
   return (neuron0x2176390()*0.16863);
}

double NNfunction-NN_3_8::synapse0x2188400() {
   return (neuron0x2176d60()*0.650687);
}

double NNfunction-NN_3_8::synapse0x2188440() {
   return (neuron0x2177730()*0.690642);
}

double NNfunction-NN_3_8::synapse0x2188480() {
   return (neuron0x2178100()*0.578991);
}

double NNfunction-NN_3_8::synapse0x21884c0() {
   return (neuron0x2178ce0()*-1.04887);
}

double NNfunction-NN_3_8::synapse0x2188500() {
   return (neuron0x21796b0()*-0.21392);
}

double NNfunction-NN_3_8::synapse0x2188540() {
   return (neuron0x216a530()*0.646067);
}

double NNfunction-NN_3_8::synapse0x2188580() {
   return (neuron0x216af00()*-0.255213);
}

double NNfunction-NN_3_8::synapse0x21885c0() {
   return (neuron0x216b8d0()*-1.3918);
}

double NNfunction-NN_3_8::synapse0x2188600() {
   return (neuron0x217df10()*0.423737);
}

double NNfunction-NN_3_8::synapse0x2188640() {
   return (neuron0x217e7c0()*0.132409);
}

double NNfunction-NN_3_8::synapse0x2188680() {
   return (neuron0x217f190()*-0.349036);
}

double NNfunction-NN_3_8::synapse0x21886c0() {
   return (neuron0x217fb60()*0.107059);
}

double NNfunction-NN_3_8::synapse0x2188a40() {
   return (neuron0x215bae0()*-0.256639);
}

double NNfunction-NN_3_8::synapse0x2188a80() {
   return (neuron0x215c3f0()*1.05808);
}

double NNfunction-NN_3_8::synapse0x2188ac0() {
   return (neuron0x215ced0()*0.238787);
}

double NNfunction-NN_3_8::synapse0x2188b00() {
   return (neuron0x1f16760()*0.263157);
}

double NNfunction-NN_3_8::synapse0x2188b40() {
   return (neuron0x215dcf0()*0.577411);
}

double NNfunction-NN_3_8::synapse0x2188b80() {
   return (neuron0x215e6c0()*-0.43304);
}

double NNfunction-NN_3_8::synapse0x2188bc0() {
   return (neuron0x215f490()*0.183669);
}

double NNfunction-NN_3_8::synapse0x2188c00() {
   return (neuron0x215fe60()*1.53388);
}

double NNfunction-NN_3_8::synapse0x2188c40() {
   return (neuron0x2160830()*0.129156);
}

double NNfunction-NN_3_8::synapse0x2188c80() {
   return (neuron0x2161310()*0.676175);
}

double NNfunction-NN_3_8::synapse0x2188cc0() {
   return (neuron0x2161ce0()*0.129539);
}

double NNfunction-NN_3_8::synapse0x2188d00() {
   return (neuron0x215edc0()*3.03051);
}

double NNfunction-NN_3_8::synapse0x2188d40() {
   return (neuron0x2163890()*-0.124216);
}

double NNfunction-NN_3_8::synapse0x2188d80() {
   return (neuron0x2164260()*-0.854647);
}

double NNfunction-NN_3_8::synapse0x2188dc0() {
   return (neuron0x2164c30()*0.369465);
}

double NNfunction-NN_3_8::synapse0x2188e00() {
   return (neuron0x2165600()*-0.914327);
}

double NNfunction-NN_3_8::synapse0x2188890() {
   return (neuron0x2167410()*0.326387);
}

double NNfunction-NN_3_8::synapse0x21888d0() {
   return (neuron0x21676f0()*-0.425168);
}

double NNfunction-NN_3_8::synapse0x2188f50() {
   return (neuron0x21680c0()*-0.253359);
}

double NNfunction-NN_3_8::synapse0x2188f90() {
   return (neuron0x2168a90()*0.96873);
}

double NNfunction-NN_3_8::synapse0x2188fd0() {
   return (neuron0x2169460()*0.339394);
}

double NNfunction-NN_3_8::synapse0x2189010() {
   return (neuron0x2169e30()*0.120745);
}

double NNfunction-NN_3_8::synapse0x2189050() {
   return (neuron0x2162980()*-0.832401);
}

double NNfunction-NN_3_8::synapse0x2189090() {
   return (neuron0x2163350()*0.175331);
}

double NNfunction-NN_3_8::synapse0x21890d0() {
   return (neuron0x216cbc0()*-0.427907);
}

double NNfunction-NN_3_8::synapse0x2189110() {
   return (neuron0x216d590()*0.569771);
}

double NNfunction-NN_3_8::synapse0x2189150() {
   return (neuron0x216df60()*-0.058837);
}

double NNfunction-NN_3_8::synapse0x2189190() {
   return (neuron0x216e930()*0.0763559);
}

double NNfunction-NN_3_8::synapse0x21891d0() {
   return (neuron0x216f300()*-0.187473);
}

double NNfunction-NN_3_8::synapse0x2189210() {
   return (neuron0x216fcd0()*-1.19757);
}

double NNfunction-NN_3_8::synapse0x2189250() {
   return (neuron0x21706a0()*-1.48138);
}

double NNfunction-NN_3_8::synapse0x2189290() {
   return (neuron0x2171070()*-0.221948);
}

double NNfunction-NN_3_8::synapse0x2188e40() {
   return (neuron0x2167100()*0.542622);
}

double NNfunction-NN_3_8::synapse0x2188e80() {
   return (neuron0x2173c50()*-0.302953);
}

double NNfunction-NN_3_8::synapse0x2188ec0() {
   return (neuron0x2174620()*-0.14023);
}

double NNfunction-NN_3_8::synapse0x2188f00() {
   return (neuron0x2174ff0()*-0.401279);
}

double NNfunction-NN_3_8::synapse0x21894e0() {
   return (neuron0x21759c0()*0.25357);
}

double NNfunction-NN_3_8::synapse0x2189520() {
   return (neuron0x2176390()*-1.1036);
}

double NNfunction-NN_3_8::synapse0x2189560() {
   return (neuron0x2176d60()*0.705843);
}

double NNfunction-NN_3_8::synapse0x21895a0() {
   return (neuron0x2177730()*0.241153);
}

double NNfunction-NN_3_8::synapse0x21895e0() {
   return (neuron0x2178100()*0.710453);
}

double NNfunction-NN_3_8::synapse0x2189620() {
   return (neuron0x2178ce0()*-1.91967);
}

double NNfunction-NN_3_8::synapse0x2189660() {
   return (neuron0x21796b0()*0.140913);
}

double NNfunction-NN_3_8::synapse0x21896a0() {
   return (neuron0x216a530()*0.898368);
}

double NNfunction-NN_3_8::synapse0x21896e0() {
   return (neuron0x216af00()*0.530194);
}

double NNfunction-NN_3_8::synapse0x2189720() {
   return (neuron0x216b8d0()*0.402875);
}

double NNfunction-NN_3_8::synapse0x2189760() {
   return (neuron0x217df10()*0.867639);
}

double NNfunction-NN_3_8::synapse0x21897a0() {
   return (neuron0x217e7c0()*-0.737785);
}

double NNfunction-NN_3_8::synapse0x21897e0() {
   return (neuron0x217f190()*0.191554);
}

double NNfunction-NN_3_8::synapse0x2189820() {
   return (neuron0x217fb60()*-0.737687);
}

double NNfunction-NN_3_8::synapse0x2189ba0() {
   return (neuron0x215bae0()*-0.150222);
}

double NNfunction-NN_3_8::synapse0x2189be0() {
   return (neuron0x215c3f0()*-0.0452418);
}

double NNfunction-NN_3_8::synapse0x2189c20() {
   return (neuron0x215ced0()*-0.514691);
}

double NNfunction-NN_3_8::synapse0x2189c60() {
   return (neuron0x1f16760()*0.376971);
}

double NNfunction-NN_3_8::synapse0x2189ca0() {
   return (neuron0x215dcf0()*0.572901);
}

double NNfunction-NN_3_8::synapse0x2189ce0() {
   return (neuron0x215e6c0()*-1.13213);
}

double NNfunction-NN_3_8::synapse0x2189d20() {
   return (neuron0x215f490()*-0.366132);
}

double NNfunction-NN_3_8::synapse0x2189d60() {
   return (neuron0x215fe60()*0.130575);
}

double NNfunction-NN_3_8::synapse0x2189da0() {
   return (neuron0x2160830()*0.101813);
}

double NNfunction-NN_3_8::synapse0x2189de0() {
   return (neuron0x2161310()*-2.35596);
}

double NNfunction-NN_3_8::synapse0x2189e20() {
   return (neuron0x2161ce0()*0.00915082);
}

double NNfunction-NN_3_8::synapse0x2189e60() {
   return (neuron0x215edc0()*2.90775);
}

double NNfunction-NN_3_8::synapse0x2189ea0() {
   return (neuron0x2163890()*-5.2687);
}

double NNfunction-NN_3_8::synapse0x2189ee0() {
   return (neuron0x2164260()*-0.646473);
}

double NNfunction-NN_3_8::synapse0x2189f20() {
   return (neuron0x2164c30()*-0.259092);
}

double NNfunction-NN_3_8::synapse0x2189f60() {
   return (neuron0x2165600()*-0.934121);
}

double NNfunction-NN_3_8::synapse0x21899f0() {
   return (neuron0x2167410()*-0.0644946);
}

double NNfunction-NN_3_8::synapse0x2189a30() {
   return (neuron0x21676f0()*0.0491574);
}

double NNfunction-NN_3_8::synapse0x218a0b0() {
   return (neuron0x21680c0()*0.374279);
}

double NNfunction-NN_3_8::synapse0x218a0f0() {
   return (neuron0x2168a90()*0.782024);
}

double NNfunction-NN_3_8::synapse0x218a130() {
   return (neuron0x2169460()*0.714651);
}

double NNfunction-NN_3_8::synapse0x218a170() {
   return (neuron0x2169e30()*-0.447149);
}

double NNfunction-NN_3_8::synapse0x218a1b0() {
   return (neuron0x2162980()*-6.79266);
}

double NNfunction-NN_3_8::synapse0x218a1f0() {
   return (neuron0x2163350()*1.30338);
}

double NNfunction-NN_3_8::synapse0x218a230() {
   return (neuron0x216cbc0()*0.29597);
}

double NNfunction-NN_3_8::synapse0x218a270() {
   return (neuron0x216d590()*1.44259);
}

double NNfunction-NN_3_8::synapse0x218a2b0() {
   return (neuron0x216df60()*-0.0124216);
}

double NNfunction-NN_3_8::synapse0x218a2f0() {
   return (neuron0x216e930()*-0.0444817);
}

double NNfunction-NN_3_8::synapse0x218a330() {
   return (neuron0x216f300()*2.68275);
}

double NNfunction-NN_3_8::synapse0x218a370() {
   return (neuron0x216fcd0()*0.232168);
}

double NNfunction-NN_3_8::synapse0x218a3b0() {
   return (neuron0x21706a0()*1.47496);
}

double NNfunction-NN_3_8::synapse0x218a3f0() {
   return (neuron0x2171070()*0.55772);
}

double NNfunction-NN_3_8::synapse0x2189fa0() {
   return (neuron0x2167100()*0.39861);
}

double NNfunction-NN_3_8::synapse0x2189fe0() {
   return (neuron0x2173c50()*0.175739);
}

double NNfunction-NN_3_8::synapse0x218a020() {
   return (neuron0x2174620()*-0.00493745);
}

double NNfunction-NN_3_8::synapse0x218a060() {
   return (neuron0x2174ff0()*-1.29532);
}

double NNfunction-NN_3_8::synapse0x218a640() {
   return (neuron0x21759c0()*-2.04422);
}

double NNfunction-NN_3_8::synapse0x218a680() {
   return (neuron0x2176390()*-0.934755);
}

double NNfunction-NN_3_8::synapse0x218a6c0() {
   return (neuron0x2176d60()*1.24502);
}

double NNfunction-NN_3_8::synapse0x218a700() {
   return (neuron0x2177730()*-0.728152);
}

double NNfunction-NN_3_8::synapse0x218a740() {
   return (neuron0x2178100()*-0.799517);
}

double NNfunction-NN_3_8::synapse0x218a780() {
   return (neuron0x2178ce0()*1.55117);
}

double NNfunction-NN_3_8::synapse0x218a7c0() {
   return (neuron0x21796b0()*0.114704);
}

double NNfunction-NN_3_8::synapse0x218a800() {
   return (neuron0x216a530()*1.90668);
}

double NNfunction-NN_3_8::synapse0x218a840() {
   return (neuron0x216af00()*1.196);
}

double NNfunction-NN_3_8::synapse0x218a880() {
   return (neuron0x216b8d0()*0.960975);
}

double NNfunction-NN_3_8::synapse0x218a8c0() {
   return (neuron0x217df10()*1.73254);
}

double NNfunction-NN_3_8::synapse0x218a900() {
   return (neuron0x217e7c0()*2.00664);
}

double NNfunction-NN_3_8::synapse0x218a940() {
   return (neuron0x217f190()*0.228295);
}

double NNfunction-NN_3_8::synapse0x218a980() {
   return (neuron0x217fb60()*-0.989897);
}

double NNfunction-NN_3_8::synapse0x215baa0() {
   return (neuron0x2186d60()*2.95591);
}

double NNfunction-NN_3_8::synapse0x218abe0() {
   return (neuron0x2187100()*-6.05223);
}

double NNfunction-NN_3_8::synapse0x218ac20() {
   return (neuron0x21875a0()*-1.87744);
}

double NNfunction-NN_3_8::synapse0x218ac60() {
   return (neuron0x2188700()*7.42886);
}

double NNfunction-NN_3_8::synapse0x218aca0() {
   return (neuron0x2189860()*-4.3624);
}

