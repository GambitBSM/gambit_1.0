#include "NNfunction_sb_dLuR.h"
#include <cmath>

double NNfunction_sb_dLuR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.4399)/15.3071;
   input1 = (in1 - -4.00375)/1151.19;
   input2 = (in2 - 651.131)/620.9;
   input3 = (in3 - -53.9105)/830.203;
   input4 = (in4 - 1073.67)/960.498;
   input5 = (in5 - 898.091)/950.833;
   input6 = (in6 - 913.975)/954.316;
   input7 = (in7 - 924.044)/936.633;
   input8 = (in8 - 913.553)/960.913;
   input9 = (in9 - 887.937)/940.622;
   input10 = (in10 - 983.487)/948.394;
   input11 = (in11 - 461.919)/509.142;
   input12 = (in12 - 718.335)/866.053;
   input13 = (in13 - 503.687)/520.688;
   input14 = (in14 - 504.18)/539.444;
   input15 = (in15 - 726.758)/826.559;
   input16 = (in16 - 534.275)/564.388;
   input17 = (in17 - 751.552)/885.878;
   input18 = (in18 - 742.774)/890.653;
   input19 = (in19 - 795.381)/874.27;
   input20 = (in20 - -3.39176)/488.147;
   input21 = (in21 - 3.7906)/1164.71;
   input22 = (in22 - 3.57521)/1206.67;
   input23 = (in23 - -190.682)/599.037;
   switch(index) {
     case 0:
         return neuron0x1840440();
     default:
         return 0.;
   }
}

double NNfunction_sb_dLuR::Value(int index, double* input) {
   input0 = (input[0] - 23.4399)/15.3071;
   input1 = (input[1] - -4.00375)/1151.19;
   input2 = (input[2] - 651.131)/620.9;
   input3 = (input[3] - -53.9105)/830.203;
   input4 = (input[4] - 1073.67)/960.498;
   input5 = (input[5] - 898.091)/950.833;
   input6 = (input[6] - 913.975)/954.316;
   input7 = (input[7] - 924.044)/936.633;
   input8 = (input[8] - 913.553)/960.913;
   input9 = (input[9] - 887.937)/940.622;
   input10 = (input[10] - 983.487)/948.394;
   input11 = (input[11] - 461.919)/509.142;
   input12 = (input[12] - 718.335)/866.053;
   input13 = (input[13] - 503.687)/520.688;
   input14 = (input[14] - 504.18)/539.444;
   input15 = (input[15] - 726.758)/826.559;
   input16 = (input[16] - 534.275)/564.388;
   input17 = (input[17] - 751.552)/885.878;
   input18 = (input[18] - 742.774)/890.653;
   input19 = (input[19] - 795.381)/874.27;
   input20 = (input[20] - -3.39176)/488.147;
   input21 = (input[21] - 3.7906)/1164.71;
   input22 = (input[22] - 3.57521)/1206.67;
   input23 = (input[23] - -190.682)/599.037;
   switch(index) {
     case 0:
         return neuron0x1840440();
     default:
         return 0.;
   }
}

double NNfunction_sb_dLuR::neuron0x180c500() {
   return input0;
}

double NNfunction_sb_dLuR::neuron0x180c840() {
   return input1;
}

double NNfunction_sb_dLuR::neuron0x180cb80() {
   return input2;
}

double NNfunction_sb_dLuR::neuron0x180cec0() {
   return input3;
}

double NNfunction_sb_dLuR::neuron0x180d200() {
   return input4;
}

double NNfunction_sb_dLuR::neuron0x180d540() {
   return input5;
}

double NNfunction_sb_dLuR::neuron0x180d880() {
   return input6;
}

double NNfunction_sb_dLuR::neuron0x180dbc0() {
   return input7;
}

double NNfunction_sb_dLuR::neuron0x180df00() {
   return input8;
}

double NNfunction_sb_dLuR::neuron0x180e240() {
   return input9;
}

double NNfunction_sb_dLuR::neuron0x180e580() {
   return input10;
}

double NNfunction_sb_dLuR::neuron0x180e8c0() {
   return input11;
}

double NNfunction_sb_dLuR::neuron0x180ec00() {
   return input12;
}

double NNfunction_sb_dLuR::neuron0x180ef40() {
   return input13;
}

double NNfunction_sb_dLuR::neuron0x180f280() {
   return input14;
}

double NNfunction_sb_dLuR::neuron0x180f5c0() {
   return input15;
}

double NNfunction_sb_dLuR::neuron0x180f900() {
   return input16;
}

double NNfunction_sb_dLuR::neuron0x180fe60() {
   return input17;
}

double NNfunction_sb_dLuR::neuron0x1810080() {
   return input18;
}

double NNfunction_sb_dLuR::neuron0x18103c0() {
   return input19;
}

double NNfunction_sb_dLuR::neuron0x1810700() {
   return input20;
}

double NNfunction_sb_dLuR::neuron0x1810a40() {
   return input21;
}

double NNfunction_sb_dLuR::neuron0x1810d80() {
   return input22;
}

double NNfunction_sb_dLuR::neuron0x18110c0() {
   return input23;
}

double NNfunction_sb_dLuR::input0x1811560() {
   double input = 1.17393;
   input += synapse0x15cc370();
   input += synapse0x180c3c0();
   input += synapse0x180c400();
   input += synapse0x1811810();
   input += synapse0x1811850();
   input += synapse0x1811890();
   input += synapse0x18118d0();
   input += synapse0x1811910();
   input += synapse0x1811950();
   input += synapse0x1811990();
   input += synapse0x18119d0();
   input += synapse0x1811a10();
   input += synapse0x1811a50();
   input += synapse0x1811a90();
   input += synapse0x1811ad0();
   input += synapse0x1811b10();
   input += synapse0x180c330();
   input += synapse0x180c370();
   input += synapse0x15bdc70();
   input += synapse0x15bdcb0();
   input += synapse0x1811d70();
   input += synapse0x1811db0();
   input += synapse0x1811df0();
   input += synapse0x1811e30();
   return input;
}

double NNfunction_sb_dLuR::neuron0x1811560() {
   double input = input0x1811560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x1811e70() {
   double input = -0.304804;
   input += synapse0x18121b0();
   input += synapse0x18121f0();
   input += synapse0x1812230();
   input += synapse0x1812270();
   input += synapse0x18122b0();
   input += synapse0x18122f0();
   input += synapse0x1812330();
   input += synapse0x1812370();
   input += synapse0x18123b0();
   input += synapse0x1811c60();
   input += synapse0x1811ca0();
   input += synapse0x1811ce0();
   input += synapse0x1811d20();
   input += synapse0x1812600();
   input += synapse0x1812640();
   input += synapse0x1812680();
   input += synapse0x1812000();
   input += synapse0x1812040();
   input += synapse0x18127d0();
   input += synapse0x1812810();
   input += synapse0x1812850();
   input += synapse0x1812890();
   input += synapse0x18128d0();
   input += synapse0x1812910();
   return input;
}

double NNfunction_sb_dLuR::neuron0x1811e70() {
   double input = input0x1811e70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x1812950() {
   double input = 0.749947;
   input += synapse0x1812c90();
   input += synapse0x1812cd0();
   input += synapse0x1812d10();
   input += synapse0x1812d50();
   input += synapse0x1812d90();
   input += synapse0x1812dd0();
   input += synapse0x1812e10();
   input += synapse0x1812e50();
   input += synapse0x1812e90();
   input += synapse0x1812ed0();
   input += synapse0x1812f10();
   input += synapse0x1812f50();
   input += synapse0x1812f90();
   input += synapse0x1812fd0();
   input += synapse0x1813010();
   input += synapse0x1813050();
   input += synapse0x1812ae0();
   input += synapse0x1812b20();
   input += synapse0x15cba60();
   input += synapse0x15cbaa0();
   input += synapse0x17fb590();
   input += synapse0x17fb5d0();
   input += synapse0x17fb610();
   input += synapse0x180c440();
   return input;
}

double NNfunction_sb_dLuR::neuron0x1812950() {
   double input = input0x1812950();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x15cc1e0() {
   double input = 0.754245;
   input += synapse0x18125a0();
   input += synapse0x180c480();
   input += synapse0x180c4c0();
   input += synapse0x18131a0();
   input += synapse0x18131e0();
   input += synapse0x1813220();
   input += synapse0x1813260();
   input += synapse0x18132a0();
   input += synapse0x18132e0();
   input += synapse0x1813320();
   input += synapse0x1813360();
   input += synapse0x18133a0();
   input += synapse0x18133e0();
   input += synapse0x1813420();
   input += synapse0x1813460();
   input += synapse0x18134a0();
   input += synapse0x18123f0();
   input += synapse0x1812430();
   input += synapse0x18135f0();
   input += synapse0x1813630();
   input += synapse0x1813670();
   input += synapse0x18136b0();
   input += synapse0x18136f0();
   input += synapse0x1813730();
   return input;
}

double NNfunction_sb_dLuR::neuron0x15cc1e0() {
   double input = input0x15cc1e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x1813770() {
   double input = -0.736185;
   input += synapse0x1813ab0();
   input += synapse0x1813af0();
   input += synapse0x1813b30();
   input += synapse0x1813b70();
   input += synapse0x1813bb0();
   input += synapse0x1813bf0();
   input += synapse0x1813c30();
   input += synapse0x1813c70();
   input += synapse0x1813cb0();
   input += synapse0x1813cf0();
   input += synapse0x1813d30();
   input += synapse0x1813d70();
   input += synapse0x1813db0();
   input += synapse0x1813df0();
   input += synapse0x1813e30();
   input += synapse0x1813e70();
   input += synapse0x1813900();
   input += synapse0x1813940();
   input += synapse0x1813fc0();
   input += synapse0x1814000();
   input += synapse0x1814040();
   input += synapse0x1814080();
   input += synapse0x18140c0();
   input += synapse0x1814100();
   return input;
}

double NNfunction_sb_dLuR::neuron0x1813770() {
   double input = input0x1813770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x1814140() {
   double input = 0.343259;
   input += synapse0x1814480();
   input += synapse0x18144c0();
   input += synapse0x1814500();
   input += synapse0x1814540();
   input += synapse0x1814580();
   input += synapse0x18145c0();
   input += synapse0x1814600();
   input += synapse0x1814640();
   input += synapse0x1814680();
   input += synapse0x15cbdd0();
   input += synapse0x15cbe10();
   input += synapse0x15cbe50();
   input += synapse0x15cbe90();
   input += synapse0x15cbed0();
   input += synapse0x15cbf10();
   input += synapse0x15cbf50();
   input += synapse0x18142d0();
   input += synapse0x1814310();
   input += synapse0x15cc0a0();
   input += synapse0x15cc0e0();
   input += synapse0x15cc120();
   input += synapse0x15cc160();
   input += synapse0x15cc1a0();
   input += synapse0x1814ed0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x1814140() {
   double input = input0x1814140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x1814f10() {
   double input = -0.208452;
   input += synapse0x1815250();
   input += synapse0x1815290();
   input += synapse0x18152d0();
   input += synapse0x1815310();
   input += synapse0x1815350();
   input += synapse0x1815390();
   input += synapse0x18153d0();
   input += synapse0x1815410();
   input += synapse0x1815450();
   input += synapse0x1815490();
   input += synapse0x18154d0();
   input += synapse0x1815510();
   input += synapse0x1815550();
   input += synapse0x1815590();
   input += synapse0x18155d0();
   input += synapse0x1815610();
   input += synapse0x18150a0();
   input += synapse0x18150e0();
   input += synapse0x1815760();
   input += synapse0x18157a0();
   input += synapse0x18157e0();
   input += synapse0x1815820();
   input += synapse0x1815860();
   input += synapse0x18158a0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x1814f10() {
   double input = input0x1814f10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x18158e0() {
   double input = 0.952728;
   input += synapse0x1815c20();
   input += synapse0x1815c60();
   input += synapse0x1815ca0();
   input += synapse0x1815ce0();
   input += synapse0x1815d20();
   input += synapse0x1815d60();
   input += synapse0x1815da0();
   input += synapse0x1815de0();
   input += synapse0x1815e20();
   input += synapse0x1815e60();
   input += synapse0x1815ea0();
   input += synapse0x1815ee0();
   input += synapse0x1815f20();
   input += synapse0x1815f60();
   input += synapse0x1815fa0();
   input += synapse0x1815fe0();
   input += synapse0x1815a70();
   input += synapse0x1815ab0();
   input += synapse0x1816130();
   input += synapse0x1816170();
   input += synapse0x18161b0();
   input += synapse0x18161f0();
   input += synapse0x1816230();
   input += synapse0x1816270();
   return input;
}

double NNfunction_sb_dLuR::neuron0x18158e0() {
   double input = input0x18158e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x18162b0() {
   double input = 0.271858;
   input += synapse0x180fd50();
   input += synapse0x180fd90();
   input += synapse0x180fdd0();
   input += synapse0x180fe10();
   input += synapse0x1816800();
   input += synapse0x1816840();
   input += synapse0x1816880();
   input += synapse0x18168c0();
   input += synapse0x1816900();
   input += synapse0x1816940();
   input += synapse0x1816980();
   input += synapse0x18169c0();
   input += synapse0x1816a00();
   input += synapse0x1816a40();
   input += synapse0x1816a80();
   input += synapse0x1816ac0();
   input += synapse0x1816440();
   input += synapse0x1816480();
   input += synapse0x1816c10();
   input += synapse0x1816c50();
   input += synapse0x1816c90();
   input += synapse0x1816cd0();
   input += synapse0x1816d10();
   input += synapse0x1816d50();
   return input;
}

double NNfunction_sb_dLuR::neuron0x18162b0() {
   double input = input0x18162b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x1816d90() {
   double input = 0.934983;
   input += synapse0x18170d0();
   input += synapse0x1817110();
   input += synapse0x1817150();
   input += synapse0x1817190();
   input += synapse0x18171d0();
   input += synapse0x1817210();
   input += synapse0x1817250();
   input += synapse0x1817290();
   input += synapse0x18172d0();
   input += synapse0x1817310();
   input += synapse0x1817350();
   input += synapse0x1817390();
   input += synapse0x18173d0();
   input += synapse0x1817410();
   input += synapse0x1817450();
   input += synapse0x1817490();
   input += synapse0x1816f20();
   input += synapse0x1816f60();
   input += synapse0x18175e0();
   input += synapse0x1817620();
   input += synapse0x1817660();
   input += synapse0x18176a0();
   input += synapse0x18176e0();
   input += synapse0x1817720();
   return input;
}

double NNfunction_sb_dLuR::neuron0x1816d90() {
   double input = input0x1816d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x1817760() {
   double input = 1.59687;
   input += synapse0x1817aa0();
   input += synapse0x1817ae0();
   input += synapse0x1817b20();
   input += synapse0x1817b60();
   input += synapse0x1817ba0();
   input += synapse0x1817be0();
   input += synapse0x1817c20();
   input += synapse0x1817c60();
   input += synapse0x1817ca0();
   input += synapse0x1817ce0();
   input += synapse0x1817d20();
   input += synapse0x1817d60();
   input += synapse0x1817da0();
   input += synapse0x1817de0();
   input += synapse0x1817e20();
   input += synapse0x1817e60();
   input += synapse0x18178f0();
   input += synapse0x1817930();
   input += synapse0x18146c0();
   input += synapse0x1814700();
   input += synapse0x1814740();
   input += synapse0x1814780();
   input += synapse0x18147c0();
   input += synapse0x1814800();
   return input;
}

double NNfunction_sb_dLuR::neuron0x1817760() {
   double input = input0x1817760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x1814840() {
   double input = 1.14227;
   input += synapse0x1814b80();
   input += synapse0x1814bc0();
   input += synapse0x1814c00();
   input += synapse0x1814c40();
   input += synapse0x1814c80();
   input += synapse0x1814cc0();
   input += synapse0x1814d00();
   input += synapse0x1814d40();
   input += synapse0x1814d80();
   input += synapse0x1814dc0();
   input += synapse0x1814e00();
   input += synapse0x1814e40();
   input += synapse0x1814e80();
   input += synapse0x1818fc0();
   input += synapse0x1819000();
   input += synapse0x1819040();
   input += synapse0x18149d0();
   input += synapse0x1814a10();
   input += synapse0x1819190();
   input += synapse0x18191d0();
   input += synapse0x1819210();
   input += synapse0x1819250();
   input += synapse0x1819290();
   input += synapse0x18192d0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x1814840() {
   double input = input0x1814840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x1819310() {
   double input = 0.634402;
   input += synapse0x1819650();
   input += synapse0x1819690();
   input += synapse0x18196d0();
   input += synapse0x1819710();
   input += synapse0x1819750();
   input += synapse0x1819790();
   input += synapse0x18197d0();
   input += synapse0x1819810();
   input += synapse0x1819850();
   input += synapse0x1819890();
   input += synapse0x18198d0();
   input += synapse0x1819910();
   input += synapse0x1819950();
   input += synapse0x1819990();
   input += synapse0x18199d0();
   input += synapse0x1819a10();
   input += synapse0x18194a0();
   input += synapse0x18194e0();
   input += synapse0x1819b60();
   input += synapse0x1819ba0();
   input += synapse0x1819be0();
   input += synapse0x1819c20();
   input += synapse0x1819c60();
   input += synapse0x1819ca0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x1819310() {
   double input = input0x1819310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x1819ce0() {
   double input = 0.0703847;
   input += synapse0x181a020();
   input += synapse0x181a060();
   input += synapse0x181a0a0();
   input += synapse0x181a0e0();
   input += synapse0x181a120();
   input += synapse0x181a160();
   input += synapse0x181a1a0();
   input += synapse0x181a1e0();
   input += synapse0x181a220();
   input += synapse0x181a260();
   input += synapse0x181a2a0();
   input += synapse0x181a2e0();
   input += synapse0x181a320();
   input += synapse0x181a360();
   input += synapse0x181a3a0();
   input += synapse0x181a3e0();
   input += synapse0x1819e70();
   input += synapse0x1819eb0();
   input += synapse0x181a530();
   input += synapse0x181a570();
   input += synapse0x181a5b0();
   input += synapse0x181a5f0();
   input += synapse0x181a630();
   input += synapse0x181a670();
   return input;
}

double NNfunction_sb_dLuR::neuron0x1819ce0() {
   double input = input0x1819ce0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x181a6b0() {
   double input = -1.69203;
   input += synapse0x181a9f0();
   input += synapse0x181aa30();
   input += synapse0x181aa70();
   input += synapse0x181aab0();
   input += synapse0x181aaf0();
   input += synapse0x181ab30();
   input += synapse0x181ab70();
   input += synapse0x181abb0();
   input += synapse0x181abf0();
   input += synapse0x181ac30();
   input += synapse0x181ac70();
   input += synapse0x181acb0();
   input += synapse0x181acf0();
   input += synapse0x181ad30();
   input += synapse0x181ad70();
   input += synapse0x181adb0();
   input += synapse0x181a840();
   input += synapse0x181a880();
   input += synapse0x181af00();
   input += synapse0x181af40();
   input += synapse0x181af80();
   input += synapse0x181afc0();
   input += synapse0x181b000();
   input += synapse0x181b040();
   return input;
}

double NNfunction_sb_dLuR::neuron0x181a6b0() {
   double input = input0x181a6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x181b080() {
   double input = -0.17894;
   input += synapse0x181b3c0();
   input += synapse0x180c720();
   input += synapse0x180c760();
   input += synapse0x180ca60();
   input += synapse0x180caa0();
   input += synapse0x180cda0();
   input += synapse0x180cde0();
   input += synapse0x180d0e0();
   input += synapse0x180d120();
   input += synapse0x180d420();
   input += synapse0x180d460();
   input += synapse0x180d760();
   input += synapse0x180d7a0();
   input += synapse0x180daa0();
   input += synapse0x180dae0();
   input += synapse0x180dde0();
   input += synapse0x180de20();
   input += synapse0x180e120();
   input += synapse0x180e160();
   input += synapse0x180e460();
   input += synapse0x180e4a0();
   input += synapse0x180e7a0();
   input += synapse0x180e7e0();
   input += synapse0x180eae0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x181b080() {
   double input = input0x181b080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x181ce90() {
   double input = 1.22843;
   input += synapse0x180eb20();
   input += synapse0x180f7e0();
   input += synapse0x180f820();
   input += synapse0x181b210();
   input += synapse0x181b250();
   input += synapse0x180fb20();
   input += synapse0x180fb60();
   input += synapse0x15bdb50();
   input += synapse0x15bdb90();
   input += synapse0x18102a0();
   input += synapse0x18102e0();
   input += synapse0x18105e0();
   input += synapse0x1810620();
   input += synapse0x1810920();
   input += synapse0x1810960();
   input += synapse0x1810c60();
   input += synapse0x1810ca0();
   input += synapse0x1810fa0();
   input += synapse0x1810fe0();
   input += synapse0x18112e0();
   input += synapse0x1811320();
   input += synapse0x180ee20();
   input += synapse0x180ee60();
   input += synapse0x181d130();
   return input;
}

double NNfunction_sb_dLuR::neuron0x181ce90() {
   double input = input0x181ce90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x181d170() {
   double input = 0.850974;
   input += synapse0x181d4b0();
   input += synapse0x181d4f0();
   input += synapse0x181d530();
   input += synapse0x181d570();
   input += synapse0x181d5b0();
   input += synapse0x181d5f0();
   input += synapse0x181d630();
   input += synapse0x181d670();
   input += synapse0x181d6b0();
   input += synapse0x181d6f0();
   input += synapse0x181d730();
   input += synapse0x181d770();
   input += synapse0x181d7b0();
   input += synapse0x181d7f0();
   input += synapse0x181d830();
   input += synapse0x181d870();
   input += synapse0x181d300();
   input += synapse0x181d340();
   input += synapse0x181d9c0();
   input += synapse0x181da00();
   input += synapse0x181da40();
   input += synapse0x181da80();
   input += synapse0x181dac0();
   input += synapse0x181db00();
   return input;
}

double NNfunction_sb_dLuR::neuron0x181d170() {
   double input = input0x181d170();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x181db40() {
   double input = 1.37994;
   input += synapse0x181de80();
   input += synapse0x181dec0();
   input += synapse0x181df00();
   input += synapse0x181df40();
   input += synapse0x181df80();
   input += synapse0x181dfc0();
   input += synapse0x181e000();
   input += synapse0x181e040();
   input += synapse0x181e080();
   input += synapse0x181e0c0();
   input += synapse0x181e100();
   input += synapse0x181e140();
   input += synapse0x181e180();
   input += synapse0x181e1c0();
   input += synapse0x181e200();
   input += synapse0x181e240();
   input += synapse0x181dcd0();
   input += synapse0x181dd10();
   input += synapse0x181e390();
   input += synapse0x181e3d0();
   input += synapse0x181e410();
   input += synapse0x181e450();
   input += synapse0x181e490();
   input += synapse0x181e4d0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x181db40() {
   double input = input0x181db40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x181e510() {
   double input = 0.219252;
   input += synapse0x181e850();
   input += synapse0x181e890();
   input += synapse0x181e8d0();
   input += synapse0x181e910();
   input += synapse0x181e950();
   input += synapse0x181e990();
   input += synapse0x181e9d0();
   input += synapse0x181ea10();
   input += synapse0x181ea50();
   input += synapse0x181ea90();
   input += synapse0x181ead0();
   input += synapse0x181eb10();
   input += synapse0x181eb50();
   input += synapse0x181eb90();
   input += synapse0x181ebd0();
   input += synapse0x181ec10();
   input += synapse0x181e6a0();
   input += synapse0x181e6e0();
   input += synapse0x181ed60();
   input += synapse0x181eda0();
   input += synapse0x181ede0();
   input += synapse0x181ee20();
   input += synapse0x181ee60();
   input += synapse0x181eea0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x181e510() {
   double input = input0x181e510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x181eee0() {
   double input = -0.74879;
   input += synapse0x181f220();
   input += synapse0x181f260();
   input += synapse0x181f2a0();
   input += synapse0x181f2e0();
   input += synapse0x181f320();
   input += synapse0x181f360();
   input += synapse0x181f3a0();
   input += synapse0x181f3e0();
   input += synapse0x181f420();
   input += synapse0x181f460();
   input += synapse0x181f4a0();
   input += synapse0x181f4e0();
   input += synapse0x181f520();
   input += synapse0x181f560();
   input += synapse0x181f5a0();
   input += synapse0x181f5e0();
   input += synapse0x181f070();
   input += synapse0x181f0b0();
   input += synapse0x181f730();
   input += synapse0x181f770();
   input += synapse0x181f7b0();
   input += synapse0x181f7f0();
   input += synapse0x181f830();
   input += synapse0x181f870();
   return input;
}

double NNfunction_sb_dLuR::neuron0x181eee0() {
   double input = input0x181eee0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x181f8b0() {
   double input = 1.00003;
   input += synapse0x181fbf0();
   input += synapse0x181fc30();
   input += synapse0x181fc70();
   input += synapse0x181fcb0();
   input += synapse0x181fcf0();
   input += synapse0x181fd30();
   input += synapse0x181fd70();
   input += synapse0x181fdb0();
   input += synapse0x181fdf0();
   input += synapse0x1817fb0();
   input += synapse0x1817ff0();
   input += synapse0x1818030();
   input += synapse0x1818070();
   input += synapse0x18180b0();
   input += synapse0x18180f0();
   input += synapse0x1818130();
   input += synapse0x181fa40();
   input += synapse0x181fa80();
   input += synapse0x1818280();
   input += synapse0x18182c0();
   input += synapse0x1818300();
   input += synapse0x1818340();
   input += synapse0x1818380();
   input += synapse0x18183c0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x181f8b0() {
   double input = input0x181f8b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x1818400() {
   double input = 1.33032;
   input += synapse0x1818740();
   input += synapse0x1818780();
   input += synapse0x18187c0();
   input += synapse0x1818800();
   input += synapse0x1818840();
   input += synapse0x1818880();
   input += synapse0x18188c0();
   input += synapse0x1818900();
   input += synapse0x1818940();
   input += synapse0x1818980();
   input += synapse0x18189c0();
   input += synapse0x1818a00();
   input += synapse0x1818a40();
   input += synapse0x1818a80();
   input += synapse0x1818ac0();
   input += synapse0x1818b00();
   input += synapse0x1818590();
   input += synapse0x18185d0();
   input += synapse0x1818c50();
   input += synapse0x1818c90();
   input += synapse0x1818cd0();
   input += synapse0x1818d10();
   input += synapse0x1818d50();
   input += synapse0x1818d90();
   return input;
}

double NNfunction_sb_dLuR::neuron0x1818400() {
   double input = input0x1818400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x1818dd0() {
   double input = -1.13206;
   input += synapse0x1818f60();
   input += synapse0x1821ff0();
   input += synapse0x1822030();
   input += synapse0x1822070();
   input += synapse0x18220b0();
   input += synapse0x18220f0();
   input += synapse0x1822130();
   input += synapse0x1822170();
   input += synapse0x18221b0();
   input += synapse0x18221f0();
   input += synapse0x1822230();
   input += synapse0x1822270();
   input += synapse0x18222b0();
   input += synapse0x18222f0();
   input += synapse0x1822330();
   input += synapse0x1822370();
   input += synapse0x1821e40();
   input += synapse0x1821e80();
   input += synapse0x18224c0();
   input += synapse0x1822500();
   input += synapse0x1822540();
   input += synapse0x1822580();
   input += synapse0x18225c0();
   input += synapse0x1822600();
   return input;
}

double NNfunction_sb_dLuR::neuron0x1818dd0() {
   double input = input0x1818dd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x1822640() {
   double input = 1.3486;
   input += synapse0x1822980();
   input += synapse0x18229c0();
   input += synapse0x1822a00();
   input += synapse0x1822a40();
   input += synapse0x1822a80();
   input += synapse0x1822ac0();
   input += synapse0x1822b00();
   input += synapse0x1822b40();
   input += synapse0x1822b80();
   input += synapse0x1822bc0();
   input += synapse0x1822c00();
   input += synapse0x1822c40();
   input += synapse0x1822c80();
   input += synapse0x1822cc0();
   input += synapse0x1822d00();
   input += synapse0x1822d40();
   input += synapse0x18227d0();
   input += synapse0x1822810();
   input += synapse0x1822e90();
   input += synapse0x1822ed0();
   input += synapse0x1822f10();
   input += synapse0x1822f50();
   input += synapse0x1822f90();
   input += synapse0x1822fd0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x1822640() {
   double input = input0x1822640();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x1823010() {
   double input = -1.39241;
   input += synapse0x1823350();
   input += synapse0x1823390();
   input += synapse0x18233d0();
   input += synapse0x1823410();
   input += synapse0x1823450();
   input += synapse0x1823490();
   input += synapse0x18234d0();
   input += synapse0x1823510();
   input += synapse0x1823550();
   input += synapse0x1823590();
   input += synapse0x18235d0();
   input += synapse0x1823610();
   input += synapse0x1823650();
   input += synapse0x1823690();
   input += synapse0x18236d0();
   input += synapse0x1823710();
   input += synapse0x18231a0();
   input += synapse0x18231e0();
   input += synapse0x1823860();
   input += synapse0x18238a0();
   input += synapse0x18238e0();
   input += synapse0x1823920();
   input += synapse0x1823960();
   input += synapse0x18239a0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x1823010() {
   double input = input0x1823010();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x18239e0() {
   double input = 0.803688;
   input += synapse0x1823d20();
   input += synapse0x1823d60();
   input += synapse0x1823da0();
   input += synapse0x1823de0();
   input += synapse0x1823e20();
   input += synapse0x1823e60();
   input += synapse0x1823ea0();
   input += synapse0x1823ee0();
   input += synapse0x1823f20();
   input += synapse0x1823f60();
   input += synapse0x1823fa0();
   input += synapse0x1823fe0();
   input += synapse0x1824020();
   input += synapse0x1824060();
   input += synapse0x18240a0();
   input += synapse0x18240e0();
   input += synapse0x1823b70();
   input += synapse0x1823bb0();
   input += synapse0x1824230();
   input += synapse0x1824270();
   input += synapse0x18242b0();
   input += synapse0x18242f0();
   input += synapse0x1824330();
   input += synapse0x1824370();
   return input;
}

double NNfunction_sb_dLuR::neuron0x18239e0() {
   double input = input0x18239e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x18243b0() {
   double input = -0.0877757;
   input += synapse0x18246f0();
   input += synapse0x1824730();
   input += synapse0x1824770();
   input += synapse0x18247b0();
   input += synapse0x18247f0();
   input += synapse0x1824830();
   input += synapse0x1824870();
   input += synapse0x18248b0();
   input += synapse0x18248f0();
   input += synapse0x1824930();
   input += synapse0x1824970();
   input += synapse0x18249b0();
   input += synapse0x18249f0();
   input += synapse0x1824a30();
   input += synapse0x1824a70();
   input += synapse0x1824ab0();
   input += synapse0x1824540();
   input += synapse0x1824580();
   input += synapse0x1824c00();
   input += synapse0x1824c40();
   input += synapse0x1824c80();
   input += synapse0x1824cc0();
   input += synapse0x1824d00();
   input += synapse0x1824d40();
   return input;
}

double NNfunction_sb_dLuR::neuron0x18243b0() {
   double input = input0x18243b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x1824d80() {
   double input = -0.272323;
   input += synapse0x18250c0();
   input += synapse0x1825100();
   input += synapse0x1825140();
   input += synapse0x1825180();
   input += synapse0x18251c0();
   input += synapse0x1825200();
   input += synapse0x1825240();
   input += synapse0x1825280();
   input += synapse0x18252c0();
   input += synapse0x1825300();
   input += synapse0x1825340();
   input += synapse0x1825380();
   input += synapse0x18253c0();
   input += synapse0x1825400();
   input += synapse0x1825440();
   input += synapse0x1825480();
   input += synapse0x1824f10();
   input += synapse0x1824f50();
   input += synapse0x18255d0();
   input += synapse0x1825610();
   input += synapse0x1825650();
   input += synapse0x1825690();
   input += synapse0x18256d0();
   input += synapse0x1825710();
   return input;
}

double NNfunction_sb_dLuR::neuron0x1824d80() {
   double input = input0x1824d80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x1825750() {
   double input = -0.492918;
   input += synapse0x1825a90();
   input += synapse0x1825ad0();
   input += synapse0x1825b10();
   input += synapse0x1825b50();
   input += synapse0x1825b90();
   input += synapse0x1825bd0();
   input += synapse0x1825c10();
   input += synapse0x1825c50();
   input += synapse0x1825c90();
   input += synapse0x1825cd0();
   input += synapse0x1825d10();
   input += synapse0x1825d50();
   input += synapse0x1825d90();
   input += synapse0x1825dd0();
   input += synapse0x1825e10();
   input += synapse0x1825e50();
   input += synapse0x18258e0();
   input += synapse0x1825920();
   input += synapse0x1825fa0();
   input += synapse0x1825fe0();
   input += synapse0x1826020();
   input += synapse0x1826060();
   input += synapse0x18260a0();
   input += synapse0x18260e0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x1825750() {
   double input = input0x1825750();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x1826120() {
   double input = 1.55896;
   input += synapse0x1826460();
   input += synapse0x18264a0();
   input += synapse0x18264e0();
   input += synapse0x1826520();
   input += synapse0x1826560();
   input += synapse0x18265a0();
   input += synapse0x18265e0();
   input += synapse0x1826620();
   input += synapse0x1826660();
   input += synapse0x18266a0();
   input += synapse0x18266e0();
   input += synapse0x1826720();
   input += synapse0x1826760();
   input += synapse0x18267a0();
   input += synapse0x18267e0();
   input += synapse0x1826820();
   input += synapse0x18262b0();
   input += synapse0x18262f0();
   input += synapse0x1826970();
   input += synapse0x18269b0();
   input += synapse0x18269f0();
   input += synapse0x1826a30();
   input += synapse0x1826a70();
   input += synapse0x1826ab0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x1826120() {
   double input = input0x1826120();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x1826af0() {
   double input = 0.147709;
   input += synapse0x1826e30();
   input += synapse0x181b400();
   input += synapse0x181b440();
   input += synapse0x181b480();
   input += synapse0x181b6d0();
   input += synapse0x181b710();
   input += synapse0x181b750();
   input += synapse0x181b9a0();
   input += synapse0x181b9e0();
   input += synapse0x181bc30();
   input += synapse0x181bc70();
   input += synapse0x181bcb0();
   input += synapse0x181bf00();
   input += synapse0x181bf40();
   input += synapse0x181c190();
   input += synapse0x181c1d0();
   input += synapse0x1826c80();
   input += synapse0x1826cc0();
   input += synapse0x181c320();
   input += synapse0x181c830();
   input += synapse0x181c870();
   input += synapse0x181c8b0();
   input += synapse0x181cb00();
   input += synapse0x181cb40();
   return input;
}

double NNfunction_sb_dLuR::neuron0x1826af0() {
   double input = input0x1826af0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x181cb80() {
   double input = -0.95508;
   input += synapse0x181c3f0();
   input += synapse0x181c430();
   input += synapse0x181c470();
   input += synapse0x181c4b0();
   input += synapse0x181ce30();
   input += synapse0x1829180();
   input += synapse0x18291c0();
   input += synapse0x1829200();
   input += synapse0x1829240();
   input += synapse0x1829280();
   input += synapse0x18292c0();
   input += synapse0x1829300();
   input += synapse0x1829340();
   input += synapse0x1829380();
   input += synapse0x18293c0();
   input += synapse0x1829400();
   input += synapse0x181cd10();
   input += synapse0x181cd50();
   input += synapse0x1829550();
   input += synapse0x1829590();
   input += synapse0x18295d0();
   input += synapse0x1829610();
   input += synapse0x1829650();
   input += synapse0x1829690();
   return input;
}

double NNfunction_sb_dLuR::neuron0x181cb80() {
   double input = input0x181cb80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x18296d0() {
   double input = 0.0592746;
   input += synapse0x1829a10();
   input += synapse0x1829a50();
   input += synapse0x1829a90();
   input += synapse0x1829ad0();
   input += synapse0x1829b10();
   input += synapse0x1829b50();
   input += synapse0x1829b90();
   input += synapse0x1829bd0();
   input += synapse0x1829c10();
   input += synapse0x1829c50();
   input += synapse0x1829c90();
   input += synapse0x1829cd0();
   input += synapse0x1829d10();
   input += synapse0x1829d50();
   input += synapse0x1829d90();
   input += synapse0x1829dd0();
   input += synapse0x1829860();
   input += synapse0x18298a0();
   input += synapse0x1829f20();
   input += synapse0x1829f60();
   input += synapse0x1829fa0();
   input += synapse0x1829fe0();
   input += synapse0x182a020();
   input += synapse0x182a060();
   return input;
}

double NNfunction_sb_dLuR::neuron0x18296d0() {
   double input = input0x18296d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x182a0a0() {
   double input = 0.739914;
   input += synapse0x182a3e0();
   input += synapse0x182a420();
   input += synapse0x182a460();
   input += synapse0x182a4a0();
   input += synapse0x182a4e0();
   input += synapse0x182a520();
   input += synapse0x182a560();
   input += synapse0x182a5a0();
   input += synapse0x182a5e0();
   input += synapse0x182a620();
   input += synapse0x182a660();
   input += synapse0x182a6a0();
   input += synapse0x182a6e0();
   input += synapse0x182a720();
   input += synapse0x182a760();
   input += synapse0x182a7a0();
   input += synapse0x182a230();
   input += synapse0x182a270();
   input += synapse0x182a8f0();
   input += synapse0x182a930();
   input += synapse0x182a970();
   input += synapse0x182a9b0();
   input += synapse0x182a9f0();
   input += synapse0x182aa30();
   return input;
}

double NNfunction_sb_dLuR::neuron0x182a0a0() {
   double input = input0x182a0a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x182aa70() {
   double input = -0.888207;
   input += synapse0x182adb0();
   input += synapse0x182adf0();
   input += synapse0x182ae30();
   input += synapse0x182ae70();
   input += synapse0x182aeb0();
   input += synapse0x182aef0();
   input += synapse0x182af30();
   input += synapse0x182af70();
   input += synapse0x182afb0();
   input += synapse0x182aff0();
   input += synapse0x182b030();
   input += synapse0x182b070();
   input += synapse0x182b0b0();
   input += synapse0x182b0f0();
   input += synapse0x182b130();
   input += synapse0x182b170();
   input += synapse0x182ac00();
   input += synapse0x182ac40();
   input += synapse0x182b2c0();
   input += synapse0x182b300();
   input += synapse0x182b340();
   input += synapse0x182b380();
   input += synapse0x182b3c0();
   input += synapse0x182b400();
   return input;
}

double NNfunction_sb_dLuR::neuron0x182aa70() {
   double input = input0x182aa70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x182b440() {
   double input = 0.271572;
   input += synapse0x182b780();
   input += synapse0x182b7c0();
   input += synapse0x182b800();
   input += synapse0x182b840();
   input += synapse0x182b880();
   input += synapse0x182b8c0();
   input += synapse0x182b900();
   input += synapse0x182b940();
   input += synapse0x182b980();
   input += synapse0x182b9c0();
   input += synapse0x182ba00();
   input += synapse0x182ba40();
   input += synapse0x182ba80();
   input += synapse0x182bac0();
   input += synapse0x182bb00();
   input += synapse0x182bb40();
   input += synapse0x182b5d0();
   input += synapse0x182b610();
   input += synapse0x182bc90();
   input += synapse0x182bcd0();
   input += synapse0x182bd10();
   input += synapse0x182bd50();
   input += synapse0x182bd90();
   input += synapse0x182bdd0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x182b440() {
   double input = input0x182b440();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x182be10() {
   double input = -1.01461;
   input += synapse0x182c150();
   input += synapse0x182c190();
   input += synapse0x182c1d0();
   input += synapse0x182c210();
   input += synapse0x182c250();
   input += synapse0x182c290();
   input += synapse0x182c2d0();
   input += synapse0x182c310();
   input += synapse0x182c350();
   input += synapse0x182c390();
   input += synapse0x182c3d0();
   input += synapse0x182c410();
   input += synapse0x182c450();
   input += synapse0x182c490();
   input += synapse0x182c4d0();
   input += synapse0x182c510();
   input += synapse0x182bfa0();
   input += synapse0x182bfe0();
   input += synapse0x182c660();
   input += synapse0x182c6a0();
   input += synapse0x182c6e0();
   input += synapse0x182c720();
   input += synapse0x182c760();
   input += synapse0x182c7a0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x182be10() {
   double input = input0x182be10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x182c7e0() {
   double input = 0.38754;
   input += synapse0x182cb20();
   input += synapse0x182cb60();
   input += synapse0x182cba0();
   input += synapse0x182cbe0();
   input += synapse0x182cc20();
   input += synapse0x182cc60();
   input += synapse0x182cca0();
   input += synapse0x182cce0();
   input += synapse0x182cd20();
   input += synapse0x182cd60();
   input += synapse0x182cda0();
   input += synapse0x182cde0();
   input += synapse0x182ce20();
   input += synapse0x182ce60();
   input += synapse0x182cea0();
   input += synapse0x182cee0();
   input += synapse0x182c970();
   input += synapse0x182c9b0();
   input += synapse0x182d030();
   input += synapse0x182d070();
   input += synapse0x182d0b0();
   input += synapse0x182d0f0();
   input += synapse0x182d130();
   input += synapse0x182d170();
   return input;
}

double NNfunction_sb_dLuR::neuron0x182c7e0() {
   double input = input0x182c7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x182d1b0() {
   double input = 2.50962;
   input += synapse0x182d4f0();
   input += synapse0x182d530();
   input += synapse0x182d570();
   input += synapse0x182d5b0();
   input += synapse0x182d5f0();
   input += synapse0x182d630();
   input += synapse0x182d670();
   input += synapse0x182d6b0();
   input += synapse0x182d6f0();
   input += synapse0x182d730();
   input += synapse0x182d770();
   input += synapse0x182d7b0();
   input += synapse0x182d7f0();
   input += synapse0x182d830();
   input += synapse0x182d870();
   input += synapse0x182d8b0();
   input += synapse0x182d340();
   input += synapse0x182d380();
   input += synapse0x182da00();
   input += synapse0x182da40();
   input += synapse0x182da80();
   input += synapse0x182dac0();
   input += synapse0x182db00();
   input += synapse0x182db40();
   return input;
}

double NNfunction_sb_dLuR::neuron0x182d1b0() {
   double input = input0x182d1b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x182db80() {
   double input = 0.784788;
   input += synapse0x18165f0();
   input += synapse0x1816630();
   input += synapse0x1816670();
   input += synapse0x18166b0();
   input += synapse0x18166f0();
   input += synapse0x1816730();
   input += synapse0x1816770();
   input += synapse0x18167b0();
   input += synapse0x182e2d0();
   input += synapse0x182e310();
   input += synapse0x182e350();
   input += synapse0x182e390();
   input += synapse0x182e3d0();
   input += synapse0x182e410();
   input += synapse0x182e450();
   input += synapse0x182e490();
   input += synapse0x182dd10();
   input += synapse0x182dd50();
   input += synapse0x182e5e0();
   input += synapse0x182e620();
   input += synapse0x182e660();
   input += synapse0x182e6a0();
   input += synapse0x182e6e0();
   input += synapse0x182e720();
   return input;
}

double NNfunction_sb_dLuR::neuron0x182db80() {
   double input = input0x182db80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x182e760() {
   double input = 0.0728745;
   input += synapse0x182eaa0();
   input += synapse0x182eae0();
   input += synapse0x182eb20();
   input += synapse0x182eb60();
   input += synapse0x182eba0();
   input += synapse0x182ebe0();
   input += synapse0x182ec20();
   input += synapse0x182ec60();
   input += synapse0x182eca0();
   input += synapse0x182ece0();
   input += synapse0x182ed20();
   input += synapse0x182ed60();
   input += synapse0x182eda0();
   input += synapse0x182ede0();
   input += synapse0x182ee20();
   input += synapse0x182ee60();
   input += synapse0x182e8f0();
   input += synapse0x182e930();
   input += synapse0x182efb0();
   input += synapse0x182eff0();
   input += synapse0x182f030();
   input += synapse0x182f070();
   input += synapse0x182f0b0();
   input += synapse0x182f0f0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x182e760() {
   double input = input0x182e760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x182f130() {
   double input = 1.1755;
   input += synapse0x182f470();
   input += synapse0x182f4b0();
   input += synapse0x182f4f0();
   input += synapse0x182f530();
   input += synapse0x182f570();
   input += synapse0x182f5b0();
   input += synapse0x182f5f0();
   input += synapse0x182f630();
   input += synapse0x182f670();
   input += synapse0x182f6b0();
   input += synapse0x182f6f0();
   input += synapse0x182f730();
   input += synapse0x182f770();
   input += synapse0x182f7b0();
   input += synapse0x182f7f0();
   input += synapse0x182f830();
   input += synapse0x182f2c0();
   input += synapse0x182f300();
   input += synapse0x181fe30();
   input += synapse0x181fe70();
   input += synapse0x181feb0();
   input += synapse0x181fef0();
   input += synapse0x181ff30();
   input += synapse0x181ff70();
   return input;
}

double NNfunction_sb_dLuR::neuron0x182f130() {
   double input = input0x182f130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x181ffb0() {
   double input = 0.401052;
   input += synapse0x18202f0();
   input += synapse0x1820330();
   input += synapse0x1820370();
   input += synapse0x18203b0();
   input += synapse0x18203f0();
   input += synapse0x1820430();
   input += synapse0x1820470();
   input += synapse0x18204b0();
   input += synapse0x18204f0();
   input += synapse0x1820530();
   input += synapse0x1820570();
   input += synapse0x18205b0();
   input += synapse0x18205f0();
   input += synapse0x1820630();
   input += synapse0x1820670();
   input += synapse0x18206b0();
   input += synapse0x1820140();
   input += synapse0x1820180();
   input += synapse0x1820800();
   input += synapse0x1820840();
   input += synapse0x1820880();
   input += synapse0x18208c0();
   input += synapse0x1820900();
   input += synapse0x1820940();
   return input;
}

double NNfunction_sb_dLuR::neuron0x181ffb0() {
   double input = input0x181ffb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x1820980() {
   double input = -0.684546;
   input += synapse0x1820cc0();
   input += synapse0x1820d00();
   input += synapse0x1820d40();
   input += synapse0x1820d80();
   input += synapse0x1820dc0();
   input += synapse0x1820e00();
   input += synapse0x1820e40();
   input += synapse0x1820e80();
   input += synapse0x1820ec0();
   input += synapse0x1820f00();
   input += synapse0x1820f40();
   input += synapse0x1820f80();
   input += synapse0x1820fc0();
   input += synapse0x1821000();
   input += synapse0x1821040();
   input += synapse0x1821080();
   input += synapse0x1820b10();
   input += synapse0x1820b50();
   input += synapse0x18211d0();
   input += synapse0x1821210();
   input += synapse0x1821250();
   input += synapse0x1821290();
   input += synapse0x18212d0();
   input += synapse0x1821310();
   return input;
}

double NNfunction_sb_dLuR::neuron0x1820980() {
   double input = input0x1820980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x1821350() {
   double input = -0.65023;
   input += synapse0x1821690();
   input += synapse0x18216d0();
   input += synapse0x1821710();
   input += synapse0x1821750();
   input += synapse0x1821790();
   input += synapse0x18217d0();
   input += synapse0x1821810();
   input += synapse0x1821850();
   input += synapse0x1821890();
   input += synapse0x18218d0();
   input += synapse0x1821910();
   input += synapse0x1821950();
   input += synapse0x1821990();
   input += synapse0x18219d0();
   input += synapse0x1821a10();
   input += synapse0x1821a50();
   input += synapse0x18214e0();
   input += synapse0x1821520();
   input += synapse0x1821ba0();
   input += synapse0x1821be0();
   input += synapse0x1821c20();
   input += synapse0x1821c60();
   input += synapse0x1821ca0();
   input += synapse0x1821ce0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x1821350() {
   double input = input0x1821350();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x1833990() {
   double input = -1.42965;
   input += synapse0x1833bb0();
   input += synapse0x1833bf0();
   input += synapse0x1833c30();
   input += synapse0x1833c70();
   input += synapse0x1833cb0();
   input += synapse0x1833cf0();
   input += synapse0x1833d30();
   input += synapse0x1833d70();
   input += synapse0x1833db0();
   input += synapse0x1833df0();
   input += synapse0x1833e30();
   input += synapse0x1833e70();
   input += synapse0x1833eb0();
   input += synapse0x1833ef0();
   input += synapse0x1833f30();
   input += synapse0x1833f70();
   input += synapse0x1821d20();
   input += synapse0x1821d60();
   input += synapse0x18340c0();
   input += synapse0x1834100();
   input += synapse0x1834140();
   input += synapse0x1834180();
   input += synapse0x18341c0();
   input += synapse0x1834200();
   return input;
}

double NNfunction_sb_dLuR::neuron0x1833990() {
   double input = input0x1833990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x1834240() {
   double input = -0.546622;
   input += synapse0x1834580();
   input += synapse0x18345c0();
   input += synapse0x1834600();
   input += synapse0x1834640();
   input += synapse0x1834680();
   input += synapse0x18346c0();
   input += synapse0x1834700();
   input += synapse0x1834740();
   input += synapse0x1834780();
   input += synapse0x18347c0();
   input += synapse0x1834800();
   input += synapse0x1834840();
   input += synapse0x1834880();
   input += synapse0x18348c0();
   input += synapse0x1834900();
   input += synapse0x1834940();
   input += synapse0x18343d0();
   input += synapse0x1834410();
   input += synapse0x1834a90();
   input += synapse0x1834ad0();
   input += synapse0x1834b10();
   input += synapse0x1834b50();
   input += synapse0x1834b90();
   input += synapse0x1834bd0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x1834240() {
   double input = input0x1834240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x1834c10() {
   double input = -0.539492;
   input += synapse0x1834f50();
   input += synapse0x1834f90();
   input += synapse0x1834fd0();
   input += synapse0x1835010();
   input += synapse0x1835050();
   input += synapse0x1835090();
   input += synapse0x18350d0();
   input += synapse0x1835110();
   input += synapse0x1835150();
   input += synapse0x1835190();
   input += synapse0x18351d0();
   input += synapse0x1835210();
   input += synapse0x1835250();
   input += synapse0x1835290();
   input += synapse0x18352d0();
   input += synapse0x1835310();
   input += synapse0x1834da0();
   input += synapse0x1834de0();
   input += synapse0x1835460();
   input += synapse0x18354a0();
   input += synapse0x18354e0();
   input += synapse0x1835520();
   input += synapse0x1835560();
   input += synapse0x18355a0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x1834c10() {
   double input = input0x1834c10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x18355e0() {
   double input = 0.757777;
   input += synapse0x1835920();
   input += synapse0x1835960();
   input += synapse0x18359a0();
   input += synapse0x18359e0();
   input += synapse0x1835a20();
   input += synapse0x1835a60();
   input += synapse0x1835aa0();
   input += synapse0x1835ae0();
   input += synapse0x1835b20();
   input += synapse0x1835b60();
   input += synapse0x1835ba0();
   input += synapse0x1835be0();
   input += synapse0x1835c20();
   input += synapse0x1835c60();
   input += synapse0x1835ca0();
   input += synapse0x1835ce0();
   input += synapse0x1835770();
   input += synapse0x18357b0();
   input += synapse0x1835e30();
   input += synapse0x1835e70();
   input += synapse0x1835eb0();
   input += synapse0x1835ef0();
   input += synapse0x1835f30();
   input += synapse0x1835f70();
   return input;
}

double NNfunction_sb_dLuR::neuron0x18355e0() {
   double input = input0x18355e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x183c7e0() {
   double input = 0.169119;
   input += synapse0x1812510();
   input += synapse0x1812550();
   input += synapse0x1813a20();
   input += synapse0x1813a60();
   input += synapse0x18143f0();
   input += synapse0x1814430();
   input += synapse0x18151c0();
   input += synapse0x1815200();
   input += synapse0x1815b90();
   input += synapse0x1815bd0();
   input += synapse0x1816560();
   input += synapse0x18165a0();
   input += synapse0x1817040();
   input += synapse0x1817080();
   input += synapse0x1817a10();
   input += synapse0x1817a50();
   input += synapse0x1814af0();
   input += synapse0x1814b30();
   input += synapse0x18195c0();
   input += synapse0x1819600();
   input += synapse0x1819f90();
   input += synapse0x1819fd0();
   input += synapse0x181a960();
   input += synapse0x181a9a0();
   input += synapse0x181b330();
   input += synapse0x181b370();
   input += synapse0x180f4a0();
   input += synapse0x180f4e0();
   input += synapse0x181d420();
   input += synapse0x181d460();
   input += synapse0x181ddf0();
   input += synapse0x181de30();
   input += synapse0x181e7c0();
   input += synapse0x181e800();
   input += synapse0x181f190();
   input += synapse0x181f1d0();
   input += synapse0x181fb60();
   input += synapse0x181fba0();
   input += synapse0x18186b0();
   input += synapse0x18186f0();
   input += synapse0x1821f60();
   input += synapse0x1821fa0();
   input += synapse0x18228f0();
   input += synapse0x1822930();
   input += synapse0x18232c0();
   input += synapse0x1823300();
   input += synapse0x1823c90();
   input += synapse0x1823cd0();
   input += synapse0x1824660();
   input += synapse0x18246a0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x183c7e0() {
   double input = input0x183c7e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x183cb80() {
   double input = -0.12247;
   input += synapse0x1826da0();
   input += synapse0x1826de0();
   input += synapse0x181c360();
   input += synapse0x181c3a0();
   input += synapse0x1829980();
   input += synapse0x18299c0();
   input += synapse0x182a350();
   input += synapse0x182a390();
   input += synapse0x182ad20();
   input += synapse0x182ad60();
   input += synapse0x182b6f0();
   input += synapse0x182b730();
   input += synapse0x182c0c0();
   input += synapse0x182c100();
   input += synapse0x182ca90();
   input += synapse0x182cad0();
   input += synapse0x182d460();
   input += synapse0x182d4a0();
   input += synapse0x182de30();
   input += synapse0x182de70();
   input += synapse0x182ea10();
   input += synapse0x182ea50();
   input += synapse0x182f3e0();
   input += synapse0x182f420();
   input += synapse0x1820260();
   input += synapse0x18202a0();
   input += synapse0x1820c30();
   input += synapse0x1820c70();
   input += synapse0x1821600();
   input += synapse0x1821640();
   input += synapse0x1833b20();
   input += synapse0x1833b60();
   input += synapse0x18344f0();
   input += synapse0x1834530();
   input += synapse0x1834ec0();
   input += synapse0x1834f00();
   input += synapse0x1835890();
   input += synapse0x18358d0();
   input += synapse0x1811780();
   input += synapse0x18117c0();
   input += synapse0x1825030();
   input += synapse0x1825070();
   input += synapse0x1835fb0();
   input += synapse0x1835ff0();
   input += synapse0x1836030();
   input += synapse0x1836070();
   input += synapse0x183cf20();
   input += synapse0x183cf60();
   input += synapse0x183cfa0();
   input += synapse0x183cfe0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x183cb80() {
   double input = input0x183cb80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x183d020() {
   double input = 0.534624;
   input += synapse0x183d360();
   input += synapse0x183d3a0();
   input += synapse0x183d3e0();
   input += synapse0x183d420();
   input += synapse0x183d460();
   input += synapse0x183d4a0();
   input += synapse0x183d4e0();
   input += synapse0x183d520();
   input += synapse0x183d560();
   input += synapse0x183d5a0();
   input += synapse0x183d5e0();
   input += synapse0x183d620();
   input += synapse0x183d660();
   input += synapse0x183d6a0();
   input += synapse0x183d6e0();
   input += synapse0x183d720();
   input += synapse0x183d1b0();
   input += synapse0x183d1f0();
   input += synapse0x183d870();
   input += synapse0x183d8b0();
   input += synapse0x183d8f0();
   input += synapse0x183d930();
   input += synapse0x183d970();
   input += synapse0x183d9b0();
   input += synapse0x183d9f0();
   input += synapse0x183da30();
   input += synapse0x183da70();
   input += synapse0x183dab0();
   input += synapse0x183daf0();
   input += synapse0x183db30();
   input += synapse0x183db70();
   input += synapse0x183dbb0();
   input += synapse0x183d760();
   input += synapse0x183d7a0();
   input += synapse0x183d7e0();
   input += synapse0x183d820();
   input += synapse0x183de00();
   input += synapse0x183de40();
   input += synapse0x183de80();
   input += synapse0x183dec0();
   input += synapse0x183df00();
   input += synapse0x183df40();
   input += synapse0x183df80();
   input += synapse0x183dfc0();
   input += synapse0x183e000();
   input += synapse0x183e040();
   input += synapse0x183e080();
   input += synapse0x183e0c0();
   input += synapse0x183e100();
   input += synapse0x183e140();
   return input;
}

double NNfunction_sb_dLuR::neuron0x183d020() {
   double input = input0x183d020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x183e180() {
   double input = 0.568718;
   input += synapse0x183e4c0();
   input += synapse0x183e500();
   input += synapse0x183e540();
   input += synapse0x183e580();
   input += synapse0x183e5c0();
   input += synapse0x183e600();
   input += synapse0x183e640();
   input += synapse0x183e680();
   input += synapse0x183e6c0();
   input += synapse0x183e700();
   input += synapse0x183e740();
   input += synapse0x183e780();
   input += synapse0x183e7c0();
   input += synapse0x183e800();
   input += synapse0x183e840();
   input += synapse0x183e880();
   input += synapse0x183e310();
   input += synapse0x183e350();
   input += synapse0x183e9d0();
   input += synapse0x183ea10();
   input += synapse0x183ea50();
   input += synapse0x183ea90();
   input += synapse0x183ead0();
   input += synapse0x183eb10();
   input += synapse0x183eb50();
   input += synapse0x183eb90();
   input += synapse0x183ebd0();
   input += synapse0x183ec10();
   input += synapse0x183ec50();
   input += synapse0x183ec90();
   input += synapse0x183ecd0();
   input += synapse0x183ed10();
   input += synapse0x183e8c0();
   input += synapse0x183e900();
   input += synapse0x183e940();
   input += synapse0x183e980();
   input += synapse0x183ef60();
   input += synapse0x183efa0();
   input += synapse0x183efe0();
   input += synapse0x183f020();
   input += synapse0x183f060();
   input += synapse0x183f0a0();
   input += synapse0x183f0e0();
   input += synapse0x183f120();
   input += synapse0x183f160();
   input += synapse0x183f1a0();
   input += synapse0x183f1e0();
   input += synapse0x183f220();
   input += synapse0x183f260();
   input += synapse0x183f2a0();
   return input;
}

double NNfunction_sb_dLuR::neuron0x183e180() {
   double input = input0x183e180();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x183f2e0() {
   double input = 0.0769863;
   input += synapse0x183f620();
   input += synapse0x183f660();
   input += synapse0x183f6a0();
   input += synapse0x183f6e0();
   input += synapse0x183f720();
   input += synapse0x183f760();
   input += synapse0x183f7a0();
   input += synapse0x183f7e0();
   input += synapse0x183f820();
   input += synapse0x183f860();
   input += synapse0x183f8a0();
   input += synapse0x183f8e0();
   input += synapse0x183f920();
   input += synapse0x183f960();
   input += synapse0x183f9a0();
   input += synapse0x183f9e0();
   input += synapse0x183f470();
   input += synapse0x183f4b0();
   input += synapse0x183fb30();
   input += synapse0x183fb70();
   input += synapse0x183fbb0();
   input += synapse0x183fbf0();
   input += synapse0x183fc30();
   input += synapse0x183fc70();
   input += synapse0x183fcb0();
   input += synapse0x183fcf0();
   input += synapse0x183fd30();
   input += synapse0x183fd70();
   input += synapse0x183fdb0();
   input += synapse0x183fdf0();
   input += synapse0x183fe30();
   input += synapse0x183fe70();
   input += synapse0x183fa20();
   input += synapse0x183fa60();
   input += synapse0x183faa0();
   input += synapse0x183fae0();
   input += synapse0x18400c0();
   input += synapse0x1840100();
   input += synapse0x1840140();
   input += synapse0x1840180();
   input += synapse0x18401c0();
   input += synapse0x1840200();
   input += synapse0x1840240();
   input += synapse0x1840280();
   input += synapse0x18402c0();
   input += synapse0x1840300();
   input += synapse0x1840340();
   input += synapse0x1840380();
   input += synapse0x18403c0();
   input += synapse0x1840400();
   return input;
}

double NNfunction_sb_dLuR::neuron0x183f2e0() {
   double input = input0x183f2e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_sb_dLuR::input0x1840440() {
   double input = -1.2305;
   input += synapse0x1811520();
   input += synapse0x1840660();
   input += synapse0x18406a0();
   input += synapse0x18406e0();
   input += synapse0x1840720();
   return input;
}

double NNfunction_sb_dLuR::neuron0x1840440() {
   double input = input0x1840440();
   return (input * 1)+0;
}

double NNfunction_sb_dLuR::synapse0x15cc370() {
   return (neuron0x180c500()*-0.021985);
}

double NNfunction_sb_dLuR::synapse0x180c3c0() {
   return (neuron0x180c840()*-0.0367474);
}

double NNfunction_sb_dLuR::synapse0x180c400() {
   return (neuron0x180cb80()*-0.0691247);
}

double NNfunction_sb_dLuR::synapse0x1811810() {
   return (neuron0x180cec0()*-0.0217236);
}

double NNfunction_sb_dLuR::synapse0x1811850() {
   return (neuron0x180d200()*-0.0489521);
}

double NNfunction_sb_dLuR::synapse0x1811890() {
   return (neuron0x180d540()*-0.0421403);
}

double NNfunction_sb_dLuR::synapse0x18118d0() {
   return (neuron0x180d880()*0.0438883);
}

double NNfunction_sb_dLuR::synapse0x1811910() {
   return (neuron0x180dbc0()*-0.167744);
}

double NNfunction_sb_dLuR::synapse0x1811950() {
   return (neuron0x180df00()*-0.0131071);
}

double NNfunction_sb_dLuR::synapse0x1811990() {
   return (neuron0x180e240()*-0.0182331);
}

double NNfunction_sb_dLuR::synapse0x18119d0() {
   return (neuron0x180e580()*-0.0136394);
}

double NNfunction_sb_dLuR::synapse0x1811a10() {
   return (neuron0x180e8c0()*-0.482924);
}

double NNfunction_sb_dLuR::synapse0x1811a50() {
   return (neuron0x180ec00()*0.00428737);
}

double NNfunction_sb_dLuR::synapse0x1811a90() {
   return (neuron0x180ef40()*-0.0301164);
}

double NNfunction_sb_dLuR::synapse0x1811ad0() {
   return (neuron0x180f280()*-0.544229);
}

double NNfunction_sb_dLuR::synapse0x1811b10() {
   return (neuron0x180f5c0()*-0.0203773);
}

double NNfunction_sb_dLuR::synapse0x180c330() {
   return (neuron0x180f900()*-0.0932955);
}

double NNfunction_sb_dLuR::synapse0x180c370() {
   return (neuron0x180fe60()*0.00679672);
}

double NNfunction_sb_dLuR::synapse0x15bdc70() {
   return (neuron0x1810080()*-0.0693861);
}

double NNfunction_sb_dLuR::synapse0x15bdcb0() {
   return (neuron0x18103c0()*0.0203258);
}

double NNfunction_sb_dLuR::synapse0x1811d70() {
   return (neuron0x1810700()*0.00831173);
}

double NNfunction_sb_dLuR::synapse0x1811db0() {
   return (neuron0x1810a40()*-0.00913586);
}

double NNfunction_sb_dLuR::synapse0x1811df0() {
   return (neuron0x1810d80()*0.0275235);
}

double NNfunction_sb_dLuR::synapse0x1811e30() {
   return (neuron0x18110c0()*0.00321192);
}

double NNfunction_sb_dLuR::synapse0x18121b0() {
   return (neuron0x180c500()*0.129764);
}

double NNfunction_sb_dLuR::synapse0x18121f0() {
   return (neuron0x180c840()*-0.281656);
}

double NNfunction_sb_dLuR::synapse0x1812230() {
   return (neuron0x180cb80()*0.0302612);
}

double NNfunction_sb_dLuR::synapse0x1812270() {
   return (neuron0x180cec0()*0.135044);
}

double NNfunction_sb_dLuR::synapse0x18122b0() {
   return (neuron0x180d200()*0.187162);
}

double NNfunction_sb_dLuR::synapse0x18122f0() {
   return (neuron0x180d540()*0.0620875);
}

double NNfunction_sb_dLuR::synapse0x1812330() {
   return (neuron0x180d880()*-0.076456);
}

double NNfunction_sb_dLuR::synapse0x1812370() {
   return (neuron0x180dbc0()*-0.0304433);
}

double NNfunction_sb_dLuR::synapse0x18123b0() {
   return (neuron0x180df00()*0.110657);
}

double NNfunction_sb_dLuR::synapse0x1811c60() {
   return (neuron0x180e240()*0.241015);
}

double NNfunction_sb_dLuR::synapse0x1811ca0() {
   return (neuron0x180e580()*-0.35096);
}

double NNfunction_sb_dLuR::synapse0x1811ce0() {
   return (neuron0x180e8c0()*-0.150518);
}

double NNfunction_sb_dLuR::synapse0x1811d20() {
   return (neuron0x180ec00()*0.013236);
}

double NNfunction_sb_dLuR::synapse0x1812600() {
   return (neuron0x180ef40()*-0.140432);
}

double NNfunction_sb_dLuR::synapse0x1812640() {
   return (neuron0x180f280()*0.75346);
}

double NNfunction_sb_dLuR::synapse0x1812680() {
   return (neuron0x180f5c0()*-0.103651);
}

double NNfunction_sb_dLuR::synapse0x1812000() {
   return (neuron0x180f900()*-0.0148747);
}

double NNfunction_sb_dLuR::synapse0x1812040() {
   return (neuron0x180fe60()*-0.152767);
}

double NNfunction_sb_dLuR::synapse0x18127d0() {
   return (neuron0x1810080()*-0.0982626);
}

double NNfunction_sb_dLuR::synapse0x1812810() {
   return (neuron0x18103c0()*-0.447094);
}

double NNfunction_sb_dLuR::synapse0x1812850() {
   return (neuron0x1810700()*0.0894665);
}

double NNfunction_sb_dLuR::synapse0x1812890() {
   return (neuron0x1810a40()*0.0193977);
}

double NNfunction_sb_dLuR::synapse0x18128d0() {
   return (neuron0x1810d80()*-0.0355757);
}

double NNfunction_sb_dLuR::synapse0x1812910() {
   return (neuron0x18110c0()*0.124851);
}

double NNfunction_sb_dLuR::synapse0x1812c90() {
   return (neuron0x180c500()*0.0735586);
}

double NNfunction_sb_dLuR::synapse0x1812cd0() {
   return (neuron0x180c840()*-0.291221);
}

double NNfunction_sb_dLuR::synapse0x1812d10() {
   return (neuron0x180cb80()*-0.122973);
}

double NNfunction_sb_dLuR::synapse0x1812d50() {
   return (neuron0x180cec0()*-0.188752);
}

double NNfunction_sb_dLuR::synapse0x1812d90() {
   return (neuron0x180d200()*0.272521);
}

double NNfunction_sb_dLuR::synapse0x1812dd0() {
   return (neuron0x180d540()*0.0676177);
}

double NNfunction_sb_dLuR::synapse0x1812e10() {
   return (neuron0x180d880()*-0.228016);
}

double NNfunction_sb_dLuR::synapse0x1812e50() {
   return (neuron0x180dbc0()*0.0476632);
}

double NNfunction_sb_dLuR::synapse0x1812e90() {
   return (neuron0x180df00()*0.320446);
}

double NNfunction_sb_dLuR::synapse0x1812ed0() {
   return (neuron0x180e240()*-0.648142);
}

double NNfunction_sb_dLuR::synapse0x1812f10() {
   return (neuron0x180e580()*-0.697235);
}

double NNfunction_sb_dLuR::synapse0x1812f50() {
   return (neuron0x180e8c0()*-0.139162);
}

double NNfunction_sb_dLuR::synapse0x1812f90() {
   return (neuron0x180ec00()*-0.218972);
}

double NNfunction_sb_dLuR::synapse0x1812fd0() {
   return (neuron0x180ef40()*-0.52037);
}

double NNfunction_sb_dLuR::synapse0x1813010() {
   return (neuron0x180f280()*-0.230222);
}

double NNfunction_sb_dLuR::synapse0x1813050() {
   return (neuron0x180f5c0()*0.026883);
}

double NNfunction_sb_dLuR::synapse0x1812ae0() {
   return (neuron0x180f900()*-0.143633);
}

double NNfunction_sb_dLuR::synapse0x1812b20() {
   return (neuron0x180fe60()*-0.226402);
}

double NNfunction_sb_dLuR::synapse0x15cba60() {
   return (neuron0x1810080()*-0.162241);
}

double NNfunction_sb_dLuR::synapse0x15cbaa0() {
   return (neuron0x18103c0()*0.605253);
}

double NNfunction_sb_dLuR::synapse0x17fb590() {
   return (neuron0x1810700()*-0.336117);
}

double NNfunction_sb_dLuR::synapse0x17fb5d0() {
   return (neuron0x1810a40()*-0.0533559);
}

double NNfunction_sb_dLuR::synapse0x17fb610() {
   return (neuron0x1810d80()*-0.187569);
}

double NNfunction_sb_dLuR::synapse0x180c440() {
   return (neuron0x18110c0()*-0.239236);
}

double NNfunction_sb_dLuR::synapse0x18125a0() {
   return (neuron0x180c500()*-0.139115);
}

double NNfunction_sb_dLuR::synapse0x180c480() {
   return (neuron0x180c840()*0.0879766);
}

double NNfunction_sb_dLuR::synapse0x180c4c0() {
   return (neuron0x180cb80()*0.242568);
}

double NNfunction_sb_dLuR::synapse0x18131a0() {
   return (neuron0x180cec0()*-0.448768);
}

double NNfunction_sb_dLuR::synapse0x18131e0() {
   return (neuron0x180d200()*0.115065);
}

double NNfunction_sb_dLuR::synapse0x1813220() {
   return (neuron0x180d540()*-0.0389725);
}

double NNfunction_sb_dLuR::synapse0x1813260() {
   return (neuron0x180d880()*-0.512449);
}

double NNfunction_sb_dLuR::synapse0x18132a0() {
   return (neuron0x180dbc0()*-0.0707248);
}

double NNfunction_sb_dLuR::synapse0x18132e0() {
   return (neuron0x180df00()*-0.160676);
}

double NNfunction_sb_dLuR::synapse0x1813320() {
   return (neuron0x180e240()*-0.243722);
}

double NNfunction_sb_dLuR::synapse0x1813360() {
   return (neuron0x180e580()*-0.132381);
}

double NNfunction_sb_dLuR::synapse0x18133a0() {
   return (neuron0x180e8c0()*0.797577);
}

double NNfunction_sb_dLuR::synapse0x18133e0() {
   return (neuron0x180ec00()*-0.00860804);
}

double NNfunction_sb_dLuR::synapse0x1813420() {
   return (neuron0x180ef40()*-0.354537);
}

double NNfunction_sb_dLuR::synapse0x1813460() {
   return (neuron0x180f280()*0.4121);
}

double NNfunction_sb_dLuR::synapse0x18134a0() {
   return (neuron0x180f5c0()*0.318992);
}

double NNfunction_sb_dLuR::synapse0x18123f0() {
   return (neuron0x180f900()*-0.463374);
}

double NNfunction_sb_dLuR::synapse0x1812430() {
   return (neuron0x180fe60()*0.279664);
}

double NNfunction_sb_dLuR::synapse0x18135f0() {
   return (neuron0x1810080()*0.130042);
}

double NNfunction_sb_dLuR::synapse0x1813630() {
   return (neuron0x18103c0()*-0.121815);
}

double NNfunction_sb_dLuR::synapse0x1813670() {
   return (neuron0x1810700()*0.00407887);
}

double NNfunction_sb_dLuR::synapse0x18136b0() {
   return (neuron0x1810a40()*-0.224994);
}

double NNfunction_sb_dLuR::synapse0x18136f0() {
   return (neuron0x1810d80()*0.208258);
}

double NNfunction_sb_dLuR::synapse0x1813730() {
   return (neuron0x18110c0()*-0.0645481);
}

double NNfunction_sb_dLuR::synapse0x1813ab0() {
   return (neuron0x180c500()*-0.0744188);
}

double NNfunction_sb_dLuR::synapse0x1813af0() {
   return (neuron0x180c840()*0.0076534);
}

double NNfunction_sb_dLuR::synapse0x1813b30() {
   return (neuron0x180cb80()*-0.145699);
}

double NNfunction_sb_dLuR::synapse0x1813b70() {
   return (neuron0x180cec0()*-0.364418);
}

double NNfunction_sb_dLuR::synapse0x1813bb0() {
   return (neuron0x180d200()*-0.250594);
}

double NNfunction_sb_dLuR::synapse0x1813bf0() {
   return (neuron0x180d540()*0.145703);
}

double NNfunction_sb_dLuR::synapse0x1813c30() {
   return (neuron0x180d880()*-0.0494775);
}

double NNfunction_sb_dLuR::synapse0x1813c70() {
   return (neuron0x180dbc0()*-0.108254);
}

double NNfunction_sb_dLuR::synapse0x1813cb0() {
   return (neuron0x180df00()*0.0121735);
}

double NNfunction_sb_dLuR::synapse0x1813cf0() {
   return (neuron0x180e240()*-0.0717066);
}

double NNfunction_sb_dLuR::synapse0x1813d30() {
   return (neuron0x180e580()*0.0735614);
}

double NNfunction_sb_dLuR::synapse0x1813d70() {
   return (neuron0x180e8c0()*-0.00883853);
}

double NNfunction_sb_dLuR::synapse0x1813db0() {
   return (neuron0x180ec00()*-0.0492012);
}

double NNfunction_sb_dLuR::synapse0x1813df0() {
   return (neuron0x180ef40()*0.00439508);
}

double NNfunction_sb_dLuR::synapse0x1813e30() {
   return (neuron0x180f280()*0.225516);
}

double NNfunction_sb_dLuR::synapse0x1813e70() {
   return (neuron0x180f5c0()*0.122149);
}

double NNfunction_sb_dLuR::synapse0x1813900() {
   return (neuron0x180f900()*0.0893428);
}

double NNfunction_sb_dLuR::synapse0x1813940() {
   return (neuron0x180fe60()*-0.123869);
}

double NNfunction_sb_dLuR::synapse0x1813fc0() {
   return (neuron0x1810080()*-0.0706432);
}

double NNfunction_sb_dLuR::synapse0x1814000() {
   return (neuron0x18103c0()*-0.0161952);
}

double NNfunction_sb_dLuR::synapse0x1814040() {
   return (neuron0x1810700()*0.0248975);
}

double NNfunction_sb_dLuR::synapse0x1814080() {
   return (neuron0x1810a40()*-0.0642225);
}

double NNfunction_sb_dLuR::synapse0x18140c0() {
   return (neuron0x1810d80()*0.00929296);
}

double NNfunction_sb_dLuR::synapse0x1814100() {
   return (neuron0x18110c0()*0.0497034);
}

double NNfunction_sb_dLuR::synapse0x1814480() {
   return (neuron0x180c500()*0.0122227);
}

double NNfunction_sb_dLuR::synapse0x18144c0() {
   return (neuron0x180c840()*-0.12753);
}

double NNfunction_sb_dLuR::synapse0x1814500() {
   return (neuron0x180cb80()*-0.00207061);
}

double NNfunction_sb_dLuR::synapse0x1814540() {
   return (neuron0x180cec0()*0.401623);
}

double NNfunction_sb_dLuR::synapse0x1814580() {
   return (neuron0x180d200()*0.0170833);
}

double NNfunction_sb_dLuR::synapse0x18145c0() {
   return (neuron0x180d540()*0.0509311);
}

double NNfunction_sb_dLuR::synapse0x1814600() {
   return (neuron0x180d880()*-0.00290554);
}

double NNfunction_sb_dLuR::synapse0x1814640() {
   return (neuron0x180dbc0()*-0.471659);
}

double NNfunction_sb_dLuR::synapse0x1814680() {
   return (neuron0x180df00()*0.0630522);
}

double NNfunction_sb_dLuR::synapse0x15cbdd0() {
   return (neuron0x180e240()*0.061035);
}

double NNfunction_sb_dLuR::synapse0x15cbe10() {
   return (neuron0x180e580()*0.0135979);
}

double NNfunction_sb_dLuR::synapse0x15cbe50() {
   return (neuron0x180e8c0()*0.265987);
}

double NNfunction_sb_dLuR::synapse0x15cbe90() {
   return (neuron0x180ec00()*0.00604778);
}

double NNfunction_sb_dLuR::synapse0x15cbed0() {
   return (neuron0x180ef40()*-0.0423487);
}

double NNfunction_sb_dLuR::synapse0x15cbf10() {
   return (neuron0x180f280()*0.382801);
}

double NNfunction_sb_dLuR::synapse0x15cbf50() {
   return (neuron0x180f5c0()*-0.14834);
}

double NNfunction_sb_dLuR::synapse0x18142d0() {
   return (neuron0x180f900()*-0.197628);
}

double NNfunction_sb_dLuR::synapse0x1814310() {
   return (neuron0x180fe60()*0.112162);
}

double NNfunction_sb_dLuR::synapse0x15cc0a0() {
   return (neuron0x1810080()*-0.0203594);
}

double NNfunction_sb_dLuR::synapse0x15cc0e0() {
   return (neuron0x18103c0()*-0.072149);
}

double NNfunction_sb_dLuR::synapse0x15cc120() {
   return (neuron0x1810700()*-0.0397693);
}

double NNfunction_sb_dLuR::synapse0x15cc160() {
   return (neuron0x1810a40()*-0.0837193);
}

double NNfunction_sb_dLuR::synapse0x15cc1a0() {
   return (neuron0x1810d80()*0.0657082);
}

double NNfunction_sb_dLuR::synapse0x1814ed0() {
   return (neuron0x18110c0()*0.0728733);
}

double NNfunction_sb_dLuR::synapse0x1815250() {
   return (neuron0x180c500()*-0.0144128);
}

double NNfunction_sb_dLuR::synapse0x1815290() {
   return (neuron0x180c840()*0.00964822);
}

double NNfunction_sb_dLuR::synapse0x18152d0() {
   return (neuron0x180cb80()*-0.0438316);
}

double NNfunction_sb_dLuR::synapse0x1815310() {
   return (neuron0x180cec0()*3.10675);
}

double NNfunction_sb_dLuR::synapse0x1815350() {
   return (neuron0x180d200()*0.0209692);
}

double NNfunction_sb_dLuR::synapse0x1815390() {
   return (neuron0x180d540()*0.0097009);
}

double NNfunction_sb_dLuR::synapse0x18153d0() {
   return (neuron0x180d880()*-0.00181469);
}

double NNfunction_sb_dLuR::synapse0x1815410() {
   return (neuron0x180dbc0()*0.0283016);
}

double NNfunction_sb_dLuR::synapse0x1815450() {
   return (neuron0x180df00()*-0.0132111);
}

double NNfunction_sb_dLuR::synapse0x1815490() {
   return (neuron0x180e240()*-0.00551112);
}

double NNfunction_sb_dLuR::synapse0x18154d0() {
   return (neuron0x180e580()*0.000874799);
}

double NNfunction_sb_dLuR::synapse0x1815510() {
   return (neuron0x180e8c0()*-0.293749);
}

double NNfunction_sb_dLuR::synapse0x1815550() {
   return (neuron0x180ec00()*0.049294);
}

double NNfunction_sb_dLuR::synapse0x1815590() {
   return (neuron0x180ef40()*-0.00874083);
}

double NNfunction_sb_dLuR::synapse0x18155d0() {
   return (neuron0x180f280()*-0.659974);
}

double NNfunction_sb_dLuR::synapse0x1815610() {
   return (neuron0x180f5c0()*0.0154139);
}

double NNfunction_sb_dLuR::synapse0x18150a0() {
   return (neuron0x180f900()*-0.0210179);
}

double NNfunction_sb_dLuR::synapse0x18150e0() {
   return (neuron0x180fe60()*0.0468623);
}

double NNfunction_sb_dLuR::synapse0x1815760() {
   return (neuron0x1810080()*0.0213541);
}

double NNfunction_sb_dLuR::synapse0x18157a0() {
   return (neuron0x18103c0()*0.0104817);
}

double NNfunction_sb_dLuR::synapse0x18157e0() {
   return (neuron0x1810700()*-0.0403253);
}

double NNfunction_sb_dLuR::synapse0x1815820() {
   return (neuron0x1810a40()*-0.00629363);
}

double NNfunction_sb_dLuR::synapse0x1815860() {
   return (neuron0x1810d80()*-0.0295321);
}

double NNfunction_sb_dLuR::synapse0x18158a0() {
   return (neuron0x18110c0()*-0.00585877);
}

double NNfunction_sb_dLuR::synapse0x1815c20() {
   return (neuron0x180c500()*0.00795808);
}

double NNfunction_sb_dLuR::synapse0x1815c60() {
   return (neuron0x180c840()*-0.0220453);
}

double NNfunction_sb_dLuR::synapse0x1815ca0() {
   return (neuron0x180cb80()*0.0634939);
}

double NNfunction_sb_dLuR::synapse0x1815ce0() {
   return (neuron0x180cec0()*-0.0159163);
}

double NNfunction_sb_dLuR::synapse0x1815d20() {
   return (neuron0x180d200()*0.0517044);
}

double NNfunction_sb_dLuR::synapse0x1815d60() {
   return (neuron0x180d540()*0.137121);
}

double NNfunction_sb_dLuR::synapse0x1815da0() {
   return (neuron0x180d880()*0.0854305);
}

double NNfunction_sb_dLuR::synapse0x1815de0() {
   return (neuron0x180dbc0()*0.0194381);
}

double NNfunction_sb_dLuR::synapse0x1815e20() {
   return (neuron0x180df00()*-0.0436915);
}

double NNfunction_sb_dLuR::synapse0x1815e60() {
   return (neuron0x180e240()*0.000962653);
}

double NNfunction_sb_dLuR::synapse0x1815ea0() {
   return (neuron0x180e580()*0.00339836);
}

double NNfunction_sb_dLuR::synapse0x1815ee0() {
   return (neuron0x180e8c0()*-0.455565);
}

double NNfunction_sb_dLuR::synapse0x1815f20() {
   return (neuron0x180ec00()*-0.138315);
}

double NNfunction_sb_dLuR::synapse0x1815f60() {
   return (neuron0x180ef40()*-0.00692956);
}

double NNfunction_sb_dLuR::synapse0x1815fa0() {
   return (neuron0x180f280()*-0.645155);
}

double NNfunction_sb_dLuR::synapse0x1815fe0() {
   return (neuron0x180f5c0()*-0.0849005);
}

double NNfunction_sb_dLuR::synapse0x1815a70() {
   return (neuron0x180f900()*-0.00906501);
}

double NNfunction_sb_dLuR::synapse0x1815ab0() {
   return (neuron0x180fe60()*-0.0926573);
}

double NNfunction_sb_dLuR::synapse0x1816130() {
   return (neuron0x1810080()*-0.0181268);
}

double NNfunction_sb_dLuR::synapse0x1816170() {
   return (neuron0x18103c0()*-0.02772);
}

double NNfunction_sb_dLuR::synapse0x18161b0() {
   return (neuron0x1810700()*0.0107605);
}

double NNfunction_sb_dLuR::synapse0x18161f0() {
   return (neuron0x1810a40()*-0.0113736);
}

double NNfunction_sb_dLuR::synapse0x1816230() {
   return (neuron0x1810d80()*-0.0232377);
}

double NNfunction_sb_dLuR::synapse0x1816270() {
   return (neuron0x18110c0()*0.0184612);
}

double NNfunction_sb_dLuR::synapse0x180fd50() {
   return (neuron0x180c500()*-0.0205551);
}

double NNfunction_sb_dLuR::synapse0x180fd90() {
   return (neuron0x180c840()*-0.0899923);
}

double NNfunction_sb_dLuR::synapse0x180fdd0() {
   return (neuron0x180cb80()*-0.15873);
}

double NNfunction_sb_dLuR::synapse0x180fe10() {
   return (neuron0x180cec0()*-0.609747);
}

double NNfunction_sb_dLuR::synapse0x1816800() {
   return (neuron0x180d200()*-0.135691);
}

double NNfunction_sb_dLuR::synapse0x1816840() {
   return (neuron0x180d540()*-0.0241647);
}

double NNfunction_sb_dLuR::synapse0x1816880() {
   return (neuron0x180d880()*-0.0305696);
}

double NNfunction_sb_dLuR::synapse0x18168c0() {
   return (neuron0x180dbc0()*-0.35796);
}

double NNfunction_sb_dLuR::synapse0x1816900() {
   return (neuron0x180df00()*0.334793);
}

double NNfunction_sb_dLuR::synapse0x1816940() {
   return (neuron0x180e240()*-0.213291);
}

double NNfunction_sb_dLuR::synapse0x1816980() {
   return (neuron0x180e580()*0.0828309);
}

double NNfunction_sb_dLuR::synapse0x18169c0() {
   return (neuron0x180e8c0()*0.0579736);
}

double NNfunction_sb_dLuR::synapse0x1816a00() {
   return (neuron0x180ec00()*0.120464);
}

double NNfunction_sb_dLuR::synapse0x1816a40() {
   return (neuron0x180ef40()*0.0614201);
}

double NNfunction_sb_dLuR::synapse0x1816a80() {
   return (neuron0x180f280()*0.118619);
}

double NNfunction_sb_dLuR::synapse0x1816ac0() {
   return (neuron0x180f5c0()*-0.12054);
}

double NNfunction_sb_dLuR::synapse0x1816440() {
   return (neuron0x180f900()*-0.0640899);
}

double NNfunction_sb_dLuR::synapse0x1816480() {
   return (neuron0x180fe60()*0.210166);
}

double NNfunction_sb_dLuR::synapse0x1816c10() {
   return (neuron0x1810080()*0.0110202);
}

double NNfunction_sb_dLuR::synapse0x1816c50() {
   return (neuron0x18103c0()*-0.121853);
}

double NNfunction_sb_dLuR::synapse0x1816c90() {
   return (neuron0x1810700()*0.103695);
}

double NNfunction_sb_dLuR::synapse0x1816cd0() {
   return (neuron0x1810a40()*-0.0784661);
}

double NNfunction_sb_dLuR::synapse0x1816d10() {
   return (neuron0x1810d80()*0.0337852);
}

double NNfunction_sb_dLuR::synapse0x1816d50() {
   return (neuron0x18110c0()*0.0310795);
}

double NNfunction_sb_dLuR::synapse0x18170d0() {
   return (neuron0x180c500()*-0.0513438);
}

double NNfunction_sb_dLuR::synapse0x1817110() {
   return (neuron0x180c840()*-0.00366331);
}

double NNfunction_sb_dLuR::synapse0x1817150() {
   return (neuron0x180cb80()*-0.139418);
}

double NNfunction_sb_dLuR::synapse0x1817190() {
   return (neuron0x180cec0()*0.0864175);
}

double NNfunction_sb_dLuR::synapse0x18171d0() {
   return (neuron0x180d200()*-0.0184478);
}

double NNfunction_sb_dLuR::synapse0x1817210() {
   return (neuron0x180d540()*-0.0591531);
}

double NNfunction_sb_dLuR::synapse0x1817250() {
   return (neuron0x180d880()*0.0517847);
}

double NNfunction_sb_dLuR::synapse0x1817290() {
   return (neuron0x180dbc0()*-0.0476942);
}

double NNfunction_sb_dLuR::synapse0x18172d0() {
   return (neuron0x180df00()*-0.00359942);
}

double NNfunction_sb_dLuR::synapse0x1817310() {
   return (neuron0x180e240()*0.0148062);
}

double NNfunction_sb_dLuR::synapse0x1817350() {
   return (neuron0x180e580()*0.0194067);
}

double NNfunction_sb_dLuR::synapse0x1817390() {
   return (neuron0x180e8c0()*3.10203);
}

double NNfunction_sb_dLuR::synapse0x18173d0() {
   return (neuron0x180ec00()*-0.0390028);
}

double NNfunction_sb_dLuR::synapse0x1817410() {
   return (neuron0x180ef40()*0.00646897);
}

double NNfunction_sb_dLuR::synapse0x1817450() {
   return (neuron0x180f280()*-0.723573);
}

double NNfunction_sb_dLuR::synapse0x1817490() {
   return (neuron0x180f5c0()*-0.00520264);
}

double NNfunction_sb_dLuR::synapse0x1816f20() {
   return (neuron0x180f900()*0.00562799);
}

double NNfunction_sb_dLuR::synapse0x1816f60() {
   return (neuron0x180fe60()*0.0642377);
}

double NNfunction_sb_dLuR::synapse0x18175e0() {
   return (neuron0x1810080()*0.00323669);
}

double NNfunction_sb_dLuR::synapse0x1817620() {
   return (neuron0x18103c0()*0.00742905);
}

double NNfunction_sb_dLuR::synapse0x1817660() {
   return (neuron0x1810700()*0.0284811);
}

double NNfunction_sb_dLuR::synapse0x18176a0() {
   return (neuron0x1810a40()*0.0244406);
}

double NNfunction_sb_dLuR::synapse0x18176e0() {
   return (neuron0x1810d80()*0.0224816);
}

double NNfunction_sb_dLuR::synapse0x1817720() {
   return (neuron0x18110c0()*0.025948);
}

double NNfunction_sb_dLuR::synapse0x1817aa0() {
   return (neuron0x180c500()*0.0249588);
}

double NNfunction_sb_dLuR::synapse0x1817ae0() {
   return (neuron0x180c840()*-0.00863062);
}

double NNfunction_sb_dLuR::synapse0x1817b20() {
   return (neuron0x180cb80()*0.00495827);
}

double NNfunction_sb_dLuR::synapse0x1817b60() {
   return (neuron0x180cec0()*-19.9408);
}

double NNfunction_sb_dLuR::synapse0x1817ba0() {
   return (neuron0x180d200()*-0.00528465);
}

double NNfunction_sb_dLuR::synapse0x1817be0() {
   return (neuron0x180d540()*0.0250059);
}

double NNfunction_sb_dLuR::synapse0x1817c20() {
   return (neuron0x180d880()*-0.01094);
}

double NNfunction_sb_dLuR::synapse0x1817c60() {
   return (neuron0x180dbc0()*-0.0235099);
}

double NNfunction_sb_dLuR::synapse0x1817ca0() {
   return (neuron0x180df00()*0.00575093);
}

double NNfunction_sb_dLuR::synapse0x1817ce0() {
   return (neuron0x180e240()*-0.00525043);
}

double NNfunction_sb_dLuR::synapse0x1817d20() {
   return (neuron0x180e580()*0.0149223);
}

double NNfunction_sb_dLuR::synapse0x1817d60() {
   return (neuron0x180e8c0()*0.225592);
}

double NNfunction_sb_dLuR::synapse0x1817da0() {
   return (neuron0x180ec00()*0.0124922);
}

double NNfunction_sb_dLuR::synapse0x1817de0() {
   return (neuron0x180ef40()*0.0175003);
}

double NNfunction_sb_dLuR::synapse0x1817e20() {
   return (neuron0x180f280()*0.114642);
}

double NNfunction_sb_dLuR::synapse0x1817e60() {
   return (neuron0x180f5c0()*0.00842702);
}

double NNfunction_sb_dLuR::synapse0x18178f0() {
   return (neuron0x180f900()*0.00331056);
}

double NNfunction_sb_dLuR::synapse0x1817930() {
   return (neuron0x180fe60()*0.00903576);
}

double NNfunction_sb_dLuR::synapse0x18146c0() {
   return (neuron0x1810080()*-0.00135837);
}

double NNfunction_sb_dLuR::synapse0x1814700() {
   return (neuron0x18103c0()*-0.0145336);
}

double NNfunction_sb_dLuR::synapse0x1814740() {
   return (neuron0x1810700()*0.00682398);
}

double NNfunction_sb_dLuR::synapse0x1814780() {
   return (neuron0x1810a40()*0.000732912);
}

double NNfunction_sb_dLuR::synapse0x18147c0() {
   return (neuron0x1810d80()*-0.00641746);
}

double NNfunction_sb_dLuR::synapse0x1814800() {
   return (neuron0x18110c0()*-0.00380421);
}

double NNfunction_sb_dLuR::synapse0x1814b80() {
   return (neuron0x180c500()*-0.0624422);
}

double NNfunction_sb_dLuR::synapse0x1814bc0() {
   return (neuron0x180c840()*0.187508);
}

double NNfunction_sb_dLuR::synapse0x1814c00() {
   return (neuron0x180cb80()*0.280539);
}

double NNfunction_sb_dLuR::synapse0x1814c40() {
   return (neuron0x180cec0()*-0.0287972);
}

double NNfunction_sb_dLuR::synapse0x1814c80() {
   return (neuron0x180d200()*0.0602385);
}

double NNfunction_sb_dLuR::synapse0x1814cc0() {
   return (neuron0x180d540()*-0.0934409);
}

double NNfunction_sb_dLuR::synapse0x1814d00() {
   return (neuron0x180d880()*0.129135);
}

double NNfunction_sb_dLuR::synapse0x1814d40() {
   return (neuron0x180dbc0()*0.112907);
}

double NNfunction_sb_dLuR::synapse0x1814d80() {
   return (neuron0x180df00()*-0.0892691);
}

double NNfunction_sb_dLuR::synapse0x1814dc0() {
   return (neuron0x180e240()*-0.050288);
}

double NNfunction_sb_dLuR::synapse0x1814e00() {
   return (neuron0x180e580()*-0.0526122);
}

double NNfunction_sb_dLuR::synapse0x1814e40() {
   return (neuron0x180e8c0()*0.468704);
}

double NNfunction_sb_dLuR::synapse0x1814e80() {
   return (neuron0x180ec00()*-0.0552501);
}

double NNfunction_sb_dLuR::synapse0x1818fc0() {
   return (neuron0x180ef40()*0.0993673);
}

double NNfunction_sb_dLuR::synapse0x1819000() {
   return (neuron0x180f280()*-0.444371);
}

double NNfunction_sb_dLuR::synapse0x1819040() {
   return (neuron0x180f5c0()*0.260136);
}

double NNfunction_sb_dLuR::synapse0x18149d0() {
   return (neuron0x180f900()*0.0829223);
}

double NNfunction_sb_dLuR::synapse0x1814a10() {
   return (neuron0x180fe60()*-0.0399494);
}

double NNfunction_sb_dLuR::synapse0x1819190() {
   return (neuron0x1810080()*-0.0592467);
}

double NNfunction_sb_dLuR::synapse0x18191d0() {
   return (neuron0x18103c0()*-0.0867725);
}

double NNfunction_sb_dLuR::synapse0x1819210() {
   return (neuron0x1810700()*0.0879158);
}

double NNfunction_sb_dLuR::synapse0x1819250() {
   return (neuron0x1810a40()*0.130551);
}

double NNfunction_sb_dLuR::synapse0x1819290() {
   return (neuron0x1810d80()*0.0443894);
}

double NNfunction_sb_dLuR::synapse0x18192d0() {
   return (neuron0x18110c0()*0.130314);
}

double NNfunction_sb_dLuR::synapse0x1819650() {
   return (neuron0x180c500()*0.0988167);
}

double NNfunction_sb_dLuR::synapse0x1819690() {
   return (neuron0x180c840()*-0.351752);
}

double NNfunction_sb_dLuR::synapse0x18196d0() {
   return (neuron0x180cb80()*0.19748);
}

double NNfunction_sb_dLuR::synapse0x1819710() {
   return (neuron0x180cec0()*-0.354823);
}

double NNfunction_sb_dLuR::synapse0x1819750() {
   return (neuron0x180d200()*0.595875);
}

double NNfunction_sb_dLuR::synapse0x1819790() {
   return (neuron0x180d540()*-0.365161);
}

double NNfunction_sb_dLuR::synapse0x18197d0() {
   return (neuron0x180d880()*-0.820955);
}

double NNfunction_sb_dLuR::synapse0x1819810() {
   return (neuron0x180dbc0()*0.397912);
}

double NNfunction_sb_dLuR::synapse0x1819850() {
   return (neuron0x180df00()*1.25476);
}

double NNfunction_sb_dLuR::synapse0x1819890() {
   return (neuron0x180e240()*0.115519);
}

double NNfunction_sb_dLuR::synapse0x18198d0() {
   return (neuron0x180e580()*0.102263);
}

double NNfunction_sb_dLuR::synapse0x1819910() {
   return (neuron0x180e8c0()*0.203366);
}

double NNfunction_sb_dLuR::synapse0x1819950() {
   return (neuron0x180ec00()*0.273631);
}

double NNfunction_sb_dLuR::synapse0x1819990() {
   return (neuron0x180ef40()*-0.0721085);
}

double NNfunction_sb_dLuR::synapse0x18199d0() {
   return (neuron0x180f280()*-0.0508512);
}

double NNfunction_sb_dLuR::synapse0x1819a10() {
   return (neuron0x180f5c0()*-0.462388);
}

double NNfunction_sb_dLuR::synapse0x18194a0() {
   return (neuron0x180f900()*-0.0795562);
}

double NNfunction_sb_dLuR::synapse0x18194e0() {
   return (neuron0x180fe60()*-0.212037);
}

double NNfunction_sb_dLuR::synapse0x1819b60() {
   return (neuron0x1810080()*0.0207617);
}

double NNfunction_sb_dLuR::synapse0x1819ba0() {
   return (neuron0x18103c0()*0.443658);
}

double NNfunction_sb_dLuR::synapse0x1819be0() {
   return (neuron0x1810700()*-0.153725);
}

double NNfunction_sb_dLuR::synapse0x1819c20() {
   return (neuron0x1810a40()*0.338644);
}

double NNfunction_sb_dLuR::synapse0x1819c60() {
   return (neuron0x1810d80()*0.416628);
}

double NNfunction_sb_dLuR::synapse0x1819ca0() {
   return (neuron0x18110c0()*-0.422712);
}

double NNfunction_sb_dLuR::synapse0x181a020() {
   return (neuron0x180c500()*-0.0183011);
}

double NNfunction_sb_dLuR::synapse0x181a060() {
   return (neuron0x180c840()*0.0337479);
}

double NNfunction_sb_dLuR::synapse0x181a0a0() {
   return (neuron0x180cb80()*0.0266625);
}

double NNfunction_sb_dLuR::synapse0x181a0e0() {
   return (neuron0x180cec0()*1.13949);
}

double NNfunction_sb_dLuR::synapse0x181a120() {
   return (neuron0x180d200()*-0.010242);
}

double NNfunction_sb_dLuR::synapse0x181a160() {
   return (neuron0x180d540()*0.0640815);
}

double NNfunction_sb_dLuR::synapse0x181a1a0() {
   return (neuron0x180d880()*-0.02063);
}

double NNfunction_sb_dLuR::synapse0x181a1e0() {
   return (neuron0x180dbc0()*0.039911);
}

double NNfunction_sb_dLuR::synapse0x181a220() {
   return (neuron0x180df00()*-0.0116967);
}

double NNfunction_sb_dLuR::synapse0x181a260() {
   return (neuron0x180e240()*0.000112988);
}

double NNfunction_sb_dLuR::synapse0x181a2a0() {
   return (neuron0x180e580()*0.00651844);
}

double NNfunction_sb_dLuR::synapse0x181a2e0() {
   return (neuron0x180e8c0()*0.705908);
}

double NNfunction_sb_dLuR::synapse0x181a320() {
   return (neuron0x180ec00()*-0.0164441);
}

double NNfunction_sb_dLuR::synapse0x181a360() {
   return (neuron0x180ef40()*-0.00583956);
}

double NNfunction_sb_dLuR::synapse0x181a3a0() {
   return (neuron0x180f280()*-0.0327296);
}

double NNfunction_sb_dLuR::synapse0x181a3e0() {
   return (neuron0x180f5c0()*0.00553045);
}

double NNfunction_sb_dLuR::synapse0x1819e70() {
   return (neuron0x180f900()*0.0187236);
}

double NNfunction_sb_dLuR::synapse0x1819eb0() {
   return (neuron0x180fe60()*0.0122526);
}

double NNfunction_sb_dLuR::synapse0x181a530() {
   return (neuron0x1810080()*-0.0803388);
}

double NNfunction_sb_dLuR::synapse0x181a570() {
   return (neuron0x18103c0()*-0.000793289);
}

double NNfunction_sb_dLuR::synapse0x181a5b0() {
   return (neuron0x1810700()*-0.0481429);
}

double NNfunction_sb_dLuR::synapse0x181a5f0() {
   return (neuron0x1810a40()*-0.0327321);
}

double NNfunction_sb_dLuR::synapse0x181a630() {
   return (neuron0x1810d80()*-0.00562206);
}

double NNfunction_sb_dLuR::synapse0x181a670() {
   return (neuron0x18110c0()*0.0292494);
}

double NNfunction_sb_dLuR::synapse0x181a9f0() {
   return (neuron0x180c500()*-0.0881931);
}

double NNfunction_sb_dLuR::synapse0x181aa30() {
   return (neuron0x180c840()*-0.226575);
}

double NNfunction_sb_dLuR::synapse0x181aa70() {
   return (neuron0x180cb80()*0.014593);
}

double NNfunction_sb_dLuR::synapse0x181aab0() {
   return (neuron0x180cec0()*0.4931);
}

double NNfunction_sb_dLuR::synapse0x181aaf0() {
   return (neuron0x180d200()*-0.0795422);
}

double NNfunction_sb_dLuR::synapse0x181ab30() {
   return (neuron0x180d540()*0.0692951);
}

double NNfunction_sb_dLuR::synapse0x181ab70() {
   return (neuron0x180d880()*0.0730449);
}

double NNfunction_sb_dLuR::synapse0x181abb0() {
   return (neuron0x180dbc0()*-0.0853101);
}

double NNfunction_sb_dLuR::synapse0x181abf0() {
   return (neuron0x180df00()*-0.00426947);
}

double NNfunction_sb_dLuR::synapse0x181ac30() {
   return (neuron0x180e240()*0.0217048);
}

double NNfunction_sb_dLuR::synapse0x181ac70() {
   return (neuron0x180e580()*0.0048431);
}

double NNfunction_sb_dLuR::synapse0x181acb0() {
   return (neuron0x180e8c0()*-0.414291);
}

double NNfunction_sb_dLuR::synapse0x181acf0() {
   return (neuron0x180ec00()*-0.289952);
}

double NNfunction_sb_dLuR::synapse0x181ad30() {
   return (neuron0x180ef40()*-0.00152076);
}

double NNfunction_sb_dLuR::synapse0x181ad70() {
   return (neuron0x180f280()*-0.0186334);
}

double NNfunction_sb_dLuR::synapse0x181adb0() {
   return (neuron0x180f5c0()*-0.229975);
}

double NNfunction_sb_dLuR::synapse0x181a840() {
   return (neuron0x180f900()*0.0166479);
}

double NNfunction_sb_dLuR::synapse0x181a880() {
   return (neuron0x180fe60()*-0.437083);
}

double NNfunction_sb_dLuR::synapse0x181af00() {
   return (neuron0x1810080()*-0.267719);
}

double NNfunction_sb_dLuR::synapse0x181af40() {
   return (neuron0x18103c0()*0.0705827);
}

double NNfunction_sb_dLuR::synapse0x181af80() {
   return (neuron0x1810700()*0.0385659);
}

double NNfunction_sb_dLuR::synapse0x181afc0() {
   return (neuron0x1810a40()*-0.0191481);
}

double NNfunction_sb_dLuR::synapse0x181b000() {
   return (neuron0x1810d80()*0.00467381);
}

double NNfunction_sb_dLuR::synapse0x181b040() {
   return (neuron0x18110c0()*-0.00896287);
}

double NNfunction_sb_dLuR::synapse0x181b3c0() {
   return (neuron0x180c500()*0.129015);
}

double NNfunction_sb_dLuR::synapse0x180c720() {
   return (neuron0x180c840()*0.00117884);
}

double NNfunction_sb_dLuR::synapse0x180c760() {
   return (neuron0x180cb80()*-0.161608);
}

double NNfunction_sb_dLuR::synapse0x180ca60() {
   return (neuron0x180cec0()*0.39119);
}

double NNfunction_sb_dLuR::synapse0x180caa0() {
   return (neuron0x180d200()*-0.0470666);
}

double NNfunction_sb_dLuR::synapse0x180cda0() {
   return (neuron0x180d540()*0.0597575);
}

double NNfunction_sb_dLuR::synapse0x180cde0() {
   return (neuron0x180d880()*0.0163342);
}

double NNfunction_sb_dLuR::synapse0x180d0e0() {
   return (neuron0x180dbc0()*-0.201814);
}

double NNfunction_sb_dLuR::synapse0x180d120() {
   return (neuron0x180df00()*0.0976101);
}

double NNfunction_sb_dLuR::synapse0x180d420() {
   return (neuron0x180e240()*-0.175602);
}

double NNfunction_sb_dLuR::synapse0x180d460() {
   return (neuron0x180e580()*-0.140592);
}

double NNfunction_sb_dLuR::synapse0x180d760() {
   return (neuron0x180e8c0()*0.0252609);
}

double NNfunction_sb_dLuR::synapse0x180d7a0() {
   return (neuron0x180ec00()*0.108827);
}

double NNfunction_sb_dLuR::synapse0x180daa0() {
   return (neuron0x180ef40()*-0.048687);
}

double NNfunction_sb_dLuR::synapse0x180dae0() {
   return (neuron0x180f280()*0.205715);
}

double NNfunction_sb_dLuR::synapse0x180dde0() {
   return (neuron0x180f5c0()*0.106833);
}

double NNfunction_sb_dLuR::synapse0x180de20() {
   return (neuron0x180f900()*-0.0315799);
}

double NNfunction_sb_dLuR::synapse0x180e120() {
   return (neuron0x180fe60()*0.238258);
}

double NNfunction_sb_dLuR::synapse0x180e160() {
   return (neuron0x1810080()*-0.0811637);
}

double NNfunction_sb_dLuR::synapse0x180e460() {
   return (neuron0x18103c0()*-0.105319);
}

double NNfunction_sb_dLuR::synapse0x180e4a0() {
   return (neuron0x1810700()*0.0522345);
}

double NNfunction_sb_dLuR::synapse0x180e7a0() {
   return (neuron0x1810a40()*0.0538347);
}

double NNfunction_sb_dLuR::synapse0x180e7e0() {
   return (neuron0x1810d80()*-0.0176087);
}

double NNfunction_sb_dLuR::synapse0x180eae0() {
   return (neuron0x18110c0()*0.00612195);
}

double NNfunction_sb_dLuR::synapse0x180eb20() {
   return (neuron0x180c500()*-0.0247245);
}

double NNfunction_sb_dLuR::synapse0x180f7e0() {
   return (neuron0x180c840()*0.270685);
}

double NNfunction_sb_dLuR::synapse0x180f820() {
   return (neuron0x180cb80()*-0.00667316);
}

double NNfunction_sb_dLuR::synapse0x181b210() {
   return (neuron0x180cec0()*-0.785946);
}

double NNfunction_sb_dLuR::synapse0x181b250() {
   return (neuron0x180d200()*-0.0211029);
}

double NNfunction_sb_dLuR::synapse0x180fb20() {
   return (neuron0x180d540()*0.0382771);
}

double NNfunction_sb_dLuR::synapse0x180fb60() {
   return (neuron0x180d880()*-0.0562657);
}

double NNfunction_sb_dLuR::synapse0x15bdb50() {
   return (neuron0x180dbc0()*0.0358852);
}

double NNfunction_sb_dLuR::synapse0x15bdb90() {
   return (neuron0x180df00()*-0.00863132);
}

double NNfunction_sb_dLuR::synapse0x18102a0() {
   return (neuron0x180e240()*-0.0125374);
}

double NNfunction_sb_dLuR::synapse0x18102e0() {
   return (neuron0x180e580()*0.00319649);
}

double NNfunction_sb_dLuR::synapse0x18105e0() {
   return (neuron0x180e8c0()*0.0792598);
}

double NNfunction_sb_dLuR::synapse0x1810620() {
   return (neuron0x180ec00()*0.0394734);
}

double NNfunction_sb_dLuR::synapse0x1810920() {
   return (neuron0x180ef40()*0.0175747);
}

double NNfunction_sb_dLuR::synapse0x1810960() {
   return (neuron0x180f280()*0.290297);
}

double NNfunction_sb_dLuR::synapse0x1810c60() {
   return (neuron0x180f5c0()*0.0274048);
}

double NNfunction_sb_dLuR::synapse0x1810ca0() {
   return (neuron0x180f900()*0.0523113);
}

double NNfunction_sb_dLuR::synapse0x1810fa0() {
   return (neuron0x180fe60()*-0.106288);
}

double NNfunction_sb_dLuR::synapse0x1810fe0() {
   return (neuron0x1810080()*-0.0278941);
}

double NNfunction_sb_dLuR::synapse0x18112e0() {
   return (neuron0x18103c0()*-0.0323401);
}

double NNfunction_sb_dLuR::synapse0x1811320() {
   return (neuron0x1810700()*0.00640017);
}

double NNfunction_sb_dLuR::synapse0x180ee20() {
   return (neuron0x1810a40()*-0.0372545);
}

double NNfunction_sb_dLuR::synapse0x180ee60() {
   return (neuron0x1810d80()*0.020316);
}

double NNfunction_sb_dLuR::synapse0x181d130() {
   return (neuron0x18110c0()*0.0125599);
}

double NNfunction_sb_dLuR::synapse0x181d4b0() {
   return (neuron0x180c500()*0.0250896);
}

double NNfunction_sb_dLuR::synapse0x181d4f0() {
   return (neuron0x180c840()*0.0781455);
}

double NNfunction_sb_dLuR::synapse0x181d530() {
   return (neuron0x180cb80()*-0.0805843);
}

double NNfunction_sb_dLuR::synapse0x181d570() {
   return (neuron0x180cec0()*0.854563);
}

double NNfunction_sb_dLuR::synapse0x181d5b0() {
   return (neuron0x180d200()*0.0930238);
}

double NNfunction_sb_dLuR::synapse0x181d5f0() {
   return (neuron0x180d540()*-0.00145486);
}

double NNfunction_sb_dLuR::synapse0x181d630() {
   return (neuron0x180d880()*0.0529422);
}

double NNfunction_sb_dLuR::synapse0x181d670() {
   return (neuron0x180dbc0()*0.0582037);
}

double NNfunction_sb_dLuR::synapse0x181d6b0() {
   return (neuron0x180df00()*-0.153289);
}

double NNfunction_sb_dLuR::synapse0x181d6f0() {
   return (neuron0x180e240()*-0.0834915);
}

double NNfunction_sb_dLuR::synapse0x181d730() {
   return (neuron0x180e580()*-0.0250082);
}

double NNfunction_sb_dLuR::synapse0x181d770() {
   return (neuron0x180e8c0()*-0.117055);
}

double NNfunction_sb_dLuR::synapse0x181d7b0() {
   return (neuron0x180ec00()*0.0450608);
}

double NNfunction_sb_dLuR::synapse0x181d7f0() {
   return (neuron0x180ef40()*-0.0468447);
}

double NNfunction_sb_dLuR::synapse0x181d830() {
   return (neuron0x180f280()*-0.281436);
}

double NNfunction_sb_dLuR::synapse0x181d870() {
   return (neuron0x180f5c0()*-0.043296);
}

double NNfunction_sb_dLuR::synapse0x181d300() {
   return (neuron0x180f900()*-0.025282);
}

double NNfunction_sb_dLuR::synapse0x181d340() {
   return (neuron0x180fe60()*-0.106782);
}

double NNfunction_sb_dLuR::synapse0x181d9c0() {
   return (neuron0x1810080()*0.151084);
}

double NNfunction_sb_dLuR::synapse0x181da00() {
   return (neuron0x18103c0()*-0.100365);
}

double NNfunction_sb_dLuR::synapse0x181da40() {
   return (neuron0x1810700()*-0.0600184);
}

double NNfunction_sb_dLuR::synapse0x181da80() {
   return (neuron0x1810a40()*-0.000107499);
}

double NNfunction_sb_dLuR::synapse0x181dac0() {
   return (neuron0x1810d80()*0.0145594);
}

double NNfunction_sb_dLuR::synapse0x181db00() {
   return (neuron0x18110c0()*0.0160924);
}

double NNfunction_sb_dLuR::synapse0x181de80() {
   return (neuron0x180c500()*-0.0381289);
}

double NNfunction_sb_dLuR::synapse0x181dec0() {
   return (neuron0x180c840()*-0.0634958);
}

double NNfunction_sb_dLuR::synapse0x181df00() {
   return (neuron0x180cb80()*-0.291374);
}

double NNfunction_sb_dLuR::synapse0x181df40() {
   return (neuron0x180cec0()*-0.544317);
}

double NNfunction_sb_dLuR::synapse0x181df80() {
   return (neuron0x180d200()*0.00298589);
}

double NNfunction_sb_dLuR::synapse0x181dfc0() {
   return (neuron0x180d540()*0.0416596);
}

double NNfunction_sb_dLuR::synapse0x181e000() {
   return (neuron0x180d880()*0.0144963);
}

double NNfunction_sb_dLuR::synapse0x181e040() {
   return (neuron0x180dbc0()*-0.0178833);
}

double NNfunction_sb_dLuR::synapse0x181e080() {
   return (neuron0x180df00()*-0.0481917);
}

double NNfunction_sb_dLuR::synapse0x181e0c0() {
   return (neuron0x180e240()*-0.0231274);
}

double NNfunction_sb_dLuR::synapse0x181e100() {
   return (neuron0x180e580()*-0.0231289);
}

double NNfunction_sb_dLuR::synapse0x181e140() {
   return (neuron0x180e8c0()*0.100356);
}

double NNfunction_sb_dLuR::synapse0x181e180() {
   return (neuron0x180ec00()*-0.282631);
}

double NNfunction_sb_dLuR::synapse0x181e1c0() {
   return (neuron0x180ef40()*0.0456172);
}

double NNfunction_sb_dLuR::synapse0x181e200() {
   return (neuron0x180f280()*0.075919);
}

double NNfunction_sb_dLuR::synapse0x181e240() {
   return (neuron0x180f5c0()*0.00683371);
}

double NNfunction_sb_dLuR::synapse0x181dcd0() {
   return (neuron0x180f900()*0.055052);
}

double NNfunction_sb_dLuR::synapse0x181dd10() {
   return (neuron0x180fe60()*-0.0691983);
}

double NNfunction_sb_dLuR::synapse0x181e390() {
   return (neuron0x1810080()*-0.0697889);
}

double NNfunction_sb_dLuR::synapse0x181e3d0() {
   return (neuron0x18103c0()*-0.0655627);
}

double NNfunction_sb_dLuR::synapse0x181e410() {
   return (neuron0x1810700()*0.00436049);
}

double NNfunction_sb_dLuR::synapse0x181e450() {
   return (neuron0x1810a40()*-0.0350874);
}

double NNfunction_sb_dLuR::synapse0x181e490() {
   return (neuron0x1810d80()*-0.0213635);
}

double NNfunction_sb_dLuR::synapse0x181e4d0() {
   return (neuron0x18110c0()*0.000578115);
}

double NNfunction_sb_dLuR::synapse0x181e850() {
   return (neuron0x180c500()*-0.0288975);
}

double NNfunction_sb_dLuR::synapse0x181e890() {
   return (neuron0x180c840()*-0.278135);
}

double NNfunction_sb_dLuR::synapse0x181e8d0() {
   return (neuron0x180cb80()*-0.289988);
}

double NNfunction_sb_dLuR::synapse0x181e910() {
   return (neuron0x180cec0()*0.485972);
}

double NNfunction_sb_dLuR::synapse0x181e950() {
   return (neuron0x180d200()*-0.0398715);
}

double NNfunction_sb_dLuR::synapse0x181e990() {
   return (neuron0x180d540()*0.0224532);
}

double NNfunction_sb_dLuR::synapse0x181e9d0() {
   return (neuron0x180d880()*-0.141289);
}

double NNfunction_sb_dLuR::synapse0x181ea10() {
   return (neuron0x180dbc0()*0.0609434);
}

double NNfunction_sb_dLuR::synapse0x181ea50() {
   return (neuron0x180df00()*0.279557);
}

double NNfunction_sb_dLuR::synapse0x181ea90() {
   return (neuron0x180e240()*0.031798);
}

double NNfunction_sb_dLuR::synapse0x181ead0() {
   return (neuron0x180e580()*0.167778);
}

double NNfunction_sb_dLuR::synapse0x181eb10() {
   return (neuron0x180e8c0()*-0.236722);
}

double NNfunction_sb_dLuR::synapse0x181eb50() {
   return (neuron0x180ec00()*-0.0714815);
}

double NNfunction_sb_dLuR::synapse0x181eb90() {
   return (neuron0x180ef40()*0.120873);
}

double NNfunction_sb_dLuR::synapse0x181ebd0() {
   return (neuron0x180f280()*-0.512438);
}

double NNfunction_sb_dLuR::synapse0x181ec10() {
   return (neuron0x180f5c0()*0.0187274);
}

double NNfunction_sb_dLuR::synapse0x181e6a0() {
   return (neuron0x180f900()*0.200506);
}

double NNfunction_sb_dLuR::synapse0x181e6e0() {
   return (neuron0x180fe60()*-0.310446);
}

double NNfunction_sb_dLuR::synapse0x181ed60() {
   return (neuron0x1810080()*0.0915011);
}

double NNfunction_sb_dLuR::synapse0x181eda0() {
   return (neuron0x18103c0()*-0.127442);
}

double NNfunction_sb_dLuR::synapse0x181ede0() {
   return (neuron0x1810700()*-0.0173161);
}

double NNfunction_sb_dLuR::synapse0x181ee20() {
   return (neuron0x1810a40()*-0.037628);
}

double NNfunction_sb_dLuR::synapse0x181ee60() {
   return (neuron0x1810d80()*-0.0650795);
}

double NNfunction_sb_dLuR::synapse0x181eea0() {
   return (neuron0x18110c0()*-0.0570175);
}

double NNfunction_sb_dLuR::synapse0x181f220() {
   return (neuron0x180c500()*0.0470139);
}

double NNfunction_sb_dLuR::synapse0x181f260() {
   return (neuron0x180c840()*-0.0352467);
}

double NNfunction_sb_dLuR::synapse0x181f2a0() {
   return (neuron0x180cb80()*0.0373443);
}

double NNfunction_sb_dLuR::synapse0x181f2e0() {
   return (neuron0x180cec0()*-14.6444);
}

double NNfunction_sb_dLuR::synapse0x181f320() {
   return (neuron0x180d200()*-0.000228861);
}

double NNfunction_sb_dLuR::synapse0x181f360() {
   return (neuron0x180d540()*0.011222);
}

double NNfunction_sb_dLuR::synapse0x181f3a0() {
   return (neuron0x180d880()*-0.035783);
}

double NNfunction_sb_dLuR::synapse0x181f3e0() {
   return (neuron0x180dbc0()*-0.0181234);
}

double NNfunction_sb_dLuR::synapse0x181f420() {
   return (neuron0x180df00()*0.0183026);
}

double NNfunction_sb_dLuR::synapse0x181f460() {
   return (neuron0x180e240()*0.00831296);
}

double NNfunction_sb_dLuR::synapse0x181f4a0() {
   return (neuron0x180e580()*-0.00314917);
}

double NNfunction_sb_dLuR::synapse0x181f4e0() {
   return (neuron0x180e8c0()*0.393007);
}

double NNfunction_sb_dLuR::synapse0x181f520() {
   return (neuron0x180ec00()*-0.0075533);
}

double NNfunction_sb_dLuR::synapse0x181f560() {
   return (neuron0x180ef40()*0.0164861);
}

double NNfunction_sb_dLuR::synapse0x181f5a0() {
   return (neuron0x180f280()*-0.0204246);
}

double NNfunction_sb_dLuR::synapse0x181f5e0() {
   return (neuron0x180f5c0()*-0.00508171);
}

double NNfunction_sb_dLuR::synapse0x181f070() {
   return (neuron0x180f900()*0.013162);
}

double NNfunction_sb_dLuR::synapse0x181f0b0() {
   return (neuron0x180fe60()*-0.00888256);
}

double NNfunction_sb_dLuR::synapse0x181f730() {
   return (neuron0x1810080()*-0.0295304);
}

double NNfunction_sb_dLuR::synapse0x181f770() {
   return (neuron0x18103c0()*-0.0273577);
}

double NNfunction_sb_dLuR::synapse0x181f7b0() {
   return (neuron0x1810700()*0.0448128);
}

double NNfunction_sb_dLuR::synapse0x181f7f0() {
   return (neuron0x1810a40()*-0.0142693);
}

double NNfunction_sb_dLuR::synapse0x181f830() {
   return (neuron0x1810d80()*0.0201454);
}

double NNfunction_sb_dLuR::synapse0x181f870() {
   return (neuron0x18110c0()*-0.00229655);
}

double NNfunction_sb_dLuR::synapse0x181fbf0() {
   return (neuron0x180c500()*0.0334253);
}

double NNfunction_sb_dLuR::synapse0x181fc30() {
   return (neuron0x180c840()*-0.145507);
}

double NNfunction_sb_dLuR::synapse0x181fc70() {
   return (neuron0x180cb80()*0.0368367);
}

double NNfunction_sb_dLuR::synapse0x181fcb0() {
   return (neuron0x180cec0()*-0.609227);
}

double NNfunction_sb_dLuR::synapse0x181fcf0() {
   return (neuron0x180d200()*0.0814243);
}

double NNfunction_sb_dLuR::synapse0x181fd30() {
   return (neuron0x180d540()*0.0288658);
}

double NNfunction_sb_dLuR::synapse0x181fd70() {
   return (neuron0x180d880()*0.0414582);
}

double NNfunction_sb_dLuR::synapse0x181fdb0() {
   return (neuron0x180dbc0()*-0.0610824);
}

double NNfunction_sb_dLuR::synapse0x181fdf0() {
   return (neuron0x180df00()*-0.0492396);
}

double NNfunction_sb_dLuR::synapse0x1817fb0() {
   return (neuron0x180e240()*0.00423552);
}

double NNfunction_sb_dLuR::synapse0x1817ff0() {
   return (neuron0x180e580()*0.000227855);
}

double NNfunction_sb_dLuR::synapse0x1818030() {
   return (neuron0x180e8c0()*0.122793);
}

double NNfunction_sb_dLuR::synapse0x1818070() {
   return (neuron0x180ec00()*-0.0873674);
}

double NNfunction_sb_dLuR::synapse0x18180b0() {
   return (neuron0x180ef40()*-0.0150106);
}

double NNfunction_sb_dLuR::synapse0x18180f0() {
   return (neuron0x180f280()*0.296928);
}

double NNfunction_sb_dLuR::synapse0x1818130() {
   return (neuron0x180f5c0()*-0.107657);
}

double NNfunction_sb_dLuR::synapse0x181fa40() {
   return (neuron0x180f900()*-0.0614376);
}

double NNfunction_sb_dLuR::synapse0x181fa80() {
   return (neuron0x180fe60()*-0.0364472);
}

double NNfunction_sb_dLuR::synapse0x1818280() {
   return (neuron0x1810080()*0.0253373);
}

double NNfunction_sb_dLuR::synapse0x18182c0() {
   return (neuron0x18103c0()*-0.0352372);
}

double NNfunction_sb_dLuR::synapse0x1818300() {
   return (neuron0x1810700()*-0.00109227);
}

double NNfunction_sb_dLuR::synapse0x1818340() {
   return (neuron0x1810a40()*0.0219689);
}

double NNfunction_sb_dLuR::synapse0x1818380() {
   return (neuron0x1810d80()*-0.0269791);
}

double NNfunction_sb_dLuR::synapse0x18183c0() {
   return (neuron0x18110c0()*-0.000696665);
}

double NNfunction_sb_dLuR::synapse0x1818740() {
   return (neuron0x180c500()*-0.00173368);
}

double NNfunction_sb_dLuR::synapse0x1818780() {
   return (neuron0x180c840()*0.0372542);
}

double NNfunction_sb_dLuR::synapse0x18187c0() {
   return (neuron0x180cb80()*0.0190896);
}

double NNfunction_sb_dLuR::synapse0x1818800() {
   return (neuron0x180cec0()*-0.0574138);
}

double NNfunction_sb_dLuR::synapse0x1818840() {
   return (neuron0x180d200()*-0.0181286);
}

double NNfunction_sb_dLuR::synapse0x1818880() {
   return (neuron0x180d540()*0.00491395);
}

double NNfunction_sb_dLuR::synapse0x18188c0() {
   return (neuron0x180d880()*-0.00268996);
}

double NNfunction_sb_dLuR::synapse0x1818900() {
   return (neuron0x180dbc0()*0.0229706);
}

double NNfunction_sb_dLuR::synapse0x1818940() {
   return (neuron0x180df00()*0.0141744);
}

double NNfunction_sb_dLuR::synapse0x1818980() {
   return (neuron0x180e240()*0.00656592);
}

double NNfunction_sb_dLuR::synapse0x18189c0() {
   return (neuron0x180e580()*-0.02032);
}

double NNfunction_sb_dLuR::synapse0x1818a00() {
   return (neuron0x180e8c0()*1.08143);
}

double NNfunction_sb_dLuR::synapse0x1818a40() {
   return (neuron0x180ec00()*0.0290033);
}

double NNfunction_sb_dLuR::synapse0x1818a80() {
   return (neuron0x180ef40()*0.04709);
}

double NNfunction_sb_dLuR::synapse0x1818ac0() {
   return (neuron0x180f280()*1.26717);
}

double NNfunction_sb_dLuR::synapse0x1818b00() {
   return (neuron0x180f5c0()*-0.00726956);
}

double NNfunction_sb_dLuR::synapse0x1818590() {
   return (neuron0x180f900()*0.0631596);
}

double NNfunction_sb_dLuR::synapse0x18185d0() {
   return (neuron0x180fe60()*0.00637831);
}

double NNfunction_sb_dLuR::synapse0x1818c50() {
   return (neuron0x1810080()*0.025739);
}

double NNfunction_sb_dLuR::synapse0x1818c90() {
   return (neuron0x18103c0()*-0.0244373);
}

double NNfunction_sb_dLuR::synapse0x1818cd0() {
   return (neuron0x1810700()*0.0233187);
}

double NNfunction_sb_dLuR::synapse0x1818d10() {
   return (neuron0x1810a40()*0.0298958);
}

double NNfunction_sb_dLuR::synapse0x1818d50() {
   return (neuron0x1810d80()*0.0326111);
}

double NNfunction_sb_dLuR::synapse0x1818d90() {
   return (neuron0x18110c0()*0.0693351);
}

double NNfunction_sb_dLuR::synapse0x1818f60() {
   return (neuron0x180c500()*0.00631093);
}

double NNfunction_sb_dLuR::synapse0x1821ff0() {
   return (neuron0x180c840()*0.00267005);
}

double NNfunction_sb_dLuR::synapse0x1822030() {
   return (neuron0x180cb80()*-0.00417816);
}

double NNfunction_sb_dLuR::synapse0x1822070() {
   return (neuron0x180cec0()*1.53929);
}

double NNfunction_sb_dLuR::synapse0x18220b0() {
   return (neuron0x180d200()*0.030764);
}

double NNfunction_sb_dLuR::synapse0x18220f0() {
   return (neuron0x180d540()*0.0660857);
}

double NNfunction_sb_dLuR::synapse0x1822130() {
   return (neuron0x180d880()*0.0116457);
}

double NNfunction_sb_dLuR::synapse0x1822170() {
   return (neuron0x180dbc0()*-0.0198657);
}

double NNfunction_sb_dLuR::synapse0x18221b0() {
   return (neuron0x180df00()*0.0180138);
}

double NNfunction_sb_dLuR::synapse0x18221f0() {
   return (neuron0x180e240()*-0.0172141);
}

double NNfunction_sb_dLuR::synapse0x1822230() {
   return (neuron0x180e580()*-0.00467275);
}

double NNfunction_sb_dLuR::synapse0x1822270() {
   return (neuron0x180e8c0()*0.0355627);
}

double NNfunction_sb_dLuR::synapse0x18222b0() {
   return (neuron0x180ec00()*-0.0591505);
}

double NNfunction_sb_dLuR::synapse0x18222f0() {
   return (neuron0x180ef40()*-0.0065842);
}

double NNfunction_sb_dLuR::synapse0x1822330() {
   return (neuron0x180f280()*0.296481);
}

double NNfunction_sb_dLuR::synapse0x1822370() {
   return (neuron0x180f5c0()*-0.102216);
}

double NNfunction_sb_dLuR::synapse0x1821e40() {
   return (neuron0x180f900()*-0.0371011);
}

double NNfunction_sb_dLuR::synapse0x1821e80() {
   return (neuron0x180fe60()*-0.0512229);
}

double NNfunction_sb_dLuR::synapse0x18224c0() {
   return (neuron0x1810080()*-0.055519);
}

double NNfunction_sb_dLuR::synapse0x1822500() {
   return (neuron0x18103c0()*-0.0142072);
}

double NNfunction_sb_dLuR::synapse0x1822540() {
   return (neuron0x1810700()*0.0149789);
}

double NNfunction_sb_dLuR::synapse0x1822580() {
   return (neuron0x1810a40()*0.0109599);
}

double NNfunction_sb_dLuR::synapse0x18225c0() {
   return (neuron0x1810d80()*-0.0214217);
}

double NNfunction_sb_dLuR::synapse0x1822600() {
   return (neuron0x18110c0()*-0.0236578);
}

double NNfunction_sb_dLuR::synapse0x1822980() {
   return (neuron0x180c500()*-0.00834655);
}

double NNfunction_sb_dLuR::synapse0x18229c0() {
   return (neuron0x180c840()*0.0247211);
}

double NNfunction_sb_dLuR::synapse0x1822a00() {
   return (neuron0x180cb80()*0.0599663);
}

double NNfunction_sb_dLuR::synapse0x1822a40() {
   return (neuron0x180cec0()*0.122713);
}

double NNfunction_sb_dLuR::synapse0x1822a80() {
   return (neuron0x180d200()*-0.0348814);
}

double NNfunction_sb_dLuR::synapse0x1822ac0() {
   return (neuron0x180d540()*-0.00255735);
}

double NNfunction_sb_dLuR::synapse0x1822b00() {
   return (neuron0x180d880()*0.031406);
}

double NNfunction_sb_dLuR::synapse0x1822b40() {
   return (neuron0x180dbc0()*0.00579222);
}

double NNfunction_sb_dLuR::synapse0x1822b80() {
   return (neuron0x180df00()*-0.0203008);
}

double NNfunction_sb_dLuR::synapse0x1822bc0() {
   return (neuron0x180e240()*0.00222131);
}

double NNfunction_sb_dLuR::synapse0x1822c00() {
   return (neuron0x180e580()*0.00154742);
}

double NNfunction_sb_dLuR::synapse0x1822c40() {
   return (neuron0x180e8c0()*1.88746);
}

double NNfunction_sb_dLuR::synapse0x1822c80() {
   return (neuron0x180ec00()*0.0149);
}

double NNfunction_sb_dLuR::synapse0x1822cc0() {
   return (neuron0x180ef40()*0.0347985);
}

double NNfunction_sb_dLuR::synapse0x1822d00() {
   return (neuron0x180f280()*-1.04216);
}

double NNfunction_sb_dLuR::synapse0x1822d40() {
   return (neuron0x180f5c0()*0.00415391);
}

double NNfunction_sb_dLuR::synapse0x18227d0() {
   return (neuron0x180f900()*-0.00813982);
}

double NNfunction_sb_dLuR::synapse0x1822810() {
   return (neuron0x180fe60()*0.0308987);
}

double NNfunction_sb_dLuR::synapse0x1822e90() {
   return (neuron0x1810080()*-0.0154419);
}

double NNfunction_sb_dLuR::synapse0x1822ed0() {
   return (neuron0x18103c0()*0.0181714);
}

double NNfunction_sb_dLuR::synapse0x1822f10() {
   return (neuron0x1810700()*0.00424159);
}

double NNfunction_sb_dLuR::synapse0x1822f50() {
   return (neuron0x1810a40()*-0.0132502);
}

double NNfunction_sb_dLuR::synapse0x1822f90() {
   return (neuron0x1810d80()*0.014228);
}

double NNfunction_sb_dLuR::synapse0x1822fd0() {
   return (neuron0x18110c0()*0.013438);
}

double NNfunction_sb_dLuR::synapse0x1823350() {
   return (neuron0x180c500()*-0.00323211);
}

double NNfunction_sb_dLuR::synapse0x1823390() {
   return (neuron0x180c840()*-0.0499338);
}

double NNfunction_sb_dLuR::synapse0x18233d0() {
   return (neuron0x180cb80()*0.0721287);
}

double NNfunction_sb_dLuR::synapse0x1823410() {
   return (neuron0x180cec0()*0.219014);
}

double NNfunction_sb_dLuR::synapse0x1823450() {
   return (neuron0x180d200()*-0.00803418);
}

double NNfunction_sb_dLuR::synapse0x1823490() {
   return (neuron0x180d540()*0.0137088);
}

double NNfunction_sb_dLuR::synapse0x18234d0() {
   return (neuron0x180d880()*0.141443);
}

double NNfunction_sb_dLuR::synapse0x1823510() {
   return (neuron0x180dbc0()*-0.0155447);
}

double NNfunction_sb_dLuR::synapse0x1823550() {
   return (neuron0x180df00()*-0.0710885);
}

double NNfunction_sb_dLuR::synapse0x1823590() {
   return (neuron0x180e240()*0.0156583);
}

double NNfunction_sb_dLuR::synapse0x18235d0() {
   return (neuron0x180e580()*-0.00740709);
}

double NNfunction_sb_dLuR::synapse0x1823610() {
   return (neuron0x180e8c0()*0.55056);
}

double NNfunction_sb_dLuR::synapse0x1823650() {
   return (neuron0x180ec00()*0.0703058);
}

double NNfunction_sb_dLuR::synapse0x1823690() {
   return (neuron0x180ef40()*-0.0262125);
}

double NNfunction_sb_dLuR::synapse0x18236d0() {
   return (neuron0x180f280()*0.702266);
}

double NNfunction_sb_dLuR::synapse0x1823710() {
   return (neuron0x180f5c0()*-0.0373653);
}

double NNfunction_sb_dLuR::synapse0x18231a0() {
   return (neuron0x180f900()*-0.0620173);
}

double NNfunction_sb_dLuR::synapse0x18231e0() {
   return (neuron0x180fe60()*0.00558513);
}

double NNfunction_sb_dLuR::synapse0x1823860() {
   return (neuron0x1810080()*-0.0304327);
}

double NNfunction_sb_dLuR::synapse0x18238a0() {
   return (neuron0x18103c0()*-0.0101523);
}

double NNfunction_sb_dLuR::synapse0x18238e0() {
   return (neuron0x1810700()*-0.00384712);
}

double NNfunction_sb_dLuR::synapse0x1823920() {
   return (neuron0x1810a40()*-0.0204368);
}

double NNfunction_sb_dLuR::synapse0x1823960() {
   return (neuron0x1810d80()*0.0349655);
}

double NNfunction_sb_dLuR::synapse0x18239a0() {
   return (neuron0x18110c0()*0.0386251);
}

double NNfunction_sb_dLuR::synapse0x1823d20() {
   return (neuron0x180c500()*-0.0393088);
}

double NNfunction_sb_dLuR::synapse0x1823d60() {
   return (neuron0x180c840()*0.0329274);
}

double NNfunction_sb_dLuR::synapse0x1823da0() {
   return (neuron0x180cb80()*-0.0262832);
}

double NNfunction_sb_dLuR::synapse0x1823de0() {
   return (neuron0x180cec0()*7.55235);
}

double NNfunction_sb_dLuR::synapse0x1823e20() {
   return (neuron0x180d200()*0.00339309);
}

double NNfunction_sb_dLuR::synapse0x1823e60() {
   return (neuron0x180d540()*-0.0099333);
}

double NNfunction_sb_dLuR::synapse0x1823ea0() {
   return (neuron0x180d880()*0.00771775);
}

double NNfunction_sb_dLuR::synapse0x1823ee0() {
   return (neuron0x180dbc0()*0.0113334);
}

double NNfunction_sb_dLuR::synapse0x1823f20() {
   return (neuron0x180df00()*0.00865915);
}

double NNfunction_sb_dLuR::synapse0x1823f60() {
   return (neuron0x180e240()*-0.0297742);
}

double NNfunction_sb_dLuR::synapse0x1823fa0() {
   return (neuron0x180e580()*-0.00710132);
}

double NNfunction_sb_dLuR::synapse0x1823fe0() {
   return (neuron0x180e8c0()*-0.23829);
}

double NNfunction_sb_dLuR::synapse0x1824020() {
   return (neuron0x180ec00()*0.0146457);
}

double NNfunction_sb_dLuR::synapse0x1824060() {
   return (neuron0x180ef40()*0.0204076);
}

double NNfunction_sb_dLuR::synapse0x18240a0() {
   return (neuron0x180f280()*0.853884);
}

double NNfunction_sb_dLuR::synapse0x18240e0() {
   return (neuron0x180f5c0()*0.0221322);
}

double NNfunction_sb_dLuR::synapse0x1823b70() {
   return (neuron0x180f900()*0.0204422);
}

double NNfunction_sb_dLuR::synapse0x1823bb0() {
   return (neuron0x180fe60()*0.0148597);
}

double NNfunction_sb_dLuR::synapse0x1824230() {
   return (neuron0x1810080()*0.0289183);
}

double NNfunction_sb_dLuR::synapse0x1824270() {
   return (neuron0x18103c0()*0.00284221);
}

double NNfunction_sb_dLuR::synapse0x18242b0() {
   return (neuron0x1810700()*-0.0556638);
}

double NNfunction_sb_dLuR::synapse0x18242f0() {
   return (neuron0x1810a40()*0.00407292);
}

double NNfunction_sb_dLuR::synapse0x1824330() {
   return (neuron0x1810d80()*-0.037469);
}

double NNfunction_sb_dLuR::synapse0x1824370() {
   return (neuron0x18110c0()*-0.0357746);
}

double NNfunction_sb_dLuR::synapse0x18246f0() {
   return (neuron0x180c500()*0.078763);
}

double NNfunction_sb_dLuR::synapse0x1824730() {
   return (neuron0x180c840()*-0.319435);
}

double NNfunction_sb_dLuR::synapse0x1824770() {
   return (neuron0x180cb80()*0.339638);
}

double NNfunction_sb_dLuR::synapse0x18247b0() {
   return (neuron0x180cec0()*-0.257214);
}

double NNfunction_sb_dLuR::synapse0x18247f0() {
   return (neuron0x180d200()*-0.0663891);
}

double NNfunction_sb_dLuR::synapse0x1824830() {
   return (neuron0x180d540()*0.0331078);
}

double NNfunction_sb_dLuR::synapse0x1824870() {
   return (neuron0x180d880()*-0.0166639);
}

double NNfunction_sb_dLuR::synapse0x18248b0() {
   return (neuron0x180dbc0()*-0.0923705);
}

double NNfunction_sb_dLuR::synapse0x18248f0() {
   return (neuron0x180df00()*0.123336);
}

double NNfunction_sb_dLuR::synapse0x1824930() {
   return (neuron0x180e240()*0.49239);
}

double NNfunction_sb_dLuR::synapse0x1824970() {
   return (neuron0x180e580()*-0.163811);
}

double NNfunction_sb_dLuR::synapse0x18249b0() {
   return (neuron0x180e8c0()*-0.472535);
}

double NNfunction_sb_dLuR::synapse0x18249f0() {
   return (neuron0x180ec00()*0.12961);
}

double NNfunction_sb_dLuR::synapse0x1824a30() {
   return (neuron0x180ef40()*0.210277);
}

double NNfunction_sb_dLuR::synapse0x1824a70() {
   return (neuron0x180f280()*-0.562105);
}

double NNfunction_sb_dLuR::synapse0x1824ab0() {
   return (neuron0x180f5c0()*0.0196972);
}

double NNfunction_sb_dLuR::synapse0x1824540() {
   return (neuron0x180f900()*0.16483);
}

double NNfunction_sb_dLuR::synapse0x1824580() {
   return (neuron0x180fe60()*0.0973356);
}

double NNfunction_sb_dLuR::synapse0x1824c00() {
   return (neuron0x1810080()*0.123885);
}

double NNfunction_sb_dLuR::synapse0x1824c40() {
   return (neuron0x18103c0()*0.0340705);
}

double NNfunction_sb_dLuR::synapse0x1824c80() {
   return (neuron0x1810700()*0.129209);
}

double NNfunction_sb_dLuR::synapse0x1824cc0() {
   return (neuron0x1810a40()*-0.0848636);
}

double NNfunction_sb_dLuR::synapse0x1824d00() {
   return (neuron0x1810d80()*-0.0192266);
}

double NNfunction_sb_dLuR::synapse0x1824d40() {
   return (neuron0x18110c0()*0.132335);
}

double NNfunction_sb_dLuR::synapse0x18250c0() {
   return (neuron0x180c500()*0.184975);
}

double NNfunction_sb_dLuR::synapse0x1825100() {
   return (neuron0x180c840()*-0.50023);
}

double NNfunction_sb_dLuR::synapse0x1825140() {
   return (neuron0x180cb80()*-0.0318666);
}

double NNfunction_sb_dLuR::synapse0x1825180() {
   return (neuron0x180cec0()*0.698813);
}

double NNfunction_sb_dLuR::synapse0x18251c0() {
   return (neuron0x180d200()*0.110927);
}

double NNfunction_sb_dLuR::synapse0x1825200() {
   return (neuron0x180d540()*-0.0964128);
}

double NNfunction_sb_dLuR::synapse0x1825240() {
   return (neuron0x180d880()*0.0705987);
}

double NNfunction_sb_dLuR::synapse0x1825280() {
   return (neuron0x180dbc0()*-0.0534954);
}

double NNfunction_sb_dLuR::synapse0x18252c0() {
   return (neuron0x180df00()*-0.0693267);
}

double NNfunction_sb_dLuR::synapse0x1825300() {
   return (neuron0x180e240()*0.116877);
}

double NNfunction_sb_dLuR::synapse0x1825340() {
   return (neuron0x180e580()*-0.00114172);
}

double NNfunction_sb_dLuR::synapse0x1825380() {
   return (neuron0x180e8c0()*0.132482);
}

double NNfunction_sb_dLuR::synapse0x18253c0() {
   return (neuron0x180ec00()*0.324382);
}

double NNfunction_sb_dLuR::synapse0x1825400() {
   return (neuron0x180ef40()*-0.0924692);
}

double NNfunction_sb_dLuR::synapse0x1825440() {
   return (neuron0x180f280()*-0.842597);
}

double NNfunction_sb_dLuR::synapse0x1825480() {
   return (neuron0x180f5c0()*-0.0364995);
}

double NNfunction_sb_dLuR::synapse0x1824f10() {
   return (neuron0x180f900()*-0.245362);
}

double NNfunction_sb_dLuR::synapse0x1824f50() {
   return (neuron0x180fe60()*0.17736);
}

double NNfunction_sb_dLuR::synapse0x18255d0() {
   return (neuron0x1810080()*-0.0257298);
}

double NNfunction_sb_dLuR::synapse0x1825610() {
   return (neuron0x18103c0()*0.112999);
}

double NNfunction_sb_dLuR::synapse0x1825650() {
   return (neuron0x1810700()*-0.108427);
}

double NNfunction_sb_dLuR::synapse0x1825690() {
   return (neuron0x1810a40()*0.104432);
}

double NNfunction_sb_dLuR::synapse0x18256d0() {
   return (neuron0x1810d80()*-0.0272188);
}

double NNfunction_sb_dLuR::synapse0x1825710() {
   return (neuron0x18110c0()*-0.0755751);
}

double NNfunction_sb_dLuR::synapse0x1825a90() {
   return (neuron0x180c500()*-0.0707036);
}

double NNfunction_sb_dLuR::synapse0x1825ad0() {
   return (neuron0x180c840()*-0.16942);
}

double NNfunction_sb_dLuR::synapse0x1825b10() {
   return (neuron0x180cb80()*0.152182);
}

double NNfunction_sb_dLuR::synapse0x1825b50() {
   return (neuron0x180cec0()*0.519758);
}

double NNfunction_sb_dLuR::synapse0x1825b90() {
   return (neuron0x180d200()*-0.0330463);
}

double NNfunction_sb_dLuR::synapse0x1825bd0() {
   return (neuron0x180d540()*-0.0348685);
}

double NNfunction_sb_dLuR::synapse0x1825c10() {
   return (neuron0x180d880()*0.127576);
}

double NNfunction_sb_dLuR::synapse0x1825c50() {
   return (neuron0x180dbc0()*0.203189);
}

double NNfunction_sb_dLuR::synapse0x1825c90() {
   return (neuron0x180df00()*-0.160336);
}

double NNfunction_sb_dLuR::synapse0x1825cd0() {
   return (neuron0x180e240()*0.309421);
}

double NNfunction_sb_dLuR::synapse0x1825d10() {
   return (neuron0x180e580()*0.233202);
}

double NNfunction_sb_dLuR::synapse0x1825d50() {
   return (neuron0x180e8c0()*-0.0530188);
}

double NNfunction_sb_dLuR::synapse0x1825d90() {
   return (neuron0x180ec00()*-0.0113441);
}

double NNfunction_sb_dLuR::synapse0x1825dd0() {
   return (neuron0x180ef40()*-0.00562792);
}

double NNfunction_sb_dLuR::synapse0x1825e10() {
   return (neuron0x180f280()*-0.292727);
}

double NNfunction_sb_dLuR::synapse0x1825e50() {
   return (neuron0x180f5c0()*-0.0115355);
}

double NNfunction_sb_dLuR::synapse0x18258e0() {
   return (neuron0x180f900()*0.011465);
}

double NNfunction_sb_dLuR::synapse0x1825920() {
   return (neuron0x180fe60()*-0.293538);
}

double NNfunction_sb_dLuR::synapse0x1825fa0() {
   return (neuron0x1810080()*0.0440327);
}

double NNfunction_sb_dLuR::synapse0x1825fe0() {
   return (neuron0x18103c0()*0.0603046);
}

double NNfunction_sb_dLuR::synapse0x1826020() {
   return (neuron0x1810700()*-0.0794271);
}

double NNfunction_sb_dLuR::synapse0x1826060() {
   return (neuron0x1810a40()*-0.236516);
}

double NNfunction_sb_dLuR::synapse0x18260a0() {
   return (neuron0x1810d80()*0.00346677);
}

double NNfunction_sb_dLuR::synapse0x18260e0() {
   return (neuron0x18110c0()*0.0351633);
}

double NNfunction_sb_dLuR::synapse0x1826460() {
   return (neuron0x180c500()*-0.110957);
}

double NNfunction_sb_dLuR::synapse0x18264a0() {
   return (neuron0x180c840()*-0.423278);
}

double NNfunction_sb_dLuR::synapse0x18264e0() {
   return (neuron0x180cb80()*-0.207917);
}

double NNfunction_sb_dLuR::synapse0x1826520() {
   return (neuron0x180cec0()*1.08185);
}

double NNfunction_sb_dLuR::synapse0x1826560() {
   return (neuron0x180d200()*-0.0106661);
}

double NNfunction_sb_dLuR::synapse0x18265a0() {
   return (neuron0x180d540()*0.11618);
}

double NNfunction_sb_dLuR::synapse0x18265e0() {
   return (neuron0x180d880()*0.138704);
}

double NNfunction_sb_dLuR::synapse0x1826620() {
   return (neuron0x180dbc0()*-0.100733);
}

double NNfunction_sb_dLuR::synapse0x1826660() {
   return (neuron0x180df00()*-0.126304);
}

double NNfunction_sb_dLuR::synapse0x18266a0() {
   return (neuron0x180e240()*0.0595306);
}

double NNfunction_sb_dLuR::synapse0x18266e0() {
   return (neuron0x180e580()*-0.062342);
}

double NNfunction_sb_dLuR::synapse0x1826720() {
   return (neuron0x180e8c0()*-0.320375);
}

double NNfunction_sb_dLuR::synapse0x1826760() {
   return (neuron0x180ec00()*-0.199743);
}

double NNfunction_sb_dLuR::synapse0x18267a0() {
   return (neuron0x180ef40()*-0.0354036);
}

double NNfunction_sb_dLuR::synapse0x18267e0() {
   return (neuron0x180f280()*-0.107537);
}

double NNfunction_sb_dLuR::synapse0x1826820() {
   return (neuron0x180f5c0()*-0.169748);
}

double NNfunction_sb_dLuR::synapse0x18262b0() {
   return (neuron0x180f900()*-0.0215553);
}

double NNfunction_sb_dLuR::synapse0x18262f0() {
   return (neuron0x180fe60()*-0.208348);
}

double NNfunction_sb_dLuR::synapse0x1826970() {
   return (neuron0x1810080()*-0.170631);
}

double NNfunction_sb_dLuR::synapse0x18269b0() {
   return (neuron0x18103c0()*0.125403);
}

double NNfunction_sb_dLuR::synapse0x18269f0() {
   return (neuron0x1810700()*0.037762);
}

double NNfunction_sb_dLuR::synapse0x1826a30() {
   return (neuron0x1810a40()*-0.00776217);
}

double NNfunction_sb_dLuR::synapse0x1826a70() {
   return (neuron0x1810d80()*-0.0710558);
}

double NNfunction_sb_dLuR::synapse0x1826ab0() {
   return (neuron0x18110c0()*-0.00747755);
}

double NNfunction_sb_dLuR::synapse0x1826e30() {
   return (neuron0x180c500()*-0.541862);
}

double NNfunction_sb_dLuR::synapse0x181b400() {
   return (neuron0x180c840()*-0.526747);
}

double NNfunction_sb_dLuR::synapse0x181b440() {
   return (neuron0x180cb80()*0.0478666);
}

double NNfunction_sb_dLuR::synapse0x181b480() {
   return (neuron0x180cec0()*-0.321998);
}

double NNfunction_sb_dLuR::synapse0x181b6d0() {
   return (neuron0x180d200()*-0.185409);
}

double NNfunction_sb_dLuR::synapse0x181b710() {
   return (neuron0x180d540()*-0.133052);
}

double NNfunction_sb_dLuR::synapse0x181b750() {
   return (neuron0x180d880()*-0.120851);
}

double NNfunction_sb_dLuR::synapse0x181b9a0() {
   return (neuron0x180dbc0()*-0.370998);
}

double NNfunction_sb_dLuR::synapse0x181b9e0() {
   return (neuron0x180df00()*0.0738859);
}

double NNfunction_sb_dLuR::synapse0x181bc30() {
   return (neuron0x180e240()*0.307229);
}

double NNfunction_sb_dLuR::synapse0x181bc70() {
   return (neuron0x180e580()*-0.507988);
}

double NNfunction_sb_dLuR::synapse0x181bcb0() {
   return (neuron0x180e8c0()*0.224546);
}

double NNfunction_sb_dLuR::synapse0x181bf00() {
   return (neuron0x180ec00()*0.279827);
}

double NNfunction_sb_dLuR::synapse0x181bf40() {
   return (neuron0x180ef40()*0.245944);
}

double NNfunction_sb_dLuR::synapse0x181c190() {
   return (neuron0x180f280()*-0.0778273);
}

double NNfunction_sb_dLuR::synapse0x181c1d0() {
   return (neuron0x180f5c0()*0.225087);
}

double NNfunction_sb_dLuR::synapse0x1826c80() {
   return (neuron0x180f900()*-0.197407);
}

double NNfunction_sb_dLuR::synapse0x1826cc0() {
   return (neuron0x180fe60()*0.360104);
}

double NNfunction_sb_dLuR::synapse0x181c320() {
   return (neuron0x1810080()*0.415172);
}

double NNfunction_sb_dLuR::synapse0x181c830() {
   return (neuron0x18103c0()*0.0348329);
}

double NNfunction_sb_dLuR::synapse0x181c870() {
   return (neuron0x1810700()*0.126659);
}

double NNfunction_sb_dLuR::synapse0x181c8b0() {
   return (neuron0x1810a40()*0.135553);
}

double NNfunction_sb_dLuR::synapse0x181cb00() {
   return (neuron0x1810d80()*-0.203558);
}

double NNfunction_sb_dLuR::synapse0x181cb40() {
   return (neuron0x18110c0()*-0.0408009);
}

double NNfunction_sb_dLuR::synapse0x181c3f0() {
   return (neuron0x180c500()*0.0171808);
}

double NNfunction_sb_dLuR::synapse0x181c430() {
   return (neuron0x180c840()*0.0446853);
}

double NNfunction_sb_dLuR::synapse0x181c470() {
   return (neuron0x180cb80()*0.86202);
}

double NNfunction_sb_dLuR::synapse0x181c4b0() {
   return (neuron0x180cec0()*0.12211);
}

double NNfunction_sb_dLuR::synapse0x181ce30() {
   return (neuron0x180d200()*-0.000118811);
}

double NNfunction_sb_dLuR::synapse0x1829180() {
   return (neuron0x180d540()*-0.0510292);
}

double NNfunction_sb_dLuR::synapse0x18291c0() {
   return (neuron0x180d880()*0.00832118);
}

double NNfunction_sb_dLuR::synapse0x1829200() {
   return (neuron0x180dbc0()*0.0740851);
}

double NNfunction_sb_dLuR::synapse0x1829240() {
   return (neuron0x180df00()*-0.0237069);
}

double NNfunction_sb_dLuR::synapse0x1829280() {
   return (neuron0x180e240()*-0.0128673);
}

double NNfunction_sb_dLuR::synapse0x18292c0() {
   return (neuron0x180e580()*0.0485924);
}

double NNfunction_sb_dLuR::synapse0x1829300() {
   return (neuron0x180e8c0()*-1.21067);
}

double NNfunction_sb_dLuR::synapse0x1829340() {
   return (neuron0x180ec00()*0.0396423);
}

double NNfunction_sb_dLuR::synapse0x1829380() {
   return (neuron0x180ef40()*-0.0115922);
}

double NNfunction_sb_dLuR::synapse0x18293c0() {
   return (neuron0x180f280()*0.279644);
}

double NNfunction_sb_dLuR::synapse0x1829400() {
   return (neuron0x180f5c0()*0.0643354);
}

double NNfunction_sb_dLuR::synapse0x181cd10() {
   return (neuron0x180f900()*-0.0246055);
}

double NNfunction_sb_dLuR::synapse0x181cd50() {
   return (neuron0x180fe60()*-0.0440056);
}

double NNfunction_sb_dLuR::synapse0x1829550() {
   return (neuron0x1810080()*0.0371916);
}

double NNfunction_sb_dLuR::synapse0x1829590() {
   return (neuron0x18103c0()*0.0890341);
}

double NNfunction_sb_dLuR::synapse0x18295d0() {
   return (neuron0x1810700()*-0.0274151);
}

double NNfunction_sb_dLuR::synapse0x1829610() {
   return (neuron0x1810a40()*-0.00919265);
}

double NNfunction_sb_dLuR::synapse0x1829650() {
   return (neuron0x1810d80()*0.0450616);
}

double NNfunction_sb_dLuR::synapse0x1829690() {
   return (neuron0x18110c0()*0.00311565);
}

double NNfunction_sb_dLuR::synapse0x1829a10() {
   return (neuron0x180c500()*0.0014893);
}

double NNfunction_sb_dLuR::synapse0x1829a50() {
   return (neuron0x180c840()*0.0389775);
}

double NNfunction_sb_dLuR::synapse0x1829a90() {
   return (neuron0x180cb80()*-0.0558222);
}

double NNfunction_sb_dLuR::synapse0x1829ad0() {
   return (neuron0x180cec0()*-0.608015);
}

double NNfunction_sb_dLuR::synapse0x1829b10() {
   return (neuron0x180d200()*-0.0978353);
}

double NNfunction_sb_dLuR::synapse0x1829b50() {
   return (neuron0x180d540()*0.0596623);
}

double NNfunction_sb_dLuR::synapse0x1829b90() {
   return (neuron0x180d880()*0.000979974);
}

double NNfunction_sb_dLuR::synapse0x1829bd0() {
   return (neuron0x180dbc0()*-0.133399);
}

double NNfunction_sb_dLuR::synapse0x1829c10() {
   return (neuron0x180df00()*0.023466);
}

double NNfunction_sb_dLuR::synapse0x1829c50() {
   return (neuron0x180e240()*0.0706926);
}

double NNfunction_sb_dLuR::synapse0x1829c90() {
   return (neuron0x180e580()*0.0125056);
}

double NNfunction_sb_dLuR::synapse0x1829cd0() {
   return (neuron0x180e8c0()*-0.165386);
}

double NNfunction_sb_dLuR::synapse0x1829d10() {
   return (neuron0x180ec00()*-0.0246334);
}

double NNfunction_sb_dLuR::synapse0x1829d50() {
   return (neuron0x180ef40()*-0.186475);
}

double NNfunction_sb_dLuR::synapse0x1829d90() {
   return (neuron0x180f280()*-0.121102);
}

double NNfunction_sb_dLuR::synapse0x1829dd0() {
   return (neuron0x180f5c0()*-0.0588605);
}

double NNfunction_sb_dLuR::synapse0x1829860() {
   return (neuron0x180f900()*-0.052455);
}

double NNfunction_sb_dLuR::synapse0x18298a0() {
   return (neuron0x180fe60()*-0.246362);
}

double NNfunction_sb_dLuR::synapse0x1829f20() {
   return (neuron0x1810080()*-0.218108);
}

double NNfunction_sb_dLuR::synapse0x1829f60() {
   return (neuron0x18103c0()*-0.00475466);
}

double NNfunction_sb_dLuR::synapse0x1829fa0() {
   return (neuron0x1810700()*0.0208224);
}

double NNfunction_sb_dLuR::synapse0x1829fe0() {
   return (neuron0x1810a40()*-0.160557);
}

double NNfunction_sb_dLuR::synapse0x182a020() {
   return (neuron0x1810d80()*0.0845417);
}

double NNfunction_sb_dLuR::synapse0x182a060() {
   return (neuron0x18110c0()*-0.0248353);
}

double NNfunction_sb_dLuR::synapse0x182a3e0() {
   return (neuron0x180c500()*0.150867);
}

double NNfunction_sb_dLuR::synapse0x182a420() {
   return (neuron0x180c840()*0.401415);
}

double NNfunction_sb_dLuR::synapse0x182a460() {
   return (neuron0x180cb80()*-0.293481);
}

double NNfunction_sb_dLuR::synapse0x182a4a0() {
   return (neuron0x180cec0()*0.126082);
}

double NNfunction_sb_dLuR::synapse0x182a4e0() {
   return (neuron0x180d200()*0.100333);
}

double NNfunction_sb_dLuR::synapse0x182a520() {
   return (neuron0x180d540()*0.0614597);
}

double NNfunction_sb_dLuR::synapse0x182a560() {
   return (neuron0x180d880()*0.0151404);
}

double NNfunction_sb_dLuR::synapse0x182a5a0() {
   return (neuron0x180dbc0()*-0.0501982);
}

double NNfunction_sb_dLuR::synapse0x182a5e0() {
   return (neuron0x180df00()*0.204392);
}

double NNfunction_sb_dLuR::synapse0x182a620() {
   return (neuron0x180e240()*0.507771);
}

double NNfunction_sb_dLuR::synapse0x182a660() {
   return (neuron0x180e580()*-0.211603);
}

double NNfunction_sb_dLuR::synapse0x182a6a0() {
   return (neuron0x180e8c0()*0.183009);
}

double NNfunction_sb_dLuR::synapse0x182a6e0() {
   return (neuron0x180ec00()*-0.135491);
}

double NNfunction_sb_dLuR::synapse0x182a720() {
   return (neuron0x180ef40()*-0.147061);
}

double NNfunction_sb_dLuR::synapse0x182a760() {
   return (neuron0x180f280()*-0.360637);
}

double NNfunction_sb_dLuR::synapse0x182a7a0() {
   return (neuron0x180f5c0()*0.0834769);
}

double NNfunction_sb_dLuR::synapse0x182a230() {
   return (neuron0x180f900()*-0.000267538);
}

double NNfunction_sb_dLuR::synapse0x182a270() {
   return (neuron0x180fe60()*0.483095);
}

double NNfunction_sb_dLuR::synapse0x182a8f0() {
   return (neuron0x1810080()*0.962088);
}

double NNfunction_sb_dLuR::synapse0x182a930() {
   return (neuron0x18103c0()*0.0557545);
}

double NNfunction_sb_dLuR::synapse0x182a970() {
   return (neuron0x1810700()*0.298427);
}

double NNfunction_sb_dLuR::synapse0x182a9b0() {
   return (neuron0x1810a40()*0.0406352);
}

double NNfunction_sb_dLuR::synapse0x182a9f0() {
   return (neuron0x1810d80()*-0.204535);
}

double NNfunction_sb_dLuR::synapse0x182aa30() {
   return (neuron0x18110c0()*-0.198734);
}

double NNfunction_sb_dLuR::synapse0x182adb0() {
   return (neuron0x180c500()*0.067571);
}

double NNfunction_sb_dLuR::synapse0x182adf0() {
   return (neuron0x180c840()*-0.201063);
}

double NNfunction_sb_dLuR::synapse0x182ae30() {
   return (neuron0x180cb80()*0.118348);
}

double NNfunction_sb_dLuR::synapse0x182ae70() {
   return (neuron0x180cec0()*-0.590783);
}

double NNfunction_sb_dLuR::synapse0x182aeb0() {
   return (neuron0x180d200()*-0.00754917);
}

double NNfunction_sb_dLuR::synapse0x182aef0() {
   return (neuron0x180d540()*0.0254245);
}

double NNfunction_sb_dLuR::synapse0x182af30() {
   return (neuron0x180d880()*0.0939807);
}

double NNfunction_sb_dLuR::synapse0x182af70() {
   return (neuron0x180dbc0()*-0.11385);
}

double NNfunction_sb_dLuR::synapse0x182afb0() {
   return (neuron0x180df00()*0.0581982);
}

double NNfunction_sb_dLuR::synapse0x182aff0() {
   return (neuron0x180e240()*-0.0234116);
}

double NNfunction_sb_dLuR::synapse0x182b030() {
   return (neuron0x180e580()*-0.0554043);
}

double NNfunction_sb_dLuR::synapse0x182b070() {
   return (neuron0x180e8c0()*-0.211315);
}

double NNfunction_sb_dLuR::synapse0x182b0b0() {
   return (neuron0x180ec00()*-0.0805832);
}

double NNfunction_sb_dLuR::synapse0x182b0f0() {
   return (neuron0x180ef40()*0.00489338);
}

double NNfunction_sb_dLuR::synapse0x182b130() {
   return (neuron0x180f280()*-0.182892);
}

double NNfunction_sb_dLuR::synapse0x182b170() {
   return (neuron0x180f5c0()*-0.150082);
}

double NNfunction_sb_dLuR::synapse0x182ac00() {
   return (neuron0x180f900()*0.0291409);
}

double NNfunction_sb_dLuR::synapse0x182ac40() {
   return (neuron0x180fe60()*-0.199047);
}

double NNfunction_sb_dLuR::synapse0x182b2c0() {
   return (neuron0x1810080()*0.090473);
}

double NNfunction_sb_dLuR::synapse0x182b300() {
   return (neuron0x18103c0()*-0.0526034);
}

double NNfunction_sb_dLuR::synapse0x182b340() {
   return (neuron0x1810700()*0.0571604);
}

double NNfunction_sb_dLuR::synapse0x182b380() {
   return (neuron0x1810a40()*0.102509);
}

double NNfunction_sb_dLuR::synapse0x182b3c0() {
   return (neuron0x1810d80()*0.0272417);
}

double NNfunction_sb_dLuR::synapse0x182b400() {
   return (neuron0x18110c0()*0.0196741);
}

double NNfunction_sb_dLuR::synapse0x182b780() {
   return (neuron0x180c500()*0.0558446);
}

double NNfunction_sb_dLuR::synapse0x182b7c0() {
   return (neuron0x180c840()*-0.0649139);
}

double NNfunction_sb_dLuR::synapse0x182b800() {
   return (neuron0x180cb80()*-0.112991);
}

double NNfunction_sb_dLuR::synapse0x182b840() {
   return (neuron0x180cec0()*-0.517354);
}

double NNfunction_sb_dLuR::synapse0x182b880() {
   return (neuron0x180d200()*0.0126325);
}

double NNfunction_sb_dLuR::synapse0x182b8c0() {
   return (neuron0x180d540()*-0.0513843);
}

double NNfunction_sb_dLuR::synapse0x182b900() {
   return (neuron0x180d880()*0.0794211);
}

double NNfunction_sb_dLuR::synapse0x182b940() {
   return (neuron0x180dbc0()*0.0356454);
}

double NNfunction_sb_dLuR::synapse0x182b980() {
   return (neuron0x180df00()*-0.0730785);
}

double NNfunction_sb_dLuR::synapse0x182b9c0() {
   return (neuron0x180e240()*0.0559847);
}

double NNfunction_sb_dLuR::synapse0x182ba00() {
   return (neuron0x180e580()*-0.126455);
}

double NNfunction_sb_dLuR::synapse0x182ba40() {
   return (neuron0x180e8c0()*0.126372);
}

double NNfunction_sb_dLuR::synapse0x182ba80() {
   return (neuron0x180ec00()*0.0488953);
}

double NNfunction_sb_dLuR::synapse0x182bac0() {
   return (neuron0x180ef40()*-0.0319623);
}

double NNfunction_sb_dLuR::synapse0x182bb00() {
   return (neuron0x180f280()*-0.0427138);
}

double NNfunction_sb_dLuR::synapse0x182bb40() {
   return (neuron0x180f5c0()*-0.024654);
}

double NNfunction_sb_dLuR::synapse0x182b5d0() {
   return (neuron0x180f900()*-0.0854192);
}

double NNfunction_sb_dLuR::synapse0x182b610() {
   return (neuron0x180fe60()*0.155733);
}

double NNfunction_sb_dLuR::synapse0x182bc90() {
   return (neuron0x1810080()*-0.200385);
}

double NNfunction_sb_dLuR::synapse0x182bcd0() {
   return (neuron0x18103c0()*0.119248);
}

double NNfunction_sb_dLuR::synapse0x182bd10() {
   return (neuron0x1810700()*-0.0461939);
}

double NNfunction_sb_dLuR::synapse0x182bd50() {
   return (neuron0x1810a40()*0.042576);
}

double NNfunction_sb_dLuR::synapse0x182bd90() {
   return (neuron0x1810d80()*0.00897758);
}

double NNfunction_sb_dLuR::synapse0x182bdd0() {
   return (neuron0x18110c0()*0.00854828);
}

double NNfunction_sb_dLuR::synapse0x182c150() {
   return (neuron0x180c500()*0.0211418);
}

double NNfunction_sb_dLuR::synapse0x182c190() {
   return (neuron0x180c840()*0.00281704);
}

double NNfunction_sb_dLuR::synapse0x182c1d0() {
   return (neuron0x180cb80()*0.0201767);
}

double NNfunction_sb_dLuR::synapse0x182c210() {
   return (neuron0x180cec0()*-3.13217);
}

double NNfunction_sb_dLuR::synapse0x182c250() {
   return (neuron0x180d200()*-0.00854681);
}

double NNfunction_sb_dLuR::synapse0x182c290() {
   return (neuron0x180d540()*-0.0185481);
}

double NNfunction_sb_dLuR::synapse0x182c2d0() {
   return (neuron0x180d880()*0.00510297);
}

double NNfunction_sb_dLuR::synapse0x182c310() {
   return (neuron0x180dbc0()*-0.0413197);
}

double NNfunction_sb_dLuR::synapse0x182c350() {
   return (neuron0x180df00()*0.00590413);
}

double NNfunction_sb_dLuR::synapse0x182c390() {
   return (neuron0x180e240()*0.00232534);
}

double NNfunction_sb_dLuR::synapse0x182c3d0() {
   return (neuron0x180e580()*-0.0109787);
}

double NNfunction_sb_dLuR::synapse0x182c410() {
   return (neuron0x180e8c0()*-0.891681);
}

double NNfunction_sb_dLuR::synapse0x182c450() {
   return (neuron0x180ec00()*-0.0197616);
}

double NNfunction_sb_dLuR::synapse0x182c490() {
   return (neuron0x180ef40()*0.0227684);
}

double NNfunction_sb_dLuR::synapse0x182c4d0() {
   return (neuron0x180f280()*0.860125);
}

double NNfunction_sb_dLuR::synapse0x182c510() {
   return (neuron0x180f5c0()*-0.000896864);
}

double NNfunction_sb_dLuR::synapse0x182bfa0() {
   return (neuron0x180f900()*0.00416543);
}

double NNfunction_sb_dLuR::synapse0x182bfe0() {
   return (neuron0x180fe60()*-0.0896243);
}

double NNfunction_sb_dLuR::synapse0x182c660() {
   return (neuron0x1810080()*0.0173997);
}

double NNfunction_sb_dLuR::synapse0x182c6a0() {
   return (neuron0x18103c0()*-0.0214936);
}

double NNfunction_sb_dLuR::synapse0x182c6e0() {
   return (neuron0x1810700()*0.0628526);
}

double NNfunction_sb_dLuR::synapse0x182c720() {
   return (neuron0x1810a40()*0.0189153);
}

double NNfunction_sb_dLuR::synapse0x182c760() {
   return (neuron0x1810d80()*0.0140597);
}

double NNfunction_sb_dLuR::synapse0x182c7a0() {
   return (neuron0x18110c0()*-0.0448444);
}

double NNfunction_sb_dLuR::synapse0x182cb20() {
   return (neuron0x180c500()*-0.137192);
}

double NNfunction_sb_dLuR::synapse0x182cb60() {
   return (neuron0x180c840()*-0.206621);
}

double NNfunction_sb_dLuR::synapse0x182cba0() {
   return (neuron0x180cb80()*0.0856141);
}

double NNfunction_sb_dLuR::synapse0x182cbe0() {
   return (neuron0x180cec0()*-0.439359);
}

double NNfunction_sb_dLuR::synapse0x182cc20() {
   return (neuron0x180d200()*-1.04827);
}

double NNfunction_sb_dLuR::synapse0x182cc60() {
   return (neuron0x180d540()*0.121876);
}

double NNfunction_sb_dLuR::synapse0x182cca0() {
   return (neuron0x180d880()*-0.173881);
}

double NNfunction_sb_dLuR::synapse0x182cce0() {
   return (neuron0x180dbc0()*0.0131333);
}

double NNfunction_sb_dLuR::synapse0x182cd20() {
   return (neuron0x180df00()*-0.0740506);
}

double NNfunction_sb_dLuR::synapse0x182cd60() {
   return (neuron0x180e240()*0.199386);
}

double NNfunction_sb_dLuR::synapse0x182cda0() {
   return (neuron0x180e580()*0.105731);
}

double NNfunction_sb_dLuR::synapse0x182cde0() {
   return (neuron0x180e8c0()*-0.484162);
}

double NNfunction_sb_dLuR::synapse0x182ce20() {
   return (neuron0x180ec00()*-0.129328);
}

double NNfunction_sb_dLuR::synapse0x182ce60() {
   return (neuron0x180ef40()*0.156737);
}

double NNfunction_sb_dLuR::synapse0x182cea0() {
   return (neuron0x180f280()*0.191213);
}

double NNfunction_sb_dLuR::synapse0x182cee0() {
   return (neuron0x180f5c0()*-0.0265299);
}

double NNfunction_sb_dLuR::synapse0x182c970() {
   return (neuron0x180f900()*0.0726721);
}

double NNfunction_sb_dLuR::synapse0x182c9b0() {
   return (neuron0x180fe60()*0.277367);
}

double NNfunction_sb_dLuR::synapse0x182d030() {
   return (neuron0x1810080()*-0.162197);
}

double NNfunction_sb_dLuR::synapse0x182d070() {
   return (neuron0x18103c0()*0.0482161);
}

double NNfunction_sb_dLuR::synapse0x182d0b0() {
   return (neuron0x1810700()*-0.0641541);
}

double NNfunction_sb_dLuR::synapse0x182d0f0() {
   return (neuron0x1810a40()*0.600888);
}

double NNfunction_sb_dLuR::synapse0x182d130() {
   return (neuron0x1810d80()*-0.269376);
}

double NNfunction_sb_dLuR::synapse0x182d170() {
   return (neuron0x18110c0()*0.341998);
}

double NNfunction_sb_dLuR::synapse0x182d4f0() {
   return (neuron0x180c500()*0.0285326);
}

double NNfunction_sb_dLuR::synapse0x182d530() {
   return (neuron0x180c840()*0.0217998);
}

double NNfunction_sb_dLuR::synapse0x182d570() {
   return (neuron0x180cb80()*-0.00650267);
}

double NNfunction_sb_dLuR::synapse0x182d5b0() {
   return (neuron0x180cec0()*-2.36493);
}

double NNfunction_sb_dLuR::synapse0x182d5f0() {
   return (neuron0x180d200()*0.0119342);
}

double NNfunction_sb_dLuR::synapse0x182d630() {
   return (neuron0x180d540()*-0.0163622);
}

double NNfunction_sb_dLuR::synapse0x182d670() {
   return (neuron0x180d880()*0.0270964);
}

double NNfunction_sb_dLuR::synapse0x182d6b0() {
   return (neuron0x180dbc0()*-0.0217723);
}

double NNfunction_sb_dLuR::synapse0x182d6f0() {
   return (neuron0x180df00()*0.00619651);
}

double NNfunction_sb_dLuR::synapse0x182d730() {
   return (neuron0x180e240()*0.0160261);
}

double NNfunction_sb_dLuR::synapse0x182d770() {
   return (neuron0x180e580()*0.000812022);
}

double NNfunction_sb_dLuR::synapse0x182d7b0() {
   return (neuron0x180e8c0()*0.199083);
}

double NNfunction_sb_dLuR::synapse0x182d7f0() {
   return (neuron0x180ec00()*-0.0775615);
}

double NNfunction_sb_dLuR::synapse0x182d830() {
   return (neuron0x180ef40()*0.0142817);
}

double NNfunction_sb_dLuR::synapse0x182d870() {
   return (neuron0x180f280()*-1.06093);
}

double NNfunction_sb_dLuR::synapse0x182d8b0() {
   return (neuron0x180f5c0()*0.0101784);
}

double NNfunction_sb_dLuR::synapse0x182d340() {
   return (neuron0x180f900()*0.0403269);
}

double NNfunction_sb_dLuR::synapse0x182d380() {
   return (neuron0x180fe60()*-0.0136509);
}

double NNfunction_sb_dLuR::synapse0x182da00() {
   return (neuron0x1810080()*-0.0220196);
}

double NNfunction_sb_dLuR::synapse0x182da40() {
   return (neuron0x18103c0()*-0.00912961);
}

double NNfunction_sb_dLuR::synapse0x182da80() {
   return (neuron0x1810700()*0.0118856);
}

double NNfunction_sb_dLuR::synapse0x182dac0() {
   return (neuron0x1810a40()*0.0305364);
}

double NNfunction_sb_dLuR::synapse0x182db00() {
   return (neuron0x1810d80()*0.0124151);
}

double NNfunction_sb_dLuR::synapse0x182db40() {
   return (neuron0x18110c0()*0.0121997);
}

double NNfunction_sb_dLuR::synapse0x18165f0() {
   return (neuron0x180c500()*0.00217024);
}

double NNfunction_sb_dLuR::synapse0x1816630() {
   return (neuron0x180c840()*0.0659711);
}

double NNfunction_sb_dLuR::synapse0x1816670() {
   return (neuron0x180cb80()*-0.0673131);
}

double NNfunction_sb_dLuR::synapse0x18166b0() {
   return (neuron0x180cec0()*1.56725);
}

double NNfunction_sb_dLuR::synapse0x18166f0() {
   return (neuron0x180d200()*0.0179482);
}

double NNfunction_sb_dLuR::synapse0x1816730() {
   return (neuron0x180d540()*0.0194744);
}

double NNfunction_sb_dLuR::synapse0x1816770() {
   return (neuron0x180d880()*-0.0156359);
}

double NNfunction_sb_dLuR::synapse0x18167b0() {
   return (neuron0x180dbc0()*0.0325217);
}

double NNfunction_sb_dLuR::synapse0x182e2d0() {
   return (neuron0x180df00()*-0.0301994);
}

double NNfunction_sb_dLuR::synapse0x182e310() {
   return (neuron0x180e240()*0.00988225);
}

double NNfunction_sb_dLuR::synapse0x182e350() {
   return (neuron0x180e580()*0.00427355);
}

double NNfunction_sb_dLuR::synapse0x182e390() {
   return (neuron0x180e8c0()*-0.322685);
}

double NNfunction_sb_dLuR::synapse0x182e3d0() {
   return (neuron0x180ec00()*-0.0178872);
}

double NNfunction_sb_dLuR::synapse0x182e410() {
   return (neuron0x180ef40()*-0.052508);
}

double NNfunction_sb_dLuR::synapse0x182e450() {
   return (neuron0x180f280()*-1.78043);
}

double NNfunction_sb_dLuR::synapse0x182e490() {
   return (neuron0x180f5c0()*-0.0229478);
}

double NNfunction_sb_dLuR::synapse0x182dd10() {
   return (neuron0x180f900()*-0.0491966);
}

double NNfunction_sb_dLuR::synapse0x182dd50() {
   return (neuron0x180fe60()*0.0399721);
}

double NNfunction_sb_dLuR::synapse0x182e5e0() {
   return (neuron0x1810080()*0.0078877);
}

double NNfunction_sb_dLuR::synapse0x182e620() {
   return (neuron0x18103c0()*0.0675898);
}

double NNfunction_sb_dLuR::synapse0x182e660() {
   return (neuron0x1810700()*0.00635991);
}

double NNfunction_sb_dLuR::synapse0x182e6a0() {
   return (neuron0x1810a40()*-0.0284599);
}

double NNfunction_sb_dLuR::synapse0x182e6e0() {
   return (neuron0x1810d80()*-0.00965955);
}

double NNfunction_sb_dLuR::synapse0x182e720() {
   return (neuron0x18110c0()*-0.0191621);
}

double NNfunction_sb_dLuR::synapse0x182eaa0() {
   return (neuron0x180c500()*0.0446722);
}

double NNfunction_sb_dLuR::synapse0x182eae0() {
   return (neuron0x180c840()*0.736699);
}

double NNfunction_sb_dLuR::synapse0x182eb20() {
   return (neuron0x180cb80()*0.0661274);
}

double NNfunction_sb_dLuR::synapse0x182eb60() {
   return (neuron0x180cec0()*0.160761);
}

double NNfunction_sb_dLuR::synapse0x182eba0() {
   return (neuron0x180d200()*0.146336);
}

double NNfunction_sb_dLuR::synapse0x182ebe0() {
   return (neuron0x180d540()*-0.224624);
}

double NNfunction_sb_dLuR::synapse0x182ec20() {
   return (neuron0x180d880()*0.0463517);
}

double NNfunction_sb_dLuR::synapse0x182ec60() {
   return (neuron0x180dbc0()*-0.00860441);
}

double NNfunction_sb_dLuR::synapse0x182eca0() {
   return (neuron0x180df00()*0.00207332);
}

double NNfunction_sb_dLuR::synapse0x182ece0() {
   return (neuron0x180e240()*0.423337);
}

double NNfunction_sb_dLuR::synapse0x182ed20() {
   return (neuron0x180e580()*0.434229);
}

double NNfunction_sb_dLuR::synapse0x182ed60() {
   return (neuron0x180e8c0()*0.583099);
}

double NNfunction_sb_dLuR::synapse0x182eda0() {
   return (neuron0x180ec00()*0.333629);
}

double NNfunction_sb_dLuR::synapse0x182ede0() {
   return (neuron0x180ef40()*0.379057);
}

double NNfunction_sb_dLuR::synapse0x182ee20() {
   return (neuron0x180f280()*0.109644);
}

double NNfunction_sb_dLuR::synapse0x182ee60() {
   return (neuron0x180f5c0()*-0.0591263);
}

double NNfunction_sb_dLuR::synapse0x182e8f0() {
   return (neuron0x180f900()*-0.0254752);
}

double NNfunction_sb_dLuR::synapse0x182e930() {
   return (neuron0x180fe60()*0.200142);
}

double NNfunction_sb_dLuR::synapse0x182efb0() {
   return (neuron0x1810080()*0.476329);
}

double NNfunction_sb_dLuR::synapse0x182eff0() {
   return (neuron0x18103c0()*-0.0254486);
}

double NNfunction_sb_dLuR::synapse0x182f030() {
   return (neuron0x1810700()*0.477199);
}

double NNfunction_sb_dLuR::synapse0x182f070() {
   return (neuron0x1810a40()*-0.476768);
}

double NNfunction_sb_dLuR::synapse0x182f0b0() {
   return (neuron0x1810d80()*0.340639);
}

double NNfunction_sb_dLuR::synapse0x182f0f0() {
   return (neuron0x18110c0()*-0.402151);
}

double NNfunction_sb_dLuR::synapse0x182f470() {
   return (neuron0x180c500()*-0.00154616);
}

double NNfunction_sb_dLuR::synapse0x182f4b0() {
   return (neuron0x180c840()*0.165086);
}

double NNfunction_sb_dLuR::synapse0x182f4f0() {
   return (neuron0x180cb80()*-0.0383654);
}

double NNfunction_sb_dLuR::synapse0x182f530() {
   return (neuron0x180cec0()*0.904521);
}

double NNfunction_sb_dLuR::synapse0x182f570() {
   return (neuron0x180d200()*0.0146873);
}

double NNfunction_sb_dLuR::synapse0x182f5b0() {
   return (neuron0x180d540()*-0.0136446);
}

double NNfunction_sb_dLuR::synapse0x182f5f0() {
   return (neuron0x180d880()*0.102633);
}

double NNfunction_sb_dLuR::synapse0x182f630() {
   return (neuron0x180dbc0()*0.026025);
}

double NNfunction_sb_dLuR::synapse0x182f670() {
   return (neuron0x180df00()*0.015937);
}

double NNfunction_sb_dLuR::synapse0x182f6b0() {
   return (neuron0x180e240()*0.00873059);
}

double NNfunction_sb_dLuR::synapse0x182f6f0() {
   return (neuron0x180e580()*-0.0947127);
}

double NNfunction_sb_dLuR::synapse0x182f730() {
   return (neuron0x180e8c0()*0.448973);
}

double NNfunction_sb_dLuR::synapse0x182f770() {
   return (neuron0x180ec00()*0.0182787);
}

double NNfunction_sb_dLuR::synapse0x182f7b0() {
   return (neuron0x180ef40()*0.110477);
}

double NNfunction_sb_dLuR::synapse0x182f7f0() {
   return (neuron0x180f280()*-0.129418);
}

double NNfunction_sb_dLuR::synapse0x182f830() {
   return (neuron0x180f5c0()*0.0161219);
}

double NNfunction_sb_dLuR::synapse0x182f2c0() {
   return (neuron0x180f900()*0.042338);
}

double NNfunction_sb_dLuR::synapse0x182f300() {
   return (neuron0x180fe60()*-0.109849);
}

double NNfunction_sb_dLuR::synapse0x181fe30() {
   return (neuron0x1810080()*-0.165618);
}

double NNfunction_sb_dLuR::synapse0x181fe70() {
   return (neuron0x18103c0()*-0.049434);
}

double NNfunction_sb_dLuR::synapse0x181feb0() {
   return (neuron0x1810700()*0.0166145);
}

double NNfunction_sb_dLuR::synapse0x181fef0() {
   return (neuron0x1810a40()*0.0332324);
}

double NNfunction_sb_dLuR::synapse0x181ff30() {
   return (neuron0x1810d80()*-0.0601697);
}

double NNfunction_sb_dLuR::synapse0x181ff70() {
   return (neuron0x18110c0()*-0.0158489);
}

double NNfunction_sb_dLuR::synapse0x18202f0() {
   return (neuron0x180c500()*-0.0226326);
}

double NNfunction_sb_dLuR::synapse0x1820330() {
   return (neuron0x180c840()*-0.0958856);
}

double NNfunction_sb_dLuR::synapse0x1820370() {
   return (neuron0x180cb80()*0.120754);
}

double NNfunction_sb_dLuR::synapse0x18203b0() {
   return (neuron0x180cec0()*0.0743563);
}

double NNfunction_sb_dLuR::synapse0x18203f0() {
   return (neuron0x180d200()*-0.140234);
}

double NNfunction_sb_dLuR::synapse0x1820430() {
   return (neuron0x180d540()*0.0977934);
}

double NNfunction_sb_dLuR::synapse0x1820470() {
   return (neuron0x180d880()*-0.0830552);
}

double NNfunction_sb_dLuR::synapse0x18204b0() {
   return (neuron0x180dbc0()*0.0390108);
}

double NNfunction_sb_dLuR::synapse0x18204f0() {
   return (neuron0x180df00()*-0.0873567);
}

double NNfunction_sb_dLuR::synapse0x1820530() {
   return (neuron0x180e240()*-0.00225426);
}

double NNfunction_sb_dLuR::synapse0x1820570() {
   return (neuron0x180e580()*0.0493675);
}

double NNfunction_sb_dLuR::synapse0x18205b0() {
   return (neuron0x180e8c0()*-0.219444);
}

double NNfunction_sb_dLuR::synapse0x18205f0() {
   return (neuron0x180ec00()*-0.389165);
}

double NNfunction_sb_dLuR::synapse0x1820630() {
   return (neuron0x180ef40()*0.156539);
}

double NNfunction_sb_dLuR::synapse0x1820670() {
   return (neuron0x180f280()*0.0564471);
}

double NNfunction_sb_dLuR::synapse0x18206b0() {
   return (neuron0x180f5c0()*0.325825);
}

double NNfunction_sb_dLuR::synapse0x1820140() {
   return (neuron0x180f900()*0.10512);
}

double NNfunction_sb_dLuR::synapse0x1820180() {
   return (neuron0x180fe60()*0.0638828);
}

double NNfunction_sb_dLuR::synapse0x1820800() {
   return (neuron0x1810080()*-0.0786673);
}

double NNfunction_sb_dLuR::synapse0x1820840() {
   return (neuron0x18103c0()*0.147805);
}

double NNfunction_sb_dLuR::synapse0x1820880() {
   return (neuron0x1810700()*-0.0882124);
}

double NNfunction_sb_dLuR::synapse0x18208c0() {
   return (neuron0x1810a40()*-0.199141);
}

double NNfunction_sb_dLuR::synapse0x1820900() {
   return (neuron0x1810d80()*-0.042709);
}

double NNfunction_sb_dLuR::synapse0x1820940() {
   return (neuron0x18110c0()*-0.128868);
}

double NNfunction_sb_dLuR::synapse0x1820cc0() {
   return (neuron0x180c500()*0.0430609);
}

double NNfunction_sb_dLuR::synapse0x1820d00() {
   return (neuron0x180c840()*-0.0461634);
}

double NNfunction_sb_dLuR::synapse0x1820d40() {
   return (neuron0x180cb80()*-0.0095626);
}

double NNfunction_sb_dLuR::synapse0x1820d80() {
   return (neuron0x180cec0()*-0.13032);
}

double NNfunction_sb_dLuR::synapse0x1820dc0() {
   return (neuron0x180d200()*0.103419);
}

double NNfunction_sb_dLuR::synapse0x1820e00() {
   return (neuron0x180d540()*0.0768138);
}

double NNfunction_sb_dLuR::synapse0x1820e40() {
   return (neuron0x180d880()*-0.0474075);
}

double NNfunction_sb_dLuR::synapse0x1820e80() {
   return (neuron0x180dbc0()*-0.238267);
}

double NNfunction_sb_dLuR::synapse0x1820ec0() {
   return (neuron0x180df00()*0.0877931);
}

double NNfunction_sb_dLuR::synapse0x1820f00() {
   return (neuron0x180e240()*-0.00985176);
}

double NNfunction_sb_dLuR::synapse0x1820f40() {
   return (neuron0x180e580()*-0.0203494);
}

double NNfunction_sb_dLuR::synapse0x1820f80() {
   return (neuron0x180e8c0()*0.348949);
}

double NNfunction_sb_dLuR::synapse0x1820fc0() {
   return (neuron0x180ec00()*-0.160827);
}

double NNfunction_sb_dLuR::synapse0x1821000() {
   return (neuron0x180ef40()*0.0160053);
}

double NNfunction_sb_dLuR::synapse0x1821040() {
   return (neuron0x180f280()*0.575956);
}

double NNfunction_sb_dLuR::synapse0x1821080() {
   return (neuron0x180f5c0()*-0.109486);
}

double NNfunction_sb_dLuR::synapse0x1820b10() {
   return (neuron0x180f900()*-0.0391562);
}

double NNfunction_sb_dLuR::synapse0x1820b50() {
   return (neuron0x180fe60()*0.0296143);
}

double NNfunction_sb_dLuR::synapse0x18211d0() {
   return (neuron0x1810080()*-0.0281493);
}

double NNfunction_sb_dLuR::synapse0x1821210() {
   return (neuron0x18103c0()*-0.075479);
}

double NNfunction_sb_dLuR::synapse0x1821250() {
   return (neuron0x1810700()*0.0589931);
}

double NNfunction_sb_dLuR::synapse0x1821290() {
   return (neuron0x1810a40()*0.0459658);
}

double NNfunction_sb_dLuR::synapse0x18212d0() {
   return (neuron0x1810d80()*-0.0166236);
}

double NNfunction_sb_dLuR::synapse0x1821310() {
   return (neuron0x18110c0()*0.0266749);
}

double NNfunction_sb_dLuR::synapse0x1821690() {
   return (neuron0x180c500()*0.020808);
}

double NNfunction_sb_dLuR::synapse0x18216d0() {
   return (neuron0x180c840()*-0.00577127);
}

double NNfunction_sb_dLuR::synapse0x1821710() {
   return (neuron0x180cb80()*-0.858988);
}

double NNfunction_sb_dLuR::synapse0x1821750() {
   return (neuron0x180cec0()*0.0574281);
}

double NNfunction_sb_dLuR::synapse0x1821790() {
   return (neuron0x180d200()*-0.0973652);
}

double NNfunction_sb_dLuR::synapse0x18217d0() {
   return (neuron0x180d540()*-0.0249554);
}

double NNfunction_sb_dLuR::synapse0x1821810() {
   return (neuron0x180d880()*-0.0878974);
}

double NNfunction_sb_dLuR::synapse0x1821850() {
   return (neuron0x180dbc0()*-0.135923);
}

double NNfunction_sb_dLuR::synapse0x1821890() {
   return (neuron0x180df00()*0.102632);
}

double NNfunction_sb_dLuR::synapse0x18218d0() {
   return (neuron0x180e240()*0.0664868);
}

double NNfunction_sb_dLuR::synapse0x1821910() {
   return (neuron0x180e580()*0.045863);
}

double NNfunction_sb_dLuR::synapse0x1821950() {
   return (neuron0x180e8c0()*0.107056);
}

double NNfunction_sb_dLuR::synapse0x1821990() {
   return (neuron0x180ec00()*0.136484);
}

double NNfunction_sb_dLuR::synapse0x18219d0() {
   return (neuron0x180ef40()*-0.0163698);
}

double NNfunction_sb_dLuR::synapse0x1821a10() {
   return (neuron0x180f280()*-0.0650607);
}

double NNfunction_sb_dLuR::synapse0x1821a50() {
   return (neuron0x180f5c0()*-0.0833937);
}

double NNfunction_sb_dLuR::synapse0x18214e0() {
   return (neuron0x180f900()*-0.039266);
}

double NNfunction_sb_dLuR::synapse0x1821520() {
   return (neuron0x180fe60()*-0.0289666);
}

double NNfunction_sb_dLuR::synapse0x1821ba0() {
   return (neuron0x1810080()*0.0383588);
}

double NNfunction_sb_dLuR::synapse0x1821be0() {
   return (neuron0x18103c0()*0.0775683);
}

double NNfunction_sb_dLuR::synapse0x1821c20() {
   return (neuron0x1810700()*0.00712703);
}

double NNfunction_sb_dLuR::synapse0x1821c60() {
   return (neuron0x1810a40()*0.0791182);
}

double NNfunction_sb_dLuR::synapse0x1821ca0() {
   return (neuron0x1810d80()*0.0234559);
}

double NNfunction_sb_dLuR::synapse0x1821ce0() {
   return (neuron0x18110c0()*0.0119306);
}

double NNfunction_sb_dLuR::synapse0x1833bb0() {
   return (neuron0x180c500()*0.00484656);
}

double NNfunction_sb_dLuR::synapse0x1833bf0() {
   return (neuron0x180c840()*0.0283223);
}

double NNfunction_sb_dLuR::synapse0x1833c30() {
   return (neuron0x180cb80()*-0.0564577);
}

double NNfunction_sb_dLuR::synapse0x1833c70() {
   return (neuron0x180cec0()*-0.529732);
}

double NNfunction_sb_dLuR::synapse0x1833cb0() {
   return (neuron0x180d200()*-0.0121097);
}

double NNfunction_sb_dLuR::synapse0x1833cf0() {
   return (neuron0x180d540()*-0.0617737);
}

double NNfunction_sb_dLuR::synapse0x1833d30() {
   return (neuron0x180d880()*-0.00839715);
}

double NNfunction_sb_dLuR::synapse0x1833d70() {
   return (neuron0x180dbc0()*0.0124653);
}

double NNfunction_sb_dLuR::synapse0x1833db0() {
   return (neuron0x180df00()*-0.000724691);
}

double NNfunction_sb_dLuR::synapse0x1833df0() {
   return (neuron0x180e240()*-0.0373372);
}

double NNfunction_sb_dLuR::synapse0x1833e30() {
   return (neuron0x180e580()*-0.0224413);
}

double NNfunction_sb_dLuR::synapse0x1833e70() {
   return (neuron0x180e8c0()*-0.207198);
}

double NNfunction_sb_dLuR::synapse0x1833eb0() {
   return (neuron0x180ec00()*0.402895);
}

double NNfunction_sb_dLuR::synapse0x1833ef0() {
   return (neuron0x180ef40()*-0.0369581);
}

double NNfunction_sb_dLuR::synapse0x1833f30() {
   return (neuron0x180f280()*-0.449806);
}

double NNfunction_sb_dLuR::synapse0x1833f70() {
   return (neuron0x180f5c0()*0.127287);
}

double NNfunction_sb_dLuR::synapse0x1821d20() {
   return (neuron0x180f900()*-0.00399381);
}

double NNfunction_sb_dLuR::synapse0x1821d60() {
   return (neuron0x180fe60()*0.223584);
}

double NNfunction_sb_dLuR::synapse0x18340c0() {
   return (neuron0x1810080()*0.149511);
}

double NNfunction_sb_dLuR::synapse0x1834100() {
   return (neuron0x18103c0()*-0.0368634);
}

double NNfunction_sb_dLuR::synapse0x1834140() {
   return (neuron0x1810700()*0.0208217);
}

double NNfunction_sb_dLuR::synapse0x1834180() {
   return (neuron0x1810a40()*-0.0121439);
}

double NNfunction_sb_dLuR::synapse0x18341c0() {
   return (neuron0x1810d80()*-0.00561848);
}

double NNfunction_sb_dLuR::synapse0x1834200() {
   return (neuron0x18110c0()*-0.0162556);
}

double NNfunction_sb_dLuR::synapse0x1834580() {
   return (neuron0x180c500()*0.0938581);
}

double NNfunction_sb_dLuR::synapse0x18345c0() {
   return (neuron0x180c840()*0.165844);
}

double NNfunction_sb_dLuR::synapse0x1834600() {
   return (neuron0x180cb80()*0.131206);
}

double NNfunction_sb_dLuR::synapse0x1834640() {
   return (neuron0x180cec0()*0.450595);
}

double NNfunction_sb_dLuR::synapse0x1834680() {
   return (neuron0x180d200()*0.0980598);
}

double NNfunction_sb_dLuR::synapse0x18346c0() {
   return (neuron0x180d540()*0.0687086);
}

double NNfunction_sb_dLuR::synapse0x1834700() {
   return (neuron0x180d880()*-0.0490433);
}

double NNfunction_sb_dLuR::synapse0x1834740() {
   return (neuron0x180dbc0()*-0.0937085);
}

double NNfunction_sb_dLuR::synapse0x1834780() {
   return (neuron0x180df00()*0.127961);
}

double NNfunction_sb_dLuR::synapse0x18347c0() {
   return (neuron0x180e240()*-0.0207799);
}

double NNfunction_sb_dLuR::synapse0x1834800() {
   return (neuron0x180e580()*-0.035643);
}

double NNfunction_sb_dLuR::synapse0x1834840() {
   return (neuron0x180e8c0()*0.140494);
}

double NNfunction_sb_dLuR::synapse0x1834880() {
   return (neuron0x180ec00()*-0.532668);
}

double NNfunction_sb_dLuR::synapse0x18348c0() {
   return (neuron0x180ef40()*0.127338);
}

double NNfunction_sb_dLuR::synapse0x1834900() {
   return (neuron0x180f280()*0.259235);
}

double NNfunction_sb_dLuR::synapse0x1834940() {
   return (neuron0x180f5c0()*-0.2143);
}

double NNfunction_sb_dLuR::synapse0x18343d0() {
   return (neuron0x180f900()*0.105761);
}

double NNfunction_sb_dLuR::synapse0x1834410() {
   return (neuron0x180fe60()*-0.030135);
}

double NNfunction_sb_dLuR::synapse0x1834a90() {
   return (neuron0x1810080()*-0.174843);
}

double NNfunction_sb_dLuR::synapse0x1834ad0() {
   return (neuron0x18103c0()*-0.0471149);
}

double NNfunction_sb_dLuR::synapse0x1834b10() {
   return (neuron0x1810700()*0.0987741);
}

double NNfunction_sb_dLuR::synapse0x1834b50() {
   return (neuron0x1810a40()*0.0787974);
}

double NNfunction_sb_dLuR::synapse0x1834b90() {
   return (neuron0x1810d80()*0.00661236);
}

double NNfunction_sb_dLuR::synapse0x1834bd0() {
   return (neuron0x18110c0()*0.0360894);
}

double NNfunction_sb_dLuR::synapse0x1834f50() {
   return (neuron0x180c500()*0.395035);
}

double NNfunction_sb_dLuR::synapse0x1834f90() {
   return (neuron0x180c840()*-0.0962843);
}

double NNfunction_sb_dLuR::synapse0x1834fd0() {
   return (neuron0x180cb80()*0.115549);
}

double NNfunction_sb_dLuR::synapse0x1835010() {
   return (neuron0x180cec0()*-0.46735);
}

double NNfunction_sb_dLuR::synapse0x1835050() {
   return (neuron0x180d200()*-0.226844);
}

double NNfunction_sb_dLuR::synapse0x1835090() {
   return (neuron0x180d540()*0.182486);
}

double NNfunction_sb_dLuR::synapse0x18350d0() {
   return (neuron0x180d880()*-0.129976);
}

double NNfunction_sb_dLuR::synapse0x1835110() {
   return (neuron0x180dbc0()*-0.0968295);
}

double NNfunction_sb_dLuR::synapse0x1835150() {
   return (neuron0x180df00()*-0.519259);
}

double NNfunction_sb_dLuR::synapse0x1835190() {
   return (neuron0x180e240()*0.311751);
}

double NNfunction_sb_dLuR::synapse0x18351d0() {
   return (neuron0x180e580()*0.125309);
}

double NNfunction_sb_dLuR::synapse0x1835210() {
   return (neuron0x180e8c0()*0.287789);
}

double NNfunction_sb_dLuR::synapse0x1835250() {
   return (neuron0x180ec00()*0.0631584);
}

double NNfunction_sb_dLuR::synapse0x1835290() {
   return (neuron0x180ef40()*0.457547);
}

double NNfunction_sb_dLuR::synapse0x18352d0() {
   return (neuron0x180f280()*0.825528);
}

double NNfunction_sb_dLuR::synapse0x1835310() {
   return (neuron0x180f5c0()*0.123397);
}

double NNfunction_sb_dLuR::synapse0x1834da0() {
   return (neuron0x180f900()*0.421609);
}

double NNfunction_sb_dLuR::synapse0x1834de0() {
   return (neuron0x180fe60()*-0.756448);
}

double NNfunction_sb_dLuR::synapse0x1835460() {
   return (neuron0x1810080()*-0.0515227);
}

double NNfunction_sb_dLuR::synapse0x18354a0() {
   return (neuron0x18103c0()*0.387908);
}

double NNfunction_sb_dLuR::synapse0x18354e0() {
   return (neuron0x1810700()*0.0619671);
}

double NNfunction_sb_dLuR::synapse0x1835520() {
   return (neuron0x1810a40()*-0.00839758);
}

double NNfunction_sb_dLuR::synapse0x1835560() {
   return (neuron0x1810d80()*-0.166136);
}

double NNfunction_sb_dLuR::synapse0x18355a0() {
   return (neuron0x18110c0()*-0.0104825);
}

double NNfunction_sb_dLuR::synapse0x1835920() {
   return (neuron0x180c500()*-0.0356604);
}

double NNfunction_sb_dLuR::synapse0x1835960() {
   return (neuron0x180c840()*0.00419836);
}

double NNfunction_sb_dLuR::synapse0x18359a0() {
   return (neuron0x180cb80()*0.0546315);
}

double NNfunction_sb_dLuR::synapse0x18359e0() {
   return (neuron0x180cec0()*1.29054);
}

double NNfunction_sb_dLuR::synapse0x1835a20() {
   return (neuron0x180d200()*-0.0480808);
}

double NNfunction_sb_dLuR::synapse0x1835a60() {
   return (neuron0x180d540()*0.0096133);
}

double NNfunction_sb_dLuR::synapse0x1835aa0() {
   return (neuron0x180d880()*-0.0138373);
}

double NNfunction_sb_dLuR::synapse0x1835ae0() {
   return (neuron0x180dbc0()*-0.0368533);
}

double NNfunction_sb_dLuR::synapse0x1835b20() {
   return (neuron0x180df00()*0.0429289);
}

double NNfunction_sb_dLuR::synapse0x1835b60() {
   return (neuron0x180e240()*0.0233785);
}

double NNfunction_sb_dLuR::synapse0x1835ba0() {
   return (neuron0x180e580()*0.0123437);
}

double NNfunction_sb_dLuR::synapse0x1835be0() {
   return (neuron0x180e8c0()*0.616998);
}

double NNfunction_sb_dLuR::synapse0x1835c20() {
   return (neuron0x180ec00()*-0.0265652);
}

double NNfunction_sb_dLuR::synapse0x1835c60() {
   return (neuron0x180ef40()*0.0550406);
}

double NNfunction_sb_dLuR::synapse0x1835ca0() {
   return (neuron0x180f280()*1.99977);
}

double NNfunction_sb_dLuR::synapse0x1835ce0() {
   return (neuron0x180f5c0()*0.0172017);
}

double NNfunction_sb_dLuR::synapse0x1835770() {
   return (neuron0x180f900()*0.0196899);
}

double NNfunction_sb_dLuR::synapse0x18357b0() {
   return (neuron0x180fe60()*-0.0136008);
}

double NNfunction_sb_dLuR::synapse0x1835e30() {
   return (neuron0x1810080()*0.00707198);
}

double NNfunction_sb_dLuR::synapse0x1835e70() {
   return (neuron0x18103c0()*-0.0270614);
}

double NNfunction_sb_dLuR::synapse0x1835eb0() {
   return (neuron0x1810700()*-0.0193228);
}

double NNfunction_sb_dLuR::synapse0x1835ef0() {
   return (neuron0x1810a40()*0.0218682);
}

double NNfunction_sb_dLuR::synapse0x1835f30() {
   return (neuron0x1810d80()*-0.00183744);
}

double NNfunction_sb_dLuR::synapse0x1835f70() {
   return (neuron0x18110c0()*0.0501313);
}

double NNfunction_sb_dLuR::synapse0x1812510() {
   return (neuron0x1811560()*-1.20957);
}

double NNfunction_sb_dLuR::synapse0x1812550() {
   return (neuron0x1811e70()*-0.205889);
}

double NNfunction_sb_dLuR::synapse0x1813a20() {
   return (neuron0x1812950()*0.0434658);
}

double NNfunction_sb_dLuR::synapse0x1813a60() {
   return (neuron0x15cc1e0()*0.0736433);
}

double NNfunction_sb_dLuR::synapse0x18143f0() {
   return (neuron0x1813770()*0.703077);
}

double NNfunction_sb_dLuR::synapse0x1814430() {
   return (neuron0x1814140()*-0.399627);
}

double NNfunction_sb_dLuR::synapse0x18151c0() {
   return (neuron0x1814f10()*-0.858294);
}

double NNfunction_sb_dLuR::synapse0x1815200() {
   return (neuron0x18158e0()*-0.635783);
}

double NNfunction_sb_dLuR::synapse0x1815b90() {
   return (neuron0x18162b0()*0.381402);
}

double NNfunction_sb_dLuR::synapse0x1815bd0() {
   return (neuron0x1816d90()*0.66894);
}

double NNfunction_sb_dLuR::synapse0x1816560() {
   return (neuron0x1817760()*-7.46275);
}

double NNfunction_sb_dLuR::synapse0x18165a0() {
   return (neuron0x1814840()*0.0795167);
}

double NNfunction_sb_dLuR::synapse0x1817040() {
   return (neuron0x1819310()*0.0513864);
}

double NNfunction_sb_dLuR::synapse0x1817080() {
   return (neuron0x1819ce0()*-0.464614);
}

double NNfunction_sb_dLuR::synapse0x1817a10() {
   return (neuron0x181a6b0()*-0.507938);
}

double NNfunction_sb_dLuR::synapse0x1817a50() {
   return (neuron0x181b080()*-0.613935);
}

double NNfunction_sb_dLuR::synapse0x1814af0() {
   return (neuron0x181ce90()*1.93202);
}

double NNfunction_sb_dLuR::synapse0x1814b30() {
   return (neuron0x181d170()*-0.0768694);
}

double NNfunction_sb_dLuR::synapse0x18195c0() {
   return (neuron0x181db40()*1.59718);
}

double NNfunction_sb_dLuR::synapse0x1819600() {
   return (neuron0x181e510()*0.137767);
}

double NNfunction_sb_dLuR::synapse0x1819f90() {
   return (neuron0x181eee0()*1.8248);
}

double NNfunction_sb_dLuR::synapse0x1819fd0() {
   return (neuron0x181f8b0()*2.06498);
}

double NNfunction_sb_dLuR::synapse0x181a960() {
   return (neuron0x1818400()*0.277551);
}

double NNfunction_sb_dLuR::synapse0x181a9a0() {
   return (neuron0x1818dd0()*0.501276);
}

double NNfunction_sb_dLuR::synapse0x181b330() {
   return (neuron0x1822640()*-1.25507);
}

double NNfunction_sb_dLuR::synapse0x181b370() {
   return (neuron0x1823010()*1.01334);
}

double NNfunction_sb_dLuR::synapse0x180f4a0() {
   return (neuron0x18239e0()*0.038601);
}

double NNfunction_sb_dLuR::synapse0x180f4e0() {
   return (neuron0x18243b0()*0.220324);
}

double NNfunction_sb_dLuR::synapse0x181d420() {
   return (neuron0x1824d80()*0.302105);
}

double NNfunction_sb_dLuR::synapse0x181d460() {
   return (neuron0x1825750()*-0.230645);
}

double NNfunction_sb_dLuR::synapse0x181ddf0() {
   return (neuron0x1826120()*-0.170065);
}

double NNfunction_sb_dLuR::synapse0x181de30() {
   return (neuron0x1826af0()*-0.111709);
}

double NNfunction_sb_dLuR::synapse0x181e7c0() {
   return (neuron0x181cb80()*0.440477);
}

double NNfunction_sb_dLuR::synapse0x181e800() {
   return (neuron0x18296d0()*0.24495);
}

double NNfunction_sb_dLuR::synapse0x181f190() {
   return (neuron0x182a0a0()*0.0837648);
}

double NNfunction_sb_dLuR::synapse0x181f1d0() {
   return (neuron0x182aa70()*0.423555);
}

double NNfunction_sb_dLuR::synapse0x181fb60() {
   return (neuron0x182b440()*1.13175);
}

double NNfunction_sb_dLuR::synapse0x181fba0() {
   return (neuron0x182be10()*-0.856017);
}

double NNfunction_sb_dLuR::synapse0x18186b0() {
   return (neuron0x182c7e0()*0.0694723);
}

double NNfunction_sb_dLuR::synapse0x18186f0() {
   return (neuron0x182d1b0()*1.90383);
}

double NNfunction_sb_dLuR::synapse0x1821f60() {
   return (neuron0x182db80()*0.687231);
}

double NNfunction_sb_dLuR::synapse0x1821fa0() {
   return (neuron0x182e760()*0.0779414);
}

double NNfunction_sb_dLuR::synapse0x18228f0() {
   return (neuron0x182f130()*0.383258);
}

double NNfunction_sb_dLuR::synapse0x1822930() {
   return (neuron0x181ffb0()*-0.0352925);
}

double NNfunction_sb_dLuR::synapse0x18232c0() {
   return (neuron0x1820980()*1.32849);
}

double NNfunction_sb_dLuR::synapse0x1823300() {
   return (neuron0x1821350()*-0.388322);
}

double NNfunction_sb_dLuR::synapse0x1823c90() {
   return (neuron0x1833990()*0.629492);
}

double NNfunction_sb_dLuR::synapse0x1823cd0() {
   return (neuron0x1834240()*-0.916525);
}

double NNfunction_sb_dLuR::synapse0x1824660() {
   return (neuron0x1834c10()*-0.0507613);
}

double NNfunction_sb_dLuR::synapse0x18246a0() {
   return (neuron0x18355e0()*0.728545);
}

double NNfunction_sb_dLuR::synapse0x1826da0() {
   return (neuron0x1811560()*-1.11636);
}

double NNfunction_sb_dLuR::synapse0x1826de0() {
   return (neuron0x1811e70()*0.0274046);
}

double NNfunction_sb_dLuR::synapse0x181c360() {
   return (neuron0x1812950()*0.0550794);
}

double NNfunction_sb_dLuR::synapse0x181c3a0() {
   return (neuron0x15cc1e0()*0.0607571);
}

double NNfunction_sb_dLuR::synapse0x1829980() {
   return (neuron0x1813770()*0.668558);
}

double NNfunction_sb_dLuR::synapse0x18299c0() {
   return (neuron0x1814140()*-0.243983);
}

double NNfunction_sb_dLuR::synapse0x182a350() {
   return (neuron0x1814f10()*0.273166);
}

double NNfunction_sb_dLuR::synapse0x182a390() {
   return (neuron0x18158e0()*-1.18603);
}

double NNfunction_sb_dLuR::synapse0x182ad20() {
   return (neuron0x18162b0()*-0.0102276);
}

double NNfunction_sb_dLuR::synapse0x182ad60() {
   return (neuron0x1816d90()*-0.0741827);
}

double NNfunction_sb_dLuR::synapse0x182b6f0() {
   return (neuron0x1817760()*3.23795);
}

double NNfunction_sb_dLuR::synapse0x182b730() {
   return (neuron0x1814840()*-0.327385);
}

double NNfunction_sb_dLuR::synapse0x182c0c0() {
   return (neuron0x1819310()*0.0661134);
}

double NNfunction_sb_dLuR::synapse0x182c100() {
   return (neuron0x1819ce0()*-0.863304);
}

double NNfunction_sb_dLuR::synapse0x182ca90() {
   return (neuron0x181a6b0()*-0.281633);
}

double NNfunction_sb_dLuR::synapse0x182cad0() {
   return (neuron0x181b080()*0.0750356);
}

double NNfunction_sb_dLuR::synapse0x182d460() {
   return (neuron0x181ce90()*-0.409281);
}

double NNfunction_sb_dLuR::synapse0x182d4a0() {
   return (neuron0x181d170()*0.0104113);
}

double NNfunction_sb_dLuR::synapse0x182de30() {
   return (neuron0x181db40()*0.0537014);
}

double NNfunction_sb_dLuR::synapse0x182de70() {
   return (neuron0x181e510()*-0.193556);
}

double NNfunction_sb_dLuR::synapse0x182ea10() {
   return (neuron0x181eee0()*-2.23812);
}

double NNfunction_sb_dLuR::synapse0x182ea50() {
   return (neuron0x181f8b0()*-0.429954);
}

double NNfunction_sb_dLuR::synapse0x182f3e0() {
   return (neuron0x1818400()*-0.0195725);
}

double NNfunction_sb_dLuR::synapse0x182f420() {
   return (neuron0x1818dd0()*0.623871);
}

double NNfunction_sb_dLuR::synapse0x1820260() {
   return (neuron0x1822640()*1.3993);
}

double NNfunction_sb_dLuR::synapse0x18202a0() {
   return (neuron0x1823010()*1.22213);
}

double NNfunction_sb_dLuR::synapse0x1820c30() {
   return (neuron0x18239e0()*0.6291);
}

double NNfunction_sb_dLuR::synapse0x1820c70() {
   return (neuron0x18243b0()*-0.227391);
}

double NNfunction_sb_dLuR::synapse0x1821600() {
   return (neuron0x1824d80()*-0.0403232);
}

double NNfunction_sb_dLuR::synapse0x1821640() {
   return (neuron0x1825750()*0.388902);
}

double NNfunction_sb_dLuR::synapse0x1833b20() {
   return (neuron0x1826120()*-0.135978);
}

double NNfunction_sb_dLuR::synapse0x1833b60() {
   return (neuron0x1826af0()*0.137574);
}

double NNfunction_sb_dLuR::synapse0x18344f0() {
   return (neuron0x181cb80()*-0.0350533);
}

double NNfunction_sb_dLuR::synapse0x1834530() {
   return (neuron0x18296d0()*-0.105981);
}

double NNfunction_sb_dLuR::synapse0x1834ec0() {
   return (neuron0x182a0a0()*0.0436399);
}

double NNfunction_sb_dLuR::synapse0x1834f00() {
   return (neuron0x182aa70()*-0.239636);
}

double NNfunction_sb_dLuR::synapse0x1835890() {
   return (neuron0x182b440()*0.0241665);
}

double NNfunction_sb_dLuR::synapse0x18358d0() {
   return (neuron0x182be10()*-0.747623);
}

double NNfunction_sb_dLuR::synapse0x1811780() {
   return (neuron0x182c7e0()*-0.0304598);
}

double NNfunction_sb_dLuR::synapse0x18117c0() {
   return (neuron0x182d1b0()*0.246831);
}

double NNfunction_sb_dLuR::synapse0x1825030() {
   return (neuron0x182db80()*-0.0919586);
}

double NNfunction_sb_dLuR::synapse0x1825070() {
   return (neuron0x182e760()*-0.0357879);
}

double NNfunction_sb_dLuR::synapse0x1835fb0() {
   return (neuron0x182f130()*-0.0113737);
}

double NNfunction_sb_dLuR::synapse0x1835ff0() {
   return (neuron0x181ffb0()*-0.157857);
}

double NNfunction_sb_dLuR::synapse0x1836030() {
   return (neuron0x1820980()*0.846394);
}

double NNfunction_sb_dLuR::synapse0x1836070() {
   return (neuron0x1821350()*0.00830801);
}

double NNfunction_sb_dLuR::synapse0x183cf20() {
   return (neuron0x1833990()*-0.735394);
}

double NNfunction_sb_dLuR::synapse0x183cf60() {
   return (neuron0x1834240()*0.20511);
}

double NNfunction_sb_dLuR::synapse0x183cfa0() {
   return (neuron0x1834c10()*0.126299);
}

double NNfunction_sb_dLuR::synapse0x183cfe0() {
   return (neuron0x18355e0()*-0.677322);
}

double NNfunction_sb_dLuR::synapse0x183d360() {
   return (neuron0x1811560()*1.18834);
}

double NNfunction_sb_dLuR::synapse0x183d3a0() {
   return (neuron0x1811e70()*0.375681);
}

double NNfunction_sb_dLuR::synapse0x183d3e0() {
   return (neuron0x1812950()*-0.0696668);
}

double NNfunction_sb_dLuR::synapse0x183d420() {
   return (neuron0x15cc1e0()*-0.287797);
}

double NNfunction_sb_dLuR::synapse0x183d460() {
   return (neuron0x1813770()*-0.438099);
}

double NNfunction_sb_dLuR::synapse0x183d4a0() {
   return (neuron0x1814140()*-0.965369);
}

double NNfunction_sb_dLuR::synapse0x183d4e0() {
   return (neuron0x1814f10()*4.44282);
}

double NNfunction_sb_dLuR::synapse0x183d520() {
   return (neuron0x18158e0()*1.86269);
}

double NNfunction_sb_dLuR::synapse0x183d560() {
   return (neuron0x18162b0()*0.498585);
}

double NNfunction_sb_dLuR::synapse0x183d5a0() {
   return (neuron0x1816d90()*-0.610083);
}

double NNfunction_sb_dLuR::synapse0x183d5e0() {
   return (neuron0x1817760()*-0.550369);
}

double NNfunction_sb_dLuR::synapse0x183d620() {
   return (neuron0x1814840()*0.296858);
}

double NNfunction_sb_dLuR::synapse0x183d660() {
   return (neuron0x1819310()*-0.104181);
}

double NNfunction_sb_dLuR::synapse0x183d6a0() {
   return (neuron0x1819ce0()*0.339108);
}

double NNfunction_sb_dLuR::synapse0x183d6e0() {
   return (neuron0x181a6b0()*-0.737887);
}

double NNfunction_sb_dLuR::synapse0x183d720() {
   return (neuron0x181b080()*-1.38016);
}

double NNfunction_sb_dLuR::synapse0x183d1b0() {
   return (neuron0x181ce90()*0.360335);
}

double NNfunction_sb_dLuR::synapse0x183d1f0() {
   return (neuron0x181d170()*-1.22124);
}

double NNfunction_sb_dLuR::synapse0x183d870() {
   return (neuron0x181db40()*-0.597546);
}

double NNfunction_sb_dLuR::synapse0x183d8b0() {
   return (neuron0x181e510()*-0.391534);
}

double NNfunction_sb_dLuR::synapse0x183d8f0() {
   return (neuron0x181eee0()*-6.74061);
}

double NNfunction_sb_dLuR::synapse0x183d930() {
   return (neuron0x181f8b0()*1.63999);
}

double NNfunction_sb_dLuR::synapse0x183d970() {
   return (neuron0x1818400()*-1.86533);
}

double NNfunction_sb_dLuR::synapse0x183d9b0() {
   return (neuron0x1818dd0()*-1.90196);
}

double NNfunction_sb_dLuR::synapse0x183d9f0() {
   return (neuron0x1822640()*1.48213);
}

double NNfunction_sb_dLuR::synapse0x183da30() {
   return (neuron0x1823010()*-0.727369);
}

double NNfunction_sb_dLuR::synapse0x183da70() {
   return (neuron0x18239e0()*-4.11477);
}

double NNfunction_sb_dLuR::synapse0x183dab0() {
   return (neuron0x18243b0()*-0.358578);
}

double NNfunction_sb_dLuR::synapse0x183daf0() {
   return (neuron0x1824d80()*-0.2409);
}

double NNfunction_sb_dLuR::synapse0x183db30() {
   return (neuron0x1825750()*-0.589648);
}

double NNfunction_sb_dLuR::synapse0x183db70() {
   return (neuron0x1826120()*-0.925326);
}

double NNfunction_sb_dLuR::synapse0x183dbb0() {
   return (neuron0x1826af0()*0.18125);
}

double NNfunction_sb_dLuR::synapse0x183d760() {
   return (neuron0x181cb80()*-0.458914);
}

double NNfunction_sb_dLuR::synapse0x183d7a0() {
   return (neuron0x18296d0()*1.18357);
}

double NNfunction_sb_dLuR::synapse0x183d7e0() {
   return (neuron0x182a0a0()*-0.168915);
}

double NNfunction_sb_dLuR::synapse0x183d820() {
   return (neuron0x182aa70()*0.997544);
}

double NNfunction_sb_dLuR::synapse0x183de00() {
   return (neuron0x182b440()*0.443646);
}

double NNfunction_sb_dLuR::synapse0x183de40() {
   return (neuron0x182be10()*1.83601);
}

double NNfunction_sb_dLuR::synapse0x183de80() {
   return (neuron0x182c7e0()*-0.162067);
}

double NNfunction_sb_dLuR::synapse0x183dec0() {
   return (neuron0x182d1b0()*-0.139038);
}

double NNfunction_sb_dLuR::synapse0x183df00() {
   return (neuron0x182db80()*-1.39942);
}

double NNfunction_sb_dLuR::synapse0x183df40() {
   return (neuron0x182e760()*-0.094737);
}

double NNfunction_sb_dLuR::synapse0x183df80() {
   return (neuron0x182f130()*-1.38298);
}

double NNfunction_sb_dLuR::synapse0x183dfc0() {
   return (neuron0x181ffb0()*0.534187);
}

double NNfunction_sb_dLuR::synapse0x183e000() {
   return (neuron0x1820980()*-0.230499);
}

double NNfunction_sb_dLuR::synapse0x183e040() {
   return (neuron0x1821350()*0.545553);
}

double NNfunction_sb_dLuR::synapse0x183e080() {
   return (neuron0x1833990()*0.988635);
}

double NNfunction_sb_dLuR::synapse0x183e0c0() {
   return (neuron0x1834240()*0.654825);
}

double NNfunction_sb_dLuR::synapse0x183e100() {
   return (neuron0x1834c10()*0.0990894);
}

double NNfunction_sb_dLuR::synapse0x183e140() {
   return (neuron0x18355e0()*1.41638);
}

double NNfunction_sb_dLuR::synapse0x183e4c0() {
   return (neuron0x1811560()*0.571723);
}

double NNfunction_sb_dLuR::synapse0x183e500() {
   return (neuron0x1811e70()*0.43937);
}

double NNfunction_sb_dLuR::synapse0x183e540() {
   return (neuron0x1812950()*0.27069);
}

double NNfunction_sb_dLuR::synapse0x183e580() {
   return (neuron0x15cc1e0()*0.201462);
}

double NNfunction_sb_dLuR::synapse0x183e5c0() {
   return (neuron0x1813770()*0.693624);
}

double NNfunction_sb_dLuR::synapse0x183e600() {
   return (neuron0x1814140()*0.818647);
}

double NNfunction_sb_dLuR::synapse0x183e640() {
   return (neuron0x1814f10()*0.11955);
}

double NNfunction_sb_dLuR::synapse0x183e680() {
   return (neuron0x18158e0()*-0.15741);
}

double NNfunction_sb_dLuR::synapse0x183e6c0() {
   return (neuron0x18162b0()*0.9138);
}

double NNfunction_sb_dLuR::synapse0x183e700() {
   return (neuron0x1816d90()*0.965884);
}

double NNfunction_sb_dLuR::synapse0x183e740() {
   return (neuron0x1817760()*0.500132);
}

double NNfunction_sb_dLuR::synapse0x183e780() {
   return (neuron0x1814840()*0.418849);
}

double NNfunction_sb_dLuR::synapse0x183e7c0() {
   return (neuron0x1819310()*0.243754);
}

double NNfunction_sb_dLuR::synapse0x183e800() {
   return (neuron0x1819ce0()*0.464133);
}

double NNfunction_sb_dLuR::synapse0x183e840() {
   return (neuron0x181a6b0()*0.378953);
}

double NNfunction_sb_dLuR::synapse0x183e880() {
   return (neuron0x181b080()*0.244345);
}

double NNfunction_sb_dLuR::synapse0x183e310() {
   return (neuron0x181ce90()*0.832341);
}

double NNfunction_sb_dLuR::synapse0x183e350() {
   return (neuron0x181d170()*0.638222);
}

double NNfunction_sb_dLuR::synapse0x183e9d0() {
   return (neuron0x181db40()*0.285157);
}

double NNfunction_sb_dLuR::synapse0x183ea10() {
   return (neuron0x181e510()*0.390119);
}

double NNfunction_sb_dLuR::synapse0x183ea50() {
   return (neuron0x181eee0()*1.55573);
}

double NNfunction_sb_dLuR::synapse0x183ea90() {
   return (neuron0x181f8b0()*-0.0177767);
}

double NNfunction_sb_dLuR::synapse0x183ead0() {
   return (neuron0x1818400()*1.39924);
}

double NNfunction_sb_dLuR::synapse0x183eb10() {
   return (neuron0x1818dd0()*-0.000234136);
}

double NNfunction_sb_dLuR::synapse0x183eb50() {
   return (neuron0x1822640()*-0.054184);
}

double NNfunction_sb_dLuR::synapse0x183eb90() {
   return (neuron0x1823010()*0.652361);
}

double NNfunction_sb_dLuR::synapse0x183ebd0() {
   return (neuron0x18239e0()*1.20316);
}

double NNfunction_sb_dLuR::synapse0x183ec10() {
   return (neuron0x18243b0()*-0.345183);
}

double NNfunction_sb_dLuR::synapse0x183ec50() {
   return (neuron0x1824d80()*0.705838);
}

double NNfunction_sb_dLuR::synapse0x183ec90() {
   return (neuron0x1825750()*-0.230674);
}

double NNfunction_sb_dLuR::synapse0x183ecd0() {
   return (neuron0x1826120()*0.861454);
}

double NNfunction_sb_dLuR::synapse0x183ed10() {
   return (neuron0x1826af0()*0.31256);
}

double NNfunction_sb_dLuR::synapse0x183e8c0() {
   return (neuron0x181cb80()*0.477186);
}

double NNfunction_sb_dLuR::synapse0x183e900() {
   return (neuron0x18296d0()*0.788948);
}

double NNfunction_sb_dLuR::synapse0x183e940() {
   return (neuron0x182a0a0()*0.603686);
}

double NNfunction_sb_dLuR::synapse0x183e980() {
   return (neuron0x182aa70()*0.810079);
}

double NNfunction_sb_dLuR::synapse0x183ef60() {
   return (neuron0x182b440()*0.35606);
}

double NNfunction_sb_dLuR::synapse0x183efa0() {
   return (neuron0x182be10()*1.02407);
}

double NNfunction_sb_dLuR::synapse0x183efe0() {
   return (neuron0x182c7e0()*0.408482);
}

double NNfunction_sb_dLuR::synapse0x183f020() {
   return (neuron0x182d1b0()*0.763152);
}

double NNfunction_sb_dLuR::synapse0x183f060() {
   return (neuron0x182db80()*-0.0371202);
}

double NNfunction_sb_dLuR::synapse0x183f0a0() {
   return (neuron0x182e760()*0.100185);
}

double NNfunction_sb_dLuR::synapse0x183f0e0() {
   return (neuron0x182f130()*0.578113);
}

double NNfunction_sb_dLuR::synapse0x183f120() {
   return (neuron0x181ffb0()*-0.140436);
}

double NNfunction_sb_dLuR::synapse0x183f160() {
   return (neuron0x1820980()*0.502976);
}

double NNfunction_sb_dLuR::synapse0x183f1a0() {
   return (neuron0x1821350()*-0.178008);
}

double NNfunction_sb_dLuR::synapse0x183f1e0() {
   return (neuron0x1833990()*-0.633997);
}

double NNfunction_sb_dLuR::synapse0x183f220() {
   return (neuron0x1834240()*0.999999);
}

double NNfunction_sb_dLuR::synapse0x183f260() {
   return (neuron0x1834c10()*0.309918);
}

double NNfunction_sb_dLuR::synapse0x183f2a0() {
   return (neuron0x18355e0()*0.237291);
}

double NNfunction_sb_dLuR::synapse0x183f620() {
   return (neuron0x1811560()*-0.103762);
}

double NNfunction_sb_dLuR::synapse0x183f660() {
   return (neuron0x1811e70()*0.0253479);
}

double NNfunction_sb_dLuR::synapse0x183f6a0() {
   return (neuron0x1812950()*-0.0116908);
}

double NNfunction_sb_dLuR::synapse0x183f6e0() {
   return (neuron0x15cc1e0()*0.407887);
}

double NNfunction_sb_dLuR::synapse0x183f720() {
   return (neuron0x1813770()*0.0232597);
}

double NNfunction_sb_dLuR::synapse0x183f760() {
   return (neuron0x1814140()*-0.0849307);
}

double NNfunction_sb_dLuR::synapse0x183f7a0() {
   return (neuron0x1814f10()*1.02806);
}

double NNfunction_sb_dLuR::synapse0x183f7e0() {
   return (neuron0x18158e0()*-0.181556);
}

double NNfunction_sb_dLuR::synapse0x183f820() {
   return (neuron0x18162b0()*0.195351);
}

double NNfunction_sb_dLuR::synapse0x183f860() {
   return (neuron0x1816d90()*0.354376);
}

double NNfunction_sb_dLuR::synapse0x183f8a0() {
   return (neuron0x1817760()*0.865298);
}

double NNfunction_sb_dLuR::synapse0x183f8e0() {
   return (neuron0x1814840()*0.0274182);
}

double NNfunction_sb_dLuR::synapse0x183f920() {
   return (neuron0x1819310()*0.212626);
}

double NNfunction_sb_dLuR::synapse0x183f960() {
   return (neuron0x1819ce0()*1.08459);
}

double NNfunction_sb_dLuR::synapse0x183f9a0() {
   return (neuron0x181a6b0()*0.434303);
}

double NNfunction_sb_dLuR::synapse0x183f9e0() {
   return (neuron0x181b080()*0.593142);
}

double NNfunction_sb_dLuR::synapse0x183f470() {
   return (neuron0x181ce90()*-0.773412);
}

double NNfunction_sb_dLuR::synapse0x183f4b0() {
   return (neuron0x181d170()*0.0668632);
}

double NNfunction_sb_dLuR::synapse0x183fb30() {
   return (neuron0x181db40()*-0.636218);
}

double NNfunction_sb_dLuR::synapse0x183fb70() {
   return (neuron0x181e510()*-0.315428);
}

double NNfunction_sb_dLuR::synapse0x183fbb0() {
   return (neuron0x181eee0()*-0.878605);
}

double NNfunction_sb_dLuR::synapse0x183fbf0() {
   return (neuron0x181f8b0()*0.251198);
}

double NNfunction_sb_dLuR::synapse0x183fc30() {
   return (neuron0x1818400()*-0.394201);
}

double NNfunction_sb_dLuR::synapse0x183fc70() {
   return (neuron0x1818dd0()*-0.041083);
}

double NNfunction_sb_dLuR::synapse0x183fcb0() {
   return (neuron0x1822640()*1.1633);
}

double NNfunction_sb_dLuR::synapse0x183fcf0() {
   return (neuron0x1823010()*-0.760099);
}

double NNfunction_sb_dLuR::synapse0x183fd30() {
   return (neuron0x18239e0()*-1.5479);
}

double NNfunction_sb_dLuR::synapse0x183fd70() {
   return (neuron0x18243b0()*0.119909);
}

double NNfunction_sb_dLuR::synapse0x183fdb0() {
   return (neuron0x1824d80()*-0.185916);
}

double NNfunction_sb_dLuR::synapse0x183fdf0() {
   return (neuron0x1825750()*0.647795);
}

double NNfunction_sb_dLuR::synapse0x183fe30() {
   return (neuron0x1826120()*0.399893);
}

double NNfunction_sb_dLuR::synapse0x183fe70() {
   return (neuron0x1826af0()*-0.15992);
}

double NNfunction_sb_dLuR::synapse0x183fa20() {
   return (neuron0x181cb80()*-0.261176);
}

double NNfunction_sb_dLuR::synapse0x183fa60() {
   return (neuron0x18296d0()*-0.562578);
}

double NNfunction_sb_dLuR::synapse0x183faa0() {
   return (neuron0x182a0a0()*0.139196);
}

double NNfunction_sb_dLuR::synapse0x183fae0() {
   return (neuron0x182aa70()*-0.111584);
}

double NNfunction_sb_dLuR::synapse0x18400c0() {
   return (neuron0x182b440()*-0.261102);
}

double NNfunction_sb_dLuR::synapse0x1840100() {
   return (neuron0x182be10()*-0.522934);
}

double NNfunction_sb_dLuR::synapse0x1840140() {
   return (neuron0x182c7e0()*0.0758512);
}

double NNfunction_sb_dLuR::synapse0x1840180() {
   return (neuron0x182d1b0()*-1.00637);
}

double NNfunction_sb_dLuR::synapse0x18401c0() {
   return (neuron0x182db80()*0.222919);
}

double NNfunction_sb_dLuR::synapse0x1840200() {
   return (neuron0x182e760()*-0.0576577);
}

double NNfunction_sb_dLuR::synapse0x1840240() {
   return (neuron0x182f130()*0.139105);
}

double NNfunction_sb_dLuR::synapse0x1840280() {
   return (neuron0x181ffb0()*-0.204161);
}

double NNfunction_sb_dLuR::synapse0x18402c0() {
   return (neuron0x1820980()*0.0531937);
}

double NNfunction_sb_dLuR::synapse0x1840300() {
   return (neuron0x1821350()*0.379405);
}

double NNfunction_sb_dLuR::synapse0x1840340() {
   return (neuron0x1833990()*0.0168982);
}

double NNfunction_sb_dLuR::synapse0x1840380() {
   return (neuron0x1834240()*-0.0529104);
}

double NNfunction_sb_dLuR::synapse0x18403c0() {
   return (neuron0x1834c10()*0.151185);
}

double NNfunction_sb_dLuR::synapse0x1840400() {
   return (neuron0x18355e0()*-0.302475);
}

double NNfunction_sb_dLuR::synapse0x1811520() {
   return (neuron0x183c7e0()*-7.01746);
}

double NNfunction_sb_dLuR::synapse0x1840660() {
   return (neuron0x183cb80()*-4.80583);
}

double NNfunction_sb_dLuR::synapse0x18406a0() {
   return (neuron0x183d020()*10.0489);
}

double NNfunction_sb_dLuR::synapse0x18406e0() {
   return (neuron0x183e180()*5.72809);
}

double NNfunction_sb_dLuR::synapse0x1840720() {
   return (neuron0x183f2e0()*2.06232);
}

