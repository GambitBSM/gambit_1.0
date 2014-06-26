#include "NNfunction_NN_3_7.h"
#include <cmath>

double NNfunction_NN_3_7::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.7765)/15.2501;
   input1 = (in1 - -12.6749)/1023.19;
   input2 = (in2 - 507.883)/562.4;
   input3 = (in3 - -24.7613)/843.426;
   input4 = (in4 - 1058.5)/942.833;
   input5 = (in5 - 916.262)/957.783;
   input6 = (in6 - 921.521)/956.773;
   input7 = (in7 - 931.656)/939.027;
   input8 = (in8 - 930.341)/973.019;
   input9 = (in9 - 911.829)/957.741;
   input10 = (in10 - 970.628)/946.862;
   input11 = (in11 - 701.093)/864.997;
   input12 = (in12 - 728.725)/870.826;
   input13 = (in13 - 491.46)/513.156;
   input14 = (in14 - 730.073)/823.773;
   input15 = (in15 - 732.955)/826.104;
   input16 = (in16 - 542.202)/574.956;
   input17 = (in17 - 754.561)/895.283;
   input18 = (in18 - 753.281)/897.73;
   input19 = (in19 - 768.557)/858.533;
   input20 = (in20 - -4.45402)/494.476;
   input21 = (in21 - -10.9659)/1141.87;
   input22 = (in22 - 1.24157)/1193.03;
   input23 = (in23 - -60.5381)/217.278;
   switch(index) {
     case 0:
         return neuron0x325ba80();
     default:
         return 0.;
   }
}

double NNfunction_NN_3_7::Value(int index, double* input) {
   input0 = (input[0] - 23.7765)/15.2501;
   input1 = (input[1] - -12.6749)/1023.19;
   input2 = (input[2] - 507.883)/562.4;
   input3 = (input[3] - -24.7613)/843.426;
   input4 = (input[4] - 1058.5)/942.833;
   input5 = (input[5] - 916.262)/957.783;
   input6 = (input[6] - 921.521)/956.773;
   input7 = (input[7] - 931.656)/939.027;
   input8 = (input[8] - 930.341)/973.019;
   input9 = (input[9] - 911.829)/957.741;
   input10 = (input[10] - 970.628)/946.862;
   input11 = (input[11] - 701.093)/864.997;
   input12 = (input[12] - 728.725)/870.826;
   input13 = (input[13] - 491.46)/513.156;
   input14 = (input[14] - 730.073)/823.773;
   input15 = (input[15] - 732.955)/826.104;
   input16 = (input[16] - 542.202)/574.956;
   input17 = (input[17] - 754.561)/895.283;
   input18 = (input[18] - 753.281)/897.73;
   input19 = (input[19] - 768.557)/858.533;
   input20 = (input[20] - -4.45402)/494.476;
   input21 = (input[21] - -10.9659)/1141.87;
   input22 = (input[22] - 1.24157)/1193.03;
   input23 = (input[23] - -60.5381)/217.278;
   switch(index) {
     case 0:
         return neuron0x325ba80();
     default:
         return 0.;
   }
}

double NNfunction_NN_3_7::neuron0x3227b40() {
   return input0;
}

double NNfunction_NN_3_7::neuron0x3227e80() {
   return input1;
}

double NNfunction_NN_3_7::neuron0x32281c0() {
   return input2;
}

double NNfunction_NN_3_7::neuron0x3228500() {
   return input3;
}

double NNfunction_NN_3_7::neuron0x3228840() {
   return input4;
}

double NNfunction_NN_3_7::neuron0x3228b80() {
   return input5;
}

double NNfunction_NN_3_7::neuron0x3228ec0() {
   return input6;
}

double NNfunction_NN_3_7::neuron0x3229200() {
   return input7;
}

double NNfunction_NN_3_7::neuron0x3229540() {
   return input8;
}

double NNfunction_NN_3_7::neuron0x3229880() {
   return input9;
}

double NNfunction_NN_3_7::neuron0x3229bc0() {
   return input10;
}

double NNfunction_NN_3_7::neuron0x3229f00() {
   return input11;
}

double NNfunction_NN_3_7::neuron0x322a240() {
   return input12;
}

double NNfunction_NN_3_7::neuron0x322a580() {
   return input13;
}

double NNfunction_NN_3_7::neuron0x322a8c0() {
   return input14;
}

double NNfunction_NN_3_7::neuron0x322ac00() {
   return input15;
}

double NNfunction_NN_3_7::neuron0x322af40() {
   return input16;
}

double NNfunction_NN_3_7::neuron0x322b4a0() {
   return input17;
}

double NNfunction_NN_3_7::neuron0x322b6c0() {
   return input18;
}

double NNfunction_NN_3_7::neuron0x322ba00() {
   return input19;
}

double NNfunction_NN_3_7::neuron0x322bd40() {
   return input20;
}

double NNfunction_NN_3_7::neuron0x322c080() {
   return input21;
}

double NNfunction_NN_3_7::neuron0x322c3c0() {
   return input22;
}

double NNfunction_NN_3_7::neuron0x322c700() {
   return input23;
}

double NNfunction_NN_3_7::input0x322cba0() {
   double input = -2.84033;
   input += synapse0x2fe79b0();
   input += synapse0x3227a00();
   input += synapse0x3227a40();
   input += synapse0x322ce50();
   input += synapse0x322ce90();
   input += synapse0x322ced0();
   input += synapse0x322cf10();
   input += synapse0x322cf50();
   input += synapse0x322cf90();
   input += synapse0x322cfd0();
   input += synapse0x322d010();
   input += synapse0x322d050();
   input += synapse0x322d090();
   input += synapse0x322d0d0();
   input += synapse0x322d110();
   input += synapse0x322d150();
   input += synapse0x3227970();
   input += synapse0x32279b0();
   input += synapse0x2fd9210();
   input += synapse0x2fd9250();
   input += synapse0x322d3b0();
   input += synapse0x322d3f0();
   input += synapse0x322d430();
   input += synapse0x322d470();
   return input;
}

double NNfunction_NN_3_7::neuron0x322cba0() {
   double input = input0x322cba0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x322d4b0() {
   double input = 1.51207;
   input += synapse0x322d7f0();
   input += synapse0x322d830();
   input += synapse0x322d870();
   input += synapse0x322d8b0();
   input += synapse0x322d8f0();
   input += synapse0x322d930();
   input += synapse0x322d970();
   input += synapse0x322d9b0();
   input += synapse0x322d9f0();
   input += synapse0x322d2a0();
   input += synapse0x322d2e0();
   input += synapse0x322d320();
   input += synapse0x322d360();
   input += synapse0x322dc40();
   input += synapse0x322dc80();
   input += synapse0x322dcc0();
   input += synapse0x322d640();
   input += synapse0x322d680();
   input += synapse0x322de10();
   input += synapse0x322de50();
   input += synapse0x322de90();
   input += synapse0x322ded0();
   input += synapse0x322df10();
   input += synapse0x322df50();
   return input;
}

double NNfunction_NN_3_7::neuron0x322d4b0() {
   double input = input0x322d4b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x322df90() {
   double input = -0.645981;
   input += synapse0x322e2d0();
   input += synapse0x322e310();
   input += synapse0x322e350();
   input += synapse0x322e390();
   input += synapse0x322e3d0();
   input += synapse0x322e410();
   input += synapse0x322e450();
   input += synapse0x322e490();
   input += synapse0x322e4d0();
   input += synapse0x322e510();
   input += synapse0x322e550();
   input += synapse0x322e590();
   input += synapse0x322e5d0();
   input += synapse0x322e610();
   input += synapse0x322e650();
   input += synapse0x322e690();
   input += synapse0x322e120();
   input += synapse0x322e160();
   input += synapse0x2fe7080();
   input += synapse0x2fe70c0();
   input += synapse0x3216bd0();
   input += synapse0x3216c10();
   input += synapse0x3216c50();
   input += synapse0x3227a80();
   return input;
}

double NNfunction_NN_3_7::neuron0x322df90() {
   double input = input0x322df90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x2fe7820() {
   double input = 2.25293;
   input += synapse0x322dbe0();
   input += synapse0x3227ac0();
   input += synapse0x3227b00();
   input += synapse0x322e7e0();
   input += synapse0x322e820();
   input += synapse0x322e860();
   input += synapse0x322e8a0();
   input += synapse0x322e8e0();
   input += synapse0x322e920();
   input += synapse0x322e960();
   input += synapse0x322e9a0();
   input += synapse0x322e9e0();
   input += synapse0x322ea20();
   input += synapse0x322ea60();
   input += synapse0x322eaa0();
   input += synapse0x322eae0();
   input += synapse0x322da30();
   input += synapse0x322da70();
   input += synapse0x322ec30();
   input += synapse0x322ec70();
   input += synapse0x322ecb0();
   input += synapse0x322ecf0();
   input += synapse0x322ed30();
   input += synapse0x322ed70();
   return input;
}

double NNfunction_NN_3_7::neuron0x2fe7820() {
   double input = input0x2fe7820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x322edb0() {
   double input = -0.55031;
   input += synapse0x322f0f0();
   input += synapse0x322f130();
   input += synapse0x322f170();
   input += synapse0x322f1b0();
   input += synapse0x322f1f0();
   input += synapse0x322f230();
   input += synapse0x322f270();
   input += synapse0x322f2b0();
   input += synapse0x322f2f0();
   input += synapse0x322f330();
   input += synapse0x322f370();
   input += synapse0x322f3b0();
   input += synapse0x322f3f0();
   input += synapse0x322f430();
   input += synapse0x322f470();
   input += synapse0x322f4b0();
   input += synapse0x322ef40();
   input += synapse0x322ef80();
   input += synapse0x322f600();
   input += synapse0x322f640();
   input += synapse0x322f680();
   input += synapse0x322f6c0();
   input += synapse0x322f700();
   input += synapse0x322f740();
   return input;
}

double NNfunction_NN_3_7::neuron0x322edb0() {
   double input = input0x322edb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x322f780() {
   double input = 0.825934;
   input += synapse0x322fac0();
   input += synapse0x322fb00();
   input += synapse0x322fb40();
   input += synapse0x322fb80();
   input += synapse0x322fbc0();
   input += synapse0x322fc00();
   input += synapse0x322fc40();
   input += synapse0x322fc80();
   input += synapse0x322fcc0();
   input += synapse0x2fe7410();
   input += synapse0x2fe7450();
   input += synapse0x2fe7490();
   input += synapse0x2fe74d0();
   input += synapse0x2fe7510();
   input += synapse0x2fe7550();
   input += synapse0x2fe7590();
   input += synapse0x322f910();
   input += synapse0x322f950();
   input += synapse0x2fe76e0();
   input += synapse0x2fe7720();
   input += synapse0x2fe7760();
   input += synapse0x2fe77a0();
   input += synapse0x2fe77e0();
   input += synapse0x3230510();
   return input;
}

double NNfunction_NN_3_7::neuron0x322f780() {
   double input = input0x322f780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x3230550() {
   double input = -0.678352;
   input += synapse0x3230890();
   input += synapse0x32308d0();
   input += synapse0x3230910();
   input += synapse0x3230950();
   input += synapse0x3230990();
   input += synapse0x32309d0();
   input += synapse0x3230a10();
   input += synapse0x3230a50();
   input += synapse0x3230a90();
   input += synapse0x3230ad0();
   input += synapse0x3230b10();
   input += synapse0x3230b50();
   input += synapse0x3230b90();
   input += synapse0x3230bd0();
   input += synapse0x3230c10();
   input += synapse0x3230c50();
   input += synapse0x32306e0();
   input += synapse0x3230720();
   input += synapse0x3230da0();
   input += synapse0x3230de0();
   input += synapse0x3230e20();
   input += synapse0x3230e60();
   input += synapse0x3230ea0();
   input += synapse0x3230ee0();
   return input;
}

double NNfunction_NN_3_7::neuron0x3230550() {
   double input = input0x3230550();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x3230f20() {
   double input = -4.00797;
   input += synapse0x3231260();
   input += synapse0x32312a0();
   input += synapse0x32312e0();
   input += synapse0x3231320();
   input += synapse0x3231360();
   input += synapse0x32313a0();
   input += synapse0x32313e0();
   input += synapse0x3231420();
   input += synapse0x3231460();
   input += synapse0x32314a0();
   input += synapse0x32314e0();
   input += synapse0x3231520();
   input += synapse0x3231560();
   input += synapse0x32315a0();
   input += synapse0x32315e0();
   input += synapse0x3231620();
   input += synapse0x32310b0();
   input += synapse0x32310f0();
   input += synapse0x3231770();
   input += synapse0x32317b0();
   input += synapse0x32317f0();
   input += synapse0x3231830();
   input += synapse0x3231870();
   input += synapse0x32318b0();
   return input;
}

double NNfunction_NN_3_7::neuron0x3230f20() {
   double input = input0x3230f20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x32318f0() {
   double input = 1.08171;
   input += synapse0x322b390();
   input += synapse0x322b3d0();
   input += synapse0x322b410();
   input += synapse0x322b450();
   input += synapse0x3231e40();
   input += synapse0x3231e80();
   input += synapse0x3231ec0();
   input += synapse0x3231f00();
   input += synapse0x3231f40();
   input += synapse0x3231f80();
   input += synapse0x3231fc0();
   input += synapse0x3232000();
   input += synapse0x3232040();
   input += synapse0x3232080();
   input += synapse0x32320c0();
   input += synapse0x3232100();
   input += synapse0x3231a80();
   input += synapse0x3231ac0();
   input += synapse0x3232250();
   input += synapse0x3232290();
   input += synapse0x32322d0();
   input += synapse0x3232310();
   input += synapse0x3232350();
   input += synapse0x3232390();
   return input;
}

double NNfunction_NN_3_7::neuron0x32318f0() {
   double input = input0x32318f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x32323d0() {
   double input = 0.0840438;
   input += synapse0x3232710();
   input += synapse0x3232750();
   input += synapse0x3232790();
   input += synapse0x32327d0();
   input += synapse0x3232810();
   input += synapse0x3232850();
   input += synapse0x3232890();
   input += synapse0x32328d0();
   input += synapse0x3232910();
   input += synapse0x3232950();
   input += synapse0x3232990();
   input += synapse0x32329d0();
   input += synapse0x3232a10();
   input += synapse0x3232a50();
   input += synapse0x3232a90();
   input += synapse0x3232ad0();
   input += synapse0x3232560();
   input += synapse0x32325a0();
   input += synapse0x3232c20();
   input += synapse0x3232c60();
   input += synapse0x3232ca0();
   input += synapse0x3232ce0();
   input += synapse0x3232d20();
   input += synapse0x3232d60();
   return input;
}

double NNfunction_NN_3_7::neuron0x32323d0() {
   double input = input0x32323d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x3232da0() {
   double input = 0.333104;
   input += synapse0x32330e0();
   input += synapse0x3233120();
   input += synapse0x3233160();
   input += synapse0x32331a0();
   input += synapse0x32331e0();
   input += synapse0x3233220();
   input += synapse0x3233260();
   input += synapse0x32332a0();
   input += synapse0x32332e0();
   input += synapse0x3233320();
   input += synapse0x3233360();
   input += synapse0x32333a0();
   input += synapse0x32333e0();
   input += synapse0x3233420();
   input += synapse0x3233460();
   input += synapse0x32334a0();
   input += synapse0x3232f30();
   input += synapse0x3232f70();
   input += synapse0x322fd00();
   input += synapse0x322fd40();
   input += synapse0x322fd80();
   input += synapse0x322fdc0();
   input += synapse0x322fe00();
   input += synapse0x322fe40();
   return input;
}

double NNfunction_NN_3_7::neuron0x3232da0() {
   double input = input0x3232da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x322fe80() {
   double input = 0.399635;
   input += synapse0x32301c0();
   input += synapse0x3230200();
   input += synapse0x3230240();
   input += synapse0x3230280();
   input += synapse0x32302c0();
   input += synapse0x3230300();
   input += synapse0x3230340();
   input += synapse0x3230380();
   input += synapse0x32303c0();
   input += synapse0x3230400();
   input += synapse0x3230440();
   input += synapse0x3230480();
   input += synapse0x32304c0();
   input += synapse0x3234600();
   input += synapse0x3234640();
   input += synapse0x3234680();
   input += synapse0x3230010();
   input += synapse0x3230050();
   input += synapse0x32347d0();
   input += synapse0x3234810();
   input += synapse0x3234850();
   input += synapse0x3234890();
   input += synapse0x32348d0();
   input += synapse0x3234910();
   return input;
}

double NNfunction_NN_3_7::neuron0x322fe80() {
   double input = input0x322fe80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x3234950() {
   double input = 1.47852;
   input += synapse0x3234c90();
   input += synapse0x3234cd0();
   input += synapse0x3234d10();
   input += synapse0x3234d50();
   input += synapse0x3234d90();
   input += synapse0x3234dd0();
   input += synapse0x3234e10();
   input += synapse0x3234e50();
   input += synapse0x3234e90();
   input += synapse0x3234ed0();
   input += synapse0x3234f10();
   input += synapse0x3234f50();
   input += synapse0x3234f90();
   input += synapse0x3234fd0();
   input += synapse0x3235010();
   input += synapse0x3235050();
   input += synapse0x3234ae0();
   input += synapse0x3234b20();
   input += synapse0x32351a0();
   input += synapse0x32351e0();
   input += synapse0x3235220();
   input += synapse0x3235260();
   input += synapse0x32352a0();
   input += synapse0x32352e0();
   return input;
}

double NNfunction_NN_3_7::neuron0x3234950() {
   double input = input0x3234950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x3235320() {
   double input = -0.819296;
   input += synapse0x3235660();
   input += synapse0x32356a0();
   input += synapse0x32356e0();
   input += synapse0x3235720();
   input += synapse0x3235760();
   input += synapse0x32357a0();
   input += synapse0x32357e0();
   input += synapse0x3235820();
   input += synapse0x3235860();
   input += synapse0x32358a0();
   input += synapse0x32358e0();
   input += synapse0x3235920();
   input += synapse0x3235960();
   input += synapse0x32359a0();
   input += synapse0x32359e0();
   input += synapse0x3235a20();
   input += synapse0x32354b0();
   input += synapse0x32354f0();
   input += synapse0x3235b70();
   input += synapse0x3235bb0();
   input += synapse0x3235bf0();
   input += synapse0x3235c30();
   input += synapse0x3235c70();
   input += synapse0x3235cb0();
   return input;
}

double NNfunction_NN_3_7::neuron0x3235320() {
   double input = input0x3235320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x3235cf0() {
   double input = 3.22847;
   input += synapse0x3236030();
   input += synapse0x3236070();
   input += synapse0x32360b0();
   input += synapse0x32360f0();
   input += synapse0x3236130();
   input += synapse0x3236170();
   input += synapse0x32361b0();
   input += synapse0x32361f0();
   input += synapse0x3236230();
   input += synapse0x3236270();
   input += synapse0x32362b0();
   input += synapse0x32362f0();
   input += synapse0x3236330();
   input += synapse0x3236370();
   input += synapse0x32363b0();
   input += synapse0x32363f0();
   input += synapse0x3235e80();
   input += synapse0x3235ec0();
   input += synapse0x3236540();
   input += synapse0x3236580();
   input += synapse0x32365c0();
   input += synapse0x3236600();
   input += synapse0x3236640();
   input += synapse0x3236680();
   return input;
}

double NNfunction_NN_3_7::neuron0x3235cf0() {
   double input = input0x3235cf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x32366c0() {
   double input = -0.713447;
   input += synapse0x3236a00();
   input += synapse0x3227d60();
   input += synapse0x3227da0();
   input += synapse0x32280a0();
   input += synapse0x32280e0();
   input += synapse0x32283e0();
   input += synapse0x3228420();
   input += synapse0x3228720();
   input += synapse0x3228760();
   input += synapse0x3228a60();
   input += synapse0x3228aa0();
   input += synapse0x3228da0();
   input += synapse0x3228de0();
   input += synapse0x32290e0();
   input += synapse0x3229120();
   input += synapse0x3229420();
   input += synapse0x3229460();
   input += synapse0x3229760();
   input += synapse0x32297a0();
   input += synapse0x3229aa0();
   input += synapse0x3229ae0();
   input += synapse0x3229de0();
   input += synapse0x3229e20();
   input += synapse0x322a120();
   return input;
}

double NNfunction_NN_3_7::neuron0x32366c0() {
   double input = input0x32366c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x32384d0() {
   double input = 1.12901;
   input += synapse0x322a160();
   input += synapse0x322ae20();
   input += synapse0x322ae60();
   input += synapse0x3236850();
   input += synapse0x3236890();
   input += synapse0x322b160();
   input += synapse0x322b1a0();
   input += synapse0x2fd90f0();
   input += synapse0x2fd9130();
   input += synapse0x322b8e0();
   input += synapse0x322b920();
   input += synapse0x322bc20();
   input += synapse0x322bc60();
   input += synapse0x322bf60();
   input += synapse0x322bfa0();
   input += synapse0x322c2a0();
   input += synapse0x322c2e0();
   input += synapse0x322c5e0();
   input += synapse0x322c620();
   input += synapse0x322c920();
   input += synapse0x322c960();
   input += synapse0x322a460();
   input += synapse0x322a4a0();
   input += synapse0x3238770();
   return input;
}

double NNfunction_NN_3_7::neuron0x32384d0() {
   double input = input0x32384d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x32387b0() {
   double input = 0.958895;
   input += synapse0x3238af0();
   input += synapse0x3238b30();
   input += synapse0x3238b70();
   input += synapse0x3238bb0();
   input += synapse0x3238bf0();
   input += synapse0x3238c30();
   input += synapse0x3238c70();
   input += synapse0x3238cb0();
   input += synapse0x3238cf0();
   input += synapse0x3238d30();
   input += synapse0x3238d70();
   input += synapse0x3238db0();
   input += synapse0x3238df0();
   input += synapse0x3238e30();
   input += synapse0x3238e70();
   input += synapse0x3238eb0();
   input += synapse0x3238940();
   input += synapse0x3238980();
   input += synapse0x3239000();
   input += synapse0x3239040();
   input += synapse0x3239080();
   input += synapse0x32390c0();
   input += synapse0x3239100();
   input += synapse0x3239140();
   return input;
}

double NNfunction_NN_3_7::neuron0x32387b0() {
   double input = input0x32387b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x3239180() {
   double input = 0.371495;
   input += synapse0x32394c0();
   input += synapse0x3239500();
   input += synapse0x3239540();
   input += synapse0x3239580();
   input += synapse0x32395c0();
   input += synapse0x3239600();
   input += synapse0x3239640();
   input += synapse0x3239680();
   input += synapse0x32396c0();
   input += synapse0x3239700();
   input += synapse0x3239740();
   input += synapse0x3239780();
   input += synapse0x32397c0();
   input += synapse0x3239800();
   input += synapse0x3239840();
   input += synapse0x3239880();
   input += synapse0x3239310();
   input += synapse0x3239350();
   input += synapse0x32399d0();
   input += synapse0x3239a10();
   input += synapse0x3239a50();
   input += synapse0x3239a90();
   input += synapse0x3239ad0();
   input += synapse0x3239b10();
   return input;
}

double NNfunction_NN_3_7::neuron0x3239180() {
   double input = input0x3239180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x3239b50() {
   double input = -0.946044;
   input += synapse0x3239e90();
   input += synapse0x3239ed0();
   input += synapse0x3239f10();
   input += synapse0x3239f50();
   input += synapse0x3239f90();
   input += synapse0x3239fd0();
   input += synapse0x323a010();
   input += synapse0x323a050();
   input += synapse0x323a090();
   input += synapse0x323a0d0();
   input += synapse0x323a110();
   input += synapse0x323a150();
   input += synapse0x323a190();
   input += synapse0x323a1d0();
   input += synapse0x323a210();
   input += synapse0x323a250();
   input += synapse0x3239ce0();
   input += synapse0x3239d20();
   input += synapse0x323a3a0();
   input += synapse0x323a3e0();
   input += synapse0x323a420();
   input += synapse0x323a460();
   input += synapse0x323a4a0();
   input += synapse0x323a4e0();
   return input;
}

double NNfunction_NN_3_7::neuron0x3239b50() {
   double input = input0x3239b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x323a520() {
   double input = -1.90891;
   input += synapse0x323a860();
   input += synapse0x323a8a0();
   input += synapse0x323a8e0();
   input += synapse0x323a920();
   input += synapse0x323a960();
   input += synapse0x323a9a0();
   input += synapse0x323a9e0();
   input += synapse0x323aa20();
   input += synapse0x323aa60();
   input += synapse0x323aaa0();
   input += synapse0x323aae0();
   input += synapse0x323ab20();
   input += synapse0x323ab60();
   input += synapse0x323aba0();
   input += synapse0x323abe0();
   input += synapse0x323ac20();
   input += synapse0x323a6b0();
   input += synapse0x323a6f0();
   input += synapse0x323ad70();
   input += synapse0x323adb0();
   input += synapse0x323adf0();
   input += synapse0x323ae30();
   input += synapse0x323ae70();
   input += synapse0x323aeb0();
   return input;
}

double NNfunction_NN_3_7::neuron0x323a520() {
   double input = input0x323a520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x323aef0() {
   double input = 0.795139;
   input += synapse0x323b230();
   input += synapse0x323b270();
   input += synapse0x323b2b0();
   input += synapse0x323b2f0();
   input += synapse0x323b330();
   input += synapse0x323b370();
   input += synapse0x323b3b0();
   input += synapse0x323b3f0();
   input += synapse0x323b430();
   input += synapse0x32335f0();
   input += synapse0x3233630();
   input += synapse0x3233670();
   input += synapse0x32336b0();
   input += synapse0x32336f0();
   input += synapse0x3233730();
   input += synapse0x3233770();
   input += synapse0x323b080();
   input += synapse0x323b0c0();
   input += synapse0x32338c0();
   input += synapse0x3233900();
   input += synapse0x3233940();
   input += synapse0x3233980();
   input += synapse0x32339c0();
   input += synapse0x3233a00();
   return input;
}

double NNfunction_NN_3_7::neuron0x323aef0() {
   double input = input0x323aef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x3233a40() {
   double input = -5.02973;
   input += synapse0x3233d80();
   input += synapse0x3233dc0();
   input += synapse0x3233e00();
   input += synapse0x3233e40();
   input += synapse0x3233e80();
   input += synapse0x3233ec0();
   input += synapse0x3233f00();
   input += synapse0x3233f40();
   input += synapse0x3233f80();
   input += synapse0x3233fc0();
   input += synapse0x3234000();
   input += synapse0x3234040();
   input += synapse0x3234080();
   input += synapse0x32340c0();
   input += synapse0x3234100();
   input += synapse0x3234140();
   input += synapse0x3233bd0();
   input += synapse0x3233c10();
   input += synapse0x3234290();
   input += synapse0x32342d0();
   input += synapse0x3234310();
   input += synapse0x3234350();
   input += synapse0x3234390();
   input += synapse0x32343d0();
   return input;
}

double NNfunction_NN_3_7::neuron0x3233a40() {
   double input = input0x3233a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x3234410() {
   double input = -2.91842;
   input += synapse0x32345a0();
   input += synapse0x323d630();
   input += synapse0x323d670();
   input += synapse0x323d6b0();
   input += synapse0x323d6f0();
   input += synapse0x323d730();
   input += synapse0x323d770();
   input += synapse0x323d7b0();
   input += synapse0x323d7f0();
   input += synapse0x323d830();
   input += synapse0x323d870();
   input += synapse0x323d8b0();
   input += synapse0x323d8f0();
   input += synapse0x323d930();
   input += synapse0x323d970();
   input += synapse0x323d9b0();
   input += synapse0x323d480();
   input += synapse0x323d4c0();
   input += synapse0x323db00();
   input += synapse0x323db40();
   input += synapse0x323db80();
   input += synapse0x323dbc0();
   input += synapse0x323dc00();
   input += synapse0x323dc40();
   return input;
}

double NNfunction_NN_3_7::neuron0x3234410() {
   double input = input0x3234410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x323dc80() {
   double input = -2.29959;
   input += synapse0x323dfc0();
   input += synapse0x323e000();
   input += synapse0x323e040();
   input += synapse0x323e080();
   input += synapse0x323e0c0();
   input += synapse0x323e100();
   input += synapse0x323e140();
   input += synapse0x323e180();
   input += synapse0x323e1c0();
   input += synapse0x323e200();
   input += synapse0x323e240();
   input += synapse0x323e280();
   input += synapse0x323e2c0();
   input += synapse0x323e300();
   input += synapse0x323e340();
   input += synapse0x323e380();
   input += synapse0x323de10();
   input += synapse0x323de50();
   input += synapse0x323e4d0();
   input += synapse0x323e510();
   input += synapse0x323e550();
   input += synapse0x323e590();
   input += synapse0x323e5d0();
   input += synapse0x323e610();
   return input;
}

double NNfunction_NN_3_7::neuron0x323dc80() {
   double input = input0x323dc80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x323e650() {
   double input = -0.360267;
   input += synapse0x323e990();
   input += synapse0x323e9d0();
   input += synapse0x323ea10();
   input += synapse0x323ea50();
   input += synapse0x323ea90();
   input += synapse0x323ead0();
   input += synapse0x323eb10();
   input += synapse0x323eb50();
   input += synapse0x323eb90();
   input += synapse0x323ebd0();
   input += synapse0x323ec10();
   input += synapse0x323ec50();
   input += synapse0x323ec90();
   input += synapse0x323ecd0();
   input += synapse0x323ed10();
   input += synapse0x323ed50();
   input += synapse0x323e7e0();
   input += synapse0x323e820();
   input += synapse0x323eea0();
   input += synapse0x323eee0();
   input += synapse0x323ef20();
   input += synapse0x323ef60();
   input += synapse0x323efa0();
   input += synapse0x323efe0();
   return input;
}

double NNfunction_NN_3_7::neuron0x323e650() {
   double input = input0x323e650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x323f020() {
   double input = -0.0697225;
   input += synapse0x323f360();
   input += synapse0x323f3a0();
   input += synapse0x323f3e0();
   input += synapse0x323f420();
   input += synapse0x323f460();
   input += synapse0x323f4a0();
   input += synapse0x323f4e0();
   input += synapse0x323f520();
   input += synapse0x323f560();
   input += synapse0x323f5a0();
   input += synapse0x323f5e0();
   input += synapse0x323f620();
   input += synapse0x323f660();
   input += synapse0x323f6a0();
   input += synapse0x323f6e0();
   input += synapse0x323f720();
   input += synapse0x323f1b0();
   input += synapse0x323f1f0();
   input += synapse0x323f870();
   input += synapse0x323f8b0();
   input += synapse0x323f8f0();
   input += synapse0x323f930();
   input += synapse0x323f970();
   input += synapse0x323f9b0();
   return input;
}

double NNfunction_NN_3_7::neuron0x323f020() {
   double input = input0x323f020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x323f9f0() {
   double input = 1.26289;
   input += synapse0x323fd30();
   input += synapse0x323fd70();
   input += synapse0x323fdb0();
   input += synapse0x323fdf0();
   input += synapse0x323fe30();
   input += synapse0x323fe70();
   input += synapse0x323feb0();
   input += synapse0x323fef0();
   input += synapse0x323ff30();
   input += synapse0x323ff70();
   input += synapse0x323ffb0();
   input += synapse0x323fff0();
   input += synapse0x3240030();
   input += synapse0x3240070();
   input += synapse0x32400b0();
   input += synapse0x32400f0();
   input += synapse0x323fb80();
   input += synapse0x323fbc0();
   input += synapse0x3240240();
   input += synapse0x3240280();
   input += synapse0x32402c0();
   input += synapse0x3240300();
   input += synapse0x3240340();
   input += synapse0x3240380();
   return input;
}

double NNfunction_NN_3_7::neuron0x323f9f0() {
   double input = input0x323f9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x32403c0() {
   double input = -7.68578;
   input += synapse0x3240700();
   input += synapse0x3240740();
   input += synapse0x3240780();
   input += synapse0x32407c0();
   input += synapse0x3240800();
   input += synapse0x3240840();
   input += synapse0x3240880();
   input += synapse0x32408c0();
   input += synapse0x3240900();
   input += synapse0x3240940();
   input += synapse0x3240980();
   input += synapse0x32409c0();
   input += synapse0x3240a00();
   input += synapse0x3240a40();
   input += synapse0x3240a80();
   input += synapse0x3240ac0();
   input += synapse0x3240550();
   input += synapse0x3240590();
   input += synapse0x3240c10();
   input += synapse0x3240c50();
   input += synapse0x3240c90();
   input += synapse0x3240cd0();
   input += synapse0x3240d10();
   input += synapse0x3240d50();
   return input;
}

double NNfunction_NN_3_7::neuron0x32403c0() {
   double input = input0x32403c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x3240d90() {
   double input = 0.0665019;
   input += synapse0x32410d0();
   input += synapse0x3241110();
   input += synapse0x3241150();
   input += synapse0x3241190();
   input += synapse0x32411d0();
   input += synapse0x3241210();
   input += synapse0x3241250();
   input += synapse0x3241290();
   input += synapse0x32412d0();
   input += synapse0x3241310();
   input += synapse0x3241350();
   input += synapse0x3241390();
   input += synapse0x32413d0();
   input += synapse0x3241410();
   input += synapse0x3241450();
   input += synapse0x3241490();
   input += synapse0x3240f20();
   input += synapse0x3240f60();
   input += synapse0x32415e0();
   input += synapse0x3241620();
   input += synapse0x3241660();
   input += synapse0x32416a0();
   input += synapse0x32416e0();
   input += synapse0x3241720();
   return input;
}

double NNfunction_NN_3_7::neuron0x3240d90() {
   double input = input0x3240d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x3241760() {
   double input = 0.317174;
   input += synapse0x3241aa0();
   input += synapse0x3241ae0();
   input += synapse0x3241b20();
   input += synapse0x3241b60();
   input += synapse0x3241ba0();
   input += synapse0x3241be0();
   input += synapse0x3241c20();
   input += synapse0x3241c60();
   input += synapse0x3241ca0();
   input += synapse0x3241ce0();
   input += synapse0x3241d20();
   input += synapse0x3241d60();
   input += synapse0x3241da0();
   input += synapse0x3241de0();
   input += synapse0x3241e20();
   input += synapse0x3241e60();
   input += synapse0x32418f0();
   input += synapse0x3241930();
   input += synapse0x3241fb0();
   input += synapse0x3241ff0();
   input += synapse0x3242030();
   input += synapse0x3242070();
   input += synapse0x32420b0();
   input += synapse0x32420f0();
   return input;
}

double NNfunction_NN_3_7::neuron0x3241760() {
   double input = input0x3241760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x3242130() {
   double input = -0.54853;
   input += synapse0x3242470();
   input += synapse0x3236a40();
   input += synapse0x3236a80();
   input += synapse0x3236ac0();
   input += synapse0x3236d10();
   input += synapse0x3236d50();
   input += synapse0x3236d90();
   input += synapse0x3236fe0();
   input += synapse0x3237020();
   input += synapse0x3237270();
   input += synapse0x32372b0();
   input += synapse0x32372f0();
   input += synapse0x3237540();
   input += synapse0x3237580();
   input += synapse0x32377d0();
   input += synapse0x3237810();
   input += synapse0x32422c0();
   input += synapse0x3242300();
   input += synapse0x3237960();
   input += synapse0x3237e70();
   input += synapse0x3237eb0();
   input += synapse0x3237ef0();
   input += synapse0x3238140();
   input += synapse0x3238180();
   return input;
}

double NNfunction_NN_3_7::neuron0x3242130() {
   double input = input0x3242130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x32381c0() {
   double input = -1.43056;
   input += synapse0x3237a30();
   input += synapse0x3237a70();
   input += synapse0x3237ab0();
   input += synapse0x3237af0();
   input += synapse0x3238470();
   input += synapse0x32447c0();
   input += synapse0x3244800();
   input += synapse0x3244840();
   input += synapse0x3244880();
   input += synapse0x32448c0();
   input += synapse0x3244900();
   input += synapse0x3244940();
   input += synapse0x3244980();
   input += synapse0x32449c0();
   input += synapse0x3244a00();
   input += synapse0x3244a40();
   input += synapse0x3238350();
   input += synapse0x3238390();
   input += synapse0x3244b90();
   input += synapse0x3244bd0();
   input += synapse0x3244c10();
   input += synapse0x3244c50();
   input += synapse0x3244c90();
   input += synapse0x3244cd0();
   return input;
}

double NNfunction_NN_3_7::neuron0x32381c0() {
   double input = input0x32381c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x3244d10() {
   double input = 0.380468;
   input += synapse0x3245050();
   input += synapse0x3245090();
   input += synapse0x32450d0();
   input += synapse0x3245110();
   input += synapse0x3245150();
   input += synapse0x3245190();
   input += synapse0x32451d0();
   input += synapse0x3245210();
   input += synapse0x3245250();
   input += synapse0x3245290();
   input += synapse0x32452d0();
   input += synapse0x3245310();
   input += synapse0x3245350();
   input += synapse0x3245390();
   input += synapse0x32453d0();
   input += synapse0x3245410();
   input += synapse0x3244ea0();
   input += synapse0x3244ee0();
   input += synapse0x3245560();
   input += synapse0x32455a0();
   input += synapse0x32455e0();
   input += synapse0x3245620();
   input += synapse0x3245660();
   input += synapse0x32456a0();
   return input;
}

double NNfunction_NN_3_7::neuron0x3244d10() {
   double input = input0x3244d10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x32456e0() {
   double input = 0.31655;
   input += synapse0x3245a20();
   input += synapse0x3245a60();
   input += synapse0x3245aa0();
   input += synapse0x3245ae0();
   input += synapse0x3245b20();
   input += synapse0x3245b60();
   input += synapse0x3245ba0();
   input += synapse0x3245be0();
   input += synapse0x3245c20();
   input += synapse0x3245c60();
   input += synapse0x3245ca0();
   input += synapse0x3245ce0();
   input += synapse0x3245d20();
   input += synapse0x3245d60();
   input += synapse0x3245da0();
   input += synapse0x3245de0();
   input += synapse0x3245870();
   input += synapse0x32458b0();
   input += synapse0x3245f30();
   input += synapse0x3245f70();
   input += synapse0x3245fb0();
   input += synapse0x3245ff0();
   input += synapse0x3246030();
   input += synapse0x3246070();
   return input;
}

double NNfunction_NN_3_7::neuron0x32456e0() {
   double input = input0x32456e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x32460b0() {
   double input = 2.06911;
   input += synapse0x32463f0();
   input += synapse0x3246430();
   input += synapse0x3246470();
   input += synapse0x32464b0();
   input += synapse0x32464f0();
   input += synapse0x3246530();
   input += synapse0x3246570();
   input += synapse0x32465b0();
   input += synapse0x32465f0();
   input += synapse0x3246630();
   input += synapse0x3246670();
   input += synapse0x32466b0();
   input += synapse0x32466f0();
   input += synapse0x3246730();
   input += synapse0x3246770();
   input += synapse0x32467b0();
   input += synapse0x3246240();
   input += synapse0x3246280();
   input += synapse0x3246900();
   input += synapse0x3246940();
   input += synapse0x3246980();
   input += synapse0x32469c0();
   input += synapse0x3246a00();
   input += synapse0x3246a40();
   return input;
}

double NNfunction_NN_3_7::neuron0x32460b0() {
   double input = input0x32460b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x3246a80() {
   double input = -1.21234;
   input += synapse0x3246dc0();
   input += synapse0x3246e00();
   input += synapse0x3246e40();
   input += synapse0x3246e80();
   input += synapse0x3246ec0();
   input += synapse0x3246f00();
   input += synapse0x3246f40();
   input += synapse0x3246f80();
   input += synapse0x3246fc0();
   input += synapse0x3247000();
   input += synapse0x3247040();
   input += synapse0x3247080();
   input += synapse0x32470c0();
   input += synapse0x3247100();
   input += synapse0x3247140();
   input += synapse0x3247180();
   input += synapse0x3246c10();
   input += synapse0x3246c50();
   input += synapse0x32472d0();
   input += synapse0x3247310();
   input += synapse0x3247350();
   input += synapse0x3247390();
   input += synapse0x32473d0();
   input += synapse0x3247410();
   return input;
}

double NNfunction_NN_3_7::neuron0x3246a80() {
   double input = input0x3246a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x3247450() {
   double input = 0.363432;
   input += synapse0x3247790();
   input += synapse0x32477d0();
   input += synapse0x3247810();
   input += synapse0x3247850();
   input += synapse0x3247890();
   input += synapse0x32478d0();
   input += synapse0x3247910();
   input += synapse0x3247950();
   input += synapse0x3247990();
   input += synapse0x32479d0();
   input += synapse0x3247a10();
   input += synapse0x3247a50();
   input += synapse0x3247a90();
   input += synapse0x3247ad0();
   input += synapse0x3247b10();
   input += synapse0x3247b50();
   input += synapse0x32475e0();
   input += synapse0x3247620();
   input += synapse0x3247ca0();
   input += synapse0x3247ce0();
   input += synapse0x3247d20();
   input += synapse0x3247d60();
   input += synapse0x3247da0();
   input += synapse0x3247de0();
   return input;
}

double NNfunction_NN_3_7::neuron0x3247450() {
   double input = input0x3247450();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x3247e20() {
   double input = 3.25761;
   input += synapse0x3248160();
   input += synapse0x32481a0();
   input += synapse0x32481e0();
   input += synapse0x3248220();
   input += synapse0x3248260();
   input += synapse0x32482a0();
   input += synapse0x32482e0();
   input += synapse0x3248320();
   input += synapse0x3248360();
   input += synapse0x32483a0();
   input += synapse0x32483e0();
   input += synapse0x3248420();
   input += synapse0x3248460();
   input += synapse0x32484a0();
   input += synapse0x32484e0();
   input += synapse0x3248520();
   input += synapse0x3247fb0();
   input += synapse0x3247ff0();
   input += synapse0x3248670();
   input += synapse0x32486b0();
   input += synapse0x32486f0();
   input += synapse0x3248730();
   input += synapse0x3248770();
   input += synapse0x32487b0();
   return input;
}

double NNfunction_NN_3_7::neuron0x3247e20() {
   double input = input0x3247e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x32487f0() {
   double input = -2.85199;
   input += synapse0x3248b30();
   input += synapse0x3248b70();
   input += synapse0x3248bb0();
   input += synapse0x3248bf0();
   input += synapse0x3248c30();
   input += synapse0x3248c70();
   input += synapse0x3248cb0();
   input += synapse0x3248cf0();
   input += synapse0x3248d30();
   input += synapse0x3248d70();
   input += synapse0x3248db0();
   input += synapse0x3248df0();
   input += synapse0x3248e30();
   input += synapse0x3248e70();
   input += synapse0x3248eb0();
   input += synapse0x3248ef0();
   input += synapse0x3248980();
   input += synapse0x32489c0();
   input += synapse0x3249040();
   input += synapse0x3249080();
   input += synapse0x32490c0();
   input += synapse0x3249100();
   input += synapse0x3249140();
   input += synapse0x3249180();
   return input;
}

double NNfunction_NN_3_7::neuron0x32487f0() {
   double input = input0x32487f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x32491c0() {
   double input = 0.704418;
   input += synapse0x3231c30();
   input += synapse0x3231c70();
   input += synapse0x3231cb0();
   input += synapse0x3231cf0();
   input += synapse0x3231d30();
   input += synapse0x3231d70();
   input += synapse0x3231db0();
   input += synapse0x3231df0();
   input += synapse0x3249910();
   input += synapse0x3249950();
   input += synapse0x3249990();
   input += synapse0x32499d0();
   input += synapse0x3249a10();
   input += synapse0x3249a50();
   input += synapse0x3249a90();
   input += synapse0x3249ad0();
   input += synapse0x3249350();
   input += synapse0x3249390();
   input += synapse0x3249c20();
   input += synapse0x3249c60();
   input += synapse0x3249ca0();
   input += synapse0x3249ce0();
   input += synapse0x3249d20();
   input += synapse0x3249d60();
   return input;
}

double NNfunction_NN_3_7::neuron0x32491c0() {
   double input = input0x32491c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x3249da0() {
   double input = -0.0173753;
   input += synapse0x324a0e0();
   input += synapse0x324a120();
   input += synapse0x324a160();
   input += synapse0x324a1a0();
   input += synapse0x324a1e0();
   input += synapse0x324a220();
   input += synapse0x324a260();
   input += synapse0x324a2a0();
   input += synapse0x324a2e0();
   input += synapse0x324a320();
   input += synapse0x324a360();
   input += synapse0x324a3a0();
   input += synapse0x324a3e0();
   input += synapse0x324a420();
   input += synapse0x324a460();
   input += synapse0x324a4a0();
   input += synapse0x3249f30();
   input += synapse0x3249f70();
   input += synapse0x324a5f0();
   input += synapse0x324a630();
   input += synapse0x324a670();
   input += synapse0x324a6b0();
   input += synapse0x324a6f0();
   input += synapse0x324a730();
   return input;
}

double NNfunction_NN_3_7::neuron0x3249da0() {
   double input = input0x3249da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x324a770() {
   double input = -2.01334;
   input += synapse0x324aab0();
   input += synapse0x324aaf0();
   input += synapse0x324ab30();
   input += synapse0x324ab70();
   input += synapse0x324abb0();
   input += synapse0x324abf0();
   input += synapse0x324ac30();
   input += synapse0x324ac70();
   input += synapse0x324acb0();
   input += synapse0x324acf0();
   input += synapse0x324ad30();
   input += synapse0x324ad70();
   input += synapse0x324adb0();
   input += synapse0x324adf0();
   input += synapse0x324ae30();
   input += synapse0x324ae70();
   input += synapse0x324a900();
   input += synapse0x324a940();
   input += synapse0x323b470();
   input += synapse0x323b4b0();
   input += synapse0x323b4f0();
   input += synapse0x323b530();
   input += synapse0x323b570();
   input += synapse0x323b5b0();
   return input;
}

double NNfunction_NN_3_7::neuron0x324a770() {
   double input = input0x324a770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x323b5f0() {
   double input = -1.71457;
   input += synapse0x323b930();
   input += synapse0x323b970();
   input += synapse0x323b9b0();
   input += synapse0x323b9f0();
   input += synapse0x323ba30();
   input += synapse0x323ba70();
   input += synapse0x323bab0();
   input += synapse0x323baf0();
   input += synapse0x323bb30();
   input += synapse0x323bb70();
   input += synapse0x323bbb0();
   input += synapse0x323bbf0();
   input += synapse0x323bc30();
   input += synapse0x323bc70();
   input += synapse0x323bcb0();
   input += synapse0x323bcf0();
   input += synapse0x323b780();
   input += synapse0x323b7c0();
   input += synapse0x323be40();
   input += synapse0x323be80();
   input += synapse0x323bec0();
   input += synapse0x323bf00();
   input += synapse0x323bf40();
   input += synapse0x323bf80();
   return input;
}

double NNfunction_NN_3_7::neuron0x323b5f0() {
   double input = input0x323b5f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x323bfc0() {
   double input = 0.517657;
   input += synapse0x323c300();
   input += synapse0x323c340();
   input += synapse0x323c380();
   input += synapse0x323c3c0();
   input += synapse0x323c400();
   input += synapse0x323c440();
   input += synapse0x323c480();
   input += synapse0x323c4c0();
   input += synapse0x323c500();
   input += synapse0x323c540();
   input += synapse0x323c580();
   input += synapse0x323c5c0();
   input += synapse0x323c600();
   input += synapse0x323c640();
   input += synapse0x323c680();
   input += synapse0x323c6c0();
   input += synapse0x323c150();
   input += synapse0x323c190();
   input += synapse0x323c810();
   input += synapse0x323c850();
   input += synapse0x323c890();
   input += synapse0x323c8d0();
   input += synapse0x323c910();
   input += synapse0x323c950();
   return input;
}

double NNfunction_NN_3_7::neuron0x323bfc0() {
   double input = input0x323bfc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x323c990() {
   double input = 1.22916;
   input += synapse0x323ccd0();
   input += synapse0x323cd10();
   input += synapse0x323cd50();
   input += synapse0x323cd90();
   input += synapse0x323cdd0();
   input += synapse0x323ce10();
   input += synapse0x323ce50();
   input += synapse0x323ce90();
   input += synapse0x323ced0();
   input += synapse0x323cf10();
   input += synapse0x323cf50();
   input += synapse0x323cf90();
   input += synapse0x323cfd0();
   input += synapse0x323d010();
   input += synapse0x323d050();
   input += synapse0x323d090();
   input += synapse0x323cb20();
   input += synapse0x323cb60();
   input += synapse0x323d1e0();
   input += synapse0x323d220();
   input += synapse0x323d260();
   input += synapse0x323d2a0();
   input += synapse0x323d2e0();
   input += synapse0x323d320();
   return input;
}

double NNfunction_NN_3_7::neuron0x323c990() {
   double input = input0x323c990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x324efd0() {
   double input = -0.732481;
   input += synapse0x324f1f0();
   input += synapse0x324f230();
   input += synapse0x324f270();
   input += synapse0x324f2b0();
   input += synapse0x324f2f0();
   input += synapse0x324f330();
   input += synapse0x324f370();
   input += synapse0x324f3b0();
   input += synapse0x324f3f0();
   input += synapse0x324f430();
   input += synapse0x324f470();
   input += synapse0x324f4b0();
   input += synapse0x324f4f0();
   input += synapse0x324f530();
   input += synapse0x324f570();
   input += synapse0x324f5b0();
   input += synapse0x323d360();
   input += synapse0x323d3a0();
   input += synapse0x324f700();
   input += synapse0x324f740();
   input += synapse0x324f780();
   input += synapse0x324f7c0();
   input += synapse0x324f800();
   input += synapse0x324f840();
   return input;
}

double NNfunction_NN_3_7::neuron0x324efd0() {
   double input = input0x324efd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x324f880() {
   double input = -1.06332;
   input += synapse0x324fbc0();
   input += synapse0x324fc00();
   input += synapse0x324fc40();
   input += synapse0x324fc80();
   input += synapse0x324fcc0();
   input += synapse0x324fd00();
   input += synapse0x324fd40();
   input += synapse0x324fd80();
   input += synapse0x324fdc0();
   input += synapse0x324fe00();
   input += synapse0x324fe40();
   input += synapse0x324fe80();
   input += synapse0x324fec0();
   input += synapse0x324ff00();
   input += synapse0x324ff40();
   input += synapse0x324ff80();
   input += synapse0x324fa10();
   input += synapse0x324fa50();
   input += synapse0x32500d0();
   input += synapse0x3250110();
   input += synapse0x3250150();
   input += synapse0x3250190();
   input += synapse0x32501d0();
   input += synapse0x3250210();
   return input;
}

double NNfunction_NN_3_7::neuron0x324f880() {
   double input = input0x324f880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x3250250() {
   double input = 0.0506547;
   input += synapse0x3250590();
   input += synapse0x32505d0();
   input += synapse0x3250610();
   input += synapse0x3250650();
   input += synapse0x3250690();
   input += synapse0x32506d0();
   input += synapse0x3250710();
   input += synapse0x3250750();
   input += synapse0x3250790();
   input += synapse0x32507d0();
   input += synapse0x3250810();
   input += synapse0x3250850();
   input += synapse0x3250890();
   input += synapse0x32508d0();
   input += synapse0x3250910();
   input += synapse0x3250950();
   input += synapse0x32503e0();
   input += synapse0x3250420();
   input += synapse0x3250aa0();
   input += synapse0x3250ae0();
   input += synapse0x3250b20();
   input += synapse0x3250b60();
   input += synapse0x3250ba0();
   input += synapse0x3250be0();
   return input;
}

double NNfunction_NN_3_7::neuron0x3250250() {
   double input = input0x3250250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x3250c20() {
   double input = -0.35753;
   input += synapse0x3250f60();
   input += synapse0x3250fa0();
   input += synapse0x3250fe0();
   input += synapse0x3251020();
   input += synapse0x3251060();
   input += synapse0x32510a0();
   input += synapse0x32510e0();
   input += synapse0x3251120();
   input += synapse0x3251160();
   input += synapse0x32511a0();
   input += synapse0x32511e0();
   input += synapse0x3251220();
   input += synapse0x3251260();
   input += synapse0x32512a0();
   input += synapse0x32512e0();
   input += synapse0x3251320();
   input += synapse0x3250db0();
   input += synapse0x3250df0();
   input += synapse0x3251470();
   input += synapse0x32514b0();
   input += synapse0x32514f0();
   input += synapse0x3251530();
   input += synapse0x3251570();
   input += synapse0x32515b0();
   return input;
}

double NNfunction_NN_3_7::neuron0x3250c20() {
   double input = input0x3250c20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x3257e20() {
   double input = -0.812011;
   input += synapse0x322db50();
   input += synapse0x322db90();
   input += synapse0x322f060();
   input += synapse0x322f0a0();
   input += synapse0x322fa30();
   input += synapse0x322fa70();
   input += synapse0x3230800();
   input += synapse0x3230840();
   input += synapse0x32311d0();
   input += synapse0x3231210();
   input += synapse0x3231ba0();
   input += synapse0x3231be0();
   input += synapse0x3232680();
   input += synapse0x32326c0();
   input += synapse0x3233050();
   input += synapse0x3233090();
   input += synapse0x3230130();
   input += synapse0x3230170();
   input += synapse0x3234c00();
   input += synapse0x3234c40();
   input += synapse0x32355d0();
   input += synapse0x3235610();
   input += synapse0x3235fa0();
   input += synapse0x3235fe0();
   input += synapse0x3236970();
   input += synapse0x32369b0();
   input += synapse0x322aae0();
   input += synapse0x322ab20();
   input += synapse0x3238a60();
   input += synapse0x3238aa0();
   input += synapse0x3239430();
   input += synapse0x3239470();
   input += synapse0x3239e00();
   input += synapse0x3239e40();
   input += synapse0x323a7d0();
   input += synapse0x323a810();
   input += synapse0x323b1a0();
   input += synapse0x323b1e0();
   input += synapse0x3233cf0();
   input += synapse0x3233d30();
   input += synapse0x323d5a0();
   input += synapse0x323d5e0();
   input += synapse0x323df30();
   input += synapse0x323df70();
   input += synapse0x323e900();
   input += synapse0x323e940();
   input += synapse0x323f2d0();
   input += synapse0x323f310();
   input += synapse0x323fca0();
   input += synapse0x323fce0();
   return input;
}

double NNfunction_NN_3_7::neuron0x3257e20() {
   double input = input0x3257e20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x32581c0() {
   double input = -0.0925526;
   input += synapse0x32423e0();
   input += synapse0x3242420();
   input += synapse0x32379a0();
   input += synapse0x32379e0();
   input += synapse0x3244fc0();
   input += synapse0x3245000();
   input += synapse0x3245990();
   input += synapse0x32459d0();
   input += synapse0x3246360();
   input += synapse0x32463a0();
   input += synapse0x3246d30();
   input += synapse0x3246d70();
   input += synapse0x3247700();
   input += synapse0x3247740();
   input += synapse0x32480d0();
   input += synapse0x3248110();
   input += synapse0x3248aa0();
   input += synapse0x3248ae0();
   input += synapse0x3249470();
   input += synapse0x32494b0();
   input += synapse0x324a050();
   input += synapse0x324a090();
   input += synapse0x324aa20();
   input += synapse0x324aa60();
   input += synapse0x323b8a0();
   input += synapse0x323b8e0();
   input += synapse0x323c270();
   input += synapse0x323c2b0();
   input += synapse0x323cc40();
   input += synapse0x323cc80();
   input += synapse0x324f160();
   input += synapse0x324f1a0();
   input += synapse0x324fb30();
   input += synapse0x324fb70();
   input += synapse0x3250500();
   input += synapse0x3250540();
   input += synapse0x3250ed0();
   input += synapse0x3250f10();
   input += synapse0x322cdc0();
   input += synapse0x322ce00();
   input += synapse0x3240670();
   input += synapse0x32406b0();
   input += synapse0x32515f0();
   input += synapse0x3251630();
   input += synapse0x3251670();
   input += synapse0x32516b0();
   input += synapse0x3258560();
   input += synapse0x32585a0();
   input += synapse0x32585e0();
   input += synapse0x3258620();
   return input;
}

double NNfunction_NN_3_7::neuron0x32581c0() {
   double input = input0x32581c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x3258660() {
   double input = -0.864699;
   input += synapse0x32589a0();
   input += synapse0x32589e0();
   input += synapse0x3258a20();
   input += synapse0x3258a60();
   input += synapse0x3258aa0();
   input += synapse0x3258ae0();
   input += synapse0x3258b20();
   input += synapse0x3258b60();
   input += synapse0x3258ba0();
   input += synapse0x3258be0();
   input += synapse0x3258c20();
   input += synapse0x3258c60();
   input += synapse0x3258ca0();
   input += synapse0x3258ce0();
   input += synapse0x3258d20();
   input += synapse0x3258d60();
   input += synapse0x32587f0();
   input += synapse0x3258830();
   input += synapse0x3258eb0();
   input += synapse0x3258ef0();
   input += synapse0x3258f30();
   input += synapse0x3258f70();
   input += synapse0x3258fb0();
   input += synapse0x3258ff0();
   input += synapse0x3259030();
   input += synapse0x3259070();
   input += synapse0x32590b0();
   input += synapse0x32590f0();
   input += synapse0x3259130();
   input += synapse0x3259170();
   input += synapse0x32591b0();
   input += synapse0x32591f0();
   input += synapse0x3258da0();
   input += synapse0x3258de0();
   input += synapse0x3258e20();
   input += synapse0x3258e60();
   input += synapse0x3259440();
   input += synapse0x3259480();
   input += synapse0x32594c0();
   input += synapse0x3259500();
   input += synapse0x3259540();
   input += synapse0x3259580();
   input += synapse0x32595c0();
   input += synapse0x3259600();
   input += synapse0x3259640();
   input += synapse0x3259680();
   input += synapse0x32596c0();
   input += synapse0x3259700();
   input += synapse0x3259740();
   input += synapse0x3259780();
   return input;
}

double NNfunction_NN_3_7::neuron0x3258660() {
   double input = input0x3258660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x32597c0() {
   double input = 0.189779;
   input += synapse0x3259b00();
   input += synapse0x3259b40();
   input += synapse0x3259b80();
   input += synapse0x3259bc0();
   input += synapse0x3259c00();
   input += synapse0x3259c40();
   input += synapse0x3259c80();
   input += synapse0x3259cc0();
   input += synapse0x3259d00();
   input += synapse0x3259d40();
   input += synapse0x3259d80();
   input += synapse0x3259dc0();
   input += synapse0x3259e00();
   input += synapse0x3259e40();
   input += synapse0x3259e80();
   input += synapse0x3259ec0();
   input += synapse0x3259950();
   input += synapse0x3259990();
   input += synapse0x325a010();
   input += synapse0x325a050();
   input += synapse0x325a090();
   input += synapse0x325a0d0();
   input += synapse0x325a110();
   input += synapse0x325a150();
   input += synapse0x325a190();
   input += synapse0x325a1d0();
   input += synapse0x325a210();
   input += synapse0x325a250();
   input += synapse0x325a290();
   input += synapse0x325a2d0();
   input += synapse0x325a310();
   input += synapse0x325a350();
   input += synapse0x3259f00();
   input += synapse0x3259f40();
   input += synapse0x3259f80();
   input += synapse0x3259fc0();
   input += synapse0x325a5a0();
   input += synapse0x325a5e0();
   input += synapse0x325a620();
   input += synapse0x325a660();
   input += synapse0x325a6a0();
   input += synapse0x325a6e0();
   input += synapse0x325a720();
   input += synapse0x325a760();
   input += synapse0x325a7a0();
   input += synapse0x325a7e0();
   input += synapse0x325a820();
   input += synapse0x325a860();
   input += synapse0x325a8a0();
   input += synapse0x325a8e0();
   return input;
}

double NNfunction_NN_3_7::neuron0x32597c0() {
   double input = input0x32597c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x325a920() {
   double input = -1.34824;
   input += synapse0x325ac60();
   input += synapse0x325aca0();
   input += synapse0x325ace0();
   input += synapse0x325ad20();
   input += synapse0x325ad60();
   input += synapse0x325ada0();
   input += synapse0x325ade0();
   input += synapse0x325ae20();
   input += synapse0x325ae60();
   input += synapse0x325aea0();
   input += synapse0x325aee0();
   input += synapse0x325af20();
   input += synapse0x325af60();
   input += synapse0x325afa0();
   input += synapse0x325afe0();
   input += synapse0x325b020();
   input += synapse0x325aab0();
   input += synapse0x325aaf0();
   input += synapse0x325b170();
   input += synapse0x325b1b0();
   input += synapse0x325b1f0();
   input += synapse0x325b230();
   input += synapse0x325b270();
   input += synapse0x325b2b0();
   input += synapse0x325b2f0();
   input += synapse0x325b330();
   input += synapse0x325b370();
   input += synapse0x325b3b0();
   input += synapse0x325b3f0();
   input += synapse0x325b430();
   input += synapse0x325b470();
   input += synapse0x325b4b0();
   input += synapse0x325b060();
   input += synapse0x325b0a0();
   input += synapse0x325b0e0();
   input += synapse0x325b120();
   input += synapse0x325b700();
   input += synapse0x325b740();
   input += synapse0x325b780();
   input += synapse0x325b7c0();
   input += synapse0x325b800();
   input += synapse0x325b840();
   input += synapse0x325b880();
   input += synapse0x325b8c0();
   input += synapse0x325b900();
   input += synapse0x325b940();
   input += synapse0x325b980();
   input += synapse0x325b9c0();
   input += synapse0x325ba00();
   input += synapse0x325ba40();
   return input;
}

double NNfunction_NN_3_7::neuron0x325a920() {
   double input = input0x325a920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_NN_3_7::input0x325ba80() {
   double input = 12.5121;
   input += synapse0x322cb60();
   input += synapse0x325bca0();
   input += synapse0x325bce0();
   input += synapse0x325bd20();
   input += synapse0x325bd60();
   return input;
}

double NNfunction_NN_3_7::neuron0x325ba80() {
   double input = input0x325ba80();
   return (input * 1)+0;
}

double NNfunction_NN_3_7::synapse0x2fe79b0() {
   return (neuron0x3227b40()*-0.0225815);
}

double NNfunction_NN_3_7::synapse0x3227a00() {
   return (neuron0x3227e80()*11.2925);
}

double NNfunction_NN_3_7::synapse0x3227a40() {
   return (neuron0x32281c0()*-1.06462);
}

double NNfunction_NN_3_7::synapse0x322ce50() {
   return (neuron0x3228500()*-0.00447836);
}

double NNfunction_NN_3_7::synapse0x322ce90() {
   return (neuron0x3228840()*-0.0149059);
}

double NNfunction_NN_3_7::synapse0x322ced0() {
   return (neuron0x3228b80()*-0.00237942);
}

double NNfunction_NN_3_7::synapse0x322cf10() {
   return (neuron0x3228ec0()*0.0047464);
}

double NNfunction_NN_3_7::synapse0x322cf50() {
   return (neuron0x3229200()*-0.00547936);
}

double NNfunction_NN_3_7::synapse0x322cf90() {
   return (neuron0x3229540()*0.00524324);
}

double NNfunction_NN_3_7::synapse0x322cfd0() {
   return (neuron0x3229880()*-0.0137023);
}

double NNfunction_NN_3_7::synapse0x322d010() {
   return (neuron0x3229bc0()*0.0114516);
}

double NNfunction_NN_3_7::synapse0x322d050() {
   return (neuron0x3229f00()*-0.0477664);
}

double NNfunction_NN_3_7::synapse0x322d090() {
   return (neuron0x322a240()*-0.0102694);
}

double NNfunction_NN_3_7::synapse0x322d0d0() {
   return (neuron0x322a580()*-0.00551614);
}

double NNfunction_NN_3_7::synapse0x322d110() {
   return (neuron0x322a8c0()*0.00636188);
}

double NNfunction_NN_3_7::synapse0x322d150() {
   return (neuron0x322ac00()*0.00362751);
}

double NNfunction_NN_3_7::synapse0x3227970() {
   return (neuron0x322af40()*0.00409512);
}

double NNfunction_NN_3_7::synapse0x32279b0() {
   return (neuron0x322b4a0()*0.00110088);
}

double NNfunction_NN_3_7::synapse0x2fd9210() {
   return (neuron0x322b6c0()*-0.0149447);
}

double NNfunction_NN_3_7::synapse0x2fd9250() {
   return (neuron0x322ba00()*-0.00912817);
}

double NNfunction_NN_3_7::synapse0x322d3b0() {
   return (neuron0x322bd40()*-0.00257351);
}

double NNfunction_NN_3_7::synapse0x322d3f0() {
   return (neuron0x322c080()*0.00331692);
}

double NNfunction_NN_3_7::synapse0x322d430() {
   return (neuron0x322c3c0()*6.12122e-05);
}

double NNfunction_NN_3_7::synapse0x322d470() {
   return (neuron0x322c700()*0.980934);
}

double NNfunction_NN_3_7::synapse0x322d7f0() {
   return (neuron0x3227b40()*-0.0181569);
}

double NNfunction_NN_3_7::synapse0x322d830() {
   return (neuron0x3227e80()*4.31421);
}

double NNfunction_NN_3_7::synapse0x322d870() {
   return (neuron0x32281c0()*1.69174);
}

double NNfunction_NN_3_7::synapse0x322d8b0() {
   return (neuron0x3228500()*0.0267942);
}

double NNfunction_NN_3_7::synapse0x322d8f0() {
   return (neuron0x3228840()*-0.0227212);
}

double NNfunction_NN_3_7::synapse0x322d930() {
   return (neuron0x3228b80()*-0.0195177);
}

double NNfunction_NN_3_7::synapse0x322d970() {
   return (neuron0x3228ec0()*0.00107599);
}

double NNfunction_NN_3_7::synapse0x322d9b0() {
   return (neuron0x3229200()*0.0177368);
}

double NNfunction_NN_3_7::synapse0x322d9f0() {
   return (neuron0x3229540()*0.0126209);
}

double NNfunction_NN_3_7::synapse0x322d2a0() {
   return (neuron0x3229880()*0.020584);
}

double NNfunction_NN_3_7::synapse0x322d2e0() {
   return (neuron0x3229bc0()*0.00790074);
}

double NNfunction_NN_3_7::synapse0x322d320() {
   return (neuron0x3229f00()*0.0342873);
}

double NNfunction_NN_3_7::synapse0x322d360() {
   return (neuron0x322a240()*0.0102267);
}

double NNfunction_NN_3_7::synapse0x322dc40() {
   return (neuron0x322a580()*0.0228896);
}

double NNfunction_NN_3_7::synapse0x322dc80() {
   return (neuron0x322a8c0()*-0.00143474);
}

double NNfunction_NN_3_7::synapse0x322dcc0() {
   return (neuron0x322ac00()*-0.020279);
}

double NNfunction_NN_3_7::synapse0x322d640() {
   return (neuron0x322af40()*-0.0122598);
}

double NNfunction_NN_3_7::synapse0x322d680() {
   return (neuron0x322b4a0()*0.0192323);
}

double NNfunction_NN_3_7::synapse0x322de10() {
   return (neuron0x322b6c0()*-0.013769);
}

double NNfunction_NN_3_7::synapse0x322de50() {
   return (neuron0x322ba00()*0.0127855);
}

double NNfunction_NN_3_7::synapse0x322de90() {
   return (neuron0x322bd40()*0.0241486);
}

double NNfunction_NN_3_7::synapse0x322ded0() {
   return (neuron0x322c080()*0.00543513);
}

double NNfunction_NN_3_7::synapse0x322df10() {
   return (neuron0x322c3c0()*-0.00849775);
}

double NNfunction_NN_3_7::synapse0x322df50() {
   return (neuron0x322c700()*0.121122);
}

double NNfunction_NN_3_7::synapse0x322e2d0() {
   return (neuron0x3227b40()*-0.0066826);
}

double NNfunction_NN_3_7::synapse0x322e310() {
   return (neuron0x3227e80()*-2.80889);
}

double NNfunction_NN_3_7::synapse0x322e350() {
   return (neuron0x32281c0()*1.00821);
}

double NNfunction_NN_3_7::synapse0x322e390() {
   return (neuron0x3228500()*-0.108002);
}

double NNfunction_NN_3_7::synapse0x322e3d0() {
   return (neuron0x3228840()*-0.105484);
}

double NNfunction_NN_3_7::synapse0x322e410() {
   return (neuron0x3228b80()*-0.0302563);
}

double NNfunction_NN_3_7::synapse0x322e450() {
   return (neuron0x3228ec0()*-0.0252136);
}

double NNfunction_NN_3_7::synapse0x322e490() {
   return (neuron0x3229200()*0.0256074);
}

double NNfunction_NN_3_7::synapse0x322e4d0() {
   return (neuron0x3229540()*-0.00871704);
}

double NNfunction_NN_3_7::synapse0x322e510() {
   return (neuron0x3229880()*-0.0549202);
}

double NNfunction_NN_3_7::synapse0x322e550() {
   return (neuron0x3229bc0()*0.0151723);
}

double NNfunction_NN_3_7::synapse0x322e590() {
   return (neuron0x3229f00()*-0.302841);
}

double NNfunction_NN_3_7::synapse0x322e5d0() {
   return (neuron0x322a240()*0.0252568);
}

double NNfunction_NN_3_7::synapse0x322e610() {
   return (neuron0x322a580()*0.016455);
}

double NNfunction_NN_3_7::synapse0x322e650() {
   return (neuron0x322a8c0()*-0.0235794);
}

double NNfunction_NN_3_7::synapse0x322e690() {
   return (neuron0x322ac00()*0.0360011);
}

double NNfunction_NN_3_7::synapse0x322e120() {
   return (neuron0x322af40()*0.0799054);
}

double NNfunction_NN_3_7::synapse0x322e160() {
   return (neuron0x322b4a0()*-0.0248462);
}

double NNfunction_NN_3_7::synapse0x2fe7080() {
   return (neuron0x322b6c0()*0.101155);
}

double NNfunction_NN_3_7::synapse0x2fe70c0() {
   return (neuron0x322ba00()*0.017152);
}

double NNfunction_NN_3_7::synapse0x3216bd0() {
   return (neuron0x322bd40()*-0.0131547);
}

double NNfunction_NN_3_7::synapse0x3216c10() {
   return (neuron0x322c080()*-0.0144237);
}

double NNfunction_NN_3_7::synapse0x3216c50() {
   return (neuron0x322c3c0()*0.0795408);
}

double NNfunction_NN_3_7::synapse0x3227a80() {
   return (neuron0x322c700()*1.28257);
}

double NNfunction_NN_3_7::synapse0x322dbe0() {
   return (neuron0x3227b40()*-0.0314721);
}

double NNfunction_NN_3_7::synapse0x3227ac0() {
   return (neuron0x3227e80()*-1.28357);
}

double NNfunction_NN_3_7::synapse0x3227b00() {
   return (neuron0x32281c0()*-0.403275);
}

double NNfunction_NN_3_7::synapse0x322e7e0() {
   return (neuron0x3228500()*-0.0222262);
}

double NNfunction_NN_3_7::synapse0x322e820() {
   return (neuron0x3228840()*0.000916521);
}

double NNfunction_NN_3_7::synapse0x322e860() {
   return (neuron0x3228b80()*0.0567581);
}

double NNfunction_NN_3_7::synapse0x322e8a0() {
   return (neuron0x3228ec0()*-0.0620649);
}

double NNfunction_NN_3_7::synapse0x322e8e0() {
   return (neuron0x3229200()*0.0320969);
}

double NNfunction_NN_3_7::synapse0x322e920() {
   return (neuron0x3229540()*-0.00399489);
}

double NNfunction_NN_3_7::synapse0x322e960() {
   return (neuron0x3229880()*-0.00226994);
}

double NNfunction_NN_3_7::synapse0x322e9a0() {
   return (neuron0x3229bc0()*0.0287738);
}

double NNfunction_NN_3_7::synapse0x322e9e0() {
   return (neuron0x3229f00()*0.0826359);
}

double NNfunction_NN_3_7::synapse0x322ea20() {
   return (neuron0x322a240()*-0.00413342);
}

double NNfunction_NN_3_7::synapse0x322ea60() {
   return (neuron0x322a580()*0.00401931);
}

double NNfunction_NN_3_7::synapse0x322eaa0() {
   return (neuron0x322a8c0()*0.00307212);
}

double NNfunction_NN_3_7::synapse0x322eae0() {
   return (neuron0x322ac00()*0.0108126);
}

double NNfunction_NN_3_7::synapse0x322da30() {
   return (neuron0x322af40()*-0.0189803);
}

double NNfunction_NN_3_7::synapse0x322da70() {
   return (neuron0x322b4a0()*0.0271619);
}

double NNfunction_NN_3_7::synapse0x322ec30() {
   return (neuron0x322b6c0()*0.0376914);
}

double NNfunction_NN_3_7::synapse0x322ec70() {
   return (neuron0x322ba00()*-0.0126587);
}

double NNfunction_NN_3_7::synapse0x322ecb0() {
   return (neuron0x322bd40()*-0.00401498);
}

double NNfunction_NN_3_7::synapse0x322ecf0() {
   return (neuron0x322c080()*-0.0350572);
}

double NNfunction_NN_3_7::synapse0x322ed30() {
   return (neuron0x322c3c0()*0.0196441);
}

double NNfunction_NN_3_7::synapse0x322ed70() {
   return (neuron0x322c700()*-4.53871);
}

double NNfunction_NN_3_7::synapse0x322f0f0() {
   return (neuron0x3227b40()*0.0826783);
}

double NNfunction_NN_3_7::synapse0x322f130() {
   return (neuron0x3227e80()*0.0036503);
}

double NNfunction_NN_3_7::synapse0x322f170() {
   return (neuron0x32281c0()*0.398164);
}

double NNfunction_NN_3_7::synapse0x322f1b0() {
   return (neuron0x3228500()*-0.0081432);
}

double NNfunction_NN_3_7::synapse0x322f1f0() {
   return (neuron0x3228840()*-0.00424793);
}

double NNfunction_NN_3_7::synapse0x322f230() {
   return (neuron0x3228b80()*-0.00337523);
}

double NNfunction_NN_3_7::synapse0x322f270() {
   return (neuron0x3228ec0()*0.0175708);
}

double NNfunction_NN_3_7::synapse0x322f2b0() {
   return (neuron0x3229200()*0.0111697);
}

double NNfunction_NN_3_7::synapse0x322f2f0() {
   return (neuron0x3229540()*0.00680248);
}

double NNfunction_NN_3_7::synapse0x322f330() {
   return (neuron0x3229880()*-0.0239303);
}

double NNfunction_NN_3_7::synapse0x322f370() {
   return (neuron0x3229bc0()*-0.0178609);
}

double NNfunction_NN_3_7::synapse0x322f3b0() {
   return (neuron0x3229f00()*0.153884);
}

double NNfunction_NN_3_7::synapse0x322f3f0() {
   return (neuron0x322a240()*0.00764257);
}

double NNfunction_NN_3_7::synapse0x322f430() {
   return (neuron0x322a580()*-0.00212791);
}

double NNfunction_NN_3_7::synapse0x322f470() {
   return (neuron0x322a8c0()*-0.0125453);
}

double NNfunction_NN_3_7::synapse0x322f4b0() {
   return (neuron0x322ac00()*0.0191882);
}

double NNfunction_NN_3_7::synapse0x322ef40() {
   return (neuron0x322af40()*-0.0112477);
}

double NNfunction_NN_3_7::synapse0x322ef80() {
   return (neuron0x322b4a0()*0.00317489);
}

double NNfunction_NN_3_7::synapse0x322f600() {
   return (neuron0x322b6c0()*0.00363997);
}

double NNfunction_NN_3_7::synapse0x322f640() {
   return (neuron0x322ba00()*-0.00498232);
}

double NNfunction_NN_3_7::synapse0x322f680() {
   return (neuron0x322bd40()*-0.011046);
}

double NNfunction_NN_3_7::synapse0x322f6c0() {
   return (neuron0x322c080()*-0.00666542);
}

double NNfunction_NN_3_7::synapse0x322f700() {
   return (neuron0x322c3c0()*-0.0145191);
}

double NNfunction_NN_3_7::synapse0x322f740() {
   return (neuron0x322c700()*5.7855);
}

double NNfunction_NN_3_7::synapse0x322fac0() {
   return (neuron0x3227b40()*0.598211);
}

double NNfunction_NN_3_7::synapse0x322fb00() {
   return (neuron0x3227e80()*-0.268106);
}

double NNfunction_NN_3_7::synapse0x322fb40() {
   return (neuron0x32281c0()*-0.195798);
}

double NNfunction_NN_3_7::synapse0x322fb80() {
   return (neuron0x3228500()*-0.15354);
}

double NNfunction_NN_3_7::synapse0x322fbc0() {
   return (neuron0x3228840()*0.29281);
}

double NNfunction_NN_3_7::synapse0x322fc00() {
   return (neuron0x3228b80()*0.25825);
}

double NNfunction_NN_3_7::synapse0x322fc40() {
   return (neuron0x3228ec0()*0.190285);
}

double NNfunction_NN_3_7::synapse0x322fc80() {
   return (neuron0x3229200()*-0.012033);
}

double NNfunction_NN_3_7::synapse0x322fcc0() {
   return (neuron0x3229540()*-0.0576291);
}

double NNfunction_NN_3_7::synapse0x2fe7410() {
   return (neuron0x3229880()*-0.00999174);
}

double NNfunction_NN_3_7::synapse0x2fe7450() {
   return (neuron0x3229bc0()*-0.072602);
}

double NNfunction_NN_3_7::synapse0x2fe7490() {
   return (neuron0x3229f00()*-0.0605835);
}

double NNfunction_NN_3_7::synapse0x2fe74d0() {
   return (neuron0x322a240()*-0.0498252);
}

double NNfunction_NN_3_7::synapse0x2fe7510() {
   return (neuron0x322a580()*-0.068835);
}

double NNfunction_NN_3_7::synapse0x2fe7550() {
   return (neuron0x322a8c0()*-0.0668869);
}

double NNfunction_NN_3_7::synapse0x2fe7590() {
   return (neuron0x322ac00()*-0.152911);
}

double NNfunction_NN_3_7::synapse0x322f910() {
   return (neuron0x322af40()*0.0444784);
}

double NNfunction_NN_3_7::synapse0x322f950() {
   return (neuron0x322b4a0()*0.0551894);
}

double NNfunction_NN_3_7::synapse0x2fe76e0() {
   return (neuron0x322b6c0()*-0.190126);
}

double NNfunction_NN_3_7::synapse0x2fe7720() {
   return (neuron0x322ba00()*-0.112574);
}

double NNfunction_NN_3_7::synapse0x2fe7760() {
   return (neuron0x322bd40()*-0.0379047);
}

double NNfunction_NN_3_7::synapse0x2fe77a0() {
   return (neuron0x322c080()*-0.0833884);
}

double NNfunction_NN_3_7::synapse0x2fe77e0() {
   return (neuron0x322c3c0()*-0.222553);
}

double NNfunction_NN_3_7::synapse0x3230510() {
   return (neuron0x322c700()*-1.25204);
}

double NNfunction_NN_3_7::synapse0x3230890() {
   return (neuron0x3227b40()*0.144658);
}

double NNfunction_NN_3_7::synapse0x32308d0() {
   return (neuron0x3227e80()*-0.557358);
}

double NNfunction_NN_3_7::synapse0x3230910() {
   return (neuron0x32281c0()*-0.588034);
}

double NNfunction_NN_3_7::synapse0x3230950() {
   return (neuron0x3228500()*0.306615);
}

double NNfunction_NN_3_7::synapse0x3230990() {
   return (neuron0x3228840()*-0.0558518);
}

double NNfunction_NN_3_7::synapse0x32309d0() {
   return (neuron0x3228b80()*0.357478);
}

double NNfunction_NN_3_7::synapse0x3230a10() {
   return (neuron0x3228ec0()*0.000111889);
}

double NNfunction_NN_3_7::synapse0x3230a50() {
   return (neuron0x3229200()*-0.0295981);
}

double NNfunction_NN_3_7::synapse0x3230a90() {
   return (neuron0x3229540()*-0.151559);
}

double NNfunction_NN_3_7::synapse0x3230ad0() {
   return (neuron0x3229880()*-0.0885786);
}

double NNfunction_NN_3_7::synapse0x3230b10() {
   return (neuron0x3229bc0()*0.0891741);
}

double NNfunction_NN_3_7::synapse0x3230b50() {
   return (neuron0x3229f00()*0.0683754);
}

double NNfunction_NN_3_7::synapse0x3230b90() {
   return (neuron0x322a240()*-0.0567859);
}

double NNfunction_NN_3_7::synapse0x3230bd0() {
   return (neuron0x322a580()*-0.264431);
}

double NNfunction_NN_3_7::synapse0x3230c10() {
   return (neuron0x322a8c0()*0.0441481);
}

double NNfunction_NN_3_7::synapse0x3230c50() {
   return (neuron0x322ac00()*-0.0665156);
}

double NNfunction_NN_3_7::synapse0x32306e0() {
   return (neuron0x322af40()*-0.0746966);
}

double NNfunction_NN_3_7::synapse0x3230720() {
   return (neuron0x322b4a0()*-0.195346);
}

double NNfunction_NN_3_7::synapse0x3230da0() {
   return (neuron0x322b6c0()*-0.0587792);
}

double NNfunction_NN_3_7::synapse0x3230de0() {
   return (neuron0x322ba00()*0.153113);
}

double NNfunction_NN_3_7::synapse0x3230e20() {
   return (neuron0x322bd40()*-0.120021);
}

double NNfunction_NN_3_7::synapse0x3230e60() {
   return (neuron0x322c080()*0.011431);
}

double NNfunction_NN_3_7::synapse0x3230ea0() {
   return (neuron0x322c3c0()*-0.280096);
}

double NNfunction_NN_3_7::synapse0x3230ee0() {
   return (neuron0x322c700()*0.625903);
}

double NNfunction_NN_3_7::synapse0x3231260() {
   return (neuron0x3227b40()*0.0100635);
}

double NNfunction_NN_3_7::synapse0x32312a0() {
   return (neuron0x3227e80()*0.0562275);
}

double NNfunction_NN_3_7::synapse0x32312e0() {
   return (neuron0x32281c0()*-5.67134);
}

double NNfunction_NN_3_7::synapse0x3231320() {
   return (neuron0x3228500()*0.00572604);
}

double NNfunction_NN_3_7::synapse0x3231360() {
   return (neuron0x3228840()*-0.00451346);
}

double NNfunction_NN_3_7::synapse0x32313a0() {
   return (neuron0x3228b80()*-0.0125394);
}

double NNfunction_NN_3_7::synapse0x32313e0() {
   return (neuron0x3228ec0()*-0.00196793);
}

double NNfunction_NN_3_7::synapse0x3231420() {
   return (neuron0x3229200()*-0.00309448);
}

double NNfunction_NN_3_7::synapse0x3231460() {
   return (neuron0x3229540()*-0.0033743);
}

double NNfunction_NN_3_7::synapse0x32314a0() {
   return (neuron0x3229880()*0.00693081);
}

double NNfunction_NN_3_7::synapse0x32314e0() {
   return (neuron0x3229bc0()*0.004061);
}

double NNfunction_NN_3_7::synapse0x3231520() {
   return (neuron0x3229f00()*0.0442628);
}

double NNfunction_NN_3_7::synapse0x3231560() {
   return (neuron0x322a240()*-0.0287692);
}

double NNfunction_NN_3_7::synapse0x32315a0() {
   return (neuron0x322a580()*0.00425649);
}

double NNfunction_NN_3_7::synapse0x32315e0() {
   return (neuron0x322a8c0()*-0.00620358);
}

double NNfunction_NN_3_7::synapse0x3231620() {
   return (neuron0x322ac00()*-0.00178868);
}

double NNfunction_NN_3_7::synapse0x32310b0() {
   return (neuron0x322af40()*-0.00414699);
}

double NNfunction_NN_3_7::synapse0x32310f0() {
   return (neuron0x322b4a0()*-0.0105215);
}

double NNfunction_NN_3_7::synapse0x3231770() {
   return (neuron0x322b6c0()*0.00426797);
}

double NNfunction_NN_3_7::synapse0x32317b0() {
   return (neuron0x322ba00()*0.000967144);
}

double NNfunction_NN_3_7::synapse0x32317f0() {
   return (neuron0x322bd40()*-0.0047548);
}

double NNfunction_NN_3_7::synapse0x3231830() {
   return (neuron0x322c080()*-0.000262065);
}

double NNfunction_NN_3_7::synapse0x3231870() {
   return (neuron0x322c3c0()*0.00282167);
}

double NNfunction_NN_3_7::synapse0x32318b0() {
   return (neuron0x322c700()*-2.62627);
}

double NNfunction_NN_3_7::synapse0x322b390() {
   return (neuron0x3227b40()*0.101039);
}

double NNfunction_NN_3_7::synapse0x322b3d0() {
   return (neuron0x3227e80()*-0.0216178);
}

double NNfunction_NN_3_7::synapse0x322b410() {
   return (neuron0x32281c0()*0.303036);
}

double NNfunction_NN_3_7::synapse0x322b450() {
   return (neuron0x3228500()*-0.0750195);
}

double NNfunction_NN_3_7::synapse0x3231e40() {
   return (neuron0x3228840()*0.0157573);
}

double NNfunction_NN_3_7::synapse0x3231e80() {
   return (neuron0x3228b80()*-0.0208679);
}

double NNfunction_NN_3_7::synapse0x3231ec0() {
   return (neuron0x3228ec0()*0.0369957);
}

double NNfunction_NN_3_7::synapse0x3231f00() {
   return (neuron0x3229200()*-0.00961405);
}

double NNfunction_NN_3_7::synapse0x3231f40() {
   return (neuron0x3229540()*0.0144076);
}

double NNfunction_NN_3_7::synapse0x3231f80() {
   return (neuron0x3229880()*0.00632987);
}

double NNfunction_NN_3_7::synapse0x3231fc0() {
   return (neuron0x3229bc0()*-0.018767);
}

double NNfunction_NN_3_7::synapse0x3232000() {
   return (neuron0x3229f00()*-0.781249);
}

double NNfunction_NN_3_7::synapse0x3232040() {
   return (neuron0x322a240()*-0.00575788);
}

double NNfunction_NN_3_7::synapse0x3232080() {
   return (neuron0x322a580()*0.0270551);
}

double NNfunction_NN_3_7::synapse0x32320c0() {
   return (neuron0x322a8c0()*0.0561214);
}

double NNfunction_NN_3_7::synapse0x3232100() {
   return (neuron0x322ac00()*-0.0221687);
}

double NNfunction_NN_3_7::synapse0x3231a80() {
   return (neuron0x322af40()*0.00390105);
}

double NNfunction_NN_3_7::synapse0x3231ac0() {
   return (neuron0x322b4a0()*0.00175662);
}

double NNfunction_NN_3_7::synapse0x3232250() {
   return (neuron0x322b6c0()*-0.0250605);
}

double NNfunction_NN_3_7::synapse0x3232290() {
   return (neuron0x322ba00()*-0.0283881);
}

double NNfunction_NN_3_7::synapse0x32322d0() {
   return (neuron0x322bd40()*0.0146815);
}

double NNfunction_NN_3_7::synapse0x3232310() {
   return (neuron0x322c080()*0.000644396);
}

double NNfunction_NN_3_7::synapse0x3232350() {
   return (neuron0x322c3c0()*0.0324753);
}

double NNfunction_NN_3_7::synapse0x3232390() {
   return (neuron0x322c700()*-4.21471);
}

double NNfunction_NN_3_7::synapse0x3232710() {
   return (neuron0x3227b40()*-0.0424154);
}

double NNfunction_NN_3_7::synapse0x3232750() {
   return (neuron0x3227e80()*-0.123363);
}

double NNfunction_NN_3_7::synapse0x3232790() {
   return (neuron0x32281c0()*4.63932);
}

double NNfunction_NN_3_7::synapse0x32327d0() {
   return (neuron0x3228500()*-0.0452638);
}

double NNfunction_NN_3_7::synapse0x3232810() {
   return (neuron0x3228840()*-0.0368993);
}

double NNfunction_NN_3_7::synapse0x3232850() {
   return (neuron0x3228b80()*0.000516061);
}

double NNfunction_NN_3_7::synapse0x3232890() {
   return (neuron0x3228ec0()*-0.013007);
}

double NNfunction_NN_3_7::synapse0x32328d0() {
   return (neuron0x3229200()*-0.00768139);
}

double NNfunction_NN_3_7::synapse0x3232910() {
   return (neuron0x3229540()*-0.0431561);
}

double NNfunction_NN_3_7::synapse0x3232950() {
   return (neuron0x3229880()*-0.042117);
}

double NNfunction_NN_3_7::synapse0x3232990() {
   return (neuron0x3229bc0()*0.00696012);
}

double NNfunction_NN_3_7::synapse0x32329d0() {
   return (neuron0x3229f00()*-0.00616048);
}

double NNfunction_NN_3_7::synapse0x3232a10() {
   return (neuron0x322a240()*0.106413);
}

double NNfunction_NN_3_7::synapse0x3232a50() {
   return (neuron0x322a580()*-0.00882781);
}

double NNfunction_NN_3_7::synapse0x3232a90() {
   return (neuron0x322a8c0()*0.0334645);
}

double NNfunction_NN_3_7::synapse0x3232ad0() {
   return (neuron0x322ac00()*-0.0492642);
}

double NNfunction_NN_3_7::synapse0x3232560() {
   return (neuron0x322af40()*0.00338332);
}

double NNfunction_NN_3_7::synapse0x32325a0() {
   return (neuron0x322b4a0()*0.055081);
}

double NNfunction_NN_3_7::synapse0x3232c20() {
   return (neuron0x322b6c0()*0.00414723);
}

double NNfunction_NN_3_7::synapse0x3232c60() {
   return (neuron0x322ba00()*-0.0566094);
}

double NNfunction_NN_3_7::synapse0x3232ca0() {
   return (neuron0x322bd40()*0.0293807);
}

double NNfunction_NN_3_7::synapse0x3232ce0() {
   return (neuron0x322c080()*-0.0363953);
}

double NNfunction_NN_3_7::synapse0x3232d20() {
   return (neuron0x322c3c0()*0.0404465);
}

double NNfunction_NN_3_7::synapse0x3232d60() {
   return (neuron0x322c700()*0.978571);
}

double NNfunction_NN_3_7::synapse0x32330e0() {
   return (neuron0x3227b40()*-0.0287848);
}

double NNfunction_NN_3_7::synapse0x3233120() {
   return (neuron0x3227e80()*3.15551);
}

double NNfunction_NN_3_7::synapse0x3233160() {
   return (neuron0x32281c0()*-4.64645);
}

double NNfunction_NN_3_7::synapse0x32331a0() {
   return (neuron0x3228500()*0.0608034);
}

double NNfunction_NN_3_7::synapse0x32331e0() {
   return (neuron0x3228840()*0.0525913);
}

double NNfunction_NN_3_7::synapse0x3233220() {
   return (neuron0x3228b80()*0.0225393);
}

double NNfunction_NN_3_7::synapse0x3233260() {
   return (neuron0x3228ec0()*0.0322788);
}

double NNfunction_NN_3_7::synapse0x32332a0() {
   return (neuron0x3229200()*0.0129961);
}

double NNfunction_NN_3_7::synapse0x32332e0() {
   return (neuron0x3229540()*0.0345734);
}

double NNfunction_NN_3_7::synapse0x3233320() {
   return (neuron0x3229880()*0.0086668);
}

double NNfunction_NN_3_7::synapse0x3233360() {
   return (neuron0x3229bc0()*0.0196633);
}

double NNfunction_NN_3_7::synapse0x32333a0() {
   return (neuron0x3229f00()*4.38171);
}

double NNfunction_NN_3_7::synapse0x32333e0() {
   return (neuron0x322a240()*-0.0176187);
}

double NNfunction_NN_3_7::synapse0x3233420() {
   return (neuron0x322a580()*-0.015503);
}

double NNfunction_NN_3_7::synapse0x3233460() {
   return (neuron0x322a8c0()*-0.0219917);
}

double NNfunction_NN_3_7::synapse0x32334a0() {
   return (neuron0x322ac00()*0.0213117);
}

double NNfunction_NN_3_7::synapse0x3232f30() {
   return (neuron0x322af40()*-0.0505845);
}

double NNfunction_NN_3_7::synapse0x3232f70() {
   return (neuron0x322b4a0()*-0.0219672);
}

double NNfunction_NN_3_7::synapse0x322fd00() {
   return (neuron0x322b6c0()*-0.0102854);
}

double NNfunction_NN_3_7::synapse0x322fd40() {
   return (neuron0x322ba00()*-0.0188982);
}

double NNfunction_NN_3_7::synapse0x322fd80() {
   return (neuron0x322bd40()*-0.0131253);
}

double NNfunction_NN_3_7::synapse0x322fdc0() {
   return (neuron0x322c080()*0.015941);
}

double NNfunction_NN_3_7::synapse0x322fe00() {
   return (neuron0x322c3c0()*-0.095818);
}

double NNfunction_NN_3_7::synapse0x322fe40() {
   return (neuron0x322c700()*-0.244878);
}

double NNfunction_NN_3_7::synapse0x32301c0() {
   return (neuron0x3227b40()*-0.0234715);
}

double NNfunction_NN_3_7::synapse0x3230200() {
   return (neuron0x3227e80()*0.0287873);
}

double NNfunction_NN_3_7::synapse0x3230240() {
   return (neuron0x32281c0()*0.0157474);
}

double NNfunction_NN_3_7::synapse0x3230280() {
   return (neuron0x3228500()*-2.68278);
}

double NNfunction_NN_3_7::synapse0x32302c0() {
   return (neuron0x3228840()*-0.0189782);
}

double NNfunction_NN_3_7::synapse0x3230300() {
   return (neuron0x3228b80()*-0.0325083);
}

double NNfunction_NN_3_7::synapse0x3230340() {
   return (neuron0x3228ec0()*-0.0546041);
}

double NNfunction_NN_3_7::synapse0x3230380() {
   return (neuron0x3229200()*0.0108866);
}

double NNfunction_NN_3_7::synapse0x32303c0() {
   return (neuron0x3229540()*0.0151309);
}

double NNfunction_NN_3_7::synapse0x3230400() {
   return (neuron0x3229880()*0.00162446);
}

double NNfunction_NN_3_7::synapse0x3230440() {
   return (neuron0x3229bc0()*-0.00726517);
}

double NNfunction_NN_3_7::synapse0x3230480() {
   return (neuron0x3229f00()*0.982877);
}

double NNfunction_NN_3_7::synapse0x32304c0() {
   return (neuron0x322a240()*0.0420187);
}

double NNfunction_NN_3_7::synapse0x3234600() {
   return (neuron0x322a580()*0.0687026);
}

double NNfunction_NN_3_7::synapse0x3234640() {
   return (neuron0x322a8c0()*-0.0301854);
}

double NNfunction_NN_3_7::synapse0x3234680() {
   return (neuron0x322ac00()*-0.00873941);
}

double NNfunction_NN_3_7::synapse0x3230010() {
   return (neuron0x322af40()*0.0930004);
}

double NNfunction_NN_3_7::synapse0x3230050() {
   return (neuron0x322b4a0()*0.0926701);
}

double NNfunction_NN_3_7::synapse0x32347d0() {
   return (neuron0x322b6c0()*0.00975071);
}

double NNfunction_NN_3_7::synapse0x3234810() {
   return (neuron0x322ba00()*0.016758);
}

double NNfunction_NN_3_7::synapse0x3234850() {
   return (neuron0x322bd40()*0.0288726);
}

double NNfunction_NN_3_7::synapse0x3234890() {
   return (neuron0x322c080()*-0.0101007);
}

double NNfunction_NN_3_7::synapse0x32348d0() {
   return (neuron0x322c3c0()*0.00128013);
}

double NNfunction_NN_3_7::synapse0x3234910() {
   return (neuron0x322c700()*-0.00776444);
}

double NNfunction_NN_3_7::synapse0x3234c90() {
   return (neuron0x3227b40()*-0.0336442);
}

double NNfunction_NN_3_7::synapse0x3234cd0() {
   return (neuron0x3227e80()*14.4192);
}

double NNfunction_NN_3_7::synapse0x3234d10() {
   return (neuron0x32281c0()*-0.240675);
}

double NNfunction_NN_3_7::synapse0x3234d50() {
   return (neuron0x3228500()*-0.00806111);
}

double NNfunction_NN_3_7::synapse0x3234d90() {
   return (neuron0x3228840()*-0.0170396);
}

double NNfunction_NN_3_7::synapse0x3234dd0() {
   return (neuron0x3228b80()*0.0116701);
}

double NNfunction_NN_3_7::synapse0x3234e10() {
   return (neuron0x3228ec0()*0.00767313);
}

double NNfunction_NN_3_7::synapse0x3234e50() {
   return (neuron0x3229200()*-0.000275487);
}

double NNfunction_NN_3_7::synapse0x3234e90() {
   return (neuron0x3229540()*-0.00316783);
}

double NNfunction_NN_3_7::synapse0x3234ed0() {
   return (neuron0x3229880()*0.00615889);
}

double NNfunction_NN_3_7::synapse0x3234f10() {
   return (neuron0x3229bc0()*-0.000269998);
}

double NNfunction_NN_3_7::synapse0x3234f50() {
   return (neuron0x3229f00()*-0.0128115);
}

double NNfunction_NN_3_7::synapse0x3234f90() {
   return (neuron0x322a240()*-0.00650071);
}

double NNfunction_NN_3_7::synapse0x3234fd0() {
   return (neuron0x322a580()*0.00256262);
}

double NNfunction_NN_3_7::synapse0x3235010() {
   return (neuron0x322a8c0()*0.00668124);
}

double NNfunction_NN_3_7::synapse0x3235050() {
   return (neuron0x322ac00()*0.0122765);
}

double NNfunction_NN_3_7::synapse0x3234ae0() {
   return (neuron0x322af40()*-0.000834195);
}

double NNfunction_NN_3_7::synapse0x3234b20() {
   return (neuron0x322b4a0()*-0.0125667);
}

double NNfunction_NN_3_7::synapse0x32351a0() {
   return (neuron0x322b6c0()*0.0014427);
}

double NNfunction_NN_3_7::synapse0x32351e0() {
   return (neuron0x322ba00()*0.00666934);
}

double NNfunction_NN_3_7::synapse0x3235220() {
   return (neuron0x322bd40()*-0.00498105);
}

double NNfunction_NN_3_7::synapse0x3235260() {
   return (neuron0x322c080()*0.00888381);
}

double NNfunction_NN_3_7::synapse0x32352a0() {
   return (neuron0x322c3c0()*0.00630708);
}

double NNfunction_NN_3_7::synapse0x32352e0() {
   return (neuron0x322c700()*-2.70925);
}

double NNfunction_NN_3_7::synapse0x3235660() {
   return (neuron0x3227b40()*0.0507412);
}

double NNfunction_NN_3_7::synapse0x32356a0() {
   return (neuron0x3227e80()*-0.0225133);
}

double NNfunction_NN_3_7::synapse0x32356e0() {
   return (neuron0x32281c0()*-0.0983608);
}

double NNfunction_NN_3_7::synapse0x3235720() {
   return (neuron0x3228500()*-1.0942);
}

double NNfunction_NN_3_7::synapse0x3235760() {
   return (neuron0x3228840()*-0.0349002);
}

double NNfunction_NN_3_7::synapse0x32357a0() {
   return (neuron0x3228b80()*0.0236085);
}

double NNfunction_NN_3_7::synapse0x32357e0() {
   return (neuron0x3228ec0()*-0.0130874);
}

double NNfunction_NN_3_7::synapse0x3235820() {
   return (neuron0x3229200()*-0.0124798);
}

double NNfunction_NN_3_7::synapse0x3235860() {
   return (neuron0x3229540()*0.000366576);
}

double NNfunction_NN_3_7::synapse0x32358a0() {
   return (neuron0x3229880()*-0.0181845);
}

double NNfunction_NN_3_7::synapse0x32358e0() {
   return (neuron0x3229bc0()*0.0119934);
}

double NNfunction_NN_3_7::synapse0x3235920() {
   return (neuron0x3229f00()*1.18889);
}

double NNfunction_NN_3_7::synapse0x3235960() {
   return (neuron0x322a240()*0.104425);
}

double NNfunction_NN_3_7::synapse0x32359a0() {
   return (neuron0x322a580()*0.0761699);
}

double NNfunction_NN_3_7::synapse0x32359e0() {
   return (neuron0x322a8c0()*-0.0603873);
}

double NNfunction_NN_3_7::synapse0x3235a20() {
   return (neuron0x322ac00()*-0.0058155);
}

double NNfunction_NN_3_7::synapse0x32354b0() {
   return (neuron0x322af40()*0.106896);
}

double NNfunction_NN_3_7::synapse0x32354f0() {
   return (neuron0x322b4a0()*0.0761133);
}

double NNfunction_NN_3_7::synapse0x3235b70() {
   return (neuron0x322b6c0()*0.00537964);
}

double NNfunction_NN_3_7::synapse0x3235bb0() {
   return (neuron0x322ba00()*0.0612893);
}

double NNfunction_NN_3_7::synapse0x3235bf0() {
   return (neuron0x322bd40()*0.0199048);
}

double NNfunction_NN_3_7::synapse0x3235c30() {
   return (neuron0x322c080()*0.0560736);
}

double NNfunction_NN_3_7::synapse0x3235c70() {
   return (neuron0x322c3c0()*-0.027149);
}

double NNfunction_NN_3_7::synapse0x3235cb0() {
   return (neuron0x322c700()*-0.217558);
}

double NNfunction_NN_3_7::synapse0x3236030() {
   return (neuron0x3227b40()*0.0295291);
}

double NNfunction_NN_3_7::synapse0x3236070() {
   return (neuron0x3227e80()*-0.0561996);
}

double NNfunction_NN_3_7::synapse0x32360b0() {
   return (neuron0x32281c0()*0.120146);
}

double NNfunction_NN_3_7::synapse0x32360f0() {
   return (neuron0x3228500()*-0.000835004);
}

double NNfunction_NN_3_7::synapse0x3236130() {
   return (neuron0x3228840()*0.00469195);
}

double NNfunction_NN_3_7::synapse0x3236170() {
   return (neuron0x3228b80()*0.00976161);
}

double NNfunction_NN_3_7::synapse0x32361b0() {
   return (neuron0x3228ec0()*-0.00588595);
}

double NNfunction_NN_3_7::synapse0x32361f0() {
   return (neuron0x3229200()*0.0223393);
}

double NNfunction_NN_3_7::synapse0x3236230() {
   return (neuron0x3229540()*-0.0073738);
}

double NNfunction_NN_3_7::synapse0x3236270() {
   return (neuron0x3229880()*0.0270741);
}

double NNfunction_NN_3_7::synapse0x32362b0() {
   return (neuron0x3229bc0()*0.0201845);
}

double NNfunction_NN_3_7::synapse0x32362f0() {
   return (neuron0x3229f00()*2.80127);
}

double NNfunction_NN_3_7::synapse0x3236330() {
   return (neuron0x322a240()*0.00556367);
}

double NNfunction_NN_3_7::synapse0x3236370() {
   return (neuron0x322a580()*-0.000296514);
}

double NNfunction_NN_3_7::synapse0x32363b0() {
   return (neuron0x322a8c0()*-0.000521281);
}

double NNfunction_NN_3_7::synapse0x32363f0() {
   return (neuron0x322ac00()*-0.0183727);
}

double NNfunction_NN_3_7::synapse0x3235e80() {
   return (neuron0x322af40()*0.0285912);
}

double NNfunction_NN_3_7::synapse0x3235ec0() {
   return (neuron0x322b4a0()*-0.00726056);
}

double NNfunction_NN_3_7::synapse0x3236540() {
   return (neuron0x322b6c0()*0.00165426);
}

double NNfunction_NN_3_7::synapse0x3236580() {
   return (neuron0x322ba00()*0.00673292);
}

double NNfunction_NN_3_7::synapse0x32365c0() {
   return (neuron0x322bd40()*0.00762285);
}

double NNfunction_NN_3_7::synapse0x3236600() {
   return (neuron0x322c080()*-0.010662);
}

double NNfunction_NN_3_7::synapse0x3236640() {
   return (neuron0x322c3c0()*0.00301535);
}

double NNfunction_NN_3_7::synapse0x3236680() {
   return (neuron0x322c700()*-0.800528);
}

double NNfunction_NN_3_7::synapse0x3236a00() {
   return (neuron0x3227b40()*-0.0530827);
}

double NNfunction_NN_3_7::synapse0x3227d60() {
   return (neuron0x3227e80()*0.517585);
}

double NNfunction_NN_3_7::synapse0x3227da0() {
   return (neuron0x32281c0()*-0.0383273);
}

double NNfunction_NN_3_7::synapse0x32280a0() {
   return (neuron0x3228500()*0.0371693);
}

double NNfunction_NN_3_7::synapse0x32280e0() {
   return (neuron0x3228840()*-0.00691282);
}

double NNfunction_NN_3_7::synapse0x32283e0() {
   return (neuron0x3228b80()*0.00961469);
}

double NNfunction_NN_3_7::synapse0x3228420() {
   return (neuron0x3228ec0()*-0.000771574);
}

double NNfunction_NN_3_7::synapse0x3228720() {
   return (neuron0x3229200()*0.00746955);
}

double NNfunction_NN_3_7::synapse0x3228760() {
   return (neuron0x3229540()*-0.020356);
}

double NNfunction_NN_3_7::synapse0x3228a60() {
   return (neuron0x3229880()*-0.0569923);
}

double NNfunction_NN_3_7::synapse0x3228aa0() {
   return (neuron0x3229bc0()*0.0133367);
}

double NNfunction_NN_3_7::synapse0x3228da0() {
   return (neuron0x3229f00()*0.806596);
}

double NNfunction_NN_3_7::synapse0x3228de0() {
   return (neuron0x322a240()*0.0506959);
}

double NNfunction_NN_3_7::synapse0x32290e0() {
   return (neuron0x322a580()*-0.0717959);
}

double NNfunction_NN_3_7::synapse0x3229120() {
   return (neuron0x322a8c0()*0.0410901);
}

double NNfunction_NN_3_7::synapse0x3229420() {
   return (neuron0x322ac00()*0.00256133);
}

double NNfunction_NN_3_7::synapse0x3229460() {
   return (neuron0x322af40()*-0.0134666);
}

double NNfunction_NN_3_7::synapse0x3229760() {
   return (neuron0x322b4a0()*-0.00757585);
}

double NNfunction_NN_3_7::synapse0x32297a0() {
   return (neuron0x322b6c0()*0.00838612);
}

double NNfunction_NN_3_7::synapse0x3229aa0() {
   return (neuron0x322ba00()*-0.0528884);
}

double NNfunction_NN_3_7::synapse0x3229ae0() {
   return (neuron0x322bd40()*0.0187684);
}

double NNfunction_NN_3_7::synapse0x3229de0() {
   return (neuron0x322c080()*0.04568);
}

double NNfunction_NN_3_7::synapse0x3229e20() {
   return (neuron0x322c3c0()*-0.00864679);
}

double NNfunction_NN_3_7::synapse0x322a120() {
   return (neuron0x322c700()*-1.19159);
}

double NNfunction_NN_3_7::synapse0x322a160() {
   return (neuron0x3227b40()*0.0410853);
}

double NNfunction_NN_3_7::synapse0x322ae20() {
   return (neuron0x3227e80()*-0.032127);
}

double NNfunction_NN_3_7::synapse0x322ae60() {
   return (neuron0x32281c0()*-5.13848);
}

double NNfunction_NN_3_7::synapse0x3236850() {
   return (neuron0x3228500()*0.0203488);
}

double NNfunction_NN_3_7::synapse0x3236890() {
   return (neuron0x3228840()*-0.0112187);
}

double NNfunction_NN_3_7::synapse0x322b160() {
   return (neuron0x3228b80()*-0.0100279);
}

double NNfunction_NN_3_7::synapse0x322b1a0() {
   return (neuron0x3228ec0()*-0.0141005);
}

double NNfunction_NN_3_7::synapse0x2fd90f0() {
   return (neuron0x3229200()*-0.024172);
}

double NNfunction_NN_3_7::synapse0x2fd9130() {
   return (neuron0x3229540()*0.00759851);
}

double NNfunction_NN_3_7::synapse0x322b8e0() {
   return (neuron0x3229880()*0.00455846);
}

double NNfunction_NN_3_7::synapse0x322b920() {
   return (neuron0x3229bc0()*0.0159052);
}

double NNfunction_NN_3_7::synapse0x322bc20() {
   return (neuron0x3229f00()*6.21128);
}

double NNfunction_NN_3_7::synapse0x322bc60() {
   return (neuron0x322a240()*-0.0117135);
}

double NNfunction_NN_3_7::synapse0x322bf60() {
   return (neuron0x322a580()*-0.0280425);
}

double NNfunction_NN_3_7::synapse0x322bfa0() {
   return (neuron0x322a8c0()*-0.0119085);
}

double NNfunction_NN_3_7::synapse0x322c2a0() {
   return (neuron0x322ac00()*-0.00150921);
}

double NNfunction_NN_3_7::synapse0x322c2e0() {
   return (neuron0x322af40()*-0.00164071);
}

double NNfunction_NN_3_7::synapse0x322c5e0() {
   return (neuron0x322b4a0()*0.0346316);
}

double NNfunction_NN_3_7::synapse0x322c620() {
   return (neuron0x322b6c0()*0.0309789);
}

double NNfunction_NN_3_7::synapse0x322c920() {
   return (neuron0x322ba00()*0.00959524);
}

double NNfunction_NN_3_7::synapse0x322c960() {
   return (neuron0x322bd40()*-0.0135019);
}

double NNfunction_NN_3_7::synapse0x322a460() {
   return (neuron0x322c080()*0.0031494);
}

double NNfunction_NN_3_7::synapse0x322a4a0() {
   return (neuron0x322c3c0()*0.00895867);
}

double NNfunction_NN_3_7::synapse0x3238770() {
   return (neuron0x322c700()*0.782898);
}

double NNfunction_NN_3_7::synapse0x3238af0() {
   return (neuron0x3227b40()*-0.00209991);
}

double NNfunction_NN_3_7::synapse0x3238b30() {
   return (neuron0x3227e80()*-4.49099);
}

double NNfunction_NN_3_7::synapse0x3238b70() {
   return (neuron0x32281c0()*2.50669);
}

double NNfunction_NN_3_7::synapse0x3238bb0() {
   return (neuron0x3228500()*-0.00362303);
}

double NNfunction_NN_3_7::synapse0x3238bf0() {
   return (neuron0x3228840()*0.0285702);
}

double NNfunction_NN_3_7::synapse0x3238c30() {
   return (neuron0x3228b80()*0.0335742);
}

double NNfunction_NN_3_7::synapse0x3238c70() {
   return (neuron0x3228ec0()*-0.0186673);
}

double NNfunction_NN_3_7::synapse0x3238cb0() {
   return (neuron0x3229200()*0.0133837);
}

double NNfunction_NN_3_7::synapse0x3238cf0() {
   return (neuron0x3229540()*-0.0548987);
}

double NNfunction_NN_3_7::synapse0x3238d30() {
   return (neuron0x3229880()*0.00883208);
}

double NNfunction_NN_3_7::synapse0x3238d70() {
   return (neuron0x3229bc0()*-0.00927177);
}

double NNfunction_NN_3_7::synapse0x3238db0() {
   return (neuron0x3229f00()*-0.052724);
}

double NNfunction_NN_3_7::synapse0x3238df0() {
   return (neuron0x322a240()*-0.0179133);
}

double NNfunction_NN_3_7::synapse0x3238e30() {
   return (neuron0x322a580()*-0.0528938);
}

double NNfunction_NN_3_7::synapse0x3238e70() {
   return (neuron0x322a8c0()*-0.0161068);
}

double NNfunction_NN_3_7::synapse0x3238eb0() {
   return (neuron0x322ac00()*-0.0035562);
}

double NNfunction_NN_3_7::synapse0x3238940() {
   return (neuron0x322af40()*-0.0164782);
}

double NNfunction_NN_3_7::synapse0x3238980() {
   return (neuron0x322b4a0()*-0.0246797);
}

double NNfunction_NN_3_7::synapse0x3239000() {
   return (neuron0x322b6c0()*0.0414172);
}

double NNfunction_NN_3_7::synapse0x3239040() {
   return (neuron0x322ba00()*-0.00639831);
}

double NNfunction_NN_3_7::synapse0x3239080() {
   return (neuron0x322bd40()*0.0209144);
}

double NNfunction_NN_3_7::synapse0x32390c0() {
   return (neuron0x322c080()*-0.00706766);
}

double NNfunction_NN_3_7::synapse0x3239100() {
   return (neuron0x322c3c0()*-0.000588281);
}

double NNfunction_NN_3_7::synapse0x3239140() {
   return (neuron0x322c700()*-0.32361);
}

double NNfunction_NN_3_7::synapse0x32394c0() {
   return (neuron0x3227b40()*-0.0971553);
}

double NNfunction_NN_3_7::synapse0x3239500() {
   return (neuron0x3227e80()*-0.255863);
}

double NNfunction_NN_3_7::synapse0x3239540() {
   return (neuron0x32281c0()*-0.676992);
}

double NNfunction_NN_3_7::synapse0x3239580() {
   return (neuron0x3228500()*0.0033717);
}

double NNfunction_NN_3_7::synapse0x32395c0() {
   return (neuron0x3228840()*-0.0138261);
}

double NNfunction_NN_3_7::synapse0x3239600() {
   return (neuron0x3228b80()*0.0409845);
}

double NNfunction_NN_3_7::synapse0x3239640() {
   return (neuron0x3228ec0()*0.0309232);
}

double NNfunction_NN_3_7::synapse0x3239680() {
   return (neuron0x3229200()*0.0137163);
}

double NNfunction_NN_3_7::synapse0x32396c0() {
   return (neuron0x3229540()*-0.0290533);
}

double NNfunction_NN_3_7::synapse0x3239700() {
   return (neuron0x3229880()*-0.0276402);
}

double NNfunction_NN_3_7::synapse0x3239740() {
   return (neuron0x3229bc0()*0.0155168);
}

double NNfunction_NN_3_7::synapse0x3239780() {
   return (neuron0x3229f00()*-0.998713);
}

double NNfunction_NN_3_7::synapse0x32397c0() {
   return (neuron0x322a240()*-0.0416328);
}

double NNfunction_NN_3_7::synapse0x3239800() {
   return (neuron0x322a580()*-0.0319301);
}

double NNfunction_NN_3_7::synapse0x3239840() {
   return (neuron0x322a8c0()*0.00711847);
}

double NNfunction_NN_3_7::synapse0x3239880() {
   return (neuron0x322ac00()*0.0138231);
}

double NNfunction_NN_3_7::synapse0x3239310() {
   return (neuron0x322af40()*-0.0415056);
}

double NNfunction_NN_3_7::synapse0x3239350() {
   return (neuron0x322b4a0()*-0.0548368);
}

double NNfunction_NN_3_7::synapse0x32399d0() {
   return (neuron0x322b6c0()*-0.0195819);
}

double NNfunction_NN_3_7::synapse0x3239a10() {
   return (neuron0x322ba00()*-0.0400817);
}

double NNfunction_NN_3_7::synapse0x3239a50() {
   return (neuron0x322bd40()*-0.0102827);
}

double NNfunction_NN_3_7::synapse0x3239a90() {
   return (neuron0x322c080()*0.000701849);
}

double NNfunction_NN_3_7::synapse0x3239ad0() {
   return (neuron0x322c3c0()*0.00605558);
}

double NNfunction_NN_3_7::synapse0x3239b10() {
   return (neuron0x322c700()*-0.91062);
}

double NNfunction_NN_3_7::synapse0x3239e90() {
   return (neuron0x3227b40()*0.0688225);
}

double NNfunction_NN_3_7::synapse0x3239ed0() {
   return (neuron0x3227e80()*0.0454192);
}

double NNfunction_NN_3_7::synapse0x3239f10() {
   return (neuron0x32281c0()*1.17992);
}

double NNfunction_NN_3_7::synapse0x3239f50() {
   return (neuron0x3228500()*0.00767328);
}

double NNfunction_NN_3_7::synapse0x3239f90() {
   return (neuron0x3228840()*-0.0072486);
}

double NNfunction_NN_3_7::synapse0x3239fd0() {
   return (neuron0x3228b80()*-0.0295438);
}

double NNfunction_NN_3_7::synapse0x323a010() {
   return (neuron0x3228ec0()*-0.0116521);
}

double NNfunction_NN_3_7::synapse0x323a050() {
   return (neuron0x3229200()*0.00181303);
}

double NNfunction_NN_3_7::synapse0x323a090() {
   return (neuron0x3229540()*0.0257408);
}

double NNfunction_NN_3_7::synapse0x323a0d0() {
   return (neuron0x3229880()*0.0243799);
}

double NNfunction_NN_3_7::synapse0x323a110() {
   return (neuron0x3229bc0()*0.00338399);
}

double NNfunction_NN_3_7::synapse0x323a150() {
   return (neuron0x3229f00()*-0.0751878);
}

double NNfunction_NN_3_7::synapse0x323a190() {
   return (neuron0x322a240()*-0.00185954);
}

double NNfunction_NN_3_7::synapse0x323a1d0() {
   return (neuron0x322a580()*0.0116639);
}

double NNfunction_NN_3_7::synapse0x323a210() {
   return (neuron0x322a8c0()*-0.0249085);
}

double NNfunction_NN_3_7::synapse0x323a250() {
   return (neuron0x322ac00()*0.0053054);
}

double NNfunction_NN_3_7::synapse0x3239ce0() {
   return (neuron0x322af40()*0.0293982);
}

double NNfunction_NN_3_7::synapse0x3239d20() {
   return (neuron0x322b4a0()*0.00128431);
}

double NNfunction_NN_3_7::synapse0x323a3a0() {
   return (neuron0x322b6c0()*0.0348589);
}

double NNfunction_NN_3_7::synapse0x323a3e0() {
   return (neuron0x322ba00()*0.012474);
}

double NNfunction_NN_3_7::synapse0x323a420() {
   return (neuron0x322bd40()*-0.00696839);
}

double NNfunction_NN_3_7::synapse0x323a460() {
   return (neuron0x322c080()*0.000479168);
}

double NNfunction_NN_3_7::synapse0x323a4a0() {
   return (neuron0x322c3c0()*-0.0276393);
}

double NNfunction_NN_3_7::synapse0x323a4e0() {
   return (neuron0x322c700()*1.37091);
}

double NNfunction_NN_3_7::synapse0x323a860() {
   return (neuron0x3227b40()*-0.00532629);
}

double NNfunction_NN_3_7::synapse0x323a8a0() {
   return (neuron0x3227e80()*-1.77683);
}

double NNfunction_NN_3_7::synapse0x323a8e0() {
   return (neuron0x32281c0()*0.335372);
}

double NNfunction_NN_3_7::synapse0x323a920() {
   return (neuron0x3228500()*0.034668);
}

double NNfunction_NN_3_7::synapse0x323a960() {
   return (neuron0x3228840()*0.000440257);
}

double NNfunction_NN_3_7::synapse0x323a9a0() {
   return (neuron0x3228b80()*-0.053231);
}

double NNfunction_NN_3_7::synapse0x323a9e0() {
   return (neuron0x3228ec0()*0.0817385);
}

double NNfunction_NN_3_7::synapse0x323aa20() {
   return (neuron0x3229200()*-0.0602652);
}

double NNfunction_NN_3_7::synapse0x323aa60() {
   return (neuron0x3229540()*-0.0162135);
}

double NNfunction_NN_3_7::synapse0x323aaa0() {
   return (neuron0x3229880()*-0.0155411);
}

double NNfunction_NN_3_7::synapse0x323aae0() {
   return (neuron0x3229bc0()*-0.018078);
}

double NNfunction_NN_3_7::synapse0x323ab20() {
   return (neuron0x3229f00()*-0.0860557);
}

double NNfunction_NN_3_7::synapse0x323ab60() {
   return (neuron0x322a240()*0.00577177);
}

double NNfunction_NN_3_7::synapse0x323aba0() {
   return (neuron0x322a580()*0.00933644);
}

double NNfunction_NN_3_7::synapse0x323abe0() {
   return (neuron0x322a8c0()*-0.0157649);
}

double NNfunction_NN_3_7::synapse0x323ac20() {
   return (neuron0x322ac00()*-0.00771766);
}

double NNfunction_NN_3_7::synapse0x323a6b0() {
   return (neuron0x322af40()*0.00644654);
}

double NNfunction_NN_3_7::synapse0x323a6f0() {
   return (neuron0x322b4a0()*-0.0221245);
}

double NNfunction_NN_3_7::synapse0x323ad70() {
   return (neuron0x322b6c0()*-0.0409801);
}

double NNfunction_NN_3_7::synapse0x323adb0() {
   return (neuron0x322ba00()*0.0197624);
}

double NNfunction_NN_3_7::synapse0x323adf0() {
   return (neuron0x322bd40()*0.0163642);
}

double NNfunction_NN_3_7::synapse0x323ae30() {
   return (neuron0x322c080()*0.0385159);
}

double NNfunction_NN_3_7::synapse0x323ae70() {
   return (neuron0x322c3c0()*-0.0468749);
}

double NNfunction_NN_3_7::synapse0x323aeb0() {
   return (neuron0x322c700()*4.90556);
}

double NNfunction_NN_3_7::synapse0x323b230() {
   return (neuron0x3227b40()*0.0570401);
}

double NNfunction_NN_3_7::synapse0x323b270() {
   return (neuron0x3227e80()*-0.0512432);
}

double NNfunction_NN_3_7::synapse0x323b2b0() {
   return (neuron0x32281c0()*0.0664167);
}

double NNfunction_NN_3_7::synapse0x323b2f0() {
   return (neuron0x3228500()*-0.00273216);
}

double NNfunction_NN_3_7::synapse0x323b330() {
   return (neuron0x3228840()*0.0159437);
}

double NNfunction_NN_3_7::synapse0x323b370() {
   return (neuron0x3228b80()*-0.0127589);
}

double NNfunction_NN_3_7::synapse0x323b3b0() {
   return (neuron0x3228ec0()*0.00303679);
}

double NNfunction_NN_3_7::synapse0x323b3f0() {
   return (neuron0x3229200()*0.00481516);
}

double NNfunction_NN_3_7::synapse0x323b430() {
   return (neuron0x3229540()*-0.00498551);
}

double NNfunction_NN_3_7::synapse0x32335f0() {
   return (neuron0x3229880()*0.00572208);
}

double NNfunction_NN_3_7::synapse0x3233630() {
   return (neuron0x3229bc0()*-0.0212503);
}

double NNfunction_NN_3_7::synapse0x3233670() {
   return (neuron0x3229f00()*0.0250045);
}

double NNfunction_NN_3_7::synapse0x32336b0() {
   return (neuron0x322a240()*-0.0258779);
}

double NNfunction_NN_3_7::synapse0x32336f0() {
   return (neuron0x322a580()*0.00947394);
}

double NNfunction_NN_3_7::synapse0x3233730() {
   return (neuron0x322a8c0()*-0.00712828);
}

double NNfunction_NN_3_7::synapse0x3233770() {
   return (neuron0x322ac00()*-0.00483876);
}

double NNfunction_NN_3_7::synapse0x323b080() {
   return (neuron0x322af40()*0.00835203);
}

double NNfunction_NN_3_7::synapse0x323b0c0() {
   return (neuron0x322b4a0()*0.010128);
}

double NNfunction_NN_3_7::synapse0x32338c0() {
   return (neuron0x322b6c0()*-0.00124346);
}

double NNfunction_NN_3_7::synapse0x3233900() {
   return (neuron0x322ba00()*0.00187932);
}

double NNfunction_NN_3_7::synapse0x3233940() {
   return (neuron0x322bd40()*-0.0059481);
}

double NNfunction_NN_3_7::synapse0x3233980() {
   return (neuron0x322c080()*-0.019005);
}

double NNfunction_NN_3_7::synapse0x32339c0() {
   return (neuron0x322c3c0()*-0.00271492);
}

double NNfunction_NN_3_7::synapse0x3233a00() {
   return (neuron0x322c700()*0.766066);
}

double NNfunction_NN_3_7::synapse0x3233d80() {
   return (neuron0x3227b40()*-0.0132703);
}

double NNfunction_NN_3_7::synapse0x3233dc0() {
   return (neuron0x3227e80()*0.0367376);
}

double NNfunction_NN_3_7::synapse0x3233e00() {
   return (neuron0x32281c0()*-5.51367);
}

double NNfunction_NN_3_7::synapse0x3233e40() {
   return (neuron0x3228500()*0.00500038);
}

double NNfunction_NN_3_7::synapse0x3233e80() {
   return (neuron0x3228840()*0.0166081);
}

double NNfunction_NN_3_7::synapse0x3233ec0() {
   return (neuron0x3228b80()*-0.0197636);
}

double NNfunction_NN_3_7::synapse0x3233f00() {
   return (neuron0x3228ec0()*-0.00988182);
}

double NNfunction_NN_3_7::synapse0x3233f40() {
   return (neuron0x3229200()*-0.018424);
}

double NNfunction_NN_3_7::synapse0x3233f80() {
   return (neuron0x3229540()*-0.00842282);
}

double NNfunction_NN_3_7::synapse0x3233fc0() {
   return (neuron0x3229880()*0.00381254);
}

double NNfunction_NN_3_7::synapse0x3234000() {
   return (neuron0x3229bc0()*0.000891817);
}

double NNfunction_NN_3_7::synapse0x3234040() {
   return (neuron0x3229f00()*0.0269797);
}

double NNfunction_NN_3_7::synapse0x3234080() {
   return (neuron0x322a240()*-0.0224538);
}

double NNfunction_NN_3_7::synapse0x32340c0() {
   return (neuron0x322a580()*-0.00326678);
}

double NNfunction_NN_3_7::synapse0x3234100() {
   return (neuron0x322a8c0()*-0.01771);
}

double NNfunction_NN_3_7::synapse0x3234140() {
   return (neuron0x322ac00()*-0.0141593);
}

double NNfunction_NN_3_7::synapse0x3233bd0() {
   return (neuron0x322af40()*-0.00193816);
}

double NNfunction_NN_3_7::synapse0x3233c10() {
   return (neuron0x322b4a0()*0.00429839);
}

double NNfunction_NN_3_7::synapse0x3234290() {
   return (neuron0x322b6c0()*-0.00396207);
}

double NNfunction_NN_3_7::synapse0x32342d0() {
   return (neuron0x322ba00()*-0.012789);
}

double NNfunction_NN_3_7::synapse0x3234310() {
   return (neuron0x322bd40()*0.005055);
}

double NNfunction_NN_3_7::synapse0x3234350() {
   return (neuron0x322c080()*0.00339129);
}

double NNfunction_NN_3_7::synapse0x3234390() {
   return (neuron0x322c3c0()*-0.00264811);
}

double NNfunction_NN_3_7::synapse0x32343d0() {
   return (neuron0x322c700()*-2.42214);
}

double NNfunction_NN_3_7::synapse0x32345a0() {
   return (neuron0x3227b40()*-0.0480231);
}

double NNfunction_NN_3_7::synapse0x323d630() {
   return (neuron0x3227e80()*0.124963);
}

double NNfunction_NN_3_7::synapse0x323d670() {
   return (neuron0x32281c0()*-1.50148);
}

double NNfunction_NN_3_7::synapse0x323d6b0() {
   return (neuron0x3228500()*0.00449224);
}

double NNfunction_NN_3_7::synapse0x323d6f0() {
   return (neuron0x3228840()*-0.00793697);
}

double NNfunction_NN_3_7::synapse0x323d730() {
   return (neuron0x3228b80()*-0.00763321);
}

double NNfunction_NN_3_7::synapse0x323d770() {
   return (neuron0x3228ec0()*-0.00150332);
}

double NNfunction_NN_3_7::synapse0x323d7b0() {
   return (neuron0x3229200()*-0.00879694);
}

double NNfunction_NN_3_7::synapse0x323d7f0() {
   return (neuron0x3229540()*0.00341867);
}

double NNfunction_NN_3_7::synapse0x323d830() {
   return (neuron0x3229880()*-0.0123678);
}

double NNfunction_NN_3_7::synapse0x323d870() {
   return (neuron0x3229bc0()*0.00117169);
}

double NNfunction_NN_3_7::synapse0x323d8b0() {
   return (neuron0x3229f00()*-0.0434236);
}

double NNfunction_NN_3_7::synapse0x323d8f0() {
   return (neuron0x322a240()*-0.0334744);
}

double NNfunction_NN_3_7::synapse0x323d930() {
   return (neuron0x322a580()*0.000527273);
}

double NNfunction_NN_3_7::synapse0x323d970() {
   return (neuron0x322a8c0()*0.00212967);
}

double NNfunction_NN_3_7::synapse0x323d9b0() {
   return (neuron0x322ac00()*-0.016015);
}

double NNfunction_NN_3_7::synapse0x323d480() {
   return (neuron0x322af40()*0.011432);
}

double NNfunction_NN_3_7::synapse0x323d4c0() {
   return (neuron0x322b4a0()*0.00417756);
}

double NNfunction_NN_3_7::synapse0x323db00() {
   return (neuron0x322b6c0()*-0.0106155);
}

double NNfunction_NN_3_7::synapse0x323db40() {
   return (neuron0x322ba00()*-0.0156024);
}

double NNfunction_NN_3_7::synapse0x323db80() {
   return (neuron0x322bd40()*0.0182535);
}

double NNfunction_NN_3_7::synapse0x323dbc0() {
   return (neuron0x322c080()*-0.0050936);
}

double NNfunction_NN_3_7::synapse0x323dc00() {
   return (neuron0x322c3c0()*0.0110755);
}

double NNfunction_NN_3_7::synapse0x323dc40() {
   return (neuron0x322c700()*1.47131);
}

double NNfunction_NN_3_7::synapse0x323dfc0() {
   return (neuron0x3227b40()*0.0237273);
}

double NNfunction_NN_3_7::synapse0x323e000() {
   return (neuron0x3227e80()*-0.0140047);
}

double NNfunction_NN_3_7::synapse0x323e040() {
   return (neuron0x32281c0()*0.343119);
}

double NNfunction_NN_3_7::synapse0x323e080() {
   return (neuron0x3228500()*0.00798937);
}

double NNfunction_NN_3_7::synapse0x323e0c0() {
   return (neuron0x3228840()*0.0151653);
}

double NNfunction_NN_3_7::synapse0x323e100() {
   return (neuron0x3228b80()*0.00751639);
}

double NNfunction_NN_3_7::synapse0x323e140() {
   return (neuron0x3228ec0()*0.00304035);
}

double NNfunction_NN_3_7::synapse0x323e180() {
   return (neuron0x3229200()*-0.000975393);
}

double NNfunction_NN_3_7::synapse0x323e1c0() {
   return (neuron0x3229540()*-0.00512309);
}

double NNfunction_NN_3_7::synapse0x323e200() {
   return (neuron0x3229880()*0.0103049);
}

double NNfunction_NN_3_7::synapse0x323e240() {
   return (neuron0x3229bc0()*-0.00393585);
}

double NNfunction_NN_3_7::synapse0x323e280() {
   return (neuron0x3229f00()*0.304129);
}

double NNfunction_NN_3_7::synapse0x323e2c0() {
   return (neuron0x322a240()*0.0271197);
}

double NNfunction_NN_3_7::synapse0x323e300() {
   return (neuron0x322a580()*0.0117634);
}

double NNfunction_NN_3_7::synapse0x323e340() {
   return (neuron0x322a8c0()*-0.00568833);
}

double NNfunction_NN_3_7::synapse0x323e380() {
   return (neuron0x322ac00()*-0.0143341);
}

double NNfunction_NN_3_7::synapse0x323de10() {
   return (neuron0x322af40()*0.00747711);
}

double NNfunction_NN_3_7::synapse0x323de50() {
   return (neuron0x322b4a0()*0.0155312);
}

double NNfunction_NN_3_7::synapse0x323e4d0() {
   return (neuron0x322b6c0()*-0.0085526);
}

double NNfunction_NN_3_7::synapse0x323e510() {
   return (neuron0x322ba00()*0.00628725);
}

double NNfunction_NN_3_7::synapse0x323e550() {
   return (neuron0x322bd40()*-0.004291);
}

double NNfunction_NN_3_7::synapse0x323e590() {
   return (neuron0x322c080()*0.00623443);
}

double NNfunction_NN_3_7::synapse0x323e5d0() {
   return (neuron0x322c3c0()*-0.00577536);
}

double NNfunction_NN_3_7::synapse0x323e610() {
   return (neuron0x322c700()*0.92233);
}

double NNfunction_NN_3_7::synapse0x323e990() {
   return (neuron0x3227b40()*0.0686237);
}

double NNfunction_NN_3_7::synapse0x323e9d0() {
   return (neuron0x3227e80()*-1.26053);
}

double NNfunction_NN_3_7::synapse0x323ea10() {
   return (neuron0x32281c0()*-0.260612);
}

double NNfunction_NN_3_7::synapse0x323ea50() {
   return (neuron0x3228500()*0.0415545);
}

double NNfunction_NN_3_7::synapse0x323ea90() {
   return (neuron0x3228840()*0.0618053);
}

double NNfunction_NN_3_7::synapse0x323ead0() {
   return (neuron0x3228b80()*0.173223);
}

double NNfunction_NN_3_7::synapse0x323eb10() {
   return (neuron0x3228ec0()*-0.0125252);
}

double NNfunction_NN_3_7::synapse0x323eb50() {
   return (neuron0x3229200()*0.0268365);
}

double NNfunction_NN_3_7::synapse0x323eb90() {
   return (neuron0x3229540()*-0.124142);
}

double NNfunction_NN_3_7::synapse0x323ebd0() {
   return (neuron0x3229880()*-0.123398);
}

double NNfunction_NN_3_7::synapse0x323ec10() {
   return (neuron0x3229bc0()*0.0392645);
}

double NNfunction_NN_3_7::synapse0x323ec50() {
   return (neuron0x3229f00()*0.0615978);
}

double NNfunction_NN_3_7::synapse0x323ec90() {
   return (neuron0x322a240()*-0.119779);
}

double NNfunction_NN_3_7::synapse0x323ecd0() {
   return (neuron0x322a580()*-0.147268);
}

double NNfunction_NN_3_7::synapse0x323ed10() {
   return (neuron0x322a8c0()*-0.00716953);
}

double NNfunction_NN_3_7::synapse0x323ed50() {
   return (neuron0x322ac00()*0.0388175);
}

double NNfunction_NN_3_7::synapse0x323e7e0() {
   return (neuron0x322af40()*-0.00117494);
}

double NNfunction_NN_3_7::synapse0x323e820() {
   return (neuron0x322b4a0()*-0.0514517);
}

double NNfunction_NN_3_7::synapse0x323eea0() {
   return (neuron0x322b6c0()*0.0260437);
}

double NNfunction_NN_3_7::synapse0x323eee0() {
   return (neuron0x322ba00()*-0.0989912);
}

double NNfunction_NN_3_7::synapse0x323ef20() {
   return (neuron0x322bd40()*0.091922);
}

double NNfunction_NN_3_7::synapse0x323ef60() {
   return (neuron0x322c080()*-0.0452908);
}

double NNfunction_NN_3_7::synapse0x323efa0() {
   return (neuron0x322c3c0()*0.0106045);
}

double NNfunction_NN_3_7::synapse0x323efe0() {
   return (neuron0x322c700()*-1.49863);
}

double NNfunction_NN_3_7::synapse0x323f360() {
   return (neuron0x3227b40()*-0.276155);
}

double NNfunction_NN_3_7::synapse0x323f3a0() {
   return (neuron0x3227e80()*0.240962);
}

double NNfunction_NN_3_7::synapse0x323f3e0() {
   return (neuron0x32281c0()*0.2005);
}

double NNfunction_NN_3_7::synapse0x323f420() {
   return (neuron0x3228500()*0.00323363);
}

double NNfunction_NN_3_7::synapse0x323f460() {
   return (neuron0x3228840()*0.0802026);
}

double NNfunction_NN_3_7::synapse0x323f4a0() {
   return (neuron0x3228b80()*-0.0553126);
}

double NNfunction_NN_3_7::synapse0x323f4e0() {
   return (neuron0x3228ec0()*0.247494);
}

double NNfunction_NN_3_7::synapse0x323f520() {
   return (neuron0x3229200()*-0.194313);
}

double NNfunction_NN_3_7::synapse0x323f560() {
   return (neuron0x3229540()*0.544889);
}

double NNfunction_NN_3_7::synapse0x323f5a0() {
   return (neuron0x3229880()*-0.0730306);
}

double NNfunction_NN_3_7::synapse0x323f5e0() {
   return (neuron0x3229bc0()*0.491345);
}

double NNfunction_NN_3_7::synapse0x323f620() {
   return (neuron0x3229f00()*-0.849006);
}

double NNfunction_NN_3_7::synapse0x323f660() {
   return (neuron0x322a240()*-0.318354);
}

double NNfunction_NN_3_7::synapse0x323f6a0() {
   return (neuron0x322a580()*-0.168383);
}

double NNfunction_NN_3_7::synapse0x323f6e0() {
   return (neuron0x322a8c0()*-0.0729041);
}

double NNfunction_NN_3_7::synapse0x323f720() {
   return (neuron0x322ac00()*-0.0412383);
}

double NNfunction_NN_3_7::synapse0x323f1b0() {
   return (neuron0x322af40()*-0.254886);
}

double NNfunction_NN_3_7::synapse0x323f1f0() {
   return (neuron0x322b4a0()*-0.586782);
}

double NNfunction_NN_3_7::synapse0x323f870() {
   return (neuron0x322b6c0()*0.539565);
}

double NNfunction_NN_3_7::synapse0x323f8b0() {
   return (neuron0x322ba00()*0.10244);
}

double NNfunction_NN_3_7::synapse0x323f8f0() {
   return (neuron0x322bd40()*-0.262235);
}

double NNfunction_NN_3_7::synapse0x323f930() {
   return (neuron0x322c080()*0.305612);
}

double NNfunction_NN_3_7::synapse0x323f970() {
   return (neuron0x322c3c0()*0.322678);
}

double NNfunction_NN_3_7::synapse0x323f9b0() {
   return (neuron0x322c700()*-0.893286);
}

double NNfunction_NN_3_7::synapse0x323fd30() {
   return (neuron0x3227b40()*-0.0116344);
}

double NNfunction_NN_3_7::synapse0x323fd70() {
   return (neuron0x3227e80()*0.00316944);
}

double NNfunction_NN_3_7::synapse0x323fdb0() {
   return (neuron0x32281c0()*0.071289);
}

double NNfunction_NN_3_7::synapse0x323fdf0() {
   return (neuron0x3228500()*-2.62349);
}

double NNfunction_NN_3_7::synapse0x323fe30() {
   return (neuron0x3228840()*0.00872486);
}

double NNfunction_NN_3_7::synapse0x323fe70() {
   return (neuron0x3228b80()*-0.0273892);
}

double NNfunction_NN_3_7::synapse0x323feb0() {
   return (neuron0x3228ec0()*-0.0376218);
}

double NNfunction_NN_3_7::synapse0x323fef0() {
   return (neuron0x3229200()*0.00439497);
}

double NNfunction_NN_3_7::synapse0x323ff30() {
   return (neuron0x3229540()*-0.00720606);
}

double NNfunction_NN_3_7::synapse0x323ff70() {
   return (neuron0x3229880()*-0.0154553);
}

double NNfunction_NN_3_7::synapse0x323ffb0() {
   return (neuron0x3229bc0()*-0.0132981);
}

double NNfunction_NN_3_7::synapse0x323fff0() {
   return (neuron0x3229f00()*0.366606);
}

double NNfunction_NN_3_7::synapse0x3240030() {
   return (neuron0x322a240()*-0.00445398);
}

double NNfunction_NN_3_7::synapse0x3240070() {
   return (neuron0x322a580()*-0.00374107);
}

double NNfunction_NN_3_7::synapse0x32400b0() {
   return (neuron0x322a8c0()*-0.0223112);
}

double NNfunction_NN_3_7::synapse0x32400f0() {
   return (neuron0x322ac00()*0.00910221);
}

double NNfunction_NN_3_7::synapse0x323fb80() {
   return (neuron0x322af40()*0.0283932);
}

double NNfunction_NN_3_7::synapse0x323fbc0() {
   return (neuron0x322b4a0()*0.0556827);
}

double NNfunction_NN_3_7::synapse0x3240240() {
   return (neuron0x322b6c0()*0.0155664);
}

double NNfunction_NN_3_7::synapse0x3240280() {
   return (neuron0x322ba00()*0.000545404);
}

double NNfunction_NN_3_7::synapse0x32402c0() {
   return (neuron0x322bd40()*0.0148323);
}

double NNfunction_NN_3_7::synapse0x3240300() {
   return (neuron0x322c080()*-0.00710405);
}

double NNfunction_NN_3_7::synapse0x3240340() {
   return (neuron0x322c3c0()*0.0273529);
}

double NNfunction_NN_3_7::synapse0x3240380() {
   return (neuron0x322c700()*0.094033);
}

double NNfunction_NN_3_7::synapse0x3240700() {
   return (neuron0x3227b40()*0.0170092);
}

double NNfunction_NN_3_7::synapse0x3240740() {
   return (neuron0x3227e80()*-0.0732638);
}

double NNfunction_NN_3_7::synapse0x3240780() {
   return (neuron0x32281c0()*-7.42618);
}

double NNfunction_NN_3_7::synapse0x32407c0() {
   return (neuron0x3228500()*0.0495583);
}

double NNfunction_NN_3_7::synapse0x3240800() {
   return (neuron0x3228840()*0.0133419);
}

double NNfunction_NN_3_7::synapse0x3240840() {
   return (neuron0x3228b80()*0.000193596);
}

double NNfunction_NN_3_7::synapse0x3240880() {
   return (neuron0x3228ec0()*-0.0108653);
}

double NNfunction_NN_3_7::synapse0x32408c0() {
   return (neuron0x3229200()*-0.00945771);
}

double NNfunction_NN_3_7::synapse0x3240900() {
   return (neuron0x3229540()*-0.0140382);
}

double NNfunction_NN_3_7::synapse0x3240940() {
   return (neuron0x3229880()*-0.00607837);
}

double NNfunction_NN_3_7::synapse0x3240980() {
   return (neuron0x3229bc0()*0.0273499);
}

double NNfunction_NN_3_7::synapse0x32409c0() {
   return (neuron0x3229f00()*0.0753188);
}

double NNfunction_NN_3_7::synapse0x3240a00() {
   return (neuron0x322a240()*0.0147131);
}

double NNfunction_NN_3_7::synapse0x3240a40() {
   return (neuron0x322a580()*0.00203839);
}

double NNfunction_NN_3_7::synapse0x3240a80() {
   return (neuron0x322a8c0()*-0.0283985);
}

double NNfunction_NN_3_7::synapse0x3240ac0() {
   return (neuron0x322ac00()*0.00784713);
}

double NNfunction_NN_3_7::synapse0x3240550() {
   return (neuron0x322af40()*0.00311261);
}

double NNfunction_NN_3_7::synapse0x3240590() {
   return (neuron0x322b4a0()*-0.0225711);
}

double NNfunction_NN_3_7::synapse0x3240c10() {
   return (neuron0x322b6c0()*-0.000791376);
}

double NNfunction_NN_3_7::synapse0x3240c50() {
   return (neuron0x322ba00()*0.00705978);
}

double NNfunction_NN_3_7::synapse0x3240c90() {
   return (neuron0x322bd40()*-0.00366153);
}

double NNfunction_NN_3_7::synapse0x3240cd0() {
   return (neuron0x322c080()*0.00901725);
}

double NNfunction_NN_3_7::synapse0x3240d10() {
   return (neuron0x322c3c0()*-0.00415123);
}

double NNfunction_NN_3_7::synapse0x3240d50() {
   return (neuron0x322c700()*3.79493);
}

double NNfunction_NN_3_7::synapse0x32410d0() {
   return (neuron0x3227b40()*0.165254);
}

double NNfunction_NN_3_7::synapse0x3241110() {
   return (neuron0x3227e80()*-0.318602);
}

double NNfunction_NN_3_7::synapse0x3241150() {
   return (neuron0x32281c0()*-0.360861);
}

double NNfunction_NN_3_7::synapse0x3241190() {
   return (neuron0x3228500()*-1.0678);
}

double NNfunction_NN_3_7::synapse0x32411d0() {
   return (neuron0x3228840()*0.124747);
}

double NNfunction_NN_3_7::synapse0x3241210() {
   return (neuron0x3228b80()*0.135968);
}

double NNfunction_NN_3_7::synapse0x3241250() {
   return (neuron0x3228ec0()*0.176024);
}

double NNfunction_NN_3_7::synapse0x3241290() {
   return (neuron0x3229200()*-0.117901);
}

double NNfunction_NN_3_7::synapse0x32412d0() {
   return (neuron0x3229540()*-0.01932);
}

double NNfunction_NN_3_7::synapse0x3241310() {
   return (neuron0x3229880()*-0.207047);
}

double NNfunction_NN_3_7::synapse0x3241350() {
   return (neuron0x3229bc0()*0.0594958);
}

double NNfunction_NN_3_7::synapse0x3241390() {
   return (neuron0x3229f00()*0.776085);
}

double NNfunction_NN_3_7::synapse0x32413d0() {
   return (neuron0x322a240()*0.115538);
}

double NNfunction_NN_3_7::synapse0x3241410() {
   return (neuron0x322a580()*-0.132357);
}

double NNfunction_NN_3_7::synapse0x3241450() {
   return (neuron0x322a8c0()*-0.0299551);
}

double NNfunction_NN_3_7::synapse0x3241490() {
   return (neuron0x322ac00()*0.0204089);
}

double NNfunction_NN_3_7::synapse0x3240f20() {
   return (neuron0x322af40()*0.0132399);
}

double NNfunction_NN_3_7::synapse0x3240f60() {
   return (neuron0x322b4a0()*-0.0685943);
}

double NNfunction_NN_3_7::synapse0x32415e0() {
   return (neuron0x322b6c0()*0.0419569);
}

double NNfunction_NN_3_7::synapse0x3241620() {
   return (neuron0x322ba00()*0.0392275);
}

double NNfunction_NN_3_7::synapse0x3241660() {
   return (neuron0x322bd40()*-0.190908);
}

double NNfunction_NN_3_7::synapse0x32416a0() {
   return (neuron0x322c080()*0.258771);
}

double NNfunction_NN_3_7::synapse0x32416e0() {
   return (neuron0x322c3c0()*0.107124);
}

double NNfunction_NN_3_7::synapse0x3241720() {
   return (neuron0x322c700()*-0.279078);
}

double NNfunction_NN_3_7::synapse0x3241aa0() {
   return (neuron0x3227b40()*-0.0617619);
}

double NNfunction_NN_3_7::synapse0x3241ae0() {
   return (neuron0x3227e80()*-0.285056);
}

double NNfunction_NN_3_7::synapse0x3241b20() {
   return (neuron0x32281c0()*-1.07312);
}

double NNfunction_NN_3_7::synapse0x3241b60() {
   return (neuron0x3228500()*-0.0531911);
}

double NNfunction_NN_3_7::synapse0x3241ba0() {
   return (neuron0x3228840()*0.0258921);
}

double NNfunction_NN_3_7::synapse0x3241be0() {
   return (neuron0x3228b80()*0.0587391);
}

double NNfunction_NN_3_7::synapse0x3241c20() {
   return (neuron0x3228ec0()*0.0788019);
}

double NNfunction_NN_3_7::synapse0x3241c60() {
   return (neuron0x3229200()*0.00574865);
}

double NNfunction_NN_3_7::synapse0x3241ca0() {
   return (neuron0x3229540()*-0.0371558);
}

double NNfunction_NN_3_7::synapse0x3241ce0() {
   return (neuron0x3229880()*-0.020472);
}

double NNfunction_NN_3_7::synapse0x3241d20() {
   return (neuron0x3229bc0()*-0.0220912);
}

double NNfunction_NN_3_7::synapse0x3241d60() {
   return (neuron0x3229f00()*-0.731052);
}

double NNfunction_NN_3_7::synapse0x3241da0() {
   return (neuron0x322a240()*-0.0389368);
}

double NNfunction_NN_3_7::synapse0x3241de0() {
   return (neuron0x322a580()*-0.021071);
}

double NNfunction_NN_3_7::synapse0x3241e20() {
   return (neuron0x322a8c0()*0.0060155);
}

double NNfunction_NN_3_7::synapse0x3241e60() {
   return (neuron0x322ac00()*0.0538846);
}

double NNfunction_NN_3_7::synapse0x32418f0() {
   return (neuron0x322af40()*-0.0614517);
}

double NNfunction_NN_3_7::synapse0x3241930() {
   return (neuron0x322b4a0()*-0.0592145);
}

double NNfunction_NN_3_7::synapse0x3241fb0() {
   return (neuron0x322b6c0()*-0.0287552);
}

double NNfunction_NN_3_7::synapse0x3241ff0() {
   return (neuron0x322ba00()*-0.0119688);
}

double NNfunction_NN_3_7::synapse0x3242030() {
   return (neuron0x322bd40()*-0.0180955);
}

double NNfunction_NN_3_7::synapse0x3242070() {
   return (neuron0x322c080()*0.00873835);
}

double NNfunction_NN_3_7::synapse0x32420b0() {
   return (neuron0x322c3c0()*0.0323426);
}

double NNfunction_NN_3_7::synapse0x32420f0() {
   return (neuron0x322c700()*-0.402274);
}

double NNfunction_NN_3_7::synapse0x3242470() {
   return (neuron0x3227b40()*0.0286534);
}

double NNfunction_NN_3_7::synapse0x3236a40() {
   return (neuron0x3227e80()*-0.0154211);
}

double NNfunction_NN_3_7::synapse0x3236a80() {
   return (neuron0x32281c0()*0.898123);
}

double NNfunction_NN_3_7::synapse0x3236ac0() {
   return (neuron0x3228500()*-0.0278791);
}

double NNfunction_NN_3_7::synapse0x3236d10() {
   return (neuron0x3228840()*0.0269742);
}

double NNfunction_NN_3_7::synapse0x3236d50() {
   return (neuron0x3228b80()*-0.00413728);
}

double NNfunction_NN_3_7::synapse0x3236d90() {
   return (neuron0x3228ec0()*-0.00599511);
}

double NNfunction_NN_3_7::synapse0x3236fe0() {
   return (neuron0x3229200()*0.00226762);
}

double NNfunction_NN_3_7::synapse0x3237020() {
   return (neuron0x3229540()*0.00308359);
}

double NNfunction_NN_3_7::synapse0x3237270() {
   return (neuron0x3229880()*0.0075027);
}

double NNfunction_NN_3_7::synapse0x32372b0() {
   return (neuron0x3229bc0()*-0.00810127);
}

double NNfunction_NN_3_7::synapse0x32372f0() {
   return (neuron0x3229f00()*-0.435468);
}

double NNfunction_NN_3_7::synapse0x3237540() {
   return (neuron0x322a240()*-0.06305);
}

double NNfunction_NN_3_7::synapse0x3237580() {
   return (neuron0x322a580()*-0.0126343);
}

double NNfunction_NN_3_7::synapse0x32377d0() {
   return (neuron0x322a8c0()*0.00701002);
}

double NNfunction_NN_3_7::synapse0x3237810() {
   return (neuron0x322ac00()*0.0149226);
}

double NNfunction_NN_3_7::synapse0x32422c0() {
   return (neuron0x322af40()*0.0235191);
}

double NNfunction_NN_3_7::synapse0x3242300() {
   return (neuron0x322b4a0()*0.00501371);
}

double NNfunction_NN_3_7::synapse0x3237960() {
   return (neuron0x322b6c0()*0.0143162);
}

double NNfunction_NN_3_7::synapse0x3237e70() {
   return (neuron0x322ba00()*-0.0289477);
}

double NNfunction_NN_3_7::synapse0x3237eb0() {
   return (neuron0x322bd40()*-0.0413911);
}

double NNfunction_NN_3_7::synapse0x3237ef0() {
   return (neuron0x322c080()*-0.0119921);
}

double NNfunction_NN_3_7::synapse0x3238140() {
   return (neuron0x322c3c0()*0.0243252);
}

double NNfunction_NN_3_7::synapse0x3238180() {
   return (neuron0x322c700()*-2.83428);
}

double NNfunction_NN_3_7::synapse0x3237a30() {
   return (neuron0x3227b40()*-0.345514);
}

double NNfunction_NN_3_7::synapse0x3237a70() {
   return (neuron0x3227e80()*-0.0536788);
}

double NNfunction_NN_3_7::synapse0x3237ab0() {
   return (neuron0x32281c0()*1.43524);
}

double NNfunction_NN_3_7::synapse0x3237af0() {
   return (neuron0x3228500()*0.0212763);
}

double NNfunction_NN_3_7::synapse0x3238470() {
   return (neuron0x3228840()*-0.0182958);
}

double NNfunction_NN_3_7::synapse0x32447c0() {
   return (neuron0x3228b80()*-0.0178155);
}

double NNfunction_NN_3_7::synapse0x3244800() {
   return (neuron0x3228ec0()*-0.0113328);
}

double NNfunction_NN_3_7::synapse0x3244840() {
   return (neuron0x3229200()*0.000468507);
}

double NNfunction_NN_3_7::synapse0x3244880() {
   return (neuron0x3229540()*0.0422388);
}

double NNfunction_NN_3_7::synapse0x32448c0() {
   return (neuron0x3229880()*0.00197315);
}

double NNfunction_NN_3_7::synapse0x3244900() {
   return (neuron0x3229bc0()*-0.0576013);
}

double NNfunction_NN_3_7::synapse0x3244940() {
   return (neuron0x3229f00()*-0.0680142);
}

double NNfunction_NN_3_7::synapse0x3244980() {
   return (neuron0x322a240()*0.0105469);
}

double NNfunction_NN_3_7::synapse0x32449c0() {
   return (neuron0x322a580()*0.0474454);
}

double NNfunction_NN_3_7::synapse0x3244a00() {
   return (neuron0x322a8c0()*0.00380433);
}

double NNfunction_NN_3_7::synapse0x3244a40() {
   return (neuron0x322ac00()*-0.0239706);
}

double NNfunction_NN_3_7::synapse0x3238350() {
   return (neuron0x322af40()*0.0197724);
}

double NNfunction_NN_3_7::synapse0x3238390() {
   return (neuron0x322b4a0()*0.0397001);
}

double NNfunction_NN_3_7::synapse0x3244b90() {
   return (neuron0x322b6c0()*0.0269305);
}

double NNfunction_NN_3_7::synapse0x3244bd0() {
   return (neuron0x322ba00()*-0.013126);
}

double NNfunction_NN_3_7::synapse0x3244c10() {
   return (neuron0x322bd40()*0.0443185);
}

double NNfunction_NN_3_7::synapse0x3244c50() {
   return (neuron0x322c080()*-0.0362368);
}

double NNfunction_NN_3_7::synapse0x3244c90() {
   return (neuron0x322c3c0()*-0.020398);
}

double NNfunction_NN_3_7::synapse0x3244cd0() {
   return (neuron0x322c700()*-1.49939);
}

double NNfunction_NN_3_7::synapse0x3245050() {
   return (neuron0x3227b40()*-0.101416);
}

double NNfunction_NN_3_7::synapse0x3245090() {
   return (neuron0x3227e80()*-0.115151);
}

double NNfunction_NN_3_7::synapse0x32450d0() {
   return (neuron0x32281c0()*-0.586589);
}

double NNfunction_NN_3_7::synapse0x3245110() {
   return (neuron0x3228500()*-0.463562);
}

double NNfunction_NN_3_7::synapse0x3245150() {
   return (neuron0x3228840()*0.231876);
}

double NNfunction_NN_3_7::synapse0x3245190() {
   return (neuron0x3228b80()*-0.027339);
}

double NNfunction_NN_3_7::synapse0x32451d0() {
   return (neuron0x3228ec0()*-0.0825036);
}

double NNfunction_NN_3_7::synapse0x3245210() {
   return (neuron0x3229200()*0.105552);
}

double NNfunction_NN_3_7::synapse0x3245250() {
   return (neuron0x3229540()*-0.0701017);
}

double NNfunction_NN_3_7::synapse0x3245290() {
   return (neuron0x3229880()*0.346203);
}

double NNfunction_NN_3_7::synapse0x32452d0() {
   return (neuron0x3229bc0()*0.189818);
}

double NNfunction_NN_3_7::synapse0x3245310() {
   return (neuron0x3229f00()*-0.0447742);
}

double NNfunction_NN_3_7::synapse0x3245350() {
   return (neuron0x322a240()*-0.137694);
}

double NNfunction_NN_3_7::synapse0x3245390() {
   return (neuron0x322a580()*0.298881);
}

double NNfunction_NN_3_7::synapse0x32453d0() {
   return (neuron0x322a8c0()*-0.197699);
}

double NNfunction_NN_3_7::synapse0x3245410() {
   return (neuron0x322ac00()*0.133173);
}

double NNfunction_NN_3_7::synapse0x3244ea0() {
   return (neuron0x322af40()*0.0368656);
}

double NNfunction_NN_3_7::synapse0x3244ee0() {
   return (neuron0x322b4a0()*-0.0576919);
}

double NNfunction_NN_3_7::synapse0x3245560() {
   return (neuron0x322b6c0()*-0.133756);
}

double NNfunction_NN_3_7::synapse0x32455a0() {
   return (neuron0x322ba00()*0.301415);
}

double NNfunction_NN_3_7::synapse0x32455e0() {
   return (neuron0x322bd40()*-0.0295711);
}

double NNfunction_NN_3_7::synapse0x3245620() {
   return (neuron0x322c080()*-0.0507125);
}

double NNfunction_NN_3_7::synapse0x3245660() {
   return (neuron0x322c3c0()*-0.0570977);
}

double NNfunction_NN_3_7::synapse0x32456a0() {
   return (neuron0x322c700()*0.120297);
}

double NNfunction_NN_3_7::synapse0x3245a20() {
   return (neuron0x3227b40()*0.0196555);
}

double NNfunction_NN_3_7::synapse0x3245a60() {
   return (neuron0x3227e80()*-2.22271);
}

double NNfunction_NN_3_7::synapse0x3245aa0() {
   return (neuron0x32281c0()*-0.310453);
}

double NNfunction_NN_3_7::synapse0x3245ae0() {
   return (neuron0x3228500()*0.0172656);
}

double NNfunction_NN_3_7::synapse0x3245b20() {
   return (neuron0x3228840()*-0.061602);
}

double NNfunction_NN_3_7::synapse0x3245b60() {
   return (neuron0x3228b80()*-0.0038807);
}

double NNfunction_NN_3_7::synapse0x3245ba0() {
   return (neuron0x3228ec0()*-0.00494589);
}

double NNfunction_NN_3_7::synapse0x3245be0() {
   return (neuron0x3229200()*-0.00672893);
}

double NNfunction_NN_3_7::synapse0x3245c20() {
   return (neuron0x3229540()*-0.00212116);
}

double NNfunction_NN_3_7::synapse0x3245c60() {
   return (neuron0x3229880()*-0.0125368);
}

double NNfunction_NN_3_7::synapse0x3245ca0() {
   return (neuron0x3229bc0()*0.0373181);
}

double NNfunction_NN_3_7::synapse0x3245ce0() {
   return (neuron0x3229f00()*0.0818073);
}

double NNfunction_NN_3_7::synapse0x3245d20() {
   return (neuron0x322a240()*0.0494946);
}

double NNfunction_NN_3_7::synapse0x3245d60() {
   return (neuron0x322a580()*0.00923454);
}

double NNfunction_NN_3_7::synapse0x3245da0() {
   return (neuron0x322a8c0()*-0.00621413);
}

double NNfunction_NN_3_7::synapse0x3245de0() {
   return (neuron0x322ac00()*-0.014301);
}

double NNfunction_NN_3_7::synapse0x3245870() {
   return (neuron0x322af40()*-0.0211292);
}

double NNfunction_NN_3_7::synapse0x32458b0() {
   return (neuron0x322b4a0()*0.0189712);
}

double NNfunction_NN_3_7::synapse0x3245f30() {
   return (neuron0x322b6c0()*0.00368952);
}

double NNfunction_NN_3_7::synapse0x3245f70() {
   return (neuron0x322ba00()*0.0183636);
}

double NNfunction_NN_3_7::synapse0x3245fb0() {
   return (neuron0x322bd40()*0.0103035);
}

double NNfunction_NN_3_7::synapse0x3245ff0() {
   return (neuron0x322c080()*0.00715562);
}

double NNfunction_NN_3_7::synapse0x3246030() {
   return (neuron0x322c3c0()*0.0234471);
}

double NNfunction_NN_3_7::synapse0x3246070() {
   return (neuron0x322c700()*0.559258);
}

double NNfunction_NN_3_7::synapse0x32463f0() {
   return (neuron0x3227b40()*-0.0142898);
}

double NNfunction_NN_3_7::synapse0x3246430() {
   return (neuron0x3227e80()*0.241545);
}

double NNfunction_NN_3_7::synapse0x3246470() {
   return (neuron0x32281c0()*0.109112);
}

double NNfunction_NN_3_7::synapse0x32464b0() {
   return (neuron0x3228500()*-0.0206848);
}

double NNfunction_NN_3_7::synapse0x32464f0() {
   return (neuron0x3228840()*0.00880192);
}

double NNfunction_NN_3_7::synapse0x3246530() {
   return (neuron0x3228b80()*0.0102167);
}

double NNfunction_NN_3_7::synapse0x3246570() {
   return (neuron0x3228ec0()*-0.0128276);
}

double NNfunction_NN_3_7::synapse0x32465b0() {
   return (neuron0x3229200()*0.0128918);
}

double NNfunction_NN_3_7::synapse0x32465f0() {
   return (neuron0x3229540()*-0.0201178);
}

double NNfunction_NN_3_7::synapse0x3246630() {
   return (neuron0x3229880()*0.0166054);
}

double NNfunction_NN_3_7::synapse0x3246670() {
   return (neuron0x3229bc0()*0.0151787);
}

double NNfunction_NN_3_7::synapse0x32466b0() {
   return (neuron0x3229f00()*0.057129);
}

double NNfunction_NN_3_7::synapse0x32466f0() {
   return (neuron0x322a240()*-0.010428);
}

double NNfunction_NN_3_7::synapse0x3246730() {
   return (neuron0x322a580()*-0.0100448);
}

double NNfunction_NN_3_7::synapse0x3246770() {
   return (neuron0x322a8c0()*-0.0123815);
}

double NNfunction_NN_3_7::synapse0x32467b0() {
   return (neuron0x322ac00()*0.000665508);
}

double NNfunction_NN_3_7::synapse0x3246240() {
   return (neuron0x322af40()*-0.014713);
}

double NNfunction_NN_3_7::synapse0x3246280() {
   return (neuron0x322b4a0()*-0.00553684);
}

double NNfunction_NN_3_7::synapse0x3246900() {
   return (neuron0x322b6c0()*0.0113347);
}

double NNfunction_NN_3_7::synapse0x3246940() {
   return (neuron0x322ba00()*0.0207303);
}

double NNfunction_NN_3_7::synapse0x3246980() {
   return (neuron0x322bd40()*0.0149958);
}

double NNfunction_NN_3_7::synapse0x32469c0() {
   return (neuron0x322c080()*0.00421456);
}

double NNfunction_NN_3_7::synapse0x3246a00() {
   return (neuron0x322c3c0()*-0.0124041);
}

double NNfunction_NN_3_7::synapse0x3246a40() {
   return (neuron0x322c700()*-2.46881);
}

double NNfunction_NN_3_7::synapse0x3246dc0() {
   return (neuron0x3227b40()*0.479009);
}

double NNfunction_NN_3_7::synapse0x3246e00() {
   return (neuron0x3227e80()*-0.0511479);
}

double NNfunction_NN_3_7::synapse0x3246e40() {
   return (neuron0x32281c0()*0.212518);
}

double NNfunction_NN_3_7::synapse0x3246e80() {
   return (neuron0x3228500()*0.0229857);
}

double NNfunction_NN_3_7::synapse0x3246ec0() {
   return (neuron0x3228840()*-0.016649);
}

double NNfunction_NN_3_7::synapse0x3246f00() {
   return (neuron0x3228b80()*-0.0498241);
}

double NNfunction_NN_3_7::synapse0x3246f40() {
   return (neuron0x3228ec0()*0.00883149);
}

double NNfunction_NN_3_7::synapse0x3246f80() {
   return (neuron0x3229200()*0.0298382);
}

double NNfunction_NN_3_7::synapse0x3246fc0() {
   return (neuron0x3229540()*0.0394799);
}

double NNfunction_NN_3_7::synapse0x3247000() {
   return (neuron0x3229880()*-0.00668468);
}

double NNfunction_NN_3_7::synapse0x3247040() {
   return (neuron0x3229bc0()*0.0148417);
}

double NNfunction_NN_3_7::synapse0x3247080() {
   return (neuron0x3229f00()*0.0794824);
}

double NNfunction_NN_3_7::synapse0x32470c0() {
   return (neuron0x322a240()*0.0157126);
}

double NNfunction_NN_3_7::synapse0x3247100() {
   return (neuron0x322a580()*0.0610612);
}

double NNfunction_NN_3_7::synapse0x3247140() {
   return (neuron0x322a8c0()*-0.0302367);
}

double NNfunction_NN_3_7::synapse0x3247180() {
   return (neuron0x322ac00()*-0.00482586);
}

double NNfunction_NN_3_7::synapse0x3246c10() {
   return (neuron0x322af40()*0.0155827);
}

double NNfunction_NN_3_7::synapse0x3246c50() {
   return (neuron0x322b4a0()*0.0247996);
}

double NNfunction_NN_3_7::synapse0x32472d0() {
   return (neuron0x322b6c0()*0.040731);
}

double NNfunction_NN_3_7::synapse0x3247310() {
   return (neuron0x322ba00()*0.0127023);
}

double NNfunction_NN_3_7::synapse0x3247350() {
   return (neuron0x322bd40()*0.0172395);
}

double NNfunction_NN_3_7::synapse0x3247390() {
   return (neuron0x322c080()*-0.00838919);
}

double NNfunction_NN_3_7::synapse0x32473d0() {
   return (neuron0x322c3c0()*-0.0174011);
}

double NNfunction_NN_3_7::synapse0x3247410() {
   return (neuron0x322c700()*-0.726083);
}

double NNfunction_NN_3_7::synapse0x3247790() {
   return (neuron0x3227b40()*0.0227314);
}

double NNfunction_NN_3_7::synapse0x32477d0() {
   return (neuron0x3227e80()*-3.28858);
}

double NNfunction_NN_3_7::synapse0x3247810() {
   return (neuron0x32281c0()*-0.716774);
}

double NNfunction_NN_3_7::synapse0x3247850() {
   return (neuron0x3228500()*0.0020497);
}

double NNfunction_NN_3_7::synapse0x3247890() {
   return (neuron0x3228840()*-0.00629823);
}

double NNfunction_NN_3_7::synapse0x32478d0() {
   return (neuron0x3228b80()*-0.0199483);
}

double NNfunction_NN_3_7::synapse0x3247910() {
   return (neuron0x3228ec0()*0.0111809);
}

double NNfunction_NN_3_7::synapse0x3247950() {
   return (neuron0x3229200()*-0.02266);
}

double NNfunction_NN_3_7::synapse0x3247990() {
   return (neuron0x3229540()*-0.0181193);
}

double NNfunction_NN_3_7::synapse0x32479d0() {
   return (neuron0x3229880()*-0.0229623);
}

double NNfunction_NN_3_7::synapse0x3247a10() {
   return (neuron0x3229bc0()*0.00806076);
}

double NNfunction_NN_3_7::synapse0x3247a50() {
   return (neuron0x3229f00()*-0.114624);
}

double NNfunction_NN_3_7::synapse0x3247a90() {
   return (neuron0x322a240()*0.00405005);
}

double NNfunction_NN_3_7::synapse0x3247ad0() {
   return (neuron0x322a580()*0.0163359);
}

double NNfunction_NN_3_7::synapse0x3247b10() {
   return (neuron0x322a8c0()*-0.0019249);
}

double NNfunction_NN_3_7::synapse0x3247b50() {
   return (neuron0x322ac00()*-0.0170119);
}

double NNfunction_NN_3_7::synapse0x32475e0() {
   return (neuron0x322af40()*0.00357962);
}

double NNfunction_NN_3_7::synapse0x3247620() {
   return (neuron0x322b4a0()*0.00471876);
}

double NNfunction_NN_3_7::synapse0x3247ca0() {
   return (neuron0x322b6c0()*-0.0204203);
}

double NNfunction_NN_3_7::synapse0x3247ce0() {
   return (neuron0x322ba00()*-0.00285847);
}

double NNfunction_NN_3_7::synapse0x3247d20() {
   return (neuron0x322bd40()*-0.0235074);
}

double NNfunction_NN_3_7::synapse0x3247d60() {
   return (neuron0x322c080()*-0.0265515);
}

double NNfunction_NN_3_7::synapse0x3247da0() {
   return (neuron0x322c3c0()*0.0315718);
}

double NNfunction_NN_3_7::synapse0x3247de0() {
   return (neuron0x322c700()*-0.625766);
}

double NNfunction_NN_3_7::synapse0x3248160() {
   return (neuron0x3227b40()*-0.0241244);
}

double NNfunction_NN_3_7::synapse0x32481a0() {
   return (neuron0x3227e80()*-11.9595);
}

double NNfunction_NN_3_7::synapse0x32481e0() {
   return (neuron0x32281c0()*2.56058);
}

double NNfunction_NN_3_7::synapse0x3248220() {
   return (neuron0x3228500()*-0.00605682);
}

double NNfunction_NN_3_7::synapse0x3248260() {
   return (neuron0x3228840()*0.0211301);
}

double NNfunction_NN_3_7::synapse0x32482a0() {
   return (neuron0x3228b80()*0.0019141);
}

double NNfunction_NN_3_7::synapse0x32482e0() {
   return (neuron0x3228ec0()*-0.00573957);
}

double NNfunction_NN_3_7::synapse0x3248320() {
   return (neuron0x3229200()*-0.017791);
}

double NNfunction_NN_3_7::synapse0x3248360() {
   return (neuron0x3229540()*0.00545575);
}

double NNfunction_NN_3_7::synapse0x32483a0() {
   return (neuron0x3229880()*0.0308011);
}

double NNfunction_NN_3_7::synapse0x32483e0() {
   return (neuron0x3229bc0()*0.00355749);
}

double NNfunction_NN_3_7::synapse0x3248420() {
   return (neuron0x3229f00()*-0.0704651);
}

double NNfunction_NN_3_7::synapse0x3248460() {
   return (neuron0x322a240()*-0.0272737);
}

double NNfunction_NN_3_7::synapse0x32484a0() {
   return (neuron0x322a580()*-0.0136356);
}

double NNfunction_NN_3_7::synapse0x32484e0() {
   return (neuron0x322a8c0()*-0.00668324);
}

double NNfunction_NN_3_7::synapse0x3248520() {
   return (neuron0x322ac00()*0.00299454);
}

double NNfunction_NN_3_7::synapse0x3247fb0() {
   return (neuron0x322af40()*0.0182902);
}

double NNfunction_NN_3_7::synapse0x3247ff0() {
   return (neuron0x322b4a0()*-0.00992935);
}

double NNfunction_NN_3_7::synapse0x3248670() {
   return (neuron0x322b6c0()*-0.00025781);
}

double NNfunction_NN_3_7::synapse0x32486b0() {
   return (neuron0x322ba00()*-0.00206042);
}

double NNfunction_NN_3_7::synapse0x32486f0() {
   return (neuron0x322bd40()*0.0224937);
}

double NNfunction_NN_3_7::synapse0x3248730() {
   return (neuron0x322c080()*0.0145163);
}

double NNfunction_NN_3_7::synapse0x3248770() {
   return (neuron0x322c3c0()*0.00313233);
}

double NNfunction_NN_3_7::synapse0x32487b0() {
   return (neuron0x322c700()*-0.073686);
}

double NNfunction_NN_3_7::synapse0x3248b30() {
   return (neuron0x3227b40()*-0.0518928);
}

double NNfunction_NN_3_7::synapse0x3248b70() {
   return (neuron0x3227e80()*-0.000338853);
}

double NNfunction_NN_3_7::synapse0x3248bb0() {
   return (neuron0x32281c0()*-0.152549);
}

double NNfunction_NN_3_7::synapse0x3248bf0() {
   return (neuron0x3228500()*0.00353092);
}

double NNfunction_NN_3_7::synapse0x3248c30() {
   return (neuron0x3228840()*0.0142619);
}

double NNfunction_NN_3_7::synapse0x3248c70() {
   return (neuron0x3228b80()*-0.00655638);
}

double NNfunction_NN_3_7::synapse0x3248cb0() {
   return (neuron0x3228ec0()*0.0255529);
}

double NNfunction_NN_3_7::synapse0x3248cf0() {
   return (neuron0x3229200()*-0.00330427);
}

double NNfunction_NN_3_7::synapse0x3248d30() {
   return (neuron0x3229540()*0.0117571);
}

double NNfunction_NN_3_7::synapse0x3248d70() {
   return (neuron0x3229880()*-0.0211692);
}

double NNfunction_NN_3_7::synapse0x3248db0() {
   return (neuron0x3229bc0()*-0.0290153);
}

double NNfunction_NN_3_7::synapse0x3248df0() {
   return (neuron0x3229f00()*-3.34765);
}

double NNfunction_NN_3_7::synapse0x3248e30() {
   return (neuron0x322a240()*-0.0247067);
}

double NNfunction_NN_3_7::synapse0x3248e70() {
   return (neuron0x322a580()*0.0178261);
}

double NNfunction_NN_3_7::synapse0x3248eb0() {
   return (neuron0x322a8c0()*-0.00955247);
}

double NNfunction_NN_3_7::synapse0x3248ef0() {
   return (neuron0x322ac00()*0.0218249);
}

double NNfunction_NN_3_7::synapse0x3248980() {
   return (neuron0x322af40()*-0.0629711);
}

double NNfunction_NN_3_7::synapse0x32489c0() {
   return (neuron0x322b4a0()*0.00222676);
}

double NNfunction_NN_3_7::synapse0x3249040() {
   return (neuron0x322b6c0()*-0.024647);
}

double NNfunction_NN_3_7::synapse0x3249080() {
   return (neuron0x322ba00()*-0.0108464);
}

double NNfunction_NN_3_7::synapse0x32490c0() {
   return (neuron0x322bd40()*-0.00256257);
}

double NNfunction_NN_3_7::synapse0x3249100() {
   return (neuron0x322c080()*0.0240556);
}

double NNfunction_NN_3_7::synapse0x3249140() {
   return (neuron0x322c3c0()*-0.00472796);
}

double NNfunction_NN_3_7::synapse0x3249180() {
   return (neuron0x322c700()*1.6979);
}

double NNfunction_NN_3_7::synapse0x3231c30() {
   return (neuron0x3227b40()*0.0286682);
}

double NNfunction_NN_3_7::synapse0x3231c70() {
   return (neuron0x3227e80()*1.52368);
}

double NNfunction_NN_3_7::synapse0x3231cb0() {
   return (neuron0x32281c0()*0.151502);
}

double NNfunction_NN_3_7::synapse0x3231cf0() {
   return (neuron0x3228500()*-0.140964);
}

double NNfunction_NN_3_7::synapse0x3231d30() {
   return (neuron0x3228840()*0.0356023);
}

double NNfunction_NN_3_7::synapse0x3231d70() {
   return (neuron0x3228b80()*0.119534);
}

double NNfunction_NN_3_7::synapse0x3231db0() {
   return (neuron0x3228ec0()*0.0132);
}

double NNfunction_NN_3_7::synapse0x3231df0() {
   return (neuron0x3229200()*0.0068433);
}

double NNfunction_NN_3_7::synapse0x3249910() {
   return (neuron0x3229540()*-0.119585);
}

double NNfunction_NN_3_7::synapse0x3249950() {
   return (neuron0x3229880()*-0.0270901);
}

double NNfunction_NN_3_7::synapse0x3249990() {
   return (neuron0x3229bc0()*-0.0353872);
}

double NNfunction_NN_3_7::synapse0x32499d0() {
   return (neuron0x3229f00()*-0.481457);
}

double NNfunction_NN_3_7::synapse0x3249a10() {
   return (neuron0x322a240()*-0.0303752);
}

double NNfunction_NN_3_7::synapse0x3249a50() {
   return (neuron0x322a580()*0.00445427);
}

double NNfunction_NN_3_7::synapse0x3249a90() {
   return (neuron0x322a8c0()*0.0848453);
}

double NNfunction_NN_3_7::synapse0x3249ad0() {
   return (neuron0x322ac00()*-0.020504);
}

double NNfunction_NN_3_7::synapse0x3249350() {
   return (neuron0x322af40()*0.0479998);
}

double NNfunction_NN_3_7::synapse0x3249390() {
   return (neuron0x322b4a0()*0.0301594);
}

double NNfunction_NN_3_7::synapse0x3249c20() {
   return (neuron0x322b6c0()*-0.0436914);
}

double NNfunction_NN_3_7::synapse0x3249c60() {
   return (neuron0x322ba00()*-0.0769256);
}

double NNfunction_NN_3_7::synapse0x3249ca0() {
   return (neuron0x322bd40()*-0.0366712);
}

double NNfunction_NN_3_7::synapse0x3249ce0() {
   return (neuron0x322c080()*-0.165604);
}

double NNfunction_NN_3_7::synapse0x3249d20() {
   return (neuron0x322c3c0()*-0.0029582);
}

double NNfunction_NN_3_7::synapse0x3249d60() {
   return (neuron0x322c700()*-1.32369);
}

double NNfunction_NN_3_7::synapse0x324a0e0() {
   return (neuron0x3227b40()*-0.0278693);
}

double NNfunction_NN_3_7::synapse0x324a120() {
   return (neuron0x3227e80()*6.1171);
}

double NNfunction_NN_3_7::synapse0x324a160() {
   return (neuron0x32281c0()*-0.231666);
}

double NNfunction_NN_3_7::synapse0x324a1a0() {
   return (neuron0x3228500()*-0.0178107);
}

double NNfunction_NN_3_7::synapse0x324a1e0() {
   return (neuron0x3228840()*-0.0136832);
}

double NNfunction_NN_3_7::synapse0x324a220() {
   return (neuron0x3228b80()*-0.013474);
}

double NNfunction_NN_3_7::synapse0x324a260() {
   return (neuron0x3228ec0()*0.00725129);
}

double NNfunction_NN_3_7::synapse0x324a2a0() {
   return (neuron0x3229200()*-0.0025774);
}

double NNfunction_NN_3_7::synapse0x324a2e0() {
   return (neuron0x3229540()*0.0198245);
}

double NNfunction_NN_3_7::synapse0x324a320() {
   return (neuron0x3229880()*0.00295351);
}

double NNfunction_NN_3_7::synapse0x324a360() {
   return (neuron0x3229bc0()*-0.00507904);
}

double NNfunction_NN_3_7::synapse0x324a3a0() {
   return (neuron0x3229f00()*0.0303212);
}

double NNfunction_NN_3_7::synapse0x324a3e0() {
   return (neuron0x322a240()*0.0148308);
}

double NNfunction_NN_3_7::synapse0x324a420() {
   return (neuron0x322a580()*0.0116454);
}

double NNfunction_NN_3_7::synapse0x324a460() {
   return (neuron0x322a8c0()*-0.00842667);
}

double NNfunction_NN_3_7::synapse0x324a4a0() {
   return (neuron0x322ac00()*-0.0130372);
}

double NNfunction_NN_3_7::synapse0x3249f30() {
   return (neuron0x322af40()*0.00482595);
}

double NNfunction_NN_3_7::synapse0x3249f70() {
   return (neuron0x322b4a0()*0.0204671);
}

double NNfunction_NN_3_7::synapse0x324a5f0() {
   return (neuron0x322b6c0()*-0.00451775);
}

double NNfunction_NN_3_7::synapse0x324a630() {
   return (neuron0x322ba00()*0.00883662);
}

double NNfunction_NN_3_7::synapse0x324a670() {
   return (neuron0x322bd40()*-0.0276945);
}

double NNfunction_NN_3_7::synapse0x324a6b0() {
   return (neuron0x322c080()*0.00288323);
}

double NNfunction_NN_3_7::synapse0x324a6f0() {
   return (neuron0x322c3c0()*-0.00594355);
}

double NNfunction_NN_3_7::synapse0x324a730() {
   return (neuron0x322c700()*2.13654);
}

double NNfunction_NN_3_7::synapse0x324aab0() {
   return (neuron0x3227b40()*-0.0445224);
}

double NNfunction_NN_3_7::synapse0x324aaf0() {
   return (neuron0x3227e80()*0.0317533);
}

double NNfunction_NN_3_7::synapse0x324ab30() {
   return (neuron0x32281c0()*-2.39105);
}

double NNfunction_NN_3_7::synapse0x324ab70() {
   return (neuron0x3228500()*0.0562257);
}

double NNfunction_NN_3_7::synapse0x324abb0() {
   return (neuron0x3228840()*0.00903432);
}

double NNfunction_NN_3_7::synapse0x324abf0() {
   return (neuron0x3228b80()*0.0256398);
}

double NNfunction_NN_3_7::synapse0x324ac30() {
   return (neuron0x3228ec0()*-0.0348684);
}

double NNfunction_NN_3_7::synapse0x324ac70() {
   return (neuron0x3229200()*-0.00118947);
}

double NNfunction_NN_3_7::synapse0x324acb0() {
   return (neuron0x3229540()*-0.0171115);
}

double NNfunction_NN_3_7::synapse0x324acf0() {
   return (neuron0x3229880()*0.0160941);
}

double NNfunction_NN_3_7::synapse0x324ad30() {
   return (neuron0x3229bc0()*0.00525496);
}

double NNfunction_NN_3_7::synapse0x324ad70() {
   return (neuron0x3229f00()*0.589269);
}

double NNfunction_NN_3_7::synapse0x324adb0() {
   return (neuron0x322a240()*0.0302255);
}

double NNfunction_NN_3_7::synapse0x324adf0() {
   return (neuron0x322a580()*-0.0198584);
}

double NNfunction_NN_3_7::synapse0x324ae30() {
   return (neuron0x322a8c0()*-0.0205834);
}

double NNfunction_NN_3_7::synapse0x324ae70() {
   return (neuron0x322ac00()*0.0253551);
}

double NNfunction_NN_3_7::synapse0x324a900() {
   return (neuron0x322af40()*-0.00943653);
}

double NNfunction_NN_3_7::synapse0x324a940() {
   return (neuron0x322b4a0()*0.0116028);
}

double NNfunction_NN_3_7::synapse0x323b470() {
   return (neuron0x322b6c0()*0.0182749);
}

double NNfunction_NN_3_7::synapse0x323b4b0() {
   return (neuron0x322ba00()*0.0171123);
}

double NNfunction_NN_3_7::synapse0x323b4f0() {
   return (neuron0x322bd40()*-0.0271668);
}

double NNfunction_NN_3_7::synapse0x323b530() {
   return (neuron0x322c080()*0.000416317);
}

double NNfunction_NN_3_7::synapse0x323b570() {
   return (neuron0x322c3c0()*-0.0154265);
}

double NNfunction_NN_3_7::synapse0x323b5b0() {
   return (neuron0x322c700()*4.5881);
}

double NNfunction_NN_3_7::synapse0x323b930() {
   return (neuron0x3227b40()*0.029752);
}

double NNfunction_NN_3_7::synapse0x323b970() {
   return (neuron0x3227e80()*-0.0513083);
}

double NNfunction_NN_3_7::synapse0x323b9b0() {
   return (neuron0x32281c0()*-0.0818996);
}

double NNfunction_NN_3_7::synapse0x323b9f0() {
   return (neuron0x3228500()*1.7612);
}

double NNfunction_NN_3_7::synapse0x323ba30() {
   return (neuron0x3228840()*-0.0311416);
}

double NNfunction_NN_3_7::synapse0x323ba70() {
   return (neuron0x3228b80()*0.0721454);
}

double NNfunction_NN_3_7::synapse0x323bab0() {
   return (neuron0x3228ec0()*0.0587731);
}

double NNfunction_NN_3_7::synapse0x323baf0() {
   return (neuron0x3229200()*-0.00484357);
}

double NNfunction_NN_3_7::synapse0x323bb30() {
   return (neuron0x3229540()*0.0112779);
}

double NNfunction_NN_3_7::synapse0x323bb70() {
   return (neuron0x3229880()*0.00127982);
}

double NNfunction_NN_3_7::synapse0x323bbb0() {
   return (neuron0x3229bc0()*0.0323471);
}

double NNfunction_NN_3_7::synapse0x323bbf0() {
   return (neuron0x3229f00()*0.259686);
}

double NNfunction_NN_3_7::synapse0x323bc30() {
   return (neuron0x322a240()*0.054506);
}

double NNfunction_NN_3_7::synapse0x323bc70() {
   return (neuron0x322a580()*-0.00303199);
}

double NNfunction_NN_3_7::synapse0x323bcb0() {
   return (neuron0x322a8c0()*-0.0193668);
}

double NNfunction_NN_3_7::synapse0x323bcf0() {
   return (neuron0x322ac00()*-0.0180055);
}

double NNfunction_NN_3_7::synapse0x323b780() {
   return (neuron0x322af40()*-0.00219185);
}

double NNfunction_NN_3_7::synapse0x323b7c0() {
   return (neuron0x322b4a0()*-0.0146996);
}

double NNfunction_NN_3_7::synapse0x323be40() {
   return (neuron0x322b6c0()*-0.0160906);
}

double NNfunction_NN_3_7::synapse0x323be80() {
   return (neuron0x322ba00()*0.0241758);
}

double NNfunction_NN_3_7::synapse0x323bec0() {
   return (neuron0x322bd40()*-0.0350238);
}

double NNfunction_NN_3_7::synapse0x323bf00() {
   return (neuron0x322c080()*0.0379563);
}

double NNfunction_NN_3_7::synapse0x323bf40() {
   return (neuron0x322c3c0()*-0.0479197);
}

double NNfunction_NN_3_7::synapse0x323bf80() {
   return (neuron0x322c700()*-0.255246);
}

double NNfunction_NN_3_7::synapse0x323c300() {
   return (neuron0x3227b40()*-0.02437);
}

double NNfunction_NN_3_7::synapse0x323c340() {
   return (neuron0x3227e80()*9.5262);
}

double NNfunction_NN_3_7::synapse0x323c380() {
   return (neuron0x32281c0()*-0.0774589);
}

double NNfunction_NN_3_7::synapse0x323c3c0() {
   return (neuron0x3228500()*0.00547277);
}

double NNfunction_NN_3_7::synapse0x323c400() {
   return (neuron0x3228840()*-0.0233382);
}

double NNfunction_NN_3_7::synapse0x323c440() {
   return (neuron0x3228b80()*0.00457986);
}

double NNfunction_NN_3_7::synapse0x323c480() {
   return (neuron0x3228ec0()*0.00452389);
}

double NNfunction_NN_3_7::synapse0x323c4c0() {
   return (neuron0x3229200()*-0.00165556);
}

double NNfunction_NN_3_7::synapse0x323c500() {
   return (neuron0x3229540()*-0.016243);
}

double NNfunction_NN_3_7::synapse0x323c540() {
   return (neuron0x3229880()*-0.00426832);
}

double NNfunction_NN_3_7::synapse0x323c580() {
   return (neuron0x3229bc0()*0.0181518);
}

double NNfunction_NN_3_7::synapse0x323c5c0() {
   return (neuron0x3229f00()*0.022429);
}

double NNfunction_NN_3_7::synapse0x323c600() {
   return (neuron0x322a240()*-0.0119227);
}

double NNfunction_NN_3_7::synapse0x323c640() {
   return (neuron0x322a580()*-0.00412056);
}

double NNfunction_NN_3_7::synapse0x323c680() {
   return (neuron0x322a8c0()*-0.0105346);
}

double NNfunction_NN_3_7::synapse0x323c6c0() {
   return (neuron0x322ac00()*0.00601708);
}

double NNfunction_NN_3_7::synapse0x323c150() {
   return (neuron0x322af40()*-0.0253715);
}

double NNfunction_NN_3_7::synapse0x323c190() {
   return (neuron0x322b4a0()*-0.00542083);
}

double NNfunction_NN_3_7::synapse0x323c810() {
   return (neuron0x322b6c0()*-0.00204774);
}

double NNfunction_NN_3_7::synapse0x323c850() {
   return (neuron0x322ba00()*0.013007);
}

double NNfunction_NN_3_7::synapse0x323c890() {
   return (neuron0x322bd40()*0.0135056);
}

double NNfunction_NN_3_7::synapse0x323c8d0() {
   return (neuron0x322c080()*0.00983253);
}

double NNfunction_NN_3_7::synapse0x323c910() {
   return (neuron0x322c3c0()*-0.000989859);
}

double NNfunction_NN_3_7::synapse0x323c950() {
   return (neuron0x322c700()*-2.37725);
}

double NNfunction_NN_3_7::synapse0x323ccd0() {
   return (neuron0x3227b40()*-0.0138735);
}

double NNfunction_NN_3_7::synapse0x323cd10() {
   return (neuron0x3227e80()*-6.8551);
}

double NNfunction_NN_3_7::synapse0x323cd50() {
   return (neuron0x32281c0()*1.03026);
}

double NNfunction_NN_3_7::synapse0x323cd90() {
   return (neuron0x3228500()*0.0034277);
}

double NNfunction_NN_3_7::synapse0x323cdd0() {
   return (neuron0x3228840()*0.00915109);
}

double NNfunction_NN_3_7::synapse0x323ce10() {
   return (neuron0x3228b80()*0.0112184);
}

double NNfunction_NN_3_7::synapse0x323ce50() {
   return (neuron0x3228ec0()*-0.0141443);
}

double NNfunction_NN_3_7::synapse0x323ce90() {
   return (neuron0x3229200()*0.020944);
}

double NNfunction_NN_3_7::synapse0x323ced0() {
   return (neuron0x3229540()*-0.0191626);
}

double NNfunction_NN_3_7::synapse0x323cf10() {
   return (neuron0x3229880()*0.00682357);
}

double NNfunction_NN_3_7::synapse0x323cf50() {
   return (neuron0x3229bc0()*-0.00118133);
}

double NNfunction_NN_3_7::synapse0x323cf90() {
   return (neuron0x3229f00()*0.0197526);
}

double NNfunction_NN_3_7::synapse0x323cfd0() {
   return (neuron0x322a240()*0.00206062);
}

double NNfunction_NN_3_7::synapse0x323d010() {
   return (neuron0x322a580()*-0.0098492);
}

double NNfunction_NN_3_7::synapse0x323d050() {
   return (neuron0x322a8c0()*-0.0077563);
}

double NNfunction_NN_3_7::synapse0x323d090() {
   return (neuron0x322ac00()*-0.00215766);
}

double NNfunction_NN_3_7::synapse0x323cb20() {
   return (neuron0x322af40()*-0.00694973);
}

double NNfunction_NN_3_7::synapse0x323cb60() {
   return (neuron0x322b4a0()*-0.00408344);
}

double NNfunction_NN_3_7::synapse0x323d1e0() {
   return (neuron0x322b6c0()*0.0280428);
}

double NNfunction_NN_3_7::synapse0x323d220() {
   return (neuron0x322ba00()*0.014593);
}

double NNfunction_NN_3_7::synapse0x323d260() {
   return (neuron0x322bd40()*0.00992976);
}

double NNfunction_NN_3_7::synapse0x323d2a0() {
   return (neuron0x322c080()*-0.0168865);
}

double NNfunction_NN_3_7::synapse0x323d2e0() {
   return (neuron0x322c3c0()*-0.00193697);
}

double NNfunction_NN_3_7::synapse0x323d320() {
   return (neuron0x322c700()*-0.927757);
}

double NNfunction_NN_3_7::synapse0x324f1f0() {
   return (neuron0x3227b40()*0.0461941);
}

double NNfunction_NN_3_7::synapse0x324f230() {
   return (neuron0x3227e80()*-0.0518189);
}

double NNfunction_NN_3_7::synapse0x324f270() {
   return (neuron0x32281c0()*-7.04275);
}

double NNfunction_NN_3_7::synapse0x324f2b0() {
   return (neuron0x3228500()*0.00314988);
}

double NNfunction_NN_3_7::synapse0x324f2f0() {
   return (neuron0x3228840()*-0.00893614);
}

double NNfunction_NN_3_7::synapse0x324f330() {
   return (neuron0x3228b80()*-0.0115811);
}

double NNfunction_NN_3_7::synapse0x324f370() {
   return (neuron0x3228ec0()*-0.013943);
}

double NNfunction_NN_3_7::synapse0x324f3b0() {
   return (neuron0x3229200()*-0.0170169);
}

double NNfunction_NN_3_7::synapse0x324f3f0() {
   return (neuron0x3229540()*0.015652);
}

double NNfunction_NN_3_7::synapse0x324f430() {
   return (neuron0x3229880()*0.00692454);
}

double NNfunction_NN_3_7::synapse0x324f470() {
   return (neuron0x3229bc0()*0.0119802);
}

double NNfunction_NN_3_7::synapse0x324f4b0() {
   return (neuron0x3229f00()*7.02544);
}

double NNfunction_NN_3_7::synapse0x324f4f0() {
   return (neuron0x322a240()*0.011641);
}

double NNfunction_NN_3_7::synapse0x324f530() {
   return (neuron0x322a580()*-0.020202);
}

double NNfunction_NN_3_7::synapse0x324f570() {
   return (neuron0x322a8c0()*-0.0157035);
}

double NNfunction_NN_3_7::synapse0x324f5b0() {
   return (neuron0x322ac00()*-0.00038558);
}

double NNfunction_NN_3_7::synapse0x323d360() {
   return (neuron0x322af40()*-0.00644912);
}

double NNfunction_NN_3_7::synapse0x323d3a0() {
   return (neuron0x322b4a0()*0.0348532);
}

double NNfunction_NN_3_7::synapse0x324f700() {
   return (neuron0x322b6c0()*0.0170877);
}

double NNfunction_NN_3_7::synapse0x324f740() {
   return (neuron0x322ba00()*0.000600247);
}

double NNfunction_NN_3_7::synapse0x324f780() {
   return (neuron0x322bd40()*-0.0050272);
}

double NNfunction_NN_3_7::synapse0x324f7c0() {
   return (neuron0x322c080()*0.00962973);
}

double NNfunction_NN_3_7::synapse0x324f800() {
   return (neuron0x322c3c0()*0.0128665);
}

double NNfunction_NN_3_7::synapse0x324f840() {
   return (neuron0x322c700()*0.384759);
}

double NNfunction_NN_3_7::synapse0x324fbc0() {
   return (neuron0x3227b40()*0.018859);
}

double NNfunction_NN_3_7::synapse0x324fc00() {
   return (neuron0x3227e80()*14.8318);
}

double NNfunction_NN_3_7::synapse0x324fc40() {
   return (neuron0x32281c0()*0.238975);
}

double NNfunction_NN_3_7::synapse0x324fc80() {
   return (neuron0x3228500()*-0.0168767);
}

double NNfunction_NN_3_7::synapse0x324fcc0() {
   return (neuron0x3228840()*0.0103069);
}

double NNfunction_NN_3_7::synapse0x324fd00() {
   return (neuron0x3228b80()*-0.00433593);
}

double NNfunction_NN_3_7::synapse0x324fd40() {
   return (neuron0x3228ec0()*-0.00432588);
}

double NNfunction_NN_3_7::synapse0x324fd80() {
   return (neuron0x3229200()*0.00143272);
}

double NNfunction_NN_3_7::synapse0x324fdc0() {
   return (neuron0x3229540()*-0.00426424);
}

double NNfunction_NN_3_7::synapse0x324fe00() {
   return (neuron0x3229880()*-0.0105433);
}

double NNfunction_NN_3_7::synapse0x324fe40() {
   return (neuron0x3229bc0()*0.0056888);
}

double NNfunction_NN_3_7::synapse0x324fe80() {
   return (neuron0x3229f00()*-0.00312903);
}

double NNfunction_NN_3_7::synapse0x324fec0() {
   return (neuron0x322a240()*-0.00888162);
}

double NNfunction_NN_3_7::synapse0x324ff00() {
   return (neuron0x322a580()*-0.00401938);
}

double NNfunction_NN_3_7::synapse0x324ff40() {
   return (neuron0x322a8c0()*-0.0157199);
}

double NNfunction_NN_3_7::synapse0x324ff80() {
   return (neuron0x322ac00()*-0.00723552);
}

double NNfunction_NN_3_7::synapse0x324fa10() {
   return (neuron0x322af40()*0.0113712);
}

double NNfunction_NN_3_7::synapse0x324fa50() {
   return (neuron0x322b4a0()*0.0198024);
}

double NNfunction_NN_3_7::synapse0x32500d0() {
   return (neuron0x322b6c0()*0.00653308);
}

double NNfunction_NN_3_7::synapse0x3250110() {
   return (neuron0x322ba00()*0.0132092);
}

double NNfunction_NN_3_7::synapse0x3250150() {
   return (neuron0x322bd40()*0.00442916);
}

double NNfunction_NN_3_7::synapse0x3250190() {
   return (neuron0x322c080()*-0.00571945);
}

double NNfunction_NN_3_7::synapse0x32501d0() {
   return (neuron0x322c3c0()*-0.00176848);
}

double NNfunction_NN_3_7::synapse0x3250210() {
   return (neuron0x322c700()*3.38551);
}

double NNfunction_NN_3_7::synapse0x3250590() {
   return (neuron0x3227b40()*-0.0230102);
}

double NNfunction_NN_3_7::synapse0x32505d0() {
   return (neuron0x3227e80()*-4.35076);
}

double NNfunction_NN_3_7::synapse0x3250610() {
   return (neuron0x32281c0()*-0.34514);
}

double NNfunction_NN_3_7::synapse0x3250650() {
   return (neuron0x3228500()*-0.0135109);
}

double NNfunction_NN_3_7::synapse0x3250690() {
   return (neuron0x3228840()*-0.012434);
}

double NNfunction_NN_3_7::synapse0x32506d0() {
   return (neuron0x3228b80()*0.0152062);
}

double NNfunction_NN_3_7::synapse0x3250710() {
   return (neuron0x3228ec0()*-0.00335653);
}

double NNfunction_NN_3_7::synapse0x3250750() {
   return (neuron0x3229200()*0.0253026);
}

double NNfunction_NN_3_7::synapse0x3250790() {
   return (neuron0x3229540()*-0.0195013);
}

double NNfunction_NN_3_7::synapse0x32507d0() {
   return (neuron0x3229880()*-0.00753114);
}

double NNfunction_NN_3_7::synapse0x3250810() {
   return (neuron0x3229bc0()*-0.000102398);
}

double NNfunction_NN_3_7::synapse0x3250850() {
   return (neuron0x3229f00()*-0.0886703);
}

double NNfunction_NN_3_7::synapse0x3250890() {
   return (neuron0x322a240()*-0.034055);
}

double NNfunction_NN_3_7::synapse0x32508d0() {
   return (neuron0x322a580()*-0.0211768);
}

double NNfunction_NN_3_7::synapse0x3250910() {
   return (neuron0x322a8c0()*0.00351418);
}

double NNfunction_NN_3_7::synapse0x3250950() {
   return (neuron0x322ac00()*0.0216188);
}

double NNfunction_NN_3_7::synapse0x32503e0() {
   return (neuron0x322af40()*0.0097632);
}

double NNfunction_NN_3_7::synapse0x3250420() {
   return (neuron0x322b4a0()*-0.0163175);
}

double NNfunction_NN_3_7::synapse0x3250aa0() {
   return (neuron0x322b6c0()*0.00344024);
}

double NNfunction_NN_3_7::synapse0x3250ae0() {
   return (neuron0x322ba00()*0.00409552);
}

double NNfunction_NN_3_7::synapse0x3250b20() {
   return (neuron0x322bd40()*-0.000654234);
}

double NNfunction_NN_3_7::synapse0x3250b60() {
   return (neuron0x322c080()*-0.000953108);
}

double NNfunction_NN_3_7::synapse0x3250ba0() {
   return (neuron0x322c3c0()*-0.00135519);
}

double NNfunction_NN_3_7::synapse0x3250be0() {
   return (neuron0x322c700()*0.161792);
}

double NNfunction_NN_3_7::synapse0x3250f60() {
   return (neuron0x3227b40()*-0.142425);
}

double NNfunction_NN_3_7::synapse0x3250fa0() {
   return (neuron0x3227e80()*-1.66544);
}

double NNfunction_NN_3_7::synapse0x3250fe0() {
   return (neuron0x32281c0()*0.209579);
}

double NNfunction_NN_3_7::synapse0x3251020() {
   return (neuron0x3228500()*-0.134245);
}

double NNfunction_NN_3_7::synapse0x3251060() {
   return (neuron0x3228840()*-0.0112462);
}

double NNfunction_NN_3_7::synapse0x32510a0() {
   return (neuron0x3228b80()*0.0785757);
}

double NNfunction_NN_3_7::synapse0x32510e0() {
   return (neuron0x3228ec0()*0.000387479);
}

double NNfunction_NN_3_7::synapse0x3251120() {
   return (neuron0x3229200()*0.0521317);
}

double NNfunction_NN_3_7::synapse0x3251160() {
   return (neuron0x3229540()*-0.0760014);
}

double NNfunction_NN_3_7::synapse0x32511a0() {
   return (neuron0x3229880()*0.00993572);
}

double NNfunction_NN_3_7::synapse0x32511e0() {
   return (neuron0x3229bc0()*-0.085876);
}

double NNfunction_NN_3_7::synapse0x3251220() {
   return (neuron0x3229f00()*-0.223667);
}

double NNfunction_NN_3_7::synapse0x3251260() {
   return (neuron0x322a240()*-0.0485263);
}

double NNfunction_NN_3_7::synapse0x32512a0() {
   return (neuron0x322a580()*-0.0174235);
}

double NNfunction_NN_3_7::synapse0x32512e0() {
   return (neuron0x322a8c0()*0.0136625);
}

double NNfunction_NN_3_7::synapse0x3251320() {
   return (neuron0x322ac00()*-0.0121166);
}

double NNfunction_NN_3_7::synapse0x3250db0() {
   return (neuron0x322af40()*-0.0417387);
}

double NNfunction_NN_3_7::synapse0x3250df0() {
   return (neuron0x322b4a0()*0.0496488);
}

double NNfunction_NN_3_7::synapse0x3251470() {
   return (neuron0x322b6c0()*0.0472413);
}

double NNfunction_NN_3_7::synapse0x32514b0() {
   return (neuron0x322ba00()*0.0178968);
}

double NNfunction_NN_3_7::synapse0x32514f0() {
   return (neuron0x322bd40()*0.0510446);
}

double NNfunction_NN_3_7::synapse0x3251530() {
   return (neuron0x322c080()*-0.0044859);
}

double NNfunction_NN_3_7::synapse0x3251570() {
   return (neuron0x322c3c0()*0.040824);
}

double NNfunction_NN_3_7::synapse0x32515b0() {
   return (neuron0x322c700()*-0.0537238);
}

double NNfunction_NN_3_7::synapse0x322db50() {
   return (neuron0x322cba0()*-0.368943);
}

double NNfunction_NN_3_7::synapse0x322db90() {
   return (neuron0x322d4b0()*-0.150229);
}

double NNfunction_NN_3_7::synapse0x322f060() {
   return (neuron0x322df90()*-0.0248691);
}

double NNfunction_NN_3_7::synapse0x322f0a0() {
   return (neuron0x2fe7820()*-0.213746);
}

double NNfunction_NN_3_7::synapse0x322fa30() {
   return (neuron0x322edb0()*-0.900699);
}

double NNfunction_NN_3_7::synapse0x322fa70() {
   return (neuron0x322f780()*-0.0668967);
}

double NNfunction_NN_3_7::synapse0x3230800() {
   return (neuron0x3230550()*-0.893508);
}

double NNfunction_NN_3_7::synapse0x3230840() {
   return (neuron0x3230f20()*0.106678);
}

double NNfunction_NN_3_7::synapse0x32311d0() {
   return (neuron0x32318f0()*0.146237);
}

double NNfunction_NN_3_7::synapse0x3231210() {
   return (neuron0x32323d0()*0.390141);
}

double NNfunction_NN_3_7::synapse0x3231ba0() {
   return (neuron0x3232da0()*-0.193942);
}

double NNfunction_NN_3_7::synapse0x3231be0() {
   return (neuron0x322fe80()*0.42654);
}

double NNfunction_NN_3_7::synapse0x3232680() {
   return (neuron0x3234950()*-0.228871);
}

double NNfunction_NN_3_7::synapse0x32326c0() {
   return (neuron0x3235320()*-0.22647);
}

double NNfunction_NN_3_7::synapse0x3233050() {
   return (neuron0x3235cf0()*0.546507);
}

double NNfunction_NN_3_7::synapse0x3233090() {
   return (neuron0x32366c0()*0.485435);
}

double NNfunction_NN_3_7::synapse0x3230130() {
   return (neuron0x32384d0()*-0.679673);
}

double NNfunction_NN_3_7::synapse0x3230170() {
   return (neuron0x32387b0()*-0.488308);
}

double NNfunction_NN_3_7::synapse0x3234c00() {
   return (neuron0x3239180()*-0.564357);
}

double NNfunction_NN_3_7::synapse0x3234c40() {
   return (neuron0x3239b50()*0.123801);
}

double NNfunction_NN_3_7::synapse0x32355d0() {
   return (neuron0x323a520()*0.766483);
}

double NNfunction_NN_3_7::synapse0x3235610() {
   return (neuron0x323aef0()*0.054439);
}

double NNfunction_NN_3_7::synapse0x3235fa0() {
   return (neuron0x3233a40()*0.101647);
}

double NNfunction_NN_3_7::synapse0x3235fe0() {
   return (neuron0x3234410()*-0.430618);
}

double NNfunction_NN_3_7::synapse0x3236970() {
   return (neuron0x323dc80()*-0.434161);
}

double NNfunction_NN_3_7::synapse0x32369b0() {
   return (neuron0x323e650()*-0.691716);
}

double NNfunction_NN_3_7::synapse0x322aae0() {
   return (neuron0x323f020()*-0.0986263);
}

double NNfunction_NN_3_7::synapse0x322ab20() {
   return (neuron0x323f9f0()*-0.279892);
}

double NNfunction_NN_3_7::synapse0x3238a60() {
   return (neuron0x32403c0()*-1.30006);
}

double NNfunction_NN_3_7::synapse0x3238aa0() {
   return (neuron0x3240d90()*0.468516);
}

double NNfunction_NN_3_7::synapse0x3239430() {
   return (neuron0x3241760()*-1.32416);
}

double NNfunction_NN_3_7::synapse0x3239470() {
   return (neuron0x3242130()*0.47465);
}

double NNfunction_NN_3_7::synapse0x3239e00() {
   return (neuron0x32381c0()*0.268389);
}

double NNfunction_NN_3_7::synapse0x3239e40() {
   return (neuron0x3244d10()*-0.285087);
}

double NNfunction_NN_3_7::synapse0x323a7d0() {
   return (neuron0x32456e0()*-0.533075);
}

double NNfunction_NN_3_7::synapse0x323a810() {
   return (neuron0x32460b0()*-0.288162);
}

double NNfunction_NN_3_7::synapse0x323b1a0() {
   return (neuron0x3246a80()*-0.369399);
}

double NNfunction_NN_3_7::synapse0x323b1e0() {
   return (neuron0x3247450()*-0.189378);
}

double NNfunction_NN_3_7::synapse0x3233cf0() {
   return (neuron0x3247e20()*-1.06224);
}

double NNfunction_NN_3_7::synapse0x3233d30() {
   return (neuron0x32487f0()*-0.839875);
}

double NNfunction_NN_3_7::synapse0x323d5a0() {
   return (neuron0x32491c0()*-0.371921);
}

double NNfunction_NN_3_7::synapse0x323d5e0() {
   return (neuron0x3249da0()*-0.133027);
}

double NNfunction_NN_3_7::synapse0x323df30() {
   return (neuron0x324a770()*-0.788421);
}

double NNfunction_NN_3_7::synapse0x323df70() {
   return (neuron0x323b5f0()*-0.185432);
}

double NNfunction_NN_3_7::synapse0x323e900() {
   return (neuron0x323bfc0()*-0.622358);
}

double NNfunction_NN_3_7::synapse0x323e940() {
   return (neuron0x323c990()*-0.0502561);
}

double NNfunction_NN_3_7::synapse0x323f2d0() {
   return (neuron0x324efd0()*-0.435418);
}

double NNfunction_NN_3_7::synapse0x323f310() {
   return (neuron0x324f880()*-0.364013);
}

double NNfunction_NN_3_7::synapse0x323fca0() {
   return (neuron0x3250250()*-0.213381);
}

double NNfunction_NN_3_7::synapse0x323fce0() {
   return (neuron0x3250c20()*-0.967889);
}

double NNfunction_NN_3_7::synapse0x32423e0() {
   return (neuron0x322cba0()*-1.07496);
}

double NNfunction_NN_3_7::synapse0x3242420() {
   return (neuron0x322d4b0()*-0.772029);
}

double NNfunction_NN_3_7::synapse0x32379a0() {
   return (neuron0x322df90()*-0.41516);
}

double NNfunction_NN_3_7::synapse0x32379e0() {
   return (neuron0x2fe7820()*0.178527);
}

double NNfunction_NN_3_7::synapse0x3244fc0() {
   return (neuron0x322edb0()*-0.350307);
}

double NNfunction_NN_3_7::synapse0x3245000() {
   return (neuron0x322f780()*-0.10316);
}

double NNfunction_NN_3_7::synapse0x3245990() {
   return (neuron0x3230550()*-0.0562925);
}

double NNfunction_NN_3_7::synapse0x32459d0() {
   return (neuron0x3230f20()*0.0831124);
}

double NNfunction_NN_3_7::synapse0x3246360() {
   return (neuron0x32318f0()*-0.0666599);
}

double NNfunction_NN_3_7::synapse0x32463a0() {
   return (neuron0x32323d0()*0.133024);
}

double NNfunction_NN_3_7::synapse0x3246d30() {
   return (neuron0x3232da0()*-0.368743);
}

double NNfunction_NN_3_7::synapse0x3246d70() {
   return (neuron0x322fe80()*0.22212);
}

double NNfunction_NN_3_7::synapse0x3247700() {
   return (neuron0x3234950()*-1.43815);
}

double NNfunction_NN_3_7::synapse0x3247740() {
   return (neuron0x3235320()*-0.119527);
}

double NNfunction_NN_3_7::synapse0x32480d0() {
   return (neuron0x3235cf0()*1.06506);
}

double NNfunction_NN_3_7::synapse0x3248110() {
   return (neuron0x32366c0()*-0.666278);
}

double NNfunction_NN_3_7::synapse0x3248aa0() {
   return (neuron0x32384d0()*-0.0848118);
}

double NNfunction_NN_3_7::synapse0x3248ae0() {
   return (neuron0x32387b0()*0.00608407);
}

double NNfunction_NN_3_7::synapse0x3249470() {
   return (neuron0x3239180()*-0.763889);
}

double NNfunction_NN_3_7::synapse0x32494b0() {
   return (neuron0x3239b50()*0.609002);
}

double NNfunction_NN_3_7::synapse0x324a050() {
   return (neuron0x323a520()*0.512419);
}

double NNfunction_NN_3_7::synapse0x324a090() {
   return (neuron0x323aef0()*-0.4059);
}

double NNfunction_NN_3_7::synapse0x324aa20() {
   return (neuron0x3233a40()*0.775713);
}

double NNfunction_NN_3_7::synapse0x324aa60() {
   return (neuron0x3234410()*1.13294);
}

double NNfunction_NN_3_7::synapse0x323b8a0() {
   return (neuron0x323dc80()*1.75062);
}

double NNfunction_NN_3_7::synapse0x323b8e0() {
   return (neuron0x323e650()*0.289382);
}

double NNfunction_NN_3_7::synapse0x323c270() {
   return (neuron0x323f020()*0.0499186);
}

double NNfunction_NN_3_7::synapse0x323c2b0() {
   return (neuron0x323f9f0()*-0.283447);
}

double NNfunction_NN_3_7::synapse0x323cc40() {
   return (neuron0x32403c0()*0.450683);
}

double NNfunction_NN_3_7::synapse0x323cc80() {
   return (neuron0x3240d90()*0.0115427);
}

double NNfunction_NN_3_7::synapse0x324f160() {
   return (neuron0x3241760()*0.574361);
}

double NNfunction_NN_3_7::synapse0x324f1a0() {
   return (neuron0x3242130()*-0.278807);
}

double NNfunction_NN_3_7::synapse0x324fb30() {
   return (neuron0x32381c0()*0.182861);
}

double NNfunction_NN_3_7::synapse0x324fb70() {
   return (neuron0x3244d10()*-0.145481);
}

double NNfunction_NN_3_7::synapse0x3250500() {
   return (neuron0x32456e0()*0.874375);
}

double NNfunction_NN_3_7::synapse0x3250540() {
   return (neuron0x32460b0()*1.81415);
}

double NNfunction_NN_3_7::synapse0x3250ed0() {
   return (neuron0x3246a80()*-0.0423247);
}

double NNfunction_NN_3_7::synapse0x3250f10() {
   return (neuron0x3247450()*-0.486394);
}

double NNfunction_NN_3_7::synapse0x322cdc0() {
   return (neuron0x3247e20()*-2.24252);
}

double NNfunction_NN_3_7::synapse0x322ce00() {
   return (neuron0x32487f0()*0.617022);
}

double NNfunction_NN_3_7::synapse0x3240670() {
   return (neuron0x32491c0()*0.23032);
}

double NNfunction_NN_3_7::synapse0x32406b0() {
   return (neuron0x3249da0()*0.218146);
}

double NNfunction_NN_3_7::synapse0x32515f0() {
   return (neuron0x324a770()*0.116526);
}

double NNfunction_NN_3_7::synapse0x3251630() {
   return (neuron0x323b5f0()*-0.213317);
}

double NNfunction_NN_3_7::synapse0x3251670() {
   return (neuron0x323bfc0()*-0.905214);
}

double NNfunction_NN_3_7::synapse0x32516b0() {
   return (neuron0x323c990()*-1.07541);
}

double NNfunction_NN_3_7::synapse0x3258560() {
   return (neuron0x324efd0()*0.389302);
}

double NNfunction_NN_3_7::synapse0x32585a0() {
   return (neuron0x324f880()*-0.0674452);
}

double NNfunction_NN_3_7::synapse0x32585e0() {
   return (neuron0x3250250()*2.01935);
}

double NNfunction_NN_3_7::synapse0x3258620() {
   return (neuron0x3250c20()*-0.38019);
}

double NNfunction_NN_3_7::synapse0x32589a0() {
   return (neuron0x322cba0()*0.406606);
}

double NNfunction_NN_3_7::synapse0x32589e0() {
   return (neuron0x322d4b0()*0.968714);
}

double NNfunction_NN_3_7::synapse0x3258a20() {
   return (neuron0x322df90()*-0.393472);
}

double NNfunction_NN_3_7::synapse0x3258a60() {
   return (neuron0x2fe7820()*-2.28951);
}

double NNfunction_NN_3_7::synapse0x3258aa0() {
   return (neuron0x322edb0()*-0.230804);
}

double NNfunction_NN_3_7::synapse0x3258ae0() {
   return (neuron0x322f780()*-0.309909);
}

double NNfunction_NN_3_7::synapse0x3258b20() {
   return (neuron0x3230550()*-0.0888397);
}

double NNfunction_NN_3_7::synapse0x3258b60() {
   return (neuron0x3230f20()*-0.749334);
}

double NNfunction_NN_3_7::synapse0x3258ba0() {
   return (neuron0x32318f0()*0.123676);
}

double NNfunction_NN_3_7::synapse0x3258be0() {
   return (neuron0x32323d0()*-0.268949);
}

double NNfunction_NN_3_7::synapse0x3258c20() {
   return (neuron0x3232da0()*0.290682);
}

double NNfunction_NN_3_7::synapse0x3258c60() {
   return (neuron0x322fe80()*-0.661669);
}

double NNfunction_NN_3_7::synapse0x3258ca0() {
   return (neuron0x3234950()*0.441609);
}

double NNfunction_NN_3_7::synapse0x3258ce0() {
   return (neuron0x3235320()*0.29651);
}

double NNfunction_NN_3_7::synapse0x3258d20() {
   return (neuron0x3235cf0()*-1.93097);
}

double NNfunction_NN_3_7::synapse0x3258d60() {
   return (neuron0x32366c0()*0.0371204);
}

double NNfunction_NN_3_7::synapse0x32587f0() {
   return (neuron0x32384d0()*-0.0990741);
}

double NNfunction_NN_3_7::synapse0x3258830() {
   return (neuron0x32387b0()*0.281832);
}

double NNfunction_NN_3_7::synapse0x3258eb0() {
   return (neuron0x3239180()*-0.046977);
}

double NNfunction_NN_3_7::synapse0x3258ef0() {
   return (neuron0x3239b50()*1.03988);
}

double NNfunction_NN_3_7::synapse0x3258f30() {
   return (neuron0x323a520()*-1.82379);
}

double NNfunction_NN_3_7::synapse0x3258f70() {
   return (neuron0x323aef0()*-1.4426);
}

double NNfunction_NN_3_7::synapse0x3258fb0() {
   return (neuron0x3233a40()*1.195);
}

double NNfunction_NN_3_7::synapse0x3258ff0() {
   return (neuron0x3234410()*-0.980912);
}

double NNfunction_NN_3_7::synapse0x3259030() {
   return (neuron0x323dc80()*-0.396316);
}

double NNfunction_NN_3_7::synapse0x3259070() {
   return (neuron0x323e650()*0.75891);
}

double NNfunction_NN_3_7::synapse0x32590b0() {
   return (neuron0x323f020()*0.0313877);
}

double NNfunction_NN_3_7::synapse0x32590f0() {
   return (neuron0x323f9f0()*0.877723);
}

double NNfunction_NN_3_7::synapse0x3259130() {
   return (neuron0x32403c0()*-0.889915);
}

double NNfunction_NN_3_7::synapse0x3259170() {
   return (neuron0x3240d90()*-0.0195193);
}

double NNfunction_NN_3_7::synapse0x32591b0() {
   return (neuron0x3241760()*0.0296837);
}

double NNfunction_NN_3_7::synapse0x32591f0() {
   return (neuron0x3242130()*-0.980974);
}

double NNfunction_NN_3_7::synapse0x3258da0() {
   return (neuron0x32381c0()*-0.23214);
}

double NNfunction_NN_3_7::synapse0x3258de0() {
   return (neuron0x3244d10()*0.0703845);
}

double NNfunction_NN_3_7::synapse0x3258e20() {
   return (neuron0x32456e0()*-1.59718);
}

double NNfunction_NN_3_7::synapse0x3258e60() {
   return (neuron0x32460b0()*-0.865251);
}

double NNfunction_NN_3_7::synapse0x3259440() {
   return (neuron0x3246a80()*0.417973);
}

double NNfunction_NN_3_7::synapse0x3259480() {
   return (neuron0x3247450()*0.392541);
}

double NNfunction_NN_3_7::synapse0x32594c0() {
   return (neuron0x3247e20()*0.891433);
}

double NNfunction_NN_3_7::synapse0x3259500() {
   return (neuron0x32487f0()*-0.858117);
}

double NNfunction_NN_3_7::synapse0x3259540() {
   return (neuron0x32491c0()*0.438881);
}

double NNfunction_NN_3_7::synapse0x3259580() {
   return (neuron0x3249da0()*3.01994);
}

double NNfunction_NN_3_7::synapse0x32595c0() {
   return (neuron0x324a770()*0.209372);
}

double NNfunction_NN_3_7::synapse0x3259600() {
   return (neuron0x323b5f0()*0.50665);
}

double NNfunction_NN_3_7::synapse0x3259640() {
   return (neuron0x323bfc0()*2.25866);
}

double NNfunction_NN_3_7::synapse0x3259680() {
   return (neuron0x323c990()*-0.703711);
}

double NNfunction_NN_3_7::synapse0x32596c0() {
   return (neuron0x324efd0()*-0.294167);
}

double NNfunction_NN_3_7::synapse0x3259700() {
   return (neuron0x324f880()*2.18343);
}

double NNfunction_NN_3_7::synapse0x3259740() {
   return (neuron0x3250250()*-1.48914);
}

double NNfunction_NN_3_7::synapse0x3259780() {
   return (neuron0x3250c20()*0.187253);
}

double NNfunction_NN_3_7::synapse0x3259b00() {
   return (neuron0x322cba0()*-3.914);
}

double NNfunction_NN_3_7::synapse0x3259b40() {
   return (neuron0x322d4b0()*2.29567);
}

double NNfunction_NN_3_7::synapse0x3259b80() {
   return (neuron0x322df90()*0.553933);
}

double NNfunction_NN_3_7::synapse0x3259bc0() {
   return (neuron0x2fe7820()*0.221071);
}

double NNfunction_NN_3_7::synapse0x3259c00() {
   return (neuron0x322edb0()*-0.0982907);
}

double NNfunction_NN_3_7::synapse0x3259c40() {
   return (neuron0x322f780()*-0.0757883);
}

double NNfunction_NN_3_7::synapse0x3259c80() {
   return (neuron0x3230550()*0.286229);
}

double NNfunction_NN_3_7::synapse0x3259cc0() {
   return (neuron0x3230f20()*-2.0289);
}

double NNfunction_NN_3_7::synapse0x3259d00() {
   return (neuron0x32318f0()*-2.01822);
}

double NNfunction_NN_3_7::synapse0x3259d40() {
   return (neuron0x32323d0()*1.14133);
}

double NNfunction_NN_3_7::synapse0x3259d80() {
   return (neuron0x3232da0()*0.347426);
}

double NNfunction_NN_3_7::synapse0x3259dc0() {
   return (neuron0x322fe80()*0.887794);
}

double NNfunction_NN_3_7::synapse0x3259e00() {
   return (neuron0x3234950()*4.21325);
}

double NNfunction_NN_3_7::synapse0x3259e40() {
   return (neuron0x3235320()*-0.593413);
}

double NNfunction_NN_3_7::synapse0x3259e80() {
   return (neuron0x3235cf0()*0.88963);
}

double NNfunction_NN_3_7::synapse0x3259ec0() {
   return (neuron0x32366c0()*0.945731);
}

double NNfunction_NN_3_7::synapse0x3259950() {
   return (neuron0x32384d0()*3.2436);
}

double NNfunction_NN_3_7::synapse0x3259990() {
   return (neuron0x32387b0()*1.77422);
}

double NNfunction_NN_3_7::synapse0x325a010() {
   return (neuron0x3239180()*-0.0440643);
}

double NNfunction_NN_3_7::synapse0x325a050() {
   return (neuron0x3239b50()*1.44052);
}

double NNfunction_NN_3_7::synapse0x325a090() {
   return (neuron0x323a520()*-0.317594);
}

double NNfunction_NN_3_7::synapse0x325a0d0() {
   return (neuron0x323aef0()*0.572806);
}

double NNfunction_NN_3_7::synapse0x325a110() {
   return (neuron0x3233a40()*-0.163093);
}

double NNfunction_NN_3_7::synapse0x325a150() {
   return (neuron0x3234410()*3.01293);
}

double NNfunction_NN_3_7::synapse0x325a190() {
   return (neuron0x323dc80()*1.20669);
}

double NNfunction_NN_3_7::synapse0x325a1d0() {
   return (neuron0x323e650()*-0.240912);
}

double NNfunction_NN_3_7::synapse0x325a210() {
   return (neuron0x323f020()*-0.120777);
}

double NNfunction_NN_3_7::synapse0x325a250() {
   return (neuron0x323f9f0()*-1.18363);
}

double NNfunction_NN_3_7::synapse0x325a290() {
   return (neuron0x32403c0()*-0.776864);
}

double NNfunction_NN_3_7::synapse0x325a2d0() {
   return (neuron0x3240d90()*0.289472);
}

double NNfunction_NN_3_7::synapse0x325a310() {
   return (neuron0x3241760()*0.884144);
}

double NNfunction_NN_3_7::synapse0x325a350() {
   return (neuron0x3242130()*1.32704);
}

double NNfunction_NN_3_7::synapse0x3259f00() {
   return (neuron0x32381c0()*0.982203);
}

double NNfunction_NN_3_7::synapse0x3259f40() {
   return (neuron0x3244d10()*0.305587);
}

double NNfunction_NN_3_7::synapse0x3259f80() {
   return (neuron0x32456e0()*0.336212);
}

double NNfunction_NN_3_7::synapse0x3259fc0() {
   return (neuron0x32460b0()*-1.33587);
}

double NNfunction_NN_3_7::synapse0x325a5a0() {
   return (neuron0x3246a80()*0.515271);
}

double NNfunction_NN_3_7::synapse0x325a5e0() {
   return (neuron0x3247450()*0.0980179);
}

double NNfunction_NN_3_7::synapse0x325a620() {
   return (neuron0x3247e20()*2.05027);
}

double NNfunction_NN_3_7::synapse0x325a660() {
   return (neuron0x32487f0()*0.429765);
}

double NNfunction_NN_3_7::synapse0x325a6a0() {
   return (neuron0x32491c0()*-0.102213);
}

double NNfunction_NN_3_7::synapse0x325a6e0() {
   return (neuron0x3249da0()*0.338487);
}

double NNfunction_NN_3_7::synapse0x325a720() {
   return (neuron0x324a770()*-2.23889);
}

double NNfunction_NN_3_7::synapse0x325a760() {
   return (neuron0x323b5f0()*-0.525902);
}

double NNfunction_NN_3_7::synapse0x325a7a0() {
   return (neuron0x323bfc0()*-1.63513);
}

double NNfunction_NN_3_7::synapse0x325a7e0() {
   return (neuron0x323c990()*-2.78359);
}

double NNfunction_NN_3_7::synapse0x325a820() {
   return (neuron0x324efd0()*-2.73725);
}

double NNfunction_NN_3_7::synapse0x325a860() {
   return (neuron0x324f880()*-1.26921);
}

double NNfunction_NN_3_7::synapse0x325a8a0() {
   return (neuron0x3250250()*-1.79749);
}

double NNfunction_NN_3_7::synapse0x325a8e0() {
   return (neuron0x3250c20()*-0.0798821);
}

double NNfunction_NN_3_7::synapse0x325ac60() {
   return (neuron0x322cba0()*2.25965);
}

double NNfunction_NN_3_7::synapse0x325aca0() {
   return (neuron0x322d4b0()*0.445094);
}

double NNfunction_NN_3_7::synapse0x325ace0() {
   return (neuron0x322df90()*0.0554429);
}

double NNfunction_NN_3_7::synapse0x325ad20() {
   return (neuron0x2fe7820()*-0.138889);
}

double NNfunction_NN_3_7::synapse0x325ad60() {
   return (neuron0x322edb0()*-0.0973873);
}

double NNfunction_NN_3_7::synapse0x325ada0() {
   return (neuron0x322f780()*0.0594511);
}

double NNfunction_NN_3_7::synapse0x325ade0() {
   return (neuron0x3230550()*-0.00418221);
}

double NNfunction_NN_3_7::synapse0x325ae20() {
   return (neuron0x3230f20()*-0.149963);
}

double NNfunction_NN_3_7::synapse0x325ae60() {
   return (neuron0x32318f0()*0.0279704);
}

double NNfunction_NN_3_7::synapse0x325aea0() {
   return (neuron0x32323d0()*-0.0603944);
}

double NNfunction_NN_3_7::synapse0x325aee0() {
   return (neuron0x3232da0()*0.0212524);
}

double NNfunction_NN_3_7::synapse0x325af20() {
   return (neuron0x322fe80()*0.129318);
}

double NNfunction_NN_3_7::synapse0x325af60() {
   return (neuron0x3234950()*-0.357371);
}

double NNfunction_NN_3_7::synapse0x325afa0() {
   return (neuron0x3235320()*-0.0349119);
}

double NNfunction_NN_3_7::synapse0x325afe0() {
   return (neuron0x3235cf0()*0.46968);
}

double NNfunction_NN_3_7::synapse0x325b020() {
   return (neuron0x32366c0()*-0.032893);
}

double NNfunction_NN_3_7::synapse0x325aab0() {
   return (neuron0x32384d0()*0.030321);
}

double NNfunction_NN_3_7::synapse0x325aaf0() {
   return (neuron0x32387b0()*-0.398576);
}

double NNfunction_NN_3_7::synapse0x325b170() {
   return (neuron0x3239180()*-0.0841684);
}

double NNfunction_NN_3_7::synapse0x325b1b0() {
   return (neuron0x3239b50()*-0.0890649);
}

double NNfunction_NN_3_7::synapse0x325b1f0() {
   return (neuron0x323a520()*-0.283578);
}

double NNfunction_NN_3_7::synapse0x325b230() {
   return (neuron0x323aef0()*-1.52693);
}

double NNfunction_NN_3_7::synapse0x325b270() {
   return (neuron0x3233a40()*0.366474);
}

double NNfunction_NN_3_7::synapse0x325b2b0() {
   return (neuron0x3234410()*-1.75384);
}

double NNfunction_NN_3_7::synapse0x325b2f0() {
   return (neuron0x323dc80()*0.565966);
}

double NNfunction_NN_3_7::synapse0x325b330() {
   return (neuron0x323e650()*-0.156893);
}

double NNfunction_NN_3_7::synapse0x325b370() {
   return (neuron0x323f020()*-0.0219421);
}

double NNfunction_NN_3_7::synapse0x325b3b0() {
   return (neuron0x323f9f0()*-0.172513);
}

double NNfunction_NN_3_7::synapse0x325b3f0() {
   return (neuron0x32403c0()*-1.40478);
}

double NNfunction_NN_3_7::synapse0x325b430() {
   return (neuron0x3240d90()*-0.00641421);
}

double NNfunction_NN_3_7::synapse0x325b470() {
   return (neuron0x3241760()*-0.119642);
}

double NNfunction_NN_3_7::synapse0x325b4b0() {
   return (neuron0x3242130()*0.180657);
}

double NNfunction_NN_3_7::synapse0x325b060() {
   return (neuron0x32381c0()*-0.0841318);
}

double NNfunction_NN_3_7::synapse0x325b0a0() {
   return (neuron0x3244d10()*-0.0103042);
}

double NNfunction_NN_3_7::synapse0x325b0e0() {
   return (neuron0x32456e0()*-0.884083);
}

double NNfunction_NN_3_7::synapse0x325b120() {
   return (neuron0x32460b0()*-0.964497);
}

double NNfunction_NN_3_7::synapse0x325b700() {
   return (neuron0x3246a80()*0.134653);
}

double NNfunction_NN_3_7::synapse0x325b740() {
   return (neuron0x3247450()*0.78663);
}

double NNfunction_NN_3_7::synapse0x325b780() {
   return (neuron0x3247e20()*0.68361);
}

double NNfunction_NN_3_7::synapse0x325b7c0() {
   return (neuron0x32487f0()*0.283515);
}

double NNfunction_NN_3_7::synapse0x325b800() {
   return (neuron0x32491c0()*-0.0957689);
}

double NNfunction_NN_3_7::synapse0x325b840() {
   return (neuron0x3249da0()*0.114133);
}

double NNfunction_NN_3_7::synapse0x325b880() {
   return (neuron0x324a770()*-0.0320251);
}

double NNfunction_NN_3_7::synapse0x325b8c0() {
   return (neuron0x323b5f0()*-0.0743282);
}

double NNfunction_NN_3_7::synapse0x325b900() {
   return (neuron0x323bfc0()*1.17493);
}

double NNfunction_NN_3_7::synapse0x325b940() {
   return (neuron0x323c990()*2.03301);
}

double NNfunction_NN_3_7::synapse0x325b980() {
   return (neuron0x324efd0()*-0.022572);
}

double NNfunction_NN_3_7::synapse0x325b9c0() {
   return (neuron0x324f880()*-1.12881);
}

double NNfunction_NN_3_7::synapse0x325ba00() {
   return (neuron0x3250250()*0.0909957);
}

double NNfunction_NN_3_7::synapse0x325ba40() {
   return (neuron0x3250c20()*0.153302);
}

double NNfunction_NN_3_7::synapse0x322cb60() {
   return (neuron0x3257e20()*0.556094);
}

double NNfunction_NN_3_7::synapse0x325bca0() {
   return (neuron0x32581c0()*-10.5039);
}

double NNfunction_NN_3_7::synapse0x325bce0() {
   return (neuron0x3258660()*-5.92807);
}

double NNfunction_NN_3_7::synapse0x325bd20() {
   return (neuron0x32597c0()*-6.34081);
}

double NNfunction_NN_3_7::synapse0x325bd60() {
   return (neuron0x325a920()*-11.2705);
}

