#include "NNfunction-ss_cLsR.h"
#include <cmath>

double NNfunction-ss_cLsR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 22.9451)/15.0479;
   input1 = (in1 - 32.2687)/849.353;
   input2 = (in2 - 427.476)/542.697;
   input3 = (in3 - 128.57)/650.407;
   input4 = (in4 - 739.327)/788.793;
   input5 = (in5 - 631.093)/751.152;
   input6 = (in6 - 634.874)/753.691;
   input7 = (in7 - 642.348)/753.169;
   input8 = (in8 - 647.163)/794.73;
   input9 = (in9 - 631.576)/776.992;
   input10 = (in10 - 669.114)/805.223;
   input11 = (in11 - 603.966)/660.866;
   input12 = (in12 - 365.536)/230.714;
   input13 = (in13 - 447.152)/390.418;
   input14 = (in14 - 594.225)/615.981;
   input15 = (in15 - 588.306)/611.341;
   input16 = (in16 - 426.045)/422.205;
   input17 = (in17 - 629.494)/700.446;
   input18 = (in18 - 359.31)/231.088;
   input19 = (in19 - 639.785)/693.48;
   input20 = (in20 - -119.421)/396.347;
   input21 = (in21 - -139.593)/915.284;
   input22 = (in22 - 9.945)/933.08;
   input23 = (in23 - -75.4064)/499.328;
   switch(index) {
     case 0:
         return neuron0x3760080();
     default:
         return 0.;
   }
}

double NNfunction-ss_cLsR::Value(int index, double* input) {
   input0 = (input[0] - 22.9451)/15.0479;
   input1 = (input[1] - 32.2687)/849.353;
   input2 = (input[2] - 427.476)/542.697;
   input3 = (input[3] - 128.57)/650.407;
   input4 = (input[4] - 739.327)/788.793;
   input5 = (input[5] - 631.093)/751.152;
   input6 = (input[6] - 634.874)/753.691;
   input7 = (input[7] - 642.348)/753.169;
   input8 = (input[8] - 647.163)/794.73;
   input9 = (input[9] - 631.576)/776.992;
   input10 = (input[10] - 669.114)/805.223;
   input11 = (input[11] - 603.966)/660.866;
   input12 = (input[12] - 365.536)/230.714;
   input13 = (input[13] - 447.152)/390.418;
   input14 = (input[14] - 594.225)/615.981;
   input15 = (input[15] - 588.306)/611.341;
   input16 = (input[16] - 426.045)/422.205;
   input17 = (input[17] - 629.494)/700.446;
   input18 = (input[18] - 359.31)/231.088;
   input19 = (input[19] - 639.785)/693.48;
   input20 = (input[20] - -119.421)/396.347;
   input21 = (input[21] - -139.593)/915.284;
   input22 = (input[22] - 9.945)/933.08;
   input23 = (input[23] - -75.4064)/499.328;
   switch(index) {
     case 0:
         return neuron0x3760080();
     default:
         return 0.;
   }
}

double NNfunction-ss_cLsR::neuron0x372c170() {
   return input0;
}

double NNfunction-ss_cLsR::neuron0x372c4b0() {
   return input1;
}

double NNfunction-ss_cLsR::neuron0x372c7f0() {
   return input2;
}

double NNfunction-ss_cLsR::neuron0x372cb30() {
   return input3;
}

double NNfunction-ss_cLsR::neuron0x372ce70() {
   return input4;
}

double NNfunction-ss_cLsR::neuron0x372d1b0() {
   return input5;
}

double NNfunction-ss_cLsR::neuron0x372d4f0() {
   return input6;
}

double NNfunction-ss_cLsR::neuron0x372d830() {
   return input7;
}

double NNfunction-ss_cLsR::neuron0x372db70() {
   return input8;
}

double NNfunction-ss_cLsR::neuron0x372deb0() {
   return input9;
}

double NNfunction-ss_cLsR::neuron0x372e1f0() {
   return input10;
}

double NNfunction-ss_cLsR::neuron0x372e530() {
   return input11;
}

double NNfunction-ss_cLsR::neuron0x372e870() {
   return input12;
}

double NNfunction-ss_cLsR::neuron0x372ebb0() {
   return input13;
}

double NNfunction-ss_cLsR::neuron0x372eef0() {
   return input14;
}

double NNfunction-ss_cLsR::neuron0x372f230() {
   return input15;
}

double NNfunction-ss_cLsR::neuron0x372f570() {
   return input16;
}

double NNfunction-ss_cLsR::neuron0x372fad0() {
   return input17;
}

double NNfunction-ss_cLsR::neuron0x372fcf0() {
   return input18;
}

double NNfunction-ss_cLsR::neuron0x3730030() {
   return input19;
}

double NNfunction-ss_cLsR::neuron0x3730370() {
   return input20;
}

double NNfunction-ss_cLsR::neuron0x37306b0() {
   return input21;
}

double NNfunction-ss_cLsR::neuron0x37309f0() {
   return input22;
}

double NNfunction-ss_cLsR::neuron0x3730d30() {
   return input23;
}

double NNfunction-ss_cLsR::input0x37311a0() {
   double input = -1.57395;
   input += synapse0x372c030();
   input += synapse0x372c070();
   input += synapse0x3731450();
   input += synapse0x3731490();
   input += synapse0x37314d0();
   input += synapse0x3731510();
   input += synapse0x3731550();
   input += synapse0x3731590();
   input += synapse0x37315d0();
   input += synapse0x3731610();
   input += synapse0x3731650();
   input += synapse0x3731690();
   input += synapse0x37316d0();
   input += synapse0x3731710();
   input += synapse0x3731750();
   input += synapse0x3731790();
   input += synapse0x372bfa0();
   input += synapse0x372bfe0();
   input += synapse0x34e7390();
   input += synapse0x34e73d0();
   input += synapse0x37319f0();
   input += synapse0x3731a30();
   input += synapse0x3731a70();
   input += synapse0x3731ab0();
   return input;
}

double NNfunction-ss_cLsR::neuron0x37311a0() {
   double input = input0x37311a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x3731af0() {
   double input = -0.825947;
   input += synapse0x3731e30();
   input += synapse0x3731e70();
   input += synapse0x3731eb0();
   input += synapse0x3731ef0();
   input += synapse0x3731f30();
   input += synapse0x3731f70();
   input += synapse0x3731fb0();
   input += synapse0x3731ff0();
   input += synapse0x3732030();
   input += synapse0x37318e0();
   input += synapse0x3731920();
   input += synapse0x3731960();
   input += synapse0x37319a0();
   input += synapse0x3732280();
   input += synapse0x37322c0();
   input += synapse0x3732300();
   input += synapse0x3731c80();
   input += synapse0x3731cc0();
   input += synapse0x3732450();
   input += synapse0x3732490();
   input += synapse0x37324d0();
   input += synapse0x3732510();
   input += synapse0x3732550();
   input += synapse0x3732590();
   return input;
}

double NNfunction-ss_cLsR::neuron0x3731af0() {
   double input = input0x3731af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x37325d0() {
   double input = 1.89538;
   input += synapse0x3732910();
   input += synapse0x3732950();
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
   input += synapse0x3732760();
   input += synapse0x37327a0();
   input += synapse0x34e64e0();
   input += synapse0x34f52e0();
   input += synapse0x34f5320();
   input += synapse0x371b200();
   input += synapse0x371b240();
   input += synapse0x371b280();
   return input;
}

double NNfunction-ss_cLsR::neuron0x37325d0() {
   double input = input0x37325d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x3732070() {
   double input = 0.0532048;
   input += synapse0x34f5b60();
   input += synapse0x3732200();
   input += synapse0x3732240();
   input += synapse0x3732e20();
   input += synapse0x3732e60();
   input += synapse0x3732ea0();
   input += synapse0x3732ee0();
   input += synapse0x3732f20();
   input += synapse0x3732f60();
   input += synapse0x3732fa0();
   input += synapse0x3732fe0();
   input += synapse0x3733020();
   input += synapse0x3733060();
   input += synapse0x37330a0();
   input += synapse0x37330e0();
   input += synapse0x3733120();
   input += synapse0x372c0b0();
   input += synapse0x372c0f0();
   input += synapse0x372c130();
   input += synapse0x3733270();
   input += synapse0x37332b0();
   input += synapse0x37332f0();
   input += synapse0x3733330();
   input += synapse0x3733370();
   return input;
}

double NNfunction-ss_cLsR::neuron0x3732070() {
   double input = input0x3732070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x37333b0() {
   double input = 5.01204;
   input += synapse0x37336f0();
   input += synapse0x3733730();
   input += synapse0x3733770();
   input += synapse0x37337b0();
   input += synapse0x37337f0();
   input += synapse0x3733830();
   input += synapse0x3733870();
   input += synapse0x37338b0();
   input += synapse0x37338f0();
   input += synapse0x3733930();
   input += synapse0x3733970();
   input += synapse0x37339b0();
   input += synapse0x37339f0();
   input += synapse0x3733a30();
   input += synapse0x3733a70();
   input += synapse0x3733ab0();
   input += synapse0x3733540();
   input += synapse0x3733580();
   input += synapse0x3733c00();
   input += synapse0x3733c40();
   input += synapse0x3733c80();
   input += synapse0x3733cc0();
   input += synapse0x3733d00();
   input += synapse0x3733d40();
   return input;
}

double NNfunction-ss_cLsR::neuron0x37333b0() {
   double input = input0x37333b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x3733d80() {
   double input = -1.11602;
   input += synapse0x37340c0();
   input += synapse0x3734100();
   input += synapse0x3734140();
   input += synapse0x3734180();
   input += synapse0x37341c0();
   input += synapse0x3734200();
   input += synapse0x3734240();
   input += synapse0x3734280();
   input += synapse0x37342c0();
   input += synapse0x34f5630();
   input += synapse0x34f5670();
   input += synapse0x34f56b0();
   input += synapse0x34f56f0();
   input += synapse0x34f5730();
   input += synapse0x34f5770();
   input += synapse0x34f57b0();
   input += synapse0x3733f10();
   input += synapse0x3733f50();
   input += synapse0x34f5900();
   input += synapse0x34f5940();
   input += synapse0x34f5980();
   input += synapse0x34f59c0();
   input += synapse0x34f5a00();
   input += synapse0x3734b10();
   return input;
}

double NNfunction-ss_cLsR::neuron0x3733d80() {
   double input = input0x3733d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x3734b50() {
   double input = -0.889144;
   input += synapse0x3734e90();
   input += synapse0x3734ed0();
   input += synapse0x3734f10();
   input += synapse0x3734f50();
   input += synapse0x3734f90();
   input += synapse0x3734fd0();
   input += synapse0x3735010();
   input += synapse0x3735050();
   input += synapse0x3735090();
   input += synapse0x37350d0();
   input += synapse0x3735110();
   input += synapse0x3735150();
   input += synapse0x3735190();
   input += synapse0x37351d0();
   input += synapse0x3735210();
   input += synapse0x3735250();
   input += synapse0x3734ce0();
   input += synapse0x3734d20();
   input += synapse0x37353a0();
   input += synapse0x37353e0();
   input += synapse0x3735420();
   input += synapse0x3735460();
   input += synapse0x37354a0();
   input += synapse0x37354e0();
   return input;
}

double NNfunction-ss_cLsR::neuron0x3734b50() {
   double input = input0x3734b50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x3735520() {
   double input = -0.285406;
   input += synapse0x3735860();
   input += synapse0x37358a0();
   input += synapse0x37358e0();
   input += synapse0x3735920();
   input += synapse0x3735960();
   input += synapse0x37359a0();
   input += synapse0x37359e0();
   input += synapse0x3735a20();
   input += synapse0x3735a60();
   input += synapse0x3735aa0();
   input += synapse0x3735ae0();
   input += synapse0x3735b20();
   input += synapse0x3735b60();
   input += synapse0x3735ba0();
   input += synapse0x3735be0();
   input += synapse0x3735c20();
   input += synapse0x37356b0();
   input += synapse0x37356f0();
   input += synapse0x3735d70();
   input += synapse0x3735db0();
   input += synapse0x3735df0();
   input += synapse0x3735e30();
   input += synapse0x3735e70();
   input += synapse0x3735eb0();
   return input;
}

double NNfunction-ss_cLsR::neuron0x3735520() {
   double input = input0x3735520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x3735ef0() {
   double input = 1.24084;
   input += synapse0x372f9c0();
   input += synapse0x372fa00();
   input += synapse0x372fa40();
   input += synapse0x372fa80();
   input += synapse0x3736440();
   input += synapse0x3736480();
   input += synapse0x37364c0();
   input += synapse0x3736500();
   input += synapse0x3736540();
   input += synapse0x3736580();
   input += synapse0x37365c0();
   input += synapse0x3736600();
   input += synapse0x3736640();
   input += synapse0x3736680();
   input += synapse0x37366c0();
   input += synapse0x3736700();
   input += synapse0x3736080();
   input += synapse0x37360c0();
   input += synapse0x3736850();
   input += synapse0x3736890();
   input += synapse0x37368d0();
   input += synapse0x3736910();
   input += synapse0x3736950();
   input += synapse0x3736990();
   return input;
}

double NNfunction-ss_cLsR::neuron0x3735ef0() {
   double input = input0x3735ef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x37369d0() {
   double input = 0.0700112;
   input += synapse0x3736d10();
   input += synapse0x3736d50();
   input += synapse0x3736d90();
   input += synapse0x3736dd0();
   input += synapse0x3736e10();
   input += synapse0x3736e50();
   input += synapse0x3736e90();
   input += synapse0x3736ed0();
   input += synapse0x3736f10();
   input += synapse0x3736f50();
   input += synapse0x3736f90();
   input += synapse0x3736fd0();
   input += synapse0x3737010();
   input += synapse0x3737050();
   input += synapse0x3737090();
   input += synapse0x37370d0();
   input += synapse0x3736b60();
   input += synapse0x3736ba0();
   input += synapse0x3737220();
   input += synapse0x3737260();
   input += synapse0x37372a0();
   input += synapse0x37372e0();
   input += synapse0x3737320();
   input += synapse0x3737360();
   return input;
}

double NNfunction-ss_cLsR::neuron0x37369d0() {
   double input = input0x37369d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x37373a0() {
   double input = 0.319111;
   input += synapse0x37376e0();
   input += synapse0x3737720();
   input += synapse0x3737760();
   input += synapse0x37377a0();
   input += synapse0x37377e0();
   input += synapse0x3737820();
   input += synapse0x3737860();
   input += synapse0x37378a0();
   input += synapse0x37378e0();
   input += synapse0x3737920();
   input += synapse0x3737960();
   input += synapse0x37379a0();
   input += synapse0x37379e0();
   input += synapse0x3737a20();
   input += synapse0x3737a60();
   input += synapse0x3737aa0();
   input += synapse0x3737530();
   input += synapse0x3737570();
   input += synapse0x3734300();
   input += synapse0x3734340();
   input += synapse0x3734380();
   input += synapse0x37343c0();
   input += synapse0x3734400();
   input += synapse0x3734440();
   return input;
}

double NNfunction-ss_cLsR::neuron0x37373a0() {
   double input = input0x37373a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x3734480() {
   double input = -0.213317;
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
   input += synapse0x3738c00();
   input += synapse0x3738c40();
   input += synapse0x3738c80();
   input += synapse0x3734610();
   input += synapse0x3734650();
   input += synapse0x3738dd0();
   input += synapse0x3738e10();
   input += synapse0x3738e50();
   input += synapse0x3738e90();
   input += synapse0x3738ed0();
   input += synapse0x3738f10();
   return input;
}

double NNfunction-ss_cLsR::neuron0x3734480() {
   double input = input0x3734480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x3738f50() {
   double input = 0.755863;
   input += synapse0x3739290();
   input += synapse0x37392d0();
   input += synapse0x3739310();
   input += synapse0x3739350();
   input += synapse0x3739390();
   input += synapse0x37393d0();
   input += synapse0x3739410();
   input += synapse0x3739450();
   input += synapse0x3739490();
   input += synapse0x37394d0();
   input += synapse0x3739510();
   input += synapse0x3739550();
   input += synapse0x3739590();
   input += synapse0x37395d0();
   input += synapse0x3739610();
   input += synapse0x3739650();
   input += synapse0x37390e0();
   input += synapse0x3739120();
   input += synapse0x37397a0();
   input += synapse0x37397e0();
   input += synapse0x3739820();
   input += synapse0x3739860();
   input += synapse0x37398a0();
   input += synapse0x37398e0();
   return input;
}

double NNfunction-ss_cLsR::neuron0x3738f50() {
   double input = input0x3738f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x3739920() {
   double input = 0.228606;
   input += synapse0x3739c60();
   input += synapse0x3739ca0();
   input += synapse0x3739ce0();
   input += synapse0x3739d20();
   input += synapse0x3739d60();
   input += synapse0x3739da0();
   input += synapse0x3739de0();
   input += synapse0x3739e20();
   input += synapse0x3739e60();
   input += synapse0x3739ea0();
   input += synapse0x3739ee0();
   input += synapse0x3739f20();
   input += synapse0x3739f60();
   input += synapse0x3739fa0();
   input += synapse0x3739fe0();
   input += synapse0x373a020();
   input += synapse0x3739ab0();
   input += synapse0x3739af0();
   input += synapse0x373a170();
   input += synapse0x373a1b0();
   input += synapse0x373a1f0();
   input += synapse0x373a230();
   input += synapse0x373a270();
   input += synapse0x373a2b0();
   return input;
}

double NNfunction-ss_cLsR::neuron0x3739920() {
   double input = input0x3739920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x373a2f0() {
   double input = 1.25516;
   input += synapse0x373a630();
   input += synapse0x373a670();
   input += synapse0x373a6b0();
   input += synapse0x373a6f0();
   input += synapse0x373a730();
   input += synapse0x373a770();
   input += synapse0x373a7b0();
   input += synapse0x373a7f0();
   input += synapse0x373a830();
   input += synapse0x373a870();
   input += synapse0x373a8b0();
   input += synapse0x373a8f0();
   input += synapse0x373a930();
   input += synapse0x373a970();
   input += synapse0x373a9b0();
   input += synapse0x373a9f0();
   input += synapse0x373a480();
   input += synapse0x373a4c0();
   input += synapse0x373ab40();
   input += synapse0x373ab80();
   input += synapse0x373abc0();
   input += synapse0x373ac00();
   input += synapse0x373ac40();
   input += synapse0x373ac80();
   return input;
}

double NNfunction-ss_cLsR::neuron0x373a2f0() {
   double input = input0x373a2f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x373acc0() {
   double input = 1.95184;
   input += synapse0x373b000();
   input += synapse0x372c390();
   input += synapse0x372c3d0();
   input += synapse0x372c6d0();
   input += synapse0x372c710();
   input += synapse0x372ca10();
   input += synapse0x372ca50();
   input += synapse0x372cd50();
   input += synapse0x372cd90();
   input += synapse0x372d090();
   input += synapse0x372d0d0();
   input += synapse0x372d3d0();
   input += synapse0x372d410();
   input += synapse0x372d710();
   input += synapse0x372d750();
   input += synapse0x372da50();
   input += synapse0x372da90();
   input += synapse0x372dd90();
   input += synapse0x372ddd0();
   input += synapse0x372e0d0();
   input += synapse0x372e110();
   input += synapse0x372e410();
   input += synapse0x372e450();
   input += synapse0x372e750();
   return input;
}

double NNfunction-ss_cLsR::neuron0x373acc0() {
   double input = input0x373acc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x373cad0() {
   double input = -0.535298;
   input += synapse0x372e790();
   input += synapse0x372f450();
   input += synapse0x372f490();
   input += synapse0x373ae50();
   input += synapse0x373ae90();
   input += synapse0x372f790();
   input += synapse0x372f7d0();
   input += synapse0x34e7270();
   input += synapse0x34e72b0();
   input += synapse0x372ff10();
   input += synapse0x372ff50();
   input += synapse0x3730250();
   input += synapse0x3730290();
   input += synapse0x3730590();
   input += synapse0x37305d0();
   input += synapse0x37308d0();
   input += synapse0x3730910();
   input += synapse0x3730c10();
   input += synapse0x3730c50();
   input += synapse0x3730f50();
   input += synapse0x3730f90();
   input += synapse0x372ea90();
   input += synapse0x372ead0();
   input += synapse0x373cd70();
   return input;
}

double NNfunction-ss_cLsR::neuron0x373cad0() {
   double input = input0x373cad0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x373cdb0() {
   double input = 3.02582;
   input += synapse0x373d0f0();
   input += synapse0x373d130();
   input += synapse0x373d170();
   input += synapse0x373d1b0();
   input += synapse0x373d1f0();
   input += synapse0x373d230();
   input += synapse0x373d270();
   input += synapse0x373d2b0();
   input += synapse0x373d2f0();
   input += synapse0x373d330();
   input += synapse0x373d370();
   input += synapse0x373d3b0();
   input += synapse0x373d3f0();
   input += synapse0x373d430();
   input += synapse0x373d470();
   input += synapse0x373d4b0();
   input += synapse0x373cf40();
   input += synapse0x373cf80();
   input += synapse0x373d600();
   input += synapse0x373d640();
   input += synapse0x373d680();
   input += synapse0x373d6c0();
   input += synapse0x373d700();
   input += synapse0x373d740();
   return input;
}

double NNfunction-ss_cLsR::neuron0x373cdb0() {
   double input = input0x373cdb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x373d780() {
   double input = 1.75557;
   input += synapse0x373dac0();
   input += synapse0x373db00();
   input += synapse0x373db40();
   input += synapse0x373db80();
   input += synapse0x373dbc0();
   input += synapse0x373dc00();
   input += synapse0x373dc40();
   input += synapse0x373dc80();
   input += synapse0x373dcc0();
   input += synapse0x373dd00();
   input += synapse0x373dd40();
   input += synapse0x373dd80();
   input += synapse0x373ddc0();
   input += synapse0x373de00();
   input += synapse0x373de40();
   input += synapse0x373de80();
   input += synapse0x373d910();
   input += synapse0x373d950();
   input += synapse0x373dfd0();
   input += synapse0x373e010();
   input += synapse0x373e050();
   input += synapse0x373e090();
   input += synapse0x373e0d0();
   input += synapse0x373e110();
   return input;
}

double NNfunction-ss_cLsR::neuron0x373d780() {
   double input = input0x373d780();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x373e150() {
   double input = -2.45297;
   input += synapse0x373e490();
   input += synapse0x373e4d0();
   input += synapse0x373e510();
   input += synapse0x373e550();
   input += synapse0x373e590();
   input += synapse0x373e5d0();
   input += synapse0x373e610();
   input += synapse0x373e650();
   input += synapse0x373e690();
   input += synapse0x373e6d0();
   input += synapse0x373e710();
   input += synapse0x373e750();
   input += synapse0x373e790();
   input += synapse0x373e7d0();
   input += synapse0x373e810();
   input += synapse0x373e850();
   input += synapse0x373e2e0();
   input += synapse0x373e320();
   input += synapse0x373e9a0();
   input += synapse0x373e9e0();
   input += synapse0x373ea20();
   input += synapse0x373ea60();
   input += synapse0x373eaa0();
   input += synapse0x373eae0();
   return input;
}

double NNfunction-ss_cLsR::neuron0x373e150() {
   double input = input0x373e150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x373eb20() {
   double input = -0.856647;
   input += synapse0x373ee60();
   input += synapse0x373eea0();
   input += synapse0x373eee0();
   input += synapse0x373ef20();
   input += synapse0x373ef60();
   input += synapse0x373efa0();
   input += synapse0x373efe0();
   input += synapse0x373f020();
   input += synapse0x373f060();
   input += synapse0x373f0a0();
   input += synapse0x373f0e0();
   input += synapse0x373f120();
   input += synapse0x373f160();
   input += synapse0x373f1a0();
   input += synapse0x373f1e0();
   input += synapse0x373f220();
   input += synapse0x373ecb0();
   input += synapse0x373ecf0();
   input += synapse0x373f370();
   input += synapse0x373f3b0();
   input += synapse0x373f3f0();
   input += synapse0x373f430();
   input += synapse0x373f470();
   input += synapse0x373f4b0();
   return input;
}

double NNfunction-ss_cLsR::neuron0x373eb20() {
   double input = input0x373eb20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x373f4f0() {
   double input = -0.088301;
   input += synapse0x373f830();
   input += synapse0x373f870();
   input += synapse0x373f8b0();
   input += synapse0x373f8f0();
   input += synapse0x373f930();
   input += synapse0x373f970();
   input += synapse0x373f9b0();
   input += synapse0x373f9f0();
   input += synapse0x373fa30();
   input += synapse0x3737bf0();
   input += synapse0x3737c30();
   input += synapse0x3737c70();
   input += synapse0x3737cb0();
   input += synapse0x3737cf0();
   input += synapse0x3737d30();
   input += synapse0x3737d70();
   input += synapse0x373f680();
   input += synapse0x373f6c0();
   input += synapse0x3737ec0();
   input += synapse0x3737f00();
   input += synapse0x3737f40();
   input += synapse0x3737f80();
   input += synapse0x3737fc0();
   input += synapse0x3738000();
   return input;
}

double NNfunction-ss_cLsR::neuron0x373f4f0() {
   double input = input0x373f4f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x3738040() {
   double input = 0.567881;
   input += synapse0x3738380();
   input += synapse0x37383c0();
   input += synapse0x3738400();
   input += synapse0x3738440();
   input += synapse0x3738480();
   input += synapse0x37384c0();
   input += synapse0x3738500();
   input += synapse0x3738540();
   input += synapse0x3738580();
   input += synapse0x37385c0();
   input += synapse0x3738600();
   input += synapse0x3738640();
   input += synapse0x3738680();
   input += synapse0x37386c0();
   input += synapse0x3738700();
   input += synapse0x3738740();
   input += synapse0x37381d0();
   input += synapse0x3738210();
   input += synapse0x3738890();
   input += synapse0x37388d0();
   input += synapse0x3738910();
   input += synapse0x3738950();
   input += synapse0x3738990();
   input += synapse0x37389d0();
   return input;
}

double NNfunction-ss_cLsR::neuron0x3738040() {
   double input = input0x3738040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x3738a10() {
   double input = 0.425742;
   input += synapse0x3738ba0();
   input += synapse0x3741c30();
   input += synapse0x3741c70();
   input += synapse0x3741cb0();
   input += synapse0x3741cf0();
   input += synapse0x3741d30();
   input += synapse0x3741d70();
   input += synapse0x3741db0();
   input += synapse0x3741df0();
   input += synapse0x3741e30();
   input += synapse0x3741e70();
   input += synapse0x3741eb0();
   input += synapse0x3741ef0();
   input += synapse0x3741f30();
   input += synapse0x3741f70();
   input += synapse0x3741fb0();
   input += synapse0x3741a80();
   input += synapse0x3741ac0();
   input += synapse0x3742100();
   input += synapse0x3742140();
   input += synapse0x3742180();
   input += synapse0x37421c0();
   input += synapse0x3742200();
   input += synapse0x3742240();
   return input;
}

double NNfunction-ss_cLsR::neuron0x3738a10() {
   double input = input0x3738a10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x3742280() {
   double input = -1.66199;
   input += synapse0x37425c0();
   input += synapse0x3742600();
   input += synapse0x3742640();
   input += synapse0x3742680();
   input += synapse0x37426c0();
   input += synapse0x3742700();
   input += synapse0x3742740();
   input += synapse0x3742780();
   input += synapse0x37427c0();
   input += synapse0x3742800();
   input += synapse0x3742840();
   input += synapse0x3742880();
   input += synapse0x37428c0();
   input += synapse0x3742900();
   input += synapse0x3742940();
   input += synapse0x3742980();
   input += synapse0x3742410();
   input += synapse0x3742450();
   input += synapse0x3742ad0();
   input += synapse0x3742b10();
   input += synapse0x3742b50();
   input += synapse0x3742b90();
   input += synapse0x3742bd0();
   input += synapse0x3742c10();
   return input;
}

double NNfunction-ss_cLsR::neuron0x3742280() {
   double input = input0x3742280();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x3742c50() {
   double input = -0.361888;
   input += synapse0x3742f90();
   input += synapse0x3742fd0();
   input += synapse0x3743010();
   input += synapse0x3743050();
   input += synapse0x3743090();
   input += synapse0x37430d0();
   input += synapse0x3743110();
   input += synapse0x3743150();
   input += synapse0x3743190();
   input += synapse0x37431d0();
   input += synapse0x3743210();
   input += synapse0x3743250();
   input += synapse0x3743290();
   input += synapse0x37432d0();
   input += synapse0x3743310();
   input += synapse0x3743350();
   input += synapse0x3742de0();
   input += synapse0x3742e20();
   input += synapse0x37434a0();
   input += synapse0x37434e0();
   input += synapse0x3743520();
   input += synapse0x3743560();
   input += synapse0x37435a0();
   input += synapse0x37435e0();
   return input;
}

double NNfunction-ss_cLsR::neuron0x3742c50() {
   double input = input0x3742c50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x3743620() {
   double input = -0.289983;
   input += synapse0x3743960();
   input += synapse0x37439a0();
   input += synapse0x37439e0();
   input += synapse0x3743a20();
   input += synapse0x3743a60();
   input += synapse0x3743aa0();
   input += synapse0x3743ae0();
   input += synapse0x3743b20();
   input += synapse0x3743b60();
   input += synapse0x3743ba0();
   input += synapse0x3743be0();
   input += synapse0x3743c20();
   input += synapse0x3743c60();
   input += synapse0x3743ca0();
   input += synapse0x3743ce0();
   input += synapse0x3743d20();
   input += synapse0x37437b0();
   input += synapse0x37437f0();
   input += synapse0x3743e70();
   input += synapse0x3743eb0();
   input += synapse0x3743ef0();
   input += synapse0x3743f30();
   input += synapse0x3743f70();
   input += synapse0x3743fb0();
   return input;
}

double NNfunction-ss_cLsR::neuron0x3743620() {
   double input = input0x3743620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x3743ff0() {
   double input = 0.0503383;
   input += synapse0x3744330();
   input += synapse0x3744370();
   input += synapse0x37443b0();
   input += synapse0x37443f0();
   input += synapse0x3744430();
   input += synapse0x3744470();
   input += synapse0x37444b0();
   input += synapse0x37444f0();
   input += synapse0x3744530();
   input += synapse0x3744570();
   input += synapse0x37445b0();
   input += synapse0x37445f0();
   input += synapse0x3744630();
   input += synapse0x3744670();
   input += synapse0x37446b0();
   input += synapse0x37446f0();
   input += synapse0x3744180();
   input += synapse0x37441c0();
   input += synapse0x3744840();
   input += synapse0x3744880();
   input += synapse0x37448c0();
   input += synapse0x3744900();
   input += synapse0x3744940();
   input += synapse0x3744980();
   return input;
}

double NNfunction-ss_cLsR::neuron0x3743ff0() {
   double input = input0x3743ff0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x37449c0() {
   double input = 0.943564;
   input += synapse0x3744d00();
   input += synapse0x3744d40();
   input += synapse0x3744d80();
   input += synapse0x3744dc0();
   input += synapse0x3744e00();
   input += synapse0x3744e40();
   input += synapse0x3744e80();
   input += synapse0x3744ec0();
   input += synapse0x3744f00();
   input += synapse0x3744f40();
   input += synapse0x3744f80();
   input += synapse0x3744fc0();
   input += synapse0x3745000();
   input += synapse0x3745040();
   input += synapse0x3745080();
   input += synapse0x37450c0();
   input += synapse0x3744b50();
   input += synapse0x3744b90();
   input += synapse0x3745210();
   input += synapse0x3745250();
   input += synapse0x3745290();
   input += synapse0x37452d0();
   input += synapse0x3745310();
   input += synapse0x3745350();
   return input;
}

double NNfunction-ss_cLsR::neuron0x37449c0() {
   double input = input0x37449c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x3745390() {
   double input = -0.419593;
   input += synapse0x37456d0();
   input += synapse0x3745710();
   input += synapse0x3745750();
   input += synapse0x3745790();
   input += synapse0x37457d0();
   input += synapse0x3745810();
   input += synapse0x3745850();
   input += synapse0x3745890();
   input += synapse0x37458d0();
   input += synapse0x3745910();
   input += synapse0x3745950();
   input += synapse0x3745990();
   input += synapse0x37459d0();
   input += synapse0x3745a10();
   input += synapse0x3745a50();
   input += synapse0x3745a90();
   input += synapse0x3745520();
   input += synapse0x3745560();
   input += synapse0x3745be0();
   input += synapse0x3745c20();
   input += synapse0x3745c60();
   input += synapse0x3745ca0();
   input += synapse0x3745ce0();
   input += synapse0x3745d20();
   return input;
}

double NNfunction-ss_cLsR::neuron0x3745390() {
   double input = input0x3745390();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x3745d60() {
   double input = 0.956081;
   input += synapse0x37460a0();
   input += synapse0x37460e0();
   input += synapse0x3746120();
   input += synapse0x3746160();
   input += synapse0x37461a0();
   input += synapse0x37461e0();
   input += synapse0x3746220();
   input += synapse0x3746260();
   input += synapse0x37462a0();
   input += synapse0x37462e0();
   input += synapse0x3746320();
   input += synapse0x3746360();
   input += synapse0x37463a0();
   input += synapse0x37463e0();
   input += synapse0x3746420();
   input += synapse0x3746460();
   input += synapse0x3745ef0();
   input += synapse0x3745f30();
   input += synapse0x37465b0();
   input += synapse0x37465f0();
   input += synapse0x3746630();
   input += synapse0x3746670();
   input += synapse0x37466b0();
   input += synapse0x37466f0();
   return input;
}

double NNfunction-ss_cLsR::neuron0x3745d60() {
   double input = input0x3745d60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x3746730() {
   double input = 0.828139;
   input += synapse0x3746a70();
   input += synapse0x373b040();
   input += synapse0x373b080();
   input += synapse0x373b0c0();
   input += synapse0x373b310();
   input += synapse0x373b350();
   input += synapse0x373b390();
   input += synapse0x373b5e0();
   input += synapse0x373b620();
   input += synapse0x373b870();
   input += synapse0x373b8b0();
   input += synapse0x373b8f0();
   input += synapse0x373bb40();
   input += synapse0x373bb80();
   input += synapse0x373bdd0();
   input += synapse0x373be10();
   input += synapse0x37468c0();
   input += synapse0x3746900();
   input += synapse0x373bf60();
   input += synapse0x373c470();
   input += synapse0x373c4b0();
   input += synapse0x373c4f0();
   input += synapse0x373c740();
   input += synapse0x373c780();
   return input;
}

double NNfunction-ss_cLsR::neuron0x3746730() {
   double input = input0x3746730();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x373c7c0() {
   double input = -0.0454526;
   input += synapse0x373c030();
   input += synapse0x373c070();
   input += synapse0x373c0b0();
   input += synapse0x373c0f0();
   input += synapse0x373ca70();
   input += synapse0x3748dc0();
   input += synapse0x3748e00();
   input += synapse0x3748e40();
   input += synapse0x3748e80();
   input += synapse0x3748ec0();
   input += synapse0x3748f00();
   input += synapse0x3748f40();
   input += synapse0x3748f80();
   input += synapse0x3748fc0();
   input += synapse0x3749000();
   input += synapse0x3749040();
   input += synapse0x373c950();
   input += synapse0x373c990();
   input += synapse0x3749190();
   input += synapse0x37491d0();
   input += synapse0x3749210();
   input += synapse0x3749250();
   input += synapse0x3749290();
   input += synapse0x37492d0();
   return input;
}

double NNfunction-ss_cLsR::neuron0x373c7c0() {
   double input = input0x373c7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x3749310() {
   double input = 0.505071;
   input += synapse0x3749650();
   input += synapse0x3749690();
   input += synapse0x37496d0();
   input += synapse0x3749710();
   input += synapse0x3749750();
   input += synapse0x3749790();
   input += synapse0x37497d0();
   input += synapse0x3749810();
   input += synapse0x3749850();
   input += synapse0x3749890();
   input += synapse0x37498d0();
   input += synapse0x3749910();
   input += synapse0x3749950();
   input += synapse0x3749990();
   input += synapse0x37499d0();
   input += synapse0x3749a10();
   input += synapse0x37494a0();
   input += synapse0x37494e0();
   input += synapse0x3749b60();
   input += synapse0x3749ba0();
   input += synapse0x3749be0();
   input += synapse0x3749c20();
   input += synapse0x3749c60();
   input += synapse0x3749ca0();
   return input;
}

double NNfunction-ss_cLsR::neuron0x3749310() {
   double input = input0x3749310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x3749ce0() {
   double input = -0.0868661;
   input += synapse0x374a020();
   input += synapse0x374a060();
   input += synapse0x374a0a0();
   input += synapse0x374a0e0();
   input += synapse0x374a120();
   input += synapse0x374a160();
   input += synapse0x374a1a0();
   input += synapse0x374a1e0();
   input += synapse0x374a220();
   input += synapse0x374a260();
   input += synapse0x374a2a0();
   input += synapse0x374a2e0();
   input += synapse0x374a320();
   input += synapse0x374a360();
   input += synapse0x374a3a0();
   input += synapse0x374a3e0();
   input += synapse0x3749e70();
   input += synapse0x3749eb0();
   input += synapse0x374a530();
   input += synapse0x374a570();
   input += synapse0x374a5b0();
   input += synapse0x374a5f0();
   input += synapse0x374a630();
   input += synapse0x374a670();
   return input;
}

double NNfunction-ss_cLsR::neuron0x3749ce0() {
   double input = input0x3749ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x374a6b0() {
   double input = -0.834469;
   input += synapse0x374a9f0();
   input += synapse0x374aa30();
   input += synapse0x374aa70();
   input += synapse0x374aab0();
   input += synapse0x374aaf0();
   input += synapse0x374ab30();
   input += synapse0x374ab70();
   input += synapse0x374abb0();
   input += synapse0x374abf0();
   input += synapse0x374ac30();
   input += synapse0x374ac70();
   input += synapse0x374acb0();
   input += synapse0x374acf0();
   input += synapse0x374ad30();
   input += synapse0x374ad70();
   input += synapse0x374adb0();
   input += synapse0x374a840();
   input += synapse0x374a880();
   input += synapse0x374af00();
   input += synapse0x374af40();
   input += synapse0x374af80();
   input += synapse0x374afc0();
   input += synapse0x374b000();
   input += synapse0x374b040();
   return input;
}

double NNfunction-ss_cLsR::neuron0x374a6b0() {
   double input = input0x374a6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x374b080() {
   double input = 1.50388;
   input += synapse0x374b3c0();
   input += synapse0x374b400();
   input += synapse0x374b440();
   input += synapse0x374b480();
   input += synapse0x374b4c0();
   input += synapse0x374b500();
   input += synapse0x374b540();
   input += synapse0x374b580();
   input += synapse0x374b5c0();
   input += synapse0x374b600();
   input += synapse0x374b640();
   input += synapse0x374b680();
   input += synapse0x374b6c0();
   input += synapse0x374b700();
   input += synapse0x374b740();
   input += synapse0x374b780();
   input += synapse0x374b210();
   input += synapse0x374b250();
   input += synapse0x374b8d0();
   input += synapse0x374b910();
   input += synapse0x374b950();
   input += synapse0x374b990();
   input += synapse0x374b9d0();
   input += synapse0x374ba10();
   return input;
}

double NNfunction-ss_cLsR::neuron0x374b080() {
   double input = input0x374b080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x374ba50() {
   double input = -2.07713;
   input += synapse0x374bd90();
   input += synapse0x374bdd0();
   input += synapse0x374be10();
   input += synapse0x374be50();
   input += synapse0x374be90();
   input += synapse0x374bed0();
   input += synapse0x374bf10();
   input += synapse0x374bf50();
   input += synapse0x374bf90();
   input += synapse0x374bfd0();
   input += synapse0x374c010();
   input += synapse0x374c050();
   input += synapse0x374c090();
   input += synapse0x374c0d0();
   input += synapse0x374c110();
   input += synapse0x374c150();
   input += synapse0x374bbe0();
   input += synapse0x374bc20();
   input += synapse0x374c2a0();
   input += synapse0x374c2e0();
   input += synapse0x374c320();
   input += synapse0x374c360();
   input += synapse0x374c3a0();
   input += synapse0x374c3e0();
   return input;
}

double NNfunction-ss_cLsR::neuron0x374ba50() {
   double input = input0x374ba50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x374c420() {
   double input = -0.840503;
   input += synapse0x374c760();
   input += synapse0x374c7a0();
   input += synapse0x374c7e0();
   input += synapse0x374c820();
   input += synapse0x374c860();
   input += synapse0x374c8a0();
   input += synapse0x374c8e0();
   input += synapse0x374c920();
   input += synapse0x374c960();
   input += synapse0x374c9a0();
   input += synapse0x374c9e0();
   input += synapse0x374ca20();
   input += synapse0x374ca60();
   input += synapse0x374caa0();
   input += synapse0x374cae0();
   input += synapse0x374cb20();
   input += synapse0x374c5b0();
   input += synapse0x374c5f0();
   input += synapse0x374cc70();
   input += synapse0x374ccb0();
   input += synapse0x374ccf0();
   input += synapse0x374cd30();
   input += synapse0x374cd70();
   input += synapse0x374cdb0();
   return input;
}

double NNfunction-ss_cLsR::neuron0x374c420() {
   double input = input0x374c420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x374cdf0() {
   double input = -0.970761;
   input += synapse0x374d130();
   input += synapse0x374d170();
   input += synapse0x374d1b0();
   input += synapse0x374d1f0();
   input += synapse0x374d230();
   input += synapse0x374d270();
   input += synapse0x374d2b0();
   input += synapse0x374d2f0();
   input += synapse0x374d330();
   input += synapse0x374d370();
   input += synapse0x374d3b0();
   input += synapse0x374d3f0();
   input += synapse0x374d430();
   input += synapse0x374d470();
   input += synapse0x374d4b0();
   input += synapse0x374d4f0();
   input += synapse0x374cf80();
   input += synapse0x374cfc0();
   input += synapse0x374d640();
   input += synapse0x374d680();
   input += synapse0x374d6c0();
   input += synapse0x374d700();
   input += synapse0x374d740();
   input += synapse0x374d780();
   return input;
}

double NNfunction-ss_cLsR::neuron0x374cdf0() {
   double input = input0x374cdf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x374d7c0() {
   double input = -1.14174;
   input += synapse0x3736230();
   input += synapse0x3736270();
   input += synapse0x37362b0();
   input += synapse0x37362f0();
   input += synapse0x3736330();
   input += synapse0x3736370();
   input += synapse0x37363b0();
   input += synapse0x37363f0();
   input += synapse0x374df10();
   input += synapse0x374df50();
   input += synapse0x374df90();
   input += synapse0x374dfd0();
   input += synapse0x374e010();
   input += synapse0x374e050();
   input += synapse0x374e090();
   input += synapse0x374e0d0();
   input += synapse0x374d950();
   input += synapse0x374d990();
   input += synapse0x374e220();
   input += synapse0x374e260();
   input += synapse0x374e2a0();
   input += synapse0x374e2e0();
   input += synapse0x374e320();
   input += synapse0x374e360();
   return input;
}

double NNfunction-ss_cLsR::neuron0x374d7c0() {
   double input = input0x374d7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x374e3a0() {
   double input = 2.10213;
   input += synapse0x374e6e0();
   input += synapse0x374e720();
   input += synapse0x374e760();
   input += synapse0x374e7a0();
   input += synapse0x374e7e0();
   input += synapse0x374e820();
   input += synapse0x374e860();
   input += synapse0x374e8a0();
   input += synapse0x374e8e0();
   input += synapse0x374e920();
   input += synapse0x374e960();
   input += synapse0x374e9a0();
   input += synapse0x374e9e0();
   input += synapse0x374ea20();
   input += synapse0x374ea60();
   input += synapse0x374eaa0();
   input += synapse0x374e530();
   input += synapse0x374e570();
   input += synapse0x374ebf0();
   input += synapse0x374ec30();
   input += synapse0x374ec70();
   input += synapse0x374ecb0();
   input += synapse0x374ecf0();
   input += synapse0x374ed30();
   return input;
}

double NNfunction-ss_cLsR::neuron0x374e3a0() {
   double input = input0x374e3a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x374ed70() {
   double input = -0.0149569;
   input += synapse0x374f0b0();
   input += synapse0x374f0f0();
   input += synapse0x374f130();
   input += synapse0x374f170();
   input += synapse0x374f1b0();
   input += synapse0x374f1f0();
   input += synapse0x374f230();
   input += synapse0x374f270();
   input += synapse0x374f2b0();
   input += synapse0x374f2f0();
   input += synapse0x374f330();
   input += synapse0x374f370();
   input += synapse0x374f3b0();
   input += synapse0x374f3f0();
   input += synapse0x374f430();
   input += synapse0x374f470();
   input += synapse0x374ef00();
   input += synapse0x374ef40();
   input += synapse0x373fa70();
   input += synapse0x373fab0();
   input += synapse0x373faf0();
   input += synapse0x373fb30();
   input += synapse0x373fb70();
   input += synapse0x373fbb0();
   return input;
}

double NNfunction-ss_cLsR::neuron0x374ed70() {
   double input = input0x374ed70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x373fbf0() {
   double input = 0.388051;
   input += synapse0x373ff30();
   input += synapse0x373ff70();
   input += synapse0x373ffb0();
   input += synapse0x373fff0();
   input += synapse0x3740030();
   input += synapse0x3740070();
   input += synapse0x37400b0();
   input += synapse0x37400f0();
   input += synapse0x3740130();
   input += synapse0x3740170();
   input += synapse0x37401b0();
   input += synapse0x37401f0();
   input += synapse0x3740230();
   input += synapse0x3740270();
   input += synapse0x37402b0();
   input += synapse0x37402f0();
   input += synapse0x373fd80();
   input += synapse0x373fdc0();
   input += synapse0x3740440();
   input += synapse0x3740480();
   input += synapse0x37404c0();
   input += synapse0x3740500();
   input += synapse0x3740540();
   input += synapse0x3740580();
   return input;
}

double NNfunction-ss_cLsR::neuron0x373fbf0() {
   double input = input0x373fbf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x37405c0() {
   double input = 3.50417;
   input += synapse0x3740900();
   input += synapse0x3740940();
   input += synapse0x3740980();
   input += synapse0x37409c0();
   input += synapse0x3740a00();
   input += synapse0x3740a40();
   input += synapse0x3740a80();
   input += synapse0x3740ac0();
   input += synapse0x3740b00();
   input += synapse0x3740b40();
   input += synapse0x3740b80();
   input += synapse0x3740bc0();
   input += synapse0x3740c00();
   input += synapse0x3740c40();
   input += synapse0x3740c80();
   input += synapse0x3740cc0();
   input += synapse0x3740750();
   input += synapse0x3740790();
   input += synapse0x3740e10();
   input += synapse0x3740e50();
   input += synapse0x3740e90();
   input += synapse0x3740ed0();
   input += synapse0x3740f10();
   input += synapse0x3740f50();
   return input;
}

double NNfunction-ss_cLsR::neuron0x37405c0() {
   double input = input0x37405c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x3740f90() {
   double input = 1.49417;
   input += synapse0x37412d0();
   input += synapse0x3741310();
   input += synapse0x3741350();
   input += synapse0x3741390();
   input += synapse0x37413d0();
   input += synapse0x3741410();
   input += synapse0x3741450();
   input += synapse0x3741490();
   input += synapse0x37414d0();
   input += synapse0x3741510();
   input += synapse0x3741550();
   input += synapse0x3741590();
   input += synapse0x37415d0();
   input += synapse0x3741610();
   input += synapse0x3741650();
   input += synapse0x3741690();
   input += synapse0x3741120();
   input += synapse0x3741160();
   input += synapse0x37417e0();
   input += synapse0x3741820();
   input += synapse0x3741860();
   input += synapse0x37418a0();
   input += synapse0x37418e0();
   input += synapse0x3741920();
   return input;
}

double NNfunction-ss_cLsR::neuron0x3740f90() {
   double input = input0x3740f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x37535d0() {
   double input = 0.46995;
   input += synapse0x37537f0();
   input += synapse0x3753830();
   input += synapse0x3753870();
   input += synapse0x37538b0();
   input += synapse0x37538f0();
   input += synapse0x3753930();
   input += synapse0x3753970();
   input += synapse0x37539b0();
   input += synapse0x37539f0();
   input += synapse0x3753a30();
   input += synapse0x3753a70();
   input += synapse0x3753ab0();
   input += synapse0x3753af0();
   input += synapse0x3753b30();
   input += synapse0x3753b70();
   input += synapse0x3753bb0();
   input += synapse0x3741960();
   input += synapse0x37419a0();
   input += synapse0x3753d00();
   input += synapse0x3753d40();
   input += synapse0x3753d80();
   input += synapse0x3753dc0();
   input += synapse0x3753e00();
   input += synapse0x3753e40();
   return input;
}

double NNfunction-ss_cLsR::neuron0x37535d0() {
   double input = input0x37535d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x3753e80() {
   double input = 0.824328;
   input += synapse0x37541c0();
   input += synapse0x3754200();
   input += synapse0x3754240();
   input += synapse0x3754280();
   input += synapse0x37542c0();
   input += synapse0x3754300();
   input += synapse0x3754340();
   input += synapse0x3754380();
   input += synapse0x37543c0();
   input += synapse0x3754400();
   input += synapse0x3754440();
   input += synapse0x3754480();
   input += synapse0x37544c0();
   input += synapse0x3754500();
   input += synapse0x3754540();
   input += synapse0x3754580();
   input += synapse0x3754010();
   input += synapse0x3754050();
   input += synapse0x37546d0();
   input += synapse0x3754710();
   input += synapse0x3754750();
   input += synapse0x3754790();
   input += synapse0x37547d0();
   input += synapse0x3754810();
   return input;
}

double NNfunction-ss_cLsR::neuron0x3753e80() {
   double input = input0x3753e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x3754850() {
   double input = -0.370254;
   input += synapse0x3754b90();
   input += synapse0x3754bd0();
   input += synapse0x3754c10();
   input += synapse0x3754c50();
   input += synapse0x3754c90();
   input += synapse0x3754cd0();
   input += synapse0x3754d10();
   input += synapse0x3754d50();
   input += synapse0x3754d90();
   input += synapse0x3754dd0();
   input += synapse0x3754e10();
   input += synapse0x3754e50();
   input += synapse0x3754e90();
   input += synapse0x3754ed0();
   input += synapse0x3754f10();
   input += synapse0x3754f50();
   input += synapse0x37549e0();
   input += synapse0x3754a20();
   input += synapse0x37550a0();
   input += synapse0x37550e0();
   input += synapse0x3755120();
   input += synapse0x3755160();
   input += synapse0x37551a0();
   input += synapse0x37551e0();
   return input;
}

double NNfunction-ss_cLsR::neuron0x3754850() {
   double input = input0x3754850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x3755220() {
   double input = 0.766774;
   input += synapse0x3755560();
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
   input += synapse0x3755920();
   input += synapse0x37553b0();
   input += synapse0x37553f0();
   input += synapse0x3755a70();
   input += synapse0x3755ab0();
   input += synapse0x3755af0();
   input += synapse0x3755b30();
   input += synapse0x3755b70();
   input += synapse0x3755bb0();
   return input;
}

double NNfunction-ss_cLsR::neuron0x3755220() {
   double input = input0x3755220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x375c420() {
   double input = -2.12699;
   input += synapse0x34f5ad0();
   input += synapse0x34f5b10();
   input += synapse0x3733660();
   input += synapse0x37336a0();
   input += synapse0x3734030();
   input += synapse0x3734070();
   input += synapse0x3734e00();
   input += synapse0x3734e40();
   input += synapse0x37357d0();
   input += synapse0x3735810();
   input += synapse0x37361a0();
   input += synapse0x37361e0();
   input += synapse0x3736c80();
   input += synapse0x3736cc0();
   input += synapse0x3737650();
   input += synapse0x3737690();
   input += synapse0x3734730();
   input += synapse0x3734770();
   input += synapse0x3739200();
   input += synapse0x3739240();
   input += synapse0x3739bd0();
   input += synapse0x3739c10();
   input += synapse0x373a5a0();
   input += synapse0x373a5e0();
   input += synapse0x373af70();
   input += synapse0x373afb0();
   input += synapse0x372f110();
   input += synapse0x372f150();
   input += synapse0x373d060();
   input += synapse0x373d0a0();
   input += synapse0x373da30();
   input += synapse0x373da70();
   input += synapse0x373e400();
   input += synapse0x373e440();
   input += synapse0x373edd0();
   input += synapse0x373ee10();
   input += synapse0x373f7a0();
   input += synapse0x373f7e0();
   input += synapse0x37382f0();
   input += synapse0x3738330();
   input += synapse0x3741ba0();
   input += synapse0x3741be0();
   input += synapse0x3742530();
   input += synapse0x3742570();
   input += synapse0x3742f00();
   input += synapse0x3742f40();
   input += synapse0x37438d0();
   input += synapse0x3743910();
   input += synapse0x37442a0();
   input += synapse0x37442e0();
   return input;
}

double NNfunction-ss_cLsR::neuron0x375c420() {
   double input = input0x375c420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x375c7c0() {
   double input = 1.27559;
   input += synapse0x37469e0();
   input += synapse0x3746a20();
   input += synapse0x373bfa0();
   input += synapse0x373bfe0();
   input += synapse0x37495c0();
   input += synapse0x3749600();
   input += synapse0x3749f90();
   input += synapse0x3749fd0();
   input += synapse0x374a960();
   input += synapse0x374a9a0();
   input += synapse0x374b330();
   input += synapse0x374b370();
   input += synapse0x374bd00();
   input += synapse0x374bd40();
   input += synapse0x374c6d0();
   input += synapse0x374c710();
   input += synapse0x374d0a0();
   input += synapse0x374d0e0();
   input += synapse0x374da70();
   input += synapse0x374dab0();
   input += synapse0x374e650();
   input += synapse0x374e690();
   input += synapse0x374f020();
   input += synapse0x374f060();
   input += synapse0x373fea0();
   input += synapse0x373fee0();
   input += synapse0x3740870();
   input += synapse0x37408b0();
   input += synapse0x3741240();
   input += synapse0x3741280();
   input += synapse0x3753760();
   input += synapse0x37537a0();
   input += synapse0x3754130();
   input += synapse0x3754170();
   input += synapse0x3754b00();
   input += synapse0x3754b40();
   input += synapse0x37554d0();
   input += synapse0x3755510();
   input += synapse0x37313c0();
   input += synapse0x3731400();
   input += synapse0x3744c70();
   input += synapse0x3744cb0();
   input += synapse0x3755bf0();
   input += synapse0x3755c30();
   input += synapse0x3755c70();
   input += synapse0x3755cb0();
   input += synapse0x375cb60();
   input += synapse0x375cba0();
   input += synapse0x375cbe0();
   input += synapse0x375cc20();
   return input;
}

double NNfunction-ss_cLsR::neuron0x375c7c0() {
   double input = input0x375c7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x375cc60() {
   double input = -0.728064;
   input += synapse0x375cfa0();
   input += synapse0x375cfe0();
   input += synapse0x375d020();
   input += synapse0x375d060();
   input += synapse0x375d0a0();
   input += synapse0x375d0e0();
   input += synapse0x375d120();
   input += synapse0x375d160();
   input += synapse0x375d1a0();
   input += synapse0x375d1e0();
   input += synapse0x375d220();
   input += synapse0x375d260();
   input += synapse0x375d2a0();
   input += synapse0x375d2e0();
   input += synapse0x375d320();
   input += synapse0x375d360();
   input += synapse0x375cdf0();
   input += synapse0x375ce30();
   input += synapse0x375d4b0();
   input += synapse0x375d4f0();
   input += synapse0x375d530();
   input += synapse0x375d570();
   input += synapse0x375d5b0();
   input += synapse0x375d5f0();
   input += synapse0x375d630();
   input += synapse0x375d670();
   input += synapse0x375d6b0();
   input += synapse0x375d6f0();
   input += synapse0x375d730();
   input += synapse0x375d770();
   input += synapse0x375d7b0();
   input += synapse0x375d7f0();
   input += synapse0x375d3a0();
   input += synapse0x375d3e0();
   input += synapse0x375d420();
   input += synapse0x375d460();
   input += synapse0x375da40();
   input += synapse0x375da80();
   input += synapse0x375dac0();
   input += synapse0x375db00();
   input += synapse0x375db40();
   input += synapse0x375db80();
   input += synapse0x375dbc0();
   input += synapse0x375dc00();
   input += synapse0x375dc40();
   input += synapse0x375dc80();
   input += synapse0x375dcc0();
   input += synapse0x375dd00();
   input += synapse0x375dd40();
   input += synapse0x375dd80();
   return input;
}

double NNfunction-ss_cLsR::neuron0x375cc60() {
   double input = input0x375cc60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x375ddc0() {
   double input = -0.428669;
   input += synapse0x375e100();
   input += synapse0x375e140();
   input += synapse0x375e180();
   input += synapse0x375e1c0();
   input += synapse0x375e200();
   input += synapse0x375e240();
   input += synapse0x375e280();
   input += synapse0x375e2c0();
   input += synapse0x375e300();
   input += synapse0x375e340();
   input += synapse0x375e380();
   input += synapse0x375e3c0();
   input += synapse0x375e400();
   input += synapse0x375e440();
   input += synapse0x375e480();
   input += synapse0x375e4c0();
   input += synapse0x375df50();
   input += synapse0x375df90();
   input += synapse0x375e610();
   input += synapse0x375e650();
   input += synapse0x375e690();
   input += synapse0x375e6d0();
   input += synapse0x375e710();
   input += synapse0x375e750();
   input += synapse0x375e790();
   input += synapse0x375e7d0();
   input += synapse0x375e810();
   input += synapse0x375e850();
   input += synapse0x375e890();
   input += synapse0x375e8d0();
   input += synapse0x375e910();
   input += synapse0x375e950();
   input += synapse0x375e500();
   input += synapse0x375e540();
   input += synapse0x375e580();
   input += synapse0x375e5c0();
   input += synapse0x375eba0();
   input += synapse0x375ebe0();
   input += synapse0x375ec20();
   input += synapse0x375ec60();
   input += synapse0x375eca0();
   input += synapse0x375ece0();
   input += synapse0x375ed20();
   input += synapse0x375ed60();
   input += synapse0x375eda0();
   input += synapse0x375ede0();
   input += synapse0x375ee20();
   input += synapse0x375ee60();
   input += synapse0x375eea0();
   input += synapse0x375eee0();
   return input;
}

double NNfunction-ss_cLsR::neuron0x375ddc0() {
   double input = input0x375ddc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x375ef20() {
   double input = 2.46145;
   input += synapse0x375f260();
   input += synapse0x375f2a0();
   input += synapse0x375f2e0();
   input += synapse0x375f320();
   input += synapse0x375f360();
   input += synapse0x375f3a0();
   input += synapse0x375f3e0();
   input += synapse0x375f420();
   input += synapse0x375f460();
   input += synapse0x375f4a0();
   input += synapse0x375f4e0();
   input += synapse0x375f520();
   input += synapse0x375f560();
   input += synapse0x375f5a0();
   input += synapse0x375f5e0();
   input += synapse0x375f620();
   input += synapse0x375f0b0();
   input += synapse0x375f0f0();
   input += synapse0x375f770();
   input += synapse0x375f7b0();
   input += synapse0x375f7f0();
   input += synapse0x375f830();
   input += synapse0x375f870();
   input += synapse0x375f8b0();
   input += synapse0x375f8f0();
   input += synapse0x375f930();
   input += synapse0x375f970();
   input += synapse0x375f9b0();
   input += synapse0x375f9f0();
   input += synapse0x375fa30();
   input += synapse0x375fa70();
   input += synapse0x375fab0();
   input += synapse0x375f660();
   input += synapse0x375f6a0();
   input += synapse0x375f6e0();
   input += synapse0x375f720();
   input += synapse0x375fd00();
   input += synapse0x375fd40();
   input += synapse0x375fd80();
   input += synapse0x375fdc0();
   input += synapse0x375fe00();
   input += synapse0x375fe40();
   input += synapse0x375fe80();
   input += synapse0x375fec0();
   input += synapse0x375ff00();
   input += synapse0x375ff40();
   input += synapse0x375ff80();
   input += synapse0x375ffc0();
   input += synapse0x3760000();
   input += synapse0x3760040();
   return input;
}

double NNfunction-ss_cLsR::neuron0x375ef20() {
   double input = input0x375ef20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction-ss_cLsR::input0x3760080() {
   double input = 2.95353;
   input += synapse0x37602a0();
   input += synapse0x37602e0();
   input += synapse0x3760320();
   input += synapse0x3760360();
   input += synapse0x37603a0();
   return input;
}

double NNfunction-ss_cLsR::neuron0x3760080() {
   double input = input0x3760080();
   return (input * 1)+0;
}

double NNfunction-ss_cLsR::synapse0x372c030() {
   return (neuron0x372c170()*0.00966134);
}

double NNfunction-ss_cLsR::synapse0x372c070() {
   return (neuron0x372c4b0()*-0.00326521);
}

double NNfunction-ss_cLsR::synapse0x3731450() {
   return (neuron0x372c7f0()*-0.0141285);
}

double NNfunction-ss_cLsR::synapse0x3731490() {
   return (neuron0x372cb30()*0.0541022);
}

double NNfunction-ss_cLsR::synapse0x37314d0() {
   return (neuron0x372ce70()*0.00353949);
}

double NNfunction-ss_cLsR::synapse0x3731510() {
   return (neuron0x372d1b0()*-0.00210355);
}

double NNfunction-ss_cLsR::synapse0x3731550() {
   return (neuron0x372d4f0()*-0.00151639);
}

double NNfunction-ss_cLsR::synapse0x3731590() {
   return (neuron0x372d830()*-0.00544576);
}

double NNfunction-ss_cLsR::synapse0x37315d0() {
   return (neuron0x372db70()*-0.00881253);
}

double NNfunction-ss_cLsR::synapse0x3731610() {
   return (neuron0x372deb0()*0.0155874);
}

double NNfunction-ss_cLsR::synapse0x3731650() {
   return (neuron0x372e1f0()*0.00873778);
}

double NNfunction-ss_cLsR::synapse0x3731690() {
   return (neuron0x372e530()*0.0177345);
}

double NNfunction-ss_cLsR::synapse0x37316d0() {
   return (neuron0x372e870()*-0.248465);
}

double NNfunction-ss_cLsR::synapse0x3731710() {
   return (neuron0x372ebb0()*0.000482685);
}

double NNfunction-ss_cLsR::synapse0x3731750() {
   return (neuron0x372eef0()*0.0195146);
}

double NNfunction-ss_cLsR::synapse0x3731790() {
   return (neuron0x372f230()*0.0236019);
}

double NNfunction-ss_cLsR::synapse0x372bfa0() {
   return (neuron0x372f570()*0.0129006);
}

double NNfunction-ss_cLsR::synapse0x372bfe0() {
   return (neuron0x372fad0()*0.00887994);
}

double NNfunction-ss_cLsR::synapse0x34e7390() {
   return (neuron0x372fcf0()*0.644793);
}

double NNfunction-ss_cLsR::synapse0x34e73d0() {
   return (neuron0x3730030()*-0.00218544);
}

double NNfunction-ss_cLsR::synapse0x37319f0() {
   return (neuron0x3730370()*0.00114376);
}

double NNfunction-ss_cLsR::synapse0x3731a30() {
   return (neuron0x37306b0()*-0.00815807);
}

double NNfunction-ss_cLsR::synapse0x3731a70() {
   return (neuron0x37309f0()*-0.000721091);
}

double NNfunction-ss_cLsR::synapse0x3731ab0() {
   return (neuron0x3730d30()*-0.00409422);
}

double NNfunction-ss_cLsR::synapse0x3731e30() {
   return (neuron0x372c170()*-0.0432786);
}

double NNfunction-ss_cLsR::synapse0x3731e70() {
   return (neuron0x372c4b0()*-0.00610095);
}

double NNfunction-ss_cLsR::synapse0x3731eb0() {
   return (neuron0x372c7f0()*-0.0463565);
}

double NNfunction-ss_cLsR::synapse0x3731ef0() {
   return (neuron0x372cb30()*7.03383);
}

double NNfunction-ss_cLsR::synapse0x3731f30() {
   return (neuron0x372ce70()*-0.00292383);
}

double NNfunction-ss_cLsR::synapse0x3731f70() {
   return (neuron0x372d1b0()*0.00189964);
}

double NNfunction-ss_cLsR::synapse0x3731fb0() {
   return (neuron0x372d4f0()*0.00247228);
}

double NNfunction-ss_cLsR::synapse0x3731ff0() {
   return (neuron0x372d830()*-0.0169423);
}

double NNfunction-ss_cLsR::synapse0x3732030() {
   return (neuron0x372db70()*-0.0279263);
}

double NNfunction-ss_cLsR::synapse0x37318e0() {
   return (neuron0x372deb0()*-0.00935839);
}

double NNfunction-ss_cLsR::synapse0x3731920() {
   return (neuron0x372e1f0()*-0.052179);
}

double NNfunction-ss_cLsR::synapse0x3731960() {
   return (neuron0x372e530()*-0.0348348);
}

double NNfunction-ss_cLsR::synapse0x37319a0() {
   return (neuron0x372e870()*0.0814168);
}

double NNfunction-ss_cLsR::synapse0x3732280() {
   return (neuron0x372ebb0()*-0.0462262);
}

double NNfunction-ss_cLsR::synapse0x37322c0() {
   return (neuron0x372eef0()*0.0308871);
}

double NNfunction-ss_cLsR::synapse0x3732300() {
   return (neuron0x372f230()*0.0154264);
}

double NNfunction-ss_cLsR::synapse0x3731c80() {
   return (neuron0x372f570()*0.0165556);
}

double NNfunction-ss_cLsR::synapse0x3731cc0() {
   return (neuron0x372fad0()*-0.0210133);
}

double NNfunction-ss_cLsR::synapse0x3732450() {
   return (neuron0x372fcf0()*0.0697008);
}

double NNfunction-ss_cLsR::synapse0x3732490() {
   return (neuron0x3730030()*-0.0191172);
}

double NNfunction-ss_cLsR::synapse0x37324d0() {
   return (neuron0x3730370()*0.0177701);
}

double NNfunction-ss_cLsR::synapse0x3732510() {
   return (neuron0x37306b0()*-0.00851364);
}

double NNfunction-ss_cLsR::synapse0x3732550() {
   return (neuron0x37309f0()*0.0244401);
}

double NNfunction-ss_cLsR::synapse0x3732590() {
   return (neuron0x3730d30()*0.0571143);
}

double NNfunction-ss_cLsR::synapse0x3732910() {
   return (neuron0x372c170()*-0.0109415);
}

double NNfunction-ss_cLsR::synapse0x3732950() {
   return (neuron0x372c4b0()*0.00756231);
}

double NNfunction-ss_cLsR::synapse0x3732990() {
   return (neuron0x372c7f0()*0.00351387);
}

double NNfunction-ss_cLsR::synapse0x37329d0() {
   return (neuron0x372cb30()*2.37669);
}

double NNfunction-ss_cLsR::synapse0x3732a10() {
   return (neuron0x372ce70()*0.00364081);
}

double NNfunction-ss_cLsR::synapse0x3732a50() {
   return (neuron0x372d1b0()*0.0038279);
}

double NNfunction-ss_cLsR::synapse0x3732a90() {
   return (neuron0x372d4f0()*0.0123841);
}

double NNfunction-ss_cLsR::synapse0x3732ad0() {
   return (neuron0x372d830()*0.0165591);
}

double NNfunction-ss_cLsR::synapse0x3732b10() {
   return (neuron0x372db70()*0.00379581);
}

double NNfunction-ss_cLsR::synapse0x3732b50() {
   return (neuron0x372deb0()*0.0179139);
}

double NNfunction-ss_cLsR::synapse0x3732b90() {
   return (neuron0x372e1f0()*0.0220684);
}

double NNfunction-ss_cLsR::synapse0x3732bd0() {
   return (neuron0x372e530()*0.0290772);
}

double NNfunction-ss_cLsR::synapse0x3732c10() {
   return (neuron0x372e870()*-0.096792);
}

double NNfunction-ss_cLsR::synapse0x3732c50() {
   return (neuron0x372ebb0()*0.00636504);
}

double NNfunction-ss_cLsR::synapse0x3732c90() {
   return (neuron0x372eef0()*-0.0131922);
}

double NNfunction-ss_cLsR::synapse0x3732cd0() {
   return (neuron0x372f230()*0.0125561);
}

double NNfunction-ss_cLsR::synapse0x3732760() {
   return (neuron0x372f570()*0.00186214);
}

double NNfunction-ss_cLsR::synapse0x37327a0() {
   return (neuron0x372fad0()*0.00454897);
}

double NNfunction-ss_cLsR::synapse0x34e64e0() {
   return (neuron0x372fcf0()*-0.0593945);
}

double NNfunction-ss_cLsR::synapse0x34f52e0() {
   return (neuron0x3730030()*-0.000411863);
}

double NNfunction-ss_cLsR::synapse0x34f5320() {
   return (neuron0x3730370()*-0.00174211);
}

double NNfunction-ss_cLsR::synapse0x371b200() {
   return (neuron0x37306b0()*-0.00475503);
}

double NNfunction-ss_cLsR::synapse0x371b240() {
   return (neuron0x37309f0()*-0.0218437);
}

double NNfunction-ss_cLsR::synapse0x371b280() {
   return (neuron0x3730d30()*-0.0109375);
}

double NNfunction-ss_cLsR::synapse0x34f5b60() {
   return (neuron0x372c170()*-0.22385);
}

double NNfunction-ss_cLsR::synapse0x3732200() {
   return (neuron0x372c4b0()*0.183934);
}

double NNfunction-ss_cLsR::synapse0x3732240() {
   return (neuron0x372c7f0()*-0.124429);
}

double NNfunction-ss_cLsR::synapse0x3732e20() {
   return (neuron0x372cb30()*-0.49293);
}

double NNfunction-ss_cLsR::synapse0x3732e60() {
   return (neuron0x372ce70()*-0.386703);
}

double NNfunction-ss_cLsR::synapse0x3732ea0() {
   return (neuron0x372d1b0()*-0.0409977);
}

double NNfunction-ss_cLsR::synapse0x3732ee0() {
   return (neuron0x372d4f0()*-0.291822);
}

double NNfunction-ss_cLsR::synapse0x3732f20() {
   return (neuron0x372d830()*0.147167);
}

double NNfunction-ss_cLsR::synapse0x3732f60() {
   return (neuron0x372db70()*1.33074);
}

double NNfunction-ss_cLsR::synapse0x3732fa0() {
   return (neuron0x372deb0()*-0.259428);
}

double NNfunction-ss_cLsR::synapse0x3732fe0() {
   return (neuron0x372e1f0()*-1.62579);
}

double NNfunction-ss_cLsR::synapse0x3733020() {
   return (neuron0x372e530()*0.181113);
}

double NNfunction-ss_cLsR::synapse0x3733060() {
   return (neuron0x372e870()*-0.162854);
}

double NNfunction-ss_cLsR::synapse0x37330a0() {
   return (neuron0x372ebb0()*-0.144198);
}

double NNfunction-ss_cLsR::synapse0x37330e0() {
   return (neuron0x372eef0()*-0.430146);
}

double NNfunction-ss_cLsR::synapse0x3733120() {
   return (neuron0x372f230()*-0.151502);
}

double NNfunction-ss_cLsR::synapse0x372c0b0() {
   return (neuron0x372f570()*-0.296533);
}

double NNfunction-ss_cLsR::synapse0x372c0f0() {
   return (neuron0x372fad0()*0.0850607);
}

double NNfunction-ss_cLsR::synapse0x372c130() {
   return (neuron0x372fcf0()*1.06111);
}

double NNfunction-ss_cLsR::synapse0x3733270() {
   return (neuron0x3730030()*-0.714575);
}

double NNfunction-ss_cLsR::synapse0x37332b0() {
   return (neuron0x3730370()*-0.0795764);
}

double NNfunction-ss_cLsR::synapse0x37332f0() {
   return (neuron0x37306b0()*0.774774);
}

double NNfunction-ss_cLsR::synapse0x3733330() {
   return (neuron0x37309f0()*-0.77295);
}

double NNfunction-ss_cLsR::synapse0x3733370() {
   return (neuron0x3730d30()*-0.932094);
}

double NNfunction-ss_cLsR::synapse0x37336f0() {
   return (neuron0x372c170()*0.0350303);
}

double NNfunction-ss_cLsR::synapse0x3733730() {
   return (neuron0x372c4b0()*-0.0742546);
}

double NNfunction-ss_cLsR::synapse0x3733770() {
   return (neuron0x372c7f0()*-0.0583052);
}

double NNfunction-ss_cLsR::synapse0x37337b0() {
   return (neuron0x372cb30()*2.02689);
}

double NNfunction-ss_cLsR::synapse0x37337f0() {
   return (neuron0x372ce70()*-0.032018);
}

double NNfunction-ss_cLsR::synapse0x3733830() {
   return (neuron0x372d1b0()*0.0239872);
}

double NNfunction-ss_cLsR::synapse0x3733870() {
   return (neuron0x372d4f0()*-0.0831457);
}

double NNfunction-ss_cLsR::synapse0x37338b0() {
   return (neuron0x372d830()*-0.00627652);
}

double NNfunction-ss_cLsR::synapse0x37338f0() {
   return (neuron0x372db70()*0.0317144);
}

double NNfunction-ss_cLsR::synapse0x3733930() {
   return (neuron0x372deb0()*-0.0375757);
}

double NNfunction-ss_cLsR::synapse0x3733970() {
   return (neuron0x372e1f0()*-0.0671378);
}

double NNfunction-ss_cLsR::synapse0x37339b0() {
   return (neuron0x372e530()*-0.023042);
}

double NNfunction-ss_cLsR::synapse0x37339f0() {
   return (neuron0x372e870()*-0.131719);
}

double NNfunction-ss_cLsR::synapse0x3733a30() {
   return (neuron0x372ebb0()*-0.0636912);
}

double NNfunction-ss_cLsR::synapse0x3733a70() {
   return (neuron0x372eef0()*0.0482217);
}

double NNfunction-ss_cLsR::synapse0x3733ab0() {
   return (neuron0x372f230()*-0.0742933);
}

double NNfunction-ss_cLsR::synapse0x3733540() {
   return (neuron0x372f570()*-0.0600294);
}

double NNfunction-ss_cLsR::synapse0x3733580() {
   return (neuron0x372fad0()*-0.0523584);
}

double NNfunction-ss_cLsR::synapse0x3733c00() {
   return (neuron0x372fcf0()*-0.253625);
}

double NNfunction-ss_cLsR::synapse0x3733c40() {
   return (neuron0x3730030()*0.0439633);
}

double NNfunction-ss_cLsR::synapse0x3733c80() {
   return (neuron0x3730370()*-0.0136612);
}

double NNfunction-ss_cLsR::synapse0x3733cc0() {
   return (neuron0x37306b0()*-0.00689321);
}

double NNfunction-ss_cLsR::synapse0x3733d00() {
   return (neuron0x37309f0()*0.00667674);
}

double NNfunction-ss_cLsR::synapse0x3733d40() {
   return (neuron0x3730d30()*0.0201854);
}

double NNfunction-ss_cLsR::synapse0x37340c0() {
   return (neuron0x372c170()*-0.692947);
}

double NNfunction-ss_cLsR::synapse0x3734100() {
   return (neuron0x372c4b0()*0.333524);
}

double NNfunction-ss_cLsR::synapse0x3734140() {
   return (neuron0x372c7f0()*-0.455068);
}

double NNfunction-ss_cLsR::synapse0x3734180() {
   return (neuron0x372cb30()*-0.855995);
}

double NNfunction-ss_cLsR::synapse0x37341c0() {
   return (neuron0x372ce70()*-0.342153);
}

double NNfunction-ss_cLsR::synapse0x3734200() {
   return (neuron0x372d1b0()*-0.207597);
}

double NNfunction-ss_cLsR::synapse0x3734240() {
   return (neuron0x372d4f0()*-0.535315);
}

double NNfunction-ss_cLsR::synapse0x3734280() {
   return (neuron0x372d830()*0.789597);
}

double NNfunction-ss_cLsR::synapse0x37342c0() {
   return (neuron0x372db70()*-0.0750159);
}

double NNfunction-ss_cLsR::synapse0x34f5630() {
   return (neuron0x372deb0()*0.663223);
}

double NNfunction-ss_cLsR::synapse0x34f5670() {
   return (neuron0x372e1f0()*-0.135883);
}

double NNfunction-ss_cLsR::synapse0x34f56b0() {
   return (neuron0x372e530()*0.0112666);
}

double NNfunction-ss_cLsR::synapse0x34f56f0() {
   return (neuron0x372e870()*-0.0603962);
}

double NNfunction-ss_cLsR::synapse0x34f5730() {
   return (neuron0x372ebb0()*0.29092);
}

double NNfunction-ss_cLsR::synapse0x34f5770() {
   return (neuron0x372eef0()*-0.10068);
}

double NNfunction-ss_cLsR::synapse0x34f57b0() {
   return (neuron0x372f230()*0.44006);
}

double NNfunction-ss_cLsR::synapse0x3733f10() {
   return (neuron0x372f570()*0.327817);
}

double NNfunction-ss_cLsR::synapse0x3733f50() {
   return (neuron0x372fad0()*-0.194037);
}

double NNfunction-ss_cLsR::synapse0x34f5900() {
   return (neuron0x372fcf0()*0.176616);
}

double NNfunction-ss_cLsR::synapse0x34f5940() {
   return (neuron0x3730030()*-0.585664);
}

double NNfunction-ss_cLsR::synapse0x34f5980() {
   return (neuron0x3730370()*-0.021131);
}

double NNfunction-ss_cLsR::synapse0x34f59c0() {
   return (neuron0x37306b0()*-0.503674);
}

double NNfunction-ss_cLsR::synapse0x34f5a00() {
   return (neuron0x37309f0()*-0.366469);
}

double NNfunction-ss_cLsR::synapse0x3734b10() {
   return (neuron0x3730d30()*-0.630546);
}

double NNfunction-ss_cLsR::synapse0x3734e90() {
   return (neuron0x372c170()*-0.0227364);
}

double NNfunction-ss_cLsR::synapse0x3734ed0() {
   return (neuron0x372c4b0()*0.165463);
}

double NNfunction-ss_cLsR::synapse0x3734f10() {
   return (neuron0x372c7f0()*0.29419);
}

double NNfunction-ss_cLsR::synapse0x3734f50() {
   return (neuron0x372cb30()*0.115856);
}

double NNfunction-ss_cLsR::synapse0x3734f90() {
   return (neuron0x372ce70()*0.279498);
}

double NNfunction-ss_cLsR::synapse0x3734fd0() {
   return (neuron0x372d1b0()*0.109449);
}

double NNfunction-ss_cLsR::synapse0x3735010() {
   return (neuron0x372d4f0()*0.648456);
}

double NNfunction-ss_cLsR::synapse0x3735050() {
   return (neuron0x372d830()*0.560692);
}

double NNfunction-ss_cLsR::synapse0x3735090() {
   return (neuron0x372db70()*0.605899);
}

double NNfunction-ss_cLsR::synapse0x37350d0() {
   return (neuron0x372deb0()*-0.120209);
}

double NNfunction-ss_cLsR::synapse0x3735110() {
   return (neuron0x372e1f0()*-0.194896);
}

double NNfunction-ss_cLsR::synapse0x3735150() {
   return (neuron0x372e530()*0.328688);
}

double NNfunction-ss_cLsR::synapse0x3735190() {
   return (neuron0x372e870()*0.756197);
}

double NNfunction-ss_cLsR::synapse0x37351d0() {
   return (neuron0x372ebb0()*0.952039);
}

double NNfunction-ss_cLsR::synapse0x3735210() {
   return (neuron0x372eef0()*0.847722);
}

double NNfunction-ss_cLsR::synapse0x3735250() {
   return (neuron0x372f230()*0.111426);
}

double NNfunction-ss_cLsR::synapse0x3734ce0() {
   return (neuron0x372f570()*-1.13821);
}

double NNfunction-ss_cLsR::synapse0x3734d20() {
   return (neuron0x372fad0()*0.514722);
}

double NNfunction-ss_cLsR::synapse0x37353a0() {
   return (neuron0x372fcf0()*-0.792478);
}

double NNfunction-ss_cLsR::synapse0x37353e0() {
   return (neuron0x3730030()*-0.788425);
}

double NNfunction-ss_cLsR::synapse0x3735420() {
   return (neuron0x3730370()*1.36622);
}

double NNfunction-ss_cLsR::synapse0x3735460() {
   return (neuron0x37306b0()*-0.181536);
}

double NNfunction-ss_cLsR::synapse0x37354a0() {
   return (neuron0x37309f0()*-0.216864);
}

double NNfunction-ss_cLsR::synapse0x37354e0() {
   return (neuron0x3730d30()*-0.375166);
}

double NNfunction-ss_cLsR::synapse0x3735860() {
   return (neuron0x372c170()*-0.011188);
}

double NNfunction-ss_cLsR::synapse0x37358a0() {
   return (neuron0x372c4b0()*0.0641712);
}

double NNfunction-ss_cLsR::synapse0x37358e0() {
   return (neuron0x372c7f0()*0.110838);
}

double NNfunction-ss_cLsR::synapse0x3735920() {
   return (neuron0x372cb30()*-1.05393);
}

double NNfunction-ss_cLsR::synapse0x3735960() {
   return (neuron0x372ce70()*-0.185192);
}

double NNfunction-ss_cLsR::synapse0x37359a0() {
   return (neuron0x372d1b0()*0.023169);
}

double NNfunction-ss_cLsR::synapse0x37359e0() {
   return (neuron0x372d4f0()*-0.101341);
}

double NNfunction-ss_cLsR::synapse0x3735a20() {
   return (neuron0x372d830()*-0.164416);
}

double NNfunction-ss_cLsR::synapse0x3735a60() {
   return (neuron0x372db70()*-0.162081);
}

double NNfunction-ss_cLsR::synapse0x3735aa0() {
   return (neuron0x372deb0()*-0.302589);
}

double NNfunction-ss_cLsR::synapse0x3735ae0() {
   return (neuron0x372e1f0()*0.162166);
}

double NNfunction-ss_cLsR::synapse0x3735b20() {
   return (neuron0x372e530()*-0.324485);
}

double NNfunction-ss_cLsR::synapse0x3735b60() {
   return (neuron0x372e870()*0.362901);
}

double NNfunction-ss_cLsR::synapse0x3735ba0() {
   return (neuron0x372ebb0()*0.189356);
}

double NNfunction-ss_cLsR::synapse0x3735be0() {
   return (neuron0x372eef0()*0.304582);
}

double NNfunction-ss_cLsR::synapse0x3735c20() {
   return (neuron0x372f230()*0.191822);
}

double NNfunction-ss_cLsR::synapse0x37356b0() {
   return (neuron0x372f570()*0.253407);
}

double NNfunction-ss_cLsR::synapse0x37356f0() {
   return (neuron0x372fad0()*0.609836);
}

double NNfunction-ss_cLsR::synapse0x3735d70() {
   return (neuron0x372fcf0()*0.546469);
}

double NNfunction-ss_cLsR::synapse0x3735db0() {
   return (neuron0x3730030()*0.0219817);
}

double NNfunction-ss_cLsR::synapse0x3735df0() {
   return (neuron0x3730370()*-0.16079);
}

double NNfunction-ss_cLsR::synapse0x3735e30() {
   return (neuron0x37306b0()*0.322796);
}

double NNfunction-ss_cLsR::synapse0x3735e70() {
   return (neuron0x37309f0()*-0.030871);
}

double NNfunction-ss_cLsR::synapse0x3735eb0() {
   return (neuron0x3730d30()*0.231417);
}

double NNfunction-ss_cLsR::synapse0x372f9c0() {
   return (neuron0x372c170()*-0.0212302);
}

double NNfunction-ss_cLsR::synapse0x372fa00() {
   return (neuron0x372c4b0()*-0.00199833);
}

double NNfunction-ss_cLsR::synapse0x372fa40() {
   return (neuron0x372c7f0()*-0.091814);
}

double NNfunction-ss_cLsR::synapse0x372fa80() {
   return (neuron0x372cb30()*8.24777);
}

double NNfunction-ss_cLsR::synapse0x3736440() {
   return (neuron0x372ce70()*-0.0138377);
}

double NNfunction-ss_cLsR::synapse0x3736480() {
   return (neuron0x372d1b0()*-0.0358244);
}

double NNfunction-ss_cLsR::synapse0x37364c0() {
   return (neuron0x372d4f0()*-0.00103414);
}

double NNfunction-ss_cLsR::synapse0x3736500() {
   return (neuron0x372d830()*-0.0164937);
}

double NNfunction-ss_cLsR::synapse0x3736540() {
   return (neuron0x372db70()*-0.0479113);
}

double NNfunction-ss_cLsR::synapse0x3736580() {
   return (neuron0x372deb0()*0.00619959);
}

double NNfunction-ss_cLsR::synapse0x37365c0() {
   return (neuron0x372e1f0()*-0.0165565);
}

double NNfunction-ss_cLsR::synapse0x3736600() {
   return (neuron0x372e530()*0.0170342);
}

double NNfunction-ss_cLsR::synapse0x3736640() {
   return (neuron0x372e870()*-0.191436);
}

double NNfunction-ss_cLsR::synapse0x3736680() {
   return (neuron0x372ebb0()*-0.0465288);
}

double NNfunction-ss_cLsR::synapse0x37366c0() {
   return (neuron0x372eef0()*0.0196449);
}

double NNfunction-ss_cLsR::synapse0x3736700() {
   return (neuron0x372f230()*0.00664992);
}

double NNfunction-ss_cLsR::synapse0x3736080() {
   return (neuron0x372f570()*-0.0202768);
}

double NNfunction-ss_cLsR::synapse0x37360c0() {
   return (neuron0x372fad0()*-0.00101155);
}

double NNfunction-ss_cLsR::synapse0x3736850() {
   return (neuron0x372fcf0()*-0.2141);
}

double NNfunction-ss_cLsR::synapse0x3736890() {
   return (neuron0x3730030()*-0.0145333);
}

double NNfunction-ss_cLsR::synapse0x37368d0() {
   return (neuron0x3730370()*0.0408122);
}

double NNfunction-ss_cLsR::synapse0x3736910() {
   return (neuron0x37306b0()*0.0016133);
}

double NNfunction-ss_cLsR::synapse0x3736950() {
   return (neuron0x37309f0()*0.0351581);
}

double NNfunction-ss_cLsR::synapse0x3736990() {
   return (neuron0x3730d30()*0.0153823);
}

double NNfunction-ss_cLsR::synapse0x3736d10() {
   return (neuron0x372c170()*-0.00833823);
}

double NNfunction-ss_cLsR::synapse0x3736d50() {
   return (neuron0x372c4b0()*0.000286703);
}

double NNfunction-ss_cLsR::synapse0x3736d90() {
   return (neuron0x372c7f0()*0.0428236);
}

double NNfunction-ss_cLsR::synapse0x3736dd0() {
   return (neuron0x372cb30()*-1.99329);
}

double NNfunction-ss_cLsR::synapse0x3736e10() {
   return (neuron0x372ce70()*0.0108477);
}

double NNfunction-ss_cLsR::synapse0x3736e50() {
   return (neuron0x372d1b0()*0.0261298);
}

double NNfunction-ss_cLsR::synapse0x3736e90() {
   return (neuron0x372d4f0()*0.0198634);
}

double NNfunction-ss_cLsR::synapse0x3736ed0() {
   return (neuron0x372d830()*0.00571128);
}

double NNfunction-ss_cLsR::synapse0x3736f10() {
   return (neuron0x372db70()*0.0082602);
}

double NNfunction-ss_cLsR::synapse0x3736f50() {
   return (neuron0x372deb0()*-0.00541868);
}

double NNfunction-ss_cLsR::synapse0x3736f90() {
   return (neuron0x372e1f0()*0.0061993);
}

double NNfunction-ss_cLsR::synapse0x3736fd0() {
   return (neuron0x372e530()*0.0303928);
}

double NNfunction-ss_cLsR::synapse0x3737010() {
   return (neuron0x372e870()*-0.221897);
}

double NNfunction-ss_cLsR::synapse0x3737050() {
   return (neuron0x372ebb0()*-0.00912775);
}

double NNfunction-ss_cLsR::synapse0x3737090() {
   return (neuron0x372eef0()*0.0140884);
}

double NNfunction-ss_cLsR::synapse0x37370d0() {
   return (neuron0x372f230()*0.0303422);
}

double NNfunction-ss_cLsR::synapse0x3736b60() {
   return (neuron0x372f570()*0.0141716);
}

double NNfunction-ss_cLsR::synapse0x3736ba0() {
   return (neuron0x372fad0()*0.00183139);
}

double NNfunction-ss_cLsR::synapse0x3737220() {
   return (neuron0x372fcf0()*-0.224397);
}

double NNfunction-ss_cLsR::synapse0x3737260() {
   return (neuron0x3730030()*0.00534074);
}

double NNfunction-ss_cLsR::synapse0x37372a0() {
   return (neuron0x3730370()*-0.00484342);
}

double NNfunction-ss_cLsR::synapse0x37372e0() {
   return (neuron0x37306b0()*-0.00174906);
}

double NNfunction-ss_cLsR::synapse0x3737320() {
   return (neuron0x37309f0()*-0.00446872);
}

double NNfunction-ss_cLsR::synapse0x3737360() {
   return (neuron0x3730d30()*0.00345137);
}

double NNfunction-ss_cLsR::synapse0x37376e0() {
   return (neuron0x372c170()*0.305717);
}

double NNfunction-ss_cLsR::synapse0x3737720() {
   return (neuron0x372c4b0()*-0.0320457);
}

double NNfunction-ss_cLsR::synapse0x3737760() {
   return (neuron0x372c7f0()*-0.0409868);
}

double NNfunction-ss_cLsR::synapse0x37377a0() {
   return (neuron0x372cb30()*0.283672);
}

double NNfunction-ss_cLsR::synapse0x37377e0() {
   return (neuron0x372ce70()*-0.371721);
}

double NNfunction-ss_cLsR::synapse0x3737820() {
   return (neuron0x372d1b0()*-0.301334);
}

double NNfunction-ss_cLsR::synapse0x3737860() {
   return (neuron0x372d4f0()*1.59207);
}

double NNfunction-ss_cLsR::synapse0x37378a0() {
   return (neuron0x372d830()*-0.541238);
}

double NNfunction-ss_cLsR::synapse0x37378e0() {
   return (neuron0x372db70()*-0.739078);
}

double NNfunction-ss_cLsR::synapse0x3737920() {
   return (neuron0x372deb0()*-0.105947);
}

double NNfunction-ss_cLsR::synapse0x3737960() {
   return (neuron0x372e1f0()*-0.987491);
}

double NNfunction-ss_cLsR::synapse0x37379a0() {
   return (neuron0x372e530()*0.65735);
}

double NNfunction-ss_cLsR::synapse0x37379e0() {
   return (neuron0x372e870()*1.12501);
}

double NNfunction-ss_cLsR::synapse0x3737a20() {
   return (neuron0x372ebb0()*0.567302);
}

double NNfunction-ss_cLsR::synapse0x3737a60() {
   return (neuron0x372eef0()*-0.389834);
}

double NNfunction-ss_cLsR::synapse0x3737aa0() {
   return (neuron0x372f230()*0.063229);
}

double NNfunction-ss_cLsR::synapse0x3737530() {
   return (neuron0x372f570()*-0.194007);
}

double NNfunction-ss_cLsR::synapse0x3737570() {
   return (neuron0x372fad0()*1.16681);
}

double NNfunction-ss_cLsR::synapse0x3734300() {
   return (neuron0x372fcf0()*-0.278623);
}

double NNfunction-ss_cLsR::synapse0x3734340() {
   return (neuron0x3730030()*-0.114154);
}

double NNfunction-ss_cLsR::synapse0x3734380() {
   return (neuron0x3730370()*-0.56022);
}

double NNfunction-ss_cLsR::synapse0x37343c0() {
   return (neuron0x37306b0()*-0.643729);
}

double NNfunction-ss_cLsR::synapse0x3734400() {
   return (neuron0x37309f0()*0.607543);
}

double NNfunction-ss_cLsR::synapse0x3734440() {
   return (neuron0x3730d30()*0.0584774);
}

double NNfunction-ss_cLsR::synapse0x37347c0() {
   return (neuron0x372c170()*0.0715119);
}

double NNfunction-ss_cLsR::synapse0x3734800() {
   return (neuron0x372c4b0()*-0.0373399);
}

double NNfunction-ss_cLsR::synapse0x3734840() {
   return (neuron0x372c7f0()*-1.00488);
}

double NNfunction-ss_cLsR::synapse0x3734880() {
   return (neuron0x372cb30()*0.682672);
}

double NNfunction-ss_cLsR::synapse0x37348c0() {
   return (neuron0x372ce70()*0.271338);
}

double NNfunction-ss_cLsR::synapse0x3734900() {
   return (neuron0x372d1b0()*0.0756933);
}

double NNfunction-ss_cLsR::synapse0x3734940() {
   return (neuron0x372d4f0()*-0.0196083);
}

double NNfunction-ss_cLsR::synapse0x3734980() {
   return (neuron0x372d830()*-0.262002);
}

double NNfunction-ss_cLsR::synapse0x37349c0() {
   return (neuron0x372db70()*-0.058658);
}

double NNfunction-ss_cLsR::synapse0x3734a00() {
   return (neuron0x372deb0()*0.0361598);
}

double NNfunction-ss_cLsR::synapse0x3734a40() {
   return (neuron0x372e1f0()*0.356469);
}

double NNfunction-ss_cLsR::synapse0x3734a80() {
   return (neuron0x372e530()*-0.879639);
}

double NNfunction-ss_cLsR::synapse0x3734ac0() {
   return (neuron0x372e870()*0.518671);
}

double NNfunction-ss_cLsR::synapse0x3738c00() {
   return (neuron0x372ebb0()*-0.332509);
}

double NNfunction-ss_cLsR::synapse0x3738c40() {
   return (neuron0x372eef0()*-0.813949);
}

double NNfunction-ss_cLsR::synapse0x3738c80() {
   return (neuron0x372f230()*-0.58706);
}

double NNfunction-ss_cLsR::synapse0x3734610() {
   return (neuron0x372f570()*0.288707);
}

double NNfunction-ss_cLsR::synapse0x3734650() {
   return (neuron0x372fad0()*-0.598356);
}

double NNfunction-ss_cLsR::synapse0x3738dd0() {
   return (neuron0x372fcf0()*0.225038);
}

double NNfunction-ss_cLsR::synapse0x3738e10() {
   return (neuron0x3730030()*0.234776);
}

double NNfunction-ss_cLsR::synapse0x3738e50() {
   return (neuron0x3730370()*0.539701);
}

double NNfunction-ss_cLsR::synapse0x3738e90() {
   return (neuron0x37306b0()*0.147909);
}

double NNfunction-ss_cLsR::synapse0x3738ed0() {
   return (neuron0x37309f0()*-0.0867578);
}

double NNfunction-ss_cLsR::synapse0x3738f10() {
   return (neuron0x3730d30()*-0.261078);
}

double NNfunction-ss_cLsR::synapse0x3739290() {
   return (neuron0x372c170()*-0.178928);
}

double NNfunction-ss_cLsR::synapse0x37392d0() {
   return (neuron0x372c4b0()*-0.185269);
}

double NNfunction-ss_cLsR::synapse0x3739310() {
   return (neuron0x372c7f0()*-1.20473);
}

double NNfunction-ss_cLsR::synapse0x3739350() {
   return (neuron0x372cb30()*0.0667799);
}

double NNfunction-ss_cLsR::synapse0x3739390() {
   return (neuron0x372ce70()*-0.269985);
}

double NNfunction-ss_cLsR::synapse0x37393d0() {
   return (neuron0x372d1b0()*0.045884);
}

double NNfunction-ss_cLsR::synapse0x3739410() {
   return (neuron0x372d4f0()*-0.605393);
}

double NNfunction-ss_cLsR::synapse0x3739450() {
   return (neuron0x372d830()*-0.136317);
}

double NNfunction-ss_cLsR::synapse0x3739490() {
   return (neuron0x372db70()*-0.0565643);
}

double NNfunction-ss_cLsR::synapse0x37394d0() {
   return (neuron0x372deb0()*0.112846);
}

double NNfunction-ss_cLsR::synapse0x3739510() {
   return (neuron0x372e1f0()*0.113219);
}

double NNfunction-ss_cLsR::synapse0x3739550() {
   return (neuron0x372e530()*-0.113543);
}

double NNfunction-ss_cLsR::synapse0x3739590() {
   return (neuron0x372e870()*0.354322);
}

double NNfunction-ss_cLsR::synapse0x37395d0() {
   return (neuron0x372ebb0()*-0.293749);
}

double NNfunction-ss_cLsR::synapse0x3739610() {
   return (neuron0x372eef0()*-0.479119);
}

double NNfunction-ss_cLsR::synapse0x3739650() {
   return (neuron0x372f230()*0.0454525);
}

double NNfunction-ss_cLsR::synapse0x37390e0() {
   return (neuron0x372f570()*-1.01749);
}

double NNfunction-ss_cLsR::synapse0x3739120() {
   return (neuron0x372fad0()*0.268294);
}

double NNfunction-ss_cLsR::synapse0x37397a0() {
   return (neuron0x372fcf0()*0.182303);
}

double NNfunction-ss_cLsR::synapse0x37397e0() {
   return (neuron0x3730030()*0.287527);
}

double NNfunction-ss_cLsR::synapse0x3739820() {
   return (neuron0x3730370()*0.209278);
}

double NNfunction-ss_cLsR::synapse0x3739860() {
   return (neuron0x37306b0()*0.330975);
}

double NNfunction-ss_cLsR::synapse0x37398a0() {
   return (neuron0x37309f0()*-0.594048);
}

double NNfunction-ss_cLsR::synapse0x37398e0() {
   return (neuron0x3730d30()*0.730855);
}

double NNfunction-ss_cLsR::synapse0x3739c60() {
   return (neuron0x372c170()*0.0109577);
}

double NNfunction-ss_cLsR::synapse0x3739ca0() {
   return (neuron0x372c4b0()*0.718557);
}

double NNfunction-ss_cLsR::synapse0x3739ce0() {
   return (neuron0x372c7f0()*0.870018);
}

double NNfunction-ss_cLsR::synapse0x3739d20() {
   return (neuron0x372cb30()*1.34056);
}

double NNfunction-ss_cLsR::synapse0x3739d60() {
   return (neuron0x372ce70()*-1.00196);
}

double NNfunction-ss_cLsR::synapse0x3739da0() {
   return (neuron0x372d1b0()*0.0131133);
}

double NNfunction-ss_cLsR::synapse0x3739de0() {
   return (neuron0x372d4f0()*-0.657195);
}

double NNfunction-ss_cLsR::synapse0x3739e20() {
   return (neuron0x372d830()*0.166706);
}

double NNfunction-ss_cLsR::synapse0x3739e60() {
   return (neuron0x372db70()*-0.229575);
}

double NNfunction-ss_cLsR::synapse0x3739ea0() {
   return (neuron0x372deb0()*-1.01352);
}

double NNfunction-ss_cLsR::synapse0x3739ee0() {
   return (neuron0x372e1f0()*0.161034);
}

double NNfunction-ss_cLsR::synapse0x3739f20() {
   return (neuron0x372e530()*-0.15723);
}

double NNfunction-ss_cLsR::synapse0x3739f60() {
   return (neuron0x372e870()*0.623264);
}

double NNfunction-ss_cLsR::synapse0x3739fa0() {
   return (neuron0x372ebb0()*0.530289);
}

double NNfunction-ss_cLsR::synapse0x3739fe0() {
   return (neuron0x372eef0()*-0.786733);
}

double NNfunction-ss_cLsR::synapse0x373a020() {
   return (neuron0x372f230()*0.815144);
}

double NNfunction-ss_cLsR::synapse0x3739ab0() {
   return (neuron0x372f570()*1.4433);
}

double NNfunction-ss_cLsR::synapse0x3739af0() {
   return (neuron0x372fad0()*-0.206821);
}

double NNfunction-ss_cLsR::synapse0x373a170() {
   return (neuron0x372fcf0()*-2.46699);
}

double NNfunction-ss_cLsR::synapse0x373a1b0() {
   return (neuron0x3730030()*0.37225);
}

double NNfunction-ss_cLsR::synapse0x373a1f0() {
   return (neuron0x3730370()*0.38463);
}

double NNfunction-ss_cLsR::synapse0x373a230() {
   return (neuron0x37306b0()*0.165585);
}

double NNfunction-ss_cLsR::synapse0x373a270() {
   return (neuron0x37309f0()*-0.201853);
}

double NNfunction-ss_cLsR::synapse0x373a2b0() {
   return (neuron0x3730d30()*-0.765941);
}

double NNfunction-ss_cLsR::synapse0x373a630() {
   return (neuron0x372c170()*0.0398199);
}

double NNfunction-ss_cLsR::synapse0x373a670() {
   return (neuron0x372c4b0()*0.0690373);
}

double NNfunction-ss_cLsR::synapse0x373a6b0() {
   return (neuron0x372c7f0()*0.226851);
}

double NNfunction-ss_cLsR::synapse0x373a6f0() {
   return (neuron0x372cb30()*-0.803237);
}

double NNfunction-ss_cLsR::synapse0x373a730() {
   return (neuron0x372ce70()*0.0865492);
}

double NNfunction-ss_cLsR::synapse0x373a770() {
   return (neuron0x372d1b0()*0.0671969);
}

double NNfunction-ss_cLsR::synapse0x373a7b0() {
   return (neuron0x372d4f0()*-0.0113095);
}

double NNfunction-ss_cLsR::synapse0x373a7f0() {
   return (neuron0x372d830()*-0.0815395);
}

double NNfunction-ss_cLsR::synapse0x373a830() {
   return (neuron0x372db70()*0.0222792);
}

double NNfunction-ss_cLsR::synapse0x373a870() {
   return (neuron0x372deb0()*0.0141702);
}

double NNfunction-ss_cLsR::synapse0x373a8b0() {
   return (neuron0x372e1f0()*0.0180471);
}

double NNfunction-ss_cLsR::synapse0x373a8f0() {
   return (neuron0x372e530()*-0.084438);
}

double NNfunction-ss_cLsR::synapse0x373a930() {
   return (neuron0x372e870()*-0.480291);
}

double NNfunction-ss_cLsR::synapse0x373a970() {
   return (neuron0x372ebb0()*-0.0876487);
}

double NNfunction-ss_cLsR::synapse0x373a9b0() {
   return (neuron0x372eef0()*0.141105);
}

double NNfunction-ss_cLsR::synapse0x373a9f0() {
   return (neuron0x372f230()*0.0275541);
}

double NNfunction-ss_cLsR::synapse0x373a480() {
   return (neuron0x372f570()*0.0892536);
}

double NNfunction-ss_cLsR::synapse0x373a4c0() {
   return (neuron0x372fad0()*0.0235399);
}

double NNfunction-ss_cLsR::synapse0x373ab40() {
   return (neuron0x372fcf0()*-0.105894);
}

double NNfunction-ss_cLsR::synapse0x373ab80() {
   return (neuron0x3730030()*-0.0132022);
}

double NNfunction-ss_cLsR::synapse0x373abc0() {
   return (neuron0x3730370()*0.000596985);
}

double NNfunction-ss_cLsR::synapse0x373ac00() {
   return (neuron0x37306b0()*-0.0482235);
}

double NNfunction-ss_cLsR::synapse0x373ac40() {
   return (neuron0x37309f0()*0.0134768);
}

double NNfunction-ss_cLsR::synapse0x373ac80() {
   return (neuron0x3730d30()*0.0283656);
}

double NNfunction-ss_cLsR::synapse0x373b000() {
   return (neuron0x372c170()*-0.0897616);
}

double NNfunction-ss_cLsR::synapse0x372c390() {
   return (neuron0x372c4b0()*0.0187938);
}

double NNfunction-ss_cLsR::synapse0x372c3d0() {
   return (neuron0x372c7f0()*0.198641);
}

double NNfunction-ss_cLsR::synapse0x372c6d0() {
   return (neuron0x372cb30()*-0.0400433);
}

double NNfunction-ss_cLsR::synapse0x372c710() {
   return (neuron0x372ce70()*-0.0864445);
}

double NNfunction-ss_cLsR::synapse0x372ca10() {
   return (neuron0x372d1b0()*-0.16257);
}

double NNfunction-ss_cLsR::synapse0x372ca50() {
   return (neuron0x372d4f0()*-0.330357);
}

double NNfunction-ss_cLsR::synapse0x372cd50() {
   return (neuron0x372d830()*-0.076955);
}

double NNfunction-ss_cLsR::synapse0x372cd90() {
   return (neuron0x372db70()*0.051206);
}

double NNfunction-ss_cLsR::synapse0x372d090() {
   return (neuron0x372deb0()*0.224134);
}

double NNfunction-ss_cLsR::synapse0x372d0d0() {
   return (neuron0x372e1f0()*-0.104616);
}

double NNfunction-ss_cLsR::synapse0x372d3d0() {
   return (neuron0x372e530()*-0.0103403);
}

double NNfunction-ss_cLsR::synapse0x372d410() {
   return (neuron0x372e870()*-0.923796);
}

double NNfunction-ss_cLsR::synapse0x372d710() {
   return (neuron0x372ebb0()*-0.232968);
}

double NNfunction-ss_cLsR::synapse0x372d750() {
   return (neuron0x372eef0()*-0.18048);
}

double NNfunction-ss_cLsR::synapse0x372da50() {
   return (neuron0x372f230()*-0.0336846);
}

double NNfunction-ss_cLsR::synapse0x372da90() {
   return (neuron0x372f570()*7.08483e-05);
}

double NNfunction-ss_cLsR::synapse0x372dd90() {
   return (neuron0x372fad0()*-0.213499);
}

double NNfunction-ss_cLsR::synapse0x372ddd0() {
   return (neuron0x372fcf0()*-0.809522);
}

double NNfunction-ss_cLsR::synapse0x372e0d0() {
   return (neuron0x3730030()*0.0558457);
}

double NNfunction-ss_cLsR::synapse0x372e110() {
   return (neuron0x3730370()*-0.0848281);
}

double NNfunction-ss_cLsR::synapse0x372e410() {
   return (neuron0x37306b0()*0.000698743);
}

double NNfunction-ss_cLsR::synapse0x372e450() {
   return (neuron0x37309f0()*-0.0109069);
}

double NNfunction-ss_cLsR::synapse0x372e750() {
   return (neuron0x3730d30()*-0.0761929);
}

double NNfunction-ss_cLsR::synapse0x372e790() {
   return (neuron0x372c170()*0.700519);
}

double NNfunction-ss_cLsR::synapse0x372f450() {
   return (neuron0x372c4b0()*-0.350613);
}

double NNfunction-ss_cLsR::synapse0x372f490() {
   return (neuron0x372c7f0()*-0.399105);
}

double NNfunction-ss_cLsR::synapse0x373ae50() {
   return (neuron0x372cb30()*0.412911);
}

double NNfunction-ss_cLsR::synapse0x373ae90() {
   return (neuron0x372ce70()*-0.430152);
}

double NNfunction-ss_cLsR::synapse0x372f790() {
   return (neuron0x372d1b0()*0.300036);
}

double NNfunction-ss_cLsR::synapse0x372f7d0() {
   return (neuron0x372d4f0()*0.0381245);
}

double NNfunction-ss_cLsR::synapse0x34e7270() {
   return (neuron0x372d830()*0.563309);
}

double NNfunction-ss_cLsR::synapse0x34e72b0() {
   return (neuron0x372db70()*-0.073745);
}

double NNfunction-ss_cLsR::synapse0x372ff10() {
   return (neuron0x372deb0()*-0.442979);
}

double NNfunction-ss_cLsR::synapse0x372ff50() {
   return (neuron0x372e1f0()*-0.229667);
}

double NNfunction-ss_cLsR::synapse0x3730250() {
   return (neuron0x372e530()*0.53507);
}

double NNfunction-ss_cLsR::synapse0x3730290() {
   return (neuron0x372e870()*-1.35601);
}

double NNfunction-ss_cLsR::synapse0x3730590() {
   return (neuron0x372ebb0()*0.487678);
}

double NNfunction-ss_cLsR::synapse0x37305d0() {
   return (neuron0x372eef0()*-0.174115);
}

double NNfunction-ss_cLsR::synapse0x37308d0() {
   return (neuron0x372f230()*-0.734014);
}

double NNfunction-ss_cLsR::synapse0x3730910() {
   return (neuron0x372f570()*0.0457111);
}

double NNfunction-ss_cLsR::synapse0x3730c10() {
   return (neuron0x372fad0()*0.325616);
}

double NNfunction-ss_cLsR::synapse0x3730c50() {
   return (neuron0x372fcf0()*0.445029);
}

double NNfunction-ss_cLsR::synapse0x3730f50() {
   return (neuron0x3730030()*-0.271476);
}

double NNfunction-ss_cLsR::synapse0x3730f90() {
   return (neuron0x3730370()*-0.048169);
}

double NNfunction-ss_cLsR::synapse0x372ea90() {
   return (neuron0x37306b0()*-0.725941);
}

double NNfunction-ss_cLsR::synapse0x372ead0() {
   return (neuron0x37309f0()*-0.00100342);
}

double NNfunction-ss_cLsR::synapse0x373cd70() {
   return (neuron0x3730d30()*0.210916);
}

double NNfunction-ss_cLsR::synapse0x373d0f0() {
   return (neuron0x372c170()*-0.040862);
}

double NNfunction-ss_cLsR::synapse0x373d130() {
   return (neuron0x372c4b0()*-0.0182474);
}

double NNfunction-ss_cLsR::synapse0x373d170() {
   return (neuron0x372c7f0()*-0.0780605);
}

double NNfunction-ss_cLsR::synapse0x373d1b0() {
   return (neuron0x372cb30()*11.9304);
}

double NNfunction-ss_cLsR::synapse0x373d1f0() {
   return (neuron0x372ce70()*-0.0149699);
}

double NNfunction-ss_cLsR::synapse0x373d230() {
   return (neuron0x372d1b0()*-0.00466051);
}

double NNfunction-ss_cLsR::synapse0x373d270() {
   return (neuron0x372d4f0()*0.0108735);
}

double NNfunction-ss_cLsR::synapse0x373d2b0() {
   return (neuron0x372d830()*-0.0333418);
}

double NNfunction-ss_cLsR::synapse0x373d2f0() {
   return (neuron0x372db70()*0.0095426);
}

double NNfunction-ss_cLsR::synapse0x373d330() {
   return (neuron0x372deb0()*0.00925184);
}

double NNfunction-ss_cLsR::synapse0x373d370() {
   return (neuron0x372e1f0()*-0.0107644);
}

double NNfunction-ss_cLsR::synapse0x373d3b0() {
   return (neuron0x372e530()*0.0198962);
}

double NNfunction-ss_cLsR::synapse0x373d3f0() {
   return (neuron0x372e870()*0.118506);
}

double NNfunction-ss_cLsR::synapse0x373d430() {
   return (neuron0x372ebb0()*-0.0321508);
}

double NNfunction-ss_cLsR::synapse0x373d470() {
   return (neuron0x372eef0()*0.0183178);
}

double NNfunction-ss_cLsR::synapse0x373d4b0() {
   return (neuron0x372f230()*0.0481529);
}

double NNfunction-ss_cLsR::synapse0x373cf40() {
   return (neuron0x372f570()*-0.024614);
}

double NNfunction-ss_cLsR::synapse0x373cf80() {
   return (neuron0x372fad0()*-0.0326348);
}

double NNfunction-ss_cLsR::synapse0x373d600() {
   return (neuron0x372fcf0()*0.0824895);
}

double NNfunction-ss_cLsR::synapse0x373d640() {
   return (neuron0x3730030()*0.00388538);
}

double NNfunction-ss_cLsR::synapse0x373d680() {
   return (neuron0x3730370()*0.0255436);
}

double NNfunction-ss_cLsR::synapse0x373d6c0() {
   return (neuron0x37306b0()*0.00525752);
}

double NNfunction-ss_cLsR::synapse0x373d700() {
   return (neuron0x37309f0()*0.0153592);
}

double NNfunction-ss_cLsR::synapse0x373d740() {
   return (neuron0x3730d30()*0.0602907);
}

double NNfunction-ss_cLsR::synapse0x373dac0() {
   return (neuron0x372c170()*-0.320911);
}

double NNfunction-ss_cLsR::synapse0x373db00() {
   return (neuron0x372c4b0()*-0.593768);
}

double NNfunction-ss_cLsR::synapse0x373db40() {
   return (neuron0x372c7f0()*-0.922835);
}

double NNfunction-ss_cLsR::synapse0x373db80() {
   return (neuron0x372cb30()*-0.149343);
}

double NNfunction-ss_cLsR::synapse0x373dbc0() {
   return (neuron0x372ce70()*0.192715);
}

double NNfunction-ss_cLsR::synapse0x373dc00() {
   return (neuron0x372d1b0()*-0.59664);
}

double NNfunction-ss_cLsR::synapse0x373dc40() {
   return (neuron0x372d4f0()*-0.782246);
}

double NNfunction-ss_cLsR::synapse0x373dc80() {
   return (neuron0x372d830()*0.474586);
}

double NNfunction-ss_cLsR::synapse0x373dcc0() {
   return (neuron0x372db70()*0.180651);
}

double NNfunction-ss_cLsR::synapse0x373dd00() {
   return (neuron0x372deb0()*-0.0386619);
}

double NNfunction-ss_cLsR::synapse0x373dd40() {
   return (neuron0x372e1f0()*-0.0430309);
}

double NNfunction-ss_cLsR::synapse0x373dd80() {
   return (neuron0x372e530()*-0.280793);
}

double NNfunction-ss_cLsR::synapse0x373ddc0() {
   return (neuron0x372e870()*-0.394195);
}

double NNfunction-ss_cLsR::synapse0x373de00() {
   return (neuron0x372ebb0()*0.073293);
}

double NNfunction-ss_cLsR::synapse0x373de40() {
   return (neuron0x372eef0()*-0.516456);
}

double NNfunction-ss_cLsR::synapse0x373de80() {
   return (neuron0x372f230()*0.469824);
}

double NNfunction-ss_cLsR::synapse0x373d910() {
   return (neuron0x372f570()*-0.549715);
}

double NNfunction-ss_cLsR::synapse0x373d950() {
   return (neuron0x372fad0()*-0.0583383);
}

double NNfunction-ss_cLsR::synapse0x373dfd0() {
   return (neuron0x372fcf0()*-1.30468);
}

double NNfunction-ss_cLsR::synapse0x373e010() {
   return (neuron0x3730030()*0.0532866);
}

double NNfunction-ss_cLsR::synapse0x373e050() {
   return (neuron0x3730370()*0.0322622);
}

double NNfunction-ss_cLsR::synapse0x373e090() {
   return (neuron0x37306b0()*-0.0494659);
}

double NNfunction-ss_cLsR::synapse0x373e0d0() {
   return (neuron0x37309f0()*-0.746023);
}

double NNfunction-ss_cLsR::synapse0x373e110() {
   return (neuron0x3730d30()*-0.093827);
}

double NNfunction-ss_cLsR::synapse0x373e490() {
   return (neuron0x372c170()*0.0170273);
}

double NNfunction-ss_cLsR::synapse0x373e4d0() {
   return (neuron0x372c4b0()*0.0936005);
}

double NNfunction-ss_cLsR::synapse0x373e510() {
   return (neuron0x372c7f0()*0.1673);
}

double NNfunction-ss_cLsR::synapse0x373e550() {
   return (neuron0x372cb30()*1.60879);
}

double NNfunction-ss_cLsR::synapse0x373e590() {
   return (neuron0x372ce70()*-7.50218e-05);
}

double NNfunction-ss_cLsR::synapse0x373e5d0() {
   return (neuron0x372d1b0()*0.00154878);
}

double NNfunction-ss_cLsR::synapse0x373e610() {
   return (neuron0x372d4f0()*0.0972744);
}

double NNfunction-ss_cLsR::synapse0x373e650() {
   return (neuron0x372d830()*-0.0135745);
}

double NNfunction-ss_cLsR::synapse0x373e690() {
   return (neuron0x372db70()*-0.0104471);
}

double NNfunction-ss_cLsR::synapse0x373e6d0() {
   return (neuron0x372deb0()*0.0770873);
}

double NNfunction-ss_cLsR::synapse0x373e710() {
   return (neuron0x372e1f0()*0.091925);
}

double NNfunction-ss_cLsR::synapse0x373e750() {
   return (neuron0x372e530()*-0.116461);
}

double NNfunction-ss_cLsR::synapse0x373e790() {
   return (neuron0x372e870()*-0.155711);
}

double NNfunction-ss_cLsR::synapse0x373e7d0() {
   return (neuron0x372ebb0()*0.0702593);
}

double NNfunction-ss_cLsR::synapse0x373e810() {
   return (neuron0x372eef0()*0.0894501);
}

double NNfunction-ss_cLsR::synapse0x373e850() {
   return (neuron0x372f230()*0.0264096);
}

double NNfunction-ss_cLsR::synapse0x373e2e0() {
   return (neuron0x372f570()*0.132881);
}

double NNfunction-ss_cLsR::synapse0x373e320() {
   return (neuron0x372fad0()*0.0247773);
}

double NNfunction-ss_cLsR::synapse0x373e9a0() {
   return (neuron0x372fcf0()*0.971943);
}

double NNfunction-ss_cLsR::synapse0x373e9e0() {
   return (neuron0x3730030()*-0.0722485);
}

double NNfunction-ss_cLsR::synapse0x373ea20() {
   return (neuron0x3730370()*-0.00238745);
}

double NNfunction-ss_cLsR::synapse0x373ea60() {
   return (neuron0x37306b0()*-0.0378198);
}

double NNfunction-ss_cLsR::synapse0x373eaa0() {
   return (neuron0x37309f0()*-0.000944898);
}

double NNfunction-ss_cLsR::synapse0x373eae0() {
   return (neuron0x3730d30()*0.0304923);
}

double NNfunction-ss_cLsR::synapse0x373ee60() {
   return (neuron0x372c170()*-0.00054838);
}

double NNfunction-ss_cLsR::synapse0x373eea0() {
   return (neuron0x372c4b0()*-0.0126361);
}

double NNfunction-ss_cLsR::synapse0x373eee0() {
   return (neuron0x372c7f0()*-0.0162343);
}

double NNfunction-ss_cLsR::synapse0x373ef20() {
   return (neuron0x372cb30()*0.0475133);
}

double NNfunction-ss_cLsR::synapse0x373ef60() {
   return (neuron0x372ce70()*-0.0280349);
}

double NNfunction-ss_cLsR::synapse0x373efa0() {
   return (neuron0x372d1b0()*0.00414711);
}

double NNfunction-ss_cLsR::synapse0x373efe0() {
   return (neuron0x372d4f0()*0.00856356);
}

double NNfunction-ss_cLsR::synapse0x373f020() {
   return (neuron0x372d830()*0.0103797);
}

double NNfunction-ss_cLsR::synapse0x373f060() {
   return (neuron0x372db70()*0.0063581);
}

double NNfunction-ss_cLsR::synapse0x373f0a0() {
   return (neuron0x372deb0()*0.0254872);
}

double NNfunction-ss_cLsR::synapse0x373f0e0() {
   return (neuron0x372e1f0()*0.0432816);
}

double NNfunction-ss_cLsR::synapse0x373f120() {
   return (neuron0x372e530()*0.0297579);
}

double NNfunction-ss_cLsR::synapse0x373f160() {
   return (neuron0x372e870()*0.574513);
}

double NNfunction-ss_cLsR::synapse0x373f1a0() {
   return (neuron0x372ebb0()*0.0328292);
}

double NNfunction-ss_cLsR::synapse0x373f1e0() {
   return (neuron0x372eef0()*0.00487724);
}

double NNfunction-ss_cLsR::synapse0x373f220() {
   return (neuron0x372f230()*0.0438855);
}

double NNfunction-ss_cLsR::synapse0x373ecb0() {
   return (neuron0x372f570()*0.0238596);
}

double NNfunction-ss_cLsR::synapse0x373ecf0() {
   return (neuron0x372fad0()*-0.0110078);
}

double NNfunction-ss_cLsR::synapse0x373f370() {
   return (neuron0x372fcf0()*-0.179493);
}

double NNfunction-ss_cLsR::synapse0x373f3b0() {
   return (neuron0x3730030()*0.0182203);
}

double NNfunction-ss_cLsR::synapse0x373f3f0() {
   return (neuron0x3730370()*-0.0102715);
}

double NNfunction-ss_cLsR::synapse0x373f430() {
   return (neuron0x37306b0()*0.0106121);
}

double NNfunction-ss_cLsR::synapse0x373f470() {
   return (neuron0x37309f0()*-0.00423135);
}

double NNfunction-ss_cLsR::synapse0x373f4b0() {
   return (neuron0x3730d30()*-0.0122361);
}

double NNfunction-ss_cLsR::synapse0x373f830() {
   return (neuron0x372c170()*0.132431);
}

double NNfunction-ss_cLsR::synapse0x373f870() {
   return (neuron0x372c4b0()*0.700227);
}

double NNfunction-ss_cLsR::synapse0x373f8b0() {
   return (neuron0x372c7f0()*-1.09594);
}

double NNfunction-ss_cLsR::synapse0x373f8f0() {
   return (neuron0x372cb30()*0.177492);
}

double NNfunction-ss_cLsR::synapse0x373f930() {
   return (neuron0x372ce70()*0.495339);
}

double NNfunction-ss_cLsR::synapse0x373f970() {
   return (neuron0x372d1b0()*0.263859);
}

double NNfunction-ss_cLsR::synapse0x373f9b0() {
   return (neuron0x372d4f0()*-0.604576);
}

double NNfunction-ss_cLsR::synapse0x373f9f0() {
   return (neuron0x372d830()*0.425818);
}

double NNfunction-ss_cLsR::synapse0x373fa30() {
   return (neuron0x372db70()*0.288529);
}

double NNfunction-ss_cLsR::synapse0x3737bf0() {
   return (neuron0x372deb0()*-0.110893);
}

double NNfunction-ss_cLsR::synapse0x3737c30() {
   return (neuron0x372e1f0()*-0.793351);
}

double NNfunction-ss_cLsR::synapse0x3737c70() {
   return (neuron0x372e530()*0.55462);
}

double NNfunction-ss_cLsR::synapse0x3737cb0() {
   return (neuron0x372e870()*0.746346);
}

double NNfunction-ss_cLsR::synapse0x3737cf0() {
   return (neuron0x372ebb0()*-0.527217);
}

double NNfunction-ss_cLsR::synapse0x3737d30() {
   return (neuron0x372eef0()*0.178361);
}

double NNfunction-ss_cLsR::synapse0x3737d70() {
   return (neuron0x372f230()*-1.24355);
}

double NNfunction-ss_cLsR::synapse0x373f680() {
   return (neuron0x372f570()*-0.269205);
}

double NNfunction-ss_cLsR::synapse0x373f6c0() {
   return (neuron0x372fad0()*-0.179622);
}

double NNfunction-ss_cLsR::synapse0x3737ec0() {
   return (neuron0x372fcf0()*-0.477543);
}

double NNfunction-ss_cLsR::synapse0x3737f00() {
   return (neuron0x3730030()*0.120625);
}

double NNfunction-ss_cLsR::synapse0x3737f40() {
   return (neuron0x3730370()*-0.625791);
}

double NNfunction-ss_cLsR::synapse0x3737f80() {
   return (neuron0x37306b0()*0.0607091);
}

double NNfunction-ss_cLsR::synapse0x3737fc0() {
   return (neuron0x37309f0()*-0.119249);
}

double NNfunction-ss_cLsR::synapse0x3738000() {
   return (neuron0x3730d30()*0.171655);
}

double NNfunction-ss_cLsR::synapse0x3738380() {
   return (neuron0x372c170()*-0.0129033);
}

double NNfunction-ss_cLsR::synapse0x37383c0() {
   return (neuron0x372c4b0()*0.0383385);
}

double NNfunction-ss_cLsR::synapse0x3738400() {
   return (neuron0x372c7f0()*0.835487);
}

double NNfunction-ss_cLsR::synapse0x3738440() {
   return (neuron0x372cb30()*0.180794);
}

double NNfunction-ss_cLsR::synapse0x3738480() {
   return (neuron0x372ce70()*0.176558);
}

double NNfunction-ss_cLsR::synapse0x37384c0() {
   return (neuron0x372d1b0()*-0.0508229);
}

double NNfunction-ss_cLsR::synapse0x3738500() {
   return (neuron0x372d4f0()*-0.190919);
}

double NNfunction-ss_cLsR::synapse0x3738540() {
   return (neuron0x372d830()*0.0641853);
}

double NNfunction-ss_cLsR::synapse0x3738580() {
   return (neuron0x372db70()*0.0779751);
}

double NNfunction-ss_cLsR::synapse0x37385c0() {
   return (neuron0x372deb0()*0.0419503);
}

double NNfunction-ss_cLsR::synapse0x3738600() {
   return (neuron0x372e1f0()*0.0872614);
}

double NNfunction-ss_cLsR::synapse0x3738640() {
   return (neuron0x372e530()*0.323283);
}

double NNfunction-ss_cLsR::synapse0x3738680() {
   return (neuron0x372e870()*-0.0418854);
}

double NNfunction-ss_cLsR::synapse0x37386c0() {
   return (neuron0x372ebb0()*-0.147685);
}

double NNfunction-ss_cLsR::synapse0x3738700() {
   return (neuron0x372eef0()*-0.0727309);
}

double NNfunction-ss_cLsR::synapse0x3738740() {
   return (neuron0x372f230()*-0.0615434);
}

double NNfunction-ss_cLsR::synapse0x37381d0() {
   return (neuron0x372f570()*-0.259419);
}

double NNfunction-ss_cLsR::synapse0x3738210() {
   return (neuron0x372fad0()*0.205062);
}

double NNfunction-ss_cLsR::synapse0x3738890() {
   return (neuron0x372fcf0()*0.0441547);
}

double NNfunction-ss_cLsR::synapse0x37388d0() {
   return (neuron0x3730030()*0.0931671);
}

double NNfunction-ss_cLsR::synapse0x3738910() {
   return (neuron0x3730370()*0.108495);
}

double NNfunction-ss_cLsR::synapse0x3738950() {
   return (neuron0x37306b0()*0.0555223);
}

double NNfunction-ss_cLsR::synapse0x3738990() {
   return (neuron0x37309f0()*-0.0712867);
}

double NNfunction-ss_cLsR::synapse0x37389d0() {
   return (neuron0x3730d30()*0.0458162);
}

double NNfunction-ss_cLsR::synapse0x3738ba0() {
   return (neuron0x372c170()*1.20146);
}

double NNfunction-ss_cLsR::synapse0x3741c30() {
   return (neuron0x372c4b0()*-0.497538);
}

double NNfunction-ss_cLsR::synapse0x3741c70() {
   return (neuron0x372c7f0()*0.693276);
}

double NNfunction-ss_cLsR::synapse0x3741cb0() {
   return (neuron0x372cb30()*0.33937);
}

double NNfunction-ss_cLsR::synapse0x3741cf0() {
   return (neuron0x372ce70()*0.563103);
}

double NNfunction-ss_cLsR::synapse0x3741d30() {
   return (neuron0x372d1b0()*0.69242);
}

double NNfunction-ss_cLsR::synapse0x3741d70() {
   return (neuron0x372d4f0()*0.263796);
}

double NNfunction-ss_cLsR::synapse0x3741db0() {
   return (neuron0x372d830()*0.29727);
}

double NNfunction-ss_cLsR::synapse0x3741df0() {
   return (neuron0x372db70()*0.0239007);
}

double NNfunction-ss_cLsR::synapse0x3741e30() {
   return (neuron0x372deb0()*-0.605258);
}

double NNfunction-ss_cLsR::synapse0x3741e70() {
   return (neuron0x372e1f0()*-0.552756);
}

double NNfunction-ss_cLsR::synapse0x3741eb0() {
   return (neuron0x372e530()*-0.133007);
}

double NNfunction-ss_cLsR::synapse0x3741ef0() {
   return (neuron0x372e870()*-0.444056);
}

double NNfunction-ss_cLsR::synapse0x3741f30() {
   return (neuron0x372ebb0()*0.0138192);
}

double NNfunction-ss_cLsR::synapse0x3741f70() {
   return (neuron0x372eef0()*-0.496136);
}

double NNfunction-ss_cLsR::synapse0x3741fb0() {
   return (neuron0x372f230()*-1.15669);
}

double NNfunction-ss_cLsR::synapse0x3741a80() {
   return (neuron0x372f570()*0.336301);
}

double NNfunction-ss_cLsR::synapse0x3741ac0() {
   return (neuron0x372fad0()*-0.401135);
}

double NNfunction-ss_cLsR::synapse0x3742100() {
   return (neuron0x372fcf0()*-0.00597951);
}

double NNfunction-ss_cLsR::synapse0x3742140() {
   return (neuron0x3730030()*-0.0752646);
}

double NNfunction-ss_cLsR::synapse0x3742180() {
   return (neuron0x3730370()*-0.648376);
}

double NNfunction-ss_cLsR::synapse0x37421c0() {
   return (neuron0x37306b0()*0.425953);
}

double NNfunction-ss_cLsR::synapse0x3742200() {
   return (neuron0x37309f0()*0.0343598);
}

double NNfunction-ss_cLsR::synapse0x3742240() {
   return (neuron0x3730d30()*0.614187);
}

double NNfunction-ss_cLsR::synapse0x37425c0() {
   return (neuron0x372c170()*0.0639292);
}

double NNfunction-ss_cLsR::synapse0x3742600() {
   return (neuron0x372c4b0()*-0.0033744);
}

double NNfunction-ss_cLsR::synapse0x3742640() {
   return (neuron0x372c7f0()*0.494832);
}

double NNfunction-ss_cLsR::synapse0x3742680() {
   return (neuron0x372cb30()*0.0211377);
}

double NNfunction-ss_cLsR::synapse0x37426c0() {
   return (neuron0x372ce70()*-0.0794822);
}

double NNfunction-ss_cLsR::synapse0x3742700() {
   return (neuron0x372d1b0()*0.0276904);
}

double NNfunction-ss_cLsR::synapse0x3742740() {
   return (neuron0x372d4f0()*0.0406825);
}

double NNfunction-ss_cLsR::synapse0x3742780() {
   return (neuron0x372d830()*0.0318004);
}

double NNfunction-ss_cLsR::synapse0x37427c0() {
   return (neuron0x372db70()*0.0229616);
}

double NNfunction-ss_cLsR::synapse0x3742800() {
   return (neuron0x372deb0()*0.0542572);
}

double NNfunction-ss_cLsR::synapse0x3742840() {
   return (neuron0x372e1f0()*0.00477687);
}

double NNfunction-ss_cLsR::synapse0x3742880() {
   return (neuron0x372e530()*-0.0795507);
}

double NNfunction-ss_cLsR::synapse0x37428c0() {
   return (neuron0x372e870()*0.386293);
}

double NNfunction-ss_cLsR::synapse0x3742900() {
   return (neuron0x372ebb0()*0.0538022);
}

double NNfunction-ss_cLsR::synapse0x3742940() {
   return (neuron0x372eef0()*-0.0136591);
}

double NNfunction-ss_cLsR::synapse0x3742980() {
   return (neuron0x372f230()*0.106996);
}

double NNfunction-ss_cLsR::synapse0x3742410() {
   return (neuron0x372f570()*-0.0173612);
}

double NNfunction-ss_cLsR::synapse0x3742450() {
   return (neuron0x372fad0()*-0.0822448);
}

double NNfunction-ss_cLsR::synapse0x3742ad0() {
   return (neuron0x372fcf0()*0.0475606);
}

double NNfunction-ss_cLsR::synapse0x3742b10() {
   return (neuron0x3730030()*-0.0478142);
}

double NNfunction-ss_cLsR::synapse0x3742b50() {
   return (neuron0x3730370()*0.0356456);
}

double NNfunction-ss_cLsR::synapse0x3742b90() {
   return (neuron0x37306b0()*-0.00208539);
}

double NNfunction-ss_cLsR::synapse0x3742bd0() {
   return (neuron0x37309f0()*-0.0167743);
}

double NNfunction-ss_cLsR::synapse0x3742c10() {
   return (neuron0x3730d30()*-0.0710408);
}

double NNfunction-ss_cLsR::synapse0x3742f90() {
   return (neuron0x372c170()*0.226902);
}

double NNfunction-ss_cLsR::synapse0x3742fd0() {
   return (neuron0x372c4b0()*0.620102);
}

double NNfunction-ss_cLsR::synapse0x3743010() {
   return (neuron0x372c7f0()*-0.877822);
}

double NNfunction-ss_cLsR::synapse0x3743050() {
   return (neuron0x372cb30()*0.235751);
}

double NNfunction-ss_cLsR::synapse0x3743090() {
   return (neuron0x372ce70()*0.290122);
}

double NNfunction-ss_cLsR::synapse0x37430d0() {
   return (neuron0x372d1b0()*0.745407);
}

double NNfunction-ss_cLsR::synapse0x3743110() {
   return (neuron0x372d4f0()*0.918061);
}

double NNfunction-ss_cLsR::synapse0x3743150() {
   return (neuron0x372d830()*-0.426761);
}

double NNfunction-ss_cLsR::synapse0x3743190() {
   return (neuron0x372db70()*-0.249983);
}

double NNfunction-ss_cLsR::synapse0x37431d0() {
   return (neuron0x372deb0()*-0.5459);
}

double NNfunction-ss_cLsR::synapse0x3743210() {
   return (neuron0x372e1f0()*0.51445);
}

double NNfunction-ss_cLsR::synapse0x3743250() {
   return (neuron0x372e530()*-0.176138);
}

double NNfunction-ss_cLsR::synapse0x3743290() {
   return (neuron0x372e870()*-0.894714);
}

double NNfunction-ss_cLsR::synapse0x37432d0() {
   return (neuron0x372ebb0()*-0.451351);
}

double NNfunction-ss_cLsR::synapse0x3743310() {
   return (neuron0x372eef0()*0.0459715);
}

double NNfunction-ss_cLsR::synapse0x3743350() {
   return (neuron0x372f230()*-0.286265);
}

double NNfunction-ss_cLsR::synapse0x3742de0() {
   return (neuron0x372f570()*-0.0132149);
}

double NNfunction-ss_cLsR::synapse0x3742e20() {
   return (neuron0x372fad0()*0.34943);
}

double NNfunction-ss_cLsR::synapse0x37434a0() {
   return (neuron0x372fcf0()*-0.499489);
}

double NNfunction-ss_cLsR::synapse0x37434e0() {
   return (neuron0x3730030()*-0.21147);
}

double NNfunction-ss_cLsR::synapse0x3743520() {
   return (neuron0x3730370()*-0.0504397);
}

double NNfunction-ss_cLsR::synapse0x3743560() {
   return (neuron0x37306b0()*0.0193517);
}

double NNfunction-ss_cLsR::synapse0x37435a0() {
   return (neuron0x37309f0()*-0.148817);
}

double NNfunction-ss_cLsR::synapse0x37435e0() {
   return (neuron0x3730d30()*-0.606066);
}

double NNfunction-ss_cLsR::synapse0x3743960() {
   return (neuron0x372c170()*-0.555998);
}

double NNfunction-ss_cLsR::synapse0x37439a0() {
   return (neuron0x372c4b0()*0.201024);
}

double NNfunction-ss_cLsR::synapse0x37439e0() {
   return (neuron0x372c7f0()*-0.318021);
}

double NNfunction-ss_cLsR::synapse0x3743a20() {
   return (neuron0x372cb30()*0.20008);
}

double NNfunction-ss_cLsR::synapse0x3743a60() {
   return (neuron0x372ce70()*-0.214929);
}

double NNfunction-ss_cLsR::synapse0x3743aa0() {
   return (neuron0x372d1b0()*-0.0321645);
}

double NNfunction-ss_cLsR::synapse0x3743ae0() {
   return (neuron0x372d4f0()*0.0793298);
}

double NNfunction-ss_cLsR::synapse0x3743b20() {
   return (neuron0x372d830()*0.0210111);
}

double NNfunction-ss_cLsR::synapse0x3743b60() {
   return (neuron0x372db70()*-0.475808);
}

double NNfunction-ss_cLsR::synapse0x3743ba0() {
   return (neuron0x372deb0()*0.271163);
}

double NNfunction-ss_cLsR::synapse0x3743be0() {
   return (neuron0x372e1f0()*0.28198);
}

double NNfunction-ss_cLsR::synapse0x3743c20() {
   return (neuron0x372e530()*-0.0610363);
}

double NNfunction-ss_cLsR::synapse0x3743c60() {
   return (neuron0x372e870()*0.239474);
}

double NNfunction-ss_cLsR::synapse0x3743ca0() {
   return (neuron0x372ebb0()*0.104959);
}

double NNfunction-ss_cLsR::synapse0x3743ce0() {
   return (neuron0x372eef0()*-0.247372);
}

double NNfunction-ss_cLsR::synapse0x3743d20() {
   return (neuron0x372f230()*0.45534);
}

double NNfunction-ss_cLsR::synapse0x37437b0() {
   return (neuron0x372f570()*0.482113);
}

double NNfunction-ss_cLsR::synapse0x37437f0() {
   return (neuron0x372fad0()*-0.181603);
}

double NNfunction-ss_cLsR::synapse0x3743e70() {
   return (neuron0x372fcf0()*0.482925);
}

double NNfunction-ss_cLsR::synapse0x3743eb0() {
   return (neuron0x3730030()*0.0993357);
}

double NNfunction-ss_cLsR::synapse0x3743ef0() {
   return (neuron0x3730370()*0.104544);
}

double NNfunction-ss_cLsR::synapse0x3743f30() {
   return (neuron0x37306b0()*-0.173513);
}

double NNfunction-ss_cLsR::synapse0x3743f70() {
   return (neuron0x37309f0()*0.0197313);
}

double NNfunction-ss_cLsR::synapse0x3743fb0() {
   return (neuron0x3730d30()*-0.276798);
}

double NNfunction-ss_cLsR::synapse0x3744330() {
   return (neuron0x372c170()*0.432837);
}

double NNfunction-ss_cLsR::synapse0x3744370() {
   return (neuron0x372c4b0()*-0.0171022);
}

double NNfunction-ss_cLsR::synapse0x37443b0() {
   return (neuron0x372c7f0()*0.442861);
}

double NNfunction-ss_cLsR::synapse0x37443f0() {
   return (neuron0x372cb30()*-1.10625);
}

double NNfunction-ss_cLsR::synapse0x3744430() {
   return (neuron0x372ce70()*0.370884);
}

double NNfunction-ss_cLsR::synapse0x3744470() {
   return (neuron0x372d1b0()*0.244809);
}

double NNfunction-ss_cLsR::synapse0x37444b0() {
   return (neuron0x372d4f0()*-0.052994);
}

double NNfunction-ss_cLsR::synapse0x37444f0() {
   return (neuron0x372d830()*-0.0447181);
}

double NNfunction-ss_cLsR::synapse0x3744530() {
   return (neuron0x372db70()*0.500586);
}

double NNfunction-ss_cLsR::synapse0x3744570() {
   return (neuron0x372deb0()*0.0597999);
}

double NNfunction-ss_cLsR::synapse0x37445b0() {
   return (neuron0x372e1f0()*0.102348);
}

double NNfunction-ss_cLsR::synapse0x37445f0() {
   return (neuron0x372e530()*-0.692631);
}

double NNfunction-ss_cLsR::synapse0x3744630() {
   return (neuron0x372e870()*-0.50958);
}

double NNfunction-ss_cLsR::synapse0x3744670() {
   return (neuron0x372ebb0()*0.428193);
}

double NNfunction-ss_cLsR::synapse0x37446b0() {
   return (neuron0x372eef0()*1.15259);
}

double NNfunction-ss_cLsR::synapse0x37446f0() {
   return (neuron0x372f230()*-0.860568);
}

double NNfunction-ss_cLsR::synapse0x3744180() {
   return (neuron0x372f570()*-0.745328);
}

double NNfunction-ss_cLsR::synapse0x37441c0() {
   return (neuron0x372fad0()*-0.690155);
}

double NNfunction-ss_cLsR::synapse0x3744840() {
   return (neuron0x372fcf0()*-0.689147);
}

double NNfunction-ss_cLsR::synapse0x3744880() {
   return (neuron0x3730030()*0.0217712);
}

double NNfunction-ss_cLsR::synapse0x37448c0() {
   return (neuron0x3730370()*0.299188);
}

double NNfunction-ss_cLsR::synapse0x3744900() {
   return (neuron0x37306b0()*0.536873);
}

double NNfunction-ss_cLsR::synapse0x3744940() {
   return (neuron0x37309f0()*-0.640585);
}

double NNfunction-ss_cLsR::synapse0x3744980() {
   return (neuron0x3730d30()*-0.655345);
}

double NNfunction-ss_cLsR::synapse0x3744d00() {
   return (neuron0x372c170()*0.0313104);
}

double NNfunction-ss_cLsR::synapse0x3744d40() {
   return (neuron0x372c4b0()*0.0061881);
}

double NNfunction-ss_cLsR::synapse0x3744d80() {
   return (neuron0x372c7f0()*-0.0059779);
}

double NNfunction-ss_cLsR::synapse0x3744dc0() {
   return (neuron0x372cb30()*0.0791128);
}

double NNfunction-ss_cLsR::synapse0x3744e00() {
   return (neuron0x372ce70()*-0.0632132);
}

double NNfunction-ss_cLsR::synapse0x3744e40() {
   return (neuron0x372d1b0()*0.0111142);
}

double NNfunction-ss_cLsR::synapse0x3744e80() {
   return (neuron0x372d4f0()*0.0148413);
}

double NNfunction-ss_cLsR::synapse0x3744ec0() {
   return (neuron0x372d830()*0.0135013);
}

double NNfunction-ss_cLsR::synapse0x3744f00() {
   return (neuron0x372db70()*0.0386995);
}

double NNfunction-ss_cLsR::synapse0x3744f40() {
   return (neuron0x372deb0()*-0.0181639);
}

double NNfunction-ss_cLsR::synapse0x3744f80() {
   return (neuron0x372e1f0()*-0.0891996);
}

double NNfunction-ss_cLsR::synapse0x3744fc0() {
   return (neuron0x372e530()*-0.0256781);
}

double NNfunction-ss_cLsR::synapse0x3745000() {
   return (neuron0x372e870()*1.69395);
}

double NNfunction-ss_cLsR::synapse0x3745040() {
   return (neuron0x372ebb0()*-0.00781298);
}

double NNfunction-ss_cLsR::synapse0x3745080() {
   return (neuron0x372eef0()*0.0227969);
}

double NNfunction-ss_cLsR::synapse0x37450c0() {
   return (neuron0x372f230()*0.0708954);
}

double NNfunction-ss_cLsR::synapse0x3744b50() {
   return (neuron0x372f570()*-0.0160315);
}

double NNfunction-ss_cLsR::synapse0x3744b90() {
   return (neuron0x372fad0()*-0.0190802);
}

double NNfunction-ss_cLsR::synapse0x3745210() {
   return (neuron0x372fcf0()*-0.00857725);
}

double NNfunction-ss_cLsR::synapse0x3745250() {
   return (neuron0x3730030()*-0.0679042);
}

double NNfunction-ss_cLsR::synapse0x3745290() {
   return (neuron0x3730370()*-0.0391901);
}

double NNfunction-ss_cLsR::synapse0x37452d0() {
   return (neuron0x37306b0()*-0.00448129);
}

double NNfunction-ss_cLsR::synapse0x3745310() {
   return (neuron0x37309f0()*-0.00457222);
}

double NNfunction-ss_cLsR::synapse0x3745350() {
   return (neuron0x3730d30()*-0.0473012);
}

double NNfunction-ss_cLsR::synapse0x37456d0() {
   return (neuron0x372c170()*0.559008);
}

double NNfunction-ss_cLsR::synapse0x3745710() {
   return (neuron0x372c4b0()*0.695534);
}

double NNfunction-ss_cLsR::synapse0x3745750() {
   return (neuron0x372c7f0()*0.466449);
}

double NNfunction-ss_cLsR::synapse0x3745790() {
   return (neuron0x372cb30()*-0.159715);
}

double NNfunction-ss_cLsR::synapse0x37457d0() {
   return (neuron0x372ce70()*0.448341);
}

double NNfunction-ss_cLsR::synapse0x3745810() {
   return (neuron0x372d1b0()*0.42856);
}

double NNfunction-ss_cLsR::synapse0x3745850() {
   return (neuron0x372d4f0()*0.396172);
}

double NNfunction-ss_cLsR::synapse0x3745890() {
   return (neuron0x372d830()*0.0353095);
}

double NNfunction-ss_cLsR::synapse0x37458d0() {
   return (neuron0x372db70()*0.392829);
}

double NNfunction-ss_cLsR::synapse0x3745910() {
   return (neuron0x372deb0()*-0.548424);
}

double NNfunction-ss_cLsR::synapse0x3745950() {
   return (neuron0x372e1f0()*0.261997);
}

double NNfunction-ss_cLsR::synapse0x3745990() {
   return (neuron0x372e530()*0.592978);
}

double NNfunction-ss_cLsR::synapse0x37459d0() {
   return (neuron0x372e870()*0.34836);
}

double NNfunction-ss_cLsR::synapse0x3745a10() {
   return (neuron0x372ebb0()*0.384422);
}

double NNfunction-ss_cLsR::synapse0x3745a50() {
   return (neuron0x372eef0()*-0.21561);
}

double NNfunction-ss_cLsR::synapse0x3745a90() {
   return (neuron0x372f230()*-0.60849);
}

double NNfunction-ss_cLsR::synapse0x3745520() {
   return (neuron0x372f570()*-1.16424);
}

double NNfunction-ss_cLsR::synapse0x3745560() {
   return (neuron0x372fad0()*0.336085);
}

double NNfunction-ss_cLsR::synapse0x3745be0() {
   return (neuron0x372fcf0()*-0.331993);
}

double NNfunction-ss_cLsR::synapse0x3745c20() {
   return (neuron0x3730030()*-0.774789);
}

double NNfunction-ss_cLsR::synapse0x3745c60() {
   return (neuron0x3730370()*1.02831);
}

double NNfunction-ss_cLsR::synapse0x3745ca0() {
   return (neuron0x37306b0()*-0.23305);
}

double NNfunction-ss_cLsR::synapse0x3745ce0() {
   return (neuron0x37309f0()*-0.417219);
}

double NNfunction-ss_cLsR::synapse0x3745d20() {
   return (neuron0x3730d30()*-0.0486657);
}

double NNfunction-ss_cLsR::synapse0x37460a0() {
   return (neuron0x372c170()*-0.305578);
}

double NNfunction-ss_cLsR::synapse0x37460e0() {
   return (neuron0x372c4b0()*0.11902);
}

double NNfunction-ss_cLsR::synapse0x3746120() {
   return (neuron0x372c7f0()*0.0975234);
}

double NNfunction-ss_cLsR::synapse0x3746160() {
   return (neuron0x372cb30()*0.311385);
}

double NNfunction-ss_cLsR::synapse0x37461a0() {
   return (neuron0x372ce70()*-0.0283871);
}

double NNfunction-ss_cLsR::synapse0x37461e0() {
   return (neuron0x372d1b0()*-0.0803921);
}

double NNfunction-ss_cLsR::synapse0x3746220() {
   return (neuron0x372d4f0()*0.257852);
}

double NNfunction-ss_cLsR::synapse0x3746260() {
   return (neuron0x372d830()*-0.172002);
}

double NNfunction-ss_cLsR::synapse0x37462a0() {
   return (neuron0x372db70()*0.796734);
}

double NNfunction-ss_cLsR::synapse0x37462e0() {
   return (neuron0x372deb0()*-0.223012);
}

double NNfunction-ss_cLsR::synapse0x3746320() {
   return (neuron0x372e1f0()*-0.312588);
}

double NNfunction-ss_cLsR::synapse0x3746360() {
   return (neuron0x372e530()*0.195713);
}

double NNfunction-ss_cLsR::synapse0x37463a0() {
   return (neuron0x372e870()*-1.01384);
}

double NNfunction-ss_cLsR::synapse0x37463e0() {
   return (neuron0x372ebb0()*-0.129781);
}

double NNfunction-ss_cLsR::synapse0x3746420() {
   return (neuron0x372eef0()*-0.567133);
}

double NNfunction-ss_cLsR::synapse0x3746460() {
   return (neuron0x372f230()*-0.232817);
}

double NNfunction-ss_cLsR::synapse0x3745ef0() {
   return (neuron0x372f570()*0.418756);
}

double NNfunction-ss_cLsR::synapse0x3745f30() {
   return (neuron0x372fad0()*-0.510905);
}

double NNfunction-ss_cLsR::synapse0x37465b0() {
   return (neuron0x372fcf0()*0.564267);
}

double NNfunction-ss_cLsR::synapse0x37465f0() {
   return (neuron0x3730030()*0.2778);
}

double NNfunction-ss_cLsR::synapse0x3746630() {
   return (neuron0x3730370()*-0.412084);
}

double NNfunction-ss_cLsR::synapse0x3746670() {
   return (neuron0x37306b0()*-0.263951);
}

double NNfunction-ss_cLsR::synapse0x37466b0() {
   return (neuron0x37309f0()*-0.0493344);
}

double NNfunction-ss_cLsR::synapse0x37466f0() {
   return (neuron0x3730d30()*-0.134148);
}

double NNfunction-ss_cLsR::synapse0x3746a70() {
   return (neuron0x372c170()*-0.109465);
}

double NNfunction-ss_cLsR::synapse0x373b040() {
   return (neuron0x372c4b0()*-0.594328);
}

double NNfunction-ss_cLsR::synapse0x373b080() {
   return (neuron0x372c7f0()*0.39976);
}

double NNfunction-ss_cLsR::synapse0x373b0c0() {
   return (neuron0x372cb30()*0.295188);
}

double NNfunction-ss_cLsR::synapse0x373b310() {
   return (neuron0x372ce70()*0.0779664);
}

double NNfunction-ss_cLsR::synapse0x373b350() {
   return (neuron0x372d1b0()*-0.201054);
}

double NNfunction-ss_cLsR::synapse0x373b390() {
   return (neuron0x372d4f0()*-0.462768);
}

double NNfunction-ss_cLsR::synapse0x373b5e0() {
   return (neuron0x372d830()*0.248256);
}

double NNfunction-ss_cLsR::synapse0x373b620() {
   return (neuron0x372db70()*0.930596);
}

double NNfunction-ss_cLsR::synapse0x373b870() {
   return (neuron0x372deb0()*0.0203601);
}

double NNfunction-ss_cLsR::synapse0x373b8b0() {
   return (neuron0x372e1f0()*-0.534566);
}

double NNfunction-ss_cLsR::synapse0x373b8f0() {
   return (neuron0x372e530()*0.482995);
}

double NNfunction-ss_cLsR::synapse0x373bb40() {
   return (neuron0x372e870()*0.527505);
}

double NNfunction-ss_cLsR::synapse0x373bb80() {
   return (neuron0x372ebb0()*0.425231);
}

double NNfunction-ss_cLsR::synapse0x373bdd0() {
   return (neuron0x372eef0()*-0.0914782);
}

double NNfunction-ss_cLsR::synapse0x373be10() {
   return (neuron0x372f230()*-0.485345);
}

double NNfunction-ss_cLsR::synapse0x37468c0() {
   return (neuron0x372f570()*-0.0129359);
}

double NNfunction-ss_cLsR::synapse0x3746900() {
   return (neuron0x372fad0()*-0.179452);
}

double NNfunction-ss_cLsR::synapse0x373bf60() {
   return (neuron0x372fcf0()*0.102847);
}

double NNfunction-ss_cLsR::synapse0x373c470() {
   return (neuron0x3730030()*-0.330687);
}

double NNfunction-ss_cLsR::synapse0x373c4b0() {
   return (neuron0x3730370()*-0.0838749);
}

double NNfunction-ss_cLsR::synapse0x373c4f0() {
   return (neuron0x37306b0()*0.145368);
}

double NNfunction-ss_cLsR::synapse0x373c740() {
   return (neuron0x37309f0()*0.375977);
}

double NNfunction-ss_cLsR::synapse0x373c780() {
   return (neuron0x3730d30()*-0.126967);
}

double NNfunction-ss_cLsR::synapse0x373c030() {
   return (neuron0x372c170()*-0.311758);
}

double NNfunction-ss_cLsR::synapse0x373c070() {
   return (neuron0x372c4b0()*-0.0358012);
}

double NNfunction-ss_cLsR::synapse0x373c0b0() {
   return (neuron0x372c7f0()*0.651233);
}

double NNfunction-ss_cLsR::synapse0x373c0f0() {
   return (neuron0x372cb30()*-0.525586);
}

double NNfunction-ss_cLsR::synapse0x373ca70() {
   return (neuron0x372ce70()*-0.440222);
}

double NNfunction-ss_cLsR::synapse0x3748dc0() {
   return (neuron0x372d1b0()*0.584701);
}

double NNfunction-ss_cLsR::synapse0x3748e00() {
   return (neuron0x372d4f0()*0.528419);
}

double NNfunction-ss_cLsR::synapse0x3748e40() {
   return (neuron0x372d830()*-0.0966851);
}

double NNfunction-ss_cLsR::synapse0x3748e80() {
   return (neuron0x372db70()*0.241239);
}

double NNfunction-ss_cLsR::synapse0x3748ec0() {
   return (neuron0x372deb0()*-0.200418);
}

double NNfunction-ss_cLsR::synapse0x3748f00() {
   return (neuron0x372e1f0()*0.223417);
}

double NNfunction-ss_cLsR::synapse0x3748f40() {
   return (neuron0x372e530()*0.196264);
}

double NNfunction-ss_cLsR::synapse0x3748f80() {
   return (neuron0x372e870()*0.766292);
}

double NNfunction-ss_cLsR::synapse0x3748fc0() {
   return (neuron0x372ebb0()*0.0661106);
}

double NNfunction-ss_cLsR::synapse0x3749000() {
   return (neuron0x372eef0()*-0.181986);
}

double NNfunction-ss_cLsR::synapse0x3749040() {
   return (neuron0x372f230()*0.913375);
}

double NNfunction-ss_cLsR::synapse0x373c950() {
   return (neuron0x372f570()*0.0481296);
}

double NNfunction-ss_cLsR::synapse0x373c990() {
   return (neuron0x372fad0()*0.248643);
}

double NNfunction-ss_cLsR::synapse0x3749190() {
   return (neuron0x372fcf0()*-0.145923);
}

double NNfunction-ss_cLsR::synapse0x37491d0() {
   return (neuron0x3730030()*0.133536);
}

double NNfunction-ss_cLsR::synapse0x3749210() {
   return (neuron0x3730370()*0.351019);
}

double NNfunction-ss_cLsR::synapse0x3749250() {
   return (neuron0x37306b0()*-0.0259189);
}

double NNfunction-ss_cLsR::synapse0x3749290() {
   return (neuron0x37309f0()*-0.199423);
}

double NNfunction-ss_cLsR::synapse0x37492d0() {
   return (neuron0x3730d30()*0.0613972);
}

double NNfunction-ss_cLsR::synapse0x3749650() {
   return (neuron0x372c170()*-0.0759532);
}

double NNfunction-ss_cLsR::synapse0x3749690() {
   return (neuron0x372c4b0()*-0.177669);
}

double NNfunction-ss_cLsR::synapse0x37496d0() {
   return (neuron0x372c7f0()*-0.210238);
}

double NNfunction-ss_cLsR::synapse0x3749710() {
   return (neuron0x372cb30()*-0.229955);
}

double NNfunction-ss_cLsR::synapse0x3749750() {
   return (neuron0x372ce70()*0.124577);
}

double NNfunction-ss_cLsR::synapse0x3749790() {
   return (neuron0x372d1b0()*0.322381);
}

double NNfunction-ss_cLsR::synapse0x37497d0() {
   return (neuron0x372d4f0()*0.204459);
}

double NNfunction-ss_cLsR::synapse0x3749810() {
   return (neuron0x372d830()*0.134748);
}

double NNfunction-ss_cLsR::synapse0x3749850() {
   return (neuron0x372db70()*-0.0121555);
}

double NNfunction-ss_cLsR::synapse0x3749890() {
   return (neuron0x372deb0()*-0.23913);
}

double NNfunction-ss_cLsR::synapse0x37498d0() {
   return (neuron0x372e1f0()*-0.0142544);
}

double NNfunction-ss_cLsR::synapse0x3749910() {
   return (neuron0x372e530()*-0.0843591);
}

double NNfunction-ss_cLsR::synapse0x3749950() {
   return (neuron0x372e870()*-0.895715);
}

double NNfunction-ss_cLsR::synapse0x3749990() {
   return (neuron0x372ebb0()*-0.14915);
}

double NNfunction-ss_cLsR::synapse0x37499d0() {
   return (neuron0x372eef0()*-0.0184514);
}

double NNfunction-ss_cLsR::synapse0x3749a10() {
   return (neuron0x372f230()*-0.0151077);
}

double NNfunction-ss_cLsR::synapse0x37494a0() {
   return (neuron0x372f570()*-0.00622684);
}

double NNfunction-ss_cLsR::synapse0x37494e0() {
   return (neuron0x372fad0()*-0.113231);
}

double NNfunction-ss_cLsR::synapse0x3749b60() {
   return (neuron0x372fcf0()*-0.863949);
}

double NNfunction-ss_cLsR::synapse0x3749ba0() {
   return (neuron0x3730030()*-0.0223181);
}

double NNfunction-ss_cLsR::synapse0x3749be0() {
   return (neuron0x3730370()*-0.0823491);
}

double NNfunction-ss_cLsR::synapse0x3749c20() {
   return (neuron0x37306b0()*-0.186199);
}

double NNfunction-ss_cLsR::synapse0x3749c60() {
   return (neuron0x37309f0()*0.0439499);
}

double NNfunction-ss_cLsR::synapse0x3749ca0() {
   return (neuron0x3730d30()*0.101745);
}

double NNfunction-ss_cLsR::synapse0x374a020() {
   return (neuron0x372c170()*-0.127967);
}

double NNfunction-ss_cLsR::synapse0x374a060() {
   return (neuron0x372c4b0()*-0.450269);
}

double NNfunction-ss_cLsR::synapse0x374a0a0() {
   return (neuron0x372c7f0()*0.000803159);
}

double NNfunction-ss_cLsR::synapse0x374a0e0() {
   return (neuron0x372cb30()*-0.217186);
}

double NNfunction-ss_cLsR::synapse0x374a120() {
   return (neuron0x372ce70()*0.276527);
}

double NNfunction-ss_cLsR::synapse0x374a160() {
   return (neuron0x372d1b0()*-0.224221);
}

double NNfunction-ss_cLsR::synapse0x374a1a0() {
   return (neuron0x372d4f0()*-0.21267);
}

double NNfunction-ss_cLsR::synapse0x374a1e0() {
   return (neuron0x372d830()*-0.262478);
}

double NNfunction-ss_cLsR::synapse0x374a220() {
   return (neuron0x372db70()*0.471405);
}

double NNfunction-ss_cLsR::synapse0x374a260() {
   return (neuron0x372deb0()*-0.422879);
}

double NNfunction-ss_cLsR::synapse0x374a2a0() {
   return (neuron0x372e1f0()*-0.0571965);
}

double NNfunction-ss_cLsR::synapse0x374a2e0() {
   return (neuron0x372e530()*0.111343);
}

double NNfunction-ss_cLsR::synapse0x374a320() {
   return (neuron0x372e870()*-0.39694);
}

double NNfunction-ss_cLsR::synapse0x374a360() {
   return (neuron0x372ebb0()*-0.185722);
}

double NNfunction-ss_cLsR::synapse0x374a3a0() {
   return (neuron0x372eef0()*0.0549065);
}

double NNfunction-ss_cLsR::synapse0x374a3e0() {
   return (neuron0x372f230()*-0.246345);
}

double NNfunction-ss_cLsR::synapse0x3749e70() {
   return (neuron0x372f570()*-0.392068);
}

double NNfunction-ss_cLsR::synapse0x3749eb0() {
   return (neuron0x372fad0()*-0.264505);
}

double NNfunction-ss_cLsR::synapse0x374a530() {
   return (neuron0x372fcf0()*0.0682337);
}

double NNfunction-ss_cLsR::synapse0x374a570() {
   return (neuron0x3730030()*-0.0274298);
}

double NNfunction-ss_cLsR::synapse0x374a5b0() {
   return (neuron0x3730370()*-0.111539);
}

double NNfunction-ss_cLsR::synapse0x374a5f0() {
   return (neuron0x37306b0()*0.350745);
}

double NNfunction-ss_cLsR::synapse0x374a630() {
   return (neuron0x37309f0()*0.454838);
}

double NNfunction-ss_cLsR::synapse0x374a670() {
   return (neuron0x3730d30()*-0.223211);
}

double NNfunction-ss_cLsR::synapse0x374a9f0() {
   return (neuron0x372c170()*-0.0278605);
}

double NNfunction-ss_cLsR::synapse0x374aa30() {
   return (neuron0x372c4b0()*-0.00717186);
}

double NNfunction-ss_cLsR::synapse0x374aa70() {
   return (neuron0x372c7f0()*-0.0182103);
}

double NNfunction-ss_cLsR::synapse0x374aab0() {
   return (neuron0x372cb30()*-0.0860302);
}

double NNfunction-ss_cLsR::synapse0x374aaf0() {
   return (neuron0x372ce70()*0.0801308);
}

double NNfunction-ss_cLsR::synapse0x374ab30() {
   return (neuron0x372d1b0()*0.0126328);
}

double NNfunction-ss_cLsR::synapse0x374ab70() {
   return (neuron0x372d4f0()*-0.0252982);
}

double NNfunction-ss_cLsR::synapse0x374abb0() {
   return (neuron0x372d830()*0.0349374);
}

double NNfunction-ss_cLsR::synapse0x374abf0() {
   return (neuron0x372db70()*0.0414395);
}

double NNfunction-ss_cLsR::synapse0x374ac30() {
   return (neuron0x372deb0()*0.00333867);
}

double NNfunction-ss_cLsR::synapse0x374ac70() {
   return (neuron0x372e1f0()*0.0687896);
}

double NNfunction-ss_cLsR::synapse0x374acb0() {
   return (neuron0x372e530()*-0.0354085);
}

double NNfunction-ss_cLsR::synapse0x374acf0() {
   return (neuron0x372e870()*0.22213);
}

double NNfunction-ss_cLsR::synapse0x374ad30() {
   return (neuron0x372ebb0()*0.00736575);
}

double NNfunction-ss_cLsR::synapse0x374ad70() {
   return (neuron0x372eef0()*-0.0617873);
}

double NNfunction-ss_cLsR::synapse0x374adb0() {
   return (neuron0x372f230()*-0.000935729);
}

double NNfunction-ss_cLsR::synapse0x374a840() {
   return (neuron0x372f570()*-0.0145352);
}

double NNfunction-ss_cLsR::synapse0x374a880() {
   return (neuron0x372fad0()*-0.0227335);
}

double NNfunction-ss_cLsR::synapse0x374af00() {
   return (neuron0x372fcf0()*-2.00813);
}

double NNfunction-ss_cLsR::synapse0x374af40() {
   return (neuron0x3730030()*0.0646025);
}

double NNfunction-ss_cLsR::synapse0x374af80() {
   return (neuron0x3730370()*-0.0174747);
}

double NNfunction-ss_cLsR::synapse0x374afc0() {
   return (neuron0x37306b0()*0.022238);
}

double NNfunction-ss_cLsR::synapse0x374b000() {
   return (neuron0x37309f0()*-0.0177402);
}

double NNfunction-ss_cLsR::synapse0x374b040() {
   return (neuron0x3730d30()*-0.0667343);
}

double NNfunction-ss_cLsR::synapse0x374b3c0() {
   return (neuron0x372c170()*0.718197);
}

double NNfunction-ss_cLsR::synapse0x374b400() {
   return (neuron0x372c4b0()*0.124268);
}

double NNfunction-ss_cLsR::synapse0x374b440() {
   return (neuron0x372c7f0()*-0.332374);
}

double NNfunction-ss_cLsR::synapse0x374b480() {
   return (neuron0x372cb30()*-0.983247);
}

double NNfunction-ss_cLsR::synapse0x374b4c0() {
   return (neuron0x372ce70()*0.048323);
}

double NNfunction-ss_cLsR::synapse0x374b500() {
   return (neuron0x372d1b0()*-0.417994);
}

double NNfunction-ss_cLsR::synapse0x374b540() {
   return (neuron0x372d4f0()*-0.201235);
}

double NNfunction-ss_cLsR::synapse0x374b580() {
   return (neuron0x372d830()*0.0981676);
}

double NNfunction-ss_cLsR::synapse0x374b5c0() {
   return (neuron0x372db70()*0.347643);
}

double NNfunction-ss_cLsR::synapse0x374b600() {
   return (neuron0x372deb0()*0.275862);
}

double NNfunction-ss_cLsR::synapse0x374b640() {
   return (neuron0x372e1f0()*-0.053441);
}

double NNfunction-ss_cLsR::synapse0x374b680() {
   return (neuron0x372e530()*0.156435);
}

double NNfunction-ss_cLsR::synapse0x374b6c0() {
   return (neuron0x372e870()*-1.11458);
}

double NNfunction-ss_cLsR::synapse0x374b700() {
   return (neuron0x372ebb0()*-0.180331);
}

double NNfunction-ss_cLsR::synapse0x374b740() {
   return (neuron0x372eef0()*0.0313775);
}

double NNfunction-ss_cLsR::synapse0x374b780() {
   return (neuron0x372f230()*0.301204);
}

double NNfunction-ss_cLsR::synapse0x374b210() {
   return (neuron0x372f570()*-0.117228);
}

double NNfunction-ss_cLsR::synapse0x374b250() {
   return (neuron0x372fad0()*0.186256);
}

double NNfunction-ss_cLsR::synapse0x374b8d0() {
   return (neuron0x372fcf0()*0.0358337);
}

double NNfunction-ss_cLsR::synapse0x374b910() {
   return (neuron0x3730030()*0.162137);
}

double NNfunction-ss_cLsR::synapse0x374b950() {
   return (neuron0x3730370()*-0.288122);
}

double NNfunction-ss_cLsR::synapse0x374b990() {
   return (neuron0x37306b0()*-0.36745);
}

double NNfunction-ss_cLsR::synapse0x374b9d0() {
   return (neuron0x37309f0()*0.277603);
}

double NNfunction-ss_cLsR::synapse0x374ba10() {
   return (neuron0x3730d30()*-0.0118053);
}

double NNfunction-ss_cLsR::synapse0x374bd90() {
   return (neuron0x372c170()*0.0847471);
}

double NNfunction-ss_cLsR::synapse0x374bdd0() {
   return (neuron0x372c4b0()*-0.0500167);
}

double NNfunction-ss_cLsR::synapse0x374be10() {
   return (neuron0x372c7f0()*-0.278686);
}

double NNfunction-ss_cLsR::synapse0x374be50() {
   return (neuron0x372cb30()*0.0656044);
}

double NNfunction-ss_cLsR::synapse0x374be90() {
   return (neuron0x372ce70()*0.0160493);
}

double NNfunction-ss_cLsR::synapse0x374bed0() {
   return (neuron0x372d1b0()*0.0779943);
}

double NNfunction-ss_cLsR::synapse0x374bf10() {
   return (neuron0x372d4f0()*0.0592518);
}

double NNfunction-ss_cLsR::synapse0x374bf50() {
   return (neuron0x372d830()*-0.0450999);
}

double NNfunction-ss_cLsR::synapse0x374bf90() {
   return (neuron0x372db70()*-0.0705295);
}

double NNfunction-ss_cLsR::synapse0x374bfd0() {
   return (neuron0x372deb0()*0.0320804);
}

double NNfunction-ss_cLsR::synapse0x374c010() {
   return (neuron0x372e1f0()*-0.0115248);
}

double NNfunction-ss_cLsR::synapse0x374c050() {
   return (neuron0x372e530()*0.307815);
}

double NNfunction-ss_cLsR::synapse0x374c090() {
   return (neuron0x372e870()*0.228677);
}

double NNfunction-ss_cLsR::synapse0x374c0d0() {
   return (neuron0x372ebb0()*-0.0954834);
}

double NNfunction-ss_cLsR::synapse0x374c110() {
   return (neuron0x372eef0()*0.289988);
}

double NNfunction-ss_cLsR::synapse0x374c150() {
   return (neuron0x372f230()*0.28241);
}

double NNfunction-ss_cLsR::synapse0x374bbe0() {
   return (neuron0x372f570()*-0.176466);
}

double NNfunction-ss_cLsR::synapse0x374bc20() {
   return (neuron0x372fad0()*0.180069);
}

double NNfunction-ss_cLsR::synapse0x374c2a0() {
   return (neuron0x372fcf0()*0.164806);
}

double NNfunction-ss_cLsR::synapse0x374c2e0() {
   return (neuron0x3730030()*-0.0122634);
}

double NNfunction-ss_cLsR::synapse0x374c320() {
   return (neuron0x3730370()*0.0447214);
}

double NNfunction-ss_cLsR::synapse0x374c360() {
   return (neuron0x37306b0()*-0.0075861);
}

double NNfunction-ss_cLsR::synapse0x374c3a0() {
   return (neuron0x37309f0()*0.0358259);
}

double NNfunction-ss_cLsR::synapse0x374c3e0() {
   return (neuron0x3730d30()*-0.0132406);
}

double NNfunction-ss_cLsR::synapse0x374c760() {
   return (neuron0x372c170()*-0.0397266);
}

double NNfunction-ss_cLsR::synapse0x374c7a0() {
   return (neuron0x372c4b0()*0.329776);
}

double NNfunction-ss_cLsR::synapse0x374c7e0() {
   return (neuron0x372c7f0()*0.422112);
}

double NNfunction-ss_cLsR::synapse0x374c820() {
   return (neuron0x372cb30()*0.0114937);
}

double NNfunction-ss_cLsR::synapse0x374c860() {
   return (neuron0x372ce70()*-0.836838);
}

double NNfunction-ss_cLsR::synapse0x374c8a0() {
   return (neuron0x372d1b0()*0.0661209);
}

double NNfunction-ss_cLsR::synapse0x374c8e0() {
   return (neuron0x372d4f0()*-0.469791);
}

double NNfunction-ss_cLsR::synapse0x374c920() {
   return (neuron0x372d830()*-0.934385);
}

double NNfunction-ss_cLsR::synapse0x374c960() {
   return (neuron0x372db70()*-0.0817694);
}

double NNfunction-ss_cLsR::synapse0x374c9a0() {
   return (neuron0x372deb0()*-0.203265);
}

double NNfunction-ss_cLsR::synapse0x374c9e0() {
   return (neuron0x372e1f0()*-0.774947);
}

double NNfunction-ss_cLsR::synapse0x374ca20() {
   return (neuron0x372e530()*0.323968);
}

double NNfunction-ss_cLsR::synapse0x374ca60() {
   return (neuron0x372e870()*-1.08601);
}

double NNfunction-ss_cLsR::synapse0x374caa0() {
   return (neuron0x372ebb0()*-0.377681);
}

double NNfunction-ss_cLsR::synapse0x374cae0() {
   return (neuron0x372eef0()*-0.347105);
}

double NNfunction-ss_cLsR::synapse0x374cb20() {
   return (neuron0x372f230()*-0.219947);
}

double NNfunction-ss_cLsR::synapse0x374c5b0() {
   return (neuron0x372f570()*-0.0332006);
}

double NNfunction-ss_cLsR::synapse0x374c5f0() {
   return (neuron0x372fad0()*0.0554979);
}

double NNfunction-ss_cLsR::synapse0x374cc70() {
   return (neuron0x372fcf0()*0.486451);
}

double NNfunction-ss_cLsR::synapse0x374ccb0() {
   return (neuron0x3730030()*-0.0758523);
}

double NNfunction-ss_cLsR::synapse0x374ccf0() {
   return (neuron0x3730370()*-0.0182008);
}

double NNfunction-ss_cLsR::synapse0x374cd30() {
   return (neuron0x37306b0()*0.503453);
}

double NNfunction-ss_cLsR::synapse0x374cd70() {
   return (neuron0x37309f0()*0.173697);
}

double NNfunction-ss_cLsR::synapse0x374cdb0() {
   return (neuron0x3730d30()*-0.145731);
}

double NNfunction-ss_cLsR::synapse0x374d130() {
   return (neuron0x372c170()*0.00712587);
}

double NNfunction-ss_cLsR::synapse0x374d170() {
   return (neuron0x372c4b0()*0.012666);
}

double NNfunction-ss_cLsR::synapse0x374d1b0() {
   return (neuron0x372c7f0()*-0.337407);
}

double NNfunction-ss_cLsR::synapse0x374d1f0() {
   return (neuron0x372cb30()*-0.555413);
}

double NNfunction-ss_cLsR::synapse0x374d230() {
   return (neuron0x372ce70()*-0.0164251);
}

double NNfunction-ss_cLsR::synapse0x374d270() {
   return (neuron0x372d1b0()*-0.0114783);
}

double NNfunction-ss_cLsR::synapse0x374d2b0() {
   return (neuron0x372d4f0()*-0.0558174);
}

double NNfunction-ss_cLsR::synapse0x374d2f0() {
   return (neuron0x372d830()*-0.437741);
}

double NNfunction-ss_cLsR::synapse0x374d330() {
   return (neuron0x372db70()*-0.99101);
}

double NNfunction-ss_cLsR::synapse0x374d370() {
   return (neuron0x372deb0()*-0.996666);
}

double NNfunction-ss_cLsR::synapse0x374d3b0() {
   return (neuron0x372e1f0()*-0.579575);
}

double NNfunction-ss_cLsR::synapse0x374d3f0() {
   return (neuron0x372e530()*-0.0105349);
}

double NNfunction-ss_cLsR::synapse0x374d430() {
   return (neuron0x372e870()*-0.811277);
}

double NNfunction-ss_cLsR::synapse0x374d470() {
   return (neuron0x372ebb0()*-0.643687);
}

double NNfunction-ss_cLsR::synapse0x374d4b0() {
   return (neuron0x372eef0()*-0.432209);
}

double NNfunction-ss_cLsR::synapse0x374d4f0() {
   return (neuron0x372f230()*-0.796525);
}

double NNfunction-ss_cLsR::synapse0x374cf80() {
   return (neuron0x372f570()*0.415687);
}

double NNfunction-ss_cLsR::synapse0x374cfc0() {
   return (neuron0x372fad0()*0.22606);
}

double NNfunction-ss_cLsR::synapse0x374d640() {
   return (neuron0x372fcf0()*0.241075);
}

double NNfunction-ss_cLsR::synapse0x374d680() {
   return (neuron0x3730030()*0.0415452);
}

double NNfunction-ss_cLsR::synapse0x374d6c0() {
   return (neuron0x3730370()*-0.256901);
}

double NNfunction-ss_cLsR::synapse0x374d700() {
   return (neuron0x37306b0()*0.638799);
}

double NNfunction-ss_cLsR::synapse0x374d740() {
   return (neuron0x37309f0()*0.160368);
}

double NNfunction-ss_cLsR::synapse0x374d780() {
   return (neuron0x3730d30()*0.302722);
}

double NNfunction-ss_cLsR::synapse0x3736230() {
   return (neuron0x372c170()*-0.00159392);
}

double NNfunction-ss_cLsR::synapse0x3736270() {
   return (neuron0x372c4b0()*-0.347444);
}

double NNfunction-ss_cLsR::synapse0x37362b0() {
   return (neuron0x372c7f0()*-0.476223);
}

double NNfunction-ss_cLsR::synapse0x37362f0() {
   return (neuron0x372cb30()*0.425282);
}

double NNfunction-ss_cLsR::synapse0x3736330() {
   return (neuron0x372ce70()*-0.53651);
}

double NNfunction-ss_cLsR::synapse0x3736370() {
   return (neuron0x372d1b0()*0.137692);
}

double NNfunction-ss_cLsR::synapse0x37363b0() {
   return (neuron0x372d4f0()*-0.606024);
}

double NNfunction-ss_cLsR::synapse0x37363f0() {
   return (neuron0x372d830()*0.531439);
}

double NNfunction-ss_cLsR::synapse0x374df10() {
   return (neuron0x372db70()*0.774565);
}

double NNfunction-ss_cLsR::synapse0x374df50() {
   return (neuron0x372deb0()*0.836754);
}

double NNfunction-ss_cLsR::synapse0x374df90() {
   return (neuron0x372e1f0()*1.06143);
}

double NNfunction-ss_cLsR::synapse0x374dfd0() {
   return (neuron0x372e530()*-0.92993);
}

double NNfunction-ss_cLsR::synapse0x374e010() {
   return (neuron0x372e870()*-0.260863);
}

double NNfunction-ss_cLsR::synapse0x374e050() {
   return (neuron0x372ebb0()*-0.977376);
}

double NNfunction-ss_cLsR::synapse0x374e090() {
   return (neuron0x372eef0()*-0.862142);
}

double NNfunction-ss_cLsR::synapse0x374e0d0() {
   return (neuron0x372f230()*-0.349283);
}

double NNfunction-ss_cLsR::synapse0x374d950() {
   return (neuron0x372f570()*0.561519);
}

double NNfunction-ss_cLsR::synapse0x374d990() {
   return (neuron0x372fad0()*-0.693688);
}

double NNfunction-ss_cLsR::synapse0x374e220() {
   return (neuron0x372fcf0()*0.347689);
}

double NNfunction-ss_cLsR::synapse0x374e260() {
   return (neuron0x3730030()*0.372385);
}

double NNfunction-ss_cLsR::synapse0x374e2a0() {
   return (neuron0x3730370()*-0.0841291);
}

double NNfunction-ss_cLsR::synapse0x374e2e0() {
   return (neuron0x37306b0()*0.13779);
}

double NNfunction-ss_cLsR::synapse0x374e320() {
   return (neuron0x37309f0()*-0.0882371);
}

double NNfunction-ss_cLsR::synapse0x374e360() {
   return (neuron0x3730d30()*-0.471455);
}

double NNfunction-ss_cLsR::synapse0x374e6e0() {
   return (neuron0x372c170()*-0.023109);
}

double NNfunction-ss_cLsR::synapse0x374e720() {
   return (neuron0x372c4b0()*0.00454322);
}

double NNfunction-ss_cLsR::synapse0x374e760() {
   return (neuron0x372c7f0()*-0.130564);
}

double NNfunction-ss_cLsR::synapse0x374e7a0() {
   return (neuron0x372cb30()*-0.0733429);
}

double NNfunction-ss_cLsR::synapse0x374e7e0() {
   return (neuron0x372ce70()*0.0323718);
}

double NNfunction-ss_cLsR::synapse0x374e820() {
   return (neuron0x372d1b0()*-0.0105783);
}

double NNfunction-ss_cLsR::synapse0x374e860() {
   return (neuron0x372d4f0()*-0.00340556);
}

double NNfunction-ss_cLsR::synapse0x374e8a0() {
   return (neuron0x372d830()*-0.0097035);
}

double NNfunction-ss_cLsR::synapse0x374e8e0() {
   return (neuron0x372db70()*-0.0111825);
}

double NNfunction-ss_cLsR::synapse0x374e920() {
   return (neuron0x372deb0()*-0.0334234);
}

double NNfunction-ss_cLsR::synapse0x374e960() {
   return (neuron0x372e1f0()*0.0215301);
}

double NNfunction-ss_cLsR::synapse0x374e9a0() {
   return (neuron0x372e530()*-0.00918103);
}

double NNfunction-ss_cLsR::synapse0x374e9e0() {
   return (neuron0x372e870()*-0.893196);
}

double NNfunction-ss_cLsR::synapse0x374ea20() {
   return (neuron0x372ebb0()*0.00585446);
}

double NNfunction-ss_cLsR::synapse0x374ea60() {
   return (neuron0x372eef0()*0.00398202);
}

double NNfunction-ss_cLsR::synapse0x374eaa0() {
   return (neuron0x372f230()*-0.0709742);
}

double NNfunction-ss_cLsR::synapse0x374e530() {
   return (neuron0x372f570()*0.0459682);
}

double NNfunction-ss_cLsR::synapse0x374e570() {
   return (neuron0x372fad0()*0.0257387);
}

double NNfunction-ss_cLsR::synapse0x374ebf0() {
   return (neuron0x372fcf0()*-0.395239);
}

double NNfunction-ss_cLsR::synapse0x374ec30() {
   return (neuron0x3730030()*0.0238669);
}

double NNfunction-ss_cLsR::synapse0x374ec70() {
   return (neuron0x3730370()*-0.0315276);
}

double NNfunction-ss_cLsR::synapse0x374ecb0() {
   return (neuron0x37306b0()*-0.00264106);
}

double NNfunction-ss_cLsR::synapse0x374ecf0() {
   return (neuron0x37309f0()*0.00384665);
}

double NNfunction-ss_cLsR::synapse0x374ed30() {
   return (neuron0x3730d30()*0.0622856);
}

double NNfunction-ss_cLsR::synapse0x374f0b0() {
   return (neuron0x372c170()*-0.508756);
}

double NNfunction-ss_cLsR::synapse0x374f0f0() {
   return (neuron0x372c4b0()*-0.439867);
}

double NNfunction-ss_cLsR::synapse0x374f130() {
   return (neuron0x372c7f0()*-0.670214);
}

double NNfunction-ss_cLsR::synapse0x374f170() {
   return (neuron0x372cb30()*0.614567);
}

double NNfunction-ss_cLsR::synapse0x374f1b0() {
   return (neuron0x372ce70()*0.476986);
}

double NNfunction-ss_cLsR::synapse0x374f1f0() {
   return (neuron0x372d1b0()*-0.0279384);
}

double NNfunction-ss_cLsR::synapse0x374f230() {
   return (neuron0x372d4f0()*-1.18919);
}

double NNfunction-ss_cLsR::synapse0x374f270() {
   return (neuron0x372d830()*1.10677);
}

double NNfunction-ss_cLsR::synapse0x374f2b0() {
   return (neuron0x372db70()*0.158049);
}

double NNfunction-ss_cLsR::synapse0x374f2f0() {
   return (neuron0x372deb0()*-0.11462);
}

double NNfunction-ss_cLsR::synapse0x374f330() {
   return (neuron0x372e1f0()*-1.56493);
}

double NNfunction-ss_cLsR::synapse0x374f370() {
   return (neuron0x372e530()*0.315035);
}

double NNfunction-ss_cLsR::synapse0x374f3b0() {
   return (neuron0x372e870()*-0.671011);
}

double NNfunction-ss_cLsR::synapse0x374f3f0() {
   return (neuron0x372ebb0()*0.223519);
}

double NNfunction-ss_cLsR::synapse0x374f430() {
   return (neuron0x372eef0()*-1.0763);
}

double NNfunction-ss_cLsR::synapse0x374f470() {
   return (neuron0x372f230()*-0.0924214);
}

double NNfunction-ss_cLsR::synapse0x374ef00() {
   return (neuron0x372f570()*-0.327989);
}

double NNfunction-ss_cLsR::synapse0x374ef40() {
   return (neuron0x372fad0()*-0.30387);
}

double NNfunction-ss_cLsR::synapse0x373fa70() {
   return (neuron0x372fcf0()*0.672258);
}

double NNfunction-ss_cLsR::synapse0x373fab0() {
   return (neuron0x3730030()*0.224636);
}

double NNfunction-ss_cLsR::synapse0x373faf0() {
   return (neuron0x3730370()*0.824627);
}

double NNfunction-ss_cLsR::synapse0x373fb30() {
   return (neuron0x37306b0()*-0.876673);
}

double NNfunction-ss_cLsR::synapse0x373fb70() {
   return (neuron0x37309f0()*-0.168978);
}

double NNfunction-ss_cLsR::synapse0x373fbb0() {
   return (neuron0x3730d30()*-0.067732);
}

double NNfunction-ss_cLsR::synapse0x373ff30() {
   return (neuron0x372c170()*0.000453732);
}

double NNfunction-ss_cLsR::synapse0x373ff70() {
   return (neuron0x372c4b0()*0.357149);
}

double NNfunction-ss_cLsR::synapse0x373ffb0() {
   return (neuron0x372c7f0()*0.00730987);
}

double NNfunction-ss_cLsR::synapse0x373fff0() {
   return (neuron0x372cb30()*0.832345);
}

double NNfunction-ss_cLsR::synapse0x3740030() {
   return (neuron0x372ce70()*-0.356667);
}

double NNfunction-ss_cLsR::synapse0x3740070() {
   return (neuron0x372d1b0()*-0.637171);
}

double NNfunction-ss_cLsR::synapse0x37400b0() {
   return (neuron0x372d4f0()*-0.464244);
}

double NNfunction-ss_cLsR::synapse0x37400f0() {
   return (neuron0x372d830()*0.3617);
}

double NNfunction-ss_cLsR::synapse0x3740130() {
   return (neuron0x372db70()*0.389307);
}

double NNfunction-ss_cLsR::synapse0x3740170() {
   return (neuron0x372deb0()*0.0193083);
}

double NNfunction-ss_cLsR::synapse0x37401b0() {
   return (neuron0x372e1f0()*0.0930688);
}

double NNfunction-ss_cLsR::synapse0x37401f0() {
   return (neuron0x372e530()*0.390741);
}

double NNfunction-ss_cLsR::synapse0x3740230() {
   return (neuron0x372e870()*0.961563);
}

double NNfunction-ss_cLsR::synapse0x3740270() {
   return (neuron0x372ebb0()*0.655742);
}

double NNfunction-ss_cLsR::synapse0x37402b0() {
   return (neuron0x372eef0()*-0.167943);
}

double NNfunction-ss_cLsR::synapse0x37402f0() {
   return (neuron0x372f230()*0.872631);
}

double NNfunction-ss_cLsR::synapse0x373fd80() {
   return (neuron0x372f570()*-0.111977);
}

double NNfunction-ss_cLsR::synapse0x373fdc0() {
   return (neuron0x372fad0()*0.320592);
}

double NNfunction-ss_cLsR::synapse0x3740440() {
   return (neuron0x372fcf0()*0.100624);
}

double NNfunction-ss_cLsR::synapse0x3740480() {
   return (neuron0x3730030()*0.340646);
}

double NNfunction-ss_cLsR::synapse0x37404c0() {
   return (neuron0x3730370()*-0.215546);
}

double NNfunction-ss_cLsR::synapse0x3740500() {
   return (neuron0x37306b0()*-0.0237114);
}

double NNfunction-ss_cLsR::synapse0x3740540() {
   return (neuron0x37309f0()*-0.0517036);
}

double NNfunction-ss_cLsR::synapse0x3740580() {
   return (neuron0x3730d30()*0.672265);
}

double NNfunction-ss_cLsR::synapse0x3740900() {
   return (neuron0x372c170()*0.168688);
}

double NNfunction-ss_cLsR::synapse0x3740940() {
   return (neuron0x372c4b0()*-0.0496725);
}

double NNfunction-ss_cLsR::synapse0x3740980() {
   return (neuron0x372c7f0()*1.14322);
}

double NNfunction-ss_cLsR::synapse0x37409c0() {
   return (neuron0x372cb30()*-3.8587);
}

double NNfunction-ss_cLsR::synapse0x3740a00() {
   return (neuron0x372ce70()*0.440778);
}

double NNfunction-ss_cLsR::synapse0x3740a40() {
   return (neuron0x372d1b0()*0.955575);
}

double NNfunction-ss_cLsR::synapse0x3740a80() {
   return (neuron0x372d4f0()*1.22899);
}

double NNfunction-ss_cLsR::synapse0x3740ac0() {
   return (neuron0x372d830()*0.678178);
}

double NNfunction-ss_cLsR::synapse0x3740b00() {
   return (neuron0x372db70()*0.363477);
}

double NNfunction-ss_cLsR::synapse0x3740b40() {
   return (neuron0x372deb0()*1.5017);
}

double NNfunction-ss_cLsR::synapse0x3740b80() {
   return (neuron0x372e1f0()*0.525724);
}

double NNfunction-ss_cLsR::synapse0x3740bc0() {
   return (neuron0x372e530()*-0.0499581);
}

double NNfunction-ss_cLsR::synapse0x3740c00() {
   return (neuron0x372e870()*-0.338908);
}

double NNfunction-ss_cLsR::synapse0x3740c40() {
   return (neuron0x372ebb0()*0.0855603);
}

double NNfunction-ss_cLsR::synapse0x3740c80() {
   return (neuron0x372eef0()*-0.373997);
}

double NNfunction-ss_cLsR::synapse0x3740cc0() {
   return (neuron0x372f230()*0.0664492);
}

double NNfunction-ss_cLsR::synapse0x3740750() {
   return (neuron0x372f570()*-0.0936094);
}

double NNfunction-ss_cLsR::synapse0x3740790() {
   return (neuron0x372fad0()*-0.330472);
}

double NNfunction-ss_cLsR::synapse0x3740e10() {
   return (neuron0x372fcf0()*-0.325722);
}

double NNfunction-ss_cLsR::synapse0x3740e50() {
   return (neuron0x3730030()*0.316752);
}

double NNfunction-ss_cLsR::synapse0x3740e90() {
   return (neuron0x3730370()*0.965901);
}

double NNfunction-ss_cLsR::synapse0x3740ed0() {
   return (neuron0x37306b0()*-0.107353);
}

double NNfunction-ss_cLsR::synapse0x3740f10() {
   return (neuron0x37309f0()*-0.815821);
}

double NNfunction-ss_cLsR::synapse0x3740f50() {
   return (neuron0x3730d30()*-0.0489443);
}

double NNfunction-ss_cLsR::synapse0x37412d0() {
   return (neuron0x372c170()*-0.123156);
}

double NNfunction-ss_cLsR::synapse0x3741310() {
   return (neuron0x372c4b0()*-0.408886);
}

double NNfunction-ss_cLsR::synapse0x3741350() {
   return (neuron0x372c7f0()*0.0667023);
}

double NNfunction-ss_cLsR::synapse0x3741390() {
   return (neuron0x372cb30()*-1.25621);
}

double NNfunction-ss_cLsR::synapse0x37413d0() {
   return (neuron0x372ce70()*0.0280559);
}

double NNfunction-ss_cLsR::synapse0x3741410() {
   return (neuron0x372d1b0()*0.215063);
}

double NNfunction-ss_cLsR::synapse0x3741450() {
   return (neuron0x372d4f0()*0.370758);
}

double NNfunction-ss_cLsR::synapse0x3741490() {
   return (neuron0x372d830()*-0.149522);
}

double NNfunction-ss_cLsR::synapse0x37414d0() {
   return (neuron0x372db70()*-0.109912);
}

double NNfunction-ss_cLsR::synapse0x3741510() {
   return (neuron0x372deb0()*-0.283659);
}

double NNfunction-ss_cLsR::synapse0x3741550() {
   return (neuron0x372e1f0()*-0.146803);
}

double NNfunction-ss_cLsR::synapse0x3741590() {
   return (neuron0x372e530()*0.0523366);
}

double NNfunction-ss_cLsR::synapse0x37415d0() {
   return (neuron0x372e870()*-0.627378);
}

double NNfunction-ss_cLsR::synapse0x3741610() {
   return (neuron0x372ebb0()*0.0635735);
}

double NNfunction-ss_cLsR::synapse0x3741650() {
   return (neuron0x372eef0()*-0.0862449);
}

double NNfunction-ss_cLsR::synapse0x3741690() {
   return (neuron0x372f230()*-0.417597);
}

double NNfunction-ss_cLsR::synapse0x3741120() {
   return (neuron0x372f570()*0.0612406);
}

double NNfunction-ss_cLsR::synapse0x3741160() {
   return (neuron0x372fad0()*-0.144814);
}

double NNfunction-ss_cLsR::synapse0x37417e0() {
   return (neuron0x372fcf0()*0.379448);
}

double NNfunction-ss_cLsR::synapse0x3741820() {
   return (neuron0x3730030()*-0.0649425);
}

double NNfunction-ss_cLsR::synapse0x3741860() {
   return (neuron0x3730370()*-0.00105975);
}

double NNfunction-ss_cLsR::synapse0x37418a0() {
   return (neuron0x37306b0()*0.180706);
}

double NNfunction-ss_cLsR::synapse0x37418e0() {
   return (neuron0x37309f0()*0.0529475);
}

double NNfunction-ss_cLsR::synapse0x3741920() {
   return (neuron0x3730d30()*0.206679);
}

double NNfunction-ss_cLsR::synapse0x37537f0() {
   return (neuron0x372c170()*-0.0430079);
}

double NNfunction-ss_cLsR::synapse0x3753830() {
   return (neuron0x372c4b0()*-0.245216);
}

double NNfunction-ss_cLsR::synapse0x3753870() {
   return (neuron0x372c7f0()*0.0904768);
}

double NNfunction-ss_cLsR::synapse0x37538b0() {
   return (neuron0x372cb30()*-0.361009);
}

double NNfunction-ss_cLsR::synapse0x37538f0() {
   return (neuron0x372ce70()*0.682597);
}

double NNfunction-ss_cLsR::synapse0x3753930() {
   return (neuron0x372d1b0()*0.320314);
}

double NNfunction-ss_cLsR::synapse0x3753970() {
   return (neuron0x372d4f0()*0.823377);
}

double NNfunction-ss_cLsR::synapse0x37539b0() {
   return (neuron0x372d830()*0.470649);
}

double NNfunction-ss_cLsR::synapse0x37539f0() {
   return (neuron0x372db70()*0.0215694);
}

double NNfunction-ss_cLsR::synapse0x3753a30() {
   return (neuron0x372deb0()*0.20494);
}

double NNfunction-ss_cLsR::synapse0x3753a70() {
   return (neuron0x372e1f0()*0.526934);
}

double NNfunction-ss_cLsR::synapse0x3753ab0() {
   return (neuron0x372e530()*-0.0112572);
}

double NNfunction-ss_cLsR::synapse0x3753af0() {
   return (neuron0x372e870()*0.401711);
}

double NNfunction-ss_cLsR::synapse0x3753b30() {
   return (neuron0x372ebb0()*0.303575);
}

double NNfunction-ss_cLsR::synapse0x3753b70() {
   return (neuron0x372eef0()*-0.199322);
}

double NNfunction-ss_cLsR::synapse0x3753bb0() {
   return (neuron0x372f230()*-0.133793);
}

double NNfunction-ss_cLsR::synapse0x3741960() {
   return (neuron0x372f570()*0.129396);
}

double NNfunction-ss_cLsR::synapse0x37419a0() {
   return (neuron0x372fad0()*-0.142615);
}

double NNfunction-ss_cLsR::synapse0x3753d00() {
   return (neuron0x372fcf0()*0.186916);
}

double NNfunction-ss_cLsR::synapse0x3753d40() {
   return (neuron0x3730030()*-0.102284);
}

double NNfunction-ss_cLsR::synapse0x3753d80() {
   return (neuron0x3730370()*0.165472);
}

double NNfunction-ss_cLsR::synapse0x3753dc0() {
   return (neuron0x37306b0()*-0.405879);
}

double NNfunction-ss_cLsR::synapse0x3753e00() {
   return (neuron0x37309f0()*-0.311121);
}

double NNfunction-ss_cLsR::synapse0x3753e40() {
   return (neuron0x3730d30()*0.0409185);
}

double NNfunction-ss_cLsR::synapse0x37541c0() {
   return (neuron0x372c170()*0.0726059);
}

double NNfunction-ss_cLsR::synapse0x3754200() {
   return (neuron0x372c4b0()*0.322826);
}

double NNfunction-ss_cLsR::synapse0x3754240() {
   return (neuron0x372c7f0()*-0.0408191);
}

double NNfunction-ss_cLsR::synapse0x3754280() {
   return (neuron0x372cb30()*-0.590698);
}

double NNfunction-ss_cLsR::synapse0x37542c0() {
   return (neuron0x372ce70()*-0.854063);
}

double NNfunction-ss_cLsR::synapse0x3754300() {
   return (neuron0x372d1b0()*0.278867);
}

double NNfunction-ss_cLsR::synapse0x3754340() {
   return (neuron0x372d4f0()*0.349714);
}

double NNfunction-ss_cLsR::synapse0x3754380() {
   return (neuron0x372d830()*-0.108271);
}

double NNfunction-ss_cLsR::synapse0x37543c0() {
   return (neuron0x372db70()*-0.431159);
}

double NNfunction-ss_cLsR::synapse0x3754400() {
   return (neuron0x372deb0()*0.772023);
}

double NNfunction-ss_cLsR::synapse0x3754440() {
   return (neuron0x372e1f0()*0.964061);
}

double NNfunction-ss_cLsR::synapse0x3754480() {
   return (neuron0x372e530()*-0.922994);
}

double NNfunction-ss_cLsR::synapse0x37544c0() {
   return (neuron0x372e870()*0.0753569);
}

double NNfunction-ss_cLsR::synapse0x3754500() {
   return (neuron0x372ebb0()*-0.74943);
}

double NNfunction-ss_cLsR::synapse0x3754540() {
   return (neuron0x372eef0()*0.95729);
}

double NNfunction-ss_cLsR::synapse0x3754580() {
   return (neuron0x372f230()*-0.140766);
}

double NNfunction-ss_cLsR::synapse0x3754010() {
   return (neuron0x372f570()*-0.340427);
}

double NNfunction-ss_cLsR::synapse0x3754050() {
   return (neuron0x372fad0()*-0.287237);
}

double NNfunction-ss_cLsR::synapse0x37546d0() {
   return (neuron0x372fcf0()*0.764634);
}

double NNfunction-ss_cLsR::synapse0x3754710() {
   return (neuron0x3730030()*-0.167608);
}

double NNfunction-ss_cLsR::synapse0x3754750() {
   return (neuron0x3730370()*-0.266556);
}

double NNfunction-ss_cLsR::synapse0x3754790() {
   return (neuron0x37306b0()*-0.781555);
}

double NNfunction-ss_cLsR::synapse0x37547d0() {
   return (neuron0x37309f0()*0.498266);
}

double NNfunction-ss_cLsR::synapse0x3754810() {
   return (neuron0x3730d30()*-0.00624161);
}

double NNfunction-ss_cLsR::synapse0x3754b90() {
   return (neuron0x372c170()*0.350824);
}

double NNfunction-ss_cLsR::synapse0x3754bd0() {
   return (neuron0x372c4b0()*0.442228);
}

double NNfunction-ss_cLsR::synapse0x3754c10() {
   return (neuron0x372c7f0()*0.234106);
}

double NNfunction-ss_cLsR::synapse0x3754c50() {
   return (neuron0x372cb30()*-0.112165);
}

double NNfunction-ss_cLsR::synapse0x3754c90() {
   return (neuron0x372ce70()*0.12334);
}

double NNfunction-ss_cLsR::synapse0x3754cd0() {
   return (neuron0x372d1b0()*-0.656516);
}

double NNfunction-ss_cLsR::synapse0x3754d10() {
   return (neuron0x372d4f0()*-0.164509);
}

double NNfunction-ss_cLsR::synapse0x3754d50() {
   return (neuron0x372d830()*0.352951);
}

double NNfunction-ss_cLsR::synapse0x3754d90() {
   return (neuron0x372db70()*-0.391745);
}

double NNfunction-ss_cLsR::synapse0x3754dd0() {
   return (neuron0x372deb0()*0.00291062);
}

double NNfunction-ss_cLsR::synapse0x3754e10() {
   return (neuron0x372e1f0()*-0.285242);
}

double NNfunction-ss_cLsR::synapse0x3754e50() {
   return (neuron0x372e530()*-0.15287);
}

double NNfunction-ss_cLsR::synapse0x3754e90() {
   return (neuron0x372e870()*-0.445088);
}

double NNfunction-ss_cLsR::synapse0x3754ed0() {
   return (neuron0x372ebb0()*0.255224);
}

double NNfunction-ss_cLsR::synapse0x3754f10() {
   return (neuron0x372eef0()*0.321767);
}

double NNfunction-ss_cLsR::synapse0x3754f50() {
   return (neuron0x372f230()*-0.38666);
}

double NNfunction-ss_cLsR::synapse0x37549e0() {
   return (neuron0x372f570()*-0.233568);
}

double NNfunction-ss_cLsR::synapse0x3754a20() {
   return (neuron0x372fad0()*-0.189262);
}

double NNfunction-ss_cLsR::synapse0x37550a0() {
   return (neuron0x372fcf0()*0.298717);
}

double NNfunction-ss_cLsR::synapse0x37550e0() {
   return (neuron0x3730030()*-0.081299);
}

double NNfunction-ss_cLsR::synapse0x3755120() {
   return (neuron0x3730370()*-0.158828);
}

double NNfunction-ss_cLsR::synapse0x3755160() {
   return (neuron0x37306b0()*0.6471);
}

double NNfunction-ss_cLsR::synapse0x37551a0() {
   return (neuron0x37309f0()*0.134242);
}

double NNfunction-ss_cLsR::synapse0x37551e0() {
   return (neuron0x3730d30()*0.106432);
}

double NNfunction-ss_cLsR::synapse0x3755560() {
   return (neuron0x372c170()*-0.391875);
}

double NNfunction-ss_cLsR::synapse0x37555a0() {
   return (neuron0x372c4b0()*-0.304113);
}

double NNfunction-ss_cLsR::synapse0x37555e0() {
   return (neuron0x372c7f0()*-0.192579);
}

double NNfunction-ss_cLsR::synapse0x3755620() {
   return (neuron0x372cb30()*0.212838);
}

double NNfunction-ss_cLsR::synapse0x3755660() {
   return (neuron0x372ce70()*-0.68286);
}

double NNfunction-ss_cLsR::synapse0x37556a0() {
   return (neuron0x372d1b0()*0.551053);
}

double NNfunction-ss_cLsR::synapse0x37556e0() {
   return (neuron0x372d4f0()*-0.134439);
}

double NNfunction-ss_cLsR::synapse0x3755720() {
   return (neuron0x372d830()*-0.550401);
}

double NNfunction-ss_cLsR::synapse0x3755760() {
   return (neuron0x372db70()*-0.275163);
}

double NNfunction-ss_cLsR::synapse0x37557a0() {
   return (neuron0x372deb0()*-0.892871);
}

double NNfunction-ss_cLsR::synapse0x37557e0() {
   return (neuron0x372e1f0()*0.57968);
}

double NNfunction-ss_cLsR::synapse0x3755820() {
   return (neuron0x372e530()*0.136096);
}

double NNfunction-ss_cLsR::synapse0x3755860() {
   return (neuron0x372e870()*0.622293);
}

double NNfunction-ss_cLsR::synapse0x37558a0() {
   return (neuron0x372ebb0()*0.922269);
}

double NNfunction-ss_cLsR::synapse0x37558e0() {
   return (neuron0x372eef0()*-0.139485);
}

double NNfunction-ss_cLsR::synapse0x3755920() {
   return (neuron0x372f230()*0.340134);
}

double NNfunction-ss_cLsR::synapse0x37553b0() {
   return (neuron0x372f570()*-0.155499);
}

double NNfunction-ss_cLsR::synapse0x37553f0() {
   return (neuron0x372fad0()*-1.12502);
}

double NNfunction-ss_cLsR::synapse0x3755a70() {
   return (neuron0x372fcf0()*1.22452);
}

double NNfunction-ss_cLsR::synapse0x3755ab0() {
   return (neuron0x3730030()*-0.422417);
}

double NNfunction-ss_cLsR::synapse0x3755af0() {
   return (neuron0x3730370()*0.583349);
}

double NNfunction-ss_cLsR::synapse0x3755b30() {
   return (neuron0x37306b0()*0.761705);
}

double NNfunction-ss_cLsR::synapse0x3755b70() {
   return (neuron0x37309f0()*-0.0843839);
}

double NNfunction-ss_cLsR::synapse0x3755bb0() {
   return (neuron0x3730d30()*0.332955);
}

double NNfunction-ss_cLsR::synapse0x34f5ad0() {
   return (neuron0x37311a0()*-2.32406);
}

double NNfunction-ss_cLsR::synapse0x34f5b10() {
   return (neuron0x3731af0()*2.41304);
}

double NNfunction-ss_cLsR::synapse0x3733660() {
   return (neuron0x37325d0()*-0.305331);
}

double NNfunction-ss_cLsR::synapse0x37336a0() {
   return (neuron0x3732070()*-0.0950186);
}

double NNfunction-ss_cLsR::synapse0x3734030() {
   return (neuron0x37333b0()*1.24174);
}

double NNfunction-ss_cLsR::synapse0x3734070() {
   return (neuron0x3733d80()*0.381808);
}

double NNfunction-ss_cLsR::synapse0x3734e00() {
   return (neuron0x3734b50()*0.422063);
}

double NNfunction-ss_cLsR::synapse0x3734e40() {
   return (neuron0x3735520()*-0.470167);
}

double NNfunction-ss_cLsR::synapse0x37357d0() {
   return (neuron0x3735ef0()*3.29245);
}

double NNfunction-ss_cLsR::synapse0x3735810() {
   return (neuron0x37369d0()*1.10082);
}

double NNfunction-ss_cLsR::synapse0x37361a0() {
   return (neuron0x37373a0()*0.00273408);
}

double NNfunction-ss_cLsR::synapse0x37361e0() {
   return (neuron0x3734480()*-0.300555);
}

double NNfunction-ss_cLsR::synapse0x3736c80() {
   return (neuron0x3738f50()*0.219183);
}

double NNfunction-ss_cLsR::synapse0x3736cc0() {
   return (neuron0x3739920()*0.34274);
}

double NNfunction-ss_cLsR::synapse0x3737650() {
   return (neuron0x373a2f0()*0.521052);
}

double NNfunction-ss_cLsR::synapse0x3737690() {
   return (neuron0x373acc0()*-0.174532);
}

double NNfunction-ss_cLsR::synapse0x3734730() {
   return (neuron0x373cad0()*-0.00940235);
}

double NNfunction-ss_cLsR::synapse0x3734770() {
   return (neuron0x373cdb0()*-4.32206);
}

double NNfunction-ss_cLsR::synapse0x3739200() {
   return (neuron0x373d780()*-0.221673);
}

double NNfunction-ss_cLsR::synapse0x3739240() {
   return (neuron0x373e150()*-0.533537);
}

double NNfunction-ss_cLsR::synapse0x3739bd0() {
   return (neuron0x373eb20()*-2.21205);
}

double NNfunction-ss_cLsR::synapse0x3739c10() {
   return (neuron0x373f4f0()*-0.170821);
}

double NNfunction-ss_cLsR::synapse0x373a5a0() {
   return (neuron0x3738040()*0.112612);
}

double NNfunction-ss_cLsR::synapse0x373a5e0() {
   return (neuron0x3738a10()*0.263673);
}

double NNfunction-ss_cLsR::synapse0x373af70() {
   return (neuron0x3742280()*-0.700611);
}

double NNfunction-ss_cLsR::synapse0x373afb0() {
   return (neuron0x3742c50()*-0.0997853);
}

double NNfunction-ss_cLsR::synapse0x372f110() {
   return (neuron0x3743620()*0.141036);
}

double NNfunction-ss_cLsR::synapse0x372f150() {
   return (neuron0x3743ff0()*0.0859327);
}

double NNfunction-ss_cLsR::synapse0x373d060() {
   return (neuron0x37449c0()*0.0810988);
}

double NNfunction-ss_cLsR::synapse0x373d0a0() {
   return (neuron0x3745390()*-0.207503);
}

double NNfunction-ss_cLsR::synapse0x373da30() {
   return (neuron0x3745d60()*-0.0100612);
}

double NNfunction-ss_cLsR::synapse0x373da70() {
   return (neuron0x3746730()*-0.393853);
}

double NNfunction-ss_cLsR::synapse0x373e400() {
   return (neuron0x373c7c0()*-0.0778157);
}

double NNfunction-ss_cLsR::synapse0x373e440() {
   return (neuron0x3749310()*-0.437071);
}

double NNfunction-ss_cLsR::synapse0x373edd0() {
   return (neuron0x3749ce0()*0.232116);
}

double NNfunction-ss_cLsR::synapse0x373ee10() {
   return (neuron0x374a6b0()*0.149619);
}

double NNfunction-ss_cLsR::synapse0x373f7a0() {
   return (neuron0x374b080()*0.206096);
}

double NNfunction-ss_cLsR::synapse0x373f7e0() {
   return (neuron0x374ba50()*0.0961678);
}

double NNfunction-ss_cLsR::synapse0x37382f0() {
   return (neuron0x374c420()*0.146479);
}

double NNfunction-ss_cLsR::synapse0x3738330() {
   return (neuron0x374cdf0()*0.176631);
}

double NNfunction-ss_cLsR::synapse0x3741ba0() {
   return (neuron0x374d7c0()*0.287047);
}

double NNfunction-ss_cLsR::synapse0x3741be0() {
   return (neuron0x374e3a0()*0.467105);
}

double NNfunction-ss_cLsR::synapse0x3742530() {
   return (neuron0x374ed70()*-0.244604);
}

double NNfunction-ss_cLsR::synapse0x3742570() {
   return (neuron0x373fbf0()*0.0329778);
}

double NNfunction-ss_cLsR::synapse0x3742f00() {
   return (neuron0x37405c0()*-0.158422);
}

double NNfunction-ss_cLsR::synapse0x3742f40() {
   return (neuron0x3740f90()*0.159997);
}

double NNfunction-ss_cLsR::synapse0x37438d0() {
   return (neuron0x37535d0()*0.282568);
}

double NNfunction-ss_cLsR::synapse0x3743910() {
   return (neuron0x3753e80()*-0.17413);
}

double NNfunction-ss_cLsR::synapse0x37442a0() {
   return (neuron0x3754850()*-0.203132);
}

double NNfunction-ss_cLsR::synapse0x37442e0() {
   return (neuron0x3755220()*0.0247094);
}

double NNfunction-ss_cLsR::synapse0x37469e0() {
   return (neuron0x37311a0()*1.04111);
}

double NNfunction-ss_cLsR::synapse0x3746a20() {
   return (neuron0x3731af0()*0.848937);
}

double NNfunction-ss_cLsR::synapse0x373bfa0() {
   return (neuron0x37325d0()*1.10509);
}

double NNfunction-ss_cLsR::synapse0x373bfe0() {
   return (neuron0x3732070()*0.852042);
}

double NNfunction-ss_cLsR::synapse0x37495c0() {
   return (neuron0x37333b0()*0.274778);
}

double NNfunction-ss_cLsR::synapse0x3749600() {
   return (neuron0x3733d80()*0.236158);
}

double NNfunction-ss_cLsR::synapse0x3749f90() {
   return (neuron0x3734b50()*0.339696);
}

double NNfunction-ss_cLsR::synapse0x3749fd0() {
   return (neuron0x3735520()*0.182619);
}

double NNfunction-ss_cLsR::synapse0x374a960() {
   return (neuron0x3735ef0()*0.0663485);
}

double NNfunction-ss_cLsR::synapse0x374a9a0() {
   return (neuron0x37369d0()*-0.154022);
}

double NNfunction-ss_cLsR::synapse0x374b330() {
   return (neuron0x37373a0()*0.513212);
}

double NNfunction-ss_cLsR::synapse0x374b370() {
   return (neuron0x3734480()*0.136687);
}

double NNfunction-ss_cLsR::synapse0x374bd00() {
   return (neuron0x3738f50()*0.269688);
}

double NNfunction-ss_cLsR::synapse0x374bd40() {
   return (neuron0x3739920()*0.0281135);
}

double NNfunction-ss_cLsR::synapse0x374c6d0() {
   return (neuron0x373a2f0()*1.47263);
}

double NNfunction-ss_cLsR::synapse0x374c710() {
   return (neuron0x373acc0()*0.184616);
}

double NNfunction-ss_cLsR::synapse0x374d0a0() {
   return (neuron0x373cad0()*-0.097653);
}

double NNfunction-ss_cLsR::synapse0x374d0e0() {
   return (neuron0x373cdb0()*1.2695);
}

double NNfunction-ss_cLsR::synapse0x374da70() {
   return (neuron0x373d780()*0.256119);
}

double NNfunction-ss_cLsR::synapse0x374dab0() {
   return (neuron0x373e150()*0.213145);
}

double NNfunction-ss_cLsR::synapse0x374e650() {
   return (neuron0x373eb20()*0.63964);
}

double NNfunction-ss_cLsR::synapse0x374e690() {
   return (neuron0x373f4f0()*0.180783);
}

double NNfunction-ss_cLsR::synapse0x374f020() {
   return (neuron0x3738040()*0.851829);
}

double NNfunction-ss_cLsR::synapse0x374f060() {
   return (neuron0x3738a10()*0.737212);
}

double NNfunction-ss_cLsR::synapse0x373fea0() {
   return (neuron0x3742280()*0.350613);
}

double NNfunction-ss_cLsR::synapse0x373fee0() {
   return (neuron0x3742c50()*-0.114752);
}

double NNfunction-ss_cLsR::synapse0x3740870() {
   return (neuron0x3743620()*0.611345);
}

double NNfunction-ss_cLsR::synapse0x37408b0() {
   return (neuron0x3743ff0()*0.825018);
}

double NNfunction-ss_cLsR::synapse0x3741240() {
   return (neuron0x37449c0()*0.881948);
}

double NNfunction-ss_cLsR::synapse0x3741280() {
   return (neuron0x3745390()*0.824034);
}

double NNfunction-ss_cLsR::synapse0x3753760() {
   return (neuron0x3745d60()*-0.293796);
}

double NNfunction-ss_cLsR::synapse0x37537a0() {
   return (neuron0x3746730()*0.858737);
}

double NNfunction-ss_cLsR::synapse0x3754130() {
   return (neuron0x373c7c0()*0.44486);
}

double NNfunction-ss_cLsR::synapse0x3754170() {
   return (neuron0x3749310()*0.392462);
}

double NNfunction-ss_cLsR::synapse0x3754b00() {
   return (neuron0x3749ce0()*-0.143179);
}

double NNfunction-ss_cLsR::synapse0x3754b40() {
   return (neuron0x374a6b0()*-0.226791);
}

double NNfunction-ss_cLsR::synapse0x37554d0() {
   return (neuron0x374b080()*0.636098);
}

double NNfunction-ss_cLsR::synapse0x3755510() {
   return (neuron0x374ba50()*1.1867);
}

double NNfunction-ss_cLsR::synapse0x37313c0() {
   return (neuron0x374c420()*-0.325174);
}

double NNfunction-ss_cLsR::synapse0x3731400() {
   return (neuron0x374cdf0()*0.571965);
}

double NNfunction-ss_cLsR::synapse0x3744c70() {
   return (neuron0x374d7c0()*0.408242);
}

double NNfunction-ss_cLsR::synapse0x3744cb0() {
   return (neuron0x374e3a0()*-0.111567);
}

double NNfunction-ss_cLsR::synapse0x3755bf0() {
   return (neuron0x374ed70()*0.217359);
}

double NNfunction-ss_cLsR::synapse0x3755c30() {
   return (neuron0x373fbf0()*0.694866);
}

double NNfunction-ss_cLsR::synapse0x3755c70() {
   return (neuron0x37405c0()*0.21968);
}

double NNfunction-ss_cLsR::synapse0x3755cb0() {
   return (neuron0x3740f90()*0.728243);
}

double NNfunction-ss_cLsR::synapse0x375cb60() {
   return (neuron0x37535d0()*0.10728);
}

double NNfunction-ss_cLsR::synapse0x375cba0() {
   return (neuron0x3753e80()*0.319221);
}

double NNfunction-ss_cLsR::synapse0x375cbe0() {
   return (neuron0x3754850()*0.663235);
}

double NNfunction-ss_cLsR::synapse0x375cc20() {
   return (neuron0x3755220()*1.00786);
}

double NNfunction-ss_cLsR::synapse0x375cfa0() {
   return (neuron0x37311a0()*1.83208);
}

double NNfunction-ss_cLsR::synapse0x375cfe0() {
   return (neuron0x3731af0()*6.60757);
}

double NNfunction-ss_cLsR::synapse0x375d020() {
   return (neuron0x37325d0()*-4.07662);
}

double NNfunction-ss_cLsR::synapse0x375d060() {
   return (neuron0x3732070()*0.752205);
}

double NNfunction-ss_cLsR::synapse0x375d0a0() {
   return (neuron0x37333b0()*5.95271);
}

double NNfunction-ss_cLsR::synapse0x375d0e0() {
   return (neuron0x3733d80()*-0.47079);
}

double NNfunction-ss_cLsR::synapse0x375d120() {
   return (neuron0x3734b50()*0.0553652);
}

double NNfunction-ss_cLsR::synapse0x375d160() {
   return (neuron0x3735520()*-0.81306);
}

double NNfunction-ss_cLsR::synapse0x375d1a0() {
   return (neuron0x3735ef0()*-4.91745);
}

double NNfunction-ss_cLsR::synapse0x375d1e0() {
   return (neuron0x37369d0()*-0.419644);
}

double NNfunction-ss_cLsR::synapse0x375d220() {
   return (neuron0x37373a0()*0.648282);
}

double NNfunction-ss_cLsR::synapse0x375d260() {
   return (neuron0x3734480()*-0.45576);
}

double NNfunction-ss_cLsR::synapse0x375d2a0() {
   return (neuron0x3738f50()*-0.811843);
}

double NNfunction-ss_cLsR::synapse0x375d2e0() {
   return (neuron0x3739920()*-0.0601461);
}

double NNfunction-ss_cLsR::synapse0x375d320() {
   return (neuron0x373a2f0()*2.27952);
}

double NNfunction-ss_cLsR::synapse0x375d360() {
   return (neuron0x373acc0()*-1.60706);
}

double NNfunction-ss_cLsR::synapse0x375cdf0() {
   return (neuron0x373cad0()*-0.974083);
}

double NNfunction-ss_cLsR::synapse0x375ce30() {
   return (neuron0x373cdb0()*1.90434);
}

double NNfunction-ss_cLsR::synapse0x375d4b0() {
   return (neuron0x373d780()*0.33406);
}

double NNfunction-ss_cLsR::synapse0x375d4f0() {
   return (neuron0x373e150()*-3.49978);
}

double NNfunction-ss_cLsR::synapse0x375d530() {
   return (neuron0x373eb20()*0.796996);
}

double NNfunction-ss_cLsR::synapse0x375d570() {
   return (neuron0x373f4f0()*-0.454515);
}

double NNfunction-ss_cLsR::synapse0x375d5b0() {
   return (neuron0x3738040()*1.51906);
}

double NNfunction-ss_cLsR::synapse0x375d5f0() {
   return (neuron0x3738a10()*0.445514);
}

double NNfunction-ss_cLsR::synapse0x375d630() {
   return (neuron0x3742280()*-2.66657);
}

double NNfunction-ss_cLsR::synapse0x375d670() {
   return (neuron0x3742c50()*0.945781);
}

double NNfunction-ss_cLsR::synapse0x375d6b0() {
   return (neuron0x3743620()*1.43255);
}

double NNfunction-ss_cLsR::synapse0x375d6f0() {
   return (neuron0x3743ff0()*0.657002);
}

double NNfunction-ss_cLsR::synapse0x375d730() {
   return (neuron0x37449c0()*1.10964);
}

double NNfunction-ss_cLsR::synapse0x375d770() {
   return (neuron0x3745390()*0.254875);
}

double NNfunction-ss_cLsR::synapse0x375d7b0() {
   return (neuron0x3745d60()*-1.13704);
}

double NNfunction-ss_cLsR::synapse0x375d7f0() {
   return (neuron0x3746730()*0.765577);
}

double NNfunction-ss_cLsR::synapse0x375d3a0() {
   return (neuron0x373c7c0()*-1.25276);
}

double NNfunction-ss_cLsR::synapse0x375d3e0() {
   return (neuron0x3749310()*-2.0628);
}

double NNfunction-ss_cLsR::synapse0x375d420() {
   return (neuron0x3749ce0()*-1.30349);
}

double NNfunction-ss_cLsR::synapse0x375d460() {
   return (neuron0x374a6b0()*-1.32043);
}

double NNfunction-ss_cLsR::synapse0x375da40() {
   return (neuron0x374b080()*1.10372);
}

double NNfunction-ss_cLsR::synapse0x375da80() {
   return (neuron0x374ba50()*-2.3559);
}

double NNfunction-ss_cLsR::synapse0x375dac0() {
   return (neuron0x374c420()*-1.24067);
}

double NNfunction-ss_cLsR::synapse0x375db00() {
   return (neuron0x374cdf0()*0.836177);
}

double NNfunction-ss_cLsR::synapse0x375db40() {
   return (neuron0x374d7c0()*0.598844);
}

double NNfunction-ss_cLsR::synapse0x375db80() {
   return (neuron0x374e3a0()*-0.23724);
}

double NNfunction-ss_cLsR::synapse0x375dbc0() {
   return (neuron0x374ed70()*0.560313);
}

double NNfunction-ss_cLsR::synapse0x375dc00() {
   return (neuron0x373fbf0()*1.14899);
}

double NNfunction-ss_cLsR::synapse0x375dc40() {
   return (neuron0x37405c0()*0.495974);
}

double NNfunction-ss_cLsR::synapse0x375dc80() {
   return (neuron0x3740f90()*2.0659);
}

double NNfunction-ss_cLsR::synapse0x375dcc0() {
   return (neuron0x37535d0()*-1.29559);
}

double NNfunction-ss_cLsR::synapse0x375dd00() {
   return (neuron0x3753e80()*0.623452);
}

double NNfunction-ss_cLsR::synapse0x375dd40() {
   return (neuron0x3754850()*-1.12718);
}

double NNfunction-ss_cLsR::synapse0x375dd80() {
   return (neuron0x3755220()*0.742301);
}

double NNfunction-ss_cLsR::synapse0x375e100() {
   return (neuron0x37311a0()*-0.173313);
}

double NNfunction-ss_cLsR::synapse0x375e140() {
   return (neuron0x3731af0()*-0.143283);
}

double NNfunction-ss_cLsR::synapse0x375e180() {
   return (neuron0x37325d0()*-0.172756);
}

double NNfunction-ss_cLsR::synapse0x375e1c0() {
   return (neuron0x3732070()*0.494407);
}

double NNfunction-ss_cLsR::synapse0x375e200() {
   return (neuron0x37333b0()*0.0706324);
}

double NNfunction-ss_cLsR::synapse0x375e240() {
   return (neuron0x3733d80()*-0.344844);
}

double NNfunction-ss_cLsR::synapse0x375e280() {
   return (neuron0x3734b50()*-0.626547);
}

double NNfunction-ss_cLsR::synapse0x375e2c0() {
   return (neuron0x3735520()*-0.55463);
}

double NNfunction-ss_cLsR::synapse0x375e300() {
   return (neuron0x3735ef0()*1.6697);
}

double NNfunction-ss_cLsR::synapse0x375e340() {
   return (neuron0x37369d0()*0.00188002);
}

double NNfunction-ss_cLsR::synapse0x375e380() {
   return (neuron0x37373a0()*0.749512);
}

double NNfunction-ss_cLsR::synapse0x375e3c0() {
   return (neuron0x3734480()*0.82527);
}

double NNfunction-ss_cLsR::synapse0x375e400() {
   return (neuron0x3738f50()*0.274352);
}

double NNfunction-ss_cLsR::synapse0x375e440() {
   return (neuron0x3739920()*0.0154173);
}

double NNfunction-ss_cLsR::synapse0x375e480() {
   return (neuron0x373a2f0()*0.344271);
}

double NNfunction-ss_cLsR::synapse0x375e4c0() {
   return (neuron0x373acc0()*-0.80494);
}

double NNfunction-ss_cLsR::synapse0x375df50() {
   return (neuron0x373cad0()*-0.302801);
}

double NNfunction-ss_cLsR::synapse0x375df90() {
   return (neuron0x373cdb0()*-2.0619);
}

double NNfunction-ss_cLsR::synapse0x375e610() {
   return (neuron0x373d780()*0.275803);
}

double NNfunction-ss_cLsR::synapse0x375e650() {
   return (neuron0x373e150()*-0.188229);
}

double NNfunction-ss_cLsR::synapse0x375e690() {
   return (neuron0x373eb20()*0.370751);
}

double NNfunction-ss_cLsR::synapse0x375e6d0() {
   return (neuron0x373f4f0()*0.683186);
}

double NNfunction-ss_cLsR::synapse0x375e710() {
   return (neuron0x3738040()*-0.445906);
}

double NNfunction-ss_cLsR::synapse0x375e750() {
   return (neuron0x3738a10()*-0.452689);
}

double NNfunction-ss_cLsR::synapse0x375e790() {
   return (neuron0x3742280()*0.267473);
}

double NNfunction-ss_cLsR::synapse0x375e7d0() {
   return (neuron0x3742c50()*-0.29989);
}

double NNfunction-ss_cLsR::synapse0x375e810() {
   return (neuron0x3743620()*-0.158321);
}

double NNfunction-ss_cLsR::synapse0x375e850() {
   return (neuron0x3743ff0()*-0.0798789);
}

double NNfunction-ss_cLsR::synapse0x375e890() {
   return (neuron0x37449c0()*-0.34198);
}

double NNfunction-ss_cLsR::synapse0x375e8d0() {
   return (neuron0x3745390()*-0.533252);
}

double NNfunction-ss_cLsR::synapse0x375e910() {
   return (neuron0x3745d60()*-0.422403);
}

double NNfunction-ss_cLsR::synapse0x375e950() {
   return (neuron0x3746730()*0.237078);
}

double NNfunction-ss_cLsR::synapse0x375e500() {
   return (neuron0x373c7c0()*-0.53569);
}

double NNfunction-ss_cLsR::synapse0x375e540() {
   return (neuron0x3749310()*-0.295044);
}

double NNfunction-ss_cLsR::synapse0x375e580() {
   return (neuron0x3749ce0()*-0.926155);
}

double NNfunction-ss_cLsR::synapse0x375e5c0() {
   return (neuron0x374a6b0()*-0.601251);
}

double NNfunction-ss_cLsR::synapse0x375eba0() {
   return (neuron0x374b080()*0.333571);
}

double NNfunction-ss_cLsR::synapse0x375ebe0() {
   return (neuron0x374ba50()*-0.446233);
}

double NNfunction-ss_cLsR::synapse0x375ec20() {
   return (neuron0x374c420()*-0.170776);
}

double NNfunction-ss_cLsR::synapse0x375ec60() {
   return (neuron0x374cdf0()*0.237092);
}

double NNfunction-ss_cLsR::synapse0x375eca0() {
   return (neuron0x374d7c0()*-1.09451);
}

double NNfunction-ss_cLsR::synapse0x375ece0() {
   return (neuron0x374e3a0()*-0.575018);
}

double NNfunction-ss_cLsR::synapse0x375ed20() {
   return (neuron0x374ed70()*0.550353);
}

double NNfunction-ss_cLsR::synapse0x375ed60() {
   return (neuron0x373fbf0()*-0.507941);
}

double NNfunction-ss_cLsR::synapse0x375eda0() {
   return (neuron0x37405c0()*-1.48271);
}

double NNfunction-ss_cLsR::synapse0x375ede0() {
   return (neuron0x3740f90()*0.417491);
}

double NNfunction-ss_cLsR::synapse0x375ee20() {
   return (neuron0x37535d0()*-0.371907);
}

double NNfunction-ss_cLsR::synapse0x375ee60() {
   return (neuron0x3753e80()*0.433659);
}

double NNfunction-ss_cLsR::synapse0x375eea0() {
   return (neuron0x3754850()*0.285231);
}

double NNfunction-ss_cLsR::synapse0x375eee0() {
   return (neuron0x3755220()*0.290464);
}

double NNfunction-ss_cLsR::synapse0x375f260() {
   return (neuron0x37311a0()*0.75449);
}

double NNfunction-ss_cLsR::synapse0x375f2a0() {
   return (neuron0x3731af0()*2.21511);
}

double NNfunction-ss_cLsR::synapse0x375f2e0() {
   return (neuron0x37325d0()*-2.01341);
}

double NNfunction-ss_cLsR::synapse0x375f320() {
   return (neuron0x3732070()*-0.135001);
}

double NNfunction-ss_cLsR::synapse0x375f360() {
   return (neuron0x37333b0()*1.03259);
}

double NNfunction-ss_cLsR::synapse0x375f3a0() {
   return (neuron0x3733d80()*0.413028);
}

double NNfunction-ss_cLsR::synapse0x375f3e0() {
   return (neuron0x3734b50()*0.425504);
}

double NNfunction-ss_cLsR::synapse0x375f420() {
   return (neuron0x3735520()*-0.431881);
}

double NNfunction-ss_cLsR::synapse0x375f460() {
   return (neuron0x3735ef0()*-2.13213);
}

double NNfunction-ss_cLsR::synapse0x375f4a0() {
   return (neuron0x37369d0()*-1.574);
}

double NNfunction-ss_cLsR::synapse0x375f4e0() {
   return (neuron0x37373a0()*-0.0359455);
}

double NNfunction-ss_cLsR::synapse0x375f520() {
   return (neuron0x3734480()*-0.353019);
}

double NNfunction-ss_cLsR::synapse0x375f560() {
   return (neuron0x3738f50()*0.230001);
}

double NNfunction-ss_cLsR::synapse0x375f5a0() {
   return (neuron0x3739920()*0.335149);
}

double NNfunction-ss_cLsR::synapse0x375f5e0() {
   return (neuron0x373a2f0()*0.9809);
}

double NNfunction-ss_cLsR::synapse0x375f620() {
   return (neuron0x373acc0()*-0.30526);
}

double NNfunction-ss_cLsR::synapse0x375f0b0() {
   return (neuron0x373cad0()*0.0337477);
}

double NNfunction-ss_cLsR::synapse0x375f0f0() {
   return (neuron0x373cdb0()*0.575267);
}

double NNfunction-ss_cLsR::synapse0x375f770() {
   return (neuron0x373d780()*-0.229393);
}

double NNfunction-ss_cLsR::synapse0x375f7b0() {
   return (neuron0x373e150()*-0.654217);
}

double NNfunction-ss_cLsR::synapse0x375f7f0() {
   return (neuron0x373eb20()*-0.117747);
}

double NNfunction-ss_cLsR::synapse0x375f830() {
   return (neuron0x373f4f0()*-0.15797);
}

double NNfunction-ss_cLsR::synapse0x375f870() {
   return (neuron0x3738040()*0.407092);
}

double NNfunction-ss_cLsR::synapse0x375f8b0() {
   return (neuron0x3738a10()*0.248371);
}

double NNfunction-ss_cLsR::synapse0x375f8f0() {
   return (neuron0x3742280()*-1.6692);
}

double NNfunction-ss_cLsR::synapse0x375f930() {
   return (neuron0x3742c50()*-0.143654);
}

double NNfunction-ss_cLsR::synapse0x375f970() {
   return (neuron0x3743620()*0.0987389);
}

double NNfunction-ss_cLsR::synapse0x375f9b0() {
   return (neuron0x3743ff0()*0.0577636);
}

double NNfunction-ss_cLsR::synapse0x375f9f0() {
   return (neuron0x37449c0()*0.756598);
}

double NNfunction-ss_cLsR::synapse0x375fa30() {
   return (neuron0x3745390()*-0.205338);
}

double NNfunction-ss_cLsR::synapse0x375fa70() {
   return (neuron0x3745d60()*0.043653);
}

double NNfunction-ss_cLsR::synapse0x375fab0() {
   return (neuron0x3746730()*-0.456414);
}

double NNfunction-ss_cLsR::synapse0x375f660() {
   return (neuron0x373c7c0()*0.0739122);
}

double NNfunction-ss_cLsR::synapse0x375f6a0() {
   return (neuron0x3749310()*-0.349328);
}

double NNfunction-ss_cLsR::synapse0x375f6e0() {
   return (neuron0x3749ce0()*0.337299);
}

double NNfunction-ss_cLsR::synapse0x375f720() {
   return (neuron0x374a6b0()*-0.254937);
}

double NNfunction-ss_cLsR::synapse0x375fd00() {
   return (neuron0x374b080()*0.154926);
}

double NNfunction-ss_cLsR::synapse0x375fd40() {
   return (neuron0x374ba50()*-0.461523);
}

double NNfunction-ss_cLsR::synapse0x375fd80() {
   return (neuron0x374c420()*0.207245);
}

double NNfunction-ss_cLsR::synapse0x375fdc0() {
   return (neuron0x374cdf0()*0.136776);
}

double NNfunction-ss_cLsR::synapse0x375fe00() {
   return (neuron0x374d7c0()*0.264729);
}

double NNfunction-ss_cLsR::synapse0x375fe40() {
   return (neuron0x374e3a0()*-1.46347);
}

double NNfunction-ss_cLsR::synapse0x375fe80() {
   return (neuron0x374ed70()*-0.292896);
}

double NNfunction-ss_cLsR::synapse0x375fec0() {
   return (neuron0x373fbf0()*-0.0142687);
}

double NNfunction-ss_cLsR::synapse0x375ff00() {
   return (neuron0x37405c0()*-0.172507);
}

double NNfunction-ss_cLsR::synapse0x375ff40() {
   return (neuron0x3740f90()*0.110889);
}

double NNfunction-ss_cLsR::synapse0x375ff80() {
   return (neuron0x37535d0()*0.407583);
}

double NNfunction-ss_cLsR::synapse0x375ffc0() {
   return (neuron0x3753e80()*-0.207984);
}

double NNfunction-ss_cLsR::synapse0x3760000() {
   return (neuron0x3754850()*-0.141519);
}

double NNfunction-ss_cLsR::synapse0x3760040() {
   return (neuron0x3755220()*-0.0172002);
}

double NNfunction-ss_cLsR::synapse0x37602a0() {
   return (neuron0x375c420()*5.15881);
}

double NNfunction-ss_cLsR::synapse0x37602e0() {
   return (neuron0x375c7c0()*5.01251);
}

double NNfunction-ss_cLsR::synapse0x3760320() {
   return (neuron0x375cc60()*-7.92652);
}

double NNfunction-ss_cLsR::synapse0x3760360() {
   return (neuron0x375ddc0()*-1.89179);
}

double NNfunction-ss_cLsR::synapse0x37603a0() {
   return (neuron0x375ef20()*-6.14497);
}

