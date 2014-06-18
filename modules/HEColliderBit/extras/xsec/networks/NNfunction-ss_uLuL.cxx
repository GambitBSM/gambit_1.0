#include "NNfunction-ss_uLuL.h"
#include <cmath>

double NNfunction-ss_uLuL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.0463)/15.0609;
   input1 = (in1 - 91.9778)/637.891;
   input2 = (in2 - 371.641)/410.496;
   input3 = (in3 - 480.039)/662.739;
   input4 = (in4 - 852.034)/626.542;
   input5 = (in5 - 767.363)/614.877;
   input6 = (in6 - 771.827)/617.509;
   input7 = (in7 - 754.246)/606.274;
   input8 = (in8 - 754.197)/641.102;
   input9 = (in9 - 745.618)/628.533;
   input10 = (in10 - 721.259)/634.278;
   input11 = (in11 - 791.484)/475.989;
   input12 = (in12 - 905.89)/596.046;
   input13 = (in13 - 721.994)/425.379;
   input14 = (in14 - 891.102)/566.501;
   input15 = (in15 - 892.623)/567.103;
   input16 = (in16 - 612.473)/393.949;
   input17 = (in17 - 905.05)/602.345;
   input18 = (in18 - 900.709)/600.868;
   input19 = (in19 - 879.861)/578.725;
   input20 = (in20 - -361.771)/497.889;
   input21 = (in21 - -477.22)/987.054;
   input22 = (in22 - -23.5025)/940.701;
   input23 = (in23 - 80.614)/565.788;
   switch(index) {
     case 0:
         return neuron0x219c330();
     default:
         return 0.;
   }
}

double NNfunction-ss_uLuL::Value(int index, double* input) {
   input0 = (input[0] - 23.0463)/15.0609;
   input1 = (input[1] - 91.9778)/637.891;
   input2 = (input[2] - 371.641)/410.496;
   input3 = (input[3] - 480.039)/662.739;
   input4 = (input[4] - 852.034)/626.542;
   input5 = (input[5] - 767.363)/614.877;
   input6 = (input[6] - 771.827)/617.509;
   input7 = (input[7] - 754.246)/606.274;
   input8 = (input[8] - 754.197)/641.102;
   input9 = (input[9] - 745.618)/628.533;
   input10 = (input[10] - 721.259)/634.278;
   input11 = (input[11] - 791.484)/475.989;
   input12 = (input[12] - 905.89)/596.046;
   input13 = (input[13] - 721.994)/425.379;
   input14 = (input[14] - 891.102)/566.501;
   input15 = (input[15] - 892.623)/567.103;
   input16 = (input[16] - 612.473)/393.949;
   input17 = (input[17] - 905.05)/602.345;
   input18 = (input[18] - 900.709)/600.868;
   input19 = (input[19] - 879.861)/578.725;
   input20 = (input[20] - -361.771)/497.889;
   input21 = (input[21] - -477.22)/987.054;
   input22 = (input[22] - -23.5025)/940.701;
   input23 = (input[23] - 80.614)/565.788;
   switch(index) {
     case 0:
         return neuron0x219c330();
     default:
         return 0.;
   }
}

double NNfunction-ss_uLuL::neuron0x21684f0() {
   return input0;
}

double NNfunction-ss_uLuL::neuron0x21687a0() {
   return input1;
}

double NNfunction-ss_uLuL::neuron0x2168ae0() {
   return input2;
}

double NNfunction-ss_uLuL::neuron0x2168e20() {
   return input3;
}

double NNfunction-ss_uLuL::neuron0x2169160() {
   return input4;
}

double NNfunction-ss_uLuL::neuron0x21694a0() {
   return input5;
}

double NNfunction-ss_uLuL::neuron0x21697e0() {
   return input6;
}

double NNfunction-ss_uLuL::neuron0x2169b20() {
   return input7;
}

double NNfunction-ss_uLuL::neuron0x2169e60() {
   return input8;
}

double NNfunction-ss_uLuL::neuron0x216a1a0() {
   return input9;
}

double NNfunction-ss_uLuL::neuron0x216a4e0() {
   return input10;
}

double NNfunction-ss_uLuL::neuron0x216a820() {
   return input11;
}

double NNfunction-ss_uLuL::neuron0x216ab60() {
   return input12;
}

double NNfunction-ss_uLuL::neuron0x216aea0() {
   return input13;
}

double NNfunction-ss_uLuL::neuron0x216b1e0() {
   return input14;
}

double NNfunction-ss_uLuL::neuron0x216b520() {
   return input15;
}

double NNfunction-ss_uLuL::neuron0x216b860() {
   return input16;
}

double NNfunction-ss_uLuL::neuron0x216bdc0() {
   return input17;
}

double NNfunction-ss_uLuL::neuron0x216bfe0() {
   return input18;
}

double NNfunction-ss_uLuL::neuron0x216c320() {
   return input19;
}

double NNfunction-ss_uLuL::neuron0x216c660() {
   return input20;
}

double NNfunction-ss_uLuL::neuron0x216c9a0() {
   return input21;
}

double NNfunction-ss_uLuL::neuron0x216cce0() {
   return input22;
}

double NNfunction-ss_uLuL::neuron0x216d020() {
   return input23;
}

double NNfunction-ss_uLuL::input0x216d490() {
   double input = 1.27361;
   input += synapse0x2168470();
   input += synapse0x21684b0();
   input += synapse0x216d740();
   input += synapse0x216d780();
   input += synapse0x216d7c0();
   input += synapse0x216d800();
   input += synapse0x216d840();
   input += synapse0x216d880();
   input += synapse0x216d8c0();
   input += synapse0x216d900();
   input += synapse0x216d940();
   input += synapse0x216d980();
   input += synapse0x216d9c0();
   input += synapse0x216da00();
   input += synapse0x216da40();
   input += synapse0x216da80();
   input += synapse0x21683e0();
   input += synapse0x2168420();
   input += synapse0x1f235d0();
   input += synapse0x1f23610();
   input += synapse0x216dce0();
   input += synapse0x216dd20();
   input += synapse0x216dd60();
   input += synapse0x216dda0();
   return input;
}

double NNfunction-ss_uLuL::neuron0x216d490() {
   double input = input0x216d490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x216dde0() {
   double input = -0.7186;
   input += synapse0x216e120();
   input += synapse0x216e160();
   input += synapse0x216e1a0();
   input += synapse0x216e1e0();
   input += synapse0x216e220();
   input += synapse0x216e260();
   input += synapse0x216e2a0();
   input += synapse0x216e2e0();
   input += synapse0x216e320();
   input += synapse0x216dbd0();
   input += synapse0x216dc10();
   input += synapse0x216dc50();
   input += synapse0x216dc90();
   input += synapse0x216e570();
   input += synapse0x216e5b0();
   input += synapse0x216e5f0();
   input += synapse0x216df70();
   input += synapse0x216dfb0();
   input += synapse0x216e740();
   input += synapse0x216e780();
   input += synapse0x216e7c0();
   input += synapse0x216e800();
   input += synapse0x216e840();
   input += synapse0x216e880();
   return input;
}

double NNfunction-ss_uLuL::neuron0x216dde0() {
   double input = input0x216dde0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x216e8c0() {
   double input = -0.488689;
   input += synapse0x216ec00();
   input += synapse0x216ec40();
   input += synapse0x216ec80();
   input += synapse0x216ecc0();
   input += synapse0x216ed00();
   input += synapse0x216ed40();
   input += synapse0x216ed80();
   input += synapse0x216edc0();
   input += synapse0x216ee00();
   input += synapse0x216ee40();
   input += synapse0x216ee80();
   input += synapse0x216eec0();
   input += synapse0x216ef00();
   input += synapse0x216ef40();
   input += synapse0x216ef80();
   input += synapse0x216efc0();
   input += synapse0x216ea50();
   input += synapse0x216ea90();
   input += synapse0x2157560();
   input += synapse0x1f314b0();
   input += synapse0x1f314f0();
   input += synapse0x204ca00();
   input += synapse0x204ca40();
   input += synapse0x2168250();
   return input;
}

double NNfunction-ss_uLuL::neuron0x216e8c0() {
   double input = input0x216e8c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x1f31c10() {
   double input = -1.91689;
   input += synapse0x1f31da0();
   input += synapse0x216e480();
   input += synapse0x216e4c0();
   input += synapse0x216e500();
   input += synapse0x216f110();
   input += synapse0x216f150();
   input += synapse0x216f190();
   input += synapse0x216f1d0();
   input += synapse0x216f210();
   input += synapse0x216f250();
   input += synapse0x216f290();
   input += synapse0x216f2d0();
   input += synapse0x216f310();
   input += synapse0x216f350();
   input += synapse0x216f390();
   input += synapse0x216f3d0();
   input += synapse0x2168290();
   input += synapse0x21682d0();
   input += synapse0x2168310();
   input += synapse0x216f520();
   input += synapse0x216f560();
   input += synapse0x216f5a0();
   input += synapse0x216f5e0();
   input += synapse0x216f620();
   return input;
}

double NNfunction-ss_uLuL::neuron0x1f31c10() {
   double input = input0x1f31c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x216f660() {
   double input = 1.5811;
   input += synapse0x216f9a0();
   input += synapse0x216f9e0();
   input += synapse0x216fa20();
   input += synapse0x216fa60();
   input += synapse0x216faa0();
   input += synapse0x216fae0();
   input += synapse0x216fb20();
   input += synapse0x216fb60();
   input += synapse0x216fba0();
   input += synapse0x216fbe0();
   input += synapse0x216fc20();
   input += synapse0x216fc60();
   input += synapse0x216fca0();
   input += synapse0x216fce0();
   input += synapse0x216fd20();
   input += synapse0x216fd60();
   input += synapse0x216f7f0();
   input += synapse0x216f830();
   input += synapse0x216feb0();
   input += synapse0x216fef0();
   input += synapse0x216ff30();
   input += synapse0x216ff70();
   input += synapse0x216ffb0();
   input += synapse0x216fff0();
   return input;
}

double NNfunction-ss_uLuL::neuron0x216f660() {
   double input = input0x216f660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x2170030() {
   double input = -2.02056;
   input += synapse0x2170370();
   input += synapse0x21703b0();
   input += synapse0x21703f0();
   input += synapse0x2170430();
   input += synapse0x2170470();
   input += synapse0x21704b0();
   input += synapse0x21704f0();
   input += synapse0x2170530();
   input += synapse0x2170570();
   input += synapse0x1f31800();
   input += synapse0x1f31840();
   input += synapse0x1f31880();
   input += synapse0x1f318c0();
   input += synapse0x1f31900();
   input += synapse0x1f31940();
   input += synapse0x1f31980();
   input += synapse0x21701c0();
   input += synapse0x2170200();
   input += synapse0x1f31ad0();
   input += synapse0x1f31b10();
   input += synapse0x1f31b50();
   input += synapse0x1f31b90();
   input += synapse0x1f31bd0();
   input += synapse0x2170dc0();
   return input;
}

double NNfunction-ss_uLuL::neuron0x2170030() {
   double input = input0x2170030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x2170e00() {
   double input = 1.56529;
   input += synapse0x2171140();
   input += synapse0x2171180();
   input += synapse0x21711c0();
   input += synapse0x2171200();
   input += synapse0x2171240();
   input += synapse0x2171280();
   input += synapse0x21712c0();
   input += synapse0x2171300();
   input += synapse0x2171340();
   input += synapse0x2171380();
   input += synapse0x21713c0();
   input += synapse0x2171400();
   input += synapse0x2171440();
   input += synapse0x2171480();
   input += synapse0x21714c0();
   input += synapse0x2171500();
   input += synapse0x2170f90();
   input += synapse0x2170fd0();
   input += synapse0x2171650();
   input += synapse0x2171690();
   input += synapse0x21716d0();
   input += synapse0x2171710();
   input += synapse0x2171750();
   input += synapse0x2171790();
   return input;
}

double NNfunction-ss_uLuL::neuron0x2170e00() {
   double input = input0x2170e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x21717d0() {
   double input = 4.36173;
   input += synapse0x2171b10();
   input += synapse0x2171b50();
   input += synapse0x2171b90();
   input += synapse0x2171bd0();
   input += synapse0x2171c10();
   input += synapse0x2171c50();
   input += synapse0x2171c90();
   input += synapse0x2171cd0();
   input += synapse0x2171d10();
   input += synapse0x2171d50();
   input += synapse0x2171d90();
   input += synapse0x2171dd0();
   input += synapse0x2171e10();
   input += synapse0x2171e50();
   input += synapse0x2171e90();
   input += synapse0x2171ed0();
   input += synapse0x2171960();
   input += synapse0x21719a0();
   input += synapse0x2172020();
   input += synapse0x2172060();
   input += synapse0x21720a0();
   input += synapse0x21720e0();
   input += synapse0x2172120();
   input += synapse0x2172160();
   return input;
}

double NNfunction-ss_uLuL::neuron0x21717d0() {
   double input = input0x21717d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x21721a0() {
   double input = -3.28953;
   input += synapse0x216bcb0();
   input += synapse0x216bcf0();
   input += synapse0x216bd30();
   input += synapse0x216bd70();
   input += synapse0x21726f0();
   input += synapse0x2172730();
   input += synapse0x2172770();
   input += synapse0x21727b0();
   input += synapse0x21727f0();
   input += synapse0x2172830();
   input += synapse0x2172870();
   input += synapse0x21728b0();
   input += synapse0x21728f0();
   input += synapse0x2172930();
   input += synapse0x2172970();
   input += synapse0x21729b0();
   input += synapse0x2172330();
   input += synapse0x2172370();
   input += synapse0x2172b00();
   input += synapse0x2172b40();
   input += synapse0x2172b80();
   input += synapse0x2172bc0();
   input += synapse0x2172c00();
   input += synapse0x2172c40();
   return input;
}

double NNfunction-ss_uLuL::neuron0x21721a0() {
   double input = input0x21721a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x2172c80() {
   double input = 2.68283;
   input += synapse0x2172fc0();
   input += synapse0x2173000();
   input += synapse0x2173040();
   input += synapse0x2173080();
   input += synapse0x21730c0();
   input += synapse0x2173100();
   input += synapse0x2173140();
   input += synapse0x2173180();
   input += synapse0x21731c0();
   input += synapse0x2173200();
   input += synapse0x2173240();
   input += synapse0x2173280();
   input += synapse0x21732c0();
   input += synapse0x2173300();
   input += synapse0x2173340();
   input += synapse0x2173380();
   input += synapse0x2172e10();
   input += synapse0x2172e50();
   input += synapse0x21734d0();
   input += synapse0x2173510();
   input += synapse0x2173550();
   input += synapse0x2173590();
   input += synapse0x21735d0();
   input += synapse0x2173610();
   return input;
}

double NNfunction-ss_uLuL::neuron0x2172c80() {
   double input = input0x2172c80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x2173650() {
   double input = 0.958869;
   input += synapse0x2173990();
   input += synapse0x21739d0();
   input += synapse0x2173a10();
   input += synapse0x2173a50();
   input += synapse0x2173a90();
   input += synapse0x2173ad0();
   input += synapse0x2173b10();
   input += synapse0x2173b50();
   input += synapse0x2173b90();
   input += synapse0x2173bd0();
   input += synapse0x2173c10();
   input += synapse0x2173c50();
   input += synapse0x2173c90();
   input += synapse0x2173cd0();
   input += synapse0x2173d10();
   input += synapse0x2173d50();
   input += synapse0x21737e0();
   input += synapse0x2173820();
   input += synapse0x21705b0();
   input += synapse0x21705f0();
   input += synapse0x2170630();
   input += synapse0x2170670();
   input += synapse0x21706b0();
   input += synapse0x21706f0();
   return input;
}

double NNfunction-ss_uLuL::neuron0x2173650() {
   double input = input0x2173650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x2170730() {
   double input = -0.816457;
   input += synapse0x2170a70();
   input += synapse0x2170ab0();
   input += synapse0x2170af0();
   input += synapse0x2170b30();
   input += synapse0x2170b70();
   input += synapse0x2170bb0();
   input += synapse0x2170bf0();
   input += synapse0x2170c30();
   input += synapse0x2170c70();
   input += synapse0x2170cb0();
   input += synapse0x2170cf0();
   input += synapse0x2170d30();
   input += synapse0x2170d70();
   input += synapse0x2174eb0();
   input += synapse0x2174ef0();
   input += synapse0x2174f30();
   input += synapse0x21708c0();
   input += synapse0x2170900();
   input += synapse0x2175080();
   input += synapse0x21750c0();
   input += synapse0x2175100();
   input += synapse0x2175140();
   input += synapse0x2175180();
   input += synapse0x21751c0();
   return input;
}

double NNfunction-ss_uLuL::neuron0x2170730() {
   double input = input0x2170730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x2175200() {
   double input = -1.13109;
   input += synapse0x2175540();
   input += synapse0x2175580();
   input += synapse0x21755c0();
   input += synapse0x2175600();
   input += synapse0x2175640();
   input += synapse0x2175680();
   input += synapse0x21756c0();
   input += synapse0x2175700();
   input += synapse0x2175740();
   input += synapse0x2175780();
   input += synapse0x21757c0();
   input += synapse0x2175800();
   input += synapse0x2175840();
   input += synapse0x2175880();
   input += synapse0x21758c0();
   input += synapse0x2175900();
   input += synapse0x2175390();
   input += synapse0x21753d0();
   input += synapse0x2175a50();
   input += synapse0x2175a90();
   input += synapse0x2175ad0();
   input += synapse0x2175b10();
   input += synapse0x2175b50();
   input += synapse0x2175b90();
   return input;
}

double NNfunction-ss_uLuL::neuron0x2175200() {
   double input = input0x2175200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x2175bd0() {
   double input = -1.19381;
   input += synapse0x2175f10();
   input += synapse0x2175f50();
   input += synapse0x2175f90();
   input += synapse0x2175fd0();
   input += synapse0x2176010();
   input += synapse0x2176050();
   input += synapse0x2176090();
   input += synapse0x21760d0();
   input += synapse0x2176110();
   input += synapse0x2176150();
   input += synapse0x2176190();
   input += synapse0x21761d0();
   input += synapse0x2176210();
   input += synapse0x2176250();
   input += synapse0x2176290();
   input += synapse0x21762d0();
   input += synapse0x2175d60();
   input += synapse0x2175da0();
   input += synapse0x2176420();
   input += synapse0x2176460();
   input += synapse0x21764a0();
   input += synapse0x21764e0();
   input += synapse0x2176520();
   input += synapse0x2176560();
   return input;
}

double NNfunction-ss_uLuL::neuron0x2175bd0() {
   double input = input0x2175bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x21765a0() {
   double input = 1.41953;
   input += synapse0x21768e0();
   input += synapse0x2176920();
   input += synapse0x2176960();
   input += synapse0x21769a0();
   input += synapse0x21769e0();
   input += synapse0x2176a20();
   input += synapse0x2176a60();
   input += synapse0x2176aa0();
   input += synapse0x2176ae0();
   input += synapse0x2176b20();
   input += synapse0x2176b60();
   input += synapse0x2176ba0();
   input += synapse0x2176be0();
   input += synapse0x2176c20();
   input += synapse0x2176c60();
   input += synapse0x2176ca0();
   input += synapse0x2176730();
   input += synapse0x2176770();
   input += synapse0x2176df0();
   input += synapse0x2176e30();
   input += synapse0x2176e70();
   input += synapse0x2176eb0();
   input += synapse0x2176ef0();
   input += synapse0x2176f30();
   return input;
}

double NNfunction-ss_uLuL::neuron0x21765a0() {
   double input = input0x21765a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x2176f70() {
   double input = -0.989381;
   input += synapse0x21772b0();
   input += synapse0x2168680();
   input += synapse0x21686c0();
   input += synapse0x21689c0();
   input += synapse0x2168a00();
   input += synapse0x2168d00();
   input += synapse0x2168d40();
   input += synapse0x2169040();
   input += synapse0x2169080();
   input += synapse0x2169380();
   input += synapse0x21693c0();
   input += synapse0x21696c0();
   input += synapse0x2169700();
   input += synapse0x2169a00();
   input += synapse0x2169a40();
   input += synapse0x2169d40();
   input += synapse0x2169d80();
   input += synapse0x216a080();
   input += synapse0x216a0c0();
   input += synapse0x216a3c0();
   input += synapse0x216a400();
   input += synapse0x216a700();
   input += synapse0x216a740();
   input += synapse0x216aa40();
   return input;
}

double NNfunction-ss_uLuL::neuron0x2176f70() {
   double input = input0x2176f70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x2178d80() {
   double input = -1.43988;
   input += synapse0x216aa80();
   input += synapse0x216b740();
   input += synapse0x216b780();
   input += synapse0x2177100();
   input += synapse0x2177140();
   input += synapse0x216ba80();
   input += synapse0x216bac0();
   input += synapse0x1f234b0();
   input += synapse0x1f234f0();
   input += synapse0x216c200();
   input += synapse0x216c240();
   input += synapse0x216c540();
   input += synapse0x216c580();
   input += synapse0x216c880();
   input += synapse0x216c8c0();
   input += synapse0x216cbc0();
   input += synapse0x216cc00();
   input += synapse0x216cf00();
   input += synapse0x216cf40();
   input += synapse0x216d240();
   input += synapse0x216d280();
   input += synapse0x216ad80();
   input += synapse0x216adc0();
   input += synapse0x2179020();
   return input;
}

double NNfunction-ss_uLuL::neuron0x2178d80() {
   double input = input0x2178d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x2179060() {
   double input = 0.644068;
   input += synapse0x21793a0();
   input += synapse0x21793e0();
   input += synapse0x2179420();
   input += synapse0x2179460();
   input += synapse0x21794a0();
   input += synapse0x21794e0();
   input += synapse0x2179520();
   input += synapse0x2179560();
   input += synapse0x21795a0();
   input += synapse0x21795e0();
   input += synapse0x2179620();
   input += synapse0x2179660();
   input += synapse0x21796a0();
   input += synapse0x21796e0();
   input += synapse0x2179720();
   input += synapse0x2179760();
   input += synapse0x21791f0();
   input += synapse0x2179230();
   input += synapse0x21798b0();
   input += synapse0x21798f0();
   input += synapse0x2179930();
   input += synapse0x2179970();
   input += synapse0x21799b0();
   input += synapse0x21799f0();
   return input;
}

double NNfunction-ss_uLuL::neuron0x2179060() {
   double input = input0x2179060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x2179a30() {
   double input = 3.40145;
   input += synapse0x2179d70();
   input += synapse0x2179db0();
   input += synapse0x2179df0();
   input += synapse0x2179e30();
   input += synapse0x2179e70();
   input += synapse0x2179eb0();
   input += synapse0x2179ef0();
   input += synapse0x2179f30();
   input += synapse0x2179f70();
   input += synapse0x2179fb0();
   input += synapse0x2179ff0();
   input += synapse0x217a030();
   input += synapse0x217a070();
   input += synapse0x217a0b0();
   input += synapse0x217a0f0();
   input += synapse0x217a130();
   input += synapse0x2179bc0();
   input += synapse0x2179c00();
   input += synapse0x217a280();
   input += synapse0x217a2c0();
   input += synapse0x217a300();
   input += synapse0x217a340();
   input += synapse0x217a380();
   input += synapse0x217a3c0();
   return input;
}

double NNfunction-ss_uLuL::neuron0x2179a30() {
   double input = input0x2179a30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x217a400() {
   double input = 4.44429;
   input += synapse0x217a740();
   input += synapse0x217a780();
   input += synapse0x217a7c0();
   input += synapse0x217a800();
   input += synapse0x217a840();
   input += synapse0x217a880();
   input += synapse0x217a8c0();
   input += synapse0x217a900();
   input += synapse0x217a940();
   input += synapse0x217a980();
   input += synapse0x217a9c0();
   input += synapse0x217aa00();
   input += synapse0x217aa40();
   input += synapse0x217aa80();
   input += synapse0x217aac0();
   input += synapse0x217ab00();
   input += synapse0x217a590();
   input += synapse0x217a5d0();
   input += synapse0x217ac50();
   input += synapse0x217ac90();
   input += synapse0x217acd0();
   input += synapse0x217ad10();
   input += synapse0x217ad50();
   input += synapse0x217ad90();
   return input;
}

double NNfunction-ss_uLuL::neuron0x217a400() {
   double input = input0x217a400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x217add0() {
   double input = 0.199239;
   input += synapse0x217b110();
   input += synapse0x217b150();
   input += synapse0x217b190();
   input += synapse0x217b1d0();
   input += synapse0x217b210();
   input += synapse0x217b250();
   input += synapse0x217b290();
   input += synapse0x217b2d0();
   input += synapse0x217b310();
   input += synapse0x217b350();
   input += synapse0x217b390();
   input += synapse0x217b3d0();
   input += synapse0x217b410();
   input += synapse0x217b450();
   input += synapse0x217b490();
   input += synapse0x217b4d0();
   input += synapse0x217af60();
   input += synapse0x217afa0();
   input += synapse0x217b620();
   input += synapse0x217b660();
   input += synapse0x217b6a0();
   input += synapse0x217b6e0();
   input += synapse0x217b720();
   input += synapse0x217b760();
   return input;
}

double NNfunction-ss_uLuL::neuron0x217add0() {
   double input = input0x217add0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x217b7a0() {
   double input = -0.616501;
   input += synapse0x217bae0();
   input += synapse0x217bb20();
   input += synapse0x217bb60();
   input += synapse0x217bba0();
   input += synapse0x217bbe0();
   input += synapse0x217bc20();
   input += synapse0x217bc60();
   input += synapse0x217bca0();
   input += synapse0x217bce0();
   input += synapse0x2173ea0();
   input += synapse0x2173ee0();
   input += synapse0x2173f20();
   input += synapse0x2173f60();
   input += synapse0x2173fa0();
   input += synapse0x2173fe0();
   input += synapse0x2174020();
   input += synapse0x217b930();
   input += synapse0x217b970();
   input += synapse0x2174170();
   input += synapse0x21741b0();
   input += synapse0x21741f0();
   input += synapse0x2174230();
   input += synapse0x2174270();
   input += synapse0x21742b0();
   return input;
}

double NNfunction-ss_uLuL::neuron0x217b7a0() {
   double input = input0x217b7a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x21742f0() {
   double input = -1.17605;
   input += synapse0x2174630();
   input += synapse0x2174670();
   input += synapse0x21746b0();
   input += synapse0x21746f0();
   input += synapse0x2174730();
   input += synapse0x2174770();
   input += synapse0x21747b0();
   input += synapse0x21747f0();
   input += synapse0x2174830();
   input += synapse0x2174870();
   input += synapse0x21748b0();
   input += synapse0x21748f0();
   input += synapse0x2174930();
   input += synapse0x2174970();
   input += synapse0x21749b0();
   input += synapse0x21749f0();
   input += synapse0x2174480();
   input += synapse0x21744c0();
   input += synapse0x2174b40();
   input += synapse0x2174b80();
   input += synapse0x2174bc0();
   input += synapse0x2174c00();
   input += synapse0x2174c40();
   input += synapse0x2174c80();
   return input;
}

double NNfunction-ss_uLuL::neuron0x21742f0() {
   double input = input0x21742f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x2174cc0() {
   double input = -1.08273;
   input += synapse0x2174e50();
   input += synapse0x217dee0();
   input += synapse0x217df20();
   input += synapse0x217df60();
   input += synapse0x217dfa0();
   input += synapse0x217dfe0();
   input += synapse0x217e020();
   input += synapse0x217e060();
   input += synapse0x217e0a0();
   input += synapse0x217e0e0();
   input += synapse0x217e120();
   input += synapse0x217e160();
   input += synapse0x217e1a0();
   input += synapse0x217e1e0();
   input += synapse0x217e220();
   input += synapse0x217e260();
   input += synapse0x217dd30();
   input += synapse0x217dd70();
   input += synapse0x217e3b0();
   input += synapse0x217e3f0();
   input += synapse0x217e430();
   input += synapse0x217e470();
   input += synapse0x217e4b0();
   input += synapse0x217e4f0();
   return input;
}

double NNfunction-ss_uLuL::neuron0x2174cc0() {
   double input = input0x2174cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x217e530() {
   double input = -1.21391;
   input += synapse0x217e870();
   input += synapse0x217e8b0();
   input += synapse0x217e8f0();
   input += synapse0x217e930();
   input += synapse0x217e970();
   input += synapse0x217e9b0();
   input += synapse0x217e9f0();
   input += synapse0x217ea30();
   input += synapse0x217ea70();
   input += synapse0x217eab0();
   input += synapse0x217eaf0();
   input += synapse0x217eb30();
   input += synapse0x217eb70();
   input += synapse0x217ebb0();
   input += synapse0x217ebf0();
   input += synapse0x217ec30();
   input += synapse0x217e6c0();
   input += synapse0x217e700();
   input += synapse0x217ed80();
   input += synapse0x217edc0();
   input += synapse0x217ee00();
   input += synapse0x217ee40();
   input += synapse0x217ee80();
   input += synapse0x217eec0();
   return input;
}

double NNfunction-ss_uLuL::neuron0x217e530() {
   double input = input0x217e530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x217ef00() {
   double input = 2.45998;
   input += synapse0x217f240();
   input += synapse0x217f280();
   input += synapse0x217f2c0();
   input += synapse0x217f300();
   input += synapse0x217f340();
   input += synapse0x217f380();
   input += synapse0x217f3c0();
   input += synapse0x217f400();
   input += synapse0x217f440();
   input += synapse0x217f480();
   input += synapse0x217f4c0();
   input += synapse0x217f500();
   input += synapse0x217f540();
   input += synapse0x217f580();
   input += synapse0x217f5c0();
   input += synapse0x217f600();
   input += synapse0x217f090();
   input += synapse0x217f0d0();
   input += synapse0x217f750();
   input += synapse0x217f790();
   input += synapse0x217f7d0();
   input += synapse0x217f810();
   input += synapse0x217f850();
   input += synapse0x217f890();
   return input;
}

double NNfunction-ss_uLuL::neuron0x217ef00() {
   double input = input0x217ef00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x217f8d0() {
   double input = -0.974815;
   input += synapse0x217fc10();
   input += synapse0x217fc50();
   input += synapse0x217fc90();
   input += synapse0x217fcd0();
   input += synapse0x217fd10();
   input += synapse0x217fd50();
   input += synapse0x217fd90();
   input += synapse0x217fdd0();
   input += synapse0x217fe10();
   input += synapse0x217fe50();
   input += synapse0x217fe90();
   input += synapse0x217fed0();
   input += synapse0x217ff10();
   input += synapse0x217ff50();
   input += synapse0x217ff90();
   input += synapse0x217ffd0();
   input += synapse0x217fa60();
   input += synapse0x217faa0();
   input += synapse0x2180120();
   input += synapse0x2180160();
   input += synapse0x21801a0();
   input += synapse0x21801e0();
   input += synapse0x2180220();
   input += synapse0x2180260();
   return input;
}

double NNfunction-ss_uLuL::neuron0x217f8d0() {
   double input = input0x217f8d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x21802a0() {
   double input = 1.10058;
   input += synapse0x21805e0();
   input += synapse0x2180620();
   input += synapse0x2180660();
   input += synapse0x21806a0();
   input += synapse0x21806e0();
   input += synapse0x2180720();
   input += synapse0x2180760();
   input += synapse0x21807a0();
   input += synapse0x21807e0();
   input += synapse0x2180820();
   input += synapse0x2180860();
   input += synapse0x21808a0();
   input += synapse0x21808e0();
   input += synapse0x2180920();
   input += synapse0x2180960();
   input += synapse0x21809a0();
   input += synapse0x2180430();
   input += synapse0x2180470();
   input += synapse0x2180af0();
   input += synapse0x2180b30();
   input += synapse0x2180b70();
   input += synapse0x2180bb0();
   input += synapse0x2180bf0();
   input += synapse0x2180c30();
   return input;
}

double NNfunction-ss_uLuL::neuron0x21802a0() {
   double input = input0x21802a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x2180c70() {
   double input = 1.32554;
   input += synapse0x2180fb0();
   input += synapse0x2180ff0();
   input += synapse0x2181030();
   input += synapse0x2181070();
   input += synapse0x21810b0();
   input += synapse0x21810f0();
   input += synapse0x2181130();
   input += synapse0x2181170();
   input += synapse0x21811b0();
   input += synapse0x21811f0();
   input += synapse0x2181230();
   input += synapse0x2181270();
   input += synapse0x21812b0();
   input += synapse0x21812f0();
   input += synapse0x2181330();
   input += synapse0x2181370();
   input += synapse0x2180e00();
   input += synapse0x2180e40();
   input += synapse0x21814c0();
   input += synapse0x2181500();
   input += synapse0x2181540();
   input += synapse0x2181580();
   input += synapse0x21815c0();
   input += synapse0x2181600();
   return input;
}

double NNfunction-ss_uLuL::neuron0x2180c70() {
   double input = input0x2180c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x2181640() {
   double input = -0.0609523;
   input += synapse0x2181980();
   input += synapse0x21819c0();
   input += synapse0x2181a00();
   input += synapse0x2181a40();
   input += synapse0x2181a80();
   input += synapse0x2181ac0();
   input += synapse0x2181b00();
   input += synapse0x2181b40();
   input += synapse0x2181b80();
   input += synapse0x2181bc0();
   input += synapse0x2181c00();
   input += synapse0x2181c40();
   input += synapse0x2181c80();
   input += synapse0x2181cc0();
   input += synapse0x2181d00();
   input += synapse0x2181d40();
   input += synapse0x21817d0();
   input += synapse0x2181810();
   input += synapse0x2181e90();
   input += synapse0x2181ed0();
   input += synapse0x2181f10();
   input += synapse0x2181f50();
   input += synapse0x2181f90();
   input += synapse0x2181fd0();
   return input;
}

double NNfunction-ss_uLuL::neuron0x2181640() {
   double input = input0x2181640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x2182010() {
   double input = -1.44253;
   input += synapse0x2182350();
   input += synapse0x2182390();
   input += synapse0x21823d0();
   input += synapse0x2182410();
   input += synapse0x2182450();
   input += synapse0x2182490();
   input += synapse0x21824d0();
   input += synapse0x2182510();
   input += synapse0x2182550();
   input += synapse0x2182590();
   input += synapse0x21825d0();
   input += synapse0x2182610();
   input += synapse0x2182650();
   input += synapse0x2182690();
   input += synapse0x21826d0();
   input += synapse0x2182710();
   input += synapse0x21821a0();
   input += synapse0x21821e0();
   input += synapse0x2182860();
   input += synapse0x21828a0();
   input += synapse0x21828e0();
   input += synapse0x2182920();
   input += synapse0x2182960();
   input += synapse0x21829a0();
   return input;
}

double NNfunction-ss_uLuL::neuron0x2182010() {
   double input = input0x2182010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x21829e0() {
   double input = 1.40748;
   input += synapse0x2182d20();
   input += synapse0x21772f0();
   input += synapse0x2177330();
   input += synapse0x2177370();
   input += synapse0x21775c0();
   input += synapse0x2177600();
   input += synapse0x2177640();
   input += synapse0x2177890();
   input += synapse0x21778d0();
   input += synapse0x2177b20();
   input += synapse0x2177b60();
   input += synapse0x2177ba0();
   input += synapse0x2177df0();
   input += synapse0x2177e30();
   input += synapse0x2178080();
   input += synapse0x21780c0();
   input += synapse0x2182b70();
   input += synapse0x2182bb0();
   input += synapse0x2178210();
   input += synapse0x2178720();
   input += synapse0x2178760();
   input += synapse0x21787a0();
   input += synapse0x21789f0();
   input += synapse0x2178a30();
   return input;
}

double NNfunction-ss_uLuL::neuron0x21829e0() {
   double input = input0x21829e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x2178a70() {
   double input = 0.653981;
   input += synapse0x21782e0();
   input += synapse0x2178320();
   input += synapse0x2178360();
   input += synapse0x21783a0();
   input += synapse0x2178d20();
   input += synapse0x2185070();
   input += synapse0x21850b0();
   input += synapse0x21850f0();
   input += synapse0x2185130();
   input += synapse0x2185170();
   input += synapse0x21851b0();
   input += synapse0x21851f0();
   input += synapse0x2185230();
   input += synapse0x2185270();
   input += synapse0x21852b0();
   input += synapse0x21852f0();
   input += synapse0x2178c00();
   input += synapse0x2178c40();
   input += synapse0x2185440();
   input += synapse0x2185480();
   input += synapse0x21854c0();
   input += synapse0x2185500();
   input += synapse0x2185540();
   input += synapse0x2185580();
   return input;
}

double NNfunction-ss_uLuL::neuron0x2178a70() {
   double input = input0x2178a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x21855c0() {
   double input = 1.36251;
   input += synapse0x2185900();
   input += synapse0x2185940();
   input += synapse0x2185980();
   input += synapse0x21859c0();
   input += synapse0x2185a00();
   input += synapse0x2185a40();
   input += synapse0x2185a80();
   input += synapse0x2185ac0();
   input += synapse0x2185b00();
   input += synapse0x2185b40();
   input += synapse0x2185b80();
   input += synapse0x2185bc0();
   input += synapse0x2185c00();
   input += synapse0x2185c40();
   input += synapse0x2185c80();
   input += synapse0x2185cc0();
   input += synapse0x2185750();
   input += synapse0x2185790();
   input += synapse0x2185e10();
   input += synapse0x2185e50();
   input += synapse0x2185e90();
   input += synapse0x2185ed0();
   input += synapse0x2185f10();
   input += synapse0x2185f50();
   return input;
}

double NNfunction-ss_uLuL::neuron0x21855c0() {
   double input = input0x21855c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x2185f90() {
   double input = 0.168136;
   input += synapse0x21862d0();
   input += synapse0x2186310();
   input += synapse0x2186350();
   input += synapse0x2186390();
   input += synapse0x21863d0();
   input += synapse0x2186410();
   input += synapse0x2186450();
   input += synapse0x2186490();
   input += synapse0x21864d0();
   input += synapse0x2186510();
   input += synapse0x2186550();
   input += synapse0x2186590();
   input += synapse0x21865d0();
   input += synapse0x2186610();
   input += synapse0x2186650();
   input += synapse0x2186690();
   input += synapse0x2186120();
   input += synapse0x2186160();
   input += synapse0x21867e0();
   input += synapse0x2186820();
   input += synapse0x2186860();
   input += synapse0x21868a0();
   input += synapse0x21868e0();
   input += synapse0x2186920();
   return input;
}

double NNfunction-ss_uLuL::neuron0x2185f90() {
   double input = input0x2185f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x2186960() {
   double input = 1.32392;
   input += synapse0x2186ca0();
   input += synapse0x2186ce0();
   input += synapse0x2186d20();
   input += synapse0x2186d60();
   input += synapse0x2186da0();
   input += synapse0x2186de0();
   input += synapse0x2186e20();
   input += synapse0x2186e60();
   input += synapse0x2186ea0();
   input += synapse0x2186ee0();
   input += synapse0x2186f20();
   input += synapse0x2186f60();
   input += synapse0x2186fa0();
   input += synapse0x2186fe0();
   input += synapse0x2187020();
   input += synapse0x2187060();
   input += synapse0x2186af0();
   input += synapse0x2186b30();
   input += synapse0x21871b0();
   input += synapse0x21871f0();
   input += synapse0x2187230();
   input += synapse0x2187270();
   input += synapse0x21872b0();
   input += synapse0x21872f0();
   return input;
}

double NNfunction-ss_uLuL::neuron0x2186960() {
   double input = input0x2186960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x2187330() {
   double input = -1.11538;
   input += synapse0x2187670();
   input += synapse0x21876b0();
   input += synapse0x21876f0();
   input += synapse0x2187730();
   input += synapse0x2187770();
   input += synapse0x21877b0();
   input += synapse0x21877f0();
   input += synapse0x2187830();
   input += synapse0x2187870();
   input += synapse0x21878b0();
   input += synapse0x21878f0();
   input += synapse0x2187930();
   input += synapse0x2187970();
   input += synapse0x21879b0();
   input += synapse0x21879f0();
   input += synapse0x2187a30();
   input += synapse0x21874c0();
   input += synapse0x2187500();
   input += synapse0x2187b80();
   input += synapse0x2187bc0();
   input += synapse0x2187c00();
   input += synapse0x2187c40();
   input += synapse0x2187c80();
   input += synapse0x2187cc0();
   return input;
}

double NNfunction-ss_uLuL::neuron0x2187330() {
   double input = input0x2187330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x2187d00() {
   double input = -0.494726;
   input += synapse0x2188040();
   input += synapse0x2188080();
   input += synapse0x21880c0();
   input += synapse0x2188100();
   input += synapse0x2188140();
   input += synapse0x2188180();
   input += synapse0x21881c0();
   input += synapse0x2188200();
   input += synapse0x2188240();
   input += synapse0x2188280();
   input += synapse0x21882c0();
   input += synapse0x2188300();
   input += synapse0x2188340();
   input += synapse0x2188380();
   input += synapse0x21883c0();
   input += synapse0x2188400();
   input += synapse0x2187e90();
   input += synapse0x2187ed0();
   input += synapse0x2188550();
   input += synapse0x2188590();
   input += synapse0x21885d0();
   input += synapse0x2188610();
   input += synapse0x2188650();
   input += synapse0x2188690();
   return input;
}

double NNfunction-ss_uLuL::neuron0x2187d00() {
   double input = input0x2187d00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x21886d0() {
   double input = 1.86575;
   input += synapse0x2188a10();
   input += synapse0x2188a50();
   input += synapse0x2188a90();
   input += synapse0x2188ad0();
   input += synapse0x2188b10();
   input += synapse0x2188b50();
   input += synapse0x2188b90();
   input += synapse0x2188bd0();
   input += synapse0x2188c10();
   input += synapse0x2188c50();
   input += synapse0x2188c90();
   input += synapse0x2188cd0();
   input += synapse0x2188d10();
   input += synapse0x2188d50();
   input += synapse0x2188d90();
   input += synapse0x2188dd0();
   input += synapse0x2188860();
   input += synapse0x21888a0();
   input += synapse0x2188f20();
   input += synapse0x2188f60();
   input += synapse0x2188fa0();
   input += synapse0x2188fe0();
   input += synapse0x2189020();
   input += synapse0x2189060();
   return input;
}

double NNfunction-ss_uLuL::neuron0x21886d0() {
   double input = input0x21886d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x21890a0() {
   double input = 0.857484;
   input += synapse0x21893e0();
   input += synapse0x2189420();
   input += synapse0x2189460();
   input += synapse0x21894a0();
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
   input += synapse0x2189230();
   input += synapse0x2189270();
   input += synapse0x21898f0();
   input += synapse0x2189930();
   input += synapse0x2189970();
   input += synapse0x21899b0();
   input += synapse0x21899f0();
   input += synapse0x2189a30();
   return input;
}

double NNfunction-ss_uLuL::neuron0x21890a0() {
   double input = input0x21890a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x2189a70() {
   double input = -1.06782;
   input += synapse0x21724e0();
   input += synapse0x2172520();
   input += synapse0x2172560();
   input += synapse0x21725a0();
   input += synapse0x21725e0();
   input += synapse0x2172620();
   input += synapse0x2172660();
   input += synapse0x21726a0();
   input += synapse0x218a1c0();
   input += synapse0x218a200();
   input += synapse0x218a240();
   input += synapse0x218a280();
   input += synapse0x218a2c0();
   input += synapse0x218a300();
   input += synapse0x218a340();
   input += synapse0x218a380();
   input += synapse0x2189c00();
   input += synapse0x2189c40();
   input += synapse0x218a4d0();
   input += synapse0x218a510();
   input += synapse0x218a550();
   input += synapse0x218a590();
   input += synapse0x218a5d0();
   input += synapse0x218a610();
   return input;
}

double NNfunction-ss_uLuL::neuron0x2189a70() {
   double input = input0x2189a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x218a650() {
   double input = 5.48494;
   input += synapse0x218a990();
   input += synapse0x218a9d0();
   input += synapse0x218aa10();
   input += synapse0x218aa50();
   input += synapse0x218aa90();
   input += synapse0x218aad0();
   input += synapse0x218ab10();
   input += synapse0x218ab50();
   input += synapse0x218ab90();
   input += synapse0x218abd0();
   input += synapse0x218ac10();
   input += synapse0x218ac50();
   input += synapse0x218ac90();
   input += synapse0x218acd0();
   input += synapse0x218ad10();
   input += synapse0x218ad50();
   input += synapse0x218a7e0();
   input += synapse0x218a820();
   input += synapse0x218aea0();
   input += synapse0x218aee0();
   input += synapse0x218af20();
   input += synapse0x218af60();
   input += synapse0x218afa0();
   input += synapse0x218afe0();
   return input;
}

double NNfunction-ss_uLuL::neuron0x218a650() {
   double input = input0x218a650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x218b020() {
   double input = -1.23137;
   input += synapse0x218b360();
   input += synapse0x218b3a0();
   input += synapse0x218b3e0();
   input += synapse0x218b420();
   input += synapse0x218b460();
   input += synapse0x218b4a0();
   input += synapse0x218b4e0();
   input += synapse0x218b520();
   input += synapse0x218b560();
   input += synapse0x218b5a0();
   input += synapse0x218b5e0();
   input += synapse0x218b620();
   input += synapse0x218b660();
   input += synapse0x218b6a0();
   input += synapse0x218b6e0();
   input += synapse0x218b720();
   input += synapse0x218b1b0();
   input += synapse0x218b1f0();
   input += synapse0x217bd20();
   input += synapse0x217bd60();
   input += synapse0x217bda0();
   input += synapse0x217bde0();
   input += synapse0x217be20();
   input += synapse0x217be60();
   return input;
}

double NNfunction-ss_uLuL::neuron0x218b020() {
   double input = input0x218b020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x217bea0() {
   double input = 0.900259;
   input += synapse0x217c1e0();
   input += synapse0x217c220();
   input += synapse0x217c260();
   input += synapse0x217c2a0();
   input += synapse0x217c2e0();
   input += synapse0x217c320();
   input += synapse0x217c360();
   input += synapse0x217c3a0();
   input += synapse0x217c3e0();
   input += synapse0x217c420();
   input += synapse0x217c460();
   input += synapse0x217c4a0();
   input += synapse0x217c4e0();
   input += synapse0x217c520();
   input += synapse0x217c560();
   input += synapse0x217c5a0();
   input += synapse0x217c030();
   input += synapse0x217c070();
   input += synapse0x217c6f0();
   input += synapse0x217c730();
   input += synapse0x217c770();
   input += synapse0x217c7b0();
   input += synapse0x217c7f0();
   input += synapse0x217c830();
   return input;
}

double NNfunction-ss_uLuL::neuron0x217bea0() {
   double input = input0x217bea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x217c870() {
   double input = 1.80596;
   input += synapse0x217cbb0();
   input += synapse0x217cbf0();
   input += synapse0x217cc30();
   input += synapse0x217cc70();
   input += synapse0x217ccb0();
   input += synapse0x217ccf0();
   input += synapse0x217cd30();
   input += synapse0x217cd70();
   input += synapse0x217cdb0();
   input += synapse0x217cdf0();
   input += synapse0x217ce30();
   input += synapse0x217ce70();
   input += synapse0x217ceb0();
   input += synapse0x217cef0();
   input += synapse0x217cf30();
   input += synapse0x217cf70();
   input += synapse0x217ca00();
   input += synapse0x217ca40();
   input += synapse0x217d0c0();
   input += synapse0x217d100();
   input += synapse0x217d140();
   input += synapse0x217d180();
   input += synapse0x217d1c0();
   input += synapse0x217d200();
   return input;
}

double NNfunction-ss_uLuL::neuron0x217c870() {
   double input = input0x217c870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x217d240() {
   double input = -1.81987;
   input += synapse0x217d580();
   input += synapse0x217d5c0();
   input += synapse0x217d600();
   input += synapse0x217d640();
   input += synapse0x217d680();
   input += synapse0x217d6c0();
   input += synapse0x217d700();
   input += synapse0x217d740();
   input += synapse0x217d780();
   input += synapse0x217d7c0();
   input += synapse0x217d800();
   input += synapse0x217d840();
   input += synapse0x217d880();
   input += synapse0x217d8c0();
   input += synapse0x217d900();
   input += synapse0x217d940();
   input += synapse0x217d3d0();
   input += synapse0x217d410();
   input += synapse0x217da90();
   input += synapse0x217dad0();
   input += synapse0x217db10();
   input += synapse0x217db50();
   input += synapse0x217db90();
   input += synapse0x217dbd0();
   return input;
}

double NNfunction-ss_uLuL::neuron0x217d240() {
   double input = input0x217d240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x218f880() {
   double input = 0.204867;
   input += synapse0x218faa0();
   input += synapse0x218fae0();
   input += synapse0x218fb20();
   input += synapse0x218fb60();
   input += synapse0x218fba0();
   input += synapse0x218fbe0();
   input += synapse0x218fc20();
   input += synapse0x218fc60();
   input += synapse0x218fca0();
   input += synapse0x218fce0();
   input += synapse0x218fd20();
   input += synapse0x218fd60();
   input += synapse0x218fda0();
   input += synapse0x218fde0();
   input += synapse0x218fe20();
   input += synapse0x218fe60();
   input += synapse0x217dc10();
   input += synapse0x217dc50();
   input += synapse0x218ffb0();
   input += synapse0x218fff0();
   input += synapse0x2190030();
   input += synapse0x2190070();
   input += synapse0x21900b0();
   input += synapse0x21900f0();
   return input;
}

double NNfunction-ss_uLuL::neuron0x218f880() {
   double input = input0x218f880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x2190130() {
   double input = 0.449464;
   input += synapse0x2190470();
   input += synapse0x21904b0();
   input += synapse0x21904f0();
   input += synapse0x2190530();
   input += synapse0x2190570();
   input += synapse0x21905b0();
   input += synapse0x21905f0();
   input += synapse0x2190630();
   input += synapse0x2190670();
   input += synapse0x21906b0();
   input += synapse0x21906f0();
   input += synapse0x2190730();
   input += synapse0x2190770();
   input += synapse0x21907b0();
   input += synapse0x21907f0();
   input += synapse0x2190830();
   input += synapse0x21902c0();
   input += synapse0x2190300();
   input += synapse0x2190980();
   input += synapse0x21909c0();
   input += synapse0x2190a00();
   input += synapse0x2190a40();
   input += synapse0x2190a80();
   input += synapse0x2190ac0();
   return input;
}

double NNfunction-ss_uLuL::neuron0x2190130() {
   double input = input0x2190130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x2190b00() {
   double input = 0.0282012;
   input += synapse0x2190e40();
   input += synapse0x2190e80();
   input += synapse0x2190ec0();
   input += synapse0x2190f00();
   input += synapse0x2190f40();
   input += synapse0x2190f80();
   input += synapse0x2190fc0();
   input += synapse0x2191000();
   input += synapse0x2191040();
   input += synapse0x2191080();
   input += synapse0x21910c0();
   input += synapse0x2191100();
   input += synapse0x2191140();
   input += synapse0x2191180();
   input += synapse0x21911c0();
   input += synapse0x2191200();
   input += synapse0x2190c90();
   input += synapse0x2190cd0();
   input += synapse0x2191350();
   input += synapse0x2191390();
   input += synapse0x21913d0();
   input += synapse0x2191410();
   input += synapse0x2191450();
   input += synapse0x2191490();
   return input;
}

double NNfunction-ss_uLuL::neuron0x2190b00() {
   double input = input0x2190b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x21914d0() {
   double input = -0.58517;
   input += synapse0x2191810();
   input += synapse0x2191850();
   input += synapse0x2191890();
   input += synapse0x21918d0();
   input += synapse0x2191910();
   input += synapse0x2191950();
   input += synapse0x2191990();
   input += synapse0x21919d0();
   input += synapse0x2191a10();
   input += synapse0x2191a50();
   input += synapse0x2191a90();
   input += synapse0x2191ad0();
   input += synapse0x2191b10();
   input += synapse0x2191b50();
   input += synapse0x2191b90();
   input += synapse0x2191bd0();
   input += synapse0x2191660();
   input += synapse0x21916a0();
   input += synapse0x2191d20();
   input += synapse0x2191d60();
   input += synapse0x2191da0();
   input += synapse0x2191de0();
   input += synapse0x2191e20();
   input += synapse0x2191e60();
   return input;
}

double NNfunction-ss_uLuL::neuron0x21914d0() {
   double input = input0x21914d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x21986d0() {
   double input = -0.908632;
   input += synapse0x216e3f0();
   input += synapse0x216e430();
   input += synapse0x216f910();
   input += synapse0x216f950();
   input += synapse0x21702e0();
   input += synapse0x2170320();
   input += synapse0x21710b0();
   input += synapse0x21710f0();
   input += synapse0x2171a80();
   input += synapse0x2171ac0();
   input += synapse0x2172450();
   input += synapse0x2172490();
   input += synapse0x2172f30();
   input += synapse0x2172f70();
   input += synapse0x2173900();
   input += synapse0x2173940();
   input += synapse0x21709e0();
   input += synapse0x2170a20();
   input += synapse0x21754b0();
   input += synapse0x21754f0();
   input += synapse0x2175e80();
   input += synapse0x2175ec0();
   input += synapse0x2176850();
   input += synapse0x2176890();
   input += synapse0x2177220();
   input += synapse0x2177260();
   input += synapse0x216b400();
   input += synapse0x216b440();
   input += synapse0x2179310();
   input += synapse0x2179350();
   input += synapse0x2179ce0();
   input += synapse0x2179d20();
   input += synapse0x217a6b0();
   input += synapse0x217a6f0();
   input += synapse0x217b080();
   input += synapse0x217b0c0();
   input += synapse0x217ba50();
   input += synapse0x217ba90();
   input += synapse0x21745a0();
   input += synapse0x21745e0();
   input += synapse0x217de50();
   input += synapse0x217de90();
   input += synapse0x217e7e0();
   input += synapse0x217e820();
   input += synapse0x217f1b0();
   input += synapse0x217f1f0();
   input += synapse0x217fb80();
   input += synapse0x217fbc0();
   input += synapse0x2180550();
   input += synapse0x2180590();
   return input;
}

double NNfunction-ss_uLuL::neuron0x21986d0() {
   double input = input0x21986d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x2198a70() {
   double input = 0.610782;
   input += synapse0x2182c90();
   input += synapse0x2182cd0();
   input += synapse0x2178250();
   input += synapse0x2178290();
   input += synapse0x2185870();
   input += synapse0x21858b0();
   input += synapse0x2186240();
   input += synapse0x2186280();
   input += synapse0x2186c10();
   input += synapse0x2186c50();
   input += synapse0x21875e0();
   input += synapse0x2187620();
   input += synapse0x2187fb0();
   input += synapse0x2187ff0();
   input += synapse0x2188980();
   input += synapse0x21889c0();
   input += synapse0x2189350();
   input += synapse0x2189390();
   input += synapse0x2189d20();
   input += synapse0x2189d60();
   input += synapse0x218a900();
   input += synapse0x218a940();
   input += synapse0x218b2d0();
   input += synapse0x218b310();
   input += synapse0x217c150();
   input += synapse0x217c190();
   input += synapse0x217cb20();
   input += synapse0x217cb60();
   input += synapse0x217d4f0();
   input += synapse0x217d530();
   input += synapse0x218fa10();
   input += synapse0x218fa50();
   input += synapse0x21903e0();
   input += synapse0x2190420();
   input += synapse0x2190db0();
   input += synapse0x2190df0();
   input += synapse0x2191780();
   input += synapse0x21917c0();
   input += synapse0x216d6b0();
   input += synapse0x216d6f0();
   input += synapse0x2180f20();
   input += synapse0x2180f60();
   input += synapse0x2191ea0();
   input += synapse0x2191ee0();
   input += synapse0x2191f20();
   input += synapse0x2191f60();
   input += synapse0x2198e10();
   input += synapse0x2198e50();
   input += synapse0x2198e90();
   input += synapse0x2198ed0();
   return input;
}

double NNfunction-ss_uLuL::neuron0x2198a70() {
   double input = input0x2198a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x2198f10() {
   double input = 0.026808;
   input += synapse0x2199250();
   input += synapse0x2199290();
   input += synapse0x21992d0();
   input += synapse0x2199310();
   input += synapse0x2199350();
   input += synapse0x2199390();
   input += synapse0x21993d0();
   input += synapse0x2199410();
   input += synapse0x2199450();
   input += synapse0x2199490();
   input += synapse0x21994d0();
   input += synapse0x2199510();
   input += synapse0x2199550();
   input += synapse0x2199590();
   input += synapse0x21995d0();
   input += synapse0x2199610();
   input += synapse0x21990a0();
   input += synapse0x21990e0();
   input += synapse0x2199760();
   input += synapse0x21997a0();
   input += synapse0x21997e0();
   input += synapse0x2199820();
   input += synapse0x2199860();
   input += synapse0x21998a0();
   input += synapse0x21998e0();
   input += synapse0x2199920();
   input += synapse0x2199960();
   input += synapse0x21999a0();
   input += synapse0x21999e0();
   input += synapse0x2199a20();
   input += synapse0x2199a60();
   input += synapse0x2199aa0();
   input += synapse0x2199650();
   input += synapse0x2199690();
   input += synapse0x21996d0();
   input += synapse0x2199710();
   input += synapse0x2199cf0();
   input += synapse0x2199d30();
   input += synapse0x2199d70();
   input += synapse0x2199db0();
   input += synapse0x2199df0();
   input += synapse0x2199e30();
   input += synapse0x2199e70();
   input += synapse0x2199eb0();
   input += synapse0x2199ef0();
   input += synapse0x2199f30();
   input += synapse0x2199f70();
   input += synapse0x2199fb0();
   input += synapse0x2199ff0();
   input += synapse0x219a030();
   return input;
}

double NNfunction-ss_uLuL::neuron0x2198f10() {
   double input = input0x2198f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x219a070() {
   double input = -0.34122;
   input += synapse0x219a3b0();
   input += synapse0x219a3f0();
   input += synapse0x219a430();
   input += synapse0x219a470();
   input += synapse0x219a4b0();
   input += synapse0x219a4f0();
   input += synapse0x219a530();
   input += synapse0x219a570();
   input += synapse0x219a5b0();
   input += synapse0x219a5f0();
   input += synapse0x219a630();
   input += synapse0x219a670();
   input += synapse0x219a6b0();
   input += synapse0x219a6f0();
   input += synapse0x219a730();
   input += synapse0x219a770();
   input += synapse0x219a200();
   input += synapse0x219a240();
   input += synapse0x219a8c0();
   input += synapse0x219a900();
   input += synapse0x219a940();
   input += synapse0x219a980();
   input += synapse0x219a9c0();
   input += synapse0x219aa00();
   input += synapse0x219aa40();
   input += synapse0x219aa80();
   input += synapse0x219aac0();
   input += synapse0x219ab00();
   input += synapse0x219ab40();
   input += synapse0x219ab80();
   input += synapse0x219abc0();
   input += synapse0x219ac00();
   input += synapse0x219a7b0();
   input += synapse0x219a7f0();
   input += synapse0x219a830();
   input += synapse0x219a870();
   input += synapse0x219ae50();
   input += synapse0x219ae90();
   input += synapse0x219aed0();
   input += synapse0x219af10();
   input += synapse0x219af50();
   input += synapse0x219af90();
   input += synapse0x219afd0();
   input += synapse0x219b010();
   input += synapse0x219b050();
   input += synapse0x219b090();
   input += synapse0x219b0d0();
   input += synapse0x219b110();
   input += synapse0x219b150();
   input += synapse0x219b190();
   return input;
}

double NNfunction-ss_uLuL::neuron0x219a070() {
   double input = input0x219a070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x219b1d0() {
   double input = -0.305592;
   input += synapse0x219b510();
   input += synapse0x219b550();
   input += synapse0x219b590();
   input += synapse0x219b5d0();
   input += synapse0x219b610();
   input += synapse0x219b650();
   input += synapse0x219b690();
   input += synapse0x219b6d0();
   input += synapse0x219b710();
   input += synapse0x219b750();
   input += synapse0x219b790();
   input += synapse0x219b7d0();
   input += synapse0x219b810();
   input += synapse0x219b850();
   input += synapse0x219b890();
   input += synapse0x219b8d0();
   input += synapse0x219b360();
   input += synapse0x219b3a0();
   input += synapse0x219ba20();
   input += synapse0x219ba60();
   input += synapse0x219baa0();
   input += synapse0x219bae0();
   input += synapse0x219bb20();
   input += synapse0x219bb60();
   input += synapse0x219bba0();
   input += synapse0x219bbe0();
   input += synapse0x219bc20();
   input += synapse0x219bc60();
   input += synapse0x219bca0();
   input += synapse0x219bce0();
   input += synapse0x219bd20();
   input += synapse0x219bd60();
   input += synapse0x219b910();
   input += synapse0x219b950();
   input += synapse0x219b990();
   input += synapse0x219b9d0();
   input += synapse0x219bfb0();
   input += synapse0x219bff0();
   input += synapse0x219c030();
   input += synapse0x219c070();
   input += synapse0x219c0b0();
   input += synapse0x219c0f0();
   input += synapse0x219c130();
   input += synapse0x219c170();
   input += synapse0x219c1b0();
   input += synapse0x219c1f0();
   input += synapse0x219c230();
   input += synapse0x219c270();
   input += synapse0x219c2b0();
   input += synapse0x219c2f0();
   return input;
}

double NNfunction-ss_uLuL::neuron0x219b1d0() {
   double input = input0x219b1d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_uLuL::input0x219c330() {
   double input = 6.6651;
   input += synapse0x219c550();
   input += synapse0x219c590();
   input += synapse0x219c5d0();
   input += synapse0x219c610();
   input += synapse0x219c650();
   return input;
}

double NNfunction-ss_uLuL::neuron0x219c330() {
   double input = input0x219c330();
   return (input * 1)+0;
}

double NNfunction-ss_uLuL::synapse0x2168470() {
   return (neuron0x21684f0()*-0.148099);
}

double NNfunction-ss_uLuL::synapse0x21684b0() {
   return (neuron0x21687a0()*0.0435616);
}

double NNfunction-ss_uLuL::synapse0x216d740() {
   return (neuron0x2168ae0()*0.0382032);
}

double NNfunction-ss_uLuL::synapse0x216d780() {
   return (neuron0x2168e20()*0.581916);
}

double NNfunction-ss_uLuL::synapse0x216d7c0() {
   return (neuron0x2169160()*0.0883312);
}

double NNfunction-ss_uLuL::synapse0x216d800() {
   return (neuron0x21694a0()*0.155293);
}

double NNfunction-ss_uLuL::synapse0x216d840() {
   return (neuron0x21697e0()*0.0978637);
}

double NNfunction-ss_uLuL::synapse0x216d880() {
   return (neuron0x2169b20()*-0.0288172);
}

double NNfunction-ss_uLuL::synapse0x216d8c0() {
   return (neuron0x2169e60()*0.304092);
}

double NNfunction-ss_uLuL::synapse0x216d900() {
   return (neuron0x216a1a0()*0.0157354);
}

double NNfunction-ss_uLuL::synapse0x216d940() {
   return (neuron0x216a4e0()*-0.328324);
}

double NNfunction-ss_uLuL::synapse0x216d980() {
   return (neuron0x216a820()*1.92015);
}

double NNfunction-ss_uLuL::synapse0x216d9c0() {
   return (neuron0x216ab60()*0.189907);
}

double NNfunction-ss_uLuL::synapse0x216da00() {
   return (neuron0x216aea0()*0.388628);
}

double NNfunction-ss_uLuL::synapse0x216da40() {
   return (neuron0x216b1e0()*0.0969455);
}

double NNfunction-ss_uLuL::synapse0x216da80() {
   return (neuron0x216b520()*0.0954244);
}

double NNfunction-ss_uLuL::synapse0x21683e0() {
   return (neuron0x216b860()*0.0681338);
}

double NNfunction-ss_uLuL::synapse0x2168420() {
   return (neuron0x216bdc0()*-0.0900066);
}

double NNfunction-ss_uLuL::synapse0x1f235d0() {
   return (neuron0x216bfe0()*0.0045087);
}

double NNfunction-ss_uLuL::synapse0x1f23610() {
   return (neuron0x216c320()*-0.00109638);
}

double NNfunction-ss_uLuL::synapse0x216dce0() {
   return (neuron0x216c660()*0.132223);
}

double NNfunction-ss_uLuL::synapse0x216dd20() {
   return (neuron0x216c9a0()*0.0797951);
}

double NNfunction-ss_uLuL::synapse0x216dd60() {
   return (neuron0x216cce0()*-0.120382);
}

double NNfunction-ss_uLuL::synapse0x216dda0() {
   return (neuron0x216d020()*-0.115532);
}

double NNfunction-ss_uLuL::synapse0x216e120() {
   return (neuron0x21684f0()*-0.357498);
}

double NNfunction-ss_uLuL::synapse0x216e160() {
   return (neuron0x21687a0()*-0.0698755);
}

double NNfunction-ss_uLuL::synapse0x216e1a0() {
   return (neuron0x2168ae0()*0.16734);
}

double NNfunction-ss_uLuL::synapse0x216e1e0() {
   return (neuron0x2168e20()*1.00335);
}

double NNfunction-ss_uLuL::synapse0x216e220() {
   return (neuron0x2169160()*-0.056595);
}

double NNfunction-ss_uLuL::synapse0x216e260() {
   return (neuron0x21694a0()*0.0289853);
}

double NNfunction-ss_uLuL::synapse0x216e2a0() {
   return (neuron0x21697e0()*0.164848);
}

double NNfunction-ss_uLuL::synapse0x216e2e0() {
   return (neuron0x2169b20()*0.177096);
}

double NNfunction-ss_uLuL::synapse0x216e320() {
   return (neuron0x2169e60()*0.186035);
}

double NNfunction-ss_uLuL::synapse0x216dbd0() {
   return (neuron0x216a1a0()*-0.112924);
}

double NNfunction-ss_uLuL::synapse0x216dc10() {
   return (neuron0x216a4e0()*0.39387);
}

double NNfunction-ss_uLuL::synapse0x216dc50() {
   return (neuron0x216a820()*-0.126304);
}

double NNfunction-ss_uLuL::synapse0x216dc90() {
   return (neuron0x216ab60()*-1.49667);
}

double NNfunction-ss_uLuL::synapse0x216e570() {
   return (neuron0x216aea0()*0.71822);
}

double NNfunction-ss_uLuL::synapse0x216e5b0() {
   return (neuron0x216b1e0()*-0.296635);
}

double NNfunction-ss_uLuL::synapse0x216e5f0() {
   return (neuron0x216b520()*0.0258088);
}

double NNfunction-ss_uLuL::synapse0x216df70() {
   return (neuron0x216b860()*0.687077);
}

double NNfunction-ss_uLuL::synapse0x216dfb0() {
   return (neuron0x216bdc0()*0.78266);
}

double NNfunction-ss_uLuL::synapse0x216e740() {
   return (neuron0x216bfe0()*-0.343389);
}

double NNfunction-ss_uLuL::synapse0x216e780() {
   return (neuron0x216c320()*0.0250872);
}

double NNfunction-ss_uLuL::synapse0x216e7c0() {
   return (neuron0x216c660()*-0.336814);
}

double NNfunction-ss_uLuL::synapse0x216e800() {
   return (neuron0x216c9a0()*0.161578);
}

double NNfunction-ss_uLuL::synapse0x216e840() {
   return (neuron0x216cce0()*-0.00772346);
}

double NNfunction-ss_uLuL::synapse0x216e880() {
   return (neuron0x216d020()*0.0600946);
}

double NNfunction-ss_uLuL::synapse0x216ec00() {
   return (neuron0x21684f0()*-0.237904);
}

double NNfunction-ss_uLuL::synapse0x216ec40() {
   return (neuron0x21687a0()*0.317152);
}

double NNfunction-ss_uLuL::synapse0x216ec80() {
   return (neuron0x2168ae0()*-1.4219);
}

double NNfunction-ss_uLuL::synapse0x216ecc0() {
   return (neuron0x2168e20()*1.47222);
}

double NNfunction-ss_uLuL::synapse0x216ed00() {
   return (neuron0x2169160()*-0.327096);
}

double NNfunction-ss_uLuL::synapse0x216ed40() {
   return (neuron0x21694a0()*-0.0180488);
}

double NNfunction-ss_uLuL::synapse0x216ed80() {
   return (neuron0x21697e0()*-0.160221);
}

double NNfunction-ss_uLuL::synapse0x216edc0() {
   return (neuron0x2169b20()*-0.772506);
}

double NNfunction-ss_uLuL::synapse0x216ee00() {
   return (neuron0x2169e60()*-0.329792);
}

double NNfunction-ss_uLuL::synapse0x216ee40() {
   return (neuron0x216a1a0()*-0.370479);
}

double NNfunction-ss_uLuL::synapse0x216ee80() {
   return (neuron0x216a4e0()*-0.334675);
}

double NNfunction-ss_uLuL::synapse0x216eec0() {
   return (neuron0x216a820()*1.41199);
}

double NNfunction-ss_uLuL::synapse0x216ef00() {
   return (neuron0x216ab60()*1.10164);
}

double NNfunction-ss_uLuL::synapse0x216ef40() {
   return (neuron0x216aea0()*0.164887);
}

double NNfunction-ss_uLuL::synapse0x216ef80() {
   return (neuron0x216b1e0()*-0.152411);
}

double NNfunction-ss_uLuL::synapse0x216efc0() {
   return (neuron0x216b520()*0.478362);
}

double NNfunction-ss_uLuL::synapse0x216ea50() {
   return (neuron0x216b860()*-0.626997);
}

double NNfunction-ss_uLuL::synapse0x216ea90() {
   return (neuron0x216bdc0()*0.172334);
}

double NNfunction-ss_uLuL::synapse0x2157560() {
   return (neuron0x216bfe0()*-0.196527);
}

double NNfunction-ss_uLuL::synapse0x1f314b0() {
   return (neuron0x216c320()*0.280658);
}

double NNfunction-ss_uLuL::synapse0x1f314f0() {
   return (neuron0x216c660()*-0.0826047);
}

double NNfunction-ss_uLuL::synapse0x204ca00() {
   return (neuron0x216c9a0()*-0.732002);
}

double NNfunction-ss_uLuL::synapse0x204ca40() {
   return (neuron0x216cce0()*0.508877);
}

double NNfunction-ss_uLuL::synapse0x2168250() {
   return (neuron0x216d020()*0.0724485);
}

double NNfunction-ss_uLuL::synapse0x1f31da0() {
   return (neuron0x21684f0()*-0.156739);
}

double NNfunction-ss_uLuL::synapse0x216e480() {
   return (neuron0x21687a0()*-0.0519937);
}

double NNfunction-ss_uLuL::synapse0x216e4c0() {
   return (neuron0x2168ae0()*-0.0727703);
}

double NNfunction-ss_uLuL::synapse0x216e500() {
   return (neuron0x2168e20()*-0.208531);
}

double NNfunction-ss_uLuL::synapse0x216f110() {
   return (neuron0x2169160()*-0.0233696);
}

double NNfunction-ss_uLuL::synapse0x216f150() {
   return (neuron0x21694a0()*-0.068354);
}

double NNfunction-ss_uLuL::synapse0x216f190() {
   return (neuron0x21697e0()*-0.039416);
}

double NNfunction-ss_uLuL::synapse0x216f1d0() {
   return (neuron0x2169b20()*0.00730954);
}

double NNfunction-ss_uLuL::synapse0x216f210() {
   return (neuron0x2169e60()*-0.0878353);
}

double NNfunction-ss_uLuL::synapse0x216f250() {
   return (neuron0x216a1a0()*0.235589);
}

double NNfunction-ss_uLuL::synapse0x216f290() {
   return (neuron0x216a4e0()*-0.220189);
}

double NNfunction-ss_uLuL::synapse0x216f2d0() {
   return (neuron0x216a820()*-2.7247);
}

double NNfunction-ss_uLuL::synapse0x216f310() {
   return (neuron0x216ab60()*-0.0868991);
}

double NNfunction-ss_uLuL::synapse0x216f350() {
   return (neuron0x216aea0()*-0.182692);
}

double NNfunction-ss_uLuL::synapse0x216f390() {
   return (neuron0x216b1e0()*0.066501);
}

double NNfunction-ss_uLuL::synapse0x216f3d0() {
   return (neuron0x216b520()*0.0254068);
}

double NNfunction-ss_uLuL::synapse0x2168290() {
   return (neuron0x216b860()*-0.0906126);
}

double NNfunction-ss_uLuL::synapse0x21682d0() {
   return (neuron0x216bdc0()*-0.0388169);
}

double NNfunction-ss_uLuL::synapse0x2168310() {
   return (neuron0x216bfe0()*1.96326e-05);
}

double NNfunction-ss_uLuL::synapse0x216f520() {
   return (neuron0x216c320()*0.138066);
}

double NNfunction-ss_uLuL::synapse0x216f560() {
   return (neuron0x216c660()*0.066506);
}

double NNfunction-ss_uLuL::synapse0x216f5a0() {
   return (neuron0x216c9a0()*-0.0405427);
}

double NNfunction-ss_uLuL::synapse0x216f5e0() {
   return (neuron0x216cce0()*0.0184564);
}

double NNfunction-ss_uLuL::synapse0x216f620() {
   return (neuron0x216d020()*-0.0695799);
}

double NNfunction-ss_uLuL::synapse0x216f9a0() {
   return (neuron0x21684f0()*0.0250316);
}

double NNfunction-ss_uLuL::synapse0x216f9e0() {
   return (neuron0x21687a0()*-0.0121065);
}

double NNfunction-ss_uLuL::synapse0x216fa20() {
   return (neuron0x2168ae0()*-1.06238);
}

double NNfunction-ss_uLuL::synapse0x216fa60() {
   return (neuron0x2168e20()*-0.0112523);
}

double NNfunction-ss_uLuL::synapse0x216faa0() {
   return (neuron0x2169160()*0.0326268);
}

double NNfunction-ss_uLuL::synapse0x216fae0() {
   return (neuron0x21694a0()*-0.00379094);
}

double NNfunction-ss_uLuL::synapse0x216fb20() {
   return (neuron0x21697e0()*0.0101412);
}

double NNfunction-ss_uLuL::synapse0x216fb60() {
   return (neuron0x2169b20()*0.00416408);
}

double NNfunction-ss_uLuL::synapse0x216fba0() {
   return (neuron0x2169e60()*0.000851069);
}

double NNfunction-ss_uLuL::synapse0x216fbe0() {
   return (neuron0x216a1a0()*0.00487536);
}

double NNfunction-ss_uLuL::synapse0x216fc20() {
   return (neuron0x216a4e0()*-0.0132861);
}

double NNfunction-ss_uLuL::synapse0x216fc60() {
   return (neuron0x216a820()*0.780052);
}

double NNfunction-ss_uLuL::synapse0x216fca0() {
   return (neuron0x216ab60()*0.0594826);
}

double NNfunction-ss_uLuL::synapse0x216fce0() {
   return (neuron0x216aea0()*-0.0157345);
}

double NNfunction-ss_uLuL::synapse0x216fd20() {
   return (neuron0x216b1e0()*0.0130188);
}

double NNfunction-ss_uLuL::synapse0x216fd60() {
   return (neuron0x216b520()*0.0437408);
}

double NNfunction-ss_uLuL::synapse0x216f7f0() {
   return (neuron0x216b860()*-0.0681556);
}

double NNfunction-ss_uLuL::synapse0x216f830() {
   return (neuron0x216bdc0()*0.0104446);
}

double NNfunction-ss_uLuL::synapse0x216feb0() {
   return (neuron0x216bfe0()*0.0219057);
}

double NNfunction-ss_uLuL::synapse0x216fef0() {
   return (neuron0x216c320()*0.0546041);
}

double NNfunction-ss_uLuL::synapse0x216ff30() {
   return (neuron0x216c660()*0.0339318);
}

double NNfunction-ss_uLuL::synapse0x216ff70() {
   return (neuron0x216c9a0()*-0.011322);
}

double NNfunction-ss_uLuL::synapse0x216ffb0() {
   return (neuron0x216cce0()*-0.03061);
}

double NNfunction-ss_uLuL::synapse0x216fff0() {
   return (neuron0x216d020()*0.0303054);
}

double NNfunction-ss_uLuL::synapse0x2170370() {
   return (neuron0x21684f0()*0.0421082);
}

double NNfunction-ss_uLuL::synapse0x21703b0() {
   return (neuron0x21687a0()*0.0228169);
}

double NNfunction-ss_uLuL::synapse0x21703f0() {
   return (neuron0x2168ae0()*-0.918634);
}

double NNfunction-ss_uLuL::synapse0x2170430() {
   return (neuron0x2168e20()*-1.54115);
}

double NNfunction-ss_uLuL::synapse0x2170470() {
   return (neuron0x2169160()*0.147089);
}

double NNfunction-ss_uLuL::synapse0x21704b0() {
   return (neuron0x21694a0()*0.108354);
}

double NNfunction-ss_uLuL::synapse0x21704f0() {
   return (neuron0x21697e0()*-0.153129);
}

double NNfunction-ss_uLuL::synapse0x2170530() {
   return (neuron0x2169b20()*0.06385);
}

double NNfunction-ss_uLuL::synapse0x2170570() {
   return (neuron0x2169e60()*-0.325423);
}

double NNfunction-ss_uLuL::synapse0x1f31800() {
   return (neuron0x216a1a0()*-0.154255);
}

double NNfunction-ss_uLuL::synapse0x1f31840() {
   return (neuron0x216a4e0()*-0.00177188);
}

double NNfunction-ss_uLuL::synapse0x1f31880() {
   return (neuron0x216a820()*1.50188);
}

double NNfunction-ss_uLuL::synapse0x1f318c0() {
   return (neuron0x216ab60()*-0.684199);
}

double NNfunction-ss_uLuL::synapse0x1f31900() {
   return (neuron0x216aea0()*-0.174734);
}

double NNfunction-ss_uLuL::synapse0x1f31940() {
   return (neuron0x216b1e0()*-0.124698);
}

double NNfunction-ss_uLuL::synapse0x1f31980() {
   return (neuron0x216b520()*-0.319502);
}

double NNfunction-ss_uLuL::synapse0x21701c0() {
   return (neuron0x216b860()*0.00670429);
}

double NNfunction-ss_uLuL::synapse0x2170200() {
   return (neuron0x216bdc0()*-0.113045);
}

double NNfunction-ss_uLuL::synapse0x1f31ad0() {
   return (neuron0x216bfe0()*-0.0308758);
}

double NNfunction-ss_uLuL::synapse0x1f31b10() {
   return (neuron0x216c320()*-0.0119718);
}

double NNfunction-ss_uLuL::synapse0x1f31b50() {
   return (neuron0x216c660()*0.302627);
}

double NNfunction-ss_uLuL::synapse0x1f31b90() {
   return (neuron0x216c9a0()*0.0335652);
}

double NNfunction-ss_uLuL::synapse0x1f31bd0() {
   return (neuron0x216cce0()*-0.126222);
}

double NNfunction-ss_uLuL::synapse0x2170dc0() {
   return (neuron0x216d020()*0.0479264);
}

double NNfunction-ss_uLuL::synapse0x2171140() {
   return (neuron0x21684f0()*0.0221986);
}

double NNfunction-ss_uLuL::synapse0x2171180() {
   return (neuron0x21687a0()*0.00699883);
}

double NNfunction-ss_uLuL::synapse0x21711c0() {
   return (neuron0x2168ae0()*-0.0062346);
}

double NNfunction-ss_uLuL::synapse0x2171200() {
   return (neuron0x2168e20()*-0.041664);
}

double NNfunction-ss_uLuL::synapse0x2171240() {
   return (neuron0x2169160()*-0.00686939);
}

double NNfunction-ss_uLuL::synapse0x2171280() {
   return (neuron0x21694a0()*-0.0117215);
}

double NNfunction-ss_uLuL::synapse0x21712c0() {
   return (neuron0x21697e0()*-0.0213525);
}

double NNfunction-ss_uLuL::synapse0x2171300() {
   return (neuron0x2169b20()*-0.00171646);
}

double NNfunction-ss_uLuL::synapse0x2171340() {
   return (neuron0x2169e60()*-0.040284);
}

double NNfunction-ss_uLuL::synapse0x2171380() {
   return (neuron0x216a1a0()*-0.0104448);
}

double NNfunction-ss_uLuL::synapse0x21713c0() {
   return (neuron0x216a4e0()*0.00478855);
}

double NNfunction-ss_uLuL::synapse0x2171400() {
   return (neuron0x216a820()*-1.43611);
}

double NNfunction-ss_uLuL::synapse0x2171440() {
   return (neuron0x216ab60()*-0.0140599);
}

double NNfunction-ss_uLuL::synapse0x2171480() {
   return (neuron0x216aea0()*-0.0364553);
}

double NNfunction-ss_uLuL::synapse0x21714c0() {
   return (neuron0x216b1e0()*-0.00483042);
}

double NNfunction-ss_uLuL::synapse0x2171500() {
   return (neuron0x216b520()*-0.00749941);
}

double NNfunction-ss_uLuL::synapse0x2170f90() {
   return (neuron0x216b860()*-0.00877025);
}

double NNfunction-ss_uLuL::synapse0x2170fd0() {
   return (neuron0x216bdc0()*0.0141647);
}

double NNfunction-ss_uLuL::synapse0x2171650() {
   return (neuron0x216bfe0()*0.0238124);
}

double NNfunction-ss_uLuL::synapse0x2171690() {
   return (neuron0x216c320()*-0.0594652);
}

double NNfunction-ss_uLuL::synapse0x21716d0() {
   return (neuron0x216c660()*0.0230621);
}

double NNfunction-ss_uLuL::synapse0x2171710() {
   return (neuron0x216c9a0()*-0.0162941);
}

double NNfunction-ss_uLuL::synapse0x2171750() {
   return (neuron0x216cce0()*0.00898108);
}

double NNfunction-ss_uLuL::synapse0x2171790() {
   return (neuron0x216d020()*-0.00670748);
}

double NNfunction-ss_uLuL::synapse0x2171b10() {
   return (neuron0x21684f0()*0.00241121);
}

double NNfunction-ss_uLuL::synapse0x2171b50() {
   return (neuron0x21687a0()*0.0083757);
}

double NNfunction-ss_uLuL::synapse0x2171b90() {
   return (neuron0x2168ae0()*-0.136804);
}

double NNfunction-ss_uLuL::synapse0x2171bd0() {
   return (neuron0x2168e20()*2.60286);
}

double NNfunction-ss_uLuL::synapse0x2171c10() {
   return (neuron0x2169160()*-0.0111202);
}

double NNfunction-ss_uLuL::synapse0x2171c50() {
   return (neuron0x21694a0()*-0.0293293);
}

double NNfunction-ss_uLuL::synapse0x2171c90() {
   return (neuron0x21697e0()*-0.0515899);
}

double NNfunction-ss_uLuL::synapse0x2171cd0() {
   return (neuron0x2169b20()*-0.0288988);
}

double NNfunction-ss_uLuL::synapse0x2171d10() {
   return (neuron0x2169e60()*-0.0198749);
}

double NNfunction-ss_uLuL::synapse0x2171d50() {
   return (neuron0x216a1a0()*-0.0125932);
}

double NNfunction-ss_uLuL::synapse0x2171d90() {
   return (neuron0x216a4e0()*-0.00470903);
}

double NNfunction-ss_uLuL::synapse0x2171dd0() {
   return (neuron0x216a820()*0.234705);
}

double NNfunction-ss_uLuL::synapse0x2171e10() {
   return (neuron0x216ab60()*-0.0188872);
}

double NNfunction-ss_uLuL::synapse0x2171e50() {
   return (neuron0x216aea0()*-0.0215482);
}

double NNfunction-ss_uLuL::synapse0x2171e90() {
   return (neuron0x216b1e0()*-0.00524322);
}

double NNfunction-ss_uLuL::synapse0x2171ed0() {
   return (neuron0x216b520()*-0.000501304);
}

double NNfunction-ss_uLuL::synapse0x2171960() {
   return (neuron0x216b860()*-0.0107659);
}

double NNfunction-ss_uLuL::synapse0x21719a0() {
   return (neuron0x216bdc0()*-0.00260871);
}

double NNfunction-ss_uLuL::synapse0x2172020() {
   return (neuron0x216bfe0()*0.00322586);
}

double NNfunction-ss_uLuL::synapse0x2172060() {
   return (neuron0x216c320()*-0.00151339);
}

double NNfunction-ss_uLuL::synapse0x21720a0() {
   return (neuron0x216c660()*0.00186374);
}

double NNfunction-ss_uLuL::synapse0x21720e0() {
   return (neuron0x216c9a0()*-0.0110885);
}

double NNfunction-ss_uLuL::synapse0x2172120() {
   return (neuron0x216cce0()*0.012688);
}

double NNfunction-ss_uLuL::synapse0x2172160() {
   return (neuron0x216d020()*0.0132035);
}

double NNfunction-ss_uLuL::synapse0x216bcb0() {
   return (neuron0x21684f0()*0.0274391);
}

double NNfunction-ss_uLuL::synapse0x216bcf0() {
   return (neuron0x21687a0()*-0.00739177);
}

double NNfunction-ss_uLuL::synapse0x216bd30() {
   return (neuron0x2168ae0()*0.0294364);
}

double NNfunction-ss_uLuL::synapse0x216bd70() {
   return (neuron0x2168e20()*-4.374);
}

double NNfunction-ss_uLuL::synapse0x21726f0() {
   return (neuron0x2169160()*-0.00854552);
}

double NNfunction-ss_uLuL::synapse0x2172730() {
   return (neuron0x21694a0()*0.0135396);
}

double NNfunction-ss_uLuL::synapse0x2172770() {
   return (neuron0x21697e0()*-0.00196913);
}

double NNfunction-ss_uLuL::synapse0x21727b0() {
   return (neuron0x2169b20()*-0.0167842);
}

double NNfunction-ss_uLuL::synapse0x21727f0() {
   return (neuron0x2169e60()*0.00172703);
}

double NNfunction-ss_uLuL::synapse0x2172830() {
   return (neuron0x216a1a0()*0.0175153);
}

double NNfunction-ss_uLuL::synapse0x2172870() {
   return (neuron0x216a4e0()*0.0110047);
}

double NNfunction-ss_uLuL::synapse0x21728b0() {
   return (neuron0x216a820()*1.17096);
}

double NNfunction-ss_uLuL::synapse0x21728f0() {
   return (neuron0x216ab60()*-0.00804875);
}

double NNfunction-ss_uLuL::synapse0x2172930() {
   return (neuron0x216aea0()*0.0263914);
}

double NNfunction-ss_uLuL::synapse0x2172970() {
   return (neuron0x216b1e0()*-0.000839848);
}

double NNfunction-ss_uLuL::synapse0x21729b0() {
   return (neuron0x216b520()*-0.0206802);
}

double NNfunction-ss_uLuL::synapse0x2172330() {
   return (neuron0x216b860()*0.03214);
}

double NNfunction-ss_uLuL::synapse0x2172370() {
   return (neuron0x216bdc0()*-0.0101373);
}

double NNfunction-ss_uLuL::synapse0x2172b00() {
   return (neuron0x216bfe0()*-0.0448855);
}

double NNfunction-ss_uLuL::synapse0x2172b40() {
   return (neuron0x216c320()*0.017164);
}

double NNfunction-ss_uLuL::synapse0x2172b80() {
   return (neuron0x216c660()*-0.0275535);
}

double NNfunction-ss_uLuL::synapse0x2172bc0() {
   return (neuron0x216c9a0()*-0.0181039);
}

double NNfunction-ss_uLuL::synapse0x2172c00() {
   return (neuron0x216cce0()*-0.000199885);
}

double NNfunction-ss_uLuL::synapse0x2172c40() {
   return (neuron0x216d020()*-0.0277243);
}

double NNfunction-ss_uLuL::synapse0x2172fc0() {
   return (neuron0x21684f0()*-0.0232721);
}

double NNfunction-ss_uLuL::synapse0x2173000() {
   return (neuron0x21687a0()*-0.000792787);
}

double NNfunction-ss_uLuL::synapse0x2173040() {
   return (neuron0x2168ae0()*0.385378);
}

double NNfunction-ss_uLuL::synapse0x2173080() {
   return (neuron0x2168e20()*-2.52909);
}

double NNfunction-ss_uLuL::synapse0x21730c0() {
   return (neuron0x2169160()*-0.0357727);
}

double NNfunction-ss_uLuL::synapse0x2173100() {
   return (neuron0x21694a0()*-0.11854);
}

double NNfunction-ss_uLuL::synapse0x2173140() {
   return (neuron0x21697e0()*-0.0389533);
}

double NNfunction-ss_uLuL::synapse0x2173180() {
   return (neuron0x2169b20()*-0.04342);
}

double NNfunction-ss_uLuL::synapse0x21731c0() {
   return (neuron0x2169e60()*-0.0866757);
}

double NNfunction-ss_uLuL::synapse0x2173200() {
   return (neuron0x216a1a0()*-0.0869112);
}

double NNfunction-ss_uLuL::synapse0x2173240() {
   return (neuron0x216a4e0()*-0.106547);
}

double NNfunction-ss_uLuL::synapse0x2173280() {
   return (neuron0x216a820()*1.92047);
}

double NNfunction-ss_uLuL::synapse0x21732c0() {
   return (neuron0x216ab60()*0.0463697);
}

double NNfunction-ss_uLuL::synapse0x2173300() {
   return (neuron0x216aea0()*0.165792);
}

double NNfunction-ss_uLuL::synapse0x2173340() {
   return (neuron0x216b1e0()*-0.0623745);
}

double NNfunction-ss_uLuL::synapse0x2173380() {
   return (neuron0x216b520()*0.112551);
}

double NNfunction-ss_uLuL::synapse0x2172e10() {
   return (neuron0x216b860()*0.130455);
}

double NNfunction-ss_uLuL::synapse0x2172e50() {
   return (neuron0x216bdc0()*-0.000468089);
}

double NNfunction-ss_uLuL::synapse0x21734d0() {
   return (neuron0x216bfe0()*-0.00594338);
}

double NNfunction-ss_uLuL::synapse0x2173510() {
   return (neuron0x216c320()*-0.0589908);
}

double NNfunction-ss_uLuL::synapse0x2173550() {
   return (neuron0x216c660()*-0.0218126);
}

double NNfunction-ss_uLuL::synapse0x2173590() {
   return (neuron0x216c9a0()*0.0611889);
}

double NNfunction-ss_uLuL::synapse0x21735d0() {
   return (neuron0x216cce0()*0.00582809);
}

double NNfunction-ss_uLuL::synapse0x2173610() {
   return (neuron0x216d020()*0.0335999);
}

double NNfunction-ss_uLuL::synapse0x2173990() {
   return (neuron0x21684f0()*-0.280946);
}

double NNfunction-ss_uLuL::synapse0x21739d0() {
   return (neuron0x21687a0()*0.0904445);
}

double NNfunction-ss_uLuL::synapse0x2173a10() {
   return (neuron0x2168ae0()*-0.283018);
}

double NNfunction-ss_uLuL::synapse0x2173a50() {
   return (neuron0x2168e20()*0.119112);
}

double NNfunction-ss_uLuL::synapse0x2173a90() {
   return (neuron0x2169160()*0.186219);
}

double NNfunction-ss_uLuL::synapse0x2173ad0() {
   return (neuron0x21694a0()*-0.724979);
}

double NNfunction-ss_uLuL::synapse0x2173b10() {
   return (neuron0x21697e0()*-0.588106);
}

double NNfunction-ss_uLuL::synapse0x2173b50() {
   return (neuron0x2169b20()*1.12873);
}

double NNfunction-ss_uLuL::synapse0x2173b90() {
   return (neuron0x2169e60()*0.485212);
}

double NNfunction-ss_uLuL::synapse0x2173bd0() {
   return (neuron0x216a1a0()*0.300219);
}

double NNfunction-ss_uLuL::synapse0x2173c10() {
   return (neuron0x216a4e0()*-0.0124695);
}

double NNfunction-ss_uLuL::synapse0x2173c50() {
   return (neuron0x216a820()*1.38731);
}

double NNfunction-ss_uLuL::synapse0x2173c90() {
   return (neuron0x216ab60()*-0.912118);
}

double NNfunction-ss_uLuL::synapse0x2173cd0() {
   return (neuron0x216aea0()*-0.389408);
}

double NNfunction-ss_uLuL::synapse0x2173d10() {
   return (neuron0x216b1e0()*-0.314538);
}

double NNfunction-ss_uLuL::synapse0x2173d50() {
   return (neuron0x216b520()*0.557327);
}

double NNfunction-ss_uLuL::synapse0x21737e0() {
   return (neuron0x216b860()*0.151197);
}

double NNfunction-ss_uLuL::synapse0x2173820() {
   return (neuron0x216bdc0()*-0.16768);
}

double NNfunction-ss_uLuL::synapse0x21705b0() {
   return (neuron0x216bfe0()*-0.360966);
}

double NNfunction-ss_uLuL::synapse0x21705f0() {
   return (neuron0x216c320()*-0.276011);
}

double NNfunction-ss_uLuL::synapse0x2170630() {
   return (neuron0x216c660()*0.885496);
}

double NNfunction-ss_uLuL::synapse0x2170670() {
   return (neuron0x216c9a0()*0.0618707);
}

double NNfunction-ss_uLuL::synapse0x21706b0() {
   return (neuron0x216cce0()*-0.112531);
}

double NNfunction-ss_uLuL::synapse0x21706f0() {
   return (neuron0x216d020()*0.0968634);
}

double NNfunction-ss_uLuL::synapse0x2170a70() {
   return (neuron0x21684f0()*0.0329703);
}

double NNfunction-ss_uLuL::synapse0x2170ab0() {
   return (neuron0x21687a0()*-0.190441);
}

double NNfunction-ss_uLuL::synapse0x2170af0() {
   return (neuron0x2168ae0()*-0.315246);
}

double NNfunction-ss_uLuL::synapse0x2170b30() {
   return (neuron0x2168e20()*0.302335);
}

double NNfunction-ss_uLuL::synapse0x2170b70() {
   return (neuron0x2169160()*0.0548638);
}

double NNfunction-ss_uLuL::synapse0x2170bb0() {
   return (neuron0x21694a0()*0.127071);
}

double NNfunction-ss_uLuL::synapse0x2170bf0() {
   return (neuron0x21697e0()*-0.0198933);
}

double NNfunction-ss_uLuL::synapse0x2170c30() {
   return (neuron0x2169b20()*-0.00852317);
}

double NNfunction-ss_uLuL::synapse0x2170c70() {
   return (neuron0x2169e60()*0.233267);
}

double NNfunction-ss_uLuL::synapse0x2170cb0() {
   return (neuron0x216a1a0()*0.405536);
}

double NNfunction-ss_uLuL::synapse0x2170cf0() {
   return (neuron0x216a4e0()*-0.324495);
}

double NNfunction-ss_uLuL::synapse0x2170d30() {
   return (neuron0x216a820()*0.941228);
}

double NNfunction-ss_uLuL::synapse0x2170d70() {
   return (neuron0x216ab60()*0.194349);
}

double NNfunction-ss_uLuL::synapse0x2174eb0() {
   return (neuron0x216aea0()*-0.048598);
}

double NNfunction-ss_uLuL::synapse0x2174ef0() {
   return (neuron0x216b1e0()*0.0267411);
}

double NNfunction-ss_uLuL::synapse0x2174f30() {
   return (neuron0x216b520()*-0.250427);
}

double NNfunction-ss_uLuL::synapse0x21708c0() {
   return (neuron0x216b860()*0.00751355);
}

double NNfunction-ss_uLuL::synapse0x2170900() {
   return (neuron0x216bdc0()*-0.613124);
}

double NNfunction-ss_uLuL::synapse0x2175080() {
   return (neuron0x216bfe0()*0.0924036);
}

double NNfunction-ss_uLuL::synapse0x21750c0() {
   return (neuron0x216c320()*-0.865383);
}

double NNfunction-ss_uLuL::synapse0x2175100() {
   return (neuron0x216c660()*-0.209163);
}

double NNfunction-ss_uLuL::synapse0x2175140() {
   return (neuron0x216c9a0()*0.178586);
}

double NNfunction-ss_uLuL::synapse0x2175180() {
   return (neuron0x216cce0()*-0.0386933);
}

double NNfunction-ss_uLuL::synapse0x21751c0() {
   return (neuron0x216d020()*0.0484005);
}

double NNfunction-ss_uLuL::synapse0x2175540() {
   return (neuron0x21684f0()*0.00623866);
}

double NNfunction-ss_uLuL::synapse0x2175580() {
   return (neuron0x21687a0()*0.17928);
}

double NNfunction-ss_uLuL::synapse0x21755c0() {
   return (neuron0x2168ae0()*0.430227);
}

double NNfunction-ss_uLuL::synapse0x2175600() {
   return (neuron0x2168e20()*-0.284297);
}

double NNfunction-ss_uLuL::synapse0x2175640() {
   return (neuron0x2169160()*-0.257048);
}

double NNfunction-ss_uLuL::synapse0x2175680() {
   return (neuron0x21694a0()*-0.33391);
}

double NNfunction-ss_uLuL::synapse0x21756c0() {
   return (neuron0x21697e0()*-0.129215);
}

double NNfunction-ss_uLuL::synapse0x2175700() {
   return (neuron0x2169b20()*0.312601);
}

double NNfunction-ss_uLuL::synapse0x2175740() {
   return (neuron0x2169e60()*-0.300575);
}

double NNfunction-ss_uLuL::synapse0x2175780() {
   return (neuron0x216a1a0()*-0.292076);
}

double NNfunction-ss_uLuL::synapse0x21757c0() {
   return (neuron0x216a4e0()*0.361469);
}

double NNfunction-ss_uLuL::synapse0x2175800() {
   return (neuron0x216a820()*-2.19784);
}

double NNfunction-ss_uLuL::synapse0x2175840() {
   return (neuron0x216ab60()*-0.426294);
}

double NNfunction-ss_uLuL::synapse0x2175880() {
   return (neuron0x216aea0()*-0.473946);
}

double NNfunction-ss_uLuL::synapse0x21758c0() {
   return (neuron0x216b1e0()*0.170356);
}

double NNfunction-ss_uLuL::synapse0x2175900() {
   return (neuron0x216b520()*0.0356553);
}

double NNfunction-ss_uLuL::synapse0x2175390() {
   return (neuron0x216b860()*0.0370814);
}

double NNfunction-ss_uLuL::synapse0x21753d0() {
   return (neuron0x216bdc0()*0.811361);
}

double NNfunction-ss_uLuL::synapse0x2175a50() {
   return (neuron0x216bfe0()*0.123212);
}

double NNfunction-ss_uLuL::synapse0x2175a90() {
   return (neuron0x216c320()*1.45687);
}

double NNfunction-ss_uLuL::synapse0x2175ad0() {
   return (neuron0x216c660()*0.11879);
}

double NNfunction-ss_uLuL::synapse0x2175b10() {
   return (neuron0x216c9a0()*-0.296228);
}

double NNfunction-ss_uLuL::synapse0x2175b50() {
   return (neuron0x216cce0()*0.0725753);
}

double NNfunction-ss_uLuL::synapse0x2175b90() {
   return (neuron0x216d020()*0.0541118);
}

double NNfunction-ss_uLuL::synapse0x2175f10() {
   return (neuron0x21684f0()*0.0448849);
}

double NNfunction-ss_uLuL::synapse0x2175f50() {
   return (neuron0x21687a0()*-0.00178515);
}

double NNfunction-ss_uLuL::synapse0x2175f90() {
   return (neuron0x2168ae0()*0.0802332);
}

double NNfunction-ss_uLuL::synapse0x2175fd0() {
   return (neuron0x2168e20()*-0.102058);
}

double NNfunction-ss_uLuL::synapse0x2176010() {
   return (neuron0x2169160()*-0.00693822);
}

double NNfunction-ss_uLuL::synapse0x2176050() {
   return (neuron0x21694a0()*0.00273679);
}

double NNfunction-ss_uLuL::synapse0x2176090() {
   return (neuron0x21697e0()*0.0111481);
}

double NNfunction-ss_uLuL::synapse0x21760d0() {
   return (neuron0x2169b20()*-0.0178116);
}

double NNfunction-ss_uLuL::synapse0x2176110() {
   return (neuron0x2169e60()*-0.055318);
}

double NNfunction-ss_uLuL::synapse0x2176150() {
   return (neuron0x216a1a0()*0.0120435);
}

double NNfunction-ss_uLuL::synapse0x2176190() {
   return (neuron0x216a4e0()*0.011638);
}

double NNfunction-ss_uLuL::synapse0x21761d0() {
   return (neuron0x216a820()*-2.2386);
}

double NNfunction-ss_uLuL::synapse0x2176210() {
   return (neuron0x216ab60()*0.0530921);
}

double NNfunction-ss_uLuL::synapse0x2176250() {
   return (neuron0x216aea0()*-0.0185652);
}

double NNfunction-ss_uLuL::synapse0x2176290() {
   return (neuron0x216b1e0()*0.0384428);
}

double NNfunction-ss_uLuL::synapse0x21762d0() {
   return (neuron0x216b520()*0.0396942);
}

double NNfunction-ss_uLuL::synapse0x2175d60() {
   return (neuron0x216b860()*-0.0328283);
}

double NNfunction-ss_uLuL::synapse0x2175da0() {
   return (neuron0x216bdc0()*0.0326089);
}

double NNfunction-ss_uLuL::synapse0x2176420() {
   return (neuron0x216bfe0()*-0.00516143);
}

double NNfunction-ss_uLuL::synapse0x2176460() {
   return (neuron0x216c320()*-0.0126993);
}

double NNfunction-ss_uLuL::synapse0x21764a0() {
   return (neuron0x216c660()*-0.0383655);
}

double NNfunction-ss_uLuL::synapse0x21764e0() {
   return (neuron0x216c9a0()*0.0131679);
}

double NNfunction-ss_uLuL::synapse0x2176520() {
   return (neuron0x216cce0()*-0.00351641);
}

double NNfunction-ss_uLuL::synapse0x2176560() {
   return (neuron0x216d020()*-0.014394);
}

double NNfunction-ss_uLuL::synapse0x21768e0() {
   return (neuron0x21684f0()*-0.416463);
}

double NNfunction-ss_uLuL::synapse0x2176920() {
   return (neuron0x21687a0()*-0.0127497);
}

double NNfunction-ss_uLuL::synapse0x2176960() {
   return (neuron0x2168ae0()*-0.075273);
}

double NNfunction-ss_uLuL::synapse0x21769a0() {
   return (neuron0x2168e20()*0.702936);
}

double NNfunction-ss_uLuL::synapse0x21769e0() {
   return (neuron0x2169160()*-0.276551);
}

double NNfunction-ss_uLuL::synapse0x2176a20() {
   return (neuron0x21694a0()*-0.314498);
}

double NNfunction-ss_uLuL::synapse0x2176a60() {
   return (neuron0x21697e0()*0.749558);
}

double NNfunction-ss_uLuL::synapse0x2176aa0() {
   return (neuron0x2169b20()*-0.589965);
}

double NNfunction-ss_uLuL::synapse0x2176ae0() {
   return (neuron0x2169e60()*0.27996);
}

double NNfunction-ss_uLuL::synapse0x2176b20() {
   return (neuron0x216a1a0()*0.395014);
}

double NNfunction-ss_uLuL::synapse0x2176b60() {
   return (neuron0x216a4e0()*-0.24399);
}

double NNfunction-ss_uLuL::synapse0x2176ba0() {
   return (neuron0x216a820()*0.572028);
}

double NNfunction-ss_uLuL::synapse0x2176be0() {
   return (neuron0x216ab60()*-0.845133);
}

double NNfunction-ss_uLuL::synapse0x2176c20() {
   return (neuron0x216aea0()*0.218656);
}

double NNfunction-ss_uLuL::synapse0x2176c60() {
   return (neuron0x216b1e0()*1.0472);
}

double NNfunction-ss_uLuL::synapse0x2176ca0() {
   return (neuron0x216b520()*0.548477);
}

double NNfunction-ss_uLuL::synapse0x2176730() {
   return (neuron0x216b860()*0.0404162);
}

double NNfunction-ss_uLuL::synapse0x2176770() {
   return (neuron0x216bdc0()*-0.553373);
}

double NNfunction-ss_uLuL::synapse0x2176df0() {
   return (neuron0x216bfe0()*0.214798);
}

double NNfunction-ss_uLuL::synapse0x2176e30() {
   return (neuron0x216c320()*-0.564563);
}

double NNfunction-ss_uLuL::synapse0x2176e70() {
   return (neuron0x216c660()*-0.350815);
}

double NNfunction-ss_uLuL::synapse0x2176eb0() {
   return (neuron0x216c9a0()*0.450541);
}

double NNfunction-ss_uLuL::synapse0x2176ef0() {
   return (neuron0x216cce0()*-0.268769);
}

double NNfunction-ss_uLuL::synapse0x2176f30() {
   return (neuron0x216d020()*0.35057);
}

double NNfunction-ss_uLuL::synapse0x21772b0() {
   return (neuron0x21684f0()*-0.261266);
}

double NNfunction-ss_uLuL::synapse0x2168680() {
   return (neuron0x21687a0()*0.138799);
}

double NNfunction-ss_uLuL::synapse0x21686c0() {
   return (neuron0x2168ae0()*-0.547011);
}

double NNfunction-ss_uLuL::synapse0x21689c0() {
   return (neuron0x2168e20()*-0.521161);
}

double NNfunction-ss_uLuL::synapse0x2168a00() {
   return (neuron0x2169160()*-0.0535181);
}

double NNfunction-ss_uLuL::synapse0x2168d00() {
   return (neuron0x21694a0()*0.165118);
}

double NNfunction-ss_uLuL::synapse0x2168d40() {
   return (neuron0x21697e0()*0.348612);
}

double NNfunction-ss_uLuL::synapse0x2169040() {
   return (neuron0x2169b20()*0.0673165);
}

double NNfunction-ss_uLuL::synapse0x2169080() {
   return (neuron0x2169e60()*0.0587722);
}

double NNfunction-ss_uLuL::synapse0x2169380() {
   return (neuron0x216a1a0()*0.0450456);
}

double NNfunction-ss_uLuL::synapse0x21693c0() {
   return (neuron0x216a4e0()*-0.139176);
}

double NNfunction-ss_uLuL::synapse0x21696c0() {
   return (neuron0x216a820()*-1.68504);
}

double NNfunction-ss_uLuL::synapse0x2169700() {
   return (neuron0x216ab60()*0.0255369);
}

double NNfunction-ss_uLuL::synapse0x2169a00() {
   return (neuron0x216aea0()*0.0263162);
}

double NNfunction-ss_uLuL::synapse0x2169a40() {
   return (neuron0x216b1e0()*0.112082);
}

double NNfunction-ss_uLuL::synapse0x2169d40() {
   return (neuron0x216b520()*0.310136);
}

double NNfunction-ss_uLuL::synapse0x2169d80() {
   return (neuron0x216b860()*0.200206);
}

double NNfunction-ss_uLuL::synapse0x216a080() {
   return (neuron0x216bdc0()*-0.112824);
}

double NNfunction-ss_uLuL::synapse0x216a0c0() {
   return (neuron0x216bfe0()*0.0746934);
}

double NNfunction-ss_uLuL::synapse0x216a3c0() {
   return (neuron0x216c320()*-0.144071);
}

double NNfunction-ss_uLuL::synapse0x216a400() {
   return (neuron0x216c660()*0.0160506);
}

double NNfunction-ss_uLuL::synapse0x216a700() {
   return (neuron0x216c9a0()*0.115152);
}

double NNfunction-ss_uLuL::synapse0x216a740() {
   return (neuron0x216cce0()*-0.0389558);
}

double NNfunction-ss_uLuL::synapse0x216aa40() {
   return (neuron0x216d020()*0.00321447);
}

double NNfunction-ss_uLuL::synapse0x216aa80() {
   return (neuron0x21684f0()*0.293947);
}

double NNfunction-ss_uLuL::synapse0x216b740() {
   return (neuron0x21687a0()*0.580513);
}

double NNfunction-ss_uLuL::synapse0x216b780() {
   return (neuron0x2168ae0()*0.00295833);
}

double NNfunction-ss_uLuL::synapse0x2177100() {
   return (neuron0x2168e20()*-0.648776);
}

double NNfunction-ss_uLuL::synapse0x2177140() {
   return (neuron0x2169160()*0.924889);
}

double NNfunction-ss_uLuL::synapse0x216ba80() {
   return (neuron0x21694a0()*-0.167522);
}

double NNfunction-ss_uLuL::synapse0x216bac0() {
   return (neuron0x21697e0()*0.204567);
}

double NNfunction-ss_uLuL::synapse0x1f234b0() {
   return (neuron0x2169b20()*-0.0968207);
}

double NNfunction-ss_uLuL::synapse0x1f234f0() {
   return (neuron0x2169e60()*-0.259032);
}

double NNfunction-ss_uLuL::synapse0x216c200() {
   return (neuron0x216a1a0()*-0.385447);
}

double NNfunction-ss_uLuL::synapse0x216c240() {
   return (neuron0x216a4e0()*-0.426294);
}

double NNfunction-ss_uLuL::synapse0x216c540() {
   return (neuron0x216a820()*-0.0805377);
}

double NNfunction-ss_uLuL::synapse0x216c580() {
   return (neuron0x216ab60()*0.103522);
}

double NNfunction-ss_uLuL::synapse0x216c880() {
   return (neuron0x216aea0()*0.51515);
}

double NNfunction-ss_uLuL::synapse0x216c8c0() {
   return (neuron0x216b1e0()*0.74162);
}

double NNfunction-ss_uLuL::synapse0x216cbc0() {
   return (neuron0x216b520()*0.0595902);
}

double NNfunction-ss_uLuL::synapse0x216cc00() {
   return (neuron0x216b860()*0.0982776);
}

double NNfunction-ss_uLuL::synapse0x216cf00() {
   return (neuron0x216bdc0()*-0.530757);
}

double NNfunction-ss_uLuL::synapse0x216cf40() {
   return (neuron0x216bfe0()*0.252183);
}

double NNfunction-ss_uLuL::synapse0x216d240() {
   return (neuron0x216c320()*-0.920574);
}

double NNfunction-ss_uLuL::synapse0x216d280() {
   return (neuron0x216c660()*0.187643);
}

double NNfunction-ss_uLuL::synapse0x216ad80() {
   return (neuron0x216c9a0()*-0.063779);
}

double NNfunction-ss_uLuL::synapse0x216adc0() {
   return (neuron0x216cce0()*0.099733);
}

double NNfunction-ss_uLuL::synapse0x2179020() {
   return (neuron0x216d020()*0.132973);
}

double NNfunction-ss_uLuL::synapse0x21793a0() {
   return (neuron0x21684f0()*0.0166231);
}

double NNfunction-ss_uLuL::synapse0x21793e0() {
   return (neuron0x21687a0()*-0.00544843);
}

double NNfunction-ss_uLuL::synapse0x2179420() {
   return (neuron0x2168ae0()*0.199193);
}

double NNfunction-ss_uLuL::synapse0x2179460() {
   return (neuron0x2168e20()*3.05642);
}

double NNfunction-ss_uLuL::synapse0x21794a0() {
   return (neuron0x2169160()*-0.00157914);
}

double NNfunction-ss_uLuL::synapse0x21794e0() {
   return (neuron0x21694a0()*0.0119666);
}

double NNfunction-ss_uLuL::synapse0x2179520() {
   return (neuron0x21697e0()*0.0187131);
}

double NNfunction-ss_uLuL::synapse0x2179560() {
   return (neuron0x2169b20()*0.0117136);
}

double NNfunction-ss_uLuL::synapse0x21795a0() {
   return (neuron0x2169e60()*0.00725266);
}

double NNfunction-ss_uLuL::synapse0x21795e0() {
   return (neuron0x216a1a0()*0.0199345);
}

double NNfunction-ss_uLuL::synapse0x2179620() {
   return (neuron0x216a4e0()*0.0135825);
}

double NNfunction-ss_uLuL::synapse0x2179660() {
   return (neuron0x216a820()*0.0802927);
}

double NNfunction-ss_uLuL::synapse0x21796a0() {
   return (neuron0x216ab60()*-0.0131607);
}

double NNfunction-ss_uLuL::synapse0x21796e0() {
   return (neuron0x216aea0()*0.0411505);
}

double NNfunction-ss_uLuL::synapse0x2179720() {
   return (neuron0x216b1e0()*0.00276011);
}

double NNfunction-ss_uLuL::synapse0x2179760() {
   return (neuron0x216b520()*0.00611093);
}

double NNfunction-ss_uLuL::synapse0x21791f0() {
   return (neuron0x216b860()*0.0179497);
}

double NNfunction-ss_uLuL::synapse0x2179230() {
   return (neuron0x216bdc0()*0.000804217);
}

double NNfunction-ss_uLuL::synapse0x21798b0() {
   return (neuron0x216bfe0()*-0.0282343);
}

double NNfunction-ss_uLuL::synapse0x21798f0() {
   return (neuron0x216c320()*0.0111596);
}

double NNfunction-ss_uLuL::synapse0x2179930() {
   return (neuron0x216c660()*-0.0244148);
}

double NNfunction-ss_uLuL::synapse0x2179970() {
   return (neuron0x216c9a0()*0.00450403);
}

double NNfunction-ss_uLuL::synapse0x21799b0() {
   return (neuron0x216cce0()*0.00704377);
}

double NNfunction-ss_uLuL::synapse0x21799f0() {
   return (neuron0x216d020()*0.00132865);
}

double NNfunction-ss_uLuL::synapse0x2179d70() {
   return (neuron0x21684f0()*0.0388726);
}

double NNfunction-ss_uLuL::synapse0x2179db0() {
   return (neuron0x21687a0()*-0.0178208);
}

double NNfunction-ss_uLuL::synapse0x2179df0() {
   return (neuron0x2168ae0()*-0.554913);
}

double NNfunction-ss_uLuL::synapse0x2179e30() {
   return (neuron0x2168e20()*1.49919);
}

double NNfunction-ss_uLuL::synapse0x2179e70() {
   return (neuron0x2169160()*0.039496);
}

double NNfunction-ss_uLuL::synapse0x2179eb0() {
   return (neuron0x21694a0()*0.0523909);
}

double NNfunction-ss_uLuL::synapse0x2179ef0() {
   return (neuron0x21697e0()*-0.0407198);
}

double NNfunction-ss_uLuL::synapse0x2179f30() {
   return (neuron0x2169b20()*-0.0651159);
}

double NNfunction-ss_uLuL::synapse0x2179f70() {
   return (neuron0x2169e60()*-0.0307596);
}

double NNfunction-ss_uLuL::synapse0x2179fb0() {
   return (neuron0x216a1a0()*0.0171209);
}

double NNfunction-ss_uLuL::synapse0x2179ff0() {
   return (neuron0x216a4e0()*0.00027979);
}

double NNfunction-ss_uLuL::synapse0x217a030() {
   return (neuron0x216a820()*-0.926366);
}

double NNfunction-ss_uLuL::synapse0x217a070() {
   return (neuron0x216ab60()*-0.0955763);
}

double NNfunction-ss_uLuL::synapse0x217a0b0() {
   return (neuron0x216aea0()*-0.0562875);
}

double NNfunction-ss_uLuL::synapse0x217a0f0() {
   return (neuron0x216b1e0()*-0.0180788);
}

double NNfunction-ss_uLuL::synapse0x217a130() {
   return (neuron0x216b520()*-0.0723917);
}

double NNfunction-ss_uLuL::synapse0x2179bc0() {
   return (neuron0x216b860()*-0.102016);
}

double NNfunction-ss_uLuL::synapse0x2179c00() {
   return (neuron0x216bdc0()*0.00336653);
}

double NNfunction-ss_uLuL::synapse0x217a280() {
   return (neuron0x216bfe0()*-0.0116787);
}

double NNfunction-ss_uLuL::synapse0x217a2c0() {
   return (neuron0x216c320()*0.0294547);
}

double NNfunction-ss_uLuL::synapse0x217a300() {
   return (neuron0x216c660()*-0.0592556);
}

double NNfunction-ss_uLuL::synapse0x217a340() {
   return (neuron0x216c9a0()*-0.0861307);
}

double NNfunction-ss_uLuL::synapse0x217a380() {
   return (neuron0x216cce0()*0.0671056);
}

double NNfunction-ss_uLuL::synapse0x217a3c0() {
   return (neuron0x216d020()*-0.00958529);
}

double NNfunction-ss_uLuL::synapse0x217a740() {
   return (neuron0x21684f0()*0.015128);
}

double NNfunction-ss_uLuL::synapse0x217a780() {
   return (neuron0x21687a0()*0.00117524);
}

double NNfunction-ss_uLuL::synapse0x217a7c0() {
   return (neuron0x2168ae0()*-0.441173);
}

double NNfunction-ss_uLuL::synapse0x217a800() {
   return (neuron0x2168e20()*-0.882079);
}

double NNfunction-ss_uLuL::synapse0x217a840() {
   return (neuron0x2169160()*-0.0408998);
}

double NNfunction-ss_uLuL::synapse0x217a880() {
   return (neuron0x21694a0()*-0.114816);
}

double NNfunction-ss_uLuL::synapse0x217a8c0() {
   return (neuron0x21697e0()*-0.096388);
}

double NNfunction-ss_uLuL::synapse0x217a900() {
   return (neuron0x2169b20()*-0.0108548);
}

double NNfunction-ss_uLuL::synapse0x217a940() {
   return (neuron0x2169e60()*-0.0697725);
}

double NNfunction-ss_uLuL::synapse0x217a980() {
   return (neuron0x216a1a0()*-0.0316189);
}

double NNfunction-ss_uLuL::synapse0x217a9c0() {
   return (neuron0x216a4e0()*-0.00628899);
}

double NNfunction-ss_uLuL::synapse0x217aa00() {
   return (neuron0x216a820()*1.70109);
}

double NNfunction-ss_uLuL::synapse0x217aa40() {
   return (neuron0x216ab60()*-0.18396);
}

double NNfunction-ss_uLuL::synapse0x217aa80() {
   return (neuron0x216aea0()*0.00966042);
}

double NNfunction-ss_uLuL::synapse0x217aac0() {
   return (neuron0x216b1e0()*-0.155136);
}

double NNfunction-ss_uLuL::synapse0x217ab00() {
   return (neuron0x216b520()*-0.0496773);
}

double NNfunction-ss_uLuL::synapse0x217a590() {
   return (neuron0x216b860()*0.0246028);
}

double NNfunction-ss_uLuL::synapse0x217a5d0() {
   return (neuron0x216bdc0()*-0.102226);
}

double NNfunction-ss_uLuL::synapse0x217ac50() {
   return (neuron0x216bfe0()*-0.0676991);
}

double NNfunction-ss_uLuL::synapse0x217ac90() {
   return (neuron0x216c320()*-0.0124881);
}

double NNfunction-ss_uLuL::synapse0x217acd0() {
   return (neuron0x216c660()*-0.00686045);
}

double NNfunction-ss_uLuL::synapse0x217ad10() {
   return (neuron0x216c9a0()*-0.0143814);
}

double NNfunction-ss_uLuL::synapse0x217ad50() {
   return (neuron0x216cce0()*0.0270474);
}

double NNfunction-ss_uLuL::synapse0x217ad90() {
   return (neuron0x216d020()*0.0377545);
}

double NNfunction-ss_uLuL::synapse0x217b110() {
   return (neuron0x21684f0()*-0.0517709);
}

double NNfunction-ss_uLuL::synapse0x217b150() {
   return (neuron0x21687a0()*0.282122);
}

double NNfunction-ss_uLuL::synapse0x217b190() {
   return (neuron0x2168ae0()*-0.67757);
}

double NNfunction-ss_uLuL::synapse0x217b1d0() {
   return (neuron0x2168e20()*0.621522);
}

double NNfunction-ss_uLuL::synapse0x217b210() {
   return (neuron0x2169160()*-0.324988);
}

double NNfunction-ss_uLuL::synapse0x217b250() {
   return (neuron0x21694a0()*-0.29745);
}

double NNfunction-ss_uLuL::synapse0x217b290() {
   return (neuron0x21697e0()*0.00167343);
}

double NNfunction-ss_uLuL::synapse0x217b2d0() {
   return (neuron0x2169b20()*-0.305586);
}

double NNfunction-ss_uLuL::synapse0x217b310() {
   return (neuron0x2169e60()*-0.422572);
}

double NNfunction-ss_uLuL::synapse0x217b350() {
   return (neuron0x216a1a0()*0.29886);
}

double NNfunction-ss_uLuL::synapse0x217b390() {
   return (neuron0x216a4e0()*-0.544115);
}

double NNfunction-ss_uLuL::synapse0x217b3d0() {
   return (neuron0x216a820()*-0.159918);
}

double NNfunction-ss_uLuL::synapse0x217b410() {
   return (neuron0x216ab60()*-0.596595);
}

double NNfunction-ss_uLuL::synapse0x217b450() {
   return (neuron0x216aea0()*-0.375706);
}

double NNfunction-ss_uLuL::synapse0x217b490() {
   return (neuron0x216b1e0()*0.190223);
}

double NNfunction-ss_uLuL::synapse0x217b4d0() {
   return (neuron0x216b520()*-0.469491);
}

double NNfunction-ss_uLuL::synapse0x217af60() {
   return (neuron0x216b860()*-0.216286);
}

double NNfunction-ss_uLuL::synapse0x217afa0() {
   return (neuron0x216bdc0()*-0.870788);
}

double NNfunction-ss_uLuL::synapse0x217b620() {
   return (neuron0x216bfe0()*-0.586268);
}

double NNfunction-ss_uLuL::synapse0x217b660() {
   return (neuron0x216c320()*-0.534806);
}

double NNfunction-ss_uLuL::synapse0x217b6a0() {
   return (neuron0x216c660()*0.337496);
}

double NNfunction-ss_uLuL::synapse0x217b6e0() {
   return (neuron0x216c9a0()*0.149154);
}

double NNfunction-ss_uLuL::synapse0x217b720() {
   return (neuron0x216cce0()*-0.343612);
}

double NNfunction-ss_uLuL::synapse0x217b760() {
   return (neuron0x216d020()*-0.171983);
}

double NNfunction-ss_uLuL::synapse0x217bae0() {
   return (neuron0x21684f0()*-0.228594);
}

double NNfunction-ss_uLuL::synapse0x217bb20() {
   return (neuron0x21687a0()*-0.0384582);
}

double NNfunction-ss_uLuL::synapse0x217bb60() {
   return (neuron0x2168ae0()*-0.639439);
}

double NNfunction-ss_uLuL::synapse0x217bba0() {
   return (neuron0x2168e20()*1.2524);
}

double NNfunction-ss_uLuL::synapse0x217bbe0() {
   return (neuron0x2169160()*0.028969);
}

double NNfunction-ss_uLuL::synapse0x217bc20() {
   return (neuron0x21694a0()*-0.139893);
}

double NNfunction-ss_uLuL::synapse0x217bc60() {
   return (neuron0x21697e0()*-0.278277);
}

double NNfunction-ss_uLuL::synapse0x217bca0() {
   return (neuron0x2169b20()*-0.144416);
}

double NNfunction-ss_uLuL::synapse0x217bce0() {
   return (neuron0x2169e60()*-0.235308);
}

double NNfunction-ss_uLuL::synapse0x2173ea0() {
   return (neuron0x216a1a0()*0.0643823);
}

double NNfunction-ss_uLuL::synapse0x2173ee0() {
   return (neuron0x216a4e0()*-0.00254006);
}

double NNfunction-ss_uLuL::synapse0x2173f20() {
   return (neuron0x216a820()*-0.469729);
}

double NNfunction-ss_uLuL::synapse0x2173f60() {
   return (neuron0x216ab60()*0.591059);
}

double NNfunction-ss_uLuL::synapse0x2173fa0() {
   return (neuron0x216aea0()*0.190078);
}

double NNfunction-ss_uLuL::synapse0x2173fe0() {
   return (neuron0x216b1e0()*0.035553);
}

double NNfunction-ss_uLuL::synapse0x2174020() {
   return (neuron0x216b520()*0.186711);
}

double NNfunction-ss_uLuL::synapse0x217b930() {
   return (neuron0x216b860()*0.129718);
}

double NNfunction-ss_uLuL::synapse0x217b970() {
   return (neuron0x216bdc0()*0.965038);
}

double NNfunction-ss_uLuL::synapse0x2174170() {
   return (neuron0x216bfe0()*0.363671);
}

double NNfunction-ss_uLuL::synapse0x21741b0() {
   return (neuron0x216c320()*0.115428);
}

double NNfunction-ss_uLuL::synapse0x21741f0() {
   return (neuron0x216c660()*-0.0104843);
}

double NNfunction-ss_uLuL::synapse0x2174230() {
   return (neuron0x216c9a0()*-0.210396);
}

double NNfunction-ss_uLuL::synapse0x2174270() {
   return (neuron0x216cce0()*0.0748413);
}

double NNfunction-ss_uLuL::synapse0x21742b0() {
   return (neuron0x216d020()*0.0559431);
}

double NNfunction-ss_uLuL::synapse0x2174630() {
   return (neuron0x21684f0()*-0.220242);
}

double NNfunction-ss_uLuL::synapse0x2174670() {
   return (neuron0x21687a0()*0.927647);
}

double NNfunction-ss_uLuL::synapse0x21746b0() {
   return (neuron0x2168ae0()*0.137672);
}

double NNfunction-ss_uLuL::synapse0x21746f0() {
   return (neuron0x2168e20()*-0.953348);
}

double NNfunction-ss_uLuL::synapse0x2174730() {
   return (neuron0x2169160()*0.226893);
}

double NNfunction-ss_uLuL::synapse0x2174770() {
   return (neuron0x21694a0()*-0.306098);
}

double NNfunction-ss_uLuL::synapse0x21747b0() {
   return (neuron0x21697e0()*0.327696);
}

double NNfunction-ss_uLuL::synapse0x21747f0() {
   return (neuron0x2169b20()*-0.129735);
}

double NNfunction-ss_uLuL::synapse0x2174830() {
   return (neuron0x2169e60()*-0.0364934);
}

double NNfunction-ss_uLuL::synapse0x2174870() {
   return (neuron0x216a1a0()*-0.0280928);
}

double NNfunction-ss_uLuL::synapse0x21748b0() {
   return (neuron0x216a4e0()*0.150732);
}

double NNfunction-ss_uLuL::synapse0x21748f0() {
   return (neuron0x216a820()*-0.392634);
}

double NNfunction-ss_uLuL::synapse0x2174930() {
   return (neuron0x216ab60()*0.480574);
}

double NNfunction-ss_uLuL::synapse0x2174970() {
   return (neuron0x216aea0()*0.0897538);
}

double NNfunction-ss_uLuL::synapse0x21749b0() {
   return (neuron0x216b1e0()*-0.883097);
}

double NNfunction-ss_uLuL::synapse0x21749f0() {
   return (neuron0x216b520()*-0.335756);
}

double NNfunction-ss_uLuL::synapse0x2174480() {
   return (neuron0x216b860()*0.461674);
}

double NNfunction-ss_uLuL::synapse0x21744c0() {
   return (neuron0x216bdc0()*1.14403);
}

double NNfunction-ss_uLuL::synapse0x2174b40() {
   return (neuron0x216bfe0()*0.279596);
}

double NNfunction-ss_uLuL::synapse0x2174b80() {
   return (neuron0x216c320()*-0.829391);
}

double NNfunction-ss_uLuL::synapse0x2174bc0() {
   return (neuron0x216c660()*0.249382);
}

double NNfunction-ss_uLuL::synapse0x2174c00() {
   return (neuron0x216c9a0()*0.708612);
}

double NNfunction-ss_uLuL::synapse0x2174c40() {
   return (neuron0x216cce0()*-0.726975);
}

double NNfunction-ss_uLuL::synapse0x2174c80() {
   return (neuron0x216d020()*0.216324);
}

double NNfunction-ss_uLuL::synapse0x2174e50() {
   return (neuron0x21684f0()*-0.0578269);
}

double NNfunction-ss_uLuL::synapse0x217dee0() {
   return (neuron0x21687a0()*-0.0057487);
}

double NNfunction-ss_uLuL::synapse0x217df20() {
   return (neuron0x2168ae0()*0.0828193);
}

double NNfunction-ss_uLuL::synapse0x217df60() {
   return (neuron0x2168e20()*-0.563156);
}

double NNfunction-ss_uLuL::synapse0x217dfa0() {
   return (neuron0x2169160()*0.00530903);
}

double NNfunction-ss_uLuL::synapse0x217dfe0() {
   return (neuron0x21694a0()*-0.199038);
}

double NNfunction-ss_uLuL::synapse0x217e020() {
   return (neuron0x21697e0()*0.011047);
}

double NNfunction-ss_uLuL::synapse0x217e060() {
   return (neuron0x2169b20()*-0.196995);
}

double NNfunction-ss_uLuL::synapse0x217e0a0() {
   return (neuron0x2169e60()*0.237817);
}

double NNfunction-ss_uLuL::synapse0x217e0e0() {
   return (neuron0x216a1a0()*0.368419);
}

double NNfunction-ss_uLuL::synapse0x217e120() {
   return (neuron0x216a4e0()*-0.158564);
}

double NNfunction-ss_uLuL::synapse0x217e160() {
   return (neuron0x216a820()*0.371713);
}

double NNfunction-ss_uLuL::synapse0x217e1a0() {
   return (neuron0x216ab60()*0.203574);
}

double NNfunction-ss_uLuL::synapse0x217e1e0() {
   return (neuron0x216aea0()*-0.0104007);
}

double NNfunction-ss_uLuL::synapse0x217e220() {
   return (neuron0x216b1e0()*-0.732597);
}

double NNfunction-ss_uLuL::synapse0x217e260() {
   return (neuron0x216b520()*0.0232358);
}

double NNfunction-ss_uLuL::synapse0x217dd30() {
   return (neuron0x216b860()*-0.0916151);
}

double NNfunction-ss_uLuL::synapse0x217dd70() {
   return (neuron0x216bdc0()*0.397624);
}

double NNfunction-ss_uLuL::synapse0x217e3b0() {
   return (neuron0x216bfe0()*0.204773);
}

double NNfunction-ss_uLuL::synapse0x217e3f0() {
   return (neuron0x216c320()*0.614113);
}

double NNfunction-ss_uLuL::synapse0x217e430() {
   return (neuron0x216c660()*0.0558649);
}

double NNfunction-ss_uLuL::synapse0x217e470() {
   return (neuron0x216c9a0()*-0.293986);
}

double NNfunction-ss_uLuL::synapse0x217e4b0() {
   return (neuron0x216cce0()*0.281958);
}

double NNfunction-ss_uLuL::synapse0x217e4f0() {
   return (neuron0x216d020()*0.0744723);
}

double NNfunction-ss_uLuL::synapse0x217e870() {
   return (neuron0x21684f0()*0.0945257);
}

double NNfunction-ss_uLuL::synapse0x217e8b0() {
   return (neuron0x21687a0()*-0.335722);
}

double NNfunction-ss_uLuL::synapse0x217e8f0() {
   return (neuron0x2168ae0()*0.19669);
}

double NNfunction-ss_uLuL::synapse0x217e930() {
   return (neuron0x2168e20()*0.453925);
}

double NNfunction-ss_uLuL::synapse0x217e970() {
   return (neuron0x2169160()*-0.111046);
}

double NNfunction-ss_uLuL::synapse0x217e9b0() {
   return (neuron0x21694a0()*-0.330719);
}

double NNfunction-ss_uLuL::synapse0x217e9f0() {
   return (neuron0x21697e0()*0.412066);
}

double NNfunction-ss_uLuL::synapse0x217ea30() {
   return (neuron0x2169b20()*0.250174);
}

double NNfunction-ss_uLuL::synapse0x217ea70() {
   return (neuron0x2169e60()*0.699161);
}

double NNfunction-ss_uLuL::synapse0x217eab0() {
   return (neuron0x216a1a0()*0.219822);
}

double NNfunction-ss_uLuL::synapse0x217eaf0() {
   return (neuron0x216a4e0()*-0.220224);
}

double NNfunction-ss_uLuL::synapse0x217eb30() {
   return (neuron0x216a820()*-2.30164);
}

double NNfunction-ss_uLuL::synapse0x217eb70() {
   return (neuron0x216ab60()*0.0472747);
}

double NNfunction-ss_uLuL::synapse0x217ebb0() {
   return (neuron0x216aea0()*-0.355274);
}

double NNfunction-ss_uLuL::synapse0x217ebf0() {
   return (neuron0x216b1e0()*0.0825389);
}

double NNfunction-ss_uLuL::synapse0x217ec30() {
   return (neuron0x216b520()*0.26668);
}

double NNfunction-ss_uLuL::synapse0x217e6c0() {
   return (neuron0x216b860()*-0.212625);
}

double NNfunction-ss_uLuL::synapse0x217e700() {
   return (neuron0x216bdc0()*-0.00632522);
}

double NNfunction-ss_uLuL::synapse0x217ed80() {
   return (neuron0x216bfe0()*0.305134);
}

double NNfunction-ss_uLuL::synapse0x217edc0() {
   return (neuron0x216c320()*0.698509);
}

double NNfunction-ss_uLuL::synapse0x217ee00() {
   return (neuron0x216c660()*0.108266);
}

double NNfunction-ss_uLuL::synapse0x217ee40() {
   return (neuron0x216c9a0()*-0.278285);
}

double NNfunction-ss_uLuL::synapse0x217ee80() {
   return (neuron0x216cce0()*0.246321);
}

double NNfunction-ss_uLuL::synapse0x217eec0() {
   return (neuron0x216d020()*-0.185241);
}

double NNfunction-ss_uLuL::synapse0x217f240() {
   return (neuron0x21684f0()*0.0668475);
}

double NNfunction-ss_uLuL::synapse0x217f280() {
   return (neuron0x21687a0()*-0.0152373);
}

double NNfunction-ss_uLuL::synapse0x217f2c0() {
   return (neuron0x2168ae0()*0.0725629);
}

double NNfunction-ss_uLuL::synapse0x217f300() {
   return (neuron0x2168e20()*0.0572172);
}

double NNfunction-ss_uLuL::synapse0x217f340() {
   return (neuron0x2169160()*0.0185159);
}

double NNfunction-ss_uLuL::synapse0x217f380() {
   return (neuron0x21694a0()*0.0113488);
}

double NNfunction-ss_uLuL::synapse0x217f3c0() {
   return (neuron0x21697e0()*0.0321444);
}

double NNfunction-ss_uLuL::synapse0x217f400() {
   return (neuron0x2169b20()*-0.0226358);
}

double NNfunction-ss_uLuL::synapse0x217f440() {
   return (neuron0x2169e60()*-0.0229114);
}

double NNfunction-ss_uLuL::synapse0x217f480() {
   return (neuron0x216a1a0()*0.0120744);
}

double NNfunction-ss_uLuL::synapse0x217f4c0() {
   return (neuron0x216a4e0()*0.00628788);
}

double NNfunction-ss_uLuL::synapse0x217f500() {
   return (neuron0x216a820()*-1.80801);
}

double NNfunction-ss_uLuL::synapse0x217f540() {
   return (neuron0x216ab60()*0.234623);
}

double NNfunction-ss_uLuL::synapse0x217f580() {
   return (neuron0x216aea0()*0.00417564);
}

double NNfunction-ss_uLuL::synapse0x217f5c0() {
   return (neuron0x216b1e0()*0.1447);
}

double NNfunction-ss_uLuL::synapse0x217f600() {
   return (neuron0x216b520()*0.122586);
}

double NNfunction-ss_uLuL::synapse0x217f090() {
   return (neuron0x216b860()*-0.0848244);
}

double NNfunction-ss_uLuL::synapse0x217f0d0() {
   return (neuron0x216bdc0()*0.11991);
}

double NNfunction-ss_uLuL::synapse0x217f750() {
   return (neuron0x216bfe0()*0.0451357);
}

double NNfunction-ss_uLuL::synapse0x217f790() {
   return (neuron0x216c320()*0.0458322);
}

double NNfunction-ss_uLuL::synapse0x217f7d0() {
   return (neuron0x216c660()*-0.106184);
}

double NNfunction-ss_uLuL::synapse0x217f810() {
   return (neuron0x216c9a0()*0.019447);
}

double NNfunction-ss_uLuL::synapse0x217f850() {
   return (neuron0x216cce0()*0.00573088);
}

double NNfunction-ss_uLuL::synapse0x217f890() {
   return (neuron0x216d020()*0.0214265);
}

double NNfunction-ss_uLuL::synapse0x217fc10() {
   return (neuron0x21684f0()*0.144711);
}

double NNfunction-ss_uLuL::synapse0x217fc50() {
   return (neuron0x21687a0()*0.594793);
}

double NNfunction-ss_uLuL::synapse0x217fc90() {
   return (neuron0x2168ae0()*0.101976);
}

double NNfunction-ss_uLuL::synapse0x217fcd0() {
   return (neuron0x2168e20()*-1.27562);
}

double NNfunction-ss_uLuL::synapse0x217fd10() {
   return (neuron0x2169160()*-0.0710759);
}

double NNfunction-ss_uLuL::synapse0x217fd50() {
   return (neuron0x21694a0()*1.09375);
}

double NNfunction-ss_uLuL::synapse0x217fd90() {
   return (neuron0x21697e0()*-0.141535);
}

double NNfunction-ss_uLuL::synapse0x217fdd0() {
   return (neuron0x2169b20()*-0.0219259);
}

double NNfunction-ss_uLuL::synapse0x217fe10() {
   return (neuron0x2169e60()*-0.0681094);
}

double NNfunction-ss_uLuL::synapse0x217fe50() {
   return (neuron0x216a1a0()*-0.0163047);
}

double NNfunction-ss_uLuL::synapse0x217fe90() {
   return (neuron0x216a4e0()*1.03664);
}

double NNfunction-ss_uLuL::synapse0x217fed0() {
   return (neuron0x216a820()*-1.56918);
}

double NNfunction-ss_uLuL::synapse0x217ff10() {
   return (neuron0x216ab60()*0.0508779);
}

double NNfunction-ss_uLuL::synapse0x217ff50() {
   return (neuron0x216aea0()*0.223925);
}

double NNfunction-ss_uLuL::synapse0x217ff90() {
   return (neuron0x216b1e0()*0.560406);
}

double NNfunction-ss_uLuL::synapse0x217ffd0() {
   return (neuron0x216b520()*-1.19529);
}

double NNfunction-ss_uLuL::synapse0x217fa60() {
   return (neuron0x216b860()*0.325083);
}

double NNfunction-ss_uLuL::synapse0x217faa0() {
   return (neuron0x216bdc0()*-0.303203);
}

double NNfunction-ss_uLuL::synapse0x2180120() {
   return (neuron0x216bfe0()*-0.033488);
}

double NNfunction-ss_uLuL::synapse0x2180160() {
   return (neuron0x216c320()*0.249469);
}

double NNfunction-ss_uLuL::synapse0x21801a0() {
   return (neuron0x216c660()*0.418093);
}

double NNfunction-ss_uLuL::synapse0x21801e0() {
   return (neuron0x216c9a0()*0.550222);
}

double NNfunction-ss_uLuL::synapse0x2180220() {
   return (neuron0x216cce0()*-1.11163);
}

double NNfunction-ss_uLuL::synapse0x2180260() {
   return (neuron0x216d020()*0.0875105);
}

double NNfunction-ss_uLuL::synapse0x21805e0() {
   return (neuron0x21684f0()*0.056478);
}

double NNfunction-ss_uLuL::synapse0x2180620() {
   return (neuron0x21687a0()*-0.00288016);
}

double NNfunction-ss_uLuL::synapse0x2180660() {
   return (neuron0x2168ae0()*-0.464768);
}

double NNfunction-ss_uLuL::synapse0x21806a0() {
   return (neuron0x2168e20()*-0.741504);
}

double NNfunction-ss_uLuL::synapse0x21806e0() {
   return (neuron0x2169160()*0.0321364);
}

double NNfunction-ss_uLuL::synapse0x2180720() {
   return (neuron0x21694a0()*0.0185757);
}

double NNfunction-ss_uLuL::synapse0x2180760() {
   return (neuron0x21697e0()*-0.00635638);
}

double NNfunction-ss_uLuL::synapse0x21807a0() {
   return (neuron0x2169b20()*-0.002449);
}

double NNfunction-ss_uLuL::synapse0x21807e0() {
   return (neuron0x2169e60()*-0.0387742);
}

double NNfunction-ss_uLuL::synapse0x2180820() {
   return (neuron0x216a1a0()*-0.00337282);
}

double NNfunction-ss_uLuL::synapse0x2180860() {
   return (neuron0x216a4e0()*-0.0026326);
}

double NNfunction-ss_uLuL::synapse0x21808a0() {
   return (neuron0x216a820()*-0.600228);
}

double NNfunction-ss_uLuL::synapse0x21808e0() {
   return (neuron0x216ab60()*0.0820343);
}

double NNfunction-ss_uLuL::synapse0x2180920() {
   return (neuron0x216aea0()*-0.0352223);
}

double NNfunction-ss_uLuL::synapse0x2180960() {
   return (neuron0x216b1e0()*0.0410528);
}

double NNfunction-ss_uLuL::synapse0x21809a0() {
   return (neuron0x216b520()*-0.00647206);
}

double NNfunction-ss_uLuL::synapse0x2180430() {
   return (neuron0x216b860()*-0.0546873);
}

double NNfunction-ss_uLuL::synapse0x2180470() {
   return (neuron0x216bdc0()*0.0981941);
}

double NNfunction-ss_uLuL::synapse0x2180af0() {
   return (neuron0x216bfe0()*0.0366678);
}

double NNfunction-ss_uLuL::synapse0x2180b30() {
   return (neuron0x216c320()*0.00211725);
}

double NNfunction-ss_uLuL::synapse0x2180b70() {
   return (neuron0x216c660()*-0.00253364);
}

double NNfunction-ss_uLuL::synapse0x2180bb0() {
   return (neuron0x216c9a0()*0.00276854);
}

double NNfunction-ss_uLuL::synapse0x2180bf0() {
   return (neuron0x216cce0()*0.0193959);
}

double NNfunction-ss_uLuL::synapse0x2180c30() {
   return (neuron0x216d020()*-0.0454563);
}

double NNfunction-ss_uLuL::synapse0x2180fb0() {
   return (neuron0x21684f0()*0.0572404);
}

double NNfunction-ss_uLuL::synapse0x2180ff0() {
   return (neuron0x21687a0()*-0.169051);
}

double NNfunction-ss_uLuL::synapse0x2181030() {
   return (neuron0x2168ae0()*-0.228953);
}

double NNfunction-ss_uLuL::synapse0x2181070() {
   return (neuron0x2168e20()*1.51426);
}

double NNfunction-ss_uLuL::synapse0x21810b0() {
   return (neuron0x2169160()*0.310255);
}

double NNfunction-ss_uLuL::synapse0x21810f0() {
   return (neuron0x21694a0()*0.116824);
}

double NNfunction-ss_uLuL::synapse0x2181130() {
   return (neuron0x21697e0()*0.116915);
}

double NNfunction-ss_uLuL::synapse0x2181170() {
   return (neuron0x2169b20()*-0.140243);
}

double NNfunction-ss_uLuL::synapse0x21811b0() {
   return (neuron0x2169e60()*-0.0843615);
}

double NNfunction-ss_uLuL::synapse0x21811f0() {
   return (neuron0x216a1a0()*0.239973);
}

double NNfunction-ss_uLuL::synapse0x2181230() {
   return (neuron0x216a4e0()*0.0322429);
}

double NNfunction-ss_uLuL::synapse0x2181270() {
   return (neuron0x216a820()*0.584517);
}

double NNfunction-ss_uLuL::synapse0x21812b0() {
   return (neuron0x216ab60()*-1.25728);
}

double NNfunction-ss_uLuL::synapse0x21812f0() {
   return (neuron0x216aea0()*0.716875);
}

double NNfunction-ss_uLuL::synapse0x2181330() {
   return (neuron0x216b1e0()*-0.113452);
}

double NNfunction-ss_uLuL::synapse0x2181370() {
   return (neuron0x216b520()*-0.253551);
}

double NNfunction-ss_uLuL::synapse0x2180e00() {
   return (neuron0x216b860()*0.181491);
}

double NNfunction-ss_uLuL::synapse0x2180e40() {
   return (neuron0x216bdc0()*0.505839);
}

double NNfunction-ss_uLuL::synapse0x21814c0() {
   return (neuron0x216bfe0()*-0.254541);
}

double NNfunction-ss_uLuL::synapse0x2181500() {
   return (neuron0x216c320()*-0.0496389);
}

double NNfunction-ss_uLuL::synapse0x2181540() {
   return (neuron0x216c660()*0.093357);
}

double NNfunction-ss_uLuL::synapse0x2181580() {
   return (neuron0x216c9a0()*-0.202434);
}

double NNfunction-ss_uLuL::synapse0x21815c0() {
   return (neuron0x216cce0()*0.14798);
}

double NNfunction-ss_uLuL::synapse0x2181600() {
   return (neuron0x216d020()*-0.233601);
}

double NNfunction-ss_uLuL::synapse0x2181980() {
   return (neuron0x21684f0()*0.0232785);
}

double NNfunction-ss_uLuL::synapse0x21819c0() {
   return (neuron0x21687a0()*0.0113746);
}

double NNfunction-ss_uLuL::synapse0x2181a00() {
   return (neuron0x2168ae0()*-0.062321);
}

double NNfunction-ss_uLuL::synapse0x2181a40() {
   return (neuron0x2168e20()*0.116262);
}

double NNfunction-ss_uLuL::synapse0x2181a80() {
   return (neuron0x2169160()*-0.0165351);
}

double NNfunction-ss_uLuL::synapse0x2181ac0() {
   return (neuron0x21694a0()*-0.0313611);
}

double NNfunction-ss_uLuL::synapse0x2181b00() {
   return (neuron0x21697e0()*-0.0296251);
}

double NNfunction-ss_uLuL::synapse0x2181b40() {
   return (neuron0x2169b20()*-0.0338018);
}

double NNfunction-ss_uLuL::synapse0x2181b80() {
   return (neuron0x2169e60()*-0.0454446);
}

double NNfunction-ss_uLuL::synapse0x2181bc0() {
   return (neuron0x216a1a0()*-0.0413362);
}

double NNfunction-ss_uLuL::synapse0x2181c00() {
   return (neuron0x216a4e0()*0.0114809);
}

double NNfunction-ss_uLuL::synapse0x2181c40() {
   return (neuron0x216a820()*0.798012);
}

double NNfunction-ss_uLuL::synapse0x2181c80() {
   return (neuron0x216ab60()*-0.117499);
}

double NNfunction-ss_uLuL::synapse0x2181cc0() {
   return (neuron0x216aea0()*-0.0239302);
}

double NNfunction-ss_uLuL::synapse0x2181d00() {
   return (neuron0x216b1e0()*-0.0596633);
}

double NNfunction-ss_uLuL::synapse0x2181d40() {
   return (neuron0x216b520()*-0.0368897);
}

double NNfunction-ss_uLuL::synapse0x21817d0() {
   return (neuron0x216b860()*-0.0150191);
}

double NNfunction-ss_uLuL::synapse0x2181810() {
   return (neuron0x216bdc0()*-0.0253021);
}

double NNfunction-ss_uLuL::synapse0x2181e90() {
   return (neuron0x216bfe0()*-0.0803386);
}

double NNfunction-ss_uLuL::synapse0x2181ed0() {
   return (neuron0x216c320()*-0.102709);
}

double NNfunction-ss_uLuL::synapse0x2181f10() {
   return (neuron0x216c660()*0.00936396);
}

double NNfunction-ss_uLuL::synapse0x2181f50() {
   return (neuron0x216c9a0()*-0.0187619);
}

double NNfunction-ss_uLuL::synapse0x2181f90() {
   return (neuron0x216cce0()*-0.00950597);
}

double NNfunction-ss_uLuL::synapse0x2181fd0() {
   return (neuron0x216d020()*0.0178049);
}

double NNfunction-ss_uLuL::synapse0x2182350() {
   return (neuron0x21684f0()*0.376762);
}

double NNfunction-ss_uLuL::synapse0x2182390() {
   return (neuron0x21687a0()*-0.0472024);
}

double NNfunction-ss_uLuL::synapse0x21823d0() {
   return (neuron0x2168ae0()*0.106424);
}

double NNfunction-ss_uLuL::synapse0x2182410() {
   return (neuron0x2168e20()*-0.269236);
}

double NNfunction-ss_uLuL::synapse0x2182450() {
   return (neuron0x2169160()*-0.0737191);
}

double NNfunction-ss_uLuL::synapse0x2182490() {
   return (neuron0x21694a0()*0.0321485);
}

double NNfunction-ss_uLuL::synapse0x21824d0() {
   return (neuron0x21697e0()*0.0668271);
}

double NNfunction-ss_uLuL::synapse0x2182510() {
   return (neuron0x2169b20()*0.0503782);
}

double NNfunction-ss_uLuL::synapse0x2182550() {
   return (neuron0x2169e60()*0.17696);
}

double NNfunction-ss_uLuL::synapse0x2182590() {
   return (neuron0x216a1a0()*0.147107);
}

double NNfunction-ss_uLuL::synapse0x21825d0() {
   return (neuron0x216a4e0()*0.0991355);
}

double NNfunction-ss_uLuL::synapse0x2182610() {
   return (neuron0x216a820()*-1.73199);
}

double NNfunction-ss_uLuL::synapse0x2182650() {
   return (neuron0x216ab60()*0.0635916);
}

double NNfunction-ss_uLuL::synapse0x2182690() {
   return (neuron0x216aea0()*0.165592);
}

double NNfunction-ss_uLuL::synapse0x21826d0() {
   return (neuron0x216b1e0()*-0.0999109);
}

double NNfunction-ss_uLuL::synapse0x2182710() {
   return (neuron0x216b520()*-0.0863612);
}

double NNfunction-ss_uLuL::synapse0x21821a0() {
   return (neuron0x216b860()*0.0351068);
}

double NNfunction-ss_uLuL::synapse0x21821e0() {
   return (neuron0x216bdc0()*0.0661539);
}

double NNfunction-ss_uLuL::synapse0x2182860() {
   return (neuron0x216bfe0()*0.0281041);
}

double NNfunction-ss_uLuL::synapse0x21828a0() {
   return (neuron0x216c320()*0.0705465);
}

double NNfunction-ss_uLuL::synapse0x21828e0() {
   return (neuron0x216c660()*-0.0216806);
}

double NNfunction-ss_uLuL::synapse0x2182920() {
   return (neuron0x216c9a0()*0.05595);
}

double NNfunction-ss_uLuL::synapse0x2182960() {
   return (neuron0x216cce0()*-0.153771);
}

double NNfunction-ss_uLuL::synapse0x21829a0() {
   return (neuron0x216d020()*-0.123123);
}

double NNfunction-ss_uLuL::synapse0x2182d20() {
   return (neuron0x21684f0()*0.0575041);
}

double NNfunction-ss_uLuL::synapse0x21772f0() {
   return (neuron0x21687a0()*-0.113437);
}

double NNfunction-ss_uLuL::synapse0x2177330() {
   return (neuron0x2168ae0()*-0.297644);
}

double NNfunction-ss_uLuL::synapse0x2177370() {
   return (neuron0x2168e20()*0.722112);
}

double NNfunction-ss_uLuL::synapse0x21775c0() {
   return (neuron0x2169160()*-0.0543586);
}

double NNfunction-ss_uLuL::synapse0x2177600() {
   return (neuron0x21694a0()*-0.197464);
}

double NNfunction-ss_uLuL::synapse0x2177640() {
   return (neuron0x21697e0()*1.76473e-05);
}

double NNfunction-ss_uLuL::synapse0x2177890() {
   return (neuron0x2169b20()*-0.0775418);
}

double NNfunction-ss_uLuL::synapse0x21778d0() {
   return (neuron0x2169e60()*-0.185497);
}

double NNfunction-ss_uLuL::synapse0x2177b20() {
   return (neuron0x216a1a0()*-0.0610886);
}

double NNfunction-ss_uLuL::synapse0x2177b60() {
   return (neuron0x216a4e0()*-0.481921);
}

double NNfunction-ss_uLuL::synapse0x2177ba0() {
   return (neuron0x216a820()*1.36725);
}

double NNfunction-ss_uLuL::synapse0x2177df0() {
   return (neuron0x216ab60()*0.0106174);
}

double NNfunction-ss_uLuL::synapse0x2177e30() {
   return (neuron0x216aea0()*-0.0201823);
}

double NNfunction-ss_uLuL::synapse0x2178080() {
   return (neuron0x216b1e0()*-0.0842642);
}

double NNfunction-ss_uLuL::synapse0x21780c0() {
   return (neuron0x216b520()*0.245455);
}

double NNfunction-ss_uLuL::synapse0x2182b70() {
   return (neuron0x216b860()*-0.000355282);
}

double NNfunction-ss_uLuL::synapse0x2182bb0() {
   return (neuron0x216bdc0()*0.0587511);
}

double NNfunction-ss_uLuL::synapse0x2178210() {
   return (neuron0x216bfe0()*0.115756);
}

double NNfunction-ss_uLuL::synapse0x2178720() {
   return (neuron0x216c320()*0.0242266);
}

double NNfunction-ss_uLuL::synapse0x2178760() {
   return (neuron0x216c660()*-0.261908);
}

double NNfunction-ss_uLuL::synapse0x21787a0() {
   return (neuron0x216c9a0()*-0.0521498);
}

double NNfunction-ss_uLuL::synapse0x21789f0() {
   return (neuron0x216cce0()*0.31335);
}

double NNfunction-ss_uLuL::synapse0x2178a30() {
   return (neuron0x216d020()*-0.124124);
}

double NNfunction-ss_uLuL::synapse0x21782e0() {
   return (neuron0x21684f0()*0.0679944);
}

double NNfunction-ss_uLuL::synapse0x2178320() {
   return (neuron0x21687a0()*-0.0520668);
}

double NNfunction-ss_uLuL::synapse0x2178360() {
   return (neuron0x2168ae0()*-0.0446402);
}

double NNfunction-ss_uLuL::synapse0x21783a0() {
   return (neuron0x2168e20()*1.09414);
}

double NNfunction-ss_uLuL::synapse0x2178d20() {
   return (neuron0x2169160()*0.126204);
}

double NNfunction-ss_uLuL::synapse0x2185070() {
   return (neuron0x21694a0()*0.459956);
}

double NNfunction-ss_uLuL::synapse0x21850b0() {
   return (neuron0x21697e0()*0.387833);
}

double NNfunction-ss_uLuL::synapse0x21850f0() {
   return (neuron0x2169b20()*-0.0298451);
}

double NNfunction-ss_uLuL::synapse0x2185130() {
   return (neuron0x2169e60()*0.0942162);
}

double NNfunction-ss_uLuL::synapse0x2185170() {
   return (neuron0x216a1a0()*-0.396027);
}

double NNfunction-ss_uLuL::synapse0x21851b0() {
   return (neuron0x216a4e0()*0.163984);
}

double NNfunction-ss_uLuL::synapse0x21851f0() {
   return (neuron0x216a820()*0.608987);
}

double NNfunction-ss_uLuL::synapse0x2185230() {
   return (neuron0x216ab60()*-0.774916);
}

double NNfunction-ss_uLuL::synapse0x2185270() {
   return (neuron0x216aea0()*-0.236421);
}

double NNfunction-ss_uLuL::synapse0x21852b0() {
   return (neuron0x216b1e0()*-0.265856);
}

double NNfunction-ss_uLuL::synapse0x21852f0() {
   return (neuron0x216b520()*0.285859);
}

double NNfunction-ss_uLuL::synapse0x2178c00() {
   return (neuron0x216b860()*0.104552);
}

double NNfunction-ss_uLuL::synapse0x2178c40() {
   return (neuron0x216bdc0()*-0.581156);
}

double NNfunction-ss_uLuL::synapse0x2185440() {
   return (neuron0x216bfe0()*0.354511);
}

double NNfunction-ss_uLuL::synapse0x2185480() {
   return (neuron0x216c320()*-0.0626436);
}

double NNfunction-ss_uLuL::synapse0x21854c0() {
   return (neuron0x216c660()*0.153377);
}

double NNfunction-ss_uLuL::synapse0x2185500() {
   return (neuron0x216c9a0()*-0.0658321);
}

double NNfunction-ss_uLuL::synapse0x2185540() {
   return (neuron0x216cce0()*-0.267557);
}

double NNfunction-ss_uLuL::synapse0x2185580() {
   return (neuron0x216d020()*0.370147);
}

double NNfunction-ss_uLuL::synapse0x2185900() {
   return (neuron0x21684f0()*-0.142223);
}

double NNfunction-ss_uLuL::synapse0x2185940() {
   return (neuron0x21687a0()*0.00831193);
}

double NNfunction-ss_uLuL::synapse0x2185980() {
   return (neuron0x2168ae0()*-0.413808);
}

double NNfunction-ss_uLuL::synapse0x21859c0() {
   return (neuron0x2168e20()*0.808559);
}

double NNfunction-ss_uLuL::synapse0x2185a00() {
   return (neuron0x2169160()*0.134046);
}

double NNfunction-ss_uLuL::synapse0x2185a40() {
   return (neuron0x21694a0()*-0.0818967);
}

double NNfunction-ss_uLuL::synapse0x2185a80() {
   return (neuron0x21697e0()*0.25384);
}

double NNfunction-ss_uLuL::synapse0x2185ac0() {
   return (neuron0x2169b20()*0.147719);
}

double NNfunction-ss_uLuL::synapse0x2185b00() {
   return (neuron0x2169e60()*0.0757739);
}

double NNfunction-ss_uLuL::synapse0x2185b40() {
   return (neuron0x216a1a0()*-0.0595956);
}

double NNfunction-ss_uLuL::synapse0x2185b80() {
   return (neuron0x216a4e0()*-0.168783);
}

double NNfunction-ss_uLuL::synapse0x2185bc0() {
   return (neuron0x216a820()*2.29417);
}

double NNfunction-ss_uLuL::synapse0x2185c00() {
   return (neuron0x216ab60()*-0.514167);
}

double NNfunction-ss_uLuL::synapse0x2185c40() {
   return (neuron0x216aea0()*0.0995813);
}

double NNfunction-ss_uLuL::synapse0x2185c80() {
   return (neuron0x216b1e0()*0.147585);
}

double NNfunction-ss_uLuL::synapse0x2185cc0() {
   return (neuron0x216b520()*-1.10395);
}

double NNfunction-ss_uLuL::synapse0x2185750() {
   return (neuron0x216b860()*0.584019);
}

double NNfunction-ss_uLuL::synapse0x2185790() {
   return (neuron0x216bdc0()*-0.431154);
}

double NNfunction-ss_uLuL::synapse0x2185e10() {
   return (neuron0x216bfe0()*-0.277268);
}

double NNfunction-ss_uLuL::synapse0x2185e50() {
   return (neuron0x216c320()*0.100361);
}

double NNfunction-ss_uLuL::synapse0x2185e90() {
   return (neuron0x216c660()*-0.231819);
}

double NNfunction-ss_uLuL::synapse0x2185ed0() {
   return (neuron0x216c9a0()*0.0243324);
}

double NNfunction-ss_uLuL::synapse0x2185f10() {
   return (neuron0x216cce0()*0.184822);
}

double NNfunction-ss_uLuL::synapse0x2185f50() {
   return (neuron0x216d020()*-0.177614);
}

double NNfunction-ss_uLuL::synapse0x21862d0() {
   return (neuron0x21684f0()*0.0231881);
}

double NNfunction-ss_uLuL::synapse0x2186310() {
   return (neuron0x21687a0()*0.0219038);
}

double NNfunction-ss_uLuL::synapse0x2186350() {
   return (neuron0x2168ae0()*-0.491523);
}

double NNfunction-ss_uLuL::synapse0x2186390() {
   return (neuron0x2168e20()*2.00948);
}

double NNfunction-ss_uLuL::synapse0x21863d0() {
   return (neuron0x2169160()*-0.0316795);
}

double NNfunction-ss_uLuL::synapse0x2186410() {
   return (neuron0x21694a0()*-0.0849635);
}

double NNfunction-ss_uLuL::synapse0x2186450() {
   return (neuron0x21697e0()*-0.0736867);
}

double NNfunction-ss_uLuL::synapse0x2186490() {
   return (neuron0x2169b20()*0.00021472);
}

double NNfunction-ss_uLuL::synapse0x21864d0() {
   return (neuron0x2169e60()*-0.109091);
}

double NNfunction-ss_uLuL::synapse0x2186510() {
   return (neuron0x216a1a0()*-0.0537096);
}

double NNfunction-ss_uLuL::synapse0x2186550() {
   return (neuron0x216a4e0()*-0.0333052);
}

double NNfunction-ss_uLuL::synapse0x2186590() {
   return (neuron0x216a820()*1.80733);
}

double NNfunction-ss_uLuL::synapse0x21865d0() {
   return (neuron0x216ab60()*-0.0792077);
}

double NNfunction-ss_uLuL::synapse0x2186610() {
   return (neuron0x216aea0()*0.00907938);
}

double NNfunction-ss_uLuL::synapse0x2186650() {
   return (neuron0x216b1e0()*-0.0100903);
}

double NNfunction-ss_uLuL::synapse0x2186690() {
   return (neuron0x216b520()*0.0543809);
}

double NNfunction-ss_uLuL::synapse0x2186120() {
   return (neuron0x216b860()*0.0383519);
}

double NNfunction-ss_uLuL::synapse0x2186160() {
   return (neuron0x216bdc0()*-0.00412197);
}

double NNfunction-ss_uLuL::synapse0x21867e0() {
   return (neuron0x216bfe0()*-0.0340569);
}

double NNfunction-ss_uLuL::synapse0x2186820() {
   return (neuron0x216c320()*-0.0710731);
}

double NNfunction-ss_uLuL::synapse0x2186860() {
   return (neuron0x216c660()*-0.0412632);
}

double NNfunction-ss_uLuL::synapse0x21868a0() {
   return (neuron0x216c9a0()*0.0521278);
}

double NNfunction-ss_uLuL::synapse0x21868e0() {
   return (neuron0x216cce0()*0.0194017);
}

double NNfunction-ss_uLuL::synapse0x2186920() {
   return (neuron0x216d020()*0.0236471);
}

double NNfunction-ss_uLuL::synapse0x2186ca0() {
   return (neuron0x21684f0()*0.0100026);
}

double NNfunction-ss_uLuL::synapse0x2186ce0() {
   return (neuron0x21687a0()*-0.00213752);
}

double NNfunction-ss_uLuL::synapse0x2186d20() {
   return (neuron0x2168ae0()*0.0862658);
}

double NNfunction-ss_uLuL::synapse0x2186d60() {
   return (neuron0x2168e20()*0.108063);
}

double NNfunction-ss_uLuL::synapse0x2186da0() {
   return (neuron0x2169160()*0.000282468);
}

double NNfunction-ss_uLuL::synapse0x2186de0() {
   return (neuron0x21694a0()*0.00355348);
}

double NNfunction-ss_uLuL::synapse0x2186e20() {
   return (neuron0x21697e0()*0.0151323);
}

double NNfunction-ss_uLuL::synapse0x2186e60() {
   return (neuron0x2169b20()*0.000201833);
}

double NNfunction-ss_uLuL::synapse0x2186ea0() {
   return (neuron0x2169e60()*0.0111476);
}

double NNfunction-ss_uLuL::synapse0x2186ee0() {
   return (neuron0x216a1a0()*0.0153188);
}

double NNfunction-ss_uLuL::synapse0x2186f20() {
   return (neuron0x216a4e0()*-0.00661453);
}

double NNfunction-ss_uLuL::synapse0x2186f60() {
   return (neuron0x216a820()*-0.561219);
}

double NNfunction-ss_uLuL::synapse0x2186fa0() {
   return (neuron0x216ab60()*0.337152);
}

double NNfunction-ss_uLuL::synapse0x2186fe0() {
   return (neuron0x216aea0()*-0.0295968);
}

double NNfunction-ss_uLuL::synapse0x2187020() {
   return (neuron0x216b1e0()*0.159247);
}

double NNfunction-ss_uLuL::synapse0x2187060() {
   return (neuron0x216b520()*0.158428);
}

double NNfunction-ss_uLuL::synapse0x2186af0() {
   return (neuron0x216b860()*-0.0494564);
}

double NNfunction-ss_uLuL::synapse0x2186b30() {
   return (neuron0x216bdc0()*0.149956);
}

double NNfunction-ss_uLuL::synapse0x21871b0() {
   return (neuron0x216bfe0()*0.143157);
}

double NNfunction-ss_uLuL::synapse0x21871f0() {
   return (neuron0x216c320()*0.0439247);
}

double NNfunction-ss_uLuL::synapse0x2187230() {
   return (neuron0x216c660()*-0.0394918);
}

double NNfunction-ss_uLuL::synapse0x2187270() {
   return (neuron0x216c9a0()*0.018537);
}

double NNfunction-ss_uLuL::synapse0x21872b0() {
   return (neuron0x216cce0()*0.0070796);
}

double NNfunction-ss_uLuL::synapse0x21872f0() {
   return (neuron0x216d020()*0.00965158);
}

double NNfunction-ss_uLuL::synapse0x2187670() {
   return (neuron0x21684f0()*-0.305799);
}

double NNfunction-ss_uLuL::synapse0x21876b0() {
   return (neuron0x21687a0()*0.31389);
}

double NNfunction-ss_uLuL::synapse0x21876f0() {
   return (neuron0x2168ae0()*0.418879);
}

double NNfunction-ss_uLuL::synapse0x2187730() {
   return (neuron0x2168e20()*-0.65693);
}

double NNfunction-ss_uLuL::synapse0x2187770() {
   return (neuron0x2169160()*-0.136784);
}

double NNfunction-ss_uLuL::synapse0x21877b0() {
   return (neuron0x21694a0()*0.0546359);
}

double NNfunction-ss_uLuL::synapse0x21877f0() {
   return (neuron0x21697e0()*-0.104443);
}

double NNfunction-ss_uLuL::synapse0x2187830() {
   return (neuron0x2169b20()*-0.357391);
}

double NNfunction-ss_uLuL::synapse0x2187870() {
   return (neuron0x2169e60()*0.223082);
}

double NNfunction-ss_uLuL::synapse0x21878b0() {
   return (neuron0x216a1a0()*0.477109);
}

double NNfunction-ss_uLuL::synapse0x21878f0() {
   return (neuron0x216a4e0()*0.194242);
}

double NNfunction-ss_uLuL::synapse0x2187930() {
   return (neuron0x216a820()*0.578261);
}

double NNfunction-ss_uLuL::synapse0x2187970() {
   return (neuron0x216ab60()*-0.667305);
}

double NNfunction-ss_uLuL::synapse0x21879b0() {
   return (neuron0x216aea0()*0.425363);
}

double NNfunction-ss_uLuL::synapse0x21879f0() {
   return (neuron0x216b1e0()*0.546969);
}

double NNfunction-ss_uLuL::synapse0x2187a30() {
   return (neuron0x216b520()*-0.972424);
}

double NNfunction-ss_uLuL::synapse0x21874c0() {
   return (neuron0x216b860()*0.381336);
}

double NNfunction-ss_uLuL::synapse0x2187500() {
   return (neuron0x216bdc0()*-0.190665);
}

double NNfunction-ss_uLuL::synapse0x2187b80() {
   return (neuron0x216bfe0()*-0.301592);
}

double NNfunction-ss_uLuL::synapse0x2187bc0() {
   return (neuron0x216c320()*-0.416717);
}

double NNfunction-ss_uLuL::synapse0x2187c00() {
   return (neuron0x216c660()*-0.0985725);
}

double NNfunction-ss_uLuL::synapse0x2187c40() {
   return (neuron0x216c9a0()*0.226089);
}

double NNfunction-ss_uLuL::synapse0x2187c80() {
   return (neuron0x216cce0()*-0.262049);
}

double NNfunction-ss_uLuL::synapse0x2187cc0() {
   return (neuron0x216d020()*-0.077445);
}

double NNfunction-ss_uLuL::synapse0x2188040() {
   return (neuron0x21684f0()*-0.137754);
}

double NNfunction-ss_uLuL::synapse0x2188080() {
   return (neuron0x21687a0()*-0.422732);
}

double NNfunction-ss_uLuL::synapse0x21880c0() {
   return (neuron0x2168ae0()*-0.415928);
}

double NNfunction-ss_uLuL::synapse0x2188100() {
   return (neuron0x2168e20()*0.362492);
}

double NNfunction-ss_uLuL::synapse0x2188140() {
   return (neuron0x2169160()*0.0255407);
}

double NNfunction-ss_uLuL::synapse0x2188180() {
   return (neuron0x21694a0()*0.0473062);
}

double NNfunction-ss_uLuL::synapse0x21881c0() {
   return (neuron0x21697e0()*-0.156912);
}

double NNfunction-ss_uLuL::synapse0x2188200() {
   return (neuron0x2169b20()*0.136542);
}

double NNfunction-ss_uLuL::synapse0x2188240() {
   return (neuron0x2169e60()*0.476153);
}

double NNfunction-ss_uLuL::synapse0x2188280() {
   return (neuron0x216a1a0()*-0.00286133);
}

double NNfunction-ss_uLuL::synapse0x21882c0() {
   return (neuron0x216a4e0()*0.216075);
}

double NNfunction-ss_uLuL::synapse0x2188300() {
   return (neuron0x216a820()*0.580703);
}

double NNfunction-ss_uLuL::synapse0x2188340() {
   return (neuron0x216ab60()*-0.346467);
}

double NNfunction-ss_uLuL::synapse0x2188380() {
   return (neuron0x216aea0()*-0.626757);
}

double NNfunction-ss_uLuL::synapse0x21883c0() {
   return (neuron0x216b1e0()*0.231635);
}

double NNfunction-ss_uLuL::synapse0x2188400() {
   return (neuron0x216b520()*-0.703703);
}

double NNfunction-ss_uLuL::synapse0x2187e90() {
   return (neuron0x216b860()*0.824852);
}

double NNfunction-ss_uLuL::synapse0x2187ed0() {
   return (neuron0x216bdc0()*-0.0570546);
}

double NNfunction-ss_uLuL::synapse0x2188550() {
   return (neuron0x216bfe0()*-0.465269);
}

double NNfunction-ss_uLuL::synapse0x2188590() {
   return (neuron0x216c320()*0.331208);
}

double NNfunction-ss_uLuL::synapse0x21885d0() {
   return (neuron0x216c660()*-0.241063);
}

double NNfunction-ss_uLuL::synapse0x2188610() {
   return (neuron0x216c9a0()*-0.135785);
}

double NNfunction-ss_uLuL::synapse0x2188650() {
   return (neuron0x216cce0()*0.336517);
}

double NNfunction-ss_uLuL::synapse0x2188690() {
   return (neuron0x216d020()*-0.0148969);
}

double NNfunction-ss_uLuL::synapse0x2188a10() {
   return (neuron0x21684f0()*0.107141);
}

double NNfunction-ss_uLuL::synapse0x2188a50() {
   return (neuron0x21687a0()*0.133033);
}

double NNfunction-ss_uLuL::synapse0x2188a90() {
   return (neuron0x2168ae0()*0.305849);
}

double NNfunction-ss_uLuL::synapse0x2188ad0() {
   return (neuron0x2168e20()*-0.425657);
}

double NNfunction-ss_uLuL::synapse0x2188b10() {
   return (neuron0x2169160()*0.183502);
}

double NNfunction-ss_uLuL::synapse0x2188b50() {
   return (neuron0x21694a0()*0.0862299);
}

double NNfunction-ss_uLuL::synapse0x2188b90() {
   return (neuron0x21697e0()*-0.0173499);
}

double NNfunction-ss_uLuL::synapse0x2188bd0() {
   return (neuron0x2169b20()*0.0924281);
}

double NNfunction-ss_uLuL::synapse0x2188c10() {
   return (neuron0x2169e60()*0.236602);
}

double NNfunction-ss_uLuL::synapse0x2188c50() {
   return (neuron0x216a1a0()*0.118132);
}

double NNfunction-ss_uLuL::synapse0x2188c90() {
   return (neuron0x216a4e0()*0.161506);
}

double NNfunction-ss_uLuL::synapse0x2188cd0() {
   return (neuron0x216a820()*-1.07048);
}

double NNfunction-ss_uLuL::synapse0x2188d10() {
   return (neuron0x216ab60()*-0.0777086);
}

double NNfunction-ss_uLuL::synapse0x2188d50() {
   return (neuron0x216aea0()*0.372607);
}

double NNfunction-ss_uLuL::synapse0x2188d90() {
   return (neuron0x216b1e0()*0.971891);
}

double NNfunction-ss_uLuL::synapse0x2188dd0() {
   return (neuron0x216b520()*-0.147584);
}

double NNfunction-ss_uLuL::synapse0x2188860() {
   return (neuron0x216b860()*-0.012004);
}

double NNfunction-ss_uLuL::synapse0x21888a0() {
   return (neuron0x216bdc0()*-0.0585134);
}

double NNfunction-ss_uLuL::synapse0x2188f20() {
   return (neuron0x216bfe0()*0.10094);
}

double NNfunction-ss_uLuL::synapse0x2188f60() {
   return (neuron0x216c320()*0.325737);
}

double NNfunction-ss_uLuL::synapse0x2188fa0() {
   return (neuron0x216c660()*-0.138564);
}

double NNfunction-ss_uLuL::synapse0x2188fe0() {
   return (neuron0x216c9a0()*-0.0376452);
}

double NNfunction-ss_uLuL::synapse0x2189020() {
   return (neuron0x216cce0()*0.12387);
}

double NNfunction-ss_uLuL::synapse0x2189060() {
   return (neuron0x216d020()*-0.00411643);
}

double NNfunction-ss_uLuL::synapse0x21893e0() {
   return (neuron0x21684f0()*0.169484);
}

double NNfunction-ss_uLuL::synapse0x2189420() {
   return (neuron0x21687a0()*0.521413);
}

double NNfunction-ss_uLuL::synapse0x2189460() {
   return (neuron0x2168ae0()*0.186156);
}

double NNfunction-ss_uLuL::synapse0x21894a0() {
   return (neuron0x2168e20()*0.829604);
}

double NNfunction-ss_uLuL::synapse0x21894e0() {
   return (neuron0x2169160()*-0.384153);
}

double NNfunction-ss_uLuL::synapse0x2189520() {
   return (neuron0x21694a0()*-0.376397);
}

double NNfunction-ss_uLuL::synapse0x2189560() {
   return (neuron0x21697e0()*0.316886);
}

double NNfunction-ss_uLuL::synapse0x21895a0() {
   return (neuron0x2169b20()*-0.758907);
}

double NNfunction-ss_uLuL::synapse0x21895e0() {
   return (neuron0x2169e60()*-1.00596);
}

double NNfunction-ss_uLuL::synapse0x2189620() {
   return (neuron0x216a1a0()*-0.23762);
}

double NNfunction-ss_uLuL::synapse0x2189660() {
   return (neuron0x216a4e0()*0.216596);
}

double NNfunction-ss_uLuL::synapse0x21896a0() {
   return (neuron0x216a820()*1.66634);
}

double NNfunction-ss_uLuL::synapse0x21896e0() {
   return (neuron0x216ab60()*-0.330337);
}

double NNfunction-ss_uLuL::synapse0x2189720() {
   return (neuron0x216aea0()*0.549362);
}

double NNfunction-ss_uLuL::synapse0x2189760() {
   return (neuron0x216b1e0()*0.0758819);
}

double NNfunction-ss_uLuL::synapse0x21897a0() {
   return (neuron0x216b520()*0.352998);
}

double NNfunction-ss_uLuL::synapse0x2189230() {
   return (neuron0x216b860()*-0.0522572);
}

double NNfunction-ss_uLuL::synapse0x2189270() {
   return (neuron0x216bdc0()*0.0959291);
}

double NNfunction-ss_uLuL::synapse0x21898f0() {
   return (neuron0x216bfe0()*-0.616682);
}

double NNfunction-ss_uLuL::synapse0x2189930() {
   return (neuron0x216c320()*0.189232);
}

double NNfunction-ss_uLuL::synapse0x2189970() {
   return (neuron0x216c660()*-0.142618);
}

double NNfunction-ss_uLuL::synapse0x21899b0() {
   return (neuron0x216c9a0()*-0.1256);
}

double NNfunction-ss_uLuL::synapse0x21899f0() {
   return (neuron0x216cce0()*0.165156);
}

double NNfunction-ss_uLuL::synapse0x2189a30() {
   return (neuron0x216d020()*0.13437);
}

double NNfunction-ss_uLuL::synapse0x21724e0() {
   return (neuron0x21684f0()*-0.142033);
}

double NNfunction-ss_uLuL::synapse0x2172520() {
   return (neuron0x21687a0()*0.00606085);
}

double NNfunction-ss_uLuL::synapse0x2172560() {
   return (neuron0x2168ae0()*0.0268554);
}

double NNfunction-ss_uLuL::synapse0x21725a0() {
   return (neuron0x2168e20()*-0.268422);
}

double NNfunction-ss_uLuL::synapse0x21725e0() {
   return (neuron0x2169160()*0.0658071);
}

double NNfunction-ss_uLuL::synapse0x2172620() {
   return (neuron0x21694a0()*-0.0966805);
}

double NNfunction-ss_uLuL::synapse0x2172660() {
   return (neuron0x21697e0()*-0.0535298);
}

double NNfunction-ss_uLuL::synapse0x21726a0() {
   return (neuron0x2169b20()*-0.0430573);
}

double NNfunction-ss_uLuL::synapse0x218a1c0() {
   return (neuron0x2169e60()*0.170426);
}

double NNfunction-ss_uLuL::synapse0x218a200() {
   return (neuron0x216a1a0()*0.00736413);
}

double NNfunction-ss_uLuL::synapse0x218a240() {
   return (neuron0x216a4e0()*-0.0332541);
}

double NNfunction-ss_uLuL::synapse0x218a280() {
   return (neuron0x216a820()*-1.33068);
}

double NNfunction-ss_uLuL::synapse0x218a2c0() {
   return (neuron0x216ab60()*-0.0149617);
}

double NNfunction-ss_uLuL::synapse0x218a300() {
   return (neuron0x216aea0()*-0.029031);
}

double NNfunction-ss_uLuL::synapse0x218a340() {
   return (neuron0x216b1e0()*1.21538);
}

double NNfunction-ss_uLuL::synapse0x218a380() {
   return (neuron0x216b520()*0.107511);
}

double NNfunction-ss_uLuL::synapse0x2189c00() {
   return (neuron0x216b860()*-0.193286);
}

double NNfunction-ss_uLuL::synapse0x2189c40() {
   return (neuron0x216bdc0()*-0.164761);
}

double NNfunction-ss_uLuL::synapse0x218a4d0() {
   return (neuron0x216bfe0()*-0.015231);
}

double NNfunction-ss_uLuL::synapse0x218a510() {
   return (neuron0x216c320()*-0.0304325);
}

double NNfunction-ss_uLuL::synapse0x218a550() {
   return (neuron0x216c660()*0.0635994);
}

double NNfunction-ss_uLuL::synapse0x218a590() {
   return (neuron0x216c9a0()*0.0520294);
}

double NNfunction-ss_uLuL::synapse0x218a5d0() {
   return (neuron0x216cce0()*-0.0253281);
}

double NNfunction-ss_uLuL::synapse0x218a610() {
   return (neuron0x216d020()*-0.055221);
}

double NNfunction-ss_uLuL::synapse0x218a990() {
   return (neuron0x21684f0()*-0.0132631);
}

double NNfunction-ss_uLuL::synapse0x218a9d0() {
   return (neuron0x21687a0()*-0.00212776);
}

double NNfunction-ss_uLuL::synapse0x218aa10() {
   return (neuron0x2168ae0()*-0.0568998);
}

double NNfunction-ss_uLuL::synapse0x218aa50() {
   return (neuron0x2168e20()*0.130454);
}

double NNfunction-ss_uLuL::synapse0x218aa90() {
   return (neuron0x2169160()*-0.00898617);
}

double NNfunction-ss_uLuL::synapse0x218aad0() {
   return (neuron0x21694a0()*-0.0188005);
}

double NNfunction-ss_uLuL::synapse0x218ab10() {
   return (neuron0x21697e0()*-0.0135496);
}

double NNfunction-ss_uLuL::synapse0x218ab50() {
   return (neuron0x2169b20()*-0.000911701);
}

double NNfunction-ss_uLuL::synapse0x218ab90() {
   return (neuron0x2169e60()*0.00188131);
}

double NNfunction-ss_uLuL::synapse0x218abd0() {
   return (neuron0x216a1a0()*0.0152456);
}

double NNfunction-ss_uLuL::synapse0x218ac10() {
   return (neuron0x216a4e0()*0.00566323);
}

double NNfunction-ss_uLuL::synapse0x218ac50() {
   return (neuron0x216a820()*4.26342);
}

double NNfunction-ss_uLuL::synapse0x218ac90() {
   return (neuron0x216ab60()*-0.0431382);
}

double NNfunction-ss_uLuL::synapse0x218acd0() {
   return (neuron0x216aea0()*-0.00490824);
}

double NNfunction-ss_uLuL::synapse0x218ad10() {
   return (neuron0x216b1e0()*-0.0389437);
}

double NNfunction-ss_uLuL::synapse0x218ad50() {
   return (neuron0x216b520()*-0.0326822);
}

double NNfunction-ss_uLuL::synapse0x218a7e0() {
   return (neuron0x216b860()*0.014275);
}

double NNfunction-ss_uLuL::synapse0x218a820() {
   return (neuron0x216bdc0()*-0.0166105);
}

double NNfunction-ss_uLuL::synapse0x218aea0() {
   return (neuron0x216bfe0()*-0.00895124);
}

double NNfunction-ss_uLuL::synapse0x218aee0() {
   return (neuron0x216c320()*0.0138305);
}

double NNfunction-ss_uLuL::synapse0x218af20() {
   return (neuron0x216c660()*0.00823785);
}

double NNfunction-ss_uLuL::synapse0x218af60() {
   return (neuron0x216c9a0()*-0.00250671);
}

double NNfunction-ss_uLuL::synapse0x218afa0() {
   return (neuron0x216cce0()*-0.00205657);
}

double NNfunction-ss_uLuL::synapse0x218afe0() {
   return (neuron0x216d020()*-0.00902802);
}

double NNfunction-ss_uLuL::synapse0x218b360() {
   return (neuron0x21684f0()*-0.0978676);
}

double NNfunction-ss_uLuL::synapse0x218b3a0() {
   return (neuron0x21687a0()*0.459489);
}

double NNfunction-ss_uLuL::synapse0x218b3e0() {
   return (neuron0x2168ae0()*-0.196935);
}

double NNfunction-ss_uLuL::synapse0x218b420() {
   return (neuron0x2168e20()*1.41081);
}

double NNfunction-ss_uLuL::synapse0x218b460() {
   return (neuron0x2169160()*-0.0703053);
}

double NNfunction-ss_uLuL::synapse0x218b4a0() {
   return (neuron0x21694a0()*-0.00756381);
}

double NNfunction-ss_uLuL::synapse0x218b4e0() {
   return (neuron0x21697e0()*0.115148);
}

double NNfunction-ss_uLuL::synapse0x218b520() {
   return (neuron0x2169b20()*-0.691436);
}

double NNfunction-ss_uLuL::synapse0x218b560() {
   return (neuron0x2169e60()*-1.14129);
}

double NNfunction-ss_uLuL::synapse0x218b5a0() {
   return (neuron0x216a1a0()*0.0632252);
}

double NNfunction-ss_uLuL::synapse0x218b5e0() {
   return (neuron0x216a4e0()*0.30299);
}

double NNfunction-ss_uLuL::synapse0x218b620() {
   return (neuron0x216a820()*0.314365);
}

double NNfunction-ss_uLuL::synapse0x218b660() {
   return (neuron0x216ab60()*0.180809);
}

double NNfunction-ss_uLuL::synapse0x218b6a0() {
   return (neuron0x216aea0()*0.688673);
}

double NNfunction-ss_uLuL::synapse0x218b6e0() {
   return (neuron0x216b1e0()*0.062737);
}

double NNfunction-ss_uLuL::synapse0x218b720() {
   return (neuron0x216b520()*0.23359);
}

double NNfunction-ss_uLuL::synapse0x218b1b0() {
   return (neuron0x216b860()*-0.0209578);
}

double NNfunction-ss_uLuL::synapse0x218b1f0() {
   return (neuron0x216bdc0()*0.0629165);
}

double NNfunction-ss_uLuL::synapse0x217bd20() {
   return (neuron0x216bfe0()*-0.865952);
}

double NNfunction-ss_uLuL::synapse0x217bd60() {
   return (neuron0x216c320()*0.156941);
}

double NNfunction-ss_uLuL::synapse0x217bda0() {
   return (neuron0x216c660()*-0.0430975);
}

double NNfunction-ss_uLuL::synapse0x217bde0() {
   return (neuron0x216c9a0()*-0.360944);
}

double NNfunction-ss_uLuL::synapse0x217be20() {
   return (neuron0x216cce0()*0.337827);
}

double NNfunction-ss_uLuL::synapse0x217be60() {
   return (neuron0x216d020()*0.0571676);
}

double NNfunction-ss_uLuL::synapse0x217c1e0() {
   return (neuron0x21684f0()*-0.0615401);
}

double NNfunction-ss_uLuL::synapse0x217c220() {
   return (neuron0x21687a0()*0.517688);
}

double NNfunction-ss_uLuL::synapse0x217c260() {
   return (neuron0x2168ae0()*-0.514604);
}

double NNfunction-ss_uLuL::synapse0x217c2a0() {
   return (neuron0x2168e20()*1.31522);
}

double NNfunction-ss_uLuL::synapse0x217c2e0() {
   return (neuron0x2169160()*-0.127078);
}

double NNfunction-ss_uLuL::synapse0x217c320() {
   return (neuron0x21694a0()*-0.46939);
}

double NNfunction-ss_uLuL::synapse0x217c360() {
   return (neuron0x21697e0()*-0.50007);
}

double NNfunction-ss_uLuL::synapse0x217c3a0() {
   return (neuron0x2169b20()*0.00405299);
}

double NNfunction-ss_uLuL::synapse0x217c3e0() {
   return (neuron0x2169e60()*0.404242);
}

double NNfunction-ss_uLuL::synapse0x217c420() {
   return (neuron0x216a1a0()*0.0841111);
}

double NNfunction-ss_uLuL::synapse0x217c460() {
   return (neuron0x216a4e0()*0.61066);
}

double NNfunction-ss_uLuL::synapse0x217c4a0() {
   return (neuron0x216a820()*0.640484);
}

double NNfunction-ss_uLuL::synapse0x217c4e0() {
   return (neuron0x216ab60()*0.0193078);
}

double NNfunction-ss_uLuL::synapse0x217c520() {
   return (neuron0x216aea0()*0.497319);
}

double NNfunction-ss_uLuL::synapse0x217c560() {
   return (neuron0x216b1e0()*-0.293905);
}

double NNfunction-ss_uLuL::synapse0x217c5a0() {
   return (neuron0x216b520()*-0.299702);
}

double NNfunction-ss_uLuL::synapse0x217c030() {
   return (neuron0x216b860()*-0.0768401);
}

double NNfunction-ss_uLuL::synapse0x217c070() {
   return (neuron0x216bdc0()*-0.362026);
}

double NNfunction-ss_uLuL::synapse0x217c6f0() {
   return (neuron0x216bfe0()*0.286431);
}

double NNfunction-ss_uLuL::synapse0x217c730() {
   return (neuron0x216c320()*0.48196);
}

double NNfunction-ss_uLuL::synapse0x217c770() {
   return (neuron0x216c660()*0.0521559);
}

double NNfunction-ss_uLuL::synapse0x217c7b0() {
   return (neuron0x216c9a0()*0.18946);
}

double NNfunction-ss_uLuL::synapse0x217c7f0() {
   return (neuron0x216cce0()*0.144776);
}

double NNfunction-ss_uLuL::synapse0x217c830() {
   return (neuron0x216d020()*0.324018);
}

double NNfunction-ss_uLuL::synapse0x217cbb0() {
   return (neuron0x21684f0()*0.129858);
}

double NNfunction-ss_uLuL::synapse0x217cbf0() {
   return (neuron0x21687a0()*0.390125);
}

double NNfunction-ss_uLuL::synapse0x217cc30() {
   return (neuron0x2168ae0()*-0.632238);
}

double NNfunction-ss_uLuL::synapse0x217cc70() {
   return (neuron0x2168e20()*-0.156162);
}

double NNfunction-ss_uLuL::synapse0x217ccb0() {
   return (neuron0x2169160()*0.287531);
}

double NNfunction-ss_uLuL::synapse0x217ccf0() {
   return (neuron0x21694a0()*0.0717167);
}

double NNfunction-ss_uLuL::synapse0x217cd30() {
   return (neuron0x21697e0()*0.127129);
}

double NNfunction-ss_uLuL::synapse0x217cd70() {
   return (neuron0x2169b20()*-0.222815);
}

double NNfunction-ss_uLuL::synapse0x217cdb0() {
   return (neuron0x2169e60()*-0.289676);
}

double NNfunction-ss_uLuL::synapse0x217cdf0() {
   return (neuron0x216a1a0()*0.0202209);
}

double NNfunction-ss_uLuL::synapse0x217ce30() {
   return (neuron0x216a4e0()*0.227509);
}

double NNfunction-ss_uLuL::synapse0x217ce70() {
   return (neuron0x216a820()*0.117802);
}

double NNfunction-ss_uLuL::synapse0x217ceb0() {
   return (neuron0x216ab60()*1.06894);
}

double NNfunction-ss_uLuL::synapse0x217cef0() {
   return (neuron0x216aea0()*0.109596);
}

double NNfunction-ss_uLuL::synapse0x217cf30() {
   return (neuron0x216b1e0()*0.489686);
}

double NNfunction-ss_uLuL::synapse0x217cf70() {
   return (neuron0x216b520()*-0.0681447);
}

double NNfunction-ss_uLuL::synapse0x217ca00() {
   return (neuron0x216b860()*-0.102918);
}

double NNfunction-ss_uLuL::synapse0x217ca40() {
   return (neuron0x216bdc0()*1.08304);
}

double NNfunction-ss_uLuL::synapse0x217d0c0() {
   return (neuron0x216bfe0()*-0.0616523);
}

double NNfunction-ss_uLuL::synapse0x217d100() {
   return (neuron0x216c320()*-0.414197);
}

double NNfunction-ss_uLuL::synapse0x217d140() {
   return (neuron0x216c660()*0.00224664);
}

double NNfunction-ss_uLuL::synapse0x217d180() {
   return (neuron0x216c9a0()*0.15373);
}

double NNfunction-ss_uLuL::synapse0x217d1c0() {
   return (neuron0x216cce0()*-0.465517);
}

double NNfunction-ss_uLuL::synapse0x217d200() {
   return (neuron0x216d020()*-0.161586);
}

double NNfunction-ss_uLuL::synapse0x217d580() {
   return (neuron0x21684f0()*-0.0159147);
}

double NNfunction-ss_uLuL::synapse0x217d5c0() {
   return (neuron0x21687a0()*-0.481908);
}

double NNfunction-ss_uLuL::synapse0x217d600() {
   return (neuron0x2168ae0()*0.0862987);
}

double NNfunction-ss_uLuL::synapse0x217d640() {
   return (neuron0x2168e20()*-1.53854);
}

double NNfunction-ss_uLuL::synapse0x217d680() {
   return (neuron0x2169160()*-0.380939);
}

double NNfunction-ss_uLuL::synapse0x217d6c0() {
   return (neuron0x21694a0()*0.0752419);
}

double NNfunction-ss_uLuL::synapse0x217d700() {
   return (neuron0x21697e0()*-0.366986);
}

double NNfunction-ss_uLuL::synapse0x217d740() {
   return (neuron0x2169b20()*-0.143734);
}

double NNfunction-ss_uLuL::synapse0x217d780() {
   return (neuron0x2169e60()*0.0167461);
}

double NNfunction-ss_uLuL::synapse0x217d7c0() {
   return (neuron0x216a1a0()*0.00730847);
}

double NNfunction-ss_uLuL::synapse0x217d800() {
   return (neuron0x216a4e0()*0.38294);
}

double NNfunction-ss_uLuL::synapse0x217d840() {
   return (neuron0x216a820()*1.04204);
}

double NNfunction-ss_uLuL::synapse0x217d880() {
   return (neuron0x216ab60()*0.55308);
}

double NNfunction-ss_uLuL::synapse0x217d8c0() {
   return (neuron0x216aea0()*1.26652);
}

double NNfunction-ss_uLuL::synapse0x217d900() {
   return (neuron0x216b1e0()*-0.521286);
}

double NNfunction-ss_uLuL::synapse0x217d940() {
   return (neuron0x216b520()*0.833887);
}

double NNfunction-ss_uLuL::synapse0x217d3d0() {
   return (neuron0x216b860()*-0.693369);
}

double NNfunction-ss_uLuL::synapse0x217d410() {
   return (neuron0x216bdc0()*-0.210997);
}

double NNfunction-ss_uLuL::synapse0x217da90() {
   return (neuron0x216bfe0()*-0.761849);
}

double NNfunction-ss_uLuL::synapse0x217dad0() {
   return (neuron0x216c320()*-0.915958);
}

double NNfunction-ss_uLuL::synapse0x217db10() {
   return (neuron0x216c660()*-0.432878);
}

double NNfunction-ss_uLuL::synapse0x217db50() {
   return (neuron0x216c9a0()*-0.185461);
}

double NNfunction-ss_uLuL::synapse0x217db90() {
   return (neuron0x216cce0()*0.217328);
}

double NNfunction-ss_uLuL::synapse0x217dbd0() {
   return (neuron0x216d020()*0.095925);
}

double NNfunction-ss_uLuL::synapse0x218faa0() {
   return (neuron0x21684f0()*0.19011);
}

double NNfunction-ss_uLuL::synapse0x218fae0() {
   return (neuron0x21687a0()*-0.233877);
}

double NNfunction-ss_uLuL::synapse0x218fb20() {
   return (neuron0x2168ae0()*-0.426518);
}

double NNfunction-ss_uLuL::synapse0x218fb60() {
   return (neuron0x2168e20()*0.0718046);
}

double NNfunction-ss_uLuL::synapse0x218fba0() {
   return (neuron0x2169160()*-0.395483);
}

double NNfunction-ss_uLuL::synapse0x218fbe0() {
   return (neuron0x21694a0()*-0.173517);
}

double NNfunction-ss_uLuL::synapse0x218fc20() {
   return (neuron0x21697e0()*-0.017013);
}

double NNfunction-ss_uLuL::synapse0x218fc60() {
   return (neuron0x2169b20()*0.0791615);
}

double NNfunction-ss_uLuL::synapse0x218fca0() {
   return (neuron0x2169e60()*0.078068);
}

double NNfunction-ss_uLuL::synapse0x218fce0() {
   return (neuron0x216a1a0()*-0.0160399);
}

double NNfunction-ss_uLuL::synapse0x218fd20() {
   return (neuron0x216a4e0()*0.222739);
}

double NNfunction-ss_uLuL::synapse0x218fd60() {
   return (neuron0x216a820()*-0.957964);
}

double NNfunction-ss_uLuL::synapse0x218fda0() {
   return (neuron0x216ab60()*0.100963);
}

double NNfunction-ss_uLuL::synapse0x218fde0() {
   return (neuron0x216aea0()*0.29678);
}

double NNfunction-ss_uLuL::synapse0x218fe20() {
   return (neuron0x216b1e0()*0.105118);
}

double NNfunction-ss_uLuL::synapse0x218fe60() {
   return (neuron0x216b520()*-0.449345);
}

double NNfunction-ss_uLuL::synapse0x217dc10() {
   return (neuron0x216b860()*0.084846);
}

double NNfunction-ss_uLuL::synapse0x217dc50() {
   return (neuron0x216bdc0()*0.26455);
}

double NNfunction-ss_uLuL::synapse0x218ffb0() {
   return (neuron0x216bfe0()*-0.0649034);
}

double NNfunction-ss_uLuL::synapse0x218fff0() {
   return (neuron0x216c320()*-0.0785424);
}

double NNfunction-ss_uLuL::synapse0x2190030() {
   return (neuron0x216c660()*0.0946282);
}

double NNfunction-ss_uLuL::synapse0x2190070() {
   return (neuron0x216c9a0()*0.120653);
}

double NNfunction-ss_uLuL::synapse0x21900b0() {
   return (neuron0x216cce0()*-0.245087);
}

double NNfunction-ss_uLuL::synapse0x21900f0() {
   return (neuron0x216d020()*-0.0102833);
}

double NNfunction-ss_uLuL::synapse0x2190470() {
   return (neuron0x21684f0()*-0.259972);
}

double NNfunction-ss_uLuL::synapse0x21904b0() {
   return (neuron0x21687a0()*-0.286979);
}

double NNfunction-ss_uLuL::synapse0x21904f0() {
   return (neuron0x2168ae0()*-1.14835);
}

double NNfunction-ss_uLuL::synapse0x2190530() {
   return (neuron0x2168e20()*0.0548414);
}

double NNfunction-ss_uLuL::synapse0x2190570() {
   return (neuron0x2169160()*-0.299803);
}

double NNfunction-ss_uLuL::synapse0x21905b0() {
   return (neuron0x21694a0()*-0.267041);
}

double NNfunction-ss_uLuL::synapse0x21905f0() {
   return (neuron0x21697e0()*-0.25437);
}

double NNfunction-ss_uLuL::synapse0x2190630() {
   return (neuron0x2169b20()*-0.0789843);
}

double NNfunction-ss_uLuL::synapse0x2190670() {
   return (neuron0x2169e60()*-0.454159);
}

double NNfunction-ss_uLuL::synapse0x21906b0() {
   return (neuron0x216a1a0()*-0.276638);
}

double NNfunction-ss_uLuL::synapse0x21906f0() {
   return (neuron0x216a4e0()*-0.149657);
}

double NNfunction-ss_uLuL::synapse0x2190730() {
   return (neuron0x216a820()*0.618333);
}

double NNfunction-ss_uLuL::synapse0x2190770() {
   return (neuron0x216ab60()*0.238845);
}

double NNfunction-ss_uLuL::synapse0x21907b0() {
   return (neuron0x216aea0()*-1.17062);
}

double NNfunction-ss_uLuL::synapse0x21907f0() {
   return (neuron0x216b1e0()*0.416173);
}

double NNfunction-ss_uLuL::synapse0x2190830() {
   return (neuron0x216b520()*0.117414);
}

double NNfunction-ss_uLuL::synapse0x21902c0() {
   return (neuron0x216b860()*0.0814149);
}

double NNfunction-ss_uLuL::synapse0x2190300() {
   return (neuron0x216bdc0()*0.377741);
}

double NNfunction-ss_uLuL::synapse0x2190980() {
   return (neuron0x216bfe0()*0.00583143);
}

double NNfunction-ss_uLuL::synapse0x21909c0() {
   return (neuron0x216c320()*-0.361147);
}

double NNfunction-ss_uLuL::synapse0x2190a00() {
   return (neuron0x216c660()*-0.326983);
}

double NNfunction-ss_uLuL::synapse0x2190a40() {
   return (neuron0x216c9a0()*-0.124526);
}

double NNfunction-ss_uLuL::synapse0x2190a80() {
   return (neuron0x216cce0()*0.414192);
}

double NNfunction-ss_uLuL::synapse0x2190ac0() {
   return (neuron0x216d020()*-0.0254953);
}

double NNfunction-ss_uLuL::synapse0x2190e40() {
   return (neuron0x21684f0()*0.47005);
}

double NNfunction-ss_uLuL::synapse0x2190e80() {
   return (neuron0x21687a0()*-0.0300383);
}

double NNfunction-ss_uLuL::synapse0x2190ec0() {
   return (neuron0x2168ae0()*-0.516673);
}

double NNfunction-ss_uLuL::synapse0x2190f00() {
   return (neuron0x2168e20()*0.779666);
}

double NNfunction-ss_uLuL::synapse0x2190f40() {
   return (neuron0x2169160()*-0.108235);
}

double NNfunction-ss_uLuL::synapse0x2190f80() {
   return (neuron0x21694a0()*-0.228138);
}

double NNfunction-ss_uLuL::synapse0x2190fc0() {
   return (neuron0x21697e0()*-0.33025);
}

double NNfunction-ss_uLuL::synapse0x2191000() {
   return (neuron0x2169b20()*-0.115558);
}

double NNfunction-ss_uLuL::synapse0x2191040() {
   return (neuron0x2169e60()*-0.0789055);
}

double NNfunction-ss_uLuL::synapse0x2191080() {
   return (neuron0x216a1a0()*-0.415009);
}

double NNfunction-ss_uLuL::synapse0x21910c0() {
   return (neuron0x216a4e0()*0.156118);
}

double NNfunction-ss_uLuL::synapse0x2191100() {
   return (neuron0x216a820()*1.03846);
}

double NNfunction-ss_uLuL::synapse0x2191140() {
   return (neuron0x216ab60()*0.0975581);
}

double NNfunction-ss_uLuL::synapse0x2191180() {
   return (neuron0x216aea0()*-0.260179);
}

double NNfunction-ss_uLuL::synapse0x21911c0() {
   return (neuron0x216b1e0()*0.0403538);
}

double NNfunction-ss_uLuL::synapse0x2191200() {
   return (neuron0x216b520()*0.00134);
}

double NNfunction-ss_uLuL::synapse0x2190c90() {
   return (neuron0x216b860()*-0.13209);
}

double NNfunction-ss_uLuL::synapse0x2190cd0() {
   return (neuron0x216bdc0()*-0.187379);
}

double NNfunction-ss_uLuL::synapse0x2191350() {
   return (neuron0x216bfe0()*-0.118767);
}

double NNfunction-ss_uLuL::synapse0x2191390() {
   return (neuron0x216c320()*0.0840334);
}

double NNfunction-ss_uLuL::synapse0x21913d0() {
   return (neuron0x216c660()*-0.330748);
}

double NNfunction-ss_uLuL::synapse0x2191410() {
   return (neuron0x216c9a0()*-0.201509);
}

double NNfunction-ss_uLuL::synapse0x2191450() {
   return (neuron0x216cce0()*0.144992);
}

double NNfunction-ss_uLuL::synapse0x2191490() {
   return (neuron0x216d020()*-0.0929162);
}

double NNfunction-ss_uLuL::synapse0x2191810() {
   return (neuron0x21684f0()*-0.0634756);
}

double NNfunction-ss_uLuL::synapse0x2191850() {
   return (neuron0x21687a0()*0.00655263);
}

double NNfunction-ss_uLuL::synapse0x2191890() {
   return (neuron0x2168ae0()*0.0333011);
}

double NNfunction-ss_uLuL::synapse0x21918d0() {
   return (neuron0x2168e20()*-0.22094);
}

double NNfunction-ss_uLuL::synapse0x2191910() {
   return (neuron0x2169160()*0.00102745);
}

double NNfunction-ss_uLuL::synapse0x2191950() {
   return (neuron0x21694a0()*0.00693884);
}

double NNfunction-ss_uLuL::synapse0x2191990() {
   return (neuron0x21697e0()*-0.0433011);
}

double NNfunction-ss_uLuL::synapse0x21919d0() {
   return (neuron0x2169b20()*0.0288831);
}

double NNfunction-ss_uLuL::synapse0x2191a10() {
   return (neuron0x2169e60()*0.246355);
}

double NNfunction-ss_uLuL::synapse0x2191a50() {
   return (neuron0x216a1a0()*-0.111506);
}

double NNfunction-ss_uLuL::synapse0x2191a90() {
   return (neuron0x216a4e0()*-0.0355305);
}

double NNfunction-ss_uLuL::synapse0x2191ad0() {
   return (neuron0x216a820()*-1.83591);
}

double NNfunction-ss_uLuL::synapse0x2191b10() {
   return (neuron0x216ab60()*-0.0392786);
}

double NNfunction-ss_uLuL::synapse0x2191b50() {
   return (neuron0x216aea0()*-0.0730788);
}

double NNfunction-ss_uLuL::synapse0x2191b90() {
   return (neuron0x216b1e0()*-0.00335767);
}

double NNfunction-ss_uLuL::synapse0x2191bd0() {
   return (neuron0x216b520()*0.00308688);
}

double NNfunction-ss_uLuL::synapse0x2191660() {
   return (neuron0x216b860()*-0.0649284);
}

double NNfunction-ss_uLuL::synapse0x21916a0() {
   return (neuron0x216bdc0()*0.0262565);
}

double NNfunction-ss_uLuL::synapse0x2191d20() {
   return (neuron0x216bfe0()*-0.0150875);
}

double NNfunction-ss_uLuL::synapse0x2191d60() {
   return (neuron0x216c320()*-0.0559431);
}

double NNfunction-ss_uLuL::synapse0x2191da0() {
   return (neuron0x216c660()*0.0503267);
}

double NNfunction-ss_uLuL::synapse0x2191de0() {
   return (neuron0x216c9a0()*-0.0795259);
}

double NNfunction-ss_uLuL::synapse0x2191e20() {
   return (neuron0x216cce0()*0.0535296);
}

double NNfunction-ss_uLuL::synapse0x2191e60() {
   return (neuron0x216d020()*-0.00576725);
}

double NNfunction-ss_uLuL::synapse0x216e3f0() {
   return (neuron0x216d490()*-0.490891);
}

double NNfunction-ss_uLuL::synapse0x216e430() {
   return (neuron0x216dde0()*-0.377441);
}

double NNfunction-ss_uLuL::synapse0x216f910() {
   return (neuron0x216e8c0()*0.719637);
}

double NNfunction-ss_uLuL::synapse0x216f950() {
   return (neuron0x1f31c10()*0.9723);
}

double NNfunction-ss_uLuL::synapse0x21702e0() {
   return (neuron0x216f660()*1.71221);
}

double NNfunction-ss_uLuL::synapse0x2170320() {
   return (neuron0x2170030()*-1.90576);
}

double NNfunction-ss_uLuL::synapse0x21710b0() {
   return (neuron0x2170e00()*-0.075421);
}

double NNfunction-ss_uLuL::synapse0x21710f0() {
   return (neuron0x21717d0()*0.205183);
}

double NNfunction-ss_uLuL::synapse0x2171a80() {
   return (neuron0x21721a0()*-1.39036);
}

double NNfunction-ss_uLuL::synapse0x2171ac0() {
   return (neuron0x2172c80()*1.99511);
}

double NNfunction-ss_uLuL::synapse0x2172450() {
   return (neuron0x2173650()*0.24568);
}

double NNfunction-ss_uLuL::synapse0x2172490() {
   return (neuron0x2170730()*-0.72844);
}

double NNfunction-ss_uLuL::synapse0x2172f30() {
   return (neuron0x2175200()*-0.682817);
}

double NNfunction-ss_uLuL::synapse0x2172f70() {
   return (neuron0x2175bd0()*1.03168);
}

double NNfunction-ss_uLuL::synapse0x2173900() {
   return (neuron0x21765a0()*0.248326);
}

double NNfunction-ss_uLuL::synapse0x2173940() {
   return (neuron0x2176f70()*-1.22897);
}

double NNfunction-ss_uLuL::synapse0x21709e0() {
   return (neuron0x2178d80()*-0.429935);
}

double NNfunction-ss_uLuL::synapse0x2170a20() {
   return (neuron0x2179060()*-3.65437);
}

double NNfunction-ss_uLuL::synapse0x21754b0() {
   return (neuron0x2179a30()*-1.0204);
}

double NNfunction-ss_uLuL::synapse0x21754f0() {
   return (neuron0x217a400()*-4.06323);
}

double NNfunction-ss_uLuL::synapse0x2175e80() {
   return (neuron0x217add0()*0.31619);
}

double NNfunction-ss_uLuL::synapse0x2175ec0() {
   return (neuron0x217b7a0()*0.257617);
}

double NNfunction-ss_uLuL::synapse0x2176850() {
   return (neuron0x21742f0()*-0.571403);
}

double NNfunction-ss_uLuL::synapse0x2176890() {
   return (neuron0x2174cc0()*-1.05687);
}

double NNfunction-ss_uLuL::synapse0x2177220() {
   return (neuron0x217e530()*-0.719683);
}

double NNfunction-ss_uLuL::synapse0x2177260() {
   return (neuron0x217ef00()*2.0774);
}

double NNfunction-ss_uLuL::synapse0x216b400() {
   return (neuron0x217f8d0()*-0.489893);
}

double NNfunction-ss_uLuL::synapse0x216b440() {
   return (neuron0x21802a0()*-1.88323);
}

double NNfunction-ss_uLuL::synapse0x2179310() {
   return (neuron0x2180c70()*0.76778);
}

double NNfunction-ss_uLuL::synapse0x2179350() {
   return (neuron0x2181640()*-2.01635);
}

double NNfunction-ss_uLuL::synapse0x2179ce0() {
   return (neuron0x2182010()*0.937275);
}

double NNfunction-ss_uLuL::synapse0x2179d20() {
   return (neuron0x21829e0()*-0.816036);
}

double NNfunction-ss_uLuL::synapse0x217a6b0() {
   return (neuron0x2178a70()*0.332022);
}

double NNfunction-ss_uLuL::synapse0x217a6f0() {
   return (neuron0x21855c0()*0.97125);
}

double NNfunction-ss_uLuL::synapse0x217b080() {
   return (neuron0x2185f90()*3.32787);
}

double NNfunction-ss_uLuL::synapse0x217b0c0() {
   return (neuron0x2186960()*0.418739);
}

double NNfunction-ss_uLuL::synapse0x217ba50() {
   return (neuron0x2187330()*-0.233888);
}

double NNfunction-ss_uLuL::synapse0x217ba90() {
   return (neuron0x2187d00()*-0.200797);
}

double NNfunction-ss_uLuL::synapse0x21745a0() {
   return (neuron0x21886d0()*0.975728);
}

double NNfunction-ss_uLuL::synapse0x21745e0() {
   return (neuron0x21890a0()*0.647246);
}

double NNfunction-ss_uLuL::synapse0x217de50() {
   return (neuron0x2189a70()*-1.17747);
}

double NNfunction-ss_uLuL::synapse0x217de90() {
   return (neuron0x218a650()*-0.796586);
}

double NNfunction-ss_uLuL::synapse0x217e7e0() {
   return (neuron0x218b020()*-0.728257);
}

double NNfunction-ss_uLuL::synapse0x217e820() {
   return (neuron0x217bea0()*0.408241);
}

double NNfunction-ss_uLuL::synapse0x217f1b0() {
   return (neuron0x217c870()*0.415017);
}

double NNfunction-ss_uLuL::synapse0x217f1f0() {
   return (neuron0x217d240()*-0.586195);
}

double NNfunction-ss_uLuL::synapse0x217fb80() {
   return (neuron0x218f880()*-0.40369);
}

double NNfunction-ss_uLuL::synapse0x217fbc0() {
   return (neuron0x2190130()*0.323416);
}

double NNfunction-ss_uLuL::synapse0x2180550() {
   return (neuron0x2190b00()*-0.65942);
}

double NNfunction-ss_uLuL::synapse0x2180590() {
   return (neuron0x21914d0()*1.72722);
}

double NNfunction-ss_uLuL::synapse0x2182c90() {
   return (neuron0x216d490()*-0.164997);
}

double NNfunction-ss_uLuL::synapse0x2182cd0() {
   return (neuron0x216dde0()*0.112003);
}

double NNfunction-ss_uLuL::synapse0x2178250() {
   return (neuron0x216e8c0()*-0.0784685);
}

double NNfunction-ss_uLuL::synapse0x2178290() {
   return (neuron0x1f31c10()*-0.193459);
}

double NNfunction-ss_uLuL::synapse0x2185870() {
   return (neuron0x216f660()*-0.706315);
}

double NNfunction-ss_uLuL::synapse0x21858b0() {
   return (neuron0x2170030()*0.643839);
}

double NNfunction-ss_uLuL::synapse0x2186240() {
   return (neuron0x2170e00()*-1.10439);
}

double NNfunction-ss_uLuL::synapse0x2186280() {
   return (neuron0x21717d0()*-0.375043);
}

double NNfunction-ss_uLuL::synapse0x2186c10() {
   return (neuron0x21721a0()*0.489994);
}

double NNfunction-ss_uLuL::synapse0x2186c50() {
   return (neuron0x2172c80()*-0.684293);
}

double NNfunction-ss_uLuL::synapse0x21875e0() {
   return (neuron0x2173650()*-0.0458076);
}

double NNfunction-ss_uLuL::synapse0x2187620() {
   return (neuron0x2170730()*0.171762);
}

double NNfunction-ss_uLuL::synapse0x2187fb0() {
   return (neuron0x2175200()*0.190657);
}

double NNfunction-ss_uLuL::synapse0x2187ff0() {
   return (neuron0x2175bd0()*-1.36891);
}

double NNfunction-ss_uLuL::synapse0x2188980() {
   return (neuron0x21765a0()*-0.132752);
}

double NNfunction-ss_uLuL::synapse0x21889c0() {
   return (neuron0x2176f70()*0.212079);
}

double NNfunction-ss_uLuL::synapse0x2189350() {
   return (neuron0x2178d80()*0.121266);
}

double NNfunction-ss_uLuL::synapse0x2189390() {
   return (neuron0x2179060()*0.774827);
}

double NNfunction-ss_uLuL::synapse0x2189d20() {
   return (neuron0x2179a30()*0.672541);
}

double NNfunction-ss_uLuL::synapse0x2189d60() {
   return (neuron0x217a400()*0.244664);
}

double NNfunction-ss_uLuL::synapse0x218a900() {
   return (neuron0x217add0()*0.00921361);
}

double NNfunction-ss_uLuL::synapse0x218a940() {
   return (neuron0x217b7a0()*-0.302822);
}

double NNfunction-ss_uLuL::synapse0x218b2d0() {
   return (neuron0x21742f0()*0.285372);
}

double NNfunction-ss_uLuL::synapse0x218b310() {
   return (neuron0x2174cc0()*0.362244);
}

double NNfunction-ss_uLuL::synapse0x217c150() {
   return (neuron0x217e530()*0.21768);
}

double NNfunction-ss_uLuL::synapse0x217c190() {
   return (neuron0x217ef00()*-1.08563);
}

double NNfunction-ss_uLuL::synapse0x217cb20() {
   return (neuron0x217f8d0()*0.134511);
}

double NNfunction-ss_uLuL::synapse0x217cb60() {
   return (neuron0x21802a0()*0.126537);
}

double NNfunction-ss_uLuL::synapse0x217d4f0() {
   return (neuron0x2180c70()*-0.202439);
}

double NNfunction-ss_uLuL::synapse0x217d530() {
   return (neuron0x2181640()*0.628795);
}

double NNfunction-ss_uLuL::synapse0x218fa10() {
   return (neuron0x2182010()*-0.0714133);
}

double NNfunction-ss_uLuL::synapse0x218fa50() {
   return (neuron0x21829e0()*0.381359);
}

double NNfunction-ss_uLuL::synapse0x21903e0() {
   return (neuron0x2178a70()*0.0346555);
}

double NNfunction-ss_uLuL::synapse0x2190420() {
   return (neuron0x21855c0()*-0.269331);
}

double NNfunction-ss_uLuL::synapse0x2190db0() {
   return (neuron0x2185f90()*0.436379);
}

double NNfunction-ss_uLuL::synapse0x2190df0() {
   return (neuron0x2186960()*1.0469);
}

double NNfunction-ss_uLuL::synapse0x2191780() {
   return (neuron0x2187330()*0.10439);
}

double NNfunction-ss_uLuL::synapse0x21917c0() {
   return (neuron0x2187d00()*0.113882);
}

double NNfunction-ss_uLuL::synapse0x216d6b0() {
   return (neuron0x21886d0()*-0.147195);
}

double NNfunction-ss_uLuL::synapse0x216d6f0() {
   return (neuron0x21890a0()*-0.216974);
}

double NNfunction-ss_uLuL::synapse0x2180f20() {
   return (neuron0x2189a70()*0.443608);
}

double NNfunction-ss_uLuL::synapse0x2180f60() {
   return (neuron0x218a650()*-0.0638522);
}

double NNfunction-ss_uLuL::synapse0x2191ea0() {
   return (neuron0x218b020()*0.199894);
}

double NNfunction-ss_uLuL::synapse0x2191ee0() {
   return (neuron0x217bea0()*-0.146857);
}

double NNfunction-ss_uLuL::synapse0x2191f20() {
   return (neuron0x217c870()*-0.169064);
}

double NNfunction-ss_uLuL::synapse0x2191f60() {
   return (neuron0x217d240()*0.291694);
}

double NNfunction-ss_uLuL::synapse0x2198e10() {
   return (neuron0x218f880()*0.164535);
}

double NNfunction-ss_uLuL::synapse0x2198e50() {
   return (neuron0x2190130()*-0.136657);
}

double NNfunction-ss_uLuL::synapse0x2198e90() {
   return (neuron0x2190b00()*-0.00431857);
}

double NNfunction-ss_uLuL::synapse0x2198ed0() {
   return (neuron0x21914d0()*-0.384788);
}

double NNfunction-ss_uLuL::synapse0x2199250() {
   return (neuron0x216d490()*2.29571);
}

double NNfunction-ss_uLuL::synapse0x2199290() {
   return (neuron0x216dde0()*-1.01826);
}

double NNfunction-ss_uLuL::synapse0x21992d0() {
   return (neuron0x216e8c0()*0.366933);
}

double NNfunction-ss_uLuL::synapse0x2199310() {
   return (neuron0x1f31c10()*-3.26894);
}

double NNfunction-ss_uLuL::synapse0x2199350() {
   return (neuron0x216f660()*-4.43927);
}

double NNfunction-ss_uLuL::synapse0x2199390() {
   return (neuron0x2170030()*-2.27651);
}

double NNfunction-ss_uLuL::synapse0x21993d0() {
   return (neuron0x2170e00()*-0.667061);
}

double NNfunction-ss_uLuL::synapse0x2199410() {
   return (neuron0x21717d0()*0.30333);
}

double NNfunction-ss_uLuL::synapse0x2199450() {
   return (neuron0x21721a0()*8.65102);
}

double NNfunction-ss_uLuL::synapse0x2199490() {
   return (neuron0x2172c80()*-0.689893);
}

double NNfunction-ss_uLuL::synapse0x21994d0() {
   return (neuron0x2173650()*0.674264);
}

double NNfunction-ss_uLuL::synapse0x2199510() {
   return (neuron0x2170730()*1.09976);
}

double NNfunction-ss_uLuL::synapse0x2199550() {
   return (neuron0x2175200()*0.584316);
}

double NNfunction-ss_uLuL::synapse0x2199590() {
   return (neuron0x2175bd0()*-1.69227);
}

double NNfunction-ss_uLuL::synapse0x21995d0() {
   return (neuron0x21765a0()*0.740668);
}

double NNfunction-ss_uLuL::synapse0x2199610() {
   return (neuron0x2176f70()*0.646239);
}

double NNfunction-ss_uLuL::synapse0x21990a0() {
   return (neuron0x2178d80()*-0.687035);
}

double NNfunction-ss_uLuL::synapse0x21990e0() {
   return (neuron0x2179060()*4.84526);
}

double NNfunction-ss_uLuL::synapse0x2199760() {
   return (neuron0x2179a30()*4.66724);
}

double NNfunction-ss_uLuL::synapse0x21997a0() {
   return (neuron0x217a400()*2.88991);
}

double NNfunction-ss_uLuL::synapse0x21997e0() {
   return (neuron0x217add0()*0.64979);
}

double NNfunction-ss_uLuL::synapse0x2199820() {
   return (neuron0x217b7a0()*1.1558);
}

double NNfunction-ss_uLuL::synapse0x2199860() {
   return (neuron0x21742f0()*-0.22892);
}

double NNfunction-ss_uLuL::synapse0x21998a0() {
   return (neuron0x2174cc0()*-0.200276);
}

double NNfunction-ss_uLuL::synapse0x21998e0() {
   return (neuron0x217e530()*-1.08455);
}

double NNfunction-ss_uLuL::synapse0x2199920() {
   return (neuron0x217ef00()*-0.798297);
}

double NNfunction-ss_uLuL::synapse0x2199960() {
   return (neuron0x217f8d0()*0.471637);
}

double NNfunction-ss_uLuL::synapse0x21999a0() {
   return (neuron0x21802a0()*2.30773);
}

double NNfunction-ss_uLuL::synapse0x21999e0() {
   return (neuron0x2180c70()*1.34519);
}

double NNfunction-ss_uLuL::synapse0x2199a20() {
   return (neuron0x2181640()*0.821055);
}

double NNfunction-ss_uLuL::synapse0x2199a60() {
   return (neuron0x2182010()*-2.79263);
}

double NNfunction-ss_uLuL::synapse0x2199aa0() {
   return (neuron0x21829e0()*2.0405);
}

double NNfunction-ss_uLuL::synapse0x2199650() {
   return (neuron0x2178a70()*0.882423);
}

double NNfunction-ss_uLuL::synapse0x2199690() {
   return (neuron0x21855c0()*0.102224);
}

double NNfunction-ss_uLuL::synapse0x21996d0() {
   return (neuron0x2185f90()*-0.907605);
}

double NNfunction-ss_uLuL::synapse0x2199710() {
   return (neuron0x2186960()*-0.063241);
}

double NNfunction-ss_uLuL::synapse0x2199cf0() {
   return (neuron0x2187330()*-1.4808);
}

double NNfunction-ss_uLuL::synapse0x2199d30() {
   return (neuron0x2187d00()*0.586821);
}

double NNfunction-ss_uLuL::synapse0x2199d70() {
   return (neuron0x21886d0()*-0.95377);
}

double NNfunction-ss_uLuL::synapse0x2199db0() {
   return (neuron0x21890a0()*-0.765372);
}

double NNfunction-ss_uLuL::synapse0x2199df0() {
   return (neuron0x2189a70()*0.0878432);
}

double NNfunction-ss_uLuL::synapse0x2199e30() {
   return (neuron0x218a650()*3.44326);
}

double NNfunction-ss_uLuL::synapse0x2199e70() {
   return (neuron0x218b020()*0.37165);
}

double NNfunction-ss_uLuL::synapse0x2199eb0() {
   return (neuron0x217bea0()*0.866028);
}

double NNfunction-ss_uLuL::synapse0x2199ef0() {
   return (neuron0x217c870()*0.950295);
}

double NNfunction-ss_uLuL::synapse0x2199f30() {
   return (neuron0x217d240()*-0.741707);
}

double NNfunction-ss_uLuL::synapse0x2199f70() {
   return (neuron0x218f880()*1.34633);
}

double NNfunction-ss_uLuL::synapse0x2199fb0() {
   return (neuron0x2190130()*-1.07495);
}

double NNfunction-ss_uLuL::synapse0x2199ff0() {
   return (neuron0x2190b00()*0.918008);
}

double NNfunction-ss_uLuL::synapse0x219a030() {
   return (neuron0x21914d0()*-2.70615);
}

double NNfunction-ss_uLuL::synapse0x219a3b0() {
   return (neuron0x216d490()*-0.123259);
}

double NNfunction-ss_uLuL::synapse0x219a3f0() {
   return (neuron0x216dde0()*0.179281);
}

double NNfunction-ss_uLuL::synapse0x219a430() {
   return (neuron0x216e8c0()*-0.198185);
}

double NNfunction-ss_uLuL::synapse0x219a470() {
   return (neuron0x1f31c10()*-0.351376);
}

double NNfunction-ss_uLuL::synapse0x219a4b0() {
   return (neuron0x216f660()*-0.622739);
}

double NNfunction-ss_uLuL::synapse0x219a4f0() {
   return (neuron0x2170030()*0.909281);
}

double NNfunction-ss_uLuL::synapse0x219a530() {
   return (neuron0x2170e00()*0.638433);
}

double NNfunction-ss_uLuL::synapse0x219a570() {
   return (neuron0x21717d0()*0.574733);
}

double NNfunction-ss_uLuL::synapse0x219a5b0() {
   return (neuron0x21721a0()*0.285327);
}

double NNfunction-ss_uLuL::synapse0x219a5f0() {
   return (neuron0x2172c80()*-1.04521);
}

double NNfunction-ss_uLuL::synapse0x219a630() {
   return (neuron0x2173650()*-0.0862445);
}

double NNfunction-ss_uLuL::synapse0x219a670() {
   return (neuron0x2170730()*0.294835);
}

double NNfunction-ss_uLuL::synapse0x219a6b0() {
   return (neuron0x2175200()*0.316415);
}

double NNfunction-ss_uLuL::synapse0x219a6f0() {
   return (neuron0x2175bd0()*0.264294);
}

double NNfunction-ss_uLuL::synapse0x219a730() {
   return (neuron0x21765a0()*-0.176947);
}

double NNfunction-ss_uLuL::synapse0x219a770() {
   return (neuron0x2176f70()*0.366746);
}

double NNfunction-ss_uLuL::synapse0x219a200() {
   return (neuron0x2178d80()*0.211216);
}

double NNfunction-ss_uLuL::synapse0x219a240() {
   return (neuron0x2179060()*0.288874);
}

double NNfunction-ss_uLuL::synapse0x219a8c0() {
   return (neuron0x2179a30()*0.622544);
}

double NNfunction-ss_uLuL::synapse0x219a900() {
   return (neuron0x217a400()*1.05297);
}

double NNfunction-ss_uLuL::synapse0x219a940() {
   return (neuron0x217add0()*-0.019581);
}

double NNfunction-ss_uLuL::synapse0x219a980() {
   return (neuron0x217b7a0()*-0.352711);
}

double NNfunction-ss_uLuL::synapse0x219a9c0() {
   return (neuron0x21742f0()*0.407758);
}

double NNfunction-ss_uLuL::synapse0x219aa00() {
   return (neuron0x2174cc0()*0.566198);
}

double NNfunction-ss_uLuL::synapse0x219aa40() {
   return (neuron0x217e530()*0.331582);
}

double NNfunction-ss_uLuL::synapse0x219aa80() {
   return (neuron0x217ef00()*0.125432);
}

double NNfunction-ss_uLuL::synapse0x219aac0() {
   return (neuron0x217f8d0()*0.225154);
}

double NNfunction-ss_uLuL::synapse0x219ab00() {
   return (neuron0x21802a0()*-0.398124);
}

double NNfunction-ss_uLuL::synapse0x219ab40() {
   return (neuron0x2180c70()*-0.325056);
}

double NNfunction-ss_uLuL::synapse0x219ab80() {
   return (neuron0x2181640()*-0.744479);
}

double NNfunction-ss_uLuL::synapse0x219abc0() {
   return (neuron0x2182010()*-0.256106);
}

double NNfunction-ss_uLuL::synapse0x219ac00() {
   return (neuron0x21829e0()*0.478082);
}

double NNfunction-ss_uLuL::synapse0x219a7b0() {
   return (neuron0x2178a70()*-0.0158094);
}

double NNfunction-ss_uLuL::synapse0x219a7f0() {
   return (neuron0x21855c0()*-0.411509);
}

double NNfunction-ss_uLuL::synapse0x219a830() {
   return (neuron0x2185f90()*0.315255);
}

double NNfunction-ss_uLuL::synapse0x219a870() {
   return (neuron0x2186960()*-0.852366);
}

double NNfunction-ss_uLuL::synapse0x219ae50() {
   return (neuron0x2187330()*0.158321);
}

double NNfunction-ss_uLuL::synapse0x219ae90() {
   return (neuron0x2187d00()*0.171447);
}

double NNfunction-ss_uLuL::synapse0x219aed0() {
   return (neuron0x21886d0()*-0.352663);
}

double NNfunction-ss_uLuL::synapse0x219af10() {
   return (neuron0x21890a0()*-0.325614);
}

double NNfunction-ss_uLuL::synapse0x219af50() {
   return (neuron0x2189a70()*0.603544);
}

double NNfunction-ss_uLuL::synapse0x219af90() {
   return (neuron0x218a650()*-1.52464);
}

double NNfunction-ss_uLuL::synapse0x219afd0() {
   return (neuron0x218b020()*0.328981);
}

double NNfunction-ss_uLuL::synapse0x219b010() {
   return (neuron0x217bea0()*-0.232767);
}

double NNfunction-ss_uLuL::synapse0x219b050() {
   return (neuron0x217c870()*-0.236537);
}

double NNfunction-ss_uLuL::synapse0x219b090() {
   return (neuron0x217d240()*0.403325);
}

double NNfunction-ss_uLuL::synapse0x219b0d0() {
   return (neuron0x218f880()*0.256491);
}

double NNfunction-ss_uLuL::synapse0x219b110() {
   return (neuron0x2190130()*-0.197971);
}

double NNfunction-ss_uLuL::synapse0x219b150() {
   return (neuron0x2190b00()*0.0718894);
}

double NNfunction-ss_uLuL::synapse0x219b190() {
   return (neuron0x21914d0()*-0.22771);
}

double NNfunction-ss_uLuL::synapse0x219b510() {
   return (neuron0x216d490()*-0.397675);
}

double NNfunction-ss_uLuL::synapse0x219b550() {
   return (neuron0x216dde0()*-0.148558);
}

double NNfunction-ss_uLuL::synapse0x219b590() {
   return (neuron0x216e8c0()*-0.361492);
}

double NNfunction-ss_uLuL::synapse0x219b5d0() {
   return (neuron0x1f31c10()*-0.118133);
}

double NNfunction-ss_uLuL::synapse0x219b610() {
   return (neuron0x216f660()*-0.147004);
}

double NNfunction-ss_uLuL::synapse0x219b650() {
   return (neuron0x2170030()*-0.694212);
}

double NNfunction-ss_uLuL::synapse0x219b690() {
   return (neuron0x2170e00()*-0.700308);
}

double NNfunction-ss_uLuL::synapse0x219b6d0() {
   return (neuron0x21717d0()*-0.287576);
}

double NNfunction-ss_uLuL::synapse0x219b710() {
   return (neuron0x21721a0()*-0.322417);
}

double NNfunction-ss_uLuL::synapse0x219b750() {
   return (neuron0x2172c80()*0.154807);
}

double NNfunction-ss_uLuL::synapse0x219b790() {
   return (neuron0x2173650()*-0.399891);
}

double NNfunction-ss_uLuL::synapse0x219b7d0() {
   return (neuron0x2170730()*0.0521668);
}

double NNfunction-ss_uLuL::synapse0x219b810() {
   return (neuron0x2175200()*-0.301064);
}

double NNfunction-ss_uLuL::synapse0x219b850() {
   return (neuron0x2175bd0()*0.175589);
}

double NNfunction-ss_uLuL::synapse0x219b890() {
   return (neuron0x21765a0()*-0.181179);
}

double NNfunction-ss_uLuL::synapse0x219b8d0() {
   return (neuron0x2176f70()*-0.033432);
}

double NNfunction-ss_uLuL::synapse0x219b360() {
   return (neuron0x2178d80()*-0.582005);
}

double NNfunction-ss_uLuL::synapse0x219b3a0() {
   return (neuron0x2179060()*-0.54272);
}

double NNfunction-ss_uLuL::synapse0x219ba20() {
   return (neuron0x2179a30()*-0.441208);
}

double NNfunction-ss_uLuL::synapse0x219ba60() {
   return (neuron0x217a400()*0.0738765);
}

double NNfunction-ss_uLuL::synapse0x219baa0() {
   return (neuron0x217add0()*-0.241868);
}

double NNfunction-ss_uLuL::synapse0x219bae0() {
   return (neuron0x217b7a0()*0.0603655);
}

double NNfunction-ss_uLuL::synapse0x219bb20() {
   return (neuron0x21742f0()*-0.466134);
}

double NNfunction-ss_uLuL::synapse0x219bb60() {
   return (neuron0x2174cc0()*0.135085);
}

double NNfunction-ss_uLuL::synapse0x219bba0() {
   return (neuron0x217e530()*-0.598127);
}

double NNfunction-ss_uLuL::synapse0x219bbe0() {
   return (neuron0x217ef00()*-0.832236);
}

double NNfunction-ss_uLuL::synapse0x219bc20() {
   return (neuron0x217f8d0()*-0.359917);
}

double NNfunction-ss_uLuL::synapse0x219bc60() {
   return (neuron0x21802a0()*0.0330202);
}

double NNfunction-ss_uLuL::synapse0x219bca0() {
   return (neuron0x2180c70()*-0.59555);
}

double NNfunction-ss_uLuL::synapse0x219bce0() {
   return (neuron0x2181640()*-0.0474187);
}

double NNfunction-ss_uLuL::synapse0x219bd20() {
   return (neuron0x2182010()*0.0207074);
}

double NNfunction-ss_uLuL::synapse0x219bd60() {
   return (neuron0x21829e0()*0.095363);
}

double NNfunction-ss_uLuL::synapse0x219b910() {
   return (neuron0x2178a70()*-0.169969);
}

double NNfunction-ss_uLuL::synapse0x219b950() {
   return (neuron0x21855c0()*-0.25287);
}

double NNfunction-ss_uLuL::synapse0x219b990() {
   return (neuron0x2185f90()*0.224018);
}

double NNfunction-ss_uLuL::synapse0x219b9d0() {
   return (neuron0x2186960()*-0.0580804);
}

double NNfunction-ss_uLuL::synapse0x219bfb0() {
   return (neuron0x2187330()*-0.321104);
}

double NNfunction-ss_uLuL::synapse0x219bff0() {
   return (neuron0x2187d00()*-0.526359);
}

double NNfunction-ss_uLuL::synapse0x219c030() {
   return (neuron0x21886d0()*-0.512848);
}

double NNfunction-ss_uLuL::synapse0x219c070() {
   return (neuron0x21890a0()*0.162715);
}

double NNfunction-ss_uLuL::synapse0x219c0b0() {
   return (neuron0x2189a70()*-0.631389);
}

double NNfunction-ss_uLuL::synapse0x219c0f0() {
   return (neuron0x218a650()*-0.273266);
}

double NNfunction-ss_uLuL::synapse0x219c130() {
   return (neuron0x218b020()*0.284026);
}

double NNfunction-ss_uLuL::synapse0x219c170() {
   return (neuron0x217bea0()*-0.353394);
}

double NNfunction-ss_uLuL::synapse0x219c1b0() {
   return (neuron0x217c870()*-0.597387);
}

double NNfunction-ss_uLuL::synapse0x219c1f0() {
   return (neuron0x217d240()*0.226486);
}

double NNfunction-ss_uLuL::synapse0x219c230() {
   return (neuron0x218f880()*-0.489319);
}

double NNfunction-ss_uLuL::synapse0x219c270() {
   return (neuron0x2190130()*0.0474165);
}

double NNfunction-ss_uLuL::synapse0x219c2b0() {
   return (neuron0x2190b00()*-0.356046);
}

double NNfunction-ss_uLuL::synapse0x219c2f0() {
   return (neuron0x21914d0()*-0.514704);
}

double NNfunction-ss_uLuL::synapse0x219c550() {
   return (neuron0x21986d0()*9.0195);
}

double NNfunction-ss_uLuL::synapse0x219c590() {
   return (neuron0x2198a70()*-5.88915);
}

double NNfunction-ss_uLuL::synapse0x219c5d0() {
   return (neuron0x2198f10()*-7.80467);
}

double NNfunction-ss_uLuL::synapse0x219c610() {
   return (neuron0x219a070()*5.14608);
}

double NNfunction-ss_uLuL::synapse0x219c650() {
   return (neuron0x219b1d0()*1.28891);
}

