#include "NNfunction_ss_uLuR.h"
#include <cmath>

double NNfunction_ss_uLuR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5046)/15.3035;
   input1 = (in1 - -4.4089)/1160.29;
   input2 = (in2 - 660.641)/626.874;
   input3 = (in3 - -55.7811)/823.641;
   input4 = (in4 - 1075.62)/963.607;
   input5 = (in5 - 903.13)/954.348;
   input6 = (in6 - 915.501)/958.748;
   input7 = (in7 - 930.888)/939.847;
   input8 = (in8 - 919.678)/965.945;
   input9 = (in9 - 899.804)/949.555;
   input10 = (in10 - 989.438)/951.843;
   input11 = (in11 - 591.586)/683.5;
   input12 = (in12 - 724.095)/869.038;
   input13 = (in13 - 509.767)/527.577;
   input14 = (in14 - 629.093)/695.116;
   input15 = (in15 - 734.699)/830.463;
   input16 = (in16 - 543.613)/571.317;
   input17 = (in17 - 761.104)/895.892;
   input18 = (in18 - 749.607)/896.152;
   input19 = (in19 - 803.202)/877.277;
   input20 = (in20 - -4.01329)/492.618;
   input21 = (in21 - 4.0478)/1158.44;
   input22 = (in22 - 6.625)/1204.46;
   input23 = (in23 - -194.444)/606.634;
   switch(index) {
     case 0:
         return neuron0x25b3500();
     default:
         return 0.;
   }
}

double NNfunction_ss_uLuR::Value(int index, double* input) {
   input0 = (input[0] - 23.5046)/15.3035;
   input1 = (input[1] - -4.4089)/1160.29;
   input2 = (input[2] - 660.641)/626.874;
   input3 = (input[3] - -55.7811)/823.641;
   input4 = (input[4] - 1075.62)/963.607;
   input5 = (input[5] - 903.13)/954.348;
   input6 = (input[6] - 915.501)/958.748;
   input7 = (input[7] - 930.888)/939.847;
   input8 = (input[8] - 919.678)/965.945;
   input9 = (input[9] - 899.804)/949.555;
   input10 = (input[10] - 989.438)/951.843;
   input11 = (input[11] - 591.586)/683.5;
   input12 = (input[12] - 724.095)/869.038;
   input13 = (input[13] - 509.767)/527.577;
   input14 = (input[14] - 629.093)/695.116;
   input15 = (input[15] - 734.699)/830.463;
   input16 = (input[16] - 543.613)/571.317;
   input17 = (input[17] - 761.104)/895.892;
   input18 = (input[18] - 749.607)/896.152;
   input19 = (input[19] - 803.202)/877.277;
   input20 = (input[20] - -4.01329)/492.618;
   input21 = (input[21] - 4.0478)/1158.44;
   input22 = (input[22] - 6.625)/1204.46;
   input23 = (input[23] - -194.444)/606.634;
   switch(index) {
     case 0:
         return neuron0x25b3500();
     default:
         return 0.;
   }
}

double NNfunction_ss_uLuR::neuron0x257f5c0() {
   return input0;
}

double NNfunction_ss_uLuR::neuron0x257f900() {
   return input1;
}

double NNfunction_ss_uLuR::neuron0x257fc40() {
   return input2;
}

double NNfunction_ss_uLuR::neuron0x257ff80() {
   return input3;
}

double NNfunction_ss_uLuR::neuron0x25802c0() {
   return input4;
}

double NNfunction_ss_uLuR::neuron0x2580600() {
   return input5;
}

double NNfunction_ss_uLuR::neuron0x2580940() {
   return input6;
}

double NNfunction_ss_uLuR::neuron0x2580c80() {
   return input7;
}

double NNfunction_ss_uLuR::neuron0x2580fc0() {
   return input8;
}

double NNfunction_ss_uLuR::neuron0x2581300() {
   return input9;
}

double NNfunction_ss_uLuR::neuron0x2581640() {
   return input10;
}

double NNfunction_ss_uLuR::neuron0x2581980() {
   return input11;
}

double NNfunction_ss_uLuR::neuron0x2581cc0() {
   return input12;
}

double NNfunction_ss_uLuR::neuron0x2582000() {
   return input13;
}

double NNfunction_ss_uLuR::neuron0x2582340() {
   return input14;
}

double NNfunction_ss_uLuR::neuron0x2582680() {
   return input15;
}

double NNfunction_ss_uLuR::neuron0x25829c0() {
   return input16;
}

double NNfunction_ss_uLuR::neuron0x2582f20() {
   return input17;
}

double NNfunction_ss_uLuR::neuron0x2583140() {
   return input18;
}

double NNfunction_ss_uLuR::neuron0x2583480() {
   return input19;
}

double NNfunction_ss_uLuR::neuron0x25837c0() {
   return input20;
}

double NNfunction_ss_uLuR::neuron0x2583b00() {
   return input21;
}

double NNfunction_ss_uLuR::neuron0x2583e40() {
   return input22;
}

double NNfunction_ss_uLuR::neuron0x2584180() {
   return input23;
}

double NNfunction_ss_uLuR::input0x2584620() {
   double input = -1.3288;
   input += synapse0x233f430();
   input += synapse0x257f480();
   input += synapse0x257f4c0();
   input += synapse0x25848d0();
   input += synapse0x2584910();
   input += synapse0x2584950();
   input += synapse0x2584990();
   input += synapse0x25849d0();
   input += synapse0x2584a10();
   input += synapse0x2584a50();
   input += synapse0x2584a90();
   input += synapse0x2584ad0();
   input += synapse0x2584b10();
   input += synapse0x2584b50();
   input += synapse0x2584b90();
   input += synapse0x2584bd0();
   input += synapse0x257f3f0();
   input += synapse0x257f430();
   input += synapse0x2330d30();
   input += synapse0x2330d70();
   input += synapse0x2584e30();
   input += synapse0x2584e70();
   input += synapse0x2584eb0();
   input += synapse0x2584ef0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x2584620() {
   double input = input0x2584620();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x2584f30() {
   double input = -0.249756;
   input += synapse0x2585270();
   input += synapse0x25852b0();
   input += synapse0x25852f0();
   input += synapse0x2585330();
   input += synapse0x2585370();
   input += synapse0x25853b0();
   input += synapse0x25853f0();
   input += synapse0x2585430();
   input += synapse0x2585470();
   input += synapse0x2584d20();
   input += synapse0x2584d60();
   input += synapse0x2584da0();
   input += synapse0x2584de0();
   input += synapse0x25856c0();
   input += synapse0x2585700();
   input += synapse0x2585740();
   input += synapse0x25850c0();
   input += synapse0x2585100();
   input += synapse0x2585890();
   input += synapse0x25858d0();
   input += synapse0x2585910();
   input += synapse0x2585950();
   input += synapse0x2585990();
   input += synapse0x25859d0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x2584f30() {
   double input = input0x2584f30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x2585a10() {
   double input = 1.11335;
   input += synapse0x2585d50();
   input += synapse0x2585d90();
   input += synapse0x2585dd0();
   input += synapse0x2585e10();
   input += synapse0x2585e50();
   input += synapse0x2585e90();
   input += synapse0x2585ed0();
   input += synapse0x2585f10();
   input += synapse0x2585f50();
   input += synapse0x2585f90();
   input += synapse0x2585fd0();
   input += synapse0x2586010();
   input += synapse0x2586050();
   input += synapse0x2586090();
   input += synapse0x25860d0();
   input += synapse0x2586110();
   input += synapse0x2585ba0();
   input += synapse0x2585be0();
   input += synapse0x233eb20();
   input += synapse0x233eb60();
   input += synapse0x256e650();
   input += synapse0x256e690();
   input += synapse0x256e6d0();
   input += synapse0x257f500();
   return input;
}

double NNfunction_ss_uLuR::neuron0x2585a10() {
   double input = input0x2585a10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x233f2a0() {
   double input = -0.221523;
   input += synapse0x2585660();
   input += synapse0x257f540();
   input += synapse0x257f580();
   input += synapse0x2586260();
   input += synapse0x25862a0();
   input += synapse0x25862e0();
   input += synapse0x2586320();
   input += synapse0x2586360();
   input += synapse0x25863a0();
   input += synapse0x25863e0();
   input += synapse0x2586420();
   input += synapse0x2586460();
   input += synapse0x25864a0();
   input += synapse0x25864e0();
   input += synapse0x2586520();
   input += synapse0x2586560();
   input += synapse0x25854b0();
   input += synapse0x25854f0();
   input += synapse0x25866b0();
   input += synapse0x25866f0();
   input += synapse0x2586730();
   input += synapse0x2586770();
   input += synapse0x25867b0();
   input += synapse0x25867f0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x233f2a0() {
   double input = input0x233f2a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x2586830() {
   double input = -1.19675;
   input += synapse0x2586b70();
   input += synapse0x2586bb0();
   input += synapse0x2586bf0();
   input += synapse0x2586c30();
   input += synapse0x2586c70();
   input += synapse0x2586cb0();
   input += synapse0x2586cf0();
   input += synapse0x2586d30();
   input += synapse0x2586d70();
   input += synapse0x2586db0();
   input += synapse0x2586df0();
   input += synapse0x2586e30();
   input += synapse0x2586e70();
   input += synapse0x2586eb0();
   input += synapse0x2586ef0();
   input += synapse0x2586f30();
   input += synapse0x25869c0();
   input += synapse0x2586a00();
   input += synapse0x2587080();
   input += synapse0x25870c0();
   input += synapse0x2587100();
   input += synapse0x2587140();
   input += synapse0x2587180();
   input += synapse0x25871c0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x2586830() {
   double input = input0x2586830();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x2587200() {
   double input = 0.246789;
   input += synapse0x2587540();
   input += synapse0x2587580();
   input += synapse0x25875c0();
   input += synapse0x2587600();
   input += synapse0x2587640();
   input += synapse0x2587680();
   input += synapse0x25876c0();
   input += synapse0x2587700();
   input += synapse0x2587740();
   input += synapse0x233ee90();
   input += synapse0x233eed0();
   input += synapse0x233ef10();
   input += synapse0x233ef50();
   input += synapse0x233ef90();
   input += synapse0x233efd0();
   input += synapse0x233f010();
   input += synapse0x2587390();
   input += synapse0x25873d0();
   input += synapse0x233f160();
   input += synapse0x233f1a0();
   input += synapse0x233f1e0();
   input += synapse0x233f220();
   input += synapse0x233f260();
   input += synapse0x2587f90();
   return input;
}

double NNfunction_ss_uLuR::neuron0x2587200() {
   double input = input0x2587200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x2587fd0() {
   double input = -0.914877;
   input += synapse0x2588310();
   input += synapse0x2588350();
   input += synapse0x2588390();
   input += synapse0x25883d0();
   input += synapse0x2588410();
   input += synapse0x2588450();
   input += synapse0x2588490();
   input += synapse0x25884d0();
   input += synapse0x2588510();
   input += synapse0x2588550();
   input += synapse0x2588590();
   input += synapse0x25885d0();
   input += synapse0x2588610();
   input += synapse0x2588650();
   input += synapse0x2588690();
   input += synapse0x25886d0();
   input += synapse0x2588160();
   input += synapse0x25881a0();
   input += synapse0x2588820();
   input += synapse0x2588860();
   input += synapse0x25888a0();
   input += synapse0x25888e0();
   input += synapse0x2588920();
   input += synapse0x2588960();
   return input;
}

double NNfunction_ss_uLuR::neuron0x2587fd0() {
   double input = input0x2587fd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x25889a0() {
   double input = -0.281756;
   input += synapse0x2588ce0();
   input += synapse0x2588d20();
   input += synapse0x2588d60();
   input += synapse0x2588da0();
   input += synapse0x2588de0();
   input += synapse0x2588e20();
   input += synapse0x2588e60();
   input += synapse0x2588ea0();
   input += synapse0x2588ee0();
   input += synapse0x2588f20();
   input += synapse0x2588f60();
   input += synapse0x2588fa0();
   input += synapse0x2588fe0();
   input += synapse0x2589020();
   input += synapse0x2589060();
   input += synapse0x25890a0();
   input += synapse0x2588b30();
   input += synapse0x2588b70();
   input += synapse0x25891f0();
   input += synapse0x2589230();
   input += synapse0x2589270();
   input += synapse0x25892b0();
   input += synapse0x25892f0();
   input += synapse0x2589330();
   return input;
}

double NNfunction_ss_uLuR::neuron0x25889a0() {
   double input = input0x25889a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x2589370() {
   double input = -1.182;
   input += synapse0x2582e10();
   input += synapse0x2582e50();
   input += synapse0x2582e90();
   input += synapse0x2582ed0();
   input += synapse0x25898c0();
   input += synapse0x2589900();
   input += synapse0x2589940();
   input += synapse0x2589980();
   input += synapse0x25899c0();
   input += synapse0x2589a00();
   input += synapse0x2589a40();
   input += synapse0x2589a80();
   input += synapse0x2589ac0();
   input += synapse0x2589b00();
   input += synapse0x2589b40();
   input += synapse0x2589b80();
   input += synapse0x2589500();
   input += synapse0x2589540();
   input += synapse0x2589cd0();
   input += synapse0x2589d10();
   input += synapse0x2589d50();
   input += synapse0x2589d90();
   input += synapse0x2589dd0();
   input += synapse0x2589e10();
   return input;
}

double NNfunction_ss_uLuR::neuron0x2589370() {
   double input = input0x2589370();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x2589e50() {
   double input = -0.299457;
   input += synapse0x258a190();
   input += synapse0x258a1d0();
   input += synapse0x258a210();
   input += synapse0x258a250();
   input += synapse0x258a290();
   input += synapse0x258a2d0();
   input += synapse0x258a310();
   input += synapse0x258a350();
   input += synapse0x258a390();
   input += synapse0x258a3d0();
   input += synapse0x258a410();
   input += synapse0x258a450();
   input += synapse0x258a490();
   input += synapse0x258a4d0();
   input += synapse0x258a510();
   input += synapse0x258a550();
   input += synapse0x2589fe0();
   input += synapse0x258a020();
   input += synapse0x258a6a0();
   input += synapse0x258a6e0();
   input += synapse0x258a720();
   input += synapse0x258a760();
   input += synapse0x258a7a0();
   input += synapse0x258a7e0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x2589e50() {
   double input = input0x2589e50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x258a820() {
   double input = 0.216226;
   input += synapse0x258ab60();
   input += synapse0x258aba0();
   input += synapse0x258abe0();
   input += synapse0x258ac20();
   input += synapse0x258ac60();
   input += synapse0x258aca0();
   input += synapse0x258ace0();
   input += synapse0x258ad20();
   input += synapse0x258ad60();
   input += synapse0x258ada0();
   input += synapse0x258ade0();
   input += synapse0x258ae20();
   input += synapse0x258ae60();
   input += synapse0x258aea0();
   input += synapse0x258aee0();
   input += synapse0x258af20();
   input += synapse0x258a9b0();
   input += synapse0x258a9f0();
   input += synapse0x2587780();
   input += synapse0x25877c0();
   input += synapse0x2587800();
   input += synapse0x2587840();
   input += synapse0x2587880();
   input += synapse0x25878c0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x258a820() {
   double input = input0x258a820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x2587900() {
   double input = -0.215179;
   input += synapse0x2587c40();
   input += synapse0x2587c80();
   input += synapse0x2587cc0();
   input += synapse0x2587d00();
   input += synapse0x2587d40();
   input += synapse0x2587d80();
   input += synapse0x2587dc0();
   input += synapse0x2587e00();
   input += synapse0x2587e40();
   input += synapse0x2587e80();
   input += synapse0x2587ec0();
   input += synapse0x2587f00();
   input += synapse0x2587f40();
   input += synapse0x258c080();
   input += synapse0x258c0c0();
   input += synapse0x258c100();
   input += synapse0x2587a90();
   input += synapse0x2587ad0();
   input += synapse0x258c250();
   input += synapse0x258c290();
   input += synapse0x258c2d0();
   input += synapse0x258c310();
   input += synapse0x258c350();
   input += synapse0x258c390();
   return input;
}

double NNfunction_ss_uLuR::neuron0x2587900() {
   double input = input0x2587900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x258c3d0() {
   double input = 2.71163;
   input += synapse0x258c710();
   input += synapse0x258c750();
   input += synapse0x258c790();
   input += synapse0x258c7d0();
   input += synapse0x258c810();
   input += synapse0x258c850();
   input += synapse0x258c890();
   input += synapse0x258c8d0();
   input += synapse0x258c910();
   input += synapse0x258c950();
   input += synapse0x258c990();
   input += synapse0x258c9d0();
   input += synapse0x258ca10();
   input += synapse0x258ca50();
   input += synapse0x258ca90();
   input += synapse0x258cad0();
   input += synapse0x258c560();
   input += synapse0x258c5a0();
   input += synapse0x258cc20();
   input += synapse0x258cc60();
   input += synapse0x258cca0();
   input += synapse0x258cce0();
   input += synapse0x258cd20();
   input += synapse0x258cd60();
   return input;
}

double NNfunction_ss_uLuR::neuron0x258c3d0() {
   double input = input0x258c3d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x258cda0() {
   double input = -0.0805359;
   input += synapse0x258d0e0();
   input += synapse0x258d120();
   input += synapse0x258d160();
   input += synapse0x258d1a0();
   input += synapse0x258d1e0();
   input += synapse0x258d220();
   input += synapse0x258d260();
   input += synapse0x258d2a0();
   input += synapse0x258d2e0();
   input += synapse0x258d320();
   input += synapse0x258d360();
   input += synapse0x258d3a0();
   input += synapse0x258d3e0();
   input += synapse0x258d420();
   input += synapse0x258d460();
   input += synapse0x258d4a0();
   input += synapse0x258cf30();
   input += synapse0x258cf70();
   input += synapse0x258d5f0();
   input += synapse0x258d630();
   input += synapse0x258d670();
   input += synapse0x258d6b0();
   input += synapse0x258d6f0();
   input += synapse0x258d730();
   return input;
}

double NNfunction_ss_uLuR::neuron0x258cda0() {
   double input = input0x258cda0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x258d770() {
   double input = 1.21543;
   input += synapse0x258dab0();
   input += synapse0x258daf0();
   input += synapse0x258db30();
   input += synapse0x258db70();
   input += synapse0x258dbb0();
   input += synapse0x258dbf0();
   input += synapse0x258dc30();
   input += synapse0x258dc70();
   input += synapse0x258dcb0();
   input += synapse0x258dcf0();
   input += synapse0x258dd30();
   input += synapse0x258dd70();
   input += synapse0x258ddb0();
   input += synapse0x258ddf0();
   input += synapse0x258de30();
   input += synapse0x258de70();
   input += synapse0x258d900();
   input += synapse0x258d940();
   input += synapse0x258dfc0();
   input += synapse0x258e000();
   input += synapse0x258e040();
   input += synapse0x258e080();
   input += synapse0x258e0c0();
   input += synapse0x258e100();
   return input;
}

double NNfunction_ss_uLuR::neuron0x258d770() {
   double input = input0x258d770();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x258e140() {
   double input = 3.53045;
   input += synapse0x258e480();
   input += synapse0x257f7e0();
   input += synapse0x257f820();
   input += synapse0x257fb20();
   input += synapse0x257fb60();
   input += synapse0x257fe60();
   input += synapse0x257fea0();
   input += synapse0x25801a0();
   input += synapse0x25801e0();
   input += synapse0x25804e0();
   input += synapse0x2580520();
   input += synapse0x2580820();
   input += synapse0x2580860();
   input += synapse0x2580b60();
   input += synapse0x2580ba0();
   input += synapse0x2580ea0();
   input += synapse0x2580ee0();
   input += synapse0x25811e0();
   input += synapse0x2581220();
   input += synapse0x2581520();
   input += synapse0x2581560();
   input += synapse0x2581860();
   input += synapse0x25818a0();
   input += synapse0x2581ba0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x258e140() {
   double input = input0x258e140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x258ff50() {
   double input = 1.89882;
   input += synapse0x2581be0();
   input += synapse0x25828a0();
   input += synapse0x25828e0();
   input += synapse0x258e2d0();
   input += synapse0x258e310();
   input += synapse0x2582be0();
   input += synapse0x2582c20();
   input += synapse0x2330c10();
   input += synapse0x2330c50();
   input += synapse0x2583360();
   input += synapse0x25833a0();
   input += synapse0x25836a0();
   input += synapse0x25836e0();
   input += synapse0x25839e0();
   input += synapse0x2583a20();
   input += synapse0x2583d20();
   input += synapse0x2583d60();
   input += synapse0x2584060();
   input += synapse0x25840a0();
   input += synapse0x25843a0();
   input += synapse0x25843e0();
   input += synapse0x2581ee0();
   input += synapse0x2581f20();
   input += synapse0x25901f0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x258ff50() {
   double input = input0x258ff50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x2590230() {
   double input = 2.55647;
   input += synapse0x2590570();
   input += synapse0x25905b0();
   input += synapse0x25905f0();
   input += synapse0x2590630();
   input += synapse0x2590670();
   input += synapse0x25906b0();
   input += synapse0x25906f0();
   input += synapse0x2590730();
   input += synapse0x2590770();
   input += synapse0x25907b0();
   input += synapse0x25907f0();
   input += synapse0x2590830();
   input += synapse0x2590870();
   input += synapse0x25908b0();
   input += synapse0x25908f0();
   input += synapse0x2590930();
   input += synapse0x25903c0();
   input += synapse0x2590400();
   input += synapse0x2590a80();
   input += synapse0x2590ac0();
   input += synapse0x2590b00();
   input += synapse0x2590b40();
   input += synapse0x2590b80();
   input += synapse0x2590bc0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x2590230() {
   double input = input0x2590230();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x2590c00() {
   double input = -0.108677;
   input += synapse0x2590f40();
   input += synapse0x2590f80();
   input += synapse0x2590fc0();
   input += synapse0x2591000();
   input += synapse0x2591040();
   input += synapse0x2591080();
   input += synapse0x25910c0();
   input += synapse0x2591100();
   input += synapse0x2591140();
   input += synapse0x2591180();
   input += synapse0x25911c0();
   input += synapse0x2591200();
   input += synapse0x2591240();
   input += synapse0x2591280();
   input += synapse0x25912c0();
   input += synapse0x2591300();
   input += synapse0x2590d90();
   input += synapse0x2590dd0();
   input += synapse0x2591450();
   input += synapse0x2591490();
   input += synapse0x25914d0();
   input += synapse0x2591510();
   input += synapse0x2591550();
   input += synapse0x2591590();
   return input;
}

double NNfunction_ss_uLuR::neuron0x2590c00() {
   double input = input0x2590c00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x25915d0() {
   double input = 4.28846;
   input += synapse0x2591910();
   input += synapse0x2591950();
   input += synapse0x2591990();
   input += synapse0x25919d0();
   input += synapse0x2591a10();
   input += synapse0x2591a50();
   input += synapse0x2591a90();
   input += synapse0x2591ad0();
   input += synapse0x2591b10();
   input += synapse0x2591b50();
   input += synapse0x2591b90();
   input += synapse0x2591bd0();
   input += synapse0x2591c10();
   input += synapse0x2591c50();
   input += synapse0x2591c90();
   input += synapse0x2591cd0();
   input += synapse0x2591760();
   input += synapse0x25917a0();
   input += synapse0x2591e20();
   input += synapse0x2591e60();
   input += synapse0x2591ea0();
   input += synapse0x2591ee0();
   input += synapse0x2591f20();
   input += synapse0x2591f60();
   return input;
}

double NNfunction_ss_uLuR::neuron0x25915d0() {
   double input = input0x25915d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x2591fa0() {
   double input = 1.24002;
   input += synapse0x25922e0();
   input += synapse0x2592320();
   input += synapse0x2592360();
   input += synapse0x25923a0();
   input += synapse0x25923e0();
   input += synapse0x2592420();
   input += synapse0x2592460();
   input += synapse0x25924a0();
   input += synapse0x25924e0();
   input += synapse0x2592520();
   input += synapse0x2592560();
   input += synapse0x25925a0();
   input += synapse0x25925e0();
   input += synapse0x2592620();
   input += synapse0x2592660();
   input += synapse0x25926a0();
   input += synapse0x2592130();
   input += synapse0x2592170();
   input += synapse0x25927f0();
   input += synapse0x2592830();
   input += synapse0x2592870();
   input += synapse0x25928b0();
   input += synapse0x25928f0();
   input += synapse0x2592930();
   return input;
}

double NNfunction_ss_uLuR::neuron0x2591fa0() {
   double input = input0x2591fa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x2592970() {
   double input = 0.263551;
   input += synapse0x2592cb0();
   input += synapse0x2592cf0();
   input += synapse0x2592d30();
   input += synapse0x2592d70();
   input += synapse0x2592db0();
   input += synapse0x2592df0();
   input += synapse0x2592e30();
   input += synapse0x2592e70();
   input += synapse0x2592eb0();
   input += synapse0x258b070();
   input += synapse0x258b0b0();
   input += synapse0x258b0f0();
   input += synapse0x258b130();
   input += synapse0x258b170();
   input += synapse0x258b1b0();
   input += synapse0x258b1f0();
   input += synapse0x2592b00();
   input += synapse0x2592b40();
   input += synapse0x258b340();
   input += synapse0x258b380();
   input += synapse0x258b3c0();
   input += synapse0x258b400();
   input += synapse0x258b440();
   input += synapse0x258b480();
   return input;
}

double NNfunction_ss_uLuR::neuron0x2592970() {
   double input = input0x2592970();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x258b4c0() {
   double input = -0.415776;
   input += synapse0x258b800();
   input += synapse0x258b840();
   input += synapse0x258b880();
   input += synapse0x258b8c0();
   input += synapse0x258b900();
   input += synapse0x258b940();
   input += synapse0x258b980();
   input += synapse0x258b9c0();
   input += synapse0x258ba00();
   input += synapse0x258ba40();
   input += synapse0x258ba80();
   input += synapse0x258bac0();
   input += synapse0x258bb00();
   input += synapse0x258bb40();
   input += synapse0x258bb80();
   input += synapse0x258bbc0();
   input += synapse0x258b650();
   input += synapse0x258b690();
   input += synapse0x258bd10();
   input += synapse0x258bd50();
   input += synapse0x258bd90();
   input += synapse0x258bdd0();
   input += synapse0x258be10();
   input += synapse0x258be50();
   return input;
}

double NNfunction_ss_uLuR::neuron0x258b4c0() {
   double input = input0x258b4c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x258be90() {
   double input = -0.642977;
   input += synapse0x258c020();
   input += synapse0x25950b0();
   input += synapse0x25950f0();
   input += synapse0x2595130();
   input += synapse0x2595170();
   input += synapse0x25951b0();
   input += synapse0x25951f0();
   input += synapse0x2595230();
   input += synapse0x2595270();
   input += synapse0x25952b0();
   input += synapse0x25952f0();
   input += synapse0x2595330();
   input += synapse0x2595370();
   input += synapse0x25953b0();
   input += synapse0x25953f0();
   input += synapse0x2595430();
   input += synapse0x2594f00();
   input += synapse0x2594f40();
   input += synapse0x2595580();
   input += synapse0x25955c0();
   input += synapse0x2595600();
   input += synapse0x2595640();
   input += synapse0x2595680();
   input += synapse0x25956c0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x258be90() {
   double input = input0x258be90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x2595700() {
   double input = -0.661587;
   input += synapse0x2595a40();
   input += synapse0x2595a80();
   input += synapse0x2595ac0();
   input += synapse0x2595b00();
   input += synapse0x2595b40();
   input += synapse0x2595b80();
   input += synapse0x2595bc0();
   input += synapse0x2595c00();
   input += synapse0x2595c40();
   input += synapse0x2595c80();
   input += synapse0x2595cc0();
   input += synapse0x2595d00();
   input += synapse0x2595d40();
   input += synapse0x2595d80();
   input += synapse0x2595dc0();
   input += synapse0x2595e00();
   input += synapse0x2595890();
   input += synapse0x25958d0();
   input += synapse0x2595f50();
   input += synapse0x2595f90();
   input += synapse0x2595fd0();
   input += synapse0x2596010();
   input += synapse0x2596050();
   input += synapse0x2596090();
   return input;
}

double NNfunction_ss_uLuR::neuron0x2595700() {
   double input = input0x2595700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x25960d0() {
   double input = 0.949935;
   input += synapse0x2596410();
   input += synapse0x2596450();
   input += synapse0x2596490();
   input += synapse0x25964d0();
   input += synapse0x2596510();
   input += synapse0x2596550();
   input += synapse0x2596590();
   input += synapse0x25965d0();
   input += synapse0x2596610();
   input += synapse0x2596650();
   input += synapse0x2596690();
   input += synapse0x25966d0();
   input += synapse0x2596710();
   input += synapse0x2596750();
   input += synapse0x2596790();
   input += synapse0x25967d0();
   input += synapse0x2596260();
   input += synapse0x25962a0();
   input += synapse0x2596920();
   input += synapse0x2596960();
   input += synapse0x25969a0();
   input += synapse0x25969e0();
   input += synapse0x2596a20();
   input += synapse0x2596a60();
   return input;
}

double NNfunction_ss_uLuR::neuron0x25960d0() {
   double input = input0x25960d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x2596aa0() {
   double input = 1.91844;
   input += synapse0x2596de0();
   input += synapse0x2596e20();
   input += synapse0x2596e60();
   input += synapse0x2596ea0();
   input += synapse0x2596ee0();
   input += synapse0x2596f20();
   input += synapse0x2596f60();
   input += synapse0x2596fa0();
   input += synapse0x2596fe0();
   input += synapse0x2597020();
   input += synapse0x2597060();
   input += synapse0x25970a0();
   input += synapse0x25970e0();
   input += synapse0x2597120();
   input += synapse0x2597160();
   input += synapse0x25971a0();
   input += synapse0x2596c30();
   input += synapse0x2596c70();
   input += synapse0x25972f0();
   input += synapse0x2597330();
   input += synapse0x2597370();
   input += synapse0x25973b0();
   input += synapse0x25973f0();
   input += synapse0x2597430();
   return input;
}

double NNfunction_ss_uLuR::neuron0x2596aa0() {
   double input = input0x2596aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x2597470() {
   double input = 0.627501;
   input += synapse0x25977b0();
   input += synapse0x25977f0();
   input += synapse0x2597830();
   input += synapse0x2597870();
   input += synapse0x25978b0();
   input += synapse0x25978f0();
   input += synapse0x2597930();
   input += synapse0x2597970();
   input += synapse0x25979b0();
   input += synapse0x25979f0();
   input += synapse0x2597a30();
   input += synapse0x2597a70();
   input += synapse0x2597ab0();
   input += synapse0x2597af0();
   input += synapse0x2597b30();
   input += synapse0x2597b70();
   input += synapse0x2597600();
   input += synapse0x2597640();
   input += synapse0x2597cc0();
   input += synapse0x2597d00();
   input += synapse0x2597d40();
   input += synapse0x2597d80();
   input += synapse0x2597dc0();
   input += synapse0x2597e00();
   return input;
}

double NNfunction_ss_uLuR::neuron0x2597470() {
   double input = input0x2597470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x2597e40() {
   double input = 0.437562;
   input += synapse0x2598180();
   input += synapse0x25981c0();
   input += synapse0x2598200();
   input += synapse0x2598240();
   input += synapse0x2598280();
   input += synapse0x25982c0();
   input += synapse0x2598300();
   input += synapse0x2598340();
   input += synapse0x2598380();
   input += synapse0x25983c0();
   input += synapse0x2598400();
   input += synapse0x2598440();
   input += synapse0x2598480();
   input += synapse0x25984c0();
   input += synapse0x2598500();
   input += synapse0x2598540();
   input += synapse0x2597fd0();
   input += synapse0x2598010();
   input += synapse0x2598690();
   input += synapse0x25986d0();
   input += synapse0x2598710();
   input += synapse0x2598750();
   input += synapse0x2598790();
   input += synapse0x25987d0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x2597e40() {
   double input = input0x2597e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x2598810() {
   double input = -0.193611;
   input += synapse0x2598b50();
   input += synapse0x2598b90();
   input += synapse0x2598bd0();
   input += synapse0x2598c10();
   input += synapse0x2598c50();
   input += synapse0x2598c90();
   input += synapse0x2598cd0();
   input += synapse0x2598d10();
   input += synapse0x2598d50();
   input += synapse0x2598d90();
   input += synapse0x2598dd0();
   input += synapse0x2598e10();
   input += synapse0x2598e50();
   input += synapse0x2598e90();
   input += synapse0x2598ed0();
   input += synapse0x2598f10();
   input += synapse0x25989a0();
   input += synapse0x25989e0();
   input += synapse0x2599060();
   input += synapse0x25990a0();
   input += synapse0x25990e0();
   input += synapse0x2599120();
   input += synapse0x2599160();
   input += synapse0x25991a0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x2598810() {
   double input = input0x2598810();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x25991e0() {
   double input = -0.549988;
   input += synapse0x2599520();
   input += synapse0x2599560();
   input += synapse0x25995a0();
   input += synapse0x25995e0();
   input += synapse0x2599620();
   input += synapse0x2599660();
   input += synapse0x25996a0();
   input += synapse0x25996e0();
   input += synapse0x2599720();
   input += synapse0x2599760();
   input += synapse0x25997a0();
   input += synapse0x25997e0();
   input += synapse0x2599820();
   input += synapse0x2599860();
   input += synapse0x25998a0();
   input += synapse0x25998e0();
   input += synapse0x2599370();
   input += synapse0x25993b0();
   input += synapse0x2599a30();
   input += synapse0x2599a70();
   input += synapse0x2599ab0();
   input += synapse0x2599af0();
   input += synapse0x2599b30();
   input += synapse0x2599b70();
   return input;
}

double NNfunction_ss_uLuR::neuron0x25991e0() {
   double input = input0x25991e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x2599bb0() {
   double input = -0.0892457;
   input += synapse0x2599ef0();
   input += synapse0x258e4c0();
   input += synapse0x258e500();
   input += synapse0x258e540();
   input += synapse0x258e790();
   input += synapse0x258e7d0();
   input += synapse0x258e810();
   input += synapse0x258ea60();
   input += synapse0x258eaa0();
   input += synapse0x258ecf0();
   input += synapse0x258ed30();
   input += synapse0x258ed70();
   input += synapse0x258efc0();
   input += synapse0x258f000();
   input += synapse0x258f250();
   input += synapse0x258f290();
   input += synapse0x2599d40();
   input += synapse0x2599d80();
   input += synapse0x258f3e0();
   input += synapse0x258f8f0();
   input += synapse0x258f930();
   input += synapse0x258f970();
   input += synapse0x258fbc0();
   input += synapse0x258fc00();
   return input;
}

double NNfunction_ss_uLuR::neuron0x2599bb0() {
   double input = input0x2599bb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x258fc40() {
   double input = 0.784395;
   input += synapse0x258f4b0();
   input += synapse0x258f4f0();
   input += synapse0x258f530();
   input += synapse0x258f570();
   input += synapse0x258fef0();
   input += synapse0x259c240();
   input += synapse0x259c280();
   input += synapse0x259c2c0();
   input += synapse0x259c300();
   input += synapse0x259c340();
   input += synapse0x259c380();
   input += synapse0x259c3c0();
   input += synapse0x259c400();
   input += synapse0x259c440();
   input += synapse0x259c480();
   input += synapse0x259c4c0();
   input += synapse0x258fdd0();
   input += synapse0x258fe10();
   input += synapse0x259c610();
   input += synapse0x259c650();
   input += synapse0x259c690();
   input += synapse0x259c6d0();
   input += synapse0x259c710();
   input += synapse0x259c750();
   return input;
}

double NNfunction_ss_uLuR::neuron0x258fc40() {
   double input = input0x258fc40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x259c790() {
   double input = -4.30912;
   input += synapse0x259cad0();
   input += synapse0x259cb10();
   input += synapse0x259cb50();
   input += synapse0x259cb90();
   input += synapse0x259cbd0();
   input += synapse0x259cc10();
   input += synapse0x259cc50();
   input += synapse0x259cc90();
   input += synapse0x259ccd0();
   input += synapse0x259cd10();
   input += synapse0x259cd50();
   input += synapse0x259cd90();
   input += synapse0x259cdd0();
   input += synapse0x259ce10();
   input += synapse0x259ce50();
   input += synapse0x259ce90();
   input += synapse0x259c920();
   input += synapse0x259c960();
   input += synapse0x259cfe0();
   input += synapse0x259d020();
   input += synapse0x259d060();
   input += synapse0x259d0a0();
   input += synapse0x259d0e0();
   input += synapse0x259d120();
   return input;
}

double NNfunction_ss_uLuR::neuron0x259c790() {
   double input = input0x259c790();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x259d160() {
   double input = -2.17935;
   input += synapse0x259d4a0();
   input += synapse0x259d4e0();
   input += synapse0x259d520();
   input += synapse0x259d560();
   input += synapse0x259d5a0();
   input += synapse0x259d5e0();
   input += synapse0x259d620();
   input += synapse0x259d660();
   input += synapse0x259d6a0();
   input += synapse0x259d6e0();
   input += synapse0x259d720();
   input += synapse0x259d760();
   input += synapse0x259d7a0();
   input += synapse0x259d7e0();
   input += synapse0x259d820();
   input += synapse0x259d860();
   input += synapse0x259d2f0();
   input += synapse0x259d330();
   input += synapse0x259d9b0();
   input += synapse0x259d9f0();
   input += synapse0x259da30();
   input += synapse0x259da70();
   input += synapse0x259dab0();
   input += synapse0x259daf0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x259d160() {
   double input = input0x259d160();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x259db30() {
   double input = -0.949372;
   input += synapse0x259de70();
   input += synapse0x259deb0();
   input += synapse0x259def0();
   input += synapse0x259df30();
   input += synapse0x259df70();
   input += synapse0x259dfb0();
   input += synapse0x259dff0();
   input += synapse0x259e030();
   input += synapse0x259e070();
   input += synapse0x259e0b0();
   input += synapse0x259e0f0();
   input += synapse0x259e130();
   input += synapse0x259e170();
   input += synapse0x259e1b0();
   input += synapse0x259e1f0();
   input += synapse0x259e230();
   input += synapse0x259dcc0();
   input += synapse0x259dd00();
   input += synapse0x259e380();
   input += synapse0x259e3c0();
   input += synapse0x259e400();
   input += synapse0x259e440();
   input += synapse0x259e480();
   input += synapse0x259e4c0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x259db30() {
   double input = input0x259db30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x259e500() {
   double input = -1.13282;
   input += synapse0x259e840();
   input += synapse0x259e880();
   input += synapse0x259e8c0();
   input += synapse0x259e900();
   input += synapse0x259e940();
   input += synapse0x259e980();
   input += synapse0x259e9c0();
   input += synapse0x259ea00();
   input += synapse0x259ea40();
   input += synapse0x259ea80();
   input += synapse0x259eac0();
   input += synapse0x259eb00();
   input += synapse0x259eb40();
   input += synapse0x259eb80();
   input += synapse0x259ebc0();
   input += synapse0x259ec00();
   input += synapse0x259e690();
   input += synapse0x259e6d0();
   input += synapse0x259ed50();
   input += synapse0x259ed90();
   input += synapse0x259edd0();
   input += synapse0x259ee10();
   input += synapse0x259ee50();
   input += synapse0x259ee90();
   return input;
}

double NNfunction_ss_uLuR::neuron0x259e500() {
   double input = input0x259e500();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x259eed0() {
   double input = 1.48008;
   input += synapse0x259f210();
   input += synapse0x259f250();
   input += synapse0x259f290();
   input += synapse0x259f2d0();
   input += synapse0x259f310();
   input += synapse0x259f350();
   input += synapse0x259f390();
   input += synapse0x259f3d0();
   input += synapse0x259f410();
   input += synapse0x259f450();
   input += synapse0x259f490();
   input += synapse0x259f4d0();
   input += synapse0x259f510();
   input += synapse0x259f550();
   input += synapse0x259f590();
   input += synapse0x259f5d0();
   input += synapse0x259f060();
   input += synapse0x259f0a0();
   input += synapse0x259f720();
   input += synapse0x259f760();
   input += synapse0x259f7a0();
   input += synapse0x259f7e0();
   input += synapse0x259f820();
   input += synapse0x259f860();
   return input;
}

double NNfunction_ss_uLuR::neuron0x259eed0() {
   double input = input0x259eed0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x259f8a0() {
   double input = 0.573264;
   input += synapse0x259fbe0();
   input += synapse0x259fc20();
   input += synapse0x259fc60();
   input += synapse0x259fca0();
   input += synapse0x259fce0();
   input += synapse0x259fd20();
   input += synapse0x259fd60();
   input += synapse0x259fda0();
   input += synapse0x259fde0();
   input += synapse0x259fe20();
   input += synapse0x259fe60();
   input += synapse0x259fea0();
   input += synapse0x259fee0();
   input += synapse0x259ff20();
   input += synapse0x259ff60();
   input += synapse0x259ffa0();
   input += synapse0x259fa30();
   input += synapse0x259fa70();
   input += synapse0x25a00f0();
   input += synapse0x25a0130();
   input += synapse0x25a0170();
   input += synapse0x25a01b0();
   input += synapse0x25a01f0();
   input += synapse0x25a0230();
   return input;
}

double NNfunction_ss_uLuR::neuron0x259f8a0() {
   double input = input0x259f8a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x25a0270() {
   double input = 0.634258;
   input += synapse0x25a05b0();
   input += synapse0x25a05f0();
   input += synapse0x25a0630();
   input += synapse0x25a0670();
   input += synapse0x25a06b0();
   input += synapse0x25a06f0();
   input += synapse0x25a0730();
   input += synapse0x25a0770();
   input += synapse0x25a07b0();
   input += synapse0x25a07f0();
   input += synapse0x25a0830();
   input += synapse0x25a0870();
   input += synapse0x25a08b0();
   input += synapse0x25a08f0();
   input += synapse0x25a0930();
   input += synapse0x25a0970();
   input += synapse0x25a0400();
   input += synapse0x25a0440();
   input += synapse0x25a0ac0();
   input += synapse0x25a0b00();
   input += synapse0x25a0b40();
   input += synapse0x25a0b80();
   input += synapse0x25a0bc0();
   input += synapse0x25a0c00();
   return input;
}

double NNfunction_ss_uLuR::neuron0x25a0270() {
   double input = input0x25a0270();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x25a0c40() {
   double input = -1.03589;
   input += synapse0x25896b0();
   input += synapse0x25896f0();
   input += synapse0x2589730();
   input += synapse0x2589770();
   input += synapse0x25897b0();
   input += synapse0x25897f0();
   input += synapse0x2589830();
   input += synapse0x2589870();
   input += synapse0x25a1390();
   input += synapse0x25a13d0();
   input += synapse0x25a1410();
   input += synapse0x25a1450();
   input += synapse0x25a1490();
   input += synapse0x25a14d0();
   input += synapse0x25a1510();
   input += synapse0x25a1550();
   input += synapse0x25a0dd0();
   input += synapse0x25a0e10();
   input += synapse0x25a16a0();
   input += synapse0x25a16e0();
   input += synapse0x25a1720();
   input += synapse0x25a1760();
   input += synapse0x25a17a0();
   input += synapse0x25a17e0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x25a0c40() {
   double input = input0x25a0c40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x25a1820() {
   double input = -0.0785761;
   input += synapse0x25a1b60();
   input += synapse0x25a1ba0();
   input += synapse0x25a1be0();
   input += synapse0x25a1c20();
   input += synapse0x25a1c60();
   input += synapse0x25a1ca0();
   input += synapse0x25a1ce0();
   input += synapse0x25a1d20();
   input += synapse0x25a1d60();
   input += synapse0x25a1da0();
   input += synapse0x25a1de0();
   input += synapse0x25a1e20();
   input += synapse0x25a1e60();
   input += synapse0x25a1ea0();
   input += synapse0x25a1ee0();
   input += synapse0x25a1f20();
   input += synapse0x25a19b0();
   input += synapse0x25a19f0();
   input += synapse0x25a2070();
   input += synapse0x25a20b0();
   input += synapse0x25a20f0();
   input += synapse0x25a2130();
   input += synapse0x25a2170();
   input += synapse0x25a21b0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x25a1820() {
   double input = input0x25a1820();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x25a21f0() {
   double input = 1.8885;
   input += synapse0x25a2530();
   input += synapse0x25a2570();
   input += synapse0x25a25b0();
   input += synapse0x25a25f0();
   input += synapse0x25a2630();
   input += synapse0x25a2670();
   input += synapse0x25a26b0();
   input += synapse0x25a26f0();
   input += synapse0x25a2730();
   input += synapse0x25a2770();
   input += synapse0x25a27b0();
   input += synapse0x25a27f0();
   input += synapse0x25a2830();
   input += synapse0x25a2870();
   input += synapse0x25a28b0();
   input += synapse0x25a28f0();
   input += synapse0x25a2380();
   input += synapse0x25a23c0();
   input += synapse0x2592ef0();
   input += synapse0x2592f30();
   input += synapse0x2592f70();
   input += synapse0x2592fb0();
   input += synapse0x2592ff0();
   input += synapse0x2593030();
   return input;
}

double NNfunction_ss_uLuR::neuron0x25a21f0() {
   double input = input0x25a21f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x2593070() {
   double input = 0.461999;
   input += synapse0x25933b0();
   input += synapse0x25933f0();
   input += synapse0x2593430();
   input += synapse0x2593470();
   input += synapse0x25934b0();
   input += synapse0x25934f0();
   input += synapse0x2593530();
   input += synapse0x2593570();
   input += synapse0x25935b0();
   input += synapse0x25935f0();
   input += synapse0x2593630();
   input += synapse0x2593670();
   input += synapse0x25936b0();
   input += synapse0x25936f0();
   input += synapse0x2593730();
   input += synapse0x2593770();
   input += synapse0x2593200();
   input += synapse0x2593240();
   input += synapse0x25938c0();
   input += synapse0x2593900();
   input += synapse0x2593940();
   input += synapse0x2593980();
   input += synapse0x25939c0();
   input += synapse0x2593a00();
   return input;
}

double NNfunction_ss_uLuR::neuron0x2593070() {
   double input = input0x2593070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x2593a40() {
   double input = -2.13576;
   input += synapse0x2593d80();
   input += synapse0x2593dc0();
   input += synapse0x2593e00();
   input += synapse0x2593e40();
   input += synapse0x2593e80();
   input += synapse0x2593ec0();
   input += synapse0x2593f00();
   input += synapse0x2593f40();
   input += synapse0x2593f80();
   input += synapse0x2593fc0();
   input += synapse0x2594000();
   input += synapse0x2594040();
   input += synapse0x2594080();
   input += synapse0x25940c0();
   input += synapse0x2594100();
   input += synapse0x2594140();
   input += synapse0x2593bd0();
   input += synapse0x2593c10();
   input += synapse0x2594290();
   input += synapse0x25942d0();
   input += synapse0x2594310();
   input += synapse0x2594350();
   input += synapse0x2594390();
   input += synapse0x25943d0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x2593a40() {
   double input = input0x2593a40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x2594410() {
   double input = -1.42817;
   input += synapse0x2594750();
   input += synapse0x2594790();
   input += synapse0x25947d0();
   input += synapse0x2594810();
   input += synapse0x2594850();
   input += synapse0x2594890();
   input += synapse0x25948d0();
   input += synapse0x2594910();
   input += synapse0x2594950();
   input += synapse0x2594990();
   input += synapse0x25949d0();
   input += synapse0x2594a10();
   input += synapse0x2594a50();
   input += synapse0x2594a90();
   input += synapse0x2594ad0();
   input += synapse0x2594b10();
   input += synapse0x25945a0();
   input += synapse0x25945e0();
   input += synapse0x2594c60();
   input += synapse0x2594ca0();
   input += synapse0x2594ce0();
   input += synapse0x2594d20();
   input += synapse0x2594d60();
   input += synapse0x2594da0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x2594410() {
   double input = input0x2594410();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x25a6a50() {
   double input = 0.521115;
   input += synapse0x25a6c70();
   input += synapse0x25a6cb0();
   input += synapse0x25a6cf0();
   input += synapse0x25a6d30();
   input += synapse0x25a6d70();
   input += synapse0x25a6db0();
   input += synapse0x25a6df0();
   input += synapse0x25a6e30();
   input += synapse0x25a6e70();
   input += synapse0x25a6eb0();
   input += synapse0x25a6ef0();
   input += synapse0x25a6f30();
   input += synapse0x25a6f70();
   input += synapse0x25a6fb0();
   input += synapse0x25a6ff0();
   input += synapse0x25a7030();
   input += synapse0x2594de0();
   input += synapse0x2594e20();
   input += synapse0x25a7180();
   input += synapse0x25a71c0();
   input += synapse0x25a7200();
   input += synapse0x25a7240();
   input += synapse0x25a7280();
   input += synapse0x25a72c0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x25a6a50() {
   double input = input0x25a6a50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x25a7300() {
   double input = -1.2914;
   input += synapse0x25a7640();
   input += synapse0x25a7680();
   input += synapse0x25a76c0();
   input += synapse0x25a7700();
   input += synapse0x25a7740();
   input += synapse0x25a7780();
   input += synapse0x25a77c0();
   input += synapse0x25a7800();
   input += synapse0x25a7840();
   input += synapse0x25a7880();
   input += synapse0x25a78c0();
   input += synapse0x25a7900();
   input += synapse0x25a7940();
   input += synapse0x25a7980();
   input += synapse0x25a79c0();
   input += synapse0x25a7a00();
   input += synapse0x25a7490();
   input += synapse0x25a74d0();
   input += synapse0x25a7b50();
   input += synapse0x25a7b90();
   input += synapse0x25a7bd0();
   input += synapse0x25a7c10();
   input += synapse0x25a7c50();
   input += synapse0x25a7c90();
   return input;
}

double NNfunction_ss_uLuR::neuron0x25a7300() {
   double input = input0x25a7300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x25a7cd0() {
   double input = 0.306534;
   input += synapse0x25a8010();
   input += synapse0x25a8050();
   input += synapse0x25a8090();
   input += synapse0x25a80d0();
   input += synapse0x25a8110();
   input += synapse0x25a8150();
   input += synapse0x25a8190();
   input += synapse0x25a81d0();
   input += synapse0x25a8210();
   input += synapse0x25a8250();
   input += synapse0x25a8290();
   input += synapse0x25a82d0();
   input += synapse0x25a8310();
   input += synapse0x25a8350();
   input += synapse0x25a8390();
   input += synapse0x25a83d0();
   input += synapse0x25a7e60();
   input += synapse0x25a7ea0();
   input += synapse0x25a8520();
   input += synapse0x25a8560();
   input += synapse0x25a85a0();
   input += synapse0x25a85e0();
   input += synapse0x25a8620();
   input += synapse0x25a8660();
   return input;
}

double NNfunction_ss_uLuR::neuron0x25a7cd0() {
   double input = input0x25a7cd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x25a86a0() {
   double input = 0.961396;
   input += synapse0x25a89e0();
   input += synapse0x25a8a20();
   input += synapse0x25a8a60();
   input += synapse0x25a8aa0();
   input += synapse0x25a8ae0();
   input += synapse0x25a8b20();
   input += synapse0x25a8b60();
   input += synapse0x25a8ba0();
   input += synapse0x25a8be0();
   input += synapse0x25a8c20();
   input += synapse0x25a8c60();
   input += synapse0x25a8ca0();
   input += synapse0x25a8ce0();
   input += synapse0x25a8d20();
   input += synapse0x25a8d60();
   input += synapse0x25a8da0();
   input += synapse0x25a8830();
   input += synapse0x25a8870();
   input += synapse0x25a8ef0();
   input += synapse0x25a8f30();
   input += synapse0x25a8f70();
   input += synapse0x25a8fb0();
   input += synapse0x25a8ff0();
   input += synapse0x25a9030();
   return input;
}

double NNfunction_ss_uLuR::neuron0x25a86a0() {
   double input = input0x25a86a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x25af8a0() {
   double input = -0.0381503;
   input += synapse0x25855d0();
   input += synapse0x2585610();
   input += synapse0x2586ae0();
   input += synapse0x2586b20();
   input += synapse0x25874b0();
   input += synapse0x25874f0();
   input += synapse0x2588280();
   input += synapse0x25882c0();
   input += synapse0x2588c50();
   input += synapse0x2588c90();
   input += synapse0x2589620();
   input += synapse0x2589660();
   input += synapse0x258a100();
   input += synapse0x258a140();
   input += synapse0x258aad0();
   input += synapse0x258ab10();
   input += synapse0x2587bb0();
   input += synapse0x2587bf0();
   input += synapse0x258c680();
   input += synapse0x258c6c0();
   input += synapse0x258d050();
   input += synapse0x258d090();
   input += synapse0x258da20();
   input += synapse0x258da60();
   input += synapse0x258e3f0();
   input += synapse0x258e430();
   input += synapse0x2582560();
   input += synapse0x25825a0();
   input += synapse0x25904e0();
   input += synapse0x2590520();
   input += synapse0x2590eb0();
   input += synapse0x2590ef0();
   input += synapse0x2591880();
   input += synapse0x25918c0();
   input += synapse0x2592250();
   input += synapse0x2592290();
   input += synapse0x2592c20();
   input += synapse0x2592c60();
   input += synapse0x258b770();
   input += synapse0x258b7b0();
   input += synapse0x2595020();
   input += synapse0x2595060();
   input += synapse0x25959b0();
   input += synapse0x25959f0();
   input += synapse0x2596380();
   input += synapse0x25963c0();
   input += synapse0x2596d50();
   input += synapse0x2596d90();
   input += synapse0x2597720();
   input += synapse0x2597760();
   return input;
}

double NNfunction_ss_uLuR::neuron0x25af8a0() {
   double input = input0x25af8a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x25afc40() {
   double input = 0.701053;
   input += synapse0x2599e60();
   input += synapse0x2599ea0();
   input += synapse0x258f420();
   input += synapse0x258f460();
   input += synapse0x259ca40();
   input += synapse0x259ca80();
   input += synapse0x259d410();
   input += synapse0x259d450();
   input += synapse0x259dde0();
   input += synapse0x259de20();
   input += synapse0x259e7b0();
   input += synapse0x259e7f0();
   input += synapse0x259f180();
   input += synapse0x259f1c0();
   input += synapse0x259fb50();
   input += synapse0x259fb90();
   input += synapse0x25a0520();
   input += synapse0x25a0560();
   input += synapse0x25a0ef0();
   input += synapse0x25a0f30();
   input += synapse0x25a1ad0();
   input += synapse0x25a1b10();
   input += synapse0x25a24a0();
   input += synapse0x25a24e0();
   input += synapse0x2593320();
   input += synapse0x2593360();
   input += synapse0x2593cf0();
   input += synapse0x2593d30();
   input += synapse0x25946c0();
   input += synapse0x2594700();
   input += synapse0x25a6be0();
   input += synapse0x25a6c20();
   input += synapse0x25a75b0();
   input += synapse0x25a75f0();
   input += synapse0x25a7f80();
   input += synapse0x25a7fc0();
   input += synapse0x25a8950();
   input += synapse0x25a8990();
   input += synapse0x2584840();
   input += synapse0x2584880();
   input += synapse0x25980f0();
   input += synapse0x2598130();
   input += synapse0x25a9070();
   input += synapse0x25a90b0();
   input += synapse0x25a90f0();
   input += synapse0x25a9130();
   input += synapse0x25affe0();
   input += synapse0x25b0020();
   input += synapse0x25b0060();
   input += synapse0x25b00a0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x25afc40() {
   double input = input0x25afc40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x25b00e0() {
   double input = -0.162466;
   input += synapse0x25b0420();
   input += synapse0x25b0460();
   input += synapse0x25b04a0();
   input += synapse0x25b04e0();
   input += synapse0x25b0520();
   input += synapse0x25b0560();
   input += synapse0x25b05a0();
   input += synapse0x25b05e0();
   input += synapse0x25b0620();
   input += synapse0x25b0660();
   input += synapse0x25b06a0();
   input += synapse0x25b06e0();
   input += synapse0x25b0720();
   input += synapse0x25b0760();
   input += synapse0x25b07a0();
   input += synapse0x25b07e0();
   input += synapse0x25b0270();
   input += synapse0x25b02b0();
   input += synapse0x25b0930();
   input += synapse0x25b0970();
   input += synapse0x25b09b0();
   input += synapse0x25b09f0();
   input += synapse0x25b0a30();
   input += synapse0x25b0a70();
   input += synapse0x25b0ab0();
   input += synapse0x25b0af0();
   input += synapse0x25b0b30();
   input += synapse0x25b0b70();
   input += synapse0x25b0bb0();
   input += synapse0x25b0bf0();
   input += synapse0x25b0c30();
   input += synapse0x25b0c70();
   input += synapse0x25b0820();
   input += synapse0x25b0860();
   input += synapse0x25b08a0();
   input += synapse0x25b08e0();
   input += synapse0x25b0ec0();
   input += synapse0x25b0f00();
   input += synapse0x25b0f40();
   input += synapse0x25b0f80();
   input += synapse0x25b0fc0();
   input += synapse0x25b1000();
   input += synapse0x25b1040();
   input += synapse0x25b1080();
   input += synapse0x25b10c0();
   input += synapse0x25b1100();
   input += synapse0x25b1140();
   input += synapse0x25b1180();
   input += synapse0x25b11c0();
   input += synapse0x25b1200();
   return input;
}

double NNfunction_ss_uLuR::neuron0x25b00e0() {
   double input = input0x25b00e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x25b1240() {
   double input = -1.3431;
   input += synapse0x25b1580();
   input += synapse0x25b15c0();
   input += synapse0x25b1600();
   input += synapse0x25b1640();
   input += synapse0x25b1680();
   input += synapse0x25b16c0();
   input += synapse0x25b1700();
   input += synapse0x25b1740();
   input += synapse0x25b1780();
   input += synapse0x25b17c0();
   input += synapse0x25b1800();
   input += synapse0x25b1840();
   input += synapse0x25b1880();
   input += synapse0x25b18c0();
   input += synapse0x25b1900();
   input += synapse0x25b1940();
   input += synapse0x25b13d0();
   input += synapse0x25b1410();
   input += synapse0x25b1a90();
   input += synapse0x25b1ad0();
   input += synapse0x25b1b10();
   input += synapse0x25b1b50();
   input += synapse0x25b1b90();
   input += synapse0x25b1bd0();
   input += synapse0x25b1c10();
   input += synapse0x25b1c50();
   input += synapse0x25b1c90();
   input += synapse0x25b1cd0();
   input += synapse0x25b1d10();
   input += synapse0x25b1d50();
   input += synapse0x25b1d90();
   input += synapse0x25b1dd0();
   input += synapse0x25b1980();
   input += synapse0x25b19c0();
   input += synapse0x25b1a00();
   input += synapse0x25b1a40();
   input += synapse0x25b2020();
   input += synapse0x25b2060();
   input += synapse0x25b20a0();
   input += synapse0x25b20e0();
   input += synapse0x25b2120();
   input += synapse0x25b2160();
   input += synapse0x25b21a0();
   input += synapse0x25b21e0();
   input += synapse0x25b2220();
   input += synapse0x25b2260();
   input += synapse0x25b22a0();
   input += synapse0x25b22e0();
   input += synapse0x25b2320();
   input += synapse0x25b2360();
   return input;
}

double NNfunction_ss_uLuR::neuron0x25b1240() {
   double input = input0x25b1240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x25b23a0() {
   double input = -0.0471595;
   input += synapse0x25b26e0();
   input += synapse0x25b2720();
   input += synapse0x25b2760();
   input += synapse0x25b27a0();
   input += synapse0x25b27e0();
   input += synapse0x25b2820();
   input += synapse0x25b2860();
   input += synapse0x25b28a0();
   input += synapse0x25b28e0();
   input += synapse0x25b2920();
   input += synapse0x25b2960();
   input += synapse0x25b29a0();
   input += synapse0x25b29e0();
   input += synapse0x25b2a20();
   input += synapse0x25b2a60();
   input += synapse0x25b2aa0();
   input += synapse0x25b2530();
   input += synapse0x25b2570();
   input += synapse0x25b2bf0();
   input += synapse0x25b2c30();
   input += synapse0x25b2c70();
   input += synapse0x25b2cb0();
   input += synapse0x25b2cf0();
   input += synapse0x25b2d30();
   input += synapse0x25b2d70();
   input += synapse0x25b2db0();
   input += synapse0x25b2df0();
   input += synapse0x25b2e30();
   input += synapse0x25b2e70();
   input += synapse0x25b2eb0();
   input += synapse0x25b2ef0();
   input += synapse0x25b2f30();
   input += synapse0x25b2ae0();
   input += synapse0x25b2b20();
   input += synapse0x25b2b60();
   input += synapse0x25b2ba0();
   input += synapse0x25b3180();
   input += synapse0x25b31c0();
   input += synapse0x25b3200();
   input += synapse0x25b3240();
   input += synapse0x25b3280();
   input += synapse0x25b32c0();
   input += synapse0x25b3300();
   input += synapse0x25b3340();
   input += synapse0x25b3380();
   input += synapse0x25b33c0();
   input += synapse0x25b3400();
   input += synapse0x25b3440();
   input += synapse0x25b3480();
   input += synapse0x25b34c0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x25b23a0() {
   double input = input0x25b23a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uLuR::input0x25b3500() {
   double input = 2.90472;
   input += synapse0x25845e0();
   input += synapse0x25b3720();
   input += synapse0x25b3760();
   input += synapse0x25b37a0();
   input += synapse0x25b37e0();
   return input;
}

double NNfunction_ss_uLuR::neuron0x25b3500() {
   double input = input0x25b3500();
   return (input * 1)+0;
}

double NNfunction_ss_uLuR::synapse0x233f430() {
   return (neuron0x257f5c0()*-0.385782);
}

double NNfunction_ss_uLuR::synapse0x257f480() {
   return (neuron0x257f900()*-0.298473);
}

double NNfunction_ss_uLuR::synapse0x257f4c0() {
   return (neuron0x257fc40()*1.28484);
}

double NNfunction_ss_uLuR::synapse0x25848d0() {
   return (neuron0x257ff80()*0.0120171);
}

double NNfunction_ss_uLuR::synapse0x2584910() {
   return (neuron0x25802c0()*-0.136836);
}

double NNfunction_ss_uLuR::synapse0x2584950() {
   return (neuron0x2580600()*-0.345856);
}

double NNfunction_ss_uLuR::synapse0x2584990() {
   return (neuron0x2580940()*0.169636);
}

double NNfunction_ss_uLuR::synapse0x25849d0() {
   return (neuron0x2580c80()*0.567806);
}

double NNfunction_ss_uLuR::synapse0x2584a10() {
   return (neuron0x2580fc0()*0.574717);
}

double NNfunction_ss_uLuR::synapse0x2584a50() {
   return (neuron0x2581300()*-0.138377);
}

double NNfunction_ss_uLuR::synapse0x2584a90() {
   return (neuron0x2581640()*0.314352);
}

double NNfunction_ss_uLuR::synapse0x2584ad0() {
   return (neuron0x2581980()*-0.394999);
}

double NNfunction_ss_uLuR::synapse0x2584b10() {
   return (neuron0x2581cc0()*0.152231);
}

double NNfunction_ss_uLuR::synapse0x2584b50() {
   return (neuron0x2582000()*0.324993);
}

double NNfunction_ss_uLuR::synapse0x2584b90() {
   return (neuron0x2582340()*-0.82179);
}

double NNfunction_ss_uLuR::synapse0x2584bd0() {
   return (neuron0x2582680()*0.233568);
}

double NNfunction_ss_uLuR::synapse0x257f3f0() {
   return (neuron0x25829c0()*0.578809);
}

double NNfunction_ss_uLuR::synapse0x257f430() {
   return (neuron0x2582f20()*-0.289029);
}

double NNfunction_ss_uLuR::synapse0x2330d30() {
   return (neuron0x2583140()*-0.575129);
}

double NNfunction_ss_uLuR::synapse0x2330d70() {
   return (neuron0x2583480()*0.17236);
}

double NNfunction_ss_uLuR::synapse0x2584e30() {
   return (neuron0x25837c0()*-1.20237);
}

double NNfunction_ss_uLuR::synapse0x2584e70() {
   return (neuron0x2583b00()*0.493789);
}

double NNfunction_ss_uLuR::synapse0x2584eb0() {
   return (neuron0x2583e40()*-0.399711);
}

double NNfunction_ss_uLuR::synapse0x2584ef0() {
   return (neuron0x2584180()*0.732823);
}

double NNfunction_ss_uLuR::synapse0x2585270() {
   return (neuron0x257f5c0()*0.0506442);
}

double NNfunction_ss_uLuR::synapse0x25852b0() {
   return (neuron0x257f900()*0.0797068);
}

double NNfunction_ss_uLuR::synapse0x25852f0() {
   return (neuron0x257fc40()*-0.147205);
}

double NNfunction_ss_uLuR::synapse0x2585330() {
   return (neuron0x257ff80()*-0.707795);
}

double NNfunction_ss_uLuR::synapse0x2585370() {
   return (neuron0x25802c0()*-0.0184734);
}

double NNfunction_ss_uLuR::synapse0x25853b0() {
   return (neuron0x2580600()*-0.490661);
}

double NNfunction_ss_uLuR::synapse0x25853f0() {
   return (neuron0x2580940()*-0.0861392);
}

double NNfunction_ss_uLuR::synapse0x2585430() {
   return (neuron0x2580c80()*-0.107798);
}

double NNfunction_ss_uLuR::synapse0x2585470() {
   return (neuron0x2580fc0()*-0.170208);
}

double NNfunction_ss_uLuR::synapse0x2584d20() {
   return (neuron0x2581300()*-0.556971);
}

double NNfunction_ss_uLuR::synapse0x2584d60() {
   return (neuron0x2581640()*0.0107187);
}

double NNfunction_ss_uLuR::synapse0x2584da0() {
   return (neuron0x2581980()*0.888614);
}

double NNfunction_ss_uLuR::synapse0x2584de0() {
   return (neuron0x2581cc0()*0.272122);
}

double NNfunction_ss_uLuR::synapse0x25856c0() {
   return (neuron0x2582000()*-0.998152);
}

double NNfunction_ss_uLuR::synapse0x2585700() {
   return (neuron0x2582340()*0.303975);
}

double NNfunction_ss_uLuR::synapse0x2585740() {
   return (neuron0x2582680()*0.491485);
}

double NNfunction_ss_uLuR::synapse0x25850c0() {
   return (neuron0x25829c0()*0.0594525);
}

double NNfunction_ss_uLuR::synapse0x2585100() {
   return (neuron0x2582f20()*-0.147623);
}

double NNfunction_ss_uLuR::synapse0x2585890() {
   return (neuron0x2583140()*-0.236096);
}

double NNfunction_ss_uLuR::synapse0x25858d0() {
   return (neuron0x2583480()*-0.557114);
}

double NNfunction_ss_uLuR::synapse0x2585910() {
   return (neuron0x25837c0()*-0.595525);
}

double NNfunction_ss_uLuR::synapse0x2585950() {
   return (neuron0x2583b00()*-0.647605);
}

double NNfunction_ss_uLuR::synapse0x2585990() {
   return (neuron0x2583e40()*0.35434);
}

double NNfunction_ss_uLuR::synapse0x25859d0() {
   return (neuron0x2584180()*0.193644);
}

double NNfunction_ss_uLuR::synapse0x2585d50() {
   return (neuron0x257f5c0()*-0.103873);
}

double NNfunction_ss_uLuR::synapse0x2585d90() {
   return (neuron0x257f900()*-0.420232);
}

double NNfunction_ss_uLuR::synapse0x2585dd0() {
   return (neuron0x257fc40()*0.312427);
}

double NNfunction_ss_uLuR::synapse0x2585e10() {
   return (neuron0x257ff80()*1.10279);
}

double NNfunction_ss_uLuR::synapse0x2585e50() {
   return (neuron0x25802c0()*0.0426322);
}

double NNfunction_ss_uLuR::synapse0x2585e90() {
   return (neuron0x2580600()*-0.130759);
}

double NNfunction_ss_uLuR::synapse0x2585ed0() {
   return (neuron0x2580940()*-0.118718);
}

double NNfunction_ss_uLuR::synapse0x2585f10() {
   return (neuron0x2580c80()*0.0359029);
}

double NNfunction_ss_uLuR::synapse0x2585f50() {
   return (neuron0x2580fc0()*0.108914);
}

double NNfunction_ss_uLuR::synapse0x2585f90() {
   return (neuron0x2581300()*0.244334);
}

double NNfunction_ss_uLuR::synapse0x2585fd0() {
   return (neuron0x2581640()*0.166309);
}

double NNfunction_ss_uLuR::synapse0x2586010() {
   return (neuron0x2581980()*0.668563);
}

double NNfunction_ss_uLuR::synapse0x2586050() {
   return (neuron0x2581cc0()*-0.080569);
}

double NNfunction_ss_uLuR::synapse0x2586090() {
   return (neuron0x2582000()*-0.0776713);
}

double NNfunction_ss_uLuR::synapse0x25860d0() {
   return (neuron0x2582340()*0.0163546);
}

double NNfunction_ss_uLuR::synapse0x2586110() {
   return (neuron0x2582680()*-0.0841694);
}

double NNfunction_ss_uLuR::synapse0x2585ba0() {
   return (neuron0x25829c0()*-0.0701813);
}

double NNfunction_ss_uLuR::synapse0x2585be0() {
   return (neuron0x2582f20()*-0.0650769);
}

double NNfunction_ss_uLuR::synapse0x233eb20() {
   return (neuron0x2583140()*0.0100304);
}

double NNfunction_ss_uLuR::synapse0x233eb60() {
   return (neuron0x2583480()*0.0497862);
}

double NNfunction_ss_uLuR::synapse0x256e650() {
   return (neuron0x25837c0()*-0.221679);
}

double NNfunction_ss_uLuR::synapse0x256e690() {
   return (neuron0x2583b00()*0.132106);
}

double NNfunction_ss_uLuR::synapse0x256e6d0() {
   return (neuron0x2583e40()*-0.0140502);
}

double NNfunction_ss_uLuR::synapse0x257f500() {
   return (neuron0x2584180()*0.0880735);
}

double NNfunction_ss_uLuR::synapse0x2585660() {
   return (neuron0x257f5c0()*-0.541738);
}

double NNfunction_ss_uLuR::synapse0x257f540() {
   return (neuron0x257f900()*1.0921);
}

double NNfunction_ss_uLuR::synapse0x257f580() {
   return (neuron0x257fc40()*0.29485);
}

double NNfunction_ss_uLuR::synapse0x2586260() {
   return (neuron0x257ff80()*-0.307232);
}

double NNfunction_ss_uLuR::synapse0x25862a0() {
   return (neuron0x25802c0()*-0.364163);
}

double NNfunction_ss_uLuR::synapse0x25862e0() {
   return (neuron0x2580600()*1.45993);
}

double NNfunction_ss_uLuR::synapse0x2586320() {
   return (neuron0x2580940()*-0.878873);
}

double NNfunction_ss_uLuR::synapse0x2586360() {
   return (neuron0x2580c80()*0.205455);
}

double NNfunction_ss_uLuR::synapse0x25863a0() {
   return (neuron0x2580fc0()*0.21807);
}

double NNfunction_ss_uLuR::synapse0x25863e0() {
   return (neuron0x2581300()*-0.543718);
}

double NNfunction_ss_uLuR::synapse0x2586420() {
   return (neuron0x2581640()*0.694308);
}

double NNfunction_ss_uLuR::synapse0x2586460() {
   return (neuron0x2581980()*0.335305);
}

double NNfunction_ss_uLuR::synapse0x25864a0() {
   return (neuron0x2581cc0()*0.37077);
}

double NNfunction_ss_uLuR::synapse0x25864e0() {
   return (neuron0x2582000()*-0.509119);
}

double NNfunction_ss_uLuR::synapse0x2586520() {
   return (neuron0x2582340()*0.307346);
}

double NNfunction_ss_uLuR::synapse0x2586560() {
   return (neuron0x2582680()*0.231481);
}

double NNfunction_ss_uLuR::synapse0x25854b0() {
   return (neuron0x25829c0()*0.192952);
}

double NNfunction_ss_uLuR::synapse0x25854f0() {
   return (neuron0x2582f20()*-0.219752);
}

double NNfunction_ss_uLuR::synapse0x25866b0() {
   return (neuron0x2583140()*0.0503616);
}

double NNfunction_ss_uLuR::synapse0x25866f0() {
   return (neuron0x2583480()*-0.0461144);
}

double NNfunction_ss_uLuR::synapse0x2586730() {
   return (neuron0x25837c0()*-0.0500429);
}

double NNfunction_ss_uLuR::synapse0x2586770() {
   return (neuron0x2583b00()*-0.976355);
}

double NNfunction_ss_uLuR::synapse0x25867b0() {
   return (neuron0x2583e40()*0.728909);
}

double NNfunction_ss_uLuR::synapse0x25867f0() {
   return (neuron0x2584180()*-0.884421);
}

double NNfunction_ss_uLuR::synapse0x2586b70() {
   return (neuron0x257f5c0()*1.06707);
}

double NNfunction_ss_uLuR::synapse0x2586bb0() {
   return (neuron0x257f900()*0.113881);
}

double NNfunction_ss_uLuR::synapse0x2586bf0() {
   return (neuron0x257fc40()*0.872857);
}

double NNfunction_ss_uLuR::synapse0x2586c30() {
   return (neuron0x257ff80()*-0.303073);
}

double NNfunction_ss_uLuR::synapse0x2586c70() {
   return (neuron0x25802c0()*-0.162896);
}

double NNfunction_ss_uLuR::synapse0x2586cb0() {
   return (neuron0x2580600()*0.555788);
}

double NNfunction_ss_uLuR::synapse0x2586cf0() {
   return (neuron0x2580940()*-0.224206);
}

double NNfunction_ss_uLuR::synapse0x2586d30() {
   return (neuron0x2580c80()*-0.104769);
}

double NNfunction_ss_uLuR::synapse0x2586d70() {
   return (neuron0x2580fc0()*-0.136784);
}

double NNfunction_ss_uLuR::synapse0x2586db0() {
   return (neuron0x2581300()*0.476143);
}

double NNfunction_ss_uLuR::synapse0x2586df0() {
   return (neuron0x2581640()*0.268561);
}

double NNfunction_ss_uLuR::synapse0x2586e30() {
   return (neuron0x2581980()*-0.0689257);
}

double NNfunction_ss_uLuR::synapse0x2586e70() {
   return (neuron0x2581cc0()*-0.0438637);
}

double NNfunction_ss_uLuR::synapse0x2586eb0() {
   return (neuron0x2582000()*0.134325);
}

double NNfunction_ss_uLuR::synapse0x2586ef0() {
   return (neuron0x2582340()*-0.22564);
}

double NNfunction_ss_uLuR::synapse0x2586f30() {
   return (neuron0x2582680()*-0.791726);
}

double NNfunction_ss_uLuR::synapse0x25869c0() {
   return (neuron0x25829c0()*-1.14565);
}

double NNfunction_ss_uLuR::synapse0x2586a00() {
   return (neuron0x2582f20()*0.143006);
}

double NNfunction_ss_uLuR::synapse0x2587080() {
   return (neuron0x2583140()*-0.821853);
}

double NNfunction_ss_uLuR::synapse0x25870c0() {
   return (neuron0x2583480()*0.380951);
}

double NNfunction_ss_uLuR::synapse0x2587100() {
   return (neuron0x25837c0()*-0.575984);
}

double NNfunction_ss_uLuR::synapse0x2587140() {
   return (neuron0x2583b00()*-0.138078);
}

double NNfunction_ss_uLuR::synapse0x2587180() {
   return (neuron0x2583e40()*0.693843);
}

double NNfunction_ss_uLuR::synapse0x25871c0() {
   return (neuron0x2584180()*0.523322);
}

double NNfunction_ss_uLuR::synapse0x2587540() {
   return (neuron0x257f5c0()*-0.0681668);
}

double NNfunction_ss_uLuR::synapse0x2587580() {
   return (neuron0x257f900()*0.177303);
}

double NNfunction_ss_uLuR::synapse0x25875c0() {
   return (neuron0x257fc40()*-0.847736);
}

double NNfunction_ss_uLuR::synapse0x2587600() {
   return (neuron0x257ff80()*0.11105);
}

double NNfunction_ss_uLuR::synapse0x2587640() {
   return (neuron0x25802c0()*1.17099);
}

double NNfunction_ss_uLuR::synapse0x2587680() {
   return (neuron0x2580600()*0.108832);
}

double NNfunction_ss_uLuR::synapse0x25876c0() {
   return (neuron0x2580940()*0.174198);
}

double NNfunction_ss_uLuR::synapse0x2587700() {
   return (neuron0x2580c80()*0.523923);
}

double NNfunction_ss_uLuR::synapse0x2587740() {
   return (neuron0x2580fc0()*-0.12875);
}

double NNfunction_ss_uLuR::synapse0x233ee90() {
   return (neuron0x2581300()*0.34452);
}

double NNfunction_ss_uLuR::synapse0x233eed0() {
   return (neuron0x2581640()*-0.734578);
}

double NNfunction_ss_uLuR::synapse0x233ef10() {
   return (neuron0x2581980()*-0.0790385);
}

double NNfunction_ss_uLuR::synapse0x233ef50() {
   return (neuron0x2581cc0()*0.321414);
}

double NNfunction_ss_uLuR::synapse0x233ef90() {
   return (neuron0x2582000()*-0.482246);
}

double NNfunction_ss_uLuR::synapse0x233efd0() {
   return (neuron0x2582340()*-0.147055);
}

double NNfunction_ss_uLuR::synapse0x233f010() {
   return (neuron0x2582680()*-0.12942);
}

double NNfunction_ss_uLuR::synapse0x2587390() {
   return (neuron0x25829c0()*-1.17449);
}

double NNfunction_ss_uLuR::synapse0x25873d0() {
   return (neuron0x2582f20()*-0.577209);
}

double NNfunction_ss_uLuR::synapse0x233f160() {
   return (neuron0x2583140()*-0.79149);
}

double NNfunction_ss_uLuR::synapse0x233f1a0() {
   return (neuron0x2583480()*0.193655);
}

double NNfunction_ss_uLuR::synapse0x233f1e0() {
   return (neuron0x25837c0()*-0.352175);
}

double NNfunction_ss_uLuR::synapse0x233f220() {
   return (neuron0x2583b00()*-0.238543);
}

double NNfunction_ss_uLuR::synapse0x233f260() {
   return (neuron0x2583e40()*-0.488625);
}

double NNfunction_ss_uLuR::synapse0x2587f90() {
   return (neuron0x2584180()*-0.177782);
}

double NNfunction_ss_uLuR::synapse0x2588310() {
   return (neuron0x257f5c0()*0.132122);
}

double NNfunction_ss_uLuR::synapse0x2588350() {
   return (neuron0x257f900()*0.142928);
}

double NNfunction_ss_uLuR::synapse0x2588390() {
   return (neuron0x257fc40()*-0.0329202);
}

double NNfunction_ss_uLuR::synapse0x25883d0() {
   return (neuron0x257ff80()*-1.32624);
}

double NNfunction_ss_uLuR::synapse0x2588410() {
   return (neuron0x25802c0()*-0.0626424);
}

double NNfunction_ss_uLuR::synapse0x2588450() {
   return (neuron0x2580600()*0.100604);
}

double NNfunction_ss_uLuR::synapse0x2588490() {
   return (neuron0x2580940()*0.086631);
}

double NNfunction_ss_uLuR::synapse0x25884d0() {
   return (neuron0x2580c80()*-0.236791);
}

double NNfunction_ss_uLuR::synapse0x2588510() {
   return (neuron0x2580fc0()*0.0448459);
}

double NNfunction_ss_uLuR::synapse0x2588550() {
   return (neuron0x2581300()*-0.170167);
}

double NNfunction_ss_uLuR::synapse0x2588590() {
   return (neuron0x2581640()*-0.17089);
}

double NNfunction_ss_uLuR::synapse0x25885d0() {
   return (neuron0x2581980()*1.167);
}

double NNfunction_ss_uLuR::synapse0x2588610() {
   return (neuron0x2581cc0()*0.124185);
}

double NNfunction_ss_uLuR::synapse0x2588650() {
   return (neuron0x2582000()*-0.116596);
}

double NNfunction_ss_uLuR::synapse0x2588690() {
   return (neuron0x2582340()*0.0482719);
}

double NNfunction_ss_uLuR::synapse0x25886d0() {
   return (neuron0x2582680()*0.0867629);
}

double NNfunction_ss_uLuR::synapse0x2588160() {
   return (neuron0x25829c0()*0.0029211);
}

double NNfunction_ss_uLuR::synapse0x25881a0() {
   return (neuron0x2582f20()*0.247457);
}

double NNfunction_ss_uLuR::synapse0x2588820() {
   return (neuron0x2583140()*0.230947);
}

double NNfunction_ss_uLuR::synapse0x2588860() {
   return (neuron0x2583480()*-0.00192277);
}

double NNfunction_ss_uLuR::synapse0x25888a0() {
   return (neuron0x25837c0()*0.148862);
}

double NNfunction_ss_uLuR::synapse0x25888e0() {
   return (neuron0x2583b00()*-0.0356667);
}

double NNfunction_ss_uLuR::synapse0x2588920() {
   return (neuron0x2583e40()*0.0593298);
}

double NNfunction_ss_uLuR::synapse0x2588960() {
   return (neuron0x2584180()*-0.23756);
}

double NNfunction_ss_uLuR::synapse0x2588ce0() {
   return (neuron0x257f5c0()*0.00812464);
}

double NNfunction_ss_uLuR::synapse0x2588d20() {
   return (neuron0x257f900()*-0.0561117);
}

double NNfunction_ss_uLuR::synapse0x2588d60() {
   return (neuron0x257fc40()*-0.015725);
}

double NNfunction_ss_uLuR::synapse0x2588da0() {
   return (neuron0x257ff80()*-0.694114);
}

double NNfunction_ss_uLuR::synapse0x2588de0() {
   return (neuron0x25802c0()*-0.0175133);
}

double NNfunction_ss_uLuR::synapse0x2588e20() {
   return (neuron0x2580600()*-0.069503);
}

double NNfunction_ss_uLuR::synapse0x2588e60() {
   return (neuron0x2580940()*0.00931809);
}

double NNfunction_ss_uLuR::synapse0x2588ea0() {
   return (neuron0x2580c80()*0.0361618);
}

double NNfunction_ss_uLuR::synapse0x2588ee0() {
   return (neuron0x2580fc0()*-0.0659174);
}

double NNfunction_ss_uLuR::synapse0x2588f20() {
   return (neuron0x2581300()*0.02983);
}

double NNfunction_ss_uLuR::synapse0x2588f60() {
   return (neuron0x2581640()*-0.0227404);
}

double NNfunction_ss_uLuR::synapse0x2588fa0() {
   return (neuron0x2581980()*-0.895955);
}

double NNfunction_ss_uLuR::synapse0x2588fe0() {
   return (neuron0x2581cc0()*-0.0849015);
}

double NNfunction_ss_uLuR::synapse0x2589020() {
   return (neuron0x2582000()*-0.00723588);
}

double NNfunction_ss_uLuR::synapse0x2589060() {
   return (neuron0x2582340()*-1.69051);
}

double NNfunction_ss_uLuR::synapse0x25890a0() {
   return (neuron0x2582680()*-0.0543483);
}

double NNfunction_ss_uLuR::synapse0x2588b30() {
   return (neuron0x25829c0()*-0.000664087);
}

double NNfunction_ss_uLuR::synapse0x2588b70() {
   return (neuron0x2582f20()*0.00162825);
}

double NNfunction_ss_uLuR::synapse0x25891f0() {
   return (neuron0x2583140()*-0.0360413);
}

double NNfunction_ss_uLuR::synapse0x2589230() {
   return (neuron0x2583480()*-0.0423392);
}

double NNfunction_ss_uLuR::synapse0x2589270() {
   return (neuron0x25837c0()*-0.0415129);
}

double NNfunction_ss_uLuR::synapse0x25892b0() {
   return (neuron0x2583b00()*0.0547597);
}

double NNfunction_ss_uLuR::synapse0x25892f0() {
   return (neuron0x2583e40()*0.0406684);
}

double NNfunction_ss_uLuR::synapse0x2589330() {
   return (neuron0x2584180()*-0.00697164);
}

double NNfunction_ss_uLuR::synapse0x2582e10() {
   return (neuron0x257f5c0()*0.0317354);
}

double NNfunction_ss_uLuR::synapse0x2582e50() {
   return (neuron0x257f900()*-0.0202805);
}

double NNfunction_ss_uLuR::synapse0x2582e90() {
   return (neuron0x257fc40()*0.117632);
}

double NNfunction_ss_uLuR::synapse0x2582ed0() {
   return (neuron0x257ff80()*-0.0868433);
}

double NNfunction_ss_uLuR::synapse0x25898c0() {
   return (neuron0x25802c0()*0.0251592);
}

double NNfunction_ss_uLuR::synapse0x2589900() {
   return (neuron0x2580600()*0.124337);
}

double NNfunction_ss_uLuR::synapse0x2589940() {
   return (neuron0x2580940()*-0.0194007);
}

double NNfunction_ss_uLuR::synapse0x2589980() {
   return (neuron0x2580c80()*-0.096616);
}

double NNfunction_ss_uLuR::synapse0x25899c0() {
   return (neuron0x2580fc0()*0.108969);
}

double NNfunction_ss_uLuR::synapse0x2589a00() {
   return (neuron0x2581300()*0.00031662);
}

double NNfunction_ss_uLuR::synapse0x2589a40() {
   return (neuron0x2581640()*0.03608);
}

double NNfunction_ss_uLuR::synapse0x2589a80() {
   return (neuron0x2581980()*0.573134);
}

double NNfunction_ss_uLuR::synapse0x2589ac0() {
   return (neuron0x2581cc0()*-0.0558567);
}

double NNfunction_ss_uLuR::synapse0x2589b00() {
   return (neuron0x2582000()*0.0548063);
}

double NNfunction_ss_uLuR::synapse0x2589b40() {
   return (neuron0x2582340()*0.52989);
}

double NNfunction_ss_uLuR::synapse0x2589b80() {
   return (neuron0x2582680()*0.094697);
}

double NNfunction_ss_uLuR::synapse0x2589500() {
   return (neuron0x25829c0()*0.0464609);
}

double NNfunction_ss_uLuR::synapse0x2589540() {
   return (neuron0x2582f20()*-0.0588353);
}

double NNfunction_ss_uLuR::synapse0x2589cd0() {
   return (neuron0x2583140()*-0.0670884);
}

double NNfunction_ss_uLuR::synapse0x2589d10() {
   return (neuron0x2583480()*0.00918594);
}

double NNfunction_ss_uLuR::synapse0x2589d50() {
   return (neuron0x25837c0()*0.00558795);
}

double NNfunction_ss_uLuR::synapse0x2589d90() {
   return (neuron0x2583b00()*0.130877);
}

double NNfunction_ss_uLuR::synapse0x2589dd0() {
   return (neuron0x2583e40()*-0.167679);
}

double NNfunction_ss_uLuR::synapse0x2589e10() {
   return (neuron0x2584180()*-0.0708405);
}

double NNfunction_ss_uLuR::synapse0x258a190() {
   return (neuron0x257f5c0()*-0.0262987);
}

double NNfunction_ss_uLuR::synapse0x258a1d0() {
   return (neuron0x257f900()*0.154622);
}

double NNfunction_ss_uLuR::synapse0x258a210() {
   return (neuron0x257fc40()*-1.61583);
}

double NNfunction_ss_uLuR::synapse0x258a250() {
   return (neuron0x257ff80()*0.00260994);
}

double NNfunction_ss_uLuR::synapse0x258a290() {
   return (neuron0x25802c0()*-0.195622);
}

double NNfunction_ss_uLuR::synapse0x258a2d0() {
   return (neuron0x2580600()*-0.00516366);
}

double NNfunction_ss_uLuR::synapse0x258a310() {
   return (neuron0x2580940()*-0.0055409);
}

double NNfunction_ss_uLuR::synapse0x258a350() {
   return (neuron0x2580c80()*-0.078834);
}

double NNfunction_ss_uLuR::synapse0x258a390() {
   return (neuron0x2580fc0()*0.149958);
}

double NNfunction_ss_uLuR::synapse0x258a3d0() {
   return (neuron0x2581300()*-0.0811983);
}

double NNfunction_ss_uLuR::synapse0x258a410() {
   return (neuron0x2581640()*0.0160708);
}

double NNfunction_ss_uLuR::synapse0x258a450() {
   return (neuron0x2581980()*0.306508);
}

double NNfunction_ss_uLuR::synapse0x258a490() {
   return (neuron0x2581cc0()*0.00915928);
}

double NNfunction_ss_uLuR::synapse0x258a4d0() {
   return (neuron0x2582000()*-0.172606);
}

double NNfunction_ss_uLuR::synapse0x258a510() {
   return (neuron0x2582340()*-0.352419);
}

double NNfunction_ss_uLuR::synapse0x258a550() {
   return (neuron0x2582680()*-0.130856);
}

double NNfunction_ss_uLuR::synapse0x2589fe0() {
   return (neuron0x25829c0()*-0.127194);
}

double NNfunction_ss_uLuR::synapse0x258a020() {
   return (neuron0x2582f20()*-0.0937048);
}

double NNfunction_ss_uLuR::synapse0x258a6a0() {
   return (neuron0x2583140()*-0.0736337);
}

double NNfunction_ss_uLuR::synapse0x258a6e0() {
   return (neuron0x2583480()*0.137061);
}

double NNfunction_ss_uLuR::synapse0x258a720() {
   return (neuron0x25837c0()*0.022306);
}

double NNfunction_ss_uLuR::synapse0x258a760() {
   return (neuron0x2583b00()*0.0980754);
}

double NNfunction_ss_uLuR::synapse0x258a7a0() {
   return (neuron0x2583e40()*0.136893);
}

double NNfunction_ss_uLuR::synapse0x258a7e0() {
   return (neuron0x2584180()*-0.00402848);
}

double NNfunction_ss_uLuR::synapse0x258ab60() {
   return (neuron0x257f5c0()*0.457564);
}

double NNfunction_ss_uLuR::synapse0x258aba0() {
   return (neuron0x257f900()*-0.776139);
}

double NNfunction_ss_uLuR::synapse0x258abe0() {
   return (neuron0x257fc40()*-0.289226);
}

double NNfunction_ss_uLuR::synapse0x258ac20() {
   return (neuron0x257ff80()*-0.0132261);
}

double NNfunction_ss_uLuR::synapse0x258ac60() {
   return (neuron0x25802c0()*-0.391753);
}

double NNfunction_ss_uLuR::synapse0x258aca0() {
   return (neuron0x2580600()*0.833271);
}

double NNfunction_ss_uLuR::synapse0x258ace0() {
   return (neuron0x2580940()*-0.64833);
}

double NNfunction_ss_uLuR::synapse0x258ad20() {
   return (neuron0x2580c80()*-0.326194);
}

double NNfunction_ss_uLuR::synapse0x258ad60() {
   return (neuron0x2580fc0()*0.813557);
}

double NNfunction_ss_uLuR::synapse0x258ada0() {
   return (neuron0x2581300()*0.278936);
}

double NNfunction_ss_uLuR::synapse0x258ade0() {
   return (neuron0x2581640()*0.736687);
}

double NNfunction_ss_uLuR::synapse0x258ae20() {
   return (neuron0x2581980()*1.59867);
}

double NNfunction_ss_uLuR::synapse0x258ae60() {
   return (neuron0x2581cc0()*-0.544619);
}

double NNfunction_ss_uLuR::synapse0x258aea0() {
   return (neuron0x2582000()*-0.193564);
}

double NNfunction_ss_uLuR::synapse0x258aee0() {
   return (neuron0x2582340()*0.14094);
}

double NNfunction_ss_uLuR::synapse0x258af20() {
   return (neuron0x2582680()*-0.910753);
}

double NNfunction_ss_uLuR::synapse0x258a9b0() {
   return (neuron0x25829c0()*1.12705);
}

double NNfunction_ss_uLuR::synapse0x258a9f0() {
   return (neuron0x2582f20()*-0.431145);
}

double NNfunction_ss_uLuR::synapse0x2587780() {
   return (neuron0x2583140()*0.700844);
}

double NNfunction_ss_uLuR::synapse0x25877c0() {
   return (neuron0x2583480()*-0.304447);
}

double NNfunction_ss_uLuR::synapse0x2587800() {
   return (neuron0x25837c0()*-0.184624);
}

double NNfunction_ss_uLuR::synapse0x2587840() {
   return (neuron0x2583b00()*-0.0289058);
}

double NNfunction_ss_uLuR::synapse0x2587880() {
   return (neuron0x2583e40()*-0.568905);
}

double NNfunction_ss_uLuR::synapse0x25878c0() {
   return (neuron0x2584180()*-0.0807559);
}

double NNfunction_ss_uLuR::synapse0x2587c40() {
   return (neuron0x257f5c0()*-0.104602);
}

double NNfunction_ss_uLuR::synapse0x2587c80() {
   return (neuron0x257f900()*0.0703166);
}

double NNfunction_ss_uLuR::synapse0x2587cc0() {
   return (neuron0x257fc40()*-0.00669438);
}

double NNfunction_ss_uLuR::synapse0x2587d00() {
   return (neuron0x257ff80()*0.490326);
}

double NNfunction_ss_uLuR::synapse0x2587d40() {
   return (neuron0x25802c0()*0.0536854);
}

double NNfunction_ss_uLuR::synapse0x2587d80() {
   return (neuron0x2580600()*0.050755);
}

double NNfunction_ss_uLuR::synapse0x2587dc0() {
   return (neuron0x2580940()*0.0452713);
}

double NNfunction_ss_uLuR::synapse0x2587e00() {
   return (neuron0x2580c80()*-0.0264128);
}

double NNfunction_ss_uLuR::synapse0x2587e40() {
   return (neuron0x2580fc0()*0.0258178);
}

double NNfunction_ss_uLuR::synapse0x2587e80() {
   return (neuron0x2581300()*-0.0150173);
}

double NNfunction_ss_uLuR::synapse0x2587ec0() {
   return (neuron0x2581640()*0.0245284);
}

double NNfunction_ss_uLuR::synapse0x2587f00() {
   return (neuron0x2581980()*0.37979);
}

double NNfunction_ss_uLuR::synapse0x2587f40() {
   return (neuron0x2581cc0()*-0.00296553);
}

double NNfunction_ss_uLuR::synapse0x258c080() {
   return (neuron0x2582000()*0.0563754);
}

double NNfunction_ss_uLuR::synapse0x258c0c0() {
   return (neuron0x2582340()*-0.194043);
}

double NNfunction_ss_uLuR::synapse0x258c100() {
   return (neuron0x2582680()*0.0196539);
}

double NNfunction_ss_uLuR::synapse0x2587a90() {
   return (neuron0x25829c0()*0.0211497);
}

double NNfunction_ss_uLuR::synapse0x2587ad0() {
   return (neuron0x2582f20()*0.0134192);
}

double NNfunction_ss_uLuR::synapse0x258c250() {
   return (neuron0x2583140()*-0.0474784);
}

double NNfunction_ss_uLuR::synapse0x258c290() {
   return (neuron0x2583480()*0.0741845);
}

double NNfunction_ss_uLuR::synapse0x258c2d0() {
   return (neuron0x25837c0()*0.0185);
}

double NNfunction_ss_uLuR::synapse0x258c310() {
   return (neuron0x2583b00()*-0.00647129);
}

double NNfunction_ss_uLuR::synapse0x258c350() {
   return (neuron0x2583e40()*-0.0442408);
}

double NNfunction_ss_uLuR::synapse0x258c390() {
   return (neuron0x2584180()*0.0319198);
}

double NNfunction_ss_uLuR::synapse0x258c710() {
   return (neuron0x257f5c0()*0.306061);
}

double NNfunction_ss_uLuR::synapse0x258c750() {
   return (neuron0x257f900()*-0.324748);
}

double NNfunction_ss_uLuR::synapse0x258c790() {
   return (neuron0x257fc40()*-0.501358);
}

double NNfunction_ss_uLuR::synapse0x258c7d0() {
   return (neuron0x257ff80()*2.28634);
}

double NNfunction_ss_uLuR::synapse0x258c810() {
   return (neuron0x25802c0()*0.536403);
}

double NNfunction_ss_uLuR::synapse0x258c850() {
   return (neuron0x2580600()*0.106856);
}

double NNfunction_ss_uLuR::synapse0x258c890() {
   return (neuron0x2580940()*0.428207);
}

double NNfunction_ss_uLuR::synapse0x258c8d0() {
   return (neuron0x2580c80()*-0.485249);
}

double NNfunction_ss_uLuR::synapse0x258c910() {
   return (neuron0x2580fc0()*-0.181034);
}

double NNfunction_ss_uLuR::synapse0x258c950() {
   return (neuron0x2581300()*0.0908869);
}

double NNfunction_ss_uLuR::synapse0x258c990() {
   return (neuron0x2581640()*-0.596946);
}

double NNfunction_ss_uLuR::synapse0x258c9d0() {
   return (neuron0x2581980()*0.165784);
}

double NNfunction_ss_uLuR::synapse0x258ca10() {
   return (neuron0x2581cc0()*-0.0322524);
}

double NNfunction_ss_uLuR::synapse0x258ca50() {
   return (neuron0x2582000()*-0.147165);
}

double NNfunction_ss_uLuR::synapse0x258ca90() {
   return (neuron0x2582340()*-0.421119);
}

double NNfunction_ss_uLuR::synapse0x258cad0() {
   return (neuron0x2582680()*0.0832363);
}

double NNfunction_ss_uLuR::synapse0x258c560() {
   return (neuron0x25829c0()*0.103824);
}

double NNfunction_ss_uLuR::synapse0x258c5a0() {
   return (neuron0x2582f20()*-0.155283);
}

double NNfunction_ss_uLuR::synapse0x258cc20() {
   return (neuron0x2583140()*-0.418438);
}

double NNfunction_ss_uLuR::synapse0x258cc60() {
   return (neuron0x2583480()*-0.560136);
}

double NNfunction_ss_uLuR::synapse0x258cca0() {
   return (neuron0x25837c0()*0.444677);
}

double NNfunction_ss_uLuR::synapse0x258cce0() {
   return (neuron0x2583b00()*-0.100867);
}

double NNfunction_ss_uLuR::synapse0x258cd20() {
   return (neuron0x2583e40()*0.269051);
}

double NNfunction_ss_uLuR::synapse0x258cd60() {
   return (neuron0x2584180()*-0.323297);
}

double NNfunction_ss_uLuR::synapse0x258d0e0() {
   return (neuron0x257f5c0()*1.55171);
}

double NNfunction_ss_uLuR::synapse0x258d120() {
   return (neuron0x257f900()*-0.557371);
}

double NNfunction_ss_uLuR::synapse0x258d160() {
   return (neuron0x257fc40()*-0.342445);
}

double NNfunction_ss_uLuR::synapse0x258d1a0() {
   return (neuron0x257ff80()*-0.150488);
}

double NNfunction_ss_uLuR::synapse0x258d1e0() {
   return (neuron0x25802c0()*-0.223031);
}

double NNfunction_ss_uLuR::synapse0x258d220() {
   return (neuron0x2580600()*0.935259);
}

double NNfunction_ss_uLuR::synapse0x258d260() {
   return (neuron0x2580940()*0.656584);
}

double NNfunction_ss_uLuR::synapse0x258d2a0() {
   return (neuron0x2580c80()*-0.82214);
}

double NNfunction_ss_uLuR::synapse0x258d2e0() {
   return (neuron0x2580fc0()*-0.824723);
}

double NNfunction_ss_uLuR::synapse0x258d320() {
   return (neuron0x2581300()*0.298884);
}

double NNfunction_ss_uLuR::synapse0x258d360() {
   return (neuron0x2581640()*0.207199);
}

double NNfunction_ss_uLuR::synapse0x258d3a0() {
   return (neuron0x2581980()*0.121685);
}

double NNfunction_ss_uLuR::synapse0x258d3e0() {
   return (neuron0x2581cc0()*-0.322273);
}

double NNfunction_ss_uLuR::synapse0x258d420() {
   return (neuron0x2582000()*0.444198);
}

double NNfunction_ss_uLuR::synapse0x258d460() {
   return (neuron0x2582340()*-0.480122);
}

double NNfunction_ss_uLuR::synapse0x258d4a0() {
   return (neuron0x2582680()*-0.18194);
}

double NNfunction_ss_uLuR::synapse0x258cf30() {
   return (neuron0x25829c0()*0.562463);
}

double NNfunction_ss_uLuR::synapse0x258cf70() {
   return (neuron0x2582f20()*0.531777);
}

double NNfunction_ss_uLuR::synapse0x258d5f0() {
   return (neuron0x2583140()*-0.0163748);
}

double NNfunction_ss_uLuR::synapse0x258d630() {
   return (neuron0x2583480()*-0.692036);
}

double NNfunction_ss_uLuR::synapse0x258d670() {
   return (neuron0x25837c0()*-0.0585182);
}

double NNfunction_ss_uLuR::synapse0x258d6b0() {
   return (neuron0x2583b00()*0.0526852);
}

double NNfunction_ss_uLuR::synapse0x258d6f0() {
   return (neuron0x2583e40()*0.636977);
}

double NNfunction_ss_uLuR::synapse0x258d730() {
   return (neuron0x2584180()*-0.931963);
}

double NNfunction_ss_uLuR::synapse0x258dab0() {
   return (neuron0x257f5c0()*-0.346106);
}

double NNfunction_ss_uLuR::synapse0x258daf0() {
   return (neuron0x257f900()*0.693221);
}

double NNfunction_ss_uLuR::synapse0x258db30() {
   return (neuron0x257fc40()*-0.551079);
}

double NNfunction_ss_uLuR::synapse0x258db70() {
   return (neuron0x257ff80()*1.01747);
}

double NNfunction_ss_uLuR::synapse0x258dbb0() {
   return (neuron0x25802c0()*-0.151196);
}

double NNfunction_ss_uLuR::synapse0x258dbf0() {
   return (neuron0x2580600()*-0.198836);
}

double NNfunction_ss_uLuR::synapse0x258dc30() {
   return (neuron0x2580940()*0.0624619);
}

double NNfunction_ss_uLuR::synapse0x258dc70() {
   return (neuron0x2580c80()*-0.496957);
}

double NNfunction_ss_uLuR::synapse0x258dcb0() {
   return (neuron0x2580fc0()*0.482384);
}

double NNfunction_ss_uLuR::synapse0x258dcf0() {
   return (neuron0x2581300()*-0.159811);
}

double NNfunction_ss_uLuR::synapse0x258dd30() {
   return (neuron0x2581640()*-0.665562);
}

double NNfunction_ss_uLuR::synapse0x258dd70() {
   return (neuron0x2581980()*0.311378);
}

double NNfunction_ss_uLuR::synapse0x258ddb0() {
   return (neuron0x2581cc0()*0.32864);
}

double NNfunction_ss_uLuR::synapse0x258ddf0() {
   return (neuron0x2582000()*0.624119);
}

double NNfunction_ss_uLuR::synapse0x258de30() {
   return (neuron0x2582340()*0.273908);
}

double NNfunction_ss_uLuR::synapse0x258de70() {
   return (neuron0x2582680()*-0.919499);
}

double NNfunction_ss_uLuR::synapse0x258d900() {
   return (neuron0x25829c0()*0.191267);
}

double NNfunction_ss_uLuR::synapse0x258d940() {
   return (neuron0x2582f20()*-0.964517);
}

double NNfunction_ss_uLuR::synapse0x258dfc0() {
   return (neuron0x2583140()*-0.0984599);
}

double NNfunction_ss_uLuR::synapse0x258e000() {
   return (neuron0x2583480()*0.335968);
}

double NNfunction_ss_uLuR::synapse0x258e040() {
   return (neuron0x25837c0()*-0.130723);
}

double NNfunction_ss_uLuR::synapse0x258e080() {
   return (neuron0x2583b00()*-0.271265);
}

double NNfunction_ss_uLuR::synapse0x258e0c0() {
   return (neuron0x2583e40()*0.610801);
}

double NNfunction_ss_uLuR::synapse0x258e100() {
   return (neuron0x2584180()*0.239647);
}

double NNfunction_ss_uLuR::synapse0x258e480() {
   return (neuron0x257f5c0()*0.411169);
}

double NNfunction_ss_uLuR::synapse0x257f7e0() {
   return (neuron0x257f900()*0.638193);
}

double NNfunction_ss_uLuR::synapse0x257f820() {
   return (neuron0x257fc40()*0.386915);
}

double NNfunction_ss_uLuR::synapse0x257fb20() {
   return (neuron0x257ff80()*-2.01777);
}

double NNfunction_ss_uLuR::synapse0x257fb60() {
   return (neuron0x25802c0()*0.0737361);
}

double NNfunction_ss_uLuR::synapse0x257fe60() {
   return (neuron0x2580600()*0.12987);
}

double NNfunction_ss_uLuR::synapse0x257fea0() {
   return (neuron0x2580940()*-0.0743924);
}

double NNfunction_ss_uLuR::synapse0x25801a0() {
   return (neuron0x2580c80()*0.360786);
}

double NNfunction_ss_uLuR::synapse0x25801e0() {
   return (neuron0x2580fc0()*0.0495568);
}

double NNfunction_ss_uLuR::synapse0x25804e0() {
   return (neuron0x2581300()*-0.314844);
}

double NNfunction_ss_uLuR::synapse0x2580520() {
   return (neuron0x2581640()*0.264322);
}

double NNfunction_ss_uLuR::synapse0x2580820() {
   return (neuron0x2581980()*-0.374357);
}

double NNfunction_ss_uLuR::synapse0x2580860() {
   return (neuron0x2581cc0()*0.194293);
}

double NNfunction_ss_uLuR::synapse0x2580b60() {
   return (neuron0x2582000()*0.231304);
}

double NNfunction_ss_uLuR::synapse0x2580ba0() {
   return (neuron0x2582340()*0.0165054);
}

double NNfunction_ss_uLuR::synapse0x2580ea0() {
   return (neuron0x2582680()*-0.0441743);
}

double NNfunction_ss_uLuR::synapse0x2580ee0() {
   return (neuron0x25829c0()*-0.364038);
}

double NNfunction_ss_uLuR::synapse0x25811e0() {
   return (neuron0x2582f20()*-0.454753);
}

double NNfunction_ss_uLuR::synapse0x2581220() {
   return (neuron0x2583140()*-0.122651);
}

double NNfunction_ss_uLuR::synapse0x2581520() {
   return (neuron0x2583480()*-0.126611);
}

double NNfunction_ss_uLuR::synapse0x2581560() {
   return (neuron0x25837c0()*0.115298);
}

double NNfunction_ss_uLuR::synapse0x2581860() {
   return (neuron0x2583b00()*-0.0116107);
}

double NNfunction_ss_uLuR::synapse0x25818a0() {
   return (neuron0x2583e40()*-0.0251101);
}

double NNfunction_ss_uLuR::synapse0x2581ba0() {
   return (neuron0x2584180()*0.149196);
}

double NNfunction_ss_uLuR::synapse0x2581be0() {
   return (neuron0x257f5c0()*-0.0572835);
}

double NNfunction_ss_uLuR::synapse0x25828a0() {
   return (neuron0x257f900()*-0.0789978);
}

double NNfunction_ss_uLuR::synapse0x25828e0() {
   return (neuron0x257fc40()*-0.0421353);
}

double NNfunction_ss_uLuR::synapse0x258e2d0() {
   return (neuron0x257ff80()*0.406855);
}

double NNfunction_ss_uLuR::synapse0x258e310() {
   return (neuron0x25802c0()*0.0137533);
}

double NNfunction_ss_uLuR::synapse0x2582be0() {
   return (neuron0x2580600()*0.135947);
}

double NNfunction_ss_uLuR::synapse0x2582c20() {
   return (neuron0x2580940()*0.00290328);
}

double NNfunction_ss_uLuR::synapse0x2330c10() {
   return (neuron0x2580c80()*-0.101189);
}

double NNfunction_ss_uLuR::synapse0x2330c50() {
   return (neuron0x2580fc0()*0.124287);
}

double NNfunction_ss_uLuR::synapse0x2583360() {
   return (neuron0x2581300()*0.0618752);
}

double NNfunction_ss_uLuR::synapse0x25833a0() {
   return (neuron0x2581640()*0.0309913);
}

double NNfunction_ss_uLuR::synapse0x25836a0() {
   return (neuron0x2581980()*-0.897514);
}

double NNfunction_ss_uLuR::synapse0x25836e0() {
   return (neuron0x2581cc0()*-0.0767911);
}

double NNfunction_ss_uLuR::synapse0x25839e0() {
   return (neuron0x2582000()*-0.0181534);
}

double NNfunction_ss_uLuR::synapse0x2583a20() {
   return (neuron0x2582340()*-0.0962457);
}

double NNfunction_ss_uLuR::synapse0x2583d20() {
   return (neuron0x2582680()*0.0376551);
}

double NNfunction_ss_uLuR::synapse0x2583d60() {
   return (neuron0x25829c0()*0.0185594);
}

double NNfunction_ss_uLuR::synapse0x2584060() {
   return (neuron0x2582f20()*-0.0975614);
}

double NNfunction_ss_uLuR::synapse0x25840a0() {
   return (neuron0x2583140()*-0.0425305);
}

double NNfunction_ss_uLuR::synapse0x25843a0() {
   return (neuron0x2583480()*0.0412266);
}

double NNfunction_ss_uLuR::synapse0x25843e0() {
   return (neuron0x25837c0()*-0.00605644);
}

double NNfunction_ss_uLuR::synapse0x2581ee0() {
   return (neuron0x2583b00()*0.0369399);
}

double NNfunction_ss_uLuR::synapse0x2581f20() {
   return (neuron0x2583e40()*-0.041642);
}

double NNfunction_ss_uLuR::synapse0x25901f0() {
   return (neuron0x2584180()*0.00774215);
}

double NNfunction_ss_uLuR::synapse0x2590570() {
   return (neuron0x257f5c0()*-0.0871533);
}

double NNfunction_ss_uLuR::synapse0x25905b0() {
   return (neuron0x257f900()*-0.294175);
}

double NNfunction_ss_uLuR::synapse0x25905f0() {
   return (neuron0x257fc40()*-1.09427);
}

double NNfunction_ss_uLuR::synapse0x2590630() {
   return (neuron0x257ff80()*-1.40045);
}

double NNfunction_ss_uLuR::synapse0x2590670() {
   return (neuron0x25802c0()*0.0542534);
}

double NNfunction_ss_uLuR::synapse0x25906b0() {
   return (neuron0x2580600()*-0.0780655);
}

double NNfunction_ss_uLuR::synapse0x25906f0() {
   return (neuron0x2580940()*-0.0515375);
}

double NNfunction_ss_uLuR::synapse0x2590730() {
   return (neuron0x2580c80()*-0.140197);
}

double NNfunction_ss_uLuR::synapse0x2590770() {
   return (neuron0x2580fc0()*-0.473927);
}

double NNfunction_ss_uLuR::synapse0x25907b0() {
   return (neuron0x2581300()*0.105579);
}

double NNfunction_ss_uLuR::synapse0x25907f0() {
   return (neuron0x2581640()*-0.012134);
}

double NNfunction_ss_uLuR::synapse0x2590830() {
   return (neuron0x2581980()*0.0238688);
}

double NNfunction_ss_uLuR::synapse0x2590870() {
   return (neuron0x2581cc0()*-0.403327);
}

double NNfunction_ss_uLuR::synapse0x25908b0() {
   return (neuron0x2582000()*0.145923);
}

double NNfunction_ss_uLuR::synapse0x25908f0() {
   return (neuron0x2582340()*-0.118677);
}

double NNfunction_ss_uLuR::synapse0x2590930() {
   return (neuron0x2582680()*-0.123704);
}

double NNfunction_ss_uLuR::synapse0x25903c0() {
   return (neuron0x25829c0()*0.196901);
}

double NNfunction_ss_uLuR::synapse0x2590400() {
   return (neuron0x2582f20()*-0.0791686);
}

double NNfunction_ss_uLuR::synapse0x2590a80() {
   return (neuron0x2583140()*-0.0311835);
}

double NNfunction_ss_uLuR::synapse0x2590ac0() {
   return (neuron0x2583480()*-0.0898731);
}

double NNfunction_ss_uLuR::synapse0x2590b00() {
   return (neuron0x25837c0()*0.0507562);
}

double NNfunction_ss_uLuR::synapse0x2590b40() {
   return (neuron0x2583b00()*0.0438545);
}

double NNfunction_ss_uLuR::synapse0x2590b80() {
   return (neuron0x2583e40()*-0.0352065);
}

double NNfunction_ss_uLuR::synapse0x2590bc0() {
   return (neuron0x2584180()*0.0192759);
}

double NNfunction_ss_uLuR::synapse0x2590f40() {
   return (neuron0x257f5c0()*0.0932961);
}

double NNfunction_ss_uLuR::synapse0x2590f80() {
   return (neuron0x257f900()*-0.0333161);
}

double NNfunction_ss_uLuR::synapse0x2590fc0() {
   return (neuron0x257fc40()*-0.0795319);
}

double NNfunction_ss_uLuR::synapse0x2591000() {
   return (neuron0x257ff80()*-0.00274372);
}

double NNfunction_ss_uLuR::synapse0x2591040() {
   return (neuron0x25802c0()*-0.0268043);
}

double NNfunction_ss_uLuR::synapse0x2591080() {
   return (neuron0x2580600()*-0.0523816);
}

double NNfunction_ss_uLuR::synapse0x25910c0() {
   return (neuron0x2580940()*0.0444195);
}

double NNfunction_ss_uLuR::synapse0x2591100() {
   return (neuron0x2580c80()*0.12567);
}

double NNfunction_ss_uLuR::synapse0x2591140() {
   return (neuron0x2580fc0()*-0.137992);
}

double NNfunction_ss_uLuR::synapse0x2591180() {
   return (neuron0x2581300()*-0.0495098);
}

double NNfunction_ss_uLuR::synapse0x25911c0() {
   return (neuron0x2581640()*-0.106595);
}

double NNfunction_ss_uLuR::synapse0x2591200() {
   return (neuron0x2581980()*1.21621);
}

double NNfunction_ss_uLuR::synapse0x2591240() {
   return (neuron0x2581cc0()*-0.0796339);
}

double NNfunction_ss_uLuR::synapse0x2591280() {
   return (neuron0x2582000()*0.0590831);
}

double NNfunction_ss_uLuR::synapse0x25912c0() {
   return (neuron0x2582340()*0.0220947);
}

double NNfunction_ss_uLuR::synapse0x2591300() {
   return (neuron0x2582680()*0.0955862);
}

double NNfunction_ss_uLuR::synapse0x2590d90() {
   return (neuron0x25829c0()*0.134519);
}

double NNfunction_ss_uLuR::synapse0x2590dd0() {
   return (neuron0x2582f20()*-0.0173571);
}

double NNfunction_ss_uLuR::synapse0x2591450() {
   return (neuron0x2583140()*-0.0722903);
}

double NNfunction_ss_uLuR::synapse0x2591490() {
   return (neuron0x2583480()*-0.24529);
}

double NNfunction_ss_uLuR::synapse0x25914d0() {
   return (neuron0x25837c0()*0.11494);
}

double NNfunction_ss_uLuR::synapse0x2591510() {
   return (neuron0x2583b00()*-0.186576);
}

double NNfunction_ss_uLuR::synapse0x2591550() {
   return (neuron0x2583e40()*-0.0679379);
}

double NNfunction_ss_uLuR::synapse0x2591590() {
   return (neuron0x2584180()*0.0422162);
}

double NNfunction_ss_uLuR::synapse0x2591910() {
   return (neuron0x257f5c0()*-0.000890529);
}

double NNfunction_ss_uLuR::synapse0x2591950() {
   return (neuron0x257f900()*0.195021);
}

double NNfunction_ss_uLuR::synapse0x2591990() {
   return (neuron0x257fc40()*0.130992);
}

double NNfunction_ss_uLuR::synapse0x25919d0() {
   return (neuron0x257ff80()*2.76738);
}

double NNfunction_ss_uLuR::synapse0x2591a10() {
   return (neuron0x25802c0()*-0.0629348);
}

double NNfunction_ss_uLuR::synapse0x2591a50() {
   return (neuron0x2580600()*0.0402923);
}

double NNfunction_ss_uLuR::synapse0x2591a90() {
   return (neuron0x2580940()*-0.184448);
}

double NNfunction_ss_uLuR::synapse0x2591ad0() {
   return (neuron0x2580c80()*0.225025);
}

double NNfunction_ss_uLuR::synapse0x2591b10() {
   return (neuron0x2580fc0()*0.0518887);
}

double NNfunction_ss_uLuR::synapse0x2591b50() {
   return (neuron0x2581300()*0.00193181);
}

double NNfunction_ss_uLuR::synapse0x2591b90() {
   return (neuron0x2581640()*0.0551637);
}

double NNfunction_ss_uLuR::synapse0x2591bd0() {
   return (neuron0x2581980()*-0.347286);
}

double NNfunction_ss_uLuR::synapse0x2591c10() {
   return (neuron0x2581cc0()*0.1861);
}

double NNfunction_ss_uLuR::synapse0x2591c50() {
   return (neuron0x2582000()*-0.00985907);
}

double NNfunction_ss_uLuR::synapse0x2591c90() {
   return (neuron0x2582340()*-0.533441);
}

double NNfunction_ss_uLuR::synapse0x2591cd0() {
   return (neuron0x2582680()*-0.0305052);
}

double NNfunction_ss_uLuR::synapse0x2591760() {
   return (neuron0x25829c0()*-0.0948666);
}

double NNfunction_ss_uLuR::synapse0x25917a0() {
   return (neuron0x2582f20()*-0.250916);
}

double NNfunction_ss_uLuR::synapse0x2591e20() {
   return (neuron0x2583140()*-0.0444634);
}

double NNfunction_ss_uLuR::synapse0x2591e60() {
   return (neuron0x2583480()*-0.156791);
}

double NNfunction_ss_uLuR::synapse0x2591ea0() {
   return (neuron0x25837c0()*0.162917);
}

double NNfunction_ss_uLuR::synapse0x2591ee0() {
   return (neuron0x2583b00()*0.0180658);
}

double NNfunction_ss_uLuR::synapse0x2591f20() {
   return (neuron0x2583e40()*-0.33674);
}

double NNfunction_ss_uLuR::synapse0x2591f60() {
   return (neuron0x2584180()*0.0164869);
}

double NNfunction_ss_uLuR::synapse0x25922e0() {
   return (neuron0x257f5c0()*0.0591237);
}

double NNfunction_ss_uLuR::synapse0x2592320() {
   return (neuron0x257f900()*0.0284854);
}

double NNfunction_ss_uLuR::synapse0x2592360() {
   return (neuron0x257fc40()*-0.162959);
}

double NNfunction_ss_uLuR::synapse0x25923a0() {
   return (neuron0x257ff80()*-0.245702);
}

double NNfunction_ss_uLuR::synapse0x25923e0() {
   return (neuron0x25802c0()*-0.0559714);
}

double NNfunction_ss_uLuR::synapse0x2592420() {
   return (neuron0x2580600()*-0.0833877);
}

double NNfunction_ss_uLuR::synapse0x2592460() {
   return (neuron0x2580940()*-0.0629954);
}

double NNfunction_ss_uLuR::synapse0x25924a0() {
   return (neuron0x2580c80()*0.0388964);
}

double NNfunction_ss_uLuR::synapse0x25924e0() {
   return (neuron0x2580fc0()*0.0191464);
}

double NNfunction_ss_uLuR::synapse0x2592520() {
   return (neuron0x2581300()*0.00969627);
}

double NNfunction_ss_uLuR::synapse0x2592560() {
   return (neuron0x2581640()*0.10229);
}

double NNfunction_ss_uLuR::synapse0x25925a0() {
   return (neuron0x2581980()*0.517226);
}

double NNfunction_ss_uLuR::synapse0x25925e0() {
   return (neuron0x2581cc0()*0.579918);
}

double NNfunction_ss_uLuR::synapse0x2592620() {
   return (neuron0x2582000()*-0.145893);
}

double NNfunction_ss_uLuR::synapse0x2592660() {
   return (neuron0x2582340()*-0.311246);
}

double NNfunction_ss_uLuR::synapse0x25926a0() {
   return (neuron0x2582680()*0.125017);
}

double NNfunction_ss_uLuR::synapse0x2592130() {
   return (neuron0x25829c0()*-0.120281);
}

double NNfunction_ss_uLuR::synapse0x2592170() {
   return (neuron0x2582f20()*0.417745);
}

double NNfunction_ss_uLuR::synapse0x25927f0() {
   return (neuron0x2583140()*0.462766);
}

double NNfunction_ss_uLuR::synapse0x2592830() {
   return (neuron0x2583480()*-0.103254);
}

double NNfunction_ss_uLuR::synapse0x2592870() {
   return (neuron0x25837c0()*0.00100723);
}

double NNfunction_ss_uLuR::synapse0x25928b0() {
   return (neuron0x2583b00()*-0.0457248);
}

double NNfunction_ss_uLuR::synapse0x25928f0() {
   return (neuron0x2583e40()*0.00768405);
}

double NNfunction_ss_uLuR::synapse0x2592930() {
   return (neuron0x2584180()*-0.104018);
}

double NNfunction_ss_uLuR::synapse0x2592cb0() {
   return (neuron0x257f5c0()*0.0131035);
}

double NNfunction_ss_uLuR::synapse0x2592cf0() {
   return (neuron0x257f900()*0.0264945);
}

double NNfunction_ss_uLuR::synapse0x2592d30() {
   return (neuron0x257fc40()*-0.0110632);
}

double NNfunction_ss_uLuR::synapse0x2592d70() {
   return (neuron0x257ff80()*2.37308);
}

double NNfunction_ss_uLuR::synapse0x2592db0() {
   return (neuron0x25802c0()*-0.000268163);
}

double NNfunction_ss_uLuR::synapse0x2592df0() {
   return (neuron0x2580600()*0.0371621);
}

double NNfunction_ss_uLuR::synapse0x2592e30() {
   return (neuron0x2580940()*0.0104022);
}

double NNfunction_ss_uLuR::synapse0x2592e70() {
   return (neuron0x2580c80()*-0.0127777);
}

double NNfunction_ss_uLuR::synapse0x2592eb0() {
   return (neuron0x2580fc0()*0.0167823);
}

double NNfunction_ss_uLuR::synapse0x258b070() {
   return (neuron0x2581300()*0.00120606);
}

double NNfunction_ss_uLuR::synapse0x258b0b0() {
   return (neuron0x2581640()*-0.0264267);
}

double NNfunction_ss_uLuR::synapse0x258b0f0() {
   return (neuron0x2581980()*-0.179015);
}

double NNfunction_ss_uLuR::synapse0x258b130() {
   return (neuron0x2581cc0()*0.00875453);
}

double NNfunction_ss_uLuR::synapse0x258b170() {
   return (neuron0x2582000()*0.00380595);
}

double NNfunction_ss_uLuR::synapse0x258b1b0() {
   return (neuron0x2582340()*-0.364531);
}

double NNfunction_ss_uLuR::synapse0x258b1f0() {
   return (neuron0x2582680()*0.0107852);
}

double NNfunction_ss_uLuR::synapse0x2592b00() {
   return (neuron0x25829c0()*-0.0077389);
}

double NNfunction_ss_uLuR::synapse0x2592b40() {
   return (neuron0x2582f20()*-0.0102481);
}

double NNfunction_ss_uLuR::synapse0x258b340() {
   return (neuron0x2583140()*-0.00871165);
}

double NNfunction_ss_uLuR::synapse0x258b380() {
   return (neuron0x2583480()*-0.00592072);
}

double NNfunction_ss_uLuR::synapse0x258b3c0() {
   return (neuron0x25837c0()*0.0282587);
}

double NNfunction_ss_uLuR::synapse0x258b400() {
   return (neuron0x2583b00()*-0.0105548);
}

double NNfunction_ss_uLuR::synapse0x258b440() {
   return (neuron0x2583e40()*-0.0176755);
}

double NNfunction_ss_uLuR::synapse0x258b480() {
   return (neuron0x2584180()*-0.0143383);
}

double NNfunction_ss_uLuR::synapse0x258b800() {
   return (neuron0x257f5c0()*-0.21465);
}

double NNfunction_ss_uLuR::synapse0x258b840() {
   return (neuron0x257f900()*-0.226894);
}

double NNfunction_ss_uLuR::synapse0x258b880() {
   return (neuron0x257fc40()*0.140194);
}

double NNfunction_ss_uLuR::synapse0x258b8c0() {
   return (neuron0x257ff80()*-0.160978);
}

double NNfunction_ss_uLuR::synapse0x258b900() {
   return (neuron0x25802c0()*0.0751706);
}

double NNfunction_ss_uLuR::synapse0x258b940() {
   return (neuron0x2580600()*-0.263066);
}

double NNfunction_ss_uLuR::synapse0x258b980() {
   return (neuron0x2580940()*-0.0660108);
}

double NNfunction_ss_uLuR::synapse0x258b9c0() {
   return (neuron0x2580c80()*0.0420419);
}

double NNfunction_ss_uLuR::synapse0x258ba00() {
   return (neuron0x2580fc0()*-0.0492158);
}

double NNfunction_ss_uLuR::synapse0x258ba40() {
   return (neuron0x2581300()*0.0794137);
}

double NNfunction_ss_uLuR::synapse0x258ba80() {
   return (neuron0x2581640()*-0.572197);
}

double NNfunction_ss_uLuR::synapse0x258bac0() {
   return (neuron0x2581980()*-1.70464);
}

double NNfunction_ss_uLuR::synapse0x258bb00() {
   return (neuron0x2581cc0()*-0.105946);
}

double NNfunction_ss_uLuR::synapse0x258bb40() {
   return (neuron0x2582000()*-0.239771);
}

double NNfunction_ss_uLuR::synapse0x258bb80() {
   return (neuron0x2582340()*-0.0537693);
}

double NNfunction_ss_uLuR::synapse0x258bbc0() {
   return (neuron0x2582680()*0.18339);
}

double NNfunction_ss_uLuR::synapse0x258b650() {
   return (neuron0x25829c0()*0.196771);
}

double NNfunction_ss_uLuR::synapse0x258b690() {
   return (neuron0x2582f20()*-0.169573);
}

double NNfunction_ss_uLuR::synapse0x258bd10() {
   return (neuron0x2583140()*0.0215366);
}

double NNfunction_ss_uLuR::synapse0x258bd50() {
   return (neuron0x2583480()*-0.576618);
}

double NNfunction_ss_uLuR::synapse0x258bd90() {
   return (neuron0x25837c0()*-0.0420346);
}

double NNfunction_ss_uLuR::synapse0x258bdd0() {
   return (neuron0x2583b00()*-0.0357021);
}

double NNfunction_ss_uLuR::synapse0x258be10() {
   return (neuron0x2583e40()*-0.140902);
}

double NNfunction_ss_uLuR::synapse0x258be50() {
   return (neuron0x2584180()*-0.0572053);
}

double NNfunction_ss_uLuR::synapse0x258c020() {
   return (neuron0x257f5c0()*-0.3675);
}

double NNfunction_ss_uLuR::synapse0x25950b0() {
   return (neuron0x257f900()*-0.675371);
}

double NNfunction_ss_uLuR::synapse0x25950f0() {
   return (neuron0x257fc40()*-0.798539);
}

double NNfunction_ss_uLuR::synapse0x2595130() {
   return (neuron0x257ff80()*0.151113);
}

double NNfunction_ss_uLuR::synapse0x2595170() {
   return (neuron0x25802c0()*0.0398121);
}

double NNfunction_ss_uLuR::synapse0x25951b0() {
   return (neuron0x2580600()*0.83581);
}

double NNfunction_ss_uLuR::synapse0x25951f0() {
   return (neuron0x2580940()*0.328647);
}

double NNfunction_ss_uLuR::synapse0x2595230() {
   return (neuron0x2580c80()*0.0145429);
}

double NNfunction_ss_uLuR::synapse0x2595270() {
   return (neuron0x2580fc0()*-0.233063);
}

double NNfunction_ss_uLuR::synapse0x25952b0() {
   return (neuron0x2581300()*0.567532);
}

double NNfunction_ss_uLuR::synapse0x25952f0() {
   return (neuron0x2581640()*-0.00207021);
}

double NNfunction_ss_uLuR::synapse0x2595330() {
   return (neuron0x2581980()*-0.540795);
}

double NNfunction_ss_uLuR::synapse0x2595370() {
   return (neuron0x2581cc0()*0.406802);
}

double NNfunction_ss_uLuR::synapse0x25953b0() {
   return (neuron0x2582000()*0.415419);
}

double NNfunction_ss_uLuR::synapse0x25953f0() {
   return (neuron0x2582340()*0.0412156);
}

double NNfunction_ss_uLuR::synapse0x2595430() {
   return (neuron0x2582680()*-0.0182414);
}

double NNfunction_ss_uLuR::synapse0x2594f00() {
   return (neuron0x25829c0()*-0.0527456);
}

double NNfunction_ss_uLuR::synapse0x2594f40() {
   return (neuron0x2582f20()*0.646238);
}

double NNfunction_ss_uLuR::synapse0x2595580() {
   return (neuron0x2583140()*0.825127);
}

double NNfunction_ss_uLuR::synapse0x25955c0() {
   return (neuron0x2583480()*0.0665586);
}

double NNfunction_ss_uLuR::synapse0x2595600() {
   return (neuron0x25837c0()*-1.08237);
}

double NNfunction_ss_uLuR::synapse0x2595640() {
   return (neuron0x2583b00()*0.482831);
}

double NNfunction_ss_uLuR::synapse0x2595680() {
   return (neuron0x2583e40()*0.167025);
}

double NNfunction_ss_uLuR::synapse0x25956c0() {
   return (neuron0x2584180()*-0.0543786);
}

double NNfunction_ss_uLuR::synapse0x2595a40() {
   return (neuron0x257f5c0()*0.0094527);
}

double NNfunction_ss_uLuR::synapse0x2595a80() {
   return (neuron0x257f900()*0.0272066);
}

double NNfunction_ss_uLuR::synapse0x2595ac0() {
   return (neuron0x257fc40()*-0.0303066);
}

double NNfunction_ss_uLuR::synapse0x2595b00() {
   return (neuron0x257ff80()*-2.72894);
}

double NNfunction_ss_uLuR::synapse0x2595b40() {
   return (neuron0x25802c0()*-0.00914945);
}

double NNfunction_ss_uLuR::synapse0x2595b80() {
   return (neuron0x2580600()*0.0209899);
}

double NNfunction_ss_uLuR::synapse0x2595bc0() {
   return (neuron0x2580940()*0.00360858);
}

double NNfunction_ss_uLuR::synapse0x2595c00() {
   return (neuron0x2580c80()*-0.00789061);
}

double NNfunction_ss_uLuR::synapse0x2595c40() {
   return (neuron0x2580fc0()*0.0137507);
}

double NNfunction_ss_uLuR::synapse0x2595c80() {
   return (neuron0x2581300()*-0.00996565);
}

double NNfunction_ss_uLuR::synapse0x2595cc0() {
   return (neuron0x2581640()*-0.0262519);
}

double NNfunction_ss_uLuR::synapse0x2595d00() {
   return (neuron0x2581980()*-0.155107);
}

double NNfunction_ss_uLuR::synapse0x2595d40() {
   return (neuron0x2581cc0()*-0.0474335);
}

double NNfunction_ss_uLuR::synapse0x2595d80() {
   return (neuron0x2582000()*0.00806209);
}

double NNfunction_ss_uLuR::synapse0x2595dc0() {
   return (neuron0x2582340()*-0.0342528);
}

double NNfunction_ss_uLuR::synapse0x2595e00() {
   return (neuron0x2582680()*0.00546995);
}

double NNfunction_ss_uLuR::synapse0x2595890() {
   return (neuron0x25829c0()*0.00974064);
}

double NNfunction_ss_uLuR::synapse0x25958d0() {
   return (neuron0x2582f20()*-0.0296006);
}

double NNfunction_ss_uLuR::synapse0x2595f50() {
   return (neuron0x2583140()*-0.0141955);
}

double NNfunction_ss_uLuR::synapse0x2595f90() {
   return (neuron0x2583480()*-0.0106203);
}

double NNfunction_ss_uLuR::synapse0x2595fd0() {
   return (neuron0x25837c0()*0.0218191);
}

double NNfunction_ss_uLuR::synapse0x2596010() {
   return (neuron0x2583b00()*-0.0102958);
}

double NNfunction_ss_uLuR::synapse0x2596050() {
   return (neuron0x2583e40()*0.00401823);
}

double NNfunction_ss_uLuR::synapse0x2596090() {
   return (neuron0x2584180()*-0.0125874);
}

double NNfunction_ss_uLuR::synapse0x2596410() {
   return (neuron0x257f5c0()*-0.0641378);
}

double NNfunction_ss_uLuR::synapse0x2596450() {
   return (neuron0x257f900()*-0.00534716);
}

double NNfunction_ss_uLuR::synapse0x2596490() {
   return (neuron0x257fc40()*0.0606087);
}

double NNfunction_ss_uLuR::synapse0x25964d0() {
   return (neuron0x257ff80()*-0.0400298);
}

double NNfunction_ss_uLuR::synapse0x2596510() {
   return (neuron0x25802c0()*0.0476672);
}

double NNfunction_ss_uLuR::synapse0x2596550() {
   return (neuron0x2580600()*-0.0842054);
}

double NNfunction_ss_uLuR::synapse0x2596590() {
   return (neuron0x2580940()*0.0600663);
}

double NNfunction_ss_uLuR::synapse0x25965d0() {
   return (neuron0x2580c80()*-0.00754438);
}

double NNfunction_ss_uLuR::synapse0x2596610() {
   return (neuron0x2580fc0()*0.000579647);
}

double NNfunction_ss_uLuR::synapse0x2596650() {
   return (neuron0x2581300()*0.0509338);
}

double NNfunction_ss_uLuR::synapse0x2596690() {
   return (neuron0x2581640()*-0.0408927);
}

double NNfunction_ss_uLuR::synapse0x25966d0() {
   return (neuron0x2581980()*-0.148767);
}

double NNfunction_ss_uLuR::synapse0x2596710() {
   return (neuron0x2581cc0()*0.0345987);
}

double NNfunction_ss_uLuR::synapse0x2596750() {
   return (neuron0x2582000()*0.0154598);
}

double NNfunction_ss_uLuR::synapse0x2596790() {
   return (neuron0x2582340()*-0.637773);
}

double NNfunction_ss_uLuR::synapse0x25967d0() {
   return (neuron0x2582680()*-0.0430818);
}

double NNfunction_ss_uLuR::synapse0x2596260() {
   return (neuron0x25829c0()*-0.0782257);
}

double NNfunction_ss_uLuR::synapse0x25962a0() {
   return (neuron0x2582f20()*-0.061233);
}

double NNfunction_ss_uLuR::synapse0x2596920() {
   return (neuron0x2583140()*-0.0158517);
}

double NNfunction_ss_uLuR::synapse0x2596960() {
   return (neuron0x2583480()*-0.0310982);
}

double NNfunction_ss_uLuR::synapse0x25969a0() {
   return (neuron0x25837c0()*-4.33264e-05);
}

double NNfunction_ss_uLuR::synapse0x25969e0() {
   return (neuron0x2583b00()*-0.0384074);
}

double NNfunction_ss_uLuR::synapse0x2596a20() {
   return (neuron0x2583e40()*-0.040171);
}

double NNfunction_ss_uLuR::synapse0x2596a60() {
   return (neuron0x2584180()*0.00455212);
}

double NNfunction_ss_uLuR::synapse0x2596de0() {
   return (neuron0x257f5c0()*0.432232);
}

double NNfunction_ss_uLuR::synapse0x2596e20() {
   return (neuron0x257f900()*-0.612215);
}

double NNfunction_ss_uLuR::synapse0x2596e60() {
   return (neuron0x257fc40()*0.0333911);
}

double NNfunction_ss_uLuR::synapse0x2596ea0() {
   return (neuron0x257ff80()*-1.80358);
}

double NNfunction_ss_uLuR::synapse0x2596ee0() {
   return (neuron0x25802c0()*0.519065);
}

double NNfunction_ss_uLuR::synapse0x2596f20() {
   return (neuron0x2580600()*0.47368);
}

double NNfunction_ss_uLuR::synapse0x2596f60() {
   return (neuron0x2580940()*0.0579278);
}

double NNfunction_ss_uLuR::synapse0x2596fa0() {
   return (neuron0x2580c80()*0.430478);
}

double NNfunction_ss_uLuR::synapse0x2596fe0() {
   return (neuron0x2580fc0()*0.0959948);
}

double NNfunction_ss_uLuR::synapse0x2597020() {
   return (neuron0x2581300()*0.0115588);
}

double NNfunction_ss_uLuR::synapse0x2597060() {
   return (neuron0x2581640()*-0.178322);
}

double NNfunction_ss_uLuR::synapse0x25970a0() {
   return (neuron0x2581980()*1.1304);
}

double NNfunction_ss_uLuR::synapse0x25970e0() {
   return (neuron0x2581cc0()*0.089002);
}

double NNfunction_ss_uLuR::synapse0x2597120() {
   return (neuron0x2582000()*0.67488);
}

double NNfunction_ss_uLuR::synapse0x2597160() {
   return (neuron0x2582340()*0.0684083);
}

double NNfunction_ss_uLuR::synapse0x25971a0() {
   return (neuron0x2582680()*0.0221884);
}

double NNfunction_ss_uLuR::synapse0x2596c30() {
   return (neuron0x25829c0()*-0.051083);
}

double NNfunction_ss_uLuR::synapse0x2596c70() {
   return (neuron0x2582f20()*0.418305);
}

double NNfunction_ss_uLuR::synapse0x25972f0() {
   return (neuron0x2583140()*-0.159979);
}

double NNfunction_ss_uLuR::synapse0x2597330() {
   return (neuron0x2583480()*-0.316882);
}

double NNfunction_ss_uLuR::synapse0x2597370() {
   return (neuron0x25837c0()*0.422221);
}

double NNfunction_ss_uLuR::synapse0x25973b0() {
   return (neuron0x2583b00()*-0.278248);
}

double NNfunction_ss_uLuR::synapse0x25973f0() {
   return (neuron0x2583e40()*0.394283);
}

double NNfunction_ss_uLuR::synapse0x2597430() {
   return (neuron0x2584180()*0.174148);
}

double NNfunction_ss_uLuR::synapse0x25977b0() {
   return (neuron0x257f5c0()*-0.353764);
}

double NNfunction_ss_uLuR::synapse0x25977f0() {
   return (neuron0x257f900()*-0.299175);
}

double NNfunction_ss_uLuR::synapse0x2597830() {
   return (neuron0x257fc40()*0.069974);
}

double NNfunction_ss_uLuR::synapse0x2597870() {
   return (neuron0x257ff80()*-0.113169);
}

double NNfunction_ss_uLuR::synapse0x25978b0() {
   return (neuron0x25802c0()*0.169269);
}

double NNfunction_ss_uLuR::synapse0x25978f0() {
   return (neuron0x2580600()*-0.0890075);
}

double NNfunction_ss_uLuR::synapse0x2597930() {
   return (neuron0x2580940()*0.809701);
}

double NNfunction_ss_uLuR::synapse0x2597970() {
   return (neuron0x2580c80()*-0.28786);
}

double NNfunction_ss_uLuR::synapse0x25979b0() {
   return (neuron0x2580fc0()*-0.624194);
}

double NNfunction_ss_uLuR::synapse0x25979f0() {
   return (neuron0x2581300()*-0.40851);
}

double NNfunction_ss_uLuR::synapse0x2597a30() {
   return (neuron0x2581640()*-0.443908);
}

double NNfunction_ss_uLuR::synapse0x2597a70() {
   return (neuron0x2581980()*0.317588);
}

double NNfunction_ss_uLuR::synapse0x2597ab0() {
   return (neuron0x2581cc0()*-0.0690558);
}

double NNfunction_ss_uLuR::synapse0x2597af0() {
   return (neuron0x2582000()*-0.700418);
}

double NNfunction_ss_uLuR::synapse0x2597b30() {
   return (neuron0x2582340()*-0.611916);
}

double NNfunction_ss_uLuR::synapse0x2597b70() {
   return (neuron0x2582680()*0.985508);
}

double NNfunction_ss_uLuR::synapse0x2597600() {
   return (neuron0x25829c0()*-0.490037);
}

double NNfunction_ss_uLuR::synapse0x2597640() {
   return (neuron0x2582f20()*-0.543437);
}

double NNfunction_ss_uLuR::synapse0x2597cc0() {
   return (neuron0x2583140()*0.180036);
}

double NNfunction_ss_uLuR::synapse0x2597d00() {
   return (neuron0x2583480()*-0.268028);
}

double NNfunction_ss_uLuR::synapse0x2597d40() {
   return (neuron0x25837c0()*-0.496425);
}

double NNfunction_ss_uLuR::synapse0x2597d80() {
   return (neuron0x2583b00()*-0.621976);
}

double NNfunction_ss_uLuR::synapse0x2597dc0() {
   return (neuron0x2583e40()*0.138525);
}

double NNfunction_ss_uLuR::synapse0x2597e00() {
   return (neuron0x2584180()*0.293685);
}

double NNfunction_ss_uLuR::synapse0x2598180() {
   return (neuron0x257f5c0()*-0.010892);
}

double NNfunction_ss_uLuR::synapse0x25981c0() {
   return (neuron0x257f900()*0.0164601);
}

double NNfunction_ss_uLuR::synapse0x2598200() {
   return (neuron0x257fc40()*-0.024576);
}

double NNfunction_ss_uLuR::synapse0x2598240() {
   return (neuron0x257ff80()*-2.80521);
}

double NNfunction_ss_uLuR::synapse0x2598280() {
   return (neuron0x25802c0()*-0.00339103);
}

double NNfunction_ss_uLuR::synapse0x25982c0() {
   return (neuron0x2580600()*0.000838518);
}

double NNfunction_ss_uLuR::synapse0x2598300() {
   return (neuron0x2580940()*0.000317144);
}

double NNfunction_ss_uLuR::synapse0x2598340() {
   return (neuron0x2580c80()*-0.00985775);
}

double NNfunction_ss_uLuR::synapse0x2598380() {
   return (neuron0x2580fc0()*0.0208427);
}

double NNfunction_ss_uLuR::synapse0x25983c0() {
   return (neuron0x2581300()*-0.00948661);
}

double NNfunction_ss_uLuR::synapse0x2598400() {
   return (neuron0x2581640()*0.00860627);
}

double NNfunction_ss_uLuR::synapse0x2598440() {
   return (neuron0x2581980()*-0.237586);
}

double NNfunction_ss_uLuR::synapse0x2598480() {
   return (neuron0x2581cc0()*-0.0633906);
}

double NNfunction_ss_uLuR::synapse0x25984c0() {
   return (neuron0x2582000()*0.0136637);
}

double NNfunction_ss_uLuR::synapse0x2598500() {
   return (neuron0x2582340()*-0.197191);
}

double NNfunction_ss_uLuR::synapse0x2598540() {
   return (neuron0x2582680()*-0.0163135);
}

double NNfunction_ss_uLuR::synapse0x2597fd0() {
   return (neuron0x25829c0()*0.0190471);
}

double NNfunction_ss_uLuR::synapse0x2598010() {
   return (neuron0x2582f20()*-0.0233183);
}

double NNfunction_ss_uLuR::synapse0x2598690() {
   return (neuron0x2583140()*-0.0218214);
}

double NNfunction_ss_uLuR::synapse0x25986d0() {
   return (neuron0x2583480()*0.0128865);
}

double NNfunction_ss_uLuR::synapse0x2598710() {
   return (neuron0x25837c0()*-0.00516212);
}

double NNfunction_ss_uLuR::synapse0x2598750() {
   return (neuron0x2583b00()*-0.00977087);
}

double NNfunction_ss_uLuR::synapse0x2598790() {
   return (neuron0x2583e40()*-0.000646945);
}

double NNfunction_ss_uLuR::synapse0x25987d0() {
   return (neuron0x2584180()*0.000686574);
}

double NNfunction_ss_uLuR::synapse0x2598b50() {
   return (neuron0x257f5c0()*-0.393427);
}

double NNfunction_ss_uLuR::synapse0x2598b90() {
   return (neuron0x257f900()*0.900995);
}

double NNfunction_ss_uLuR::synapse0x2598bd0() {
   return (neuron0x257fc40()*-0.787731);
}

double NNfunction_ss_uLuR::synapse0x2598c10() {
   return (neuron0x257ff80()*0.438666);
}

double NNfunction_ss_uLuR::synapse0x2598c50() {
   return (neuron0x25802c0()*0.56037);
}

double NNfunction_ss_uLuR::synapse0x2598c90() {
   return (neuron0x2580600()*1.0603);
}

double NNfunction_ss_uLuR::synapse0x2598cd0() {
   return (neuron0x2580940()*1.06767);
}

double NNfunction_ss_uLuR::synapse0x2598d10() {
   return (neuron0x2580c80()*-0.103555);
}

double NNfunction_ss_uLuR::synapse0x2598d50() {
   return (neuron0x2580fc0()*-0.632859);
}

double NNfunction_ss_uLuR::synapse0x2598d90() {
   return (neuron0x2581300()*-0.50299);
}

double NNfunction_ss_uLuR::synapse0x2598dd0() {
   return (neuron0x2581640()*-0.736268);
}

double NNfunction_ss_uLuR::synapse0x2598e10() {
   return (neuron0x2581980()*-1.08164);
}

double NNfunction_ss_uLuR::synapse0x2598e50() {
   return (neuron0x2581cc0()*-1.04675);
}

double NNfunction_ss_uLuR::synapse0x2598e90() {
   return (neuron0x2582000()*-0.285214);
}

double NNfunction_ss_uLuR::synapse0x2598ed0() {
   return (neuron0x2582340()*-0.41588);
}

double NNfunction_ss_uLuR::synapse0x2598f10() {
   return (neuron0x2582680()*-0.240425);
}

double NNfunction_ss_uLuR::synapse0x25989a0() {
   return (neuron0x25829c0()*0.182146);
}

double NNfunction_ss_uLuR::synapse0x25989e0() {
   return (neuron0x2582f20()*0.444641);
}

double NNfunction_ss_uLuR::synapse0x2599060() {
   return (neuron0x2583140()*0.112148);
}

double NNfunction_ss_uLuR::synapse0x25990a0() {
   return (neuron0x2583480()*-0.572391);
}

double NNfunction_ss_uLuR::synapse0x25990e0() {
   return (neuron0x25837c0()*0.853082);
}

double NNfunction_ss_uLuR::synapse0x2599120() {
   return (neuron0x2583b00()*-0.389887);
}

double NNfunction_ss_uLuR::synapse0x2599160() {
   return (neuron0x2583e40()*0.416993);
}

double NNfunction_ss_uLuR::synapse0x25991a0() {
   return (neuron0x2584180()*0.138573);
}

double NNfunction_ss_uLuR::synapse0x2599520() {
   return (neuron0x257f5c0()*0.288933);
}

double NNfunction_ss_uLuR::synapse0x2599560() {
   return (neuron0x257f900()*0.147547);
}

double NNfunction_ss_uLuR::synapse0x25995a0() {
   return (neuron0x257fc40()*-0.434625);
}

double NNfunction_ss_uLuR::synapse0x25995e0() {
   return (neuron0x257ff80()*-0.278649);
}

double NNfunction_ss_uLuR::synapse0x2599620() {
   return (neuron0x25802c0()*0.133297);
}

double NNfunction_ss_uLuR::synapse0x2599660() {
   return (neuron0x2580600()*0.42288);
}

double NNfunction_ss_uLuR::synapse0x25996a0() {
   return (neuron0x2580940()*-0.546922);
}

double NNfunction_ss_uLuR::synapse0x25996e0() {
   return (neuron0x2580c80()*0.0484858);
}

double NNfunction_ss_uLuR::synapse0x2599720() {
   return (neuron0x2580fc0()*-0.224412);
}

double NNfunction_ss_uLuR::synapse0x2599760() {
   return (neuron0x2581300()*0.279852);
}

double NNfunction_ss_uLuR::synapse0x25997a0() {
   return (neuron0x2581640()*0.312027);
}

double NNfunction_ss_uLuR::synapse0x25997e0() {
   return (neuron0x2581980()*-1.22416);
}

double NNfunction_ss_uLuR::synapse0x2599820() {
   return (neuron0x2581cc0()*-0.421541);
}

double NNfunction_ss_uLuR::synapse0x2599860() {
   return (neuron0x2582000()*-0.197855);
}

double NNfunction_ss_uLuR::synapse0x25998a0() {
   return (neuron0x2582340()*-0.0177197);
}

double NNfunction_ss_uLuR::synapse0x25998e0() {
   return (neuron0x2582680()*-1.11512);
}

double NNfunction_ss_uLuR::synapse0x2599370() {
   return (neuron0x25829c0()*-0.520114);
}

double NNfunction_ss_uLuR::synapse0x25993b0() {
   return (neuron0x2582f20()*0.445727);
}

double NNfunction_ss_uLuR::synapse0x2599a30() {
   return (neuron0x2583140()*-0.24681);
}

double NNfunction_ss_uLuR::synapse0x2599a70() {
   return (neuron0x2583480()*-0.473895);
}

double NNfunction_ss_uLuR::synapse0x2599ab0() {
   return (neuron0x25837c0()*-0.783366);
}

double NNfunction_ss_uLuR::synapse0x2599af0() {
   return (neuron0x2583b00()*0.738917);
}

double NNfunction_ss_uLuR::synapse0x2599b30() {
   return (neuron0x2583e40()*0.172145);
}

double NNfunction_ss_uLuR::synapse0x2599b70() {
   return (neuron0x2584180()*-0.130595);
}

double NNfunction_ss_uLuR::synapse0x2599ef0() {
   return (neuron0x257f5c0()*0.463877);
}

double NNfunction_ss_uLuR::synapse0x258e4c0() {
   return (neuron0x257f900()*0.257653);
}

double NNfunction_ss_uLuR::synapse0x258e500() {
   return (neuron0x257fc40()*0.0501849);
}

double NNfunction_ss_uLuR::synapse0x258e540() {
   return (neuron0x257ff80()*0.0567701);
}

double NNfunction_ss_uLuR::synapse0x258e790() {
   return (neuron0x25802c0()*0.49871);
}

double NNfunction_ss_uLuR::synapse0x258e7d0() {
   return (neuron0x2580600()*0.394311);
}

double NNfunction_ss_uLuR::synapse0x258e810() {
   return (neuron0x2580940()*0.410722);
}

double NNfunction_ss_uLuR::synapse0x258ea60() {
   return (neuron0x2580c80()*0.894368);
}

double NNfunction_ss_uLuR::synapse0x258eaa0() {
   return (neuron0x2580fc0()*1.1778);
}

double NNfunction_ss_uLuR::synapse0x258ecf0() {
   return (neuron0x2581300()*-0.170615);
}

double NNfunction_ss_uLuR::synapse0x258ed30() {
   return (neuron0x2581640()*0.343944);
}

double NNfunction_ss_uLuR::synapse0x258ed70() {
   return (neuron0x2581980()*-0.987101);
}

double NNfunction_ss_uLuR::synapse0x258efc0() {
   return (neuron0x2581cc0()*0.335649);
}

double NNfunction_ss_uLuR::synapse0x258f000() {
   return (neuron0x2582000()*0.115788);
}

double NNfunction_ss_uLuR::synapse0x258f250() {
   return (neuron0x2582340()*-1.20261);
}

double NNfunction_ss_uLuR::synapse0x258f290() {
   return (neuron0x2582680()*-0.182328);
}

double NNfunction_ss_uLuR::synapse0x2599d40() {
   return (neuron0x25829c0()*-1.18285);
}

double NNfunction_ss_uLuR::synapse0x2599d80() {
   return (neuron0x2582f20()*0.660004);
}

double NNfunction_ss_uLuR::synapse0x258f3e0() {
   return (neuron0x2583140()*-0.307552);
}

double NNfunction_ss_uLuR::synapse0x258f8f0() {
   return (neuron0x2583480()*-0.170746);
}

double NNfunction_ss_uLuR::synapse0x258f930() {
   return (neuron0x25837c0()*-0.347392);
}

double NNfunction_ss_uLuR::synapse0x258f970() {
   return (neuron0x2583b00()*-0.946318);
}

double NNfunction_ss_uLuR::synapse0x258fbc0() {
   return (neuron0x2583e40()*0.411208);
}

double NNfunction_ss_uLuR::synapse0x258fc00() {
   return (neuron0x2584180()*-0.598329);
}

double NNfunction_ss_uLuR::synapse0x258f4b0() {
   return (neuron0x257f5c0()*0.0978868);
}

double NNfunction_ss_uLuR::synapse0x258f4f0() {
   return (neuron0x257f900()*-0.0949055);
}

double NNfunction_ss_uLuR::synapse0x258f530() {
   return (neuron0x257fc40()*-0.692655);
}

double NNfunction_ss_uLuR::synapse0x258f570() {
   return (neuron0x257ff80()*0.115769);
}

double NNfunction_ss_uLuR::synapse0x258fef0() {
   return (neuron0x25802c0()*-0.360181);
}

double NNfunction_ss_uLuR::synapse0x259c240() {
   return (neuron0x2580600()*-0.31036);
}

double NNfunction_ss_uLuR::synapse0x259c280() {
   return (neuron0x2580940()*0.353363);
}

double NNfunction_ss_uLuR::synapse0x259c2c0() {
   return (neuron0x2580c80()*0.478118);
}

double NNfunction_ss_uLuR::synapse0x259c300() {
   return (neuron0x2580fc0()*0.203939);
}

double NNfunction_ss_uLuR::synapse0x259c340() {
   return (neuron0x2581300()*-0.883696);
}

double NNfunction_ss_uLuR::synapse0x259c380() {
   return (neuron0x2581640()*0.652722);
}

double NNfunction_ss_uLuR::synapse0x259c3c0() {
   return (neuron0x2581980()*-0.483336);
}

double NNfunction_ss_uLuR::synapse0x259c400() {
   return (neuron0x2581cc0()*-1.33652);
}

double NNfunction_ss_uLuR::synapse0x259c440() {
   return (neuron0x2582000()*0.484341);
}

double NNfunction_ss_uLuR::synapse0x259c480() {
   return (neuron0x2582340()*-0.26018);
}

double NNfunction_ss_uLuR::synapse0x259c4c0() {
   return (neuron0x2582680()*-0.862544);
}

double NNfunction_ss_uLuR::synapse0x258fdd0() {
   return (neuron0x25829c0()*0.321613);
}

double NNfunction_ss_uLuR::synapse0x258fe10() {
   return (neuron0x2582f20()*-0.683416);
}

double NNfunction_ss_uLuR::synapse0x259c610() {
   return (neuron0x2583140()*-0.308931);
}

double NNfunction_ss_uLuR::synapse0x259c650() {
   return (neuron0x2583480()*0.297237);
}

double NNfunction_ss_uLuR::synapse0x259c690() {
   return (neuron0x25837c0()*-0.164078);
}

double NNfunction_ss_uLuR::synapse0x259c6d0() {
   return (neuron0x2583b00()*-0.458809);
}

double NNfunction_ss_uLuR::synapse0x259c710() {
   return (neuron0x2583e40()*-0.116955);
}

double NNfunction_ss_uLuR::synapse0x259c750() {
   return (neuron0x2584180()*0.192656);
}

double NNfunction_ss_uLuR::synapse0x259cad0() {
   return (neuron0x257f5c0()*0.452122);
}

double NNfunction_ss_uLuR::synapse0x259cb10() {
   return (neuron0x257f900()*0.180576);
}

double NNfunction_ss_uLuR::synapse0x259cb50() {
   return (neuron0x257fc40()*-0.289106);
}

double NNfunction_ss_uLuR::synapse0x259cb90() {
   return (neuron0x257ff80()*2.4796);
}

double NNfunction_ss_uLuR::synapse0x259cbd0() {
   return (neuron0x25802c0()*-0.282375);
}

double NNfunction_ss_uLuR::synapse0x259cc10() {
   return (neuron0x2580600()*0.146642);
}

double NNfunction_ss_uLuR::synapse0x259cc50() {
   return (neuron0x2580940()*-0.201623);
}

double NNfunction_ss_uLuR::synapse0x259cc90() {
   return (neuron0x2580c80()*0.356917);
}

double NNfunction_ss_uLuR::synapse0x259ccd0() {
   return (neuron0x2580fc0()*0.0106949);
}

double NNfunction_ss_uLuR::synapse0x259cd10() {
   return (neuron0x2581300()*-0.208518);
}

double NNfunction_ss_uLuR::synapse0x259cd50() {
   return (neuron0x2581640()*0.497436);
}

double NNfunction_ss_uLuR::synapse0x259cd90() {
   return (neuron0x2581980()*0.387272);
}

double NNfunction_ss_uLuR::synapse0x259cdd0() {
   return (neuron0x2581cc0()*-0.141465);
}

double NNfunction_ss_uLuR::synapse0x259ce10() {
   return (neuron0x2582000()*0.315128);
}

double NNfunction_ss_uLuR::synapse0x259ce50() {
   return (neuron0x2582340()*0.535209);
}

double NNfunction_ss_uLuR::synapse0x259ce90() {
   return (neuron0x2582680()*0.0176121);
}

double NNfunction_ss_uLuR::synapse0x259c920() {
   return (neuron0x25829c0()*-0.0477139);
}

double NNfunction_ss_uLuR::synapse0x259c960() {
   return (neuron0x2582f20()*-0.263532);
}

double NNfunction_ss_uLuR::synapse0x259cfe0() {
   return (neuron0x2583140()*0.144804);
}

double NNfunction_ss_uLuR::synapse0x259d020() {
   return (neuron0x2583480()*0.0425423);
}

double NNfunction_ss_uLuR::synapse0x259d060() {
   return (neuron0x25837c0()*0.2185);
}

double NNfunction_ss_uLuR::synapse0x259d0a0() {
   return (neuron0x2583b00()*0.036798);
}

double NNfunction_ss_uLuR::synapse0x259d0e0() {
   return (neuron0x2583e40()*-0.0796342);
}

double NNfunction_ss_uLuR::synapse0x259d120() {
   return (neuron0x2584180()*-0.0162473);
}

double NNfunction_ss_uLuR::synapse0x259d4a0() {
   return (neuron0x257f5c0()*0.00262266);
}

double NNfunction_ss_uLuR::synapse0x259d4e0() {
   return (neuron0x257f900()*0.0080273);
}

double NNfunction_ss_uLuR::synapse0x259d520() {
   return (neuron0x257fc40()*0.00623396);
}

double NNfunction_ss_uLuR::synapse0x259d560() {
   return (neuron0x257ff80()*0.19127);
}

double NNfunction_ss_uLuR::synapse0x259d5a0() {
   return (neuron0x25802c0()*0.0211004);
}

double NNfunction_ss_uLuR::synapse0x259d5e0() {
   return (neuron0x2580600()*0.0572306);
}

double NNfunction_ss_uLuR::synapse0x259d620() {
   return (neuron0x2580940()*0.0128187);
}

double NNfunction_ss_uLuR::synapse0x259d660() {
   return (neuron0x2580c80()*-0.0116029);
}

double NNfunction_ss_uLuR::synapse0x259d6a0() {
   return (neuron0x2580fc0()*0.0192554);
}

double NNfunction_ss_uLuR::synapse0x259d6e0() {
   return (neuron0x2581300()*-0.0340455);
}

double NNfunction_ss_uLuR::synapse0x259d720() {
   return (neuron0x2581640()*0.00155524);
}

double NNfunction_ss_uLuR::synapse0x259d760() {
   return (neuron0x2581980()*-0.0871278);
}

double NNfunction_ss_uLuR::synapse0x259d7a0() {
   return (neuron0x2581cc0()*0.0144427);
}

double NNfunction_ss_uLuR::synapse0x259d7e0() {
   return (neuron0x2582000()*-0.0187697);
}

double NNfunction_ss_uLuR::synapse0x259d820() {
   return (neuron0x2582340()*-2.44538);
}

double NNfunction_ss_uLuR::synapse0x259d860() {
   return (neuron0x2582680()*0.0357937);
}

double NNfunction_ss_uLuR::synapse0x259d2f0() {
   return (neuron0x25829c0()*0.0053173);
}

double NNfunction_ss_uLuR::synapse0x259d330() {
   return (neuron0x2582f20()*0.00191133);
}

double NNfunction_ss_uLuR::synapse0x259d9b0() {
   return (neuron0x2583140()*0.0115232);
}

double NNfunction_ss_uLuR::synapse0x259d9f0() {
   return (neuron0x2583480()*0.0113658);
}

double NNfunction_ss_uLuR::synapse0x259da30() {
   return (neuron0x25837c0()*0.00944143);
}

double NNfunction_ss_uLuR::synapse0x259da70() {
   return (neuron0x2583b00()*-0.00824902);
}

double NNfunction_ss_uLuR::synapse0x259dab0() {
   return (neuron0x2583e40()*0.00557059);
}

double NNfunction_ss_uLuR::synapse0x259daf0() {
   return (neuron0x2584180()*-0.0131362);
}

double NNfunction_ss_uLuR::synapse0x259de70() {
   return (neuron0x257f5c0()*-0.533702);
}

double NNfunction_ss_uLuR::synapse0x259deb0() {
   return (neuron0x257f900()*0.642626);
}

double NNfunction_ss_uLuR::synapse0x259def0() {
   return (neuron0x257fc40()*-0.495613);
}

double NNfunction_ss_uLuR::synapse0x259df30() {
   return (neuron0x257ff80()*0.279487);
}

double NNfunction_ss_uLuR::synapse0x259df70() {
   return (neuron0x25802c0()*-0.224104);
}

double NNfunction_ss_uLuR::synapse0x259dfb0() {
   return (neuron0x2580600()*-0.0903171);
}

double NNfunction_ss_uLuR::synapse0x259dff0() {
   return (neuron0x2580940()*-0.777689);
}

double NNfunction_ss_uLuR::synapse0x259e030() {
   return (neuron0x2580c80()*0.154278);
}

double NNfunction_ss_uLuR::synapse0x259e070() {
   return (neuron0x2580fc0()*0.0593092);
}

double NNfunction_ss_uLuR::synapse0x259e0b0() {
   return (neuron0x2581300()*0.74411);
}

double NNfunction_ss_uLuR::synapse0x259e0f0() {
   return (neuron0x2581640()*0.247012);
}

double NNfunction_ss_uLuR::synapse0x259e130() {
   return (neuron0x2581980()*-0.875804);
}

double NNfunction_ss_uLuR::synapse0x259e170() {
   return (neuron0x2581cc0()*-0.842024);
}

double NNfunction_ss_uLuR::synapse0x259e1b0() {
   return (neuron0x2582000()*-0.753347);
}

double NNfunction_ss_uLuR::synapse0x259e1f0() {
   return (neuron0x2582340()*0.193828);
}

double NNfunction_ss_uLuR::synapse0x259e230() {
   return (neuron0x2582680()*-0.273596);
}

double NNfunction_ss_uLuR::synapse0x259dcc0() {
   return (neuron0x25829c0()*0.295073);
}

double NNfunction_ss_uLuR::synapse0x259dd00() {
   return (neuron0x2582f20()*0.375673);
}

double NNfunction_ss_uLuR::synapse0x259e380() {
   return (neuron0x2583140()*0.569777);
}

double NNfunction_ss_uLuR::synapse0x259e3c0() {
   return (neuron0x2583480()*0.245823);
}

double NNfunction_ss_uLuR::synapse0x259e400() {
   return (neuron0x25837c0()*0.448004);
}

double NNfunction_ss_uLuR::synapse0x259e440() {
   return (neuron0x2583b00()*0.515943);
}

double NNfunction_ss_uLuR::synapse0x259e480() {
   return (neuron0x2583e40()*0.195837);
}

double NNfunction_ss_uLuR::synapse0x259e4c0() {
   return (neuron0x2584180()*0.22839);
}

double NNfunction_ss_uLuR::synapse0x259e840() {
   return (neuron0x257f5c0()*-0.0212792);
}

double NNfunction_ss_uLuR::synapse0x259e880() {
   return (neuron0x257f900()*-0.00632329);
}

double NNfunction_ss_uLuR::synapse0x259e8c0() {
   return (neuron0x257fc40()*0.00469863);
}

double NNfunction_ss_uLuR::synapse0x259e900() {
   return (neuron0x257ff80()*0.536662);
}

double NNfunction_ss_uLuR::synapse0x259e940() {
   return (neuron0x25802c0()*0.00510951);
}

double NNfunction_ss_uLuR::synapse0x259e980() {
   return (neuron0x2580600()*-0.0300074);
}

double NNfunction_ss_uLuR::synapse0x259e9c0() {
   return (neuron0x2580940()*0.00252895);
}

double NNfunction_ss_uLuR::synapse0x259ea00() {
   return (neuron0x2580c80()*0.0114134);
}

double NNfunction_ss_uLuR::synapse0x259ea40() {
   return (neuron0x2580fc0()*0.0140626);
}

double NNfunction_ss_uLuR::synapse0x259ea80() {
   return (neuron0x2581300()*0.0318286);
}

double NNfunction_ss_uLuR::synapse0x259eac0() {
   return (neuron0x2581640()*0.00497939);
}

double NNfunction_ss_uLuR::synapse0x259eb00() {
   return (neuron0x2581980()*0.400727);
}

double NNfunction_ss_uLuR::synapse0x259eb40() {
   return (neuron0x2581cc0()*0.00970866);
}

double NNfunction_ss_uLuR::synapse0x259eb80() {
   return (neuron0x2582000()*-0.00694641);
}

double NNfunction_ss_uLuR::synapse0x259ebc0() {
   return (neuron0x2582340()*0.414688);
}

double NNfunction_ss_uLuR::synapse0x259ec00() {
   return (neuron0x2582680()*-0.0254866);
}

double NNfunction_ss_uLuR::synapse0x259e690() {
   return (neuron0x25829c0()*-0.0130983);
}

double NNfunction_ss_uLuR::synapse0x259e6d0() {
   return (neuron0x2582f20()*-0.0218207);
}

double NNfunction_ss_uLuR::synapse0x259ed50() {
   return (neuron0x2583140()*-0.00210376);
}

double NNfunction_ss_uLuR::synapse0x259ed90() {
   return (neuron0x2583480()*-0.000845742);
}

double NNfunction_ss_uLuR::synapse0x259edd0() {
   return (neuron0x25837c0()*-0.0123053);
}

double NNfunction_ss_uLuR::synapse0x259ee10() {
   return (neuron0x2583b00()*-0.0116115);
}

double NNfunction_ss_uLuR::synapse0x259ee50() {
   return (neuron0x2583e40()*0.00308321);
}

double NNfunction_ss_uLuR::synapse0x259ee90() {
   return (neuron0x2584180()*0.0125993);
}

double NNfunction_ss_uLuR::synapse0x259f210() {
   return (neuron0x257f5c0()*0.524349);
}

double NNfunction_ss_uLuR::synapse0x259f250() {
   return (neuron0x257f900()*-0.118355);
}

double NNfunction_ss_uLuR::synapse0x259f290() {
   return (neuron0x257fc40()*0.116865);
}

double NNfunction_ss_uLuR::synapse0x259f2d0() {
   return (neuron0x257ff80()*0.0811034);
}

double NNfunction_ss_uLuR::synapse0x259f310() {
   return (neuron0x25802c0()*0.157692);
}

double NNfunction_ss_uLuR::synapse0x259f350() {
   return (neuron0x2580600()*-0.272916);
}

double NNfunction_ss_uLuR::synapse0x259f390() {
   return (neuron0x2580940()*0.0852609);
}

double NNfunction_ss_uLuR::synapse0x259f3d0() {
   return (neuron0x2580c80()*-1.06847);
}

double NNfunction_ss_uLuR::synapse0x259f410() {
   return (neuron0x2580fc0()*0.378143);
}

double NNfunction_ss_uLuR::synapse0x259f450() {
   return (neuron0x2581300()*-0.147562);
}

double NNfunction_ss_uLuR::synapse0x259f490() {
   return (neuron0x2581640()*0.0820944);
}

double NNfunction_ss_uLuR::synapse0x259f4d0() {
   return (neuron0x2581980()*-0.321836);
}

double NNfunction_ss_uLuR::synapse0x259f510() {
   return (neuron0x2581cc0()*-0.342046);
}

double NNfunction_ss_uLuR::synapse0x259f550() {
   return (neuron0x2582000()*-0.272852);
}

double NNfunction_ss_uLuR::synapse0x259f590() {
   return (neuron0x2582340()*-0.144222);
}

double NNfunction_ss_uLuR::synapse0x259f5d0() {
   return (neuron0x2582680()*-0.0472218);
}

double NNfunction_ss_uLuR::synapse0x259f060() {
   return (neuron0x25829c0()*-0.588885);
}

double NNfunction_ss_uLuR::synapse0x259f0a0() {
   return (neuron0x2582f20()*0.0847112);
}

double NNfunction_ss_uLuR::synapse0x259f720() {
   return (neuron0x2583140()*-0.14934);
}

double NNfunction_ss_uLuR::synapse0x259f760() {
   return (neuron0x2583480()*0.186915);
}

double NNfunction_ss_uLuR::synapse0x259f7a0() {
   return (neuron0x25837c0()*0.323035);
}

double NNfunction_ss_uLuR::synapse0x259f7e0() {
   return (neuron0x2583b00()*-0.0333401);
}

double NNfunction_ss_uLuR::synapse0x259f820() {
   return (neuron0x2583e40()*0.308205);
}

double NNfunction_ss_uLuR::synapse0x259f860() {
   return (neuron0x2584180()*-0.290351);
}

double NNfunction_ss_uLuR::synapse0x259fbe0() {
   return (neuron0x257f5c0()*0.0294075);
}

double NNfunction_ss_uLuR::synapse0x259fc20() {
   return (neuron0x257f900()*0.0764086);
}

double NNfunction_ss_uLuR::synapse0x259fc60() {
   return (neuron0x257fc40()*0.274381);
}

double NNfunction_ss_uLuR::synapse0x259fca0() {
   return (neuron0x257ff80()*-0.278553);
}

double NNfunction_ss_uLuR::synapse0x259fce0() {
   return (neuron0x25802c0()*-0.509355);
}

double NNfunction_ss_uLuR::synapse0x259fd20() {
   return (neuron0x2580600()*-0.343993);
}

double NNfunction_ss_uLuR::synapse0x259fd60() {
   return (neuron0x2580940()*0.0560201);
}

double NNfunction_ss_uLuR::synapse0x259fda0() {
   return (neuron0x2580c80()*-1.21349);
}

double NNfunction_ss_uLuR::synapse0x259fde0() {
   return (neuron0x2580fc0()*0.462646);
}

double NNfunction_ss_uLuR::synapse0x259fe20() {
   return (neuron0x2581300()*0.216682);
}

double NNfunction_ss_uLuR::synapse0x259fe60() {
   return (neuron0x2581640()*0.356054);
}

double NNfunction_ss_uLuR::synapse0x259fea0() {
   return (neuron0x2581980()*0.0239318);
}

double NNfunction_ss_uLuR::synapse0x259fee0() {
   return (neuron0x2581cc0()*-0.249762);
}

double NNfunction_ss_uLuR::synapse0x259ff20() {
   return (neuron0x2582000()*0.246928);
}

double NNfunction_ss_uLuR::synapse0x259ff60() {
   return (neuron0x2582340()*-0.249898);
}

double NNfunction_ss_uLuR::synapse0x259ffa0() {
   return (neuron0x2582680()*1.15932);
}

double NNfunction_ss_uLuR::synapse0x259fa30() {
   return (neuron0x25829c0()*-0.0365409);
}

double NNfunction_ss_uLuR::synapse0x259fa70() {
   return (neuron0x2582f20()*1.31068);
}

double NNfunction_ss_uLuR::synapse0x25a00f0() {
   return (neuron0x2583140()*0.869916);
}

double NNfunction_ss_uLuR::synapse0x25a0130() {
   return (neuron0x2583480()*0.855523);
}

double NNfunction_ss_uLuR::synapse0x25a0170() {
   return (neuron0x25837c0()*-1.35717);
}

double NNfunction_ss_uLuR::synapse0x25a01b0() {
   return (neuron0x2583b00()*-0.144684);
}

double NNfunction_ss_uLuR::synapse0x25a01f0() {
   return (neuron0x2583e40()*0.856763);
}

double NNfunction_ss_uLuR::synapse0x25a0230() {
   return (neuron0x2584180()*0.339132);
}

double NNfunction_ss_uLuR::synapse0x25a05b0() {
   return (neuron0x257f5c0()*0.133919);
}

double NNfunction_ss_uLuR::synapse0x25a05f0() {
   return (neuron0x257f900()*0.758818);
}

double NNfunction_ss_uLuR::synapse0x25a0630() {
   return (neuron0x257fc40()*0.219065);
}

double NNfunction_ss_uLuR::synapse0x25a0670() {
   return (neuron0x257ff80()*1.1376);
}

double NNfunction_ss_uLuR::synapse0x25a06b0() {
   return (neuron0x25802c0()*0.127267);
}

double NNfunction_ss_uLuR::synapse0x25a06f0() {
   return (neuron0x2580600()*0.216066);
}

double NNfunction_ss_uLuR::synapse0x25a0730() {
   return (neuron0x2580940()*1.39928);
}

double NNfunction_ss_uLuR::synapse0x25a0770() {
   return (neuron0x2580c80()*0.0413665);
}

double NNfunction_ss_uLuR::synapse0x25a07b0() {
   return (neuron0x2580fc0()*0.227957);
}

double NNfunction_ss_uLuR::synapse0x25a07f0() {
   return (neuron0x2581300()*-0.533714);
}

double NNfunction_ss_uLuR::synapse0x25a0830() {
   return (neuron0x2581640()*-0.505038);
}

double NNfunction_ss_uLuR::synapse0x25a0870() {
   return (neuron0x2581980()*-0.17308);
}

double NNfunction_ss_uLuR::synapse0x25a08b0() {
   return (neuron0x2581cc0()*0.0326818);
}

double NNfunction_ss_uLuR::synapse0x25a08f0() {
   return (neuron0x2582000()*0.485513);
}

double NNfunction_ss_uLuR::synapse0x25a0930() {
   return (neuron0x2582340()*0.436199);
}

double NNfunction_ss_uLuR::synapse0x25a0970() {
   return (neuron0x2582680()*0.888649);
}

double NNfunction_ss_uLuR::synapse0x25a0400() {
   return (neuron0x25829c0()*0.18112);
}

double NNfunction_ss_uLuR::synapse0x25a0440() {
   return (neuron0x2582f20()*0.286524);
}

double NNfunction_ss_uLuR::synapse0x25a0ac0() {
   return (neuron0x2583140()*0.0780392);
}

double NNfunction_ss_uLuR::synapse0x25a0b00() {
   return (neuron0x2583480()*0.270092);
}

double NNfunction_ss_uLuR::synapse0x25a0b40() {
   return (neuron0x25837c0()*0.387668);
}

double NNfunction_ss_uLuR::synapse0x25a0b80() {
   return (neuron0x2583b00()*0.472529);
}

double NNfunction_ss_uLuR::synapse0x25a0bc0() {
   return (neuron0x2583e40()*0.563732);
}

double NNfunction_ss_uLuR::synapse0x25a0c00() {
   return (neuron0x2584180()*0.0807565);
}

double NNfunction_ss_uLuR::synapse0x25896b0() {
   return (neuron0x257f5c0()*-0.0528293);
}

double NNfunction_ss_uLuR::synapse0x25896f0() {
   return (neuron0x257f900()*-0.00638727);
}

double NNfunction_ss_uLuR::synapse0x2589730() {
   return (neuron0x257fc40()*0.0712095);
}

double NNfunction_ss_uLuR::synapse0x2589770() {
   return (neuron0x257ff80()*-0.0684602);
}

double NNfunction_ss_uLuR::synapse0x25897b0() {
   return (neuron0x25802c0()*0.0416757);
}

double NNfunction_ss_uLuR::synapse0x25897f0() {
   return (neuron0x2580600()*0.0150993);
}

double NNfunction_ss_uLuR::synapse0x2589830() {
   return (neuron0x2580940()*0.0354583);
}

double NNfunction_ss_uLuR::synapse0x2589870() {
   return (neuron0x2580c80()*-0.0362399);
}

double NNfunction_ss_uLuR::synapse0x25a1390() {
   return (neuron0x2580fc0()*-0.0155378);
}

double NNfunction_ss_uLuR::synapse0x25a13d0() {
   return (neuron0x2581300()*0.0110091);
}

double NNfunction_ss_uLuR::synapse0x25a1410() {
   return (neuron0x2581640()*-0.0455997);
}

double NNfunction_ss_uLuR::synapse0x25a1450() {
   return (neuron0x2581980()*-0.0695318);
}

double NNfunction_ss_uLuR::synapse0x25a1490() {
   return (neuron0x2581cc0()*-0.0138883);
}

double NNfunction_ss_uLuR::synapse0x25a14d0() {
   return (neuron0x2582000()*-0.0107645);
}

double NNfunction_ss_uLuR::synapse0x25a1510() {
   return (neuron0x2582340()*-2.37962);
}

double NNfunction_ss_uLuR::synapse0x25a1550() {
   return (neuron0x2582680()*-0.0438742);
}

double NNfunction_ss_uLuR::synapse0x25a0dd0() {
   return (neuron0x25829c0()*0.000297);
}

double NNfunction_ss_uLuR::synapse0x25a0e10() {
   return (neuron0x2582f20()*0.0229747);
}

double NNfunction_ss_uLuR::synapse0x25a16a0() {
   return (neuron0x2583140()*-0.0645676);
}

double NNfunction_ss_uLuR::synapse0x25a16e0() {
   return (neuron0x2583480()*-0.0188481);
}

double NNfunction_ss_uLuR::synapse0x25a1720() {
   return (neuron0x25837c0()*-0.0384226);
}

double NNfunction_ss_uLuR::synapse0x25a1760() {
   return (neuron0x2583b00()*0.00838195);
}

double NNfunction_ss_uLuR::synapse0x25a17a0() {
   return (neuron0x2583e40()*0.0278817);
}

double NNfunction_ss_uLuR::synapse0x25a17e0() {
   return (neuron0x2584180()*0.0102814);
}

double NNfunction_ss_uLuR::synapse0x25a1b60() {
   return (neuron0x257f5c0()*-0.347104);
}

double NNfunction_ss_uLuR::synapse0x25a1ba0() {
   return (neuron0x257f900()*-0.0585314);
}

double NNfunction_ss_uLuR::synapse0x25a1be0() {
   return (neuron0x257fc40()*0.950594);
}

double NNfunction_ss_uLuR::synapse0x25a1c20() {
   return (neuron0x257ff80()*-0.491029);
}

double NNfunction_ss_uLuR::synapse0x25a1c60() {
   return (neuron0x25802c0()*0.674969);
}

double NNfunction_ss_uLuR::synapse0x25a1ca0() {
   return (neuron0x2580600()*0.815603);
}

double NNfunction_ss_uLuR::synapse0x25a1ce0() {
   return (neuron0x2580940()*-0.499299);
}

double NNfunction_ss_uLuR::synapse0x25a1d20() {
   return (neuron0x2580c80()*0.355887);
}

double NNfunction_ss_uLuR::synapse0x25a1d60() {
   return (neuron0x2580fc0()*-0.22094);
}

double NNfunction_ss_uLuR::synapse0x25a1da0() {
   return (neuron0x2581300()*0.305267);
}

double NNfunction_ss_uLuR::synapse0x25a1de0() {
   return (neuron0x2581640()*0.109594);
}

double NNfunction_ss_uLuR::synapse0x25a1e20() {
   return (neuron0x2581980()*1.37181);
}

double NNfunction_ss_uLuR::synapse0x25a1e60() {
   return (neuron0x2581cc0()*0.0962671);
}

double NNfunction_ss_uLuR::synapse0x25a1ea0() {
   return (neuron0x2582000()*-0.301783);
}

double NNfunction_ss_uLuR::synapse0x25a1ee0() {
   return (neuron0x2582340()*0.0294016);
}

double NNfunction_ss_uLuR::synapse0x25a1f20() {
   return (neuron0x2582680()*-0.184936);
}

double NNfunction_ss_uLuR::synapse0x25a19b0() {
   return (neuron0x25829c0()*0.12784);
}

double NNfunction_ss_uLuR::synapse0x25a19f0() {
   return (neuron0x2582f20()*-1.41604);
}

double NNfunction_ss_uLuR::synapse0x25a2070() {
   return (neuron0x2583140()*0.0883758);
}

double NNfunction_ss_uLuR::synapse0x25a20b0() {
   return (neuron0x2583480()*0.467544);
}

double NNfunction_ss_uLuR::synapse0x25a20f0() {
   return (neuron0x25837c0()*0.309239);
}

double NNfunction_ss_uLuR::synapse0x25a2130() {
   return (neuron0x2583b00()*-0.3248);
}

double NNfunction_ss_uLuR::synapse0x25a2170() {
   return (neuron0x2583e40()*0.297003);
}

double NNfunction_ss_uLuR::synapse0x25a21b0() {
   return (neuron0x2584180()*0.0272182);
}

double NNfunction_ss_uLuR::synapse0x25a2530() {
   return (neuron0x257f5c0()*0.0156827);
}

double NNfunction_ss_uLuR::synapse0x25a2570() {
   return (neuron0x257f900()*-0.0149962);
}

double NNfunction_ss_uLuR::synapse0x25a25b0() {
   return (neuron0x257fc40()*-0.0421831);
}

double NNfunction_ss_uLuR::synapse0x25a25f0() {
   return (neuron0x257ff80()*-7.70458);
}

double NNfunction_ss_uLuR::synapse0x25a2630() {
   return (neuron0x25802c0()*-0.0118725);
}

double NNfunction_ss_uLuR::synapse0x25a2670() {
   return (neuron0x2580600()*0.00871924);
}

double NNfunction_ss_uLuR::synapse0x25a26b0() {
   return (neuron0x2580940()*-0.00366597);
}

double NNfunction_ss_uLuR::synapse0x25a26f0() {
   return (neuron0x2580c80()*-0.00226683);
}

double NNfunction_ss_uLuR::synapse0x25a2730() {
   return (neuron0x2580fc0()*-0.0408169);
}

double NNfunction_ss_uLuR::synapse0x25a2770() {
   return (neuron0x2581300()*-0.018884);
}

double NNfunction_ss_uLuR::synapse0x25a27b0() {
   return (neuron0x2581640()*-0.031273);
}

double NNfunction_ss_uLuR::synapse0x25a27f0() {
   return (neuron0x2581980()*0.00922716);
}

double NNfunction_ss_uLuR::synapse0x25a2830() {
   return (neuron0x2581cc0()*-0.0330533);
}

double NNfunction_ss_uLuR::synapse0x25a2870() {
   return (neuron0x2582000()*0.0360622);
}

double NNfunction_ss_uLuR::synapse0x25a28b0() {
   return (neuron0x2582340()*0.0328513);
}

double NNfunction_ss_uLuR::synapse0x25a28f0() {
   return (neuron0x2582680()*-0.0363796);
}

double NNfunction_ss_uLuR::synapse0x25a2380() {
   return (neuron0x25829c0()*0.00660308);
}

double NNfunction_ss_uLuR::synapse0x25a23c0() {
   return (neuron0x2582f20()*-0.00168782);
}

double NNfunction_ss_uLuR::synapse0x2592ef0() {
   return (neuron0x2583140()*-0.020467);
}

double NNfunction_ss_uLuR::synapse0x2592f30() {
   return (neuron0x2583480()*-0.020971);
}

double NNfunction_ss_uLuR::synapse0x2592f70() {
   return (neuron0x25837c0()*0.000138965);
}

double NNfunction_ss_uLuR::synapse0x2592fb0() {
   return (neuron0x2583b00()*0.0149703);
}

double NNfunction_ss_uLuR::synapse0x2592ff0() {
   return (neuron0x2583e40()*0.0183588);
}

double NNfunction_ss_uLuR::synapse0x2593030() {
   return (neuron0x2584180()*-0.0227573);
}

double NNfunction_ss_uLuR::synapse0x25933b0() {
   return (neuron0x257f5c0()*-0.0874694);
}

double NNfunction_ss_uLuR::synapse0x25933f0() {
   return (neuron0x257f900()*-0.433163);
}

double NNfunction_ss_uLuR::synapse0x2593430() {
   return (neuron0x257fc40()*0.603984);
}

double NNfunction_ss_uLuR::synapse0x2593470() {
   return (neuron0x257ff80()*-0.56224);
}

double NNfunction_ss_uLuR::synapse0x25934b0() {
   return (neuron0x25802c0()*-0.123468);
}

double NNfunction_ss_uLuR::synapse0x25934f0() {
   return (neuron0x2580600()*-0.0508794);
}

double NNfunction_ss_uLuR::synapse0x2593530() {
   return (neuron0x2580940()*0.418389);
}

double NNfunction_ss_uLuR::synapse0x2593570() {
   return (neuron0x2580c80()*0.595159);
}

double NNfunction_ss_uLuR::synapse0x25935b0() {
   return (neuron0x2580fc0()*0.29914);
}

double NNfunction_ss_uLuR::synapse0x25935f0() {
   return (neuron0x2581300()*0.155288);
}

double NNfunction_ss_uLuR::synapse0x2593630() {
   return (neuron0x2581640()*0.208849);
}

double NNfunction_ss_uLuR::synapse0x2593670() {
   return (neuron0x2581980()*-2.32043);
}

double NNfunction_ss_uLuR::synapse0x25936b0() {
   return (neuron0x2581cc0()*0.52727);
}

double NNfunction_ss_uLuR::synapse0x25936f0() {
   return (neuron0x2582000()*0.513945);
}

double NNfunction_ss_uLuR::synapse0x2593730() {
   return (neuron0x2582340()*-0.499356);
}

double NNfunction_ss_uLuR::synapse0x2593770() {
   return (neuron0x2582680()*0.392536);
}

double NNfunction_ss_uLuR::synapse0x2593200() {
   return (neuron0x25829c0()*0.040091);
}

double NNfunction_ss_uLuR::synapse0x2593240() {
   return (neuron0x2582f20()*-0.0769921);
}

double NNfunction_ss_uLuR::synapse0x25938c0() {
   return (neuron0x2583140()*-0.285672);
}

double NNfunction_ss_uLuR::synapse0x2593900() {
   return (neuron0x2583480()*0.000136179);
}

double NNfunction_ss_uLuR::synapse0x2593940() {
   return (neuron0x25837c0()*0.150488);
}

double NNfunction_ss_uLuR::synapse0x2593980() {
   return (neuron0x2583b00()*-0.282158);
}

double NNfunction_ss_uLuR::synapse0x25939c0() {
   return (neuron0x2583e40()*0.102001);
}

double NNfunction_ss_uLuR::synapse0x2593a00() {
   return (neuron0x2584180()*0.284538);
}

double NNfunction_ss_uLuR::synapse0x2593d80() {
   return (neuron0x257f5c0()*0.000884324);
}

double NNfunction_ss_uLuR::synapse0x2593dc0() {
   return (neuron0x257f900()*-0.00403727);
}

double NNfunction_ss_uLuR::synapse0x2593e00() {
   return (neuron0x257fc40()*-0.044711);
}

double NNfunction_ss_uLuR::synapse0x2593e40() {
   return (neuron0x257ff80()*2.87815);
}

double NNfunction_ss_uLuR::synapse0x2593e80() {
   return (neuron0x25802c0()*-0.0159538);
}

double NNfunction_ss_uLuR::synapse0x2593ec0() {
   return (neuron0x2580600()*0.00820664);
}

double NNfunction_ss_uLuR::synapse0x2593f00() {
   return (neuron0x2580940()*1.67314e-06);
}

double NNfunction_ss_uLuR::synapse0x2593f40() {
   return (neuron0x2580c80()*-0.0141676);
}

double NNfunction_ss_uLuR::synapse0x2593f80() {
   return (neuron0x2580fc0()*-0.00516907);
}

double NNfunction_ss_uLuR::synapse0x2593fc0() {
   return (neuron0x2581300()*-0.0203499);
}

double NNfunction_ss_uLuR::synapse0x2594000() {
   return (neuron0x2581640()*-0.0335967);
}

double NNfunction_ss_uLuR::synapse0x2594040() {
   return (neuron0x2581980()*-0.147336);
}

double NNfunction_ss_uLuR::synapse0x2594080() {
   return (neuron0x2581cc0()*-0.0810904);
}

double NNfunction_ss_uLuR::synapse0x25940c0() {
   return (neuron0x2582000()*0.0237723);
}

double NNfunction_ss_uLuR::synapse0x2594100() {
   return (neuron0x2582340()*-0.066646);
}

double NNfunction_ss_uLuR::synapse0x2594140() {
   return (neuron0x2582680()*-0.0123846);
}

double NNfunction_ss_uLuR::synapse0x2593bd0() {
   return (neuron0x25829c0()*0.0243292);
}

double NNfunction_ss_uLuR::synapse0x2593c10() {
   return (neuron0x2582f20()*-0.0268886);
}

double NNfunction_ss_uLuR::synapse0x2594290() {
   return (neuron0x2583140()*-0.0240731);
}

double NNfunction_ss_uLuR::synapse0x25942d0() {
   return (neuron0x2583480()*-0.00843465);
}

double NNfunction_ss_uLuR::synapse0x2594310() {
   return (neuron0x25837c0()*-0.0100038);
}

double NNfunction_ss_uLuR::synapse0x2594350() {
   return (neuron0x2583b00()*-0.00233016);
}

double NNfunction_ss_uLuR::synapse0x2594390() {
   return (neuron0x2583e40()*0.0209167);
}

double NNfunction_ss_uLuR::synapse0x25943d0() {
   return (neuron0x2584180()*-0.0183442);
}

double NNfunction_ss_uLuR::synapse0x2594750() {
   return (neuron0x257f5c0()*0.244506);
}

double NNfunction_ss_uLuR::synapse0x2594790() {
   return (neuron0x257f900()*0.105936);
}

double NNfunction_ss_uLuR::synapse0x25947d0() {
   return (neuron0x257fc40()*-0.270263);
}

double NNfunction_ss_uLuR::synapse0x2594810() {
   return (neuron0x257ff80()*-1.19898);
}

double NNfunction_ss_uLuR::synapse0x2594850() {
   return (neuron0x25802c0()*-0.260139);
}

double NNfunction_ss_uLuR::synapse0x2594890() {
   return (neuron0x2580600()*-0.0385734);
}

double NNfunction_ss_uLuR::synapse0x25948d0() {
   return (neuron0x2580940()*0.174798);
}

double NNfunction_ss_uLuR::synapse0x2594910() {
   return (neuron0x2580c80()*-0.0678109);
}

double NNfunction_ss_uLuR::synapse0x2594950() {
   return (neuron0x2580fc0()*-0.0818252);
}

double NNfunction_ss_uLuR::synapse0x2594990() {
   return (neuron0x2581300()*0.0417637);
}

double NNfunction_ss_uLuR::synapse0x25949d0() {
   return (neuron0x2581640()*-0.0669083);
}

double NNfunction_ss_uLuR::synapse0x2594a10() {
   return (neuron0x2581980()*0.756514);
}

double NNfunction_ss_uLuR::synapse0x2594a50() {
   return (neuron0x2581cc0()*-0.0523307);
}

double NNfunction_ss_uLuR::synapse0x2594a90() {
   return (neuron0x2582000()*0.466424);
}

double NNfunction_ss_uLuR::synapse0x2594ad0() {
   return (neuron0x2582340()*0.397862);
}

double NNfunction_ss_uLuR::synapse0x2594b10() {
   return (neuron0x2582680()*0.0254235);
}

double NNfunction_ss_uLuR::synapse0x25945a0() {
   return (neuron0x25829c0()*0.792992);
}

double NNfunction_ss_uLuR::synapse0x25945e0() {
   return (neuron0x2582f20()*-0.500187);
}

double NNfunction_ss_uLuR::synapse0x2594c60() {
   return (neuron0x2583140()*-0.22096);
}

double NNfunction_ss_uLuR::synapse0x2594ca0() {
   return (neuron0x2583480()*-0.174891);
}

double NNfunction_ss_uLuR::synapse0x2594ce0() {
   return (neuron0x25837c0()*0.785291);
}

double NNfunction_ss_uLuR::synapse0x2594d20() {
   return (neuron0x2583b00()*0.27444);
}

double NNfunction_ss_uLuR::synapse0x2594d60() {
   return (neuron0x2583e40()*-0.458431);
}

double NNfunction_ss_uLuR::synapse0x2594da0() {
   return (neuron0x2584180()*-0.901073);
}

double NNfunction_ss_uLuR::synapse0x25a6c70() {
   return (neuron0x257f5c0()*-0.263655);
}

double NNfunction_ss_uLuR::synapse0x25a6cb0() {
   return (neuron0x257f900()*-0.152186);
}

double NNfunction_ss_uLuR::synapse0x25a6cf0() {
   return (neuron0x257fc40()*0.188642);
}

double NNfunction_ss_uLuR::synapse0x25a6d30() {
   return (neuron0x257ff80()*-0.0942807);
}

double NNfunction_ss_uLuR::synapse0x25a6d70() {
   return (neuron0x25802c0()*0.232605);
}

double NNfunction_ss_uLuR::synapse0x25a6db0() {
   return (neuron0x2580600()*0.0941144);
}

double NNfunction_ss_uLuR::synapse0x25a6df0() {
   return (neuron0x2580940()*0.139087);
}

double NNfunction_ss_uLuR::synapse0x25a6e30() {
   return (neuron0x2580c80()*-0.286167);
}

double NNfunction_ss_uLuR::synapse0x25a6e70() {
   return (neuron0x2580fc0()*-0.0675435);
}

double NNfunction_ss_uLuR::synapse0x25a6eb0() {
   return (neuron0x2581300()*-0.0601885);
}

double NNfunction_ss_uLuR::synapse0x25a6ef0() {
   return (neuron0x2581640()*-0.246188);
}

double NNfunction_ss_uLuR::synapse0x25a6f30() {
   return (neuron0x2581980()*0.282586);
}

double NNfunction_ss_uLuR::synapse0x25a6f70() {
   return (neuron0x2581cc0()*1.09103);
}

double NNfunction_ss_uLuR::synapse0x25a6fb0() {
   return (neuron0x2582000()*-0.129566);
}

double NNfunction_ss_uLuR::synapse0x25a6ff0() {
   return (neuron0x2582340()*0.235979);
}

double NNfunction_ss_uLuR::synapse0x25a7030() {
   return (neuron0x2582680()*0.162137);
}

double NNfunction_ss_uLuR::synapse0x2594de0() {
   return (neuron0x25829c0()*0.0213377);
}

double NNfunction_ss_uLuR::synapse0x2594e20() {
   return (neuron0x2582f20()*-0.203769);
}

double NNfunction_ss_uLuR::synapse0x25a7180() {
   return (neuron0x2583140()*-0.218347);
}

double NNfunction_ss_uLuR::synapse0x25a71c0() {
   return (neuron0x2583480()*0.146716);
}

double NNfunction_ss_uLuR::synapse0x25a7200() {
   return (neuron0x25837c0()*0.0543126);
}

double NNfunction_ss_uLuR::synapse0x25a7240() {
   return (neuron0x2583b00()*0.128037);
}

double NNfunction_ss_uLuR::synapse0x25a7280() {
   return (neuron0x2583e40()*-0.164447);
}

double NNfunction_ss_uLuR::synapse0x25a72c0() {
   return (neuron0x2584180()*0.134427);
}

double NNfunction_ss_uLuR::synapse0x25a7640() {
   return (neuron0x257f5c0()*0.00124341);
}

double NNfunction_ss_uLuR::synapse0x25a7680() {
   return (neuron0x257f900()*-0.0497059);
}

double NNfunction_ss_uLuR::synapse0x25a76c0() {
   return (neuron0x257fc40()*-0.00901678);
}

double NNfunction_ss_uLuR::synapse0x25a7700() {
   return (neuron0x257ff80()*0.408143);
}

double NNfunction_ss_uLuR::synapse0x25a7740() {
   return (neuron0x25802c0()*0.0147495);
}

double NNfunction_ss_uLuR::synapse0x25a7780() {
   return (neuron0x2580600()*0.0483756);
}

double NNfunction_ss_uLuR::synapse0x25a77c0() {
   return (neuron0x2580940()*-0.00342267);
}

double NNfunction_ss_uLuR::synapse0x25a7800() {
   return (neuron0x2580c80()*-0.0186314);
}

double NNfunction_ss_uLuR::synapse0x25a7840() {
   return (neuron0x2580fc0()*0.0466211);
}

double NNfunction_ss_uLuR::synapse0x25a7880() {
   return (neuron0x2581300()*0.00606438);
}

double NNfunction_ss_uLuR::synapse0x25a78c0() {
   return (neuron0x2581640()*0.12364);
}

double NNfunction_ss_uLuR::synapse0x25a7900() {
   return (neuron0x2581980()*-2.94014);
}

double NNfunction_ss_uLuR::synapse0x25a7940() {
   return (neuron0x2581cc0()*-0.0509418);
}

double NNfunction_ss_uLuR::synapse0x25a7980() {
   return (neuron0x2582000()*0.0237753);
}

double NNfunction_ss_uLuR::synapse0x25a79c0() {
   return (neuron0x2582340()*-0.0957256);
}

double NNfunction_ss_uLuR::synapse0x25a7a00() {
   return (neuron0x2582680()*-0.00329837);
}

double NNfunction_ss_uLuR::synapse0x25a7490() {
   return (neuron0x25829c0()*0.00969446);
}

double NNfunction_ss_uLuR::synapse0x25a74d0() {
   return (neuron0x2582f20()*-0.00489161);
}

double NNfunction_ss_uLuR::synapse0x25a7b50() {
   return (neuron0x2583140()*0.0121128);
}

double NNfunction_ss_uLuR::synapse0x25a7b90() {
   return (neuron0x2583480()*0.0571543);
}

double NNfunction_ss_uLuR::synapse0x25a7bd0() {
   return (neuron0x25837c0()*0.0065864);
}

double NNfunction_ss_uLuR::synapse0x25a7c10() {
   return (neuron0x2583b00()*-0.0122083);
}

double NNfunction_ss_uLuR::synapse0x25a7c50() {
   return (neuron0x2583e40()*0.00755045);
}

double NNfunction_ss_uLuR::synapse0x25a7c90() {
   return (neuron0x2584180()*0.0266135);
}

double NNfunction_ss_uLuR::synapse0x25a8010() {
   return (neuron0x257f5c0()*0.438806);
}

double NNfunction_ss_uLuR::synapse0x25a8050() {
   return (neuron0x257f900()*0.572262);
}

double NNfunction_ss_uLuR::synapse0x25a8090() {
   return (neuron0x257fc40()*-0.649563);
}

double NNfunction_ss_uLuR::synapse0x25a80d0() {
   return (neuron0x257ff80()*-0.19211);
}

double NNfunction_ss_uLuR::synapse0x25a8110() {
   return (neuron0x25802c0()*0.393152);
}

double NNfunction_ss_uLuR::synapse0x25a8150() {
   return (neuron0x2580600()*0.758914);
}

double NNfunction_ss_uLuR::synapse0x25a8190() {
   return (neuron0x2580940()*-0.0254926);
}

double NNfunction_ss_uLuR::synapse0x25a81d0() {
   return (neuron0x2580c80()*-0.0126564);
}

double NNfunction_ss_uLuR::synapse0x25a8210() {
   return (neuron0x2580fc0()*-0.536923);
}

double NNfunction_ss_uLuR::synapse0x25a8250() {
   return (neuron0x2581300()*0.430414);
}

double NNfunction_ss_uLuR::synapse0x25a8290() {
   return (neuron0x2581640()*-0.193715);
}

double NNfunction_ss_uLuR::synapse0x25a82d0() {
   return (neuron0x2581980()*0.286705);
}

double NNfunction_ss_uLuR::synapse0x25a8310() {
   return (neuron0x2581cc0()*-0.230238);
}

double NNfunction_ss_uLuR::synapse0x25a8350() {
   return (neuron0x2582000()*0.193759);
}

double NNfunction_ss_uLuR::synapse0x25a8390() {
   return (neuron0x2582340()*0.693715);
}

double NNfunction_ss_uLuR::synapse0x25a83d0() {
   return (neuron0x2582680()*-0.511179);
}

double NNfunction_ss_uLuR::synapse0x25a7e60() {
   return (neuron0x25829c0()*-0.269578);
}

double NNfunction_ss_uLuR::synapse0x25a7ea0() {
   return (neuron0x2582f20()*-0.464988);
}

double NNfunction_ss_uLuR::synapse0x25a8520() {
   return (neuron0x2583140()*0.106722);
}

double NNfunction_ss_uLuR::synapse0x25a8560() {
   return (neuron0x2583480()*-0.678428);
}

double NNfunction_ss_uLuR::synapse0x25a85a0() {
   return (neuron0x25837c0()*0.0295802);
}

double NNfunction_ss_uLuR::synapse0x25a85e0() {
   return (neuron0x2583b00()*-0.179963);
}

double NNfunction_ss_uLuR::synapse0x25a8620() {
   return (neuron0x2583e40()*0.432313);
}

double NNfunction_ss_uLuR::synapse0x25a8660() {
   return (neuron0x2584180()*0.147971);
}

double NNfunction_ss_uLuR::synapse0x25a89e0() {
   return (neuron0x257f5c0()*-0.0110686);
}

double NNfunction_ss_uLuR::synapse0x25a8a20() {
   return (neuron0x257f900()*-0.0137711);
}

double NNfunction_ss_uLuR::synapse0x25a8a60() {
   return (neuron0x257fc40()*0.0350266);
}

double NNfunction_ss_uLuR::synapse0x25a8aa0() {
   return (neuron0x257ff80()*0.555712);
}

double NNfunction_ss_uLuR::synapse0x25a8ae0() {
   return (neuron0x25802c0()*0.000429212);
}

double NNfunction_ss_uLuR::synapse0x25a8b20() {
   return (neuron0x2580600()*-0.001146);
}

double NNfunction_ss_uLuR::synapse0x25a8b60() {
   return (neuron0x2580940()*-0.0251739);
}

double NNfunction_ss_uLuR::synapse0x25a8ba0() {
   return (neuron0x2580c80()*0.0113991);
}

double NNfunction_ss_uLuR::synapse0x25a8be0() {
   return (neuron0x2580fc0()*0.00533691);
}

double NNfunction_ss_uLuR::synapse0x25a8c20() {
   return (neuron0x2581300()*-0.00555905);
}

double NNfunction_ss_uLuR::synapse0x25a8c60() {
   return (neuron0x2581640()*0.0347441);
}

double NNfunction_ss_uLuR::synapse0x25a8ca0() {
   return (neuron0x2581980()*-0.33959);
}

double NNfunction_ss_uLuR::synapse0x25a8ce0() {
   return (neuron0x2581cc0()*-0.0446287);
}

double NNfunction_ss_uLuR::synapse0x25a8d20() {
   return (neuron0x2582000()*-0.0126714);
}

double NNfunction_ss_uLuR::synapse0x25a8d60() {
   return (neuron0x2582340()*-0.695962);
}

double NNfunction_ss_uLuR::synapse0x25a8da0() {
   return (neuron0x2582680()*0.00360627);
}

double NNfunction_ss_uLuR::synapse0x25a8830() {
   return (neuron0x25829c0()*0.0259164);
}

double NNfunction_ss_uLuR::synapse0x25a8870() {
   return (neuron0x2582f20()*-0.00874794);
}

double NNfunction_ss_uLuR::synapse0x25a8ef0() {
   return (neuron0x2583140()*-0.0199453);
}

double NNfunction_ss_uLuR::synapse0x25a8f30() {
   return (neuron0x2583480()*0.00387313);
}

double NNfunction_ss_uLuR::synapse0x25a8f70() {
   return (neuron0x25837c0()*-0.0161691);
}

double NNfunction_ss_uLuR::synapse0x25a8fb0() {
   return (neuron0x2583b00()*0.0337483);
}

double NNfunction_ss_uLuR::synapse0x25a8ff0() {
   return (neuron0x2583e40()*-0.00678379);
}

double NNfunction_ss_uLuR::synapse0x25a9030() {
   return (neuron0x2584180()*0.00815061);
}

double NNfunction_ss_uLuR::synapse0x25855d0() {
   return (neuron0x2584620()*0.0619715);
}

double NNfunction_ss_uLuR::synapse0x2585610() {
   return (neuron0x2584f30()*0.0333738);
}

double NNfunction_ss_uLuR::synapse0x2586ae0() {
   return (neuron0x2585a10()*-0.0505516);
}

double NNfunction_ss_uLuR::synapse0x2586b20() {
   return (neuron0x233f2a0()*-0.0316966);
}

double NNfunction_ss_uLuR::synapse0x25874b0() {
   return (neuron0x2586830()*0.0133175);
}

double NNfunction_ss_uLuR::synapse0x25874f0() {
   return (neuron0x2587200()*-0.0854607);
}

double NNfunction_ss_uLuR::synapse0x2588280() {
   return (neuron0x2587fd0()*-0.012502);
}

double NNfunction_ss_uLuR::synapse0x25882c0() {
   return (neuron0x25889a0()*1.28369);
}

double NNfunction_ss_uLuR::synapse0x2588c50() {
   return (neuron0x2589370()*0.808019);
}

double NNfunction_ss_uLuR::synapse0x2588c90() {
   return (neuron0x2589e50()*0.0774637);
}

double NNfunction_ss_uLuR::synapse0x2589620() {
   return (neuron0x258a820()*-0.0177437);
}

double NNfunction_ss_uLuR::synapse0x2589660() {
   return (neuron0x2587900()*0.266088);
}

double NNfunction_ss_uLuR::synapse0x258a100() {
   return (neuron0x258c3d0()*-0.0973578);
}

double NNfunction_ss_uLuR::synapse0x258a140() {
   return (neuron0x258cda0()*-0.0452521);
}

double NNfunction_ss_uLuR::synapse0x258aad0() {
   return (neuron0x258d770()*-0.0396642);
}

double NNfunction_ss_uLuR::synapse0x258ab10() {
   return (neuron0x258e140()*-0.124238);
}

double NNfunction_ss_uLuR::synapse0x2587bb0() {
   return (neuron0x258ff50()*-0.924265);
}

double NNfunction_ss_uLuR::synapse0x2587bf0() {
   return (neuron0x2590230()*0.0269705);
}

double NNfunction_ss_uLuR::synapse0x258c680() {
   return (neuron0x2590c00()*0.00262827);
}

double NNfunction_ss_uLuR::synapse0x258c6c0() {
   return (neuron0x25915d0()*-0.52141);
}

double NNfunction_ss_uLuR::synapse0x258d050() {
   return (neuron0x2591fa0()*0.131626);
}

double NNfunction_ss_uLuR::synapse0x258d090() {
   return (neuron0x2592970()*-0.802845);
}

double NNfunction_ss_uLuR::synapse0x258da20() {
   return (neuron0x258b4c0()*-0.0457761);
}

double NNfunction_ss_uLuR::synapse0x258da60() {
   return (neuron0x258be90()*0.0212003);
}

double NNfunction_ss_uLuR::synapse0x258e3f0() {
   return (neuron0x2595700()*1.42052);
}

double NNfunction_ss_uLuR::synapse0x258e430() {
   return (neuron0x25960d0()*-0.538823);
}

double NNfunction_ss_uLuR::synapse0x2582560() {
   return (neuron0x2596aa0()*0.040449);
}

double NNfunction_ss_uLuR::synapse0x25825a0() {
   return (neuron0x2597470()*0.00913534);
}

double NNfunction_ss_uLuR::synapse0x25904e0() {
   return (neuron0x2597e40()*-1.7295);
}

double NNfunction_ss_uLuR::synapse0x2590520() {
   return (neuron0x2598810()*0.0685052);
}

double NNfunction_ss_uLuR::synapse0x2590eb0() {
   return (neuron0x25991e0()*-0.0372767);
}

double NNfunction_ss_uLuR::synapse0x2590ef0() {
   return (neuron0x2599bb0()*0.062973);
}

double NNfunction_ss_uLuR::synapse0x2591880() {
   return (neuron0x258fc40()*-0.00864949);
}

double NNfunction_ss_uLuR::synapse0x25918c0() {
   return (neuron0x259c790()*0.0309118);
}

double NNfunction_ss_uLuR::synapse0x2592250() {
   return (neuron0x259d160()*1.18028);
}

double NNfunction_ss_uLuR::synapse0x2592290() {
   return (neuron0x259db30()*-0.00744365);
}

double NNfunction_ss_uLuR::synapse0x2592c20() {
   return (neuron0x259e500()*1.68313);
}

double NNfunction_ss_uLuR::synapse0x2592c60() {
   return (neuron0x259eed0()*0.0623523);
}

double NNfunction_ss_uLuR::synapse0x258b770() {
   return (neuron0x259f8a0()*-0.0215905);
}

double NNfunction_ss_uLuR::synapse0x258b7b0() {
   return (neuron0x25a0270()*-0.0877735);
}

double NNfunction_ss_uLuR::synapse0x2595020() {
   return (neuron0x25a0c40()*0.0734312);
}

double NNfunction_ss_uLuR::synapse0x2595060() {
   return (neuron0x25a1820()*0.0854816);
}

double NNfunction_ss_uLuR::synapse0x25959b0() {
   return (neuron0x25a21f0()*0.163194);
}

double NNfunction_ss_uLuR::synapse0x25959f0() {
   return (neuron0x2593070()*-0.0163892);
}

double NNfunction_ss_uLuR::synapse0x2596380() {
   return (neuron0x2593a40()*0.8323);
}

double NNfunction_ss_uLuR::synapse0x25963c0() {
   return (neuron0x2594410()*0.0232997);
}

double NNfunction_ss_uLuR::synapse0x2596d50() {
   return (neuron0x25a6a50()*0.0641587);
}

double NNfunction_ss_uLuR::synapse0x2596d90() {
   return (neuron0x25a7300()*-0.85376);
}

double NNfunction_ss_uLuR::synapse0x2597720() {
   return (neuron0x25a7cd0()*0.0544474);
}

double NNfunction_ss_uLuR::synapse0x2597760() {
   return (neuron0x25a86a0()*-1.1505);
}

double NNfunction_ss_uLuR::synapse0x2599e60() {
   return (neuron0x2584620()*-0.027157);
}

double NNfunction_ss_uLuR::synapse0x2599ea0() {
   return (neuron0x2584f30()*-0.0127077);
}

double NNfunction_ss_uLuR::synapse0x258f420() {
   return (neuron0x2585a10()*0.303746);
}

double NNfunction_ss_uLuR::synapse0x258f460() {
   return (neuron0x233f2a0()*0.0214049);
}

double NNfunction_ss_uLuR::synapse0x259ca40() {
   return (neuron0x2586830()*-0.00634234);
}

double NNfunction_ss_uLuR::synapse0x259ca80() {
   return (neuron0x2587200()*0.0332412);
}

double NNfunction_ss_uLuR::synapse0x259d410() {
   return (neuron0x2587fd0()*0.151666);
}

double NNfunction_ss_uLuR::synapse0x259d450() {
   return (neuron0x25889a0()*-0.276406);
}

double NNfunction_ss_uLuR::synapse0x259dde0() {
   return (neuron0x2589370()*-0.121997);
}

double NNfunction_ss_uLuR::synapse0x259de20() {
   return (neuron0x2589e50()*-0.0615816);
}

double NNfunction_ss_uLuR::synapse0x259e7b0() {
   return (neuron0x258a820()*0.0113254);
}

double NNfunction_ss_uLuR::synapse0x259e7f0() {
   return (neuron0x2587900()*0.724088);
}

double NNfunction_ss_uLuR::synapse0x259f180() {
   return (neuron0x258c3d0()*0.0825055);
}

double NNfunction_ss_uLuR::synapse0x259f1c0() {
   return (neuron0x258cda0()*0.00814954);
}

double NNfunction_ss_uLuR::synapse0x259fb50() {
   return (neuron0x258d770()*0.0385906);
}

double NNfunction_ss_uLuR::synapse0x259fb90() {
   return (neuron0x258e140()*0.0766083);
}

double NNfunction_ss_uLuR::synapse0x25a0520() {
   return (neuron0x258ff50()*0.219592);
}

double NNfunction_ss_uLuR::synapse0x25a0560() {
   return (neuron0x2590230()*-0.0365878);
}

double NNfunction_ss_uLuR::synapse0x25a0ef0() {
   return (neuron0x2590c00()*0.227454);
}

double NNfunction_ss_uLuR::synapse0x25a0f30() {
   return (neuron0x25915d0()*0.405454);
}

double NNfunction_ss_uLuR::synapse0x25a1ad0() {
   return (neuron0x2591fa0()*0.102492);
}

double NNfunction_ss_uLuR::synapse0x25a1b10() {
   return (neuron0x2592970()*-0.994346);
}

double NNfunction_ss_uLuR::synapse0x25a24a0() {
   return (neuron0x258b4c0()*-0.039596);
}

double NNfunction_ss_uLuR::synapse0x25a24e0() {
   return (neuron0x258be90()*-0.0218178);
}

double NNfunction_ss_uLuR::synapse0x2593320() {
   return (neuron0x2595700()*0.40098);
}

double NNfunction_ss_uLuR::synapse0x2593360() {
   return (neuron0x25960d0()*-0.594944);
}

double NNfunction_ss_uLuR::synapse0x2593cf0() {
   return (neuron0x2596aa0()*0.00318435);
}

double NNfunction_ss_uLuR::synapse0x2593d30() {
   return (neuron0x2597470()*0.00960231);
}

double NNfunction_ss_uLuR::synapse0x25946c0() {
   return (neuron0x2597e40()*-1.07054);
}

double NNfunction_ss_uLuR::synapse0x2594700() {
   return (neuron0x2598810()*-0.0520967);
}

double NNfunction_ss_uLuR::synapse0x25a6be0() {
   return (neuron0x25991e0()*0.0343428);
}

double NNfunction_ss_uLuR::synapse0x25a6c20() {
   return (neuron0x2599bb0()*-0.0474021);
}

double NNfunction_ss_uLuR::synapse0x25a75b0() {
   return (neuron0x258fc40()*-0.0159118);
}

double NNfunction_ss_uLuR::synapse0x25a75f0() {
   return (neuron0x259c790()*-0.0482868);
}

double NNfunction_ss_uLuR::synapse0x25a7f80() {
   return (neuron0x259d160()*-0.0654012);
}

double NNfunction_ss_uLuR::synapse0x25a7fc0() {
   return (neuron0x259db30()*-0.0213973);
}

double NNfunction_ss_uLuR::synapse0x25a8950() {
   return (neuron0x259e500()*1.61164);
}

double NNfunction_ss_uLuR::synapse0x25a8990() {
   return (neuron0x259eed0()*-0.0438061);
}

double NNfunction_ss_uLuR::synapse0x2584840() {
   return (neuron0x259f8a0()*0.0119215);
}

double NNfunction_ss_uLuR::synapse0x2584880() {
   return (neuron0x25a0270()*0.0632162);
}

double NNfunction_ss_uLuR::synapse0x25980f0() {
   return (neuron0x25a0c40()*-0.528123);
}

double NNfunction_ss_uLuR::synapse0x2598130() {
   return (neuron0x25a1820()*-0.0431964);
}

double NNfunction_ss_uLuR::synapse0x25a9070() {
   return (neuron0x25a21f0()*0.0214345);
}

double NNfunction_ss_uLuR::synapse0x25a90b0() {
   return (neuron0x2593070()*-0.0270681);
}

double NNfunction_ss_uLuR::synapse0x25a90f0() {
   return (neuron0x2593a40()*-0.156998);
}

double NNfunction_ss_uLuR::synapse0x25a9130() {
   return (neuron0x2594410()*-0.0150696);
}

double NNfunction_ss_uLuR::synapse0x25affe0() {
   return (neuron0x25a6a50()*-0.0134071);
}

double NNfunction_ss_uLuR::synapse0x25b0020() {
   return (neuron0x25a7300()*0.0217057);
}

double NNfunction_ss_uLuR::synapse0x25b0060() {
   return (neuron0x25a7cd0()*-0.0236213);
}

double NNfunction_ss_uLuR::synapse0x25b00a0() {
   return (neuron0x25a86a0()*-0.947654);
}

double NNfunction_ss_uLuR::synapse0x25b0420() {
   return (neuron0x2584620()*0.00376421);
}

double NNfunction_ss_uLuR::synapse0x25b0460() {
   return (neuron0x2584f30()*0.0579797);
}

double NNfunction_ss_uLuR::synapse0x25b04a0() {
   return (neuron0x2585a10()*-1.11009);
}

double NNfunction_ss_uLuR::synapse0x25b04e0() {
   return (neuron0x233f2a0()*-0.122909);
}

double NNfunction_ss_uLuR::synapse0x25b0520() {
   return (neuron0x2586830()*0.0252394);
}

double NNfunction_ss_uLuR::synapse0x25b0560() {
   return (neuron0x2587200()*-0.0502353);
}

double NNfunction_ss_uLuR::synapse0x25b05a0() {
   return (neuron0x2587fd0()*-0.870179);
}

double NNfunction_ss_uLuR::synapse0x25b05e0() {
   return (neuron0x25889a0()*-0.225831);
}

double NNfunction_ss_uLuR::synapse0x25b0620() {
   return (neuron0x2589370()*-0.0714063);
}

double NNfunction_ss_uLuR::synapse0x25b0660() {
   return (neuron0x2589e50()*-0.209931);
}

double NNfunction_ss_uLuR::synapse0x25b06a0() {
   return (neuron0x258a820()*-0.0700917);
}

double NNfunction_ss_uLuR::synapse0x25b06e0() {
   return (neuron0x2587900()*-0.64685);
}

double NNfunction_ss_uLuR::synapse0x25b0720() {
   return (neuron0x258c3d0()*-0.214496);
}

double NNfunction_ss_uLuR::synapse0x25b0760() {
   return (neuron0x258cda0()*0.0104839);
}

double NNfunction_ss_uLuR::synapse0x25b07a0() {
   return (neuron0x258d770()*-0.113031);
}

double NNfunction_ss_uLuR::synapse0x25b07e0() {
   return (neuron0x258e140()*-0.0222256);
}

double NNfunction_ss_uLuR::synapse0x25b0270() {
   return (neuron0x258ff50()*0.197714);
}

double NNfunction_ss_uLuR::synapse0x25b02b0() {
   return (neuron0x2590230()*0.132817);
}

double NNfunction_ss_uLuR::synapse0x25b0930() {
   return (neuron0x2590c00()*-1.09796);
}

double NNfunction_ss_uLuR::synapse0x25b0970() {
   return (neuron0x25915d0()*-0.459266);
}

double NNfunction_ss_uLuR::synapse0x25b09b0() {
   return (neuron0x2591fa0()*0.105944);
}

double NNfunction_ss_uLuR::synapse0x25b09f0() {
   return (neuron0x2592970()*-1.43234);
}

double NNfunction_ss_uLuR::synapse0x25b0a30() {
   return (neuron0x258b4c0()*0.443467);
}

double NNfunction_ss_uLuR::synapse0x25b0a70() {
   return (neuron0x258be90()*0.107046);
}

double NNfunction_ss_uLuR::synapse0x25b0ab0() {
   return (neuron0x2595700()*2.3154);
}

double NNfunction_ss_uLuR::synapse0x25b0af0() {
   return (neuron0x25960d0()*-0.6749);
}

double NNfunction_ss_uLuR::synapse0x25b0b30() {
   return (neuron0x2596aa0()*-0.125829);
}

double NNfunction_ss_uLuR::synapse0x25b0b70() {
   return (neuron0x2597470()*-0.098263);
}

double NNfunction_ss_uLuR::synapse0x25b0bb0() {
   return (neuron0x2597e40()*-0.882932);
}

double NNfunction_ss_uLuR::synapse0x25b0bf0() {
   return (neuron0x2598810()*0.121373);
}

double NNfunction_ss_uLuR::synapse0x25b0c30() {
   return (neuron0x25991e0()*-0.108131);
}

double NNfunction_ss_uLuR::synapse0x25b0c70() {
   return (neuron0x2599bb0()*0.0914598);
}

double NNfunction_ss_uLuR::synapse0x25b0820() {
   return (neuron0x258fc40()*0.0236963);
}

double NNfunction_ss_uLuR::synapse0x25b0860() {
   return (neuron0x259c790()*0.271464);
}

double NNfunction_ss_uLuR::synapse0x25b08a0() {
   return (neuron0x259d160()*-0.348054);
}

double NNfunction_ss_uLuR::synapse0x25b08e0() {
   return (neuron0x259db30()*-0.0335214);
}

double NNfunction_ss_uLuR::synapse0x25b0ec0() {
   return (neuron0x259e500()*0.387396);
}

double NNfunction_ss_uLuR::synapse0x25b0f00() {
   return (neuron0x259eed0()*0.187042);
}

double NNfunction_ss_uLuR::synapse0x25b0f40() {
   return (neuron0x259f8a0()*-0.0379906);
}

double NNfunction_ss_uLuR::synapse0x25b0f80() {
   return (neuron0x25a0270()*-0.122495);
}

double NNfunction_ss_uLuR::synapse0x25b0fc0() {
   return (neuron0x25a0c40()*0.382597);
}

double NNfunction_ss_uLuR::synapse0x25b1000() {
   return (neuron0x25a1820()*0.0604094);
}

double NNfunction_ss_uLuR::synapse0x25b1040() {
   return (neuron0x25a21f0()*-0.941565);
}

double NNfunction_ss_uLuR::synapse0x25b1080() {
   return (neuron0x2593070()*0.141339);
}

double NNfunction_ss_uLuR::synapse0x25b10c0() {
   return (neuron0x2593a40()*2.25063);
}

double NNfunction_ss_uLuR::synapse0x25b1100() {
   return (neuron0x2594410()*0.0525671);
}

double NNfunction_ss_uLuR::synapse0x25b1140() {
   return (neuron0x25a6a50()*0.0352306);
}

double NNfunction_ss_uLuR::synapse0x25b1180() {
   return (neuron0x25a7300()*0.716769);
}

double NNfunction_ss_uLuR::synapse0x25b11c0() {
   return (neuron0x25a7cd0()*0.00400691);
}

double NNfunction_ss_uLuR::synapse0x25b1200() {
   return (neuron0x25a86a0()*-0.240255);
}

double NNfunction_ss_uLuR::synapse0x25b1580() {
   return (neuron0x2584620()*-0.00301176);
}

double NNfunction_ss_uLuR::synapse0x25b15c0() {
   return (neuron0x2584f30()*-0.0334933);
}

double NNfunction_ss_uLuR::synapse0x25b1600() {
   return (neuron0x2585a10()*-0.445497);
}

double NNfunction_ss_uLuR::synapse0x25b1640() {
   return (neuron0x233f2a0()*0.00391744);
}

double NNfunction_ss_uLuR::synapse0x25b1680() {
   return (neuron0x2586830()*0.0301895);
}

double NNfunction_ss_uLuR::synapse0x25b16c0() {
   return (neuron0x2587200()*-0.0590715);
}

double NNfunction_ss_uLuR::synapse0x25b1700() {
   return (neuron0x2587fd0()*-0.394407);
}

double NNfunction_ss_uLuR::synapse0x25b1740() {
   return (neuron0x25889a0()*-0.687888);
}

double NNfunction_ss_uLuR::synapse0x25b1780() {
   return (neuron0x2589370()*-0.689728);
}

double NNfunction_ss_uLuR::synapse0x25b17c0() {
   return (neuron0x2589e50()*0.597465);
}

double NNfunction_ss_uLuR::synapse0x25b1800() {
   return (neuron0x258a820()*0.00203571);
}

double NNfunction_ss_uLuR::synapse0x25b1840() {
   return (neuron0x2587900()*-0.829392);
}

double NNfunction_ss_uLuR::synapse0x25b1880() {
   return (neuron0x258c3d0()*0.00134299);
}

double NNfunction_ss_uLuR::synapse0x25b18c0() {
   return (neuron0x258cda0()*-0.106671);
}

double NNfunction_ss_uLuR::synapse0x25b1900() {
   return (neuron0x258d770()*-0.000156471);
}

double NNfunction_ss_uLuR::synapse0x25b1940() {
   return (neuron0x258e140()*-0.357254);
}

double NNfunction_ss_uLuR::synapse0x25b13d0() {
   return (neuron0x258ff50()*-0.610152);
}

double NNfunction_ss_uLuR::synapse0x25b1410() {
   return (neuron0x2590230()*-0.431012);
}

double NNfunction_ss_uLuR::synapse0x25b1a90() {
   return (neuron0x2590c00()*-0.306679);
}

double NNfunction_ss_uLuR::synapse0x25b1ad0() {
   return (neuron0x25915d0()*-0.267018);
}

double NNfunction_ss_uLuR::synapse0x25b1b10() {
   return (neuron0x2591fa0()*-0.99282);
}

double NNfunction_ss_uLuR::synapse0x25b1b50() {
   return (neuron0x2592970()*4.39468);
}

double NNfunction_ss_uLuR::synapse0x25b1b90() {
   return (neuron0x258b4c0()*0.519098);
}

double NNfunction_ss_uLuR::synapse0x25b1bd0() {
   return (neuron0x258be90()*-0.0213796);
}

double NNfunction_ss_uLuR::synapse0x25b1c10() {
   return (neuron0x2595700()*-9.6373);
}

double NNfunction_ss_uLuR::synapse0x25b1c50() {
   return (neuron0x25960d0()*0.0928459);
}

double NNfunction_ss_uLuR::synapse0x25b1c90() {
   return (neuron0x2596aa0()*-0.0870405);
}

double NNfunction_ss_uLuR::synapse0x25b1cd0() {
   return (neuron0x2597470()*0.000160271);
}

double NNfunction_ss_uLuR::synapse0x25b1d10() {
   return (neuron0x2597e40()*0.0738494);
}

double NNfunction_ss_uLuR::synapse0x25b1d50() {
   return (neuron0x2598810()*-0.057069);
}

double NNfunction_ss_uLuR::synapse0x25b1d90() {
   return (neuron0x25991e0()*-0.0832462);
}

double NNfunction_ss_uLuR::synapse0x25b1dd0() {
   return (neuron0x2599bb0()*-0.118526);
}

double NNfunction_ss_uLuR::synapse0x25b1980() {
   return (neuron0x258fc40()*-0.23317);
}

double NNfunction_ss_uLuR::synapse0x25b19c0() {
   return (neuron0x259c790()*-0.361579);
}

double NNfunction_ss_uLuR::synapse0x25b1a00() {
   return (neuron0x259d160()*1.96887);
}

double NNfunction_ss_uLuR::synapse0x25b1a40() {
   return (neuron0x259db30()*-0.213612);
}

double NNfunction_ss_uLuR::synapse0x25b2020() {
   return (neuron0x259e500()*-0.488657);
}

double NNfunction_ss_uLuR::synapse0x25b2060() {
   return (neuron0x259eed0()*0.00295658);
}

double NNfunction_ss_uLuR::synapse0x25b20a0() {
   return (neuron0x259f8a0()*-0.00414186);
}

double NNfunction_ss_uLuR::synapse0x25b20e0() {
   return (neuron0x25a0270()*0.0455817);
}

double NNfunction_ss_uLuR::synapse0x25b2120() {
   return (neuron0x25a0c40()*0.781568);
}

double NNfunction_ss_uLuR::synapse0x25b2160() {
   return (neuron0x25a1820()*0.0900076);
}

double NNfunction_ss_uLuR::synapse0x25b21a0() {
   return (neuron0x25a21f0()*3.90978);
}

double NNfunction_ss_uLuR::synapse0x25b21e0() {
   return (neuron0x2593070()*-0.0480801);
}

double NNfunction_ss_uLuR::synapse0x25b2220() {
   return (neuron0x2593a40()*-8.6805);
}

double NNfunction_ss_uLuR::synapse0x25b2260() {
   return (neuron0x2594410()*0.0785843);
}

double NNfunction_ss_uLuR::synapse0x25b22a0() {
   return (neuron0x25a6a50()*-0.813346);
}

double NNfunction_ss_uLuR::synapse0x25b22e0() {
   return (neuron0x25a7300()*1.78246);
}

double NNfunction_ss_uLuR::synapse0x25b2320() {
   return (neuron0x25a7cd0()*-0.040952);
}

double NNfunction_ss_uLuR::synapse0x25b2360() {
   return (neuron0x25a86a0()*-0.770698);
}

double NNfunction_ss_uLuR::synapse0x25b26e0() {
   return (neuron0x2584620()*1.94123);
}

double NNfunction_ss_uLuR::synapse0x25b2720() {
   return (neuron0x2584f30()*1.9476);
}

double NNfunction_ss_uLuR::synapse0x25b2760() {
   return (neuron0x2585a10()*-1.46933);
}

double NNfunction_ss_uLuR::synapse0x25b27a0() {
   return (neuron0x233f2a0()*-1.74112);
}

double NNfunction_ss_uLuR::synapse0x25b27e0() {
   return (neuron0x2586830()*1.63001);
}

double NNfunction_ss_uLuR::synapse0x25b2820() {
   return (neuron0x2587200()*-1.81524);
}

double NNfunction_ss_uLuR::synapse0x25b2860() {
   return (neuron0x2587fd0()*2.65483);
}

double NNfunction_ss_uLuR::synapse0x25b28a0() {
   return (neuron0x25889a0()*-0.106368);
}

double NNfunction_ss_uLuR::synapse0x25b28e0() {
   return (neuron0x2589370()*-1.11094);
}

double NNfunction_ss_uLuR::synapse0x25b2920() {
   return (neuron0x2589e50()*2.39971);
}

double NNfunction_ss_uLuR::synapse0x25b2960() {
   return (neuron0x258a820()*-1.70336);
}

double NNfunction_ss_uLuR::synapse0x25b29a0() {
   return (neuron0x2587900()*0.14192);
}

double NNfunction_ss_uLuR::synapse0x25b29e0() {
   return (neuron0x258c3d0()*-3.76731);
}

double NNfunction_ss_uLuR::synapse0x25b2a20() {
   return (neuron0x258cda0()*-1.74019);
}

double NNfunction_ss_uLuR::synapse0x25b2a60() {
   return (neuron0x258d770()*-1.93299);
}

double NNfunction_ss_uLuR::synapse0x25b2aa0() {
   return (neuron0x258e140()*-4.26801);
}

double NNfunction_ss_uLuR::synapse0x25b2530() {
   return (neuron0x258ff50()*2.07071);
}

double NNfunction_ss_uLuR::synapse0x25b2570() {
   return (neuron0x2590230()*-3.34181);
}

double NNfunction_ss_uLuR::synapse0x25b2bf0() {
   return (neuron0x2590c00()*-0.156556);
}

double NNfunction_ss_uLuR::synapse0x25b2c30() {
   return (neuron0x25915d0()*-4.76478);
}

double NNfunction_ss_uLuR::synapse0x25b2c70() {
   return (neuron0x2591fa0()*-1.20733);
}

double NNfunction_ss_uLuR::synapse0x25b2cb0() {
   return (neuron0x2592970()*1.92609);
}

double NNfunction_ss_uLuR::synapse0x25b2cf0() {
   return (neuron0x258b4c0()*1.67124);
}

double NNfunction_ss_uLuR::synapse0x25b2d30() {
   return (neuron0x258be90()*2.06884);
}

double NNfunction_ss_uLuR::synapse0x25b2d70() {
   return (neuron0x2595700()*0.514121);
}

double NNfunction_ss_uLuR::synapse0x25b2db0() {
   return (neuron0x25960d0()*1.9542);
}

double NNfunction_ss_uLuR::synapse0x25b2df0() {
   return (neuron0x2596aa0()*-3.15273);
}

double NNfunction_ss_uLuR::synapse0x25b2e30() {
   return (neuron0x2597470()*-1.85161);
}

double NNfunction_ss_uLuR::synapse0x25b2e70() {
   return (neuron0x2597e40()*0.306724);
}

double NNfunction_ss_uLuR::synapse0x25b2eb0() {
   return (neuron0x2598810()*1.93797);
}

double NNfunction_ss_uLuR::synapse0x25b2ef0() {
   return (neuron0x25991e0()*-1.66597);
}

double NNfunction_ss_uLuR::synapse0x25b2f30() {
   return (neuron0x2599bb0()*1.8064);
}

double NNfunction_ss_uLuR::synapse0x25b2ae0() {
   return (neuron0x258fc40()*-1.09399);
}

double NNfunction_ss_uLuR::synapse0x25b2b20() {
   return (neuron0x259c790()*5.26893);
}

double NNfunction_ss_uLuR::synapse0x25b2b60() {
   return (neuron0x259d160()*-0.0246342);
}

double NNfunction_ss_uLuR::synapse0x25b2ba0() {
   return (neuron0x259db30()*-1.67331);
}

double NNfunction_ss_uLuR::synapse0x25b3180() {
   return (neuron0x259e500()*0.996997);
}

double NNfunction_ss_uLuR::synapse0x25b31c0() {
   return (neuron0x259eed0()*2.91599);
}

double NNfunction_ss_uLuR::synapse0x25b3200() {
   return (neuron0x259f8a0()*-1.46805);
}

double NNfunction_ss_uLuR::synapse0x25b3240() {
   return (neuron0x25a0270()*-1.92652);
}

double NNfunction_ss_uLuR::synapse0x25b3280() {
   return (neuron0x25a0c40()*1.98113);
}

double NNfunction_ss_uLuR::synapse0x25b32c0() {
   return (neuron0x25a1820()*1.98416);
}

double NNfunction_ss_uLuR::synapse0x25b3300() {
   return (neuron0x25a21f0()*0.896186);
}

double NNfunction_ss_uLuR::synapse0x25b3340() {
   return (neuron0x2593070()*-1.93696);
}

double NNfunction_ss_uLuR::synapse0x25b3380() {
   return (neuron0x2593a40()*0.819036);
}

double NNfunction_ss_uLuR::synapse0x25b33c0() {
   return (neuron0x2594410()*2.7238);
}

double NNfunction_ss_uLuR::synapse0x25b3400() {
   return (neuron0x25a6a50()*-0.17571);
}

double NNfunction_ss_uLuR::synapse0x25b3440() {
   return (neuron0x25a7300()*1.66023);
}

double NNfunction_ss_uLuR::synapse0x25b3480() {
   return (neuron0x25a7cd0()*1.90694);
}

double NNfunction_ss_uLuR::synapse0x25b34c0() {
   return (neuron0x25a86a0()*1.07507);
}

double NNfunction_ss_uLuR::synapse0x25845e0() {
   return (neuron0x25af8a0()*-4.62391);
}

double NNfunction_ss_uLuR::synapse0x25b3720() {
   return (neuron0x25afc40()*-5.49722);
}

double NNfunction_ss_uLuR::synapse0x25b3760() {
   return (neuron0x25b00e0()*-3.36021);
}

double NNfunction_ss_uLuR::synapse0x25b37a0() {
   return (neuron0x25b1240()*9.47287);
}

double NNfunction_ss_uLuR::synapse0x25b37e0() {
   return (neuron0x25b23a0()*9.23539);
}

