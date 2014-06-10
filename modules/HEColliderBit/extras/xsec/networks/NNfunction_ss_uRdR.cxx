#include "NNfunction_ss_uRdR.h"
#include <cmath>

double NNfunction_ss_uRdR::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11,double in12,double in13,double in14,double in15,double in16,double in17,double in18,double in19,double in20,double in21,double in22,double in23) {
   input0 = (in0 - 23.5199)/15.3463;
   input1 = (in1 - -0.555113)/1161.63;
   input2 = (in2 - 658.441)/627.977;
   input3 = (in3 - -55.2594)/836.257;
   input4 = (in4 - 1077.66)/965.051;
   input5 = (in5 - 904.405)/953.637;
   input6 = (in6 - 917.256)/957.991;
   input7 = (in7 - 932.764)/940.163;
   input8 = (in8 - 919.777)/968.448;
   input9 = (in9 - 899.441)/949.642;
   input10 = (in10 - 988.154)/949.996;
   input11 = (in11 - 722.753)/867.289;
   input12 = (in12 - 729.48)/876.103;
   input13 = (in13 - 506.856)/525.317;
   input14 = (in14 - 605.272)/677.657;
   input15 = (in15 - 730.814)/829.015;
   input16 = (in16 - 540.778)/569.246;
   input17 = (in17 - 599.591)/696.331;
   input18 = (in18 - 750.059)/898.576;
   input19 = (in19 - 803.136)/879.103;
   input20 = (in20 - -6.65512)/491.829;
   input21 = (in21 - 3.762)/1160.24;
   input22 = (in22 - 2.08566)/1205.8;
   input23 = (in23 - -195.957)/606.251;
   switch(index) {
     case 0:
         return neuron0x1434560();
     default:
         return 0.;
   }
}

double NNfunction_ss_uRdR::Value(int index, double* input) {
   input0 = (input[0] - 23.5199)/15.3463;
   input1 = (input[1] - -0.555113)/1161.63;
   input2 = (input[2] - 658.441)/627.977;
   input3 = (input[3] - -55.2594)/836.257;
   input4 = (input[4] - 1077.66)/965.051;
   input5 = (input[5] - 904.405)/953.637;
   input6 = (input[6] - 917.256)/957.991;
   input7 = (input[7] - 932.764)/940.163;
   input8 = (input[8] - 919.777)/968.448;
   input9 = (input[9] - 899.441)/949.642;
   input10 = (input[10] - 988.154)/949.996;
   input11 = (input[11] - 722.753)/867.289;
   input12 = (input[12] - 729.48)/876.103;
   input13 = (input[13] - 506.856)/525.317;
   input14 = (input[14] - 605.272)/677.657;
   input15 = (input[15] - 730.814)/829.015;
   input16 = (input[16] - 540.778)/569.246;
   input17 = (input[17] - 599.591)/696.331;
   input18 = (input[18] - 750.059)/898.576;
   input19 = (input[19] - 803.136)/879.103;
   input20 = (input[20] - -6.65512)/491.829;
   input21 = (input[21] - 3.762)/1160.24;
   input22 = (input[22] - 2.08566)/1205.8;
   input23 = (input[23] - -195.957)/606.251;
   switch(index) {
     case 0:
         return neuron0x1434560();
     default:
         return 0.;
   }
}

double NNfunction_ss_uRdR::neuron0x1400620() {
   return input0;
}

double NNfunction_ss_uRdR::neuron0x1400960() {
   return input1;
}

double NNfunction_ss_uRdR::neuron0x1400ca0() {
   return input2;
}

double NNfunction_ss_uRdR::neuron0x1400fe0() {
   return input3;
}

double NNfunction_ss_uRdR::neuron0x1401320() {
   return input4;
}

double NNfunction_ss_uRdR::neuron0x1401660() {
   return input5;
}

double NNfunction_ss_uRdR::neuron0x14019a0() {
   return input6;
}

double NNfunction_ss_uRdR::neuron0x1401ce0() {
   return input7;
}

double NNfunction_ss_uRdR::neuron0x1402020() {
   return input8;
}

double NNfunction_ss_uRdR::neuron0x1402360() {
   return input9;
}

double NNfunction_ss_uRdR::neuron0x14026a0() {
   return input10;
}

double NNfunction_ss_uRdR::neuron0x14029e0() {
   return input11;
}

double NNfunction_ss_uRdR::neuron0x1402d20() {
   return input12;
}

double NNfunction_ss_uRdR::neuron0x1403060() {
   return input13;
}

double NNfunction_ss_uRdR::neuron0x14033a0() {
   return input14;
}

double NNfunction_ss_uRdR::neuron0x14036e0() {
   return input15;
}

double NNfunction_ss_uRdR::neuron0x1403a20() {
   return input16;
}

double NNfunction_ss_uRdR::neuron0x1403f80() {
   return input17;
}

double NNfunction_ss_uRdR::neuron0x14041a0() {
   return input18;
}

double NNfunction_ss_uRdR::neuron0x14044e0() {
   return input19;
}

double NNfunction_ss_uRdR::neuron0x1404820() {
   return input20;
}

double NNfunction_ss_uRdR::neuron0x1404b60() {
   return input21;
}

double NNfunction_ss_uRdR::neuron0x1404ea0() {
   return input22;
}

double NNfunction_ss_uRdR::neuron0x14051e0() {
   return input23;
}

double NNfunction_ss_uRdR::input0x1405680() {
   double input = 0.589798;
   input += synapse0x11c0490();
   input += synapse0x14004e0();
   input += synapse0x1400520();
   input += synapse0x1405930();
   input += synapse0x1405970();
   input += synapse0x14059b0();
   input += synapse0x14059f0();
   input += synapse0x1405a30();
   input += synapse0x1405a70();
   input += synapse0x1405ab0();
   input += synapse0x1405af0();
   input += synapse0x1405b30();
   input += synapse0x1405b70();
   input += synapse0x1405bb0();
   input += synapse0x1405bf0();
   input += synapse0x1405c30();
   input += synapse0x1400450();
   input += synapse0x1400490();
   input += synapse0x11b1d30();
   input += synapse0x11b1d70();
   input += synapse0x1405e90();
   input += synapse0x1405ed0();
   input += synapse0x1405f10();
   input += synapse0x1405f50();
   return input;
}

double NNfunction_ss_uRdR::neuron0x1405680() {
   double input = input0x1405680();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x1405f90() {
   double input = -0.347183;
   input += synapse0x14062d0();
   input += synapse0x1406310();
   input += synapse0x1406350();
   input += synapse0x1406390();
   input += synapse0x14063d0();
   input += synapse0x1406410();
   input += synapse0x1406450();
   input += synapse0x1406490();
   input += synapse0x14064d0();
   input += synapse0x1405d80();
   input += synapse0x1405dc0();
   input += synapse0x1405e00();
   input += synapse0x1405e40();
   input += synapse0x1406720();
   input += synapse0x1406760();
   input += synapse0x14067a0();
   input += synapse0x1406120();
   input += synapse0x1406160();
   input += synapse0x14068f0();
   input += synapse0x1406930();
   input += synapse0x1406970();
   input += synapse0x14069b0();
   input += synapse0x14069f0();
   input += synapse0x1406a30();
   return input;
}

double NNfunction_ss_uRdR::neuron0x1405f90() {
   double input = input0x1405f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x1406a70() {
   double input = 0.635471;
   input += synapse0x1406db0();
   input += synapse0x1406df0();
   input += synapse0x1406e30();
   input += synapse0x1406e70();
   input += synapse0x1406eb0();
   input += synapse0x1406ef0();
   input += synapse0x1406f30();
   input += synapse0x1406f70();
   input += synapse0x1406fb0();
   input += synapse0x1406ff0();
   input += synapse0x1407030();
   input += synapse0x1407070();
   input += synapse0x14070b0();
   input += synapse0x14070f0();
   input += synapse0x1407130();
   input += synapse0x1407170();
   input += synapse0x1406c00();
   input += synapse0x1406c40();
   input += synapse0x11bfb80();
   input += synapse0x11bfbc0();
   input += synapse0x13ef6b0();
   input += synapse0x13ef6f0();
   input += synapse0x13ef730();
   input += synapse0x1400560();
   return input;
}

double NNfunction_ss_uRdR::neuron0x1406a70() {
   double input = input0x1406a70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x11c0300() {
   double input = -4.1666;
   input += synapse0x14066c0();
   input += synapse0x14005a0();
   input += synapse0x14005e0();
   input += synapse0x14072c0();
   input += synapse0x1407300();
   input += synapse0x1407340();
   input += synapse0x1407380();
   input += synapse0x14073c0();
   input += synapse0x1407400();
   input += synapse0x1407440();
   input += synapse0x1407480();
   input += synapse0x14074c0();
   input += synapse0x1407500();
   input += synapse0x1407540();
   input += synapse0x1407580();
   input += synapse0x14075c0();
   input += synapse0x1406510();
   input += synapse0x1406550();
   input += synapse0x1407710();
   input += synapse0x1407750();
   input += synapse0x1407790();
   input += synapse0x14077d0();
   input += synapse0x1407810();
   input += synapse0x1407850();
   return input;
}

double NNfunction_ss_uRdR::neuron0x11c0300() {
   double input = input0x11c0300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x1407890() {
   double input = -0.0753457;
   input += synapse0x1407bd0();
   input += synapse0x1407c10();
   input += synapse0x1407c50();
   input += synapse0x1407c90();
   input += synapse0x1407cd0();
   input += synapse0x1407d10();
   input += synapse0x1407d50();
   input += synapse0x1407d90();
   input += synapse0x1407dd0();
   input += synapse0x1407e10();
   input += synapse0x1407e50();
   input += synapse0x1407e90();
   input += synapse0x1407ed0();
   input += synapse0x1407f10();
   input += synapse0x1407f50();
   input += synapse0x1407f90();
   input += synapse0x1407a20();
   input += synapse0x1407a60();
   input += synapse0x14080e0();
   input += synapse0x1408120();
   input += synapse0x1408160();
   input += synapse0x14081a0();
   input += synapse0x14081e0();
   input += synapse0x1408220();
   return input;
}

double NNfunction_ss_uRdR::neuron0x1407890() {
   double input = input0x1407890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x1408260() {
   double input = -0.414135;
   input += synapse0x14085a0();
   input += synapse0x14085e0();
   input += synapse0x1408620();
   input += synapse0x1408660();
   input += synapse0x14086a0();
   input += synapse0x14086e0();
   input += synapse0x1408720();
   input += synapse0x1408760();
   input += synapse0x14087a0();
   input += synapse0x11bfef0();
   input += synapse0x11bff30();
   input += synapse0x11bff70();
   input += synapse0x11bffb0();
   input += synapse0x11bfff0();
   input += synapse0x11c0030();
   input += synapse0x11c0070();
   input += synapse0x14083f0();
   input += synapse0x1408430();
   input += synapse0x11c01c0();
   input += synapse0x11c0200();
   input += synapse0x11c0240();
   input += synapse0x11c0280();
   input += synapse0x11c02c0();
   input += synapse0x1408ff0();
   return input;
}

double NNfunction_ss_uRdR::neuron0x1408260() {
   double input = input0x1408260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x1409030() {
   double input = -0.934347;
   input += synapse0x1409370();
   input += synapse0x14093b0();
   input += synapse0x14093f0();
   input += synapse0x1409430();
   input += synapse0x1409470();
   input += synapse0x14094b0();
   input += synapse0x14094f0();
   input += synapse0x1409530();
   input += synapse0x1409570();
   input += synapse0x14095b0();
   input += synapse0x14095f0();
   input += synapse0x1409630();
   input += synapse0x1409670();
   input += synapse0x14096b0();
   input += synapse0x14096f0();
   input += synapse0x1409730();
   input += synapse0x14091c0();
   input += synapse0x1409200();
   input += synapse0x1409880();
   input += synapse0x14098c0();
   input += synapse0x1409900();
   input += synapse0x1409940();
   input += synapse0x1409980();
   input += synapse0x14099c0();
   return input;
}

double NNfunction_ss_uRdR::neuron0x1409030() {
   double input = input0x1409030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x1409a00() {
   double input = -0.296856;
   input += synapse0x1409d40();
   input += synapse0x1409d80();
   input += synapse0x1409dc0();
   input += synapse0x1409e00();
   input += synapse0x1409e40();
   input += synapse0x1409e80();
   input += synapse0x1409ec0();
   input += synapse0x1409f00();
   input += synapse0x1409f40();
   input += synapse0x1409f80();
   input += synapse0x1409fc0();
   input += synapse0x140a000();
   input += synapse0x140a040();
   input += synapse0x140a080();
   input += synapse0x140a0c0();
   input += synapse0x140a100();
   input += synapse0x1409b90();
   input += synapse0x1409bd0();
   input += synapse0x140a250();
   input += synapse0x140a290();
   input += synapse0x140a2d0();
   input += synapse0x140a310();
   input += synapse0x140a350();
   input += synapse0x140a390();
   return input;
}

double NNfunction_ss_uRdR::neuron0x1409a00() {
   double input = input0x1409a00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x140a3d0() {
   double input = -1.72596;
   input += synapse0x1403e70();
   input += synapse0x1403eb0();
   input += synapse0x1403ef0();
   input += synapse0x1403f30();
   input += synapse0x140a920();
   input += synapse0x140a960();
   input += synapse0x140a9a0();
   input += synapse0x140a9e0();
   input += synapse0x140aa20();
   input += synapse0x140aa60();
   input += synapse0x140aaa0();
   input += synapse0x140aae0();
   input += synapse0x140ab20();
   input += synapse0x140ab60();
   input += synapse0x140aba0();
   input += synapse0x140abe0();
   input += synapse0x140a560();
   input += synapse0x140a5a0();
   input += synapse0x140ad30();
   input += synapse0x140ad70();
   input += synapse0x140adb0();
   input += synapse0x140adf0();
   input += synapse0x140ae30();
   input += synapse0x140ae70();
   return input;
}

double NNfunction_ss_uRdR::neuron0x140a3d0() {
   double input = input0x140a3d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x140aeb0() {
   double input = -1.94917;
   input += synapse0x140b1f0();
   input += synapse0x140b230();
   input += synapse0x140b270();
   input += synapse0x140b2b0();
   input += synapse0x140b2f0();
   input += synapse0x140b330();
   input += synapse0x140b370();
   input += synapse0x140b3b0();
   input += synapse0x140b3f0();
   input += synapse0x140b430();
   input += synapse0x140b470();
   input += synapse0x140b4b0();
   input += synapse0x140b4f0();
   input += synapse0x140b530();
   input += synapse0x140b570();
   input += synapse0x140b5b0();
   input += synapse0x140b040();
   input += synapse0x140b080();
   input += synapse0x140b700();
   input += synapse0x140b740();
   input += synapse0x140b780();
   input += synapse0x140b7c0();
   input += synapse0x140b800();
   input += synapse0x140b840();
   return input;
}

double NNfunction_ss_uRdR::neuron0x140aeb0() {
   double input = input0x140aeb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x140b880() {
   double input = -0.194149;
   input += synapse0x140bbc0();
   input += synapse0x140bc00();
   input += synapse0x140bc40();
   input += synapse0x140bc80();
   input += synapse0x140bcc0();
   input += synapse0x140bd00();
   input += synapse0x140bd40();
   input += synapse0x140bd80();
   input += synapse0x140bdc0();
   input += synapse0x140be00();
   input += synapse0x140be40();
   input += synapse0x140be80();
   input += synapse0x140bec0();
   input += synapse0x140bf00();
   input += synapse0x140bf40();
   input += synapse0x140bf80();
   input += synapse0x140ba10();
   input += synapse0x140ba50();
   input += synapse0x14087e0();
   input += synapse0x1408820();
   input += synapse0x1408860();
   input += synapse0x14088a0();
   input += synapse0x14088e0();
   input += synapse0x1408920();
   return input;
}

double NNfunction_ss_uRdR::neuron0x140b880() {
   double input = input0x140b880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x1408960() {
   double input = 0.77668;
   input += synapse0x1408ca0();
   input += synapse0x1408ce0();
   input += synapse0x1408d20();
   input += synapse0x1408d60();
   input += synapse0x1408da0();
   input += synapse0x1408de0();
   input += synapse0x1408e20();
   input += synapse0x1408e60();
   input += synapse0x1408ea0();
   input += synapse0x1408ee0();
   input += synapse0x1408f20();
   input += synapse0x1408f60();
   input += synapse0x1408fa0();
   input += synapse0x140d0e0();
   input += synapse0x140d120();
   input += synapse0x140d160();
   input += synapse0x1408af0();
   input += synapse0x1408b30();
   input += synapse0x140d2b0();
   input += synapse0x140d2f0();
   input += synapse0x140d330();
   input += synapse0x140d370();
   input += synapse0x140d3b0();
   input += synapse0x140d3f0();
   return input;
}

double NNfunction_ss_uRdR::neuron0x1408960() {
   double input = input0x1408960();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x140d430() {
   double input = -1.51734;
   input += synapse0x140d770();
   input += synapse0x140d7b0();
   input += synapse0x140d7f0();
   input += synapse0x140d830();
   input += synapse0x140d870();
   input += synapse0x140d8b0();
   input += synapse0x140d8f0();
   input += synapse0x140d930();
   input += synapse0x140d970();
   input += synapse0x140d9b0();
   input += synapse0x140d9f0();
   input += synapse0x140da30();
   input += synapse0x140da70();
   input += synapse0x140dab0();
   input += synapse0x140daf0();
   input += synapse0x140db30();
   input += synapse0x140d5c0();
   input += synapse0x140d600();
   input += synapse0x140dc80();
   input += synapse0x140dcc0();
   input += synapse0x140dd00();
   input += synapse0x140dd40();
   input += synapse0x140dd80();
   input += synapse0x140ddc0();
   return input;
}

double NNfunction_ss_uRdR::neuron0x140d430() {
   double input = input0x140d430();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x140de00() {
   double input = 0.0958321;
   input += synapse0x140e140();
   input += synapse0x140e180();
   input += synapse0x140e1c0();
   input += synapse0x140e200();
   input += synapse0x140e240();
   input += synapse0x140e280();
   input += synapse0x140e2c0();
   input += synapse0x140e300();
   input += synapse0x140e340();
   input += synapse0x140e380();
   input += synapse0x140e3c0();
   input += synapse0x140e400();
   input += synapse0x140e440();
   input += synapse0x140e480();
   input += synapse0x140e4c0();
   input += synapse0x140e500();
   input += synapse0x140df90();
   input += synapse0x140dfd0();
   input += synapse0x140e650();
   input += synapse0x140e690();
   input += synapse0x140e6d0();
   input += synapse0x140e710();
   input += synapse0x140e750();
   input += synapse0x140e790();
   return input;
}

double NNfunction_ss_uRdR::neuron0x140de00() {
   double input = input0x140de00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x140e7d0() {
   double input = -0.921856;
   input += synapse0x140eb10();
   input += synapse0x140eb50();
   input += synapse0x140eb90();
   input += synapse0x140ebd0();
   input += synapse0x140ec10();
   input += synapse0x140ec50();
   input += synapse0x140ec90();
   input += synapse0x140ecd0();
   input += synapse0x140ed10();
   input += synapse0x140ed50();
   input += synapse0x140ed90();
   input += synapse0x140edd0();
   input += synapse0x140ee10();
   input += synapse0x140ee50();
   input += synapse0x140ee90();
   input += synapse0x140eed0();
   input += synapse0x140e960();
   input += synapse0x140e9a0();
   input += synapse0x140f020();
   input += synapse0x140f060();
   input += synapse0x140f0a0();
   input += synapse0x140f0e0();
   input += synapse0x140f120();
   input += synapse0x140f160();
   return input;
}

double NNfunction_ss_uRdR::neuron0x140e7d0() {
   double input = input0x140e7d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x140f1a0() {
   double input = 0.173263;
   input += synapse0x140f4e0();
   input += synapse0x1400840();
   input += synapse0x1400880();
   input += synapse0x1400b80();
   input += synapse0x1400bc0();
   input += synapse0x1400ec0();
   input += synapse0x1400f00();
   input += synapse0x1401200();
   input += synapse0x1401240();
   input += synapse0x1401540();
   input += synapse0x1401580();
   input += synapse0x1401880();
   input += synapse0x14018c0();
   input += synapse0x1401bc0();
   input += synapse0x1401c00();
   input += synapse0x1401f00();
   input += synapse0x1401f40();
   input += synapse0x1402240();
   input += synapse0x1402280();
   input += synapse0x1402580();
   input += synapse0x14025c0();
   input += synapse0x14028c0();
   input += synapse0x1402900();
   input += synapse0x1402c00();
   return input;
}

double NNfunction_ss_uRdR::neuron0x140f1a0() {
   double input = input0x140f1a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x1410fb0() {
   double input = 0.192435;
   input += synapse0x1402c40();
   input += synapse0x1403900();
   input += synapse0x1403940();
   input += synapse0x140f330();
   input += synapse0x140f370();
   input += synapse0x1403c40();
   input += synapse0x1403c80();
   input += synapse0x11b1c10();
   input += synapse0x11b1c50();
   input += synapse0x14043c0();
   input += synapse0x1404400();
   input += synapse0x1404700();
   input += synapse0x1404740();
   input += synapse0x1404a40();
   input += synapse0x1404a80();
   input += synapse0x1404d80();
   input += synapse0x1404dc0();
   input += synapse0x14050c0();
   input += synapse0x1405100();
   input += synapse0x1405400();
   input += synapse0x1405440();
   input += synapse0x1402f40();
   input += synapse0x1402f80();
   input += synapse0x1411250();
   return input;
}

double NNfunction_ss_uRdR::neuron0x1410fb0() {
   double input = input0x1410fb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x1411290() {
   double input = 0.0209891;
   input += synapse0x14115d0();
   input += synapse0x1411610();
   input += synapse0x1411650();
   input += synapse0x1411690();
   input += synapse0x14116d0();
   input += synapse0x1411710();
   input += synapse0x1411750();
   input += synapse0x1411790();
   input += synapse0x14117d0();
   input += synapse0x1411810();
   input += synapse0x1411850();
   input += synapse0x1411890();
   input += synapse0x14118d0();
   input += synapse0x1411910();
   input += synapse0x1411950();
   input += synapse0x1411990();
   input += synapse0x1411420();
   input += synapse0x1411460();
   input += synapse0x1411ae0();
   input += synapse0x1411b20();
   input += synapse0x1411b60();
   input += synapse0x1411ba0();
   input += synapse0x1411be0();
   input += synapse0x1411c20();
   return input;
}

double NNfunction_ss_uRdR::neuron0x1411290() {
   double input = input0x1411290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x1411c60() {
   double input = 1.74926;
   input += synapse0x1411fa0();
   input += synapse0x1411fe0();
   input += synapse0x1412020();
   input += synapse0x1412060();
   input += synapse0x14120a0();
   input += synapse0x14120e0();
   input += synapse0x1412120();
   input += synapse0x1412160();
   input += synapse0x14121a0();
   input += synapse0x14121e0();
   input += synapse0x1412220();
   input += synapse0x1412260();
   input += synapse0x14122a0();
   input += synapse0x14122e0();
   input += synapse0x1412320();
   input += synapse0x1412360();
   input += synapse0x1411df0();
   input += synapse0x1411e30();
   input += synapse0x14124b0();
   input += synapse0x14124f0();
   input += synapse0x1412530();
   input += synapse0x1412570();
   input += synapse0x14125b0();
   input += synapse0x14125f0();
   return input;
}

double NNfunction_ss_uRdR::neuron0x1411c60() {
   double input = input0x1411c60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x1412630() {
   double input = 0.787963;
   input += synapse0x1412970();
   input += synapse0x14129b0();
   input += synapse0x14129f0();
   input += synapse0x1412a30();
   input += synapse0x1412a70();
   input += synapse0x1412ab0();
   input += synapse0x1412af0();
   input += synapse0x1412b30();
   input += synapse0x1412b70();
   input += synapse0x1412bb0();
   input += synapse0x1412bf0();
   input += synapse0x1412c30();
   input += synapse0x1412c70();
   input += synapse0x1412cb0();
   input += synapse0x1412cf0();
   input += synapse0x1412d30();
   input += synapse0x14127c0();
   input += synapse0x1412800();
   input += synapse0x1412e80();
   input += synapse0x1412ec0();
   input += synapse0x1412f00();
   input += synapse0x1412f40();
   input += synapse0x1412f80();
   input += synapse0x1412fc0();
   return input;
}

double NNfunction_ss_uRdR::neuron0x1412630() {
   double input = input0x1412630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x1413000() {
   double input = 0.669616;
   input += synapse0x1413340();
   input += synapse0x1413380();
   input += synapse0x14133c0();
   input += synapse0x1413400();
   input += synapse0x1413440();
   input += synapse0x1413480();
   input += synapse0x14134c0();
   input += synapse0x1413500();
   input += synapse0x1413540();
   input += synapse0x1413580();
   input += synapse0x14135c0();
   input += synapse0x1413600();
   input += synapse0x1413640();
   input += synapse0x1413680();
   input += synapse0x14136c0();
   input += synapse0x1413700();
   input += synapse0x1413190();
   input += synapse0x14131d0();
   input += synapse0x1413850();
   input += synapse0x1413890();
   input += synapse0x14138d0();
   input += synapse0x1413910();
   input += synapse0x1413950();
   input += synapse0x1413990();
   return input;
}

double NNfunction_ss_uRdR::neuron0x1413000() {
   double input = input0x1413000();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x14139d0() {
   double input = 2.01664;
   input += synapse0x1413d10();
   input += synapse0x1413d50();
   input += synapse0x1413d90();
   input += synapse0x1413dd0();
   input += synapse0x1413e10();
   input += synapse0x1413e50();
   input += synapse0x1413e90();
   input += synapse0x1413ed0();
   input += synapse0x1413f10();
   input += synapse0x140c0d0();
   input += synapse0x140c110();
   input += synapse0x140c150();
   input += synapse0x140c190();
   input += synapse0x140c1d0();
   input += synapse0x140c210();
   input += synapse0x140c250();
   input += synapse0x1413b60();
   input += synapse0x1413ba0();
   input += synapse0x140c3a0();
   input += synapse0x140c3e0();
   input += synapse0x140c420();
   input += synapse0x140c460();
   input += synapse0x140c4a0();
   input += synapse0x140c4e0();
   return input;
}

double NNfunction_ss_uRdR::neuron0x14139d0() {
   double input = input0x14139d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x140c520() {
   double input = 0.355832;
   input += synapse0x140c860();
   input += synapse0x140c8a0();
   input += synapse0x140c8e0();
   input += synapse0x140c920();
   input += synapse0x140c960();
   input += synapse0x140c9a0();
   input += synapse0x140c9e0();
   input += synapse0x140ca20();
   input += synapse0x140ca60();
   input += synapse0x140caa0();
   input += synapse0x140cae0();
   input += synapse0x140cb20();
   input += synapse0x140cb60();
   input += synapse0x140cba0();
   input += synapse0x140cbe0();
   input += synapse0x140cc20();
   input += synapse0x140c6b0();
   input += synapse0x140c6f0();
   input += synapse0x140cd70();
   input += synapse0x140cdb0();
   input += synapse0x140cdf0();
   input += synapse0x140ce30();
   input += synapse0x140ce70();
   input += synapse0x140ceb0();
   return input;
}

double NNfunction_ss_uRdR::neuron0x140c520() {
   double input = input0x140c520();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x140cef0() {
   double input = 0.79238;
   input += synapse0x140d080();
   input += synapse0x1416110();
   input += synapse0x1416150();
   input += synapse0x1416190();
   input += synapse0x14161d0();
   input += synapse0x1416210();
   input += synapse0x1416250();
   input += synapse0x1416290();
   input += synapse0x14162d0();
   input += synapse0x1416310();
   input += synapse0x1416350();
   input += synapse0x1416390();
   input += synapse0x14163d0();
   input += synapse0x1416410();
   input += synapse0x1416450();
   input += synapse0x1416490();
   input += synapse0x1415f60();
   input += synapse0x1415fa0();
   input += synapse0x14165e0();
   input += synapse0x1416620();
   input += synapse0x1416660();
   input += synapse0x14166a0();
   input += synapse0x14166e0();
   input += synapse0x1416720();
   return input;
}

double NNfunction_ss_uRdR::neuron0x140cef0() {
   double input = input0x140cef0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x1416760() {
   double input = 2.45811;
   input += synapse0x1416aa0();
   input += synapse0x1416ae0();
   input += synapse0x1416b20();
   input += synapse0x1416b60();
   input += synapse0x1416ba0();
   input += synapse0x1416be0();
   input += synapse0x1416c20();
   input += synapse0x1416c60();
   input += synapse0x1416ca0();
   input += synapse0x1416ce0();
   input += synapse0x1416d20();
   input += synapse0x1416d60();
   input += synapse0x1416da0();
   input += synapse0x1416de0();
   input += synapse0x1416e20();
   input += synapse0x1416e60();
   input += synapse0x14168f0();
   input += synapse0x1416930();
   input += synapse0x1416fb0();
   input += synapse0x1416ff0();
   input += synapse0x1417030();
   input += synapse0x1417070();
   input += synapse0x14170b0();
   input += synapse0x14170f0();
   return input;
}

double NNfunction_ss_uRdR::neuron0x1416760() {
   double input = input0x1416760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x1417130() {
   double input = -1.31967;
   input += synapse0x1417470();
   input += synapse0x14174b0();
   input += synapse0x14174f0();
   input += synapse0x1417530();
   input += synapse0x1417570();
   input += synapse0x14175b0();
   input += synapse0x14175f0();
   input += synapse0x1417630();
   input += synapse0x1417670();
   input += synapse0x14176b0();
   input += synapse0x14176f0();
   input += synapse0x1417730();
   input += synapse0x1417770();
   input += synapse0x14177b0();
   input += synapse0x14177f0();
   input += synapse0x1417830();
   input += synapse0x14172c0();
   input += synapse0x1417300();
   input += synapse0x1417980();
   input += synapse0x14179c0();
   input += synapse0x1417a00();
   input += synapse0x1417a40();
   input += synapse0x1417a80();
   input += synapse0x1417ac0();
   return input;
}

double NNfunction_ss_uRdR::neuron0x1417130() {
   double input = input0x1417130();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x1417b00() {
   double input = -0.00619314;
   input += synapse0x1417e40();
   input += synapse0x1417e80();
   input += synapse0x1417ec0();
   input += synapse0x1417f00();
   input += synapse0x1417f40();
   input += synapse0x1417f80();
   input += synapse0x1417fc0();
   input += synapse0x1418000();
   input += synapse0x1418040();
   input += synapse0x1418080();
   input += synapse0x14180c0();
   input += synapse0x1418100();
   input += synapse0x1418140();
   input += synapse0x1418180();
   input += synapse0x14181c0();
   input += synapse0x1418200();
   input += synapse0x1417c90();
   input += synapse0x1417cd0();
   input += synapse0x1418350();
   input += synapse0x1418390();
   input += synapse0x14183d0();
   input += synapse0x1418410();
   input += synapse0x1418450();
   input += synapse0x1418490();
   return input;
}

double NNfunction_ss_uRdR::neuron0x1417b00() {
   double input = input0x1417b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x14184d0() {
   double input = -0.205832;
   input += synapse0x1418810();
   input += synapse0x1418850();
   input += synapse0x1418890();
   input += synapse0x14188d0();
   input += synapse0x1418910();
   input += synapse0x1418950();
   input += synapse0x1418990();
   input += synapse0x14189d0();
   input += synapse0x1418a10();
   input += synapse0x1418a50();
   input += synapse0x1418a90();
   input += synapse0x1418ad0();
   input += synapse0x1418b10();
   input += synapse0x1418b50();
   input += synapse0x1418b90();
   input += synapse0x1418bd0();
   input += synapse0x1418660();
   input += synapse0x14186a0();
   input += synapse0x1418d20();
   input += synapse0x1418d60();
   input += synapse0x1418da0();
   input += synapse0x1418de0();
   input += synapse0x1418e20();
   input += synapse0x1418e60();
   return input;
}

double NNfunction_ss_uRdR::neuron0x14184d0() {
   double input = input0x14184d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x1418ea0() {
   double input = -0.34556;
   input += synapse0x14191e0();
   input += synapse0x1419220();
   input += synapse0x1419260();
   input += synapse0x14192a0();
   input += synapse0x14192e0();
   input += synapse0x1419320();
   input += synapse0x1419360();
   input += synapse0x14193a0();
   input += synapse0x14193e0();
   input += synapse0x1419420();
   input += synapse0x1419460();
   input += synapse0x14194a0();
   input += synapse0x14194e0();
   input += synapse0x1419520();
   input += synapse0x1419560();
   input += synapse0x14195a0();
   input += synapse0x1419030();
   input += synapse0x1419070();
   input += synapse0x14196f0();
   input += synapse0x1419730();
   input += synapse0x1419770();
   input += synapse0x14197b0();
   input += synapse0x14197f0();
   input += synapse0x1419830();
   return input;
}

double NNfunction_ss_uRdR::neuron0x1418ea0() {
   double input = input0x1418ea0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x1419870() {
   double input = -1.42744;
   input += synapse0x1419bb0();
   input += synapse0x1419bf0();
   input += synapse0x1419c30();
   input += synapse0x1419c70();
   input += synapse0x1419cb0();
   input += synapse0x1419cf0();
   input += synapse0x1419d30();
   input += synapse0x1419d70();
   input += synapse0x1419db0();
   input += synapse0x1419df0();
   input += synapse0x1419e30();
   input += synapse0x1419e70();
   input += synapse0x1419eb0();
   input += synapse0x1419ef0();
   input += synapse0x1419f30();
   input += synapse0x1419f70();
   input += synapse0x1419a00();
   input += synapse0x1419a40();
   input += synapse0x141a0c0();
   input += synapse0x141a100();
   input += synapse0x141a140();
   input += synapse0x141a180();
   input += synapse0x141a1c0();
   input += synapse0x141a200();
   return input;
}

double NNfunction_ss_uRdR::neuron0x1419870() {
   double input = input0x1419870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x141a240() {
   double input = -0.728172;
   input += synapse0x141a580();
   input += synapse0x141a5c0();
   input += synapse0x141a600();
   input += synapse0x141a640();
   input += synapse0x141a680();
   input += synapse0x141a6c0();
   input += synapse0x141a700();
   input += synapse0x141a740();
   input += synapse0x141a780();
   input += synapse0x141a7c0();
   input += synapse0x141a800();
   input += synapse0x141a840();
   input += synapse0x141a880();
   input += synapse0x141a8c0();
   input += synapse0x141a900();
   input += synapse0x141a940();
   input += synapse0x141a3d0();
   input += synapse0x141a410();
   input += synapse0x141aa90();
   input += synapse0x141aad0();
   input += synapse0x141ab10();
   input += synapse0x141ab50();
   input += synapse0x141ab90();
   input += synapse0x141abd0();
   return input;
}

double NNfunction_ss_uRdR::neuron0x141a240() {
   double input = input0x141a240();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x141ac10() {
   double input = 3.86253;
   input += synapse0x141af50();
   input += synapse0x140f520();
   input += synapse0x140f560();
   input += synapse0x140f5a0();
   input += synapse0x140f7f0();
   input += synapse0x140f830();
   input += synapse0x140f870();
   input += synapse0x140fac0();
   input += synapse0x140fb00();
   input += synapse0x140fd50();
   input += synapse0x140fd90();
   input += synapse0x140fdd0();
   input += synapse0x1410020();
   input += synapse0x1410060();
   input += synapse0x14102b0();
   input += synapse0x14102f0();
   input += synapse0x141ada0();
   input += synapse0x141ade0();
   input += synapse0x1410440();
   input += synapse0x1410950();
   input += synapse0x1410990();
   input += synapse0x14109d0();
   input += synapse0x1410c20();
   input += synapse0x1410c60();
   return input;
}

double NNfunction_ss_uRdR::neuron0x141ac10() {
   double input = input0x141ac10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x1410ca0() {
   double input = -1.63371;
   input += synapse0x1410510();
   input += synapse0x1410550();
   input += synapse0x1410590();
   input += synapse0x14105d0();
   input += synapse0x1410f50();
   input += synapse0x141d2a0();
   input += synapse0x141d2e0();
   input += synapse0x141d320();
   input += synapse0x141d360();
   input += synapse0x141d3a0();
   input += synapse0x141d3e0();
   input += synapse0x141d420();
   input += synapse0x141d460();
   input += synapse0x141d4a0();
   input += synapse0x141d4e0();
   input += synapse0x141d520();
   input += synapse0x1410e30();
   input += synapse0x1410e70();
   input += synapse0x141d670();
   input += synapse0x141d6b0();
   input += synapse0x141d6f0();
   input += synapse0x141d730();
   input += synapse0x141d770();
   input += synapse0x141d7b0();
   return input;
}

double NNfunction_ss_uRdR::neuron0x1410ca0() {
   double input = input0x1410ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x141d7f0() {
   double input = -0.453245;
   input += synapse0x141db30();
   input += synapse0x141db70();
   input += synapse0x141dbb0();
   input += synapse0x141dbf0();
   input += synapse0x141dc30();
   input += synapse0x141dc70();
   input += synapse0x141dcb0();
   input += synapse0x141dcf0();
   input += synapse0x141dd30();
   input += synapse0x141dd70();
   input += synapse0x141ddb0();
   input += synapse0x141ddf0();
   input += synapse0x141de30();
   input += synapse0x141de70();
   input += synapse0x141deb0();
   input += synapse0x141def0();
   input += synapse0x141d980();
   input += synapse0x141d9c0();
   input += synapse0x141e040();
   input += synapse0x141e080();
   input += synapse0x141e0c0();
   input += synapse0x141e100();
   input += synapse0x141e140();
   input += synapse0x141e180();
   return input;
}

double NNfunction_ss_uRdR::neuron0x141d7f0() {
   double input = input0x141d7f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x141e1c0() {
   double input = 1.00365;
   input += synapse0x141e500();
   input += synapse0x141e540();
   input += synapse0x141e580();
   input += synapse0x141e5c0();
   input += synapse0x141e600();
   input += synapse0x141e640();
   input += synapse0x141e680();
   input += synapse0x141e6c0();
   input += synapse0x141e700();
   input += synapse0x141e740();
   input += synapse0x141e780();
   input += synapse0x141e7c0();
   input += synapse0x141e800();
   input += synapse0x141e840();
   input += synapse0x141e880();
   input += synapse0x141e8c0();
   input += synapse0x141e350();
   input += synapse0x141e390();
   input += synapse0x141ea10();
   input += synapse0x141ea50();
   input += synapse0x141ea90();
   input += synapse0x141ead0();
   input += synapse0x141eb10();
   input += synapse0x141eb50();
   return input;
}

double NNfunction_ss_uRdR::neuron0x141e1c0() {
   double input = input0x141e1c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x141eb90() {
   double input = 1.00233;
   input += synapse0x141eed0();
   input += synapse0x141ef10();
   input += synapse0x141ef50();
   input += synapse0x141ef90();
   input += synapse0x141efd0();
   input += synapse0x141f010();
   input += synapse0x141f050();
   input += synapse0x141f090();
   input += synapse0x141f0d0();
   input += synapse0x141f110();
   input += synapse0x141f150();
   input += synapse0x141f190();
   input += synapse0x141f1d0();
   input += synapse0x141f210();
   input += synapse0x141f250();
   input += synapse0x141f290();
   input += synapse0x141ed20();
   input += synapse0x141ed60();
   input += synapse0x141f3e0();
   input += synapse0x141f420();
   input += synapse0x141f460();
   input += synapse0x141f4a0();
   input += synapse0x141f4e0();
   input += synapse0x141f520();
   return input;
}

double NNfunction_ss_uRdR::neuron0x141eb90() {
   double input = input0x141eb90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x141f560() {
   double input = 2.03566;
   input += synapse0x141f8a0();
   input += synapse0x141f8e0();
   input += synapse0x141f920();
   input += synapse0x141f960();
   input += synapse0x141f9a0();
   input += synapse0x141f9e0();
   input += synapse0x141fa20();
   input += synapse0x141fa60();
   input += synapse0x141faa0();
   input += synapse0x141fae0();
   input += synapse0x141fb20();
   input += synapse0x141fb60();
   input += synapse0x141fba0();
   input += synapse0x141fbe0();
   input += synapse0x141fc20();
   input += synapse0x141fc60();
   input += synapse0x141f6f0();
   input += synapse0x141f730();
   input += synapse0x141fdb0();
   input += synapse0x141fdf0();
   input += synapse0x141fe30();
   input += synapse0x141fe70();
   input += synapse0x141feb0();
   input += synapse0x141fef0();
   return input;
}

double NNfunction_ss_uRdR::neuron0x141f560() {
   double input = input0x141f560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x141ff30() {
   double input = 1.08219;
   input += synapse0x1420270();
   input += synapse0x14202b0();
   input += synapse0x14202f0();
   input += synapse0x1420330();
   input += synapse0x1420370();
   input += synapse0x14203b0();
   input += synapse0x14203f0();
   input += synapse0x1420430();
   input += synapse0x1420470();
   input += synapse0x14204b0();
   input += synapse0x14204f0();
   input += synapse0x1420530();
   input += synapse0x1420570();
   input += synapse0x14205b0();
   input += synapse0x14205f0();
   input += synapse0x1420630();
   input += synapse0x14200c0();
   input += synapse0x1420100();
   input += synapse0x1420780();
   input += synapse0x14207c0();
   input += synapse0x1420800();
   input += synapse0x1420840();
   input += synapse0x1420880();
   input += synapse0x14208c0();
   return input;
}

double NNfunction_ss_uRdR::neuron0x141ff30() {
   double input = input0x141ff30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x1420900() {
   double input = 0.696901;
   input += synapse0x1420c40();
   input += synapse0x1420c80();
   input += synapse0x1420cc0();
   input += synapse0x1420d00();
   input += synapse0x1420d40();
   input += synapse0x1420d80();
   input += synapse0x1420dc0();
   input += synapse0x1420e00();
   input += synapse0x1420e40();
   input += synapse0x1420e80();
   input += synapse0x1420ec0();
   input += synapse0x1420f00();
   input += synapse0x1420f40();
   input += synapse0x1420f80();
   input += synapse0x1420fc0();
   input += synapse0x1421000();
   input += synapse0x1420a90();
   input += synapse0x1420ad0();
   input += synapse0x1421150();
   input += synapse0x1421190();
   input += synapse0x14211d0();
   input += synapse0x1421210();
   input += synapse0x1421250();
   input += synapse0x1421290();
   return input;
}

double NNfunction_ss_uRdR::neuron0x1420900() {
   double input = input0x1420900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x14212d0() {
   double input = 0.682756;
   input += synapse0x1421610();
   input += synapse0x1421650();
   input += synapse0x1421690();
   input += synapse0x14216d0();
   input += synapse0x1421710();
   input += synapse0x1421750();
   input += synapse0x1421790();
   input += synapse0x14217d0();
   input += synapse0x1421810();
   input += synapse0x1421850();
   input += synapse0x1421890();
   input += synapse0x14218d0();
   input += synapse0x1421910();
   input += synapse0x1421950();
   input += synapse0x1421990();
   input += synapse0x14219d0();
   input += synapse0x1421460();
   input += synapse0x14214a0();
   input += synapse0x1421b20();
   input += synapse0x1421b60();
   input += synapse0x1421ba0();
   input += synapse0x1421be0();
   input += synapse0x1421c20();
   input += synapse0x1421c60();
   return input;
}

double NNfunction_ss_uRdR::neuron0x14212d0() {
   double input = input0x14212d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x1421ca0() {
   double input = -2.3616;
   input += synapse0x140a710();
   input += synapse0x140a750();
   input += synapse0x140a790();
   input += synapse0x140a7d0();
   input += synapse0x140a810();
   input += synapse0x140a850();
   input += synapse0x140a890();
   input += synapse0x140a8d0();
   input += synapse0x14223f0();
   input += synapse0x1422430();
   input += synapse0x1422470();
   input += synapse0x14224b0();
   input += synapse0x14224f0();
   input += synapse0x1422530();
   input += synapse0x1422570();
   input += synapse0x14225b0();
   input += synapse0x1421e30();
   input += synapse0x1421e70();
   input += synapse0x1422700();
   input += synapse0x1422740();
   input += synapse0x1422780();
   input += synapse0x14227c0();
   input += synapse0x1422800();
   input += synapse0x1422840();
   return input;
}

double NNfunction_ss_uRdR::neuron0x1421ca0() {
   double input = input0x1421ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x1422880() {
   double input = -0.253941;
   input += synapse0x1422bc0();
   input += synapse0x1422c00();
   input += synapse0x1422c40();
   input += synapse0x1422c80();
   input += synapse0x1422cc0();
   input += synapse0x1422d00();
   input += synapse0x1422d40();
   input += synapse0x1422d80();
   input += synapse0x1422dc0();
   input += synapse0x1422e00();
   input += synapse0x1422e40();
   input += synapse0x1422e80();
   input += synapse0x1422ec0();
   input += synapse0x1422f00();
   input += synapse0x1422f40();
   input += synapse0x1422f80();
   input += synapse0x1422a10();
   input += synapse0x1422a50();
   input += synapse0x14230d0();
   input += synapse0x1423110();
   input += synapse0x1423150();
   input += synapse0x1423190();
   input += synapse0x14231d0();
   input += synapse0x1423210();
   return input;
}

double NNfunction_ss_uRdR::neuron0x1422880() {
   double input = input0x1422880();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x1423250() {
   double input = -0.606332;
   input += synapse0x1423590();
   input += synapse0x14235d0();
   input += synapse0x1423610();
   input += synapse0x1423650();
   input += synapse0x1423690();
   input += synapse0x14236d0();
   input += synapse0x1423710();
   input += synapse0x1423750();
   input += synapse0x1423790();
   input += synapse0x14237d0();
   input += synapse0x1423810();
   input += synapse0x1423850();
   input += synapse0x1423890();
   input += synapse0x14238d0();
   input += synapse0x1423910();
   input += synapse0x1423950();
   input += synapse0x14233e0();
   input += synapse0x1423420();
   input += synapse0x1413f50();
   input += synapse0x1413f90();
   input += synapse0x1413fd0();
   input += synapse0x1414010();
   input += synapse0x1414050();
   input += synapse0x1414090();
   return input;
}

double NNfunction_ss_uRdR::neuron0x1423250() {
   double input = input0x1423250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x14140d0() {
   double input = 0.665273;
   input += synapse0x1414410();
   input += synapse0x1414450();
   input += synapse0x1414490();
   input += synapse0x14144d0();
   input += synapse0x1414510();
   input += synapse0x1414550();
   input += synapse0x1414590();
   input += synapse0x14145d0();
   input += synapse0x1414610();
   input += synapse0x1414650();
   input += synapse0x1414690();
   input += synapse0x14146d0();
   input += synapse0x1414710();
   input += synapse0x1414750();
   input += synapse0x1414790();
   input += synapse0x14147d0();
   input += synapse0x1414260();
   input += synapse0x14142a0();
   input += synapse0x1414920();
   input += synapse0x1414960();
   input += synapse0x14149a0();
   input += synapse0x14149e0();
   input += synapse0x1414a20();
   input += synapse0x1414a60();
   return input;
}

double NNfunction_ss_uRdR::neuron0x14140d0() {
   double input = input0x14140d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x1414aa0() {
   double input = 1.2106;
   input += synapse0x1414de0();
   input += synapse0x1414e20();
   input += synapse0x1414e60();
   input += synapse0x1414ea0();
   input += synapse0x1414ee0();
   input += synapse0x1414f20();
   input += synapse0x1414f60();
   input += synapse0x1414fa0();
   input += synapse0x1414fe0();
   input += synapse0x1415020();
   input += synapse0x1415060();
   input += synapse0x14150a0();
   input += synapse0x14150e0();
   input += synapse0x1415120();
   input += synapse0x1415160();
   input += synapse0x14151a0();
   input += synapse0x1414c30();
   input += synapse0x1414c70();
   input += synapse0x14152f0();
   input += synapse0x1415330();
   input += synapse0x1415370();
   input += synapse0x14153b0();
   input += synapse0x14153f0();
   input += synapse0x1415430();
   return input;
}

double NNfunction_ss_uRdR::neuron0x1414aa0() {
   double input = input0x1414aa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x1415470() {
   double input = -0.27333;
   input += synapse0x14157b0();
   input += synapse0x14157f0();
   input += synapse0x1415830();
   input += synapse0x1415870();
   input += synapse0x14158b0();
   input += synapse0x14158f0();
   input += synapse0x1415930();
   input += synapse0x1415970();
   input += synapse0x14159b0();
   input += synapse0x14159f0();
   input += synapse0x1415a30();
   input += synapse0x1415a70();
   input += synapse0x1415ab0();
   input += synapse0x1415af0();
   input += synapse0x1415b30();
   input += synapse0x1415b70();
   input += synapse0x1415600();
   input += synapse0x1415640();
   input += synapse0x1415cc0();
   input += synapse0x1415d00();
   input += synapse0x1415d40();
   input += synapse0x1415d80();
   input += synapse0x1415dc0();
   input += synapse0x1415e00();
   return input;
}

double NNfunction_ss_uRdR::neuron0x1415470() {
   double input = input0x1415470();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x1427ab0() {
   double input = 0.506108;
   input += synapse0x1427cd0();
   input += synapse0x1427d10();
   input += synapse0x1427d50();
   input += synapse0x1427d90();
   input += synapse0x1427dd0();
   input += synapse0x1427e10();
   input += synapse0x1427e50();
   input += synapse0x1427e90();
   input += synapse0x1427ed0();
   input += synapse0x1427f10();
   input += synapse0x1427f50();
   input += synapse0x1427f90();
   input += synapse0x1427fd0();
   input += synapse0x1428010();
   input += synapse0x1428050();
   input += synapse0x1428090();
   input += synapse0x1415e40();
   input += synapse0x1415e80();
   input += synapse0x14281e0();
   input += synapse0x1428220();
   input += synapse0x1428260();
   input += synapse0x14282a0();
   input += synapse0x14282e0();
   input += synapse0x1428320();
   return input;
}

double NNfunction_ss_uRdR::neuron0x1427ab0() {
   double input = input0x1427ab0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x1428360() {
   double input = 2.1963;
   input += synapse0x14286a0();
   input += synapse0x14286e0();
   input += synapse0x1428720();
   input += synapse0x1428760();
   input += synapse0x14287a0();
   input += synapse0x14287e0();
   input += synapse0x1428820();
   input += synapse0x1428860();
   input += synapse0x14288a0();
   input += synapse0x14288e0();
   input += synapse0x1428920();
   input += synapse0x1428960();
   input += synapse0x14289a0();
   input += synapse0x14289e0();
   input += synapse0x1428a20();
   input += synapse0x1428a60();
   input += synapse0x14284f0();
   input += synapse0x1428530();
   input += synapse0x1428bb0();
   input += synapse0x1428bf0();
   input += synapse0x1428c30();
   input += synapse0x1428c70();
   input += synapse0x1428cb0();
   input += synapse0x1428cf0();
   return input;
}

double NNfunction_ss_uRdR::neuron0x1428360() {
   double input = input0x1428360();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x1428d30() {
   double input = -0.00606259;
   input += synapse0x1429070();
   input += synapse0x14290b0();
   input += synapse0x14290f0();
   input += synapse0x1429130();
   input += synapse0x1429170();
   input += synapse0x14291b0();
   input += synapse0x14291f0();
   input += synapse0x1429230();
   input += synapse0x1429270();
   input += synapse0x14292b0();
   input += synapse0x14292f0();
   input += synapse0x1429330();
   input += synapse0x1429370();
   input += synapse0x14293b0();
   input += synapse0x14293f0();
   input += synapse0x1429430();
   input += synapse0x1428ec0();
   input += synapse0x1428f00();
   input += synapse0x1429580();
   input += synapse0x14295c0();
   input += synapse0x1429600();
   input += synapse0x1429640();
   input += synapse0x1429680();
   input += synapse0x14296c0();
   return input;
}

double NNfunction_ss_uRdR::neuron0x1428d30() {
   double input = input0x1428d30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x1429700() {
   double input = -0.46844;
   input += synapse0x1429a40();
   input += synapse0x1429a80();
   input += synapse0x1429ac0();
   input += synapse0x1429b00();
   input += synapse0x1429b40();
   input += synapse0x1429b80();
   input += synapse0x1429bc0();
   input += synapse0x1429c00();
   input += synapse0x1429c40();
   input += synapse0x1429c80();
   input += synapse0x1429cc0();
   input += synapse0x1429d00();
   input += synapse0x1429d40();
   input += synapse0x1429d80();
   input += synapse0x1429dc0();
   input += synapse0x1429e00();
   input += synapse0x1429890();
   input += synapse0x14298d0();
   input += synapse0x1429f50();
   input += synapse0x1429f90();
   input += synapse0x1429fd0();
   input += synapse0x142a010();
   input += synapse0x142a050();
   input += synapse0x142a090();
   return input;
}

double NNfunction_ss_uRdR::neuron0x1429700() {
   double input = input0x1429700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x1430900() {
   double input = 0.25928;
   input += synapse0x1406630();
   input += synapse0x1406670();
   input += synapse0x1407b40();
   input += synapse0x1407b80();
   input += synapse0x1408510();
   input += synapse0x1408550();
   input += synapse0x14092e0();
   input += synapse0x1409320();
   input += synapse0x1409cb0();
   input += synapse0x1409cf0();
   input += synapse0x140a680();
   input += synapse0x140a6c0();
   input += synapse0x140b160();
   input += synapse0x140b1a0();
   input += synapse0x140bb30();
   input += synapse0x140bb70();
   input += synapse0x1408c10();
   input += synapse0x1408c50();
   input += synapse0x140d6e0();
   input += synapse0x140d720();
   input += synapse0x140e0b0();
   input += synapse0x140e0f0();
   input += synapse0x140ea80();
   input += synapse0x140eac0();
   input += synapse0x140f450();
   input += synapse0x140f490();
   input += synapse0x14035c0();
   input += synapse0x1403600();
   input += synapse0x1411540();
   input += synapse0x1411580();
   input += synapse0x1411f10();
   input += synapse0x1411f50();
   input += synapse0x14128e0();
   input += synapse0x1412920();
   input += synapse0x14132b0();
   input += synapse0x14132f0();
   input += synapse0x1413c80();
   input += synapse0x1413cc0();
   input += synapse0x140c7d0();
   input += synapse0x140c810();
   input += synapse0x1416080();
   input += synapse0x14160c0();
   input += synapse0x1416a10();
   input += synapse0x1416a50();
   input += synapse0x14173e0();
   input += synapse0x1417420();
   input += synapse0x1417db0();
   input += synapse0x1417df0();
   input += synapse0x1418780();
   input += synapse0x14187c0();
   return input;
}

double NNfunction_ss_uRdR::neuron0x1430900() {
   double input = input0x1430900();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x1430ca0() {
   double input = -0.177432;
   input += synapse0x141aec0();
   input += synapse0x141af00();
   input += synapse0x1410480();
   input += synapse0x14104c0();
   input += synapse0x141daa0();
   input += synapse0x141dae0();
   input += synapse0x141e470();
   input += synapse0x141e4b0();
   input += synapse0x141ee40();
   input += synapse0x141ee80();
   input += synapse0x141f810();
   input += synapse0x141f850();
   input += synapse0x14201e0();
   input += synapse0x1420220();
   input += synapse0x1420bb0();
   input += synapse0x1420bf0();
   input += synapse0x1421580();
   input += synapse0x14215c0();
   input += synapse0x1421f50();
   input += synapse0x1421f90();
   input += synapse0x1422b30();
   input += synapse0x1422b70();
   input += synapse0x1423500();
   input += synapse0x1423540();
   input += synapse0x1414380();
   input += synapse0x14143c0();
   input += synapse0x1414d50();
   input += synapse0x1414d90();
   input += synapse0x1415720();
   input += synapse0x1415760();
   input += synapse0x1427c40();
   input += synapse0x1427c80();
   input += synapse0x1428610();
   input += synapse0x1428650();
   input += synapse0x1428fe0();
   input += synapse0x1429020();
   input += synapse0x14299b0();
   input += synapse0x14299f0();
   input += synapse0x14058a0();
   input += synapse0x14058e0();
   input += synapse0x1419150();
   input += synapse0x1419190();
   input += synapse0x142a0d0();
   input += synapse0x142a110();
   input += synapse0x142a150();
   input += synapse0x142a190();
   input += synapse0x1431040();
   input += synapse0x1431080();
   input += synapse0x14310c0();
   input += synapse0x1431100();
   return input;
}

double NNfunction_ss_uRdR::neuron0x1430ca0() {
   double input = input0x1430ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x1431140() {
   double input = -0.988059;
   input += synapse0x1431480();
   input += synapse0x14314c0();
   input += synapse0x1431500();
   input += synapse0x1431540();
   input += synapse0x1431580();
   input += synapse0x14315c0();
   input += synapse0x1431600();
   input += synapse0x1431640();
   input += synapse0x1431680();
   input += synapse0x14316c0();
   input += synapse0x1431700();
   input += synapse0x1431740();
   input += synapse0x1431780();
   input += synapse0x14317c0();
   input += synapse0x1431800();
   input += synapse0x1431840();
   input += synapse0x14312d0();
   input += synapse0x1431310();
   input += synapse0x1431990();
   input += synapse0x14319d0();
   input += synapse0x1431a10();
   input += synapse0x1431a50();
   input += synapse0x1431a90();
   input += synapse0x1431ad0();
   input += synapse0x1431b10();
   input += synapse0x1431b50();
   input += synapse0x1431b90();
   input += synapse0x1431bd0();
   input += synapse0x1431c10();
   input += synapse0x1431c50();
   input += synapse0x1431c90();
   input += synapse0x1431cd0();
   input += synapse0x1431880();
   input += synapse0x14318c0();
   input += synapse0x1431900();
   input += synapse0x1431940();
   input += synapse0x1431f20();
   input += synapse0x1431f60();
   input += synapse0x1431fa0();
   input += synapse0x1431fe0();
   input += synapse0x1432020();
   input += synapse0x1432060();
   input += synapse0x14320a0();
   input += synapse0x14320e0();
   input += synapse0x1432120();
   input += synapse0x1432160();
   input += synapse0x14321a0();
   input += synapse0x14321e0();
   input += synapse0x1432220();
   input += synapse0x1432260();
   return input;
}

double NNfunction_ss_uRdR::neuron0x1431140() {
   double input = input0x1431140();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x14322a0() {
   double input = 0.127992;
   input += synapse0x14325e0();
   input += synapse0x1432620();
   input += synapse0x1432660();
   input += synapse0x14326a0();
   input += synapse0x14326e0();
   input += synapse0x1432720();
   input += synapse0x1432760();
   input += synapse0x14327a0();
   input += synapse0x14327e0();
   input += synapse0x1432820();
   input += synapse0x1432860();
   input += synapse0x14328a0();
   input += synapse0x14328e0();
   input += synapse0x1432920();
   input += synapse0x1432960();
   input += synapse0x14329a0();
   input += synapse0x1432430();
   input += synapse0x1432470();
   input += synapse0x1432af0();
   input += synapse0x1432b30();
   input += synapse0x1432b70();
   input += synapse0x1432bb0();
   input += synapse0x1432bf0();
   input += synapse0x1432c30();
   input += synapse0x1432c70();
   input += synapse0x1432cb0();
   input += synapse0x1432cf0();
   input += synapse0x1432d30();
   input += synapse0x1432d70();
   input += synapse0x1432db0();
   input += synapse0x1432df0();
   input += synapse0x1432e30();
   input += synapse0x14329e0();
   input += synapse0x1432a20();
   input += synapse0x1432a60();
   input += synapse0x1432aa0();
   input += synapse0x1433080();
   input += synapse0x14330c0();
   input += synapse0x1433100();
   input += synapse0x1433140();
   input += synapse0x1433180();
   input += synapse0x14331c0();
   input += synapse0x1433200();
   input += synapse0x1433240();
   input += synapse0x1433280();
   input += synapse0x14332c0();
   input += synapse0x1433300();
   input += synapse0x1433340();
   input += synapse0x1433380();
   input += synapse0x14333c0();
   return input;
}

double NNfunction_ss_uRdR::neuron0x14322a0() {
   double input = input0x14322a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x1433400() {
   double input = 0.0213257;
   input += synapse0x1433740();
   input += synapse0x1433780();
   input += synapse0x14337c0();
   input += synapse0x1433800();
   input += synapse0x1433840();
   input += synapse0x1433880();
   input += synapse0x14338c0();
   input += synapse0x1433900();
   input += synapse0x1433940();
   input += synapse0x1433980();
   input += synapse0x14339c0();
   input += synapse0x1433a00();
   input += synapse0x1433a40();
   input += synapse0x1433a80();
   input += synapse0x1433ac0();
   input += synapse0x1433b00();
   input += synapse0x1433590();
   input += synapse0x14335d0();
   input += synapse0x1433c50();
   input += synapse0x1433c90();
   input += synapse0x1433cd0();
   input += synapse0x1433d10();
   input += synapse0x1433d50();
   input += synapse0x1433d90();
   input += synapse0x1433dd0();
   input += synapse0x1433e10();
   input += synapse0x1433e50();
   input += synapse0x1433e90();
   input += synapse0x1433ed0();
   input += synapse0x1433f10();
   input += synapse0x1433f50();
   input += synapse0x1433f90();
   input += synapse0x1433b40();
   input += synapse0x1433b80();
   input += synapse0x1433bc0();
   input += synapse0x1433c00();
   input += synapse0x14341e0();
   input += synapse0x1434220();
   input += synapse0x1434260();
   input += synapse0x14342a0();
   input += synapse0x14342e0();
   input += synapse0x1434320();
   input += synapse0x1434360();
   input += synapse0x14343a0();
   input += synapse0x14343e0();
   input += synapse0x1434420();
   input += synapse0x1434460();
   input += synapse0x14344a0();
   input += synapse0x14344e0();
   input += synapse0x1434520();
   return input;
}

double NNfunction_ss_uRdR::neuron0x1433400() {
   double input = input0x1433400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double NNfunction_ss_uRdR::input0x1434560() {
   double input = 6.066;
   input += synapse0x1405640();
   input += synapse0x1434780();
   input += synapse0x14347c0();
   input += synapse0x1434800();
   input += synapse0x1434840();
   return input;
}

double NNfunction_ss_uRdR::neuron0x1434560() {
   double input = input0x1434560();
   return (input * 1)+0;
}

double NNfunction_ss_uRdR::synapse0x11c0490() {
   return (neuron0x1400620()*-0.208309);
}

double NNfunction_ss_uRdR::synapse0x14004e0() {
   return (neuron0x1400960()*0.273101);
}

double NNfunction_ss_uRdR::synapse0x1400520() {
   return (neuron0x1400ca0()*-0.0695495);
}

double NNfunction_ss_uRdR::synapse0x1405930() {
   return (neuron0x1400fe0()*0.0423906);
}

double NNfunction_ss_uRdR::synapse0x1405970() {
   return (neuron0x1401320()*0.0399949);
}

double NNfunction_ss_uRdR::synapse0x14059b0() {
   return (neuron0x1401660()*0.151942);
}

double NNfunction_ss_uRdR::synapse0x14059f0() {
   return (neuron0x14019a0()*-0.561366);
}

double NNfunction_ss_uRdR::synapse0x1405a30() {
   return (neuron0x1401ce0()*-0.368954);
}

double NNfunction_ss_uRdR::synapse0x1405a70() {
   return (neuron0x1402020()*0.0554737);
}

double NNfunction_ss_uRdR::synapse0x1405ab0() {
   return (neuron0x1402360()*-0.169814);
}

double NNfunction_ss_uRdR::synapse0x1405af0() {
   return (neuron0x14026a0()*0.00647014);
}

double NNfunction_ss_uRdR::synapse0x1405b30() {
   return (neuron0x14029e0()*0.177848);
}

double NNfunction_ss_uRdR::synapse0x1405b70() {
   return (neuron0x1402d20()*0.0531907);
}

double NNfunction_ss_uRdR::synapse0x1405bb0() {
   return (neuron0x1403060()*-0.131257);
}

double NNfunction_ss_uRdR::synapse0x1405bf0() {
   return (neuron0x14033a0()*0.357965);
}

double NNfunction_ss_uRdR::synapse0x1405c30() {
   return (neuron0x14036e0()*-0.5201);
}

double NNfunction_ss_uRdR::synapse0x1400450() {
   return (neuron0x1403a20()*0.468847);
}

double NNfunction_ss_uRdR::synapse0x1400490() {
   return (neuron0x1403f80()*0.490805);
}

double NNfunction_ss_uRdR::synapse0x11b1d30() {
   return (neuron0x14041a0()*0.252446);
}

double NNfunction_ss_uRdR::synapse0x11b1d70() {
   return (neuron0x14044e0()*-0.09708);
}

double NNfunction_ss_uRdR::synapse0x1405e90() {
   return (neuron0x1404820()*-0.141993);
}

double NNfunction_ss_uRdR::synapse0x1405ed0() {
   return (neuron0x1404b60()*0.0279163);
}

double NNfunction_ss_uRdR::synapse0x1405f10() {
   return (neuron0x1404ea0()*0.0396338);
}

double NNfunction_ss_uRdR::synapse0x1405f50() {
   return (neuron0x14051e0()*0.209105);
}

double NNfunction_ss_uRdR::synapse0x14062d0() {
   return (neuron0x1400620()*0.0167501);
}

double NNfunction_ss_uRdR::synapse0x1406310() {
   return (neuron0x1400960()*-0.0244607);
}

double NNfunction_ss_uRdR::synapse0x1406350() {
   return (neuron0x1400ca0()*-0.0220635);
}

double NNfunction_ss_uRdR::synapse0x1406390() {
   return (neuron0x1400fe0()*0.0287515);
}

double NNfunction_ss_uRdR::synapse0x14063d0() {
   return (neuron0x1401320()*0.00495315);
}

double NNfunction_ss_uRdR::synapse0x1406410() {
   return (neuron0x1401660()*-0.023888);
}

double NNfunction_ss_uRdR::synapse0x1406450() {
   return (neuron0x14019a0()*-0.0173711);
}

double NNfunction_ss_uRdR::synapse0x1406490() {
   return (neuron0x1401ce0()*-0.0333613);
}

double NNfunction_ss_uRdR::synapse0x14064d0() {
   return (neuron0x1402020()*0.0195179);
}

double NNfunction_ss_uRdR::synapse0x1405d80() {
   return (neuron0x1402360()*-0.0104722);
}

double NNfunction_ss_uRdR::synapse0x1405dc0() {
   return (neuron0x14026a0()*0.00958227);
}

double NNfunction_ss_uRdR::synapse0x1405e00() {
   return (neuron0x14029e0()*-0.0157123);
}

double NNfunction_ss_uRdR::synapse0x1405e40() {
   return (neuron0x1402d20()*-0.0226369);
}

double NNfunction_ss_uRdR::synapse0x1406720() {
   return (neuron0x1403060()*-0.00562125);
}

double NNfunction_ss_uRdR::synapse0x1406760() {
   return (neuron0x14033a0()*0.300162);
}

double NNfunction_ss_uRdR::synapse0x14067a0() {
   return (neuron0x14036e0()*0.00623385);
}

double NNfunction_ss_uRdR::synapse0x1406120() {
   return (neuron0x1403a20()*-0.0186466);
}

double NNfunction_ss_uRdR::synapse0x1406160() {
   return (neuron0x1403f80()*-2.34096);
}

double NNfunction_ss_uRdR::synapse0x14068f0() {
   return (neuron0x14041a0()*-0.00701189);
}

double NNfunction_ss_uRdR::synapse0x1406930() {
   return (neuron0x14044e0()*-0.00552998);
}

double NNfunction_ss_uRdR::synapse0x1406970() {
   return (neuron0x1404820()*-0.00228627);
}

double NNfunction_ss_uRdR::synapse0x14069b0() {
   return (neuron0x1404b60()*-0.000749153);
}

double NNfunction_ss_uRdR::synapse0x14069f0() {
   return (neuron0x1404ea0()*0.019044);
}

double NNfunction_ss_uRdR::synapse0x1406a30() {
   return (neuron0x14051e0()*-0.0346535);
}

double NNfunction_ss_uRdR::synapse0x1406db0() {
   return (neuron0x1400620()*0.17506);
}

double NNfunction_ss_uRdR::synapse0x1406df0() {
   return (neuron0x1400960()*-0.367877);
}

double NNfunction_ss_uRdR::synapse0x1406e30() {
   return (neuron0x1400ca0()*-0.0740488);
}

double NNfunction_ss_uRdR::synapse0x1406e70() {
   return (neuron0x1400fe0()*-1.27413);
}

double NNfunction_ss_uRdR::synapse0x1406eb0() {
   return (neuron0x1401320()*0.45856);
}

double NNfunction_ss_uRdR::synapse0x1406ef0() {
   return (neuron0x1401660()*-0.0281652);
}

double NNfunction_ss_uRdR::synapse0x1406f30() {
   return (neuron0x14019a0()*-0.0872388);
}

double NNfunction_ss_uRdR::synapse0x1406f70() {
   return (neuron0x1401ce0()*-0.258175);
}

double NNfunction_ss_uRdR::synapse0x1406fb0() {
   return (neuron0x1402020()*-0.0199694);
}

double NNfunction_ss_uRdR::synapse0x1406ff0() {
   return (neuron0x1402360()*0.260171);
}

double NNfunction_ss_uRdR::synapse0x1407030() {
   return (neuron0x14026a0()*0.102606);
}

double NNfunction_ss_uRdR::synapse0x1407070() {
   return (neuron0x14029e0()*-0.0263365);
}

double NNfunction_ss_uRdR::synapse0x14070b0() {
   return (neuron0x1402d20()*-0.725409);
}

double NNfunction_ss_uRdR::synapse0x14070f0() {
   return (neuron0x1403060()*0.192337);
}

double NNfunction_ss_uRdR::synapse0x1407130() {
   return (neuron0x14033a0()*-0.515087);
}

double NNfunction_ss_uRdR::synapse0x1407170() {
   return (neuron0x14036e0()*0.384707);
}

double NNfunction_ss_uRdR::synapse0x1406c00() {
   return (neuron0x1403a20()*-0.183394);
}

double NNfunction_ss_uRdR::synapse0x1406c40() {
   return (neuron0x1403f80()*-1.00779);
}

double NNfunction_ss_uRdR::synapse0x11bfb80() {
   return (neuron0x14041a0()*-0.321856);
}

double NNfunction_ss_uRdR::synapse0x11bfbc0() {
   return (neuron0x14044e0()*-0.0558312);
}

double NNfunction_ss_uRdR::synapse0x13ef6b0() {
   return (neuron0x1404820()*-0.102226);
}

double NNfunction_ss_uRdR::synapse0x13ef6f0() {
   return (neuron0x1404b60()*-0.148359);
}

double NNfunction_ss_uRdR::synapse0x13ef730() {
   return (neuron0x1404ea0()*-0.00404025);
}

double NNfunction_ss_uRdR::synapse0x1400560() {
   return (neuron0x14051e0()*-0.0919814);
}

double NNfunction_ss_uRdR::synapse0x14066c0() {
   return (neuron0x1400620()*0.000436235);
}

double NNfunction_ss_uRdR::synapse0x14005a0() {
   return (neuron0x1400960()*0.0285747);
}

double NNfunction_ss_uRdR::synapse0x14005e0() {
   return (neuron0x1400ca0()*0.0184866);
}

double NNfunction_ss_uRdR::synapse0x14072c0() {
   return (neuron0x1400fe0()*-2.09679);
}

double NNfunction_ss_uRdR::synapse0x1407300() {
   return (neuron0x1401320()*0.00374658);
}

double NNfunction_ss_uRdR::synapse0x1407340() {
   return (neuron0x1401660()*-0.00926697);
}

double NNfunction_ss_uRdR::synapse0x1407380() {
   return (neuron0x14019a0()*0.0120359);
}

double NNfunction_ss_uRdR::synapse0x14073c0() {
   return (neuron0x1401ce0()*0.000957987);
}

double NNfunction_ss_uRdR::synapse0x1407400() {
   return (neuron0x1402020()*-0.00299578);
}

double NNfunction_ss_uRdR::synapse0x1407440() {
   return (neuron0x1402360()*-0.0210673);
}

double NNfunction_ss_uRdR::synapse0x1407480() {
   return (neuron0x14026a0()*0.0224143);
}

double NNfunction_ss_uRdR::synapse0x14074c0() {
   return (neuron0x14029e0()*-0.00018993);
}

double NNfunction_ss_uRdR::synapse0x1407500() {
   return (neuron0x1402d20()*-0.0177222);
}

double NNfunction_ss_uRdR::synapse0x1407540() {
   return (neuron0x1403060()*-0.0195774);
}

double NNfunction_ss_uRdR::synapse0x1407580() {
   return (neuron0x14033a0()*0.0735257);
}

double NNfunction_ss_uRdR::synapse0x14075c0() {
   return (neuron0x14036e0()*0.0105005);
}

double NNfunction_ss_uRdR::synapse0x1406510() {
   return (neuron0x1403a20()*-0.00701784);
}

double NNfunction_ss_uRdR::synapse0x1406550() {
   return (neuron0x1403f80()*0.0206185);
}

double NNfunction_ss_uRdR::synapse0x1407710() {
   return (neuron0x14041a0()*-0.0238766);
}

double NNfunction_ss_uRdR::synapse0x1407750() {
   return (neuron0x14044e0()*0.00483894);
}

double NNfunction_ss_uRdR::synapse0x1407790() {
   return (neuron0x1404820()*-0.00212341);
}

double NNfunction_ss_uRdR::synapse0x14077d0() {
   return (neuron0x1404b60()*0.000356086);
}

double NNfunction_ss_uRdR::synapse0x1407810() {
   return (neuron0x1404ea0()*0.00442878);
}

double NNfunction_ss_uRdR::synapse0x1407850() {
   return (neuron0x14051e0()*0.00147754);
}

double NNfunction_ss_uRdR::synapse0x1407bd0() {
   return (neuron0x1400620()*-0.522919);
}

double NNfunction_ss_uRdR::synapse0x1407c10() {
   return (neuron0x1400960()*-0.0726924);
}

double NNfunction_ss_uRdR::synapse0x1407c50() {
   return (neuron0x1400ca0()*-0.0271614);
}

double NNfunction_ss_uRdR::synapse0x1407c90() {
   return (neuron0x1400fe0()*-0.600072);
}

double NNfunction_ss_uRdR::synapse0x1407cd0() {
   return (neuron0x1401320()*0.613907);
}

double NNfunction_ss_uRdR::synapse0x1407d10() {
   return (neuron0x1401660()*0.533328);
}

double NNfunction_ss_uRdR::synapse0x1407d50() {
   return (neuron0x14019a0()*0.343833);
}

double NNfunction_ss_uRdR::synapse0x1407d90() {
   return (neuron0x1401ce0()*-0.224005);
}

double NNfunction_ss_uRdR::synapse0x1407dd0() {
   return (neuron0x1402020()*-0.142324);
}

double NNfunction_ss_uRdR::synapse0x1407e10() {
   return (neuron0x1402360()*-0.22406);
}

double NNfunction_ss_uRdR::synapse0x1407e50() {
   return (neuron0x14026a0()*0.380964);
}

double NNfunction_ss_uRdR::synapse0x1407e90() {
   return (neuron0x14029e0()*-0.0589228);
}

double NNfunction_ss_uRdR::synapse0x1407ed0() {
   return (neuron0x1402d20()*0.255168);
}

double NNfunction_ss_uRdR::synapse0x1407f10() {
   return (neuron0x1403060()*-0.288261);
}

double NNfunction_ss_uRdR::synapse0x1407f50() {
   return (neuron0x14033a0()*-0.0462628);
}

double NNfunction_ss_uRdR::synapse0x1407f90() {
   return (neuron0x14036e0()*-0.301961);
}

double NNfunction_ss_uRdR::synapse0x1407a20() {
   return (neuron0x1403a20()*0.151206);
}

double NNfunction_ss_uRdR::synapse0x1407a60() {
   return (neuron0x1403f80()*0.52449);
}

double NNfunction_ss_uRdR::synapse0x14080e0() {
   return (neuron0x14041a0()*-0.469969);
}

double NNfunction_ss_uRdR::synapse0x1408120() {
   return (neuron0x14044e0()*-0.451733);
}

double NNfunction_ss_uRdR::synapse0x1408160() {
   return (neuron0x1404820()*-0.50265);
}

double NNfunction_ss_uRdR::synapse0x14081a0() {
   return (neuron0x1404b60()*-0.217247);
}

double NNfunction_ss_uRdR::synapse0x14081e0() {
   return (neuron0x1404ea0()*0.249448);
}

double NNfunction_ss_uRdR::synapse0x1408220() {
   return (neuron0x14051e0()*0.202849);
}

double NNfunction_ss_uRdR::synapse0x14085a0() {
   return (neuron0x1400620()*0.116472);
}

double NNfunction_ss_uRdR::synapse0x14085e0() {
   return (neuron0x1400960()*-0.415115);
}

double NNfunction_ss_uRdR::synapse0x1408620() {
   return (neuron0x1400ca0()*-0.198758);
}

double NNfunction_ss_uRdR::synapse0x1408660() {
   return (neuron0x1400fe0()*-0.447707);
}

double NNfunction_ss_uRdR::synapse0x14086a0() {
   return (neuron0x1401320()*-0.389616);
}

double NNfunction_ss_uRdR::synapse0x14086e0() {
   return (neuron0x1401660()*0.162461);
}

double NNfunction_ss_uRdR::synapse0x1408720() {
   return (neuron0x14019a0()*0.287888);
}

double NNfunction_ss_uRdR::synapse0x1408760() {
   return (neuron0x1401ce0()*0.0389548);
}

double NNfunction_ss_uRdR::synapse0x14087a0() {
   return (neuron0x1402020()*-0.182969);
}

double NNfunction_ss_uRdR::synapse0x11bfef0() {
   return (neuron0x1402360()*0.158703);
}

double NNfunction_ss_uRdR::synapse0x11bff30() {
   return (neuron0x14026a0()*0.0701103);
}

double NNfunction_ss_uRdR::synapse0x11bff70() {
   return (neuron0x14029e0()*0.300023);
}

double NNfunction_ss_uRdR::synapse0x11bffb0() {
   return (neuron0x1402d20()*-0.0154292);
}

double NNfunction_ss_uRdR::synapse0x11bfff0() {
   return (neuron0x1403060()*0.093882);
}

double NNfunction_ss_uRdR::synapse0x11c0030() {
   return (neuron0x14033a0()*-0.207195);
}

double NNfunction_ss_uRdR::synapse0x11c0070() {
   return (neuron0x14036e0()*0.244463);
}

double NNfunction_ss_uRdR::synapse0x14083f0() {
   return (neuron0x1403a20()*-0.369798);
}

double NNfunction_ss_uRdR::synapse0x1408430() {
   return (neuron0x1403f80()*-0.5441);
}

double NNfunction_ss_uRdR::synapse0x11c01c0() {
   return (neuron0x14041a0()*0.271216);
}

double NNfunction_ss_uRdR::synapse0x11c0200() {
   return (neuron0x14044e0()*-0.364403);
}

double NNfunction_ss_uRdR::synapse0x11c0240() {
   return (neuron0x1404820()*-0.0853454);
}

double NNfunction_ss_uRdR::synapse0x11c0280() {
   return (neuron0x1404b60()*-0.18372);
}

double NNfunction_ss_uRdR::synapse0x11c02c0() {
   return (neuron0x1404ea0()*0.0380556);
}

double NNfunction_ss_uRdR::synapse0x1408ff0() {
   return (neuron0x14051e0()*0.200385);
}

double NNfunction_ss_uRdR::synapse0x1409370() {
   return (neuron0x1400620()*-0.0406594);
}

double NNfunction_ss_uRdR::synapse0x14093b0() {
   return (neuron0x1400960()*-0.580284);
}

double NNfunction_ss_uRdR::synapse0x14093f0() {
   return (neuron0x1400ca0()*-0.0718816);
}

double NNfunction_ss_uRdR::synapse0x1409430() {
   return (neuron0x1400fe0()*0.446822);
}

double NNfunction_ss_uRdR::synapse0x1409470() {
   return (neuron0x1401320()*0.226242);
}

double NNfunction_ss_uRdR::synapse0x14094b0() {
   return (neuron0x1401660()*0.178776);
}

double NNfunction_ss_uRdR::synapse0x14094f0() {
   return (neuron0x14019a0()*-0.490601);
}

double NNfunction_ss_uRdR::synapse0x1409530() {
   return (neuron0x1401ce0()*0.224034);
}

double NNfunction_ss_uRdR::synapse0x1409570() {
   return (neuron0x1402020()*-0.131104);
}

double NNfunction_ss_uRdR::synapse0x14095b0() {
   return (neuron0x1402360()*-0.695168);
}

double NNfunction_ss_uRdR::synapse0x14095f0() {
   return (neuron0x14026a0()*0.378798);
}

double NNfunction_ss_uRdR::synapse0x1409630() {
   return (neuron0x14029e0()*-0.179855);
}

double NNfunction_ss_uRdR::synapse0x1409670() {
   return (neuron0x1402d20()*-0.30408);
}

double NNfunction_ss_uRdR::synapse0x14096b0() {
   return (neuron0x1403060()*-0.410254);
}

double NNfunction_ss_uRdR::synapse0x14096f0() {
   return (neuron0x14033a0()*0.733828);
}

double NNfunction_ss_uRdR::synapse0x1409730() {
   return (neuron0x14036e0()*-0.150073);
}

double NNfunction_ss_uRdR::synapse0x14091c0() {
   return (neuron0x1403a20()*0.367585);
}

double NNfunction_ss_uRdR::synapse0x1409200() {
   return (neuron0x1403f80()*0.575253);
}

double NNfunction_ss_uRdR::synapse0x1409880() {
   return (neuron0x14041a0()*-0.546221);
}

double NNfunction_ss_uRdR::synapse0x14098c0() {
   return (neuron0x14044e0()*0.642353);
}

double NNfunction_ss_uRdR::synapse0x1409900() {
   return (neuron0x1404820()*-0.212052);
}

double NNfunction_ss_uRdR::synapse0x1409940() {
   return (neuron0x1404b60()*0.123498);
}

double NNfunction_ss_uRdR::synapse0x1409980() {
   return (neuron0x1404ea0()*-0.59169);
}

double NNfunction_ss_uRdR::synapse0x14099c0() {
   return (neuron0x14051e0()*0.0757217);
}

double NNfunction_ss_uRdR::synapse0x1409d40() {
   return (neuron0x1400620()*0.0686937);
}

double NNfunction_ss_uRdR::synapse0x1409d80() {
   return (neuron0x1400960()*-0.796382);
}

double NNfunction_ss_uRdR::synapse0x1409dc0() {
   return (neuron0x1400ca0()*-0.950653);
}

double NNfunction_ss_uRdR::synapse0x1409e00() {
   return (neuron0x1400fe0()*-0.0273313);
}

double NNfunction_ss_uRdR::synapse0x1409e40() {
   return (neuron0x1401320()*0.150373);
}

double NNfunction_ss_uRdR::synapse0x1409e80() {
   return (neuron0x1401660()*0.29899);
}

double NNfunction_ss_uRdR::synapse0x1409ec0() {
   return (neuron0x14019a0()*0.446984);
}

double NNfunction_ss_uRdR::synapse0x1409f00() {
   return (neuron0x1401ce0()*0.0708802);
}

double NNfunction_ss_uRdR::synapse0x1409f40() {
   return (neuron0x1402020()*-0.366888);
}

double NNfunction_ss_uRdR::synapse0x1409f80() {
   return (neuron0x1402360()*-0.193184);
}

double NNfunction_ss_uRdR::synapse0x1409fc0() {
   return (neuron0x14026a0()*-0.452024);
}

double NNfunction_ss_uRdR::synapse0x140a000() {
   return (neuron0x14029e0()*0.751544);
}

double NNfunction_ss_uRdR::synapse0x140a040() {
   return (neuron0x1402d20()*-0.127493);
}

double NNfunction_ss_uRdR::synapse0x140a080() {
   return (neuron0x1403060()*-0.0286338);
}

double NNfunction_ss_uRdR::synapse0x140a0c0() {
   return (neuron0x14033a0()*-0.398681);
}

double NNfunction_ss_uRdR::synapse0x140a100() {
   return (neuron0x14036e0()*-0.556445);
}

double NNfunction_ss_uRdR::synapse0x1409b90() {
   return (neuron0x1403a20()*-0.163309);
}

double NNfunction_ss_uRdR::synapse0x1409bd0() {
   return (neuron0x1403f80()*0.0600275);
}

double NNfunction_ss_uRdR::synapse0x140a250() {
   return (neuron0x14041a0()*0.382267);
}

double NNfunction_ss_uRdR::synapse0x140a290() {
   return (neuron0x14044e0()*-0.678666);
}

double NNfunction_ss_uRdR::synapse0x140a2d0() {
   return (neuron0x1404820()*-0.233401);
}

double NNfunction_ss_uRdR::synapse0x140a310() {
   return (neuron0x1404b60()*0.879973);
}

double NNfunction_ss_uRdR::synapse0x140a350() {
   return (neuron0x1404ea0()*-0.312569);
}

double NNfunction_ss_uRdR::synapse0x140a390() {
   return (neuron0x14051e0()*-0.059872);
}

double NNfunction_ss_uRdR::synapse0x1403e70() {
   return (neuron0x1400620()*-0.0160378);
}

double NNfunction_ss_uRdR::synapse0x1403eb0() {
   return (neuron0x1400960()*-0.035564);
}

double NNfunction_ss_uRdR::synapse0x1403ef0() {
   return (neuron0x1400ca0()*0.0155686);
}

double NNfunction_ss_uRdR::synapse0x1403f30() {
   return (neuron0x1400fe0()*18.803);
}

double NNfunction_ss_uRdR::synapse0x140a920() {
   return (neuron0x1401320()*0.0162279);
}

double NNfunction_ss_uRdR::synapse0x140a960() {
   return (neuron0x1401660()*-0.0547833);
}

double NNfunction_ss_uRdR::synapse0x140a9a0() {
   return (neuron0x14019a0()*0.0196725);
}

double NNfunction_ss_uRdR::synapse0x140a9e0() {
   return (neuron0x1401ce0()*-0.00607039);
}

double NNfunction_ss_uRdR::synapse0x140aa20() {
   return (neuron0x1402020()*-0.0937024);
}

double NNfunction_ss_uRdR::synapse0x140aa60() {
   return (neuron0x1402360()*0.00967229);
}

double NNfunction_ss_uRdR::synapse0x140aaa0() {
   return (neuron0x14026a0()*0.0318079);
}

double NNfunction_ss_uRdR::synapse0x140aae0() {
   return (neuron0x14029e0()*0.0931263);
}

double NNfunction_ss_uRdR::synapse0x140ab20() {
   return (neuron0x1402d20()*-0.0207193);
}

double NNfunction_ss_uRdR::synapse0x140ab60() {
   return (neuron0x1403060()*0.013824);
}

double NNfunction_ss_uRdR::synapse0x140aba0() {
   return (neuron0x14033a0()*-0.0829823);
}

double NNfunction_ss_uRdR::synapse0x140abe0() {
   return (neuron0x14036e0()*0.0691174);
}

double NNfunction_ss_uRdR::synapse0x140a560() {
   return (neuron0x1403a20()*-0.0387218);
}

double NNfunction_ss_uRdR::synapse0x140a5a0() {
   return (neuron0x1403f80()*0.0248797);
}

double NNfunction_ss_uRdR::synapse0x140ad30() {
   return (neuron0x14041a0()*-0.0423887);
}

double NNfunction_ss_uRdR::synapse0x140ad70() {
   return (neuron0x14044e0()*0.0635551);
}

double NNfunction_ss_uRdR::synapse0x140adb0() {
   return (neuron0x1404820()*0.0205998);
}

double NNfunction_ss_uRdR::synapse0x140adf0() {
   return (neuron0x1404b60()*0.0550967);
}

double NNfunction_ss_uRdR::synapse0x140ae30() {
   return (neuron0x1404ea0()*0.000128237);
}

double NNfunction_ss_uRdR::synapse0x140ae70() {
   return (neuron0x14051e0()*0.0541745);
}

double NNfunction_ss_uRdR::synapse0x140b1f0() {
   return (neuron0x1400620()*-0.0892585);
}

double NNfunction_ss_uRdR::synapse0x140b230() {
   return (neuron0x1400960()*-0.44563);
}

double NNfunction_ss_uRdR::synapse0x140b270() {
   return (neuron0x1400ca0()*-0.0569652);
}

double NNfunction_ss_uRdR::synapse0x140b2b0() {
   return (neuron0x1400fe0()*-0.582732);
}

double NNfunction_ss_uRdR::synapse0x140b2f0() {
   return (neuron0x1401320()*-0.023692);
}

double NNfunction_ss_uRdR::synapse0x140b330() {
   return (neuron0x1401660()*-0.129318);
}

double NNfunction_ss_uRdR::synapse0x140b370() {
   return (neuron0x14019a0()*-0.103088);
}

double NNfunction_ss_uRdR::synapse0x140b3b0() {
   return (neuron0x1401ce0()*0.0252837);
}

double NNfunction_ss_uRdR::synapse0x140b3f0() {
   return (neuron0x1402020()*-0.047926);
}

double NNfunction_ss_uRdR::synapse0x140b430() {
   return (neuron0x1402360()*-0.0393484);
}

double NNfunction_ss_uRdR::synapse0x140b470() {
   return (neuron0x14026a0()*0.0243294);
}

double NNfunction_ss_uRdR::synapse0x140b4b0() {
   return (neuron0x14029e0()*0.296468);
}

double NNfunction_ss_uRdR::synapse0x140b4f0() {
   return (neuron0x1402d20()*0.00500487);
}

double NNfunction_ss_uRdR::synapse0x140b530() {
   return (neuron0x1403060()*-0.0466138);
}

double NNfunction_ss_uRdR::synapse0x140b570() {
   return (neuron0x14033a0()*-0.472618);
}

double NNfunction_ss_uRdR::synapse0x140b5b0() {
   return (neuron0x14036e0()*0.214802);
}

double NNfunction_ss_uRdR::synapse0x140b040() {
   return (neuron0x1403a20()*-0.0262796);
}

double NNfunction_ss_uRdR::synapse0x140b080() {
   return (neuron0x1403f80()*-0.415745);
}

double NNfunction_ss_uRdR::synapse0x140b700() {
   return (neuron0x14041a0()*0.0972759);
}

double NNfunction_ss_uRdR::synapse0x140b740() {
   return (neuron0x14044e0()*-0.151946);
}

double NNfunction_ss_uRdR::synapse0x140b780() {
   return (neuron0x1404820()*-0.0527653);
}

double NNfunction_ss_uRdR::synapse0x140b7c0() {
   return (neuron0x1404b60()*0.0216481);
}

double NNfunction_ss_uRdR::synapse0x140b800() {
   return (neuron0x1404ea0()*0.00942502);
}

double NNfunction_ss_uRdR::synapse0x140b840() {
   return (neuron0x14051e0()*-0.0335607);
}

double NNfunction_ss_uRdR::synapse0x140bbc0() {
   return (neuron0x1400620()*0.321748);
}

double NNfunction_ss_uRdR::synapse0x140bc00() {
   return (neuron0x1400960()*-0.172213);
}

double NNfunction_ss_uRdR::synapse0x140bc40() {
   return (neuron0x1400ca0()*-0.027953);
}

double NNfunction_ss_uRdR::synapse0x140bc80() {
   return (neuron0x1400fe0()*-0.235734);
}

double NNfunction_ss_uRdR::synapse0x140bcc0() {
   return (neuron0x1401320()*0.133884);
}

double NNfunction_ss_uRdR::synapse0x140bd00() {
   return (neuron0x1401660()*-0.0400458);
}

double NNfunction_ss_uRdR::synapse0x140bd40() {
   return (neuron0x14019a0()*0.123532);
}

double NNfunction_ss_uRdR::synapse0x140bd80() {
   return (neuron0x1401ce0()*0.332748);
}

double NNfunction_ss_uRdR::synapse0x140bdc0() {
   return (neuron0x1402020()*-0.182848);
}

double NNfunction_ss_uRdR::synapse0x140be00() {
   return (neuron0x1402360()*-0.0445939);
}

double NNfunction_ss_uRdR::synapse0x140be40() {
   return (neuron0x14026a0()*-0.170259);
}

double NNfunction_ss_uRdR::synapse0x140be80() {
   return (neuron0x14029e0()*0.0743318);
}

double NNfunction_ss_uRdR::synapse0x140bec0() {
   return (neuron0x1402d20()*0.123642);
}

double NNfunction_ss_uRdR::synapse0x140bf00() {
   return (neuron0x1403060()*-0.0487602);
}

double NNfunction_ss_uRdR::synapse0x140bf40() {
   return (neuron0x14033a0()*0.763492);
}

double NNfunction_ss_uRdR::synapse0x140bf80() {
   return (neuron0x14036e0()*-0.00383359);
}

double NNfunction_ss_uRdR::synapse0x140ba10() {
   return (neuron0x1403a20()*0.0133277);
}

double NNfunction_ss_uRdR::synapse0x140ba50() {
   return (neuron0x1403f80()*0.756667);
}

double NNfunction_ss_uRdR::synapse0x14087e0() {
   return (neuron0x14041a0()*-0.0952788);
}

double NNfunction_ss_uRdR::synapse0x1408820() {
   return (neuron0x14044e0()*0.329035);
}

double NNfunction_ss_uRdR::synapse0x1408860() {
   return (neuron0x1404820()*0.0990665);
}

double NNfunction_ss_uRdR::synapse0x14088a0() {
   return (neuron0x1404b60()*-0.176422);
}

double NNfunction_ss_uRdR::synapse0x14088e0() {
   return (neuron0x1404ea0()*0.0935782);
}

double NNfunction_ss_uRdR::synapse0x1408920() {
   return (neuron0x14051e0()*-0.109015);
}

double NNfunction_ss_uRdR::synapse0x1408ca0() {
   return (neuron0x1400620()*-0.282821);
}

double NNfunction_ss_uRdR::synapse0x1408ce0() {
   return (neuron0x1400960()*-0.297913);
}

double NNfunction_ss_uRdR::synapse0x1408d20() {
   return (neuron0x1400ca0()*-0.101887);
}

double NNfunction_ss_uRdR::synapse0x1408d60() {
   return (neuron0x1400fe0()*-0.834268);
}

double NNfunction_ss_uRdR::synapse0x1408da0() {
   return (neuron0x1401320()*-0.624568);
}

double NNfunction_ss_uRdR::synapse0x1408de0() {
   return (neuron0x1401660()*0.0282946);
}

double NNfunction_ss_uRdR::synapse0x1408e20() {
   return (neuron0x14019a0()*-0.91932);
}

double NNfunction_ss_uRdR::synapse0x1408e60() {
   return (neuron0x1401ce0()*1.03411);
}

double NNfunction_ss_uRdR::synapse0x1408ea0() {
   return (neuron0x1402020()*-0.113271);
}

double NNfunction_ss_uRdR::synapse0x1408ee0() {
   return (neuron0x1402360()*0.20079);
}

double NNfunction_ss_uRdR::synapse0x1408f20() {
   return (neuron0x14026a0()*-0.207546);
}

double NNfunction_ss_uRdR::synapse0x1408f60() {
   return (neuron0x14029e0()*0.298559);
}

double NNfunction_ss_uRdR::synapse0x1408fa0() {
   return (neuron0x1402d20()*-0.205708);
}

double NNfunction_ss_uRdR::synapse0x140d0e0() {
   return (neuron0x1403060()*0.374001);
}

double NNfunction_ss_uRdR::synapse0x140d120() {
   return (neuron0x14033a0()*-0.346676);
}

double NNfunction_ss_uRdR::synapse0x140d160() {
   return (neuron0x14036e0()*0.758952);
}

double NNfunction_ss_uRdR::synapse0x1408af0() {
   return (neuron0x1403a20()*0.0598246);
}

double NNfunction_ss_uRdR::synapse0x1408b30() {
   return (neuron0x1403f80()*-0.715776);
}

double NNfunction_ss_uRdR::synapse0x140d2b0() {
   return (neuron0x14041a0()*-0.199869);
}

double NNfunction_ss_uRdR::synapse0x140d2f0() {
   return (neuron0x14044e0()*-0.0212006);
}

double NNfunction_ss_uRdR::synapse0x140d330() {
   return (neuron0x1404820()*-0.0641018);
}

double NNfunction_ss_uRdR::synapse0x140d370() {
   return (neuron0x1404b60()*0.201547);
}

double NNfunction_ss_uRdR::synapse0x140d3b0() {
   return (neuron0x1404ea0()*0.282949);
}

double NNfunction_ss_uRdR::synapse0x140d3f0() {
   return (neuron0x14051e0()*0.621543);
}

double NNfunction_ss_uRdR::synapse0x140d770() {
   return (neuron0x1400620()*0.00610627);
}

double NNfunction_ss_uRdR::synapse0x140d7b0() {
   return (neuron0x1400960()*0.119803);
}

double NNfunction_ss_uRdR::synapse0x140d7f0() {
   return (neuron0x1400ca0()*6.71727e-06);
}

double NNfunction_ss_uRdR::synapse0x140d830() {
   return (neuron0x1400fe0()*1.50488);
}

double NNfunction_ss_uRdR::synapse0x140d870() {
   return (neuron0x1401320()*0.0587141);
}

double NNfunction_ss_uRdR::synapse0x140d8b0() {
   return (neuron0x1401660()*0.0263025);
}

double NNfunction_ss_uRdR::synapse0x140d8f0() {
   return (neuron0x14019a0()*-0.0230127);
}

double NNfunction_ss_uRdR::synapse0x140d930() {
   return (neuron0x1401ce0()*-0.00173923);
}

double NNfunction_ss_uRdR::synapse0x140d970() {
   return (neuron0x1402020()*-0.00967855);
}

double NNfunction_ss_uRdR::synapse0x140d9b0() {
   return (neuron0x1402360()*-0.0416184);
}

double NNfunction_ss_uRdR::synapse0x140d9f0() {
   return (neuron0x14026a0()*0.0228979);
}

double NNfunction_ss_uRdR::synapse0x140da30() {
   return (neuron0x14029e0()*0.000698727);
}

double NNfunction_ss_uRdR::synapse0x140da70() {
   return (neuron0x1402d20()*0.0117519);
}

double NNfunction_ss_uRdR::synapse0x140dab0() {
   return (neuron0x1403060()*0.020303);
}

double NNfunction_ss_uRdR::synapse0x140daf0() {
   return (neuron0x14033a0()*0.0169135);
}

double NNfunction_ss_uRdR::synapse0x140db30() {
   return (neuron0x14036e0()*0.0735609);
}

double NNfunction_ss_uRdR::synapse0x140d5c0() {
   return (neuron0x1403a20()*-0.028598);
}

double NNfunction_ss_uRdR::synapse0x140d600() {
   return (neuron0x1403f80()*-0.338594);
}

double NNfunction_ss_uRdR::synapse0x140dc80() {
   return (neuron0x14041a0()*0.00939269);
}

double NNfunction_ss_uRdR::synapse0x140dcc0() {
   return (neuron0x14044e0()*-0.0119242);
}

double NNfunction_ss_uRdR::synapse0x140dd00() {
   return (neuron0x1404820()*-0.0309995);
}

double NNfunction_ss_uRdR::synapse0x140dd40() {
   return (neuron0x1404b60()*-0.0393185);
}

double NNfunction_ss_uRdR::synapse0x140dd80() {
   return (neuron0x1404ea0()*0.0354229);
}

double NNfunction_ss_uRdR::synapse0x140ddc0() {
   return (neuron0x14051e0()*0.0158286);
}

double NNfunction_ss_uRdR::synapse0x140e140() {
   return (neuron0x1400620()*0.371199);
}

double NNfunction_ss_uRdR::synapse0x140e180() {
   return (neuron0x1400960()*-0.0640103);
}

double NNfunction_ss_uRdR::synapse0x140e1c0() {
   return (neuron0x1400ca0()*-0.107857);
}

double NNfunction_ss_uRdR::synapse0x140e200() {
   return (neuron0x1400fe0()*-0.388671);
}

double NNfunction_ss_uRdR::synapse0x140e240() {
   return (neuron0x1401320()*-0.458121);
}

double NNfunction_ss_uRdR::synapse0x140e280() {
   return (neuron0x1401660()*-0.430728);
}

double NNfunction_ss_uRdR::synapse0x140e2c0() {
   return (neuron0x14019a0()*0.377736);
}

double NNfunction_ss_uRdR::synapse0x140e300() {
   return (neuron0x1401ce0()*-0.325474);
}

double NNfunction_ss_uRdR::synapse0x140e340() {
   return (neuron0x1402020()*-0.179682);
}

double NNfunction_ss_uRdR::synapse0x140e380() {
   return (neuron0x1402360()*0.107692);
}

double NNfunction_ss_uRdR::synapse0x140e3c0() {
   return (neuron0x14026a0()*-0.151706);
}

double NNfunction_ss_uRdR::synapse0x140e400() {
   return (neuron0x14029e0()*-0.39062);
}

double NNfunction_ss_uRdR::synapse0x140e440() {
   return (neuron0x1402d20()*-0.18204);
}

double NNfunction_ss_uRdR::synapse0x140e480() {
   return (neuron0x1403060()*-0.484392);
}

double NNfunction_ss_uRdR::synapse0x140e4c0() {
   return (neuron0x14033a0()*0.154748);
}

double NNfunction_ss_uRdR::synapse0x140e500() {
   return (neuron0x14036e0()*-0.21322);
}

double NNfunction_ss_uRdR::synapse0x140df90() {
   return (neuron0x1403a20()*-0.119325);
}

double NNfunction_ss_uRdR::synapse0x140dfd0() {
   return (neuron0x1403f80()*0.817134);
}

double NNfunction_ss_uRdR::synapse0x140e650() {
   return (neuron0x14041a0()*0.215217);
}

double NNfunction_ss_uRdR::synapse0x140e690() {
   return (neuron0x14044e0()*0.348756);
}

double NNfunction_ss_uRdR::synapse0x140e6d0() {
   return (neuron0x1404820()*0.0436485);
}

double NNfunction_ss_uRdR::synapse0x140e710() {
   return (neuron0x1404b60()*0.477468);
}

double NNfunction_ss_uRdR::synapse0x140e750() {
   return (neuron0x1404ea0()*-0.152092);
}

double NNfunction_ss_uRdR::synapse0x140e790() {
   return (neuron0x14051e0()*-0.19626);
}

double NNfunction_ss_uRdR::synapse0x140eb10() {
   return (neuron0x1400620()*0.0486413);
}

double NNfunction_ss_uRdR::synapse0x140eb50() {
   return (neuron0x1400960()*0.130106);
}

double NNfunction_ss_uRdR::synapse0x140eb90() {
   return (neuron0x1400ca0()*0.086996);
}

double NNfunction_ss_uRdR::synapse0x140ebd0() {
   return (neuron0x1400fe0()*1.096);
}

double NNfunction_ss_uRdR::synapse0x140ec10() {
   return (neuron0x1401320()*0.02285);
}

double NNfunction_ss_uRdR::synapse0x140ec50() {
   return (neuron0x1401660()*-0.36544);
}

double NNfunction_ss_uRdR::synapse0x140ec90() {
   return (neuron0x14019a0()*0.193367);
}

double NNfunction_ss_uRdR::synapse0x140ecd0() {
   return (neuron0x1401ce0()*-0.210427);
}

double NNfunction_ss_uRdR::synapse0x140ed10() {
   return (neuron0x1402020()*-0.278834);
}

double NNfunction_ss_uRdR::synapse0x140ed50() {
   return (neuron0x1402360()*0.340566);
}

double NNfunction_ss_uRdR::synapse0x140ed90() {
   return (neuron0x14026a0()*1.11693);
}

double NNfunction_ss_uRdR::synapse0x140edd0() {
   return (neuron0x14029e0()*-0.809006);
}

double NNfunction_ss_uRdR::synapse0x140ee10() {
   return (neuron0x1402d20()*0.0484101);
}

double NNfunction_ss_uRdR::synapse0x140ee50() {
   return (neuron0x1403060()*0.273385);
}

double NNfunction_ss_uRdR::synapse0x140ee90() {
   return (neuron0x14033a0()*0.0787767);
}

double NNfunction_ss_uRdR::synapse0x140eed0() {
   return (neuron0x14036e0()*-0.00999586);
}

double NNfunction_ss_uRdR::synapse0x140e960() {
   return (neuron0x1403a20()*0.0264598);
}

double NNfunction_ss_uRdR::synapse0x140e9a0() {
   return (neuron0x1403f80()*-0.0419503);
}

double NNfunction_ss_uRdR::synapse0x140f020() {
   return (neuron0x14041a0()*-0.240186);
}

double NNfunction_ss_uRdR::synapse0x140f060() {
   return (neuron0x14044e0()*-0.243002);
}

double NNfunction_ss_uRdR::synapse0x140f0a0() {
   return (neuron0x1404820()*0.328005);
}

double NNfunction_ss_uRdR::synapse0x140f0e0() {
   return (neuron0x1404b60()*0.130886);
}

double NNfunction_ss_uRdR::synapse0x140f120() {
   return (neuron0x1404ea0()*-0.159425);
}

double NNfunction_ss_uRdR::synapse0x140f160() {
   return (neuron0x14051e0()*0.261686);
}

double NNfunction_ss_uRdR::synapse0x140f4e0() {
   return (neuron0x1400620()*0.367279);
}

double NNfunction_ss_uRdR::synapse0x1400840() {
   return (neuron0x1400960()*-0.0152202);
}

double NNfunction_ss_uRdR::synapse0x1400880() {
   return (neuron0x1400ca0()*0.0762588);
}

double NNfunction_ss_uRdR::synapse0x1400b80() {
   return (neuron0x1400fe0()*0.0169222);
}

double NNfunction_ss_uRdR::synapse0x1400bc0() {
   return (neuron0x1401320()*0.783093);
}

double NNfunction_ss_uRdR::synapse0x1400ec0() {
   return (neuron0x1401660()*-0.414547);
}

double NNfunction_ss_uRdR::synapse0x1400f00() {
   return (neuron0x14019a0()*0.137508);
}

double NNfunction_ss_uRdR::synapse0x1401200() {
   return (neuron0x1401ce0()*0.0269255);
}

double NNfunction_ss_uRdR::synapse0x1401240() {
   return (neuron0x1402020()*0.27524);
}

double NNfunction_ss_uRdR::synapse0x1401540() {
   return (neuron0x1402360()*0.390677);
}

double NNfunction_ss_uRdR::synapse0x1401580() {
   return (neuron0x14026a0()*0.0136147);
}

double NNfunction_ss_uRdR::synapse0x1401880() {
   return (neuron0x14029e0()*0.294896);
}

double NNfunction_ss_uRdR::synapse0x14018c0() {
   return (neuron0x1402d20()*-0.448713);
}

double NNfunction_ss_uRdR::synapse0x1401bc0() {
   return (neuron0x1403060()*-0.417816);
}

double NNfunction_ss_uRdR::synapse0x1401c00() {
   return (neuron0x14033a0()*0.209663);
}

double NNfunction_ss_uRdR::synapse0x1401f00() {
   return (neuron0x14036e0()*-0.356471);
}

double NNfunction_ss_uRdR::synapse0x1401f40() {
   return (neuron0x1403a20()*-0.186467);
}

double NNfunction_ss_uRdR::synapse0x1402240() {
   return (neuron0x1403f80()*-0.134802);
}

double NNfunction_ss_uRdR::synapse0x1402280() {
   return (neuron0x14041a0()*0.018061);
}

double NNfunction_ss_uRdR::synapse0x1402580() {
   return (neuron0x14044e0()*0.0347761);
}

double NNfunction_ss_uRdR::synapse0x14025c0() {
   return (neuron0x1404820()*0.0104865);
}

double NNfunction_ss_uRdR::synapse0x14028c0() {
   return (neuron0x1404b60()*0.0922198);
}

double NNfunction_ss_uRdR::synapse0x1402900() {
   return (neuron0x1404ea0()*-0.144565);
}

double NNfunction_ss_uRdR::synapse0x1402c00() {
   return (neuron0x14051e0()*0.104518);
}

double NNfunction_ss_uRdR::synapse0x1402c40() {
   return (neuron0x1400620()*0.0307259);
}

double NNfunction_ss_uRdR::synapse0x1403900() {
   return (neuron0x1400960()*-0.450023);
}

double NNfunction_ss_uRdR::synapse0x1403940() {
   return (neuron0x1400ca0()*0.538471);
}

double NNfunction_ss_uRdR::synapse0x140f330() {
   return (neuron0x1400fe0()*0.00488827);
}

double NNfunction_ss_uRdR::synapse0x140f370() {
   return (neuron0x1401320()*0.066222);
}

double NNfunction_ss_uRdR::synapse0x1403c40() {
   return (neuron0x1401660()*0.107718);
}

double NNfunction_ss_uRdR::synapse0x1403c80() {
   return (neuron0x14019a0()*-0.00321352);
}

double NNfunction_ss_uRdR::synapse0x11b1c10() {
   return (neuron0x1401ce0()*0.0613797);
}

double NNfunction_ss_uRdR::synapse0x11b1c50() {
   return (neuron0x1402020()*-0.238731);
}

double NNfunction_ss_uRdR::synapse0x14043c0() {
   return (neuron0x1402360()*0.432005);
}

double NNfunction_ss_uRdR::synapse0x1404400() {
   return (neuron0x14026a0()*-0.100022);
}

double NNfunction_ss_uRdR::synapse0x1404700() {
   return (neuron0x14029e0()*0.530204);
}

double NNfunction_ss_uRdR::synapse0x1404740() {
   return (neuron0x1402d20()*0.0287115);
}

double NNfunction_ss_uRdR::synapse0x1404a40() {
   return (neuron0x1403060()*0.303288);
}

double NNfunction_ss_uRdR::synapse0x1404a80() {
   return (neuron0x14033a0()*0.316423);
}

double NNfunction_ss_uRdR::synapse0x1404d80() {
   return (neuron0x14036e0()*0.397604);
}

double NNfunction_ss_uRdR::synapse0x1404dc0() {
   return (neuron0x1403a20()*0.28835);
}

double NNfunction_ss_uRdR::synapse0x14050c0() {
   return (neuron0x1403f80()*0.817978);
}

double NNfunction_ss_uRdR::synapse0x1405100() {
   return (neuron0x14041a0()*0.181467);
}

double NNfunction_ss_uRdR::synapse0x1405400() {
   return (neuron0x14044e0()*0.0979602);
}

double NNfunction_ss_uRdR::synapse0x1405440() {
   return (neuron0x1404820()*-0.31532);
}

double NNfunction_ss_uRdR::synapse0x1402f40() {
   return (neuron0x1404b60()*-0.279829);
}

double NNfunction_ss_uRdR::synapse0x1402f80() {
   return (neuron0x1404ea0()*0.0354305);
}

double NNfunction_ss_uRdR::synapse0x1411250() {
   return (neuron0x14051e0()*0.0151911);
}

double NNfunction_ss_uRdR::synapse0x14115d0() {
   return (neuron0x1400620()*-0.895408);
}

double NNfunction_ss_uRdR::synapse0x1411610() {
   return (neuron0x1400960()*0.205115);
}

double NNfunction_ss_uRdR::synapse0x1411650() {
   return (neuron0x1400ca0()*0.365045);
}

double NNfunction_ss_uRdR::synapse0x1411690() {
   return (neuron0x1400fe0()*0.792142);
}

double NNfunction_ss_uRdR::synapse0x14116d0() {
   return (neuron0x1401320()*-0.0920115);
}

double NNfunction_ss_uRdR::synapse0x1411710() {
   return (neuron0x1401660()*0.327139);
}

double NNfunction_ss_uRdR::synapse0x1411750() {
   return (neuron0x14019a0()*-0.0550326);
}

double NNfunction_ss_uRdR::synapse0x1411790() {
   return (neuron0x1401ce0()*-0.410016);
}

double NNfunction_ss_uRdR::synapse0x14117d0() {
   return (neuron0x1402020()*0.308123);
}

double NNfunction_ss_uRdR::synapse0x1411810() {
   return (neuron0x1402360()*-0.250134);
}

double NNfunction_ss_uRdR::synapse0x1411850() {
   return (neuron0x14026a0()*0.0712363);
}

double NNfunction_ss_uRdR::synapse0x1411890() {
   return (neuron0x14029e0()*-0.155244);
}

double NNfunction_ss_uRdR::synapse0x14118d0() {
   return (neuron0x1402d20()*0.752888);
}

double NNfunction_ss_uRdR::synapse0x1411910() {
   return (neuron0x1403060()*0.0180558);
}

double NNfunction_ss_uRdR::synapse0x1411950() {
   return (neuron0x14033a0()*-0.00965171);
}

double NNfunction_ss_uRdR::synapse0x1411990() {
   return (neuron0x14036e0()*0.346408);
}

double NNfunction_ss_uRdR::synapse0x1411420() {
   return (neuron0x1403a20()*0.442462);
}

double NNfunction_ss_uRdR::synapse0x1411460() {
   return (neuron0x1403f80()*0.832913);
}

double NNfunction_ss_uRdR::synapse0x1411ae0() {
   return (neuron0x14041a0()*-0.586964);
}

double NNfunction_ss_uRdR::synapse0x1411b20() {
   return (neuron0x14044e0()*-0.380236);
}

double NNfunction_ss_uRdR::synapse0x1411b60() {
   return (neuron0x1404820()*-0.344008);
}

double NNfunction_ss_uRdR::synapse0x1411ba0() {
   return (neuron0x1404b60()*0.584799);
}

double NNfunction_ss_uRdR::synapse0x1411be0() {
   return (neuron0x1404ea0()*-0.546249);
}

double NNfunction_ss_uRdR::synapse0x1411c20() {
   return (neuron0x14051e0()*0.109327);
}

double NNfunction_ss_uRdR::synapse0x1411fa0() {
   return (neuron0x1400620()*0.00245072);
}

double NNfunction_ss_uRdR::synapse0x1411fe0() {
   return (neuron0x1400960()*-0.0468473);
}

double NNfunction_ss_uRdR::synapse0x1412020() {
   return (neuron0x1400ca0()*0.033236);
}

double NNfunction_ss_uRdR::synapse0x1412060() {
   return (neuron0x1400fe0()*0.43216);
}

double NNfunction_ss_uRdR::synapse0x14120a0() {
   return (neuron0x1401320()*-0.0075576);
}

double NNfunction_ss_uRdR::synapse0x14120e0() {
   return (neuron0x1401660()*-0.0100573);
}

double NNfunction_ss_uRdR::synapse0x1412120() {
   return (neuron0x14019a0()*0.0194723);
}

double NNfunction_ss_uRdR::synapse0x1412160() {
   return (neuron0x1401ce0()*0.0102287);
}

double NNfunction_ss_uRdR::synapse0x14121a0() {
   return (neuron0x1402020()*-0.0101016);
}

double NNfunction_ss_uRdR::synapse0x14121e0() {
   return (neuron0x1402360()*0.0138719);
}

double NNfunction_ss_uRdR::synapse0x1412220() {
   return (neuron0x14026a0()*0.00322341);
}

double NNfunction_ss_uRdR::synapse0x1412260() {
   return (neuron0x14029e0()*0.0353884);
}

double NNfunction_ss_uRdR::synapse0x14122a0() {
   return (neuron0x1402d20()*0.0653407);
}

double NNfunction_ss_uRdR::synapse0x14122e0() {
   return (neuron0x1403060()*0.0140606);
}

double NNfunction_ss_uRdR::synapse0x1412320() {
   return (neuron0x14033a0()*1.14638);
}

double NNfunction_ss_uRdR::synapse0x1412360() {
   return (neuron0x14036e0()*0.000550487);
}

double NNfunction_ss_uRdR::synapse0x1411df0() {
   return (neuron0x1403a20()*0.0076833);
}

double NNfunction_ss_uRdR::synapse0x1411e30() {
   return (neuron0x1403f80()*0.932681);
}

double NNfunction_ss_uRdR::synapse0x14124b0() {
   return (neuron0x14041a0()*-0.0193421);
}

double NNfunction_ss_uRdR::synapse0x14124f0() {
   return (neuron0x14044e0()*0.0186303);
}

double NNfunction_ss_uRdR::synapse0x1412530() {
   return (neuron0x1404820()*-0.0121739);
}

double NNfunction_ss_uRdR::synapse0x1412570() {
   return (neuron0x1404b60()*0.0346489);
}

double NNfunction_ss_uRdR::synapse0x14125b0() {
   return (neuron0x1404ea0()*0.0027469);
}

double NNfunction_ss_uRdR::synapse0x14125f0() {
   return (neuron0x14051e0()*0.0370855);
}

double NNfunction_ss_uRdR::synapse0x1412970() {
   return (neuron0x1400620()*0.0303737);
}

double NNfunction_ss_uRdR::synapse0x14129b0() {
   return (neuron0x1400960()*0.00681006);
}

double NNfunction_ss_uRdR::synapse0x14129f0() {
   return (neuron0x1400ca0()*-0.0214874);
}

double NNfunction_ss_uRdR::synapse0x1412a30() {
   return (neuron0x1400fe0()*0.343094);
}

double NNfunction_ss_uRdR::synapse0x1412a70() {
   return (neuron0x1401320()*0.0406532);
}

double NNfunction_ss_uRdR::synapse0x1412ab0() {
   return (neuron0x1401660()*0.00612442);
}

double NNfunction_ss_uRdR::synapse0x1412af0() {
   return (neuron0x14019a0()*-0.0893127);
}

double NNfunction_ss_uRdR::synapse0x1412b30() {
   return (neuron0x1401ce0()*0.0116759);
}

double NNfunction_ss_uRdR::synapse0x1412b70() {
   return (neuron0x1402020()*0.0111101);
}

double NNfunction_ss_uRdR::synapse0x1412bb0() {
   return (neuron0x1402360()*-0.058905);
}

double NNfunction_ss_uRdR::synapse0x1412bf0() {
   return (neuron0x14026a0()*0.0621988);
}

double NNfunction_ss_uRdR::synapse0x1412c30() {
   return (neuron0x14029e0()*0.070303);
}

double NNfunction_ss_uRdR::synapse0x1412c70() {
   return (neuron0x1402d20()*0.0315367);
}

double NNfunction_ss_uRdR::synapse0x1412cb0() {
   return (neuron0x1403060()*-0.0119611);
}

double NNfunction_ss_uRdR::synapse0x1412cf0() {
   return (neuron0x14033a0()*-0.282982);
}

double NNfunction_ss_uRdR::synapse0x1412d30() {
   return (neuron0x14036e0()*0.0811153);
}

double NNfunction_ss_uRdR::synapse0x14127c0() {
   return (neuron0x1403a20()*0.126891);
}

double NNfunction_ss_uRdR::synapse0x1412800() {
   return (neuron0x1403f80()*-0.574305);
}

double NNfunction_ss_uRdR::synapse0x1412e80() {
   return (neuron0x14041a0()*0.0668537);
}

double NNfunction_ss_uRdR::synapse0x1412ec0() {
   return (neuron0x14044e0()*0.050013);
}

double NNfunction_ss_uRdR::synapse0x1412f00() {
   return (neuron0x1404820()*-0.0229679);
}

double NNfunction_ss_uRdR::synapse0x1412f40() {
   return (neuron0x1404b60()*-0.0495656);
}

double NNfunction_ss_uRdR::synapse0x1412f80() {
   return (neuron0x1404ea0()*0.00860198);
}

double NNfunction_ss_uRdR::synapse0x1412fc0() {
   return (neuron0x14051e0()*-0.0209953);
}

double NNfunction_ss_uRdR::synapse0x1413340() {
   return (neuron0x1400620()*0.168475);
}

double NNfunction_ss_uRdR::synapse0x1413380() {
   return (neuron0x1400960()*-0.403344);
}

double NNfunction_ss_uRdR::synapse0x14133c0() {
   return (neuron0x1400ca0()*0.118689);
}

double NNfunction_ss_uRdR::synapse0x1413400() {
   return (neuron0x1400fe0()*-0.88011);
}

double NNfunction_ss_uRdR::synapse0x1413440() {
   return (neuron0x1401320()*0.505809);
}

double NNfunction_ss_uRdR::synapse0x1413480() {
   return (neuron0x1401660()*-0.416114);
}

double NNfunction_ss_uRdR::synapse0x14134c0() {
   return (neuron0x14019a0()*0.522223);
}

double NNfunction_ss_uRdR::synapse0x1413500() {
   return (neuron0x1401ce0()*0.25992);
}

double NNfunction_ss_uRdR::synapse0x1413540() {
   return (neuron0x1402020()*1.00316);
}

double NNfunction_ss_uRdR::synapse0x1413580() {
   return (neuron0x1402360()*-0.338884);
}

double NNfunction_ss_uRdR::synapse0x14135c0() {
   return (neuron0x14026a0()*0.82991);
}

double NNfunction_ss_uRdR::synapse0x1413600() {
   return (neuron0x14029e0()*0.230221);
}

double NNfunction_ss_uRdR::synapse0x1413640() {
   return (neuron0x1402d20()*-0.253288);
}

double NNfunction_ss_uRdR::synapse0x1413680() {
   return (neuron0x1403060()*-1.00327);
}

double NNfunction_ss_uRdR::synapse0x14136c0() {
   return (neuron0x14033a0()*0.519228);
}

double NNfunction_ss_uRdR::synapse0x1413700() {
   return (neuron0x14036e0()*-0.590744);
}

double NNfunction_ss_uRdR::synapse0x1413190() {
   return (neuron0x1403a20()*0.49278);
}

double NNfunction_ss_uRdR::synapse0x14131d0() {
   return (neuron0x1403f80()*0.162595);
}

double NNfunction_ss_uRdR::synapse0x1413850() {
   return (neuron0x14041a0()*0.579883);
}

double NNfunction_ss_uRdR::synapse0x1413890() {
   return (neuron0x14044e0()*-0.478264);
}

double NNfunction_ss_uRdR::synapse0x14138d0() {
   return (neuron0x1404820()*-0.296085);
}

double NNfunction_ss_uRdR::synapse0x1413910() {
   return (neuron0x1404b60()*-0.609394);
}

double NNfunction_ss_uRdR::synapse0x1413950() {
   return (neuron0x1404ea0()*0.0674535);
}

double NNfunction_ss_uRdR::synapse0x1413990() {
   return (neuron0x14051e0()*0.187592);
}

double NNfunction_ss_uRdR::synapse0x1413d10() {
   return (neuron0x1400620()*0.041682);
}

double NNfunction_ss_uRdR::synapse0x1413d50() {
   return (neuron0x1400960()*0.565446);
}

double NNfunction_ss_uRdR::synapse0x1413d90() {
   return (neuron0x1400ca0()*0.0506397);
}

double NNfunction_ss_uRdR::synapse0x1413dd0() {
   return (neuron0x1400fe0()*-1.52269);
}

double NNfunction_ss_uRdR::synapse0x1413e10() {
   return (neuron0x1401320()*0.0270849);
}

double NNfunction_ss_uRdR::synapse0x1413e50() {
   return (neuron0x1401660()*0.00867128);
}

double NNfunction_ss_uRdR::synapse0x1413e90() {
   return (neuron0x14019a0()*-0.00615064);
}

double NNfunction_ss_uRdR::synapse0x1413ed0() {
   return (neuron0x1401ce0()*0.0700096);
}

double NNfunction_ss_uRdR::synapse0x1413f10() {
   return (neuron0x1402020()*-0.114014);
}

double NNfunction_ss_uRdR::synapse0x140c0d0() {
   return (neuron0x1402360()*-0.100531);
}

double NNfunction_ss_uRdR::synapse0x140c110() {
   return (neuron0x14026a0()*0.0135068);
}

double NNfunction_ss_uRdR::synapse0x140c150() {
   return (neuron0x14029e0()*-0.144693);
}

double NNfunction_ss_uRdR::synapse0x140c190() {
   return (neuron0x1402d20()*0.025974);
}

double NNfunction_ss_uRdR::synapse0x140c1d0() {
   return (neuron0x1403060()*-0.0617577);
}

double NNfunction_ss_uRdR::synapse0x140c210() {
   return (neuron0x14033a0()*-0.489478);
}

double NNfunction_ss_uRdR::synapse0x140c250() {
   return (neuron0x14036e0()*0.17515);
}

double NNfunction_ss_uRdR::synapse0x1413b60() {
   return (neuron0x1403a20()*-0.0385943);
}

double NNfunction_ss_uRdR::synapse0x1413ba0() {
   return (neuron0x1403f80()*-0.916327);
}

double NNfunction_ss_uRdR::synapse0x140c3a0() {
   return (neuron0x14041a0()*0.0702686);
}

double NNfunction_ss_uRdR::synapse0x140c3e0() {
   return (neuron0x14044e0()*-0.0689065);
}

double NNfunction_ss_uRdR::synapse0x140c420() {
   return (neuron0x1404820()*0.00488713);
}

double NNfunction_ss_uRdR::synapse0x140c460() {
   return (neuron0x1404b60()*-0.118866);
}

double NNfunction_ss_uRdR::synapse0x140c4a0() {
   return (neuron0x1404ea0()*0.027508);
}

double NNfunction_ss_uRdR::synapse0x140c4e0() {
   return (neuron0x14051e0()*0.038596);
}

double NNfunction_ss_uRdR::synapse0x140c860() {
   return (neuron0x1400620()*-0.428081);
}

double NNfunction_ss_uRdR::synapse0x140c8a0() {
   return (neuron0x1400960()*-0.149425);
}

double NNfunction_ss_uRdR::synapse0x140c8e0() {
   return (neuron0x1400ca0()*-0.327857);
}

double NNfunction_ss_uRdR::synapse0x140c920() {
   return (neuron0x1400fe0()*0.653225);
}

double NNfunction_ss_uRdR::synapse0x140c960() {
   return (neuron0x1401320()*-0.98564);
}

double NNfunction_ss_uRdR::synapse0x140c9a0() {
   return (neuron0x1401660()*0.102409);
}

double NNfunction_ss_uRdR::synapse0x140c9e0() {
   return (neuron0x14019a0()*-0.641519);
}

double NNfunction_ss_uRdR::synapse0x140ca20() {
   return (neuron0x1401ce0()*0.893517);
}

double NNfunction_ss_uRdR::synapse0x140ca60() {
   return (neuron0x1402020()*-0.196796);
}

double NNfunction_ss_uRdR::synapse0x140caa0() {
   return (neuron0x1402360()*-0.0443405);
}

double NNfunction_ss_uRdR::synapse0x140cae0() {
   return (neuron0x14026a0()*-0.369017);
}

double NNfunction_ss_uRdR::synapse0x140cb20() {
   return (neuron0x14029e0()*-0.616645);
}

double NNfunction_ss_uRdR::synapse0x140cb60() {
   return (neuron0x1402d20()*0.32804);
}

double NNfunction_ss_uRdR::synapse0x140cba0() {
   return (neuron0x1403060()*0.181274);
}

double NNfunction_ss_uRdR::synapse0x140cbe0() {
   return (neuron0x14033a0()*-0.537815);
}

double NNfunction_ss_uRdR::synapse0x140cc20() {
   return (neuron0x14036e0()*0.974205);
}

double NNfunction_ss_uRdR::synapse0x140c6b0() {
   return (neuron0x1403a20()*0.230352);
}

double NNfunction_ss_uRdR::synapse0x140c6f0() {
   return (neuron0x1403f80()*0.314989);
}

double NNfunction_ss_uRdR::synapse0x140cd70() {
   return (neuron0x14041a0()*0.0339287);
}

double NNfunction_ss_uRdR::synapse0x140cdb0() {
   return (neuron0x14044e0()*0.109636);
}

double NNfunction_ss_uRdR::synapse0x140cdf0() {
   return (neuron0x1404820()*-0.183185);
}

double NNfunction_ss_uRdR::synapse0x140ce30() {
   return (neuron0x1404b60()*-0.10277);
}

double NNfunction_ss_uRdR::synapse0x140ce70() {
   return (neuron0x1404ea0()*0.416735);
}

double NNfunction_ss_uRdR::synapse0x140ceb0() {
   return (neuron0x14051e0()*-0.298262);
}

double NNfunction_ss_uRdR::synapse0x140d080() {
   return (neuron0x1400620()*-0.294197);
}

double NNfunction_ss_uRdR::synapse0x1416110() {
   return (neuron0x1400960()*0.960182);
}

double NNfunction_ss_uRdR::synapse0x1416150() {
   return (neuron0x1400ca0()*-0.0310367);
}

double NNfunction_ss_uRdR::synapse0x1416190() {
   return (neuron0x1400fe0()*-0.353672);
}

double NNfunction_ss_uRdR::synapse0x14161d0() {
   return (neuron0x1401320()*0.288052);
}

double NNfunction_ss_uRdR::synapse0x1416210() {
   return (neuron0x1401660()*-0.236744);
}

double NNfunction_ss_uRdR::synapse0x1416250() {
   return (neuron0x14019a0()*-0.0947795);
}

double NNfunction_ss_uRdR::synapse0x1416290() {
   return (neuron0x1401ce0()*0.125366);
}

double NNfunction_ss_uRdR::synapse0x14162d0() {
   return (neuron0x1402020()*-0.146478);
}

double NNfunction_ss_uRdR::synapse0x1416310() {
   return (neuron0x1402360()*-0.188611);
}

double NNfunction_ss_uRdR::synapse0x1416350() {
   return (neuron0x14026a0()*0.257749);
}

double NNfunction_ss_uRdR::synapse0x1416390() {
   return (neuron0x14029e0()*1.01594);
}

double NNfunction_ss_uRdR::synapse0x14163d0() {
   return (neuron0x1402d20()*-0.490926);
}

double NNfunction_ss_uRdR::synapse0x1416410() {
   return (neuron0x1403060()*0.258005);
}

double NNfunction_ss_uRdR::synapse0x1416450() {
   return (neuron0x14033a0()*-0.546878);
}

double NNfunction_ss_uRdR::synapse0x1416490() {
   return (neuron0x14036e0()*-0.364019);
}

double NNfunction_ss_uRdR::synapse0x1415f60() {
   return (neuron0x1403a20()*0.0532301);
}

double NNfunction_ss_uRdR::synapse0x1415fa0() {
   return (neuron0x1403f80()*-0.755022);
}

double NNfunction_ss_uRdR::synapse0x14165e0() {
   return (neuron0x14041a0()*-0.647266);
}

double NNfunction_ss_uRdR::synapse0x1416620() {
   return (neuron0x14044e0()*0.190648);
}

double NNfunction_ss_uRdR::synapse0x1416660() {
   return (neuron0x1404820()*-0.238286);
}

double NNfunction_ss_uRdR::synapse0x14166a0() {
   return (neuron0x1404b60()*0.182543);
}

double NNfunction_ss_uRdR::synapse0x14166e0() {
   return (neuron0x1404ea0()*0.011074);
}

double NNfunction_ss_uRdR::synapse0x1416720() {
   return (neuron0x14051e0()*0.234672);
}

double NNfunction_ss_uRdR::synapse0x1416aa0() {
   return (neuron0x1400620()*0.0349663);
}

double NNfunction_ss_uRdR::synapse0x1416ae0() {
   return (neuron0x1400960()*-0.44646);
}

double NNfunction_ss_uRdR::synapse0x1416b20() {
   return (neuron0x1400ca0()*0.0465556);
}

double NNfunction_ss_uRdR::synapse0x1416b60() {
   return (neuron0x1400fe0()*-1.57467);
}

double NNfunction_ss_uRdR::synapse0x1416ba0() {
   return (neuron0x1401320()*-0.0327375);
}

double NNfunction_ss_uRdR::synapse0x1416be0() {
   return (neuron0x1401660()*0.00945785);
}

double NNfunction_ss_uRdR::synapse0x1416c20() {
   return (neuron0x14019a0()*0.11786);
}

double NNfunction_ss_uRdR::synapse0x1416c60() {
   return (neuron0x1401ce0()*-0.0473146);
}

double NNfunction_ss_uRdR::synapse0x1416ca0() {
   return (neuron0x1402020()*0.114675);
}

double NNfunction_ss_uRdR::synapse0x1416ce0() {
   return (neuron0x1402360()*0.0710372);
}

double NNfunction_ss_uRdR::synapse0x1416d20() {
   return (neuron0x14026a0()*-0.0399515);
}

double NNfunction_ss_uRdR::synapse0x1416d60() {
   return (neuron0x14029e0()*-0.10833);
}

double NNfunction_ss_uRdR::synapse0x1416da0() {
   return (neuron0x1402d20()*0.00259756);
}

double NNfunction_ss_uRdR::synapse0x1416de0() {
   return (neuron0x1403060()*0.0975417);
}

double NNfunction_ss_uRdR::synapse0x1416e20() {
   return (neuron0x14033a0()*-0.319619);
}

double NNfunction_ss_uRdR::synapse0x1416e60() {
   return (neuron0x14036e0()*-0.204182);
}

double NNfunction_ss_uRdR::synapse0x14168f0() {
   return (neuron0x1403a20()*0.0116577);
}

double NNfunction_ss_uRdR::synapse0x1416930() {
   return (neuron0x1403f80()*-0.275828);
}

double NNfunction_ss_uRdR::synapse0x1416fb0() {
   return (neuron0x14041a0()*-0.0344128);
}

double NNfunction_ss_uRdR::synapse0x1416ff0() {
   return (neuron0x14044e0()*0.0634302);
}

double NNfunction_ss_uRdR::synapse0x1417030() {
   return (neuron0x1404820()*0.000322277);
}

double NNfunction_ss_uRdR::synapse0x1417070() {
   return (neuron0x1404b60()*0.0420637);
}

double NNfunction_ss_uRdR::synapse0x14170b0() {
   return (neuron0x1404ea0()*-0.0114123);
}

double NNfunction_ss_uRdR::synapse0x14170f0() {
   return (neuron0x14051e0()*0.0916188);
}

double NNfunction_ss_uRdR::synapse0x1417470() {
   return (neuron0x1400620()*-0.080245);
}

double NNfunction_ss_uRdR::synapse0x14174b0() {
   return (neuron0x1400960()*-0.0552277);
}

double NNfunction_ss_uRdR::synapse0x14174f0() {
   return (neuron0x1400ca0()*-0.0734849);
}

double NNfunction_ss_uRdR::synapse0x1417530() {
   return (neuron0x1400fe0()*0.0616262);
}

double NNfunction_ss_uRdR::synapse0x1417570() {
   return (neuron0x1401320()*-0.0235736);
}

double NNfunction_ss_uRdR::synapse0x14175b0() {
   return (neuron0x1401660()*-0.086397);
}

double NNfunction_ss_uRdR::synapse0x14175f0() {
   return (neuron0x14019a0()*0.0493378);
}

double NNfunction_ss_uRdR::synapse0x1417630() {
   return (neuron0x1401ce0()*0.151189);
}

double NNfunction_ss_uRdR::synapse0x1417670() {
   return (neuron0x1402020()*0.00219861);
}

double NNfunction_ss_uRdR::synapse0x14176b0() {
   return (neuron0x1402360()*-0.149856);
}

double NNfunction_ss_uRdR::synapse0x14176f0() {
   return (neuron0x14026a0()*-0.20596);
}

double NNfunction_ss_uRdR::synapse0x1417730() {
   return (neuron0x14029e0()*-0.735737);
}

double NNfunction_ss_uRdR::synapse0x1417770() {
   return (neuron0x1402d20()*-0.927515);
}

double NNfunction_ss_uRdR::synapse0x14177b0() {
   return (neuron0x1403060()*0.298635);
}

double NNfunction_ss_uRdR::synapse0x14177f0() {
   return (neuron0x14033a0()*0.478446);
}

double NNfunction_ss_uRdR::synapse0x1417830() {
   return (neuron0x14036e0()*-0.235916);
}

double NNfunction_ss_uRdR::synapse0x14172c0() {
   return (neuron0x1403a20()*0.300996);
}

double NNfunction_ss_uRdR::synapse0x1417300() {
   return (neuron0x1403f80()*0.0234004);
}

double NNfunction_ss_uRdR::synapse0x1417980() {
   return (neuron0x14041a0()*-0.514774);
}

double NNfunction_ss_uRdR::synapse0x14179c0() {
   return (neuron0x14044e0()*-0.0848543);
}

double NNfunction_ss_uRdR::synapse0x1417a00() {
   return (neuron0x1404820()*0.00471545);
}

double NNfunction_ss_uRdR::synapse0x1417a40() {
   return (neuron0x1404b60()*0.011884);
}

double NNfunction_ss_uRdR::synapse0x1417a80() {
   return (neuron0x1404ea0()*0.00823626);
}

double NNfunction_ss_uRdR::synapse0x1417ac0() {
   return (neuron0x14051e0()*-0.0449086);
}

double NNfunction_ss_uRdR::synapse0x1417e40() {
   return (neuron0x1400620()*-0.0189925);
}

double NNfunction_ss_uRdR::synapse0x1417e80() {
   return (neuron0x1400960()*0.0463767);
}

double NNfunction_ss_uRdR::synapse0x1417ec0() {
   return (neuron0x1400ca0()*0.0639955);
}

double NNfunction_ss_uRdR::synapse0x1417f00() {
   return (neuron0x1400fe0()*0.201956);
}

double NNfunction_ss_uRdR::synapse0x1417f40() {
   return (neuron0x1401320()*0.0372524);
}

double NNfunction_ss_uRdR::synapse0x1417f80() {
   return (neuron0x1401660()*-0.0217958);
}

double NNfunction_ss_uRdR::synapse0x1417fc0() {
   return (neuron0x14019a0()*0.0311999);
}

double NNfunction_ss_uRdR::synapse0x1418000() {
   return (neuron0x1401ce0()*-0.0495396);
}

double NNfunction_ss_uRdR::synapse0x1418040() {
   return (neuron0x1402020()*-0.00488289);
}

double NNfunction_ss_uRdR::synapse0x1418080() {
   return (neuron0x1402360()*0.0109493);
}

double NNfunction_ss_uRdR::synapse0x14180c0() {
   return (neuron0x14026a0()*0.0271565);
}

double NNfunction_ss_uRdR::synapse0x1418100() {
   return (neuron0x14029e0()*0.00328015);
}

double NNfunction_ss_uRdR::synapse0x1418140() {
   return (neuron0x1402d20()*-0.0059718);
}

double NNfunction_ss_uRdR::synapse0x1418180() {
   return (neuron0x1403060()*0.0497907);
}

double NNfunction_ss_uRdR::synapse0x14181c0() {
   return (neuron0x14033a0()*-0.0943126);
}

double NNfunction_ss_uRdR::synapse0x1418200() {
   return (neuron0x14036e0()*0.0317138);
}

double NNfunction_ss_uRdR::synapse0x1417c90() {
   return (neuron0x1403a20()*-0.099589);
}

double NNfunction_ss_uRdR::synapse0x1417cd0() {
   return (neuron0x1403f80()*-0.274041);
}

double NNfunction_ss_uRdR::synapse0x1418350() {
   return (neuron0x14041a0()*-0.0746104);
}

double NNfunction_ss_uRdR::synapse0x1418390() {
   return (neuron0x14044e0()*0.0152638);
}

double NNfunction_ss_uRdR::synapse0x14183d0() {
   return (neuron0x1404820()*-0.0520643);
}

double NNfunction_ss_uRdR::synapse0x1418410() {
   return (neuron0x1404b60()*0.0402455);
}

double NNfunction_ss_uRdR::synapse0x1418450() {
   return (neuron0x1404ea0()*0.0235644);
}

double NNfunction_ss_uRdR::synapse0x1418490() {
   return (neuron0x14051e0()*0.0396478);
}

double NNfunction_ss_uRdR::synapse0x1418810() {
   return (neuron0x1400620()*-0.205273);
}

double NNfunction_ss_uRdR::synapse0x1418850() {
   return (neuron0x1400960()*0.476569);
}

double NNfunction_ss_uRdR::synapse0x1418890() {
   return (neuron0x1400ca0()*-0.32717);
}

double NNfunction_ss_uRdR::synapse0x14188d0() {
   return (neuron0x1400fe0()*-1.50251);
}

double NNfunction_ss_uRdR::synapse0x1418910() {
   return (neuron0x1401320()*0.245477);
}

double NNfunction_ss_uRdR::synapse0x1418950() {
   return (neuron0x1401660()*0.349019);
}

double NNfunction_ss_uRdR::synapse0x1418990() {
   return (neuron0x14019a0()*0.00967336);
}

double NNfunction_ss_uRdR::synapse0x14189d0() {
   return (neuron0x1401ce0()*0.0235984);
}

double NNfunction_ss_uRdR::synapse0x1418a10() {
   return (neuron0x1402020()*0.136207);
}

double NNfunction_ss_uRdR::synapse0x1418a50() {
   return (neuron0x1402360()*-0.138384);
}

double NNfunction_ss_uRdR::synapse0x1418a90() {
   return (neuron0x14026a0()*-0.409157);
}

double NNfunction_ss_uRdR::synapse0x1418ad0() {
   return (neuron0x14029e0()*-0.433521);
}

double NNfunction_ss_uRdR::synapse0x1418b10() {
   return (neuron0x1402d20()*0.306455);
}

double NNfunction_ss_uRdR::synapse0x1418b50() {
   return (neuron0x1403060()*0.087789);
}

double NNfunction_ss_uRdR::synapse0x1418b90() {
   return (neuron0x14033a0()*0.671344);
}

double NNfunction_ss_uRdR::synapse0x1418bd0() {
   return (neuron0x14036e0()*-0.140841);
}

double NNfunction_ss_uRdR::synapse0x1418660() {
   return (neuron0x1403a20()*0.31537);
}

double NNfunction_ss_uRdR::synapse0x14186a0() {
   return (neuron0x1403f80()*0.69986);
}

double NNfunction_ss_uRdR::synapse0x1418d20() {
   return (neuron0x14041a0()*0.0288266);
}

double NNfunction_ss_uRdR::synapse0x1418d60() {
   return (neuron0x14044e0()*0.0109409);
}

double NNfunction_ss_uRdR::synapse0x1418da0() {
   return (neuron0x1404820()*0.141378);
}

double NNfunction_ss_uRdR::synapse0x1418de0() {
   return (neuron0x1404b60()*-0.124308);
}

double NNfunction_ss_uRdR::synapse0x1418e20() {
   return (neuron0x1404ea0()*-0.0556853);
}

double NNfunction_ss_uRdR::synapse0x1418e60() {
   return (neuron0x14051e0()*-0.256681);
}

double NNfunction_ss_uRdR::synapse0x14191e0() {
   return (neuron0x1400620()*0.0118981);
}

double NNfunction_ss_uRdR::synapse0x1419220() {
   return (neuron0x1400960()*0.00807999);
}

double NNfunction_ss_uRdR::synapse0x1419260() {
   return (neuron0x1400ca0()*0.0140614);
}

double NNfunction_ss_uRdR::synapse0x14192a0() {
   return (neuron0x1400fe0()*-0.0190944);
}

double NNfunction_ss_uRdR::synapse0x14192e0() {
   return (neuron0x1401320()*-0.0178049);
}

double NNfunction_ss_uRdR::synapse0x1419320() {
   return (neuron0x1401660()*-0.0326196);
}

double NNfunction_ss_uRdR::synapse0x1419360() {
   return (neuron0x14019a0()*-0.0174204);
}

double NNfunction_ss_uRdR::synapse0x14193a0() {
   return (neuron0x1401ce0()*-0.0690695);
}

double NNfunction_ss_uRdR::synapse0x14193e0() {
   return (neuron0x1402020()*-0.000315974);
}

double NNfunction_ss_uRdR::synapse0x1419420() {
   return (neuron0x1402360()*0.00660523);
}

double NNfunction_ss_uRdR::synapse0x1419460() {
   return (neuron0x14026a0()*0.0170407);
}

double NNfunction_ss_uRdR::synapse0x14194a0() {
   return (neuron0x14029e0()*0.0266519);
}

double NNfunction_ss_uRdR::synapse0x14194e0() {
   return (neuron0x1402d20()*-0.0166823);
}

double NNfunction_ss_uRdR::synapse0x1419520() {
   return (neuron0x1403060()*0.00751986);
}

double NNfunction_ss_uRdR::synapse0x1419560() {
   return (neuron0x14033a0()*0.535869);
}

double NNfunction_ss_uRdR::synapse0x14195a0() {
   return (neuron0x14036e0()*0.0852479);
}

double NNfunction_ss_uRdR::synapse0x1419030() {
   return (neuron0x1403a20()*-0.0359987);
}

double NNfunction_ss_uRdR::synapse0x1419070() {
   return (neuron0x1403f80()*-0.362158);
}

double NNfunction_ss_uRdR::synapse0x14196f0() {
   return (neuron0x14041a0()*-0.00975794);
}

double NNfunction_ss_uRdR::synapse0x1419730() {
   return (neuron0x14044e0()*0.00878548);
}

double NNfunction_ss_uRdR::synapse0x1419770() {
   return (neuron0x1404820()*-0.0184741);
}

double NNfunction_ss_uRdR::synapse0x14197b0() {
   return (neuron0x1404b60()*0.00750409);
}

double NNfunction_ss_uRdR::synapse0x14197f0() {
   return (neuron0x1404ea0()*0.0169849);
}

double NNfunction_ss_uRdR::synapse0x1419830() {
   return (neuron0x14051e0()*-0.00296886);
}

double NNfunction_ss_uRdR::synapse0x1419bb0() {
   return (neuron0x1400620()*0.0129185);
}

double NNfunction_ss_uRdR::synapse0x1419bf0() {
   return (neuron0x1400960()*0.00814999);
}

double NNfunction_ss_uRdR::synapse0x1419c30() {
   return (neuron0x1400ca0()*-0.00184681);
}

double NNfunction_ss_uRdR::synapse0x1419c70() {
   return (neuron0x1400fe0()*5.22118);
}

double NNfunction_ss_uRdR::synapse0x1419cb0() {
   return (neuron0x1401320()*-0.00845914);
}

double NNfunction_ss_uRdR::synapse0x1419cf0() {
   return (neuron0x1401660()*0.0201439);
}

double NNfunction_ss_uRdR::synapse0x1419d30() {
   return (neuron0x14019a0()*0.0257953);
}

double NNfunction_ss_uRdR::synapse0x1419d70() {
   return (neuron0x1401ce0()*0.027487);
}

double NNfunction_ss_uRdR::synapse0x1419db0() {
   return (neuron0x1402020()*0.00975739);
}

double NNfunction_ss_uRdR::synapse0x1419df0() {
   return (neuron0x1402360()*-0.0136181);
}

double NNfunction_ss_uRdR::synapse0x1419e30() {
   return (neuron0x14026a0()*-0.000663208);
}

double NNfunction_ss_uRdR::synapse0x1419e70() {
   return (neuron0x14029e0()*-0.00728519);
}

double NNfunction_ss_uRdR::synapse0x1419eb0() {
   return (neuron0x1402d20()*-0.0202125);
}

double NNfunction_ss_uRdR::synapse0x1419ef0() {
   return (neuron0x1403060()*-0.0126138);
}

double NNfunction_ss_uRdR::synapse0x1419f30() {
   return (neuron0x14033a0()*0.517959);
}

double NNfunction_ss_uRdR::synapse0x1419f70() {
   return (neuron0x14036e0()*-0.0191271);
}

double NNfunction_ss_uRdR::synapse0x1419a00() {
   return (neuron0x1403a20()*0.00567824);
}

double NNfunction_ss_uRdR::synapse0x1419a40() {
   return (neuron0x1403f80()*0.303624);
}

double NNfunction_ss_uRdR::synapse0x141a0c0() {
   return (neuron0x14041a0()*-0.0115257);
}

double NNfunction_ss_uRdR::synapse0x141a100() {
   return (neuron0x14044e0()*-0.0120832);
}

double NNfunction_ss_uRdR::synapse0x141a140() {
   return (neuron0x1404820()*-0.00426218);
}

double NNfunction_ss_uRdR::synapse0x141a180() {
   return (neuron0x1404b60()*0.00178877);
}

double NNfunction_ss_uRdR::synapse0x141a1c0() {
   return (neuron0x1404ea0()*-0.0116509);
}

double NNfunction_ss_uRdR::synapse0x141a200() {
   return (neuron0x14051e0()*-0.00709032);
}

double NNfunction_ss_uRdR::synapse0x141a580() {
   return (neuron0x1400620()*-0.00921406);
}

double NNfunction_ss_uRdR::synapse0x141a5c0() {
   return (neuron0x1400960()*0.00154524);
}

double NNfunction_ss_uRdR::synapse0x141a600() {
   return (neuron0x1400ca0()*0.000823713);
}

double NNfunction_ss_uRdR::synapse0x141a640() {
   return (neuron0x1400fe0()*0.132947);
}

double NNfunction_ss_uRdR::synapse0x141a680() {
   return (neuron0x1401320()*-0.00693015);
}

double NNfunction_ss_uRdR::synapse0x141a6c0() {
   return (neuron0x1401660()*0.00599621);
}

double NNfunction_ss_uRdR::synapse0x141a700() {
   return (neuron0x14019a0()*0.0328344);
}

double NNfunction_ss_uRdR::synapse0x141a740() {
   return (neuron0x1401ce0()*0.0642641);
}

double NNfunction_ss_uRdR::synapse0x141a780() {
   return (neuron0x1402020()*-0.00997291);
}

double NNfunction_ss_uRdR::synapse0x141a7c0() {
   return (neuron0x1402360()*-0.0186519);
}

double NNfunction_ss_uRdR::synapse0x141a800() {
   return (neuron0x14026a0()*-0.0149188);
}

double NNfunction_ss_uRdR::synapse0x141a840() {
   return (neuron0x14029e0()*-0.00109339);
}

double NNfunction_ss_uRdR::synapse0x141a880() {
   return (neuron0x1402d20()*-0.0260856);
}

double NNfunction_ss_uRdR::synapse0x141a8c0() {
   return (neuron0x1403060()*-0.0191193);
}

double NNfunction_ss_uRdR::synapse0x141a900() {
   return (neuron0x14033a0()*-2.53638);
}

double NNfunction_ss_uRdR::synapse0x141a940() {
   return (neuron0x14036e0()*-0.0767691);
}

double NNfunction_ss_uRdR::synapse0x141a3d0() {
   return (neuron0x1403a20()*-0.0102058);
}

double NNfunction_ss_uRdR::synapse0x141a410() {
   return (neuron0x1403f80()*0.46144);
}

double NNfunction_ss_uRdR::synapse0x141aa90() {
   return (neuron0x14041a0()*-0.0303117);
}

double NNfunction_ss_uRdR::synapse0x141aad0() {
   return (neuron0x14044e0()*-0.01758);
}

double NNfunction_ss_uRdR::synapse0x141ab10() {
   return (neuron0x1404820()*-0.0232073);
}

double NNfunction_ss_uRdR::synapse0x141ab50() {
   return (neuron0x1404b60()*0.0288728);
}

double NNfunction_ss_uRdR::synapse0x141ab90() {
   return (neuron0x1404ea0()*-0.0135692);
}

double NNfunction_ss_uRdR::synapse0x141abd0() {
   return (neuron0x14051e0()*0.00631825);
}

double NNfunction_ss_uRdR::synapse0x141af50() {
   return (neuron0x1400620()*0.0291538);
}

double NNfunction_ss_uRdR::synapse0x140f520() {
   return (neuron0x1400960()*-0.0538303);
}

double NNfunction_ss_uRdR::synapse0x140f560() {
   return (neuron0x1400ca0()*0.00801208);
}

double NNfunction_ss_uRdR::synapse0x140f5a0() {
   return (neuron0x1400fe0()*-1.49694);
}

double NNfunction_ss_uRdR::synapse0x140f7f0() {
   return (neuron0x1401320()*-0.00392819);
}

double NNfunction_ss_uRdR::synapse0x140f830() {
   return (neuron0x1401660()*-0.0212805);
}

double NNfunction_ss_uRdR::synapse0x140f870() {
   return (neuron0x14019a0()*-0.0335558);
}

double NNfunction_ss_uRdR::synapse0x140fac0() {
   return (neuron0x1401ce0()*0.010246);
}

double NNfunction_ss_uRdR::synapse0x140fb00() {
   return (neuron0x1402020()*-0.0535241);
}

double NNfunction_ss_uRdR::synapse0x140fd50() {
   return (neuron0x1402360()*0.00115529);
}

double NNfunction_ss_uRdR::synapse0x140fd90() {
   return (neuron0x14026a0()*-0.00537684);
}

double NNfunction_ss_uRdR::synapse0x140fdd0() {
   return (neuron0x14029e0()*0.0741163);
}

double NNfunction_ss_uRdR::synapse0x1410020() {
   return (neuron0x1402d20()*0.0527619);
}

double NNfunction_ss_uRdR::synapse0x1410060() {
   return (neuron0x1403060()*-0.0168488);
}

double NNfunction_ss_uRdR::synapse0x14102b0() {
   return (neuron0x14033a0()*0.663679);
}

double NNfunction_ss_uRdR::synapse0x14102f0() {
   return (neuron0x14036e0()*0.0564291);
}

double NNfunction_ss_uRdR::synapse0x141ada0() {
   return (neuron0x1403a20()*0.0460012);
}

double NNfunction_ss_uRdR::synapse0x141ade0() {
   return (neuron0x1403f80()*0.929847);
}

double NNfunction_ss_uRdR::synapse0x1410440() {
   return (neuron0x14041a0()*0.0385886);
}

double NNfunction_ss_uRdR::synapse0x1410950() {
   return (neuron0x14044e0()*0.0181335);
}

double NNfunction_ss_uRdR::synapse0x1410990() {
   return (neuron0x1404820()*-0.0310694);
}

double NNfunction_ss_uRdR::synapse0x14109d0() {
   return (neuron0x1404b60()*0.027367);
}

double NNfunction_ss_uRdR::synapse0x1410c20() {
   return (neuron0x1404ea0()*-0.00372045);
}

double NNfunction_ss_uRdR::synapse0x1410c60() {
   return (neuron0x14051e0()*0.0468748);
}

double NNfunction_ss_uRdR::synapse0x1410510() {
   return (neuron0x1400620()*-0.00656436);
}

double NNfunction_ss_uRdR::synapse0x1410550() {
   return (neuron0x1400960()*0.0156592);
}

double NNfunction_ss_uRdR::synapse0x1410590() {
   return (neuron0x1400ca0()*0.0168598);
}

double NNfunction_ss_uRdR::synapse0x14105d0() {
   return (neuron0x1400fe0()*-0.0707635);
}

double NNfunction_ss_uRdR::synapse0x1410f50() {
   return (neuron0x1401320()*0.0116665);
}

double NNfunction_ss_uRdR::synapse0x141d2a0() {
   return (neuron0x1401660()*0.00747724);
}

double NNfunction_ss_uRdR::synapse0x141d2e0() {
   return (neuron0x14019a0()*0.0134682);
}

double NNfunction_ss_uRdR::synapse0x141d320() {
   return (neuron0x1401ce0()*-0.00250367);
}

double NNfunction_ss_uRdR::synapse0x141d360() {
   return (neuron0x1402020()*0.00201876);
}

double NNfunction_ss_uRdR::synapse0x141d3a0() {
   return (neuron0x1402360()*-0.00155291);
}

double NNfunction_ss_uRdR::synapse0x141d3e0() {
   return (neuron0x14026a0()*0.0114013);
}

double NNfunction_ss_uRdR::synapse0x141d420() {
   return (neuron0x14029e0()*0.00606953);
}

double NNfunction_ss_uRdR::synapse0x141d460() {
   return (neuron0x1402d20()*0.0152433);
}

double NNfunction_ss_uRdR::synapse0x141d4a0() {
   return (neuron0x1403060()*0.0153275);
}

double NNfunction_ss_uRdR::synapse0x141d4e0() {
   return (neuron0x14033a0()*0.447784);
}

double NNfunction_ss_uRdR::synapse0x141d520() {
   return (neuron0x14036e0()*0.0132104);
}

double NNfunction_ss_uRdR::synapse0x1410e30() {
   return (neuron0x1403a20()*0.00764135);
}

double NNfunction_ss_uRdR::synapse0x1410e70() {
   return (neuron0x1403f80()*0.477949);
}

double NNfunction_ss_uRdR::synapse0x141d670() {
   return (neuron0x14041a0()*-0.0104344);
}

double NNfunction_ss_uRdR::synapse0x141d6b0() {
   return (neuron0x14044e0()*0.0148181);
}

double NNfunction_ss_uRdR::synapse0x141d6f0() {
   return (neuron0x1404820()*-0.00953641);
}

double NNfunction_ss_uRdR::synapse0x141d730() {
   return (neuron0x1404b60()*0.00146994);
}

double NNfunction_ss_uRdR::synapse0x141d770() {
   return (neuron0x1404ea0()*0.00877652);
}

double NNfunction_ss_uRdR::synapse0x141d7b0() {
   return (neuron0x14051e0()*0.0145747);
}

double NNfunction_ss_uRdR::synapse0x141db30() {
   return (neuron0x1400620()*0.325168);
}

double NNfunction_ss_uRdR::synapse0x141db70() {
   return (neuron0x1400960()*0.120292);
}

double NNfunction_ss_uRdR::synapse0x141dbb0() {
   return (neuron0x1400ca0()*0.759948);
}

double NNfunction_ss_uRdR::synapse0x141dbf0() {
   return (neuron0x1400fe0()*0.552777);
}

double NNfunction_ss_uRdR::synapse0x141dc30() {
   return (neuron0x1401320()*0.346948);
}

double NNfunction_ss_uRdR::synapse0x141dc70() {
   return (neuron0x1401660()*0.167422);
}

double NNfunction_ss_uRdR::synapse0x141dcb0() {
   return (neuron0x14019a0()*0.844658);
}

double NNfunction_ss_uRdR::synapse0x141dcf0() {
   return (neuron0x1401ce0()*0.14694);
}

double NNfunction_ss_uRdR::synapse0x141dd30() {
   return (neuron0x1402020()*-0.0490352);
}

double NNfunction_ss_uRdR::synapse0x141dd70() {
   return (neuron0x1402360()*0.595652);
}

double NNfunction_ss_uRdR::synapse0x141ddb0() {
   return (neuron0x14026a0()*-0.330631);
}

double NNfunction_ss_uRdR::synapse0x141ddf0() {
   return (neuron0x14029e0()*-0.331568);
}

double NNfunction_ss_uRdR::synapse0x141de30() {
   return (neuron0x1402d20()*-0.364962);
}

double NNfunction_ss_uRdR::synapse0x141de70() {
   return (neuron0x1403060()*0.423613);
}

double NNfunction_ss_uRdR::synapse0x141deb0() {
   return (neuron0x14033a0()*0.154007);
}

double NNfunction_ss_uRdR::synapse0x141def0() {
   return (neuron0x14036e0()*-0.538896);
}

double NNfunction_ss_uRdR::synapse0x141d980() {
   return (neuron0x1403a20()*0.172907);
}

double NNfunction_ss_uRdR::synapse0x141d9c0() {
   return (neuron0x1403f80()*0.27851);
}

double NNfunction_ss_uRdR::synapse0x141e040() {
   return (neuron0x14041a0()*-0.0643614);
}

double NNfunction_ss_uRdR::synapse0x141e080() {
   return (neuron0x14044e0()*-0.32444);
}

double NNfunction_ss_uRdR::synapse0x141e0c0() {
   return (neuron0x1404820()*0.389727);
}

double NNfunction_ss_uRdR::synapse0x141e100() {
   return (neuron0x1404b60()*0.573964);
}

double NNfunction_ss_uRdR::synapse0x141e140() {
   return (neuron0x1404ea0()*0.45472);
}

double NNfunction_ss_uRdR::synapse0x141e180() {
   return (neuron0x14051e0()*-0.373888);
}

double NNfunction_ss_uRdR::synapse0x141e500() {
   return (neuron0x1400620()*-0.0819582);
}

double NNfunction_ss_uRdR::synapse0x141e540() {
   return (neuron0x1400960()*0.42321);
}

double NNfunction_ss_uRdR::synapse0x141e580() {
   return (neuron0x1400ca0()*-0.367632);
}

double NNfunction_ss_uRdR::synapse0x141e5c0() {
   return (neuron0x1400fe0()*0.72017);
}

double NNfunction_ss_uRdR::synapse0x141e600() {
   return (neuron0x1401320()*0.15086);
}

double NNfunction_ss_uRdR::synapse0x141e640() {
   return (neuron0x1401660()*0.613007);
}

double NNfunction_ss_uRdR::synapse0x141e680() {
   return (neuron0x14019a0()*0.516237);
}

double NNfunction_ss_uRdR::synapse0x141e6c0() {
   return (neuron0x1401ce0()*0.112464);
}

double NNfunction_ss_uRdR::synapse0x141e700() {
   return (neuron0x1402020()*-0.0522345);
}

double NNfunction_ss_uRdR::synapse0x141e740() {
   return (neuron0x1402360()*-0.452931);
}

double NNfunction_ss_uRdR::synapse0x141e780() {
   return (neuron0x14026a0()*-0.165812);
}

double NNfunction_ss_uRdR::synapse0x141e7c0() {
   return (neuron0x14029e0()*0.629569);
}

double NNfunction_ss_uRdR::synapse0x141e800() {
   return (neuron0x1402d20()*0.149711);
}

double NNfunction_ss_uRdR::synapse0x141e840() {
   return (neuron0x1403060()*0.0721339);
}

double NNfunction_ss_uRdR::synapse0x141e880() {
   return (neuron0x14033a0()*0.366585);
}

double NNfunction_ss_uRdR::synapse0x141e8c0() {
   return (neuron0x14036e0()*0.57689);
}

double NNfunction_ss_uRdR::synapse0x141e350() {
   return (neuron0x1403a20()*-0.671021);
}

double NNfunction_ss_uRdR::synapse0x141e390() {
   return (neuron0x1403f80()*0.657281);
}

double NNfunction_ss_uRdR::synapse0x141ea10() {
   return (neuron0x14041a0()*0.312572);
}

double NNfunction_ss_uRdR::synapse0x141ea50() {
   return (neuron0x14044e0()*0.301138);
}

double NNfunction_ss_uRdR::synapse0x141ea90() {
   return (neuron0x1404820()*-0.421734);
}

double NNfunction_ss_uRdR::synapse0x141ead0() {
   return (neuron0x1404b60()*-0.645205);
}

double NNfunction_ss_uRdR::synapse0x141eb10() {
   return (neuron0x1404ea0()*0.0581345);
}

double NNfunction_ss_uRdR::synapse0x141eb50() {
   return (neuron0x14051e0()*0.0179361);
}

double NNfunction_ss_uRdR::synapse0x141eed0() {
   return (neuron0x1400620()*-0.0798491);
}

double NNfunction_ss_uRdR::synapse0x141ef10() {
   return (neuron0x1400960()*-0.00522869);
}

double NNfunction_ss_uRdR::synapse0x141ef50() {
   return (neuron0x1400ca0()*0.0898246);
}

double NNfunction_ss_uRdR::synapse0x141ef90() {
   return (neuron0x1400fe0()*-0.656346);
}

double NNfunction_ss_uRdR::synapse0x141efd0() {
   return (neuron0x1401320()*-0.157579);
}

double NNfunction_ss_uRdR::synapse0x141f010() {
   return (neuron0x1401660()*-0.0764382);
}

double NNfunction_ss_uRdR::synapse0x141f050() {
   return (neuron0x14019a0()*-0.272645);
}

double NNfunction_ss_uRdR::synapse0x141f090() {
   return (neuron0x1401ce0()*-0.0681866);
}

double NNfunction_ss_uRdR::synapse0x141f0d0() {
   return (neuron0x1402020()*-0.0119843);
}

double NNfunction_ss_uRdR::synapse0x141f110() {
   return (neuron0x1402360()*-0.0576231);
}

double NNfunction_ss_uRdR::synapse0x141f150() {
   return (neuron0x14026a0()*0.169764);
}

double NNfunction_ss_uRdR::synapse0x141f190() {
   return (neuron0x14029e0()*0.286979);
}

double NNfunction_ss_uRdR::synapse0x141f1d0() {
   return (neuron0x1402d20()*-0.024991);
}

double NNfunction_ss_uRdR::synapse0x141f210() {
   return (neuron0x1403060()*-0.0324271);
}

double NNfunction_ss_uRdR::synapse0x141f250() {
   return (neuron0x14033a0()*0.572647);
}

double NNfunction_ss_uRdR::synapse0x141f290() {
   return (neuron0x14036e0()*-0.0535374);
}

double NNfunction_ss_uRdR::synapse0x141ed20() {
   return (neuron0x1403a20()*0.17882);
}

double NNfunction_ss_uRdR::synapse0x141ed60() {
   return (neuron0x1403f80()*-0.268561);
}

double NNfunction_ss_uRdR::synapse0x141f3e0() {
   return (neuron0x14041a0()*0.0331336);
}

double NNfunction_ss_uRdR::synapse0x141f420() {
   return (neuron0x14044e0()*0.0448475);
}

double NNfunction_ss_uRdR::synapse0x141f460() {
   return (neuron0x1404820()*-0.133248);
}

double NNfunction_ss_uRdR::synapse0x141f4a0() {
   return (neuron0x1404b60()*0.147831);
}

double NNfunction_ss_uRdR::synapse0x141f4e0() {
   return (neuron0x1404ea0()*-0.128499);
}

double NNfunction_ss_uRdR::synapse0x141f520() {
   return (neuron0x14051e0()*0.107015);
}

double NNfunction_ss_uRdR::synapse0x141f8a0() {
   return (neuron0x1400620()*0.00474916);
}

double NNfunction_ss_uRdR::synapse0x141f8e0() {
   return (neuron0x1400960()*0.017975);
}

double NNfunction_ss_uRdR::synapse0x141f920() {
   return (neuron0x1400ca0()*0.00246891);
}

double NNfunction_ss_uRdR::synapse0x141f960() {
   return (neuron0x1400fe0()*-5.54268);
}

double NNfunction_ss_uRdR::synapse0x141f9a0() {
   return (neuron0x1401320()*0.0136632);
}

double NNfunction_ss_uRdR::synapse0x141f9e0() {
   return (neuron0x1401660()*-0.0161192);
}

double NNfunction_ss_uRdR::synapse0x141fa20() {
   return (neuron0x14019a0()*-0.00457937);
}

double NNfunction_ss_uRdR::synapse0x141fa60() {
   return (neuron0x1401ce0()*-0.0440613);
}

double NNfunction_ss_uRdR::synapse0x141faa0() {
   return (neuron0x1402020()*0.0205569);
}

double NNfunction_ss_uRdR::synapse0x141fae0() {
   return (neuron0x1402360()*0.0191557);
}

double NNfunction_ss_uRdR::synapse0x141fb20() {
   return (neuron0x14026a0()*0.0124605);
}

double NNfunction_ss_uRdR::synapse0x141fb60() {
   return (neuron0x14029e0()*-0.0160314);
}

double NNfunction_ss_uRdR::synapse0x141fba0() {
   return (neuron0x1402d20()*0.01194);
}

double NNfunction_ss_uRdR::synapse0x141fbe0() {
   return (neuron0x1403060()*0.0313986);
}

double NNfunction_ss_uRdR::synapse0x141fc20() {
   return (neuron0x14033a0()*-0.111438);
}

double NNfunction_ss_uRdR::synapse0x141fc60() {
   return (neuron0x14036e0()*9.71046e-05);
}

double NNfunction_ss_uRdR::synapse0x141f6f0() {
   return (neuron0x1403a20()*0.0141372);
}

double NNfunction_ss_uRdR::synapse0x141f730() {
   return (neuron0x1403f80()*2.23794);
}

double NNfunction_ss_uRdR::synapse0x141fdb0() {
   return (neuron0x14041a0()*-0.0145475);
}

double NNfunction_ss_uRdR::synapse0x141fdf0() {
   return (neuron0x14044e0()*0.034874);
}

double NNfunction_ss_uRdR::synapse0x141fe30() {
   return (neuron0x1404820()*0.00871252);
}

double NNfunction_ss_uRdR::synapse0x141fe70() {
   return (neuron0x1404b60()*-0.0100342);
}

double NNfunction_ss_uRdR::synapse0x141feb0() {
   return (neuron0x1404ea0()*-0.00521238);
}

double NNfunction_ss_uRdR::synapse0x141fef0() {
   return (neuron0x14051e0()*-0.0126215);
}

double NNfunction_ss_uRdR::synapse0x1420270() {
   return (neuron0x1400620()*0.00258136);
}

double NNfunction_ss_uRdR::synapse0x14202b0() {
   return (neuron0x1400960()*-0.00449389);
}

double NNfunction_ss_uRdR::synapse0x14202f0() {
   return (neuron0x1400ca0()*0.00287662);
}

double NNfunction_ss_uRdR::synapse0x1420330() {
   return (neuron0x1400fe0()*-0.145064);
}

double NNfunction_ss_uRdR::synapse0x1420370() {
   return (neuron0x1401320()*-0.00470652);
}

double NNfunction_ss_uRdR::synapse0x14203b0() {
   return (neuron0x1401660()*-0.00131551);
}

double NNfunction_ss_uRdR::synapse0x14203f0() {
   return (neuron0x14019a0()*-0.000705951);
}

double NNfunction_ss_uRdR::synapse0x1420430() {
   return (neuron0x1401ce0()*-0.0194409);
}

double NNfunction_ss_uRdR::synapse0x1420470() {
   return (neuron0x1402020()*0.0155964);
}

double NNfunction_ss_uRdR::synapse0x14204b0() {
   return (neuron0x1402360()*0.014251);
}

double NNfunction_ss_uRdR::synapse0x14204f0() {
   return (neuron0x14026a0()*0.0102862);
}

double NNfunction_ss_uRdR::synapse0x1420530() {
   return (neuron0x14029e0()*-0.00604316);
}

double NNfunction_ss_uRdR::synapse0x1420570() {
   return (neuron0x1402d20()*0.020255);
}

double NNfunction_ss_uRdR::synapse0x14205b0() {
   return (neuron0x1403060()*0.0125714);
}

double NNfunction_ss_uRdR::synapse0x14205f0() {
   return (neuron0x14033a0()*1.29641);
}

double NNfunction_ss_uRdR::synapse0x1420630() {
   return (neuron0x14036e0()*0.0227621);
}

double NNfunction_ss_uRdR::synapse0x14200c0() {
   return (neuron0x1403a20()*0.00882771);
}

double NNfunction_ss_uRdR::synapse0x1420100() {
   return (neuron0x1403f80()*-0.742586);
}

double NNfunction_ss_uRdR::synapse0x1420780() {
   return (neuron0x14041a0()*0.00996245);
}

double NNfunction_ss_uRdR::synapse0x14207c0() {
   return (neuron0x14044e0()*0.0132259);
}

double NNfunction_ss_uRdR::synapse0x1420800() {
   return (neuron0x1404820()*0.0105645);
}

double NNfunction_ss_uRdR::synapse0x1420840() {
   return (neuron0x1404b60()*-0.0110296);
}

double NNfunction_ss_uRdR::synapse0x1420880() {
   return (neuron0x1404ea0()*0.0118864);
}

double NNfunction_ss_uRdR::synapse0x14208c0() {
   return (neuron0x14051e0()*-0.00469443);
}

double NNfunction_ss_uRdR::synapse0x1420c40() {
   return (neuron0x1400620()*-0.710398);
}

double NNfunction_ss_uRdR::synapse0x1420c80() {
   return (neuron0x1400960()*0.0234884);
}

double NNfunction_ss_uRdR::synapse0x1420cc0() {
   return (neuron0x1400ca0()*-0.00152817);
}

double NNfunction_ss_uRdR::synapse0x1420d00() {
   return (neuron0x1400fe0()*-0.984049);
}

double NNfunction_ss_uRdR::synapse0x1420d40() {
   return (neuron0x1401320()*-0.404441);
}

double NNfunction_ss_uRdR::synapse0x1420d80() {
   return (neuron0x1401660()*-0.0924906);
}

double NNfunction_ss_uRdR::synapse0x1420dc0() {
   return (neuron0x14019a0()*-0.552063);
}

double NNfunction_ss_uRdR::synapse0x1420e00() {
   return (neuron0x1401ce0()*0.526226);
}

double NNfunction_ss_uRdR::synapse0x1420e40() {
   return (neuron0x1402020()*0.0403291);
}

double NNfunction_ss_uRdR::synapse0x1420e80() {
   return (neuron0x1402360()*0.0787708);
}

double NNfunction_ss_uRdR::synapse0x1420ec0() {
   return (neuron0x14026a0()*0.223537);
}

double NNfunction_ss_uRdR::synapse0x1420f00() {
   return (neuron0x14029e0()*-0.422364);
}

double NNfunction_ss_uRdR::synapse0x1420f40() {
   return (neuron0x1402d20()*0.352607);
}

double NNfunction_ss_uRdR::synapse0x1420f80() {
   return (neuron0x1403060()*0.145256);
}

double NNfunction_ss_uRdR::synapse0x1420fc0() {
   return (neuron0x14033a0()*-0.502679);
}

double NNfunction_ss_uRdR::synapse0x1421000() {
   return (neuron0x14036e0()*-0.0570159);
}

double NNfunction_ss_uRdR::synapse0x1420a90() {
   return (neuron0x1403a20()*-0.408375);
}

double NNfunction_ss_uRdR::synapse0x1420ad0() {
   return (neuron0x1403f80()*0.739576);
}

double NNfunction_ss_uRdR::synapse0x1421150() {
   return (neuron0x14041a0()*-0.258863);
}

double NNfunction_ss_uRdR::synapse0x1421190() {
   return (neuron0x14044e0()*-0.351747);
}

double NNfunction_ss_uRdR::synapse0x14211d0() {
   return (neuron0x1404820()*0.165681);
}

double NNfunction_ss_uRdR::synapse0x1421210() {
   return (neuron0x1404b60()*0.164623);
}

double NNfunction_ss_uRdR::synapse0x1421250() {
   return (neuron0x1404ea0()*-0.120191);
}

double NNfunction_ss_uRdR::synapse0x1421290() {
   return (neuron0x14051e0()*-0.486907);
}

double NNfunction_ss_uRdR::synapse0x1421610() {
   return (neuron0x1400620()*0.366396);
}

double NNfunction_ss_uRdR::synapse0x1421650() {
   return (neuron0x1400960()*-0.292917);
}

double NNfunction_ss_uRdR::synapse0x1421690() {
   return (neuron0x1400ca0()*-0.333069);
}

double NNfunction_ss_uRdR::synapse0x14216d0() {
   return (neuron0x1400fe0()*0.296367);
}

double NNfunction_ss_uRdR::synapse0x1421710() {
   return (neuron0x1401320()*0.446605);
}

double NNfunction_ss_uRdR::synapse0x1421750() {
   return (neuron0x1401660()*-0.340408);
}

double NNfunction_ss_uRdR::synapse0x1421790() {
   return (neuron0x14019a0()*0.13933);
}

double NNfunction_ss_uRdR::synapse0x14217d0() {
   return (neuron0x1401ce0()*-0.793673);
}

double NNfunction_ss_uRdR::synapse0x1421810() {
   return (neuron0x1402020()*0.122298);
}

double NNfunction_ss_uRdR::synapse0x1421850() {
   return (neuron0x1402360()*0.0464596);
}

double NNfunction_ss_uRdR::synapse0x1421890() {
   return (neuron0x14026a0()*0.225726);
}

double NNfunction_ss_uRdR::synapse0x14218d0() {
   return (neuron0x14029e0()*-0.143983);
}

double NNfunction_ss_uRdR::synapse0x1421910() {
   return (neuron0x1402d20()*-0.0881883);
}

double NNfunction_ss_uRdR::synapse0x1421950() {
   return (neuron0x1403060()*-0.603799);
}

double NNfunction_ss_uRdR::synapse0x1421990() {
   return (neuron0x14033a0()*-0.00455614);
}

double NNfunction_ss_uRdR::synapse0x14219d0() {
   return (neuron0x14036e0()*0.497836);
}

double NNfunction_ss_uRdR::synapse0x1421460() {
   return (neuron0x1403a20()*-0.261571);
}

double NNfunction_ss_uRdR::synapse0x14214a0() {
   return (neuron0x1403f80()*-0.344097);
}

double NNfunction_ss_uRdR::synapse0x1421b20() {
   return (neuron0x14041a0()*0.648957);
}

double NNfunction_ss_uRdR::synapse0x1421b60() {
   return (neuron0x14044e0()*0.188946);
}

double NNfunction_ss_uRdR::synapse0x1421ba0() {
   return (neuron0x1404820()*0.336285);
}

double NNfunction_ss_uRdR::synapse0x1421be0() {
   return (neuron0x1404b60()*0.74326);
}

double NNfunction_ss_uRdR::synapse0x1421c20() {
   return (neuron0x1404ea0()*-0.406891);
}

double NNfunction_ss_uRdR::synapse0x1421c60() {
   return (neuron0x14051e0()*0.397206);
}

double NNfunction_ss_uRdR::synapse0x140a710() {
   return (neuron0x1400620()*-0.0154367);
}

double NNfunction_ss_uRdR::synapse0x140a750() {
   return (neuron0x1400960()*0.0163389);
}

double NNfunction_ss_uRdR::synapse0x140a790() {
   return (neuron0x1400ca0()*0.0294747);
}

double NNfunction_ss_uRdR::synapse0x140a7d0() {
   return (neuron0x1400fe0()*6.07737);
}

double NNfunction_ss_uRdR::synapse0x140a810() {
   return (neuron0x1401320()*0.00826267);
}

double NNfunction_ss_uRdR::synapse0x140a850() {
   return (neuron0x1401660()*-0.0436698);
}

double NNfunction_ss_uRdR::synapse0x140a890() {
   return (neuron0x14019a0()*0.0159213);
}

double NNfunction_ss_uRdR::synapse0x140a8d0() {
   return (neuron0x1401ce0()*-0.0206356);
}

double NNfunction_ss_uRdR::synapse0x14223f0() {
   return (neuron0x1402020()*-0.00972693);
}

double NNfunction_ss_uRdR::synapse0x1422430() {
   return (neuron0x1402360()*0.0384501);
}

double NNfunction_ss_uRdR::synapse0x1422470() {
   return (neuron0x14026a0()*0.0325645);
}

double NNfunction_ss_uRdR::synapse0x14224b0() {
   return (neuron0x14029e0()*0.0582098);
}

double NNfunction_ss_uRdR::synapse0x14224f0() {
   return (neuron0x1402d20()*-0.035943);
}

double NNfunction_ss_uRdR::synapse0x1422530() {
   return (neuron0x1403060()*-0.0673518);
}

double NNfunction_ss_uRdR::synapse0x1422570() {
   return (neuron0x14033a0()*-2.58111);
}

double NNfunction_ss_uRdR::synapse0x14225b0() {
   return (neuron0x14036e0()*0.0342122);
}

double NNfunction_ss_uRdR::synapse0x1421e30() {
   return (neuron0x1403a20()*-0.0247377);
}

double NNfunction_ss_uRdR::synapse0x1421e70() {
   return (neuron0x1403f80()*0.0328996);
}

double NNfunction_ss_uRdR::synapse0x1422700() {
   return (neuron0x14041a0()*-0.0150089);
}

double NNfunction_ss_uRdR::synapse0x1422740() {
   return (neuron0x14044e0()*0.0514227);
}

double NNfunction_ss_uRdR::synapse0x1422780() {
   return (neuron0x1404820()*0.00665682);
}

double NNfunction_ss_uRdR::synapse0x14227c0() {
   return (neuron0x1404b60()*0.0532557);
}

double NNfunction_ss_uRdR::synapse0x1422800() {
   return (neuron0x1404ea0()*-0.0326657);
}

double NNfunction_ss_uRdR::synapse0x1422840() {
   return (neuron0x14051e0()*0.0279335);
}

double NNfunction_ss_uRdR::synapse0x1422bc0() {
   return (neuron0x1400620()*-0.952952);
}

double NNfunction_ss_uRdR::synapse0x1422c00() {
   return (neuron0x1400960()*0.0712284);
}

double NNfunction_ss_uRdR::synapse0x1422c40() {
   return (neuron0x1400ca0()*0.0159103);
}

double NNfunction_ss_uRdR::synapse0x1422c80() {
   return (neuron0x1400fe0()*0.275999);
}

double NNfunction_ss_uRdR::synapse0x1422cc0() {
   return (neuron0x1401320()*0.533964);
}

double NNfunction_ss_uRdR::synapse0x1422d00() {
   return (neuron0x1401660()*0.159743);
}

double NNfunction_ss_uRdR::synapse0x1422d40() {
   return (neuron0x14019a0()*-0.220498);
}

double NNfunction_ss_uRdR::synapse0x1422d80() {
   return (neuron0x1401ce0()*-0.116379);
}

double NNfunction_ss_uRdR::synapse0x1422dc0() {
   return (neuron0x1402020()*0.424349);
}

double NNfunction_ss_uRdR::synapse0x1422e00() {
   return (neuron0x1402360()*-0.412131);
}

double NNfunction_ss_uRdR::synapse0x1422e40() {
   return (neuron0x14026a0()*-0.162262);
}

double NNfunction_ss_uRdR::synapse0x1422e80() {
   return (neuron0x14029e0()*0.116233);
}

double NNfunction_ss_uRdR::synapse0x1422ec0() {
   return (neuron0x1402d20()*0.35447);
}

double NNfunction_ss_uRdR::synapse0x1422f00() {
   return (neuron0x1403060()*-0.0984462);
}

double NNfunction_ss_uRdR::synapse0x1422f40() {
   return (neuron0x14033a0()*0.208727);
}

double NNfunction_ss_uRdR::synapse0x1422f80() {
   return (neuron0x14036e0()*0.249808);
}

double NNfunction_ss_uRdR::synapse0x1422a10() {
   return (neuron0x1403a20()*0.183338);
}

double NNfunction_ss_uRdR::synapse0x1422a50() {
   return (neuron0x1403f80()*-0.452772);
}

double NNfunction_ss_uRdR::synapse0x14230d0() {
   return (neuron0x14041a0()*-0.201599);
}

double NNfunction_ss_uRdR::synapse0x1423110() {
   return (neuron0x14044e0()*-0.555235);
}

double NNfunction_ss_uRdR::synapse0x1423150() {
   return (neuron0x1404820()*-0.42005);
}

double NNfunction_ss_uRdR::synapse0x1423190() {
   return (neuron0x1404b60()*0.236141);
}

double NNfunction_ss_uRdR::synapse0x14231d0() {
   return (neuron0x1404ea0()*-0.0754006);
}

double NNfunction_ss_uRdR::synapse0x1423210() {
   return (neuron0x14051e0()*0.192012);
}

double NNfunction_ss_uRdR::synapse0x1423590() {
   return (neuron0x1400620()*-0.0807819);
}

double NNfunction_ss_uRdR::synapse0x14235d0() {
   return (neuron0x1400960()*0.0301208);
}

double NNfunction_ss_uRdR::synapse0x1423610() {
   return (neuron0x1400ca0()*-0.0257982);
}

double NNfunction_ss_uRdR::synapse0x1423650() {
   return (neuron0x1400fe0()*-0.131443);
}

double NNfunction_ss_uRdR::synapse0x1423690() {
   return (neuron0x1401320()*-0.0502889);
}

double NNfunction_ss_uRdR::synapse0x14236d0() {
   return (neuron0x1401660()*0.0139723);
}

double NNfunction_ss_uRdR::synapse0x1423710() {
   return (neuron0x14019a0()*0.021599);
}

double NNfunction_ss_uRdR::synapse0x1423750() {
   return (neuron0x1401ce0()*0.215861);
}

double NNfunction_ss_uRdR::synapse0x1423790() {
   return (neuron0x1402020()*0.0306059);
}

double NNfunction_ss_uRdR::synapse0x14237d0() {
   return (neuron0x1402360()*-0.0358987);
}

double NNfunction_ss_uRdR::synapse0x1423810() {
   return (neuron0x14026a0()*0.00685634);
}

double NNfunction_ss_uRdR::synapse0x1423850() {
   return (neuron0x14029e0()*0.0681799);
}

double NNfunction_ss_uRdR::synapse0x1423890() {
   return (neuron0x1402d20()*0.0590458);
}

double NNfunction_ss_uRdR::synapse0x14238d0() {
   return (neuron0x1403060()*-0.0332941);
}

double NNfunction_ss_uRdR::synapse0x1423910() {
   return (neuron0x14033a0()*1.5349);
}

double NNfunction_ss_uRdR::synapse0x1423950() {
   return (neuron0x14036e0()*-0.262751);
}

double NNfunction_ss_uRdR::synapse0x14233e0() {
   return (neuron0x1403a20()*0.0770556);
}

double NNfunction_ss_uRdR::synapse0x1423420() {
   return (neuron0x1403f80()*-0.330622);
}

double NNfunction_ss_uRdR::synapse0x1413f50() {
   return (neuron0x14041a0()*0.0409931);
}

double NNfunction_ss_uRdR::synapse0x1413f90() {
   return (neuron0x14044e0()*0.00514708);
}

double NNfunction_ss_uRdR::synapse0x1413fd0() {
   return (neuron0x1404820()*-0.00346814);
}

double NNfunction_ss_uRdR::synapse0x1414010() {
   return (neuron0x1404b60()*0.0751951);
}

double NNfunction_ss_uRdR::synapse0x1414050() {
   return (neuron0x1404ea0()*-0.000572332);
}

double NNfunction_ss_uRdR::synapse0x1414090() {
   return (neuron0x14051e0()*-0.0255488);
}

double NNfunction_ss_uRdR::synapse0x1414410() {
   return (neuron0x1400620()*0.0472903);
}

double NNfunction_ss_uRdR::synapse0x1414450() {
   return (neuron0x1400960()*0.0987866);
}

double NNfunction_ss_uRdR::synapse0x1414490() {
   return (neuron0x1400ca0()*0.328819);
}

double NNfunction_ss_uRdR::synapse0x14144d0() {
   return (neuron0x1400fe0()*-1.06416);
}

double NNfunction_ss_uRdR::synapse0x1414510() {
   return (neuron0x1401320()*-0.258252);
}

double NNfunction_ss_uRdR::synapse0x1414550() {
   return (neuron0x1401660()*0.356473);
}

double NNfunction_ss_uRdR::synapse0x1414590() {
   return (neuron0x14019a0()*0.241269);
}

double NNfunction_ss_uRdR::synapse0x14145d0() {
   return (neuron0x1401ce0()*-0.339033);
}

double NNfunction_ss_uRdR::synapse0x1414610() {
   return (neuron0x1402020()*0.0968627);
}

double NNfunction_ss_uRdR::synapse0x1414650() {
   return (neuron0x1402360()*0.29203);
}

double NNfunction_ss_uRdR::synapse0x1414690() {
   return (neuron0x14026a0()*0.177068);
}

double NNfunction_ss_uRdR::synapse0x14146d0() {
   return (neuron0x14029e0()*-0.199249);
}

double NNfunction_ss_uRdR::synapse0x1414710() {
   return (neuron0x1402d20()*0.531102);
}

double NNfunction_ss_uRdR::synapse0x1414750() {
   return (neuron0x1403060()*0.0794774);
}

double NNfunction_ss_uRdR::synapse0x1414790() {
   return (neuron0x14033a0()*0.713616);
}

double NNfunction_ss_uRdR::synapse0x14147d0() {
   return (neuron0x14036e0()*0.80889);
}

double NNfunction_ss_uRdR::synapse0x1414260() {
   return (neuron0x1403a20()*-0.58102);
}

double NNfunction_ss_uRdR::synapse0x14142a0() {
   return (neuron0x1403f80()*-0.0841434);
}

double NNfunction_ss_uRdR::synapse0x1414920() {
   return (neuron0x14041a0()*0.141472);
}

double NNfunction_ss_uRdR::synapse0x1414960() {
   return (neuron0x14044e0()*0.319422);
}

double NNfunction_ss_uRdR::synapse0x14149a0() {
   return (neuron0x1404820()*0.884545);
}

double NNfunction_ss_uRdR::synapse0x14149e0() {
   return (neuron0x1404b60()*0.110167);
}

double NNfunction_ss_uRdR::synapse0x1414a20() {
   return (neuron0x1404ea0()*-0.49774);
}

double NNfunction_ss_uRdR::synapse0x1414a60() {
   return (neuron0x14051e0()*-0.433026);
}

double NNfunction_ss_uRdR::synapse0x1414de0() {
   return (neuron0x1400620()*-0.361226);
}

double NNfunction_ss_uRdR::synapse0x1414e20() {
   return (neuron0x1400960()*-0.117863);
}

double NNfunction_ss_uRdR::synapse0x1414e60() {
   return (neuron0x1400ca0()*-0.641815);
}

double NNfunction_ss_uRdR::synapse0x1414ea0() {
   return (neuron0x1400fe0()*0.206862);
}

double NNfunction_ss_uRdR::synapse0x1414ee0() {
   return (neuron0x1401320()*-0.193092);
}

double NNfunction_ss_uRdR::synapse0x1414f20() {
   return (neuron0x1401660()*-0.320517);
}

double NNfunction_ss_uRdR::synapse0x1414f60() {
   return (neuron0x14019a0()*0.0226596);
}

double NNfunction_ss_uRdR::synapse0x1414fa0() {
   return (neuron0x1401ce0()*0.329925);
}

double NNfunction_ss_uRdR::synapse0x1414fe0() {
   return (neuron0x1402020()*0.247595);
}

double NNfunction_ss_uRdR::synapse0x1415020() {
   return (neuron0x1402360()*-0.376243);
}

double NNfunction_ss_uRdR::synapse0x1415060() {
   return (neuron0x14026a0()*0.187877);
}

double NNfunction_ss_uRdR::synapse0x14150a0() {
   return (neuron0x14029e0()*-0.0956206);
}

double NNfunction_ss_uRdR::synapse0x14150e0() {
   return (neuron0x1402d20()*-0.0963391);
}

double NNfunction_ss_uRdR::synapse0x1415120() {
   return (neuron0x1403060()*-0.183653);
}

double NNfunction_ss_uRdR::synapse0x1415160() {
   return (neuron0x14033a0()*0.391317);
}

double NNfunction_ss_uRdR::synapse0x14151a0() {
   return (neuron0x14036e0()*0.235199);
}

double NNfunction_ss_uRdR::synapse0x1414c30() {
   return (neuron0x1403a20()*0.563006);
}

double NNfunction_ss_uRdR::synapse0x1414c70() {
   return (neuron0x1403f80()*0.510502);
}

double NNfunction_ss_uRdR::synapse0x14152f0() {
   return (neuron0x14041a0()*0.134976);
}

double NNfunction_ss_uRdR::synapse0x1415330() {
   return (neuron0x14044e0()*-0.56983);
}

double NNfunction_ss_uRdR::synapse0x1415370() {
   return (neuron0x1404820()*0.349073);
}

double NNfunction_ss_uRdR::synapse0x14153b0() {
   return (neuron0x1404b60()*0.0495255);
}

double NNfunction_ss_uRdR::synapse0x14153f0() {
   return (neuron0x1404ea0()*-0.288623);
}

double NNfunction_ss_uRdR::synapse0x1415430() {
   return (neuron0x14051e0()*-0.277357);
}

double NNfunction_ss_uRdR::synapse0x14157b0() {
   return (neuron0x1400620()*0.327708);
}

double NNfunction_ss_uRdR::synapse0x14157f0() {
   return (neuron0x1400960()*0.489311);
}

double NNfunction_ss_uRdR::synapse0x1415830() {
   return (neuron0x1400ca0()*0.752916);
}

double NNfunction_ss_uRdR::synapse0x1415870() {
   return (neuron0x1400fe0()*-1.04695);
}

double NNfunction_ss_uRdR::synapse0x14158b0() {
   return (neuron0x1401320()*-0.298104);
}

double NNfunction_ss_uRdR::synapse0x14158f0() {
   return (neuron0x1401660()*-0.167526);
}

double NNfunction_ss_uRdR::synapse0x1415930() {
   return (neuron0x14019a0()*1.11294);
}

double NNfunction_ss_uRdR::synapse0x1415970() {
   return (neuron0x1401ce0()*-0.00697541);
}

double NNfunction_ss_uRdR::synapse0x14159b0() {
   return (neuron0x1402020()*-0.66959);
}

double NNfunction_ss_uRdR::synapse0x14159f0() {
   return (neuron0x1402360()*-0.0756674);
}

double NNfunction_ss_uRdR::synapse0x1415a30() {
   return (neuron0x14026a0()*-0.388787);
}

double NNfunction_ss_uRdR::synapse0x1415a70() {
   return (neuron0x14029e0()*0.158555);
}

double NNfunction_ss_uRdR::synapse0x1415ab0() {
   return (neuron0x1402d20()*0.253783);
}

double NNfunction_ss_uRdR::synapse0x1415af0() {
   return (neuron0x1403060()*0.370694);
}

double NNfunction_ss_uRdR::synapse0x1415b30() {
   return (neuron0x14033a0()*0.325279);
}

double NNfunction_ss_uRdR::synapse0x1415b70() {
   return (neuron0x14036e0()*0.0232344);
}

double NNfunction_ss_uRdR::synapse0x1415600() {
   return (neuron0x1403a20()*-0.219017);
}

double NNfunction_ss_uRdR::synapse0x1415640() {
   return (neuron0x1403f80()*0.180471);
}

double NNfunction_ss_uRdR::synapse0x1415cc0() {
   return (neuron0x14041a0()*-0.270337);
}

double NNfunction_ss_uRdR::synapse0x1415d00() {
   return (neuron0x14044e0()*0.0750605);
}

double NNfunction_ss_uRdR::synapse0x1415d40() {
   return (neuron0x1404820()*-0.367425);
}

double NNfunction_ss_uRdR::synapse0x1415d80() {
   return (neuron0x1404b60()*0.774036);
}

double NNfunction_ss_uRdR::synapse0x1415dc0() {
   return (neuron0x1404ea0()*-0.02797);
}

double NNfunction_ss_uRdR::synapse0x1415e00() {
   return (neuron0x14051e0()*-0.333957);
}

double NNfunction_ss_uRdR::synapse0x1427cd0() {
   return (neuron0x1400620()*0.058545);
}

double NNfunction_ss_uRdR::synapse0x1427d10() {
   return (neuron0x1400960()*0.072067);
}

double NNfunction_ss_uRdR::synapse0x1427d50() {
   return (neuron0x1400ca0()*0.104071);
}

double NNfunction_ss_uRdR::synapse0x1427d90() {
   return (neuron0x1400fe0()*-0.109477);
}

double NNfunction_ss_uRdR::synapse0x1427dd0() {
   return (neuron0x1401320()*-0.29951);
}

double NNfunction_ss_uRdR::synapse0x1427e10() {
   return (neuron0x1401660()*0.312593);
}

double NNfunction_ss_uRdR::synapse0x1427e50() {
   return (neuron0x14019a0()*0.391316);
}

double NNfunction_ss_uRdR::synapse0x1427e90() {
   return (neuron0x1401ce0()*-0.233905);
}

double NNfunction_ss_uRdR::synapse0x1427ed0() {
   return (neuron0x1402020()*0.0340977);
}

double NNfunction_ss_uRdR::synapse0x1427f10() {
   return (neuron0x1402360()*0.0853565);
}

double NNfunction_ss_uRdR::synapse0x1427f50() {
   return (neuron0x14026a0()*-0.0489727);
}

double NNfunction_ss_uRdR::synapse0x1427f90() {
   return (neuron0x14029e0()*-0.0944821);
}

double NNfunction_ss_uRdR::synapse0x1427fd0() {
   return (neuron0x1402d20()*0.189738);
}

double NNfunction_ss_uRdR::synapse0x1428010() {
   return (neuron0x1403060()*-0.040678);
}

double NNfunction_ss_uRdR::synapse0x1428050() {
   return (neuron0x14033a0()*-0.41027);
}

double NNfunction_ss_uRdR::synapse0x1428090() {
   return (neuron0x14036e0()*-0.120703);
}

double NNfunction_ss_uRdR::synapse0x1415e40() {
   return (neuron0x1403a20()*0.00777686);
}

double NNfunction_ss_uRdR::synapse0x1415e80() {
   return (neuron0x1403f80()*-0.110191);
}

double NNfunction_ss_uRdR::synapse0x14281e0() {
   return (neuron0x14041a0()*0.12106);
}

double NNfunction_ss_uRdR::synapse0x1428220() {
   return (neuron0x14044e0()*0.0542569);
}

double NNfunction_ss_uRdR::synapse0x1428260() {
   return (neuron0x1404820()*0.126032);
}

double NNfunction_ss_uRdR::synapse0x14282a0() {
   return (neuron0x1404b60()*-0.045666);
}

double NNfunction_ss_uRdR::synapse0x14282e0() {
   return (neuron0x1404ea0()*0.0580076);
}

double NNfunction_ss_uRdR::synapse0x1428320() {
   return (neuron0x14051e0()*0.172833);
}

double NNfunction_ss_uRdR::synapse0x14286a0() {
   return (neuron0x1400620()*-0.00110854);
}

double NNfunction_ss_uRdR::synapse0x14286e0() {
   return (neuron0x1400960()*0.00511246);
}

double NNfunction_ss_uRdR::synapse0x1428720() {
   return (neuron0x1400ca0()*-0.0054641);
}

double NNfunction_ss_uRdR::synapse0x1428760() {
   return (neuron0x1400fe0()*1.5678);
}

double NNfunction_ss_uRdR::synapse0x14287a0() {
   return (neuron0x1401320()*-0.0157858);
}

double NNfunction_ss_uRdR::synapse0x14287e0() {
   return (neuron0x1401660()*0.0128058);
}

double NNfunction_ss_uRdR::synapse0x1428820() {
   return (neuron0x14019a0()*-0.0195926);
}

double NNfunction_ss_uRdR::synapse0x1428860() {
   return (neuron0x1401ce0()*-0.00761417);
}

double NNfunction_ss_uRdR::synapse0x14288a0() {
   return (neuron0x1402020()*0.0104262);
}

double NNfunction_ss_uRdR::synapse0x14288e0() {
   return (neuron0x1402360()*0.0227889);
}

double NNfunction_ss_uRdR::synapse0x1428920() {
   return (neuron0x14026a0()*0.00320591);
}

double NNfunction_ss_uRdR::synapse0x1428960() {
   return (neuron0x14029e0()*0.035594);
}

double NNfunction_ss_uRdR::synapse0x14289a0() {
   return (neuron0x1402d20()*0.0322073);
}

double NNfunction_ss_uRdR::synapse0x14289e0() {
   return (neuron0x1403060()*0.0122443);
}

double NNfunction_ss_uRdR::synapse0x1428a20() {
   return (neuron0x14033a0()*0.218558);
}

double NNfunction_ss_uRdR::synapse0x1428a60() {
   return (neuron0x14036e0()*0.00228642);
}

double NNfunction_ss_uRdR::synapse0x14284f0() {
   return (neuron0x1403a20()*0.0280029);
}

double NNfunction_ss_uRdR::synapse0x1428530() {
   return (neuron0x1403f80()*0.42871);
}

double NNfunction_ss_uRdR::synapse0x1428bb0() {
   return (neuron0x14041a0()*0.0396715);
}

double NNfunction_ss_uRdR::synapse0x1428bf0() {
   return (neuron0x14044e0()*0.00645436);
}

double NNfunction_ss_uRdR::synapse0x1428c30() {
   return (neuron0x1404820()*0.00200798);
}

double NNfunction_ss_uRdR::synapse0x1428c70() {
   return (neuron0x1404b60()*0.00770929);
}

double NNfunction_ss_uRdR::synapse0x1428cb0() {
   return (neuron0x1404ea0()*-0.00371265);
}

double NNfunction_ss_uRdR::synapse0x1428cf0() {
   return (neuron0x14051e0()*0.0168526);
}

double NNfunction_ss_uRdR::synapse0x1429070() {
   return (neuron0x1400620()*-0.683148);
}

double NNfunction_ss_uRdR::synapse0x14290b0() {
   return (neuron0x1400960()*-0.0662434);
}

double NNfunction_ss_uRdR::synapse0x14290f0() {
   return (neuron0x1400ca0()*0.387156);
}

double NNfunction_ss_uRdR::synapse0x1429130() {
   return (neuron0x1400fe0()*0.530895);
}

double NNfunction_ss_uRdR::synapse0x1429170() {
   return (neuron0x1401320()*0.455728);
}

double NNfunction_ss_uRdR::synapse0x14291b0() {
   return (neuron0x1401660()*0.0525533);
}

double NNfunction_ss_uRdR::synapse0x14291f0() {
   return (neuron0x14019a0()*-0.158958);
}

double NNfunction_ss_uRdR::synapse0x1429230() {
   return (neuron0x1401ce0()*-0.768361);
}

double NNfunction_ss_uRdR::synapse0x1429270() {
   return (neuron0x1402020()*0.431564);
}

double NNfunction_ss_uRdR::synapse0x14292b0() {
   return (neuron0x1402360()*0.244888);
}

double NNfunction_ss_uRdR::synapse0x14292f0() {
   return (neuron0x14026a0()*-0.245881);
}

double NNfunction_ss_uRdR::synapse0x1429330() {
   return (neuron0x14029e0()*-0.0517033);
}

double NNfunction_ss_uRdR::synapse0x1429370() {
   return (neuron0x1402d20()*0.589384);
}

double NNfunction_ss_uRdR::synapse0x14293b0() {
   return (neuron0x1403060()*-0.307662);
}

double NNfunction_ss_uRdR::synapse0x14293f0() {
   return (neuron0x14033a0()*0.303074);
}

double NNfunction_ss_uRdR::synapse0x1429430() {
   return (neuron0x14036e0()*-0.812196);
}

double NNfunction_ss_uRdR::synapse0x1428ec0() {
   return (neuron0x1403a20()*0.0568404);
}

double NNfunction_ss_uRdR::synapse0x1428f00() {
   return (neuron0x1403f80()*-0.858081);
}

double NNfunction_ss_uRdR::synapse0x1429580() {
   return (neuron0x14041a0()*-0.491341);
}

double NNfunction_ss_uRdR::synapse0x14295c0() {
   return (neuron0x14044e0()*0.243975);
}

double NNfunction_ss_uRdR::synapse0x1429600() {
   return (neuron0x1404820()*0.0975213);
}

double NNfunction_ss_uRdR::synapse0x1429640() {
   return (neuron0x1404b60()*-0.336508);
}

double NNfunction_ss_uRdR::synapse0x1429680() {
   return (neuron0x1404ea0()*0.44892);
}

double NNfunction_ss_uRdR::synapse0x14296c0() {
   return (neuron0x14051e0()*-0.608778);
}

double NNfunction_ss_uRdR::synapse0x1429a40() {
   return (neuron0x1400620()*0.0320514);
}

double NNfunction_ss_uRdR::synapse0x1429a80() {
   return (neuron0x1400960()*-0.0167723);
}

double NNfunction_ss_uRdR::synapse0x1429ac0() {
   return (neuron0x1400ca0()*-0.0373725);
}

double NNfunction_ss_uRdR::synapse0x1429b00() {
   return (neuron0x1400fe0()*-3.90304);
}

double NNfunction_ss_uRdR::synapse0x1429b40() {
   return (neuron0x1401320()*-0.0979181);
}

double NNfunction_ss_uRdR::synapse0x1429b80() {
   return (neuron0x1401660()*-0.0282495);
}

double NNfunction_ss_uRdR::synapse0x1429bc0() {
   return (neuron0x14019a0()*-0.0161956);
}

double NNfunction_ss_uRdR::synapse0x1429c00() {
   return (neuron0x1401ce0()*-0.0095122);
}

double NNfunction_ss_uRdR::synapse0x1429c40() {
   return (neuron0x1402020()*0.0456968);
}

double NNfunction_ss_uRdR::synapse0x1429c80() {
   return (neuron0x1402360()*0.055417);
}

double NNfunction_ss_uRdR::synapse0x1429cc0() {
   return (neuron0x14026a0()*0.0204892);
}

double NNfunction_ss_uRdR::synapse0x1429d00() {
   return (neuron0x14029e0()*0.0410819);
}

double NNfunction_ss_uRdR::synapse0x1429d40() {
   return (neuron0x1402d20()*0.025586);
}

double NNfunction_ss_uRdR::synapse0x1429d80() {
   return (neuron0x1403060()*-0.0514565);
}

double NNfunction_ss_uRdR::synapse0x1429dc0() {
   return (neuron0x14033a0()*-2.47726);
}

double NNfunction_ss_uRdR::synapse0x1429e00() {
   return (neuron0x14036e0()*-0.0542663);
}

double NNfunction_ss_uRdR::synapse0x1429890() {
   return (neuron0x1403a20()*-0.0187521);
}

double NNfunction_ss_uRdR::synapse0x14298d0() {
   return (neuron0x1403f80()*-0.135606);
}

double NNfunction_ss_uRdR::synapse0x1429f50() {
   return (neuron0x14041a0()*0.00121687);
}

double NNfunction_ss_uRdR::synapse0x1429f90() {
   return (neuron0x14044e0()*0.0530254);
}

double NNfunction_ss_uRdR::synapse0x1429fd0() {
   return (neuron0x1404820()*-0.00414873);
}

double NNfunction_ss_uRdR::synapse0x142a010() {
   return (neuron0x1404b60()*0.0108514);
}

double NNfunction_ss_uRdR::synapse0x142a050() {
   return (neuron0x1404ea0()*-0.0223795);
}

double NNfunction_ss_uRdR::synapse0x142a090() {
   return (neuron0x14051e0()*0.00459775);
}

double NNfunction_ss_uRdR::synapse0x1406630() {
   return (neuron0x1405680()*-0.14588);
}

double NNfunction_ss_uRdR::synapse0x1406670() {
   return (neuron0x1405f90()*-0.463393);
}

double NNfunction_ss_uRdR::synapse0x1407b40() {
   return (neuron0x1406a70()*-0.0780603);
}

double NNfunction_ss_uRdR::synapse0x1407b80() {
   return (neuron0x11c0300()*-2.19609);
}

double NNfunction_ss_uRdR::synapse0x1408510() {
   return (neuron0x1407890()*-0.0106744);
}

double NNfunction_ss_uRdR::synapse0x1408550() {
   return (neuron0x1408260()*0.0462039);
}

double NNfunction_ss_uRdR::synapse0x14092e0() {
   return (neuron0x1409030()*-0.0316691);
}

double NNfunction_ss_uRdR::synapse0x1409320() {
   return (neuron0x1409a00()*-0.0040989);
}

double NNfunction_ss_uRdR::synapse0x1409cb0() {
   return (neuron0x140a3d0()*6.76744);
}

double NNfunction_ss_uRdR::synapse0x1409cf0() {
   return (neuron0x140aeb0()*0.289013);
}

double NNfunction_ss_uRdR::synapse0x140a680() {
   return (neuron0x140b880()*-0.33527);
}

double NNfunction_ss_uRdR::synapse0x140a6c0() {
   return (neuron0x1408960()*0.0791316);
}

double NNfunction_ss_uRdR::synapse0x140b160() {
   return (neuron0x140d430()*-0.457314);
}

double NNfunction_ss_uRdR::synapse0x140b1a0() {
   return (neuron0x140de00()*-0.119851);
}

double NNfunction_ss_uRdR::synapse0x140bb30() {
   return (neuron0x140e7d0()*-0.00468849);
}

double NNfunction_ss_uRdR::synapse0x140bb70() {
   return (neuron0x140f1a0()*0.0959008);
}

double NNfunction_ss_uRdR::synapse0x1408c10() {
   return (neuron0x1410fb0()*-0.047939);
}

double NNfunction_ss_uRdR::synapse0x1408c50() {
   return (neuron0x1411290()*-0.0171347);
}

double NNfunction_ss_uRdR::synapse0x140d6e0() {
   return (neuron0x1411c60()*0.145936);
}

double NNfunction_ss_uRdR::synapse0x140d720() {
   return (neuron0x1412630()*1.59785);
}

double NNfunction_ss_uRdR::synapse0x140e0b0() {
   return (neuron0x1413000()*0.0610634);
}

double NNfunction_ss_uRdR::synapse0x140e0f0() {
   return (neuron0x14139d0()*-0.172479);
}

double NNfunction_ss_uRdR::synapse0x140ea80() {
   return (neuron0x140c520()*-0.0368751);
}

double NNfunction_ss_uRdR::synapse0x140eac0() {
   return (neuron0x140cef0()*-0.0545766);
}

double NNfunction_ss_uRdR::synapse0x140f450() {
   return (neuron0x1416760()*0.174388);
}

double NNfunction_ss_uRdR::synapse0x140f490() {
   return (neuron0x1417130()*0.102492);
}

double NNfunction_ss_uRdR::synapse0x14035c0() {
   return (neuron0x1417b00()*0.472737);
}

double NNfunction_ss_uRdR::synapse0x1403600() {
   return (neuron0x14184d0()*0.337832);
}

double NNfunction_ss_uRdR::synapse0x1411540() {
   return (neuron0x1418ea0()*0.118674);
}

double NNfunction_ss_uRdR::synapse0x1411580() {
   return (neuron0x1419870()*3.50833);
}

double NNfunction_ss_uRdR::synapse0x1411f10() {
   return (neuron0x141a240()*-0.100372);
}

double NNfunction_ss_uRdR::synapse0x1411f50() {
   return (neuron0x141ac10()*-0.184394);
}

double NNfunction_ss_uRdR::synapse0x14128e0() {
   return (neuron0x1410ca0()*-0.428069);
}

double NNfunction_ss_uRdR::synapse0x1412920() {
   return (neuron0x141d7f0()*-0.0823128);
}

double NNfunction_ss_uRdR::synapse0x14132b0() {
   return (neuron0x141e1c0()*-0.0277832);
}

double NNfunction_ss_uRdR::synapse0x14132f0() {
   return (neuron0x141eb90()*-0.024718);
}

double NNfunction_ss_uRdR::synapse0x1413c80() {
   return (neuron0x141f560()*-0.0240212);
}

double NNfunction_ss_uRdR::synapse0x1413cc0() {
   return (neuron0x141ff30()*-0.762403);
}

double NNfunction_ss_uRdR::synapse0x140c7d0() {
   return (neuron0x1420900()*-0.0386213);
}

double NNfunction_ss_uRdR::synapse0x140c810() {
   return (neuron0x14212d0()*0.000670262);
}

double NNfunction_ss_uRdR::synapse0x1416080() {
   return (neuron0x1421ca0()*-2.61298);
}

double NNfunction_ss_uRdR::synapse0x14160c0() {
   return (neuron0x1422880()*-0.140239);
}

double NNfunction_ss_uRdR::synapse0x1416a10() {
   return (neuron0x1423250()*0.242296);
}

double NNfunction_ss_uRdR::synapse0x1416a50() {
   return (neuron0x14140d0()*0.0606355);
}

double NNfunction_ss_uRdR::synapse0x14173e0() {
   return (neuron0x1414aa0()*-0.114482);
}

double NNfunction_ss_uRdR::synapse0x1417420() {
   return (neuron0x1415470()*0.0768562);
}

double NNfunction_ss_uRdR::synapse0x1417db0() {
   return (neuron0x1427ab0()*0.170559);
}

double NNfunction_ss_uRdR::synapse0x1417df0() {
   return (neuron0x1428360()*-3.32647);
}

double NNfunction_ss_uRdR::synapse0x1418780() {
   return (neuron0x1428d30()*0.0451474);
}

double NNfunction_ss_uRdR::synapse0x14187c0() {
   return (neuron0x1429700()*0.259768);
}

double NNfunction_ss_uRdR::synapse0x141aec0() {
   return (neuron0x1405680()*-0.178265);
}

double NNfunction_ss_uRdR::synapse0x141af00() {
   return (neuron0x1405f90()*0.974303);
}

double NNfunction_ss_uRdR::synapse0x1410480() {
   return (neuron0x1406a70()*1.22018);
}

double NNfunction_ss_uRdR::synapse0x14104c0() {
   return (neuron0x11c0300()*-0.112723);
}

double NNfunction_ss_uRdR::synapse0x141daa0() {
   return (neuron0x1407890()*1.59725);
}

double NNfunction_ss_uRdR::synapse0x141dae0() {
   return (neuron0x1408260()*-0.147161);
}

double NNfunction_ss_uRdR::synapse0x141e470() {
   return (neuron0x1409030()*-0.829578);
}

double NNfunction_ss_uRdR::synapse0x141e4b0() {
   return (neuron0x1409a00()*-0.71126);
}

double NNfunction_ss_uRdR::synapse0x141ee40() {
   return (neuron0x140a3d0()*-4.24222);
}

double NNfunction_ss_uRdR::synapse0x141ee80() {
   return (neuron0x140aeb0()*-0.291297);
}

double NNfunction_ss_uRdR::synapse0x141f810() {
   return (neuron0x140b880()*-0.0238588);
}

double NNfunction_ss_uRdR::synapse0x141f850() {
   return (neuron0x1408960()*1.05488);
}

double NNfunction_ss_uRdR::synapse0x14201e0() {
   return (neuron0x140d430()*-2.45056);
}

double NNfunction_ss_uRdR::synapse0x1420220() {
   return (neuron0x140de00()*1.0237);
}

double NNfunction_ss_uRdR::synapse0x1420bb0() {
   return (neuron0x140e7d0()*-1.19793);
}

double NNfunction_ss_uRdR::synapse0x1420bf0() {
   return (neuron0x140f1a0()*-1.68152);
}

double NNfunction_ss_uRdR::synapse0x1421580() {
   return (neuron0x1410fb0()*1.05873);
}

double NNfunction_ss_uRdR::synapse0x14215c0() {
   return (neuron0x1411290()*-1.38659);
}

double NNfunction_ss_uRdR::synapse0x1421f50() {
   return (neuron0x1411c60()*-0.720144);
}

double NNfunction_ss_uRdR::synapse0x1421f90() {
   return (neuron0x1412630()*-0.957493);
}

double NNfunction_ss_uRdR::synapse0x1422b30() {
   return (neuron0x1413000()*1.06874);
}

double NNfunction_ss_uRdR::synapse0x1422b70() {
   return (neuron0x14139d0()*-0.110403);
}

double NNfunction_ss_uRdR::synapse0x1423500() {
   return (neuron0x140c520()*-1.31555);
}

double NNfunction_ss_uRdR::synapse0x1423540() {
   return (neuron0x140cef0()*0.917569);
}

double NNfunction_ss_uRdR::synapse0x1414380() {
   return (neuron0x1416760()*1.68837);
}

double NNfunction_ss_uRdR::synapse0x14143c0() {
   return (neuron0x1417130()*-0.588079);
}

double NNfunction_ss_uRdR::synapse0x1414d50() {
   return (neuron0x1417b00()*-0.327297);
}

double NNfunction_ss_uRdR::synapse0x1414d90() {
   return (neuron0x14184d0()*2.41063);
}

double NNfunction_ss_uRdR::synapse0x1415720() {
   return (neuron0x1418ea0()*-0.114897);
}

double NNfunction_ss_uRdR::synapse0x1415760() {
   return (neuron0x1419870()*-2.32617);
}

double NNfunction_ss_uRdR::synapse0x1427c40() {
   return (neuron0x141a240()*0.314556);
}

double NNfunction_ss_uRdR::synapse0x1427c80() {
   return (neuron0x141ac10()*0.284741);
}

double NNfunction_ss_uRdR::synapse0x1428610() {
   return (neuron0x1410ca0()*0.949909);
}

double NNfunction_ss_uRdR::synapse0x1428650() {
   return (neuron0x141d7f0()*-0.814918);
}

double NNfunction_ss_uRdR::synapse0x1428fe0() {
   return (neuron0x141e1c0()*-1.26341);
}

double NNfunction_ss_uRdR::synapse0x1429020() {
   return (neuron0x141eb90()*0.761537);
}

double NNfunction_ss_uRdR::synapse0x14299b0() {
   return (neuron0x141f560()*2.23669);
}

double NNfunction_ss_uRdR::synapse0x14299f0() {
   return (neuron0x141ff30()*-0.397223);
}

double NNfunction_ss_uRdR::synapse0x14058a0() {
   return (neuron0x1420900()*1.38744);
}

double NNfunction_ss_uRdR::synapse0x14058e0() {
   return (neuron0x14212d0()*0.942156);
}

double NNfunction_ss_uRdR::synapse0x1419150() {
   return (neuron0x1421ca0()*-2.90558);
}

double NNfunction_ss_uRdR::synapse0x1419190() {
   return (neuron0x1422880()*0.217116);
}

double NNfunction_ss_uRdR::synapse0x142a0d0() {
   return (neuron0x1423250()*1.16746);
}

double NNfunction_ss_uRdR::synapse0x142a110() {
   return (neuron0x14140d0()*0.781777);
}

double NNfunction_ss_uRdR::synapse0x142a150() {
   return (neuron0x1414aa0()*-0.401865);
}

double NNfunction_ss_uRdR::synapse0x142a190() {
   return (neuron0x1415470()*0.89825);
}

double NNfunction_ss_uRdR::synapse0x1431040() {
   return (neuron0x1427ab0()*-0.637627);
}

double NNfunction_ss_uRdR::synapse0x1431080() {
   return (neuron0x1428360()*-2.19322);
}

double NNfunction_ss_uRdR::synapse0x14310c0() {
   return (neuron0x1428d30()*-0.96741);
}

double NNfunction_ss_uRdR::synapse0x1431100() {
   return (neuron0x1429700()*2.18417);
}

double NNfunction_ss_uRdR::synapse0x1431480() {
   return (neuron0x1405680()*-0.0552792);
}

double NNfunction_ss_uRdR::synapse0x14314c0() {
   return (neuron0x1405f90()*-1.67573);
}

double NNfunction_ss_uRdR::synapse0x1431500() {
   return (neuron0x1406a70()*0.927163);
}

double NNfunction_ss_uRdR::synapse0x1431540() {
   return (neuron0x11c0300()*-2.59515);
}

double NNfunction_ss_uRdR::synapse0x1431580() {
   return (neuron0x1407890()*0.214811);
}

double NNfunction_ss_uRdR::synapse0x14315c0() {
   return (neuron0x1408260()*0.146551);
}

double NNfunction_ss_uRdR::synapse0x1431600() {
   return (neuron0x1409030()*-0.237393);
}

double NNfunction_ss_uRdR::synapse0x1431640() {
   return (neuron0x1409a00()*-0.0356292);
}

double NNfunction_ss_uRdR::synapse0x1431680() {
   return (neuron0x140a3d0()*1.02449);
}

double NNfunction_ss_uRdR::synapse0x14316c0() {
   return (neuron0x140aeb0()*-1.61524);
}

double NNfunction_ss_uRdR::synapse0x1431700() {
   return (neuron0x140b880()*0.653136);
}

double NNfunction_ss_uRdR::synapse0x1431740() {
   return (neuron0x1408960()*-0.121466);
}

double NNfunction_ss_uRdR::synapse0x1431780() {
   return (neuron0x140d430()*-0.530074);
}

double NNfunction_ss_uRdR::synapse0x14317c0() {
   return (neuron0x140de00()*0.677101);
}

double NNfunction_ss_uRdR::synapse0x1431800() {
   return (neuron0x140e7d0()*-0.354982);
}

double NNfunction_ss_uRdR::synapse0x1431840() {
   return (neuron0x140f1a0()*-0.776492);
}

double NNfunction_ss_uRdR::synapse0x14312d0() {
   return (neuron0x1410fb0()*0.317379);
}

double NNfunction_ss_uRdR::synapse0x1431310() {
   return (neuron0x1411290()*-0.173948);
}

double NNfunction_ss_uRdR::synapse0x1431990() {
   return (neuron0x1411c60()*-0.0185906);
}

double NNfunction_ss_uRdR::synapse0x14319d0() {
   return (neuron0x1412630()*-1.1149);
}

double NNfunction_ss_uRdR::synapse0x1431a10() {
   return (neuron0x1413000()*-0.137743);
}

double NNfunction_ss_uRdR::synapse0x1431a50() {
   return (neuron0x14139d0()*2.68378);
}

double NNfunction_ss_uRdR::synapse0x1431a90() {
   return (neuron0x140c520()*-0.142866);
}

double NNfunction_ss_uRdR::synapse0x1431ad0() {
   return (neuron0x140cef0()*0.515987);
}

double NNfunction_ss_uRdR::synapse0x1431b10() {
   return (neuron0x1416760()*2.7609);
}

double NNfunction_ss_uRdR::synapse0x1431b50() {
   return (neuron0x1417130()*-0.805043);
}

double NNfunction_ss_uRdR::synapse0x1431b90() {
   return (neuron0x1417b00()*-1.23563);
}

double NNfunction_ss_uRdR::synapse0x1431bd0() {
   return (neuron0x14184d0()*-0.739908);
}

double NNfunction_ss_uRdR::synapse0x1431c10() {
   return (neuron0x1418ea0()*0.0566696);
}

double NNfunction_ss_uRdR::synapse0x1431c50() {
   return (neuron0x1419870()*5.21471);
}

double NNfunction_ss_uRdR::synapse0x1431c90() {
   return (neuron0x141a240()*-1.25393);
}

double NNfunction_ss_uRdR::synapse0x1431cd0() {
   return (neuron0x141ac10()*1.83652);
}

double NNfunction_ss_uRdR::synapse0x1431880() {
   return (neuron0x1410ca0()*0.865599);
}

double NNfunction_ss_uRdR::synapse0x14318c0() {
   return (neuron0x141d7f0()*0.305226);
}

double NNfunction_ss_uRdR::synapse0x1431900() {
   return (neuron0x141e1c0()*-0.108683);
}

double NNfunction_ss_uRdR::synapse0x1431940() {
   return (neuron0x141eb90()*0.570186);
}

double NNfunction_ss_uRdR::synapse0x1431f20() {
   return (neuron0x141f560()*0.979382);
}

double NNfunction_ss_uRdR::synapse0x1431f60() {
   return (neuron0x141ff30()*-0.492724);
}

double NNfunction_ss_uRdR::synapse0x1431fa0() {
   return (neuron0x1420900()*0.0158569);
}

double NNfunction_ss_uRdR::synapse0x1431fe0() {
   return (neuron0x14212d0()*0.116147);
}

double NNfunction_ss_uRdR::synapse0x1432020() {
   return (neuron0x1421ca0()*-2.83396);
}

double NNfunction_ss_uRdR::synapse0x1432060() {
   return (neuron0x1422880()*0.640895);
}

double NNfunction_ss_uRdR::synapse0x14320a0() {
   return (neuron0x1423250()*1.12956);
}

double NNfunction_ss_uRdR::synapse0x14320e0() {
   return (neuron0x14140d0()*0.102525);
}

double NNfunction_ss_uRdR::synapse0x1432120() {
   return (neuron0x1414aa0()*0.415166);
}

double NNfunction_ss_uRdR::synapse0x1432160() {
   return (neuron0x1415470()*-0.42545);
}

double NNfunction_ss_uRdR::synapse0x14321a0() {
   return (neuron0x1427ab0()*-0.686896);
}

double NNfunction_ss_uRdR::synapse0x14321e0() {
   return (neuron0x1428360()*-0.360307);
}

double NNfunction_ss_uRdR::synapse0x1432220() {
   return (neuron0x1428d30()*-0.116952);
}

double NNfunction_ss_uRdR::synapse0x1432260() {
   return (neuron0x1429700()*-1.33369);
}

double NNfunction_ss_uRdR::synapse0x14325e0() {
   return (neuron0x1405680()*0.0424705);
}

double NNfunction_ss_uRdR::synapse0x1432620() {
   return (neuron0x1405f90()*0.222059);
}

double NNfunction_ss_uRdR::synapse0x1432660() {
   return (neuron0x1406a70()*0.0349528);
}

double NNfunction_ss_uRdR::synapse0x14326a0() {
   return (neuron0x11c0300()*-0.231309);
}

double NNfunction_ss_uRdR::synapse0x14326e0() {
   return (neuron0x1407890()*-0.014891);
}

double NNfunction_ss_uRdR::synapse0x1432720() {
   return (neuron0x1408260()*0.0173966);
}

double NNfunction_ss_uRdR::synapse0x1432760() {
   return (neuron0x1409030()*0.00860008);
}

double NNfunction_ss_uRdR::synapse0x14327a0() {
   return (neuron0x1409a00()*-0.00871071);
}

double NNfunction_ss_uRdR::synapse0x14327e0() {
   return (neuron0x140a3d0()*-0.132304);
}

double NNfunction_ss_uRdR::synapse0x1432820() {
   return (neuron0x140aeb0()*0.0645013);
}

double NNfunction_ss_uRdR::synapse0x1432860() {
   return (neuron0x140b880()*-0.043624);
}

double NNfunction_ss_uRdR::synapse0x14328a0() {
   return (neuron0x1408960()*-0.000114431);
}

double NNfunction_ss_uRdR::synapse0x14328e0() {
   return (neuron0x140d430()*-0.629845);
}

double NNfunction_ss_uRdR::synapse0x1432920() {
   return (neuron0x140de00()*0.0301249);
}

double NNfunction_ss_uRdR::synapse0x1432960() {
   return (neuron0x140e7d0()*-0.0124859);
}

double NNfunction_ss_uRdR::synapse0x14329a0() {
   return (neuron0x140f1a0()*-0.011168);
}

double NNfunction_ss_uRdR::synapse0x1432430() {
   return (neuron0x1410fb0()*0.0021762);
}

double NNfunction_ss_uRdR::synapse0x1432470() {
   return (neuron0x1411290()*-0.00709669);
}

double NNfunction_ss_uRdR::synapse0x1432af0() {
   return (neuron0x1411c60()*-0.914185);
}

double NNfunction_ss_uRdR::synapse0x1432b30() {
   return (neuron0x1412630()*0.637775);
}

double NNfunction_ss_uRdR::synapse0x1432b70() {
   return (neuron0x1413000()*-0.00573234);
}

double NNfunction_ss_uRdR::synapse0x1432bb0() {
   return (neuron0x14139d0()*0.0473569);
}

double NNfunction_ss_uRdR::synapse0x1432bf0() {
   return (neuron0x140c520()*-0.00595685);
}

double NNfunction_ss_uRdR::synapse0x1432c30() {
   return (neuron0x140cef0()*0.0168063);
}

double NNfunction_ss_uRdR::synapse0x1432c70() {
   return (neuron0x1416760()*-0.0474084);
}

double NNfunction_ss_uRdR::synapse0x1432cb0() {
   return (neuron0x1417130()*0.0327281);
}

double NNfunction_ss_uRdR::synapse0x1432cf0() {
   return (neuron0x1417b00()*0.999747);
}

double NNfunction_ss_uRdR::synapse0x1432d30() {
   return (neuron0x14184d0()*-0.00942375);
}

double NNfunction_ss_uRdR::synapse0x1432d70() {
   return (neuron0x1418ea0()*-1.03296);
}

double NNfunction_ss_uRdR::synapse0x1432db0() {
   return (neuron0x1419870()*0.328301);
}

double NNfunction_ss_uRdR::synapse0x1432df0() {
   return (neuron0x141a240()*0.294673);
}

double NNfunction_ss_uRdR::synapse0x1432e30() {
   return (neuron0x141ac10()*0.664633);
}

double NNfunction_ss_uRdR::synapse0x14329e0() {
   return (neuron0x1410ca0()*-2.00552);
}

double NNfunction_ss_uRdR::synapse0x1432a20() {
   return (neuron0x141d7f0()*0.00131044);
}

double NNfunction_ss_uRdR::synapse0x1432a60() {
   return (neuron0x141e1c0()*-0.0266917);
}

double NNfunction_ss_uRdR::synapse0x1432aa0() {
   return (neuron0x141eb90()*-0.153832);
}

double NNfunction_ss_uRdR::synapse0x1433080() {
   return (neuron0x141f560()*0.024682);
}

double NNfunction_ss_uRdR::synapse0x14330c0() {
   return (neuron0x141ff30()*0.85177);
}

double NNfunction_ss_uRdR::synapse0x1433100() {
   return (neuron0x1420900()*0.009816);
}

double NNfunction_ss_uRdR::synapse0x1433140() {
   return (neuron0x14212d0()*-0.0159966);
}

double NNfunction_ss_uRdR::synapse0x1433180() {
   return (neuron0x1421ca0()*0.122028);
}

double NNfunction_ss_uRdR::synapse0x14331c0() {
   return (neuron0x1422880()*0.0150916);
}

double NNfunction_ss_uRdR::synapse0x1433200() {
   return (neuron0x1423250()*-0.11404);
}

double NNfunction_ss_uRdR::synapse0x1433240() {
   return (neuron0x14140d0()*-0.00619138);
}

double NNfunction_ss_uRdR::synapse0x1433280() {
   return (neuron0x1414aa0()*0.0125229);
}

double NNfunction_ss_uRdR::synapse0x14332c0() {
   return (neuron0x1415470()*-0.0127967);
}

double NNfunction_ss_uRdR::synapse0x1433300() {
   return (neuron0x1427ab0()*0.0734959);
}

double NNfunction_ss_uRdR::synapse0x1433340() {
   return (neuron0x1428360()*-0.13346);
}

double NNfunction_ss_uRdR::synapse0x1433380() {
   return (neuron0x1428d30()*-0.0158488);
}

double NNfunction_ss_uRdR::synapse0x14333c0() {
   return (neuron0x1429700()*0.375972);
}

double NNfunction_ss_uRdR::synapse0x1433740() {
   return (neuron0x1405680()*0.412523);
}

double NNfunction_ss_uRdR::synapse0x1433780() {
   return (neuron0x1405f90()*-0.219231);
}

double NNfunction_ss_uRdR::synapse0x14337c0() {
   return (neuron0x1406a70()*0.0258733);
}

double NNfunction_ss_uRdR::synapse0x1433800() {
   return (neuron0x11c0300()*-1.72037);
}

double NNfunction_ss_uRdR::synapse0x1433840() {
   return (neuron0x1407890()*-0.187689);
}

double NNfunction_ss_uRdR::synapse0x1433880() {
   return (neuron0x1408260()*0.171004);
}

double NNfunction_ss_uRdR::synapse0x14338c0() {
   return (neuron0x1409030()*0.129638);
}

double NNfunction_ss_uRdR::synapse0x1433900() {
   return (neuron0x1409a00()*0.00161577);
}

double NNfunction_ss_uRdR::synapse0x1433940() {
   return (neuron0x140a3d0()*1.11354);
}

double NNfunction_ss_uRdR::synapse0x1433980() {
   return (neuron0x140aeb0()*-0.296425);
}

double NNfunction_ss_uRdR::synapse0x14339c0() {
   return (neuron0x140b880()*-0.204786);
}

double NNfunction_ss_uRdR::synapse0x1433a00() {
   return (neuron0x1408960()*-0.104688);
}

double NNfunction_ss_uRdR::synapse0x1433a40() {
   return (neuron0x140d430()*-1.2144);
}

double NNfunction_ss_uRdR::synapse0x1433a80() {
   return (neuron0x140de00()*0.0344031);
}

double NNfunction_ss_uRdR::synapse0x1433ac0() {
   return (neuron0x140e7d0()*0.0123052);
}

double NNfunction_ss_uRdR::synapse0x1433b00() {
   return (neuron0x140f1a0()*0.0338778);
}

double NNfunction_ss_uRdR::synapse0x1433590() {
   return (neuron0x1410fb0()*-0.0241832);
}

double NNfunction_ss_uRdR::synapse0x14335d0() {
   return (neuron0x1411290()*0.0455838);
}

double NNfunction_ss_uRdR::synapse0x1433c50() {
   return (neuron0x1411c60()*1.0576);
}

double NNfunction_ss_uRdR::synapse0x1433c90() {
   return (neuron0x1412630()*0.555258);
}

double NNfunction_ss_uRdR::synapse0x1433cd0() {
   return (neuron0x1413000()*-0.0792062);
}

double NNfunction_ss_uRdR::synapse0x1433d10() {
   return (neuron0x14139d0()*-0.111289);
}

double NNfunction_ss_uRdR::synapse0x1433d50() {
   return (neuron0x140c520()*0.0530641);
}

double NNfunction_ss_uRdR::synapse0x1433d90() {
   return (neuron0x140cef0()*0.0536475);
}

double NNfunction_ss_uRdR::synapse0x1433dd0() {
   return (neuron0x1416760()*0.0113866);
}

double NNfunction_ss_uRdR::synapse0x1433e10() {
   return (neuron0x1417130()*-0.140506);
}

double NNfunction_ss_uRdR::synapse0x1433e50() {
   return (neuron0x1417b00()*0.571783);
}

double NNfunction_ss_uRdR::synapse0x1433e90() {
   return (neuron0x14184d0()*-0.265462);
}

double NNfunction_ss_uRdR::synapse0x1433ed0() {
   return (neuron0x1418ea0()*-0.15874);
}

double NNfunction_ss_uRdR::synapse0x1433f10() {
   return (neuron0x1419870()*2.93458);
}

double NNfunction_ss_uRdR::synapse0x1433f50() {
   return (neuron0x141a240()*-1.17451);
}

double NNfunction_ss_uRdR::synapse0x1433f90() {
   return (neuron0x141ac10()*-0.403166);
}

double NNfunction_ss_uRdR::synapse0x1433b40() {
   return (neuron0x1410ca0()*0.340023);
}

double NNfunction_ss_uRdR::synapse0x1433b80() {
   return (neuron0x141d7f0()*0.0704455);
}

double NNfunction_ss_uRdR::synapse0x1433bc0() {
   return (neuron0x141e1c0()*-0.0161277);
}

double NNfunction_ss_uRdR::synapse0x1433c00() {
   return (neuron0x141eb90()*-1.06271);
}

double NNfunction_ss_uRdR::synapse0x14341e0() {
   return (neuron0x141f560()*3.01604);
}

double NNfunction_ss_uRdR::synapse0x1434220() {
   return (neuron0x141ff30()*-0.974741);
}

double NNfunction_ss_uRdR::synapse0x1434260() {
   return (neuron0x1420900()*0.0384171);
}

double NNfunction_ss_uRdR::synapse0x14342a0() {
   return (neuron0x14212d0()*-0.0791888);
}

double NNfunction_ss_uRdR::synapse0x14342e0() {
   return (neuron0x1421ca0()*0.839471);
}

double NNfunction_ss_uRdR::synapse0x1434320() {
   return (neuron0x1422880()*0.0740608);
}

double NNfunction_ss_uRdR::synapse0x1434360() {
   return (neuron0x1423250()*-0.109766);
}

double NNfunction_ss_uRdR::synapse0x14343a0() {
   return (neuron0x14140d0()*-0.11091);
}

double NNfunction_ss_uRdR::synapse0x14343e0() {
   return (neuron0x1414aa0()*0.089528);
}

double NNfunction_ss_uRdR::synapse0x1434420() {
   return (neuron0x1415470()*-0.0511802);
}

double NNfunction_ss_uRdR::synapse0x1434460() {
   return (neuron0x1427ab0()*-0.120765);
}

double NNfunction_ss_uRdR::synapse0x14344a0() {
   return (neuron0x1428360()*-1.11031);
}

double NNfunction_ss_uRdR::synapse0x14344e0() {
   return (neuron0x1428d30()*-0.0552992);
}

double NNfunction_ss_uRdR::synapse0x1434520() {
   return (neuron0x1429700()*0.900725);
}

double NNfunction_ss_uRdR::synapse0x1405640() {
   return (neuron0x1430900()*-6.43933);
}

double NNfunction_ss_uRdR::synapse0x1434780() {
   return (neuron0x1430ca0()*-6.49832);
}

double NNfunction_ss_uRdR::synapse0x14347c0() {
   return (neuron0x1431140()*-4.88037);
}

double NNfunction_ss_uRdR::synapse0x1434800() {
   return (neuron0x14322a0()*10.9208);
}

double NNfunction_ss_uRdR::synapse0x1434840() {
   return (neuron0x1433400()*-3.41177);
}

