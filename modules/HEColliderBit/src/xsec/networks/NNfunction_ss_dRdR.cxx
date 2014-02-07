#include "NNfunction_ss_dRdR.h"
#include <cmath>

double NNfunction_ss_dRdR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5773)/15.3418;
   input1 = (in1 - 1.08069)/1161.44;
   input2 = (in2 - 662.881)/627.967;
   input3 = (in3 - -58.8962)/837.488;
   input4 = (in4 - 1066.43)/957.807;
   input5 = (in5 - 896.213)/943.79;
   input6 = (in6 - 908.854)/947.306;
   input7 = (in7 - 931.03)/936.337;
   input8 = (in8 - 928.546)/979.523;
   input9 = (in9 - 906.41)/957.585;
   input10 = (in10 - 993.873)/958.218;
   input11 = (in11 - 735.935)/881.629;
   input12 = (in12 - 737.943)/886.604;
   input13 = (in13 - 508.572)/530.524;
   input14 = (in14 - 721.899)/820.74;
   input15 = (in15 - 723.503)/821.058;
   input16 = (in16 - 539.428)/569.462;
   input17 = (in17 - 356.743)/334.596;
   input18 = (in18 - 759.354)/906.69;
   input19 = (in19 - 809.313)/885.68;
   input20 = (in20 - -5.2383)/492.754;
   input21 = (in21 - -0.36578)/1159.04;
   input22 = (in22 - -1.23011)/1209.31;
   input23 = (in23 - -199.68)/608.137;
   switch(index) {
     case 0:
         return neuron0x164a4b0();
     default:
         return 0.;
   }
}

double NNfunction_ss_dRdR::Value(int index, double* input) {
   input0 = (input[0] - 23.5773)/15.3418;
   input1 = (input[1] - 1.08069)/1161.44;
   input2 = (input[2] - 662.881)/627.967;
   input3 = (input[3] - -58.8962)/837.488;
   input4 = (input[4] - 1066.43)/957.807;
   input5 = (input[5] - 896.213)/943.79;
   input6 = (input[6] - 908.854)/947.306;
   input7 = (input[7] - 931.03)/936.337;
   input8 = (input[8] - 928.546)/979.523;
   input9 = (input[9] - 906.41)/957.585;
   input10 = (input[10] - 993.873)/958.218;
   input11 = (input[11] - 735.935)/881.629;
   input12 = (input[12] - 737.943)/886.604;
   input13 = (input[13] - 508.572)/530.524;
   input14 = (input[14] - 721.899)/820.74;
   input15 = (input[15] - 723.503)/821.058;
   input16 = (input[16] - 539.428)/569.462;
   input17 = (input[17] - 356.743)/334.596;
   input18 = (input[18] - 759.354)/906.69;
   input19 = (input[19] - 809.313)/885.68;
   input20 = (input[20] - -5.2383)/492.754;
   input21 = (input[21] - -0.36578)/1159.04;
   input22 = (input[22] - -1.23011)/1209.31;
   input23 = (input[23] - -199.68)/608.137;
   switch(index) {
     case 0:
         return neuron0x164a4b0();
     default:
         return 0.;
   }
}

double NNfunction_ss_dRdR::neuron0x1616570() {
   return input0;
}

double NNfunction_ss_dRdR::neuron0x16168b0() {
   return input1;
}

double NNfunction_ss_dRdR::neuron0x1616bf0() {
   return input2;
}

double NNfunction_ss_dRdR::neuron0x1616f30() {
   return input3;
}

double NNfunction_ss_dRdR::neuron0x1617270() {
   return input4;
}

double NNfunction_ss_dRdR::neuron0x16175b0() {
   return input5;
}

double NNfunction_ss_dRdR::neuron0x16178f0() {
   return input6;
}

double NNfunction_ss_dRdR::neuron0x1617c30() {
   return input7;
}

double NNfunction_ss_dRdR::neuron0x1617f70() {
   return input8;
}

double NNfunction_ss_dRdR::neuron0x16182b0() {
   return input9;
}

double NNfunction_ss_dRdR::neuron0x16185f0() {
   return input10;
}

double NNfunction_ss_dRdR::neuron0x1618930() {
   return input11;
}

double NNfunction_ss_dRdR::neuron0x1618c70() {
   return input12;
}

double NNfunction_ss_dRdR::neuron0x1618fb0() {
   return input13;
}

double NNfunction_ss_dRdR::neuron0x16192f0() {
   return input14;
}

double NNfunction_ss_dRdR::neuron0x1619630() {
   return input15;
}

double NNfunction_ss_dRdR::neuron0x1619970() {
   return input16;
}

double NNfunction_ss_dRdR::neuron0x1619ed0() {
   return input17;
}

double NNfunction_ss_dRdR::neuron0x161a0f0() {
   return input18;
}

double NNfunction_ss_dRdR::neuron0x161a430() {
   return input19;
}

double NNfunction_ss_dRdR::neuron0x161a770() {
   return input20;
}

double NNfunction_ss_dRdR::neuron0x161aab0() {
   return input21;
}

double NNfunction_ss_dRdR::neuron0x161adf0() {
   return input22;
}

double NNfunction_ss_dRdR::neuron0x161b130() {
   return input23;
}

double NNfunction_ss_dRdR::input0x161b5d0() {
   double input = -0.265531;
   input += synapse0x13d63e0();
   input += synapse0x1616430();
   input += synapse0x1616470();
   input += synapse0x161b880();
   input += synapse0x161b8c0();
   input += synapse0x161b900();
   input += synapse0x161b940();
   input += synapse0x161b980();
   input += synapse0x161b9c0();
   input += synapse0x161ba00();
   input += synapse0x161ba40();
   input += synapse0x161ba80();
   input += synapse0x161bac0();
   input += synapse0x161bb00();
   input += synapse0x161bb40();
   input += synapse0x161bb80();
   input += synapse0x16163a0();
   input += synapse0x16163e0();
   input += synapse0x13c7c80();
   input += synapse0x13c7cc0();
   input += synapse0x161bde0();
   input += synapse0x161be20();
   input += synapse0x161be60();
   input += synapse0x161bea0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x161b5d0() {
   double input = input0x161b5d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x161bee0() {
   double input = -1.04142;
   input += synapse0x161c220();
   input += synapse0x161c260();
   input += synapse0x161c2a0();
   input += synapse0x161c2e0();
   input += synapse0x161c320();
   input += synapse0x161c360();
   input += synapse0x161c3a0();
   input += synapse0x161c3e0();
   input += synapse0x161c420();
   input += synapse0x161bcd0();
   input += synapse0x161bd10();
   input += synapse0x161bd50();
   input += synapse0x161bd90();
   input += synapse0x161c670();
   input += synapse0x161c6b0();
   input += synapse0x161c6f0();
   input += synapse0x161c070();
   input += synapse0x161c0b0();
   input += synapse0x161c840();
   input += synapse0x161c880();
   input += synapse0x161c8c0();
   input += synapse0x161c900();
   input += synapse0x161c940();
   input += synapse0x161c980();
   return input;
}

double NNfunction_ss_dRdR::neuron0x161bee0() {
   double input = input0x161bee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x161c9c0() {
   double input = 0.591664;
   input += synapse0x161cd00();
   input += synapse0x161cd40();
   input += synapse0x161cd80();
   input += synapse0x161cdc0();
   input += synapse0x161ce00();
   input += synapse0x161ce40();
   input += synapse0x161ce80();
   input += synapse0x161cec0();
   input += synapse0x161cf00();
   input += synapse0x161cf40();
   input += synapse0x161cf80();
   input += synapse0x161cfc0();
   input += synapse0x161d000();
   input += synapse0x161d040();
   input += synapse0x161d080();
   input += synapse0x161d0c0();
   input += synapse0x161cb50();
   input += synapse0x161cb90();
   input += synapse0x13d5ad0();
   input += synapse0x13d5b10();
   input += synapse0x1605600();
   input += synapse0x1605640();
   input += synapse0x1605680();
   input += synapse0x16164b0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x161c9c0() {
   double input = input0x161c9c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x13d6250() {
   double input = 0.388953;
   input += synapse0x161c610();
   input += synapse0x16164f0();
   input += synapse0x1616530();
   input += synapse0x161d210();
   input += synapse0x161d250();
   input += synapse0x161d290();
   input += synapse0x161d2d0();
   input += synapse0x161d310();
   input += synapse0x161d350();
   input += synapse0x161d390();
   input += synapse0x161d3d0();
   input += synapse0x161d410();
   input += synapse0x161d450();
   input += synapse0x161d490();
   input += synapse0x161d4d0();
   input += synapse0x161d510();
   input += synapse0x161c460();
   input += synapse0x161c4a0();
   input += synapse0x161d660();
   input += synapse0x161d6a0();
   input += synapse0x161d6e0();
   input += synapse0x161d720();
   input += synapse0x161d760();
   input += synapse0x161d7a0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x13d6250() {
   double input = input0x13d6250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x161d7e0() {
   double input = 0.917017;
   input += synapse0x161db20();
   input += synapse0x161db60();
   input += synapse0x161dba0();
   input += synapse0x161dbe0();
   input += synapse0x161dc20();
   input += synapse0x161dc60();
   input += synapse0x161dca0();
   input += synapse0x161dce0();
   input += synapse0x161dd20();
   input += synapse0x161dd60();
   input += synapse0x161dda0();
   input += synapse0x161dde0();
   input += synapse0x161de20();
   input += synapse0x161de60();
   input += synapse0x161dea0();
   input += synapse0x161dee0();
   input += synapse0x161d970();
   input += synapse0x161d9b0();
   input += synapse0x161e030();
   input += synapse0x161e070();
   input += synapse0x161e0b0();
   input += synapse0x161e0f0();
   input += synapse0x161e130();
   input += synapse0x161e170();
   return input;
}

double NNfunction_ss_dRdR::neuron0x161d7e0() {
   double input = input0x161d7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x161e1b0() {
   double input = 1.13608;
   input += synapse0x161e4f0();
   input += synapse0x161e530();
   input += synapse0x161e570();
   input += synapse0x161e5b0();
   input += synapse0x161e5f0();
   input += synapse0x161e630();
   input += synapse0x161e670();
   input += synapse0x161e6b0();
   input += synapse0x161e6f0();
   input += synapse0x13d5e40();
   input += synapse0x13d5e80();
   input += synapse0x13d5ec0();
   input += synapse0x13d5f00();
   input += synapse0x13d5f40();
   input += synapse0x13d5f80();
   input += synapse0x13d5fc0();
   input += synapse0x161e340();
   input += synapse0x161e380();
   input += synapse0x13d6110();
   input += synapse0x13d6150();
   input += synapse0x13d6190();
   input += synapse0x13d61d0();
   input += synapse0x13d6210();
   input += synapse0x161ef40();
   return input;
}

double NNfunction_ss_dRdR::neuron0x161e1b0() {
   double input = input0x161e1b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x161ef80() {
   double input = 0.175496;
   input += synapse0x161f2c0();
   input += synapse0x161f300();
   input += synapse0x161f340();
   input += synapse0x161f380();
   input += synapse0x161f3c0();
   input += synapse0x161f400();
   input += synapse0x161f440();
   input += synapse0x161f480();
   input += synapse0x161f4c0();
   input += synapse0x161f500();
   input += synapse0x161f540();
   input += synapse0x161f580();
   input += synapse0x161f5c0();
   input += synapse0x161f600();
   input += synapse0x161f640();
   input += synapse0x161f680();
   input += synapse0x161f110();
   input += synapse0x161f150();
   input += synapse0x161f7d0();
   input += synapse0x161f810();
   input += synapse0x161f850();
   input += synapse0x161f890();
   input += synapse0x161f8d0();
   input += synapse0x161f910();
   return input;
}

double NNfunction_ss_dRdR::neuron0x161ef80() {
   double input = input0x161ef80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x161f950() {
   double input = -2.30026;
   input += synapse0x161fc90();
   input += synapse0x161fcd0();
   input += synapse0x161fd10();
   input += synapse0x161fd50();
   input += synapse0x161fd90();
   input += synapse0x161fdd0();
   input += synapse0x161fe10();
   input += synapse0x161fe50();
   input += synapse0x161fe90();
   input += synapse0x161fed0();
   input += synapse0x161ff10();
   input += synapse0x161ff50();
   input += synapse0x161ff90();
   input += synapse0x161ffd0();
   input += synapse0x1620010();
   input += synapse0x1620050();
   input += synapse0x161fae0();
   input += synapse0x161fb20();
   input += synapse0x16201a0();
   input += synapse0x16201e0();
   input += synapse0x1620220();
   input += synapse0x1620260();
   input += synapse0x16202a0();
   input += synapse0x16202e0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x161f950() {
   double input = input0x161f950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x1620320() {
   double input = -0.96466;
   input += synapse0x1619dc0();
   input += synapse0x1619e00();
   input += synapse0x1619e40();
   input += synapse0x1619e80();
   input += synapse0x1620870();
   input += synapse0x16208b0();
   input += synapse0x16208f0();
   input += synapse0x1620930();
   input += synapse0x1620970();
   input += synapse0x16209b0();
   input += synapse0x16209f0();
   input += synapse0x1620a30();
   input += synapse0x1620a70();
   input += synapse0x1620ab0();
   input += synapse0x1620af0();
   input += synapse0x1620b30();
   input += synapse0x16204b0();
   input += synapse0x16204f0();
   input += synapse0x1620c80();
   input += synapse0x1620cc0();
   input += synapse0x1620d00();
   input += synapse0x1620d40();
   input += synapse0x1620d80();
   input += synapse0x1620dc0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x1620320() {
   double input = input0x1620320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x1620e00() {
   double input = 1.04122;
   input += synapse0x1621140();
   input += synapse0x1621180();
   input += synapse0x16211c0();
   input += synapse0x1621200();
   input += synapse0x1621240();
   input += synapse0x1621280();
   input += synapse0x16212c0();
   input += synapse0x1621300();
   input += synapse0x1621340();
   input += synapse0x1621380();
   input += synapse0x16213c0();
   input += synapse0x1621400();
   input += synapse0x1621440();
   input += synapse0x1621480();
   input += synapse0x16214c0();
   input += synapse0x1621500();
   input += synapse0x1620f90();
   input += synapse0x1620fd0();
   input += synapse0x1621650();
   input += synapse0x1621690();
   input += synapse0x16216d0();
   input += synapse0x1621710();
   input += synapse0x1621750();
   input += synapse0x1621790();
   return input;
}

double NNfunction_ss_dRdR::neuron0x1620e00() {
   double input = input0x1620e00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x16217d0() {
   double input = -0.71926;
   input += synapse0x1621b10();
   input += synapse0x1621b50();
   input += synapse0x1621b90();
   input += synapse0x1621bd0();
   input += synapse0x1621c10();
   input += synapse0x1621c50();
   input += synapse0x1621c90();
   input += synapse0x1621cd0();
   input += synapse0x1621d10();
   input += synapse0x1621d50();
   input += synapse0x1621d90();
   input += synapse0x1621dd0();
   input += synapse0x1621e10();
   input += synapse0x1621e50();
   input += synapse0x1621e90();
   input += synapse0x1621ed0();
   input += synapse0x1621960();
   input += synapse0x16219a0();
   input += synapse0x161e730();
   input += synapse0x161e770();
   input += synapse0x161e7b0();
   input += synapse0x161e7f0();
   input += synapse0x161e830();
   input += synapse0x161e870();
   return input;
}

double NNfunction_ss_dRdR::neuron0x16217d0() {
   double input = input0x16217d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x161e8b0() {
   double input = 0.543085;
   input += synapse0x161ebf0();
   input += synapse0x161ec30();
   input += synapse0x161ec70();
   input += synapse0x161ecb0();
   input += synapse0x161ecf0();
   input += synapse0x161ed30();
   input += synapse0x161ed70();
   input += synapse0x161edb0();
   input += synapse0x161edf0();
   input += synapse0x161ee30();
   input += synapse0x161ee70();
   input += synapse0x161eeb0();
   input += synapse0x161eef0();
   input += synapse0x1623030();
   input += synapse0x1623070();
   input += synapse0x16230b0();
   input += synapse0x161ea40();
   input += synapse0x161ea80();
   input += synapse0x1623200();
   input += synapse0x1623240();
   input += synapse0x1623280();
   input += synapse0x16232c0();
   input += synapse0x1623300();
   input += synapse0x1623340();
   return input;
}

double NNfunction_ss_dRdR::neuron0x161e8b0() {
   double input = input0x161e8b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x1623380() {
   double input = 0.913458;
   input += synapse0x16236c0();
   input += synapse0x1623700();
   input += synapse0x1623740();
   input += synapse0x1623780();
   input += synapse0x16237c0();
   input += synapse0x1623800();
   input += synapse0x1623840();
   input += synapse0x1623880();
   input += synapse0x16238c0();
   input += synapse0x1623900();
   input += synapse0x1623940();
   input += synapse0x1623980();
   input += synapse0x16239c0();
   input += synapse0x1623a00();
   input += synapse0x1623a40();
   input += synapse0x1623a80();
   input += synapse0x1623510();
   input += synapse0x1623550();
   input += synapse0x1623bd0();
   input += synapse0x1623c10();
   input += synapse0x1623c50();
   input += synapse0x1623c90();
   input += synapse0x1623cd0();
   input += synapse0x1623d10();
   return input;
}

double NNfunction_ss_dRdR::neuron0x1623380() {
   double input = input0x1623380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x1623d50() {
   double input = 0.271106;
   input += synapse0x1624090();
   input += synapse0x16240d0();
   input += synapse0x1624110();
   input += synapse0x1624150();
   input += synapse0x1624190();
   input += synapse0x16241d0();
   input += synapse0x1624210();
   input += synapse0x1624250();
   input += synapse0x1624290();
   input += synapse0x16242d0();
   input += synapse0x1624310();
   input += synapse0x1624350();
   input += synapse0x1624390();
   input += synapse0x16243d0();
   input += synapse0x1624410();
   input += synapse0x1624450();
   input += synapse0x1623ee0();
   input += synapse0x1623f20();
   input += synapse0x16245a0();
   input += synapse0x16245e0();
   input += synapse0x1624620();
   input += synapse0x1624660();
   input += synapse0x16246a0();
   input += synapse0x16246e0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x1623d50() {
   double input = input0x1623d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x1624720() {
   double input = -0.501385;
   input += synapse0x1624a60();
   input += synapse0x1624aa0();
   input += synapse0x1624ae0();
   input += synapse0x1624b20();
   input += synapse0x1624b60();
   input += synapse0x1624ba0();
   input += synapse0x1624be0();
   input += synapse0x1624c20();
   input += synapse0x1624c60();
   input += synapse0x1624ca0();
   input += synapse0x1624ce0();
   input += synapse0x1624d20();
   input += synapse0x1624d60();
   input += synapse0x1624da0();
   input += synapse0x1624de0();
   input += synapse0x1624e20();
   input += synapse0x16248b0();
   input += synapse0x16248f0();
   input += synapse0x1624f70();
   input += synapse0x1624fb0();
   input += synapse0x1624ff0();
   input += synapse0x1625030();
   input += synapse0x1625070();
   input += synapse0x16250b0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x1624720() {
   double input = input0x1624720();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x16250f0() {
   double input = -0.804983;
   input += synapse0x1625430();
   input += synapse0x1616790();
   input += synapse0x16167d0();
   input += synapse0x1616ad0();
   input += synapse0x1616b10();
   input += synapse0x1616e10();
   input += synapse0x1616e50();
   input += synapse0x1617150();
   input += synapse0x1617190();
   input += synapse0x1617490();
   input += synapse0x16174d0();
   input += synapse0x16177d0();
   input += synapse0x1617810();
   input += synapse0x1617b10();
   input += synapse0x1617b50();
   input += synapse0x1617e50();
   input += synapse0x1617e90();
   input += synapse0x1618190();
   input += synapse0x16181d0();
   input += synapse0x16184d0();
   input += synapse0x1618510();
   input += synapse0x1618810();
   input += synapse0x1618850();
   input += synapse0x1618b50();
   return input;
}

double NNfunction_ss_dRdR::neuron0x16250f0() {
   double input = input0x16250f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x1626f00() {
   double input = -1.62615;
   input += synapse0x1618b90();
   input += synapse0x1619850();
   input += synapse0x1619890();
   input += synapse0x1625280();
   input += synapse0x16252c0();
   input += synapse0x1619b90();
   input += synapse0x1619bd0();
   input += synapse0x13c7b60();
   input += synapse0x13c7ba0();
   input += synapse0x161a310();
   input += synapse0x161a350();
   input += synapse0x161a650();
   input += synapse0x161a690();
   input += synapse0x161a990();
   input += synapse0x161a9d0();
   input += synapse0x161acd0();
   input += synapse0x161ad10();
   input += synapse0x161b010();
   input += synapse0x161b050();
   input += synapse0x161b350();
   input += synapse0x161b390();
   input += synapse0x1618e90();
   input += synapse0x1618ed0();
   input += synapse0x16271a0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x1626f00() {
   double input = input0x1626f00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x16271e0() {
   double input = 0.0670147;
   input += synapse0x1627520();
   input += synapse0x1627560();
   input += synapse0x16275a0();
   input += synapse0x16275e0();
   input += synapse0x1627620();
   input += synapse0x1627660();
   input += synapse0x16276a0();
   input += synapse0x16276e0();
   input += synapse0x1627720();
   input += synapse0x1627760();
   input += synapse0x16277a0();
   input += synapse0x16277e0();
   input += synapse0x1627820();
   input += synapse0x1627860();
   input += synapse0x16278a0();
   input += synapse0x16278e0();
   input += synapse0x1627370();
   input += synapse0x16273b0();
   input += synapse0x1627a30();
   input += synapse0x1627a70();
   input += synapse0x1627ab0();
   input += synapse0x1627af0();
   input += synapse0x1627b30();
   input += synapse0x1627b70();
   return input;
}

double NNfunction_ss_dRdR::neuron0x16271e0() {
   double input = input0x16271e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x1627bb0() {
   double input = -1.33059;
   input += synapse0x1627ef0();
   input += synapse0x1627f30();
   input += synapse0x1627f70();
   input += synapse0x1627fb0();
   input += synapse0x1627ff0();
   input += synapse0x1628030();
   input += synapse0x1628070();
   input += synapse0x16280b0();
   input += synapse0x16280f0();
   input += synapse0x1628130();
   input += synapse0x1628170();
   input += synapse0x16281b0();
   input += synapse0x16281f0();
   input += synapse0x1628230();
   input += synapse0x1628270();
   input += synapse0x16282b0();
   input += synapse0x1627d40();
   input += synapse0x1627d80();
   input += synapse0x1628400();
   input += synapse0x1628440();
   input += synapse0x1628480();
   input += synapse0x16284c0();
   input += synapse0x1628500();
   input += synapse0x1628540();
   return input;
}

double NNfunction_ss_dRdR::neuron0x1627bb0() {
   double input = input0x1627bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x1628580() {
   double input = -0.564682;
   input += synapse0x16288c0();
   input += synapse0x1628900();
   input += synapse0x1628940();
   input += synapse0x1628980();
   input += synapse0x16289c0();
   input += synapse0x1628a00();
   input += synapse0x1628a40();
   input += synapse0x1628a80();
   input += synapse0x1628ac0();
   input += synapse0x1628b00();
   input += synapse0x1628b40();
   input += synapse0x1628b80();
   input += synapse0x1628bc0();
   input += synapse0x1628c00();
   input += synapse0x1628c40();
   input += synapse0x1628c80();
   input += synapse0x1628710();
   input += synapse0x1628750();
   input += synapse0x1628dd0();
   input += synapse0x1628e10();
   input += synapse0x1628e50();
   input += synapse0x1628e90();
   input += synapse0x1628ed0();
   input += synapse0x1628f10();
   return input;
}

double NNfunction_ss_dRdR::neuron0x1628580() {
   double input = input0x1628580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x1628f50() {
   double input = -0.165673;
   input += synapse0x1629290();
   input += synapse0x16292d0();
   input += synapse0x1629310();
   input += synapse0x1629350();
   input += synapse0x1629390();
   input += synapse0x16293d0();
   input += synapse0x1629410();
   input += synapse0x1629450();
   input += synapse0x1629490();
   input += synapse0x16294d0();
   input += synapse0x1629510();
   input += synapse0x1629550();
   input += synapse0x1629590();
   input += synapse0x16295d0();
   input += synapse0x1629610();
   input += synapse0x1629650();
   input += synapse0x16290e0();
   input += synapse0x1629120();
   input += synapse0x16297a0();
   input += synapse0x16297e0();
   input += synapse0x1629820();
   input += synapse0x1629860();
   input += synapse0x16298a0();
   input += synapse0x16298e0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x1628f50() {
   double input = input0x1628f50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x1629920() {
   double input = -2.27992;
   input += synapse0x1629c60();
   input += synapse0x1629ca0();
   input += synapse0x1629ce0();
   input += synapse0x1629d20();
   input += synapse0x1629d60();
   input += synapse0x1629da0();
   input += synapse0x1629de0();
   input += synapse0x1629e20();
   input += synapse0x1629e60();
   input += synapse0x1622020();
   input += synapse0x1622060();
   input += synapse0x16220a0();
   input += synapse0x16220e0();
   input += synapse0x1622120();
   input += synapse0x1622160();
   input += synapse0x16221a0();
   input += synapse0x1629ab0();
   input += synapse0x1629af0();
   input += synapse0x16222f0();
   input += synapse0x1622330();
   input += synapse0x1622370();
   input += synapse0x16223b0();
   input += synapse0x16223f0();
   input += synapse0x1622430();
   return input;
}

double NNfunction_ss_dRdR::neuron0x1629920() {
   double input = input0x1629920();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x1622470() {
   double input = 0.273011;
   input += synapse0x16227b0();
   input += synapse0x16227f0();
   input += synapse0x1622830();
   input += synapse0x1622870();
   input += synapse0x16228b0();
   input += synapse0x16228f0();
   input += synapse0x1622930();
   input += synapse0x1622970();
   input += synapse0x16229b0();
   input += synapse0x16229f0();
   input += synapse0x1622a30();
   input += synapse0x1622a70();
   input += synapse0x1622ab0();
   input += synapse0x1622af0();
   input += synapse0x1622b30();
   input += synapse0x1622b70();
   input += synapse0x1622600();
   input += synapse0x1622640();
   input += synapse0x1622cc0();
   input += synapse0x1622d00();
   input += synapse0x1622d40();
   input += synapse0x1622d80();
   input += synapse0x1622dc0();
   input += synapse0x1622e00();
   return input;
}

double NNfunction_ss_dRdR::neuron0x1622470() {
   double input = input0x1622470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x1622e40() {
   double input = -0.213961;
   input += synapse0x1622fd0();
   input += synapse0x162c060();
   input += synapse0x162c0a0();
   input += synapse0x162c0e0();
   input += synapse0x162c120();
   input += synapse0x162c160();
   input += synapse0x162c1a0();
   input += synapse0x162c1e0();
   input += synapse0x162c220();
   input += synapse0x162c260();
   input += synapse0x162c2a0();
   input += synapse0x162c2e0();
   input += synapse0x162c320();
   input += synapse0x162c360();
   input += synapse0x162c3a0();
   input += synapse0x162c3e0();
   input += synapse0x162beb0();
   input += synapse0x162bef0();
   input += synapse0x162c530();
   input += synapse0x162c570();
   input += synapse0x162c5b0();
   input += synapse0x162c5f0();
   input += synapse0x162c630();
   input += synapse0x162c670();
   return input;
}

double NNfunction_ss_dRdR::neuron0x1622e40() {
   double input = input0x1622e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x162c6b0() {
   double input = 0.545378;
   input += synapse0x162c9f0();
   input += synapse0x162ca30();
   input += synapse0x162ca70();
   input += synapse0x162cab0();
   input += synapse0x162caf0();
   input += synapse0x162cb30();
   input += synapse0x162cb70();
   input += synapse0x162cbb0();
   input += synapse0x162cbf0();
   input += synapse0x162cc30();
   input += synapse0x162cc70();
   input += synapse0x162ccb0();
   input += synapse0x162ccf0();
   input += synapse0x162cd30();
   input += synapse0x162cd70();
   input += synapse0x162cdb0();
   input += synapse0x162c840();
   input += synapse0x162c880();
   input += synapse0x162cf00();
   input += synapse0x162cf40();
   input += synapse0x162cf80();
   input += synapse0x162cfc0();
   input += synapse0x162d000();
   input += synapse0x162d040();
   return input;
}

double NNfunction_ss_dRdR::neuron0x162c6b0() {
   double input = input0x162c6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x162d080() {
   double input = 0.572903;
   input += synapse0x162d3c0();
   input += synapse0x162d400();
   input += synapse0x162d440();
   input += synapse0x162d480();
   input += synapse0x162d4c0();
   input += synapse0x162d500();
   input += synapse0x162d540();
   input += synapse0x162d580();
   input += synapse0x162d5c0();
   input += synapse0x162d600();
   input += synapse0x162d640();
   input += synapse0x162d680();
   input += synapse0x162d6c0();
   input += synapse0x162d700();
   input += synapse0x162d740();
   input += synapse0x162d780();
   input += synapse0x162d210();
   input += synapse0x162d250();
   input += synapse0x162d8d0();
   input += synapse0x162d910();
   input += synapse0x162d950();
   input += synapse0x162d990();
   input += synapse0x162d9d0();
   input += synapse0x162da10();
   return input;
}

double NNfunction_ss_dRdR::neuron0x162d080() {
   double input = input0x162d080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x162da50() {
   double input = 0.754283;
   input += synapse0x162dd90();
   input += synapse0x162ddd0();
   input += synapse0x162de10();
   input += synapse0x162de50();
   input += synapse0x162de90();
   input += synapse0x162ded0();
   input += synapse0x162df10();
   input += synapse0x162df50();
   input += synapse0x162df90();
   input += synapse0x162dfd0();
   input += synapse0x162e010();
   input += synapse0x162e050();
   input += synapse0x162e090();
   input += synapse0x162e0d0();
   input += synapse0x162e110();
   input += synapse0x162e150();
   input += synapse0x162dbe0();
   input += synapse0x162dc20();
   input += synapse0x162e2a0();
   input += synapse0x162e2e0();
   input += synapse0x162e320();
   input += synapse0x162e360();
   input += synapse0x162e3a0();
   input += synapse0x162e3e0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x162da50() {
   double input = input0x162da50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x162e420() {
   double input = -0.244036;
   input += synapse0x162e760();
   input += synapse0x162e7a0();
   input += synapse0x162e7e0();
   input += synapse0x162e820();
   input += synapse0x162e860();
   input += synapse0x162e8a0();
   input += synapse0x162e8e0();
   input += synapse0x162e920();
   input += synapse0x162e960();
   input += synapse0x162e9a0();
   input += synapse0x162e9e0();
   input += synapse0x162ea20();
   input += synapse0x162ea60();
   input += synapse0x162eaa0();
   input += synapse0x162eae0();
   input += synapse0x162eb20();
   input += synapse0x162e5b0();
   input += synapse0x162e5f0();
   input += synapse0x162ec70();
   input += synapse0x162ecb0();
   input += synapse0x162ecf0();
   input += synapse0x162ed30();
   input += synapse0x162ed70();
   input += synapse0x162edb0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x162e420() {
   double input = input0x162e420();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x162edf0() {
   double input = 0.258109;
   input += synapse0x162f130();
   input += synapse0x162f170();
   input += synapse0x162f1b0();
   input += synapse0x162f1f0();
   input += synapse0x162f230();
   input += synapse0x162f270();
   input += synapse0x162f2b0();
   input += synapse0x162f2f0();
   input += synapse0x162f330();
   input += synapse0x162f370();
   input += synapse0x162f3b0();
   input += synapse0x162f3f0();
   input += synapse0x162f430();
   input += synapse0x162f470();
   input += synapse0x162f4b0();
   input += synapse0x162f4f0();
   input += synapse0x162ef80();
   input += synapse0x162efc0();
   input += synapse0x162f640();
   input += synapse0x162f680();
   input += synapse0x162f6c0();
   input += synapse0x162f700();
   input += synapse0x162f740();
   input += synapse0x162f780();
   return input;
}

double NNfunction_ss_dRdR::neuron0x162edf0() {
   double input = input0x162edf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x162f7c0() {
   double input = 0.608283;
   input += synapse0x162fb00();
   input += synapse0x162fb40();
   input += synapse0x162fb80();
   input += synapse0x162fbc0();
   input += synapse0x162fc00();
   input += synapse0x162fc40();
   input += synapse0x162fc80();
   input += synapse0x162fcc0();
   input += synapse0x162fd00();
   input += synapse0x162fd40();
   input += synapse0x162fd80();
   input += synapse0x162fdc0();
   input += synapse0x162fe00();
   input += synapse0x162fe40();
   input += synapse0x162fe80();
   input += synapse0x162fec0();
   input += synapse0x162f950();
   input += synapse0x162f990();
   input += synapse0x1630010();
   input += synapse0x1630050();
   input += synapse0x1630090();
   input += synapse0x16300d0();
   input += synapse0x1630110();
   input += synapse0x1630150();
   return input;
}

double NNfunction_ss_dRdR::neuron0x162f7c0() {
   double input = input0x162f7c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x1630190() {
   double input = 2.38606;
   input += synapse0x16304d0();
   input += synapse0x1630510();
   input += synapse0x1630550();
   input += synapse0x1630590();
   input += synapse0x16305d0();
   input += synapse0x1630610();
   input += synapse0x1630650();
   input += synapse0x1630690();
   input += synapse0x16306d0();
   input += synapse0x1630710();
   input += synapse0x1630750();
   input += synapse0x1630790();
   input += synapse0x16307d0();
   input += synapse0x1630810();
   input += synapse0x1630850();
   input += synapse0x1630890();
   input += synapse0x1630320();
   input += synapse0x1630360();
   input += synapse0x16309e0();
   input += synapse0x1630a20();
   input += synapse0x1630a60();
   input += synapse0x1630aa0();
   input += synapse0x1630ae0();
   input += synapse0x1630b20();
   return input;
}

double NNfunction_ss_dRdR::neuron0x1630190() {
   double input = input0x1630190();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x1630b60() {
   double input = -0.149285;
   input += synapse0x1630ea0();
   input += synapse0x1625470();
   input += synapse0x16254b0();
   input += synapse0x16254f0();
   input += synapse0x1625740();
   input += synapse0x1625780();
   input += synapse0x16257c0();
   input += synapse0x1625a10();
   input += synapse0x1625a50();
   input += synapse0x1625ca0();
   input += synapse0x1625ce0();
   input += synapse0x1625d20();
   input += synapse0x1625f70();
   input += synapse0x1625fb0();
   input += synapse0x1626200();
   input += synapse0x1626240();
   input += synapse0x1630cf0();
   input += synapse0x1630d30();
   input += synapse0x1626390();
   input += synapse0x16268a0();
   input += synapse0x16268e0();
   input += synapse0x1626920();
   input += synapse0x1626b70();
   input += synapse0x1626bb0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x1630b60() {
   double input = input0x1630b60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x1626bf0() {
   double input = -0.6055;
   input += synapse0x1626460();
   input += synapse0x16264a0();
   input += synapse0x16264e0();
   input += synapse0x1626520();
   input += synapse0x1626ea0();
   input += synapse0x16331f0();
   input += synapse0x1633230();
   input += synapse0x1633270();
   input += synapse0x16332b0();
   input += synapse0x16332f0();
   input += synapse0x1633330();
   input += synapse0x1633370();
   input += synapse0x16333b0();
   input += synapse0x16333f0();
   input += synapse0x1633430();
   input += synapse0x1633470();
   input += synapse0x1626d80();
   input += synapse0x1626dc0();
   input += synapse0x16335c0();
   input += synapse0x1633600();
   input += synapse0x1633640();
   input += synapse0x1633680();
   input += synapse0x16336c0();
   input += synapse0x1633700();
   return input;
}

double NNfunction_ss_dRdR::neuron0x1626bf0() {
   double input = input0x1626bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x1633740() {
   double input = 1.26317;
   input += synapse0x1633a80();
   input += synapse0x1633ac0();
   input += synapse0x1633b00();
   input += synapse0x1633b40();
   input += synapse0x1633b80();
   input += synapse0x1633bc0();
   input += synapse0x1633c00();
   input += synapse0x1633c40();
   input += synapse0x1633c80();
   input += synapse0x1633cc0();
   input += synapse0x1633d00();
   input += synapse0x1633d40();
   input += synapse0x1633d80();
   input += synapse0x1633dc0();
   input += synapse0x1633e00();
   input += synapse0x1633e40();
   input += synapse0x16338d0();
   input += synapse0x1633910();
   input += synapse0x1633f90();
   input += synapse0x1633fd0();
   input += synapse0x1634010();
   input += synapse0x1634050();
   input += synapse0x1634090();
   input += synapse0x16340d0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x1633740() {
   double input = input0x1633740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x1634110() {
   double input = 0.0171784;
   input += synapse0x1634450();
   input += synapse0x1634490();
   input += synapse0x16344d0();
   input += synapse0x1634510();
   input += synapse0x1634550();
   input += synapse0x1634590();
   input += synapse0x16345d0();
   input += synapse0x1634610();
   input += synapse0x1634650();
   input += synapse0x1634690();
   input += synapse0x16346d0();
   input += synapse0x1634710();
   input += synapse0x1634750();
   input += synapse0x1634790();
   input += synapse0x16347d0();
   input += synapse0x1634810();
   input += synapse0x16342a0();
   input += synapse0x16342e0();
   input += synapse0x1634960();
   input += synapse0x16349a0();
   input += synapse0x16349e0();
   input += synapse0x1634a20();
   input += synapse0x1634a60();
   input += synapse0x1634aa0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x1634110() {
   double input = input0x1634110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x1634ae0() {
   double input = -0.769558;
   input += synapse0x1634e20();
   input += synapse0x1634e60();
   input += synapse0x1634ea0();
   input += synapse0x1634ee0();
   input += synapse0x1634f20();
   input += synapse0x1634f60();
   input += synapse0x1634fa0();
   input += synapse0x1634fe0();
   input += synapse0x1635020();
   input += synapse0x1635060();
   input += synapse0x16350a0();
   input += synapse0x16350e0();
   input += synapse0x1635120();
   input += synapse0x1635160();
   input += synapse0x16351a0();
   input += synapse0x16351e0();
   input += synapse0x1634c70();
   input += synapse0x1634cb0();
   input += synapse0x1635330();
   input += synapse0x1635370();
   input += synapse0x16353b0();
   input += synapse0x16353f0();
   input += synapse0x1635430();
   input += synapse0x1635470();
   return input;
}

double NNfunction_ss_dRdR::neuron0x1634ae0() {
   double input = input0x1634ae0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x16354b0() {
   double input = 0.704119;
   input += synapse0x16357f0();
   input += synapse0x1635830();
   input += synapse0x1635870();
   input += synapse0x16358b0();
   input += synapse0x16358f0();
   input += synapse0x1635930();
   input += synapse0x1635970();
   input += synapse0x16359b0();
   input += synapse0x16359f0();
   input += synapse0x1635a30();
   input += synapse0x1635a70();
   input += synapse0x1635ab0();
   input += synapse0x1635af0();
   input += synapse0x1635b30();
   input += synapse0x1635b70();
   input += synapse0x1635bb0();
   input += synapse0x1635640();
   input += synapse0x1635680();
   input += synapse0x1635d00();
   input += synapse0x1635d40();
   input += synapse0x1635d80();
   input += synapse0x1635dc0();
   input += synapse0x1635e00();
   input += synapse0x1635e40();
   return input;
}

double NNfunction_ss_dRdR::neuron0x16354b0() {
   double input = input0x16354b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x1635e80() {
   double input = 0.275415;
   input += synapse0x16361c0();
   input += synapse0x1636200();
   input += synapse0x1636240();
   input += synapse0x1636280();
   input += synapse0x16362c0();
   input += synapse0x1636300();
   input += synapse0x1636340();
   input += synapse0x1636380();
   input += synapse0x16363c0();
   input += synapse0x1636400();
   input += synapse0x1636440();
   input += synapse0x1636480();
   input += synapse0x16364c0();
   input += synapse0x1636500();
   input += synapse0x1636540();
   input += synapse0x1636580();
   input += synapse0x1636010();
   input += synapse0x1636050();
   input += synapse0x16366d0();
   input += synapse0x1636710();
   input += synapse0x1636750();
   input += synapse0x1636790();
   input += synapse0x16367d0();
   input += synapse0x1636810();
   return input;
}

double NNfunction_ss_dRdR::neuron0x1635e80() {
   double input = input0x1635e80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x1636850() {
   double input = 2.87418;
   input += synapse0x1636b90();
   input += synapse0x1636bd0();
   input += synapse0x1636c10();
   input += synapse0x1636c50();
   input += synapse0x1636c90();
   input += synapse0x1636cd0();
   input += synapse0x1636d10();
   input += synapse0x1636d50();
   input += synapse0x1636d90();
   input += synapse0x1636dd0();
   input += synapse0x1636e10();
   input += synapse0x1636e50();
   input += synapse0x1636e90();
   input += synapse0x1636ed0();
   input += synapse0x1636f10();
   input += synapse0x1636f50();
   input += synapse0x16369e0();
   input += synapse0x1636a20();
   input += synapse0x16370a0();
   input += synapse0x16370e0();
   input += synapse0x1637120();
   input += synapse0x1637160();
   input += synapse0x16371a0();
   input += synapse0x16371e0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x1636850() {
   double input = input0x1636850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x1637220() {
   double input = 0.913622;
   input += synapse0x1637560();
   input += synapse0x16375a0();
   input += synapse0x16375e0();
   input += synapse0x1637620();
   input += synapse0x1637660();
   input += synapse0x16376a0();
   input += synapse0x16376e0();
   input += synapse0x1637720();
   input += synapse0x1637760();
   input += synapse0x16377a0();
   input += synapse0x16377e0();
   input += synapse0x1637820();
   input += synapse0x1637860();
   input += synapse0x16378a0();
   input += synapse0x16378e0();
   input += synapse0x1637920();
   input += synapse0x16373b0();
   input += synapse0x16373f0();
   input += synapse0x1637a70();
   input += synapse0x1637ab0();
   input += synapse0x1637af0();
   input += synapse0x1637b30();
   input += synapse0x1637b70();
   input += synapse0x1637bb0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x1637220() {
   double input = input0x1637220();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x1637bf0() {
   double input = -0.600413;
   input += synapse0x1620660();
   input += synapse0x16206a0();
   input += synapse0x16206e0();
   input += synapse0x1620720();
   input += synapse0x1620760();
   input += synapse0x16207a0();
   input += synapse0x16207e0();
   input += synapse0x1620820();
   input += synapse0x1638340();
   input += synapse0x1638380();
   input += synapse0x16383c0();
   input += synapse0x1638400();
   input += synapse0x1638440();
   input += synapse0x1638480();
   input += synapse0x16384c0();
   input += synapse0x1638500();
   input += synapse0x1637d80();
   input += synapse0x1637dc0();
   input += synapse0x1638650();
   input += synapse0x1638690();
   input += synapse0x16386d0();
   input += synapse0x1638710();
   input += synapse0x1638750();
   input += synapse0x1638790();
   return input;
}

double NNfunction_ss_dRdR::neuron0x1637bf0() {
   double input = input0x1637bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x16387d0() {
   double input = -2.22306;
   input += synapse0x1638b10();
   input += synapse0x1638b50();
   input += synapse0x1638b90();
   input += synapse0x1638bd0();
   input += synapse0x1638c10();
   input += synapse0x1638c50();
   input += synapse0x1638c90();
   input += synapse0x1638cd0();
   input += synapse0x1638d10();
   input += synapse0x1638d50();
   input += synapse0x1638d90();
   input += synapse0x1638dd0();
   input += synapse0x1638e10();
   input += synapse0x1638e50();
   input += synapse0x1638e90();
   input += synapse0x1638ed0();
   input += synapse0x1638960();
   input += synapse0x16389a0();
   input += synapse0x1639020();
   input += synapse0x1639060();
   input += synapse0x16390a0();
   input += synapse0x16390e0();
   input += synapse0x1639120();
   input += synapse0x1639160();
   return input;
}

double NNfunction_ss_dRdR::neuron0x16387d0() {
   double input = input0x16387d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x16391a0() {
   double input = -0.203258;
   input += synapse0x16394e0();
   input += synapse0x1639520();
   input += synapse0x1639560();
   input += synapse0x16395a0();
   input += synapse0x16395e0();
   input += synapse0x1639620();
   input += synapse0x1639660();
   input += synapse0x16396a0();
   input += synapse0x16396e0();
   input += synapse0x1639720();
   input += synapse0x1639760();
   input += synapse0x16397a0();
   input += synapse0x16397e0();
   input += synapse0x1639820();
   input += synapse0x1639860();
   input += synapse0x16398a0();
   input += synapse0x1639330();
   input += synapse0x1639370();
   input += synapse0x1629ea0();
   input += synapse0x1629ee0();
   input += synapse0x1629f20();
   input += synapse0x1629f60();
   input += synapse0x1629fa0();
   input += synapse0x1629fe0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x16391a0() {
   double input = input0x16391a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x162a020() {
   double input = 0.335083;
   input += synapse0x162a360();
   input += synapse0x162a3a0();
   input += synapse0x162a3e0();
   input += synapse0x162a420();
   input += synapse0x162a460();
   input += synapse0x162a4a0();
   input += synapse0x162a4e0();
   input += synapse0x162a520();
   input += synapse0x162a560();
   input += synapse0x162a5a0();
   input += synapse0x162a5e0();
   input += synapse0x162a620();
   input += synapse0x162a660();
   input += synapse0x162a6a0();
   input += synapse0x162a6e0();
   input += synapse0x162a720();
   input += synapse0x162a1b0();
   input += synapse0x162a1f0();
   input += synapse0x162a870();
   input += synapse0x162a8b0();
   input += synapse0x162a8f0();
   input += synapse0x162a930();
   input += synapse0x162a970();
   input += synapse0x162a9b0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x162a020() {
   double input = input0x162a020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x162a9f0() {
   double input = 1.4085;
   input += synapse0x162ad30();
   input += synapse0x162ad70();
   input += synapse0x162adb0();
   input += synapse0x162adf0();
   input += synapse0x162ae30();
   input += synapse0x162ae70();
   input += synapse0x162aeb0();
   input += synapse0x162aef0();
   input += synapse0x162af30();
   input += synapse0x162af70();
   input += synapse0x162afb0();
   input += synapse0x162aff0();
   input += synapse0x162b030();
   input += synapse0x162b070();
   input += synapse0x162b0b0();
   input += synapse0x162b0f0();
   input += synapse0x162ab80();
   input += synapse0x162abc0();
   input += synapse0x162b240();
   input += synapse0x162b280();
   input += synapse0x162b2c0();
   input += synapse0x162b300();
   input += synapse0x162b340();
   input += synapse0x162b380();
   return input;
}

double NNfunction_ss_dRdR::neuron0x162a9f0() {
   double input = input0x162a9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x162b3c0() {
   double input = 0.984572;
   input += synapse0x162b700();
   input += synapse0x162b740();
   input += synapse0x162b780();
   input += synapse0x162b7c0();
   input += synapse0x162b800();
   input += synapse0x162b840();
   input += synapse0x162b880();
   input += synapse0x162b8c0();
   input += synapse0x162b900();
   input += synapse0x162b940();
   input += synapse0x162b980();
   input += synapse0x162b9c0();
   input += synapse0x162ba00();
   input += synapse0x162ba40();
   input += synapse0x162ba80();
   input += synapse0x162bac0();
   input += synapse0x162b550();
   input += synapse0x162b590();
   input += synapse0x162bc10();
   input += synapse0x162bc50();
   input += synapse0x162bc90();
   input += synapse0x162bcd0();
   input += synapse0x162bd10();
   input += synapse0x162bd50();
   return input;
}

double NNfunction_ss_dRdR::neuron0x162b3c0() {
   double input = input0x162b3c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x163da00() {
   double input = 3.05669;
   input += synapse0x163dc20();
   input += synapse0x163dc60();
   input += synapse0x163dca0();
   input += synapse0x163dce0();
   input += synapse0x163dd20();
   input += synapse0x163dd60();
   input += synapse0x163dda0();
   input += synapse0x163dde0();
   input += synapse0x163de20();
   input += synapse0x163de60();
   input += synapse0x163dea0();
   input += synapse0x163dee0();
   input += synapse0x163df20();
   input += synapse0x163df60();
   input += synapse0x163dfa0();
   input += synapse0x163dfe0();
   input += synapse0x162bd90();
   input += synapse0x162bdd0();
   input += synapse0x163e130();
   input += synapse0x163e170();
   input += synapse0x163e1b0();
   input += synapse0x163e1f0();
   input += synapse0x163e230();
   input += synapse0x163e270();
   return input;
}

double NNfunction_ss_dRdR::neuron0x163da00() {
   double input = input0x163da00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x163e2b0() {
   double input = -1.40551;
   input += synapse0x163e5f0();
   input += synapse0x163e630();
   input += synapse0x163e670();
   input += synapse0x163e6b0();
   input += synapse0x163e6f0();
   input += synapse0x163e730();
   input += synapse0x163e770();
   input += synapse0x163e7b0();
   input += synapse0x163e7f0();
   input += synapse0x163e830();
   input += synapse0x163e870();
   input += synapse0x163e8b0();
   input += synapse0x163e8f0();
   input += synapse0x163e930();
   input += synapse0x163e970();
   input += synapse0x163e9b0();
   input += synapse0x163e440();
   input += synapse0x163e480();
   input += synapse0x163eb00();
   input += synapse0x163eb40();
   input += synapse0x163eb80();
   input += synapse0x163ebc0();
   input += synapse0x163ec00();
   input += synapse0x163ec40();
   return input;
}

double NNfunction_ss_dRdR::neuron0x163e2b0() {
   double input = input0x163e2b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x163ec80() {
   double input = 0.434992;
   input += synapse0x163efc0();
   input += synapse0x163f000();
   input += synapse0x163f040();
   input += synapse0x163f080();
   input += synapse0x163f0c0();
   input += synapse0x163f100();
   input += synapse0x163f140();
   input += synapse0x163f180();
   input += synapse0x163f1c0();
   input += synapse0x163f200();
   input += synapse0x163f240();
   input += synapse0x163f280();
   input += synapse0x163f2c0();
   input += synapse0x163f300();
   input += synapse0x163f340();
   input += synapse0x163f380();
   input += synapse0x163ee10();
   input += synapse0x163ee50();
   input += synapse0x163f4d0();
   input += synapse0x163f510();
   input += synapse0x163f550();
   input += synapse0x163f590();
   input += synapse0x163f5d0();
   input += synapse0x163f610();
   return input;
}

double NNfunction_ss_dRdR::neuron0x163ec80() {
   double input = input0x163ec80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x163f650() {
   double input = 1.73744;
   input += synapse0x163f990();
   input += synapse0x163f9d0();
   input += synapse0x163fa10();
   input += synapse0x163fa50();
   input += synapse0x163fa90();
   input += synapse0x163fad0();
   input += synapse0x163fb10();
   input += synapse0x163fb50();
   input += synapse0x163fb90();
   input += synapse0x163fbd0();
   input += synapse0x163fc10();
   input += synapse0x163fc50();
   input += synapse0x163fc90();
   input += synapse0x163fcd0();
   input += synapse0x163fd10();
   input += synapse0x163fd50();
   input += synapse0x163f7e0();
   input += synapse0x163f820();
   input += synapse0x163fea0();
   input += synapse0x163fee0();
   input += synapse0x163ff20();
   input += synapse0x163ff60();
   input += synapse0x163ffa0();
   input += synapse0x163ffe0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x163f650() {
   double input = input0x163f650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x1646850() {
   double input = 0.175264;
   input += synapse0x161c580();
   input += synapse0x161c5c0();
   input += synapse0x161da90();
   input += synapse0x161dad0();
   input += synapse0x161e460();
   input += synapse0x161e4a0();
   input += synapse0x161f230();
   input += synapse0x161f270();
   input += synapse0x161fc00();
   input += synapse0x161fc40();
   input += synapse0x16205d0();
   input += synapse0x1620610();
   input += synapse0x16210b0();
   input += synapse0x16210f0();
   input += synapse0x1621a80();
   input += synapse0x1621ac0();
   input += synapse0x161eb60();
   input += synapse0x161eba0();
   input += synapse0x1623630();
   input += synapse0x1623670();
   input += synapse0x1624000();
   input += synapse0x1624040();
   input += synapse0x16249d0();
   input += synapse0x1624a10();
   input += synapse0x16253a0();
   input += synapse0x16253e0();
   input += synapse0x1619510();
   input += synapse0x1619550();
   input += synapse0x1627490();
   input += synapse0x16274d0();
   input += synapse0x1627e60();
   input += synapse0x1627ea0();
   input += synapse0x1628830();
   input += synapse0x1628870();
   input += synapse0x1629200();
   input += synapse0x1629240();
   input += synapse0x1629bd0();
   input += synapse0x1629c10();
   input += synapse0x1622720();
   input += synapse0x1622760();
   input += synapse0x162bfd0();
   input += synapse0x162c010();
   input += synapse0x162c960();
   input += synapse0x162c9a0();
   input += synapse0x162d330();
   input += synapse0x162d370();
   input += synapse0x162dd00();
   input += synapse0x162dd40();
   input += synapse0x162e6d0();
   input += synapse0x162e710();
   return input;
}

double NNfunction_ss_dRdR::neuron0x1646850() {
   double input = input0x1646850();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x1646bf0() {
   double input = -0.717632;
   input += synapse0x1630e10();
   input += synapse0x1630e50();
   input += synapse0x16263d0();
   input += synapse0x1626410();
   input += synapse0x16339f0();
   input += synapse0x1633a30();
   input += synapse0x16343c0();
   input += synapse0x1634400();
   input += synapse0x1634d90();
   input += synapse0x1634dd0();
   input += synapse0x1635760();
   input += synapse0x16357a0();
   input += synapse0x1636130();
   input += synapse0x1636170();
   input += synapse0x1636b00();
   input += synapse0x1636b40();
   input += synapse0x16374d0();
   input += synapse0x1637510();
   input += synapse0x1637ea0();
   input += synapse0x1637ee0();
   input += synapse0x1638a80();
   input += synapse0x1638ac0();
   input += synapse0x1639450();
   input += synapse0x1639490();
   input += synapse0x162a2d0();
   input += synapse0x162a310();
   input += synapse0x162aca0();
   input += synapse0x162ace0();
   input += synapse0x162b670();
   input += synapse0x162b6b0();
   input += synapse0x163db90();
   input += synapse0x163dbd0();
   input += synapse0x163e560();
   input += synapse0x163e5a0();
   input += synapse0x163ef30();
   input += synapse0x163ef70();
   input += synapse0x163f900();
   input += synapse0x163f940();
   input += synapse0x161b7f0();
   input += synapse0x161b830();
   input += synapse0x162f0a0();
   input += synapse0x162f0e0();
   input += synapse0x1640020();
   input += synapse0x1640060();
   input += synapse0x16400a0();
   input += synapse0x16400e0();
   input += synapse0x1646f90();
   input += synapse0x1646fd0();
   input += synapse0x1647010();
   input += synapse0x1647050();
   return input;
}

double NNfunction_ss_dRdR::neuron0x1646bf0() {
   double input = input0x1646bf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x1647090() {
   double input = -0.349064;
   input += synapse0x16473d0();
   input += synapse0x1647410();
   input += synapse0x1647450();
   input += synapse0x1647490();
   input += synapse0x16474d0();
   input += synapse0x1647510();
   input += synapse0x1647550();
   input += synapse0x1647590();
   input += synapse0x16475d0();
   input += synapse0x1647610();
   input += synapse0x1647650();
   input += synapse0x1647690();
   input += synapse0x16476d0();
   input += synapse0x1647710();
   input += synapse0x1647750();
   input += synapse0x1647790();
   input += synapse0x1647220();
   input += synapse0x1647260();
   input += synapse0x16478e0();
   input += synapse0x1647920();
   input += synapse0x1647960();
   input += synapse0x16479a0();
   input += synapse0x16479e0();
   input += synapse0x1647a20();
   input += synapse0x1647a60();
   input += synapse0x1647aa0();
   input += synapse0x1647ae0();
   input += synapse0x1647b20();
   input += synapse0x1647b60();
   input += synapse0x1647ba0();
   input += synapse0x1647be0();
   input += synapse0x1647c20();
   input += synapse0x16477d0();
   input += synapse0x1647810();
   input += synapse0x1647850();
   input += synapse0x1647890();
   input += synapse0x1647e70();
   input += synapse0x1647eb0();
   input += synapse0x1647ef0();
   input += synapse0x1647f30();
   input += synapse0x1647f70();
   input += synapse0x1647fb0();
   input += synapse0x1647ff0();
   input += synapse0x1648030();
   input += synapse0x1648070();
   input += synapse0x16480b0();
   input += synapse0x16480f0();
   input += synapse0x1648130();
   input += synapse0x1648170();
   input += synapse0x16481b0();
   return input;
}

double NNfunction_ss_dRdR::neuron0x1647090() {
   double input = input0x1647090();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x16481f0() {
   double input = 0.503869;
   input += synapse0x1648530();
   input += synapse0x1648570();
   input += synapse0x16485b0();
   input += synapse0x16485f0();
   input += synapse0x1648630();
   input += synapse0x1648670();
   input += synapse0x16486b0();
   input += synapse0x16486f0();
   input += synapse0x1648730();
   input += synapse0x1648770();
   input += synapse0x16487b0();
   input += synapse0x16487f0();
   input += synapse0x1648830();
   input += synapse0x1648870();
   input += synapse0x16488b0();
   input += synapse0x16488f0();
   input += synapse0x1648380();
   input += synapse0x16483c0();
   input += synapse0x1648a40();
   input += synapse0x1648a80();
   input += synapse0x1648ac0();
   input += synapse0x1648b00();
   input += synapse0x1648b40();
   input += synapse0x1648b80();
   input += synapse0x1648bc0();
   input += synapse0x1648c00();
   input += synapse0x1648c40();
   input += synapse0x1648c80();
   input += synapse0x1648cc0();
   input += synapse0x1648d00();
   input += synapse0x1648d40();
   input += synapse0x1648d80();
   input += synapse0x1648930();
   input += synapse0x1648970();
   input += synapse0x16489b0();
   input += synapse0x16489f0();
   input += synapse0x1648fd0();
   input += synapse0x1649010();
   input += synapse0x1649050();
   input += synapse0x1649090();
   input += synapse0x16490d0();
   input += synapse0x1649110();
   input += synapse0x1649150();
   input += synapse0x1649190();
   input += synapse0x16491d0();
   input += synapse0x1649210();
   input += synapse0x1649250();
   input += synapse0x1649290();
   input += synapse0x16492d0();
   input += synapse0x1649310();
   return input;
}

double NNfunction_ss_dRdR::neuron0x16481f0() {
   double input = input0x16481f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x1649350() {
   double input = -0.359284;
   input += synapse0x1649690();
   input += synapse0x16496d0();
   input += synapse0x1649710();
   input += synapse0x1649750();
   input += synapse0x1649790();
   input += synapse0x16497d0();
   input += synapse0x1649810();
   input += synapse0x1649850();
   input += synapse0x1649890();
   input += synapse0x16498d0();
   input += synapse0x1649910();
   input += synapse0x1649950();
   input += synapse0x1649990();
   input += synapse0x16499d0();
   input += synapse0x1649a10();
   input += synapse0x1649a50();
   input += synapse0x16494e0();
   input += synapse0x1649520();
   input += synapse0x1649ba0();
   input += synapse0x1649be0();
   input += synapse0x1649c20();
   input += synapse0x1649c60();
   input += synapse0x1649ca0();
   input += synapse0x1649ce0();
   input += synapse0x1649d20();
   input += synapse0x1649d60();
   input += synapse0x1649da0();
   input += synapse0x1649de0();
   input += synapse0x1649e20();
   input += synapse0x1649e60();
   input += synapse0x1649ea0();
   input += synapse0x1649ee0();
   input += synapse0x1649a90();
   input += synapse0x1649ad0();
   input += synapse0x1649b10();
   input += synapse0x1649b50();
   input += synapse0x164a130();
   input += synapse0x164a170();
   input += synapse0x164a1b0();
   input += synapse0x164a1f0();
   input += synapse0x164a230();
   input += synapse0x164a270();
   input += synapse0x164a2b0();
   input += synapse0x164a2f0();
   input += synapse0x164a330();
   input += synapse0x164a370();
   input += synapse0x164a3b0();
   input += synapse0x164a3f0();
   input += synapse0x164a430();
   input += synapse0x164a470();
   return input;
}

double NNfunction_ss_dRdR::neuron0x1649350() {
   double input = input0x1649350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_dRdR::input0x164a4b0() {
   double input = 5.02753;
   input += synapse0x161b590();
   input += synapse0x164a6d0();
   input += synapse0x164a710();
   input += synapse0x164a750();
   input += synapse0x164a790();
   return input;
}

double NNfunction_ss_dRdR::neuron0x164a4b0() {
   double input = input0x164a4b0();
   return (input * 1)+0;
}

double NNfunction_ss_dRdR::synapse0x13d63e0() {
   return (neuron0x1616570()*0.392424);
}

double NNfunction_ss_dRdR::synapse0x1616430() {
   return (neuron0x16168b0()*-0.344666);
}

double NNfunction_ss_dRdR::synapse0x1616470() {
   return (neuron0x1616bf0()*-0.0475659);
}

double NNfunction_ss_dRdR::synapse0x161b880() {
   return (neuron0x1616f30()*0.837804);
}

double NNfunction_ss_dRdR::synapse0x161b8c0() {
   return (neuron0x1617270()*-0.448742);
}

double NNfunction_ss_dRdR::synapse0x161b900() {
   return (neuron0x16175b0()*-0.445578);
}

double NNfunction_ss_dRdR::synapse0x161b940() {
   return (neuron0x16178f0()*0.268862);
}

double NNfunction_ss_dRdR::synapse0x161b980() {
   return (neuron0x1617c30()*0.917221);
}

double NNfunction_ss_dRdR::synapse0x161b9c0() {
   return (neuron0x1617f70()*-0.0783314);
}

double NNfunction_ss_dRdR::synapse0x161ba00() {
   return (neuron0x16182b0()*-0.324033);
}

double NNfunction_ss_dRdR::synapse0x161ba40() {
   return (neuron0x16185f0()*0.166241);
}

double NNfunction_ss_dRdR::synapse0x161ba80() {
   return (neuron0x1618930()*0.0346677);
}

double NNfunction_ss_dRdR::synapse0x161bac0() {
   return (neuron0x1618c70()*0.964985);
}

double NNfunction_ss_dRdR::synapse0x161bb00() {
   return (neuron0x1618fb0()*-0.247882);
}

double NNfunction_ss_dRdR::synapse0x161bb40() {
   return (neuron0x16192f0()*-0.254923);
}

double NNfunction_ss_dRdR::synapse0x161bb80() {
   return (neuron0x1619630()*0.422921);
}

double NNfunction_ss_dRdR::synapse0x16163a0() {
   return (neuron0x1619970()*-0.279003);
}

double NNfunction_ss_dRdR::synapse0x16163e0() {
   return (neuron0x1619ed0()*0.546737);
}

double NNfunction_ss_dRdR::synapse0x13c7c80() {
   return (neuron0x161a0f0()*0.468649);
}

double NNfunction_ss_dRdR::synapse0x13c7cc0() {
   return (neuron0x161a430()*0.0623555);
}

double NNfunction_ss_dRdR::synapse0x161bde0() {
   return (neuron0x161a770()*0.168416);
}

double NNfunction_ss_dRdR::synapse0x161be20() {
   return (neuron0x161aab0()*0.527808);
}

double NNfunction_ss_dRdR::synapse0x161be60() {
   return (neuron0x161adf0()*0.543928);
}

double NNfunction_ss_dRdR::synapse0x161bea0() {
   return (neuron0x161b130()*0.328462);
}

double NNfunction_ss_dRdR::synapse0x161c220() {
   return (neuron0x1616570()*-0.440603);
}

double NNfunction_ss_dRdR::synapse0x161c260() {
   return (neuron0x16168b0()*0.194771);
}

double NNfunction_ss_dRdR::synapse0x161c2a0() {
   return (neuron0x1616bf0()*0.302803);
}

double NNfunction_ss_dRdR::synapse0x161c2e0() {
   return (neuron0x1616f30()*-0.114196);
}

double NNfunction_ss_dRdR::synapse0x161c320() {
   return (neuron0x1617270()*-0.489424);
}

double NNfunction_ss_dRdR::synapse0x161c360() {
   return (neuron0x16175b0()*0.203052);
}

double NNfunction_ss_dRdR::synapse0x161c3a0() {
   return (neuron0x16178f0()*0.179487);
}

double NNfunction_ss_dRdR::synapse0x161c3e0() {
   return (neuron0x1617c30()*0.105377);
}

double NNfunction_ss_dRdR::synapse0x161c420() {
   return (neuron0x1617f70()*0.358386);
}

double NNfunction_ss_dRdR::synapse0x161bcd0() {
   return (neuron0x16182b0()*0.0165921);
}

double NNfunction_ss_dRdR::synapse0x161bd10() {
   return (neuron0x16185f0()*-0.543239);
}

double NNfunction_ss_dRdR::synapse0x161bd50() {
   return (neuron0x1618930()*0.517215);
}

double NNfunction_ss_dRdR::synapse0x161bd90() {
   return (neuron0x1618c70()*-0.659922);
}

double NNfunction_ss_dRdR::synapse0x161c670() {
   return (neuron0x1618fb0()*0.479673);
}

double NNfunction_ss_dRdR::synapse0x161c6b0() {
   return (neuron0x16192f0()*-0.104906);
}

double NNfunction_ss_dRdR::synapse0x161c6f0() {
   return (neuron0x1619630()*0.347955);
}

double NNfunction_ss_dRdR::synapse0x161c070() {
   return (neuron0x1619970()*-0.227507);
}

double NNfunction_ss_dRdR::synapse0x161c0b0() {
   return (neuron0x1619ed0()*-1.51699);
}

double NNfunction_ss_dRdR::synapse0x161c840() {
   return (neuron0x161a0f0()*-0.604963);
}

double NNfunction_ss_dRdR::synapse0x161c880() {
   return (neuron0x161a430()*0.0909786);
}

double NNfunction_ss_dRdR::synapse0x161c8c0() {
   return (neuron0x161a770()*0.104014);
}

double NNfunction_ss_dRdR::synapse0x161c900() {
   return (neuron0x161aab0()*-0.59495);
}

double NNfunction_ss_dRdR::synapse0x161c940() {
   return (neuron0x161adf0()*0.599054);
}

double NNfunction_ss_dRdR::synapse0x161c980() {
   return (neuron0x161b130()*0.00547217);
}

double NNfunction_ss_dRdR::synapse0x161cd00() {
   return (neuron0x1616570()*-0.122075);
}

double NNfunction_ss_dRdR::synapse0x161cd40() {
   return (neuron0x16168b0()*0.401292);
}

double NNfunction_ss_dRdR::synapse0x161cd80() {
   return (neuron0x1616bf0()*-0.0929947);
}

double NNfunction_ss_dRdR::synapse0x161cdc0() {
   return (neuron0x1616f30()*0.307177);
}

double NNfunction_ss_dRdR::synapse0x161ce00() {
   return (neuron0x1617270()*0.059552);
}

double NNfunction_ss_dRdR::synapse0x161ce40() {
   return (neuron0x16175b0()*-0.0708468);
}

double NNfunction_ss_dRdR::synapse0x161ce80() {
   return (neuron0x16178f0()*-0.00676816);
}

double NNfunction_ss_dRdR::synapse0x161cec0() {
   return (neuron0x1617c30()*0.179539);
}

double NNfunction_ss_dRdR::synapse0x161cf00() {
   return (neuron0x1617f70()*-0.645591);
}

double NNfunction_ss_dRdR::synapse0x161cf40() {
   return (neuron0x16182b0()*0.011774);
}

double NNfunction_ss_dRdR::synapse0x161cf80() {
   return (neuron0x16185f0()*-0.45861);
}

double NNfunction_ss_dRdR::synapse0x161cfc0() {
   return (neuron0x1618930()*0.086367);
}

double NNfunction_ss_dRdR::synapse0x161d000() {
   return (neuron0x1618c70()*0.36101);
}

double NNfunction_ss_dRdR::synapse0x161d040() {
   return (neuron0x1618fb0()*0.417388);
}

double NNfunction_ss_dRdR::synapse0x161d080() {
   return (neuron0x16192f0()*0.17402);
}

double NNfunction_ss_dRdR::synapse0x161d0c0() {
   return (neuron0x1619630()*0.132221);
}

double NNfunction_ss_dRdR::synapse0x161cb50() {
   return (neuron0x1619970()*-0.00534554);
}

double NNfunction_ss_dRdR::synapse0x161cb90() {
   return (neuron0x1619ed0()*-0.540201);
}

double NNfunction_ss_dRdR::synapse0x13d5ad0() {
   return (neuron0x161a0f0()*-0.615635);
}

double NNfunction_ss_dRdR::synapse0x13d5b10() {
   return (neuron0x161a430()*-0.00410878);
}

double NNfunction_ss_dRdR::synapse0x1605600() {
   return (neuron0x161a770()*-0.00567542);
}

double NNfunction_ss_dRdR::synapse0x1605640() {
   return (neuron0x161aab0()*0.427512);
}

double NNfunction_ss_dRdR::synapse0x1605680() {
   return (neuron0x161adf0()*0.339961);
}

double NNfunction_ss_dRdR::synapse0x16164b0() {
   return (neuron0x161b130()*-0.249409);
}

double NNfunction_ss_dRdR::synapse0x161c610() {
   return (neuron0x1616570()*-0.294943);
}

double NNfunction_ss_dRdR::synapse0x16164f0() {
   return (neuron0x16168b0()*0.0351209);
}

double NNfunction_ss_dRdR::synapse0x1616530() {
   return (neuron0x1616bf0()*-0.200645);
}

double NNfunction_ss_dRdR::synapse0x161d210() {
   return (neuron0x1616f30()*-0.0562849);
}

double NNfunction_ss_dRdR::synapse0x161d250() {
   return (neuron0x1617270()*0.0304182);
}

double NNfunction_ss_dRdR::synapse0x161d290() {
   return (neuron0x16175b0()*0.032923);
}

double NNfunction_ss_dRdR::synapse0x161d2d0() {
   return (neuron0x16178f0()*0.259524);
}

double NNfunction_ss_dRdR::synapse0x161d310() {
   return (neuron0x1617c30()*0.0209188);
}

double NNfunction_ss_dRdR::synapse0x161d350() {
   return (neuron0x1617f70()*-0.128787);
}

double NNfunction_ss_dRdR::synapse0x161d390() {
   return (neuron0x16182b0()*0.131309);
}

double NNfunction_ss_dRdR::synapse0x161d3d0() {
   return (neuron0x16185f0()*0.0134914);
}

double NNfunction_ss_dRdR::synapse0x161d410() {
   return (neuron0x1618930()*0.152317);
}

double NNfunction_ss_dRdR::synapse0x161d450() {
   return (neuron0x1618c70()*0.0137673);
}

double NNfunction_ss_dRdR::synapse0x161d490() {
   return (neuron0x1618fb0()*0.0366152);
}

double NNfunction_ss_dRdR::synapse0x161d4d0() {
   return (neuron0x16192f0()*-0.139222);
}

double NNfunction_ss_dRdR::synapse0x161d510() {
   return (neuron0x1619630()*-0.232999);
}

double NNfunction_ss_dRdR::synapse0x161c460() {
   return (neuron0x1619970()*-0.11601);
}

double NNfunction_ss_dRdR::synapse0x161c4a0() {
   return (neuron0x1619ed0()*-0.686368);
}

double NNfunction_ss_dRdR::synapse0x161d660() {
   return (neuron0x161a0f0()*0.0285368);
}

double NNfunction_ss_dRdR::synapse0x161d6a0() {
   return (neuron0x161a430()*-0.0247577);
}

double NNfunction_ss_dRdR::synapse0x161d6e0() {
   return (neuron0x161a770()*-0.0669407);
}

double NNfunction_ss_dRdR::synapse0x161d720() {
   return (neuron0x161aab0()*0.00930378);
}

double NNfunction_ss_dRdR::synapse0x161d760() {
   return (neuron0x161adf0()*0.0394017);
}

double NNfunction_ss_dRdR::synapse0x161d7a0() {
   return (neuron0x161b130()*0.000623921);
}

double NNfunction_ss_dRdR::synapse0x161db20() {
   return (neuron0x1616570()*0.0126619);
}

double NNfunction_ss_dRdR::synapse0x161db60() {
   return (neuron0x16168b0()*0.0885194);
}

double NNfunction_ss_dRdR::synapse0x161dba0() {
   return (neuron0x1616bf0()*-0.00234621);
}

double NNfunction_ss_dRdR::synapse0x161dbe0() {
   return (neuron0x1616f30()*-0.436613);
}

double NNfunction_ss_dRdR::synapse0x161dc20() {
   return (neuron0x1617270()*-0.000977133);
}

double NNfunction_ss_dRdR::synapse0x161dc60() {
   return (neuron0x16175b0()*0.0109666);
}

double NNfunction_ss_dRdR::synapse0x161dca0() {
   return (neuron0x16178f0()*-0.180384);
}

double NNfunction_ss_dRdR::synapse0x161dce0() {
   return (neuron0x1617c30()*0.0131718);
}

double NNfunction_ss_dRdR::synapse0x161dd20() {
   return (neuron0x1617f70()*-0.0251769);
}

double NNfunction_ss_dRdR::synapse0x161dd60() {
   return (neuron0x16182b0()*-0.0351327);
}

double NNfunction_ss_dRdR::synapse0x161dda0() {
   return (neuron0x16185f0()*-0.0221711);
}

double NNfunction_ss_dRdR::synapse0x161dde0() {
   return (neuron0x1618930()*0.0710225);
}

double NNfunction_ss_dRdR::synapse0x161de20() {
   return (neuron0x1618c70()*0.088377);
}

double NNfunction_ss_dRdR::synapse0x161de60() {
   return (neuron0x1618fb0()*-0.0261771);
}

double NNfunction_ss_dRdR::synapse0x161dea0() {
   return (neuron0x16192f0()*-0.084952);
}

double NNfunction_ss_dRdR::synapse0x161dee0() {
   return (neuron0x1619630()*0.0471498);
}

double NNfunction_ss_dRdR::synapse0x161d970() {
   return (neuron0x1619970()*-0.043367);
}

double NNfunction_ss_dRdR::synapse0x161d9b0() {
   return (neuron0x1619ed0()*-0.000819169);
}

double NNfunction_ss_dRdR::synapse0x161e030() {
   return (neuron0x161a0f0()*0.0582134);
}

double NNfunction_ss_dRdR::synapse0x161e070() {
   return (neuron0x161a430()*0.0182606);
}

double NNfunction_ss_dRdR::synapse0x161e0b0() {
   return (neuron0x161a770()*-0.0343585);
}

double NNfunction_ss_dRdR::synapse0x161e0f0() {
   return (neuron0x161aab0()*-0.0330151);
}

double NNfunction_ss_dRdR::synapse0x161e130() {
   return (neuron0x161adf0()*-0.00705531);
}

double NNfunction_ss_dRdR::synapse0x161e170() {
   return (neuron0x161b130()*0.00589442);
}

double NNfunction_ss_dRdR::synapse0x161e4f0() {
   return (neuron0x1616570()*-0.0108028);
}

double NNfunction_ss_dRdR::synapse0x161e530() {
   return (neuron0x16168b0()*-0.118844);
}

double NNfunction_ss_dRdR::synapse0x161e570() {
   return (neuron0x1616bf0()*0.0478022);
}

double NNfunction_ss_dRdR::synapse0x161e5b0() {
   return (neuron0x1616f30()*0.785432);
}

double NNfunction_ss_dRdR::synapse0x161e5f0() {
   return (neuron0x1617270()*-0.333233);
}

double NNfunction_ss_dRdR::synapse0x161e630() {
   return (neuron0x16175b0()*0.234699);
}

double NNfunction_ss_dRdR::synapse0x161e670() {
   return (neuron0x16178f0()*-0.298343);
}

double NNfunction_ss_dRdR::synapse0x161e6b0() {
   return (neuron0x1617c30()*-0.13219);
}

double NNfunction_ss_dRdR::synapse0x161e6f0() {
   return (neuron0x1617f70()*-0.14256);
}

double NNfunction_ss_dRdR::synapse0x13d5e40() {
   return (neuron0x16182b0()*-0.112032);
}

double NNfunction_ss_dRdR::synapse0x13d5e80() {
   return (neuron0x16185f0()*0.0437332);
}

double NNfunction_ss_dRdR::synapse0x13d5ec0() {
   return (neuron0x1618930()*0.143209);
}

double NNfunction_ss_dRdR::synapse0x13d5f00() {
   return (neuron0x1618c70()*0.309348);
}

double NNfunction_ss_dRdR::synapse0x13d5f40() {
   return (neuron0x1618fb0()*-0.24379);
}

double NNfunction_ss_dRdR::synapse0x13d5f80() {
   return (neuron0x16192f0()*0.929706);
}

double NNfunction_ss_dRdR::synapse0x13d5fc0() {
   return (neuron0x1619630()*-0.0509082);
}

double NNfunction_ss_dRdR::synapse0x161e340() {
   return (neuron0x1619970()*0.0444549);
}

double NNfunction_ss_dRdR::synapse0x161e380() {
   return (neuron0x1619ed0()*-0.723379);
}

double NNfunction_ss_dRdR::synapse0x13d6110() {
   return (neuron0x161a0f0()*0.0417412);
}

double NNfunction_ss_dRdR::synapse0x13d6150() {
   return (neuron0x161a430()*0.239847);
}

double NNfunction_ss_dRdR::synapse0x13d6190() {
   return (neuron0x161a770()*-0.0577241);
}

double NNfunction_ss_dRdR::synapse0x13d61d0() {
   return (neuron0x161aab0()*-0.0315612);
}

double NNfunction_ss_dRdR::synapse0x13d6210() {
   return (neuron0x161adf0()*0.196117);
}

double NNfunction_ss_dRdR::synapse0x161ef40() {
   return (neuron0x161b130()*0.396384);
}

double NNfunction_ss_dRdR::synapse0x161f2c0() {
   return (neuron0x1616570()*0.192115);
}

double NNfunction_ss_dRdR::synapse0x161f300() {
   return (neuron0x16168b0()*0.217485);
}

double NNfunction_ss_dRdR::synapse0x161f340() {
   return (neuron0x1616bf0()*0.0353552);
}

double NNfunction_ss_dRdR::synapse0x161f380() {
   return (neuron0x1616f30()*0.356366);
}

double NNfunction_ss_dRdR::synapse0x161f3c0() {
   return (neuron0x1617270()*-0.227198);
}

double NNfunction_ss_dRdR::synapse0x161f400() {
   return (neuron0x16175b0()*0.620322);
}

double NNfunction_ss_dRdR::synapse0x161f440() {
   return (neuron0x16178f0()*0.0133289);
}

double NNfunction_ss_dRdR::synapse0x161f480() {
   return (neuron0x1617c30()*0.597061);
}

double NNfunction_ss_dRdR::synapse0x161f4c0() {
   return (neuron0x1617f70()*-0.573171);
}

double NNfunction_ss_dRdR::synapse0x161f500() {
   return (neuron0x16182b0()*0.652615);
}

double NNfunction_ss_dRdR::synapse0x161f540() {
   return (neuron0x16185f0()*-0.851397);
}

double NNfunction_ss_dRdR::synapse0x161f580() {
   return (neuron0x1618930()*0.0904073);
}

double NNfunction_ss_dRdR::synapse0x161f5c0() {
   return (neuron0x1618c70()*-0.0058921);
}

double NNfunction_ss_dRdR::synapse0x161f600() {
   return (neuron0x1618fb0()*0.573327);
}

double NNfunction_ss_dRdR::synapse0x161f640() {
   return (neuron0x16192f0()*-0.0740139);
}

double NNfunction_ss_dRdR::synapse0x161f680() {
   return (neuron0x1619630()*-0.186652);
}

double NNfunction_ss_dRdR::synapse0x161f110() {
   return (neuron0x1619970()*0.303566);
}

double NNfunction_ss_dRdR::synapse0x161f150() {
   return (neuron0x1619ed0()*0.823972);
}

double NNfunction_ss_dRdR::synapse0x161f7d0() {
   return (neuron0x161a0f0()*0.322395);
}

double NNfunction_ss_dRdR::synapse0x161f810() {
   return (neuron0x161a430()*0.539292);
}

double NNfunction_ss_dRdR::synapse0x161f850() {
   return (neuron0x161a770()*-0.274948);
}

double NNfunction_ss_dRdR::synapse0x161f890() {
   return (neuron0x161aab0()*0.0653112);
}

double NNfunction_ss_dRdR::synapse0x161f8d0() {
   return (neuron0x161adf0()*-0.335245);
}

double NNfunction_ss_dRdR::synapse0x161f910() {
   return (neuron0x161b130()*-0.113132);
}

double NNfunction_ss_dRdR::synapse0x161fc90() {
   return (neuron0x1616570()*-0.0409293);
}

double NNfunction_ss_dRdR::synapse0x161fcd0() {
   return (neuron0x16168b0()*-0.538688);
}

double NNfunction_ss_dRdR::synapse0x161fd10() {
   return (neuron0x1616bf0()*-0.00240354);
}

double NNfunction_ss_dRdR::synapse0x161fd50() {
   return (neuron0x1616f30()*-1.63969);
}

double NNfunction_ss_dRdR::synapse0x161fd90() {
   return (neuron0x1617270()*0.0931622);
}

double NNfunction_ss_dRdR::synapse0x161fdd0() {
   return (neuron0x16175b0()*-0.483879);
}

double NNfunction_ss_dRdR::synapse0x161fe10() {
   return (neuron0x16178f0()*0.0723561);
}

double NNfunction_ss_dRdR::synapse0x161fe50() {
   return (neuron0x1617c30()*-0.0116987);
}

double NNfunction_ss_dRdR::synapse0x161fe90() {
   return (neuron0x1617f70()*0.0484676);
}

double NNfunction_ss_dRdR::synapse0x161fed0() {
   return (neuron0x16182b0()*-0.218668);
}

double NNfunction_ss_dRdR::synapse0x161ff10() {
   return (neuron0x16185f0()*0.099329);
}

double NNfunction_ss_dRdR::synapse0x161ff50() {
   return (neuron0x1618930()*0.125176);
}

double NNfunction_ss_dRdR::synapse0x161ff90() {
   return (neuron0x1618c70()*0.0416381);
}

double NNfunction_ss_dRdR::synapse0x161ffd0() {
   return (neuron0x1618fb0()*0.0797365);
}

double NNfunction_ss_dRdR::synapse0x1620010() {
   return (neuron0x16192f0()*0.108788);
}

double NNfunction_ss_dRdR::synapse0x1620050() {
   return (neuron0x1619630()*0.214599);
}

double NNfunction_ss_dRdR::synapse0x161fae0() {
   return (neuron0x1619970()*-0.028795);
}

double NNfunction_ss_dRdR::synapse0x161fb20() {
   return (neuron0x1619ed0()*0.387889);
}

double NNfunction_ss_dRdR::synapse0x16201a0() {
   return (neuron0x161a0f0()*-0.146633);
}

double NNfunction_ss_dRdR::synapse0x16201e0() {
   return (neuron0x161a430()*-0.108725);
}

double NNfunction_ss_dRdR::synapse0x1620220() {
   return (neuron0x161a770()*-0.0047479);
}

double NNfunction_ss_dRdR::synapse0x1620260() {
   return (neuron0x161aab0()*-0.157872);
}

double NNfunction_ss_dRdR::synapse0x16202a0() {
   return (neuron0x161adf0()*0.120465);
}

double NNfunction_ss_dRdR::synapse0x16202e0() {
   return (neuron0x161b130()*-0.0298731);
}

double NNfunction_ss_dRdR::synapse0x1619dc0() {
   return (neuron0x1616570()*0.115768);
}

double NNfunction_ss_dRdR::synapse0x1619e00() {
   return (neuron0x16168b0()*0.0129478);
}

double NNfunction_ss_dRdR::synapse0x1619e40() {
   return (neuron0x1616bf0()*0.0355643);
}

double NNfunction_ss_dRdR::synapse0x1619e80() {
   return (neuron0x1616f30()*0.0156705);
}

double NNfunction_ss_dRdR::synapse0x1620870() {
   return (neuron0x1617270()*-0.0263384);
}

double NNfunction_ss_dRdR::synapse0x16208b0() {
   return (neuron0x16175b0()*-0.00530835);
}

double NNfunction_ss_dRdR::synapse0x16208f0() {
   return (neuron0x16178f0()*-0.0520243);
}

double NNfunction_ss_dRdR::synapse0x1620930() {
   return (neuron0x1617c30()*-0.0189464);
}

double NNfunction_ss_dRdR::synapse0x1620970() {
   return (neuron0x1617f70()*0.0204117);
}

double NNfunction_ss_dRdR::synapse0x16209b0() {
   return (neuron0x16182b0()*-0.142786);
}

double NNfunction_ss_dRdR::synapse0x16209f0() {
   return (neuron0x16185f0()*-0.0637519);
}

double NNfunction_ss_dRdR::synapse0x1620a30() {
   return (neuron0x1618930()*0.0250119);
}

double NNfunction_ss_dRdR::synapse0x1620a70() {
   return (neuron0x1618c70()*0.0499388);
}

double NNfunction_ss_dRdR::synapse0x1620ab0() {
   return (neuron0x1618fb0()*0.0286068);
}

double NNfunction_ss_dRdR::synapse0x1620af0() {
   return (neuron0x16192f0()*0.0632816);
}

double NNfunction_ss_dRdR::synapse0x1620b30() {
   return (neuron0x1619630()*0.0717082);
}

double NNfunction_ss_dRdR::synapse0x16204b0() {
   return (neuron0x1619970()*0.030575);
}

double NNfunction_ss_dRdR::synapse0x16204f0() {
   return (neuron0x1619ed0()*0.965509);
}

double NNfunction_ss_dRdR::synapse0x1620c80() {
   return (neuron0x161a0f0()*-0.00637408);
}

double NNfunction_ss_dRdR::synapse0x1620cc0() {
   return (neuron0x161a430()*0.0121386);
}

double NNfunction_ss_dRdR::synapse0x1620d00() {
   return (neuron0x161a770()*0.0240761);
}

double NNfunction_ss_dRdR::synapse0x1620d40() {
   return (neuron0x161aab0()*0.021783);
}

double NNfunction_ss_dRdR::synapse0x1620d80() {
   return (neuron0x161adf0()*-0.0174527);
}

double NNfunction_ss_dRdR::synapse0x1620dc0() {
   return (neuron0x161b130()*-0.01338);
}

double NNfunction_ss_dRdR::synapse0x1621140() {
   return (neuron0x1616570()*0.0419769);
}

double NNfunction_ss_dRdR::synapse0x1621180() {
   return (neuron0x16168b0()*0.338726);
}

double NNfunction_ss_dRdR::synapse0x16211c0() {
   return (neuron0x1616bf0()*0.18935);
}

double NNfunction_ss_dRdR::synapse0x1621200() {
   return (neuron0x1616f30()*-0.711442);
}

double NNfunction_ss_dRdR::synapse0x1621240() {
   return (neuron0x1617270()*0.359754);
}

double NNfunction_ss_dRdR::synapse0x1621280() {
   return (neuron0x16175b0()*-0.415307);
}

double NNfunction_ss_dRdR::synapse0x16212c0() {
   return (neuron0x16178f0()*-0.100314);
}

double NNfunction_ss_dRdR::synapse0x1621300() {
   return (neuron0x1617c30()*-0.0864487);
}

double NNfunction_ss_dRdR::synapse0x1621340() {
   return (neuron0x1617f70()*0.0718798);
}

double NNfunction_ss_dRdR::synapse0x1621380() {
   return (neuron0x16182b0()*0.321265);
}

double NNfunction_ss_dRdR::synapse0x16213c0() {
   return (neuron0x16185f0()*-0.0801205);
}

double NNfunction_ss_dRdR::synapse0x1621400() {
   return (neuron0x1618930()*-0.605707);
}

double NNfunction_ss_dRdR::synapse0x1621440() {
   return (neuron0x1618c70()*-0.469358);
}

double NNfunction_ss_dRdR::synapse0x1621480() {
   return (neuron0x1618fb0()*0.142938);
}

double NNfunction_ss_dRdR::synapse0x16214c0() {
   return (neuron0x16192f0()*-0.456137);
}

double NNfunction_ss_dRdR::synapse0x1621500() {
   return (neuron0x1619630()*-0.414593);
}

double NNfunction_ss_dRdR::synapse0x1620f90() {
   return (neuron0x1619970()*0.446581);
}

double NNfunction_ss_dRdR::synapse0x1620fd0() {
   return (neuron0x1619ed0()*-0.261374);
}

double NNfunction_ss_dRdR::synapse0x1621650() {
   return (neuron0x161a0f0()*0.00604068);
}

double NNfunction_ss_dRdR::synapse0x1621690() {
   return (neuron0x161a430()*0.125651);
}

double NNfunction_ss_dRdR::synapse0x16216d0() {
   return (neuron0x161a770()*0.165107);
}

double NNfunction_ss_dRdR::synapse0x1621710() {
   return (neuron0x161aab0()*0.247975);
}

double NNfunction_ss_dRdR::synapse0x1621750() {
   return (neuron0x161adf0()*0.627597);
}

double NNfunction_ss_dRdR::synapse0x1621790() {
   return (neuron0x161b130()*-0.380905);
}

double NNfunction_ss_dRdR::synapse0x1621b10() {
   return (neuron0x1616570()*0.171631);
}

double NNfunction_ss_dRdR::synapse0x1621b50() {
   return (neuron0x16168b0()*0.0807852);
}

double NNfunction_ss_dRdR::synapse0x1621b90() {
   return (neuron0x1616bf0()*0.108893);
}

double NNfunction_ss_dRdR::synapse0x1621bd0() {
   return (neuron0x1616f30()*-0.527032);
}

double NNfunction_ss_dRdR::synapse0x1621c10() {
   return (neuron0x1617270()*0.166851);
}

double NNfunction_ss_dRdR::synapse0x1621c50() {
   return (neuron0x16175b0()*0.3787);
}

double NNfunction_ss_dRdR::synapse0x1621c90() {
   return (neuron0x16178f0()*0.420673);
}

double NNfunction_ss_dRdR::synapse0x1621cd0() {
   return (neuron0x1617c30()*0.104114);
}

double NNfunction_ss_dRdR::synapse0x1621d10() {
   return (neuron0x1617f70()*-0.130931);
}

double NNfunction_ss_dRdR::synapse0x1621d50() {
   return (neuron0x16182b0()*-0.356234);
}

double NNfunction_ss_dRdR::synapse0x1621d90() {
   return (neuron0x16185f0()*-0.0676827);
}

double NNfunction_ss_dRdR::synapse0x1621dd0() {
   return (neuron0x1618930()*-0.155034);
}

double NNfunction_ss_dRdR::synapse0x1621e10() {
   return (neuron0x1618c70()*-0.330959);
}

double NNfunction_ss_dRdR::synapse0x1621e50() {
   return (neuron0x1618fb0()*0.481335);
}

double NNfunction_ss_dRdR::synapse0x1621e90() {
   return (neuron0x16192f0()*0.6178);
}

double NNfunction_ss_dRdR::synapse0x1621ed0() {
   return (neuron0x1619630()*-1.55342);
}

double NNfunction_ss_dRdR::synapse0x1621960() {
   return (neuron0x1619970()*0.435892);
}

double NNfunction_ss_dRdR::synapse0x16219a0() {
   return (neuron0x1619ed0()*-0.0668842);
}

double NNfunction_ss_dRdR::synapse0x161e730() {
   return (neuron0x161a0f0()*-0.120182);
}

double NNfunction_ss_dRdR::synapse0x161e770() {
   return (neuron0x161a430()*-0.292461);
}

double NNfunction_ss_dRdR::synapse0x161e7b0() {
   return (neuron0x161a770()*0.00541931);
}

double NNfunction_ss_dRdR::synapse0x161e7f0() {
   return (neuron0x161aab0()*-0.336442);
}

double NNfunction_ss_dRdR::synapse0x161e830() {
   return (neuron0x161adf0()*-0.367239);
}

double NNfunction_ss_dRdR::synapse0x161e870() {
   return (neuron0x161b130()*-0.0557831);
}

double NNfunction_ss_dRdR::synapse0x161ebf0() {
   return (neuron0x1616570()*-0.177944);
}

double NNfunction_ss_dRdR::synapse0x161ec30() {
   return (neuron0x16168b0()*-0.290923);
}

double NNfunction_ss_dRdR::synapse0x161ec70() {
   return (neuron0x1616bf0()*-0.213606);
}

double NNfunction_ss_dRdR::synapse0x161ecb0() {
   return (neuron0x1616f30()*0.0478676);
}

double NNfunction_ss_dRdR::synapse0x161ecf0() {
   return (neuron0x1617270()*-0.250113);
}

double NNfunction_ss_dRdR::synapse0x161ed30() {
   return (neuron0x16175b0()*-0.140983);
}

double NNfunction_ss_dRdR::synapse0x161ed70() {
   return (neuron0x16178f0()*0.167376);
}

double NNfunction_ss_dRdR::synapse0x161edb0() {
   return (neuron0x1617c30()*-0.0529811);
}

double NNfunction_ss_dRdR::synapse0x161edf0() {
   return (neuron0x1617f70()*-0.259607);
}

double NNfunction_ss_dRdR::synapse0x161ee30() {
   return (neuron0x16182b0()*-0.412153);
}

double NNfunction_ss_dRdR::synapse0x161ee70() {
   return (neuron0x16185f0()*-0.0189741);
}

double NNfunction_ss_dRdR::synapse0x161eeb0() {
   return (neuron0x1618930()*0.0384837);
}

double NNfunction_ss_dRdR::synapse0x161eef0() {
   return (neuron0x1618c70()*0.167476);
}

double NNfunction_ss_dRdR::synapse0x1623030() {
   return (neuron0x1618fb0()*-0.304647);
}

double NNfunction_ss_dRdR::synapse0x1623070() {
   return (neuron0x16192f0()*0.28976);
}

double NNfunction_ss_dRdR::synapse0x16230b0() {
   return (neuron0x1619630()*-0.219346);
}

double NNfunction_ss_dRdR::synapse0x161ea40() {
   return (neuron0x1619970()*-0.0124774);
}

double NNfunction_ss_dRdR::synapse0x161ea80() {
   return (neuron0x1619ed0()*-0.293552);
}

double NNfunction_ss_dRdR::synapse0x1623200() {
   return (neuron0x161a0f0()*-0.27454);
}

double NNfunction_ss_dRdR::synapse0x1623240() {
   return (neuron0x161a430()*0.638188);
}

double NNfunction_ss_dRdR::synapse0x1623280() {
   return (neuron0x161a770()*-0.270516);
}

double NNfunction_ss_dRdR::synapse0x16232c0() {
   return (neuron0x161aab0()*-0.182177);
}

double NNfunction_ss_dRdR::synapse0x1623300() {
   return (neuron0x161adf0()*0.424052);
}

double NNfunction_ss_dRdR::synapse0x1623340() {
   return (neuron0x161b130()*0.069823);
}

double NNfunction_ss_dRdR::synapse0x16236c0() {
   return (neuron0x1616570()*0.412352);
}

double NNfunction_ss_dRdR::synapse0x1623700() {
   return (neuron0x16168b0()*0.959845);
}

double NNfunction_ss_dRdR::synapse0x1623740() {
   return (neuron0x1616bf0()*0.0379038);
}

double NNfunction_ss_dRdR::synapse0x1623780() {
   return (neuron0x1616f30()*0.339379);
}

double NNfunction_ss_dRdR::synapse0x16237c0() {
   return (neuron0x1617270()*-0.352553);
}

double NNfunction_ss_dRdR::synapse0x1623800() {
   return (neuron0x16175b0()*-0.293484);
}

double NNfunction_ss_dRdR::synapse0x1623840() {
   return (neuron0x16178f0()*0.43504);
}

double NNfunction_ss_dRdR::synapse0x1623880() {
   return (neuron0x1617c30()*0.36733);
}

double NNfunction_ss_dRdR::synapse0x16238c0() {
   return (neuron0x1617f70()*-0.203713);
}

double NNfunction_ss_dRdR::synapse0x1623900() {
   return (neuron0x16182b0()*-0.507123);
}

double NNfunction_ss_dRdR::synapse0x1623940() {
   return (neuron0x16185f0()*0.123279);
}

double NNfunction_ss_dRdR::synapse0x1623980() {
   return (neuron0x1618930()*-0.0217802);
}

double NNfunction_ss_dRdR::synapse0x16239c0() {
   return (neuron0x1618c70()*-0.354437);
}

double NNfunction_ss_dRdR::synapse0x1623a00() {
   return (neuron0x1618fb0()*0.547345);
}

double NNfunction_ss_dRdR::synapse0x1623a40() {
   return (neuron0x16192f0()*0.0996009);
}

double NNfunction_ss_dRdR::synapse0x1623a80() {
   return (neuron0x1619630()*0.0868747);
}

double NNfunction_ss_dRdR::synapse0x1623510() {
   return (neuron0x1619970()*0.645843);
}

double NNfunction_ss_dRdR::synapse0x1623550() {
   return (neuron0x1619ed0()*-0.514513);
}

double NNfunction_ss_dRdR::synapse0x1623bd0() {
   return (neuron0x161a0f0()*-0.466132);
}

double NNfunction_ss_dRdR::synapse0x1623c10() {
   return (neuron0x161a430()*-0.261579);
}

double NNfunction_ss_dRdR::synapse0x1623c50() {
   return (neuron0x161a770()*-0.123813);
}

double NNfunction_ss_dRdR::synapse0x1623c90() {
   return (neuron0x161aab0()*-0.0739429);
}

double NNfunction_ss_dRdR::synapse0x1623cd0() {
   return (neuron0x161adf0()*-0.288741);
}

double NNfunction_ss_dRdR::synapse0x1623d10() {
   return (neuron0x161b130()*-0.169717);
}

double NNfunction_ss_dRdR::synapse0x1624090() {
   return (neuron0x1616570()*0.0597099);
}

double NNfunction_ss_dRdR::synapse0x16240d0() {
   return (neuron0x16168b0()*0.00241988);
}

double NNfunction_ss_dRdR::synapse0x1624110() {
   return (neuron0x1616bf0()*-0.0416106);
}

double NNfunction_ss_dRdR::synapse0x1624150() {
   return (neuron0x1616f30()*-6.8764);
}

double NNfunction_ss_dRdR::synapse0x1624190() {
   return (neuron0x1617270()*0.0139993);
}

double NNfunction_ss_dRdR::synapse0x16241d0() {
   return (neuron0x16175b0()*-0.00991289);
}

double NNfunction_ss_dRdR::synapse0x1624210() {
   return (neuron0x16178f0()*-0.0423431);
}

double NNfunction_ss_dRdR::synapse0x1624250() {
   return (neuron0x1617c30()*-0.0409);
}

double NNfunction_ss_dRdR::synapse0x1624290() {
   return (neuron0x1617f70()*0.0159133);
}

double NNfunction_ss_dRdR::synapse0x16242d0() {
   return (neuron0x16182b0()*-0.00165376);
}

double NNfunction_ss_dRdR::synapse0x1624310() {
   return (neuron0x16185f0()*0.010717);
}

double NNfunction_ss_dRdR::synapse0x1624350() {
   return (neuron0x1618930()*-0.147135);
}

double NNfunction_ss_dRdR::synapse0x1624390() {
   return (neuron0x1618c70()*-0.144935);
}

double NNfunction_ss_dRdR::synapse0x16243d0() {
   return (neuron0x1618fb0()*0.0317272);
}

double NNfunction_ss_dRdR::synapse0x1624410() {
   return (neuron0x16192f0()*-0.0861771);
}

double NNfunction_ss_dRdR::synapse0x1624450() {
   return (neuron0x1619630()*-0.102273);
}

double NNfunction_ss_dRdR::synapse0x1623ee0() {
   return (neuron0x1619970()*0.0261481);
}

double NNfunction_ss_dRdR::synapse0x1623f20() {
   return (neuron0x1619ed0()*1.36162);
}

double NNfunction_ss_dRdR::synapse0x16245a0() {
   return (neuron0x161a0f0()*-0.0857023);
}

double NNfunction_ss_dRdR::synapse0x16245e0() {
   return (neuron0x161a430()*-0.00327476);
}

double NNfunction_ss_dRdR::synapse0x1624620() {
   return (neuron0x161a770()*0.00247082);
}

double NNfunction_ss_dRdR::synapse0x1624660() {
   return (neuron0x161aab0()*0.0107541);
}

double NNfunction_ss_dRdR::synapse0x16246a0() {
   return (neuron0x161adf0()*0.0402163);
}

double NNfunction_ss_dRdR::synapse0x16246e0() {
   return (neuron0x161b130()*-0.0685184);
}

double NNfunction_ss_dRdR::synapse0x1624a60() {
   return (neuron0x1616570()*-0.248411);
}

double NNfunction_ss_dRdR::synapse0x1624aa0() {
   return (neuron0x16168b0()*0.00699437);
}

double NNfunction_ss_dRdR::synapse0x1624ae0() {
   return (neuron0x1616bf0()*-0.129957);
}

double NNfunction_ss_dRdR::synapse0x1624b20() {
   return (neuron0x1616f30()*-0.187941);
}

double NNfunction_ss_dRdR::synapse0x1624b60() {
   return (neuron0x1617270()*-0.420203);
}

double NNfunction_ss_dRdR::synapse0x1624ba0() {
   return (neuron0x16175b0()*-0.15782);
}

double NNfunction_ss_dRdR::synapse0x1624be0() {
   return (neuron0x16178f0()*-0.0493712);
}

double NNfunction_ss_dRdR::synapse0x1624c20() {
   return (neuron0x1617c30()*1.29745);
}

double NNfunction_ss_dRdR::synapse0x1624c60() {
   return (neuron0x1617f70()*0.072952);
}

double NNfunction_ss_dRdR::synapse0x1624ca0() {
   return (neuron0x16182b0()*0.318816);
}

double NNfunction_ss_dRdR::synapse0x1624ce0() {
   return (neuron0x16185f0()*-0.31223);
}

double NNfunction_ss_dRdR::synapse0x1624d20() {
   return (neuron0x1618930()*0.614541);
}

double NNfunction_ss_dRdR::synapse0x1624d60() {
   return (neuron0x1618c70()*-0.932821);
}

double NNfunction_ss_dRdR::synapse0x1624da0() {
   return (neuron0x1618fb0()*-0.199709);
}

double NNfunction_ss_dRdR::synapse0x1624de0() {
   return (neuron0x16192f0()*0.654515);
}

double NNfunction_ss_dRdR::synapse0x1624e20() {
   return (neuron0x1619630()*-0.217687);
}

double NNfunction_ss_dRdR::synapse0x16248b0() {
   return (neuron0x1619970()*0.330256);
}

double NNfunction_ss_dRdR::synapse0x16248f0() {
   return (neuron0x1619ed0()*-0.0560307);
}

double NNfunction_ss_dRdR::synapse0x1624f70() {
   return (neuron0x161a0f0()*0.202269);
}

double NNfunction_ss_dRdR::synapse0x1624fb0() {
   return (neuron0x161a430()*0.0555176);
}

double NNfunction_ss_dRdR::synapse0x1624ff0() {
   return (neuron0x161a770()*0.39172);
}

double NNfunction_ss_dRdR::synapse0x1625030() {
   return (neuron0x161aab0()*0.264836);
}

double NNfunction_ss_dRdR::synapse0x1625070() {
   return (neuron0x161adf0()*-0.131919);
}

double NNfunction_ss_dRdR::synapse0x16250b0() {
   return (neuron0x161b130()*0.387806);
}

double NNfunction_ss_dRdR::synapse0x1625430() {
   return (neuron0x1616570()*-0.239065);
}

double NNfunction_ss_dRdR::synapse0x1616790() {
   return (neuron0x16168b0()*-0.196572);
}

double NNfunction_ss_dRdR::synapse0x16167d0() {
   return (neuron0x1616bf0()*-0.0953261);
}

double NNfunction_ss_dRdR::synapse0x1616ad0() {
   return (neuron0x1616f30()*0.0779036);
}

double NNfunction_ss_dRdR::synapse0x1616b10() {
   return (neuron0x1617270()*-0.200601);
}

double NNfunction_ss_dRdR::synapse0x1616e10() {
   return (neuron0x16175b0()*-0.0195599);
}

double NNfunction_ss_dRdR::synapse0x1616e50() {
   return (neuron0x16178f0()*0.131929);
}

double NNfunction_ss_dRdR::synapse0x1617150() {
   return (neuron0x1617c30()*0.649835);
}

double NNfunction_ss_dRdR::synapse0x1617190() {
   return (neuron0x1617f70()*-0.518396);
}

double NNfunction_ss_dRdR::synapse0x1617490() {
   return (neuron0x16182b0()*-0.415571);
}

double NNfunction_ss_dRdR::synapse0x16174d0() {
   return (neuron0x16185f0()*-0.0655486);
}

double NNfunction_ss_dRdR::synapse0x16177d0() {
   return (neuron0x1618930()*0.441135);
}

double NNfunction_ss_dRdR::synapse0x1617810() {
   return (neuron0x1618c70()*0.217459);
}

double NNfunction_ss_dRdR::synapse0x1617b10() {
   return (neuron0x1618fb0()*0.235757);
}

double NNfunction_ss_dRdR::synapse0x1617b50() {
   return (neuron0x16192f0()*-0.0461774);
}

double NNfunction_ss_dRdR::synapse0x1617e50() {
   return (neuron0x1619630()*-0.0134523);
}

double NNfunction_ss_dRdR::synapse0x1617e90() {
   return (neuron0x1619970()*0.0891261);
}

double NNfunction_ss_dRdR::synapse0x1618190() {
   return (neuron0x1619ed0()*0.873852);
}

double NNfunction_ss_dRdR::synapse0x16181d0() {
   return (neuron0x161a0f0()*0.194355);
}

double NNfunction_ss_dRdR::synapse0x16184d0() {
   return (neuron0x161a430()*0.0977285);
}

double NNfunction_ss_dRdR::synapse0x1618510() {
   return (neuron0x161a770()*-0.210906);
}

double NNfunction_ss_dRdR::synapse0x1618810() {
   return (neuron0x161aab0()*-0.0195117);
}

double NNfunction_ss_dRdR::synapse0x1618850() {
   return (neuron0x161adf0()*-0.0504954);
}

double NNfunction_ss_dRdR::synapse0x1618b50() {
   return (neuron0x161b130()*0.46392);
}

double NNfunction_ss_dRdR::synapse0x1618b90() {
   return (neuron0x1616570()*0.0194131);
}

double NNfunction_ss_dRdR::synapse0x1619850() {
   return (neuron0x16168b0()*-0.00367405);
}

double NNfunction_ss_dRdR::synapse0x1619890() {
   return (neuron0x1616bf0()*0.0071725);
}

double NNfunction_ss_dRdR::synapse0x1625280() {
   return (neuron0x1616f30()*-0.324586);
}

double NNfunction_ss_dRdR::synapse0x16252c0() {
   return (neuron0x1617270()*0.0016412);
}

double NNfunction_ss_dRdR::synapse0x1619b90() {
   return (neuron0x16175b0()*-0.0213279);
}

double NNfunction_ss_dRdR::synapse0x1619bd0() {
   return (neuron0x16178f0()*0.0136876);
}

double NNfunction_ss_dRdR::synapse0x13c7b60() {
   return (neuron0x1617c30()*0.0136843);
}

double NNfunction_ss_dRdR::synapse0x13c7ba0() {
   return (neuron0x1617f70()*0.0490727);
}

double NNfunction_ss_dRdR::synapse0x161a310() {
   return (neuron0x16182b0()*-0.0203244);
}

double NNfunction_ss_dRdR::synapse0x161a350() {
   return (neuron0x16185f0()*0.0603783);
}

double NNfunction_ss_dRdR::synapse0x161a650() {
   return (neuron0x1618930()*-0.0115026);
}

double NNfunction_ss_dRdR::synapse0x161a690() {
   return (neuron0x1618c70()*-0.022447);
}

double NNfunction_ss_dRdR::synapse0x161a990() {
   return (neuron0x1618fb0()*0.0189561);
}

double NNfunction_ss_dRdR::synapse0x161a9d0() {
   return (neuron0x16192f0()*0.0158339);
}

double NNfunction_ss_dRdR::synapse0x161acd0() {
   return (neuron0x1619630()*-0.0279);
}

double NNfunction_ss_dRdR::synapse0x161ad10() {
   return (neuron0x1619970()*-0.00956353);
}

double NNfunction_ss_dRdR::synapse0x161b010() {
   return (neuron0x1619ed0()*-0.884202);
}

double NNfunction_ss_dRdR::synapse0x161b050() {
   return (neuron0x161a0f0()*-0.0460037);
}

double NNfunction_ss_dRdR::synapse0x161b350() {
   return (neuron0x161a430()*-0.00501819);
}

double NNfunction_ss_dRdR::synapse0x161b390() {
   return (neuron0x161a770()*0.00941276);
}

double NNfunction_ss_dRdR::synapse0x1618e90() {
   return (neuron0x161aab0()*0.00931309);
}

double NNfunction_ss_dRdR::synapse0x1618ed0() {
   return (neuron0x161adf0()*-0.013883);
}

double NNfunction_ss_dRdR::synapse0x16271a0() {
   return (neuron0x161b130()*0.00793177);
}

double NNfunction_ss_dRdR::synapse0x1627520() {
   return (neuron0x1616570()*0.809361);
}

double NNfunction_ss_dRdR::synapse0x1627560() {
   return (neuron0x16168b0()*0.0483336);
}

double NNfunction_ss_dRdR::synapse0x16275a0() {
   return (neuron0x1616bf0()*0.0271517);
}

double NNfunction_ss_dRdR::synapse0x16275e0() {
   return (neuron0x1616f30()*-0.026322);
}

double NNfunction_ss_dRdR::synapse0x1627620() {
   return (neuron0x1617270()*-0.0798193);
}

double NNfunction_ss_dRdR::synapse0x1627660() {
   return (neuron0x16175b0()*0.347631);
}

double NNfunction_ss_dRdR::synapse0x16276a0() {
   return (neuron0x16178f0()*-0.658694);
}

double NNfunction_ss_dRdR::synapse0x16276e0() {
   return (neuron0x1617c30()*0.109491);
}

double NNfunction_ss_dRdR::synapse0x1627720() {
   return (neuron0x1617f70()*0.422246);
}

double NNfunction_ss_dRdR::synapse0x1627760() {
   return (neuron0x16182b0()*0.256107);
}

double NNfunction_ss_dRdR::synapse0x16277a0() {
   return (neuron0x16185f0()*0.583149);
}

double NNfunction_ss_dRdR::synapse0x16277e0() {
   return (neuron0x1618930()*-0.0810553);
}

double NNfunction_ss_dRdR::synapse0x1627820() {
   return (neuron0x1618c70()*-0.187529);
}

double NNfunction_ss_dRdR::synapse0x1627860() {
   return (neuron0x1618fb0()*0.562412);
}

double NNfunction_ss_dRdR::synapse0x16278a0() {
   return (neuron0x16192f0()*-0.107391);
}

double NNfunction_ss_dRdR::synapse0x16278e0() {
   return (neuron0x1619630()*0.328294);
}

double NNfunction_ss_dRdR::synapse0x1627370() {
   return (neuron0x1619970()*0.293516);
}

double NNfunction_ss_dRdR::synapse0x16273b0() {
   return (neuron0x1619ed0()*0.244096);
}

double NNfunction_ss_dRdR::synapse0x1627a30() {
   return (neuron0x161a0f0()*-0.0159246);
}

double NNfunction_ss_dRdR::synapse0x1627a70() {
   return (neuron0x161a430()*-0.0855491);
}

double NNfunction_ss_dRdR::synapse0x1627ab0() {
   return (neuron0x161a770()*0.588874);
}

double NNfunction_ss_dRdR::synapse0x1627af0() {
   return (neuron0x161aab0()*0.203411);
}

double NNfunction_ss_dRdR::synapse0x1627b30() {
   return (neuron0x161adf0()*0.503038);
}

double NNfunction_ss_dRdR::synapse0x1627b70() {
   return (neuron0x161b130()*-0.231721);
}

double NNfunction_ss_dRdR::synapse0x1627ef0() {
   return (neuron0x1616570()*-0.0283617);
}

double NNfunction_ss_dRdR::synapse0x1627f30() {
   return (neuron0x16168b0()*0.0208163);
}

double NNfunction_ss_dRdR::synapse0x1627f70() {
   return (neuron0x1616bf0()*-0.00188204);
}

double NNfunction_ss_dRdR::synapse0x1627fb0() {
   return (neuron0x1616f30()*0.102216);
}

double NNfunction_ss_dRdR::synapse0x1627ff0() {
   return (neuron0x1617270()*0.0165516);
}

double NNfunction_ss_dRdR::synapse0x1628030() {
   return (neuron0x16175b0()*0.0151433);
}

double NNfunction_ss_dRdR::synapse0x1628070() {
   return (neuron0x16178f0()*0.0327499);
}

double NNfunction_ss_dRdR::synapse0x16280b0() {
   return (neuron0x1617c30()*0.00575695);
}

double NNfunction_ss_dRdR::synapse0x16280f0() {
   return (neuron0x1617f70()*-0.116905);
}

double NNfunction_ss_dRdR::synapse0x1628130() {
   return (neuron0x16182b0()*0.0043295);
}

double NNfunction_ss_dRdR::synapse0x1628170() {
   return (neuron0x16185f0()*0.140526);
}

double NNfunction_ss_dRdR::synapse0x16281b0() {
   return (neuron0x1618930()*0.0174768);
}

double NNfunction_ss_dRdR::synapse0x16281f0() {
   return (neuron0x1618c70()*0.00425292);
}

double NNfunction_ss_dRdR::synapse0x1628230() {
   return (neuron0x1618fb0()*0.0103043);
}

double NNfunction_ss_dRdR::synapse0x1628270() {
   return (neuron0x16192f0()*0.0377406);
}

double NNfunction_ss_dRdR::synapse0x16282b0() {
   return (neuron0x1619630()*0.000304025);
}

double NNfunction_ss_dRdR::synapse0x1627d40() {
   return (neuron0x1619970()*-0.00115705);
}

double NNfunction_ss_dRdR::synapse0x1627d80() {
   return (neuron0x1619ed0()*0.714148);
}

double NNfunction_ss_dRdR::synapse0x1628400() {
   return (neuron0x161a0f0()*-0.0406828);
}

double NNfunction_ss_dRdR::synapse0x1628440() {
   return (neuron0x161a430()*-0.0136881);
}

double NNfunction_ss_dRdR::synapse0x1628480() {
   return (neuron0x161a770()*-0.0134775);
}

double NNfunction_ss_dRdR::synapse0x16284c0() {
   return (neuron0x161aab0()*0.00254645);
}

double NNfunction_ss_dRdR::synapse0x1628500() {
   return (neuron0x161adf0()*-0.00887918);
}

double NNfunction_ss_dRdR::synapse0x1628540() {
   return (neuron0x161b130()*0.0203754);
}

double NNfunction_ss_dRdR::synapse0x16288c0() {
   return (neuron0x1616570()*0.0462416);
}

double NNfunction_ss_dRdR::synapse0x1628900() {
   return (neuron0x16168b0()*0.644343);
}

double NNfunction_ss_dRdR::synapse0x1628940() {
   return (neuron0x1616bf0()*0.111821);
}

double NNfunction_ss_dRdR::synapse0x1628980() {
   return (neuron0x1616f30()*0.324765);
}

double NNfunction_ss_dRdR::synapse0x16289c0() {
   return (neuron0x1617270()*-0.699229);
}

double NNfunction_ss_dRdR::synapse0x1628a00() {
   return (neuron0x16175b0()*-0.897558);
}

double NNfunction_ss_dRdR::synapse0x1628a40() {
   return (neuron0x16178f0()*-0.537443);
}

double NNfunction_ss_dRdR::synapse0x1628a80() {
   return (neuron0x1617c30()*-0.415704);
}

double NNfunction_ss_dRdR::synapse0x1628ac0() {
   return (neuron0x1617f70()*0.0710204);
}

double NNfunction_ss_dRdR::synapse0x1628b00() {
   return (neuron0x16182b0()*-0.489197);
}

double NNfunction_ss_dRdR::synapse0x1628b40() {
   return (neuron0x16185f0()*-0.029932);
}

double NNfunction_ss_dRdR::synapse0x1628b80() {
   return (neuron0x1618930()*0.0332995);
}

double NNfunction_ss_dRdR::synapse0x1628bc0() {
   return (neuron0x1618c70()*-0.349985);
}

double NNfunction_ss_dRdR::synapse0x1628c00() {
   return (neuron0x1618fb0()*0.68698);
}

double NNfunction_ss_dRdR::synapse0x1628c40() {
   return (neuron0x16192f0()*0.185096);
}

double NNfunction_ss_dRdR::synapse0x1628c80() {
   return (neuron0x1619630()*-0.526769);
}

double NNfunction_ss_dRdR::synapse0x1628710() {
   return (neuron0x1619970()*-0.31594);
}

double NNfunction_ss_dRdR::synapse0x1628750() {
   return (neuron0x1619ed0()*0.00451329);
}

double NNfunction_ss_dRdR::synapse0x1628dd0() {
   return (neuron0x161a0f0()*-0.305955);
}

double NNfunction_ss_dRdR::synapse0x1628e10() {
   return (neuron0x161a430()*0.119773);
}

double NNfunction_ss_dRdR::synapse0x1628e50() {
   return (neuron0x161a770()*0.346732);
}

double NNfunction_ss_dRdR::synapse0x1628e90() {
   return (neuron0x161aab0()*0.128674);
}

double NNfunction_ss_dRdR::synapse0x1628ed0() {
   return (neuron0x161adf0()*-0.180184);
}

double NNfunction_ss_dRdR::synapse0x1628f10() {
   return (neuron0x161b130()*0.317117);
}

double NNfunction_ss_dRdR::synapse0x1629290() {
   return (neuron0x1616570()*0.459471);
}

double NNfunction_ss_dRdR::synapse0x16292d0() {
   return (neuron0x16168b0()*-0.0300471);
}

double NNfunction_ss_dRdR::synapse0x1629310() {
   return (neuron0x1616bf0()*-0.135193);
}

double NNfunction_ss_dRdR::synapse0x1629350() {
   return (neuron0x1616f30()*0.466138);
}

double NNfunction_ss_dRdR::synapse0x1629390() {
   return (neuron0x1617270()*-0.119939);
}

double NNfunction_ss_dRdR::synapse0x16293d0() {
   return (neuron0x16175b0()*-0.45788);
}

double NNfunction_ss_dRdR::synapse0x1629410() {
   return (neuron0x16178f0()*1.06911);
}

double NNfunction_ss_dRdR::synapse0x1629450() {
   return (neuron0x1617c30()*-0.0508268);
}

double NNfunction_ss_dRdR::synapse0x1629490() {
   return (neuron0x1617f70()*0.0750967);
}

double NNfunction_ss_dRdR::synapse0x16294d0() {
   return (neuron0x16182b0()*0.25963);
}

double NNfunction_ss_dRdR::synapse0x1629510() {
   return (neuron0x16185f0()*0.563536);
}

double NNfunction_ss_dRdR::synapse0x1629550() {
   return (neuron0x1618930()*0.210669);
}

double NNfunction_ss_dRdR::synapse0x1629590() {
   return (neuron0x1618c70()*0.311907);
}

double NNfunction_ss_dRdR::synapse0x16295d0() {
   return (neuron0x1618fb0()*-0.446488);
}

double NNfunction_ss_dRdR::synapse0x1629610() {
   return (neuron0x16192f0()*-0.486724);
}

double NNfunction_ss_dRdR::synapse0x1629650() {
   return (neuron0x1619630()*0.309659);
}

double NNfunction_ss_dRdR::synapse0x16290e0() {
   return (neuron0x1619970()*0.124254);
}

double NNfunction_ss_dRdR::synapse0x1629120() {
   return (neuron0x1619ed0()*0.403796);
}

double NNfunction_ss_dRdR::synapse0x16297a0() {
   return (neuron0x161a0f0()*0.20548);
}

double NNfunction_ss_dRdR::synapse0x16297e0() {
   return (neuron0x161a430()*0.552203);
}

double NNfunction_ss_dRdR::synapse0x1629820() {
   return (neuron0x161a770()*-0.339984);
}

double NNfunction_ss_dRdR::synapse0x1629860() {
   return (neuron0x161aab0()*0.443875);
}

double NNfunction_ss_dRdR::synapse0x16298a0() {
   return (neuron0x161adf0()*-0.37985);
}

double NNfunction_ss_dRdR::synapse0x16298e0() {
   return (neuron0x161b130()*0.247503);
}

double NNfunction_ss_dRdR::synapse0x1629c60() {
   return (neuron0x1616570()*-0.0983363);
}

double NNfunction_ss_dRdR::synapse0x1629ca0() {
   return (neuron0x16168b0()*-0.0499669);
}

double NNfunction_ss_dRdR::synapse0x1629ce0() {
   return (neuron0x1616bf0()*0.320445);
}

double NNfunction_ss_dRdR::synapse0x1629d20() {
   return (neuron0x1616f30()*-1.15036);
}

double NNfunction_ss_dRdR::synapse0x1629d60() {
   return (neuron0x1617270()*0.0529295);
}

double NNfunction_ss_dRdR::synapse0x1629da0() {
   return (neuron0x16175b0()*-0.271489);
}

double NNfunction_ss_dRdR::synapse0x1629de0() {
   return (neuron0x16178f0()*0.561528);
}

double NNfunction_ss_dRdR::synapse0x1629e20() {
   return (neuron0x1617c30()*1.01349);
}

double NNfunction_ss_dRdR::synapse0x1629e60() {
   return (neuron0x1617f70()*-0.224732);
}

double NNfunction_ss_dRdR::synapse0x1622020() {
   return (neuron0x16182b0()*0.0908258);
}

double NNfunction_ss_dRdR::synapse0x1622060() {
   return (neuron0x16185f0()*-0.413234);
}

double NNfunction_ss_dRdR::synapse0x16220a0() {
   return (neuron0x1618930()*0.427302);
}

double NNfunction_ss_dRdR::synapse0x16220e0() {
   return (neuron0x1618c70()*0.31621);
}

double NNfunction_ss_dRdR::synapse0x1622120() {
   return (neuron0x1618fb0()*0.098329);
}

double NNfunction_ss_dRdR::synapse0x1622160() {
   return (neuron0x16192f0()*-0.181444);
}

double NNfunction_ss_dRdR::synapse0x16221a0() {
   return (neuron0x1619630()*0.250773);
}

double NNfunction_ss_dRdR::synapse0x1629ab0() {
   return (neuron0x1619970()*-0.268706);
}

double NNfunction_ss_dRdR::synapse0x1629af0() {
   return (neuron0x1619ed0()*-0.0424372);
}

double NNfunction_ss_dRdR::synapse0x16222f0() {
   return (neuron0x161a0f0()*0.124801);
}

double NNfunction_ss_dRdR::synapse0x1622330() {
   return (neuron0x161a430()*0.122418);
}

double NNfunction_ss_dRdR::synapse0x1622370() {
   return (neuron0x161a770()*-0.412626);
}

double NNfunction_ss_dRdR::synapse0x16223b0() {
   return (neuron0x161aab0()*0.067698);
}

double NNfunction_ss_dRdR::synapse0x16223f0() {
   return (neuron0x161adf0()*-0.011424);
}

double NNfunction_ss_dRdR::synapse0x1622430() {
   return (neuron0x161b130()*0.452595);
}

double NNfunction_ss_dRdR::synapse0x16227b0() {
   return (neuron0x1616570()*-0.00555191);
}

double NNfunction_ss_dRdR::synapse0x16227f0() {
   return (neuron0x16168b0()*0.144909);
}

double NNfunction_ss_dRdR::synapse0x1622830() {
   return (neuron0x1616bf0()*-0.389303);
}

double NNfunction_ss_dRdR::synapse0x1622870() {
   return (neuron0x1616f30()*0.412544);
}

double NNfunction_ss_dRdR::synapse0x16228b0() {
   return (neuron0x1617270()*-0.216442);
}

double NNfunction_ss_dRdR::synapse0x16228f0() {
   return (neuron0x16175b0()*0.405526);
}

double NNfunction_ss_dRdR::synapse0x1622930() {
   return (neuron0x16178f0()*0.219112);
}

double NNfunction_ss_dRdR::synapse0x1622970() {
   return (neuron0x1617c30()*-0.115732);
}

double NNfunction_ss_dRdR::synapse0x16229b0() {
   return (neuron0x1617f70()*-0.0368642);
}

double NNfunction_ss_dRdR::synapse0x16229f0() {
   return (neuron0x16182b0()*0.246211);
}

double NNfunction_ss_dRdR::synapse0x1622a30() {
   return (neuron0x16185f0()*-0.325887);
}

double NNfunction_ss_dRdR::synapse0x1622a70() {
   return (neuron0x1618930()*-0.647533);
}

double NNfunction_ss_dRdR::synapse0x1622ab0() {
   return (neuron0x1618c70()*-0.248856);
}

double NNfunction_ss_dRdR::synapse0x1622af0() {
   return (neuron0x1618fb0()*-0.418317);
}

double NNfunction_ss_dRdR::synapse0x1622b30() {
   return (neuron0x16192f0()*0.0969104);
}

double NNfunction_ss_dRdR::synapse0x1622b70() {
   return (neuron0x1619630()*-0.309626);
}

double NNfunction_ss_dRdR::synapse0x1622600() {
   return (neuron0x1619970()*-0.0111964);
}

double NNfunction_ss_dRdR::synapse0x1622640() {
   return (neuron0x1619ed0()*-1.38679);
}

double NNfunction_ss_dRdR::synapse0x1622cc0() {
   return (neuron0x161a0f0()*-0.106922);
}

double NNfunction_ss_dRdR::synapse0x1622d00() {
   return (neuron0x161a430()*-0.309774);
}

double NNfunction_ss_dRdR::synapse0x1622d40() {
   return (neuron0x161a770()*-0.0177569);
}

double NNfunction_ss_dRdR::synapse0x1622d80() {
   return (neuron0x161aab0()*0.221358);
}

double NNfunction_ss_dRdR::synapse0x1622dc0() {
   return (neuron0x161adf0()*-0.427133);
}

double NNfunction_ss_dRdR::synapse0x1622e00() {
   return (neuron0x161b130()*0.270526);
}

double NNfunction_ss_dRdR::synapse0x1622fd0() {
   return (neuron0x1616570()*0.16345);
}

double NNfunction_ss_dRdR::synapse0x162c060() {
   return (neuron0x16168b0()*0.100592);
}

double NNfunction_ss_dRdR::synapse0x162c0a0() {
   return (neuron0x1616bf0()*-0.521027);
}

double NNfunction_ss_dRdR::synapse0x162c0e0() {
   return (neuron0x1616f30()*-0.310791);
}

double NNfunction_ss_dRdR::synapse0x162c120() {
   return (neuron0x1617270()*0.30457);
}

double NNfunction_ss_dRdR::synapse0x162c160() {
   return (neuron0x16175b0()*-0.0810081);
}

double NNfunction_ss_dRdR::synapse0x162c1a0() {
   return (neuron0x16178f0()*-0.103709);
}

double NNfunction_ss_dRdR::synapse0x162c1e0() {
   return (neuron0x1617c30()*-0.177718);
}

double NNfunction_ss_dRdR::synapse0x162c220() {
   return (neuron0x1617f70()*-0.0654833);
}

double NNfunction_ss_dRdR::synapse0x162c260() {
   return (neuron0x16182b0()*0.513589);
}

double NNfunction_ss_dRdR::synapse0x162c2a0() {
   return (neuron0x16185f0()*-0.173174);
}

double NNfunction_ss_dRdR::synapse0x162c2e0() {
   return (neuron0x1618930()*-0.64377);
}

double NNfunction_ss_dRdR::synapse0x162c320() {
   return (neuron0x1618c70()*0.219918);
}

double NNfunction_ss_dRdR::synapse0x162c360() {
   return (neuron0x1618fb0()*0.522424);
}

double NNfunction_ss_dRdR::synapse0x162c3a0() {
   return (neuron0x16192f0()*-0.0444404);
}

double NNfunction_ss_dRdR::synapse0x162c3e0() {
   return (neuron0x1619630()*-0.807148);
}

double NNfunction_ss_dRdR::synapse0x162beb0() {
   return (neuron0x1619970()*-0.273137);
}

double NNfunction_ss_dRdR::synapse0x162bef0() {
   return (neuron0x1619ed0()*-0.0854325);
}

double NNfunction_ss_dRdR::synapse0x162c530() {
   return (neuron0x161a0f0()*0.528894);
}

double NNfunction_ss_dRdR::synapse0x162c570() {
   return (neuron0x161a430()*-0.12301);
}

double NNfunction_ss_dRdR::synapse0x162c5b0() {
   return (neuron0x161a770()*-0.476265);
}

double NNfunction_ss_dRdR::synapse0x162c5f0() {
   return (neuron0x161aab0()*0.23795);
}

double NNfunction_ss_dRdR::synapse0x162c630() {
   return (neuron0x161adf0()*0.0922174);
}

double NNfunction_ss_dRdR::synapse0x162c670() {
   return (neuron0x161b130()*0.184454);
}

double NNfunction_ss_dRdR::synapse0x162c9f0() {
   return (neuron0x1616570()*-0.168841);
}

double NNfunction_ss_dRdR::synapse0x162ca30() {
   return (neuron0x16168b0()*-0.00785634);
}

double NNfunction_ss_dRdR::synapse0x162ca70() {
   return (neuron0x1616bf0()*0.302846);
}

double NNfunction_ss_dRdR::synapse0x162cab0() {
   return (neuron0x1616f30()*0.307634);
}

double NNfunction_ss_dRdR::synapse0x162caf0() {
   return (neuron0x1617270()*0.0855449);
}

double NNfunction_ss_dRdR::synapse0x162cb30() {
   return (neuron0x16175b0()*0.0088176);
}

double NNfunction_ss_dRdR::synapse0x162cb70() {
   return (neuron0x16178f0()*0.422476);
}

double NNfunction_ss_dRdR::synapse0x162cbb0() {
   return (neuron0x1617c30()*0.201922);
}

double NNfunction_ss_dRdR::synapse0x162cbf0() {
   return (neuron0x1617f70()*-0.0627949);
}

double NNfunction_ss_dRdR::synapse0x162cc30() {
   return (neuron0x16182b0()*-0.206637);
}

double NNfunction_ss_dRdR::synapse0x162cc70() {
   return (neuron0x16185f0()*-0.0344946);
}

double NNfunction_ss_dRdR::synapse0x162ccb0() {
   return (neuron0x1618930()*0.263224);
}

double NNfunction_ss_dRdR::synapse0x162ccf0() {
   return (neuron0x1618c70()*0.158844);
}

double NNfunction_ss_dRdR::synapse0x162cd30() {
   return (neuron0x1618fb0()*-0.735237);
}

double NNfunction_ss_dRdR::synapse0x162cd70() {
   return (neuron0x16192f0()*0.218398);
}

double NNfunction_ss_dRdR::synapse0x162cdb0() {
   return (neuron0x1619630()*0.249796);
}

double NNfunction_ss_dRdR::synapse0x162c840() {
   return (neuron0x1619970()*-0.09583);
}

double NNfunction_ss_dRdR::synapse0x162c880() {
   return (neuron0x1619ed0()*-0.774891);
}

double NNfunction_ss_dRdR::synapse0x162cf00() {
   return (neuron0x161a0f0()*0.471535);
}

double NNfunction_ss_dRdR::synapse0x162cf40() {
   return (neuron0x161a430()*-0.179852);
}

double NNfunction_ss_dRdR::synapse0x162cf80() {
   return (neuron0x161a770()*-0.479619);
}

double NNfunction_ss_dRdR::synapse0x162cfc0() {
   return (neuron0x161aab0()*0.0631626);
}

double NNfunction_ss_dRdR::synapse0x162d000() {
   return (neuron0x161adf0()*-0.265212);
}

double NNfunction_ss_dRdR::synapse0x162d040() {
   return (neuron0x161b130()*0.0489763);
}

double NNfunction_ss_dRdR::synapse0x162d3c0() {
   return (neuron0x1616570()*0.3997);
}

double NNfunction_ss_dRdR::synapse0x162d400() {
   return (neuron0x16168b0()*-0.334303);
}

double NNfunction_ss_dRdR::synapse0x162d440() {
   return (neuron0x1616bf0()*-0.00300626);
}

double NNfunction_ss_dRdR::synapse0x162d480() {
   return (neuron0x1616f30()*0.016937);
}

double NNfunction_ss_dRdR::synapse0x162d4c0() {
   return (neuron0x1617270()*-0.83694);
}

double NNfunction_ss_dRdR::synapse0x162d500() {
   return (neuron0x16175b0()*0.444464);
}

double NNfunction_ss_dRdR::synapse0x162d540() {
   return (neuron0x16178f0()*-0.339502);
}

double NNfunction_ss_dRdR::synapse0x162d580() {
   return (neuron0x1617c30()*-0.0987566);
}

double NNfunction_ss_dRdR::synapse0x162d5c0() {
   return (neuron0x1617f70()*0.157674);
}

double NNfunction_ss_dRdR::synapse0x162d600() {
   return (neuron0x16182b0()*0.454823);
}

double NNfunction_ss_dRdR::synapse0x162d640() {
   return (neuron0x16185f0()*-0.0225148);
}

double NNfunction_ss_dRdR::synapse0x162d680() {
   return (neuron0x1618930()*-0.140053);
}

double NNfunction_ss_dRdR::synapse0x162d6c0() {
   return (neuron0x1618c70()*0.165618);
}

double NNfunction_ss_dRdR::synapse0x162d700() {
   return (neuron0x1618fb0()*0.833435);
}

double NNfunction_ss_dRdR::synapse0x162d740() {
   return (neuron0x16192f0()*-0.530573);
}

double NNfunction_ss_dRdR::synapse0x162d780() {
   return (neuron0x1619630()*-0.0152217);
}

double NNfunction_ss_dRdR::synapse0x162d210() {
   return (neuron0x1619970()*-0.0562824);
}

double NNfunction_ss_dRdR::synapse0x162d250() {
   return (neuron0x1619ed0()*-0.550781);
}

double NNfunction_ss_dRdR::synapse0x162d8d0() {
   return (neuron0x161a0f0()*-0.255842);
}

double NNfunction_ss_dRdR::synapse0x162d910() {
   return (neuron0x161a430()*-0.051734);
}

double NNfunction_ss_dRdR::synapse0x162d950() {
   return (neuron0x161a770()*0.0766797);
}

double NNfunction_ss_dRdR::synapse0x162d990() {
   return (neuron0x161aab0()*0.828159);
}

double NNfunction_ss_dRdR::synapse0x162d9d0() {
   return (neuron0x161adf0()*0.425359);
}

double NNfunction_ss_dRdR::synapse0x162da10() {
   return (neuron0x161b130()*0.513115);
}

double NNfunction_ss_dRdR::synapse0x162dd90() {
   return (neuron0x1616570()*-0.262375);
}

double NNfunction_ss_dRdR::synapse0x162ddd0() {
   return (neuron0x16168b0()*-0.477073);
}

double NNfunction_ss_dRdR::synapse0x162de10() {
   return (neuron0x1616bf0()*-0.451022);
}

double NNfunction_ss_dRdR::synapse0x162de50() {
   return (neuron0x1616f30()*0.0324825);
}

double NNfunction_ss_dRdR::synapse0x162de90() {
   return (neuron0x1617270()*-0.248276);
}

double NNfunction_ss_dRdR::synapse0x162ded0() {
   return (neuron0x16175b0()*-0.212786);
}

double NNfunction_ss_dRdR::synapse0x162df10() {
   return (neuron0x16178f0()*-0.341352);
}

double NNfunction_ss_dRdR::synapse0x162df50() {
   return (neuron0x1617c30()*0.166701);
}

double NNfunction_ss_dRdR::synapse0x162df90() {
   return (neuron0x1617f70()*1.39035);
}

double NNfunction_ss_dRdR::synapse0x162dfd0() {
   return (neuron0x16182b0()*0.604997);
}

double NNfunction_ss_dRdR::synapse0x162e010() {
   return (neuron0x16185f0()*-1.16648);
}

double NNfunction_ss_dRdR::synapse0x162e050() {
   return (neuron0x1618930()*0.0099349);
}

double NNfunction_ss_dRdR::synapse0x162e090() {
   return (neuron0x1618c70()*0.356237);
}

double NNfunction_ss_dRdR::synapse0x162e0d0() {
   return (neuron0x1618fb0()*0.348299);
}

double NNfunction_ss_dRdR::synapse0x162e110() {
   return (neuron0x16192f0()*-0.708954);
}

double NNfunction_ss_dRdR::synapse0x162e150() {
   return (neuron0x1619630()*0.312716);
}

double NNfunction_ss_dRdR::synapse0x162dbe0() {
   return (neuron0x1619970()*0.382919);
}

double NNfunction_ss_dRdR::synapse0x162dc20() {
   return (neuron0x1619ed0()*-0.559863);
}

double NNfunction_ss_dRdR::synapse0x162e2a0() {
   return (neuron0x161a0f0()*0.33635);
}

double NNfunction_ss_dRdR::synapse0x162e2e0() {
   return (neuron0x161a430()*0.714908);
}

double NNfunction_ss_dRdR::synapse0x162e320() {
   return (neuron0x161a770()*0.621249);
}

double NNfunction_ss_dRdR::synapse0x162e360() {
   return (neuron0x161aab0()*0.349546);
}

double NNfunction_ss_dRdR::synapse0x162e3a0() {
   return (neuron0x161adf0()*-0.310921);
}

double NNfunction_ss_dRdR::synapse0x162e3e0() {
   return (neuron0x161b130()*-0.546075);
}

double NNfunction_ss_dRdR::synapse0x162e760() {
   return (neuron0x1616570()*-0.876861);
}

double NNfunction_ss_dRdR::synapse0x162e7a0() {
   return (neuron0x16168b0()*-0.0623777);
}

double NNfunction_ss_dRdR::synapse0x162e7e0() {
   return (neuron0x1616bf0()*-0.206629);
}

double NNfunction_ss_dRdR::synapse0x162e820() {
   return (neuron0x1616f30()*-0.107628);
}

double NNfunction_ss_dRdR::synapse0x162e860() {
   return (neuron0x1617270()*-0.405949);
}

double NNfunction_ss_dRdR::synapse0x162e8a0() {
   return (neuron0x16175b0()*0.0438763);
}

double NNfunction_ss_dRdR::synapse0x162e8e0() {
   return (neuron0x16178f0()*0.159486);
}

double NNfunction_ss_dRdR::synapse0x162e920() {
   return (neuron0x1617c30()*0.748751);
}

double NNfunction_ss_dRdR::synapse0x162e960() {
   return (neuron0x1617f70()*-0.221437);
}

double NNfunction_ss_dRdR::synapse0x162e9a0() {
   return (neuron0x16182b0()*0.0957184);
}

double NNfunction_ss_dRdR::synapse0x162e9e0() {
   return (neuron0x16185f0()*-0.108877);
}

double NNfunction_ss_dRdR::synapse0x162ea20() {
   return (neuron0x1618930()*0.430935);
}

double NNfunction_ss_dRdR::synapse0x162ea60() {
   return (neuron0x1618c70()*-0.0795946);
}

double NNfunction_ss_dRdR::synapse0x162eaa0() {
   return (neuron0x1618fb0()*-0.41591);
}

double NNfunction_ss_dRdR::synapse0x162eae0() {
   return (neuron0x16192f0()*-0.0554214);
}

double NNfunction_ss_dRdR::synapse0x162eb20() {
   return (neuron0x1619630()*-0.786114);
}

double NNfunction_ss_dRdR::synapse0x162e5b0() {
   return (neuron0x1619970()*-0.273358);
}

double NNfunction_ss_dRdR::synapse0x162e5f0() {
   return (neuron0x1619ed0()*-1.5756);
}

double NNfunction_ss_dRdR::synapse0x162ec70() {
   return (neuron0x161a0f0()*-0.487373);
}

double NNfunction_ss_dRdR::synapse0x162ecb0() {
   return (neuron0x161a430()*0.38662);
}

double NNfunction_ss_dRdR::synapse0x162ecf0() {
   return (neuron0x161a770()*0.395125);
}

double NNfunction_ss_dRdR::synapse0x162ed30() {
   return (neuron0x161aab0()*-0.500824);
}

double NNfunction_ss_dRdR::synapse0x162ed70() {
   return (neuron0x161adf0()*0.429541);
}

double NNfunction_ss_dRdR::synapse0x162edb0() {
   return (neuron0x161b130()*0.25526);
}

double NNfunction_ss_dRdR::synapse0x162f130() {
   return (neuron0x1616570()*0.140094);
}

double NNfunction_ss_dRdR::synapse0x162f170() {
   return (neuron0x16168b0()*-0.138169);
}

double NNfunction_ss_dRdR::synapse0x162f1b0() {
   return (neuron0x1616bf0()*0.179152);
}

double NNfunction_ss_dRdR::synapse0x162f1f0() {
   return (neuron0x1616f30()*0.058103);
}

double NNfunction_ss_dRdR::synapse0x162f230() {
   return (neuron0x1617270()*0.0642213);
}

double NNfunction_ss_dRdR::synapse0x162f270() {
   return (neuron0x16175b0()*0.519635);
}

double NNfunction_ss_dRdR::synapse0x162f2b0() {
   return (neuron0x16178f0()*0.105359);
}

double NNfunction_ss_dRdR::synapse0x162f2f0() {
   return (neuron0x1617c30()*0.153976);
}

double NNfunction_ss_dRdR::synapse0x162f330() {
   return (neuron0x1617f70()*-0.757518);
}

double NNfunction_ss_dRdR::synapse0x162f370() {
   return (neuron0x16182b0()*0.508479);
}

double NNfunction_ss_dRdR::synapse0x162f3b0() {
   return (neuron0x16185f0()*0.641363);
}

double NNfunction_ss_dRdR::synapse0x162f3f0() {
   return (neuron0x1618930()*-0.299739);
}

double NNfunction_ss_dRdR::synapse0x162f430() {
   return (neuron0x1618c70()*-0.0457434);
}

double NNfunction_ss_dRdR::synapse0x162f470() {
   return (neuron0x1618fb0()*-0.34383);
}

double NNfunction_ss_dRdR::synapse0x162f4b0() {
   return (neuron0x16192f0()*0.0446418);
}

double NNfunction_ss_dRdR::synapse0x162f4f0() {
   return (neuron0x1619630()*0.0710811);
}

double NNfunction_ss_dRdR::synapse0x162ef80() {
   return (neuron0x1619970()*0.333288);
}

double NNfunction_ss_dRdR::synapse0x162efc0() {
   return (neuron0x1619ed0()*-0.773326);
}

double NNfunction_ss_dRdR::synapse0x162f640() {
   return (neuron0x161a0f0()*0.0750721);
}

double NNfunction_ss_dRdR::synapse0x162f680() {
   return (neuron0x161a430()*0.403232);
}

double NNfunction_ss_dRdR::synapse0x162f6c0() {
   return (neuron0x161a770()*0.1607);
}

double NNfunction_ss_dRdR::synapse0x162f700() {
   return (neuron0x161aab0()*0.0181174);
}

double NNfunction_ss_dRdR::synapse0x162f740() {
   return (neuron0x161adf0()*0.443991);
}

double NNfunction_ss_dRdR::synapse0x162f780() {
   return (neuron0x161b130()*0.175258);
}

double NNfunction_ss_dRdR::synapse0x162fb00() {
   return (neuron0x1616570()*0.225791);
}

double NNfunction_ss_dRdR::synapse0x162fb40() {
   return (neuron0x16168b0()*0.107371);
}

double NNfunction_ss_dRdR::synapse0x162fb80() {
   return (neuron0x1616bf0()*-0.840941);
}

double NNfunction_ss_dRdR::synapse0x162fbc0() {
   return (neuron0x1616f30()*0.487145);
}

double NNfunction_ss_dRdR::synapse0x162fc00() {
   return (neuron0x1617270()*0.0867761);
}

double NNfunction_ss_dRdR::synapse0x162fc40() {
   return (neuron0x16175b0()*-0.216313);
}

double NNfunction_ss_dRdR::synapse0x162fc80() {
   return (neuron0x16178f0()*-0.505895);
}

double NNfunction_ss_dRdR::synapse0x162fcc0() {
   return (neuron0x1617c30()*0.342419);
}

double NNfunction_ss_dRdR::synapse0x162fd00() {
   return (neuron0x1617f70()*-0.375877);
}

double NNfunction_ss_dRdR::synapse0x162fd40() {
   return (neuron0x16182b0()*0.848899);
}

double NNfunction_ss_dRdR::synapse0x162fd80() {
   return (neuron0x16185f0()*0.0602578);
}

double NNfunction_ss_dRdR::synapse0x162fdc0() {
   return (neuron0x1618930()*0.119094);
}

double NNfunction_ss_dRdR::synapse0x162fe00() {
   return (neuron0x1618c70()*0.1824);
}

double NNfunction_ss_dRdR::synapse0x162fe40() {
   return (neuron0x1618fb0()*0.0340279);
}

double NNfunction_ss_dRdR::synapse0x162fe80() {
   return (neuron0x16192f0()*0.205568);
}

double NNfunction_ss_dRdR::synapse0x162fec0() {
   return (neuron0x1619630()*0.810622);
}

double NNfunction_ss_dRdR::synapse0x162f950() {
   return (neuron0x1619970()*-0.186743);
}

double NNfunction_ss_dRdR::synapse0x162f990() {
   return (neuron0x1619ed0()*-0.322151);
}

double NNfunction_ss_dRdR::synapse0x1630010() {
   return (neuron0x161a0f0()*0.337111);
}

double NNfunction_ss_dRdR::synapse0x1630050() {
   return (neuron0x161a430()*0.994516);
}

double NNfunction_ss_dRdR::synapse0x1630090() {
   return (neuron0x161a770()*-0.0744497);
}

double NNfunction_ss_dRdR::synapse0x16300d0() {
   return (neuron0x161aab0()*-0.680263);
}

double NNfunction_ss_dRdR::synapse0x1630110() {
   return (neuron0x161adf0()*-0.705477);
}

double NNfunction_ss_dRdR::synapse0x1630150() {
   return (neuron0x161b130()*0.202209);
}

double NNfunction_ss_dRdR::synapse0x16304d0() {
   return (neuron0x1616570()*-0.00235221);
}

double NNfunction_ss_dRdR::synapse0x1630510() {
   return (neuron0x16168b0()*0.0204893);
}

double NNfunction_ss_dRdR::synapse0x1630550() {
   return (neuron0x1616bf0()*0.0163817);
}

double NNfunction_ss_dRdR::synapse0x1630590() {
   return (neuron0x1616f30()*-17.763);
}

double NNfunction_ss_dRdR::synapse0x16305d0() {
   return (neuron0x1617270()*0.0369752);
}

double NNfunction_ss_dRdR::synapse0x1630610() {
   return (neuron0x16175b0()*0.008698);
}

double NNfunction_ss_dRdR::synapse0x1630650() {
   return (neuron0x16178f0()*0.00848719);
}

double NNfunction_ss_dRdR::synapse0x1630690() {
   return (neuron0x1617c30()*-0.0111605);
}

double NNfunction_ss_dRdR::synapse0x16306d0() {
   return (neuron0x1617f70()*0.00442847);
}

double NNfunction_ss_dRdR::synapse0x1630710() {
   return (neuron0x16182b0()*-0.0218244);
}

double NNfunction_ss_dRdR::synapse0x1630750() {
   return (neuron0x16185f0()*0.0136456);
}

double NNfunction_ss_dRdR::synapse0x1630790() {
   return (neuron0x1618930()*-0.0298231);
}

double NNfunction_ss_dRdR::synapse0x16307d0() {
   return (neuron0x1618c70()*-0.0293794);
}

double NNfunction_ss_dRdR::synapse0x1630810() {
   return (neuron0x1618fb0()*-0.00817323);
}

double NNfunction_ss_dRdR::synapse0x1630850() {
   return (neuron0x16192f0()*-0.0442724);
}

double NNfunction_ss_dRdR::synapse0x1630890() {
   return (neuron0x1619630()*0.0199945);
}

double NNfunction_ss_dRdR::synapse0x1630320() {
   return (neuron0x1619970()*0.0202271);
}

double NNfunction_ss_dRdR::synapse0x1630360() {
   return (neuron0x1619ed0()*-0.146226);
}

double NNfunction_ss_dRdR::synapse0x16309e0() {
   return (neuron0x161a0f0()*-0.0167258);
}

double NNfunction_ss_dRdR::synapse0x1630a20() {
   return (neuron0x161a430()*-0.0148922);
}

double NNfunction_ss_dRdR::synapse0x1630a60() {
   return (neuron0x161a770()*-0.0242286);
}

double NNfunction_ss_dRdR::synapse0x1630aa0() {
   return (neuron0x161aab0()*-0.000734998);
}

double NNfunction_ss_dRdR::synapse0x1630ae0() {
   return (neuron0x161adf0()*-0.000208416);
}

double NNfunction_ss_dRdR::synapse0x1630b20() {
   return (neuron0x161b130()*-0.0126145);
}

double NNfunction_ss_dRdR::synapse0x1630ea0() {
   return (neuron0x1616570()*-0.0294761);
}

double NNfunction_ss_dRdR::synapse0x1625470() {
   return (neuron0x16168b0()*-0.00242313);
}

double NNfunction_ss_dRdR::synapse0x16254b0() {
   return (neuron0x1616bf0()*0.0194216);
}

double NNfunction_ss_dRdR::synapse0x16254f0() {
   return (neuron0x1616f30()*5.70046);
}

double NNfunction_ss_dRdR::synapse0x1625740() {
   return (neuron0x1617270()*-0.0099033);
}

double NNfunction_ss_dRdR::synapse0x1625780() {
   return (neuron0x16175b0()*0.0126791);
}

double NNfunction_ss_dRdR::synapse0x16257c0() {
   return (neuron0x16178f0()*0.00738234);
}

double NNfunction_ss_dRdR::synapse0x1625a10() {
   return (neuron0x1617c30()*0.0231254);
}

double NNfunction_ss_dRdR::synapse0x1625a50() {
   return (neuron0x1617f70()*-0.0113018);
}

double NNfunction_ss_dRdR::synapse0x1625ca0() {
   return (neuron0x16182b0()*0.00107309);
}

double NNfunction_ss_dRdR::synapse0x1625ce0() {
   return (neuron0x16185f0()*-0.00735591);
}

double NNfunction_ss_dRdR::synapse0x1625d20() {
   return (neuron0x1618930()*0.0861491);
}

double NNfunction_ss_dRdR::synapse0x1625f70() {
   return (neuron0x1618c70()*0.07731);
}

double NNfunction_ss_dRdR::synapse0x1625fb0() {
   return (neuron0x1618fb0()*-0.024892);
}

double NNfunction_ss_dRdR::synapse0x1626200() {
   return (neuron0x16192f0()*0.0533284);
}

double NNfunction_ss_dRdR::synapse0x1626240() {
   return (neuron0x1619630()*0.0588054);
}

double NNfunction_ss_dRdR::synapse0x1630cf0() {
   return (neuron0x1619970()*-0.00513968);
}

double NNfunction_ss_dRdR::synapse0x1630d30() {
   return (neuron0x1619ed0()*-1.08885);
}

double NNfunction_ss_dRdR::synapse0x1626390() {
   return (neuron0x161a0f0()*0.0526503);
}

double NNfunction_ss_dRdR::synapse0x16268a0() {
   return (neuron0x161a430()*0.00620338);
}

double NNfunction_ss_dRdR::synapse0x16268e0() {
   return (neuron0x161a770()*-0.000783142);
}

double NNfunction_ss_dRdR::synapse0x1626920() {
   return (neuron0x161aab0()*-0.0105908);
}

double NNfunction_ss_dRdR::synapse0x1626b70() {
   return (neuron0x161adf0()*-0.0140053);
}

double NNfunction_ss_dRdR::synapse0x1626bb0() {
   return (neuron0x161b130()*0.0395371);
}

double NNfunction_ss_dRdR::synapse0x1626460() {
   return (neuron0x1616570()*-0.0237677);
}

double NNfunction_ss_dRdR::synapse0x16264a0() {
   return (neuron0x16168b0()*-0.468795);
}

double NNfunction_ss_dRdR::synapse0x16264e0() {
   return (neuron0x1616bf0()*0.0117873);
}

double NNfunction_ss_dRdR::synapse0x1626520() {
   return (neuron0x1616f30()*-0.74759);
}

double NNfunction_ss_dRdR::synapse0x1626ea0() {
   return (neuron0x1617270()*0.521555);
}

double NNfunction_ss_dRdR::synapse0x16331f0() {
   return (neuron0x16175b0()*0.677669);
}

double NNfunction_ss_dRdR::synapse0x1633230() {
   return (neuron0x16178f0()*-0.0683978);
}

double NNfunction_ss_dRdR::synapse0x1633270() {
   return (neuron0x1617c30()*-0.521212);
}

double NNfunction_ss_dRdR::synapse0x16332b0() {
   return (neuron0x1617f70()*-0.0420448);
}

double NNfunction_ss_dRdR::synapse0x16332f0() {
   return (neuron0x16182b0()*0.0335408);
}

double NNfunction_ss_dRdR::synapse0x1633330() {
   return (neuron0x16185f0()*-0.107021);
}

double NNfunction_ss_dRdR::synapse0x1633370() {
   return (neuron0x1618930()*-0.1382);
}

double NNfunction_ss_dRdR::synapse0x16333b0() {
   return (neuron0x1618c70()*0.445556);
}

double NNfunction_ss_dRdR::synapse0x16333f0() {
   return (neuron0x1618fb0()*0.201384);
}

double NNfunction_ss_dRdR::synapse0x1633430() {
   return (neuron0x16192f0()*-1.05337);
}

double NNfunction_ss_dRdR::synapse0x1633470() {
   return (neuron0x1619630()*0.0230701);
}

double NNfunction_ss_dRdR::synapse0x1626d80() {
   return (neuron0x1619970()*0.0723739);
}

double NNfunction_ss_dRdR::synapse0x1626dc0() {
   return (neuron0x1619ed0()*0.136081);
}

double NNfunction_ss_dRdR::synapse0x16335c0() {
   return (neuron0x161a0f0()*-0.0307154);
}

double NNfunction_ss_dRdR::synapse0x1633600() {
   return (neuron0x161a430()*-0.219368);
}

double NNfunction_ss_dRdR::synapse0x1633640() {
   return (neuron0x161a770()*0.317107);
}

double NNfunction_ss_dRdR::synapse0x1633680() {
   return (neuron0x161aab0()*0.431905);
}

double NNfunction_ss_dRdR::synapse0x16336c0() {
   return (neuron0x161adf0()*-0.567914);
}

double NNfunction_ss_dRdR::synapse0x1633700() {
   return (neuron0x161b130()*0.0530939);
}

double NNfunction_ss_dRdR::synapse0x1633a80() {
   return (neuron0x1616570()*0.0274097);
}

double NNfunction_ss_dRdR::synapse0x1633ac0() {
   return (neuron0x16168b0()*0.0186466);
}

double NNfunction_ss_dRdR::synapse0x1633b00() {
   return (neuron0x1616bf0()*0.00749625);
}

double NNfunction_ss_dRdR::synapse0x1633b40() {
   return (neuron0x1616f30()*-0.135489);
}

double NNfunction_ss_dRdR::synapse0x1633b80() {
   return (neuron0x1617270()*-0.0280114);
}

double NNfunction_ss_dRdR::synapse0x1633bc0() {
   return (neuron0x16175b0()*0.0188028);
}

double NNfunction_ss_dRdR::synapse0x1633c00() {
   return (neuron0x16178f0()*-0.0440947);
}

double NNfunction_ss_dRdR::synapse0x1633c40() {
   return (neuron0x1617c30()*-0.0401845);
}

double NNfunction_ss_dRdR::synapse0x1633c80() {
   return (neuron0x1617f70()*-0.159473);
}

double NNfunction_ss_dRdR::synapse0x1633cc0() {
   return (neuron0x16182b0()*-0.0775604);
}

double NNfunction_ss_dRdR::synapse0x1633d00() {
   return (neuron0x16185f0()*-0.0262915);
}

double NNfunction_ss_dRdR::synapse0x1633d40() {
   return (neuron0x1618930()*-0.0171123);
}

double NNfunction_ss_dRdR::synapse0x1633d80() {
   return (neuron0x1618c70()*0.0208716);
}

double NNfunction_ss_dRdR::synapse0x1633dc0() {
   return (neuron0x1618fb0()*0.00172851);
}

double NNfunction_ss_dRdR::synapse0x1633e00() {
   return (neuron0x16192f0()*0.00735566);
}

double NNfunction_ss_dRdR::synapse0x1633e40() {
   return (neuron0x1619630()*-0.00301886);
}

double NNfunction_ss_dRdR::synapse0x16338d0() {
   return (neuron0x1619970()*-0.00773356);
}

double NNfunction_ss_dRdR::synapse0x1633910() {
   return (neuron0x1619ed0()*-0.771559);
}

double NNfunction_ss_dRdR::synapse0x1633f90() {
   return (neuron0x161a0f0()*0.00280693);
}

double NNfunction_ss_dRdR::synapse0x1633fd0() {
   return (neuron0x161a430()*-0.000853627);
}

double NNfunction_ss_dRdR::synapse0x1634010() {
   return (neuron0x161a770()*-0.00151388);
}

double NNfunction_ss_dRdR::synapse0x1634050() {
   return (neuron0x161aab0()*0.00623533);
}

double NNfunction_ss_dRdR::synapse0x1634090() {
   return (neuron0x161adf0()*-0.0114252);
}

double NNfunction_ss_dRdR::synapse0x16340d0() {
   return (neuron0x161b130()*0.00619398);
}

double NNfunction_ss_dRdR::synapse0x1634450() {
   return (neuron0x1616570()*0.0951424);
}

double NNfunction_ss_dRdR::synapse0x1634490() {
   return (neuron0x16168b0()*-0.062242);
}

double NNfunction_ss_dRdR::synapse0x16344d0() {
   return (neuron0x1616bf0()*0.330351);
}

double NNfunction_ss_dRdR::synapse0x1634510() {
   return (neuron0x1616f30()*-0.218261);
}

double NNfunction_ss_dRdR::synapse0x1634550() {
   return (neuron0x1617270()*0.436907);
}

double NNfunction_ss_dRdR::synapse0x1634590() {
   return (neuron0x16175b0()*-0.0374534);
}

double NNfunction_ss_dRdR::synapse0x16345d0() {
   return (neuron0x16178f0()*0.274266);
}

double NNfunction_ss_dRdR::synapse0x1634610() {
   return (neuron0x1617c30()*-0.385932);
}

double NNfunction_ss_dRdR::synapse0x1634650() {
   return (neuron0x1617f70()*0.163681);
}

double NNfunction_ss_dRdR::synapse0x1634690() {
   return (neuron0x16182b0()*0.084552);
}

double NNfunction_ss_dRdR::synapse0x16346d0() {
   return (neuron0x16185f0()*0.626367);
}

double NNfunction_ss_dRdR::synapse0x1634710() {
   return (neuron0x1618930()*0.408217);
}

double NNfunction_ss_dRdR::synapse0x1634750() {
   return (neuron0x1618c70()*-0.176352);
}

double NNfunction_ss_dRdR::synapse0x1634790() {
   return (neuron0x1618fb0()*-0.0317023);
}

double NNfunction_ss_dRdR::synapse0x16347d0() {
   return (neuron0x16192f0()*-0.0106422);
}

double NNfunction_ss_dRdR::synapse0x1634810() {
   return (neuron0x1619630()*0.397964);
}

double NNfunction_ss_dRdR::synapse0x16342a0() {
   return (neuron0x1619970()*-0.494745);
}

double NNfunction_ss_dRdR::synapse0x16342e0() {
   return (neuron0x1619ed0()*0.336212);
}

double NNfunction_ss_dRdR::synapse0x1634960() {
   return (neuron0x161a0f0()*-0.821597);
}

double NNfunction_ss_dRdR::synapse0x16349a0() {
   return (neuron0x161a430()*-1.02101);
}

double NNfunction_ss_dRdR::synapse0x16349e0() {
   return (neuron0x161a770()*0.217483);
}

double NNfunction_ss_dRdR::synapse0x1634a20() {
   return (neuron0x161aab0()*-0.109959);
}

double NNfunction_ss_dRdR::synapse0x1634a60() {
   return (neuron0x161adf0()*0.113064);
}

double NNfunction_ss_dRdR::synapse0x1634aa0() {
   return (neuron0x161b130()*-0.00422994);
}

double NNfunction_ss_dRdR::synapse0x1634e20() {
   return (neuron0x1616570()*0.00587093);
}

double NNfunction_ss_dRdR::synapse0x1634e60() {
   return (neuron0x16168b0()*-0.251783);
}

double NNfunction_ss_dRdR::synapse0x1634ea0() {
   return (neuron0x1616bf0()*0.239814);
}

double NNfunction_ss_dRdR::synapse0x1634ee0() {
   return (neuron0x1616f30()*-0.360513);
}

double NNfunction_ss_dRdR::synapse0x1634f20() {
   return (neuron0x1617270()*-0.015714);
}

double NNfunction_ss_dRdR::synapse0x1634f60() {
   return (neuron0x16175b0()*0.192262);
}

double NNfunction_ss_dRdR::synapse0x1634fa0() {
   return (neuron0x16178f0()*0.327096);
}

double NNfunction_ss_dRdR::synapse0x1634fe0() {
   return (neuron0x1617c30()*-0.109773);
}

double NNfunction_ss_dRdR::synapse0x1635020() {
   return (neuron0x1617f70()*-0.120135);
}

double NNfunction_ss_dRdR::synapse0x1635060() {
   return (neuron0x16182b0()*0.94878);
}

double NNfunction_ss_dRdR::synapse0x16350a0() {
   return (neuron0x16185f0()*-0.460395);
}

double NNfunction_ss_dRdR::synapse0x16350e0() {
   return (neuron0x1618930()*0.345614);
}

double NNfunction_ss_dRdR::synapse0x1635120() {
   return (neuron0x1618c70()*0.174231);
}

double NNfunction_ss_dRdR::synapse0x1635160() {
   return (neuron0x1618fb0()*0.349908);
}

double NNfunction_ss_dRdR::synapse0x16351a0() {
   return (neuron0x16192f0()*-0.335722);
}

double NNfunction_ss_dRdR::synapse0x16351e0() {
   return (neuron0x1619630()*0.00185036);
}

double NNfunction_ss_dRdR::synapse0x1634c70() {
   return (neuron0x1619970()*0.0146107);
}

double NNfunction_ss_dRdR::synapse0x1634cb0() {
   return (neuron0x1619ed0()*1.6599);
}

double NNfunction_ss_dRdR::synapse0x1635330() {
   return (neuron0x161a0f0()*-0.158709);
}

double NNfunction_ss_dRdR::synapse0x1635370() {
   return (neuron0x161a430()*0.203403);
}

double NNfunction_ss_dRdR::synapse0x16353b0() {
   return (neuron0x161a770()*-0.158606);
}

double NNfunction_ss_dRdR::synapse0x16353f0() {
   return (neuron0x161aab0()*0.120942);
}

double NNfunction_ss_dRdR::synapse0x1635430() {
   return (neuron0x161adf0()*0.584322);
}

double NNfunction_ss_dRdR::synapse0x1635470() {
   return (neuron0x161b130()*0.0902782);
}

double NNfunction_ss_dRdR::synapse0x16357f0() {
   return (neuron0x1616570()*-0.100212);
}

double NNfunction_ss_dRdR::synapse0x1635830() {
   return (neuron0x16168b0()*0.208817);
}

double NNfunction_ss_dRdR::synapse0x1635870() {
   return (neuron0x1616bf0()*-0.0409515);
}

double NNfunction_ss_dRdR::synapse0x16358b0() {
   return (neuron0x1616f30()*0.640149);
}

double NNfunction_ss_dRdR::synapse0x16358f0() {
   return (neuron0x1617270()*0.927003);
}

double NNfunction_ss_dRdR::synapse0x1635930() {
   return (neuron0x16175b0()*-0.196144);
}

double NNfunction_ss_dRdR::synapse0x1635970() {
   return (neuron0x16178f0()*0.154012);
}

double NNfunction_ss_dRdR::synapse0x16359b0() {
   return (neuron0x1617c30()*0.0130247);
}

double NNfunction_ss_dRdR::synapse0x16359f0() {
   return (neuron0x1617f70()*-0.184682);
}

double NNfunction_ss_dRdR::synapse0x1635a30() {
   return (neuron0x16182b0()*0.10506);
}

double NNfunction_ss_dRdR::synapse0x1635a70() {
   return (neuron0x16185f0()*-0.100824);
}

double NNfunction_ss_dRdR::synapse0x1635ab0() {
   return (neuron0x1618930()*0.283187);
}

double NNfunction_ss_dRdR::synapse0x1635af0() {
   return (neuron0x1618c70()*0.127954);
}

double NNfunction_ss_dRdR::synapse0x1635b30() {
   return (neuron0x1618fb0()*0.177635);
}

double NNfunction_ss_dRdR::synapse0x1635b70() {
   return (neuron0x16192f0()*1.07514);
}

double NNfunction_ss_dRdR::synapse0x1635bb0() {
   return (neuron0x1619630()*0.970201);
}

double NNfunction_ss_dRdR::synapse0x1635640() {
   return (neuron0x1619970()*-0.21792);
}

double NNfunction_ss_dRdR::synapse0x1635680() {
   return (neuron0x1619ed0()*0.255993);
}

double NNfunction_ss_dRdR::synapse0x1635d00() {
   return (neuron0x161a0f0()*0.0517579);
}

double NNfunction_ss_dRdR::synapse0x1635d40() {
   return (neuron0x161a430()*-0.167636);
}

double NNfunction_ss_dRdR::synapse0x1635d80() {
   return (neuron0x161a770()*-0.0709773);
}

double NNfunction_ss_dRdR::synapse0x1635dc0() {
   return (neuron0x161aab0()*-0.0153756);
}

double NNfunction_ss_dRdR::synapse0x1635e00() {
   return (neuron0x161adf0()*-0.223195);
}

double NNfunction_ss_dRdR::synapse0x1635e40() {
   return (neuron0x161b130()*-0.292465);
}

double NNfunction_ss_dRdR::synapse0x16361c0() {
   return (neuron0x1616570()*0.461978);
}

double NNfunction_ss_dRdR::synapse0x1636200() {
   return (neuron0x16168b0()*0.105956);
}

double NNfunction_ss_dRdR::synapse0x1636240() {
   return (neuron0x1616bf0()*0.358636);
}

double NNfunction_ss_dRdR::synapse0x1636280() {
   return (neuron0x1616f30()*-0.334623);
}

double NNfunction_ss_dRdR::synapse0x16362c0() {
   return (neuron0x1617270()*-0.360426);
}

double NNfunction_ss_dRdR::synapse0x1636300() {
   return (neuron0x16175b0()*0.0440126);
}

double NNfunction_ss_dRdR::synapse0x1636340() {
   return (neuron0x16178f0()*0.366047);
}

double NNfunction_ss_dRdR::synapse0x1636380() {
   return (neuron0x1617c30()*0.142372);
}

double NNfunction_ss_dRdR::synapse0x16363c0() {
   return (neuron0x1617f70()*-0.554287);
}

double NNfunction_ss_dRdR::synapse0x1636400() {
   return (neuron0x16182b0()*0.434039);
}

double NNfunction_ss_dRdR::synapse0x1636440() {
   return (neuron0x16185f0()*0.535729);
}

double NNfunction_ss_dRdR::synapse0x1636480() {
   return (neuron0x1618930()*-0.122512);
}

double NNfunction_ss_dRdR::synapse0x16364c0() {
   return (neuron0x1618c70()*-0.37832);
}

double NNfunction_ss_dRdR::synapse0x1636500() {
   return (neuron0x1618fb0()*0.973746);
}

double NNfunction_ss_dRdR::synapse0x1636540() {
   return (neuron0x16192f0()*-0.974433);
}

double NNfunction_ss_dRdR::synapse0x1636580() {
   return (neuron0x1619630()*-0.264957);
}

double NNfunction_ss_dRdR::synapse0x1636010() {
   return (neuron0x1619970()*-0.409968);
}

double NNfunction_ss_dRdR::synapse0x1636050() {
   return (neuron0x1619ed0()*-0.485716);
}

double NNfunction_ss_dRdR::synapse0x16366d0() {
   return (neuron0x161a0f0()*0.797518);
}

double NNfunction_ss_dRdR::synapse0x1636710() {
   return (neuron0x161a430()*0.489797);
}

double NNfunction_ss_dRdR::synapse0x1636750() {
   return (neuron0x161a770()*-0.395437);
}

double NNfunction_ss_dRdR::synapse0x1636790() {
   return (neuron0x161aab0()*0.48885);
}

double NNfunction_ss_dRdR::synapse0x16367d0() {
   return (neuron0x161adf0()*-0.373626);
}

double NNfunction_ss_dRdR::synapse0x1636810() {
   return (neuron0x161b130()*-0.106913);
}

double NNfunction_ss_dRdR::synapse0x1636b90() {
   return (neuron0x1616570()*-0.00463156);
}

double NNfunction_ss_dRdR::synapse0x1636bd0() {
   return (neuron0x16168b0()*-0.0160717);
}

double NNfunction_ss_dRdR::synapse0x1636c10() {
   return (neuron0x1616bf0()*0.00795113);
}

double NNfunction_ss_dRdR::synapse0x1636c50() {
   return (neuron0x1616f30()*-1.83495);
}

double NNfunction_ss_dRdR::synapse0x1636c90() {
   return (neuron0x1617270()*0.00183383);
}

double NNfunction_ss_dRdR::synapse0x1636cd0() {
   return (neuron0x16175b0()*0.00164297);
}

double NNfunction_ss_dRdR::synapse0x1636d10() {
   return (neuron0x16178f0()*-0.00451991);
}

double NNfunction_ss_dRdR::synapse0x1636d50() {
   return (neuron0x1617c30()*-0.0235224);
}

double NNfunction_ss_dRdR::synapse0x1636d90() {
   return (neuron0x1617f70()*0.00240702);
}

double NNfunction_ss_dRdR::synapse0x1636dd0() {
   return (neuron0x16182b0()*0.00764075);
}

double NNfunction_ss_dRdR::synapse0x1636e10() {
   return (neuron0x16185f0()*-0.00728527);
}

double NNfunction_ss_dRdR::synapse0x1636e50() {
   return (neuron0x1618930()*-0.0500307);
}

double NNfunction_ss_dRdR::synapse0x1636e90() {
   return (neuron0x1618c70()*-0.00579117);
}

double NNfunction_ss_dRdR::synapse0x1636ed0() {
   return (neuron0x1618fb0()*0.00173398);
}

double NNfunction_ss_dRdR::synapse0x1636f10() {
   return (neuron0x16192f0()*0.043047);
}

double NNfunction_ss_dRdR::synapse0x1636f50() {
   return (neuron0x1619630()*0.0011062);
}

double NNfunction_ss_dRdR::synapse0x16369e0() {
   return (neuron0x1619970()*-0.0363835);
}

double NNfunction_ss_dRdR::synapse0x1636a20() {
   return (neuron0x1619ed0()*-0.512322);
}

double NNfunction_ss_dRdR::synapse0x16370a0() {
   return (neuron0x161a0f0()*0.0163458);
}

double NNfunction_ss_dRdR::synapse0x16370e0() {
   return (neuron0x161a430()*-0.00844504);
}

double NNfunction_ss_dRdR::synapse0x1637120() {
   return (neuron0x161a770()*0.0107244);
}

double NNfunction_ss_dRdR::synapse0x1637160() {
   return (neuron0x161aab0()*0.01561);
}

double NNfunction_ss_dRdR::synapse0x16371a0() {
   return (neuron0x161adf0()*-0.00407736);
}

double NNfunction_ss_dRdR::synapse0x16371e0() {
   return (neuron0x161b130()*-0.00910391);
}

double NNfunction_ss_dRdR::synapse0x1637560() {
   return (neuron0x1616570()*-0.0619032);
}

double NNfunction_ss_dRdR::synapse0x16375a0() {
   return (neuron0x16168b0()*-0.27352);
}

double NNfunction_ss_dRdR::synapse0x16375e0() {
   return (neuron0x1616bf0()*0.798032);
}

double NNfunction_ss_dRdR::synapse0x1637620() {
   return (neuron0x1616f30()*0.818909);
}

double NNfunction_ss_dRdR::synapse0x1637660() {
   return (neuron0x1617270()*0.198077);
}

double NNfunction_ss_dRdR::synapse0x16376a0() {
   return (neuron0x16175b0()*0.107463);
}

double NNfunction_ss_dRdR::synapse0x16376e0() {
   return (neuron0x16178f0()*0.126931);
}

double NNfunction_ss_dRdR::synapse0x1637720() {
   return (neuron0x1617c30()*0.266119);
}

double NNfunction_ss_dRdR::synapse0x1637760() {
   return (neuron0x1617f70()*-0.202462);
}

double NNfunction_ss_dRdR::synapse0x16377a0() {
   return (neuron0x16182b0()*0.0388146);
}

double NNfunction_ss_dRdR::synapse0x16377e0() {
   return (neuron0x16185f0()*0.0254988);
}

double NNfunction_ss_dRdR::synapse0x1637820() {
   return (neuron0x1618930()*-0.789061);
}

double NNfunction_ss_dRdR::synapse0x1637860() {
   return (neuron0x1618c70()*-0.0434691);
}

double NNfunction_ss_dRdR::synapse0x16378a0() {
   return (neuron0x1618fb0()*0.624378);
}

double NNfunction_ss_dRdR::synapse0x16378e0() {
   return (neuron0x16192f0()*0.299331);
}

double NNfunction_ss_dRdR::synapse0x1637920() {
   return (neuron0x1619630()*-0.443279);
}

double NNfunction_ss_dRdR::synapse0x16373b0() {
   return (neuron0x1619970()*-0.236468);
}

double NNfunction_ss_dRdR::synapse0x16373f0() {
   return (neuron0x1619ed0()*-0.570449);
}

double NNfunction_ss_dRdR::synapse0x1637a70() {
   return (neuron0x161a0f0()*0.251745);
}

double NNfunction_ss_dRdR::synapse0x1637ab0() {
   return (neuron0x161a430()*-0.337955);
}

double NNfunction_ss_dRdR::synapse0x1637af0() {
   return (neuron0x161a770()*0.000256793);
}

double NNfunction_ss_dRdR::synapse0x1637b30() {
   return (neuron0x161aab0()*-0.191396);
}

double NNfunction_ss_dRdR::synapse0x1637b70() {
   return (neuron0x161adf0()*-0.152034);
}

double NNfunction_ss_dRdR::synapse0x1637bb0() {
   return (neuron0x161b130()*-0.113837);
}

double NNfunction_ss_dRdR::synapse0x1620660() {
   return (neuron0x1616570()*-0.0489074);
}

double NNfunction_ss_dRdR::synapse0x16206a0() {
   return (neuron0x16168b0()*0.115473);
}

double NNfunction_ss_dRdR::synapse0x16206e0() {
   return (neuron0x1616bf0()*0.0507783);
}

double NNfunction_ss_dRdR::synapse0x1620720() {
   return (neuron0x1616f30()*0.546766);
}

double NNfunction_ss_dRdR::synapse0x1620760() {
   return (neuron0x1617270()*0.147978);
}

double NNfunction_ss_dRdR::synapse0x16207a0() {
   return (neuron0x16175b0()*-0.0175274);
}

double NNfunction_ss_dRdR::synapse0x16207e0() {
   return (neuron0x16178f0()*-0.0122655);
}

double NNfunction_ss_dRdR::synapse0x1620820() {
   return (neuron0x1617c30()*0.0820093);
}

double NNfunction_ss_dRdR::synapse0x1638340() {
   return (neuron0x1617f70()*-0.0172907);
}

double NNfunction_ss_dRdR::synapse0x1638380() {
   return (neuron0x16182b0()*-0.0125834);
}

double NNfunction_ss_dRdR::synapse0x16383c0() {
   return (neuron0x16185f0()*0.0280911);
}

double NNfunction_ss_dRdR::synapse0x1638400() {
   return (neuron0x1618930()*-0.0376903);
}

double NNfunction_ss_dRdR::synapse0x1638440() {
   return (neuron0x1618c70()*0.00407109);
}

double NNfunction_ss_dRdR::synapse0x1638480() {
   return (neuron0x1618fb0()*0.0154389);
}

double NNfunction_ss_dRdR::synapse0x16384c0() {
   return (neuron0x16192f0()*0.0141709);
}

double NNfunction_ss_dRdR::synapse0x1638500() {
   return (neuron0x1619630()*-0.0123484);
}

double NNfunction_ss_dRdR::synapse0x1637d80() {
   return (neuron0x1619970()*-0.119316);
}

double NNfunction_ss_dRdR::synapse0x1637dc0() {
   return (neuron0x1619ed0()*-0.0564743);
}

double NNfunction_ss_dRdR::synapse0x1638650() {
   return (neuron0x161a0f0()*-0.0235008);
}

double NNfunction_ss_dRdR::synapse0x1638690() {
   return (neuron0x161a430()*-0.0411606);
}

double NNfunction_ss_dRdR::synapse0x16386d0() {
   return (neuron0x161a770()*0.0123996);
}

double NNfunction_ss_dRdR::synapse0x1638710() {
   return (neuron0x161aab0()*0.0353701);
}

double NNfunction_ss_dRdR::synapse0x1638750() {
   return (neuron0x161adf0()*-0.0500905);
}

double NNfunction_ss_dRdR::synapse0x1638790() {
   return (neuron0x161b130()*-0.0226559);
}

double NNfunction_ss_dRdR::synapse0x1638b10() {
   return (neuron0x1616570()*0.0651355);
}

double NNfunction_ss_dRdR::synapse0x1638b50() {
   return (neuron0x16168b0()*0.2512);
}

double NNfunction_ss_dRdR::synapse0x1638b90() {
   return (neuron0x1616bf0()*0.299025);
}

double NNfunction_ss_dRdR::synapse0x1638bd0() {
   return (neuron0x1616f30()*-1.28006);
}

double NNfunction_ss_dRdR::synapse0x1638c10() {
   return (neuron0x1617270()*-0.0610341);
}

double NNfunction_ss_dRdR::synapse0x1638c50() {
   return (neuron0x16175b0()*0.192691);
}

double NNfunction_ss_dRdR::synapse0x1638c90() {
   return (neuron0x16178f0()*0.452588);
}

double NNfunction_ss_dRdR::synapse0x1638cd0() {
   return (neuron0x1617c30()*-0.610107);
}

double NNfunction_ss_dRdR::synapse0x1638d10() {
   return (neuron0x1617f70()*-0.0939367);
}

double NNfunction_ss_dRdR::synapse0x1638d50() {
   return (neuron0x16182b0()*0.0954659);
}

double NNfunction_ss_dRdR::synapse0x1638d90() {
   return (neuron0x16185f0()*0.00361785);
}

double NNfunction_ss_dRdR::synapse0x1638dd0() {
   return (neuron0x1618930()*0.073225);
}

double NNfunction_ss_dRdR::synapse0x1638e10() {
   return (neuron0x1618c70()*0.195736);
}

double NNfunction_ss_dRdR::synapse0x1638e50() {
   return (neuron0x1618fb0()*0.0145271);
}

double NNfunction_ss_dRdR::synapse0x1638e90() {
   return (neuron0x16192f0()*0.103883);
}

double NNfunction_ss_dRdR::synapse0x1638ed0() {
   return (neuron0x1619630()*-0.0203654);
}

double NNfunction_ss_dRdR::synapse0x1638960() {
   return (neuron0x1619970()*-0.456839);
}

double NNfunction_ss_dRdR::synapse0x16389a0() {
   return (neuron0x1619ed0()*0.111568);
}

double NNfunction_ss_dRdR::synapse0x1639020() {
   return (neuron0x161a0f0()*0.0933776);
}

double NNfunction_ss_dRdR::synapse0x1639060() {
   return (neuron0x161a430()*0.197268);
}

double NNfunction_ss_dRdR::synapse0x16390a0() {
   return (neuron0x161a770()*-0.00390322);
}

double NNfunction_ss_dRdR::synapse0x16390e0() {
   return (neuron0x161aab0()*-0.0601036);
}

double NNfunction_ss_dRdR::synapse0x1639120() {
   return (neuron0x161adf0()*0.151322);
}

double NNfunction_ss_dRdR::synapse0x1639160() {
   return (neuron0x161b130()*-0.179923);
}

double NNfunction_ss_dRdR::synapse0x16394e0() {
   return (neuron0x1616570()*-0.730668);
}

double NNfunction_ss_dRdR::synapse0x1639520() {
   return (neuron0x16168b0()*0.287192);
}

double NNfunction_ss_dRdR::synapse0x1639560() {
   return (neuron0x1616bf0()*0.880935);
}

double NNfunction_ss_dRdR::synapse0x16395a0() {
   return (neuron0x1616f30()*-0.444489);
}

double NNfunction_ss_dRdR::synapse0x16395e0() {
   return (neuron0x1617270()*0.198594);
}

double NNfunction_ss_dRdR::synapse0x1639620() {
   return (neuron0x16175b0()*0.461325);
}

double NNfunction_ss_dRdR::synapse0x1639660() {
   return (neuron0x16178f0()*0.164368);
}

double NNfunction_ss_dRdR::synapse0x16396a0() {
   return (neuron0x1617c30()*-0.49588);
}

double NNfunction_ss_dRdR::synapse0x16396e0() {
   return (neuron0x1617f70()*0.482219);
}

double NNfunction_ss_dRdR::synapse0x1639720() {
   return (neuron0x16182b0()*0.746456);
}

double NNfunction_ss_dRdR::synapse0x1639760() {
   return (neuron0x16185f0()*-0.302647);
}

double NNfunction_ss_dRdR::synapse0x16397a0() {
   return (neuron0x1618930()*-0.988064);
}

double NNfunction_ss_dRdR::synapse0x16397e0() {
   return (neuron0x1618c70()*-0.140086);
}

double NNfunction_ss_dRdR::synapse0x1639820() {
   return (neuron0x1618fb0()*0.402787);
}

double NNfunction_ss_dRdR::synapse0x1639860() {
   return (neuron0x16192f0()*-0.643574);
}

double NNfunction_ss_dRdR::synapse0x16398a0() {
   return (neuron0x1619630()*-0.699049);
}

double NNfunction_ss_dRdR::synapse0x1639330() {
   return (neuron0x1619970()*0.528978);
}

double NNfunction_ss_dRdR::synapse0x1639370() {
   return (neuron0x1619ed0()*0.170607);
}

double NNfunction_ss_dRdR::synapse0x1629ea0() {
   return (neuron0x161a0f0()*-0.665699);
}

double NNfunction_ss_dRdR::synapse0x1629ee0() {
   return (neuron0x161a430()*-0.634079);
}

double NNfunction_ss_dRdR::synapse0x1629f20() {
   return (neuron0x161a770()*-0.509604);
}

double NNfunction_ss_dRdR::synapse0x1629f60() {
   return (neuron0x161aab0()*0.495746);
}

double NNfunction_ss_dRdR::synapse0x1629fa0() {
   return (neuron0x161adf0()*0.376233);
}

double NNfunction_ss_dRdR::synapse0x1629fe0() {
   return (neuron0x161b130()*-0.23328);
}

double NNfunction_ss_dRdR::synapse0x162a360() {
   return (neuron0x1616570()*0.1185);
}

double NNfunction_ss_dRdR::synapse0x162a3a0() {
   return (neuron0x16168b0()*-0.0306225);
}

double NNfunction_ss_dRdR::synapse0x162a3e0() {
   return (neuron0x1616bf0()*-0.0554925);
}

double NNfunction_ss_dRdR::synapse0x162a420() {
   return (neuron0x1616f30()*0.387954);
}

double NNfunction_ss_dRdR::synapse0x162a460() {
   return (neuron0x1617270()*-0.0810154);
}

double NNfunction_ss_dRdR::synapse0x162a4a0() {
   return (neuron0x16175b0()*-0.00198043);
}

double NNfunction_ss_dRdR::synapse0x162a4e0() {
   return (neuron0x16178f0()*-0.0923212);
}

double NNfunction_ss_dRdR::synapse0x162a520() {
   return (neuron0x1617c30()*-0.0907333);
}

double NNfunction_ss_dRdR::synapse0x162a560() {
   return (neuron0x1617f70()*0.142393);
}

double NNfunction_ss_dRdR::synapse0x162a5a0() {
   return (neuron0x16182b0()*-0.114321);
}

double NNfunction_ss_dRdR::synapse0x162a5e0() {
   return (neuron0x16185f0()*0.204582);
}

double NNfunction_ss_dRdR::synapse0x162a620() {
   return (neuron0x1618930()*-0.0405919);
}

double NNfunction_ss_dRdR::synapse0x162a660() {
   return (neuron0x1618c70()*-0.0190407);
}

double NNfunction_ss_dRdR::synapse0x162a6a0() {
   return (neuron0x1618fb0()*-0.0252413);
}

double NNfunction_ss_dRdR::synapse0x162a6e0() {
   return (neuron0x16192f0()*0.035105);
}

double NNfunction_ss_dRdR::synapse0x162a720() {
   return (neuron0x1619630()*0.0216593);
}

double NNfunction_ss_dRdR::synapse0x162a1b0() {
   return (neuron0x1619970()*0.0289062);
}

double NNfunction_ss_dRdR::synapse0x162a1f0() {
   return (neuron0x1619ed0()*-0.449015);
}

double NNfunction_ss_dRdR::synapse0x162a870() {
   return (neuron0x161a0f0()*-0.087881);
}

double NNfunction_ss_dRdR::synapse0x162a8b0() {
   return (neuron0x161a430()*0.0207985);
}

double NNfunction_ss_dRdR::synapse0x162a8f0() {
   return (neuron0x161a770()*-0.00420116);
}

double NNfunction_ss_dRdR::synapse0x162a930() {
   return (neuron0x161aab0()*-0.0135494);
}

double NNfunction_ss_dRdR::synapse0x162a970() {
   return (neuron0x161adf0()*0.00529201);
}

double NNfunction_ss_dRdR::synapse0x162a9b0() {
   return (neuron0x161b130()*0.00688239);
}

double NNfunction_ss_dRdR::synapse0x162ad30() {
   return (neuron0x1616570()*0.00761178);
}

double NNfunction_ss_dRdR::synapse0x162ad70() {
   return (neuron0x16168b0()*0.0172642);
}

double NNfunction_ss_dRdR::synapse0x162adb0() {
   return (neuron0x1616bf0()*0.0192469);
}

double NNfunction_ss_dRdR::synapse0x162adf0() {
   return (neuron0x1616f30()*0.0327535);
}

double NNfunction_ss_dRdR::synapse0x162ae30() {
   return (neuron0x1617270()*-0.0112358);
}

double NNfunction_ss_dRdR::synapse0x162ae70() {
   return (neuron0x16175b0()*0.00307882);
}

double NNfunction_ss_dRdR::synapse0x162aeb0() {
   return (neuron0x16178f0()*0.00728555);
}

double NNfunction_ss_dRdR::synapse0x162aef0() {
   return (neuron0x1617c30()*-0.00283933);
}

double NNfunction_ss_dRdR::synapse0x162af30() {
   return (neuron0x1617f70()*-0.00056713);
}

double NNfunction_ss_dRdR::synapse0x162af70() {
   return (neuron0x16182b0()*-0.046132);
}

double NNfunction_ss_dRdR::synapse0x162afb0() {
   return (neuron0x16185f0()*0.0115031);
}

double NNfunction_ss_dRdR::synapse0x162aff0() {
   return (neuron0x1618930()*0.0299051);
}

double NNfunction_ss_dRdR::synapse0x162b030() {
   return (neuron0x1618c70()*-0.00746704);
}

double NNfunction_ss_dRdR::synapse0x162b070() {
   return (neuron0x1618fb0()*0.0279911);
}

double NNfunction_ss_dRdR::synapse0x162b0b0() {
   return (neuron0x16192f0()*0.0422735);
}

double NNfunction_ss_dRdR::synapse0x162b0f0() {
   return (neuron0x1619630()*0.0843927);
}

double NNfunction_ss_dRdR::synapse0x162ab80() {
   return (neuron0x1619970()*0.0586321);
}

double NNfunction_ss_dRdR::synapse0x162abc0() {
   return (neuron0x1619ed0()*2.71184);
}

double NNfunction_ss_dRdR::synapse0x162b240() {
   return (neuron0x161a0f0()*0.00861317);
}

double NNfunction_ss_dRdR::synapse0x162b280() {
   return (neuron0x161a430()*0.0291316);
}

double NNfunction_ss_dRdR::synapse0x162b2c0() {
   return (neuron0x161a770()*0.0179753);
}

double NNfunction_ss_dRdR::synapse0x162b300() {
   return (neuron0x161aab0()*0.00934505);
}

double NNfunction_ss_dRdR::synapse0x162b340() {
   return (neuron0x161adf0()*-0.00844634);
}

double NNfunction_ss_dRdR::synapse0x162b380() {
   return (neuron0x161b130()*0.0126994);
}

double NNfunction_ss_dRdR::synapse0x162b700() {
   return (neuron0x1616570()*-0.0923617);
}

double NNfunction_ss_dRdR::synapse0x162b740() {
   return (neuron0x16168b0()*-0.096473);
}

double NNfunction_ss_dRdR::synapse0x162b780() {
   return (neuron0x1616bf0()*0.0216892);
}

double NNfunction_ss_dRdR::synapse0x162b7c0() {
   return (neuron0x1616f30()*0.0709031);
}

double NNfunction_ss_dRdR::synapse0x162b800() {
   return (neuron0x1617270()*0.0619817);
}

double NNfunction_ss_dRdR::synapse0x162b840() {
   return (neuron0x16175b0()*-0.0355628);
}

double NNfunction_ss_dRdR::synapse0x162b880() {
   return (neuron0x16178f0()*-0.0606932);
}

double NNfunction_ss_dRdR::synapse0x162b8c0() {
   return (neuron0x1617c30()*-0.0247166);
}

double NNfunction_ss_dRdR::synapse0x162b900() {
   return (neuron0x1617f70()*0.0219534);
}

double NNfunction_ss_dRdR::synapse0x162b940() {
   return (neuron0x16182b0()*0.0185214);
}

double NNfunction_ss_dRdR::synapse0x162b980() {
   return (neuron0x16185f0()*0.046443);
}

double NNfunction_ss_dRdR::synapse0x162b9c0() {
   return (neuron0x1618930()*-0.261858);
}

double NNfunction_ss_dRdR::synapse0x162ba00() {
   return (neuron0x1618c70()*-0.283348);
}

double NNfunction_ss_dRdR::synapse0x162ba40() {
   return (neuron0x1618fb0()*0.0706875);
}

double NNfunction_ss_dRdR::synapse0x162ba80() {
   return (neuron0x16192f0()*-0.346079);
}

double NNfunction_ss_dRdR::synapse0x162bac0() {
   return (neuron0x1619630()*-0.259353);
}

double NNfunction_ss_dRdR::synapse0x162b550() {
   return (neuron0x1619970()*0.0969772);
}

double NNfunction_ss_dRdR::synapse0x162b590() {
   return (neuron0x1619ed0()*-0.666208);
}

double NNfunction_ss_dRdR::synapse0x162bc10() {
   return (neuron0x161a0f0()*-0.137504);
}

double NNfunction_ss_dRdR::synapse0x162bc50() {
   return (neuron0x161a430()*0.0454821);
}

double NNfunction_ss_dRdR::synapse0x162bc90() {
   return (neuron0x161a770()*-0.0553046);
}

double NNfunction_ss_dRdR::synapse0x162bcd0() {
   return (neuron0x161aab0()*-0.119876);
}

double NNfunction_ss_dRdR::synapse0x162bd10() {
   return (neuron0x161adf0()*-0.0932912);
}

double NNfunction_ss_dRdR::synapse0x162bd50() {
   return (neuron0x161b130()*0.0950084);
}

double NNfunction_ss_dRdR::synapse0x163dc20() {
   return (neuron0x1616570()*0.0505784);
}

double NNfunction_ss_dRdR::synapse0x163dc60() {
   return (neuron0x16168b0()*-0.140561);
}

double NNfunction_ss_dRdR::synapse0x163dca0() {
   return (neuron0x1616bf0()*-0.099272);
}

double NNfunction_ss_dRdR::synapse0x163dce0() {
   return (neuron0x1616f30()*2.18471);
}

double NNfunction_ss_dRdR::synapse0x163dd20() {
   return (neuron0x1617270()*0.0919227);
}

double NNfunction_ss_dRdR::synapse0x163dd60() {
   return (neuron0x16175b0()*-0.300516);
}

double NNfunction_ss_dRdR::synapse0x163dda0() {
   return (neuron0x16178f0()*0.20447);
}

double NNfunction_ss_dRdR::synapse0x163dde0() {
   return (neuron0x1617c30()*-0.225559);
}

double NNfunction_ss_dRdR::synapse0x163de20() {
   return (neuron0x1617f70()*0.0488168);
}

double NNfunction_ss_dRdR::synapse0x163de60() {
   return (neuron0x16182b0()*-0.0649353);
}

double NNfunction_ss_dRdR::synapse0x163dea0() {
   return (neuron0x16185f0()*-0.0836436);
}

double NNfunction_ss_dRdR::synapse0x163dee0() {
   return (neuron0x1618930()*-0.0694791);
}

double NNfunction_ss_dRdR::synapse0x163df20() {
   return (neuron0x1618c70()*0.160829);
}

double NNfunction_ss_dRdR::synapse0x163df60() {
   return (neuron0x1618fb0()*-0.119427);
}

double NNfunction_ss_dRdR::synapse0x163dfa0() {
   return (neuron0x16192f0()*-0.169269);
}

double NNfunction_ss_dRdR::synapse0x163dfe0() {
   return (neuron0x1619630()*0.0867761);
}

double NNfunction_ss_dRdR::synapse0x162bd90() {
   return (neuron0x1619970()*-0.397036);
}

double NNfunction_ss_dRdR::synapse0x162bdd0() {
   return (neuron0x1619ed0()*-0.676416);
}

double NNfunction_ss_dRdR::synapse0x163e130() {
   return (neuron0x161a0f0()*-0.0205404);
}

double NNfunction_ss_dRdR::synapse0x163e170() {
   return (neuron0x161a430()*0.0432517);
}

double NNfunction_ss_dRdR::synapse0x163e1b0() {
   return (neuron0x161a770()*-0.0807133);
}

double NNfunction_ss_dRdR::synapse0x163e1f0() {
   return (neuron0x161aab0()*-0.0521938);
}

double NNfunction_ss_dRdR::synapse0x163e230() {
   return (neuron0x161adf0()*0.0902691);
}

double NNfunction_ss_dRdR::synapse0x163e270() {
   return (neuron0x161b130()*-0.12889);
}

double NNfunction_ss_dRdR::synapse0x163e5f0() {
   return (neuron0x1616570()*0.00313323);
}

double NNfunction_ss_dRdR::synapse0x163e630() {
   return (neuron0x16168b0()*-0.0171272);
}

double NNfunction_ss_dRdR::synapse0x163e670() {
   return (neuron0x1616bf0()*-0.0101767);
}

double NNfunction_ss_dRdR::synapse0x163e6b0() {
   return (neuron0x1616f30()*13.3678);
}

double NNfunction_ss_dRdR::synapse0x163e6f0() {
   return (neuron0x1617270()*-0.0408027);
}

double NNfunction_ss_dRdR::synapse0x163e730() {
   return (neuron0x16175b0()*-0.0208036);
}

double NNfunction_ss_dRdR::synapse0x163e770() {
   return (neuron0x16178f0()*-0.0196276);
}

double NNfunction_ss_dRdR::synapse0x163e7b0() {
   return (neuron0x1617c30()*0.00762228);
}

double NNfunction_ss_dRdR::synapse0x163e7f0() {
   return (neuron0x1617f70()*0.00912219);
}

double NNfunction_ss_dRdR::synapse0x163e830() {
   return (neuron0x16182b0()*0.0275353);
}

double NNfunction_ss_dRdR::synapse0x163e870() {
   return (neuron0x16185f0()*0.00750985);
}

double NNfunction_ss_dRdR::synapse0x163e8b0() {
   return (neuron0x1618930()*0.0276526);
}

double NNfunction_ss_dRdR::synapse0x163e8f0() {
   return (neuron0x1618c70()*0.020449);
}

double NNfunction_ss_dRdR::synapse0x163e930() {
   return (neuron0x1618fb0()*0.012725);
}

double NNfunction_ss_dRdR::synapse0x163e970() {
   return (neuron0x16192f0()*0.034019);
}

double NNfunction_ss_dRdR::synapse0x163e9b0() {
   return (neuron0x1619630()*-0.0121068);
}

double NNfunction_ss_dRdR::synapse0x163e440() {
   return (neuron0x1619970()*-0.0235855);
}

double NNfunction_ss_dRdR::synapse0x163e480() {
   return (neuron0x1619ed0()*0.616919);
}

double NNfunction_ss_dRdR::synapse0x163eb00() {
   return (neuron0x161a0f0()*0.0451563);
}

double NNfunction_ss_dRdR::synapse0x163eb40() {
   return (neuron0x161a430()*0.0201475);
}

double NNfunction_ss_dRdR::synapse0x163eb80() {
   return (neuron0x161a770()*0.0118921);
}

double NNfunction_ss_dRdR::synapse0x163ebc0() {
   return (neuron0x161aab0()*-0.00661868);
}

double NNfunction_ss_dRdR::synapse0x163ec00() {
   return (neuron0x161adf0()*-0.00964825);
}

double NNfunction_ss_dRdR::synapse0x163ec40() {
   return (neuron0x161b130()*0.0102469);
}

double NNfunction_ss_dRdR::synapse0x163efc0() {
   return (neuron0x1616570()*-0.0409452);
}

double NNfunction_ss_dRdR::synapse0x163f000() {
   return (neuron0x16168b0()*0.0550722);
}

double NNfunction_ss_dRdR::synapse0x163f040() {
   return (neuron0x1616bf0()*-0.0197657);
}

double NNfunction_ss_dRdR::synapse0x163f080() {
   return (neuron0x1616f30()*0.705345);
}

double NNfunction_ss_dRdR::synapse0x163f0c0() {
   return (neuron0x1617270()*-0.00913863);
}

double NNfunction_ss_dRdR::synapse0x163f100() {
   return (neuron0x16175b0()*-0.048371);
}

double NNfunction_ss_dRdR::synapse0x163f140() {
   return (neuron0x16178f0()*0.0563752);
}

double NNfunction_ss_dRdR::synapse0x163f180() {
   return (neuron0x1617c30()*0.140555);
}

double NNfunction_ss_dRdR::synapse0x163f1c0() {
   return (neuron0x1617f70()*-0.00686403);
}

double NNfunction_ss_dRdR::synapse0x163f200() {
   return (neuron0x16182b0()*-0.0636927);
}

double NNfunction_ss_dRdR::synapse0x163f240() {
   return (neuron0x16185f0()*0.00371774);
}

double NNfunction_ss_dRdR::synapse0x163f280() {
   return (neuron0x1618930()*0.189078);
}

double NNfunction_ss_dRdR::synapse0x163f2c0() {
   return (neuron0x1618c70()*-0.0255041);
}

double NNfunction_ss_dRdR::synapse0x163f300() {
   return (neuron0x1618fb0()*0.0324362);
}

double NNfunction_ss_dRdR::synapse0x163f340() {
   return (neuron0x16192f0()*-0.0853278);
}

double NNfunction_ss_dRdR::synapse0x163f380() {
   return (neuron0x1619630()*0.0605126);
}

double NNfunction_ss_dRdR::synapse0x163ee10() {
   return (neuron0x1619970()*0.0913951);
}

double NNfunction_ss_dRdR::synapse0x163ee50() {
   return (neuron0x1619ed0()*0.565586);
}

double NNfunction_ss_dRdR::synapse0x163f4d0() {
   return (neuron0x161a0f0()*-0.0410797);
}

double NNfunction_ss_dRdR::synapse0x163f510() {
   return (neuron0x161a430()*0.0498805);
}

double NNfunction_ss_dRdR::synapse0x163f550() {
   return (neuron0x161a770()*-0.0546414);
}

double NNfunction_ss_dRdR::synapse0x163f590() {
   return (neuron0x161aab0()*-0.0271104);
}

double NNfunction_ss_dRdR::synapse0x163f5d0() {
   return (neuron0x161adf0()*-0.0138339);
}

double NNfunction_ss_dRdR::synapse0x163f610() {
   return (neuron0x161b130()*0.056336);
}

double NNfunction_ss_dRdR::synapse0x163f990() {
   return (neuron0x1616570()*-0.000612059);
}

double NNfunction_ss_dRdR::synapse0x163f9d0() {
   return (neuron0x16168b0()*-0.00937939);
}

double NNfunction_ss_dRdR::synapse0x163fa10() {
   return (neuron0x1616bf0()*0.00476294);
}

double NNfunction_ss_dRdR::synapse0x163fa50() {
   return (neuron0x1616f30()*-1.70859);
}

double NNfunction_ss_dRdR::synapse0x163fa90() {
   return (neuron0x1617270()*-0.00926404);
}

double NNfunction_ss_dRdR::synapse0x163fad0() {
   return (neuron0x16175b0()*0.00474328);
}

double NNfunction_ss_dRdR::synapse0x163fb10() {
   return (neuron0x16178f0()*-0.0151749);
}

double NNfunction_ss_dRdR::synapse0x163fb50() {
   return (neuron0x1617c30()*-0.0105452);
}

double NNfunction_ss_dRdR::synapse0x163fb90() {
   return (neuron0x1617f70()*-0.00181393);
}

double NNfunction_ss_dRdR::synapse0x163fbd0() {
   return (neuron0x16182b0()*0.00634121);
}

double NNfunction_ss_dRdR::synapse0x163fc10() {
   return (neuron0x16185f0()*0.00132782);
}

double NNfunction_ss_dRdR::synapse0x163fc50() {
   return (neuron0x1618930()*0.00607671);
}

double NNfunction_ss_dRdR::synapse0x163fc90() {
   return (neuron0x1618c70()*0.0039265);
}

double NNfunction_ss_dRdR::synapse0x163fcd0() {
   return (neuron0x1618fb0()*-0.000647118);
}

double NNfunction_ss_dRdR::synapse0x163fd10() {
   return (neuron0x16192f0()*0.00733766);
}

double NNfunction_ss_dRdR::synapse0x163fd50() {
   return (neuron0x1619630()*0.0127343);
}

double NNfunction_ss_dRdR::synapse0x163f7e0() {
   return (neuron0x1619970()*0.00391364);
}

double NNfunction_ss_dRdR::synapse0x163f820() {
   return (neuron0x1619ed0()*-0.0258471);
}

double NNfunction_ss_dRdR::synapse0x163fea0() {
   return (neuron0x161a0f0()*0.0185074);
}

double NNfunction_ss_dRdR::synapse0x163fee0() {
   return (neuron0x161a430()*0.00154584);
}

double NNfunction_ss_dRdR::synapse0x163ff20() {
   return (neuron0x161a770()*0.000474746);
}

double NNfunction_ss_dRdR::synapse0x163ff60() {
   return (neuron0x161aab0()*-0.00392307);
}

double NNfunction_ss_dRdR::synapse0x163ffa0() {
   return (neuron0x161adf0()*0.00390078);
}

double NNfunction_ss_dRdR::synapse0x163ffe0() {
   return (neuron0x161b130()*0.000831402);
}

double NNfunction_ss_dRdR::synapse0x161c580() {
   return (neuron0x161b5d0()*0.465557);
}

double NNfunction_ss_dRdR::synapse0x161c5c0() {
   return (neuron0x161bee0()*-0.618088);
}

double NNfunction_ss_dRdR::synapse0x161da90() {
   return (neuron0x161c9c0()*0.146652);
}

double NNfunction_ss_dRdR::synapse0x161dad0() {
   return (neuron0x13d6250()*0.574171);
}

double NNfunction_ss_dRdR::synapse0x161e460() {
   return (neuron0x161d7e0()*-0.3653);
}

double NNfunction_ss_dRdR::synapse0x161e4a0() {
   return (neuron0x161e1b0()*1.08193);
}

double NNfunction_ss_dRdR::synapse0x161f230() {
   return (neuron0x161ef80()*0.996284);
}

double NNfunction_ss_dRdR::synapse0x161f270() {
   return (neuron0x161f950()*-0.812901);
}

double NNfunction_ss_dRdR::synapse0x161fc00() {
   return (neuron0x1620320()*0.866585);
}

double NNfunction_ss_dRdR::synapse0x161fc40() {
   return (neuron0x1620e00()*-0.123477);
}

double NNfunction_ss_dRdR::synapse0x16205d0() {
   return (neuron0x16217d0()*-0.196339);
}

double NNfunction_ss_dRdR::synapse0x1620610() {
   return (neuron0x161e8b0()*-0.463979);
}

double NNfunction_ss_dRdR::synapse0x16210b0() {
   return (neuron0x1623380()*0.492447);
}

double NNfunction_ss_dRdR::synapse0x16210f0() {
   return (neuron0x1623d50()*0.648989);
}

double NNfunction_ss_dRdR::synapse0x1621a80() {
   return (neuron0x1624720()*-0.86174);
}

double NNfunction_ss_dRdR::synapse0x1621ac0() {
   return (neuron0x16250f0()*0.136509);
}

double NNfunction_ss_dRdR::synapse0x161eb60() {
   return (neuron0x1626f00()*-0.943802);
}

double NNfunction_ss_dRdR::synapse0x161eba0() {
   return (neuron0x16271e0()*-0.507278);
}

double NNfunction_ss_dRdR::synapse0x1623630() {
   return (neuron0x1627bb0()*0.497644);
}

double NNfunction_ss_dRdR::synapse0x1623670() {
   return (neuron0x1628580()*0.193611);
}

double NNfunction_ss_dRdR::synapse0x1624000() {
   return (neuron0x1628f50()*0.59778);
}

double NNfunction_ss_dRdR::synapse0x1624040() {
   return (neuron0x1629920()*-1.15199);
}

double NNfunction_ss_dRdR::synapse0x16249d0() {
   return (neuron0x1622470()*0.236908);
}

double NNfunction_ss_dRdR::synapse0x1624a10() {
   return (neuron0x1622e40()*-0.350514);
}

double NNfunction_ss_dRdR::synapse0x16253a0() {
   return (neuron0x162c6b0()*0.730647);
}

double NNfunction_ss_dRdR::synapse0x16253e0() {
   return (neuron0x162d080()*0.214748);
}

double NNfunction_ss_dRdR::synapse0x1619510() {
   return (neuron0x162da50()*0.310726);
}

double NNfunction_ss_dRdR::synapse0x1619550() {
   return (neuron0x162e420()*0.702668);
}

double NNfunction_ss_dRdR::synapse0x1627490() {
   return (neuron0x162edf0()*-0.184222);
}

double NNfunction_ss_dRdR::synapse0x16274d0() {
   return (neuron0x162f7c0()*-0.0580901);
}

double NNfunction_ss_dRdR::synapse0x1627e60() {
   return (neuron0x1630190()*1.04862);
}

double NNfunction_ss_dRdR::synapse0x1627ea0() {
   return (neuron0x1630b60()*-1.18294);
}

double NNfunction_ss_dRdR::synapse0x1628830() {
   return (neuron0x1626bf0()*0.000815895);
}

double NNfunction_ss_dRdR::synapse0x1628870() {
   return (neuron0x1633740()*-0.076973);
}

double NNfunction_ss_dRdR::synapse0x1629200() {
   return (neuron0x1634110()*-1.05402);
}

double NNfunction_ss_dRdR::synapse0x1629240() {
   return (neuron0x1634ae0()*0.147199);
}

double NNfunction_ss_dRdR::synapse0x1629bd0() {
   return (neuron0x16354b0()*0.594697);
}

double NNfunction_ss_dRdR::synapse0x1629c10() {
   return (neuron0x1635e80()*0.285093);
}

double NNfunction_ss_dRdR::synapse0x1622720() {
   return (neuron0x1636850()*-0.180875);
}

double NNfunction_ss_dRdR::synapse0x1622760() {
   return (neuron0x1637220()*0.277263);
}

double NNfunction_ss_dRdR::synapse0x162bfd0() {
   return (neuron0x1637bf0()*0.637151);
}

double NNfunction_ss_dRdR::synapse0x162c010() {
   return (neuron0x16387d0()*-0.743255);
}

double NNfunction_ss_dRdR::synapse0x162c960() {
   return (neuron0x16391a0()*0.464092);
}

double NNfunction_ss_dRdR::synapse0x162c9a0() {
   return (neuron0x162a020()*0.348722);
}

double NNfunction_ss_dRdR::synapse0x162d330() {
   return (neuron0x162a9f0()*0.609465);
}

double NNfunction_ss_dRdR::synapse0x162d370() {
   return (neuron0x162b3c0()*0.146819);
}

double NNfunction_ss_dRdR::synapse0x162dd00() {
   return (neuron0x163da00()*1.09459);
}

double NNfunction_ss_dRdR::synapse0x162dd40() {
   return (neuron0x163e2b0()*1.87906);
}

double NNfunction_ss_dRdR::synapse0x162e6d0() {
   return (neuron0x163ec80()*0.752038);
}

double NNfunction_ss_dRdR::synapse0x162e710() {
   return (neuron0x163f650()*0.00315997);
}

double NNfunction_ss_dRdR::synapse0x1630e10() {
   return (neuron0x161b5d0()*0.149092);
}

double NNfunction_ss_dRdR::synapse0x1630e50() {
   return (neuron0x161bee0()*-0.0905881);
}

double NNfunction_ss_dRdR::synapse0x16263d0() {
   return (neuron0x161c9c0()*-0.110163);
}

double NNfunction_ss_dRdR::synapse0x1626410() {
   return (neuron0x13d6250()*-0.894853);
}

double NNfunction_ss_dRdR::synapse0x16339f0() {
   return (neuron0x161d7e0()*-0.279698);
}

double NNfunction_ss_dRdR::synapse0x1633a30() {
   return (neuron0x161e1b0()*-0.338338);
}

double NNfunction_ss_dRdR::synapse0x16343c0() {
   return (neuron0x161ef80()*0.120593);
}

double NNfunction_ss_dRdR::synapse0x1634400() {
   return (neuron0x161f950()*-0.310607);
}

double NNfunction_ss_dRdR::synapse0x1634d90() {
   return (neuron0x1620320()*0.876673);
}

double NNfunction_ss_dRdR::synapse0x1634dd0() {
   return (neuron0x1620e00()*0.0444096);
}

double NNfunction_ss_dRdR::synapse0x1635760() {
   return (neuron0x16217d0()*0.0964775);
}

double NNfunction_ss_dRdR::synapse0x16357a0() {
   return (neuron0x161e8b0()*-0.0259276);
}

double NNfunction_ss_dRdR::synapse0x1636130() {
   return (neuron0x1623380()*-0.219896);
}

double NNfunction_ss_dRdR::synapse0x1636170() {
   return (neuron0x1623d50()*0.221831);
}

double NNfunction_ss_dRdR::synapse0x1636b00() {
   return (neuron0x1624720()*-0.0781607);
}

double NNfunction_ss_dRdR::synapse0x1636b40() {
   return (neuron0x16250f0()*0.415366);
}

double NNfunction_ss_dRdR::synapse0x16374d0() {
   return (neuron0x1626f00()*-0.617084);
}

double NNfunction_ss_dRdR::synapse0x1637510() {
   return (neuron0x16271e0()*-0.252574);
}

double NNfunction_ss_dRdR::synapse0x1637ea0() {
   return (neuron0x1627bb0()*1.37516);
}

double NNfunction_ss_dRdR::synapse0x1637ee0() {
   return (neuron0x1628580()*0.076853);
}

double NNfunction_ss_dRdR::synapse0x1638a80() {
   return (neuron0x1628f50()*-0.0841149);
}

double NNfunction_ss_dRdR::synapse0x1638ac0() {
   return (neuron0x1629920()*0.0801705);
}

double NNfunction_ss_dRdR::synapse0x1639450() {
   return (neuron0x1622470()*-0.291841);
}

double NNfunction_ss_dRdR::synapse0x1639490() {
   return (neuron0x1622e40()*-0.0121986);
}

double NNfunction_ss_dRdR::synapse0x162a2d0() {
   return (neuron0x162c6b0()*-0.42118);
}

double NNfunction_ss_dRdR::synapse0x162a310() {
   return (neuron0x162d080()*0.0990042);
}

double NNfunction_ss_dRdR::synapse0x162aca0() {
   return (neuron0x162da50()*-0.155854);
}

double NNfunction_ss_dRdR::synapse0x162ace0() {
   return (neuron0x162e420()*-0.128364);
}

double NNfunction_ss_dRdR::synapse0x162b670() {
   return (neuron0x162edf0()*-0.318135);
}

double NNfunction_ss_dRdR::synapse0x162b6b0() {
   return (neuron0x162f7c0()*-0.0464749);
}

double NNfunction_ss_dRdR::synapse0x163db90() {
   return (neuron0x1630190()*-0.697318);
}

double NNfunction_ss_dRdR::synapse0x163dbd0() {
   return (neuron0x1630b60()*-0.985227);
}

double NNfunction_ss_dRdR::synapse0x163e560() {
   return (neuron0x1626bf0()*0.0565516);
}

double NNfunction_ss_dRdR::synapse0x163e5a0() {
   return (neuron0x1633740()*-1.68035);
}

double NNfunction_ss_dRdR::synapse0x163ef30() {
   return (neuron0x1634110()*-0.218264);
}

double NNfunction_ss_dRdR::synapse0x163ef70() {
   return (neuron0x1634ae0()*-0.27999);
}

double NNfunction_ss_dRdR::synapse0x163f900() {
   return (neuron0x16354b0()*-0.0481566);
}

double NNfunction_ss_dRdR::synapse0x163f940() {
   return (neuron0x1635e80()*-0.133964);
}

double NNfunction_ss_dRdR::synapse0x161b7f0() {
   return (neuron0x1636850()*-0.909685);
}

double NNfunction_ss_dRdR::synapse0x161b830() {
   return (neuron0x1637220()*-0.00762616);
}

double NNfunction_ss_dRdR::synapse0x162f0a0() {
   return (neuron0x1637bf0()*-0.106832);
}

double NNfunction_ss_dRdR::synapse0x162f0e0() {
   return (neuron0x16387d0()*-0.0526912);
}

double NNfunction_ss_dRdR::synapse0x1640020() {
   return (neuron0x16391a0()*0.120654);
}

double NNfunction_ss_dRdR::synapse0x1640060() {
   return (neuron0x162a020()*-0.112646);
}

double NNfunction_ss_dRdR::synapse0x16400a0() {
   return (neuron0x162a9f0()*-0.320315);
}

double NNfunction_ss_dRdR::synapse0x16400e0() {
   return (neuron0x162b3c0()*-1.24806);
}

double NNfunction_ss_dRdR::synapse0x1646f90() {
   return (neuron0x163da00()*0.367204);
}

double NNfunction_ss_dRdR::synapse0x1646fd0() {
   return (neuron0x163e2b0()*-0.309945);
}

double NNfunction_ss_dRdR::synapse0x1647010() {
   return (neuron0x163ec80()*0.430498);
}

double NNfunction_ss_dRdR::synapse0x1647050() {
   return (neuron0x163f650()*0.879253);
}

double NNfunction_ss_dRdR::synapse0x16473d0() {
   return (neuron0x161b5d0()*-1.11451);
}

double NNfunction_ss_dRdR::synapse0x1647410() {
   return (neuron0x161bee0()*-1.20862);
}

double NNfunction_ss_dRdR::synapse0x1647450() {
   return (neuron0x161c9c0()*-1.58653);
}

double NNfunction_ss_dRdR::synapse0x1647490() {
   return (neuron0x13d6250()*0.187644);
}

double NNfunction_ss_dRdR::synapse0x16474d0() {
   return (neuron0x161d7e0()*0.198194);
}

double NNfunction_ss_dRdR::synapse0x1647510() {
   return (neuron0x161e1b0()*1.45138);
}

double NNfunction_ss_dRdR::synapse0x1647550() {
   return (neuron0x161ef80()*1.39215);
}

double NNfunction_ss_dRdR::synapse0x1647590() {
   return (neuron0x161f950()*-3.00974);
}

double NNfunction_ss_dRdR::synapse0x16475d0() {
   return (neuron0x1620320()*0.679928);
}

double NNfunction_ss_dRdR::synapse0x1647610() {
   return (neuron0x1620e00()*1.08814);
}

double NNfunction_ss_dRdR::synapse0x1647650() {
   return (neuron0x16217d0()*-1.35247);
}

double NNfunction_ss_dRdR::synapse0x1647690() {
   return (neuron0x161e8b0()*-1.69089);
}

double NNfunction_ss_dRdR::synapse0x16476d0() {
   return (neuron0x1623380()*1.10978);
}

double NNfunction_ss_dRdR::synapse0x1647710() {
   return (neuron0x1623d50()*5.29967);
}

double NNfunction_ss_dRdR::synapse0x1647750() {
   return (neuron0x1624720()*-0.840873);
}

double NNfunction_ss_dRdR::synapse0x1647790() {
   return (neuron0x16250f0()*1.37391);
}

double NNfunction_ss_dRdR::synapse0x1647220() {
   return (neuron0x1626f00()*0.354428);
}

double NNfunction_ss_dRdR::synapse0x1647260() {
   return (neuron0x16271e0()*-1.25293);
}

double NNfunction_ss_dRdR::synapse0x16478e0() {
   return (neuron0x1627bb0()*0.366583);
}

double NNfunction_ss_dRdR::synapse0x1647920() {
   return (neuron0x1628580()*-0.965061);
}

double NNfunction_ss_dRdR::synapse0x1647960() {
   return (neuron0x1628f50()*1.20194);
}

double NNfunction_ss_dRdR::synapse0x16479a0() {
   return (neuron0x1629920()*-1.97661);
}

double NNfunction_ss_dRdR::synapse0x16479e0() {
   return (neuron0x1622470()*-1.43928);
}

double NNfunction_ss_dRdR::synapse0x1647a20() {
   return (neuron0x1622e40()*-0.992527);
}

double NNfunction_ss_dRdR::synapse0x1647a60() {
   return (neuron0x162c6b0()*-1.60518);
}

double NNfunction_ss_dRdR::synapse0x1647aa0() {
   return (neuron0x162d080()*1.52135);
}

double NNfunction_ss_dRdR::synapse0x1647ae0() {
   return (neuron0x162da50()*-0.902983);
}

double NNfunction_ss_dRdR::synapse0x1647b20() {
   return (neuron0x162e420()*1.56905);
}

double NNfunction_ss_dRdR::synapse0x1647b60() {
   return (neuron0x162edf0()*-1.31371);
}

double NNfunction_ss_dRdR::synapse0x1647ba0() {
   return (neuron0x162f7c0()*-1.4347);
}

double NNfunction_ss_dRdR::synapse0x1647be0() {
   return (neuron0x1630190()*2.39562);
}

double NNfunction_ss_dRdR::synapse0x1647c20() {
   return (neuron0x1630b60()*-5.55905);
}

double NNfunction_ss_dRdR::synapse0x16477d0() {
   return (neuron0x1626bf0()*-0.723273);
}

double NNfunction_ss_dRdR::synapse0x1647810() {
   return (neuron0x1633740()*-0.620608);
}

double NNfunction_ss_dRdR::synapse0x1647850() {
   return (neuron0x1634110()*-0.472054);
}

double NNfunction_ss_dRdR::synapse0x1647890() {
   return (neuron0x1634ae0()*1.59735);
}

double NNfunction_ss_dRdR::synapse0x1647e70() {
   return (neuron0x16354b0()*0.973107);
}

double NNfunction_ss_dRdR::synapse0x1647eb0() {
   return (neuron0x1635e80()*-1.03288);
}

double NNfunction_ss_dRdR::synapse0x1647ef0() {
   return (neuron0x1636850()*3.23015);
}

double NNfunction_ss_dRdR::synapse0x1647f30() {
   return (neuron0x1637220()*1.40988);
}

double NNfunction_ss_dRdR::synapse0x1647f70() {
   return (neuron0x1637bf0()*0.172568);
}

double NNfunction_ss_dRdR::synapse0x1647fb0() {
   return (neuron0x16387d0()*-2.76374);
}

double NNfunction_ss_dRdR::synapse0x1647ff0() {
   return (neuron0x16391a0()*-1.04346);
}

double NNfunction_ss_dRdR::synapse0x1648030() {
   return (neuron0x162a020()*-0.603775);
}

double NNfunction_ss_dRdR::synapse0x1648070() {
   return (neuron0x162a9f0()*0.937846);
}

double NNfunction_ss_dRdR::synapse0x16480b0() {
   return (neuron0x162b3c0()*-0.646254);
}

double NNfunction_ss_dRdR::synapse0x16480f0() {
   return (neuron0x163da00()*4.03488);
}

double NNfunction_ss_dRdR::synapse0x1648130() {
   return (neuron0x163e2b0()*8.65344);
}

double NNfunction_ss_dRdR::synapse0x1648170() {
   return (neuron0x163ec80()*-0.285922);
}

double NNfunction_ss_dRdR::synapse0x16481b0() {
   return (neuron0x163f650()*-0.776456);
}

double NNfunction_ss_dRdR::synapse0x1648530() {
   return (neuron0x161b5d0()*-0.0211582);
}

double NNfunction_ss_dRdR::synapse0x1648570() {
   return (neuron0x161bee0()*-0.018527);
}

double NNfunction_ss_dRdR::synapse0x16485b0() {
   return (neuron0x161c9c0()*-0.0243317);
}

double NNfunction_ss_dRdR::synapse0x16485f0() {
   return (neuron0x13d6250()*-0.33534);
}

double NNfunction_ss_dRdR::synapse0x1648630() {
   return (neuron0x161d7e0()*-1.15833);
}

double NNfunction_ss_dRdR::synapse0x1648670() {
   return (neuron0x161e1b0()*-0.0477014);
}

double NNfunction_ss_dRdR::synapse0x16486b0() {
   return (neuron0x161ef80()*0.0332338);
}

double NNfunction_ss_dRdR::synapse0x16486f0() {
   return (neuron0x161f950()*0.0325051);
}

double NNfunction_ss_dRdR::synapse0x1648730() {
   return (neuron0x1620320()*-1.41574);
}

double NNfunction_ss_dRdR::synapse0x1648770() {
   return (neuron0x1620e00()*-0.0278514);
}

double NNfunction_ss_dRdR::synapse0x16487b0() {
   return (neuron0x16217d0()*0.00440438);
}

double NNfunction_ss_dRdR::synapse0x16487f0() {
   return (neuron0x161e8b0()*-0.0117669);
}

double NNfunction_ss_dRdR::synapse0x1648830() {
   return (neuron0x1623380()*-0.0185977);
}

double NNfunction_ss_dRdR::synapse0x1648870() {
   return (neuron0x1623d50()*1.70928);
}

double NNfunction_ss_dRdR::synapse0x16488b0() {
   return (neuron0x1624720()*-0.0311685);
}

double NNfunction_ss_dRdR::synapse0x16488f0() {
   return (neuron0x16250f0()*-0.0132773);
}

double NNfunction_ss_dRdR::synapse0x1648380() {
   return (neuron0x1626f00()*-2.01041);
}

double NNfunction_ss_dRdR::synapse0x16483c0() {
   return (neuron0x16271e0()*-0.0411303);
}

double NNfunction_ss_dRdR::synapse0x1648a40() {
   return (neuron0x1627bb0()*-1.4718);
}

double NNfunction_ss_dRdR::synapse0x1648a80() {
   return (neuron0x1628580()*0.0105993);
}

double NNfunction_ss_dRdR::synapse0x1648ac0() {
   return (neuron0x1628f50()*0.0235031);
}

double NNfunction_ss_dRdR::synapse0x1648b00() {
   return (neuron0x1629920()*-0.00455697);
}

double NNfunction_ss_dRdR::synapse0x1648b40() {
   return (neuron0x1622470()*-0.00551776);
}

double NNfunction_ss_dRdR::synapse0x1648b80() {
   return (neuron0x1622e40()*0.00772574);
}

double NNfunction_ss_dRdR::synapse0x1648bc0() {
   return (neuron0x162c6b0()*-0.0841377);
}

double NNfunction_ss_dRdR::synapse0x1648c00() {
   return (neuron0x162d080()*0.0316427);
}

double NNfunction_ss_dRdR::synapse0x1648c40() {
   return (neuron0x162da50()*-0.025032);
}

double NNfunction_ss_dRdR::synapse0x1648c80() {
   return (neuron0x162e420()*0.0277113);
}

double NNfunction_ss_dRdR::synapse0x1648cc0() {
   return (neuron0x162edf0()*-0.016305);
}

double NNfunction_ss_dRdR::synapse0x1648d00() {
   return (neuron0x162f7c0()*-0.031169);
}

double NNfunction_ss_dRdR::synapse0x1648d40() {
   return (neuron0x1630190()*-3.4711);
}

double NNfunction_ss_dRdR::synapse0x1648d80() {
   return (neuron0x1630b60()*2.54142);
}

double NNfunction_ss_dRdR::synapse0x1648930() {
   return (neuron0x1626bf0()*0.00115981);
}

double NNfunction_ss_dRdR::synapse0x1648970() {
   return (neuron0x1633740()*1.36257);
}

double NNfunction_ss_dRdR::synapse0x16489b0() {
   return (neuron0x1634110()*-0.0253685);
}

double NNfunction_ss_dRdR::synapse0x16489f0() {
   return (neuron0x1634ae0()*0.0211118);
}

double NNfunction_ss_dRdR::synapse0x1648fd0() {
   return (neuron0x16354b0()*-0.026338);
}

double NNfunction_ss_dRdR::synapse0x1649010() {
   return (neuron0x1635e80()*-0.0115175);
}

double NNfunction_ss_dRdR::synapse0x1649050() {
   return (neuron0x1636850()*-2.21934);
}

double NNfunction_ss_dRdR::synapse0x1649090() {
   return (neuron0x1637220()*0.0184665);
}

double NNfunction_ss_dRdR::synapse0x16490d0() {
   return (neuron0x1637bf0()*1.08583);
}

double NNfunction_ss_dRdR::synapse0x1649110() {
   return (neuron0x16387d0()*0.00245763);
}

double NNfunction_ss_dRdR::synapse0x1649150() {
   return (neuron0x16391a0()*-0.0153808);
}

double NNfunction_ss_dRdR::synapse0x1649190() {
   return (neuron0x162a020()*0.731245);
}

double NNfunction_ss_dRdR::synapse0x16491d0() {
   return (neuron0x162a9f0()*-0.608702);
}

double NNfunction_ss_dRdR::synapse0x1649210() {
   return (neuron0x162b3c0()*-0.274636);
}

double NNfunction_ss_dRdR::synapse0x1649250() {
   return (neuron0x163da00()*-0.0874848);
}

double NNfunction_ss_dRdR::synapse0x1649290() {
   return (neuron0x163e2b0()*-3.8664);
}

double NNfunction_ss_dRdR::synapse0x16492d0() {
   return (neuron0x163ec80()*0.640257);
}

double NNfunction_ss_dRdR::synapse0x1649310() {
   return (neuron0x163f650()*3.81481);
}

double NNfunction_ss_dRdR::synapse0x1649690() {
   return (neuron0x161b5d0()*-0.429619);
}

double NNfunction_ss_dRdR::synapse0x16496d0() {
   return (neuron0x161bee0()*-0.194479);
}

double NNfunction_ss_dRdR::synapse0x1649710() {
   return (neuron0x161c9c0()*-0.221493);
}

double NNfunction_ss_dRdR::synapse0x1649750() {
   return (neuron0x13d6250()*-0.783919);
}

double NNfunction_ss_dRdR::synapse0x1649790() {
   return (neuron0x161d7e0()*-0.327149);
}

double NNfunction_ss_dRdR::synapse0x16497d0() {
   return (neuron0x161e1b0()*-0.0952483);
}

double NNfunction_ss_dRdR::synapse0x1649810() {
   return (neuron0x161ef80()*-0.0228056);
}

double NNfunction_ss_dRdR::synapse0x1649850() {
   return (neuron0x161f950()*0.0338083);
}

double NNfunction_ss_dRdR::synapse0x1649890() {
   return (neuron0x1620320()*0.487523);
}

double NNfunction_ss_dRdR::synapse0x16498d0() {
   return (neuron0x1620e00()*-0.269016);
}

double NNfunction_ss_dRdR::synapse0x1649910() {
   return (neuron0x16217d0()*-0.174814);
}

double NNfunction_ss_dRdR::synapse0x1649950() {
   return (neuron0x161e8b0()*-0.147286);
}

double NNfunction_ss_dRdR::synapse0x1649990() {
   return (neuron0x1623380()*-0.0781719);
}

double NNfunction_ss_dRdR::synapse0x16499d0() {
   return (neuron0x1623d50()*-0.227837);
}

double NNfunction_ss_dRdR::synapse0x1649a10() {
   return (neuron0x1624720()*-0.0152178);
}

double NNfunction_ss_dRdR::synapse0x1649a50() {
   return (neuron0x16250f0()*-0.301128);
}

double NNfunction_ss_dRdR::synapse0x16494e0() {
   return (neuron0x1626f00()*-0.711041);
}

double NNfunction_ss_dRdR::synapse0x1649520() {
   return (neuron0x16271e0()*-0.0666151);
}

double NNfunction_ss_dRdR::synapse0x1649ba0() {
   return (neuron0x1627bb0()*0.375472);
}

double NNfunction_ss_dRdR::synapse0x1649be0() {
   return (neuron0x1628580()*0.0117112);
}

double NNfunction_ss_dRdR::synapse0x1649c20() {
   return (neuron0x1628f50()*0.211337);
}

double NNfunction_ss_dRdR::synapse0x1649c60() {
   return (neuron0x1629920()*-0.0573426);
}

double NNfunction_ss_dRdR::synapse0x1649ca0() {
   return (neuron0x1622470()*0.0294858);
}

double NNfunction_ss_dRdR::synapse0x1649ce0() {
   return (neuron0x1622e40()*0.0811066);
}

double NNfunction_ss_dRdR::synapse0x1649d20() {
   return (neuron0x162c6b0()*-0.570513);
}

double NNfunction_ss_dRdR::synapse0x1649d60() {
   return (neuron0x162d080()*-0.108166);
}

double NNfunction_ss_dRdR::synapse0x1649da0() {
   return (neuron0x162da50()*-0.0825313);
}

double NNfunction_ss_dRdR::synapse0x1649de0() {
   return (neuron0x162e420()*0.307552);
}

double NNfunction_ss_dRdR::synapse0x1649e20() {
   return (neuron0x162edf0()*0.256024);
}

double NNfunction_ss_dRdR::synapse0x1649e60() {
   return (neuron0x162f7c0()*-0.354624);
}

double NNfunction_ss_dRdR::synapse0x1649ea0() {
   return (neuron0x1630190()*-0.23409);
}

double NNfunction_ss_dRdR::synapse0x1649ee0() {
   return (neuron0x1630b60()*0.111293);
}

double NNfunction_ss_dRdR::synapse0x1649a90() {
   return (neuron0x1626bf0()*-0.0559557);
}

double NNfunction_ss_dRdR::synapse0x1649ad0() {
   return (neuron0x1633740()*-1.1951);
}

double NNfunction_ss_dRdR::synapse0x1649b10() {
   return (neuron0x1634110()*-0.0432307);
}

double NNfunction_ss_dRdR::synapse0x1649b50() {
   return (neuron0x1634ae0()*0.176104);
}

double NNfunction_ss_dRdR::synapse0x164a130() {
   return (neuron0x16354b0()*-0.0824093);
}

double NNfunction_ss_dRdR::synapse0x164a170() {
   return (neuron0x1635e80()*0.0493838);
}

double NNfunction_ss_dRdR::synapse0x164a1b0() {
   return (neuron0x1636850()*-0.310194);
}

double NNfunction_ss_dRdR::synapse0x164a1f0() {
   return (neuron0x1637220()*-0.0465787);
}

double NNfunction_ss_dRdR::synapse0x164a230() {
   return (neuron0x1637bf0()*-0.182579);
}

double NNfunction_ss_dRdR::synapse0x164a270() {
   return (neuron0x16387d0()*-0.14937);
}

double NNfunction_ss_dRdR::synapse0x164a2b0() {
   return (neuron0x16391a0()*-0.240996);
}

double NNfunction_ss_dRdR::synapse0x164a2f0() {
   return (neuron0x162a020()*-0.607196);
}

double NNfunction_ss_dRdR::synapse0x164a330() {
   return (neuron0x162a9f0()*0.16422);
}

double NNfunction_ss_dRdR::synapse0x164a370() {
   return (neuron0x162b3c0()*-0.715197);
}

double NNfunction_ss_dRdR::synapse0x164a3b0() {
   return (neuron0x163da00()*-0.287892);
}

double NNfunction_ss_dRdR::synapse0x164a3f0() {
   return (neuron0x163e2b0()*0.530233);
}

double NNfunction_ss_dRdR::synapse0x164a430() {
   return (neuron0x163ec80()*0.0630522);
}

double NNfunction_ss_dRdR::synapse0x164a470() {
   return (neuron0x163f650()*0.67049);
}

double NNfunction_ss_dRdR::synapse0x161b590() {
   return (neuron0x1646850()*-0.630851);
}

double NNfunction_ss_dRdR::synapse0x164a6d0() {
   return (neuron0x1646bf0()*-2.62696);
}

double NNfunction_ss_dRdR::synapse0x164a710() {
   return (neuron0x1647090()*-8.3938);
}

double NNfunction_ss_dRdR::synapse0x164a750() {
   return (neuron0x16481f0()*10.5425);
}

double NNfunction_ss_dRdR::synapse0x164a790() {
   return (neuron0x1649350()*-2.25749);
}

