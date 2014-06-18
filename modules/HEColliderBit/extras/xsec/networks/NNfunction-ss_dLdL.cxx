#include "NNfunction-ss_dLdL.h"
#include <cmath>

double NNfunction-ss_dLdL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.8862)/15.046;
   input1 = (in1 - 69.2849)/696.296;
   input2 = (in2 - 371.778)/443.566;
   input3 = (in3 - 363.622)/633.937;
   input4 = (in4 - 782.246)/652.363;
   input5 = (in5 - 687.625)/632.029;
   input6 = (in6 - 693.825)/637.327;
   input7 = (in7 - 682.556)/628.929;
   input8 = (in8 - 682.54)/662.326;
   input9 = (in9 - 671.625)/644.8;
   input10 = (in10 - 667.315)/664.609;
   input11 = (in11 - 631.18)/371.115;
   input12 = (in12 - 776.148)/577.698;
   input13 = (in13 - 610.199)/379.659;
   input14 = (in14 - 762.962)/542.623;
   input15 = (in15 - 764.972)/543.708;
   input16 = (in16 - 533.116)/379.804;
   input17 = (in17 - 780.74)/592.51;
   input18 = (in18 - 775.089)/588.824;
   input19 = (in19 - 767.913)/575.559;
   input20 = (in20 - -276.611)/443.264;
   input21 = (in21 - -360.412)/919.033;
   input22 = (in22 - -5.05601)/901.105;
   input23 = (in23 - 27.8716)/523.718;
   switch(index) {
     case 0:
         return neuron0x352a1a0();
     default:
         return 0.;
   }
}

double NNfunction-ss_dLdL::Value(int index, double* input) {
   input0 = (input[0] - 22.8862)/15.046;
   input1 = (input[1] - 69.2849)/696.296;
   input2 = (input[2] - 371.778)/443.566;
   input3 = (input[3] - 363.622)/633.937;
   input4 = (input[4] - 782.246)/652.363;
   input5 = (input[5] - 687.625)/632.029;
   input6 = (input[6] - 693.825)/637.327;
   input7 = (input[7] - 682.556)/628.929;
   input8 = (input[8] - 682.54)/662.326;
   input9 = (input[9] - 671.625)/644.8;
   input10 = (input[10] - 667.315)/664.609;
   input11 = (input[11] - 631.18)/371.115;
   input12 = (input[12] - 776.148)/577.698;
   input13 = (input[13] - 610.199)/379.659;
   input14 = (input[14] - 762.962)/542.623;
   input15 = (input[15] - 764.972)/543.708;
   input16 = (input[16] - 533.116)/379.804;
   input17 = (input[17] - 780.74)/592.51;
   input18 = (input[18] - 775.089)/588.824;
   input19 = (input[19] - 767.913)/575.559;
   input20 = (input[20] - -276.611)/443.264;
   input21 = (input[21] - -360.412)/919.033;
   input22 = (input[22] - -5.05601)/901.105;
   input23 = (input[23] - 27.8716)/523.718;
   switch(index) {
     case 0:
         return neuron0x352a1a0();
     default:
         return 0.;
   }
}

double NNfunction-ss_dLdL::neuron0x34f6360() {
   return input0;
}

double NNfunction-ss_dLdL::neuron0x34f6610() {
   return input1;
}

double NNfunction-ss_dLdL::neuron0x34f6950() {
   return input2;
}

double NNfunction-ss_dLdL::neuron0x34f6c90() {
   return input3;
}

double NNfunction-ss_dLdL::neuron0x34f6fd0() {
   return input4;
}

double NNfunction-ss_dLdL::neuron0x34f7310() {
   return input5;
}

double NNfunction-ss_dLdL::neuron0x34f7650() {
   return input6;
}

double NNfunction-ss_dLdL::neuron0x34f7990() {
   return input7;
}

double NNfunction-ss_dLdL::neuron0x34f7cd0() {
   return input8;
}

double NNfunction-ss_dLdL::neuron0x34f8010() {
   return input9;
}

double NNfunction-ss_dLdL::neuron0x34f8350() {
   return input10;
}

double NNfunction-ss_dLdL::neuron0x34f8690() {
   return input11;
}

double NNfunction-ss_dLdL::neuron0x34f89d0() {
   return input12;
}

double NNfunction-ss_dLdL::neuron0x34f8d10() {
   return input13;
}

double NNfunction-ss_dLdL::neuron0x34f9050() {
   return input14;
}

double NNfunction-ss_dLdL::neuron0x34f9390() {
   return input15;
}

double NNfunction-ss_dLdL::neuron0x34f96d0() {
   return input16;
}

double NNfunction-ss_dLdL::neuron0x34f9c30() {
   return input17;
}

double NNfunction-ss_dLdL::neuron0x34f9e50() {
   return input18;
}

double NNfunction-ss_dLdL::neuron0x34fa190() {
   return input19;
}

double NNfunction-ss_dLdL::neuron0x34fa4d0() {
   return input20;
}

double NNfunction-ss_dLdL::neuron0x34fa810() {
   return input21;
}

double NNfunction-ss_dLdL::neuron0x34fab50() {
   return input22;
}

double NNfunction-ss_dLdL::neuron0x34fae90() {
   return input23;
}

double NNfunction-ss_dLdL::input0x34fb300() {
   double input = 0.768685;
   input += synapse0x34f62e0();
   input += synapse0x34f6320();
   input += synapse0x34fb5b0();
   input += synapse0x34fb5f0();
   input += synapse0x34fb630();
   input += synapse0x34fb670();
   input += synapse0x34fb6b0();
   input += synapse0x34fb6f0();
   input += synapse0x34fb730();
   input += synapse0x34fb770();
   input += synapse0x34fb7b0();
   input += synapse0x34fb7f0();
   input += synapse0x34fb830();
   input += synapse0x34fb870();
   input += synapse0x34fb8b0();
   input += synapse0x34fb8f0();
   input += synapse0x34f6250();
   input += synapse0x34f6290();
   input += synapse0x32b1420();
   input += synapse0x32b1460();
   input += synapse0x34fbb50();
   input += synapse0x34fbb90();
   input += synapse0x34fbbd0();
   input += synapse0x34fbc10();
   return input;
}

double NNfunction-ss_dLdL::neuron0x34fb300() {
   double input = input0x34fb300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x34fbc50() {
   double input = 0.438138;
   input += synapse0x34fbf90();
   input += synapse0x34fbfd0();
   input += synapse0x34fc010();
   input += synapse0x34fc050();
   input += synapse0x34fc090();
   input += synapse0x34fc0d0();
   input += synapse0x34fc110();
   input += synapse0x34fc150();
   input += synapse0x34fc190();
   input += synapse0x34fba40();
   input += synapse0x34fba80();
   input += synapse0x34fbac0();
   input += synapse0x34fbb00();
   input += synapse0x34fc3e0();
   input += synapse0x34fc420();
   input += synapse0x34fc460();
   input += synapse0x34fbde0();
   input += synapse0x34fbe20();
   input += synapse0x34fc5b0();
   input += synapse0x34fc5f0();
   input += synapse0x34fc630();
   input += synapse0x34fc670();
   input += synapse0x34fc6b0();
   input += synapse0x34fc6f0();
   return input;
}

double NNfunction-ss_dLdL::neuron0x34fbc50() {
   double input = input0x34fbc50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x34fc730() {
   double input = -0.219174;
   input += synapse0x34fca70();
   input += synapse0x34fcab0();
   input += synapse0x34fcaf0();
   input += synapse0x34fcb30();
   input += synapse0x34fcb70();
   input += synapse0x34fcbb0();
   input += synapse0x34fcbf0();
   input += synapse0x34fcc30();
   input += synapse0x34fcc70();
   input += synapse0x34fccb0();
   input += synapse0x34fccf0();
   input += synapse0x34fcd30();
   input += synapse0x34fcd70();
   input += synapse0x34fcdb0();
   input += synapse0x34fcdf0();
   input += synapse0x34fce30();
   input += synapse0x34fc8c0();
   input += synapse0x34fc900();
   input += synapse0x34e53d0();
   input += synapse0x32bf320();
   input += synapse0x32bf360();
   input += synapse0x33da870();
   input += synapse0x33da8b0();
   input += synapse0x34f60c0();
   return input;
}

double NNfunction-ss_dLdL::neuron0x34fc730() {
   double input = input0x34fc730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x32bfa80() {
   double input = -0.607758;
   input += synapse0x32bfc10();
   input += synapse0x34fc2f0();
   input += synapse0x34fc330();
   input += synapse0x34fc370();
   input += synapse0x34fcf80();
   input += synapse0x34fcfc0();
   input += synapse0x34fd000();
   input += synapse0x34fd040();
   input += synapse0x34fd080();
   input += synapse0x34fd0c0();
   input += synapse0x34fd100();
   input += synapse0x34fd140();
   input += synapse0x34fd180();
   input += synapse0x34fd1c0();
   input += synapse0x34fd200();
   input += synapse0x34fd240();
   input += synapse0x34f6100();
   input += synapse0x34f6140();
   input += synapse0x34f6180();
   input += synapse0x34fd390();
   input += synapse0x34fd3d0();
   input += synapse0x34fd410();
   input += synapse0x34fd450();
   input += synapse0x34fd490();
   return input;
}

double NNfunction-ss_dLdL::neuron0x32bfa80() {
   double input = input0x32bfa80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x34fd4d0() {
   double input = 0.0709072;
   input += synapse0x34fd810();
   input += synapse0x34fd850();
   input += synapse0x34fd890();
   input += synapse0x34fd8d0();
   input += synapse0x34fd910();
   input += synapse0x34fd950();
   input += synapse0x34fd990();
   input += synapse0x34fd9d0();
   input += synapse0x34fda10();
   input += synapse0x34fda50();
   input += synapse0x34fda90();
   input += synapse0x34fdad0();
   input += synapse0x34fdb10();
   input += synapse0x34fdb50();
   input += synapse0x34fdb90();
   input += synapse0x34fdbd0();
   input += synapse0x34fd660();
   input += synapse0x34fd6a0();
   input += synapse0x34fdd20();
   input += synapse0x34fdd60();
   input += synapse0x34fdda0();
   input += synapse0x34fdde0();
   input += synapse0x34fde20();
   input += synapse0x34fde60();
   return input;
}

double NNfunction-ss_dLdL::neuron0x34fd4d0() {
   double input = input0x34fd4d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x34fdea0() {
   double input = 0.519824;
   input += synapse0x34fe1e0();
   input += synapse0x34fe220();
   input += synapse0x34fe260();
   input += synapse0x34fe2a0();
   input += synapse0x34fe2e0();
   input += synapse0x34fe320();
   input += synapse0x34fe360();
   input += synapse0x34fe3a0();
   input += synapse0x34fe3e0();
   input += synapse0x32bf670();
   input += synapse0x32bf6b0();
   input += synapse0x32bf6f0();
   input += synapse0x32bf730();
   input += synapse0x32bf770();
   input += synapse0x32bf7b0();
   input += synapse0x32bf7f0();
   input += synapse0x34fe030();
   input += synapse0x34fe070();
   input += synapse0x32bf940();
   input += synapse0x32bf980();
   input += synapse0x32bf9c0();
   input += synapse0x32bfa00();
   input += synapse0x32bfa40();
   input += synapse0x34fec30();
   return input;
}

double NNfunction-ss_dLdL::neuron0x34fdea0() {
   double input = input0x34fdea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x34fec70() {
   double input = -3.37858;
   input += synapse0x34fefb0();
   input += synapse0x34feff0();
   input += synapse0x34ff030();
   input += synapse0x34ff070();
   input += synapse0x34ff0b0();
   input += synapse0x34ff0f0();
   input += synapse0x34ff130();
   input += synapse0x34ff170();
   input += synapse0x34ff1b0();
   input += synapse0x34ff1f0();
   input += synapse0x34ff230();
   input += synapse0x34ff270();
   input += synapse0x34ff2b0();
   input += synapse0x34ff2f0();
   input += synapse0x34ff330();
   input += synapse0x34ff370();
   input += synapse0x34fee00();
   input += synapse0x34fee40();
   input += synapse0x34ff4c0();
   input += synapse0x34ff500();
   input += synapse0x34ff540();
   input += synapse0x34ff580();
   input += synapse0x34ff5c0();
   input += synapse0x34ff600();
   return input;
}

double NNfunction-ss_dLdL::neuron0x34fec70() {
   double input = input0x34fec70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x34ff640() {
   double input = 3.29001;
   input += synapse0x34ff980();
   input += synapse0x34ff9c0();
   input += synapse0x34ffa00();
   input += synapse0x34ffa40();
   input += synapse0x34ffa80();
   input += synapse0x34ffac0();
   input += synapse0x34ffb00();
   input += synapse0x34ffb40();
   input += synapse0x34ffb80();
   input += synapse0x34ffbc0();
   input += synapse0x34ffc00();
   input += synapse0x34ffc40();
   input += synapse0x34ffc80();
   input += synapse0x34ffcc0();
   input += synapse0x34ffd00();
   input += synapse0x34ffd40();
   input += synapse0x34ff7d0();
   input += synapse0x34ff810();
   input += synapse0x34ffe90();
   input += synapse0x34ffed0();
   input += synapse0x34fff10();
   input += synapse0x34fff50();
   input += synapse0x34fff90();
   input += synapse0x34fffd0();
   return input;
}

double NNfunction-ss_dLdL::neuron0x34ff640() {
   double input = input0x34ff640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x3500010() {
   double input = 0.416402;
   input += synapse0x34f9b20();
   input += synapse0x34f9b60();
   input += synapse0x34f9ba0();
   input += synapse0x34f9be0();
   input += synapse0x3500560();
   input += synapse0x35005a0();
   input += synapse0x35005e0();
   input += synapse0x3500620();
   input += synapse0x3500660();
   input += synapse0x35006a0();
   input += synapse0x35006e0();
   input += synapse0x3500720();
   input += synapse0x3500760();
   input += synapse0x35007a0();
   input += synapse0x35007e0();
   input += synapse0x3500820();
   input += synapse0x35001a0();
   input += synapse0x35001e0();
   input += synapse0x3500970();
   input += synapse0x35009b0();
   input += synapse0x35009f0();
   input += synapse0x3500a30();
   input += synapse0x3500a70();
   input += synapse0x3500ab0();
   return input;
}

double NNfunction-ss_dLdL::neuron0x3500010() {
   double input = input0x3500010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x3500af0() {
   double input = 0.636112;
   input += synapse0x3500e30();
   input += synapse0x3500e70();
   input += synapse0x3500eb0();
   input += synapse0x3500ef0();
   input += synapse0x3500f30();
   input += synapse0x3500f70();
   input += synapse0x3500fb0();
   input += synapse0x3500ff0();
   input += synapse0x3501030();
   input += synapse0x3501070();
   input += synapse0x35010b0();
   input += synapse0x35010f0();
   input += synapse0x3501130();
   input += synapse0x3501170();
   input += synapse0x35011b0();
   input += synapse0x35011f0();
   input += synapse0x3500c80();
   input += synapse0x3500cc0();
   input += synapse0x3501340();
   input += synapse0x3501380();
   input += synapse0x35013c0();
   input += synapse0x3501400();
   input += synapse0x3501440();
   input += synapse0x3501480();
   return input;
}

double NNfunction-ss_dLdL::neuron0x3500af0() {
   double input = input0x3500af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x35014c0() {
   double input = 0.412172;
   input += synapse0x3501800();
   input += synapse0x3501840();
   input += synapse0x3501880();
   input += synapse0x35018c0();
   input += synapse0x3501900();
   input += synapse0x3501940();
   input += synapse0x3501980();
   input += synapse0x35019c0();
   input += synapse0x3501a00();
   input += synapse0x3501a40();
   input += synapse0x3501a80();
   input += synapse0x3501ac0();
   input += synapse0x3501b00();
   input += synapse0x3501b40();
   input += synapse0x3501b80();
   input += synapse0x3501bc0();
   input += synapse0x3501650();
   input += synapse0x3501690();
   input += synapse0x34fe420();
   input += synapse0x34fe460();
   input += synapse0x34fe4a0();
   input += synapse0x34fe4e0();
   input += synapse0x34fe520();
   input += synapse0x34fe560();
   return input;
}

double NNfunction-ss_dLdL::neuron0x35014c0() {
   double input = input0x35014c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x34fe5a0() {
   double input = 1.39252;
   input += synapse0x34fe8e0();
   input += synapse0x34fe920();
   input += synapse0x34fe960();
   input += synapse0x34fe9a0();
   input += synapse0x34fe9e0();
   input += synapse0x34fea20();
   input += synapse0x34fea60();
   input += synapse0x34feaa0();
   input += synapse0x34feae0();
   input += synapse0x34feb20();
   input += synapse0x34feb60();
   input += synapse0x34feba0();
   input += synapse0x34febe0();
   input += synapse0x3502d20();
   input += synapse0x3502d60();
   input += synapse0x3502da0();
   input += synapse0x34fe730();
   input += synapse0x34fe770();
   input += synapse0x3502ef0();
   input += synapse0x3502f30();
   input += synapse0x3502f70();
   input += synapse0x3502fb0();
   input += synapse0x3502ff0();
   input += synapse0x3503030();
   return input;
}

double NNfunction-ss_dLdL::neuron0x34fe5a0() {
   double input = input0x34fe5a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x3503070() {
   double input = 1.00982;
   input += synapse0x35033b0();
   input += synapse0x35033f0();
   input += synapse0x3503430();
   input += synapse0x3503470();
   input += synapse0x35034b0();
   input += synapse0x35034f0();
   input += synapse0x3503530();
   input += synapse0x3503570();
   input += synapse0x35035b0();
   input += synapse0x35035f0();
   input += synapse0x3503630();
   input += synapse0x3503670();
   input += synapse0x35036b0();
   input += synapse0x35036f0();
   input += synapse0x3503730();
   input += synapse0x3503770();
   input += synapse0x3503200();
   input += synapse0x3503240();
   input += synapse0x35038c0();
   input += synapse0x3503900();
   input += synapse0x3503940();
   input += synapse0x3503980();
   input += synapse0x35039c0();
   input += synapse0x3503a00();
   return input;
}

double NNfunction-ss_dLdL::neuron0x3503070() {
   double input = input0x3503070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x3503a40() {
   double input = -0.75576;
   input += synapse0x3503d80();
   input += synapse0x3503dc0();
   input += synapse0x3503e00();
   input += synapse0x3503e40();
   input += synapse0x3503e80();
   input += synapse0x3503ec0();
   input += synapse0x3503f00();
   input += synapse0x3503f40();
   input += synapse0x3503f80();
   input += synapse0x3503fc0();
   input += synapse0x3504000();
   input += synapse0x3504040();
   input += synapse0x3504080();
   input += synapse0x35040c0();
   input += synapse0x3504100();
   input += synapse0x3504140();
   input += synapse0x3503bd0();
   input += synapse0x3503c10();
   input += synapse0x3504290();
   input += synapse0x35042d0();
   input += synapse0x3504310();
   input += synapse0x3504350();
   input += synapse0x3504390();
   input += synapse0x35043d0();
   return input;
}

double NNfunction-ss_dLdL::neuron0x3503a40() {
   double input = input0x3503a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x3504410() {
   double input = -0.32137;
   input += synapse0x3504750();
   input += synapse0x3504790();
   input += synapse0x35047d0();
   input += synapse0x3504810();
   input += synapse0x3504850();
   input += synapse0x3504890();
   input += synapse0x35048d0();
   input += synapse0x3504910();
   input += synapse0x3504950();
   input += synapse0x3504990();
   input += synapse0x35049d0();
   input += synapse0x3504a10();
   input += synapse0x3504a50();
   input += synapse0x3504a90();
   input += synapse0x3504ad0();
   input += synapse0x3504b10();
   input += synapse0x35045a0();
   input += synapse0x35045e0();
   input += synapse0x3504c60();
   input += synapse0x3504ca0();
   input += synapse0x3504ce0();
   input += synapse0x3504d20();
   input += synapse0x3504d60();
   input += synapse0x3504da0();
   return input;
}

double NNfunction-ss_dLdL::neuron0x3504410() {
   double input = input0x3504410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x3504de0() {
   double input = 0.446839;
   input += synapse0x3505120();
   input += synapse0x34f64f0();
   input += synapse0x34f6530();
   input += synapse0x34f6830();
   input += synapse0x34f6870();
   input += synapse0x34f6b70();
   input += synapse0x34f6bb0();
   input += synapse0x34f6eb0();
   input += synapse0x34f6ef0();
   input += synapse0x34f71f0();
   input += synapse0x34f7230();
   input += synapse0x34f7530();
   input += synapse0x34f7570();
   input += synapse0x34f7870();
   input += synapse0x34f78b0();
   input += synapse0x34f7bb0();
   input += synapse0x34f7bf0();
   input += synapse0x34f7ef0();
   input += synapse0x34f7f30();
   input += synapse0x34f8230();
   input += synapse0x34f8270();
   input += synapse0x34f8570();
   input += synapse0x34f85b0();
   input += synapse0x34f88b0();
   return input;
}

double NNfunction-ss_dLdL::neuron0x3504de0() {
   double input = input0x3504de0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x3506bf0() {
   double input = -0.752702;
   input += synapse0x34f88f0();
   input += synapse0x34f95b0();
   input += synapse0x34f95f0();
   input += synapse0x3504f70();
   input += synapse0x3504fb0();
   input += synapse0x34f98f0();
   input += synapse0x34f9930();
   input += synapse0x32b1300();
   input += synapse0x32b1340();
   input += synapse0x34fa070();
   input += synapse0x34fa0b0();
   input += synapse0x34fa3b0();
   input += synapse0x34fa3f0();
   input += synapse0x34fa6f0();
   input += synapse0x34fa730();
   input += synapse0x34faa30();
   input += synapse0x34faa70();
   input += synapse0x34fad70();
   input += synapse0x34fadb0();
   input += synapse0x34fb0b0();
   input += synapse0x34fb0f0();
   input += synapse0x34f8bf0();
   input += synapse0x34f8c30();
   input += synapse0x3506e90();
   return input;
}

double NNfunction-ss_dLdL::neuron0x3506bf0() {
   double input = input0x3506bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x3506ed0() {
   double input = 0.203211;
   input += synapse0x3507210();
   input += synapse0x3507250();
   input += synapse0x3507290();
   input += synapse0x35072d0();
   input += synapse0x3507310();
   input += synapse0x3507350();
   input += synapse0x3507390();
   input += synapse0x35073d0();
   input += synapse0x3507410();
   input += synapse0x3507450();
   input += synapse0x3507490();
   input += synapse0x35074d0();
   input += synapse0x3507510();
   input += synapse0x3507550();
   input += synapse0x3507590();
   input += synapse0x35075d0();
   input += synapse0x3507060();
   input += synapse0x35070a0();
   input += synapse0x3507720();
   input += synapse0x3507760();
   input += synapse0x35077a0();
   input += synapse0x35077e0();
   input += synapse0x3507820();
   input += synapse0x3507860();
   return input;
}

double NNfunction-ss_dLdL::neuron0x3506ed0() {
   double input = input0x3506ed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x35078a0() {
   double input = -2.53511;
   input += synapse0x3507be0();
   input += synapse0x3507c20();
   input += synapse0x3507c60();
   input += synapse0x3507ca0();
   input += synapse0x3507ce0();
   input += synapse0x3507d20();
   input += synapse0x3507d60();
   input += synapse0x3507da0();
   input += synapse0x3507de0();
   input += synapse0x3507e20();
   input += synapse0x3507e60();
   input += synapse0x3507ea0();
   input += synapse0x3507ee0();
   input += synapse0x3507f20();
   input += synapse0x3507f60();
   input += synapse0x3507fa0();
   input += synapse0x3507a30();
   input += synapse0x3507a70();
   input += synapse0x35080f0();
   input += synapse0x3508130();
   input += synapse0x3508170();
   input += synapse0x35081b0();
   input += synapse0x35081f0();
   input += synapse0x3508230();
   return input;
}

double NNfunction-ss_dLdL::neuron0x35078a0() {
   double input = input0x35078a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x3508270() {
   double input = -0.611711;
   input += synapse0x35085b0();
   input += synapse0x35085f0();
   input += synapse0x3508630();
   input += synapse0x3508670();
   input += synapse0x35086b0();
   input += synapse0x35086f0();
   input += synapse0x3508730();
   input += synapse0x3508770();
   input += synapse0x35087b0();
   input += synapse0x35087f0();
   input += synapse0x3508830();
   input += synapse0x3508870();
   input += synapse0x35088b0();
   input += synapse0x35088f0();
   input += synapse0x3508930();
   input += synapse0x3508970();
   input += synapse0x3508400();
   input += synapse0x3508440();
   input += synapse0x3508ac0();
   input += synapse0x3508b00();
   input += synapse0x3508b40();
   input += synapse0x3508b80();
   input += synapse0x3508bc0();
   input += synapse0x3508c00();
   return input;
}

double NNfunction-ss_dLdL::neuron0x3508270() {
   double input = input0x3508270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x3508c40() {
   double input = 2.25825;
   input += synapse0x3508f80();
   input += synapse0x3508fc0();
   input += synapse0x3509000();
   input += synapse0x3509040();
   input += synapse0x3509080();
   input += synapse0x35090c0();
   input += synapse0x3509100();
   input += synapse0x3509140();
   input += synapse0x3509180();
   input += synapse0x35091c0();
   input += synapse0x3509200();
   input += synapse0x3509240();
   input += synapse0x3509280();
   input += synapse0x35092c0();
   input += synapse0x3509300();
   input += synapse0x3509340();
   input += synapse0x3508dd0();
   input += synapse0x3508e10();
   input += synapse0x3509490();
   input += synapse0x35094d0();
   input += synapse0x3509510();
   input += synapse0x3509550();
   input += synapse0x3509590();
   input += synapse0x35095d0();
   return input;
}

double NNfunction-ss_dLdL::neuron0x3508c40() {
   double input = input0x3508c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x3509610() {
   double input = -0.545605;
   input += synapse0x3509950();
   input += synapse0x3509990();
   input += synapse0x35099d0();
   input += synapse0x3509a10();
   input += synapse0x3509a50();
   input += synapse0x3509a90();
   input += synapse0x3509ad0();
   input += synapse0x3509b10();
   input += synapse0x3509b50();
   input += synapse0x3501d10();
   input += synapse0x3501d50();
   input += synapse0x3501d90();
   input += synapse0x3501dd0();
   input += synapse0x3501e10();
   input += synapse0x3501e50();
   input += synapse0x3501e90();
   input += synapse0x35097a0();
   input += synapse0x35097e0();
   input += synapse0x3501fe0();
   input += synapse0x3502020();
   input += synapse0x3502060();
   input += synapse0x35020a0();
   input += synapse0x35020e0();
   input += synapse0x3502120();
   return input;
}

double NNfunction-ss_dLdL::neuron0x3509610() {
   double input = input0x3509610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x3502160() {
   double input = 1.80505;
   input += synapse0x35024a0();
   input += synapse0x35024e0();
   input += synapse0x3502520();
   input += synapse0x3502560();
   input += synapse0x35025a0();
   input += synapse0x35025e0();
   input += synapse0x3502620();
   input += synapse0x3502660();
   input += synapse0x35026a0();
   input += synapse0x35026e0();
   input += synapse0x3502720();
   input += synapse0x3502760();
   input += synapse0x35027a0();
   input += synapse0x35027e0();
   input += synapse0x3502820();
   input += synapse0x3502860();
   input += synapse0x35022f0();
   input += synapse0x3502330();
   input += synapse0x35029b0();
   input += synapse0x35029f0();
   input += synapse0x3502a30();
   input += synapse0x3502a70();
   input += synapse0x3502ab0();
   input += synapse0x3502af0();
   return input;
}

double NNfunction-ss_dLdL::neuron0x3502160() {
   double input = input0x3502160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x3502b30() {
   double input = 1.5541;
   input += synapse0x3502cc0();
   input += synapse0x350bd50();
   input += synapse0x350bd90();
   input += synapse0x350bdd0();
   input += synapse0x350be10();
   input += synapse0x350be50();
   input += synapse0x350be90();
   input += synapse0x350bed0();
   input += synapse0x350bf10();
   input += synapse0x350bf50();
   input += synapse0x350bf90();
   input += synapse0x350bfd0();
   input += synapse0x350c010();
   input += synapse0x350c050();
   input += synapse0x350c090();
   input += synapse0x350c0d0();
   input += synapse0x350bba0();
   input += synapse0x350bbe0();
   input += synapse0x350c220();
   input += synapse0x350c260();
   input += synapse0x350c2a0();
   input += synapse0x350c2e0();
   input += synapse0x350c320();
   input += synapse0x350c360();
   return input;
}

double NNfunction-ss_dLdL::neuron0x3502b30() {
   double input = input0x3502b30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x350c3a0() {
   double input = 0.347685;
   input += synapse0x350c6e0();
   input += synapse0x350c720();
   input += synapse0x350c760();
   input += synapse0x350c7a0();
   input += synapse0x350c7e0();
   input += synapse0x350c820();
   input += synapse0x350c860();
   input += synapse0x350c8a0();
   input += synapse0x350c8e0();
   input += synapse0x350c920();
   input += synapse0x350c960();
   input += synapse0x350c9a0();
   input += synapse0x350c9e0();
   input += synapse0x350ca20();
   input += synapse0x350ca60();
   input += synapse0x350caa0();
   input += synapse0x350c530();
   input += synapse0x350c570();
   input += synapse0x350cbf0();
   input += synapse0x350cc30();
   input += synapse0x350cc70();
   input += synapse0x350ccb0();
   input += synapse0x350ccf0();
   input += synapse0x350cd30();
   return input;
}

double NNfunction-ss_dLdL::neuron0x350c3a0() {
   double input = input0x350c3a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x350cd70() {
   double input = -0.394123;
   input += synapse0x350d0b0();
   input += synapse0x350d0f0();
   input += synapse0x350d130();
   input += synapse0x350d170();
   input += synapse0x350d1b0();
   input += synapse0x350d1f0();
   input += synapse0x350d230();
   input += synapse0x350d270();
   input += synapse0x350d2b0();
   input += synapse0x350d2f0();
   input += synapse0x350d330();
   input += synapse0x350d370();
   input += synapse0x350d3b0();
   input += synapse0x350d3f0();
   input += synapse0x350d430();
   input += synapse0x350d470();
   input += synapse0x350cf00();
   input += synapse0x350cf40();
   input += synapse0x350d5c0();
   input += synapse0x350d600();
   input += synapse0x350d640();
   input += synapse0x350d680();
   input += synapse0x350d6c0();
   input += synapse0x350d700();
   return input;
}

double NNfunction-ss_dLdL::neuron0x350cd70() {
   double input = input0x350cd70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x350d740() {
   double input = -3.98179;
   input += synapse0x350da80();
   input += synapse0x350dac0();
   input += synapse0x350db00();
   input += synapse0x350db40();
   input += synapse0x350db80();
   input += synapse0x350dbc0();
   input += synapse0x350dc00();
   input += synapse0x350dc40();
   input += synapse0x350dc80();
   input += synapse0x350dcc0();
   input += synapse0x350dd00();
   input += synapse0x350dd40();
   input += synapse0x350dd80();
   input += synapse0x350ddc0();
   input += synapse0x350de00();
   input += synapse0x350de40();
   input += synapse0x350d8d0();
   input += synapse0x350d910();
   input += synapse0x350df90();
   input += synapse0x350dfd0();
   input += synapse0x350e010();
   input += synapse0x350e050();
   input += synapse0x350e090();
   input += synapse0x350e0d0();
   return input;
}

double NNfunction-ss_dLdL::neuron0x350d740() {
   double input = input0x350d740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x350e110() {
   double input = -0.302876;
   input += synapse0x350e450();
   input += synapse0x350e490();
   input += synapse0x350e4d0();
   input += synapse0x350e510();
   input += synapse0x350e550();
   input += synapse0x350e590();
   input += synapse0x350e5d0();
   input += synapse0x350e610();
   input += synapse0x350e650();
   input += synapse0x350e690();
   input += synapse0x350e6d0();
   input += synapse0x350e710();
   input += synapse0x350e750();
   input += synapse0x350e790();
   input += synapse0x350e7d0();
   input += synapse0x350e810();
   input += synapse0x350e2a0();
   input += synapse0x350e2e0();
   input += synapse0x350e960();
   input += synapse0x350e9a0();
   input += synapse0x350e9e0();
   input += synapse0x350ea20();
   input += synapse0x350ea60();
   input += synapse0x350eaa0();
   return input;
}

double NNfunction-ss_dLdL::neuron0x350e110() {
   double input = input0x350e110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x350eae0() {
   double input = 0.964858;
   input += synapse0x350ee20();
   input += synapse0x350ee60();
   input += synapse0x350eea0();
   input += synapse0x350eee0();
   input += synapse0x350ef20();
   input += synapse0x350ef60();
   input += synapse0x350efa0();
   input += synapse0x350efe0();
   input += synapse0x350f020();
   input += synapse0x350f060();
   input += synapse0x350f0a0();
   input += synapse0x350f0e0();
   input += synapse0x350f120();
   input += synapse0x350f160();
   input += synapse0x350f1a0();
   input += synapse0x350f1e0();
   input += synapse0x350ec70();
   input += synapse0x350ecb0();
   input += synapse0x350f330();
   input += synapse0x350f370();
   input += synapse0x350f3b0();
   input += synapse0x350f3f0();
   input += synapse0x350f430();
   input += synapse0x350f470();
   return input;
}

double NNfunction-ss_dLdL::neuron0x350eae0() {
   double input = input0x350eae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x350f4b0() {
   double input = -1.60015;
   input += synapse0x350f7f0();
   input += synapse0x350f830();
   input += synapse0x350f870();
   input += synapse0x350f8b0();
   input += synapse0x350f8f0();
   input += synapse0x350f930();
   input += synapse0x350f970();
   input += synapse0x350f9b0();
   input += synapse0x350f9f0();
   input += synapse0x350fa30();
   input += synapse0x350fa70();
   input += synapse0x350fab0();
   input += synapse0x350faf0();
   input += synapse0x350fb30();
   input += synapse0x350fb70();
   input += synapse0x350fbb0();
   input += synapse0x350f640();
   input += synapse0x350f680();
   input += synapse0x350fd00();
   input += synapse0x350fd40();
   input += synapse0x350fd80();
   input += synapse0x350fdc0();
   input += synapse0x350fe00();
   input += synapse0x350fe40();
   return input;
}

double NNfunction-ss_dLdL::neuron0x350f4b0() {
   double input = input0x350f4b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x350fe80() {
   double input = 0.759588;
   input += synapse0x35101c0();
   input += synapse0x3510200();
   input += synapse0x3510240();
   input += synapse0x3510280();
   input += synapse0x35102c0();
   input += synapse0x3510300();
   input += synapse0x3510340();
   input += synapse0x3510380();
   input += synapse0x35103c0();
   input += synapse0x3510400();
   input += synapse0x3510440();
   input += synapse0x3510480();
   input += synapse0x35104c0();
   input += synapse0x3510500();
   input += synapse0x3510540();
   input += synapse0x3510580();
   input += synapse0x3510010();
   input += synapse0x3510050();
   input += synapse0x35106d0();
   input += synapse0x3510710();
   input += synapse0x3510750();
   input += synapse0x3510790();
   input += synapse0x35107d0();
   input += synapse0x3510810();
   return input;
}

double NNfunction-ss_dLdL::neuron0x350fe80() {
   double input = input0x350fe80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x3510850() {
   double input = 0.578744;
   input += synapse0x3510b90();
   input += synapse0x3505160();
   input += synapse0x35051a0();
   input += synapse0x35051e0();
   input += synapse0x3505430();
   input += synapse0x3505470();
   input += synapse0x35054b0();
   input += synapse0x3505700();
   input += synapse0x3505740();
   input += synapse0x3505990();
   input += synapse0x35059d0();
   input += synapse0x3505a10();
   input += synapse0x3505c60();
   input += synapse0x3505ca0();
   input += synapse0x3505ef0();
   input += synapse0x3505f30();
   input += synapse0x35109e0();
   input += synapse0x3510a20();
   input += synapse0x3506080();
   input += synapse0x3506590();
   input += synapse0x35065d0();
   input += synapse0x3506610();
   input += synapse0x3506860();
   input += synapse0x35068a0();
   return input;
}

double NNfunction-ss_dLdL::neuron0x3510850() {
   double input = input0x3510850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x35068e0() {
   double input = 0.459842;
   input += synapse0x3506150();
   input += synapse0x3506190();
   input += synapse0x35061d0();
   input += synapse0x3506210();
   input += synapse0x3506b90();
   input += synapse0x3512ee0();
   input += synapse0x3512f20();
   input += synapse0x3512f60();
   input += synapse0x3512fa0();
   input += synapse0x3512fe0();
   input += synapse0x3513020();
   input += synapse0x3513060();
   input += synapse0x35130a0();
   input += synapse0x35130e0();
   input += synapse0x3513120();
   input += synapse0x3513160();
   input += synapse0x3506a70();
   input += synapse0x3506ab0();
   input += synapse0x35132b0();
   input += synapse0x35132f0();
   input += synapse0x3513330();
   input += synapse0x3513370();
   input += synapse0x35133b0();
   input += synapse0x35133f0();
   return input;
}

double NNfunction-ss_dLdL::neuron0x35068e0() {
   double input = input0x35068e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x3513430() {
   double input = 0.872155;
   input += synapse0x3513770();
   input += synapse0x35137b0();
   input += synapse0x35137f0();
   input += synapse0x3513830();
   input += synapse0x3513870();
   input += synapse0x35138b0();
   input += synapse0x35138f0();
   input += synapse0x3513930();
   input += synapse0x3513970();
   input += synapse0x35139b0();
   input += synapse0x35139f0();
   input += synapse0x3513a30();
   input += synapse0x3513a70();
   input += synapse0x3513ab0();
   input += synapse0x3513af0();
   input += synapse0x3513b30();
   input += synapse0x35135c0();
   input += synapse0x3513600();
   input += synapse0x3513c80();
   input += synapse0x3513cc0();
   input += synapse0x3513d00();
   input += synapse0x3513d40();
   input += synapse0x3513d80();
   input += synapse0x3513dc0();
   return input;
}

double NNfunction-ss_dLdL::neuron0x3513430() {
   double input = input0x3513430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x3513e00() {
   double input = 0.538549;
   input += synapse0x3514140();
   input += synapse0x3514180();
   input += synapse0x35141c0();
   input += synapse0x3514200();
   input += synapse0x3514240();
   input += synapse0x3514280();
   input += synapse0x35142c0();
   input += synapse0x3514300();
   input += synapse0x3514340();
   input += synapse0x3514380();
   input += synapse0x35143c0();
   input += synapse0x3514400();
   input += synapse0x3514440();
   input += synapse0x3514480();
   input += synapse0x35144c0();
   input += synapse0x3514500();
   input += synapse0x3513f90();
   input += synapse0x3513fd0();
   input += synapse0x3514650();
   input += synapse0x3514690();
   input += synapse0x35146d0();
   input += synapse0x3514710();
   input += synapse0x3514750();
   input += synapse0x3514790();
   return input;
}

double NNfunction-ss_dLdL::neuron0x3513e00() {
   double input = input0x3513e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x35147d0() {
   double input = 0.696677;
   input += synapse0x3514b10();
   input += synapse0x3514b50();
   input += synapse0x3514b90();
   input += synapse0x3514bd0();
   input += synapse0x3514c10();
   input += synapse0x3514c50();
   input += synapse0x3514c90();
   input += synapse0x3514cd0();
   input += synapse0x3514d10();
   input += synapse0x3514d50();
   input += synapse0x3514d90();
   input += synapse0x3514dd0();
   input += synapse0x3514e10();
   input += synapse0x3514e50();
   input += synapse0x3514e90();
   input += synapse0x3514ed0();
   input += synapse0x3514960();
   input += synapse0x35149a0();
   input += synapse0x3515020();
   input += synapse0x3515060();
   input += synapse0x35150a0();
   input += synapse0x35150e0();
   input += synapse0x3515120();
   input += synapse0x3515160();
   return input;
}

double NNfunction-ss_dLdL::neuron0x35147d0() {
   double input = input0x35147d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x35151a0() {
   double input = -1.40901;
   input += synapse0x35154e0();
   input += synapse0x3515520();
   input += synapse0x3515560();
   input += synapse0x35155a0();
   input += synapse0x35155e0();
   input += synapse0x3515620();
   input += synapse0x3515660();
   input += synapse0x35156a0();
   input += synapse0x35156e0();
   input += synapse0x3515720();
   input += synapse0x3515760();
   input += synapse0x35157a0();
   input += synapse0x35157e0();
   input += synapse0x3515820();
   input += synapse0x3515860();
   input += synapse0x35158a0();
   input += synapse0x3515330();
   input += synapse0x3515370();
   input += synapse0x35159f0();
   input += synapse0x3515a30();
   input += synapse0x3515a70();
   input += synapse0x3515ab0();
   input += synapse0x3515af0();
   input += synapse0x3515b30();
   return input;
}

double NNfunction-ss_dLdL::neuron0x35151a0() {
   double input = input0x35151a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x3515b70() {
   double input = 0.246188;
   input += synapse0x3515eb0();
   input += synapse0x3515ef0();
   input += synapse0x3515f30();
   input += synapse0x3515f70();
   input += synapse0x3515fb0();
   input += synapse0x3515ff0();
   input += synapse0x3516030();
   input += synapse0x3516070();
   input += synapse0x35160b0();
   input += synapse0x35160f0();
   input += synapse0x3516130();
   input += synapse0x3516170();
   input += synapse0x35161b0();
   input += synapse0x35161f0();
   input += synapse0x3516230();
   input += synapse0x3516270();
   input += synapse0x3515d00();
   input += synapse0x3515d40();
   input += synapse0x35163c0();
   input += synapse0x3516400();
   input += synapse0x3516440();
   input += synapse0x3516480();
   input += synapse0x35164c0();
   input += synapse0x3516500();
   return input;
}

double NNfunction-ss_dLdL::neuron0x3515b70() {
   double input = input0x3515b70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x3516540() {
   double input = 0.979095;
   input += synapse0x3516880();
   input += synapse0x35168c0();
   input += synapse0x3516900();
   input += synapse0x3516940();
   input += synapse0x3516980();
   input += synapse0x35169c0();
   input += synapse0x3516a00();
   input += synapse0x3516a40();
   input += synapse0x3516a80();
   input += synapse0x3516ac0();
   input += synapse0x3516b00();
   input += synapse0x3516b40();
   input += synapse0x3516b80();
   input += synapse0x3516bc0();
   input += synapse0x3516c00();
   input += synapse0x3516c40();
   input += synapse0x35166d0();
   input += synapse0x3516710();
   input += synapse0x3516d90();
   input += synapse0x3516dd0();
   input += synapse0x3516e10();
   input += synapse0x3516e50();
   input += synapse0x3516e90();
   input += synapse0x3516ed0();
   return input;
}

double NNfunction-ss_dLdL::neuron0x3516540() {
   double input = input0x3516540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x3516f10() {
   double input = 0.235336;
   input += synapse0x3517250();
   input += synapse0x3517290();
   input += synapse0x35172d0();
   input += synapse0x3517310();
   input += synapse0x3517350();
   input += synapse0x3517390();
   input += synapse0x35173d0();
   input += synapse0x3517410();
   input += synapse0x3517450();
   input += synapse0x3517490();
   input += synapse0x35174d0();
   input += synapse0x3517510();
   input += synapse0x3517550();
   input += synapse0x3517590();
   input += synapse0x35175d0();
   input += synapse0x3517610();
   input += synapse0x35170a0();
   input += synapse0x35170e0();
   input += synapse0x3517760();
   input += synapse0x35177a0();
   input += synapse0x35177e0();
   input += synapse0x3517820();
   input += synapse0x3517860();
   input += synapse0x35178a0();
   return input;
}

double NNfunction-ss_dLdL::neuron0x3516f10() {
   double input = input0x3516f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x35178e0() {
   double input = 0.350382;
   input += synapse0x3500350();
   input += synapse0x3500390();
   input += synapse0x35003d0();
   input += synapse0x3500410();
   input += synapse0x3500450();
   input += synapse0x3500490();
   input += synapse0x35004d0();
   input += synapse0x3500510();
   input += synapse0x3518030();
   input += synapse0x3518070();
   input += synapse0x35180b0();
   input += synapse0x35180f0();
   input += synapse0x3518130();
   input += synapse0x3518170();
   input += synapse0x35181b0();
   input += synapse0x35181f0();
   input += synapse0x3517a70();
   input += synapse0x3517ab0();
   input += synapse0x3518340();
   input += synapse0x3518380();
   input += synapse0x35183c0();
   input += synapse0x3518400();
   input += synapse0x3518440();
   input += synapse0x3518480();
   return input;
}

double NNfunction-ss_dLdL::neuron0x35178e0() {
   double input = input0x35178e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x35184c0() {
   double input = -1.21611;
   input += synapse0x3518800();
   input += synapse0x3518840();
   input += synapse0x3518880();
   input += synapse0x35188c0();
   input += synapse0x3518900();
   input += synapse0x3518940();
   input += synapse0x3518980();
   input += synapse0x35189c0();
   input += synapse0x3518a00();
   input += synapse0x3518a40();
   input += synapse0x3518a80();
   input += synapse0x3518ac0();
   input += synapse0x3518b00();
   input += synapse0x3518b40();
   input += synapse0x3518b80();
   input += synapse0x3518bc0();
   input += synapse0x3518650();
   input += synapse0x3518690();
   input += synapse0x3518d10();
   input += synapse0x3518d50();
   input += synapse0x3518d90();
   input += synapse0x3518dd0();
   input += synapse0x3518e10();
   input += synapse0x3518e50();
   return input;
}

double NNfunction-ss_dLdL::neuron0x35184c0() {
   double input = input0x35184c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x3518e90() {
   double input = 1.22129;
   input += synapse0x35191d0();
   input += synapse0x3519210();
   input += synapse0x3519250();
   input += synapse0x3519290();
   input += synapse0x35192d0();
   input += synapse0x3519310();
   input += synapse0x3519350();
   input += synapse0x3519390();
   input += synapse0x35193d0();
   input += synapse0x3519410();
   input += synapse0x3519450();
   input += synapse0x3519490();
   input += synapse0x35194d0();
   input += synapse0x3519510();
   input += synapse0x3519550();
   input += synapse0x3519590();
   input += synapse0x3519020();
   input += synapse0x3519060();
   input += synapse0x3509b90();
   input += synapse0x3509bd0();
   input += synapse0x3509c10();
   input += synapse0x3509c50();
   input += synapse0x3509c90();
   input += synapse0x3509cd0();
   return input;
}

double NNfunction-ss_dLdL::neuron0x3518e90() {
   double input = input0x3518e90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x3509d10() {
   double input = -0.438711;
   input += synapse0x350a050();
   input += synapse0x350a090();
   input += synapse0x350a0d0();
   input += synapse0x350a110();
   input += synapse0x350a150();
   input += synapse0x350a190();
   input += synapse0x350a1d0();
   input += synapse0x350a210();
   input += synapse0x350a250();
   input += synapse0x350a290();
   input += synapse0x350a2d0();
   input += synapse0x350a310();
   input += synapse0x350a350();
   input += synapse0x350a390();
   input += synapse0x350a3d0();
   input += synapse0x350a410();
   input += synapse0x3509ea0();
   input += synapse0x3509ee0();
   input += synapse0x350a560();
   input += synapse0x350a5a0();
   input += synapse0x350a5e0();
   input += synapse0x350a620();
   input += synapse0x350a660();
   input += synapse0x350a6a0();
   return input;
}

double NNfunction-ss_dLdL::neuron0x3509d10() {
   double input = input0x3509d10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x350a6e0() {
   double input = 1.57895;
   input += synapse0x350aa20();
   input += synapse0x350aa60();
   input += synapse0x350aaa0();
   input += synapse0x350aae0();
   input += synapse0x350ab20();
   input += synapse0x350ab60();
   input += synapse0x350aba0();
   input += synapse0x350abe0();
   input += synapse0x350ac20();
   input += synapse0x350ac60();
   input += synapse0x350aca0();
   input += synapse0x350ace0();
   input += synapse0x350ad20();
   input += synapse0x350ad60();
   input += synapse0x350ada0();
   input += synapse0x350ade0();
   input += synapse0x350a870();
   input += synapse0x350a8b0();
   input += synapse0x350af30();
   input += synapse0x350af70();
   input += synapse0x350afb0();
   input += synapse0x350aff0();
   input += synapse0x350b030();
   input += synapse0x350b070();
   return input;
}

double NNfunction-ss_dLdL::neuron0x350a6e0() {
   double input = input0x350a6e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x350b0b0() {
   double input = -3.43347;
   input += synapse0x350b3f0();
   input += synapse0x350b430();
   input += synapse0x350b470();
   input += synapse0x350b4b0();
   input += synapse0x350b4f0();
   input += synapse0x350b530();
   input += synapse0x350b570();
   input += synapse0x350b5b0();
   input += synapse0x350b5f0();
   input += synapse0x350b630();
   input += synapse0x350b670();
   input += synapse0x350b6b0();
   input += synapse0x350b6f0();
   input += synapse0x350b730();
   input += synapse0x350b770();
   input += synapse0x350b7b0();
   input += synapse0x350b240();
   input += synapse0x350b280();
   input += synapse0x350b900();
   input += synapse0x350b940();
   input += synapse0x350b980();
   input += synapse0x350b9c0();
   input += synapse0x350ba00();
   input += synapse0x350ba40();
   return input;
}

double NNfunction-ss_dLdL::neuron0x350b0b0() {
   double input = input0x350b0b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x351d6f0() {
   double input = 0.35953;
   input += synapse0x351d910();
   input += synapse0x351d950();
   input += synapse0x351d990();
   input += synapse0x351d9d0();
   input += synapse0x351da10();
   input += synapse0x351da50();
   input += synapse0x351da90();
   input += synapse0x351dad0();
   input += synapse0x351db10();
   input += synapse0x351db50();
   input += synapse0x351db90();
   input += synapse0x351dbd0();
   input += synapse0x351dc10();
   input += synapse0x351dc50();
   input += synapse0x351dc90();
   input += synapse0x351dcd0();
   input += synapse0x350ba80();
   input += synapse0x350bac0();
   input += synapse0x351de20();
   input += synapse0x351de60();
   input += synapse0x351dea0();
   input += synapse0x351dee0();
   input += synapse0x351df20();
   input += synapse0x351df60();
   return input;
}

double NNfunction-ss_dLdL::neuron0x351d6f0() {
   double input = input0x351d6f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x351dfa0() {
   double input = -0.100479;
   input += synapse0x351e2e0();
   input += synapse0x351e320();
   input += synapse0x351e360();
   input += synapse0x351e3a0();
   input += synapse0x351e3e0();
   input += synapse0x351e420();
   input += synapse0x351e460();
   input += synapse0x351e4a0();
   input += synapse0x351e4e0();
   input += synapse0x351e520();
   input += synapse0x351e560();
   input += synapse0x351e5a0();
   input += synapse0x351e5e0();
   input += synapse0x351e620();
   input += synapse0x351e660();
   input += synapse0x351e6a0();
   input += synapse0x351e130();
   input += synapse0x351e170();
   input += synapse0x351e7f0();
   input += synapse0x351e830();
   input += synapse0x351e870();
   input += synapse0x351e8b0();
   input += synapse0x351e8f0();
   input += synapse0x351e930();
   return input;
}

double NNfunction-ss_dLdL::neuron0x351dfa0() {
   double input = input0x351dfa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x351e970() {
   double input = 1.30681;
   input += synapse0x351ecb0();
   input += synapse0x351ecf0();
   input += synapse0x351ed30();
   input += synapse0x351ed70();
   input += synapse0x351edb0();
   input += synapse0x351edf0();
   input += synapse0x351ee30();
   input += synapse0x351ee70();
   input += synapse0x351eeb0();
   input += synapse0x351eef0();
   input += synapse0x351ef30();
   input += synapse0x351ef70();
   input += synapse0x351efb0();
   input += synapse0x351eff0();
   input += synapse0x351f030();
   input += synapse0x351f070();
   input += synapse0x351eb00();
   input += synapse0x351eb40();
   input += synapse0x351f1c0();
   input += synapse0x351f200();
   input += synapse0x351f240();
   input += synapse0x351f280();
   input += synapse0x351f2c0();
   input += synapse0x351f300();
   return input;
}

double NNfunction-ss_dLdL::neuron0x351e970() {
   double input = input0x351e970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x351f340() {
   double input = -0.493747;
   input += synapse0x351f680();
   input += synapse0x351f6c0();
   input += synapse0x351f700();
   input += synapse0x351f740();
   input += synapse0x351f780();
   input += synapse0x351f7c0();
   input += synapse0x351f800();
   input += synapse0x351f840();
   input += synapse0x351f880();
   input += synapse0x351f8c0();
   input += synapse0x351f900();
   input += synapse0x351f940();
   input += synapse0x351f980();
   input += synapse0x351f9c0();
   input += synapse0x351fa00();
   input += synapse0x351fa40();
   input += synapse0x351f4d0();
   input += synapse0x351f510();
   input += synapse0x351fb90();
   input += synapse0x351fbd0();
   input += synapse0x351fc10();
   input += synapse0x351fc50();
   input += synapse0x351fc90();
   input += synapse0x351fcd0();
   return input;
}

double NNfunction-ss_dLdL::neuron0x351f340() {
   double input = input0x351f340();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x3526540() {
   double input = -0.31041;
   input += synapse0x34fc260();
   input += synapse0x34fc2a0();
   input += synapse0x34fd780();
   input += synapse0x34fd7c0();
   input += synapse0x34fe150();
   input += synapse0x34fe190();
   input += synapse0x34fef20();
   input += synapse0x34fef60();
   input += synapse0x34ff8f0();
   input += synapse0x34ff930();
   input += synapse0x35002c0();
   input += synapse0x3500300();
   input += synapse0x3500da0();
   input += synapse0x3500de0();
   input += synapse0x3501770();
   input += synapse0x35017b0();
   input += synapse0x34fe850();
   input += synapse0x34fe890();
   input += synapse0x3503320();
   input += synapse0x3503360();
   input += synapse0x3503cf0();
   input += synapse0x3503d30();
   input += synapse0x35046c0();
   input += synapse0x3504700();
   input += synapse0x3505090();
   input += synapse0x35050d0();
   input += synapse0x34f9270();
   input += synapse0x34f92b0();
   input += synapse0x3507180();
   input += synapse0x35071c0();
   input += synapse0x3507b50();
   input += synapse0x3507b90();
   input += synapse0x3508520();
   input += synapse0x3508560();
   input += synapse0x3508ef0();
   input += synapse0x3508f30();
   input += synapse0x35098c0();
   input += synapse0x3509900();
   input += synapse0x3502410();
   input += synapse0x3502450();
   input += synapse0x350bcc0();
   input += synapse0x350bd00();
   input += synapse0x350c650();
   input += synapse0x350c690();
   input += synapse0x350d020();
   input += synapse0x350d060();
   input += synapse0x350d9f0();
   input += synapse0x350da30();
   input += synapse0x350e3c0();
   input += synapse0x350e400();
   return input;
}

double NNfunction-ss_dLdL::neuron0x3526540() {
   double input = input0x3526540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x35268e0() {
   double input = 0.402846;
   input += synapse0x3510b00();
   input += synapse0x3510b40();
   input += synapse0x35060c0();
   input += synapse0x3506100();
   input += synapse0x35136e0();
   input += synapse0x3513720();
   input += synapse0x35140b0();
   input += synapse0x35140f0();
   input += synapse0x3514a80();
   input += synapse0x3514ac0();
   input += synapse0x3515450();
   input += synapse0x3515490();
   input += synapse0x3515e20();
   input += synapse0x3515e60();
   input += synapse0x35167f0();
   input += synapse0x3516830();
   input += synapse0x35171c0();
   input += synapse0x3517200();
   input += synapse0x3517b90();
   input += synapse0x3517bd0();
   input += synapse0x3518770();
   input += synapse0x35187b0();
   input += synapse0x3519140();
   input += synapse0x3519180();
   input += synapse0x3509fc0();
   input += synapse0x350a000();
   input += synapse0x350a990();
   input += synapse0x350a9d0();
   input += synapse0x350b360();
   input += synapse0x350b3a0();
   input += synapse0x351d880();
   input += synapse0x351d8c0();
   input += synapse0x351e250();
   input += synapse0x351e290();
   input += synapse0x351ec20();
   input += synapse0x351ec60();
   input += synapse0x351f5f0();
   input += synapse0x351f630();
   input += synapse0x34fb520();
   input += synapse0x34fb560();
   input += synapse0x350ed90();
   input += synapse0x350edd0();
   input += synapse0x351fd10();
   input += synapse0x351fd50();
   input += synapse0x351fd90();
   input += synapse0x351fdd0();
   input += synapse0x3526c80();
   input += synapse0x3526cc0();
   input += synapse0x3526d00();
   input += synapse0x3526d40();
   return input;
}

double NNfunction-ss_dLdL::neuron0x35268e0() {
   double input = input0x35268e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x3526d80() {
   double input = 0.141589;
   input += synapse0x35270c0();
   input += synapse0x3527100();
   input += synapse0x3527140();
   input += synapse0x3527180();
   input += synapse0x35271c0();
   input += synapse0x3527200();
   input += synapse0x3527240();
   input += synapse0x3527280();
   input += synapse0x35272c0();
   input += synapse0x3527300();
   input += synapse0x3527340();
   input += synapse0x3527380();
   input += synapse0x35273c0();
   input += synapse0x3527400();
   input += synapse0x3527440();
   input += synapse0x3527480();
   input += synapse0x3526f10();
   input += synapse0x3526f50();
   input += synapse0x35275d0();
   input += synapse0x3527610();
   input += synapse0x3527650();
   input += synapse0x3527690();
   input += synapse0x35276d0();
   input += synapse0x3527710();
   input += synapse0x3527750();
   input += synapse0x3527790();
   input += synapse0x35277d0();
   input += synapse0x3527810();
   input += synapse0x3527850();
   input += synapse0x3527890();
   input += synapse0x35278d0();
   input += synapse0x3527910();
   input += synapse0x35274c0();
   input += synapse0x3527500();
   input += synapse0x3527540();
   input += synapse0x3527580();
   input += synapse0x3527b60();
   input += synapse0x3527ba0();
   input += synapse0x3527be0();
   input += synapse0x3527c20();
   input += synapse0x3527c60();
   input += synapse0x3527ca0();
   input += synapse0x3527ce0();
   input += synapse0x3527d20();
   input += synapse0x3527d60();
   input += synapse0x3527da0();
   input += synapse0x3527de0();
   input += synapse0x3527e20();
   input += synapse0x3527e60();
   input += synapse0x3527ea0();
   return input;
}

double NNfunction-ss_dLdL::neuron0x3526d80() {
   double input = input0x3526d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x3527ee0() {
   double input = -1.18716;
   input += synapse0x3528220();
   input += synapse0x3528260();
   input += synapse0x35282a0();
   input += synapse0x35282e0();
   input += synapse0x3528320();
   input += synapse0x3528360();
   input += synapse0x35283a0();
   input += synapse0x35283e0();
   input += synapse0x3528420();
   input += synapse0x3528460();
   input += synapse0x35284a0();
   input += synapse0x35284e0();
   input += synapse0x3528520();
   input += synapse0x3528560();
   input += synapse0x35285a0();
   input += synapse0x35285e0();
   input += synapse0x3528070();
   input += synapse0x35280b0();
   input += synapse0x3528730();
   input += synapse0x3528770();
   input += synapse0x35287b0();
   input += synapse0x35287f0();
   input += synapse0x3528830();
   input += synapse0x3528870();
   input += synapse0x35288b0();
   input += synapse0x35288f0();
   input += synapse0x3528930();
   input += synapse0x3528970();
   input += synapse0x35289b0();
   input += synapse0x35289f0();
   input += synapse0x3528a30();
   input += synapse0x3528a70();
   input += synapse0x3528620();
   input += synapse0x3528660();
   input += synapse0x35286a0();
   input += synapse0x35286e0();
   input += synapse0x3528cc0();
   input += synapse0x3528d00();
   input += synapse0x3528d40();
   input += synapse0x3528d80();
   input += synapse0x3528dc0();
   input += synapse0x3528e00();
   input += synapse0x3528e40();
   input += synapse0x3528e80();
   input += synapse0x3528ec0();
   input += synapse0x3528f00();
   input += synapse0x3528f40();
   input += synapse0x3528f80();
   input += synapse0x3528fc0();
   input += synapse0x3529000();
   return input;
}

double NNfunction-ss_dLdL::neuron0x3527ee0() {
   double input = input0x3527ee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x3529040() {
   double input = -0.141481;
   input += synapse0x3529380();
   input += synapse0x35293c0();
   input += synapse0x3529400();
   input += synapse0x3529440();
   input += synapse0x3529480();
   input += synapse0x35294c0();
   input += synapse0x3529500();
   input += synapse0x3529540();
   input += synapse0x3529580();
   input += synapse0x35295c0();
   input += synapse0x3529600();
   input += synapse0x3529640();
   input += synapse0x3529680();
   input += synapse0x35296c0();
   input += synapse0x3529700();
   input += synapse0x3529740();
   input += synapse0x35291d0();
   input += synapse0x3529210();
   input += synapse0x3529890();
   input += synapse0x35298d0();
   input += synapse0x3529910();
   input += synapse0x3529950();
   input += synapse0x3529990();
   input += synapse0x35299d0();
   input += synapse0x3529a10();
   input += synapse0x3529a50();
   input += synapse0x3529a90();
   input += synapse0x3529ad0();
   input += synapse0x3529b10();
   input += synapse0x3529b50();
   input += synapse0x3529b90();
   input += synapse0x3529bd0();
   input += synapse0x3529780();
   input += synapse0x35297c0();
   input += synapse0x3529800();
   input += synapse0x3529840();
   input += synapse0x3529e20();
   input += synapse0x3529e60();
   input += synapse0x3529ea0();
   input += synapse0x3529ee0();
   input += synapse0x3529f20();
   input += synapse0x3529f60();
   input += synapse0x3529fa0();
   input += synapse0x3529fe0();
   input += synapse0x352a020();
   input += synapse0x352a060();
   input += synapse0x352a0a0();
   input += synapse0x352a0e0();
   input += synapse0x352a120();
   input += synapse0x352a160();
   return input;
}

double NNfunction-ss_dLdL::neuron0x3529040() {
   double input = input0x3529040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_dLdL::input0x352a1a0() {
   double input = 5.09277;
   input += synapse0x352a3c0();
   input += synapse0x352a400();
   input += synapse0x352a440();
   input += synapse0x352a480();
   input += synapse0x352a4c0();
   return input;
}

double NNfunction-ss_dLdL::neuron0x352a1a0() {
   double input = input0x352a1a0();
   return (input * 1)+0;
}

double NNfunction-ss_dLdL::synapse0x34f62e0() {
   return (neuron0x34f6360()*-0.022579);
}

double NNfunction-ss_dLdL::synapse0x34f6320() {
   return (neuron0x34f6610()*-0.0127039);
}

double NNfunction-ss_dLdL::synapse0x34fb5b0() {
   return (neuron0x34f6950()*-0.741778);
}

double NNfunction-ss_dLdL::synapse0x34fb5f0() {
   return (neuron0x34f6c90()*-0.054861);
}

double NNfunction-ss_dLdL::synapse0x34fb630() {
   return (neuron0x34f6fd0()*0.0184908);
}

double NNfunction-ss_dLdL::synapse0x34fb670() {
   return (neuron0x34f7310()*-0.00406357);
}

double NNfunction-ss_dLdL::synapse0x34fb6b0() {
   return (neuron0x34f7650()*0.0153194);
}

double NNfunction-ss_dLdL::synapse0x34fb6f0() {
   return (neuron0x34f7990()*0.0267083);
}

double NNfunction-ss_dLdL::synapse0x34fb730() {
   return (neuron0x34f7cd0()*-0.00505579);
}

double NNfunction-ss_dLdL::synapse0x34fb770() {
   return (neuron0x34f8010()*0.0193501);
}

double NNfunction-ss_dLdL::synapse0x34fb7b0() {
   return (neuron0x34f8350()*0.00064149);
}

double NNfunction-ss_dLdL::synapse0x34fb7f0() {
   return (neuron0x34f8690()*0.363472);
}

double NNfunction-ss_dLdL::synapse0x34fb830() {
   return (neuron0x34f89d0()*0.0124262);
}

double NNfunction-ss_dLdL::synapse0x34fb870() {
   return (neuron0x34f8d10()*-0.0241496);
}

double NNfunction-ss_dLdL::synapse0x34fb8b0() {
   return (neuron0x34f9050()*0.00545942);
}

double NNfunction-ss_dLdL::synapse0x34fb8f0() {
   return (neuron0x34f9390()*0.0334865);
}

double NNfunction-ss_dLdL::synapse0x34f6250() {
   return (neuron0x34f96d0()*-0.0248877);
}

double NNfunction-ss_dLdL::synapse0x34f6290() {
   return (neuron0x34f9c30()*-0.00695927);
}

double NNfunction-ss_dLdL::synapse0x32b1420() {
   return (neuron0x34f9e50()*0.00424274);
}

double NNfunction-ss_dLdL::synapse0x32b1460() {
   return (neuron0x34fa190()*0.00656038);
}

double NNfunction-ss_dLdL::synapse0x34fbb50() {
   return (neuron0x34fa4d0()*0.0149891);
}

double NNfunction-ss_dLdL::synapse0x34fbb90() {
   return (neuron0x34fa810()*-0.0100013);
}

double NNfunction-ss_dLdL::synapse0x34fbbd0() {
   return (neuron0x34fab50()*-0.0133242);
}

double NNfunction-ss_dLdL::synapse0x34fbc10() {
   return (neuron0x34fae90()*0.0231287);
}

double NNfunction-ss_dLdL::synapse0x34fbf90() {
   return (neuron0x34f6360()*-0.032336);
}

double NNfunction-ss_dLdL::synapse0x34fbfd0() {
   return (neuron0x34f6610()*0.00718902);
}

double NNfunction-ss_dLdL::synapse0x34fc010() {
   return (neuron0x34f6950()*-0.0866266);
}

double NNfunction-ss_dLdL::synapse0x34fc050() {
   return (neuron0x34f6c90()*0.106858);
}

double NNfunction-ss_dLdL::synapse0x34fc090() {
   return (neuron0x34f6fd0()*0.0095752);
}

double NNfunction-ss_dLdL::synapse0x34fc0d0() {
   return (neuron0x34f7310()*0.011348);
}

double NNfunction-ss_dLdL::synapse0x34fc110() {
   return (neuron0x34f7650()*-0.0391982);
}

double NNfunction-ss_dLdL::synapse0x34fc150() {
   return (neuron0x34f7990()*-0.0129689);
}

double NNfunction-ss_dLdL::synapse0x34fc190() {
   return (neuron0x34f7cd0()*-0.0111559);
}

double NNfunction-ss_dLdL::synapse0x34fba40() {
   return (neuron0x34f8010()*-0.0272116);
}

double NNfunction-ss_dLdL::synapse0x34fba80() {
   return (neuron0x34f8350()*-0.0447775);
}

double NNfunction-ss_dLdL::synapse0x34fbac0() {
   return (neuron0x34f8690()*1.58041);
}

double NNfunction-ss_dLdL::synapse0x34fbb00() {
   return (neuron0x34f89d0()*-0.0680858);
}

double NNfunction-ss_dLdL::synapse0x34fc3e0() {
   return (neuron0x34f8d10()*0.0812819);
}

double NNfunction-ss_dLdL::synapse0x34fc420() {
   return (neuron0x34f9050()*0.0204587);
}

double NNfunction-ss_dLdL::synapse0x34fc460() {
   return (neuron0x34f9390()*-0.0173314);
}

double NNfunction-ss_dLdL::synapse0x34fbde0() {
   return (neuron0x34f96d0()*0.0717271);
}

double NNfunction-ss_dLdL::synapse0x34fbe20() {
   return (neuron0x34f9c30()*0.0103456);
}

double NNfunction-ss_dLdL::synapse0x34fc5b0() {
   return (neuron0x34f9e50()*-0.030488);
}

double NNfunction-ss_dLdL::synapse0x34fc5f0() {
   return (neuron0x34fa190()*-0.0177219);
}

double NNfunction-ss_dLdL::synapse0x34fc630() {
   return (neuron0x34fa4d0()*-0.0505223);
}

double NNfunction-ss_dLdL::synapse0x34fc670() {
   return (neuron0x34fa810()*-0.0384107);
}

double NNfunction-ss_dLdL::synapse0x34fc6b0() {
   return (neuron0x34fab50()*-0.00175712);
}

double NNfunction-ss_dLdL::synapse0x34fc6f0() {
   return (neuron0x34fae90()*0.00545273);
}

double NNfunction-ss_dLdL::synapse0x34fca70() {
   return (neuron0x34f6360()*0.473137);
}

double NNfunction-ss_dLdL::synapse0x34fcab0() {
   return (neuron0x34f6610()*-0.233231);
}

double NNfunction-ss_dLdL::synapse0x34fcaf0() {
   return (neuron0x34f6950()*-0.179729);
}

double NNfunction-ss_dLdL::synapse0x34fcb30() {
   return (neuron0x34f6c90()*-0.621067);
}

double NNfunction-ss_dLdL::synapse0x34fcb70() {
   return (neuron0x34f6fd0()*-0.0454625);
}

double NNfunction-ss_dLdL::synapse0x34fcbb0() {
   return (neuron0x34f7310()*0.427557);
}

double NNfunction-ss_dLdL::synapse0x34fcbf0() {
   return (neuron0x34f7650()*0.42464);
}

double NNfunction-ss_dLdL::synapse0x34fcc30() {
   return (neuron0x34f7990()*0.497358);
}

double NNfunction-ss_dLdL::synapse0x34fcc70() {
   return (neuron0x34f7cd0()*0.51086);
}

double NNfunction-ss_dLdL::synapse0x34fccb0() {
   return (neuron0x34f8010()*0.21026);
}

double NNfunction-ss_dLdL::synapse0x34fccf0() {
   return (neuron0x34f8350()*0.359459);
}

double NNfunction-ss_dLdL::synapse0x34fcd30() {
   return (neuron0x34f8690()*-0.431652);
}

double NNfunction-ss_dLdL::synapse0x34fcd70() {
   return (neuron0x34f89d0()*0.146715);
}

double NNfunction-ss_dLdL::synapse0x34fcdb0() {
   return (neuron0x34f8d10()*-0.234024);
}

double NNfunction-ss_dLdL::synapse0x34fcdf0() {
   return (neuron0x34f9050()*-0.0406168);
}

double NNfunction-ss_dLdL::synapse0x34fce30() {
   return (neuron0x34f9390()*-0.281061);
}

double NNfunction-ss_dLdL::synapse0x34fc8c0() {
   return (neuron0x34f96d0()*-0.627058);
}

double NNfunction-ss_dLdL::synapse0x34fc900() {
   return (neuron0x34f9c30()*0.447024);
}

double NNfunction-ss_dLdL::synapse0x34e53d0() {
   return (neuron0x34f9e50()*-0.192677);
}

double NNfunction-ss_dLdL::synapse0x32bf320() {
   return (neuron0x34fa190()*0.409645);
}

double NNfunction-ss_dLdL::synapse0x32bf360() {
   return (neuron0x34fa4d0()*-0.0197865);
}

double NNfunction-ss_dLdL::synapse0x33da870() {
   return (neuron0x34fa810()*0.127641);
}

double NNfunction-ss_dLdL::synapse0x33da8b0() {
   return (neuron0x34fab50()*0.0247827);
}

double NNfunction-ss_dLdL::synapse0x34f60c0() {
   return (neuron0x34fae90()*-0.232388);
}

double NNfunction-ss_dLdL::synapse0x32bfc10() {
   return (neuron0x34f6360()*0.0528556);
}

double NNfunction-ss_dLdL::synapse0x34fc2f0() {
   return (neuron0x34f6610()*-0.0995018);
}

double NNfunction-ss_dLdL::synapse0x34fc330() {
   return (neuron0x34f6950()*0.440019);
}

double NNfunction-ss_dLdL::synapse0x34fc370() {
   return (neuron0x34f6c90()*-1.20962);
}

double NNfunction-ss_dLdL::synapse0x34fcf80() {
   return (neuron0x34f6fd0()*0.0555107);
}

double NNfunction-ss_dLdL::synapse0x34fcfc0() {
   return (neuron0x34f7310()*0.109858);
}

double NNfunction-ss_dLdL::synapse0x34fd000() {
   return (neuron0x34f7650()*0.346398);
}

double NNfunction-ss_dLdL::synapse0x34fd040() {
   return (neuron0x34f7990()*0.305173);
}

double NNfunction-ss_dLdL::synapse0x34fd080() {
   return (neuron0x34f7cd0()*0.17859);
}

double NNfunction-ss_dLdL::synapse0x34fd0c0() {
   return (neuron0x34f8010()*0.488445);
}

double NNfunction-ss_dLdL::synapse0x34fd100() {
   return (neuron0x34f8350()*0.349232);
}

double NNfunction-ss_dLdL::synapse0x34fd140() {
   return (neuron0x34f8690()*-0.151);
}

double NNfunction-ss_dLdL::synapse0x34fd180() {
   return (neuron0x34f89d0()*-0.269846);
}

double NNfunction-ss_dLdL::synapse0x34fd1c0() {
   return (neuron0x34f8d10()*-0.335859);
}

double NNfunction-ss_dLdL::synapse0x34fd200() {
   return (neuron0x34f9050()*-0.101299);
}

double NNfunction-ss_dLdL::synapse0x34fd240() {
   return (neuron0x34f9390()*-0.273193);
}

double NNfunction-ss_dLdL::synapse0x34f6100() {
   return (neuron0x34f96d0()*0.00830281);
}

double NNfunction-ss_dLdL::synapse0x34f6140() {
   return (neuron0x34f9c30()*-0.160287);
}

double NNfunction-ss_dLdL::synapse0x34f6180() {
   return (neuron0x34f9e50()*-0.58114);
}

double NNfunction-ss_dLdL::synapse0x34fd390() {
   return (neuron0x34fa190()*-0.274051);
}

double NNfunction-ss_dLdL::synapse0x34fd3d0() {
   return (neuron0x34fa4d0()*0.655487);
}

double NNfunction-ss_dLdL::synapse0x34fd410() {
   return (neuron0x34fa810()*0.0543701);
}

double NNfunction-ss_dLdL::synapse0x34fd450() {
   return (neuron0x34fab50()*-0.436401);
}

double NNfunction-ss_dLdL::synapse0x34fd490() {
   return (neuron0x34fae90()*-0.121489);
}

double NNfunction-ss_dLdL::synapse0x34fd810() {
   return (neuron0x34f6360()*0.27579);
}

double NNfunction-ss_dLdL::synapse0x34fd850() {
   return (neuron0x34f6610()*0.402277);
}

double NNfunction-ss_dLdL::synapse0x34fd890() {
   return (neuron0x34f6950()*0.543823);
}

double NNfunction-ss_dLdL::synapse0x34fd8d0() {
   return (neuron0x34f6c90()*0.426786);
}

double NNfunction-ss_dLdL::synapse0x34fd910() {
   return (neuron0x34f6fd0()*-0.397059);
}

double NNfunction-ss_dLdL::synapse0x34fd950() {
   return (neuron0x34f7310()*-0.636307);
}

double NNfunction-ss_dLdL::synapse0x34fd990() {
   return (neuron0x34f7650()*-0.0630908);
}

double NNfunction-ss_dLdL::synapse0x34fd9d0() {
   return (neuron0x34f7990()*-0.0750528);
}

double NNfunction-ss_dLdL::synapse0x34fda10() {
   return (neuron0x34f7cd0()*-0.276782);
}

double NNfunction-ss_dLdL::synapse0x34fda50() {
   return (neuron0x34f8010()*-0.0762006);
}

double NNfunction-ss_dLdL::synapse0x34fda90() {
   return (neuron0x34f8350()*0.326856);
}

double NNfunction-ss_dLdL::synapse0x34fdad0() {
   return (neuron0x34f8690()*0.190266);
}

double NNfunction-ss_dLdL::synapse0x34fdb10() {
   return (neuron0x34f89d0()*0.0227065);
}

double NNfunction-ss_dLdL::synapse0x34fdb50() {
   return (neuron0x34f8d10()*0.437996);
}

double NNfunction-ss_dLdL::synapse0x34fdb90() {
   return (neuron0x34f9050()*0.337322);
}

double NNfunction-ss_dLdL::synapse0x34fdbd0() {
   return (neuron0x34f9390()*-0.269481);
}

double NNfunction-ss_dLdL::synapse0x34fd660() {
   return (neuron0x34f96d0()*-0.508748);
}

double NNfunction-ss_dLdL::synapse0x34fd6a0() {
   return (neuron0x34f9c30()*0.212051);
}

double NNfunction-ss_dLdL::synapse0x34fdd20() {
   return (neuron0x34f9e50()*0.346073);
}

double NNfunction-ss_dLdL::synapse0x34fdd60() {
   return (neuron0x34fa190()*0.235987);
}

double NNfunction-ss_dLdL::synapse0x34fdda0() {
   return (neuron0x34fa4d0()*-0.523767);
}

double NNfunction-ss_dLdL::synapse0x34fdde0() {
   return (neuron0x34fa810()*0.199923);
}

double NNfunction-ss_dLdL::synapse0x34fde20() {
   return (neuron0x34fab50()*0.427508);
}

double NNfunction-ss_dLdL::synapse0x34fde60() {
   return (neuron0x34fae90()*-0.0305803);
}

double NNfunction-ss_dLdL::synapse0x34fe1e0() {
   return (neuron0x34f6360()*0.0261925);
}

double NNfunction-ss_dLdL::synapse0x34fe220() {
   return (neuron0x34f6610()*0.0121039);
}

double NNfunction-ss_dLdL::synapse0x34fe260() {
   return (neuron0x34f6950()*-0.0707683);
}

double NNfunction-ss_dLdL::synapse0x34fe2a0() {
   return (neuron0x34f6c90()*-0.221187);
}

double NNfunction-ss_dLdL::synapse0x34fe2e0() {
   return (neuron0x34f6fd0()*0.00907844);
}

double NNfunction-ss_dLdL::synapse0x34fe320() {
   return (neuron0x34f7310()*0.00218518);
}

double NNfunction-ss_dLdL::synapse0x34fe360() {
   return (neuron0x34f7650()*0.0357601);
}

double NNfunction-ss_dLdL::synapse0x34fe3a0() {
   return (neuron0x34f7990()*-0.0189919);
}

double NNfunction-ss_dLdL::synapse0x34fe3e0() {
   return (neuron0x34f7cd0()*-0.0130027);
}

double NNfunction-ss_dLdL::synapse0x32bf670() {
   return (neuron0x34f8010()*-0.00924982);
}

double NNfunction-ss_dLdL::synapse0x32bf6b0() {
   return (neuron0x34f8350()*0.0216129);
}

double NNfunction-ss_dLdL::synapse0x32bf6f0() {
   return (neuron0x34f8690()*-0.613735);
}

double NNfunction-ss_dLdL::synapse0x32bf730() {
   return (neuron0x34f89d0()*0.386852);
}

double NNfunction-ss_dLdL::synapse0x32bf770() {
   return (neuron0x34f8d10()*-0.0617986);
}

double NNfunction-ss_dLdL::synapse0x32bf7b0() {
   return (neuron0x34f9050()*0.20462);
}

double NNfunction-ss_dLdL::synapse0x32bf7f0() {
   return (neuron0x34f9390()*0.214486);
}

double NNfunction-ss_dLdL::synapse0x34fe030() {
   return (neuron0x34f96d0()*-0.100961);
}

double NNfunction-ss_dLdL::synapse0x34fe070() {
   return (neuron0x34f9c30()*0.167817);
}

double NNfunction-ss_dLdL::synapse0x32bf940() {
   return (neuron0x34f9e50()*0.172357);
}

double NNfunction-ss_dLdL::synapse0x32bf980() {
   return (neuron0x34fa190()*0.0296546);
}

double NNfunction-ss_dLdL::synapse0x32bf9c0() {
   return (neuron0x34fa4d0()*-0.00480054);
}

double NNfunction-ss_dLdL::synapse0x32bfa00() {
   return (neuron0x34fa810()*0.0176742);
}

double NNfunction-ss_dLdL::synapse0x32bfa40() {
   return (neuron0x34fab50()*-0.0170043);
}

double NNfunction-ss_dLdL::synapse0x34fec30() {
   return (neuron0x34fae90()*0.00672722);
}

double NNfunction-ss_dLdL::synapse0x34fefb0() {
   return (neuron0x34f6360()*0.0389023);
}

double NNfunction-ss_dLdL::synapse0x34feff0() {
   return (neuron0x34f6610()*-0.00330756);
}

double NNfunction-ss_dLdL::synapse0x34ff030() {
   return (neuron0x34f6950()*-0.229475);
}

double NNfunction-ss_dLdL::synapse0x34ff070() {
   return (neuron0x34f6c90()*3.1706);
}

double NNfunction-ss_dLdL::synapse0x34ff0b0() {
   return (neuron0x34f6fd0()*0.0151928);
}

double NNfunction-ss_dLdL::synapse0x34ff0f0() {
   return (neuron0x34f7310()*0.00411908);
}

double NNfunction-ss_dLdL::synapse0x34ff130() {
   return (neuron0x34f7650()*-0.0498635);
}

double NNfunction-ss_dLdL::synapse0x34ff170() {
   return (neuron0x34f7990()*-0.0181076);
}

double NNfunction-ss_dLdL::synapse0x34ff1b0() {
   return (neuron0x34f7cd0()*-0.0617494);
}

double NNfunction-ss_dLdL::synapse0x34ff1f0() {
   return (neuron0x34f8010()*-0.0115054);
}

double NNfunction-ss_dLdL::synapse0x34ff230() {
   return (neuron0x34f8350()*0.0210113);
}

double NNfunction-ss_dLdL::synapse0x34ff270() {
   return (neuron0x34f8690()*1.4807);
}

double NNfunction-ss_dLdL::synapse0x34ff2b0() {
   return (neuron0x34f89d0()*-0.0782753);
}

double NNfunction-ss_dLdL::synapse0x34ff2f0() {
   return (neuron0x34f8d10()*-0.0157029);
}

double NNfunction-ss_dLdL::synapse0x34ff330() {
   return (neuron0x34f9050()*0.00311731);
}

double NNfunction-ss_dLdL::synapse0x34ff370() {
   return (neuron0x34f9390()*-0.0507653);
}

double NNfunction-ss_dLdL::synapse0x34fee00() {
   return (neuron0x34f96d0()*0.0595704);
}

double NNfunction-ss_dLdL::synapse0x34fee40() {
   return (neuron0x34f9c30()*-0.00230887);
}

double NNfunction-ss_dLdL::synapse0x34ff4c0() {
   return (neuron0x34f9e50()*-0.0243495);
}

double NNfunction-ss_dLdL::synapse0x34ff500() {
   return (neuron0x34fa190()*-0.0458244);
}

double NNfunction-ss_dLdL::synapse0x34ff540() {
   return (neuron0x34fa4d0()*-0.0347178);
}

double NNfunction-ss_dLdL::synapse0x34ff580() {
   return (neuron0x34fa810()*-0.0618592);
}

double NNfunction-ss_dLdL::synapse0x34ff5c0() {
   return (neuron0x34fab50()*0.00988117);
}

double NNfunction-ss_dLdL::synapse0x34ff600() {
   return (neuron0x34fae90()*-0.0240315);
}

double NNfunction-ss_dLdL::synapse0x34ff980() {
   return (neuron0x34f6360()*0.0177171);
}

double NNfunction-ss_dLdL::synapse0x34ff9c0() {
   return (neuron0x34f6610()*0.00667887);
}

double NNfunction-ss_dLdL::synapse0x34ffa00() {
   return (neuron0x34f6950()*-0.0720347);
}

double NNfunction-ss_dLdL::synapse0x34ffa40() {
   return (neuron0x34f6c90()*-0.512449);
}

double NNfunction-ss_dLdL::synapse0x34ffa80() {
   return (neuron0x34f6fd0()*0.00543235);
}

double NNfunction-ss_dLdL::synapse0x34ffac0() {
   return (neuron0x34f7310()*-9.45233e-05);
}

double NNfunction-ss_dLdL::synapse0x34ffb00() {
   return (neuron0x34f7650()*-0.0124777);
}

double NNfunction-ss_dLdL::synapse0x34ffb40() {
   return (neuron0x34f7990()*-0.0092448);
}

double NNfunction-ss_dLdL::synapse0x34ffb80() {
   return (neuron0x34f7cd0()*-0.0336526);
}

double NNfunction-ss_dLdL::synapse0x34ffbc0() {
   return (neuron0x34f8010()*-0.00407048);
}

double NNfunction-ss_dLdL::synapse0x34ffc00() {
   return (neuron0x34f8350()*0.0109656);
}

double NNfunction-ss_dLdL::synapse0x34ffc40() {
   return (neuron0x34f8690()*3.62127);
}

double NNfunction-ss_dLdL::synapse0x34ffc80() {
   return (neuron0x34f89d0()*-0.0356435);
}

double NNfunction-ss_dLdL::synapse0x34ffcc0() {
   return (neuron0x34f8d10()*0.0331958);
}

double NNfunction-ss_dLdL::synapse0x34ffd00() {
   return (neuron0x34f9050()*0.0172494);
}

double NNfunction-ss_dLdL::synapse0x34ffd40() {
   return (neuron0x34f9390()*-0.0017492);
}

double NNfunction-ss_dLdL::synapse0x34ff7d0() {
   return (neuron0x34f96d0()*0.0317468);
}

double NNfunction-ss_dLdL::synapse0x34ff810() {
   return (neuron0x34f9c30()*0.0118763);
}

double NNfunction-ss_dLdL::synapse0x34ffe90() {
   return (neuron0x34f9e50()*-0.00700869);
}

double NNfunction-ss_dLdL::synapse0x34ffed0() {
   return (neuron0x34fa190()*-0.00409704);
}

double NNfunction-ss_dLdL::synapse0x34fff10() {
   return (neuron0x34fa4d0()*-0.00768695);
}

double NNfunction-ss_dLdL::synapse0x34fff50() {
   return (neuron0x34fa810()*-0.00917191);
}

double NNfunction-ss_dLdL::synapse0x34fff90() {
   return (neuron0x34fab50()*0.0183383);
}

double NNfunction-ss_dLdL::synapse0x34fffd0() {
   return (neuron0x34fae90()*0.0136256);
}

double NNfunction-ss_dLdL::synapse0x34f9b20() {
   return (neuron0x34f6360()*-0.110011);
}

double NNfunction-ss_dLdL::synapse0x34f9b60() {
   return (neuron0x34f6610()*0.00897665);
}

double NNfunction-ss_dLdL::synapse0x34f9ba0() {
   return (neuron0x34f6950()*-0.113064);
}

double NNfunction-ss_dLdL::synapse0x34f9be0() {
   return (neuron0x34f6c90()*-0.381261);
}

double NNfunction-ss_dLdL::synapse0x3500560() {
   return (neuron0x34f6fd0()*-0.0784819);
}

double NNfunction-ss_dLdL::synapse0x35005a0() {
   return (neuron0x34f7310()*0.190575);
}

double NNfunction-ss_dLdL::synapse0x35005e0() {
   return (neuron0x34f7650()*0.241256);
}

double NNfunction-ss_dLdL::synapse0x3500620() {
   return (neuron0x34f7990()*0.117991);
}

double NNfunction-ss_dLdL::synapse0x3500660() {
   return (neuron0x34f7cd0()*-0.182595);
}

double NNfunction-ss_dLdL::synapse0x35006a0() {
   return (neuron0x34f8010()*0.427086);
}

double NNfunction-ss_dLdL::synapse0x35006e0() {
   return (neuron0x34f8350()*-0.540588);
}

double NNfunction-ss_dLdL::synapse0x3500720() {
   return (neuron0x34f8690()*1.51965);
}

double NNfunction-ss_dLdL::synapse0x3500760() {
   return (neuron0x34f89d0()*-0.148499);
}

double NNfunction-ss_dLdL::synapse0x35007a0() {
   return (neuron0x34f8d10()*-0.0834633);
}

double NNfunction-ss_dLdL::synapse0x35007e0() {
   return (neuron0x34f9050()*-0.0227323);
}

double NNfunction-ss_dLdL::synapse0x3500820() {
   return (neuron0x34f9390()*-0.13575);
}

double NNfunction-ss_dLdL::synapse0x35001a0() {
   return (neuron0x34f96d0()*-0.20919);
}

double NNfunction-ss_dLdL::synapse0x35001e0() {
   return (neuron0x34f9c30()*0.15029);
}

double NNfunction-ss_dLdL::synapse0x3500970() {
   return (neuron0x34f9e50()*-0.283341);
}

double NNfunction-ss_dLdL::synapse0x35009b0() {
   return (neuron0x34fa190()*-0.0245777);
}

double NNfunction-ss_dLdL::synapse0x35009f0() {
   return (neuron0x34fa4d0()*-0.0236856);
}

double NNfunction-ss_dLdL::synapse0x3500a30() {
   return (neuron0x34fa810()*0.0802793);
}

double NNfunction-ss_dLdL::synapse0x3500a70() {
   return (neuron0x34fab50()*-0.124877);
}

double NNfunction-ss_dLdL::synapse0x3500ab0() {
   return (neuron0x34fae90()*0.0940131);
}

double NNfunction-ss_dLdL::synapse0x3500e30() {
   return (neuron0x34f6360()*-0.00282835);
}

double NNfunction-ss_dLdL::synapse0x3500e70() {
   return (neuron0x34f6610()*-0.0029356);
}

double NNfunction-ss_dLdL::synapse0x3500eb0() {
   return (neuron0x34f6950()*0.281288);
}

double NNfunction-ss_dLdL::synapse0x3500ef0() {
   return (neuron0x34f6c90()*-0.128475);
}

double NNfunction-ss_dLdL::synapse0x3500f30() {
   return (neuron0x34f6fd0()*0.107424);
}

double NNfunction-ss_dLdL::synapse0x3500f70() {
   return (neuron0x34f7310()*0.0796693);
}

double NNfunction-ss_dLdL::synapse0x3500fb0() {
   return (neuron0x34f7650()*0.0577385);
}

double NNfunction-ss_dLdL::synapse0x3500ff0() {
   return (neuron0x34f7990()*0.15608);
}

double NNfunction-ss_dLdL::synapse0x3501030() {
   return (neuron0x34f7cd0()*0.161679);
}

double NNfunction-ss_dLdL::synapse0x3501070() {
   return (neuron0x34f8010()*0.0570869);
}

double NNfunction-ss_dLdL::synapse0x35010b0() {
   return (neuron0x34f8350()*-0.0180617);
}

double NNfunction-ss_dLdL::synapse0x35010f0() {
   return (neuron0x34f8690()*0.726717);
}

double NNfunction-ss_dLdL::synapse0x3501130() {
   return (neuron0x34f89d0()*0.193551);
}

double NNfunction-ss_dLdL::synapse0x3501170() {
   return (neuron0x34f8d10()*-0.0182321);
}

double NNfunction-ss_dLdL::synapse0x35011b0() {
   return (neuron0x34f9050()*0.101434);
}

double NNfunction-ss_dLdL::synapse0x35011f0() {
   return (neuron0x34f9390()*0.0500824);
}

double NNfunction-ss_dLdL::synapse0x3500c80() {
   return (neuron0x34f96d0()*-0.0148853);
}

double NNfunction-ss_dLdL::synapse0x3500cc0() {
   return (neuron0x34f9c30()*-0.0190686);
}

double NNfunction-ss_dLdL::synapse0x3501340() {
   return (neuron0x34f9e50()*0.0942454);
}

double NNfunction-ss_dLdL::synapse0x3501380() {
   return (neuron0x34fa190()*0.0460125);
}

double NNfunction-ss_dLdL::synapse0x35013c0() {
   return (neuron0x34fa4d0()*0.0855205);
}

double NNfunction-ss_dLdL::synapse0x3501400() {
   return (neuron0x34fa810()*0.0552685);
}

double NNfunction-ss_dLdL::synapse0x3501440() {
   return (neuron0x34fab50()*-0.191093);
}

double NNfunction-ss_dLdL::synapse0x3501480() {
   return (neuron0x34fae90()*0.086522);
}

double NNfunction-ss_dLdL::synapse0x3501800() {
   return (neuron0x34f6360()*0.00838376);
}

double NNfunction-ss_dLdL::synapse0x3501840() {
   return (neuron0x34f6610()*-0.0258287);
}

double NNfunction-ss_dLdL::synapse0x3501880() {
   return (neuron0x34f6950()*0.651948);
}

double NNfunction-ss_dLdL::synapse0x35018c0() {
   return (neuron0x34f6c90()*0.840143);
}

double NNfunction-ss_dLdL::synapse0x3501900() {
   return (neuron0x34f6fd0()*0.0536561);
}

double NNfunction-ss_dLdL::synapse0x3501940() {
   return (neuron0x34f7310()*0.535035);
}

double NNfunction-ss_dLdL::synapse0x3501980() {
   return (neuron0x34f7650()*-0.967836);
}

double NNfunction-ss_dLdL::synapse0x35019c0() {
   return (neuron0x34f7990()*0.161253);
}

double NNfunction-ss_dLdL::synapse0x3501a00() {
   return (neuron0x34f7cd0()*0.119513);
}

double NNfunction-ss_dLdL::synapse0x3501a40() {
   return (neuron0x34f8010()*-0.307556);
}

double NNfunction-ss_dLdL::synapse0x3501a80() {
   return (neuron0x34f8350()*-0.230523);
}

double NNfunction-ss_dLdL::synapse0x3501ac0() {
   return (neuron0x34f8690()*0.417351);
}

double NNfunction-ss_dLdL::synapse0x3501b00() {
   return (neuron0x34f89d0()*-0.422277);
}

double NNfunction-ss_dLdL::synapse0x3501b40() {
   return (neuron0x34f8d10()*1.33167);
}

double NNfunction-ss_dLdL::synapse0x3501b80() {
   return (neuron0x34f9050()*0.17823);
}

double NNfunction-ss_dLdL::synapse0x3501bc0() {
   return (neuron0x34f9390()*0.107535);
}

double NNfunction-ss_dLdL::synapse0x3501650() {
   return (neuron0x34f96d0()*0.133524);
}

double NNfunction-ss_dLdL::synapse0x3501690() {
   return (neuron0x34f9c30()*0.591577);
}

double NNfunction-ss_dLdL::synapse0x34fe420() {
   return (neuron0x34f9e50()*-0.661307);
}

double NNfunction-ss_dLdL::synapse0x34fe460() {
   return (neuron0x34fa190()*-0.0787975);
}

double NNfunction-ss_dLdL::synapse0x34fe4a0() {
   return (neuron0x34fa4d0()*0.148254);
}

double NNfunction-ss_dLdL::synapse0x34fe4e0() {
   return (neuron0x34fa810()*-0.438724);
}

double NNfunction-ss_dLdL::synapse0x34fe520() {
   return (neuron0x34fab50()*0.296239);
}

double NNfunction-ss_dLdL::synapse0x34fe560() {
   return (neuron0x34fae90()*-0.0588717);
}

double NNfunction-ss_dLdL::synapse0x34fe8e0() {
   return (neuron0x34f6360()*0.040438);
}

double NNfunction-ss_dLdL::synapse0x34fe920() {
   return (neuron0x34f6610()*-0.0732321);
}

double NNfunction-ss_dLdL::synapse0x34fe960() {
   return (neuron0x34f6950()*-0.21783);
}

double NNfunction-ss_dLdL::synapse0x34fe9a0() {
   return (neuron0x34f6c90()*0.0740037);
}

double NNfunction-ss_dLdL::synapse0x34fe9e0() {
   return (neuron0x34f6fd0()*0.0752705);
}

double NNfunction-ss_dLdL::synapse0x34fea20() {
   return (neuron0x34f7310()*0.0438304);
}

double NNfunction-ss_dLdL::synapse0x34fea60() {
   return (neuron0x34f7650()*-0.0773256);
}

double NNfunction-ss_dLdL::synapse0x34feaa0() {
   return (neuron0x34f7990()*0.0221663);
}

double NNfunction-ss_dLdL::synapse0x34feae0() {
   return (neuron0x34f7cd0()*0.00673312);
}

double NNfunction-ss_dLdL::synapse0x34feb20() {
   return (neuron0x34f8010()*0.0373023);
}

double NNfunction-ss_dLdL::synapse0x34feb60() {
   return (neuron0x34f8350()*0.0499836);
}

double NNfunction-ss_dLdL::synapse0x34feba0() {
   return (neuron0x34f8690()*-0.292871);
}

double NNfunction-ss_dLdL::synapse0x34febe0() {
   return (neuron0x34f89d0()*0.16343);
}

double NNfunction-ss_dLdL::synapse0x3502d20() {
   return (neuron0x34f8d10()*-0.171426);
}

double NNfunction-ss_dLdL::synapse0x3502d60() {
   return (neuron0x34f9050()*-0.152669);
}

double NNfunction-ss_dLdL::synapse0x3502da0() {
   return (neuron0x34f9390()*-0.149676);
}

double NNfunction-ss_dLdL::synapse0x34fe730() {
   return (neuron0x34f96d0()*-0.174036);
}

double NNfunction-ss_dLdL::synapse0x34fe770() {
   return (neuron0x34f9c30()*0.0507182);
}

double NNfunction-ss_dLdL::synapse0x3502ef0() {
   return (neuron0x34f9e50()*0.0130831);
}

double NNfunction-ss_dLdL::synapse0x3502f30() {
   return (neuron0x34fa190()*-0.013655);
}

double NNfunction-ss_dLdL::synapse0x3502f70() {
   return (neuron0x34fa4d0()*0.0417165);
}

double NNfunction-ss_dLdL::synapse0x3502fb0() {
   return (neuron0x34fa810()*0.0270273);
}

double NNfunction-ss_dLdL::synapse0x3502ff0() {
   return (neuron0x34fab50()*-0.023207);
}

double NNfunction-ss_dLdL::synapse0x3503030() {
   return (neuron0x34fae90()*0.0783235);
}

double NNfunction-ss_dLdL::synapse0x35033b0() {
   return (neuron0x34f6360()*0.0571225);
}

double NNfunction-ss_dLdL::synapse0x35033f0() {
   return (neuron0x34f6610()*0.198022);
}

double NNfunction-ss_dLdL::synapse0x3503430() {
   return (neuron0x34f6950()*-0.54762);
}

double NNfunction-ss_dLdL::synapse0x3503470() {
   return (neuron0x34f6c90()*2.63724);
}

double NNfunction-ss_dLdL::synapse0x35034b0() {
   return (neuron0x34f6fd0()*0.209796);
}

double NNfunction-ss_dLdL::synapse0x35034f0() {
   return (neuron0x34f7310()*-0.213343);
}

double NNfunction-ss_dLdL::synapse0x3503530() {
   return (neuron0x34f7650()*-0.874058);
}

double NNfunction-ss_dLdL::synapse0x3503570() {
   return (neuron0x34f7990()*-0.701798);
}

double NNfunction-ss_dLdL::synapse0x35035b0() {
   return (neuron0x34f7cd0()*-0.375584);
}

double NNfunction-ss_dLdL::synapse0x35035f0() {
   return (neuron0x34f8010()*-1.34425);
}

double NNfunction-ss_dLdL::synapse0x3503630() {
   return (neuron0x34f8350()*-0.700726);
}

double NNfunction-ss_dLdL::synapse0x3503670() {
   return (neuron0x34f8690()*0.00624083);
}

double NNfunction-ss_dLdL::synapse0x35036b0() {
   return (neuron0x34f89d0()*0.178516);
}

double NNfunction-ss_dLdL::synapse0x35036f0() {
   return (neuron0x34f8d10()*0.881697);
}

double NNfunction-ss_dLdL::synapse0x3503730() {
   return (neuron0x34f9050()*0.102874);
}

double NNfunction-ss_dLdL::synapse0x3503770() {
   return (neuron0x34f9390()*0.494367);
}

double NNfunction-ss_dLdL::synapse0x3503200() {
   return (neuron0x34f96d0()*0.0673367);
}

double NNfunction-ss_dLdL::synapse0x3503240() {
   return (neuron0x34f9c30()*0.165631);
}

double NNfunction-ss_dLdL::synapse0x35038c0() {
   return (neuron0x34f9e50()*1.61727);
}

double NNfunction-ss_dLdL::synapse0x3503900() {
   return (neuron0x34fa190()*0.83688);
}

double NNfunction-ss_dLdL::synapse0x3503940() {
   return (neuron0x34fa4d0()*-1.45257);
}

double NNfunction-ss_dLdL::synapse0x3503980() {
   return (neuron0x34fa810()*-0.175613);
}

double NNfunction-ss_dLdL::synapse0x35039c0() {
   return (neuron0x34fab50()*1.07771);
}

double NNfunction-ss_dLdL::synapse0x3503a00() {
   return (neuron0x34fae90()*0.150302);
}

double NNfunction-ss_dLdL::synapse0x3503d80() {
   return (neuron0x34f6360()*-0.0637607);
}

double NNfunction-ss_dLdL::synapse0x3503dc0() {
   return (neuron0x34f6610()*0.136695);
}

double NNfunction-ss_dLdL::synapse0x3503e00() {
   return (neuron0x34f6950()*0.211303);
}

double NNfunction-ss_dLdL::synapse0x3503e40() {
   return (neuron0x34f6c90()*-0.657672);
}

double NNfunction-ss_dLdL::synapse0x3503e80() {
   return (neuron0x34f6fd0()*-0.024938);
}

double NNfunction-ss_dLdL::synapse0x3503ec0() {
   return (neuron0x34f7310()*0.0597146);
}

double NNfunction-ss_dLdL::synapse0x3503f00() {
   return (neuron0x34f7650()*0.126625);
}

double NNfunction-ss_dLdL::synapse0x3503f40() {
   return (neuron0x34f7990()*-0.133308);
}

double NNfunction-ss_dLdL::synapse0x3503f80() {
   return (neuron0x34f7cd0()*-0.0355102);
}

double NNfunction-ss_dLdL::synapse0x3503fc0() {
   return (neuron0x34f8010()*0.0402395);
}

double NNfunction-ss_dLdL::synapse0x3504000() {
   return (neuron0x34f8350()*0.0116988);
}

double NNfunction-ss_dLdL::synapse0x3504040() {
   return (neuron0x34f8690()*0.494902);
}

double NNfunction-ss_dLdL::synapse0x3504080() {
   return (neuron0x34f89d0()*0.052439);
}

double NNfunction-ss_dLdL::synapse0x35040c0() {
   return (neuron0x34f8d10()*0.4204);
}

double NNfunction-ss_dLdL::synapse0x3504100() {
   return (neuron0x34f9050()*0.191899);
}

double NNfunction-ss_dLdL::synapse0x3504140() {
   return (neuron0x34f9390()*-0.95394);
}

double NNfunction-ss_dLdL::synapse0x3503bd0() {
   return (neuron0x34f96d0()*0.0890515);
}

double NNfunction-ss_dLdL::synapse0x3503c10() {
   return (neuron0x34f9c30()*-0.040247);
}

double NNfunction-ss_dLdL::synapse0x3504290() {
   return (neuron0x34f9e50()*-0.174918);
}

double NNfunction-ss_dLdL::synapse0x35042d0() {
   return (neuron0x34fa190()*-0.121143);
}

double NNfunction-ss_dLdL::synapse0x3504310() {
   return (neuron0x34fa4d0()*0.0242469);
}

double NNfunction-ss_dLdL::synapse0x3504350() {
   return (neuron0x34fa810()*-0.127676);
}

double NNfunction-ss_dLdL::synapse0x3504390() {
   return (neuron0x34fab50()*-0.0951433);
}

double NNfunction-ss_dLdL::synapse0x35043d0() {
   return (neuron0x34fae90()*-0.0669046);
}

double NNfunction-ss_dLdL::synapse0x3504750() {
   return (neuron0x34f6360()*0.122363);
}

double NNfunction-ss_dLdL::synapse0x3504790() {
   return (neuron0x34f6610()*-0.450172);
}

double NNfunction-ss_dLdL::synapse0x35047d0() {
   return (neuron0x34f6950()*-0.356685);
}

double NNfunction-ss_dLdL::synapse0x3504810() {
   return (neuron0x34f6c90()*-0.484355);
}

double NNfunction-ss_dLdL::synapse0x3504850() {
   return (neuron0x34f6fd0()*0.566314);
}

double NNfunction-ss_dLdL::synapse0x3504890() {
   return (neuron0x34f7310()*0.480074);
}

double NNfunction-ss_dLdL::synapse0x35048d0() {
   return (neuron0x34f7650()*0.573267);
}

double NNfunction-ss_dLdL::synapse0x3504910() {
   return (neuron0x34f7990()*0.0363528);
}

double NNfunction-ss_dLdL::synapse0x3504950() {
   return (neuron0x34f7cd0()*-0.642706);
}

double NNfunction-ss_dLdL::synapse0x3504990() {
   return (neuron0x34f8010()*0.521632);
}

double NNfunction-ss_dLdL::synapse0x35049d0() {
   return (neuron0x34f8350()*0.755192);
}

double NNfunction-ss_dLdL::synapse0x3504a10() {
   return (neuron0x34f8690()*-0.0868655);
}

double NNfunction-ss_dLdL::synapse0x3504a50() {
   return (neuron0x34f89d0()*-0.23729);
}

double NNfunction-ss_dLdL::synapse0x3504a90() {
   return (neuron0x34f8d10()*-0.0816436);
}

double NNfunction-ss_dLdL::synapse0x3504ad0() {
   return (neuron0x34f9050()*-0.608622);
}

double NNfunction-ss_dLdL::synapse0x3504b10() {
   return (neuron0x34f9390()*-1.00707);
}

double NNfunction-ss_dLdL::synapse0x35045a0() {
   return (neuron0x34f96d0()*0.05647);
}

double NNfunction-ss_dLdL::synapse0x35045e0() {
   return (neuron0x34f9c30()*-1.09425);
}

double NNfunction-ss_dLdL::synapse0x3504c60() {
   return (neuron0x34f9e50()*-0.396006);
}

double NNfunction-ss_dLdL::synapse0x3504ca0() {
   return (neuron0x34fa190()*0.565757);
}

double NNfunction-ss_dLdL::synapse0x3504ce0() {
   return (neuron0x34fa4d0()*1.31678);
}

double NNfunction-ss_dLdL::synapse0x3504d20() {
   return (neuron0x34fa810()*-0.132193);
}

double NNfunction-ss_dLdL::synapse0x3504d60() {
   return (neuron0x34fab50()*-0.974492);
}

double NNfunction-ss_dLdL::synapse0x3504da0() {
   return (neuron0x34fae90()*0.0746452);
}

double NNfunction-ss_dLdL::synapse0x3505120() {
   return (neuron0x34f6360()*-0.599618);
}

double NNfunction-ss_dLdL::synapse0x34f64f0() {
   return (neuron0x34f6610()*-0.0867405);
}

double NNfunction-ss_dLdL::synapse0x34f6530() {
   return (neuron0x34f6950()*0.163802);
}

double NNfunction-ss_dLdL::synapse0x34f6830() {
   return (neuron0x34f6c90()*-0.344479);
}

double NNfunction-ss_dLdL::synapse0x34f6870() {
   return (neuron0x34f6fd0()*-0.151502);
}

double NNfunction-ss_dLdL::synapse0x34f6b70() {
   return (neuron0x34f7310()*-0.182828);
}

double NNfunction-ss_dLdL::synapse0x34f6bb0() {
   return (neuron0x34f7650()*-0.0416055);
}

double NNfunction-ss_dLdL::synapse0x34f6eb0() {
   return (neuron0x34f7990()*-0.16768);
}

double NNfunction-ss_dLdL::synapse0x34f6ef0() {
   return (neuron0x34f7cd0()*0.237056);
}

double NNfunction-ss_dLdL::synapse0x34f71f0() {
   return (neuron0x34f8010()*0.0152536);
}

double NNfunction-ss_dLdL::synapse0x34f7230() {
   return (neuron0x34f8350()*-0.451623);
}

double NNfunction-ss_dLdL::synapse0x34f7530() {
   return (neuron0x34f8690()*0.184933);
}

double NNfunction-ss_dLdL::synapse0x34f7570() {
   return (neuron0x34f89d0()*0.0965876);
}

double NNfunction-ss_dLdL::synapse0x34f7870() {
   return (neuron0x34f8d10()*0.124136);
}

double NNfunction-ss_dLdL::synapse0x34f78b0() {
   return (neuron0x34f9050()*0.142451);
}

double NNfunction-ss_dLdL::synapse0x34f7bb0() {
   return (neuron0x34f9390()*-0.252951);
}

double NNfunction-ss_dLdL::synapse0x34f7bf0() {
   return (neuron0x34f96d0()*0.0954658);
}

double NNfunction-ss_dLdL::synapse0x34f7ef0() {
   return (neuron0x34f9c30()*-0.369617);
}

double NNfunction-ss_dLdL::synapse0x34f7f30() {
   return (neuron0x34f9e50()*-0.301707);
}

double NNfunction-ss_dLdL::synapse0x34f8230() {
   return (neuron0x34fa190()*-0.147394);
}

double NNfunction-ss_dLdL::synapse0x34f8270() {
   return (neuron0x34fa4d0()*0.0897762);
}

double NNfunction-ss_dLdL::synapse0x34f8570() {
   return (neuron0x34fa810()*-0.324169);
}

double NNfunction-ss_dLdL::synapse0x34f85b0() {
   return (neuron0x34fab50()*0.302196);
}

double NNfunction-ss_dLdL::synapse0x34f88b0() {
   return (neuron0x34fae90()*0.0443629);
}

double NNfunction-ss_dLdL::synapse0x34f88f0() {
   return (neuron0x34f6360()*-0.196005);
}

double NNfunction-ss_dLdL::synapse0x34f95b0() {
   return (neuron0x34f6610()*-0.0371006);
}

double NNfunction-ss_dLdL::synapse0x34f95f0() {
   return (neuron0x34f6950()*-0.685876);
}

double NNfunction-ss_dLdL::synapse0x3504f70() {
   return (neuron0x34f6c90()*0.62538);
}

double NNfunction-ss_dLdL::synapse0x3504fb0() {
   return (neuron0x34f6fd0()*-0.200848);
}

double NNfunction-ss_dLdL::synapse0x34f98f0() {
   return (neuron0x34f7310()*-0.129624);
}

double NNfunction-ss_dLdL::synapse0x34f9930() {
   return (neuron0x34f7650()*-0.164317);
}

double NNfunction-ss_dLdL::synapse0x32b1300() {
   return (neuron0x34f7990()*-0.393171);
}

double NNfunction-ss_dLdL::synapse0x32b1340() {
   return (neuron0x34f7cd0()*-0.487801);
}

double NNfunction-ss_dLdL::synapse0x34fa070() {
   return (neuron0x34f8010()*-0.375111);
}

double NNfunction-ss_dLdL::synapse0x34fa0b0() {
   return (neuron0x34f8350()*0.496422);
}

double NNfunction-ss_dLdL::synapse0x34fa3b0() {
   return (neuron0x34f8690()*1.19585);
}

double NNfunction-ss_dLdL::synapse0x34fa3f0() {
   return (neuron0x34f89d0()*-0.00666986);
}

double NNfunction-ss_dLdL::synapse0x34fa6f0() {
   return (neuron0x34f8d10()*-0.334961);
}

double NNfunction-ss_dLdL::synapse0x34fa730() {
   return (neuron0x34f9050()*-0.362928);
}

double NNfunction-ss_dLdL::synapse0x34faa30() {
   return (neuron0x34f9390()*-0.24706);
}

double NNfunction-ss_dLdL::synapse0x34faa70() {
   return (neuron0x34f96d0()*-0.117356);
}

double NNfunction-ss_dLdL::synapse0x34fad70() {
   return (neuron0x34f9c30()*-0.0885343);
}

double NNfunction-ss_dLdL::synapse0x34fadb0() {
   return (neuron0x34f9e50()*0.194491);
}

double NNfunction-ss_dLdL::synapse0x34fb0b0() {
   return (neuron0x34fa190()*-0.447808);
}

double NNfunction-ss_dLdL::synapse0x34fb0f0() {
   return (neuron0x34fa4d0()*-0.277047);
}

double NNfunction-ss_dLdL::synapse0x34f8bf0() {
   return (neuron0x34fa810()*-0.283412);
}

double NNfunction-ss_dLdL::synapse0x34f8c30() {
   return (neuron0x34fab50()*-0.161385);
}

double NNfunction-ss_dLdL::synapse0x3506e90() {
   return (neuron0x34fae90()*0.160998);
}

double NNfunction-ss_dLdL::synapse0x3507210() {
   return (neuron0x34f6360()*-0.00378425);
}

double NNfunction-ss_dLdL::synapse0x3507250() {
   return (neuron0x34f6610()*0.114868);
}

double NNfunction-ss_dLdL::synapse0x3507290() {
   return (neuron0x34f6950()*-0.546535);
}

double NNfunction-ss_dLdL::synapse0x35072d0() {
   return (neuron0x34f6c90()*0.589932);
}

double NNfunction-ss_dLdL::synapse0x3507310() {
   return (neuron0x34f6fd0()*-0.323546);
}

double NNfunction-ss_dLdL::synapse0x3507350() {
   return (neuron0x34f7310()*0.0825887);
}

double NNfunction-ss_dLdL::synapse0x3507390() {
   return (neuron0x34f7650()*0.189686);
}

double NNfunction-ss_dLdL::synapse0x35073d0() {
   return (neuron0x34f7990()*0.362076);
}

double NNfunction-ss_dLdL::synapse0x3507410() {
   return (neuron0x34f7cd0()*-0.643054);
}

double NNfunction-ss_dLdL::synapse0x3507450() {
   return (neuron0x34f8010()*0.302842);
}

double NNfunction-ss_dLdL::synapse0x3507490() {
   return (neuron0x34f8350()*-0.83035);
}

double NNfunction-ss_dLdL::synapse0x35074d0() {
   return (neuron0x34f8690()*0.74858);
}

double NNfunction-ss_dLdL::synapse0x3507510() {
   return (neuron0x34f89d0()*-0.496255);
}

double NNfunction-ss_dLdL::synapse0x3507550() {
   return (neuron0x34f8d10()*-0.388873);
}

double NNfunction-ss_dLdL::synapse0x3507590() {
   return (neuron0x34f9050()*0.0956614);
}

double NNfunction-ss_dLdL::synapse0x35075d0() {
   return (neuron0x34f9390()*0.152591);
}

double NNfunction-ss_dLdL::synapse0x3507060() {
   return (neuron0x34f96d0()*-0.224932);
}

double NNfunction-ss_dLdL::synapse0x35070a0() {
   return (neuron0x34f9c30()*-0.173154);
}

double NNfunction-ss_dLdL::synapse0x3507720() {
   return (neuron0x34f9e50()*0.68663);
}

double NNfunction-ss_dLdL::synapse0x3507760() {
   return (neuron0x34fa190()*-0.0261206);
}

double NNfunction-ss_dLdL::synapse0x35077a0() {
   return (neuron0x34fa4d0()*-0.682897);
}

double NNfunction-ss_dLdL::synapse0x35077e0() {
   return (neuron0x34fa810()*-0.116443);
}

double NNfunction-ss_dLdL::synapse0x3507820() {
   return (neuron0x34fab50()*0.470385);
}

double NNfunction-ss_dLdL::synapse0x3507860() {
   return (neuron0x34fae90()*-0.0122191);
}

double NNfunction-ss_dLdL::synapse0x3507be0() {
   return (neuron0x34f6360()*0.0283745);
}

double NNfunction-ss_dLdL::synapse0x3507c20() {
   return (neuron0x34f6610()*-0.0401706);
}

double NNfunction-ss_dLdL::synapse0x3507c60() {
   return (neuron0x34f6950()*0.50102);
}

double NNfunction-ss_dLdL::synapse0x3507ca0() {
   return (neuron0x34f6c90()*-0.737538);
}

double NNfunction-ss_dLdL::synapse0x3507ce0() {
   return (neuron0x34f6fd0()*-0.0582349);
}

double NNfunction-ss_dLdL::synapse0x3507d20() {
   return (neuron0x34f7310()*0.0142421);
}

double NNfunction-ss_dLdL::synapse0x3507d60() {
   return (neuron0x34f7650()*-0.0337391);
}

double NNfunction-ss_dLdL::synapse0x3507da0() {
   return (neuron0x34f7990()*0.038607);
}

double NNfunction-ss_dLdL::synapse0x3507de0() {
   return (neuron0x34f7cd0()*0.0146825);
}

double NNfunction-ss_dLdL::synapse0x3507e20() {
   return (neuron0x34f8010()*0.0246002);
}

double NNfunction-ss_dLdL::synapse0x3507e60() {
   return (neuron0x34f8350()*0.0282212);
}

double NNfunction-ss_dLdL::synapse0x3507ea0() {
   return (neuron0x34f8690()*0.473312);
}

double NNfunction-ss_dLdL::synapse0x3507ee0() {
   return (neuron0x34f89d0()*0.00233965);
}

double NNfunction-ss_dLdL::synapse0x3507f20() {
   return (neuron0x34f8d10()*0.00733602);
}

double NNfunction-ss_dLdL::synapse0x3507f60() {
   return (neuron0x34f9050()*0.0558601);
}

double NNfunction-ss_dLdL::synapse0x3507fa0() {
   return (neuron0x34f9390()*-0.0209299);
}

double NNfunction-ss_dLdL::synapse0x3507a30() {
   return (neuron0x34f96d0()*0.0361362);
}

double NNfunction-ss_dLdL::synapse0x3507a70() {
   return (neuron0x34f9c30()*0.0255694);
}

double NNfunction-ss_dLdL::synapse0x35080f0() {
   return (neuron0x34f9e50()*-0.02209);
}

double NNfunction-ss_dLdL::synapse0x3508130() {
   return (neuron0x34fa190()*-0.0331303);
}

double NNfunction-ss_dLdL::synapse0x3508170() {
   return (neuron0x34fa4d0()*0.0209938);
}

double NNfunction-ss_dLdL::synapse0x35081b0() {
   return (neuron0x34fa810()*0.0129776);
}

double NNfunction-ss_dLdL::synapse0x35081f0() {
   return (neuron0x34fab50()*-0.00731918);
}

double NNfunction-ss_dLdL::synapse0x3508230() {
   return (neuron0x34fae90()*0.0436355);
}

double NNfunction-ss_dLdL::synapse0x35085b0() {
   return (neuron0x34f6360()*0.0874813);
}

double NNfunction-ss_dLdL::synapse0x35085f0() {
   return (neuron0x34f6610()*0.176911);
}

double NNfunction-ss_dLdL::synapse0x3508630() {
   return (neuron0x34f6950()*-0.394538);
}

double NNfunction-ss_dLdL::synapse0x3508670() {
   return (neuron0x34f6c90()*-0.35592);
}

double NNfunction-ss_dLdL::synapse0x35086b0() {
   return (neuron0x34f6fd0()*-0.738056);
}

double NNfunction-ss_dLdL::synapse0x35086f0() {
   return (neuron0x34f7310()*-0.0509938);
}

double NNfunction-ss_dLdL::synapse0x3508730() {
   return (neuron0x34f7650()*-0.19565);
}

double NNfunction-ss_dLdL::synapse0x3508770() {
   return (neuron0x34f7990()*-0.611464);
}

double NNfunction-ss_dLdL::synapse0x35087b0() {
   return (neuron0x34f7cd0()*0.000607896);
}

double NNfunction-ss_dLdL::synapse0x35087f0() {
   return (neuron0x34f8010()*0.1877);
}

double NNfunction-ss_dLdL::synapse0x3508830() {
   return (neuron0x34f8350()*-0.0933292);
}

double NNfunction-ss_dLdL::synapse0x3508870() {
   return (neuron0x34f8690()*-0.235823);
}

double NNfunction-ss_dLdL::synapse0x35088b0() {
   return (neuron0x34f89d0()*-0.111393);
}

double NNfunction-ss_dLdL::synapse0x35088f0() {
   return (neuron0x34f8d10()*-0.00411172);
}

double NNfunction-ss_dLdL::synapse0x3508930() {
   return (neuron0x34f9050()*0.241661);
}

double NNfunction-ss_dLdL::synapse0x3508970() {
   return (neuron0x34f9390()*0.50664);
}

double NNfunction-ss_dLdL::synapse0x3508400() {
   return (neuron0x34f96d0()*-1.17596);
}

double NNfunction-ss_dLdL::synapse0x3508440() {
   return (neuron0x34f9c30()*0.0948319);
}

double NNfunction-ss_dLdL::synapse0x3508ac0() {
   return (neuron0x34f9e50()*0.515732);
}

double NNfunction-ss_dLdL::synapse0x3508b00() {
   return (neuron0x34fa190()*0.230248);
}

double NNfunction-ss_dLdL::synapse0x3508b40() {
   return (neuron0x34fa4d0()*0.492957);
}

double NNfunction-ss_dLdL::synapse0x3508b80() {
   return (neuron0x34fa810()*0.274294);
}

double NNfunction-ss_dLdL::synapse0x3508bc0() {
   return (neuron0x34fab50()*-0.239191);
}

double NNfunction-ss_dLdL::synapse0x3508c00() {
   return (neuron0x34fae90()*-0.301452);
}

double NNfunction-ss_dLdL::synapse0x3508f80() {
   return (neuron0x34f6360()*-0.000408378);
}

double NNfunction-ss_dLdL::synapse0x3508fc0() {
   return (neuron0x34f6610()*-0.00669689);
}

double NNfunction-ss_dLdL::synapse0x3509000() {
   return (neuron0x34f6950()*-0.0384273);
}

double NNfunction-ss_dLdL::synapse0x3509040() {
   return (neuron0x34f6c90()*2.97768);
}

double NNfunction-ss_dLdL::synapse0x3509080() {
   return (neuron0x34f6fd0()*0.00382633);
}

double NNfunction-ss_dLdL::synapse0x35090c0() {
   return (neuron0x34f7310()*-0.000359897);
}

double NNfunction-ss_dLdL::synapse0x3509100() {
   return (neuron0x34f7650()*-0.00407409);
}

double NNfunction-ss_dLdL::synapse0x3509140() {
   return (neuron0x34f7990()*0.00778275);
}

double NNfunction-ss_dLdL::synapse0x3509180() {
   return (neuron0x34f7cd0()*-0.00557928);
}

double NNfunction-ss_dLdL::synapse0x35091c0() {
   return (neuron0x34f8010()*-0.000207157);
}

double NNfunction-ss_dLdL::synapse0x3509200() {
   return (neuron0x34f8350()*0.00613734);
}

double NNfunction-ss_dLdL::synapse0x3509240() {
   return (neuron0x34f8690()*-0.449321);
}

double NNfunction-ss_dLdL::synapse0x3509280() {
   return (neuron0x34f89d0()*0.00688416);
}

double NNfunction-ss_dLdL::synapse0x35092c0() {
   return (neuron0x34f8d10()*-0.0254092);
}

double NNfunction-ss_dLdL::synapse0x3509300() {
   return (neuron0x34f9050()*0.00228918);
}

double NNfunction-ss_dLdL::synapse0x3509340() {
   return (neuron0x34f9390()*0.00589412);
}

double NNfunction-ss_dLdL::synapse0x3508dd0() {
   return (neuron0x34f96d0()*-0.0239656);
}

double NNfunction-ss_dLdL::synapse0x3508e10() {
   return (neuron0x34f9c30()*-0.00371938);
}

double NNfunction-ss_dLdL::synapse0x3509490() {
   return (neuron0x34f9e50()*0.00428571);
}

double NNfunction-ss_dLdL::synapse0x35094d0() {
   return (neuron0x34fa190()*0.0104579);
}

double NNfunction-ss_dLdL::synapse0x3509510() {
   return (neuron0x34fa4d0()*0.00557968);
}

double NNfunction-ss_dLdL::synapse0x3509550() {
   return (neuron0x34fa810()*-0.017897);
}

double NNfunction-ss_dLdL::synapse0x3509590() {
   return (neuron0x34fab50()*0.00434443);
}

double NNfunction-ss_dLdL::synapse0x35095d0() {
   return (neuron0x34fae90()*0.00619676);
}

double NNfunction-ss_dLdL::synapse0x3509950() {
   return (neuron0x34f6360()*-0.178639);
}

double NNfunction-ss_dLdL::synapse0x3509990() {
   return (neuron0x34f6610()*0.124457);
}

double NNfunction-ss_dLdL::synapse0x35099d0() {
   return (neuron0x34f6950()*0.19805);
}

double NNfunction-ss_dLdL::synapse0x3509a10() {
   return (neuron0x34f6c90()*0.125053);
}

double NNfunction-ss_dLdL::synapse0x3509a50() {
   return (neuron0x34f6fd0()*-0.562128);
}

double NNfunction-ss_dLdL::synapse0x3509a90() {
   return (neuron0x34f7310()*-0.0140009);
}

double NNfunction-ss_dLdL::synapse0x3509ad0() {
   return (neuron0x34f7650()*0.259418);
}

double NNfunction-ss_dLdL::synapse0x3509b10() {
   return (neuron0x34f7990()*0.197917);
}

double NNfunction-ss_dLdL::synapse0x3509b50() {
   return (neuron0x34f7cd0()*0.0631937);
}

double NNfunction-ss_dLdL::synapse0x3501d10() {
   return (neuron0x34f8010()*0.501345);
}

double NNfunction-ss_dLdL::synapse0x3501d50() {
   return (neuron0x34f8350()*0.46419);
}

double NNfunction-ss_dLdL::synapse0x3501d90() {
   return (neuron0x34f8690()*-0.352594);
}

double NNfunction-ss_dLdL::synapse0x3501dd0() {
   return (neuron0x34f89d0()*0.399929);
}

double NNfunction-ss_dLdL::synapse0x3501e10() {
   return (neuron0x34f8d10()*-0.199895);
}

double NNfunction-ss_dLdL::synapse0x3501e50() {
   return (neuron0x34f9050()*-0.603699);
}

double NNfunction-ss_dLdL::synapse0x3501e90() {
   return (neuron0x34f9390()*0.028841);
}

double NNfunction-ss_dLdL::synapse0x35097a0() {
   return (neuron0x34f96d0()*-0.11493);
}

double NNfunction-ss_dLdL::synapse0x35097e0() {
   return (neuron0x34f9c30()*0.0593099);
}

double NNfunction-ss_dLdL::synapse0x3501fe0() {
   return (neuron0x34f9e50()*0.864779);
}

double NNfunction-ss_dLdL::synapse0x3502020() {
   return (neuron0x34fa190()*-0.464193);
}

double NNfunction-ss_dLdL::synapse0x3502060() {
   return (neuron0x34fa4d0()*0.56112);
}

double NNfunction-ss_dLdL::synapse0x35020a0() {
   return (neuron0x34fa810()*0.254532);
}

double NNfunction-ss_dLdL::synapse0x35020e0() {
   return (neuron0x34fab50()*-0.509201);
}

double NNfunction-ss_dLdL::synapse0x3502120() {
   return (neuron0x34fae90()*0.114314);
}

double NNfunction-ss_dLdL::synapse0x35024a0() {
   return (neuron0x34f6360()*-0.00863044);
}

double NNfunction-ss_dLdL::synapse0x35024e0() {
   return (neuron0x34f6610()*0.0083721);
}

double NNfunction-ss_dLdL::synapse0x3502520() {
   return (neuron0x34f6950()*-0.452815);
}

double NNfunction-ss_dLdL::synapse0x3502560() {
   return (neuron0x34f6c90()*-0.774846);
}

double NNfunction-ss_dLdL::synapse0x35025a0() {
   return (neuron0x34f6fd0()*0.00219693);
}

double NNfunction-ss_dLdL::synapse0x35025e0() {
   return (neuron0x34f7310()*0.0474507);
}

double NNfunction-ss_dLdL::synapse0x3502620() {
   return (neuron0x34f7650()*-0.0930543);
}

double NNfunction-ss_dLdL::synapse0x3502660() {
   return (neuron0x34f7990()*-0.0204172);
}

double NNfunction-ss_dLdL::synapse0x35026a0() {
   return (neuron0x34f7cd0()*-0.0350157);
}

double NNfunction-ss_dLdL::synapse0x35026e0() {
   return (neuron0x34f8010()*-0.025466);
}

double NNfunction-ss_dLdL::synapse0x3502720() {
   return (neuron0x34f8350()*-0.0372798);
}

double NNfunction-ss_dLdL::synapse0x3502760() {
   return (neuron0x34f8690()*-0.115232);
}

double NNfunction-ss_dLdL::synapse0x35027a0() {
   return (neuron0x34f89d0()*-0.0790252);
}

double NNfunction-ss_dLdL::synapse0x35027e0() {
   return (neuron0x34f8d10()*0.0210326);
}

double NNfunction-ss_dLdL::synapse0x3502820() {
   return (neuron0x34f9050()*0.0689025);
}

double NNfunction-ss_dLdL::synapse0x3502860() {
   return (neuron0x34f9390()*-0.0341912);
}

double NNfunction-ss_dLdL::synapse0x35022f0() {
   return (neuron0x34f96d0()*0.0850726);
}

double NNfunction-ss_dLdL::synapse0x3502330() {
   return (neuron0x34f9c30()*0.00643298);
}

double NNfunction-ss_dLdL::synapse0x35029b0() {
   return (neuron0x34f9e50()*-0.0269169);
}

double NNfunction-ss_dLdL::synapse0x35029f0() {
   return (neuron0x34fa190()*-0.0370168);
}

double NNfunction-ss_dLdL::synapse0x3502a30() {
   return (neuron0x34fa4d0()*-0.0242026);
}

double NNfunction-ss_dLdL::synapse0x3502a70() {
   return (neuron0x34fa810()*0.00834563);
}

double NNfunction-ss_dLdL::synapse0x3502ab0() {
   return (neuron0x34fab50()*-0.001794);
}

double NNfunction-ss_dLdL::synapse0x3502af0() {
   return (neuron0x34fae90()*0.0387328);
}

double NNfunction-ss_dLdL::synapse0x3502cc0() {
   return (neuron0x34f6360()*-0.0100238);
}

double NNfunction-ss_dLdL::synapse0x350bd50() {
   return (neuron0x34f6610()*0.00691208);
}

double NNfunction-ss_dLdL::synapse0x350bd90() {
   return (neuron0x34f6950()*-0.328794);
}

double NNfunction-ss_dLdL::synapse0x350bdd0() {
   return (neuron0x34f6c90()*-0.279624);
}

double NNfunction-ss_dLdL::synapse0x350be10() {
   return (neuron0x34f6fd0()*-0.0194951);
}

double NNfunction-ss_dLdL::synapse0x350be50() {
   return (neuron0x34f7310()*-0.0795835);
}

double NNfunction-ss_dLdL::synapse0x350be90() {
   return (neuron0x34f7650()*0.0127515);
}

double NNfunction-ss_dLdL::synapse0x350bed0() {
   return (neuron0x34f7990()*-0.0471311);
}

double NNfunction-ss_dLdL::synapse0x350bf10() {
   return (neuron0x34f7cd0()*-0.0144662);
}

double NNfunction-ss_dLdL::synapse0x350bf50() {
   return (neuron0x34f8010()*-0.0236913);
}

double NNfunction-ss_dLdL::synapse0x350bf90() {
   return (neuron0x34f8350()*-0.0265608);
}

double NNfunction-ss_dLdL::synapse0x350bfd0() {
   return (neuron0x34f8690()*-0.247619);
}

double NNfunction-ss_dLdL::synapse0x350c010() {
   return (neuron0x34f89d0()*-0.0897636);
}

double NNfunction-ss_dLdL::synapse0x350c050() {
   return (neuron0x34f8d10()*-0.000331895);
}

double NNfunction-ss_dLdL::synapse0x350c090() {
   return (neuron0x34f9050()*-0.0840416);
}

double NNfunction-ss_dLdL::synapse0x350c0d0() {
   return (neuron0x34f9390()*-0.0194547);
}

double NNfunction-ss_dLdL::synapse0x350bba0() {
   return (neuron0x34f96d0()*-0.0178512);
}

double NNfunction-ss_dLdL::synapse0x350bbe0() {
   return (neuron0x34f9c30()*-0.0548508);
}

double NNfunction-ss_dLdL::synapse0x350c220() {
   return (neuron0x34f9e50()*-0.065439);
}

double NNfunction-ss_dLdL::synapse0x350c260() {
   return (neuron0x34fa190()*0.0075982);
}

double NNfunction-ss_dLdL::synapse0x350c2a0() {
   return (neuron0x34fa4d0()*-0.0285437);
}

double NNfunction-ss_dLdL::synapse0x350c2e0() {
   return (neuron0x34fa810()*-0.0129871);
}

double NNfunction-ss_dLdL::synapse0x350c320() {
   return (neuron0x34fab50()*0.0075146);
}

double NNfunction-ss_dLdL::synapse0x350c360() {
   return (neuron0x34fae90()*-0.00810751);
}

double NNfunction-ss_dLdL::synapse0x350c6e0() {
   return (neuron0x34f6360()*-0.0676313);
}

double NNfunction-ss_dLdL::synapse0x350c720() {
   return (neuron0x34f6610()*0.124475);
}

double NNfunction-ss_dLdL::synapse0x350c760() {
   return (neuron0x34f6950()*-0.196549);
}

double NNfunction-ss_dLdL::synapse0x350c7a0() {
   return (neuron0x34f6c90()*-0.293658);
}

double NNfunction-ss_dLdL::synapse0x350c7e0() {
   return (neuron0x34f6fd0()*-0.246732);
}

double NNfunction-ss_dLdL::synapse0x350c820() {
   return (neuron0x34f7310()*-0.00911697);
}

double NNfunction-ss_dLdL::synapse0x350c860() {
   return (neuron0x34f7650()*-0.0668663);
}

double NNfunction-ss_dLdL::synapse0x350c8a0() {
   return (neuron0x34f7990()*-0.26499);
}

double NNfunction-ss_dLdL::synapse0x350c8e0() {
   return (neuron0x34f7cd0()*0.118504);
}

double NNfunction-ss_dLdL::synapse0x350c920() {
   return (neuron0x34f8010()*-0.00773402);
}

double NNfunction-ss_dLdL::synapse0x350c960() {
   return (neuron0x34f8350()*-0.146301);
}

double NNfunction-ss_dLdL::synapse0x350c9a0() {
   return (neuron0x34f8690()*0.964347);
}

double NNfunction-ss_dLdL::synapse0x350c9e0() {
   return (neuron0x34f89d0()*0.378508);
}

double NNfunction-ss_dLdL::synapse0x350ca20() {
   return (neuron0x34f8d10()*0.978061);
}

double NNfunction-ss_dLdL::synapse0x350ca60() {
   return (neuron0x34f9050()*-0.0769565);
}

double NNfunction-ss_dLdL::synapse0x350caa0() {
   return (neuron0x34f9390()*0.0394534);
}

double NNfunction-ss_dLdL::synapse0x350c530() {
   return (neuron0x34f96d0()*-0.143878);
}

double NNfunction-ss_dLdL::synapse0x350c570() {
   return (neuron0x34f9c30()*-0.161151);
}

double NNfunction-ss_dLdL::synapse0x350cbf0() {
   return (neuron0x34f9e50()*0.172932);
}

double NNfunction-ss_dLdL::synapse0x350cc30() {
   return (neuron0x34fa190()*0.282768);
}

double NNfunction-ss_dLdL::synapse0x350cc70() {
   return (neuron0x34fa4d0()*-0.291976);
}

double NNfunction-ss_dLdL::synapse0x350ccb0() {
   return (neuron0x34fa810()*0.245879);
}

double NNfunction-ss_dLdL::synapse0x350ccf0() {
   return (neuron0x34fab50()*0.0224917);
}

double NNfunction-ss_dLdL::synapse0x350cd30() {
   return (neuron0x34fae90()*-0.0682456);
}

double NNfunction-ss_dLdL::synapse0x350d0b0() {
   return (neuron0x34f6360()*-0.0536891);
}

double NNfunction-ss_dLdL::synapse0x350d0f0() {
   return (neuron0x34f6610()*-0.302628);
}

double NNfunction-ss_dLdL::synapse0x350d130() {
   return (neuron0x34f6950()*-0.292957);
}

double NNfunction-ss_dLdL::synapse0x350d170() {
   return (neuron0x34f6c90()*-0.634982);
}

double NNfunction-ss_dLdL::synapse0x350d1b0() {
   return (neuron0x34f6fd0()*-0.204092);
}

double NNfunction-ss_dLdL::synapse0x350d1f0() {
   return (neuron0x34f7310()*0.738644);
}

double NNfunction-ss_dLdL::synapse0x350d230() {
   return (neuron0x34f7650()*0.107336);
}

double NNfunction-ss_dLdL::synapse0x350d270() {
   return (neuron0x34f7990()*0.628359);
}

double NNfunction-ss_dLdL::synapse0x350d2b0() {
   return (neuron0x34f7cd0()*0.0925622);
}

double NNfunction-ss_dLdL::synapse0x350d2f0() {
   return (neuron0x34f8010()*-0.324003);
}

double NNfunction-ss_dLdL::synapse0x350d330() {
   return (neuron0x34f8350()*0.255358);
}

double NNfunction-ss_dLdL::synapse0x350d370() {
   return (neuron0x34f8690()*-0.59144);
}

double NNfunction-ss_dLdL::synapse0x350d3b0() {
   return (neuron0x34f89d0()*-0.00473417);
}

double NNfunction-ss_dLdL::synapse0x350d3f0() {
   return (neuron0x34f8d10()*-0.144606);
}

double NNfunction-ss_dLdL::synapse0x350d430() {
   return (neuron0x34f9050()*0.0901221);
}

double NNfunction-ss_dLdL::synapse0x350d470() {
   return (neuron0x34f9390()*0.00786471);
}

double NNfunction-ss_dLdL::synapse0x350cf00() {
   return (neuron0x34f96d0()*0.195345);
}

double NNfunction-ss_dLdL::synapse0x350cf40() {
   return (neuron0x34f9c30()*-0.0730069);
}

double NNfunction-ss_dLdL::synapse0x350d5c0() {
   return (neuron0x34f9e50()*0.0415479);
}

double NNfunction-ss_dLdL::synapse0x350d600() {
   return (neuron0x34fa190()*0.307775);
}

double NNfunction-ss_dLdL::synapse0x350d640() {
   return (neuron0x34fa4d0()*-0.26556);
}

double NNfunction-ss_dLdL::synapse0x350d680() {
   return (neuron0x34fa810()*-0.109067);
}

double NNfunction-ss_dLdL::synapse0x350d6c0() {
   return (neuron0x34fab50()*0.175206);
}

double NNfunction-ss_dLdL::synapse0x350d700() {
   return (neuron0x34fae90()*0.0372253);
}

double NNfunction-ss_dLdL::synapse0x350da80() {
   return (neuron0x34f6360()*0.0157774);
}

double NNfunction-ss_dLdL::synapse0x350dac0() {
   return (neuron0x34f6610()*0.000114152);
}

double NNfunction-ss_dLdL::synapse0x350db00() {
   return (neuron0x34f6950()*-0.204434);
}

double NNfunction-ss_dLdL::synapse0x350db40() {
   return (neuron0x34f6c90()*-2.12117);
}

double NNfunction-ss_dLdL::synapse0x350db80() {
   return (neuron0x34f6fd0()*0.0236348);
}

double NNfunction-ss_dLdL::synapse0x350dbc0() {
   return (neuron0x34f7310()*-0.0175808);
}

double NNfunction-ss_dLdL::synapse0x350dc00() {
   return (neuron0x34f7650()*-0.0124975);
}

double NNfunction-ss_dLdL::synapse0x350dc40() {
   return (neuron0x34f7990()*0.00142395);
}

double NNfunction-ss_dLdL::synapse0x350dc80() {
   return (neuron0x34f7cd0()*-0.0016478);
}

double NNfunction-ss_dLdL::synapse0x350dcc0() {
   return (neuron0x34f8010()*-0.0290349);
}

double NNfunction-ss_dLdL::synapse0x350dd00() {
   return (neuron0x34f8350()*-0.00172681);
}

double NNfunction-ss_dLdL::synapse0x350dd40() {
   return (neuron0x34f8690()*1.68725);
}

double NNfunction-ss_dLdL::synapse0x350dd80() {
   return (neuron0x34f89d0()*-0.0341514);
}

double NNfunction-ss_dLdL::synapse0x350ddc0() {
   return (neuron0x34f8d10()*-0.0220679);
}

double NNfunction-ss_dLdL::synapse0x350de00() {
   return (neuron0x34f9050()*-0.0226278);
}

double NNfunction-ss_dLdL::synapse0x350de40() {
   return (neuron0x34f9390()*0.0100272);
}

double NNfunction-ss_dLdL::synapse0x350d8d0() {
   return (neuron0x34f96d0()*-0.0205625);
}

double NNfunction-ss_dLdL::synapse0x350d910() {
   return (neuron0x34f9c30()*-0.0182592);
}

double NNfunction-ss_dLdL::synapse0x350df90() {
   return (neuron0x34f9e50()*-0.0109154);
}

double NNfunction-ss_dLdL::synapse0x350dfd0() {
   return (neuron0x34fa190()*0.00240841);
}

double NNfunction-ss_dLdL::synapse0x350e010() {
   return (neuron0x34fa4d0()*0.0189156);
}

double NNfunction-ss_dLdL::synapse0x350e050() {
   return (neuron0x34fa810()*-0.060668);
}

double NNfunction-ss_dLdL::synapse0x350e090() {
   return (neuron0x34fab50()*0.0211932);
}

double NNfunction-ss_dLdL::synapse0x350e0d0() {
   return (neuron0x34fae90()*-0.00683622);
}

double NNfunction-ss_dLdL::synapse0x350e450() {
   return (neuron0x34f6360()*-0.0715008);
}

double NNfunction-ss_dLdL::synapse0x350e490() {
   return (neuron0x34f6610()*-0.335183);
}

double NNfunction-ss_dLdL::synapse0x350e4d0() {
   return (neuron0x34f6950()*0.842932);
}

double NNfunction-ss_dLdL::synapse0x350e510() {
   return (neuron0x34f6c90()*0.152156);
}

double NNfunction-ss_dLdL::synapse0x350e550() {
   return (neuron0x34f6fd0()*0.00930467);
}

double NNfunction-ss_dLdL::synapse0x350e590() {
   return (neuron0x34f7310()*-0.226298);
}

double NNfunction-ss_dLdL::synapse0x350e5d0() {
   return (neuron0x34f7650()*-0.227388);
}

double NNfunction-ss_dLdL::synapse0x350e610() {
   return (neuron0x34f7990()*-0.0230424);
}

double NNfunction-ss_dLdL::synapse0x350e650() {
   return (neuron0x34f7cd0()*0.36451);
}

double NNfunction-ss_dLdL::synapse0x350e690() {
   return (neuron0x34f8010()*0.354969);
}

double NNfunction-ss_dLdL::synapse0x350e6d0() {
   return (neuron0x34f8350()*0.208172);
}

double NNfunction-ss_dLdL::synapse0x350e710() {
   return (neuron0x34f8690()*0.664654);
}

double NNfunction-ss_dLdL::synapse0x350e750() {
   return (neuron0x34f89d0()*0.241328);
}

double NNfunction-ss_dLdL::synapse0x350e790() {
   return (neuron0x34f8d10()*-0.205642);
}

double NNfunction-ss_dLdL::synapse0x350e7d0() {
   return (neuron0x34f9050()*-0.423115);
}

double NNfunction-ss_dLdL::synapse0x350e810() {
   return (neuron0x34f9390()*0.741359);
}

double NNfunction-ss_dLdL::synapse0x350e2a0() {
   return (neuron0x34f96d0()*-0.245493);
}

double NNfunction-ss_dLdL::synapse0x350e2e0() {
   return (neuron0x34f9c30()*-0.0568105);
}

double NNfunction-ss_dLdL::synapse0x350e960() {
   return (neuron0x34f9e50()*-0.00602837);
}

double NNfunction-ss_dLdL::synapse0x350e9a0() {
   return (neuron0x34fa190()*0.295978);
}

double NNfunction-ss_dLdL::synapse0x350e9e0() {
   return (neuron0x34fa4d0()*0.0112133);
}

double NNfunction-ss_dLdL::synapse0x350ea20() {
   return (neuron0x34fa810()*0.0158731);
}

double NNfunction-ss_dLdL::synapse0x350ea60() {
   return (neuron0x34fab50()*0.12686);
}

double NNfunction-ss_dLdL::synapse0x350eaa0() {
   return (neuron0x34fae90()*-0.112935);
}

double NNfunction-ss_dLdL::synapse0x350ee20() {
   return (neuron0x34f6360()*0.062778);
}

double NNfunction-ss_dLdL::synapse0x350ee60() {
   return (neuron0x34f6610()*-0.287899);
}

double NNfunction-ss_dLdL::synapse0x350eea0() {
   return (neuron0x34f6950()*-0.230366);
}

double NNfunction-ss_dLdL::synapse0x350eee0() {
   return (neuron0x34f6c90()*0.941924);
}

double NNfunction-ss_dLdL::synapse0x350ef20() {
   return (neuron0x34f6fd0()*-0.0277406);
}

double NNfunction-ss_dLdL::synapse0x350ef60() {
   return (neuron0x34f7310()*0.115282);
}

double NNfunction-ss_dLdL::synapse0x350efa0() {
   return (neuron0x34f7650()*-0.0102828);
}

double NNfunction-ss_dLdL::synapse0x350efe0() {
   return (neuron0x34f7990()*-0.0961436);
}

double NNfunction-ss_dLdL::synapse0x350f020() {
   return (neuron0x34f7cd0()*0.0749817);
}

double NNfunction-ss_dLdL::synapse0x350f060() {
   return (neuron0x34f8010()*-0.221558);
}

double NNfunction-ss_dLdL::synapse0x350f0a0() {
   return (neuron0x34f8350()*0.227065);
}

double NNfunction-ss_dLdL::synapse0x350f0e0() {
   return (neuron0x34f8690()*-0.336922);
}

double NNfunction-ss_dLdL::synapse0x350f120() {
   return (neuron0x34f89d0()*0.0129332);
}

double NNfunction-ss_dLdL::synapse0x350f160() {
   return (neuron0x34f8d10()*0.453323);
}

double NNfunction-ss_dLdL::synapse0x350f1a0() {
   return (neuron0x34f9050()*-0.222433);
}

double NNfunction-ss_dLdL::synapse0x350f1e0() {
   return (neuron0x34f9390()*-0.336121);
}

double NNfunction-ss_dLdL::synapse0x350ec70() {
   return (neuron0x34f96d0()*-0.280406);
}

double NNfunction-ss_dLdL::synapse0x350ecb0() {
   return (neuron0x34f9c30()*-0.315972);
}

double NNfunction-ss_dLdL::synapse0x350f330() {
   return (neuron0x34f9e50()*-0.121838);
}

double NNfunction-ss_dLdL::synapse0x350f370() {
   return (neuron0x34fa190()*0.449443);
}

double NNfunction-ss_dLdL::synapse0x350f3b0() {
   return (neuron0x34fa4d0()*0.236031);
}

double NNfunction-ss_dLdL::synapse0x350f3f0() {
   return (neuron0x34fa810()*0.0593421);
}

double NNfunction-ss_dLdL::synapse0x350f430() {
   return (neuron0x34fab50()*-0.156125);
}

double NNfunction-ss_dLdL::synapse0x350f470() {
   return (neuron0x34fae90()*-0.129939);
}

double NNfunction-ss_dLdL::synapse0x350f7f0() {
   return (neuron0x34f6360()*-0.0293963);
}

double NNfunction-ss_dLdL::synapse0x350f830() {
   return (neuron0x34f6610()*-0.00497968);
}

double NNfunction-ss_dLdL::synapse0x350f870() {
   return (neuron0x34f6950()*0.00329333);
}

double NNfunction-ss_dLdL::synapse0x350f8b0() {
   return (neuron0x34f6c90()*0.0863747);
}

double NNfunction-ss_dLdL::synapse0x350f8f0() {
   return (neuron0x34f6fd0()*-0.000639871);
}

double NNfunction-ss_dLdL::synapse0x350f930() {
   return (neuron0x34f7310()*0.0192595);
}

double NNfunction-ss_dLdL::synapse0x350f970() {
   return (neuron0x34f7650()*-0.0205276);
}

double NNfunction-ss_dLdL::synapse0x350f9b0() {
   return (neuron0x34f7990()*0.000345855);
}

double NNfunction-ss_dLdL::synapse0x350f9f0() {
   return (neuron0x34f7cd0()*0.0349058);
}

double NNfunction-ss_dLdL::synapse0x350fa30() {
   return (neuron0x34f8010()*-0.0255153);
}

double NNfunction-ss_dLdL::synapse0x350fa70() {
   return (neuron0x34f8350()*-0.0637239);
}

double NNfunction-ss_dLdL::synapse0x350fab0() {
   return (neuron0x34f8690()*0.883878);
}

double NNfunction-ss_dLdL::synapse0x350faf0() {
   return (neuron0x34f89d0()*-0.103822);
}

double NNfunction-ss_dLdL::synapse0x350fb30() {
   return (neuron0x34f8d10()*-0.00191029);
}

double NNfunction-ss_dLdL::synapse0x350fb70() {
   return (neuron0x34f9050()*0.00979902);
}

double NNfunction-ss_dLdL::synapse0x350fbb0() {
   return (neuron0x34f9390()*-0.0169062);
}

double NNfunction-ss_dLdL::synapse0x350f640() {
   return (neuron0x34f96d0()*0.0247556);
}

double NNfunction-ss_dLdL::synapse0x350f680() {
   return (neuron0x34f9c30()*0.0635927);
}

double NNfunction-ss_dLdL::synapse0x350fd00() {
   return (neuron0x34f9e50()*0.0117614);
}

double NNfunction-ss_dLdL::synapse0x350fd40() {
   return (neuron0x34fa190()*-0.0580264);
}

double NNfunction-ss_dLdL::synapse0x350fd80() {
   return (neuron0x34fa4d0()*0.00757734);
}

double NNfunction-ss_dLdL::synapse0x350fdc0() {
   return (neuron0x34fa810()*-0.0288638);
}

double NNfunction-ss_dLdL::synapse0x350fe00() {
   return (neuron0x34fab50()*0.028092);
}

double NNfunction-ss_dLdL::synapse0x350fe40() {
   return (neuron0x34fae90()*-0.000941806);
}

double NNfunction-ss_dLdL::synapse0x35101c0() {
   return (neuron0x34f6360()*0.194989);
}

double NNfunction-ss_dLdL::synapse0x3510200() {
   return (neuron0x34f6610()*0.193056);
}

double NNfunction-ss_dLdL::synapse0x3510240() {
   return (neuron0x34f6950()*0.779045);
}

double NNfunction-ss_dLdL::synapse0x3510280() {
   return (neuron0x34f6c90()*0.369642);
}

double NNfunction-ss_dLdL::synapse0x35102c0() {
   return (neuron0x34f6fd0()*0.552391);
}

double NNfunction-ss_dLdL::synapse0x3510300() {
   return (neuron0x34f7310()*-0.00880183);
}

double NNfunction-ss_dLdL::synapse0x3510340() {
   return (neuron0x34f7650()*0.37571);
}

double NNfunction-ss_dLdL::synapse0x3510380() {
   return (neuron0x34f7990()*0.377786);
}

double NNfunction-ss_dLdL::synapse0x35103c0() {
   return (neuron0x34f7cd0()*-0.498398);
}

double NNfunction-ss_dLdL::synapse0x3510400() {
   return (neuron0x34f8010()*-0.134959);
}

double NNfunction-ss_dLdL::synapse0x3510440() {
   return (neuron0x34f8350()*-0.334764);
}

double NNfunction-ss_dLdL::synapse0x3510480() {
   return (neuron0x34f8690()*-0.212576);
}

double NNfunction-ss_dLdL::synapse0x35104c0() {
   return (neuron0x34f89d0()*-0.650974);
}

double NNfunction-ss_dLdL::synapse0x3510500() {
   return (neuron0x34f8d10()*-0.319575);
}

double NNfunction-ss_dLdL::synapse0x3510540() {
   return (neuron0x34f9050()*-0.0788834);
}

double NNfunction-ss_dLdL::synapse0x3510580() {
   return (neuron0x34f9390()*-0.336104);
}

double NNfunction-ss_dLdL::synapse0x3510010() {
   return (neuron0x34f96d0()*0.0992057);
}

double NNfunction-ss_dLdL::synapse0x3510050() {
   return (neuron0x34f9c30()*0.407008);
}

double NNfunction-ss_dLdL::synapse0x35106d0() {
   return (neuron0x34f9e50()*0.66655);
}

double NNfunction-ss_dLdL::synapse0x3510710() {
   return (neuron0x34fa190()*0.859074);
}

double NNfunction-ss_dLdL::synapse0x3510750() {
   return (neuron0x34fa4d0()*-0.289385);
}

double NNfunction-ss_dLdL::synapse0x3510790() {
   return (neuron0x34fa810()*0.428751);
}

double NNfunction-ss_dLdL::synapse0x35107d0() {
   return (neuron0x34fab50()*0.0977705);
}

double NNfunction-ss_dLdL::synapse0x3510810() {
   return (neuron0x34fae90()*-0.309389);
}

double NNfunction-ss_dLdL::synapse0x3510b90() {
   return (neuron0x34f6360()*-0.0871013);
}

double NNfunction-ss_dLdL::synapse0x3505160() {
   return (neuron0x34f6610()*0.152867);
}

double NNfunction-ss_dLdL::synapse0x35051a0() {
   return (neuron0x34f6950()*0.137136);
}

double NNfunction-ss_dLdL::synapse0x35051e0() {
   return (neuron0x34f6c90()*0.828912);
}

double NNfunction-ss_dLdL::synapse0x3505430() {
   return (neuron0x34f6fd0()*-0.465305);
}

double NNfunction-ss_dLdL::synapse0x3505470() {
   return (neuron0x34f7310()*-0.202819);
}

double NNfunction-ss_dLdL::synapse0x35054b0() {
   return (neuron0x34f7650()*0.268463);
}

double NNfunction-ss_dLdL::synapse0x3505700() {
   return (neuron0x34f7990()*0.147041);
}

double NNfunction-ss_dLdL::synapse0x3505740() {
   return (neuron0x34f7cd0()*-0.168755);
}

double NNfunction-ss_dLdL::synapse0x3505990() {
   return (neuron0x34f8010()*0.241107);
}

double NNfunction-ss_dLdL::synapse0x35059d0() {
   return (neuron0x34f8350()*0.190998);
}

double NNfunction-ss_dLdL::synapse0x3505a10() {
   return (neuron0x34f8690()*-0.0277558);
}

double NNfunction-ss_dLdL::synapse0x3505c60() {
   return (neuron0x34f89d0()*0.126005);
}

double NNfunction-ss_dLdL::synapse0x3505ca0() {
   return (neuron0x34f8d10()*-0.112342);
}

double NNfunction-ss_dLdL::synapse0x3505ef0() {
   return (neuron0x34f9050()*-0.429374);
}

double NNfunction-ss_dLdL::synapse0x3505f30() {
   return (neuron0x34f9390()*-0.072561);
}

double NNfunction-ss_dLdL::synapse0x35109e0() {
   return (neuron0x34f96d0()*0.11099);
}

double NNfunction-ss_dLdL::synapse0x3510a20() {
   return (neuron0x34f9c30()*-0.189706);
}

double NNfunction-ss_dLdL::synapse0x3506080() {
   return (neuron0x34f9e50()*1.06288);
}

double NNfunction-ss_dLdL::synapse0x3506590() {
   return (neuron0x34fa190()*-0.301964);
}

double NNfunction-ss_dLdL::synapse0x35065d0() {
   return (neuron0x34fa4d0()*0.339315);
}

double NNfunction-ss_dLdL::synapse0x3506610() {
   return (neuron0x34fa810()*0.176066);
}

double NNfunction-ss_dLdL::synapse0x3506860() {
   return (neuron0x34fab50()*-0.27756);
}

double NNfunction-ss_dLdL::synapse0x35068a0() {
   return (neuron0x34fae90()*-0.0619299);
}

double NNfunction-ss_dLdL::synapse0x3506150() {
   return (neuron0x34f6360()*-0.0143245);
}

double NNfunction-ss_dLdL::synapse0x3506190() {
   return (neuron0x34f6610()*0.00364693);
}

double NNfunction-ss_dLdL::synapse0x35061d0() {
   return (neuron0x34f6950()*0.0659008);
}

double NNfunction-ss_dLdL::synapse0x3506210() {
   return (neuron0x34f6c90()*2.85243);
}

double NNfunction-ss_dLdL::synapse0x3506b90() {
   return (neuron0x34f6fd0()*-0.00239619);
}

double NNfunction-ss_dLdL::synapse0x3512ee0() {
   return (neuron0x34f7310()*0.00315643);
}

double NNfunction-ss_dLdL::synapse0x3512f20() {
   return (neuron0x34f7650()*0.0223225);
}

double NNfunction-ss_dLdL::synapse0x3512f60() {
   return (neuron0x34f7990()*0.00132591);
}

double NNfunction-ss_dLdL::synapse0x3512fa0() {
   return (neuron0x34f7cd0()*0.0230493);
}

double NNfunction-ss_dLdL::synapse0x3512fe0() {
   return (neuron0x34f8010()*0.00749016);
}

double NNfunction-ss_dLdL::synapse0x3513020() {
   return (neuron0x34f8350()*-0.00691822);
}

double NNfunction-ss_dLdL::synapse0x3513060() {
   return (neuron0x34f8690()*-0.0469937);
}

double NNfunction-ss_dLdL::synapse0x35130a0() {
   return (neuron0x34f89d0()*0.00992911);
}

double NNfunction-ss_dLdL::synapse0x35130e0() {
   return (neuron0x34f8d10()*0.0493981);
}

double NNfunction-ss_dLdL::synapse0x3513120() {
   return (neuron0x34f9050()*0.000571682);
}

double NNfunction-ss_dLdL::synapse0x3513160() {
   return (neuron0x34f9390()*0.0043023);
}

double NNfunction-ss_dLdL::synapse0x3506a70() {
   return (neuron0x34f96d0()*0.0185299);
}

double NNfunction-ss_dLdL::synapse0x3506ab0() {
   return (neuron0x34f9c30()*-0.0117713);
}

double NNfunction-ss_dLdL::synapse0x35132b0() {
   return (neuron0x34f9e50()*-0.00472047);
}

double NNfunction-ss_dLdL::synapse0x35132f0() {
   return (neuron0x34fa190()*0.00268159);
}

double NNfunction-ss_dLdL::synapse0x3513330() {
   return (neuron0x34fa4d0()*0.00348472);
}

double NNfunction-ss_dLdL::synapse0x3513370() {
   return (neuron0x34fa810()*0.016364);
}

double NNfunction-ss_dLdL::synapse0x35133b0() {
   return (neuron0x34fab50()*-0.00691438);
}

double NNfunction-ss_dLdL::synapse0x35133f0() {
   return (neuron0x34fae90()*-0.000517152);
}

double NNfunction-ss_dLdL::synapse0x3513770() {
   return (neuron0x34f6360()*0.157386);
}

double NNfunction-ss_dLdL::synapse0x35137b0() {
   return (neuron0x34f6610()*-0.104573);
}

double NNfunction-ss_dLdL::synapse0x35137f0() {
   return (neuron0x34f6950()*0.228901);
}

double NNfunction-ss_dLdL::synapse0x3513830() {
   return (neuron0x34f6c90()*0.327129);
}

double NNfunction-ss_dLdL::synapse0x3513870() {
   return (neuron0x34f6fd0()*-0.269475);
}

double NNfunction-ss_dLdL::synapse0x35138b0() {
   return (neuron0x34f7310()*0.0930125);
}

double NNfunction-ss_dLdL::synapse0x35138f0() {
   return (neuron0x34f7650()*0.0266692);
}

double NNfunction-ss_dLdL::synapse0x3513930() {
   return (neuron0x34f7990()*0.113658);
}

double NNfunction-ss_dLdL::synapse0x3513970() {
   return (neuron0x34f7cd0()*0.69983);
}

double NNfunction-ss_dLdL::synapse0x35139b0() {
   return (neuron0x34f8010()*0.0170749);
}

double NNfunction-ss_dLdL::synapse0x35139f0() {
   return (neuron0x34f8350()*0.529134);
}

double NNfunction-ss_dLdL::synapse0x3513a30() {
   return (neuron0x34f8690()*0.259631);
}

double NNfunction-ss_dLdL::synapse0x3513a70() {
   return (neuron0x34f89d0()*0.709037);
}

double NNfunction-ss_dLdL::synapse0x3513ab0() {
   return (neuron0x34f8d10()*0.17405);
}

double NNfunction-ss_dLdL::synapse0x3513af0() {
   return (neuron0x34f9050()*-0.522356);
}

double NNfunction-ss_dLdL::synapse0x3513b30() {
   return (neuron0x34f9390()*-0.176997);
}

double NNfunction-ss_dLdL::synapse0x35135c0() {
   return (neuron0x34f96d0()*-0.317784);
}

double NNfunction-ss_dLdL::synapse0x3513600() {
   return (neuron0x34f9c30()*0.767905);
}

double NNfunction-ss_dLdL::synapse0x3513c80() {
   return (neuron0x34f9e50()*-0.301146);
}

double NNfunction-ss_dLdL::synapse0x3513cc0() {
   return (neuron0x34fa190()*0.15246);
}

double NNfunction-ss_dLdL::synapse0x3513d00() {
   return (neuron0x34fa4d0()*0.189703);
}

double NNfunction-ss_dLdL::synapse0x3513d40() {
   return (neuron0x34fa810()*-0.157856);
}

double NNfunction-ss_dLdL::synapse0x3513d80() {
   return (neuron0x34fab50()*0.252809);
}

double NNfunction-ss_dLdL::synapse0x3513dc0() {
   return (neuron0x34fae90()*0.014446);
}

double NNfunction-ss_dLdL::synapse0x3514140() {
   return (neuron0x34f6360()*-0.267813);
}

double NNfunction-ss_dLdL::synapse0x3514180() {
   return (neuron0x34f6610()*-0.7976);
}

double NNfunction-ss_dLdL::synapse0x35141c0() {
   return (neuron0x34f6950()*1.40052);
}

double NNfunction-ss_dLdL::synapse0x3514200() {
   return (neuron0x34f6c90()*0.292541);
}

double NNfunction-ss_dLdL::synapse0x3514240() {
   return (neuron0x34f6fd0()*0.0930832);
}

double NNfunction-ss_dLdL::synapse0x3514280() {
   return (neuron0x34f7310()*0.133339);
}

double NNfunction-ss_dLdL::synapse0x35142c0() {
   return (neuron0x34f7650()*0.432284);
}

double NNfunction-ss_dLdL::synapse0x3514300() {
   return (neuron0x34f7990()*-0.388493);
}

double NNfunction-ss_dLdL::synapse0x3514340() {
   return (neuron0x34f7cd0()*0.0474567);
}

double NNfunction-ss_dLdL::synapse0x3514380() {
   return (neuron0x34f8010()*0.246582);
}

double NNfunction-ss_dLdL::synapse0x35143c0() {
   return (neuron0x34f8350()*0.113553);
}

double NNfunction-ss_dLdL::synapse0x3514400() {
   return (neuron0x34f8690()*0.240092);
}

double NNfunction-ss_dLdL::synapse0x3514440() {
   return (neuron0x34f89d0()*-0.616084);
}

double NNfunction-ss_dLdL::synapse0x3514480() {
   return (neuron0x34f8d10()*0.0509472);
}

double NNfunction-ss_dLdL::synapse0x35144c0() {
   return (neuron0x34f9050()*0.0755815);
}

double NNfunction-ss_dLdL::synapse0x3514500() {
   return (neuron0x34f9390()*0.540922);
}

double NNfunction-ss_dLdL::synapse0x3513f90() {
   return (neuron0x34f96d0()*0.317729);
}

double NNfunction-ss_dLdL::synapse0x3513fd0() {
   return (neuron0x34f9c30()*-0.0732679);
}

double NNfunction-ss_dLdL::synapse0x3514650() {
   return (neuron0x34f9e50()*-0.416531);
}

double NNfunction-ss_dLdL::synapse0x3514690() {
   return (neuron0x34fa190()*-0.203958);
}

double NNfunction-ss_dLdL::synapse0x35146d0() {
   return (neuron0x34fa4d0()*0.131323);
}

double NNfunction-ss_dLdL::synapse0x3514710() {
   return (neuron0x34fa810()*-0.273709);
}

double NNfunction-ss_dLdL::synapse0x3514750() {
   return (neuron0x34fab50()*-0.280879);
}

double NNfunction-ss_dLdL::synapse0x3514790() {
   return (neuron0x34fae90()*0.119168);
}

double NNfunction-ss_dLdL::synapse0x3514b10() {
   return (neuron0x34f6360()*0.133784);
}

double NNfunction-ss_dLdL::synapse0x3514b50() {
   return (neuron0x34f6610()*0.0101137);
}

double NNfunction-ss_dLdL::synapse0x3514b90() {
   return (neuron0x34f6950()*-0.447355);
}

double NNfunction-ss_dLdL::synapse0x3514bd0() {
   return (neuron0x34f6c90()*0.222124);
}

double NNfunction-ss_dLdL::synapse0x3514c10() {
   return (neuron0x34f6fd0()*-0.222505);
}

double NNfunction-ss_dLdL::synapse0x3514c50() {
   return (neuron0x34f7310()*-0.0954129);
}

double NNfunction-ss_dLdL::synapse0x3514c90() {
   return (neuron0x34f7650()*-0.0376082);
}

double NNfunction-ss_dLdL::synapse0x3514cd0() {
   return (neuron0x34f7990()*0.0550681);
}

double NNfunction-ss_dLdL::synapse0x3514d10() {
   return (neuron0x34f7cd0()*-0.0858164);
}

double NNfunction-ss_dLdL::synapse0x3514d50() {
   return (neuron0x34f8010()*0.00287851);
}

double NNfunction-ss_dLdL::synapse0x3514d90() {
   return (neuron0x34f8350()*-0.0850788);
}

double NNfunction-ss_dLdL::synapse0x3514dd0() {
   return (neuron0x34f8690()*0.454786);
}

double NNfunction-ss_dLdL::synapse0x3514e10() {
   return (neuron0x34f89d0()*0.0870647);
}

double NNfunction-ss_dLdL::synapse0x3514e50() {
   return (neuron0x34f8d10()*-0.0985756);
}

double NNfunction-ss_dLdL::synapse0x3514e90() {
   return (neuron0x34f9050()*0.00628503);
}

double NNfunction-ss_dLdL::synapse0x3514ed0() {
   return (neuron0x34f9390()*0.0859727);
}

double NNfunction-ss_dLdL::synapse0x3514960() {
   return (neuron0x34f96d0()*-0.117846);
}

double NNfunction-ss_dLdL::synapse0x35149a0() {
   return (neuron0x34f9c30()*0.0350764);
}

double NNfunction-ss_dLdL::synapse0x3515020() {
   return (neuron0x34f9e50()*0.0898579);
}

double NNfunction-ss_dLdL::synapse0x3515060() {
   return (neuron0x34fa190()*-0.0444404);
}

double NNfunction-ss_dLdL::synapse0x35150a0() {
   return (neuron0x34fa4d0()*0.0553299);
}

double NNfunction-ss_dLdL::synapse0x35150e0() {
   return (neuron0x34fa810()*0.127787);
}

double NNfunction-ss_dLdL::synapse0x3515120() {
   return (neuron0x34fab50()*0.25583);
}

double NNfunction-ss_dLdL::synapse0x3515160() {
   return (neuron0x34fae90()*-0.11425);
}

double NNfunction-ss_dLdL::synapse0x35154e0() {
   return (neuron0x34f6360()*0.105466);
}

double NNfunction-ss_dLdL::synapse0x3515520() {
   return (neuron0x34f6610()*0.0466831);
}

double NNfunction-ss_dLdL::synapse0x3515560() {
   return (neuron0x34f6950()*0.147892);
}

double NNfunction-ss_dLdL::synapse0x35155a0() {
   return (neuron0x34f6c90()*-0.573712);
}

double NNfunction-ss_dLdL::synapse0x35155e0() {
   return (neuron0x34f6fd0()*-0.00185213);
}

double NNfunction-ss_dLdL::synapse0x3515620() {
   return (neuron0x34f7310()*0.151743);
}

double NNfunction-ss_dLdL::synapse0x3515660() {
   return (neuron0x34f7650()*-0.0373961);
}

double NNfunction-ss_dLdL::synapse0x35156a0() {
   return (neuron0x34f7990()*-0.245648);
}

double NNfunction-ss_dLdL::synapse0x35156e0() {
   return (neuron0x34f7cd0()*-0.0562018);
}

double NNfunction-ss_dLdL::synapse0x3515720() {
   return (neuron0x34f8010()*-0.0909455);
}

double NNfunction-ss_dLdL::synapse0x3515760() {
   return (neuron0x34f8350()*0.01719);
}

double NNfunction-ss_dLdL::synapse0x35157a0() {
   return (neuron0x34f8690()*0.198221);
}

double NNfunction-ss_dLdL::synapse0x35157e0() {
   return (neuron0x34f89d0()*-0.103901);
}

double NNfunction-ss_dLdL::synapse0x3515820() {
   return (neuron0x34f8d10()*0.138804);
}

double NNfunction-ss_dLdL::synapse0x3515860() {
   return (neuron0x34f9050()*-0.42061);
}

double NNfunction-ss_dLdL::synapse0x35158a0() {
   return (neuron0x34f9390()*0.00776664);
}

double NNfunction-ss_dLdL::synapse0x3515330() {
   return (neuron0x34f96d0()*0.190409);
}

double NNfunction-ss_dLdL::synapse0x3515370() {
   return (neuron0x34f9c30()*-0.0426186);
}

double NNfunction-ss_dLdL::synapse0x35159f0() {
   return (neuron0x34f9e50()*-0.0366456);
}

double NNfunction-ss_dLdL::synapse0x3515a30() {
   return (neuron0x34fa190()*-0.0474954);
}

double NNfunction-ss_dLdL::synapse0x3515a70() {
   return (neuron0x34fa4d0()*-0.0924879);
}

double NNfunction-ss_dLdL::synapse0x3515ab0() {
   return (neuron0x34fa810()*0.0587501);
}

double NNfunction-ss_dLdL::synapse0x3515af0() {
   return (neuron0x34fab50()*0.0335901);
}

double NNfunction-ss_dLdL::synapse0x3515b30() {
   return (neuron0x34fae90()*-0.0560386);
}

double NNfunction-ss_dLdL::synapse0x3515eb0() {
   return (neuron0x34f6360()*0.00289774);
}

double NNfunction-ss_dLdL::synapse0x3515ef0() {
   return (neuron0x34f6610()*0.0165597);
}

double NNfunction-ss_dLdL::synapse0x3515f30() {
   return (neuron0x34f6950()*-0.00754099);
}

double NNfunction-ss_dLdL::synapse0x3515f70() {
   return (neuron0x34f6c90()*-2.80026);
}

double NNfunction-ss_dLdL::synapse0x3515fb0() {
   return (neuron0x34f6fd0()*-0.0189627);
}

double NNfunction-ss_dLdL::synapse0x3515ff0() {
   return (neuron0x34f7310()*-0.0206638);
}

double NNfunction-ss_dLdL::synapse0x3516030() {
   return (neuron0x34f7650()*0.00990136);
}

double NNfunction-ss_dLdL::synapse0x3516070() {
   return (neuron0x34f7990()*-0.020677);
}

double NNfunction-ss_dLdL::synapse0x35160b0() {
   return (neuron0x34f7cd0()*-0.0231344);
}

double NNfunction-ss_dLdL::synapse0x35160f0() {
   return (neuron0x34f8010()*-0.0228204);
}

double NNfunction-ss_dLdL::synapse0x3516130() {
   return (neuron0x34f8350()*-0.0248796);
}

double NNfunction-ss_dLdL::synapse0x3516170() {
   return (neuron0x34f8690()*1.34511);
}

double NNfunction-ss_dLdL::synapse0x35161b0() {
   return (neuron0x34f89d0()*0.00151926);
}

double NNfunction-ss_dLdL::synapse0x35161f0() {
   return (neuron0x34f8d10()*0.0104839);
}

double NNfunction-ss_dLdL::synapse0x3516230() {
   return (neuron0x34f9050()*0.0240269);
}

double NNfunction-ss_dLdL::synapse0x3516270() {
   return (neuron0x34f9390()*0.0162533);
}

double NNfunction-ss_dLdL::synapse0x3515d00() {
   return (neuron0x34f96d0()*0.0138222);
}

double NNfunction-ss_dLdL::synapse0x3515d40() {
   return (neuron0x34f9c30()*0.027528);
}

double NNfunction-ss_dLdL::synapse0x35163c0() {
   return (neuron0x34f9e50()*0.00243727);
}

double NNfunction-ss_dLdL::synapse0x3516400() {
   return (neuron0x34fa190()*-0.00563396);
}

double NNfunction-ss_dLdL::synapse0x3516440() {
   return (neuron0x34fa4d0()*-0.0172935);
}

double NNfunction-ss_dLdL::synapse0x3516480() {
   return (neuron0x34fa810()*0.0227518);
}

double NNfunction-ss_dLdL::synapse0x35164c0() {
   return (neuron0x34fab50()*0.016036);
}

double NNfunction-ss_dLdL::synapse0x3516500() {
   return (neuron0x34fae90()*0.0181102);
}

double NNfunction-ss_dLdL::synapse0x3516880() {
   return (neuron0x34f6360()*0.123302);
}

double NNfunction-ss_dLdL::synapse0x35168c0() {
   return (neuron0x34f6610()*0.0845719);
}

double NNfunction-ss_dLdL::synapse0x3516900() {
   return (neuron0x34f6950()*0.0630374);
}

double NNfunction-ss_dLdL::synapse0x3516940() {
   return (neuron0x34f6c90()*0.320381);
}

double NNfunction-ss_dLdL::synapse0x3516980() {
   return (neuron0x34f6fd0()*0.0918454);
}

double NNfunction-ss_dLdL::synapse0x35169c0() {
   return (neuron0x34f7310()*-0.2471);
}

double NNfunction-ss_dLdL::synapse0x3516a00() {
   return (neuron0x34f7650()*-0.388594);
}

double NNfunction-ss_dLdL::synapse0x3516a40() {
   return (neuron0x34f7990()*-0.240296);
}

double NNfunction-ss_dLdL::synapse0x3516a80() {
   return (neuron0x34f7cd0()*0.271893);
}

double NNfunction-ss_dLdL::synapse0x3516ac0() {
   return (neuron0x34f8010()*-0.135709);
}

double NNfunction-ss_dLdL::synapse0x3516b00() {
   return (neuron0x34f8350()*0.221832);
}

double NNfunction-ss_dLdL::synapse0x3516b40() {
   return (neuron0x34f8690()*-0.186669);
}

double NNfunction-ss_dLdL::synapse0x3516b80() {
   return (neuron0x34f89d0()*0.10035);
}

double NNfunction-ss_dLdL::synapse0x3516bc0() {
   return (neuron0x34f8d10()*-0.249868);
}

double NNfunction-ss_dLdL::synapse0x3516c00() {
   return (neuron0x34f9050()*0.126622);
}

double NNfunction-ss_dLdL::synapse0x3516c40() {
   return (neuron0x34f9390()*-0.194907);
}

double NNfunction-ss_dLdL::synapse0x35166d0() {
   return (neuron0x34f96d0()*0.0748554);
}

double NNfunction-ss_dLdL::synapse0x3516710() {
   return (neuron0x34f9c30()*-0.0235985);
}

double NNfunction-ss_dLdL::synapse0x3516d90() {
   return (neuron0x34f9e50()*0.0461874);
}

double NNfunction-ss_dLdL::synapse0x3516dd0() {
   return (neuron0x34fa190()*-0.0858421);
}

double NNfunction-ss_dLdL::synapse0x3516e10() {
   return (neuron0x34fa4d0()*0.549618);
}

double NNfunction-ss_dLdL::synapse0x3516e50() {
   return (neuron0x34fa810()*-0.23906);
}

double NNfunction-ss_dLdL::synapse0x3516e90() {
   return (neuron0x34fab50()*0.0548351);
}

double NNfunction-ss_dLdL::synapse0x3516ed0() {
   return (neuron0x34fae90()*-0.182139);
}

double NNfunction-ss_dLdL::synapse0x3517250() {
   return (neuron0x34f6360()*0.160086);
}

double NNfunction-ss_dLdL::synapse0x3517290() {
   return (neuron0x34f6610()*0.164282);
}

double NNfunction-ss_dLdL::synapse0x35172d0() {
   return (neuron0x34f6950()*-0.0408505);
}

double NNfunction-ss_dLdL::synapse0x3517310() {
   return (neuron0x34f6c90()*-0.0325297);
}

double NNfunction-ss_dLdL::synapse0x3517350() {
   return (neuron0x34f6fd0()*0.451799);
}

double NNfunction-ss_dLdL::synapse0x3517390() {
   return (neuron0x34f7310()*0.140014);
}

double NNfunction-ss_dLdL::synapse0x35173d0() {
   return (neuron0x34f7650()*-0.105911);
}

double NNfunction-ss_dLdL::synapse0x3517410() {
   return (neuron0x34f7990()*0.38958);
}

double NNfunction-ss_dLdL::synapse0x3517450() {
   return (neuron0x34f7cd0()*0.0329035);
}

double NNfunction-ss_dLdL::synapse0x3517490() {
   return (neuron0x34f8010()*0.117416);
}

double NNfunction-ss_dLdL::synapse0x35174d0() {
   return (neuron0x34f8350()*0.0366415);
}

double NNfunction-ss_dLdL::synapse0x3517510() {
   return (neuron0x34f8690()*0.280284);
}

double NNfunction-ss_dLdL::synapse0x3517550() {
   return (neuron0x34f89d0()*-0.0320495);
}

double NNfunction-ss_dLdL::synapse0x3517590() {
   return (neuron0x34f8d10()*0.2107);
}

double NNfunction-ss_dLdL::synapse0x35175d0() {
   return (neuron0x34f9050()*0.427128);
}

double NNfunction-ss_dLdL::synapse0x3517610() {
   return (neuron0x34f9390()*-0.0479352);
}

double NNfunction-ss_dLdL::synapse0x35170a0() {
   return (neuron0x34f96d0()*-0.00535505);
}

double NNfunction-ss_dLdL::synapse0x35170e0() {
   return (neuron0x34f9c30()*-0.133726);
}

double NNfunction-ss_dLdL::synapse0x3517760() {
   return (neuron0x34f9e50()*-0.286284);
}

double NNfunction-ss_dLdL::synapse0x35177a0() {
   return (neuron0x34fa190()*-0.1841);
}

double NNfunction-ss_dLdL::synapse0x35177e0() {
   return (neuron0x34fa4d0()*0.218448);
}

double NNfunction-ss_dLdL::synapse0x3517820() {
   return (neuron0x34fa810()*-0.62865);
}

double NNfunction-ss_dLdL::synapse0x3517860() {
   return (neuron0x34fab50()*0.21812);
}

double NNfunction-ss_dLdL::synapse0x35178a0() {
   return (neuron0x34fae90()*-0.0508558);
}

double NNfunction-ss_dLdL::synapse0x3500350() {
   return (neuron0x34f6360()*0.00645503);
}

double NNfunction-ss_dLdL::synapse0x3500390() {
   return (neuron0x34f6610()*0.00772184);
}

double NNfunction-ss_dLdL::synapse0x35003d0() {
   return (neuron0x34f6950()*-0.129381);
}

double NNfunction-ss_dLdL::synapse0x3500410() {
   return (neuron0x34f6c90()*0.307214);
}

double NNfunction-ss_dLdL::synapse0x3500450() {
   return (neuron0x34f6fd0()*-0.460515);
}

double NNfunction-ss_dLdL::synapse0x3500490() {
   return (neuron0x34f7310()*-0.203036);
}

double NNfunction-ss_dLdL::synapse0x35004d0() {
   return (neuron0x34f7650()*-0.0406336);
}

double NNfunction-ss_dLdL::synapse0x3500510() {
   return (neuron0x34f7990()*-0.00219388);
}

double NNfunction-ss_dLdL::synapse0x3518030() {
   return (neuron0x34f7cd0()*0.00224848);
}

double NNfunction-ss_dLdL::synapse0x3518070() {
   return (neuron0x34f8010()*-0.01984);
}

double NNfunction-ss_dLdL::synapse0x35180b0() {
   return (neuron0x34f8350()*0.133521);
}

double NNfunction-ss_dLdL::synapse0x35180f0() {
   return (neuron0x34f8690()*-1.06123);
}

double NNfunction-ss_dLdL::synapse0x3518130() {
   return (neuron0x34f89d0()*0.187508);
}

double NNfunction-ss_dLdL::synapse0x3518170() {
   return (neuron0x34f8d10()*0.183731);
}

double NNfunction-ss_dLdL::synapse0x35181b0() {
   return (neuron0x34f9050()*-0.308745);
}

double NNfunction-ss_dLdL::synapse0x35181f0() {
   return (neuron0x34f9390()*0.105785);
}

double NNfunction-ss_dLdL::synapse0x3517a70() {
   return (neuron0x34f96d0()*0.208973);
}

double NNfunction-ss_dLdL::synapse0x3517ab0() {
   return (neuron0x34f9c30()*-0.157837);
}

double NNfunction-ss_dLdL::synapse0x3518340() {
   return (neuron0x34f9e50()*0.00945321);
}

double NNfunction-ss_dLdL::synapse0x3518380() {
   return (neuron0x34fa190()*-0.128052);
}

double NNfunction-ss_dLdL::synapse0x35183c0() {
   return (neuron0x34fa4d0()*-0.108404);
}

double NNfunction-ss_dLdL::synapse0x3518400() {
   return (neuron0x34fa810()*-0.0693063);
}

double NNfunction-ss_dLdL::synapse0x3518440() {
   return (neuron0x34fab50()*-0.0463827);
}

double NNfunction-ss_dLdL::synapse0x3518480() {
   return (neuron0x34fae90()*-0.0100604);
}

double NNfunction-ss_dLdL::synapse0x3518800() {
   return (neuron0x34f6360()*-0.00289163);
}

double NNfunction-ss_dLdL::synapse0x3518840() {
   return (neuron0x34f6610()*0.0113815);
}

double NNfunction-ss_dLdL::synapse0x3518880() {
   return (neuron0x34f6950()*-0.202467);
}

double NNfunction-ss_dLdL::synapse0x35188c0() {
   return (neuron0x34f6c90()*-0.0260536);
}

double NNfunction-ss_dLdL::synapse0x3518900() {
   return (neuron0x34f6fd0()*-0.0660842);
}

double NNfunction-ss_dLdL::synapse0x3518940() {
   return (neuron0x34f7310()*0.0363324);
}

double NNfunction-ss_dLdL::synapse0x3518980() {
   return (neuron0x34f7650()*-0.0882077);
}

double NNfunction-ss_dLdL::synapse0x35189c0() {
   return (neuron0x34f7990()*-0.0834517);
}

double NNfunction-ss_dLdL::synapse0x3518a00() {
   return (neuron0x34f7cd0()*0.0493083);
}

double NNfunction-ss_dLdL::synapse0x3518a40() {
   return (neuron0x34f8010()*-0.0951205);
}

double NNfunction-ss_dLdL::synapse0x3518a80() {
   return (neuron0x34f8350()*-0.0724436);
}

double NNfunction-ss_dLdL::synapse0x3518ac0() {
   return (neuron0x34f8690()*-2.3824);
}

double NNfunction-ss_dLdL::synapse0x3518b00() {
   return (neuron0x34f89d0()*-0.136316);
}

double NNfunction-ss_dLdL::synapse0x3518b40() {
   return (neuron0x34f8d10()*-0.142791);
}

double NNfunction-ss_dLdL::synapse0x3518b80() {
   return (neuron0x34f9050()*-0.0795595);
}

double NNfunction-ss_dLdL::synapse0x3518bc0() {
   return (neuron0x34f9390()*-0.0524603);
}

double NNfunction-ss_dLdL::synapse0x3518650() {
   return (neuron0x34f96d0()*-0.0123779);
}

double NNfunction-ss_dLdL::synapse0x3518690() {
   return (neuron0x34f9c30()*-0.0920958);
}

double NNfunction-ss_dLdL::synapse0x3518d10() {
   return (neuron0x34f9e50()*-0.153696);
}

double NNfunction-ss_dLdL::synapse0x3518d50() {
   return (neuron0x34fa190()*-0.103165);
}

double NNfunction-ss_dLdL::synapse0x3518d90() {
   return (neuron0x34fa4d0()*-0.00730976);
}

double NNfunction-ss_dLdL::synapse0x3518dd0() {
   return (neuron0x34fa810()*-0.0375126);
}

double NNfunction-ss_dLdL::synapse0x3518e10() {
   return (neuron0x34fab50()*0.0143215);
}

double NNfunction-ss_dLdL::synapse0x3518e50() {
   return (neuron0x34fae90()*0.0111628);
}

double NNfunction-ss_dLdL::synapse0x35191d0() {
   return (neuron0x34f6360()*0.0132144);
}

double NNfunction-ss_dLdL::synapse0x3519210() {
   return (neuron0x34f6610()*-0.0060176);
}

double NNfunction-ss_dLdL::synapse0x3519250() {
   return (neuron0x34f6950()*-0.0670686);
}

double NNfunction-ss_dLdL::synapse0x3519290() {
   return (neuron0x34f6c90()*0.0855028);
}

double NNfunction-ss_dLdL::synapse0x35192d0() {
   return (neuron0x34f6fd0()*-0.00362287);
}

double NNfunction-ss_dLdL::synapse0x3519310() {
   return (neuron0x34f7310()*-0.0010784);
}

double NNfunction-ss_dLdL::synapse0x3519350() {
   return (neuron0x34f7650()*-0.00646004);
}

double NNfunction-ss_dLdL::synapse0x3519390() {
   return (neuron0x34f7990()*-0.000658596);
}

double NNfunction-ss_dLdL::synapse0x35193d0() {
   return (neuron0x34f7cd0()*-0.0154587);
}

double NNfunction-ss_dLdL::synapse0x3519410() {
   return (neuron0x34f8010()*-0.0494897);
}

double NNfunction-ss_dLdL::synapse0x3519450() {
   return (neuron0x34f8350()*-0.0712508);
}

double NNfunction-ss_dLdL::synapse0x3519490() {
   return (neuron0x34f8690()*-1.08304);
}

double NNfunction-ss_dLdL::synapse0x35194d0() {
   return (neuron0x34f89d0()*-0.155738);
}

double NNfunction-ss_dLdL::synapse0x3519510() {
   return (neuron0x34f8d10()*-0.0579694);
}

double NNfunction-ss_dLdL::synapse0x3519550() {
   return (neuron0x34f9050()*0.0193351);
}

double NNfunction-ss_dLdL::synapse0x3519590() {
   return (neuron0x34f9390()*0.0627196);
}

double NNfunction-ss_dLdL::synapse0x3519020() {
   return (neuron0x34f96d0()*0.0364003);
}

double NNfunction-ss_dLdL::synapse0x3519060() {
   return (neuron0x34f9c30()*0.0682177);
}

double NNfunction-ss_dLdL::synapse0x3509b90() {
   return (neuron0x34f9e50()*-0.0647022);
}

double NNfunction-ss_dLdL::synapse0x3509bd0() {
   return (neuron0x34fa190()*-0.06784);
}

double NNfunction-ss_dLdL::synapse0x3509c10() {
   return (neuron0x34fa4d0()*-0.0158858);
}

double NNfunction-ss_dLdL::synapse0x3509c50() {
   return (neuron0x34fa810()*-0.0573936);
}

double NNfunction-ss_dLdL::synapse0x3509c90() {
   return (neuron0x34fab50()*0.087688);
}

double NNfunction-ss_dLdL::synapse0x3509cd0() {
   return (neuron0x34fae90()*-0.0463665);
}

double NNfunction-ss_dLdL::synapse0x350a050() {
   return (neuron0x34f6360()*-0.0580711);
}

double NNfunction-ss_dLdL::synapse0x350a090() {
   return (neuron0x34f6610()*0.681396);
}

double NNfunction-ss_dLdL::synapse0x350a0d0() {
   return (neuron0x34f6950()*-0.194397);
}

double NNfunction-ss_dLdL::synapse0x350a110() {
   return (neuron0x34f6c90()*1.2391);
}

double NNfunction-ss_dLdL::synapse0x350a150() {
   return (neuron0x34f6fd0()*-0.345169);
}

double NNfunction-ss_dLdL::synapse0x350a190() {
   return (neuron0x34f7310()*0.709152);
}

double NNfunction-ss_dLdL::synapse0x350a1d0() {
   return (neuron0x34f7650()*-0.449763);
}

double NNfunction-ss_dLdL::synapse0x350a210() {
   return (neuron0x34f7990()*-0.920032);
}

double NNfunction-ss_dLdL::synapse0x350a250() {
   return (neuron0x34f7cd0()*-0.294295);
}

double NNfunction-ss_dLdL::synapse0x350a290() {
   return (neuron0x34f8010()*-0.200739);
}

double NNfunction-ss_dLdL::synapse0x350a2d0() {
   return (neuron0x34f8350()*-0.139141);
}

double NNfunction-ss_dLdL::synapse0x350a310() {
   return (neuron0x34f8690()*0.602691);
}

double NNfunction-ss_dLdL::synapse0x350a350() {
   return (neuron0x34f89d0()*0.722757);
}

double NNfunction-ss_dLdL::synapse0x350a390() {
   return (neuron0x34f8d10()*0.407381);
}

double NNfunction-ss_dLdL::synapse0x350a3d0() {
   return (neuron0x34f9050()*0.639647);
}

double NNfunction-ss_dLdL::synapse0x350a410() {
   return (neuron0x34f9390()*0.238019);
}

double NNfunction-ss_dLdL::synapse0x3509ea0() {
   return (neuron0x34f96d0()*-0.29711);
}

double NNfunction-ss_dLdL::synapse0x3509ee0() {
   return (neuron0x34f9c30()*-0.647008);
}

double NNfunction-ss_dLdL::synapse0x350a560() {
   return (neuron0x34f9e50()*0.173984);
}

double NNfunction-ss_dLdL::synapse0x350a5a0() {
   return (neuron0x34fa190()*0.208713);
}

double NNfunction-ss_dLdL::synapse0x350a5e0() {
   return (neuron0x34fa4d0()*-0.570935);
}

double NNfunction-ss_dLdL::synapse0x350a620() {
   return (neuron0x34fa810()*0.361539);
}

double NNfunction-ss_dLdL::synapse0x350a660() {
   return (neuron0x34fab50()*0.00928451);
}

double NNfunction-ss_dLdL::synapse0x350a6a0() {
   return (neuron0x34fae90()*0.0203198);
}

double NNfunction-ss_dLdL::synapse0x350aa20() {
   return (neuron0x34f6360()*0.0191031);
}

double NNfunction-ss_dLdL::synapse0x350aa60() {
   return (neuron0x34f6610()*-0.016462);
}

double NNfunction-ss_dLdL::synapse0x350aaa0() {
   return (neuron0x34f6950()*0.01666);
}

double NNfunction-ss_dLdL::synapse0x350aae0() {
   return (neuron0x34f6c90()*-0.404688);
}

double NNfunction-ss_dLdL::synapse0x350ab20() {
   return (neuron0x34f6fd0()*0.0091935);
}

double NNfunction-ss_dLdL::synapse0x350ab60() {
   return (neuron0x34f7310()*0.037967);
}

double NNfunction-ss_dLdL::synapse0x350aba0() {
   return (neuron0x34f7650()*-0.0509475);
}

double NNfunction-ss_dLdL::synapse0x350abe0() {
   return (neuron0x34f7990()*-0.0160685);
}

double NNfunction-ss_dLdL::synapse0x350ac20() {
   return (neuron0x34f7cd0()*0.0911821);
}

double NNfunction-ss_dLdL::synapse0x350ac60() {
   return (neuron0x34f8010()*-0.185655);
}

double NNfunction-ss_dLdL::synapse0x350aca0() {
   return (neuron0x34f8350()*-0.0709304);
}

double NNfunction-ss_dLdL::synapse0x350ace0() {
   return (neuron0x34f8690()*2.79387);
}

double NNfunction-ss_dLdL::synapse0x350ad20() {
   return (neuron0x34f89d0()*-0.0278722);
}

double NNfunction-ss_dLdL::synapse0x350ad60() {
   return (neuron0x34f8d10()*-0.136632);
}

double NNfunction-ss_dLdL::synapse0x350ada0() {
   return (neuron0x34f9050()*-0.0280364);
}

double NNfunction-ss_dLdL::synapse0x350ade0() {
   return (neuron0x34f9390()*0.0241722);
}

double NNfunction-ss_dLdL::synapse0x350a870() {
   return (neuron0x34f96d0()*-0.00580851);
}

double NNfunction-ss_dLdL::synapse0x350a8b0() {
   return (neuron0x34f9c30()*-0.0404857);
}

double NNfunction-ss_dLdL::synapse0x350af30() {
   return (neuron0x34f9e50()*-0.0668326);
}

double NNfunction-ss_dLdL::synapse0x350af70() {
   return (neuron0x34fa190()*-0.0194447);
}

double NNfunction-ss_dLdL::synapse0x350afb0() {
   return (neuron0x34fa4d0()*0.0784692);
}

double NNfunction-ss_dLdL::synapse0x350aff0() {
   return (neuron0x34fa810()*0.00658224);
}

double NNfunction-ss_dLdL::synapse0x350b030() {
   return (neuron0x34fab50()*0.0648074);
}

double NNfunction-ss_dLdL::synapse0x350b070() {
   return (neuron0x34fae90()*0.0799456);
}

double NNfunction-ss_dLdL::synapse0x350b3f0() {
   return (neuron0x34f6360()*-0.00463451);
}

double NNfunction-ss_dLdL::synapse0x350b430() {
   return (neuron0x34f6610()*0.00297644);
}

double NNfunction-ss_dLdL::synapse0x350b470() {
   return (neuron0x34f6950()*0.0695142);
}

double NNfunction-ss_dLdL::synapse0x350b4b0() {
   return (neuron0x34f6c90()*-0.581388);
}

double NNfunction-ss_dLdL::synapse0x350b4f0() {
   return (neuron0x34f6fd0()*-0.00233784);
}

double NNfunction-ss_dLdL::synapse0x350b530() {
   return (neuron0x34f7310()*0.0123287);
}

double NNfunction-ss_dLdL::synapse0x350b570() {
   return (neuron0x34f7650()*0.00401903);
}

double NNfunction-ss_dLdL::synapse0x350b5b0() {
   return (neuron0x34f7990()*-0.000238265);
}

double NNfunction-ss_dLdL::synapse0x350b5f0() {
   return (neuron0x34f7cd0()*0.0338707);
}

double NNfunction-ss_dLdL::synapse0x350b630() {
   return (neuron0x34f8010()*0.0181918);
}

double NNfunction-ss_dLdL::synapse0x350b670() {
   return (neuron0x34f8350()*0.0114814);
}

double NNfunction-ss_dLdL::synapse0x350b6b0() {
   return (neuron0x34f8690()*-3.23398);
}

double NNfunction-ss_dLdL::synapse0x350b6f0() {
   return (neuron0x34f89d0()*0.0172286);
}

double NNfunction-ss_dLdL::synapse0x350b730() {
   return (neuron0x34f8d10()*-0.0222414);
}

double NNfunction-ss_dLdL::synapse0x350b770() {
   return (neuron0x34f9050()*-0.000353851);
}

double NNfunction-ss_dLdL::synapse0x350b7b0() {
   return (neuron0x34f9390()*-0.0122706);
}

double NNfunction-ss_dLdL::synapse0x350b240() {
   return (neuron0x34f96d0()*-0.018568);
}

double NNfunction-ss_dLdL::synapse0x350b280() {
   return (neuron0x34f9c30()*0.00132988);
}

double NNfunction-ss_dLdL::synapse0x350b900() {
   return (neuron0x34f9e50()*0.00252702);
}

double NNfunction-ss_dLdL::synapse0x350b940() {
   return (neuron0x34fa190()*-0.0238246);
}

double NNfunction-ss_dLdL::synapse0x350b980() {
   return (neuron0x34fa4d0()*-0.000545615);
}

double NNfunction-ss_dLdL::synapse0x350b9c0() {
   return (neuron0x34fa810()*0.00190982);
}

double NNfunction-ss_dLdL::synapse0x350ba00() {
   return (neuron0x34fab50()*-0.0111827);
}

double NNfunction-ss_dLdL::synapse0x350ba40() {
   return (neuron0x34fae90()*0.0234623);
}

double NNfunction-ss_dLdL::synapse0x351d910() {
   return (neuron0x34f6360()*0.0243478);
}

double NNfunction-ss_dLdL::synapse0x351d950() {
   return (neuron0x34f6610()*0.000735737);
}

double NNfunction-ss_dLdL::synapse0x351d990() {
   return (neuron0x34f6950()*-0.0459325);
}

double NNfunction-ss_dLdL::synapse0x351d9d0() {
   return (neuron0x34f6c90()*0.255334);
}

double NNfunction-ss_dLdL::synapse0x351da10() {
   return (neuron0x34f6fd0()*0.00886487);
}

double NNfunction-ss_dLdL::synapse0x351da50() {
   return (neuron0x34f7310()*0.0384809);
}

double NNfunction-ss_dLdL::synapse0x351da90() {
   return (neuron0x34f7650()*-0.0224799);
}

double NNfunction-ss_dLdL::synapse0x351dad0() {
   return (neuron0x34f7990()*0.051207);
}

double NNfunction-ss_dLdL::synapse0x351db10() {
   return (neuron0x34f7cd0()*0.194864);
}

double NNfunction-ss_dLdL::synapse0x351db50() {
   return (neuron0x34f8010()*0.24494);
}

double NNfunction-ss_dLdL::synapse0x351db90() {
   return (neuron0x34f8350()*0.172596);
}

double NNfunction-ss_dLdL::synapse0x351dbd0() {
   return (neuron0x34f8690()*1.50438);
}

double NNfunction-ss_dLdL::synapse0x351dc10() {
   return (neuron0x34f89d0()*-0.0496629);
}

double NNfunction-ss_dLdL::synapse0x351dc50() {
   return (neuron0x34f8d10()*-0.171925);
}

double NNfunction-ss_dLdL::synapse0x351dc90() {
   return (neuron0x34f9050()*-0.0188593);
}

double NNfunction-ss_dLdL::synapse0x351dcd0() {
   return (neuron0x34f9390()*-0.0867655);
}

double NNfunction-ss_dLdL::synapse0x350ba80() {
   return (neuron0x34f96d0()*-0.0695483);
}

double NNfunction-ss_dLdL::synapse0x350bac0() {
   return (neuron0x34f9c30()*-0.0669867);
}

double NNfunction-ss_dLdL::synapse0x351de20() {
   return (neuron0x34f9e50()*0.00742576);
}

double NNfunction-ss_dLdL::synapse0x351de60() {
   return (neuron0x34fa190()*-0.125219);
}

double NNfunction-ss_dLdL::synapse0x351dea0() {
   return (neuron0x34fa4d0()*0.0927265);
}

double NNfunction-ss_dLdL::synapse0x351dee0() {
   return (neuron0x34fa810()*0.00652495);
}

double NNfunction-ss_dLdL::synapse0x351df20() {
   return (neuron0x34fab50()*0.0274253);
}

double NNfunction-ss_dLdL::synapse0x351df60() {
   return (neuron0x34fae90()*0.034933);
}

double NNfunction-ss_dLdL::synapse0x351e2e0() {
   return (neuron0x34f6360()*-0.0664294);
}

double NNfunction-ss_dLdL::synapse0x351e320() {
   return (neuron0x34f6610()*-0.304721);
}

double NNfunction-ss_dLdL::synapse0x351e360() {
   return (neuron0x34f6950()*-1.12169);
}

double NNfunction-ss_dLdL::synapse0x351e3a0() {
   return (neuron0x34f6c90()*0.743149);
}

double NNfunction-ss_dLdL::synapse0x351e3e0() {
   return (neuron0x34f6fd0()*-0.432025);
}

double NNfunction-ss_dLdL::synapse0x351e420() {
   return (neuron0x34f7310()*-0.0850212);
}

double NNfunction-ss_dLdL::synapse0x351e460() {
   return (neuron0x34f7650()*-0.374036);
}

double NNfunction-ss_dLdL::synapse0x351e4a0() {
   return (neuron0x34f7990()*-0.558457);
}

double NNfunction-ss_dLdL::synapse0x351e4e0() {
   return (neuron0x34f7cd0()*-0.116793);
}

double NNfunction-ss_dLdL::synapse0x351e520() {
   return (neuron0x34f8010()*-0.308792);
}

double NNfunction-ss_dLdL::synapse0x351e560() {
   return (neuron0x34f8350()*-0.117373);
}

double NNfunction-ss_dLdL::synapse0x351e5a0() {
   return (neuron0x34f8690()*0.380596);
}

double NNfunction-ss_dLdL::synapse0x351e5e0() {
   return (neuron0x34f89d0()*-0.128952);
}

double NNfunction-ss_dLdL::synapse0x351e620() {
   return (neuron0x34f8d10()*-0.0274753);
}

double NNfunction-ss_dLdL::synapse0x351e660() {
   return (neuron0x34f9050()*0.463841);
}

double NNfunction-ss_dLdL::synapse0x351e6a0() {
   return (neuron0x34f9390()*0.088033);
}

double NNfunction-ss_dLdL::synapse0x351e130() {
   return (neuron0x34f96d0()*-0.164975);
}

double NNfunction-ss_dLdL::synapse0x351e170() {
   return (neuron0x34f9c30()*0.185549);
}

double NNfunction-ss_dLdL::synapse0x351e7f0() {
   return (neuron0x34f9e50()*0.101715);
}

double NNfunction-ss_dLdL::synapse0x351e830() {
   return (neuron0x34fa190()*0.0204144);
}

double NNfunction-ss_dLdL::synapse0x351e870() {
   return (neuron0x34fa4d0()*-0.420325);
}

double NNfunction-ss_dLdL::synapse0x351e8b0() {
   return (neuron0x34fa810()*-0.071413);
}

double NNfunction-ss_dLdL::synapse0x351e8f0() {
   return (neuron0x34fab50()*0.192373);
}

double NNfunction-ss_dLdL::synapse0x351e930() {
   return (neuron0x34fae90()*0.111959);
}

double NNfunction-ss_dLdL::synapse0x351ecb0() {
   return (neuron0x34f6360()*0.00856803);
}

double NNfunction-ss_dLdL::synapse0x351ecf0() {
   return (neuron0x34f6610()*0.0138461);
}

double NNfunction-ss_dLdL::synapse0x351ed30() {
   return (neuron0x34f6950()*-0.331897);
}

double NNfunction-ss_dLdL::synapse0x351ed70() {
   return (neuron0x34f6c90()*0.0554306);
}

double NNfunction-ss_dLdL::synapse0x351edb0() {
   return (neuron0x34f6fd0()*-0.118061);
}

double NNfunction-ss_dLdL::synapse0x351edf0() {
   return (neuron0x34f7310()*0.127541);
}

double NNfunction-ss_dLdL::synapse0x351ee30() {
   return (neuron0x34f7650()*0.0477906);
}

double NNfunction-ss_dLdL::synapse0x351ee70() {
   return (neuron0x34f7990()*0.0625385);
}

double NNfunction-ss_dLdL::synapse0x351eeb0() {
   return (neuron0x34f7cd0()*0.0103962);
}

double NNfunction-ss_dLdL::synapse0x351eef0() {
   return (neuron0x34f8010()*0.0136313);
}

double NNfunction-ss_dLdL::synapse0x351ef30() {
   return (neuron0x34f8350()*0.0213831);
}

double NNfunction-ss_dLdL::synapse0x351ef70() {
   return (neuron0x34f8690()*-0.413481);
}

double NNfunction-ss_dLdL::synapse0x351efb0() {
   return (neuron0x34f89d0()*-0.0859732);
}

double NNfunction-ss_dLdL::synapse0x351eff0() {
   return (neuron0x34f8d10()*0.0127106);
}

double NNfunction-ss_dLdL::synapse0x351f030() {
   return (neuron0x34f9050()*0.0355949);
}

double NNfunction-ss_dLdL::synapse0x351f070() {
   return (neuron0x34f9390()*-0.0727192);
}

double NNfunction-ss_dLdL::synapse0x351eb00() {
   return (neuron0x34f96d0()*0.0832624);
}

double NNfunction-ss_dLdL::synapse0x351eb40() {
   return (neuron0x34f9c30()*0.0117886);
}

double NNfunction-ss_dLdL::synapse0x351f1c0() {
   return (neuron0x34f9e50()*-0.00207051);
}

double NNfunction-ss_dLdL::synapse0x351f200() {
   return (neuron0x34fa190()*-0.0813036);
}

double NNfunction-ss_dLdL::synapse0x351f240() {
   return (neuron0x34fa4d0()*0.0344873);
}

double NNfunction-ss_dLdL::synapse0x351f280() {
   return (neuron0x34fa810()*0.0298886);
}

double NNfunction-ss_dLdL::synapse0x351f2c0() {
   return (neuron0x34fab50()*-0.0303812);
}

double NNfunction-ss_dLdL::synapse0x351f300() {
   return (neuron0x34fae90()*-0.0178444);
}

double NNfunction-ss_dLdL::synapse0x351f680() {
   return (neuron0x34f6360()*-0.110595);
}

double NNfunction-ss_dLdL::synapse0x351f6c0() {
   return (neuron0x34f6610()*0.022387);
}

double NNfunction-ss_dLdL::synapse0x351f700() {
   return (neuron0x34f6950()*-0.392018);
}

double NNfunction-ss_dLdL::synapse0x351f740() {
   return (neuron0x34f6c90()*1.19738);
}

double NNfunction-ss_dLdL::synapse0x351f780() {
   return (neuron0x34f6fd0()*-0.105893);
}

double NNfunction-ss_dLdL::synapse0x351f7c0() {
   return (neuron0x34f7310()*0.0261798);
}

double NNfunction-ss_dLdL::synapse0x351f800() {
   return (neuron0x34f7650()*-0.0974255);
}

double NNfunction-ss_dLdL::synapse0x351f840() {
   return (neuron0x34f7990()*-0.0890725);
}

double NNfunction-ss_dLdL::synapse0x351f880() {
   return (neuron0x34f7cd0()*-0.0670491);
}

double NNfunction-ss_dLdL::synapse0x351f8c0() {
   return (neuron0x34f8010()*-0.276079);
}

double NNfunction-ss_dLdL::synapse0x351f900() {
   return (neuron0x34f8350()*-0.204054);
}

double NNfunction-ss_dLdL::synapse0x351f940() {
   return (neuron0x34f8690()*-0.434836);
}

double NNfunction-ss_dLdL::synapse0x351f980() {
   return (neuron0x34f89d0()*0.748302);
}

double NNfunction-ss_dLdL::synapse0x351f9c0() {
   return (neuron0x34f8d10()*0.32152);
}

double NNfunction-ss_dLdL::synapse0x351fa00() {
   return (neuron0x34f9050()*0.190097);
}

double NNfunction-ss_dLdL::synapse0x351fa40() {
   return (neuron0x34f9390()*0.389928);
}

double NNfunction-ss_dLdL::synapse0x351f4d0() {
   return (neuron0x34f96d0()*0.052167);
}

double NNfunction-ss_dLdL::synapse0x351f510() {
   return (neuron0x34f9c30()*0.423235);
}

double NNfunction-ss_dLdL::synapse0x351fb90() {
   return (neuron0x34f9e50()*0.543393);
}

double NNfunction-ss_dLdL::synapse0x351fbd0() {
   return (neuron0x34fa190()*0.0617205);
}

double NNfunction-ss_dLdL::synapse0x351fc10() {
   return (neuron0x34fa4d0()*-0.366774);
}

double NNfunction-ss_dLdL::synapse0x351fc50() {
   return (neuron0x34fa810()*-0.12243);
}

double NNfunction-ss_dLdL::synapse0x351fc90() {
   return (neuron0x34fab50()*0.299255);
}

double NNfunction-ss_dLdL::synapse0x351fcd0() {
   return (neuron0x34fae90()*0.118388);
}

double NNfunction-ss_dLdL::synapse0x34fc260() {
   return (neuron0x34fb300()*-0.676978);
}

double NNfunction-ss_dLdL::synapse0x34fc2a0() {
   return (neuron0x34fbc50()*0.681091);
}

double NNfunction-ss_dLdL::synapse0x34fd780() {
   return (neuron0x34fc730()*-0.0117637);
}

double NNfunction-ss_dLdL::synapse0x34fd7c0() {
   return (neuron0x32bfa80()*0.0560854);
}

double NNfunction-ss_dLdL::synapse0x34fe150() {
   return (neuron0x34fd4d0()*0.0182476);
}

double NNfunction-ss_dLdL::synapse0x34fe190() {
   return (neuron0x34fdea0()*0.743186);
}

double NNfunction-ss_dLdL::synapse0x34fef20() {
   return (neuron0x34fec70()*0.0401815);
}

double NNfunction-ss_dLdL::synapse0x34fef60() {
   return (neuron0x34ff640()*0.786728);
}

double NNfunction-ss_dLdL::synapse0x34ff8f0() {
   return (neuron0x3500010()*-0.0275595);
}

double NNfunction-ss_dLdL::synapse0x34ff930() {
   return (neuron0x3500af0()*0.157765);
}

double NNfunction-ss_dLdL::synapse0x35002c0() {
   return (neuron0x35014c0()*0.00860926);
}

double NNfunction-ss_dLdL::synapse0x3500300() {
   return (neuron0x34fe5a0()*0.233211);
}

double NNfunction-ss_dLdL::synapse0x3500da0() {
   return (neuron0x3503070()*0.0388194);
}

double NNfunction-ss_dLdL::synapse0x3500de0() {
   return (neuron0x3503a40()*-0.0370551);
}

double NNfunction-ss_dLdL::synapse0x3501770() {
   return (neuron0x3504410()*0.00676678);
}

double NNfunction-ss_dLdL::synapse0x35017b0() {
   return (neuron0x3504de0()*0.0660713);
}

double NNfunction-ss_dLdL::synapse0x34fe850() {
   return (neuron0x3506bf0()*-0.0147942);
}

double NNfunction-ss_dLdL::synapse0x34fe890() {
   return (neuron0x3506ed0()*-0.00881555);
}

double NNfunction-ss_dLdL::synapse0x3503320() {
   return (neuron0x35078a0()*-0.0957476);
}

double NNfunction-ss_dLdL::synapse0x3503360() {
   return (neuron0x3508270()*-0.0036521);
}

double NNfunction-ss_dLdL::synapse0x3503cf0() {
   return (neuron0x3508c40()*-1.42423);
}

double NNfunction-ss_dLdL::synapse0x3503d30() {
   return (neuron0x3509610()*0.0412632);
}

double NNfunction-ss_dLdL::synapse0x35046c0() {
   return (neuron0x3502160()*-0.135652);
}

double NNfunction-ss_dLdL::synapse0x3504700() {
   return (neuron0x3502b30()*0.915727);
}

double NNfunction-ss_dLdL::synapse0x3505090() {
   return (neuron0x350c3a0()*-0.0270508);
}

double NNfunction-ss_dLdL::synapse0x35050d0() {
   return (neuron0x350cd70()*0.0127163);
}

double NNfunction-ss_dLdL::synapse0x34f9270() {
   return (neuron0x350d740()*0.302965);
}

double NNfunction-ss_dLdL::synapse0x34f92b0() {
   return (neuron0x350e110()*0.0251073);
}

double NNfunction-ss_dLdL::synapse0x3507180() {
   return (neuron0x350eae0()*-0.0181756);
}

double NNfunction-ss_dLdL::synapse0x35071c0() {
   return (neuron0x350f4b0()*0.611607);
}

double NNfunction-ss_dLdL::synapse0x3507b50() {
   return (neuron0x350fe80()*0.0278377);
}

double NNfunction-ss_dLdL::synapse0x3507b90() {
   return (neuron0x3510850()*-0.0236623);
}

double NNfunction-ss_dLdL::synapse0x3508520() {
   return (neuron0x35068e0()*0.376676);
}

double NNfunction-ss_dLdL::synapse0x3508560() {
   return (neuron0x3513430()*0.0114257);
}

double NNfunction-ss_dLdL::synapse0x3508ef0() {
   return (neuron0x3513e00()*0.0312232);
}

double NNfunction-ss_dLdL::synapse0x3508f30() {
   return (neuron0x35147d0()*0.0337414);
}

double NNfunction-ss_dLdL::synapse0x35098c0() {
   return (neuron0x35151a0()*-0.0400201);
}

double NNfunction-ss_dLdL::synapse0x3509900() {
   return (neuron0x3515b70()*-0.996404);
}

double NNfunction-ss_dLdL::synapse0x3502410() {
   return (neuron0x3516540()*-0.032679);
}

double NNfunction-ss_dLdL::synapse0x3502450() {
   return (neuron0x3516f10()*-0.00992086);
}

double NNfunction-ss_dLdL::synapse0x350bcc0() {
   return (neuron0x35178e0()*-0.00803016);
}

double NNfunction-ss_dLdL::synapse0x350bd00() {
   return (neuron0x35184c0()*0.125649);
}

double NNfunction-ss_dLdL::synapse0x350c650() {
   return (neuron0x3518e90()*-0.416459);
}

double NNfunction-ss_dLdL::synapse0x350c690() {
   return (neuron0x3509d10()*0.0162953);
}

double NNfunction-ss_dLdL::synapse0x350d020() {
   return (neuron0x350a6e0()*-0.0827104);
}

double NNfunction-ss_dLdL::synapse0x350d060() {
   return (neuron0x350b0b0()*-0.967052);
}

double NNfunction-ss_dLdL::synapse0x350d9f0() {
   return (neuron0x351d6f0()*0.169757);
}

double NNfunction-ss_dLdL::synapse0x350da30() {
   return (neuron0x351dfa0()*-0.0449541);
}

double NNfunction-ss_dLdL::synapse0x350e3c0() {
   return (neuron0x351e970()*0.328979);
}

double NNfunction-ss_dLdL::synapse0x350e400() {
   return (neuron0x351f340()*-0.0133658);
}

double NNfunction-ss_dLdL::synapse0x3510b00() {
   return (neuron0x34fb300()*0.0196343);
}

double NNfunction-ss_dLdL::synapse0x3510b40() {
   return (neuron0x34fbc50()*-0.143275);
}

double NNfunction-ss_dLdL::synapse0x35060c0() {
   return (neuron0x34fc730()*0.0145551);
}

double NNfunction-ss_dLdL::synapse0x3506100() {
   return (neuron0x32bfa80()*0.840606);
}

double NNfunction-ss_dLdL::synapse0x35136e0() {
   return (neuron0x34fd4d0()*0.436443);
}

double NNfunction-ss_dLdL::synapse0x3513720() {
   return (neuron0x34fdea0()*0.603816);
}

double NNfunction-ss_dLdL::synapse0x35140b0() {
   return (neuron0x34fec70()*0.738523);
}

double NNfunction-ss_dLdL::synapse0x35140f0() {
   return (neuron0x34ff640()*-0.0863593);
}

double NNfunction-ss_dLdL::synapse0x3514a80() {
   return (neuron0x3500010()*0.264369);
}

double NNfunction-ss_dLdL::synapse0x3514ac0() {
   return (neuron0x3500af0()*0.680385);
}

double NNfunction-ss_dLdL::synapse0x3515450() {
   return (neuron0x35014c0()*0.317806);
}

double NNfunction-ss_dLdL::synapse0x3515490() {
   return (neuron0x34fe5a0()*-0.139013);
}

double NNfunction-ss_dLdL::synapse0x3515e20() {
   return (neuron0x3503070()*0.73335);
}

double NNfunction-ss_dLdL::synapse0x3515e60() {
   return (neuron0x3503a40()*0.873325);
}

double NNfunction-ss_dLdL::synapse0x35167f0() {
   return (neuron0x3504410()*-0.270567);
}

double NNfunction-ss_dLdL::synapse0x3516830() {
   return (neuron0x3504de0()*-0.100049);
}

double NNfunction-ss_dLdL::synapse0x35171c0() {
   return (neuron0x3506bf0()*-0.655795);
}

double NNfunction-ss_dLdL::synapse0x3517200() {
   return (neuron0x3506ed0()*-0.382938);
}

double NNfunction-ss_dLdL::synapse0x3517b90() {
   return (neuron0x35078a0()*0.941452);
}

double NNfunction-ss_dLdL::synapse0x3517bd0() {
   return (neuron0x3508270()*-0.810094);
}

double NNfunction-ss_dLdL::synapse0x3518770() {
   return (neuron0x3508c40()*-0.963885);
}

double NNfunction-ss_dLdL::synapse0x35187b0() {
   return (neuron0x3509610()*0.575271);
}

double NNfunction-ss_dLdL::synapse0x3519140() {
   return (neuron0x3502160()*-0.460461);
}

double NNfunction-ss_dLdL::synapse0x3519180() {
   return (neuron0x3502b30()*0.0504378);
}

double NNfunction-ss_dLdL::synapse0x3509fc0() {
   return (neuron0x350c3a0()*0.0294553);
}

double NNfunction-ss_dLdL::synapse0x350a000() {
   return (neuron0x350cd70()*0.19984);
}

double NNfunction-ss_dLdL::synapse0x350a990() {
   return (neuron0x350d740()*0.999456);
}

double NNfunction-ss_dLdL::synapse0x350a9d0() {
   return (neuron0x350e110()*0.908415);
}

double NNfunction-ss_dLdL::synapse0x350b360() {
   return (neuron0x350eae0()*-0.0941815);
}

double NNfunction-ss_dLdL::synapse0x350b3a0() {
   return (neuron0x350f4b0()*-0.0703478);
}

double NNfunction-ss_dLdL::synapse0x351d880() {
   return (neuron0x350fe80()*1.24542);
}

double NNfunction-ss_dLdL::synapse0x351d8c0() {
   return (neuron0x3510850()*0.104888);
}

double NNfunction-ss_dLdL::synapse0x351e250() {
   return (neuron0x35068e0()*1.2614);
}

double NNfunction-ss_dLdL::synapse0x351e290() {
   return (neuron0x3513430()*0.370168);
}

double NNfunction-ss_dLdL::synapse0x351ec20() {
   return (neuron0x3513e00()*1.47276);
}

double NNfunction-ss_dLdL::synapse0x351ec60() {
   return (neuron0x35147d0()*-0.094356);
}

double NNfunction-ss_dLdL::synapse0x351f5f0() {
   return (neuron0x35151a0()*0.155069);
}

double NNfunction-ss_dLdL::synapse0x351f630() {
   return (neuron0x3515b70()*0.217666);
}

double NNfunction-ss_dLdL::synapse0x34fb520() {
   return (neuron0x3516540()*0.228145);
}

double NNfunction-ss_dLdL::synapse0x34fb560() {
   return (neuron0x3516f10()*0.932892);
}

double NNfunction-ss_dLdL::synapse0x350ed90() {
   return (neuron0x35178e0()*0.0968216);
}

double NNfunction-ss_dLdL::synapse0x350edd0() {
   return (neuron0x35184c0()*0.401216);
}

double NNfunction-ss_dLdL::synapse0x351fd10() {
   return (neuron0x3518e90()*-0.393451);
}

double NNfunction-ss_dLdL::synapse0x351fd50() {
   return (neuron0x3509d10()*0.887213);
}

double NNfunction-ss_dLdL::synapse0x351fd90() {
   return (neuron0x350a6e0()*0.451013);
}

double NNfunction-ss_dLdL::synapse0x351fdd0() {
   return (neuron0x350b0b0()*0.868598);
}

double NNfunction-ss_dLdL::synapse0x3526c80() {
   return (neuron0x351d6f0()*0.376319);
}

double NNfunction-ss_dLdL::synapse0x3526cc0() {
   return (neuron0x351dfa0()*-0.718945);
}

double NNfunction-ss_dLdL::synapse0x3526d00() {
   return (neuron0x351e970()*0.130354);
}

double NNfunction-ss_dLdL::synapse0x3526d40() {
   return (neuron0x351f340()*-0.0756179);
}

double NNfunction-ss_dLdL::synapse0x35270c0() {
   return (neuron0x34fb300()*-3.24932);
}

double NNfunction-ss_dLdL::synapse0x3527100() {
   return (neuron0x34fbc50()*0.0505546);
}

double NNfunction-ss_dLdL::synapse0x3527140() {
   return (neuron0x34fc730()*0.119136);
}

double NNfunction-ss_dLdL::synapse0x3527180() {
   return (neuron0x32bfa80()*-0.28316);
}

double NNfunction-ss_dLdL::synapse0x35271c0() {
   return (neuron0x34fd4d0()*-0.183459);
}

double NNfunction-ss_dLdL::synapse0x3527200() {
   return (neuron0x34fdea0()*1.17359);
}

double NNfunction-ss_dLdL::synapse0x3527240() {
   return (neuron0x34fec70()*-3.43097);
}

double NNfunction-ss_dLdL::synapse0x3527280() {
   return (neuron0x34ff640()*2.68501);
}

double NNfunction-ss_dLdL::synapse0x35272c0() {
   return (neuron0x3500010()*0.498546);
}

double NNfunction-ss_dLdL::synapse0x3527300() {
   return (neuron0x3500af0()*-1.14763);
}

double NNfunction-ss_dLdL::synapse0x3527340() {
   return (neuron0x35014c0()*-0.137254);
}

double NNfunction-ss_dLdL::synapse0x3527380() {
   return (neuron0x34fe5a0()*1.53594);
}

double NNfunction-ss_dLdL::synapse0x35273c0() {
   return (neuron0x3503070()*-0.067561);
}

double NNfunction-ss_dLdL::synapse0x3527400() {
   return (neuron0x3503a40()*-0.389142);
}

double NNfunction-ss_dLdL::synapse0x3527440() {
   return (neuron0x3504410()*-0.104177);
}

double NNfunction-ss_dLdL::synapse0x3527480() {
   return (neuron0x3504de0()*-0.260715);
}

double NNfunction-ss_dLdL::synapse0x3526f10() {
   return (neuron0x3506bf0()*0.183365);
}

double NNfunction-ss_dLdL::synapse0x3526f50() {
   return (neuron0x3506ed0()*0.11311);
}

double NNfunction-ss_dLdL::synapse0x35275d0() {
   return (neuron0x35078a0()*-3.32852);
}

double NNfunction-ss_dLdL::synapse0x3527610() {
   return (neuron0x3508270()*-0.100718);
}

double NNfunction-ss_dLdL::synapse0x3527650() {
   return (neuron0x3508c40()*-4.52978);
}

double NNfunction-ss_dLdL::synapse0x3527690() {
   return (neuron0x3509610()*-0.14196);
}

double NNfunction-ss_dLdL::synapse0x35276d0() {
   return (neuron0x3502160()*3.0535);
}

double NNfunction-ss_dLdL::synapse0x3527710() {
   return (neuron0x3502b30()*1.792);
}

double NNfunction-ss_dLdL::synapse0x3527750() {
   return (neuron0x350c3a0()*0.311944);
}

double NNfunction-ss_dLdL::synapse0x3527790() {
   return (neuron0x350cd70()*-0.00660751);
}

double NNfunction-ss_dLdL::synapse0x35277d0() {
   return (neuron0x350d740()*-4.44578);
}

double NNfunction-ss_dLdL::synapse0x3527810() {
   return (neuron0x350e110()*0.0196027);
}

double NNfunction-ss_dLdL::synapse0x3527850() {
   return (neuron0x350eae0()*0.294231);
}

double NNfunction-ss_dLdL::synapse0x3527890() {
   return (neuron0x350f4b0()*1.27729);
}

double NNfunction-ss_dLdL::synapse0x35278d0() {
   return (neuron0x350fe80()*-0.0455152);
}

double NNfunction-ss_dLdL::synapse0x3527910() {
   return (neuron0x3510850()*0.111268);
}

double NNfunction-ss_dLdL::synapse0x35274c0() {
   return (neuron0x35068e0()*5.44524);
}

double NNfunction-ss_dLdL::synapse0x3527500() {
   return (neuron0x3513430()*-0.1539);
}

double NNfunction-ss_dLdL::synapse0x3527540() {
   return (neuron0x3513e00()*0.0823835);
}

double NNfunction-ss_dLdL::synapse0x3527580() {
   return (neuron0x35147d0()*-0.744742);
}

double NNfunction-ss_dLdL::synapse0x3527b60() {
   return (neuron0x35151a0()*-0.930942);
}

double NNfunction-ss_dLdL::synapse0x3527ba0() {
   return (neuron0x3515b70()*1.21704);
}

double NNfunction-ss_dLdL::synapse0x3527be0() {
   return (neuron0x3516540()*0.459193);
}

double NNfunction-ss_dLdL::synapse0x3527c20() {
   return (neuron0x3516f10()*0.278426);
}

double NNfunction-ss_dLdL::synapse0x3527c60() {
   return (neuron0x35178e0()*0.671859);
}

double NNfunction-ss_dLdL::synapse0x3527ca0() {
   return (neuron0x35184c0()*-1.59313);
}

double NNfunction-ss_dLdL::synapse0x3527ce0() {
   return (neuron0x3518e90()*0.147695);
}

double NNfunction-ss_dLdL::synapse0x3527d20() {
   return (neuron0x3509d10()*-0.109656);
}

double NNfunction-ss_dLdL::synapse0x3527d60() {
   return (neuron0x350a6e0()*1.92598);
}

double NNfunction-ss_dLdL::synapse0x3527da0() {
   return (neuron0x350b0b0()*-2.39295);
}

double NNfunction-ss_dLdL::synapse0x3527de0() {
   return (neuron0x351d6f0()*0.869445);
}

double NNfunction-ss_dLdL::synapse0x3527e20() {
   return (neuron0x351dfa0()*-0.209324);
}

double NNfunction-ss_dLdL::synapse0x3527e60() {
   return (neuron0x351e970()*1.64112);
}

double NNfunction-ss_dLdL::synapse0x3527ea0() {
   return (neuron0x351f340()*-0.1134);
}

double NNfunction-ss_dLdL::synapse0x3528220() {
   return (neuron0x34fb300()*0.00794859);
}

double NNfunction-ss_dLdL::synapse0x3528260() {
   return (neuron0x34fbc50()*1.14495);
}

double NNfunction-ss_dLdL::synapse0x35282a0() {
   return (neuron0x34fc730()*0.110386);
}

double NNfunction-ss_dLdL::synapse0x35282e0() {
   return (neuron0x32bfa80()*-1.09692);
}

double NNfunction-ss_dLdL::synapse0x3528320() {
   return (neuron0x34fd4d0()*-0.154266);
}

double NNfunction-ss_dLdL::synapse0x3528360() {
   return (neuron0x34fdea0()*-0.247331);
}

double NNfunction-ss_dLdL::synapse0x35283a0() {
   return (neuron0x34fec70()*0.126939);
}

double NNfunction-ss_dLdL::synapse0x35283e0() {
   return (neuron0x34ff640()*0.95377);
}

double NNfunction-ss_dLdL::synapse0x3528420() {
   return (neuron0x3500010()*-0.0199798);
}

double NNfunction-ss_dLdL::synapse0x3528460() {
   return (neuron0x3500af0()*-0.632065);
}

double NNfunction-ss_dLdL::synapse0x35284a0() {
   return (neuron0x35014c0()*-0.123077);
}

double NNfunction-ss_dLdL::synapse0x35284e0() {
   return (neuron0x34fe5a0()*-0.77489);
}

double NNfunction-ss_dLdL::synapse0x3528520() {
   return (neuron0x3503070()*-0.526506);
}

double NNfunction-ss_dLdL::synapse0x3528560() {
   return (neuron0x3503a40()*0.203742);
}

double NNfunction-ss_dLdL::synapse0x35285a0() {
   return (neuron0x3504410()*0.0962124);
}

double NNfunction-ss_dLdL::synapse0x35285e0() {
   return (neuron0x3504de0()*-0.200218);
}

double NNfunction-ss_dLdL::synapse0x3528070() {
   return (neuron0x3506bf0()*-0.0771223);
}

double NNfunction-ss_dLdL::synapse0x35280b0() {
   return (neuron0x3506ed0()*-0.163384);
}

double NNfunction-ss_dLdL::synapse0x3528730() {
   return (neuron0x35078a0()*0.0939931);
}

double NNfunction-ss_dLdL::synapse0x3528770() {
   return (neuron0x3508270()*0.10191);
}

double NNfunction-ss_dLdL::synapse0x35287b0() {
   return (neuron0x3508c40()*2.13468);
}

double NNfunction-ss_dLdL::synapse0x35287f0() {
   return (neuron0x3509610()*0.194447);
}

double NNfunction-ss_dLdL::synapse0x3528830() {
   return (neuron0x3502160()*0.213347);
}

double NNfunction-ss_dLdL::synapse0x3528870() {
   return (neuron0x3502b30()*-0.119371);
}

double NNfunction-ss_dLdL::synapse0x35288b0() {
   return (neuron0x350c3a0()*-0.163656);
}

double NNfunction-ss_dLdL::synapse0x35288f0() {
   return (neuron0x350cd70()*0.16668);
}

double NNfunction-ss_dLdL::synapse0x3528930() {
   return (neuron0x350d740()*0.367321);
}

double NNfunction-ss_dLdL::synapse0x3528970() {
   return (neuron0x350e110()*-0.0539819);
}

double NNfunction-ss_dLdL::synapse0x35289b0() {
   return (neuron0x350eae0()*-0.131482);
}

double NNfunction-ss_dLdL::synapse0x35289f0() {
   return (neuron0x350f4b0()*1.61889);
}

double NNfunction-ss_dLdL::synapse0x3528a30() {
   return (neuron0x350fe80()*-0.148009);
}

double NNfunction-ss_dLdL::synapse0x3528a70() {
   return (neuron0x3510850()*-0.209075);
}

double NNfunction-ss_dLdL::synapse0x3528620() {
   return (neuron0x35068e0()*-0.781783);
}

double NNfunction-ss_dLdL::synapse0x3528660() {
   return (neuron0x3513430()*-0.127723);
}

double NNfunction-ss_dLdL::synapse0x35286a0() {
   return (neuron0x3513e00()*-0.00975197);
}

double NNfunction-ss_dLdL::synapse0x35286e0() {
   return (neuron0x35147d0()*0.619804);
}

double NNfunction-ss_dLdL::synapse0x3528cc0() {
   return (neuron0x35151a0()*0.147126);
}

double NNfunction-ss_dLdL::synapse0x3528d00() {
   return (neuron0x3515b70()*0.311172);
}

double NNfunction-ss_dLdL::synapse0x3528d40() {
   return (neuron0x3516540()*-0.127309);
}

double NNfunction-ss_dLdL::synapse0x3528d80() {
   return (neuron0x3516f10()*0.0756712);
}

double NNfunction-ss_dLdL::synapse0x3528dc0() {
   return (neuron0x35178e0()*-0.0585905);
}

double NNfunction-ss_dLdL::synapse0x3528e00() {
   return (neuron0x35184c0()*-0.995384);
}

double NNfunction-ss_dLdL::synapse0x3528e40() {
   return (neuron0x3518e90()*-1.27688);
}

double NNfunction-ss_dLdL::synapse0x3528e80() {
   return (neuron0x3509d10()*-0.124716);
}

double NNfunction-ss_dLdL::synapse0x3528ec0() {
   return (neuron0x350a6e0()*0.673528);
}

double NNfunction-ss_dLdL::synapse0x3528f00() {
   return (neuron0x350b0b0()*-2.10834);
}

double NNfunction-ss_dLdL::synapse0x3528f40() {
   return (neuron0x351d6f0()*-0.00195807);
}

double NNfunction-ss_dLdL::synapse0x3528f80() {
   return (neuron0x351dfa0()*-0.0950811);
}

double NNfunction-ss_dLdL::synapse0x3528fc0() {
   return (neuron0x351e970()*-1.08945);
}

double NNfunction-ss_dLdL::synapse0x3529000() {
   return (neuron0x351f340()*-0.47999);
}

double NNfunction-ss_dLdL::synapse0x3529380() {
   return (neuron0x34fb300()*0.193805);
}

double NNfunction-ss_dLdL::synapse0x35293c0() {
   return (neuron0x34fbc50()*0.185482);
}

double NNfunction-ss_dLdL::synapse0x3529400() {
   return (neuron0x34fc730()*-0.419832);
}

double NNfunction-ss_dLdL::synapse0x3529440() {
   return (neuron0x32bfa80()*-0.473456);
}

double NNfunction-ss_dLdL::synapse0x3529480() {
   return (neuron0x34fd4d0()*-0.0487619);
}

double NNfunction-ss_dLdL::synapse0x35294c0() {
   return (neuron0x34fdea0()*-0.2575);
}

double NNfunction-ss_dLdL::synapse0x3529500() {
   return (neuron0x34fec70()*-0.168159);
}

double NNfunction-ss_dLdL::synapse0x3529540() {
   return (neuron0x34ff640()*-0.299066);
}

double NNfunction-ss_dLdL::synapse0x3529580() {
   return (neuron0x3500010()*-0.033002);
}

double NNfunction-ss_dLdL::synapse0x35295c0() {
   return (neuron0x3500af0()*0.0828634);
}

double NNfunction-ss_dLdL::synapse0x3529600() {
   return (neuron0x35014c0()*-0.128143);
}

double NNfunction-ss_dLdL::synapse0x3529640() {
   return (neuron0x34fe5a0()*-0.222909);
}

double NNfunction-ss_dLdL::synapse0x3529680() {
   return (neuron0x3503070()*-0.500802);
}

double NNfunction-ss_dLdL::synapse0x35296c0() {
   return (neuron0x3503a40()*-0.558433);
}

double NNfunction-ss_dLdL::synapse0x3529700() {
   return (neuron0x3504410()*-0.284519);
}

double NNfunction-ss_dLdL::synapse0x3529740() {
   return (neuron0x3504de0()*-0.203231);
}

double NNfunction-ss_dLdL::synapse0x35291d0() {
   return (neuron0x3506bf0()*-0.386378);
}

double NNfunction-ss_dLdL::synapse0x3529210() {
   return (neuron0x3506ed0()*-0.216563);
}

double NNfunction-ss_dLdL::synapse0x3529890() {
   return (neuron0x35078a0()*-0.111882);
}

double NNfunction-ss_dLdL::synapse0x35298d0() {
   return (neuron0x3508270()*0.308144);
}

double NNfunction-ss_dLdL::synapse0x3529910() {
   return (neuron0x3508c40()*-0.379732);
}

double NNfunction-ss_dLdL::synapse0x3529950() {
   return (neuron0x3509610()*0.136539);
}

double NNfunction-ss_dLdL::synapse0x3529990() {
   return (neuron0x3502160()*-0.0209214);
}

double NNfunction-ss_dLdL::synapse0x35299d0() {
   return (neuron0x3502b30()*-0.068657);
}

double NNfunction-ss_dLdL::synapse0x3529a10() {
   return (neuron0x350c3a0()*-0.435593);
}

double NNfunction-ss_dLdL::synapse0x3529a50() {
   return (neuron0x350cd70()*0.0702399);
}

double NNfunction-ss_dLdL::synapse0x3529a90() {
   return (neuron0x350d740()*-0.155683);
}

double NNfunction-ss_dLdL::synapse0x3529ad0() {
   return (neuron0x350e110()*-0.604664);
}

double NNfunction-ss_dLdL::synapse0x3529b10() {
   return (neuron0x350eae0()*-0.0199796);
}

double NNfunction-ss_dLdL::synapse0x3529b50() {
   return (neuron0x350f4b0()*0.302699);
}

double NNfunction-ss_dLdL::synapse0x3529b90() {
   return (neuron0x350fe80()*-0.243752);
}

double NNfunction-ss_dLdL::synapse0x3529bd0() {
   return (neuron0x3510850()*-0.185533);
}

double NNfunction-ss_dLdL::synapse0x3529780() {
   return (neuron0x35068e0()*0.12182);
}

double NNfunction-ss_dLdL::synapse0x35297c0() {
   return (neuron0x3513430()*-0.278476);
}

double NNfunction-ss_dLdL::synapse0x3529800() {
   return (neuron0x3513e00()*0.112423);
}

double NNfunction-ss_dLdL::synapse0x3529840() {
   return (neuron0x35147d0()*-0.383617);
}

double NNfunction-ss_dLdL::synapse0x3529e20() {
   return (neuron0x35151a0()*-0.26331);
}

double NNfunction-ss_dLdL::synapse0x3529e60() {
   return (neuron0x3515b70()*0.0750575);
}

double NNfunction-ss_dLdL::synapse0x3529ea0() {
   return (neuron0x3516540()*-0.262921);
}

double NNfunction-ss_dLdL::synapse0x3529ee0() {
   return (neuron0x3516f10()*-0.234511);
}

double NNfunction-ss_dLdL::synapse0x3529f20() {
   return (neuron0x35178e0()*0.379153);
}

double NNfunction-ss_dLdL::synapse0x3529f60() {
   return (neuron0x35184c0()*-0.11184);
}

double NNfunction-ss_dLdL::synapse0x3529fa0() {
   return (neuron0x3518e90()*0.0762811);
}

double NNfunction-ss_dLdL::synapse0x3529fe0() {
   return (neuron0x3509d10()*0.331651);
}

double NNfunction-ss_dLdL::synapse0x352a020() {
   return (neuron0x350a6e0()*0.339093);
}

double NNfunction-ss_dLdL::synapse0x352a060() {
   return (neuron0x350b0b0()*-0.393632);
}

double NNfunction-ss_dLdL::synapse0x352a0a0() {
   return (neuron0x351d6f0()*0.329144);
}

double NNfunction-ss_dLdL::synapse0x352a0e0() {
   return (neuron0x351dfa0()*0.710772);
}

double NNfunction-ss_dLdL::synapse0x352a120() {
   return (neuron0x351e970()*0.309817);
}

double NNfunction-ss_dLdL::synapse0x352a160() {
   return (neuron0x351f340()*-0.542251);
}

double NNfunction-ss_dLdL::synapse0x352a3c0() {
   return (neuron0x3526540()*-5.41255);
}

double NNfunction-ss_dLdL::synapse0x352a400() {
   return (neuron0x35268e0()*5.02501);
}

double NNfunction-ss_dLdL::synapse0x352a440() {
   return (neuron0x3526d80()*-7.79809);
}

double NNfunction-ss_dLdL::synapse0x352a480() {
   return (neuron0x3527ee0()*-4.90665);
}

double NNfunction-ss_dLdL::synapse0x352a4c0() {
   return (neuron0x3529040()*0.251587);
}

