#include "NNfunction_tb_t1t1.h"
#include <cmath>

double NNfunction_tb_t1t1::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.3724)/15.1897;
   input1 = (in1 - 44.9098)/934.798;
   input2 = (in2 - 506.288)/551.465;
   input3 = (in3 - 212.46)/781.966;
   input4 = (in4 - 995.584)/837.621;
   input5 = (in5 - 881.649)/827.951;
   input6 = (in6 - 886.521)/828.871;
   input7 = (in7 - 885.259)/810.952;
   input8 = (in8 - 882.659)/840.803;
   input9 = (in9 - 874.056)/830.107;
   input10 = (in10 - 888.044)/824.805;
   input11 = (in11 - 846.584)/767.585;
   input12 = (in12 - 848.834)/769.333;
   input13 = (in13 - 621.531)/482.845;
   input14 = (in14 - 849.274)/739.37;
   input15 = (in15 - 849.716)/738.285;
   input16 = (in16 - 573.222)/474.197;
   input17 = (in17 - 862.19)/785.607;
   input18 = (in18 - 860.788)/787.038;
   input19 = (in19 - 866.235)/753.047;
   input20 = (in20 - -190.378)/550.824;
   input21 = (in21 - -260.884)/1164.18;
   input22 = (in22 - -46.3479)/1142.31;
   input23 = (in23 - -49.8933)/622.921;
   switch(index) {
     case 0:
         return neuron0x4285900();
     default:
         return 0.;
   }
}

double NNfunction_tb_t1t1::Value(int index, double* input) {
   input0 = (input[0] - 23.3724)/15.1897;
   input1 = (input[1] - 44.9098)/934.798;
   input2 = (input[2] - 506.288)/551.465;
   input3 = (input[3] - 212.46)/781.966;
   input4 = (input[4] - 995.584)/837.621;
   input5 = (input[5] - 881.649)/827.951;
   input6 = (input[6] - 886.521)/828.871;
   input7 = (input[7] - 885.259)/810.952;
   input8 = (input[8] - 882.659)/840.803;
   input9 = (input[9] - 874.056)/830.107;
   input10 = (input[10] - 888.044)/824.805;
   input11 = (input[11] - 846.584)/767.585;
   input12 = (input[12] - 848.834)/769.333;
   input13 = (input[13] - 621.531)/482.845;
   input14 = (input[14] - 849.274)/739.37;
   input15 = (input[15] - 849.716)/738.285;
   input16 = (input[16] - 573.222)/474.197;
   input17 = (input[17] - 862.19)/785.607;
   input18 = (input[18] - 860.788)/787.038;
   input19 = (input[19] - 866.235)/753.047;
   input20 = (input[20] - -190.378)/550.824;
   input21 = (input[21] - -260.884)/1164.18;
   input22 = (input[22] - -46.3479)/1142.31;
   input23 = (input[23] - -49.8933)/622.921;
   switch(index) {
     case 0:
         return neuron0x4285900();
     default:
         return 0.;
   }
}

double NNfunction_tb_t1t1::neuron0x4250970() {
   return input0;
}

double NNfunction_tb_t1t1::neuron0x4250c20() {
   return input1;
}

double NNfunction_tb_t1t1::neuron0x4250f60() {
   return input2;
}

double NNfunction_tb_t1t1::neuron0x42512a0() {
   return input3;
}

double NNfunction_tb_t1t1::neuron0x42515e0() {
   return input4;
}

double NNfunction_tb_t1t1::neuron0x4251920() {
   return input5;
}

double NNfunction_tb_t1t1::neuron0x4251c60() {
   return input6;
}

double NNfunction_tb_t1t1::neuron0x4251fa0() {
   return input7;
}

double NNfunction_tb_t1t1::neuron0x42522e0() {
   return input8;
}

double NNfunction_tb_t1t1::neuron0x4252620() {
   return input9;
}

double NNfunction_tb_t1t1::neuron0x4252960() {
   return input10;
}

double NNfunction_tb_t1t1::neuron0x4252ca0() {
   return input11;
}

double NNfunction_tb_t1t1::neuron0x4252fe0() {
   return input12;
}

double NNfunction_tb_t1t1::neuron0x4253320() {
   return input13;
}

double NNfunction_tb_t1t1::neuron0x4253660() {
   return input14;
}

double NNfunction_tb_t1t1::neuron0x42539a0() {
   return input15;
}

double NNfunction_tb_t1t1::neuron0x4253ce0() {
   return input16;
}

double NNfunction_tb_t1t1::neuron0x4254240() {
   return input17;
}

double NNfunction_tb_t1t1::neuron0x4254460() {
   return input18;
}

double NNfunction_tb_t1t1::neuron0x42547a0() {
   return input19;
}

double NNfunction_tb_t1t1::neuron0x4254ae0() {
   return input20;
}

double NNfunction_tb_t1t1::neuron0x4254e20() {
   return input21;
}

double NNfunction_tb_t1t1::neuron0x4255160() {
   return input22;
}

double NNfunction_tb_t1t1::neuron0x42554a0() {
   return input23;
}

double NNfunction_tb_t1t1::input0x4255910() {
   double input = -0.983892;
   input += synapse0x4255c50();
   input += synapse0x4255c90();
   input += synapse0x4255cd0();
   input += synapse0x4255d10();
   input += synapse0x4255d50();
   input += synapse0x4255d90();
   input += synapse0x4255dd0();
   input += synapse0x4255e10();
   input += synapse0x4255e50();
   input += synapse0x4255e90();
   input += synapse0x4255ed0();
   input += synapse0x4255f10();
   input += synapse0x4255f50();
   input += synapse0x4255f90();
   input += synapse0x4255fd0();
   input += synapse0x4256010();
   input += synapse0x4255aa0();
   input += synapse0x4255ae0();
   input += synapse0x400d050();
   input += synapse0x400d090();
   input += synapse0x4256160();
   input += synapse0x42561a0();
   input += synapse0x42561e0();
   input += synapse0x4256220();
   return input;
}

double NNfunction_tb_t1t1::neuron0x4255910() {
   double input = input0x4255910();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x4256260() {
   double input = -2.11557;
   input += synapse0x42565a0();
   input += synapse0x42565e0();
   input += synapse0x4256620();
   input += synapse0x4256660();
   input += synapse0x42566a0();
   input += synapse0x42566e0();
   input += synapse0x4256720();
   input += synapse0x4256760();
   input += synapse0x42567a0();
   input += synapse0x4256050();
   input += synapse0x4256090();
   input += synapse0x42560d0();
   input += synapse0x4256110();
   input += synapse0x42569f0();
   input += synapse0x4256a30();
   input += synapse0x4256a70();
   input += synapse0x42563f0();
   input += synapse0x4256430();
   input += synapse0x4256bc0();
   input += synapse0x4256c00();
   input += synapse0x4256c40();
   input += synapse0x4256c80();
   input += synapse0x4256cc0();
   input += synapse0x4256d00();
   return input;
}

double NNfunction_tb_t1t1::neuron0x4256260() {
   double input = input0x4256260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x4256d40() {
   double input = 1.24427;
   input += synapse0x4257080();
   input += synapse0x42570c0();
   input += synapse0x4257100();
   input += synapse0x4257140();
   input += synapse0x4257180();
   input += synapse0x42571c0();
   input += synapse0x4257200();
   input += synapse0x4257240();
   input += synapse0x4257280();
   input += synapse0x42572c0();
   input += synapse0x4257300();
   input += synapse0x4257340();
   input += synapse0x4257380();
   input += synapse0x42573c0();
   input += synapse0x4257400();
   input += synapse0x4257440();
   input += synapse0x4256ed0();
   input += synapse0x4256f10();
   input += synapse0x2e80a20();
   input += synapse0x401aa20();
   input += synapse0x401aa60();
   input += synapse0x4259380();
   input += synapse0x42593c0();
   input += synapse0x42506b0();
   return input;
}

double NNfunction_tb_t1t1::neuron0x4256d40() {
   double input = input0x4256d40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x42567e0() {
   double input = 2.34038;
   input += synapse0x4250780();
   input += synapse0x401b2a0();
   input += synapse0x4256970();
   input += synapse0x42569b0();
   input += synapse0x4257590();
   input += synapse0x42575d0();
   input += synapse0x4257610();
   input += synapse0x4257650();
   input += synapse0x4257690();
   input += synapse0x42576d0();
   input += synapse0x4257710();
   input += synapse0x4257750();
   input += synapse0x4257790();
   input += synapse0x42577d0();
   input += synapse0x4257810();
   input += synapse0x4257850();
   input += synapse0x42506f0();
   input += synapse0x4250730();
   input += synapse0x42579a0();
   input += synapse0x42579e0();
   input += synapse0x4257a20();
   input += synapse0x4257a60();
   input += synapse0x4257aa0();
   input += synapse0x4257ae0();
   return input;
}

double NNfunction_tb_t1t1::neuron0x42567e0() {
   double input = input0x42567e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x4257b20() {
   double input = -2.29553;
   input += synapse0x4257e60();
   input += synapse0x4257ea0();
   input += synapse0x4257ee0();
   input += synapse0x4257f20();
   input += synapse0x4257f60();
   input += synapse0x4257fa0();
   input += synapse0x4257fe0();
   input += synapse0x4258020();
   input += synapse0x4258060();
   input += synapse0x42580a0();
   input += synapse0x42580e0();
   input += synapse0x4258120();
   input += synapse0x4258160();
   input += synapse0x42581a0();
   input += synapse0x42581e0();
   input += synapse0x4258220();
   input += synapse0x4258370();
   input += synapse0x4257cb0();
   input += synapse0x4257cf0();
   input += synapse0x42594c0();
   input += synapse0x4259500();
   input += synapse0x4259540();
   input += synapse0x4259580();
   input += synapse0x42595c0();
   return input;
}

double NNfunction_tb_t1t1::neuron0x4257b20() {
   double input = input0x4257b20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x4259600() {
   double input = -1.47348;
   input += synapse0x4259940();
   input += synapse0x4259980();
   input += synapse0x42599c0();
   input += synapse0x4259a00();
   input += synapse0x4259a40();
   input += synapse0x4259a80();
   input += synapse0x4259ac0();
   input += synapse0x4259b00();
   input += synapse0x4259b40();
   input += synapse0x401ad70();
   input += synapse0x401adb0();
   input += synapse0x401adf0();
   input += synapse0x401ae30();
   input += synapse0x401ae70();
   input += synapse0x401aeb0();
   input += synapse0x401aef0();
   input += synapse0x4259790();
   input += synapse0x42597d0();
   input += synapse0x401b040();
   input += synapse0x401b080();
   input += synapse0x401b0c0();
   input += synapse0x401b100();
   input += synapse0x401b140();
   input += synapse0x425a390();
   return input;
}

double NNfunction_tb_t1t1::neuron0x4259600() {
   double input = input0x4259600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x425a3d0() {
   double input = 2.39183;
   input += synapse0x425a710();
   input += synapse0x425a750();
   input += synapse0x425a790();
   input += synapse0x425a7d0();
   input += synapse0x425a810();
   input += synapse0x425a850();
   input += synapse0x425a890();
   input += synapse0x425a8d0();
   input += synapse0x425a910();
   input += synapse0x425a950();
   input += synapse0x425a990();
   input += synapse0x425a9d0();
   input += synapse0x425aa10();
   input += synapse0x425aa50();
   input += synapse0x425aa90();
   input += synapse0x425aad0();
   input += synapse0x425a560();
   input += synapse0x425a5a0();
   input += synapse0x425ac20();
   input += synapse0x425ac60();
   input += synapse0x425aca0();
   input += synapse0x425ace0();
   input += synapse0x425ad20();
   input += synapse0x425ad60();
   return input;
}

double NNfunction_tb_t1t1::neuron0x425a3d0() {
   double input = input0x425a3d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x425ada0() {
   double input = 2.78415;
   input += synapse0x425b0e0();
   input += synapse0x425b120();
   input += synapse0x425b160();
   input += synapse0x425b1a0();
   input += synapse0x425b1e0();
   input += synapse0x425b220();
   input += synapse0x425b260();
   input += synapse0x425b2a0();
   input += synapse0x425b2e0();
   input += synapse0x425b320();
   input += synapse0x425b360();
   input += synapse0x425b3a0();
   input += synapse0x425b3e0();
   input += synapse0x425b420();
   input += synapse0x425b460();
   input += synapse0x425b4a0();
   input += synapse0x425af30();
   input += synapse0x425af70();
   input += synapse0x425b5f0();
   input += synapse0x425b630();
   input += synapse0x425b670();
   input += synapse0x425b6b0();
   input += synapse0x425b6f0();
   input += synapse0x425b730();
   return input;
}

double NNfunction_tb_t1t1::neuron0x425ada0() {
   double input = input0x425ada0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x425b770() {
   double input = -1.7454;
   input += synapse0x4254130();
   input += synapse0x4254170();
   input += synapse0x42541b0();
   input += synapse0x42541f0();
   input += synapse0x425bcc0();
   input += synapse0x425bd00();
   input += synapse0x425bd40();
   input += synapse0x425bd80();
   input += synapse0x425bdc0();
   input += synapse0x425be00();
   input += synapse0x425be40();
   input += synapse0x425be80();
   input += synapse0x425bec0();
   input += synapse0x425bf00();
   input += synapse0x425bf40();
   input += synapse0x425bf80();
   input += synapse0x425b900();
   input += synapse0x425b940();
   input += synapse0x425c0d0();
   input += synapse0x425c110();
   input += synapse0x425c150();
   input += synapse0x425c190();
   input += synapse0x425c1d0();
   input += synapse0x425c210();
   return input;
}

double NNfunction_tb_t1t1::neuron0x425b770() {
   double input = input0x425b770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x425c250() {
   double input = 0.462331;
   input += synapse0x425c590();
   input += synapse0x425c5d0();
   input += synapse0x425c610();
   input += synapse0x425c650();
   input += synapse0x425c690();
   input += synapse0x425c6d0();
   input += synapse0x425c710();
   input += synapse0x425c750();
   input += synapse0x425c790();
   input += synapse0x425c7d0();
   input += synapse0x425c810();
   input += synapse0x425c850();
   input += synapse0x425c890();
   input += synapse0x425c8d0();
   input += synapse0x425c910();
   input += synapse0x425c950();
   input += synapse0x425c3e0();
   input += synapse0x425c420();
   input += synapse0x425caa0();
   input += synapse0x425cae0();
   input += synapse0x425cb20();
   input += synapse0x425cb60();
   input += synapse0x425cba0();
   input += synapse0x425cbe0();
   return input;
}

double NNfunction_tb_t1t1::neuron0x425c250() {
   double input = input0x425c250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x425cc20() {
   double input = -0.697268;
   input += synapse0x425cf60();
   input += synapse0x425cfa0();
   input += synapse0x425cfe0();
   input += synapse0x425d020();
   input += synapse0x425d060();
   input += synapse0x425d0a0();
   input += synapse0x425d0e0();
   input += synapse0x425d120();
   input += synapse0x425d160();
   input += synapse0x425d1a0();
   input += synapse0x425d1e0();
   input += synapse0x425d220();
   input += synapse0x425d260();
   input += synapse0x425d2a0();
   input += synapse0x425d2e0();
   input += synapse0x425d320();
   input += synapse0x425cdb0();
   input += synapse0x425cdf0();
   input += synapse0x4259b80();
   input += synapse0x4259bc0();
   input += synapse0x4259c00();
   input += synapse0x4259c40();
   input += synapse0x4259c80();
   input += synapse0x4259cc0();
   return input;
}

double NNfunction_tb_t1t1::neuron0x425cc20() {
   double input = input0x425cc20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x4259d00() {
   double input = 1.25617;
   input += synapse0x425a040();
   input += synapse0x425a080();
   input += synapse0x425a0c0();
   input += synapse0x425a100();
   input += synapse0x425a140();
   input += synapse0x425a180();
   input += synapse0x425a1c0();
   input += synapse0x425a200();
   input += synapse0x425a240();
   input += synapse0x425a280();
   input += synapse0x425a2c0();
   input += synapse0x425a300();
   input += synapse0x425a340();
   input += synapse0x425e480();
   input += synapse0x425e4c0();
   input += synapse0x425e500();
   input += synapse0x4259e90();
   input += synapse0x4259ed0();
   input += synapse0x425e650();
   input += synapse0x425e690();
   input += synapse0x425e6d0();
   input += synapse0x425e710();
   input += synapse0x425e750();
   input += synapse0x425e790();
   return input;
}

double NNfunction_tb_t1t1::neuron0x4259d00() {
   double input = input0x4259d00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x425e7d0() {
   double input = 4.36616;
   input += synapse0x425eb10();
   input += synapse0x425eb50();
   input += synapse0x425eb90();
   input += synapse0x425ebd0();
   input += synapse0x425ec10();
   input += synapse0x425ec50();
   input += synapse0x425ec90();
   input += synapse0x425ecd0();
   input += synapse0x425ed10();
   input += synapse0x425ed50();
   input += synapse0x425ed90();
   input += synapse0x425edd0();
   input += synapse0x425ee10();
   input += synapse0x425ee50();
   input += synapse0x425ee90();
   input += synapse0x425eed0();
   input += synapse0x425e960();
   input += synapse0x425e9a0();
   input += synapse0x425f020();
   input += synapse0x425f060();
   input += synapse0x425f0a0();
   input += synapse0x425f0e0();
   input += synapse0x425f120();
   input += synapse0x425f160();
   return input;
}

double NNfunction_tb_t1t1::neuron0x425e7d0() {
   double input = input0x425e7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x425f1a0() {
   double input = -0.413626;
   input += synapse0x425f4e0();
   input += synapse0x425f520();
   input += synapse0x425f560();
   input += synapse0x425f5a0();
   input += synapse0x425f5e0();
   input += synapse0x425f620();
   input += synapse0x425f660();
   input += synapse0x425f6a0();
   input += synapse0x425f6e0();
   input += synapse0x425f720();
   input += synapse0x425f760();
   input += synapse0x425f7a0();
   input += synapse0x425f7e0();
   input += synapse0x425f820();
   input += synapse0x425f860();
   input += synapse0x425f8a0();
   input += synapse0x425f330();
   input += synapse0x425f370();
   input += synapse0x425f9f0();
   input += synapse0x425fa30();
   input += synapse0x425fa70();
   input += synapse0x425fab0();
   input += synapse0x425faf0();
   input += synapse0x425fb30();
   return input;
}

double NNfunction_tb_t1t1::neuron0x425f1a0() {
   double input = input0x425f1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x425fb70() {
   double input = -0.595355;
   input += synapse0x425feb0();
   input += synapse0x425fef0();
   input += synapse0x425ff30();
   input += synapse0x425ff70();
   input += synapse0x425ffb0();
   input += synapse0x425fff0();
   input += synapse0x4260030();
   input += synapse0x4260070();
   input += synapse0x42600b0();
   input += synapse0x42600f0();
   input += synapse0x4260130();
   input += synapse0x4260170();
   input += synapse0x42601b0();
   input += synapse0x42601f0();
   input += synapse0x4260230();
   input += synapse0x4260270();
   input += synapse0x425fd00();
   input += synapse0x425fd40();
   input += synapse0x42603c0();
   input += synapse0x4260400();
   input += synapse0x4260440();
   input += synapse0x4260480();
   input += synapse0x42604c0();
   input += synapse0x4260500();
   return input;
}

double NNfunction_tb_t1t1::neuron0x425fb70() {
   double input = input0x425fb70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x4260540() {
   double input = -0.17891;
   input += synapse0x4260880();
   input += synapse0x4250b00();
   input += synapse0x4250b40();
   input += synapse0x4250e40();
   input += synapse0x4250e80();
   input += synapse0x4251180();
   input += synapse0x42511c0();
   input += synapse0x42514c0();
   input += synapse0x4251500();
   input += synapse0x4251800();
   input += synapse0x4251840();
   input += synapse0x4251b40();
   input += synapse0x4251b80();
   input += synapse0x4251e80();
   input += synapse0x4251ec0();
   input += synapse0x42521c0();
   input += synapse0x4252200();
   input += synapse0x4252500();
   input += synapse0x4252540();
   input += synapse0x4252840();
   input += synapse0x4252880();
   input += synapse0x4252b80();
   input += synapse0x4252bc0();
   input += synapse0x4252ec0();
   return input;
}

double NNfunction_tb_t1t1::neuron0x4260540() {
   double input = input0x4260540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x4262350() {
   double input = -2.18526;
   input += synapse0x4252f00();
   input += synapse0x4253bc0();
   input += synapse0x4253c00();
   input += synapse0x42606d0();
   input += synapse0x4260710();
   input += synapse0x4253f00();
   input += synapse0x4253f40();
   input += synapse0x2e823d0();
   input += synapse0x2e82410();
   input += synapse0x4254680();
   input += synapse0x42546c0();
   input += synapse0x42549c0();
   input += synapse0x4254a00();
   input += synapse0x4254d00();
   input += synapse0x4254d40();
   input += synapse0x4255040();
   input += synapse0x4255080();
   input += synapse0x4255380();
   input += synapse0x42553c0();
   input += synapse0x42556c0();
   input += synapse0x4255700();
   input += synapse0x4253200();
   input += synapse0x4253240();
   input += synapse0x42625f0();
   return input;
}

double NNfunction_tb_t1t1::neuron0x4262350() {
   double input = input0x4262350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x4262630() {
   double input = -2.57481;
   input += synapse0x4262970();
   input += synapse0x42629b0();
   input += synapse0x42629f0();
   input += synapse0x4262a30();
   input += synapse0x4262a70();
   input += synapse0x4262ab0();
   input += synapse0x4262af0();
   input += synapse0x4262b30();
   input += synapse0x4262b70();
   input += synapse0x4262bb0();
   input += synapse0x4262bf0();
   input += synapse0x4262c30();
   input += synapse0x4262c70();
   input += synapse0x4262cb0();
   input += synapse0x4262cf0();
   input += synapse0x4262d30();
   input += synapse0x42627c0();
   input += synapse0x4262800();
   input += synapse0x4262e80();
   input += synapse0x4262ec0();
   input += synapse0x4262f00();
   input += synapse0x4262f40();
   input += synapse0x4262f80();
   input += synapse0x4262fc0();
   return input;
}

double NNfunction_tb_t1t1::neuron0x4262630() {
   double input = input0x4262630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x4263000() {
   double input = -0.0219191;
   input += synapse0x4263340();
   input += synapse0x4263380();
   input += synapse0x42633c0();
   input += synapse0x4263400();
   input += synapse0x4263440();
   input += synapse0x4263480();
   input += synapse0x42634c0();
   input += synapse0x4263500();
   input += synapse0x4263540();
   input += synapse0x4263580();
   input += synapse0x42635c0();
   input += synapse0x4263600();
   input += synapse0x4263640();
   input += synapse0x4263680();
   input += synapse0x42636c0();
   input += synapse0x4263700();
   input += synapse0x4263190();
   input += synapse0x42631d0();
   input += synapse0x4263850();
   input += synapse0x4263890();
   input += synapse0x42638d0();
   input += synapse0x4263910();
   input += synapse0x4263950();
   input += synapse0x4263990();
   return input;
}

double NNfunction_tb_t1t1::neuron0x4263000() {
   double input = input0x4263000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x42639d0() {
   double input = 0.0471043;
   input += synapse0x4263d10();
   input += synapse0x4263d50();
   input += synapse0x4263d90();
   input += synapse0x4263dd0();
   input += synapse0x4263e10();
   input += synapse0x4263e50();
   input += synapse0x4263e90();
   input += synapse0x4263ed0();
   input += synapse0x4263f10();
   input += synapse0x4263f50();
   input += synapse0x4263f90();
   input += synapse0x4263fd0();
   input += synapse0x4264010();
   input += synapse0x4264050();
   input += synapse0x4264090();
   input += synapse0x42640d0();
   input += synapse0x4263b60();
   input += synapse0x4263ba0();
   input += synapse0x4264220();
   input += synapse0x4264260();
   input += synapse0x42642a0();
   input += synapse0x42642e0();
   input += synapse0x4264320();
   input += synapse0x4264360();
   return input;
}

double NNfunction_tb_t1t1::neuron0x42639d0() {
   double input = input0x42639d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x42643a0() {
   double input = 1.00118;
   input += synapse0x42646e0();
   input += synapse0x4264720();
   input += synapse0x4264760();
   input += synapse0x42647a0();
   input += synapse0x42647e0();
   input += synapse0x4264820();
   input += synapse0x4264860();
   input += synapse0x42648a0();
   input += synapse0x42648e0();
   input += synapse0x4264920();
   input += synapse0x4264960();
   input += synapse0x42649a0();
   input += synapse0x42649e0();
   input += synapse0x4264a20();
   input += synapse0x4264a60();
   input += synapse0x4264aa0();
   input += synapse0x4264530();
   input += synapse0x4264570();
   input += synapse0x4264bf0();
   input += synapse0x4264c30();
   input += synapse0x4264c70();
   input += synapse0x4264cb0();
   input += synapse0x4264cf0();
   input += synapse0x4264d30();
   return input;
}

double NNfunction_tb_t1t1::neuron0x42643a0() {
   double input = input0x42643a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x4264d70() {
   double input = -0.13904;
   input += synapse0x42650b0();
   input += synapse0x42650f0();
   input += synapse0x4265130();
   input += synapse0x4265170();
   input += synapse0x42651b0();
   input += synapse0x42651f0();
   input += synapse0x4265230();
   input += synapse0x4265270();
   input += synapse0x42652b0();
   input += synapse0x425d470();
   input += synapse0x425d4b0();
   input += synapse0x425d4f0();
   input += synapse0x425d530();
   input += synapse0x425d570();
   input += synapse0x425d5b0();
   input += synapse0x425d5f0();
   input += synapse0x4264f00();
   input += synapse0x4264f40();
   input += synapse0x425d740();
   input += synapse0x425d780();
   input += synapse0x425d7c0();
   input += synapse0x425d800();
   input += synapse0x425d840();
   input += synapse0x425d880();
   return input;
}

double NNfunction_tb_t1t1::neuron0x4264d70() {
   double input = input0x4264d70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x425d8c0() {
   double input = -1.19439;
   input += synapse0x425dc00();
   input += synapse0x425dc40();
   input += synapse0x425dc80();
   input += synapse0x425dcc0();
   input += synapse0x425dd00();
   input += synapse0x425dd40();
   input += synapse0x425dd80();
   input += synapse0x425ddc0();
   input += synapse0x425de00();
   input += synapse0x425de40();
   input += synapse0x425de80();
   input += synapse0x425dec0();
   input += synapse0x425df00();
   input += synapse0x425df40();
   input += synapse0x425df80();
   input += synapse0x425dfc0();
   input += synapse0x425da50();
   input += synapse0x425da90();
   input += synapse0x425e110();
   input += synapse0x425e150();
   input += synapse0x425e190();
   input += synapse0x425e1d0();
   input += synapse0x425e210();
   input += synapse0x425e250();
   return input;
}

double NNfunction_tb_t1t1::neuron0x425d8c0() {
   double input = input0x425d8c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x425e290() {
   double input = 3.25543;
   input += synapse0x425e420();
   input += synapse0x42674b0();
   input += synapse0x42674f0();
   input += synapse0x4267530();
   input += synapse0x4267570();
   input += synapse0x42675b0();
   input += synapse0x42675f0();
   input += synapse0x4267630();
   input += synapse0x4267670();
   input += synapse0x42676b0();
   input += synapse0x42676f0();
   input += synapse0x4267730();
   input += synapse0x4267770();
   input += synapse0x42677b0();
   input += synapse0x42677f0();
   input += synapse0x4267830();
   input += synapse0x4267300();
   input += synapse0x4267340();
   input += synapse0x4267980();
   input += synapse0x42679c0();
   input += synapse0x4267a00();
   input += synapse0x4267a40();
   input += synapse0x4267a80();
   input += synapse0x4267ac0();
   return input;
}

double NNfunction_tb_t1t1::neuron0x425e290() {
   double input = input0x425e290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x4267b00() {
   double input = -0.612115;
   input += synapse0x4267e40();
   input += synapse0x4267e80();
   input += synapse0x4267ec0();
   input += synapse0x4267f00();
   input += synapse0x4267f40();
   input += synapse0x4267f80();
   input += synapse0x4267fc0();
   input += synapse0x4268000();
   input += synapse0x4268040();
   input += synapse0x4268080();
   input += synapse0x42680c0();
   input += synapse0x4268100();
   input += synapse0x4268140();
   input += synapse0x4268180();
   input += synapse0x42681c0();
   input += synapse0x4268200();
   input += synapse0x4267c90();
   input += synapse0x4267cd0();
   input += synapse0x4268350();
   input += synapse0x4268390();
   input += synapse0x42683d0();
   input += synapse0x4268410();
   input += synapse0x4268450();
   input += synapse0x4268490();
   return input;
}

double NNfunction_tb_t1t1::neuron0x4267b00() {
   double input = input0x4267b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x42684d0() {
   double input = 1.58444;
   input += synapse0x4268810();
   input += synapse0x4268850();
   input += synapse0x4268890();
   input += synapse0x42688d0();
   input += synapse0x4268910();
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
   input += synapse0x4268660();
   input += synapse0x42686a0();
   input += synapse0x4268d20();
   input += synapse0x4268d60();
   input += synapse0x4268da0();
   input += synapse0x4268de0();
   input += synapse0x4268e20();
   input += synapse0x4268e60();
   return input;
}

double NNfunction_tb_t1t1::neuron0x42684d0() {
   double input = input0x42684d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x4268ea0() {
   double input = 2.51882;
   input += synapse0x42691e0();
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
   input += synapse0x4269030();
   input += synapse0x4269070();
   input += synapse0x42696f0();
   input += synapse0x4269730();
   input += synapse0x4269770();
   input += synapse0x42697b0();
   input += synapse0x42697f0();
   input += synapse0x4269830();
   return input;
}

double NNfunction_tb_t1t1::neuron0x4268ea0() {
   double input = input0x4268ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x4269870() {
   double input = -4.2422;
   input += synapse0x4269bb0();
   input += synapse0x4269bf0();
   input += synapse0x4269c30();
   input += synapse0x4269c70();
   input += synapse0x4269cb0();
   input += synapse0x4269cf0();
   input += synapse0x4269d30();
   input += synapse0x4269d70();
   input += synapse0x4269db0();
   input += synapse0x4269df0();
   input += synapse0x4269e30();
   input += synapse0x4269e70();
   input += synapse0x4269eb0();
   input += synapse0x4269ef0();
   input += synapse0x4269f30();
   input += synapse0x4269f70();
   input += synapse0x4269a00();
   input += synapse0x4269a40();
   input += synapse0x426a0c0();
   input += synapse0x426a100();
   input += synapse0x426a140();
   input += synapse0x426a180();
   input += synapse0x426a1c0();
   input += synapse0x426a200();
   return input;
}

double NNfunction_tb_t1t1::neuron0x4269870() {
   double input = input0x4269870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x426a240() {
   double input = -0.61154;
   input += synapse0x426a580();
   input += synapse0x426a5c0();
   input += synapse0x426a600();
   input += synapse0x426a640();
   input += synapse0x426a680();
   input += synapse0x426a6c0();
   input += synapse0x426a700();
   input += synapse0x426a740();
   input += synapse0x426a780();
   input += synapse0x426a7c0();
   input += synapse0x426a800();
   input += synapse0x426a840();
   input += synapse0x426a880();
   input += synapse0x426a8c0();
   input += synapse0x426a900();
   input += synapse0x426a940();
   input += synapse0x426a3d0();
   input += synapse0x426a410();
   input += synapse0x426aa90();
   input += synapse0x426aad0();
   input += synapse0x426ab10();
   input += synapse0x426ab50();
   input += synapse0x426ab90();
   input += synapse0x426abd0();
   return input;
}

double NNfunction_tb_t1t1::neuron0x426a240() {
   double input = input0x426a240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x426ac10() {
   double input = 0.647101;
   input += synapse0x426af50();
   input += synapse0x426af90();
   input += synapse0x426afd0();
   input += synapse0x426b010();
   input += synapse0x426b050();
   input += synapse0x426b090();
   input += synapse0x426b0d0();
   input += synapse0x426b110();
   input += synapse0x426b150();
   input += synapse0x426b190();
   input += synapse0x426b1d0();
   input += synapse0x426b210();
   input += synapse0x426b250();
   input += synapse0x426b290();
   input += synapse0x426b2d0();
   input += synapse0x426b310();
   input += synapse0x426ada0();
   input += synapse0x426ade0();
   input += synapse0x426b460();
   input += synapse0x426b4a0();
   input += synapse0x426b4e0();
   input += synapse0x426b520();
   input += synapse0x426b560();
   input += synapse0x426b5a0();
   return input;
}

double NNfunction_tb_t1t1::neuron0x426ac10() {
   double input = input0x426ac10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x426b5e0() {
   double input = -1.45976;
   input += synapse0x426b920();
   input += synapse0x426b960();
   input += synapse0x426b9a0();
   input += synapse0x426b9e0();
   input += synapse0x426ba20();
   input += synapse0x426ba60();
   input += synapse0x426baa0();
   input += synapse0x426bae0();
   input += synapse0x426bb20();
   input += synapse0x426bb60();
   input += synapse0x426bba0();
   input += synapse0x426bbe0();
   input += synapse0x426bc20();
   input += synapse0x426bc60();
   input += synapse0x426bca0();
   input += synapse0x426bce0();
   input += synapse0x426b770();
   input += synapse0x426b7b0();
   input += synapse0x426be30();
   input += synapse0x426be70();
   input += synapse0x426beb0();
   input += synapse0x426bef0();
   input += synapse0x426bf30();
   input += synapse0x426bf70();
   return input;
}

double NNfunction_tb_t1t1::neuron0x426b5e0() {
   double input = input0x426b5e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x426bfb0() {
   double input = -0.00865563;
   input += synapse0x426c2f0();
   input += synapse0x42608c0();
   input += synapse0x4260900();
   input += synapse0x4260940();
   input += synapse0x4260b90();
   input += synapse0x4260bd0();
   input += synapse0x4260c10();
   input += synapse0x4260e60();
   input += synapse0x4260ea0();
   input += synapse0x42610f0();
   input += synapse0x4261130();
   input += synapse0x4261170();
   input += synapse0x42613c0();
   input += synapse0x4261400();
   input += synapse0x4261650();
   input += synapse0x4261690();
   input += synapse0x426c140();
   input += synapse0x426c180();
   input += synapse0x42617e0();
   input += synapse0x4261cf0();
   input += synapse0x4261d30();
   input += synapse0x4261d70();
   input += synapse0x4261fc0();
   input += synapse0x4262000();
   return input;
}

double NNfunction_tb_t1t1::neuron0x426bfb0() {
   double input = input0x426bfb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x4262040() {
   double input = 1.95506;
   input += synapse0x42618b0();
   input += synapse0x42618f0();
   input += synapse0x4261930();
   input += synapse0x4261970();
   input += synapse0x42622f0();
   input += synapse0x426e640();
   input += synapse0x426e680();
   input += synapse0x426e6c0();
   input += synapse0x426e700();
   input += synapse0x426e740();
   input += synapse0x426e780();
   input += synapse0x426e7c0();
   input += synapse0x426e800();
   input += synapse0x426e840();
   input += synapse0x426e880();
   input += synapse0x426e8c0();
   input += synapse0x42621d0();
   input += synapse0x4262210();
   input += synapse0x426ea10();
   input += synapse0x426ea50();
   input += synapse0x426ea90();
   input += synapse0x426ead0();
   input += synapse0x426eb10();
   input += synapse0x426eb50();
   return input;
}

double NNfunction_tb_t1t1::neuron0x4262040() {
   double input = input0x4262040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x426eb90() {
   double input = 1.53948;
   input += synapse0x426eed0();
   input += synapse0x426ef10();
   input += synapse0x426ef50();
   input += synapse0x426ef90();
   input += synapse0x426efd0();
   input += synapse0x426f010();
   input += synapse0x426f050();
   input += synapse0x426f090();
   input += synapse0x426f0d0();
   input += synapse0x426f110();
   input += synapse0x426f150();
   input += synapse0x426f190();
   input += synapse0x426f1d0();
   input += synapse0x426f210();
   input += synapse0x426f250();
   input += synapse0x426f290();
   input += synapse0x426ed20();
   input += synapse0x426ed60();
   input += synapse0x426f3e0();
   input += synapse0x426f420();
   input += synapse0x426f460();
   input += synapse0x426f4a0();
   input += synapse0x426f4e0();
   input += synapse0x426f520();
   return input;
}

double NNfunction_tb_t1t1::neuron0x426eb90() {
   double input = input0x426eb90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x426f560() {
   double input = 0.705367;
   input += synapse0x426f8a0();
   input += synapse0x426f8e0();
   input += synapse0x426f920();
   input += synapse0x426f960();
   input += synapse0x426f9a0();
   input += synapse0x426f9e0();
   input += synapse0x426fa20();
   input += synapse0x426fa60();
   input += synapse0x426faa0();
   input += synapse0x426fae0();
   input += synapse0x426fb20();
   input += synapse0x426fb60();
   input += synapse0x426fba0();
   input += synapse0x426fbe0();
   input += synapse0x426fc20();
   input += synapse0x426fc60();
   input += synapse0x426f6f0();
   input += synapse0x426f730();
   input += synapse0x426fdb0();
   input += synapse0x426fdf0();
   input += synapse0x426fe30();
   input += synapse0x426fe70();
   input += synapse0x426feb0();
   input += synapse0x426fef0();
   return input;
}

double NNfunction_tb_t1t1::neuron0x426f560() {
   double input = input0x426f560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x426ff30() {
   double input = 0.251723;
   input += synapse0x4270270();
   input += synapse0x42702b0();
   input += synapse0x42702f0();
   input += synapse0x4270330();
   input += synapse0x4270370();
   input += synapse0x42703b0();
   input += synapse0x42703f0();
   input += synapse0x4270430();
   input += synapse0x4270470();
   input += synapse0x42704b0();
   input += synapse0x42704f0();
   input += synapse0x4270530();
   input += synapse0x4270570();
   input += synapse0x42705b0();
   input += synapse0x42705f0();
   input += synapse0x4270630();
   input += synapse0x42700c0();
   input += synapse0x4270100();
   input += synapse0x4270780();
   input += synapse0x42707c0();
   input += synapse0x4270800();
   input += synapse0x4270840();
   input += synapse0x4270880();
   input += synapse0x42708c0();
   return input;
}

double NNfunction_tb_t1t1::neuron0x426ff30() {
   double input = input0x426ff30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x4270900() {
   double input = 0.391071;
   input += synapse0x4270c40();
   input += synapse0x4270c80();
   input += synapse0x4270cc0();
   input += synapse0x4270d00();
   input += synapse0x4270d40();
   input += synapse0x4270d80();
   input += synapse0x4270dc0();
   input += synapse0x4270e00();
   input += synapse0x4270e40();
   input += synapse0x4270e80();
   input += synapse0x4270ec0();
   input += synapse0x4270f00();
   input += synapse0x4270f40();
   input += synapse0x4270f80();
   input += synapse0x4270fc0();
   input += synapse0x4271000();
   input += synapse0x4270a90();
   input += synapse0x4270ad0();
   input += synapse0x4271150();
   input += synapse0x4271190();
   input += synapse0x42711d0();
   input += synapse0x4271210();
   input += synapse0x4271250();
   input += synapse0x4271290();
   return input;
}

double NNfunction_tb_t1t1::neuron0x4270900() {
   double input = input0x4270900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x42712d0() {
   double input = 1.88988;
   input += synapse0x4271610();
   input += synapse0x4271650();
   input += synapse0x4271690();
   input += synapse0x42716d0();
   input += synapse0x4271710();
   input += synapse0x4271750();
   input += synapse0x4271790();
   input += synapse0x42717d0();
   input += synapse0x4271810();
   input += synapse0x4271850();
   input += synapse0x4271890();
   input += synapse0x42718d0();
   input += synapse0x4271910();
   input += synapse0x4271950();
   input += synapse0x4271990();
   input += synapse0x42719d0();
   input += synapse0x4271460();
   input += synapse0x42714a0();
   input += synapse0x4271b20();
   input += synapse0x4271b60();
   input += synapse0x4271ba0();
   input += synapse0x4271be0();
   input += synapse0x4271c20();
   input += synapse0x4271c60();
   return input;
}

double NNfunction_tb_t1t1::neuron0x42712d0() {
   double input = input0x42712d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x4271ca0() {
   double input = -1.82467;
   input += synapse0x4271fe0();
   input += synapse0x4272020();
   input += synapse0x4272060();
   input += synapse0x42720a0();
   input += synapse0x42720e0();
   input += synapse0x4272120();
   input += synapse0x4272160();
   input += synapse0x42721a0();
   input += synapse0x42721e0();
   input += synapse0x4272220();
   input += synapse0x4272260();
   input += synapse0x42722a0();
   input += synapse0x42722e0();
   input += synapse0x4272320();
   input += synapse0x4272360();
   input += synapse0x42723a0();
   input += synapse0x4271e30();
   input += synapse0x4271e70();
   input += synapse0x42724f0();
   input += synapse0x4272530();
   input += synapse0x4272570();
   input += synapse0x42725b0();
   input += synapse0x42725f0();
   input += synapse0x4272630();
   return input;
}

double NNfunction_tb_t1t1::neuron0x4271ca0() {
   double input = input0x4271ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x4272670() {
   double input = 0.592094;
   input += synapse0x42729b0();
   input += synapse0x42729f0();
   input += synapse0x4272a30();
   input += synapse0x4272a70();
   input += synapse0x4272ab0();
   input += synapse0x4272af0();
   input += synapse0x4272b30();
   input += synapse0x4272b70();
   input += synapse0x4272bb0();
   input += synapse0x4272bf0();
   input += synapse0x4272c30();
   input += synapse0x4272c70();
   input += synapse0x4272cb0();
   input += synapse0x4272cf0();
   input += synapse0x4272d30();
   input += synapse0x4272d70();
   input += synapse0x4272800();
   input += synapse0x4272840();
   input += synapse0x4272ec0();
   input += synapse0x4272f00();
   input += synapse0x4272f40();
   input += synapse0x4272f80();
   input += synapse0x4272fc0();
   input += synapse0x4273000();
   return input;
}

double NNfunction_tb_t1t1::neuron0x4272670() {
   double input = input0x4272670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x4273040() {
   double input = -3.08769;
   input += synapse0x425bab0();
   input += synapse0x425baf0();
   input += synapse0x425bb30();
   input += synapse0x425bb70();
   input += synapse0x425bbb0();
   input += synapse0x425bbf0();
   input += synapse0x425bc30();
   input += synapse0x425bc70();
   input += synapse0x4273790();
   input += synapse0x42737d0();
   input += synapse0x4273810();
   input += synapse0x4273850();
   input += synapse0x4273890();
   input += synapse0x42738d0();
   input += synapse0x4273910();
   input += synapse0x4273950();
   input += synapse0x42731d0();
   input += synapse0x4273210();
   input += synapse0x4273aa0();
   input += synapse0x4273ae0();
   input += synapse0x4273b20();
   input += synapse0x4273b60();
   input += synapse0x4273ba0();
   input += synapse0x4273be0();
   return input;
}

double NNfunction_tb_t1t1::neuron0x4273040() {
   double input = input0x4273040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x4273c20() {
   double input = 4.71795;
   input += synapse0x4273f60();
   input += synapse0x4273fa0();
   input += synapse0x4273fe0();
   input += synapse0x4274020();
   input += synapse0x4274060();
   input += synapse0x42740a0();
   input += synapse0x42740e0();
   input += synapse0x4274120();
   input += synapse0x4274160();
   input += synapse0x42741a0();
   input += synapse0x42741e0();
   input += synapse0x4274220();
   input += synapse0x4274260();
   input += synapse0x42742a0();
   input += synapse0x42742e0();
   input += synapse0x4274320();
   input += synapse0x4273db0();
   input += synapse0x4273df0();
   input += synapse0x4274470();
   input += synapse0x42744b0();
   input += synapse0x42744f0();
   input += synapse0x4274530();
   input += synapse0x4274570();
   input += synapse0x42745b0();
   return input;
}

double NNfunction_tb_t1t1::neuron0x4273c20() {
   double input = input0x4273c20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x42745f0() {
   double input = 0.271467;
   input += synapse0x4274930();
   input += synapse0x4274970();
   input += synapse0x42749b0();
   input += synapse0x42749f0();
   input += synapse0x4274a30();
   input += synapse0x4274a70();
   input += synapse0x4274ab0();
   input += synapse0x4274af0();
   input += synapse0x4274b30();
   input += synapse0x4274b70();
   input += synapse0x4274bb0();
   input += synapse0x4274bf0();
   input += synapse0x4274c30();
   input += synapse0x4274c70();
   input += synapse0x4274cb0();
   input += synapse0x4274cf0();
   input += synapse0x4274780();
   input += synapse0x42747c0();
   input += synapse0x42652f0();
   input += synapse0x4265330();
   input += synapse0x4265370();
   input += synapse0x42653b0();
   input += synapse0x42653f0();
   input += synapse0x4265430();
   return input;
}

double NNfunction_tb_t1t1::neuron0x42745f0() {
   double input = input0x42745f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x4265470() {
   double input = -1.4331;
   input += synapse0x42657b0();
   input += synapse0x42657f0();
   input += synapse0x4265830();
   input += synapse0x4265870();
   input += synapse0x42658b0();
   input += synapse0x42658f0();
   input += synapse0x4265930();
   input += synapse0x4265970();
   input += synapse0x42659b0();
   input += synapse0x42659f0();
   input += synapse0x4265a30();
   input += synapse0x4265a70();
   input += synapse0x4265ab0();
   input += synapse0x4265af0();
   input += synapse0x4265b30();
   input += synapse0x4265b70();
   input += synapse0x4265600();
   input += synapse0x4265640();
   input += synapse0x4265cc0();
   input += synapse0x4265d00();
   input += synapse0x4265d40();
   input += synapse0x4265d80();
   input += synapse0x4265dc0();
   input += synapse0x4265e00();
   return input;
}

double NNfunction_tb_t1t1::neuron0x4265470() {
   double input = input0x4265470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x4265e40() {
   double input = 0.916389;
   input += synapse0x4266180();
   input += synapse0x42661c0();
   input += synapse0x4266200();
   input += synapse0x4266240();
   input += synapse0x4266280();
   input += synapse0x42662c0();
   input += synapse0x4266300();
   input += synapse0x4266340();
   input += synapse0x4266380();
   input += synapse0x42663c0();
   input += synapse0x4266400();
   input += synapse0x4266440();
   input += synapse0x4266480();
   input += synapse0x42664c0();
   input += synapse0x4266500();
   input += synapse0x4266540();
   input += synapse0x4265fd0();
   input += synapse0x4266010();
   input += synapse0x4266690();
   input += synapse0x42666d0();
   input += synapse0x4266710();
   input += synapse0x4266750();
   input += synapse0x4266790();
   input += synapse0x42667d0();
   return input;
}

double NNfunction_tb_t1t1::neuron0x4265e40() {
   double input = input0x4265e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x4266810() {
   double input = 4.06066;
   input += synapse0x4266b50();
   input += synapse0x4266b90();
   input += synapse0x4266bd0();
   input += synapse0x4266c10();
   input += synapse0x4266c50();
   input += synapse0x4266c90();
   input += synapse0x4266cd0();
   input += synapse0x4266d10();
   input += synapse0x4266d50();
   input += synapse0x4266d90();
   input += synapse0x4266dd0();
   input += synapse0x4266e10();
   input += synapse0x4266e50();
   input += synapse0x4266e90();
   input += synapse0x4266ed0();
   input += synapse0x4266f10();
   input += synapse0x42669a0();
   input += synapse0x42669e0();
   input += synapse0x4267060();
   input += synapse0x42670a0();
   input += synapse0x42670e0();
   input += synapse0x4267120();
   input += synapse0x4267160();
   input += synapse0x42671a0();
   return input;
}

double NNfunction_tb_t1t1::neuron0x4266810() {
   double input = input0x4266810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x4278e50() {
   double input = 3.10224;
   input += synapse0x4279070();
   input += synapse0x42790b0();
   input += synapse0x42790f0();
   input += synapse0x4279130();
   input += synapse0x4279170();
   input += synapse0x42791b0();
   input += synapse0x42791f0();
   input += synapse0x4279230();
   input += synapse0x4279270();
   input += synapse0x42792b0();
   input += synapse0x42792f0();
   input += synapse0x4279330();
   input += synapse0x4279370();
   input += synapse0x42793b0();
   input += synapse0x42793f0();
   input += synapse0x4279430();
   input += synapse0x42671e0();
   input += synapse0x4267220();
   input += synapse0x4279580();
   input += synapse0x42795c0();
   input += synapse0x4279600();
   input += synapse0x4279640();
   input += synapse0x4279680();
   input += synapse0x42796c0();
   return input;
}

double NNfunction_tb_t1t1::neuron0x4278e50() {
   double input = input0x4278e50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x4279700() {
   double input = -0.208202;
   input += synapse0x4279a40();
   input += synapse0x4279a80();
   input += synapse0x4279ac0();
   input += synapse0x4279b00();
   input += synapse0x4279b40();
   input += synapse0x4279b80();
   input += synapse0x4279bc0();
   input += synapse0x4279c00();
   input += synapse0x4279c40();
   input += synapse0x4279c80();
   input += synapse0x4279cc0();
   input += synapse0x4279d00();
   input += synapse0x4279d40();
   input += synapse0x4279d80();
   input += synapse0x4279dc0();
   input += synapse0x4279e00();
   input += synapse0x4279890();
   input += synapse0x42798d0();
   input += synapse0x4279f50();
   input += synapse0x4279f90();
   input += synapse0x4279fd0();
   input += synapse0x427a010();
   input += synapse0x427a050();
   input += synapse0x427a090();
   return input;
}

double NNfunction_tb_t1t1::neuron0x4279700() {
   double input = input0x4279700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x427a0d0() {
   double input = 0.972115;
   input += synapse0x427a410();
   input += synapse0x427a450();
   input += synapse0x427a490();
   input += synapse0x427a4d0();
   input += synapse0x427a510();
   input += synapse0x427a550();
   input += synapse0x427a590();
   input += synapse0x427a5d0();
   input += synapse0x427a610();
   input += synapse0x427a650();
   input += synapse0x427a690();
   input += synapse0x427a6d0();
   input += synapse0x427a710();
   input += synapse0x427a750();
   input += synapse0x427a790();
   input += synapse0x427a7d0();
   input += synapse0x427a260();
   input += synapse0x427a2a0();
   input += synapse0x427a920();
   input += synapse0x427a960();
   input += synapse0x427a9a0();
   input += synapse0x427a9e0();
   input += synapse0x427aa20();
   input += synapse0x427aa60();
   return input;
}

double NNfunction_tb_t1t1::neuron0x427a0d0() {
   double input = input0x427a0d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x427aaa0() {
   double input = -0.753115;
   input += synapse0x427ade0();
   input += synapse0x427ae20();
   input += synapse0x427ae60();
   input += synapse0x427aea0();
   input += synapse0x427aee0();
   input += synapse0x427af20();
   input += synapse0x427af60();
   input += synapse0x427afa0();
   input += synapse0x427afe0();
   input += synapse0x427b020();
   input += synapse0x427b060();
   input += synapse0x427b0a0();
   input += synapse0x427b0e0();
   input += synapse0x427b120();
   input += synapse0x427b160();
   input += synapse0x427b1a0();
   input += synapse0x427ac30();
   input += synapse0x427ac70();
   input += synapse0x427b2f0();
   input += synapse0x427b330();
   input += synapse0x427b370();
   input += synapse0x427b3b0();
   input += synapse0x427b3f0();
   input += synapse0x427b430();
   return input;
}

double NNfunction_tb_t1t1::neuron0x427aaa0() {
   double input = input0x427aaa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x4281ca0() {
   double input = 0.154825;
   input += synapse0x401b210();
   input += synapse0x401b250();
   input += synapse0x4257dd0();
   input += synapse0x4257e10();
   input += synapse0x42598b0();
   input += synapse0x42598f0();
   input += synapse0x425a680();
   input += synapse0x425a6c0();
   input += synapse0x425b050();
   input += synapse0x425b090();
   input += synapse0x425ba20();
   input += synapse0x425ba60();
   input += synapse0x425c500();
   input += synapse0x425c540();
   input += synapse0x425ced0();
   input += synapse0x425cf10();
   input += synapse0x4259fb0();
   input += synapse0x4259ff0();
   input += synapse0x425ea80();
   input += synapse0x425eac0();
   input += synapse0x425f450();
   input += synapse0x425f490();
   input += synapse0x425fe20();
   input += synapse0x425fe60();
   input += synapse0x42607f0();
   input += synapse0x4260830();
   input += synapse0x4253880();
   input += synapse0x42538c0();
   input += synapse0x42628e0();
   input += synapse0x4262920();
   input += synapse0x42632b0();
   input += synapse0x42632f0();
   input += synapse0x4263c80();
   input += synapse0x4263cc0();
   input += synapse0x4264650();
   input += synapse0x4264690();
   input += synapse0x4265020();
   input += synapse0x4265060();
   input += synapse0x425db70();
   input += synapse0x425dbb0();
   input += synapse0x4267420();
   input += synapse0x4267460();
   input += synapse0x4267db0();
   input += synapse0x4267df0();
   input += synapse0x4268780();
   input += synapse0x42687c0();
   input += synapse0x4269150();
   input += synapse0x4269190();
   input += synapse0x4269b20();
   input += synapse0x4269b60();
   return input;
}

double NNfunction_tb_t1t1::neuron0x4281ca0() {
   double input = input0x4281ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x4282040() {
   double input = 0.319207;
   input += synapse0x426c260();
   input += synapse0x426c2a0();
   input += synapse0x4261820();
   input += synapse0x4261860();
   input += synapse0x426ee40();
   input += synapse0x426ee80();
   input += synapse0x426f810();
   input += synapse0x426f850();
   input += synapse0x42701e0();
   input += synapse0x4270220();
   input += synapse0x4270bb0();
   input += synapse0x4270bf0();
   input += synapse0x4271580();
   input += synapse0x42715c0();
   input += synapse0x4271f50();
   input += synapse0x4271f90();
   input += synapse0x4272920();
   input += synapse0x4272960();
   input += synapse0x42732f0();
   input += synapse0x4273330();
   input += synapse0x4273ed0();
   input += synapse0x4273f10();
   input += synapse0x42748a0();
   input += synapse0x42748e0();
   input += synapse0x4265720();
   input += synapse0x4265760();
   input += synapse0x42660f0();
   input += synapse0x4266130();
   input += synapse0x4266ac0();
   input += synapse0x4266b00();
   input += synapse0x4278fe0();
   input += synapse0x4279020();
   input += synapse0x42799b0();
   input += synapse0x42799f0();
   input += synapse0x427a380();
   input += synapse0x427a3c0();
   input += synapse0x427ad50();
   input += synapse0x427ad90();
   input += synapse0x4255bc0();
   input += synapse0x4255c00();
   input += synapse0x426a4f0();
   input += synapse0x426a530();
   input += synapse0x427b470();
   input += synapse0x427b4b0();
   input += synapse0x427b4f0();
   input += synapse0x427b530();
   input += synapse0x42823e0();
   input += synapse0x4282420();
   input += synapse0x4282460();
   input += synapse0x42824a0();
   return input;
}

double NNfunction_tb_t1t1::neuron0x4282040() {
   double input = input0x4282040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x42824e0() {
   double input = -1.32979;
   input += synapse0x4282820();
   input += synapse0x4282860();
   input += synapse0x42828a0();
   input += synapse0x42828e0();
   input += synapse0x4282920();
   input += synapse0x4282960();
   input += synapse0x42829a0();
   input += synapse0x42829e0();
   input += synapse0x4282a20();
   input += synapse0x4282a60();
   input += synapse0x4282aa0();
   input += synapse0x4282ae0();
   input += synapse0x4282b20();
   input += synapse0x4282b60();
   input += synapse0x4282ba0();
   input += synapse0x4282be0();
   input += synapse0x4282670();
   input += synapse0x42826b0();
   input += synapse0x4282d30();
   input += synapse0x4282d70();
   input += synapse0x4282db0();
   input += synapse0x4282df0();
   input += synapse0x4282e30();
   input += synapse0x4282e70();
   input += synapse0x4282eb0();
   input += synapse0x4282ef0();
   input += synapse0x4282f30();
   input += synapse0x4282f70();
   input += synapse0x4282fb0();
   input += synapse0x4282ff0();
   input += synapse0x4283030();
   input += synapse0x4283070();
   input += synapse0x4282c20();
   input += synapse0x4282c60();
   input += synapse0x4282ca0();
   input += synapse0x4282ce0();
   input += synapse0x42832c0();
   input += synapse0x4283300();
   input += synapse0x4283340();
   input += synapse0x4283380();
   input += synapse0x42833c0();
   input += synapse0x4283400();
   input += synapse0x4283440();
   input += synapse0x4283480();
   input += synapse0x42834c0();
   input += synapse0x4283500();
   input += synapse0x4283540();
   input += synapse0x4283580();
   input += synapse0x42835c0();
   input += synapse0x4283600();
   return input;
}

double NNfunction_tb_t1t1::neuron0x42824e0() {
   double input = input0x42824e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x4283640() {
   double input = 1.96018;
   input += synapse0x4283980();
   input += synapse0x42839c0();
   input += synapse0x4283a00();
   input += synapse0x4283a40();
   input += synapse0x4283a80();
   input += synapse0x4283ac0();
   input += synapse0x4283b00();
   input += synapse0x4283b40();
   input += synapse0x4283b80();
   input += synapse0x4283bc0();
   input += synapse0x4283c00();
   input += synapse0x4283c40();
   input += synapse0x4283c80();
   input += synapse0x4283cc0();
   input += synapse0x4283d00();
   input += synapse0x4283d40();
   input += synapse0x42837d0();
   input += synapse0x4283810();
   input += synapse0x4283e90();
   input += synapse0x4283ed0();
   input += synapse0x4283f10();
   input += synapse0x4283f50();
   input += synapse0x4283f90();
   input += synapse0x4283fd0();
   input += synapse0x4284010();
   input += synapse0x4284050();
   input += synapse0x4284090();
   input += synapse0x42840d0();
   input += synapse0x4284110();
   input += synapse0x4284150();
   input += synapse0x4284190();
   input += synapse0x42841d0();
   input += synapse0x4283d80();
   input += synapse0x4283dc0();
   input += synapse0x4283e00();
   input += synapse0x4283e40();
   input += synapse0x4284420();
   input += synapse0x4284460();
   input += synapse0x42844a0();
   input += synapse0x42844e0();
   input += synapse0x4284520();
   input += synapse0x4284560();
   input += synapse0x42845a0();
   input += synapse0x42845e0();
   input += synapse0x4284620();
   input += synapse0x4284660();
   input += synapse0x42846a0();
   input += synapse0x42846e0();
   input += synapse0x4284720();
   input += synapse0x4284760();
   return input;
}

double NNfunction_tb_t1t1::neuron0x4283640() {
   double input = input0x4283640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x42847a0() {
   double input = 2.11743;
   input += synapse0x4284ae0();
   input += synapse0x4284b20();
   input += synapse0x4284b60();
   input += synapse0x4284ba0();
   input += synapse0x4284be0();
   input += synapse0x4284c20();
   input += synapse0x4284c60();
   input += synapse0x4284ca0();
   input += synapse0x4284ce0();
   input += synapse0x4284d20();
   input += synapse0x4284d60();
   input += synapse0x4284da0();
   input += synapse0x4284de0();
   input += synapse0x4284e20();
   input += synapse0x4284e60();
   input += synapse0x4284ea0();
   input += synapse0x4284930();
   input += synapse0x4284970();
   input += synapse0x4284ff0();
   input += synapse0x4285030();
   input += synapse0x4285070();
   input += synapse0x42850b0();
   input += synapse0x42850f0();
   input += synapse0x4285130();
   input += synapse0x4285170();
   input += synapse0x42851b0();
   input += synapse0x42851f0();
   input += synapse0x4285230();
   input += synapse0x4285270();
   input += synapse0x42852b0();
   input += synapse0x42852f0();
   input += synapse0x4285330();
   input += synapse0x4284ee0();
   input += synapse0x4284f20();
   input += synapse0x4284f60();
   input += synapse0x4284fa0();
   input += synapse0x4285580();
   input += synapse0x42855c0();
   input += synapse0x4285600();
   input += synapse0x4285640();
   input += synapse0x4285680();
   input += synapse0x42856c0();
   input += synapse0x4285700();
   input += synapse0x4285740();
   input += synapse0x4285780();
   input += synapse0x42857c0();
   input += synapse0x4285800();
   input += synapse0x4285840();
   input += synapse0x4285880();
   input += synapse0x42858c0();
   return input;
}

double NNfunction_tb_t1t1::neuron0x42847a0() {
   double input = input0x42847a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_tb_t1t1::input0x4285900() {
   double input = 5.8818;
   input += synapse0x4285b20();
   input += synapse0x4285b60();
   input += synapse0x4285ba0();
   input += synapse0x4285be0();
   input += synapse0x4285c20();
   return input;
}

double NNfunction_tb_t1t1::neuron0x4285900() {
   double input = input0x4285900();
   return (input * 1)+0;
}

double NNfunction_tb_t1t1::synapse0x4255c50() {
   return (neuron0x4250970()*-0.125612);
}

double NNfunction_tb_t1t1::synapse0x4255c90() {
   return (neuron0x4250c20()*0.104552);
}

double NNfunction_tb_t1t1::synapse0x4255cd0() {
   return (neuron0x4250f60()*0.112102);
}

double NNfunction_tb_t1t1::synapse0x4255d10() {
   return (neuron0x42512a0()*-0.397884);
}

double NNfunction_tb_t1t1::synapse0x4255d50() {
   return (neuron0x42515e0()*-0.185755);
}

double NNfunction_tb_t1t1::synapse0x4255d90() {
   return (neuron0x4251920()*0.0233531);
}

double NNfunction_tb_t1t1::synapse0x4255dd0() {
   return (neuron0x4251c60()*0.0394702);
}

double NNfunction_tb_t1t1::synapse0x4255e10() {
   return (neuron0x4251fa0()*0.0182281);
}

double NNfunction_tb_t1t1::synapse0x4255e50() {
   return (neuron0x42522e0()*-0.0509542);
}

double NNfunction_tb_t1t1::synapse0x4255e90() {
   return (neuron0x4252620()*-0.0559968);
}

double NNfunction_tb_t1t1::synapse0x4255ed0() {
   return (neuron0x4252960()*-0.0427589);
}

double NNfunction_tb_t1t1::synapse0x4255f10() {
   return (neuron0x4252ca0()*-0.0219767);
}

double NNfunction_tb_t1t1::synapse0x4255f50() {
   return (neuron0x4252fe0()*-0.496182);
}

double NNfunction_tb_t1t1::synapse0x4255f90() {
   return (neuron0x4253320()*-0.132081);
}

double NNfunction_tb_t1t1::synapse0x4255fd0() {
   return (neuron0x4253660()*0.0452599);
}

double NNfunction_tb_t1t1::synapse0x4256010() {
   return (neuron0x42539a0()*0.00325318);
}

double NNfunction_tb_t1t1::synapse0x4255aa0() {
   return (neuron0x4253ce0()*0.588532);
}

double NNfunction_tb_t1t1::synapse0x4255ae0() {
   return (neuron0x4254240()*0.137477);
}

double NNfunction_tb_t1t1::synapse0x400d050() {
   return (neuron0x4254460()*-0.0089541);
}

double NNfunction_tb_t1t1::synapse0x400d090() {
   return (neuron0x42547a0()*-0.0559851);
}

double NNfunction_tb_t1t1::synapse0x4256160() {
   return (neuron0x4254ae0()*0.0973377);
}

double NNfunction_tb_t1t1::synapse0x42561a0() {
   return (neuron0x4254e20()*-0.0134454);
}

double NNfunction_tb_t1t1::synapse0x42561e0() {
   return (neuron0x4255160()*-0.0466985);
}

double NNfunction_tb_t1t1::synapse0x4256220() {
   return (neuron0x42554a0()*-0.313241);
}

double NNfunction_tb_t1t1::synapse0x42565a0() {
   return (neuron0x4250970()*0.0209377);
}

double NNfunction_tb_t1t1::synapse0x42565e0() {
   return (neuron0x4250c20()*0.0118379);
}

double NNfunction_tb_t1t1::synapse0x4256620() {
   return (neuron0x4250f60()*-0.0012787);
}

double NNfunction_tb_t1t1::synapse0x4256660() {
   return (neuron0x42512a0()*-2.51732);
}

double NNfunction_tb_t1t1::synapse0x42566a0() {
   return (neuron0x42515e0()*-0.0302595);
}

double NNfunction_tb_t1t1::synapse0x42566e0() {
   return (neuron0x4251920()*-0.0147181);
}

double NNfunction_tb_t1t1::synapse0x4256720() {
   return (neuron0x4251c60()*-0.00521547);
}

double NNfunction_tb_t1t1::synapse0x4256760() {
   return (neuron0x4251fa0()*0.00236763);
}

double NNfunction_tb_t1t1::synapse0x42567a0() {
   return (neuron0x42522e0()*0.0143278);
}

double NNfunction_tb_t1t1::synapse0x4256050() {
   return (neuron0x4252620()*-0.00591946);
}

double NNfunction_tb_t1t1::synapse0x4256090() {
   return (neuron0x4252960()*-0.00827942);
}

double NNfunction_tb_t1t1::synapse0x42560d0() {
   return (neuron0x4252ca0()*-0.00362751);
}

double NNfunction_tb_t1t1::synapse0x4256110() {
   return (neuron0x4252fe0()*-0.00630002);
}

double NNfunction_tb_t1t1::synapse0x42569f0() {
   return (neuron0x4253320()*0.0913787);
}

double NNfunction_tb_t1t1::synapse0x4256a30() {
   return (neuron0x4253660()*0.0173855);
}

double NNfunction_tb_t1t1::synapse0x4256a70() {
   return (neuron0x42539a0()*-0.0125148);
}

double NNfunction_tb_t1t1::synapse0x42563f0() {
   return (neuron0x4253ce0()*0.0817143);
}

double NNfunction_tb_t1t1::synapse0x4256430() {
   return (neuron0x4254240()*0.0031894);
}

double NNfunction_tb_t1t1::synapse0x4256bc0() {
   return (neuron0x4254460()*-0.0221159);
}

double NNfunction_tb_t1t1::synapse0x4256c00() {
   return (neuron0x42547a0()*-0.0168392);
}

double NNfunction_tb_t1t1::synapse0x4256c40() {
   return (neuron0x4254ae0()*0.0686613);
}

double NNfunction_tb_t1t1::synapse0x4256c80() {
   return (neuron0x4254e20()*0.0388146);
}

double NNfunction_tb_t1t1::synapse0x4256cc0() {
   return (neuron0x4255160()*0.0284754);
}

double NNfunction_tb_t1t1::synapse0x4256d00() {
   return (neuron0x42554a0()*0.0458369);
}

double NNfunction_tb_t1t1::synapse0x4257080() {
   return (neuron0x4250970()*0.292285);
}

double NNfunction_tb_t1t1::synapse0x42570c0() {
   return (neuron0x4250c20()*-0.0204347);
}

double NNfunction_tb_t1t1::synapse0x4257100() {
   return (neuron0x4250f60()*0.0667161);
}

double NNfunction_tb_t1t1::synapse0x4257140() {
   return (neuron0x42512a0()*-0.0106774);
}

double NNfunction_tb_t1t1::synapse0x4257180() {
   return (neuron0x42515e0()*0.366548);
}

double NNfunction_tb_t1t1::synapse0x42571c0() {
   return (neuron0x4251920()*-0.0117449);
}

double NNfunction_tb_t1t1::synapse0x4257200() {
   return (neuron0x4251c60()*0.00494027);
}

double NNfunction_tb_t1t1::synapse0x4257240() {
   return (neuron0x4251fa0()*0.0108622);
}

double NNfunction_tb_t1t1::synapse0x4257280() {
   return (neuron0x42522e0()*0.0373413);
}

double NNfunction_tb_t1t1::synapse0x42572c0() {
   return (neuron0x4252620()*0.00943228);
}

double NNfunction_tb_t1t1::synapse0x4257300() {
   return (neuron0x4252960()*0.0186343);
}

double NNfunction_tb_t1t1::synapse0x4257340() {
   return (neuron0x4252ca0()*-0.00967218);
}

double NNfunction_tb_t1t1::synapse0x4257380() {
   return (neuron0x4252fe0()*-0.0229252);
}

double NNfunction_tb_t1t1::synapse0x42573c0() {
   return (neuron0x4253320()*0.189734);
}

double NNfunction_tb_t1t1::synapse0x4257400() {
   return (neuron0x4253660()*0.0376986);
}

double NNfunction_tb_t1t1::synapse0x4257440() {
   return (neuron0x42539a0()*-0.0277347);
}

double NNfunction_tb_t1t1::synapse0x4256ed0() {
   return (neuron0x4253ce0()*0.196471);
}

double NNfunction_tb_t1t1::synapse0x4256f10() {
   return (neuron0x4254240()*-0.00597188);
}

double NNfunction_tb_t1t1::synapse0x2e80a20() {
   return (neuron0x4254460()*-0.0117956);
}

double NNfunction_tb_t1t1::synapse0x401aa20() {
   return (neuron0x42547a0()*0.0122602);
}

double NNfunction_tb_t1t1::synapse0x401aa60() {
   return (neuron0x4254ae0()*-0.226226);
}

double NNfunction_tb_t1t1::synapse0x4259380() {
   return (neuron0x4254e20()*-0.00823884);
}

double NNfunction_tb_t1t1::synapse0x42593c0() {
   return (neuron0x4255160()*-0.019087);
}

double NNfunction_tb_t1t1::synapse0x42506b0() {
   return (neuron0x42554a0()*1.50782);
}

double NNfunction_tb_t1t1::synapse0x4250780() {
   return (neuron0x4250970()*0.0364293);
}

double NNfunction_tb_t1t1::synapse0x401b2a0() {
   return (neuron0x4250c20()*-0.024166);
}

double NNfunction_tb_t1t1::synapse0x4256970() {
   return (neuron0x4250f60()*-0.951538);
}

double NNfunction_tb_t1t1::synapse0x42569b0() {
   return (neuron0x42512a0()*0.0712117);
}

double NNfunction_tb_t1t1::synapse0x4257590() {
   return (neuron0x42515e0()*-0.0833381);
}

double NNfunction_tb_t1t1::synapse0x42575d0() {
   return (neuron0x4251920()*-0.013707);
}

double NNfunction_tb_t1t1::synapse0x4257610() {
   return (neuron0x4251c60()*-0.0156881);
}

double NNfunction_tb_t1t1::synapse0x4257650() {
   return (neuron0x4251fa0()*-0.041523);
}

double NNfunction_tb_t1t1::synapse0x4257690() {
   return (neuron0x42522e0()*4.96313e-05);
}

double NNfunction_tb_t1t1::synapse0x42576d0() {
   return (neuron0x4252620()*0.0209013);
}

double NNfunction_tb_t1t1::synapse0x4257710() {
   return (neuron0x4252960()*0.0500748);
}

double NNfunction_tb_t1t1::synapse0x4257750() {
   return (neuron0x4252ca0()*0.0338144);
}

double NNfunction_tb_t1t1::synapse0x4257790() {
   return (neuron0x4252fe0()*0.0627047);
}

double NNfunction_tb_t1t1::synapse0x42577d0() {
   return (neuron0x4253320()*1.18627);
}

double NNfunction_tb_t1t1::synapse0x4257810() {
   return (neuron0x4253660()*-0.0203528);
}

double NNfunction_tb_t1t1::synapse0x4257850() {
   return (neuron0x42539a0()*-0.0329793);
}

double NNfunction_tb_t1t1::synapse0x42506f0() {
   return (neuron0x4253ce0()*-0.601399);
}

double NNfunction_tb_t1t1::synapse0x4250730() {
   return (neuron0x4254240()*0.0198356);
}

double NNfunction_tb_t1t1::synapse0x42579a0() {
   return (neuron0x4254460()*0.0184827);
}

double NNfunction_tb_t1t1::synapse0x42579e0() {
   return (neuron0x42547a0()*0.0485207);
}

double NNfunction_tb_t1t1::synapse0x4257a20() {
   return (neuron0x4254ae0()*-0.0277466);
}

double NNfunction_tb_t1t1::synapse0x4257a60() {
   return (neuron0x4254e20()*-0.00997226);
}

double NNfunction_tb_t1t1::synapse0x4257aa0() {
   return (neuron0x4255160()*0.00924602);
}

double NNfunction_tb_t1t1::synapse0x4257ae0() {
   return (neuron0x42554a0()*0.351035);
}

double NNfunction_tb_t1t1::synapse0x4257e60() {
   return (neuron0x4250970()*-0.307129);
}

double NNfunction_tb_t1t1::synapse0x4257ea0() {
   return (neuron0x4250c20()*0.0670871);
}

double NNfunction_tb_t1t1::synapse0x4257ee0() {
   return (neuron0x4250f60()*-0.574976);
}

double NNfunction_tb_t1t1::synapse0x4257f20() {
   return (neuron0x42512a0()*0.349944);
}

double NNfunction_tb_t1t1::synapse0x4257f60() {
   return (neuron0x42515e0()*0.587569);
}

double NNfunction_tb_t1t1::synapse0x4257fa0() {
   return (neuron0x4251920()*0.00922022);
}

double NNfunction_tb_t1t1::synapse0x4257fe0() {
   return (neuron0x4251c60()*0.00559698);
}

double NNfunction_tb_t1t1::synapse0x4258020() {
   return (neuron0x4251fa0()*0.074566);
}

double NNfunction_tb_t1t1::synapse0x4258060() {
   return (neuron0x42522e0()*-0.0269822);
}

double NNfunction_tb_t1t1::synapse0x42580a0() {
   return (neuron0x4252620()*-0.200042);
}

double NNfunction_tb_t1t1::synapse0x42580e0() {
   return (neuron0x4252960()*-0.0239364);
}

double NNfunction_tb_t1t1::synapse0x4258120() {
   return (neuron0x4252ca0()*-0.05896);
}

double NNfunction_tb_t1t1::synapse0x4258160() {
   return (neuron0x4252fe0()*0.0557481);
}

double NNfunction_tb_t1t1::synapse0x42581a0() {
   return (neuron0x4253320()*-0.161618);
}

double NNfunction_tb_t1t1::synapse0x42581e0() {
   return (neuron0x4253660()*-0.117139);
}

double NNfunction_tb_t1t1::synapse0x4258220() {
   return (neuron0x42539a0()*0.0975619);
}

double NNfunction_tb_t1t1::synapse0x4258370() {
   return (neuron0x4253ce0()*-0.318924);
}

double NNfunction_tb_t1t1::synapse0x4257cb0() {
   return (neuron0x4254240()*-0.0692778);
}

double NNfunction_tb_t1t1::synapse0x4257cf0() {
   return (neuron0x4254460()*0.0325376);
}

double NNfunction_tb_t1t1::synapse0x42594c0() {
   return (neuron0x42547a0()*-0.0914682);
}

double NNfunction_tb_t1t1::synapse0x4259500() {
   return (neuron0x4254ae0()*-0.36895);
}

double NNfunction_tb_t1t1::synapse0x4259540() {
   return (neuron0x4254e20()*-0.339889);
}

double NNfunction_tb_t1t1::synapse0x4259580() {
   return (neuron0x4255160()*-0.12689);
}

double NNfunction_tb_t1t1::synapse0x42595c0() {
   return (neuron0x42554a0()*-0.208788);
}

double NNfunction_tb_t1t1::synapse0x4259940() {
   return (neuron0x4250970()*0.171956);
}

double NNfunction_tb_t1t1::synapse0x4259980() {
   return (neuron0x4250c20()*0.124862);
}

double NNfunction_tb_t1t1::synapse0x42599c0() {
   return (neuron0x4250f60()*-0.714076);
}

double NNfunction_tb_t1t1::synapse0x4259a00() {
   return (neuron0x42512a0()*0.618768);
}

double NNfunction_tb_t1t1::synapse0x4259a40() {
   return (neuron0x42515e0()*0.127275);
}

double NNfunction_tb_t1t1::synapse0x4259a80() {
   return (neuron0x4251920()*-0.01456);
}

double NNfunction_tb_t1t1::synapse0x4259ac0() {
   return (neuron0x4251c60()*-0.0632949);
}

double NNfunction_tb_t1t1::synapse0x4259b00() {
   return (neuron0x4251fa0()*0.306062);
}

double NNfunction_tb_t1t1::synapse0x4259b40() {
   return (neuron0x42522e0()*0.239124);
}

double NNfunction_tb_t1t1::synapse0x401ad70() {
   return (neuron0x4252620()*-0.51136);
}

double NNfunction_tb_t1t1::synapse0x401adb0() {
   return (neuron0x4252960()*0.238009);
}

double NNfunction_tb_t1t1::synapse0x401adf0() {
   return (neuron0x4252ca0()*0.214804);
}

double NNfunction_tb_t1t1::synapse0x401ae30() {
   return (neuron0x4252fe0()*-0.0412926);
}

double NNfunction_tb_t1t1::synapse0x401ae70() {
   return (neuron0x4253320()*0.157903);
}

double NNfunction_tb_t1t1::synapse0x401aeb0() {
   return (neuron0x4253660()*0.0369412);
}

double NNfunction_tb_t1t1::synapse0x401aef0() {
   return (neuron0x42539a0()*0.262624);
}

double NNfunction_tb_t1t1::synapse0x4259790() {
   return (neuron0x4253ce0()*0.00988716);
}

double NNfunction_tb_t1t1::synapse0x42597d0() {
   return (neuron0x4254240()*-0.0688211);
}

double NNfunction_tb_t1t1::synapse0x401b040() {
   return (neuron0x4254460()*-0.104152);
}

double NNfunction_tb_t1t1::synapse0x401b080() {
   return (neuron0x42547a0()*0.132597);
}

double NNfunction_tb_t1t1::synapse0x401b0c0() {
   return (neuron0x4254ae0()*-0.329126);
}

double NNfunction_tb_t1t1::synapse0x401b100() {
   return (neuron0x4254e20()*-0.215399);
}

double NNfunction_tb_t1t1::synapse0x401b140() {
   return (neuron0x4255160()*-0.199774);
}

double NNfunction_tb_t1t1::synapse0x425a390() {
   return (neuron0x42554a0()*-0.529113);
}

double NNfunction_tb_t1t1::synapse0x425a710() {
   return (neuron0x4250970()*0.0612926);
}

double NNfunction_tb_t1t1::synapse0x425a750() {
   return (neuron0x4250c20()*0.300665);
}

double NNfunction_tb_t1t1::synapse0x425a790() {
   return (neuron0x4250f60()*0.022257);
}

double NNfunction_tb_t1t1::synapse0x425a7d0() {
   return (neuron0x42512a0()*0.0579385);
}

double NNfunction_tb_t1t1::synapse0x425a810() {
   return (neuron0x42515e0()*0.181388);
}

double NNfunction_tb_t1t1::synapse0x425a850() {
   return (neuron0x4251920()*0.0166147);
}

double NNfunction_tb_t1t1::synapse0x425a890() {
   return (neuron0x4251c60()*0.0138788);
}

double NNfunction_tb_t1t1::synapse0x425a8d0() {
   return (neuron0x4251fa0()*0.0295236);
}

double NNfunction_tb_t1t1::synapse0x425a910() {
   return (neuron0x42522e0()*-0.0568975);
}

double NNfunction_tb_t1t1::synapse0x425a950() {
   return (neuron0x4252620()*-0.0779411);
}

double NNfunction_tb_t1t1::synapse0x425a990() {
   return (neuron0x4252960()*-0.0877203);
}

double NNfunction_tb_t1t1::synapse0x425a9d0() {
   return (neuron0x4252ca0()*0.0297061);
}

double NNfunction_tb_t1t1::synapse0x425aa10() {
   return (neuron0x4252fe0()*0.0142965);
}

double NNfunction_tb_t1t1::synapse0x425aa50() {
   return (neuron0x4253320()*0.0558216);
}

double NNfunction_tb_t1t1::synapse0x425aa90() {
   return (neuron0x4253660()*0.00207434);
}

double NNfunction_tb_t1t1::synapse0x425aad0() {
   return (neuron0x42539a0()*-0.0242409);
}

double NNfunction_tb_t1t1::synapse0x425a560() {
   return (neuron0x4253ce0()*0.0694821);
}

double NNfunction_tb_t1t1::synapse0x425a5a0() {
   return (neuron0x4254240()*0.082511);
}

double NNfunction_tb_t1t1::synapse0x425ac20() {
   return (neuron0x4254460()*-0.00349847);
}

double NNfunction_tb_t1t1::synapse0x425ac60() {
   return (neuron0x42547a0()*-0.0185027);
}

double NNfunction_tb_t1t1::synapse0x425aca0() {
   return (neuron0x4254ae0()*-0.362698);
}

double NNfunction_tb_t1t1::synapse0x425ace0() {
   return (neuron0x4254e20()*-0.032253);
}

double NNfunction_tb_t1t1::synapse0x425ad20() {
   return (neuron0x4255160()*-0.0377592);
}

double NNfunction_tb_t1t1::synapse0x425ad60() {
   return (neuron0x42554a0()*0.638264);
}

double NNfunction_tb_t1t1::synapse0x425b0e0() {
   return (neuron0x4250970()*0.111585);
}

double NNfunction_tb_t1t1::synapse0x425b120() {
   return (neuron0x4250c20()*-0.0220077);
}

double NNfunction_tb_t1t1::synapse0x425b160() {
   return (neuron0x4250f60()*-0.0606569);
}

double NNfunction_tb_t1t1::synapse0x425b1a0() {
   return (neuron0x42512a0()*0.0290513);
}

double NNfunction_tb_t1t1::synapse0x425b1e0() {
   return (neuron0x42515e0()*0.0406099);
}

double NNfunction_tb_t1t1::synapse0x425b220() {
   return (neuron0x4251920()*-0.00579746);
}

double NNfunction_tb_t1t1::synapse0x425b260() {
   return (neuron0x4251c60()*0.0172079);
}

double NNfunction_tb_t1t1::synapse0x425b2a0() {
   return (neuron0x4251fa0()*-0.00727175);
}

double NNfunction_tb_t1t1::synapse0x425b2e0() {
   return (neuron0x42522e0()*-0.0692491);
}

double NNfunction_tb_t1t1::synapse0x425b320() {
   return (neuron0x4252620()*0.0200406);
}

double NNfunction_tb_t1t1::synapse0x425b360() {
   return (neuron0x4252960()*-0.00700046);
}

double NNfunction_tb_t1t1::synapse0x425b3a0() {
   return (neuron0x4252ca0()*-0.0369739);
}

double NNfunction_tb_t1t1::synapse0x425b3e0() {
   return (neuron0x4252fe0()*0.0233702);
}

double NNfunction_tb_t1t1::synapse0x425b420() {
   return (neuron0x4253320()*3.8858);
}

double NNfunction_tb_t1t1::synapse0x425b460() {
   return (neuron0x4253660()*-0.0121928);
}

double NNfunction_tb_t1t1::synapse0x425b4a0() {
   return (neuron0x42539a0()*0.00458299);
}

double NNfunction_tb_t1t1::synapse0x425af30() {
   return (neuron0x4253ce0()*-0.155106);
}

double NNfunction_tb_t1t1::synapse0x425af70() {
   return (neuron0x4254240()*-0.0132458);
}

double NNfunction_tb_t1t1::synapse0x425b5f0() {
   return (neuron0x4254460()*-0.0332008);
}

double NNfunction_tb_t1t1::synapse0x425b630() {
   return (neuron0x42547a0()*0.00154731);
}

double NNfunction_tb_t1t1::synapse0x425b670() {
   return (neuron0x4254ae0()*0.0382155);
}

double NNfunction_tb_t1t1::synapse0x425b6b0() {
   return (neuron0x4254e20()*-0.0111709);
}

double NNfunction_tb_t1t1::synapse0x425b6f0() {
   return (neuron0x4255160()*-0.0284824);
}

double NNfunction_tb_t1t1::synapse0x425b730() {
   return (neuron0x42554a0()*0.12605);
}

double NNfunction_tb_t1t1::synapse0x4254130() {
   return (neuron0x4250970()*0.0283022);
}

double NNfunction_tb_t1t1::synapse0x4254170() {
   return (neuron0x4250c20()*-0.157568);
}

double NNfunction_tb_t1t1::synapse0x42541b0() {
   return (neuron0x4250f60()*-0.218116);
}

double NNfunction_tb_t1t1::synapse0x42541f0() {
   return (neuron0x42512a0()*0.105123);
}

double NNfunction_tb_t1t1::synapse0x425bcc0() {
   return (neuron0x42515e0()*-0.225466);
}

double NNfunction_tb_t1t1::synapse0x425bd00() {
   return (neuron0x4251920()*-0.023308);
}

double NNfunction_tb_t1t1::synapse0x425bd40() {
   return (neuron0x4251c60()*-0.0667375);
}

double NNfunction_tb_t1t1::synapse0x425bd80() {
   return (neuron0x4251fa0()*0.0190488);
}

double NNfunction_tb_t1t1::synapse0x425bdc0() {
   return (neuron0x42522e0()*0.0651933);
}

double NNfunction_tb_t1t1::synapse0x425be00() {
   return (neuron0x4252620()*0.0915056);
}

double NNfunction_tb_t1t1::synapse0x425be40() {
   return (neuron0x4252960()*0.0868845);
}

double NNfunction_tb_t1t1::synapse0x425be80() {
   return (neuron0x4252ca0()*0.101023);
}

double NNfunction_tb_t1t1::synapse0x425bec0() {
   return (neuron0x4252fe0()*0.0863847);
}

double NNfunction_tb_t1t1::synapse0x425bf00() {
   return (neuron0x4253320()*0.136714);
}

double NNfunction_tb_t1t1::synapse0x425bf40() {
   return (neuron0x4253660()*-0.0633832);
}

double NNfunction_tb_t1t1::synapse0x425bf80() {
   return (neuron0x42539a0()*-0.0244107);
}

double NNfunction_tb_t1t1::synapse0x425b900() {
   return (neuron0x4253ce0()*-0.32153);
}

double NNfunction_tb_t1t1::synapse0x425b940() {
   return (neuron0x4254240()*0.401957);
}

double NNfunction_tb_t1t1::synapse0x425c0d0() {
   return (neuron0x4254460()*0.175871);
}

double NNfunction_tb_t1t1::synapse0x425c110() {
   return (neuron0x42547a0()*-0.0618923);
}

double NNfunction_tb_t1t1::synapse0x425c150() {
   return (neuron0x4254ae0()*-0.238505);
}

double NNfunction_tb_t1t1::synapse0x425c190() {
   return (neuron0x4254e20()*0.00170881);
}

double NNfunction_tb_t1t1::synapse0x425c1d0() {
   return (neuron0x4255160()*-0.0143215);
}

double NNfunction_tb_t1t1::synapse0x425c210() {
   return (neuron0x42554a0()*0.236683);
}

double NNfunction_tb_t1t1::synapse0x425c590() {
   return (neuron0x4250970()*0.261314);
}

double NNfunction_tb_t1t1::synapse0x425c5d0() {
   return (neuron0x4250c20()*0.469806);
}

double NNfunction_tb_t1t1::synapse0x425c610() {
   return (neuron0x4250f60()*-0.312034);
}

double NNfunction_tb_t1t1::synapse0x425c650() {
   return (neuron0x42512a0()*0.276129);
}

double NNfunction_tb_t1t1::synapse0x425c690() {
   return (neuron0x42515e0()*0.359049);
}

double NNfunction_tb_t1t1::synapse0x425c6d0() {
   return (neuron0x4251920()*-0.28559);
}

double NNfunction_tb_t1t1::synapse0x425c710() {
   return (neuron0x4251c60()*0.0969022);
}

double NNfunction_tb_t1t1::synapse0x425c750() {
   return (neuron0x4251fa0()*-0.179151);
}

double NNfunction_tb_t1t1::synapse0x425c790() {
   return (neuron0x42522e0()*0.784097);
}

double NNfunction_tb_t1t1::synapse0x425c7d0() {
   return (neuron0x4252620()*-0.772414);
}

double NNfunction_tb_t1t1::synapse0x425c810() {
   return (neuron0x4252960()*0.867874);
}

double NNfunction_tb_t1t1::synapse0x425c850() {
   return (neuron0x4252ca0()*-0.116022);
}

double NNfunction_tb_t1t1::synapse0x425c890() {
   return (neuron0x4252fe0()*-0.0825093);
}

double NNfunction_tb_t1t1::synapse0x425c8d0() {
   return (neuron0x4253320()*1.17443);
}

double NNfunction_tb_t1t1::synapse0x425c910() {
   return (neuron0x4253660()*0.107663);
}

double NNfunction_tb_t1t1::synapse0x425c950() {
   return (neuron0x42539a0()*-0.107518);
}

double NNfunction_tb_t1t1::synapse0x425c3e0() {
   return (neuron0x4253ce0()*-1.5072);
}

double NNfunction_tb_t1t1::synapse0x425c420() {
   return (neuron0x4254240()*0.019737);
}

double NNfunction_tb_t1t1::synapse0x425caa0() {
   return (neuron0x4254460()*-0.500371);
}

double NNfunction_tb_t1t1::synapse0x425cae0() {
   return (neuron0x42547a0()*-0.361955);
}

double NNfunction_tb_t1t1::synapse0x425cb20() {
   return (neuron0x4254ae0()*0.470834);
}

double NNfunction_tb_t1t1::synapse0x425cb60() {
   return (neuron0x4254e20()*0.383427);
}

double NNfunction_tb_t1t1::synapse0x425cba0() {
   return (neuron0x4255160()*0.132176);
}

double NNfunction_tb_t1t1::synapse0x425cbe0() {
   return (neuron0x42554a0()*0.189197);
}

double NNfunction_tb_t1t1::synapse0x425cf60() {
   return (neuron0x4250970()*0.0280412);
}

double NNfunction_tb_t1t1::synapse0x425cfa0() {
   return (neuron0x4250c20()*-0.0510801);
}

double NNfunction_tb_t1t1::synapse0x425cfe0() {
   return (neuron0x4250f60()*-0.0683255);
}

double NNfunction_tb_t1t1::synapse0x425d020() {
   return (neuron0x42512a0()*-0.0446416);
}

double NNfunction_tb_t1t1::synapse0x425d060() {
   return (neuron0x42515e0()*-0.112359);
}

double NNfunction_tb_t1t1::synapse0x425d0a0() {
   return (neuron0x4251920()*-0.0537495);
}

double NNfunction_tb_t1t1::synapse0x425d0e0() {
   return (neuron0x4251c60()*-0.0426512);
}

double NNfunction_tb_t1t1::synapse0x425d120() {
   return (neuron0x4251fa0()*-0.226274);
}

double NNfunction_tb_t1t1::synapse0x425d160() {
   return (neuron0x42522e0()*0.029232);
}

double NNfunction_tb_t1t1::synapse0x425d1a0() {
   return (neuron0x4252620()*-0.0277515);
}

double NNfunction_tb_t1t1::synapse0x425d1e0() {
   return (neuron0x4252960()*-0.00242475);
}

double NNfunction_tb_t1t1::synapse0x425d220() {
   return (neuron0x4252ca0()*-0.0328804);
}

double NNfunction_tb_t1t1::synapse0x425d260() {
   return (neuron0x4252fe0()*0.083518);
}

double NNfunction_tb_t1t1::synapse0x425d2a0() {
   return (neuron0x4253320()*0.052531);
}

double NNfunction_tb_t1t1::synapse0x425d2e0() {
   return (neuron0x4253660()*-0.0355015);
}

double NNfunction_tb_t1t1::synapse0x425d320() {
   return (neuron0x42539a0()*0.815803);
}

double NNfunction_tb_t1t1::synapse0x425cdb0() {
   return (neuron0x4253ce0()*2.0543);
}

double NNfunction_tb_t1t1::synapse0x425cdf0() {
   return (neuron0x4254240()*-0.052429);
}

double NNfunction_tb_t1t1::synapse0x4259b80() {
   return (neuron0x4254460()*0.103538);
}

double NNfunction_tb_t1t1::synapse0x4259bc0() {
   return (neuron0x42547a0()*0.0629799);
}

double NNfunction_tb_t1t1::synapse0x4259c00() {
   return (neuron0x4254ae0()*0.0258514);
}

double NNfunction_tb_t1t1::synapse0x4259c40() {
   return (neuron0x4254e20()*-0.0259696);
}

double NNfunction_tb_t1t1::synapse0x4259c80() {
   return (neuron0x4255160()*0.0111283);
}

double NNfunction_tb_t1t1::synapse0x4259cc0() {
   return (neuron0x42554a0()*-0.135962);
}

double NNfunction_tb_t1t1::synapse0x425a040() {
   return (neuron0x4250970()*-0.00358969);
}

double NNfunction_tb_t1t1::synapse0x425a080() {
   return (neuron0x4250c20()*0.00206313);
}

double NNfunction_tb_t1t1::synapse0x425a0c0() {
   return (neuron0x4250f60()*-0.00692222);
}

double NNfunction_tb_t1t1::synapse0x425a100() {
   return (neuron0x42512a0()*-0.00181697);
}

double NNfunction_tb_t1t1::synapse0x425a140() {
   return (neuron0x42515e0()*-0.00521138);
}

double NNfunction_tb_t1t1::synapse0x425a180() {
   return (neuron0x4251920()*0.00531195);
}

double NNfunction_tb_t1t1::synapse0x425a1c0() {
   return (neuron0x4251c60()*0.01139);
}

double NNfunction_tb_t1t1::synapse0x425a200() {
   return (neuron0x4251fa0()*0.00270145);
}

double NNfunction_tb_t1t1::synapse0x425a240() {
   return (neuron0x42522e0()*-0.00347026);
}

double NNfunction_tb_t1t1::synapse0x425a280() {
   return (neuron0x4252620()*-0.0059935);
}

double NNfunction_tb_t1t1::synapse0x425a2c0() {
   return (neuron0x4252960()*-0.0130956);
}

double NNfunction_tb_t1t1::synapse0x425a300() {
   return (neuron0x4252ca0()*0.00421111);
}

double NNfunction_tb_t1t1::synapse0x425a340() {
   return (neuron0x4252fe0()*-0.0045607);
}

double NNfunction_tb_t1t1::synapse0x425e480() {
   return (neuron0x4253320()*-0.484995);
}

double NNfunction_tb_t1t1::synapse0x425e4c0() {
   return (neuron0x4253660()*0.010212);
}

double NNfunction_tb_t1t1::synapse0x425e500() {
   return (neuron0x42539a0()*0.00069577);
}

double NNfunction_tb_t1t1::synapse0x4259e90() {
   return (neuron0x4253ce0()*0.789331);
}

double NNfunction_tb_t1t1::synapse0x4259ed0() {
   return (neuron0x4254240()*0.00404166);
}

double NNfunction_tb_t1t1::synapse0x425e650() {
   return (neuron0x4254460()*-0.000876982);
}

double NNfunction_tb_t1t1::synapse0x425e690() {
   return (neuron0x42547a0()*-0.0213366);
}

double NNfunction_tb_t1t1::synapse0x425e6d0() {
   return (neuron0x4254ae0()*0.0351907);
}

double NNfunction_tb_t1t1::synapse0x425e710() {
   return (neuron0x4254e20()*0.000688649);
}

double NNfunction_tb_t1t1::synapse0x425e750() {
   return (neuron0x4255160()*0.00462734);
}

double NNfunction_tb_t1t1::synapse0x425e790() {
   return (neuron0x42554a0()*0.0113097);
}

double NNfunction_tb_t1t1::synapse0x425eb10() {
   return (neuron0x4250970()*0.0960745);
}

double NNfunction_tb_t1t1::synapse0x425eb50() {
   return (neuron0x4250c20()*-0.0176579);
}

double NNfunction_tb_t1t1::synapse0x425eb90() {
   return (neuron0x4250f60()*0.0531317);
}

double NNfunction_tb_t1t1::synapse0x425ebd0() {
   return (neuron0x42512a0()*-2.36733);
}

double NNfunction_tb_t1t1::synapse0x425ec10() {
   return (neuron0x42515e0()*-0.0493897);
}

double NNfunction_tb_t1t1::synapse0x425ec50() {
   return (neuron0x4251920()*-0.0167906);
}

double NNfunction_tb_t1t1::synapse0x425ec90() {
   return (neuron0x4251c60()*-0.0289273);
}

double NNfunction_tb_t1t1::synapse0x425ecd0() {
   return (neuron0x4251fa0()*0.00688198);
}

double NNfunction_tb_t1t1::synapse0x425ed10() {
   return (neuron0x42522e0()*0.0353657);
}

double NNfunction_tb_t1t1::synapse0x425ed50() {
   return (neuron0x4252620()*0.0102469);
}

double NNfunction_tb_t1t1::synapse0x425ed90() {
   return (neuron0x4252960()*0.0217826);
}

double NNfunction_tb_t1t1::synapse0x425edd0() {
   return (neuron0x4252ca0()*0.0109728);
}

double NNfunction_tb_t1t1::synapse0x425ee10() {
   return (neuron0x4252fe0()*0.0373659);
}

double NNfunction_tb_t1t1::synapse0x425ee50() {
   return (neuron0x4253320()*0.129336);
}

double NNfunction_tb_t1t1::synapse0x425ee90() {
   return (neuron0x4253660()*0.0492277);
}

double NNfunction_tb_t1t1::synapse0x425eed0() {
   return (neuron0x42539a0()*-0.029354);
}

double NNfunction_tb_t1t1::synapse0x425e960() {
   return (neuron0x4253ce0()*0.0673214);
}

double NNfunction_tb_t1t1::synapse0x425e9a0() {
   return (neuron0x4254240()*0.0361399);
}

double NNfunction_tb_t1t1::synapse0x425f020() {
   return (neuron0x4254460()*-0.0609732);
}

double NNfunction_tb_t1t1::synapse0x425f060() {
   return (neuron0x42547a0()*-0.0389198);
}

double NNfunction_tb_t1t1::synapse0x425f0a0() {
   return (neuron0x4254ae0()*0.205544);
}

double NNfunction_tb_t1t1::synapse0x425f0e0() {
   return (neuron0x4254e20()*0.140643);
}

double NNfunction_tb_t1t1::synapse0x425f120() {
   return (neuron0x4255160()*0.0530501);
}

double NNfunction_tb_t1t1::synapse0x425f160() {
   return (neuron0x42554a0()*0.187347);
}

double NNfunction_tb_t1t1::synapse0x425f4e0() {
   return (neuron0x4250970()*0.105128);
}

double NNfunction_tb_t1t1::synapse0x425f520() {
   return (neuron0x4250c20()*0.0396268);
}

double NNfunction_tb_t1t1::synapse0x425f560() {
   return (neuron0x4250f60()*-0.121131);
}

double NNfunction_tb_t1t1::synapse0x425f5a0() {
   return (neuron0x42512a0()*3.71674);
}

double NNfunction_tb_t1t1::synapse0x425f5e0() {
   return (neuron0x42515e0()*-0.0245847);
}

double NNfunction_tb_t1t1::synapse0x425f620() {
   return (neuron0x4251920()*0.0263715);
}

double NNfunction_tb_t1t1::synapse0x425f660() {
   return (neuron0x4251c60()*0.0228418);
}

double NNfunction_tb_t1t1::synapse0x425f6a0() {
   return (neuron0x4251fa0()*0.062876);
}

double NNfunction_tb_t1t1::synapse0x425f6e0() {
   return (neuron0x42522e0()*0.0758455);
}

double NNfunction_tb_t1t1::synapse0x425f720() {
   return (neuron0x4252620()*-0.0191757);
}

double NNfunction_tb_t1t1::synapse0x425f760() {
   return (neuron0x4252960()*0.0238914);
}

double NNfunction_tb_t1t1::synapse0x425f7a0() {
   return (neuron0x4252ca0()*-0.00802936);
}

double NNfunction_tb_t1t1::synapse0x425f7e0() {
   return (neuron0x4252fe0()*-0.0638124);
}

double NNfunction_tb_t1t1::synapse0x425f820() {
   return (neuron0x4253320()*0.135809);
}

double NNfunction_tb_t1t1::synapse0x425f860() {
   return (neuron0x4253660()*-0.0464669);
}

double NNfunction_tb_t1t1::synapse0x425f8a0() {
   return (neuron0x42539a0()*-0.00821311);
}

double NNfunction_tb_t1t1::synapse0x425f330() {
   return (neuron0x4253ce0()*-0.615045);
}

double NNfunction_tb_t1t1::synapse0x425f370() {
   return (neuron0x4254240()*0.0100596);
}

double NNfunction_tb_t1t1::synapse0x425f9f0() {
   return (neuron0x4254460()*-0.0591696);
}

double NNfunction_tb_t1t1::synapse0x425fa30() {
   return (neuron0x42547a0()*-0.01423);
}

double NNfunction_tb_t1t1::synapse0x425fa70() {
   return (neuron0x4254ae0()*-4.82276);
}

double NNfunction_tb_t1t1::synapse0x425fab0() {
   return (neuron0x4254e20()*-0.000894162);
}

double NNfunction_tb_t1t1::synapse0x425faf0() {
   return (neuron0x4255160()*-0.0175187);
}

double NNfunction_tb_t1t1::synapse0x425fb30() {
   return (neuron0x42554a0()*0.155853);
}

double NNfunction_tb_t1t1::synapse0x425feb0() {
   return (neuron0x4250970()*-0.185498);
}

double NNfunction_tb_t1t1::synapse0x425fef0() {
   return (neuron0x4250c20()*0.00626344);
}

double NNfunction_tb_t1t1::synapse0x425ff30() {
   return (neuron0x4250f60()*0.152863);
}

double NNfunction_tb_t1t1::synapse0x425ff70() {
   return (neuron0x42512a0()*-0.0583077);
}

double NNfunction_tb_t1t1::synapse0x425ffb0() {
   return (neuron0x42515e0()*-0.161425);
}

double NNfunction_tb_t1t1::synapse0x425fff0() {
   return (neuron0x4251920()*-0.0229745);
}

double NNfunction_tb_t1t1::synapse0x4260030() {
   return (neuron0x4251c60()*0.0392455);
}

double NNfunction_tb_t1t1::synapse0x4260070() {
   return (neuron0x4251fa0()*0.0284218);
}

double NNfunction_tb_t1t1::synapse0x42600b0() {
   return (neuron0x42522e0()*-0.0877935);
}

double NNfunction_tb_t1t1::synapse0x42600f0() {
   return (neuron0x4252620()*0.0238367);
}

double NNfunction_tb_t1t1::synapse0x4260130() {
   return (neuron0x4252960()*0.0663776);
}

double NNfunction_tb_t1t1::synapse0x4260170() {
   return (neuron0x4252ca0()*-0.0569214);
}

double NNfunction_tb_t1t1::synapse0x42601b0() {
   return (neuron0x4252fe0()*-0.0348652);
}

double NNfunction_tb_t1t1::synapse0x42601f0() {
   return (neuron0x4253320()*1.43376);
}

double NNfunction_tb_t1t1::synapse0x4260230() {
   return (neuron0x4253660()*0.0534136);
}

double NNfunction_tb_t1t1::synapse0x4260270() {
   return (neuron0x42539a0()*0.0309077);
}

double NNfunction_tb_t1t1::synapse0x425fd00() {
   return (neuron0x4253ce0()*-1.48539);
}

double NNfunction_tb_t1t1::synapse0x425fd40() {
   return (neuron0x4254240()*0.0250989);
}

double NNfunction_tb_t1t1::synapse0x42603c0() {
   return (neuron0x4254460()*-0.0516458);
}

double NNfunction_tb_t1t1::synapse0x4260400() {
   return (neuron0x42547a0()*-0.06899);
}

double NNfunction_tb_t1t1::synapse0x4260440() {
   return (neuron0x4254ae0()*5.71326);
}

double NNfunction_tb_t1t1::synapse0x4260480() {
   return (neuron0x4254e20()*0.0453467);
}

double NNfunction_tb_t1t1::synapse0x42604c0() {
   return (neuron0x4255160()*-0.0235354);
}

double NNfunction_tb_t1t1::synapse0x4260500() {
   return (neuron0x42554a0()*-0.815143);
}

double NNfunction_tb_t1t1::synapse0x4260880() {
   return (neuron0x4250970()*-0.0989691);
}

double NNfunction_tb_t1t1::synapse0x4250b00() {
   return (neuron0x4250c20()*0.0340275);
}

double NNfunction_tb_t1t1::synapse0x4250b40() {
   return (neuron0x4250f60()*-0.0940897);
}

double NNfunction_tb_t1t1::synapse0x4250e40() {
   return (neuron0x42512a0()*-0.0111747);
}

double NNfunction_tb_t1t1::synapse0x4250e80() {
   return (neuron0x42515e0()*-0.121542);
}

double NNfunction_tb_t1t1::synapse0x4251180() {
   return (neuron0x4251920()*0.0182923);
}

double NNfunction_tb_t1t1::synapse0x42511c0() {
   return (neuron0x4251c60()*0.136148);
}

double NNfunction_tb_t1t1::synapse0x42514c0() {
   return (neuron0x4251fa0()*-0.00522244);
}

double NNfunction_tb_t1t1::synapse0x4251500() {
   return (neuron0x42522e0()*0.0296945);
}

double NNfunction_tb_t1t1::synapse0x4251800() {
   return (neuron0x4252620()*0.0294372);
}

double NNfunction_tb_t1t1::synapse0x4251840() {
   return (neuron0x4252960()*-0.163572);
}

double NNfunction_tb_t1t1::synapse0x4251b40() {
   return (neuron0x4252ca0()*-0.212838);
}

double NNfunction_tb_t1t1::synapse0x4251b80() {
   return (neuron0x4252fe0()*0.189676);
}

double NNfunction_tb_t1t1::synapse0x4251e80() {
   return (neuron0x4253320()*0.0464924);
}

double NNfunction_tb_t1t1::synapse0x4251ec0() {
   return (neuron0x4253660()*-1.64898);
}

double NNfunction_tb_t1t1::synapse0x42521c0() {
   return (neuron0x42539a0()*0.00859005);
}

double NNfunction_tb_t1t1::synapse0x4252200() {
   return (neuron0x4253ce0()*0.302321);
}

double NNfunction_tb_t1t1::synapse0x4252500() {
   return (neuron0x4254240()*0.422924);
}

double NNfunction_tb_t1t1::synapse0x4252540() {
   return (neuron0x4254460()*-0.194613);
}

double NNfunction_tb_t1t1::synapse0x4252840() {
   return (neuron0x42547a0()*0.0343476);
}

double NNfunction_tb_t1t1::synapse0x4252880() {
   return (neuron0x4254ae0()*-0.20789);
}

double NNfunction_tb_t1t1::synapse0x4252b80() {
   return (neuron0x4254e20()*-0.178266);
}

double NNfunction_tb_t1t1::synapse0x4252bc0() {
   return (neuron0x4255160()*-0.0929925);
}

double NNfunction_tb_t1t1::synapse0x4252ec0() {
   return (neuron0x42554a0()*-0.214971);
}

double NNfunction_tb_t1t1::synapse0x4252f00() {
   return (neuron0x4250970()*-0.0270213);
}

double NNfunction_tb_t1t1::synapse0x4253bc0() {
   return (neuron0x4250c20()*0.0125469);
}

double NNfunction_tb_t1t1::synapse0x4253c00() {
   return (neuron0x4250f60()*0.0314441);
}

double NNfunction_tb_t1t1::synapse0x42606d0() {
   return (neuron0x42512a0()*0.00506504);
}

double NNfunction_tb_t1t1::synapse0x4260710() {
   return (neuron0x42515e0()*-0.00919849);
}

double NNfunction_tb_t1t1::synapse0x4253f00() {
   return (neuron0x4251920()*0.0141241);
}

double NNfunction_tb_t1t1::synapse0x4253f40() {
   return (neuron0x4251c60()*0.0221691);
}

double NNfunction_tb_t1t1::synapse0x2e823d0() {
   return (neuron0x4251fa0()*0.0584584);
}

double NNfunction_tb_t1t1::synapse0x2e82410() {
   return (neuron0x42522e0()*0.00128096);
}

double NNfunction_tb_t1t1::synapse0x4254680() {
   return (neuron0x4252620()*-0.00675136);
}

double NNfunction_tb_t1t1::synapse0x42546c0() {
   return (neuron0x4252960()*-0.047228);
}

double NNfunction_tb_t1t1::synapse0x42549c0() {
   return (neuron0x4252ca0()*-0.00598547);
}

double NNfunction_tb_t1t1::synapse0x4254a00() {
   return (neuron0x4252fe0()*-0.00468919);
}

double NNfunction_tb_t1t1::synapse0x4254d00() {
   return (neuron0x4253320()*-3.92403);
}

double NNfunction_tb_t1t1::synapse0x4254d40() {
   return (neuron0x4253660()*0.020677);
}

double NNfunction_tb_t1t1::synapse0x4255040() {
   return (neuron0x42539a0()*0.016809);
}

double NNfunction_tb_t1t1::synapse0x4255080() {
   return (neuron0x4253ce0()*3.12187);
}

double NNfunction_tb_t1t1::synapse0x4255380() {
   return (neuron0x4254240()*-0.00531969);
}

double NNfunction_tb_t1t1::synapse0x42553c0() {
   return (neuron0x4254460()*-0.0236251);
}

double NNfunction_tb_t1t1::synapse0x42556c0() {
   return (neuron0x42547a0()*-0.0480207);
}

double NNfunction_tb_t1t1::synapse0x4255700() {
   return (neuron0x4254ae0()*-0.20099);
}

double NNfunction_tb_t1t1::synapse0x4253200() {
   return (neuron0x4254e20()*-0.0161868);
}

double NNfunction_tb_t1t1::synapse0x4253240() {
   return (neuron0x4255160()*-0.0336298);
}

double NNfunction_tb_t1t1::synapse0x42625f0() {
   return (neuron0x42554a0()*-0.0580655);
}

double NNfunction_tb_t1t1::synapse0x4262970() {
   return (neuron0x4250970()*-0.0398282);
}

double NNfunction_tb_t1t1::synapse0x42629b0() {
   return (neuron0x4250c20()*-0.00944931);
}

double NNfunction_tb_t1t1::synapse0x42629f0() {
   return (neuron0x4250f60()*0.0733888);
}

double NNfunction_tb_t1t1::synapse0x4262a30() {
   return (neuron0x42512a0()*0.0245053);
}

double NNfunction_tb_t1t1::synapse0x4262a70() {
   return (neuron0x42515e0()*0.0334052);
}

double NNfunction_tb_t1t1::synapse0x4262ab0() {
   return (neuron0x4251920()*0.00681246);
}

double NNfunction_tb_t1t1::synapse0x4262af0() {
   return (neuron0x4251c60()*-0.0142125);
}

double NNfunction_tb_t1t1::synapse0x4262b30() {
   return (neuron0x4251fa0()*-0.0227955);
}

double NNfunction_tb_t1t1::synapse0x4262b70() {
   return (neuron0x42522e0()*0.00508383);
}

double NNfunction_tb_t1t1::synapse0x4262bb0() {
   return (neuron0x4252620()*0.00930791);
}

double NNfunction_tb_t1t1::synapse0x4262bf0() {
   return (neuron0x4252960()*-0.00906008);
}

double NNfunction_tb_t1t1::synapse0x4262c30() {
   return (neuron0x4252ca0()*0.00938533);
}

double NNfunction_tb_t1t1::synapse0x4262c70() {
   return (neuron0x4252fe0()*-0.0300662);
}

double NNfunction_tb_t1t1::synapse0x4262cb0() {
   return (neuron0x4253320()*0.462687);
}

double NNfunction_tb_t1t1::synapse0x4262cf0() {
   return (neuron0x4253660()*-0.0036719);
}

double NNfunction_tb_t1t1::synapse0x4262d30() {
   return (neuron0x42539a0()*0.0568125);
}

double NNfunction_tb_t1t1::synapse0x42627c0() {
   return (neuron0x4253ce0()*-4.82518);
}

double NNfunction_tb_t1t1::synapse0x4262800() {
   return (neuron0x4254240()*0.0135741);
}

double NNfunction_tb_t1t1::synapse0x4262e80() {
   return (neuron0x4254460()*0.0300975);
}

double NNfunction_tb_t1t1::synapse0x4262ec0() {
   return (neuron0x42547a0()*0.00852107);
}

double NNfunction_tb_t1t1::synapse0x4262f00() {
   return (neuron0x4254ae0()*-0.257412);
}

double NNfunction_tb_t1t1::synapse0x4262f40() {
   return (neuron0x4254e20()*-0.070379);
}

double NNfunction_tb_t1t1::synapse0x4262f80() {
   return (neuron0x4255160()*-0.0129021);
}

double NNfunction_tb_t1t1::synapse0x4262fc0() {
   return (neuron0x42554a0()*-0.091486);
}

double NNfunction_tb_t1t1::synapse0x4263340() {
   return (neuron0x4250970()*-0.346886);
}

double NNfunction_tb_t1t1::synapse0x4263380() {
   return (neuron0x4250c20()*0.077397);
}

double NNfunction_tb_t1t1::synapse0x42633c0() {
   return (neuron0x4250f60()*0.278771);
}

double NNfunction_tb_t1t1::synapse0x4263400() {
   return (neuron0x42512a0()*-0.02795);
}

double NNfunction_tb_t1t1::synapse0x4263440() {
   return (neuron0x42515e0()*0.1168);
}

double NNfunction_tb_t1t1::synapse0x4263480() {
   return (neuron0x4251920()*0.029792);
}

double NNfunction_tb_t1t1::synapse0x42634c0() {
   return (neuron0x4251c60()*0.0362782);
}

double NNfunction_tb_t1t1::synapse0x4263500() {
   return (neuron0x4251fa0()*0.0233681);
}

double NNfunction_tb_t1t1::synapse0x4263540() {
   return (neuron0x42522e0()*-0.00350575);
}

double NNfunction_tb_t1t1::synapse0x4263580() {
   return (neuron0x4252620()*0.00215384);
}

double NNfunction_tb_t1t1::synapse0x42635c0() {
   return (neuron0x4252960()*-0.0295388);
}

double NNfunction_tb_t1t1::synapse0x4263600() {
   return (neuron0x4252ca0()*0.10459);
}

double NNfunction_tb_t1t1::synapse0x4263640() {
   return (neuron0x4252fe0()*0.0301083);
}

double NNfunction_tb_t1t1::synapse0x4263680() {
   return (neuron0x4253320()*-0.100405);
}

double NNfunction_tb_t1t1::synapse0x42636c0() {
   return (neuron0x4253660()*-0.0553624);
}

double NNfunction_tb_t1t1::synapse0x4263700() {
   return (neuron0x42539a0()*0.0722909);
}

double NNfunction_tb_t1t1::synapse0x4263190() {
   return (neuron0x4253ce0()*-0.202876);
}

double NNfunction_tb_t1t1::synapse0x42631d0() {
   return (neuron0x4254240()*-0.0320985);
}

double NNfunction_tb_t1t1::synapse0x4263850() {
   return (neuron0x4254460()*0.0526634);
}

double NNfunction_tb_t1t1::synapse0x4263890() {
   return (neuron0x42547a0()*0.00970059);
}

double NNfunction_tb_t1t1::synapse0x42638d0() {
   return (neuron0x4254ae0()*0.358265);
}

double NNfunction_tb_t1t1::synapse0x4263910() {
   return (neuron0x4254e20()*0.0579781);
}

double NNfunction_tb_t1t1::synapse0x4263950() {
   return (neuron0x4255160()*0.0744987);
}

double NNfunction_tb_t1t1::synapse0x4263990() {
   return (neuron0x42554a0()*0.781187);
}

double NNfunction_tb_t1t1::synapse0x4263d10() {
   return (neuron0x4250970()*-0.745651);
}

double NNfunction_tb_t1t1::synapse0x4263d50() {
   return (neuron0x4250c20()*-0.0843163);
}

double NNfunction_tb_t1t1::synapse0x4263d90() {
   return (neuron0x4250f60()*-0.0292899);
}

double NNfunction_tb_t1t1::synapse0x4263dd0() {
   return (neuron0x42512a0()*-0.106617);
}

double NNfunction_tb_t1t1::synapse0x4263e10() {
   return (neuron0x42515e0()*-0.367691);
}

double NNfunction_tb_t1t1::synapse0x4263e50() {
   return (neuron0x4251920()*-0.0259098);
}

double NNfunction_tb_t1t1::synapse0x4263e90() {
   return (neuron0x4251c60()*0.00396728);
}

double NNfunction_tb_t1t1::synapse0x4263ed0() {
   return (neuron0x4251fa0()*-0.012907);
}

double NNfunction_tb_t1t1::synapse0x4263f10() {
   return (neuron0x42522e0()*0.0352337);
}

double NNfunction_tb_t1t1::synapse0x4263f50() {
   return (neuron0x4252620()*0.0389389);
}

double NNfunction_tb_t1t1::synapse0x4263f90() {
   return (neuron0x4252960()*-0.0543681);
}

double NNfunction_tb_t1t1::synapse0x4263fd0() {
   return (neuron0x4252ca0()*0.0999966);
}

double NNfunction_tb_t1t1::synapse0x4264010() {
   return (neuron0x4252fe0()*-0.0625632);
}

double NNfunction_tb_t1t1::synapse0x4264050() {
   return (neuron0x4253320()*0.541213);
}

double NNfunction_tb_t1t1::synapse0x4264090() {
   return (neuron0x4253660()*-0.104608);
}

double NNfunction_tb_t1t1::synapse0x42640d0() {
   return (neuron0x42539a0()*-0.053112);
}

double NNfunction_tb_t1t1::synapse0x4263b60() {
   return (neuron0x4253ce0()*-0.0215243);
}

double NNfunction_tb_t1t1::synapse0x4263ba0() {
   return (neuron0x4254240()*0.0323691);
}

double NNfunction_tb_t1t1::synapse0x4264220() {
   return (neuron0x4254460()*0.074149);
}

double NNfunction_tb_t1t1::synapse0x4264260() {
   return (neuron0x42547a0()*-0.472048);
}

double NNfunction_tb_t1t1::synapse0x42642a0() {
   return (neuron0x4254ae0()*-0.0288525);
}

double NNfunction_tb_t1t1::synapse0x42642e0() {
   return (neuron0x4254e20()*-0.130403);
}

double NNfunction_tb_t1t1::synapse0x4264320() {
   return (neuron0x4255160()*0.00389189);
}

double NNfunction_tb_t1t1::synapse0x4264360() {
   return (neuron0x42554a0()*0.614139);
}

double NNfunction_tb_t1t1::synapse0x42646e0() {
   return (neuron0x4250970()*0.0713591);
}

double NNfunction_tb_t1t1::synapse0x4264720() {
   return (neuron0x4250c20()*0.0157548);
}

double NNfunction_tb_t1t1::synapse0x4264760() {
   return (neuron0x4250f60()*0.0699464);
}

double NNfunction_tb_t1t1::synapse0x42647a0() {
   return (neuron0x42512a0()*-0.0268881);
}

double NNfunction_tb_t1t1::synapse0x42647e0() {
   return (neuron0x42515e0()*0.0616571);
}

double NNfunction_tb_t1t1::synapse0x4264820() {
   return (neuron0x4251920()*-0.0312206);
}

double NNfunction_tb_t1t1::synapse0x4264860() {
   return (neuron0x4251c60()*-0.00362557);
}

double NNfunction_tb_t1t1::synapse0x42648a0() {
   return (neuron0x4251fa0()*-0.069151);
}

double NNfunction_tb_t1t1::synapse0x42648e0() {
   return (neuron0x42522e0()*-0.0369428);
}

double NNfunction_tb_t1t1::synapse0x4264920() {
   return (neuron0x4252620()*-0.0283083);
}

double NNfunction_tb_t1t1::synapse0x4264960() {
   return (neuron0x4252960()*0.00210843);
}

double NNfunction_tb_t1t1::synapse0x42649a0() {
   return (neuron0x4252ca0()*-0.002786);
}

double NNfunction_tb_t1t1::synapse0x42649e0() {
   return (neuron0x4252fe0()*-0.00976694);
}

double NNfunction_tb_t1t1::synapse0x4264a20() {
   return (neuron0x4253320()*-2.51974);
}

double NNfunction_tb_t1t1::synapse0x4264a60() {
   return (neuron0x4253660()*-0.0100807);
}

double NNfunction_tb_t1t1::synapse0x4264aa0() {
   return (neuron0x42539a0()*0.0587151);
}

double NNfunction_tb_t1t1::synapse0x4264530() {
   return (neuron0x4253ce0()*3.16993);
}

double NNfunction_tb_t1t1::synapse0x4264570() {
   return (neuron0x4254240()*0.0135287);
}

double NNfunction_tb_t1t1::synapse0x4264bf0() {
   return (neuron0x4254460()*0.00882095);
}

double NNfunction_tb_t1t1::synapse0x4264c30() {
   return (neuron0x42547a0()*0.0645673);
}

double NNfunction_tb_t1t1::synapse0x4264c70() {
   return (neuron0x4254ae0()*0.608709);
}

double NNfunction_tb_t1t1::synapse0x4264cb0() {
   return (neuron0x4254e20()*-0.00929051);
}

double NNfunction_tb_t1t1::synapse0x4264cf0() {
   return (neuron0x4255160()*-0.0506702);
}

double NNfunction_tb_t1t1::synapse0x4264d30() {
   return (neuron0x42554a0()*0.0292567);
}

double NNfunction_tb_t1t1::synapse0x42650b0() {
   return (neuron0x4250970()*0.233273);
}

double NNfunction_tb_t1t1::synapse0x42650f0() {
   return (neuron0x4250c20()*0.263707);
}

double NNfunction_tb_t1t1::synapse0x4265130() {
   return (neuron0x4250f60()*0.102763);
}

double NNfunction_tb_t1t1::synapse0x4265170() {
   return (neuron0x42512a0()*-0.0181757);
}

double NNfunction_tb_t1t1::synapse0x42651b0() {
   return (neuron0x42515e0()*0.0569067);
}

double NNfunction_tb_t1t1::synapse0x42651f0() {
   return (neuron0x4251920()*-0.0380701);
}

double NNfunction_tb_t1t1::synapse0x4265230() {
   return (neuron0x4251c60()*-0.0310605);
}

double NNfunction_tb_t1t1::synapse0x4265270() {
   return (neuron0x4251fa0()*-0.0770514);
}

double NNfunction_tb_t1t1::synapse0x42652b0() {
   return (neuron0x42522e0()*0.0915225);
}

double NNfunction_tb_t1t1::synapse0x425d470() {
   return (neuron0x4252620()*0.472488);
}

double NNfunction_tb_t1t1::synapse0x425d4b0() {
   return (neuron0x4252960()*0.350808);
}

double NNfunction_tb_t1t1::synapse0x425d4f0() {
   return (neuron0x4252ca0()*0.118427);
}

double NNfunction_tb_t1t1::synapse0x425d530() {
   return (neuron0x4252fe0()*-0.160215);
}

double NNfunction_tb_t1t1::synapse0x425d570() {
   return (neuron0x4253320()*0.362977);
}

double NNfunction_tb_t1t1::synapse0x425d5b0() {
   return (neuron0x4253660()*0.00763804);
}

double NNfunction_tb_t1t1::synapse0x425d5f0() {
   return (neuron0x42539a0()*-0.0697679);
}

double NNfunction_tb_t1t1::synapse0x4264f00() {
   return (neuron0x4253ce0()*-1.22955);
}

double NNfunction_tb_t1t1::synapse0x4264f40() {
   return (neuron0x4254240()*-0.0120277);
}

double NNfunction_tb_t1t1::synapse0x425d740() {
   return (neuron0x4254460()*-0.000100196);
}

double NNfunction_tb_t1t1::synapse0x425d780() {
   return (neuron0x42547a0()*0.278739);
}

double NNfunction_tb_t1t1::synapse0x425d7c0() {
   return (neuron0x4254ae0()*0.0629743);
}

double NNfunction_tb_t1t1::synapse0x425d800() {
   return (neuron0x4254e20()*0.0784176);
}

double NNfunction_tb_t1t1::synapse0x425d840() {
   return (neuron0x4255160()*0.0679388);
}

double NNfunction_tb_t1t1::synapse0x425d880() {
   return (neuron0x42554a0()*0.173568);
}

double NNfunction_tb_t1t1::synapse0x425dc00() {
   return (neuron0x4250970()*-0.0554224);
}

double NNfunction_tb_t1t1::synapse0x425dc40() {
   return (neuron0x4250c20()*-0.00331024);
}

double NNfunction_tb_t1t1::synapse0x425dc80() {
   return (neuron0x4250f60()*-0.0458945);
}

double NNfunction_tb_t1t1::synapse0x425dcc0() {
   return (neuron0x42512a0()*-0.061957);
}

double NNfunction_tb_t1t1::synapse0x425dd00() {
   return (neuron0x42515e0()*-0.0182082);
}

double NNfunction_tb_t1t1::synapse0x425dd40() {
   return (neuron0x4251920()*0.0141021);
}

double NNfunction_tb_t1t1::synapse0x425dd80() {
   return (neuron0x4251c60()*0.0157089);
}

double NNfunction_tb_t1t1::synapse0x425ddc0() {
   return (neuron0x4251fa0()*0.00907021);
}

double NNfunction_tb_t1t1::synapse0x425de00() {
   return (neuron0x42522e0()*-0.00161931);
}

double NNfunction_tb_t1t1::synapse0x425de40() {
   return (neuron0x4252620()*0.0115309);
}

double NNfunction_tb_t1t1::synapse0x425de80() {
   return (neuron0x4252960()*-0.00753561);
}

double NNfunction_tb_t1t1::synapse0x425dec0() {
   return (neuron0x4252ca0()*0.0131809);
}

double NNfunction_tb_t1t1::synapse0x425df00() {
   return (neuron0x4252fe0()*0.0125084);
}

double NNfunction_tb_t1t1::synapse0x425df40() {
   return (neuron0x4253320()*0.467641);
}

double NNfunction_tb_t1t1::synapse0x425df80() {
   return (neuron0x4253660()*0.000742145);
}

double NNfunction_tb_t1t1::synapse0x425dfc0() {
   return (neuron0x42539a0()*0.00726319);
}

double NNfunction_tb_t1t1::synapse0x425da50() {
   return (neuron0x4253ce0()*0.455499);
}

double NNfunction_tb_t1t1::synapse0x425da90() {
   return (neuron0x4254240()*-0.0342091);
}

double NNfunction_tb_t1t1::synapse0x425e110() {
   return (neuron0x4254460()*-0.00842935);
}

double NNfunction_tb_t1t1::synapse0x425e150() {
   return (neuron0x42547a0()*-0.00889304);
}

double NNfunction_tb_t1t1::synapse0x425e190() {
   return (neuron0x4254ae0()*1.3863);
}

double NNfunction_tb_t1t1::synapse0x425e1d0() {
   return (neuron0x4254e20()*-0.0205099);
}

double NNfunction_tb_t1t1::synapse0x425e210() {
   return (neuron0x4255160()*-0.0188543);
}

double NNfunction_tb_t1t1::synapse0x425e250() {
   return (neuron0x42554a0()*-0.138994);
}

double NNfunction_tb_t1t1::synapse0x425e420() {
   return (neuron0x4250970()*0.28733);
}

double NNfunction_tb_t1t1::synapse0x42674b0() {
   return (neuron0x4250c20()*-0.0524238);
}

double NNfunction_tb_t1t1::synapse0x42674f0() {
   return (neuron0x4250f60()*0.377315);
}

double NNfunction_tb_t1t1::synapse0x4267530() {
   return (neuron0x42512a0()*1.39577);
}

double NNfunction_tb_t1t1::synapse0x4267570() {
   return (neuron0x42515e0()*0.174118);
}

double NNfunction_tb_t1t1::synapse0x42675b0() {
   return (neuron0x4251920()*0.0505679);
}

double NNfunction_tb_t1t1::synapse0x42675f0() {
   return (neuron0x4251c60()*0.00100457);
}

double NNfunction_tb_t1t1::synapse0x4267630() {
   return (neuron0x4251fa0()*0.0607046);
}

double NNfunction_tb_t1t1::synapse0x4267670() {
   return (neuron0x42522e0()*-0.141902);
}

double NNfunction_tb_t1t1::synapse0x42676b0() {
   return (neuron0x4252620()*0.0768574);
}

double NNfunction_tb_t1t1::synapse0x42676f0() {
   return (neuron0x4252960()*-0.0204042);
}

double NNfunction_tb_t1t1::synapse0x4267730() {
   return (neuron0x4252ca0()*-0.104586);
}

double NNfunction_tb_t1t1::synapse0x4267770() {
   return (neuron0x4252fe0()*-0.0715864);
}

double NNfunction_tb_t1t1::synapse0x42677b0() {
   return (neuron0x4253320()*0.405025);
}

double NNfunction_tb_t1t1::synapse0x42677f0() {
   return (neuron0x4253660()*-0.0347642);
}

double NNfunction_tb_t1t1::synapse0x4267830() {
   return (neuron0x42539a0()*-0.0452279);
}

double NNfunction_tb_t1t1::synapse0x4267300() {
   return (neuron0x4253ce0()*0.871045);
}

double NNfunction_tb_t1t1::synapse0x4267340() {
   return (neuron0x4254240()*0.0276098);
}

double NNfunction_tb_t1t1::synapse0x4267980() {
   return (neuron0x4254460()*-0.110331);
}

double NNfunction_tb_t1t1::synapse0x42679c0() {
   return (neuron0x42547a0()*-0.0855261);
}

double NNfunction_tb_t1t1::synapse0x4267a00() {
   return (neuron0x4254ae0()*-0.333244);
}

double NNfunction_tb_t1t1::synapse0x4267a40() {
   return (neuron0x4254e20()*0.075608);
}

double NNfunction_tb_t1t1::synapse0x4267a80() {
   return (neuron0x4255160()*-0.0285349);
}

double NNfunction_tb_t1t1::synapse0x4267ac0() {
   return (neuron0x42554a0()*0.248633);
}

double NNfunction_tb_t1t1::synapse0x4267e40() {
   return (neuron0x4250970()*0.281215);
}

double NNfunction_tb_t1t1::synapse0x4267e80() {
   return (neuron0x4250c20()*0.167097);
}

double NNfunction_tb_t1t1::synapse0x4267ec0() {
   return (neuron0x4250f60()*0.0484247);
}

double NNfunction_tb_t1t1::synapse0x4267f00() {
   return (neuron0x42512a0()*0.0878082);
}

double NNfunction_tb_t1t1::synapse0x4267f40() {
   return (neuron0x42515e0()*0.197706);
}

double NNfunction_tb_t1t1::synapse0x4267f80() {
   return (neuron0x4251920()*-0.0090463);
}

double NNfunction_tb_t1t1::synapse0x4267fc0() {
   return (neuron0x4251c60()*-0.0237411);
}

double NNfunction_tb_t1t1::synapse0x4268000() {
   return (neuron0x4251fa0()*0.0171338);
}

double NNfunction_tb_t1t1::synapse0x4268040() {
   return (neuron0x42522e0()*0.0669329);
}

double NNfunction_tb_t1t1::synapse0x4268080() {
   return (neuron0x4252620()*0.0414595);
}

double NNfunction_tb_t1t1::synapse0x42680c0() {
   return (neuron0x4252960()*-0.00858827);
}

double NNfunction_tb_t1t1::synapse0x4268100() {
   return (neuron0x4252ca0()*-0.0836713);
}

double NNfunction_tb_t1t1::synapse0x4268140() {
   return (neuron0x4252fe0()*0.0915501);
}

double NNfunction_tb_t1t1::synapse0x4268180() {
   return (neuron0x4253320()*-1.30689);
}

double NNfunction_tb_t1t1::synapse0x42681c0() {
   return (neuron0x4253660()*-0.0467957);
}

double NNfunction_tb_t1t1::synapse0x4268200() {
   return (neuron0x42539a0()*-0.0625394);
}

double NNfunction_tb_t1t1::synapse0x4267c90() {
   return (neuron0x4253ce0()*0.33725);
}

double NNfunction_tb_t1t1::synapse0x4267cd0() {
   return (neuron0x4254240()*-0.0474646);
}

double NNfunction_tb_t1t1::synapse0x4268350() {
   return (neuron0x4254460()*-0.0980959);
}

double NNfunction_tb_t1t1::synapse0x4268390() {
   return (neuron0x42547a0()*-0.661892);
}

double NNfunction_tb_t1t1::synapse0x42683d0() {
   return (neuron0x4254ae0()*0.384992);
}

double NNfunction_tb_t1t1::synapse0x4268410() {
   return (neuron0x4254e20()*-0.00814479);
}

double NNfunction_tb_t1t1::synapse0x4268450() {
   return (neuron0x4255160()*0.041659);
}

double NNfunction_tb_t1t1::synapse0x4268490() {
   return (neuron0x42554a0()*0.279106);
}

double NNfunction_tb_t1t1::synapse0x4268810() {
   return (neuron0x4250970()*0.131247);
}

double NNfunction_tb_t1t1::synapse0x4268850() {
   return (neuron0x4250c20()*-0.0379756);
}

double NNfunction_tb_t1t1::synapse0x4268890() {
   return (neuron0x4250f60()*0.0570861);
}

double NNfunction_tb_t1t1::synapse0x42688d0() {
   return (neuron0x42512a0()*-0.0332594);
}

double NNfunction_tb_t1t1::synapse0x4268910() {
   return (neuron0x42515e0()*0.35644);
}

double NNfunction_tb_t1t1::synapse0x4268950() {
   return (neuron0x4251920()*0.0190833);
}

double NNfunction_tb_t1t1::synapse0x4268990() {
   return (neuron0x4251c60()*-0.0281552);
}

double NNfunction_tb_t1t1::synapse0x42689d0() {
   return (neuron0x4251fa0()*-0.00603885);
}

double NNfunction_tb_t1t1::synapse0x4268a10() {
   return (neuron0x42522e0()*-0.000307885);
}

double NNfunction_tb_t1t1::synapse0x4268a50() {
   return (neuron0x4252620()*0.0257368);
}

double NNfunction_tb_t1t1::synapse0x4268a90() {
   return (neuron0x4252960()*0.00997218);
}

double NNfunction_tb_t1t1::synapse0x4268ad0() {
   return (neuron0x4252ca0()*0.0101755);
}

double NNfunction_tb_t1t1::synapse0x4268b10() {
   return (neuron0x4252fe0()*-0.0138);
}

double NNfunction_tb_t1t1::synapse0x4268b50() {
   return (neuron0x4253320()*0.159039);
}

double NNfunction_tb_t1t1::synapse0x4268b90() {
   return (neuron0x4253660()*0.0278235);
}

double NNfunction_tb_t1t1::synapse0x4268bd0() {
   return (neuron0x42539a0()*0.0277151);
}

double NNfunction_tb_t1t1::synapse0x4268660() {
   return (neuron0x4253ce0()*0.206767);
}

double NNfunction_tb_t1t1::synapse0x42686a0() {
   return (neuron0x4254240()*0.00225565);
}

double NNfunction_tb_t1t1::synapse0x4268d20() {
   return (neuron0x4254460()*0.014129);
}

double NNfunction_tb_t1t1::synapse0x4268d60() {
   return (neuron0x42547a0()*0.0336006);
}

double NNfunction_tb_t1t1::synapse0x4268da0() {
   return (neuron0x4254ae0()*-0.0576718);
}

double NNfunction_tb_t1t1::synapse0x4268de0() {
   return (neuron0x4254e20()*-0.0251399);
}

double NNfunction_tb_t1t1::synapse0x4268e20() {
   return (neuron0x4255160()*-0.0283787);
}

double NNfunction_tb_t1t1::synapse0x4268e60() {
   return (neuron0x42554a0()*-1.64182);
}

double NNfunction_tb_t1t1::synapse0x42691e0() {
   return (neuron0x4250970()*-0.00982016);
}

double NNfunction_tb_t1t1::synapse0x4269220() {
   return (neuron0x4250c20()*0.089376);
}

double NNfunction_tb_t1t1::synapse0x4269260() {
   return (neuron0x4250f60()*0.148524);
}

double NNfunction_tb_t1t1::synapse0x42692a0() {
   return (neuron0x42512a0()*0.70106);
}

double NNfunction_tb_t1t1::synapse0x42692e0() {
   return (neuron0x42515e0()*0.0349558);
}

double NNfunction_tb_t1t1::synapse0x4269320() {
   return (neuron0x4251920()*0.00839332);
}

double NNfunction_tb_t1t1::synapse0x4269360() {
   return (neuron0x4251c60()*0.00882261);
}

double NNfunction_tb_t1t1::synapse0x42693a0() {
   return (neuron0x4251fa0()*0.00254633);
}

double NNfunction_tb_t1t1::synapse0x42693e0() {
   return (neuron0x42522e0()*-0.127264);
}

double NNfunction_tb_t1t1::synapse0x4269420() {
   return (neuron0x4252620()*0.01617);
}

double NNfunction_tb_t1t1::synapse0x4269460() {
   return (neuron0x4252960()*0.0562438);
}

double NNfunction_tb_t1t1::synapse0x42694a0() {
   return (neuron0x4252ca0()*0.0671531);
}

double NNfunction_tb_t1t1::synapse0x42694e0() {
   return (neuron0x4252fe0()*0.0205301);
}

double NNfunction_tb_t1t1::synapse0x4269520() {
   return (neuron0x4253320()*-0.032787);
}

double NNfunction_tb_t1t1::synapse0x4269560() {
   return (neuron0x4253660()*-0.00925982);
}

double NNfunction_tb_t1t1::synapse0x42695a0() {
   return (neuron0x42539a0()*-0.0109889);
}

double NNfunction_tb_t1t1::synapse0x4269030() {
   return (neuron0x4253ce0()*-0.113784);
}

double NNfunction_tb_t1t1::synapse0x4269070() {
   return (neuron0x4254240()*0.0971998);
}

double NNfunction_tb_t1t1::synapse0x42696f0() {
   return (neuron0x4254460()*-0.0339369);
}

double NNfunction_tb_t1t1::synapse0x4269730() {
   return (neuron0x42547a0()*-0.0470653);
}

double NNfunction_tb_t1t1::synapse0x4269770() {
   return (neuron0x4254ae0()*0.09525);
}

double NNfunction_tb_t1t1::synapse0x42697b0() {
   return (neuron0x4254e20()*0.0620734);
}

double NNfunction_tb_t1t1::synapse0x42697f0() {
   return (neuron0x4255160()*0.0231901);
}

double NNfunction_tb_t1t1::synapse0x4269830() {
   return (neuron0x42554a0()*-0.565213);
}

double NNfunction_tb_t1t1::synapse0x4269bb0() {
   return (neuron0x4250970()*0.040587);
}

double NNfunction_tb_t1t1::synapse0x4269bf0() {
   return (neuron0x4250c20()*0.00884447);
}

double NNfunction_tb_t1t1::synapse0x4269c30() {
   return (neuron0x4250f60()*0.0183852);
}

double NNfunction_tb_t1t1::synapse0x4269c70() {
   return (neuron0x42512a0()*-1.64847);
}

double NNfunction_tb_t1t1::synapse0x4269cb0() {
   return (neuron0x42515e0()*0.0725042);
}

double NNfunction_tb_t1t1::synapse0x4269cf0() {
   return (neuron0x4251920()*0.0238778);
}

double NNfunction_tb_t1t1::synapse0x4269d30() {
   return (neuron0x4251c60()*0.0258699);
}

double NNfunction_tb_t1t1::synapse0x4269d70() {
   return (neuron0x4251fa0()*-0.0113836);
}

double NNfunction_tb_t1t1::synapse0x4269db0() {
   return (neuron0x42522e0()*-0.0585017);
}

double NNfunction_tb_t1t1::synapse0x4269df0() {
   return (neuron0x4252620()*0.0236164);
}

double NNfunction_tb_t1t1::synapse0x4269e30() {
   return (neuron0x4252960()*0.0985876);
}

double NNfunction_tb_t1t1::synapse0x4269e70() {
   return (neuron0x4252ca0()*-0.0246335);
}

double NNfunction_tb_t1t1::synapse0x4269eb0() {
   return (neuron0x4252fe0()*-0.013662);
}

double NNfunction_tb_t1t1::synapse0x4269ef0() {
   return (neuron0x4253320()*0.024626);
}

double NNfunction_tb_t1t1::synapse0x4269f30() {
   return (neuron0x4253660()*-0.0957217);
}

double NNfunction_tb_t1t1::synapse0x4269f70() {
   return (neuron0x42539a0()*0.0052364);
}

double NNfunction_tb_t1t1::synapse0x4269a00() {
   return (neuron0x4253ce0()*-0.0360697);
}

double NNfunction_tb_t1t1::synapse0x4269a40() {
   return (neuron0x4254240()*-0.0144552);
}

double NNfunction_tb_t1t1::synapse0x426a0c0() {
   return (neuron0x4254460()*0.00132532);
}

double NNfunction_tb_t1t1::synapse0x426a100() {
   return (neuron0x42547a0()*0.00503836);
}

double NNfunction_tb_t1t1::synapse0x426a140() {
   return (neuron0x4254ae0()*-0.659749);
}

double NNfunction_tb_t1t1::synapse0x426a180() {
   return (neuron0x4254e20()*-0.0355749);
}

double NNfunction_tb_t1t1::synapse0x426a1c0() {
   return (neuron0x4255160()*-0.0547836);
}

double NNfunction_tb_t1t1::synapse0x426a200() {
   return (neuron0x42554a0()*-0.0430961);
}

double NNfunction_tb_t1t1::synapse0x426a580() {
   return (neuron0x4250970()*-0.032805);
}

double NNfunction_tb_t1t1::synapse0x426a5c0() {
   return (neuron0x4250c20()*0.0787711);
}

double NNfunction_tb_t1t1::synapse0x426a600() {
   return (neuron0x4250f60()*0.0170577);
}

double NNfunction_tb_t1t1::synapse0x426a640() {
   return (neuron0x42512a0()*-0.27204);
}

double NNfunction_tb_t1t1::synapse0x426a680() {
   return (neuron0x42515e0()*0.382167);
}

double NNfunction_tb_t1t1::synapse0x426a6c0() {
   return (neuron0x4251920()*-0.252112);
}

double NNfunction_tb_t1t1::synapse0x426a700() {
   return (neuron0x4251c60()*0.959196);
}

double NNfunction_tb_t1t1::synapse0x426a740() {
   return (neuron0x4251fa0()*-0.232836);
}

double NNfunction_tb_t1t1::synapse0x426a780() {
   return (neuron0x42522e0()*0.00967197);
}

double NNfunction_tb_t1t1::synapse0x426a7c0() {
   return (neuron0x4252620()*0.115628);
}

double NNfunction_tb_t1t1::synapse0x426a800() {
   return (neuron0x4252960()*-0.0630747);
}

double NNfunction_tb_t1t1::synapse0x426a840() {
   return (neuron0x4252ca0()*0.261189);
}

double NNfunction_tb_t1t1::synapse0x426a880() {
   return (neuron0x4252fe0()*-0.0129255);
}

double NNfunction_tb_t1t1::synapse0x426a8c0() {
   return (neuron0x4253320()*-0.692814);
}

double NNfunction_tb_t1t1::synapse0x426a900() {
   return (neuron0x4253660()*0.163561);
}

double NNfunction_tb_t1t1::synapse0x426a940() {
   return (neuron0x42539a0()*0.0203591);
}

double NNfunction_tb_t1t1::synapse0x426a3d0() {
   return (neuron0x4253ce0()*-1.38851);
}

double NNfunction_tb_t1t1::synapse0x426a410() {
   return (neuron0x4254240()*-0.20396);
}

double NNfunction_tb_t1t1::synapse0x426aa90() {
   return (neuron0x4254460()*-0.0742888);
}

double NNfunction_tb_t1t1::synapse0x426aad0() {
   return (neuron0x42547a0()*-0.100798);
}

double NNfunction_tb_t1t1::synapse0x426ab10() {
   return (neuron0x4254ae0()*-0.0921874);
}

double NNfunction_tb_t1t1::synapse0x426ab50() {
   return (neuron0x4254e20()*0.250854);
}

double NNfunction_tb_t1t1::synapse0x426ab90() {
   return (neuron0x4255160()*0.0165349);
}

double NNfunction_tb_t1t1::synapse0x426abd0() {
   return (neuron0x42554a0()*-0.442282);
}

double NNfunction_tb_t1t1::synapse0x426af50() {
   return (neuron0x4250970()*-0.0841886);
}

double NNfunction_tb_t1t1::synapse0x426af90() {
   return (neuron0x4250c20()*-0.00767218);
}

double NNfunction_tb_t1t1::synapse0x426afd0() {
   return (neuron0x4250f60()*-0.0144751);
}

double NNfunction_tb_t1t1::synapse0x426b010() {
   return (neuron0x42512a0()*-2.57203);
}

double NNfunction_tb_t1t1::synapse0x426b050() {
   return (neuron0x42515e0()*0.0501486);
}

double NNfunction_tb_t1t1::synapse0x426b090() {
   return (neuron0x4251920()*0.0159324);
}

double NNfunction_tb_t1t1::synapse0x426b0d0() {
   return (neuron0x4251c60()*0.0161032);
}

double NNfunction_tb_t1t1::synapse0x426b110() {
   return (neuron0x4251fa0()*-0.0222579);
}

double NNfunction_tb_t1t1::synapse0x426b150() {
   return (neuron0x42522e0()*-0.0399045);
}

double NNfunction_tb_t1t1::synapse0x426b190() {
   return (neuron0x4252620()*-0.00162805);
}

double NNfunction_tb_t1t1::synapse0x426b1d0() {
   return (neuron0x4252960()*0.01268);
}

double NNfunction_tb_t1t1::synapse0x426b210() {
   return (neuron0x4252ca0()*0.00983252);
}

double NNfunction_tb_t1t1::synapse0x426b250() {
   return (neuron0x4252fe0()*0.0120415);
}

double NNfunction_tb_t1t1::synapse0x426b290() {
   return (neuron0x4253320()*-0.219399);
}

double NNfunction_tb_t1t1::synapse0x426b2d0() {
   return (neuron0x4253660()*-0.017732);
}

double NNfunction_tb_t1t1::synapse0x426b310() {
   return (neuron0x42539a0()*0.0358242);
}

double NNfunction_tb_t1t1::synapse0x426ada0() {
   return (neuron0x4253ce0()*-0.14227);
}

double NNfunction_tb_t1t1::synapse0x426ade0() {
   return (neuron0x4254240()*-0.0322426);
}

double NNfunction_tb_t1t1::synapse0x426b460() {
   return (neuron0x4254460()*0.0594);
}

double NNfunction_tb_t1t1::synapse0x426b4a0() {
   return (neuron0x42547a0()*0.0390311);
}

double NNfunction_tb_t1t1::synapse0x426b4e0() {
   return (neuron0x4254ae0()*-0.400547);
}

double NNfunction_tb_t1t1::synapse0x426b520() {
   return (neuron0x4254e20()*-0.102895);
}

double NNfunction_tb_t1t1::synapse0x426b560() {
   return (neuron0x4255160()*-0.0457362);
}

double NNfunction_tb_t1t1::synapse0x426b5a0() {
   return (neuron0x42554a0()*-0.0636866);
}

double NNfunction_tb_t1t1::synapse0x426b920() {
   return (neuron0x4250970()*-0.158321);
}

double NNfunction_tb_t1t1::synapse0x426b960() {
   return (neuron0x4250c20()*0.0331598);
}

double NNfunction_tb_t1t1::synapse0x426b9a0() {
   return (neuron0x4250f60()*0.0538083);
}

double NNfunction_tb_t1t1::synapse0x426b9e0() {
   return (neuron0x42512a0()*-0.107487);
}

double NNfunction_tb_t1t1::synapse0x426ba20() {
   return (neuron0x42515e0()*-0.0417216);
}

double NNfunction_tb_t1t1::synapse0x426ba60() {
   return (neuron0x4251920()*0.0175795);
}

double NNfunction_tb_t1t1::synapse0x426baa0() {
   return (neuron0x4251c60()*0.0094052);
}

double NNfunction_tb_t1t1::synapse0x426bae0() {
   return (neuron0x4251fa0()*-0.0241933);
}

double NNfunction_tb_t1t1::synapse0x426bb20() {
   return (neuron0x42522e0()*-0.0241041);
}

double NNfunction_tb_t1t1::synapse0x426bb60() {
   return (neuron0x4252620()*-0.0213662);
}

double NNfunction_tb_t1t1::synapse0x426bba0() {
   return (neuron0x4252960()*-0.0142342);
}

double NNfunction_tb_t1t1::synapse0x426bbe0() {
   return (neuron0x4252ca0()*-0.0160329);
}

double NNfunction_tb_t1t1::synapse0x426bc20() {
   return (neuron0x4252fe0()*0.00368918);
}

double NNfunction_tb_t1t1::synapse0x426bc60() {
   return (neuron0x4253320()*-1.17158);
}

double NNfunction_tb_t1t1::synapse0x426bca0() {
   return (neuron0x4253660()*0.0339454);
}

double NNfunction_tb_t1t1::synapse0x426bce0() {
   return (neuron0x42539a0()*-0.0429786);
}

double NNfunction_tb_t1t1::synapse0x426b770() {
   return (neuron0x4253ce0()*1.92072);
}

double NNfunction_tb_t1t1::synapse0x426b7b0() {
   return (neuron0x4254240()*0.0083893);
}

double NNfunction_tb_t1t1::synapse0x426be30() {
   return (neuron0x4254460()*0.0105411);
}

double NNfunction_tb_t1t1::synapse0x426be70() {
   return (neuron0x42547a0()*-0.070829);
}

double NNfunction_tb_t1t1::synapse0x426beb0() {
   return (neuron0x4254ae0()*2.952);
}

double NNfunction_tb_t1t1::synapse0x426bef0() {
   return (neuron0x4254e20()*-0.0288529);
}

double NNfunction_tb_t1t1::synapse0x426bf30() {
   return (neuron0x4255160()*-0.021471);
}

double NNfunction_tb_t1t1::synapse0x426bf70() {
   return (neuron0x42554a0()*0.140738);
}

double NNfunction_tb_t1t1::synapse0x426c2f0() {
   return (neuron0x4250970()*0.238816);
}

double NNfunction_tb_t1t1::synapse0x42608c0() {
   return (neuron0x4250c20()*-0.0353155);
}

double NNfunction_tb_t1t1::synapse0x4260900() {
   return (neuron0x4250f60()*-0.0568787);
}

double NNfunction_tb_t1t1::synapse0x4260940() {
   return (neuron0x42512a0()*-0.0566277);
}

double NNfunction_tb_t1t1::synapse0x4260b90() {
   return (neuron0x42515e0()*-0.0139874);
}

double NNfunction_tb_t1t1::synapse0x4260bd0() {
   return (neuron0x4251920()*0.0112015);
}

double NNfunction_tb_t1t1::synapse0x4260c10() {
   return (neuron0x4251c60()*0.0122313);
}

double NNfunction_tb_t1t1::synapse0x4260e60() {
   return (neuron0x4251fa0()*-0.0159632);
}

double NNfunction_tb_t1t1::synapse0x4260ea0() {
   return (neuron0x42522e0()*-0.0314208);
}

double NNfunction_tb_t1t1::synapse0x42610f0() {
   return (neuron0x4252620()*-0.00204876);
}

double NNfunction_tb_t1t1::synapse0x4261130() {
   return (neuron0x4252960()*-0.00638232);
}

double NNfunction_tb_t1t1::synapse0x4261170() {
   return (neuron0x4252ca0()*-0.00839538);
}

double NNfunction_tb_t1t1::synapse0x42613c0() {
   return (neuron0x4252fe0()*0.016964);
}

double NNfunction_tb_t1t1::synapse0x4261400() {
   return (neuron0x4253320()*0.285697);
}

double NNfunction_tb_t1t1::synapse0x4261650() {
   return (neuron0x4253660()*0.0213067);
}

double NNfunction_tb_t1t1::synapse0x4261690() {
   return (neuron0x42539a0()*-0.0136951);
}

double NNfunction_tb_t1t1::synapse0x426c140() {
   return (neuron0x4253ce0()*0.11948);
}

double NNfunction_tb_t1t1::synapse0x426c180() {
   return (neuron0x4254240()*-0.0094287);
}

double NNfunction_tb_t1t1::synapse0x42617e0() {
   return (neuron0x4254460()*-0.000524269);
}

double NNfunction_tb_t1t1::synapse0x4261cf0() {
   return (neuron0x42547a0()*-0.00397877);
}

double NNfunction_tb_t1t1::synapse0x4261d30() {
   return (neuron0x4254ae0()*-1.37349);
}

double NNfunction_tb_t1t1::synapse0x4261d70() {
   return (neuron0x4254e20()*-0.0411229);
}

double NNfunction_tb_t1t1::synapse0x4261fc0() {
   return (neuron0x4255160()*-0.0185469);
}

double NNfunction_tb_t1t1::synapse0x4262000() {
   return (neuron0x42554a0()*0.238203);
}

double NNfunction_tb_t1t1::synapse0x42618b0() {
   return (neuron0x4250970()*0.0921298);
}

double NNfunction_tb_t1t1::synapse0x42618f0() {
   return (neuron0x4250c20()*-0.348071);
}

double NNfunction_tb_t1t1::synapse0x4261930() {
   return (neuron0x4250f60()*0.00692983);
}

double NNfunction_tb_t1t1::synapse0x4261970() {
   return (neuron0x42512a0()*0.130804);
}

double NNfunction_tb_t1t1::synapse0x42622f0() {
   return (neuron0x42515e0()*0.136283);
}

double NNfunction_tb_t1t1::synapse0x426e640() {
   return (neuron0x4251920()*0.0080763);
}

double NNfunction_tb_t1t1::synapse0x426e680() {
   return (neuron0x4251c60()*-0.0303872);
}

double NNfunction_tb_t1t1::synapse0x426e6c0() {
   return (neuron0x4251fa0()*-0.000111483);
}

double NNfunction_tb_t1t1::synapse0x426e700() {
   return (neuron0x42522e0()*-0.28923);
}

double NNfunction_tb_t1t1::synapse0x426e740() {
   return (neuron0x4252620()*-0.0748758);
}

double NNfunction_tb_t1t1::synapse0x426e780() {
   return (neuron0x4252960()*0.157158);
}

double NNfunction_tb_t1t1::synapse0x426e7c0() {
   return (neuron0x4252ca0()*-0.0767967);
}

double NNfunction_tb_t1t1::synapse0x426e800() {
   return (neuron0x4252fe0()*-0.0903447);
}

double NNfunction_tb_t1t1::synapse0x426e840() {
   return (neuron0x4253320()*0.0237172);
}

double NNfunction_tb_t1t1::synapse0x426e880() {
   return (neuron0x4253660()*0.106901);
}

double NNfunction_tb_t1t1::synapse0x426e8c0() {
   return (neuron0x42539a0()*-0.00178459);
}

double NNfunction_tb_t1t1::synapse0x42621d0() {
   return (neuron0x4253ce0()*-0.071631);
}

double NNfunction_tb_t1t1::synapse0x4262210() {
   return (neuron0x4254240()*0.00922916);
}

double NNfunction_tb_t1t1::synapse0x426ea10() {
   return (neuron0x4254460()*0.0232588);
}

double NNfunction_tb_t1t1::synapse0x426ea50() {
   return (neuron0x42547a0()*0.0590272);
}

double NNfunction_tb_t1t1::synapse0x426ea90() {
   return (neuron0x4254ae0()*-0.0356179);
}

double NNfunction_tb_t1t1::synapse0x426ead0() {
   return (neuron0x4254e20()*0.0373036);
}

double NNfunction_tb_t1t1::synapse0x426eb10() {
   return (neuron0x4255160()*-0.00162022);
}

double NNfunction_tb_t1t1::synapse0x426eb50() {
   return (neuron0x42554a0()*0.513587);
}

double NNfunction_tb_t1t1::synapse0x426eed0() {
   return (neuron0x4250970()*-0.079519);
}

double NNfunction_tb_t1t1::synapse0x426ef10() {
   return (neuron0x4250c20()*0.0372883);
}

double NNfunction_tb_t1t1::synapse0x426ef50() {
   return (neuron0x4250f60()*0.0526391);
}

double NNfunction_tb_t1t1::synapse0x426ef90() {
   return (neuron0x42512a0()*0.0830751);
}

double NNfunction_tb_t1t1::synapse0x426efd0() {
   return (neuron0x42515e0()*-0.048103);
}

double NNfunction_tb_t1t1::synapse0x426f010() {
   return (neuron0x4251920()*0.00844607);
}

double NNfunction_tb_t1t1::synapse0x426f050() {
   return (neuron0x4251c60()*0.0524452);
}

double NNfunction_tb_t1t1::synapse0x426f090() {
   return (neuron0x4251fa0()*0.0666583);
}

double NNfunction_tb_t1t1::synapse0x426f0d0() {
   return (neuron0x42522e0()*-0.0192099);
}

double NNfunction_tb_t1t1::synapse0x426f110() {
   return (neuron0x4252620()*-0.0121407);
}

double NNfunction_tb_t1t1::synapse0x426f150() {
   return (neuron0x4252960()*0.0381119);
}

double NNfunction_tb_t1t1::synapse0x426f190() {
   return (neuron0x4252ca0()*-0.0857875);
}

double NNfunction_tb_t1t1::synapse0x426f1d0() {
   return (neuron0x4252fe0()*-0.00773389);
}

double NNfunction_tb_t1t1::synapse0x426f210() {
   return (neuron0x4253320()*-0.33984);
}

double NNfunction_tb_t1t1::synapse0x426f250() {
   return (neuron0x4253660()*0.0274802);
}

double NNfunction_tb_t1t1::synapse0x426f290() {
   return (neuron0x42539a0()*-0.0085877);
}

double NNfunction_tb_t1t1::synapse0x426ed20() {
   return (neuron0x4253ce0()*1.94933);
}

double NNfunction_tb_t1t1::synapse0x426ed60() {
   return (neuron0x4254240()*0.0180543);
}

double NNfunction_tb_t1t1::synapse0x426f3e0() {
   return (neuron0x4254460()*-0.0730543);
}

double NNfunction_tb_t1t1::synapse0x426f420() {
   return (neuron0x42547a0()*-0.121309);
}

double NNfunction_tb_t1t1::synapse0x426f460() {
   return (neuron0x4254ae0()*-1.67208);
}

double NNfunction_tb_t1t1::synapse0x426f4a0() {
   return (neuron0x4254e20()*0.0239965);
}

double NNfunction_tb_t1t1::synapse0x426f4e0() {
   return (neuron0x4255160()*0.00511692);
}

double NNfunction_tb_t1t1::synapse0x426f520() {
   return (neuron0x42554a0()*0.0435702);
}

double NNfunction_tb_t1t1::synapse0x426f8a0() {
   return (neuron0x4250970()*0.0641229);
}

double NNfunction_tb_t1t1::synapse0x426f8e0() {
   return (neuron0x4250c20()*-0.0882853);
}

double NNfunction_tb_t1t1::synapse0x426f920() {
   return (neuron0x4250f60()*0.0175344);
}

double NNfunction_tb_t1t1::synapse0x426f960() {
   return (neuron0x42512a0()*-0.188978);
}

double NNfunction_tb_t1t1::synapse0x426f9a0() {
   return (neuron0x42515e0()*0.182513);
}

double NNfunction_tb_t1t1::synapse0x426f9e0() {
   return (neuron0x4251920()*-0.0285896);
}

double NNfunction_tb_t1t1::synapse0x426fa20() {
   return (neuron0x4251c60()*-0.220513);
}

double NNfunction_tb_t1t1::synapse0x426fa60() {
   return (neuron0x4251fa0()*-0.650111);
}

double NNfunction_tb_t1t1::synapse0x426faa0() {
   return (neuron0x42522e0()*-0.0230707);
}

double NNfunction_tb_t1t1::synapse0x426fae0() {
   return (neuron0x4252620()*0.112936);
}

double NNfunction_tb_t1t1::synapse0x426fb20() {
   return (neuron0x4252960()*0.029806);
}

double NNfunction_tb_t1t1::synapse0x426fb60() {
   return (neuron0x4252ca0()*-0.00754237);
}

double NNfunction_tb_t1t1::synapse0x426fba0() {
   return (neuron0x4252fe0()*0.00446325);
}

double NNfunction_tb_t1t1::synapse0x426fbe0() {
   return (neuron0x4253320()*-0.358583);
}

double NNfunction_tb_t1t1::synapse0x426fc20() {
   return (neuron0x4253660()*-0.0603144);
}

double NNfunction_tb_t1t1::synapse0x426fc60() {
   return (neuron0x42539a0()*-0.102886);
}

double NNfunction_tb_t1t1::synapse0x426f6f0() {
   return (neuron0x4253ce0()*-0.909862);
}

double NNfunction_tb_t1t1::synapse0x426f730() {
   return (neuron0x4254240()*-0.0735383);
}

double NNfunction_tb_t1t1::synapse0x426fdb0() {
   return (neuron0x4254460()*0.0384227);
}

double NNfunction_tb_t1t1::synapse0x426fdf0() {
   return (neuron0x42547a0()*0.0274631);
}

double NNfunction_tb_t1t1::synapse0x426fe30() {
   return (neuron0x4254ae0()*0.556516);
}

double NNfunction_tb_t1t1::synapse0x426fe70() {
   return (neuron0x4254e20()*0.0533499);
}

double NNfunction_tb_t1t1::synapse0x426feb0() {
   return (neuron0x4255160()*-0.00355045);
}

double NNfunction_tb_t1t1::synapse0x426fef0() {
   return (neuron0x42554a0()*-0.0448114);
}

double NNfunction_tb_t1t1::synapse0x4270270() {
   return (neuron0x4250970()*-0.173997);
}

double NNfunction_tb_t1t1::synapse0x42702b0() {
   return (neuron0x4250c20()*-0.0825224);
}

double NNfunction_tb_t1t1::synapse0x42702f0() {
   return (neuron0x4250f60()*0.0601044);
}

double NNfunction_tb_t1t1::synapse0x4270330() {
   return (neuron0x42512a0()*-0.0208719);
}

double NNfunction_tb_t1t1::synapse0x4270370() {
   return (neuron0x42515e0()*-0.0633269);
}

double NNfunction_tb_t1t1::synapse0x42703b0() {
   return (neuron0x4251920()*0.0040698);
}

double NNfunction_tb_t1t1::synapse0x42703f0() {
   return (neuron0x4251c60()*-0.011472);
}

double NNfunction_tb_t1t1::synapse0x4270430() {
   return (neuron0x4251fa0()*-0.0732322);
}

double NNfunction_tb_t1t1::synapse0x4270470() {
   return (neuron0x42522e0()*0.0178919);
}

double NNfunction_tb_t1t1::synapse0x42704b0() {
   return (neuron0x4252620()*0.023877);
}

double NNfunction_tb_t1t1::synapse0x42704f0() {
   return (neuron0x4252960()*-0.00953399);
}

double NNfunction_tb_t1t1::synapse0x4270530() {
   return (neuron0x4252ca0()*-0.0588533);
}

double NNfunction_tb_t1t1::synapse0x4270570() {
   return (neuron0x4252fe0()*-0.00362831);
}

double NNfunction_tb_t1t1::synapse0x42705b0() {
   return (neuron0x4253320()*-1.45156);
}

double NNfunction_tb_t1t1::synapse0x42705f0() {
   return (neuron0x4253660()*0.0429527);
}

double NNfunction_tb_t1t1::synapse0x4270630() {
   return (neuron0x42539a0()*-0.00974097);
}

double NNfunction_tb_t1t1::synapse0x42700c0() {
   return (neuron0x4253ce0()*-0.648262);
}

double NNfunction_tb_t1t1::synapse0x4270100() {
   return (neuron0x4254240()*0.00467576);
}

double NNfunction_tb_t1t1::synapse0x4270780() {
   return (neuron0x4254460()*0.0169229);
}

double NNfunction_tb_t1t1::synapse0x42707c0() {
   return (neuron0x42547a0()*-0.108463);
}

double NNfunction_tb_t1t1::synapse0x4270800() {
   return (neuron0x4254ae0()*0.0647408);
}

double NNfunction_tb_t1t1::synapse0x4270840() {
   return (neuron0x4254e20()*0.0174807);
}

double NNfunction_tb_t1t1::synapse0x4270880() {
   return (neuron0x4255160()*0.0150429);
}

double NNfunction_tb_t1t1::synapse0x42708c0() {
   return (neuron0x42554a0()*-0.177172);
}

double NNfunction_tb_t1t1::synapse0x4270c40() {
   return (neuron0x4250970()*0.15599);
}

double NNfunction_tb_t1t1::synapse0x4270c80() {
   return (neuron0x4250c20()*-0.000421903);
}

double NNfunction_tb_t1t1::synapse0x4270cc0() {
   return (neuron0x4250f60()*0.00561551);
}

double NNfunction_tb_t1t1::synapse0x4270d00() {
   return (neuron0x42512a0()*-0.0337508);
}

double NNfunction_tb_t1t1::synapse0x4270d40() {
   return (neuron0x42515e0()*0.0145924);
}

double NNfunction_tb_t1t1::synapse0x4270d80() {
   return (neuron0x4251920()*-0.0179958);
}

double NNfunction_tb_t1t1::synapse0x4270dc0() {
   return (neuron0x4251c60()*-0.00475496);
}

double NNfunction_tb_t1t1::synapse0x4270e00() {
   return (neuron0x4251fa0()*0.0336457);
}

double NNfunction_tb_t1t1::synapse0x4270e40() {
   return (neuron0x42522e0()*0.0184564);
}

double NNfunction_tb_t1t1::synapse0x4270e80() {
   return (neuron0x4252620()*0.0025575);
}

double NNfunction_tb_t1t1::synapse0x4270ec0() {
   return (neuron0x4252960()*0.0155086);
}

double NNfunction_tb_t1t1::synapse0x4270f00() {
   return (neuron0x4252ca0()*-0.0217176);
}

double NNfunction_tb_t1t1::synapse0x4270f40() {
   return (neuron0x4252fe0()*0.0102354);
}

double NNfunction_tb_t1t1::synapse0x4270f80() {
   return (neuron0x4253320()*1.04408);
}

double NNfunction_tb_t1t1::synapse0x4270fc0() {
   return (neuron0x4253660()*-0.0061479);
}

double NNfunction_tb_t1t1::synapse0x4271000() {
   return (neuron0x42539a0()*0.0159251);
}

double NNfunction_tb_t1t1::synapse0x4270a90() {
   return (neuron0x4253ce0()*0.53195);
}

double NNfunction_tb_t1t1::synapse0x4270ad0() {
   return (neuron0x4254240()*-0.0383333);
}

double NNfunction_tb_t1t1::synapse0x4271150() {
   return (neuron0x4254460()*-0.0280552);
}

double NNfunction_tb_t1t1::synapse0x4271190() {
   return (neuron0x42547a0()*0.019125);
}

double NNfunction_tb_t1t1::synapse0x42711d0() {
   return (neuron0x4254ae0()*2.20705);
}

double NNfunction_tb_t1t1::synapse0x4271210() {
   return (neuron0x4254e20()*0.00567816);
}

double NNfunction_tb_t1t1::synapse0x4271250() {
   return (neuron0x4255160()*0.00980015);
}

double NNfunction_tb_t1t1::synapse0x4271290() {
   return (neuron0x42554a0()*-0.590036);
}

double NNfunction_tb_t1t1::synapse0x4271610() {
   return (neuron0x4250970()*0.111435);
}

double NNfunction_tb_t1t1::synapse0x4271650() {
   return (neuron0x4250c20()*-0.0984815);
}

double NNfunction_tb_t1t1::synapse0x4271690() {
   return (neuron0x4250f60()*-0.00736083);
}

double NNfunction_tb_t1t1::synapse0x42716d0() {
   return (neuron0x42512a0()*0.460962);
}

double NNfunction_tb_t1t1::synapse0x4271710() {
   return (neuron0x42515e0()*0.0270309);
}

double NNfunction_tb_t1t1::synapse0x4271750() {
   return (neuron0x4251920()*0.00416759);
}

double NNfunction_tb_t1t1::synapse0x4271790() {
   return (neuron0x4251c60()*-0.00493978);
}

double NNfunction_tb_t1t1::synapse0x42717d0() {
   return (neuron0x4251fa0()*-0.00251912);
}

double NNfunction_tb_t1t1::synapse0x4271810() {
   return (neuron0x42522e0()*0.125549);
}

double NNfunction_tb_t1t1::synapse0x4271850() {
   return (neuron0x4252620()*0.0444097);
}

double NNfunction_tb_t1t1::synapse0x4271890() {
   return (neuron0x4252960()*-0.0152513);
}

double NNfunction_tb_t1t1::synapse0x42718d0() {
   return (neuron0x4252ca0()*-0.0839985);
}

double NNfunction_tb_t1t1::synapse0x4271910() {
   return (neuron0x4252fe0()*-0.115152);
}

double NNfunction_tb_t1t1::synapse0x4271950() {
   return (neuron0x4253320()*0.202636);
}

double NNfunction_tb_t1t1::synapse0x4271990() {
   return (neuron0x4253660()*-0.000212606);
}

double NNfunction_tb_t1t1::synapse0x42719d0() {
   return (neuron0x42539a0()*-0.0420102);
}

double NNfunction_tb_t1t1::synapse0x4271460() {
   return (neuron0x4253ce0()*0.098307);
}

double NNfunction_tb_t1t1::synapse0x42714a0() {
   return (neuron0x4254240()*-0.0408162);
}

double NNfunction_tb_t1t1::synapse0x4271b20() {
   return (neuron0x4254460()*-0.0275009);
}

double NNfunction_tb_t1t1::synapse0x4271b60() {
   return (neuron0x42547a0()*-0.0505036);
}

double NNfunction_tb_t1t1::synapse0x4271ba0() {
   return (neuron0x4254ae0()*-0.338427);
}

double NNfunction_tb_t1t1::synapse0x4271be0() {
   return (neuron0x4254e20()*0.0433454);
}

double NNfunction_tb_t1t1::synapse0x4271c20() {
   return (neuron0x4255160()*-0.00131526);
}

double NNfunction_tb_t1t1::synapse0x4271c60() {
   return (neuron0x42554a0()*0.400469);
}

double NNfunction_tb_t1t1::synapse0x4271fe0() {
   return (neuron0x4250970()*-0.212075);
}

double NNfunction_tb_t1t1::synapse0x4272020() {
   return (neuron0x4250c20()*0.181833);
}

double NNfunction_tb_t1t1::synapse0x4272060() {
   return (neuron0x4250f60()*-0.230574);
}

double NNfunction_tb_t1t1::synapse0x42720a0() {
   return (neuron0x42512a0()*0.170879);
}

double NNfunction_tb_t1t1::synapse0x42720e0() {
   return (neuron0x42515e0()*-0.502679);
}

double NNfunction_tb_t1t1::synapse0x4272120() {
   return (neuron0x4251920()*-0.00341504);
}

double NNfunction_tb_t1t1::synapse0x4272160() {
   return (neuron0x4251c60()*0.000356657);
}

double NNfunction_tb_t1t1::synapse0x42721a0() {
   return (neuron0x4251fa0()*0.0373376);
}

double NNfunction_tb_t1t1::synapse0x42721e0() {
   return (neuron0x42522e0()*-0.119081);
}

double NNfunction_tb_t1t1::synapse0x4272220() {
   return (neuron0x4252620()*-0.00609706);
}

double NNfunction_tb_t1t1::synapse0x4272260() {
   return (neuron0x4252960()*0.023998);
}

double NNfunction_tb_t1t1::synapse0x42722a0() {
   return (neuron0x4252ca0()*0.0787962);
}

double NNfunction_tb_t1t1::synapse0x42722e0() {
   return (neuron0x4252fe0()*0.011829);
}

double NNfunction_tb_t1t1::synapse0x4272320() {
   return (neuron0x4253320()*-0.0606224);
}

double NNfunction_tb_t1t1::synapse0x4272360() {
   return (neuron0x4253660()*0.00273322);
}

double NNfunction_tb_t1t1::synapse0x42723a0() {
   return (neuron0x42539a0()*-0.0365945);
}

double NNfunction_tb_t1t1::synapse0x4271e30() {
   return (neuron0x4253ce0()*0.942937);
}

double NNfunction_tb_t1t1::synapse0x4271e70() {
   return (neuron0x4254240()*-0.0782257);
}

double NNfunction_tb_t1t1::synapse0x42724f0() {
   return (neuron0x4254460()*-0.00412988);
}

double NNfunction_tb_t1t1::synapse0x4272530() {
   return (neuron0x42547a0()*-0.0270296);
}

double NNfunction_tb_t1t1::synapse0x4272570() {
   return (neuron0x4254ae0()*0.113003);
}

double NNfunction_tb_t1t1::synapse0x42725b0() {
   return (neuron0x4254e20()*0.0998233);
}

double NNfunction_tb_t1t1::synapse0x42725f0() {
   return (neuron0x4255160()*0.108302);
}

double NNfunction_tb_t1t1::synapse0x4272630() {
   return (neuron0x42554a0()*0.922379);
}

double NNfunction_tb_t1t1::synapse0x42729b0() {
   return (neuron0x4250970()*-0.155511);
}

double NNfunction_tb_t1t1::synapse0x42729f0() {
   return (neuron0x4250c20()*0.0516082);
}

double NNfunction_tb_t1t1::synapse0x4272a30() {
   return (neuron0x4250f60()*0.086525);
}

double NNfunction_tb_t1t1::synapse0x4272a70() {
   return (neuron0x42512a0()*-0.0406958);
}

double NNfunction_tb_t1t1::synapse0x4272ab0() {
   return (neuron0x42515e0()*-0.00993923);
}

double NNfunction_tb_t1t1::synapse0x4272af0() {
   return (neuron0x4251920()*0.0612997);
}

double NNfunction_tb_t1t1::synapse0x4272b30() {
   return (neuron0x4251c60()*0.0622125);
}

double NNfunction_tb_t1t1::synapse0x4272b70() {
   return (neuron0x4251fa0()*-0.217368);
}

double NNfunction_tb_t1t1::synapse0x4272bb0() {
   return (neuron0x42522e0()*-0.0316186);
}

double NNfunction_tb_t1t1::synapse0x4272bf0() {
   return (neuron0x4252620()*0.012908);
}

double NNfunction_tb_t1t1::synapse0x4272c30() {
   return (neuron0x4252960()*-0.0916314);
}

double NNfunction_tb_t1t1::synapse0x4272c70() {
   return (neuron0x4252ca0()*-0.022889);
}

double NNfunction_tb_t1t1::synapse0x4272cb0() {
   return (neuron0x4252fe0()*-0.0242314);
}

double NNfunction_tb_t1t1::synapse0x4272cf0() {
   return (neuron0x4253320()*0.590311);
}

double NNfunction_tb_t1t1::synapse0x4272d30() {
   return (neuron0x4253660()*0.13177);
}

double NNfunction_tb_t1t1::synapse0x4272d70() {
   return (neuron0x42539a0()*-0.147407);
}

double NNfunction_tb_t1t1::synapse0x4272800() {
   return (neuron0x4253ce0()*1.73245);
}

double NNfunction_tb_t1t1::synapse0x4272840() {
   return (neuron0x4254240()*0.0625102);
}

double NNfunction_tb_t1t1::synapse0x4272ec0() {
   return (neuron0x4254460()*-0.0310556);
}

double NNfunction_tb_t1t1::synapse0x4272f00() {
   return (neuron0x42547a0()*-0.0672275);
}

double NNfunction_tb_t1t1::synapse0x4272f40() {
   return (neuron0x4254ae0()*-0.196718);
}

double NNfunction_tb_t1t1::synapse0x4272f80() {
   return (neuron0x4254e20()*-0.0826273);
}

double NNfunction_tb_t1t1::synapse0x4272fc0() {
   return (neuron0x4255160()*-0.0356272);
}

double NNfunction_tb_t1t1::synapse0x4273000() {
   return (neuron0x42554a0()*0.127449);
}

double NNfunction_tb_t1t1::synapse0x425bab0() {
   return (neuron0x4250970()*0.0232118);
}

double NNfunction_tb_t1t1::synapse0x425baf0() {
   return (neuron0x4250c20()*-0.0153072);
}

double NNfunction_tb_t1t1::synapse0x425bb30() {
   return (neuron0x4250f60()*0.0340866);
}

double NNfunction_tb_t1t1::synapse0x425bb70() {
   return (neuron0x42512a0()*0.0211711);
}

double NNfunction_tb_t1t1::synapse0x425bbb0() {
   return (neuron0x42515e0()*0.00321871);
}

double NNfunction_tb_t1t1::synapse0x425bbf0() {
   return (neuron0x4251920()*0.0158187);
}

double NNfunction_tb_t1t1::synapse0x425bc30() {
   return (neuron0x4251c60()*-0.000873932);
}

double NNfunction_tb_t1t1::synapse0x425bc70() {
   return (neuron0x4251fa0()*0.00984738);
}

double NNfunction_tb_t1t1::synapse0x4273790() {
   return (neuron0x42522e0()*-0.0283111);
}

double NNfunction_tb_t1t1::synapse0x42737d0() {
   return (neuron0x4252620()*0.00666456);
}

double NNfunction_tb_t1t1::synapse0x4273810() {
   return (neuron0x4252960()*0.00540937);
}

double NNfunction_tb_t1t1::synapse0x4273850() {
   return (neuron0x4252ca0()*-0.0145616);
}

double NNfunction_tb_t1t1::synapse0x4273890() {
   return (neuron0x4252fe0()*0.0143457);
}

double NNfunction_tb_t1t1::synapse0x42738d0() {
   return (neuron0x4253320()*-2.3705);
}

double NNfunction_tb_t1t1::synapse0x4273910() {
   return (neuron0x4253660()*-0.0157016);
}

double NNfunction_tb_t1t1::synapse0x4273950() {
   return (neuron0x42539a0()*-0.00065934);
}

double NNfunction_tb_t1t1::synapse0x42731d0() {
   return (neuron0x4253ce0()*0.972124);
}

double NNfunction_tb_t1t1::synapse0x4273210() {
   return (neuron0x4254240()*-0.0282494);
}

double NNfunction_tb_t1t1::synapse0x4273aa0() {
   return (neuron0x4254460()*-0.0201628);
}

double NNfunction_tb_t1t1::synapse0x4273ae0() {
   return (neuron0x42547a0()*-0.00600972);
}

double NNfunction_tb_t1t1::synapse0x4273b20() {
   return (neuron0x4254ae0()*-0.10958);
}

double NNfunction_tb_t1t1::synapse0x4273b60() {
   return (neuron0x4254e20()*-0.00510967);
}

double NNfunction_tb_t1t1::synapse0x4273ba0() {
   return (neuron0x4255160()*-0.0120847);
}

double NNfunction_tb_t1t1::synapse0x4273be0() {
   return (neuron0x42554a0()*-0.00736584);
}

double NNfunction_tb_t1t1::synapse0x4273f60() {
   return (neuron0x4250970()*0.126005);
}

double NNfunction_tb_t1t1::synapse0x4273fa0() {
   return (neuron0x4250c20()*0.054021);
}

double NNfunction_tb_t1t1::synapse0x4273fe0() {
   return (neuron0x4250f60()*-0.00949362);
}

double NNfunction_tb_t1t1::synapse0x4274020() {
   return (neuron0x42512a0()*-0.00746898);
}

double NNfunction_tb_t1t1::synapse0x4274060() {
   return (neuron0x42515e0()*-0.031731);
}

double NNfunction_tb_t1t1::synapse0x42740a0() {
   return (neuron0x4251920()*-0.0152426);
}

double NNfunction_tb_t1t1::synapse0x42740e0() {
   return (neuron0x4251c60()*-0.00291566);
}

double NNfunction_tb_t1t1::synapse0x4274120() {
   return (neuron0x4251fa0()*0.0116189);
}

double NNfunction_tb_t1t1::synapse0x4274160() {
   return (neuron0x42522e0()*-0.0179968);
}

double NNfunction_tb_t1t1::synapse0x42741a0() {
   return (neuron0x4252620()*0.0086806);
}

double NNfunction_tb_t1t1::synapse0x42741e0() {
   return (neuron0x4252960()*-0.00359564);
}

double NNfunction_tb_t1t1::synapse0x4274220() {
   return (neuron0x4252ca0()*-0.0241158);
}

double NNfunction_tb_t1t1::synapse0x4274260() {
   return (neuron0x4252fe0()*-0.0103278);
}

double NNfunction_tb_t1t1::synapse0x42742a0() {
   return (neuron0x4253320()*0.466517);
}

double NNfunction_tb_t1t1::synapse0x42742e0() {
   return (neuron0x4253660()*-0.0170668);
}

double NNfunction_tb_t1t1::synapse0x4274320() {
   return (neuron0x42539a0()*0.0115113);
}

double NNfunction_tb_t1t1::synapse0x4273db0() {
   return (neuron0x4253ce0()*1.91919);
}

double NNfunction_tb_t1t1::synapse0x4273df0() {
   return (neuron0x4254240()*0.0175423);
}

double NNfunction_tb_t1t1::synapse0x4274470() {
   return (neuron0x4254460()*-0.0322931);
}

double NNfunction_tb_t1t1::synapse0x42744b0() {
   return (neuron0x42547a0()*-0.015544);
}

double NNfunction_tb_t1t1::synapse0x42744f0() {
   return (neuron0x4254ae0()*-1.7852);
}

double NNfunction_tb_t1t1::synapse0x4274530() {
   return (neuron0x4254e20()*0.100805);
}

double NNfunction_tb_t1t1::synapse0x4274570() {
   return (neuron0x4255160()*0.0145409);
}

double NNfunction_tb_t1t1::synapse0x42745b0() {
   return (neuron0x42554a0()*0.351639);
}

double NNfunction_tb_t1t1::synapse0x4274930() {
   return (neuron0x4250970()*0.481058);
}

double NNfunction_tb_t1t1::synapse0x4274970() {
   return (neuron0x4250c20()*0.0193043);
}

double NNfunction_tb_t1t1::synapse0x42749b0() {
   return (neuron0x4250f60()*-0.0672405);
}

double NNfunction_tb_t1t1::synapse0x42749f0() {
   return (neuron0x42512a0()*-0.0206809);
}

double NNfunction_tb_t1t1::synapse0x4274a30() {
   return (neuron0x42515e0()*-0.00900357);
}

double NNfunction_tb_t1t1::synapse0x4274a70() {
   return (neuron0x4251920()*0.0172538);
}

double NNfunction_tb_t1t1::synapse0x4274ab0() {
   return (neuron0x4251c60()*0.000723953);
}

double NNfunction_tb_t1t1::synapse0x4274af0() {
   return (neuron0x4251fa0()*-0.00917254);
}

double NNfunction_tb_t1t1::synapse0x4274b30() {
   return (neuron0x42522e0()*-0.0211391);
}

double NNfunction_tb_t1t1::synapse0x4274b70() {
   return (neuron0x4252620()*-0.0101015);
}

double NNfunction_tb_t1t1::synapse0x4274bb0() {
   return (neuron0x4252960()*0.00764244);
}

double NNfunction_tb_t1t1::synapse0x4274bf0() {
   return (neuron0x4252ca0()*-0.0293912);
}

double NNfunction_tb_t1t1::synapse0x4274c30() {
   return (neuron0x4252fe0()*0.0206827);
}

double NNfunction_tb_t1t1::synapse0x4274c70() {
   return (neuron0x4253320()*0.0797428);
}

double NNfunction_tb_t1t1::synapse0x4274cb0() {
   return (neuron0x4253660()*-0.000435791);
}

double NNfunction_tb_t1t1::synapse0x4274cf0() {
   return (neuron0x42539a0()*-0.00510527);
}

double NNfunction_tb_t1t1::synapse0x4274780() {
   return (neuron0x4253ce0()*0.220302);
}

double NNfunction_tb_t1t1::synapse0x42747c0() {
   return (neuron0x4254240()*0.0108967);
}

double NNfunction_tb_t1t1::synapse0x42652f0() {
   return (neuron0x4254460()*-0.039325);
}

double NNfunction_tb_t1t1::synapse0x4265330() {
   return (neuron0x42547a0()*-0.0371593);
}

double NNfunction_tb_t1t1::synapse0x4265370() {
   return (neuron0x4254ae0()*1.74945);
}

double NNfunction_tb_t1t1::synapse0x42653b0() {
   return (neuron0x4254e20()*-0.0292186);
}

double NNfunction_tb_t1t1::synapse0x42653f0() {
   return (neuron0x4255160()*-0.0188506);
}

double NNfunction_tb_t1t1::synapse0x4265430() {
   return (neuron0x42554a0()*0.291102);
}

double NNfunction_tb_t1t1::synapse0x42657b0() {
   return (neuron0x4250970()*0.361523);
}

double NNfunction_tb_t1t1::synapse0x42657f0() {
   return (neuron0x4250c20()*-4.39815e-05);
}

double NNfunction_tb_t1t1::synapse0x4265830() {
   return (neuron0x4250f60()*0.48156);
}

double NNfunction_tb_t1t1::synapse0x4265870() {
   return (neuron0x42512a0()*-0.110516);
}

double NNfunction_tb_t1t1::synapse0x42658b0() {
   return (neuron0x42515e0()*-0.242769);
}

double NNfunction_tb_t1t1::synapse0x42658f0() {
   return (neuron0x4251920()*-0.0162724);
}

double NNfunction_tb_t1t1::synapse0x4265930() {
   return (neuron0x4251c60()*-0.0194584);
}

double NNfunction_tb_t1t1::synapse0x4265970() {
   return (neuron0x4251fa0()*-0.041002);
}

double NNfunction_tb_t1t1::synapse0x42659b0() {
   return (neuron0x42522e0()*-0.0162645);
}

double NNfunction_tb_t1t1::synapse0x42659f0() {
   return (neuron0x4252620()*0.0730476);
}

double NNfunction_tb_t1t1::synapse0x4265a30() {
   return (neuron0x4252960()*-0.0478973);
}

double NNfunction_tb_t1t1::synapse0x4265a70() {
   return (neuron0x4252ca0()*0.0118194);
}

double NNfunction_tb_t1t1::synapse0x4265ab0() {
   return (neuron0x4252fe0()*-0.0233988);
}

double NNfunction_tb_t1t1::synapse0x4265af0() {
   return (neuron0x4253320()*0.0397375);
}

double NNfunction_tb_t1t1::synapse0x4265b30() {
   return (neuron0x4253660()*0.0872919);
}

double NNfunction_tb_t1t1::synapse0x4265b70() {
   return (neuron0x42539a0()*-0.036239);
}

double NNfunction_tb_t1t1::synapse0x4265600() {
   return (neuron0x4253ce0()*-0.246919);
}

double NNfunction_tb_t1t1::synapse0x4265640() {
   return (neuron0x4254240()*0.0329661);
}

double NNfunction_tb_t1t1::synapse0x4265cc0() {
   return (neuron0x4254460()*0.0436486);
}

double NNfunction_tb_t1t1::synapse0x4265d00() {
   return (neuron0x42547a0()*0.0554457);
}

double NNfunction_tb_t1t1::synapse0x4265d40() {
   return (neuron0x4254ae0()*0.113628);
}

double NNfunction_tb_t1t1::synapse0x4265d80() {
   return (neuron0x4254e20()*0.201815);
}

double NNfunction_tb_t1t1::synapse0x4265dc0() {
   return (neuron0x4255160()*0.035134);
}

double NNfunction_tb_t1t1::synapse0x4265e00() {
   return (neuron0x42554a0()*-0.361662);
}

double NNfunction_tb_t1t1::synapse0x4266180() {
   return (neuron0x4250970()*-0.00825764);
}

double NNfunction_tb_t1t1::synapse0x42661c0() {
   return (neuron0x4250c20()*0.00511228);
}

double NNfunction_tb_t1t1::synapse0x4266200() {
   return (neuron0x4250f60()*0.00997029);
}

double NNfunction_tb_t1t1::synapse0x4266240() {
   return (neuron0x42512a0()*0.00522048);
}

double NNfunction_tb_t1t1::synapse0x4266280() {
   return (neuron0x42515e0()*-0.00880164);
}

double NNfunction_tb_t1t1::synapse0x42662c0() {
   return (neuron0x4251920()*-0.00320211);
}

double NNfunction_tb_t1t1::synapse0x4266300() {
   return (neuron0x4251c60()*-0.00165507);
}

double NNfunction_tb_t1t1::synapse0x4266340() {
   return (neuron0x4251fa0()*0.00096444);
}

double NNfunction_tb_t1t1::synapse0x4266380() {
   return (neuron0x42522e0()*0.0030949);
}

double NNfunction_tb_t1t1::synapse0x42663c0() {
   return (neuron0x4252620()*-0.00362866);
}

double NNfunction_tb_t1t1::synapse0x4266400() {
   return (neuron0x4252960()*-0.00328559);
}

double NNfunction_tb_t1t1::synapse0x4266440() {
   return (neuron0x4252ca0()*-0.00361837);
}

double NNfunction_tb_t1t1::synapse0x4266480() {
   return (neuron0x4252fe0()*-0.00025811);
}

double NNfunction_tb_t1t1::synapse0x42664c0() {
   return (neuron0x4253320()*-0.401822);
}

double NNfunction_tb_t1t1::synapse0x4266500() {
   return (neuron0x4253660()*-0.00167332);
}

double NNfunction_tb_t1t1::synapse0x4266540() {
   return (neuron0x42539a0()*-0.00397186);
}

double NNfunction_tb_t1t1::synapse0x4265fd0() {
   return (neuron0x4253ce0()*-0.115265);
}

double NNfunction_tb_t1t1::synapse0x4266010() {
   return (neuron0x4254240()*0.00788421);
}

double NNfunction_tb_t1t1::synapse0x4266690() {
   return (neuron0x4254460()*-0.00529622);
}

double NNfunction_tb_t1t1::synapse0x42666d0() {
   return (neuron0x42547a0()*-0.0213031);
}

double NNfunction_tb_t1t1::synapse0x4266710() {
   return (neuron0x4254ae0()*0.0111868);
}

double NNfunction_tb_t1t1::synapse0x4266750() {
   return (neuron0x4254e20()*-9.62524e-05);
}

double NNfunction_tb_t1t1::synapse0x4266790() {
   return (neuron0x4255160()*0.00471564);
}

double NNfunction_tb_t1t1::synapse0x42667d0() {
   return (neuron0x42554a0()*0.00167709);
}

double NNfunction_tb_t1t1::synapse0x4266b50() {
   return (neuron0x4250970()*0.0739);
}

double NNfunction_tb_t1t1::synapse0x4266b90() {
   return (neuron0x4250c20()*-0.0467575);
}

double NNfunction_tb_t1t1::synapse0x4266bd0() {
   return (neuron0x4250f60()*0.0622216);
}

double NNfunction_tb_t1t1::synapse0x4266c10() {
   return (neuron0x42512a0()*-0.100042);
}

double NNfunction_tb_t1t1::synapse0x4266c50() {
   return (neuron0x42515e0()*-0.0269667);
}

double NNfunction_tb_t1t1::synapse0x4266c90() {
   return (neuron0x4251920()*0.000877959);
}

double NNfunction_tb_t1t1::synapse0x4266cd0() {
   return (neuron0x4251c60()*-0.0330171);
}

double NNfunction_tb_t1t1::synapse0x4266d10() {
   return (neuron0x4251fa0()*-0.0694661);
}

double NNfunction_tb_t1t1::synapse0x4266d50() {
   return (neuron0x42522e0()*0.00360158);
}

double NNfunction_tb_t1t1::synapse0x4266d90() {
   return (neuron0x4252620()*0.0217272);
}

double NNfunction_tb_t1t1::synapse0x4266dd0() {
   return (neuron0x4252960()*0.0326909);
}

double NNfunction_tb_t1t1::synapse0x4266e10() {
   return (neuron0x4252ca0()*0.0110659);
}

double NNfunction_tb_t1t1::synapse0x4266e50() {
   return (neuron0x4252fe0()*-0.0858098);
}

double NNfunction_tb_t1t1::synapse0x4266e90() {
   return (neuron0x4253320()*0.611517);
}

double NNfunction_tb_t1t1::synapse0x4266ed0() {
   return (neuron0x4253660()*-0.0781965);
}

double NNfunction_tb_t1t1::synapse0x4266f10() {
   return (neuron0x42539a0()*-0.0435428);
}

double NNfunction_tb_t1t1::synapse0x42669a0() {
   return (neuron0x4253ce0()*0.976364);
}

double NNfunction_tb_t1t1::synapse0x42669e0() {
   return (neuron0x4254240()*0.0860147);
}

double NNfunction_tb_t1t1::synapse0x4267060() {
   return (neuron0x4254460()*0.0318354);
}

double NNfunction_tb_t1t1::synapse0x42670a0() {
   return (neuron0x42547a0()*0.0119126);
}

double NNfunction_tb_t1t1::synapse0x42670e0() {
   return (neuron0x4254ae0()*1.76815);
}

double NNfunction_tb_t1t1::synapse0x4267120() {
   return (neuron0x4254e20()*0.176977);
}

double NNfunction_tb_t1t1::synapse0x4267160() {
   return (neuron0x4255160()*0.0462113);
}

double NNfunction_tb_t1t1::synapse0x42671a0() {
   return (neuron0x42554a0()*0.156364);
}

double NNfunction_tb_t1t1::synapse0x4279070() {
   return (neuron0x4250970()*0.04856);
}

double NNfunction_tb_t1t1::synapse0x42790b0() {
   return (neuron0x4250c20()*-6.73988e-05);
}

double NNfunction_tb_t1t1::synapse0x42790f0() {
   return (neuron0x4250f60()*-0.615071);
}

double NNfunction_tb_t1t1::synapse0x4279130() {
   return (neuron0x42512a0()*-0.0746346);
}

double NNfunction_tb_t1t1::synapse0x4279170() {
   return (neuron0x42515e0()*0.132309);
}

double NNfunction_tb_t1t1::synapse0x42791b0() {
   return (neuron0x4251920()*0.0265956);
}

double NNfunction_tb_t1t1::synapse0x42791f0() {
   return (neuron0x4251c60()*0.000168875);
}

double NNfunction_tb_t1t1::synapse0x4279230() {
   return (neuron0x4251fa0()*-0.0222113);
}

double NNfunction_tb_t1t1::synapse0x4279270() {
   return (neuron0x42522e0()*-0.0364995);
}

double NNfunction_tb_t1t1::synapse0x42792b0() {
   return (neuron0x4252620()*0.0224841);
}

double NNfunction_tb_t1t1::synapse0x42792f0() {
   return (neuron0x4252960()*-0.0400979);
}

double NNfunction_tb_t1t1::synapse0x4279330() {
   return (neuron0x4252ca0()*-0.0476261);
}

double NNfunction_tb_t1t1::synapse0x4279370() {
   return (neuron0x4252fe0()*0.00154692);
}

double NNfunction_tb_t1t1::synapse0x42793b0() {
   return (neuron0x4253320()*0.63613);
}

double NNfunction_tb_t1t1::synapse0x42793f0() {
   return (neuron0x4253660()*0.00737237);
}

double NNfunction_tb_t1t1::synapse0x4279430() {
   return (neuron0x42539a0()*-0.0342955);
}

double NNfunction_tb_t1t1::synapse0x42671e0() {
   return (neuron0x4253ce0()*0.27563);
}

double NNfunction_tb_t1t1::synapse0x4267220() {
   return (neuron0x4254240()*-0.0195484);
}

double NNfunction_tb_t1t1::synapse0x4279580() {
   return (neuron0x4254460()*0.00184032);
}

double NNfunction_tb_t1t1::synapse0x42795c0() {
   return (neuron0x42547a0()*0.0122216);
}

double NNfunction_tb_t1t1::synapse0x4279600() {
   return (neuron0x4254ae0()*-0.016159);
}

double NNfunction_tb_t1t1::synapse0x4279640() {
   return (neuron0x4254e20()*-0.0625969);
}

double NNfunction_tb_t1t1::synapse0x4279680() {
   return (neuron0x4255160()*-0.0191633);
}

double NNfunction_tb_t1t1::synapse0x42796c0() {
   return (neuron0x42554a0()*-0.861902);
}

double NNfunction_tb_t1t1::synapse0x4279a40() {
   return (neuron0x4250970()*-0.0445512);
}

double NNfunction_tb_t1t1::synapse0x4279a80() {
   return (neuron0x4250c20()*0.146285);
}

double NNfunction_tb_t1t1::synapse0x4279ac0() {
   return (neuron0x4250f60()*-0.0368684);
}

double NNfunction_tb_t1t1::synapse0x4279b00() {
   return (neuron0x42512a0()*-0.0595825);
}

double NNfunction_tb_t1t1::synapse0x4279b40() {
   return (neuron0x42515e0()*0.274348);
}

double NNfunction_tb_t1t1::synapse0x4279b80() {
   return (neuron0x4251920()*-0.0882505);
}

double NNfunction_tb_t1t1::synapse0x4279bc0() {
   return (neuron0x4251c60()*0.0606846);
}

double NNfunction_tb_t1t1::synapse0x4279c00() {
   return (neuron0x4251fa0()*-0.0366928);
}

double NNfunction_tb_t1t1::synapse0x4279c40() {
   return (neuron0x42522e0()*0.0710622);
}

double NNfunction_tb_t1t1::synapse0x4279c80() {
   return (neuron0x4252620()*-0.152434);
}

double NNfunction_tb_t1t1::synapse0x4279cc0() {
   return (neuron0x4252960()*0.0858888);
}

double NNfunction_tb_t1t1::synapse0x4279d00() {
   return (neuron0x4252ca0()*0.0152202);
}

double NNfunction_tb_t1t1::synapse0x4279d40() {
   return (neuron0x4252fe0()*-0.00527081);
}

double NNfunction_tb_t1t1::synapse0x4279d80() {
   return (neuron0x4253320()*0.285296);
}

double NNfunction_tb_t1t1::synapse0x4279dc0() {
   return (neuron0x4253660()*0.0715309);
}

double NNfunction_tb_t1t1::synapse0x4279e00() {
   return (neuron0x42539a0()*0.220744);
}

double NNfunction_tb_t1t1::synapse0x4279890() {
   return (neuron0x4253ce0()*-0.800808);
}

double NNfunction_tb_t1t1::synapse0x42798d0() {
   return (neuron0x4254240()*-0.151596);
}

double NNfunction_tb_t1t1::synapse0x4279f50() {
   return (neuron0x4254460()*0.847895);
}

double NNfunction_tb_t1t1::synapse0x4279f90() {
   return (neuron0x42547a0()*-0.123831);
}

double NNfunction_tb_t1t1::synapse0x4279fd0() {
   return (neuron0x4254ae0()*-0.150743);
}

double NNfunction_tb_t1t1::synapse0x427a010() {
   return (neuron0x4254e20()*-0.110981);
}

double NNfunction_tb_t1t1::synapse0x427a050() {
   return (neuron0x4255160()*-0.0512675);
}

double NNfunction_tb_t1t1::synapse0x427a090() {
   return (neuron0x42554a0()*-0.326901);
}

double NNfunction_tb_t1t1::synapse0x427a410() {
   return (neuron0x4250970()*-0.0544723);
}

double NNfunction_tb_t1t1::synapse0x427a450() {
   return (neuron0x4250c20()*-0.0166247);
}

double NNfunction_tb_t1t1::synapse0x427a490() {
   return (neuron0x4250f60()*0.730678);
}

double NNfunction_tb_t1t1::synapse0x427a4d0() {
   return (neuron0x42512a0()*-0.185149);
}

double NNfunction_tb_t1t1::synapse0x427a510() {
   return (neuron0x42515e0()*0.114092);
}

double NNfunction_tb_t1t1::synapse0x427a550() {
   return (neuron0x4251920()*0.0400062);
}

double NNfunction_tb_t1t1::synapse0x427a590() {
   return (neuron0x4251c60()*0.0125154);
}

double NNfunction_tb_t1t1::synapse0x427a5d0() {
   return (neuron0x4251fa0()*0.036126);
}

double NNfunction_tb_t1t1::synapse0x427a610() {
   return (neuron0x42522e0()*0.0300188);
}

double NNfunction_tb_t1t1::synapse0x427a650() {
   return (neuron0x4252620()*-0.026545);
}

double NNfunction_tb_t1t1::synapse0x427a690() {
   return (neuron0x4252960()*-0.0243074);
}

double NNfunction_tb_t1t1::synapse0x427a6d0() {
   return (neuron0x4252ca0()*-0.0749694);
}

double NNfunction_tb_t1t1::synapse0x427a710() {
   return (neuron0x4252fe0()*7.30705e-05);
}

double NNfunction_tb_t1t1::synapse0x427a750() {
   return (neuron0x4253320()*-0.497019);
}

double NNfunction_tb_t1t1::synapse0x427a790() {
   return (neuron0x4253660()*0.0692561);
}

double NNfunction_tb_t1t1::synapse0x427a7d0() {
   return (neuron0x42539a0()*0.053561);
}

double NNfunction_tb_t1t1::synapse0x427a260() {
   return (neuron0x4253ce0()*0.872923);
}

double NNfunction_tb_t1t1::synapse0x427a2a0() {
   return (neuron0x4254240()*-0.00843603);
}

double NNfunction_tb_t1t1::synapse0x427a920() {
   return (neuron0x4254460()*-0.00948548);
}

double NNfunction_tb_t1t1::synapse0x427a960() {
   return (neuron0x42547a0()*-0.0143578);
}

double NNfunction_tb_t1t1::synapse0x427a9a0() {
   return (neuron0x4254ae0()*-0.0170767);
}

double NNfunction_tb_t1t1::synapse0x427a9e0() {
   return (neuron0x4254e20()*-0.0837836);
}

double NNfunction_tb_t1t1::synapse0x427aa20() {
   return (neuron0x4255160()*-0.015077);
}

double NNfunction_tb_t1t1::synapse0x427aa60() {
   return (neuron0x42554a0()*-0.500897);
}

double NNfunction_tb_t1t1::synapse0x427ade0() {
   return (neuron0x4250970()*-0.0322595);
}

double NNfunction_tb_t1t1::synapse0x427ae20() {
   return (neuron0x4250c20()*0.21915);
}

double NNfunction_tb_t1t1::synapse0x427ae60() {
   return (neuron0x4250f60()*-0.134266);
}

double NNfunction_tb_t1t1::synapse0x427aea0() {
   return (neuron0x42512a0()*0.202387);
}

double NNfunction_tb_t1t1::synapse0x427aee0() {
   return (neuron0x42515e0()*-0.178345);
}

double NNfunction_tb_t1t1::synapse0x427af20() {
   return (neuron0x4251920()*-0.0126315);
}

double NNfunction_tb_t1t1::synapse0x427af60() {
   return (neuron0x4251c60()*-0.223797);
}

double NNfunction_tb_t1t1::synapse0x427afa0() {
   return (neuron0x4251fa0()*0.0244638);
}

double NNfunction_tb_t1t1::synapse0x427afe0() {
   return (neuron0x42522e0()*-0.0587195);
}

double NNfunction_tb_t1t1::synapse0x427b020() {
   return (neuron0x4252620()*-0.101444);
}

double NNfunction_tb_t1t1::synapse0x427b060() {
   return (neuron0x4252960()*0.0874815);
}

double NNfunction_tb_t1t1::synapse0x427b0a0() {
   return (neuron0x4252ca0()*-0.579818);
}

double NNfunction_tb_t1t1::synapse0x427b0e0() {
   return (neuron0x4252fe0()*0.135825);
}

double NNfunction_tb_t1t1::synapse0x427b120() {
   return (neuron0x4253320()*0.166111);
}

double NNfunction_tb_t1t1::synapse0x427b160() {
   return (neuron0x4253660()*-0.205239);
}

double NNfunction_tb_t1t1::synapse0x427b1a0() {
   return (neuron0x42539a0()*0.029502);
}

double NNfunction_tb_t1t1::synapse0x427ac30() {
   return (neuron0x4253ce0()*-0.0188048);
}

double NNfunction_tb_t1t1::synapse0x427ac70() {
   return (neuron0x4254240()*0.087435);
}

double NNfunction_tb_t1t1::synapse0x427b2f0() {
   return (neuron0x4254460()*0.0518503);
}

double NNfunction_tb_t1t1::synapse0x427b330() {
   return (neuron0x42547a0()*0.104956);
}

double NNfunction_tb_t1t1::synapse0x427b370() {
   return (neuron0x4254ae0()*0.3166);
}

double NNfunction_tb_t1t1::synapse0x427b3b0() {
   return (neuron0x4254e20()*-0.184896);
}

double NNfunction_tb_t1t1::synapse0x427b3f0() {
   return (neuron0x4255160()*-0.0546518);
}

double NNfunction_tb_t1t1::synapse0x427b430() {
   return (neuron0x42554a0()*-0.0984258);
}

double NNfunction_tb_t1t1::synapse0x401b210() {
   return (neuron0x4255910()*-0.3083);
}

double NNfunction_tb_t1t1::synapse0x401b250() {
   return (neuron0x4256260()*-1.38924);
}

double NNfunction_tb_t1t1::synapse0x4257dd0() {
   return (neuron0x4256d40()*0.345499);
}

double NNfunction_tb_t1t1::synapse0x4257e10() {
   return (neuron0x42567e0()*0.320651);
}

double NNfunction_tb_t1t1::synapse0x42598b0() {
   return (neuron0x4257b20()*-0.539101);
}

double NNfunction_tb_t1t1::synapse0x42598f0() {
   return (neuron0x4259600()*0.911445);
}

double NNfunction_tb_t1t1::synapse0x425a680() {
   return (neuron0x425a3d0()*0.501105);
}

double NNfunction_tb_t1t1::synapse0x425a6c0() {
   return (neuron0x425ada0()*-1.32201);
}

double NNfunction_tb_t1t1::synapse0x425b050() {
   return (neuron0x425b770()*0.611807);
}

double NNfunction_tb_t1t1::synapse0x425b090() {
   return (neuron0x425c250()*-0.418168);
}

double NNfunction_tb_t1t1::synapse0x425ba20() {
   return (neuron0x425cc20()*-0.848074);
}

double NNfunction_tb_t1t1::synapse0x425ba60() {
   return (neuron0x4259d00()*-0.427345);
}

double NNfunction_tb_t1t1::synapse0x425c500() {
   return (neuron0x425e7d0()*-1.43567);
}

double NNfunction_tb_t1t1::synapse0x425c540() {
   return (neuron0x425f1a0()*-1.37878);
}

double NNfunction_tb_t1t1::synapse0x425ced0() {
   return (neuron0x425fb70()*0.992546);
}

double NNfunction_tb_t1t1::synapse0x425cf10() {
   return (neuron0x4260540()*-0.258412);
}

double NNfunction_tb_t1t1::synapse0x4259fb0() {
   return (neuron0x4262350()*-0.952391);
}

double NNfunction_tb_t1t1::synapse0x4259ff0() {
   return (neuron0x4262630()*0.379232);
}

double NNfunction_tb_t1t1::synapse0x425ea80() {
   return (neuron0x4263000()*0.158643);
}

double NNfunction_tb_t1t1::synapse0x425eac0() {
   return (neuron0x42639d0()*-0.215321);
}

double NNfunction_tb_t1t1::synapse0x425f450() {
   return (neuron0x42643a0()*0.275161);
}

double NNfunction_tb_t1t1::synapse0x425f490() {
   return (neuron0x4264d70()*-0.270231);
}

double NNfunction_tb_t1t1::synapse0x425fe20() {
   return (neuron0x425d8c0()*-1.03063);
}

double NNfunction_tb_t1t1::synapse0x425fe60() {
   return (neuron0x425e290()*-0.60791);
}

double NNfunction_tb_t1t1::synapse0x42607f0() {
   return (neuron0x4267b00()*0.495717);
}

double NNfunction_tb_t1t1::synapse0x4260830() {
   return (neuron0x42684d0()*0.488127);
}

double NNfunction_tb_t1t1::synapse0x4253880() {
   return (neuron0x4268ea0()*-0.033174);
}

double NNfunction_tb_t1t1::synapse0x42538c0() {
   return (neuron0x4269870()*0.149289);
}

double NNfunction_tb_t1t1::synapse0x42628e0() {
   return (neuron0x426a240()*0.277249);
}

double NNfunction_tb_t1t1::synapse0x4262920() {
   return (neuron0x426ac10()*0.0304048);
}

double NNfunction_tb_t1t1::synapse0x42632b0() {
   return (neuron0x426b5e0()*-2.24488);
}

double NNfunction_tb_t1t1::synapse0x42632f0() {
   return (neuron0x426bfb0()*-0.617927);
}

double NNfunction_tb_t1t1::synapse0x4263c80() {
   return (neuron0x4262040()*-0.469474);
}

double NNfunction_tb_t1t1::synapse0x4263cc0() {
   return (neuron0x426eb90()*-0.442179);
}

double NNfunction_tb_t1t1::synapse0x4264650() {
   return (neuron0x426f560()*0.321399);
}

double NNfunction_tb_t1t1::synapse0x4264690() {
   return (neuron0x426ff30()*1.48585);
}

double NNfunction_tb_t1t1::synapse0x4265020() {
   return (neuron0x4270900()*-1.42307);
}

double NNfunction_tb_t1t1::synapse0x4265060() {
   return (neuron0x42712d0()*-0.237389);
}

double NNfunction_tb_t1t1::synapse0x425db70() {
   return (neuron0x4271ca0()*0.128346);
}

double NNfunction_tb_t1t1::synapse0x425dbb0() {
   return (neuron0x4272670()*-1.02844);
}

double NNfunction_tb_t1t1::synapse0x4267420() {
   return (neuron0x4273040()*-0.415162);
}

double NNfunction_tb_t1t1::synapse0x4267460() {
   return (neuron0x4273c20()*0.240138);
}

double NNfunction_tb_t1t1::synapse0x4267db0() {
   return (neuron0x42745f0()*0.13023);
}

double NNfunction_tb_t1t1::synapse0x4267df0() {
   return (neuron0x4265470()*0.0742818);
}

double NNfunction_tb_t1t1::synapse0x4268780() {
   return (neuron0x4265e40()*0.796309);
}

double NNfunction_tb_t1t1::synapse0x42687c0() {
   return (neuron0x4266810()*-0.117798);
}

double NNfunction_tb_t1t1::synapse0x4269150() {
   return (neuron0x4278e50()*-0.710925);
}

double NNfunction_tb_t1t1::synapse0x4269190() {
   return (neuron0x4279700()*-0.417297);
}

double NNfunction_tb_t1t1::synapse0x4269b20() {
   return (neuron0x427a0d0()*-0.0674314);
}

double NNfunction_tb_t1t1::synapse0x4269b60() {
   return (neuron0x427aaa0()*0.503478);
}

double NNfunction_tb_t1t1::synapse0x426c260() {
   return (neuron0x4255910()*-0.101024);
}

double NNfunction_tb_t1t1::synapse0x426c2a0() {
   return (neuron0x4256260()*0.285367);
}

double NNfunction_tb_t1t1::synapse0x4261820() {
   return (neuron0x4256d40()*-0.182872);
}

double NNfunction_tb_t1t1::synapse0x4261860() {
   return (neuron0x42567e0()*-0.232878);
}

double NNfunction_tb_t1t1::synapse0x426ee40() {
   return (neuron0x4257b20()*0.0537053);
}

double NNfunction_tb_t1t1::synapse0x426ee80() {
   return (neuron0x4259600()*0.00990814);
}

double NNfunction_tb_t1t1::synapse0x426f810() {
   return (neuron0x425a3d0()*0.183967);
}

double NNfunction_tb_t1t1::synapse0x426f850() {
   return (neuron0x425ada0()*0.132157);
}

double NNfunction_tb_t1t1::synapse0x42701e0() {
   return (neuron0x425b770()*-0.0125917);
}

double NNfunction_tb_t1t1::synapse0x4270220() {
   return (neuron0x425c250()*-0.00476046);
}

double NNfunction_tb_t1t1::synapse0x4270bb0() {
   return (neuron0x425cc20()*-0.0148466);
}

double NNfunction_tb_t1t1::synapse0x4270bf0() {
   return (neuron0x4259d00()*2.99569);
}

double NNfunction_tb_t1t1::synapse0x4271580() {
   return (neuron0x425e7d0()*0.196287);
}

double NNfunction_tb_t1t1::synapse0x42715c0() {
   return (neuron0x425f1a0()*0.00378873);
}

double NNfunction_tb_t1t1::synapse0x4271f50() {
   return (neuron0x425fb70()*0.00213374);
}

double NNfunction_tb_t1t1::synapse0x4271f90() {
   return (neuron0x4260540()*0.00438484);
}

double NNfunction_tb_t1t1::synapse0x4272920() {
   return (neuron0x4262350()*-0.52249);
}

double NNfunction_tb_t1t1::synapse0x4272960() {
   return (neuron0x4262630()*-0.114179);
}

double NNfunction_tb_t1t1::synapse0x42732f0() {
   return (neuron0x4263000()*-0.139114);
}

double NNfunction_tb_t1t1::synapse0x4273330() {
   return (neuron0x42639d0()*0.134411);
}

double NNfunction_tb_t1t1::synapse0x4273ed0() {
   return (neuron0x42643a0()*0.306698);
}

double NNfunction_tb_t1t1::synapse0x4273f10() {
   return (neuron0x4264d70()*0.0258715);
}

double NNfunction_tb_t1t1::synapse0x42748a0() {
   return (neuron0x425d8c0()*-0.364649);
}

double NNfunction_tb_t1t1::synapse0x42748e0() {
   return (neuron0x425e290()*-0.0346585);
}

double NNfunction_tb_t1t1::synapse0x4265720() {
   return (neuron0x4267b00()*0.0154034);
}

double NNfunction_tb_t1t1::synapse0x4265760() {
   return (neuron0x42684d0()*-0.13984);
}

double NNfunction_tb_t1t1::synapse0x42660f0() {
   return (neuron0x4268ea0()*0.194406);
}

double NNfunction_tb_t1t1::synapse0x4266130() {
   return (neuron0x4269870()*-0.193843);
}

double NNfunction_tb_t1t1::synapse0x4266ac0() {
   return (neuron0x426a240()*-0.0052749);
}

double NNfunction_tb_t1t1::synapse0x4266b00() {
   return (neuron0x426ac10()*-0.169307);
}

double NNfunction_tb_t1t1::synapse0x4278fe0() {
   return (neuron0x426b5e0()*-0.0342056);
}

double NNfunction_tb_t1t1::synapse0x4279020() {
   return (neuron0x426bfb0()*-0.271776);
}

double NNfunction_tb_t1t1::synapse0x42799b0() {
   return (neuron0x4262040()*0.0483723);
}

double NNfunction_tb_t1t1::synapse0x42799f0() {
   return (neuron0x426eb90()*0.0562219);
}

double NNfunction_tb_t1t1::synapse0x427a380() {
   return (neuron0x426f560()*0.023682);
}

double NNfunction_tb_t1t1::synapse0x427a3c0() {
   return (neuron0x426ff30()*-0.152557);
}

double NNfunction_tb_t1t1::synapse0x427ad50() {
   return (neuron0x4270900()*-0.0241337);
}

double NNfunction_tb_t1t1::synapse0x427ad90() {
   return (neuron0x42712d0()*0.304106);
}

double NNfunction_tb_t1t1::synapse0x4255bc0() {
   return (neuron0x4271ca0()*0.0153988);
}

double NNfunction_tb_t1t1::synapse0x4255c00() {
   return (neuron0x4272670()*-0.0518181);
}

double NNfunction_tb_t1t1::synapse0x426a4f0() {
   return (neuron0x4273040()*-0.975867);
}

double NNfunction_tb_t1t1::synapse0x426a530() {
   return (neuron0x4273c20()*0.245361);
}

double NNfunction_tb_t1t1::synapse0x427b470() {
   return (neuron0x42745f0()*0.109095);
}

double NNfunction_tb_t1t1::synapse0x427b4b0() {
   return (neuron0x4265470()*-0.130565);
}

double NNfunction_tb_t1t1::synapse0x427b4f0() {
   return (neuron0x4265e40()*-4.65743);
}

double NNfunction_tb_t1t1::synapse0x427b530() {
   return (neuron0x4266810()*0.0458871);
}

double NNfunction_tb_t1t1::synapse0x42823e0() {
   return (neuron0x4278e50()*0.394321);
}

double NNfunction_tb_t1t1::synapse0x4282420() {
   return (neuron0x4279700()*-0.0129444);
}

double NNfunction_tb_t1t1::synapse0x4282460() {
   return (neuron0x427a0d0()*0.231058);
}

double NNfunction_tb_t1t1::synapse0x42824a0() {
   return (neuron0x427aaa0()*0.00986031);
}

double NNfunction_tb_t1t1::synapse0x4282820() {
   return (neuron0x4255910()*0.519648);
}

double NNfunction_tb_t1t1::synapse0x4282860() {
   return (neuron0x4256260()*0.269097);
}

double NNfunction_tb_t1t1::synapse0x42828a0() {
   return (neuron0x4256d40()*0.374188);
}

double NNfunction_tb_t1t1::synapse0x42828e0() {
   return (neuron0x42567e0()*0.387274);
}

double NNfunction_tb_t1t1::synapse0x4282920() {
   return (neuron0x4257b20()*-0.147416);
}

double NNfunction_tb_t1t1::synapse0x4282960() {
   return (neuron0x4259600()*0.205908);
}

double NNfunction_tb_t1t1::synapse0x42829a0() {
   return (neuron0x425a3d0()*-0.372596);
}

double NNfunction_tb_t1t1::synapse0x42829e0() {
   return (neuron0x425ada0()*0.470579);
}

double NNfunction_tb_t1t1::synapse0x4282a20() {
   return (neuron0x425b770()*0.851804);
}

double NNfunction_tb_t1t1::synapse0x4282a60() {
   return (neuron0x425c250()*-0.11662);
}

double NNfunction_tb_t1t1::synapse0x4282aa0() {
   return (neuron0x425cc20()*-0.459956);
}

double NNfunction_tb_t1t1::synapse0x4282ae0() {
   return (neuron0x4259d00()*-3.05416);
}

double NNfunction_tb_t1t1::synapse0x4282b20() {
   return (neuron0x425e7d0()*0.330778);
}

double NNfunction_tb_t1t1::synapse0x4282b60() {
   return (neuron0x425f1a0()*0.18207);
}

double NNfunction_tb_t1t1::synapse0x4282ba0() {
   return (neuron0x425fb70()*-0.33166);
}

double NNfunction_tb_t1t1::synapse0x4282be0() {
   return (neuron0x4260540()*-0.184002);
}

double NNfunction_tb_t1t1::synapse0x4282670() {
   return (neuron0x4262350()*2.14648);
}

double NNfunction_tb_t1t1::synapse0x42826b0() {
   return (neuron0x4262630()*0.709076);
}

double NNfunction_tb_t1t1::synapse0x4282d30() {
   return (neuron0x4263000()*0.576082);
}

double NNfunction_tb_t1t1::synapse0x4282d70() {
   return (neuron0x42639d0()*-0.424879);
}

double NNfunction_tb_t1t1::synapse0x4282db0() {
   return (neuron0x42643a0()*-2.12028);
}

double NNfunction_tb_t1t1::synapse0x4282df0() {
   return (neuron0x4264d70()*-0.0674984);
}

double NNfunction_tb_t1t1::synapse0x4282e30() {
   return (neuron0x425d8c0()*-0.27829);
}

double NNfunction_tb_t1t1::synapse0x4282e70() {
   return (neuron0x425e290()*0.161893);
}

double NNfunction_tb_t1t1::synapse0x4282eb0() {
   return (neuron0x4267b00()*-0.200005);
}

double NNfunction_tb_t1t1::synapse0x4282ef0() {
   return (neuron0x42684d0()*-0.542324);
}

double NNfunction_tb_t1t1::synapse0x4282f30() {
   return (neuron0x4268ea0()*0.157669);
}

double NNfunction_tb_t1t1::synapse0x4282f70() {
   return (neuron0x4269870()*0.908802);
}

double NNfunction_tb_t1t1::synapse0x4282fb0() {
   return (neuron0x426a240()*0.589477);
}

double NNfunction_tb_t1t1::synapse0x4282ff0() {
   return (neuron0x426ac10()*-0.4563);
}

double NNfunction_tb_t1t1::synapse0x4283030() {
   return (neuron0x426b5e0()*0.649987);
}

double NNfunction_tb_t1t1::synapse0x4283070() {
   return (neuron0x426bfb0()*-0.181868);
}

double NNfunction_tb_t1t1::synapse0x4282c20() {
   return (neuron0x4262040()*-0.365909);
}

double NNfunction_tb_t1t1::synapse0x4282c60() {
   return (neuron0x426eb90()*-0.356784);
}

double NNfunction_tb_t1t1::synapse0x4282ca0() {
   return (neuron0x426f560()*0.981318);
}

double NNfunction_tb_t1t1::synapse0x4282ce0() {
   return (neuron0x426ff30()*0.342208);
}

double NNfunction_tb_t1t1::synapse0x42832c0() {
   return (neuron0x4270900()*0.105707);
}

double NNfunction_tb_t1t1::synapse0x4283300() {
   return (neuron0x42712d0()*-0.184837);
}

double NNfunction_tb_t1t1::synapse0x4283340() {
   return (neuron0x4271ca0()*-0.436281);
}

double NNfunction_tb_t1t1::synapse0x4283380() {
   return (neuron0x4272670()*-1.70484);
}

double NNfunction_tb_t1t1::synapse0x42833c0() {
   return (neuron0x4273040()*4.02342);
}

double NNfunction_tb_t1t1::synapse0x4283400() {
   return (neuron0x4273c20()*-0.637925);
}

double NNfunction_tb_t1t1::synapse0x4283440() {
   return (neuron0x42745f0()*0.00498048);
}

double NNfunction_tb_t1t1::synapse0x4283480() {
   return (neuron0x4265470()*-0.0852425);
}

double NNfunction_tb_t1t1::synapse0x42834c0() {
   return (neuron0x4265e40()*1.34338);
}

double NNfunction_tb_t1t1::synapse0x4283500() {
   return (neuron0x4266810()*-0.358581);
}

double NNfunction_tb_t1t1::synapse0x4283540() {
   return (neuron0x4278e50()*-0.680343);
}

double NNfunction_tb_t1t1::synapse0x4283580() {
   return (neuron0x4279700()*-0.195389);
}

double NNfunction_tb_t1t1::synapse0x42835c0() {
   return (neuron0x427a0d0()*0.477576);
}

double NNfunction_tb_t1t1::synapse0x4283600() {
   return (neuron0x427aaa0()*0.632879);
}

double NNfunction_tb_t1t1::synapse0x4283980() {
   return (neuron0x4255910()*2.263);
}

double NNfunction_tb_t1t1::synapse0x42839c0() {
   return (neuron0x4256260()*-4.39627);
}

double NNfunction_tb_t1t1::synapse0x4283a00() {
   return (neuron0x4256d40()*4.17618);
}

double NNfunction_tb_t1t1::synapse0x4283a40() {
   return (neuron0x42567e0()*1.96199);
}

double NNfunction_tb_t1t1::synapse0x4283a80() {
   return (neuron0x4257b20()*-2.04176);
}

double NNfunction_tb_t1t1::synapse0x4283ac0() {
   return (neuron0x4259600()*1.19144);
}

double NNfunction_tb_t1t1::synapse0x4283b00() {
   return (neuron0x425a3d0()*-5.34205);
}

double NNfunction_tb_t1t1::synapse0x4283b40() {
   return (neuron0x425ada0()*-0.256059);
}

double NNfunction_tb_t1t1::synapse0x4283b80() {
   return (neuron0x425b770()*3.16779);
}

double NNfunction_tb_t1t1::synapse0x4283bc0() {
   return (neuron0x425c250()*-0.44255);
}

double NNfunction_tb_t1t1::synapse0x4283c00() {
   return (neuron0x425cc20()*-2.29711);
}

double NNfunction_tb_t1t1::synapse0x4283c40() {
   return (neuron0x4259d00()*0.438887);
}

double NNfunction_tb_t1t1::synapse0x4283c80() {
   return (neuron0x425e7d0()*-4.3411);
}

double NNfunction_tb_t1t1::synapse0x4283cc0() {
   return (neuron0x425f1a0()*0.0608017);
}

double NNfunction_tb_t1t1::synapse0x4283d00() {
   return (neuron0x425fb70()*-0.163797);
}

double NNfunction_tb_t1t1::synapse0x4283d40() {
   return (neuron0x4260540()*-0.819531);
}

double NNfunction_tb_t1t1::synapse0x42837d0() {
   return (neuron0x4262350()*-3.54314);
}

double NNfunction_tb_t1t1::synapse0x4283810() {
   return (neuron0x4262630()*4.24769);
}

double NNfunction_tb_t1t1::synapse0x4283e90() {
   return (neuron0x4263000()*3.18906);
}

double NNfunction_tb_t1t1::synapse0x4283ed0() {
   return (neuron0x42639d0()*0.031837);
}

double NNfunction_tb_t1t1::synapse0x4283f10() {
   return (neuron0x42643a0()*0.328723);
}

double NNfunction_tb_t1t1::synapse0x4283f50() {
   return (neuron0x4264d70()*-1.52083);
}

double NNfunction_tb_t1t1::synapse0x4283f90() {
   return (neuron0x425d8c0()*2.35098);
}

double NNfunction_tb_t1t1::synapse0x4283fd0() {
   return (neuron0x425e290()*-0.105353);
}

double NNfunction_tb_t1t1::synapse0x4284010() {
   return (neuron0x4267b00()*0.488637);
}

double NNfunction_tb_t1t1::synapse0x4284050() {
   return (neuron0x42684d0()*3.54758);
}

double NNfunction_tb_t1t1::synapse0x4284090() {
   return (neuron0x4268ea0()*-4.32212);
}

double NNfunction_tb_t1t1::synapse0x42840d0() {
   return (neuron0x4269870()*3.39767);
}

double NNfunction_tb_t1t1::synapse0x4284110() {
   return (neuron0x426a240()*1.31005);
}

double NNfunction_tb_t1t1::synapse0x4284150() {
   return (neuron0x426ac10()*2.22273);
}

double NNfunction_tb_t1t1::synapse0x4284190() {
   return (neuron0x426b5e0()*0.249286);
}

double NNfunction_tb_t1t1::synapse0x42841d0() {
   return (neuron0x426bfb0()*2.0258);
}

double NNfunction_tb_t1t1::synapse0x4283d80() {
   return (neuron0x4262040()*-3.34762);
}

double NNfunction_tb_t1t1::synapse0x4283dc0() {
   return (neuron0x426eb90()*1.50945);
}

double NNfunction_tb_t1t1::synapse0x4283e00() {
   return (neuron0x426f560()*2.45785);
}

double NNfunction_tb_t1t1::synapse0x4283e40() {
   return (neuron0x426ff30()*-0.406609);
}

double NNfunction_tb_t1t1::synapse0x4284420() {
   return (neuron0x4270900()*1.76254);
}

double NNfunction_tb_t1t1::synapse0x4284460() {
   return (neuron0x42712d0()*-4.55264);
}

double NNfunction_tb_t1t1::synapse0x42844a0() {
   return (neuron0x4271ca0()*4.19325);
}

double NNfunction_tb_t1t1::synapse0x42844e0() {
   return (neuron0x4272670()*-3.49687);
}

double NNfunction_tb_t1t1::synapse0x4284520() {
   return (neuron0x4273040()*-1.97019);
}

double NNfunction_tb_t1t1::synapse0x4284560() {
   return (neuron0x4273c20()*1.09374);
}

double NNfunction_tb_t1t1::synapse0x42845a0() {
   return (neuron0x42745f0()*-1.27627);
}

double NNfunction_tb_t1t1::synapse0x42845e0() {
   return (neuron0x4265470()*1.04111);
}

double NNfunction_tb_t1t1::synapse0x4284620() {
   return (neuron0x4265e40()*1.27714);
}

double NNfunction_tb_t1t1::synapse0x4284660() {
   return (neuron0x4266810()*-1.95839);
}

double NNfunction_tb_t1t1::synapse0x42846a0() {
   return (neuron0x4278e50()*-2.21097);
}

double NNfunction_tb_t1t1::synapse0x42846e0() {
   return (neuron0x4279700()*-1.19212);
}

double NNfunction_tb_t1t1::synapse0x4284720() {
   return (neuron0x427a0d0()*-0.140178);
}

double NNfunction_tb_t1t1::synapse0x4284760() {
   return (neuron0x427aaa0()*2.35816);
}

double NNfunction_tb_t1t1::synapse0x4284ae0() {
   return (neuron0x4255910()*1.95327);
}

double NNfunction_tb_t1t1::synapse0x4284b20() {
   return (neuron0x4256260()*-5.94172);
}

double NNfunction_tb_t1t1::synapse0x4284b60() {
   return (neuron0x4256d40()*3.85566);
}

double NNfunction_tb_t1t1::synapse0x4284ba0() {
   return (neuron0x42567e0()*2.59787);
}

double NNfunction_tb_t1t1::synapse0x4284be0() {
   return (neuron0x4257b20()*-2.60021);
}

double NNfunction_tb_t1t1::synapse0x4284c20() {
   return (neuron0x4259600()*1.30187);
}

double NNfunction_tb_t1t1::synapse0x4284c60() {
   return (neuron0x425a3d0()*-1.78775);
}

double NNfunction_tb_t1t1::synapse0x4284ca0() {
   return (neuron0x425ada0()*-4.56383);
}

double NNfunction_tb_t1t1::synapse0x4284ce0() {
   return (neuron0x425b770()*2.13125);
}

double NNfunction_tb_t1t1::synapse0x4284d20() {
   return (neuron0x425c250()*-0.534843);
}

double NNfunction_tb_t1t1::synapse0x4284d60() {
   return (neuron0x425cc20()*-0.555845);
}

double NNfunction_tb_t1t1::synapse0x4284da0() {
   return (neuron0x4259d00()*-0.732734);
}

double NNfunction_tb_t1t1::synapse0x4284de0() {
   return (neuron0x425e7d0()*-5.55397);
}

double NNfunction_tb_t1t1::synapse0x4284e20() {
   return (neuron0x425f1a0()*0.577773);
}

double NNfunction_tb_t1t1::synapse0x4284e60() {
   return (neuron0x425fb70()*-1.29361);
}

double NNfunction_tb_t1t1::synapse0x4284ea0() {
   return (neuron0x4260540()*-0.185925);
}

double NNfunction_tb_t1t1::synapse0x4284930() {
   return (neuron0x4262350()*-0.763861);
}

double NNfunction_tb_t1t1::synapse0x4284970() {
   return (neuron0x4262630()*1.6572);
}

double NNfunction_tb_t1t1::synapse0x4284ff0() {
   return (neuron0x4263000()*3.26197);
}

double NNfunction_tb_t1t1::synapse0x4285030() {
   return (neuron0x42639d0()*-1.5851);
}

double NNfunction_tb_t1t1::synapse0x4285070() {
   return (neuron0x42643a0()*0.155585);
}

double NNfunction_tb_t1t1::synapse0x42850b0() {
   return (neuron0x4264d70()*-1.1708);
}

double NNfunction_tb_t1t1::synapse0x42850f0() {
   return (neuron0x425d8c0()*6.19128);
}

double NNfunction_tb_t1t1::synapse0x4285130() {
   return (neuron0x425e290()*-1.81923);
}

double NNfunction_tb_t1t1::synapse0x4285170() {
   return (neuron0x4267b00()*1.83397);
}

double NNfunction_tb_t1t1::synapse0x42851b0() {
   return (neuron0x42684d0()*3.60778);
}

double NNfunction_tb_t1t1::synapse0x42851f0() {
   return (neuron0x4268ea0()*-2.78549);
}

double NNfunction_tb_t1t1::synapse0x4285230() {
   return (neuron0x4269870()*5.11171);
}

double NNfunction_tb_t1t1::synapse0x4285270() {
   return (neuron0x426a240()*0.813514);
}

double NNfunction_tb_t1t1::synapse0x42852b0() {
   return (neuron0x426ac10()*3.77298);
}

double NNfunction_tb_t1t1::synapse0x42852f0() {
   return (neuron0x426b5e0()*3.51411);
}

double NNfunction_tb_t1t1::synapse0x4285330() {
   return (neuron0x426bfb0()*7.05728);
}

double NNfunction_tb_t1t1::synapse0x4284ee0() {
   return (neuron0x4262040()*-0.824981);
}

double NNfunction_tb_t1t1::synapse0x4284f20() {
   return (neuron0x426eb90()*2.78331);
}

double NNfunction_tb_t1t1::synapse0x4284f60() {
   return (neuron0x426f560()*0.914797);
}

double NNfunction_tb_t1t1::synapse0x4284fa0() {
   return (neuron0x426ff30()*5.69974);
}

double NNfunction_tb_t1t1::synapse0x4285580() {
   return (neuron0x4270900()*4.60876);
}

double NNfunction_tb_t1t1::synapse0x42855c0() {
   return (neuron0x42712d0()*-3.24863);
}

double NNfunction_tb_t1t1::synapse0x4285600() {
   return (neuron0x4271ca0()*0.885083);
}

double NNfunction_tb_t1t1::synapse0x4285640() {
   return (neuron0x4272670()*-1.93103);
}

double NNfunction_tb_t1t1::synapse0x4285680() {
   return (neuron0x4273040()*-2.35261);
}

double NNfunction_tb_t1t1::synapse0x42856c0() {
   return (neuron0x4273c20()*-3.8025);
}

double NNfunction_tb_t1t1::synapse0x4285700() {
   return (neuron0x42745f0()*-5.43463);
}

double NNfunction_tb_t1t1::synapse0x4285740() {
   return (neuron0x4265470()*3.18895);
}

double NNfunction_tb_t1t1::synapse0x4285780() {
   return (neuron0x4265e40()*4.60224);
}

double NNfunction_tb_t1t1::synapse0x42857c0() {
   return (neuron0x4266810()*-4.84629);
}

double NNfunction_tb_t1t1::synapse0x4285800() {
   return (neuron0x4278e50()*-5.14985);
}

double NNfunction_tb_t1t1::synapse0x4285840() {
   return (neuron0x4279700()*-1.29739);
}

double NNfunction_tb_t1t1::synapse0x4285880() {
   return (neuron0x427a0d0()*-3.4153);
}

double NNfunction_tb_t1t1::synapse0x42858c0() {
   return (neuron0x427aaa0()*1.75327);
}

double NNfunction_tb_t1t1::synapse0x4285b20() {
   return (neuron0x4281ca0()*-3.90798);
}

double NNfunction_tb_t1t1::synapse0x4285b60() {
   return (neuron0x4282040()*-12.2699);
}

double NNfunction_tb_t1t1::synapse0x4285ba0() {
   return (neuron0x42824e0()*-5.50465);
}

double NNfunction_tb_t1t1::synapse0x4285be0() {
   return (neuron0x4283640()*12.0527);
}

double NNfunction_tb_t1t1::synapse0x4285c20() {
   return (neuron0x42847a0()*17.5779);
}

