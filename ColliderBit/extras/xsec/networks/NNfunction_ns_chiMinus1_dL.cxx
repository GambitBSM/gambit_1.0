#include "NNfunction_ns_chiMinus1_dL.h"
#include <cmath>

double NNfunction_ns_chiMinus1_dL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.5685)/15.039;
   input1 = (in1 - 33.6344)/926.006;
   input2 = (in2 - 263.045)/283.577;
   input3 = (in3 - 167.925)/704.505;
   input4 = (in4 - 888.132)/820.212;
   input5 = (in5 - 746.659)/785.733;
   input6 = (in6 - 745.099)/783.437;
   input7 = (in7 - 757.443)/775.332;
   input8 = (in8 - 755.147)/819.634;
   input9 = (in9 - 743.437)/806.364;
   input10 = (in10 - 769.984)/820.062;
   input11 = (in11 - 404.612)/306.165;
   input12 = (in12 - 707.598)/701.36;
   input13 = (in13 - 531.177)/429.516;
   input14 = (in14 - 682.521)/636.566;
   input15 = (in15 - 684.927)/637.874;
   input16 = (in16 - 487.467)/439.631;
   input17 = (in17 - 726.805)/730.642;
   input18 = (in18 - 729.206)/734.158;
   input19 = (in19 - 743.48)/717.025;
   input20 = (in20 - -137.123)/438.159;
   input21 = (in21 - -174.74)/996.89;
   input22 = (in22 - 0.860581)/1008.68;
   input23 = (in23 - -68.6779)/604.426;
   switch(index) {
     case 0:
         return neuron0x3755920();
     default:
         return 0.;
   }
}

double NNfunction_ns_chiMinus1_dL::Value(int index, double* input) {
   input0 = (input[0] - 22.5685)/15.039;
   input1 = (input[1] - 33.6344)/926.006;
   input2 = (input[2] - 263.045)/283.577;
   input3 = (input[3] - 167.925)/704.505;
   input4 = (input[4] - 888.132)/820.212;
   input5 = (input[5] - 746.659)/785.733;
   input6 = (input[6] - 745.099)/783.437;
   input7 = (input[7] - 757.443)/775.332;
   input8 = (input[8] - 755.147)/819.634;
   input9 = (input[9] - 743.437)/806.364;
   input10 = (input[10] - 769.984)/820.062;
   input11 = (input[11] - 404.612)/306.165;
   input12 = (input[12] - 707.598)/701.36;
   input13 = (input[13] - 531.177)/429.516;
   input14 = (input[14] - 682.521)/636.566;
   input15 = (input[15] - 684.927)/637.874;
   input16 = (input[16] - 487.467)/439.631;
   input17 = (input[17] - 726.805)/730.642;
   input18 = (input[18] - 729.206)/734.158;
   input19 = (input[19] - 743.48)/717.025;
   input20 = (input[20] - -137.123)/438.159;
   input21 = (input[21] - -174.74)/996.89;
   input22 = (input[22] - 0.860581)/1008.68;
   input23 = (input[23] - -68.6779)/604.426;
   switch(index) {
     case 0:
         return neuron0x3755920();
     default:
         return 0.;
   }
}

double NNfunction_ns_chiMinus1_dL::neuron0x3720990() {
   return input0;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3720c40() {
   return input1;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3720f80() {
   return input2;
}

double NNfunction_ns_chiMinus1_dL::neuron0x37212c0() {
   return input3;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3721600() {
   return input4;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3721940() {
   return input5;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3721c80() {
   return input6;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3721fc0() {
   return input7;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3722300() {
   return input8;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3722640() {
   return input9;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3722980() {
   return input10;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3722cc0() {
   return input11;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3723000() {
   return input12;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3723340() {
   return input13;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3723680() {
   return input14;
}

double NNfunction_ns_chiMinus1_dL::neuron0x37239c0() {
   return input15;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3723d00() {
   return input16;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3724260() {
   return input17;
}

double NNfunction_ns_chiMinus1_dL::neuron0x37245a0() {
   return input18;
}

double NNfunction_ns_chiMinus1_dL::neuron0x37248e0() {
   return input19;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3724c20() {
   return input20;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3724f60() {
   return input21;
}

double NNfunction_ns_chiMinus1_dL::neuron0x37252a0() {
   return input22;
}

double NNfunction_ns_chiMinus1_dL::neuron0x37255e0() {
   return input23;
}

double NNfunction_ns_chiMinus1_dL::input0x3725a50() {
   double input = -1.24004;
   input += synapse0x3725d90();
   input += synapse0x3725dd0();
   input += synapse0x3725e10();
   input += synapse0x3725e50();
   input += synapse0x3725e90();
   input += synapse0x3725ed0();
   input += synapse0x3725f10();
   input += synapse0x3725f50();
   input += synapse0x3725f90();
   input += synapse0x3725fd0();
   input += synapse0x3726010();
   input += synapse0x3726050();
   input += synapse0x3726090();
   input += synapse0x37260d0();
   input += synapse0x3726110();
   input += synapse0x3726150();
   input += synapse0x3725be0();
   input += synapse0x3725c20();
   input += synapse0x34dcb10();
   input += synapse0x34dcb50();
   input += synapse0x3726190();
   input += synapse0x37261d0();
   input += synapse0x3726210();
   input += synapse0x3726250();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3725a50() {
   double input = input0x3725a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x3726290() {
   double input = -0.571121;
   input += synapse0x37265d0();
   input += synapse0x3726610();
   input += synapse0x3726650();
   input += synapse0x3726690();
   input += synapse0x37266d0();
   input += synapse0x3726710();
   input += synapse0x3726750();
   input += synapse0x3726790();
   input += synapse0x37267d0();
   input += synapse0x34dc960();
   input += synapse0x34dc9a0();
   input += synapse0x34dc9e0();
   input += synapse0x34dca20();
   input += synapse0x3726a20();
   input += synapse0x3726a60();
   input += synapse0x3726aa0();
   input += synapse0x3726420();
   input += synapse0x3726460();
   input += synapse0x3726bf0();
   input += synapse0x3726c30();
   input += synapse0x3726c70();
   input += synapse0x3726cb0();
   input += synapse0x3726cf0();
   input += synapse0x3726d30();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3726290() {
   double input = input0x3726290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x3726d70() {
   double input = 0.159552;
   input += synapse0x37270b0();
   input += synapse0x37270f0();
   input += synapse0x3727130();
   input += synapse0x3727170();
   input += synapse0x37271b0();
   input += synapse0x37271f0();
   input += synapse0x3727230();
   input += synapse0x3727270();
   input += synapse0x37272b0();
   input += synapse0x37272f0();
   input += synapse0x3727330();
   input += synapse0x3727370();
   input += synapse0x37273b0();
   input += synapse0x37273f0();
   input += synapse0x3727430();
   input += synapse0x3727470();
   input += synapse0x3726f00();
   input += synapse0x3726f40();
   input += synapse0x34dd200();
   input += synapse0x34eaad0();
   input += synapse0x34eab10();
   input += synapse0x37293a0();
   input += synapse0x37293e0();
   input += synapse0x37206d0();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3726d70() {
   double input = input0x3726d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x3726810() {
   double input = -0.102974;
   input += synapse0x37207a0();
   input += synapse0x34eb350();
   input += synapse0x37269a0();
   input += synapse0x37269e0();
   input += synapse0x37275c0();
   input += synapse0x3727600();
   input += synapse0x3727640();
   input += synapse0x3727680();
   input += synapse0x37276c0();
   input += synapse0x3727700();
   input += synapse0x3727740();
   input += synapse0x3727780();
   input += synapse0x37277c0();
   input += synapse0x3727800();
   input += synapse0x3727840();
   input += synapse0x3727880();
   input += synapse0x3720710();
   input += synapse0x3720750();
   input += synapse0x37279d0();
   input += synapse0x3727a10();
   input += synapse0x3727a50();
   input += synapse0x3727a90();
   input += synapse0x3727ad0();
   input += synapse0x3727b10();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3726810() {
   double input = input0x3726810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x3727b50() {
   double input = 1.42426;
   input += synapse0x3727e90();
   input += synapse0x3727ed0();
   input += synapse0x3727f10();
   input += synapse0x3727f50();
   input += synapse0x3727f90();
   input += synapse0x3727fd0();
   input += synapse0x3728010();
   input += synapse0x3728050();
   input += synapse0x3728090();
   input += synapse0x37280d0();
   input += synapse0x3728110();
   input += synapse0x3728150();
   input += synapse0x3728190();
   input += synapse0x37281d0();
   input += synapse0x3728210();
   input += synapse0x3728250();
   input += synapse0x37283a0();
   input += synapse0x3727ce0();
   input += synapse0x3727d20();
   input += synapse0x37294e0();
   input += synapse0x3729520();
   input += synapse0x3729560();
   input += synapse0x37295a0();
   input += synapse0x37295e0();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3727b50() {
   double input = input0x3727b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x3729620() {
   double input = 0.216027;
   input += synapse0x3729960();
   input += synapse0x37299a0();
   input += synapse0x37299e0();
   input += synapse0x3729a20();
   input += synapse0x3729a60();
   input += synapse0x3729aa0();
   input += synapse0x3729ae0();
   input += synapse0x3729b20();
   input += synapse0x3729b60();
   input += synapse0x34eae20();
   input += synapse0x34eae60();
   input += synapse0x34eaea0();
   input += synapse0x34eaee0();
   input += synapse0x34eaf20();
   input += synapse0x34eaf60();
   input += synapse0x34eafa0();
   input += synapse0x37297b0();
   input += synapse0x37297f0();
   input += synapse0x34eb0f0();
   input += synapse0x34eb130();
   input += synapse0x34eb170();
   input += synapse0x34eb1b0();
   input += synapse0x34eb1f0();
   input += synapse0x372a3b0();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3729620() {
   double input = input0x3729620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x372a3f0() {
   double input = -1.06547;
   input += synapse0x372a730();
   input += synapse0x372a770();
   input += synapse0x372a7b0();
   input += synapse0x372a7f0();
   input += synapse0x372a830();
   input += synapse0x372a870();
   input += synapse0x372a8b0();
   input += synapse0x372a8f0();
   input += synapse0x372a930();
   input += synapse0x372a970();
   input += synapse0x372a9b0();
   input += synapse0x372a9f0();
   input += synapse0x372aa30();
   input += synapse0x372aa70();
   input += synapse0x372aab0();
   input += synapse0x372aaf0();
   input += synapse0x372a580();
   input += synapse0x372a5c0();
   input += synapse0x372ac40();
   input += synapse0x372ac80();
   input += synapse0x372acc0();
   input += synapse0x372ad00();
   input += synapse0x372ad40();
   input += synapse0x372ad80();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x372a3f0() {
   double input = input0x372a3f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x372adc0() {
   double input = -4.04029;
   input += synapse0x372b100();
   input += synapse0x372b140();
   input += synapse0x372b180();
   input += synapse0x372b1c0();
   input += synapse0x372b200();
   input += synapse0x372b240();
   input += synapse0x372b280();
   input += synapse0x372b2c0();
   input += synapse0x372b300();
   input += synapse0x372b340();
   input += synapse0x372b380();
   input += synapse0x372b3c0();
   input += synapse0x372b400();
   input += synapse0x372b440();
   input += synapse0x372b480();
   input += synapse0x372b4c0();
   input += synapse0x372af50();
   input += synapse0x372af90();
   input += synapse0x372b610();
   input += synapse0x372b650();
   input += synapse0x372b690();
   input += synapse0x372b6d0();
   input += synapse0x372b710();
   input += synapse0x372b750();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x372adc0() {
   double input = input0x372adc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x372b790() {
   double input = 1.48759;
   input += synapse0x3724150();
   input += synapse0x3724190();
   input += synapse0x37241d0();
   input += synapse0x3724210();
   input += synapse0x372bce0();
   input += synapse0x372bd20();
   input += synapse0x372bd60();
   input += synapse0x372bda0();
   input += synapse0x372bde0();
   input += synapse0x372be20();
   input += synapse0x372be60();
   input += synapse0x372bea0();
   input += synapse0x372bee0();
   input += synapse0x372bf20();
   input += synapse0x372bf60();
   input += synapse0x372bfa0();
   input += synapse0x372b920();
   input += synapse0x372b960();
   input += synapse0x372c0f0();
   input += synapse0x372c130();
   input += synapse0x372c170();
   input += synapse0x372c1b0();
   input += synapse0x372c1f0();
   input += synapse0x372c230();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x372b790() {
   double input = input0x372b790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x372c270() {
   double input = -7.91153;
   input += synapse0x372c5b0();
   input += synapse0x372c5f0();
   input += synapse0x372c630();
   input += synapse0x372c670();
   input += synapse0x372c6b0();
   input += synapse0x372c6f0();
   input += synapse0x372c730();
   input += synapse0x372c770();
   input += synapse0x372c7b0();
   input += synapse0x372c7f0();
   input += synapse0x372c830();
   input += synapse0x372c870();
   input += synapse0x372c8b0();
   input += synapse0x372c8f0();
   input += synapse0x372c930();
   input += synapse0x372c970();
   input += synapse0x372c400();
   input += synapse0x372c440();
   input += synapse0x372cac0();
   input += synapse0x372cb00();
   input += synapse0x372cb40();
   input += synapse0x372cb80();
   input += synapse0x372cbc0();
   input += synapse0x372cc00();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x372c270() {
   double input = input0x372c270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x372cc40() {
   double input = -3.55102;
   input += synapse0x372cf80();
   input += synapse0x372cfc0();
   input += synapse0x372d000();
   input += synapse0x372d040();
   input += synapse0x372d080();
   input += synapse0x372d0c0();
   input += synapse0x372d100();
   input += synapse0x372d140();
   input += synapse0x372d180();
   input += synapse0x372d1c0();
   input += synapse0x372d200();
   input += synapse0x372d240();
   input += synapse0x372d280();
   input += synapse0x372d2c0();
   input += synapse0x372d300();
   input += synapse0x372d340();
   input += synapse0x372cdd0();
   input += synapse0x372ce10();
   input += synapse0x3729ba0();
   input += synapse0x3729be0();
   input += synapse0x3729c20();
   input += synapse0x3729c60();
   input += synapse0x3729ca0();
   input += synapse0x3729ce0();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x372cc40() {
   double input = input0x372cc40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x3729d20() {
   double input = 0.11564;
   input += synapse0x372a060();
   input += synapse0x372a0a0();
   input += synapse0x372a0e0();
   input += synapse0x372a120();
   input += synapse0x372a160();
   input += synapse0x372a1a0();
   input += synapse0x372a1e0();
   input += synapse0x372a220();
   input += synapse0x372a260();
   input += synapse0x372a2a0();
   input += synapse0x372a2e0();
   input += synapse0x372a320();
   input += synapse0x372a360();
   input += synapse0x372e4a0();
   input += synapse0x372e4e0();
   input += synapse0x372e520();
   input += synapse0x3729eb0();
   input += synapse0x3729ef0();
   input += synapse0x372e670();
   input += synapse0x372e6b0();
   input += synapse0x372e6f0();
   input += synapse0x372e730();
   input += synapse0x372e770();
   input += synapse0x372e7b0();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3729d20() {
   double input = input0x3729d20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x372e7f0() {
   double input = 2.8388;
   input += synapse0x372eb30();
   input += synapse0x372eb70();
   input += synapse0x372ebb0();
   input += synapse0x372ebf0();
   input += synapse0x372ec30();
   input += synapse0x372ec70();
   input += synapse0x372ecb0();
   input += synapse0x372ecf0();
   input += synapse0x372ed30();
   input += synapse0x372ed70();
   input += synapse0x372edb0();
   input += synapse0x372edf0();
   input += synapse0x372ee30();
   input += synapse0x372ee70();
   input += synapse0x372eeb0();
   input += synapse0x372eef0();
   input += synapse0x372e980();
   input += synapse0x372e9c0();
   input += synapse0x372f040();
   input += synapse0x372f080();
   input += synapse0x372f0c0();
   input += synapse0x372f100();
   input += synapse0x372f140();
   input += synapse0x372f180();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x372e7f0() {
   double input = input0x372e7f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x372f1c0() {
   double input = -0.568386;
   input += synapse0x372f500();
   input += synapse0x372f540();
   input += synapse0x372f580();
   input += synapse0x372f5c0();
   input += synapse0x372f600();
   input += synapse0x372f640();
   input += synapse0x372f680();
   input += synapse0x372f6c0();
   input += synapse0x372f700();
   input += synapse0x372f740();
   input += synapse0x372f780();
   input += synapse0x372f7c0();
   input += synapse0x372f800();
   input += synapse0x372f840();
   input += synapse0x372f880();
   input += synapse0x372f8c0();
   input += synapse0x372f350();
   input += synapse0x372f390();
   input += synapse0x372fa10();
   input += synapse0x372fa50();
   input += synapse0x372fa90();
   input += synapse0x372fad0();
   input += synapse0x372fb10();
   input += synapse0x372fb50();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x372f1c0() {
   double input = input0x372f1c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x372fb90() {
   double input = -2.89377;
   input += synapse0x372fed0();
   input += synapse0x372ff10();
   input += synapse0x372ff50();
   input += synapse0x372ff90();
   input += synapse0x372ffd0();
   input += synapse0x3730010();
   input += synapse0x3730050();
   input += synapse0x3730090();
   input += synapse0x37300d0();
   input += synapse0x3730110();
   input += synapse0x3730150();
   input += synapse0x3730190();
   input += synapse0x37301d0();
   input += synapse0x3730210();
   input += synapse0x3730250();
   input += synapse0x3730290();
   input += synapse0x372fd20();
   input += synapse0x372fd60();
   input += synapse0x37303e0();
   input += synapse0x3730420();
   input += synapse0x3730460();
   input += synapse0x37304a0();
   input += synapse0x37304e0();
   input += synapse0x3730520();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x372fb90() {
   double input = input0x372fb90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x3730560() {
   double input = 1.17797;
   input += synapse0x37308a0();
   input += synapse0x3720b20();
   input += synapse0x3720b60();
   input += synapse0x3720e60();
   input += synapse0x3720ea0();
   input += synapse0x37211a0();
   input += synapse0x37211e0();
   input += synapse0x37214e0();
   input += synapse0x3721520();
   input += synapse0x3721820();
   input += synapse0x3721860();
   input += synapse0x3721b60();
   input += synapse0x3721ba0();
   input += synapse0x3721ea0();
   input += synapse0x3721ee0();
   input += synapse0x37221e0();
   input += synapse0x3722220();
   input += synapse0x3722520();
   input += synapse0x3722560();
   input += synapse0x3722860();
   input += synapse0x37228a0();
   input += synapse0x3722ba0();
   input += synapse0x3722be0();
   input += synapse0x3722ee0();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3730560() {
   double input = input0x3730560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x3732370() {
   double input = -2.71455;
   input += synapse0x3722f20();
   input += synapse0x3723be0();
   input += synapse0x3723c20();
   input += synapse0x37306f0();
   input += synapse0x3730730();
   input += synapse0x3723f20();
   input += synapse0x3723f60();
   input += synapse0x3724480();
   input += synapse0x37244c0();
   input += synapse0x37247c0();
   input += synapse0x3724800();
   input += synapse0x3724b00();
   input += synapse0x3724b40();
   input += synapse0x3724e40();
   input += synapse0x3724e80();
   input += synapse0x3725180();
   input += synapse0x37251c0();
   input += synapse0x37254c0();
   input += synapse0x3725500();
   input += synapse0x3725800();
   input += synapse0x3725840();
   input += synapse0x3723220();
   input += synapse0x3723260();
   input += synapse0x3732610();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3732370() {
   double input = input0x3732370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x3732650() {
   double input = 0.342729;
   input += synapse0x3732990();
   input += synapse0x37329d0();
   input += synapse0x3732a10();
   input += synapse0x3732a50();
   input += synapse0x3732a90();
   input += synapse0x3732ad0();
   input += synapse0x3732b10();
   input += synapse0x3732b50();
   input += synapse0x3732b90();
   input += synapse0x3732bd0();
   input += synapse0x3732c10();
   input += synapse0x3732c50();
   input += synapse0x3732c90();
   input += synapse0x3732cd0();
   input += synapse0x3732d10();
   input += synapse0x3732d50();
   input += synapse0x37327e0();
   input += synapse0x3732820();
   input += synapse0x3732ea0();
   input += synapse0x3732ee0();
   input += synapse0x3732f20();
   input += synapse0x3732f60();
   input += synapse0x3732fa0();
   input += synapse0x3732fe0();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3732650() {
   double input = input0x3732650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x3733020() {
   double input = -0.128961;
   input += synapse0x3733360();
   input += synapse0x37333a0();
   input += synapse0x37333e0();
   input += synapse0x3733420();
   input += synapse0x3733460();
   input += synapse0x37334a0();
   input += synapse0x37334e0();
   input += synapse0x3733520();
   input += synapse0x3733560();
   input += synapse0x37335a0();
   input += synapse0x37335e0();
   input += synapse0x3733620();
   input += synapse0x3733660();
   input += synapse0x37336a0();
   input += synapse0x37336e0();
   input += synapse0x3733720();
   input += synapse0x37331b0();
   input += synapse0x37331f0();
   input += synapse0x3733870();
   input += synapse0x37338b0();
   input += synapse0x37338f0();
   input += synapse0x3733930();
   input += synapse0x3733970();
   input += synapse0x37339b0();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3733020() {
   double input = input0x3733020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x37339f0() {
   double input = -1.77475;
   input += synapse0x3733d30();
   input += synapse0x3733d70();
   input += synapse0x3733db0();
   input += synapse0x3733df0();
   input += synapse0x3733e30();
   input += synapse0x3733e70();
   input += synapse0x3733eb0();
   input += synapse0x3733ef0();
   input += synapse0x3733f30();
   input += synapse0x3733f70();
   input += synapse0x3733fb0();
   input += synapse0x3733ff0();
   input += synapse0x3734030();
   input += synapse0x3734070();
   input += synapse0x37340b0();
   input += synapse0x37340f0();
   input += synapse0x3733b80();
   input += synapse0x3733bc0();
   input += synapse0x3734240();
   input += synapse0x3734280();
   input += synapse0x37342c0();
   input += synapse0x3734300();
   input += synapse0x3734340();
   input += synapse0x3734380();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x37339f0() {
   double input = input0x37339f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x37343c0() {
   double input = -2.00492;
   input += synapse0x3734700();
   input += synapse0x3734740();
   input += synapse0x3734780();
   input += synapse0x37347c0();
   input += synapse0x3734800();
   input += synapse0x3734840();
   input += synapse0x3734880();
   input += synapse0x37348c0();
   input += synapse0x3734900();
   input += synapse0x3734940();
   input += synapse0x3734980();
   input += synapse0x37349c0();
   input += synapse0x3734a00();
   input += synapse0x3734a40();
   input += synapse0x3734a80();
   input += synapse0x3734ac0();
   input += synapse0x3734550();
   input += synapse0x3734590();
   input += synapse0x3734c10();
   input += synapse0x3734c50();
   input += synapse0x3734c90();
   input += synapse0x3734cd0();
   input += synapse0x3734d10();
   input += synapse0x3734d50();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x37343c0() {
   double input = input0x37343c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x3734d90() {
   double input = -2.31811;
   input += synapse0x37350d0();
   input += synapse0x3735110();
   input += synapse0x3735150();
   input += synapse0x3735190();
   input += synapse0x37351d0();
   input += synapse0x3735210();
   input += synapse0x3735250();
   input += synapse0x3735290();
   input += synapse0x37352d0();
   input += synapse0x372d490();
   input += synapse0x372d4d0();
   input += synapse0x372d510();
   input += synapse0x372d550();
   input += synapse0x372d590();
   input += synapse0x372d5d0();
   input += synapse0x372d610();
   input += synapse0x3734f20();
   input += synapse0x3734f60();
   input += synapse0x372d760();
   input += synapse0x372d7a0();
   input += synapse0x372d7e0();
   input += synapse0x372d820();
   input += synapse0x372d860();
   input += synapse0x372d8a0();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3734d90() {
   double input = input0x3734d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x372d8e0() {
   double input = 0.00610445;
   input += synapse0x372dc20();
   input += synapse0x372dc60();
   input += synapse0x372dca0();
   input += synapse0x372dce0();
   input += synapse0x372dd20();
   input += synapse0x372dd60();
   input += synapse0x372dda0();
   input += synapse0x372dde0();
   input += synapse0x372de20();
   input += synapse0x372de60();
   input += synapse0x372dea0();
   input += synapse0x372dee0();
   input += synapse0x372df20();
   input += synapse0x372df60();
   input += synapse0x372dfa0();
   input += synapse0x372dfe0();
   input += synapse0x372da70();
   input += synapse0x372dab0();
   input += synapse0x372e130();
   input += synapse0x372e170();
   input += synapse0x372e1b0();
   input += synapse0x372e1f0();
   input += synapse0x372e230();
   input += synapse0x372e270();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x372d8e0() {
   double input = input0x372d8e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x372e2b0() {
   double input = 0.10239;
   input += synapse0x372e440();
   input += synapse0x37374d0();
   input += synapse0x3737510();
   input += synapse0x3737550();
   input += synapse0x3737590();
   input += synapse0x37375d0();
   input += synapse0x3737610();
   input += synapse0x3737650();
   input += synapse0x3737690();
   input += synapse0x37376d0();
   input += synapse0x3737710();
   input += synapse0x3737750();
   input += synapse0x3737790();
   input += synapse0x37377d0();
   input += synapse0x3737810();
   input += synapse0x3737850();
   input += synapse0x3737320();
   input += synapse0x3737360();
   input += synapse0x37379a0();
   input += synapse0x37379e0();
   input += synapse0x3737a20();
   input += synapse0x3737a60();
   input += synapse0x3737aa0();
   input += synapse0x3737ae0();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x372e2b0() {
   double input = input0x372e2b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x3737b20() {
   double input = 1.06569;
   input += synapse0x3737e60();
   input += synapse0x3737ea0();
   input += synapse0x3737ee0();
   input += synapse0x3737f20();
   input += synapse0x3737f60();
   input += synapse0x3737fa0();
   input += synapse0x3737fe0();
   input += synapse0x3738020();
   input += synapse0x3738060();
   input += synapse0x37380a0();
   input += synapse0x37380e0();
   input += synapse0x3738120();
   input += synapse0x3738160();
   input += synapse0x37381a0();
   input += synapse0x37381e0();
   input += synapse0x3738220();
   input += synapse0x3737cb0();
   input += synapse0x3737cf0();
   input += synapse0x3738370();
   input += synapse0x37383b0();
   input += synapse0x37383f0();
   input += synapse0x3738430();
   input += synapse0x3738470();
   input += synapse0x37384b0();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3737b20() {
   double input = input0x3737b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x37384f0() {
   double input = 2.09897;
   input += synapse0x3738830();
   input += synapse0x3738870();
   input += synapse0x37388b0();
   input += synapse0x37388f0();
   input += synapse0x3738930();
   input += synapse0x3738970();
   input += synapse0x37389b0();
   input += synapse0x37389f0();
   input += synapse0x3738a30();
   input += synapse0x3738a70();
   input += synapse0x3738ab0();
   input += synapse0x3738af0();
   input += synapse0x3738b30();
   input += synapse0x3738b70();
   input += synapse0x3738bb0();
   input += synapse0x3738bf0();
   input += synapse0x3738680();
   input += synapse0x37386c0();
   input += synapse0x3738d40();
   input += synapse0x3738d80();
   input += synapse0x3738dc0();
   input += synapse0x3738e00();
   input += synapse0x3738e40();
   input += synapse0x3738e80();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x37384f0() {
   double input = input0x37384f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x3738ec0() {
   double input = 1.46791;
   input += synapse0x3739200();
   input += synapse0x3739240();
   input += synapse0x3739280();
   input += synapse0x37392c0();
   input += synapse0x3739300();
   input += synapse0x3739340();
   input += synapse0x3739380();
   input += synapse0x37393c0();
   input += synapse0x3739400();
   input += synapse0x3739440();
   input += synapse0x3739480();
   input += synapse0x37394c0();
   input += synapse0x3739500();
   input += synapse0x3739540();
   input += synapse0x3739580();
   input += synapse0x37395c0();
   input += synapse0x3739050();
   input += synapse0x3739090();
   input += synapse0x3739710();
   input += synapse0x3739750();
   input += synapse0x3739790();
   input += synapse0x37397d0();
   input += synapse0x3739810();
   input += synapse0x3739850();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3738ec0() {
   double input = input0x3738ec0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x3739890() {
   double input = 1.11047;
   input += synapse0x3739bd0();
   input += synapse0x3739c10();
   input += synapse0x3739c50();
   input += synapse0x3739c90();
   input += synapse0x3739cd0();
   input += synapse0x3739d10();
   input += synapse0x3739d50();
   input += synapse0x3739d90();
   input += synapse0x3739dd0();
   input += synapse0x3739e10();
   input += synapse0x3739e50();
   input += synapse0x3739e90();
   input += synapse0x3739ed0();
   input += synapse0x3739f10();
   input += synapse0x3739f50();
   input += synapse0x3739f90();
   input += synapse0x3739a20();
   input += synapse0x3739a60();
   input += synapse0x373a0e0();
   input += synapse0x373a120();
   input += synapse0x373a160();
   input += synapse0x373a1a0();
   input += synapse0x373a1e0();
   input += synapse0x373a220();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3739890() {
   double input = input0x3739890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x373a260() {
   double input = 0.577473;
   input += synapse0x373a5a0();
   input += synapse0x373a5e0();
   input += synapse0x373a620();
   input += synapse0x373a660();
   input += synapse0x373a6a0();
   input += synapse0x373a6e0();
   input += synapse0x373a720();
   input += synapse0x373a760();
   input += synapse0x373a7a0();
   input += synapse0x373a7e0();
   input += synapse0x373a820();
   input += synapse0x373a860();
   input += synapse0x373a8a0();
   input += synapse0x373a8e0();
   input += synapse0x373a920();
   input += synapse0x373a960();
   input += synapse0x373a3f0();
   input += synapse0x373a430();
   input += synapse0x373aab0();
   input += synapse0x373aaf0();
   input += synapse0x373ab30();
   input += synapse0x373ab70();
   input += synapse0x373abb0();
   input += synapse0x373abf0();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x373a260() {
   double input = input0x373a260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x373ac30() {
   double input = -0.0661042;
   input += synapse0x373af70();
   input += synapse0x373afb0();
   input += synapse0x373aff0();
   input += synapse0x373b030();
   input += synapse0x373b070();
   input += synapse0x373b0b0();
   input += synapse0x373b0f0();
   input += synapse0x373b130();
   input += synapse0x373b170();
   input += synapse0x373b1b0();
   input += synapse0x373b1f0();
   input += synapse0x373b230();
   input += synapse0x373b270();
   input += synapse0x373b2b0();
   input += synapse0x373b2f0();
   input += synapse0x373b330();
   input += synapse0x373adc0();
   input += synapse0x373ae00();
   input += synapse0x373b480();
   input += synapse0x373b4c0();
   input += synapse0x373b500();
   input += synapse0x373b540();
   input += synapse0x373b580();
   input += synapse0x373b5c0();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x373ac30() {
   double input = input0x373ac30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x373b600() {
   double input = 2.43598;
   input += synapse0x373b940();
   input += synapse0x373b980();
   input += synapse0x373b9c0();
   input += synapse0x373ba00();
   input += synapse0x373ba40();
   input += synapse0x373ba80();
   input += synapse0x373bac0();
   input += synapse0x373bb00();
   input += synapse0x373bb40();
   input += synapse0x373bb80();
   input += synapse0x373bbc0();
   input += synapse0x373bc00();
   input += synapse0x373bc40();
   input += synapse0x373bc80();
   input += synapse0x373bcc0();
   input += synapse0x373bd00();
   input += synapse0x373b790();
   input += synapse0x373b7d0();
   input += synapse0x373be50();
   input += synapse0x373be90();
   input += synapse0x373bed0();
   input += synapse0x373bf10();
   input += synapse0x373bf50();
   input += synapse0x373bf90();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x373b600() {
   double input = input0x373b600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x373bfd0() {
   double input = 0.254865;
   input += synapse0x373c310();
   input += synapse0x37308e0();
   input += synapse0x3730920();
   input += synapse0x3730960();
   input += synapse0x3730bb0();
   input += synapse0x3730bf0();
   input += synapse0x3730c30();
   input += synapse0x3730e80();
   input += synapse0x3730ec0();
   input += synapse0x3731110();
   input += synapse0x3731150();
   input += synapse0x3731190();
   input += synapse0x37313e0();
   input += synapse0x3731420();
   input += synapse0x3731670();
   input += synapse0x37316b0();
   input += synapse0x373c160();
   input += synapse0x373c1a0();
   input += synapse0x3731800();
   input += synapse0x3731d10();
   input += synapse0x3731d50();
   input += synapse0x3731d90();
   input += synapse0x3731fe0();
   input += synapse0x3732020();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x373bfd0() {
   double input = input0x373bfd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x3732060() {
   double input = -0.614117;
   input += synapse0x37318d0();
   input += synapse0x3731910();
   input += synapse0x3731950();
   input += synapse0x3731990();
   input += synapse0x3732310();
   input += synapse0x373e660();
   input += synapse0x373e6a0();
   input += synapse0x373e6e0();
   input += synapse0x373e720();
   input += synapse0x373e760();
   input += synapse0x373e7a0();
   input += synapse0x373e7e0();
   input += synapse0x373e820();
   input += synapse0x373e860();
   input += synapse0x373e8a0();
   input += synapse0x373e8e0();
   input += synapse0x37321f0();
   input += synapse0x3732230();
   input += synapse0x373ea30();
   input += synapse0x373ea70();
   input += synapse0x373eab0();
   input += synapse0x373eaf0();
   input += synapse0x373eb30();
   input += synapse0x373eb70();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3732060() {
   double input = input0x3732060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x373ebb0() {
   double input = 0.231463;
   input += synapse0x373eef0();
   input += synapse0x373ef30();
   input += synapse0x373ef70();
   input += synapse0x373efb0();
   input += synapse0x373eff0();
   input += synapse0x373f030();
   input += synapse0x373f070();
   input += synapse0x373f0b0();
   input += synapse0x373f0f0();
   input += synapse0x373f130();
   input += synapse0x373f170();
   input += synapse0x373f1b0();
   input += synapse0x373f1f0();
   input += synapse0x373f230();
   input += synapse0x373f270();
   input += synapse0x373f2b0();
   input += synapse0x373ed40();
   input += synapse0x373ed80();
   input += synapse0x373f400();
   input += synapse0x373f440();
   input += synapse0x373f480();
   input += synapse0x373f4c0();
   input += synapse0x373f500();
   input += synapse0x373f540();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x373ebb0() {
   double input = input0x373ebb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x373f580() {
   double input = 1.36344;
   input += synapse0x373f8c0();
   input += synapse0x373f900();
   input += synapse0x373f940();
   input += synapse0x373f980();
   input += synapse0x373f9c0();
   input += synapse0x373fa00();
   input += synapse0x373fa40();
   input += synapse0x373fa80();
   input += synapse0x373fac0();
   input += synapse0x373fb00();
   input += synapse0x373fb40();
   input += synapse0x373fb80();
   input += synapse0x373fbc0();
   input += synapse0x373fc00();
   input += synapse0x373fc40();
   input += synapse0x373fc80();
   input += synapse0x373f710();
   input += synapse0x373f750();
   input += synapse0x373fdd0();
   input += synapse0x373fe10();
   input += synapse0x373fe50();
   input += synapse0x373fe90();
   input += synapse0x373fed0();
   input += synapse0x373ff10();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x373f580() {
   double input = input0x373f580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x373ff50() {
   double input = 0.875181;
   input += synapse0x3740290();
   input += synapse0x37402d0();
   input += synapse0x3740310();
   input += synapse0x3740350();
   input += synapse0x3740390();
   input += synapse0x37403d0();
   input += synapse0x3740410();
   input += synapse0x3740450();
   input += synapse0x3740490();
   input += synapse0x37404d0();
   input += synapse0x3740510();
   input += synapse0x3740550();
   input += synapse0x3740590();
   input += synapse0x37405d0();
   input += synapse0x3740610();
   input += synapse0x3740650();
   input += synapse0x37400e0();
   input += synapse0x3740120();
   input += synapse0x37407a0();
   input += synapse0x37407e0();
   input += synapse0x3740820();
   input += synapse0x3740860();
   input += synapse0x37408a0();
   input += synapse0x37408e0();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x373ff50() {
   double input = input0x373ff50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x3740920() {
   double input = 0.262838;
   input += synapse0x3740c60();
   input += synapse0x3740ca0();
   input += synapse0x3740ce0();
   input += synapse0x3740d20();
   input += synapse0x3740d60();
   input += synapse0x3740da0();
   input += synapse0x3740de0();
   input += synapse0x3740e20();
   input += synapse0x3740e60();
   input += synapse0x3740ea0();
   input += synapse0x3740ee0();
   input += synapse0x3740f20();
   input += synapse0x3740f60();
   input += synapse0x3740fa0();
   input += synapse0x3740fe0();
   input += synapse0x3741020();
   input += synapse0x3740ab0();
   input += synapse0x3740af0();
   input += synapse0x3741170();
   input += synapse0x37411b0();
   input += synapse0x37411f0();
   input += synapse0x3741230();
   input += synapse0x3741270();
   input += synapse0x37412b0();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3740920() {
   double input = input0x3740920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x37412f0() {
   double input = 0.553073;
   input += synapse0x3741630();
   input += synapse0x3741670();
   input += synapse0x37416b0();
   input += synapse0x37416f0();
   input += synapse0x3741730();
   input += synapse0x3741770();
   input += synapse0x37417b0();
   input += synapse0x37417f0();
   input += synapse0x3741830();
   input += synapse0x3741870();
   input += synapse0x37418b0();
   input += synapse0x37418f0();
   input += synapse0x3741930();
   input += synapse0x3741970();
   input += synapse0x37419b0();
   input += synapse0x37419f0();
   input += synapse0x3741480();
   input += synapse0x37414c0();
   input += synapse0x3741b40();
   input += synapse0x3741b80();
   input += synapse0x3741bc0();
   input += synapse0x3741c00();
   input += synapse0x3741c40();
   input += synapse0x3741c80();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x37412f0() {
   double input = input0x37412f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x3741cc0() {
   double input = -0.88874;
   input += synapse0x3742000();
   input += synapse0x3742040();
   input += synapse0x3742080();
   input += synapse0x37420c0();
   input += synapse0x3742100();
   input += synapse0x3742140();
   input += synapse0x3742180();
   input += synapse0x37421c0();
   input += synapse0x3742200();
   input += synapse0x3742240();
   input += synapse0x3742280();
   input += synapse0x37422c0();
   input += synapse0x3742300();
   input += synapse0x3742340();
   input += synapse0x3742380();
   input += synapse0x37423c0();
   input += synapse0x3741e50();
   input += synapse0x3741e90();
   input += synapse0x3742510();
   input += synapse0x3742550();
   input += synapse0x3742590();
   input += synapse0x37425d0();
   input += synapse0x3742610();
   input += synapse0x3742650();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3741cc0() {
   double input = input0x3741cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x3742690() {
   double input = 0.917089;
   input += synapse0x37429d0();
   input += synapse0x3742a10();
   input += synapse0x3742a50();
   input += synapse0x3742a90();
   input += synapse0x3742ad0();
   input += synapse0x3742b10();
   input += synapse0x3742b50();
   input += synapse0x3742b90();
   input += synapse0x3742bd0();
   input += synapse0x3742c10();
   input += synapse0x3742c50();
   input += synapse0x3742c90();
   input += synapse0x3742cd0();
   input += synapse0x3742d10();
   input += synapse0x3742d50();
   input += synapse0x3742d90();
   input += synapse0x3742820();
   input += synapse0x3742860();
   input += synapse0x3742ee0();
   input += synapse0x3742f20();
   input += synapse0x3742f60();
   input += synapse0x3742fa0();
   input += synapse0x3742fe0();
   input += synapse0x3743020();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3742690() {
   double input = input0x3742690();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x3743060() {
   double input = 1.67394;
   input += synapse0x372bad0();
   input += synapse0x372bb10();
   input += synapse0x372bb50();
   input += synapse0x372bb90();
   input += synapse0x372bbd0();
   input += synapse0x372bc10();
   input += synapse0x372bc50();
   input += synapse0x372bc90();
   input += synapse0x37437b0();
   input += synapse0x37437f0();
   input += synapse0x3743830();
   input += synapse0x3743870();
   input += synapse0x37438b0();
   input += synapse0x37438f0();
   input += synapse0x3743930();
   input += synapse0x3743970();
   input += synapse0x37431f0();
   input += synapse0x3743230();
   input += synapse0x3743ac0();
   input += synapse0x3743b00();
   input += synapse0x3743b40();
   input += synapse0x3743b80();
   input += synapse0x3743bc0();
   input += synapse0x3743c00();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3743060() {
   double input = input0x3743060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x3743c40() {
   double input = -0.344733;
   input += synapse0x3743f80();
   input += synapse0x3743fc0();
   input += synapse0x3744000();
   input += synapse0x3744040();
   input += synapse0x3744080();
   input += synapse0x37440c0();
   input += synapse0x3744100();
   input += synapse0x3744140();
   input += synapse0x3744180();
   input += synapse0x37441c0();
   input += synapse0x3744200();
   input += synapse0x3744240();
   input += synapse0x3744280();
   input += synapse0x37442c0();
   input += synapse0x3744300();
   input += synapse0x3744340();
   input += synapse0x3743dd0();
   input += synapse0x3743e10();
   input += synapse0x3744490();
   input += synapse0x37444d0();
   input += synapse0x3744510();
   input += synapse0x3744550();
   input += synapse0x3744590();
   input += synapse0x37445d0();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3743c40() {
   double input = input0x3743c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x3744610() {
   double input = -0.529516;
   input += synapse0x3744950();
   input += synapse0x3744990();
   input += synapse0x37449d0();
   input += synapse0x3744a10();
   input += synapse0x3744a50();
   input += synapse0x3744a90();
   input += synapse0x3744ad0();
   input += synapse0x3744b10();
   input += synapse0x3744b50();
   input += synapse0x3744b90();
   input += synapse0x3744bd0();
   input += synapse0x3744c10();
   input += synapse0x3744c50();
   input += synapse0x3744c90();
   input += synapse0x3744cd0();
   input += synapse0x3744d10();
   input += synapse0x37447a0();
   input += synapse0x37447e0();
   input += synapse0x3735310();
   input += synapse0x3735350();
   input += synapse0x3735390();
   input += synapse0x37353d0();
   input += synapse0x3735410();
   input += synapse0x3735450();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3744610() {
   double input = input0x3744610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x3735490() {
   double input = -1.21841;
   input += synapse0x37357d0();
   input += synapse0x3735810();
   input += synapse0x3735850();
   input += synapse0x3735890();
   input += synapse0x37358d0();
   input += synapse0x3735910();
   input += synapse0x3735950();
   input += synapse0x3735990();
   input += synapse0x37359d0();
   input += synapse0x3735a10();
   input += synapse0x3735a50();
   input += synapse0x3735a90();
   input += synapse0x3735ad0();
   input += synapse0x3735b10();
   input += synapse0x3735b50();
   input += synapse0x3735b90();
   input += synapse0x3735620();
   input += synapse0x3735660();
   input += synapse0x3735ce0();
   input += synapse0x3735d20();
   input += synapse0x3735d60();
   input += synapse0x3735da0();
   input += synapse0x3735de0();
   input += synapse0x3735e20();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3735490() {
   double input = input0x3735490();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x3735e60() {
   double input = 0.112036;
   input += synapse0x37361a0();
   input += synapse0x37361e0();
   input += synapse0x3736220();
   input += synapse0x3736260();
   input += synapse0x37362a0();
   input += synapse0x37362e0();
   input += synapse0x3736320();
   input += synapse0x3736360();
   input += synapse0x37363a0();
   input += synapse0x37363e0();
   input += synapse0x3736420();
   input += synapse0x3736460();
   input += synapse0x37364a0();
   input += synapse0x37364e0();
   input += synapse0x3736520();
   input += synapse0x3736560();
   input += synapse0x3735ff0();
   input += synapse0x3736030();
   input += synapse0x37366b0();
   input += synapse0x37366f0();
   input += synapse0x3736730();
   input += synapse0x3736770();
   input += synapse0x37367b0();
   input += synapse0x37367f0();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3735e60() {
   double input = input0x3735e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x3736830() {
   double input = -0.0215588;
   input += synapse0x3736b70();
   input += synapse0x3736bb0();
   input += synapse0x3736bf0();
   input += synapse0x3736c30();
   input += synapse0x3736c70();
   input += synapse0x3736cb0();
   input += synapse0x3736cf0();
   input += synapse0x3736d30();
   input += synapse0x3736d70();
   input += synapse0x3736db0();
   input += synapse0x3736df0();
   input += synapse0x3736e30();
   input += synapse0x3736e70();
   input += synapse0x3736eb0();
   input += synapse0x3736ef0();
   input += synapse0x3736f30();
   input += synapse0x37369c0();
   input += synapse0x3736a00();
   input += synapse0x3737080();
   input += synapse0x37370c0();
   input += synapse0x3737100();
   input += synapse0x3737140();
   input += synapse0x3737180();
   input += synapse0x37371c0();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3736830() {
   double input = input0x3736830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x3748e70() {
   double input = 0.680529;
   input += synapse0x3749090();
   input += synapse0x37490d0();
   input += synapse0x3749110();
   input += synapse0x3749150();
   input += synapse0x3749190();
   input += synapse0x37491d0();
   input += synapse0x3749210();
   input += synapse0x3749250();
   input += synapse0x3749290();
   input += synapse0x37492d0();
   input += synapse0x3749310();
   input += synapse0x3749350();
   input += synapse0x3749390();
   input += synapse0x37493d0();
   input += synapse0x3749410();
   input += synapse0x3749450();
   input += synapse0x3737200();
   input += synapse0x3737240();
   input += synapse0x37495a0();
   input += synapse0x37495e0();
   input += synapse0x3749620();
   input += synapse0x3749660();
   input += synapse0x37496a0();
   input += synapse0x37496e0();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3748e70() {
   double input = input0x3748e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x3749720() {
   double input = 6.49288;
   input += synapse0x3749a60();
   input += synapse0x3749aa0();
   input += synapse0x3749ae0();
   input += synapse0x3749b20();
   input += synapse0x3749b60();
   input += synapse0x3749ba0();
   input += synapse0x3749be0();
   input += synapse0x3749c20();
   input += synapse0x3749c60();
   input += synapse0x3749ca0();
   input += synapse0x3749ce0();
   input += synapse0x3749d20();
   input += synapse0x3749d60();
   input += synapse0x3749da0();
   input += synapse0x3749de0();
   input += synapse0x3749e20();
   input += synapse0x37498b0();
   input += synapse0x37498f0();
   input += synapse0x3749f70();
   input += synapse0x3749fb0();
   input += synapse0x3749ff0();
   input += synapse0x374a030();
   input += synapse0x374a070();
   input += synapse0x374a0b0();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3749720() {
   double input = input0x3749720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x374a0f0() {
   double input = -0.324864;
   input += synapse0x374a430();
   input += synapse0x374a470();
   input += synapse0x374a4b0();
   input += synapse0x374a4f0();
   input += synapse0x374a530();
   input += synapse0x374a570();
   input += synapse0x374a5b0();
   input += synapse0x374a5f0();
   input += synapse0x374a630();
   input += synapse0x374a670();
   input += synapse0x374a6b0();
   input += synapse0x374a6f0();
   input += synapse0x374a730();
   input += synapse0x374a770();
   input += synapse0x374a7b0();
   input += synapse0x374a7f0();
   input += synapse0x374a280();
   input += synapse0x374a2c0();
   input += synapse0x374a940();
   input += synapse0x374a980();
   input += synapse0x374a9c0();
   input += synapse0x374aa00();
   input += synapse0x374aa40();
   input += synapse0x374aa80();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x374a0f0() {
   double input = input0x374a0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x374aac0() {
   double input = 0.843889;
   input += synapse0x374ae00();
   input += synapse0x374ae40();
   input += synapse0x374ae80();
   input += synapse0x374aec0();
   input += synapse0x374af00();
   input += synapse0x374af40();
   input += synapse0x374af80();
   input += synapse0x374afc0();
   input += synapse0x374b000();
   input += synapse0x374b040();
   input += synapse0x374b080();
   input += synapse0x374b0c0();
   input += synapse0x374b100();
   input += synapse0x374b140();
   input += synapse0x374b180();
   input += synapse0x374b1c0();
   input += synapse0x374ac50();
   input += synapse0x374ac90();
   input += synapse0x374b310();
   input += synapse0x374b350();
   input += synapse0x374b390();
   input += synapse0x374b3d0();
   input += synapse0x374b410();
   input += synapse0x374b450();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x374aac0() {
   double input = input0x374aac0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x3751cc0() {
   double input = 0.235483;
   input += synapse0x34eb2c0();
   input += synapse0x34eb300();
   input += synapse0x3727e00();
   input += synapse0x3727e40();
   input += synapse0x37298d0();
   input += synapse0x3729910();
   input += synapse0x372a6a0();
   input += synapse0x372a6e0();
   input += synapse0x372b070();
   input += synapse0x372b0b0();
   input += synapse0x372ba40();
   input += synapse0x372ba80();
   input += synapse0x372c520();
   input += synapse0x372c560();
   input += synapse0x372cef0();
   input += synapse0x372cf30();
   input += synapse0x3729fd0();
   input += synapse0x372a010();
   input += synapse0x372eaa0();
   input += synapse0x372eae0();
   input += synapse0x372f470();
   input += synapse0x372f4b0();
   input += synapse0x372fe40();
   input += synapse0x372fe80();
   input += synapse0x3730810();
   input += synapse0x3730850();
   input += synapse0x37238a0();
   input += synapse0x37238e0();
   input += synapse0x3732900();
   input += synapse0x3732940();
   input += synapse0x37332d0();
   input += synapse0x3733310();
   input += synapse0x3733ca0();
   input += synapse0x3733ce0();
   input += synapse0x3734670();
   input += synapse0x37346b0();
   input += synapse0x3735040();
   input += synapse0x3735080();
   input += synapse0x372db90();
   input += synapse0x372dbd0();
   input += synapse0x3737440();
   input += synapse0x3737480();
   input += synapse0x3737dd0();
   input += synapse0x3737e10();
   input += synapse0x37387a0();
   input += synapse0x37387e0();
   input += synapse0x3739170();
   input += synapse0x37391b0();
   input += synapse0x3739b40();
   input += synapse0x3739b80();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3751cc0() {
   double input = input0x3751cc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x3752060() {
   double input = 2.08539;
   input += synapse0x373c280();
   input += synapse0x373c2c0();
   input += synapse0x3731840();
   input += synapse0x3731880();
   input += synapse0x373ee60();
   input += synapse0x373eea0();
   input += synapse0x373f830();
   input += synapse0x373f870();
   input += synapse0x3740200();
   input += synapse0x3740240();
   input += synapse0x3740bd0();
   input += synapse0x3740c10();
   input += synapse0x37415a0();
   input += synapse0x37415e0();
   input += synapse0x3741f70();
   input += synapse0x3741fb0();
   input += synapse0x3742940();
   input += synapse0x3742980();
   input += synapse0x3743310();
   input += synapse0x3743350();
   input += synapse0x3743ef0();
   input += synapse0x3743f30();
   input += synapse0x37448c0();
   input += synapse0x3744900();
   input += synapse0x3735740();
   input += synapse0x3735780();
   input += synapse0x3736110();
   input += synapse0x3736150();
   input += synapse0x3736ae0();
   input += synapse0x3736b20();
   input += synapse0x3749000();
   input += synapse0x3749040();
   input += synapse0x37499d0();
   input += synapse0x3749a10();
   input += synapse0x374a3a0();
   input += synapse0x374a3e0();
   input += synapse0x374ad70();
   input += synapse0x374adb0();
   input += synapse0x3725d00();
   input += synapse0x3725d40();
   input += synapse0x373a510();
   input += synapse0x373a550();
   input += synapse0x374b490();
   input += synapse0x374b4d0();
   input += synapse0x374b510();
   input += synapse0x374b550();
   input += synapse0x3752400();
   input += synapse0x3752440();
   input += synapse0x3752480();
   input += synapse0x37524c0();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3752060() {
   double input = input0x3752060();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x3752500() {
   double input = -0.319608;
   input += synapse0x3752840();
   input += synapse0x3752880();
   input += synapse0x37528c0();
   input += synapse0x3752900();
   input += synapse0x3752940();
   input += synapse0x3752980();
   input += synapse0x37529c0();
   input += synapse0x3752a00();
   input += synapse0x3752a40();
   input += synapse0x3752a80();
   input += synapse0x3752ac0();
   input += synapse0x3752b00();
   input += synapse0x3752b40();
   input += synapse0x3752b80();
   input += synapse0x3752bc0();
   input += synapse0x3752c00();
   input += synapse0x3752690();
   input += synapse0x37526d0();
   input += synapse0x3752d50();
   input += synapse0x3752d90();
   input += synapse0x3752dd0();
   input += synapse0x3752e10();
   input += synapse0x3752e50();
   input += synapse0x3752e90();
   input += synapse0x3752ed0();
   input += synapse0x3752f10();
   input += synapse0x3752f50();
   input += synapse0x3752f90();
   input += synapse0x3752fd0();
   input += synapse0x3753010();
   input += synapse0x3753050();
   input += synapse0x3753090();
   input += synapse0x3752c40();
   input += synapse0x3752c80();
   input += synapse0x3752cc0();
   input += synapse0x3752d00();
   input += synapse0x37532e0();
   input += synapse0x3753320();
   input += synapse0x3753360();
   input += synapse0x37533a0();
   input += synapse0x37533e0();
   input += synapse0x3753420();
   input += synapse0x3753460();
   input += synapse0x37534a0();
   input += synapse0x37534e0();
   input += synapse0x3753520();
   input += synapse0x3753560();
   input += synapse0x37535a0();
   input += synapse0x37535e0();
   input += synapse0x3753620();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3752500() {
   double input = input0x3752500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x3753660() {
   double input = -0.0440366;
   input += synapse0x37539a0();
   input += synapse0x37539e0();
   input += synapse0x3753a20();
   input += synapse0x3753a60();
   input += synapse0x3753aa0();
   input += synapse0x3753ae0();
   input += synapse0x3753b20();
   input += synapse0x3753b60();
   input += synapse0x3753ba0();
   input += synapse0x3753be0();
   input += synapse0x3753c20();
   input += synapse0x3753c60();
   input += synapse0x3753ca0();
   input += synapse0x3753ce0();
   input += synapse0x3753d20();
   input += synapse0x3753d60();
   input += synapse0x37537f0();
   input += synapse0x3753830();
   input += synapse0x3753eb0();
   input += synapse0x3753ef0();
   input += synapse0x3753f30();
   input += synapse0x3753f70();
   input += synapse0x3753fb0();
   input += synapse0x3753ff0();
   input += synapse0x3754030();
   input += synapse0x3754070();
   input += synapse0x37540b0();
   input += synapse0x37540f0();
   input += synapse0x3754130();
   input += synapse0x3754170();
   input += synapse0x37541b0();
   input += synapse0x37541f0();
   input += synapse0x3753da0();
   input += synapse0x3753de0();
   input += synapse0x3753e20();
   input += synapse0x3753e60();
   input += synapse0x3754440();
   input += synapse0x3754480();
   input += synapse0x37544c0();
   input += synapse0x3754500();
   input += synapse0x3754540();
   input += synapse0x3754580();
   input += synapse0x37545c0();
   input += synapse0x3754600();
   input += synapse0x3754640();
   input += synapse0x3754680();
   input += synapse0x37546c0();
   input += synapse0x3754700();
   input += synapse0x3754740();
   input += synapse0x3754780();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3753660() {
   double input = input0x3753660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x37547c0() {
   double input = -0.0449332;
   input += synapse0x3754b00();
   input += synapse0x3754b40();
   input += synapse0x3754b80();
   input += synapse0x3754bc0();
   input += synapse0x3754c00();
   input += synapse0x3754c40();
   input += synapse0x3754c80();
   input += synapse0x3754cc0();
   input += synapse0x3754d00();
   input += synapse0x3754d40();
   input += synapse0x3754d80();
   input += synapse0x3754dc0();
   input += synapse0x3754e00();
   input += synapse0x3754e40();
   input += synapse0x3754e80();
   input += synapse0x3754ec0();
   input += synapse0x3754950();
   input += synapse0x3754990();
   input += synapse0x3755010();
   input += synapse0x3755050();
   input += synapse0x3755090();
   input += synapse0x37550d0();
   input += synapse0x3755110();
   input += synapse0x3755150();
   input += synapse0x3755190();
   input += synapse0x37551d0();
   input += synapse0x3755210();
   input += synapse0x3755250();
   input += synapse0x3755290();
   input += synapse0x37552d0();
   input += synapse0x3755310();
   input += synapse0x3755350();
   input += synapse0x3754f00();
   input += synapse0x3754f40();
   input += synapse0x3754f80();
   input += synapse0x3754fc0();
   input += synapse0x37555a0();
   input += synapse0x37555e0();
   input += synapse0x3755620();
   input += synapse0x3755660();
   input += synapse0x37556a0();
   input += synapse0x37556e0();
   input += synapse0x3755720();
   input += synapse0x3755760();
   input += synapse0x37557a0();
   input += synapse0x37557e0();
   input += synapse0x3755820();
   input += synapse0x3755860();
   input += synapse0x37558a0();
   input += synapse0x37558e0();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x37547c0() {
   double input = input0x37547c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::input0x3755920() {
   double input = 8.88464;
   input += synapse0x3755b40();
   input += synapse0x3755b80();
   input += synapse0x3755bc0();
   input += synapse0x3755c00();
   input += synapse0x3755c40();
   return input;
}

double NNfunction_ns_chiMinus1_dL::neuron0x3755920() {
   double input = input0x3755920();
   return (input * 1)+0;
}

double NNfunction_ns_chiMinus1_dL::synapse0x3725d90() {
   return (neuron0x3720990()*0.0510668);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3725dd0() {
   return (neuron0x3720c40()*0.232683);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3725e10() {
   return (neuron0x3720f80()*0.150819);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3725e50() {
   return (neuron0x37212c0()*0.168946);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3725e90() {
   return (neuron0x3721600()*0.962539);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3725ed0() {
   return (neuron0x3721940()*0.000332119);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3725f10() {
   return (neuron0x3721c80()*-0.111545);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3725f50() {
   return (neuron0x3721fc0()*0.148967);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3725f90() {
   return (neuron0x3722300()*0.0670055);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3725fd0() {
   return (neuron0x3722640()*-0.0879813);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3726010() {
   return (neuron0x3722980()*-0.0370342);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3726050() {
   return (neuron0x3722cc0()*0.398602);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3726090() {
   return (neuron0x3723000()*0.0665617);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37260d0() {
   return (neuron0x3723340()*-0.621486);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3726110() {
   return (neuron0x3723680()*0.109434);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3726150() {
   return (neuron0x37239c0()*0.683078);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3725be0() {
   return (neuron0x3723d00()*-0.0222694);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3725c20() {
   return (neuron0x3724260()*0.667055);
}

double NNfunction_ns_chiMinus1_dL::synapse0x34dcb10() {
   return (neuron0x37245a0()*0.0500106);
}

double NNfunction_ns_chiMinus1_dL::synapse0x34dcb50() {
   return (neuron0x37248e0()*0.306348);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3726190() {
   return (neuron0x3724c20()*-0.477466);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37261d0() {
   return (neuron0x3724f60()*-0.269112);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3726210() {
   return (neuron0x37252a0()*0.277295);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3726250() {
   return (neuron0x37255e0()*-0.207817);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37265d0() {
   return (neuron0x3720990()*0.597817);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3726610() {
   return (neuron0x3720c40()*0.346093);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3726650() {
   return (neuron0x3720f80()*-0.110435);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3726690() {
   return (neuron0x37212c0()*-0.247003);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37266d0() {
   return (neuron0x3721600()*0.440246);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3726710() {
   return (neuron0x3721940()*0.458675);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3726750() {
   return (neuron0x3721c80()*0.0091362);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3726790() {
   return (neuron0x3721fc0()*0.308308);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37267d0() {
   return (neuron0x3722300()*0.196427);
}

double NNfunction_ns_chiMinus1_dL::synapse0x34dc960() {
   return (neuron0x3722640()*0.402377);
}

double NNfunction_ns_chiMinus1_dL::synapse0x34dc9a0() {
   return (neuron0x3722980()*-0.598663);
}

double NNfunction_ns_chiMinus1_dL::synapse0x34dc9e0() {
   return (neuron0x3722cc0()*0.755298);
}

double NNfunction_ns_chiMinus1_dL::synapse0x34dca20() {
   return (neuron0x3723000()*-0.262958);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3726a20() {
   return (neuron0x3723340()*0.19405);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3726a60() {
   return (neuron0x3723680()*-0.0649718);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3726aa0() {
   return (neuron0x37239c0()*-0.371937);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3726420() {
   return (neuron0x3723d00()*-0.244147);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3726460() {
   return (neuron0x3724260()*0.156655);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3726bf0() {
   return (neuron0x37245a0()*-0.502191);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3726c30() {
   return (neuron0x37248e0()*0.221876);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3726c70() {
   return (neuron0x3724c20()*0.548769);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3726cb0() {
   return (neuron0x3724f60()*0.0295415);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3726cf0() {
   return (neuron0x37252a0()*-0.097598);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3726d30() {
   return (neuron0x37255e0()*-0.0845987);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37270b0() {
   return (neuron0x3720990()*0.144781);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37270f0() {
   return (neuron0x3720c40()*-0.556317);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3727130() {
   return (neuron0x3720f80()*-0.167616);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3727170() {
   return (neuron0x37212c0()*0.358797);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37271b0() {
   return (neuron0x3721600()*0.011273);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37271f0() {
   return (neuron0x3721940()*-0.00148159);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3727230() {
   return (neuron0x3721c80()*-0.547801);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3727270() {
   return (neuron0x3721fc0()*0.0483682);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37272b0() {
   return (neuron0x3722300()*-0.174026);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37272f0() {
   return (neuron0x3722640()*-0.239529);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3727330() {
   return (neuron0x3722980()*0.480995);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3727370() {
   return (neuron0x3722cc0()*-0.291967);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37273b0() {
   return (neuron0x3723000()*0.129686);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37273f0() {
   return (neuron0x3723340()*0.1125);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3727430() {
   return (neuron0x3723680()*1.48124);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3727470() {
   return (neuron0x37239c0()*-0.257232);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3726f00() {
   return (neuron0x3723d00()*0.0399975);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3726f40() {
   return (neuron0x3724260()*0.0587801);
}

double NNfunction_ns_chiMinus1_dL::synapse0x34dd200() {
   return (neuron0x37245a0()*0.52548);
}

double NNfunction_ns_chiMinus1_dL::synapse0x34eaad0() {
   return (neuron0x37248e0()*0.153675);
}

double NNfunction_ns_chiMinus1_dL::synapse0x34eab10() {
   return (neuron0x3724c20()*-0.00692096);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37293a0() {
   return (neuron0x3724f60()*0.511998);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37293e0() {
   return (neuron0x37252a0()*-0.335081);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37206d0() {
   return (neuron0x37255e0()*0.698931);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37207a0() {
   return (neuron0x3720990()*0.548044);
}

double NNfunction_ns_chiMinus1_dL::synapse0x34eb350() {
   return (neuron0x3720c40()*-0.169252);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37269a0() {
   return (neuron0x3720f80()*0.246002);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37269e0() {
   return (neuron0x37212c0()*-0.134771);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37275c0() {
   return (neuron0x3721600()*0.461691);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3727600() {
   return (neuron0x3721940()*0.169551);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3727640() {
   return (neuron0x3721c80()*0.285322);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3727680() {
   return (neuron0x3721fc0()*0.275664);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37276c0() {
   return (neuron0x3722300()*-0.261533);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3727700() {
   return (neuron0x3722640()*0.140191);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3727740() {
   return (neuron0x3722980()*0.108687);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3727780() {
   return (neuron0x3722cc0()*-0.41484);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37277c0() {
   return (neuron0x3723000()*-0.167459);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3727800() {
   return (neuron0x3723340()*-0.368172);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3727840() {
   return (neuron0x3723680()*0.263347);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3727880() {
   return (neuron0x37239c0()*-0.199291);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3720710() {
   return (neuron0x3723d00()*-0.0340365);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3720750() {
   return (neuron0x3724260()*-0.253013);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37279d0() {
   return (neuron0x37245a0()*-0.462076);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3727a10() {
   return (neuron0x37248e0()*-0.0348999);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3727a50() {
   return (neuron0x3724c20()*0.0109202);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3727a90() {
   return (neuron0x3724f60()*-0.139769);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3727ad0() {
   return (neuron0x37252a0()*-0.193373);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3727b10() {
   return (neuron0x37255e0()*0.00651639);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3727e90() {
   return (neuron0x3720990()*0.804209);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3727ed0() {
   return (neuron0x3720c40()*0.0145718);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3727f10() {
   return (neuron0x3720f80()*-0.14302);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3727f50() {
   return (neuron0x37212c0()*-0.0317328);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3727f90() {
   return (neuron0x3721600()*0.0148117);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3727fd0() {
   return (neuron0x3721940()*0.012845);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3728010() {
   return (neuron0x3721c80()*-0.0224075);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3728050() {
   return (neuron0x3721fc0()*0.000619575);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3728090() {
   return (neuron0x3722300()*0.00905221);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37280d0() {
   return (neuron0x3722640()*0.0306991);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3728110() {
   return (neuron0x3722980()*-0.00902184);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3728150() {
   return (neuron0x3722cc0()*-0.0788323);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3728190() {
   return (neuron0x3723000()*0.00382298);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37281d0() {
   return (neuron0x3723340()*-0.0273382);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3728210() {
   return (neuron0x3723680()*0.00911401);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3728250() {
   return (neuron0x37239c0()*-0.00946207);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37283a0() {
   return (neuron0x3723d00()*-0.00720218);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3727ce0() {
   return (neuron0x3724260()*0.0329528);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3727d20() {
   return (neuron0x37245a0()*0.0236726);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37294e0() {
   return (neuron0x37248e0()*-0.022155);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3729520() {
   return (neuron0x3724c20()*0.020425);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3729560() {
   return (neuron0x3724f60()*0.00973594);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37295a0() {
   return (neuron0x37252a0()*0.0124715);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37295e0() {
   return (neuron0x37255e0()*-8.56838);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3729960() {
   return (neuron0x3720990()*-1.55822);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37299a0() {
   return (neuron0x3720c40()*0.0264536);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37299e0() {
   return (neuron0x3720f80()*0.430017);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3729a20() {
   return (neuron0x37212c0()*-0.148992);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3729a60() {
   return (neuron0x3721600()*-0.0175908);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3729aa0() {
   return (neuron0x3721940()*-0.000383669);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3729ae0() {
   return (neuron0x3721c80()*-0.0219362);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3729b20() {
   return (neuron0x3721fc0()*0.011352);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3729b60() {
   return (neuron0x3722300()*0.0315861);
}

double NNfunction_ns_chiMinus1_dL::synapse0x34eae20() {
   return (neuron0x3722640()*0.016017);
}

double NNfunction_ns_chiMinus1_dL::synapse0x34eae60() {
   return (neuron0x3722980()*-0.000222336);
}

double NNfunction_ns_chiMinus1_dL::synapse0x34eaea0() {
   return (neuron0x3722cc0()*0.257937);
}

double NNfunction_ns_chiMinus1_dL::synapse0x34eaee0() {
   return (neuron0x3723000()*0.0323722);
}

double NNfunction_ns_chiMinus1_dL::synapse0x34eaf20() {
   return (neuron0x3723340()*0.00101202);
}

double NNfunction_ns_chiMinus1_dL::synapse0x34eaf60() {
   return (neuron0x3723680()*0.00379472);
}

double NNfunction_ns_chiMinus1_dL::synapse0x34eafa0() {
   return (neuron0x37239c0()*-0.00701234);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37297b0() {
   return (neuron0x3723d00()*0.00901075);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37297f0() {
   return (neuron0x3724260()*0.0205779);
}

double NNfunction_ns_chiMinus1_dL::synapse0x34eb0f0() {
   return (neuron0x37245a0()*0.0197043);
}

double NNfunction_ns_chiMinus1_dL::synapse0x34eb130() {
   return (neuron0x37248e0()*0.0106497);
}

double NNfunction_ns_chiMinus1_dL::synapse0x34eb170() {
   return (neuron0x3724c20()*0.0176177);
}

double NNfunction_ns_chiMinus1_dL::synapse0x34eb1b0() {
   return (neuron0x3724f60()*0.00628697);
}

double NNfunction_ns_chiMinus1_dL::synapse0x34eb1f0() {
   return (neuron0x37252a0()*-0.0200791);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372a3b0() {
   return (neuron0x37255e0()*-0.0730939);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372a730() {
   return (neuron0x3720990()*-0.712031);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372a770() {
   return (neuron0x3720c40()*-0.00757764);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372a7b0() {
   return (neuron0x3720f80()*0.328376);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372a7f0() {
   return (neuron0x37212c0()*0.326306);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372a830() {
   return (neuron0x3721600()*0.0454819);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372a870() {
   return (neuron0x3721940()*-0.0587659);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372a8b0() {
   return (neuron0x3721c80()*-0.00974819);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372a8f0() {
   return (neuron0x3721fc0()*0.108974);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372a930() {
   return (neuron0x3722300()*-0.0281468);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372a970() {
   return (neuron0x3722640()*0.00515316);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372a9b0() {
   return (neuron0x3722980()*-0.040035);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372a9f0() {
   return (neuron0x3722cc0()*0.952138);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372aa30() {
   return (neuron0x3723000()*-0.00881196);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372aa70() {
   return (neuron0x3723340()*0.0799864);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372aab0() {
   return (neuron0x3723680()*-0.0517386);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372aaf0() {
   return (neuron0x37239c0()*-0.108863);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372a580() {
   return (neuron0x3723d00()*0.0497674);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372a5c0() {
   return (neuron0x3724260()*-0.0283278);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372ac40() {
   return (neuron0x37245a0()*-0.0674541);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372ac80() {
   return (neuron0x37248e0()*-0.0222465);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372acc0() {
   return (neuron0x3724c20()*-0.0312297);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372ad00() {
   return (neuron0x3724f60()*-0.0191219);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372ad40() {
   return (neuron0x37252a0()*-0.0584935);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372ad80() {
   return (neuron0x37255e0()*-0.0373819);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372b100() {
   return (neuron0x3720990()*0.163188);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372b140() {
   return (neuron0x3720c40()*-0.0167446);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372b180() {
   return (neuron0x3720f80()*-3.51529);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372b1c0() {
   return (neuron0x37212c0()*0.0436682);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372b200() {
   return (neuron0x3721600()*0.00419724);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372b240() {
   return (neuron0x3721940()*-0.0120738);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372b280() {
   return (neuron0x3721c80()*0.0147128);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372b2c0() {
   return (neuron0x3721fc0()*-0.0197011);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372b300() {
   return (neuron0x3722300()*-0.00596548);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372b340() {
   return (neuron0x3722640()*0.00634131);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372b380() {
   return (neuron0x3722980()*-0.00154806);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372b3c0() {
   return (neuron0x3722cc0()*0.178459);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372b400() {
   return (neuron0x3723000()*-0.0495552);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372b440() {
   return (neuron0x3723340()*0.0362499);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372b480() {
   return (neuron0x3723680()*0.0186078);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372b4c0() {
   return (neuron0x37239c0()*-0.0215181);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372af50() {
   return (neuron0x3723d00()*-0.0100863);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372af90() {
   return (neuron0x3724260()*-0.00500199);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372b610() {
   return (neuron0x37245a0()*0.0276764);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372b650() {
   return (neuron0x37248e0()*-0.0183802);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372b690() {
   return (neuron0x3724c20()*-0.0200982);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372b6d0() {
   return (neuron0x3724f60()*0.0123834);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372b710() {
   return (neuron0x37252a0()*0.0163298);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372b750() {
   return (neuron0x37255e0()*8.36907);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3724150() {
   return (neuron0x3720990()*0.171374);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3724190() {
   return (neuron0x3720c40()*-0.335767);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37241d0() {
   return (neuron0x3720f80()*0.155662);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3724210() {
   return (neuron0x37212c0()*-1.76219);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372bce0() {
   return (neuron0x3721600()*0.441931);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372bd20() {
   return (neuron0x3721940()*0.478489);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372bd60() {
   return (neuron0x3721c80()*0.114597);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372bda0() {
   return (neuron0x3721fc0()*-0.295486);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372bde0() {
   return (neuron0x3722300()*-0.0822972);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372be20() {
   return (neuron0x3722640()*-0.150179);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372be60() {
   return (neuron0x3722980()*0.0403581);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372bea0() {
   return (neuron0x3722cc0()*-0.597912);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372bee0() {
   return (neuron0x3723000()*-0.746014);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372bf20() {
   return (neuron0x3723340()*-0.0536437);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372bf60() {
   return (neuron0x3723680()*-0.220368);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372bfa0() {
   return (neuron0x37239c0()*0.0832071);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372b920() {
   return (neuron0x3723d00()*0.763774);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372b960() {
   return (neuron0x3724260()*-0.3731);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372c0f0() {
   return (neuron0x37245a0()*-0.312509);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372c130() {
   return (neuron0x37248e0()*0.239783);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372c170() {
   return (neuron0x3724c20()*-0.045719);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372c1b0() {
   return (neuron0x3724f60()*-0.378727);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372c1f0() {
   return (neuron0x37252a0()*0.158479);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372c230() {
   return (neuron0x37255e0()*1.00033);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372c5b0() {
   return (neuron0x3720990()*-5.06128);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372c5f0() {
   return (neuron0x3720c40()*0.00595508);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372c630() {
   return (neuron0x3720f80()*0.647305);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372c670() {
   return (neuron0x37212c0()*0.0383656);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372c6b0() {
   return (neuron0x3721600()*-0.0309187);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372c6f0() {
   return (neuron0x3721940()*0.0157195);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372c730() {
   return (neuron0x3721c80()*0.00551547);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372c770() {
   return (neuron0x3721fc0()*-0.012378);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372c7b0() {
   return (neuron0x3722300()*0.0321686);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372c7f0() {
   return (neuron0x3722640()*-0.0183023);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372c830() {
   return (neuron0x3722980()*-0.0121861);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372c870() {
   return (neuron0x3722cc0()*-0.692257);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372c8b0() {
   return (neuron0x3723000()*0.000605072);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372c8f0() {
   return (neuron0x3723340()*-0.04103);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372c930() {
   return (neuron0x3723680()*0.0252338);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372c970() {
   return (neuron0x37239c0()*-0.0310206);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372c400() {
   return (neuron0x3723d00()*0.0117933);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372c440() {
   return (neuron0x3724260()*-0.00206987);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372cac0() {
   return (neuron0x37245a0()*-0.0068905);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372cb00() {
   return (neuron0x37248e0()*-0.033558);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372cb40() {
   return (neuron0x3724c20()*0.0755875);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372cb80() {
   return (neuron0x3724f60()*0.0105301);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372cbc0() {
   return (neuron0x37252a0()*0.00796367);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372cc00() {
   return (neuron0x37255e0()*2.32428);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372cf80() {
   return (neuron0x3720990()*-0.185942);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372cfc0() {
   return (neuron0x3720c40()*-0.00618978);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372d000() {
   return (neuron0x3720f80()*0.66084);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372d040() {
   return (neuron0x37212c0()*-0.00646364);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372d080() {
   return (neuron0x3721600()*0.000240086);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372d0c0() {
   return (neuron0x3721940()*0.00412566);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372d100() {
   return (neuron0x3721c80()*0.00510643);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372d140() {
   return (neuron0x3721fc0()*0.00453809);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372d180() {
   return (neuron0x3722300()*0.00653317);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372d1c0() {
   return (neuron0x3722640()*-0.0149955);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372d200() {
   return (neuron0x3722980()*-0.00494909);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372d240() {
   return (neuron0x3722cc0()*-0.169348);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372d280() {
   return (neuron0x3723000()*-0.000367354);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372d2c0() {
   return (neuron0x3723340()*-0.015348);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372d300() {
   return (neuron0x3723680()*-0.0170759);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372d340() {
   return (neuron0x37239c0()*0.0205504);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372cdd0() {
   return (neuron0x3723d00()*0.039789);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372ce10() {
   return (neuron0x3724260()*0.0062487);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3729ba0() {
   return (neuron0x37245a0()*-0.0102185);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3729be0() {
   return (neuron0x37248e0()*0.00332668);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3729c20() {
   return (neuron0x3724c20()*0.00556923);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3729c60() {
   return (neuron0x3724f60()*0.000880717);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3729ca0() {
   return (neuron0x37252a0()*-0.0142036);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3729ce0() {
   return (neuron0x37255e0()*26.9716);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372a060() {
   return (neuron0x3720990()*-0.154395);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372a0a0() {
   return (neuron0x3720c40()*0.00291433);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372a0e0() {
   return (neuron0x3720f80()*0.037473);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372a120() {
   return (neuron0x37212c0()*2.70052);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372a160() {
   return (neuron0x3721600()*-0.00324313);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372a1a0() {
   return (neuron0x3721940()*-0.00758711);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372a1e0() {
   return (neuron0x3721c80()*-0.00432223);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372a220() {
   return (neuron0x3721fc0()*0.00672947);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372a260() {
   return (neuron0x3722300()*0.0038487);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372a2a0() {
   return (neuron0x3722640()*0.00328895);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372a2e0() {
   return (neuron0x3722980()*-2.92838e-05);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372a320() {
   return (neuron0x3722cc0()*0.248833);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372a360() {
   return (neuron0x3723000()*0.00793322);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372e4a0() {
   return (neuron0x3723340()*0.00919963);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372e4e0() {
   return (neuron0x3723680()*-0.0100022);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372e520() {
   return (neuron0x37239c0()*-0.00916365);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3729eb0() {
   return (neuron0x3723d00()*0.0131467);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3729ef0() {
   return (neuron0x3724260()*-0.0108389);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372e670() {
   return (neuron0x37245a0()*4.70258e-05);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372e6b0() {
   return (neuron0x37248e0()*-0.00560394);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372e6f0() {
   return (neuron0x3724c20()*0.0059874);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372e730() {
   return (neuron0x3724f60()*0.00373007);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372e770() {
   return (neuron0x37252a0()*0.000602367);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372e7b0() {
   return (neuron0x37255e0()*0.0236732);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372eb30() {
   return (neuron0x3720990()*0.20885);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372eb70() {
   return (neuron0x3720c40()*0.022106);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372ebb0() {
   return (neuron0x3720f80()*3.74579);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372ebf0() {
   return (neuron0x37212c0()*-0.0220304);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372ec30() {
   return (neuron0x3721600()*0.00723525);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372ec70() {
   return (neuron0x3721940()*0.0234132);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372ecb0() {
   return (neuron0x3721c80()*0.00448142);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372ecf0() {
   return (neuron0x3721fc0()*0.00648798);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372ed30() {
   return (neuron0x3722300()*-0.0318326);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372ed70() {
   return (neuron0x3722640()*-0.0144944);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372edb0() {
   return (neuron0x3722980()*-0.010407);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372edf0() {
   return (neuron0x3722cc0()*-0.138189);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372ee30() {
   return (neuron0x3723000()*0.00807818);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372ee70() {
   return (neuron0x3723340()*0.00271122);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372eeb0() {
   return (neuron0x3723680()*0.00452903);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372eef0() {
   return (neuron0x37239c0()*0.049697);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372e980() {
   return (neuron0x3723d00()*-0.022399);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372e9c0() {
   return (neuron0x3724260()*-0.0404568);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372f040() {
   return (neuron0x37245a0()*-0.0244369);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372f080() {
   return (neuron0x37248e0()*0.00506271);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372f0c0() {
   return (neuron0x3724c20()*0.02434);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372f100() {
   return (neuron0x3724f60()*0.00310705);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372f140() {
   return (neuron0x37252a0()*0.0109352);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372f180() {
   return (neuron0x37255e0()*-0.282833);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372f500() {
   return (neuron0x3720990()*-0.3813);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372f540() {
   return (neuron0x3720c40()*-0.629196);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372f580() {
   return (neuron0x3720f80()*0.509786);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372f5c0() {
   return (neuron0x37212c0()*0.613383);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372f600() {
   return (neuron0x3721600()*-0.470066);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372f640() {
   return (neuron0x3721940()*-0.577344);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372f680() {
   return (neuron0x3721c80()*-0.555894);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372f6c0() {
   return (neuron0x3721fc0()*0.132022);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372f700() {
   return (neuron0x3722300()*-0.178772);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372f740() {
   return (neuron0x3722640()*0.522948);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372f780() {
   return (neuron0x3722980()*0.14611);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372f7c0() {
   return (neuron0x3722cc0()*0.0579664);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372f800() {
   return (neuron0x3723000()*-0.572138);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372f840() {
   return (neuron0x3723340()*-0.100716);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372f880() {
   return (neuron0x3723680()*0.189457);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372f8c0() {
   return (neuron0x37239c0()*-0.245367);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372f350() {
   return (neuron0x3723d00()*-0.0152498);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372f390() {
   return (neuron0x3724260()*0.381844);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372fa10() {
   return (neuron0x37245a0()*0.0607499);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372fa50() {
   return (neuron0x37248e0()*0.369019);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372fa90() {
   return (neuron0x3724c20()*0.0538893);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372fad0() {
   return (neuron0x3724f60()*-0.644793);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372fb10() {
   return (neuron0x37252a0()*-0.154938);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372fb50() {
   return (neuron0x37255e0()*-0.445931);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372fed0() {
   return (neuron0x3720990()*0.341983);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372ff10() {
   return (neuron0x3720c40()*-0.00706349);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372ff50() {
   return (neuron0x3720f80()*0.230093);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372ff90() {
   return (neuron0x37212c0()*-0.935936);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372ffd0() {
   return (neuron0x3721600()*-0.00328679);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3730010() {
   return (neuron0x3721940()*-0.0328527);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3730050() {
   return (neuron0x3721c80()*0.001864);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3730090() {
   return (neuron0x3721fc0()*-0.00472091);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37300d0() {
   return (neuron0x3722300()*-0.0179751);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3730110() {
   return (neuron0x3722640()*-0.00683888);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3730150() {
   return (neuron0x3722980()*-0.0413828);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3730190() {
   return (neuron0x3722cc0()*0.133886);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37301d0() {
   return (neuron0x3723000()*0.022465);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3730210() {
   return (neuron0x3723340()*-0.0164464);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3730250() {
   return (neuron0x3723680()*-0.0231412);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3730290() {
   return (neuron0x37239c0()*-0.0469998);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372fd20() {
   return (neuron0x3723d00()*-0.0590726);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372fd60() {
   return (neuron0x3724260()*0.0191537);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37303e0() {
   return (neuron0x37245a0()*0.065842);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3730420() {
   return (neuron0x37248e0()*0.00800634);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3730460() {
   return (neuron0x3724c20()*-0.0102541);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37304a0() {
   return (neuron0x3724f60()*0.00871001);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37304e0() {
   return (neuron0x37252a0()*-0.0243017);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3730520() {
   return (neuron0x37255e0()*-0.0473153);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37308a0() {
   return (neuron0x3720990()*0.277086);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3720b20() {
   return (neuron0x3720c40()*0.00390271);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3720b60() {
   return (neuron0x3720f80()*-0.516483);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3720e60() {
   return (neuron0x37212c0()*-0.00968485);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3720ea0() {
   return (neuron0x3721600()*-0.00347377);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37211a0() {
   return (neuron0x3721940()*-0.00614875);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37211e0() {
   return (neuron0x3721c80()*-0.00327178);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37214e0() {
   return (neuron0x3721fc0()*-0.00944712);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3721520() {
   return (neuron0x3722300()*3.26648e-05);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3721820() {
   return (neuron0x3722640()*0.008934);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3721860() {
   return (neuron0x3722980()*-0.00856022);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3721b60() {
   return (neuron0x3722cc0()*-0.298052);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3721ba0() {
   return (neuron0x3723000()*0.0134774);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3721ea0() {
   return (neuron0x3723340()*0.0019826);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3721ee0() {
   return (neuron0x3723680()*0.0103722);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37221e0() {
   return (neuron0x37239c0()*-0.00672764);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3722220() {
   return (neuron0x3723d00()*-0.0254938);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3722520() {
   return (neuron0x3724260()*0.00231503);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3722560() {
   return (neuron0x37245a0()*-0.00409475);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3722860() {
   return (neuron0x37248e0()*-0.000714103);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37228a0() {
   return (neuron0x3724c20()*-0.00378127);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3722ba0() {
   return (neuron0x3724f60()*0.00058067);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3722be0() {
   return (neuron0x37252a0()*0.00595838);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3722ee0() {
   return (neuron0x37255e0()*-24.8597);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3722f20() {
   return (neuron0x3720990()*0.383455);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3723be0() {
   return (neuron0x3720c40()*0.0135234);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3723c20() {
   return (neuron0x3720f80()*0.0259814);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37306f0() {
   return (neuron0x37212c0()*0.107055);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3730730() {
   return (neuron0x3721600()*0.0293144);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3723f20() {
   return (neuron0x3721940()*-0.00387944);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3723f60() {
   return (neuron0x3721c80()*-0.00233497);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3724480() {
   return (neuron0x3721fc0()*-0.00968043);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37244c0() {
   return (neuron0x3722300()*-0.0174576);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37247c0() {
   return (neuron0x3722640()*-0.0146837);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3724800() {
   return (neuron0x3722980()*-0.0291929);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3724b00() {
   return (neuron0x3722cc0()*-3.98935);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3724b40() {
   return (neuron0x3723000()*0.0201184);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3724e40() {
   return (neuron0x3723340()*-0.0520431);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3724e80() {
   return (neuron0x3723680()*-0.00716705);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3725180() {
   return (neuron0x37239c0()*-0.0164392);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37251c0() {
   return (neuron0x3723d00()*-0.0374854);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37254c0() {
   return (neuron0x3724260()*-0.00487948);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3725500() {
   return (neuron0x37245a0()*-0.00852076);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3725800() {
   return (neuron0x37248e0()*-0.0105251);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3725840() {
   return (neuron0x3724c20()*-0.0435625);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3723220() {
   return (neuron0x3724f60()*-0.00351195);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3723260() {
   return (neuron0x37252a0()*-0.0175515);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3732610() {
   return (neuron0x37255e0()*0.000339646);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3732990() {
   return (neuron0x3720990()*0.271527);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37329d0() {
   return (neuron0x3720c40()*0.0141403);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3732a10() {
   return (neuron0x3720f80()*-0.786131);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3732a50() {
   return (neuron0x37212c0()*-0.0750393);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3732a90() {
   return (neuron0x3721600()*-0.0038285);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3732ad0() {
   return (neuron0x3721940()*-0.0010462);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3732b10() {
   return (neuron0x3721c80()*-0.0258466);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3732b50() {
   return (neuron0x3721fc0()*0.00382357);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3732b90() {
   return (neuron0x3722300()*0.0115552);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3732bd0() {
   return (neuron0x3722640()*0.0350519);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3732c10() {
   return (neuron0x3722980()*0.00366259);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3732c50() {
   return (neuron0x3722cc0()*0.343182);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3732c90() {
   return (neuron0x3723000()*0.0588979);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3732cd0() {
   return (neuron0x3723340()*0.0101833);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3732d10() {
   return (neuron0x3723680()*0.0185334);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3732d50() {
   return (neuron0x37239c0()*-0.00510545);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37327e0() {
   return (neuron0x3723d00()*0.000412354);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3732820() {
   return (neuron0x3724260()*0.0331659);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3732ea0() {
   return (neuron0x37245a0()*0.00844837);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3732ee0() {
   return (neuron0x37248e0()*0.02826);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3732f20() {
   return (neuron0x3724c20()*0.00152859);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3732f60() {
   return (neuron0x3724f60()*-0.0101484);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3732fa0() {
   return (neuron0x37252a0()*-0.0243015);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3732fe0() {
   return (neuron0x37255e0()*-0.119341);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3733360() {
   return (neuron0x3720990()*-0.0293076);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37333a0() {
   return (neuron0x3720c40()*-0.007482);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37333e0() {
   return (neuron0x3720f80()*0.368188);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3733420() {
   return (neuron0x37212c0()*0.0791798);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3733460() {
   return (neuron0x3721600()*0.00346236);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37334a0() {
   return (neuron0x3721940()*-0.0127214);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37334e0() {
   return (neuron0x3721c80()*0.00421768);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3733520() {
   return (neuron0x3721fc0()*-0.00116077);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3733560() {
   return (neuron0x3722300()*-0.0052614);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37335a0() {
   return (neuron0x3722640()*-0.0037142);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37335e0() {
   return (neuron0x3722980()*0.0173503);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3733620() {
   return (neuron0x3722cc0()*-2.64906);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3733660() {
   return (neuron0x3723000()*-0.0033418);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37336a0() {
   return (neuron0x3723340()*-0.0454436);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37336e0() {
   return (neuron0x3723680()*-0.0112047);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3733720() {
   return (neuron0x37239c0()*0.000989731);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37331b0() {
   return (neuron0x3723d00()*-0.0258576);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37331f0() {
   return (neuron0x3724260()*-0.00867538);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3733870() {
   return (neuron0x37245a0()*-0.00598376);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37338b0() {
   return (neuron0x37248e0()*0.00249689);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37338f0() {
   return (neuron0x3724c20()*-0.00300082);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3733930() {
   return (neuron0x3724f60()*0.00196634);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3733970() {
   return (neuron0x37252a0()*-0.0102812);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37339b0() {
   return (neuron0x37255e0()*0.0613117);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3733d30() {
   return (neuron0x3720990()*-1.83524);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3733d70() {
   return (neuron0x3720c40()*-0.0349036);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3733db0() {
   return (neuron0x3720f80()*-0.378604);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3733df0() {
   return (neuron0x37212c0()*0.00633427);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3733e30() {
   return (neuron0x3721600()*-0.0512811);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3733e70() {
   return (neuron0x3721940()*0.00481283);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3733eb0() {
   return (neuron0x3721c80()*-0.015019);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3733ef0() {
   return (neuron0x3721fc0()*0.0203854);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3733f30() {
   return (neuron0x3722300()*0.0261258);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3733f70() {
   return (neuron0x3722640()*-0.0175276);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3733fb0() {
   return (neuron0x3722980()*0.00451102);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3733ff0() {
   return (neuron0x3722cc0()*0.0991455);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3734030() {
   return (neuron0x3723000()*0.03167);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3734070() {
   return (neuron0x3723340()*-0.0630023);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37340b0() {
   return (neuron0x3723680()*-0.0366815);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37340f0() {
   return (neuron0x37239c0()*0.0350548);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3733b80() {
   return (neuron0x3723d00()*-0.00149105);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3733bc0() {
   return (neuron0x3724260()*0.0053029);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3734240() {
   return (neuron0x37245a0()*0.0151925);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3734280() {
   return (neuron0x37248e0()*-0.0312786);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37342c0() {
   return (neuron0x3724c20()*0.014857);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3734300() {
   return (neuron0x3724f60()*-0.0176645);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3734340() {
   return (neuron0x37252a0()*0.0351604);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3734380() {
   return (neuron0x37255e0()*0.152427);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3734700() {
   return (neuron0x3720990()*0.275547);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3734740() {
   return (neuron0x3720c40()*0.00539502);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3734780() {
   return (neuron0x3720f80()*-1.94845);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37347c0() {
   return (neuron0x37212c0()*-0.0773034);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3734800() {
   return (neuron0x3721600()*0.00682006);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3734840() {
   return (neuron0x3721940()*0.0161942);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3734880() {
   return (neuron0x3721c80()*0.0223682);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37348c0() {
   return (neuron0x3721fc0()*0.00166538);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3734900() {
   return (neuron0x3722300()*-0.00793243);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3734940() {
   return (neuron0x3722640()*-0.0103765);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3734980() {
   return (neuron0x3722980()*-0.0275093);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37349c0() {
   return (neuron0x3722cc0()*-0.0913997);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3734a00() {
   return (neuron0x3723000()*0.027239);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3734a40() {
   return (neuron0x3723340()*-0.00412538);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3734a80() {
   return (neuron0x3723680()*0.0301986);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3734ac0() {
   return (neuron0x37239c0()*0.0267748);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3734550() {
   return (neuron0x3723d00()*-0.00723329);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3734590() {
   return (neuron0x3724260()*0.00166216);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3734c10() {
   return (neuron0x37245a0()*-0.0191681);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3734c50() {
   return (neuron0x37248e0()*0.00748753);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3734c90() {
   return (neuron0x3724c20()*0.00191696);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3734cd0() {
   return (neuron0x3724f60()*0.00198583);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3734d10() {
   return (neuron0x37252a0()*-0.00415316);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3734d50() {
   return (neuron0x37255e0()*-0.121736);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37350d0() {
   return (neuron0x3720990()*-2.88545);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735110() {
   return (neuron0x3720c40()*-0.0112775);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735150() {
   return (neuron0x3720f80()*0.242795);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735190() {
   return (neuron0x37212c0()*0.0510861);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37351d0() {
   return (neuron0x3721600()*-0.0612005);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735210() {
   return (neuron0x3721940()*0.0311534);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735250() {
   return (neuron0x3721c80()*-0.0195828);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735290() {
   return (neuron0x3721fc0()*0.0273314);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37352d0() {
   return (neuron0x3722300()*0.0433236);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372d490() {
   return (neuron0x3722640()*0.00724398);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372d4d0() {
   return (neuron0x3722980()*0.00455804);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372d510() {
   return (neuron0x3722cc0()*0.039949);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372d550() {
   return (neuron0x3723000()*0.0403046);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372d590() {
   return (neuron0x3723340()*-0.0226755);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372d5d0() {
   return (neuron0x3723680()*-0.0319432);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372d610() {
   return (neuron0x37239c0()*0.051607);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3734f20() {
   return (neuron0x3723d00()*0.0232364);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3734f60() {
   return (neuron0x3724260()*0.0176522);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372d760() {
   return (neuron0x37245a0()*0.0256207);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372d7a0() {
   return (neuron0x37248e0()*-0.00406475);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372d7e0() {
   return (neuron0x3724c20()*0.00726365);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372d820() {
   return (neuron0x3724f60()*0.00184576);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372d860() {
   return (neuron0x37252a0()*0.0076835);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372d8a0() {
   return (neuron0x37255e0()*0.0986655);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372dc20() {
   return (neuron0x3720990()*0.456706);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372dc60() {
   return (neuron0x3720c40()*0.0294994);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372dca0() {
   return (neuron0x3720f80()*1.44551);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372dce0() {
   return (neuron0x37212c0()*0.0296988);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372dd20() {
   return (neuron0x3721600()*-0.0193906);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372dd60() {
   return (neuron0x3721940()*0.00724777);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372dda0() {
   return (neuron0x3721c80()*-0.00401068);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372dde0() {
   return (neuron0x3721fc0()*-0.00670568);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372de20() {
   return (neuron0x3722300()*0.008963);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372de60() {
   return (neuron0x3722640()*0.0161257);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372dea0() {
   return (neuron0x3722980()*0.0170342);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372dee0() {
   return (neuron0x3722cc0()*0.598401);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372df20() {
   return (neuron0x3723000()*0.0119759);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372df60() {
   return (neuron0x3723340()*0.00931596);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372dfa0() {
   return (neuron0x3723680()*0.0116318);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372dfe0() {
   return (neuron0x37239c0()*-0.00854429);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372da70() {
   return (neuron0x3723d00()*-0.00860652);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372dab0() {
   return (neuron0x3724260()*-0.000450902);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372e130() {
   return (neuron0x37245a0()*-0.00220532);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372e170() {
   return (neuron0x37248e0()*0.0118895);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372e1b0() {
   return (neuron0x3724c20()*-0.024734);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372e1f0() {
   return (neuron0x3724f60()*0.0246228);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372e230() {
   return (neuron0x37252a0()*-0.00852638);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372e270() {
   return (neuron0x37255e0()*-0.199315);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372e440() {
   return (neuron0x3720990()*-0.169783);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37374d0() {
   return (neuron0x3720c40()*-0.210471);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737510() {
   return (neuron0x3720f80()*-0.049681);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737550() {
   return (neuron0x37212c0()*-0.73784);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737590() {
   return (neuron0x3721600()*-0.069616);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37375d0() {
   return (neuron0x3721940()*-0.0958092);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737610() {
   return (neuron0x3721c80()*-0.06328);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737650() {
   return (neuron0x3721fc0()*0.315391);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737690() {
   return (neuron0x3722300()*0.0491344);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37376d0() {
   return (neuron0x3722640()*-0.0798397);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737710() {
   return (neuron0x3722980()*0.0371976);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737750() {
   return (neuron0x3722cc0()*-0.920677);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737790() {
   return (neuron0x3723000()*0.196192);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37377d0() {
   return (neuron0x3723340()*-0.336209);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737810() {
   return (neuron0x3723680()*-0.045235);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737850() {
   return (neuron0x37239c0()*0.647994);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737320() {
   return (neuron0x3723d00()*-0.405042);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737360() {
   return (neuron0x3724260()*-0.129254);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37379a0() {
   return (neuron0x37245a0()*-0.260147);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37379e0() {
   return (neuron0x37248e0()*0.0311988);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737a20() {
   return (neuron0x3724c20()*-0.10983);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737a60() {
   return (neuron0x3724f60()*-0.0779563);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737aa0() {
   return (neuron0x37252a0()*0.0141723);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737ae0() {
   return (neuron0x37255e0()*0.0141697);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737e60() {
   return (neuron0x3720990()*-0.0790162);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737ea0() {
   return (neuron0x3720c40()*0.0496766);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737ee0() {
   return (neuron0x3720f80()*-0.0745885);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737f20() {
   return (neuron0x37212c0()*0.628477);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737f60() {
   return (neuron0x3721600()*0.09458);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737fa0() {
   return (neuron0x3721940()*-0.0113323);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737fe0() {
   return (neuron0x3721c80()*0.0976102);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3738020() {
   return (neuron0x3721fc0()*-0.0334708);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3738060() {
   return (neuron0x3722300()*-0.151693);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37380a0() {
   return (neuron0x3722640()*0.253198);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37380e0() {
   return (neuron0x3722980()*0.0497308);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3738120() {
   return (neuron0x3722cc0()*-1.04374);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3738160() {
   return (neuron0x3723000()*0.199552);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37381a0() {
   return (neuron0x3723340()*0.481181);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37381e0() {
   return (neuron0x3723680()*0.152663);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3738220() {
   return (neuron0x37239c0()*-0.0492136);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737cb0() {
   return (neuron0x3723d00()*0.507967);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737cf0() {
   return (neuron0x3724260()*0.398502);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3738370() {
   return (neuron0x37245a0()*0.150548);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37383b0() {
   return (neuron0x37248e0()*0.33452);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37383f0() {
   return (neuron0x3724c20()*0.0298445);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3738430() {
   return (neuron0x3724f60()*0.161025);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3738470() {
   return (neuron0x37252a0()*-0.0509489);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37384b0() {
   return (neuron0x37255e0()*-0.177762);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3738830() {
   return (neuron0x3720990()*0.111485);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3738870() {
   return (neuron0x3720c40()*0.00539047);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37388b0() {
   return (neuron0x3720f80()*0.723823);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37388f0() {
   return (neuron0x37212c0()*0.0302591);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3738930() {
   return (neuron0x3721600()*0.00945978);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3738970() {
   return (neuron0x3721940()*0.00157632);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37389b0() {
   return (neuron0x3721c80()*-0.00433659);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37389f0() {
   return (neuron0x3721fc0()*0.00558863);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3738a30() {
   return (neuron0x3722300()*-0.000421001);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3738a70() {
   return (neuron0x3722640()*9.82691e-05);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3738ab0() {
   return (neuron0x3722980()*0.00576599);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3738af0() {
   return (neuron0x3722cc0()*-1.06325);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3738b30() {
   return (neuron0x3723000()*-0.0070031);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3738b70() {
   return (neuron0x3723340()*-0.0157709);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3738bb0() {
   return (neuron0x3723680()*-0.00754794);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3738bf0() {
   return (neuron0x37239c0()*-0.00832149);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3738680() {
   return (neuron0x3723d00()*-0.00617034);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37386c0() {
   return (neuron0x3724260()*-0.0106433);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3738d40() {
   return (neuron0x37245a0()*-0.00633451);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3738d80() {
   return (neuron0x37248e0()*8.00345e-05);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3738dc0() {
   return (neuron0x3724c20()*0.00154429);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3738e00() {
   return (neuron0x3724f60()*3.53235e-05);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3738e40() {
   return (neuron0x37252a0()*-0.00961508);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3738e80() {
   return (neuron0x37255e0()*0.0353241);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739200() {
   return (neuron0x3720990()*-0.281151);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739240() {
   return (neuron0x3720c40()*-0.0138684);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739280() {
   return (neuron0x3720f80()*-0.660016);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37392c0() {
   return (neuron0x37212c0()*-0.117791);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739300() {
   return (neuron0x3721600()*0.00999712);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739340() {
   return (neuron0x3721940()*-0.0193244);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739380() {
   return (neuron0x3721c80()*-0.000404446);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37393c0() {
   return (neuron0x3721fc0()*0.00719779);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739400() {
   return (neuron0x3722300()*0.00767481);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739440() {
   return (neuron0x3722640()*-0.00234565);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739480() {
   return (neuron0x3722980()*0.00473366);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37394c0() {
   return (neuron0x3722cc0()*-0.377364);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739500() {
   return (neuron0x3723000()*-0.00130188);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739540() {
   return (neuron0x3723340()*-0.0242519);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739580() {
   return (neuron0x3723680()*0.00930203);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37395c0() {
   return (neuron0x37239c0()*0.0212894);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739050() {
   return (neuron0x3723d00()*-0.034328);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739090() {
   return (neuron0x3724260()*0.00730254);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739710() {
   return (neuron0x37245a0()*0.000538465);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739750() {
   return (neuron0x37248e0()*-0.0150663);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739790() {
   return (neuron0x3724c20()*-0.00244427);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37397d0() {
   return (neuron0x3724f60()*-0.0102675);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739810() {
   return (neuron0x37252a0()*0.0154376);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739850() {
   return (neuron0x37255e0()*0.0153053);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739bd0() {
   return (neuron0x3720990()*1.63679);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739c10() {
   return (neuron0x3720c40()*0.136107);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739c50() {
   return (neuron0x3720f80()*0.0965043);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739c90() {
   return (neuron0x37212c0()*0.0257497);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739cd0() {
   return (neuron0x3721600()*0.112206);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739d10() {
   return (neuron0x3721940()*-0.0109744);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739d50() {
   return (neuron0x3721c80()*0.0818492);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739d90() {
   return (neuron0x3721fc0()*0.0812747);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739dd0() {
   return (neuron0x3722300()*0.0744877);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739e10() {
   return (neuron0x3722640()*-0.00445122);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739e50() {
   return (neuron0x3722980()*-0.0997236);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739e90() {
   return (neuron0x3722cc0()*-0.817006);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739ed0() {
   return (neuron0x3723000()*0.0389312);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739f10() {
   return (neuron0x3723340()*-0.0305423);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739f50() {
   return (neuron0x3723680()*-0.0467317);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739f90() {
   return (neuron0x37239c0()*-0.037925);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739a20() {
   return (neuron0x3723d00()*-0.0592405);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739a60() {
   return (neuron0x3724260()*0.0319192);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373a0e0() {
   return (neuron0x37245a0()*-0.0363584);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373a120() {
   return (neuron0x37248e0()*0.0242018);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373a160() {
   return (neuron0x3724c20()*0.0651356);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373a1a0() {
   return (neuron0x3724f60()*-0.0223436);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373a1e0() {
   return (neuron0x37252a0()*-0.0586416);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373a220() {
   return (neuron0x37255e0()*2.11465);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373a5a0() {
   return (neuron0x3720990()*0.182229);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373a5e0() {
   return (neuron0x3720c40()*-0.00459215);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373a620() {
   return (neuron0x3720f80()*0.164136);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373a660() {
   return (neuron0x37212c0()*0.561529);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373a6a0() {
   return (neuron0x3721600()*-0.00247611);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373a6e0() {
   return (neuron0x3721940()*-0.0625304);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373a720() {
   return (neuron0x3721c80()*0.01569);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373a760() {
   return (neuron0x3721fc0()*-0.018777);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373a7a0() {
   return (neuron0x3722300()*0.00470423);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373a7e0() {
   return (neuron0x3722640()*-0.00279701);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373a820() {
   return (neuron0x3722980()*-0.0245471);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373a860() {
   return (neuron0x3722cc0()*-0.772753);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373a8a0() {
   return (neuron0x3723000()*0.102895);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373a8e0() {
   return (neuron0x3723340()*-0.0694677);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373a920() {
   return (neuron0x3723680()*-0.00982085);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373a960() {
   return (neuron0x37239c0()*0.0212477);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373a3f0() {
   return (neuron0x3723d00()*-0.0615548);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373a430() {
   return (neuron0x3724260()*0.0222358);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373aab0() {
   return (neuron0x37245a0()*0.0676861);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373aaf0() {
   return (neuron0x37248e0()*0.0036779);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373ab30() {
   return (neuron0x3724c20()*-0.0403006);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373ab70() {
   return (neuron0x3724f60()*-0.0362172);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373abb0() {
   return (neuron0x37252a0()*0.00695747);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373abf0() {
   return (neuron0x37255e0()*0.0425443);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373af70() {
   return (neuron0x3720990()*-0.569361);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373afb0() {
   return (neuron0x3720c40()*-0.143249);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373aff0() {
   return (neuron0x3720f80()*0.477733);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373b030() {
   return (neuron0x37212c0()*0.385312);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373b070() {
   return (neuron0x3721600()*-0.0913209);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373b0b0() {
   return (neuron0x3721940()*-0.139415);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373b0f0() {
   return (neuron0x3721c80()*0.0420506);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373b130() {
   return (neuron0x3721fc0()*0.212103);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373b170() {
   return (neuron0x3722300()*-0.644248);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373b1b0() {
   return (neuron0x3722640()*0.0640911);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373b1f0() {
   return (neuron0x3722980()*0.567642);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373b230() {
   return (neuron0x3722cc0()*0.52007);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373b270() {
   return (neuron0x3723000()*-0.577853);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373b2b0() {
   return (neuron0x3723340()*-0.418308);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373b2f0() {
   return (neuron0x3723680()*0.109725);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373b330() {
   return (neuron0x37239c0()*-0.0569064);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373adc0() {
   return (neuron0x3723d00()*0.69556);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373ae00() {
   return (neuron0x3724260()*-0.151748);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373b480() {
   return (neuron0x37245a0()*-0.030333);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373b4c0() {
   return (neuron0x37248e0()*-0.519641);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373b500() {
   return (neuron0x3724c20()*-0.415383);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373b540() {
   return (neuron0x3724f60()*0.149397);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373b580() {
   return (neuron0x37252a0()*0.389286);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373b5c0() {
   return (neuron0x37255e0()*0.0542166);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373b940() {
   return (neuron0x3720990()*0.110291);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373b980() {
   return (neuron0x3720c40()*0.00587574);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373b9c0() {
   return (neuron0x3720f80()*4.09007);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373ba00() {
   return (neuron0x37212c0()*-0.00854875);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373ba40() {
   return (neuron0x3721600()*0.00658882);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373ba80() {
   return (neuron0x3721940()*-0.0159535);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373bac0() {
   return (neuron0x3721c80()*-0.0148197);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373bb00() {
   return (neuron0x3721fc0()*0.00296051);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373bb40() {
   return (neuron0x3722300()*-0.0126894);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373bb80() {
   return (neuron0x3722640()*0.00764753);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373bbc0() {
   return (neuron0x3722980()*-0.00411503);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373bc00() {
   return (neuron0x3722cc0()*-0.130716);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373bc40() {
   return (neuron0x3723000()*0.0526336);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373bc80() {
   return (neuron0x3723340()*0.0300333);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373bcc0() {
   return (neuron0x3723680()*-0.00113058);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373bd00() {
   return (neuron0x37239c0()*0.0115654);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373b790() {
   return (neuron0x3723d00()*-0.0119584);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373b7d0() {
   return (neuron0x3724260()*0.0163633);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373be50() {
   return (neuron0x37245a0()*-0.00359271);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373be90() {
   return (neuron0x37248e0()*0.00804061);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373bed0() {
   return (neuron0x3724c20()*-0.00549969);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373bf10() {
   return (neuron0x3724f60()*0.00647231);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373bf50() {
   return (neuron0x37252a0()*-0.0167106);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373bf90() {
   return (neuron0x37255e0()*9.5017);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373c310() {
   return (neuron0x3720990()*0.0182238);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37308e0() {
   return (neuron0x3720c40()*-0.241875);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3730920() {
   return (neuron0x3720f80()*-1.05447);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3730960() {
   return (neuron0x37212c0()*0.00549945);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3730bb0() {
   return (neuron0x3721600()*-0.527376);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3730bf0() {
   return (neuron0x3721940()*-0.553914);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3730c30() {
   return (neuron0x3721c80()*-0.0688596);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3730e80() {
   return (neuron0x3721fc0()*-0.423594);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3730ec0() {
   return (neuron0x3722300()*-0.0593547);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3731110() {
   return (neuron0x3722640()*-0.138528);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3731150() {
   return (neuron0x3722980()*-0.145583);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3731190() {
   return (neuron0x3722cc0()*0.335501);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37313e0() {
   return (neuron0x3723000()*-0.441531);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3731420() {
   return (neuron0x3723340()*0.0106975);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3731670() {
   return (neuron0x3723680()*-0.750371);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37316b0() {
   return (neuron0x37239c0()*0.0166586);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373c160() {
   return (neuron0x3723d00()*0.415084);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373c1a0() {
   return (neuron0x3724260()*-0.186326);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3731800() {
   return (neuron0x37245a0()*-0.0149288);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3731d10() {
   return (neuron0x37248e0()*-0.165695);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3731d50() {
   return (neuron0x3724c20()*-0.13702);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3731d90() {
   return (neuron0x3724f60()*0.370894);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3731fe0() {
   return (neuron0x37252a0()*0.0935371);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3732020() {
   return (neuron0x37255e0()*0.158674);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37318d0() {
   return (neuron0x3720990()*0.491731);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3731910() {
   return (neuron0x3720c40()*0.0608843);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3731950() {
   return (neuron0x3720f80()*0.468113);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3731990() {
   return (neuron0x37212c0()*-0.101755);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3732310() {
   return (neuron0x3721600()*0.0416046);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373e660() {
   return (neuron0x3721940()*-0.0410604);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373e6a0() {
   return (neuron0x3721c80()*0.0297792);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373e6e0() {
   return (neuron0x3721fc0()*0.014981);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373e720() {
   return (neuron0x3722300()*-0.0827752);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373e760() {
   return (neuron0x3722640()*0.0182421);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373e7a0() {
   return (neuron0x3722980()*-0.00210778);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373e7e0() {
   return (neuron0x3722cc0()*1.70243);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373e820() {
   return (neuron0x3723000()*0.00138664);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373e860() {
   return (neuron0x3723340()*0.0593229);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373e8a0() {
   return (neuron0x3723680()*-0.0119013);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373e8e0() {
   return (neuron0x37239c0()*-0.0823687);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37321f0() {
   return (neuron0x3723d00()*0.0349321);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3732230() {
   return (neuron0x3724260()*0.0384552);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373ea30() {
   return (neuron0x37245a0()*0.120105);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373ea70() {
   return (neuron0x37248e0()*0.0571819);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373eab0() {
   return (neuron0x3724c20()*-0.0225521);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373eaf0() {
   return (neuron0x3724f60()*-0.00978089);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373eb30() {
   return (neuron0x37252a0()*-0.0811966);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373eb70() {
   return (neuron0x37255e0()*-0.0196199);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373eef0() {
   return (neuron0x3720990()*0.360674);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373ef30() {
   return (neuron0x3720c40()*-0.707356);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373ef70() {
   return (neuron0x3720f80()*-0.671215);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373efb0() {
   return (neuron0x37212c0()*0.113833);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373eff0() {
   return (neuron0x3721600()*-0.0455473);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373f030() {
   return (neuron0x3721940()*0.525394);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373f070() {
   return (neuron0x3721c80()*-0.294211);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373f0b0() {
   return (neuron0x3721fc0()*-0.0533413);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373f0f0() {
   return (neuron0x3722300()*-0.202503);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373f130() {
   return (neuron0x3722640()*0.237921);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373f170() {
   return (neuron0x3722980()*-0.126239);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373f1b0() {
   return (neuron0x3722cc0()*-0.705417);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373f1f0() {
   return (neuron0x3723000()*-0.293099);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373f230() {
   return (neuron0x3723340()*0.334783);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373f270() {
   return (neuron0x3723680()*-0.0608034);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373f2b0() {
   return (neuron0x37239c0()*0.462644);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373ed40() {
   return (neuron0x3723d00()*0.457229);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373ed80() {
   return (neuron0x3724260()*0.162763);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373f400() {
   return (neuron0x37245a0()*-0.0683728);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373f440() {
   return (neuron0x37248e0()*0.214035);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373f480() {
   return (neuron0x3724c20()*-0.120092);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373f4c0() {
   return (neuron0x3724f60()*-0.152226);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373f500() {
   return (neuron0x37252a0()*0.41112);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373f540() {
   return (neuron0x37255e0()*0.0594946);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373f8c0() {
   return (neuron0x3720990()*0.908221);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373f900() {
   return (neuron0x3720c40()*-0.0106078);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373f940() {
   return (neuron0x3720f80()*-0.226968);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373f980() {
   return (neuron0x37212c0()*-0.187597);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373f9c0() {
   return (neuron0x3721600()*0.0435211);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373fa00() {
   return (neuron0x3721940()*-0.0389318);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373fa40() {
   return (neuron0x3721c80()*-0.0406924);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373fa80() {
   return (neuron0x3721fc0()*0.0801429);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373fac0() {
   return (neuron0x3722300()*-0.0210101);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373fb00() {
   return (neuron0x3722640()*-0.00908192);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373fb40() {
   return (neuron0x3722980()*-0.00922232);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373fb80() {
   return (neuron0x3722cc0()*-0.420896);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373fbc0() {
   return (neuron0x3723000()*-0.0138463);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373fc00() {
   return (neuron0x3723340()*-0.00412981);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373fc40() {
   return (neuron0x3723680()*-0.0392814);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373fc80() {
   return (neuron0x37239c0()*-0.0967205);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373f710() {
   return (neuron0x3723d00()*-0.00334547);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373f750() {
   return (neuron0x3724260()*-0.0222238);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373fdd0() {
   return (neuron0x37245a0()*-0.0592848);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373fe10() {
   return (neuron0x37248e0()*-0.0428048);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373fe50() {
   return (neuron0x3724c20()*-0.00963216);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373fe90() {
   return (neuron0x3724f60()*-0.0442607);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373fed0() {
   return (neuron0x37252a0()*-0.0299324);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373ff10() {
   return (neuron0x37255e0()*0.10394);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740290() {
   return (neuron0x3720990()*0.0764607);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37402d0() {
   return (neuron0x3720c40()*-0.00179677);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740310() {
   return (neuron0x3720f80()*-0.0343031);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740350() {
   return (neuron0x37212c0()*2.18143);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740390() {
   return (neuron0x3721600()*0.00612947);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37403d0() {
   return (neuron0x3721940()*-0.00682361);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740410() {
   return (neuron0x3721c80()*0.00366603);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740450() {
   return (neuron0x3721fc0()*0.00370372);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740490() {
   return (neuron0x3722300()*-0.00493171);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37404d0() {
   return (neuron0x3722640()*0.00358059);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740510() {
   return (neuron0x3722980()*-0.00727083);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740550() {
   return (neuron0x3722cc0()*-0.280802);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740590() {
   return (neuron0x3723000()*0.00672935);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37405d0() {
   return (neuron0x3723340()*-0.0150023);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740610() {
   return (neuron0x3723680()*-0.0025883);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740650() {
   return (neuron0x37239c0()*-0.000558202);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37400e0() {
   return (neuron0x3723d00()*-0.0102859);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740120() {
   return (neuron0x3724260()*0.000567928);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37407a0() {
   return (neuron0x37245a0()*0.0101074);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37407e0() {
   return (neuron0x37248e0()*-0.000403023);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740820() {
   return (neuron0x3724c20()*-0.00231744);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740860() {
   return (neuron0x3724f60()*0.000684751);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37408a0() {
   return (neuron0x37252a0()*0.00102872);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37408e0() {
   return (neuron0x37255e0()*0.00174586);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740c60() {
   return (neuron0x3720990()*0.275503);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740ca0() {
   return (neuron0x3720c40()*0.259505);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740ce0() {
   return (neuron0x3720f80()*0.795315);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740d20() {
   return (neuron0x37212c0()*0.339698);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740d60() {
   return (neuron0x3721600()*-0.433749);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740da0() {
   return (neuron0x3721940()*0.803085);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740de0() {
   return (neuron0x3721c80()*0.556696);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740e20() {
   return (neuron0x3721fc0()*0.0780944);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740e60() {
   return (neuron0x3722300()*-0.392584);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740ea0() {
   return (neuron0x3722640()*0.391807);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740ee0() {
   return (neuron0x3722980()*-0.187979);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740f20() {
   return (neuron0x3722cc0()*-0.504984);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740f60() {
   return (neuron0x3723000()*0.111233);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740fa0() {
   return (neuron0x3723340()*-0.157963);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740fe0() {
   return (neuron0x3723680()*-0.33108);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3741020() {
   return (neuron0x37239c0()*-0.487168);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740ab0() {
   return (neuron0x3723d00()*0.146087);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740af0() {
   return (neuron0x3724260()*0.524527);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3741170() {
   return (neuron0x37245a0()*-0.237971);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37411b0() {
   return (neuron0x37248e0()*0.225656);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37411f0() {
   return (neuron0x3724c20()*0.551779);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3741230() {
   return (neuron0x3724f60()*0.112834);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3741270() {
   return (neuron0x37252a0()*-0.664153);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37412b0() {
   return (neuron0x37255e0()*-0.0481746);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3741630() {
   return (neuron0x3720990()*0.269946);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3741670() {
   return (neuron0x3720c40()*-0.00405653);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37416b0() {
   return (neuron0x3720f80()*-0.233212);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37416f0() {
   return (neuron0x37212c0()*0.768164);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3741730() {
   return (neuron0x3721600()*0.0435566);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3741770() {
   return (neuron0x3721940()*0.0140325);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37417b0() {
   return (neuron0x3721c80()*0.0111749);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37417f0() {
   return (neuron0x3721fc0()*-0.00805028);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3741830() {
   return (neuron0x3722300()*0.00212329);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3741870() {
   return (neuron0x3722640()*0.000777304);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37418b0() {
   return (neuron0x3722980()*-0.0230457);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37418f0() {
   return (neuron0x3722cc0()*-0.653744);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3741930() {
   return (neuron0x3723000()*-0.00136892);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3741970() {
   return (neuron0x3723340()*-0.00424489);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37419b0() {
   return (neuron0x3723680()*-0.00640808);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37419f0() {
   return (neuron0x37239c0()*0.000416498);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3741480() {
   return (neuron0x3723d00()*-0.0050389);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37414c0() {
   return (neuron0x3724260()*0.012181);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3741b40() {
   return (neuron0x37245a0()*-0.0361805);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3741b80() {
   return (neuron0x37248e0()*0.00216528);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3741bc0() {
   return (neuron0x3724c20()*0.0251855);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3741c00() {
   return (neuron0x3724f60()*0.0168851);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3741c40() {
   return (neuron0x37252a0()*-0.0058907);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3741c80() {
   return (neuron0x37255e0()*-0.0244468);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742000() {
   return (neuron0x3720990()*-0.157592);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742040() {
   return (neuron0x3720c40()*-0.110576);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742080() {
   return (neuron0x3720f80()*-0.0640153);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37420c0() {
   return (neuron0x37212c0()*0.0928827);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742100() {
   return (neuron0x3721600()*0.00859611);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742140() {
   return (neuron0x3721940()*-0.0149494);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742180() {
   return (neuron0x3721c80()*-0.0964922);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37421c0() {
   return (neuron0x3721fc0()*-0.0752703);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742200() {
   return (neuron0x3722300()*-0.0453409);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742240() {
   return (neuron0x3722640()*0.0160312);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742280() {
   return (neuron0x3722980()*0.0505271);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37422c0() {
   return (neuron0x3722cc0()*0.149723);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742300() {
   return (neuron0x3723000()*-0.0154785);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742340() {
   return (neuron0x3723340()*-0.0248488);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742380() {
   return (neuron0x3723680()*-0.0250972);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37423c0() {
   return (neuron0x37239c0()*0.0235305);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3741e50() {
   return (neuron0x3723d00()*0.00313675);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3741e90() {
   return (neuron0x3724260()*0.0670052);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742510() {
   return (neuron0x37245a0()*0.00961305);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742550() {
   return (neuron0x37248e0()*-0.0441416);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742590() {
   return (neuron0x3724c20()*-0.0169901);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37425d0() {
   return (neuron0x3724f60()*0.0129764);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742610() {
   return (neuron0x37252a0()*0.0472342);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742650() {
   return (neuron0x37255e0()*-1.02415);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37429d0() {
   return (neuron0x3720990()*-0.128324);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742a10() {
   return (neuron0x3720c40()*-0.00415835);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742a50() {
   return (neuron0x3720f80()*0.485692);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742a90() {
   return (neuron0x37212c0()*0.0386478);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742ad0() {
   return (neuron0x3721600()*0.00250042);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742b10() {
   return (neuron0x3721940()*-0.00385288);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742b50() {
   return (neuron0x3721c80()*0.0124757);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742b90() {
   return (neuron0x3721fc0()*-0.0117444);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742bd0() {
   return (neuron0x3722300()*-0.0229903);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742c10() {
   return (neuron0x3722640()*-0.0185932);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742c50() {
   return (neuron0x3722980()*-0.00253961);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742c90() {
   return (neuron0x3722cc0()*-0.112783);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742cd0() {
   return (neuron0x3723000()*0.00443885);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742d10() {
   return (neuron0x3723340()*0.0590226);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742d50() {
   return (neuron0x3723680()*0.000402445);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742d90() {
   return (neuron0x37239c0()*0.0246546);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742820() {
   return (neuron0x3723d00()*-0.0227675);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742860() {
   return (neuron0x3724260()*-0.0230467);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742ee0() {
   return (neuron0x37245a0()*-0.00749142);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742f20() {
   return (neuron0x37248e0()*0.00176454);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742f60() {
   return (neuron0x3724c20()*-0.0146881);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742fa0() {
   return (neuron0x3724f60()*-0.00273158);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742fe0() {
   return (neuron0x37252a0()*0.00983579);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3743020() {
   return (neuron0x37255e0()*-5.32329);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372bad0() {
   return (neuron0x3720990()*-0.590543);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372bb10() {
   return (neuron0x3720c40()*-0.00976476);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372bb50() {
   return (neuron0x3720f80()*-0.147653);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372bb90() {
   return (neuron0x37212c0()*-0.00118668);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372bbd0() {
   return (neuron0x3721600()*-0.0072192);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372bc10() {
   return (neuron0x3721940()*-0.00370109);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372bc50() {
   return (neuron0x3721c80()*0.00328089);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372bc90() {
   return (neuron0x3721fc0()*-0.000790983);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37437b0() {
   return (neuron0x3722300()*-0.0075678);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37437f0() {
   return (neuron0x3722640()*-0.0215424);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3743830() {
   return (neuron0x3722980()*0.0160221);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3743870() {
   return (neuron0x3722cc0()*0.682521);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37438b0() {
   return (neuron0x3723000()*-0.0209887);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37438f0() {
   return (neuron0x3723340()*0.0245507);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3743930() {
   return (neuron0x3723680()*-0.0228754);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3743970() {
   return (neuron0x37239c0()*-0.00841994);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37431f0() {
   return (neuron0x3723d00()*-0.0606206);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3743230() {
   return (neuron0x3724260()*-0.0230225);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3743ac0() {
   return (neuron0x37245a0()*-0.0249234);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3743b00() {
   return (neuron0x37248e0()*-0.00904486);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3743b40() {
   return (neuron0x3724c20()*-0.00137406);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3743b80() {
   return (neuron0x3724f60()*-0.0235921);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3743bc0() {
   return (neuron0x37252a0()*0.0138003);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3743c00() {
   return (neuron0x37255e0()*3.40551);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3743f80() {
   return (neuron0x3720990()*-0.229213);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3743fc0() {
   return (neuron0x3720c40()*0.832526);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3744000() {
   return (neuron0x3720f80()*-0.413319);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3744040() {
   return (neuron0x37212c0()*-0.115317);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3744080() {
   return (neuron0x3721600()*-0.331894);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37440c0() {
   return (neuron0x3721940()*0.629985);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3744100() {
   return (neuron0x3721c80()*-0.0658886);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3744140() {
   return (neuron0x3721fc0()*-0.561182);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3744180() {
   return (neuron0x3722300()*0.211865);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37441c0() {
   return (neuron0x3722640()*-0.365954);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3744200() {
   return (neuron0x3722980()*-0.0956771);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3744240() {
   return (neuron0x3722cc0()*0.663957);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3744280() {
   return (neuron0x3723000()*-0.0714407);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37442c0() {
   return (neuron0x3723340()*-0.421623);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3744300() {
   return (neuron0x3723680()*0.590306);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3744340() {
   return (neuron0x37239c0()*0.0907705);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3743dd0() {
   return (neuron0x3723d00()*-0.309493);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3743e10() {
   return (neuron0x3724260()*-0.202736);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3744490() {
   return (neuron0x37245a0()*-0.718635);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37444d0() {
   return (neuron0x37248e0()*-0.269033);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3744510() {
   return (neuron0x3724c20()*0.160128);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3744550() {
   return (neuron0x3724f60()*-0.130558);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3744590() {
   return (neuron0x37252a0()*0.362546);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37445d0() {
   return (neuron0x37255e0()*0.305826);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3744950() {
   return (neuron0x3720990()*0.17535);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3744990() {
   return (neuron0x3720c40()*0.0329994);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37449d0() {
   return (neuron0x3720f80()*0.427995);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3744a10() {
   return (neuron0x37212c0()*0.958907);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3744a50() {
   return (neuron0x3721600()*-0.0574482);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3744a90() {
   return (neuron0x3721940()*0.176469);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3744ad0() {
   return (neuron0x3721c80()*0.158004);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3744b10() {
   return (neuron0x3721fc0()*0.0087984);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3744b50() {
   return (neuron0x3722300()*-0.053459);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3744b90() {
   return (neuron0x3722640()*-0.0542198);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3744bd0() {
   return (neuron0x3722980()*-0.124713);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3744c10() {
   return (neuron0x3722cc0()*-0.0506151);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3744c50() {
   return (neuron0x3723000()*0.0841906);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3744c90() {
   return (neuron0x3723340()*0.0022657);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3744cd0() {
   return (neuron0x3723680()*0.0117291);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3744d10() {
   return (neuron0x37239c0()*0.0160234);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37447a0() {
   return (neuron0x3723d00()*-0.0956461);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37447e0() {
   return (neuron0x3724260()*0.0632358);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735310() {
   return (neuron0x37245a0()*0.0159087);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735350() {
   return (neuron0x37248e0()*-0.144448);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735390() {
   return (neuron0x3724c20()*0.0436925);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37353d0() {
   return (neuron0x3724f60()*0.135323);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735410() {
   return (neuron0x37252a0()*-0.0910619);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735450() {
   return (neuron0x37255e0()*-0.0188608);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37357d0() {
   return (neuron0x3720990()*-0.684814);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735810() {
   return (neuron0x3720c40()*-0.194709);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735850() {
   return (neuron0x3720f80()*0.444454);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735890() {
   return (neuron0x37212c0()*0.485798);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37358d0() {
   return (neuron0x3721600()*0.0312875);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735910() {
   return (neuron0x3721940()*0.679713);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735950() {
   return (neuron0x3721c80()*-1.09499);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735990() {
   return (neuron0x3721fc0()*-0.205957);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37359d0() {
   return (neuron0x3722300()*0.0671368);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735a10() {
   return (neuron0x3722640()*-0.0527347);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735a50() {
   return (neuron0x3722980()*0.174068);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735a90() {
   return (neuron0x3722cc0()*0.352432);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735ad0() {
   return (neuron0x3723000()*0.606344);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735b10() {
   return (neuron0x3723340()*0.0697739);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735b50() {
   return (neuron0x3723680()*-0.720674);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735b90() {
   return (neuron0x37239c0()*-0.248098);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735620() {
   return (neuron0x3723d00()*-0.119076);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735660() {
   return (neuron0x3724260()*0.103935);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735ce0() {
   return (neuron0x37245a0()*0.0795906);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735d20() {
   return (neuron0x37248e0()*0.0959185);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735d60() {
   return (neuron0x3724c20()*0.346889);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735da0() {
   return (neuron0x3724f60()*0.0213157);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735de0() {
   return (neuron0x37252a0()*-0.111366);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735e20() {
   return (neuron0x37255e0()*0.289151);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37361a0() {
   return (neuron0x3720990()*-0.167782);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37361e0() {
   return (neuron0x3720c40()*-0.467652);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3736220() {
   return (neuron0x3720f80()*0.828343);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3736260() {
   return (neuron0x37212c0()*-0.310544);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37362a0() {
   return (neuron0x3721600()*-0.230906);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37362e0() {
   return (neuron0x3721940()*-0.155776);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3736320() {
   return (neuron0x3721c80()*-0.0975458);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3736360() {
   return (neuron0x3721fc0()*0.383953);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37363a0() {
   return (neuron0x3722300()*0.0245009);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37363e0() {
   return (neuron0x3722640()*0.21132);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3736420() {
   return (neuron0x3722980()*0.231842);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3736460() {
   return (neuron0x3722cc0()*-1.2139);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37364a0() {
   return (neuron0x3723000()*-0.0811827);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37364e0() {
   return (neuron0x3723340()*-0.0501637);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3736520() {
   return (neuron0x3723680()*0.156446);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3736560() {
   return (neuron0x37239c0()*-0.0283443);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735ff0() {
   return (neuron0x3723d00()*0.114692);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3736030() {
   return (neuron0x3724260()*0.109249);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37366b0() {
   return (neuron0x37245a0()*0.61613);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37366f0() {
   return (neuron0x37248e0()*0.187907);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3736730() {
   return (neuron0x3724c20()*-0.149593);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3736770() {
   return (neuron0x3724f60()*0.406747);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37367b0() {
   return (neuron0x37252a0()*0.0762414);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37367f0() {
   return (neuron0x37255e0()*-0.823094);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3736b70() {
   return (neuron0x3720990()*0.287759);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3736bb0() {
   return (neuron0x3720c40()*-0.458489);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3736bf0() {
   return (neuron0x3720f80()*-0.368579);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3736c30() {
   return (neuron0x37212c0()*0.162719);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3736c70() {
   return (neuron0x3721600()*-0.159928);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3736cb0() {
   return (neuron0x3721940()*-0.14308);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3736cf0() {
   return (neuron0x3721c80()*0.14058);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3736d30() {
   return (neuron0x3721fc0()*-0.706441);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3736d70() {
   return (neuron0x3722300()*-0.221204);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3736db0() {
   return (neuron0x3722640()*-0.229814);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3736df0() {
   return (neuron0x3722980()*0.112446);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3736e30() {
   return (neuron0x3722cc0()*-0.994024);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3736e70() {
   return (neuron0x3723000()*0.196726);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3736eb0() {
   return (neuron0x3723340()*-0.00816101);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3736ef0() {
   return (neuron0x3723680()*0.241963);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3736f30() {
   return (neuron0x37239c0()*-0.350427);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37369c0() {
   return (neuron0x3723d00()*-0.105317);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3736a00() {
   return (neuron0x3724260()*-0.100827);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737080() {
   return (neuron0x37245a0()*0.0299053);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37370c0() {
   return (neuron0x37248e0()*0.219604);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737100() {
   return (neuron0x3724c20()*-0.376547);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737140() {
   return (neuron0x3724f60()*-0.119446);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737180() {
   return (neuron0x37252a0()*0.23139);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37371c0() {
   return (neuron0x37255e0()*-0.0521508);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749090() {
   return (neuron0x3720990()*0.0178677);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37490d0() {
   return (neuron0x3720c40()*0.0128313);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749110() {
   return (neuron0x3720f80()*0.716287);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749150() {
   return (neuron0x37212c0()*-0.0412984);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749190() {
   return (neuron0x3721600()*-0.00154931);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37491d0() {
   return (neuron0x3721940()*0.00343612);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749210() {
   return (neuron0x3721c80()*-0.0252705);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749250() {
   return (neuron0x3721fc0()*0.0117291);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749290() {
   return (neuron0x3722300()*0.0306784);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37492d0() {
   return (neuron0x3722640()*-0.00476433);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749310() {
   return (neuron0x3722980()*0.00594008);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749350() {
   return (neuron0x3722cc0()*0.211023);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749390() {
   return (neuron0x3723000()*-0.00266933);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37493d0() {
   return (neuron0x3723340()*-0.0278403);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749410() {
   return (neuron0x3723680()*-0.0246785);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749450() {
   return (neuron0x37239c0()*-0.00750143);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737200() {
   return (neuron0x3723d00()*-0.00772464);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737240() {
   return (neuron0x3724260()*0.0083895);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37495a0() {
   return (neuron0x37245a0()*0.01993);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37495e0() {
   return (neuron0x37248e0()*-0.0172815);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749620() {
   return (neuron0x3724c20()*0.0288065);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749660() {
   return (neuron0x3724f60()*-0.0161475);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37496a0() {
   return (neuron0x37252a0()*0.022255);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37496e0() {
   return (neuron0x37255e0()*3.69286);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749a60() {
   return (neuron0x3720990()*-0.421772);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749aa0() {
   return (neuron0x3720c40()*0.0102701);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749ae0() {
   return (neuron0x3720f80()*0.0253332);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749b20() {
   return (neuron0x37212c0()*-2.5167);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749b60() {
   return (neuron0x3721600()*-0.00384637);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749ba0() {
   return (neuron0x3721940()*-0.0217856);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749be0() {
   return (neuron0x3721c80()*-0.0261282);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749c20() {
   return (neuron0x3721fc0()*0.00301076);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749c60() {
   return (neuron0x3722300()*0.029449);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749ca0() {
   return (neuron0x3722640()*-0.00287301);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749ce0() {
   return (neuron0x3722980()*-0.00219421);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749d20() {
   return (neuron0x3722cc0()*0.32614);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749d60() {
   return (neuron0x3723000()*0.0321855);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749da0() {
   return (neuron0x3723340()*-0.0214166);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749de0() {
   return (neuron0x3723680()*-0.0193474);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749e20() {
   return (neuron0x37239c0()*-0.0178612);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37498b0() {
   return (neuron0x3723d00()*-0.0210686);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37498f0() {
   return (neuron0x3724260()*0.0142025);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749f70() {
   return (neuron0x37245a0()*-0.00321157);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749fb0() {
   return (neuron0x37248e0()*-0.00294821);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749ff0() {
   return (neuron0x3724c20()*0.0027085);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374a030() {
   return (neuron0x3724f60()*-0.0124609);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374a070() {
   return (neuron0x37252a0()*0.00064598);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374a0b0() {
   return (neuron0x37255e0()*0.028305);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374a430() {
   return (neuron0x3720990()*-0.184256);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374a470() {
   return (neuron0x3720c40()*-0.0345638);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374a4b0() {
   return (neuron0x3720f80()*0.596078);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374a4f0() {
   return (neuron0x37212c0()*-0.389839);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374a530() {
   return (neuron0x3721600()*0.331307);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374a570() {
   return (neuron0x3721940()*0.0249686);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374a5b0() {
   return (neuron0x3721c80()*0.0239566);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374a5f0() {
   return (neuron0x3721fc0()*-0.106364);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374a630() {
   return (neuron0x3722300()*0.15778);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374a670() {
   return (neuron0x3722640()*0.0354263);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374a6b0() {
   return (neuron0x3722980()*-0.10306);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374a6f0() {
   return (neuron0x3722cc0()*0.75317);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374a730() {
   return (neuron0x3723000()*0.450726);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374a770() {
   return (neuron0x3723340()*-0.025161);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374a7b0() {
   return (neuron0x3723680()*0.0742341);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374a7f0() {
   return (neuron0x37239c0()*0.00313919);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374a280() {
   return (neuron0x3723d00()*-0.29375);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374a2c0() {
   return (neuron0x3724260()*0.166595);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374a940() {
   return (neuron0x37245a0()*-0.0261608);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374a980() {
   return (neuron0x37248e0()*0.00251821);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374a9c0() {
   return (neuron0x3724c20()*0.00543291);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374aa00() {
   return (neuron0x3724f60()*-0.0957008);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374aa40() {
   return (neuron0x37252a0()*-0.0542633);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374aa80() {
   return (neuron0x37255e0()*-0.0535111);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374ae00() {
   return (neuron0x3720990()*-0.287947);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374ae40() {
   return (neuron0x3720c40()*-0.294682);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374ae80() {
   return (neuron0x3720f80()*-0.143647);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374aec0() {
   return (neuron0x37212c0()*-0.754692);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374af00() {
   return (neuron0x3721600()*-0.210889);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374af40() {
   return (neuron0x3721940()*0.143271);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374af80() {
   return (neuron0x3721c80()*-0.338343);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374afc0() {
   return (neuron0x3721fc0()*-0.117348);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374b000() {
   return (neuron0x3722300()*-0.507876);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374b040() {
   return (neuron0x3722640()*-0.143534);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374b080() {
   return (neuron0x3722980()*0.381482);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374b0c0() {
   return (neuron0x3722cc0()*-0.184045);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374b100() {
   return (neuron0x3723000()*-0.0830098);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374b140() {
   return (neuron0x3723340()*-0.192731);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374b180() {
   return (neuron0x3723680()*0.0165734);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374b1c0() {
   return (neuron0x37239c0()*0.2542);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374ac50() {
   return (neuron0x3723d00()*0.3452);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374ac90() {
   return (neuron0x3724260()*-0.266616);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374b310() {
   return (neuron0x37245a0()*-0.0498802);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374b350() {
   return (neuron0x37248e0()*0.848266);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374b390() {
   return (neuron0x3724c20()*-0.089665);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374b3d0() {
   return (neuron0x3724f60()*-0.222533);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374b410() {
   return (neuron0x37252a0()*0.542394);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374b450() {
   return (neuron0x37255e0()*0.446603);
}

double NNfunction_ns_chiMinus1_dL::synapse0x34eb2c0() {
   return (neuron0x3725a50()*0.0218451);
}

double NNfunction_ns_chiMinus1_dL::synapse0x34eb300() {
   return (neuron0x3726290()*0.0794531);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3727e00() {
   return (neuron0x3726d70()*-0.0295541);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3727e40() {
   return (neuron0x3726810()*0.214692);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37298d0() {
   return (neuron0x3727b50()*-0.946142);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3729910() {
   return (neuron0x3729620()*0.0707272);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372a6a0() {
   return (neuron0x372a3f0()*-0.257183);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372a6e0() {
   return (neuron0x372adc0()*0.742027);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372b070() {
   return (neuron0x372b790()*0.0432779);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372b0b0() {
   return (neuron0x372c270()*-0.499453);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372ba40() {
   return (neuron0x372cc40()*-1.48205);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372ba80() {
   return (neuron0x3729d20()*0.227919);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372c520() {
   return (neuron0x372e7f0()*-1.72078);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372c560() {
   return (neuron0x372f1c0()*-0.0351038);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372cef0() {
   return (neuron0x372fb90()*-0.430559);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372cf30() {
   return (neuron0x3730560()*-10.5584);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3729fd0() {
   return (neuron0x3732370()*-0.00802779);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372a010() {
   return (neuron0x3732650()*1.44242);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372eaa0() {
   return (neuron0x3733020()*-0.0579643);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372eae0() {
   return (neuron0x37339f0()*-1.09395);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372f470() {
   return (neuron0x37343c0()*1.78018);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372f4b0() {
   return (neuron0x3734d90()*0.976421);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372fe40() {
   return (neuron0x372d8e0()*-0.624502);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372fe80() {
   return (neuron0x372e2b0()*-0.0188066);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3730810() {
   return (neuron0x3737b20()*0.0306804);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3730850() {
   return (neuron0x37384f0()*-0.16703);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37238a0() {
   return (neuron0x3738ec0()*0.946555);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37238e0() {
   return (neuron0x3739890()*0.226592);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3732900() {
   return (neuron0x373a260()*0.509204);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3732940() {
   return (neuron0x373ac30()*-0.0883782);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37332d0() {
   return (neuron0x373b600()*3.12335);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3733310() {
   return (neuron0x373bfd0()*0.0725908);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3733ca0() {
   return (neuron0x3732060()*-0.0766814);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3733ce0() {
   return (neuron0x373ebb0()*-0.1048);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3734670() {
   return (neuron0x373f580()*0.124996);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37346b0() {
   return (neuron0x373ff50()*-0.285965);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735040() {
   return (neuron0x3740920()*-0.0853334);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735080() {
   return (neuron0x37412f0()*-0.527569);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372db90() {
   return (neuron0x3741cc0()*0.684113);
}

double NNfunction_ns_chiMinus1_dL::synapse0x372dbd0() {
   return (neuron0x3742690()*-1.1618);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737440() {
   return (neuron0x3743060()*-2.58749);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737480() {
   return (neuron0x3743c40()*0.0351796);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737dd0() {
   return (neuron0x3744610()*0.423897);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3737e10() {
   return (neuron0x3735490()*0.0314708);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37387a0() {
   return (neuron0x3735e60()*-0.0528257);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37387e0() {
   return (neuron0x3736830()*0.0535226);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739170() {
   return (neuron0x3748e70()*1.64417);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37391b0() {
   return (neuron0x3749720()*0.441096);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739b40() {
   return (neuron0x374a0f0()*-0.445189);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3739b80() {
   return (neuron0x374aac0()*0.0551347);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373c280() {
   return (neuron0x3725a50()*0.0360276);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373c2c0() {
   return (neuron0x3726290()*-0.0367709);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3731840() {
   return (neuron0x3726d70()*-0.0261074);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3731880() {
   return (neuron0x3726810()*0.145351);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373ee60() {
   return (neuron0x3727b50()*0.182022);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373eea0() {
   return (neuron0x3729620()*0.152499);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373f830() {
   return (neuron0x372a3f0()*-0.220843);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373f870() {
   return (neuron0x372adc0()*-0.197183);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740200() {
   return (neuron0x372b790()*-0.0133133);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740240() {
   return (neuron0x372c270()*-0.0321863);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740bd0() {
   return (neuron0x372cc40()*-0.157193);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3740c10() {
   return (neuron0x3729d20()*0.616563);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37415a0() {
   return (neuron0x372e7f0()*-0.140666);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37415e0() {
   return (neuron0x372f1c0()*0.0479047);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3741f70() {
   return (neuron0x372fb90()*0.167642);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3741fb0() {
   return (neuron0x3730560()*-0.373407);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742940() {
   return (neuron0x3732370()*-0.118785);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3742980() {
   return (neuron0x3732650()*-0.209181);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3743310() {
   return (neuron0x3733020()*-0.645674);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3743350() {
   return (neuron0x37339f0()*-0.301315);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3743ef0() {
   return (neuron0x37343c0()*-0.691861);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3743f30() {
   return (neuron0x3734d90()*0.345414);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37448c0() {
   return (neuron0x372d8e0()*0.163446);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3744900() {
   return (neuron0x372e2b0()*0.00685312);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735740() {
   return (neuron0x3737b20()*0.0308377);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3735780() {
   return (neuron0x37384f0()*-2.40555);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3736110() {
   return (neuron0x3738ec0()*-0.475783);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3736150() {
   return (neuron0x3739890()*-0.0680345);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3736ae0() {
   return (neuron0x373a260()*0.064088);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3736b20() {
   return (neuron0x373ac30()*-0.0557796);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749000() {
   return (neuron0x373b600()*0.113249);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749040() {
   return (neuron0x373bfd0()*0.0602276);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37499d0() {
   return (neuron0x3732060()*0.00638046);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3749a10() {
   return (neuron0x373ebb0()*-0.046876);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374a3a0() {
   return (neuron0x373f580()*0.387332);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374a3e0() {
   return (neuron0x373ff50()*-0.91892);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374ad70() {
   return (neuron0x3740920()*-0.0477614);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374adb0() {
   return (neuron0x37412f0()*0.535709);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3725d00() {
   return (neuron0x3741cc0()*-0.120446);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3725d40() {
   return (neuron0x3742690()*-0.284452);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373a510() {
   return (neuron0x3743060()*0.0340323);
}

double NNfunction_ns_chiMinus1_dL::synapse0x373a550() {
   return (neuron0x3743c40()*0.0482397);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374b490() {
   return (neuron0x3744610()*0.220401);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374b4d0() {
   return (neuron0x3735490()*0.0267454);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374b510() {
   return (neuron0x3735e60()*0.0439089);
}

double NNfunction_ns_chiMinus1_dL::synapse0x374b550() {
   return (neuron0x3736830()*-0.0183506);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3752400() {
   return (neuron0x3748e70()*-0.0816119);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3752440() {
   return (neuron0x3749720()*0.608863);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3752480() {
   return (neuron0x374a0f0()*-0.032335);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37524c0() {
   return (neuron0x374aac0()*0.041497);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3752840() {
   return (neuron0x3725a50()*-0.146874);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3752880() {
   return (neuron0x3726290()*-0.0731865);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37528c0() {
   return (neuron0x3726d70()*-0.122163);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3752900() {
   return (neuron0x3726810()*-0.538805);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3752940() {
   return (neuron0x3727b50()*-0.0296229);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3752980() {
   return (neuron0x3729620()*-0.0191792);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37529c0() {
   return (neuron0x372a3f0()*-0.233886);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3752a00() {
   return (neuron0x372adc0()*-0.658654);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3752a40() {
   return (neuron0x372b790()*-0.869687);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3752a80() {
   return (neuron0x372c270()*-0.326491);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3752ac0() {
   return (neuron0x372cc40()*-0.962093);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3752b00() {
   return (neuron0x3729d20()*0.811923);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3752b40() {
   return (neuron0x372e7f0()*-0.210754);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3752b80() {
   return (neuron0x372f1c0()*0.13251);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3752bc0() {
   return (neuron0x372fb90()*-0.234624);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3752c00() {
   return (neuron0x3730560()*0.373922);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3752690() {
   return (neuron0x3732370()*0.111118);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37526d0() {
   return (neuron0x3732650()*-0.317907);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3752d50() {
   return (neuron0x3733020()*-0.553224);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3752d90() {
   return (neuron0x37339f0()*0.0286113);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3752dd0() {
   return (neuron0x37343c0()*-0.0831356);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3752e10() {
   return (neuron0x3734d90()*-0.202115);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3752e50() {
   return (neuron0x372d8e0()*-0.473885);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3752e90() {
   return (neuron0x372e2b0()*-0.349107);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3752ed0() {
   return (neuron0x3737b20()*-0.447922);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3752f10() {
   return (neuron0x37384f0()*-0.235409);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3752f50() {
   return (neuron0x3738ec0()*-0.284938);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3752f90() {
   return (neuron0x3739890()*-0.274663);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3752fd0() {
   return (neuron0x373a260()*-0.490316);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753010() {
   return (neuron0x373ac30()*0.227134);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753050() {
   return (neuron0x373b600()*0.0769241);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753090() {
   return (neuron0x373bfd0()*-0.591072);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3752c40() {
   return (neuron0x3732060()*-0.690314);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3752c80() {
   return (neuron0x373ebb0()*-0.0543282);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3752cc0() {
   return (neuron0x373f580()*-0.839553);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3752d00() {
   return (neuron0x373ff50()*0.0552489);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37532e0() {
   return (neuron0x3740920()*-0.289067);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753320() {
   return (neuron0x37412f0()*0.143182);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753360() {
   return (neuron0x3741cc0()*-0.193605);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37533a0() {
   return (neuron0x3742690()*-0.357015);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37533e0() {
   return (neuron0x3743060()*-0.895353);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753420() {
   return (neuron0x3743c40()*-0.903845);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753460() {
   return (neuron0x3744610()*-0.196495);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37534a0() {
   return (neuron0x3735490()*-0.148197);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37534e0() {
   return (neuron0x3735e60()*0.571676);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753520() {
   return (neuron0x3736830()*-0.291047);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753560() {
   return (neuron0x3748e70()*-0.323447);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37535a0() {
   return (neuron0x3749720()*-0.637651);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37535e0() {
   return (neuron0x374a0f0()*0.198657);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753620() {
   return (neuron0x374aac0()*-0.740397);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37539a0() {
   return (neuron0x3725a50()*-0.0377695);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37539e0() {
   return (neuron0x3726290()*0.00884688);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753a20() {
   return (neuron0x3726d70()*0.00867266);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753a60() {
   return (neuron0x3726810()*-0.122925);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753aa0() {
   return (neuron0x3727b50()*-3.2614);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753ae0() {
   return (neuron0x3729620()*-0.351261);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753b20() {
   return (neuron0x372a3f0()*0.420139);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753b60() {
   return (neuron0x372adc0()*4.63785);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753ba0() {
   return (neuron0x372b790()*-0.0812627);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753be0() {
   return (neuron0x372c270()*3.6632);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753c20() {
   return (neuron0x372cc40()*14.0194);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753c60() {
   return (neuron0x3729d20()*-0.358197);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753ca0() {
   return (neuron0x372e7f0()*3.17287);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753ce0() {
   return (neuron0x372f1c0()*-0.000771562);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753d20() {
   return (neuron0x372fb90()*0.0664491);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753d60() {
   return (neuron0x3730560()*2.68583);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37537f0() {
   return (neuron0x3732370()*0.0258877);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753830() {
   return (neuron0x3732650()*-1.60603);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753eb0() {
   return (neuron0x3733020()*-0.000215288);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753ef0() {
   return (neuron0x37339f0()*0.351123);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753f30() {
   return (neuron0x37343c0()*-1.35318);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753f70() {
   return (neuron0x3734d90()*-0.445376);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753fb0() {
   return (neuron0x372d8e0()*0.616064);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753ff0() {
   return (neuron0x372e2b0()*-0.0676936);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754030() {
   return (neuron0x3737b20()*-0.00799508);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754070() {
   return (neuron0x37384f0()*1.10163);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37540b0() {
   return (neuron0x3738ec0()*-1.48332);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37540f0() {
   return (neuron0x3739890()*-0.0663383);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754130() {
   return (neuron0x373a260()*0.0689387);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754170() {
   return (neuron0x373ac30()*0.0750415);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37541b0() {
   return (neuron0x373b600()*0.811522);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37541f0() {
   return (neuron0x373bfd0()*-0.120667);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753da0() {
   return (neuron0x3732060()*-0.305221);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753de0() {
   return (neuron0x373ebb0()*0.0638651);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753e20() {
   return (neuron0x373f580()*-0.716499);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3753e60() {
   return (neuron0x373ff50()*0.564594);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754440() {
   return (neuron0x3740920()*0.0636699);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754480() {
   return (neuron0x37412f0()*-0.878575);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37544c0() {
   return (neuron0x3741cc0()*0.172437);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754500() {
   return (neuron0x3742690()*-1.99279);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754540() {
   return (neuron0x3743060()*-0.0444806);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754580() {
   return (neuron0x3743c40()*-0.0803051);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37545c0() {
   return (neuron0x3744610()*-0.360503);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754600() {
   return (neuron0x3735490()*-0.0392328);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754640() {
   return (neuron0x3735e60()*-0.0585318);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754680() {
   return (neuron0x3736830()*-0.074971);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37546c0() {
   return (neuron0x3748e70()*0.580144);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754700() {
   return (neuron0x3749720()*-0.405991);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754740() {
   return (neuron0x374a0f0()*0.383445);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754780() {
   return (neuron0x374aac0()*-0.0102461);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754b00() {
   return (neuron0x3725a50()*-0.218476);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754b40() {
   return (neuron0x3726290()*0.35608);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754b80() {
   return (neuron0x3726d70()*0.183034);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754bc0() {
   return (neuron0x3726810()*-0.502905);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754c00() {
   return (neuron0x3727b50()*0.853826);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754c40() {
   return (neuron0x3729620()*1.91165);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754c80() {
   return (neuron0x372a3f0()*-2.53212);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754cc0() {
   return (neuron0x372adc0()*0.354842);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754d00() {
   return (neuron0x372b790()*0.287281);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754d40() {
   return (neuron0x372c270()*-0.418258);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754d80() {
   return (neuron0x372cc40()*1.75125);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754dc0() {
   return (neuron0x3729d20()*4.42212);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754e00() {
   return (neuron0x372e7f0()*-0.133409);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754e40() {
   return (neuron0x372f1c0()*-0.329106);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754e80() {
   return (neuron0x372fb90()*-3.97068);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754ec0() {
   return (neuron0x3730560()*1.73478);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754950() {
   return (neuron0x3732370()*-1.94788);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754990() {
   return (neuron0x3732650()*0.278254);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3755010() {
   return (neuron0x3733020()*-1.36027);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3755050() {
   return (neuron0x37339f0()*-3.11388);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3755090() {
   return (neuron0x37343c0()*-1.58266);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37550d0() {
   return (neuron0x3734d90()*2.07);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3755110() {
   return (neuron0x372d8e0()*0.977905);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3755150() {
   return (neuron0x372e2b0()*0.476405);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3755190() {
   return (neuron0x3737b20()*-0.56351);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37551d0() {
   return (neuron0x37384f0()*-3.45867);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3755210() {
   return (neuron0x3738ec0()*-1.65962);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3755250() {
   return (neuron0x3739890()*0.79965);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3755290() {
   return (neuron0x373a260()*3.86098);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37552d0() {
   return (neuron0x373ac30()*0.273829);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3755310() {
   return (neuron0x373b600()*-0.15583);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3755350() {
   return (neuron0x373bfd0()*-0.281311);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754f00() {
   return (neuron0x3732060()*1.79499);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754f40() {
   return (neuron0x373ebb0()*0.186224);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754f80() {
   return (neuron0x373f580()*2.90649);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3754fc0() {
   return (neuron0x373ff50()*-6.34016);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37555a0() {
   return (neuron0x3740920()*0.192095);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37555e0() {
   return (neuron0x37412f0()*2.40163);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3755620() {
   return (neuron0x3741cc0()*1.34956);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3755660() {
   return (neuron0x3742690()*-1.85767);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37556a0() {
   return (neuron0x3743060()*0.446458);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37556e0() {
   return (neuron0x3743c40()*-0.232928);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3755720() {
   return (neuron0x3744610()*-0.565968);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3755760() {
   return (neuron0x3735490()*-0.199266);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37557a0() {
   return (neuron0x3735e60()*-0.305279);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37557e0() {
   return (neuron0x3736830()*0.340481);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3755820() {
   return (neuron0x3748e70()*-1.73931);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3755860() {
   return (neuron0x3749720()*3.67387);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37558a0() {
   return (neuron0x374a0f0()*-0.68788);
}

double NNfunction_ns_chiMinus1_dL::synapse0x37558e0() {
   return (neuron0x374aac0()*-0.245233);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3755b40() {
   return (neuron0x3751cc0()*4.64909);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3755b80() {
   return (neuron0x3752060()*-7.23062);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3755bc0() {
   return (neuron0x3752500()*-0.618049);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3755c00() {
   return (neuron0x3753660()*-4.26096);
}

double NNfunction_ns_chiMinus1_dL::synapse0x3755c40() {
   return (neuron0x37547c0()*-7.36892);
}

